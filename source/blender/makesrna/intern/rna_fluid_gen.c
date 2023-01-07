
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

#include "rna_fluid.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_FluidDomainSettings_rna_properties;
PointerPropertyRNA rna_FluidDomainSettings_rna_type;
PointerPropertyRNA rna_FluidDomainSettings_effector_weights;
PointerPropertyRNA rna_FluidDomainSettings_effector_group;
PointerPropertyRNA rna_FluidDomainSettings_fluid_group;
PointerPropertyRNA rna_FluidDomainSettings_force_collection;
FloatPropertyRNA rna_FluidDomainSettings_density_grid;
FloatPropertyRNA rna_FluidDomainSettings_velocity_grid;
FloatPropertyRNA rna_FluidDomainSettings_flame_grid;
FloatPropertyRNA rna_FluidDomainSettings_color_grid;
FloatPropertyRNA rna_FluidDomainSettings_heat_grid;
FloatPropertyRNA rna_FluidDomainSettings_temperature_grid;
FloatPropertyRNA rna_FluidDomainSettings_start_point;
FloatPropertyRNA rna_FluidDomainSettings_cell_size;
IntPropertyRNA rna_FluidDomainSettings_domain_resolution;
IntPropertyRNA rna_FluidDomainSettings_additional_res;
IntPropertyRNA rna_FluidDomainSettings_adapt_margin;
FloatPropertyRNA rna_FluidDomainSettings_adapt_threshold;
BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_domain;
IntPropertyRNA rna_FluidDomainSettings_resolution_max;
BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_front;
BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_back;
BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_right;
BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_left;
BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_top;
BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_bottom;
FloatPropertyRNA rna_FluidDomainSettings_gravity;
EnumPropertyRNA rna_FluidDomainSettings_domain_type;
BoolPropertyRNA rna_FluidDomainSettings_delete_in_obstacle;
FloatPropertyRNA rna_FluidDomainSettings_alpha;
FloatPropertyRNA rna_FluidDomainSettings_beta;
IntPropertyRNA rna_FluidDomainSettings_dissolve_speed;
FloatPropertyRNA rna_FluidDomainSettings_vorticity;
EnumPropertyRNA rna_FluidDomainSettings_highres_sampling;
BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke;
BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke_log;
FloatPropertyRNA rna_FluidDomainSettings_burning_rate;
FloatPropertyRNA rna_FluidDomainSettings_flame_smoke;
FloatPropertyRNA rna_FluidDomainSettings_flame_vorticity;
FloatPropertyRNA rna_FluidDomainSettings_flame_ignition;
FloatPropertyRNA rna_FluidDomainSettings_flame_max_temp;
FloatPropertyRNA rna_FluidDomainSettings_flame_smoke_color;
FloatPropertyRNA rna_FluidDomainSettings_noise_strength;
FloatPropertyRNA rna_FluidDomainSettings_noise_pos_scale;
FloatPropertyRNA rna_FluidDomainSettings_noise_time_anim;
IntPropertyRNA rna_FluidDomainSettings_noise_scale;
BoolPropertyRNA rna_FluidDomainSettings_use_noise;
EnumPropertyRNA rna_FluidDomainSettings_simulation_method;
FloatPropertyRNA rna_FluidDomainSettings_flip_ratio;
FloatPropertyRNA rna_FluidDomainSettings_particle_randomness;
IntPropertyRNA rna_FluidDomainSettings_particle_number;
IntPropertyRNA rna_FluidDomainSettings_particle_min;
IntPropertyRNA rna_FluidDomainSettings_particle_max;
FloatPropertyRNA rna_FluidDomainSettings_particle_radius;
FloatPropertyRNA rna_FluidDomainSettings_particle_band_width;
BoolPropertyRNA rna_FluidDomainSettings_use_flip_particles;
BoolPropertyRNA rna_FluidDomainSettings_use_fractions;
FloatPropertyRNA rna_FluidDomainSettings_fractions_threshold;
FloatPropertyRNA rna_FluidDomainSettings_fractions_distance;
IntPropertyRNA rna_FluidDomainSettings_sys_particle_maximum;
BoolPropertyRNA rna_FluidDomainSettings_use_viscosity;
FloatPropertyRNA rna_FluidDomainSettings_viscosity_value;
BoolPropertyRNA rna_FluidDomainSettings_use_diffusion;
FloatPropertyRNA rna_FluidDomainSettings_surface_tension;
FloatPropertyRNA rna_FluidDomainSettings_viscosity_base;
IntPropertyRNA rna_FluidDomainSettings_viscosity_exponent;
FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_upper;
FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_lower;
IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_pos;
IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_neg;
IntPropertyRNA rna_FluidDomainSettings_mesh_scale;
EnumPropertyRNA rna_FluidDomainSettings_mesh_generator;
BoolPropertyRNA rna_FluidDomainSettings_use_mesh;
BoolPropertyRNA rna_FluidDomainSettings_use_speed_vectors;
FloatPropertyRNA rna_FluidDomainSettings_mesh_particle_radius;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_wavecrest;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_wavecrest;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_trappedair;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_trappedair;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_energy;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_energy;
IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_wavecrest;
IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_trappedair;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_buoyancy;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_drag;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_min;
FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_max;
EnumPropertyRNA rna_FluidDomainSettings_sndparticle_boundary;
EnumPropertyRNA rna_FluidDomainSettings_sndparticle_combined_export;
IntPropertyRNA rna_FluidDomainSettings_sndparticle_potential_radius;
IntPropertyRNA rna_FluidDomainSettings_sndparticle_update_radius;
IntPropertyRNA rna_FluidDomainSettings_particle_scale;
BoolPropertyRNA rna_FluidDomainSettings_use_spray_particles;
BoolPropertyRNA rna_FluidDomainSettings_use_bubble_particles;
BoolPropertyRNA rna_FluidDomainSettings_use_foam_particles;
BoolPropertyRNA rna_FluidDomainSettings_use_tracer_particles;
FloatPropertyRNA rna_FluidDomainSettings_guide_alpha;
IntPropertyRNA rna_FluidDomainSettings_guide_beta;
FloatPropertyRNA rna_FluidDomainSettings_guide_vel_factor;
EnumPropertyRNA rna_FluidDomainSettings_guide_source;
PointerPropertyRNA rna_FluidDomainSettings_guide_parent;
BoolPropertyRNA rna_FluidDomainSettings_use_guide;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_start;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_end;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_offset;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_data;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_noise;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_mesh;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_particles;
IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_guide;
EnumPropertyRNA rna_FluidDomainSettings_cache_mesh_format;
EnumPropertyRNA rna_FluidDomainSettings_cache_data_format;
EnumPropertyRNA rna_FluidDomainSettings_cache_particle_format;
EnumPropertyRNA rna_FluidDomainSettings_cache_noise_format;
EnumPropertyRNA rna_FluidDomainSettings_cache_type;
BoolPropertyRNA rna_FluidDomainSettings_cache_resumable;
StringPropertyRNA rna_FluidDomainSettings_cache_directory;
BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_data;
BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_data;
BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_noise;
BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_noise;
BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_mesh;
BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_mesh;
BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_particles;
BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_particles;
BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_guide;
BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_guide;
BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_any;
BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_any;
BoolPropertyRNA rna_FluidDomainSettings_export_manta_script;
EnumPropertyRNA rna_FluidDomainSettings_openvdb_cache_compress_type;
EnumPropertyRNA rna_FluidDomainSettings_openvdb_data_depth;
FloatPropertyRNA rna_FluidDomainSettings_time_scale;
FloatPropertyRNA rna_FluidDomainSettings_cfl_condition;
BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_timesteps;
IntPropertyRNA rna_FluidDomainSettings_timesteps_min;
IntPropertyRNA rna_FluidDomainSettings_timesteps_max;
BoolPropertyRNA rna_FluidDomainSettings_use_slice;
EnumPropertyRNA rna_FluidDomainSettings_slice_axis;
FloatPropertyRNA rna_FluidDomainSettings_slice_per_voxel;
FloatPropertyRNA rna_FluidDomainSettings_slice_depth;
FloatPropertyRNA rna_FluidDomainSettings_display_thickness;
EnumPropertyRNA rna_FluidDomainSettings_display_interpolation;
BoolPropertyRNA rna_FluidDomainSettings_show_gridlines;
BoolPropertyRNA rna_FluidDomainSettings_show_velocity;
EnumPropertyRNA rna_FluidDomainSettings_vector_display_type;
EnumPropertyRNA rna_FluidDomainSettings_vector_field;
BoolPropertyRNA rna_FluidDomainSettings_vector_scale_with_magnitude;
BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_x;
BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_y;
BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_z;
FloatPropertyRNA rna_FluidDomainSettings_vector_scale;
BoolPropertyRNA rna_FluidDomainSettings_use_color_ramp;
EnumPropertyRNA rna_FluidDomainSettings_color_ramp_field;
FloatPropertyRNA rna_FluidDomainSettings_color_ramp_field_scale;
PointerPropertyRNA rna_FluidDomainSettings_color_ramp;
FloatPropertyRNA rna_FluidDomainSettings_clipping;
EnumPropertyRNA rna_FluidDomainSettings_gridlines_color_field;
FloatPropertyRNA rna_FluidDomainSettings_gridlines_lower_bound;
FloatPropertyRNA rna_FluidDomainSettings_gridlines_upper_bound;
FloatPropertyRNA rna_FluidDomainSettings_gridlines_range_color;
EnumPropertyRNA rna_FluidDomainSettings_gridlines_cell_filter;
FloatPropertyRNA rna_FluidDomainSettings_velocity_scale;


CollectionPropertyRNA rna_FluidFlowSettings_rna_properties;
PointerPropertyRNA rna_FluidFlowSettings_rna_type;
FloatPropertyRNA rna_FluidFlowSettings_density;
FloatPropertyRNA rna_FluidFlowSettings_smoke_color;
FloatPropertyRNA rna_FluidFlowSettings_fuel_amount;
FloatPropertyRNA rna_FluidFlowSettings_temperature;
PointerPropertyRNA rna_FluidFlowSettings_particle_system;
EnumPropertyRNA rna_FluidFlowSettings_flow_type;
EnumPropertyRNA rna_FluidFlowSettings_flow_behavior;
EnumPropertyRNA rna_FluidFlowSettings_flow_source;
BoolPropertyRNA rna_FluidFlowSettings_use_absolute;
BoolPropertyRNA rna_FluidFlowSettings_use_initial_velocity;
FloatPropertyRNA rna_FluidFlowSettings_velocity_factor;
FloatPropertyRNA rna_FluidFlowSettings_velocity_normal;
FloatPropertyRNA rna_FluidFlowSettings_velocity_random;
FloatPropertyRNA rna_FluidFlowSettings_velocity_coord;
FloatPropertyRNA rna_FluidFlowSettings_volume_density;
FloatPropertyRNA rna_FluidFlowSettings_surface_distance;
BoolPropertyRNA rna_FluidFlowSettings_use_plane_init;
FloatPropertyRNA rna_FluidFlowSettings_particle_size;
BoolPropertyRNA rna_FluidFlowSettings_use_particle_size;
BoolPropertyRNA rna_FluidFlowSettings_use_inflow;
IntPropertyRNA rna_FluidFlowSettings_subframes;
StringPropertyRNA rna_FluidFlowSettings_density_vertex_group;
BoolPropertyRNA rna_FluidFlowSettings_use_texture;
EnumPropertyRNA rna_FluidFlowSettings_texture_map_type;
StringPropertyRNA rna_FluidFlowSettings_uv_layer;
PointerPropertyRNA rna_FluidFlowSettings_noise_texture;
FloatPropertyRNA rna_FluidFlowSettings_texture_size;
FloatPropertyRNA rna_FluidFlowSettings_texture_offset;


CollectionPropertyRNA rna_FluidEffectorSettings_rna_properties;
PointerPropertyRNA rna_FluidEffectorSettings_rna_type;
EnumPropertyRNA rna_FluidEffectorSettings_effector_type;
FloatPropertyRNA rna_FluidEffectorSettings_surface_distance;
BoolPropertyRNA rna_FluidEffectorSettings_use_plane_init;
FloatPropertyRNA rna_FluidEffectorSettings_velocity_factor;
EnumPropertyRNA rna_FluidEffectorSettings_guide_mode;
BoolPropertyRNA rna_FluidEffectorSettings_use_effector;
IntPropertyRNA rna_FluidEffectorSettings_subframes;

static PointerRNA FluidDomainSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FluidDomainSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FluidDomainSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidDomainSettings_rna_properties_get(iter);
    }
}

void FluidDomainSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FluidDomainSettings_rna_properties_get(iter);
    }
}

void FluidDomainSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FluidDomainSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FluidDomainSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA FluidDomainSettings_effector_weights_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

PointerRNA FluidDomainSettings_effector_group_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->effector_group);
}

void FluidDomainSettings_effector_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->effector_group = value.data;
}

PointerRNA FluidDomainSettings_fluid_group_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->fluid_group);
}

void FluidDomainSettings_fluid_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->fluid_group = value.data;
}

PointerRNA FluidDomainSettings_force_collection_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->force_group);
}

void FluidDomainSettings_force_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->force_group = value.data;
}

void FluidDomainSettings_density_grid_get(PointerRNA *ptr, float values[])
{
    rna_FluidModifier_density_grid_get(ptr, values);
}

void FluidDomainSettings_velocity_grid_get(PointerRNA *ptr, float values[])
{
    rna_FluidModifier_velocity_grid_get(ptr, values);
}

void FluidDomainSettings_flame_grid_get(PointerRNA *ptr, float values[])
{
    rna_FluidModifier_flame_grid_get(ptr, values);
}

void FluidDomainSettings_color_grid_get(PointerRNA *ptr, float values[])
{
    rna_FluidModifier_color_grid_get(ptr, values);
}

void FluidDomainSettings_heat_grid_get(PointerRNA *ptr, float values[])
{
    rna_FluidModifier_heat_grid_get(ptr, values);
}

void FluidDomainSettings_temperature_grid_get(PointerRNA *ptr, float values[])
{
    rna_FluidModifier_temperature_grid_get(ptr, values);
}

void FluidDomainSettings_start_point_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->p0)[i]);
    }
}

void FluidDomainSettings_cell_size_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->cell_size)[i]);
    }
}

void FluidDomainSettings_domain_resolution_get(PointerRNA *ptr, int values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->res)[i]);
    }
}

int FluidDomainSettings_additional_res_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->adapt_res);
}

void FluidDomainSettings_additional_res_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->adapt_res = CLAMPIS(value, 0, 512);
}

int FluidDomainSettings_adapt_margin_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->adapt_margin);
}

void FluidDomainSettings_adapt_margin_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->adapt_margin = CLAMPIS(value, 2, 24);
}

float FluidDomainSettings_adapt_threshold_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->adapt_threshold);
}

void FluidDomainSettings_adapt_threshold_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->adapt_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

bool FluidDomainSettings_use_adaptive_domain_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

void FluidDomainSettings_use_adaptive_domain_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

int FluidDomainSettings_resolution_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->maxres);
}

void FluidDomainSettings_resolution_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->maxres = CLAMPIS(value, 6, 10000);
}

bool FluidDomainSettings_use_collision_border_front_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 2) != 0);
}

void FluidDomainSettings_use_collision_border_front_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 2; }
    else { data->border_collisions &= ~2; }
}

bool FluidDomainSettings_use_collision_border_back_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 4) != 0);
}

void FluidDomainSettings_use_collision_border_back_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 4; }
    else { data->border_collisions &= ~4; }
}

bool FluidDomainSettings_use_collision_border_right_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 8) != 0);
}

void FluidDomainSettings_use_collision_border_right_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 8; }
    else { data->border_collisions &= ~8; }
}

bool FluidDomainSettings_use_collision_border_left_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 16) != 0);
}

void FluidDomainSettings_use_collision_border_left_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 16; }
    else { data->border_collisions &= ~16; }
}

bool FluidDomainSettings_use_collision_border_top_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 32) != 0);
}

void FluidDomainSettings_use_collision_border_top_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 32; }
    else { data->border_collisions &= ~32; }
}

bool FluidDomainSettings_use_collision_border_bottom_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->border_collisions) & 64) != 0);
}

void FluidDomainSettings_use_collision_border_bottom_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions |= 64; }
    else { data->border_collisions &= ~64; }
}

void FluidDomainSettings_gravity_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gravity)[i]);
    }
}

void FluidDomainSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gravity)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
    }
}

int FluidDomainSettings_domain_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->type);
}

void FluidDomainSettings_domain_type_set(PointerRNA *ptr, int value)
{
    rna_Fluid_domaintype_set(ptr, value);
}

bool FluidDomainSettings_delete_in_obstacle_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 16384) != 0);
}

void FluidDomainSettings_delete_in_obstacle_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 16384; }
    else { data->flags &= ~16384; }
}

float FluidDomainSettings_alpha_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->alpha);
}

void FluidDomainSettings_alpha_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->alpha = CLAMPIS(value, -5.0f, 5.0f);
}

float FluidDomainSettings_beta_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->beta);
}

void FluidDomainSettings_beta_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->beta = CLAMPIS(value, -5.0f, 5.0f);
}

int FluidDomainSettings_dissolve_speed_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->diss_speed);
}

void FluidDomainSettings_dissolve_speed_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->diss_speed = CLAMPIS(value, 1, 10000);
}

