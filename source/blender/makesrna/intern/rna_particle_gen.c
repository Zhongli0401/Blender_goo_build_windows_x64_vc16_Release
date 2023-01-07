
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

#include "rna_particle.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_ParticleTarget_rna_properties;
PointerPropertyRNA rna_ParticleTarget_rna_type;
StringPropertyRNA rna_ParticleTarget_name;
PointerPropertyRNA rna_ParticleTarget_object;
IntPropertyRNA rna_ParticleTarget_system;
FloatPropertyRNA rna_ParticleTarget_time;
FloatPropertyRNA rna_ParticleTarget_duration;
BoolPropertyRNA rna_ParticleTarget_is_valid;
EnumPropertyRNA rna_ParticleTarget_alliance;


CollectionPropertyRNA rna_SPHFluidSettings_rna_properties;
PointerPropertyRNA rna_SPHFluidSettings_rna_type;
EnumPropertyRNA rna_SPHFluidSettings_solver;
FloatPropertyRNA rna_SPHFluidSettings_spring_force;
FloatPropertyRNA rna_SPHFluidSettings_fluid_radius;
FloatPropertyRNA rna_SPHFluidSettings_rest_length;
BoolPropertyRNA rna_SPHFluidSettings_use_viscoelastic_springs;
BoolPropertyRNA rna_SPHFluidSettings_use_initial_rest_length;
FloatPropertyRNA rna_SPHFluidSettings_plasticity;
FloatPropertyRNA rna_SPHFluidSettings_yield_ratio;
IntPropertyRNA rna_SPHFluidSettings_spring_frames;
FloatPropertyRNA rna_SPHFluidSettings_linear_viscosity;
FloatPropertyRNA rna_SPHFluidSettings_stiff_viscosity;
FloatPropertyRNA rna_SPHFluidSettings_stiffness;
FloatPropertyRNA rna_SPHFluidSettings_repulsion;
FloatPropertyRNA rna_SPHFluidSettings_rest_density;
FloatPropertyRNA rna_SPHFluidSettings_buoyancy;
BoolPropertyRNA rna_SPHFluidSettings_use_factor_repulsion;
BoolPropertyRNA rna_SPHFluidSettings_use_factor_density;
BoolPropertyRNA rna_SPHFluidSettings_use_factor_radius;
BoolPropertyRNA rna_SPHFluidSettings_use_factor_stiff_viscosity;
BoolPropertyRNA rna_SPHFluidSettings_use_factor_rest_length;


CollectionPropertyRNA rna_ParticleHairKey_rna_properties;
PointerPropertyRNA rna_ParticleHairKey_rna_type;
FloatPropertyRNA rna_ParticleHairKey_time;
FloatPropertyRNA rna_ParticleHairKey_weight;
FloatPropertyRNA rna_ParticleHairKey_co;
FloatPropertyRNA rna_ParticleHairKey_co_local;

extern FunctionRNA rna_ParticleHairKey_co_object_func;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_object;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_modifier;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_particle;
extern FloatPropertyRNA rna_ParticleHairKey_co_object_co;

extern FunctionRNA rna_ParticleHairKey_co_object_set_func;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_set_object;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_set_modifier;
extern PointerPropertyRNA rna_ParticleHairKey_co_object_set_particle;
extern FloatPropertyRNA rna_ParticleHairKey_co_object_set_co;



CollectionPropertyRNA rna_ParticleKey_rna_properties;
PointerPropertyRNA rna_ParticleKey_rna_type;
FloatPropertyRNA rna_ParticleKey_location;
FloatPropertyRNA rna_ParticleKey_velocity;
FloatPropertyRNA rna_ParticleKey_rotation;
FloatPropertyRNA rna_ParticleKey_angular_velocity;
FloatPropertyRNA rna_ParticleKey_time;


CollectionPropertyRNA rna_ChildParticle_rna_properties;
PointerPropertyRNA rna_ChildParticle_rna_type;


CollectionPropertyRNA rna_Particle_rna_properties;
PointerPropertyRNA rna_Particle_rna_type;
FloatPropertyRNA rna_Particle_location;
FloatPropertyRNA rna_Particle_velocity;
FloatPropertyRNA rna_Particle_angular_velocity;
FloatPropertyRNA rna_Particle_rotation;
FloatPropertyRNA rna_Particle_prev_location;
FloatPropertyRNA rna_Particle_prev_velocity;
FloatPropertyRNA rna_Particle_prev_angular_velocity;
FloatPropertyRNA rna_Particle_prev_rotation;
CollectionPropertyRNA rna_Particle_hair_keys;
CollectionPropertyRNA rna_Particle_particle_keys;
FloatPropertyRNA rna_Particle_birth_time;
FloatPropertyRNA rna_Particle_lifetime;
FloatPropertyRNA rna_Particle_die_time;
FloatPropertyRNA rna_Particle_size;
BoolPropertyRNA rna_Particle_is_exist;
BoolPropertyRNA rna_Particle_is_visible;
EnumPropertyRNA rna_Particle_alive_state;

extern FunctionRNA rna_Particle_uv_on_emitter_func;
extern PointerPropertyRNA rna_Particle_uv_on_emitter_modifier;
extern FloatPropertyRNA rna_Particle_uv_on_emitter_uv;



CollectionPropertyRNA rna_ParticleDupliWeight_rna_properties;
PointerPropertyRNA rna_ParticleDupliWeight_rna_type;
StringPropertyRNA rna_ParticleDupliWeight_name;
IntPropertyRNA rna_ParticleDupliWeight_count;


CollectionPropertyRNA rna_ParticleSystem_rna_properties;
PointerPropertyRNA rna_ParticleSystem_rna_type;
StringPropertyRNA rna_ParticleSystem_name;
PointerPropertyRNA rna_ParticleSystem_settings;
CollectionPropertyRNA rna_ParticleSystem_particles;
CollectionPropertyRNA rna_ParticleSystem_child_particles;
IntPropertyRNA rna_ParticleSystem_seed;
IntPropertyRNA rna_ParticleSystem_child_seed;
BoolPropertyRNA rna_ParticleSystem_is_global_hair;
BoolPropertyRNA rna_ParticleSystem_use_hair_dynamics;
PointerPropertyRNA rna_ParticleSystem_cloth;
PointerPropertyRNA rna_ParticleSystem_reactor_target_object;
IntPropertyRNA rna_ParticleSystem_reactor_target_particle_system;
BoolPropertyRNA rna_ParticleSystem_use_keyed_timing;
CollectionPropertyRNA rna_ParticleSystem_targets;
PointerPropertyRNA rna_ParticleSystem_active_particle_target;
IntPropertyRNA rna_ParticleSystem_active_particle_target_index;
StringPropertyRNA rna_ParticleSystem_vertex_group_density;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_density;
StringPropertyRNA rna_ParticleSystem_vertex_group_velocity;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_velocity;
StringPropertyRNA rna_ParticleSystem_vertex_group_length;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_length;
StringPropertyRNA rna_ParticleSystem_vertex_group_clump;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_clump;
StringPropertyRNA rna_ParticleSystem_vertex_group_kink;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_kink;
StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_1;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_1;
StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_2;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_2;
StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_end;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_end;
StringPropertyRNA rna_ParticleSystem_vertex_group_size;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_size;
StringPropertyRNA rna_ParticleSystem_vertex_group_tangent;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_tangent;
StringPropertyRNA rna_ParticleSystem_vertex_group_rotation;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_rotation;
StringPropertyRNA rna_ParticleSystem_vertex_group_field;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_field;
StringPropertyRNA rna_ParticleSystem_vertex_group_twist;
BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_twist;
PointerPropertyRNA rna_ParticleSystem_point_cache;
BoolPropertyRNA rna_ParticleSystem_has_multiple_caches;
PointerPropertyRNA rna_ParticleSystem_parent;
BoolPropertyRNA rna_ParticleSystem_is_editable;
BoolPropertyRNA rna_ParticleSystem_is_edited;
FloatPropertyRNA rna_ParticleSystem_dt_frac;

extern FunctionRNA rna_ParticleSystem_co_hair_func;
extern PointerPropertyRNA rna_ParticleSystem_co_hair_object;
extern IntPropertyRNA rna_ParticleSystem_co_hair_particle_no;
extern IntPropertyRNA rna_ParticleSystem_co_hair_step;
extern FloatPropertyRNA rna_ParticleSystem_co_hair_co;

extern FunctionRNA rna_ParticleSystem_uv_on_emitter_func;
extern PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_modifier;
extern PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_particle;
extern IntPropertyRNA rna_ParticleSystem_uv_on_emitter_particle_no;
extern IntPropertyRNA rna_ParticleSystem_uv_on_emitter_uv_no;
extern FloatPropertyRNA rna_ParticleSystem_uv_on_emitter_uv;

extern FunctionRNA rna_ParticleSystem_mcol_on_emitter_func;
extern PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_modifier;
extern PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle;
extern IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle_no;
extern IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_vcol_no;
extern FloatPropertyRNA rna_ParticleSystem_mcol_on_emitter_mcol;



extern CollectionPropertyRNA rna_TextureSlot_rna_properties;
extern PointerPropertyRNA rna_TextureSlot_rna_type;
extern PointerPropertyRNA rna_TextureSlot_texture;
extern StringPropertyRNA rna_TextureSlot_name;
extern FloatPropertyRNA rna_TextureSlot_offset;
extern FloatPropertyRNA rna_TextureSlot_scale;
extern FloatPropertyRNA rna_TextureSlot_color;
extern EnumPropertyRNA rna_TextureSlot_blend_type;
extern FloatPropertyRNA rna_TextureSlot_default_value;
extern EnumPropertyRNA rna_TextureSlot_output_node;

EnumPropertyRNA rna_ParticleSettingsTextureSlot_texture_coords;
PointerPropertyRNA rna_ParticleSettingsTextureSlot_object;
StringPropertyRNA rna_ParticleSettingsTextureSlot_uv_layer;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_x;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_y;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_z;
EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_time;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_life;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_density;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_size;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_velocity;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_field;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_gravity;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_damp;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_clump;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink_amp;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink_freq;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_rough;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_length;
BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_twist;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_time_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_life_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_density_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_size_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_velocity_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_field_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_gravity_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_damp_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_length_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_clump_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_amp_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_freq_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_rough_factor;
FloatPropertyRNA rna_ParticleSettingsTextureSlot_twist_factor;


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

CollectionPropertyRNA rna_ParticleSettings_texture_slots;
PointerPropertyRNA rna_ParticleSettings_active_texture;
IntPropertyRNA rna_ParticleSettings_active_texture_index;
BoolPropertyRNA rna_ParticleSettings_is_fluid;
BoolPropertyRNA rna_ParticleSettings_use_react_start_end;
BoolPropertyRNA rna_ParticleSettings_use_react_multiple;
BoolPropertyRNA rna_ParticleSettings_use_regrow_hair;
BoolPropertyRNA rna_ParticleSettings_show_unborn;
BoolPropertyRNA rna_ParticleSettings_use_dead;
BoolPropertyRNA rna_ParticleSettings_use_emit_random;
BoolPropertyRNA rna_ParticleSettings_use_even_distribution;
BoolPropertyRNA rna_ParticleSettings_use_die_on_collision;
BoolPropertyRNA rna_ParticleSettings_use_size_deflect;
BoolPropertyRNA rna_ParticleSettings_use_rotations;
BoolPropertyRNA rna_ParticleSettings_use_dynamic_rotation;
BoolPropertyRNA rna_ParticleSettings_use_multiply_size_mass;
BoolPropertyRNA rna_ParticleSettings_use_advanced_hair;
BoolPropertyRNA rna_ParticleSettings_lock_boids_to_surface;
BoolPropertyRNA rna_ParticleSettings_use_hair_bspline;
BoolPropertyRNA rna_ParticleSettings_invert_grid;
BoolPropertyRNA rna_ParticleSettings_hexagonal_grid;
BoolPropertyRNA rna_ParticleSettings_apply_effector_to_children;
BoolPropertyRNA rna_ParticleSettings_create_long_hair_children;
BoolPropertyRNA rna_ParticleSettings_apply_guide_to_children;
BoolPropertyRNA rna_ParticleSettings_use_self_effect;
EnumPropertyRNA rna_ParticleSettings_type;
EnumPropertyRNA rna_ParticleSettings_emit_from;
EnumPropertyRNA rna_ParticleSettings_distribution;
EnumPropertyRNA rna_ParticleSettings_physics_type;
EnumPropertyRNA rna_ParticleSettings_rotation_mode;
EnumPropertyRNA rna_ParticleSettings_angular_velocity_mode;
EnumPropertyRNA rna_ParticleSettings_react_event;
BoolPropertyRNA rna_ParticleSettings_show_guide_hairs;
BoolPropertyRNA rna_ParticleSettings_show_hair_grid;
BoolPropertyRNA rna_ParticleSettings_show_velocity;
BoolPropertyRNA rna_ParticleSettings_show_size;
BoolPropertyRNA rna_ParticleSettings_show_health;
BoolPropertyRNA rna_ParticleSettings_use_absolute_path_time;
BoolPropertyRNA rna_ParticleSettings_use_parent_particles;
BoolPropertyRNA rna_ParticleSettings_show_number;
BoolPropertyRNA rna_ParticleSettings_use_collection_pick_random;
BoolPropertyRNA rna_ParticleSettings_use_collection_count;
BoolPropertyRNA rna_ParticleSettings_use_global_instance;
BoolPropertyRNA rna_ParticleSettings_use_rotation_instance;
BoolPropertyRNA rna_ParticleSettings_use_scale_instance;
BoolPropertyRNA rna_ParticleSettings_use_render_adaptive;
BoolPropertyRNA rna_ParticleSettings_use_velocity_length;
BoolPropertyRNA rna_ParticleSettings_use_whole_collection;
BoolPropertyRNA rna_ParticleSettings_use_strand_primitive;
EnumPropertyRNA rna_ParticleSettings_display_method;
EnumPropertyRNA rna_ParticleSettings_render_type;
EnumPropertyRNA rna_ParticleSettings_display_color;
FloatPropertyRNA rna_ParticleSettings_display_size;
EnumPropertyRNA rna_ParticleSettings_child_type;
IntPropertyRNA rna_ParticleSettings_display_step;
IntPropertyRNA rna_ParticleSettings_render_step;
IntPropertyRNA rna_ParticleSettings_hair_step;
FloatPropertyRNA rna_ParticleSettings_bending_random;
IntPropertyRNA rna_ParticleSettings_keys_step;
IntPropertyRNA rna_ParticleSettings_adaptive_angle;
IntPropertyRNA rna_ParticleSettings_adaptive_pixel;
IntPropertyRNA rna_ParticleSettings_display_percentage;
IntPropertyRNA rna_ParticleSettings_material;
EnumPropertyRNA rna_ParticleSettings_material_slot;
EnumPropertyRNA rna_ParticleSettings_integrator;
EnumPropertyRNA rna_ParticleSettings_kink;
EnumPropertyRNA rna_ParticleSettings_kink_axis;
FloatPropertyRNA rna_ParticleSettings_color_maximum;
FloatPropertyRNA rna_ParticleSettings_frame_start;
FloatPropertyRNA rna_ParticleSettings_frame_end;
FloatPropertyRNA rna_ParticleSettings_lifetime;
FloatPropertyRNA rna_ParticleSettings_lifetime_random;
FloatPropertyRNA rna_ParticleSettings_time_tweak;
FloatPropertyRNA rna_ParticleSettings_timestep;
BoolPropertyRNA rna_ParticleSettings_use_adaptive_subframes;
IntPropertyRNA rna_ParticleSettings_subframes;
FloatPropertyRNA rna_ParticleSettings_courant_target;
FloatPropertyRNA rna_ParticleSettings_jitter_factor;
FloatPropertyRNA rna_ParticleSettings_effect_hair;
IntPropertyRNA rna_ParticleSettings_count;
IntPropertyRNA rna_ParticleSettings_userjit;
IntPropertyRNA rna_ParticleSettings_grid_resolution;
FloatPropertyRNA rna_ParticleSettings_grid_random;
IntPropertyRNA rna_ParticleSettings_effector_amount;
FloatPropertyRNA rna_ParticleSettings_normal_factor;
FloatPropertyRNA rna_ParticleSettings_object_factor;
FloatPropertyRNA rna_ParticleSettings_factor_random;
FloatPropertyRNA rna_ParticleSettings_particle_factor;
FloatPropertyRNA rna_ParticleSettings_tangent_factor;
FloatPropertyRNA rna_ParticleSettings_tangent_phase;
FloatPropertyRNA rna_ParticleSettings_reactor_factor;
FloatPropertyRNA rna_ParticleSettings_object_align_factor;
FloatPropertyRNA rna_ParticleSettings_angular_velocity_factor;
FloatPropertyRNA rna_ParticleSettings_phase_factor;
FloatPropertyRNA rna_ParticleSettings_rotation_factor_random;
FloatPropertyRNA rna_ParticleSettings_phase_factor_random;
FloatPropertyRNA rna_ParticleSettings_hair_length;
FloatPropertyRNA rna_ParticleSettings_mass;
FloatPropertyRNA rna_ParticleSettings_particle_size;
FloatPropertyRNA rna_ParticleSettings_size_random;
PointerPropertyRNA rna_ParticleSettings_collision_collection;
FloatPropertyRNA rna_ParticleSettings_drag_factor;
FloatPropertyRNA rna_ParticleSettings_brownian_factor;
FloatPropertyRNA rna_ParticleSettings_damping;
FloatPropertyRNA rna_ParticleSettings_length_random;
IntPropertyRNA rna_ParticleSettings_child_nbr;
IntPropertyRNA rna_ParticleSettings_rendered_child_count;
FloatPropertyRNA rna_ParticleSettings_virtual_parents;
FloatPropertyRNA rna_ParticleSettings_child_size;
FloatPropertyRNA rna_ParticleSettings_child_size_random;
FloatPropertyRNA rna_ParticleSettings_child_radius;
FloatPropertyRNA rna_ParticleSettings_child_roundness;
FloatPropertyRNA rna_ParticleSettings_clump_factor;
FloatPropertyRNA rna_ParticleSettings_clump_shape;
BoolPropertyRNA rna_ParticleSettings_use_clump_curve;
PointerPropertyRNA rna_ParticleSettings_clump_curve;
BoolPropertyRNA rna_ParticleSettings_use_clump_noise;
FloatPropertyRNA rna_ParticleSettings_clump_noise_size;
FloatPropertyRNA rna_ParticleSettings_kink_amplitude;
FloatPropertyRNA rna_ParticleSettings_kink_amplitude_clump;
FloatPropertyRNA rna_ParticleSettings_kink_amplitude_random;
FloatPropertyRNA rna_ParticleSettings_kink_frequency;
FloatPropertyRNA rna_ParticleSettings_kink_shape;
FloatPropertyRNA rna_ParticleSettings_kink_flat;
IntPropertyRNA rna_ParticleSettings_kink_extra_steps;
FloatPropertyRNA rna_ParticleSettings_kink_axis_random;
FloatPropertyRNA rna_ParticleSettings_roughness_1;
FloatPropertyRNA rna_ParticleSettings_roughness_1_size;
FloatPropertyRNA rna_ParticleSettings_roughness_2;
FloatPropertyRNA rna_ParticleSettings_roughness_2_size;
FloatPropertyRNA rna_ParticleSettings_roughness_2_threshold;
FloatPropertyRNA rna_ParticleSettings_roughness_endpoint;
FloatPropertyRNA rna_ParticleSettings_roughness_end_shape;
BoolPropertyRNA rna_ParticleSettings_use_roughness_curve;
PointerPropertyRNA rna_ParticleSettings_roughness_curve;
FloatPropertyRNA rna_ParticleSettings_child_length;
FloatPropertyRNA rna_ParticleSettings_child_length_threshold;
FloatPropertyRNA rna_ParticleSettings_child_parting_factor;
FloatPropertyRNA rna_ParticleSettings_child_parting_min;
FloatPropertyRNA rna_ParticleSettings_child_parting_max;
FloatPropertyRNA rna_ParticleSettings_branch_threshold;
FloatPropertyRNA rna_ParticleSettings_line_length_tail;
FloatPropertyRNA rna_ParticleSettings_line_length_head;
FloatPropertyRNA rna_ParticleSettings_path_start;
FloatPropertyRNA rna_ParticleSettings_path_end;
IntPropertyRNA rna_ParticleSettings_trail_count;
IntPropertyRNA rna_ParticleSettings_keyed_loops;
BoolPropertyRNA rna_ParticleSettings_use_modifier_stack;
PointerPropertyRNA rna_ParticleSettings_instance_collection;
CollectionPropertyRNA rna_ParticleSettings_instance_weights;
PointerPropertyRNA rna_ParticleSettings_active_instanceweight;
IntPropertyRNA rna_ParticleSettings_active_instanceweight_index;
PointerPropertyRNA rna_ParticleSettings_instance_object;
PointerPropertyRNA rna_ParticleSettings_boids;
PointerPropertyRNA rna_ParticleSettings_fluid;
PointerPropertyRNA rna_ParticleSettings_effector_weights;
PointerPropertyRNA rna_ParticleSettings_animation_data;
PointerPropertyRNA rna_ParticleSettings_force_field_1;
PointerPropertyRNA rna_ParticleSettings_force_field_2;
FloatPropertyRNA rna_ParticleSettings_twist;
BoolPropertyRNA rna_ParticleSettings_use_twist_curve;
PointerPropertyRNA rna_ParticleSettings_twist_curve;
BoolPropertyRNA rna_ParticleSettings_use_close_tip;
FloatPropertyRNA rna_ParticleSettings_shape;
FloatPropertyRNA rna_ParticleSettings_root_radius;
FloatPropertyRNA rna_ParticleSettings_tip_radius;
FloatPropertyRNA rna_ParticleSettings_radius_scale;

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



CollectionPropertyRNA rna_ParticleSettingsTextureSlots_rna_properties;
PointerPropertyRNA rna_ParticleSettingsTextureSlots_rna_type;

extern FunctionRNA rna_ParticleSettingsTextureSlots_add_func;
extern PointerPropertyRNA rna_ParticleSettingsTextureSlots_add_mtex;

extern FunctionRNA rna_ParticleSettingsTextureSlots_create_func;
extern IntPropertyRNA rna_ParticleSettingsTextureSlots_create_index;
extern PointerPropertyRNA rna_ParticleSettingsTextureSlots_create_mtex;

extern FunctionRNA rna_ParticleSettingsTextureSlots_clear_func;
extern IntPropertyRNA rna_ParticleSettingsTextureSlots_clear_index;


static PointerRNA ParticleTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleTarget_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleTarget_rna_properties_get(iter);
    }
}

void ParticleTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleTarget_rna_properties_get(iter);
    }
}

void ParticleTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleTarget_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ParticleTarget_name_get(PointerRNA *ptr, char *value)
{
    rna_ParticleTarget_name_get(ptr, value);
}

int ParticleTarget_name_length(PointerRNA *ptr)
{
    return rna_ParticleTarget_name_length(ptr);
}

PointerRNA ParticleTarget_object_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void ParticleTarget_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->ob = value.data;
}

int ParticleTarget_system_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (int)(data->psys);
}

void ParticleTarget_system_set(PointerRNA *ptr, int value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->psys = CLAMPIS(value, 1, INT_MAX);
}

float ParticleTarget_time_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (float)(data->time);
}

void ParticleTarget_time_set(PointerRNA *ptr, float value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->time = CLAMPIS(value, 0.0f, 1048574.0f);
}

float ParticleTarget_duration_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (float)(data->duration);
}

void ParticleTarget_duration_set(PointerRNA *ptr, float value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->duration = CLAMPIS(value, 0.0f, 1048574.0f);
}

bool ParticleTarget_is_valid_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void ParticleTarget_is_valid_set(PointerRNA *ptr, bool value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

int ParticleTarget_alliance_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (int)(data->mode);
}

void ParticleTarget_alliance_set(PointerRNA *ptr, int value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->mode = value;
}

static PointerRNA SPHFluidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void SPHFluidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SPHFluidSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SPHFluidSettings_rna_properties_get(iter);
    }
}

void SPHFluidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SPHFluidSettings_rna_properties_get(iter);
    }
}

void SPHFluidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int SPHFluidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SPHFluidSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int SPHFluidSettings_solver_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (int)(data->solver);
}

void SPHFluidSettings_solver_set(PointerRNA *ptr, int value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->solver = value;
}

float SPHFluidSettings_spring_force_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->spring_k);
}

void SPHFluidSettings_spring_force_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->spring_k = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_fluid_radius_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->radius);
}

void SPHFluidSettings_fluid_radius_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->radius = CLAMPIS(value, 0.0f, 20.0f);
}

float SPHFluidSettings_rest_length_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->rest_length);
}

void SPHFluidSettings_rest_length_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->rest_length = CLAMPIS(value, 0.0f, 2.0f);
}

bool SPHFluidSettings_use_viscoelastic_springs_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void SPHFluidSettings_use_viscoelastic_springs_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool SPHFluidSettings_use_initial_rest_length_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void SPHFluidSettings_use_initial_rest_length_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

float SPHFluidSettings_plasticity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->plasticity_constant);
}

void SPHFluidSettings_plasticity_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->plasticity_constant = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_yield_ratio_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->yield_ratio);
}

void SPHFluidSettings_yield_ratio_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->yield_ratio = CLAMPIS(value, 0.0f, 1.0f);
}

int SPHFluidSettings_spring_frames_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (int)(data->spring_frames);
}

void SPHFluidSettings_spring_frames_set(PointerRNA *ptr, int value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->spring_frames = CLAMPIS(value, 0, 100);
}

float SPHFluidSettings_linear_viscosity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->viscosity_omega);
}

void SPHFluidSettings_linear_viscosity_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->viscosity_omega = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_stiff_viscosity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->viscosity_beta);
}

void SPHFluidSettings_stiff_viscosity_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->viscosity_beta = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_stiffness_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->stiffness_k);
}

void SPHFluidSettings_stiffness_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->stiffness_k = CLAMPIS(value, 0.0f, 1000.0f);
}

float SPHFluidSettings_repulsion_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->stiffness_knear);
}

void SPHFluidSettings_repulsion_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->stiffness_knear = CLAMPIS(value, 0.0f, 100.0f);
}

float SPHFluidSettings_rest_density_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->rest_density);
}

void SPHFluidSettings_rest_density_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->rest_density = CLAMPIS(value, 0.0f, 10000.0f);
}

float SPHFluidSettings_buoyancy_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->buoyancy);
}

void SPHFluidSettings_buoyancy_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->buoyancy = CLAMPIS(value, 0.0f, 10.0f);
}

bool SPHFluidSettings_use_factor_repulsion_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void SPHFluidSettings_use_factor_repulsion_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool SPHFluidSettings_use_factor_density_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void SPHFluidSettings_use_factor_density_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool SPHFluidSettings_use_factor_radius_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void SPHFluidSettings_use_factor_radius_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool SPHFluidSettings_use_factor_stiff_viscosity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void SPHFluidSettings_use_factor_stiff_viscosity_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool SPHFluidSettings_use_factor_rest_length_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void SPHFluidSettings_use_factor_rest_length_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

static PointerRNA ParticleHairKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleHairKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleHairKey_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleHairKey_rna_properties_get(iter);
    }
}

void ParticleHairKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleHairKey_rna_properties_get(iter);
    }
}

void ParticleHairKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleHairKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleHairKey_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float ParticleHairKey_time_get(PointerRNA *ptr)
{
    HairKey *data = (HairKey *)(ptr->data);
    return (float)(data->time);
}

void ParticleHairKey_time_set(PointerRNA *ptr, float value)
{
    HairKey *data = (HairKey *)(ptr->data);
    data->time = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ParticleHairKey_weight_get(PointerRNA *ptr)
{
    HairKey *data = (HairKey *)(ptr->data);
    return (float)(data->weight);
}

void ParticleHairKey_weight_set(PointerRNA *ptr, float value)
{
    HairKey *data = (HairKey *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

void ParticleHairKey_co_get(PointerRNA *ptr, float values[3])
{
    rna_ParticleHairKey_location_object_get(ptr, values);
}

void ParticleHairKey_co_set(PointerRNA *ptr, const float values[3])
{
    rna_ParticleHairKey_location_object_set(ptr, values);
}

void ParticleHairKey_co_local_get(PointerRNA *ptr, float values[3])
{
    HairKey *data = (HairKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void ParticleHairKey_co_local_set(PointerRNA *ptr, const float values[3])
{
    HairKey *data = (HairKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

static PointerRNA ParticleKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleKey_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleKey_rna_properties_get(iter);
    }
}

void ParticleKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleKey_rna_properties_get(iter);
    }
}

void ParticleKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleKey_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ParticleKey_location_get(PointerRNA *ptr, float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void ParticleKey_location_set(PointerRNA *ptr, const float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

void ParticleKey_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vel)[i]);
    }
}

void ParticleKey_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->vel)[i] = values[i];
    }
}

void ParticleKey_rotation_get(PointerRNA *ptr, float values[4])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->rot)[i]);
    }
}

void ParticleKey_rotation_set(PointerRNA *ptr, const float values[4])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->rot)[i] = values[i];
    }
}

void ParticleKey_angular_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->ave)[i]);
    }
}

void ParticleKey_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->ave)[i] = values[i];
    }
}

float ParticleKey_time_get(PointerRNA *ptr)
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    return (float)(data->time);
}

void ParticleKey_time_set(PointerRNA *ptr, float value)
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    data->time = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA ChildParticle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ChildParticle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ChildParticle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ChildParticle_rna_properties_get(iter);
    }
}

void ChildParticle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ChildParticle_rna_properties_get(iter);
    }
}

void ChildParticle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ChildParticle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ChildParticle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Particle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Particle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Particle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Particle_rna_properties_get(iter);
    }
}

void Particle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Particle_rna_properties_get(iter);
    }
}

void Particle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Particle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Particle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void Particle_location_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->state.co)[i]);
    }
}

void Particle_location_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->state.co)[i] = values[i];
    }
}

void Particle_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->state.vel)[i]);
    }
}

void Particle_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->state.vel)[i] = values[i];
    }
}

void Particle_angular_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->state.ave)[i]);
    }
}

void Particle_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->state.ave)[i] = values[i];
    }
}

void Particle_rotation_get(PointerRNA *ptr, float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->state.rot)[i]);
    }
}

void Particle_rotation_set(PointerRNA *ptr, const float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->state.rot)[i] = values[i];
    }
}

void Particle_prev_location_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->prev_state.co)[i]);
    }
}

void Particle_prev_location_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->prev_state.co)[i] = values[i];
    }
}

void Particle_prev_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->prev_state.vel)[i]);
    }
}

void Particle_prev_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->prev_state.vel)[i] = values[i];
    }
}

void Particle_prev_angular_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->prev_state.ave)[i]);
    }
}

void Particle_prev_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->prev_state.ave)[i] = values[i];
    }
}

void Particle_prev_rotation_get(PointerRNA *ptr, float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->prev_state.rot)[i]);
    }
}

void Particle_prev_rotation_set(PointerRNA *ptr, const float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->prev_state.rot)[i] = values[i];
    }
}

int Particle_hair_keys_length(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (data->hair == NULL) ? 0 : data->totkey;
}

static PointerRNA Particle_hair_keys_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleHairKey, rna_iterator_array_get(iter));
}

void Particle_hair_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Particle_hair_keys;

    rna_iterator_array_begin(iter, data->hair, sizeof(data->hair[0]), data->totkey, 0, NULL);

    if (iter->valid) {
        iter->ptr = Particle_hair_keys_get(iter);
    }
}

void Particle_hair_keys_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Particle_hair_keys_get(iter);
    }
}

void Particle_hair_keys_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Particle_hair_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Particle_hair_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = Particle_hair_keys_get(&iter); }
    }

    Particle_hair_keys_end(&iter);

    return found;
}

int Particle_particle_keys_length(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (data->keys == NULL) ? 0 : data->totkey;
}

static PointerRNA Particle_particle_keys_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleKey, rna_iterator_array_get(iter));
}

void Particle_particle_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Particle_particle_keys;

    rna_iterator_array_begin(iter, data->keys, sizeof(data->keys[0]), data->totkey, 0, NULL);

    if (iter->valid) {
        iter->ptr = Particle_particle_keys_get(iter);
    }
}

void Particle_particle_keys_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Particle_particle_keys_get(iter);
    }
}

void Particle_particle_keys_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Particle_particle_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Particle_particle_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = Particle_particle_keys_get(&iter); }
    }

    Particle_particle_keys_end(&iter);

    return found;
}

float Particle_birth_time_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->time);
}

void Particle_birth_time_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->time = value;
}

float Particle_lifetime_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->lifetime);
}

void Particle_lifetime_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->lifetime = value;
}

float Particle_die_time_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->dietime);
}

void Particle_die_time_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->dietime = value;
}

float Particle_size_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->size);
}

void Particle_size_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->size = value;
}

bool Particle_is_exist_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

bool Particle_is_visible_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

int Particle_alive_state_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (int)(data->alive);
}

void Particle_alive_state_set(PointerRNA *ptr, int value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->alive = value;
}

static PointerRNA ParticleDupliWeight_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleDupliWeight_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleDupliWeight_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleDupliWeight_rna_properties_get(iter);
    }
}

void ParticleDupliWeight_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleDupliWeight_rna_properties_get(iter);
    }
}

void ParticleDupliWeight_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleDupliWeight_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleDupliWeight_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ParticleDupliWeight_name_get(PointerRNA *ptr, char *value)
{
    rna_ParticleDupliWeight_name_get(ptr, value);
}

int ParticleDupliWeight_name_length(PointerRNA *ptr)
{
    return rna_ParticleDupliWeight_name_length(ptr);
}

int ParticleDupliWeight_count_get(PointerRNA *ptr)
{
    ParticleDupliWeight *data = (ParticleDupliWeight *)(ptr->data);
    return (int)(data->count);
}

void ParticleDupliWeight_count_set(PointerRNA *ptr, int value)
{
    ParticleDupliWeight *data = (ParticleDupliWeight *)(ptr->data);
    data->count = CLAMPIS(value, 0, 32767);
}

static PointerRNA ParticleSystem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleSystem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSystem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSystem_rna_properties_get(iter);
    }
}

void ParticleSystem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_rna_properties_get(iter);
    }
}

void ParticleSystem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleSystem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleSystem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ParticleSystem_name_get(PointerRNA *ptr, char *value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int ParticleSystem_name_length(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return strlen(data->name);
}

void ParticleSystem_name_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleSystem_name_set(ptr, value);
}

PointerRNA ParticleSystem_settings_get(PointerRNA *ptr)
{
    return rna_particle_settings_get(ptr);
}

void ParticleSystem_settings_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_particle_settings_set(ptr, value, reports);
}

int ParticleSystem_particles_length(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (data->particles == NULL) ? 0 : data->totpart;
}

static PointerRNA ParticleSystem_particles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Particle, rna_iterator_array_get(iter));
}

void ParticleSystem_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSystem_particles;

    rna_iterator_array_begin(iter, data->particles, sizeof(data->particles[0]), data->totpart, 0, NULL);

    if (iter->valid) {
        iter->ptr = ParticleSystem_particles_get(iter);
    }
}

void ParticleSystem_particles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_particles_get(iter);
    }
}

void ParticleSystem_particles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int ParticleSystem_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ParticleSystem_particles_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSystem_particles_get(&iter); }
    }

    ParticleSystem_particles_end(&iter);

    return found;
}

int ParticleSystem_child_particles_length(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (data->child == NULL) ? 0 : data->totchild;
}

static PointerRNA ParticleSystem_child_particles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ChildParticle, rna_iterator_array_get(iter));
}

void ParticleSystem_child_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSystem_child_particles;

    rna_iterator_array_begin(iter, data->child, sizeof(data->child[0]), data->totchild, 0, NULL);

    if (iter->valid) {
        iter->ptr = ParticleSystem_child_particles_get(iter);
    }
}

void ParticleSystem_child_particles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_child_particles_get(iter);
    }
}

void ParticleSystem_child_particles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int ParticleSystem_child_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ParticleSystem_child_particles_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSystem_child_particles_get(&iter); }
    }

    ParticleSystem_child_particles_end(&iter);

    return found;
}

int ParticleSystem_seed_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (int)(data->seed);
}

void ParticleSystem_seed_set(PointerRNA *ptr, int value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    data->seed = CLAMPIS(value, 0, INT_MAX);
}

int ParticleSystem_child_seed_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (int)(data->child_seed);
}

void ParticleSystem_child_seed_set(PointerRNA *ptr, int value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    data->child_seed = CLAMPIS(value, 0, INT_MAX);
}

bool ParticleSystem_is_global_hair_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

bool ParticleSystem_use_hair_dynamics_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void ParticleSystem_use_hair_dynamics_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

PointerRNA ParticleSystem_cloth_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ClothModifier, data->clmd);
}

PointerRNA ParticleSystem_reactor_target_object_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target_ob);
}

void ParticleSystem_reactor_target_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->target_ob = value.data;
}

int ParticleSystem_reactor_target_particle_system_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (int)(data->target_psys);
}

void ParticleSystem_reactor_target_particle_system_set(PointerRNA *ptr, int value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    data->target_psys = CLAMPIS(value, 1, 32767);
}

bool ParticleSystem_use_keyed_timing_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void ParticleSystem_use_keyed_timing_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA ParticleSystem_targets_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleTarget, rna_iterator_listbase_get(iter));
}

void ParticleSystem_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSystem_targets;

    rna_iterator_listbase_begin(iter, &data->targets, NULL);

    if (iter->valid) {
        iter->ptr = ParticleSystem_targets_get(iter);
    }
}

void ParticleSystem_targets_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_targets_get(iter);
    }
}

void ParticleSystem_targets_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleSystem_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ParticleSystem_targets_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSystem_targets_get(&iter); }
    }

    ParticleSystem_targets_end(&iter);

    return found;
}

int ParticleSystem_targets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ParticleTarget_name_length(PointerRNA *);
    extern void ParticleTarget_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ParticleSystem_targets_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleTarget_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleTarget_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ParticleTarget_name_get(&iter.ptr, name);
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
        ParticleSystem_targets_next(&iter);
    }
    ParticleSystem_targets_end(&iter);

    return found;
}

PointerRNA ParticleSystem_active_particle_target_get(PointerRNA *ptr)
{
    return rna_ParticleSystem_active_particle_target_get(ptr);
}

int ParticleSystem_active_particle_target_index_get(PointerRNA *ptr)
{
    return rna_ParticleSystem_active_particle_target_index_get(ptr);
}

void ParticleSystem_active_particle_target_index_set(PointerRNA *ptr, int value)
{
    rna_ParticleSystem_active_particle_target_index_set(ptr, value);
}

void ParticleSystem_vertex_group_density_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_0(ptr, value);
}

int ParticleSystem_vertex_group_density_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_0(ptr);
}

void ParticleSystem_vertex_group_density_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_0(ptr, value);
}

bool ParticleSystem_invert_vertex_group_density_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 1) != 0);
}

void ParticleSystem_invert_vertex_group_density_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 1; }
    else { data->vg_neg &= ~1; }
}

void ParticleSystem_vertex_group_velocity_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_1(ptr, value);
}

int ParticleSystem_vertex_group_velocity_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_1(ptr);
}

void ParticleSystem_vertex_group_velocity_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_1(ptr, value);
}

bool ParticleSystem_invert_vertex_group_velocity_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 2) != 0);
}

void ParticleSystem_invert_vertex_group_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 2; }
    else { data->vg_neg &= ~2; }
}

void ParticleSystem_vertex_group_length_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_2(ptr, value);
}

int ParticleSystem_vertex_group_length_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_2(ptr);
}

void ParticleSystem_vertex_group_length_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_2(ptr, value);
}

bool ParticleSystem_invert_vertex_group_length_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 4) != 0);
}

void ParticleSystem_invert_vertex_group_length_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 4; }
    else { data->vg_neg &= ~4; }
}

void ParticleSystem_vertex_group_clump_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_3(ptr, value);
}

int ParticleSystem_vertex_group_clump_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_3(ptr);
}

void ParticleSystem_vertex_group_clump_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_3(ptr, value);
}

bool ParticleSystem_invert_vertex_group_clump_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 8) != 0);
}

void ParticleSystem_invert_vertex_group_clump_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 8; }
    else { data->vg_neg &= ~8; }
}

void ParticleSystem_vertex_group_kink_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_4(ptr, value);
}

int ParticleSystem_vertex_group_kink_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_4(ptr);
}

void ParticleSystem_vertex_group_kink_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_4(ptr, value);
}

bool ParticleSystem_invert_vertex_group_kink_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 16) != 0);
}

void ParticleSystem_invert_vertex_group_kink_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 16; }
    else { data->vg_neg &= ~16; }
}

void ParticleSystem_vertex_group_roughness_1_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_5(ptr, value);
}

int ParticleSystem_vertex_group_roughness_1_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_5(ptr);
}

void ParticleSystem_vertex_group_roughness_1_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_5(ptr, value);
}

bool ParticleSystem_invert_vertex_group_roughness_1_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 32) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_1_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 32; }
    else { data->vg_neg &= ~32; }
}

void ParticleSystem_vertex_group_roughness_2_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_6(ptr, value);
}

int ParticleSystem_vertex_group_roughness_2_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_6(ptr);
}

void ParticleSystem_vertex_group_roughness_2_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_6(ptr, value);
}

bool ParticleSystem_invert_vertex_group_roughness_2_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 64) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_2_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 64; }
    else { data->vg_neg &= ~64; }
}

void ParticleSystem_vertex_group_roughness_end_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_7(ptr, value);
}

int ParticleSystem_vertex_group_roughness_end_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_7(ptr);
}

void ParticleSystem_vertex_group_roughness_end_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_7(ptr, value);
}

bool ParticleSystem_invert_vertex_group_roughness_end_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 128) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_end_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 128; }
    else { data->vg_neg &= ~128; }
}

void ParticleSystem_vertex_group_size_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_8(ptr, value);
}

int ParticleSystem_vertex_group_size_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_8(ptr);
}

void ParticleSystem_vertex_group_size_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_8(ptr, value);
}

bool ParticleSystem_invert_vertex_group_size_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 256) != 0);
}

void ParticleSystem_invert_vertex_group_size_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 256; }
    else { data->vg_neg &= ~256; }
}

void ParticleSystem_vertex_group_tangent_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_9(ptr, value);
}

int ParticleSystem_vertex_group_tangent_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_9(ptr);
}

void ParticleSystem_vertex_group_tangent_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_9(ptr, value);
}

bool ParticleSystem_invert_vertex_group_tangent_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 512) != 0);
}

void ParticleSystem_invert_vertex_group_tangent_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 512; }
    else { data->vg_neg &= ~512; }
}

void ParticleSystem_vertex_group_rotation_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_10(ptr, value);
}

int ParticleSystem_vertex_group_rotation_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_10(ptr);
}

void ParticleSystem_vertex_group_rotation_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_10(ptr, value);
}

bool ParticleSystem_invert_vertex_group_rotation_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 1024) != 0);
}

void ParticleSystem_invert_vertex_group_rotation_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 1024; }
    else { data->vg_neg &= ~1024; }
}

void ParticleSystem_vertex_group_field_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_11(ptr, value);
}

int ParticleSystem_vertex_group_field_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_11(ptr);
}

void ParticleSystem_vertex_group_field_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_11(ptr, value);
}

bool ParticleSystem_invert_vertex_group_field_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 2048) != 0);
}

void ParticleSystem_invert_vertex_group_field_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 2048; }
    else { data->vg_neg &= ~2048; }
}

void ParticleSystem_vertex_group_twist_get(PointerRNA *ptr, char *value)
{
    rna_ParticleVGroup_name_get_12(ptr, value);
}

int ParticleSystem_vertex_group_twist_length(PointerRNA *ptr)
{
    return rna_ParticleVGroup_name_len_12(ptr);
}

void ParticleSystem_vertex_group_twist_set(PointerRNA *ptr, const char *value)
{
    rna_ParticleVGroup_name_set_12(ptr, value);
}

bool ParticleSystem_invert_vertex_group_twist_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (((data->vg_neg) & 4096) != 0);
}

void ParticleSystem_invert_vertex_group_twist_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg |= 4096; }
    else { data->vg_neg &= ~4096; }
}

PointerRNA ParticleSystem_point_cache_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->pointcache);
}

bool ParticleSystem_has_multiple_caches_get(PointerRNA *ptr)
{
    return rna_ParticleSystem_multiple_caches_get(ptr);
}

PointerRNA ParticleSystem_parent_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

void ParticleSystem_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->parent = value.data;
}

bool ParticleSystem_is_editable_get(PointerRNA *ptr)
{
    return rna_ParticleSystem_editable_get(ptr);
}

bool ParticleSystem_is_edited_get(PointerRNA *ptr)
{
    return rna_ParticleSystem_edited_get(ptr);
}

float ParticleSystem_dt_frac_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (float)(data->dt_frac);
}

int ParticleSettingsTextureSlot_texture_coords_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->texco);
}

void ParticleSettingsTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->texco = value;
}

PointerRNA ParticleSettingsTextureSlot_object_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void ParticleSettingsTextureSlot_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    MTex *data = (MTex *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->object = value.data;
}

void ParticleSettingsTextureSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
    MTex *data = (MTex *)(ptr->data);
    BLI_strncpy_utf8(value, data->uvname, 64);
}

int ParticleSettingsTextureSlot_uv_layer_length(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return strlen(data->uvname);
}

void ParticleSettingsTextureSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
    MTex *data = (MTex *)(ptr->data);
    BLI_strncpy_utf8(data->uvname, value, 64);
}

int ParticleSettingsTextureSlot_mapping_x_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->projx);
}

void ParticleSettingsTextureSlot_mapping_x_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->projx = value;
}

int ParticleSettingsTextureSlot_mapping_y_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->projy);
}

void ParticleSettingsTextureSlot_mapping_y_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->projy = value;
}

int ParticleSettingsTextureSlot_mapping_z_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->projz);
}

void ParticleSettingsTextureSlot_mapping_z_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->projz = value;
}

int ParticleSettingsTextureSlot_mapping_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->mapping);
}

void ParticleSettingsTextureSlot_mapping_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->mapping = value;
}

bool ParticleSettingsTextureSlot_use_map_time_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 1) != 0);
}

void ParticleSettingsTextureSlot_use_map_time_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 1; }
    else { data->mapto &= ~1; }
}

bool ParticleSettingsTextureSlot_use_map_life_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 2) != 0);
}

void ParticleSettingsTextureSlot_use_map_life_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 2; }
    else { data->mapto &= ~2; }
}

bool ParticleSettingsTextureSlot_use_map_density_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 4) != 0);
}

void ParticleSettingsTextureSlot_use_map_density_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 4; }
    else { data->mapto &= ~4; }
}

bool ParticleSettingsTextureSlot_use_map_size_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 8) != 0);
}

void ParticleSettingsTextureSlot_use_map_size_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 8; }
    else { data->mapto &= ~8; }
}

bool ParticleSettingsTextureSlot_use_map_velocity_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 32) != 0);
}

void ParticleSettingsTextureSlot_use_map_velocity_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 32; }
    else { data->mapto &= ~32; }
}

bool ParticleSettingsTextureSlot_use_map_field_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 64) != 0);
}

void ParticleSettingsTextureSlot_use_map_field_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 64; }
    else { data->mapto &= ~64; }
}

bool ParticleSettingsTextureSlot_use_map_gravity_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 1024) != 0);
}

void ParticleSettingsTextureSlot_use_map_gravity_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 1024; }
    else { data->mapto &= ~1024; }
}

bool ParticleSettingsTextureSlot_use_map_damp_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 2048) != 0);
}

void ParticleSettingsTextureSlot_use_map_damp_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 2048; }
    else { data->mapto &= ~2048; }
}

bool ParticleSettingsTextureSlot_use_map_clump_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 128) != 0);
}

void ParticleSettingsTextureSlot_use_map_clump_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 128; }
    else { data->mapto &= ~128; }
}

bool ParticleSettingsTextureSlot_use_map_kink_amp_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 4096) != 0);
}

void ParticleSettingsTextureSlot_use_map_kink_amp_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 4096; }
    else { data->mapto &= ~4096; }
}

bool ParticleSettingsTextureSlot_use_map_kink_freq_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 256) != 0);
}

void ParticleSettingsTextureSlot_use_map_kink_freq_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 256; }
    else { data->mapto &= ~256; }
}

bool ParticleSettingsTextureSlot_use_map_rough_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 512) != 0);
}

void ParticleSettingsTextureSlot_use_map_rough_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 512; }
    else { data->mapto &= ~512; }
}

bool ParticleSettingsTextureSlot_use_map_length_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 16) != 0);
}

void ParticleSettingsTextureSlot_use_map_length_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 16; }
    else { data->mapto &= ~16; }
}

bool ParticleSettingsTextureSlot_use_map_twist_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->mapto) & 8192) != 0);
}

void ParticleSettingsTextureSlot_use_map_twist_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto |= 8192; }
    else { data->mapto &= ~8192; }
}

float ParticleSettingsTextureSlot_time_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->timefac);
}

void ParticleSettingsTextureSlot_time_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->timefac = value;
}

float ParticleSettingsTextureSlot_life_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->lifefac);
}

void ParticleSettingsTextureSlot_life_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->lifefac = value;
}

float ParticleSettingsTextureSlot_density_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->padensfac);
}

void ParticleSettingsTextureSlot_density_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->padensfac = value;
}

float ParticleSettingsTextureSlot_size_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->sizefac);
}

void ParticleSettingsTextureSlot_size_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->sizefac = value;
}

float ParticleSettingsTextureSlot_velocity_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->ivelfac);
}

void ParticleSettingsTextureSlot_velocity_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->ivelfac = value;
}

float ParticleSettingsTextureSlot_field_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->fieldfac);
}

void ParticleSettingsTextureSlot_field_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->fieldfac = value;
}

float ParticleSettingsTextureSlot_gravity_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->gravityfac);
}

void ParticleSettingsTextureSlot_gravity_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->gravityfac = value;
}

float ParticleSettingsTextureSlot_damp_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->dampfac);
}

void ParticleSettingsTextureSlot_damp_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->dampfac = value;
}

float ParticleSettingsTextureSlot_length_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->lengthfac);
}

void ParticleSettingsTextureSlot_length_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->lengthfac = value;
}

float ParticleSettingsTextureSlot_clump_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->clumpfac);
}

void ParticleSettingsTextureSlot_clump_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->clumpfac = value;
}

float ParticleSettingsTextureSlot_kink_amp_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->kinkampfac);
}

void ParticleSettingsTextureSlot_kink_amp_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->kinkampfac = value;
}

float ParticleSettingsTextureSlot_kink_freq_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->kinkfac);
}

void ParticleSettingsTextureSlot_kink_freq_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->kinkfac = value;
}

float ParticleSettingsTextureSlot_rough_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->roughfac);
}

void ParticleSettingsTextureSlot_rough_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->roughfac = value;
}

float ParticleSettingsTextureSlot_twist_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->twistfac);
}

void ParticleSettingsTextureSlot_twist_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->twistfac = value;
}

static PointerRNA ParticleSettings_texture_slots_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSettingsTextureSlot, rna_iterator_array_dereference_get(iter));
}

void ParticleSettings_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSettings_texture_slots;

    rna_ParticleSettings_mtex_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSettings_texture_slots_get(iter);
    }
}

void ParticleSettings_texture_slots_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSettings_texture_slots_get(iter);
    }
}

void ParticleSettings_texture_slots_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

PointerRNA ParticleSettings_active_texture_get(PointerRNA *ptr)
{
    return rna_ParticleSettings_active_texture_get(ptr);
}

void ParticleSettings_active_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ParticleSettings_active_texture_set(ptr, value, reports);
}

int ParticleSettings_active_texture_index_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->texact);
}

void ParticleSettings_active_texture_index_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->texact = CLAMPIS(value, 0, 17);
}

bool ParticleSettings_is_fluid_get(PointerRNA *ptr)
{
    return rna_PartSettings_is_fluid_get(ptr);
}

bool ParticleSettings_use_react_start_end_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ParticleSettings_use_react_start_end_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool ParticleSettings_use_react_multiple_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void ParticleSettings_use_react_multiple_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool ParticleSettings_use_regrow_hair_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void ParticleSettings_use_regrow_hair_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool ParticleSettings_show_unborn_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void ParticleSettings_show_unborn_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool ParticleSettings_use_dead_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void ParticleSettings_use_dead_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool ParticleSettings_use_emit_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void ParticleSettings_use_emit_random_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool ParticleSettings_use_even_distribution_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void ParticleSettings_use_even_distribution_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool ParticleSettings_use_die_on_collision_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void ParticleSettings_use_die_on_collision_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool ParticleSettings_use_size_deflect_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void ParticleSettings_use_size_deflect_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool ParticleSettings_use_rotations_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void ParticleSettings_use_rotations_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool ParticleSettings_use_dynamic_rotation_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

void ParticleSettings_use_dynamic_rotation_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

bool ParticleSettings_use_multiply_size_mass_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

void ParticleSettings_use_multiply_size_mass_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

bool ParticleSettings_use_advanced_hair_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return !(((data->flag) & 32768) != 0);
}

void ParticleSettings_use_advanced_hair_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (!value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

bool ParticleSettings_lock_boids_to_surface_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

void ParticleSettings_lock_boids_to_surface_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

bool ParticleSettings_use_hair_bspline_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void ParticleSettings_use_hair_bspline_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool ParticleSettings_invert_grid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 67108864) != 0);
}

void ParticleSettings_invert_grid_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 67108864; }
    else { data->flag &= ~67108864; }
}

bool ParticleSettings_hexagonal_grid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 16777216) != 0);
}

void ParticleSettings_hexagonal_grid_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 16777216; }
    else { data->flag &= ~16777216; }
}

bool ParticleSettings_apply_effector_to_children_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 134217728) != 0);
}

void ParticleSettings_apply_effector_to_children_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 134217728; }
    else { data->flag &= ~134217728; }
}

bool ParticleSettings_create_long_hair_children_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 268435456) != 0);
}

void ParticleSettings_create_long_hair_children_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 268435456; }
    else { data->flag &= ~268435456; }
}

bool ParticleSettings_apply_guide_to_children_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 1073741824) != 0);
}

void ParticleSettings_apply_guide_to_children_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 1073741824; }
    else { data->flag &= ~1073741824; }
}

bool ParticleSettings_use_self_effect_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->flag) & 4194304) != 0);
}

void ParticleSettings_use_self_effect_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

int ParticleSettings_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->type);
}

void ParticleSettings_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->type = value;
}

int ParticleSettings_emit_from_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->from);
}

