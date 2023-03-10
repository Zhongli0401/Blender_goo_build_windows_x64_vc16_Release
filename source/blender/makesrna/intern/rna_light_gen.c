
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

#include "rna_light.c"

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

EnumPropertyRNA rna_Light_type;
FloatPropertyRNA rna_Light_distance;
FloatPropertyRNA rna_Light_color;
FloatPropertyRNA rna_Light_specular_factor;
FloatPropertyRNA rna_Light_diffuse_factor;
FloatPropertyRNA rna_Light_volume_factor;
BoolPropertyRNA rna_Light_use_custom_distance;
FloatPropertyRNA rna_Light_cutoff_distance;
PointerPropertyRNA rna_Light_node_tree;
BoolPropertyRNA rna_Light_use_nodes;
IntPropertyRNA rna_Light_light_group_bits;
PointerPropertyRNA rna_Light_animation_data;

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



extern EnumPropertyRNA rna_Light_type;
extern FloatPropertyRNA rna_Light_distance;
extern FloatPropertyRNA rna_Light_color;
extern FloatPropertyRNA rna_Light_specular_factor;
extern FloatPropertyRNA rna_Light_diffuse_factor;
extern FloatPropertyRNA rna_Light_volume_factor;
extern BoolPropertyRNA rna_Light_use_custom_distance;
extern FloatPropertyRNA rna_Light_cutoff_distance;
extern PointerPropertyRNA rna_Light_node_tree;
extern BoolPropertyRNA rna_Light_use_nodes;
extern IntPropertyRNA rna_Light_light_group_bits;
extern PointerPropertyRNA rna_Light_animation_data;

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

FloatPropertyRNA rna_PointLight_energy;
EnumPropertyRNA rna_PointLight_falloff_type;
PointerPropertyRNA rna_PointLight_falloff_curve;
FloatPropertyRNA rna_PointLight_linear_attenuation;
FloatPropertyRNA rna_PointLight_quadratic_attenuation;
FloatPropertyRNA rna_PointLight_constant_coefficient;
FloatPropertyRNA rna_PointLight_linear_coefficient;
FloatPropertyRNA rna_PointLight_quadratic_coefficient;
BoolPropertyRNA rna_PointLight_use_shadow;
IntPropertyRNA rna_PointLight_shadow_buffer_size;
FloatPropertyRNA rna_PointLight_shadow_buffer_clip_start;
FloatPropertyRNA rna_PointLight_shadow_buffer_bias;
IntPropertyRNA rna_PointLight_shadow_buffer_samples;
FloatPropertyRNA rna_PointLight_shadow_color;
FloatPropertyRNA rna_PointLight_shadow_soft_size;
BoolPropertyRNA rna_PointLight_use_contact_shadow;
FloatPropertyRNA rna_PointLight_contact_shadow_distance;
FloatPropertyRNA rna_PointLight_contact_shadow_bias;
FloatPropertyRNA rna_PointLight_contact_shadow_thickness;

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



extern EnumPropertyRNA rna_Light_type;
extern FloatPropertyRNA rna_Light_distance;
extern FloatPropertyRNA rna_Light_color;
extern FloatPropertyRNA rna_Light_specular_factor;
extern FloatPropertyRNA rna_Light_diffuse_factor;
extern FloatPropertyRNA rna_Light_volume_factor;
extern BoolPropertyRNA rna_Light_use_custom_distance;
extern FloatPropertyRNA rna_Light_cutoff_distance;
extern PointerPropertyRNA rna_Light_node_tree;
extern BoolPropertyRNA rna_Light_use_nodes;
extern IntPropertyRNA rna_Light_light_group_bits;
extern PointerPropertyRNA rna_Light_animation_data;

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

FloatPropertyRNA rna_AreaLight_energy;
BoolPropertyRNA rna_AreaLight_use_shadow;
IntPropertyRNA rna_AreaLight_shadow_buffer_size;
FloatPropertyRNA rna_AreaLight_shadow_buffer_clip_start;
FloatPropertyRNA rna_AreaLight_shadow_buffer_bias;
IntPropertyRNA rna_AreaLight_shadow_buffer_samples;
FloatPropertyRNA rna_AreaLight_shadow_color;
FloatPropertyRNA rna_AreaLight_shadow_soft_size;
BoolPropertyRNA rna_AreaLight_use_contact_shadow;
FloatPropertyRNA rna_AreaLight_contact_shadow_distance;
FloatPropertyRNA rna_AreaLight_contact_shadow_bias;
FloatPropertyRNA rna_AreaLight_contact_shadow_thickness;
EnumPropertyRNA rna_AreaLight_falloff_type;
PointerPropertyRNA rna_AreaLight_falloff_curve;
FloatPropertyRNA rna_AreaLight_linear_attenuation;
FloatPropertyRNA rna_AreaLight_quadratic_attenuation;
FloatPropertyRNA rna_AreaLight_constant_coefficient;
FloatPropertyRNA rna_AreaLight_linear_coefficient;
FloatPropertyRNA rna_AreaLight_quadratic_coefficient;
EnumPropertyRNA rna_AreaLight_shape;
FloatPropertyRNA rna_AreaLight_size;
FloatPropertyRNA rna_AreaLight_size_y;
FloatPropertyRNA rna_AreaLight_spread;

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



extern EnumPropertyRNA rna_Light_type;
extern FloatPropertyRNA rna_Light_distance;
extern FloatPropertyRNA rna_Light_color;
extern FloatPropertyRNA rna_Light_specular_factor;
extern FloatPropertyRNA rna_Light_diffuse_factor;
extern FloatPropertyRNA rna_Light_volume_factor;
extern BoolPropertyRNA rna_Light_use_custom_distance;
extern FloatPropertyRNA rna_Light_cutoff_distance;
extern PointerPropertyRNA rna_Light_node_tree;
extern BoolPropertyRNA rna_Light_use_nodes;
extern IntPropertyRNA rna_Light_light_group_bits;
extern PointerPropertyRNA rna_Light_animation_data;

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

FloatPropertyRNA rna_SpotLight_energy;
EnumPropertyRNA rna_SpotLight_falloff_type;
PointerPropertyRNA rna_SpotLight_falloff_curve;
FloatPropertyRNA rna_SpotLight_linear_attenuation;
FloatPropertyRNA rna_SpotLight_quadratic_attenuation;
FloatPropertyRNA rna_SpotLight_constant_coefficient;
FloatPropertyRNA rna_SpotLight_linear_coefficient;
FloatPropertyRNA rna_SpotLight_quadratic_coefficient;
BoolPropertyRNA rna_SpotLight_use_shadow;
IntPropertyRNA rna_SpotLight_shadow_buffer_size;
FloatPropertyRNA rna_SpotLight_shadow_buffer_clip_start;
FloatPropertyRNA rna_SpotLight_shadow_buffer_bias;
IntPropertyRNA rna_SpotLight_shadow_buffer_samples;
FloatPropertyRNA rna_SpotLight_shadow_color;
FloatPropertyRNA rna_SpotLight_shadow_soft_size;
BoolPropertyRNA rna_SpotLight_use_contact_shadow;
FloatPropertyRNA rna_SpotLight_contact_shadow_distance;
FloatPropertyRNA rna_SpotLight_contact_shadow_bias;
FloatPropertyRNA rna_SpotLight_contact_shadow_thickness;
BoolPropertyRNA rna_SpotLight_use_square;
FloatPropertyRNA rna_SpotLight_spot_blend;
FloatPropertyRNA rna_SpotLight_spot_size;
BoolPropertyRNA rna_SpotLight_show_cone;

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



