
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

#include "rna_mask.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_MaskParent_rna_properties;
PointerPropertyRNA rna_MaskParent_rna_type;
PointerPropertyRNA rna_MaskParent_id;
EnumPropertyRNA rna_MaskParent_id_type;
EnumPropertyRNA rna_MaskParent_type;
StringPropertyRNA rna_MaskParent_parent;
StringPropertyRNA rna_MaskParent_sub_parent;


CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties;
PointerPropertyRNA rna_MaskSplinePointUW_rna_type;
FloatPropertyRNA rna_MaskSplinePointUW_u;
FloatPropertyRNA rna_MaskSplinePointUW_weight;
BoolPropertyRNA rna_MaskSplinePointUW_select;


CollectionPropertyRNA rna_MaskSplinePoint_rna_properties;
PointerPropertyRNA rna_MaskSplinePoint_rna_type;
FloatPropertyRNA rna_MaskSplinePoint_handle_left;
FloatPropertyRNA rna_MaskSplinePoint_co;
FloatPropertyRNA rna_MaskSplinePoint_handle_right;
EnumPropertyRNA rna_MaskSplinePoint_handle_type;
EnumPropertyRNA rna_MaskSplinePoint_handle_left_type;
EnumPropertyRNA rna_MaskSplinePoint_handle_right_type;
FloatPropertyRNA rna_MaskSplinePoint_weight;
BoolPropertyRNA rna_MaskSplinePoint_select;
PointerPropertyRNA rna_MaskSplinePoint_parent;
CollectionPropertyRNA rna_MaskSplinePoint_feather_points;


CollectionPropertyRNA rna_MaskSpline_rna_properties;
PointerPropertyRNA rna_MaskSpline_rna_type;
EnumPropertyRNA rna_MaskSpline_offset_mode;
EnumPropertyRNA rna_MaskSpline_weight_interpolation;
BoolPropertyRNA rna_MaskSpline_use_cyclic;
BoolPropertyRNA rna_MaskSpline_use_fill;
BoolPropertyRNA rna_MaskSpline_use_self_intersection_check;
CollectionPropertyRNA rna_MaskSpline_points;


CollectionPropertyRNA rna_MaskSplines_rna_properties;
PointerPropertyRNA rna_MaskSplines_rna_type;
PointerPropertyRNA rna_MaskSplines_active;
PointerPropertyRNA rna_MaskSplines_active_point;

extern FunctionRNA rna_MaskSplines_new_func;
extern PointerPropertyRNA rna_MaskSplines_new_spline;

extern FunctionRNA rna_MaskSplines_remove_func;
extern PointerPropertyRNA rna_MaskSplines_remove_spline;



CollectionPropertyRNA rna_MaskSplinePoints_rna_properties;
PointerPropertyRNA rna_MaskSplinePoints_rna_type;

extern FunctionRNA rna_MaskSplinePoints_add_func;
extern IntPropertyRNA rna_MaskSplinePoints_add_count;

extern FunctionRNA rna_MaskSplinePoints_remove_func;
extern PointerPropertyRNA rna_MaskSplinePoints_remove_point;



CollectionPropertyRNA rna_MaskLayer_rna_properties;
PointerPropertyRNA rna_MaskLayer_rna_type;
StringPropertyRNA rna_MaskLayer_name;
CollectionPropertyRNA rna_MaskLayer_splines;
BoolPropertyRNA rna_MaskLayer_hide;
BoolPropertyRNA rna_MaskLayer_hide_select;
BoolPropertyRNA rna_MaskLayer_hide_render;
BoolPropertyRNA rna_MaskLayer_select;
FloatPropertyRNA rna_MaskLayer_alpha;
EnumPropertyRNA rna_MaskLayer_blend;
BoolPropertyRNA rna_MaskLayer_invert;
EnumPropertyRNA rna_MaskLayer_falloff;
BoolPropertyRNA rna_MaskLayer_use_fill_holes;
BoolPropertyRNA rna_MaskLayer_use_fill_overlap;


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

CollectionPropertyRNA rna_Mask_layers;
IntPropertyRNA rna_Mask_active_layer_index;
IntPropertyRNA rna_Mask_frame_start;
IntPropertyRNA rna_Mask_frame_end;
PointerPropertyRNA rna_Mask_animation_data;

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



CollectionPropertyRNA rna_MaskLayers_rna_properties;
PointerPropertyRNA rna_MaskLayers_rna_type;
PointerPropertyRNA rna_MaskLayers_active;

extern FunctionRNA rna_MaskLayers_new_func;
extern StringPropertyRNA rna_MaskLayers_new_name;
extern PointerPropertyRNA rna_MaskLayers_new_layer;

extern FunctionRNA rna_MaskLayers_remove_func;
extern PointerPropertyRNA rna_MaskLayers_remove_layer;

extern FunctionRNA rna_MaskLayers_clear_func;

static PointerRNA MaskParent_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskParent_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskParent_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskParent_rna_properties_get(iter);
    }
}

void MaskParent_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskParent_rna_properties_get(iter);
    }
}

void MaskParent_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskParent_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskParent_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA MaskParent_id_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

void MaskParent_id_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaskParent_id_set(ptr, value, reports);
}

int MaskParent_id_type_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return (int)(data->id_type);
}

void MaskParent_id_type_set(PointerRNA *ptr, int value)
{
    rna_MaskParent_id_type_set(ptr, value);
}

int MaskParent_type_get(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return (int)(data->type);
}

void MaskParent_type_set(PointerRNA *ptr, int value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    data->type = value;
}

void MaskParent_parent_get(PointerRNA *ptr, char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(value, data->parent, 64);
}

int MaskParent_parent_length(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return strlen(data->parent);
}

void MaskParent_parent_set(PointerRNA *ptr, const char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(data->parent, value, 64);
}

void MaskParent_sub_parent_get(PointerRNA *ptr, char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(value, data->sub_parent, 64);
}

int MaskParent_sub_parent_length(PointerRNA *ptr)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    return strlen(data->sub_parent);
}

void MaskParent_sub_parent_set(PointerRNA *ptr, const char *value)
{
    MaskParent *data = (MaskParent *)(ptr->data);
    BLI_strncpy_utf8(data->sub_parent, value, 64);
}

