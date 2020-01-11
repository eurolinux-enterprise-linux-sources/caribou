/* keyboard-service.c generated by valac 0.25.3.3-7022, the Vala compiler
 * generated from keyboard-service.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define CARIBOU_TYPE_KEYBOARD_SERVICE (caribou_keyboard_service_get_type ())
#define CARIBOU_KEYBOARD_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_KEYBOARD_SERVICE, CaribouKeyboardService))
#define CARIBOU_KEYBOARD_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_KEYBOARD_SERVICE, CaribouKeyboardServiceClass))
#define CARIBOU_IS_KEYBOARD_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_KEYBOARD_SERVICE))
#define CARIBOU_IS_KEYBOARD_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_KEYBOARD_SERVICE))
#define CARIBOU_KEYBOARD_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_KEYBOARD_SERVICE, CaribouKeyboardServiceClass))

typedef struct _CaribouKeyboardService CaribouKeyboardService;
typedef struct _CaribouKeyboardServiceClass CaribouKeyboardServiceClass;
typedef struct _CaribouKeyboardServicePrivate CaribouKeyboardServicePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _CaribouKeyboardService {
	GObject parent_instance;
	CaribouKeyboardServicePrivate * priv;
};

struct _CaribouKeyboardServiceClass {
	GObjectClass parent_class;
	void (*set_cursor_location) (CaribouKeyboardService* self, gint x, gint y, gint w, gint h);
	void (*set_entry_location) (CaribouKeyboardService* self, gint x, gint y, gint w, gint h);
	void (*show) (CaribouKeyboardService* self, guint32 timestamp);
	void (*hide) (CaribouKeyboardService* self, guint32 timestamp);
	void (*name_lost) (CaribouKeyboardService* self, const gchar* name);
};


static gpointer caribou_keyboard_service_parent_class = NULL;

GType caribou_keyboard_service_get_type (void) G_GNUC_CONST;
guint caribou_keyboard_service_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
enum  {
	CARIBOU_KEYBOARD_SERVICE_DUMMY_PROPERTY
};
void caribou_keyboard_service_set_cursor_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h);
static void caribou_keyboard_service_real_set_cursor_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h);
void caribou_keyboard_service_set_entry_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h);
static void caribou_keyboard_service_real_set_entry_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h);
void caribou_keyboard_service_show (CaribouKeyboardService* self, guint32 timestamp);
static void caribou_keyboard_service_real_show (CaribouKeyboardService* self, guint32 timestamp);
void caribou_keyboard_service_hide (CaribouKeyboardService* self, guint32 timestamp);
static void caribou_keyboard_service_real_hide (CaribouKeyboardService* self, guint32 timestamp);
void caribou_keyboard_service_register_keyboard (CaribouKeyboardService* self, const gchar* name);
static void caribou_keyboard_service_on_bus_acquired (CaribouKeyboardService* self, GDBusConnection* conn);
static void _caribou_keyboard_service_on_bus_acquired_gbus_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self);
static void caribou_keyboard_service_on_impl_name_acquired (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name);
static void _caribou_keyboard_service_on_impl_name_acquired_gbus_name_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self);
static void caribou_keyboard_service_on_impl_name_lost (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name);
static void _caribou_keyboard_service_on_impl_name_lost_gbus_name_lost_callback (GDBusConnection* connection, const gchar* name, gpointer self);
static void caribou_keyboard_service_on_name_lost (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name);
void caribou_keyboard_service_name_lost (CaribouKeyboardService* self, const gchar* name);
static void caribou_keyboard_service_real_name_lost (CaribouKeyboardService* self, const gchar* name);
static void caribou_keyboard_service_on_generic_name_acquired (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name);
static void _caribou_keyboard_service_on_generic_name_acquired_gbus_name_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self);
static void _caribou_keyboard_service_on_name_lost_gbus_name_lost_callback (GDBusConnection* connection, const gchar* name, gpointer self);
CaribouKeyboardService* caribou_keyboard_service_construct (GType object_type);
static void _dbus_caribou_keyboard_service_set_cursor_location (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation);
static void _dbus_caribou_keyboard_service_set_entry_location (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation);
static void _dbus_caribou_keyboard_service_show (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation);
static void _dbus_caribou_keyboard_service_hide (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation);
static void caribou_keyboard_service_dbus_interface_method_call (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data);
static GVariant* caribou_keyboard_service_dbus_interface_get_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data);
static gboolean caribou_keyboard_service_dbus_interface_set_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data);
static void _caribou_keyboard_service_unregister_object (gpointer user_data);

static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_cursor_location_x = {-1, "x", "i"};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_cursor_location_y = {-1, "y", "i"};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_cursor_location_w = {-1, "w", "i"};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_cursor_location_h = {-1, "h", "i"};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_set_cursor_location_in[] = {&_caribou_keyboard_service_dbus_arg_info_set_cursor_location_x, &_caribou_keyboard_service_dbus_arg_info_set_cursor_location_y, &_caribou_keyboard_service_dbus_arg_info_set_cursor_location_w, &_caribou_keyboard_service_dbus_arg_info_set_cursor_location_h, NULL};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_set_cursor_location_out[] = {NULL};
static const GDBusMethodInfo _caribou_keyboard_service_dbus_method_info_set_cursor_location = {-1, "SetCursorLocation", (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_set_cursor_location_in), (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_set_cursor_location_out)};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_entry_location_x = {-1, "x", "i"};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_entry_location_y = {-1, "y", "i"};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_entry_location_w = {-1, "w", "i"};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_set_entry_location_h = {-1, "h", "i"};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_set_entry_location_in[] = {&_caribou_keyboard_service_dbus_arg_info_set_entry_location_x, &_caribou_keyboard_service_dbus_arg_info_set_entry_location_y, &_caribou_keyboard_service_dbus_arg_info_set_entry_location_w, &_caribou_keyboard_service_dbus_arg_info_set_entry_location_h, NULL};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_set_entry_location_out[] = {NULL};
static const GDBusMethodInfo _caribou_keyboard_service_dbus_method_info_set_entry_location = {-1, "SetEntryLocation", (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_set_entry_location_in), (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_set_entry_location_out)};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_show_timestamp = {-1, "timestamp", "u"};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_show_in[] = {&_caribou_keyboard_service_dbus_arg_info_show_timestamp, NULL};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_show_out[] = {NULL};
static const GDBusMethodInfo _caribou_keyboard_service_dbus_method_info_show = {-1, "Show", (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_show_in), (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_show_out)};
static const GDBusArgInfo _caribou_keyboard_service_dbus_arg_info_hide_timestamp = {-1, "timestamp", "u"};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_hide_in[] = {&_caribou_keyboard_service_dbus_arg_info_hide_timestamp, NULL};
static const GDBusArgInfo * const _caribou_keyboard_service_dbus_arg_info_hide_out[] = {NULL};
static const GDBusMethodInfo _caribou_keyboard_service_dbus_method_info_hide = {-1, "Hide", (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_hide_in), (GDBusArgInfo **) (&_caribou_keyboard_service_dbus_arg_info_hide_out)};
static const GDBusMethodInfo * const _caribou_keyboard_service_dbus_method_info[] = {&_caribou_keyboard_service_dbus_method_info_set_cursor_location, &_caribou_keyboard_service_dbus_method_info_set_entry_location, &_caribou_keyboard_service_dbus_method_info_show, &_caribou_keyboard_service_dbus_method_info_hide, NULL};
static const GDBusSignalInfo * const _caribou_keyboard_service_dbus_signal_info[] = {NULL};
static const GDBusPropertyInfo * const _caribou_keyboard_service_dbus_property_info[] = {NULL};
static const GDBusInterfaceInfo _caribou_keyboard_service_dbus_interface_info = {-1, "org.gnome.Caribou.Keyboard", (GDBusMethodInfo **) (&_caribou_keyboard_service_dbus_method_info), (GDBusSignalInfo **) (&_caribou_keyboard_service_dbus_signal_info), (GDBusPropertyInfo **) (&_caribou_keyboard_service_dbus_property_info)};
static const GDBusInterfaceVTable _caribou_keyboard_service_dbus_interface_vtable = {caribou_keyboard_service_dbus_interface_method_call, caribou_keyboard_service_dbus_interface_get_property, caribou_keyboard_service_dbus_interface_set_property};

static void caribou_keyboard_service_real_set_cursor_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h) {
	g_critical ("Type `%s' does not implement abstract method `caribou_keyboard_service_set_cursor_location'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_keyboard_service_set_cursor_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h) {
	g_return_if_fail (self != NULL);
	CARIBOU_KEYBOARD_SERVICE_GET_CLASS (self)->set_cursor_location (self, x, y, w, h);
}


static void caribou_keyboard_service_real_set_entry_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h) {
	g_critical ("Type `%s' does not implement abstract method `caribou_keyboard_service_set_entry_location'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_keyboard_service_set_entry_location (CaribouKeyboardService* self, gint x, gint y, gint w, gint h) {
	g_return_if_fail (self != NULL);
	CARIBOU_KEYBOARD_SERVICE_GET_CLASS (self)->set_entry_location (self, x, y, w, h);
}


static void caribou_keyboard_service_real_show (CaribouKeyboardService* self, guint32 timestamp) {
	g_critical ("Type `%s' does not implement abstract method `caribou_keyboard_service_show'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_keyboard_service_show (CaribouKeyboardService* self, guint32 timestamp) {
	g_return_if_fail (self != NULL);
	CARIBOU_KEYBOARD_SERVICE_GET_CLASS (self)->show (self, timestamp);
}


static void caribou_keyboard_service_real_hide (CaribouKeyboardService* self, guint32 timestamp) {
	g_critical ("Type `%s' does not implement abstract method `caribou_keyboard_service_hide'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_keyboard_service_hide (CaribouKeyboardService* self, guint32 timestamp) {
	g_return_if_fail (self != NULL);
	CARIBOU_KEYBOARD_SERVICE_GET_CLASS (self)->hide (self, timestamp);
}


static const gchar* string_to_string (const gchar* self) {
	const gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = self;
	return result;
}


static void _caribou_keyboard_service_on_bus_acquired_gbus_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	caribou_keyboard_service_on_bus_acquired ((CaribouKeyboardService*) self, connection);
}


static void _caribou_keyboard_service_on_impl_name_acquired_gbus_name_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	caribou_keyboard_service_on_impl_name_acquired ((CaribouKeyboardService*) self, connection, name);
}


static void _caribou_keyboard_service_on_impl_name_lost_gbus_name_lost_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	caribou_keyboard_service_on_impl_name_lost ((CaribouKeyboardService*) self, connection, name);
}


void caribou_keyboard_service_register_keyboard (CaribouKeyboardService* self, const gchar* name) {
	gchar* dbus_name = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = name;
	_tmp1_ = string_to_string (_tmp0_);
	_tmp2_ = g_strconcat ("org.gnome.Caribou.", _tmp1_, NULL);
	dbus_name = _tmp2_;
	g_bus_own_name_with_closures (G_BUS_TYPE_SESSION, dbus_name, G_BUS_NAME_OWNER_FLAGS_NONE, (GClosure*) ((_caribou_keyboard_service_on_bus_acquired_gbus_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _caribou_keyboard_service_on_bus_acquired_gbus_acquired_callback, g_object_ref (self), g_object_unref)), (GClosure*) ((_caribou_keyboard_service_on_impl_name_acquired_gbus_name_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _caribou_keyboard_service_on_impl_name_acquired_gbus_name_acquired_callback, g_object_ref (self), g_object_unref)), (GClosure*) ((_caribou_keyboard_service_on_impl_name_lost_gbus_name_lost_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _caribou_keyboard_service_on_impl_name_lost_gbus_name_lost_callback, g_object_ref (self), g_object_unref)));
	_g_free0 (dbus_name);
}


static void caribou_keyboard_service_on_bus_acquired (CaribouKeyboardService* self, GDBusConnection* conn) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (conn != NULL);
}


static void caribou_keyboard_service_on_impl_name_lost (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name) {
	FILE* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (conn != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = stderr;
	_tmp1_ = name;
	fprintf (_tmp0_, "Could not acquire %s\n", _tmp1_);
}


static void caribou_keyboard_service_on_name_lost (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name) {
	FILE* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (conn != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = stderr;
	_tmp1_ = name;
	fprintf (_tmp0_, "Could not acquire %s\n", _tmp1_);
	_tmp2_ = name;
	caribou_keyboard_service_name_lost (self, _tmp2_);
}


static void caribou_keyboard_service_real_name_lost (CaribouKeyboardService* self, const gchar* name) {
	FILE* _tmp0_ = NULL;
	g_return_if_fail (name != NULL);
	_tmp0_ = stderr;
	fprintf (_tmp0_, "default\n");
}


void caribou_keyboard_service_name_lost (CaribouKeyboardService* self, const gchar* name) {
	g_return_if_fail (self != NULL);
	CARIBOU_KEYBOARD_SERVICE_GET_CLASS (self)->name_lost (self, name);
}


static void _caribou_keyboard_service_on_generic_name_acquired_gbus_name_acquired_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	caribou_keyboard_service_on_generic_name_acquired ((CaribouKeyboardService*) self, connection, name);
}


static void _caribou_keyboard_service_on_name_lost_gbus_name_lost_callback (GDBusConnection* connection, const gchar* name, gpointer self) {
	caribou_keyboard_service_on_name_lost ((CaribouKeyboardService*) self, connection, name);
}


static void caribou_keyboard_service_on_impl_name_acquired (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (conn != NULL);
	g_return_if_fail (name != NULL);
	g_bus_own_name_with_closures (G_BUS_TYPE_SESSION, "org.gnome.Caribou.Keyboard", G_BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT, (GClosure*) ((_caribou_keyboard_service_on_bus_acquired_gbus_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _caribou_keyboard_service_on_bus_acquired_gbus_acquired_callback, g_object_ref (self), g_object_unref)), (GClosure*) ((_caribou_keyboard_service_on_generic_name_acquired_gbus_name_acquired_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _caribou_keyboard_service_on_generic_name_acquired_gbus_name_acquired_callback, g_object_ref (self), g_object_unref)), (GClosure*) ((_caribou_keyboard_service_on_name_lost_gbus_name_lost_callback == NULL) ? NULL : g_cclosure_new ((GCallback) _caribou_keyboard_service_on_name_lost_gbus_name_lost_callback, g_object_ref (self), g_object_unref)));
}


static void caribou_keyboard_service_on_generic_name_acquired (CaribouKeyboardService* self, GDBusConnection* conn, const gchar* name) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (conn != NULL);
	g_return_if_fail (name != NULL);
	{
		gchar* path = NULL;
		gchar* _tmp0_ = NULL;
		GDBusConnection* _tmp1_ = NULL;
		_tmp0_ = g_strdup ("/org/gnome/Caribou/Keyboard");
		path = _tmp0_;
		_tmp1_ = conn;
		caribou_keyboard_service_register_object (self, _tmp1_, path, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_free0 (path);
			if (_inner_error_->domain == G_IO_ERROR) {
				goto __catch0_g_io_error;
			}
			_g_free0 (path);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_g_free0 (path);
	}
	goto __finally0;
	__catch0_g_io_error:
	{
		GError* e = NULL;
		FILE* _tmp2_ = NULL;
		GError* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp2_ = stderr;
		_tmp3_ = e;
		_tmp4_ = _tmp3_->message;
		fprintf (_tmp2_, "Could not register service: %s\n", _tmp4_);
		_g_error_free0 (e);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


CaribouKeyboardService* caribou_keyboard_service_construct (GType object_type) {
	CaribouKeyboardService * self = NULL;
	self = (CaribouKeyboardService*) g_object_new (object_type, NULL);
	return self;
}


static void caribou_keyboard_service_class_init (CaribouKeyboardServiceClass * klass) {
	caribou_keyboard_service_parent_class = g_type_class_peek_parent (klass);
	((CaribouKeyboardServiceClass *) klass)->set_cursor_location = caribou_keyboard_service_real_set_cursor_location;
	((CaribouKeyboardServiceClass *) klass)->set_entry_location = caribou_keyboard_service_real_set_entry_location;
	((CaribouKeyboardServiceClass *) klass)->show = caribou_keyboard_service_real_show;
	((CaribouKeyboardServiceClass *) klass)->hide = caribou_keyboard_service_real_hide;
	((CaribouKeyboardServiceClass *) klass)->name_lost = caribou_keyboard_service_real_name_lost;
}


static void caribou_keyboard_service_instance_init (CaribouKeyboardService * self) {
}


/**
     * Base abstract class of the Caribou D-Bus service.
     */