extern EnumPropertyRNA rna_Light_type;
extern FloatPropertyRNA rna_Light_distance;
extern FloatPropertyRNA rna_Light_color;
extern FloatPropertyRNA rna_Light_specular_factor;
extern FloatPropertyRNA rna_Light_diffuse_factor;
extern FloatPropertyRNA rna_Light_volume_factor;
extern BoolPropertyRNA rna_Light_use_custom_distance;
extern FloatPropertyRNA rna_Light_cutoff_distance;
extern PointerPropertyRNA rna_Light_node_tree;
extern BoolPropertyRNA rna_Light_use_nodes;
extern IntPropertyRNA rna_Light_light_group_bits;
extern PointerPropertyRNA rna_Light_animation_data;

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

FloatPropertyRNA rna_SunLight_angle;
FloatPropertyRNA rna_SunLight_energy;
BoolPropertyRNA rna_SunLight_use_shadow;
IntPropertyRNA rna_SunLight_shadow_buffer_size;
FloatPropertyRNA rna_SunLight_shadow_buffer_clip_start;
FloatPropertyRNA rna_SunLight_shadow_buffer_bias;
IntPropertyRNA rna_SunLight_shadow_buffer_samples;
FloatPropertyRNA rna_SunLight_shadow_color;
FloatPropertyRNA rna_SunLight_shadow_soft_size;
BoolPropertyRNA rna_SunLight_use_contact_shadow;
FloatPropertyRNA rna_SunLight_contact_shadow_distance;
FloatPropertyRNA rna_SunLight_contact_shadow_bias;
FloatPropertyRNA rna_SunLight_contact_shadow_thickness;
FloatPropertyRNA rna_SunLight_shadow_cascade_max_distance;
IntPropertyRNA rna_SunLight_shadow_cascade_count;
FloatPropertyRNA rna_SunLight_shadow_cascade_exponent;
FloatPropertyRNA rna_SunLight_shadow_cascade_fade;

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


int Light_type_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->type);
}

void Light_type_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->type = value;
}

float Light_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->dist);
}

void Light_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->dist = CLAMPIS(value, 0.0f, 2147483648.0f);
}

void Light_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void Light_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float Light_specular_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spec_fac);
}

void Light_specular_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->spec_fac = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Light_diffuse_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->diff_fac);
}

void Light_diffuse_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->diff_fac = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Light_volume_factor_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->volume_fac);
}

void Light_volume_factor_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->volume_fac = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool Light_use_custom_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1048576) != 0);
}

void Light_use_custom_distance_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1048576; }
    else { data->mode &= ~1048576; }
}

float Light_cutoff_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att_dist);
}

void Light_cutoff_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att_dist = CLAMPIS(value, 0.0f, FLT_MAX);
}

PointerRNA Light_node_tree_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

bool Light_use_nodes_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->use_nodes) & 1) != 0);
}

void Light_use_nodes_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->use_nodes |= 1; }
    else { data->use_nodes &= ~1; }
}

void Light_light_group_bits_get(PointerRNA *ptr, int values[4])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (int)(((int *)data->light_group_bits)[i]);
    }
}

void Light_light_group_bits_set(PointerRNA *ptr, const int values[4])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((int *)data->light_group_bits)[i] = values[i];
    }
}

PointerRNA Light_animation_data_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

float PointLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void PointLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = value;
}

int PointLight_falloff_type_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->falloff_type);
}

void PointLight_falloff_type_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->falloff_type = value;
}

PointerRNA PointLight_falloff_curve_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curfalloff);
}

float PointLight_linear_attenuation_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att1);
}

void PointLight_linear_attenuation_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att1 = CLAMPIS(value, 0.0f, 1.0f);
}

float PointLight_quadratic_attenuation_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att2);
}

void PointLight_quadratic_attenuation_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att2 = CLAMPIS(value, 0.0f, 1.0f);
}

float PointLight_constant_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_const);
}

void PointLight_constant_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_const = CLAMPIS(value, 0.0f, FLT_MAX);
}

float PointLight_linear_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_lin);
}

void PointLight_linear_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_lin = CLAMPIS(value, 0.0f, FLT_MAX);
}

float PointLight_quadratic_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_quad);
}

void PointLight_quadratic_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_quad = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool PointLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

void PointLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

int PointLight_shadow_buffer_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->bufsize);
}

void PointLight_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
    rna_Light_buffer_size_set(ptr, value);
}

float PointLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void PointLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float PointLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

void PointLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
}

int PointLight_shadow_buffer_samples_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->samp);
}

void PointLight_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->samp = CLAMPIS(value, 1, 16);
}

void PointLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

void PointLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float PointLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

void PointLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool PointLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

void PointLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

float PointLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

void PointLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
}

float PointLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

void PointLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
}

float PointLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

void PointLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
}

float AreaLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void AreaLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = value;
}

bool AreaLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

void AreaLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

int AreaLight_shadow_buffer_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->bufsize);
}

void AreaLight_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
    rna_Light_buffer_size_set(ptr, value);
}

float AreaLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void AreaLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float AreaLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

void AreaLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
}

int AreaLight_shadow_buffer_samples_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->samp);
}

void AreaLight_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->samp = CLAMPIS(value, 1, 16);
}

void AreaLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

void AreaLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float AreaLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

void AreaLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool AreaLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

void AreaLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

float AreaLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

void AreaLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
}

float AreaLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

void AreaLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
}

float AreaLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

void AreaLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
}

int AreaLight_falloff_type_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->falloff_type);
}

void AreaLight_falloff_type_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->falloff_type = value;
}

PointerRNA AreaLight_falloff_curve_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curfalloff);
}

float AreaLight_linear_attenuation_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att1);
}

void AreaLight_linear_attenuation_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att1 = CLAMPIS(value, 0.0f, 1.0f);
}

float AreaLight_quadratic_attenuation_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att2);
}

void AreaLight_quadratic_attenuation_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att2 = CLAMPIS(value, 0.0f, 1.0f);
}

float AreaLight_constant_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_const);
}

void AreaLight_constant_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_const = CLAMPIS(value, 0.0f, FLT_MAX);
}

float AreaLight_linear_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_lin);
}

void AreaLight_linear_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_lin = CLAMPIS(value, 0.0f, FLT_MAX);
}

float AreaLight_quadratic_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_quad);
}

void AreaLight_quadratic_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_quad = CLAMPIS(value, 0.0f, FLT_MAX);
}

int AreaLight_shape_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->area_shape);
}

void AreaLight_shape_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->area_shape = value;
}

float AreaLight_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

void AreaLight_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

float AreaLight_size_y_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_sizey);
}

void AreaLight_size_y_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_sizey = CLAMPIS(value, 0.0f, FLT_MAX);
}

float AreaLight_spread_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_spread);
}

void AreaLight_spread_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_spread = CLAMPIS(value, 0.0174532924f, 3.1415927410f);
}

float SpotLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void SpotLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = value;
}

int SpotLight_falloff_type_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->falloff_type);
}

void SpotLight_falloff_type_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->falloff_type = value;
}

