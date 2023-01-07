
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

#include "rna_object_force.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_PointCache_rna_properties;
PointerPropertyRNA rna_PointCache_rna_type;
IntPropertyRNA rna_PointCache_frame_start;
IntPropertyRNA rna_PointCache_frame_end;
IntPropertyRNA rna_PointCache_frame_step;
IntPropertyRNA rna_PointCache_index;
EnumPropertyRNA rna_PointCache_compression;
BoolPropertyRNA rna_PointCache_is_baked;
BoolPropertyRNA rna_PointCache_is_baking;
BoolPropertyRNA rna_PointCache_use_disk_cache;
BoolPropertyRNA rna_PointCache_is_outdated;
BoolPropertyRNA rna_PointCache_is_frame_skip;
StringPropertyRNA rna_PointCache_name;
StringPropertyRNA rna_PointCache_filepath;
StringPropertyRNA rna_PointCache_info;
BoolPropertyRNA rna_PointCache_use_external;
BoolPropertyRNA rna_PointCache_use_library_path;
CollectionPropertyRNA rna_PointCache_point_caches;


CollectionPropertyRNA rna_PointCaches_rna_properties;
PointerPropertyRNA rna_PointCaches_rna_type;
IntPropertyRNA rna_PointCaches_active_index;


CollectionPropertyRNA rna_PointCacheItem_rna_properties;
PointerPropertyRNA rna_PointCacheItem_rna_type;
IntPropertyRNA rna_PointCacheItem_frame_start;
IntPropertyRNA rna_PointCacheItem_frame_end;
IntPropertyRNA rna_PointCacheItem_frame_step;
IntPropertyRNA rna_PointCacheItem_index;
EnumPropertyRNA rna_PointCacheItem_compression;
BoolPropertyRNA rna_PointCacheItem_is_baked;
BoolPropertyRNA rna_PointCacheItem_is_baking;
BoolPropertyRNA rna_PointCacheItem_use_disk_cache;
BoolPropertyRNA rna_PointCacheItem_is_outdated;
BoolPropertyRNA rna_PointCacheItem_is_frame_skip;
StringPropertyRNA rna_PointCacheItem_name;
StringPropertyRNA rna_PointCacheItem_filepath;
StringPropertyRNA rna_PointCacheItem_info;
BoolPropertyRNA rna_PointCacheItem_use_external;
BoolPropertyRNA rna_PointCacheItem_use_library_path;


CollectionPropertyRNA rna_CollisionSettings_rna_properties;
PointerPropertyRNA rna_CollisionSettings_rna_type;
BoolPropertyRNA rna_CollisionSettings_use;
FloatPropertyRNA rna_CollisionSettings_damping_factor;
FloatPropertyRNA rna_CollisionSettings_damping_random;
FloatPropertyRNA rna_CollisionSettings_friction_factor;
FloatPropertyRNA rna_CollisionSettings_friction_random;
FloatPropertyRNA rna_CollisionSettings_permeability;
BoolPropertyRNA rna_CollisionSettings_use_particle_kill;
FloatPropertyRNA rna_CollisionSettings_stickiness;
FloatPropertyRNA rna_CollisionSettings_thickness_inner;
FloatPropertyRNA rna_CollisionSettings_thickness_outer;
FloatPropertyRNA rna_CollisionSettings_damping;
FloatPropertyRNA rna_CollisionSettings_absorption;
FloatPropertyRNA rna_CollisionSettings_cloth_friction;
BoolPropertyRNA rna_CollisionSettings_use_culling;
BoolPropertyRNA rna_CollisionSettings_use_normal;


CollectionPropertyRNA rna_EffectorWeights_rna_properties;
PointerPropertyRNA rna_EffectorWeights_rna_type;
BoolPropertyRNA rna_EffectorWeights_apply_to_hair_growing;
PointerPropertyRNA rna_EffectorWeights_collection;
FloatPropertyRNA rna_EffectorWeights_gravity;
FloatPropertyRNA rna_EffectorWeights_all;
FloatPropertyRNA rna_EffectorWeights_force;
FloatPropertyRNA rna_EffectorWeights_vortex;
FloatPropertyRNA rna_EffectorWeights_magnetic;
FloatPropertyRNA rna_EffectorWeights_wind;
FloatPropertyRNA rna_EffectorWeights_curve_guide;
FloatPropertyRNA rna_EffectorWeights_texture;
FloatPropertyRNA rna_EffectorWeights_harmonic;
FloatPropertyRNA rna_EffectorWeights_charge;
FloatPropertyRNA rna_EffectorWeights_lennardjones;
FloatPropertyRNA rna_EffectorWeights_boid;
FloatPropertyRNA rna_EffectorWeights_turbulence;
FloatPropertyRNA rna_EffectorWeights_drag;
FloatPropertyRNA rna_EffectorWeights_smokeflow;


CollectionPropertyRNA rna_FieldSettings_rna_properties;
PointerPropertyRNA rna_FieldSettings_rna_type;
EnumPropertyRNA rna_FieldSettings_type;
EnumPropertyRNA rna_FieldSettings_shape;
EnumPropertyRNA rna_FieldSettings_falloff_type;
EnumPropertyRNA rna_FieldSettings_texture_mode;
EnumPropertyRNA rna_FieldSettings_z_direction;
FloatPropertyRNA rna_FieldSettings_strength;
FloatPropertyRNA rna_FieldSettings_linear_drag;
FloatPropertyRNA rna_FieldSettings_harmonic_damping;
FloatPropertyRNA rna_FieldSettings_quadratic_drag;
FloatPropertyRNA rna_FieldSettings_flow;
FloatPropertyRNA rna_FieldSettings_wind_factor;
FloatPropertyRNA rna_FieldSettings_inflow;
FloatPropertyRNA rna_FieldSettings_size;
FloatPropertyRNA rna_FieldSettings_rest_length;
FloatPropertyRNA rna_FieldSettings_falloff_power;
FloatPropertyRNA rna_FieldSettings_distance_min;
FloatPropertyRNA rna_FieldSettings_distance_max;
FloatPropertyRNA rna_FieldSettings_radial_min;
FloatPropertyRNA rna_FieldSettings_radial_max;
FloatPropertyRNA rna_FieldSettings_radial_falloff;
FloatPropertyRNA rna_FieldSettings_texture_nabla;
FloatPropertyRNA rna_FieldSettings_noise;
IntPropertyRNA rna_FieldSettings_seed;
BoolPropertyRNA rna_FieldSettings_use_min_distance;
BoolPropertyRNA rna_FieldSettings_use_max_distance;
BoolPropertyRNA rna_FieldSettings_use_radial_min;
BoolPropertyRNA rna_FieldSettings_use_radial_max;
BoolPropertyRNA rna_FieldSettings_use_object_coords;
BoolPropertyRNA rna_FieldSettings_use_global_coords;
BoolPropertyRNA rna_FieldSettings_use_2d_force;
BoolPropertyRNA rna_FieldSettings_use_root_coords;
BoolPropertyRNA rna_FieldSettings_apply_to_location;
BoolPropertyRNA rna_FieldSettings_apply_to_rotation;
BoolPropertyRNA rna_FieldSettings_use_absorption;
BoolPropertyRNA rna_FieldSettings_use_multiple_springs;
BoolPropertyRNA rna_FieldSettings_use_smoke_density;
BoolPropertyRNA rna_FieldSettings_use_gravity_falloff;
PointerPropertyRNA rna_FieldSettings_texture;
PointerPropertyRNA rna_FieldSettings_source_object;
FloatPropertyRNA rna_FieldSettings_guide_minimum;
FloatPropertyRNA rna_FieldSettings_guide_free;
BoolPropertyRNA rna_FieldSettings_use_guide_path_add;
BoolPropertyRNA rna_FieldSettings_use_guide_path_weight;
FloatPropertyRNA rna_FieldSettings_guide_clump_amount;
FloatPropertyRNA rna_FieldSettings_guide_clump_shape;
EnumPropertyRNA rna_FieldSettings_guide_kink_type;
EnumPropertyRNA rna_FieldSettings_guide_kink_axis;
FloatPropertyRNA rna_FieldSettings_guide_kink_frequency;
FloatPropertyRNA rna_FieldSettings_guide_kink_shape;
FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude;


CollectionPropertyRNA rna_SoftBodySettings_rna_properties;
PointerPropertyRNA rna_SoftBodySettings_rna_type;
FloatPropertyRNA rna_SoftBodySettings_friction;
FloatPropertyRNA rna_SoftBodySettings_mass;
StringPropertyRNA rna_SoftBodySettings_vertex_group_mass;
FloatPropertyRNA rna_SoftBodySettings_gravity;
FloatPropertyRNA rna_SoftBodySettings_speed;
StringPropertyRNA rna_SoftBodySettings_vertex_group_goal;
FloatPropertyRNA rna_SoftBodySettings_goal_min;
FloatPropertyRNA rna_SoftBodySettings_goal_max;
FloatPropertyRNA rna_SoftBodySettings_goal_default;
FloatPropertyRNA rna_SoftBodySettings_goal_spring;
FloatPropertyRNA rna_SoftBodySettings_goal_friction;
FloatPropertyRNA rna_SoftBodySettings_pull;
FloatPropertyRNA rna_SoftBodySettings_push;
FloatPropertyRNA rna_SoftBodySettings_damping;
IntPropertyRNA rna_SoftBodySettings_spring_length;
IntPropertyRNA rna_SoftBodySettings_aero;
IntPropertyRNA rna_SoftBodySettings_plastic;
FloatPropertyRNA rna_SoftBodySettings_bend;
FloatPropertyRNA rna_SoftBodySettings_shear;
StringPropertyRNA rna_SoftBodySettings_vertex_group_spring;
EnumPropertyRNA rna_SoftBodySettings_collision_type;
FloatPropertyRNA rna_SoftBodySettings_ball_size;
FloatPropertyRNA rna_SoftBodySettings_ball_stiff;
FloatPropertyRNA rna_SoftBodySettings_ball_damp;
FloatPropertyRNA rna_SoftBodySettings_error_threshold;
IntPropertyRNA rna_SoftBodySettings_step_min;
IntPropertyRNA rna_SoftBodySettings_step_max;
IntPropertyRNA rna_SoftBodySettings_choke;
IntPropertyRNA rna_SoftBodySettings_fuzzy;
BoolPropertyRNA rna_SoftBodySettings_use_auto_step;
BoolPropertyRNA rna_SoftBodySettings_use_diagnose;
BoolPropertyRNA rna_SoftBodySettings_use_estimate_matrix;
FloatPropertyRNA rna_SoftBodySettings_location_mass_center;
FloatPropertyRNA rna_SoftBodySettings_rotation_estimate;
FloatPropertyRNA rna_SoftBodySettings_scale_estimate;
BoolPropertyRNA rna_SoftBodySettings_use_goal;
BoolPropertyRNA rna_SoftBodySettings_use_edges;
BoolPropertyRNA rna_SoftBodySettings_use_stiff_quads;
BoolPropertyRNA rna_SoftBodySettings_use_edge_collision;
BoolPropertyRNA rna_SoftBodySettings_use_face_collision;
EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type;
BoolPropertyRNA rna_SoftBodySettings_use_self_collision;
PointerPropertyRNA rna_SoftBodySettings_collision_collection;
PointerPropertyRNA rna_SoftBodySettings_effector_weights;

static PointerRNA PointCache_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PointCache_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCache_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCache_rna_properties_get(iter);
    }
}

void PointCache_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PointCache_rna_properties_get(iter);
    }
}

void PointCache_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PointCache_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PointCache_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int PointCache_frame_start_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->startframe);
}

void PointCache_frame_start_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->startframe = CLAMPIS(value, -1048574, 1048574);
}

int PointCache_frame_end_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->endframe);
}

void PointCache_frame_end_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->endframe = CLAMPIS(value, 1, 1048574);
}

int PointCache_frame_step_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->step);
}

void PointCache_frame_step_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_PointCache_frame_step_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->step = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int PointCache_index_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->index);
}

void PointCache_index_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->index = CLAMPIS(value, -1, 100);
}

int PointCache_compression_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->compression);
}

void PointCache_compression_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->compression = value;
}

bool PointCache_is_baked_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

bool PointCache_is_baking_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

bool PointCache_use_disk_cache_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void PointCache_use_disk_cache_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool PointCache_is_outdated_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

bool PointCache_is_frame_skip_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void PointCache_name_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int PointCache_name_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->name);
}

void PointCache_name_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void PointCache_filepath_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(value, data->path, 1024);
}

int PointCache_filepath_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->path);
}

void PointCache_filepath_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(data->path, value, 1024);
}

void PointCache_info_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(value, data->info, 128);
}

int PointCache_info_length(PointerRNA *ptr)
{
    return rna_Cache_info_length(ptr);
}

bool PointCache_use_external_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void PointCache_use_external_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool PointCache_use_library_path_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return !(((data->flag) & 2048) != 0);
}

void PointCache_use_library_path_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (!value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

static PointerRNA PointCache_point_caches_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PointCacheItem, rna_iterator_listbase_get(iter));
}

void PointCache_point_caches_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCache_point_caches;

    rna_Cache_list_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCache_point_caches_get(iter);
    }
}

void PointCache_point_caches_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = PointCache_point_caches_get(iter);
    }
}

void PointCache_point_caches_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA PointCaches_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PointCaches_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCaches_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCaches_rna_properties_get(iter);
    }
}

