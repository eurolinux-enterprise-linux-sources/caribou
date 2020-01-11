/* column-model.c generated by valac 0.25.3.3-7022, the Vala compiler
 * generated from column-model.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gee.h>


#define CARIBOU_TYPE_ISCANNABLE_GROUP (caribou_iscannable_group_get_type ())
#define CARIBOU_ISCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_GROUP, CaribouIScannableGroup))
#define CARIBOU_IS_ISCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_GROUP))
#define CARIBOU_ISCANNABLE_GROUP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_GROUP, CaribouIScannableGroupIface))

typedef struct _CaribouIScannableGroup CaribouIScannableGroup;
typedef struct _CaribouIScannableGroupIface CaribouIScannableGroupIface;

#define CARIBOU_TYPE_ISCANNABLE_ITEM (caribou_iscannable_item_get_type ())
#define CARIBOU_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItem))
#define CARIBOU_IS_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM))
#define CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItemIface))

typedef struct _CaribouIScannableItem CaribouIScannableItem;
typedef struct _CaribouIScannableItemIface CaribouIScannableItemIface;

#define CARIBOU_TYPE_SCAN_GROUPING (caribou_scan_grouping_get_type ())

#define CARIBOU_TYPE_SCANNABLE_GROUP (caribou_scannable_group_get_type ())
#define CARIBOU_SCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_SCANNABLE_GROUP, CaribouScannableGroup))
#define CARIBOU_SCANNABLE_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_SCANNABLE_GROUP, CaribouScannableGroupClass))
#define CARIBOU_IS_SCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_SCANNABLE_GROUP))
#define CARIBOU_IS_SCANNABLE_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_SCANNABLE_GROUP))
#define CARIBOU_SCANNABLE_GROUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_SCANNABLE_GROUP, CaribouScannableGroupClass))

typedef struct _CaribouScannableGroup CaribouScannableGroup;
typedef struct _CaribouScannableGroupClass CaribouScannableGroupClass;
typedef struct _CaribouScannableGroupPrivate CaribouScannableGroupPrivate;

#define CARIBOU_TYPE_IKEYBOARD_OBJECT (caribou_ikeyboard_object_get_type ())
#define CARIBOU_IKEYBOARD_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_IKEYBOARD_OBJECT, CaribouIKeyboardObject))
#define CARIBOU_IS_IKEYBOARD_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_IKEYBOARD_OBJECT))
#define CARIBOU_IKEYBOARD_OBJECT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_IKEYBOARD_OBJECT, CaribouIKeyboardObjectIface))

typedef struct _CaribouIKeyboardObject CaribouIKeyboardObject;
typedef struct _CaribouIKeyboardObjectIface CaribouIKeyboardObjectIface;

#define CARIBOU_TYPE_KEY_MODEL (caribou_key_model_get_type ())
#define CARIBOU_KEY_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_KEY_MODEL, CaribouKeyModel))
#define CARIBOU_KEY_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_KEY_MODEL, CaribouKeyModelClass))
#define CARIBOU_IS_KEY_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_KEY_MODEL))
#define CARIBOU_IS_KEY_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_KEY_MODEL))
#define CARIBOU_KEY_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_KEY_MODEL, CaribouKeyModelClass))

typedef struct _CaribouKeyModel CaribouKeyModel;
typedef struct _CaribouKeyModelClass CaribouKeyModelClass;

#define CARIBOU_TYPE_COLUMN_MODEL (caribou_column_model_get_type ())
#define CARIBOU_COLUMN_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModel))
#define CARIBOU_COLUMN_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModelClass))
#define CARIBOU_IS_COLUMN_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_COLUMN_MODEL))
#define CARIBOU_IS_COLUMN_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_COLUMN_MODEL))
#define CARIBOU_COLUMN_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModelClass))

typedef struct _CaribouColumnModel CaribouColumnModel;
typedef struct _CaribouColumnModelClass CaribouColumnModelClass;
typedef struct _CaribouColumnModelPrivate CaribouColumnModelPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _CaribouIScannableItemIface {
	GTypeInterface parent_iface;
	gboolean (*get_scan_stepping) (CaribouIScannableItem* self);
	void (*set_scan_stepping) (CaribouIScannableItem* self, gboolean value);
	gboolean (*get_scan_selected) (CaribouIScannableItem* self);
	void (*set_scan_selected) (CaribouIScannableItem* self, gboolean value);
};

typedef enum  {
	CARIBOU_SCAN_GROUPING_NONE,
	CARIBOU_SCAN_GROUPING_SUBGROUPS,
	CARIBOU_SCAN_GROUPING_ROWS,
	CARIBOU_SCAN_GROUPING_LINEAR
} CaribouScanGrouping;

struct _CaribouIScannableGroupIface {
	GTypeInterface parent_iface;
	CaribouIScannableItem* (*child_select) (CaribouIScannableGroup* self);
	void (*scan_reset) (CaribouIScannableGroup* self);
	CaribouIScannableItem** (*get_scan_children) (CaribouIScannableGroup* self, int* result_length1);
	CaribouIScannableItem* (*child_step) (CaribouIScannableGroup* self, gint cycles);
	CaribouIScannableItem** (*get_step_path) (CaribouIScannableGroup* self, int* result_length1);
	CaribouIScannableItem** (*get_selected_path) (CaribouIScannableGroup* self, int* result_length1);
	CaribouScanGrouping (*get_scan_grouping) (CaribouIScannableGroup* self);
	void (*set_scan_grouping) (CaribouIScannableGroup* self, CaribouScanGrouping value);
};

struct _CaribouScannableGroup {
	GObject parent_instance;
	CaribouScannableGroupPrivate * priv;
};

struct _CaribouScannableGroupClass {
	GObjectClass parent_class;
	CaribouIScannableItem** (*get_scan_children) (CaribouScannableGroup* self, int* result_length1);
	CaribouIScannableItem* (*child_select) (CaribouScannableGroup* self);
};

struct _CaribouIKeyboardObjectIface {
	GTypeInterface parent_iface;
	CaribouIKeyboardObject** (*get_children) (CaribouIKeyboardObject* self, int* result_length1);
	CaribouKeyModel** (*get_keys) (CaribouIKeyboardObject* self, int* result_length1);
};

struct _CaribouColumnModel {
	CaribouScannableGroup parent_instance;
	CaribouColumnModelPrivate * priv;
};

struct _CaribouColumnModelClass {
	CaribouScannableGroupClass parent_class;
};

struct _CaribouColumnModelPrivate {
	gboolean _scan_stepping;
	gboolean _scan_selected;
	GeeArrayList* keys;
};


static gpointer caribou_column_model_parent_class = NULL;
static CaribouIScannableItemIface* caribou_column_model_caribou_iscannable_item_parent_iface = NULL;
static CaribouIKeyboardObjectIface* caribou_column_model_caribou_ikeyboard_object_parent_iface = NULL;

GType caribou_iscannable_item_get_type (void) G_GNUC_CONST;
GType caribou_scan_grouping_get_type (void) G_GNUC_CONST;
GType caribou_iscannable_group_get_type (void) G_GNUC_CONST;
GType caribou_scannable_group_get_type (void) G_GNUC_CONST;
GType caribou_key_model_get_type (void) G_GNUC_CONST;
GType caribou_ikeyboard_object_get_type (void) G_GNUC_CONST;
GType caribou_column_model_get_type (void) G_GNUC_CONST;
#define CARIBOU_COLUMN_MODEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModelPrivate))
enum  {
	CARIBOU_COLUMN_MODEL_DUMMY_PROPERTY,
	CARIBOU_COLUMN_MODEL_SCAN_STEPPING,
	CARIBOU_COLUMN_MODEL_SCAN_SELECTED
};
CaribouColumnModel* caribou_column_model_new (void);
CaribouColumnModel* caribou_column_model_construct (GType object_type);
CaribouScannableGroup* caribou_scannable_group_construct (GType object_type);
void caribou_column_model_add_key (CaribouColumnModel* self, CaribouKeyModel* key);
static void __lambda5_ (CaribouColumnModel* self, CaribouKeyModel* k);
static void ___lambda5__caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void __lambda6_ (CaribouColumnModel* self, CaribouKeyModel* k);
static void ___lambda6__caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void __lambda7_ (CaribouColumnModel* self, CaribouKeyModel* k);
static void ___lambda7__caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
CaribouKeyModel* caribou_column_model_get_key (CaribouColumnModel* self, gint index);
CaribouKeyModel* caribou_column_model_first_key (CaribouColumnModel* self);
static CaribouIScannableItem** caribou_column_model_real_get_scan_children (CaribouScannableGroup* base, int* result_length1);
static CaribouIKeyboardObject** caribou_column_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1);
static void caribou_column_model_finalize (GObject* obj);
gboolean caribou_iscannable_item_get_scan_stepping (CaribouIScannableItem* self);
gboolean caribou_iscannable_item_get_scan_selected (CaribouIScannableItem* self);
static void _vala_caribou_column_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
void caribou_iscannable_item_set_scan_stepping (CaribouIScannableItem* self, gboolean value);
void caribou_iscannable_item_set_scan_selected (CaribouIScannableItem* self, gboolean value);
static void _vala_caribou_column_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


CaribouColumnModel* caribou_column_model_construct (GType object_type) {
	CaribouColumnModel * self = NULL;
	GeeArrayList* _tmp0_ = NULL;
	self = (CaribouColumnModel*) caribou_scannable_group_construct (object_type);
	_tmp0_ = gee_array_list_new (CARIBOU_TYPE_KEY_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->keys);
	self->priv->keys = _tmp0_;
	return self;
}


CaribouColumnModel* caribou_column_model_new (void) {
	return caribou_column_model_construct (CARIBOU_TYPE_COLUMN_MODEL);
}


static void __lambda5_ (CaribouColumnModel* self, CaribouKeyModel* k) {
	CaribouKeyModel* _tmp0_ = NULL;
	g_return_if_fail (k != NULL);
	_tmp0_ = k;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-clicked", _tmp0_);
}


static void ___lambda5__caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	__lambda5_ ((CaribouColumnModel*) self, key);
}


static void __lambda6_ (CaribouColumnModel* self, CaribouKeyModel* k) {
	CaribouKeyModel* _tmp0_ = NULL;
	g_return_if_fail (k != NULL);
	_tmp0_ = k;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-pressed", _tmp0_);
}


static void ___lambda6__caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	__lambda6_ ((CaribouColumnModel*) self, key);
}


static void __lambda7_ (CaribouColumnModel* self, CaribouKeyModel* k) {
	CaribouKeyModel* _tmp0_ = NULL;
	g_return_if_fail (k != NULL);
	_tmp0_ = k;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-released", _tmp0_);
}


static void ___lambda7__caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	__lambda7_ ((CaribouColumnModel*) self, key);
}


void caribou_column_model_add_key (CaribouColumnModel* self, CaribouKeyModel* key) {
	CaribouKeyModel* _tmp0_ = NULL;
	CaribouKeyModel* _tmp1_ = NULL;
	CaribouKeyModel* _tmp2_ = NULL;
	GeeArrayList* _tmp3_ = NULL;
	CaribouKeyModel* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = key;
	g_signal_connect_object ((CaribouIKeyboardObject*) _tmp0_, "key-clicked", (GCallback) ___lambda5__caribou_ikeyboard_object_key_clicked, self, 0);
	_tmp1_ = key;
	g_signal_connect_object ((CaribouIKeyboardObject*) _tmp1_, "key-pressed", (GCallback) ___lambda6__caribou_ikeyboard_object_key_pressed, self, 0);
	_tmp2_ = key;
	g_signal_connect_object ((CaribouIKeyboardObject*) _tmp2_, "key-released", (GCallback) ___lambda7__caribou_ikeyboard_object_key_released, self, 0);
	_tmp3_ = self->priv->keys;
	_tmp4_ = key;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp3_, _tmp4_);
}


CaribouKeyModel* caribou_column_model_get_key (CaribouColumnModel* self, gint index) {
	CaribouKeyModel* result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->keys;
	_tmp1_ = index;
	_tmp2_ = gee_abstract_list_get ((GeeAbstractList*) _tmp0_, _tmp1_);
	result = (CaribouKeyModel*) _tmp2_;
	return result;
}


CaribouKeyModel* caribou_column_model_first_key (CaribouColumnModel* self) {
	CaribouKeyModel* result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gpointer _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->keys;
	_tmp1_ = gee_list_first ((GeeList*) _tmp0_);
	result = (CaribouKeyModel*) _tmp1_;
	return result;
}


static CaribouIScannableItem** caribou_column_model_real_get_scan_children (CaribouScannableGroup* base, int* result_length1) {
	CaribouColumnModel * self;
	CaribouIScannableItem** result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer* _tmp2_ = NULL;
	CaribouIScannableItem** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	self = (CaribouColumnModel*) base;
	_tmp0_ = self->priv->keys;
	_tmp2_ = gee_collection_to_array ((GeeCollection*) _tmp0_, &_tmp1_);
	_tmp3_ = (CaribouIScannableItem**) _tmp2_;
	_tmp3__length1 = (_tmp1_ * sizeof (CaribouKeyModel*)) / sizeof (CaribouIScannableItem*);
	if (result_length1) {
		*result_length1 = _tmp3__length1;
	}
	result = _tmp3_;
	return result;
}


static CaribouIKeyboardObject** caribou_column_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1) {
	CaribouColumnModel * self;
	CaribouIKeyboardObject** result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer* _tmp2_ = NULL;
	CaribouIKeyboardObject** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	self = (CaribouColumnModel*) base;
	_tmp0_ = self->priv->keys;
	_tmp2_ = gee_collection_to_array ((GeeCollection*) _tmp0_, &_tmp1_);
	_tmp3_ = (CaribouIKeyboardObject**) _tmp2_;
	_tmp3__length1 = (_tmp1_ * sizeof (CaribouKeyModel*)) / sizeof (CaribouIKeyboardObject*);
	if (result_length1) {
		*result_length1 = _tmp3__length1;
	}
	result = _tmp3_;
	return result;
}


static gboolean caribou_column_model_real_get_scan_stepping (CaribouIScannableItem* base) {
	gboolean result;
	CaribouColumnModel* self;
	gboolean _tmp0_ = FALSE;
	self = (CaribouColumnModel*) base;
	_tmp0_ = self->priv->_scan_stepping;
	result = _tmp0_;
	return result;
}


static void caribou_column_model_real_set_scan_stepping (CaribouIScannableItem* base, gboolean value) {
	CaribouColumnModel* self;
	gboolean _tmp0_ = FALSE;
	self = (CaribouColumnModel*) base;
	_tmp0_ = value;
	self->priv->_scan_stepping = _tmp0_;
	g_object_notify ((GObject *) self, "scan-stepping");
}


static gboolean caribou_column_model_real_get_scan_selected (CaribouIScannableItem* base) {
	gboolean result;
	CaribouColumnModel* self;
	gboolean _tmp0_ = FALSE;
	self = (CaribouColumnModel*) base;
	_tmp0_ = self->priv->_scan_selected;
	result = _tmp0_;
	return result;
}


static void caribou_column_model_real_set_scan_selected (CaribouIScannableItem* base, gboolean value) {
	CaribouColumnModel* self;
	gboolean _tmp0_ = FALSE;
	self = (CaribouColumnModel*) base;
	_tmp0_ = value;
	self->priv->_scan_selected = _tmp0_;
	g_object_notify ((GObject *) self, "scan-selected");
}


static void caribou_column_model_class_init (CaribouColumnModelClass * klass) {
	caribou_column_model_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CaribouColumnModelPrivate));
	((CaribouScannableGroupClass *) klass)->get_scan_children = caribou_column_model_real_get_scan_children;
	G_OBJECT_CLASS (klass)->get_property = _vala_caribou_column_model_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_caribou_column_model_set_property;
	G_OBJECT_CLASS (klass)->finalize = caribou_column_model_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_COLUMN_MODEL_SCAN_STEPPING, g_param_spec_boolean ("scan-stepping", "scan-stepping", "scan-stepping", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_COLUMN_MODEL_SCAN_SELECTED, g_param_spec_boolean ("scan-selected", "scan-selected", "scan-selected", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void caribou_column_model_caribou_iscannable_item_interface_init (CaribouIScannableItemIface * iface) {
	caribou_column_model_caribou_iscannable_item_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_scan_stepping = caribou_column_model_real_get_scan_stepping;
	iface->set_scan_stepping = caribou_column_model_real_set_scan_stepping;
	iface->get_scan_selected = caribou_column_model_real_get_scan_selected;
	iface->set_scan_selected = caribou_column_model_real_set_scan_selected;
}


static void caribou_column_model_caribou_ikeyboard_object_interface_init (CaribouIKeyboardObjectIface * iface) {
	caribou_column_model_caribou_ikeyboard_object_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_children = (CaribouIKeyboardObject** (*)(CaribouIKeyboardObject*, int*)) caribou_column_model_real_get_children;
}


static void caribou_column_model_instance_init (CaribouColumnModel * self) {
	self->priv = CARIBOU_COLUMN_MODEL_GET_PRIVATE (self);
}


static void caribou_column_model_finalize (GObject* obj) {
	CaribouColumnModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModel);
	_g_object_unref0 (self->priv->keys);
	G_OBJECT_CLASS (caribou_column_model_parent_class)->finalize (obj);
}


/**
     * Object representing a column in a row.
     */