PointerRNA SpotLight_falloff_curve_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curfalloff);
}

float SpotLight_linear_attenuation_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att1);
}

void SpotLight_linear_attenuation_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att1 = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLight_quadratic_attenuation_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->att2);
}

void SpotLight_quadratic_attenuation_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->att2 = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLight_constant_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_const);
}

void SpotLight_constant_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_const = CLAMPIS(value, 0.0f, FLT_MAX);
}

float SpotLight_linear_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_lin);
}

void SpotLight_linear_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_lin = CLAMPIS(value, 0.0f, FLT_MAX);
}

float SpotLight_quadratic_coefficient_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->coeff_quad);
}

void SpotLight_quadratic_coefficient_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->coeff_quad = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool SpotLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

void SpotLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

int SpotLight_shadow_buffer_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->bufsize);
}

void SpotLight_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
    rna_Light_buffer_size_set(ptr, value);
}

float SpotLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void SpotLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float SpotLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

void SpotLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SpotLight_shadow_buffer_samples_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->samp);
}

void SpotLight_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->samp = CLAMPIS(value, 1, 16);
}

void SpotLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

void SpotLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float SpotLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

void SpotLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool SpotLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

void SpotLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

float SpotLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

void SpotLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
}

float SpotLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

void SpotLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
}

float SpotLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

void SpotLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
}

bool SpotLight_use_square_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 128) != 0);
}

void SpotLight_use_square_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 128; }
    else { data->mode &= ~128; }
}

float SpotLight_spot_blend_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spotblend);
}

void SpotLight_spot_blend_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->spotblend = CLAMPIS(value, 0.0f, 1.0f);
}

float SpotLight_spot_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->spotsize);
}

void SpotLight_spot_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->spotsize = CLAMPIS(value, 0.0174532924f, 3.1415927410f);
}

bool SpotLight_show_cone_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 131072) != 0);
}

void SpotLight_show_cone_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 131072; }
    else { data->mode &= ~131072; }
}

float SunLight_angle_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->sun_angle);
}

void SunLight_angle_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->sun_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float SunLight_energy_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->energy);
}

void SunLight_energy_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->energy = value;
}

bool SunLight_use_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

void SunLight_use_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

int SunLight_shadow_buffer_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->bufsize);
}

void SunLight_shadow_buffer_size_set(PointerRNA *ptr, int value)
{
    rna_Light_buffer_size_set(ptr, value);
}

float SunLight_shadow_buffer_clip_start_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->clipsta);
}

void SunLight_shadow_buffer_clip_start_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->clipsta = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float SunLight_shadow_buffer_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->bias);
}

void SunLight_shadow_buffer_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->bias = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SunLight_shadow_buffer_samples_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->samp);
}

void SunLight_shadow_buffer_samples_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->samp = CLAMPIS(value, 1, 16);
}

void SunLight_shadow_color_get(PointerRNA *ptr, float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->shdwr)[i]);
    }
}

void SunLight_shadow_color_set(PointerRNA *ptr, const float values[3])
{
    Light *data = (Light *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->shdwr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float SunLight_shadow_soft_size_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->area_size);
}

void SunLight_shadow_soft_size_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->area_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool SunLight_use_contact_shadow_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (((data->mode) & 524288) != 0);
}

void SunLight_use_contact_shadow_set(PointerRNA *ptr, bool value)
{
    Light *data = (Light *)(ptr->data);
    if (value) { data->mode |= 524288; }
    else { data->mode &= ~524288; }
}

float SunLight_contact_shadow_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_dist);
}

void SunLight_contact_shadow_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_dist = CLAMPIS(value, 0.0f, 9999.0f);
}

float SunLight_contact_shadow_bias_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_bias);
}

void SunLight_contact_shadow_bias_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_bias = CLAMPIS(value, 0.0010000000f, 9999.0f);
}

float SunLight_contact_shadow_thickness_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->contact_thickness);
}

void SunLight_contact_shadow_thickness_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->contact_thickness = CLAMPIS(value, 0.0f, 9999.0f);
}

float SunLight_shadow_cascade_max_distance_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_max_dist);
}

void SunLight_shadow_cascade_max_distance_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_max_dist = CLAMPIS(value, 0.0f, FLT_MAX);
}

int SunLight_shadow_cascade_count_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (int)(data->cascade_count);
}

void SunLight_shadow_cascade_count_set(PointerRNA *ptr, int value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_count = CLAMPIS(value, 1, 4);
}

float SunLight_shadow_cascade_exponent_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_exponent);
}

void SunLight_shadow_cascade_exponent_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_exponent = CLAMPIS(value, 0.0f, 1.0f);
}

float SunLight_shadow_cascade_fade_get(PointerRNA *ptr)
{
    Light *data = (Light *)(ptr->data);
    return (float)(data->cascade_fade);
}

void SunLight_shadow_cascade_fade_set(PointerRNA *ptr, float value)
{
    Light *data = (Light *)(ptr->data);
    data->cascade_fade = CLAMPIS(value, 0.0f, 1.0f);
}






/* Light */
EnumPropertyRNA rna_Light_type = {
	{(PropertyRNA *)&rna_Light_distance, NULL,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Type of light",
	0, "Light",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, type), 1, NULL},
	Light_type_get, Light_type_set, NULL, NULL, NULL, rna_enum_light_type_items, 4, 0
};

FloatPropertyRNA rna_Light_distance = {
	{(PropertyRNA *)&rna_Light_color, (PropertyRNA *)&rna_Light_type,
	-1, "distance", 3, 0, 0, 4, 0, "Distance",
	"Falloff distance - the light is at half the original intensity at this point",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, dist), 5, NULL},
	Light_distance_get, Light_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 2147483648.0f, 1.0f, 3, 25.0f, NULL
};

static float rna_Light_color_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Light_color = {
	{(PropertyRNA *)&rna_Light_specular_factor, (PropertyRNA *)&rna_Light_distance,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Light color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, r), 5, NULL},
	NULL, NULL, Light_color_get, Light_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, rna_Light_color_default
};

FloatPropertyRNA rna_Light_specular_factor = {
	{(PropertyRNA *)&rna_Light_diffuse_factor, (PropertyRNA *)&rna_Light_color,
	-1, "specular_factor", 3, 0, 0, 4, 0, "Specular Factor",
	"Specular reflection multiplier",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, spec_fac), 5, NULL},
	Light_specular_factor_get, Light_specular_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_Light_diffuse_factor = {
	{(PropertyRNA *)&rna_Light_volume_factor, (PropertyRNA *)&rna_Light_specular_factor,
	-1, "diffuse_factor", 3, 0, 0, 4, 0, "Diffuse Factor",
	"Diffuse reflection multiplier",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, diff_fac), 5, NULL},
	Light_diffuse_factor_get, Light_diffuse_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_Light_volume_factor = {
	{(PropertyRNA *)&rna_Light_use_custom_distance, (PropertyRNA *)&rna_Light_diffuse_factor,
	-1, "volume_factor", 3, 0, 0, 4, 0, "Volume Factor",
	"Volume light multiplier",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, volume_fac), 5, NULL},
	Light_volume_factor_get, Light_volume_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.0099999998f, 2, 1.0f, NULL
};

