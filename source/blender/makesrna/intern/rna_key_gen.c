
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "DNA_node_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_lib_id.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

#include "rna_prototypes_gen.h"

#include "rna_key.c"

/* Auto-generated Functions. */


extern CollectionPropertyRNA rna_ID_rna_properties;
extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern StringPropertyRNA rna_ID_name_full;
extern BoolPropertyRNA rna_ID_is_evaluated;
extern PointerPropertyRNA rna_ID_original;
extern IntPropertyRNA rna_ID_users;
extern BoolPropertyRNA rna_ID_use_fake_user;
extern BoolPropertyRNA rna_ID_use_extra_user;
extern BoolPropertyRNA rna_ID_is_embedded_data;
extern BoolPropertyRNA rna_ID_tag;
extern BoolPropertyRNA rna_ID_is_library_indirect;
extern PointerPropertyRNA rna_ID_library;
extern PointerPropertyRNA rna_ID_library_weak_reference;
extern PointerPropertyRNA rna_ID_asset_data;
extern PointerPropertyRNA rna_ID_override_library;
extern PointerPropertyRNA rna_ID_preview;

PointerPropertyRNA rna_Key_reference_key;
CollectionPropertyRNA rna_Key_key_blocks;
PointerPropertyRNA rna_Key_animation_data;
PointerPropertyRNA rna_Key_user;
BoolPropertyRNA rna_Key_use_relative;
FloatPropertyRNA rna_Key_eval_time;

extern FunctionRNA rna_ID_evaluated_get_func;
extern PointerPropertyRNA rna_ID_evaluated_get_depsgraph;
extern PointerPropertyRNA rna_ID_evaluated_get_id;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_asset_mark_func;
extern FunctionRNA rna_ID_asset_clear_func;
extern FunctionRNA rna_ID_asset_generate_preview_func;
extern FunctionRNA rna_ID_override_create_func;
extern PointerPropertyRNA rna_ID_override_create_id;
extern BoolPropertyRNA rna_ID_override_create_remap_local_usages;

extern FunctionRNA rna_ID_override_hierarchy_create_func;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_id;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_scene;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_view_layer;
extern PointerPropertyRNA rna_ID_override_hierarchy_create_reference;

extern FunctionRNA rna_ID_override_template_create_func;
extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_user_remap_func;
extern PointerPropertyRNA rna_ID_user_remap_new_id;

extern FunctionRNA rna_ID_make_local_func;
extern BoolPropertyRNA rna_ID_make_local_clear_proxy;
extern PointerPropertyRNA rna_ID_make_local_id;

extern FunctionRNA rna_ID_user_of_id_func;
extern PointerPropertyRNA rna_ID_user_of_id_id;
extern IntPropertyRNA rna_ID_user_of_id_count;

extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;

extern FunctionRNA rna_ID_preview_ensure_func;
extern PointerPropertyRNA rna_ID_preview_ensure_preview_image;



CollectionPropertyRNA rna_ShapeKey_rna_properties;
PointerPropertyRNA rna_ShapeKey_rna_type;
StringPropertyRNA rna_ShapeKey_name;
FloatPropertyRNA rna_ShapeKey_frame;
FloatPropertyRNA rna_ShapeKey_value;
EnumPropertyRNA rna_ShapeKey_interpolation;
StringPropertyRNA rna_ShapeKey_vertex_group;
PointerPropertyRNA rna_ShapeKey_relative_key;
BoolPropertyRNA rna_ShapeKey_mute;
FloatPropertyRNA rna_ShapeKey_slider_min;
FloatPropertyRNA rna_ShapeKey_slider_max;
CollectionPropertyRNA rna_ShapeKey_data;

extern FunctionRNA rna_ShapeKey_normals_vertex_get_func;
extern FloatPropertyRNA rna_ShapeKey_normals_vertex_get_normals;

extern FunctionRNA rna_ShapeKey_normals_polygon_get_func;
extern FloatPropertyRNA rna_ShapeKey_normals_polygon_get_normals;

extern FunctionRNA rna_ShapeKey_normals_split_get_func;
extern FloatPropertyRNA rna_ShapeKey_normals_split_get_normals;



CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties;
PointerPropertyRNA rna_ShapeKeyPoint_rna_type;
FloatPropertyRNA rna_ShapeKeyPoint_co;


CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties;
PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type;
FloatPropertyRNA rna_ShapeKeyCurvePoint_co;
FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt;
FloatPropertyRNA rna_ShapeKeyCurvePoint_radius;


CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties;
PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type;
FloatPropertyRNA rna_ShapeKeyBezierPoint_co;
FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left;
FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right;
FloatPropertyRNA rna_ShapeKeyBezierPoint_tilt;
FloatPropertyRNA rna_ShapeKeyBezierPoint_radius;

PointerRNA Key_reference_key_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ShapeKey, data->refkey);
}

static PointerRNA Key_key_blocks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ShapeKey, rna_iterator_listbase_get(iter));
}

void Key_key_blocks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Key_key_blocks;

    rna_iterator_listbase_begin(iter, &data->block, NULL);

    if (iter->valid) {
        iter->ptr = Key_key_blocks_get(iter);
    }
}

void Key_key_blocks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Key_key_blocks_get(iter);
    }
}

void Key_key_blocks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Key_key_blocks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Key_key_blocks_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = Key_key_blocks_get(&iter); }
    }

    Key_key_blocks_end(&iter);

    return found;
}

int Key_key_blocks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ShapeKey_name_length(PointerRNA *);
    extern void ShapeKey_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Key_key_blocks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ShapeKey_name_length(&iter.ptr);
            if (namelen < 1024) {
                ShapeKey_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ShapeKey_name_get(&iter.ptr, name);
                if (strcmp(name, key) == 0) {
                    MEM_freeN(name);

                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
                else {
                    MEM_freeN(name);
                }
            }
        }
        Key_key_blocks_next(&iter);
    }
    Key_key_blocks_end(&iter);

    return found;
}

PointerRNA Key_animation_data_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

PointerRNA Key_user_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->from);
}

bool Key_use_relative_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return (((data->type) & 1) != 0);
}

void Key_use_relative_set(PointerRNA *ptr, bool value)
{
    Key *data = (Key *)(ptr->data);
    if (value) { data->type |= 1; }
    else { data->type &= ~1; }
}

float Key_eval_time_get(PointerRNA *ptr)
{
    Key *data = (Key *)(ptr->data);
    return (float)(data->ctime);
}

void Key_eval_time_set(PointerRNA *ptr, float value)
{
    Key *data = (Key *)(ptr->data);
    data->ctime = CLAMPIS(value, 0.0f, 1048574.0f);
}

static PointerRNA ShapeKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ShapeKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKey_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_rna_properties_get(iter);
    }
}

void ShapeKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_rna_properties_get(iter);
    }
}

void ShapeKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ShapeKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ShapeKey_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ShapeKey_name_get(PointerRNA *ptr, char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int ShapeKey_name_length(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return strlen(data->name);
}

void ShapeKey_name_set(PointerRNA *ptr, const char *value)
{
    rna_ShapeKey_name_set(ptr, value);
}

float ShapeKey_frame_get(PointerRNA *ptr)
{
    return rna_ShapeKey_frame_get(ptr);
}

float ShapeKey_value_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->curval);
}

void ShapeKey_value_set(PointerRNA *ptr, float value)
{
    rna_ShapeKey_value_set(ptr, value);
}

int ShapeKey_interpolation_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (int)(data->type);
}

void ShapeKey_interpolation_set(PointerRNA *ptr, int value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    data->type = value;
}

void ShapeKey_vertex_group_get(PointerRNA *ptr, char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_strncpy_utf8(value, data->vgroup, 64);
}

int ShapeKey_vertex_group_length(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return strlen(data->vgroup);
}

void ShapeKey_vertex_group_set(PointerRNA *ptr, const char *value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    BLI_strncpy_utf8(data->vgroup, value, 64);
}

PointerRNA ShapeKey_relative_key_get(PointerRNA *ptr)
{
    return rna_ShapeKey_relative_key_get(ptr);
}

void ShapeKey_relative_key_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ShapeKey_relative_key_set(ptr, value, reports);
}

bool ShapeKey_mute_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ShapeKey_mute_set(PointerRNA *ptr, bool value)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

float ShapeKey_slider_min_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->slidermin);
}

