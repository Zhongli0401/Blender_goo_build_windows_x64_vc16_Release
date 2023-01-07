
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

#include "rna_speaker.c"

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

BoolPropertyRNA rna_Speaker_muted;
PointerPropertyRNA rna_Speaker_sound;
FloatPropertyRNA rna_Speaker_volume_max;
FloatPropertyRNA rna_Speaker_volume_min;
FloatPropertyRNA rna_Speaker_distance_max;
FloatPropertyRNA rna_Speaker_distance_reference;
FloatPropertyRNA rna_Speaker_attenuation;
FloatPropertyRNA rna_Speaker_cone_angle_outer;
FloatPropertyRNA rna_Speaker_cone_angle_inner;
FloatPropertyRNA rna_Speaker_cone_volume_outer;
FloatPropertyRNA rna_Speaker_volume;
FloatPropertyRNA rna_Speaker_pitch;
PointerPropertyRNA rna_Speaker_animation_data;

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


bool Speaker_muted_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void Speaker_muted_set(PointerRNA *ptr, bool value)
{
    Speaker *data = (Speaker *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

PointerRNA Speaker_sound_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Sound, data->sound);
}

void Speaker_sound_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Speaker *data = (Speaker *)(ptr->data);

    if (data->sound) {
        id_us_min((ID *)data->sound);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->sound = value.data;
}

float Speaker_volume_max_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume_max);
}

void Speaker_volume_max_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->volume_max = CLAMPIS(value, 0.0f, 1.0f);
}

float Speaker_volume_min_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume_min);
}

void Speaker_volume_min_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->volume_min = CLAMPIS(value, 0.0f, 1.0f);
}

float Speaker_distance_max_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->distance_max);
}

void Speaker_distance_max_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->distance_max = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Speaker_distance_reference_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->distance_reference);
}

void Speaker_distance_reference_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->distance_reference = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Speaker_attenuation_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->attenuation);
}

void Speaker_attenuation_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->attenuation = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Speaker_cone_angle_outer_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_angle_outer);
}

void Speaker_cone_angle_outer_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->cone_angle_outer = CLAMPIS(value, 0.0f, 360.0f);
}

float Speaker_cone_angle_inner_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_angle_inner);
}

void Speaker_cone_angle_inner_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->cone_angle_inner = CLAMPIS(value, 0.0f, 360.0f);
}

float Speaker_cone_volume_outer_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->cone_volume_outer);
}

void Speaker_cone_volume_outer_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->cone_volume_outer = CLAMPIS(value, 0.0f, 1.0f);
}

float Speaker_volume_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->volume);
}

void Speaker_volume_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->volume = CLAMPIS(value, 0.0f, 1.0f);
}

float Speaker_pitch_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return (float)(data->pitch);
}

void Speaker_pitch_set(PointerRNA *ptr, float value)
{
    Speaker *data = (Speaker *)(ptr->data);
    data->pitch = CLAMPIS(value, 0.1000000015f, 10.0f);
}