BoolPropertyRNA rna_Light_use_custom_distance = {
	{(PropertyRNA *)&rna_Light_cutoff_distance, (PropertyRNA *)&rna_Light_volume_factor,
	-1, "use_custom_distance", 3, 0, 0, 0, 0, "Custom Attenuation",
	"Use custom attenuation distance instead of global light threshold",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Light_use_custom_distance_get, Light_use_custom_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Light_cutoff_distance = {
	{(PropertyRNA *)&rna_Light_node_tree, (PropertyRNA *)&rna_Light_use_custom_distance,
	-1, "cutoff_distance", 3, 0, 0, 4, 0, "Cutoff Distance",
	"Distance at which the light influence will be set to 0",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att_dist), 5, NULL},
	Light_cutoff_distance_get, Light_cutoff_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 1.0f, 2, 40.0f, NULL
};

PointerPropertyRNA rna_Light_node_tree = {
	{(PropertyRNA *)&rna_Light_use_nodes, (PropertyRNA *)&rna_Light_cutoff_distance,
	-1, "node_tree", 8388672, 1, 0, 32, 0, "Node Tree",
	"Node tree for node based lights",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Light_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_Light_use_nodes = {
	{(PropertyRNA *)&rna_Light_light_group_bits, (PropertyRNA *)&rna_Light_node_tree,
	-1, "use_nodes", 4194305, 0, 0, 0, 0, "Use Nodes",
	"Use shader nodes to render the light",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Light_use_nodes_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Light_use_nodes_get, Light_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_Light_light_group_bits_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_Light_light_group_bits = {
	{(PropertyRNA *)&rna_Light_animation_data, (PropertyRNA *)&rna_Light_use_nodes,
	-1, "light_group_bits", 268500993, 0, 0, 4, 0, "Light Groups",
	"Light group bitfield",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, light_group_bits), 0, NULL},
	NULL, NULL, Light_light_group_bits_get, Light_light_group_bits_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_Light_light_group_bits_default
};

PointerPropertyRNA rna_Light_animation_data = {
	{NULL, (PropertyRNA *)&rna_Light_light_group_bits,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Light_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

StructRNA RNA_Light = {
	{(ContainerRNA *)&RNA_PointLight, (ContainerRNA *)&RNA_ShapeKeyBezierPoint,
	NULL,
	{(PropertyRNA *)&rna_Light_type, (PropertyRNA *)&rna_Light_animation_data}},
	"Light", NULL, NULL, 519, NULL, "Light",
	"Light data-block for lighting a scene",
	"Light", 164,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_Light_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Point Light */
FloatPropertyRNA rna_PointLight_energy = {
	{(PropertyRNA *)&rna_PointLight_falloff_type, NULL,
	-1, "energy", 3, 0, 0, 4, 0, "Power",
	"Light energy emitted over the entire area of the light in all directions",
	0, "Light",
	PROP_FLOAT, PROP_POWER | PROP_UNIT_POWER, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), 5, NULL},
	PointLight_energy_get, PointLight_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 10.0f, NULL
};

static const EnumPropertyItem rna_PointLight_falloff_type_items[7] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "INVERSE_LINEAR", 0, "Inverse Linear", ""},
	{2, "INVERSE_SQUARE", 0, "Inverse Square", ""},
	{5, "INVERSE_COEFFICIENTS", 0, "Inverse Coefficients", ""},
	{3, "CUSTOM_CURVE", 0, "Custom Curve", ""},
	{4, "LINEAR_QUADRATIC_WEIGHTED", 0, "Lin/Quad Weighted", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointLight_falloff_type = {
	{(PropertyRNA *)&rna_PointLight_falloff_curve, (PropertyRNA *)&rna_PointLight_energy,
	-1, "falloff_type", 3, 0, 0, 4, 0, "Falloff Type",
	"Intensity Decay with distance",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, falloff_type), 1, NULL},
	PointLight_falloff_type_get, PointLight_falloff_type_set, NULL, NULL, NULL, rna_PointLight_falloff_type_items, 6, 2
};

PointerPropertyRNA rna_PointLight_falloff_curve = {
	{(PropertyRNA *)&rna_PointLight_linear_attenuation, (PropertyRNA *)&rna_PointLight_falloff_type,
	-1, "falloff_curve", 8388608, 0, 0, 0, 0, "Falloff Curve",
	"Custom light falloff curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointLight_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_PointLight_linear_attenuation = {
	{(PropertyRNA *)&rna_PointLight_quadratic_attenuation, (PropertyRNA *)&rna_PointLight_falloff_curve,
	-1, "linear_attenuation", 3, 0, 0, 4, 0, "Linear Attenuation",
	"Linear distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att1), 5, NULL},
	PointLight_linear_attenuation_get, PointLight_linear_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLight_quadratic_attenuation = {
	{(PropertyRNA *)&rna_PointLight_constant_coefficient, (PropertyRNA *)&rna_PointLight_linear_attenuation,
	-1, "quadratic_attenuation", 3, 0, 0, 4, 0, "Quadratic Attenuation",
	"Quadratic distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att2), 5, NULL},
	PointLight_quadratic_attenuation_get, PointLight_quadratic_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_PointLight_constant_coefficient = {
	{(PropertyRNA *)&rna_PointLight_linear_coefficient, (PropertyRNA *)&rna_PointLight_quadratic_attenuation,
	-1, "constant_coefficient", 3, 0, 0, 4, 0, "Constant Coefficient",
	"Constant distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_const), 5, NULL},
	PointLight_constant_coefficient_get, PointLight_constant_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_PointLight_linear_coefficient = {
	{(PropertyRNA *)&rna_PointLight_quadratic_coefficient, (PropertyRNA *)&rna_PointLight_constant_coefficient,
	-1, "linear_coefficient", 3, 0, 0, 4, 0, "Linear Coefficient",
	"Linear distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_lin), 5, NULL},
	PointLight_linear_coefficient_get, PointLight_linear_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PointLight_quadratic_coefficient = {
	{(PropertyRNA *)&rna_PointLight_use_shadow, (PropertyRNA *)&rna_PointLight_linear_coefficient,
	-1, "quadratic_coefficient", 3, 0, 0, 4, 0, "Quadratic Coefficient",
	"Quadratic distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_quad), 5, NULL},
	PointLight_quadratic_coefficient_get, PointLight_quadratic_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_PointLight_use_shadow = {
	{(PropertyRNA *)&rna_PointLight_shadow_buffer_size, (PropertyRNA *)&rna_PointLight_quadratic_coefficient,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointLight_use_shadow_get, PointLight_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_PointLight_shadow_buffer_size = {
	{(PropertyRNA *)&rna_PointLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_PointLight_use_shadow,
	-1, "shadow_buffer_size", 3, 0, 0, 0, 0, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointLight_shadow_buffer_size_get, PointLight_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 128, 10240, 128, 10240, 1, 512, NULL
};

FloatPropertyRNA rna_PointLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_PointLight_shadow_buffer_bias, (PropertyRNA *)&rna_PointLight_shadow_buffer_size,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), 5, NULL},
	PointLight_shadow_buffer_clip_start_get, PointLight_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, NULL
};

FloatPropertyRNA rna_PointLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_PointLight_shadow_buffer_samples, (PropertyRNA *)&rna_PointLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), 5, NULL},
	PointLight_shadow_buffer_bias_get, PointLight_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_PointLight_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_PointLight_shadow_color, (PropertyRNA *)&rna_PointLight_shadow_buffer_bias,
	-1, "shadow_buffer_samples", 3, 0, 0, 4, 0, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, samp), 1, NULL},
	PointLight_shadow_buffer_samples_get, PointLight_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 16, 1, 16, 1, 3, NULL
};

static float rna_PointLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PointLight_shadow_color = {
	{(PropertyRNA *)&rna_PointLight_shadow_soft_size, (PropertyRNA *)&rna_PointLight_shadow_buffer_samples,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), 5, NULL},
	NULL, NULL, PointLight_shadow_color_get, PointLight_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_PointLight_shadow_color_default
};

FloatPropertyRNA rna_PointLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_PointLight_use_contact_shadow, (PropertyRNA *)&rna_PointLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_size), 5, NULL},
	PointLight_shadow_soft_size_get, PointLight_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, NULL
};

BoolPropertyRNA rna_PointLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_PointLight_contact_shadow_distance, (PropertyRNA *)&rna_PointLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointLight_use_contact_shadow_get, PointLight_use_contact_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_PointLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_PointLight_contact_shadow_bias, (PropertyRNA *)&rna_PointLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), 5, NULL},
	PointLight_contact_shadow_distance_get, PointLight_contact_shadow_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_PointLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_PointLight_contact_shadow_thickness, (PropertyRNA *)&rna_PointLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), 5, NULL},
	PointLight_contact_shadow_bias_get, PointLight_contact_shadow_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, NULL
};

FloatPropertyRNA rna_PointLight_contact_shadow_thickness = {
	{NULL, (PropertyRNA *)&rna_PointLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), 5, NULL},
	PointLight_contact_shadow_thickness_get, PointLight_contact_shadow_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, NULL
};

StructRNA RNA_PointLight = {
	{(ContainerRNA *)&RNA_AreaLight, (ContainerRNA *)&RNA_Light,
	NULL,
	{(PropertyRNA *)&rna_PointLight_energy, (PropertyRNA *)&rna_PointLight_contact_shadow_thickness}},
	"PointLight", NULL, NULL, 519, NULL, "Point Light",
	"Omnidirectional point Light",
	"*", 298,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	NULL,
	rna_Light_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Area Light */
FloatPropertyRNA rna_AreaLight_energy = {
	{(PropertyRNA *)&rna_AreaLight_use_shadow, NULL,
	-1, "energy", 3, 0, 0, 4, 0, "Power",
	"Light energy emitted over the entire area of the light in all directions",
	0, "Light",
	PROP_FLOAT, PROP_POWER | PROP_UNIT_POWER, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), 5, NULL},
	AreaLight_energy_get, AreaLight_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 10.0f, NULL
};

BoolPropertyRNA rna_AreaLight_use_shadow = {
	{(PropertyRNA *)&rna_AreaLight_shadow_buffer_size, (PropertyRNA *)&rna_AreaLight_energy,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaLight_use_shadow_get, AreaLight_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_AreaLight_shadow_buffer_size = {
	{(PropertyRNA *)&rna_AreaLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_AreaLight_use_shadow,
	-1, "shadow_buffer_size", 3, 0, 0, 0, 0, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaLight_shadow_buffer_size_get, AreaLight_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 128, 10240, 128, 10240, 1, 512, NULL
};

FloatPropertyRNA rna_AreaLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_AreaLight_shadow_buffer_bias, (PropertyRNA *)&rna_AreaLight_shadow_buffer_size,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), 5, NULL},
	AreaLight_shadow_buffer_clip_start_get, AreaLight_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, NULL
};

FloatPropertyRNA rna_AreaLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_AreaLight_shadow_buffer_samples, (PropertyRNA *)&rna_AreaLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), 5, NULL},
	AreaLight_shadow_buffer_bias_get, AreaLight_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_AreaLight_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_AreaLight_shadow_color, (PropertyRNA *)&rna_AreaLight_shadow_buffer_bias,
	-1, "shadow_buffer_samples", 3, 0, 0, 4, 0, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, samp), 1, NULL},
	AreaLight_shadow_buffer_samples_get, AreaLight_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 16, 1, 16, 1, 3, NULL
};

