
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

#include "rna_brush.c"

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

EnumPropertyRNA rna_Brush_blend;
EnumPropertyRNA rna_Brush_sculpt_tool;
EnumPropertyRNA rna_Brush_uv_sculpt_tool;
EnumPropertyRNA rna_Brush_vertex_tool;
EnumPropertyRNA rna_Brush_weight_tool;
EnumPropertyRNA rna_Brush_image_tool;
EnumPropertyRNA rna_Brush_gpencil_tool;
EnumPropertyRNA rna_Brush_gpencil_vertex_tool;
EnumPropertyRNA rna_Brush_gpencil_sculpt_tool;
EnumPropertyRNA rna_Brush_gpencil_weight_tool;
EnumPropertyRNA rna_Brush_curves_sculpt_tool;
EnumPropertyRNA rna_Brush_direction;
EnumPropertyRNA rna_Brush_stroke_method;
EnumPropertyRNA rna_Brush_sculpt_plane;
EnumPropertyRNA rna_Brush_mask_tool;
EnumPropertyRNA rna_Brush_curve_preset;
EnumPropertyRNA rna_Brush_deform_target;
EnumPropertyRNA rna_Brush_elastic_deform_type;
EnumPropertyRNA rna_Brush_snake_hook_deform_type;
EnumPropertyRNA rna_Brush_cloth_deform_type;
EnumPropertyRNA rna_Brush_cloth_force_falloff_type;
EnumPropertyRNA rna_Brush_cloth_simulation_area_type;
EnumPropertyRNA rna_Brush_boundary_falloff_type;
EnumPropertyRNA rna_Brush_smooth_deform_type;
EnumPropertyRNA rna_Brush_smear_deform_type;
EnumPropertyRNA rna_Brush_slide_deform_type;
EnumPropertyRNA rna_Brush_boundary_deform_type;
EnumPropertyRNA rna_Brush_pose_deform_type;
EnumPropertyRNA rna_Brush_pose_origin_type;
EnumPropertyRNA rna_Brush_jitter_unit;
EnumPropertyRNA rna_Brush_falloff_shape;
IntPropertyRNA rna_Brush_size;
FloatPropertyRNA rna_Brush_unprojected_radius;
FloatPropertyRNA rna_Brush_jitter;
IntPropertyRNA rna_Brush_jitter_absolute;
IntPropertyRNA rna_Brush_spacing;
IntPropertyRNA rna_Brush_grad_spacing;
IntPropertyRNA rna_Brush_smooth_stroke_radius;
FloatPropertyRNA rna_Brush_smooth_stroke_factor;
FloatPropertyRNA rna_Brush_rate;
FloatPropertyRNA rna_Brush_color;
FloatPropertyRNA rna_Brush_secondary_color;
FloatPropertyRNA rna_Brush_weight;
FloatPropertyRNA rna_Brush_strength;
FloatPropertyRNA rna_Brush_flow;
FloatPropertyRNA rna_Brush_wet_mix;
FloatPropertyRNA rna_Brush_wet_persistence;
FloatPropertyRNA rna_Brush_density;
FloatPropertyRNA rna_Brush_tip_scale_x;
BoolPropertyRNA rna_Brush_use_hardness_pressure;
BoolPropertyRNA rna_Brush_invert_hardness_pressure;
BoolPropertyRNA rna_Brush_use_flow_pressure;
BoolPropertyRNA rna_Brush_invert_flow_pressure;
BoolPropertyRNA rna_Brush_use_wet_mix_pressure;
BoolPropertyRNA rna_Brush_invert_wet_mix_pressure;
BoolPropertyRNA rna_Brush_use_wet_persistence_pressure;
BoolPropertyRNA rna_Brush_invert_wet_persistence_pressure;
BoolPropertyRNA rna_Brush_use_density_pressure;
BoolPropertyRNA rna_Brush_invert_density_pressure;
FloatPropertyRNA rna_Brush_dash_ratio;
IntPropertyRNA rna_Brush_dash_samples;
FloatPropertyRNA rna_Brush_plane_offset;
FloatPropertyRNA rna_Brush_plane_trim;
FloatPropertyRNA rna_Brush_height;
FloatPropertyRNA rna_Brush_texture_sample_bias;
FloatPropertyRNA rna_Brush_normal_weight;
FloatPropertyRNA rna_Brush_elastic_deform_volume_preservation;
FloatPropertyRNA rna_Brush_rake_factor;
FloatPropertyRNA rna_Brush_crease_pinch_factor;
FloatPropertyRNA rna_Brush_pose_offset;
FloatPropertyRNA rna_Brush_disconnected_distance_max;
FloatPropertyRNA rna_Brush_boundary_offset;
FloatPropertyRNA rna_Brush_surface_smooth_shape_preservation;
FloatPropertyRNA rna_Brush_surface_smooth_current_vertex;
IntPropertyRNA rna_Brush_surface_smooth_iterations;
FloatPropertyRNA rna_Brush_multiplane_scrape_angle;
IntPropertyRNA rna_Brush_pose_smooth_iterations;
IntPropertyRNA rna_Brush_pose_ik_segments;
FloatPropertyRNA rna_Brush_tip_roundness;
FloatPropertyRNA rna_Brush_cloth_mass;
FloatPropertyRNA rna_Brush_cloth_damping;
FloatPropertyRNA rna_Brush_cloth_sim_limit;
FloatPropertyRNA rna_Brush_cloth_sim_falloff;
FloatPropertyRNA rna_Brush_cloth_constraint_softbody_strength;
FloatPropertyRNA rna_Brush_hardness;
IntPropertyRNA rna_Brush_automasking_boundary_edges_propagation_steps;
FloatPropertyRNA rna_Brush_auto_smooth_factor;
FloatPropertyRNA rna_Brush_topology_rake_factor;
FloatPropertyRNA rna_Brush_tilt_strength_factor;
FloatPropertyRNA rna_Brush_normal_radius_factor;
FloatPropertyRNA rna_Brush_area_radius_factor;
FloatPropertyRNA rna_Brush_wet_paint_radius_factor;
FloatPropertyRNA rna_Brush_stencil_pos;
FloatPropertyRNA rna_Brush_stencil_dimension;
FloatPropertyRNA rna_Brush_mask_stencil_pos;
FloatPropertyRNA rna_Brush_mask_stencil_dimension;
FloatPropertyRNA rna_Brush_sharp_threshold;
FloatPropertyRNA rna_Brush_fill_threshold;
IntPropertyRNA rna_Brush_blur_kernel_radius;
EnumPropertyRNA rna_Brush_blur_mode;
FloatPropertyRNA rna_Brush_falloff_angle;
BoolPropertyRNA rna_Brush_use_airbrush;
BoolPropertyRNA rna_Brush_use_original_normal;
BoolPropertyRNA rna_Brush_use_original_plane;
BoolPropertyRNA rna_Brush_use_automasking_topology;
BoolPropertyRNA rna_Brush_use_automasking_face_sets;
BoolPropertyRNA rna_Brush_use_automasking_boundary_edges;
BoolPropertyRNA rna_Brush_use_automasking_boundary_face_sets;
EnumPropertyRNA rna_Brush_use_scene_spacing;
BoolPropertyRNA rna_Brush_use_grab_active_vertex;
BoolPropertyRNA rna_Brush_use_grab_silhouette;
BoolPropertyRNA rna_Brush_use_paint_antialiasing;
BoolPropertyRNA rna_Brush_use_multiplane_scrape_dynamic;
BoolPropertyRNA rna_Brush_show_multiplane_scrape_planes_preview;
BoolPropertyRNA rna_Brush_use_pose_ik_anchored;
BoolPropertyRNA rna_Brush_use_pose_lock_rotation;
BoolPropertyRNA rna_Brush_use_connected_only;
BoolPropertyRNA rna_Brush_use_cloth_pin_simulation_boundary;
BoolPropertyRNA rna_Brush_use_cloth_collision;
BoolPropertyRNA rna_Brush_invert_to_scrape_fill;
BoolPropertyRNA rna_Brush_use_pressure_strength;
BoolPropertyRNA rna_Brush_use_offset_pressure;
BoolPropertyRNA rna_Brush_use_pressure_area_radius;
BoolPropertyRNA rna_Brush_use_pressure_size;
BoolPropertyRNA rna_Brush_use_pressure_jitter;
BoolPropertyRNA rna_Brush_use_pressure_spacing;
EnumPropertyRNA rna_Brush_use_pressure_masking;
BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure;
BoolPropertyRNA rna_Brush_use_plane_trim;
BoolPropertyRNA rna_Brush_use_frontface;
BoolPropertyRNA rna_Brush_use_frontface_falloff;
BoolPropertyRNA rna_Brush_use_anchor;
BoolPropertyRNA rna_Brush_use_space;
BoolPropertyRNA rna_Brush_use_line;
BoolPropertyRNA rna_Brush_use_curve;
BoolPropertyRNA rna_Brush_use_smooth_stroke;
BoolPropertyRNA rna_Brush_use_persistent;
BoolPropertyRNA rna_Brush_use_accumulate;
BoolPropertyRNA rna_Brush_use_space_attenuation;
BoolPropertyRNA rna_Brush_use_adaptive_space;
EnumPropertyRNA rna_Brush_use_locked_size;
EnumPropertyRNA rna_Brush_color_type;
BoolPropertyRNA rna_Brush_use_edge_to_edge;
BoolPropertyRNA rna_Brush_use_restore_mesh;
BoolPropertyRNA rna_Brush_use_alpha;
PointerPropertyRNA rna_Brush_curve;
PointerPropertyRNA rna_Brush_paint_curve;
PointerPropertyRNA rna_Brush_gradient;
EnumPropertyRNA rna_Brush_gradient_stroke_mode;
EnumPropertyRNA rna_Brush_gradient_fill_mode;
BoolPropertyRNA rna_Brush_use_primary_overlay;
BoolPropertyRNA rna_Brush_use_secondary_overlay;
BoolPropertyRNA rna_Brush_use_cursor_overlay;
BoolPropertyRNA rna_Brush_use_cursor_overlay_override;
BoolPropertyRNA rna_Brush_use_primary_overlay_override;
BoolPropertyRNA rna_Brush_use_secondary_overlay_override;
BoolPropertyRNA rna_Brush_use_paint_sculpt;
BoolPropertyRNA rna_Brush_use_paint_uv_sculpt;
BoolPropertyRNA rna_Brush_use_paint_vertex;
BoolPropertyRNA rna_Brush_use_paint_weight;
BoolPropertyRNA rna_Brush_use_paint_image;
BoolPropertyRNA rna_Brush_use_paint_grease_pencil;
BoolPropertyRNA rna_Brush_use_vertex_grease_pencil;
PointerPropertyRNA rna_Brush_texture_slot;
PointerPropertyRNA rna_Brush_texture;
PointerPropertyRNA rna_Brush_mask_texture_slot;
PointerPropertyRNA rna_Brush_mask_texture;
IntPropertyRNA rna_Brush_texture_overlay_alpha;
IntPropertyRNA rna_Brush_mask_overlay_alpha;
IntPropertyRNA rna_Brush_cursor_overlay_alpha;
FloatPropertyRNA rna_Brush_cursor_color_add;
FloatPropertyRNA rna_Brush_cursor_color_subtract;
BoolPropertyRNA rna_Brush_use_custom_icon;
StringPropertyRNA rna_Brush_icon_filepath;
PointerPropertyRNA rna_Brush_clone_image;
FloatPropertyRNA rna_Brush_clone_alpha;
FloatPropertyRNA rna_Brush_clone_offset;
PointerPropertyRNA rna_Brush_brush_capabilities;
PointerPropertyRNA rna_Brush_sculpt_capabilities;
PointerPropertyRNA rna_Brush_image_paint_capabilities;
PointerPropertyRNA rna_Brush_vertex_paint_capabilities;
PointerPropertyRNA rna_Brush_weight_paint_capabilities;
PointerPropertyRNA rna_Brush_gpencil_settings;
PointerPropertyRNA rna_Brush_curves_sculpt_settings;

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



CollectionPropertyRNA rna_BrushCapabilities_rna_properties;
PointerPropertyRNA rna_BrushCapabilities_rna_type;
BoolPropertyRNA rna_BrushCapabilities_has_overlay;
BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle;
BoolPropertyRNA rna_BrushCapabilities_has_spacing;
BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke;


CollectionPropertyRNA rna_BrushCapabilitiesSculpt_rna_properties;
PointerPropertyRNA rna_BrushCapabilitiesSculpt_rna_type;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_accumulate;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_auto_smooth;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_topology_rake;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_height;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_jitter;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_normal_weight;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_rake_factor;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_persistence;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_pinch_factor;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_offset;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_random_texture_angle;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_sculpt_plane;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_color;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_secondary_color;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_smooth_stroke;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_space_attenuation;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_strength_pressure;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_direction;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_gravity;
BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_tilt;


CollectionPropertyRNA rna_BrushCapabilitiesImagePaint_rna_properties;
PointerPropertyRNA rna_BrushCapabilitiesImagePaint_rna_type;
BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_accumulate;
BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_space_attenuation;
BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_radius;
BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_color;


CollectionPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_properties;
PointerPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_type;
BoolPropertyRNA rna_BrushCapabilitiesVertexPaint_has_color;


CollectionPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_properties;
PointerPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_type;
BoolPropertyRNA rna_BrushCapabilitiesWeightPaint_has_weight;


CollectionPropertyRNA rna_BrushGpencilSettings_rna_properties;
PointerPropertyRNA rna_BrushGpencilSettings_rna_type;
FloatPropertyRNA rna_BrushGpencilSettings_pen_strength;
FloatPropertyRNA rna_BrushGpencilSettings_pen_jitter;
FloatPropertyRNA rna_BrushGpencilSettings_random_pressure;
FloatPropertyRNA rna_BrushGpencilSettings_random_strength;
FloatPropertyRNA rna_BrushGpencilSettings_angle;
FloatPropertyRNA rna_BrushGpencilSettings_angle_factor;
FloatPropertyRNA rna_BrushGpencilSettings_pen_smooth_factor;
IntPropertyRNA rna_BrushGpencilSettings_pen_smooth_steps;
IntPropertyRNA rna_BrushGpencilSettings_pen_subdivision_steps;
FloatPropertyRNA rna_BrushGpencilSettings_simplify_factor;
PointerPropertyRNA rna_BrushGpencilSettings_curve_sensitivity;
PointerPropertyRNA rna_BrushGpencilSettings_curve_strength;
PointerPropertyRNA rna_BrushGpencilSettings_curve_jitter;
PointerPropertyRNA rna_BrushGpencilSettings_curve_random_pressure;
PointerPropertyRNA rna_BrushGpencilSettings_curve_random_strength;
PointerPropertyRNA rna_BrushGpencilSettings_curve_random_uv;
PointerPropertyRNA rna_BrushGpencilSettings_curve_random_hue;
PointerPropertyRNA rna_BrushGpencilSettings_curve_random_saturation;
PointerPropertyRNA rna_BrushGpencilSettings_curve_random_value;
FloatPropertyRNA rna_BrushGpencilSettings_fill_threshold;
IntPropertyRNA rna_BrushGpencilSettings_fill_leak;
FloatPropertyRNA rna_BrushGpencilSettings_fill_factor;
IntPropertyRNA rna_BrushGpencilSettings_fill_simplify_level;
FloatPropertyRNA rna_BrushGpencilSettings_uv_random;
FloatPropertyRNA rna_BrushGpencilSettings_hardness;
FloatPropertyRNA rna_BrushGpencilSettings_aspect;
IntPropertyRNA rna_BrushGpencilSettings_input_samples;
FloatPropertyRNA rna_BrushGpencilSettings_active_smooth_factor;
FloatPropertyRNA rna_BrushGpencilSettings_eraser_strength_factor;
FloatPropertyRNA rna_BrushGpencilSettings_eraser_thickness_factor;
EnumPropertyRNA rna_BrushGpencilSettings_gpencil_paint_icon;
EnumPropertyRNA rna_BrushGpencilSettings_gpencil_sculpt_icon;
EnumPropertyRNA rna_BrushGpencilSettings_gpencil_weight_icon;
EnumPropertyRNA rna_BrushGpencilSettings_gpencil_vertex_icon;
EnumPropertyRNA rna_BrushGpencilSettings_vertex_mode;
FloatPropertyRNA rna_BrushGpencilSettings_vertex_color_factor;
FloatPropertyRNA rna_BrushGpencilSettings_random_hue_factor;
FloatPropertyRNA rna_BrushGpencilSettings_random_saturation_factor;
FloatPropertyRNA rna_BrushGpencilSettings_random_value_factor;
FloatPropertyRNA rna_BrushGpencilSettings_extend_stroke_factor;
IntPropertyRNA rna_BrushGpencilSettings_dilate;
BoolPropertyRNA rna_BrushGpencilSettings_use_pressure;
BoolPropertyRNA rna_BrushGpencilSettings_use_strength_pressure;
BoolPropertyRNA rna_BrushGpencilSettings_use_jitter_pressure;
BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_hue;
BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_sat;
BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_val;
BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_radius;
BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_strength;
BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_uv;
BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_hue;
BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_sat;
BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_val;
BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_radius;
BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_strength;
BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_uv;
BoolPropertyRNA rna_BrushGpencilSettings_use_settings_stabilizer;
EnumPropertyRNA rna_BrushGpencilSettings_eraser_mode;
EnumPropertyRNA rna_BrushGpencilSettings_caps_type;
EnumPropertyRNA rna_BrushGpencilSettings_fill_draw_mode;
EnumPropertyRNA rna_BrushGpencilSettings_fill_layer_mode;
EnumPropertyRNA rna_BrushGpencilSettings_fill_direction;
BoolPropertyRNA rna_BrushGpencilSettings_pin_draw_mode;
EnumPropertyRNA rna_BrushGpencilSettings_brush_draw_mode;
BoolPropertyRNA rna_BrushGpencilSettings_use_trim;
EnumPropertyRNA rna_BrushGpencilSettings_direction;
BoolPropertyRNA rna_BrushGpencilSettings_use_edit_position;
BoolPropertyRNA rna_BrushGpencilSettings_use_edit_strength;
BoolPropertyRNA rna_BrushGpencilSettings_use_edit_thickness;
BoolPropertyRNA rna_BrushGpencilSettings_use_edit_uv;
BoolPropertyRNA rna_BrushGpencilSettings_use_automasking_stroke;
BoolPropertyRNA rna_BrushGpencilSettings_use_automasking_layer;
BoolPropertyRNA rna_BrushGpencilSettings_use_automasking_material;
PointerPropertyRNA rna_BrushGpencilSettings_material;
BoolPropertyRNA rna_BrushGpencilSettings_show_fill_boundary;
BoolPropertyRNA rna_BrushGpencilSettings_show_fill_extend;
BoolPropertyRNA rna_BrushGpencilSettings_show_fill;
BoolPropertyRNA rna_BrushGpencilSettings_use_fill_limit;
BoolPropertyRNA rna_BrushGpencilSettings_use_default_eraser;
BoolPropertyRNA rna_BrushGpencilSettings_use_settings_postprocess;
BoolPropertyRNA rna_BrushGpencilSettings_use_settings_random;
BoolPropertyRNA rna_BrushGpencilSettings_use_material_pin;
BoolPropertyRNA rna_BrushGpencilSettings_show_lasso;
BoolPropertyRNA rna_BrushGpencilSettings_use_occlude_eraser;


CollectionPropertyRNA rna_BrushCurvesSculptSettings_rna_properties;
PointerPropertyRNA rna_BrushCurvesSculptSettings_rna_type;
IntPropertyRNA rna_BrushCurvesSculptSettings_add_amount;
IntPropertyRNA rna_BrushCurvesSculptSettings_points_per_curve;
BoolPropertyRNA rna_BrushCurvesSculptSettings_scale_uniform;
FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_length;
BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_length;
BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_point_count;
BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_shape;
FloatPropertyRNA rna_BrushCurvesSculptSettings_curve_length;
FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_distance;
IntPropertyRNA rna_BrushCurvesSculptSettings_density_add_attempts;
EnumPropertyRNA rna_BrushCurvesSculptSettings_density_mode;


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

FloatPropertyRNA rna_BrushTextureSlot_angle;
EnumPropertyRNA rna_BrushTextureSlot_map_mode;
EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode;
BoolPropertyRNA rna_BrushTextureSlot_use_rake;
BoolPropertyRNA rna_BrushTextureSlot_use_random;
FloatPropertyRNA rna_BrushTextureSlot_random_angle;
BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle_source;
BoolPropertyRNA rna_BrushTextureSlot_has_random_texture_angle;
BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle;


extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;
extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;

FloatPropertyRNA rna_OperatorStrokeElement_location;
FloatPropertyRNA rna_OperatorStrokeElement_mouse;
FloatPropertyRNA rna_OperatorStrokeElement_mouse_event;
FloatPropertyRNA rna_OperatorStrokeElement_pressure;
FloatPropertyRNA rna_OperatorStrokeElement_size;
BoolPropertyRNA rna_OperatorStrokeElement_pen_flip;
FloatPropertyRNA rna_OperatorStrokeElement_x_tilt;
FloatPropertyRNA rna_OperatorStrokeElement_y_tilt;
FloatPropertyRNA rna_OperatorStrokeElement_time;
BoolPropertyRNA rna_OperatorStrokeElement_is_start;

int Brush_blend_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blend);
}

void Brush_blend_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->blend = value;
}

int Brush_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->sculpt_tool);
}

void Brush_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->sculpt_tool = value;
}

int Brush_uv_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->uv_sculpt_tool);
}

void Brush_uv_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->uv_sculpt_tool = value;
}

int Brush_vertex_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->vertexpaint_tool);
}

void Brush_vertex_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->vertexpaint_tool = value;
}

int Brush_weight_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->weightpaint_tool);
}

void Brush_weight_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->weightpaint_tool = value;
}

int Brush_image_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->imagepaint_tool);
}

void Brush_image_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->imagepaint_tool = value;
}

int Brush_gpencil_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_tool);
}

void Brush_gpencil_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_tool = value;
}

int Brush_gpencil_vertex_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_vertex_tool);
}

void Brush_gpencil_vertex_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_vertex_tool = value;
}

int Brush_gpencil_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_sculpt_tool);
}

void Brush_gpencil_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_sculpt_tool = value;
}

int Brush_gpencil_weight_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gpencil_weight_tool);
}

void Brush_gpencil_weight_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gpencil_weight_tool = value;
}

int Brush_curves_sculpt_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->curves_sculpt_tool);
}

void Brush_curves_sculpt_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->curves_sculpt_tool = value;
}

int Brush_direction_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 512);
}

void Brush_direction_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~512;
    data->flag |= value;
}

int Brush_stroke_method_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & -1602222847);
}

void Brush_stroke_method_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~-1602222847;
    data->flag |= value;
}

int Brush_sculpt_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->sculpt_plane);
}

void Brush_sculpt_plane_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->sculpt_plane = value;
}

int Brush_mask_tool_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_tool);
}

void Brush_mask_tool_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->mask_tool = value;
}

int Brush_curve_preset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->curve_preset);
}

void Brush_curve_preset_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->curve_preset = value;
}

int Brush_deform_target_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->deform_target);
}

void Brush_deform_target_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->deform_target = value;
}

int Brush_elastic_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->elastic_deform_type);
}

void Brush_elastic_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->elastic_deform_type = value;
}

int Brush_snake_hook_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->snake_hook_deform_type);
}

void Brush_snake_hook_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->snake_hook_deform_type = value;
}

int Brush_cloth_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_deform_type);
}

void Brush_cloth_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_deform_type = value;
}

int Brush_cloth_force_falloff_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_force_falloff_type);
}

void Brush_cloth_force_falloff_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_force_falloff_type = value;
}

int Brush_cloth_simulation_area_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cloth_simulation_area_type);
}

void Brush_cloth_simulation_area_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_simulation_area_type = value;
}

int Brush_boundary_falloff_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->boundary_falloff_type);
}

void Brush_boundary_falloff_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->boundary_falloff_type = value;
}

int Brush_smooth_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smooth_deform_type);
}

void Brush_smooth_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smooth_deform_type = value;
}

int Brush_smear_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smear_deform_type);
}

void Brush_smear_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smear_deform_type = value;
}

int Brush_slide_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->slide_deform_type);
}

void Brush_slide_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->slide_deform_type = value;
}

int Brush_boundary_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->boundary_deform_type);
}

void Brush_boundary_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->boundary_deform_type = value;
}

int Brush_pose_deform_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_deform_type);
}

void Brush_pose_deform_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_deform_type = value;
}

int Brush_pose_origin_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_origin_type);
}

void Brush_pose_origin_type_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_origin_type = value;
}

int Brush_jitter_unit_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 1073741824);
}

void Brush_jitter_unit_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~1073741824;
    data->flag |= value;
}

int Brush_falloff_shape_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->falloff_shape) & 1);
}

void Brush_falloff_shape_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->falloff_shape &= ~1;
    data->falloff_shape |= value;
}

int Brush_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->size);
}

void Brush_size_set(PointerRNA *ptr, int value)
{
    rna_Brush_set_size(ptr, value);
}

float Brush_unprojected_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->unprojected_radius);
}

void Brush_unprojected_radius_set(PointerRNA *ptr, float value)
{
    rna_Brush_set_unprojected_radius(ptr, value);
}

float Brush_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->jitter);
}

void Brush_jitter_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->jitter = CLAMPIS(value, 0.0f, 1000.0f);
}

int Brush_jitter_absolute_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->jitter_absolute);
}

void Brush_jitter_absolute_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->jitter_absolute = CLAMPIS(value, 0, 1000000);
}

int Brush_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->spacing);
}

void Brush_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->spacing = CLAMPIS(value, 1, 1000);
}

int Brush_grad_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_spacing);
}

void Brush_grad_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gradient_spacing = CLAMPIS(value, 1, 10000);
}

int Brush_smooth_stroke_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->smooth_stroke_radius);
}

void Brush_smooth_stroke_radius_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smooth_stroke_radius = CLAMPIS(value, 10, 200);
}

float Brush_smooth_stroke_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->smooth_stroke_factor);
}

void Brush_smooth_stroke_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->smooth_stroke_factor = CLAMPIS(value, 0.5000000000f, 0.9900000095f);
}

float Brush_rate_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->rate);
}

void Brush_rate_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->rate = CLAMPIS(value, 0.0001000000f, 10000.0f);
}

void Brush_color_get(PointerRNA *ptr, float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rgb)[i]);
    }
}

void Brush_color_set(PointerRNA *ptr, const float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void Brush_secondary_color_get(PointerRNA *ptr, float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->secondary_rgb)[i]);
    }
}