void PointCaches_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PointCaches_rna_properties_get(iter);
    }
}

void PointCaches_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PointCaches_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PointCaches_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int PointCaches_active_index_get(PointerRNA *ptr)
{
    return rna_Cache_active_point_cache_index_get(ptr);
}

void PointCaches_active_index_set(PointerRNA *ptr, int value)
{
    rna_Cache_active_point_cache_index_set(ptr, value);
}

static PointerRNA PointCacheItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PointCacheItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PointCacheItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCacheItem_rna_properties_get(iter);
    }
}

void PointCacheItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PointCacheItem_rna_properties_get(iter);
    }
}

void PointCacheItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PointCacheItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PointCacheItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int PointCacheItem_frame_start_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->startframe);
}

void PointCacheItem_frame_start_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->startframe = CLAMPIS(value, -1048574, 1048574);
}

int PointCacheItem_frame_end_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->endframe);
}

void PointCacheItem_frame_end_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->endframe = CLAMPIS(value, 1, 1048574);
}

int PointCacheItem_frame_step_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->step);
}

void PointCacheItem_frame_step_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_PointCache_frame_step_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->step = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int PointCacheItem_index_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->index);
}

void PointCacheItem_index_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->index = CLAMPIS(value, -1, 100);
}

int PointCacheItem_compression_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (int)(data->compression);
}

void PointCacheItem_compression_set(PointerRNA *ptr, int value)
{
    PointCache *data = (PointCache *)(ptr->data);
    data->compression = value;
}

bool PointCacheItem_is_baked_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

bool PointCacheItem_is_baking_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

bool PointCacheItem_use_disk_cache_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void PointCacheItem_use_disk_cache_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool PointCacheItem_is_outdated_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

bool PointCacheItem_is_frame_skip_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void PointCacheItem_name_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int PointCacheItem_name_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->name);
}

void PointCacheItem_name_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void PointCacheItem_filepath_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(value, data->path, 1024);
}

int PointCacheItem_filepath_length(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return strlen(data->path);
}

void PointCacheItem_filepath_set(PointerRNA *ptr, const char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy(data->path, value, 1024);
}

void PointCacheItem_info_get(PointerRNA *ptr, char *value)
{
    PointCache *data = (PointCache *)(ptr->data);
    BLI_strncpy_utf8(value, data->info, 128);
}

int PointCacheItem_info_length(PointerRNA *ptr)
{
    return rna_Cache_info_length(ptr);
}

bool PointCacheItem_use_external_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void PointCacheItem_use_external_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool PointCacheItem_use_library_path_get(PointerRNA *ptr)
{
    PointCache *data = (PointCache *)(ptr->data);
    return !(((data->flag) & 2048) != 0);
}

void PointCacheItem_use_library_path_set(PointerRNA *ptr, bool value)
{
    PointCache *data = (PointCache *)(ptr->data);
    if (!value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

static PointerRNA CollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollisionSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollisionSettings_rna_properties_get(iter);
    }
}

void CollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollisionSettings_rna_properties_get(iter);
    }
}

void CollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CollisionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CollisionSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool CollisionSettings_use_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->deflect) & 1) != 0);
}

void CollisionSettings_use_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->deflect |= 1; }
    else { data->deflect &= ~1; }
}

float CollisionSettings_damping_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_damp);
}

void CollisionSettings_damping_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_damp = CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_damping_random_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_rdamp);
}

void CollisionSettings_damping_random_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_rdamp = CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_friction_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_frict);
}

void CollisionSettings_friction_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_frict = CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_friction_random_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_rfrict);
}

void CollisionSettings_friction_random_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_rfrict = CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_permeability_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_perm);
}

void CollisionSettings_permeability_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_perm = CLAMPIS(value, 0.0f, 1.0f);
}

bool CollisionSettings_use_particle_kill_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void CollisionSettings_use_particle_kill_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

float CollisionSettings_stickiness_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_stickness);
}

void CollisionSettings_stickiness_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_stickness = CLAMPIS(value, 0.0f, 10.0f);
}

float CollisionSettings_thickness_inner_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sbift);
}

void CollisionSettings_thickness_inner_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_sbift = CLAMPIS(value, 0.0010000000f, 1.0f);
}

float CollisionSettings_thickness_outer_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sboft);
}

void CollisionSettings_thickness_outer_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_sboft = CLAMPIS(value, 0.0010000000f, 1.0f);
}

float CollisionSettings_damping_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_sbdamp);
}

void CollisionSettings_damping_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_sbdamp = CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_absorption_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->absorption);
}

void CollisionSettings_absorption_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->absorption = CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_cloth_friction_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->pdef_cfrict);
}

void CollisionSettings_cloth_friction_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->pdef_cfrict = CLAMPIS(value, 0.0f, 80.0f);
}

bool CollisionSettings_use_culling_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

void CollisionSettings_use_culling_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

bool CollisionSettings_use_normal_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 1048576) != 0);
}

void CollisionSettings_use_normal_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 1048576; }
    else { data->flag &= ~1048576; }
}

static PointerRNA EffectorWeights_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void EffectorWeights_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EffectorWeights_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EffectorWeights_rna_properties_get(iter);
    }
}

void EffectorWeights_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = EffectorWeights_rna_properties_get(iter);
    }
}

void EffectorWeights_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int EffectorWeights_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA EffectorWeights_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool EffectorWeights_apply_to_hair_growing_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void EffectorWeights_apply_to_hair_growing_set(PointerRNA *ptr, bool value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

PointerRNA EffectorWeights_collection_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->group);
}

void EffectorWeights_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);

    if (data->group) {
        id_us_min((ID *)data->group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->group = value.data;
}

float EffectorWeights_gravity_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->global_gravity);
}

void EffectorWeights_gravity_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->global_gravity = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_all_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[0]);
}

void EffectorWeights_all_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[0] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_force_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[1]);
}

void EffectorWeights_force_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[1] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_vortex_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[2]);
}

void EffectorWeights_vortex_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[2] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_magnetic_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[3]);
}

void EffectorWeights_magnetic_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[3] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_wind_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[4]);
}

void EffectorWeights_wind_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[4] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_curve_guide_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[5]);
}

void EffectorWeights_curve_guide_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[5] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_texture_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[6]);
}

void EffectorWeights_texture_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[6] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_harmonic_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[7]);
}

void EffectorWeights_harmonic_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[7] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_charge_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[8]);
}

void EffectorWeights_charge_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[8] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_lennardjones_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[9]);
}

void EffectorWeights_lennardjones_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[9] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_boid_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[10]);
}

void EffectorWeights_boid_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[10] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_turbulence_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[11]);
}

void EffectorWeights_turbulence_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[11] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_drag_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[12]);
}

void EffectorWeights_drag_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[12] = CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_smokeflow_get(PointerRNA *ptr)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    return (float)(data->weight[13]);
}

void EffectorWeights_smokeflow_set(PointerRNA *ptr, float value)
{
    EffectorWeights *data = (EffectorWeights *)(ptr->data);
    data->weight[13] = CLAMPIS(value, -200.0f, 200.0f);
}

static PointerRNA FieldSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FieldSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FieldSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FieldSettings_rna_properties_get(iter);
    }
}

void FieldSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FieldSettings_rna_properties_get(iter);
    }
}

void FieldSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FieldSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FieldSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int FieldSettings_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->forcefield);
}

void FieldSettings_type_set(PointerRNA *ptr, int value)
{
    rna_FieldSettings_type_set(ptr, value);
}

int FieldSettings_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->shape);
}

void FieldSettings_shape_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->shape = value;
}

int FieldSettings_falloff_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->falloff);
}

void FieldSettings_falloff_type_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->falloff = value;
}

int FieldSettings_texture_mode_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->tex_mode);
}

void FieldSettings_texture_mode_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->tex_mode = value;
}

int FieldSettings_z_direction_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->zdir);
}

void FieldSettings_z_direction_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->zdir = value;
}

float FieldSettings_strength_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

void FieldSettings_strength_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_strength = value;
}

float FieldSettings_linear_drag_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

void FieldSettings_linear_drag_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_strength = value;
}

float FieldSettings_harmonic_damping_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_damp);
}

void FieldSettings_harmonic_damping_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_damp = value;
}

float FieldSettings_quadratic_drag_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_damp);
}

void FieldSettings_quadratic_drag_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_damp = value;
}

float FieldSettings_flow_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_flow);
}

void FieldSettings_flow_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_flow = value;
}

float FieldSettings_wind_factor_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_wind_factor);
}

void FieldSettings_wind_factor_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_wind_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float FieldSettings_inflow_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_flow);
}

void FieldSettings_inflow_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_flow = value;
}

float FieldSettings_size_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_size);
}

void FieldSettings_size_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

float FieldSettings_rest_length_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_size);
}

void FieldSettings_rest_length_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_size = CLAMPIS(value, 0.0f, FLT_MAX);
}

float FieldSettings_falloff_power_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_power);
}

void FieldSettings_falloff_power_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_power = CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_distance_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->mindist);
}

void FieldSettings_distance_min_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->mindist = CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_distance_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->maxdist);
}

void FieldSettings_distance_max_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->maxdist = CLAMPIS(value, 0.0f, FLT_MAX);
}

float FieldSettings_radial_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->minrad);
}

void FieldSettings_radial_min_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->minrad = CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_radial_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->maxrad);
}

void FieldSettings_radial_max_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->maxrad = CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_radial_falloff_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_power_r);
}

void FieldSettings_radial_falloff_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_power_r = CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_texture_nabla_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->tex_nabla);
}

void FieldSettings_texture_nabla_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->tex_nabla = CLAMPIS(value, 0.0001000000f, 1.0f);
}

float FieldSettings_noise_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_noise);
}

void FieldSettings_noise_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_noise = CLAMPIS(value, 0.0f, 10.0f);
}

int FieldSettings_seed_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->seed);
}

void FieldSettings_seed_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->seed = CLAMPIS(value, 1, 128);
}

bool FieldSettings_use_min_distance_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void FieldSettings_use_min_distance_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool FieldSettings_use_max_distance_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void FieldSettings_use_max_distance_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool FieldSettings_use_radial_min_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void FieldSettings_use_radial_min_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool FieldSettings_use_radial_max_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void FieldSettings_use_radial_max_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool FieldSettings_use_object_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void FieldSettings_use_object_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool FieldSettings_use_global_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void FieldSettings_use_global_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool FieldSettings_use_2d_force_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void FieldSettings_use_2d_force_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool FieldSettings_use_root_coords_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void FieldSettings_use_root_coords_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool FieldSettings_apply_to_location_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

void FieldSettings_apply_to_location_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

bool FieldSettings_apply_to_rotation_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

void FieldSettings_apply_to_rotation_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

bool FieldSettings_use_absorption_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void FieldSettings_use_absorption_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool FieldSettings_use_multiple_springs_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void FieldSettings_use_multiple_springs_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool FieldSettings_use_smoke_density_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

void FieldSettings_use_smoke_density_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

bool FieldSettings_use_gravity_falloff_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

void FieldSettings_use_gravity_falloff_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

PointerRNA FieldSettings_texture_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->tex);
}

void FieldSettings_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);

    if (data->tex) {
        id_us_min((ID *)data->tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->tex = value.data;
}

PointerRNA FieldSettings_source_object_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->f_source);
}

void FieldSettings_source_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->f_source = value.data;
}

float FieldSettings_guide_minimum_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->f_strength);
}

void FieldSettings_guide_minimum_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->f_strength = value;
}

float FieldSettings_guide_free_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->free_end);
}

void FieldSettings_guide_free_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->free_end = CLAMPIS(value, 0.0f, 0.9900000095f);
}

bool FieldSettings_use_guide_path_add_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void FieldSettings_use_guide_path_add_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool FieldSettings_use_guide_path_weight_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

void FieldSettings_use_guide_path_weight_set(PointerRNA *ptr, bool value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

float FieldSettings_guide_clump_amount_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->clump_fac);
}

void FieldSettings_guide_clump_amount_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->clump_fac = CLAMPIS(value, -1.0f, 1.0f);
}

float FieldSettings_guide_clump_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->clump_pow);
}

void FieldSettings_guide_clump_shape_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->clump_pow = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

int FieldSettings_guide_kink_type_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->kink);
}

void FieldSettings_guide_kink_type_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink = value;
}

int FieldSettings_guide_kink_axis_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (int)(data->kink_axis);
}

void FieldSettings_guide_kink_axis_set(PointerRNA *ptr, int value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_axis = value;
}

float FieldSettings_guide_kink_frequency_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_freq);
}

void FieldSettings_guide_kink_frequency_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_freq = CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_guide_kink_shape_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_shape);
}

void FieldSettings_guide_kink_shape_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_shape = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

float FieldSettings_guide_kink_amplitude_get(PointerRNA *ptr)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    return (float)(data->kink_amp);
}

void FieldSettings_guide_kink_amplitude_set(PointerRNA *ptr, float value)
{
    PartDeflect *data = (PartDeflect *)(ptr->data);
    data->kink_amp = CLAMPIS(value, 0.0f, 10.0f);
}

static PointerRNA SoftBodySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void SoftBodySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SoftBodySettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SoftBodySettings_rna_properties_get(iter);
    }
}

void SoftBodySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SoftBodySettings_rna_properties_get(iter);
    }
}

void SoftBodySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int SoftBodySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SoftBodySettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float SoftBodySettings_friction_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->mediafrict);
}

void SoftBodySettings_friction_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->mediafrict = CLAMPIS(value, 0.0f, 50.0f);
}

float SoftBodySettings_mass_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->nodemass);
}

void SoftBodySettings_mass_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->nodemass = CLAMPIS(value, 0.0f, 50000.0f);
}

void SoftBodySettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    BLI_strncpy_utf8(value, data->namedVG_Mass, 64);
}

int SoftBodySettings_vertex_group_mass_length(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return strlen(data->namedVG_Mass);
}

void SoftBodySettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
    rna_SoftBodySettings_mass_vgroup_set(ptr, value);
}

float SoftBodySettings_gravity_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->grav);
}

void SoftBodySettings_gravity_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->grav = CLAMPIS(value, -10.0f, 10.0f);
}

float SoftBodySettings_speed_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->physics_speed);
}

void SoftBodySettings_speed_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->physics_speed = CLAMPIS(value, 0.0099999998f, 100.0f);
}

void SoftBodySettings_vertex_group_goal_get(PointerRNA *ptr, char *value)
{
    rna_SoftBodySettings_goal_vgroup_get(ptr, value);
}

int SoftBodySettings_vertex_group_goal_length(PointerRNA *ptr)
{
    return rna_SoftBodySettings_goal_vgroup_length(ptr);
}

void SoftBodySettings_vertex_group_goal_set(PointerRNA *ptr, const char *value)
{
    rna_SoftBodySettings_goal_vgroup_set(ptr, value);
}

float SoftBodySettings_goal_min_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->mingoal);
}

void SoftBodySettings_goal_min_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->mingoal = CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_max_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->maxgoal);
}

void SoftBodySettings_goal_max_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->maxgoal = CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_default_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->defgoal);
}

void SoftBodySettings_goal_default_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->defgoal = CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_spring_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->goalspring);
}

void SoftBodySettings_goal_spring_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->goalspring = CLAMPIS(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_goal_friction_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->goalfrict);
}

void SoftBodySettings_goal_friction_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->goalfrict = CLAMPIS(value, 0.0f, 50.0f);
}

float SoftBodySettings_pull_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->inspring);
}

void SoftBodySettings_pull_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->inspring = CLAMPIS(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_push_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->inpush);
}

void SoftBodySettings_push_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->inpush = CLAMPIS(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_damping_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->infrict);
}

void SoftBodySettings_damping_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->infrict = CLAMPIS(value, 0.0f, 50.0f);
}

int SoftBodySettings_spring_length_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->springpreload);
}

void SoftBodySettings_spring_length_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->springpreload = CLAMPIS(value, 0, 200);
}

int SoftBodySettings_aero_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->aeroedge);
}

void SoftBodySettings_aero_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->aeroedge = CLAMPIS(value, 0, 30000);
}

int SoftBodySettings_plastic_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->plastic);
}

void SoftBodySettings_plastic_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->plastic = CLAMPIS(value, 0, 100);
}

float SoftBodySettings_bend_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->secondspring);
}

void SoftBodySettings_bend_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->secondspring = CLAMPIS(value, 0.0f, 10.0f);
}

float SoftBodySettings_shear_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->shearstiff);
}

void SoftBodySettings_shear_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->shearstiff = CLAMPIS(value, 0.0f, 1.0f);
}

void SoftBodySettings_vertex_group_spring_get(PointerRNA *ptr, char *value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    BLI_strncpy_utf8(value, data->namedVG_Spring_K, 64);
}

int SoftBodySettings_vertex_group_spring_length(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return strlen(data->namedVG_Spring_K);
}

void SoftBodySettings_vertex_group_spring_set(PointerRNA *ptr, const char *value)
{
    rna_SoftBodySettings_spring_vgroup_set(ptr, value);
}

int SoftBodySettings_collision_type_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->sbc_mode);
}

void SoftBodySettings_collision_type_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->sbc_mode = value;
}

float SoftBodySettings_ball_size_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->colball);
}

void SoftBodySettings_ball_size_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->colball = CLAMPIS(value, -10.0f, 10.0f);
}

float SoftBodySettings_ball_stiff_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->ballstiff);
}

void SoftBodySettings_ball_stiff_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->ballstiff = CLAMPIS(value, 0.0010000000f, 100.0f);
}

float SoftBodySettings_ball_damp_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->balldamp);
}

void SoftBodySettings_ball_damp_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->balldamp = CLAMPIS(value, 0.0010000000f, 1.0f);
}

float SoftBodySettings_error_threshold_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (float)(data->rklimit);
}

void SoftBodySettings_error_threshold_set(PointerRNA *ptr, float value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->rklimit = CLAMPIS(value, 0.0010000000f, 10.0f);
}

int SoftBodySettings_step_min_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->minloops);
}

void SoftBodySettings_step_min_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->minloops = CLAMPIS(value, 0, 30000);
}

int SoftBodySettings_step_max_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->maxloops);
}

void SoftBodySettings_step_max_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->maxloops = CLAMPIS(value, 0, 30000);
}

int SoftBodySettings_choke_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->choke);
}

void SoftBodySettings_choke_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->choke = CLAMPIS(value, 0, 100);
}

int SoftBodySettings_fuzzy_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (int)(data->fuzzyness);
}

void SoftBodySettings_fuzzy_set(PointerRNA *ptr, int value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    data->fuzzyness = CLAMPIS(value, 1, 100);
}

bool SoftBodySettings_use_auto_step_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (((data->solverflags) & 2) != 0);
}

void SoftBodySettings_use_auto_step_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags |= 2; }
    else { data->solverflags &= ~2; }
}

bool SoftBodySettings_use_diagnose_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (((data->solverflags) & 1) != 0);
}

void SoftBodySettings_use_diagnose_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags |= 1; }
    else { data->solverflags &= ~1; }
}

bool SoftBodySettings_use_estimate_matrix_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return (((data->solverflags) & 4) != 0);
}

void SoftBodySettings_use_estimate_matrix_set(PointerRNA *ptr, bool value)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value) { data->solverflags |= 4; }
    else { data->solverflags &= ~4; }
}

void SoftBodySettings_location_mass_center_get(PointerRNA *ptr, float values[3])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->lcom)[i]);
    }
}

void SoftBodySettings_location_mass_center_set(PointerRNA *ptr, const float values[3])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->lcom)[i] = values[i];
    }
}

void SoftBodySettings_rotation_estimate_get(PointerRNA *ptr, float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->lrot)[i]);
    }
}

void SoftBodySettings_rotation_estimate_set(PointerRNA *ptr, const float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        ((float *)data->lrot)[i] = values[i];
    }
}

void SoftBodySettings_scale_estimate_get(PointerRNA *ptr, float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->lscale)[i]);
    }
}

void SoftBodySettings_scale_estimate_set(PointerRNA *ptr, const float values[9])
{
    SoftBody *data = (SoftBody *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        ((float *)data->lscale)[i] = values[i];
    }
}

bool SoftBodySettings_use_goal_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_use_goal_get(ptr);
}

void SoftBodySettings_use_goal_set(PointerRNA *ptr, bool value)
{
    rna_SoftBodySettings_use_goal_set(ptr, value);
}

bool SoftBodySettings_use_edges_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_use_edges_get(ptr);
}

void SoftBodySettings_use_edges_set(PointerRNA *ptr, bool value)
{
    rna_SoftBodySettings_use_edges_set(ptr, value);
}

bool SoftBodySettings_use_stiff_quads_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_stiff_quads_get(ptr);
}

void SoftBodySettings_use_stiff_quads_set(PointerRNA *ptr, bool value)
{
    rna_SoftBodySettings_stiff_quads_set(ptr, value);
}

bool SoftBodySettings_use_edge_collision_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_edge_collision_get(ptr);
}

void SoftBodySettings_use_edge_collision_set(PointerRNA *ptr, bool value)
{
    rna_SoftBodySettings_edge_collision_set(ptr, value);
}

bool SoftBodySettings_use_face_collision_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_face_collision_get(ptr);
}

void SoftBodySettings_use_face_collision_set(PointerRNA *ptr, bool value)
{
    rna_SoftBodySettings_face_collision_set(ptr, value);
}

int SoftBodySettings_aerodynamics_type_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_new_aero_get(ptr);
}

void SoftBodySettings_aerodynamics_type_set(PointerRNA *ptr, int value)
{
    rna_SoftBodySettings_new_aero_set(ptr, value);
}

bool SoftBodySettings_use_self_collision_get(PointerRNA *ptr)
{
    return rna_SoftBodySettings_self_collision_get(ptr);
}

void SoftBodySettings_use_self_collision_set(PointerRNA *ptr, bool value)
{
    rna_SoftBodySettings_self_collision_set(ptr, value);
}

PointerRNA SoftBodySettings_collision_collection_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->collision_group);
}

void SoftBodySettings_collision_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->collision_group = value.data;
}