static float rna_AreaLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_AreaLight_shadow_color = {
	{(PropertyRNA *)&rna_AreaLight_shadow_soft_size, (PropertyRNA *)&rna_AreaLight_shadow_buffer_samples,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), 5, NULL},
	NULL, NULL, AreaLight_shadow_color_get, AreaLight_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_AreaLight_shadow_color_default
};

FloatPropertyRNA rna_AreaLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_AreaLight_use_contact_shadow, (PropertyRNA *)&rna_AreaLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_size), 5, NULL},
	AreaLight_shadow_soft_size_get, AreaLight_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, NULL
};

BoolPropertyRNA rna_AreaLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_AreaLight_contact_shadow_distance, (PropertyRNA *)&rna_AreaLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaLight_use_contact_shadow_get, AreaLight_use_contact_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_AreaLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_AreaLight_contact_shadow_bias, (PropertyRNA *)&rna_AreaLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), 5, NULL},
	AreaLight_contact_shadow_distance_get, AreaLight_contact_shadow_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_AreaLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_AreaLight_contact_shadow_thickness, (PropertyRNA *)&rna_AreaLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), 5, NULL},
	AreaLight_contact_shadow_bias_get, AreaLight_contact_shadow_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, NULL
};

FloatPropertyRNA rna_AreaLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_AreaLight_falloff_type, (PropertyRNA *)&rna_AreaLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), 5, NULL},
	AreaLight_contact_shadow_thickness_get, AreaLight_contact_shadow_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, NULL
};

static const EnumPropertyItem rna_AreaLight_falloff_type_items[7] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "INVERSE_LINEAR", 0, "Inverse Linear", ""},
	{2, "INVERSE_SQUARE", 0, "Inverse Square", ""},
	{5, "INVERSE_COEFFICIENTS", 0, "Inverse Coefficients", ""},
	{3, "CUSTOM_CURVE", 0, "Custom Curve", ""},
	{4, "LINEAR_QUADRATIC_WEIGHTED", 0, "Lin/Quad Weighted", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLight_falloff_type = {
	{(PropertyRNA *)&rna_AreaLight_falloff_curve, (PropertyRNA *)&rna_AreaLight_contact_shadow_thickness,
	-1, "falloff_type", 3, 0, 0, 4, 0, "Falloff Type",
	"Intensity Decay with distance",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, falloff_type), 1, NULL},
	AreaLight_falloff_type_get, AreaLight_falloff_type_set, NULL, NULL, NULL, rna_AreaLight_falloff_type_items, 6, 2
};