float FluidDomainSettings_vorticity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->vorticity);
}

void FluidDomainSettings_vorticity_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vorticity = CLAMPIS(value, 0.0f, 4.0f);
}

int FluidDomainSettings_highres_sampling_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->highres_sampling);
}

void FluidDomainSettings_highres_sampling_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->highres_sampling = value;
}

bool FluidDomainSettings_use_dissolve_smoke_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void FluidDomainSettings_use_dissolve_smoke_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

bool FluidDomainSettings_use_dissolve_smoke_log_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

void FluidDomainSettings_use_dissolve_smoke_log_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

float FluidDomainSettings_burning_rate_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->burning_rate);
}

void FluidDomainSettings_burning_rate_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->burning_rate = CLAMPIS(value, 0.0099999998f, 4.0f);
}

float FluidDomainSettings_flame_smoke_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_smoke);
}

void FluidDomainSettings_flame_smoke_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_smoke = CLAMPIS(value, 0.0f, 8.0f);
}

float FluidDomainSettings_flame_vorticity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_vorticity);
}

void FluidDomainSettings_flame_vorticity_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_vorticity = CLAMPIS(value, 0.0f, 2.0f);
}

float FluidDomainSettings_flame_ignition_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_ignition);
}

void FluidDomainSettings_flame_ignition_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_ignition = CLAMPIS(value, 0.5000000000f, 5.0f);
}

float FluidDomainSettings_flame_max_temp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_max_temp);
}

void FluidDomainSettings_flame_max_temp_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_max_temp = CLAMPIS(value, 1.0f, 10.0f);
}

void FluidDomainSettings_flame_smoke_color_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->flame_smoke_color)[i]);
    }
}

void FluidDomainSettings_flame_smoke_color_set(PointerRNA *ptr, const float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->flame_smoke_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float FluidDomainSettings_noise_strength_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_strength);
}

void FluidDomainSettings_noise_strength_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_strength = CLAMPIS(value, 0.0f, 10.0f);
}

float FluidDomainSettings_noise_pos_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_pos_scale);
}

void FluidDomainSettings_noise_pos_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_pos_scale = CLAMPIS(value, 0.0001000000f, 10.0f);
}

float FluidDomainSettings_noise_time_anim_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_time_anim);
}

void FluidDomainSettings_noise_time_anim_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_time_anim = CLAMPIS(value, 0.0001000000f, 10.0f);
}

int FluidDomainSettings_noise_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->noise_scale);
}

void FluidDomainSettings_noise_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_scale = CLAMPIS(value, 1, 100);
}

bool FluidDomainSettings_use_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void FluidDomainSettings_use_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

int FluidDomainSettings_simulation_method_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->simulation_method);
}

void FluidDomainSettings_simulation_method_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->simulation_method = value;
}

float FluidDomainSettings_flip_ratio_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flip_ratio);
}

void FluidDomainSettings_flip_ratio_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flip_ratio = CLAMPIS(value, 0.0f, 1.0f);
}

float FluidDomainSettings_particle_randomness_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_randomness);
}

void FluidDomainSettings_particle_randomness_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_randomness = CLAMPIS(value, 0.0f, 10.0f);
}

int FluidDomainSettings_particle_number_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_number);
}

void FluidDomainSettings_particle_number_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_number = CLAMPIS(value, 1, 5);
}

int FluidDomainSettings_particle_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_minimum);
}

void FluidDomainSettings_particle_min_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_minimum = CLAMPIS(value, 0, 1000);
}

int FluidDomainSettings_particle_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_maximum);
}

void FluidDomainSettings_particle_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_maximum = CLAMPIS(value, 0, 1000);
}

float FluidDomainSettings_particle_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_radius);
}

void FluidDomainSettings_particle_radius_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_radius = CLAMPIS(value, 0.0f, 10.0f);
}

float FluidDomainSettings_particle_band_width_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_band_width);
}

void FluidDomainSettings_particle_band_width_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_band_width = CLAMPIS(value, 0.0f, 1000.0f);
}

bool FluidDomainSettings_use_flip_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 1) != 0);
}

void FluidDomainSettings_use_flip_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 1; }
    else { data->particle_type &= ~1; }
}

bool FluidDomainSettings_use_fractions_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 8192) != 0);
}

void FluidDomainSettings_use_fractions_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 8192; }
    else { data->flags &= ~8192; }
}

float FluidDomainSettings_fractions_threshold_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->fractions_threshold);
}

void FluidDomainSettings_fractions_threshold_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->fractions_threshold = CLAMPIS(value, 0.0010000000f, 1.0f);
}

float FluidDomainSettings_fractions_distance_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->fractions_distance);
}

void FluidDomainSettings_fractions_distance_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->fractions_distance = CLAMPIS(value, -5.0f, 5.0f);
}

int FluidDomainSettings_sys_particle_maximum_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sys_particle_maximum);
}

void FluidDomainSettings_sys_particle_maximum_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sys_particle_maximum = CLAMPIS(value, 0, INT_MAX);
}

bool FluidDomainSettings_use_viscosity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 131072) != 0);
}

void FluidDomainSettings_use_viscosity_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 131072; }
    else { data->flags &= ~131072; }
}

float FluidDomainSettings_viscosity_value_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->viscosity_value);
}

void FluidDomainSettings_viscosity_value_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->viscosity_value = CLAMPIS(value, 0.0f, 10.0f);
}

bool FluidDomainSettings_use_diffusion_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 32768) != 0);
}

void FluidDomainSettings_use_diffusion_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 32768; }
    else { data->flags &= ~32768; }
}

float FluidDomainSettings_surface_tension_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->surface_tension);
}

void FluidDomainSettings_surface_tension_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->surface_tension = CLAMPIS(value, 0.0f, 100.0f);
}

float FluidDomainSettings_viscosity_base_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->viscosity_base);
}

void FluidDomainSettings_viscosity_base_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->viscosity_base = CLAMPIS(value, 0.0f, 10.0f);
}

int FluidDomainSettings_viscosity_exponent_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->viscosity_exponent);
}

void FluidDomainSettings_viscosity_exponent_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->viscosity_exponent = CLAMPIS(value, 0, 10);
}

float FluidDomainSettings_mesh_concave_upper_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_concave_upper);
}

void FluidDomainSettings_mesh_concave_upper_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_concave_upper = CLAMPIS(value, 0.0f, 10.0f);
}

float FluidDomainSettings_mesh_concave_lower_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_concave_lower);
}

void FluidDomainSettings_mesh_concave_lower_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_concave_lower = CLAMPIS(value, 0.0f, 10.0f);
}

int FluidDomainSettings_mesh_smoothen_pos_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_smoothen_pos);
}

void FluidDomainSettings_mesh_smoothen_pos_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_smoothen_pos = CLAMPIS(value, 0, 100);
}

int FluidDomainSettings_mesh_smoothen_neg_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_smoothen_neg);
}

void FluidDomainSettings_mesh_smoothen_neg_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_smoothen_neg = CLAMPIS(value, 0, 100);
}

int FluidDomainSettings_mesh_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_scale);
}

void FluidDomainSettings_mesh_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_scale = CLAMPIS(value, 1, 100);
}

int FluidDomainSettings_mesh_generator_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_generator);
}

void FluidDomainSettings_mesh_generator_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_generator = value;
}

bool FluidDomainSettings_use_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

void FluidDomainSettings_use_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

bool FluidDomainSettings_use_speed_vectors_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 2048) != 0);
}

void FluidDomainSettings_use_speed_vectors_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 2048; }
    else { data->flags &= ~2048; }
}

float FluidDomainSettings_mesh_particle_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_particle_radius);
}

void FluidDomainSettings_mesh_particle_radius_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_particle_radius = CLAMPIS(value, 0.0f, 10.0f);
}

float FluidDomainSettings_sndparticle_potential_min_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_wc);
}

void FluidDomainSettings_sndparticle_potential_min_wavecrest_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_min_wc = CLAMPIS(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_max_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_wc);
}

void FluidDomainSettings_sndparticle_potential_max_wavecrest_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_max_wc = CLAMPIS(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_min_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_ta);
}

void FluidDomainSettings_sndparticle_potential_min_trappedair_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_min_ta = CLAMPIS(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_max_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_ta);
}

void FluidDomainSettings_sndparticle_potential_max_trappedair_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_max_ta = CLAMPIS(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_min_energy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_k);
}

void FluidDomainSettings_sndparticle_potential_min_energy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_min_k = CLAMPIS(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_max_energy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_k);
}

void FluidDomainSettings_sndparticle_potential_max_energy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_max_k = CLAMPIS(value, 0.0f, 1000.0f);
}

int FluidDomainSettings_sndparticle_sampling_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_k_wc);
}

void FluidDomainSettings_sndparticle_sampling_wavecrest_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_wc = CLAMPIS(value, 0, 10000);
}

int FluidDomainSettings_sndparticle_sampling_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_k_ta);
}

void FluidDomainSettings_sndparticle_sampling_trappedair_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_ta = CLAMPIS(value, 0, 10000);
}

float FluidDomainSettings_sndparticle_bubble_buoyancy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_k_b);
}

void FluidDomainSettings_sndparticle_bubble_buoyancy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_b = CLAMPIS(value, 0.0f, 100.0f);
}

float FluidDomainSettings_sndparticle_bubble_drag_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_k_d);
}

void FluidDomainSettings_sndparticle_bubble_drag_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_d = CLAMPIS(value, 0.0f, 100.0f);
}

float FluidDomainSettings_sndparticle_life_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_l_min);
}

void FluidDomainSettings_sndparticle_life_min_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_l_min = CLAMPIS(value, 0.0f, 10000.0f);
}

float FluidDomainSettings_sndparticle_life_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_l_max);
}

void FluidDomainSettings_sndparticle_life_max_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_l_max = CLAMPIS(value, 0.0f, 10000.0f);
}

int FluidDomainSettings_sndparticle_boundary_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_boundary);
}

void FluidDomainSettings_sndparticle_boundary_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_boundary = value;
}

int FluidDomainSettings_sndparticle_combined_export_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_combined_export);
}

void FluidDomainSettings_sndparticle_combined_export_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_combined_export = value;
}

int FluidDomainSettings_sndparticle_potential_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_potential_radius);
}

void FluidDomainSettings_sndparticle_potential_radius_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_potential_radius = CLAMPIS(value, 1, 4);
}

int FluidDomainSettings_sndparticle_update_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_update_radius);
}

void FluidDomainSettings_sndparticle_update_radius_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_update_radius = CLAMPIS(value, 1, 4);
}

int FluidDomainSettings_particle_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_scale);
}

void FluidDomainSettings_particle_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_scale = CLAMPIS(value, 1, 100);
}

bool FluidDomainSettings_use_spray_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 2) != 0);
}

void FluidDomainSettings_use_spray_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 2; }
    else { data->particle_type &= ~2; }
}

bool FluidDomainSettings_use_bubble_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 4) != 0);
}

void FluidDomainSettings_use_bubble_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 4; }
    else { data->particle_type &= ~4; }
}

bool FluidDomainSettings_use_foam_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 8) != 0);
}

void FluidDomainSettings_use_foam_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 8; }
    else { data->particle_type &= ~8; }
}

bool FluidDomainSettings_use_tracer_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->particle_type) & 16) != 0);
}

void FluidDomainSettings_use_tracer_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type |= 16; }
    else { data->particle_type &= ~16; }
}

float FluidDomainSettings_guide_alpha_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->guide_alpha);
}

void FluidDomainSettings_guide_alpha_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_alpha = CLAMPIS(value, 1.0f, 100.0f);
}

int FluidDomainSettings_guide_beta_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->guide_beta);
}

void FluidDomainSettings_guide_beta_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_beta = CLAMPIS(value, 1, 50);
}

float FluidDomainSettings_guide_vel_factor_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->guide_vel_factor);
}

void FluidDomainSettings_guide_vel_factor_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_vel_factor = CLAMPIS(value, 0.0f, 100.0f);
}

int FluidDomainSettings_guide_source_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->guide_source);
}

void FluidDomainSettings_guide_source_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_source = value;
}

PointerRNA FluidDomainSettings_guide_parent_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->guide_parent);
}

void FluidDomainSettings_guide_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Fluid_guide_parent_set(ptr, value, reports);
}

bool FluidDomainSettings_use_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

void FluidDomainSettings_use_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

int FluidDomainSettings_cache_frame_start_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_start);
}

void FluidDomainSettings_cache_frame_start_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cache_startframe_set(ptr, value);
}

int FluidDomainSettings_cache_frame_end_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_end);
}

void FluidDomainSettings_cache_frame_end_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cache_endframe_set(ptr, value);
}

int FluidDomainSettings_cache_frame_offset_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_offset);
}

void FluidDomainSettings_cache_frame_offset_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_offset = CLAMPIS(value, -1048574, 1048574);
}

int FluidDomainSettings_cache_frame_pause_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_data);
}

void FluidDomainSettings_cache_frame_pause_data_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_data = value;
}

int FluidDomainSettings_cache_frame_pause_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_noise);
}

void FluidDomainSettings_cache_frame_pause_noise_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_noise = value;
}

int FluidDomainSettings_cache_frame_pause_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_mesh);
}

void FluidDomainSettings_cache_frame_pause_mesh_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_mesh = value;
}

int FluidDomainSettings_cache_frame_pause_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_particles);
}

void FluidDomainSettings_cache_frame_pause_particles_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_particles = value;
}

int FluidDomainSettings_cache_frame_pause_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_guide);
}

void FluidDomainSettings_cache_frame_pause_guide_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_guide = value;
}

int FluidDomainSettings_cache_mesh_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_mesh_format);
}

void FluidDomainSettings_cache_mesh_format_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cachetype_mesh_set(ptr, value);
}

int FluidDomainSettings_cache_data_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_data_format);
}

void FluidDomainSettings_cache_data_format_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cachetype_data_set(ptr, value);
}

int FluidDomainSettings_cache_particle_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_particle_format);
}

void FluidDomainSettings_cache_particle_format_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cachetype_particle_set(ptr, value);
}

int FluidDomainSettings_cache_noise_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_noise_format);
}

void FluidDomainSettings_cache_noise_format_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cachetype_noise_set(ptr, value);
}

int FluidDomainSettings_cache_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_type);
}

void FluidDomainSettings_cache_type_set(PointerRNA *ptr, int value)
{
    rna_Fluid_cachetype_set(ptr, value);
}

bool FluidDomainSettings_cache_resumable_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 65536) != 0);
}

void FluidDomainSettings_cache_resumable_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 65536; }
    else { data->flags &= ~65536; }
}

void FluidDomainSettings_cache_directory_get(PointerRNA *ptr, char *value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    BLI_strncpy(value, data->cache_directory, 1024);
}

int FluidDomainSettings_cache_directory_length(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return strlen(data->cache_directory);
}

void FluidDomainSettings_cache_directory_set(PointerRNA *ptr, const char *value)
{
    rna_Fluid_cache_directory_set(ptr, value);
}

bool FluidDomainSettings_is_cache_baking_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 1) != 0);
}

void FluidDomainSettings_is_cache_baking_data_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 1; }
    else { data->cache_flag &= ~1; }
}

bool FluidDomainSettings_has_cache_baked_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 2) != 0);
}

void FluidDomainSettings_has_cache_baked_data_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 2; }
    else { data->cache_flag &= ~2; }
}

bool FluidDomainSettings_is_cache_baking_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 4) != 0);
}

void FluidDomainSettings_is_cache_baking_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 4; }
    else { data->cache_flag &= ~4; }
}

bool FluidDomainSettings_has_cache_baked_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 8) != 0);
}

void FluidDomainSettings_has_cache_baked_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 8; }
    else { data->cache_flag &= ~8; }
}

bool FluidDomainSettings_is_cache_baking_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 16) != 0);
}

void FluidDomainSettings_is_cache_baking_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 16; }
    else { data->cache_flag &= ~16; }
}

bool FluidDomainSettings_has_cache_baked_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 32) != 0);
}

void FluidDomainSettings_has_cache_baked_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 32; }
    else { data->cache_flag &= ~32; }
}

bool FluidDomainSettings_is_cache_baking_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 64) != 0);
}

void FluidDomainSettings_is_cache_baking_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 64; }
    else { data->cache_flag &= ~64; }
}

bool FluidDomainSettings_has_cache_baked_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 128) != 0);
}

void FluidDomainSettings_has_cache_baked_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 128; }
    else { data->cache_flag &= ~128; }
}

bool FluidDomainSettings_is_cache_baking_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 256) != 0);
}

void FluidDomainSettings_is_cache_baking_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 256; }
    else { data->cache_flag &= ~256; }
}

bool FluidDomainSettings_has_cache_baked_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 512) != 0);
}

void FluidDomainSettings_has_cache_baked_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 512; }
    else { data->cache_flag &= ~512; }
}

bool FluidDomainSettings_is_cache_baking_any_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 341) != 0);
}

void FluidDomainSettings_is_cache_baking_any_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 341; }
    else { data->cache_flag &= ~341; }
}

bool FluidDomainSettings_has_cache_baked_any_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->cache_flag) & 682) != 0);
}

void FluidDomainSettings_has_cache_baked_any_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag |= 682; }
    else { data->cache_flag &= ~682; }
}

bool FluidDomainSettings_export_manta_script_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 4096) != 0);
}

void FluidDomainSettings_export_manta_script_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 4096; }
    else { data->flags &= ~4096; }
}

