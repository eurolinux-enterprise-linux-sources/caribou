/* caribou-gtk-module.h generated by valac 0.20.1.19-a6516, the Vala compiler, do not modify */


#ifndef __CARIBOU_GTK_MODULE_H__
#define __CARIBOU_GTK_MODULE_H__

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define CARIBOU_TYPE_KEYBOARD (caribou_keyboard_get_type ())
#define CARIBOU_KEYBOARD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_KEYBOARD, CaribouKeyboard))
#define CARIBOU_IS_KEYBOARD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_KEYBOARD))
#define CARIBOU_KEYBOARD_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_KEYBOARD, CaribouKeyboardIface))

typedef struct _CaribouKeyboard CaribouKeyboard;
typedef struct _CaribouKeyboardIface CaribouKeyboardIface;

#define CARIBOU_TYPE_KEYBOARD_PROXY (caribou_keyboard_proxy_get_type ())

#define CARIBOU_TYPE_GTK_MODULE (caribou_gtk_module_get_type ())
#define CARIBOU_GTK_MODULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_GTK_MODULE, CaribouGtkModule))
#define CARIBOU_GTK_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_GTK_MODULE, CaribouGtkModuleClass))
#define CARIBOU_IS_GTK_MODULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_GTK_MODULE))
#define CARIBOU_IS_GTK_MODULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_GTK_MODULE))
#define CARIBOU_GTK_MODULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_GTK_MODULE, CaribouGtkModuleClass))

typedef struct _CaribouGtkModule CaribouGtkModule;
typedef struct _CaribouGtkModuleClass CaribouGtkModuleClass;
typedef struct _CaribouGtkModulePrivate CaribouGtkModulePrivate;

struct _CaribouKeyboardIface {
	GTypeInterface parent_iface;
	void (*set_cursor_location) (CaribouKeyboard* self, gint x, gint y, gint w, gint h, GError** error);
	void (*set_entry_location) (CaribouKeyboard* self, gint x, gint y, gint w, gint h, GError** error);
	void (*show) (CaribouKeyboard* self, guint32 timestamp, GError** error);
	void (*hide) (CaribouKeyboard* self, guint32 timestamp, GError** error);
};

struct _CaribouGtkModule {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CaribouGtkModulePrivate * priv;
};

struct _CaribouGtkModuleClass {
	GTypeClass parent_class;
	void (*finalize) (CaribouGtkModule *self);
};


GType caribou_keyboard_proxy_get_type (void) G_GNUC_CONST;
guint caribou_keyboard_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType caribou_keyboard_get_type (void) G_GNUC_CONST;
void caribou_keyboard_set_cursor_location (CaribouKeyboard* self, gint x, gint y, gint w, gint h, GError** error);
void caribou_keyboard_set_entry_location (CaribouKeyboard* self, gint x, gint y, gint w, gint h, GError** error);
void caribou_keyboard_show (CaribouKeyboard* self, guint32 timestamp, GError** error);
void caribou_keyboard_hide (CaribouKeyboard* self, guint32 timestamp, GError** error);
gpointer caribou_gtk_module_ref (gpointer instance);
void caribou_gtk_module_unref (gpointer instance);
GParamSpec* caribou_param_spec_gtk_module (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void caribou_value_set_gtk_module (GValue* value, gpointer v_object);
void caribou_value_take_gtk_module (GValue* value, gpointer v_object);
gpointer caribou_value_get_gtk_module (const GValue* value);
GType caribou_gtk_module_get_type (void) G_GNUC_CONST;
CaribouGtkModule* caribou_gtk_module_new (void);
CaribouGtkModule* caribou_gtk_module_construct (GType object_type);
void caribou_gtk_module_unload (CaribouGtkModule* self);


G_END_DECLS

#endif