PointerPropertyRNA rna_AreaLight_falloff_curve = {
	{(PropertyRNA *)&rna_AreaLight_linear_attenuation, (PropertyRNA *)&rna_AreaLight_falloff_type,
	-1, "falloff_curve", 8388608, 0, 0, 0, 0, "Falloff Curve",
	"Custom light falloff curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaLight_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_AreaLight_linear_attenuation = {
	{(PropertyRNA *)&rna_AreaLight_quadratic_attenuation, (PropertyRNA *)&rna_AreaLight_falloff_curve,
	-1, "linear_attenuation", 3, 0, 0, 4, 0, "Linear Attenuation",
	"Linear distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att1), 5, NULL},
	AreaLight_linear_attenuation_get, AreaLight_linear_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLight_quadratic_attenuation = {
	{(PropertyRNA *)&rna_AreaLight_constant_coefficient, (PropertyRNA *)&rna_AreaLight_linear_attenuation,
	-1, "quadratic_attenuation", 3, 0, 0, 4, 0, "Quadratic Attenuation",
	"Quadratic distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att2), 5, NULL},
	AreaLight_quadratic_attenuation_get, AreaLight_quadratic_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_AreaLight_constant_coefficient = {
	{(PropertyRNA *)&rna_AreaLight_linear_coefficient, (PropertyRNA *)&rna_AreaLight_quadratic_attenuation,
	-1, "constant_coefficient", 3, 0, 0, 4, 0, "Constant Coefficient",
	"Constant distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_const), 5, NULL},
	AreaLight_constant_coefficient_get, AreaLight_constant_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_AreaLight_linear_coefficient = {
	{(PropertyRNA *)&rna_AreaLight_quadratic_coefficient, (PropertyRNA *)&rna_AreaLight_constant_coefficient,
	-1, "linear_coefficient", 3, 0, 0, 4, 0, "Linear Coefficient",
	"Linear distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_lin), 5, NULL},
	AreaLight_linear_coefficient_get, AreaLight_linear_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_AreaLight_quadratic_coefficient = {
	{(PropertyRNA *)&rna_AreaLight_shape, (PropertyRNA *)&rna_AreaLight_linear_coefficient,
	-1, "quadratic_coefficient", 3, 0, 0, 4, 0, "Quadratic Coefficient",
	"Quadratic distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_quad), 5, NULL},
	AreaLight_quadratic_coefficient_get, AreaLight_quadratic_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_AreaLight_shape_items[5] = {
	{0, "SQUARE", 0, "Square", ""},
	{1, "RECTANGLE", 0, "Rectangle", ""},
	{4, "DISK", 0, "Disk", ""},
	{5, "ELLIPSE", 0, "Ellipse", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AreaLight_shape = {
	{(PropertyRNA *)&rna_AreaLight_size, (PropertyRNA *)&rna_AreaLight_quadratic_coefficient,
	-1, "shape", 3, 0, 0, 4, 0, "Shape",
	"Shape of the area Light",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_shape), 1, NULL},
	AreaLight_shape_get, AreaLight_shape_set, NULL, NULL, NULL, rna_AreaLight_shape_items, 4, 0
};

FloatPropertyRNA rna_AreaLight_size = {
	{(PropertyRNA *)&rna_AreaLight_size_y, (PropertyRNA *)&rna_AreaLight_shape,
	-1, "size", 3, 0, 0, 4, 0, "Size",
	"Size of the area of the area light, X direction size for rectangle shapes",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_size), 5, NULL},
	AreaLight_size_get, AreaLight_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, NULL
};

FloatPropertyRNA rna_AreaLight_size_y = {
	{(PropertyRNA *)&rna_AreaLight_spread, (PropertyRNA *)&rna_AreaLight_size,
	-1, "size_y", 3, 0, 0, 4, 0, "Size Y",
	"Size of the area of the area light in the Y direction for rectangle shapes",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_sizey), 5, NULL},
	AreaLight_size_y_get, AreaLight_size_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, NULL
};

FloatPropertyRNA rna_AreaLight_spread = {
	{NULL, (PropertyRNA *)&rna_AreaLight_size_y,
	-1, "spread", 3, 0, 0, 4, 0, "Spread",
	"How widely the emitted light fans out, as in the case of a gridded softbox",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_spread), 5, NULL},
	AreaLight_spread_get, AreaLight_spread_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0174532924f, 3.1415927410f, 0.0174532924f, 3.1415927410f, 10.0f, 3, 3.1415927410f, NULL
};

StructRNA RNA_AreaLight = {
	{(ContainerRNA *)&RNA_SpotLight, (ContainerRNA *)&RNA_PointLight,
	NULL,
	{(PropertyRNA *)&rna_AreaLight_energy, (PropertyRNA *)&rna_AreaLight_spread}},
	"AreaLight", NULL, NULL, 519, NULL, "Area Light",
	"Directional area Light",
	"*", 302,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	NULL,
	rna_Light_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Spot Light */
FloatPropertyRNA rna_SpotLight_energy = {
	{(PropertyRNA *)&rna_SpotLight_falloff_type, NULL,
	-1, "energy", 3, 0, 0, 4, 0, "Power",
	"The energy this light would emit over its entire area if it wasn\'t limited by the spot angle",
	0, "Light",
	PROP_FLOAT, PROP_POWER | PROP_UNIT_POWER, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), 5, NULL},
	SpotLight_energy_get, SpotLight_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 10.0f, NULL
};

static const EnumPropertyItem rna_SpotLight_falloff_type_items[7] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "INVERSE_LINEAR", 0, "Inverse Linear", ""},
	{2, "INVERSE_SQUARE", 0, "Inverse Square", ""},
	{5, "INVERSE_COEFFICIENTS", 0, "Inverse Coefficients", ""},
	{3, "CUSTOM_CURVE", 0, "Custom Curve", ""},
	{4, "LINEAR_QUADRATIC_WEIGHTED", 0, "Lin/Quad Weighted", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SpotLight_falloff_type = {
	{(PropertyRNA *)&rna_SpotLight_falloff_curve, (PropertyRNA *)&rna_SpotLight_energy,
	-1, "falloff_type", 3, 0, 0, 4, 0, "Falloff Type",
	"Intensity Decay with distance",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, falloff_type), 1, NULL},
	SpotLight_falloff_type_get, SpotLight_falloff_type_set, NULL, NULL, NULL, rna_SpotLight_falloff_type_items, 6, 2
};

PointerPropertyRNA rna_SpotLight_falloff_curve = {
	{(PropertyRNA *)&rna_SpotLight_linear_attenuation, (PropertyRNA *)&rna_SpotLight_falloff_type,
	-1, "falloff_curve", 8388608, 0, 0, 0, 0, "Falloff Curve",
	"Custom light falloff curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SpotLight_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_SpotLight_linear_attenuation = {
	{(PropertyRNA *)&rna_SpotLight_quadratic_attenuation, (PropertyRNA *)&rna_SpotLight_falloff_curve,
	-1, "linear_attenuation", 3, 0, 0, 4, 0, "Linear Attenuation",
	"Linear distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att1), 5, NULL},
	SpotLight_linear_attenuation_get, SpotLight_linear_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLight_quadratic_attenuation = {
	{(PropertyRNA *)&rna_SpotLight_constant_coefficient, (PropertyRNA *)&rna_SpotLight_linear_attenuation,
	-1, "quadratic_attenuation", 3, 0, 0, 4, 0, "Quadratic Attenuation",
	"Quadratic distance attenuation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, att2), 5, NULL},
	SpotLight_quadratic_attenuation_get, SpotLight_quadratic_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_SpotLight_constant_coefficient = {
	{(PropertyRNA *)&rna_SpotLight_linear_coefficient, (PropertyRNA *)&rna_SpotLight_quadratic_attenuation,
	-1, "constant_coefficient", 3, 0, 0, 4, 0, "Constant Coefficient",
	"Constant distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_const), 5, NULL},
	SpotLight_constant_coefficient_get, SpotLight_constant_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_SpotLight_linear_coefficient = {
	{(PropertyRNA *)&rna_SpotLight_quadratic_coefficient, (PropertyRNA *)&rna_SpotLight_constant_coefficient,
	-1, "linear_coefficient", 3, 0, 0, 4, 0, "Linear Coefficient",
	"Linear distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_lin), 5, NULL},
	SpotLight_linear_coefficient_get, SpotLight_linear_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SpotLight_quadratic_coefficient = {
	{(PropertyRNA *)&rna_SpotLight_use_shadow, (PropertyRNA *)&rna_SpotLight_linear_coefficient,
	-1, "quadratic_coefficient", 3, 0, 0, 4, 0, "Quadratic Coefficient",
	"Quadratic distance attenuation coefficient",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, coeff_quad), 5, NULL},
	SpotLight_quadratic_coefficient_get, SpotLight_quadratic_coefficient_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SpotLight_use_shadow = {
	{(PropertyRNA *)&rna_SpotLight_shadow_buffer_size, (PropertyRNA *)&rna_SpotLight_quadratic_coefficient,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SpotLight_use_shadow_get, SpotLight_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_SpotLight_shadow_buffer_size = {
	{(PropertyRNA *)&rna_SpotLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_SpotLight_use_shadow,
	-1, "shadow_buffer_size", 3, 0, 0, 0, 0, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SpotLight_shadow_buffer_size_get, SpotLight_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 128, 10240, 128, 10240, 1, 512, NULL
};

FloatPropertyRNA rna_SpotLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_SpotLight_shadow_buffer_bias, (PropertyRNA *)&rna_SpotLight_shadow_buffer_size,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), 5, NULL},
	SpotLight_shadow_buffer_clip_start_get, SpotLight_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, NULL
};

FloatPropertyRNA rna_SpotLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_SpotLight_shadow_buffer_samples, (PropertyRNA *)&rna_SpotLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), 5, NULL},
	SpotLight_shadow_buffer_bias_get, SpotLight_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_SpotLight_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_SpotLight_shadow_color, (PropertyRNA *)&rna_SpotLight_shadow_buffer_bias,
	-1, "shadow_buffer_samples", 3, 0, 0, 4, 0, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, samp), 1, NULL},
	SpotLight_shadow_buffer_samples_get, SpotLight_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 16, 1, 16, 1, 3, NULL
};

static float rna_SpotLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SpotLight_shadow_color = {
	{(PropertyRNA *)&rna_SpotLight_shadow_soft_size, (PropertyRNA *)&rna_SpotLight_shadow_buffer_samples,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), 5, NULL},
	NULL, NULL, SpotLight_shadow_color_get, SpotLight_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SpotLight_shadow_color_default
};

FloatPropertyRNA rna_SpotLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_SpotLight_use_contact_shadow, (PropertyRNA *)&rna_SpotLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_size), 5, NULL},
	SpotLight_shadow_soft_size_get, SpotLight_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, NULL
};

BoolPropertyRNA rna_SpotLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_SpotLight_contact_shadow_distance, (PropertyRNA *)&rna_SpotLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SpotLight_use_contact_shadow_get, SpotLight_use_contact_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpotLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_SpotLight_contact_shadow_bias, (PropertyRNA *)&rna_SpotLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), 5, NULL},
	SpotLight_contact_shadow_distance_get, SpotLight_contact_shadow_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_SpotLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_SpotLight_contact_shadow_thickness, (PropertyRNA *)&rna_SpotLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), 5, NULL},
	SpotLight_contact_shadow_bias_get, SpotLight_contact_shadow_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, NULL
};

FloatPropertyRNA rna_SpotLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_SpotLight_use_square, (PropertyRNA *)&rna_SpotLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), 5, NULL},
	SpotLight_contact_shadow_thickness_get, SpotLight_contact_shadow_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, NULL
};