int FluidDomainSettings_openvdb_cache_compress_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->openvdb_compression);
}

void FluidDomainSettings_openvdb_cache_compress_type_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->openvdb_compression = value;
}

int FluidDomainSettings_openvdb_data_depth_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->openvdb_data_depth);
}

void FluidDomainSettings_openvdb_data_depth_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->openvdb_data_depth = value;
}

float FluidDomainSettings_time_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->time_scale);
}

void FluidDomainSettings_time_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->time_scale = CLAMPIS(value, 0.0001000000f, 10.0f);
}

float FluidDomainSettings_cfl_condition_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->cfl_condition);
}

void FluidDomainSettings_cfl_condition_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cfl_condition = CLAMPIS(value, 0.0f, 10.0f);
}

bool FluidDomainSettings_use_adaptive_timesteps_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

void FluidDomainSettings_use_adaptive_timesteps_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

int FluidDomainSettings_timesteps_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->timesteps_minimum);
}

void FluidDomainSettings_timesteps_min_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->timesteps_minimum = CLAMPIS(value, 1, 100);
}

int FluidDomainSettings_timesteps_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->timesteps_maximum);
}

void FluidDomainSettings_timesteps_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->timesteps_maximum = CLAMPIS(value, 1, 100);
}

bool FluidDomainSettings_use_slice_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->axis_slice_method) & 1) != 0);
}

void FluidDomainSettings_use_slice_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->axis_slice_method |= 1; }
    else { data->axis_slice_method &= ~1; }
}

int FluidDomainSettings_slice_axis_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->slice_axis);
}

void FluidDomainSettings_slice_axis_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->slice_axis = value;
}

float FluidDomainSettings_slice_per_voxel_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->slice_per_voxel);
}

void FluidDomainSettings_slice_per_voxel_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->slice_per_voxel = CLAMPIS(value, 0.0f, 100.0f);
}

float FluidDomainSettings_slice_depth_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->slice_depth);
}

void FluidDomainSettings_slice_depth_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->slice_depth = CLAMPIS(value, 0.0f, 1.0f);
}

float FluidDomainSettings_display_thickness_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->display_thickness);
}

void FluidDomainSettings_display_thickness_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->display_thickness = CLAMPIS(value, 0.0010000000f, 1000.0f);
}

int FluidDomainSettings_display_interpolation_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->interp_method);
}

void FluidDomainSettings_display_interpolation_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->interp_method = value;
}

bool FluidDomainSettings_show_gridlines_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->show_gridlines);
}

void FluidDomainSettings_show_gridlines_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->show_gridlines = value;
}

bool FluidDomainSettings_show_velocity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->draw_velocity);
}

void FluidDomainSettings_show_velocity_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->draw_velocity = value;
}

int FluidDomainSettings_vector_display_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->vector_draw_type);
}

void FluidDomainSettings_vector_display_type_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_draw_type = value;
}

int FluidDomainSettings_vector_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->vector_field);
}

void FluidDomainSettings_vector_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_field = value;
}

bool FluidDomainSettings_vector_scale_with_magnitude_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->vector_scale_with_magnitude);
}

void FluidDomainSettings_vector_scale_with_magnitude_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_scale_with_magnitude = value;
}

bool FluidDomainSettings_vector_show_mac_x_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->vector_draw_mac_components) & 1) != 0);
}

void FluidDomainSettings_vector_show_mac_x_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components |= 1; }
    else { data->vector_draw_mac_components &= ~1; }
}

bool FluidDomainSettings_vector_show_mac_y_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->vector_draw_mac_components) & 2) != 0);
}

void FluidDomainSettings_vector_show_mac_y_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components |= 2; }
    else { data->vector_draw_mac_components &= ~2; }
}

bool FluidDomainSettings_vector_show_mac_z_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (((data->vector_draw_mac_components) & 4) != 0);
}

void FluidDomainSettings_vector_show_mac_z_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components |= 4; }
    else { data->vector_draw_mac_components &= ~4; }
}

float FluidDomainSettings_vector_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->vector_scale);
}

void FluidDomainSettings_vector_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_scale = CLAMPIS(value, 0.0f, 1000.0f);
}

bool FluidDomainSettings_use_color_ramp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->use_coba);
}

void FluidDomainSettings_use_color_ramp_set(PointerRNA *ptr, bool value)
{
    rna_Fluid_use_color_ramp_set(ptr, value);
}

int FluidDomainSettings_color_ramp_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->coba_field);
}

void FluidDomainSettings_color_ramp_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->coba_field = value;
}

float FluidDomainSettings_color_ramp_field_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->grid_scale);
}

void FluidDomainSettings_color_ramp_field_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->grid_scale = CLAMPIS(value, 0.0010000000f, 100000.0f);
}

PointerRNA FluidDomainSettings_color_ramp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->coba);
}

float FluidDomainSettings_clipping_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->clipping);
}

void FluidDomainSettings_clipping_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->clipping = CLAMPIS(value, 0.0f, 1.0f);
}

int FluidDomainSettings_gridlines_color_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->gridlines_color_field);
}

void FluidDomainSettings_gridlines_color_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_color_field = value;
}

float FluidDomainSettings_gridlines_lower_bound_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->gridlines_lower_bound);
}

void FluidDomainSettings_gridlines_lower_bound_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_lower_bound = value;
}

float FluidDomainSettings_gridlines_upper_bound_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->gridlines_upper_bound);
}

void FluidDomainSettings_gridlines_upper_bound_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_upper_bound = value;
}

void FluidDomainSettings_gridlines_range_color_get(PointerRNA *ptr, float values[4])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->gridlines_range_color)[i]);
    }
}

void FluidDomainSettings_gridlines_range_color_set(PointerRNA *ptr, const float values[4])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->gridlines_range_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

int FluidDomainSettings_gridlines_cell_filter_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->gridlines_cell_filter);
}

void FluidDomainSettings_gridlines_cell_filter_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_cell_filter = value;
}

float FluidDomainSettings_velocity_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->velocity_scale);
}

void FluidDomainSettings_velocity_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->velocity_scale = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA FluidFlowSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FluidFlowSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FluidFlowSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidFlowSettings_rna_properties_get(iter);
    }
}

void FluidFlowSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FluidFlowSettings_rna_properties_get(iter);
    }
}

void FluidFlowSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FluidFlowSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FluidFlowSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float FluidFlowSettings_density_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->density);
}

void FluidFlowSettings_density_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->density = CLAMPIS(value, 0.0f, 10.0f);
}

void FluidFlowSettings_smoke_color_get(PointerRNA *ptr, float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void FluidFlowSettings_smoke_color_set(PointerRNA *ptr, const float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float FluidFlowSettings_fuel_amount_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->fuel_amount);
}

void FluidFlowSettings_fuel_amount_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->fuel_amount = CLAMPIS(value, 0.0f, 10.0f);
}

float FluidFlowSettings_temperature_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->temperature);
}

void FluidFlowSettings_temperature_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->temperature = CLAMPIS(value, -10.0f, 10.0f);
}

PointerRNA FluidFlowSettings_particle_system_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

void FluidFlowSettings_particle_system_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->psys = value.data;
}

int FluidFlowSettings_flow_type_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->type);
}

void FluidFlowSettings_flow_type_set(PointerRNA *ptr, int value)
{
    rna_Fluid_flowtype_set(ptr, value);
}

int FluidFlowSettings_flow_behavior_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->behavior);
}

void FluidFlowSettings_flow_behavior_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->behavior = value;
}

int FluidFlowSettings_flow_source_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->source);
}

void FluidFlowSettings_flow_source_set(PointerRNA *ptr, int value)
{
    rna_Fluid_flowsource_set(ptr, value);
}

bool FluidFlowSettings_use_absolute_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void FluidFlowSettings_use_absolute_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

bool FluidFlowSettings_use_initial_velocity_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void FluidFlowSettings_use_initial_velocity_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

float FluidFlowSettings_velocity_factor_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_multi);
}

void FluidFlowSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->vel_multi = CLAMPIS(value, -100.0f, 100.0f);
}

float FluidFlowSettings_velocity_normal_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_normal);
}

void FluidFlowSettings_velocity_normal_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->vel_normal = CLAMPIS(value, -100.0f, 100.0f);
}

float FluidFlowSettings_velocity_random_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_random);
}

void FluidFlowSettings_velocity_random_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->vel_random = CLAMPIS(value, 0.0f, 10.0f);
}

void FluidFlowSettings_velocity_coord_get(PointerRNA *ptr, float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vel_coord)[i]);
    }
}

void FluidFlowSettings_velocity_coord_set(PointerRNA *ptr, const float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->vel_coord)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
    }
}

float FluidFlowSettings_volume_density_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->volume_density);
}

void FluidFlowSettings_volume_density_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->volume_density = CLAMPIS(value, 0.0f, 1.0f);
}

float FluidFlowSettings_surface_distance_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->surface_distance);
}

void FluidFlowSettings_surface_distance_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->surface_distance = CLAMPIS(value, 0.0f, 10.0f);
}

bool FluidFlowSettings_use_plane_init_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 64) != 0);
}

void FluidFlowSettings_use_plane_init_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 64; }
    else { data->flags &= ~64; }
}

float FluidFlowSettings_particle_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->particle_size);
}

void FluidFlowSettings_particle_size_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->particle_size = CLAMPIS(value, 0.1000000015f, FLT_MAX);
}

bool FluidFlowSettings_use_particle_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

void FluidFlowSettings_use_particle_size_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

bool FluidFlowSettings_use_inflow_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

void FluidFlowSettings_use_inflow_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

int FluidFlowSettings_subframes_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->subframes);
}

void FluidFlowSettings_subframes_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->subframes = CLAMPIS(value, 0, 200);
}

void FluidFlowSettings_density_vertex_group_get(PointerRNA *ptr, char *value)
{
    rna_FluidFlow_density_vgroup_get(ptr, value);
}

int FluidFlowSettings_density_vertex_group_length(PointerRNA *ptr)
{
    return rna_FluidFlow_density_vgroup_length(ptr);
}

void FluidFlowSettings_density_vertex_group_set(PointerRNA *ptr, const char *value)
{
    rna_FluidFlow_density_vgroup_set(ptr, value);
}

bool FluidFlowSettings_use_texture_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

void FluidFlowSettings_use_texture_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

int FluidFlowSettings_texture_map_type_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->texture_type);
}

void FluidFlowSettings_texture_map_type_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->texture_type = value;
}

void FluidFlowSettings_uv_layer_get(PointerRNA *ptr, char *value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int FluidFlowSettings_uv_layer_length(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return strlen(data->uvlayer_name);
}

void FluidFlowSettings_uv_layer_set(PointerRNA *ptr, const char *value)
{
    rna_FluidFlow_uvlayer_set(ptr, value);
}

PointerRNA FluidFlowSettings_noise_texture_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->noise_texture);
}

void FluidFlowSettings_noise_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);

    if (data->noise_texture) {
        id_us_min((ID *)data->noise_texture);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->noise_texture = value.data;
}

float FluidFlowSettings_texture_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->texture_size);
}

void FluidFlowSettings_texture_size_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->texture_size = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float FluidFlowSettings_texture_offset_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->texture_offset);
}

void FluidFlowSettings_texture_offset_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->texture_offset = CLAMPIS(value, 0.0f, 200.0f);
}

static PointerRNA FluidEffectorSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FluidEffectorSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FluidEffectorSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidEffectorSettings_rna_properties_get(iter);
    }
}

void FluidEffectorSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FluidEffectorSettings_rna_properties_get(iter);
    }
}

void FluidEffectorSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FluidEffectorSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FluidEffectorSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int FluidEffectorSettings_effector_type_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->type);
}

void FluidEffectorSettings_effector_type_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->type = value;
}

float FluidEffectorSettings_surface_distance_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (float)(data->surface_distance);
}

void FluidEffectorSettings_surface_distance_set(PointerRNA *ptr, float value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->surface_distance = CLAMPIS(value, 0.0f, 10.0f);
}

bool FluidEffectorSettings_use_plane_init_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void FluidEffectorSettings_use_plane_init_set(PointerRNA *ptr, bool value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

float FluidEffectorSettings_velocity_factor_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (float)(data->vel_multi);
}

void FluidEffectorSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->vel_multi = CLAMPIS(value, -100.0f, 100.0f);
}

int FluidEffectorSettings_guide_mode_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->guide_mode);
}

void FluidEffectorSettings_guide_mode_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->guide_mode = value;
}

bool FluidEffectorSettings_use_effector_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void FluidEffectorSettings_use_effector_set(PointerRNA *ptr, bool value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

int FluidEffectorSettings_subframes_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->subframes);
}

void FluidEffectorSettings_subframes_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->subframes = CLAMPIS(value, 0, 200);
}

int FluidDomainSettings_density_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_grid_get_length(ptr, arraylen);
}

int FluidDomainSettings_velocity_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_velocity_grid_get_length(ptr, arraylen);
}

int FluidDomainSettings_flame_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_grid_get_length(ptr, arraylen);
}

int FluidDomainSettings_color_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_color_grid_get_length(ptr, arraylen);
}

int FluidDomainSettings_heat_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_heat_grid_get_length(ptr, arraylen);
}

int FluidDomainSettings_temperature_grid_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FluidModifier_grid_get_length(ptr, arraylen);
}




/* Domain Settings */
CollectionPropertyRNA rna_FluidDomainSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidDomainSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_rna_properties_begin, FluidDomainSettings_rna_properties_next, FluidDomainSettings_rna_properties_end, FluidDomainSettings_rna_properties_get, NULL, NULL, FluidDomainSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FluidDomainSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_effector_weights, (PropertyRNA *)&rna_FluidDomainSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FluidDomainSettings_effector_weights = {
	{(PropertyRNA *)&rna_FluidDomainSettings_effector_group, (PropertyRNA *)&rna_FluidDomainSettings_rna_type,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

PointerPropertyRNA rna_FluidDomainSettings_effector_group = {
	{(PropertyRNA *)&rna_FluidDomainSettings_fluid_group, (PropertyRNA *)&rna_FluidDomainSettings_effector_weights,
	-1, "effector_group", 8388737, 0, 0, 0, 0, "Effector Collection",
	"Limit effectors to this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_effector_group_get, FluidDomainSettings_effector_group_set, NULL, NULL,&RNA_Collection
};

PointerPropertyRNA rna_FluidDomainSettings_fluid_group = {
	{(PropertyRNA *)&rna_FluidDomainSettings_force_collection, (PropertyRNA *)&rna_FluidDomainSettings_effector_group,
	-1, "fluid_group", 8388737, 0, 0, 0, 0, "Fluid Collection",
	"Limit fluid objects to this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_fluid_group_get, FluidDomainSettings_fluid_group_set, NULL, NULL,&RNA_Collection
};

PointerPropertyRNA rna_FluidDomainSettings_force_collection = {
	{(PropertyRNA *)&rna_FluidDomainSettings_density_grid, (PropertyRNA *)&rna_FluidDomainSettings_fluid_group,
	-1, "force_collection", 8388737, 0, 0, 0, 0, "Force Collection",
	"Limit forces to this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_force_collection_get, FluidDomainSettings_force_collection_set, NULL, NULL,&RNA_Collection
};

static float rna_FluidDomainSettings_density_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FluidDomainSettings_density_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_velocity_grid, (PropertyRNA *)&rna_FluidDomainSettings_force_collection,
	-1, "density_grid", 131074, 0, 0, 0, 0, "Density Grid",
	"Smoke density grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FluidModifier_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FluidDomainSettings_density_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_density_grid_default
};

static float rna_FluidDomainSettings_velocity_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FluidDomainSettings_velocity_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_grid, (PropertyRNA *)&rna_FluidDomainSettings_density_grid,
	-1, "velocity_grid", 131074, 0, 0, 0, 0, "Velocity Grid",
	"Smoke velocity grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FluidModifier_velocity_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FluidDomainSettings_velocity_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_velocity_grid_default
};

static float rna_FluidDomainSettings_flame_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FluidDomainSettings_flame_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_grid, (PropertyRNA *)&rna_FluidDomainSettings_velocity_grid,
	-1, "flame_grid", 131074, 0, 0, 0, 0, "Flame Grid",
	"Smoke flame grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FluidModifier_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FluidDomainSettings_flame_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_flame_grid_default
};

static float rna_FluidDomainSettings_color_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FluidDomainSettings_color_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_heat_grid, (PropertyRNA *)&rna_FluidDomainSettings_flame_grid,
	-1, "color_grid", 131074, 0, 0, 0, 0, "Color Grid",
	"Smoke color grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FluidModifier_color_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FluidDomainSettings_color_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_color_grid_default
};

static float rna_FluidDomainSettings_heat_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FluidDomainSettings_heat_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_temperature_grid, (PropertyRNA *)&rna_FluidDomainSettings_color_grid,
	-1, "heat_grid", 131074, 0, 0, 0, 0, "Heat Grid",
	"Smoke heat grid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FluidModifier_heat_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FluidDomainSettings_heat_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_heat_grid_default
};

