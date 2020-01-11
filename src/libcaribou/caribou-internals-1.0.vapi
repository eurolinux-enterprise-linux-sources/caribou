/* caribou-internals-1.0.vapi generated by valac 0.32.0.49-00a57, do not modify. */

namespace Caribou {
	[CCode (cheader_filename = "caribou-internals.h")]
	public abstract class DisplayAdapter : GLib.Object {
		public abstract void keyval_press (uint keyval);
		public abstract void keyval_release (uint keyval);
		public abstract void mod_lock (uint mask);
		public abstract void mod_unlock (uint mask);
		public abstract void mod_latch (uint mask);
		public abstract void mod_unlatch (uint mask);
		public abstract uint get_current_group (out string group_name, out string variant_name);
		public abstract void get_groups (out string[] group_names, out string[] variant_names);
		public abstract void register_key_func (uint keyval, Caribou.KeyButtonCallback? func);
		public abstract void register_button_func (uint button, Caribou.KeyButtonCallback? func);
		public static bool set_default (Caribou.DisplayAdapter adapter);
		public static Caribou.DisplayAdapter get_default ();
		public DisplayAdapter ();
		public Gdk.Display display { get; construct; }
		public signal void modifiers_changed (uint modifiers);
		public signal void group_changed (uint gid, string group, string variant);
		public signal void config_changed ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class NullAdapter : Caribou.DisplayAdapter {
		public override void keyval_press (uint keyval);
		public override void keyval_release (uint keyval);
		public override void mod_lock (uint mask);
		public override void mod_unlock (uint mask);
		public override void mod_latch (uint mask);
		public override void mod_unlatch (uint mask);
		public override uint get_current_group (out string group_name, out string variant_name);
		public override void get_groups (out string[] group_names, out string[] variant_names);
		public override void register_key_func (uint keyval, Caribou.KeyButtonCallback? func);
		public override void register_button_func (uint button, Caribou.KeyButtonCallback? func);
		public NullAdapter ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class XAdapter : Caribou.DisplayAdapter {
		public override void keyval_press (uint keyval);
		public override void keyval_release (uint keyval);
		public override void mod_lock (uint mask);
		public override void mod_unlock (uint mask);
		public override void mod_latch (uint mask);
		public override void mod_unlatch (uint mask);
		public override uint get_current_group (out string group_name, out string variant_name);
		public override void get_groups (out string[] group_names, out string[] variant_names);
		public override void register_key_func (uint keyval, Caribou.KeyButtonCallback? func);
		public override void register_button_func (uint button, Caribou.KeyButtonCallback? func);
		public XAdapter ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class KeyboardModel : GLib.Object, Caribou.IKeyboardObject {
		public string[] get_groups ();
		public Caribou.GroupModel get_group (string group_name);
		public KeyboardModel ();
		public string active_group { get; private set; }
		public string keyboard_type { get; construct; }
		public string keyboard_file { get; construct; }
		public signal void group_added (string name);
		public signal void group_removed (string name);
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	[DBus (name = "org.gnome.Caribou.Keyboard")]
	public abstract class KeyboardService : GLib.Object {
		public abstract void set_cursor_location (int x, int y, int w, int h);
		public abstract void set_entry_location (int x, int y, int w, int h);
		public abstract void show (uint32 timestamp);
		public abstract void hide (uint32 timestamp);
		protected void register_keyboard (string name);
		protected virtual void name_lost (string name);
		public KeyboardService ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class GroupModel : GLib.Object, Caribou.IKeyboardObject {
		public string group;
		public string variant;
		public GroupModel (string group, string variant);
		public static string create_group_name (string group, string variant);
		internal void add_level (string lname, Caribou.LevelModel level);
		public string[] get_levels ();
		public Caribou.LevelModel get_level (string level_name);
		public string active_level { get; private set; }
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class LevelModel : Caribou.ScannableGroup, Caribou.IKeyboardObject {
		public LevelModel (string mode);
		internal void add_row (Caribou.RowModel row);
		public Caribou.RowModel[] get_rows ();
		public override Caribou.IScannableItem[] get_scan_children ();
		public string mode { get; private set; }
		public signal void level_toggled (string new_level);
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class RowModel : Caribou.ScannableGroup, Caribou.IScannableItem, Caribou.IKeyboardObject {
		public RowModel ();
		internal void add_column (Caribou.ColumnModel column);
		public Caribou.ColumnModel[] get_columns ();
		public override Caribou.IScannableItem[] get_scan_children ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class KeyModel : GLib.Object, Caribou.IScannableItem, Caribou.IKeyboardObject {
		public Caribou.ModifierState modifier_state;
		public KeyModel (string name, string? text = null);
		internal void add_subkey (Caribou.KeyModel key);
		public void press ();
		public void release ();
		public Caribou.KeyModel[] get_extended_keys ();
		public void activate ();
		public string align { get; set; }
		public double width { get; set; }
		public string toggle { get; set; }
		public bool repeatable { get; set; }
		public bool is_modifier { get; set; }
		public bool show_subkeys { get; private set; }
		public string name { get; private set; }
		public uint keyval { get; private set; }
		public string? text { get; private set construct; }
		public string label { get; set; }
		public signal void key_hold_end ();
		public signal void key_hold ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class ColumnModel : Caribou.ScannableGroup, Caribou.IScannableItem, Caribou.IKeyboardObject {
		public ColumnModel ();
		internal void add_key (Caribou.KeyModel key);
		public Caribou.KeyModel get_key (int index);
		public Caribou.KeyModel first_key ();
		public override Caribou.IScannableItem[] get_scan_children ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public class Scanner : GLib.Object {
		public void set_keyboard (Caribou.KeyboardModel keyboard);
		public void reset ();
		public Scanner ();
		public bool bind_settings { get; construct; }
		public int scan_grouping { get; set construct; }
		public bool scan_enabled { get; set construct; }
		public double step_time { get; set construct; }
		public string switch_device { get; set construct; }
		public string keyboard_key { get; set construct; }
		public int mouse_button { get; set construct; }
		public int scan_cycles { get; set construct; }
		public bool autorestart { get; set construct; }
		public bool inverse_scanning { get; set construct; }
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public abstract class ScannableGroup : GLib.Object, Caribou.IScannableGroup {
		public abstract Caribou.IScannableItem[] get_scan_children ();
		public virtual Caribou.IScannableItem? child_select ();
		public ScannableGroup ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	internal class XmlDeserializer : GLib.Object {
		public static string? get_layout_file_inner (string data_dir, string group, string variant);
		public static string get_layout_file (string keyboard_type, string group, string variant) throws GLib.IOError;
		public static Caribou.GroupModel? load_group_from_file (string filename);
		public static Caribou.GroupModel? load_group (string keyboard_type, string group, string variant);
		public static void create_levels_from_xml (Caribou.GroupModel group, Xml.Node* node);
		public static void load_rows (Caribou.LevelModel level, Xml.Node* node);
		public static void load_column (Caribou.RowModel row, string? align, Xml.Node* node);
		public static Caribou.KeyModel load_key (Xml.Node* node, string? align);
		public XmlDeserializer ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public interface IScannableItem : GLib.Object {
		public abstract bool scan_stepping { get; set; }
		public abstract bool scan_selected { get; set; }
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public interface IScannableGroup : GLib.Object {
		public abstract Caribou.IScannableItem? child_select ();
		public abstract void scan_reset ();
		public abstract Caribou.IScannableItem[] get_scan_children ();
		public abstract Caribou.IScannableItem? child_step (int cycles);
		public abstract Caribou.IScannableItem[] get_step_path ();
		public abstract Caribou.IScannableItem[] get_selected_path ();
		public abstract Caribou.ScanGrouping scan_grouping { get; set; }
		public signal void selected_item_changed (Caribou.IScannableItem? selected_item);
		public signal void step_item_changed (Caribou.IScannableItem? step_item);
		public signal void scan_cleared ();
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public interface IKeyboardObject : GLib.Object {
		public abstract Caribou.IKeyboardObject[] get_children ();
		public virtual Caribou.KeyModel[] get_keys ();
		public signal void key_clicked (Caribou.KeyModel key);
		public signal void key_pressed (Caribou.KeyModel key);
		public signal void key_released (Caribou.KeyModel key);
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	internal struct ModifierMapEntry {
		public string name;
		public Gdk.ModifierType mask;
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	internal struct LabelMapEntry {
		public string name;
		public string label;
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public enum ModifierState {
		NONE,
		LATCHED,
		LOCKED
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public enum ScanGrouping {
		NONE,
		SUBGROUPS,
		ROWS,
		LINEAR
	}
	[CCode (cheader_filename = "caribou-internals.h")]
	public delegate void KeyButtonCallback (uint keybuttoncode, bool pressed);
}