GType caribou_keyboard_service_get_type (void) {
	static volatile gsize caribou_keyboard_service_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_keyboard_service_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouKeyboardServiceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_keyboard_service_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouKeyboardService), 0, (GInstanceInitFunc) caribou_keyboard_service_instance_init, NULL };
		GType caribou_keyboard_service_type_id;
		caribou_keyboard_service_type_id = g_type_register_static (G_TYPE_OBJECT, "CaribouKeyboardService", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_set_qdata (caribou_keyboard_service_type_id, g_quark_from_static_string ("vala-dbus-register-object"), (void*) caribou_keyboard_service_register_object);
		g_once_init_leave (&caribou_keyboard_service_type_id__volatile, caribou_keyboard_service_type_id);
	}
	return caribou_keyboard_service_type_id__volatile;
}


static void _dbus_caribou_keyboard_service_set_cursor_location (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation) {
	GError* error = NULL;
	GVariantIter _arguments_iter;
	gint x = 0;
	GVariant* _tmp0_;
	gint y = 0;
	GVariant* _tmp1_;
	gint w = 0;
	GVariant* _tmp2_;
	gint h = 0;
	GVariant* _tmp3_;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	_tmp0_ = g_variant_iter_next_value (&_arguments_iter);
	x = g_variant_get_int32 (_tmp0_);
	g_variant_unref (_tmp0_);
	_tmp1_ = g_variant_iter_next_value (&_arguments_iter);
	y = g_variant_get_int32 (_tmp1_);
	g_variant_unref (_tmp1_);
	_tmp2_ = g_variant_iter_next_value (&_arguments_iter);
	w = g_variant_get_int32 (_tmp2_);
	g_variant_unref (_tmp2_);
	_tmp3_ = g_variant_iter_next_value (&_arguments_iter);
	h = g_variant_get_int32 (_tmp3_);
	g_variant_unref (_tmp3_);
	caribou_keyboard_service_set_cursor_location (self, x, y, w, h);
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void _dbus_caribou_keyboard_service_set_entry_location (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation) {
	GError* error = NULL;
	GVariantIter _arguments_iter;
	gint x = 0;
	GVariant* _tmp4_;
	gint y = 0;
	GVariant* _tmp5_;
	gint w = 0;
	GVariant* _tmp6_;
	gint h = 0;
	GVariant* _tmp7_;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	_tmp4_ = g_variant_iter_next_value (&_arguments_iter);
	x = g_variant_get_int32 (_tmp4_);
	g_variant_unref (_tmp4_);
	_tmp5_ = g_variant_iter_next_value (&_arguments_iter);
	y = g_variant_get_int32 (_tmp5_);
	g_variant_unref (_tmp5_);
	_tmp6_ = g_variant_iter_next_value (&_arguments_iter);
	w = g_variant_get_int32 (_tmp6_);
	g_variant_unref (_tmp6_);
	_tmp7_ = g_variant_iter_next_value (&_arguments_iter);
	h = g_variant_get_int32 (_tmp7_);
	g_variant_unref (_tmp7_);
	caribou_keyboard_service_set_entry_location (self, x, y, w, h);
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void _dbus_caribou_keyboard_service_show (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation) {
	GError* error = NULL;
	GVariantIter _arguments_iter;
	guint32 timestamp = 0U;
	GVariant* _tmp8_;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	_tmp8_ = g_variant_iter_next_value (&_arguments_iter);
	timestamp = g_variant_get_uint32 (_tmp8_);
	g_variant_unref (_tmp8_);
	caribou_keyboard_service_show (self, timestamp);
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void _dbus_caribou_keyboard_service_hide (CaribouKeyboardService* self, GVariant* _parameters_, GDBusMethodInvocation* invocation) {
	GError* error = NULL;
	GVariantIter _arguments_iter;
	guint32 timestamp = 0U;
	GVariant* _tmp9_;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	g_variant_iter_init (&_arguments_iter, _parameters_);
	_tmp9_ = g_variant_iter_next_value (&_arguments_iter);
	timestamp = g_variant_get_uint32 (_tmp9_);
	g_variant_unref (_tmp9_);
	caribou_keyboard_service_hide (self, timestamp);
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void caribou_keyboard_service_dbus_interface_method_call (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	if (strcmp (method_name, "SetCursorLocation") == 0) {
		_dbus_caribou_keyboard_service_set_cursor_location (object, parameters, invocation);
	} else if (strcmp (method_name, "SetEntryLocation") == 0) {
		_dbus_caribou_keyboard_service_set_entry_location (object, parameters, invocation);
	} else if (strcmp (method_name, "Show") == 0) {
		_dbus_caribou_keyboard_service_show (object, parameters, invocation);
	} else if (strcmp (method_name, "Hide") == 0) {
		_dbus_caribou_keyboard_service_hide (object, parameters, invocation);
	} else {
		g_object_unref (invocation);
	}
}


static GVariant* caribou_keyboard_service_dbus_interface_get_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return NULL;
}


static gboolean caribou_keyboard_service_dbus_interface_set_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return FALSE;
}


guint caribou_keyboard_service_register_object (gpointer object, GDBusConnection* connection, const gchar* path, GError** error) {
	guint result;
	gpointer *data;
	data = g_new (gpointer, 3);
	data[0] = g_object_ref (object);
	data[1] = g_object_ref (connection);
	data[2] = g_strdup (path);
	result = g_dbus_connection_register_object (connection, path, (GDBusInterfaceInfo *) (&_caribou_keyboard_service_dbus_interface_info), &_caribou_keyboard_service_dbus_interface_vtable, data, _caribou_keyboard_service_unregister_object, error);
	if (!result) {
		return 0;
	}
	return result;
}


static void _caribou_keyboard_service_unregister_object (gpointer user_data) {
	gpointer* data;
	data = user_data;
	g_object_unref (data[0]);
	g_object_unref (data[1]);
	g_free (data[2]);
	g_free (data);
}