BoolPropertyRNA rna_SpotLight_use_square = {
	{(PropertyRNA *)&rna_SpotLight_spot_blend, (PropertyRNA *)&rna_SpotLight_contact_shadow_thickness,
	-1, "use_square", 3, 0, 0, 0, 0, "Square",
	"Cast a square spot light shape",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SpotLight_use_square_get, SpotLight_use_square_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SpotLight_spot_blend = {
	{(PropertyRNA *)&rna_SpotLight_spot_size, (PropertyRNA *)&rna_SpotLight_use_square,
	-1, "spot_blend", 3, 0, 0, 4, 0, "Spot Blend",
	"The softness of the spotlight edge",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, spotblend), 5, NULL},
	SpotLight_spot_blend_get, SpotLight_spot_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1500000060f, NULL
};

FloatPropertyRNA rna_SpotLight_spot_size = {
	{(PropertyRNA *)&rna_SpotLight_show_cone, (PropertyRNA *)&rna_SpotLight_spot_blend,
	-1, "spot_size", 3, 0, 0, 4, 0, "Spot Size",
	"Angle of the spotlight beam",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, spotsize), 5, NULL},
	SpotLight_spot_size_get, SpotLight_spot_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0174532924f, 3.1415927410f, 0.0174532924f, 3.1415927410f, 10.0f, 3, 0.7853981853f, NULL
};