void Brush_secondary_color_set(PointerRNA *ptr, const float values[3])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->secondary_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float Brush_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->weight);
}

void Brush_weight_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->alpha);
}

void Brush_strength_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->alpha = CLAMPIS(value, 0.0f, 10.0f);
}

float Brush_flow_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->flow);
}

void Brush_flow_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flow = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_wet_mix_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_mix);
}

void Brush_wet_mix_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->wet_mix = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_wet_persistence_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_persistence);
}

void Brush_wet_persistence_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->wet_persistence = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_density_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->density);
}

void Brush_density_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->density = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_tip_scale_x_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tip_scale_x);
}

void Brush_tip_scale_x_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->tip_scale_x = CLAMPIS(value, 0.0f, 1.0f);
}

bool Brush_use_hardness_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 1) != 0);
}

void Brush_use_hardness_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 1; }
    else { data->paint_flags &= ~1; }
}

bool Brush_invert_hardness_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 2) != 0);
}

void Brush_invert_hardness_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 2; }
    else { data->paint_flags &= ~2; }
}

bool Brush_use_flow_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 4) != 0);
}

void Brush_use_flow_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 4; }
    else { data->paint_flags &= ~4; }
}

bool Brush_invert_flow_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 8) != 0);
}

void Brush_invert_flow_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 8; }
    else { data->paint_flags &= ~8; }
}

bool Brush_use_wet_mix_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 16) != 0);
}

void Brush_use_wet_mix_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 16; }
    else { data->paint_flags &= ~16; }
}

bool Brush_invert_wet_mix_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 32) != 0);
}

void Brush_invert_wet_mix_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 32; }
    else { data->paint_flags &= ~32; }
}

bool Brush_use_wet_persistence_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 64) != 0);
}

void Brush_use_wet_persistence_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 64; }
    else { data->paint_flags &= ~64; }
}

bool Brush_invert_wet_persistence_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 128) != 0);
}

void Brush_invert_wet_persistence_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 128; }
    else { data->paint_flags &= ~128; }
}

bool Brush_use_density_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 256) != 0);
}

void Brush_use_density_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 256; }
    else { data->paint_flags &= ~256; }
}

bool Brush_invert_density_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->paint_flags) & 512) != 0);
}

void Brush_invert_density_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->paint_flags |= 512; }
    else { data->paint_flags &= ~512; }
}

float Brush_dash_ratio_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->dash_ratio);
}

void Brush_dash_ratio_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->dash_ratio = CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_dash_samples_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->dash_samples);
}

void Brush_dash_samples_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->dash_samples = CLAMPIS(value, 1, 10000);
}

float Brush_plane_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_offset);
}

void Brush_plane_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_offset = CLAMPIS(value, -2.0f, 2.0f);
}

float Brush_plane_trim_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->plane_trim);
}

void Brush_plane_trim_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->plane_trim = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_height_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->height);
}

void Brush_height_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->height = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_texture_sample_bias_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->texture_sample_bias);
}

void Brush_texture_sample_bias_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->texture_sample_bias = CLAMPIS(value, -1.0f, 1.0f);
}

float Brush_normal_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->normal_weight);
}

void Brush_normal_weight_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->normal_weight = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_elastic_deform_volume_preservation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->elastic_deform_volume_preservation);
}

void Brush_elastic_deform_volume_preservation_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->elastic_deform_volume_preservation = CLAMPIS(value, 0.0f, 0.8999999762f);
}

float Brush_rake_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->rake_factor);
}

void Brush_rake_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->rake_factor = CLAMPIS(value, 0.0f, 10.0f);
}

float Brush_crease_pinch_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->crease_pinch_factor);
}

void Brush_crease_pinch_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->crease_pinch_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_pose_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->pose_offset);
}

void Brush_pose_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_offset = CLAMPIS(value, 0.0f, 2.0f);
}

float Brush_disconnected_distance_max_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->disconnected_distance_max);
}

void Brush_disconnected_distance_max_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->disconnected_distance_max = CLAMPIS(value, 0.0f, 10.0f);
}

float Brush_boundary_offset_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->boundary_offset);
}

void Brush_boundary_offset_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->boundary_offset = CLAMPIS(value, 0.0f, 30.0f);
}

float Brush_surface_smooth_shape_preservation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->surface_smooth_shape_preservation);
}

void Brush_surface_smooth_shape_preservation_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->surface_smooth_shape_preservation = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_surface_smooth_current_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->surface_smooth_current_vertex);
}

void Brush_surface_smooth_current_vertex_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->surface_smooth_current_vertex = CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_surface_smooth_iterations_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->surface_smooth_iterations);
}

void Brush_surface_smooth_iterations_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->surface_smooth_iterations = CLAMPIS(value, 1, 10);
}

float Brush_multiplane_scrape_angle_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->multiplane_scrape_angle);
}

void Brush_multiplane_scrape_angle_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->multiplane_scrape_angle = CLAMPIS(value, 0.0f, 160.0f);
}

int Brush_pose_smooth_iterations_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_smooth_iterations);
}

void Brush_pose_smooth_iterations_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_smooth_iterations = CLAMPIS(value, 0, 100);
}

int Brush_pose_ik_segments_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->pose_ik_segments);
}

void Brush_pose_ik_segments_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->pose_ik_segments = CLAMPIS(value, 1, 20);
}

float Brush_tip_roundness_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tip_roundness);
}

void Brush_tip_roundness_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->tip_roundness = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_cloth_mass_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_mass);
}

void Brush_cloth_mass_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_mass = CLAMPIS(value, 0.0099999998f, 2.0f);
}

float Brush_cloth_damping_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_damping);
}

void Brush_cloth_damping_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_damping = CLAMPIS(value, 0.0099999998f, 1.0f);
}

float Brush_cloth_sim_limit_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_sim_limit);
}

void Brush_cloth_sim_limit_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_sim_limit = CLAMPIS(value, 0.1000000015f, 10.0f);
}

float Brush_cloth_sim_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_sim_falloff);
}

void Brush_cloth_sim_falloff_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_sim_falloff = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_cloth_constraint_softbody_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->cloth_constraint_softbody_strength);
}

void Brush_cloth_constraint_softbody_strength_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cloth_constraint_softbody_strength = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_hardness_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->hardness);
}

void Brush_hardness_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->hardness = CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_automasking_boundary_edges_propagation_steps_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->automasking_boundary_edges_propagation_steps);
}

void Brush_automasking_boundary_edges_propagation_steps_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->automasking_boundary_edges_propagation_steps = CLAMPIS(value, 1, 20);
}

float Brush_auto_smooth_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->autosmooth_factor);
}

void Brush_auto_smooth_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->autosmooth_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_topology_rake_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->topology_rake_factor);
}

void Brush_topology_rake_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->topology_rake_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_tilt_strength_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->tilt_strength_factor);
}

void Brush_tilt_strength_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->tilt_strength_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float Brush_normal_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->normal_radius_factor);
}

void Brush_normal_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->normal_radius_factor = CLAMPIS(value, 0.0f, 2.0f);
}

float Brush_area_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->area_radius_factor);
}

void Brush_area_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->area_radius_factor = CLAMPIS(value, 0.0f, 2.0f);
}

float Brush_wet_paint_radius_factor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->wet_paint_radius_factor);
}

void Brush_wet_paint_radius_factor_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->wet_paint_radius_factor = CLAMPIS(value, 0.0f, 2.0f);
}

void Brush_stencil_pos_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->stencil_pos)[i]);
    }
}

void Brush_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->stencil_pos)[i] = values[i];
    }
}

void Brush_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->stencil_dimension)[i]);
    }
}

void Brush_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->stencil_dimension)[i] = values[i];
    }
}

void Brush_mask_stencil_pos_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->mask_stencil_pos)[i]);
    }
}

void Brush_mask_stencil_pos_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->mask_stencil_pos)[i] = values[i];
    }
}

void Brush_mask_stencil_dimension_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->mask_stencil_dimension)[i]);
    }
}

void Brush_mask_stencil_dimension_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->mask_stencil_dimension)[i] = values[i];
    }
}

float Brush_sharp_threshold_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->sharp_threshold);
}

void Brush_sharp_threshold_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->sharp_threshold = CLAMPIS(value, 0.0f, 100.0f);
}

float Brush_fill_threshold_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->fill_threshold);
}

void Brush_fill_threshold_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->fill_threshold = CLAMPIS(value, 0.0f, 100.0f);
}

int Brush_blur_kernel_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blur_kernel_radius);
}

void Brush_blur_kernel_radius_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->blur_kernel_radius = CLAMPIS(value, 1, 10000);
}

int Brush_blur_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->blur_mode);
}

void Brush_blur_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->blur_mode = value;
}

float Brush_falloff_angle_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->falloff_angle);
}

void Brush_falloff_angle_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->falloff_angle = CLAMPIS(value, 0.0f, 1.5707963705f);
}

bool Brush_use_airbrush_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void Brush_use_airbrush_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool Brush_use_original_normal_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

void Brush_use_original_normal_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

bool Brush_use_original_plane_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void Brush_use_original_plane_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool Brush_use_automasking_topology_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 1) != 0);
}

void Brush_use_automasking_topology_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 1; }
    else { data->automasking_flags &= ~1; }
}

bool Brush_use_automasking_face_sets_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 2) != 0);
}

void Brush_use_automasking_face_sets_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 2; }
    else { data->automasking_flags &= ~2; }
}

bool Brush_use_automasking_boundary_edges_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 4) != 0);
}

void Brush_use_automasking_boundary_edges_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 4; }
    else { data->automasking_flags &= ~4; }
}

bool Brush_use_automasking_boundary_face_sets_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->automasking_flags) & 8) != 0);
}

void Brush_use_automasking_boundary_face_sets_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->automasking_flags |= 8; }
    else { data->automasking_flags &= ~8; }
}

int Brush_use_scene_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 131072);
}

void Brush_use_scene_spacing_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~131072;
    data->flag |= value;
}

bool Brush_use_grab_active_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void Brush_use_grab_active_vertex_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool Brush_use_grab_silhouette_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 256) != 0);
}

void Brush_use_grab_silhouette_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 256; }
    else { data->flag2 &= ~256; }
}

bool Brush_use_paint_antialiasing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->sampling_flag) & 1) != 0);
}

void Brush_use_paint_antialiasing_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->sampling_flag |= 1; }
    else { data->sampling_flag &= ~1; }
}

bool Brush_use_multiplane_scrape_dynamic_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 1) != 0);
}

void Brush_use_multiplane_scrape_dynamic_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 1; }
    else { data->flag2 &= ~1; }
}

bool Brush_show_multiplane_scrape_planes_preview_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 2) != 0);
}

void Brush_show_multiplane_scrape_planes_preview_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 2; }
    else { data->flag2 &= ~2; }
}

bool Brush_use_pose_ik_anchored_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 4) != 0);
}

void Brush_use_pose_ik_anchored_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 4; }
    else { data->flag2 &= ~4; }
}

bool Brush_use_pose_lock_rotation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 32) != 0);
}

void Brush_use_pose_lock_rotation_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 32; }
    else { data->flag2 &= ~32; }
}

bool Brush_use_connected_only_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 8) != 0);
}

void Brush_use_connected_only_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 8; }
    else { data->flag2 &= ~8; }
}

bool Brush_use_cloth_pin_simulation_boundary_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 16) != 0);
}

void Brush_use_cloth_pin_simulation_boundary_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 16; }
    else { data->flag2 &= ~16; }
}

bool Brush_use_cloth_collision_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 64) != 0);
}

void Brush_use_cloth_collision_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 64; }
    else { data->flag2 &= ~64; }
}

bool Brush_invert_to_scrape_fill_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void Brush_invert_to_scrape_fill_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool Brush_use_pressure_strength_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void Brush_use_pressure_strength_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool Brush_use_offset_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

void Brush_use_offset_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

bool Brush_use_pressure_area_radius_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag2) & 128) != 0);
}

void Brush_use_pressure_area_radius_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag2 |= 128; }
    else { data->flag2 &= ~128; }
}

bool Brush_use_pressure_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void Brush_use_pressure_size_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool Brush_use_pressure_jitter_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void Brush_use_pressure_jitter_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool Brush_use_pressure_spacing_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void Brush_use_pressure_spacing_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

int Brush_use_pressure_masking_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_pressure);
}

void Brush_use_pressure_masking_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->mask_pressure = value;
}

bool Brush_use_inverse_smooth_pressure_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 16777216) != 0);
}

void Brush_use_inverse_smooth_pressure_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 16777216; }
    else { data->flag &= ~16777216; }
}

bool Brush_use_plane_trim_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 67108864) != 0);
}

void Brush_use_plane_trim_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 67108864; }
    else { data->flag &= ~67108864; }
}

bool Brush_use_frontface_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 134217728) != 0);
}

void Brush_use_frontface_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 134217728; }
    else { data->flag &= ~134217728; }
}

bool Brush_use_frontface_falloff_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 33554432) != 0);
}

void Brush_use_frontface_falloff_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 33554432; }
    else { data->flag &= ~33554432; }
}

bool Brush_use_anchor_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void Brush_use_anchor_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool Brush_use_space_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void Brush_use_space_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool Brush_use_line_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 536870912) != 0);
}

void Brush_use_line_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 536870912; }
    else { data->flag &= ~536870912; }
}

bool Brush_use_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & INT_MIN) != 0);
}

void Brush_use_curve_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= INT_MIN; }
    else { data->flag &= ~INT_MIN; }
}

bool Brush_use_smooth_stroke_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void Brush_use_smooth_stroke_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool Brush_use_persistent_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void Brush_use_persistent_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool Brush_use_accumulate_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void Brush_use_accumulate_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool Brush_use_space_attenuation_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

void Brush_use_space_attenuation_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

bool Brush_use_adaptive_space_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

void Brush_use_adaptive_space_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

int Brush_use_locked_size_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 1048576);
}

void Brush_use_locked_size_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->flag &= ~1048576;
    data->flag |= value;
}

int Brush_color_type_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return ((data->flag) & 2097152);
}

void Brush_color_type_set(PointerRNA *ptr, int value)
{
    rna_Brush_use_gradient_set(ptr, value);
}

bool Brush_use_edge_to_edge_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 4194304) != 0);
}

void Brush_use_edge_to_edge_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

bool Brush_use_restore_mesh_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 8388608) != 0);
}

void Brush_use_restore_mesh_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 8388608; }
    else { data->flag &= ~8388608; }
}

bool Brush_use_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return !(((data->flag) & 16384) != 0);
}

void Brush_use_alpha_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (!value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

PointerRNA Brush_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

PointerRNA Brush_paint_curve_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PaintCurve, data->paint_curve);
}

void Brush_paint_curve_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->paint_curve) {
        id_us_min((ID *)data->paint_curve);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->paint_curve = value.data;
}

PointerRNA Brush_gradient_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->gradient);
}

int Brush_gradient_stroke_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_stroke_mode);
}

void Brush_gradient_stroke_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gradient_stroke_mode = value;
}

int Brush_gradient_fill_mode_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->gradient_fill_mode);
}

void Brush_gradient_fill_mode_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->gradient_fill_mode = value;
}

bool Brush_use_primary_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 2) != 0);
}

void Brush_use_primary_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 2; }
    else { data->overlay_flags &= ~2; }
}

bool Brush_use_secondary_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 4) != 0);
}

void Brush_use_secondary_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 4; }
    else { data->overlay_flags &= ~4; }
}

bool Brush_use_cursor_overlay_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 1) != 0);
}

void Brush_use_cursor_overlay_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 1; }
    else { data->overlay_flags &= ~1; }
}

bool Brush_use_cursor_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 8) != 0);
}

void Brush_use_cursor_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 8; }
    else { data->overlay_flags &= ~8; }
}

bool Brush_use_primary_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 16) != 0);
}

void Brush_use_primary_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 16; }
    else { data->overlay_flags &= ~16; }
}

bool Brush_use_secondary_overlay_override_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->overlay_flags) & 32) != 0);
}

void Brush_use_secondary_overlay_override_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->overlay_flags |= 32; }
    else { data->overlay_flags &= ~32; }
}

bool Brush_use_paint_sculpt_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 2) != 0);
}

void Brush_use_paint_sculpt_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 2; }
    else { data->ob_mode &= ~2; }
}

bool Brush_use_paint_uv_sculpt_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 1) != 0);
}

void Brush_use_paint_uv_sculpt_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 1; }
    else { data->ob_mode &= ~1; }
}

bool Brush_use_paint_vertex_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 4) != 0);
}

void Brush_use_paint_vertex_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 4; }
    else { data->ob_mode &= ~4; }
}

bool Brush_use_paint_weight_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 8) != 0);
}

void Brush_use_paint_weight_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 8; }
    else { data->ob_mode &= ~8; }
}

bool Brush_use_paint_image_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 16) != 0);
}

void Brush_use_paint_image_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 16; }
    else { data->ob_mode &= ~16; }
}

bool Brush_use_paint_grease_pencil_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 256) != 0);
}

void Brush_use_paint_grease_pencil_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 256; }
    else { data->ob_mode &= ~256; }
}

bool Brush_use_vertex_grease_pencil_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->ob_mode) & 2048) != 0);
}

void Brush_use_vertex_grease_pencil_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->ob_mode |= 2048; }
    else { data->ob_mode &= ~2048; }
}

PointerRNA Brush_texture_slot_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mtex);
}

PointerRNA Brush_texture_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mtex.tex);
}

void Brush_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->mtex.tex) {
        id_us_min((ID *)data->mtex.tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->mtex.tex = value.data;
}

PointerRNA Brush_mask_texture_slot_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mask_mtex);
}

PointerRNA Brush_mask_texture_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mask_mtex.tex);
}

void Brush_mask_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->mask_mtex.tex) {
        id_us_min((ID *)data->mask_mtex.tex);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->mask_mtex.tex = value.data;
}

int Brush_texture_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->texture_overlay_alpha);
}

void Brush_texture_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->texture_overlay_alpha = CLAMPIS(value, 0, 100);
}

int Brush_mask_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->mask_overlay_alpha);
}

void Brush_mask_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->mask_overlay_alpha = CLAMPIS(value, 0, 100);
}

int Brush_cursor_overlay_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (int)(data->cursor_overlay_alpha);
}

void Brush_cursor_overlay_alpha_set(PointerRNA *ptr, int value)
{
    Brush *data = (Brush *)(ptr->data);
    data->cursor_overlay_alpha = CLAMPIS(value, 0, 100);
}

void Brush_cursor_color_add_get(PointerRNA *ptr, float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->add_col)[i]);
    }
}

void Brush_cursor_color_add_set(PointerRNA *ptr, const float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->add_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

void Brush_cursor_color_subtract_get(PointerRNA *ptr, float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->sub_col)[i]);
    }
}

void Brush_cursor_color_subtract_set(PointerRNA *ptr, const float values[4])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->sub_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

bool Brush_use_custom_icon_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (((data->flag) & 268435456) != 0);
}

void Brush_use_custom_icon_set(PointerRNA *ptr, bool value)
{
    Brush *data = (Brush *)(ptr->data);
    if (value) { data->flag |= 268435456; }
    else { data->flag &= ~268435456; }
}

void Brush_icon_filepath_get(PointerRNA *ptr, char *value)
{
    Brush *data = (Brush *)(ptr->data);
    BLI_strncpy(value, data->icon_filepath, 1024);
}

int Brush_icon_filepath_length(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return strlen(data->icon_filepath);
}

void Brush_icon_filepath_set(PointerRNA *ptr, const char *value)
{
    Brush *data = (Brush *)(ptr->data);
    BLI_strncpy(data->icon_filepath, value, 1024);
}

PointerRNA Brush_clone_image_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone.image);
}

void Brush_clone_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Brush *data = (Brush *)(ptr->data);

    if (data->clone.image) {
        id_us_min((ID *)data->clone.image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->clone.image = value.data;
}

float Brush_clone_alpha_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return (float)(data->clone.alpha);
}

void Brush_clone_alpha_set(PointerRNA *ptr, float value)
{
    Brush *data = (Brush *)(ptr->data);
    data->clone.alpha = CLAMPIS(value, 0.0f, 1.0f);
}

void Brush_clone_offset_get(PointerRNA *ptr, float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->clone.offset)[i]);
    }
}

void Brush_clone_offset_set(PointerRNA *ptr, const float values[2])
{
    Brush *data = (Brush *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->clone.offset)[i] = values[i];
    }
}

PointerRNA Brush_brush_capabilities_get(PointerRNA *ptr)
{
    return rna_Brush_capabilities_get(ptr);
}

PointerRNA Brush_sculpt_capabilities_get(PointerRNA *ptr)
{
    return rna_Sculpt_tool_capabilities_get(ptr);
}

PointerRNA Brush_image_paint_capabilities_get(PointerRNA *ptr)
{
    return rna_Imapaint_tool_capabilities_get(ptr);
}

PointerRNA Brush_vertex_paint_capabilities_get(PointerRNA *ptr)
{
    return rna_Vertexpaint_tool_capabilities_get(ptr);
}

PointerRNA Brush_weight_paint_capabilities_get(PointerRNA *ptr)
{
    return rna_Weightpaint_tool_capabilities_get(ptr);
}

PointerRNA Brush_gpencil_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushGpencilSettings, data->gpencil_settings);
}

PointerRNA Brush_curves_sculpt_settings_get(PointerRNA *ptr)
{
    Brush *data = (Brush *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_BrushCurvesSculptSettings, data->curves_sculpt_settings);
}

static PointerRNA BrushCapabilities_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushCapabilities_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilities_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilities_rna_properties_get(iter);
    }
}

void BrushCapabilities_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilities_rna_properties_get(iter);
    }
}

void BrushCapabilities_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushCapabilities_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCapabilities_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BrushCapabilities_has_overlay_get(PointerRNA *ptr)
{
    return rna_BrushCapabilities_has_overlay_get(ptr);
}

bool BrushCapabilities_has_random_texture_angle_get(PointerRNA *ptr)
{
    return rna_BrushCapabilities_has_random_texture_angle_get(ptr);
}

bool BrushCapabilities_has_spacing_get(PointerRNA *ptr)
{
    return rna_BrushCapabilities_has_spacing_get(ptr);
}

bool BrushCapabilities_has_smooth_stroke_get(PointerRNA *ptr)
{
    return rna_BrushCapabilities_has_smooth_stroke_get(ptr);
}

static PointerRNA BrushCapabilitiesSculpt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushCapabilitiesSculpt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesSculpt_rna_properties_get(iter);
    }
}

void BrushCapabilitiesSculpt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesSculpt_rna_properties_get(iter);
    }
}

void BrushCapabilitiesSculpt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushCapabilitiesSculpt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesSculpt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BrushCapabilitiesSculpt_has_accumulate_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_accumulate_get(ptr);
}

bool BrushCapabilitiesSculpt_has_auto_smooth_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_auto_smooth_get(ptr);
}

bool BrushCapabilitiesSculpt_has_topology_rake_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_topology_rake_get(ptr);
}

bool BrushCapabilitiesSculpt_has_height_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_height_get(ptr);
}

bool BrushCapabilitiesSculpt_has_jitter_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_jitter_get(ptr);
}

bool BrushCapabilitiesSculpt_has_normal_weight_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_normal_weight_get(ptr);
}

bool BrushCapabilitiesSculpt_has_rake_factor_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_rake_factor_get(ptr);
}

bool BrushCapabilitiesSculpt_has_persistence_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_persistence_get(ptr);
}

bool BrushCapabilitiesSculpt_has_pinch_factor_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_pinch_factor_get(ptr);
}

bool BrushCapabilitiesSculpt_has_plane_offset_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_plane_offset_get(ptr);
}

bool BrushCapabilitiesSculpt_has_random_texture_angle_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_random_texture_angle_get(ptr);
}

bool BrushCapabilitiesSculpt_has_sculpt_plane_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_sculpt_plane_get(ptr);
}

bool BrushCapabilitiesSculpt_has_color_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_color_get(ptr);
}

bool BrushCapabilitiesSculpt_has_secondary_color_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_secondary_color_get(ptr);
}

bool BrushCapabilitiesSculpt_has_smooth_stroke_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_smooth_stroke_get(ptr);
}

bool BrushCapabilitiesSculpt_has_space_attenuation_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_space_attenuation_get(ptr);
}

bool BrushCapabilitiesSculpt_has_strength_pressure_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_strength_pressure_get(ptr);
}

bool BrushCapabilitiesSculpt_has_direction_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_direction_get(ptr);
}

bool BrushCapabilitiesSculpt_has_gravity_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_gravity_get(ptr);
}

bool BrushCapabilitiesSculpt_has_tilt_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesSculpt_has_tilt_get(ptr);
}

static PointerRNA BrushCapabilitiesImagePaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushCapabilitiesImagePaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesImagePaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesImagePaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesImagePaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesImagePaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushCapabilitiesImagePaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesImagePaint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BrushCapabilitiesImagePaint_has_accumulate_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesImagePaint_has_accumulate_get(ptr);
}

bool BrushCapabilitiesImagePaint_has_space_attenuation_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesImagePaint_has_space_attenuation_get(ptr);
}

bool BrushCapabilitiesImagePaint_has_radius_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesImagePaint_has_radius_get(ptr);
}

bool BrushCapabilitiesImagePaint_has_color_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesImagePaint_has_color_get(ptr);
}

static PointerRNA BrushCapabilitiesVertexPaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushCapabilitiesVertexPaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesVertexPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesVertexPaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesVertexPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesVertexPaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushCapabilitiesVertexPaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesVertexPaint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BrushCapabilitiesVertexPaint_has_color_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesVertexPaint_has_color_get(ptr);
}

static PointerRNA BrushCapabilitiesWeightPaint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushCapabilitiesWeightPaint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesWeightPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesWeightPaint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCapabilitiesWeightPaint_rna_properties_get(iter);
    }
}

void BrushCapabilitiesWeightPaint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushCapabilitiesWeightPaint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCapabilitiesWeightPaint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BrushCapabilitiesWeightPaint_has_weight_get(PointerRNA *ptr)
{
    return rna_BrushCapabilitiesWeightPaint_has_weight_get(ptr);
}

static PointerRNA BrushGpencilSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushGpencilSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushGpencilSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushGpencilSettings_rna_properties_get(iter);
    }
}

void BrushGpencilSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushGpencilSettings_rna_properties_get(iter);
    }
}

void BrushGpencilSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushGpencilSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushGpencilSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float BrushGpencilSettings_pen_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_strength);
}

void BrushGpencilSettings_pen_strength_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_strength = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_pen_jitter_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_jitter);
}