void ShapeKey_slider_min_set(PointerRNA *ptr, float value)
{
    rna_ShapeKey_slider_min_set(ptr, value);
}

float ShapeKey_slider_max_get(PointerRNA *ptr)
{
    KeyBlock *data = (KeyBlock *)(ptr->data);
    return (float)(data->slidermax);
}

void ShapeKey_slider_max_set(PointerRNA *ptr, float value)
{
    rna_ShapeKey_slider_max_set(ptr, value);
}

int ShapeKey_data_length(PointerRNA *ptr)
{
    return rna_ShapeKey_data_length(ptr);
}

static PointerRNA ShapeKey_data_get(CollectionPropertyIterator *iter)
{
    return rna_ShapeKey_data_get(iter);
}

void ShapeKey_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKey_data;

    rna_ShapeKey_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKey_data_get(iter);
    }
}

void ShapeKey_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKey_data_get(iter);
    }
}

void ShapeKey_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int ShapeKey_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    return rna_ShapeKey_data_lookup_int(ptr, index, r_ptr);
}

static PointerRNA ShapeKeyPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ShapeKeyPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKeyPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyPoint_rna_properties_get(iter);
    }
}

void ShapeKeyPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyPoint_rna_properties_get(iter);
    }
}

void ShapeKeyPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ShapeKeyPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ShapeKeyPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ShapeKeyPoint_co_get(PointerRNA *ptr, float values[3])
{
    rna_ShapeKeyPoint_co_get(ptr, values);
}

void ShapeKeyPoint_co_set(PointerRNA *ptr, const float values[3])
{
    rna_ShapeKeyPoint_co_set(ptr, values);
}

static PointerRNA ShapeKeyCurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ShapeKeyCurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyCurvePoint_rna_properties_get(iter);
    }
}

void ShapeKeyCurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyCurvePoint_rna_properties_get(iter);
    }
}

void ShapeKeyCurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ShapeKeyCurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ShapeKeyCurvePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ShapeKeyCurvePoint_co_get(PointerRNA *ptr, float values[3])
{
    rna_ShapeKeyPoint_co_get(ptr, values);
}

void ShapeKeyCurvePoint_co_set(PointerRNA *ptr, const float values[3])
{
    rna_ShapeKeyPoint_co_set(ptr, values);
}

float ShapeKeyCurvePoint_tilt_get(PointerRNA *ptr)
{
    return rna_ShapeKeyCurvePoint_tilt_get(ptr);
}

void ShapeKeyCurvePoint_tilt_set(PointerRNA *ptr, float value)
{
    rna_ShapeKeyCurvePoint_tilt_set(ptr, value);
}

float ShapeKeyCurvePoint_radius_get(PointerRNA *ptr)
{
    return rna_ShapeKeyCurvePoint_radius_get(ptr);
}

void ShapeKeyCurvePoint_radius_set(PointerRNA *ptr, float value)
{
    rna_ShapeKeyCurvePoint_radius_set(ptr, value);
}

static PointerRNA ShapeKeyBezierPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ShapeKeyBezierPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShapeKeyBezierPoint_rna_properties_get(iter);
    }
}

void ShapeKeyBezierPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShapeKeyBezierPoint_rna_properties_get(iter);
    }
}

void ShapeKeyBezierPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ShapeKeyBezierPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ShapeKeyBezierPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ShapeKeyBezierPoint_co_get(PointerRNA *ptr, float values[3])
{
    rna_ShapeKeyBezierPoint_co_get(ptr, values);
}

void ShapeKeyBezierPoint_co_set(PointerRNA *ptr, const float values[3])
{
    rna_ShapeKeyBezierPoint_co_set(ptr, values);
}

void ShapeKeyBezierPoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    rna_ShapeKeyBezierPoint_handle_1_co_get(ptr, values);
}

void ShapeKeyBezierPoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    rna_ShapeKeyBezierPoint_handle_1_co_set(ptr, values);
}

void ShapeKeyBezierPoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    rna_ShapeKeyBezierPoint_handle_2_co_get(ptr, values);
}

void ShapeKeyBezierPoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    rna_ShapeKeyBezierPoint_handle_2_co_set(ptr, values);
}

