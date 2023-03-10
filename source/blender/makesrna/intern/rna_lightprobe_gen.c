
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

#include "rna_lightprobe.c"

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

EnumPropertyRNA rna_LightProbe_type;
FloatPropertyRNA rna_LightProbe_clip_start;
FloatPropertyRNA rna_LightProbe_clip_end;
BoolPropertyRNA rna_LightProbe_show_clip;
EnumPropertyRNA rna_LightProbe_influence_type;
BoolPropertyRNA rna_LightProbe_show_influence;
FloatPropertyRNA rna_LightProbe_influence_distance;
FloatPropertyRNA rna_LightProbe_falloff;
BoolPropertyRNA rna_LightProbe_use_custom_parallax;
BoolPropertyRNA rna_LightProbe_show_parallax;
EnumPropertyRNA rna_LightProbe_parallax_type;
FloatPropertyRNA rna_LightProbe_parallax_distance;
IntPropertyRNA rna_LightProbe_grid_resolution_x;
IntPropertyRNA rna_LightProbe_grid_resolution_y;
IntPropertyRNA rna_LightProbe_grid_resolution_z;
FloatPropertyRNA rna_LightProbe_visibility_buffer_bias;
FloatPropertyRNA rna_LightProbe_visibility_bleed_bias;
FloatPropertyRNA rna_LightProbe_visibility_blur;
FloatPropertyRNA rna_LightProbe_intensity;
PointerPropertyRNA rna_LightProbe_visibility_collection;
BoolPropertyRNA rna_LightProbe_invert_visibility_collection;
BoolPropertyRNA rna_LightProbe_show_data;
PointerPropertyRNA rna_LightProbe_animation_data;

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


int LightProbe_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->type);
}

float LightProbe_clip_start_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipsta);
}

void LightProbe_clip_start_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float LightProbe_clip_end_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->clipend);
}

void LightProbe_clip_end_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->clipend = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

bool LightProbe_show_clip_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void LightProbe_show_clip_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

int LightProbe_influence_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->attenuation_type);
}

void LightProbe_influence_type_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->attenuation_type = value;
}

bool LightProbe_show_influence_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void LightProbe_show_influence_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

float LightProbe_influence_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distinf);
}

void LightProbe_influence_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->distinf = CLAMPIS(value, 0.0f, FLT_MAX);
}

float LightProbe_falloff_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->falloff);
}

void LightProbe_falloff_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->falloff = CLAMPIS(value, 0.0f, 1.0f);
}

bool LightProbe_use_custom_parallax_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void LightProbe_use_custom_parallax_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool LightProbe_show_parallax_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void LightProbe_show_parallax_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

int LightProbe_parallax_type_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->parallax_type);
}

void LightProbe_parallax_type_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->parallax_type = value;
}

float LightProbe_parallax_distance_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->distpar);
}

void LightProbe_parallax_distance_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->distpar = CLAMPIS(value, 0.0f, FLT_MAX);
}

int LightProbe_grid_resolution_x_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_x);
}

void LightProbe_grid_resolution_x_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_resolution_x = CLAMPIS(value, 1, 256);
}

int LightProbe_grid_resolution_y_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_y);
}

void LightProbe_grid_resolution_y_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_resolution_y = CLAMPIS(value, 1, 256);
}

int LightProbe_grid_resolution_z_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (int)(data->grid_resolution_z);
}

void LightProbe_grid_resolution_z_set(PointerRNA *ptr, int value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->grid_resolution_z = CLAMPIS(value, 1, 256);
}

float LightProbe_visibility_buffer_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_bias);
}

void LightProbe_visibility_buffer_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->vis_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
}

float LightProbe_visibility_bleed_bias_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_bleedbias);
}

void LightProbe_visibility_bleed_bias_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->vis_bleedbias = CLAMPIS(value, 0.0f, 1.0f);
}

float LightProbe_visibility_blur_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->vis_blur);
}