static float rna_FluidDomainSettings_temperature_grid_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FluidDomainSettings_temperature_grid = {
	{(PropertyRNA *)&rna_FluidDomainSettings_start_point, (PropertyRNA *)&rna_FluidDomainSettings_heat_grid,
	-1, "temperature_grid", 131074, 0, 0, 0, 0, "Temperature Grid",
	"Smoke temperature grid, range 0 to 1 represents 0 to 1000K",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FluidModifier_grid_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FluidDomainSettings_temperature_grid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_temperature_grid_default
};

static float rna_FluidDomainSettings_start_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidDomainSettings_start_point = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cell_size, (PropertyRNA *)&rna_FluidDomainSettings_temperature_grid,
	-1, "start_point", 2, 0, 0, 4, 0, "p0",
	"Start point",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, p0), 5, NULL},
	NULL, NULL, FluidDomainSettings_start_point_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_start_point_default
};

static float rna_FluidDomainSettings_cell_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidDomainSettings_cell_size = {
	{(PropertyRNA *)&rna_FluidDomainSettings_domain_resolution, (PropertyRNA *)&rna_FluidDomainSettings_start_point,
	-1, "cell_size", 2, 0, 0, 4, 0, "cell_size",
	"Cell Size",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cell_size), 5, NULL},
	NULL, NULL, FluidDomainSettings_cell_size_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_cell_size_default
};

static int rna_FluidDomainSettings_domain_resolution_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_FluidDomainSettings_domain_resolution = {
	{(PropertyRNA *)&rna_FluidDomainSettings_additional_res, (PropertyRNA *)&rna_FluidDomainSettings_cell_size,
	-1, "domain_resolution", 2, 0, 0, 4, 0, "res",
	"Smoke Grid Resolution",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, res), 0, NULL},
	NULL, NULL, FluidDomainSettings_domain_resolution_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_FluidDomainSettings_domain_resolution_default
};

IntPropertyRNA rna_FluidDomainSettings_additional_res = {
	{(PropertyRNA *)&rna_FluidDomainSettings_adapt_margin, (PropertyRNA *)&rna_FluidDomainSettings_domain_resolution,
	-1, "additional_res", 3, 0, 0, 4, 0, "Additional",
	"Maximum number of additional cells",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, adapt_res), 0, NULL},
	FluidDomainSettings_additional_res_get, FluidDomainSettings_additional_res_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 512, 0, 512, 1, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_adapt_margin = {
	{(PropertyRNA *)&rna_FluidDomainSettings_adapt_threshold, (PropertyRNA *)&rna_FluidDomainSettings_additional_res,
	-1, "adapt_margin", 3, 0, 0, 4, 0, "Margin",
	"Margin added around fluid to minimize boundary interference",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, adapt_margin), 0, NULL},
	FluidDomainSettings_adapt_margin_get, FluidDomainSettings_adapt_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2, 24, 2, 24, 1, 4, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_adapt_threshold = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_domain, (PropertyRNA *)&rna_FluidDomainSettings_adapt_margin,
	-1, "adapt_threshold", 3, 0, 0, 4, 0, "Threshold",
	"Minimum amount of fluid a cell can contain before it is considered empty",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, adapt_threshold), 5, NULL},
	FluidDomainSettings_adapt_threshold_get, FluidDomainSettings_adapt_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0199999996f, 6, 0.0199999996f, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_domain = {
	{(PropertyRNA *)&rna_FluidDomainSettings_resolution_max, (PropertyRNA *)&rna_FluidDomainSettings_adapt_threshold,
	-1, "use_adaptive_domain", 1, 0, 0, 0, 0, "Adaptive Domain",
	"Adapt simulation resolution and size to fluid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_adaptive_domain_get, FluidDomainSettings_use_adaptive_domain_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_resolution_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_front, (PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_domain,
	-1, "resolution_max", 1, 0, 0, 4, 0, "Maximum Resolution",
	"Resolution used for the fluid domain. Value corresponds to the longest domain side (resolution for other domain sides is calculated automatically)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, maxres), 0, NULL},
	FluidDomainSettings_resolution_max_get, FluidDomainSettings_resolution_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 24, 10000, 6, 10000, 2, 32, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_front = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_back, (PropertyRNA *)&rna_FluidDomainSettings_resolution_max,
	-1, "use_collision_border_front", 3, 0, 0, 0, 0, "Front",
	"Enable collisions with front domain border",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_collision_border_front_get, FluidDomainSettings_use_collision_border_front_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_back = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_right, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_front,
	-1, "use_collision_border_back", 3, 0, 0, 0, 0, "Back",
	"Enable collisions with back domain border",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_collision_border_back_get, FluidDomainSettings_use_collision_border_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_right = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_left, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_back,
	-1, "use_collision_border_right", 3, 0, 0, 0, 0, "Right",
	"Enable collisions with right domain border",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_collision_border_right_get, FluidDomainSettings_use_collision_border_right_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_left = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_top, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_right,
	-1, "use_collision_border_left", 3, 0, 0, 0, 0, "Left",
	"Enable collisions with left domain border",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_collision_border_left_get, FluidDomainSettings_use_collision_border_left_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_top = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_bottom, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_left,
	-1, "use_collision_border_top", 3, 0, 0, 0, 0, "Top",
	"Enable collisions with top domain border",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_collision_border_top_get, FluidDomainSettings_use_collision_border_top_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_bottom = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gravity, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_top,
	-1, "use_collision_border_bottom", 3, 0, 0, 0, 0, "Bottom",
	"Enable collisions with bottom domain border",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_collision_border_bottom_get, FluidDomainSettings_use_collision_border_bottom_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_FluidDomainSettings_gravity_default[3] = {
	0.0f,
	0.0f,
	-9.8100004196f
};

FloatPropertyRNA rna_FluidDomainSettings_gravity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_domain_type, (PropertyRNA *)&rna_FluidDomainSettings_use_collision_border_bottom,
	-1, "gravity", 3, 0, 0, 4, 0, "Gravity",
	"Gravity in X, Y and Z direction",
	0, "*",
	PROP_FLOAT, PROP_ACCELERATION | PROP_UNIT_ACCELERATION, NULL, 1, {3, 0, 0}, 3,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gravity), 5, NULL},
	NULL, NULL, FluidDomainSettings_gravity_get, FluidDomainSettings_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_FluidDomainSettings_gravity_default
};

static const EnumPropertyItem rna_FluidDomainSettings_domain_type_items[3] = {
	{0, "GAS", 0, "Gas", "Create domain for gases"},
	{1, "LIQUID", 0, "Liquid", "Create domain for liquids"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_domain_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_delete_in_obstacle, (PropertyRNA *)&rna_FluidDomainSettings_gravity,
	-1, "domain_type", 1, 0, 0, 0, 0, "Domain Type",
	"Change domain type of the simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flip_parts_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_domain_type_get, FluidDomainSettings_domain_type_set, NULL, NULL, NULL, rna_FluidDomainSettings_domain_type_items, 2, 0
};

BoolPropertyRNA rna_FluidDomainSettings_delete_in_obstacle = {
	{(PropertyRNA *)&rna_FluidDomainSettings_alpha, (PropertyRNA *)&rna_FluidDomainSettings_domain_type,
	-1, "delete_in_obstacle", 3, 0, 0, 0, 0, "Clear In Obstacle",
	"Delete fluid inside obstacles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_delete_in_obstacle_get, FluidDomainSettings_delete_in_obstacle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_alpha = {
	{(PropertyRNA *)&rna_FluidDomainSettings_beta, (PropertyRNA *)&rna_FluidDomainSettings_delete_in_obstacle,
	-1, "alpha", 3, 0, 0, 4, 0, "Buoyancy Density",
	"Buoyant force based on smoke density (higher value results in faster rising smoke)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, alpha), 5, NULL},
	FluidDomainSettings_alpha_get, FluidDomainSettings_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 1.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_beta = {
	{(PropertyRNA *)&rna_FluidDomainSettings_dissolve_speed, (PropertyRNA *)&rna_FluidDomainSettings_alpha,
	-1, "beta", 3, 0, 0, 4, 0, "Buoyancy Heat",
	"Buoyant force based on smoke heat (higher value results in faster rising smoke)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, beta), 5, NULL},
	FluidDomainSettings_beta_get, FluidDomainSettings_beta_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 1.0f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_dissolve_speed = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vorticity, (PropertyRNA *)&rna_FluidDomainSettings_beta,
	-1, "dissolve_speed", 3, 0, 0, 4, 0, "Dissolve Speed",
	"Determine how quickly the smoke dissolves (lower value makes smoke disappear faster)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, diss_speed), 0, NULL},
	FluidDomainSettings_dissolve_speed_get, FluidDomainSettings_dissolve_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10000, 1, 10000, 1, 5, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_vorticity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_highres_sampling, (PropertyRNA *)&rna_FluidDomainSettings_dissolve_speed,
	-1, "vorticity", 3, 0, 0, 4, 0, "Vorticity",
	"Amount of turbulence and rotation in smoke",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vorticity), 5, NULL},
	FluidDomainSettings_vorticity_get, FluidDomainSettings_vorticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 4.0f, 0.0f, 4.0f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_highres_sampling_items[4] = {
	{2, "FULLSAMPLE", 0, "Full Sample", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{0, "NEAREST", 0, "Nearest", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_highres_sampling = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke, (PropertyRNA *)&rna_FluidDomainSettings_vorticity,
	-1, "highres_sampling", 3, 0, 0, 4, 0, "Emitter",
	"Method for sampling the high resolution flow",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, highres_sampling), 0, NULL},
	FluidDomainSettings_highres_sampling_get, FluidDomainSettings_highres_sampling_set, NULL, NULL, NULL, rna_FluidDomainSettings_highres_sampling_items, 3, 2
};

BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke_log, (PropertyRNA *)&rna_FluidDomainSettings_highres_sampling,
	-1, "use_dissolve_smoke", 3, 0, 0, 0, 0, "Dissolve Smoke",
	"Let smoke disappear over time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_dissolve_smoke_get, FluidDomainSettings_use_dissolve_smoke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke_log = {
	{(PropertyRNA *)&rna_FluidDomainSettings_burning_rate, (PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke,
	-1, "use_dissolve_smoke_log", 3, 0, 0, 0, 0, "Logarithmic Dissolve",
	"Dissolve smoke in a logarithmic fashion. Dissolves quickly at first, but lingers longer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_dissolve_smoke_log_get, FluidDomainSettings_use_dissolve_smoke_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_burning_rate = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_smoke, (PropertyRNA *)&rna_FluidDomainSettings_use_dissolve_smoke_log,
	-1, "burning_rate", 3, 0, 0, 4, 0, "Speed",
	"Speed of the burning reaction (higher value results in smaller flames)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, burning_rate), 5, NULL},
	FluidDomainSettings_burning_rate_get, FluidDomainSettings_burning_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 2.0f, 0.0099999998f, 4.0f, 1.0f, 5, 0.7500000000f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_flame_smoke = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_vorticity, (PropertyRNA *)&rna_FluidDomainSettings_burning_rate,
	-1, "flame_smoke", 3, 0, 0, 4, 0, "Smoke",
	"Amount of smoke created by burning fuel",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_smoke), 5, NULL},
	FluidDomainSettings_flame_smoke_get, FluidDomainSettings_flame_smoke_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 4.0f, 0.0f, 8.0f, 1.0f, 5, 1.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_flame_vorticity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_ignition, (PropertyRNA *)&rna_FluidDomainSettings_flame_smoke,
	-1, "flame_vorticity", 3, 0, 0, 4, 0, "Vorticity",
	"Additional vorticity for the flames",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_vorticity), 5, NULL},
	FluidDomainSettings_flame_vorticity_get, FluidDomainSettings_flame_vorticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 2.0f, 1.0f, 5, 0.5000000000f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_flame_ignition = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_max_temp, (PropertyRNA *)&rna_FluidDomainSettings_flame_vorticity,
	-1, "flame_ignition", 3, 0, 0, 4, 0, "Minimum",
	"Minimum temperature of the flames (higher value results in faster rising flames)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_ignition), 5, NULL},
	FluidDomainSettings_flame_ignition_get, FluidDomainSettings_flame_ignition_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, 2.5000000000f, 0.5000000000f, 5.0f, 1.0f, 5, 1.5000000000f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_flame_max_temp = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flame_smoke_color, (PropertyRNA *)&rna_FluidDomainSettings_flame_ignition,
	-1, "flame_max_temp", 3, 0, 0, 4, 0, "Maximum",
	"Maximum temperature of the flames (higher value results in faster rising flames)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_max_temp), 5, NULL},
	FluidDomainSettings_flame_max_temp_get, FluidDomainSettings_flame_max_temp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 5.0f, 1.0f, 10.0f, 1.0f, 5, 3.0f, NULL
};

static float rna_FluidDomainSettings_flame_smoke_color_default[3] = {
	0.6999999881f,
	0.6999999881f,
	0.6999999881f
};

FloatPropertyRNA rna_FluidDomainSettings_flame_smoke_color = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_strength, (PropertyRNA *)&rna_FluidDomainSettings_flame_max_temp,
	-1, "flame_smoke_color", 3, 0, 0, 4, 0, "Smoke Color",
	"Color of smoke emitted from burning fuel",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flame_smoke_color), 5, NULL},
	NULL, NULL, FluidDomainSettings_flame_smoke_color_get, FluidDomainSettings_flame_smoke_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_flame_smoke_color_default
};

FloatPropertyRNA rna_FluidDomainSettings_noise_strength = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_pos_scale, (PropertyRNA *)&rna_FluidDomainSettings_flame_smoke_color,
	-1, "noise_strength", 3, 0, 0, 4, 0, "Strength",
	"Strength of noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_strength), 5, NULL},
	FluidDomainSettings_noise_strength_get, FluidDomainSettings_noise_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_noise_pos_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_time_anim, (PropertyRNA *)&rna_FluidDomainSettings_noise_strength,
	-1, "noise_pos_scale", 3, 0, 0, 4, 0, "Scale",
	"Scale of noise (higher value results in larger vortices)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_pos_scale), 5, NULL},
	FluidDomainSettings_noise_pos_scale_get, FluidDomainSettings_noise_pos_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 2.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_noise_time_anim = {
	{(PropertyRNA *)&rna_FluidDomainSettings_noise_scale, (PropertyRNA *)&rna_FluidDomainSettings_noise_pos_scale,
	-1, "noise_time_anim", 3, 0, 0, 4, 0, "Time",
	"Animation time of noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_time_anim), 5, NULL},
	FluidDomainSettings_noise_time_anim_get, FluidDomainSettings_noise_time_anim_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 0.1000000015f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_noise_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_noise, (PropertyRNA *)&rna_FluidDomainSettings_noise_time_anim,
	-1, "noise_scale", 1, 0, 0, 4, 0, "Noise Scale",
	"The noise simulation is scaled up by this factor (compared to the base resolution of the domain)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_noise_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, noise_scale), 0, NULL},
	FluidDomainSettings_noise_scale_get, FluidDomainSettings_noise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 100, 1, 2, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_simulation_method, (PropertyRNA *)&rna_FluidDomainSettings_noise_scale,
	-1, "use_noise", 1, 0, 0, 0, 0, "Use Noise",
	"Enable fluid noise (using amplification)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_noise_get, FluidDomainSettings_use_noise_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_simulation_method_items[3] = {
	{1, "FLIP", 0, "FLIP", "Use FLIP as the simulation method (more splashy behavior)"},
	{2, "APIC", 0, "APIC", "Use APIC as the simulation method (more energetic and stable behavior)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_simulation_method = {
	{(PropertyRNA *)&rna_FluidDomainSettings_flip_ratio, (PropertyRNA *)&rna_FluidDomainSettings_use_noise,
	-1, "simulation_method", 1, 0, 0, 4, 0, "Simulation Method",
	"Change the underlying simulation method",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, simulation_method), 1, NULL},
	FluidDomainSettings_simulation_method_get, FluidDomainSettings_simulation_method_set, NULL, NULL, NULL, rna_FluidDomainSettings_simulation_method_items, 2, 1
};

FloatPropertyRNA rna_FluidDomainSettings_flip_ratio = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_randomness, (PropertyRNA *)&rna_FluidDomainSettings_simulation_method,
	-1, "flip_ratio", 3, 0, 0, 4, 0, "FLIP Ratio",
	"PIC/FLIP Ratio. A value of 1.0 will result in a completely FLIP based simulation. Use a lower value for simulations which should produce smaller splashes",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, flip_ratio), 5, NULL},
	FluidDomainSettings_flip_ratio_get, FluidDomainSettings_flip_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.9700000286f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_particle_randomness = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_number, (PropertyRNA *)&rna_FluidDomainSettings_flip_ratio,
	-1, "particle_randomness", 3, 0, 0, 4, 0, "Randomness",
	"Randomness factor for particle sampling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_randomness), 5, NULL},
	FluidDomainSettings_particle_randomness_get, FluidDomainSettings_particle_randomness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.1000000015f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_particle_number = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_min, (PropertyRNA *)&rna_FluidDomainSettings_particle_randomness,
	-1, "particle_number", 3, 0, 0, 4, 0, "Number",
	"Particle number factor (higher value results in more particles)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_number), 0, NULL},
	FluidDomainSettings_particle_number_get, FluidDomainSettings_particle_number_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 5, 1, 5, 1, 2, NULL
};

IntPropertyRNA rna_FluidDomainSettings_particle_min = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_max, (PropertyRNA *)&rna_FluidDomainSettings_particle_number,
	-1, "particle_min", 3, 0, 0, 4, 0, "Minimum",
	"Minimum number of particles per cell (ensures that each cell has at least this amount of particles)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_minimum), 0, NULL},
	FluidDomainSettings_particle_min_get, FluidDomainSettings_particle_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000, 0, 1000, 1, 8, NULL
};

