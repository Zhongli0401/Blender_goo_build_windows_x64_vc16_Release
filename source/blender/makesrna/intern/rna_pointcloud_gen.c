
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

#include "rna_pointcloud.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_Point_rna_properties;
PointerPropertyRNA rna_Point_rna_type;
FloatPropertyRNA rna_Point_co;
FloatPropertyRNA rna_Point_radius;
IntPropertyRNA rna_Point_index;


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

CollectionPropertyRNA rna_PointCloud_points;
CollectionPropertyRNA rna_PointCloud_materials;
CollectionPropertyRNA rna_PointCloud_attributes;
CollectionPropertyRNA rna_PointCloud_color_attributes;
PointerPropertyRNA rna_PointCloud_animation_data;

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


static PointerRNA Point_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Point_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Point_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Point_rna_properties_get(iter);
    }
}

void Point_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Point_rna_properties_get(iter);
    }
}

void Point_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Point_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Point_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void Point_co_get(PointerRNA *ptr, float values[3])
{
    rna_Point_location_get(ptr, values);
}

void Point_co_set(PointerRNA *ptr, const float values[3])
{
    rna_Point_location_set(ptr, values);
}

float Point_radius_get(PointerRNA *ptr)
{
    return rna_Point_radius_get(ptr);
}

void Point_radius_set(PointerRNA *ptr, float value)
{
    rna_Point_radius_set(ptr, value);
}

int Point_index_get(PointerRNA *ptr)
{
    return rna_Point_index_get(ptr);
}

int PointCloud_points_length(PointerRNA *ptr)
{
    return rna_PointCloud_points_length(ptr);
}

static PointerRNA PointCloud_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Point, rna_iterator_array_get(iter));
}

void PointCloud_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCloud_points;

    rna_PointCloud_points_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCloud_points_get(iter);
    }
}

void PointCloud_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_points_get(iter);
    }
}

void PointCloud_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int PointCloud_materials_length(PointerRNA *ptr)
{
    PointCloud *data = (PointCloud *)(ptr->data);
    return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA PointCloud_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void PointCloud_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    PointCloud *data = (PointCloud *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCloud_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

    if (iter->valid) {
        iter->ptr = PointCloud_materials_get(iter);
    }
}

void PointCloud_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_materials_get(iter);
    }
}

void PointCloud_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int PointCloud_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    PointCloud_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = PointCloud_materials_get(&iter); }
    }

    PointCloud_materials_end(&iter);

    return found;
}

int PointCloud_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    PointCloud_materials_begin(&iter, ptr);

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
        PointCloud_materials_next(&iter);
    }
    PointCloud_materials_end(&iter);

    return found;
}

int PointCloud_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_length(ptr);
}

static PointerRNA PointCloud_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_iterator_get(iter);
}

void PointCloud_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCloud_attributes;

    rna_AttributeGroup_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCloud_attributes_get(iter);
    }
}

void PointCloud_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_attributes_get(iter);
    }
}

void PointCloud_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int PointCloud_color_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_color_length(ptr);
}

static PointerRNA PointCloud_color_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_color_iterator_get(iter);
}

void PointCloud_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCloud_color_attributes;

    rna_AttributeGroup_color_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCloud_color_attributes_get(iter);
    }
}

void PointCloud_color_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_color_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_color_attributes_get(iter);
    }
}

void PointCloud_color_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

PointerRNA PointCloud_animation_data_get(PointerRNA *ptr)
{
    PointCloud *data = (PointCloud *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}



/* Point */
CollectionPropertyRNA rna_Point_rna_properties = {
	{(PropertyRNA *)&rna_Point_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Point_rna_properties_begin, Point_rna_properties_next, Point_rna_properties_end, Point_rna_properties_get, NULL, NULL, Point_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Point_rna_type = {
	{(PropertyRNA *)&rna_Point_co, (PropertyRNA *)&rna_Point_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Point_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_Point_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Point_co = {
	{(PropertyRNA *)&rna_Point_radius, (PropertyRNA *)&rna_Point_rna_type,
	-1, "co", 3, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_PointCloud_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Point_co_get, Point_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Point_co_default
};

FloatPropertyRNA rna_Point_radius = {
	{(PropertyRNA *)&rna_Point_index, (PropertyRNA *)&rna_Point_co,
	-1, "radius", 3, 0, 0, 0, 0, "Radius",
	"",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_PointCloud_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Point_radius_get, Point_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Point_index = {
	{NULL, (PropertyRNA *)&rna_Point_radius,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this points",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Point_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_Point = {
	{(ContainerRNA *)&RNA_PointCloud, (ContainerRNA *)&RNA_ParticleSettingsTextureSlots,
	NULL,
	{(PropertyRNA *)&rna_Point_rna_properties, (PropertyRNA *)&rna_Point_index}},
	"Point", NULL, NULL, 516, NULL, "Point",
	"Point in a point cloud",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Point_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Point_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Point Cloud */
CollectionPropertyRNA rna_PointCloud_points = {
	{(PropertyRNA *)&rna_PointCloud_materials, NULL,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCloud_points_begin, PointCloud_points_next, PointCloud_points_end, PointCloud_points_get, PointCloud_points_length, NULL, NULL, NULL, &RNA_Point
};

CollectionPropertyRNA rna_PointCloud_materials = {
	{(PropertyRNA *)&rna_PointCloud_attributes, (PropertyRNA *)&rna_PointCloud_points,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDMaterials},
	PointCloud_materials_begin, PointCloud_materials_next, PointCloud_materials_end, PointCloud_materials_get, PointCloud_materials_length, PointCloud_materials_lookup_int, PointCloud_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

CollectionPropertyRNA rna_PointCloud_attributes = {
	{(PropertyRNA *)&rna_PointCloud_color_attributes, (PropertyRNA *)&rna_PointCloud_materials,
	-1, "attributes", 0, 0, 0, 0, 0, "Attributes",
	"Geometry attributes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AttributeGroup},
	PointCloud_attributes_begin, PointCloud_attributes_next, PointCloud_attributes_end, PointCloud_attributes_get, PointCloud_attributes_length, NULL, NULL, NULL, &RNA_Attribute
};

CollectionPropertyRNA rna_PointCloud_color_attributes = {
	{(PropertyRNA *)&rna_PointCloud_animation_data, (PropertyRNA *)&rna_PointCloud_attributes,
	-1, "color_attributes", 0, 0, 0, 0, 0, "Color Attributes",
	"Geometry color attributes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AttributeGroup},
	PointCloud_color_attributes_begin, PointCloud_color_attributes_next, PointCloud_color_attributes_end, PointCloud_color_attributes_get, PointCloud_color_attributes_length, NULL, NULL, NULL, &RNA_Attribute
};

PointerPropertyRNA rna_PointCloud_animation_data = {
	{NULL, (PropertyRNA *)&rna_PointCloud_color_attributes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	PointCloud_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_PointCloud = {
	{(ContainerRNA *)&RNA_Pose, (ContainerRNA *)&RNA_Point,
	NULL,
	{(PropertyRNA *)&rna_PointCloud_points, (PropertyRNA *)&rna_PointCloud_animation_data}},
	"PointCloud", NULL, NULL, 519, NULL, "Point Cloud",
	"Point cloud data-block",
	"*", 655,
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