GType caribou_column_model_get_type (void) {
	static volatile gsize caribou_column_model_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_column_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouColumnModelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_column_model_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouColumnModel), 0, (GInstanceInitFunc) caribou_column_model_instance_init, NULL };
		static const GInterfaceInfo caribou_iscannable_item_info = { (GInterfaceInitFunc) caribou_column_model_caribou_iscannable_item_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo caribou_ikeyboard_object_info = { (GInterfaceInitFunc) caribou_column_model_caribou_ikeyboard_object_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType caribou_column_model_type_id;
		caribou_column_model_type_id = g_type_register_static (CARIBOU_TYPE_SCANNABLE_GROUP, "CaribouColumnModel", &g_define_type_info, 0);
		g_type_add_interface_static (caribou_column_model_type_id, CARIBOU_TYPE_ISCANNABLE_ITEM, &caribou_iscannable_item_info);
		g_type_add_interface_static (caribou_column_model_type_id, CARIBOU_TYPE_IKEYBOARD_OBJECT, &caribou_ikeyboard_object_info);
		g_once_init_leave (&caribou_column_model_type_id__volatile, caribou_column_model_type_id);
	}
	return caribou_column_model_type_id__volatile;
}


static void _vala_caribou_column_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CaribouColumnModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModel);
	switch (property_id) {
		case CARIBOU_COLUMN_MODEL_SCAN_STEPPING:
		g_value_set_boolean (value, caribou_iscannable_item_get_scan_stepping ((CaribouIScannableItem*) self));
		break;
		case CARIBOU_COLUMN_MODEL_SCAN_SELECTED:
		g_value_set_boolean (value, caribou_iscannable_item_get_scan_selected ((CaribouIScannableItem*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_caribou_column_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CaribouColumnModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_COLUMN_MODEL, CaribouColumnModel);
	switch (property_id) {
		case CARIBOU_COLUMN_MODEL_SCAN_STEPPING:
		caribou_iscannable_item_set_scan_stepping ((CaribouIScannableItem*) self, g_value_get_boolean (value));
		break;
		case CARIBOU_COLUMN_MODEL_SCAN_SELECTED:
		caribou_iscannable_item_set_scan_selected ((CaribouIScannableItem*) self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



