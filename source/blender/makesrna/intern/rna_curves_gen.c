
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

#include "rna_curves.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_CurvePoint_rna_properties;
PointerPropertyRNA rna_CurvePoint_rna_type;
FloatPropertyRNA rna_CurvePoint_position;
FloatPropertyRNA rna_CurvePoint_radius;
IntPropertyRNA rna_CurvePoint_index;


CollectionPropertyRNA rna_CurveSlice_rna_properties;
PointerPropertyRNA rna_CurveSlice_rna_type;
CollectionPropertyRNA rna_CurveSlice_points;
IntPropertyRNA rna_CurveSlice_first_point_index;
IntPropertyRNA rna_CurveSlice_points_length;
IntPropertyRNA rna_CurveSlice_index;


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

CollectionPropertyRNA rna_Curves_curves;
CollectionPropertyRNA rna_Curves_points;
CollectionPropertyRNA rna_Curves_position_data;
CollectionPropertyRNA rna_Curves_curve_offset_data;
CollectionPropertyRNA rna_Curves_materials;
PointerPropertyRNA rna_Curves_surface;
StringPropertyRNA rna_Curves_surface_uv_map;
BoolPropertyRNA rna_Curves_use_mirror_x;
BoolPropertyRNA rna_Curves_use_mirror_y;
BoolPropertyRNA rna_Curves_use_mirror_z;
EnumPropertyRNA rna_Curves_selection_domain;
BoolPropertyRNA rna_Curves_use_sculpt_selection;
CollectionPropertyRNA rna_Curves_attributes;
CollectionPropertyRNA rna_Curves_color_attributes;
PointerPropertyRNA rna_Curves_animation_data;

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


static PointerRNA CurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurvePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurvePoint_rna_properties_get(iter);
    }
}

void CurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurvePoint_rna_properties_get(iter);
    }
}

void CurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurvePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void CurvePoint_position_get(PointerRNA *ptr, float values[3])
{
    rna_CurvePoint_location_get(ptr, values);
}

void CurvePoint_position_set(PointerRNA *ptr, const float values[3])
{
    rna_CurvePoint_location_set(ptr, values);
}

float CurvePoint_radius_get(PointerRNA *ptr)
{
    return rna_CurvePoint_radius_get(ptr);
}

void CurvePoint_radius_set(PointerRNA *ptr, float value)
{
    rna_CurvePoint_radius_set(ptr, value);
}

int CurvePoint_index_get(PointerRNA *ptr)
{
    return rna_CurvePoint_index_get(ptr);
}

static PointerRNA CurveSlice_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CurveSlice_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveSlice_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSlice_rna_properties_get(iter);
    }
}

void CurveSlice_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveSlice_rna_properties_get(iter);
    }
}

void CurveSlice_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CurveSlice_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurveSlice_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int CurveSlice_points_length(PointerRNA *ptr)
{
    return rna_CurveSlice_points_length_get(ptr);
}

static PointerRNA CurveSlice_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurvePoint, rna_iterator_array_get(iter));
}

void CurveSlice_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveSlice_points;

    rna_CurveSlice_points_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSlice_points_get(iter);
    }
}

void CurveSlice_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = CurveSlice_points_get(iter);
    }
}

void CurveSlice_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int CurveSlice_first_point_index_get(PointerRNA *ptr)
{
    return rna_CurveSlice_first_point_index_get(ptr);
}

int CurveSlice_points_length_get(PointerRNA *ptr)
{
    return rna_CurveSlice_points_length_get(ptr);
}

int CurveSlice_index_get(PointerRNA *ptr)
{
    return rna_CurveSlice_index_get(ptr);
}

int Curves_curves_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->geometry.curve_offsets == NULL) ? 0 : data->geometry.curve_num;
}

static PointerRNA Curves_curves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveSlice, rna_iterator_array_get(iter));
}

void Curves_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_curves;

    rna_iterator_array_begin(iter, data->geometry.curve_offsets, sizeof(data->geometry.curve_offsets[0]), data->geometry.curve_num, 0, NULL);

    if (iter->valid) {
        iter->ptr = Curves_curves_get(iter);
    }
}

void Curves_curves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_curves_get(iter);
    }
}

void Curves_curves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curves_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Curves_curves_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_curves_get(&iter); }
    }

    Curves_curves_end(&iter);

    return found;
}

int Curves_points_length(PointerRNA *ptr)
{
    return rna_Curves_position_data_length(ptr);
}

static PointerRNA Curves_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CurvePoint, rna_iterator_array_get(iter));
}

void Curves_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_points;

    rna_Curves_position_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_points_get(iter);
    }
}

void Curves_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_points_get(iter);
    }
}

void Curves_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curves_position_data_length(PointerRNA *ptr)
{
    return rna_Curves_position_data_length(ptr);
}