void BrushGpencilSettings_pen_jitter_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_jitter = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_random_press);
}

void BrushGpencilSettings_random_pressure_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_random_press = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_random_strength);
}

void BrushGpencilSettings_random_strength_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_random_strength = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_angle_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_angle);
}

void BrushGpencilSettings_angle_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_angle = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
}

float BrushGpencilSettings_angle_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_angle_factor);
}

void BrushGpencilSettings_angle_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_angle_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_pen_smooth_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->draw_smoothfac);
}

void BrushGpencilSettings_pen_smooth_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_smoothfac = CLAMPIS(value, 0.0f, 2.0f);
}

int BrushGpencilSettings_pen_smooth_steps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->draw_smoothlvl);
}

void BrushGpencilSettings_pen_smooth_steps_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_smoothlvl = CLAMPIS(value, 0, 100);
}

int BrushGpencilSettings_pen_subdivision_steps_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->draw_subdivide);
}

void BrushGpencilSettings_pen_subdivision_steps_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->draw_subdivide = CLAMPIS(value, 0, 3);
}

float BrushGpencilSettings_simplify_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->simplify_f);
}

void BrushGpencilSettings_simplify_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->simplify_f = CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA BrushGpencilSettings_curve_sensitivity_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_sensitivity);
}

PointerRNA BrushGpencilSettings_curve_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_strength);
}

PointerRNA BrushGpencilSettings_curve_jitter_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_jitter);
}

PointerRNA BrushGpencilSettings_curve_random_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_pressure);
}

PointerRNA BrushGpencilSettings_curve_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_strength);
}

PointerRNA BrushGpencilSettings_curve_random_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_uv);
}

PointerRNA BrushGpencilSettings_curve_random_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_hue);
}

PointerRNA BrushGpencilSettings_curve_random_saturation_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_saturation);
}

PointerRNA BrushGpencilSettings_curve_random_value_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve_rand_value);
}

float BrushGpencilSettings_fill_threshold_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_threshold);
}

void BrushGpencilSettings_fill_threshold_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

int BrushGpencilSettings_fill_leak_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_leak);
}

void BrushGpencilSettings_fill_leak_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_leak = CLAMPIS(value, 0, 100);
}

float BrushGpencilSettings_fill_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_factor);
}

void BrushGpencilSettings_fill_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_factor = CLAMPIS(value, 0.0500000007f, 8.0f);
}

int BrushGpencilSettings_fill_simplify_level_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_simplylvl);
}

void BrushGpencilSettings_fill_simplify_level_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_simplylvl = CLAMPIS(value, 0, 10);
}

float BrushGpencilSettings_uv_random_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->uv_random);
}

void BrushGpencilSettings_uv_random_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->uv_random = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_hardness_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->hardeness);
}

void BrushGpencilSettings_hardness_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->hardeness = CLAMPIS(value, 0.0010000000f, 1.0f);
}

void BrushGpencilSettings_aspect_get(PointerRNA *ptr, float values[2])
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->aspect_ratio)[i]);
    }
}

void BrushGpencilSettings_aspect_set(PointerRNA *ptr, const float values[2])
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->aspect_ratio)[i] = CLAMPIS(values[i], 0.0099999998f, 1.0f);
    }
}

int BrushGpencilSettings_input_samples_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->input_samples);
}

void BrushGpencilSettings_input_samples_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->input_samples = CLAMPIS(value, 0, 10);
}

float BrushGpencilSettings_active_smooth_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->active_smooth);
}

void BrushGpencilSettings_active_smooth_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->active_smooth = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_eraser_strength_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->era_strength_f);
}

void BrushGpencilSettings_eraser_strength_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->era_strength_f = CLAMPIS(value, 0.0f, 100.0f);
}

float BrushGpencilSettings_eraser_thickness_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->era_thickness_f);
}

void BrushGpencilSettings_eraser_thickness_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->era_thickness_f = CLAMPIS(value, 0.0f, 100.0f);
}

int BrushGpencilSettings_gpencil_paint_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

void BrushGpencilSettings_gpencil_paint_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->icon_id = value;
}

int BrushGpencilSettings_gpencil_sculpt_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

void BrushGpencilSettings_gpencil_sculpt_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->icon_id = value;
}

int BrushGpencilSettings_gpencil_weight_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

void BrushGpencilSettings_gpencil_weight_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->icon_id = value;
}

int BrushGpencilSettings_gpencil_vertex_icon_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->icon_id);
}

void BrushGpencilSettings_gpencil_vertex_icon_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->icon_id = value;
}

int BrushGpencilSettings_vertex_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((data->vertex_mode) & 3);
}

void BrushGpencilSettings_vertex_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->vertex_mode &= ~3;
    data->vertex_mode |= value;
}

float BrushGpencilSettings_vertex_color_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->vertex_factor);
}

void BrushGpencilSettings_vertex_color_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->vertex_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_hue_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_hue);
}

void BrushGpencilSettings_random_hue_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->random_hue = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_saturation_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_saturation);
}

void BrushGpencilSettings_random_saturation_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->random_saturation = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_random_value_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->random_value);
}

void BrushGpencilSettings_random_value_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->random_value = CLAMPIS(value, 0.0f, 1.0f);
}

float BrushGpencilSettings_extend_stroke_factor_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (float)(data->fill_extend_fac);
}

void BrushGpencilSettings_extend_stroke_factor_set(PointerRNA *ptr, float value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_extend_fac = CLAMPIS(value, 0.0f, 10.0f);
}

int BrushGpencilSettings_dilate_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->dilate_pixels);
}

void BrushGpencilSettings_dilate_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->dilate_pixels = CLAMPIS(value, -40, 40);
}

bool BrushGpencilSettings_use_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void BrushGpencilSettings_use_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool BrushGpencilSettings_use_strength_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void BrushGpencilSettings_use_strength_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool BrushGpencilSettings_use_jitter_pressure_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void BrushGpencilSettings_use_jitter_pressure_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool BrushGpencilSettings_use_stroke_random_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 1) != 0);
}

void BrushGpencilSettings_use_stroke_random_hue_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 1; }
    else { data->flag2 &= ~1; }
}

bool BrushGpencilSettings_use_stroke_random_sat_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 2) != 0);
}

void BrushGpencilSettings_use_stroke_random_sat_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 2; }
    else { data->flag2 &= ~2; }
}

bool BrushGpencilSettings_use_stroke_random_val_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 4) != 0);
}

void BrushGpencilSettings_use_stroke_random_val_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 4; }
    else { data->flag2 &= ~4; }
}

bool BrushGpencilSettings_use_stroke_random_radius_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 8) != 0);
}

void BrushGpencilSettings_use_stroke_random_radius_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 8; }
    else { data->flag2 &= ~8; }
}

bool BrushGpencilSettings_use_stroke_random_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 16) != 0);
}

void BrushGpencilSettings_use_stroke_random_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 16; }
    else { data->flag2 &= ~16; }
}

bool BrushGpencilSettings_use_stroke_random_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 32) != 0);
}

void BrushGpencilSettings_use_stroke_random_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 32; }
    else { data->flag2 &= ~32; }
}

bool BrushGpencilSettings_use_random_press_hue_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 64) != 0);
}

void BrushGpencilSettings_use_random_press_hue_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 64; }
    else { data->flag2 &= ~64; }
}

bool BrushGpencilSettings_use_random_press_sat_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 128) != 0);
}

void BrushGpencilSettings_use_random_press_sat_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 128; }
    else { data->flag2 &= ~128; }
}

bool BrushGpencilSettings_use_random_press_val_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 256) != 0);
}

void BrushGpencilSettings_use_random_press_val_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 256; }
    else { data->flag2 &= ~256; }
}

bool BrushGpencilSettings_use_random_press_radius_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 512) != 0);
}

void BrushGpencilSettings_use_random_press_radius_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 512; }
    else { data->flag2 &= ~512; }
}

bool BrushGpencilSettings_use_random_press_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 1024) != 0);
}

void BrushGpencilSettings_use_random_press_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 1024; }
    else { data->flag2 &= ~1024; }
}

bool BrushGpencilSettings_use_random_press_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag2) & 2048) != 0);
}

void BrushGpencilSettings_use_random_press_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag2 |= 2048; }
    else { data->flag2 &= ~2048; }
}

bool BrushGpencilSettings_use_settings_stabilizer_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void BrushGpencilSettings_use_settings_stabilizer_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

int BrushGpencilSettings_eraser_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->eraser_mode);
}

void BrushGpencilSettings_eraser_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->eraser_mode = value;
}

int BrushGpencilSettings_caps_type_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->caps_type);
}

void BrushGpencilSettings_caps_type_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->caps_type = value;
}

int BrushGpencilSettings_fill_draw_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_draw_mode);
}

void BrushGpencilSettings_fill_draw_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_draw_mode = value;
}

int BrushGpencilSettings_fill_layer_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_layer_mode);
}

void BrushGpencilSettings_fill_layer_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_layer_mode = value;
}

int BrushGpencilSettings_fill_direction_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->fill_direction);
}

void BrushGpencilSettings_fill_direction_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->fill_direction = value;
}

bool BrushGpencilSettings_pin_draw_mode_get(PointerRNA *ptr)
{
    return rna_GPencilBrush_pin_mode_get(ptr);
}

void BrushGpencilSettings_pin_draw_mode_set(PointerRNA *ptr, bool value)
{
    rna_GPencilBrush_pin_mode_set(ptr, value);
}

int BrushGpencilSettings_brush_draw_mode_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (int)(data->brush_draw_mode);
}

void BrushGpencilSettings_brush_draw_mode_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->brush_draw_mode = value;
}

bool BrushGpencilSettings_use_trim_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

void BrushGpencilSettings_use_trim_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

int BrushGpencilSettings_direction_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return ((data->sculpt_flag) & 512);
}

void BrushGpencilSettings_direction_set(PointerRNA *ptr, int value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    data->sculpt_flag &= ~512;
    data->sculpt_flag |= value;
}

bool BrushGpencilSettings_use_edit_position_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 1) != 0);
}

void BrushGpencilSettings_use_edit_position_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 1; }
    else { data->sculpt_mode_flag &= ~1; }
}

bool BrushGpencilSettings_use_edit_strength_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 2) != 0);
}

void BrushGpencilSettings_use_edit_strength_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 2; }
    else { data->sculpt_mode_flag &= ~2; }
}

bool BrushGpencilSettings_use_edit_thickness_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 4) != 0);
}

void BrushGpencilSettings_use_edit_thickness_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 4; }
    else { data->sculpt_mode_flag &= ~4; }
}

bool BrushGpencilSettings_use_edit_uv_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 8) != 0);
}

void BrushGpencilSettings_use_edit_uv_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 8; }
    else { data->sculpt_mode_flag &= ~8; }
}

bool BrushGpencilSettings_use_automasking_stroke_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 16) != 0);
}

void BrushGpencilSettings_use_automasking_stroke_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 16; }
    else { data->sculpt_mode_flag &= ~16; }
}

bool BrushGpencilSettings_use_automasking_layer_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 32) != 0);
}

void BrushGpencilSettings_use_automasking_layer_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 32; }
    else { data->sculpt_mode_flag &= ~32; }
}

bool BrushGpencilSettings_use_automasking_material_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->sculpt_mode_flag) & 64) != 0);
}

void BrushGpencilSettings_use_automasking_material_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->sculpt_mode_flag |= 64; }
    else { data->sculpt_mode_flag &= ~64; }
}

PointerRNA BrushGpencilSettings_material_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Material, data->material);
}

void BrushGpencilSettings_material_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->material) {
        id_us_min((ID *)data->material);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->material = value.data;
}

bool BrushGpencilSettings_show_fill_boundary_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void BrushGpencilSettings_show_fill_boundary_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool BrushGpencilSettings_show_fill_extend_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void BrushGpencilSettings_show_fill_extend_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool BrushGpencilSettings_show_fill_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

void BrushGpencilSettings_show_fill_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool BrushGpencilSettings_use_fill_limit_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void BrushGpencilSettings_use_fill_limit_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool BrushGpencilSettings_use_default_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void BrushGpencilSettings_use_default_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool BrushGpencilSettings_use_settings_postprocess_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void BrushGpencilSettings_use_settings_postprocess_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool BrushGpencilSettings_use_settings_random_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void BrushGpencilSettings_use_settings_random_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool BrushGpencilSettings_use_material_pin_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void BrushGpencilSettings_use_material_pin_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool BrushGpencilSettings_show_lasso_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return !(((data->flag) & 16384) != 0);
}

void BrushGpencilSettings_show_lasso_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (!value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

bool BrushGpencilSettings_use_occlude_eraser_get(PointerRNA *ptr)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

void BrushGpencilSettings_use_occlude_eraser_set(PointerRNA *ptr, bool value)
{
    BrushGpencilSettings *data = (BrushGpencilSettings *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

static PointerRNA BrushCurvesSculptSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BrushCurvesSculptSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BrushCurvesSculptSettings_rna_properties_get(iter);
    }
}

void BrushCurvesSculptSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BrushCurvesSculptSettings_rna_properties_get(iter);
    }
}

void BrushCurvesSculptSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BrushCurvesSculptSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BrushCurvesSculptSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int BrushCurvesSculptSettings_add_amount_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->add_amount);
}

void BrushCurvesSculptSettings_add_amount_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->add_amount = CLAMPIS(value, 1, INT_MAX);
}

int BrushCurvesSculptSettings_points_per_curve_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->points_per_curve);
}

void BrushCurvesSculptSettings_points_per_curve_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->points_per_curve = CLAMPIS(value, 2, INT_MAX);
}

bool BrushCurvesSculptSettings_scale_uniform_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void BrushCurvesSculptSettings_scale_uniform_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

float BrushCurvesSculptSettings_minimum_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->minimum_length);
}

void BrushCurvesSculptSettings_minimum_length_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->minimum_length = CLAMPIS(value, 0.0f, FLT_MAX);
}

bool BrushCurvesSculptSettings_interpolate_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void BrushCurvesSculptSettings_interpolate_length_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool BrushCurvesSculptSettings_interpolate_point_count_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void BrushCurvesSculptSettings_interpolate_point_count_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool BrushCurvesSculptSettings_interpolate_shape_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void BrushCurvesSculptSettings_interpolate_shape_set(PointerRNA *ptr, bool value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

float BrushCurvesSculptSettings_curve_length_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->curve_length);
}

void BrushCurvesSculptSettings_curve_length_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->curve_length = CLAMPIS(value, 0.0f, FLT_MAX);
}

float BrushCurvesSculptSettings_minimum_distance_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (float)(data->minimum_distance);
}

void BrushCurvesSculptSettings_minimum_distance_set(PointerRNA *ptr, float value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->minimum_distance = CLAMPIS(value, 0.0f, FLT_MAX);
}

int BrushCurvesSculptSettings_density_add_attempts_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->density_add_attempts);
}

void BrushCurvesSculptSettings_density_add_attempts_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->density_add_attempts = CLAMPIS(value, 0, INT_MAX);
}

int BrushCurvesSculptSettings_density_mode_get(PointerRNA *ptr)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    return (int)(data->density_mode);
}

void BrushCurvesSculptSettings_density_mode_set(PointerRNA *ptr, int value)
{
    BrushCurvesSculptSettings *data = (BrushCurvesSculptSettings *)(ptr->data);
    data->density_mode = value;
}

float BrushTextureSlot_angle_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->rot);
}

void BrushTextureSlot_angle_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->rot = CLAMPIS(value, 0.0f, 6.2831854820f);
}

int BrushTextureSlot_map_mode_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->brush_map_mode);
}

void BrushTextureSlot_map_mode_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->brush_map_mode = value;
}

int BrushTextureSlot_mask_map_mode_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->brush_map_mode);
}

void BrushTextureSlot_mask_map_mode_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->brush_map_mode = value;
}

bool BrushTextureSlot_use_rake_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->brush_angle_mode) & 2) != 0);
}

void BrushTextureSlot_use_rake_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->brush_angle_mode |= 2; }
    else { data->brush_angle_mode &= ~2; }
}

bool BrushTextureSlot_use_random_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (((data->brush_angle_mode) & 1) != 0);
}

void BrushTextureSlot_use_random_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->brush_angle_mode |= 1; }
    else { data->brush_angle_mode &= ~1; }
}

float BrushTextureSlot_random_angle_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->random_angle);
}

void BrushTextureSlot_random_angle_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->random_angle = CLAMPIS(value, 0.0f, 6.2831854820f);
}

bool BrushTextureSlot_has_texture_angle_source_get(PointerRNA *ptr)
{
    return rna_TextureCapabilities_has_texture_angle_source_get(ptr);
}

bool BrushTextureSlot_has_random_texture_angle_get(PointerRNA *ptr)
{
    return rna_TextureCapabilities_has_random_texture_angle_get(ptr);
}

bool BrushTextureSlot_has_texture_angle_get(PointerRNA *ptr)
{
    return rna_TextureCapabilities_has_texture_angle_get(ptr);
}











/* Brush */
static const EnumPropertyItem rna_Brush_blend_items[31] = {
	{0, "MIX", 0, "Mix", "Use Mix blending mode while painting"},
	{0, "", 0, NULL, NULL},
	{5, "DARKEN", 0, "Darken", "Use Darken blending mode while painting"},
	{3, "MUL", 0, "Multiply", "Use Multiply blending mode while painting"},
	{10, "COLORBURN", 0, "Color Burn", "Use Color Burn blending mode while painting"},
	{11, "LINEARBURN", 0, "Linear Burn", "Use Linear Burn blending mode while painting"},
	{0, "", 0, NULL, NULL},
	{4, "LIGHTEN", 0, "Lighten", "Use Lighten blending mode while painting"},
	{13, "SCREEN", 0, "Screen", "Use Screen blending mode while painting"},
	{12, "COLORDODGE", 0, "Color Dodge", "Use Color Dodge blending mode while painting"},
	{1, "ADD", 0, "Add", "Use Add blending mode while painting"},
	{0, "", 0, NULL, NULL},
	{8, "OVERLAY", 0, "Overlay", "Use Overlay blending mode while painting"},
	{14, "SOFTLIGHT", 0, "Soft Light", "Use Soft Light blending mode while painting"},
	{9, "HARDLIGHT", 0, "Hard Light", "Use Hard Light blending mode while painting"},
	{16, "VIVIDLIGHT", 0, "Vivid Light", "Use Vivid Light blending mode while painting"},
	{17, "LINEARLIGHT", 0, "Linear Light", "Use Linear Light blending mode while painting"},
	{15, "PINLIGHT", 0, "Pin Light", "Use Pin Light blending mode while painting"},
	{0, "", 0, NULL, NULL},
	{18, "DIFFERENCE", 0, "Difference", "Use Difference blending mode while painting"},
	{19, "EXCLUSION", 0, "Exclusion", "Use Exclusion blending mode while painting"},
	{2, "SUB", 0, "Subtract", "Use Subtract blending mode while painting"},
	{0, "", 0, NULL, NULL},
	{20, "HUE", 0, "Hue", "Use Hue blending mode while painting"},
	{21, "SATURATION", 0, "Saturation", "Use Saturation blending mode while painting"},
	{23, "COLOR", 0, "Color", "Use Color blending mode while painting"},
	{22, "LUMINOSITY", 0, "Value", "Use Value blending mode while painting"},
	{0, "", 0, NULL, NULL},
	{6, "ERASE_ALPHA", 0, "Erase Alpha", "Erase alpha while painting"},
	{7, "ADD_ALPHA", 0, "Add Alpha", "Add alpha while painting"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_blend = {
	{(PropertyRNA *)&rna_Brush_sculpt_tool, NULL,
	-1, "blend", 3, 0, 0, 4, 0, "Blending Mode",
	"Brush blending mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, blend), 1, NULL},
	Brush_blend_get, Brush_blend_set, NULL, NULL, NULL, rna_Brush_blend_items, 30, 0
};

EnumPropertyRNA rna_Brush_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_uv_sculpt_tool, (PropertyRNA *)&rna_Brush_blend,
	-1, "sculpt_tool", 3, 0, 0, 4, 0, "Sculpt Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sculpt_tool), 2, NULL},
	Brush_sculpt_tool_get, Brush_sculpt_tool_set, NULL, NULL, NULL, rna_enum_brush_sculpt_tool_items, 35, 1
};

EnumPropertyRNA rna_Brush_uv_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_vertex_tool, (PropertyRNA *)&rna_Brush_sculpt_tool,
	-1, "uv_sculpt_tool", 3, 0, 0, 4, 0, "Sculpt Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, uv_sculpt_tool), 2, NULL},
	Brush_uv_sculpt_tool_get, Brush_uv_sculpt_tool_set, NULL, NULL, NULL, rna_enum_brush_uv_sculpt_tool_items, 3, 0
};

EnumPropertyRNA rna_Brush_vertex_tool = {
	{(PropertyRNA *)&rna_Brush_weight_tool, (PropertyRNA *)&rna_Brush_uv_sculpt_tool,
	-1, "vertex_tool", 3, 0, 0, 4, 0, "Vertex Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, vertexpaint_tool), 2, NULL},
	Brush_vertex_tool_get, Brush_vertex_tool_set, NULL, NULL, NULL, rna_enum_brush_vertex_tool_items, 4, 0
};

EnumPropertyRNA rna_Brush_weight_tool = {
	{(PropertyRNA *)&rna_Brush_image_tool, (PropertyRNA *)&rna_Brush_vertex_tool,
	-1, "weight_tool", 3, 0, 0, 4, 0, "Weight Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, weightpaint_tool), 2, NULL},
	Brush_weight_tool_get, Brush_weight_tool_set, NULL, NULL, NULL, rna_enum_brush_weight_tool_items, 4, 0
};

EnumPropertyRNA rna_Brush_image_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_tool, (PropertyRNA *)&rna_Brush_weight_tool,
	-1, "image_tool", 3, 0, 0, 4, 0, "Image Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update_and_reset_icon, 268697600, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, imagepaint_tool), 2, NULL},
	Brush_image_tool_get, Brush_image_tool_set, NULL, NULL, NULL, rna_enum_brush_image_tool_items, 6, 0
};

EnumPropertyRNA rna_Brush_gpencil_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_vertex_tool, (PropertyRNA *)&rna_Brush_image_tool,
	-1, "gpencil_tool", 1, 0, 0, 4, 0, "Grease Pencil Draw Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_tool), 2, NULL},
	Brush_gpencil_tool_get, Brush_gpencil_tool_set, NULL, NULL, NULL, rna_enum_brush_gpencil_types_items, 4, 0
};

EnumPropertyRNA rna_Brush_gpencil_vertex_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_sculpt_tool, (PropertyRNA *)&rna_Brush_gpencil_tool,
	-1, "gpencil_vertex_tool", 1, 0, 0, 4, 0, "Grease Pencil Vertex Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_vertex_tool), 2, NULL},
	Brush_gpencil_vertex_tool_get, Brush_gpencil_vertex_tool_set, NULL, NULL, NULL, rna_enum_brush_gpencil_vertex_types_items, 5, 0
};

EnumPropertyRNA rna_Brush_gpencil_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_gpencil_weight_tool, (PropertyRNA *)&rna_Brush_gpencil_vertex_tool,
	-1, "gpencil_sculpt_tool", 1, 0, 0, 4, 0, "Grease Pencil Sculpt Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_sculpt_tool), 2, NULL},
	Brush_gpencil_sculpt_tool_get, Brush_gpencil_sculpt_tool_set, NULL, NULL, NULL, rna_enum_brush_gpencil_sculpt_types_items, 9, 0
};

