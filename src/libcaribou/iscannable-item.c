/* iscannable-item.c generated by valac 0.25.3.3-7022, the Vala compiler
 * generated from iscannable-item.vala, do not modify */


#include <glib.h>
#include <glib-object.h>


#define CARIBOU_TYPE_ISCANNABLE_ITEM (caribou_iscannable_item_get_type ())
#define CARIBOU_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItem))
#define CARIBOU_IS_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM))
#define CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItemIface))

typedef struct _CaribouIScannableItem CaribouIScannableItem;
typedef struct _CaribouIScannableItemIface CaribouIScannableItemIface;

struct _CaribouIScannableItemIface {
	GTypeInterface parent_iface;
	gboolean (*get_scan_stepping) (CaribouIScannableItem* self);
	void (*set_scan_stepping) (CaribouIScannableItem* self, gboolean value);
	gboolean (*get_scan_selected) (CaribouIScannableItem* self);
	void (*set_scan_selected) (CaribouIScannableItem* self, gboolean value);
};



GType caribou_iscannable_item_get_type (void) G_GNUC_CONST;
gboolean caribou_iscannable_item_get_scan_stepping (CaribouIScannableItem* self);
void caribou_iscannable_item_set_scan_stepping (CaribouIScannableItem* self, gboolean value);
gboolean caribou_iscannable_item_get_scan_selected (CaribouIScannableItem* self);
void caribou_iscannable_item_set_scan_selected (CaribouIScannableItem* self, gboolean value);


gboolean caribou_iscannable_item_get_scan_stepping (CaribouIScannableItem* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE (self)->get_scan_stepping (self);
}


void caribou_iscannable_item_set_scan_stepping (CaribouIScannableItem* self, gboolean value) {
	g_return_if_fail (self != NULL);
	CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE (self)->set_scan_stepping (self, value);
}


gboolean caribou_iscannable_item_get_scan_selected (CaribouIScannableItem* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE (self)->get_scan_selected (self);
}


void caribou_iscannable_item_set_scan_selected (CaribouIScannableItem* self, gboolean value) {
	g_return_if_fail (self != NULL);
	CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE (self)->set_scan_selected (self, value);
}


static void caribou_iscannable_item_base_init (CaribouIScannableItemIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_object_interface_install_property (iface, g_param_spec_boolean ("scan-stepping", "scan-stepping", "scan-stepping", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("scan-selected", "scan-selected", "scan-selected", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	}
}


/**
     * Interface implemented by items that can be selected in scanning mode.
     */
GType caribou_iscannable_item_get_type (void) {
	static volatile gsize caribou_iscannable_item_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_iscannable_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouIScannableItemIface), (GBaseInitFunc) caribou_iscannable_item_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType caribou_iscannable_item_type_id;
		caribou_iscannable_item_type_id = g_type_register_static (G_TYPE_INTERFACE, "CaribouIScannableItem", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (caribou_iscannable_item_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&caribou_iscannable_item_type_id__volatile, caribou_iscannable_item_type_id);
	}
	return caribou_iscannable_item_type_id__volatile;
}