BoolPropertyRNA rna_SpotLight_show_cone = {
	{NULL, (PropertyRNA *)&rna_SpotLight_spot_size,
	-1, "show_cone", 3, 0, 0, 0, 0, "Show Cone",
	"Display transparent cone in 3D view to visualize which objects are contained in it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SpotLight_show_cone_get, SpotLight_show_cone_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SpotLight = {
	{(ContainerRNA *)&RNA_SunLight, (ContainerRNA *)&RNA_AreaLight,
	NULL,
	{(PropertyRNA *)&rna_SpotLight_energy, (PropertyRNA *)&rna_SpotLight_show_cone}},
	"SpotLight", NULL, NULL, 519, NULL, "Spot Light",
	"Directional cone Light",
	"*", 300,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	NULL,
	rna_Light_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Sun Light */
FloatPropertyRNA rna_SunLight_angle = {
	{(PropertyRNA *)&rna_SunLight_energy, NULL,
	-1, "angle", 3, 0, 0, 4, 0, "Angle",
	"Angular diameter of the Sun as seen from the Earth",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, sun_angle), 5, NULL},
	SunLight_angle_get, SunLight_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0091804322f, NULL
};

FloatPropertyRNA rna_SunLight_energy = {
	{(PropertyRNA *)&rna_SunLight_use_shadow, (PropertyRNA *)&rna_SunLight_angle,
	-1, "energy", 3, 0, 0, 4, 0, "Strength",
	"Sunlight strength in watts per meter squared (W/m^2)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, energy), 5, NULL},
	SunLight_energy_get, SunLight_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

BoolPropertyRNA rna_SunLight_use_shadow = {
	{(PropertyRNA *)&rna_SunLight_shadow_buffer_size, (PropertyRNA *)&rna_SunLight_energy,
	-1, "use_shadow", 3, 0, 0, 0, 0, "use_shadow",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SunLight_use_shadow_get, SunLight_use_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_SunLight_shadow_buffer_size = {
	{(PropertyRNA *)&rna_SunLight_shadow_buffer_clip_start, (PropertyRNA *)&rna_SunLight_use_shadow,
	-1, "shadow_buffer_size", 3, 0, 0, 0, 0, "Shadow Buffer Size",
	"Resolution of the shadow buffer, higher values give crisper shadows but use more memory",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SunLight_shadow_buffer_size_get, SunLight_shadow_buffer_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 128, 10240, 128, 10240, 1, 512, NULL
};

FloatPropertyRNA rna_SunLight_shadow_buffer_clip_start = {
	{(PropertyRNA *)&rna_SunLight_shadow_buffer_bias, (PropertyRNA *)&rna_SunLight_shadow_buffer_size,
	-1, "shadow_buffer_clip_start", 3, 0, 0, 4, 0, "Shadow Buffer Clip Start",
	"Shadow map clip start, below which objects will not generate shadows",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, clipsta), 5, NULL},
	SunLight_shadow_buffer_clip_start_get, SunLight_shadow_buffer_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0500000007f, NULL
};

FloatPropertyRNA rna_SunLight_shadow_buffer_bias = {
	{(PropertyRNA *)&rna_SunLight_shadow_buffer_samples, (PropertyRNA *)&rna_SunLight_shadow_buffer_clip_start,
	-1, "shadow_buffer_bias", 3, 0, 0, 4, 0, "Shadow Buffer Bias",
	"Bias for reducing self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, bias), 5, NULL},
	SunLight_shadow_buffer_bias_get, SunLight_shadow_buffer_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_SunLight_shadow_buffer_samples = {
	{(PropertyRNA *)&rna_SunLight_shadow_color, (PropertyRNA *)&rna_SunLight_shadow_buffer_bias,
	-1, "shadow_buffer_samples", 3, 0, 0, 4, 0, "Samples",
	"Number of shadow buffer samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, samp), 1, NULL},
	SunLight_shadow_buffer_samples_get, SunLight_shadow_buffer_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 16, 1, 16, 1, 3, NULL
};

static float rna_SunLight_shadow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SunLight_shadow_color = {
	{(PropertyRNA *)&rna_SunLight_shadow_soft_size, (PropertyRNA *)&rna_SunLight_shadow_buffer_samples,
	-1, "shadow_color", 3, 0, 0, 4, 0, "Shadow Color",
	"Color of shadows cast by the light",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, shdwr), 5, NULL},
	NULL, NULL, SunLight_shadow_color_get, SunLight_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_SunLight_shadow_color_default
};

FloatPropertyRNA rna_SunLight_shadow_soft_size = {
	{(PropertyRNA *)&rna_SunLight_use_contact_shadow, (PropertyRNA *)&rna_SunLight_shadow_color,
	-1, "shadow_soft_size", 3, 0, 0, 4, 0, "Shadow Soft Size",
	"Light size for ray shadow sampling (Raytraced shadows)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, area_size), 5, NULL},
	SunLight_shadow_soft_size_get, SunLight_shadow_soft_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.2500000000f, NULL
};

BoolPropertyRNA rna_SunLight_use_contact_shadow = {
	{(PropertyRNA *)&rna_SunLight_contact_shadow_distance, (PropertyRNA *)&rna_SunLight_shadow_soft_size,
	-1, "use_contact_shadow", 3, 0, 0, 0, 0, "Contact Shadow",
	"Use screen space ray-tracing to have correct shadowing near occluder, or for small features that does not appear in shadow maps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SunLight_use_contact_shadow_get, SunLight_use_contact_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SunLight_contact_shadow_distance = {
	{(PropertyRNA *)&rna_SunLight_contact_shadow_bias, (PropertyRNA *)&rna_SunLight_use_contact_shadow,
	-1, "contact_shadow_distance", 3, 0, 0, 4, 0, "Contact Shadow Distance",
	"World space distance in which to search for screen space occluder",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_dist), 5, NULL},
	SunLight_contact_shadow_distance_get, SunLight_contact_shadow_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 9999.0f, 0.0f, 9999.0f, 10.0f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_SunLight_contact_shadow_bias = {
	{(PropertyRNA *)&rna_SunLight_contact_shadow_thickness, (PropertyRNA *)&rna_SunLight_contact_shadow_distance,
	-1, "contact_shadow_bias", 3, 0, 0, 4, 0, "Contact Shadow Bias",
	"Bias to avoid self shadowing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_bias), 5, NULL},
	SunLight_contact_shadow_bias_get, SunLight_contact_shadow_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 5.0f, 0.0010000000f, 9999.0f, 1.0f, 3, 0.0299999993f, NULL
};

FloatPropertyRNA rna_SunLight_contact_shadow_thickness = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_max_distance, (PropertyRNA *)&rna_SunLight_contact_shadow_bias,
	-1, "contact_shadow_thickness", 3, 0, 0, 4, 0, "Contact Shadow Thickness",
	"Pixel thickness used to detect occlusion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, contact_thickness), 5, NULL},
	SunLight_contact_shadow_thickness_get, SunLight_contact_shadow_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 9999.0f, 0.1000000015f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_SunLight_shadow_cascade_max_distance = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_count, (PropertyRNA *)&rna_SunLight_contact_shadow_thickness,
	-1, "shadow_cascade_max_distance", 3, 0, 0, 4, 0, "Cascade Max Distance",
	"End distance of the cascaded shadow map (only in perspective view)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_max_dist), 5, NULL},
	SunLight_shadow_cascade_max_distance_get, SunLight_shadow_cascade_max_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 200.0f, NULL
};

IntPropertyRNA rna_SunLight_shadow_cascade_count = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_exponent, (PropertyRNA *)&rna_SunLight_shadow_cascade_max_distance,
	-1, "shadow_cascade_count", 3, 0, 0, 4, 0, "Cascade Count",
	"Number of texture used by the cascaded shadow map",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_count), 0, NULL},
	SunLight_shadow_cascade_count_get, SunLight_shadow_cascade_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 4, 1, 4, 1, 4, NULL
};

FloatPropertyRNA rna_SunLight_shadow_cascade_exponent = {
	{(PropertyRNA *)&rna_SunLight_shadow_cascade_fade, (PropertyRNA *)&rna_SunLight_shadow_cascade_count,
	-1, "shadow_cascade_exponent", 3, 0, 0, 4, 0, "Exponential Distribution",
	"Higher value increase resolution towards the viewpoint",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_exponent), 5, NULL},
	SunLight_shadow_cascade_exponent_get, SunLight_shadow_cascade_exponent_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.8000000119f, NULL
};

FloatPropertyRNA rna_SunLight_shadow_cascade_fade = {
	{NULL, (PropertyRNA *)&rna_SunLight_shadow_cascade_exponent,
	-1, "shadow_cascade_fade", 3, 0, 0, 4, 0, "Cascade Fade",
	"How smooth is the transition between each cascade",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Light_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Light, cascade_fade), 5, NULL},
	SunLight_shadow_cascade_fade_get, SunLight_shadow_cascade_fade_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1000000015f, NULL
};

StructRNA RNA_SunLight = {
	{(ContainerRNA *)&RNA_Lattice, (ContainerRNA *)&RNA_SpotLight,
	NULL,
	{(PropertyRNA *)&rna_SunLight_angle, (PropertyRNA *)&rna_SunLight_shadow_cascade_fade}},
	"SunLight", NULL, NULL, 519, NULL, "Sun Light",
	"Constant direction parallel ray Light",
	"*", 299,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Light,
	NULL,
	rna_Light_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