EnumPropertyRNA rna_Brush_gpencil_weight_tool = {
	{(PropertyRNA *)&rna_Brush_curves_sculpt_tool, (PropertyRNA *)&rna_Brush_gpencil_sculpt_tool,
	-1, "gpencil_weight_tool", 1, 0, 0, 4, 0, "Grease Pencil Weight Paint Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gpencil_weight_tool), 2, NULL},
	Brush_gpencil_weight_tool_get, Brush_gpencil_weight_tool_set, NULL, NULL, NULL, rna_enum_brush_gpencil_weight_types_items, 1, 0
};

EnumPropertyRNA rna_Brush_curves_sculpt_tool = {
	{(PropertyRNA *)&rna_Brush_direction, (PropertyRNA *)&rna_Brush_gpencil_weight_tool,
	-1, "curves_sculpt_tool", 1, 0, 0, 4, 0, "Curves Sculpt Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, curves_sculpt_tool), 2, NULL},
	Brush_curves_sculpt_tool_get, Brush_curves_sculpt_tool_set, NULL, NULL, NULL, rna_enum_brush_curves_sculpt_tool_items, 11, 0
};

static const EnumPropertyItem rna_Brush_direction_items[3] = {
	{0, "ADD", 31, "Add", "Add effect of brush"},
	{512, "SUBTRACT", 32, "Subtract", "Subtract effect of brush"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_direction = {
	{(PropertyRNA *)&rna_Brush_stroke_method, (PropertyRNA *)&rna_Brush_curves_sculpt_tool,
	-1, "direction", 3, 0, 0, 4, 0, "Direction",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), 0, NULL},
	Brush_direction_get, Brush_direction_set, rna_Brush_direction_itemf, NULL, NULL, rna_Brush_direction_items, 2, 0
};

static const EnumPropertyItem rna_Brush_stroke_method_items[8] = {
	{0, "DOTS", 0, "Dots", "Apply paint on each mouse move step"},
	{8388608, "DRAG_DOT", 0, "Drag Dot", "Allows a single dot to be carefully positioned"},
	{1024, "SPACE", 0, "Space", "Limit brush application to the distance specified by spacing"},
	{1, "AIRBRUSH", 0, "Airbrush", "Keep applying paint effect while holding mouse (spray)"},
	{256, "ANCHORED", 0, "Anchored", "Keep the brush anchored to the initial location"},
	{536870912, "LINE", 0, "Line", "Draw a line with dabs separated according to spacing"},
	{-2147483648, "CURVE", 0, "Curve", "Define the stroke curve with a bezier curve (dabs are separated according to spacing)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_stroke_method = {
	{(PropertyRNA *)&rna_Brush_sculpt_plane, (PropertyRNA *)&rna_Brush_direction,
	-1, "stroke_method", 3, 0, 0, 4, 0, "Stroke Method",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_stroke_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), 0, NULL},
	Brush_stroke_method_get, Brush_stroke_method_set, rna_Brush_stroke_itemf, NULL, NULL, rna_Brush_stroke_method_items, 7, 0
};

static const EnumPropertyItem rna_Brush_sculpt_plane_items[6] = {
	{0, "AREA", 0, "Area Plane", ""},
	{1, "VIEW", 0, "View Plane", ""},
	{2, "X", 0, "X Plane", ""},
	{3, "Y", 0, "Y Plane", ""},
	{4, "Z", 0, "Z Plane", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_sculpt_plane = {
	{(PropertyRNA *)&rna_Brush_mask_tool, (PropertyRNA *)&rna_Brush_stroke_method,
	-1, "sculpt_plane", 3, 0, 0, 4, 0, "Sculpt Plane",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sculpt_plane), 0, NULL},
	Brush_sculpt_plane_get, Brush_sculpt_plane_set, NULL, NULL, NULL, rna_Brush_sculpt_plane_items, 5, 0
};

static const EnumPropertyItem rna_Brush_mask_tool_items[3] = {
	{0, "DRAW", 0, "Draw", ""},
	{1, "SMOOTH", 0, "Smooth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_mask_tool = {
	{(PropertyRNA *)&rna_Brush_curve_preset, (PropertyRNA *)&rna_Brush_sculpt_plane,
	-1, "mask_tool", 3, 0, 0, 4, 0, "Mask Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_tool), 2, NULL},
	Brush_mask_tool_get, Brush_mask_tool_set, NULL, NULL, NULL, rna_Brush_mask_tool_items, 2, 0
};

static const EnumPropertyItem rna_Brush_curve_preset_items[11] = {
	{0, "CUSTOM", 564, "Custom", ""},
	{1, "SMOOTH", 558, "Smooth", ""},
	{9, "SMOOTHER", 558, "Smoother", ""},
	{2, "SPHERE", 559, "Sphere", ""},
	{3, "ROOT", 557, "Root", ""},
	{4, "SHARP", 561, "Sharp", ""},
	{5, "LIN", 562, "Linear", ""},
	{6, "POW4", 561, "Sharper", ""},
	{7, "INVSQUARE", 560, "Inverse Square", ""},
	{8, "CONSTANT", 563, "Constant", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_curve_preset = {
	{(PropertyRNA *)&rna_Brush_deform_target, (PropertyRNA *)&rna_Brush_mask_tool,
	-1, "curve_preset", 3, 0, 0, 4, 0, "Curve Preset",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, curve_preset), 0, NULL},
	Brush_curve_preset_get, Brush_curve_preset_set, NULL, NULL, NULL, rna_Brush_curve_preset_items, 10, 0
};

static const EnumPropertyItem rna_Brush_deform_target_items[3] = {
	{0, "GEOMETRY", 0, "Geometry", "Brush deformation displaces the vertices of the mesh"},
	{1, "CLOTH_SIM", 0, "Cloth Simulation", "Brush deforms the mesh by deforming the constraints of a cloth simulation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_deform_target = {
	{(PropertyRNA *)&rna_Brush_elastic_deform_type, (PropertyRNA *)&rna_Brush_curve_preset,
	-1, "deform_target", 3, 0, 0, 4, 0, "Deformation Target",
	"How the deformation of the brush will affect the object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, deform_target), 0, NULL},
	Brush_deform_target_get, Brush_deform_target_set, NULL, NULL, NULL, rna_Brush_deform_target_items, 2, 0
};

static const EnumPropertyItem rna_Brush_elastic_deform_type_items[6] = {
	{0, "GRAB", 0, "Grab", ""},
	{1, "GRAB_BISCALE", 0, "Bi-Scale Grab", ""},
	{2, "GRAB_TRISCALE", 0, "Tri-Scale Grab", ""},
	{3, "SCALE", 0, "Scale", ""},
	{4, "TWIST", 0, "Twist", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_elastic_deform_type = {
	{(PropertyRNA *)&rna_Brush_snake_hook_deform_type, (PropertyRNA *)&rna_Brush_deform_target,
	-1, "elastic_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, elastic_deform_type), 0, NULL},
	Brush_elastic_deform_type_get, Brush_elastic_deform_type_set, NULL, NULL, NULL, rna_Brush_elastic_deform_type_items, 5, 0
};

static const EnumPropertyItem rna_Brush_snake_hook_deform_type_items[3] = {
	{0, "FALLOFF", 0, "Radius Falloff", "Applies the brush falloff in the tip of the brush"},
	{1, "ELASTIC", 0, "Elastic", "Modifies the entire mesh using elastic deform"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_snake_hook_deform_type = {
	{(PropertyRNA *)&rna_Brush_cloth_deform_type, (PropertyRNA *)&rna_Brush_elastic_deform_type,
	-1, "snake_hook_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, snake_hook_deform_type), 0, NULL},
	Brush_snake_hook_deform_type_get, Brush_snake_hook_deform_type_set, NULL, NULL, NULL, rna_Brush_snake_hook_deform_type_items, 2, 0
};

static const EnumPropertyItem rna_Brush_cloth_deform_type_items[9] = {
	{0, "DRAG", 0, "Drag", ""},
	{1, "PUSH", 0, "Push", ""},
	{3, "PINCH_POINT", 0, "Pinch Point", ""},
	{4, "PINCH_PERPENDICULAR", 0, "Pinch Perpendicular", ""},
	{5, "INFLATE", 0, "Inflate", ""},
	{2, "GRAB", 0, "Grab", ""},
	{6, "EXPAND", 0, "Expand", ""},
	{7, "SNAKE_HOOK", 0, "Snake Hook", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_cloth_deform_type = {
	{(PropertyRNA *)&rna_Brush_cloth_force_falloff_type, (PropertyRNA *)&rna_Brush_snake_hook_deform_type,
	-1, "cloth_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_deform_type), 0, NULL},
	Brush_cloth_deform_type_get, Brush_cloth_deform_type_set, NULL, NULL, NULL, rna_Brush_cloth_deform_type_items, 8, 0
};

static const EnumPropertyItem rna_Brush_cloth_force_falloff_type_items[3] = {
	{0, "RADIAL", 0, "Radial", ""},
	{1, "PLANE", 0, "Plane", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_cloth_force_falloff_type = {
	{(PropertyRNA *)&rna_Brush_cloth_simulation_area_type, (PropertyRNA *)&rna_Brush_cloth_deform_type,
	-1, "cloth_force_falloff_type", 3, 0, 0, 4, 0, "Force Falloff",
	"Shape used in the brush to apply force to the cloth",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_force_falloff_type), 0, NULL},
	Brush_cloth_force_falloff_type_get, Brush_cloth_force_falloff_type_set, NULL, NULL, NULL, rna_Brush_cloth_force_falloff_type_items, 2, 0
};

static const EnumPropertyItem rna_Brush_cloth_simulation_area_type_items[4] = {
	{0, "LOCAL", 0, "Local", "Simulates only a specific area around the brush limited by a fixed radius"},
	{1, "GLOBAL", 0, "Global", "Simulates the entire mesh"},
	{2, "DYNAMIC", 0, "Dynamic", "The active simulation area moves with the brush"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_cloth_simulation_area_type = {
	{(PropertyRNA *)&rna_Brush_boundary_falloff_type, (PropertyRNA *)&rna_Brush_cloth_force_falloff_type,
	-1, "cloth_simulation_area_type", 3, 0, 0, 4, 0, "Simulation Area",
	"Part of the mesh that is going to be simulated when the stroke is active",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_simulation_area_type), 0, NULL},
	Brush_cloth_simulation_area_type_get, Brush_cloth_simulation_area_type_set, NULL, NULL, NULL, rna_Brush_cloth_simulation_area_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_boundary_falloff_type_items[5] = {
	{0, "CONSTANT", 0, "Constant", "Applies the same deformation in the entire boundary"},
	{1, "RADIUS", 0, "Brush Radius", "Applies the deformation in a localized area limited by the brush radius"},
	{2, "LOOP", 0, "Loop", "Applies the brush falloff in a loop pattern"},
	{3, "LOOP_INVERT", 0, "Loop and Invert", "Applies the falloff radius in a loop pattern, inverting the displacement direction in each pattern repetition"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_boundary_falloff_type = {
	{(PropertyRNA *)&rna_Brush_smooth_deform_type, (PropertyRNA *)&rna_Brush_cloth_simulation_area_type,
	-1, "boundary_falloff_type", 3, 0, 0, 4, 0, "Boundary Falloff",
	"How the brush falloff is applied across the boundary",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, boundary_falloff_type), 0, NULL},
	Brush_boundary_falloff_type_get, Brush_boundary_falloff_type_set, NULL, NULL, NULL, rna_Brush_boundary_falloff_type_items, 4, 0
};

static const EnumPropertyItem rna_Brush_smooth_deform_type_items[3] = {
	{0, "LAPLACIAN", 0, "Laplacian", "Smooths the surface and the volume"},
	{1, "SURFACE", 0, "Surface", "Smooths the surface of the mesh, preserving the volume"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_smooth_deform_type = {
	{(PropertyRNA *)&rna_Brush_smear_deform_type, (PropertyRNA *)&rna_Brush_boundary_falloff_type,
	-1, "smooth_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smooth_deform_type), 0, NULL},
	Brush_smooth_deform_type_get, Brush_smooth_deform_type_set, NULL, NULL, NULL, rna_Brush_smooth_deform_type_items, 2, 0
};

static const EnumPropertyItem rna_Brush_smear_deform_type_items[4] = {
	{0, "DRAG", 0, "Drag", ""},
	{1, "PINCH", 0, "Pinch", ""},
	{2, "EXPAND", 0, "Expand", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_smear_deform_type = {
	{(PropertyRNA *)&rna_Brush_slide_deform_type, (PropertyRNA *)&rna_Brush_smooth_deform_type,
	-1, "smear_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smear_deform_type), 0, NULL},
	Brush_smear_deform_type_get, Brush_smear_deform_type_set, NULL, NULL, NULL, rna_Brush_smear_deform_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_slide_deform_type_items[4] = {
	{0, "DRAG", 0, "Drag", ""},
	{1, "PINCH", 0, "Pinch", ""},
	{2, "EXPAND", 0, "Expand", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_slide_deform_type = {
	{(PropertyRNA *)&rna_Brush_boundary_deform_type, (PropertyRNA *)&rna_Brush_smear_deform_type,
	-1, "slide_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, slide_deform_type), 0, NULL},
	Brush_slide_deform_type_get, Brush_slide_deform_type_set, NULL, NULL, NULL, rna_Brush_slide_deform_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_boundary_deform_type_items[7] = {
	{0, "BEND", 0, "Bend", ""},
	{1, "EXPAND", 0, "Expand", ""},
	{2, "INFLATE", 0, "Inflate", ""},
	{3, "GRAB", 0, "Grab", ""},
	{4, "TWIST", 0, "Twist", ""},
	{5, "SMOOTH", 0, "Smooth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_boundary_deform_type = {
	{(PropertyRNA *)&rna_Brush_pose_deform_type, (PropertyRNA *)&rna_Brush_slide_deform_type,
	-1, "boundary_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, boundary_deform_type), 0, NULL},
	Brush_boundary_deform_type_get, Brush_boundary_deform_type_set, NULL, NULL, NULL, rna_Brush_boundary_deform_type_items, 6, 0
};

static const EnumPropertyItem rna_Brush_pose_deform_type_items[4] = {
	{0, "ROTATE_TWIST", 0, "Rotate/Twist", ""},
	{1, "SCALE_TRANSLATE", 0, "Scale/Translate", ""},
	{2, "SQUASH_STRETCH", 0, "Squash & Stretch", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_pose_deform_type = {
	{(PropertyRNA *)&rna_Brush_pose_origin_type, (PropertyRNA *)&rna_Brush_boundary_deform_type,
	-1, "pose_deform_type", 3, 0, 0, 4, 0, "Deformation",
	"Deformation type that is used in the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_deform_type), 0, NULL},
	Brush_pose_deform_type_get, Brush_pose_deform_type_set, NULL, NULL, NULL, rna_Brush_pose_deform_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_pose_origin_type_items[4] = {
	{0, "TOPOLOGY", 0, "Topology", "Sets the rotation origin automatically using the topology and shape of the mesh as a guide"},
	{1, "FACE_SETS", 0, "Face Sets", "Creates a pose segment per face sets, starting from the active face set"},
	{2, "FACE_SETS_FK", 0, "Face Sets FK", "Simulates an FK deformation using the Face Set under the cursor as control"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_pose_origin_type = {
	{(PropertyRNA *)&rna_Brush_jitter_unit, (PropertyRNA *)&rna_Brush_pose_deform_type,
	-1, "pose_origin_type", 3, 0, 0, 4, 0, "Rotation Origins",
	"Method to set the rotation origins for the segments of the brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_origin_type), 0, NULL},
	Brush_pose_origin_type_get, Brush_pose_origin_type_set, NULL, NULL, NULL, rna_Brush_pose_origin_type_items, 3, 0
};

static const EnumPropertyItem rna_Brush_jitter_unit_items[3] = {
	{1073741824, "VIEW", 0, "View", "Jittering happens in screen space, in pixels"},
	{0, "BRUSH", 0, "Brush", "Jittering happens relative to the brush size"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_jitter_unit = {
	{(PropertyRNA *)&rna_Brush_falloff_shape, (PropertyRNA *)&rna_Brush_pose_origin_type,
	-1, "jitter_unit", 3, 0, 0, 4, 0, "Jitter Unit",
	"Jitter in screen space or relative to brush size",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), 0, NULL},
	Brush_jitter_unit_get, Brush_jitter_unit_set, NULL, NULL, NULL, rna_Brush_jitter_unit_items, 2, 0
};

static const EnumPropertyItem rna_Brush_falloff_shape_items[3] = {
	{0, "SPHERE", 0, "Sphere", "Apply brush influence in a Sphere, outwards from the center"},
	{1, "PROJECTED", 0, "Projected", "Apply brush influence in a 2D circle, projected from the view"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_falloff_shape = {
	{(PropertyRNA *)&rna_Brush_size, (PropertyRNA *)&rna_Brush_jitter_unit,
	-1, "falloff_shape", 3, 0, 0, 4, 0, "Falloff Shape",
	"Use projected or spherical falloff",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, falloff_shape), 2, NULL},
	Brush_falloff_shape_get, Brush_falloff_shape_set, NULL, NULL, NULL, rna_Brush_falloff_shape_items, 2, 0
};

IntPropertyRNA rna_Brush_size = {
	{(PropertyRNA *)&rna_Brush_unprojected_radius, (PropertyRNA *)&rna_Brush_falloff_shape,
	-1, "size", 3, 0, 0, 0, 0, "Radius",
	"Radius of the brush in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_size_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_size_get, Brush_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 500, 1, 5000, 1, 35, NULL
};

FloatPropertyRNA rna_Brush_unprojected_radius = {
	{(PropertyRNA *)&rna_Brush_jitter, (PropertyRNA *)&rna_Brush_size,
	-1, "unprojected_radius", 3, 0, 0, 0, 0, "Unprojected Radius",
	"Radius of brush in Blender units",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_size_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_unprojected_radius_get, Brush_unprojected_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 1.0f, -1, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_jitter = {
	{(PropertyRNA *)&rna_Brush_jitter_absolute, (PropertyRNA *)&rna_Brush_unprojected_radius,
	-1, "jitter", 3, 0, 0, 4, 0, "Jitter",
	"Jitter the position of the brush while painting",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, jitter), 5, NULL},
	Brush_jitter_get, Brush_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 1000.0f, 0.1000000015f, 4, 0.0f, NULL
};

IntPropertyRNA rna_Brush_jitter_absolute = {
	{(PropertyRNA *)&rna_Brush_spacing, (PropertyRNA *)&rna_Brush_jitter,
	-1, "jitter_absolute", 3, 0, 0, 4, 0, "Jitter",
	"Jitter the position of the brush in pixels while painting",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, jitter_absolute), 0, NULL},
	Brush_jitter_absolute_get, Brush_jitter_absolute_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000000, 0, 1000000, 1, 0, NULL
};

IntPropertyRNA rna_Brush_spacing = {
	{(PropertyRNA *)&rna_Brush_grad_spacing, (PropertyRNA *)&rna_Brush_jitter_absolute,
	-1, "spacing", 3, 0, 0, 4, 0, "Spacing",
	"Spacing between brush daubs as a percentage of brush diameter",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, spacing), 0, NULL},
	Brush_spacing_get, Brush_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 500, 1, 1000, 5, 10, NULL
};

IntPropertyRNA rna_Brush_grad_spacing = {
	{(PropertyRNA *)&rna_Brush_smooth_stroke_radius, (PropertyRNA *)&rna_Brush_spacing,
	-1, "grad_spacing", 3, 0, 0, 4, 0, "Gradient Spacing",
	"Spacing before brush gradient goes full circle",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gradient_spacing), 0, NULL},
	Brush_grad_spacing_get, Brush_grad_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10000, 1, 10000, 5, 0, NULL
};

IntPropertyRNA rna_Brush_smooth_stroke_radius = {
	{(PropertyRNA *)&rna_Brush_smooth_stroke_factor, (PropertyRNA *)&rna_Brush_grad_spacing,
	-1, "smooth_stroke_radius", 3, 0, 0, 4, 0, "Smooth Stroke Radius",
	"Minimum distance from last point before stroke continues",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smooth_stroke_radius), 0, NULL},
	Brush_smooth_stroke_radius_get, Brush_smooth_stroke_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 200, 10, 200, 1, 75, NULL
};

FloatPropertyRNA rna_Brush_smooth_stroke_factor = {
	{(PropertyRNA *)&rna_Brush_rate, (PropertyRNA *)&rna_Brush_smooth_stroke_radius,
	-1, "smooth_stroke_factor", 3, 0, 0, 4, 0, "Smooth Stroke Factor",
	"Higher values give a smoother stroke",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, smooth_stroke_factor), 5, NULL},
	Brush_smooth_stroke_factor_get, Brush_smooth_stroke_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, 0.9900000095f, 0.5000000000f, 0.9900000095f, 10.0f, 3, 0.8999999762f, NULL
};

FloatPropertyRNA rna_Brush_rate = {
	{(PropertyRNA *)&rna_Brush_color, (PropertyRNA *)&rna_Brush_smooth_stroke_factor,
	-1, "rate", 3, 0, 0, 4, 0, "Rate",
	"Interval between paints for Airbrush",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, rate), 5, NULL},
	Brush_rate_get, Brush_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 0.1000000015f, NULL
};

static float rna_Brush_color_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Brush_color = {
	{(PropertyRNA *)&rna_Brush_secondary_color, (PropertyRNA *)&rna_Brush_rate,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, rgb), 5, NULL},
	NULL, NULL, Brush_color_get, Brush_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_color_default
};

static float rna_Brush_secondary_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_secondary_color = {
	{(PropertyRNA *)&rna_Brush_weight, (PropertyRNA *)&rna_Brush_color,
	-1, "secondary_color", 3, 0, 0, 4, 0, "Secondary Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, secondary_rgb), 5, NULL},
	NULL, NULL, Brush_secondary_color_get, Brush_secondary_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_secondary_color_default
};

FloatPropertyRNA rna_Brush_weight = {
	{(PropertyRNA *)&rna_Brush_strength, (PropertyRNA *)&rna_Brush_secondary_color,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Vertex weight when brush is applied",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, weight), 5, NULL},
	Brush_weight_get, Brush_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Brush_strength = {
	{(PropertyRNA *)&rna_Brush_flow, (PropertyRNA *)&rna_Brush_weight,
	-1, "strength", 3, 0, 0, 4, 0, "Strength",
	"How powerful the effect of the brush is when applied",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, alpha), 5, NULL},
	Brush_strength_get, Brush_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Brush_flow = {
	{(PropertyRNA *)&rna_Brush_wet_mix, (PropertyRNA *)&rna_Brush_strength,
	-1, "flow", 3, 0, 0, 4, 0, "Flow",
	"Amount of paint that is applied per stroke sample",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flow), 5, NULL},
	Brush_flow_get, Brush_flow_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_wet_mix = {
	{(PropertyRNA *)&rna_Brush_wet_persistence, (PropertyRNA *)&rna_Brush_flow,
	-1, "wet_mix", 3, 0, 0, 4, 0, "Wet Mix",
	"Amount of paint that is picked from the surface into the brush color",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, wet_mix), 5, NULL},
	Brush_wet_mix_get, Brush_wet_mix_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_wet_persistence = {
	{(PropertyRNA *)&rna_Brush_density, (PropertyRNA *)&rna_Brush_wet_mix,
	-1, "wet_persistence", 3, 0, 0, 4, 0, "Wet Persistence",
	"Amount of wet paint that stays in the brush after applying paint to the surface",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, wet_persistence), 5, NULL},
	Brush_wet_persistence_get, Brush_wet_persistence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_density = {
	{(PropertyRNA *)&rna_Brush_tip_scale_x, (PropertyRNA *)&rna_Brush_wet_persistence,
	-1, "density", 3, 0, 0, 4, 0, "Density",
	"Amount of random elements that are going to be affected by the brush",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, density), 5, NULL},
	Brush_density_get, Brush_density_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_tip_scale_x = {
	{(PropertyRNA *)&rna_Brush_use_hardness_pressure, (PropertyRNA *)&rna_Brush_density,
	-1, "tip_scale_x", 3, 0, 0, 4, 0, "Tip Scale X",
	"Scale of the brush tip in the X axis",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, tip_scale_x), 5, NULL},
	Brush_tip_scale_x_get, Brush_tip_scale_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Brush_use_hardness_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_hardness_pressure, (PropertyRNA *)&rna_Brush_tip_scale_x,
	-1, "use_hardness_pressure", 1, 0, 0, 0, 0, "Use Pressure for Hardness",
	"Use pressure to modulate hardness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_hardness_pressure_get, Brush_use_hardness_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_invert_hardness_pressure = {
	{(PropertyRNA *)&rna_Brush_use_flow_pressure, (PropertyRNA *)&rna_Brush_use_hardness_pressure,
	-1, "invert_hardness_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Hardness",
	"Invert the modulation of pressure in hardness",
	8, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_invert_hardness_pressure_get, Brush_invert_hardness_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_flow_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_flow_pressure, (PropertyRNA *)&rna_Brush_invert_hardness_pressure,
	-1, "use_flow_pressure", 1, 0, 0, 0, 0, "Use Pressure for Flow",
	"Use pressure to modulate flow",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_flow_pressure_get, Brush_use_flow_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_invert_flow_pressure = {
	{(PropertyRNA *)&rna_Brush_use_wet_mix_pressure, (PropertyRNA *)&rna_Brush_use_flow_pressure,
	-1, "invert_flow_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Flow",
	"Invert the modulation of pressure in flow",
	8, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_invert_flow_pressure_get, Brush_invert_flow_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_wet_mix_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_wet_mix_pressure, (PropertyRNA *)&rna_Brush_invert_flow_pressure,
	-1, "use_wet_mix_pressure", 1, 0, 0, 0, 0, "Use Pressure for Wet Mix",
	"Use pressure to modulate wet mix",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_wet_mix_pressure_get, Brush_use_wet_mix_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_invert_wet_mix_pressure = {
	{(PropertyRNA *)&rna_Brush_use_wet_persistence_pressure, (PropertyRNA *)&rna_Brush_use_wet_mix_pressure,
	-1, "invert_wet_mix_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Wet Mix",
	"Invert the modulation of pressure in wet mix",
	8, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_invert_wet_mix_pressure_get, Brush_invert_wet_mix_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_wet_persistence_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_wet_persistence_pressure, (PropertyRNA *)&rna_Brush_invert_wet_mix_pressure,
	-1, "use_wet_persistence_pressure", 1, 0, 0, 0, 0, "Use Pressure for Wet Persistence",
	"Use pressure to modulate wet persistence",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_wet_persistence_pressure_get, Brush_use_wet_persistence_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_invert_wet_persistence_pressure = {
	{(PropertyRNA *)&rna_Brush_use_density_pressure, (PropertyRNA *)&rna_Brush_use_wet_persistence_pressure,
	-1, "invert_wet_persistence_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Wet Persistence",
	"Invert the modulation of pressure in wet persistence",
	8, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_invert_wet_persistence_pressure_get, Brush_invert_wet_persistence_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_density_pressure = {
	{(PropertyRNA *)&rna_Brush_invert_density_pressure, (PropertyRNA *)&rna_Brush_invert_wet_persistence_pressure,
	-1, "use_density_pressure", 1, 0, 0, 0, 0, "Use Pressure for Density",
	"Use pressure to modulate density",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_density_pressure_get, Brush_use_density_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_invert_density_pressure = {
	{(PropertyRNA *)&rna_Brush_dash_ratio, (PropertyRNA *)&rna_Brush_use_density_pressure,
	-1, "invert_density_pressure", 1, 0, 0, 0, 0, "Invert Pressure for Density",
	"Invert the modulation of pressure in density",
	8, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_invert_density_pressure_get, Brush_invert_density_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_dash_ratio = {
	{(PropertyRNA *)&rna_Brush_dash_samples, (PropertyRNA *)&rna_Brush_invert_density_pressure,
	-1, "dash_ratio", 3, 0, 0, 4, 0, "Dash Ratio",
	"Ratio of samples in a cycle that the brush is enabled",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, dash_ratio), 5, NULL},
	Brush_dash_ratio_get, Brush_dash_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 1.0f, NULL
};

IntPropertyRNA rna_Brush_dash_samples = {
	{(PropertyRNA *)&rna_Brush_plane_offset, (PropertyRNA *)&rna_Brush_dash_ratio,
	-1, "dash_samples", 3, 0, 0, 4, 0, "Dash Length",
	"Length of a dash cycle measured in stroke samples",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, dash_samples), 0, NULL},
	Brush_dash_samples_get, Brush_dash_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10000, 1, 10000, 5, 20, NULL
};

FloatPropertyRNA rna_Brush_plane_offset = {
	{(PropertyRNA *)&rna_Brush_plane_trim, (PropertyRNA *)&rna_Brush_dash_samples,
	-1, "plane_offset", 3, 0, 0, 4, 0, "Plane Offset",
	"Adjust plane on which the brush acts towards or away from the object surface",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, plane_offset), 5, NULL},
	Brush_plane_offset_get, Brush_plane_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -0.5000000000f, 0.5000000000f, -2.0f, 2.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_plane_trim = {
	{(PropertyRNA *)&rna_Brush_height, (PropertyRNA *)&rna_Brush_plane_offset,
	-1, "plane_trim", 3, 0, 0, 4, 0, "Plane Trim",
	"If a vertex is further away from offset plane than this, then it is not affected",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, plane_trim), 5, NULL},
	Brush_plane_trim_get, Brush_plane_trim_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_height = {
	{(PropertyRNA *)&rna_Brush_texture_sample_bias, (PropertyRNA *)&rna_Brush_plane_trim,
	-1, "height", 3, 0, 0, 4, 0, "Brush Height",
	"Affectable height of brush (layer height for layer tool, i.e.)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, height), 5, NULL},
	Brush_height_get, Brush_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.2000000030f, 0.0f, 1.0f, 1.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_texture_sample_bias = {
	{(PropertyRNA *)&rna_Brush_normal_weight, (PropertyRNA *)&rna_Brush_height,
	-1, "texture_sample_bias", 3, 0, 0, 4, 0, "Texture Sample Bias",
	"Value added to texture samples",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, texture_sample_bias), 5, NULL},
	Brush_texture_sample_bias_get, Brush_texture_sample_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_normal_weight = {
	{(PropertyRNA *)&rna_Brush_elastic_deform_volume_preservation, (PropertyRNA *)&rna_Brush_texture_sample_bias,
	-1, "normal_weight", 3, 0, 0, 4, 0, "Normal Weight",
	"How much grab will pull vertices out of surface during a grab",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, normal_weight), 5, NULL},
	Brush_normal_weight_get, Brush_normal_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_elastic_deform_volume_preservation = {
	{(PropertyRNA *)&rna_Brush_rake_factor, (PropertyRNA *)&rna_Brush_normal_weight,
	-1, "elastic_deform_volume_preservation", 3, 0, 0, 4, 0, "Volume Preservation",
	"Poisson ratio for elastic deformation. Higher values preserve volume more, but also lead to more bulging",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, elastic_deform_volume_preservation), 5, NULL},
	Brush_elastic_deform_volume_preservation_get, Brush_elastic_deform_volume_preservation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.8999999762f, 0.0f, 0.8999999762f, 0.0099999998f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_rake_factor = {
	{(PropertyRNA *)&rna_Brush_crease_pinch_factor, (PropertyRNA *)&rna_Brush_elastic_deform_volume_preservation,
	-1, "rake_factor", 3, 0, 0, 4, 0, "Rake",
	"How much grab will follow cursor rotation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, rake_factor), 5, NULL},
	Brush_rake_factor_get, Brush_rake_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_crease_pinch_factor = {
	{(PropertyRNA *)&rna_Brush_pose_offset, (PropertyRNA *)&rna_Brush_rake_factor,
	-1, "crease_pinch_factor", 3, 0, 0, 4, 0, "Crease Brush Pinch Factor",
	"How much the crease brush pinches",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, crease_pinch_factor), 5, NULL},
	Brush_crease_pinch_factor_get, Brush_crease_pinch_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_pose_offset = {
	{(PropertyRNA *)&rna_Brush_disconnected_distance_max, (PropertyRNA *)&rna_Brush_crease_pinch_factor,
	-1, "pose_offset", 3, 0, 0, 4, 0, "Pose Origin Offset",
	"Offset of the pose origin in relation to the brush radius",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_offset), 5, NULL},
	Brush_pose_offset_get, Brush_pose_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_disconnected_distance_max = {
	{(PropertyRNA *)&rna_Brush_boundary_offset, (PropertyRNA *)&rna_Brush_pose_offset,
	-1, "disconnected_distance_max", 3, 0, 0, 4, 0, "Max Element Distance",
	"Maximum distance to search for disconnected loose parts in the mesh",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, disconnected_distance_max), 5, NULL},
	Brush_disconnected_distance_max_get, Brush_disconnected_distance_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.1000000015f, NULL
};

FloatPropertyRNA rna_Brush_boundary_offset = {
	{(PropertyRNA *)&rna_Brush_surface_smooth_shape_preservation, (PropertyRNA *)&rna_Brush_disconnected_distance_max,
	-1, "boundary_offset", 3, 0, 0, 4, 0, "Boundary Origin Offset",
	"Offset of the boundary origin in relation to the brush radius",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, boundary_offset), 5, NULL},
	Brush_boundary_offset_get, Brush_boundary_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 30.0f, 0.0f, 30.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_surface_smooth_shape_preservation = {
	{(PropertyRNA *)&rna_Brush_surface_smooth_current_vertex, (PropertyRNA *)&rna_Brush_boundary_offset,
	-1, "surface_smooth_shape_preservation", 3, 0, 0, 4, 0, "Shape Preservation",
	"How much of the original shape is preserved when smoothing",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, surface_smooth_shape_preservation), 5, NULL},
	Brush_surface_smooth_shape_preservation_get, Brush_surface_smooth_shape_preservation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_surface_smooth_current_vertex = {
	{(PropertyRNA *)&rna_Brush_surface_smooth_iterations, (PropertyRNA *)&rna_Brush_surface_smooth_shape_preservation,
	-1, "surface_smooth_current_vertex", 3, 0, 0, 4, 0, "Per Vertex Displacement",
	"How much the position of each individual vertex influences the final result",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, surface_smooth_current_vertex), 5, NULL},
	Brush_surface_smooth_current_vertex_get, Brush_surface_smooth_current_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Brush_surface_smooth_iterations = {
	{(PropertyRNA *)&rna_Brush_multiplane_scrape_angle, (PropertyRNA *)&rna_Brush_surface_smooth_current_vertex,
	-1, "surface_smooth_iterations", 3, 0, 0, 4, 0, "Iterations",
	"Number of smoothing iterations per brush step",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, surface_smooth_iterations), 0, NULL},
	Brush_surface_smooth_iterations_get, Brush_surface_smooth_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 10, 1, 0, NULL
};

FloatPropertyRNA rna_Brush_multiplane_scrape_angle = {
	{(PropertyRNA *)&rna_Brush_pose_smooth_iterations, (PropertyRNA *)&rna_Brush_surface_smooth_iterations,
	-1, "multiplane_scrape_angle", 3, 0, 0, 4, 0, "Plane Angle",
	"Angle between the planes of the crease",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, multiplane_scrape_angle), 5, NULL},
	Brush_multiplane_scrape_angle_get, Brush_multiplane_scrape_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 160.0f, 0.0f, 160.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Brush_pose_smooth_iterations = {
	{(PropertyRNA *)&rna_Brush_pose_ik_segments, (PropertyRNA *)&rna_Brush_multiplane_scrape_angle,
	-1, "pose_smooth_iterations", 3, 0, 0, 4, 0, "Smooth Iterations",
	"Smooth iterations applied after calculating the pose factor of each vertex",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_smooth_iterations), 0, NULL},
	Brush_pose_smooth_iterations_get, Brush_pose_smooth_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 4, NULL
};

IntPropertyRNA rna_Brush_pose_ik_segments = {
	{(PropertyRNA *)&rna_Brush_tip_roundness, (PropertyRNA *)&rna_Brush_pose_smooth_iterations,
	-1, "pose_ik_segments", 3, 0, 0, 4, 0, "Pose IK Segments",
	"Number of segments of the inverse kinematics chain that will deform the mesh",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, pose_ik_segments), 0, NULL},
	Brush_pose_ik_segments_get, Brush_pose_ik_segments_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 20, 1, 20, 1, 1, NULL
};

FloatPropertyRNA rna_Brush_tip_roundness = {
	{(PropertyRNA *)&rna_Brush_cloth_mass, (PropertyRNA *)&rna_Brush_pose_ik_segments,
	-1, "tip_roundness", 3, 0, 0, 4, 0, "Tip Roundness",
	"Roundness of the brush tip",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, tip_roundness), 5, NULL},
	Brush_tip_roundness_get, Brush_tip_roundness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_cloth_mass = {
	{(PropertyRNA *)&rna_Brush_cloth_damping, (PropertyRNA *)&rna_Brush_tip_roundness,
	-1, "cloth_mass", 3, 0, 0, 4, 0, "Cloth Mass",
	"Mass of each simulation particle",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_mass), 5, NULL},
	Brush_cloth_mass_get, Brush_cloth_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 2.0f, 0.0099999998f, 2.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Brush_cloth_damping = {
	{(PropertyRNA *)&rna_Brush_cloth_sim_limit, (PropertyRNA *)&rna_Brush_cloth_mass,
	-1, "cloth_damping", 3, 0, 0, 4, 0, "Cloth Damping",
	"How much the applied forces are propagated through the cloth",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_damping), 5, NULL},
	Brush_cloth_damping_get, Brush_cloth_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 0.0099999998f, NULL
};

FloatPropertyRNA rna_Brush_cloth_sim_limit = {
	{(PropertyRNA *)&rna_Brush_cloth_sim_falloff, (PropertyRNA *)&rna_Brush_cloth_damping,
	-1, "cloth_sim_limit", 3, 0, 0, 4, 0, "Simulation Limit",
	"Factor added relative to the size of the radius to limit the cloth simulation effects",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_sim_limit), 5, NULL},
	Brush_cloth_sim_limit_get, Brush_cloth_sim_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 10.0f, 0.1000000015f, 10.0f, 10.0f, 3, 2.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_cloth_sim_falloff = {
	{(PropertyRNA *)&rna_Brush_cloth_constraint_softbody_strength, (PropertyRNA *)&rna_Brush_cloth_sim_limit,
	-1, "cloth_sim_falloff", 3, 0, 0, 4, 0, "Simulation Falloff",
	"Area to apply deformation falloff to the effects of the simulation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_sim_falloff), 5, NULL},
	Brush_cloth_sim_falloff_get, Brush_cloth_sim_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.7500000000f, NULL
};

FloatPropertyRNA rna_Brush_cloth_constraint_softbody_strength = {
	{(PropertyRNA *)&rna_Brush_hardness, (PropertyRNA *)&rna_Brush_cloth_sim_falloff,
	-1, "cloth_constraint_softbody_strength", 3, 0, 0, 4, 0, "Soft Body Plasticity",
	"How much the cloth preserves the original shape, acting as a soft body",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cloth_constraint_softbody_strength), 5, NULL},
	Brush_cloth_constraint_softbody_strength_get, Brush_cloth_constraint_softbody_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_hardness = {
	{(PropertyRNA *)&rna_Brush_automasking_boundary_edges_propagation_steps, (PropertyRNA *)&rna_Brush_cloth_constraint_softbody_strength,
	-1, "hardness", 3, 0, 0, 4, 0, "Hardness",
	"How close the brush falloff starts from the edge of the brush",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, hardness), 5, NULL},
	Brush_hardness_get, Brush_hardness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Brush_automasking_boundary_edges_propagation_steps = {
	{(PropertyRNA *)&rna_Brush_auto_smooth_factor, (PropertyRNA *)&rna_Brush_hardness,
	-1, "automasking_boundary_edges_propagation_steps", 3, 0, 0, 4, 0, "Propagation Steps",
	"Distance where boundary edge automasking is going to protect vertices from the fully masked edge",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, automasking_boundary_edges_propagation_steps), 0, NULL},
	Brush_automasking_boundary_edges_propagation_steps_get, Brush_automasking_boundary_edges_propagation_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 20, 1, 20, 1, 1, NULL
};

FloatPropertyRNA rna_Brush_auto_smooth_factor = {
	{(PropertyRNA *)&rna_Brush_topology_rake_factor, (PropertyRNA *)&rna_Brush_automasking_boundary_edges_propagation_steps,
	-1, "auto_smooth_factor", 3, 0, 0, 4, 0, "Auto-Smooth",
	"Amount of smoothing to automatically apply to each stroke",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, autosmooth_factor), 5, NULL},
	Brush_auto_smooth_factor_get, Brush_auto_smooth_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_topology_rake_factor = {
	{(PropertyRNA *)&rna_Brush_tilt_strength_factor, (PropertyRNA *)&rna_Brush_auto_smooth_factor,
	-1, "topology_rake_factor", 3, 0, 0, 4, 0, "Topology Rake",
	"Automatically align edges to the brush direction to generate cleaner topology and define sharp features. Best used on low-poly meshes as it has a performance impact",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, topology_rake_factor), 5, NULL},
	Brush_topology_rake_factor_get, Brush_topology_rake_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_tilt_strength_factor = {
	{(PropertyRNA *)&rna_Brush_normal_radius_factor, (PropertyRNA *)&rna_Brush_topology_rake_factor,
	-1, "tilt_strength_factor", 3, 0, 0, 4, 0, "Tilt Strength",
	"How much the tilt of the pen will affect the brush",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, tilt_strength_factor), 5, NULL},
	Brush_tilt_strength_factor_get, Brush_tilt_strength_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_normal_radius_factor = {
	{(PropertyRNA *)&rna_Brush_area_radius_factor, (PropertyRNA *)&rna_Brush_tilt_strength_factor,
	-1, "normal_radius_factor", 3, 0, 0, 4, 0, "Normal Radius",
	"Ratio between the brush radius and the radius that is going to be used to sample the normal",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, normal_radius_factor), 5, NULL},
	Brush_normal_radius_factor_get, Brush_normal_radius_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_area_radius_factor = {
	{(PropertyRNA *)&rna_Brush_wet_paint_radius_factor, (PropertyRNA *)&rna_Brush_normal_radius_factor,
	-1, "area_radius_factor", 3, 0, 0, 4, 0, "Area Radius",
	"Ratio between the brush radius and the radius that is going to be used to sample the area center",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, area_radius_factor), 5, NULL},
	Brush_area_radius_factor_get, Brush_area_radius_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Brush_wet_paint_radius_factor = {
	{(PropertyRNA *)&rna_Brush_stencil_pos, (PropertyRNA *)&rna_Brush_area_radius_factor,
	-1, "wet_paint_radius_factor", 3, 0, 0, 4, 0, "Wet Paint Radius",
	"Ratio between the brush radius and the radius that is going to be used to sample the color to blend in wet paint",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, wet_paint_radius_factor), 5, NULL},
	Brush_wet_paint_radius_factor_get, Brush_wet_paint_radius_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 0.0010000000f, 3, 0.5000000000f, NULL
};

static float rna_Brush_stencil_pos_default[2] = {
	256.0f,
	256.0f
};

FloatPropertyRNA rna_Brush_stencil_pos = {
	{(PropertyRNA *)&rna_Brush_stencil_dimension, (PropertyRNA *)&rna_Brush_wet_paint_radius_factor,
	-1, "stencil_pos", 3, 0, 0, 4, 0, "Stencil Position",
	"Position of stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, stencil_pos), 5, NULL},
	NULL, NULL, Brush_stencil_pos_get, Brush_stencil_pos_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_stencil_pos_default
};

static float rna_Brush_stencil_dimension_default[2] = {
	256.0f,
	256.0f
};

FloatPropertyRNA rna_Brush_stencil_dimension = {
	{(PropertyRNA *)&rna_Brush_mask_stencil_pos, (PropertyRNA *)&rna_Brush_stencil_pos,
	-1, "stencil_dimension", 3, 0, 0, 4, 0, "Stencil Dimensions",
	"Dimensions of stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, stencil_dimension), 5, NULL},
	NULL, NULL, Brush_stencil_dimension_get, Brush_stencil_dimension_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_stencil_dimension_default
};

static float rna_Brush_mask_stencil_pos_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_mask_stencil_pos = {
	{(PropertyRNA *)&rna_Brush_mask_stencil_dimension, (PropertyRNA *)&rna_Brush_stencil_dimension,
	-1, "mask_stencil_pos", 3, 0, 0, 4, 0, "Mask Stencil Position",
	"Position of mask stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_stencil_pos), 5, NULL},
	NULL, NULL, Brush_mask_stencil_pos_get, Brush_mask_stencil_pos_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_mask_stencil_pos_default
};

static float rna_Brush_mask_stencil_dimension_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_mask_stencil_dimension = {
	{(PropertyRNA *)&rna_Brush_sharp_threshold, (PropertyRNA *)&rna_Brush_mask_stencil_pos,
	-1, "mask_stencil_dimension", 3, 0, 0, 4, 0, "Mask Stencil Dimensions",
	"Dimensions of mask stencil in viewport",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_stencil_dimension), 5, NULL},
	NULL, NULL, Brush_mask_stencil_dimension_get, Brush_mask_stencil_dimension_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_mask_stencil_dimension_default
};

FloatPropertyRNA rna_Brush_sharp_threshold = {
	{(PropertyRNA *)&rna_Brush_fill_threshold, (PropertyRNA *)&rna_Brush_mask_stencil_dimension,
	-1, "sharp_threshold", 3, 0, 0, 4, 0, "Sharp Threshold",
	"Threshold below which, no sharpening is done",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sharp_threshold), 5, NULL},
	Brush_sharp_threshold_get, Brush_sharp_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Brush_fill_threshold = {
	{(PropertyRNA *)&rna_Brush_blur_kernel_radius, (PropertyRNA *)&rna_Brush_sharp_threshold,
	-1, "fill_threshold", 3, 0, 0, 4, 0, "Fill Threshold",
	"Threshold above which filling is not propagated",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, fill_threshold), 5, NULL},
	Brush_fill_threshold_get, Brush_fill_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 100.0f, 1.0f, 3, 0.2000000030f, NULL
};

IntPropertyRNA rna_Brush_blur_kernel_radius = {
	{(PropertyRNA *)&rna_Brush_blur_mode, (PropertyRNA *)&rna_Brush_fill_threshold,
	-1, "blur_kernel_radius", 3, 0, 0, 4, 0, "Kernel Radius",
	"Radius of kernel used for soften and sharpen in pixels",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, blur_kernel_radius), 0, NULL},
	Brush_blur_kernel_radius_get, Brush_blur_kernel_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 50, 1, 10000, 1, 2, NULL
};

static const EnumPropertyItem rna_Brush_blur_mode_items[3] = {
	{1, "BOX", 0, "Box", ""},
	{0, "GAUSSIAN", 0, "Gaussian", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_blur_mode = {
	{(PropertyRNA *)&rna_Brush_falloff_angle, (PropertyRNA *)&rna_Brush_blur_kernel_radius,
	-1, "blur_mode", 3, 0, 0, 4, 0, "Blur Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, blur_mode), 0, NULL},
	Brush_blur_mode_get, Brush_blur_mode_set, NULL, NULL, NULL, rna_Brush_blur_mode_items, 2, 0
};

FloatPropertyRNA rna_Brush_falloff_angle = {
	{(PropertyRNA *)&rna_Brush_use_airbrush, (PropertyRNA *)&rna_Brush_blur_mode,
	-1, "falloff_angle", 3, 0, 0, 4, 0, "Falloff Angle",
	"Paint most on faces pointing towards the view according to this angle",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, falloff_angle), 5, NULL},
	Brush_falloff_angle_get, Brush_falloff_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Brush_use_airbrush = {
	{(PropertyRNA *)&rna_Brush_use_original_normal, (PropertyRNA *)&rna_Brush_falloff_angle,
	-1, "use_airbrush", 3, 0, 0, 0, 0, "Airbrush",
	"Keep applying paint effect while holding mouse (spray)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_airbrush_get, Brush_use_airbrush_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_original_normal = {
	{(PropertyRNA *)&rna_Brush_use_original_plane, (PropertyRNA *)&rna_Brush_use_airbrush,
	-1, "use_original_normal", 3, 0, 0, 0, 0, "Original Normal",
	"When locked keep using normal of surface where stroke was initiated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_original_normal_get, Brush_use_original_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_original_plane = {
	{(PropertyRNA *)&rna_Brush_use_automasking_topology, (PropertyRNA *)&rna_Brush_use_original_normal,
	-1, "use_original_plane", 3, 0, 0, 0, 0, "Original Plane",
	"When locked keep using the plane origin of surface where stroke was initiated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_original_plane_get, Brush_use_original_plane_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_automasking_topology = {
	{(PropertyRNA *)&rna_Brush_use_automasking_face_sets, (PropertyRNA *)&rna_Brush_use_original_plane,
	-1, "use_automasking_topology", 3, 0, 0, 0, 0, "Topology Auto-Masking",
	"Affect only vertices connected to the active vertex under the brush",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_automasking_topology_get, Brush_use_automasking_topology_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_automasking_face_sets = {
	{(PropertyRNA *)&rna_Brush_use_automasking_boundary_edges, (PropertyRNA *)&rna_Brush_use_automasking_topology,
	-1, "use_automasking_face_sets", 3, 0, 0, 0, 0, "Face Sets Auto-Masking",
	"Affect only vertices that share Face Sets with the active vertex",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_automasking_face_sets_get, Brush_use_automasking_face_sets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_automasking_boundary_edges = {
	{(PropertyRNA *)&rna_Brush_use_automasking_boundary_face_sets, (PropertyRNA *)&rna_Brush_use_automasking_face_sets,
	-1, "use_automasking_boundary_edges", 3, 0, 0, 0, 0, "Mesh Boundary Auto-Masking",
	"Do not affect non manifold boundary edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_automasking_boundary_edges_get, Brush_use_automasking_boundary_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_automasking_boundary_face_sets = {
	{(PropertyRNA *)&rna_Brush_use_scene_spacing, (PropertyRNA *)&rna_Brush_use_automasking_boundary_edges,
	-1, "use_automasking_boundary_face_sets", 3, 0, 0, 0, 0, "Face Sets Boundary Automasking",
	"Do not affect vertices that belong to a Face Set boundary",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_automasking_boundary_face_sets_get, Brush_use_automasking_boundary_face_sets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Brush_use_scene_spacing_items[3] = {
	{0, "VIEW", 0, "View", "Calculate brush spacing relative to the view"},
	{131072, "SCENE", 0, "Scene", "Calculate brush spacing relative to the scene using the stroke location"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_use_scene_spacing = {
	{(PropertyRNA *)&rna_Brush_use_grab_active_vertex, (PropertyRNA *)&rna_Brush_use_automasking_boundary_face_sets,
	-1, "use_scene_spacing", 3, 0, 0, 4, 0, "Spacing Distance",
	"Calculate the brush spacing using view or scene distance",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), 0, NULL},
	Brush_use_scene_spacing_get, Brush_use_scene_spacing_set, NULL, NULL, NULL, rna_Brush_use_scene_spacing_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_grab_active_vertex = {
	{(PropertyRNA *)&rna_Brush_use_grab_silhouette, (PropertyRNA *)&rna_Brush_use_scene_spacing,
	-1, "use_grab_active_vertex", 3, 0, 0, 0, 0, "Grab Active Vertex",
	"Apply the maximum grab strength to the active vertex instead of the cursor location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_grab_active_vertex_get, Brush_use_grab_active_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_grab_silhouette = {
	{(PropertyRNA *)&rna_Brush_use_paint_antialiasing, (PropertyRNA *)&rna_Brush_use_grab_active_vertex,
	-1, "use_grab_silhouette", 3, 0, 0, 0, 0, "Grab Silhouette",
	"Grabs trying to automask the silhouette of the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_grab_silhouette_get, Brush_use_grab_silhouette_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_antialiasing = {
	{(PropertyRNA *)&rna_Brush_use_multiplane_scrape_dynamic, (PropertyRNA *)&rna_Brush_use_grab_silhouette,
	-1, "use_paint_antialiasing", 3, 0, 0, 0, 0, "Anti-Aliasing",
	"Smooths the edges of the strokes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_antialiasing_get, Brush_use_paint_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_multiplane_scrape_dynamic = {
	{(PropertyRNA *)&rna_Brush_show_multiplane_scrape_planes_preview, (PropertyRNA *)&rna_Brush_use_paint_antialiasing,
	-1, "use_multiplane_scrape_dynamic", 3, 0, 0, 0, 0, "Dynamic Mode",
	"The angle between the planes changes during the stroke to fit the surface under the cursor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_multiplane_scrape_dynamic_get, Brush_use_multiplane_scrape_dynamic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_show_multiplane_scrape_planes_preview = {
	{(PropertyRNA *)&rna_Brush_use_pose_ik_anchored, (PropertyRNA *)&rna_Brush_use_multiplane_scrape_dynamic,
	-1, "show_multiplane_scrape_planes_preview", 3, 0, 0, 0, 0, "Show Cursor Preview",
	"Preview the scrape planes in the cursor during the stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_show_multiplane_scrape_planes_preview_get, Brush_show_multiplane_scrape_planes_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pose_ik_anchored = {
	{(PropertyRNA *)&rna_Brush_use_pose_lock_rotation, (PropertyRNA *)&rna_Brush_show_multiplane_scrape_planes_preview,
	-1, "use_pose_ik_anchored", 3, 0, 0, 0, 0, "Keep Anchor Point",
	"Keep the position of the last segment in the IK chain fixed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pose_ik_anchored_get, Brush_use_pose_ik_anchored_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pose_lock_rotation = {
	{(PropertyRNA *)&rna_Brush_use_connected_only, (PropertyRNA *)&rna_Brush_use_pose_ik_anchored,
	-1, "use_pose_lock_rotation", 3, 0, 0, 0, 0, "Lock Rotation When Scaling",
	"Do not rotate the segment when using the scale deform mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pose_lock_rotation_get, Brush_use_pose_lock_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_connected_only = {
	{(PropertyRNA *)&rna_Brush_use_cloth_pin_simulation_boundary, (PropertyRNA *)&rna_Brush_use_pose_lock_rotation,
	-1, "use_connected_only", 3, 0, 0, 0, 0, "Connected Only",
	"Affect only topologically connected elements",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_connected_only_get, Brush_use_connected_only_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_cloth_pin_simulation_boundary = {
	{(PropertyRNA *)&rna_Brush_use_cloth_collision, (PropertyRNA *)&rna_Brush_use_connected_only,
	-1, "use_cloth_pin_simulation_boundary", 3, 0, 0, 0, 0, "Pin Simulation Boundary",
	"Lock the position of the vertices in the simulation falloff area to avoid artifacts and create a softer transition with unaffected areas",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_cloth_pin_simulation_boundary_get, Brush_use_cloth_pin_simulation_boundary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_cloth_collision = {
	{(PropertyRNA *)&rna_Brush_invert_to_scrape_fill, (PropertyRNA *)&rna_Brush_use_cloth_pin_simulation_boundary,
	-1, "use_cloth_collision", 3, 0, 0, 0, 0, "Enable Collision",
	"Collide with objects during the simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_cloth_collision_get, Brush_use_cloth_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_invert_to_scrape_fill = {
	{(PropertyRNA *)&rna_Brush_use_pressure_strength, (PropertyRNA *)&rna_Brush_use_cloth_collision,
	-1, "invert_to_scrape_fill", 3, 0, 0, 0, 0, "Invert to Scrape or Fill",
	"Use Scrape or Fill tool when inverting this brush instead of inverting its displacement direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_invert_to_scrape_fill_get, Brush_invert_to_scrape_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_strength = {
	{(PropertyRNA *)&rna_Brush_use_offset_pressure, (PropertyRNA *)&rna_Brush_invert_to_scrape_fill,
	-1, "use_pressure_strength", 3, 0, 0, 0, 0, "Strength Pressure",
	"Enable tablet pressure sensitivity for strength",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pressure_strength_get, Brush_use_pressure_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_offset_pressure = {
	{(PropertyRNA *)&rna_Brush_use_pressure_area_radius, (PropertyRNA *)&rna_Brush_use_pressure_strength,
	-1, "use_offset_pressure", 3, 0, 0, 0, 0, "Plane Offset Pressure",
	"Enable tablet pressure sensitivity for offset",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_offset_pressure_get, Brush_use_offset_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_area_radius = {
	{(PropertyRNA *)&rna_Brush_use_pressure_size, (PropertyRNA *)&rna_Brush_use_offset_pressure,
	-1, "use_pressure_area_radius", 3, 0, 0, 0, 0, "Area Radius Pressure",
	"Enable tablet pressure sensitivity for area radius",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pressure_area_radius_get, Brush_use_pressure_area_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_size = {
	{(PropertyRNA *)&rna_Brush_use_pressure_jitter, (PropertyRNA *)&rna_Brush_use_pressure_area_radius,
	-1, "use_pressure_size", 3, 0, 0, 0, 0, "Size Pressure",
	"Enable tablet pressure sensitivity for size",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pressure_size_get, Brush_use_pressure_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_jitter = {
	{(PropertyRNA *)&rna_Brush_use_pressure_spacing, (PropertyRNA *)&rna_Brush_use_pressure_size,
	-1, "use_pressure_jitter", 3, 0, 0, 0, 0, "Jitter Pressure",
	"Enable tablet pressure sensitivity for jitter",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pressure_jitter_get, Brush_use_pressure_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_pressure_spacing = {
	{(PropertyRNA *)&rna_Brush_use_pressure_masking, (PropertyRNA *)&rna_Brush_use_pressure_jitter,
	-1, "use_pressure_spacing", 3, 0, 0, 0, 0, "Spacing Pressure",
	"Enable tablet pressure sensitivity for spacing",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_pressure_spacing_get, Brush_use_pressure_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Brush_use_pressure_masking_items[4] = {
	{0, "NONE", 0, "Off", ""},
	{2, "RAMP", 67, "Ramp", ""},
	{4, "CUTOFF", 67, "Cutoff", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_use_pressure_masking = {
	{(PropertyRNA *)&rna_Brush_use_inverse_smooth_pressure, (PropertyRNA *)&rna_Brush_use_pressure_spacing,
	-1, "use_pressure_masking", 3, 0, 0, 4, 0, "Mask Pressure Mode",
	"Pen pressure makes texture influence smaller",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_pressure), 0, NULL},
	Brush_use_pressure_masking_get, Brush_use_pressure_masking_set, NULL, NULL, NULL, rna_Brush_use_pressure_masking_items, 3, 0
};

BoolPropertyRNA rna_Brush_use_inverse_smooth_pressure = {
	{(PropertyRNA *)&rna_Brush_use_plane_trim, (PropertyRNA *)&rna_Brush_use_pressure_masking,
	-1, "use_inverse_smooth_pressure", 3, 0, 0, 0, 0, "Inverse Smooth Pressure",
	"Lighter pressure causes more smoothing to be applied",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_inverse_smooth_pressure_get, Brush_use_inverse_smooth_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_plane_trim = {
	{(PropertyRNA *)&rna_Brush_use_frontface, (PropertyRNA *)&rna_Brush_use_inverse_smooth_pressure,
	-1, "use_plane_trim", 3, 0, 0, 0, 0, "Use Plane Trim",
	"Enable Plane Trim",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_plane_trim_get, Brush_use_plane_trim_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_frontface = {
	{(PropertyRNA *)&rna_Brush_use_frontface_falloff, (PropertyRNA *)&rna_Brush_use_plane_trim,
	-1, "use_frontface", 3, 0, 0, 0, 0, "Use Front-Face",
	"Brush only affects vertices that face the viewer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_frontface_get, Brush_use_frontface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_frontface_falloff = {
	{(PropertyRNA *)&rna_Brush_use_anchor, (PropertyRNA *)&rna_Brush_use_frontface,
	-1, "use_frontface_falloff", 3, 0, 0, 0, 0, "Use Front-Face Falloff",
	"Blend brush influence by how much they face the front",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_frontface_falloff_get, Brush_use_frontface_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_anchor = {
	{(PropertyRNA *)&rna_Brush_use_space, (PropertyRNA *)&rna_Brush_use_frontface_falloff,
	-1, "use_anchor", 3, 0, 0, 0, 0, "Anchored",
	"Keep the brush anchored to the initial location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_anchor_get, Brush_use_anchor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_space = {
	{(PropertyRNA *)&rna_Brush_use_line, (PropertyRNA *)&rna_Brush_use_anchor,
	-1, "use_space", 3, 0, 0, 0, 0, "Space",
	"Limit brush application to the distance specified by spacing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_space_get, Brush_use_space_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_line = {
	{(PropertyRNA *)&rna_Brush_use_curve, (PropertyRNA *)&rna_Brush_use_space,
	-1, "use_line", 3, 0, 0, 0, 0, "Line",
	"Draw a line with dabs separated according to spacing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_line_get, Brush_use_line_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_curve = {
	{(PropertyRNA *)&rna_Brush_use_smooth_stroke, (PropertyRNA *)&rna_Brush_use_line,
	-1, "use_curve", 3, 0, 0, 0, 0, "Curve",
	"Define the stroke curve with a bezier curve. Dabs are separated according to spacing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_curve_get, Brush_use_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_smooth_stroke = {
	{(PropertyRNA *)&rna_Brush_use_persistent, (PropertyRNA *)&rna_Brush_use_curve,
	-1, "use_smooth_stroke", 3, 0, 0, 0, 0, "Smooth Stroke",
	"Brush lags behind mouse and follows a smoother path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_smooth_stroke_get, Brush_use_smooth_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_persistent = {
	{(PropertyRNA *)&rna_Brush_use_accumulate, (PropertyRNA *)&rna_Brush_use_smooth_stroke,
	-1, "use_persistent", 3, 0, 0, 0, 0, "Persistent",
	"Sculpt on a persistent layer of the mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_persistent_get, Brush_use_persistent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_accumulate = {
	{(PropertyRNA *)&rna_Brush_use_space_attenuation, (PropertyRNA *)&rna_Brush_use_persistent,
	-1, "use_accumulate", 3, 0, 0, 0, 0, "Accumulate",
	"Accumulate stroke daubs on top of each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_accumulate_get, Brush_use_accumulate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_space_attenuation = {
	{(PropertyRNA *)&rna_Brush_use_adaptive_space, (PropertyRNA *)&rna_Brush_use_accumulate,
	-1, "use_space_attenuation", 3, 0, 0, 0, 0, "Adjust Strength for Spacing",
	"Automatically adjust strength to give consistent results for different spacings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_space_attenuation_get, Brush_use_space_attenuation_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_adaptive_space = {
	{(PropertyRNA *)&rna_Brush_use_locked_size, (PropertyRNA *)&rna_Brush_use_space_attenuation,
	-1, "use_adaptive_space", 3, 0, 0, 0, 0, "Adaptive Spacing",
	"Space daubs according to surface orientation instead of screen space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_adaptive_space_get, Brush_use_adaptive_space_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Brush_use_locked_size_items[3] = {
	{0, "VIEW", 0, "View", "Measure brush size relative to the view"},
	{1048576, "SCENE", 0, "Scene", "Measure brush size relative to the scene"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_use_locked_size = {
	{(PropertyRNA *)&rna_Brush_color_type, (PropertyRNA *)&rna_Brush_use_adaptive_space,
	-1, "use_locked_size", 3, 0, 0, 4, 0, "Radius Unit",
	"Measure brush size relative to the view or the scene",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, flag), 0, NULL},
	Brush_use_locked_size_get, Brush_use_locked_size_set, NULL, NULL, NULL, rna_Brush_use_locked_size_items, 2, 0
};

static const EnumPropertyItem rna_Brush_color_type_items[3] = {
	{0, "COLOR", 0, "Color", "Paint with a single color"},
	{2097152, "GRADIENT", 0, "Gradient", "Paint with a gradient"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_color_type = {
	{(PropertyRNA *)&rna_Brush_use_edge_to_edge, (PropertyRNA *)&rna_Brush_use_locked_size,
	-1, "color_type", 3, 0, 0, 0, 0, "Color Type",
	"Use single color or gradient when painting",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_color_type_get, Brush_color_type_set, NULL, NULL, NULL, rna_Brush_color_type_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_edge_to_edge = {
	{(PropertyRNA *)&rna_Brush_use_restore_mesh, (PropertyRNA *)&rna_Brush_color_type,
	-1, "use_edge_to_edge", 3, 0, 0, 0, 0, "Edge-to-Edge",
	"Drag anchor brush from edge-to-edge",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_edge_to_edge_get, Brush_use_edge_to_edge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_restore_mesh = {
	{(PropertyRNA *)&rna_Brush_use_alpha, (PropertyRNA *)&rna_Brush_use_edge_to_edge,
	-1, "use_restore_mesh", 3, 0, 0, 0, 0, "Restore Mesh",
	"Allow a single dot to be carefully positioned",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_restore_mesh_get, Brush_use_restore_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_alpha = {
	{(PropertyRNA *)&rna_Brush_curve, (PropertyRNA *)&rna_Brush_use_restore_mesh,
	-1, "use_alpha", 3, 0, 0, 0, 0, "Affect Alpha",
	"When this is disabled, lock alpha while painting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_alpha_get, Brush_use_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Brush_curve = {
	{(PropertyRNA *)&rna_Brush_paint_curve, (PropertyRNA *)&rna_Brush_use_alpha,
	-1, "curve", 8650752, 0, 0, 0, 0, "Curve",
	"Editable falloff curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_Brush_paint_curve = {
	{(PropertyRNA *)&rna_Brush_gradient, (PropertyRNA *)&rna_Brush_curve,
	-1, "paint_curve", 8388801, 0, 0, 0, 0, "Paint Curve",
	"Active paint curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_paint_curve_get, Brush_paint_curve_set, NULL, NULL,&RNA_PaintCurve
};

PointerPropertyRNA rna_Brush_gradient = {
	{(PropertyRNA *)&rna_Brush_gradient_stroke_mode, (PropertyRNA *)&rna_Brush_paint_curve,
	-1, "gradient", 8388608, 0, 0, 0, 0, "Gradient",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_gradient_get, NULL, NULL, NULL,&RNA_ColorRamp
};

static const EnumPropertyItem rna_Brush_gradient_stroke_mode_items[4] = {
	{0, "PRESSURE", 0, "Pressure", ""},
	{1, "SPACING_REPEAT", 0, "Repeat", ""},
	{2, "SPACING_CLAMP", 0, "Clamp", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_gradient_stroke_mode = {
	{(PropertyRNA *)&rna_Brush_gradient_fill_mode, (PropertyRNA *)&rna_Brush_gradient,
	-1, "gradient_stroke_mode", 3, 0, 0, 4, 0, "Gradient Stroke Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gradient_stroke_mode), 2, NULL},
	Brush_gradient_stroke_mode_get, Brush_gradient_stroke_mode_set, NULL, NULL, NULL, rna_Brush_gradient_stroke_mode_items, 3, 0
};

static const EnumPropertyItem rna_Brush_gradient_fill_mode_items[3] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "RADIAL", 0, "Radial", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_gradient_fill_mode = {
	{(PropertyRNA *)&rna_Brush_use_primary_overlay, (PropertyRNA *)&rna_Brush_gradient_stroke_mode,
	-1, "gradient_fill_mode", 3, 0, 0, 4, 0, "Gradient Fill Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, gradient_fill_mode), 2, NULL},
	Brush_gradient_fill_mode_get, Brush_gradient_fill_mode_set, NULL, NULL, NULL, rna_Brush_gradient_fill_mode_items, 2, 0
};

BoolPropertyRNA rna_Brush_use_primary_overlay = {
	{(PropertyRNA *)&rna_Brush_use_secondary_overlay, (PropertyRNA *)&rna_Brush_gradient_fill_mode,
	-1, "use_primary_overlay", 3, 0, 0, 0, 0, "Use Texture Overlay",
	"Show texture in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_primary_overlay_get, Brush_use_primary_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_secondary_overlay = {
	{(PropertyRNA *)&rna_Brush_use_cursor_overlay, (PropertyRNA *)&rna_Brush_use_primary_overlay,
	-1, "use_secondary_overlay", 3, 0, 0, 0, 0, "Use Texture Overlay",
	"Show texture in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_secondary_overlay_get, Brush_use_secondary_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_cursor_overlay = {
	{(PropertyRNA *)&rna_Brush_use_cursor_overlay_override, (PropertyRNA *)&rna_Brush_use_secondary_overlay,
	-1, "use_cursor_overlay", 3, 0, 0, 0, 0, "Use Cursor Overlay",
	"Show cursor in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_cursor_overlay_get, Brush_use_cursor_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_cursor_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_primary_overlay_override, (PropertyRNA *)&rna_Brush_use_cursor_overlay,
	-1, "use_cursor_overlay_override", 3, 0, 0, 0, 0, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_cursor_overlay_override_get, Brush_use_cursor_overlay_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_primary_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_secondary_overlay_override, (PropertyRNA *)&rna_Brush_use_cursor_overlay_override,
	-1, "use_primary_overlay_override", 3, 0, 0, 0, 0, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_primary_overlay_override_get, Brush_use_primary_overlay_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_secondary_overlay_override = {
	{(PropertyRNA *)&rna_Brush_use_paint_sculpt, (PropertyRNA *)&rna_Brush_use_primary_overlay_override,
	-1, "use_secondary_overlay_override", 3, 0, 0, 0, 0, "Override Overlay",
	"Don\'t show overlay during a stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_secondary_overlay_override_get, Brush_use_secondary_overlay_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_sculpt = {
	{(PropertyRNA *)&rna_Brush_use_paint_uv_sculpt, (PropertyRNA *)&rna_Brush_use_secondary_overlay_override,
	-1, "use_paint_sculpt", 3, 0, 0, 0, 0, "Use Sculpt",
	"Use this brush in sculpt mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_sculpt_get, Brush_use_paint_sculpt_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_paint_uv_sculpt = {
	{(PropertyRNA *)&rna_Brush_use_paint_vertex, (PropertyRNA *)&rna_Brush_use_paint_sculpt,
	-1, "use_paint_uv_sculpt", 3, 0, 0, 0, 0, "Use UV Sculpt",
	"Use this brush in UV sculpt mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_uv_sculpt_get, Brush_use_paint_uv_sculpt_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_paint_vertex = {
	{(PropertyRNA *)&rna_Brush_use_paint_weight, (PropertyRNA *)&rna_Brush_use_paint_uv_sculpt,
	-1, "use_paint_vertex", 3, 0, 0, 0, 0, "Use Vertex",
	"Use this brush in vertex paint mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_vertex_get, Brush_use_paint_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_paint_weight = {
	{(PropertyRNA *)&rna_Brush_use_paint_image, (PropertyRNA *)&rna_Brush_use_paint_vertex,
	-1, "use_paint_weight", 3, 0, 0, 0, 0, "Use Weight",
	"Use this brush in weight paint mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_weight_get, Brush_use_paint_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_paint_image = {
	{(PropertyRNA *)&rna_Brush_use_paint_grease_pencil, (PropertyRNA *)&rna_Brush_use_paint_weight,
	-1, "use_paint_image", 3, 0, 0, 0, 0, "Use Texture",
	"Use this brush in texture paint mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_image_get, Brush_use_paint_image_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Brush_use_paint_grease_pencil = {
	{(PropertyRNA *)&rna_Brush_use_vertex_grease_pencil, (PropertyRNA *)&rna_Brush_use_paint_image,
	-1, "use_paint_grease_pencil", 3, 0, 0, 0, 0, "Use Paint",
	"Use this brush in grease pencil drawing mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_paint_grease_pencil_get, Brush_use_paint_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Brush_use_vertex_grease_pencil = {
	{(PropertyRNA *)&rna_Brush_texture_slot, (PropertyRNA *)&rna_Brush_use_paint_grease_pencil,
	-1, "use_vertex_grease_pencil", 3, 0, 0, 0, 0, "Use Vertex",
	"Use this brush in grease pencil vertex color mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_vertex_grease_pencil_get, Brush_use_vertex_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Brush_texture_slot = {
	{(PropertyRNA *)&rna_Brush_texture, (PropertyRNA *)&rna_Brush_use_vertex_grease_pencil,
	-1, "texture_slot", 8388608, 0, 0, 0, 0, "Texture Slot",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_texture_slot_get, NULL, NULL, NULL,&RNA_BrushTextureSlot
};

PointerPropertyRNA rna_Brush_texture = {
	{(PropertyRNA *)&rna_Brush_mask_texture_slot, (PropertyRNA *)&rna_Brush_texture_slot,
	-1, "texture", 12583105, 0, 0, 0, 0, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Brush_main_tex_update, 134217728, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_texture_get, Brush_texture_set, NULL, NULL,&RNA_Texture
};

PointerPropertyRNA rna_Brush_mask_texture_slot = {
	{(PropertyRNA *)&rna_Brush_mask_texture, (PropertyRNA *)&rna_Brush_texture,
	-1, "mask_texture_slot", 8388608, 0, 0, 0, 0, "Mask Texture Slot",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_mask_texture_slot_get, NULL, NULL, NULL,&RNA_BrushTextureSlot
};

PointerPropertyRNA rna_Brush_mask_texture = {
	{(PropertyRNA *)&rna_Brush_texture_overlay_alpha, (PropertyRNA *)&rna_Brush_mask_texture_slot,
	-1, "mask_texture", 12583105, 0, 0, 0, 0, "Mask Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Brush_secondary_tex_update, 134217728, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_mask_texture_get, Brush_mask_texture_set, NULL, NULL,&RNA_Texture
};

IntPropertyRNA rna_Brush_texture_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_mask_overlay_alpha, (PropertyRNA *)&rna_Brush_mask_texture,
	-1, "texture_overlay_alpha", 3, 0, 0, 4, 0, "Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, texture_overlay_alpha), 0, NULL},
	Brush_texture_overlay_alpha_get, Brush_texture_overlay_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 33, NULL
};

IntPropertyRNA rna_Brush_mask_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_cursor_overlay_alpha, (PropertyRNA *)&rna_Brush_texture_overlay_alpha,
	-1, "mask_overlay_alpha", 3, 0, 0, 4, 0, "Mask Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, mask_overlay_alpha), 0, NULL},
	Brush_mask_overlay_alpha_get, Brush_mask_overlay_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 33, NULL
};

IntPropertyRNA rna_Brush_cursor_overlay_alpha = {
	{(PropertyRNA *)&rna_Brush_cursor_color_add, (PropertyRNA *)&rna_Brush_mask_overlay_alpha,
	-1, "cursor_overlay_alpha", 3, 0, 0, 4, 0, "Mask Texture Overlay Alpha",
	"",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, cursor_overlay_alpha), 0, NULL},
	Brush_cursor_overlay_alpha_get, Brush_cursor_overlay_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 33, NULL
};

static float rna_Brush_cursor_color_add_default[4] = {
	1.0f,
	0.3899999857f,
	0.3899999857f,
	0.8999999762f
};

FloatPropertyRNA rna_Brush_cursor_color_add = {
	{(PropertyRNA *)&rna_Brush_cursor_color_subtract, (PropertyRNA *)&rna_Brush_cursor_overlay_alpha,
	-1, "cursor_color_add", 3, 0, 0, 4, 0, "Add Color",
	"Color of cursor when adding",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, add_col), 5, NULL},
	NULL, NULL, Brush_cursor_color_add_get, Brush_cursor_color_add_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_add_default
};

static float rna_Brush_cursor_color_subtract_default[4] = {
	0.3899999857f,
	0.3899999857f,
	1.0f,
	0.8999999762f
};

FloatPropertyRNA rna_Brush_cursor_color_subtract = {
	{(PropertyRNA *)&rna_Brush_use_custom_icon, (PropertyRNA *)&rna_Brush_cursor_color_add,
	-1, "cursor_color_subtract", 3, 0, 0, 4, 0, "Subtract Color",
	"Color of cursor when subtracting",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, sub_col), 5, NULL},
	NULL, NULL, Brush_cursor_color_subtract_get, Brush_cursor_color_subtract_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_subtract_default
};

BoolPropertyRNA rna_Brush_use_custom_icon = {
	{(PropertyRNA *)&rna_Brush_icon_filepath, (PropertyRNA *)&rna_Brush_cursor_color_subtract,
	-1, "use_custom_icon", 3, 0, 0, 0, 0, "Custom Icon",
	"Set the brush icon from an image file",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_icon_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_use_custom_icon_get, Brush_use_custom_icon_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_Brush_icon_filepath = {
	{(PropertyRNA *)&rna_Brush_clone_image, (PropertyRNA *)&rna_Brush_use_custom_icon,
	-1, "icon_filepath", 262145, 0, 0, 0, 0, "Brush Icon Filepath",
	"File path to brush icon",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_Brush_icon_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_icon_filepath_get, Brush_icon_filepath_length, Brush_icon_filepath_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

PointerPropertyRNA rna_Brush_clone_image = {
	{(PropertyRNA *)&rna_Brush_clone_alpha, (PropertyRNA *)&rna_Brush_icon_filepath,
	-1, "clone_image", 8388801, 0, 0, 0, 0, "Clone Image",
	"Image for clone tool",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 268697600, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_clone_image_get, Brush_clone_image_set, NULL, rna_Brush_imagetype_poll,&RNA_Image
};

FloatPropertyRNA rna_Brush_clone_alpha = {
	{(PropertyRNA *)&rna_Brush_clone_offset, (PropertyRNA *)&rna_Brush_clone_image,
	-1, "clone_alpha", 3, 0, 0, 4, 0, "Clone Alpha",
	"Opacity of clone image display",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 268697600, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, clone.alpha), 5, NULL},
	Brush_clone_alpha_get, Brush_clone_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

static float rna_Brush_clone_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_clone_offset = {
	{(PropertyRNA *)&rna_Brush_brush_capabilities, (PropertyRNA *)&rna_Brush_clone_alpha,
	-1, "clone_offset", 3, 0, 0, 4, 0, "Clone Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 268697600, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Brush, clone.offset), 5, NULL},
	NULL, NULL, Brush_clone_offset_get, Brush_clone_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_clone_offset_default
};

PointerPropertyRNA rna_Brush_brush_capabilities = {
	{(PropertyRNA *)&rna_Brush_sculpt_capabilities, (PropertyRNA *)&rna_Brush_clone_offset,
	-1, "brush_capabilities", 8650752, 0, 0, 0, 0, "Brush Capabilities",
	"Brush\'s capabilities",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_brush_capabilities_get, NULL, NULL, NULL,&RNA_BrushCapabilities
};

PointerPropertyRNA rna_Brush_sculpt_capabilities = {
	{(PropertyRNA *)&rna_Brush_image_paint_capabilities, (PropertyRNA *)&rna_Brush_brush_capabilities,
	-1, "sculpt_capabilities", 8650752, 0, 0, 0, 0, "Sculpt Capabilities",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_sculpt_capabilities_get, NULL, NULL, NULL,&RNA_BrushCapabilitiesSculpt
};

PointerPropertyRNA rna_Brush_image_paint_capabilities = {
	{(PropertyRNA *)&rna_Brush_vertex_paint_capabilities, (PropertyRNA *)&rna_Brush_sculpt_capabilities,
	-1, "image_paint_capabilities", 8650752, 0, 0, 0, 0, "Image Paint Capabilities",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_image_paint_capabilities_get, NULL, NULL, NULL,&RNA_BrushCapabilitiesImagePaint
};

PointerPropertyRNA rna_Brush_vertex_paint_capabilities = {
	{(PropertyRNA *)&rna_Brush_weight_paint_capabilities, (PropertyRNA *)&rna_Brush_image_paint_capabilities,
	-1, "vertex_paint_capabilities", 8650752, 0, 0, 0, 0, "Vertex Paint Capabilities",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_vertex_paint_capabilities_get, NULL, NULL, NULL,&RNA_BrushCapabilitiesVertexPaint
};

PointerPropertyRNA rna_Brush_weight_paint_capabilities = {
	{(PropertyRNA *)&rna_Brush_gpencil_settings, (PropertyRNA *)&rna_Brush_vertex_paint_capabilities,
	-1, "weight_paint_capabilities", 8650752, 0, 0, 0, 0, "Weight Paint Capabilities",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_weight_paint_capabilities_get, NULL, NULL, NULL,&RNA_BrushCapabilitiesWeightPaint
};

PointerPropertyRNA rna_Brush_gpencil_settings = {
	{(PropertyRNA *)&rna_Brush_curves_sculpt_settings, (PropertyRNA *)&rna_Brush_weight_paint_capabilities,
	-1, "gpencil_settings", 8388608, 0, 0, 0, 0, "Gpencil Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_gpencil_settings_get, NULL, NULL, NULL,&RNA_BrushGpencilSettings
};

PointerPropertyRNA rna_Brush_curves_sculpt_settings = {
	{NULL, (PropertyRNA *)&rna_Brush_gpencil_settings,
	-1, "curves_sculpt_settings", 8388608, 0, 0, 0, 0, "Curves Sculpt Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Brush_curves_sculpt_settings_get, NULL, NULL, NULL,&RNA_BrushCurvesSculptSettings
};

StructRNA RNA_Brush = {
	{(ContainerRNA *)&RNA_BrushCapabilities, (ContainerRNA *)&RNA_BoidSettings,
	NULL,
	{(PropertyRNA *)&rna_Brush_blend, (PropertyRNA *)&rna_Brush_curves_sculpt_settings}},
	"Brush", NULL, NULL, 519, NULL, "Brush",
	"Brush data-block for storing brush settings for painting and sculpting",
	"*", 182,
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

/* Brush Capabilities */
CollectionPropertyRNA rna_BrushCapabilities_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilities_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilities_rna_properties_begin, BrushCapabilities_rna_properties_next, BrushCapabilities_rna_properties_end, BrushCapabilities_rna_properties_get, NULL, NULL, BrushCapabilities_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilities_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_overlay, (PropertyRNA *)&rna_BrushCapabilities_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilities_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilities_has_overlay = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_random_texture_angle, (PropertyRNA *)&rna_BrushCapabilities_rna_type,
	-1, "has_overlay", 2, 0, 0, 0, 0, "Has Overlay",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilities_has_overlay_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_spacing, (PropertyRNA *)&rna_BrushCapabilities_has_overlay,
	-1, "has_random_texture_angle", 2, 0, 0, 0, 0, "Has Random Texture Angle",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilities_has_random_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_spacing = {
	{(PropertyRNA *)&rna_BrushCapabilities_has_smooth_stroke, (PropertyRNA *)&rna_BrushCapabilities_has_random_texture_angle,
	-1, "has_spacing", 2, 0, 0, 0, 0, "Has Spacing",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilities_has_spacing_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilities_has_smooth_stroke = {
	{NULL, (PropertyRNA *)&rna_BrushCapabilities_has_spacing,
	-1, "has_smooth_stroke", 2, 0, 0, 0, 0, "Has Smooth Stroke",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilities_has_smooth_stroke_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushCapabilities = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesSculpt, (ContainerRNA *)&RNA_Brush,
	NULL,
	{(PropertyRNA *)&rna_BrushCapabilities_rna_properties, (PropertyRNA *)&rna_BrushCapabilities_has_smooth_stroke}},
	"BrushCapabilities", NULL, NULL, 516, NULL, "Brush Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCapabilities_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sculpt Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesSculpt_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_rna_properties_begin, BrushCapabilitiesSculpt_rna_properties_next, BrushCapabilitiesSculpt_rna_properties_end, BrushCapabilitiesSculpt_rna_properties_get, NULL, NULL, BrushCapabilitiesSculpt_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesSculpt_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_accumulate, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_accumulate = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_auto_smooth, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_type,
	-1, "has_accumulate", 2, 0, 0, 0, 0, "Has Accumulate",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_accumulate_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_auto_smooth = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_topology_rake, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_accumulate,
	-1, "has_auto_smooth", 2, 0, 0, 0, 0, "Has Auto Smooth",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_auto_smooth_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_topology_rake = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_height, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_auto_smooth,
	-1, "has_topology_rake", 2, 0, 0, 0, 0, "Has Topology Rake",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_topology_rake_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_height = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_jitter, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_topology_rake,
	-1, "has_height", 2, 0, 0, 0, 0, "Has Height",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_height_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_jitter = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_normal_weight, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_height,
	-1, "has_jitter", 2, 0, 0, 0, 0, "Has Jitter",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_jitter_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_normal_weight = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_rake_factor, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_jitter,
	-1, "has_normal_weight", 2, 0, 0, 0, 0, "Has Crease/Pinch Factor",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_normal_weight_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_rake_factor = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_persistence, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_normal_weight,
	-1, "has_rake_factor", 2, 0, 0, 0, 0, "Has Rake Factor",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_rake_factor_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_persistence = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_pinch_factor, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_rake_factor,
	-1, "has_persistence", 2, 0, 0, 0, 0, "Has Persistence",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_persistence_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_pinch_factor = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_plane_offset, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_persistence,
	-1, "has_pinch_factor", 2, 0, 0, 0, 0, "Has Pinch Factor",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_pinch_factor_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_plane_offset = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_random_texture_angle, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_pinch_factor,
	-1, "has_plane_offset", 2, 0, 0, 0, 0, "Has Plane Offset",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_plane_offset_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_sculpt_plane, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_plane_offset,
	-1, "has_random_texture_angle", 2, 0, 0, 0, 0, "Has Random Texture Angle",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_random_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_sculpt_plane = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_color, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_random_texture_angle,
	-1, "has_sculpt_plane", 2, 0, 0, 0, 0, "Has Sculpt Plane",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_sculpt_plane_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_color = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_secondary_color, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_sculpt_plane,
	-1, "has_color", 2, 0, 0, 0, 0, "Has Color",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_secondary_color = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_smooth_stroke, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_color,
	-1, "has_secondary_color", 2, 0, 0, 0, 0, "Has Secondary Color",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_secondary_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_smooth_stroke = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_space_attenuation, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_secondary_color,
	-1, "has_smooth_stroke", 2, 0, 0, 0, 0, "Has Smooth Stroke",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_smooth_stroke_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_space_attenuation = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_strength_pressure, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_smooth_stroke,
	-1, "has_space_attenuation", 2, 0, 0, 0, 0, "Has Space Attenuation",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_space_attenuation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_strength_pressure = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_direction, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_space_attenuation,
	-1, "has_strength_pressure", 2, 0, 0, 0, 0, "Has Strength Pressure",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_strength_pressure_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_direction = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_gravity, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_strength_pressure,
	-1, "has_direction", 2, 0, 0, 0, 0, "Has Direction",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_direction_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_gravity = {
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_tilt, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_direction,
	-1, "has_gravity", 2, 0, 0, 0, 0, "Has Gravity",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_gravity_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesSculpt_has_tilt = {
	{NULL, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_gravity,
	-1, "has_tilt", 2, 0, 0, 0, 0, "Has Tilt",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesSculpt_has_tilt_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushCapabilitiesSculpt = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesImagePaint, (ContainerRNA *)&RNA_BrushCapabilities,
	NULL,
	{(PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_has_tilt}},
	"BrushCapabilitiesSculpt", NULL, NULL, 516, NULL, "Sculpt Capabilities",
	"Read-only indications of which brush operations are supported by the current sculpt tool",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCapabilitiesSculpt_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Image Paint Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesImagePaint_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesImagePaint_rna_properties_begin, BrushCapabilitiesImagePaint_rna_properties_next, BrushCapabilitiesImagePaint_rna_properties_end, BrushCapabilitiesImagePaint_rna_properties_get, NULL, NULL, BrushCapabilitiesImagePaint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesImagePaint_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_accumulate, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesImagePaint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_accumulate = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_space_attenuation, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_type,
	-1, "has_accumulate", 2, 0, 0, 0, 0, "Has Accumulate",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesImagePaint_has_accumulate_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_space_attenuation = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_radius, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_accumulate,
	-1, "has_space_attenuation", 2, 0, 0, 0, 0, "Has Space Attenuation",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesImagePaint_has_space_attenuation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_radius = {
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_color, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_space_attenuation,
	-1, "has_radius", 2, 0, 0, 0, 0, "Has Radius",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesImagePaint_has_radius_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCapabilitiesImagePaint_has_color = {
	{NULL, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_radius,
	-1, "has_color", 2, 0, 0, 0, 0, "Has Color",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesImagePaint_has_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushCapabilitiesImagePaint = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesVertexPaint, (ContainerRNA *)&RNA_BrushCapabilitiesSculpt,
	NULL,
	{(PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_has_color}},
	"BrushCapabilitiesImagePaint", NULL, NULL, 516, NULL, "Image Paint Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCapabilitiesImagePaint_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Paint Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesVertexPaint_rna_properties_begin, BrushCapabilitiesVertexPaint_rna_properties_next, BrushCapabilitiesVertexPaint_rna_properties_end, BrushCapabilitiesVertexPaint_rna_properties_get, NULL, NULL, BrushCapabilitiesVertexPaint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesVertexPaint_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_has_color, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesVertexPaint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesVertexPaint_has_color = {
	{NULL, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_type,
	-1, "has_color", 2, 0, 0, 0, 0, "Has Color",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesVertexPaint_has_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushCapabilitiesVertexPaint = {
	{(ContainerRNA *)&RNA_BrushCapabilitiesWeightPaint, (ContainerRNA *)&RNA_BrushCapabilitiesImagePaint,
	NULL,
	{(PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_has_color}},
	"BrushCapabilitiesVertexPaint", NULL, NULL, 516, NULL, "Vertex Paint Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCapabilitiesVertexPaint_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Weight Paint Capabilities */
CollectionPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_properties = {
	{(PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesWeightPaint_rna_properties_begin, BrushCapabilitiesWeightPaint_rna_properties_next, BrushCapabilitiesWeightPaint_rna_properties_end, BrushCapabilitiesWeightPaint_rna_properties_get, NULL, NULL, BrushCapabilitiesWeightPaint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCapabilitiesWeightPaint_rna_type = {
	{(PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_has_weight, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesWeightPaint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BrushCapabilitiesWeightPaint_has_weight = {
	{NULL, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_type,
	-1, "has_weight", 2, 0, 0, 0, 0, "Has Weight",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCapabilitiesWeightPaint_has_weight_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushCapabilitiesWeightPaint = {
	{(ContainerRNA *)&RNA_BrushGpencilSettings, (ContainerRNA *)&RNA_BrushCapabilitiesVertexPaint,
	NULL,
	{(PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_has_weight}},
	"BrushCapabilitiesWeightPaint", NULL, NULL, 516, NULL, "Weight Paint Capabilities",
	"Read-only indications of supported operations",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCapabilitiesWeightPaint_rna_properties,
	NULL,
	&RNA_Brush,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Brush Settings */
CollectionPropertyRNA rna_BrushGpencilSettings_rna_properties = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_rna_properties_begin, BrushGpencilSettings_rna_properties_next, BrushGpencilSettings_rna_properties_end, BrushGpencilSettings_rna_properties_get, NULL, NULL, BrushGpencilSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushGpencilSettings_rna_type = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_strength, (PropertyRNA *)&rna_BrushGpencilSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_BrushGpencilSettings_pen_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_jitter, (PropertyRNA *)&rna_BrushGpencilSettings_rna_type,
	-1, "pen_strength", 1, 0, 0, 4, 0, "Strength",
	"Color strength for new strokes (affect alpha factor of color)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_strength), 5, NULL},
	BrushGpencilSettings_pen_strength_get, BrushGpencilSettings_pen_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_pen_jitter = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_pen_strength,
	-1, "pen_jitter", 1, 0, 0, 4, 0, "Jitter",
	"Jitter factor for new strokes",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_jitter), 5, NULL},
	BrushGpencilSettings_pen_jitter_get, BrushGpencilSettings_pen_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_random_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_strength, (PropertyRNA *)&rna_BrushGpencilSettings_pen_jitter,
	-1, "random_pressure", 1, 0, 0, 4, 0, "Pressure Randomness",
	"Randomness factor for pressure in new strokes",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_random_press), 5, NULL},
	BrushGpencilSettings_random_pressure_get, BrushGpencilSettings_random_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_random_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_angle, (PropertyRNA *)&rna_BrushGpencilSettings_random_pressure,
	-1, "random_strength", 1, 0, 0, 4, 0, "Strength Randomness",
	"Randomness factor strength in new strokes",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_random_strength), 5, NULL},
	BrushGpencilSettings_random_strength_get, BrushGpencilSettings_random_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_angle = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_angle_factor, (PropertyRNA *)&rna_BrushGpencilSettings_random_strength,
	-1, "angle", 1, 0, 0, 4, 0, "Angle",
	"Direction of the stroke at which brush gives maximal thickness (0° for horizontal)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_angle), 5, NULL},
	BrushGpencilSettings_angle_get, BrushGpencilSettings_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_angle_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_factor, (PropertyRNA *)&rna_BrushGpencilSettings_angle,
	-1, "angle_factor", 1, 0, 0, 4, 0, "Angle Factor",
	"Reduce brush thickness by this factor when stroke is perpendicular to \'Angle\' direction",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_angle_factor), 5, NULL},
	BrushGpencilSettings_angle_factor_get, BrushGpencilSettings_angle_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_pen_smooth_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_steps, (PropertyRNA *)&rna_BrushGpencilSettings_angle_factor,
	-1, "pen_smooth_factor", 1, 0, 0, 4, 0, "Smooth",
	"Amount of smoothing to apply after finish newly created strokes, to reduce jitter/noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_smoothfac), 5, NULL},
	BrushGpencilSettings_pen_smooth_factor_get, BrushGpencilSettings_pen_smooth_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_BrushGpencilSettings_pen_smooth_steps = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pen_subdivision_steps, (PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_factor,
	-1, "pen_smooth_steps", 1, 0, 0, 4, 0, "Iterations",
	"Number of times to smooth newly created strokes",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_smoothlvl), 1, NULL},
	BrushGpencilSettings_pen_smooth_steps_get, BrushGpencilSettings_pen_smooth_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_BrushGpencilSettings_pen_subdivision_steps = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_simplify_factor, (PropertyRNA *)&rna_BrushGpencilSettings_pen_smooth_steps,
	-1, "pen_subdivision_steps", 1, 0, 0, 4, 0, "Subdivision Steps",
	"Number of times to subdivide newly created strokes, for less jagged strokes",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, draw_subdivide), 1, NULL},
	BrushGpencilSettings_pen_subdivision_steps_get, BrushGpencilSettings_pen_subdivision_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 3, 0, 3, 1, 0, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_simplify_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_sensitivity, (PropertyRNA *)&rna_BrushGpencilSettings_pen_subdivision_steps,
	-1, "simplify_factor", 1, 0, 0, 4, 0, "Simplify",
	"Factor of Simplify using adaptive algorithm",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, simplify_f), 5, NULL},
	BrushGpencilSettings_simplify_factor_get, BrushGpencilSettings_simplify_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 1.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_sensitivity = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_strength, (PropertyRNA *)&rna_BrushGpencilSettings_simplify_factor,
	-1, "curve_sensitivity", 8388608, 0, 0, 0, 0, "Curve Sensitivity",
	"Curve used for the sensitivity",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_sensitivity_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_jitter, (PropertyRNA *)&rna_BrushGpencilSettings_curve_sensitivity,
	-1, "curve_strength", 8388608, 0, 0, 0, 0, "Curve Strength",
	"Curve used for the strength",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_strength_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_jitter = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_curve_strength,
	-1, "curve_jitter", 8388608, 0, 0, 0, 0, "Curve Jitter",
	"Curve used for the jitter effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_jitter_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_strength, (PropertyRNA *)&rna_BrushGpencilSettings_curve_jitter,
	-1, "curve_random_pressure", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_random_pressure_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_uv, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_pressure,
	-1, "curve_random_strength", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_random_strength_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_hue, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_strength,
	-1, "curve_random_uv", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_random_uv_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_hue = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_saturation, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_uv,
	-1, "curve_random_hue", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_random_hue_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_saturation = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_curve_random_value, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_hue,
	-1, "curve_random_saturation", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_random_saturation_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_BrushGpencilSettings_curve_random_value = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_threshold, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_saturation,
	-1, "curve_random_value", 8388608, 0, 0, 0, 0, "Random Curve",
	"Curve used for modulating effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_curve_random_value_get, NULL, NULL, NULL,&RNA_CurveMapping
};

FloatPropertyRNA rna_BrushGpencilSettings_fill_threshold = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_leak, (PropertyRNA *)&rna_BrushGpencilSettings_curve_random_value,
	-1, "fill_threshold", 1, 0, 0, 4, 0, "Threshold",
	"Threshold to consider color transparent for filling",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_threshold), 5, NULL},
	BrushGpencilSettings_fill_threshold_get, BrushGpencilSettings_fill_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_BrushGpencilSettings_fill_leak = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_factor, (PropertyRNA *)&rna_BrushGpencilSettings_fill_threshold,
	-1, "fill_leak", 1, 0, 0, 4, 0, "Leak Size",
	"Size in pixels to consider the leak closed",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_leak), 1, NULL},
	BrushGpencilSettings_fill_leak_get, BrushGpencilSettings_fill_leak_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 0, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_fill_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_simplify_level, (PropertyRNA *)&rna_BrushGpencilSettings_fill_leak,
	-1, "fill_factor", 1, 0, 0, 4, 0, "Precision",
	"Factor for fill boundary accuracy, higher values are more accurate but slower",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_factor), 5, NULL},
	BrushGpencilSettings_fill_factor_get, BrushGpencilSettings_fill_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0500000007f, 8.0f, 0.0500000007f, 8.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_BrushGpencilSettings_fill_simplify_level = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_uv_random, (PropertyRNA *)&rna_BrushGpencilSettings_fill_factor,
	-1, "fill_simplify_level", 1, 0, 0, 4, 0, "Simplify",
	"Number of simplify steps (large values reduce fill accuracy)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_simplylvl), 0, NULL},
	BrushGpencilSettings_fill_simplify_level_get, BrushGpencilSettings_fill_simplify_level_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10, 0, 10, 1, 0, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_uv_random = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_hardness, (PropertyRNA *)&rna_BrushGpencilSettings_fill_simplify_level,
	-1, "uv_random", 1, 0, 0, 4, 0, "UV Random",
	"Random factor for auto-generated UV rotation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, uv_random), 5, NULL},
	BrushGpencilSettings_uv_random_get, BrushGpencilSettings_uv_random_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_hardness = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_aspect, (PropertyRNA *)&rna_BrushGpencilSettings_uv_random,
	-1, "hardness", 1, 0, 0, 4, 0, "Hardness",
	"Gradient from the center of Dot and Box strokes (set to 1 for a solid stroke)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, hardeness), 5, NULL},
	BrushGpencilSettings_hardness_get, BrushGpencilSettings_hardness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 1.0f, NULL
};

static float rna_BrushGpencilSettings_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_BrushGpencilSettings_aspect = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_input_samples, (PropertyRNA *)&rna_BrushGpencilSettings_hardness,
	-1, "aspect", 1, 0, 0, 4, 0, "Aspect",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, aspect_ratio), 5, NULL},
	NULL, NULL, BrushGpencilSettings_aspect_get, BrushGpencilSettings_aspect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 1.0f, rna_BrushGpencilSettings_aspect_default
};

IntPropertyRNA rna_BrushGpencilSettings_input_samples = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_active_smooth_factor, (PropertyRNA *)&rna_BrushGpencilSettings_aspect,
	-1, "input_samples", 1, 0, 0, 4, 0, "Input Samples",
	"Generate intermediate points for very fast mouse movements. Set to 0 to disable",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, input_samples), 0, NULL},
	BrushGpencilSettings_input_samples_get, BrushGpencilSettings_input_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10, 0, 10, 1, 0, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_active_smooth_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_eraser_strength_factor, (PropertyRNA *)&rna_BrushGpencilSettings_input_samples,
	-1, "active_smooth_factor", 1, 0, 0, 4, 0, "Active Smooth",
	"Amount of smoothing while drawing",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, active_smooth), 5, NULL},
	BrushGpencilSettings_active_smooth_factor_get, BrushGpencilSettings_active_smooth_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_eraser_strength_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_eraser_thickness_factor, (PropertyRNA *)&rna_BrushGpencilSettings_active_smooth_factor,
	-1, "eraser_strength_factor", 1, 0, 0, 4, 0, "Affect Stroke Strength",
	"Amount of erasing for strength",
	0, "*",
	PROP_FLOAT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, era_strength_f), 5, NULL},
	BrushGpencilSettings_eraser_strength_factor_get, BrushGpencilSettings_eraser_strength_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_eraser_thickness_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_paint_icon, (PropertyRNA *)&rna_BrushGpencilSettings_eraser_strength_factor,
	-1, "eraser_thickness_factor", 1, 0, 0, 4, 0, "Affect Stroke Thickness",
	"Amount of erasing for thickness",
	0, "*",
	PROP_FLOAT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, era_thickness_f), 5, NULL},
	BrushGpencilSettings_eraser_thickness_factor_get, BrushGpencilSettings_eraser_thickness_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, NULL
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_paint_icon_items[13] = {
	{1, "PENCIL", 817, "Pencil", ""},
	{2, "PEN", 818, "Pen", ""},
	{3, "INK", 819, "Ink", ""},
	{4, "INKNOISE", 820, "Ink Noise", ""},
	{5, "BLOCK", 821, "Block", ""},
	{6, "MARKER", 822, "Marker", ""},
	{11, "AIRBRUSH", 824, "Airbrush", ""},
	{12, "CHISEL", 825, "Chisel", ""},
	{7, "FILL", 823, "Fill", ""},
	{8, "SOFT", 826, "Eraser Soft", ""},
	{9, "HARD", 827, "Eraser Hard", ""},
	{10, "STROKE", 828, "Eraser Stroke", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_paint_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_sculpt_icon, (PropertyRNA *)&rna_BrushGpencilSettings_eraser_thickness_factor,
	-1, "gpencil_paint_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), 0, NULL},
	BrushGpencilSettings_gpencil_paint_icon_get, BrushGpencilSettings_gpencil_paint_icon_set, NULL, NULL, NULL, rna_BrushGpencilSettings_gpencil_paint_icon_items, 12, 1
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_sculpt_icon_items[10] = {
	{19, "SMOOTH", 807, "Smooth", ""},
	{20, "THICKNESS", 808, "Thickness", ""},
	{21, "STRENGTH", 809, "Strength", ""},
	{22, "RANDOMIZE", 814, "Randomize", ""},
	{23, "GRAB", 810, "Grab", ""},
	{24, "PUSH", 811, "Push", ""},
	{25, "TWIST", 812, "Twist", ""},
	{26, "PINCH", 813, "Pinch", ""},
	{27, "CLONE", 815, "Clone", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_sculpt_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_weight_icon, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_paint_icon,
	-1, "gpencil_sculpt_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), 0, NULL},
	BrushGpencilSettings_gpencil_sculpt_icon_get, BrushGpencilSettings_gpencil_sculpt_icon_set, NULL, NULL, NULL, rna_BrushGpencilSettings_gpencil_sculpt_icon_items, 9, 19
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_weight_icon_items[2] = {
	{28, "DRAW", 816, "Draw", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_weight_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_gpencil_vertex_icon, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_sculpt_icon,
	-1, "gpencil_weight_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), 0, NULL},
	BrushGpencilSettings_gpencil_weight_icon_get, BrushGpencilSettings_gpencil_weight_icon_set, NULL, NULL, NULL, rna_BrushGpencilSettings_gpencil_weight_icon_items, 1, 28
};

static const EnumPropertyItem rna_BrushGpencilSettings_gpencil_vertex_icon_items[6] = {
	{14, "DRAW", 792, "Draw", ""},
	{15, "BLUR", 781, "Blur", ""},
	{16, "AVERAGE", 781, "Average", ""},
	{17, "SMEAR", 781, "Smear", ""},
	{18, "REPLACE", 792, "Replace", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_gpencil_vertex_icon = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_vertex_mode, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_weight_icon,
	-1, "gpencil_vertex_icon", 1, 0, 0, 4, 0, "Grease Pencil Icon",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, icon_id), 0, NULL},
	BrushGpencilSettings_gpencil_vertex_icon_get, BrushGpencilSettings_gpencil_vertex_icon_set, NULL, NULL, NULL, rna_BrushGpencilSettings_gpencil_vertex_icon_items, 5, 14
};

static const EnumPropertyItem rna_BrushGpencilSettings_vertex_mode_items[4] = {
	{0, "STROKE", 0, "Stroke", "Vertex Color affects to Stroke only"},
	{1, "FILL", 0, "Fill", "Vertex Color affects to Fill only"},
	{2, "BOTH", 0, "Stroke & Fill", "Vertex Color affects to Stroke and Fill"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_vertex_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_vertex_color_factor, (PropertyRNA *)&rna_BrushGpencilSettings_gpencil_vertex_icon,
	-1, "vertex_mode", 1, 0, 0, 4, 0, "Mode Type",
	"Defines how vertex color affect to the strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, vertex_mode), 0, NULL},
	BrushGpencilSettings_vertex_mode_get, BrushGpencilSettings_vertex_mode_set, NULL, NULL, NULL, rna_BrushGpencilSettings_vertex_mode_items, 3, 0
};

FloatPropertyRNA rna_BrushGpencilSettings_vertex_color_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_hue_factor, (PropertyRNA *)&rna_BrushGpencilSettings_vertex_mode,
	-1, "vertex_color_factor", 1, 0, 0, 4, 0, "Vertex Color Factor",
	"Factor used to mix vertex color to get final color",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, vertex_factor), 5, NULL},
	BrushGpencilSettings_vertex_color_factor_get, BrushGpencilSettings_vertex_color_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_random_hue_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_saturation_factor, (PropertyRNA *)&rna_BrushGpencilSettings_vertex_color_factor,
	-1, "random_hue_factor", 1, 0, 0, 4, 0, "Hue",
	"Random factor to modify original hue",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, random_hue), 5, NULL},
	BrushGpencilSettings_random_hue_factor_get, BrushGpencilSettings_random_hue_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_random_saturation_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_random_value_factor, (PropertyRNA *)&rna_BrushGpencilSettings_random_hue_factor,
	-1, "random_saturation_factor", 1, 0, 0, 4, 0, "Saturation",
	"Random factor to modify original saturation",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, random_saturation), 5, NULL},
	BrushGpencilSettings_random_saturation_factor_get, BrushGpencilSettings_random_saturation_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_random_value_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_extend_stroke_factor, (PropertyRNA *)&rna_BrushGpencilSettings_random_saturation_factor,
	-1, "random_value_factor", 1, 0, 0, 4, 0, "Value",
	"Random factor to modify original value",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, random_value), 5, NULL},
	BrushGpencilSettings_random_value_factor_get, BrushGpencilSettings_random_value_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushGpencilSettings_extend_stroke_factor = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_dilate, (PropertyRNA *)&rna_BrushGpencilSettings_random_value_factor,
	-1, "extend_stroke_factor", 1, 0, 0, 4, 0, "Stroke Extension",
	"Strokes end extension for closing gaps, use zero to disable",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_extend_fac), 5, NULL},
	BrushGpencilSettings_extend_stroke_factor_get, BrushGpencilSettings_extend_stroke_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_BrushGpencilSettings_dilate = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_extend_stroke_factor,
	-1, "dilate", 1, 0, 0, 4, 0, "Dilate/Contract",
	"Number of pixels to expand or contract fill area",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, dilate_pixels), 0, NULL},
	BrushGpencilSettings_dilate_get, BrushGpencilSettings_dilate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -40, 40, -40, 40, 1, 1, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_strength_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_dilate,
	-1, "use_pressure", 1, 0, 0, 0, 0, "Use Pressure",
	"Use tablet pressure",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_pressure_get, BrushGpencilSettings_use_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_strength_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_jitter_pressure, (PropertyRNA *)&rna_BrushGpencilSettings_use_pressure,
	-1, "use_strength_pressure", 1, 0, 0, 0, 0, "Use Pressure Strength",
	"Use tablet pressure for color strength",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_strength_pressure_get, BrushGpencilSettings_use_strength_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_jitter_pressure = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_hue, (PropertyRNA *)&rna_BrushGpencilSettings_use_strength_pressure,
	-1, "use_jitter_pressure", 1, 0, 0, 0, 0, "Use Pressure Jitter",
	"Use tablet pressure for jitter",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_jitter_pressure_get, BrushGpencilSettings_use_jitter_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_hue = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_sat, (PropertyRNA *)&rna_BrushGpencilSettings_use_jitter_pressure,
	-1, "use_stroke_random_hue", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_stroke_random_hue_get, BrushGpencilSettings_use_stroke_random_hue_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_sat = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_val, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_hue,
	-1, "use_stroke_random_sat", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_stroke_random_sat_get, BrushGpencilSettings_use_stroke_random_sat_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_val = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_radius, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_sat,
	-1, "use_stroke_random_val", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_stroke_random_val_get, BrushGpencilSettings_use_stroke_random_val_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_radius = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_strength, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_val,
	-1, "use_stroke_random_radius", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_stroke_random_radius_get, BrushGpencilSettings_use_stroke_random_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_uv, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_radius,
	-1, "use_stroke_random_strength", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_stroke_random_strength_get, BrushGpencilSettings_use_stroke_random_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_stroke_random_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_hue, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_strength,
	-1, "use_stroke_random_uv", 1, 0, 0, 0, 0, "Stroke Random",
	"Use randomness at stroke level",
	275, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_stroke_random_uv_get, BrushGpencilSettings_use_stroke_random_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_hue = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_sat, (PropertyRNA *)&rna_BrushGpencilSettings_use_stroke_random_uv,
	-1, "use_random_press_hue", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_random_press_hue_get, BrushGpencilSettings_use_random_press_hue_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_sat = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_val, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_hue,
	-1, "use_random_press_sat", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_random_press_sat_get, BrushGpencilSettings_use_random_press_sat_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_val = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_radius, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_sat,
	-1, "use_random_press_val", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_random_press_val_get, BrushGpencilSettings_use_random_press_val_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_radius = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_strength, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_val,
	-1, "use_random_press_radius", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_random_press_radius_get, BrushGpencilSettings_use_random_press_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_uv, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_radius,
	-1, "use_random_press_strength", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_random_press_strength_get, BrushGpencilSettings_use_random_press_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_random_press_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_stabilizer, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_strength,
	-1, "use_random_press_uv", 1, 0, 0, 0, 0, "Use Pressure",
	"Use pressure to modulate randomness",
	67, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_random_press_uv_get, BrushGpencilSettings_use_random_press_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_stabilizer = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_eraser_mode, (PropertyRNA *)&rna_BrushGpencilSettings_use_random_press_uv,
	-1, "use_settings_stabilizer", 1, 0, 0, 0, 0, "Use Stabilizer",
	"Draw lines with a delay to allow smooth strokes. Press Shift key to override while drawing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_settings_stabilizer_get, BrushGpencilSettings_use_settings_stabilizer_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static const EnumPropertyItem rna_BrushGpencilSettings_eraser_mode_items[4] = {
	{0, "SOFT", 0, "Dissolve", "Erase strokes, fading their points strength and thickness"},
	{1, "HARD", 0, "Point", "Erase stroke points"},
	{2, "STROKE", 0, "Stroke", "Erase entire strokes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_eraser_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_caps_type, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_stabilizer,
	-1, "eraser_mode", 1, 0, 0, 4, 0, "Mode",
	"Eraser Mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_BrushGpencilSettings_eraser_mode_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, eraser_mode), 0, NULL},
	BrushGpencilSettings_eraser_mode_get, BrushGpencilSettings_eraser_mode_set, NULL, NULL, NULL, rna_BrushGpencilSettings_eraser_mode_items, 3, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_caps_type_items[3] = {
	{0, "ROUND", 616, "Round", ""},
	{1, "FLAT", 615, "Flat", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_caps_type = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_draw_mode, (PropertyRNA *)&rna_BrushGpencilSettings_eraser_mode,
	-1, "caps_type", 1, 0, 0, 0, 0, "Caps Type",
	"The shape of the start and end of the stroke",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_caps_type_get, BrushGpencilSettings_caps_type_set, NULL, NULL, NULL, rna_BrushGpencilSettings_caps_type_items, 2, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_draw_mode_items[4] = {
	{0, "BOTH", 0, "All", "Use both visible strokes and edit lines as fill boundary limits"},
	{1, "STROKE", 0, "Strokes", "Use visible strokes as fill boundary limits"},
	{2, "CONTROL", 0, "Edit Lines", "Use edit lines as fill boundary limits"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_draw_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_layer_mode, (PropertyRNA *)&rna_BrushGpencilSettings_caps_type,
	-1, "fill_draw_mode", 1, 0, 0, 4, 0, "Mode",
	"Mode to draw boundary limits",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_draw_mode), 0, NULL},
	BrushGpencilSettings_fill_draw_mode_get, BrushGpencilSettings_fill_draw_mode_set, NULL, NULL, NULL, rna_BrushGpencilSettings_fill_draw_mode_items, 3, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_layer_mode_items[7] = {
	{0, "VISIBLE", 0, "Visible", "Visible layers"},
	{1, "ACTIVE", 0, "Active", "Only active layer"},
	{4, "ABOVE", 0, "Layer Above", "Layer above active"},
	{5, "BELOW", 0, "Layer Below", "Layer below active"},
	{2, "ALL_ABOVE", 0, "All Above", "All layers above active"},
	{3, "ALL_BELOW", 0, "All Below", "All layers below active"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_layer_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_fill_direction, (PropertyRNA *)&rna_BrushGpencilSettings_fill_draw_mode,
	-1, "fill_layer_mode", 1, 0, 0, 4, 0, "Layer Mode",
	"Layers used as boundaries",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_layer_mode), 1, NULL},
	BrushGpencilSettings_fill_layer_mode_get, BrushGpencilSettings_fill_layer_mode_set, NULL, NULL, NULL, rna_BrushGpencilSettings_fill_layer_mode_items, 6, 0
};

static const EnumPropertyItem rna_BrushGpencilSettings_fill_direction_items[3] = {
	{0, "NORMAL", 31, "Normal", "Fill internal area"},
	{512, "INVERT", 32, "Inverted", "Fill inverted area"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_fill_direction = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_pin_draw_mode, (PropertyRNA *)&rna_BrushGpencilSettings_fill_layer_mode,
	-1, "fill_direction", 1, 0, 0, 4, 0, "Direction",
	"Direction of the fill",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, fill_direction), 1, NULL},
	BrushGpencilSettings_fill_direction_get, BrushGpencilSettings_fill_direction_set, NULL, NULL, NULL, rna_BrushGpencilSettings_fill_direction_items, 2, 0
};

BoolPropertyRNA rna_BrushGpencilSettings_pin_draw_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_brush_draw_mode, (PropertyRNA *)&rna_BrushGpencilSettings_fill_direction,
	-1, "pin_draw_mode", 4198401, 0, 0, 0, 0, "Pin Mode",
	"Pin the mode to the brush",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_GPencilBrush_pin_mode_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_pin_draw_mode_get, BrushGpencilSettings_pin_draw_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_BrushGpencilSettings_brush_draw_mode_items[4] = {
	{0, "ACTIVE", 0, "Active", "Use current mode"},
	{1, "MATERIAL", 0, "Material", "Use always material mode"},
	{2, "VERTEXCOLOR", 0, "Vertex Color", "Use always Vertex Color mode"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_brush_draw_mode = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_trim, (PropertyRNA *)&rna_BrushGpencilSettings_pin_draw_mode,
	-1, "brush_draw_mode", 1, 0, 0, 4, 0, "Mode",
	"Preselected mode when using this brush",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, brush_draw_mode), 1, NULL},
	BrushGpencilSettings_brush_draw_mode_get, BrushGpencilSettings_brush_draw_mode_set, NULL, NULL, NULL, rna_BrushGpencilSettings_brush_draw_mode_items, 3, 0
};

BoolPropertyRNA rna_BrushGpencilSettings_use_trim = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_direction, (PropertyRNA *)&rna_BrushGpencilSettings_brush_draw_mode,
	-1, "use_trim", 1, 0, 0, 0, 0, "Trim Stroke Ends",
	"Trim intersecting stroke ends",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_trim_get, BrushGpencilSettings_use_trim_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_BrushGpencilSettings_direction_items[3] = {
	{0, "ADD", 31, "Add", "Add effect of brush"},
	{512, "SUBTRACT", 32, "Subtract", "Subtract effect of brush"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushGpencilSettings_direction = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_position, (PropertyRNA *)&rna_BrushGpencilSettings_use_trim,
	-1, "direction", 1, 0, 0, 4, 0, "Direction",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushGpencilSettings, sculpt_flag), 0, NULL},
	BrushGpencilSettings_direction_get, BrushGpencilSettings_direction_set, NULL, NULL, NULL, rna_BrushGpencilSettings_direction_items, 2, 0
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_position = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_strength, (PropertyRNA *)&rna_BrushGpencilSettings_direction,
	-1, "use_edit_position", 1, 0, 0, 0, 0, "Affect Position",
	"The brush affects the position of the point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_edit_position_get, BrushGpencilSettings_use_edit_position_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_strength = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_thickness, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_position,
	-1, "use_edit_strength", 1, 0, 0, 0, 0, "Affect Strength",
	"The brush affects the color strength of the point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_edit_strength_get, BrushGpencilSettings_use_edit_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_thickness = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_edit_uv, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_strength,
	-1, "use_edit_thickness", 1, 0, 0, 0, 0, "Affect Thickness",
	"The brush affects the thickness of the point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_edit_thickness_get, BrushGpencilSettings_use_edit_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_edit_uv = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_automasking_stroke, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_thickness,
	-1, "use_edit_uv", 1, 0, 0, 0, 0, "Affect UV",
	"The brush affects the UV rotation of the point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_edit_uv_get, BrushGpencilSettings_use_edit_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_automasking_stroke = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_automasking_layer, (PropertyRNA *)&rna_BrushGpencilSettings_use_edit_uv,
	-1, "use_automasking_stroke", 1, 0, 0, 0, 0, "Auto-Masking Strokes",
	"Mask strokes below brush cursor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_automasking_stroke_get, BrushGpencilSettings_use_automasking_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_automasking_layer = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_automasking_material, (PropertyRNA *)&rna_BrushGpencilSettings_use_automasking_stroke,
	-1, "use_automasking_layer", 1, 0, 0, 0, 0, "Auto-Masking Layer",
	"Mask strokes using active layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_automasking_layer_get, BrushGpencilSettings_use_automasking_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_automasking_material = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_material, (PropertyRNA *)&rna_BrushGpencilSettings_use_automasking_layer,
	-1, "use_automasking_material", 1, 0, 0, 0, 0, "Auto-Masking Material",
	"Mask strokes using active material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_automasking_material_get, BrushGpencilSettings_use_automasking_material_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BrushGpencilSettings_material = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_fill_boundary, (PropertyRNA *)&rna_BrushGpencilSettings_use_automasking_material,
	-1, "material", 13631681, 0, 0, 0, 0, "Material",
	"Material used for strokes drawn using this brush",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Brush_material_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_material_get, BrushGpencilSettings_material_set, NULL, rna_BrushGpencilSettings_material_poll,&RNA_Material
};

BoolPropertyRNA rna_BrushGpencilSettings_show_fill_boundary = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_fill_extend, (PropertyRNA *)&rna_BrushGpencilSettings_material,
	-1, "show_fill_boundary", 1, 0, 0, 0, 0, "Show Lines",
	"Show help lines for filling to see boundaries",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_show_fill_boundary_get, BrushGpencilSettings_show_fill_boundary_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_show_fill_extend = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_fill, (PropertyRNA *)&rna_BrushGpencilSettings_show_fill_boundary,
	-1, "show_fill_extend", 1, 0, 0, 0, 0, "Show Extend Lines",
	"Show help lines for stroke extension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_show_fill_extend_get, BrushGpencilSettings_show_fill_extend_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_show_fill = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_fill_limit, (PropertyRNA *)&rna_BrushGpencilSettings_show_fill_extend,
	-1, "show_fill", 1, 0, 0, 0, 0, "Show Fill",
	"Show transparent lines to use as boundary for filling",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_show_fill_get, BrushGpencilSettings_show_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_fill_limit = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_default_eraser, (PropertyRNA *)&rna_BrushGpencilSettings_show_fill,
	-1, "use_fill_limit", 1, 0, 0, 0, 0, "Limit to Viewport",
	"Fill only visible areas in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_fill_limit_get, BrushGpencilSettings_use_fill_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_default_eraser = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_postprocess, (PropertyRNA *)&rna_BrushGpencilSettings_use_fill_limit,
	-1, "use_default_eraser", 4097, 0, 0, 0, 0, "Default Eraser",
	"Use this brush when enable eraser with fast switch key",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_BrushGpencilSettings_default_eraser_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_default_eraser_get, BrushGpencilSettings_use_default_eraser_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_postprocess = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_settings_random, (PropertyRNA *)&rna_BrushGpencilSettings_use_default_eraser,
	-1, "use_settings_postprocess", 1, 0, 0, 0, 0, "Use Post-Process Settings",
	"Additional post processing options for new strokes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_settings_postprocess_get, BrushGpencilSettings_use_settings_postprocess_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_settings_random = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_material_pin, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_postprocess,
	-1, "use_settings_random", 1, 0, 0, 0, 0, "Random Settings",
	"Random brush settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_settings_random_get, BrushGpencilSettings_use_settings_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_material_pin = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_show_lasso, (PropertyRNA *)&rna_BrushGpencilSettings_use_settings_random,
	-1, "use_material_pin", 4198401, 0, 0, 0, 0, "Pin Material",
	"Keep material assigned to brush",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_BrushGpencilSettings_use_material_pin_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_material_pin_get, BrushGpencilSettings_use_material_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_show_lasso = {
	{(PropertyRNA *)&rna_BrushGpencilSettings_use_occlude_eraser, (PropertyRNA *)&rna_BrushGpencilSettings_use_material_pin,
	-1, "show_lasso", 1, 0, 0, 0, 0, "Show Lasso",
	"Do not display fill color while drawing the stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_show_lasso_get, BrushGpencilSettings_show_lasso_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushGpencilSettings_use_occlude_eraser = {
	{NULL, (PropertyRNA *)&rna_BrushGpencilSettings_show_lasso,
	-1, "use_occlude_eraser", 1, 0, 0, 0, 0, "Occlude Eraser",
	"Erase only strokes visible and not occluded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushGpencilSettings_use_occlude_eraser_get, BrushGpencilSettings_use_occlude_eraser_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushGpencilSettings = {
	{(ContainerRNA *)&RNA_BrushCurvesSculptSettings, (ContainerRNA *)&RNA_BrushCapabilitiesWeightPaint,
	NULL,
	{(PropertyRNA *)&rna_BrushGpencilSettings_rna_properties, (PropertyRNA *)&rna_BrushGpencilSettings_use_occlude_eraser}},
	"BrushGpencilSettings", NULL, NULL, 516, NULL, "Grease Pencil Brush Settings",
	"Settings for grease pencil brush",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushGpencilSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_BrushGpencilSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Curves Sculpt Brush Settings */
CollectionPropertyRNA rna_BrushCurvesSculptSettings_rna_properties = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_rna_properties_begin, BrushCurvesSculptSettings_rna_properties_next, BrushCurvesSculptSettings_rna_properties_end, BrushCurvesSculptSettings_rna_properties_get, NULL, NULL, BrushCurvesSculptSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BrushCurvesSculptSettings_rna_type = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_add_amount, (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_BrushCurvesSculptSettings_add_amount = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_points_per_curve, (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_type,
	-1, "add_amount", 3, 0, 0, 4, 0, "Count",
	"Number of curves added by the Add brush",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, add_amount), 0, NULL},
	BrushCurvesSculptSettings_add_amount_get, BrushCurvesSculptSettings_add_amount_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, INT_MAX, 1, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_BrushCurvesSculptSettings_points_per_curve = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_scale_uniform, (PropertyRNA *)&rna_BrushCurvesSculptSettings_add_amount,
	-1, "points_per_curve", 3, 0, 0, 4, 0, "Points per Curve",
	"Number of control points in a newly added curve",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, points_per_curve), 0, NULL},
	BrushCurvesSculptSettings_points_per_curve_get, BrushCurvesSculptSettings_points_per_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2, INT_MAX, 2, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_scale_uniform = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_length, (PropertyRNA *)&rna_BrushCurvesSculptSettings_points_per_curve,
	-1, "scale_uniform", 3, 0, 0, 0, 0, "Scale Uniform",
	"Grow or shrink curves by changing their size uniformly instead of using trimming or extrapolation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_scale_uniform_get, BrushCurvesSculptSettings_scale_uniform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_length = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_length, (PropertyRNA *)&rna_BrushCurvesSculptSettings_scale_uniform,
	-1, "minimum_length", 3, 0, 0, 4, 0, "Minimum Length",
	"Avoid shrinking curves shorter than this length",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, minimum_length), 5, NULL},
	BrushCurvesSculptSettings_minimum_length_get, BrushCurvesSculptSettings_minimum_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_length = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_point_count, (PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_length,
	-1, "interpolate_length", 3, 0, 0, 0, 0, "Interpolate Length",
	"Use length of the curves in close proximity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_interpolate_length_get, BrushCurvesSculptSettings_interpolate_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_point_count = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_shape, (PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_length,
	-1, "interpolate_point_count", 3, 0, 0, 0, 0, "Interpolate Point Count",
	"Use the number of points from the curves in close proximity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_interpolate_point_count_get, BrushCurvesSculptSettings_interpolate_point_count_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushCurvesSculptSettings_interpolate_shape = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_curve_length, (PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_point_count,
	-1, "interpolate_shape", 3, 0, 0, 0, 0, "Interpolate Shape",
	"Use shape of the curves in close proximity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_interpolate_shape_get, BrushCurvesSculptSettings_interpolate_shape_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BrushCurvesSculptSettings_curve_length = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_distance, (PropertyRNA *)&rna_BrushCurvesSculptSettings_interpolate_shape,
	-1, "curve_length", 3, 0, 0, 4, 0, "Curve Length",
	"Length of newly added curves when it is not interpolated from other curves",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, curve_length), 5, NULL},
	BrushCurvesSculptSettings_curve_length_get, BrushCurvesSculptSettings_curve_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BrushCurvesSculptSettings_minimum_distance = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_density_add_attempts, (PropertyRNA *)&rna_BrushCurvesSculptSettings_curve_length,
	-1, "minimum_distance", 3, 0, 0, 4, 0, "Minimum Distance",
	"Goal distance between curve roots for the Density brush",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, minimum_distance), 5, NULL},
	BrushCurvesSculptSettings_minimum_distance_get, BrushCurvesSculptSettings_minimum_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, FLT_MAX, 0.0010000000f, 2, 0.0f, NULL
};

IntPropertyRNA rna_BrushCurvesSculptSettings_density_add_attempts = {
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_density_mode, (PropertyRNA *)&rna_BrushCurvesSculptSettings_minimum_distance,
	-1, "density_add_attempts", 3, 0, 0, 4, 0, "Density Add Attempts",
	"How many times the Density brush tries to add a new curve",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BrushCurvesSculptSettings, density_add_attempts), 0, NULL},
	BrushCurvesSculptSettings_density_add_attempts_get, BrushCurvesSculptSettings_density_add_attempts_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

static const EnumPropertyItem rna_BrushCurvesSculptSettings_density_mode_items[4] = {
	{0, "AUTO", 37, "Auto", "Either add or remove curves depending on the minimum distance of the curves under the cursor"},
	{1, "ADD", 31, "Add", "Add new curves between existing curves, taking the minimum distance into account"},
	{2, "REMOVE", 32, "Remove", "Remove curves whose root points are too close"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushCurvesSculptSettings_density_mode = {
	{NULL, (PropertyRNA *)&rna_BrushCurvesSculptSettings_density_add_attempts,
	-1, "density_mode", 3, 0, 0, 0, 0, "Density Mode",
	"Determines whether the brush adds or removes curves",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushCurvesSculptSettings_density_mode_get, BrushCurvesSculptSettings_density_mode_set, NULL, NULL, NULL, rna_BrushCurvesSculptSettings_density_mode_items, 3, 0
};

StructRNA RNA_BrushCurvesSculptSettings = {
	{(ContainerRNA *)&RNA_BrushTextureSlot, (ContainerRNA *)&RNA_BrushGpencilSettings,
	NULL,
	{(PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties, (PropertyRNA *)&rna_BrushCurvesSculptSettings_density_mode}},
	"BrushCurvesSculptSettings", NULL, NULL, 516, NULL, "Curves Sculpt Brush Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BrushCurvesSculptSettings_rna_properties,
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

/* Brush Texture Slot */
FloatPropertyRNA rna_BrushTextureSlot_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_map_mode, NULL,
	-1, "angle", 4194307, 0, 0, 4, 0, "Angle",
	"Brush texture rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_TextureSlot_brush_angle_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, rot), 5, NULL},
	BrushTextureSlot_angle_get, BrushTextureSlot_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_BrushTextureSlot_map_mode_items[7] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{3, "AREA_PLANE", 0, "Area Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{2, "3D", 0, "3D", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushTextureSlot_map_mode = {
	{(PropertyRNA *)&rna_BrushTextureSlot_mask_map_mode, (PropertyRNA *)&rna_BrushTextureSlot_angle,
	-1, "map_mode", 4194307, 0, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_TextureSlot_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, brush_map_mode), 2, NULL},
	BrushTextureSlot_map_mode_get, BrushTextureSlot_map_mode_set, rna_BrushTextureSlot_map_mode_itemf, NULL, NULL, rna_BrushTextureSlot_map_mode_items, 6, 1
};

static const EnumPropertyItem rna_BrushTextureSlot_mask_map_mode_items[5] = {
	{0, "VIEW_PLANE", 0, "View Plane", ""},
	{1, "TILED", 0, "Tiled", ""},
	{4, "RANDOM", 0, "Random", ""},
	{5, "STENCIL", 0, "Stencil", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushTextureSlot_mask_map_mode = {
	{(PropertyRNA *)&rna_BrushTextureSlot_use_rake, (PropertyRNA *)&rna_BrushTextureSlot_map_mode,
	-1, "mask_map_mode", 4194307, 0, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_TextureSlot_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, brush_map_mode), 2, NULL},
	BrushTextureSlot_mask_map_mode_get, BrushTextureSlot_mask_map_mode_set, NULL, NULL, NULL, rna_BrushTextureSlot_mask_map_mode_items, 4, 1
};

BoolPropertyRNA rna_BrushTextureSlot_use_rake = {
	{(PropertyRNA *)&rna_BrushTextureSlot_use_random, (PropertyRNA *)&rna_BrushTextureSlot_mask_map_mode,
	-1, "use_rake", 4194307, 0, 0, 0, 0, "Rake",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_TextureSlot_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushTextureSlot_use_rake_get, BrushTextureSlot_use_rake_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushTextureSlot_use_random = {
	{(PropertyRNA *)&rna_BrushTextureSlot_random_angle, (PropertyRNA *)&rna_BrushTextureSlot_use_rake,
	-1, "use_random", 4194307, 0, 0, 0, 0, "Random",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_TextureSlot_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushTextureSlot_use_random_get, BrushTextureSlot_use_random_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BrushTextureSlot_random_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle_source, (PropertyRNA *)&rna_BrushTextureSlot_use_random,
	-1, "random_angle", 4194307, 0, 0, 4, 0, "Random Angle",
	"Brush texture random angle",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_TextureSlot_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MTex, random_angle), 5, NULL},
	BrushTextureSlot_random_angle_get, BrushTextureSlot_random_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, 6.2831854820f, NULL
};

BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle_source = {
	{(PropertyRNA *)&rna_BrushTextureSlot_has_random_texture_angle, (PropertyRNA *)&rna_BrushTextureSlot_random_angle,
	-1, "has_texture_angle_source", 2, 0, 0, 0, 0, "Has Texture Angle Source",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushTextureSlot_has_texture_angle_source_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushTextureSlot_has_random_texture_angle = {
	{(PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle, (PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle_source,
	-1, "has_random_texture_angle", 2, 0, 0, 0, 0, "Has Random Texture Angle",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushTextureSlot_has_random_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BrushTextureSlot_has_texture_angle = {
	{NULL, (PropertyRNA *)&rna_BrushTextureSlot_has_random_texture_angle,
	-1, "has_texture_angle", 2, 0, 0, 0, 0, "Has Texture Angle Source",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BrushTextureSlot_has_texture_angle_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BrushTextureSlot = {
	{(ContainerRNA *)&RNA_OperatorStrokeElement, (ContainerRNA *)&RNA_BrushCurvesSculptSettings,
	NULL,
	{(PropertyRNA *)&rna_BrushTextureSlot_angle, (PropertyRNA *)&rna_BrushTextureSlot_has_texture_angle}},
	"BrushTextureSlot", NULL, NULL, 516, NULL, "Brush Texture Slot",
	"Texture slot for textures in a Brush data-block",
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

/* Operator Stroke Element */
static float rna_OperatorStrokeElement_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_location = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_mouse, NULL,
	-1, "location", 1027, 0, 0, 0, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_location_default
};

static float rna_OperatorStrokeElement_mouse_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_mouse = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_mouse_event, (PropertyRNA *)&rna_OperatorStrokeElement_location,
	-1, "mouse", 1027, 0, 0, 0, 0, "Mouse",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_mouse_default
};

static float rna_OperatorStrokeElement_mouse_event_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_mouse_event = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_pressure, (PropertyRNA *)&rna_OperatorStrokeElement_mouse,
	-1, "mouse_event", 1027, 0, 0, 0, 0, "Mouse Event",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_mouse_event_default
};

FloatPropertyRNA rna_OperatorStrokeElement_pressure = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_size, (PropertyRNA *)&rna_OperatorStrokeElement_mouse_event,
	-1, "pressure", 1027, 0, 0, 0, 0, "Pressure",
	"Tablet pressure",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_size = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_pen_flip, (PropertyRNA *)&rna_OperatorStrokeElement_pressure,
	-1, "size", 1027, 0, 0, 0, 0, "Brush Size",
	"Brush size in screen space",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_OperatorStrokeElement_pen_flip = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_x_tilt, (PropertyRNA *)&rna_OperatorStrokeElement_size,
	-1, "pen_flip", 1027, 0, 0, 0, 0, "Flip",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_x_tilt = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_y_tilt, (PropertyRNA *)&rna_OperatorStrokeElement_pen_flip,
	-1, "x_tilt", 1027, 0, 0, 0, 0, "Tilt X",
	"",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_y_tilt = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_time, (PropertyRNA *)&rna_OperatorStrokeElement_x_tilt,
	-1, "y_tilt", 1027, 0, 0, 0, 0, "Tilt Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_time = {
	{(PropertyRNA *)&rna_OperatorStrokeElement_is_start, (PropertyRNA *)&rna_OperatorStrokeElement_y_tilt,
	-1, "time", 1027, 0, 0, 0, 0, "Time",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_OperatorStrokeElement_is_start = {
	{NULL, (PropertyRNA *)&rna_OperatorStrokeElement_time,
	-1, "is_start", 1027, 0, 0, 0, 0, "Is Stroke Start",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_OperatorStrokeElement = {
	{(ContainerRNA *)&RNA_CacheFile, (ContainerRNA *)&RNA_BrushTextureSlot,
	NULL,
	{(PropertyRNA *)&rna_OperatorStrokeElement_location, (PropertyRNA *)&rna_OperatorStrokeElement_is_start}},
	"OperatorStrokeElement", NULL, NULL, 516, NULL, "Operator Stroke Element",
	"",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