static PointerRNA MaskSplinePointUW_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskSplinePointUW_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
    }
}

void MaskSplinePointUW_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePointUW_rna_properties_get(iter);
    }
}

void MaskSplinePointUW_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskSplinePointUW_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplinePointUW_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float MaskSplinePointUW_u_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (float)(data->u);
}

void MaskSplinePointUW_u_set(PointerRNA *ptr, float value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    data->u = CLAMPIS(value, 0.0f, 1.0f);
}

float MaskSplinePointUW_weight_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (float)(data->w);
}

void MaskSplinePointUW_weight_set(PointerRNA *ptr, float value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    data->w = CLAMPIS(value, 0.0f, 1.0f);
}

bool MaskSplinePointUW_select_get(PointerRNA *ptr)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MaskSplinePointUW_select_set(PointerRNA *ptr, bool value)
{
    MaskSplinePointUW *data = (MaskSplinePointUW *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA MaskSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_rna_properties_get(iter);
    }
}

void MaskSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_rna_properties_get(iter);
    }
}

void MaskSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplinePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MaskSplinePoint_handle_left_get(PointerRNA *ptr, float values[2])
{
    rna_MaskSplinePoint_handle1_get(ptr, values);
}

void MaskSplinePoint_handle_left_set(PointerRNA *ptr, const float values[2])
{
    rna_MaskSplinePoint_handle1_set(ptr, values);
}

void MaskSplinePoint_co_get(PointerRNA *ptr, float values[2])
{
    rna_MaskSplinePoint_ctrlpoint_get(ptr, values);
}

void MaskSplinePoint_co_set(PointerRNA *ptr, const float values[2])
{
    rna_MaskSplinePoint_ctrlpoint_set(ptr, values);
}

void MaskSplinePoint_handle_right_get(PointerRNA *ptr, float values[2])
{
    rna_MaskSplinePoint_handle2_get(ptr, values);
}

void MaskSplinePoint_handle_right_set(PointerRNA *ptr, const float values[2])
{
    rna_MaskSplinePoint_handle2_set(ptr, values);
}

int MaskSplinePoint_handle_type_get(PointerRNA *ptr)
{
    return rna_MaskSplinePoint_handle_type_get(ptr);
}

void MaskSplinePoint_handle_type_set(PointerRNA *ptr, int value)
{
    rna_MaskSplinePoint_handle_type_set(ptr, value);
}

int MaskSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
    return rna_MaskSplinePoint_handle_left_type_get(ptr);
}

void MaskSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
    rna_MaskSplinePoint_handle_left_type_set(ptr, value);
}

int MaskSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
    return rna_MaskSplinePoint_handle_right_type_get(ptr);
}

void MaskSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
    rna_MaskSplinePoint_handle_right_type_set(ptr, value);
}

float MaskSplinePoint_weight_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (float)(data->bezt.weight);
}

void MaskSplinePoint_weight_set(PointerRNA *ptr, float value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    data->bezt.weight = CLAMPIS(value, 0.0f, 1.0f);
}

bool MaskSplinePoint_select_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (((data->bezt.f1) & 1) != 0);
}

void MaskSplinePoint_select_set(PointerRNA *ptr, bool value)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    if (value) { data->bezt.f1 |= 1; }
    else { data->bezt.f1 &= ~1; }
}

PointerRNA MaskSplinePoint_parent_get(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MaskParent, &data->parent);
}

int MaskSplinePoint_feather_points_length(PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);
    return (data->uw == NULL) ? 0 : data->tot_uw;
}

static PointerRNA MaskSplinePoint_feather_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSplinePointUW, rna_iterator_array_get(iter));
}

void MaskSplinePoint_feather_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MaskSplinePoint *data = (MaskSplinePoint *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePoint_feather_points;

    rna_iterator_array_begin(iter, data->uw, sizeof(data->uw[0]), data->tot_uw, 0, NULL);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_feather_points_get(iter);
    }
}

void MaskSplinePoint_feather_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoint_feather_points_get(iter);
    }
}

void MaskSplinePoint_feather_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MaskSplinePoint_feather_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MaskSplinePoint_feather_points_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = MaskSplinePoint_feather_points_get(&iter); }
    }

    MaskSplinePoint_feather_points_end(&iter);

    return found;
}

static PointerRNA MaskSpline_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskSpline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSpline_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSpline_rna_properties_get(iter);
    }
}

void MaskSpline_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSpline_rna_properties_get(iter);
    }
}

void MaskSpline_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskSpline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSpline_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MaskSpline_offset_mode_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (int)(data->offset_mode);
}

void MaskSpline_offset_mode_set(PointerRNA *ptr, int value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    data->offset_mode = value;
}

int MaskSpline_weight_interpolation_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (int)(data->weight_interp);
}

void MaskSpline_weight_interpolation_set(PointerRNA *ptr, int value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    data->weight_interp = value;
}

bool MaskSpline_use_cyclic_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MaskSpline_use_cyclic_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool MaskSpline_use_fill_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return !(((data->flag) & 4) != 0);
}

void MaskSpline_use_fill_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (!value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool MaskSpline_use_self_intersection_check_get(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void MaskSpline_use_self_intersection_check_set(PointerRNA *ptr, bool value)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

int MaskSpline_points_length(PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);
    return (data->points == NULL) ? 0 : data->tot_point;
}

static PointerRNA MaskSpline_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSplinePoint, rna_iterator_array_get(iter));
}

void MaskSpline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MaskSpline *data = (MaskSpline *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSpline_points;

    rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->tot_point, 0, NULL);

    if (iter->valid) {
        iter->ptr = MaskSpline_points_get(iter);
    }
}

void MaskSpline_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSpline_points_get(iter);
    }
}

void MaskSpline_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MaskSpline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MaskSpline_points_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = MaskSpline_points_get(&iter); }
    }

    MaskSpline_points_end(&iter);

    return found;
}

static PointerRNA MaskSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplines_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplines_rna_properties_get(iter);
    }
}

void MaskSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplines_rna_properties_get(iter);
    }
}

void MaskSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplines_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA MaskSplines_active_get(PointerRNA *ptr)
{
    return rna_MaskLayer_active_spline_get(ptr);
}

void MaskSplines_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaskLayer_active_spline_set(ptr, value, reports);
}

PointerRNA MaskSplines_active_point_get(PointerRNA *ptr)
{
    return rna_MaskLayer_active_spline_point_get(ptr);
}

void MaskSplines_active_point_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaskLayer_active_spline_point_set(ptr, value, reports);
}

static PointerRNA MaskSplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskSplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskSplinePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskSplinePoints_rna_properties_get(iter);
    }
}

void MaskSplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskSplinePoints_rna_properties_get(iter);
    }
}

void MaskSplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskSplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskSplinePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MaskLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayer_rna_properties_get(iter);
    }
}

void MaskLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskLayer_rna_properties_get(iter);
    }
}

void MaskLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MaskLayer_name_get(PointerRNA *ptr, char *value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MaskLayer_name_length(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return strlen(data->name);
}

void MaskLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MaskLayer_name_set(ptr, value);
}

static PointerRNA MaskLayer_splines_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskSpline, rna_iterator_listbase_get(iter));
}

void MaskLayer_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskLayer_splines;

    rna_MaskLayer_splines_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayer_splines_get(iter);
    }
}

void MaskLayer_splines_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MaskLayer_splines_get(iter);
    }
}

void MaskLayer_splines_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskLayer_splines_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MaskLayer_splines_begin(&iter, ptr);

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
        if (found) { *r_ptr = MaskLayer_splines_get(&iter); }
    }

    MaskLayer_splines_end(&iter);

    return found;
}

bool MaskLayer_hide_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->visibility_flag) & 1) != 0);
}

void MaskLayer_hide_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag |= 1; }
    else { data->visibility_flag &= ~1; }
}

bool MaskLayer_hide_select_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->visibility_flag) & 2) != 0);
}

void MaskLayer_hide_select_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag |= 2; }
    else { data->visibility_flag &= ~2; }
}

bool MaskLayer_hide_render_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->visibility_flag) & 4) != 0);
}

void MaskLayer_hide_render_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->visibility_flag |= 4; }
    else { data->visibility_flag &= ~4; }
}

bool MaskLayer_select_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void MaskLayer_select_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

float MaskLayer_alpha_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (float)(data->alpha);
}

void MaskLayer_alpha_set(PointerRNA *ptr, float value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->alpha = value;
}

int MaskLayer_blend_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->blend);
}

void MaskLayer_blend_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->blend = value;
}

bool MaskLayer_invert_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->blend_flag) & 1) != 0);
}

void MaskLayer_invert_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->blend_flag |= 1; }
    else { data->blend_flag &= ~1; }
}

int MaskLayer_falloff_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (int)(data->falloff);
}

void MaskLayer_falloff_set(PointerRNA *ptr, int value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    data->falloff = value;
}

bool MaskLayer_use_fill_holes_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

void MaskLayer_use_fill_holes_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool MaskLayer_use_fill_overlap_get(PointerRNA *ptr)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void MaskLayer_use_fill_overlap_set(PointerRNA *ptr, bool value)
{
    MaskLayer *data = (MaskLayer *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

static PointerRNA Mask_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MaskLayer, rna_iterator_listbase_get(iter));
}

void Mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mask_layers;

    rna_Mask_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mask_layers_get(iter);
    }
}

void Mask_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Mask_layers_get(iter);
    }
}

void Mask_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Mask_active_layer_index_get(PointerRNA *ptr)
{
    return rna_Mask_layer_active_index_get(ptr);
}

void Mask_active_layer_index_set(PointerRNA *ptr, int value)
{
    rna_Mask_layer_active_index_set(ptr, value);
}

int Mask_frame_start_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return (int)(data->sfra);
}

void Mask_frame_start_set(PointerRNA *ptr, int value)
{
    rna_Mask_start_frame_set(ptr, value);
}

int Mask_frame_end_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return (int)(data->efra);
}

void Mask_frame_end_set(PointerRNA *ptr, int value)
{
    rna_Mask_end_frame_set(ptr, value);
}

PointerRNA Mask_animation_data_get(PointerRNA *ptr)
{
    Mask *data = (Mask *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MaskLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaskLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaskLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaskLayers_rna_properties_get(iter);
    }
}

void MaskLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaskLayers_rna_properties_get(iter);
    }
}

void MaskLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaskLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaskLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA MaskLayers_active_get(PointerRNA *ptr)
{
    return rna_Mask_layer_active_get(ptr);
}

void MaskLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mask_layer_active_set(ptr, value, reports);
}





struct MaskSpline *MaskSplines_new_func(struct ID *_selfid, struct MaskLayer *_self)
{
	return rna_MaskLayer_spline_new(_selfid, _self);
}

void MaskSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskLayer *_self;
	struct MaskSpline *spline;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	spline = rna_MaskLayer_spline_new(_selfid, _self);
	*((struct MaskSpline **)_retdata) = spline;
}

void MaskSplines_remove_func(struct ID *_selfid, struct MaskLayer *_self, ReportList *reports, struct PointerRNA *spline)
{
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

void MaskSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskLayer *_self;
	struct PointerRNA *spline;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskLayer *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((struct PointerRNA **)_data);
	
	rna_MaskLayer_spline_remove(_selfid, _self, reports, spline);
}

/* Repeated prototypes to detect errors */

struct MaskSpline *rna_MaskLayer_spline_new(struct ID *_selfid, struct MaskLayer *_self);
void rna_MaskLayer_spline_remove(struct ID *_selfid, struct MaskLayer *_self, ReportList *reports, struct PointerRNA *spline);

void MaskSplinePoints_add_func(struct ID *_selfid, struct MaskSpline *_self, int count)
{
	rna_MaskSpline_points_add(_selfid, _self, count);
}

void MaskSplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskSpline *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_MaskSpline_points_add(_selfid, _self, count);
}

void MaskSplinePoints_remove_func(struct ID *_selfid, struct MaskSpline *_self, ReportList *reports, struct PointerRNA *point)
{
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

void MaskSplinePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MaskSpline *_self;
	struct PointerRNA *point;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MaskSpline *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((struct PointerRNA **)_data);
	
	rna_MaskSpline_point_remove(_selfid, _self, reports, point);
}