PointerRNA SoftBodySettings_effector_weights_get(PointerRNA *ptr)
{
    SoftBody *data = (SoftBody *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}








/* Active Point Cache */
CollectionPropertyRNA rna_PointCache_rna_properties = {
	{(PropertyRNA *)&rna_PointCache_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_rna_properties_begin, PointCache_rna_properties_next, PointCache_rna_properties_end, PointCache_rna_properties_get, NULL, NULL, PointCache_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PointCache_rna_type = {
	{(PropertyRNA *)&rna_PointCache_frame_start, (PropertyRNA *)&rna_PointCache_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_PointCache_frame_start = {
	{(PropertyRNA *)&rna_PointCache_frame_end, (PropertyRNA *)&rna_PointCache_rna_type,
	-1, "frame_start", 3, 1, 0, 4, 0, "Start",
	"Frame on which the simulation starts",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, startframe), 0, NULL},
	PointCache_frame_start_get, PointCache_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1048574, -1048574, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_PointCache_frame_end = {
	{(PropertyRNA *)&rna_PointCache_frame_step, (PropertyRNA *)&rna_PointCache_frame_start,
	-1, "frame_end", 3, 1, 0, 4, 0, "End",
	"Frame on which the simulation stops",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, endframe), 0, NULL},
	PointCache_frame_end_get, PointCache_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 1048574, 1, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_PointCache_frame_step = {
	{(PropertyRNA *)&rna_PointCache_index, (PropertyRNA *)&rna_PointCache_frame_end,
	-1, "frame_step", 3, 1, 0, 4, 0, "Cache Step",
	"Number of frames between cached frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, step), 0, NULL},
	PointCache_frame_step_get, PointCache_frame_step_set, NULL, NULL, rna_PointCache_frame_step_range, NULL, NULL, NULL, NULL, NULL,
	0, 1, 20, 1, 20, 1, 0, NULL
};

IntPropertyRNA rna_PointCache_index = {
	{(PropertyRNA *)&rna_PointCache_compression, (PropertyRNA *)&rna_PointCache_frame_step,
	-1, "index", 3, 1, 0, 4, 0, "Cache Index",
	"Index number of cache files",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, index), 0, NULL},
	PointCache_index_get, PointCache_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, 100, -1, 100, 1, 0, NULL
};

static const EnumPropertyItem rna_PointCache_compression_items[4] = {
	{0, "NO", 0, "None", "No compression"},
	{1, "LIGHT", 0, "Lite", "Fast but not so effective compression"},
	{2, "HEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointCache_compression = {
	{(PropertyRNA *)&rna_PointCache_is_baked, (PropertyRNA *)&rna_PointCache_index,
	-1, "compression", 3, 1, 0, 4, 0, "Cache Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, compression), 1, NULL},
	PointCache_compression_get, PointCache_compression_set, NULL, NULL, NULL, rna_PointCache_compression_items, 3, 0
};

BoolPropertyRNA rna_PointCache_is_baked = {
	{(PropertyRNA *)&rna_PointCache_is_baking, (PropertyRNA *)&rna_PointCache_compression,
	-1, "is_baked", 2, 1, 0, 0, 0, "",
	"The cache is baked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_is_baked_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCache_is_baking = {
	{(PropertyRNA *)&rna_PointCache_use_disk_cache, (PropertyRNA *)&rna_PointCache_is_baked,
	-1, "is_baking", 2, 1, 0, 0, 0, "",
	"The cache is being baked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_is_baking_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCache_use_disk_cache = {
	{(PropertyRNA *)&rna_PointCache_is_outdated, (PropertyRNA *)&rna_PointCache_is_baking,
	-1, "use_disk_cache", 3, 1, 0, 0, 0, "Disk Cache",
	"Save cache files to disk (.blend file must be saved first)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_toggle_disk_cache, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Cache_use_disk_cache_override_apply,
	0, -1, NULL},
	PointCache_use_disk_cache_get, PointCache_use_disk_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCache_is_outdated = {
	{(PropertyRNA *)&rna_PointCache_is_frame_skip, (PropertyRNA *)&rna_PointCache_use_disk_cache,
	-1, "is_outdated", 2, 1, 0, 0, 0, "Cache Is Outdated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_is_outdated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCache_is_frame_skip = {
	{(PropertyRNA *)&rna_PointCache_name, (PropertyRNA *)&rna_PointCache_is_outdated,
	-1, "is_frame_skip", 2, 1, 0, 0, 0, "",
	"Some frames were skipped while baking/saving that cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_is_frame_skip_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_PointCache_name = {
	{(PropertyRNA *)&rna_PointCache_filepath, (PropertyRNA *)&rna_PointCache_is_frame_skip,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"Cache name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_name_get, PointCache_name_length, PointCache_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_PointCache_filepath = {
	{(PropertyRNA *)&rna_PointCache_info, (PropertyRNA *)&rna_PointCache_name,
	-1, "filepath", 262145, 1, 0, 0, 0, "File Path",
	"Cache file path",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_filepath_get, PointCache_filepath_length, PointCache_filepath_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

StringPropertyRNA rna_PointCache_info = {
	{(PropertyRNA *)&rna_PointCache_use_external, (PropertyRNA *)&rna_PointCache_filepath,
	-1, "info", 262144, 3, 0, 0, 0, "Cache Info",
	"Info on current cache status",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_info_get, PointCache_info_length, NULL, NULL, NULL, NULL, NULL, 0, 128, ""
};

BoolPropertyRNA rna_PointCache_use_external = {
	{(PropertyRNA *)&rna_PointCache_use_library_path, (PropertyRNA *)&rna_PointCache_info,
	-1, "use_external", 3, 1, 0, 0, 0, "External",
	"Read cache from an external location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_use_external_get, PointCache_use_external_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCache_use_library_path = {
	{(PropertyRNA *)&rna_PointCache_point_caches, (PropertyRNA *)&rna_PointCache_use_external,
	-1, "use_library_path", 3, 1, 0, 0, 0, "Library Path",
	"Use this file\'s path for the disk cache when library linked into another file (for local bakes per scene file, disable this option)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCache_use_library_path_get, PointCache_use_library_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_PointCache_point_caches = {
	{NULL, (PropertyRNA *)&rna_PointCache_use_library_path,
	-1, "point_caches", 0, 1, 0, 0, 0, "Point Cache List",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_PointCaches},
	PointCache_point_caches_begin, PointCache_point_caches_next, PointCache_point_caches_end, PointCache_point_caches_get, NULL, NULL, NULL, NULL, &RNA_PointCacheItem
};

StructRNA RNA_PointCache = {
	{(ContainerRNA *)&RNA_PointCaches, (ContainerRNA *)&RNA_ObjectLineArt,
	NULL,
	{(PropertyRNA *)&rna_PointCache_rna_properties, (PropertyRNA *)&rna_PointCache_point_caches}},
	"PointCache", NULL, NULL, 516, NULL, "Active Point Cache",
	"Active point cache for physics simulations",
	"*", 89,
	(PropertyRNA *)&rna_PointCache_name, (PropertyRNA *)&rna_PointCache_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_PointCache_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Point Caches */
CollectionPropertyRNA rna_PointCaches_rna_properties = {
	{(PropertyRNA *)&rna_PointCaches_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCaches_rna_properties_begin, PointCaches_rna_properties_next, PointCaches_rna_properties_end, PointCaches_rna_properties_get, NULL, NULL, PointCaches_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PointCaches_rna_type = {
	{(PropertyRNA *)&rna_PointCaches_active_index, (PropertyRNA *)&rna_PointCaches_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCaches_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_PointCaches_active_index = {
	{NULL, (PropertyRNA *)&rna_PointCaches_rna_type,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Point Cache Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCaches_active_index_get, PointCaches_active_index_set, NULL, NULL, rna_Cache_active_point_cache_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_PointCaches = {
	{(ContainerRNA *)&RNA_PointCacheItem, (ContainerRNA *)&RNA_PointCache,
	NULL,
	{(PropertyRNA *)&rna_PointCaches_rna_properties, (PropertyRNA *)&rna_PointCaches_active_index}},
	"PointCaches", NULL, NULL, 516, NULL, "Point Caches",
	"Collection of point caches",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PointCaches_rna_properties,
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

/* Point Cache */
CollectionPropertyRNA rna_PointCacheItem_rna_properties = {
	{(PropertyRNA *)&rna_PointCacheItem_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_rna_properties_begin, PointCacheItem_rna_properties_next, PointCacheItem_rna_properties_end, PointCacheItem_rna_properties_get, NULL, NULL, PointCacheItem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PointCacheItem_rna_type = {
	{(PropertyRNA *)&rna_PointCacheItem_frame_start, (PropertyRNA *)&rna_PointCacheItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_PointCacheItem_frame_start = {
	{(PropertyRNA *)&rna_PointCacheItem_frame_end, (PropertyRNA *)&rna_PointCacheItem_rna_type,
	-1, "frame_start", 3, 1, 0, 4, 0, "Start",
	"Frame on which the simulation starts",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, startframe), 0, NULL},
	PointCacheItem_frame_start_get, PointCacheItem_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1048574, -1048574, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_PointCacheItem_frame_end = {
	{(PropertyRNA *)&rna_PointCacheItem_frame_step, (PropertyRNA *)&rna_PointCacheItem_frame_start,
	-1, "frame_end", 3, 1, 0, 4, 0, "End",
	"Frame on which the simulation stops",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, endframe), 0, NULL},
	PointCacheItem_frame_end_get, PointCacheItem_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 1048574, 1, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_PointCacheItem_frame_step = {
	{(PropertyRNA *)&rna_PointCacheItem_index, (PropertyRNA *)&rna_PointCacheItem_frame_end,
	-1, "frame_step", 3, 1, 0, 4, 0, "Cache Step",
	"Number of frames between cached frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, step), 0, NULL},
	PointCacheItem_frame_step_get, PointCacheItem_frame_step_set, NULL, NULL, rna_PointCache_frame_step_range, NULL, NULL, NULL, NULL, NULL,
	0, 1, 20, 1, 20, 1, 0, NULL
};

IntPropertyRNA rna_PointCacheItem_index = {
	{(PropertyRNA *)&rna_PointCacheItem_compression, (PropertyRNA *)&rna_PointCacheItem_frame_step,
	-1, "index", 3, 1, 0, 4, 0, "Cache Index",
	"Index number of cache files",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, index), 0, NULL},
	PointCacheItem_index_get, PointCacheItem_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, 100, -1, 100, 1, 0, NULL
};

static const EnumPropertyItem rna_PointCacheItem_compression_items[4] = {
	{0, "NO", 0, "None", "No compression"},
	{1, "LIGHT", 0, "Lite", "Fast but not so effective compression"},
	{2, "HEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointCacheItem_compression = {
	{(PropertyRNA *)&rna_PointCacheItem_is_baked, (PropertyRNA *)&rna_PointCacheItem_index,
	-1, "compression", 3, 1, 0, 4, 0, "Cache Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PointCache, compression), 1, NULL},
	PointCacheItem_compression_get, PointCacheItem_compression_set, NULL, NULL, NULL, rna_PointCacheItem_compression_items, 3, 0
};

BoolPropertyRNA rna_PointCacheItem_is_baked = {
	{(PropertyRNA *)&rna_PointCacheItem_is_baking, (PropertyRNA *)&rna_PointCacheItem_compression,
	-1, "is_baked", 2, 1, 0, 0, 0, "",
	"The cache is baked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_is_baked_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCacheItem_is_baking = {
	{(PropertyRNA *)&rna_PointCacheItem_use_disk_cache, (PropertyRNA *)&rna_PointCacheItem_is_baked,
	-1, "is_baking", 2, 1, 0, 0, 0, "",
	"The cache is being baked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_is_baking_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCacheItem_use_disk_cache = {
	{(PropertyRNA *)&rna_PointCacheItem_is_outdated, (PropertyRNA *)&rna_PointCacheItem_is_baking,
	-1, "use_disk_cache", 3, 1, 0, 0, 0, "Disk Cache",
	"Save cache files to disk (.blend file must be saved first)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_toggle_disk_cache, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Cache_use_disk_cache_override_apply,
	0, -1, NULL},
	PointCacheItem_use_disk_cache_get, PointCacheItem_use_disk_cache_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCacheItem_is_outdated = {
	{(PropertyRNA *)&rna_PointCacheItem_is_frame_skip, (PropertyRNA *)&rna_PointCacheItem_use_disk_cache,
	-1, "is_outdated", 2, 1, 0, 0, 0, "Cache Is Outdated",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_is_outdated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCacheItem_is_frame_skip = {
	{(PropertyRNA *)&rna_PointCacheItem_name, (PropertyRNA *)&rna_PointCacheItem_is_outdated,
	-1, "is_frame_skip", 2, 1, 0, 0, 0, "",
	"Some frames were skipped while baking/saving that cache",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_is_frame_skip_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_PointCacheItem_name = {
	{(PropertyRNA *)&rna_PointCacheItem_filepath, (PropertyRNA *)&rna_PointCacheItem_is_frame_skip,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"Cache name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_name_get, PointCacheItem_name_length, PointCacheItem_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_PointCacheItem_filepath = {
	{(PropertyRNA *)&rna_PointCacheItem_info, (PropertyRNA *)&rna_PointCacheItem_name,
	-1, "filepath", 262145, 1, 0, 0, 0, "File Path",
	"Cache file path",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_filepath_get, PointCacheItem_filepath_length, PointCacheItem_filepath_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

StringPropertyRNA rna_PointCacheItem_info = {
	{(PropertyRNA *)&rna_PointCacheItem_use_external, (PropertyRNA *)&rna_PointCacheItem_filepath,
	-1, "info", 262144, 3, 0, 0, 0, "Cache Info",
	"Info on current cache status",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_info_get, PointCacheItem_info_length, NULL, NULL, NULL, NULL, NULL, 0, 128, ""
};

BoolPropertyRNA rna_PointCacheItem_use_external = {
	{(PropertyRNA *)&rna_PointCacheItem_use_library_path, (PropertyRNA *)&rna_PointCacheItem_info,
	-1, "use_external", 3, 1, 0, 0, 0, "External",
	"Read cache from an external location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_use_external_get, PointCacheItem_use_external_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PointCacheItem_use_library_path = {
	{NULL, (PropertyRNA *)&rna_PointCacheItem_use_external,
	-1, "use_library_path", 3, 1, 0, 0, 0, "Library Path",
	"Use this file\'s path for the disk cache when library linked into another file (for local bakes per scene file, disable this option)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PointCacheItem_use_library_path_get, PointCacheItem_use_library_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_PointCacheItem = {
	{(ContainerRNA *)&RNA_CollisionSettings, (ContainerRNA *)&RNA_PointCaches,
	NULL,
	{(PropertyRNA *)&rna_PointCacheItem_rna_properties, (PropertyRNA *)&rna_PointCacheItem_use_library_path}},
	"PointCacheItem", NULL, NULL, 516, NULL, "Point Cache",
	"Point cache for physics simulations",
	"*", 89,
	(PropertyRNA *)&rna_PointCacheItem_name, (PropertyRNA *)&rna_PointCacheItem_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_PointCache_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Collision Settings */
CollectionPropertyRNA rna_CollisionSettings_rna_properties = {
	{(PropertyRNA *)&rna_CollisionSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollisionSettings_rna_properties_begin, CollisionSettings_rna_properties_next, CollisionSettings_rna_properties_end, CollisionSettings_rna_properties_get, NULL, NULL, CollisionSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CollisionSettings_rna_type = {
	{(PropertyRNA *)&rna_CollisionSettings_use, (PropertyRNA *)&rna_CollisionSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollisionSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_CollisionSettings_use = {
	{(PropertyRNA *)&rna_CollisionSettings_damping_factor, (PropertyRNA *)&rna_CollisionSettings_rna_type,
	-1, "use", 3, 1, 0, 0, 0, "Enabled",
	"Enable this objects as a collider for physics systems",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollisionSettings_use_get, CollisionSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CollisionSettings_damping_factor = {
	{(PropertyRNA *)&rna_CollisionSettings_damping_random, (PropertyRNA *)&rna_CollisionSettings_use,
	-1, "damping_factor", 3, 1, 0, 4, 0, "Damping Factor",
	"Amount of damping during particle collision",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_damp), 5, NULL},
	CollisionSettings_damping_factor_get, CollisionSettings_damping_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_damping_random = {
	{(PropertyRNA *)&rna_CollisionSettings_friction_factor, (PropertyRNA *)&rna_CollisionSettings_damping_factor,
	-1, "damping_random", 3, 1, 0, 4, 0, "Random Damping",
	"Random variation of damping",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_rdamp), 5, NULL},
	CollisionSettings_damping_random_get, CollisionSettings_damping_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_friction_factor = {
	{(PropertyRNA *)&rna_CollisionSettings_friction_random, (PropertyRNA *)&rna_CollisionSettings_damping_random,
	-1, "friction_factor", 3, 1, 0, 4, 0, "Friction Factor",
	"Amount of friction during particle collision",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_frict), 5, NULL},
	CollisionSettings_friction_factor_get, CollisionSettings_friction_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_friction_random = {
	{(PropertyRNA *)&rna_CollisionSettings_permeability, (PropertyRNA *)&rna_CollisionSettings_friction_factor,
	-1, "friction_random", 3, 1, 0, 4, 0, "Random Friction",
	"Random variation of friction",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_rfrict), 5, NULL},
	CollisionSettings_friction_random_get, CollisionSettings_friction_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_permeability = {
	{(PropertyRNA *)&rna_CollisionSettings_use_particle_kill, (PropertyRNA *)&rna_CollisionSettings_friction_random,
	-1, "permeability", 3, 1, 0, 4, 0, "Permeability",
	"Chance that the particle will pass through the mesh",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_perm), 5, NULL},
	CollisionSettings_permeability_get, CollisionSettings_permeability_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_CollisionSettings_use_particle_kill = {
	{(PropertyRNA *)&rna_CollisionSettings_stickiness, (PropertyRNA *)&rna_CollisionSettings_permeability,
	-1, "use_particle_kill", 3, 1, 0, 0, 0, "Kill Particles",
	"Kill collided particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollisionSettings_use_particle_kill_get, CollisionSettings_use_particle_kill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CollisionSettings_stickiness = {
	{(PropertyRNA *)&rna_CollisionSettings_thickness_inner, (PropertyRNA *)&rna_CollisionSettings_use_particle_kill,
	-1, "stickiness", 3, 1, 0, 4, 0, "Stickiness",
	"Amount of stickiness to surface collision",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_stickness), 5, NULL},
	CollisionSettings_stickiness_get, CollisionSettings_stickiness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_thickness_inner = {
	{(PropertyRNA *)&rna_CollisionSettings_thickness_outer, (PropertyRNA *)&rna_CollisionSettings_stickiness,
	-1, "thickness_inner", 3, 1, 0, 4, 0, "Inner Thickness",
	"Inner face thickness (only used by softbodies)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_sbift), 5, NULL},
	CollisionSettings_thickness_inner_get, CollisionSettings_thickness_inner_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_thickness_outer = {
	{(PropertyRNA *)&rna_CollisionSettings_damping, (PropertyRNA *)&rna_CollisionSettings_thickness_inner,
	-1, "thickness_outer", 3, 1, 0, 4, 0, "Outer Thickness",
	"Outer face thickness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_sboft), 5, NULL},
	CollisionSettings_thickness_outer_get, CollisionSettings_thickness_outer_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_damping = {
	{(PropertyRNA *)&rna_CollisionSettings_absorption, (PropertyRNA *)&rna_CollisionSettings_thickness_outer,
	-1, "damping", 3, 1, 0, 4, 0, "Damping",
	"Amount of damping during collision",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_sbdamp), 5, NULL},
	CollisionSettings_damping_get, CollisionSettings_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_absorption = {
	{(PropertyRNA *)&rna_CollisionSettings_cloth_friction, (PropertyRNA *)&rna_CollisionSettings_damping,
	-1, "absorption", 3, 1, 0, 4, 0, "Absorption",
	"How much of effector force gets lost during collision with this object (in percent)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, absorption), 5, NULL},
	CollisionSettings_absorption_get, CollisionSettings_absorption_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_cloth_friction = {
	{(PropertyRNA *)&rna_CollisionSettings_use_culling, (PropertyRNA *)&rna_CollisionSettings_absorption,
	-1, "cloth_friction", 3, 1, 0, 4, 0, "Friction",
	"Friction for cloth collisions",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, pdef_cfrict), 5, NULL},
	CollisionSettings_cloth_friction_get, CollisionSettings_cloth_friction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_CollisionSettings_use_culling = {
	{(PropertyRNA *)&rna_CollisionSettings_use_normal, (PropertyRNA *)&rna_CollisionSettings_cloth_friction,
	-1, "use_culling", 3, 1, 0, 0, 0, "Single Sided",
	"Cloth collision acts with respect to the collider normals (improves penetration recovery)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollisionSettings_use_culling_get, CollisionSettings_use_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CollisionSettings_use_normal = {
	{NULL, (PropertyRNA *)&rna_CollisionSettings_use_culling,
	-1, "use_normal", 3, 1, 0, 0, 0, "Override Normals",
	"Cloth collision impulses act in the direction of the collider normals (more reliable in some cases)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollisionSettings_use_normal_get, CollisionSettings_use_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_CollisionSettings = {
	{(ContainerRNA *)&RNA_EffectorWeights, (ContainerRNA *)&RNA_PointCacheItem,
	NULL,
	{(PropertyRNA *)&rna_CollisionSettings_rna_properties, (PropertyRNA *)&rna_CollisionSettings_use_normal}},
	"CollisionSettings", NULL, NULL, 516, NULL, "Collision Settings",
	"Collision settings for object in physics simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CollisionSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_CollisionSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Effector Weights */
CollectionPropertyRNA rna_EffectorWeights_rna_properties = {
	{(PropertyRNA *)&rna_EffectorWeights_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EffectorWeights_rna_properties_begin, EffectorWeights_rna_properties_next, EffectorWeights_rna_properties_end, EffectorWeights_rna_properties_get, NULL, NULL, EffectorWeights_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_EffectorWeights_rna_type = {
	{(PropertyRNA *)&rna_EffectorWeights_apply_to_hair_growing, (PropertyRNA *)&rna_EffectorWeights_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EffectorWeights_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_EffectorWeights_apply_to_hair_growing = {
	{(PropertyRNA *)&rna_EffectorWeights_collection, (PropertyRNA *)&rna_EffectorWeights_rna_type,
	-1, "apply_to_hair_growing", 3, 1, 0, 0, 0, "Use For Growing Hair",
	"Use force fields when growing hair",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EffectorWeights_apply_to_hair_growing_get, EffectorWeights_apply_to_hair_growing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_EffectorWeights_collection = {
	{(PropertyRNA *)&rna_EffectorWeights_gravity, (PropertyRNA *)&rna_EffectorWeights_apply_to_hair_growing,
	-1, "collection", 8388801, 1, 0, 0, 0, "Effector Collection",
	"Limit effectors to this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EffectorWeights_collection_get, EffectorWeights_collection_set, NULL, NULL,&RNA_Collection
};

FloatPropertyRNA rna_EffectorWeights_gravity = {
	{(PropertyRNA *)&rna_EffectorWeights_all, (PropertyRNA *)&rna_EffectorWeights_collection,
	-1, "gravity", 3, 1, 0, 4, 0, "Gravity",
	"Global gravity weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, global_gravity), 5, NULL},
	EffectorWeights_gravity_get, EffectorWeights_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_all = {
	{(PropertyRNA *)&rna_EffectorWeights_force, (PropertyRNA *)&rna_EffectorWeights_gravity,
	-1, "all", 3, 1, 0, 4, 0, "All",
	"All effector\'s weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[0]), 5, NULL},
	EffectorWeights_all_get, EffectorWeights_all_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_force = {
	{(PropertyRNA *)&rna_EffectorWeights_vortex, (PropertyRNA *)&rna_EffectorWeights_all,
	-1, "force", 3, 1, 0, 4, 0, "Force",
	"Force effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[1]), 5, NULL},
	EffectorWeights_force_get, EffectorWeights_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_vortex = {
	{(PropertyRNA *)&rna_EffectorWeights_magnetic, (PropertyRNA *)&rna_EffectorWeights_force,
	-1, "vortex", 3, 1, 0, 4, 0, "Vortex",
	"Vortex effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[2]), 5, NULL},
	EffectorWeights_vortex_get, EffectorWeights_vortex_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_magnetic = {
	{(PropertyRNA *)&rna_EffectorWeights_wind, (PropertyRNA *)&rna_EffectorWeights_vortex,
	-1, "magnetic", 3, 1, 0, 4, 0, "Magnetic",
	"Magnetic effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[3]), 5, NULL},
	EffectorWeights_magnetic_get, EffectorWeights_magnetic_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_wind = {
	{(PropertyRNA *)&rna_EffectorWeights_curve_guide, (PropertyRNA *)&rna_EffectorWeights_magnetic,
	-1, "wind", 3, 1, 0, 4, 0, "Wind",
	"Wind effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[4]), 5, NULL},
	EffectorWeights_wind_get, EffectorWeights_wind_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_curve_guide = {
	{(PropertyRNA *)&rna_EffectorWeights_texture, (PropertyRNA *)&rna_EffectorWeights_wind,
	-1, "curve_guide", 3, 1, 0, 4, 0, "Curve Guide",
	"Curve guide effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[5]), 5, NULL},
	EffectorWeights_curve_guide_get, EffectorWeights_curve_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_texture = {
	{(PropertyRNA *)&rna_EffectorWeights_harmonic, (PropertyRNA *)&rna_EffectorWeights_curve_guide,
	-1, "texture", 3, 1, 0, 4, 0, "Texture",
	"Texture effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[6]), 5, NULL},
	EffectorWeights_texture_get, EffectorWeights_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_harmonic = {
	{(PropertyRNA *)&rna_EffectorWeights_charge, (PropertyRNA *)&rna_EffectorWeights_texture,
	-1, "harmonic", 3, 1, 0, 4, 0, "Harmonic",
	"Harmonic effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[7]), 5, NULL},
	EffectorWeights_harmonic_get, EffectorWeights_harmonic_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_charge = {
	{(PropertyRNA *)&rna_EffectorWeights_lennardjones, (PropertyRNA *)&rna_EffectorWeights_harmonic,
	-1, "charge", 3, 1, 0, 4, 0, "Charge",
	"Charge effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[8]), 5, NULL},
	EffectorWeights_charge_get, EffectorWeights_charge_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_lennardjones = {
	{(PropertyRNA *)&rna_EffectorWeights_boid, (PropertyRNA *)&rna_EffectorWeights_charge,
	-1, "lennardjones", 3, 1, 0, 4, 0, "Lennard-Jones",
	"Lennard-Jones effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[9]), 5, NULL},
	EffectorWeights_lennardjones_get, EffectorWeights_lennardjones_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_boid = {
	{(PropertyRNA *)&rna_EffectorWeights_turbulence, (PropertyRNA *)&rna_EffectorWeights_lennardjones,
	-1, "boid", 3, 1, 0, 4, 0, "Boid",
	"Boid effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[10]), 5, NULL},
	EffectorWeights_boid_get, EffectorWeights_boid_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_turbulence = {
	{(PropertyRNA *)&rna_EffectorWeights_drag, (PropertyRNA *)&rna_EffectorWeights_boid,
	-1, "turbulence", 3, 1, 0, 4, 0, "Turbulence",
	"Turbulence effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[11]), 5, NULL},
	EffectorWeights_turbulence_get, EffectorWeights_turbulence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_drag = {
	{(PropertyRNA *)&rna_EffectorWeights_smokeflow, (PropertyRNA *)&rna_EffectorWeights_turbulence,
	-1, "drag", 3, 1, 0, 4, 0, "Drag",
	"Drag effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[12]), 5, NULL},
	EffectorWeights_drag_get, EffectorWeights_drag_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_smokeflow = {
	{NULL, (PropertyRNA *)&rna_EffectorWeights_drag,
	-1, "smokeflow", 3, 1, 0, 4, 0, "Fluid Flow",
	"Fluid Flow effector weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(EffectorWeights, weight[13]), 5, NULL},
	EffectorWeights_smokeflow_get, EffectorWeights_smokeflow_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

StructRNA RNA_EffectorWeights = {
	{(ContainerRNA *)&RNA_FieldSettings, (ContainerRNA *)&RNA_CollisionSettings,
	NULL,
	{(PropertyRNA *)&rna_EffectorWeights_rna_properties, (PropertyRNA *)&rna_EffectorWeights_smokeflow}},
	"EffectorWeights", NULL, NULL, 516, NULL, "Effector Weights",
	"Effector weights for physics simulation",
	"*", 89,
	NULL, (PropertyRNA *)&rna_EffectorWeights_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_EffectorWeight_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Field Settings */
CollectionPropertyRNA rna_FieldSettings_rna_properties = {
	{(PropertyRNA *)&rna_FieldSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_rna_properties_begin, FieldSettings_rna_properties_next, FieldSettings_rna_properties_end, FieldSettings_rna_properties_get, NULL, NULL, FieldSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FieldSettings_rna_type = {
	{(PropertyRNA *)&rna_FieldSettings_type, (PropertyRNA *)&rna_FieldSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_FieldSettings_type_items[15] = {
	{0, "NONE", 101, "None", ""},
	{10, "BOID", 347, "Boid", "Create a force that acts as a boid\'s predators or target"},
	{8, "CHARGE", 343, "Charge", "Spherical forcefield based on the charge of particles, only influences other charge force fields"},
	{5, "GUIDE", 346, "Curve Guide", "Create a force along a curve object"},
	{12, "DRAG", 349, "Drag", "Create a force that dampens motion"},
	{13, "FLUID_FLOW", 350, "Fluid Flow", "Create a force based on fluid simulation velocities"},
	{1, "FORCE", 338, "Force", "Radial field toward the center of object"},
	{7, "HARMONIC", 342, "Harmonic", "The source of this force field is the zero point of a harmonic oscillator"},
	{9, "LENNARDJ", 344, "Lennard-Jones", "Forcefield based on the Lennard-Jones potential"},
	{3, "MAGNET", 341, "Magnetic", "Forcefield depends on the speed of the particles"},
	{6, "TEXTURE", 345, "Texture", "Force field based on a texture"},
	{11, "TURBULENCE", 348, "Turbulence", "Create turbulence with a noise field"},
	{2, "VORTEX", 340, "Vortex", "Spiraling force that twists the force object\'s local Z axis"},
	{4, "WIND", 339, "Wind", "Constant force along the force object\'s local Z axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_type = {
	{(PropertyRNA *)&rna_FieldSettings_shape, (PropertyRNA *)&rna_FieldSettings_rna_type,
	-1, "type", 3, 1, 0, 0, 0, "Type",
	"Type of field",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_type_get, FieldSettings_type_set, NULL, NULL, NULL, rna_FieldSettings_type_items, 14, 0
};

static const EnumPropertyItem rna_FieldSettings_shape_items[6] = {
	{0, "POINT", 0, "Point", "Field originates from the object center"},
	{4, "LINE", 0, "Line", "Field originates from the local Z axis of the object"},
	{1, "PLANE", 0, "Plane", "Field originates from the local XY plane of the object"},
	{2, "SURFACE", 0, "Surface", "Field originates from the surface of the object"},
	{3, "POINTS", 0, "Every Point", "Field originates from all of the vertices of the object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_shape = {
	{(PropertyRNA *)&rna_FieldSettings_falloff_type, (PropertyRNA *)&rna_FieldSettings_type,
	-1, "shape", 3, 1, 0, 4, 0, "Shape",
	"Which direction is used to calculate the effector force",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_shape_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, shape), 1, NULL},
	FieldSettings_shape_get, FieldSettings_shape_set, rna_Effector_shape_itemf, NULL, NULL, rna_FieldSettings_shape_items, 5, 0
};

static const EnumPropertyItem rna_FieldSettings_falloff_type_items[4] = {
	{2, "CONE", 0, "Cone", ""},
	{0, "SPHERE", 0, "Sphere", ""},
	{1, "TUBE", 0, "Tube", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_falloff_type = {
	{(PropertyRNA *)&rna_FieldSettings_texture_mode, (PropertyRNA *)&rna_FieldSettings_shape,
	-1, "falloff_type", 3, 1, 0, 4, 0, "Fall-Off",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, falloff), 1, NULL},
	FieldSettings_falloff_type_get, FieldSettings_falloff_type_set, NULL, NULL, NULL, rna_FieldSettings_falloff_type_items, 3, 0
};

static const EnumPropertyItem rna_FieldSettings_texture_mode_items[4] = {
	{2, "CURL", 0, "Curl", ""},
	{1, "GRADIENT", 0, "Gradient", ""},
	{0, "RGB", 0, "RGB", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_texture_mode = {
	{(PropertyRNA *)&rna_FieldSettings_z_direction, (PropertyRNA *)&rna_FieldSettings_falloff_type,
	-1, "texture_mode", 3, 1, 0, 4, 0, "Texture Mode",
	"How the texture effect is calculated (RGB and Curl need a RGB texture, else Gradient will be used instead)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, tex_mode), 1, NULL},
	FieldSettings_texture_mode_get, FieldSettings_texture_mode_set, NULL, NULL, NULL, rna_FieldSettings_texture_mode_items, 3, 0
};

static const EnumPropertyItem rna_FieldSettings_z_direction_items[4] = {
	{1, "POSITIVE", 0, "+Z", ""},
	{2, "NEGATIVE", 0, "-Z", ""},
	{0, "BOTH", 0, "Both Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_z_direction = {
	{(PropertyRNA *)&rna_FieldSettings_strength, (PropertyRNA *)&rna_FieldSettings_texture_mode,
	-1, "z_direction", 3, 1, 0, 4, 0, "Z Direction",
	"Effect in full or only positive/negative Z direction",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, zdir), 1, NULL},
	FieldSettings_z_direction_get, FieldSettings_z_direction_set, NULL, NULL, NULL, rna_FieldSettings_z_direction_items, 3, 0
};

FloatPropertyRNA rna_FieldSettings_strength = {
	{(PropertyRNA *)&rna_FieldSettings_linear_drag, (PropertyRNA *)&rna_FieldSettings_z_direction,
	-1, "strength", 3, 1, 0, 4, 0, "Strength",
	"Strength of force field",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_strength), 5, NULL},
	FieldSettings_strength_get, FieldSettings_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_linear_drag = {
	{(PropertyRNA *)&rna_FieldSettings_harmonic_damping, (PropertyRNA *)&rna_FieldSettings_strength,
	-1, "linear_drag", 3, 1, 0, 4, 0, "Linear Drag",
	"Drag component proportional to velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_strength), 5, NULL},
	FieldSettings_linear_drag_get, FieldSettings_linear_drag_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_harmonic_damping = {
	{(PropertyRNA *)&rna_FieldSettings_quadratic_drag, (PropertyRNA *)&rna_FieldSettings_linear_drag,
	-1, "harmonic_damping", 3, 1, 0, 4, 0, "Harmonic Damping",
	"Damping of the harmonic force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_damp), 5, NULL},
	FieldSettings_harmonic_damping_get, FieldSettings_harmonic_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_quadratic_drag = {
	{(PropertyRNA *)&rna_FieldSettings_flow, (PropertyRNA *)&rna_FieldSettings_harmonic_damping,
	-1, "quadratic_drag", 3, 1, 0, 4, 0, "Quadratic Drag",
	"Drag component proportional to the square of velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_damp), 5, NULL},
	FieldSettings_quadratic_drag_get, FieldSettings_quadratic_drag_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_flow = {
	{(PropertyRNA *)&rna_FieldSettings_wind_factor, (PropertyRNA *)&rna_FieldSettings_quadratic_drag,
	-1, "flow", 3, 1, 0, 4, 0, "Flow",
	"Convert effector force into air flow velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_flow), 5, NULL},
	FieldSettings_flow_get, FieldSettings_flow_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_wind_factor = {
	{(PropertyRNA *)&rna_FieldSettings_inflow, (PropertyRNA *)&rna_FieldSettings_flow,
	-1, "wind_factor", 3, 1, 0, 4, 0, "Wind Factor",
	"How much the force is reduced when acting parallel to a surface, e.g. cloth",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_wind_factor), 5, NULL},
	FieldSettings_wind_factor_get, FieldSettings_wind_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_inflow = {
	{(PropertyRNA *)&rna_FieldSettings_size, (PropertyRNA *)&rna_FieldSettings_wind_factor,
	-1, "inflow", 3, 1, 0, 4, 0, "Inflow",
	"Inwards component of the vortex force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_flow), 5, NULL},
	FieldSettings_inflow_get, FieldSettings_inflow_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_size = {
	{(PropertyRNA *)&rna_FieldSettings_rest_length, (PropertyRNA *)&rna_FieldSettings_inflow,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Size of the turbulence",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_size), 5, NULL},
	FieldSettings_size_get, FieldSettings_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_rest_length = {
	{(PropertyRNA *)&rna_FieldSettings_falloff_power, (PropertyRNA *)&rna_FieldSettings_size,
	-1, "rest_length", 3, 1, 0, 4, 0, "Rest Length",
	"Rest length of the harmonic force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_size), 5, NULL},
	FieldSettings_rest_length_get, FieldSettings_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_falloff_power = {
	{(PropertyRNA *)&rna_FieldSettings_distance_min, (PropertyRNA *)&rna_FieldSettings_rest_length,
	-1, "falloff_power", 3, 1, 0, 4, 0, "Falloff Power",
	"How quickly strength falls off with distance from the force field",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_power), 5, NULL},
	FieldSettings_falloff_power_get, FieldSettings_falloff_power_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_distance_min = {
	{(PropertyRNA *)&rna_FieldSettings_distance_max, (PropertyRNA *)&rna_FieldSettings_falloff_power,
	-1, "distance_min", 3, 1, 0, 4, 0, "Minimum Distance",
	"Minimum distance for the field\'s fall-off",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, mindist), 5, NULL},
	FieldSettings_distance_min_get, FieldSettings_distance_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_distance_max = {
	{(PropertyRNA *)&rna_FieldSettings_radial_min, (PropertyRNA *)&rna_FieldSettings_distance_min,
	-1, "distance_max", 3, 1, 0, 4, 0, "Maximum Distance",
	"Maximum distance for the field to work",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, maxdist), 5, NULL},
	FieldSettings_distance_max_get, FieldSettings_distance_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_radial_min = {
	{(PropertyRNA *)&rna_FieldSettings_radial_max, (PropertyRNA *)&rna_FieldSettings_distance_max,
	-1, "radial_min", 3, 1, 0, 4, 0, "Minimum Radial Distance",
	"Minimum radial distance for the field\'s fall-off",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, minrad), 5, NULL},
	FieldSettings_radial_min_get, FieldSettings_radial_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_radial_max = {
	{(PropertyRNA *)&rna_FieldSettings_radial_falloff, (PropertyRNA *)&rna_FieldSettings_radial_min,
	-1, "radial_max", 3, 1, 0, 4, 0, "Maximum Radial Distance",
	"Maximum radial distance for the field to work",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, maxrad), 5, NULL},
	FieldSettings_radial_max_get, FieldSettings_radial_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_radial_falloff = {
	{(PropertyRNA *)&rna_FieldSettings_texture_nabla, (PropertyRNA *)&rna_FieldSettings_radial_max,
	-1, "radial_falloff", 3, 1, 0, 4, 0, "Radial Falloff Power",
	"Radial falloff power (real gravitational falloff = 2)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_power_r), 5, NULL},
	FieldSettings_radial_falloff_get, FieldSettings_radial_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_texture_nabla = {
	{(PropertyRNA *)&rna_FieldSettings_noise, (PropertyRNA *)&rna_FieldSettings_radial_falloff,
	-1, "texture_nabla", 3, 1, 0, 4, 0, "Nabla",
	"Defines size of derivative offset used for calculating gradient and curl",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, tex_nabla), 5, NULL},
	FieldSettings_texture_nabla_get, FieldSettings_texture_nabla_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_noise = {
	{(PropertyRNA *)&rna_FieldSettings_seed, (PropertyRNA *)&rna_FieldSettings_texture_nabla,
	-1, "noise", 3, 1, 0, 4, 0, "Noise",
	"Amount of noise for the force strength",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_noise), 5, NULL},
	FieldSettings_noise_get, FieldSettings_noise_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_FieldSettings_seed = {
	{(PropertyRNA *)&rna_FieldSettings_use_min_distance, (PropertyRNA *)&rna_FieldSettings_noise,
	-1, "seed", 3, 1, 0, 4, 0, "Seed",
	"Seed of the noise",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, seed), 0, NULL},
	FieldSettings_seed_get, FieldSettings_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 128, 1, 128, 1, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_min_distance = {
	{(PropertyRNA *)&rna_FieldSettings_use_max_distance, (PropertyRNA *)&rna_FieldSettings_seed,
	-1, "use_min_distance", 3, 1, 0, 0, 0, "Use Min",
	"Use a minimum distance for the field\'s fall-off",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_min_distance_get, FieldSettings_use_min_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_max_distance = {
	{(PropertyRNA *)&rna_FieldSettings_use_radial_min, (PropertyRNA *)&rna_FieldSettings_use_min_distance,
	-1, "use_max_distance", 3, 1, 0, 0, 0, "Use Max",
	"Use a maximum distance for the field to work",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_max_distance_get, FieldSettings_use_max_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_radial_min = {
	{(PropertyRNA *)&rna_FieldSettings_use_radial_max, (PropertyRNA *)&rna_FieldSettings_use_max_distance,
	-1, "use_radial_min", 3, 1, 0, 0, 0, "Use Min",
	"Use a minimum radial distance for the field\'s fall-off",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_radial_min_get, FieldSettings_use_radial_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_radial_max = {
	{(PropertyRNA *)&rna_FieldSettings_use_object_coords, (PropertyRNA *)&rna_FieldSettings_use_radial_min,
	-1, "use_radial_max", 3, 1, 0, 0, 0, "Use Max",
	"Use a maximum radial distance for the field to work",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_radial_max_get, FieldSettings_use_radial_max_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_object_coords = {
	{(PropertyRNA *)&rna_FieldSettings_use_global_coords, (PropertyRNA *)&rna_FieldSettings_use_radial_max,
	-1, "use_object_coords", 3, 1, 0, 0, 0, "Use Coordinates",
	"Use object/global coordinates for texture",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_object_coords_get, FieldSettings_use_object_coords_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_global_coords = {
	{(PropertyRNA *)&rna_FieldSettings_use_2d_force, (PropertyRNA *)&rna_FieldSettings_use_object_coords,
	-1, "use_global_coords", 3, 1, 0, 0, 0, "Use Global Coordinates",
	"Use effector/global coordinates for turbulence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_global_coords_get, FieldSettings_use_global_coords_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_2d_force = {
	{(PropertyRNA *)&rna_FieldSettings_use_root_coords, (PropertyRNA *)&rna_FieldSettings_use_global_coords,
	-1, "use_2d_force", 3, 1, 0, 0, 0, "2D",
	"Apply force only in 2D",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_2d_force_get, FieldSettings_use_2d_force_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_root_coords = {
	{(PropertyRNA *)&rna_FieldSettings_apply_to_location, (PropertyRNA *)&rna_FieldSettings_use_2d_force,
	-1, "use_root_coords", 3, 1, 0, 0, 0, "Root Texture Coordinates",
	"Texture coordinates from root particle locations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_root_coords_get, FieldSettings_use_root_coords_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_apply_to_location = {
	{(PropertyRNA *)&rna_FieldSettings_apply_to_rotation, (PropertyRNA *)&rna_FieldSettings_use_root_coords,
	-1, "apply_to_location", 3, 1, 0, 0, 0, "Location",
	"Affect particle\'s location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_apply_to_location_get, FieldSettings_apply_to_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_apply_to_rotation = {
	{(PropertyRNA *)&rna_FieldSettings_use_absorption, (PropertyRNA *)&rna_FieldSettings_apply_to_location,
	-1, "apply_to_rotation", 3, 1, 0, 0, 0, "Rotation",
	"Affect particle\'s dynamic rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_apply_to_rotation_get, FieldSettings_apply_to_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_absorption = {
	{(PropertyRNA *)&rna_FieldSettings_use_multiple_springs, (PropertyRNA *)&rna_FieldSettings_apply_to_rotation,
	-1, "use_absorption", 3, 1, 0, 0, 0, "Absorption",
	"Force gets absorbed by collision objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_absorption_get, FieldSettings_use_absorption_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_multiple_springs = {
	{(PropertyRNA *)&rna_FieldSettings_use_smoke_density, (PropertyRNA *)&rna_FieldSettings_use_absorption,
	-1, "use_multiple_springs", 3, 1, 0, 0, 0, "Multiple Springs",
	"Every point is effected by multiple springs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_multiple_springs_get, FieldSettings_use_multiple_springs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_smoke_density = {
	{(PropertyRNA *)&rna_FieldSettings_use_gravity_falloff, (PropertyRNA *)&rna_FieldSettings_use_multiple_springs,
	-1, "use_smoke_density", 3, 1, 0, 0, 0, "Apply Density",
	"Adjust force strength based on smoke density",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_smoke_density_get, FieldSettings_use_smoke_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_gravity_falloff = {
	{(PropertyRNA *)&rna_FieldSettings_texture, (PropertyRNA *)&rna_FieldSettings_use_smoke_density,
	-1, "use_gravity_falloff", 3, 1, 0, 0, 0, "Gravity Falloff",
	"Multiply force by 1/distance²",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_gravity_falloff_get, FieldSettings_use_gravity_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_FieldSettings_texture = {
	{(PropertyRNA *)&rna_FieldSettings_source_object, (PropertyRNA *)&rna_FieldSettings_use_gravity_falloff,
	-1, "texture", 8388801, 1, 0, 0, 0, "Texture",
	"Texture to use as force",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_texture_get, FieldSettings_texture_set, NULL, NULL,&RNA_Texture
};

PointerPropertyRNA rna_FieldSettings_source_object = {
	{(PropertyRNA *)&rna_FieldSettings_guide_minimum, (PropertyRNA *)&rna_FieldSettings_texture,
	-1, "source_object", 8388737, 1, 0, 0, 0, "Domain Object",
	"Select domain object of the smoke simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_source_object_get, FieldSettings_source_object_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_FieldSettings_guide_minimum = {
	{(PropertyRNA *)&rna_FieldSettings_guide_free, (PropertyRNA *)&rna_FieldSettings_source_object,
	-1, "guide_minimum", 3, 1, 0, 4, 0, "Minimum Distance",
	"The distance from which particles are affected fully",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, f_strength), 5, NULL},
	FieldSettings_guide_minimum_get, FieldSettings_guide_minimum_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_free = {
	{(PropertyRNA *)&rna_FieldSettings_use_guide_path_add, (PropertyRNA *)&rna_FieldSettings_guide_minimum,
	-1, "guide_free", 3, 1, 0, 4, 0, "Free",
	"Guide-free time from particle life\'s end",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, free_end), 5, NULL},
	FieldSettings_guide_free_get, FieldSettings_guide_free_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FieldSettings_use_guide_path_add = {
	{(PropertyRNA *)&rna_FieldSettings_use_guide_path_weight, (PropertyRNA *)&rna_FieldSettings_guide_free,
	-1, "use_guide_path_add", 3, 1, 0, 0, 0, "Additive",
	"Based on distance/falloff it adds a portion of the entire path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_guide_path_add_get, FieldSettings_use_guide_path_add_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FieldSettings_use_guide_path_weight = {
	{(PropertyRNA *)&rna_FieldSettings_guide_clump_amount, (PropertyRNA *)&rna_FieldSettings_use_guide_path_add,
	-1, "use_guide_path_weight", 3, 1, 0, 0, 0, "Weights",
	"Use curve weights to influence the particle influence along the curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FieldSettings_use_guide_path_weight_get, FieldSettings_use_guide_path_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_clump_amount = {
	{(PropertyRNA *)&rna_FieldSettings_guide_clump_shape, (PropertyRNA *)&rna_FieldSettings_use_guide_path_weight,
	-1, "guide_clump_amount", 3, 1, 0, 4, 0, "Amount",
	"Amount of clumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, clump_fac), 5, NULL},
	FieldSettings_guide_clump_amount_get, FieldSettings_guide_clump_amount_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_clump_shape = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_type, (PropertyRNA *)&rna_FieldSettings_guide_clump_amount,
	-1, "guide_clump_shape", 3, 1, 0, 4, 0, "Shape",
	"Shape of clumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, clump_pow), 5, NULL},
	FieldSettings_guide_clump_shape_get, FieldSettings_guide_clump_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_FieldSettings_guide_kink_type_items[8] = {
	{0, "NONE", 0, "None", ""},
	{4, "BRAID", 0, "Braid", ""},
	{1, "CURL", 0, "Curl", ""},
	{2, "RADIAL", 0, "Radial", ""},
	{6, "ROLL", 0, "Roll", ""},
	{5, "ROTATION", 0, "Rotation", ""},
	{3, "WAVE", 0, "Wave", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_guide_kink_type = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_axis, (PropertyRNA *)&rna_FieldSettings_guide_clump_shape,
	-1, "guide_kink_type", 3, 1, 0, 4, 0, "Kink",
	"Type of periodic offset on the curve",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink), 1, NULL},
	FieldSettings_guide_kink_type_get, FieldSettings_guide_kink_type_set, NULL, NULL, NULL, rna_FieldSettings_guide_kink_type_items, 7, 0
};

EnumPropertyRNA rna_FieldSettings_guide_kink_axis = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_frequency, (PropertyRNA *)&rna_FieldSettings_guide_kink_type,
	-1, "guide_kink_axis", 3, 1, 0, 4, 0, "Axis",
	"Which axis to use for offset",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_axis), 1, NULL},
	FieldSettings_guide_kink_axis_get, FieldSettings_guide_kink_axis_set, NULL, NULL, NULL, rna_enum_axis_xyz_items, 3, 0
};

FloatPropertyRNA rna_FieldSettings_guide_kink_frequency = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_shape, (PropertyRNA *)&rna_FieldSettings_guide_kink_axis,
	-1, "guide_kink_frequency", 3, 1, 0, 4, 0, "Frequency",
	"The frequency of the offset (1/total length)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_freq), 5, NULL},
	FieldSettings_guide_kink_frequency_get, FieldSettings_guide_kink_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_kink_shape = {
	{(PropertyRNA *)&rna_FieldSettings_guide_kink_amplitude, (PropertyRNA *)&rna_FieldSettings_guide_kink_frequency,
	-1, "guide_kink_shape", 3, 1, 0, 4, 0, "Shape",
	"Adjust the offset to the beginning/end",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_shape), 5, NULL},
	FieldSettings_guide_kink_shape_get, FieldSettings_guide_kink_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude = {
	{NULL, (PropertyRNA *)&rna_FieldSettings_guide_kink_shape,
	-1, "guide_kink_amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"The amplitude of the offset",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PartDeflect, kink_amp), 5, NULL},
	FieldSettings_guide_kink_amplitude_get, FieldSettings_guide_kink_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FieldSettings = {
	{(ContainerRNA *)&RNA_SoftBodySettings, (ContainerRNA *)&RNA_EffectorWeights,
	NULL,
	{(PropertyRNA *)&rna_FieldSettings_rna_properties, (PropertyRNA *)&rna_FieldSettings_guide_kink_amplitude}},
	"FieldSettings", NULL, NULL, 516, NULL, "Field Settings",
	"Field settings for an object in physics simulation",
	"*", 89,
	NULL, (PropertyRNA *)&rna_FieldSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_FieldSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Soft Body Settings */
CollectionPropertyRNA rna_SoftBodySettings_rna_properties = {
	{(PropertyRNA *)&rna_SoftBodySettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_rna_properties_begin, SoftBodySettings_rna_properties_next, SoftBodySettings_rna_properties_end, SoftBodySettings_rna_properties_get, NULL, NULL, SoftBodySettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SoftBodySettings_rna_type = {
	{(PropertyRNA *)&rna_SoftBodySettings_friction, (PropertyRNA *)&rna_SoftBodySettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_SoftBodySettings_friction = {
	{(PropertyRNA *)&rna_SoftBodySettings_mass, (PropertyRNA *)&rna_SoftBodySettings_rna_type,
	-1, "friction", 3, 0, 0, 4, 0, "Friction",
	"General media friction for point movements",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, mediafrict), 5, NULL},
	SoftBodySettings_friction_get, SoftBodySettings_friction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_mass = {
	{(PropertyRNA *)&rna_SoftBodySettings_vertex_group_mass, (PropertyRNA *)&rna_SoftBodySettings_friction,
	-1, "mass", 3, 0, 0, 4, 0, "Mass",
	"General Mass value",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, nodemass), 5, NULL},
	SoftBodySettings_mass_get, SoftBodySettings_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 50000.0f, 0.0f, 50000.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_mass = {
	{(PropertyRNA *)&rna_SoftBodySettings_gravity, (PropertyRNA *)&rna_SoftBodySettings_mass,
	-1, "vertex_group_mass", 262145, 0, 0, 0, 0, "Mass Vertex Group",
	"Control point mass values",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_vertex_group_mass_get, SoftBodySettings_vertex_group_mass_length, SoftBodySettings_vertex_group_mass_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

FloatPropertyRNA rna_SoftBodySettings_gravity = {
	{(PropertyRNA *)&rna_SoftBodySettings_speed, (PropertyRNA *)&rna_SoftBodySettings_vertex_group_mass,
	-1, "gravity", 3, 0, 0, 4, 0, "Gravitation",
	"Apply gravitation to point movement",
	0, "*",
	PROP_FLOAT, PROP_ACCELERATION | PROP_UNIT_ACCELERATION, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, grav), 5, NULL},
	SoftBodySettings_gravity_get, SoftBodySettings_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_speed = {
	{(PropertyRNA *)&rna_SoftBodySettings_vertex_group_goal, (PropertyRNA *)&rna_SoftBodySettings_gravity,
	-1, "speed", 3, 0, 0, 4, 0, "Speed",
	"Tweak timing for physics to control frequency and speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, physics_speed), 5, NULL},
	SoftBodySettings_speed_get, SoftBodySettings_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_goal = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_min, (PropertyRNA *)&rna_SoftBodySettings_speed,
	-1, "vertex_group_goal", 262145, 0, 0, 0, 0, "Goal Vertex Group",
	"Control point weight values",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_vertex_group_goal_get, SoftBodySettings_vertex_group_goal_length, SoftBodySettings_vertex_group_goal_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

FloatPropertyRNA rna_SoftBodySettings_goal_min = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_max, (PropertyRNA *)&rna_SoftBodySettings_vertex_group_goal,
	-1, "goal_min", 3, 0, 0, 4, 0, "Goal Minimum",
	"Goal minimum, vertex weights are scaled to match this range",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, mingoal), 5, NULL},
	SoftBodySettings_goal_min_get, SoftBodySettings_goal_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_max = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_default, (PropertyRNA *)&rna_SoftBodySettings_goal_min,
	-1, "goal_max", 3, 0, 0, 4, 0, "Goal Maximum",
	"Goal maximum, vertex weights are scaled to match this range",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, maxgoal), 5, NULL},
	SoftBodySettings_goal_max_get, SoftBodySettings_goal_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_default = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_spring, (PropertyRNA *)&rna_SoftBodySettings_goal_max,
	-1, "goal_default", 1, 0, 0, 4, 0, "Goal Default",
	"Default Goal (vertex target position) value",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, defgoal), 5, NULL},
	SoftBodySettings_goal_default_get, SoftBodySettings_goal_default_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_spring = {
	{(PropertyRNA *)&rna_SoftBodySettings_goal_friction, (PropertyRNA *)&rna_SoftBodySettings_goal_default,
	-1, "goal_spring", 3, 0, 0, 4, 0, "Goal Stiffness",
	"Goal (vertex target position) spring stiffness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, goalspring), 5, NULL},
	SoftBodySettings_goal_spring_get, SoftBodySettings_goal_spring_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_friction = {
	{(PropertyRNA *)&rna_SoftBodySettings_pull, (PropertyRNA *)&rna_SoftBodySettings_goal_spring,
	-1, "goal_friction", 3, 0, 0, 4, 0, "Goal Damping",
	"Goal (vertex target position) friction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, goalfrict), 5, NULL},
	SoftBodySettings_goal_friction_get, SoftBodySettings_goal_friction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_pull = {
	{(PropertyRNA *)&rna_SoftBodySettings_push, (PropertyRNA *)&rna_SoftBodySettings_goal_friction,
	-1, "pull", 3, 0, 0, 4, 0, "Pull",
	"Edge spring stiffness when longer than rest length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, inspring), 5, NULL},
	SoftBodySettings_pull_get, SoftBodySettings_pull_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_push = {
	{(PropertyRNA *)&rna_SoftBodySettings_damping, (PropertyRNA *)&rna_SoftBodySettings_pull,
	-1, "push", 3, 0, 0, 4, 0, "Push",
	"Edge spring stiffness when shorter than rest length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, inpush), 5, NULL},
	SoftBodySettings_push_get, SoftBodySettings_push_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_damping = {
	{(PropertyRNA *)&rna_SoftBodySettings_spring_length, (PropertyRNA *)&rna_SoftBodySettings_push,
	-1, "damping", 3, 0, 0, 4, 0, "Damp",
	"Edge spring friction",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, infrict), 5, NULL},
	SoftBodySettings_damping_get, SoftBodySettings_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SoftBodySettings_spring_length = {
	{(PropertyRNA *)&rna_SoftBodySettings_aero, (PropertyRNA *)&rna_SoftBodySettings_damping,
	-1, "spring_length", 3, 0, 0, 4, 0, "View Layer",
	"Alter spring length to shrink/blow up (unit %) 0 to disable",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, springpreload), 1, NULL},
	SoftBodySettings_spring_length_get, SoftBodySettings_spring_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 200, 0, 200, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_aero = {
	{(PropertyRNA *)&rna_SoftBodySettings_plastic, (PropertyRNA *)&rna_SoftBodySettings_spring_length,
	-1, "aero", 3, 0, 0, 4, 0, "Aero",
	"Make edges \'sail\'",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, aeroedge), 1, NULL},
	SoftBodySettings_aero_get, SoftBodySettings_aero_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 30000, 0, 30000, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_plastic = {
	{(PropertyRNA *)&rna_SoftBodySettings_bend, (PropertyRNA *)&rna_SoftBodySettings_aero,
	-1, "plastic", 3, 0, 0, 4, 0, "Plasticity",
	"Permanent deform",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, plastic), 1, NULL},
	SoftBodySettings_plastic_get, SoftBodySettings_plastic_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 0, NULL
};

FloatPropertyRNA rna_SoftBodySettings_bend = {
	{(PropertyRNA *)&rna_SoftBodySettings_shear, (PropertyRNA *)&rna_SoftBodySettings_plastic,
	-1, "bend", 3, 0, 0, 4, 0, "Bending",
	"Bending Stiffness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, secondspring), 5, NULL},
	SoftBodySettings_bend_get, SoftBodySettings_bend_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_shear = {
	{(PropertyRNA *)&rna_SoftBodySettings_vertex_group_spring, (PropertyRNA *)&rna_SoftBodySettings_bend,
	-1, "shear", 3, 0, 0, 4, 0, "Shear",
	"Shear Stiffness",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, shearstiff), 5, NULL},
	SoftBodySettings_shear_get, SoftBodySettings_shear_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_spring = {
	{(PropertyRNA *)&rna_SoftBodySettings_collision_type, (PropertyRNA *)&rna_SoftBodySettings_shear,
	-1, "vertex_group_spring", 262145, 0, 0, 0, 0, "Spring Vertex Group",
	"Control point spring strength values",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_vertex_group_spring_get, SoftBodySettings_vertex_group_spring_length, SoftBodySettings_vertex_group_spring_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_SoftBodySettings_collision_type_items[6] = {
	{0, "MANUAL", 0, "Manual", "Manual adjust"},
	{1, "AVERAGE", 0, "Average", "Average Spring length * Ball Size"},
	{2, "MINIMAL", 0, "Minimal", "Minimal Spring length * Ball Size"},
	{3, "MAXIMAL", 0, "Maximal", "Maximal Spring length * Ball Size"},
	{4, "MINMAX", 0, "AvMinMax", "(Min+Max)/2 * Ball Size"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SoftBodySettings_collision_type = {
	{(PropertyRNA *)&rna_SoftBodySettings_ball_size, (PropertyRNA *)&rna_SoftBodySettings_vertex_group_spring,
	-1, "collision_type", 1, 0, 0, 4, 0, "Collision Type",
	"Choose Collision Type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, sbc_mode), 1, NULL},
	SoftBodySettings_collision_type_get, SoftBodySettings_collision_type_set, NULL, NULL, NULL, rna_SoftBodySettings_collision_type_items, 5, 0
};

FloatPropertyRNA rna_SoftBodySettings_ball_size = {
	{(PropertyRNA *)&rna_SoftBodySettings_ball_stiff, (PropertyRNA *)&rna_SoftBodySettings_collision_type,
	-1, "ball_size", 1, 0, 0, 4, 0, "Ball Size",
	"Absolute ball size or factor if not manually adjusted",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, colball), 5, NULL},
	SoftBodySettings_ball_size_get, SoftBodySettings_ball_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_ball_stiff = {
	{(PropertyRNA *)&rna_SoftBodySettings_ball_damp, (PropertyRNA *)&rna_SoftBodySettings_ball_size,
	-1, "ball_stiff", 3, 0, 0, 4, 0, "Ball Size",
	"Ball inflating pressure",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, ballstiff), 5, NULL},
	SoftBodySettings_ball_stiff_get, SoftBodySettings_ball_stiff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_ball_damp = {
	{(PropertyRNA *)&rna_SoftBodySettings_error_threshold, (PropertyRNA *)&rna_SoftBodySettings_ball_stiff,
	-1, "ball_damp", 3, 0, 0, 4, 0, "Ball Size",
	"Blending to inelastic collision",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, balldamp), 5, NULL},
	SoftBodySettings_ball_damp_get, SoftBodySettings_ball_damp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_error_threshold = {
	{(PropertyRNA *)&rna_SoftBodySettings_step_min, (PropertyRNA *)&rna_SoftBodySettings_ball_damp,
	-1, "error_threshold", 3, 0, 0, 4, 0, "Error Limit",
	"The Runge-Kutta ODE solver error limit, low value gives more precision, high values speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, rklimit), 5, NULL},
	SoftBodySettings_error_threshold_get, SoftBodySettings_error_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SoftBodySettings_step_min = {
	{(PropertyRNA *)&rna_SoftBodySettings_step_max, (PropertyRNA *)&rna_SoftBodySettings_error_threshold,
	-1, "step_min", 3, 0, 0, 4, 0, "Min Step",
	"Minimal # solver steps/frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, minloops), 1, NULL},
	SoftBodySettings_step_min_get, SoftBodySettings_step_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 30000, 0, 30000, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_step_max = {
	{(PropertyRNA *)&rna_SoftBodySettings_choke, (PropertyRNA *)&rna_SoftBodySettings_step_min,
	-1, "step_max", 3, 0, 0, 4, 0, "Max Step",
	"Maximal # solver steps/frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, maxloops), 1, NULL},
	SoftBodySettings_step_max_get, SoftBodySettings_step_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 30000, 0, 30000, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_choke = {
	{(PropertyRNA *)&rna_SoftBodySettings_fuzzy, (PropertyRNA *)&rna_SoftBodySettings_step_max,
	-1, "choke", 3, 0, 0, 4, 0, "Choke",
	"\'Viscosity\' inside collision target",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, choke), 1, NULL},
	SoftBodySettings_choke_get, SoftBodySettings_choke_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_fuzzy = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_auto_step, (PropertyRNA *)&rna_SoftBodySettings_choke,
	-1, "fuzzy", 3, 0, 0, 4, 0, "Fuzzy",
	"Fuzziness while on collision, high values make collision handling faster but less stable",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, fuzzyness), 1, NULL},
	SoftBodySettings_fuzzy_get, SoftBodySettings_fuzzy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 100, 1, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_auto_step = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_diagnose, (PropertyRNA *)&rna_SoftBodySettings_fuzzy,
	-1, "use_auto_step", 3, 0, 0, 0, 0, "V",
	"Use velocities for automagic step sizes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_auto_step_get, SoftBodySettings_use_auto_step_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_diagnose = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_estimate_matrix, (PropertyRNA *)&rna_SoftBodySettings_use_auto_step,
	-1, "use_diagnose", 3, 0, 0, 0, 0, "Print Performance to Console",
	"Turn on SB diagnose console prints",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_diagnose_get, SoftBodySettings_use_diagnose_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_estimate_matrix = {
	{(PropertyRNA *)&rna_SoftBodySettings_location_mass_center, (PropertyRNA *)&rna_SoftBodySettings_use_diagnose,
	-1, "use_estimate_matrix", 3, 0, 0, 0, 0, "Estimate Transforms",
	"Store the estimated transforms in the soft body settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_estimate_matrix_get, SoftBodySettings_use_estimate_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_SoftBodySettings_location_mass_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_location_mass_center = {
	{(PropertyRNA *)&rna_SoftBodySettings_rotation_estimate, (PropertyRNA *)&rna_SoftBodySettings_use_estimate_matrix,
	-1, "location_mass_center", 3, 0, 0, 4, 0, "Center of Mass",
	"Location of center of mass",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, lcom), 5, NULL},
	NULL, NULL, SoftBodySettings_location_mass_center_get, SoftBodySettings_location_mass_center_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_SoftBodySettings_location_mass_center_default
};

static float rna_SoftBodySettings_rotation_estimate_default[9] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_rotation_estimate = {
	{(PropertyRNA *)&rna_SoftBodySettings_scale_estimate, (PropertyRNA *)&rna_SoftBodySettings_location_mass_center,
	-1, "rotation_estimate", 3, 0, 0, 4, 0, "Rotation Matrix",
	"Estimated rotation matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, lrot), 5, NULL},
	NULL, NULL, SoftBodySettings_rotation_estimate_get, SoftBodySettings_rotation_estimate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_rotation_estimate_default
};

static float rna_SoftBodySettings_scale_estimate_default[9] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_scale_estimate = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_goal, (PropertyRNA *)&rna_SoftBodySettings_rotation_estimate,
	-1, "scale_estimate", 3, 0, 0, 4, 0, "Scale Matrix",
	"Estimated scale matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SoftBody, lscale), 5, NULL},
	NULL, NULL, SoftBodySettings_scale_estimate_get, SoftBodySettings_scale_estimate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_scale_estimate_default
};

BoolPropertyRNA rna_SoftBodySettings_use_goal = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_edges, (PropertyRNA *)&rna_SoftBodySettings_scale_estimate,
	-1, "use_goal", 1, 0, 0, 0, 0, "Use Goal",
	"Define forces for vertices to stick to animated position",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_goal_get, SoftBodySettings_use_goal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_edges = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_stiff_quads, (PropertyRNA *)&rna_SoftBodySettings_use_goal,
	-1, "use_edges", 1, 0, 0, 0, 0, "Use Edges",
	"Use Edges as springs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_edges_get, SoftBodySettings_use_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_stiff_quads = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_edge_collision, (PropertyRNA *)&rna_SoftBodySettings_use_edges,
	-1, "use_stiff_quads", 1, 0, 0, 0, 0, "Stiff Quads",
	"Add diagonal springs on 4-gons",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_stiff_quads_get, SoftBodySettings_use_stiff_quads_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_edge_collision = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_face_collision, (PropertyRNA *)&rna_SoftBodySettings_use_stiff_quads,
	-1, "use_edge_collision", 3, 0, 0, 0, 0, "Edge Collision",
	"Edges collide too",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_edge_collision_get, SoftBodySettings_use_edge_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SoftBodySettings_use_face_collision = {
	{(PropertyRNA *)&rna_SoftBodySettings_aerodynamics_type, (PropertyRNA *)&rna_SoftBodySettings_use_edge_collision,
	-1, "use_face_collision", 3, 0, 0, 0, 0, "Face Collision",
	"Faces collide too, can be very slow",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_face_collision_get, SoftBodySettings_use_face_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_SoftBodySettings_aerodynamics_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Edges receive a drag force from surrounding media"},
	{1, "LIFT_FORCE", 0, "Lift Force", "Edges receive a lift force when passing through surrounding media"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type = {
	{(PropertyRNA *)&rna_SoftBodySettings_use_self_collision, (PropertyRNA *)&rna_SoftBodySettings_use_face_collision,
	-1, "aerodynamics_type", 3, 0, 0, 0, 0, "Aerodynamics Type",
	"Method of calculating aerodynamic interaction",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_aerodynamics_type_get, SoftBodySettings_aerodynamics_type_set, NULL, NULL, NULL, rna_SoftBodySettings_aerodynamics_type_items, 2, 0
};

BoolPropertyRNA rna_SoftBodySettings_use_self_collision = {
	{(PropertyRNA *)&rna_SoftBodySettings_collision_collection, (PropertyRNA *)&rna_SoftBodySettings_aerodynamics_type,
	-1, "use_self_collision", 1, 0, 0, 0, 0, "Self Collision",
	"Enable naive vertex ball self collision",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_use_self_collision_get, SoftBodySettings_use_self_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SoftBodySettings_collision_collection = {
	{(PropertyRNA *)&rna_SoftBodySettings_effector_weights, (PropertyRNA *)&rna_SoftBodySettings_use_self_collision,
	-1, "collision_collection", 8388737, 0, 0, 0, 0, "Collision Collection",
	"Limit colliders to this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_collision_collection_get, SoftBodySettings_collision_collection_set, NULL, NULL,&RNA_Collection
};

PointerPropertyRNA rna_SoftBodySettings_effector_weights = {
	{NULL, (PropertyRNA *)&rna_SoftBodySettings_collision_collection,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SoftBodySettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

StructRNA RNA_SoftBodySettings = {
	{(ContainerRNA *)&RNA_DepsgraphObjectInstance, (ContainerRNA *)&RNA_FieldSettings,
	NULL,
	{(PropertyRNA *)&rna_SoftBodySettings_rna_properties, (PropertyRNA *)&rna_SoftBodySettings_effector_weights}},
	"SoftBodySettings", NULL, NULL, 516, NULL, "Soft Body Settings",
	"Soft body simulation settings for an object",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SoftBodySettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SoftBodySettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