void LightProbe_visibility_blur_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->vis_blur = CLAMPIS(value, 0.0f, 1.0f);
}

float LightProbe_intensity_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (float)(data->intensity);
}

void LightProbe_intensity_set(PointerRNA *ptr, float value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    data->intensity = CLAMPIS(value, 0.0f, FLT_MAX);
}

PointerRNA LightProbe_visibility_collection_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->visibility_grp);
}

void LightProbe_visibility_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->visibility_grp = value.data;
}

bool LightProbe_invert_visibility_collection_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void LightProbe_invert_visibility_collection_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool LightProbe_show_data_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void LightProbe_show_data_set(PointerRNA *ptr, bool value)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

PointerRNA LightProbe_animation_data_get(PointerRNA *ptr)
{
    LightProbe *data = (LightProbe *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}


/* LightProbe */
static const EnumPropertyItem rna_LightProbe_type_items[4] = {
	{0, "CUBEMAP", 326, "Reflection Cubemap", "Capture reflections"},
	{1, "PLANAR", 327, "Reflection Plane", ""},
	{2, "GRID", 328, "Irradiance Volume", "Volume used for precomputing indirect lighting"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LightProbe_type = {
	{(PropertyRNA *)&rna_LightProbe_clip_start, NULL,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"Type of light probe",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, type), 2, NULL},
	LightProbe_type_get, NULL, NULL, NULL, NULL, rna_LightProbe_type_items, 3, 0
};

FloatPropertyRNA rna_LightProbe_clip_start = {
	{(PropertyRNA *)&rna_LightProbe_clip_end, (PropertyRNA *)&rna_LightProbe_type,
	-1, "clip_start", 3, 0, 0, 4, 0, "Clip Start",
	"Probe clip start, below which objects will not appear in reflections",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, clipsta), 5, NULL},
	LightProbe_clip_start_get, LightProbe_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.8000000119f, NULL
};

FloatPropertyRNA rna_LightProbe_clip_end = {
	{(PropertyRNA *)&rna_LightProbe_show_clip, (PropertyRNA *)&rna_LightProbe_clip_start,
	-1, "clip_end", 3, 0, 0, 4, 0, "Clip End",
	"Probe clip end, beyond which objects will not appear in reflections",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, clipend), 5, NULL},
	LightProbe_clip_end_get, LightProbe_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 40.0f, NULL
};