/* Repeated prototypes to detect errors */

void rna_MaskSpline_points_add(struct ID *_selfid, struct MaskSpline *_self, int count);
void rna_MaskSpline_point_remove(struct ID *_selfid, struct MaskSpline *_self, ReportList *reports, struct PointerRNA *point);



struct MaskLayer *MaskLayers_new_func(struct Mask *_self, const char * name)
{
	return rna_Mask_layers_new(_self, name);
}

void MaskLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	const char * name;
	struct MaskLayer *layer;
	char *_data, *_retdata;
	
	_self = (struct Mask *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mask_layers_new(_self, name);
	*((struct MaskLayer **)_retdata) = layer;
}

void MaskLayers_remove_func(struct Mask *_self, ReportList *reports, struct PointerRNA *layer)
{
	rna_Mask_layers_remove(_self, reports, layer);
}

void MaskLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct Mask *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_Mask_layers_remove(_self, reports, layer);
}

void MaskLayers_clear_func(struct Mask *_self)
{
	rna_Mask_layers_clear(_self);
}

void MaskLayers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mask *_self;
	_self = (struct Mask *)_ptr->data;
	
	rna_Mask_layers_clear(_self);
}

/* Repeated prototypes to detect errors */

struct MaskLayer *rna_Mask_layers_new(struct Mask *_self, const char * name);
void rna_Mask_layers_remove(struct Mask *_self, ReportList *reports, struct PointerRNA *layer);
void rna_Mask_layers_clear(struct Mask *_self);