void ParticleSettings_emit_from_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->from = value;
}

int ParticleSettings_distribution_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->distr);
}

void ParticleSettings_distribution_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->distr = value;
}

int ParticleSettings_physics_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->phystype);
}

void ParticleSettings_physics_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->phystype = value;
}

int ParticleSettings_rotation_mode_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->rotmode);
}

void ParticleSettings_rotation_mode_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rotmode = value;
}

int ParticleSettings_angular_velocity_mode_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->avemode);
}

void ParticleSettings_angular_velocity_mode_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->avemode = value;
}

int ParticleSettings_react_event_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->reactevent);
}

void ParticleSettings_react_event_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->reactevent = value;
}

bool ParticleSettings_show_guide_hairs_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 131072) != 0);
}

void ParticleSettings_show_guide_hairs_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 131072; }
    else { data->draw &= ~131072; }
}

bool ParticleSettings_show_hair_grid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 262144) != 0);
}

void ParticleSettings_show_hair_grid_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 262144; }
    else { data->draw &= ~262144; }
}

bool ParticleSettings_show_velocity_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 1) != 0);
}

void ParticleSettings_show_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 1; }
    else { data->draw &= ~1; }
}

bool ParticleSettings_show_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 4) != 0);
}

void ParticleSettings_show_size_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 4; }
    else { data->draw &= ~4; }
}

bool ParticleSettings_show_health_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 16) != 0);
}

void ParticleSettings_show_health_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 16; }
    else { data->draw &= ~16; }
}

bool ParticleSettings_use_absolute_path_time_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 32) != 0);
}

void ParticleSettings_use_absolute_path_time_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 32; }
    else { data->draw &= ~32; }
}

bool ParticleSettings_use_parent_particles_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 256) != 0);
}

void ParticleSettings_use_parent_particles_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 256; }
    else { data->draw &= ~256; }
}

bool ParticleSettings_show_number_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 512) != 0);
}

void ParticleSettings_show_number_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 512; }
    else { data->draw &= ~512; }
}

bool ParticleSettings_use_collection_pick_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 1024) != 0);
}

void ParticleSettings_use_collection_pick_random_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 1024; }
    else { data->draw &= ~1024; }
}

bool ParticleSettings_use_collection_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 64) != 0);
}

void ParticleSettings_use_collection_count_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 64; }
    else { data->draw &= ~64; }
}

bool ParticleSettings_use_global_instance_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 2) != 0);
}

void ParticleSettings_use_global_instance_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 2; }
    else { data->draw &= ~2; }
}

bool ParticleSettings_use_rotation_instance_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 128) != 0);
}

void ParticleSettings_use_rotation_instance_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 128; }
    else { data->draw &= ~128; }
}

bool ParticleSettings_use_scale_instance_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return !(((data->draw) & 65536) != 0);
}

void ParticleSettings_use_scale_instance_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (!value) { data->draw |= 65536; }
    else { data->draw &= ~65536; }
}

bool ParticleSettings_use_render_adaptive_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 2048) != 0);
}

void ParticleSettings_use_render_adaptive_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 2048; }
    else { data->draw &= ~2048; }
}

bool ParticleSettings_use_velocity_length_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 4096) != 0);
}

void ParticleSettings_use_velocity_length_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 4096; }
    else { data->draw &= ~4096; }
}

bool ParticleSettings_use_whole_collection_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 16384) != 0);
}

void ParticleSettings_use_whole_collection_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 16384; }
    else { data->draw &= ~16384; }
}

bool ParticleSettings_use_strand_primitive_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->draw) & 32768) != 0);
}

void ParticleSettings_use_strand_primitive_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw |= 32768; }
    else { data->draw &= ~32768; }
}

int ParticleSettings_display_method_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->draw_as);
}

void ParticleSettings_display_method_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_as = value;
}

int ParticleSettings_render_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->ren_as);
}

void ParticleSettings_render_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->ren_as = value;
}

int ParticleSettings_display_color_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->draw_col);
}

void ParticleSettings_display_color_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_col = value;
}

float ParticleSettings_display_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->draw_size);
}

void ParticleSettings_display_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_size = CLAMPIS(value, 0.0f, 1000.0f);
}

int ParticleSettings_child_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->childtype);
}

void ParticleSettings_child_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childtype = value;
}

int ParticleSettings_display_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->draw_step);
}

void ParticleSettings_display_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_step = CLAMPIS(value, 0, 10);
}

int ParticleSettings_render_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->ren_step);
}

void ParticleSettings_render_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->ren_step = CLAMPIS(value, 0, 20);
}

int ParticleSettings_hair_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->hair_step);
}

void ParticleSettings_hair_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->hair_step = CLAMPIS(value, 2, 32767);
}

float ParticleSettings_bending_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->bending_random);
}

void ParticleSettings_bending_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->bending_random = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_keys_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->keys_step);
}

void ParticleSettings_keys_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->keys_step = CLAMPIS(value, 0, 32767);
}

int ParticleSettings_adaptive_angle_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->adapt_angle);
}

void ParticleSettings_adaptive_angle_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->adapt_angle = CLAMPIS(value, 0, 45);
}

int ParticleSettings_adaptive_pixel_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->adapt_pix);
}

void ParticleSettings_adaptive_pixel_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->adapt_pix = CLAMPIS(value, 0, 50);
}

int ParticleSettings_display_percentage_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->disp);
}

void ParticleSettings_display_percentage_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->disp = CLAMPIS(value, 0, 100);
}

int ParticleSettings_material_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->omat);
}

void ParticleSettings_material_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->omat = CLAMPIS(value, 1, 32767);
}

int ParticleSettings_material_slot_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->omat);
}

void ParticleSettings_material_slot_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->omat = value;
}

int ParticleSettings_integrator_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->integrator);
}

void ParticleSettings_integrator_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->integrator = value;
}

int ParticleSettings_kink_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->kink);
}

void ParticleSettings_kink_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink = value;
}

int ParticleSettings_kink_axis_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->kink_axis);
}

void ParticleSettings_kink_axis_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_axis = value;
}

float ParticleSettings_color_maximum_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->color_vec_max);
}

void ParticleSettings_color_maximum_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->color_vec_max = CLAMPIS(value, 0.0099999998f, 100.0f);
}

float ParticleSettings_frame_start_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->sta);
}

void ParticleSettings_frame_start_set(PointerRNA *ptr, float value)
{
    rna_PartSettings_start_set(ptr, value);
}

float ParticleSettings_frame_end_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->end);
}

void ParticleSettings_frame_end_set(PointerRNA *ptr, float value)
{
    rna_PartSettings_end_set(ptr, value);
}

float ParticleSettings_lifetime_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->lifetime);
}

void ParticleSettings_lifetime_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->lifetime = CLAMPIS(value, 1.0f, 1048574.0f);
}

float ParticleSettings_lifetime_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randlife);
}

void ParticleSettings_lifetime_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randlife = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_time_tweak_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->timetweak);
}

void ParticleSettings_time_tweak_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->timetweak = CLAMPIS(value, 0.0f, 100.0f);
}

float ParticleSettings_timestep_get(PointerRNA *ptr)
{
    return rna_PartSettings_timestep_get(ptr);
}

void ParticleSettings_timestep_set(PointerRNA *ptr, float value)
{
    rna_PartSetings_timestep_set(ptr, value);
}

bool ParticleSettings_use_adaptive_subframes_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->time_flag) & 1) != 0);
}

void ParticleSettings_use_adaptive_subframes_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->time_flag |= 1; }
    else { data->time_flag &= ~1; }
}

int ParticleSettings_subframes_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->subframes);
}

void ParticleSettings_subframes_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->subframes = CLAMPIS(value, 0, 1000);
}

float ParticleSettings_courant_target_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->courant_target);
}

void ParticleSettings_courant_target_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->courant_target = CLAMPIS(value, 0.0001000000f, 10.0f);
}

float ParticleSettings_jitter_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->jitfac);
}

void ParticleSettings_jitter_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->jitfac = CLAMPIS(value, 0.0f, 2.0f);
}

float ParticleSettings_effect_hair_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->eff_hair);
}

void ParticleSettings_effect_hair_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->eff_hair = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->totpart);
}

void ParticleSettings_count_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->totpart = CLAMPIS(value, 0, INT_MAX);
}

int ParticleSettings_userjit_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->userjit);
}

void ParticleSettings_userjit_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->userjit = CLAMPIS(value, 0, 1000);
}

int ParticleSettings_grid_resolution_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->grid_res);
}

void ParticleSettings_grid_resolution_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->grid_res = CLAMPIS(value, 1, 250);
}

float ParticleSettings_grid_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->grid_rand);
}

void ParticleSettings_grid_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->grid_rand = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_effector_amount_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->effector_amount);
}

void ParticleSettings_effector_amount_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->effector_amount = CLAMPIS(value, 0, 10000);
}

float ParticleSettings_normal_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->normfac);
}

void ParticleSettings_normal_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->normfac = CLAMPIS(value, -1000.0f, 1000.0f);
}

float ParticleSettings_object_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->obfac);
}

void ParticleSettings_object_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->obfac = CLAMPIS(value, -200.0f, 200.0f);
}

float ParticleSettings_factor_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randfac);
}

void ParticleSettings_factor_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randfac = CLAMPIS(value, 0.0f, 200.0f);
}

float ParticleSettings_particle_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->partfac);
}

void ParticleSettings_particle_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->partfac = CLAMPIS(value, -200.0f, 200.0f);
}

float ParticleSettings_tangent_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->tanfac);
}

void ParticleSettings_tangent_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->tanfac = CLAMPIS(value, -1000.0f, 1000.0f);
}

float ParticleSettings_tangent_phase_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->tanphase);
}

void ParticleSettings_tangent_phase_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->tanphase = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_reactor_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->reactfac);
}

void ParticleSettings_reactor_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->reactfac = CLAMPIS(value, -10.0f, 10.0f);
}

void ParticleSettings_object_align_factor_get(PointerRNA *ptr, float values[3])
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->ob_vel)[i]);
    }
}

void ParticleSettings_object_align_factor_set(PointerRNA *ptr, const float values[3])
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->ob_vel)[i] = CLAMPIS(values[i], -200.0f, 200.0f);
    }
}

float ParticleSettings_angular_velocity_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->avefac);
}

void ParticleSettings_angular_velocity_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->avefac = CLAMPIS(value, -200.0f, 200.0f);
}

float ParticleSettings_phase_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->phasefac);
}

void ParticleSettings_phase_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->phasefac = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_rotation_factor_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randrotfac);
}

void ParticleSettings_rotation_factor_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randrotfac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_phase_factor_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randphasefac);
}

void ParticleSettings_phase_factor_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randphasefac = CLAMPIS(value, 0.0f, 2.0f);
}

float ParticleSettings_hair_length_get(PointerRNA *ptr)
{
    return rna_PartSetting_hairlength_get(ptr);
}

void ParticleSettings_hair_length_set(PointerRNA *ptr, float value)
{
    rna_PartSetting_hairlength_set(ptr, value);
}

float ParticleSettings_mass_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->mass);
}

void ParticleSettings_mass_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->mass = CLAMPIS(value, 0.0000000100f, 100000.0f);
}

float ParticleSettings_particle_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->size);
}

void ParticleSettings_particle_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->size = CLAMPIS(value, 0.0010000000f, 100000.0f);
}

float ParticleSettings_size_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randsize);
}

void ParticleSettings_size_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randsize = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA ParticleSettings_collision_collection_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->collision_group);
}

void ParticleSettings_collision_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->collision_group = value.data;
}

float ParticleSettings_drag_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->dragfac);
}

void ParticleSettings_drag_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->dragfac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_brownian_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->brownfac);
}

void ParticleSettings_brownian_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->brownfac = CLAMPIS(value, 0.0f, 200.0f);
}

float ParticleSettings_damping_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->dampfac);
}

void ParticleSettings_damping_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->dampfac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_length_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randlength);
}

void ParticleSettings_length_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randlength = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_child_nbr_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->child_percent);
}

void ParticleSettings_child_nbr_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->child_percent = CLAMPIS(value, 0, 100000);
}

int ParticleSettings_rendered_child_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->child_render_percent);
}

void ParticleSettings_rendered_child_count_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->child_render_percent = CLAMPIS(value, 0, 100000);
}

float ParticleSettings_virtual_parents_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parents);
}

void ParticleSettings_virtual_parents_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parents = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childsize);
}

void ParticleSettings_child_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childsize = CLAMPIS(value, 0.0010000000f, 100000.0f);
}

float ParticleSettings_child_size_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childrandsize);
}

void ParticleSettings_child_size_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childrandsize = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_radius_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childrad);
}

void ParticleSettings_child_radius_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childrad = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_child_roundness_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childflat);
}

void ParticleSettings_child_roundness_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childflat = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_clump_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clumpfac);
}

void ParticleSettings_clump_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clumpfac = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_clump_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clumppow);
}

void ParticleSettings_clump_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clumppow = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

bool ParticleSettings_use_clump_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->child_flag) & 2) != 0);
}

void ParticleSettings_use_clump_curve_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag |= 2; }
    else { data->child_flag &= ~2; }
}

PointerRNA ParticleSettings_clump_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->clumpcurve);
}

bool ParticleSettings_use_clump_noise_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->child_flag) & 1) != 0);
}

void ParticleSettings_use_clump_noise_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag |= 1; }
    else { data->child_flag &= ~1; }
}

float ParticleSettings_clump_noise_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clump_noise_size);
}

void ParticleSettings_clump_noise_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clump_noise_size = CLAMPIS(value, 0.0000100000f, 100000.0f);
}

float ParticleSettings_kink_amplitude_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_amp);
}

void ParticleSettings_kink_amplitude_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_amp = CLAMPIS(value, -100000.0f, 100000.0f);
}

float ParticleSettings_kink_amplitude_clump_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_amp_clump);
}

void ParticleSettings_kink_amplitude_clump_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_amp_clump = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_kink_amplitude_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_amp_random);
}

void ParticleSettings_kink_amplitude_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_amp_random = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_kink_frequency_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_freq);
}

void ParticleSettings_kink_frequency_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_freq = CLAMPIS(value, -100000.0f, 100000.0f);
}

float ParticleSettings_kink_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_shape);
}

void ParticleSettings_kink_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_shape = CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

float ParticleSettings_kink_flat_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_flat);
}

void ParticleSettings_kink_flat_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_flat = CLAMPIS(value, 0.0f, 1.0f);
}

int ParticleSettings_kink_extra_steps_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->kink_extra_steps);
}

void ParticleSettings_kink_extra_steps_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_extra_steps = CLAMPIS(value, 1, INT_MAX);
}

float ParticleSettings_kink_axis_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_axis_random);
}

void ParticleSettings_kink_axis_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_axis_random = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_roughness_1_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough1);
}

void ParticleSettings_roughness_1_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough1 = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_1_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough1_size);
}

void ParticleSettings_roughness_1_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough1_size = CLAMPIS(value, 0.0099999998f, 100000.0f);
}

float ParticleSettings_roughness_2_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough2);
}

void ParticleSettings_roughness_2_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough2 = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_2_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough2_size);
}

void ParticleSettings_roughness_2_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough2_size = CLAMPIS(value, 0.0099999998f, 100000.0f);
}

float ParticleSettings_roughness_2_threshold_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough2_thres);
}

void ParticleSettings_roughness_2_threshold_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough2_thres = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_roughness_endpoint_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough_end);
}

void ParticleSettings_roughness_endpoint_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough_end = CLAMPIS(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_end_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough_end_shape);
}

void ParticleSettings_roughness_end_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough_end_shape = CLAMPIS(value, 0.0f, 10.0f);
}

bool ParticleSettings_use_roughness_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->child_flag) & 4) != 0);
}

void ParticleSettings_use_roughness_curve_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag |= 4; }
    else { data->child_flag &= ~4; }
}

PointerRNA ParticleSettings_roughness_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->roughcurve);
}

float ParticleSettings_child_length_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clength);
}

void ParticleSettings_child_length_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clength = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_length_threshold_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clength_thres);
}

void ParticleSettings_child_length_threshold_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clength_thres = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_parting_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parting_fac);
}

void ParticleSettings_child_parting_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parting_fac = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_child_parting_min_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parting_min);
}

void ParticleSettings_child_parting_min_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parting_min = CLAMPIS(value, 0.0f, 180.0f);
}

float ParticleSettings_child_parting_max_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parting_max);
}

void ParticleSettings_child_parting_max_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parting_max = CLAMPIS(value, 0.0f, 180.0f);
}

float ParticleSettings_branch_threshold_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->branch_thres);
}

void ParticleSettings_branch_threshold_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->branch_thres = CLAMPIS(value, 0.0f, 1.0f);
}

float ParticleSettings_line_length_tail_get(PointerRNA *ptr)
{
    return rna_PartSetting_linelentail_get(ptr);
}

void ParticleSettings_line_length_tail_set(PointerRNA *ptr, float value)
{
    rna_PartSetting_linelentail_set(ptr, value);
}

float ParticleSettings_line_length_head_get(PointerRNA *ptr)
{
    return rna_PartSetting_linelenhead_get(ptr);
}

void ParticleSettings_line_length_head_set(PointerRNA *ptr, float value)
{
    rna_PartSetting_linelenhead_set(ptr, value);
}

float ParticleSettings_path_start_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->path_start);
}

void ParticleSettings_path_start_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_PartSetting_pathstartend_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->path_start = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float ParticleSettings_path_end_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->path_end);
}

void ParticleSettings_path_end_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_PartSetting_pathstartend_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->path_end = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int ParticleSettings_trail_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->trail_count);
}

void ParticleSettings_trail_count_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->trail_count = CLAMPIS(value, 1, 100000);
}

int ParticleSettings_keyed_loops_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->keyed_loops);
}

void ParticleSettings_keyed_loops_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->keyed_loops = CLAMPIS(value, 1, 10000);
}

bool ParticleSettings_use_modifier_stack_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (bool)(data->use_modifier_stack);
}

void ParticleSettings_use_modifier_stack_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->use_modifier_stack = value;
}

PointerRNA ParticleSettings_instance_collection_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->instance_collection);
}

void ParticleSettings_instance_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);

    if (data->instance_collection) {
        id_us_min((ID *)data->instance_collection);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->instance_collection = value.data;
}

static PointerRNA ParticleSettings_instance_weights_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleDupliWeight, rna_iterator_listbase_get(iter));
}

void ParticleSettings_instance_weights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSettings_instance_weights;

    rna_iterator_listbase_begin(iter, &data->instance_weights, NULL);

    if (iter->valid) {
        iter->ptr = ParticleSettings_instance_weights_get(iter);
    }
}

void ParticleSettings_instance_weights_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSettings_instance_weights_get(iter);
    }
}

void ParticleSettings_instance_weights_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleSettings_instance_weights_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ParticleSettings_instance_weights_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSettings_instance_weights_get(&iter); }
    }

    ParticleSettings_instance_weights_end(&iter);

    return found;
}

int ParticleSettings_instance_weights_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ParticleDupliWeight_name_length(PointerRNA *);
    extern void ParticleDupliWeight_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ParticleSettings_instance_weights_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleDupliWeight_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleDupliWeight_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ParticleDupliWeight_name_get(&iter.ptr, name);
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
        ParticleSettings_instance_weights_next(&iter);
    }
    ParticleSettings_instance_weights_end(&iter);

    return found;
}

PointerRNA ParticleSettings_active_instanceweight_get(PointerRNA *ptr)
{
    return rna_ParticleDupliWeight_active_get(ptr);
}

int ParticleSettings_active_instanceweight_index_get(PointerRNA *ptr)
{
    return rna_ParticleDupliWeight_active_index_get(ptr);
}

void ParticleSettings_active_instanceweight_index_set(PointerRNA *ptr, int value)
{
    rna_ParticleDupliWeight_active_index_set(ptr, value);
}

PointerRNA ParticleSettings_instance_object_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->instance_object);
}

void ParticleSettings_instance_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->instance_object = value.data;
}

PointerRNA ParticleSettings_boids_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BoidSettings, data->boids);
}

PointerRNA ParticleSettings_fluid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_SPHFluidSettings, data->fluid);
}

PointerRNA ParticleSettings_effector_weights_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

PointerRNA ParticleSettings_animation_data_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

PointerRNA ParticleSettings_force_field_1_get(PointerRNA *ptr)
{
    return rna_Particle_field1_get(ptr);
}

PointerRNA ParticleSettings_force_field_2_get(PointerRNA *ptr)
{
    return rna_Particle_field2_get(ptr);
}

float ParticleSettings_twist_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->twist);
}

void ParticleSettings_twist_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->twist = CLAMPIS(value, -100000.0f, 100000.0f);
}

bool ParticleSettings_use_twist_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->child_flag) & 8) != 0);
}

void ParticleSettings_use_twist_curve_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag |= 8; }
    else { data->child_flag &= ~8; }
}

PointerRNA ParticleSettings_twist_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->twistcurve);
}

bool ParticleSettings_use_close_tip_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (((data->shape_flag) & 1) != 0);
}

void ParticleSettings_use_close_tip_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->shape_flag |= 1; }
    else { data->shape_flag &= ~1; }
}

float ParticleSettings_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->shape);
}

void ParticleSettings_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->shape = CLAMPIS(value, -1.0f, 1.0f);
}

float ParticleSettings_root_radius_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rad_root);
}

void ParticleSettings_root_radius_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rad_root = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ParticleSettings_tip_radius_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rad_tip);
}

void ParticleSettings_tip_radius_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rad_tip = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ParticleSettings_radius_scale_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rad_scale);
}

void ParticleSettings_radius_scale_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rad_scale = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA ParticleSettingsTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleSettingsTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSettingsTextureSlots_rna_properties_get(iter);
    }
}

void ParticleSettingsTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSettingsTextureSlots_rna_properties_get(iter);
    }
}

void ParticleSettingsTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleSettingsTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleSettingsTextureSlots_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}



void ParticleHairKey_co_object_func(struct HairKey *_self, struct Object *object, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, float co[3])
{
	rna_ParticleHairKey_co_object(_self, object, modifier, particle, co);
}

void ParticleHairKey_co_object_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct HairKey *_self;
	struct Object *object;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	float *co;
	char *_data;
	
	_self = (struct HairKey *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	modifier = *((struct ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((struct ParticleData **)_data);
	_data += 8;
	co = ((float *)_data);
	
	rna_ParticleHairKey_co_object(_self, object, modifier, particle, co);
}

void ParticleHairKey_co_object_set_func(struct ID *_selfid, struct HairKey *_self, struct Object *object, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, float co[3])
{
	rna_ParticleHairKey_co_object_set(_selfid, _self, object, modifier, particle, co);
}

void ParticleHairKey_co_object_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct HairKey *_self;
	struct Object *object;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	float *co;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct HairKey *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	modifier = *((struct ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((struct ParticleData **)_data);
	_data += 8;
	co = ((float *)_data);
	
	rna_ParticleHairKey_co_object_set(_selfid, _self, object, modifier, particle, co);
}

/* Repeated prototypes to detect errors */

void rna_ParticleHairKey_co_object(struct HairKey *_self, struct Object *object, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, float co[3]);
void rna_ParticleHairKey_co_object_set(struct ID *_selfid, struct HairKey *_self, struct Object *object, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, float co[3]);



void Particle_uv_on_emitter_func(struct ParticleData *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, float uv[2])
{
	rna_Particle_uv_on_emitter(_self, reports, modifier, uv);
}

void Particle_uv_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleData *_self;
	struct ParticleSystemModifierData *modifier;
	float *uv;
	char *_data;
	
	_self = (struct ParticleData *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct ParticleSystemModifierData **)_data);
	_data += 8;
	uv = ((float *)_data);
	
	rna_Particle_uv_on_emitter(_self, reports, modifier, uv);
}

/* Repeated prototypes to detect errors */

void rna_Particle_uv_on_emitter(struct ParticleData *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, float uv[2]);


void ParticleSystem_co_hair_func(struct ParticleSystem *_self, struct Object *object, int particle_no, int step, float co[3])
{
	rna_ParticleSystem_co_hair(_self, object, particle_no, step, co);
}

void ParticleSystem_co_hair_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct Object *object;
	int particle_no;
	int step;
	float *co;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	particle_no = *((int *)_data);
	_data += 8;
	step = *((int *)_data);
	_data += 8;
	co = ((float *)_data);
	
	rna_ParticleSystem_co_hair(_self, object, particle_no, step, co);
}

void ParticleSystem_uv_on_emitter_func(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int uv_no, float uv[2])
{
	rna_ParticleSystem_uv_on_emitter(_self, reports, modifier, particle, particle_no, uv_no, uv);
}

void ParticleSystem_uv_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	int particle_no;
	int uv_no;
	float *uv;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((struct ParticleData **)_data);
	_data += 8;
	particle_no = *((int *)_data);
	_data += 8;
	uv_no = *((int *)_data);
	_data += 8;
	uv = ((float *)_data);
	
	rna_ParticleSystem_uv_on_emitter(_self, reports, modifier, particle, particle_no, uv_no, uv);
}

void ParticleSystem_mcol_on_emitter_func(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int vcol_no, float mcol[3])
{
	rna_ParticleSystem_mcol_on_emitter(_self, reports, modifier, particle, particle_no, vcol_no, mcol);
}

void ParticleSystem_mcol_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ParticleSystem *_self;
	struct ParticleSystemModifierData *modifier;
	struct ParticleData *particle;
	int particle_no;
	int vcol_no;
	float *mcol;
	char *_data;
	
	_self = (struct ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((struct ParticleData **)_data);
	_data += 8;
	particle_no = *((int *)_data);
	_data += 8;
	vcol_no = *((int *)_data);
	_data += 8;
	mcol = ((float *)_data);
	
	rna_ParticleSystem_mcol_on_emitter(_self, reports, modifier, particle, particle_no, vcol_no, mcol);
}

/* Repeated prototypes to detect errors */

void rna_ParticleSystem_co_hair(struct ParticleSystem *_self, struct Object *object, int particle_no, int step, float co[3]);
void rna_ParticleSystem_uv_on_emitter(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int uv_no, float uv[2]);
void rna_ParticleSystem_mcol_on_emitter(struct ParticleSystem *_self, ReportList *reports, struct ParticleSystemModifierData *modifier, struct ParticleData *particle, int particle_no, int vcol_no, float mcol[3]);



struct MTex *ParticleSettingsTextureSlots_add_func(struct ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

void ParticleSettingsTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_add(_selfid, C, reports);
	*((struct MTex **)_retdata) = mtex;
}

struct MTex *ParticleSettingsTextureSlots_create_func(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

void ParticleSettingsTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	struct MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_create(_selfid, C, reports, index);
	*((struct MTex **)_retdata) = mtex;
}

