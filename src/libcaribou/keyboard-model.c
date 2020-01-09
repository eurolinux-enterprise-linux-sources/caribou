/* keyboard-model.c generated by valac 0.20.1.19-a6516, the Vala compiler
 * generated from keyboard-model.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


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

#define CARIBOU_TYPE_KEYBOARD_MODEL (caribou_keyboard_model_get_type ())
#define CARIBOU_KEYBOARD_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel))
#define CARIBOU_KEYBOARD_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModelClass))
#define CARIBOU_IS_KEYBOARD_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_KEYBOARD_MODEL))
#define CARIBOU_IS_KEYBOARD_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_KEYBOARD_MODEL))
#define CARIBOU_KEYBOARD_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModelClass))

typedef struct _CaribouKeyboardModel CaribouKeyboardModel;
typedef struct _CaribouKeyboardModelClass CaribouKeyboardModelClass;
typedef struct _CaribouKeyboardModelPrivate CaribouKeyboardModelPrivate;

#define CARIBOU_TYPE_XADAPTER (caribou_xadapter_get_type ())
#define CARIBOU_XADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_XADAPTER, CaribouXAdapter))
#define CARIBOU_XADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_XADAPTER, CaribouXAdapterClass))
#define CARIBOU_IS_XADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_XADAPTER))
#define CARIBOU_IS_XADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_XADAPTER))
#define CARIBOU_XADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_XADAPTER, CaribouXAdapterClass))

typedef struct _CaribouXAdapter CaribouXAdapter;
typedef struct _CaribouXAdapterClass CaribouXAdapterClass;

#define CARIBOU_TYPE_GROUP_MODEL (caribou_group_model_get_type ())
#define CARIBOU_GROUP_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_GROUP_MODEL, CaribouGroupModel))
#define CARIBOU_GROUP_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_GROUP_MODEL, CaribouGroupModelClass))
#define CARIBOU_IS_GROUP_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_GROUP_MODEL))
#define CARIBOU_IS_GROUP_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_GROUP_MODEL))
#define CARIBOU_GROUP_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_GROUP_MODEL, CaribouGroupModelClass))

typedef struct _CaribouGroupModel CaribouGroupModel;
typedef struct _CaribouGroupModelClass CaribouGroupModelClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define CARIBOU_TYPE_ISCANNABLE_ITEM (caribou_iscannable_item_get_type ())
#define CARIBOU_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItem))
#define CARIBOU_IS_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM))
#define CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItemIface))

typedef struct _CaribouIScannableItem CaribouIScannableItem;
typedef struct _CaribouIScannableItemIface CaribouIScannableItemIface;
typedef struct _CaribouKeyModelPrivate CaribouKeyModelPrivate;

#define CARIBOU_TYPE_MODIFIER_STATE (caribou_modifier_state_get_type ())
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _CaribouIKeyboardObjectIface {
	GTypeInterface parent_iface;
	CaribouIKeyboardObject** (*get_children) (CaribouIKeyboardObject* self, int* result_length1);
	CaribouKeyModel** (*get_keys) (CaribouIKeyboardObject* self, int* result_length1);
};

struct _CaribouKeyboardModel {
	GObject parent_instance;
	CaribouKeyboardModelPrivate * priv;
};

struct _CaribouKeyboardModelClass {
	GObjectClass parent_class;
};

struct _CaribouKeyboardModelPrivate {
	gchar* _active_group;
	gchar* _keyboard_type;
	CaribouXAdapter* xadapter;
	GeeHashMap* groups;
	CaribouKeyModel* last_activated_key;
	GeeHashSet* active_mod_keys;
};

struct _CaribouIScannableItemIface {
	GTypeInterface parent_iface;
	gboolean (*get_scan_stepping) (CaribouIScannableItem* self);
	void (*set_scan_stepping) (CaribouIScannableItem* self, gboolean value);
	gboolean (*get_scan_selected) (CaribouIScannableItem* self);
	void (*set_scan_selected) (CaribouIScannableItem* self, gboolean value);
};

typedef enum  {
	CARIBOU_MODIFIER_STATE_NONE,
	CARIBOU_MODIFIER_STATE_LATCHED,
	CARIBOU_MODIFIER_STATE_LOCKED
} CaribouModifierState;

struct _CaribouKeyModel {
	GObject parent_instance;
	CaribouKeyModelPrivate * priv;
	CaribouModifierState modifier_state;
};

struct _CaribouKeyModelClass {
	GObjectClass parent_class;
};


static gpointer caribou_keyboard_model_parent_class = NULL;
static CaribouIKeyboardObjectIface* caribou_keyboard_model_caribou_ikeyboard_object_parent_iface = NULL;

GType caribou_key_model_get_type (void) G_GNUC_CONST;
GType caribou_ikeyboard_object_get_type (void) G_GNUC_CONST;
GType caribou_keyboard_model_get_type (void) G_GNUC_CONST;
GType caribou_xadapter_get_type (void) G_GNUC_CONST;
GType caribou_group_model_get_type (void) G_GNUC_CONST;
#define CARIBOU_KEYBOARD_MODEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModelPrivate))
enum  {
	CARIBOU_KEYBOARD_MODEL_DUMMY_PROPERTY,
	CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP,
	CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE
};
static void caribou_keyboard_model_on_config_changed (CaribouKeyboardModel* self);
void caribou_xadapter_get_groups (CaribouXAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1);
gchar* caribou_group_model_create_group_name (const gchar* group, const gchar* variant);
static CaribouGroupModel* caribou_keyboard_model_populate_group (CaribouKeyboardModel* self, const gchar* group, const gchar* variant);
guint caribou_xadapter_get_current_group (CaribouXAdapter* self, gchar** group_name, gchar** variant_name);
static void caribou_keyboard_model_on_group_changed (CaribouKeyboardModel* self, guint grpid, const gchar* group, const gchar* variant);
CaribouGroupModel* caribou_xml_deserializer_load_group (const gchar* keyboard_type, const gchar* group, const gchar* variant);
const gchar* caribou_keyboard_model_get_keyboard_type (CaribouKeyboardModel* self);
static void caribou_keyboard_model_on_key_clicked (CaribouKeyboardModel* self, CaribouKeyModel* key);
static void _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void caribou_keyboard_model_on_key_pressed (CaribouKeyboardModel* self, CaribouKeyModel* key);
static void _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void caribou_keyboard_model_on_key_released (CaribouKeyboardModel* self, CaribouKeyModel* key);
static void _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
const gchar* caribou_key_model_get_name (CaribouKeyModel* self);
void caribou_key_model_activate (CaribouKeyModel* self);
gboolean caribou_key_model_get_is_modifier (CaribouKeyModel* self);
GType caribou_iscannable_item_get_type (void) G_GNUC_CONST;
GType caribou_modifier_state_get_type (void) G_GNUC_CONST;
void caribou_key_model_release (CaribouKeyModel* self);
gchar** caribou_keyboard_model_get_groups (CaribouKeyboardModel* self, int* result_length1);
CaribouGroupModel* caribou_keyboard_model_get_group (CaribouKeyboardModel* self, const gchar* group_name);
static void caribou_keyboard_model_set_active_group (CaribouKeyboardModel* self, const gchar* value);
static CaribouIKeyboardObject** caribou_keyboard_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1);
CaribouKeyboardModel* caribou_keyboard_model_new (void);
CaribouKeyboardModel* caribou_keyboard_model_construct (GType object_type);
const gchar* caribou_keyboard_model_get_active_group (CaribouKeyboardModel* self);
static void caribou_keyboard_model_set_keyboard_type (CaribouKeyboardModel* self, const gchar* value);
static GObject * caribou_keyboard_model_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
CaribouXAdapter* caribou_xadapter_get_default (void);
static void _caribou_keyboard_model_on_group_changed_caribou_xadapter_group_changed (CaribouXAdapter* _sender, guint gid, const gchar* group, const gchar* variant, gpointer self);
static void _caribou_keyboard_model_on_config_changed_caribou_xadapter_config_changed (CaribouXAdapter* _sender, gpointer self);
static void caribou_keyboard_model_finalize (GObject* obj);
static void _vala_caribou_keyboard_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_caribou_keyboard_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void caribou_keyboard_model_on_config_changed (CaribouKeyboardModel* self) {
	gchar** grps = NULL;
	gint grps_length1 = 0;
	gint _grps_size_ = 0;
	gchar** variants = NULL;
	gint variants_length1 = 0;
	gint _variants_size_ = 0;
	CaribouXAdapter* _tmp0_;
	gchar** _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gchar** _tmp3_ = NULL;
	gint _tmp4_ = 0;
	GeeHashSet* group_names = NULL;
	GeeHashSet* _tmp5_;
	GeeMapIterator* iter = NULL;
	GeeHashMap* _tmp35_;
	GeeMapIterator* _tmp36_ = NULL;
	gchar* group = NULL;
	gchar* variant = NULL;
	guint grpid = 0U;
	CaribouXAdapter* _tmp46_;
	gchar* _tmp47_ = NULL;
	gchar* _tmp48_ = NULL;
	guint _tmp49_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->xadapter;
	caribou_xadapter_get_groups (_tmp0_, &_tmp1_, &_tmp2_, &_tmp3_, &_tmp4_);
	grps = (_vala_array_free (grps, grps_length1, (GDestroyNotify) g_free), NULL);
	grps = _tmp1_;
	grps_length1 = _tmp2_;
	_grps_size_ = grps_length1;
	variants = (_vala_array_free (variants, variants_length1, (GDestroyNotify) g_free), NULL);
	variants = _tmp3_;
	variants_length1 = _tmp4_;
	_variants_size_ = variants_length1;
	_tmp5_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL);
	group_names = _tmp5_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp6_ = FALSE;
			_tmp6_ = TRUE;
			while (TRUE) {
				gboolean _tmp7_;
				gint _tmp9_;
				gchar** _tmp10_;
				gint _tmp10__length1;
				gchar* group_name = NULL;
				gchar** _tmp11_;
				gint _tmp11__length1;
				gint _tmp12_;
				const gchar* _tmp13_;
				gchar** _tmp14_;
				gint _tmp14__length1;
				gint _tmp15_;
				const gchar* _tmp16_;
				gchar* _tmp17_ = NULL;
				GeeHashSet* _tmp18_;
				const gchar* _tmp19_;
				GeeHashMap* _tmp20_;
				const gchar* _tmp21_;
				gboolean _tmp22_ = FALSE;
				_tmp7_ = _tmp6_;
				if (!_tmp7_) {
					gint _tmp8_;
					_tmp8_ = i;
					i = _tmp8_ + 1;
				}
				_tmp6_ = FALSE;
				_tmp9_ = i;
				_tmp10_ = grps;
				_tmp10__length1 = grps_length1;
				if (!(_tmp9_ < _tmp10__length1)) {
					break;
				}
				_tmp11_ = grps;
				_tmp11__length1 = grps_length1;
				_tmp12_ = i;
				_tmp13_ = _tmp11_[_tmp12_];
				_tmp14_ = variants;
				_tmp14__length1 = variants_length1;
				_tmp15_ = i;
				_tmp16_ = _tmp14_[_tmp15_];
				_tmp17_ = caribou_group_model_create_group_name (_tmp13_, _tmp16_);
				group_name = _tmp17_;
				_tmp18_ = group_names;
				_tmp19_ = group_name;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp18_, _tmp19_);
				_tmp20_ = self->priv->groups;
				_tmp21_ = group_name;
				_tmp22_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp20_, _tmp21_);
				if (!_tmp22_) {
					CaribouGroupModel* grp = NULL;
					gchar** _tmp23_;
					gint _tmp23__length1;
					gint _tmp24_;
					const gchar* _tmp25_;
					gchar** _tmp26_;
					gint _tmp26__length1;
					gint _tmp27_;
					const gchar* _tmp28_;
					CaribouGroupModel* _tmp29_ = NULL;
					CaribouGroupModel* _tmp30_;
					_tmp23_ = grps;
					_tmp23__length1 = grps_length1;
					_tmp24_ = i;
					_tmp25_ = _tmp23_[_tmp24_];
					_tmp26_ = variants;
					_tmp26__length1 = variants_length1;
					_tmp27_ = i;
					_tmp28_ = _tmp26_[_tmp27_];
					_tmp29_ = caribou_keyboard_model_populate_group (self, _tmp25_, _tmp28_);
					grp = _tmp29_;
					_tmp30_ = grp;
					if (_tmp30_ != NULL) {
						GeeHashMap* _tmp31_;
						const gchar* _tmp32_;
						CaribouGroupModel* _tmp33_;
						const gchar* _tmp34_;
						_tmp31_ = self->priv->groups;
						_tmp32_ = group_name;
						_tmp33_ = grp;
						gee_abstract_map_set ((GeeAbstractMap*) _tmp31_, _tmp32_, _tmp33_);
						_tmp34_ = group_name;
						g_signal_emit_by_name (self, "group-added", _tmp34_);
					}
					_g_object_unref0 (grp);
				}
				_g_free0 (group_name);
			}
		}
	}
	_tmp35_ = self->priv->groups;
	_tmp36_ = gee_abstract_map_map_iterator ((GeeAbstractMap*) _tmp35_);
	iter = _tmp36_;
	while (TRUE) {
		GeeMapIterator* _tmp37_;
		gboolean _tmp38_ = FALSE;
		gchar* group_name = NULL;
		GeeMapIterator* _tmp39_;
		gpointer _tmp40_ = NULL;
		GeeHashSet* _tmp41_;
		const gchar* _tmp42_;
		gboolean _tmp43_ = FALSE;
		_tmp37_ = iter;
		_tmp38_ = gee_map_iterator_next (_tmp37_);
		if (!_tmp38_) {
			break;
		}
		_tmp39_ = iter;
		_tmp40_ = gee_map_iterator_get_key (_tmp39_);
		group_name = (gchar*) _tmp40_;
		_tmp41_ = group_names;
		_tmp42_ = group_name;
		_tmp43_ = gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp41_, _tmp42_);
		if (!_tmp43_) {
			GeeMapIterator* _tmp44_;
			const gchar* _tmp45_;
			_tmp44_ = iter;
			gee_map_iterator_unset (_tmp44_);
			_tmp45_ = group_name;
			g_signal_emit_by_name (self, "group-removed", _tmp45_);
		}
		_g_free0 (group_name);
	}
	_tmp46_ = self->priv->xadapter;
	_tmp49_ = caribou_xadapter_get_current_group (_tmp46_, &_tmp47_, &_tmp48_);
	_g_free0 (group);
	group = _tmp47_;
	_g_free0 (variant);
	variant = _tmp48_;
	grpid = _tmp49_;
	caribou_keyboard_model_on_group_changed (self, grpid, group, variant);
	_g_free0 (variant);
	_g_free0 (group);
	_g_object_unref0 (iter);
	_g_object_unref0 (group_names);
	variants = (_vala_array_free (variants, variants_length1, (GDestroyNotify) g_free), NULL);
	grps = (_vala_array_free (grps, grps_length1, (GDestroyNotify) g_free), NULL);
}


static void _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_keyboard_model_on_key_clicked (self, key);
}


static void _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_keyboard_model_on_key_pressed (self, key);
}


static void _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_keyboard_model_on_key_released (self, key);
}


static CaribouGroupModel* caribou_keyboard_model_populate_group (CaribouKeyboardModel* self, const gchar* group, const gchar* variant) {
	CaribouGroupModel* result = NULL;
	CaribouGroupModel* grp = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	CaribouGroupModel* _tmp3_ = NULL;
	CaribouGroupModel* _tmp4_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (group != NULL, NULL);
	g_return_val_if_fail (variant != NULL, NULL);
	_tmp0_ = self->priv->_keyboard_type;
	_tmp1_ = group;
	_tmp2_ = variant;
	_tmp3_ = caribou_xml_deserializer_load_group (_tmp0_, _tmp1_, _tmp2_);
	grp = _tmp3_;
	_tmp4_ = grp;
	if (_tmp4_ != NULL) {
		CaribouGroupModel* _tmp5_;
		CaribouGroupModel* _tmp6_;
		CaribouGroupModel* _tmp7_;
		_tmp5_ = grp;
		g_signal_connect_object ((CaribouIKeyboardObject*) _tmp5_, "key-clicked", (GCallback) _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked, self, 0);
		_tmp6_ = grp;
		g_signal_connect_object ((CaribouIKeyboardObject*) _tmp6_, "key-pressed", (GCallback) _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed, self, 0);
		_tmp7_ = grp;
		g_signal_connect_object ((CaribouIKeyboardObject*) _tmp7_, "key-released", (GCallback) _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released, self, 0);
	}
	result = grp;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void caribou_keyboard_model_on_key_clicked (CaribouKeyboardModel* self, CaribouKeyModel* key) {
	CaribouKeyModel* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	CaribouKeyModel* _tmp6_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = key;
	_tmp1_ = caribou_key_model_get_name (_tmp0_);
	_tmp2_ = _tmp1_;
	if (g_strcmp0 (_tmp2_, "Caribou_Repeat") == 0) {
		CaribouKeyModel* _tmp3_;
		_tmp3_ = self->priv->last_activated_key;
		caribou_key_model_activate (_tmp3_);
	} else {
		CaribouKeyModel* _tmp4_;
		CaribouKeyModel* _tmp5_;
		_tmp4_ = key;
		_tmp5_ = _g_object_ref0 (_tmp4_);
		_g_object_unref0 (self->priv->last_activated_key);
		self->priv->last_activated_key = _tmp5_;
	}
	_tmp6_ = key;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-clicked", _tmp6_);
}


static void caribou_keyboard_model_on_key_pressed (CaribouKeyboardModel* self, CaribouKeyModel* key) {
	gboolean _tmp0_ = FALSE;
	CaribouKeyModel* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	gboolean _tmp6_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp1_ = key;
	_tmp2_ = caribou_key_model_get_is_modifier (_tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		CaribouKeyModel* _tmp4_;
		CaribouModifierState _tmp5_;
		_tmp4_ = key;
		_tmp5_ = _tmp4_->modifier_state;
		_tmp0_ = _tmp5_ == CARIBOU_MODIFIER_STATE_LATCHED;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp6_ = _tmp0_;
	if (_tmp6_) {
		GeeHashSet* _tmp7_;
		CaribouKeyModel* _tmp8_;
		_tmp7_ = self->priv->active_mod_keys;
		_tmp8_ = key;
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, _tmp8_);
	}
}


static void caribou_keyboard_model_on_key_released (CaribouKeyboardModel* self, CaribouKeyModel* key) {
	CaribouKeyModel* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = key;
	_tmp1_ = caribou_key_model_get_is_modifier (_tmp0_);
	_tmp2_ = _tmp1_;
	if (!_tmp2_) {
		CaribouKeyModel** modifiers = NULL;
		GeeHashSet* _tmp3_;
		gint _tmp4_ = 0;
		gpointer* _tmp5_ = NULL;
		gint modifiers_length1;
		gint _modifiers_size_;
		CaribouKeyModel** _tmp6_;
		gint _tmp6__length1;
		_tmp3_ = self->priv->active_mod_keys;
		_tmp5_ = gee_collection_to_array ((GeeCollection*) _tmp3_, &_tmp4_);
		modifiers = (CaribouKeyModel**) _tmp5_;
		modifiers_length1 = (_tmp4_ * sizeof (CaribouKeyModel*)) / sizeof (CaribouKeyModel*);
		_modifiers_size_ = modifiers_length1;
		_tmp6_ = modifiers;
		_tmp6__length1 = modifiers_length1;
		{
			CaribouKeyModel** modifier_collection = NULL;
			gint modifier_collection_length1 = 0;
			gint _modifier_collection_size_ = 0;
			gint modifier_it = 0;
			modifier_collection = _tmp6_;
			modifier_collection_length1 = _tmp6__length1;
			for (modifier_it = 0; modifier_it < _tmp6__length1; modifier_it = modifier_it + 1) {
				CaribouKeyModel* _tmp7_;
				CaribouKeyModel* modifier = NULL;
				_tmp7_ = _g_object_ref0 (modifier_collection[modifier_it]);
				modifier = _tmp7_;
				{
					CaribouKeyModel* _tmp8_;
					CaribouModifierState _tmp9_;
					_tmp8_ = modifier;
					_tmp9_ = _tmp8_->modifier_state;
					if (_tmp9_ == CARIBOU_MODIFIER_STATE_LATCHED) {
						CaribouKeyModel* _tmp10_;
						CaribouKeyModel* _tmp11_;
						_tmp10_ = modifier;
						_tmp10_->modifier_state = CARIBOU_MODIFIER_STATE_NONE;
						_tmp11_ = modifier;
						caribou_key_model_release (_tmp11_);
					}
					_g_object_unref0 (modifier);
				}
			}
		}
		modifiers = (_vala_array_free (modifiers, modifiers_length1, (GDestroyNotify) g_object_unref), NULL);
	}
}


gchar** caribou_keyboard_model_get_groups (CaribouKeyboardModel* self, int* result_length1) {
	gchar** result = NULL;
	GeeHashMap* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	GeeSet* _tmp3_;
	gint _tmp4_ = 0;
	gpointer* _tmp5_ = NULL;
	gchar** _tmp6_;
	gint _tmp6__length1;
	gchar** _tmp7_;
	gint _tmp7__length1;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->groups;
	_tmp1_ = gee_abstract_map_get_keys ((GeeMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp5_ = gee_collection_to_array ((GeeCollection*) _tmp3_, &_tmp4_);
	_tmp6_ = (gchar**) _tmp5_;
	_tmp6__length1 = (_tmp4_ * sizeof (gchar*)) / sizeof (gchar*);
	_g_object_unref0 (_tmp3_);
	_tmp7_ = _tmp6_;
	_tmp7__length1 = _tmp6__length1;
	if (result_length1) {
		*result_length1 = _tmp7__length1;
	}
	result = _tmp7_;
	return result;
}


CaribouGroupModel* caribou_keyboard_model_get_group (CaribouKeyboardModel* self, const gchar* group_name) {
	CaribouGroupModel* result = NULL;
	GeeHashMap* _tmp0_;
	const gchar* _tmp1_;
	gpointer _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (group_name != NULL, NULL);
	_tmp0_ = self->priv->groups;
	_tmp1_ = group_name;
	_tmp2_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp0_, _tmp1_);
	result = (CaribouGroupModel*) _tmp2_;
	return result;
}


static void caribou_keyboard_model_on_group_changed (CaribouKeyboardModel* self, guint grpid, const gchar* group, const gchar* variant) {
	gchar* group_name = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_ = NULL;
	GeeHashMap* _tmp3_;
	const gchar* _tmp4_;
	gpointer _tmp5_ = NULL;
	CaribouGroupModel* _tmp6_;
	gboolean _tmp7_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (group != NULL);
	g_return_if_fail (variant != NULL);
	_tmp0_ = group;
	_tmp1_ = variant;
	_tmp2_ = caribou_group_model_create_group_name (_tmp0_, _tmp1_);
	group_name = _tmp2_;
	_tmp3_ = self->priv->groups;
	_tmp4_ = group_name;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, _tmp4_);
	_tmp6_ = (CaribouGroupModel*) _tmp5_;
	_tmp7_ = _tmp6_ != NULL;
	_g_object_unref0 (_tmp6_);
	if (_tmp7_) {
		const gchar* _tmp8_;
		_tmp8_ = group_name;
		caribou_keyboard_model_set_active_group (self, _tmp8_);
	} else {
		gint _tmp9_ = 0;
		gchar** _tmp10_ = NULL;
		gchar** _tmp11_;
		gint _tmp11__length1;
		const gchar* _tmp12_;
		_tmp10_ = caribou_keyboard_model_get_groups (self, &_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp11__length1 = _tmp9_;
		_tmp12_ = _tmp11_[0];
		caribou_keyboard_model_set_active_group (self, _tmp12_);
		_tmp11_ = (_vala_array_free (_tmp11_, _tmp11__length1, (GDestroyNotify) g_free), NULL);
	}
	_g_free0 (group_name);
}


static CaribouIKeyboardObject** caribou_keyboard_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1) {
	CaribouKeyboardModel * self;
	CaribouIKeyboardObject** result = NULL;
	GeeHashMap* _tmp0_;
	GeeCollection* _tmp1_;
	GeeCollection* _tmp2_;
	GeeCollection* _tmp3_;
	gint _tmp4_ = 0;
	gpointer* _tmp5_ = NULL;
	CaribouIKeyboardObject** _tmp6_;
	gint _tmp6__length1;
	CaribouIKeyboardObject** _tmp7_;
	gint _tmp7__length1;
	self = (CaribouKeyboardModel*) base;
	_tmp0_ = self->priv->groups;
	_tmp1_ = gee_abstract_map_get_values ((GeeMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp5_ = gee_collection_to_array (_tmp3_, &_tmp4_);
	_tmp6_ = (CaribouIKeyboardObject**) _tmp5_;
	_tmp6__length1 = (_tmp4_ * sizeof (CaribouGroupModel*)) / sizeof (CaribouIKeyboardObject*);
	_g_object_unref0 (_tmp3_);
	_tmp7_ = _tmp6_;
	_tmp7__length1 = _tmp6__length1;
	if (result_length1) {
		*result_length1 = _tmp7__length1;
	}
	result = _tmp7_;
	return result;
}


CaribouKeyboardModel* caribou_keyboard_model_construct (GType object_type) {
	CaribouKeyboardModel * self = NULL;
	self = (CaribouKeyboardModel*) g_object_new (object_type, NULL);
	return self;
}


CaribouKeyboardModel* caribou_keyboard_model_new (void) {
	return caribou_keyboard_model_construct (CARIBOU_TYPE_KEYBOARD_MODEL);
}


const gchar* caribou_keyboard_model_get_active_group (CaribouKeyboardModel* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_active_group;
	result = _tmp0_;
	return result;
}


static void caribou_keyboard_model_set_active_group (CaribouKeyboardModel* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_active_group);
	self->priv->_active_group = _tmp1_;
	g_object_notify ((GObject *) self, "active-group");
}


const gchar* caribou_keyboard_model_get_keyboard_type (CaribouKeyboardModel* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_keyboard_type;
	result = _tmp0_;
	return result;
}


static void caribou_keyboard_model_set_keyboard_type (CaribouKeyboardModel* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_keyboard_type);
	self->priv->_keyboard_type = _tmp1_;
	g_object_notify ((GObject *) self, "keyboard-type");
}


static void _caribou_keyboard_model_on_group_changed_caribou_xadapter_group_changed (CaribouXAdapter* _sender, guint gid, const gchar* group, const gchar* variant, gpointer self) {
	caribou_keyboard_model_on_group_changed (self, gid, group, variant);
}


static void _caribou_keyboard_model_on_config_changed_caribou_xadapter_config_changed (CaribouXAdapter* _sender, gpointer self) {
	caribou_keyboard_model_on_config_changed (self);
}


static GObject * caribou_keyboard_model_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	CaribouKeyboardModel * self;
	const gchar* _tmp0_;
	CaribouXAdapter* _tmp1_ = NULL;
	CaribouXAdapter* _tmp2_;
	CaribouXAdapter* _tmp3_;
	GeeHashMap* _tmp4_;
	GeeHashSet* _tmp5_;
	parent_class = G_OBJECT_CLASS (caribou_keyboard_model_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	_tmp0_ = self->priv->_keyboard_type;
	_vala_assert (_tmp0_ != NULL, "keyboard_type != null");
	_tmp1_ = caribou_xadapter_get_default ();
	_g_object_unref0 (self->priv->xadapter);
	self->priv->xadapter = _tmp1_;
	_tmp2_ = self->priv->xadapter;
	g_signal_connect_object (_tmp2_, "group-changed", (GCallback) _caribou_keyboard_model_on_group_changed_caribou_xadapter_group_changed, self, 0);
	_tmp3_ = self->priv->xadapter;
	g_signal_connect_object (_tmp3_, "config-changed", (GCallback) _caribou_keyboard_model_on_config_changed_caribou_xadapter_config_changed, self, 0);
	_tmp4_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, CARIBOU_TYPE_GROUP_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->groups);
	self->priv->groups = _tmp4_;
	caribou_keyboard_model_on_config_changed (self);
	_tmp5_ = gee_hash_set_new (CARIBOU_TYPE_KEY_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->active_mod_keys);
	self->priv->active_mod_keys = _tmp5_;
	return obj;
}


static void caribou_keyboard_model_class_init (CaribouKeyboardModelClass * klass) {
	caribou_keyboard_model_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CaribouKeyboardModelPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_caribou_keyboard_model_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_caribou_keyboard_model_set_property;
	G_OBJECT_CLASS (klass)->constructor = caribou_keyboard_model_constructor;
	G_OBJECT_CLASS (klass)->finalize = caribou_keyboard_model_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP, g_param_spec_string ("active-group", "active-group", "active-group", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE, g_param_spec_string ("keyboard-type", "keyboard-type", "keyboard-type", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_signal_new ("group_added", CARIBOU_TYPE_KEYBOARD_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
	g_signal_new ("group_removed", CARIBOU_TYPE_KEYBOARD_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
}


static void caribou_keyboard_model_caribou_ikeyboard_object_interface_init (CaribouIKeyboardObjectIface * iface) {
	caribou_keyboard_model_caribou_ikeyboard_object_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_children = (CaribouIKeyboardObject** (*)(CaribouIKeyboardObject*, int*)) caribou_keyboard_model_real_get_children;
}


static void caribou_keyboard_model_instance_init (CaribouKeyboardModel * self) {
	gchar* _tmp0_;
	self->priv = CARIBOU_KEYBOARD_MODEL_GET_PRIVATE (self);
	_tmp0_ = g_strdup ("");
	self->priv->_active_group = _tmp0_;
}


static void caribou_keyboard_model_finalize (GObject* obj) {
	CaribouKeyboardModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	_g_free0 (self->priv->_active_group);
	_g_free0 (self->priv->_keyboard_type);
	_g_object_unref0 (self->priv->xadapter);
	_g_object_unref0 (self->priv->groups);
	_g_object_unref0 (self->priv->last_activated_key);
	_g_object_unref0 (self->priv->active_mod_keys);
	G_OBJECT_CLASS (caribou_keyboard_model_parent_class)->finalize (obj);
}


/**
     * Object representing a whole keyboard.
     *
     * This is used for implementing custom keyboard service.
     *
     * A keyboard object consists of {@link GroupModel} objects.
     */