float ShapeKeyBezierPoint_tilt_get(PointerRNA *ptr)
{
    return rna_ShapeKeyBezierPoint_tilt_get(ptr);
}

void ShapeKeyBezierPoint_tilt_set(PointerRNA *ptr, float value)
{
    rna_ShapeKeyBezierPoint_tilt_set(ptr, value);
}

float ShapeKeyBezierPoint_radius_get(PointerRNA *ptr)
{
    return rna_ShapeKeyBezierPoint_radius_get(ptr);
}

void ShapeKeyBezierPoint_radius_set(PointerRNA *ptr, float value)
{
    rna_ShapeKeyBezierPoint_radius_set(ptr, value);
}


void ShapeKey_normals_vertex_get_func(struct ID *_selfid, struct KeyBlock *_self, int *normals_len, float **normals)
{
	rna_KeyBlock_normals_vert_calc(_selfid, _self, normals_len, normals);
}

void ShapeKey_normals_vertex_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct KeyBlock *_self;
	int *normals_len;
	float **normals;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_len = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_vert_calc(_selfid, _self, normals_len, normals);
}

void ShapeKey_normals_polygon_get_func(struct ID *_selfid, struct KeyBlock *_self, int *normals_len, float **normals)
{
	rna_KeyBlock_normals_poly_calc(_selfid, _self, normals_len, normals);
}

void ShapeKey_normals_polygon_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct KeyBlock *_self;
	int *normals_len;
	float **normals;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_len = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_poly_calc(_selfid, _self, normals_len, normals);
}

void ShapeKey_normals_split_get_func(struct ID *_selfid, struct KeyBlock *_self, int *normals_len, float **normals)
{
	rna_KeyBlock_normals_loop_calc(_selfid, _self, normals_len, normals);
}