IntPropertyRNA rna_FluidDomainSettings_particle_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_radius, (PropertyRNA *)&rna_FluidDomainSettings_particle_min,
	-1, "particle_max", 3, 0, 0, 4, 0, "Maximum",
	"Maximum number of particles per cell (ensures that each cell has at most this amount of particles)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_maximum), 0, NULL},
	FluidDomainSettings_particle_max_get, FluidDomainSettings_particle_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000, 0, 1000, 1, 16, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_particle_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_band_width, (PropertyRNA *)&rna_FluidDomainSettings_particle_max,
	-1, "particle_radius", 3, 0, 0, 4, 0, "Radius",
	"Particle radius factor. Increase this value if the simulation appears to leak volume, decrease it if the simulation seems to gain volume",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_radius), 5, NULL},
	FluidDomainSettings_particle_radius_get, FluidDomainSettings_particle_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_particle_band_width = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_flip_particles, (PropertyRNA *)&rna_FluidDomainSettings_particle_radius,
	-1, "particle_band_width", 3, 0, 0, 4, 0, "Width",
	"Particle (narrow) band width (higher value results in thicker band and more particles)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_band_width), 5, NULL},
	FluidDomainSettings_particle_band_width_get, FluidDomainSettings_particle_band_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 3.0f, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_flip_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_fractions, (PropertyRNA *)&rna_FluidDomainSettings_particle_band_width,
	-1, "use_flip_particles", 1, 0, 0, 0, 0, "FLIP",
	"Create liquid particle system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flip_parts_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_flip_particles_get, FluidDomainSettings_use_flip_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_fractions = {
	{(PropertyRNA *)&rna_FluidDomainSettings_fractions_threshold, (PropertyRNA *)&rna_FluidDomainSettings_use_flip_particles,
	-1, "use_fractions", 1, 0, 0, 0, 0, "Fractional Obstacles",
	"Fractional obstacles improve and smoothen the fluid-obstacle boundary",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_fractions_get, FluidDomainSettings_use_fractions_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_fractions_threshold = {
	{(PropertyRNA *)&rna_FluidDomainSettings_fractions_distance, (PropertyRNA *)&rna_FluidDomainSettings_use_fractions,
	-1, "fractions_threshold", 3, 0, 0, 4, 0, "Obstacle Threshold",
	"Determines how much fluid is allowed in an obstacle cell (higher values will tag a boundary cell as an obstacle easier and reduce the boundary smoothening effect)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, fractions_threshold), 5, NULL},
	FluidDomainSettings_fractions_threshold_get, FluidDomainSettings_fractions_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0010000000f, 1.0f, 0.0500000007f, -1, 0.0500000007f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_fractions_distance = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sys_particle_maximum, (PropertyRNA *)&rna_FluidDomainSettings_fractions_threshold,
	-1, "fractions_distance", 3, 0, 0, 4, 0, "Obstacle Distance",
	"Determines how far apart fluid and obstacle are (higher values will result in fluid being further away from obstacles, smaller values will let fluid move towards the inside of obstacles)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, fractions_distance), 5, NULL},
	FluidDomainSettings_fractions_distance_get, FluidDomainSettings_fractions_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 5.0f, -5.0f, 5.0f, 0.1000000015f, -1, 0.5000000000f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_sys_particle_maximum = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_viscosity, (PropertyRNA *)&rna_FluidDomainSettings_fractions_distance,
	-1, "sys_particle_maximum", 3, 0, 0, 4, 0, "System Maximum",
	"Maximum number of fluid particles that are allowed in this simulation",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sys_particle_maximum), 0, NULL},
	FluidDomainSettings_sys_particle_maximum_get, FluidDomainSettings_sys_particle_maximum_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_viscosity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_viscosity_value, (PropertyRNA *)&rna_FluidDomainSettings_sys_particle_maximum,
	-1, "use_viscosity", 3, 0, 0, 0, 0, "Use Viscosity",
	"Enable fluid viscosity settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_viscosity_get, FluidDomainSettings_use_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_viscosity_value = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_diffusion, (PropertyRNA *)&rna_FluidDomainSettings_use_viscosity,
	-1, "viscosity_value", 3, 0, 0, 4, 0, "Strength",
	"Viscosity of liquid (higher values result in more viscous fluids, a value of 0 will still apply some viscosity)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, viscosity_value), 5, NULL},
	FluidDomainSettings_viscosity_value_get, FluidDomainSettings_viscosity_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 3, 0.0500000007f, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_diffusion = {
	{(PropertyRNA *)&rna_FluidDomainSettings_surface_tension, (PropertyRNA *)&rna_FluidDomainSettings_viscosity_value,
	-1, "use_diffusion", 1, 0, 0, 0, 0, "Use Diffusion",
	"Enable fluid diffusion settings (e.g. viscosity, surface tension)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_diffusion_get, FluidDomainSettings_use_diffusion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_surface_tension = {
	{(PropertyRNA *)&rna_FluidDomainSettings_viscosity_base, (PropertyRNA *)&rna_FluidDomainSettings_use_diffusion,
	-1, "surface_tension", 3, 0, 0, 4, 0, "Tension",
	"Surface tension of liquid (higher value results in greater hydrophobic behavior)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, surface_tension), 5, NULL},
	FluidDomainSettings_surface_tension_get, FluidDomainSettings_surface_tension_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_viscosity_base = {
	{(PropertyRNA *)&rna_FluidDomainSettings_viscosity_exponent, (PropertyRNA *)&rna_FluidDomainSettings_surface_tension,
	-1, "viscosity_base", 3, 0, 0, 4, 0, "Viscosity Base",
	"Viscosity setting: value that is multiplied by 10 to the power of (exponent*-1)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, viscosity_base), 5, NULL},
	FluidDomainSettings_viscosity_base_get, FluidDomainSettings_viscosity_base_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_viscosity_exponent = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_upper, (PropertyRNA *)&rna_FluidDomainSettings_viscosity_base,
	-1, "viscosity_exponent", 3, 0, 0, 4, 0, "Viscosity Exponent",
	"Negative exponent for the viscosity value (to simplify entering small values e.g. 5*10^-6)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, viscosity_exponent), 0, NULL},
	FluidDomainSettings_viscosity_exponent_get, FluidDomainSettings_viscosity_exponent_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10, 0, 10, 1, 6, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_upper = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_lower, (PropertyRNA *)&rna_FluidDomainSettings_viscosity_exponent,
	-1, "mesh_concave_upper", 3, 0, 0, 4, 0, "Upper Concavity",
	"Upper mesh concavity bound (high values tend to smoothen and fill out concave regions)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_concave_upper), 5, NULL},
	FluidDomainSettings_mesh_concave_upper_get, FluidDomainSettings_mesh_concave_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 3.5000000000f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_lower = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_pos, (PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_upper,
	-1, "mesh_concave_lower", 3, 0, 0, 4, 0, "Lower Concavity",
	"Lower mesh concavity bound (high values tend to smoothen and fill out concave regions)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_concave_lower), 5, NULL},
	FluidDomainSettings_mesh_concave_lower_get, FluidDomainSettings_mesh_concave_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.4000000060f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_pos = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_neg, (PropertyRNA *)&rna_FluidDomainSettings_mesh_concave_lower,
	-1, "mesh_smoothen_pos", 3, 0, 0, 4, 0, "Smoothen Pos",
	"Positive mesh smoothening",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_smoothen_pos), 0, NULL},
	FluidDomainSettings_mesh_smoothen_pos_get, FluidDomainSettings_mesh_smoothen_pos_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 1, NULL
};

IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_neg = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_scale, (PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_pos,
	-1, "mesh_smoothen_neg", 3, 0, 0, 4, 0, "Smoothen Neg",
	"Negative mesh smoothening",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_smoothen_neg), 0, NULL},
	FluidDomainSettings_mesh_smoothen_neg_get, FluidDomainSettings_mesh_smoothen_neg_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 1, NULL
};

IntPropertyRNA rna_FluidDomainSettings_mesh_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_generator, (PropertyRNA *)&rna_FluidDomainSettings_mesh_smoothen_neg,
	-1, "mesh_scale", 1, 0, 0, 4, 0, "Mesh scale",
	"The mesh simulation is scaled up by this factor (compared to the base resolution of the domain). For best meshing, it is recommended to adjust the mesh particle radius alongside this value",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_mesh_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_scale), 0, NULL},
	FluidDomainSettings_mesh_scale_get, FluidDomainSettings_mesh_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 100, 1, 2, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_mesh_generator_items[3] = {
	{0, "IMPROVED", 0, "Final", "Use improved particle level set (slower but more precise and with mesh smoothening options)"},
	{1, "UNION", 0, "Preview", "Use union particle level set (faster but lower quality)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_mesh_generator = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_mesh, (PropertyRNA *)&rna_FluidDomainSettings_mesh_scale,
	-1, "mesh_generator", 3, 0, 0, 4, 0, "Mesh generator",
	"Which particle level set generator to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_generator), 1, NULL},
	FluidDomainSettings_mesh_generator_get, FluidDomainSettings_mesh_generator_set, NULL, NULL, NULL, rna_FluidDomainSettings_mesh_generator_items, 2, 0
};

BoolPropertyRNA rna_FluidDomainSettings_use_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_speed_vectors, (PropertyRNA *)&rna_FluidDomainSettings_mesh_generator,
	-1, "use_mesh", 1, 0, 0, 0, 0, "Use Mesh",
	"Enable fluid mesh (using amplification)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_mesh_get, FluidDomainSettings_use_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_speed_vectors = {
	{(PropertyRNA *)&rna_FluidDomainSettings_mesh_particle_radius, (PropertyRNA *)&rna_FluidDomainSettings_use_mesh,
	-1, "use_speed_vectors", 1, 0, 0, 0, 0, "Speed Vectors",
	"Caches velocities of mesh vertices. These will be used (automatically) when rendering with motion blur enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_speed_vectors_get, FluidDomainSettings_use_speed_vectors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_mesh_particle_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_wavecrest, (PropertyRNA *)&rna_FluidDomainSettings_use_speed_vectors,
	-1, "mesh_particle_radius", 3, 0, 0, 4, 0, "Radius",
	"Particle radius factor (higher value results in larger (meshed) particles). Needs to be adjusted after changing the mesh scale",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, mesh_particle_radius), 5, NULL},
	FluidDomainSettings_mesh_particle_radius_get, FluidDomainSettings_mesh_particle_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 2.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_wavecrest = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_wavecrest, (PropertyRNA *)&rna_FluidDomainSettings_mesh_particle_radius,
	-1, "sndparticle_potential_min_wavecrest", 3, 0, 0, 4, 0, "Minimum Wave Crest Potential",
	"Lower clamping threshold for marking fluid cells as wave crests (lower value results in more marked cells)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_min_wc), 5, NULL},
	FluidDomainSettings_sndparticle_potential_min_wavecrest_get, FluidDomainSettings_sndparticle_potential_min_wavecrest_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 2.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_wavecrest = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_trappedair, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_wavecrest,
	-1, "sndparticle_potential_max_wavecrest", 3, 0, 0, 4, 0, "Maximum Wave Crest Potential",
	"Upper clamping threshold for marking fluid cells as wave crests (higher value results in less marked cells)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_max_wc), 5, NULL},
	FluidDomainSettings_sndparticle_potential_max_wavecrest_get, FluidDomainSettings_sndparticle_potential_max_wavecrest_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 8.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_trappedair = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_trappedair, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_wavecrest,
	-1, "sndparticle_potential_min_trappedair", 3, 0, 0, 4, 0, "Minimum Trapped Air Potential",
	"Lower clamping threshold for marking fluid cells where air is trapped (lower value results in more marked cells)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_min_ta), 5, NULL},
	FluidDomainSettings_sndparticle_potential_min_trappedair_get, FluidDomainSettings_sndparticle_potential_min_trappedair_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, 1000.0f, 100.0f, 3, 5.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_trappedair = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_energy, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_trappedair,
	-1, "sndparticle_potential_max_trappedair", 3, 0, 0, 4, 0, "Maximum Trapped Air Potential",
	"Upper clamping threshold for marking fluid cells where air is trapped (higher value results in less marked cells)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_max_ta), 5, NULL},
	FluidDomainSettings_sndparticle_potential_max_trappedair_get, FluidDomainSettings_sndparticle_potential_max_trappedair_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 20.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_energy = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_energy, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_trappedair,
	-1, "sndparticle_potential_min_energy", 3, 0, 0, 4, 0, "Minimum Kinetic Energy Potential",
	"Lower clamping threshold that indicates the fluid speed where cells start to emit particles (lower values result in generally more particles)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_min_k), 5, NULL},
	FluidDomainSettings_sndparticle_potential_min_energy_get, FluidDomainSettings_sndparticle_potential_min_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_energy = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_wavecrest, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_min_energy,
	-1, "sndparticle_potential_max_energy", 3, 0, 0, 4, 0, "Maximum Kinetic Energy Potential",
	"Upper clamping threshold that indicates the fluid speed where cells no longer emit more particles (higher value results in generally less particles)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_tau_max_k), 5, NULL},
	FluidDomainSettings_sndparticle_potential_max_energy_get, FluidDomainSettings_sndparticle_potential_max_energy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, 5.0f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_wavecrest = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_trappedair, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_max_energy,
	-1, "sndparticle_sampling_wavecrest", 3, 0, 0, 4, 0, "Wave Crest Sampling",
	"Maximum number of particles generated per wave crest cell per frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_wc), 0, NULL},
	FluidDomainSettings_sndparticle_sampling_wavecrest_get, FluidDomainSettings_sndparticle_sampling_wavecrest_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, 10000, 1, 200, NULL
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_trappedair = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_buoyancy, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_wavecrest,
	-1, "sndparticle_sampling_trappedair", 3, 0, 0, 4, 0, "Trapped Air Sampling",
	"Maximum number of particles generated per trapped air cell per frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_ta), 0, NULL},
	FluidDomainSettings_sndparticle_sampling_trappedair_get, FluidDomainSettings_sndparticle_sampling_trappedair_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, 10000, 1, 40, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_buoyancy = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_drag, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_sampling_trappedair,
	-1, "sndparticle_bubble_buoyancy", 3, 0, 0, 4, 0, "Bubble Buoyancy",
	"Amount of buoyancy force that rises bubbles (high value results in bubble movement mainly upwards)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_b), 5, NULL},
	FluidDomainSettings_sndparticle_bubble_buoyancy_get, FluidDomainSettings_sndparticle_bubble_buoyancy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 2, 0.5000000000f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_drag = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_min, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_buoyancy,
	-1, "sndparticle_bubble_drag", 3, 0, 0, 4, 0, "Bubble Drag",
	"Amount of drag force that moves bubbles along with the fluid (high value results in bubble movement mainly along with the fluid)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_k_d), 5, NULL},
	FluidDomainSettings_sndparticle_bubble_drag_get, FluidDomainSettings_sndparticle_bubble_drag_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 2, 0.6000000238f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_min = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_max, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_bubble_drag,
	-1, "sndparticle_life_min", 3, 0, 0, 4, 0, "Minimum Lifetime",
	"Lowest possible particle lifetime",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_l_min), 5, NULL},
	FluidDomainSettings_sndparticle_life_min_get, FluidDomainSettings_sndparticle_life_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, 10000.0f, 100.0f, 1, 10.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_boundary, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_min,
	-1, "sndparticle_life_max", 3, 0, 0, 4, 0, "Maximum Lifetime",
	"Highest possible particle lifetime",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_l_max), 5, NULL},
	FluidDomainSettings_sndparticle_life_max_get, FluidDomainSettings_sndparticle_life_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, 10000.0f, 100.0f, 1, 25.0f, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_sndparticle_boundary_items[3] = {
	{0, "DELETE", 0, "Delete", "Delete secondary particles that are inside obstacles or left the domain"},
	{1, "PUSHOUT", 0, "Push Out", "Push secondary particles that left the domain back into the domain"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_sndparticle_boundary = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_combined_export, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_life_max,
	-1, "sndparticle_boundary", 3, 0, 0, 4, 0, "Particles in Boundary",
	"How particles that left the domain are treated",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_boundary), 2, NULL},
	FluidDomainSettings_sndparticle_boundary_get, FluidDomainSettings_sndparticle_boundary_set, NULL, NULL, NULL, rna_FluidDomainSettings_sndparticle_boundary_items, 2, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_sndparticle_combined_export_items[6] = {
	{0, "OFF", 0, "Off", "Create a separate particle system for every secondary particle type"},
	{1, "SPRAY_FOAM", 0, "Spray + Foam", "Spray and foam particles are saved in the same particle system"},
	{2, "SPRAY_BUBBLES", 0, "Spray + Bubbles", "Spray and bubble particles are saved in the same particle system"},
	{3, "FOAM_BUBBLES", 0, "Foam + Bubbles", "Foam and bubbles particles are saved in the same particle system"},
	{4, "SPRAY_FOAM_BUBBLES", 0, "Spray + Foam + Bubbles", "Create one particle system that contains all three secondary particle types"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_sndparticle_combined_export = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_radius, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_boundary,
	-1, "sndparticle_combined_export", 3, 0, 0, 4, 0, "Combined Export",
	"Determines which particle systems are created from secondary particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_combined_export_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_combined_export), 2, NULL},
	FluidDomainSettings_sndparticle_combined_export_get, FluidDomainSettings_sndparticle_combined_export_set, NULL, NULL, NULL, rna_FluidDomainSettings_sndparticle_combined_export_items, 5, 0
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_potential_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_sndparticle_update_radius, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_combined_export,
	-1, "sndparticle_potential_radius", 3, 0, 0, 4, 0, "Potential Radius",
	"Radius to compute potential for each cell (higher values are slower but create smoother potential grids)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_potential_radius), 0, NULL},
	FluidDomainSettings_sndparticle_potential_radius_get, FluidDomainSettings_sndparticle_potential_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 4, 1, 4, 1, 2, NULL
};

IntPropertyRNA rna_FluidDomainSettings_sndparticle_update_radius = {
	{(PropertyRNA *)&rna_FluidDomainSettings_particle_scale, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_potential_radius,
	-1, "sndparticle_update_radius", 3, 0, 0, 4, 0, "Update Radius",
	"Radius to compute position update for each particle (higher values are slower but particles move less chaotic)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, sndparticle_update_radius), 0, NULL},
	FluidDomainSettings_sndparticle_update_radius_get, FluidDomainSettings_sndparticle_update_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 4, 1, 4, 1, 2, NULL
};

IntPropertyRNA rna_FluidDomainSettings_particle_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_spray_particles, (PropertyRNA *)&rna_FluidDomainSettings_sndparticle_update_radius,
	-1, "particle_scale", 1, 0, 0, 4, 0, "Particle scale",
	"The particle simulation is scaled up by this factor (compared to the base resolution of the domain)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_particles_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, particle_scale), 0, NULL},
	FluidDomainSettings_particle_scale_get, FluidDomainSettings_particle_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 100, 1, 1, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_spray_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_bubble_particles, (PropertyRNA *)&rna_FluidDomainSettings_particle_scale,
	-1, "use_spray_particles", 1, 0, 0, 0, 0, "Spray",
	"Create spray particle system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_spray_parts_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_spray_particles_get, FluidDomainSettings_use_spray_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_bubble_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_foam_particles, (PropertyRNA *)&rna_FluidDomainSettings_use_spray_particles,
	-1, "use_bubble_particles", 1, 0, 0, 0, 0, "Bubble",
	"Create bubble particle system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_bubble_parts_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_bubble_particles_get, FluidDomainSettings_use_bubble_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_foam_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_tracer_particles, (PropertyRNA *)&rna_FluidDomainSettings_use_bubble_particles,
	-1, "use_foam_particles", 1, 0, 0, 0, 0, "Foam",
	"Create foam particle system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_foam_parts_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_foam_particles_get, FluidDomainSettings_use_foam_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_tracer_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_alpha, (PropertyRNA *)&rna_FluidDomainSettings_use_foam_particles,
	-1, "use_tracer_particles", 1, 0, 0, 0, 0, "Tracer",
	"Create tracer particle system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_tracer_parts_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_tracer_particles_get, FluidDomainSettings_use_tracer_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_guide_alpha = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_beta, (PropertyRNA *)&rna_FluidDomainSettings_use_tracer_particles,
	-1, "guide_alpha", 3, 0, 0, 4, 0, "Weight",
	"Guiding weight (higher value results in greater lag)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_alpha), 5, NULL},
	FluidDomainSettings_guide_alpha_get, FluidDomainSettings_guide_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 100.0f, 1.0f, 100.0f, 10.0f, 3, 2.0f, NULL
};

IntPropertyRNA rna_FluidDomainSettings_guide_beta = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_vel_factor, (PropertyRNA *)&rna_FluidDomainSettings_guide_alpha,
	-1, "guide_beta", 3, 0, 0, 4, 0, "Size",
	"Guiding size (higher value results in larger vortices)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_beta), 0, NULL},
	FluidDomainSettings_guide_beta_get, FluidDomainSettings_guide_beta_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 50, 1, 50, 1, 5, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_guide_vel_factor = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_source, (PropertyRNA *)&rna_FluidDomainSettings_guide_beta,
	-1, "guide_vel_factor", 3, 0, 0, 4, 0, "Velocity Factor",
	"Guiding velocity factor (higher value results in greater guiding velocities)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_vel_factor), 5, NULL},
	FluidDomainSettings_guide_vel_factor_get, FluidDomainSettings_guide_vel_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 2.0f, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_guide_source_items[3] = {
	{0, "DOMAIN", 0, "Domain", "Use a fluid domain for guiding (domain needs to be baked already so that velocities can be extracted). Guiding domain can be of any type (i.e. gas or liquid)"},
	{1, "EFFECTOR", 0, "Effector", "Use guiding (effector) objects to create fluid guiding (guiding objects should be animated and baked once set up completely)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_guide_source = {
	{(PropertyRNA *)&rna_FluidDomainSettings_guide_parent, (PropertyRNA *)&rna_FluidDomainSettings_guide_vel_factor,
	-1, "guide_source", 3, 0, 0, 4, 0, "Guiding source",
	"Choose where to get guiding velocities from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, guide_source), 1, NULL},
	FluidDomainSettings_guide_source_get, FluidDomainSettings_guide_source_set, NULL, NULL, NULL, rna_FluidDomainSettings_guide_source_items, 2, 0
};

PointerPropertyRNA rna_FluidDomainSettings_guide_parent = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_guide, (PropertyRNA *)&rna_FluidDomainSettings_guide_source,
	-1, "guide_parent", 8388737, 0, 0, 0, 0, "",
	"Use velocities from this object for the guiding effect (object needs to have fluid modifier and be of type domain))",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_guidingcache_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_guide_parent_get, FluidDomainSettings_guide_parent_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_FluidDomainSettings_use_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_start, (PropertyRNA *)&rna_FluidDomainSettings_guide_parent,
	-1, "use_guide", 1, 0, 0, 0, 0, "Use Guiding",
	"Enable fluid guiding",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_guide_get, FluidDomainSettings_use_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_start = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_end, (PropertyRNA *)&rna_FluidDomainSettings_use_guide,
	-1, "cache_frame_start", 1, 0, 0, 0, 0, "Start",
	"Frame on which the simulation starts. This is the first frame that will be baked",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_frame_start_get, FluidDomainSettings_cache_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 1, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_end = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_offset, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_start,
	-1, "cache_frame_end", 1, 0, 0, 0, 0, "End",
	"Frame on which the simulation stops. This is the last frame that will be baked",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_frame_end_get, FluidDomainSettings_cache_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 250, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_offset = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_data, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_end,
	-1, "cache_frame_offset", 1, 0, 0, 4, 0, "Offset",
	"Frame offset that is used when loading the simulation from the cache. It is not considered when baking the simulation, only when loading it",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_offset), 0, NULL},
	FluidDomainSettings_cache_frame_offset_get, FluidDomainSettings_cache_frame_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_data = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_noise, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_offset,
	-1, "cache_frame_pause_data", 3, 0, 0, 4, 0, "cache_frame_pause_data",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_data), 0, NULL},
	FluidDomainSettings_cache_frame_pause_data_get, FluidDomainSettings_cache_frame_pause_data_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_mesh, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_data,
	-1, "cache_frame_pause_noise", 3, 0, 0, 4, 0, "cache_frame_pause_noise",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_noise), 0, NULL},
	FluidDomainSettings_cache_frame_pause_noise_get, FluidDomainSettings_cache_frame_pause_noise_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_particles, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_noise,
	-1, "cache_frame_pause_mesh", 3, 0, 0, 4, 0, "cache_frame_pause_mesh",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_mesh), 0, NULL},
	FluidDomainSettings_cache_frame_pause_mesh_get, FluidDomainSettings_cache_frame_pause_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_guide, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_mesh,
	-1, "cache_frame_pause_particles", 3, 0, 0, 4, 0, "cache_frame_pause_particles",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_particles), 0, NULL},
	FluidDomainSettings_cache_frame_pause_particles_get, FluidDomainSettings_cache_frame_pause_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_mesh_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_particles,
	-1, "cache_frame_pause_guide", 3, 0, 0, 4, 0, "cache_frame_pause_guide",
	"",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cache_frame_pause_guide), 0, NULL},
	FluidDomainSettings_cache_frame_pause_guide_get, FluidDomainSettings_cache_frame_pause_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_mesh_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_mesh_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_data_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_frame_pause_guide,
	-1, "cache_mesh_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching surface data",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_meshcache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_mesh_format_get, FluidDomainSettings_cache_mesh_format_set, rna_Fluid_cachetype_mesh_itemf, NULL, NULL, rna_FluidDomainSettings_cache_mesh_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_data_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_data_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_particle_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_mesh_format,
	-1, "cache_data_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching volumetric data",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_data_format_get, FluidDomainSettings_cache_data_format_set, rna_Fluid_cachetype_volume_itemf, NULL, NULL, rna_FluidDomainSettings_cache_data_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_particle_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_particle_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_noise_format, (PropertyRNA *)&rna_FluidDomainSettings_cache_data_format,
	-1, "cache_particle_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching particle data",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_particlescache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_particle_format_get, FluidDomainSettings_cache_particle_format_set, rna_Fluid_cachetype_particle_itemf, NULL, NULL, rna_FluidDomainSettings_cache_particle_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_noise_format_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_noise_format = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_type, (PropertyRNA *)&rna_FluidDomainSettings_cache_particle_format,
	-1, "cache_noise_format", 1, 0, 0, 0, 0, "File Format",
	"Select the file format to be used for caching noise data",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_noisecache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_noise_format_get, FluidDomainSettings_cache_noise_format_set, rna_Fluid_cachetype_volume_itemf, NULL, NULL, rna_FluidDomainSettings_cache_noise_format_items, 1, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_cache_type_items[4] = {
	{0, "REPLAY", 0, "Replay", "Use the timeline to bake the scene"},
	{1, "MODULAR", 0, "Modular", "Bake every stage of the simulation separately"},
	{2, "ALL", 0, "All", "Bake all simulation settings at once"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_cache_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_resumable, (PropertyRNA *)&rna_FluidDomainSettings_cache_noise_format,
	-1, "cache_type", 1, 0, 0, 0, 0, "Type",
	"Change the cache type of the simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_type_get, FluidDomainSettings_cache_type_set, NULL, NULL, NULL, rna_FluidDomainSettings_cache_type_items, 3, 0
};

BoolPropertyRNA rna_FluidDomainSettings_cache_resumable = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cache_directory, (PropertyRNA *)&rna_FluidDomainSettings_cache_type,
	-1, "cache_resumable", 1, 0, 0, 0, 0, "Resumable",
	"Additional data will be saved so that the bake jobs can be resumed after pausing. Because more data will be written to disk it is recommended to avoid enabling this option when baking at high resolutions",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_resumable_get, FluidDomainSettings_cache_resumable_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_FluidDomainSettings_cache_directory = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_data, (PropertyRNA *)&rna_FluidDomainSettings_cache_resumable,
	-1, "cache_directory", 262145, 0, 0, 0, 0, "Cache directory",
	"Directory that contains fluid cache files",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Fluid_update, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_cache_directory_get, FluidDomainSettings_cache_directory_length, FluidDomainSettings_cache_directory_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_data = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_data, (PropertyRNA *)&rna_FluidDomainSettings_cache_directory,
	-1, "is_cache_baking_data", 3, 0, 0, 0, 0, "is_cache_baking_data",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_is_cache_baking_data_get, FluidDomainSettings_is_cache_baking_data_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_data = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_noise, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_data,
	-1, "has_cache_baked_data", 3, 0, 0, 0, 0, "has_cache_baked_data",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_has_cache_baked_data_get, FluidDomainSettings_has_cache_baked_data_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_noise, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_data,
	-1, "is_cache_baking_noise", 3, 0, 0, 0, 0, "is_cache_baking_noise",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_is_cache_baking_noise_get, FluidDomainSettings_is_cache_baking_noise_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_noise = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_mesh, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_noise,
	-1, "has_cache_baked_noise", 3, 0, 0, 0, 0, "has_cache_baked_noise",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_has_cache_baked_noise_get, FluidDomainSettings_has_cache_baked_noise_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_mesh, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_noise,
	-1, "is_cache_baking_mesh", 3, 0, 0, 0, 0, "is_cache_baking_mesh",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_is_cache_baking_mesh_get, FluidDomainSettings_is_cache_baking_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_mesh = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_particles, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_mesh,
	-1, "has_cache_baked_mesh", 3, 0, 0, 0, 0, "has_cache_baked_mesh",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_has_cache_baked_mesh_get, FluidDomainSettings_has_cache_baked_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_particles, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_mesh,
	-1, "is_cache_baking_particles", 3, 0, 0, 0, 0, "is_cache_baking_particles",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_is_cache_baking_particles_get, FluidDomainSettings_is_cache_baking_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_particles = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_guide, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_particles,
	-1, "has_cache_baked_particles", 3, 0, 0, 0, 0, "has_cache_baked_particles",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_has_cache_baked_particles_get, FluidDomainSettings_has_cache_baked_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_guide, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_particles,
	-1, "is_cache_baking_guide", 3, 0, 0, 0, 0, "is_cache_baking_guide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_is_cache_baking_guide_get, FluidDomainSettings_is_cache_baking_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_guide = {
	{(PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_any, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_guide,
	-1, "has_cache_baked_guide", 3, 0, 0, 0, 0, "has_cache_baked_guide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_has_cache_baked_guide_get, FluidDomainSettings_has_cache_baked_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_any = {
	{(PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_any, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_guide,
	-1, "is_cache_baking_any", 3, 0, 0, 0, 0, "is_cache_baking_any",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_is_cache_baking_any_get, FluidDomainSettings_is_cache_baking_any_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_any = {
	{(PropertyRNA *)&rna_FluidDomainSettings_export_manta_script, (PropertyRNA *)&rna_FluidDomainSettings_is_cache_baking_any,
	-1, "has_cache_baked_any", 3, 0, 0, 0, 0, "has_cache_baked_any",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_has_cache_baked_any_get, FluidDomainSettings_has_cache_baked_any_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_export_manta_script = {
	{(PropertyRNA *)&rna_FluidDomainSettings_openvdb_cache_compress_type, (PropertyRNA *)&rna_FluidDomainSettings_has_cache_baked_any,
	-1, "export_manta_script", 1, 0, 0, 0, 0, "Export Mantaflow Script",
	"Generate and export Mantaflow script from current domain settings during bake. This is only needed if you plan to analyze the cache (e.g. view grids, velocity vectors, particles) in Mantaflow directly (outside of Blender) after baking the simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_export_manta_script_get, FluidDomainSettings_export_manta_script_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_openvdb_cache_compress_type_items[4] = {
	{1, "ZIP", 0, "Zip", "Effective but slow compression"},
	{0, "BLOSC", 0, "Blosc", "Multithreaded compression, similar in size and quality as \'Zip\'"},
	{2, "NONE", 0, "None", "Do not use any compression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_openvdb_cache_compress_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_openvdb_data_depth, (PropertyRNA *)&rna_FluidDomainSettings_export_manta_script,
	-1, "openvdb_cache_compress_type", 3, 0, 0, 4, 0, "Compression",
	"Compression method to be used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, openvdb_compression), 0, NULL},
	FluidDomainSettings_openvdb_cache_compress_type_get, FluidDomainSettings_openvdb_cache_compress_type_set, NULL, NULL, NULL, rna_FluidDomainSettings_openvdb_cache_compress_type_items, 3, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_openvdb_data_depth_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_openvdb_data_depth = {
	{(PropertyRNA *)&rna_FluidDomainSettings_time_scale, (PropertyRNA *)&rna_FluidDomainSettings_openvdb_cache_compress_type,
	-1, "openvdb_data_depth", 3, 0, 0, 4, 0, "Data Depth",
	"Bit depth for fluid particles and grids (lower bit values reduce file size)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, openvdb_data_depth), 2, NULL},
	FluidDomainSettings_openvdb_data_depth_get, FluidDomainSettings_openvdb_data_depth_set, rna_Fluid_data_depth_itemf, NULL, NULL, rna_FluidDomainSettings_openvdb_data_depth_items, 1, 0
};

FloatPropertyRNA rna_FluidDomainSettings_time_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_cfl_condition, (PropertyRNA *)&rna_FluidDomainSettings_openvdb_data_depth,
	-1, "time_scale", 3, 0, 0, 4, 0, "Time Scale",
	"Adjust simulation speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, time_scale), 5, NULL},
	FluidDomainSettings_time_scale_get, FluidDomainSettings_time_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_cfl_condition = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_timesteps, (PropertyRNA *)&rna_FluidDomainSettings_time_scale,
	-1, "cfl_condition", 3, 0, 0, 4, 0, "CFL",
	"Maximal velocity per cell (greater CFL numbers will minimize the number of simulation steps and the computation time.)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, cfl_condition), 5, NULL},
	FluidDomainSettings_cfl_condition_get, FluidDomainSettings_cfl_condition_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 4.0f, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_timesteps = {
	{(PropertyRNA *)&rna_FluidDomainSettings_timesteps_min, (PropertyRNA *)&rna_FluidDomainSettings_cfl_condition,
	-1, "use_adaptive_timesteps", 3, 0, 0, 0, 0, "Use Adaptive Time Steps",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_adaptive_timesteps_get, FluidDomainSettings_use_adaptive_timesteps_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_FluidDomainSettings_timesteps_min = {
	{(PropertyRNA *)&rna_FluidDomainSettings_timesteps_max, (PropertyRNA *)&rna_FluidDomainSettings_use_adaptive_timesteps,
	-1, "timesteps_min", 3, 0, 0, 4, 0, "Minimum",
	"Minimum number of simulation steps to perform for one frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, timesteps_minimum), 0, NULL},
	FluidDomainSettings_timesteps_min_get, FluidDomainSettings_timesteps_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 1, 100, 1, 1, NULL
};

IntPropertyRNA rna_FluidDomainSettings_timesteps_max = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_slice, (PropertyRNA *)&rna_FluidDomainSettings_timesteps_min,
	-1, "timesteps_max", 3, 0, 0, 4, 0, "Maximum",
	"Maximum number of simulation steps to perform for one frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_datacache_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, timesteps_maximum), 0, NULL},
	FluidDomainSettings_timesteps_max_get, FluidDomainSettings_timesteps_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 1, 100, 1, 4, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_slice = {
	{(PropertyRNA *)&rna_FluidDomainSettings_slice_axis, (PropertyRNA *)&rna_FluidDomainSettings_timesteps_max,
	-1, "use_slice", 3, 0, 0, 0, 0, "Slice",
	"Perform a single slice of the domain object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_slice_get, FluidDomainSettings_use_slice_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_slice_axis_items[5] = {
	{0, "AUTO", 0, "Auto", "Adjust slice direction according to the view direction"},
	{1, "X", 0, "X", "Slice along the X axis"},
	{2, "Y", 0, "Y", "Slice along the Y axis"},
	{3, "Z", 0, "Z", "Slice along the Z axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_slice_axis = {
	{(PropertyRNA *)&rna_FluidDomainSettings_slice_per_voxel, (PropertyRNA *)&rna_FluidDomainSettings_use_slice,
	-1, "slice_axis", 3, 0, 0, 4, 0, "Axis",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, slice_axis), 2, NULL},
	FluidDomainSettings_slice_axis_get, FluidDomainSettings_slice_axis_set, NULL, NULL, NULL, rna_FluidDomainSettings_slice_axis_items, 4, 0
};

FloatPropertyRNA rna_FluidDomainSettings_slice_per_voxel = {
	{(PropertyRNA *)&rna_FluidDomainSettings_slice_depth, (PropertyRNA *)&rna_FluidDomainSettings_slice_axis,
	-1, "slice_per_voxel", 3, 0, 0, 4, 0, "Slice Per Voxel",
	"How many slices per voxel should be generated",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, slice_per_voxel), 5, NULL},
	FluidDomainSettings_slice_per_voxel_get, FluidDomainSettings_slice_per_voxel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5.0f, 0.0f, 100.0f, 0.1000000015f, 1, 5.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_slice_depth = {
	{(PropertyRNA *)&rna_FluidDomainSettings_display_thickness, (PropertyRNA *)&rna_FluidDomainSettings_slice_per_voxel,
	-1, "slice_depth", 3, 0, 0, 4, 0, "Position",
	"Position of the slice",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, slice_depth), 5, NULL},
	FluidDomainSettings_slice_depth_get, FluidDomainSettings_slice_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_display_thickness = {
	{(PropertyRNA *)&rna_FluidDomainSettings_display_interpolation, (PropertyRNA *)&rna_FluidDomainSettings_slice_depth,
	-1, "display_thickness", 3, 0, 0, 4, 0, "Thickness",
	"Thickness of smoke display in the viewport",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, display_thickness), 5, NULL},
	FluidDomainSettings_display_thickness_get, FluidDomainSettings_display_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 100.0f, 0.0010000000f, 1000.0f, 0.1000000015f, 3, 1.0f, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_display_interpolation_items[4] = {
	{0, "LINEAR", 0, "Linear", "Good smoothness and speed"},
	{1, "CUBIC", 0, "Cubic", "Smoothed high quality interpolation, but slower"},
	{2, "CLOSEST", 0, "Closest", "No interpolation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_display_interpolation = {
	{(PropertyRNA *)&rna_FluidDomainSettings_show_gridlines, (PropertyRNA *)&rna_FluidDomainSettings_display_thickness,
	-1, "display_interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation method to use for smoke/fire volumes in solid mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, interp_method), 2, NULL},
	FluidDomainSettings_display_interpolation_get, FluidDomainSettings_display_interpolation_set, NULL, NULL, NULL, rna_FluidDomainSettings_display_interpolation_items, 3, 0
};

BoolPropertyRNA rna_FluidDomainSettings_show_gridlines = {
	{(PropertyRNA *)&rna_FluidDomainSettings_show_velocity, (PropertyRNA *)&rna_FluidDomainSettings_display_interpolation,
	-1, "show_gridlines", 3, 0, 0, 4, 0, "Gridlines",
	"Show gridlines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, show_gridlines), 2, NULL},
	FluidDomainSettings_show_gridlines_get, FluidDomainSettings_show_gridlines_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_show_velocity = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_display_type, (PropertyRNA *)&rna_FluidDomainSettings_show_gridlines,
	-1, "show_velocity", 3, 0, 0, 4, 0, "Vector Display",
	"Visualize vector fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, draw_velocity), 2, NULL},
	FluidDomainSettings_show_velocity_get, FluidDomainSettings_show_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_vector_display_type_items[4] = {
	{0, "NEEDLE", 0, "Needle", "Display vectors as needles"},
	{1, "STREAMLINE", 0, "Streamlines", "Display vectors as streamlines"},
	{2, "MAC", 0, "MAC Grid", "Display vector field as MAC grid"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_vector_display_type = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_field, (PropertyRNA *)&rna_FluidDomainSettings_show_velocity,
	-1, "vector_display_type", 3, 0, 0, 4, 0, "Display Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_draw_type), 2, NULL},
	FluidDomainSettings_vector_display_type_get, FluidDomainSettings_vector_display_type_set, NULL, NULL, NULL, rna_FluidDomainSettings_vector_display_type_items, 3, 0
};

static const EnumPropertyItem rna_FluidDomainSettings_vector_field_items[4] = {
	{0, "FLUID_VELOCITY", 0, "Fluid Velocity", "Velocity field of the fluid domain"},
	{1, "GUIDE_VELOCITY", 0, "Guide Velocity", "Guide velocity field of the fluid domain"},
	{2, "FORCE", 0, "Force", "Force field of the fluid domain"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_vector_field = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_scale_with_magnitude, (PropertyRNA *)&rna_FluidDomainSettings_vector_display_type,
	-1, "vector_field", 3, 0, 0, 4, 0, "Field",
	"Vector field to be represented by the display vectors",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_field), 2, NULL},
	FluidDomainSettings_vector_field_get, FluidDomainSettings_vector_field_set, NULL, NULL, NULL, rna_FluidDomainSettings_vector_field_items, 3, 0
};

BoolPropertyRNA rna_FluidDomainSettings_vector_scale_with_magnitude = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_x, (PropertyRNA *)&rna_FluidDomainSettings_vector_field,
	-1, "vector_scale_with_magnitude", 3, 0, 0, 4, 0, "Magnitude",
	"Scale vectors with their magnitudes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_scale_with_magnitude), 2, NULL},
	FluidDomainSettings_vector_scale_with_magnitude_get, FluidDomainSettings_vector_scale_with_magnitude_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_x = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_y, (PropertyRNA *)&rna_FluidDomainSettings_vector_scale_with_magnitude,
	-1, "vector_show_mac_x", 3, 0, 0, 0, 0, "X",
	"Show X-component of MAC Grid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_vector_show_mac_x_get, FluidDomainSettings_vector_show_mac_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_y = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_z, (PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_x,
	-1, "vector_show_mac_y", 3, 0, 0, 0, 0, "Y",
	"Show Y-component of MAC Grid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_vector_show_mac_y_get, FluidDomainSettings_vector_show_mac_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_z = {
	{(PropertyRNA *)&rna_FluidDomainSettings_vector_scale, (PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_y,
	-1, "vector_show_mac_z", 3, 0, 0, 0, 0, "Z",
	"Show Z-component of MAC Grid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_vector_show_mac_z_get, FluidDomainSettings_vector_show_mac_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_vector_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_use_color_ramp, (PropertyRNA *)&rna_FluidDomainSettings_vector_show_mac_z,
	-1, "vector_scale", 3, 0, 0, 4, 0, "Scale",
	"Multiplier for scaling the vectors",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, vector_scale), 5, NULL},
	FluidDomainSettings_vector_scale_get, FluidDomainSettings_vector_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 1000.0f, 0.1000000015f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_FluidDomainSettings_use_color_ramp = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field, (PropertyRNA *)&rna_FluidDomainSettings_vector_scale,
	-1, "use_color_ramp", 3, 0, 0, 0, 0, "Grid Display",
	"Render a simulation field while mapping its voxels values to the colors of a ramp or using a predefined color code",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_use_color_ramp_get, FluidDomainSettings_use_color_ramp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_color_ramp_field_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_color_ramp_field = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field_scale, (PropertyRNA *)&rna_FluidDomainSettings_use_color_ramp,
	-1, "color_ramp_field", 3, 0, 0, 4, 0, "Field",
	"Simulation field to color map",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, coba_field), 2, NULL},
	FluidDomainSettings_color_ramp_field_get, FluidDomainSettings_color_ramp_field_set, rna_Fluid_cobafield_itemf, NULL, NULL, rna_FluidDomainSettings_color_ramp_field_items, 1, 0
};

FloatPropertyRNA rna_FluidDomainSettings_color_ramp_field_scale = {
	{(PropertyRNA *)&rna_FluidDomainSettings_color_ramp, (PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field,
	-1, "color_ramp_field_scale", 3, 0, 0, 4, 0, "Scale",
	"Multiplier for scaling the selected field to color map",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, grid_scale), 5, NULL},
	FluidDomainSettings_color_ramp_field_scale_get, FluidDomainSettings_color_ramp_field_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1000.0f, 0.0010000000f, 100000.0f, 0.1000000015f, 3, 1.0f, NULL
};

PointerPropertyRNA rna_FluidDomainSettings_color_ramp = {
	{(PropertyRNA *)&rna_FluidDomainSettings_clipping, (PropertyRNA *)&rna_FluidDomainSettings_color_ramp_field_scale,
	-1, "color_ramp", 8388608, 0, 0, 0, 0, "Color Ramp",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidDomainSettings_color_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

FloatPropertyRNA rna_FluidDomainSettings_clipping = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_color_field, (PropertyRNA *)&rna_FluidDomainSettings_color_ramp,
	-1, "clipping", 3, 0, 0, 4, 0, "Clipping",
	"Value under which voxels are considered empty space to optimize rendering",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, clipping), 5, NULL},
	FluidDomainSettings_clipping_get, FluidDomainSettings_clipping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 6, 0.0000010000f, NULL
};

static const EnumPropertyItem rna_FluidDomainSettings_gridlines_color_field_items[4] = {
	{0, "NONE", 0, "None", "None"},
	{1, "FLAGS", 0, "Flags", "Flag grid of the fluid domain"},
	{2, "RANGE", 0, "Highlight Range", "Highlight the voxels with values of the color mapped field within the range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_gridlines_color_field = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_lower_bound, (PropertyRNA *)&rna_FluidDomainSettings_clipping,
	-1, "gridlines_color_field", 3, 0, 0, 4, 0, "Color Gridlines",
	"Simulation field to color map onto gridlines",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_color_field), 2, NULL},
	FluidDomainSettings_gridlines_color_field_get, FluidDomainSettings_gridlines_color_field_set, NULL, NULL, NULL, rna_FluidDomainSettings_gridlines_color_field_items, 3, 0
};

FloatPropertyRNA rna_FluidDomainSettings_gridlines_lower_bound = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_upper_bound, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_color_field,
	-1, "gridlines_lower_bound", 3, 0, 0, 4, 0, "Lower Bound",
	"Lower bound of the highlighting range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_lower_bound), 5, NULL},
	FluidDomainSettings_gridlines_lower_bound_get, FluidDomainSettings_gridlines_lower_bound_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, 0.0f, NULL
};

FloatPropertyRNA rna_FluidDomainSettings_gridlines_upper_bound = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_range_color, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_lower_bound,
	-1, "gridlines_upper_bound", 3, 0, 0, 4, 0, "Upper Bound",
	"Upper bound of the highlighting range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_upper_bound), 5, NULL},
	FluidDomainSettings_gridlines_upper_bound_get, FluidDomainSettings_gridlines_upper_bound_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, 1.0f, NULL
};

static float rna_FluidDomainSettings_gridlines_range_color_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_FluidDomainSettings_gridlines_range_color = {
	{(PropertyRNA *)&rna_FluidDomainSettings_gridlines_cell_filter, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_upper_bound,
	-1, "gridlines_range_color", 3, 0, 0, 4, 0, "Color",
	"Color used to highlight the range",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_range_color), 5, NULL},
	NULL, NULL, FluidDomainSettings_gridlines_range_color_get, FluidDomainSettings_gridlines_range_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidDomainSettings_gridlines_range_color_default
};

static const EnumPropertyItem rna_FluidDomainSettings_gridlines_cell_filter_items[7] = {
	{0, "NONE", 0, "None", "Highlight the cells regardless of their type"},
	{1, "FLUID", 0, "Fluid", "Highlight only the cells of type Fluid"},
	{2, "OBSTACLE", 0, "Obstacle", "Highlight only the cells of type Obstacle"},
	{4, "EMPTY", 0, "Empty", "Highlight only the cells of type Empty"},
	{8, "INFLOW", 0, "Inflow", "Highlight only the cells of type Inflow"},
	{16, "OUTFLOW", 0, "Outflow", "Highlight only the cells of type Outflow"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidDomainSettings_gridlines_cell_filter = {
	{(PropertyRNA *)&rna_FluidDomainSettings_velocity_scale, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_range_color,
	-1, "gridlines_cell_filter", 3, 0, 0, 4, 0, "Cell Type",
	"Cell type to be highlighted",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, gridlines_cell_filter), 2, NULL},
	FluidDomainSettings_gridlines_cell_filter_get, FluidDomainSettings_gridlines_cell_filter_set, NULL, NULL, NULL, rna_FluidDomainSettings_gridlines_cell_filter_items, 6, 0
};

FloatPropertyRNA rna_FluidDomainSettings_velocity_scale = {
	{NULL, (PropertyRNA *)&rna_FluidDomainSettings_gridlines_cell_filter,
	-1, "velocity_scale", 3, 0, 0, 4, 0, "Velocity Scale",
	"Factor to control the amount of motion blur",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_update, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidDomainSettings, velocity_scale), 5, NULL},
	FluidDomainSettings_velocity_scale_get, FluidDomainSettings_velocity_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

StructRNA RNA_FluidDomainSettings = {
	{(ContainerRNA *)&RNA_FluidFlowSettings, (ContainerRNA *)&RNA_BlendDataVolumes,
	NULL,
	{(PropertyRNA *)&rna_FluidDomainSettings_rna_properties, (PropertyRNA *)&rna_FluidDomainSettings_velocity_scale}},
	"FluidDomainSettings", NULL, NULL, 516, NULL, "Domain Settings",
	"Fluid domain settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidDomainSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_FluidDomainSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Flow Settings */
CollectionPropertyRNA rna_FluidFlowSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidFlowSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_rna_properties_begin, FluidFlowSettings_rna_properties_next, FluidFlowSettings_rna_properties_end, FluidFlowSettings_rna_properties_get, NULL, NULL, FluidFlowSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FluidFlowSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidFlowSettings_density, (PropertyRNA *)&rna_FluidFlowSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_FluidFlowSettings_density = {
	{(PropertyRNA *)&rna_FluidFlowSettings_smoke_color, (PropertyRNA *)&rna_FluidFlowSettings_rna_type,
	-1, "density", 3, 0, 0, 4, 0, "Density",
	"",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, density), 5, NULL},
	FluidFlowSettings_density_get, FluidFlowSettings_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 4, 1.0f, NULL
};

static float rna_FluidFlowSettings_smoke_color_default[3] = {
	0.6999999881f,
	0.6999999881f,
	0.6999999881f
};

FloatPropertyRNA rna_FluidFlowSettings_smoke_color = {
	{(PropertyRNA *)&rna_FluidFlowSettings_fuel_amount, (PropertyRNA *)&rna_FluidFlowSettings_density,
	-1, "smoke_color", 3, 0, 0, 4, 0, "Smoke Color",
	"Color of smoke",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, color), 5, NULL},
	NULL, NULL, FluidFlowSettings_smoke_color_get, FluidFlowSettings_smoke_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidFlowSettings_smoke_color_default
};

FloatPropertyRNA rna_FluidFlowSettings_fuel_amount = {
	{(PropertyRNA *)&rna_FluidFlowSettings_temperature, (PropertyRNA *)&rna_FluidFlowSettings_smoke_color,
	-1, "fuel_amount", 3, 0, 0, 4, 0, "Flame Rate",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, fuel_amount), 5, NULL},
	FluidFlowSettings_fuel_amount_get, FluidFlowSettings_fuel_amount_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 4, 1.0f, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_temperature = {
	{(PropertyRNA *)&rna_FluidFlowSettings_particle_system, (PropertyRNA *)&rna_FluidFlowSettings_fuel_amount,
	-1, "temperature", 3, 0, 0, 4, 0, "Temp. Diff.",
	"Temperature difference to ambient temperature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, temperature), 5, NULL},
	FluidFlowSettings_temperature_get, FluidFlowSettings_temperature_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 1, 1.0f, NULL
};

PointerPropertyRNA rna_FluidFlowSettings_particle_system = {
	{(PropertyRNA *)&rna_FluidFlowSettings_flow_type, (PropertyRNA *)&rna_FluidFlowSettings_temperature,
	-1, "particle_system", 8388609, 0, 0, 0, 0, "Particle Systems",
	"Particle systems emitted from the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_reset_dependency, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_particle_system_get, FluidFlowSettings_particle_system_set, NULL, NULL,&RNA_ParticleSystem
};

static const EnumPropertyItem rna_FluidFlowSettings_flow_type_items[5] = {
	{1, "SMOKE", 0, "Smoke", "Add smoke"},
	{3, "BOTH", 0, "Fire + Smoke", "Add fire and smoke"},
	{2, "FIRE", 0, "Fire", "Add fire"},
	{4, "LIQUID", 0, "Liquid", "Add liquid"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidFlowSettings_flow_type = {
	{(PropertyRNA *)&rna_FluidFlowSettings_flow_behavior, (PropertyRNA *)&rna_FluidFlowSettings_particle_system,
	-1, "flow_type", 3, 0, 0, 0, 0, "Flow Type",
	"Change type of fluid in the simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_flow_type_get, FluidFlowSettings_flow_type_set, NULL, NULL, NULL, rna_FluidFlowSettings_flow_type_items, 4, 1
};

static const EnumPropertyItem rna_FluidFlowSettings_flow_behavior_items[4] = {
	{0, "INFLOW", 0, "Inflow", "Add fluid to simulation"},
	{1, "OUTFLOW", 0, "Outflow", "Delete fluid from simulation"},
	{2, "GEOMETRY", 0, "Geometry", "Only use given geometry for fluid"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidFlowSettings_flow_behavior = {
	{(PropertyRNA *)&rna_FluidFlowSettings_flow_source, (PropertyRNA *)&rna_FluidFlowSettings_flow_type,
	-1, "flow_behavior", 3, 0, 0, 4, 0, "Flow Behavior",
	"Change flow behavior in the simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, behavior), 1, NULL},
	FluidFlowSettings_flow_behavior_get, FluidFlowSettings_flow_behavior_set, NULL, NULL, NULL, rna_FluidFlowSettings_flow_behavior_items, 3, 2
};

static const EnumPropertyItem rna_FluidFlowSettings_flow_source_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidFlowSettings_flow_source = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_absolute, (PropertyRNA *)&rna_FluidFlowSettings_flow_behavior,
	-1, "flow_source", 3, 0, 0, 0, 0, "Source",
	"Change how fluid is emitted",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_flow_source_get, FluidFlowSettings_flow_source_set, rna_Fluid_flowsource_itemf, NULL, NULL, rna_FluidFlowSettings_flow_source_items, 1, 0
};

BoolPropertyRNA rna_FluidFlowSettings_use_absolute = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_initial_velocity, (PropertyRNA *)&rna_FluidFlowSettings_flow_source,
	-1, "use_absolute", 3, 0, 0, 0, 0, "Absolute Density",
	"Only allow given density value in emitter area and will not add up",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_use_absolute_get, FluidFlowSettings_use_absolute_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_FluidFlowSettings_use_initial_velocity = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_factor, (PropertyRNA *)&rna_FluidFlowSettings_use_absolute,
	-1, "use_initial_velocity", 3, 0, 0, 0, 0, "Initial Velocity",
	"Fluid has some initial velocity when it is emitted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_use_initial_velocity_get, FluidFlowSettings_use_initial_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_factor = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_normal, (PropertyRNA *)&rna_FluidFlowSettings_use_initial_velocity,
	-1, "velocity_factor", 3, 0, 0, 4, 0, "Source",
	"Multiplier of source velocity passed to fluid (source velocity is non-zero only if object is moving)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_multi), 5, NULL},
	FluidFlowSettings_velocity_factor_get, FluidFlowSettings_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, 1.0f, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_normal = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_random, (PropertyRNA *)&rna_FluidFlowSettings_velocity_factor,
	-1, "velocity_normal", 3, 0, 0, 4, 0, "Normal",
	"Amount of normal directional velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_normal), 5, NULL},
	FluidFlowSettings_velocity_normal_get, FluidFlowSettings_velocity_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_random = {
	{(PropertyRNA *)&rna_FluidFlowSettings_velocity_coord, (PropertyRNA *)&rna_FluidFlowSettings_velocity_normal,
	-1, "velocity_random", 3, 0, 0, 4, 0, "Random",
	"Amount of random velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_random), 5, NULL},
	FluidFlowSettings_velocity_random_get, FluidFlowSettings_velocity_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 10.0f, 0.0500000007f, 5, 0.0f, NULL
};

static float rna_FluidFlowSettings_velocity_coord_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidFlowSettings_velocity_coord = {
	{(PropertyRNA *)&rna_FluidFlowSettings_volume_density, (PropertyRNA *)&rna_FluidFlowSettings_velocity_random,
	-1, "velocity_coord", 3, 0, 0, 4, 0, "Initial",
	"Additional initial velocity in X, Y and Z direction (added to source velocity)",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, vel_coord), 5, NULL},
	NULL, NULL, FluidFlowSettings_velocity_coord_get, FluidFlowSettings_velocity_coord_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_FluidFlowSettings_velocity_coord_default
};

FloatPropertyRNA rna_FluidFlowSettings_volume_density = {
	{(PropertyRNA *)&rna_FluidFlowSettings_surface_distance, (PropertyRNA *)&rna_FluidFlowSettings_velocity_coord,
	-1, "volume_density", 3, 0, 0, 4, 0, "Volume Emission",
	"Controls fluid emission from within the mesh (higher value results in greater emissions from inside the mesh)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, volume_density), 5, NULL},
	FluidFlowSettings_volume_density_get, FluidFlowSettings_volume_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_surface_distance = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_plane_init, (PropertyRNA *)&rna_FluidFlowSettings_volume_density,
	-1, "surface_distance", 3, 0, 0, 4, 0, "Surface Emission",
	"Controls fluid emission from the mesh surface (higher value results in emission further away from the mesh surface",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, surface_distance), 5, NULL},
	FluidFlowSettings_surface_distance_get, FluidFlowSettings_surface_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 0.0500000007f, 5, 1.5000000000f, NULL
};

BoolPropertyRNA rna_FluidFlowSettings_use_plane_init = {
	{(PropertyRNA *)&rna_FluidFlowSettings_particle_size, (PropertyRNA *)&rna_FluidFlowSettings_surface_distance,
	-1, "use_plane_init", 3, 0, 0, 0, 0, "Is Planar",
	"Treat this object as a planar and unclosed mesh. Fluid will only be emitted from the mesh surface and based on the surface emission value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_use_plane_init_get, FluidFlowSettings_use_plane_init_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_particle_size = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_particle_size, (PropertyRNA *)&rna_FluidFlowSettings_use_plane_init,
	-1, "particle_size", 3, 0, 0, 4, 0, "Size",
	"Particle size in simulation cells",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, particle_size), 5, NULL},
	FluidFlowSettings_particle_size_get, FluidFlowSettings_particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, 5.0f, 0.1000000015f, FLT_MAX, 0.0500000007f, 5, 1.0f, NULL
};

BoolPropertyRNA rna_FluidFlowSettings_use_particle_size = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_inflow, (PropertyRNA *)&rna_FluidFlowSettings_particle_size,
	-1, "use_particle_size", 3, 0, 0, 0, 0, "Set Size",
	"Set particle size in simulation cells or use nearest cell",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_use_particle_size_get, FluidFlowSettings_use_particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_FluidFlowSettings_use_inflow = {
	{(PropertyRNA *)&rna_FluidFlowSettings_subframes, (PropertyRNA *)&rna_FluidFlowSettings_use_particle_size,
	-1, "use_inflow", 3, 0, 0, 0, 0, "Use Flow",
	"Control when to apply fluid flow",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_use_inflow_get, FluidFlowSettings_use_inflow_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_FluidFlowSettings_subframes = {
	{(PropertyRNA *)&rna_FluidFlowSettings_density_vertex_group, (PropertyRNA *)&rna_FluidFlowSettings_use_inflow,
	-1, "subframes", 3, 0, 0, 4, 0, "Subframes",
	"Number of additional samples to take between frames to improve quality of fast moving flows",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, subframes), 0, NULL},
	FluidFlowSettings_subframes_get, FluidFlowSettings_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10, 0, 200, 1, 0, NULL
};

StringPropertyRNA rna_FluidFlowSettings_density_vertex_group = {
	{(PropertyRNA *)&rna_FluidFlowSettings_use_texture, (PropertyRNA *)&rna_FluidFlowSettings_subframes,
	-1, "density_vertex_group", 262145, 0, 0, 0, 0, "Vertex Group",
	"Name of vertex group which determines surface emission rate",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_density_vertex_group_get, FluidFlowSettings_density_vertex_group_length, FluidFlowSettings_density_vertex_group_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_FluidFlowSettings_use_texture = {
	{(PropertyRNA *)&rna_FluidFlowSettings_texture_map_type, (PropertyRNA *)&rna_FluidFlowSettings_density_vertex_group,
	-1, "use_texture", 3, 0, 0, 0, 0, "Use Texture",
	"Use a texture to control emission strength",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_use_texture_get, FluidFlowSettings_use_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FluidFlowSettings_texture_map_type_items[3] = {
	{0, "AUTO", 0, "Generated", "Generated coordinates centered to flow object"},
	{1, "UV", 0, "UV", "Use UV layer for texture coordinates"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidFlowSettings_texture_map_type = {
	{(PropertyRNA *)&rna_FluidFlowSettings_uv_layer, (PropertyRNA *)&rna_FluidFlowSettings_use_texture,
	-1, "texture_map_type", 3, 0, 0, 4, 0, "Mapping",
	"Texture mapping type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, texture_type), 1, NULL},
	FluidFlowSettings_texture_map_type_get, FluidFlowSettings_texture_map_type_set, NULL, NULL, NULL, rna_FluidFlowSettings_texture_map_type_items, 2, 0
};

StringPropertyRNA rna_FluidFlowSettings_uv_layer = {
	{(PropertyRNA *)&rna_FluidFlowSettings_noise_texture, (PropertyRNA *)&rna_FluidFlowSettings_texture_map_type,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_uv_layer_get, FluidFlowSettings_uv_layer_length, FluidFlowSettings_uv_layer_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_FluidFlowSettings_noise_texture = {
	{(PropertyRNA *)&rna_FluidFlowSettings_texture_size, (PropertyRNA *)&rna_FluidFlowSettings_uv_layer,
	-1, "noise_texture", 8388801, 0, 0, 0, 0, "Texture",
	"Texture that controls emission strength",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidFlowSettings_noise_texture_get, FluidFlowSettings_noise_texture_set, NULL, NULL,&RNA_Texture
};

FloatPropertyRNA rna_FluidFlowSettings_texture_size = {
	{(PropertyRNA *)&rna_FluidFlowSettings_texture_offset, (PropertyRNA *)&rna_FluidFlowSettings_noise_texture,
	-1, "texture_size", 3, 0, 0, 4, 0, "Size",
	"Size of texture mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, texture_size), 5, NULL},
	FluidFlowSettings_texture_size_get, FluidFlowSettings_texture_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 5.0f, 0.0099999998f, 10.0f, 0.0500000007f, 5, 1.0f, NULL
};

FloatPropertyRNA rna_FluidFlowSettings_texture_offset = {
	{NULL, (PropertyRNA *)&rna_FluidFlowSettings_texture_size,
	-1, "texture_offset", 3, 0, 0, 4, 0, "Offset",
	"Z-offset of texture mapping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_flow_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidFlowSettings, texture_offset), 5, NULL},
	FluidFlowSettings_texture_offset_get, FluidFlowSettings_texture_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 200.0f, 0.0500000007f, 5, 0.0f, NULL
};

StructRNA RNA_FluidFlowSettings = {
	{(ContainerRNA *)&RNA_FluidEffectorSettings, (ContainerRNA *)&RNA_FluidDomainSettings,
	NULL,
	{(PropertyRNA *)&rna_FluidFlowSettings_rna_properties, (PropertyRNA *)&rna_FluidFlowSettings_texture_offset}},
	"FluidFlowSettings", NULL, NULL, 516, NULL, "Flow Settings",
	"Fluid flow settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidFlowSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_FluidFlowSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Effector Settings */
CollectionPropertyRNA rna_FluidEffectorSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidEffectorSettings_rna_properties_begin, FluidEffectorSettings_rna_properties_next, FluidEffectorSettings_rna_properties_end, FluidEffectorSettings_rna_properties_get, NULL, NULL, FluidEffectorSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FluidEffectorSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_effector_type, (PropertyRNA *)&rna_FluidEffectorSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidEffectorSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_FluidEffectorSettings_effector_type_items[3] = {
	{0, "COLLISION", 0, "Collision", "Create collision object"},
	{1, "GUIDE", 0, "Guide", "Create guide object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidEffectorSettings_effector_type = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_surface_distance, (PropertyRNA *)&rna_FluidEffectorSettings_rna_type,
	-1, "effector_type", 3, 0, 0, 4, 0, "Effector Type",
	"Change type of effector in the simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, type), 1, NULL},
	FluidEffectorSettings_effector_type_get, FluidEffectorSettings_effector_type_set, NULL, NULL, NULL, rna_FluidEffectorSettings_effector_type_items, 2, 0
};

FloatPropertyRNA rna_FluidEffectorSettings_surface_distance = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_use_plane_init, (PropertyRNA *)&rna_FluidEffectorSettings_effector_type,
	-1, "surface_distance", 3, 0, 0, 4, 0, "Surface",
	"Additional distance around mesh surface to consider as effector",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, surface_distance), 5, NULL},
	FluidEffectorSettings_surface_distance_get, FluidEffectorSettings_surface_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 0.0500000007f, 5, 0.0f, NULL
};

BoolPropertyRNA rna_FluidEffectorSettings_use_plane_init = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_velocity_factor, (PropertyRNA *)&rna_FluidEffectorSettings_surface_distance,
	-1, "use_plane_init", 3, 0, 0, 0, 0, "Is Planar",
	"Treat this object as a planar, unclosed mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_domain_data_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidEffectorSettings_use_plane_init_get, FluidEffectorSettings_use_plane_init_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FluidEffectorSettings_velocity_factor = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_guide_mode, (PropertyRNA *)&rna_FluidEffectorSettings_use_plane_init,
	-1, "velocity_factor", 3, 0, 0, 4, 0, "Source",
	"Multiplier of obstacle velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, vel_multi), 5, NULL},
	FluidEffectorSettings_velocity_factor_get, FluidEffectorSettings_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 1.0f, NULL
};

static const EnumPropertyItem rna_FluidEffectorSettings_guide_mode_items[5] = {
	{0, "MAXIMUM", 0, "Maximize", "Compare velocities from previous frame with new velocities from current frame and keep the maximum"},
	{1, "MINIMUM", 0, "Minimize", "Compare velocities from previous frame with new velocities from current frame and keep the minimum"},
	{2, "OVERRIDE", 0, "Override", "Always write new guide velocities for every frame (each frame only contains current velocities from guiding objects)"},
	{3, "AVERAGED", 0, "Averaged", "Take average of velocities from previous frame and new velocities from current frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidEffectorSettings_guide_mode = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_use_effector, (PropertyRNA *)&rna_FluidEffectorSettings_velocity_factor,
	-1, "guide_mode", 3, 0, 0, 4, 0, "Guiding mode",
	"How to create guiding velocities",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, guide_mode), 1, NULL},
	FluidEffectorSettings_guide_mode_get, FluidEffectorSettings_guide_mode_set, NULL, NULL, NULL, rna_FluidEffectorSettings_guide_mode_items, 4, 2
};

BoolPropertyRNA rna_FluidEffectorSettings_use_effector = {
	{(PropertyRNA *)&rna_FluidEffectorSettings_subframes, (PropertyRNA *)&rna_FluidEffectorSettings_guide_mode,
	-1, "use_effector", 3, 0, 0, 0, 0, "Enabled",
	"Control when to apply the effector",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FluidEffectorSettings_use_effector_get, FluidEffectorSettings_use_effector_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_FluidEffectorSettings_subframes = {
	{NULL, (PropertyRNA *)&rna_FluidEffectorSettings_use_effector,
	-1, "subframes", 3, 0, 0, 4, 0, "Subframes",
	"Number of additional samples to take between frames to improve quality of fast moving effector objects",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Fluid_effector_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FluidEffectorSettings, subframes), 0, NULL},
	FluidEffectorSettings_subframes_get, FluidEffectorSettings_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10, 0, 200, 1, 0, NULL
};

StructRNA RNA_FluidEffectorSettings = {
	{(ContainerRNA *)&RNA_Material, (ContainerRNA *)&RNA_FluidFlowSettings,
	NULL,
	{(PropertyRNA *)&rna_FluidEffectorSettings_rna_properties, (PropertyRNA *)&rna_FluidEffectorSettings_subframes}},
	"FluidEffectorSettings", NULL, NULL, 516, NULL, "Effector Settings",
	"Smoke collision settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidEffectorSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_FluidEffectorSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