GType caribou_keyboard_model_get_type (void) {
	static volatile gsize caribou_keyboard_model_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_keyboard_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouKeyboardModelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_keyboard_model_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouKeyboardModel), 0, (GInstanceInitFunc) caribou_keyboard_model_instance_init, NULL };
		static const GInterfaceInfo caribou_ikeyboard_object_info = { (GInterfaceInitFunc) caribou_keyboard_model_caribou_ikeyboard_object_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType caribou_keyboard_model_type_id;
		caribou_keyboard_model_type_id = g_type_register_static (G_TYPE_OBJECT, "CaribouKeyboardModel", &g_define_type_info, 0);
		g_type_add_interface_static (caribou_keyboard_model_type_id, CARIBOU_TYPE_IKEYBOARD_OBJECT, &caribou_ikeyboard_object_info);
		g_once_init_leave (&caribou_keyboard_model_type_id__volatile, caribou_keyboard_model_type_id);
	}
	return caribou_keyboard_model_type_id__volatile;
}


static void _vala_caribou_keyboard_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CaribouKeyboardModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	switch (property_id) {
		case CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP:
		g_value_set_string (value, caribou_keyboard_model_get_active_group (self));
		break;
		case CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE:
		g_value_set_string (value, caribou_keyboard_model_get_keyboard_type (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_caribou_keyboard_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CaribouKeyboardModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	switch (property_id) {
		case CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP:
		caribou_keyboard_model_set_active_group (self, g_value_get_string (value));
		break;
		case CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE:
		caribou_keyboard_model_set_keyboard_type (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