PointerRNA Speaker_animation_data_get(PointerRNA *ptr)
{
    Speaker *data = (Speaker *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}


/* Speaker */
BoolPropertyRNA rna_Speaker_muted = {
	{(PropertyRNA *)&rna_Speaker_sound, NULL,
	-1, "muted", 1, 0, 0, 0, 0, "Mute",
	"Mute the speaker",
	0, "Sound",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Speaker_muted_get, Speaker_muted_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Speaker_sound = {
	{(PropertyRNA *)&rna_Speaker_volume_max, (PropertyRNA *)&rna_Speaker_muted,
	-1, "sound", 8388801, 1, 0, 0, 0, "Sound",
	"Sound data-block used by this speaker",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Speaker_sound_get, Speaker_sound_set, NULL, NULL,&RNA_Sound
};

FloatPropertyRNA rna_Speaker_volume_max = {
	{(PropertyRNA *)&rna_Speaker_volume_min, (PropertyRNA *)&rna_Speaker_sound,
	-1, "volume_max", 1, 0, 0, 4, 0, "Maximum Volume",
	"Maximum volume, no matter how near the object is",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, volume_max), 5, NULL},
	Speaker_volume_max_get, Speaker_volume_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Speaker_volume_min = {
	{(PropertyRNA *)&rna_Speaker_distance_max, (PropertyRNA *)&rna_Speaker_volume_max,
	-1, "volume_min", 1, 0, 0, 4, 0, "Minimum Volume",
	"Minimum volume, no matter how far away the object is",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, volume_min), 5, NULL},
	Speaker_volume_min_get, Speaker_volume_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Speaker_distance_max = {
	{(PropertyRNA *)&rna_Speaker_distance_reference, (PropertyRNA *)&rna_Speaker_volume_min,
	-1, "distance_max", 1, 0, 0, 4, 0, "Maximum Distance",
	"Maximum distance for volume calculation, no matter how far away the object is",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, distance_max), 5, NULL},
	Speaker_distance_max_get, Speaker_distance_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, FLT_MAX, NULL
};

FloatPropertyRNA rna_Speaker_distance_reference = {
	{(PropertyRNA *)&rna_Speaker_attenuation, (PropertyRNA *)&rna_Speaker_distance_max,
	-1, "distance_reference", 1, 0, 0, 4, 0, "Reference Distance",
	"Reference distance at which volume is 100%",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, distance_reference), 5, NULL},
	Speaker_distance_reference_get, Speaker_distance_reference_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Speaker_attenuation = {
	{(PropertyRNA *)&rna_Speaker_cone_angle_outer, (PropertyRNA *)&rna_Speaker_distance_reference,
	-1, "attenuation", 1, 0, 0, 4, 0, "Attenuation",
	"How strong the distance affects volume, depending on distance model",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, attenuation), 5, NULL},
	Speaker_attenuation_get, Speaker_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Speaker_cone_angle_outer = {
	{(PropertyRNA *)&rna_Speaker_cone_angle_inner, (PropertyRNA *)&rna_Speaker_attenuation,
	-1, "cone_angle_outer", 1, 0, 0, 4, 0, "Outer Cone Angle",
	"Angle of the outer cone, in degrees, outside this cone the volume is the outer cone volume, between inner and outer cone the volume is interpolated",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, cone_angle_outer), 5, NULL},
	Speaker_cone_angle_outer_get, Speaker_cone_angle_outer_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 360.0f, 0.0f, 360.0f, 10.0f, 3, 360.0f, NULL
};

FloatPropertyRNA rna_Speaker_cone_angle_inner = {
	{(PropertyRNA *)&rna_Speaker_cone_volume_outer, (PropertyRNA *)&rna_Speaker_cone_angle_outer,
	-1, "cone_angle_inner", 1, 0, 0, 4, 0, "Inner Cone Angle",
	"Angle of the inner cone, in degrees, inside the cone the volume is 100%",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, cone_angle_inner), 5, NULL},
	Speaker_cone_angle_inner_get, Speaker_cone_angle_inner_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 360.0f, 0.0f, 360.0f, 10.0f, 3, 360.0f, NULL
};

FloatPropertyRNA rna_Speaker_cone_volume_outer = {
	{(PropertyRNA *)&rna_Speaker_volume, (PropertyRNA *)&rna_Speaker_cone_angle_inner,
	-1, "cone_volume_outer", 1, 0, 0, 4, 0, "Outer Cone Volume",
	"Volume outside the outer cone",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, cone_volume_outer), 5, NULL},
	Speaker_cone_volume_outer_get, Speaker_cone_volume_outer_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Speaker_volume = {
	{(PropertyRNA *)&rna_Speaker_pitch, (PropertyRNA *)&rna_Speaker_cone_volume_outer,
	-1, "volume", 3, 0, 0, 4, 0, "Volume",
	"How loud the sound is",
	0, "Sound",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, volume), 5, NULL},
	Speaker_volume_get, Speaker_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Speaker_pitch = {
	{(PropertyRNA *)&rna_Speaker_animation_data, (PropertyRNA *)&rna_Speaker_volume,
	-1, "pitch", 3, 0, 0, 4, 0, "Pitch",
	"Playback pitch of the sound",
	0, "Sound",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Speaker, pitch), 5, NULL},
	Speaker_pitch_get, Speaker_pitch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 1.0f, NULL
};

PointerPropertyRNA rna_Speaker_animation_data = {
	{NULL, (PropertyRNA *)&rna_Speaker_pitch,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Speaker_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_Speaker = {
	{(ContainerRNA *)&RNA_TextLine, (ContainerRNA *)&RNA_SpreadsheetRowFilter,
	NULL,
	{(PropertyRNA *)&rna_Speaker_muted, (PropertyRNA *)&rna_Speaker_animation_data}},
	"Speaker", NULL, NULL, 519, NULL, "Speaker",
	"Speaker data-block for 3D audio speaker objects",
	"*", 90,
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