BoolPropertyRNA rna_LightProbe_show_clip = {
	{(PropertyRNA *)&rna_LightProbe_influence_type, (PropertyRNA *)&rna_LightProbe_clip_end,
	-1, "show_clip", 3, 0, 0, 0, 0, "Clipping",
	"Show the clipping distances in the 3D view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_show_clip_get, LightProbe_show_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_LightProbe_influence_type_items[3] = {
	{0, "ELIPSOID", 0, "Sphere", ""},
	{1, "BOX", 0, "Box", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LightProbe_influence_type = {
	{(PropertyRNA *)&rna_LightProbe_show_influence, (PropertyRNA *)&rna_LightProbe_show_clip,
	-1, "influence_type", 3, 0, 0, 4, 0, "Type",
	"Type of influence volume",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, attenuation_type), 2, NULL},
	LightProbe_influence_type_get, LightProbe_influence_type_set, NULL, NULL, NULL, rna_LightProbe_influence_type_items, 2, 0
};

BoolPropertyRNA rna_LightProbe_show_influence = {
	{(PropertyRNA *)&rna_LightProbe_influence_distance, (PropertyRNA *)&rna_LightProbe_influence_type,
	-1, "show_influence", 3, 0, 0, 0, 0, "Influence",
	"Show the influence volume in the 3D view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_show_influence_get, LightProbe_show_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_LightProbe_influence_distance = {
	{(PropertyRNA *)&rna_LightProbe_falloff, (PropertyRNA *)&rna_LightProbe_show_influence,
	-1, "influence_distance", 3, 0, 0, 4, 0, "Influence Distance",
	"Influence distance of the probe",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, distinf), 5, NULL},
	LightProbe_influence_distance_get, LightProbe_influence_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 2.5000000000f, NULL
};

FloatPropertyRNA rna_LightProbe_falloff = {
	{(PropertyRNA *)&rna_LightProbe_use_custom_parallax, (PropertyRNA *)&rna_LightProbe_influence_distance,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"Control how fast the probe influence decreases",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, falloff), 5, NULL},
	LightProbe_falloff_get, LightProbe_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.2000000030f, NULL
};

BoolPropertyRNA rna_LightProbe_use_custom_parallax = {
	{(PropertyRNA *)&rna_LightProbe_show_parallax, (PropertyRNA *)&rna_LightProbe_falloff,
	-1, "use_custom_parallax", 3, 0, 0, 0, 0, "Use Custom Parallax",
	"Enable custom settings for the parallax correction volume",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_use_custom_parallax_get, LightProbe_use_custom_parallax_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LightProbe_show_parallax = {
	{(PropertyRNA *)&rna_LightProbe_parallax_type, (PropertyRNA *)&rna_LightProbe_use_custom_parallax,
	-1, "show_parallax", 3, 0, 0, 0, 0, "Parallax",
	"Show the parallax correction volume in the 3D view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_show_parallax_get, LightProbe_show_parallax_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_LightProbe_parallax_type_items[3] = {
	{0, "ELIPSOID", 0, "Sphere", ""},
	{1, "BOX", 0, "Box", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LightProbe_parallax_type = {
	{(PropertyRNA *)&rna_LightProbe_parallax_distance, (PropertyRNA *)&rna_LightProbe_show_parallax,
	-1, "parallax_type", 3, 0, 0, 4, 0, "Type",
	"Type of parallax volume",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, parallax_type), 2, NULL},
	LightProbe_parallax_type_get, LightProbe_parallax_type_set, NULL, NULL, NULL, rna_LightProbe_parallax_type_items, 2, 0
};

FloatPropertyRNA rna_LightProbe_parallax_distance = {
	{(PropertyRNA *)&rna_LightProbe_grid_resolution_x, (PropertyRNA *)&rna_LightProbe_parallax_type,
	-1, "parallax_distance", 3, 0, 0, 4, 0, "Parallax Radius",
	"Lowest corner of the parallax bounding box",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, distpar), 5, NULL},
	LightProbe_parallax_distance_get, LightProbe_parallax_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 2.5000000000f, NULL
};

IntPropertyRNA rna_LightProbe_grid_resolution_x = {
	{(PropertyRNA *)&rna_LightProbe_grid_resolution_y, (PropertyRNA *)&rna_LightProbe_parallax_distance,
	-1, "grid_resolution_x", 3, 0, 0, 4, 0, "Resolution X",
	"Number of sample along the x axis of the volume",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_resolution_x), 0, NULL},
	LightProbe_grid_resolution_x_get, LightProbe_grid_resolution_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 256, 1, 256, 1, 4, NULL
};

IntPropertyRNA rna_LightProbe_grid_resolution_y = {
	{(PropertyRNA *)&rna_LightProbe_grid_resolution_z, (PropertyRNA *)&rna_LightProbe_grid_resolution_x,
	-1, "grid_resolution_y", 3, 0, 0, 4, 0, "Resolution Y",
	"Number of sample along the y axis of the volume",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_resolution_y), 0, NULL},
	LightProbe_grid_resolution_y_get, LightProbe_grid_resolution_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 256, 1, 256, 1, 4, NULL
};

IntPropertyRNA rna_LightProbe_grid_resolution_z = {
	{(PropertyRNA *)&rna_LightProbe_visibility_buffer_bias, (PropertyRNA *)&rna_LightProbe_grid_resolution_y,
	-1, "grid_resolution_z", 3, 0, 0, 4, 0, "Resolution Z",
	"Number of sample along the z axis of the volume",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, grid_resolution_z), 0, NULL},
	LightProbe_grid_resolution_z_get, LightProbe_grid_resolution_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 256, 1, 256, 1, 4, NULL
};

FloatPropertyRNA rna_LightProbe_visibility_buffer_bias = {
	{(PropertyRNA *)&rna_LightProbe_visibility_bleed_bias, (PropertyRNA *)&rna_LightProbe_grid_resolution_z,
	-1, "visibility_buffer_bias", 3, 0, 0, 4, 0, "Visibility Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, vis_bias), 5, NULL},
	LightProbe_visibility_buffer_bias_get, LightProbe_visibility_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_LightProbe_visibility_bleed_bias = {
	{(PropertyRNA *)&rna_LightProbe_visibility_blur, (PropertyRNA *)&rna_LightProbe_visibility_buffer_bias,
	-1, "visibility_bleed_bias", 3, 0, 0, 4, 0, "Visibility Bleed Bias",
	"Bias for reducing light-bleed on variance shadow maps",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, vis_bleedbias), 5, NULL},
	LightProbe_visibility_bleed_bias_get, LightProbe_visibility_bleed_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LightProbe_visibility_blur = {
	{(PropertyRNA *)&rna_LightProbe_intensity, (PropertyRNA *)&rna_LightProbe_visibility_bleed_bias,
	-1, "visibility_blur", 3, 0, 0, 4, 0, "Visibility Blur",
	"Filter size of the visibility blur",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, vis_blur), 5, NULL},
	LightProbe_visibility_blur_get, LightProbe_visibility_blur_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_LightProbe_intensity = {
	{(PropertyRNA *)&rna_LightProbe_visibility_collection, (PropertyRNA *)&rna_LightProbe_visibility_blur,
	-1, "intensity", 3, 0, 0, 4, 0, "Intensity",
	"Modify the intensity of the lighting captured by this probe",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(LightProbe, intensity), 5, NULL},
	LightProbe_intensity_get, LightProbe_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

PointerPropertyRNA rna_LightProbe_visibility_collection = {
	{(PropertyRNA *)&rna_LightProbe_invert_visibility_collection, (PropertyRNA *)&rna_LightProbe_intensity,
	-1, "visibility_collection", 8388737, 1, 0, 0, 0, "Visibility Collection",
	"Restrict objects visible for this probe",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_visibility_collection_get, LightProbe_visibility_collection_set, NULL, NULL,&RNA_Collection
};

BoolPropertyRNA rna_LightProbe_invert_visibility_collection = {
	{(PropertyRNA *)&rna_LightProbe_show_data, (PropertyRNA *)&rna_LightProbe_visibility_collection,
	-1, "invert_visibility_collection", 3, 0, 0, 0, 0, "Invert Collection",
	"Invert visibility collection",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_LightProbe_recalc, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_invert_visibility_collection_get, LightProbe_invert_visibility_collection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LightProbe_show_data = {
	{(PropertyRNA *)&rna_LightProbe_animation_data, (PropertyRNA *)&rna_LightProbe_invert_visibility_collection,
	-1, "show_data", 3, 0, 0, 0, 0, "Show Preview Plane",
	"Show captured lighting data into the 3D view for debugging purpose",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119406592, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LightProbe_show_data_get, LightProbe_show_data_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_LightProbe_animation_data = {
	{NULL, (PropertyRNA *)&rna_LightProbe_show_data,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	LightProbe_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_LightProbe = {
	{(ContainerRNA *)&RNA_RenderEngine, (ContainerRNA *)&RNA_CurveProfilePoints,
	NULL,
	{(PropertyRNA *)&rna_LightProbe_type, (PropertyRNA *)&rna_LightProbe_animation_data}},
	"LightProbe", NULL, NULL, 519, NULL, "LightProbe",
	"Light Probe data-block for lighting capture objects",
	"*", 271,
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