/* Mask Parent */
CollectionPropertyRNA rna_MaskParent_rna_properties = {
	{(PropertyRNA *)&rna_MaskParent_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskParent_rna_properties_begin, MaskParent_rna_properties_next, MaskParent_rna_properties_end, MaskParent_rna_properties_get, NULL, NULL, MaskParent_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskParent_rna_type = {
	{(PropertyRNA *)&rna_MaskParent_id, (PropertyRNA *)&rna_MaskParent_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskParent_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaskParent_id = {
	{(PropertyRNA *)&rna_MaskParent_id_type, (PropertyRNA *)&rna_MaskParent_rna_type,
	-1, "id", 8388801, 0, 0, 0, 0, "ID",
	"ID-block to which masking element would be parented to or to its property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskParent_id_get, MaskParent_id_set, rna_MaskParent_id_typef, NULL,&RNA_ID
};

static const EnumPropertyItem rna_MaskParent_id_type_items[2] = {
	{17229, "MOVIECLIP", 111, "Movie Clip", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskParent_id_type = {
	{(PropertyRNA *)&rna_MaskParent_type, (PropertyRNA *)&rna_MaskParent_id,
	-1, "id_type", 3, 0, 0, 0, 0, "ID Type",
	"Type of ID-block that can be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskParent_id_type_get, MaskParent_id_type_set, NULL, NULL, NULL, rna_MaskParent_id_type_items, 1, 17229
};

static const EnumPropertyItem rna_MaskParent_type_items[3] = {
	{0, "POINT_TRACK", 0, "Point Track", ""},
	{1, "PLANE_TRACK", 0, "Plane Track", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskParent_type = {
	{(PropertyRNA *)&rna_MaskParent_parent, (PropertyRNA *)&rna_MaskParent_id_type,
	-1, "type", 3, 0, 0, 4, 0, "Parent Type",
	"Parent Type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskParent, type), 0, NULL},
	MaskParent_type_get, MaskParent_type_set, NULL, NULL, NULL, rna_MaskParent_type_items, 2, 0
};

StringPropertyRNA rna_MaskParent_parent = {
	{(PropertyRNA *)&rna_MaskParent_sub_parent, (PropertyRNA *)&rna_MaskParent_type,
	-1, "parent", 262145, 0, 0, 0, 0, "Parent",
	"Name of parent object in specified data-block to which parenting happens",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskParent_parent_get, MaskParent_parent_length, MaskParent_parent_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_MaskParent_sub_parent = {
	{NULL, (PropertyRNA *)&rna_MaskParent_parent,
	-1, "sub_parent", 262145, 0, 0, 0, 0, "Sub Parent",
	"Name of parent sub-object in specified data-block to which parenting happens",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mask_update_parent, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskParent_sub_parent_get, MaskParent_sub_parent_length, MaskParent_sub_parent_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StructRNA RNA_MaskParent = {
	{(ContainerRNA *)&RNA_MaskSplinePointUW, (ContainerRNA *)&RNA_MovieTrackingObjects,
	NULL,
	{(PropertyRNA *)&rna_MaskParent_rna_properties, (PropertyRNA *)&rna_MaskParent_sub_parent}},
	"MaskParent", NULL, NULL, 516, NULL, "Mask Parent",
	"Parenting settings for masking element",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskParent_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask Spline UW Point */
CollectionPropertyRNA rna_MaskSplinePointUW_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePointUW_rna_properties_begin, MaskSplinePointUW_rna_properties_next, MaskSplinePointUW_rna_properties_end, MaskSplinePointUW_rna_properties_get, NULL, NULL, MaskSplinePointUW_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePointUW_rna_type = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_u, (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePointUW_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MaskSplinePointUW_u = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_weight, (PropertyRNA *)&rna_MaskSplinePointUW_rna_type,
	-1, "u", 3, 0, 0, 4, 0, "U",
	"U coordinate of point along spline segment",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSplinePointUW, u), 5, NULL},
	MaskSplinePointUW_u_get, MaskSplinePointUW_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaskSplinePointUW_weight = {
	{(PropertyRNA *)&rna_MaskSplinePointUW_select, (PropertyRNA *)&rna_MaskSplinePointUW_u,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Weight of feather point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSplinePointUW, w), 5, NULL},
	MaskSplinePointUW_weight_get, MaskSplinePointUW_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaskSplinePointUW_select = {
	{NULL, (PropertyRNA *)&rna_MaskSplinePointUW_weight,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePointUW_select_get, MaskSplinePointUW_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaskSplinePointUW = {
	{(ContainerRNA *)&RNA_MaskSplinePoint, (ContainerRNA *)&RNA_MaskParent,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePointUW_rna_properties, (PropertyRNA *)&rna_MaskSplinePointUW_select}},
	"MaskSplinePointUW", NULL, NULL, 516, NULL, "Mask Spline UW Point",
	"Single point in spline segment defining feather",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplinePointUW_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask Spline Point */
CollectionPropertyRNA rna_MaskSplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_rna_properties_begin, MaskSplinePoint_rna_properties_next, MaskSplinePoint_rna_properties_end, MaskSplinePoint_rna_properties_get, NULL, NULL, MaskSplinePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePoint_rna_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_left, (PropertyRNA *)&rna_MaskSplinePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MaskSplinePoint_handle_left_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_handle_left = {
	{(PropertyRNA *)&rna_MaskSplinePoint_co, (PropertyRNA *)&rna_MaskSplinePoint_rna_type,
	-1, "handle_left", 3, 0, 0, 0, 0, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MaskSplinePoint_handle_left_get, MaskSplinePoint_handle_left_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_handle_left_default
};

static float rna_MaskSplinePoint_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_co = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_right, (PropertyRNA *)&rna_MaskSplinePoint_handle_left,
	-1, "co", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MaskSplinePoint_co_get, MaskSplinePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_co_default
};

static float rna_MaskSplinePoint_handle_right_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaskSplinePoint_handle_right = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_type, (PropertyRNA *)&rna_MaskSplinePoint_co,
	-1, "handle_right", 3, 0, 0, 0, 0, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MaskSplinePoint_handle_right_get, MaskSplinePoint_handle_right_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaskSplinePoint_handle_right_default
};

static const EnumPropertyItem rna_MaskSplinePoint_handle_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_left_type, (PropertyRNA *)&rna_MaskSplinePoint_handle_right,
	-1, "handle_type", 3, 0, 0, 0, 0, "Handle Type",
	"Handle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_handle_type_get, MaskSplinePoint_handle_type_set, NULL, NULL, NULL, rna_MaskSplinePoint_handle_type_items, 5, 0
};

static const EnumPropertyItem rna_MaskSplinePoint_handle_left_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_left_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_handle_right_type, (PropertyRNA *)&rna_MaskSplinePoint_handle_type,
	-1, "handle_left_type", 3, 0, 0, 0, 0, "Handle 1 Type",
	"Handle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_handle_left_type_get, MaskSplinePoint_handle_left_type_set, NULL, NULL, NULL, rna_MaskSplinePoint_handle_left_type_items, 5, 0
};

static const EnumPropertyItem rna_MaskSplinePoint_handle_right_type_items[6] = {
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned Single", ""},
	{5, "ALIGNED_DOUBLESIDE", 0, "Aligned", ""},
	{0, "FREE", 0, "Free", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSplinePoint_handle_right_type = {
	{(PropertyRNA *)&rna_MaskSplinePoint_weight, (PropertyRNA *)&rna_MaskSplinePoint_handle_left_type,
	-1, "handle_right_type", 3, 0, 0, 0, 0, "Handle 2 Type",
	"Handle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_handle_right_type_get, MaskSplinePoint_handle_right_type_set, NULL, NULL, NULL, rna_MaskSplinePoint_handle_right_type_items, 5, 0
};

FloatPropertyRNA rna_MaskSplinePoint_weight = {
	{(PropertyRNA *)&rna_MaskSplinePoint_select, (PropertyRNA *)&rna_MaskSplinePoint_handle_right_type,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Weight of the point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSplinePoint, bezt.weight), 5, NULL},
	MaskSplinePoint_weight_get, MaskSplinePoint_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaskSplinePoint_select = {
	{(PropertyRNA *)&rna_MaskSplinePoint_parent, (PropertyRNA *)&rna_MaskSplinePoint_weight,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_select_get, MaskSplinePoint_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MaskSplinePoint_parent = {
	{(PropertyRNA *)&rna_MaskSplinePoint_feather_points, (PropertyRNA *)&rna_MaskSplinePoint_select,
	-1, "parent", 8388608, 0, 0, 0, 0, "parent",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_parent_get, NULL, NULL, NULL,&RNA_MaskParent
};

CollectionPropertyRNA rna_MaskSplinePoint_feather_points = {
	{NULL, (PropertyRNA *)&rna_MaskSplinePoint_parent,
	-1, "feather_points", 0, 0, 0, 8, 0, "Feather Points",
	"Points defining feather",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoint_feather_points_begin, MaskSplinePoint_feather_points_next, MaskSplinePoint_feather_points_end, MaskSplinePoint_feather_points_get, MaskSplinePoint_feather_points_length, MaskSplinePoint_feather_points_lookup_int, NULL, NULL, &RNA_MaskSplinePointUW
};

StructRNA RNA_MaskSplinePoint = {
	{(ContainerRNA *)&RNA_MaskSpline, (ContainerRNA *)&RNA_MaskSplinePointUW,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoint_rna_properties, (PropertyRNA *)&rna_MaskSplinePoint_feather_points}},
	"MaskSplinePoint", NULL, NULL, 516, NULL, "Mask Spline Point",
	"Single point in spline used for defining mask",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplinePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask spline */
CollectionPropertyRNA rna_MaskSpline_rna_properties = {
	{(PropertyRNA *)&rna_MaskSpline_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSpline_rna_properties_begin, MaskSpline_rna_properties_next, MaskSpline_rna_properties_end, MaskSpline_rna_properties_get, NULL, NULL, MaskSpline_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSpline_rna_type = {
	{(PropertyRNA *)&rna_MaskSpline_offset_mode, (PropertyRNA *)&rna_MaskSpline_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSpline_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_MaskSpline_offset_mode_items[3] = {
	{0, "EVEN", 0, "Even", "Calculate even feather offset"},
	{1, "SMOOTH", 0, "Smooth", "Calculate feather offset as a second curve"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSpline_offset_mode = {
	{(PropertyRNA *)&rna_MaskSpline_weight_interpolation, (PropertyRNA *)&rna_MaskSpline_rna_type,
	-1, "offset_mode", 3, 0, 0, 4, 0, "Feather Offset",
	"The method used for calculating the feather offset",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSpline, offset_mode), 2, NULL},
	MaskSpline_offset_mode_get, MaskSpline_offset_mode_set, NULL, NULL, NULL, rna_MaskSpline_offset_mode_items, 2, 0
};

static const EnumPropertyItem rna_MaskSpline_weight_interpolation_items[3] = {
	{1, "LINEAR", 0, "Linear", ""},
	{2, "EASE", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskSpline_weight_interpolation = {
	{(PropertyRNA *)&rna_MaskSpline_use_cyclic, (PropertyRNA *)&rna_MaskSpline_offset_mode,
	-1, "weight_interpolation", 3, 0, 0, 4, 0, "Weight Interpolation",
	"The type of weight interpolation for spline",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskSpline, weight_interp), 2, NULL},
	MaskSpline_weight_interpolation_get, MaskSpline_weight_interpolation_set, NULL, NULL, NULL, rna_MaskSpline_weight_interpolation_items, 2, 1
};

BoolPropertyRNA rna_MaskSpline_use_cyclic = {
	{(PropertyRNA *)&rna_MaskSpline_use_fill, (PropertyRNA *)&rna_MaskSpline_weight_interpolation,
	-1, "use_cyclic", 1, 0, 0, 0, 0, "Cyclic",
	"Make this spline a closed loop",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSpline_use_cyclic_get, MaskSpline_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSpline_use_fill = {
	{(PropertyRNA *)&rna_MaskSpline_use_self_intersection_check, (PropertyRNA *)&rna_MaskSpline_use_cyclic,
	-1, "use_fill", 1, 0, 0, 0, 0, "Fill",
	"Make this spline filled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSpline_use_fill_get, MaskSpline_use_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskSpline_use_self_intersection_check = {
	{(PropertyRNA *)&rna_MaskSpline_points, (PropertyRNA *)&rna_MaskSpline_use_fill,
	-1, "use_self_intersection_check", 1, 0, 0, 0, 0, "Self Intersection Check",
	"Prevent feather from self-intersections",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mask_update_data, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSpline_use_self_intersection_check_get, MaskSpline_use_self_intersection_check_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MaskSpline_points = {
	{NULL, (PropertyRNA *)&rna_MaskSpline_use_self_intersection_check,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Collection of points",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MaskSplinePoints},
	MaskSpline_points_begin, MaskSpline_points_next, MaskSpline_points_end, MaskSpline_points_get, MaskSpline_points_length, MaskSpline_points_lookup_int, NULL, NULL, &RNA_MaskSplinePoint
};

StructRNA RNA_MaskSpline = {
	{(ContainerRNA *)&RNA_MaskSplines, (ContainerRNA *)&RNA_MaskSplinePoint,
	NULL,
	{(PropertyRNA *)&rna_MaskSpline_rna_properties, (PropertyRNA *)&rna_MaskSpline_points}},
	"MaskSpline", NULL, NULL, 516, NULL, "Mask spline",
	"Single spline used for defining mask shape",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSpline_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask Splines */
CollectionPropertyRNA rna_MaskSplines_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplines_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplines_rna_properties_begin, MaskSplines_rna_properties_next, MaskSplines_rna_properties_end, MaskSplines_rna_properties_get, NULL, NULL, MaskSplines_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplines_rna_type = {
	{(PropertyRNA *)&rna_MaskSplines_active, (PropertyRNA *)&rna_MaskSplines_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplines_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaskSplines_active = {
	{(PropertyRNA *)&rna_MaskSplines_active_point, (PropertyRNA *)&rna_MaskSplines_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Spline",
	"Active spline of masking layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplines_active_get, MaskSplines_active_set, NULL, NULL,&RNA_MaskSpline
};

PointerPropertyRNA rna_MaskSplines_active_point = {
	{NULL, (PropertyRNA *)&rna_MaskSplines_active,
	-1, "active_point", 41943041, 0, 0, 0, 0, "Active Spline",
	"Active spline of masking layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplines_active_point_get, MaskSplines_active_point_set, NULL, NULL,&RNA_MaskSplinePoint
};

PointerPropertyRNA rna_MaskSplines_new_spline = {
	{NULL, NULL,
	-1, "spline", 8388608, 0, 2, 0, 0, "",
	"The newly created spline",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskSpline
};

FunctionRNA rna_MaskSplines_new_func = {
	{(FunctionRNA *)&rna_MaskSplines_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaskSplines_new_spline, (PropertyRNA *)&rna_MaskSplines_new_spline}},
	"new", 2048, "Add a new spline to the layer",
	MaskSplines_new_call,
	(PropertyRNA *)&rna_MaskSplines_new_spline
};

PointerPropertyRNA rna_MaskSplines_remove_spline = {
	{NULL, NULL,
	-1, "spline", 262144, 0, 5, 0, 0, "",
	"The spline to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskSpline
};

FunctionRNA rna_MaskSplines_remove_func = {
	{NULL, (FunctionRNA *)&rna_MaskSplines_new_func,
	NULL,
	{(PropertyRNA *)&rna_MaskSplines_remove_spline, (PropertyRNA *)&rna_MaskSplines_remove_spline}},
	"remove", 2064, "Remove a spline from a layer",
	MaskSplines_remove_call,
	NULL
};

StructRNA RNA_MaskSplines = {
	{(ContainerRNA *)&RNA_MaskSplinePoints, (ContainerRNA *)&RNA_MaskSpline,
	NULL,
	{(PropertyRNA *)&rna_MaskSplines_rna_properties, (PropertyRNA *)&rna_MaskSplines_active_point}},
	"MaskSplines", NULL, NULL, 516, NULL, "Mask Splines",
	"Collection of masking splines",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplines_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaskSplines_new_func, (FunctionRNA *)&rna_MaskSplines_remove_func}
};

/* Mask Spline Points */
CollectionPropertyRNA rna_MaskSplinePoints_rna_properties = {
	{(PropertyRNA *)&rna_MaskSplinePoints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoints_rna_properties_begin, MaskSplinePoints_rna_properties_next, MaskSplinePoints_rna_properties_end, MaskSplinePoints_rna_properties_get, NULL, NULL, MaskSplinePoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskSplinePoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_MaskSplinePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskSplinePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MaskSplinePoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the spline",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_MaskSplinePoints_add_func = {
	{(FunctionRNA *)&rna_MaskSplinePoints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoints_add_count, (PropertyRNA *)&rna_MaskSplinePoints_add_count}},
	"add", 2048, "Add a number of point to this spline",
	MaskSplinePoints_add_call,
	NULL
};

PointerPropertyRNA rna_MaskSplinePoints_remove_point = {
	{NULL, NULL,
	-1, "point", 262144, 0, 5, 0, 0, "",
	"The point to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskSplinePoint
};

FunctionRNA rna_MaskSplinePoints_remove_func = {
	{NULL, (FunctionRNA *)&rna_MaskSplinePoints_add_func,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoints_remove_point, (PropertyRNA *)&rna_MaskSplinePoints_remove_point}},
	"remove", 2064, "Remove a point from a spline",
	MaskSplinePoints_remove_call,
	NULL
};

StructRNA RNA_MaskSplinePoints = {
	{(ContainerRNA *)&RNA_MaskLayer, (ContainerRNA *)&RNA_MaskSplines,
	NULL,
	{(PropertyRNA *)&rna_MaskSplinePoints_rna_properties, (PropertyRNA *)&rna_MaskSplinePoints_rna_type}},
	"MaskSplinePoints", NULL, NULL, 516, NULL, "Mask Spline Points",
	"Collection of masking spline points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskSplinePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaskSplinePoints_add_func, (FunctionRNA *)&rna_MaskSplinePoints_remove_func}
};

/* Mask Layer */
CollectionPropertyRNA rna_MaskLayer_rna_properties = {
	{(PropertyRNA *)&rna_MaskLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_rna_properties_begin, MaskLayer_rna_properties_next, MaskLayer_rna_properties_end, MaskLayer_rna_properties_get, NULL, NULL, MaskLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskLayer_rna_type = {
	{(PropertyRNA *)&rna_MaskLayer_name, (PropertyRNA *)&rna_MaskLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MaskLayer_name = {
	{(PropertyRNA *)&rna_MaskLayer_splines, (PropertyRNA *)&rna_MaskLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Unique name of layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mask_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_name_get, MaskLayer_name_length, MaskLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MaskLayer_splines = {
	{(PropertyRNA *)&rna_MaskLayer_hide, (PropertyRNA *)&rna_MaskLayer_name,
	-1, "splines", 0, 0, 0, 0, 0, "Splines",
	"Collection of splines which defines this layer",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MaskSplines},
	MaskLayer_splines_begin, MaskLayer_splines_next, MaskLayer_splines_end, MaskLayer_splines_get, NULL, MaskLayer_splines_lookup_int, NULL, NULL, &RNA_MaskSpline
};

BoolPropertyRNA rna_MaskLayer_hide = {
	{(PropertyRNA *)&rna_MaskLayer_hide_select, (PropertyRNA *)&rna_MaskLayer_splines,
	-1, "hide", 4355, 0, 0, 0, 0, "Restrict View",
	"Restrict visibility in the viewport",
	284, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 370606080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_hide_get, MaskLayer_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_hide_select = {
	{(PropertyRNA *)&rna_MaskLayer_hide_render, (PropertyRNA *)&rna_MaskLayer_hide,
	-1, "hide_select", 4355, 0, 0, 0, 0, "Restrict Select",
	"Restrict selection in the viewport",
	256, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 370606080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_hide_select_get, MaskLayer_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_hide_render = {
	{(PropertyRNA *)&rna_MaskLayer_select, (PropertyRNA *)&rna_MaskLayer_hide_select,
	-1, "hide_render", 4355, 0, 0, 0, 0, "Restrict Render",
	"Restrict renderability",
	258, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_hide_render_get, MaskLayer_hide_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_select = {
	{(PropertyRNA *)&rna_MaskLayer_alpha, (PropertyRNA *)&rna_MaskLayer_hide_render,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Layer is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_select_get, MaskLayer_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MaskLayer_alpha = {
	{(PropertyRNA *)&rna_MaskLayer_blend, (PropertyRNA *)&rna_MaskLayer_select,
	-1, "alpha", 3, 0, 0, 4, 0, "Opacity",
	"Render Opacity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskLayer, alpha), 5, NULL},
	MaskLayer_alpha_get, MaskLayer_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_MaskLayer_blend_items[10] = {
	{7, "MERGE_ADD", 0, "Merge Add", ""},
	{8, "MERGE_SUBTRACT", 0, "Merge Subtract", ""},
	{0, "ADD", 0, "Add", ""},
	{1, "SUBTRACT", 0, "Subtract", ""},
	{2, "LIGHTEN", 0, "Lighten", ""},
	{3, "DARKEN", 0, "Darken", ""},
	{4, "MUL", 0, "Multiply", ""},
	{5, "REPLACE", 0, "Replace", ""},
	{6, "DIFFERENCE", 0, "Difference", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaskLayer_blend = {
	{(PropertyRNA *)&rna_MaskLayer_invert, (PropertyRNA *)&rna_MaskLayer_alpha,
	-1, "blend", 3, 0, 0, 4, 0, "Blend",
	"Method of blending mask layers",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskLayer, blend), 2, NULL},
	MaskLayer_blend_get, MaskLayer_blend_set, NULL, NULL, NULL, rna_MaskLayer_blend_items, 9, 0
};

BoolPropertyRNA rna_MaskLayer_invert = {
	{(PropertyRNA *)&rna_MaskLayer_falloff, (PropertyRNA *)&rna_MaskLayer_blend,
	-1, "invert", 3, 0, 0, 0, 0, "Restrict View",
	"Invert the mask black/white",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_invert_get, MaskLayer_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_MaskLayer_falloff = {
	{(PropertyRNA *)&rna_MaskLayer_use_fill_holes, (PropertyRNA *)&rna_MaskLayer_invert,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"Falloff type the feather",
	0, "Curve",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaskLayer, falloff), 2, NULL},
	MaskLayer_falloff_get, MaskLayer_falloff_set, NULL, NULL, NULL, rna_enum_proportional_falloff_curve_only_items, 6, 0
};

BoolPropertyRNA rna_MaskLayer_use_fill_holes = {
	{(PropertyRNA *)&rna_MaskLayer_use_fill_overlap, (PropertyRNA *)&rna_MaskLayer_falloff,
	-1, "use_fill_holes", 3, 0, 0, 0, 0, "Calculate Holes",
	"Calculate holes when filling overlapping curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_use_fill_holes_get, MaskLayer_use_fill_holes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaskLayer_use_fill_overlap = {
	{NULL, (PropertyRNA *)&rna_MaskLayer_use_fill_holes,
	-1, "use_fill_overlap", 3, 0, 0, 0, 0, "Calculate Overlap",
	"Calculate self intersections and overlap before filling",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 369098753, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayer_use_fill_overlap_get, MaskLayer_use_fill_overlap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaskLayer = {
	{(ContainerRNA *)&RNA_Mask, (ContainerRNA *)&RNA_MaskSplinePoints,
	NULL,
	{(PropertyRNA *)&rna_MaskLayer_rna_properties, (PropertyRNA *)&rna_MaskLayer_use_fill_overlap}},
	"MaskLayer", NULL, NULL, 516, NULL, "Mask Layer",
	"Single layer used for masking pixels",
	"*", 17,
	(PropertyRNA *)&rna_MaskLayer_name, (PropertyRNA *)&rna_MaskLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MaskLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mask */
CollectionPropertyRNA rna_Mask_layers = {
	{(PropertyRNA *)&rna_Mask_active_layer_index, NULL,
	-1, "layers", 0, 0, 0, 0, 0, "Layers",
	"Collection of layers which defines this mask",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MaskLayers},
	Mask_layers_begin, Mask_layers_next, Mask_layers_end, Mask_layers_get, NULL, NULL, NULL, NULL, &RNA_MaskLayer
};

IntPropertyRNA rna_Mask_active_layer_index = {
	{(PropertyRNA *)&rna_Mask_frame_start, (PropertyRNA *)&rna_Mask_layers,
	-1, "active_layer_index", 1, 0, 0, 0, 0, "Active Shape Index",
	"Index of active layer in list of all mask\'s layers",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 370606080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mask_active_layer_index_get, Mask_active_layer_index_set, NULL, NULL, rna_Mask_layer_active_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mask_frame_start = {
	{(PropertyRNA *)&rna_Mask_frame_end, (PropertyRNA *)&rna_Mask_active_layer_index,
	-1, "frame_start", 1, 0, 0, 0, 0, "Start Frame",
	"First frame of the mask (used for sequencer)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 370606080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mask_frame_start_get, Mask_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1048574, 0, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_Mask_frame_end = {
	{(PropertyRNA *)&rna_Mask_animation_data, (PropertyRNA *)&rna_Mask_frame_start,
	-1, "frame_end", 1, 0, 0, 0, 0, "End Frame",
	"Final frame of the mask (used for sequencer)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 370606080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mask_frame_end_get, Mask_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1048574, 0, 1048574, 1, 0, NULL
};

PointerPropertyRNA rna_Mask_animation_data = {
	{NULL, (PropertyRNA *)&rna_Mask_frame_end,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Mask_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_Mask = {
	{(ContainerRNA *)&RNA_MaskLayers, (ContainerRNA *)&RNA_MaskLayer,
	NULL,
	{(PropertyRNA *)&rna_Mask_layers, (PropertyRNA *)&rna_Mask_animation_data}},
	"Mask", NULL, NULL, 519, NULL, "Mask",
	"Mask data-block defining mask for compositing",
	"*", 467,
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

/* Mask Layers */
CollectionPropertyRNA rna_MaskLayers_rna_properties = {
	{(PropertyRNA *)&rna_MaskLayers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayers_rna_properties_begin, MaskLayers_rna_properties_next, MaskLayers_rna_properties_end, MaskLayers_rna_properties_get, NULL, NULL, MaskLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaskLayers_rna_type = {
	{(PropertyRNA *)&rna_MaskLayers_active, (PropertyRNA *)&rna_MaskLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MaskLayers_active = {
	{NULL, (PropertyRNA *)&rna_MaskLayers_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Shape",
	"Active layer in this mask",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaskLayers_active_get, MaskLayers_active_set, NULL, NULL,&RNA_MaskLayer
};

StringPropertyRNA rna_MaskLayers_new_name = {
	{(PropertyRNA *)&rna_MaskLayers_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of new layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_MaskLayers_new_layer = {
	{NULL, (PropertyRNA *)&rna_MaskLayers_new_name,
	-1, "layer", 8388608, 0, 2, 0, 0, "",
	"New mask layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskLayer
};

FunctionRNA rna_MaskLayers_new_func = {
	{(FunctionRNA *)&rna_MaskLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MaskLayers_new_name, (PropertyRNA *)&rna_MaskLayers_new_layer}},
	"new", 0, "Add layer to this mask",
	MaskLayers_new_call,
	(PropertyRNA *)&rna_MaskLayers_new_layer
};

PointerPropertyRNA rna_MaskLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"Shape to be removed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MaskLayer
};

FunctionRNA rna_MaskLayers_remove_func = {
	{(FunctionRNA *)&rna_MaskLayers_clear_func, (FunctionRNA *)&rna_MaskLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_MaskLayers_remove_layer, (PropertyRNA *)&rna_MaskLayers_remove_layer}},
	"remove", 16, "Remove layer from this mask",
	MaskLayers_remove_call,
	NULL
};

FunctionRNA rna_MaskLayers_clear_func = {
	{NULL, (FunctionRNA *)&rna_MaskLayers_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all mask layers",
	MaskLayers_clear_call,
	NULL
};

StructRNA RNA_MaskLayers = {
	{(ContainerRNA *)&RNA_XrActionMap, (ContainerRNA *)&RNA_Mask,
	NULL,
	{(PropertyRNA *)&rna_MaskLayers_rna_properties, (PropertyRNA *)&rna_MaskLayers_active}},
	"MaskLayers", NULL, NULL, 516, NULL, "Mask Layers",
	"Collection of layers used by mask",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaskLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MaskLayers_new_func, (FunctionRNA *)&rna_MaskLayers_clear_func}
};