void ShapeKey_normals_split_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct KeyBlock *_self;
	int *normals_len;
	float **normals;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct KeyBlock *)_ptr->data;
	_data = (char *)_parms->data;
	normals_len = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	normals = ((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_KeyBlock_normals_loop_calc(_selfid, _self, normals_len, normals);
}

/* Repeated prototypes to detect errors */

void rna_KeyBlock_normals_vert_calc(struct ID *_selfid, struct KeyBlock *_self, int *normals_len, float **normals);
void rna_KeyBlock_normals_poly_calc(struct ID *_selfid, struct KeyBlock *_self, int *normals_len, float **normals);
void rna_KeyBlock_normals_loop_calc(struct ID *_selfid, struct KeyBlock *_self, int *normals_len, float **normals);




/* Key */
PointerPropertyRNA rna_Key_reference_key = {
	{(PropertyRNA *)&rna_Key_key_blocks, NULL,
	-1, "reference_key", 8650752, 0, 0, 0, 0, "Reference Key",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Key_reference_key_get, NULL, NULL, NULL,&RNA_ShapeKey
};

CollectionPropertyRNA rna_Key_key_blocks = {
	{(PropertyRNA *)&rna_Key_animation_data, (PropertyRNA *)&rna_Key_reference_key,
	-1, "key_blocks", 0, 1, 0, 0, 0, "Key Blocks",
	"Shape keys",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Key_key_blocks_begin, Key_key_blocks_next, Key_key_blocks_end, Key_key_blocks_get, NULL, Key_key_blocks_lookup_int, Key_key_blocks_lookup_string, NULL, &RNA_ShapeKey
};

PointerPropertyRNA rna_Key_animation_data = {
	{(PropertyRNA *)&rna_Key_user, (PropertyRNA *)&rna_Key_key_blocks,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Key_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_Key_user = {
	{(PropertyRNA *)&rna_Key_use_relative, (PropertyRNA *)&rna_Key_animation_data,
	-1, "user", 8650944, 2, 0, 0, 0, "User",
	"Data-block using these shape keys",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Key_user_get, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_Key_use_relative = {
	{(PropertyRNA *)&rna_Key_eval_time, (PropertyRNA *)&rna_Key_user,
	-1, "use_relative", 3, 0, 0, 0, 0, "Relative",
	"Make shape keys relative, otherwise play through shapes as a sequence using the evaluation time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Key_use_relative_get, Key_use_relative_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Key_eval_time = {
	{NULL, (PropertyRNA *)&rna_Key_use_relative,
	-1, "eval_time", 3, 1, 0, 4, 0, "Evaluation Time",
	"Evaluation time for absolute shape keys",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Key, ctime), 5, NULL},
	Key_eval_time_get, Key_eval_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Key = {
	{(ContainerRNA *)&RNA_ShapeKey, (ContainerRNA *)&RNA_ImagePackedFile,
	NULL,
	{(PropertyRNA *)&rna_Key_reference_key, (PropertyRNA *)&rna_Key_eval_time}},
	"Key", NULL, NULL, 519, NULL, "Key",
	"Shape keys data-block containing different shapes of geometric data-blocks",
	"*", 176,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Shape Key */
CollectionPropertyRNA rna_ShapeKey_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKey_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_rna_properties_begin, ShapeKey_rna_properties_next, ShapeKey_rna_properties_end, ShapeKey_rna_properties_get, NULL, NULL, ShapeKey_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ShapeKey_rna_type = {
	{(PropertyRNA *)&rna_ShapeKey_name, (PropertyRNA *)&rna_ShapeKey_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ShapeKey_name = {
	{(PropertyRNA *)&rna_ShapeKey_frame, (PropertyRNA *)&rna_ShapeKey_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of Shape Key",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_name_get, ShapeKey_name_length, ShapeKey_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

FloatPropertyRNA rna_ShapeKey_frame = {
	{(PropertyRNA *)&rna_ShapeKey_value, (PropertyRNA *)&rna_ShapeKey_name,
	-1, "frame", 2, 0, 0, 0, 0, "Frame",
	"Frame for absolute keys",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_frame_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShapeKey_value = {
	{(PropertyRNA *)&rna_ShapeKey_interpolation, (PropertyRNA *)&rna_ShapeKey_frame,
	-1, "value", 3, 1, 0, 0, 0, "Value",
	"Value of shape key at the current frame",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_value_get, ShapeKey_value_set, NULL, NULL, rna_ShapeKey_value_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_ShapeKey_interpolation_items[5] = {
	{0, "KEY_LINEAR", 0, "Linear", ""},
	{1, "KEY_CARDINAL", 0, "Cardinal", ""},
	{3, "KEY_CATMULL_ROM", 0, "Catmull-Rom", ""},
	{2, "KEY_BSPLINE", 0, "BSpline", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShapeKey_interpolation = {
	{(PropertyRNA *)&rna_ShapeKey_vertex_group, (PropertyRNA *)&rna_ShapeKey_value,
	-1, "interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation type for absolute shape keys",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(KeyBlock, type), 1, NULL},
	ShapeKey_interpolation_get, ShapeKey_interpolation_set, NULL, NULL, NULL, rna_ShapeKey_interpolation_items, 4, 0
};

StringPropertyRNA rna_ShapeKey_vertex_group = {
	{(PropertyRNA *)&rna_ShapeKey_relative_key, (PropertyRNA *)&rna_ShapeKey_interpolation,
	-1, "vertex_group", 262145, 0, 0, 0, 0, "Vertex Group",
	"Vertex weight group, to blend with basis shape",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_vertex_group_get, ShapeKey_vertex_group_length, ShapeKey_vertex_group_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_ShapeKey_relative_key = {
	{(PropertyRNA *)&rna_ShapeKey_mute, (PropertyRNA *)&rna_ShapeKey_vertex_group,
	-1, "relative_key", 8650881, 0, 0, 0, 0, "Relative Key",
	"Shape used as a relative key",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_relative_key_get, ShapeKey_relative_key_set, NULL, NULL,&RNA_ShapeKey
};

BoolPropertyRNA rna_ShapeKey_mute = {
	{(PropertyRNA *)&rna_ShapeKey_slider_min, (PropertyRNA *)&rna_ShapeKey_relative_key,
	-1, "mute", 4355, 1, 0, 0, 0, "Mute",
	"Toggle this shape key",
	39, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_mute_get, ShapeKey_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ShapeKey_slider_min = {
	{(PropertyRNA *)&rna_ShapeKey_slider_max, (PropertyRNA *)&rna_ShapeKey_mute,
	-1, "slider_min", 3, 0, 0, 0, 0, "Slider Min",
	"Minimum for slider",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShapeKey_update_minmax, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_slider_min_get, ShapeKey_slider_min_set, NULL, NULL, rna_ShapeKey_slider_min_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShapeKey_slider_max = {
	{(PropertyRNA *)&rna_ShapeKey_data, (PropertyRNA *)&rna_ShapeKey_slider_min,
	-1, "slider_max", 3, 0, 0, 0, 0, "Slider Max",
	"Maximum for slider",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShapeKey_update_minmax, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_slider_max_get, ShapeKey_slider_max_set, NULL, NULL, rna_ShapeKey_slider_max_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

CollectionPropertyRNA rna_ShapeKey_data = {
	{NULL, (PropertyRNA *)&rna_ShapeKey_slider_max,
	-1, "data", 0, 4, 0, 0, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKey_data_begin, ShapeKey_data_next, ShapeKey_data_end, ShapeKey_data_get, ShapeKey_data_length, ShapeKey_data_lookup_int, NULL, NULL, &RNA_UnknownType
};

FloatPropertyRNA rna_ShapeKey_normals_vertex_get_normals = {
	{NULL, NULL,
	-1, "normals", 131075, 0, 2, 0, 0, "normals",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_KeyBlock_normals_vert_len, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_ShapeKey_normals_vertex_get_func = {
	{(FunctionRNA *)&rna_ShapeKey_normals_polygon_get_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ShapeKey_normals_vertex_get_normals, (PropertyRNA *)&rna_ShapeKey_normals_vertex_get_normals}},
	"normals_vertex_get", 2048, "Compute local space vertices\' normals for this shape key",
	ShapeKey_normals_vertex_get_call,
	NULL
};

FloatPropertyRNA rna_ShapeKey_normals_polygon_get_normals = {
	{NULL, NULL,
	-1, "normals", 131075, 0, 2, 0, 0, "normals",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_KeyBlock_normals_poly_len, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_ShapeKey_normals_polygon_get_func = {
	{(FunctionRNA *)&rna_ShapeKey_normals_split_get_func, (FunctionRNA *)&rna_ShapeKey_normals_vertex_get_func,
	NULL,
	{(PropertyRNA *)&rna_ShapeKey_normals_polygon_get_normals, (PropertyRNA *)&rna_ShapeKey_normals_polygon_get_normals}},
	"normals_polygon_get", 2048, "Compute local space faces\' normals for this shape key",
	ShapeKey_normals_polygon_get_call,
	NULL
};

FloatPropertyRNA rna_ShapeKey_normals_split_get_normals = {
	{NULL, NULL,
	-1, "normals", 131075, 0, 2, 0, 0, "normals",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_KeyBlock_normals_loop_len, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_ShapeKey_normals_split_get_func = {
	{NULL, (FunctionRNA *)&rna_ShapeKey_normals_polygon_get_func,
	NULL,
	{(PropertyRNA *)&rna_ShapeKey_normals_split_get_normals, (PropertyRNA *)&rna_ShapeKey_normals_split_get_normals}},
	"normals_split_get", 2048, "Compute local space face corners\' normals for this shape key",
	ShapeKey_normals_split_get_call,
	NULL
};

StructRNA RNA_ShapeKey = {
	{(ContainerRNA *)&RNA_ShapeKeyPoint, (ContainerRNA *)&RNA_Key,
	NULL,
	{(PropertyRNA *)&rna_ShapeKey_rna_properties, (PropertyRNA *)&rna_ShapeKey_data}},
	"ShapeKey", NULL, NULL, 516, NULL, "Shape Key",
	"Shape key in a shape keys data-block",
	"*", 176,
	(PropertyRNA *)&rna_ShapeKey_name, (PropertyRNA *)&rna_ShapeKey_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKey_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ShapeKey_normals_vertex_get_func, (FunctionRNA *)&rna_ShapeKey_normals_split_get_func}
};

/* Shape Key Point */
CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKeyPoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyPoint_rna_properties_begin, ShapeKeyPoint_rna_properties_next, ShapeKeyPoint_rna_properties_end, ShapeKeyPoint_rna_properties_get, NULL, NULL, ShapeKeyPoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ShapeKeyPoint_rna_type = {
	{(PropertyRNA *)&rna_ShapeKeyPoint_co, (PropertyRNA *)&rna_ShapeKeyPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ShapeKeyPoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyPoint_co = {
	{NULL, (PropertyRNA *)&rna_ShapeKeyPoint_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ShapeKeyPoint_co_get, ShapeKeyPoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyPoint_co_default
};

StructRNA RNA_ShapeKeyPoint = {
	{(ContainerRNA *)&RNA_ShapeKeyCurvePoint, (ContainerRNA *)&RNA_ShapeKey,
	NULL,
	{(PropertyRNA *)&rna_ShapeKeyPoint_rna_properties, (PropertyRNA *)&rna_ShapeKeyPoint_co}},
	"ShapeKeyPoint", NULL, NULL, 516, NULL, "Shape Key Point",
	"Point in a shape key",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ShapeKeyPoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKeyPoint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shape Key Curve Point */
CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyCurvePoint_rna_properties_begin, ShapeKeyCurvePoint_rna_properties_next, ShapeKeyCurvePoint_rna_properties_end, ShapeKeyCurvePoint_rna_properties_get, NULL, NULL, ShapeKeyCurvePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_co, (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyCurvePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ShapeKeyCurvePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_co = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_tilt, (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ShapeKeyCurvePoint_co_get, ShapeKeyCurvePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyCurvePoint_co_default
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt = {
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_radius, (PropertyRNA *)&rna_ShapeKeyCurvePoint_co,
	-1, "tilt", 3, 0, 0, 0, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyCurvePoint_tilt_get, ShapeKeyCurvePoint_tilt_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_radius = {
	{NULL, (PropertyRNA *)&rna_ShapeKeyCurvePoint_tilt,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyCurvePoint_radius_get, ShapeKeyCurvePoint_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ShapeKeyCurvePoint = {
	{(ContainerRNA *)&RNA_ShapeKeyBezierPoint, (ContainerRNA *)&RNA_ShapeKeyPoint,
	NULL,
	{(PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties, (PropertyRNA *)&rna_ShapeKeyCurvePoint_radius}},
	"ShapeKeyCurvePoint", NULL, NULL, 516, NULL, "Shape Key Curve Point",
	"Point in a shape key for curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ShapeKeyCurvePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKeyPoint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shape Key Bezier Point */
CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyBezierPoint_rna_properties_begin, ShapeKeyBezierPoint_rna_properties_next, ShapeKeyBezierPoint_rna_properties_end, ShapeKeyBezierPoint_rna_properties_get, NULL, NULL, ShapeKeyBezierPoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_co, (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyBezierPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ShapeKeyBezierPoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_co = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_left, (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ShapeKeyBezierPoint_co_get, ShapeKeyBezierPoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_co_default
};

static float rna_ShapeKeyBezierPoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_right, (PropertyRNA *)&rna_ShapeKeyBezierPoint_co,
	-1, "handle_left", 3, 0, 0, 0, 0, "Handle 1 Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ShapeKeyBezierPoint_handle_left_get, ShapeKeyBezierPoint_handle_left_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_handle_left_default
};

static float rna_ShapeKeyBezierPoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_tilt, (PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_left,
	-1, "handle_right", 3, 0, 0, 0, 0, "Handle 2 Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ShapeKeyBezierPoint_handle_right_get, ShapeKeyBezierPoint_handle_right_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_handle_right_default
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_tilt = {
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_radius, (PropertyRNA *)&rna_ShapeKeyBezierPoint_handle_right,
	-1, "tilt", 3, 0, 0, 0, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyBezierPoint_tilt_get, ShapeKeyBezierPoint_tilt_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_radius = {
	{NULL, (PropertyRNA *)&rna_ShapeKeyBezierPoint_tilt,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShapeKeyBezierPoint_radius_get, ShapeKeyBezierPoint_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ShapeKeyBezierPoint = {
	{(ContainerRNA *)&RNA_Light, (ContainerRNA *)&RNA_ShapeKeyCurvePoint,
	NULL,
	{(PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties, (PropertyRNA *)&rna_ShapeKeyBezierPoint_radius}},
	"ShapeKeyBezierPoint", NULL, NULL, 516, NULL, "Shape Key Bezier Point",
	"Point in a shape key for Bezier curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ShapeKeyBezierPoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKeyPoint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