static PointerRNA Curves_position_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FloatVectorAttributeValue, rna_iterator_array_get(iter));
}

void Curves_position_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_position_data;

    rna_Curves_position_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_position_data_get(iter);
    }
}

void Curves_position_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_position_data_get(iter);
    }
}

void Curves_position_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curves_curve_offset_data_length(PointerRNA *ptr)
{
    return rna_Curves_curve_offset_data_length(ptr);
}

static PointerRNA Curves_curve_offset_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IntAttributeValue, rna_iterator_array_get(iter));
}

void Curves_curve_offset_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_curve_offset_data;

    rna_Curves_curve_offset_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_curve_offset_data_get(iter);
    }
}

void Curves_curve_offset_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_curve_offset_data_get(iter);
    }
}

void Curves_curve_offset_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curves_curve_offset_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Curves_curve_offset_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_curve_offset_data_get(&iter); }
    }

    Curves_curve_offset_data_end(&iter);

    return found;
}

int Curves_materials_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA Curves_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Curves_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

    if (iter->valid) {
        iter->ptr = Curves_materials_get(iter);
    }
}

void Curves_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_materials_get(iter);
    }
}

void Curves_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curves_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Curves_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curves_materials_get(&iter); }
    }

    Curves_materials_end(&iter);

    return found;
}

int Curves_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Curves_materials_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ID_name_get(&iter.ptr, name);
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
        Curves_materials_next(&iter);
    }
    Curves_materials_end(&iter);

    return found;
}

PointerRNA Curves_surface_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->surface);
}

void Curves_surface_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curves *data = (Curves *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->surface = value.data;
}

void Curves_surface_uv_map_get(PointerRNA *ptr, char *value)
{
    Curves *data = (Curves *)(ptr->data);
    if (data->surface_uv_map == NULL) {
        *value = '\0';
        return;
    }
    BLI_strncpy_utf8(value, data->surface_uv_map, strlen(data->surface_uv_map) + 1);
}

int Curves_surface_uv_map_length(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (data->surface_uv_map == NULL) ? 0 : strlen(data->surface_uv_map);
}

void Curves_surface_uv_map_set(PointerRNA *ptr, const char *value)
{
    Curves *data = (Curves *)(ptr->data);
    if (data->surface_uv_map != NULL) { MEM_freeN(data->surface_uv_map); }
    const int length = strlen(value);
    if (length > 0) {
        data->surface_uv_map = MEM_mallocN(length + 1, __func__);
        BLI_strncpy_utf8(data->surface_uv_map, value, length + 1);
    } else { data->surface_uv_map = NULL; }
}

bool Curves_use_mirror_x_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->symmetry) & 1) != 0);
}

void Curves_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry |= 1; }
    else { data->symmetry &= ~1; }
}

bool Curves_use_mirror_y_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->symmetry) & 2) != 0);
}

void Curves_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry |= 2; }
    else { data->symmetry &= ~2; }
}

bool Curves_use_mirror_z_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->symmetry) & 4) != 0);
}

void Curves_use_mirror_z_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->symmetry |= 4; }
    else { data->symmetry &= ~4; }
}

int Curves_selection_domain_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (int)(data->selection_domain);
}

void Curves_selection_domain_set(PointerRNA *ptr, int value)
{
    Curves *data = (Curves *)(ptr->data);
    data->selection_domain = value;
}

bool Curves_use_sculpt_selection_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void Curves_use_sculpt_selection_set(PointerRNA *ptr, bool value)
{
    Curves *data = (Curves *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

int Curves_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_length(ptr);
}

static PointerRNA Curves_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_iterator_get(iter);
}

void Curves_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_attributes;

    rna_AttributeGroup_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_attributes_get(iter);
    }
}

void Curves_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_attributes_get(iter);
    }
}

void Curves_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curves_color_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_color_length(ptr);
}

static PointerRNA Curves_color_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_color_iterator_get(iter);
}

void Curves_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curves_color_attributes;

    rna_AttributeGroup_color_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curves_color_attributes_get(iter);
    }
}

void Curves_color_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_color_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Curves_color_attributes_get(iter);
    }
}

void Curves_color_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

