namespace Caribou {

    private class XmlDeserializer : Object {

        public static string? get_layout_file_inner (string data_dir,
                                                    string group,
                                                    string variant) {
            string[] files = {@"$(group)_$(variant).xml", @"$(group).xml"};

            foreach (string fn in files) {
                string layout_fn = GLib.Path.build_filename (data_dir, fn);
                GLib.File fp = GLib.File.new_for_path (layout_fn);
                if (fp.query_exists ())
                    return layout_fn;
            }

            return null;
        }

        public static string get_layout_file (string keyboard_type, string group,
                                              string variant) throws IOError {

            Gee.ArrayList<string> dirs = new Gee.ArrayList<string> ();
            string custom_dir = Environment.get_variable("CARIBOU_LAYOUTS_DIR");

            if (custom_dir != null)
                dirs.add (Path.build_filename (custom_dir, "layouts",
                                               keyboard_type));

            dirs.add (Path.build_filename (Environment.get_user_data_dir (),
                                           "caribou", "layouts", keyboard_type));

            foreach (string dir in Environment.get_system_data_dirs ()) {
                dirs.add (Path.build_filename (
                              dir, "caribou", "layouts", keyboard_type));
            }

            // If no such keyboard type is found, default to "touch"
            dirs.add (Path.build_filename (Environment.get_user_data_dir (),
                                           "caribou", "layouts", "touch"));

            foreach (string dir in Environment.get_system_data_dirs ()) {
                dirs.add (Path.build_filename (
                              dir, "caribou", "layouts", "touch"));
            }

            foreach (string data_dir in dirs) {
                string fn = get_layout_file_inner (data_dir, group, variant);
                if (fn != null)
                    return fn;
            }

            // If no layout file is found, default to US
            foreach (string data_dir in dirs) {
                string fn = get_layout_file_inner (data_dir, "us", "");
                if (fn != null)
                    return fn;
            }

            // Should not be reached, but needed to make valac happy
            throw new IOError.NOT_FOUND (
                "Could not find layout file for %s %s", group, variant);
        }

        public static GroupModel? load_group (string keyboard_type,
                                              string group, string variant) {
            Xml.Doc* doc;

            try {
                string fn = get_layout_file (keyboard_type, group, variant);
                doc = Xml.Parser.parse_file (fn);
                if (doc == null)
                    throw new IOError.FAILED (
                        "Cannot load XML text reader for %s", fn);
            } catch (GLib.Error e) {
                stdout.printf ("Failed to load XML: %s\n", e.message);
                return null;
            }

            GroupModel grp = new GroupModel (group, variant);
            Xml.Node* node = doc->children;

            create_levels_from_xml (grp, node);

            delete doc;
            Xml.Parser.cleanup ();

            return grp;
        }

        public static void create_levels_from_xml (GroupModel group,
                                                   Xml.Node* node) {
            assert (node->name == "layout");
            for (Xml.Node* iter = node->children; iter != null; iter = iter->next) {
                if (iter->type != Xml.ElementType.ELEMENT_NODE)
                    continue;

                string levelname = iter->get_prop ("name");
                string mode = iter->get_prop ("mode");

                LevelModel level = new LevelModel(mode);
                load_rows (level, iter);

                group.add_level(levelname, level);
            }
        }

        public static void load_rows (LevelModel level, Xml.Node* node) {
            assert (node->name == "level");
            for (Xml.Node* i = node->children; i != null; i = i->next) {
                if (i->type != Xml.ElementType.ELEMENT_NODE)
                    continue;

                RowModel row = new RowModel ();
                level.add_row (row);

                for (Xml.Node* i2 = i->children; i2 != null; i2 = i2->next) {
                    if (i2->type != Xml.ElementType.ELEMENT_NODE)
                        continue;

                    if (i2->name == "key") {
                        load_column (row, i->get_prop ("align"), i);
                        break;
                    }

                    load_column (row, i2->get_prop ("align"), i2);
                }
            }
        }

        public static void load_column (RowModel row, string? align, Xml.Node* node) {
            ColumnModel column = new ColumnModel ();
            row.add_column (column);

            for (Xml.Node* i = node->children; i != null; i = i->next) {
                if (i->type != Xml.ElementType.ELEMENT_NODE)
                    continue;

                column.add_key (load_key (i, align));
            }
        }

        public static KeyModel load_key (Xml.Node* node, string? align) {
            assert (node->name == "key");

            string name = node->get_prop ("name");
            assert (name != null);

            string? text = node->get_prop ("text");
            string? label_override = node->get_prop ("label");

            KeyModel key = new KeyModel (name, text);
            if (label_override != null)
                key.label = label_override;

            if (align != null)
                key.align = align;

            for (Xml.Attr* prop = node->properties; prop != null; prop = prop->next) {
                if (prop->name == "toggle")
                    key.toggle = prop->children->content;
                else if (prop->name == "align")
                    key.align = prop->children->content;
                else if (prop->name == "width")
                    key.width = double.parse (prop->children->content);
                else if (prop->name == "repeatable" && text == null)
                    key.repeatable = prop->children->content == "yes";
            }

            for (Xml.Node* i = node->children; i != null; i = i->next) {
                if (i->type != Xml.ElementType.ELEMENT_NODE)
                    continue;

                key.add_subkey (load_key (i, null));
            }

            return key;
        }
    }
}