void ParticleSettingsTextureSlots_clear_func(struct ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

void ParticleSettingsTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

/* Repeated prototypes to detect errors */

struct MTex *rna_mtex_texture_slots_add(struct ID *_selfid, bContext *C, ReportList *reports);
struct MTex *rna_mtex_texture_slots_create(struct ID *_selfid, bContext *C, ReportList *reports, int index);
void rna_mtex_texture_slots_clear(struct ID *_selfid, bContext *C, ReportList *reports, int index);

/* Particle Target */
CollectionPropertyRNA rna_ParticleTarget_rna_properties = {
	{(PropertyRNA *)&rna_ParticleTarget_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleTarget_rna_properties_begin, ParticleTarget_rna_properties_next, ParticleTarget_rna_properties_end, ParticleTarget_rna_properties_get, NULL, NULL, ParticleTarget_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleTarget_rna_type = {
	{(PropertyRNA *)&rna_ParticleTarget_name, (PropertyRNA *)&rna_ParticleTarget_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleTarget_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ParticleTarget_name = {
	{(PropertyRNA *)&rna_ParticleTarget_object, (PropertyRNA *)&rna_ParticleTarget_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Particle target name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleTarget_name_get, ParticleTarget_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_ParticleTarget_object = {
	{(PropertyRNA *)&rna_ParticleTarget_system, (PropertyRNA *)&rna_ParticleTarget_name,
	-1, "object", 8388737, 1, 0, 0, 0, "Target Object",
	"The object that has the target particle system (empty if same object)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleTarget_object_get, ParticleTarget_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleTarget_system = {
	{(PropertyRNA *)&rna_ParticleTarget_time, (PropertyRNA *)&rna_ParticleTarget_object,
	-1, "system", 3, 0, 0, 4, 0, "Target Particle System",
	"The index of particle system on the target object",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleTarget, psys), 0, NULL},
	ParticleTarget_system_get, ParticleTarget_system_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, INT_MAX, 1, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleTarget_time = {
	{(PropertyRNA *)&rna_ParticleTarget_duration, (PropertyRNA *)&rna_ParticleTarget_system,
	-1, "time", 3, 0, 0, 4, 0, "Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleTarget, time), 5, NULL},
	ParticleTarget_time_get, ParticleTarget_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleTarget_duration = {
	{(PropertyRNA *)&rna_ParticleTarget_is_valid, (PropertyRNA *)&rna_ParticleTarget_time,
	-1, "duration", 3, 0, 0, 4, 0, "Duration",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleTarget, duration), 5, NULL},
	ParticleTarget_duration_get, ParticleTarget_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleTarget_is_valid = {
	{(PropertyRNA *)&rna_ParticleTarget_alliance, (PropertyRNA *)&rna_ParticleTarget_duration,
	-1, "is_valid", 1, 0, 0, 0, 0, "Valid",
	"Keyed particles target is valid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleTarget_is_valid_get, ParticleTarget_is_valid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_ParticleTarget_alliance_items[4] = {
	{1, "FRIEND", 0, "Friend", ""},
	{0, "NEUTRAL", 0, "Neutral", ""},
	{2, "ENEMY", 0, "Enemy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleTarget_alliance = {
	{NULL, (PropertyRNA *)&rna_ParticleTarget_is_valid,
	-1, "alliance", 1, 0, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_target_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleTarget, mode), 1, NULL},
	ParticleTarget_alliance_get, ParticleTarget_alliance_set, NULL, NULL, NULL, rna_ParticleTarget_alliance_items, 3, 0
};

StructRNA RNA_ParticleTarget = {
	{(ContainerRNA *)&RNA_SPHFluidSettings, (ContainerRNA *)&RNA_PaletteColors,
	NULL,
	{(PropertyRNA *)&rna_ParticleTarget_rna_properties, (PropertyRNA *)&rna_ParticleTarget_alliance}},
	"ParticleTarget", NULL, NULL, 516, NULL, "Particle Target",
	"Target particle system",
	"*", 17,
	(PropertyRNA *)&rna_ParticleTarget_name, (PropertyRNA *)&rna_ParticleTarget_rna_properties,
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

/* SPH Fluid Settings */
CollectionPropertyRNA rna_SPHFluidSettings_rna_properties = {
	{(PropertyRNA *)&rna_SPHFluidSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_rna_properties_begin, SPHFluidSettings_rna_properties_next, SPHFluidSettings_rna_properties_end, SPHFluidSettings_rna_properties_get, NULL, NULL, SPHFluidSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SPHFluidSettings_rna_type = {
	{(PropertyRNA *)&rna_SPHFluidSettings_solver, (PropertyRNA *)&rna_SPHFluidSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_SPHFluidSettings_solver_items[3] = {
	{0, "DDR", 0, "Double-Density", "An artistic solver with strong surface tension effects (original)"},
	{1, "CLASSICAL", 0, "Classical", "A more physically-accurate solver"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SPHFluidSettings_solver = {
	{(PropertyRNA *)&rna_SPHFluidSettings_spring_force, (PropertyRNA *)&rna_SPHFluidSettings_rna_type,
	-1, "solver", 1, 0, 0, 4, 0, "SPH Solver",
	"The code used to calculate internal forces on particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, solver), 1, NULL},
	SPHFluidSettings_solver_get, SPHFluidSettings_solver_set, NULL, NULL, NULL, rna_SPHFluidSettings_solver_items, 2, 0
};

FloatPropertyRNA rna_SPHFluidSettings_spring_force = {
	{(PropertyRNA *)&rna_SPHFluidSettings_fluid_radius, (PropertyRNA *)&rna_SPHFluidSettings_solver,
	-1, "spring_force", 3, 0, 0, 4, 0, "Spring Force",
	"Spring force",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, spring_k), 5, NULL},
	SPHFluidSettings_spring_force_get, SPHFluidSettings_spring_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_fluid_radius = {
	{(PropertyRNA *)&rna_SPHFluidSettings_rest_length, (PropertyRNA *)&rna_SPHFluidSettings_spring_force,
	-1, "fluid_radius", 3, 0, 0, 4, 0, "Interaction Radius",
	"Fluid interaction radius",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, radius), 5, NULL},
	SPHFluidSettings_fluid_radius_get, SPHFluidSettings_fluid_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 20.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_rest_length = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_viscoelastic_springs, (PropertyRNA *)&rna_SPHFluidSettings_fluid_radius,
	-1, "rest_length", 3, 0, 0, 4, 0, "Rest Length",
	"Spring rest length (factor of particle radius)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, rest_length), 5, NULL},
	SPHFluidSettings_rest_length_get, SPHFluidSettings_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_viscoelastic_springs = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_initial_rest_length, (PropertyRNA *)&rna_SPHFluidSettings_rest_length,
	-1, "use_viscoelastic_springs", 3, 0, 0, 0, 0, "Viscoelastic Springs",
	"Use viscoelastic springs instead of Hooke\'s springs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_viscoelastic_springs_get, SPHFluidSettings_use_viscoelastic_springs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_initial_rest_length = {
	{(PropertyRNA *)&rna_SPHFluidSettings_plasticity, (PropertyRNA *)&rna_SPHFluidSettings_use_viscoelastic_springs,
	-1, "use_initial_rest_length", 3, 0, 0, 0, 0, "Initial Rest Length",
	"Use the initial length as spring rest length instead of 2 * particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_initial_rest_length_get, SPHFluidSettings_use_initial_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_plasticity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_yield_ratio, (PropertyRNA *)&rna_SPHFluidSettings_use_initial_rest_length,
	-1, "plasticity", 3, 0, 0, 4, 0, "Plasticity",
	"How much the spring rest length can change after the elastic limit is crossed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, plasticity_constant), 5, NULL},
	SPHFluidSettings_plasticity_get, SPHFluidSettings_plasticity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_yield_ratio = {
	{(PropertyRNA *)&rna_SPHFluidSettings_spring_frames, (PropertyRNA *)&rna_SPHFluidSettings_plasticity,
	-1, "yield_ratio", 3, 0, 0, 4, 0, "Elastic Limit",
	"How much the spring has to be stretched/compressed in order to change its rest length",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, yield_ratio), 5, NULL},
	SPHFluidSettings_yield_ratio_get, SPHFluidSettings_yield_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SPHFluidSettings_spring_frames = {
	{(PropertyRNA *)&rna_SPHFluidSettings_linear_viscosity, (PropertyRNA *)&rna_SPHFluidSettings_yield_ratio,
	-1, "spring_frames", 3, 0, 0, 4, 0, "Spring Frames",
	"Create springs for this number of frames since particles birth (0 is always)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, spring_frames), 0, NULL},
	SPHFluidSettings_spring_frames_get, SPHFluidSettings_spring_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 0, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_linear_viscosity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_stiff_viscosity, (PropertyRNA *)&rna_SPHFluidSettings_spring_frames,
	-1, "linear_viscosity", 3, 0, 0, 4, 0, "Viscosity",
	"Linear viscosity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, viscosity_omega), 5, NULL},
	SPHFluidSettings_linear_viscosity_get, SPHFluidSettings_linear_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_stiff_viscosity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_stiffness, (PropertyRNA *)&rna_SPHFluidSettings_linear_viscosity,
	-1, "stiff_viscosity", 3, 0, 0, 4, 0, "Stiff Viscosity",
	"Creates viscosity for expanding fluid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, viscosity_beta), 5, NULL},
	SPHFluidSettings_stiff_viscosity_get, SPHFluidSettings_stiff_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_stiffness = {
	{(PropertyRNA *)&rna_SPHFluidSettings_repulsion, (PropertyRNA *)&rna_SPHFluidSettings_stiff_viscosity,
	-1, "stiffness", 3, 0, 0, 4, 0, "Stiffness",
	"How incompressible the fluid is (speed of sound)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, stiffness_k), 5, NULL},
	SPHFluidSettings_stiffness_get, SPHFluidSettings_stiffness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 1000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_repulsion = {
	{(PropertyRNA *)&rna_SPHFluidSettings_rest_density, (PropertyRNA *)&rna_SPHFluidSettings_stiffness,
	-1, "repulsion", 3, 0, 0, 4, 0, "Repulsion Factor",
	"How strongly the fluid tries to keep from clustering (factor of stiffness)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, stiffness_knear), 5, NULL},
	SPHFluidSettings_repulsion_get, SPHFluidSettings_repulsion_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_rest_density = {
	{(PropertyRNA *)&rna_SPHFluidSettings_buoyancy, (PropertyRNA *)&rna_SPHFluidSettings_repulsion,
	-1, "rest_density", 3, 0, 0, 4, 0, "Rest Density",
	"Fluid rest density",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, rest_density), 5, NULL},
	SPHFluidSettings_rest_density_get, SPHFluidSettings_rest_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 10000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SPHFluidSettings_buoyancy = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_factor_repulsion, (PropertyRNA *)&rna_SPHFluidSettings_rest_density,
	-1, "buoyancy", 3, 0, 0, 4, 0, "Buoyancy",
	"Artificial buoyancy force in negative gravity direction based on pressure differences inside the fluid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SPHFluidSettings, buoyancy), 5, NULL},
	SPHFluidSettings_buoyancy_get, SPHFluidSettings_buoyancy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_factor_repulsion = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_factor_density, (PropertyRNA *)&rna_SPHFluidSettings_buoyancy,
	-1, "use_factor_repulsion", 3, 0, 0, 0, 0, "Factor Repulsion",
	"Repulsion is a factor of stiffness",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_factor_repulsion_get, SPHFluidSettings_use_factor_repulsion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_factor_density = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_factor_radius, (PropertyRNA *)&rna_SPHFluidSettings_use_factor_repulsion,
	-1, "use_factor_density", 3, 0, 0, 0, 0, "Factor Density",
	"Density is calculated as a factor of default density (depends on particle size)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_factor_density_get, SPHFluidSettings_use_factor_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_factor_radius = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_factor_stiff_viscosity, (PropertyRNA *)&rna_SPHFluidSettings_use_factor_density,
	-1, "use_factor_radius", 3, 0, 0, 0, 0, "Factor Radius",
	"Interaction radius is a factor of 4 * particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_factor_radius_get, SPHFluidSettings_use_factor_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_factor_stiff_viscosity = {
	{(PropertyRNA *)&rna_SPHFluidSettings_use_factor_rest_length, (PropertyRNA *)&rna_SPHFluidSettings_use_factor_radius,
	-1, "use_factor_stiff_viscosity", 3, 0, 0, 0, 0, "Factor Stiff Viscosity",
	"Stiff viscosity is a factor of normal viscosity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_factor_stiff_viscosity_get, SPHFluidSettings_use_factor_stiff_viscosity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SPHFluidSettings_use_factor_rest_length = {
	{NULL, (PropertyRNA *)&rna_SPHFluidSettings_use_factor_stiff_viscosity,
	-1, "use_factor_rest_length", 3, 0, 0, 0, 0, "Factor Rest Length",
	"Spring rest length is a factor of 2 * particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SPHFluidSettings_use_factor_rest_length_get, SPHFluidSettings_use_factor_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_SPHFluidSettings = {
	{(ContainerRNA *)&RNA_ParticleHairKey, (ContainerRNA *)&RNA_ParticleTarget,
	NULL,
	{(PropertyRNA *)&rna_SPHFluidSettings_rna_properties, (PropertyRNA *)&rna_SPHFluidSettings_use_factor_rest_length}},
	"SPHFluidSettings", NULL, NULL, 516, NULL, "SPH Fluid Settings",
	"Settings for particle fluids physics",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SPHFluidSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SPHFluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Hair Key */
CollectionPropertyRNA rna_ParticleHairKey_rna_properties = {
	{(PropertyRNA *)&rna_ParticleHairKey_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleHairKey_rna_properties_begin, ParticleHairKey_rna_properties_next, ParticleHairKey_rna_properties_end, ParticleHairKey_rna_properties_get, NULL, NULL, ParticleHairKey_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleHairKey_rna_type = {
	{(PropertyRNA *)&rna_ParticleHairKey_time, (PropertyRNA *)&rna_ParticleHairKey_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleHairKey_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_ParticleHairKey_time = {
	{(PropertyRNA *)&rna_ParticleHairKey_weight, (PropertyRNA *)&rna_ParticleHairKey_rna_type,
	-1, "time", 3, 0, 0, 4, 0, "Time",
	"Relative time of key over hair length",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(HairKey, time), 5, NULL},
	ParticleHairKey_time_get, ParticleHairKey_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleHairKey_weight = {
	{(PropertyRNA *)&rna_ParticleHairKey_co, (PropertyRNA *)&rna_ParticleHairKey_time,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Weight for cloth simulation",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(HairKey, weight), 5, NULL},
	ParticleHairKey_weight_get, ParticleHairKey_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ParticleHairKey_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_local, (PropertyRNA *)&rna_ParticleHairKey_weight,
	-1, "co", 3, 0, 0, 0, 0, "Location (Object Space)",
	"Location of the hair key in object space",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ParticleHairKey_co_get, ParticleHairKey_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleHairKey_co_default
};

static float rna_ParticleHairKey_co_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co_local = {
	{NULL, (PropertyRNA *)&rna_ParticleHairKey_co,
	-1, "co_local", 3, 0, 0, 4, 0, "Location",
	"Location of the hair key in its local coordinate system, relative to the emitting face",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(HairKey, co), 5, NULL},
	NULL, NULL, ParticleHairKey_co_local_get, ParticleHairKey_co_local_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleHairKey_co_local_default
};

PointerPropertyRNA rna_ParticleHairKey_co_object_object = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_modifier, NULL,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleHairKey_co_object_modifier = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_particle, (PropertyRNA *)&rna_ParticleHairKey_co_object_object,
	-1, "modifier", 8650752, 0, 1, 0, 0, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleHairKey_co_object_particle = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_co, (PropertyRNA *)&rna_ParticleHairKey_co_object_modifier,
	-1, "particle", 8650752, 0, 1, 0, 0, "",
	"hair particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

static float rna_ParticleHairKey_co_object_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co_object_co = {
	{NULL, (PropertyRNA *)&rna_ParticleHairKey_co_object_particle,
	-1, "co", 8388611, 0, 2, 0, 0, "Co",
	"Exported hairkey location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ParticleHairKey_co_object_co_default
};

FunctionRNA rna_ParticleHairKey_co_object_func = {
	{(FunctionRNA *)&rna_ParticleHairKey_co_object_set_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_object, (PropertyRNA *)&rna_ParticleHairKey_co_object_co}},
	"co_object", 0, "Obtain hairkey location with particle and modifier data",
	ParticleHairKey_co_object_call,
	NULL
};

PointerPropertyRNA rna_ParticleHairKey_co_object_set_object = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_set_modifier, NULL,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleHairKey_co_object_set_modifier = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_set_particle, (PropertyRNA *)&rna_ParticleHairKey_co_object_set_object,
	-1, "modifier", 8650752, 0, 1, 0, 0, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleHairKey_co_object_set_particle = {
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_set_co, (PropertyRNA *)&rna_ParticleHairKey_co_object_set_modifier,
	-1, "particle", 8650752, 0, 1, 0, 0, "",
	"hair particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

static float rna_ParticleHairKey_co_object_set_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleHairKey_co_object_set_co = {
	{NULL, (PropertyRNA *)&rna_ParticleHairKey_co_object_set_particle,
	-1, "co", 8388611, 0, 1, 0, 0, "Co",
	"Specified hairkey location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ParticleHairKey_co_object_set_co_default
};

FunctionRNA rna_ParticleHairKey_co_object_set_func = {
	{NULL, (FunctionRNA *)&rna_ParticleHairKey_co_object_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleHairKey_co_object_set_object, (PropertyRNA *)&rna_ParticleHairKey_co_object_set_co}},
	"co_object_set", 2048, "Set hairkey location with particle and modifier data",
	ParticleHairKey_co_object_set_call,
	NULL
};

StructRNA RNA_ParticleHairKey = {
	{(ContainerRNA *)&RNA_ParticleKey, (ContainerRNA *)&RNA_SPHFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_ParticleHairKey_rna_properties, (PropertyRNA *)&rna_ParticleHairKey_co_local}},
	"ParticleHairKey", NULL, NULL, 516, NULL, "Particle Hair Key",
	"Particle key for hair particle system",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleHairKey_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ParticleHairKey_co_object_func, (FunctionRNA *)&rna_ParticleHairKey_co_object_set_func}
};

/* Particle Key */
CollectionPropertyRNA rna_ParticleKey_rna_properties = {
	{(PropertyRNA *)&rna_ParticleKey_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleKey_rna_properties_begin, ParticleKey_rna_properties_next, ParticleKey_rna_properties_end, ParticleKey_rna_properties_get, NULL, NULL, ParticleKey_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleKey_rna_type = {
	{(PropertyRNA *)&rna_ParticleKey_location, (PropertyRNA *)&rna_ParticleKey_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleKey_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ParticleKey_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_location = {
	{(PropertyRNA *)&rna_ParticleKey_velocity, (PropertyRNA *)&rna_ParticleKey_rna_type,
	-1, "location", 3, 0, 0, 4, 0, "Location",
	"Key location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleKey, co), 5, NULL},
	NULL, NULL, ParticleKey_location_get, ParticleKey_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_location_default
};

static float rna_ParticleKey_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_velocity = {
	{(PropertyRNA *)&rna_ParticleKey_rotation, (PropertyRNA *)&rna_ParticleKey_location,
	-1, "velocity", 3, 0, 0, 4, 0, "Velocity",
	"Key velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleKey, vel), 5, NULL},
	NULL, NULL, ParticleKey_velocity_get, ParticleKey_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_velocity_default
};

static float rna_ParticleKey_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_rotation = {
	{(PropertyRNA *)&rna_ParticleKey_angular_velocity, (PropertyRNA *)&rna_ParticleKey_velocity,
	-1, "rotation", 3, 0, 0, 4, 0, "Rotation",
	"Key rotation quaternion",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleKey, rot), 5, NULL},
	NULL, NULL, ParticleKey_rotation_get, ParticleKey_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_rotation_default
};

static float rna_ParticleKey_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleKey_angular_velocity = {
	{(PropertyRNA *)&rna_ParticleKey_time, (PropertyRNA *)&rna_ParticleKey_rotation,
	-1, "angular_velocity", 3, 0, 0, 4, 0, "Angular Velocity",
	"Key angular velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleKey, ave), 5, NULL},
	NULL, NULL, ParticleKey_angular_velocity_get, ParticleKey_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleKey_angular_velocity_default
};

FloatPropertyRNA rna_ParticleKey_time = {
	{NULL, (PropertyRNA *)&rna_ParticleKey_angular_velocity,
	-1, "time", 3, 0, 0, 4, 0, "Time",
	"Time of key over the simulation",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleKey, time), 5, NULL},
	ParticleKey_time_get, ParticleKey_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ParticleKey = {
	{(ContainerRNA *)&RNA_ChildParticle, (ContainerRNA *)&RNA_ParticleHairKey,
	NULL,
	{(PropertyRNA *)&rna_ParticleKey_rna_properties, (PropertyRNA *)&rna_ParticleKey_time}},
	"ParticleKey", NULL, NULL, 516, NULL, "Particle Key",
	"Key location for a particle over time",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleKey_rna_properties,
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

/* Child Particle */
CollectionPropertyRNA rna_ChildParticle_rna_properties = {
	{(PropertyRNA *)&rna_ChildParticle_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ChildParticle_rna_properties_begin, ChildParticle_rna_properties_next, ChildParticle_rna_properties_end, ChildParticle_rna_properties_get, NULL, NULL, ChildParticle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ChildParticle_rna_type = {
	{NULL, (PropertyRNA *)&rna_ChildParticle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ChildParticle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_ChildParticle = {
	{(ContainerRNA *)&RNA_Particle, (ContainerRNA *)&RNA_ParticleKey,
	NULL,
	{(PropertyRNA *)&rna_ChildParticle_rna_properties, (PropertyRNA *)&rna_ChildParticle_rna_type}},
	"ChildParticle", NULL, NULL, 516, NULL, "Child Particle",
	"Child particle interpolated from simulated or edited particles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ChildParticle_rna_properties,
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

/* Particle */
CollectionPropertyRNA rna_Particle_rna_properties = {
	{(PropertyRNA *)&rna_Particle_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Particle_rna_properties_begin, Particle_rna_properties_next, Particle_rna_properties_end, Particle_rna_properties_get, NULL, NULL, Particle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Particle_rna_type = {
	{(PropertyRNA *)&rna_Particle_location, (PropertyRNA *)&rna_Particle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Particle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_Particle_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_location = {
	{(PropertyRNA *)&rna_Particle_velocity, (PropertyRNA *)&rna_Particle_rna_type,
	-1, "location", 3, 0, 0, 4, 0, "Particle Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, state.co), 5, NULL},
	NULL, NULL, Particle_location_get, Particle_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_location_default
};

static float rna_Particle_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_velocity = {
	{(PropertyRNA *)&rna_Particle_angular_velocity, (PropertyRNA *)&rna_Particle_location,
	-1, "velocity", 3, 0, 0, 4, 0, "Particle Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, state.vel), 5, NULL},
	NULL, NULL, Particle_velocity_get, Particle_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_velocity_default
};

static float rna_Particle_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_angular_velocity = {
	{(PropertyRNA *)&rna_Particle_rotation, (PropertyRNA *)&rna_Particle_velocity,
	-1, "angular_velocity", 3, 0, 0, 4, 0, "Angular Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, state.ave), 5, NULL},
	NULL, NULL, Particle_angular_velocity_get, Particle_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_angular_velocity_default
};

static float rna_Particle_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_rotation = {
	{(PropertyRNA *)&rna_Particle_prev_location, (PropertyRNA *)&rna_Particle_angular_velocity,
	-1, "rotation", 3, 0, 0, 4, 0, "Rotation",
	"",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, state.rot), 5, NULL},
	NULL, NULL, Particle_rotation_get, Particle_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_rotation_default
};

static float rna_Particle_prev_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_location = {
	{(PropertyRNA *)&rna_Particle_prev_velocity, (PropertyRNA *)&rna_Particle_rotation,
	-1, "prev_location", 3, 0, 0, 4, 0, "Previous Particle Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, prev_state.co), 5, NULL},
	NULL, NULL, Particle_prev_location_get, Particle_prev_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_location_default
};

static float rna_Particle_prev_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_velocity = {
	{(PropertyRNA *)&rna_Particle_prev_angular_velocity, (PropertyRNA *)&rna_Particle_prev_location,
	-1, "prev_velocity", 3, 0, 0, 4, 0, "Previous Particle Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, prev_state.vel), 5, NULL},
	NULL, NULL, Particle_prev_velocity_get, Particle_prev_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_velocity_default
};

static float rna_Particle_prev_angular_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_angular_velocity = {
	{(PropertyRNA *)&rna_Particle_prev_rotation, (PropertyRNA *)&rna_Particle_prev_velocity,
	-1, "prev_angular_velocity", 3, 0, 0, 4, 0, "Previous Angular Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, prev_state.ave), 5, NULL},
	NULL, NULL, Particle_prev_angular_velocity_get, Particle_prev_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_angular_velocity_default
};

static float rna_Particle_prev_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_prev_rotation = {
	{(PropertyRNA *)&rna_Particle_hair_keys, (PropertyRNA *)&rna_Particle_prev_angular_velocity,
	-1, "prev_rotation", 3, 0, 0, 4, 0, "Previous Rotation",
	"",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, prev_state.rot), 5, NULL},
	NULL, NULL, Particle_prev_rotation_get, Particle_prev_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_prev_rotation_default
};

CollectionPropertyRNA rna_Particle_hair_keys = {
	{(PropertyRNA *)&rna_Particle_particle_keys, (PropertyRNA *)&rna_Particle_prev_rotation,
	-1, "hair_keys", 0, 0, 0, 8, 0, "Hair",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Particle_hair_keys_begin, Particle_hair_keys_next, Particle_hair_keys_end, Particle_hair_keys_get, Particle_hair_keys_length, Particle_hair_keys_lookup_int, NULL, NULL, &RNA_ParticleHairKey
};

CollectionPropertyRNA rna_Particle_particle_keys = {
	{(PropertyRNA *)&rna_Particle_birth_time, (PropertyRNA *)&rna_Particle_hair_keys,
	-1, "particle_keys", 0, 0, 0, 8, 0, "Keyed States",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Particle_particle_keys_begin, Particle_particle_keys_next, Particle_particle_keys_end, Particle_particle_keys_get, Particle_particle_keys_length, Particle_particle_keys_lookup_int, NULL, NULL, &RNA_ParticleKey
};

FloatPropertyRNA rna_Particle_birth_time = {
	{(PropertyRNA *)&rna_Particle_lifetime, (PropertyRNA *)&rna_Particle_particle_keys,
	-1, "birth_time", 3, 0, 0, 4, 0, "Birth Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, time), 5, NULL},
	Particle_birth_time_get, Particle_birth_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Particle_lifetime = {
	{(PropertyRNA *)&rna_Particle_die_time, (PropertyRNA *)&rna_Particle_birth_time,
	-1, "lifetime", 3, 0, 0, 4, 0, "Lifetime",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, lifetime), 5, NULL},
	Particle_lifetime_get, Particle_lifetime_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Particle_die_time = {
	{(PropertyRNA *)&rna_Particle_size, (PropertyRNA *)&rna_Particle_lifetime,
	-1, "die_time", 3, 0, 0, 4, 0, "Die Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, dietime), 5, NULL},
	Particle_die_time_get, Particle_die_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Particle_size = {
	{(PropertyRNA *)&rna_Particle_is_exist, (PropertyRNA *)&rna_Particle_die_time,
	-1, "size", 3, 0, 0, 4, 0, "Size",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, size), 5, NULL},
	Particle_size_get, Particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Particle_is_exist = {
	{(PropertyRNA *)&rna_Particle_is_visible, (PropertyRNA *)&rna_Particle_size,
	-1, "is_exist", 2, 0, 0, 0, 0, "Exists",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Particle_is_exist_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Particle_is_visible = {
	{(PropertyRNA *)&rna_Particle_alive_state, (PropertyRNA *)&rna_Particle_is_exist,
	-1, "is_visible", 2, 0, 0, 0, 0, "Visible",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Particle_is_visible_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Particle_alive_state_items[5] = {
	{1, "DEAD", 0, "Dead", ""},
	{2, "UNBORN", 0, "Unborn", ""},
	{3, "ALIVE", 0, "Alive", ""},
	{4, "DYING", 0, "Dying", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Particle_alive_state = {
	{NULL, (PropertyRNA *)&rna_Particle_is_visible,
	-1, "alive_state", 3, 0, 0, 4, 0, "Alive State",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleData, alive), 1, NULL},
	Particle_alive_state_get, Particle_alive_state_set, NULL, NULL, NULL, rna_Particle_alive_state_items, 4, 1
};

PointerPropertyRNA rna_Particle_uv_on_emitter_modifier = {
	{(PropertyRNA *)&rna_Particle_uv_on_emitter_uv, NULL,
	-1, "modifier", 8650752, 0, 1, 0, 0, "",
	"Particle modifier from an evaluated object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

static float rna_Particle_uv_on_emitter_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Particle_uv_on_emitter_uv = {
	{NULL, (PropertyRNA *)&rna_Particle_uv_on_emitter_modifier,
	-1, "uv", 8388611, 0, 2, 0, 0, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Particle_uv_on_emitter_uv_default
};

FunctionRNA rna_Particle_uv_on_emitter_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Particle_uv_on_emitter_modifier, (PropertyRNA *)&rna_Particle_uv_on_emitter_uv}},
	"uv_on_emitter", 16, "Obtain UV coordinates for a particle on an evaluated mesh.",
	Particle_uv_on_emitter_call,
	NULL
};

StructRNA RNA_Particle = {
	{(ContainerRNA *)&RNA_ParticleDupliWeight, (ContainerRNA *)&RNA_ChildParticle,
	NULL,
	{(PropertyRNA *)&rna_Particle_rna_properties, (PropertyRNA *)&rna_Particle_alive_state}},
	"Particle", NULL, NULL, 516, NULL, "Particle",
	"Particle in a particle system",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Particle_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Particle_uv_on_emitter_func, (FunctionRNA *)&rna_Particle_uv_on_emitter_func}
};

/* Particle Instance Object Weight */
CollectionPropertyRNA rna_ParticleDupliWeight_rna_properties = {
	{(PropertyRNA *)&rna_ParticleDupliWeight_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleDupliWeight_rna_properties_begin, ParticleDupliWeight_rna_properties_next, ParticleDupliWeight_rna_properties_end, ParticleDupliWeight_rna_properties_get, NULL, NULL, ParticleDupliWeight_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleDupliWeight_rna_type = {
	{(PropertyRNA *)&rna_ParticleDupliWeight_name, (PropertyRNA *)&rna_ParticleDupliWeight_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleDupliWeight_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ParticleDupliWeight_name = {
	{(PropertyRNA *)&rna_ParticleDupliWeight_count, (PropertyRNA *)&rna_ParticleDupliWeight_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Particle instance object name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleDupliWeight_name_get, ParticleDupliWeight_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_ParticleDupliWeight_count = {
	{NULL, (PropertyRNA *)&rna_ParticleDupliWeight_name,
	-1, "count", 3, 0, 0, 4, 0, "Count",
	"The number of times this object is repeated with respect to other objects",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleDupliWeight, count), 1, NULL},
	ParticleDupliWeight_count_get, ParticleDupliWeight_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

StructRNA RNA_ParticleDupliWeight = {
	{(ContainerRNA *)&RNA_ParticleSystem, (ContainerRNA *)&RNA_Particle,
	NULL,
	{(PropertyRNA *)&rna_ParticleDupliWeight_rna_properties, (PropertyRNA *)&rna_ParticleDupliWeight_count}},
	"ParticleDupliWeight", NULL, NULL, 516, NULL, "Particle Instance Object Weight",
	"Weight of a particle instance object in a collection",
	"*", 17,
	(PropertyRNA *)&rna_ParticleDupliWeight_name, (PropertyRNA *)&rna_ParticleDupliWeight_rna_properties,
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

/* Particle System */
CollectionPropertyRNA rna_ParticleSystem_rna_properties = {
	{(PropertyRNA *)&rna_ParticleSystem_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_rna_properties_begin, ParticleSystem_rna_properties_next, ParticleSystem_rna_properties_end, ParticleSystem_rna_properties_get, NULL, NULL, ParticleSystem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleSystem_rna_type = {
	{(PropertyRNA *)&rna_ParticleSystem_name, (PropertyRNA *)&rna_ParticleSystem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ParticleSystem_name = {
	{(PropertyRNA *)&rna_ParticleSystem_settings, (PropertyRNA *)&rna_ParticleSystem_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Particle system name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 102236165, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_name_get, ParticleSystem_name_length, ParticleSystem_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_ParticleSystem_settings = {
	{(PropertyRNA *)&rna_ParticleSystem_particles, (PropertyRNA *)&rna_ParticleSystem_name,
	-1, "settings", 8650881, 1, 0, 0, 0, "Settings",
	"Particle system settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset_dependency, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_settings_get, ParticleSystem_settings_set, NULL, NULL,&RNA_ParticleSettings
};

CollectionPropertyRNA rna_ParticleSystem_particles = {
	{(PropertyRNA *)&rna_ParticleSystem_child_particles, (PropertyRNA *)&rna_ParticleSystem_settings,
	-1, "particles", 0, 3, 0, 8, 0, "Particles",
	"Particles generated by the particle system",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_particles_begin, ParticleSystem_particles_next, ParticleSystem_particles_end, ParticleSystem_particles_get, ParticleSystem_particles_length, ParticleSystem_particles_lookup_int, NULL, NULL, &RNA_Particle
};

CollectionPropertyRNA rna_ParticleSystem_child_particles = {
	{(PropertyRNA *)&rna_ParticleSystem_seed, (PropertyRNA *)&rna_ParticleSystem_particles,
	-1, "child_particles", 0, 3, 0, 8, 0, "Child Particles",
	"Child particles generated by the particle system",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_child_particles_begin, ParticleSystem_child_particles_next, ParticleSystem_child_particles_end, ParticleSystem_child_particles_get, ParticleSystem_child_particles_length, ParticleSystem_child_particles_lookup_int, NULL, NULL, &RNA_ChildParticle
};

IntPropertyRNA rna_ParticleSystem_seed = {
	{(PropertyRNA *)&rna_ParticleSystem_child_seed, (PropertyRNA *)&rna_ParticleSystem_child_particles,
	-1, "seed", 3, 1, 0, 4, 0, "Seed",
	"Offset in the random number table, to get a different randomized result",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSystem, seed), 0, NULL},
	ParticleSystem_seed_get, ParticleSystem_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_child_seed = {
	{(PropertyRNA *)&rna_ParticleSystem_is_global_hair, (PropertyRNA *)&rna_ParticleSystem_seed,
	-1, "child_seed", 3, 1, 0, 4, 0, "Child Seed",
	"Offset in the random number table for child particles, to get a different randomized result",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSystem, child_seed), 0, NULL},
	ParticleSystem_child_seed_get, ParticleSystem_child_seed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_is_global_hair = {
	{(PropertyRNA *)&rna_ParticleSystem_use_hair_dynamics, (PropertyRNA *)&rna_ParticleSystem_child_seed,
	-1, "is_global_hair", 2, 1, 0, 0, 0, "Global Hair",
	"Hair keys are in global coordinate space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_is_global_hair_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_use_hair_dynamics = {
	{(PropertyRNA *)&rna_ParticleSystem_cloth, (PropertyRNA *)&rna_ParticleSystem_is_global_hair,
	-1, "use_hair_dynamics", 3, 1, 0, 0, 0, "Hair Dynamics",
	"Enable hair dynamics using cloth simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_hair_dynamics_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_use_hair_dynamics_get, ParticleSystem_use_hair_dynamics_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSystem_cloth = {
	{(PropertyRNA *)&rna_ParticleSystem_reactor_target_object, (PropertyRNA *)&rna_ParticleSystem_use_hair_dynamics,
	-1, "cloth", 8650752, 1, 0, 0, 0, "Cloth",
	"Cloth dynamics for hair",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_cloth_get, NULL, NULL, NULL,&RNA_ClothModifier
};

PointerPropertyRNA rna_ParticleSystem_reactor_target_object = {
	{(PropertyRNA *)&rna_ParticleSystem_reactor_target_particle_system, (PropertyRNA *)&rna_ParticleSystem_cloth,
	-1, "reactor_target_object", 8388737, 1, 0, 0, 0, "Reactor Target Object",
	"For reactor systems, the object that has the target particle system (empty if same object)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_reactor_target_object_get, ParticleSystem_reactor_target_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleSystem_reactor_target_particle_system = {
	{(PropertyRNA *)&rna_ParticleSystem_use_keyed_timing, (PropertyRNA *)&rna_ParticleSystem_reactor_target_object,
	-1, "reactor_target_particle_system", 3, 1, 0, 4, 0, "Reactor Target Particle System",
	"For reactor systems, index of particle system on the target object",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSystem, target_psys), 1, NULL},
	ParticleSystem_reactor_target_particle_system_get, ParticleSystem_reactor_target_particle_system_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32767, 1, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_use_keyed_timing = {
	{(PropertyRNA *)&rna_ParticleSystem_targets, (PropertyRNA *)&rna_ParticleSystem_reactor_target_particle_system,
	-1, "use_keyed_timing", 1, 1, 0, 0, 0, "Keyed Timing",
	"Use key times",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_use_keyed_timing_get, ParticleSystem_use_keyed_timing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_ParticleSystem_targets = {
	{(PropertyRNA *)&rna_ParticleSystem_active_particle_target, (PropertyRNA *)&rna_ParticleSystem_use_keyed_timing,
	-1, "targets", 0, 1, 0, 0, 0, "Targets",
	"Target particle systems",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_targets_begin, ParticleSystem_targets_next, ParticleSystem_targets_end, ParticleSystem_targets_get, NULL, ParticleSystem_targets_lookup_int, ParticleSystem_targets_lookup_string, NULL, &RNA_ParticleTarget
};

PointerPropertyRNA rna_ParticleSystem_active_particle_target = {
	{(PropertyRNA *)&rna_ParticleSystem_active_particle_target_index, (PropertyRNA *)&rna_ParticleSystem_targets,
	-1, "active_particle_target", 8388608, 1, 0, 0, 0, "Active Particle Target",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_active_particle_target_get, NULL, NULL, NULL,&RNA_ParticleTarget
};

IntPropertyRNA rna_ParticleSystem_active_particle_target_index = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_density, (PropertyRNA *)&rna_ParticleSystem_active_particle_target,
	-1, "active_particle_target_index", 3, 1, 0, 0, 0, "Active Particle Target Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_active_particle_target_index_get, ParticleSystem_active_particle_target_index_set, NULL, NULL, rna_ParticleSystem_active_particle_target_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_density = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_density, (PropertyRNA *)&rna_ParticleSystem_active_particle_target_index,
	-1, "vertex_group_density", 262145, 1, 0, 0, 0, "Vertex Group Density",
	"Vertex group to control density",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_density_get, ParticleSystem_vertex_group_density_length, ParticleSystem_vertex_group_density_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_density = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_velocity, (PropertyRNA *)&rna_ParticleSystem_vertex_group_density,
	-1, "invert_vertex_group_density", 3, 1, 0, 0, 0, "Vertex Group Density Negate",
	"Negate the effect of the density vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_density_get, ParticleSystem_invert_vertex_group_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_velocity = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_velocity, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_density,
	-1, "vertex_group_velocity", 262145, 1, 0, 0, 0, "Vertex Group Velocity",
	"Vertex group to control velocity",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_velocity_get, ParticleSystem_vertex_group_velocity_length, ParticleSystem_vertex_group_velocity_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_velocity = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_length, (PropertyRNA *)&rna_ParticleSystem_vertex_group_velocity,
	-1, "invert_vertex_group_velocity", 3, 1, 0, 0, 0, "Vertex Group Velocity Negate",
	"Negate the effect of the velocity vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_velocity_get, ParticleSystem_invert_vertex_group_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_length = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_length, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_velocity,
	-1, "vertex_group_length", 262145, 1, 0, 0, 0, "Vertex Group Length",
	"Vertex group to control length",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_length_get, ParticleSystem_vertex_group_length_length, ParticleSystem_vertex_group_length_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_length = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_clump, (PropertyRNA *)&rna_ParticleSystem_vertex_group_length,
	-1, "invert_vertex_group_length", 3, 1, 0, 0, 0, "Vertex Group Length Negate",
	"Negate the effect of the length vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_length_get, ParticleSystem_invert_vertex_group_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_clump = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_clump, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_length,
	-1, "vertex_group_clump", 262145, 1, 0, 0, 0, "Vertex Group Clump",
	"Vertex group to control clump",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_clump_get, ParticleSystem_vertex_group_clump_length, ParticleSystem_vertex_group_clump_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_clump = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_kink, (PropertyRNA *)&rna_ParticleSystem_vertex_group_clump,
	-1, "invert_vertex_group_clump", 3, 1, 0, 0, 0, "Vertex Group Clump Negate",
	"Negate the effect of the clump vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_clump_get, ParticleSystem_invert_vertex_group_clump_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_kink = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_kink, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_clump,
	-1, "vertex_group_kink", 262145, 1, 0, 0, 0, "Vertex Group Kink",
	"Vertex group to control kink",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_kink_get, ParticleSystem_vertex_group_kink_length, ParticleSystem_vertex_group_kink_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_kink = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_1, (PropertyRNA *)&rna_ParticleSystem_vertex_group_kink,
	-1, "invert_vertex_group_kink", 3, 1, 0, 0, 0, "Vertex Group Kink Negate",
	"Negate the effect of the kink vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_kink_get, ParticleSystem_invert_vertex_group_kink_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_1 = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_1, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_kink,
	-1, "vertex_group_roughness_1", 262145, 1, 0, 0, 0, "Vertex Group Roughness 1",
	"Vertex group to control roughness 1",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_roughness_1_get, ParticleSystem_vertex_group_roughness_1_length, ParticleSystem_vertex_group_roughness_1_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_1 = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_2, (PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_1,
	-1, "invert_vertex_group_roughness_1", 3, 1, 0, 0, 0, "Vertex Group Roughness 1 Negate",
	"Negate the effect of the roughness 1 vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_roughness_1_get, ParticleSystem_invert_vertex_group_roughness_1_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_2 = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_2, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_1,
	-1, "vertex_group_roughness_2", 262145, 1, 0, 0, 0, "Vertex Group Roughness 2",
	"Vertex group to control roughness 2",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_roughness_2_get, ParticleSystem_vertex_group_roughness_2_length, ParticleSystem_vertex_group_roughness_2_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_2 = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_end, (PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_2,
	-1, "invert_vertex_group_roughness_2", 3, 1, 0, 0, 0, "Vertex Group Roughness 2 Negate",
	"Negate the effect of the roughness 2 vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_roughness_2_get, ParticleSystem_invert_vertex_group_roughness_2_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_end = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_end, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_2,
	-1, "vertex_group_roughness_end", 262145, 1, 0, 0, 0, "Vertex Group Roughness End",
	"Vertex group to control roughness end",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_roughness_end_get, ParticleSystem_vertex_group_roughness_end_length, ParticleSystem_vertex_group_roughness_end_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_end = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_size, (PropertyRNA *)&rna_ParticleSystem_vertex_group_roughness_end,
	-1, "invert_vertex_group_roughness_end", 3, 1, 0, 0, 0, "Vertex Group Roughness End Negate",
	"Negate the effect of the roughness end vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_roughness_end_get, ParticleSystem_invert_vertex_group_roughness_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_size = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_size, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_roughness_end,
	-1, "vertex_group_size", 262145, 1, 0, 0, 0, "Vertex Group Size",
	"Vertex group to control size",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_size_get, ParticleSystem_vertex_group_size_length, ParticleSystem_vertex_group_size_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_size = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_tangent, (PropertyRNA *)&rna_ParticleSystem_vertex_group_size,
	-1, "invert_vertex_group_size", 3, 1, 0, 0, 0, "Vertex Group Size Negate",
	"Negate the effect of the size vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_size_get, ParticleSystem_invert_vertex_group_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_tangent = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_tangent, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_size,
	-1, "vertex_group_tangent", 262145, 1, 0, 0, 0, "Vertex Group Tangent",
	"Vertex group to control tangent",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_tangent_get, ParticleSystem_vertex_group_tangent_length, ParticleSystem_vertex_group_tangent_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_tangent = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_rotation, (PropertyRNA *)&rna_ParticleSystem_vertex_group_tangent,
	-1, "invert_vertex_group_tangent", 3, 1, 0, 0, 0, "Vertex Group Tangent Negate",
	"Negate the effect of the tangent vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_tangent_get, ParticleSystem_invert_vertex_group_tangent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_rotation = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_rotation, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_tangent,
	-1, "vertex_group_rotation", 262145, 1, 0, 0, 0, "Vertex Group Rotation",
	"Vertex group to control rotation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_rotation_get, ParticleSystem_vertex_group_rotation_length, ParticleSystem_vertex_group_rotation_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_rotation = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_field, (PropertyRNA *)&rna_ParticleSystem_vertex_group_rotation,
	-1, "invert_vertex_group_rotation", 3, 1, 0, 0, 0, "Vertex Group Rotation Negate",
	"Negate the effect of the rotation vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_rotation_get, ParticleSystem_invert_vertex_group_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_field = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_field, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_rotation,
	-1, "vertex_group_field", 262145, 1, 0, 0, 0, "Vertex Group Field",
	"Vertex group to control field",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_field_get, ParticleSystem_vertex_group_field_length, ParticleSystem_vertex_group_field_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_field = {
	{(PropertyRNA *)&rna_ParticleSystem_vertex_group_twist, (PropertyRNA *)&rna_ParticleSystem_vertex_group_field,
	-1, "invert_vertex_group_field", 3, 1, 0, 0, 0, "Vertex Group Field Negate",
	"Negate the effect of the field vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_field_get, ParticleSystem_invert_vertex_group_field_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ParticleSystem_vertex_group_twist = {
	{(PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_twist, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_field,
	-1, "vertex_group_twist", 262145, 1, 0, 0, 0, "Vertex Group Twist",
	"Vertex group to control twist",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_vertex_group_twist_get, ParticleSystem_vertex_group_twist_length, ParticleSystem_vertex_group_twist_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_twist = {
	{(PropertyRNA *)&rna_ParticleSystem_point_cache, (PropertyRNA *)&rna_ParticleSystem_vertex_group_twist,
	-1, "invert_vertex_group_twist", 3, 1, 0, 0, 0, "Vertex Group Twist Negate",
	"Negate the effect of the twist vertex group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_invert_vertex_group_twist_get, ParticleSystem_invert_vertex_group_twist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSystem_point_cache = {
	{(PropertyRNA *)&rna_ParticleSystem_has_multiple_caches, (PropertyRNA *)&rna_ParticleSystem_invert_vertex_group_twist,
	-1, "point_cache", 8650752, 1, 0, 0, 0, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

BoolPropertyRNA rna_ParticleSystem_has_multiple_caches = {
	{(PropertyRNA *)&rna_ParticleSystem_parent, (PropertyRNA *)&rna_ParticleSystem_point_cache,
	-1, "has_multiple_caches", 2, 1, 0, 0, 0, "Multiple Caches",
	"Particle system has multiple point caches",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_has_multiple_caches_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSystem_parent = {
	{(PropertyRNA *)&rna_ParticleSystem_is_editable, (PropertyRNA *)&rna_ParticleSystem_has_multiple_caches,
	-1, "parent", 8388737, 1, 0, 0, 0, "Parent",
	"Use this object\'s coordinate system instead of global coordinate system",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_parent_get, ParticleSystem_parent_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_ParticleSystem_is_editable = {
	{(PropertyRNA *)&rna_ParticleSystem_is_edited, (PropertyRNA *)&rna_ParticleSystem_parent,
	-1, "is_editable", 2, 1, 0, 0, 0, "Editable",
	"Particle system can be edited in particle mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_is_editable_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSystem_is_edited = {
	{(PropertyRNA *)&rna_ParticleSystem_dt_frac, (PropertyRNA *)&rna_ParticleSystem_is_editable,
	-1, "is_edited", 2, 1, 0, 0, 0, "Edited",
	"Particle system has been edited in particle mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystem_is_edited_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleSystem_dt_frac = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_is_edited,
	-1, "dt_frac", 2, 1, 0, 4, 0, "Timestep",
	"The current simulation time step size, as a fraction of a frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSystem, dt_frac), 5, NULL},
	ParticleSystem_dt_frac_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099009899f, 1.0f, 0.0099009899f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ParticleSystem_co_hair_object = {
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_particle_no, NULL,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_ParticleSystem_co_hair_particle_no = {
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_step, (PropertyRNA *)&rna_ParticleSystem_co_hair_object,
	-1, "particle_no", 3, 0, 0, 0, 0, "Particle no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_co_hair_step = {
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_co, (PropertyRNA *)&rna_ParticleSystem_co_hair_particle_no,
	-1, "step", 3, 0, 0, 0, 0, "step no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_ParticleSystem_co_hair_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSystem_co_hair_co = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_co_hair_step,
	-1, "co", 8388611, 0, 2, 0, 0, "Co",
	"Exported hairkey location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ParticleSystem_co_hair_co_default
};

FunctionRNA rna_ParticleSystem_co_hair_func = {
	{(FunctionRNA *)&rna_ParticleSystem_uv_on_emitter_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_co_hair_object, (PropertyRNA *)&rna_ParticleSystem_co_hair_co}},
	"co_hair", 0, "Obtain cache hair data",
	ParticleSystem_co_hair_call,
	NULL
};

PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_modifier = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle, NULL,
	-1, "modifier", 8650752, 0, 1, 0, 0, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_particle = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle_no, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_modifier,
	-1, "particle", 8650752, 0, 1, 0, 0, "",
	"Particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

IntPropertyRNA rna_ParticleSystem_uv_on_emitter_particle_no = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv_no, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle,
	-1, "particle_no", 3, 0, 0, 0, 0, "Particle no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_uv_on_emitter_uv_no = {
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_particle_no,
	-1, "uv_no", 3, 0, 0, 0, 0, "UV no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_ParticleSystem_uv_on_emitter_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSystem_uv_on_emitter_uv = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv_no,
	-1, "uv", 8388611, 0, 2, 0, 0, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleSystem_uv_on_emitter_uv_default
};

FunctionRNA rna_ParticleSystem_uv_on_emitter_func = {
	{(FunctionRNA *)&rna_ParticleSystem_mcol_on_emitter_func, (FunctionRNA *)&rna_ParticleSystem_co_hair_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_modifier, (PropertyRNA *)&rna_ParticleSystem_uv_on_emitter_uv}},
	"uv_on_emitter", 16, "Obtain uv for all particles",
	ParticleSystem_uv_on_emitter_call,
	NULL
};

PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_modifier = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle, NULL,
	-1, "modifier", 8650752, 0, 1, 0, 0, "",
	"Particle modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSystemModifier
};

PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle_no, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_modifier,
	-1, "particle", 8650752, 0, 1, 0, 0, "",
	"Particle",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Particle
};

IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle_no = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_vcol_no, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle,
	-1, "particle_no", 3, 0, 0, 0, 0, "Particle no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_vcol_no = {
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_mcol, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_particle_no,
	-1, "vcol_no", 3, 0, 0, 0, 0, "vcol no",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_ParticleSystem_mcol_on_emitter_mcol_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSystem_mcol_on_emitter_mcol = {
	{NULL, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_vcol_no,
	-1, "mcol", 8388611, 0, 2, 0, 0, "mcol",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ParticleSystem_mcol_on_emitter_mcol_default
};

FunctionRNA rna_ParticleSystem_mcol_on_emitter_func = {
	{NULL, (FunctionRNA *)&rna_ParticleSystem_uv_on_emitter_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_modifier, (PropertyRNA *)&rna_ParticleSystem_mcol_on_emitter_mcol}},
	"mcol_on_emitter", 16, "Obtain mcol for all particles",
	ParticleSystem_mcol_on_emitter_call,
	NULL
};

StructRNA RNA_ParticleSystem = {
	{(ContainerRNA *)&RNA_ParticleSettingsTextureSlot, (ContainerRNA *)&RNA_ParticleDupliWeight,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystem_rna_properties, (PropertyRNA *)&rna_ParticleSystem_dt_frac}},
	"ParticleSystem", NULL, NULL, 516, NULL, "Particle System",
	"Particle system in an object",
	"*", 169,
	(PropertyRNA *)&rna_ParticleSystem_name, (PropertyRNA *)&rna_ParticleSystem_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ParticleSystem_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ParticleSystem_co_hair_func, (FunctionRNA *)&rna_ParticleSystem_mcol_on_emitter_func}
};

/* Particle Settings Texture Slot */
static const EnumPropertyItem rna_ParticleSettingsTextureSlot_texture_coords_items[6] = {
	{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates"},
	{32, "OBJECT", 0, "Object", "Use linked object\'s coordinates for texture coordinates"},
	{16, "UV", 0, "UV", "Use UV coordinates for texture coordinates"},
	{1, "ORCO", 0, "Generated", "Use the original undeformed coordinates of the object"},
	{8192, "STRAND", 0, "Strand / Particle", "Use normalized strand texture coordinate (1D) or particle age (X) and trail position (Y)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_texture_coords = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_object, NULL,
	-1, "texture_coords", 3, 0, 0, 4, 0, "Texture Coordinates",
	"Texture coordinates used to map the texture onto the background",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset_dependency, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, texco), 1, NULL},
	ParticleSettingsTextureSlot_texture_coords_get, ParticleSettingsTextureSlot_texture_coords_set, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_texture_coords_items, 5, 16
};

PointerPropertyRNA rna_ParticleSettingsTextureSlot_object = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_uv_layer, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_texture_coords,
	-1, "object", 8388737, 1, 0, 0, 0, "Object",
	"Object to use for mapping with Object texture coordinates",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset_dependency, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_object_get, ParticleSettingsTextureSlot_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_ParticleSettingsTextureSlot_uv_layer = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_x, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_object,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"UV map to use for mapping with UV texture coordinates",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_uv_layer_get, ParticleSettingsTextureSlot_uv_layer_length, ParticleSettingsTextureSlot_uv_layer_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_x_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_x = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_y, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_uv_layer,
	-1, "mapping_x", 3, 0, 0, 4, 0, "X Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, projx), 2, NULL},
	ParticleSettingsTextureSlot_mapping_x_get, ParticleSettingsTextureSlot_mapping_x_set, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_x_items, 4, 1
};

static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_y_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_y = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_z, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_x,
	-1, "mapping_y", 3, 0, 0, 4, 0, "Y Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, projy), 2, NULL},
	ParticleSettingsTextureSlot_mapping_y_get, ParticleSettingsTextureSlot_mapping_y_set, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_y_items, 4, 2
};

static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_z_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "X", 0, "X", ""},
	{2, "Y", 0, "Y", ""},
	{3, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_z = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_y,
	-1, "mapping_z", 3, 0, 0, 4, 0, "Z Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, projz), 2, NULL},
	ParticleSettingsTextureSlot_mapping_z_get, ParticleSettingsTextureSlot_mapping_z_set, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_z_items, 4, 3
};

static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_items[5] = {
	{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"},
	{1, "CUBE", 0, "Cube", "Map using the normal vector"},
	{2, "TUBE", 0, "Tube", "Map with Z as central axis"},
	{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_time, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping_z,
	-1, "mapping", 3, 0, 0, 4, 0, "Mapping",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, mapping), 2, NULL},
	ParticleSettingsTextureSlot_mapping_get, ParticleSettingsTextureSlot_mapping_set, NULL, NULL, NULL, rna_ParticleSettingsTextureSlot_mapping_items, 4, 0
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_time = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_life, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_mapping,
	-1, "use_map_time", 3, 0, 0, 0, 0, "Emission Time",
	"Affect the emission time of the particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_time_get, ParticleSettingsTextureSlot_use_map_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_life = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_density, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_time,
	-1, "use_map_life", 3, 0, 0, 0, 0, "Life Time",
	"Affect the life time of the particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_life_get, ParticleSettingsTextureSlot_use_map_life_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_density = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_size, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_life,
	-1, "use_map_density", 3, 0, 0, 0, 0, "Density",
	"Affect the density of the particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_density_get, ParticleSettingsTextureSlot_use_map_density_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_size = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_velocity, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_density,
	-1, "use_map_size", 3, 0, 0, 0, 0, "Size",
	"Affect the particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_size_get, ParticleSettingsTextureSlot_use_map_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_velocity = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_field, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_size,
	-1, "use_map_velocity", 3, 0, 0, 0, 0, "Initial Velocity",
	"Affect the particle initial velocity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_velocity_get, ParticleSettingsTextureSlot_use_map_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_field = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_gravity, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_velocity,
	-1, "use_map_field", 3, 0, 0, 0, 0, "Force Field",
	"Affect the particle force fields",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_field_get, ParticleSettingsTextureSlot_use_map_field_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_gravity = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_damp, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_field,
	-1, "use_map_gravity", 3, 0, 0, 0, 0, "Gravity",
	"Affect the particle gravity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_gravity_get, ParticleSettingsTextureSlot_use_map_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_damp = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_clump, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_gravity,
	-1, "use_map_damp", 3, 0, 0, 0, 0, "Damp",
	"Affect the particle velocity damping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_damp_get, ParticleSettingsTextureSlot_use_map_damp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_clump = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_kink_amp, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_damp,
	-1, "use_map_clump", 3, 0, 0, 0, 0, "Clump",
	"Affect the child clumping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_clump_get, ParticleSettingsTextureSlot_use_map_clump_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink_amp = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_kink_freq, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_clump,
	-1, "use_map_kink_amp", 3, 0, 0, 0, 0, "Kink Amplitude",
	"Affect the child kink amplitude",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_kink_amp_get, ParticleSettingsTextureSlot_use_map_kink_amp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink_freq = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_rough, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_kink_amp,
	-1, "use_map_kink_freq", 3, 0, 0, 0, 0, "Kink Frequency",
	"Affect the child kink frequency",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_kink_freq_get, ParticleSettingsTextureSlot_use_map_kink_freq_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_rough = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_length, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_kink_freq,
	-1, "use_map_rough", 3, 0, 0, 0, 0, "Rough",
	"Affect the child rough",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_rough_get, ParticleSettingsTextureSlot_use_map_rough_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_length = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_twist, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_rough,
	-1, "use_map_length", 3, 0, 0, 0, 0, "Length",
	"Affect the child hair length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_length_get, ParticleSettingsTextureSlot_use_map_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_twist = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_time_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_length,
	-1, "use_map_twist", 3, 0, 0, 0, 0, "Twist",
	"Affect the child twist",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlot_use_map_twist_get, ParticleSettingsTextureSlot_use_map_twist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_time_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_life_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_use_map_twist,
	-1, "time_factor", 3, 0, 0, 4, 0, "Emission Time Factor",
	"Amount texture affects particle emission time",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, timefac), 5, NULL},
	ParticleSettingsTextureSlot_time_factor_get, ParticleSettingsTextureSlot_time_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_life_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_density_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_time_factor,
	-1, "life_factor", 3, 0, 0, 4, 0, "Life Time Factor",
	"Amount texture affects particle life time",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, lifefac), 5, NULL},
	ParticleSettingsTextureSlot_life_factor_get, ParticleSettingsTextureSlot_life_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_density_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_size_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_life_factor,
	-1, "density_factor", 3, 0, 0, 4, 0, "Density Factor",
	"Amount texture affects particle density",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, padensfac), 5, NULL},
	ParticleSettingsTextureSlot_density_factor_get, ParticleSettingsTextureSlot_density_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_size_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_velocity_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_density_factor,
	-1, "size_factor", 3, 0, 0, 4, 0, "Size Factor",
	"Amount texture affects physical particle size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, sizefac), 5, NULL},
	ParticleSettingsTextureSlot_size_factor_get, ParticleSettingsTextureSlot_size_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_velocity_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_field_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_size_factor,
	-1, "velocity_factor", 3, 0, 0, 4, 0, "Velocity Factor",
	"Amount texture affects particle initial velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, ivelfac), 5, NULL},
	ParticleSettingsTextureSlot_velocity_factor_get, ParticleSettingsTextureSlot_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_field_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_gravity_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_velocity_factor,
	-1, "field_factor", 3, 0, 0, 4, 0, "Field Factor",
	"Amount texture affects particle force fields",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, fieldfac), 5, NULL},
	ParticleSettingsTextureSlot_field_factor_get, ParticleSettingsTextureSlot_field_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_gravity_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_damp_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_field_factor,
	-1, "gravity_factor", 3, 0, 0, 4, 0, "Gravity Factor",
	"Amount texture affects particle gravity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, gravityfac), 5, NULL},
	ParticleSettingsTextureSlot_gravity_factor_get, ParticleSettingsTextureSlot_gravity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_damp_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_length_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_gravity_factor,
	-1, "damp_factor", 3, 0, 0, 4, 0, "Damp Factor",
	"Amount texture affects particle damping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, dampfac), 5, NULL},
	ParticleSettingsTextureSlot_damp_factor_get, ParticleSettingsTextureSlot_damp_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_length_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_clump_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_damp_factor,
	-1, "length_factor", 3, 0, 0, 4, 0, "Length Factor",
	"Amount texture affects child hair length",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, lengthfac), 5, NULL},
	ParticleSettingsTextureSlot_length_factor_get, ParticleSettingsTextureSlot_length_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_clump_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_kink_amp_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_length_factor,
	-1, "clump_factor", 3, 0, 0, 4, 0, "Clump Factor",
	"Amount texture affects child clump",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, clumpfac), 5, NULL},
	ParticleSettingsTextureSlot_clump_factor_get, ParticleSettingsTextureSlot_clump_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_amp_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_kink_freq_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_clump_factor,
	-1, "kink_amp_factor", 3, 0, 0, 4, 0, "Kink Amplitude Factor",
	"Amount texture affects child kink amplitude",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, kinkampfac), 5, NULL},
	ParticleSettingsTextureSlot_kink_amp_factor_get, ParticleSettingsTextureSlot_kink_amp_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_freq_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_rough_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_kink_amp_factor,
	-1, "kink_freq_factor", 3, 0, 0, 4, 0, "Kink Frequency Factor",
	"Amount texture affects child kink frequency",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, kinkfac), 5, NULL},
	ParticleSettingsTextureSlot_kink_freq_factor_get, ParticleSettingsTextureSlot_kink_freq_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_rough_factor = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_twist_factor, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_kink_freq_factor,
	-1, "rough_factor", 3, 0, 0, 4, 0, "Rough Factor",
	"Amount texture affects child roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, roughfac), 5, NULL},
	ParticleSettingsTextureSlot_rough_factor_get, ParticleSettingsTextureSlot_rough_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettingsTextureSlot_twist_factor = {
	{NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_rough_factor,
	-1, "twist_factor", 3, 0, 0, 4, 0, "Twist Factor",
	"Amount texture affects child twist",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, twistfac), 5, NULL},
	ParticleSettingsTextureSlot_twist_factor_get, ParticleSettingsTextureSlot_twist_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

StructRNA RNA_ParticleSettingsTextureSlot = {
	{(ContainerRNA *)&RNA_ParticleSettings, (ContainerRNA *)&RNA_ParticleSystem,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlot_texture_coords, (PropertyRNA *)&rna_ParticleSettingsTextureSlot_twist_factor}},
	"ParticleSettingsTextureSlot", NULL, NULL, 516, NULL, "Particle Settings Texture Slot",
	"Texture slot for textures in a Particle Settings data-block",
	"*", 166,
	(PropertyRNA *)&rna_TextureSlot_name, (PropertyRNA *)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Settings */
CollectionPropertyRNA rna_ParticleSettings_texture_slots = {
	{(PropertyRNA *)&rna_ParticleSettings_active_texture, NULL,
	-1, "texture_slots", 0, 0, 0, 0, 0, "Textures",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ParticleSettingsTextureSlots},
	ParticleSettings_texture_slots_begin, ParticleSettings_texture_slots_next, ParticleSettings_texture_slots_end, ParticleSettings_texture_slots_get, NULL, NULL, NULL, NULL, &RNA_ParticleSettingsTextureSlot
};

PointerPropertyRNA rna_ParticleSettings_active_texture = {
	{(PropertyRNA *)&rna_ParticleSettings_active_texture_index, (PropertyRNA *)&rna_ParticleSettings_texture_slots,
	-1, "active_texture", 8388737, 0, 0, 0, 0, "Active Texture",
	"Active texture slot being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset_dependency, 119537664, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_active_texture_get, ParticleSettings_active_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_ParticleSettings_active_texture_index = {
	{(PropertyRNA *)&rna_ParticleSettings_is_fluid, (PropertyRNA *)&rna_ParticleSettings_active_texture,
	-1, "active_texture_index", 3, 0, 0, 4, 0, "Active Texture Index",
	"Index of active texture slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119537664, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, texact), 1, NULL},
	ParticleSettings_active_texture_index_get, ParticleSettings_active_texture_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 17, 0, 17, 1, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_is_fluid = {
	{(PropertyRNA *)&rna_ParticleSettings_use_react_start_end, (PropertyRNA *)&rna_ParticleSettings_active_texture_index,
	-1, "is_fluid", 2, 0, 0, 0, 0, "Fluid",
	"Particles were created by a fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_is_fluid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_react_start_end = {
	{(PropertyRNA *)&rna_ParticleSettings_use_react_multiple, (PropertyRNA *)&rna_ParticleSettings_is_fluid,
	-1, "use_react_start_end", 1, 0, 0, 0, 0, "Start/End",
	"Give birth to unreacted particles eventually",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_react_start_end_get, ParticleSettings_use_react_start_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_react_multiple = {
	{(PropertyRNA *)&rna_ParticleSettings_use_regrow_hair, (PropertyRNA *)&rna_ParticleSettings_use_react_start_end,
	-1, "use_react_multiple", 1, 0, 0, 0, 0, "Multi React",
	"React multiple times",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_react_multiple_get, ParticleSettings_use_react_multiple_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_regrow_hair = {
	{(PropertyRNA *)&rna_ParticleSettings_show_unborn, (PropertyRNA *)&rna_ParticleSettings_use_react_multiple,
	-1, "use_regrow_hair", 3, 0, 0, 0, 0, "Regrow",
	"Regrow hair for each frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_regrow_hair_get, ParticleSettings_use_regrow_hair_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_unborn = {
	{(PropertyRNA *)&rna_ParticleSettings_use_dead, (PropertyRNA *)&rna_ParticleSettings_use_regrow_hair,
	-1, "show_unborn", 3, 0, 0, 0, 0, "Unborn",
	"Show particles before they are emitted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_unborn_get, ParticleSettings_show_unborn_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_dead = {
	{(PropertyRNA *)&rna_ParticleSettings_use_emit_random, (PropertyRNA *)&rna_ParticleSettings_show_unborn,
	-1, "use_dead", 3, 0, 0, 0, 0, "Died",
	"Show particles after they have died",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_dead_get, ParticleSettings_use_dead_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_emit_random = {
	{(PropertyRNA *)&rna_ParticleSettings_use_even_distribution, (PropertyRNA *)&rna_ParticleSettings_use_dead,
	-1, "use_emit_random", 1, 0, 0, 0, 0, "Random",
	"Emit in random order of elements",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_emit_random_get, ParticleSettings_use_emit_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_even_distribution = {
	{(PropertyRNA *)&rna_ParticleSettings_use_die_on_collision, (PropertyRNA *)&rna_ParticleSettings_use_emit_random,
	-1, "use_even_distribution", 1, 0, 0, 0, 0, "Even Distribution",
	"Use even distribution from faces based on face areas or edge lengths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_even_distribution_get, ParticleSettings_use_even_distribution_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_die_on_collision = {
	{(PropertyRNA *)&rna_ParticleSettings_use_size_deflect, (PropertyRNA *)&rna_ParticleSettings_use_even_distribution,
	-1, "use_die_on_collision", 1, 0, 0, 0, 0, "Die on Hit",
	"Particles die when they collide with a deflector object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_die_on_collision_get, ParticleSettings_use_die_on_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_size_deflect = {
	{(PropertyRNA *)&rna_ParticleSettings_use_rotations, (PropertyRNA *)&rna_ParticleSettings_use_die_on_collision,
	-1, "use_size_deflect", 1, 0, 0, 0, 0, "Size Deflect",
	"Use particle\'s size in deflection",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_size_deflect_get, ParticleSettings_use_size_deflect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_rotations = {
	{(PropertyRNA *)&rna_ParticleSettings_use_dynamic_rotation, (PropertyRNA *)&rna_ParticleSettings_use_size_deflect,
	-1, "use_rotations", 1, 0, 0, 0, 0, "Rotations",
	"Calculate particle rotations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_rotations_get, ParticleSettings_use_rotations_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_dynamic_rotation = {
	{(PropertyRNA *)&rna_ParticleSettings_use_multiply_size_mass, (PropertyRNA *)&rna_ParticleSettings_use_rotations,
	-1, "use_dynamic_rotation", 1, 0, 0, 0, 0, "Dynamic",
	"Particle rotations are affected by collisions and effectors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_dynamic_rotation_get, ParticleSettings_use_dynamic_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_multiply_size_mass = {
	{(PropertyRNA *)&rna_ParticleSettings_use_advanced_hair, (PropertyRNA *)&rna_ParticleSettings_use_dynamic_rotation,
	-1, "use_multiply_size_mass", 1, 0, 0, 0, 0, "Mass from Size",
	"Multiply mass by particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_multiply_size_mass_get, ParticleSettings_use_multiply_size_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_advanced_hair = {
	{(PropertyRNA *)&rna_ParticleSettings_lock_boids_to_surface, (PropertyRNA *)&rna_ParticleSettings_use_multiply_size_mass,
	-1, "use_advanced_hair", 1, 0, 0, 0, 0, "Advanced",
	"Use full physics calculations for growing hair",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_advanced_hair_get, ParticleSettings_use_advanced_hair_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleSettings_lock_boids_to_surface = {
	{(PropertyRNA *)&rna_ParticleSettings_use_hair_bspline, (PropertyRNA *)&rna_ParticleSettings_use_advanced_hair,
	-1, "lock_boids_to_surface", 3, 0, 0, 0, 0, "Boids 2D",
	"Constrain boids to a surface",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_lock_boids_to_surface_get, ParticleSettings_lock_boids_to_surface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_hair_bspline = {
	{(PropertyRNA *)&rna_ParticleSettings_invert_grid, (PropertyRNA *)&rna_ParticleSettings_lock_boids_to_surface,
	-1, "use_hair_bspline", 3, 0, 0, 0, 0, "B-Spline",
	"Interpolate hair using B-Splines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_hair_bspline_get, ParticleSettings_use_hair_bspline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_invert_grid = {
	{(PropertyRNA *)&rna_ParticleSettings_hexagonal_grid, (PropertyRNA *)&rna_ParticleSettings_use_hair_bspline,
	-1, "invert_grid", 3, 0, 0, 0, 0, "Invert Grid",
	"Invert what is considered object and what is not",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_invert_grid_get, ParticleSettings_invert_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_hexagonal_grid = {
	{(PropertyRNA *)&rna_ParticleSettings_apply_effector_to_children, (PropertyRNA *)&rna_ParticleSettings_invert_grid,
	-1, "hexagonal_grid", 3, 0, 0, 0, 0, "Hexagonal Grid",
	"Create the grid in a hexagonal pattern",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_hexagonal_grid_get, ParticleSettings_hexagonal_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_apply_effector_to_children = {
	{(PropertyRNA *)&rna_ParticleSettings_create_long_hair_children, (PropertyRNA *)&rna_ParticleSettings_hexagonal_grid,
	-1, "apply_effector_to_children", 3, 0, 0, 0, 0, "Effect Children",
	"Apply effectors to children",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_apply_effector_to_children_get, ParticleSettings_apply_effector_to_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_create_long_hair_children = {
	{(PropertyRNA *)&rna_ParticleSettings_apply_guide_to_children, (PropertyRNA *)&rna_ParticleSettings_apply_effector_to_children,
	-1, "create_long_hair_children", 3, 0, 0, 0, 0, "Long Hair",
	"Calculate children that suit long hair well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_create_long_hair_children_get, ParticleSettings_create_long_hair_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_apply_guide_to_children = {
	{(PropertyRNA *)&rna_ParticleSettings_use_self_effect, (PropertyRNA *)&rna_ParticleSettings_create_long_hair_children,
	-1, "apply_guide_to_children", 3, 0, 0, 0, 0, "apply_guide_to_children",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_apply_guide_to_children_get, ParticleSettings_apply_guide_to_children_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_self_effect = {
	{(PropertyRNA *)&rna_ParticleSettings_type, (PropertyRNA *)&rna_ParticleSettings_apply_guide_to_children,
	-1, "use_self_effect", 3, 0, 0, 0, 0, "Self Effect",
	"Particle effectors affect themselves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_self_effect_get, ParticleSettings_use_self_effect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_ParticleSettings_type_items[3] = {
	{0, "EMITTER", 0, "Emitter", ""},
	{2, "HAIR", 0, "Hair", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_type = {
	{(PropertyRNA *)&rna_ParticleSettings_emit_from, (PropertyRNA *)&rna_ParticleSettings_use_self_effect,
	-1, "type", 1, 0, 0, 4, 0, "Type",
	"Particle type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_change_type, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, type), 1, NULL},
	ParticleSettings_type_get, ParticleSettings_type_set, rna_Particle_type_itemf, NULL, NULL, rna_ParticleSettings_type_items, 2, 0
};

static const EnumPropertyItem rna_ParticleSettings_emit_from_items[4] = {
	{0, "VERT", 0, "Vertices", ""},
	{1, "FACE", 0, "Faces", ""},
	{2, "VOLUME", 0, "Volume", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_emit_from = {
	{(PropertyRNA *)&rna_ParticleSettings_distribution, (PropertyRNA *)&rna_ParticleSettings_type,
	-1, "emit_from", 1, 0, 0, 4, 0, "Emit From",
	"Where to emit particles from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, from), 1, NULL},
	ParticleSettings_emit_from_get, ParticleSettings_emit_from_set, rna_Particle_from_itemf, NULL, NULL, rna_ParticleSettings_emit_from_items, 3, 1
};

static const EnumPropertyItem rna_ParticleSettings_distribution_items[4] = {
	{0, "JIT", 0, "Jittered", ""},
	{1, "RAND", 0, "Random", ""},
	{2, "GRID", 0, "Grid", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_distribution = {
	{(PropertyRNA *)&rna_ParticleSettings_physics_type, (PropertyRNA *)&rna_ParticleSettings_emit_from,
	-1, "distribution", 1, 0, 0, 4, 0, "Distribution",
	"How to distribute particles on selected element",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, distr), 1, NULL},
	ParticleSettings_distribution_get, ParticleSettings_distribution_set, rna_Particle_dist_itemf, NULL, NULL, rna_ParticleSettings_distribution_items, 3, 0
};

static const EnumPropertyItem rna_ParticleSettings_physics_type_items[6] = {
	{0, "NO", 0, "None", ""},
	{1, "NEWTON", 0, "Newtonian", ""},
	{2, "KEYED", 0, "Keyed", ""},
	{3, "BOIDS", 0, "Boids", ""},
	{4, "FLUID", 0, "Fluid", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_physics_type = {
	{(PropertyRNA *)&rna_ParticleSettings_rotation_mode, (PropertyRNA *)&rna_ParticleSettings_distribution,
	-1, "physics_type", 1, 0, 0, 4, 0, "Physics Type",
	"Particle physics type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_change_physics_type, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, phystype), 1, NULL},
	ParticleSettings_physics_type_get, ParticleSettings_physics_type_set, NULL, NULL, NULL, rna_ParticleSettings_physics_type_items, 5, 1
};

static const EnumPropertyItem rna_ParticleSettings_rotation_mode_items[11] = {
	{0, "NONE", 0, "None", ""},
	{1, "NOR", 0, "Normal", ""},
	{9, "NOR_TAN", 0, "Normal-Tangent", ""},
	{2, "VEL", 0, "Velocity / Hair", ""},
	{3, "GLOB_X", 0, "Global X", ""},
	{4, "GLOB_Y", 0, "Global Y", ""},
	{5, "GLOB_Z", 0, "Global Z", ""},
	{6, "OB_X", 0, "Object X", ""},
	{7, "OB_Y", 0, "Object Y", ""},
	{8, "OB_Z", 0, "Object Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_rotation_mode = {
	{(PropertyRNA *)&rna_ParticleSettings_angular_velocity_mode, (PropertyRNA *)&rna_ParticleSettings_physics_type,
	-1, "rotation_mode", 1, 0, 0, 4, 0, "Orientation Axis",
	"Particle orientation axis (does not affect Explode modifier\'s results)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rotmode), 1, NULL},
	ParticleSettings_rotation_mode_get, ParticleSettings_rotation_mode_set, NULL, NULL, NULL, rna_ParticleSettings_rotation_mode_items, 10, 2
};

static const EnumPropertyItem rna_ParticleSettings_angular_velocity_mode_items[9] = {
	{0, "NONE", 0, "None", ""},
	{1, "VELOCITY", 0, "Velocity", ""},
	{3, "HORIZONTAL", 0, "Horizontal", ""},
	{4, "VERTICAL", 0, "Vertical", ""},
	{5, "GLOBAL_X", 0, "Global X", ""},
	{6, "GLOBAL_Y", 0, "Global Y", ""},
	{7, "GLOBAL_Z", 0, "Global Z", ""},
	{2, "RAND", 0, "Random", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_angular_velocity_mode = {
	{(PropertyRNA *)&rna_ParticleSettings_react_event, (PropertyRNA *)&rna_ParticleSettings_rotation_mode,
	-1, "angular_velocity_mode", 1, 0, 0, 4, 0, "Angular Velocity Axis",
	"What axis is used to change particle rotation with time",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, avemode), 1, NULL},
	ParticleSettings_angular_velocity_mode_get, ParticleSettings_angular_velocity_mode_set, NULL, NULL, NULL, rna_ParticleSettings_angular_velocity_mode_items, 8, 1
};

static const EnumPropertyItem rna_ParticleSettings_react_event_items[4] = {
	{0, "DEATH", 0, "Death", ""},
	{1, "COLLIDE", 0, "Collision", ""},
	{2, "NEAR", 0, "Near", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_react_event = {
	{(PropertyRNA *)&rna_ParticleSettings_show_guide_hairs, (PropertyRNA *)&rna_ParticleSettings_angular_velocity_mode,
	-1, "react_event", 1, 0, 0, 4, 0, "React On",
	"The event of target particles to react on",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, reactevent), 1, NULL},
	ParticleSettings_react_event_get, ParticleSettings_react_event_set, NULL, NULL, NULL, rna_ParticleSettings_react_event_items, 3, 0
};

BoolPropertyRNA rna_ParticleSettings_show_guide_hairs = {
	{(PropertyRNA *)&rna_ParticleSettings_show_hair_grid, (PropertyRNA *)&rna_ParticleSettings_react_event,
	-1, "show_guide_hairs", 3, 0, 0, 0, 0, "Guide Hairs",
	"Show guide hairs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_guide_hairs_get, ParticleSettings_show_guide_hairs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_hair_grid = {
	{(PropertyRNA *)&rna_ParticleSettings_show_velocity, (PropertyRNA *)&rna_ParticleSettings_show_guide_hairs,
	-1, "show_hair_grid", 3, 0, 0, 0, 0, "Guide Hairs",
	"Show hair simulation grid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_hair_grid_get, ParticleSettings_show_hair_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_velocity = {
	{(PropertyRNA *)&rna_ParticleSettings_show_size, (PropertyRNA *)&rna_ParticleSettings_show_hair_grid,
	-1, "show_velocity", 3, 0, 0, 0, 0, "Velocity",
	"Show particle velocity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_velocity_get, ParticleSettings_show_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_size = {
	{(PropertyRNA *)&rna_ParticleSettings_show_health, (PropertyRNA *)&rna_ParticleSettings_show_velocity,
	-1, "show_size", 3, 0, 0, 0, 0, "Size",
	"Show particle size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_size_get, ParticleSettings_show_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_health = {
	{(PropertyRNA *)&rna_ParticleSettings_use_absolute_path_time, (PropertyRNA *)&rna_ParticleSettings_show_size,
	-1, "show_health", 3, 0, 0, 0, 0, "Health",
	"Display boid health",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_health_get, ParticleSettings_show_health_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_absolute_path_time = {
	{(PropertyRNA *)&rna_ParticleSettings_use_parent_particles, (PropertyRNA *)&rna_ParticleSettings_show_health,
	-1, "use_absolute_path_time", 3, 0, 0, 0, 0, "Absolute Path Time",
	"Path timing is in absolute frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_abspathtime_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_absolute_path_time_get, ParticleSettings_use_absolute_path_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_parent_particles = {
	{(PropertyRNA *)&rna_ParticleSettings_show_number, (PropertyRNA *)&rna_ParticleSettings_use_absolute_path_time,
	-1, "use_parent_particles", 3, 0, 0, 0, 0, "Parents",
	"Render parent particles",
	0, "ParticleSettings",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_parent_particles_get, ParticleSettings_use_parent_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_show_number = {
	{(PropertyRNA *)&rna_ParticleSettings_use_collection_pick_random, (PropertyRNA *)&rna_ParticleSettings_use_parent_particles,
	-1, "show_number", 3, 0, 0, 0, 0, "Number",
	"Show particle number",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_show_number_get, ParticleSettings_show_number_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_collection_pick_random = {
	{(PropertyRNA *)&rna_ParticleSettings_use_collection_count, (PropertyRNA *)&rna_ParticleSettings_show_number,
	-1, "use_collection_pick_random", 3, 0, 0, 0, 0, "Pick Random",
	"Pick objects from collection randomly",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_collection_pick_random_get, ParticleSettings_use_collection_pick_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_collection_count = {
	{(PropertyRNA *)&rna_ParticleSettings_use_global_instance, (PropertyRNA *)&rna_ParticleSettings_use_collection_pick_random,
	-1, "use_collection_count", 3, 0, 0, 0, 0, "Use Count",
	"Use object multiple times in the same collection",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_count, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_collection_count_get, ParticleSettings_use_collection_count_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_global_instance = {
	{(PropertyRNA *)&rna_ParticleSettings_use_rotation_instance, (PropertyRNA *)&rna_ParticleSettings_use_collection_count,
	-1, "use_global_instance", 3, 0, 0, 0, 0, "Global",
	"Use object\'s global coordinates for duplication",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_global_instance_get, ParticleSettings_use_global_instance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_rotation_instance = {
	{(PropertyRNA *)&rna_ParticleSettings_use_scale_instance, (PropertyRNA *)&rna_ParticleSettings_use_global_instance,
	-1, "use_rotation_instance", 3, 0, 0, 0, 0, "Rotation",
	"Use object\'s rotation for duplication (global x-axis is aligned particle rotation axis)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_rotation_instance_get, ParticleSettings_use_rotation_instance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_scale_instance = {
	{(PropertyRNA *)&rna_ParticleSettings_use_render_adaptive, (PropertyRNA *)&rna_ParticleSettings_use_rotation_instance,
	-1, "use_scale_instance", 3, 0, 0, 0, 0, "Scale",
	"Use object\'s scale for duplication",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_scale_instance_get, ParticleSettings_use_scale_instance_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_render_adaptive = {
	{(PropertyRNA *)&rna_ParticleSettings_use_velocity_length, (PropertyRNA *)&rna_ParticleSettings_use_scale_instance,
	-1, "use_render_adaptive", 3, 0, 0, 0, 0, "Adaptive Render",
	"Display steps of the particle path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_render_adaptive_get, ParticleSettings_use_render_adaptive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_velocity_length = {
	{(PropertyRNA *)&rna_ParticleSettings_use_whole_collection, (PropertyRNA *)&rna_ParticleSettings_use_render_adaptive,
	-1, "use_velocity_length", 3, 0, 0, 0, 0, "Speed",
	"Multiply line length by particle speed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_velocity_length_get, ParticleSettings_use_velocity_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_whole_collection = {
	{(PropertyRNA *)&rna_ParticleSettings_use_strand_primitive, (PropertyRNA *)&rna_ParticleSettings_use_velocity_length,
	-1, "use_whole_collection", 3, 0, 0, 0, 0, "Whole Collection",
	"Use whole collection at once",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_whole_collection_get, ParticleSettings_use_whole_collection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_strand_primitive = {
	{(PropertyRNA *)&rna_ParticleSettings_display_method, (PropertyRNA *)&rna_ParticleSettings_use_whole_collection,
	-1, "use_strand_primitive", 3, 0, 0, 0, 0, "Strand Render",
	"Use the strand primitive for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_strand_primitive_get, ParticleSettings_use_strand_primitive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_ParticleSettings_display_method_items[7] = {
	{0, "NONE", 0, "None", ""},
	{10, "RENDER", 0, "Rendered", ""},
	{1, "DOT", 0, "Point", ""},
	{2, "CIRC", 0, "Circle", ""},
	{3, "CROSS", 0, "Cross", ""},
	{4, "AXIS", 0, "Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_display_method = {
	{(PropertyRNA *)&rna_ParticleSettings_render_type, (PropertyRNA *)&rna_ParticleSettings_use_strand_primitive,
	-1, "display_method", 3, 0, 0, 4, 0, "Particle Display",
	"How particles are displayed in viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, draw_as), 1, NULL},
	ParticleSettings_display_method_get, ParticleSettings_display_method_set, rna_Particle_draw_as_itemf, NULL, NULL, rna_ParticleSettings_display_method_items, 6, 10
};

static const EnumPropertyItem rna_ParticleSettings_render_type_items[7] = {
	{0, "NONE", 0, "None", ""},
	{1, "HALO", 0, "Halo", ""},
	{5, "LINE", 0, "Line", ""},
	{6, "PATH", 0, "Path", ""},
	{7, "OBJECT", 0, "Object", ""},
	{8, "COLLECTION", 0, "Collection", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_render_type = {
	{(PropertyRNA *)&rna_ParticleSettings_display_color, (PropertyRNA *)&rna_ParticleSettings_display_method,
	-1, "render_type", 3, 0, 0, 4, 0, "Particle Rendering",
	"How particles are rendered",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, ren_as), 1, NULL},
	ParticleSettings_render_type_get, ParticleSettings_render_type_set, rna_Particle_ren_as_itemf, NULL, NULL, rna_ParticleSettings_render_type_items, 6, 1
};

static const EnumPropertyItem rna_ParticleSettings_display_color_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "MATERIAL", 0, "Material", ""},
	{2, "VELOCITY", 0, "Velocity", ""},
	{3, "ACCELERATION", 0, "Acceleration", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_display_color = {
	{(PropertyRNA *)&rna_ParticleSettings_display_size, (PropertyRNA *)&rna_ParticleSettings_render_type,
	-1, "display_color", 3, 0, 0, 4, 0, "Display Color",
	"Display additional particle data as a color",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, draw_col), 1, NULL},
	ParticleSettings_display_color_get, ParticleSettings_display_color_set, NULL, NULL, NULL, rna_ParticleSettings_display_color_items, 4, 1
};

FloatPropertyRNA rna_ParticleSettings_display_size = {
	{(PropertyRNA *)&rna_ParticleSettings_child_type, (PropertyRNA *)&rna_ParticleSettings_display_color,
	-1, "display_size", 3, 0, 0, 4, 0, "Display Size",
	"Size of particles on viewport",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, draw_size), 5, NULL},
	ParticleSettings_display_size_get, ParticleSettings_display_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 1000.0f, 1.0f, -1, 0.1000000015f, NULL
};

static const EnumPropertyItem rna_ParticleSettings_child_type_items[4] = {
	{0, "NONE", 0, "None", ""},
	{1, "SIMPLE", 0, "Simple", ""},
	{2, "INTERPOLATED", 0, "Interpolated", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_child_type = {
	{(PropertyRNA *)&rna_ParticleSettings_display_step, (PropertyRNA *)&rna_ParticleSettings_display_size,
	-1, "child_type", 3, 0, 0, 4, 0, "Children From",
	"Create child particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, childtype), 1, NULL},
	ParticleSettings_child_type_get, ParticleSettings_child_type_set, NULL, NULL, NULL, rna_ParticleSettings_child_type_items, 3, 0
};

IntPropertyRNA rna_ParticleSettings_display_step = {
	{(PropertyRNA *)&rna_ParticleSettings_render_step, (PropertyRNA *)&rna_ParticleSettings_child_type,
	-1, "display_step", 3, 0, 0, 4, 0, "Steps",
	"How many steps paths are displayed with (power of 2)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, draw_step), 1, NULL},
	ParticleSettings_display_step_get, ParticleSettings_display_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 7, 0, 10, 1, 2, NULL
};

IntPropertyRNA rna_ParticleSettings_render_step = {
	{(PropertyRNA *)&rna_ParticleSettings_hair_step, (PropertyRNA *)&rna_ParticleSettings_display_step,
	-1, "render_step", 3, 0, 0, 4, 0, "Render",
	"How many steps paths are rendered with (power of 2)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, ren_step), 1, NULL},
	ParticleSettings_render_step_get, ParticleSettings_render_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 9, 0, 20, 1, 3, NULL
};

IntPropertyRNA rna_ParticleSettings_hair_step = {
	{(PropertyRNA *)&rna_ParticleSettings_bending_random, (PropertyRNA *)&rna_ParticleSettings_render_step,
	-1, "hair_step", 3, 0, 0, 4, 0, "Segments",
	"Number of hair segments",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, hair_step), 1, NULL},
	ParticleSettings_hair_step_get, ParticleSettings_hair_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2, 50, 2, 32767, 1, 5, NULL
};

FloatPropertyRNA rna_ParticleSettings_bending_random = {
	{(PropertyRNA *)&rna_ParticleSettings_keys_step, (PropertyRNA *)&rna_ParticleSettings_hair_step,
	-1, "bending_random", 3, 0, 0, 4, 0, "Random Bending Stiffness",
	"Random stiffness of hairs",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_cloth_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, bending_random), 5, NULL},
	ParticleSettings_bending_random_get, ParticleSettings_bending_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_keys_step = {
	{(PropertyRNA *)&rna_ParticleSettings_adaptive_angle, (PropertyRNA *)&rna_ParticleSettings_bending_random,
	-1, "keys_step", 3, 0, 0, 4, 0, "Keys Step",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, keys_step), 1, NULL},
	ParticleSettings_keys_step_get, ParticleSettings_keys_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 5, NULL
};

IntPropertyRNA rna_ParticleSettings_adaptive_angle = {
	{(PropertyRNA *)&rna_ParticleSettings_adaptive_pixel, (PropertyRNA *)&rna_ParticleSettings_keys_step,
	-1, "adaptive_angle", 3, 0, 0, 4, 0, "Degrees",
	"How many degrees path has to curve to make another render segment",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, adapt_angle), 1, NULL},
	ParticleSettings_adaptive_angle_get, ParticleSettings_adaptive_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 45, 0, 45, 1, 5, NULL
};

IntPropertyRNA rna_ParticleSettings_adaptive_pixel = {
	{(PropertyRNA *)&rna_ParticleSettings_display_percentage, (PropertyRNA *)&rna_ParticleSettings_adaptive_angle,
	-1, "adaptive_pixel", 3, 0, 0, 4, 0, "Pixel",
	"How many pixels path has to cover to make another render segment",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, adapt_pix), 1, NULL},
	ParticleSettings_adaptive_pixel_get, ParticleSettings_adaptive_pixel_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 50, 0, 50, 1, 3, NULL
};

IntPropertyRNA rna_ParticleSettings_display_percentage = {
	{(PropertyRNA *)&rna_ParticleSettings_material, (PropertyRNA *)&rna_ParticleSettings_adaptive_pixel,
	-1, "display_percentage", 3, 0, 0, 4, 0, "Display",
	"Percentage of particles to display in 3D view",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, disp), 1, NULL},
	ParticleSettings_display_percentage_get, ParticleSettings_display_percentage_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 100, NULL
};

IntPropertyRNA rna_ParticleSettings_material = {
	{(PropertyRNA *)&rna_ParticleSettings_material_slot, (PropertyRNA *)&rna_ParticleSettings_display_percentage,
	-1, "material", 3, 0, 0, 4, 0, "Material Index",
	"Index of material slot used for rendering particles",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, omat), 1, NULL},
	ParticleSettings_material_get, ParticleSettings_material_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32767, 1, 32767, 1, 1, NULL
};

static const EnumPropertyItem rna_ParticleSettings_material_slot_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_material_slot = {
	{(PropertyRNA *)&rna_ParticleSettings_integrator, (PropertyRNA *)&rna_ParticleSettings_material,
	-1, "material_slot", 3, 0, 0, 4, 0, "Material Slot",
	"Material slot used for rendering particles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, omat), 1, NULL},
	ParticleSettings_material_slot_get, ParticleSettings_material_slot_set, rna_Particle_Material_itemf, NULL, NULL, rna_ParticleSettings_material_slot_items, 1, 0
};

static const EnumPropertyItem rna_ParticleSettings_integrator_items[5] = {
	{0, "EULER", 0, "Euler", ""},
	{3, "VERLET", 0, "Verlet", ""},
	{1, "MIDPOINT", 0, "Midpoint", ""},
	{2, "RK4", 0, "RK4", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_integrator = {
	{(PropertyRNA *)&rna_ParticleSettings_kink, (PropertyRNA *)&rna_ParticleSettings_material_slot,
	-1, "integrator", 3, 0, 0, 4, 0, "Integration",
	"Algorithm used to calculate physics, from the fastest to the most stable and accurate: Midpoint, Euler, Verlet, RK4",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, integrator), 1, NULL},
	ParticleSettings_integrator_get, ParticleSettings_integrator_set, NULL, NULL, NULL, rna_ParticleSettings_integrator_items, 4, 1
};

static const EnumPropertyItem rna_ParticleSettings_kink_items[7] = {
	{0, "NO", 0, "Nothing", ""},
	{1, "CURL", 0, "Curl", ""},
	{2, "RADIAL", 0, "Radial", ""},
	{3, "WAVE", 0, "Wave", ""},
	{4, "BRAID", 0, "Braid", ""},
	{5, "SPIRAL", 0, "Spiral", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleSettings_kink = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_axis, (PropertyRNA *)&rna_ParticleSettings_integrator,
	-1, "kink", 3, 0, 0, 4, 0, "Kink",
	"Type of periodic offset on the path",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink), 1, NULL},
	ParticleSettings_kink_get, ParticleSettings_kink_set, NULL, NULL, NULL, rna_ParticleSettings_kink_items, 6, 0
};

EnumPropertyRNA rna_ParticleSettings_kink_axis = {
	{(PropertyRNA *)&rna_ParticleSettings_color_maximum, (PropertyRNA *)&rna_ParticleSettings_kink,
	-1, "kink_axis", 3, 0, 0, 4, 0, "Axis",
	"Which axis to use for offset",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_axis), 1, NULL},
	ParticleSettings_kink_axis_get, ParticleSettings_kink_axis_set, NULL, NULL, NULL, rna_enum_axis_xyz_items, 3, 2
};

FloatPropertyRNA rna_ParticleSettings_color_maximum = {
	{(PropertyRNA *)&rna_ParticleSettings_frame_start, (PropertyRNA *)&rna_ParticleSettings_kink_axis,
	-1, "color_maximum", 3, 0, 0, 4, 0, "Color Maximum",
	"Maximum length of the particle color vector",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, color_vec_max), 5, NULL},
	ParticleSettings_color_maximum_get, ParticleSettings_color_maximum_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_frame_start = {
	{(PropertyRNA *)&rna_ParticleSettings_frame_end, (PropertyRNA *)&rna_ParticleSettings_color_maximum,
	-1, "frame_start", 1, 0, 0, 0, 0, "Start",
	"Frame number to start emitting particles",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_frame_start_get, ParticleSettings_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_frame_end = {
	{(PropertyRNA *)&rna_ParticleSettings_lifetime, (PropertyRNA *)&rna_ParticleSettings_frame_start,
	-1, "frame_end", 1, 0, 0, 0, 0, "End",
	"Frame number to stop emitting particles",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_frame_end_get, ParticleSettings_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, 200.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_lifetime = {
	{(PropertyRNA *)&rna_ParticleSettings_lifetime_random, (PropertyRNA *)&rna_ParticleSettings_frame_end,
	-1, "lifetime", 3, 0, 0, 4, 0, "Lifetime",
	"Life span of the particles",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, lifetime), 5, NULL},
	ParticleSettings_lifetime_get, ParticleSettings_lifetime_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 1048574.0f, 1.0f, 1048574.0f, 10.0f, 3, 50.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_lifetime_random = {
	{(PropertyRNA *)&rna_ParticleSettings_time_tweak, (PropertyRNA *)&rna_ParticleSettings_lifetime,
	-1, "lifetime_random", 3, 0, 0, 4, 0, "Random",
	"Give the particle life a random variation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, randlife), 5, NULL},
	ParticleSettings_lifetime_random_get, ParticleSettings_lifetime_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_time_tweak = {
	{(PropertyRNA *)&rna_ParticleSettings_timestep, (PropertyRNA *)&rna_ParticleSettings_lifetime_random,
	-1, "time_tweak", 3, 0, 0, 4, 0, "Tweak",
	"A multiplier for physics timestep (1.0 means one frame = 1/25 seconds)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, timetweak), 5, NULL},
	ParticleSettings_time_tweak_get, ParticleSettings_time_tweak_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_timestep = {
	{(PropertyRNA *)&rna_ParticleSettings_use_adaptive_subframes, (PropertyRNA *)&rna_ParticleSettings_time_tweak,
	-1, "timestep", 3, 0, 0, 0, 0, "Timestep",
	"The simulation timestep per frame (seconds per frame)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_timestep_get, ParticleSettings_timestep_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 10.0f, 0.0001000000f, 100.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_adaptive_subframes = {
	{(PropertyRNA *)&rna_ParticleSettings_subframes, (PropertyRNA *)&rna_ParticleSettings_timestep,
	-1, "use_adaptive_subframes", 3, 0, 0, 0, 0, "Automatic Subframes",
	"Automatically set the number of subframes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_adaptive_subframes_get, ParticleSettings_use_adaptive_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_subframes = {
	{(PropertyRNA *)&rna_ParticleSettings_courant_target, (PropertyRNA *)&rna_ParticleSettings_use_adaptive_subframes,
	-1, "subframes", 3, 0, 0, 4, 0, "Subframes",
	"Subframes to simulate for improved stability and finer granularity simulations (dt = timestep / (subframes + 1))",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, subframes), 1, NULL},
	ParticleSettings_subframes_get, ParticleSettings_subframes_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000, 0, 1000, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_courant_target = {
	{(PropertyRNA *)&rna_ParticleSettings_jitter_factor, (PropertyRNA *)&rna_ParticleSettings_subframes,
	-1, "courant_target", 3, 0, 0, 4, 0, "Adaptive Subframe Threshold",
	"The relative distance a particle can move before requiring more subframes (target Courant number); 0.01 to 0.3 is the recommended range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, courant_target), 5, NULL},
	ParticleSettings_courant_target_get, ParticleSettings_courant_target_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_ParticleSettings_jitter_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_effect_hair, (PropertyRNA *)&rna_ParticleSettings_courant_target,
	-1, "jitter_factor", 1, 0, 0, 4, 0, "Amount",
	"Amount of jitter applied to the sampling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, jitfac), 5, NULL},
	ParticleSettings_jitter_factor_get, ParticleSettings_jitter_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_effect_hair = {
	{(PropertyRNA *)&rna_ParticleSettings_count, (PropertyRNA *)&rna_ParticleSettings_jitter_factor,
	-1, "effect_hair", 3, 0, 0, 4, 0, "Stiffness",
	"Hair stiffness for effectors",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, eff_hair), 5, NULL},
	ParticleSettings_effect_hair_get, ParticleSettings_effect_hair_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_count = {
	{(PropertyRNA *)&rna_ParticleSettings_userjit, (PropertyRNA *)&rna_ParticleSettings_effect_hair,
	-1, "count", 1, 0, 0, 4, 0, "Number",
	"Total number of particles",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, totpart), 0, NULL},
	ParticleSettings_count_get, ParticleSettings_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000000, 0, INT_MAX, 1, 1000, NULL
};

IntPropertyRNA rna_ParticleSettings_userjit = {
	{(PropertyRNA *)&rna_ParticleSettings_grid_resolution, (PropertyRNA *)&rna_ParticleSettings_count,
	-1, "userjit", 1, 0, 0, 4, 0, "Particles/Face",
	"Emission locations per face (0 = automatic)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, userjit), 0, NULL},
	ParticleSettings_userjit_get, ParticleSettings_userjit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_grid_resolution = {
	{(PropertyRNA *)&rna_ParticleSettings_grid_random, (PropertyRNA *)&rna_ParticleSettings_userjit,
	-1, "grid_resolution", 1, 0, 0, 4, 0, "Resolution",
	"The resolution of the particle grid",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, grid_res), 0, NULL},
	ParticleSettings_grid_resolution_get, ParticleSettings_grid_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 50, 1, 250, 1, 10, NULL
};

FloatPropertyRNA rna_ParticleSettings_grid_random = {
	{(PropertyRNA *)&rna_ParticleSettings_effector_amount, (PropertyRNA *)&rna_ParticleSettings_grid_resolution,
	-1, "grid_random", 3, 0, 0, 4, 0, "Grid Randomness",
	"Add random offset to the grid locations",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, grid_rand), 5, NULL},
	ParticleSettings_grid_random_get, ParticleSettings_grid_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_effector_amount = {
	{(PropertyRNA *)&rna_ParticleSettings_normal_factor, (PropertyRNA *)&rna_ParticleSettings_grid_random,
	-1, "effector_amount", 3, 0, 0, 4, 0, "Effector Number",
	"How many particles are effectors (0 is all particles)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, effector_amount), 0, NULL},
	ParticleSettings_effector_amount_get, ParticleSettings_effector_amount_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 10000, 1, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_normal_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_object_factor, (PropertyRNA *)&rna_ParticleSettings_effector_amount,
	-1, "normal_factor", 3, 0, 0, 4, 0, "Normal",
	"Let the surface normal give the particle a starting velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, normfac), 5, NULL},
	ParticleSettings_normal_factor_get, ParticleSettings_normal_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_object_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_factor_random, (PropertyRNA *)&rna_ParticleSettings_normal_factor,
	-1, "object_factor", 3, 0, 0, 4, 0, "Object Velocity",
	"Let the object give the particle a starting velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, obfac), 5, NULL},
	ParticleSettings_object_factor_get, ParticleSettings_object_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_factor_random = {
	{(PropertyRNA *)&rna_ParticleSettings_particle_factor, (PropertyRNA *)&rna_ParticleSettings_object_factor,
	-1, "factor_random", 3, 0, 0, 4, 0, "Random",
	"Give the starting velocity a random variation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, randfac), 5, NULL},
	ParticleSettings_factor_random_get, ParticleSettings_factor_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 200.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_particle_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_tangent_factor, (PropertyRNA *)&rna_ParticleSettings_factor_random,
	-1, "particle_factor", 3, 0, 0, 4, 0, "Particle",
	"Let the target particle give the particle a starting velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, partfac), 5, NULL},
	ParticleSettings_particle_factor_get, ParticleSettings_particle_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_tangent_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_tangent_phase, (PropertyRNA *)&rna_ParticleSettings_particle_factor,
	-1, "tangent_factor", 3, 0, 0, 4, 0, "Tangent",
	"Let the surface tangent give the particle a starting velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, tanfac), 5, NULL},
	ParticleSettings_tangent_factor_get, ParticleSettings_tangent_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -100.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_tangent_phase = {
	{(PropertyRNA *)&rna_ParticleSettings_reactor_factor, (PropertyRNA *)&rna_ParticleSettings_tangent_factor,
	-1, "tangent_phase", 3, 0, 0, 4, 0, "Rotation",
	"Rotate the surface tangent",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, tanphase), 5, NULL},
	ParticleSettings_tangent_phase_get, ParticleSettings_tangent_phase_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_reactor_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_object_align_factor, (PropertyRNA *)&rna_ParticleSettings_tangent_phase,
	-1, "reactor_factor", 3, 0, 0, 4, 0, "Reactor",
	"Let the vector away from the target particle\'s location give the particle a starting velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, reactfac), 5, NULL},
	ParticleSettings_reactor_factor_get, ParticleSettings_reactor_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ParticleSettings_object_align_factor_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ParticleSettings_object_align_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_angular_velocity_factor, (PropertyRNA *)&rna_ParticleSettings_reactor_factor,
	-1, "object_align_factor", 3, 0, 0, 4, 0, "Object Aligned",
	"Let the emitter object orientation give the particle a starting velocity",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, ob_vel), 5, NULL},
	NULL, NULL, ParticleSettings_object_align_factor_get, ParticleSettings_object_align_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -100.0f, 100.0f, -200.0f, 200.0f, 1.0f, 3, 0.0f, rna_ParticleSettings_object_align_factor_default
};

FloatPropertyRNA rna_ParticleSettings_angular_velocity_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_phase_factor, (PropertyRNA *)&rna_ParticleSettings_object_align_factor,
	-1, "angular_velocity_factor", 3, 0, 0, 4, 0, "Angular Velocity",
	"Angular velocity amount (in radians per second)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, avefac), 5, NULL},
	ParticleSettings_angular_velocity_factor_get, ParticleSettings_angular_velocity_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -100.0f, 100.0f, -200.0f, 200.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_phase_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_rotation_factor_random, (PropertyRNA *)&rna_ParticleSettings_angular_velocity_factor,
	-1, "phase_factor", 3, 0, 0, 4, 0, "Phase",
	"Rotation around the chosen orientation axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, phasefac), 5, NULL},
	ParticleSettings_phase_factor_get, ParticleSettings_phase_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_rotation_factor_random = {
	{(PropertyRNA *)&rna_ParticleSettings_phase_factor_random, (PropertyRNA *)&rna_ParticleSettings_phase_factor,
	-1, "rotation_factor_random", 3, 0, 0, 4, 0, "Random Orientation",
	"Randomize particle orientation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, randrotfac), 5, NULL},
	ParticleSettings_rotation_factor_random_get, ParticleSettings_rotation_factor_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_phase_factor_random = {
	{(PropertyRNA *)&rna_ParticleSettings_hair_length, (PropertyRNA *)&rna_ParticleSettings_rotation_factor_random,
	-1, "phase_factor_random", 3, 0, 0, 4, 0, "Random Phase",
	"Randomize rotation around the chosen orientation axis",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, randphasefac), 5, NULL},
	ParticleSettings_phase_factor_random_get, ParticleSettings_phase_factor_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_hair_length = {
	{(PropertyRNA *)&rna_ParticleSettings_mass, (PropertyRNA *)&rna_ParticleSettings_phase_factor_random,
	-1, "hair_length", 3, 0, 0, 0, 0, "Hair Length",
	"Length of the hair",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_hair_length_get, ParticleSettings_hair_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 1000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_mass = {
	{(PropertyRNA *)&rna_ParticleSettings_particle_size, (PropertyRNA *)&rna_ParticleSettings_hair_length,
	-1, "mass", 3, 0, 0, 4, 0, "Mass",
	"Mass of the particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, mass), 5, NULL},
	ParticleSettings_mass_get, ParticleSettings_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0000000100f, 100000.0f, 1.0f, 4, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_particle_size = {
	{(PropertyRNA *)&rna_ParticleSettings_size_random, (PropertyRNA *)&rna_ParticleSettings_mass,
	-1, "particle_size", 3, 0, 0, 4, 0, "Size",
	"The size of the particles",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, size), 5, NULL},
	ParticleSettings_particle_size_get, ParticleSettings_particle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0010000000f, 100000.0f, 1.0f, 3, 0.0500000007f, NULL
};

FloatPropertyRNA rna_ParticleSettings_size_random = {
	{(PropertyRNA *)&rna_ParticleSettings_collision_collection, (PropertyRNA *)&rna_ParticleSettings_particle_size,
	-1, "size_random", 3, 0, 0, 4, 0, "Random Size",
	"Give the particle size a random variation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, randsize), 5, NULL},
	ParticleSettings_size_random_get, ParticleSettings_size_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ParticleSettings_collision_collection = {
	{(PropertyRNA *)&rna_ParticleSettings_drag_factor, (PropertyRNA *)&rna_ParticleSettings_size_random,
	-1, "collision_collection", 8388737, 1, 0, 0, 0, "Collision Collection",
	"Limit colliders to this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset_dependency, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_collision_collection_get, ParticleSettings_collision_collection_set, NULL, NULL,&RNA_Collection
};

FloatPropertyRNA rna_ParticleSettings_drag_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_brownian_factor, (PropertyRNA *)&rna_ParticleSettings_collision_collection,
	-1, "drag_factor", 3, 0, 0, 4, 0, "Drag",
	"Amount of air drag",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, dragfac), 5, NULL},
	ParticleSettings_drag_factor_get, ParticleSettings_drag_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_brownian_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_damping, (PropertyRNA *)&rna_ParticleSettings_drag_factor,
	-1, "brownian_factor", 3, 0, 0, 4, 0, "Brownian",
	"Amount of random, erratic particle movement",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, brownfac), 5, NULL},
	ParticleSettings_brownian_factor_get, ParticleSettings_brownian_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 20.0f, 0.0f, 200.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_damping = {
	{(PropertyRNA *)&rna_ParticleSettings_length_random, (PropertyRNA *)&rna_ParticleSettings_brownian_factor,
	-1, "damping", 3, 0, 0, 4, 0, "Damp",
	"Amount of damping",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, dampfac), 5, NULL},
	ParticleSettings_damping_get, ParticleSettings_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_length_random = {
	{(PropertyRNA *)&rna_ParticleSettings_child_nbr, (PropertyRNA *)&rna_ParticleSettings_damping,
	-1, "length_random", 3, 0, 0, 4, 0, "Random Length",
	"Give path length a random variation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, randlength), 5, NULL},
	ParticleSettings_length_random_get, ParticleSettings_length_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_child_nbr = {
	{(PropertyRNA *)&rna_ParticleSettings_rendered_child_count, (PropertyRNA *)&rna_ParticleSettings_length_random,
	-1, "child_nbr", 3, 0, 0, 4, 0, "Children Per Parent",
	"Number of children per parent",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, child_percent), 0, NULL},
	ParticleSettings_child_nbr_get, ParticleSettings_child_nbr_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000, 0, 100000, 1, 10, NULL
};

IntPropertyRNA rna_ParticleSettings_rendered_child_count = {
	{(PropertyRNA *)&rna_ParticleSettings_virtual_parents, (PropertyRNA *)&rna_ParticleSettings_child_nbr,
	-1, "rendered_child_count", 3, 0, 0, 4, 0, "Rendered Children",
	"Number of children per parent for rendering",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, child_render_percent), 0, NULL},
	ParticleSettings_rendered_child_count_get, ParticleSettings_rendered_child_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, 100000, 1, 100, NULL
};

FloatPropertyRNA rna_ParticleSettings_virtual_parents = {
	{(PropertyRNA *)&rna_ParticleSettings_child_size, (PropertyRNA *)&rna_ParticleSettings_rendered_child_count,
	-1, "virtual_parents", 3, 0, 0, 4, 0, "Virtual Parents",
	"Relative amount of virtual parents",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, parents), 5, NULL},
	ParticleSettings_virtual_parents_get, ParticleSettings_virtual_parents_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_size = {
	{(PropertyRNA *)&rna_ParticleSettings_child_size_random, (PropertyRNA *)&rna_ParticleSettings_virtual_parents,
	-1, "child_size", 3, 0, 0, 4, 0, "Child Size",
	"A multiplier for the child particle size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, childsize), 5, NULL},
	ParticleSettings_child_size_get, ParticleSettings_child_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0010000000f, 100000.0f, 0.1000000015f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_size_random = {
	{(PropertyRNA *)&rna_ParticleSettings_child_radius, (PropertyRNA *)&rna_ParticleSettings_child_size,
	-1, "child_size_random", 3, 0, 0, 4, 0, "Random Child Size",
	"Random variation to the size of the child particles",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, childrandsize), 5, NULL},
	ParticleSettings_child_size_random_get, ParticleSettings_child_size_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_radius = {
	{(PropertyRNA *)&rna_ParticleSettings_child_roundness, (PropertyRNA *)&rna_ParticleSettings_child_size_random,
	-1, "child_radius", 3, 0, 0, 4, 0, "Child Radius",
	"Radius of children around parent",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, childrad), 5, NULL},
	ParticleSettings_child_radius_get, ParticleSettings_child_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_roundness = {
	{(PropertyRNA *)&rna_ParticleSettings_clump_factor, (PropertyRNA *)&rna_ParticleSettings_child_radius,
	-1, "child_roundness", 3, 0, 0, 4, 0, "Child Roundness",
	"Roundness of children around parent",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, childflat), 5, NULL},
	ParticleSettings_child_roundness_get, ParticleSettings_child_roundness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_clump_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_clump_shape, (PropertyRNA *)&rna_ParticleSettings_child_roundness,
	-1, "clump_factor", 3, 0, 0, 4, 0, "Clump",
	"Amount of clumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, clumpfac), 5, NULL},
	ParticleSettings_clump_factor_get, ParticleSettings_clump_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_clump_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_use_clump_curve, (PropertyRNA *)&rna_ParticleSettings_clump_factor,
	-1, "clump_shape", 3, 0, 0, 4, 0, "Shape",
	"Shape of clumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, clumppow), 5, NULL},
	ParticleSettings_clump_shape_get, ParticleSettings_clump_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_clump_curve = {
	{(PropertyRNA *)&rna_ParticleSettings_clump_curve, (PropertyRNA *)&rna_ParticleSettings_clump_shape,
	-1, "use_clump_curve", 3, 0, 0, 0, 0, "Use Clump Curve",
	"Use a curve to define clump tapering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleSettings_use_clump_curve_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_clump_curve_get, ParticleSettings_use_clump_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_clump_curve = {
	{(PropertyRNA *)&rna_ParticleSettings_use_clump_noise, (PropertyRNA *)&rna_ParticleSettings_use_clump_curve,
	-1, "clump_curve", 8388608, 0, 0, 0, 0, "Clump Curve",
	"Curve defining clump tapering",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_clump_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_ParticleSettings_use_clump_noise = {
	{(PropertyRNA *)&rna_ParticleSettings_clump_noise_size, (PropertyRNA *)&rna_ParticleSettings_clump_curve,
	-1, "use_clump_noise", 3, 0, 0, 0, 0, "Use Clump Noise",
	"Create random clumps around the parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_clump_noise_get, ParticleSettings_use_clump_noise_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleSettings_clump_noise_size = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_amplitude, (PropertyRNA *)&rna_ParticleSettings_use_clump_noise,
	-1, "clump_noise_size", 3, 0, 0, 4, 0, "Clump Noise Size",
	"Size of clump noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, clump_noise_size), 5, NULL},
	ParticleSettings_clump_noise_size_get, ParticleSettings_clump_noise_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 10.0f, 0.0000100000f, 100000.0f, 0.1000000015f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_amplitude = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_amplitude_clump, (PropertyRNA *)&rna_ParticleSettings_clump_noise_size,
	-1, "kink_amplitude", 3, 0, 0, 4, 0, "Amplitude",
	"The amplitude of the offset",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_amp), 5, NULL},
	ParticleSettings_kink_amplitude_get, ParticleSettings_kink_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_amplitude_clump = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_amplitude_random, (PropertyRNA *)&rna_ParticleSettings_kink_amplitude,
	-1, "kink_amplitude_clump", 3, 0, 0, 4, 0, "Amplitude Clump",
	"How much clump affects kink amplitude",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_amp_clump), 5, NULL},
	ParticleSettings_kink_amplitude_clump_get, ParticleSettings_kink_amplitude_clump_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_amplitude_random = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_frequency, (PropertyRNA *)&rna_ParticleSettings_kink_amplitude_clump,
	-1, "kink_amplitude_random", 3, 0, 0, 4, 0, "Amplitude Random",
	"Random variation of the amplitude",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_amp_random), 5, NULL},
	ParticleSettings_kink_amplitude_random_get, ParticleSettings_kink_amplitude_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_frequency = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_shape, (PropertyRNA *)&rna_ParticleSettings_kink_amplitude_random,
	-1, "kink_frequency", 3, 0, 0, 4, 0, "Frequency",
	"The frequency of the offset (1/total length)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_freq), 5, NULL},
	ParticleSettings_kink_frequency_get, ParticleSettings_kink_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, 2.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_flat, (PropertyRNA *)&rna_ParticleSettings_kink_frequency,
	-1, "kink_shape", 3, 0, 0, 4, 0, "Shape",
	"Adjust the offset to the beginning/end",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_shape), 5, NULL},
	ParticleSettings_kink_shape_get, ParticleSettings_kink_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_flat = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_extra_steps, (PropertyRNA *)&rna_ParticleSettings_kink_shape,
	-1, "kink_flat", 3, 0, 0, 4, 0, "Flatness",
	"How flat the hairs are",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_flat), 5, NULL},
	ParticleSettings_kink_flat_get, ParticleSettings_kink_flat_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_kink_extra_steps = {
	{(PropertyRNA *)&rna_ParticleSettings_kink_axis_random, (PropertyRNA *)&rna_ParticleSettings_kink_flat,
	-1, "kink_extra_steps", 3, 0, 0, 4, 0, "Extra Steps",
	"Extra steps for resolution of special kink features",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_extra_steps), 0, NULL},
	ParticleSettings_kink_extra_steps_get, ParticleSettings_kink_extra_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, INT_MAX, 1, 4, NULL
};

FloatPropertyRNA rna_ParticleSettings_kink_axis_random = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_1, (PropertyRNA *)&rna_ParticleSettings_kink_extra_steps,
	-1, "kink_axis_random", 3, 0, 0, 4, 0, "Axis Random",
	"Random variation of the orientation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, kink_axis_random), 5, NULL},
	ParticleSettings_kink_axis_random_get, ParticleSettings_kink_axis_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_1 = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_1_size, (PropertyRNA *)&rna_ParticleSettings_kink_axis_random,
	-1, "roughness_1", 3, 0, 0, 4, 0, "Roughness 1",
	"Amount of location dependent roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough1), 5, NULL},
	ParticleSettings_roughness_1_get, ParticleSettings_roughness_1_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_1_size = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_2, (PropertyRNA *)&rna_ParticleSettings_roughness_1,
	-1, "roughness_1_size", 3, 0, 0, 4, 0, "Size 1",
	"Size of location dependent roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough1_size), 5, NULL},
	ParticleSettings_roughness_1_size_get, ParticleSettings_roughness_1_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 10.0f, 0.0099999998f, 100000.0f, 0.1000000015f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_2 = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_2_size, (PropertyRNA *)&rna_ParticleSettings_roughness_1_size,
	-1, "roughness_2", 3, 0, 0, 4, 0, "Roughness 2",
	"Amount of random roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough2), 5, NULL},
	ParticleSettings_roughness_2_get, ParticleSettings_roughness_2_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_2_size = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_2_threshold, (PropertyRNA *)&rna_ParticleSettings_roughness_2,
	-1, "roughness_2_size", 3, 0, 0, 4, 0, "Size 2",
	"Size of random roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough2_size), 5, NULL},
	ParticleSettings_roughness_2_size_get, ParticleSettings_roughness_2_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 10.0f, 0.0099999998f, 100000.0f, 0.1000000015f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_2_threshold = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_endpoint, (PropertyRNA *)&rna_ParticleSettings_roughness_2_size,
	-1, "roughness_2_threshold", 3, 0, 0, 4, 0, "Threshold",
	"Amount of particles left untouched by random roughness",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough2_thres), 5, NULL},
	ParticleSettings_roughness_2_threshold_get, ParticleSettings_roughness_2_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_endpoint = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_end_shape, (PropertyRNA *)&rna_ParticleSettings_roughness_2_threshold,
	-1, "roughness_endpoint", 3, 0, 0, 4, 0, "Roughness Endpoint",
	"Amount of endpoint roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough_end), 5, NULL},
	ParticleSettings_roughness_endpoint_get, ParticleSettings_roughness_endpoint_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_roughness_end_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_use_roughness_curve, (PropertyRNA *)&rna_ParticleSettings_roughness_endpoint,
	-1, "roughness_end_shape", 3, 0, 0, 4, 0, "Shape",
	"Shape of endpoint roughness",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rough_end_shape), 5, NULL},
	ParticleSettings_roughness_end_shape_get, ParticleSettings_roughness_end_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_roughness_curve = {
	{(PropertyRNA *)&rna_ParticleSettings_roughness_curve, (PropertyRNA *)&rna_ParticleSettings_roughness_end_shape,
	-1, "use_roughness_curve", 3, 0, 0, 0, 0, "Use Roughness Curve",
	"Use a curve to define roughness",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleSettings_use_roughness_curve_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_roughness_curve_get, ParticleSettings_use_roughness_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_roughness_curve = {
	{(PropertyRNA *)&rna_ParticleSettings_child_length, (PropertyRNA *)&rna_ParticleSettings_use_roughness_curve,
	-1, "roughness_curve", 8388608, 0, 0, 0, 0, "Roughness Curve",
	"Curve defining roughness",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_roughness_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_ParticleSettings_child_length = {
	{(PropertyRNA *)&rna_ParticleSettings_child_length_threshold, (PropertyRNA *)&rna_ParticleSettings_roughness_curve,
	-1, "child_length", 3, 0, 0, 4, 0, "Length",
	"Length of child paths",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, clength), 5, NULL},
	ParticleSettings_child_length_get, ParticleSettings_child_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_length_threshold = {
	{(PropertyRNA *)&rna_ParticleSettings_child_parting_factor, (PropertyRNA *)&rna_ParticleSettings_child_length,
	-1, "child_length_threshold", 3, 0, 0, 4, 0, "Threshold",
	"Amount of particles left untouched by child path length",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, clength_thres), 5, NULL},
	ParticleSettings_child_length_threshold_get, ParticleSettings_child_length_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_parting_factor = {
	{(PropertyRNA *)&rna_ParticleSettings_child_parting_min, (PropertyRNA *)&rna_ParticleSettings_child_length_threshold,
	-1, "child_parting_factor", 3, 0, 0, 4, 0, "Parting Factor",
	"Create parting in the children based on parent strands",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, parting_fac), 5, NULL},
	ParticleSettings_child_parting_factor_get, ParticleSettings_child_parting_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_parting_min = {
	{(PropertyRNA *)&rna_ParticleSettings_child_parting_max, (PropertyRNA *)&rna_ParticleSettings_child_parting_factor,
	-1, "child_parting_min", 3, 0, 0, 4, 0, "Parting Minimum",
	"Minimum root to tip angle (tip distance/root distance for long hair)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, parting_min), 5, NULL},
	ParticleSettings_child_parting_min_get, ParticleSettings_child_parting_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 180.0f, 0.0f, 180.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_child_parting_max = {
	{(PropertyRNA *)&rna_ParticleSettings_branch_threshold, (PropertyRNA *)&rna_ParticleSettings_child_parting_min,
	-1, "child_parting_max", 3, 0, 0, 4, 0, "Parting Maximum",
	"Maximum root to tip angle (tip distance/root distance for long hair)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, parting_max), 5, NULL},
	ParticleSettings_child_parting_max_get, ParticleSettings_child_parting_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 180.0f, 0.0f, 180.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_branch_threshold = {
	{(PropertyRNA *)&rna_ParticleSettings_line_length_tail, (PropertyRNA *)&rna_ParticleSettings_child_parting_max,
	-1, "branch_threshold", 3, 0, 0, 4, 0, "Threshold",
	"Threshold of branching",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, branch_thres), 5, NULL},
	ParticleSettings_branch_threshold_get, ParticleSettings_branch_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_line_length_tail = {
	{(PropertyRNA *)&rna_ParticleSettings_line_length_head, (PropertyRNA *)&rna_ParticleSettings_branch_threshold,
	-1, "line_length_tail", 3, 0, 0, 0, 0, "Tail",
	"Length of the line\'s tail",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_line_length_tail_get, ParticleSettings_line_length_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_line_length_head = {
	{(PropertyRNA *)&rna_ParticleSettings_path_start, (PropertyRNA *)&rna_ParticleSettings_line_length_tail,
	-1, "line_length_head", 3, 0, 0, 0, 0, "Head",
	"Length of the line\'s head",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_line_length_head_get, ParticleSettings_line_length_head_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_path_start = {
	{(PropertyRNA *)&rna_ParticleSettings_path_end, (PropertyRNA *)&rna_ParticleSettings_line_length_head,
	-1, "path_start", 3, 0, 0, 4, 0, "Path Start",
	"Starting time of path",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, path_start), 5, NULL},
	ParticleSettings_path_start_get, ParticleSettings_path_start_set, NULL, NULL, rna_PartSetting_pathstartend_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_path_end = {
	{(PropertyRNA *)&rna_ParticleSettings_trail_count, (PropertyRNA *)&rna_ParticleSettings_path_start,
	-1, "path_end", 3, 0, 0, 4, 0, "Path End",
	"End time of path",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, path_end), 5, NULL},
	ParticleSettings_path_end_get, ParticleSettings_path_end_set, NULL, NULL, rna_PartSetting_pathstartend_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_ParticleSettings_trail_count = {
	{(PropertyRNA *)&rna_ParticleSettings_keyed_loops, (PropertyRNA *)&rna_ParticleSettings_path_end,
	-1, "trail_count", 3, 0, 0, 4, 0, "Trail Count",
	"Number of trail particles",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, trail_count), 0, NULL},
	ParticleSettings_trail_count_get, ParticleSettings_trail_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 100000, 1, 0, NULL
};

IntPropertyRNA rna_ParticleSettings_keyed_loops = {
	{(PropertyRNA *)&rna_ParticleSettings_use_modifier_stack, (PropertyRNA *)&rna_ParticleSettings_trail_count,
	-1, "keyed_loops", 3, 0, 0, 4, 0, "Loop Count",
	"Number of times the keys are looped",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, keyed_loops), 0, NULL},
	ParticleSettings_keyed_loops_get, ParticleSettings_keyed_loops_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 10000, 1, 1, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_modifier_stack = {
	{(PropertyRNA *)&rna_ParticleSettings_instance_collection, (PropertyRNA *)&rna_ParticleSettings_keyed_loops,
	-1, "use_modifier_stack", 3, 0, 0, 4, 0, "Use Modifier Stack",
	"Emit particles from mesh with modifiers applied (must use same subdivision surface level for viewport and render for correct results)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_change_type, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, use_modifier_stack), 1, NULL},
	ParticleSettings_use_modifier_stack_get, ParticleSettings_use_modifier_stack_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_instance_collection = {
	{(PropertyRNA *)&rna_ParticleSettings_instance_weights, (PropertyRNA *)&rna_ParticleSettings_use_modifier_stack,
	-1, "instance_collection", 8388801, 1, 0, 0, 0, "Instance Collection",
	"Show objects in this collection in place of particles",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_count, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_instance_collection_get, ParticleSettings_instance_collection_set, NULL, NULL,&RNA_Collection
};

CollectionPropertyRNA rna_ParticleSettings_instance_weights = {
	{(PropertyRNA *)&rna_ParticleSettings_active_instanceweight, (PropertyRNA *)&rna_ParticleSettings_instance_collection,
	-1, "instance_weights", 0, 0, 0, 0, 0, "Instance Collection Weights",
	"Weights for all of the objects in the instance collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_instance_weights_begin, ParticleSettings_instance_weights_next, ParticleSettings_instance_weights_end, ParticleSettings_instance_weights_get, NULL, ParticleSettings_instance_weights_lookup_int, ParticleSettings_instance_weights_lookup_string, NULL, &RNA_ParticleDupliWeight
};

PointerPropertyRNA rna_ParticleSettings_active_instanceweight = {
	{(PropertyRNA *)&rna_ParticleSettings_active_instanceweight_index, (PropertyRNA *)&rna_ParticleSettings_instance_weights,
	-1, "active_instanceweight", 8388608, 0, 0, 0, 0, "Active Instance Object",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_active_instanceweight_get, NULL, NULL, NULL,&RNA_ParticleDupliWeight
};

IntPropertyRNA rna_ParticleSettings_active_instanceweight_index = {
	{(PropertyRNA *)&rna_ParticleSettings_instance_object, (PropertyRNA *)&rna_ParticleSettings_active_instanceweight,
	-1, "active_instanceweight_index", 3, 0, 0, 0, 0, "Active Instance Object Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_active_instanceweight_index_get, ParticleSettings_active_instanceweight_index_set, NULL, NULL, rna_ParticleDupliWeight_active_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_instance_object = {
	{(PropertyRNA *)&rna_ParticleSettings_boids, (PropertyRNA *)&rna_ParticleSettings_active_instanceweight_index,
	-1, "instance_object", 8388737, 1, 0, 0, 0, "Instance Object",
	"Show this object in place of particles",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_dependency, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_instance_object_get, ParticleSettings_instance_object_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleSettings_boids = {
	{(PropertyRNA *)&rna_ParticleSettings_fluid, (PropertyRNA *)&rna_ParticleSettings_instance_object,
	-1, "boids", 8388608, 0, 0, 0, 0, "Boid Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_boids_get, NULL, NULL, NULL,&RNA_BoidSettings
};

PointerPropertyRNA rna_ParticleSettings_fluid = {
	{(PropertyRNA *)&rna_ParticleSettings_effector_weights, (PropertyRNA *)&rna_ParticleSettings_boids,
	-1, "fluid", 8388608, 0, 0, 0, 0, "SPH Fluid Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_fluid_get, NULL, NULL, NULL,&RNA_SPHFluidSettings
};

PointerPropertyRNA rna_ParticleSettings_effector_weights = {
	{(PropertyRNA *)&rna_ParticleSettings_animation_data, (PropertyRNA *)&rna_ParticleSettings_fluid,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

PointerPropertyRNA rna_ParticleSettings_animation_data = {
	{(PropertyRNA *)&rna_ParticleSettings_force_field_1, (PropertyRNA *)&rna_ParticleSettings_effector_weights,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	ParticleSettings_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_ParticleSettings_force_field_1 = {
	{(PropertyRNA *)&rna_ParticleSettings_force_field_2, (PropertyRNA *)&rna_ParticleSettings_animation_data,
	-1, "force_field_1", 8388608, 1, 0, 0, 0, "Force Field 1",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_force_field_1_get, NULL, NULL, NULL,&RNA_FieldSettings
};

PointerPropertyRNA rna_ParticleSettings_force_field_2 = {
	{(PropertyRNA *)&rna_ParticleSettings_twist, (PropertyRNA *)&rna_ParticleSettings_force_field_1,
	-1, "force_field_2", 8388608, 1, 0, 0, 0, "Force Field 2",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_force_field_2_get, NULL, NULL, NULL,&RNA_FieldSettings
};

FloatPropertyRNA rna_ParticleSettings_twist = {
	{(PropertyRNA *)&rna_ParticleSettings_use_twist_curve, (PropertyRNA *)&rna_ParticleSettings_force_field_2,
	-1, "twist", 3, 0, 0, 4, 0, "Twist",
	"Number of turns around parent along the strand",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, twist), 5, NULL},
	ParticleSettings_twist_get, ParticleSettings_twist_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ParticleSettings_use_twist_curve = {
	{(PropertyRNA *)&rna_ParticleSettings_twist_curve, (PropertyRNA *)&rna_ParticleSettings_twist,
	-1, "use_twist_curve", 3, 0, 0, 0, 0, "Use Twist Curve",
	"Use a curve to define twist",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleSettings_use_twist_curve_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_twist_curve_get, ParticleSettings_use_twist_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleSettings_twist_curve = {
	{(PropertyRNA *)&rna_ParticleSettings_use_close_tip, (PropertyRNA *)&rna_ParticleSettings_use_twist_curve,
	-1, "twist_curve", 8388608, 0, 0, 0, 0, "Twist Curve",
	"Curve defining twist",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo_child, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_twist_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_ParticleSettings_use_close_tip = {
	{(PropertyRNA *)&rna_ParticleSettings_shape, (PropertyRNA *)&rna_ParticleSettings_twist_curve,
	-1, "use_close_tip", 3, 0, 0, 0, 0, "Close Tip",
	"Set tip radius to zero",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettings_use_close_tip_get, ParticleSettings_use_close_tip_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_ParticleSettings_shape = {
	{(PropertyRNA *)&rna_ParticleSettings_root_radius, (PropertyRNA *)&rna_ParticleSettings_use_close_tip,
	-1, "shape", 3, 0, 0, 4, 0, "Shape",
	"Strand shape parameter",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, shape), 5, NULL},
	ParticleSettings_shape_get, ParticleSettings_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_root_radius = {
	{(PropertyRNA *)&rna_ParticleSettings_tip_radius, (PropertyRNA *)&rna_ParticleSettings_shape,
	-1, "root_radius", 3, 0, 0, 4, 0, "Root Diameter",
	"Strand diameter width at the root",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rad_root), 5, NULL},
	ParticleSettings_root_radius_get, ParticleSettings_root_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_tip_radius = {
	{(PropertyRNA *)&rna_ParticleSettings_radius_scale, (PropertyRNA *)&rna_ParticleSettings_root_radius,
	-1, "tip_radius", 3, 0, 0, 4, 0, "Tip Diameter",
	"Strand diameter width at the tip",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rad_tip), 5, NULL},
	ParticleSettings_tip_radius_get, ParticleSettings_tip_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleSettings_radius_scale = {
	{NULL, (PropertyRNA *)&rna_ParticleSettings_tip_radius,
	-1, "radius_scale", 3, 0, 0, 4, 0, "Diameter Scale",
	"Multiplier of diameter properties",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Particle_redo, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleSettings, rad_scale), 5, NULL},
	ParticleSettings_radius_scale_get, ParticleSettings_radius_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, 0.0099999998f, NULL
};

StructRNA RNA_ParticleSettings = {
	{(ContainerRNA *)&RNA_ParticleSettingsTextureSlots, (ContainerRNA *)&RNA_ParticleSettingsTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettings_texture_slots, (PropertyRNA *)&rna_ParticleSettings_radius_scale}},
	"ParticleSettings", NULL, NULL, 519, NULL, "Particle Settings",
	"Particle settings, reusable by multiple particle systems",
	"*", 169,
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

/* Texture Slots */
CollectionPropertyRNA rna_ParticleSettingsTextureSlots_rna_properties = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlots_rna_properties_begin, ParticleSettingsTextureSlots_rna_properties_next, ParticleSettingsTextureSlots_rna_properties_end, ParticleSettingsTextureSlots_rna_properties_get, NULL, NULL, ParticleSettingsTextureSlots_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleSettingsTextureSlots_rna_type = {
	{NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSettingsTextureSlots_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ParticleSettingsTextureSlots_add_mtex = {
	{NULL, NULL,
	-1, "mtex", 8388608, 0, 2, 0, 0, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettingsTextureSlot
};

FunctionRNA rna_ParticleSettingsTextureSlots_add_func = {
	{(FunctionRNA *)&rna_ParticleSettingsTextureSlots_create_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_add_mtex, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_add_mtex}},
	"add", 2073, "add",
	ParticleSettingsTextureSlots_add_call,
	(PropertyRNA *)&rna_ParticleSettingsTextureSlots_add_mtex
};

IntPropertyRNA rna_ParticleSettingsTextureSlots_create_index = {
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_mtex, NULL,
	-1, "index", 3, 0, 1, 0, 0, "Index",
	"Slot index to initialize",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_ParticleSettingsTextureSlots_create_mtex = {
	{NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_index,
	-1, "mtex", 8388608, 0, 2, 0, 0, "",
	"The newly initialized mtex",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettingsTextureSlot
};

FunctionRNA rna_ParticleSettingsTextureSlots_create_func = {
	{(FunctionRNA *)&rna_ParticleSettingsTextureSlots_clear_func, (FunctionRNA *)&rna_ParticleSettingsTextureSlots_add_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_index, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_mtex}},
	"create", 2073, "create",
	ParticleSettingsTextureSlots_create_call,
	(PropertyRNA *)&rna_ParticleSettingsTextureSlots_create_mtex
};

IntPropertyRNA rna_ParticleSettingsTextureSlots_clear_index = {
	{NULL, NULL,
	-1, "index", 3, 0, 1, 0, 0, "Index",
	"Slot index to clear",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_ParticleSettingsTextureSlots_clear_func = {
	{NULL, (FunctionRNA *)&rna_ParticleSettingsTextureSlots_create_func,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_clear_index, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_clear_index}},
	"clear", 2073, "clear",
	ParticleSettingsTextureSlots_clear_call,
	NULL
};

StructRNA RNA_ParticleSettingsTextureSlots = {
	{(ContainerRNA *)&RNA_Point, (ContainerRNA *)&RNA_ParticleSettings,
	NULL,
	{(PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_type}},
	"ParticleSettingsTextureSlots", NULL, NULL, 516, NULL, "Texture Slots",
	"Collection of texture slots",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleSettingsTextureSlots_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ParticleSettingsTextureSlots_add_func, (FunctionRNA *)&rna_ParticleSettingsTextureSlots_clear_func}
};