PointerRNA Curves_animation_data_get(PointerRNA *ptr)
{
    Curves *data = (Curves *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}




/* Curve Point */
CollectionPropertyRNA rna_CurvePoint_rna_properties = {
	{(PropertyRNA *)&rna_CurvePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurvePoint_rna_properties_begin, CurvePoint_rna_properties_next, CurvePoint_rna_properties_end, CurvePoint_rna_properties_get, NULL, NULL, CurvePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurvePoint_rna_type = {
	{(PropertyRNA *)&rna_CurvePoint_position, (PropertyRNA *)&rna_CurvePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurvePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_CurvePoint_position_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurvePoint_position = {
	{(PropertyRNA *)&rna_CurvePoint_radius, (PropertyRNA *)&rna_CurvePoint_rna_type,
	-1, "position", 3, 0, 0, 0, 0, "Position",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curves_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, CurvePoint_position_get, CurvePoint_position_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_CurvePoint_position_default
};

FloatPropertyRNA rna_CurvePoint_radius = {
	{(PropertyRNA *)&rna_CurvePoint_index, (PropertyRNA *)&rna_CurvePoint_position,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurvePoint_radius_get, CurvePoint_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_CurvePoint_index = {
	{NULL, (PropertyRNA *)&rna_CurvePoint_radius,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this points",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurvePoint_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_CurvePoint = {
	{(ContainerRNA *)&RNA_CurveSlice, (ContainerRNA *)&RNA_GpencilVertexGroupElement,
	NULL,
	{(PropertyRNA *)&rna_CurvePoint_rna_properties, (PropertyRNA *)&rna_CurvePoint_index}},
	"CurvePoint", NULL, NULL, 516, NULL, "Curve Point",
	"Curve curve control point",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurvePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_CurvePoint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Curve Slice */
CollectionPropertyRNA rna_CurveSlice_rna_properties = {
	{(PropertyRNA *)&rna_CurveSlice_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSlice_rna_properties_begin, CurveSlice_rna_properties_next, CurveSlice_rna_properties_end, CurveSlice_rna_properties_get, NULL, NULL, CurveSlice_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurveSlice_rna_type = {
	{(PropertyRNA *)&rna_CurveSlice_points, (PropertyRNA *)&rna_CurveSlice_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSlice_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_CurveSlice_points = {
	{(PropertyRNA *)&rna_CurveSlice_first_point_index, (PropertyRNA *)&rna_CurveSlice_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Control points of the curve",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSlice_points_begin, CurveSlice_points_next, CurveSlice_points_end, CurveSlice_points_get, CurveSlice_points_length, NULL, NULL, NULL, &RNA_CurvePoint
};

IntPropertyRNA rna_CurveSlice_first_point_index = {
	{(PropertyRNA *)&rna_CurveSlice_points_length, (PropertyRNA *)&rna_CurveSlice_points,
	-1, "first_point_index", 2, 0, 0, 0, 0, "First Point Index",
	"The index of this curve\'s first control point",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSlice_first_point_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_CurveSlice_points_length = {
	{(PropertyRNA *)&rna_CurveSlice_index, (PropertyRNA *)&rna_CurveSlice_first_point_index,
	-1, "points_length", 2, 0, 0, 0, 0, "Number of Points",
	"Number of control points in the curve",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSlice_points_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_CurveSlice_index = {
	{NULL, (PropertyRNA *)&rna_CurveSlice_points_length,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this curve",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSlice_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_CurveSlice = {
	{(ContainerRNA *)&RNA_Curves, (ContainerRNA *)&RNA_CurvePoint,
	NULL,
	{(PropertyRNA *)&rna_CurveSlice_rna_properties, (PropertyRNA *)&rna_CurveSlice_index}},
	"CurveSlice", NULL, NULL, 516, NULL, "Curve Slice",
	"A single curve from a curves data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurveSlice_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_CurveSlice_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Hair Curves */
CollectionPropertyRNA rna_Curves_curves = {
	{(PropertyRNA *)&rna_Curves_points, NULL,
	-1, "curves", 0, 0, 0, 8, 0, "Curves",
	"All curves in the data-block",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_curves_begin, Curves_curves_next, Curves_curves_end, Curves_curves_get, Curves_curves_length, Curves_curves_lookup_int, NULL, NULL, &RNA_CurveSlice
};

CollectionPropertyRNA rna_Curves_points = {
	{(PropertyRNA *)&rna_Curves_position_data, (PropertyRNA *)&rna_Curves_curves,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Control points of all curves",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_points_begin, Curves_points_next, Curves_points_end, Curves_points_get, Curves_points_length, NULL, NULL, NULL, &RNA_CurvePoint
};

CollectionPropertyRNA rna_Curves_position_data = {
	{(PropertyRNA *)&rna_Curves_curve_offset_data, (PropertyRNA *)&rna_Curves_points,
	-1, "position_data", 0, 0, 0, 8, 0, "position_data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_position_data_begin, Curves_position_data_next, Curves_position_data_end, Curves_position_data_get, Curves_position_data_length, NULL, NULL, NULL, &RNA_FloatVectorAttributeValue
};

CollectionPropertyRNA rna_Curves_curve_offset_data = {
	{(PropertyRNA *)&rna_Curves_materials, (PropertyRNA *)&rna_Curves_position_data,
	-1, "curve_offset_data", 0, 0, 0, 8, 0, "curve_offset_data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_curve_offset_data_begin, Curves_curve_offset_data_next, Curves_curve_offset_data_end, Curves_curve_offset_data_get, Curves_curve_offset_data_length, Curves_curve_offset_data_lookup_int, NULL, NULL, &RNA_IntAttributeValue
};

CollectionPropertyRNA rna_Curves_materials = {
	{(PropertyRNA *)&rna_Curves_surface, (PropertyRNA *)&rna_Curves_curve_offset_data,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDMaterials},
	Curves_materials_begin, Curves_materials_next, Curves_materials_end, Curves_materials_get, Curves_materials_length, Curves_materials_lookup_int, Curves_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

PointerPropertyRNA rna_Curves_surface = {
	{(PropertyRNA *)&rna_Curves_surface_uv_map, (PropertyRNA *)&rna_Curves_materials,
	-1, "surface", 8388737, 0, 0, 0, 0, "Surface",
	"Mesh object that the curves can be attached to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_surface_get, Curves_surface_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

StringPropertyRNA rna_Curves_surface_uv_map = {
	{(PropertyRNA *)&rna_Curves_use_mirror_x, (PropertyRNA *)&rna_Curves_surface,
	-1, "surface_uv_map", 262145, 0, 0, 0, 0, "Surface UV Map",
	"The name of the attribute on the surface mesh used to define the attachment of each curve",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_surface_uv_map_get, Curves_surface_uv_map_length, Curves_surface_uv_map_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_Curves_use_mirror_x = {
	{(PropertyRNA *)&rna_Curves_use_mirror_y, (PropertyRNA *)&rna_Curves_surface_uv_map,
	-1, "use_mirror_x", 3, 0, 0, 0, 0, "X",
	"Enable symmetry in the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_use_mirror_x_get, Curves_use_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curves_use_mirror_y = {
	{(PropertyRNA *)&rna_Curves_use_mirror_z, (PropertyRNA *)&rna_Curves_use_mirror_x,
	-1, "use_mirror_y", 3, 0, 0, 0, 0, "Y",
	"Enable symmetry in the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_use_mirror_y_get, Curves_use_mirror_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curves_use_mirror_z = {
	{(PropertyRNA *)&rna_Curves_selection_domain, (PropertyRNA *)&rna_Curves_use_mirror_y,
	-1, "use_mirror_z", 3, 0, 0, 0, 0, "Z",
	"Enable symmetry in the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_use_mirror_z_get, Curves_use_mirror_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_Curves_selection_domain = {
	{(PropertyRNA *)&rna_Curves_use_sculpt_selection, (PropertyRNA *)&rna_Curves_use_mirror_z,
	-1, "selection_domain", 1, 0, 0, 4, 0, "Selection Domain",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curves, selection_domain), 2, NULL},
	Curves_selection_domain_get, Curves_selection_domain_set, NULL, NULL, NULL, rna_enum_attribute_curves_domain_items, 2, 0
};

BoolPropertyRNA rna_Curves_use_sculpt_selection = {
	{(PropertyRNA *)&rna_Curves_attributes, (PropertyRNA *)&rna_Curves_selection_domain,
	-1, "use_sculpt_selection", 1, 0, 0, 0, 0, "Use Sculpt Selection",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curves_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curves_use_sculpt_selection_get, Curves_use_sculpt_selection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Curves_attributes = {
	{(PropertyRNA *)&rna_Curves_color_attributes, (PropertyRNA *)&rna_Curves_use_sculpt_selection,
	-1, "attributes", 0, 0, 0, 0, 0, "Attributes",
	"Geometry attributes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AttributeGroup},
	Curves_attributes_begin, Curves_attributes_next, Curves_attributes_end, Curves_attributes_get, Curves_attributes_length, NULL, NULL, NULL, &RNA_Attribute
};

CollectionPropertyRNA rna_Curves_color_attributes = {
	{(PropertyRNA *)&rna_Curves_animation_data, (PropertyRNA *)&rna_Curves_attributes,
	-1, "color_attributes", 0, 0, 0, 0, 0, "Color Attributes",
	"Geometry color attributes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AttributeGroup},
	Curves_color_attributes_begin, Curves_color_attributes_next, Curves_color_attributes_end, Curves_color_attributes_get, Curves_color_attributes_length, NULL, NULL, NULL, &RNA_Attribute
};

PointerPropertyRNA rna_Curves_animation_data = {
	{NULL, (PropertyRNA *)&rna_Curves_color_attributes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Curves_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_Curves = {
	{(ContainerRNA *)&RNA_RenderSlot, (ContainerRNA *)&RNA_CurveSlice,
	NULL,
	{(PropertyRNA *)&rna_Curves_curves, (PropertyRNA *)&rna_Curves_animation_data}},
	"Curves", NULL, NULL, 519, NULL, "Hair Curves",
	"Hair data-block for hair curves",
	"*", 652,
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

