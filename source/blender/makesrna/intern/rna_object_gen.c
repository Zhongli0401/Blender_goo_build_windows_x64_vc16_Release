
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

#include "rna_object.c"
#include "rna_object_api.c"

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

PointerPropertyRNA rna_Object_data;
EnumPropertyRNA rna_Object_type;
EnumPropertyRNA rna_Object_mode;
FloatPropertyRNA rna_Object_bound_box;
PointerPropertyRNA rna_Object_parent;
EnumPropertyRNA rna_Object_parent_type;
IntPropertyRNA rna_Object_parent_vertices;
StringPropertyRNA rna_Object_parent_bone;
BoolPropertyRNA rna_Object_use_camera_lock_parent;
EnumPropertyRNA rna_Object_track_axis;
EnumPropertyRNA rna_Object_up_axis;
CollectionPropertyRNA rna_Object_material_slots;
PointerPropertyRNA rna_Object_active_material;
IntPropertyRNA rna_Object_active_material_index;
FloatPropertyRNA rna_Object_location;
FloatPropertyRNA rna_Object_rotation_quaternion;
FloatPropertyRNA rna_Object_rotation_axis_angle;
FloatPropertyRNA rna_Object_rotation_euler;
EnumPropertyRNA rna_Object_rotation_mode;
FloatPropertyRNA rna_Object_scale;
FloatPropertyRNA rna_Object_dimensions;
FloatPropertyRNA rna_Object_delta_location;
FloatPropertyRNA rna_Object_delta_rotation_euler;
FloatPropertyRNA rna_Object_delta_rotation_quaternion;
FloatPropertyRNA rna_Object_delta_scale;
BoolPropertyRNA rna_Object_lock_location;
BoolPropertyRNA rna_Object_lock_rotation;
BoolPropertyRNA rna_Object_lock_rotation_w;
BoolPropertyRNA rna_Object_lock_rotations_4d;
BoolPropertyRNA rna_Object_lock_scale;
FloatPropertyRNA rna_Object_matrix_world;
FloatPropertyRNA rna_Object_matrix_local;
FloatPropertyRNA rna_Object_matrix_basis;
FloatPropertyRNA rna_Object_matrix_parent_inverse;
CollectionPropertyRNA rna_Object_modifiers;
CollectionPropertyRNA rna_Object_grease_pencil_modifiers;
CollectionPropertyRNA rna_Object_shader_effects;
CollectionPropertyRNA rna_Object_constraints;
CollectionPropertyRNA rna_Object_vertex_groups;
CollectionPropertyRNA rna_Object_face_maps;
EnumPropertyRNA rna_Object_empty_display_type;
FloatPropertyRNA rna_Object_empty_display_size;
FloatPropertyRNA rna_Object_empty_image_offset;
PointerPropertyRNA rna_Object_image_user;
EnumPropertyRNA rna_Object_empty_image_depth;
BoolPropertyRNA rna_Object_show_empty_image_perspective;
BoolPropertyRNA rna_Object_show_empty_image_orthographic;
BoolPropertyRNA rna_Object_show_empty_image_only_axis_aligned;
BoolPropertyRNA rna_Object_use_empty_image_alpha;
EnumPropertyRNA rna_Object_empty_image_side;
BoolPropertyRNA rna_Object_add_rest_position_attribute;
IntPropertyRNA rna_Object_pass_index;
FloatPropertyRNA rna_Object_color;
PointerPropertyRNA rna_Object_field;
PointerPropertyRNA rna_Object_collision;
PointerPropertyRNA rna_Object_soft_body;
CollectionPropertyRNA rna_Object_particle_systems;
PointerPropertyRNA rna_Object_rigid_body;
PointerPropertyRNA rna_Object_rigid_body_constraint;
BoolPropertyRNA rna_Object_hide_viewport;
BoolPropertyRNA rna_Object_hide_select;
BoolPropertyRNA rna_Object_hide_render;
BoolPropertyRNA rna_Object_show_instancer_for_render;
BoolPropertyRNA rna_Object_show_instancer_for_viewport;
BoolPropertyRNA rna_Object_visible_camera;
BoolPropertyRNA rna_Object_visible_diffuse;
BoolPropertyRNA rna_Object_visible_glossy;
BoolPropertyRNA rna_Object_visible_transmission;
BoolPropertyRNA rna_Object_visible_volume_scatter;
BoolPropertyRNA rna_Object_visible_shadow;
BoolPropertyRNA rna_Object_is_holdout;
BoolPropertyRNA rna_Object_is_shadow_catcher;
EnumPropertyRNA rna_Object_instance_type;
BoolPropertyRNA rna_Object_use_instance_vertices_rotation;
BoolPropertyRNA rna_Object_use_instance_faces_scale;
FloatPropertyRNA rna_Object_instance_faces_scale;
PointerPropertyRNA rna_Object_instance_collection;
BoolPropertyRNA rna_Object_is_instancer;
EnumPropertyRNA rna_Object_display_type;
BoolPropertyRNA rna_Object_show_bounds;
EnumPropertyRNA rna_Object_display_bounds_type;
BoolPropertyRNA rna_Object_show_name;
BoolPropertyRNA rna_Object_show_axis;
BoolPropertyRNA rna_Object_show_texture_space;
BoolPropertyRNA rna_Object_show_wire;
BoolPropertyRNA rna_Object_show_all_edges;
BoolPropertyRNA rna_Object_use_grease_pencil_lights;
BoolPropertyRNA rna_Object_show_transparent;
BoolPropertyRNA rna_Object_show_in_front;
PointerPropertyRNA rna_Object_pose_library;
PointerPropertyRNA rna_Object_pose;
BoolPropertyRNA rna_Object_show_only_shape_key;
BoolPropertyRNA rna_Object_use_shape_key_edit_mode;
PointerPropertyRNA rna_Object_active_shape_key;
IntPropertyRNA rna_Object_active_shape_key_index;
BoolPropertyRNA rna_Object_use_dynamic_topology_sculpting;
BoolPropertyRNA rna_Object_is_from_instancer;
BoolPropertyRNA rna_Object_is_from_set;
PointerPropertyRNA rna_Object_display;
PointerPropertyRNA rna_Object_lineart;
BoolPropertyRNA rna_Object_use_mesh_mirror_x;
BoolPropertyRNA rna_Object_use_mesh_mirror_y;
BoolPropertyRNA rna_Object_use_mesh_mirror_z;
StringPropertyRNA rna_Object_lightgroup;
PointerPropertyRNA rna_Object_animation_data;
PointerPropertyRNA rna_Object_animation_visualization;
PointerPropertyRNA rna_Object_motion_path;

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


extern FunctionRNA rna_Object_select_get_func;
extern PointerPropertyRNA rna_Object_select_get_view_layer;
extern BoolPropertyRNA rna_Object_select_get_result;

extern FunctionRNA rna_Object_select_set_func;
extern BoolPropertyRNA rna_Object_select_set_state;
extern PointerPropertyRNA rna_Object_select_set_view_layer;

extern FunctionRNA rna_Object_hide_get_func;
extern PointerPropertyRNA rna_Object_hide_get_view_layer;
extern BoolPropertyRNA rna_Object_hide_get_result;

extern FunctionRNA rna_Object_hide_set_func;
extern BoolPropertyRNA rna_Object_hide_set_state;
extern PointerPropertyRNA rna_Object_hide_set_view_layer;

extern FunctionRNA rna_Object_visible_get_func;
extern PointerPropertyRNA rna_Object_visible_get_view_layer;
extern PointerPropertyRNA rna_Object_visible_get_viewport;
extern BoolPropertyRNA rna_Object_visible_get_result;

extern FunctionRNA rna_Object_holdout_get_func;
extern PointerPropertyRNA rna_Object_holdout_get_view_layer;
extern BoolPropertyRNA rna_Object_holdout_get_result;

extern FunctionRNA rna_Object_indirect_only_get_func;
extern PointerPropertyRNA rna_Object_indirect_only_get_view_layer;
extern BoolPropertyRNA rna_Object_indirect_only_get_result;

extern FunctionRNA rna_Object_local_view_get_func;
extern PointerPropertyRNA rna_Object_local_view_get_viewport;
extern BoolPropertyRNA rna_Object_local_view_get_result;

extern FunctionRNA rna_Object_local_view_set_func;
extern PointerPropertyRNA rna_Object_local_view_set_viewport;
extern BoolPropertyRNA rna_Object_local_view_set_state;

extern FunctionRNA rna_Object_visible_in_viewport_get_func;
extern PointerPropertyRNA rna_Object_visible_in_viewport_get_viewport;
extern BoolPropertyRNA rna_Object_visible_in_viewport_get_result;

extern FunctionRNA rna_Object_convert_space_func;
extern PointerPropertyRNA rna_Object_convert_space_pose_bone;
extern FloatPropertyRNA rna_Object_convert_space_matrix;
extern FloatPropertyRNA rna_Object_convert_space_matrix_return;
extern EnumPropertyRNA rna_Object_convert_space_from_space;
extern EnumPropertyRNA rna_Object_convert_space_to_space;

extern FunctionRNA rna_Object_calc_matrix_camera_func;
extern PointerPropertyRNA rna_Object_calc_matrix_camera_depsgraph;
extern FloatPropertyRNA rna_Object_calc_matrix_camera_result;
extern IntPropertyRNA rna_Object_calc_matrix_camera_x;
extern IntPropertyRNA rna_Object_calc_matrix_camera_y;
extern FloatPropertyRNA rna_Object_calc_matrix_camera_scale_x;
extern FloatPropertyRNA rna_Object_calc_matrix_camera_scale_y;

extern FunctionRNA rna_Object_camera_fit_coords_func;
extern PointerPropertyRNA rna_Object_camera_fit_coords_depsgraph;
extern FloatPropertyRNA rna_Object_camera_fit_coords_coordinates;
extern FloatPropertyRNA rna_Object_camera_fit_coords_co_return;
extern FloatPropertyRNA rna_Object_camera_fit_coords_scale_return;

extern FunctionRNA rna_Object_crazyspace_eval_func;
extern PointerPropertyRNA rna_Object_crazyspace_eval_depsgraph;
extern PointerPropertyRNA rna_Object_crazyspace_eval_scene;

extern FunctionRNA rna_Object_crazyspace_displacement_to_deformed_func;
extern IntPropertyRNA rna_Object_crazyspace_displacement_to_deformed_vertex_index;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement_deformed;

extern FunctionRNA rna_Object_crazyspace_displacement_to_original_func;
extern IntPropertyRNA rna_Object_crazyspace_displacement_to_original_vertex_index;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement;
extern FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement_original;

extern FunctionRNA rna_Object_crazyspace_eval_clear_func;
extern FunctionRNA rna_Object_to_mesh_func;
extern BoolPropertyRNA rna_Object_to_mesh_preserve_all_data_layers;
extern PointerPropertyRNA rna_Object_to_mesh_depsgraph;
extern PointerPropertyRNA rna_Object_to_mesh_mesh;

extern FunctionRNA rna_Object_to_mesh_clear_func;
extern FunctionRNA rna_Object_to_curve_func;
extern PointerPropertyRNA rna_Object_to_curve_depsgraph;
extern BoolPropertyRNA rna_Object_to_curve_apply_modifiers;
extern PointerPropertyRNA rna_Object_to_curve_curve;

extern FunctionRNA rna_Object_to_curve_clear_func;
extern FunctionRNA rna_Object_find_armature_func;
extern PointerPropertyRNA rna_Object_find_armature_ob_arm;

extern FunctionRNA rna_Object_shape_key_add_func;
extern StringPropertyRNA rna_Object_shape_key_add_name;
extern BoolPropertyRNA rna_Object_shape_key_add_from_mix;
extern PointerPropertyRNA rna_Object_shape_key_add_key;

extern FunctionRNA rna_Object_shape_key_remove_func;
extern PointerPropertyRNA rna_Object_shape_key_remove_key;

extern FunctionRNA rna_Object_shape_key_clear_func;
extern FunctionRNA rna_Object_ray_cast_func;
extern FloatPropertyRNA rna_Object_ray_cast_origin;
extern FloatPropertyRNA rna_Object_ray_cast_direction;
extern FloatPropertyRNA rna_Object_ray_cast_distance;
extern PointerPropertyRNA rna_Object_ray_cast_depsgraph;
extern BoolPropertyRNA rna_Object_ray_cast_result;
extern FloatPropertyRNA rna_Object_ray_cast_location;
extern FloatPropertyRNA rna_Object_ray_cast_normal;
extern IntPropertyRNA rna_Object_ray_cast_index;

extern FunctionRNA rna_Object_closest_point_on_mesh_func;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_origin;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_distance;
extern PointerPropertyRNA rna_Object_closest_point_on_mesh_depsgraph;
extern BoolPropertyRNA rna_Object_closest_point_on_mesh_result;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_location;
extern FloatPropertyRNA rna_Object_closest_point_on_mesh_normal;
extern IntPropertyRNA rna_Object_closest_point_on_mesh_index;

extern FunctionRNA rna_Object_is_modified_func;
extern PointerPropertyRNA rna_Object_is_modified_scene;
extern EnumPropertyRNA rna_Object_is_modified_settings;
extern BoolPropertyRNA rna_Object_is_modified_result;

extern FunctionRNA rna_Object_is_deform_modified_func;
extern PointerPropertyRNA rna_Object_is_deform_modified_scene;
extern EnumPropertyRNA rna_Object_is_deform_modified_settings;
extern BoolPropertyRNA rna_Object_is_deform_modified_result;

extern FunctionRNA rna_Object_update_from_editmode_func;
extern BoolPropertyRNA rna_Object_update_from_editmode_result;

extern FunctionRNA rna_Object_cache_release_func;
extern FunctionRNA rna_Object_generate_gpencil_strokes_func;
extern PointerPropertyRNA rna_Object_generate_gpencil_strokes_grease_pencil_object;
extern BoolPropertyRNA rna_Object_generate_gpencil_strokes_use_collections;
extern FloatPropertyRNA rna_Object_generate_gpencil_strokes_scale_thickness;
extern FloatPropertyRNA rna_Object_generate_gpencil_strokes_sample;
extern BoolPropertyRNA rna_Object_generate_gpencil_strokes_result;



CollectionPropertyRNA rna_ObjectModifiers_rna_properties;
PointerPropertyRNA rna_ObjectModifiers_rna_type;
PointerPropertyRNA rna_ObjectModifiers_active;

extern FunctionRNA rna_ObjectModifiers_new_func;
extern StringPropertyRNA rna_ObjectModifiers_new_name;
extern EnumPropertyRNA rna_ObjectModifiers_new_type;
extern PointerPropertyRNA rna_ObjectModifiers_new_modifier;

extern FunctionRNA rna_ObjectModifiers_remove_func;
extern PointerPropertyRNA rna_ObjectModifiers_remove_modifier;

extern FunctionRNA rna_ObjectModifiers_clear_func;


CollectionPropertyRNA rna_ObjectGpencilModifiers_rna_properties;
PointerPropertyRNA rna_ObjectGpencilModifiers_rna_type;

extern FunctionRNA rna_ObjectGpencilModifiers_new_func;
extern StringPropertyRNA rna_ObjectGpencilModifiers_new_name;
extern EnumPropertyRNA rna_ObjectGpencilModifiers_new_type;
extern PointerPropertyRNA rna_ObjectGpencilModifiers_new_greasepencil_modifier;

extern FunctionRNA rna_ObjectGpencilModifiers_remove_func;
extern PointerPropertyRNA rna_ObjectGpencilModifiers_remove_greasepencil_modifier;

extern FunctionRNA rna_ObjectGpencilModifiers_clear_func;


CollectionPropertyRNA rna_ObjectShaderFx_rna_properties;
PointerPropertyRNA rna_ObjectShaderFx_rna_type;

extern FunctionRNA rna_ObjectShaderFx_new_func;
extern StringPropertyRNA rna_ObjectShaderFx_new_name;
extern EnumPropertyRNA rna_ObjectShaderFx_new_type;
extern PointerPropertyRNA rna_ObjectShaderFx_new_shader_fx;

extern FunctionRNA rna_ObjectShaderFx_remove_func;
extern PointerPropertyRNA rna_ObjectShaderFx_remove_shader_fx;

extern FunctionRNA rna_ObjectShaderFx_clear_func;


CollectionPropertyRNA rna_ObjectConstraints_rna_properties;
PointerPropertyRNA rna_ObjectConstraints_rna_type;
PointerPropertyRNA rna_ObjectConstraints_active;

extern FunctionRNA rna_ObjectConstraints_new_func;
extern EnumPropertyRNA rna_ObjectConstraints_new_type;
extern PointerPropertyRNA rna_ObjectConstraints_new_constraint;

extern FunctionRNA rna_ObjectConstraints_remove_func;
extern PointerPropertyRNA rna_ObjectConstraints_remove_constraint;

extern FunctionRNA rna_ObjectConstraints_clear_func;
extern FunctionRNA rna_ObjectConstraints_move_func;
extern IntPropertyRNA rna_ObjectConstraints_move_from_index;
extern IntPropertyRNA rna_ObjectConstraints_move_to_index;

extern FunctionRNA rna_ObjectConstraints_copy_func;
extern PointerPropertyRNA rna_ObjectConstraints_copy_constraint;
extern PointerPropertyRNA rna_ObjectConstraints_copy_new_constraint;



CollectionPropertyRNA rna_VertexGroups_rna_properties;
PointerPropertyRNA rna_VertexGroups_rna_type;
PointerPropertyRNA rna_VertexGroups_active;
IntPropertyRNA rna_VertexGroups_active_index;

extern FunctionRNA rna_VertexGroups_new_func;
extern StringPropertyRNA rna_VertexGroups_new_name;
extern PointerPropertyRNA rna_VertexGroups_new_group;

extern FunctionRNA rna_VertexGroups_remove_func;
extern PointerPropertyRNA rna_VertexGroups_remove_group;

extern FunctionRNA rna_VertexGroups_clear_func;


CollectionPropertyRNA rna_FaceMaps_rna_properties;
PointerPropertyRNA rna_FaceMaps_rna_type;
PointerPropertyRNA rna_FaceMaps_active;
IntPropertyRNA rna_FaceMaps_active_index;

extern FunctionRNA rna_FaceMaps_new_func;
extern StringPropertyRNA rna_FaceMaps_new_name;
extern PointerPropertyRNA rna_FaceMaps_new_fmap;

extern FunctionRNA rna_FaceMaps_remove_func;
extern PointerPropertyRNA rna_FaceMaps_remove_group;

extern FunctionRNA rna_FaceMaps_clear_func;


CollectionPropertyRNA rna_ParticleSystems_rna_properties;
PointerPropertyRNA rna_ParticleSystems_rna_type;
PointerPropertyRNA rna_ParticleSystems_active;
IntPropertyRNA rna_ParticleSystems_active_index;


CollectionPropertyRNA rna_VertexGroup_rna_properties;
PointerPropertyRNA rna_VertexGroup_rna_type;
StringPropertyRNA rna_VertexGroup_name;
BoolPropertyRNA rna_VertexGroup_lock_weight;
IntPropertyRNA rna_VertexGroup_index;

extern FunctionRNA rna_VertexGroup_add_func;
extern IntPropertyRNA rna_VertexGroup_add_index;
extern FloatPropertyRNA rna_VertexGroup_add_weight;
extern EnumPropertyRNA rna_VertexGroup_add_type;

extern FunctionRNA rna_VertexGroup_remove_func;
extern IntPropertyRNA rna_VertexGroup_remove_index;

extern FunctionRNA rna_VertexGroup_weight_func;
extern IntPropertyRNA rna_VertexGroup_weight_index;
extern FloatPropertyRNA rna_VertexGroup_weight_weight;



CollectionPropertyRNA rna_FaceMap_rna_properties;
PointerPropertyRNA rna_FaceMap_rna_type;
StringPropertyRNA rna_FaceMap_name;
BoolPropertyRNA rna_FaceMap_select;
IntPropertyRNA rna_FaceMap_index;

extern FunctionRNA rna_FaceMap_add_func;
extern IntPropertyRNA rna_FaceMap_add_index;

extern FunctionRNA rna_FaceMap_remove_func;
extern IntPropertyRNA rna_FaceMap_remove_index;



CollectionPropertyRNA rna_MaterialSlot_rna_properties;
PointerPropertyRNA rna_MaterialSlot_rna_type;
EnumPropertyRNA rna_MaterialSlot_link;
PointerPropertyRNA rna_MaterialSlot_material;
IntPropertyRNA rna_MaterialSlot_slot_index;
StringPropertyRNA rna_MaterialSlot_name;


CollectionPropertyRNA rna_ObjectDisplay_rna_properties;
PointerPropertyRNA rna_ObjectDisplay_rna_type;
BoolPropertyRNA rna_ObjectDisplay_show_shadows;


CollectionPropertyRNA rna_ObjectLineArt_rna_properties;
PointerPropertyRNA rna_ObjectLineArt_rna_type;
EnumPropertyRNA rna_ObjectLineArt_usage;
BoolPropertyRNA rna_ObjectLineArt_use_crease_override;
FloatPropertyRNA rna_ObjectLineArt_crease_threshold;
BoolPropertyRNA rna_ObjectLineArt_use_intersection_priority_override;
IntPropertyRNA rna_ObjectLineArt_intersection_priority;

PointerRNA Object_data_get(PointerRNA *ptr)
{
    return rna_Object_data_get(ptr);
}

void Object_data_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_data_set(ptr, value, reports);
}

int Object_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->type);
}

int Object_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->mode);
}

void Object_bound_box_get(PointerRNA *ptr, float values[24])
{
    rna_Object_boundbox_get(ptr, values);
}

PointerRNA Object_parent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

void Object_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_parent_set(ptr, value, reports);
}

int Object_parent_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((data->partype) & 7);
}

void Object_parent_type_set(PointerRNA *ptr, int value)
{
    rna_Object_parent_type_set(ptr, value);
}

void Object_parent_vertices_get(PointerRNA *ptr, int values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)((&data->par1)[i]);
    }
}

void Object_parent_vertices_set(PointerRNA *ptr, const int values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->par1)[i] = CLAMPIS(values[i], 0, INT_MAX);
    }
}

void Object_parent_bone_get(PointerRNA *ptr, char *value)
{
    Object *data = (Object *)(ptr->data);
    BLI_strncpy_utf8(value, data->parsubstr, 64);
}

int Object_parent_bone_length(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return strlen(data->parsubstr);
}

void Object_parent_bone_set(PointerRNA *ptr, const char *value)
{
    rna_Object_parent_bone_set(ptr, value);
}

bool Object_use_camera_lock_parent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 1) != 0);
}

void Object_use_camera_lock_parent_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag |= 1; }
    else { data->transflag &= ~1; }
}

int Object_track_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->trackflag);
}

void Object_track_axis_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->trackflag = value;
}

int Object_up_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->upflag);
}

void Object_up_axis_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->upflag = value;
}

int Object_material_slots_length(PointerRNA *ptr)
{
    return rna_Object_material_slots_length(ptr);
}

static PointerRNA Object_material_slots_get(CollectionPropertyIterator *iter)
{
    return rna_Object_material_slots_get(iter);
}

void Object_material_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_material_slots;

    rna_Object_material_slots_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Object_material_slots_get(iter);
    }
}

void Object_material_slots_next(CollectionPropertyIterator *iter)
{
    rna_Object_material_slots_next(iter);

    if (iter->valid) {
        iter->ptr = Object_material_slots_get(iter);
    }
}

void Object_material_slots_end(CollectionPropertyIterator *iter)
{
    rna_Object_material_slots_end(iter);
}

PointerRNA Object_active_material_get(PointerRNA *ptr)
{
    return rna_Object_active_material_get(ptr);
}

void Object_active_material_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_material_set(ptr, value, reports);
}

int Object_active_material_index_get(PointerRNA *ptr)
{
    return rna_Object_active_material_index_get(ptr);
}

void Object_active_material_index_set(PointerRNA *ptr, int value)
{
    rna_Object_active_material_index_set(ptr, value);
}

void Object_location_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

void Object_location_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

void Object_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

void Object_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

void Object_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
    rna_Object_rotation_axis_angle_get(ptr, values);
}

void Object_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
    rna_Object_rotation_axis_angle_set(ptr, values);
}

void Object_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rot)[i]);
    }
}

void Object_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rot)[i] = values[i];
    }
}

int Object_rotation_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->rotmode);
}

void Object_rotation_mode_set(PointerRNA *ptr, int value)
{
    rna_Object_rotation_mode_set(ptr, value);
}

void Object_scale_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void Object_scale_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void Object_dimensions_get(PointerRNA *ptr, float values[3])
{
    rna_Object_dimensions_get(ptr, values);
}

void Object_dimensions_set(PointerRNA *ptr, const float values[3])
{
    rna_Object_dimensions_set(ptr, values);
}

void Object_delta_location_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->dloc)[i]);
    }
}

void Object_delta_location_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->dloc)[i] = values[i];
    }
}

void Object_delta_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->drot)[i]);
    }
}

void Object_delta_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->drot)[i] = values[i];
    }
}

void Object_delta_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->dquat)[i]);
    }
}

void Object_delta_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->dquat)[i] = values[i];
    }
}

void Object_delta_scale_get(PointerRNA *ptr, float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->dscale)[i]);
    }
}

void Object_delta_scale_set(PointerRNA *ptr, const float values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->dscale)[i] = values[i];
    }
}

void Object_lock_location_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (1 << i)) != 0);
    }
}

void Object_lock_location_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (1 << i); }
        else { data->protectflag &= ~(1 << i); }
    }
}

void Object_lock_rotation_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (8 << i)) != 0);
    }
}

void Object_lock_rotation_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (8 << i); }
        else { data->protectflag &= ~(8 << i); }
    }
}

bool Object_lock_rotation_w_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->protectflag) & 512) != 0);
}

void Object_lock_rotation_w_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->protectflag |= 512; }
    else { data->protectflag &= ~512; }
}

bool Object_lock_rotations_4d_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->protectflag) & 1024) != 0);
}

void Object_lock_rotations_4d_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->protectflag |= 1024; }
    else { data->protectflag &= ~1024; }
}

void Object_lock_scale_get(PointerRNA *ptr, bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (64 << i)) != 0);
    }
}

void Object_lock_scale_set(PointerRNA *ptr, const bool values[3])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (64 << i); }
        else { data->protectflag &= ~(64 << i); }
    }
}

void Object_matrix_world_get(PointerRNA *ptr, float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->obmat)[i]);
    }
}

void Object_matrix_world_set(PointerRNA *ptr, const float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        ((float *)data->obmat)[i] = values[i];
    }
}

void Object_matrix_local_get(PointerRNA *ptr, float values[16])
{
    rna_Object_matrix_local_get(ptr, values);
}

void Object_matrix_local_set(PointerRNA *ptr, const float values[16])
{
    rna_Object_matrix_local_set(ptr, values);
}

void Object_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    rna_Object_matrix_basis_get(ptr, values);
}

void Object_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    rna_Object_matrix_basis_set(ptr, values);
}

void Object_matrix_parent_inverse_get(PointerRNA *ptr, float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->parentinv)[i]);
    }
}

void Object_matrix_parent_inverse_set(PointerRNA *ptr, const float values[16])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        ((float *)data->parentinv)[i] = values[i];
    }
}

static PointerRNA Object_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Modifier, rna_iterator_listbase_get(iter));
}

void Object_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_modifiers;

    rna_iterator_listbase_begin(iter, &data->modifiers, NULL);

    if (iter->valid) {
        iter->ptr = Object_modifiers_get(iter);
    }
}

void Object_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_modifiers_get(iter);
    }
}

void Object_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Object_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_modifiers_get(&iter); }
    }

    Object_modifiers_end(&iter);

    return found;
}

int Object_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int Modifier_name_length(PointerRNA *);
    extern void Modifier_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Modifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                Modifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                Modifier_name_get(&iter.ptr, name);
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
        Object_modifiers_next(&iter);
    }
    Object_modifiers_end(&iter);

    return found;
}

static PointerRNA Object_grease_pencil_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GpencilModifier, rna_iterator_listbase_get(iter));
}

void Object_grease_pencil_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_grease_pencil_modifiers;

    rna_iterator_listbase_begin(iter, &data->greasepencil_modifiers, NULL);

    if (iter->valid) {
        iter->ptr = Object_grease_pencil_modifiers_get(iter);
    }
}

void Object_grease_pencil_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_grease_pencil_modifiers_get(iter);
    }
}

void Object_grease_pencil_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Object_grease_pencil_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_grease_pencil_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_grease_pencil_modifiers_get(&iter); }
    }

    Object_grease_pencil_modifiers_end(&iter);

    return found;
}

int Object_grease_pencil_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int GpencilModifier_name_length(PointerRNA *);
    extern void GpencilModifier_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_grease_pencil_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GpencilModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                GpencilModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                GpencilModifier_name_get(&iter.ptr, name);
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
        Object_grease_pencil_modifiers_next(&iter);
    }
    Object_grease_pencil_modifiers_end(&iter);

    return found;
}

static PointerRNA Object_shader_effects_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ShaderFx, rna_iterator_listbase_get(iter));
}

void Object_shader_effects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_shader_effects;

    rna_iterator_listbase_begin(iter, &data->shader_fx, NULL);

    if (iter->valid) {
        iter->ptr = Object_shader_effects_get(iter);
    }
}

void Object_shader_effects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_shader_effects_get(iter);
    }
}

void Object_shader_effects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Object_shader_effects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_shader_effects_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_shader_effects_get(&iter); }
    }

    Object_shader_effects_end(&iter);

    return found;
}

int Object_shader_effects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ShaderFx_name_length(PointerRNA *);
    extern void ShaderFx_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_shader_effects_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ShaderFx_name_length(&iter.ptr);
            if (namelen < 1024) {
                ShaderFx_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ShaderFx_name_get(&iter.ptr, name);
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
        Object_shader_effects_next(&iter);
    }
    Object_shader_effects_end(&iter);

    return found;
}

static PointerRNA Object_constraints_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Constraint, rna_iterator_listbase_get(iter));
}

void Object_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_constraints;

    rna_iterator_listbase_begin(iter, &data->constraints, NULL);

    if (iter->valid) {
        iter->ptr = Object_constraints_get(iter);
    }
}

void Object_constraints_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_constraints_get(iter);
    }
}

void Object_constraints_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Object_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_constraints_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_constraints_get(&iter); }
    }

    Object_constraints_end(&iter);

    return found;
}

int Object_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int Constraint_name_length(PointerRNA *);
    extern void Constraint_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_constraints_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Constraint_name_length(&iter.ptr);
            if (namelen < 1024) {
                Constraint_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                Constraint_name_get(&iter.ptr, name);
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
        Object_constraints_next(&iter);
    }
    Object_constraints_end(&iter);

    return found;
}

static PointerRNA Object_vertex_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroup, rna_iterator_listbase_get(iter));
}

void Object_vertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_vertex_groups;

    rna_Object_vertex_groups_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Object_vertex_groups_get(iter);
    }
}

void Object_vertex_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_vertex_groups_get(iter);
    }
}

void Object_vertex_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Object_face_maps_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FaceMap, rna_iterator_listbase_get(iter));
}

void Object_face_maps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_face_maps;

    rna_iterator_listbase_begin(iter, &data->fmaps, NULL);

    if (iter->valid) {
        iter->ptr = Object_face_maps_get(iter);
    }
}

void Object_face_maps_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_face_maps_get(iter);
    }
}

void Object_face_maps_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Object_face_maps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_face_maps_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_face_maps_get(&iter); }
    }

    Object_face_maps_end(&iter);

    return found;
}

int Object_face_maps_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int FaceMap_name_length(PointerRNA *);
    extern void FaceMap_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_face_maps_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FaceMap_name_length(&iter.ptr);
            if (namelen < 1024) {
                FaceMap_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                FaceMap_name_get(&iter.ptr, name);
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
        Object_face_maps_next(&iter);
    }
    Object_face_maps_end(&iter);

    return found;
}

int Object_empty_display_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->empty_drawtype);
}

void Object_empty_display_type_set(PointerRNA *ptr, int value)
{
    rna_Object_empty_display_type_set(ptr, value);
}

float Object_empty_display_size_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->empty_drawsize);
}

void Object_empty_display_size_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_drawsize = CLAMPIS(value, 0.0001000000f, 1000.0f);
}

void Object_empty_image_offset_get(PointerRNA *ptr, float values[2])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->ima_ofs)[i]);
    }
}

void Object_empty_image_offset_set(PointerRNA *ptr, const float values[2])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->ima_ofs)[i] = values[i];
    }
}

PointerRNA Object_image_user_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, data->iuser);
}

int Object_empty_image_depth_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->empty_image_depth);
}

void Object_empty_image_depth_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_image_depth = value;
}

bool Object_show_empty_image_perspective_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->empty_image_visibility_flag) & 1) != 0);
}

void Object_show_empty_image_perspective_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->empty_image_visibility_flag |= 1; }
    else { data->empty_image_visibility_flag &= ~1; }
}

bool Object_show_empty_image_orthographic_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->empty_image_visibility_flag) & 2) != 0);
}

void Object_show_empty_image_orthographic_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->empty_image_visibility_flag |= 2; }
    else { data->empty_image_visibility_flag &= ~2; }
}

bool Object_show_empty_image_only_axis_aligned_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->empty_image_visibility_flag) & 16) != 0);
}

void Object_show_empty_image_only_axis_aligned_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->empty_image_visibility_flag |= 16; }
    else { data->empty_image_visibility_flag &= ~16; }
}

bool Object_use_empty_image_alpha_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->empty_image_flag) & 1) != 0);
}

void Object_use_empty_image_alpha_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->empty_image_flag |= 1; }
    else { data->empty_image_flag &= ~1; }
}

int Object_empty_image_side_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((data->empty_image_visibility_flag) & 12);
}

void Object_empty_image_side_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->empty_image_visibility_flag &= ~12;
    data->empty_image_visibility_flag |= value;
}

bool Object_add_rest_position_attribute_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->modifier_flag) & 1) != 0);
}

void Object_add_rest_position_attribute_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->modifier_flag |= 1; }
    else { data->modifier_flag &= ~1; }
}

int Object_pass_index_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->index);
}

void Object_pass_index_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->index = CLAMPIS(value, 0, 32767);
}

void Object_color_get(PointerRNA *ptr, float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void Object_color_set(PointerRNA *ptr, const float values[4])
{
    Object *data = (Object *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA Object_field_get(PointerRNA *ptr)
{
    return rna_Object_field_get(ptr);
}

PointerRNA Object_collision_get(PointerRNA *ptr)
{
    return rna_Object_collision_get(ptr);
}

PointerRNA Object_soft_body_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_SoftBodySettings, data->soft);
}

static PointerRNA Object_particle_systems_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSystem, rna_iterator_listbase_get(iter));
}

void Object_particle_systems_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Object_particle_systems;

    rna_iterator_listbase_begin(iter, &data->particlesystem, NULL);

    if (iter->valid) {
        iter->ptr = Object_particle_systems_get(iter);
    }
}

void Object_particle_systems_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Object_particle_systems_get(iter);
    }
}

void Object_particle_systems_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Object_particle_systems_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Object_particle_systems_begin(&iter, ptr);

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
        if (found) { *r_ptr = Object_particle_systems_get(&iter); }
    }

    Object_particle_systems_end(&iter);

    return found;
}

int Object_particle_systems_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ParticleSystem_name_length(PointerRNA *);
    extern void ParticleSystem_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Object_particle_systems_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleSystem_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleSystem_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ParticleSystem_name_get(&iter.ptr, name);
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
        Object_particle_systems_next(&iter);
    }
    Object_particle_systems_end(&iter);

    return found;
}

PointerRNA Object_rigid_body_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_RigidBodyObject, data->rigidbody_object);
}

PointerRNA Object_rigid_body_constraint_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_RigidBodyConstraint, data->rigidbody_constraint);
}

bool Object_hide_viewport_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 1) != 0);
}

void Object_hide_viewport_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 1; }
    else { data->visibility_flag &= ~1; }
}

bool Object_hide_select_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 2) != 0);
}

void Object_hide_select_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 2; }
    else { data->visibility_flag &= ~2; }
}

bool Object_hide_render_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 4) != 0);
}

void Object_hide_render_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 4; }
    else { data->visibility_flag &= ~4; }
}

bool Object_show_instancer_for_render_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->duplicator_visibility_flag) & 2) != 0);
}

void Object_show_instancer_for_render_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->duplicator_visibility_flag |= 2; }
    else { data->duplicator_visibility_flag &= ~2; }
}

bool Object_show_instancer_for_viewport_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->duplicator_visibility_flag) & 1) != 0);
}

void Object_show_instancer_for_viewport_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->duplicator_visibility_flag |= 1; }
    else { data->duplicator_visibility_flag &= ~1; }
}

bool Object_visible_camera_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 8) != 0);
}

void Object_visible_camera_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 8; }
    else { data->visibility_flag &= ~8; }
}

bool Object_visible_diffuse_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 16) != 0);
}

void Object_visible_diffuse_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 16; }
    else { data->visibility_flag &= ~16; }
}

bool Object_visible_glossy_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 32) != 0);
}

void Object_visible_glossy_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 32; }
    else { data->visibility_flag &= ~32; }
}

bool Object_visible_transmission_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 64) != 0);
}

void Object_visible_transmission_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 64; }
    else { data->visibility_flag &= ~64; }
}

bool Object_visible_volume_scatter_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 128) != 0);
}

void Object_visible_volume_scatter_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 128; }
    else { data->visibility_flag &= ~128; }
}

bool Object_visible_shadow_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->visibility_flag) & 256) != 0);
}

void Object_visible_shadow_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->visibility_flag |= 256; }
    else { data->visibility_flag &= ~256; }
}

bool Object_is_holdout_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 512) != 0);
}

void Object_is_holdout_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 512; }
    else { data->visibility_flag &= ~512; }
}

bool Object_is_shadow_catcher_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->visibility_flag) & 1024) != 0);
}

void Object_is_shadow_catcher_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->visibility_flag |= 1024; }
    else { data->visibility_flag &= ~1024; }
}

int Object_instance_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return ((data->transflag) & 784);
}

void Object_instance_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->transflag &= ~784;
    data->transflag |= value;
}

bool Object_use_instance_vertices_rotation_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 32) != 0);
}

void Object_use_instance_vertices_rotation_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag |= 32; }
    else { data->transflag &= ~32; }
}

bool Object_use_instance_faces_scale_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 1024) != 0);
}

void Object_use_instance_faces_scale_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->transflag |= 1024; }
    else { data->transflag &= ~1024; }
}

float Object_instance_faces_scale_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (float)(data->instance_faces_scale);
}

void Object_instance_faces_scale_set(PointerRNA *ptr, float value)
{
    Object *data = (Object *)(ptr->data);
    data->instance_faces_scale = CLAMPIS(value, 0.0010000000f, 10000.0f);
}

PointerRNA Object_instance_collection_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->instance_collection);
}

void Object_instance_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_dup_collection_set(ptr, value, reports);
}

bool Object_is_instancer_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->transflag) & 2832) != 0);
}

int Object_display_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->dt);
}

void Object_display_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->dt = value;
}

bool Object_show_bounds_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 1) != 0);
}

void Object_show_bounds_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 1; }
    else { data->dtx &= ~1; }
}

int Object_display_bounds_type_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (int)(data->boundtype);
}

void Object_display_bounds_type_set(PointerRNA *ptr, int value)
{
    Object *data = (Object *)(ptr->data);
    data->boundtype = value;
}

bool Object_show_name_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 8) != 0);
}

void Object_show_name_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 8; }
    else { data->dtx &= ~8; }
}

bool Object_show_axis_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 2) != 0);
}

void Object_show_axis_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 2; }
    else { data->dtx &= ~2; }
}

bool Object_show_texture_space_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 4) != 0);
}

void Object_show_texture_space_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 4; }
    else { data->dtx &= ~4; }
}

bool Object_show_wire_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 32) != 0);
}

void Object_show_wire_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 32; }
    else { data->dtx &= ~32; }
}

bool Object_show_all_edges_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 256) != 0);
}

void Object_show_all_edges_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 256; }
    else { data->dtx &= ~256; }
}

bool Object_use_grease_pencil_lights_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 1024) != 0);
}

void Object_use_grease_pencil_lights_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 1024; }
    else { data->dtx &= ~1024; }
}

bool Object_show_transparent_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 128) != 0);
}

void Object_show_transparent_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 128; }
    else { data->dtx &= ~128; }
}

bool Object_show_in_front_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->dtx) & 64) != 0);
}

void Object_show_in_front_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->dtx |= 64; }
    else { data->dtx &= ~64; }
}

PointerRNA Object_pose_library_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Action, data->poselib);
}

void Object_pose_library_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Object *data = (Object *)(ptr->data);

    if (data->poselib) {
        id_us_min((ID *)data->poselib);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->poselib = value.data;
}

PointerRNA Object_pose_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Pose, data->pose);
}

bool Object_show_only_shape_key_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->shapeflag) & 1) != 0);
}

void Object_show_only_shape_key_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->shapeflag |= 1; }
    else { data->shapeflag &= ~1; }
}

bool Object_use_shape_key_edit_mode_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->shapeflag) & 4) != 0);
}

void Object_use_shape_key_edit_mode_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (value) { data->shapeflag |= 4; }
    else { data->shapeflag &= ~4; }
}

PointerRNA Object_active_shape_key_get(PointerRNA *ptr)
{
    return rna_Object_active_shape_key_get(ptr);
}

int Object_active_shape_key_index_get(PointerRNA *ptr)
{
    return rna_Object_active_shape_key_index_get(ptr);
}

void Object_active_shape_key_index_set(PointerRNA *ptr, int value)
{
    rna_Object_active_shape_key_index_set(ptr, value);
}

bool Object_use_dynamic_topology_sculpting_get(PointerRNA *ptr)
{
    return rna_Object_use_dynamic_topology_sculpting_get(ptr);
}

bool Object_is_from_instancer_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->base_flag) & 8) != 0);
}

bool Object_is_from_set_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return (((data->base_flag) & 32) != 0);
}

PointerRNA Object_display_get(PointerRNA *ptr)
{
    return rna_Object_display_get(ptr);
}

PointerRNA Object_lineart_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ObjectLineArt, &data->lineart);
}

bool Object_use_mesh_mirror_x_get(PointerRNA *ptr)
{
    return rna_Object_mesh_symmetry_x_get(ptr);
}

void Object_use_mesh_mirror_x_set(PointerRNA *ptr, bool value)
{
    rna_Object_mesh_symmetry_x_set(ptr, value);
}

bool Object_use_mesh_mirror_y_get(PointerRNA *ptr)
{
    return rna_Object_mesh_symmetry_y_get(ptr);
}

void Object_use_mesh_mirror_y_set(PointerRNA *ptr, bool value)
{
    rna_Object_mesh_symmetry_y_set(ptr, value);
}

bool Object_use_mesh_mirror_z_get(PointerRNA *ptr)
{
    return rna_Object_mesh_symmetry_z_get(ptr);
}

void Object_use_mesh_mirror_z_set(PointerRNA *ptr, bool value)
{
    rna_Object_mesh_symmetry_z_set(ptr, value);
}

void Object_lightgroup_get(PointerRNA *ptr, char *value)
{
    rna_Object_lightgroup_get(ptr, value);
}

int Object_lightgroup_length(PointerRNA *ptr)
{
    return rna_Object_lightgroup_length(ptr);
}

void Object_lightgroup_set(PointerRNA *ptr, const char *value)
{
    rna_Object_lightgroup_set(ptr, value);
}

PointerRNA Object_animation_data_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

PointerRNA Object_animation_visualization_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimViz, &data->avs);
}

PointerRNA Object_motion_path_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MotionPath, data->mpath);
}

static PointerRNA ObjectModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ObjectModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectModifiers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectModifiers_rna_properties_get(iter);
    }
}

void ObjectModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectModifiers_rna_properties_get(iter);
    }
}

void ObjectModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ObjectModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ObjectModifiers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA ObjectModifiers_active_get(PointerRNA *ptr)
{
    return rna_Object_active_modifier_get(ptr);
}

void ObjectModifiers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_modifier_set(ptr, value, reports);
}

static PointerRNA ObjectGpencilModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ObjectGpencilModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectGpencilModifiers_rna_properties_get(iter);
    }
}

void ObjectGpencilModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectGpencilModifiers_rna_properties_get(iter);
    }
}

void ObjectGpencilModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ObjectGpencilModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ObjectGpencilModifiers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ObjectShaderFx_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ObjectShaderFx_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectShaderFx_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectShaderFx_rna_properties_get(iter);
    }
}

void ObjectShaderFx_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectShaderFx_rna_properties_get(iter);
    }
}

void ObjectShaderFx_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ObjectShaderFx_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ObjectShaderFx_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ObjectConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ObjectConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectConstraints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectConstraints_rna_properties_get(iter);
    }
}

void ObjectConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectConstraints_rna_properties_get(iter);
    }
}

void ObjectConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ObjectConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ObjectConstraints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA ObjectConstraints_active_get(PointerRNA *ptr)
{
    return rna_Object_active_constraint_get(ptr);
}

void ObjectConstraints_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_constraint_set(ptr, value, reports);
}

static PointerRNA VertexGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertexGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexGroups_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroups_rna_properties_get(iter);
    }
}

void VertexGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexGroups_rna_properties_get(iter);
    }
}

void VertexGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertexGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexGroups_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA VertexGroups_active_get(PointerRNA *ptr)
{
    return rna_Object_active_vertex_group_get(ptr);
}

void VertexGroups_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Object_active_vertex_group_set(ptr, value, reports);
}

int VertexGroups_active_index_get(PointerRNA *ptr)
{
    return rna_Object_active_vertex_group_index_get(ptr);
}

void VertexGroups_active_index_set(PointerRNA *ptr, int value)
{
    rna_Object_active_vertex_group_index_set(ptr, value);
}

static PointerRNA FaceMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FaceMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FaceMaps_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FaceMaps_rna_properties_get(iter);
    }
}

void FaceMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FaceMaps_rna_properties_get(iter);
    }
}

void FaceMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FaceMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FaceMaps_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA FaceMaps_active_get(PointerRNA *ptr)
{
    return rna_Object_active_face_map_get(ptr);
}

int FaceMaps_active_index_get(PointerRNA *ptr)
{
    return rna_Object_active_face_map_index_get(ptr);
}

void FaceMaps_active_index_set(PointerRNA *ptr, int value)
{
    rna_Object_active_face_map_index_set(ptr, value);
}

static PointerRNA ParticleSystems_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleSystems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleSystems_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSystems_rna_properties_get(iter);
    }
}

void ParticleSystems_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystems_rna_properties_get(iter);
    }
}

void ParticleSystems_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleSystems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleSystems_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA ParticleSystems_active_get(PointerRNA *ptr)
{
    return rna_Object_active_particle_system_get(ptr);
}

int ParticleSystems_active_index_get(PointerRNA *ptr)
{
    return rna_Object_active_particle_system_index_get(ptr);
}

void ParticleSystems_active_index_set(PointerRNA *ptr, int value)
{
    rna_Object_active_particle_system_index_set(ptr, value);
}

static PointerRNA VertexGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertexGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroup_rna_properties_get(iter);
    }
}

void VertexGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexGroup_rna_properties_get(iter);
    }
}

void VertexGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertexGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void VertexGroup_name_get(PointerRNA *ptr, char *value)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int VertexGroup_name_length(PointerRNA *ptr)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    return strlen(data->name);
}

void VertexGroup_name_set(PointerRNA *ptr, const char *value)
{
    rna_VertexGroup_name_set(ptr, value);
}

bool VertexGroup_lock_weight_get(PointerRNA *ptr)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    return (bool)(data->flag);
}

void VertexGroup_lock_weight_set(PointerRNA *ptr, bool value)
{
    bDeformGroup *data = (bDeformGroup *)(ptr->data);
    data->flag = value;
}

int VertexGroup_index_get(PointerRNA *ptr)
{
    return rna_VertexGroup_index_get(ptr);
}

static PointerRNA FaceMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FaceMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FaceMap_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FaceMap_rna_properties_get(iter);
    }
}

void FaceMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FaceMap_rna_properties_get(iter);
    }
}

void FaceMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FaceMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FaceMap_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void FaceMap_name_get(PointerRNA *ptr, char *value)
{
    bFaceMap *data = (bFaceMap *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int FaceMap_name_length(PointerRNA *ptr)
{
    bFaceMap *data = (bFaceMap *)(ptr->data);
    return strlen(data->name);
}

void FaceMap_name_set(PointerRNA *ptr, const char *value)
{
    rna_FaceMap_name_set(ptr, value);
}

bool FaceMap_select_get(PointerRNA *ptr)
{
    bFaceMap *data = (bFaceMap *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void FaceMap_select_set(PointerRNA *ptr, bool value)
{
    bFaceMap *data = (bFaceMap *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

int FaceMap_index_get(PointerRNA *ptr)
{
    return rna_FaceMap_index_get(ptr);
}

static PointerRNA MaterialSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaterialSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaterialSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialSlot_rna_properties_get(iter);
    }
}

void MaterialSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaterialSlot_rna_properties_get(iter);
    }
}

void MaterialSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaterialSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MaterialSlot_link_get(PointerRNA *ptr)
{
    return rna_MaterialSlot_link_get(ptr);
}

void MaterialSlot_link_set(PointerRNA *ptr, int value)
{
    rna_MaterialSlot_link_set(ptr, value);
}

PointerRNA MaterialSlot_material_get(PointerRNA *ptr)
{
    return rna_MaterialSlot_material_get(ptr);
}

void MaterialSlot_material_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_MaterialSlot_material_set(ptr, value, reports);
}

int MaterialSlot_slot_index_get(PointerRNA *ptr)
{
    return rna_MaterialSlot_index_get(ptr);
}

void MaterialSlot_name_get(PointerRNA *ptr, char *value)
{
    rna_MaterialSlot_name_get(ptr, value);
}

int MaterialSlot_name_length(PointerRNA *ptr)
{
    return rna_MaterialSlot_name_length(ptr);
}

static PointerRNA ObjectDisplay_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ObjectDisplay_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectDisplay_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectDisplay_rna_properties_get(iter);
    }
}

void ObjectDisplay_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectDisplay_rna_properties_get(iter);
    }
}

void ObjectDisplay_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ObjectDisplay_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ObjectDisplay_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool ObjectDisplay_show_shadows_get(PointerRNA *ptr)
{
    Object *data = (Object *)(ptr->data);
    return !(((data->dtx) & 512) != 0);
}

void ObjectDisplay_show_shadows_set(PointerRNA *ptr, bool value)
{
    Object *data = (Object *)(ptr->data);
    if (!value) { data->dtx |= 512; }
    else { data->dtx &= ~512; }
}

static PointerRNA ObjectLineArt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ObjectLineArt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ObjectLineArt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectLineArt_rna_properties_get(iter);
    }
}

void ObjectLineArt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ObjectLineArt_rna_properties_get(iter);
    }
}

void ObjectLineArt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ObjectLineArt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ObjectLineArt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int ObjectLineArt_usage_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (int)(data->usage);
}

void ObjectLineArt_usage_set(PointerRNA *ptr, int value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    data->usage = value;
}

bool ObjectLineArt_use_crease_override_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

void ObjectLineArt_use_crease_override_set(PointerRNA *ptr, bool value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

float ObjectLineArt_crease_threshold_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (float)(data->crease_threshold);
}

void ObjectLineArt_crease_threshold_set(PointerRNA *ptr, float value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    data->crease_threshold = CLAMPIS(value, 0.0f, 3.1415927410f);
}

bool ObjectLineArt_use_intersection_priority_override_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void ObjectLineArt_use_intersection_priority_override_set(PointerRNA *ptr, bool value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

int ObjectLineArt_intersection_priority_get(PointerRNA *ptr)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    return (int)(data->intersection_priority);
}

void ObjectLineArt_intersection_priority_set(PointerRNA *ptr, int value)
{
    ObjectLineArt *data = (ObjectLineArt *)(ptr->data);
    data->intersection_priority = CLAMPIS(value, 0, 255);
}

bool Object_select_get_func(struct Object *_self, bContext *C, struct ViewLayer *view_layer)
{
	return rna_Object_select_get(_self, C, view_layer);
}

void Object_select_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct ViewLayer *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_select_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

void Object_select_set_func(struct Object *_self, bContext *C, ReportList *reports, bool state, struct ViewLayer *view_layer)
{
	rna_Object_select_set(_self, C, reports, state, view_layer);
}

void Object_select_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool state;
	struct ViewLayer *view_layer;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	state = *((bool *)_data);
	_data += 8;
	view_layer = *((struct ViewLayer **)_data);
	
	rna_Object_select_set(_self, C, reports, state, view_layer);
}

bool Object_hide_get_func(struct Object *_self, bContext *C, struct ViewLayer *view_layer)
{
	return rna_Object_hide_get(_self, C, view_layer);
}

void Object_hide_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct ViewLayer *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_hide_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

void Object_hide_set_func(struct Object *_self, bContext *C, ReportList *reports, bool state, struct ViewLayer *view_layer)
{
	rna_Object_hide_set(_self, C, reports, state, view_layer);
}

void Object_hide_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool state;
	struct ViewLayer *view_layer;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	state = *((bool *)_data);
	_data += 8;
	view_layer = *((struct ViewLayer **)_data);
	
	rna_Object_hide_set(_self, C, reports, state, view_layer);
}

bool Object_visible_get_func(struct Object *_self, bContext *C, struct ViewLayer *view_layer, struct View3D *viewport)
{
	return rna_Object_visible_get(_self, C, view_layer, viewport);
}

void Object_visible_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct ViewLayer *view_layer;
	struct View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	viewport = *((struct View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_visible_get(_self, C, view_layer, viewport);
	*((bool *)_retdata) = result;
}

bool Object_holdout_get_func(struct Object *_self, bContext *C, struct ViewLayer *view_layer)
{
	return rna_Object_holdout_get(_self, C, view_layer);
}

void Object_holdout_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct ViewLayer *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_holdout_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

bool Object_indirect_only_get_func(struct Object *_self, bContext *C, struct ViewLayer *view_layer)
{
	return rna_Object_indirect_only_get(_self, C, view_layer);
}

void Object_indirect_only_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct ViewLayer *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_indirect_only_get(_self, C, view_layer);
	*((bool *)_retdata) = result;
}

bool Object_local_view_get_func(struct Object *_self, ReportList *reports, struct View3D *viewport)
{
	return rna_Object_local_view_get(_self, reports, viewport);
}

void Object_local_view_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = *((struct View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_local_view_get(_self, reports, viewport);
	*((bool *)_retdata) = result;
}

void Object_local_view_set_func(struct Object *_self, ReportList *reports, struct PointerRNA *viewport, bool state)
{
	rna_Object_local_view_set(_self, reports, viewport, state);
}

void Object_local_view_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *viewport;
	bool state;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = ((struct PointerRNA *)_data);
	_data += 24;
	state = *((bool *)_data);
	
	rna_Object_local_view_set(_self, reports, viewport, state);
}

bool Object_visible_in_viewport_get_func(struct Object *_self, struct View3D *viewport)
{
	return rna_Object_visible_in_viewport_get(_self, viewport);
}

void Object_visible_in_viewport_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct View3D *viewport;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	viewport = *((struct View3D **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_visible_in_viewport_get(_self, viewport);
	*((bool *)_retdata) = result;
}

void Object_convert_space_func(struct Object *_self, ReportList *reports, struct bPoseChannel *pose_bone, float matrix[16], float matrix_return[16], int from_space, int to_space)
{
	rna_Object_mat_convert_space(_self, reports, pose_bone, matrix, matrix_return, from_space, to_space);
}

void Object_convert_space_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct bPoseChannel *pose_bone;
	float *matrix;
	float *matrix_return;
	int from_space;
	int to_space;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	pose_bone = *((struct bPoseChannel **)_data);
	_data += 8;
	matrix = ((float *)_data);
	_data += 64;
	matrix_return = ((float *)_data);
	_data += 64;
	from_space = *((int *)_data);
	_data += 8;
	to_space = *((int *)_data);
	
	rna_Object_mat_convert_space(_self, reports, pose_bone, matrix, matrix_return, from_space, to_space);
}

void Object_calc_matrix_camera_func(struct Object *_self, struct Depsgraph *depsgraph, float result[16], int x, int y, float scale_x, float scale_y)
{
	rna_Object_calc_matrix_camera(_self, depsgraph, result, x, y, scale_x, scale_y);
}

void Object_calc_matrix_camera_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	float *result;
	int x;
	int y;
	float scale_x;
	float scale_y;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	result = ((float *)_data);
	_data += 64;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	scale_x = *((float *)_data);
	_data += 8;
	scale_y = *((float *)_data);
	
	rna_Object_calc_matrix_camera(_self, depsgraph, result, x, y, scale_x, scale_y);
}

void Object_camera_fit_coords_func(struct Object *_self, struct Depsgraph *depsgraph, int coordinates_len, float *coordinates, float coord_return[3], float *scale_return)
{
	rna_Object_camera_fit_coords(_self, depsgraph, coordinates_len, coordinates, coord_return, scale_return);
}

void Object_camera_fit_coords_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	int coordinates_len;
	float *coordinates;
	float *co_return;
	float *scale_return;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	coordinates_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	coordinates = *((float **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	co_return = ((float *)_data);
	_data += 16;
	scale_return = ((float *)_data);
	
	rna_Object_camera_fit_coords(_self, depsgraph, coordinates_len, coordinates, co_return, scale_return);
}

void Object_crazyspace_eval_func(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, struct Scene *scene)
{
	rna_Object_crazyspace_eval(_self, reports, depsgraph, scene);
}

void Object_crazyspace_eval_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	struct Scene *scene;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	scene = *((struct Scene **)_data);
	
	rna_Object_crazyspace_eval(_self, reports, depsgraph, scene);
}

void Object_crazyspace_displacement_to_deformed_func(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_deformed[3])
{
	rna_Object_crazyspace_displacement_to_deformed(_self, reports, vertex_index, displacement, displacement_deformed);
}

void Object_crazyspace_displacement_to_deformed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int vertex_index;
	float *displacement;
	float *displacement_deformed;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_index = *((int *)_data);
	_data += 8;
	displacement = ((float *)_data);
	_data += 16;
	displacement_deformed = ((float *)_data);
	
	rna_Object_crazyspace_displacement_to_deformed(_self, reports, vertex_index, displacement, displacement_deformed);
}

void Object_crazyspace_displacement_to_original_func(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_original[3])
{
	rna_Object_crazyspace_displacement_to_original(_self, reports, vertex_index, displacement, displacement_original);
}

void Object_crazyspace_displacement_to_original_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int vertex_index;
	float *displacement;
	float *displacement_original;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_index = *((int *)_data);
	_data += 8;
	displacement = ((float *)_data);
	_data += 16;
	displacement_original = ((float *)_data);
	
	rna_Object_crazyspace_displacement_to_original(_self, reports, vertex_index, displacement, displacement_original);
}

void Object_crazyspace_eval_clear_func(struct Object *_self)
{
	rna_Object_crazyspace_eval_clear(_self);
}

void Object_crazyspace_eval_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_crazyspace_eval_clear(_self);
}

struct Mesh *Object_to_mesh_func(struct Object *_self, ReportList *reports, bool preserve_all_data_layers, struct Depsgraph *depsgraph)
{
	return rna_Object_to_mesh(_self, reports, preserve_all_data_layers, depsgraph);
}

void Object_to_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool preserve_all_data_layers;
	struct Depsgraph *depsgraph;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	preserve_all_data_layers = *((bool *)_data);
	_data += 8;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Object_to_mesh(_self, reports, preserve_all_data_layers, depsgraph);
	*((struct Mesh **)_retdata) = mesh;
}

void Object_to_mesh_clear_func(struct Object *_self)
{
	rna_Object_to_mesh_clear(_self);
}

void Object_to_mesh_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_to_mesh_clear(_self);
}

struct Curve *Object_to_curve_func(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, bool apply_modifiers)
{
	return rna_Object_to_curve(_self, reports, depsgraph, apply_modifiers);
}

void Object_to_curve_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Depsgraph *depsgraph;
	bool apply_modifiers;
	struct Curve *curve;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	apply_modifiers = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	curve = rna_Object_to_curve(_self, reports, depsgraph, apply_modifiers);
	*((struct Curve **)_retdata) = curve;
}

void Object_to_curve_clear_func(struct Object *_self)
{
	rna_Object_to_curve_clear(_self);
}

void Object_to_curve_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_to_curve_clear(_self);
}

struct Object *Object_find_armature_func(struct Object *_self)
{
	return BKE_modifiers_is_deformed_by_armature(_self);
}

void Object_find_armature_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Object *ob_arm;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ob_arm = BKE_modifiers_is_deformed_by_armature(_self);
	*((struct Object **)_retdata) = ob_arm;
}

struct PointerRNA Object_shape_key_add_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, bool from_mix)
{
	return rna_Object_shape_key_add(_self, C, reports, name, from_mix);
}

void Object_shape_key_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	bool from_mix;
	struct PointerRNA key;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	from_mix = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	key = rna_Object_shape_key_add(_self, C, reports, name, from_mix);
	*((struct PointerRNA *)_retdata) = key;
}

void Object_shape_key_remove_func(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *key)
{
	rna_Object_shape_key_remove(_self, bmain, reports, key);
}

void Object_shape_key_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *key;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	key = *((struct PointerRNA **)_data);
	
	rna_Object_shape_key_remove(_self, CTX_data_main(C), reports, key);
}

void Object_shape_key_clear_func(struct Object *_self, Main *bmain)
{
	rna_Object_shape_key_clear(_self, bmain);
}

void Object_shape_key_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_shape_key_clear(_self, CTX_data_main(C));
}

void Object_ray_cast_func(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float direction[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index)
{
	rna_Object_ray_cast(_self, C, reports, origin, direction, distance, depsgraph, result, location, normal, index);
}

void Object_ray_cast_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	float *origin;
	float *direction;
	float distance;
	struct PointerRNA *depsgraph;
	bool *result;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	origin = ((float *)_data);
	_data += 16;
	direction = ((float *)_data);
	_data += 16;
	distance = *((float *)_data);
	_data += 8;
	depsgraph = ((struct PointerRNA *)_data);
	_data += 24;
	result = ((bool *)_data);
	_data += 8;
	location = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	index = ((int *)_data);
	
	rna_Object_ray_cast(_self, C, reports, origin, direction, distance, depsgraph, result, location, normal, index);
}

void Object_closest_point_on_mesh_func(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index)
{
	rna_Object_closest_point_on_mesh(_self, C, reports, origin, distance, depsgraph, result, location, normal, index);
}

void Object_closest_point_on_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	float *origin;
	float distance;
	struct PointerRNA *depsgraph;
	bool *result;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	origin = ((float *)_data);
	_data += 16;
	distance = *((float *)_data);
	_data += 8;
	depsgraph = ((struct PointerRNA *)_data);
	_data += 24;
	result = ((bool *)_data);
	_data += 8;
	location = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	index = ((int *)_data);
	
	rna_Object_closest_point_on_mesh(_self, C, reports, origin, distance, depsgraph, result, location, normal, index);
}

bool Object_is_modified_func(struct Object *_self, struct Scene *scene, int settings)
{
	return rna_Object_is_modified(_self, scene, settings);
}

void Object_is_modified_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	int settings;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	settings = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_is_modified(_self, scene, settings);
	*((bool *)_retdata) = result;
}

bool Object_is_deform_modified_func(struct Object *_self, struct Scene *scene, int settings)
{
	return rna_Object_is_deform_modified(_self, scene, settings);
}

void Object_is_deform_modified_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	int settings;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	settings = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_is_deform_modified(_self, scene, settings);
	*((bool *)_retdata) = result;
}

bool Object_update_from_editmode_func(struct Object *_self, Main *bmain)
{
	return rna_Object_update_from_editmode(_self, bmain);
}

void Object_update_from_editmode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_Object_update_from_editmode(_self, CTX_data_main(C));
	*((bool *)_retdata) = result;
}

void Object_cache_release_func(struct Object *_self)
{
	BKE_object_free_caches(_self);
}

void Object_cache_release_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	BKE_object_free_caches(_self);
}

bool Object_generate_gpencil_strokes_func(struct Object *_self, bContext *C, ReportList *reports, struct Object *grease_pencil_object, bool use_collections, float scale_thickness, float sample)
{
	return rna_Object_generate_gpencil_strokes(_self, C, reports, grease_pencil_object, use_collections, scale_thickness, sample);
}

void Object_generate_gpencil_strokes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Object *grease_pencil_object;
	bool use_collections;
	float scale_thickness;
	float sample;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	grease_pencil_object = *((struct Object **)_data);
	_data += 8;
	use_collections = *((bool *)_data);
	_data += 8;
	scale_thickness = *((float *)_data);
	_data += 8;
	sample = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Object_generate_gpencil_strokes(_self, C, reports, grease_pencil_object, use_collections, scale_thickness, sample);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

bool rna_Object_select_get(struct Object *_self, bContext *C, struct ViewLayer *view_layer);
void rna_Object_select_set(struct Object *_self, bContext *C, ReportList *reports, bool state, struct ViewLayer *view_layer);
bool rna_Object_hide_get(struct Object *_self, bContext *C, struct ViewLayer *view_layer);
void rna_Object_hide_set(struct Object *_self, bContext *C, ReportList *reports, bool state, struct ViewLayer *view_layer);
bool rna_Object_visible_get(struct Object *_self, bContext *C, struct ViewLayer *view_layer, struct View3D *viewport);
bool rna_Object_holdout_get(struct Object *_self, bContext *C, struct ViewLayer *view_layer);
bool rna_Object_indirect_only_get(struct Object *_self, bContext *C, struct ViewLayer *view_layer);
bool rna_Object_local_view_get(struct Object *_self, ReportList *reports, struct View3D *viewport);
void rna_Object_local_view_set(struct Object *_self, ReportList *reports, struct PointerRNA *viewport, bool state);
bool rna_Object_visible_in_viewport_get(struct Object *_self, struct View3D *viewport);
void rna_Object_mat_convert_space(struct Object *_self, ReportList *reports, struct bPoseChannel *pose_bone, float matrix[16], float matrix_return[16], int from_space, int to_space);
void rna_Object_calc_matrix_camera(struct Object *_self, struct Depsgraph *depsgraph, float result[16], int x, int y, float scale_x, float scale_y);
void rna_Object_camera_fit_coords(struct Object *_self, struct Depsgraph *depsgraph, int coordinates_len, float *coordinates, float coord_return[3], float *scale_return);
void rna_Object_crazyspace_eval(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, struct Scene *scene);
void rna_Object_crazyspace_displacement_to_deformed(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_deformed[3]);
void rna_Object_crazyspace_displacement_to_original(struct Object *_self, ReportList *reports, int vertex_index, float displacement[3], float displacement_original[3]);
void rna_Object_crazyspace_eval_clear(struct Object *_self);
struct Mesh *rna_Object_to_mesh(struct Object *_self, ReportList *reports, bool preserve_all_data_layers, struct Depsgraph *depsgraph);
void rna_Object_to_mesh_clear(struct Object *_self);
struct Curve *rna_Object_to_curve(struct Object *_self, ReportList *reports, struct Depsgraph *depsgraph, bool apply_modifiers);
void rna_Object_to_curve_clear(struct Object *_self);
struct Object *BKE_modifiers_is_deformed_by_armature(struct Object *_self);
struct PointerRNA rna_Object_shape_key_add(struct Object *_self, bContext *C, ReportList *reports, const char * name, bool from_mix);
void rna_Object_shape_key_remove(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *key);
void rna_Object_shape_key_clear(struct Object *_self, Main *bmain);
void rna_Object_ray_cast(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float direction[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index);
void rna_Object_closest_point_on_mesh(struct Object *_self, bContext *C, ReportList *reports, float origin[3], float distance, struct PointerRNA *depsgraph, bool *result, float location[3], float normal[3], int *index);
bool rna_Object_is_modified(struct Object *_self, struct Scene *scene, int settings);
bool rna_Object_is_deform_modified(struct Object *_self, struct Scene *scene, int settings);
bool rna_Object_update_from_editmode(struct Object *_self, Main *bmain);
void BKE_object_free_caches(struct Object *_self);
bool rna_Object_generate_gpencil_strokes(struct Object *_self, bContext *C, ReportList *reports, struct Object *grease_pencil_object, bool use_collections, float scale_thickness, float sample);

struct ModifierData *ObjectModifiers_new_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_modifier_new(_self, C, reports, name, type);
}

void ObjectModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	int type;
	struct ModifierData *modifier;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	modifier = rna_Object_modifier_new(_self, C, reports, name, type);
	*((struct ModifierData **)_retdata) = modifier;
}

void ObjectModifiers_remove_func(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *modifier)
{
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

void ObjectModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

void ObjectModifiers_clear_func(struct Object *_self, bContext *C)
{
	rna_Object_modifier_clear(_self, C);
}

void ObjectModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_modifier_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct ModifierData *rna_Object_modifier_new(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_modifier_remove(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *modifier);
void rna_Object_modifier_clear(struct Object *_self, bContext *C);

struct GpencilModifierData *ObjectGpencilModifiers_new_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_greasepencil_modifier_new(_self, C, reports, name, type);
}

void ObjectGpencilModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	int type;
	struct GpencilModifierData *greasepencil_modifier;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	greasepencil_modifier = rna_Object_greasepencil_modifier_new(_self, C, reports, name, type);
	*((struct GpencilModifierData **)_retdata) = greasepencil_modifier;
}

void ObjectGpencilModifiers_remove_func(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *greasepencil_modifier)
{
	rna_Object_greasepencil_modifier_remove(_self, C, reports, greasepencil_modifier);
}

void ObjectGpencilModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *greasepencil_modifier;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	greasepencil_modifier = *((struct PointerRNA **)_data);
	
	rna_Object_greasepencil_modifier_remove(_self, C, reports, greasepencil_modifier);
}

void ObjectGpencilModifiers_clear_func(struct Object *_self, bContext *C)
{
	rna_Object_greasepencil_modifier_clear(_self, C);
}

void ObjectGpencilModifiers_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_greasepencil_modifier_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct GpencilModifierData *rna_Object_greasepencil_modifier_new(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_greasepencil_modifier_remove(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *greasepencil_modifier);
void rna_Object_greasepencil_modifier_clear(struct Object *_self, bContext *C);

struct ShaderFxData *ObjectShaderFx_new_func(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type)
{
	return rna_Object_shaderfx_new(_self, C, reports, name, type);
}

void ObjectShaderFx_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	int type;
	struct ShaderFxData *shader_fx;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	shader_fx = rna_Object_shaderfx_new(_self, C, reports, name, type);
	*((struct ShaderFxData **)_retdata) = shader_fx;
}

void ObjectShaderFx_remove_func(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *shader_fx)
{
	rna_Object_shaderfx_remove(_self, C, reports, shader_fx);
}

void ObjectShaderFx_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *shader_fx;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	shader_fx = *((struct PointerRNA **)_data);
	
	rna_Object_shaderfx_remove(_self, C, reports, shader_fx);
}

void ObjectShaderFx_clear_func(struct Object *_self, bContext *C)
{
	rna_Object_shaderfx_clear(_self, C);
}

void ObjectShaderFx_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_shaderfx_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct ShaderFxData *rna_Object_shaderfx_new(struct Object *_self, bContext *C, ReportList *reports, const char * name, int type);
void rna_Object_shaderfx_remove(struct Object *_self, bContext *C, ReportList *reports, struct PointerRNA *shader_fx);
void rna_Object_shaderfx_clear(struct Object *_self, bContext *C);

struct bConstraint *ObjectConstraints_new_func(struct Object *_self, Main *bmain, int type)
{
	return rna_Object_constraints_new(_self, bmain, type);
}

void ObjectConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int type;
	struct bConstraint *constraint;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	constraint = rna_Object_constraints_new(_self, CTX_data_main(C), type);
	*((struct bConstraint **)_retdata) = constraint;
}

void ObjectConstraints_remove_func(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint)
{
	rna_Object_constraints_remove(_self, bmain, reports, constraint);
}

void ObjectConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *constraint;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	
	rna_Object_constraints_remove(_self, CTX_data_main(C), reports, constraint);
}

void ObjectConstraints_clear_func(struct Object *_self, Main *bmain)
{
	rna_Object_constraints_clear(_self, bmain);
}

void ObjectConstraints_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_constraints_clear(_self, CTX_data_main(C));
}

void ObjectConstraints_move_func(struct Object *_self, Main *bmain, ReportList *reports, int from_index, int to_index)
{
	rna_Object_constraints_move(_self, bmain, reports, from_index, to_index);
}

void ObjectConstraints_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_Object_constraints_move(_self, CTX_data_main(C), reports, from_index, to_index);
}

struct bConstraint *ObjectConstraints_copy_func(struct Object *_self, Main *bmain, struct PointerRNA *constraint)
{
	return rna_Object_constraints_copy(_self, bmain, constraint);
}

void ObjectConstraints_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *constraint;
	struct bConstraint *new_constraint;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	_data += 8;
	_retdata = _data;
	
	new_constraint = rna_Object_constraints_copy(_self, CTX_data_main(C), constraint);
	*((struct bConstraint **)_retdata) = new_constraint;
}

/* Repeated prototypes to detect errors */

struct bConstraint *rna_Object_constraints_new(struct Object *_self, Main *bmain, int type);
void rna_Object_constraints_remove(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint);
void rna_Object_constraints_clear(struct Object *_self, Main *bmain);
void rna_Object_constraints_move(struct Object *_self, Main *bmain, ReportList *reports, int from_index, int to_index);
struct bConstraint *rna_Object_constraints_copy(struct Object *_self, Main *bmain, struct PointerRNA *constraint);

struct bDeformGroup *VertexGroups_new_func(struct Object *_self, Main *bmain, ReportList *reports, const char * name)
{
	return rna_Object_vgroup_new(_self, bmain, reports, name);
}

void VertexGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	struct bDeformGroup *group;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	group = rna_Object_vgroup_new(_self, CTX_data_main(C), reports, name);
	*((struct bDeformGroup **)_retdata) = group;
}

void VertexGroups_remove_func(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *group)
{
	rna_Object_vgroup_remove(_self, bmain, reports, group);
}

void VertexGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *group;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((struct PointerRNA **)_data);
	
	rna_Object_vgroup_remove(_self, CTX_data_main(C), reports, group);
}

void VertexGroups_clear_func(struct Object *_self, Main *bmain, ReportList *reports)
{
	rna_Object_vgroup_clear(_self, bmain, reports);
}

void VertexGroups_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_vgroup_clear(_self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

struct bDeformGroup *rna_Object_vgroup_new(struct Object *_self, Main *bmain, ReportList *reports, const char * name);
void rna_Object_vgroup_remove(struct Object *_self, Main *bmain, ReportList *reports, struct PointerRNA *group);
void rna_Object_vgroup_clear(struct Object *_self, Main *bmain, ReportList *reports);

struct bFaceMap *FaceMaps_new_func(struct Object *_self, const char * name)
{
	return rna_Object_fmap_new(_self, name);
}

void FaceMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char * name;
	struct bFaceMap *fmap;
	char *_data, *_retdata;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fmap = rna_Object_fmap_new(_self, name);
	*((struct bFaceMap **)_retdata) = fmap;
}

void FaceMaps_remove_func(struct Object *_self, ReportList *reports, struct PointerRNA *group)
{
	rna_Object_fmap_remove(_self, reports, group);
}

void FaceMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct PointerRNA *group;
	char *_data;
	
	_self = (struct Object *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((struct PointerRNA **)_data);
	
	rna_Object_fmap_remove(_self, reports, group);
}

void FaceMaps_clear_func(struct Object *_self)
{
	rna_Object_fmap_clear(_self);
}

void FaceMaps_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self = (struct Object *)_ptr->data;
	
	rna_Object_fmap_clear(_self);
}

/* Repeated prototypes to detect errors */

struct bFaceMap *rna_Object_fmap_new(struct Object *_self, const char * name);
void rna_Object_fmap_remove(struct Object *_self, ReportList *reports, struct PointerRNA *group);
void rna_Object_fmap_clear(struct Object *_self);


void VertexGroup_add_func(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_len, int *index, float weight, int type)
{
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index_len, index, weight, type);
}

void VertexGroup_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index_len;
	int *index;
	float weight;
	int type;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	weight = *((float *)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index_len, index, weight, type);
}

void VertexGroup_remove_func(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_len, int *index)
{
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index_len, index);
}

void VertexGroup_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index_len;
	int *index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index_len, index);
}

float VertexGroup_weight_func(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index)
{
	return rna_VertexGroup_weight(_selfid, _self, reports, index);
}

void VertexGroup_weight_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index;
	float weight;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bDeformGroup *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	weight = rna_VertexGroup_weight(_selfid, _self, reports, index);
	*((float *)_retdata) = weight;
}

/* Repeated prototypes to detect errors */

void rna_VertexGroup_vertex_add(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_len, int *index, float weight, int type);
void rna_VertexGroup_vertex_remove(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_len, int *index);
float rna_VertexGroup_weight(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index);

void FaceMap_add_func(struct ID *_selfid, struct bFaceMap *_self, ReportList *reports, int index_len, int *index)
{
	rna_FaceMap_face_add(_selfid, _self, reports, index_len, index);
}

void FaceMap_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bFaceMap *_self;
	int index_len;
	int *index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bFaceMap *)_ptr->data;
	_data = (char *)_parms->data;
	index_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_FaceMap_face_add(_selfid, _self, reports, index_len, index);
}

void FaceMap_remove_func(struct ID *_selfid, struct bFaceMap *_self, ReportList *reports, int index_len, int *index)
{
	rna_FaceMap_face_remove(_selfid, _self, reports, index_len, index);
}

void FaceMap_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bFaceMap *_self;
	int index_len;
	int *index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bFaceMap *)_ptr->data;
	_data = (char *)_parms->data;
	index_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	index = *((int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_FaceMap_face_remove(_selfid, _self, reports, index_len, index);
}

/* Repeated prototypes to detect errors */

void rna_FaceMap_face_add(struct ID *_selfid, struct bFaceMap *_self, ReportList *reports, int index_len, int *index);
void rna_FaceMap_face_remove(struct ID *_selfid, struct bFaceMap *_self, ReportList *reports, int index_len, int *index);




/* Object */
PointerPropertyRNA rna_Object_data = {
	{(PropertyRNA *)&rna_Object_type, NULL,
	-1, "data", 41943233, 1, 0, 0, 0, "Data",
	"Object data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_data_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_data_get, Object_data_set, rna_Object_data_typef, rna_Object_data_poll,&RNA_ID
};

EnumPropertyRNA rna_Object_type = {
	{(PropertyRNA *)&rna_Object_mode, (PropertyRNA *)&rna_Object_data,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"Type of object",
	0, "ID",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, type), 1, NULL},
	Object_type_get, NULL, NULL, NULL, NULL, rna_enum_object_type_items, 21, 0
};

EnumPropertyRNA rna_Object_mode = {
	{(PropertyRNA *)&rna_Object_bound_box, (PropertyRNA *)&rna_Object_type,
	-1, "mode", 2, 1, 0, 4, 0, "Mode",
	"Object interaction mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, mode), 0, NULL},
	Object_mode_get, NULL, NULL, NULL, NULL, rna_enum_object_mode_items, 14, 0
};

static float rna_Object_bound_box_default[24] = {
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

FloatPropertyRNA rna_Object_bound_box = {
	{(PropertyRNA *)&rna_Object_parent, (PropertyRNA *)&rna_Object_mode,
	-1, "bound_box", 2, 2, 0, 0, 0, "Bounding Box",
	"Object\'s bounding box in object-space coordinates, all values are -1.0 when not available",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 2, {8, 3, 0}, 24,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_bound_box_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_bound_box_default
};

PointerPropertyRNA rna_Object_parent = {
	{(PropertyRNA *)&rna_Object_parent_type, (PropertyRNA *)&rna_Object_bound_box,
	-1, "parent", 9437313, 1, 0, 0, 0, "Parent",
	"Parent object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_parent_override_apply,
	0, -1, NULL},
	Object_parent_get, Object_parent_set, NULL, NULL,&RNA_Object
};

static const EnumPropertyItem rna_Object_parent_type_items[7] = {
	{0, "OBJECT", 0, "Object", "The object is parented to an object"},
	{4, "ARMATURE", 0, "Armature", ""},
	{4, "LATTICE", 0, "Lattice", "The object is parented to a lattice"},
	{5, "VERTEX", 0, "Vertex", "The object is parented to a vertex"},
	{6, "VERTEX_3", 0, "3 Vertices", ""},
	{7, "BONE", 0, "Bone", "The object is parented to a bone"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_parent_type = {
	{(PropertyRNA *)&rna_Object_parent_vertices, (PropertyRNA *)&rna_Object_parent,
	-1, "parent_type", 3, 1, 0, 0, 0, "Parent Type",
	"Type of parent relation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_parent_type_get, Object_parent_type_set, rna_Object_parent_type_itemf, NULL, NULL, rna_Object_parent_type_items, 6, 0
};

static int rna_Object_parent_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Object_parent_vertices = {
	{(PropertyRNA *)&rna_Object_parent_bone, (PropertyRNA *)&rna_Object_parent_type,
	-1, "parent_vertices", 3, 1, 0, 4, 0, "Parent Vertices",
	"Indices of vertices in case of a vertex parenting relation",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, par1), 0, NULL},
	NULL, NULL, Object_parent_vertices_get, Object_parent_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_Object_parent_vertices_default
};

StringPropertyRNA rna_Object_parent_bone = {
	{(PropertyRNA *)&rna_Object_use_camera_lock_parent, (PropertyRNA *)&rna_Object_parent_vertices,
	-1, "parent_bone", 262145, 1, 0, 0, 0, "Parent Bone",
	"Name of parent bone in case of a bone parenting relation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_parent_bone_get, Object_parent_bone_length, Object_parent_bone_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_Object_use_camera_lock_parent = {
	{(PropertyRNA *)&rna_Object_track_axis, (PropertyRNA *)&rna_Object_parent_bone,
	-1, "use_camera_lock_parent", 3, 1, 0, 0, 0, "Camera Parent Lock",
	"View Lock 3D viewport camera transformation affects the object\'s parent instead",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_camera_lock_parent_get, Object_use_camera_lock_parent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_Object_track_axis = {
	{(PropertyRNA *)&rna_Object_up_axis, (PropertyRNA *)&rna_Object_use_camera_lock_parent,
	-1, "track_axis", 3, 1, 0, 4, 0, "Track Axis",
	"Axis that points in the \'forward\' direction (applies to Instance Vertices when Align to Vertex Normal is enabled)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, trackflag), 1, NULL},
	Object_track_axis_get, Object_track_axis_set, NULL, NULL, NULL, rna_enum_object_axis_items, 6, 0
};

static const EnumPropertyItem rna_Object_up_axis_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_up_axis = {
	{(PropertyRNA *)&rna_Object_material_slots, (PropertyRNA *)&rna_Object_track_axis,
	-1, "up_axis", 3, 1, 0, 4, 0, "Up Axis",
	"Axis that points in the upward direction (applies to Instance Vertices when Align to Vertex Normal is enabled)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, upflag), 1, NULL},
	Object_up_axis_get, Object_up_axis_set, NULL, NULL, NULL, rna_Object_up_axis_items, 3, 0
};

CollectionPropertyRNA rna_Object_material_slots = {
	{(PropertyRNA *)&rna_Object_active_material, (PropertyRNA *)&rna_Object_up_axis,
	-1, "material_slots", 0, 2049, 0, 0, 0, "Material Slots",
	"Material slots in the object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_material_slots_begin, Object_material_slots_next, Object_material_slots_end, Object_material_slots_get, Object_material_slots_length, NULL, NULL, NULL, &RNA_MaterialSlot
};

PointerPropertyRNA rna_Object_active_material = {
	{(PropertyRNA *)&rna_Object_active_material_index, (PropertyRNA *)&rna_Object_material_slots,
	-1, "active_material", 8388737, 1, 0, 0, 0, "Active Material",
	"Active material being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 102170624, rna_Object_active_material_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_active_material_get, Object_active_material_set, NULL, rna_MaterialSlot_material_poll,&RNA_Material
};

IntPropertyRNA rna_Object_active_material_index = {
	{(PropertyRNA *)&rna_Object_location, (PropertyRNA *)&rna_Object_active_material,
	-1, "active_material_index", 1, 1, 0, 0, 0, "Active Material Index",
	"Index of active material slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialIndex_update, 119537664, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_active_material_index_get, Object_active_material_index_set, NULL, NULL, rna_Object_active_material_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_Object_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_location = {
	{(PropertyRNA *)&rna_Object_rotation_quaternion, (PropertyRNA *)&rna_Object_active_material_index,
	-1, "location", 3, 1, 0, 4, 0, "Location",
	"Location of the object",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, rna_Object_location_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, loc), 5, NULL},
	NULL, NULL, Object_location_get, Object_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Object_location_default
};

static float rna_Object_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_quaternion = {
	{(PropertyRNA *)&rna_Object_rotation_axis_angle, (PropertyRNA *)&rna_Object_location,
	-1, "rotation_quaternion", 3, 1, 0, 4, 0, "Quaternion Rotation",
	"Rotation in Quaternions",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 101842944, NULL, rna_Object_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, quat), 5, NULL},
	NULL, NULL, Object_rotation_quaternion_get, Object_rotation_quaternion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_quaternion_default
};

static float rna_Object_rotation_axis_angle_default[4] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_axis_angle = {
	{(PropertyRNA *)&rna_Object_rotation_euler, (PropertyRNA *)&rna_Object_rotation_quaternion,
	-1, "rotation_axis_angle", 3, 1, 0, 0, 0, "Axis-Angle Rotation",
	"Angle of Rotation for Axis-Angle rotation representation",
	0, "*",
	PROP_FLOAT, PROP_AXISANGLE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 101842944, NULL, rna_Object_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_rotation_axis_angle_get, Object_rotation_axis_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_axis_angle_default
};

static float rna_Object_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_euler = {
	{(PropertyRNA *)&rna_Object_rotation_mode, (PropertyRNA *)&rna_Object_rotation_axis_angle,
	-1, "rotation_euler", 3, 1, 0, 4, 0, "Euler Rotation",
	"Rotation in Eulers",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, rna_Object_rotation_euler_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, rot), 5, NULL},
	NULL, NULL, Object_rotation_euler_get, Object_rotation_euler_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_euler_default
};

EnumPropertyRNA rna_Object_rotation_mode = {
	{(PropertyRNA *)&rna_Object_scale, (PropertyRNA *)&rna_Object_rotation_euler,
	-1, "rotation_mode", 3, 1, 0, 0, 0, "Rotation Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_rotation_mode_get, Object_rotation_mode_set, NULL, NULL, NULL, rna_enum_object_rotation_mode_items, 8, 1
};

static float rna_Object_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_scale = {
	{(PropertyRNA *)&rna_Object_dimensions, (PropertyRNA *)&rna_Object_rotation_mode,
	-1, "scale", 67108867, 1, 0, 4, 0, "Scale",
	"Scaling of the object",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, rna_Object_scale_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, scale), 5, NULL},
	NULL, NULL, Object_scale_get, Object_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_scale_default
};

static float rna_Object_dimensions_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_dimensions = {
	{(PropertyRNA *)&rna_Object_delta_location, (PropertyRNA *)&rna_Object_scale,
	-1, "dimensions", 1, 2, 0, 0, 0, "Dimensions",
	"Absolute bounding box dimensions of the object.\nWarning: Assigning to it or its members multiple consecutive times will not work correctly, as this needs up-to-date evaluated data",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_dimensions_get, Object_dimensions_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Object_dimensions_default
};

static float rna_Object_delta_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_location = {
	{(PropertyRNA *)&rna_Object_delta_rotation_euler, (PropertyRNA *)&rna_Object_dimensions,
	-1, "delta_location", 3, 1, 0, 4, 0, "Delta Location",
	"Extra translation added to the location of the object",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dloc), 5, NULL},
	NULL, NULL, Object_delta_location_get, Object_delta_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Object_delta_location_default
};

static float rna_Object_delta_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_rotation_euler = {
	{(PropertyRNA *)&rna_Object_delta_rotation_quaternion, (PropertyRNA *)&rna_Object_delta_location,
	-1, "delta_rotation_euler", 3, 1, 0, 4, 0, "Delta Rotation (Euler)",
	"Extra rotation added to the rotation of the object (when using Euler rotations)",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, drot), 5, NULL},
	NULL, NULL, Object_delta_rotation_euler_get, Object_delta_rotation_euler_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_rotation_euler_default
};

static float rna_Object_delta_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_rotation_quaternion = {
	{(PropertyRNA *)&rna_Object_delta_scale, (PropertyRNA *)&rna_Object_delta_rotation_euler,
	-1, "delta_rotation_quaternion", 3, 1, 0, 4, 0, "Delta Rotation (Quaternion)",
	"Extra rotation added to the rotation of the object (when using Quaternion rotations)",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dquat), 5, NULL},
	NULL, NULL, Object_delta_rotation_quaternion_get, Object_delta_rotation_quaternion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_rotation_quaternion_default
};

static float rna_Object_delta_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_delta_scale = {
	{(PropertyRNA *)&rna_Object_lock_location, (PropertyRNA *)&rna_Object_delta_rotation_quaternion,
	-1, "delta_scale", 67108867, 1, 0, 4, 0, "Delta Scale",
	"Extra scaling added to the scale of the object",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dscale), 5, NULL},
	NULL, NULL, Object_delta_scale_get, Object_delta_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_delta_scale_default
};

static bool rna_Object_lock_location_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Object_lock_location = {
	{(PropertyRNA *)&rna_Object_lock_rotation, (PropertyRNA *)&rna_Object_delta_scale,
	-1, "lock_location", 4099, 1, 0, 0, 0, "Lock Location",
	"Lock editing of location when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_lock_location_get, Object_lock_location_set, NULL, NULL, NULL, NULL, 0, rna_Object_lock_location_default
};

static bool rna_Object_lock_rotation_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Object_lock_rotation = {
	{(PropertyRNA *)&rna_Object_lock_rotation_w, (PropertyRNA *)&rna_Object_lock_location,
	-1, "lock_rotation", 4099, 1, 0, 0, 0, "Lock Rotation",
	"Lock editing of rotation when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_lock_rotation_get, Object_lock_rotation_set, NULL, NULL, NULL, NULL, 0, rna_Object_lock_rotation_default
};

BoolPropertyRNA rna_Object_lock_rotation_w = {
	{(PropertyRNA *)&rna_Object_lock_rotations_4d, (PropertyRNA *)&rna_Object_lock_rotation,
	-1, "lock_rotation_w", 4099, 1, 0, 0, 0, "Lock Rotation (4D Angle)",
	"Lock editing of \'angle\' component of four-component rotations when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_lock_rotation_w_get, Object_lock_rotation_w_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_lock_rotations_4d = {
	{(PropertyRNA *)&rna_Object_lock_scale, (PropertyRNA *)&rna_Object_lock_rotation_w,
	-1, "lock_rotations_4d", 3, 1, 0, 0, 0, "Lock Rotations (4D)",
	"Lock editing of four component rotations by components (instead of as Eulers)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_lock_rotations_4d_get, Object_lock_rotations_4d_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static bool rna_Object_lock_scale_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Object_lock_scale = {
	{(PropertyRNA *)&rna_Object_matrix_world, (PropertyRNA *)&rna_Object_lock_rotations_4d,
	-1, "lock_scale", 4099, 1, 0, 0, 0, "Lock Scale",
	"Lock editing of scale when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_lock_scale_get, Object_lock_scale_set, NULL, NULL, NULL, NULL, 0, rna_Object_lock_scale_default
};

static float rna_Object_matrix_world_default[16] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_Object_matrix_world = {
	{(PropertyRNA *)&rna_Object_matrix_local, (PropertyRNA *)&rna_Object_lock_scale,
	-1, "matrix_world", 1, 2, 0, 4, 0, "Matrix World",
	"Worldspace transformation matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Object_matrix_world_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, obmat), 5, NULL},
	NULL, NULL, Object_matrix_world_get, Object_matrix_world_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_world_default
};

static float rna_Object_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_local = {
	{(PropertyRNA *)&rna_Object_matrix_basis, (PropertyRNA *)&rna_Object_matrix_world,
	-1, "matrix_local", 1, 2, 0, 0, 0, "Local Matrix",
	"Parent relative transformation matrix.\nWarning: Only takes into account object parenting, so e.g. in case of bone parenting you get a matrix relative to the Armature object, not to the actual parent bone",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_matrix_local_get, Object_matrix_local_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_local_default
};

static float rna_Object_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_basis = {
	{(PropertyRNA *)&rna_Object_matrix_parent_inverse, (PropertyRNA *)&rna_Object_matrix_local,
	-1, "matrix_basis", 1, 2, 0, 0, 0, "Input Matrix",
	"Matrix access to location, rotation and scale (including deltas), before constraints and parenting are applied",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Object_matrix_basis_get, Object_matrix_basis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_basis_default
};

static float rna_Object_matrix_parent_inverse_default[16] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_Object_matrix_parent_inverse = {
	{(PropertyRNA *)&rna_Object_modifiers, (PropertyRNA *)&rna_Object_matrix_basis,
	-1, "matrix_parent_inverse", 3, 1, 0, 4, 0, "Parent Inverse Matrix",
	"Inverse of object\'s parent matrix at time of parenting",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 101842944, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, parentinv), 5, NULL},
	NULL, NULL, Object_matrix_parent_inverse_get, Object_matrix_parent_inverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_parent_inverse_default
};

CollectionPropertyRNA rna_Object_modifiers = {
	{(PropertyRNA *)&rna_Object_grease_pencil_modifiers, (PropertyRNA *)&rna_Object_matrix_parent_inverse,
	-1, "modifiers", 0, 1025, 0, 0, 0, "Modifiers",
	"Modifiers affecting the geometric data of the object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_modifiers_override_apply,
	0, -1, &RNA_ObjectModifiers},
	Object_modifiers_begin, Object_modifiers_next, Object_modifiers_end, Object_modifiers_get, NULL, Object_modifiers_lookup_int, Object_modifiers_lookup_string, NULL, &RNA_Modifier
};

CollectionPropertyRNA rna_Object_grease_pencil_modifiers = {
	{(PropertyRNA *)&rna_Object_shader_effects, (PropertyRNA *)&rna_Object_modifiers,
	-1, "grease_pencil_modifiers", 0, 1025, 0, 0, 0, "Grease Pencil Modifiers",
	"Modifiers affecting the data of the grease pencil object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_greasepencil_modifiers_override_apply,
	0, -1, &RNA_ObjectGpencilModifiers},
	Object_grease_pencil_modifiers_begin, Object_grease_pencil_modifiers_next, Object_grease_pencil_modifiers_end, Object_grease_pencil_modifiers_get, NULL, Object_grease_pencil_modifiers_lookup_int, Object_grease_pencil_modifiers_lookup_string, NULL, &RNA_GpencilModifier
};

CollectionPropertyRNA rna_Object_shader_effects = {
	{(PropertyRNA *)&rna_Object_constraints, (PropertyRNA *)&rna_Object_grease_pencil_modifiers,
	-1, "shader_effects", 0, 1, 0, 0, 0, "Shader Effects",
	"Effects affecting display of object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ObjectShaderFx},
	Object_shader_effects_begin, Object_shader_effects_next, Object_shader_effects_end, Object_shader_effects_get, NULL, Object_shader_effects_lookup_int, Object_shader_effects_lookup_string, NULL, &RNA_ShaderFx
};

CollectionPropertyRNA rna_Object_constraints = {
	{(PropertyRNA *)&rna_Object_vertex_groups, (PropertyRNA *)&rna_Object_shader_effects,
	-1, "constraints", 0, 1025, 0, 0, 0, "Constraints",
	"Constraints affecting the transformation of the object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Object_constraints_override_apply,
	0, -1, &RNA_ObjectConstraints},
	Object_constraints_begin, Object_constraints_next, Object_constraints_end, Object_constraints_get, NULL, Object_constraints_lookup_int, Object_constraints_lookup_string, NULL, &RNA_Constraint
};

CollectionPropertyRNA rna_Object_vertex_groups = {
	{(PropertyRNA *)&rna_Object_face_maps, (PropertyRNA *)&rna_Object_constraints,
	-1, "vertex_groups", 0, 0, 0, 0, 0, "Vertex Groups",
	"Vertex groups of the object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_VertexGroups},
	Object_vertex_groups_begin, Object_vertex_groups_next, Object_vertex_groups_end, Object_vertex_groups_get, NULL, NULL, NULL, NULL, &RNA_VertexGroup
};

CollectionPropertyRNA rna_Object_face_maps = {
	{(PropertyRNA *)&rna_Object_empty_display_type, (PropertyRNA *)&rna_Object_vertex_groups,
	-1, "face_maps", 0, 0, 0, 0, 0, "Face Maps",
	"Maps of faces of the object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_FaceMaps},
	Object_face_maps_begin, Object_face_maps_next, Object_face_maps_end, Object_face_maps_get, NULL, Object_face_maps_lookup_int, Object_face_maps_lookup_string, NULL, &RNA_FaceMap
};

EnumPropertyRNA rna_Object_empty_display_type = {
	{(PropertyRNA *)&rna_Object_empty_display_size, (PropertyRNA *)&rna_Object_face_maps,
	-1, "empty_display_type", 3, 1, 0, 0, 0, "Empty Display Type",
	"Viewport display style for empties",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_empty_display_type_get, Object_empty_display_type_set, NULL, NULL, NULL, rna_enum_object_empty_drawtype_items, 8, 2
};

FloatPropertyRNA rna_Object_empty_display_size = {
	{(PropertyRNA *)&rna_Object_empty_image_offset, (PropertyRNA *)&rna_Object_empty_display_type,
	-1, "empty_display_size", 3, 1, 0, 4, 0, "Empty Display Size",
	"Size of display for empties in the viewport",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, empty_drawsize), 5, NULL},
	Object_empty_display_size_get, Object_empty_display_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0001000000f, 1000.0f, 1.0f, 2, 1.0f, NULL
};

static float rna_Object_empty_image_offset_default[2] = {
	-0.5000000000f,
	-0.5000000000f
};

FloatPropertyRNA rna_Object_empty_image_offset = {
	{(PropertyRNA *)&rna_Object_image_user, (PropertyRNA *)&rna_Object_empty_display_size,
	-1, "empty_image_offset", 3, 1, 0, 4, 0, "Origin Offset",
	"Origin offset distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, ima_ofs), 5, NULL},
	NULL, NULL, Object_empty_image_offset_get, Object_empty_image_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, 0.0f, rna_Object_empty_image_offset_default
};

PointerPropertyRNA rna_Object_image_user = {
	{(PropertyRNA *)&rna_Object_empty_image_depth, (PropertyRNA *)&rna_Object_empty_image_offset,
	-1, "image_user", 8650752, 1, 0, 0, 0, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

static const EnumPropertyItem rna_Object_empty_image_depth_items[4] = {
	{0, "DEFAULT", 0, "Default", ""},
	{1, "FRONT", 0, "Front", ""},
	{2, "BACK", 0, "Back", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_empty_image_depth = {
	{(PropertyRNA *)&rna_Object_show_empty_image_perspective, (PropertyRNA *)&rna_Object_image_user,
	-1, "empty_image_depth", 3, 1, 0, 4, 0, "Empty Image Depth",
	"Determine which other objects will occlude the image",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, empty_image_depth), 2, NULL},
	Object_empty_image_depth_get, Object_empty_image_depth_set, NULL, NULL, NULL, rna_Object_empty_image_depth_items, 3, 0
};

BoolPropertyRNA rna_Object_show_empty_image_perspective = {
	{(PropertyRNA *)&rna_Object_show_empty_image_orthographic, (PropertyRNA *)&rna_Object_empty_image_depth,
	-1, "show_empty_image_perspective", 3, 1, 0, 0, 0, "Display in Perspective Mode",
	"Display image in perspective mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_empty_image_perspective_get, Object_show_empty_image_perspective_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_empty_image_orthographic = {
	{(PropertyRNA *)&rna_Object_show_empty_image_only_axis_aligned, (PropertyRNA *)&rna_Object_show_empty_image_perspective,
	-1, "show_empty_image_orthographic", 3, 1, 0, 0, 0, "Display in Orthographic Mode",
	"Display image in orthographic mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_empty_image_orthographic_get, Object_show_empty_image_orthographic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_empty_image_only_axis_aligned = {
	{(PropertyRNA *)&rna_Object_use_empty_image_alpha, (PropertyRNA *)&rna_Object_show_empty_image_orthographic,
	-1, "show_empty_image_only_axis_aligned", 3, 1, 0, 0, 0, "Display Only Axis Aligned",
	"Only display the image when it is aligned with the view axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_empty_image_only_axis_aligned_get, Object_show_empty_image_only_axis_aligned_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_use_empty_image_alpha = {
	{(PropertyRNA *)&rna_Object_empty_image_side, (PropertyRNA *)&rna_Object_show_empty_image_only_axis_aligned,
	-1, "use_empty_image_alpha", 3, 1, 0, 0, 0, "Use Alpha",
	"Use alpha blending instead of alpha test (can produce sorting artifacts)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_empty_image_alpha_get, Object_use_empty_image_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Object_empty_image_side_items[4] = {
	{0, "DOUBLE_SIDED", 0, "Both", ""},
	{4, "FRONT", 0, "Front", ""},
	{8, "BACK", 0, "Back", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_empty_image_side = {
	{(PropertyRNA *)&rna_Object_add_rest_position_attribute, (PropertyRNA *)&rna_Object_use_empty_image_alpha,
	-1, "empty_image_side", 3, 1, 0, 4, 0, "Empty Image Side",
	"Show front/back side",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, empty_image_visibility_flag), 2, NULL},
	Object_empty_image_side_get, Object_empty_image_side_set, NULL, NULL, NULL, rna_Object_empty_image_side_items, 3, 0
};

BoolPropertyRNA rna_Object_add_rest_position_attribute = {
	{(PropertyRNA *)&rna_Object_pass_index, (PropertyRNA *)&rna_Object_empty_image_side,
	-1, "add_rest_position_attribute", 3, 1, 0, 0, 0, "Add Rest Position",
	"Add a \"rest_position\" attribute that is a copy of the position attribute before shape keys and modifiers are evaluated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_add_rest_position_attribute_get, Object_add_rest_position_attribute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Object_pass_index = {
	{(PropertyRNA *)&rna_Object_color, (PropertyRNA *)&rna_Object_add_rest_position_attribute,
	-1, "pass_index", 3, 1, 0, 4, 0, "Pass Index",
	"Index number for the \"Object Index\" render pass",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, index), 1, NULL},
	Object_pass_index_get, Object_pass_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

static float rna_Object_color_default[4] = {
	1.0f,
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_color = {
	{(PropertyRNA *)&rna_Object_field, (PropertyRNA *)&rna_Object_pass_index,
	-1, "color", 3, 1, 0, 4, 0, "Color",
	"Object color and alpha, used when faces have the ObColor mode enabled",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, color), 5, NULL},
	NULL, NULL, Object_color_get, Object_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_color_default
};

PointerPropertyRNA rna_Object_field = {
	{(PropertyRNA *)&rna_Object_collision, (PropertyRNA *)&rna_Object_color,
	-1, "field", 8388608, 1, 0, 0, 0, "Field Settings",
	"Settings for using the object as a field in physics simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_field_get, NULL, NULL, NULL,&RNA_FieldSettings
};

PointerPropertyRNA rna_Object_collision = {
	{(PropertyRNA *)&rna_Object_soft_body, (PropertyRNA *)&rna_Object_field,
	-1, "collision", 8388608, 1, 0, 0, 0, "Collision Settings",
	"Settings for using the object as a collider in physics simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_collision_get, NULL, NULL, NULL,&RNA_CollisionSettings
};

PointerPropertyRNA rna_Object_soft_body = {
	{(PropertyRNA *)&rna_Object_particle_systems, (PropertyRNA *)&rna_Object_collision,
	-1, "soft_body", 8388608, 1, 0, 0, 0, "Soft Body Settings",
	"Settings for soft body simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_soft_body_get, NULL, NULL, NULL,&RNA_SoftBodySettings
};

CollectionPropertyRNA rna_Object_particle_systems = {
	{(PropertyRNA *)&rna_Object_rigid_body, (PropertyRNA *)&rna_Object_soft_body,
	-1, "particle_systems", 0, 1, 0, 0, 0, "Particle Systems",
	"Particle systems emitted from the object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ParticleSystems},
	Object_particle_systems_begin, Object_particle_systems_next, Object_particle_systems_end, Object_particle_systems_get, NULL, Object_particle_systems_lookup_int, Object_particle_systems_lookup_string, NULL, &RNA_ParticleSystem
};

PointerPropertyRNA rna_Object_rigid_body = {
	{(PropertyRNA *)&rna_Object_rigid_body_constraint, (PropertyRNA *)&rna_Object_particle_systems,
	-1, "rigid_body", 8388608, 1, 0, 0, 0, "Rigid Body Settings",
	"Settings for rigid body simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_rigid_body_get, NULL, NULL, NULL,&RNA_RigidBodyObject
};

PointerPropertyRNA rna_Object_rigid_body_constraint = {
	{(PropertyRNA *)&rna_Object_hide_viewport, (PropertyRNA *)&rna_Object_rigid_body,
	-1, "rigid_body_constraint", 8388608, 1, 0, 0, 0, "Rigid Body Constraint",
	"Constraint constraining rigid bodies",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_rigid_body_constraint_get, NULL, NULL, NULL,&RNA_RigidBodyConstraint
};

BoolPropertyRNA rna_Object_hide_viewport = {
	{(PropertyRNA *)&rna_Object_hide_select, (PropertyRNA *)&rna_Object_rigid_body_constraint,
	-1, "hide_viewport", 4355, 1, 0, 0, 0, "Disable in Viewports",
	"Globally disable in viewports",
	284, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_hide_viewport_get, Object_hide_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_hide_select = {
	{(PropertyRNA *)&rna_Object_hide_render, (PropertyRNA *)&rna_Object_hide_viewport,
	-1, "hide_select", 4353, 1, 0, 0, 0, "Disable Selection",
	"Disable selection in viewport",
	256, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_hide_select_get, Object_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_hide_render = {
	{(PropertyRNA *)&rna_Object_show_instancer_for_render, (PropertyRNA *)&rna_Object_hide_select,
	-1, "hide_render", 4355, 1, 0, 0, 0, "Disable in Renders",
	"Globally disable in renders",
	258, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_hide_render_get, Object_hide_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_instancer_for_render = {
	{(PropertyRNA *)&rna_Object_show_instancer_for_viewport, (PropertyRNA *)&rna_Object_hide_render,
	-1, "show_instancer_for_render", 3, 1, 0, 0, 0, "Render Instancer",
	"Make instancer visible when rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_duplicator_visibility_flag_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_instancer_for_render_get, Object_show_instancer_for_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Object_show_instancer_for_viewport = {
	{(PropertyRNA *)&rna_Object_visible_camera, (PropertyRNA *)&rna_Object_show_instancer_for_render,
	-1, "show_instancer_for_viewport", 3, 1, 0, 0, 0, "Display Instancer",
	"Make instancer visible in the viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_duplicator_visibility_flag_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_instancer_for_viewport_get, Object_show_instancer_for_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Object_visible_camera = {
	{(PropertyRNA *)&rna_Object_visible_diffuse, (PropertyRNA *)&rna_Object_show_instancer_for_viewport,
	-1, "visible_camera", 3, 1, 0, 0, 0, "Camera Visibility",
	"Object visibility to camera rays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_visible_camera_get, Object_visible_camera_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_visible_diffuse = {
	{(PropertyRNA *)&rna_Object_visible_glossy, (PropertyRNA *)&rna_Object_visible_camera,
	-1, "visible_diffuse", 3, 1, 0, 0, 0, "Diffuse Visibility",
	"Object visibility to diffuse rays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_visible_diffuse_get, Object_visible_diffuse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_visible_glossy = {
	{(PropertyRNA *)&rna_Object_visible_transmission, (PropertyRNA *)&rna_Object_visible_diffuse,
	-1, "visible_glossy", 3, 1, 0, 0, 0, "Glossy Visibility",
	"Object visibility to glossy rays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_visible_glossy_get, Object_visible_glossy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_visible_transmission = {
	{(PropertyRNA *)&rna_Object_visible_volume_scatter, (PropertyRNA *)&rna_Object_visible_glossy,
	-1, "visible_transmission", 3, 1, 0, 0, 0, "Transmission Visibility",
	"Object visibility to transmission rays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_visible_transmission_get, Object_visible_transmission_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_visible_volume_scatter = {
	{(PropertyRNA *)&rna_Object_visible_shadow, (PropertyRNA *)&rna_Object_visible_transmission,
	-1, "visible_volume_scatter", 3, 1, 0, 0, 0, "Volume Scatter Visibility",
	"Object visibility to volume scattering rays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_visible_volume_scatter_get, Object_visible_volume_scatter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_visible_shadow = {
	{(PropertyRNA *)&rna_Object_is_holdout, (PropertyRNA *)&rna_Object_visible_volume_scatter,
	-1, "visible_shadow", 3, 1, 0, 0, 0, "Shadow Visibility",
	"Object visibility to shadow rays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_visible_shadow_get, Object_visible_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_is_holdout = {
	{(PropertyRNA *)&rna_Object_is_shadow_catcher, (PropertyRNA *)&rna_Object_visible_shadow,
	-1, "is_holdout", 3, 1, 0, 0, 0, "Holdout",
	"Render objects as a holdout or matte, creating a hole in the image with zero alpha, to fill out in compositing with real footage or another render",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_hide_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_is_holdout_get, Object_is_holdout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_is_shadow_catcher = {
	{(PropertyRNA *)&rna_Object_instance_type, (PropertyRNA *)&rna_Object_is_holdout,
	-1, "is_shadow_catcher", 3, 1, 0, 0, 0, "Shadow Catcher",
	"Only render shadows and reflections on this object, for compositing renders into real footage. Objects with this setting are considered to already exist in the footage, objects without it are synthetic objects being composited into it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_draw, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_is_shadow_catcher_get, Object_is_shadow_catcher_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Object_instance_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{16, "VERTS", 0, "Vertices", "Instantiate child objects on all vertices"},
	{512, "FACES", 0, "Faces", "Instantiate child objects on all faces"},
	{256, "COLLECTION", 0, "Collection", "Enable collection instancing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_instance_type = {
	{(PropertyRNA *)&rna_Object_use_instance_vertices_rotation, (PropertyRNA *)&rna_Object_is_shadow_catcher,
	-1, "instance_type", 3, 1, 0, 4, 0, "Instance Type",
	"If not None, object instancing method to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, transflag), 1, NULL},
	Object_instance_type_get, Object_instance_type_set, rna_Object_instance_type_itemf, NULL, NULL, rna_Object_instance_type_items, 4, 0
};

BoolPropertyRNA rna_Object_use_instance_vertices_rotation = {
	{(PropertyRNA *)&rna_Object_use_instance_faces_scale, (PropertyRNA *)&rna_Object_instance_type,
	-1, "use_instance_vertices_rotation", 3, 1, 0, 0, 0, "Orient with Normals",
	"Rotate instance according to vertex normal",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_instance_vertices_rotation_get, Object_use_instance_vertices_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_use_instance_faces_scale = {
	{(PropertyRNA *)&rna_Object_instance_faces_scale, (PropertyRNA *)&rna_Object_use_instance_vertices_rotation,
	-1, "use_instance_faces_scale", 3, 1, 0, 0, 0, "Scale to Face Sizes",
	"Scale instance based on face size",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_instance_faces_scale_get, Object_use_instance_faces_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Object_instance_faces_scale = {
	{(PropertyRNA *)&rna_Object_instance_collection, (PropertyRNA *)&rna_Object_use_instance_faces_scale,
	-1, "instance_faces_scale", 3, 1, 0, 4, 0, "Instance Faces Scale",
	"Scale the face instance objects",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, instance_faces_scale), 5, NULL},
	Object_instance_faces_scale_get, Object_instance_faces_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 10.0f, 3, 1.0f, NULL
};

PointerPropertyRNA rna_Object_instance_collection = {
	{(PropertyRNA *)&rna_Object_is_instancer, (PropertyRNA *)&rna_Object_instance_faces_scale,
	-1, "instance_collection", 8388737, 1, 0, 0, 0, "Instance Collection",
	"Instance an existing collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_instance_collection_get, Object_instance_collection_set, NULL, NULL,&RNA_Collection
};

BoolPropertyRNA rna_Object_is_instancer = {
	{(PropertyRNA *)&rna_Object_display_type, (PropertyRNA *)&rna_Object_instance_collection,
	-1, "is_instancer", 2, 2, 0, 0, 0, "is_instancer",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_is_instancer_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Object_display_type_items[5] = {
	{1, "BOUNDS", 0, "Bounds", "Display the bounds of the object"},
	{2, "WIRE", 0, "Wire", "Display the object as a wireframe"},
	{3, "SOLID", 0, "Solid", "Display the object as a solid (if solid drawing is enabled in the viewport)"},
	{5, "TEXTURED", 0, "Textured", "Display the object with textures (if textures are enabled in the viewport)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_display_type = {
	{(PropertyRNA *)&rna_Object_show_bounds, (PropertyRNA *)&rna_Object_is_instancer,
	-1, "display_type", 3, 1, 0, 4, 0, "Display As",
	"How to display object in viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, dt), 2, NULL},
	Object_display_type_get, Object_display_type_set, NULL, NULL, NULL, rna_Object_display_type_items, 4, 5
};

BoolPropertyRNA rna_Object_show_bounds = {
	{(PropertyRNA *)&rna_Object_display_bounds_type, (PropertyRNA *)&rna_Object_display_type,
	-1, "show_bounds", 3, 1, 0, 0, 0, "Display Bounds",
	"Display the object\'s bounds",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_bounds_get, Object_show_bounds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Object_display_bounds_type_items[6] = {
	{0, "BOX", 0, "Box", "Display bounds as box"},
	{1, "SPHERE", 0, "Sphere", "Display bounds as sphere"},
	{2, "CYLINDER", 0, "Cylinder", "Display bounds as cylinder"},
	{3, "CONE", 0, "Cone", "Display bounds as cone"},
	{7, "CAPSULE", 0, "Capsule", "Display bounds as capsule"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_display_bounds_type = {
	{(PropertyRNA *)&rna_Object_show_name, (PropertyRNA *)&rna_Object_show_bounds,
	-1, "display_bounds_type", 3, 1, 0, 4, 0, "Display Bounds Type",
	"Object boundary display type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Object, boundtype), 2, NULL},
	Object_display_bounds_type_get, Object_display_bounds_type_set, NULL, NULL, NULL, rna_Object_display_bounds_type_items, 5, 0
};

BoolPropertyRNA rna_Object_show_name = {
	{(PropertyRNA *)&rna_Object_show_axis, (PropertyRNA *)&rna_Object_display_bounds_type,
	-1, "show_name", 3, 1, 0, 0, 0, "Display Name",
	"Display the object\'s name",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_name_get, Object_show_name_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_axis = {
	{(PropertyRNA *)&rna_Object_show_texture_space, (PropertyRNA *)&rna_Object_show_name,
	-1, "show_axis", 3, 1, 0, 0, 0, "Display Axes",
	"Display the object\'s origin and axes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_axis_get, Object_show_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_texture_space = {
	{(PropertyRNA *)&rna_Object_show_wire, (PropertyRNA *)&rna_Object_show_axis,
	-1, "show_texture_space", 3, 1, 0, 0, 0, "Display Texture Space",
	"Display the object\'s texture space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_texture_space_get, Object_show_texture_space_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_wire = {
	{(PropertyRNA *)&rna_Object_show_all_edges, (PropertyRNA *)&rna_Object_show_texture_space,
	-1, "show_wire", 3, 1, 0, 0, 0, "Display Wire",
	"Display the object\'s wireframe over solid shading",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_wire_get, Object_show_wire_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_all_edges = {
	{(PropertyRNA *)&rna_Object_use_grease_pencil_lights, (PropertyRNA *)&rna_Object_show_wire,
	-1, "show_all_edges", 3, 1, 0, 0, 0, "Display All Edges",
	"Display all edges for mesh objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_all_edges_get, Object_show_all_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_use_grease_pencil_lights = {
	{(PropertyRNA *)&rna_Object_show_transparent, (PropertyRNA *)&rna_Object_show_all_edges,
	-1, "use_grease_pencil_lights", 3, 1, 0, 0, 0, "Use Lights",
	"Lights affect grease pencil object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_grease_pencil_lights_get, Object_use_grease_pencil_lights_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Object_show_transparent = {
	{(PropertyRNA *)&rna_Object_show_in_front, (PropertyRNA *)&rna_Object_use_grease_pencil_lights,
	-1, "show_transparent", 3, 1, 0, 0, 0, "Display Transparent",
	"Display material transparency in the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_transparent_get, Object_show_transparent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_show_in_front = {
	{(PropertyRNA *)&rna_Object_pose_library, (PropertyRNA *)&rna_Object_show_transparent,
	-1, "show_in_front", 3, 1, 0, 0, 0, "In Front",
	"Make the object display in front of others",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_in_front_get, Object_show_in_front_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_pose_library = {
	{(PropertyRNA *)&rna_Object_pose, (PropertyRNA *)&rna_Object_show_in_front,
	-1, "pose_library", 8388801, 1, 0, 0, 0, "Pose Library",
	"Deprecated, will be removed in Blender 3.3. Action used as a pose library for armatures",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_pose_library_get, Object_pose_library_set, NULL, NULL,&RNA_Action
};

PointerPropertyRNA rna_Object_pose = {
	{(PropertyRNA *)&rna_Object_show_only_shape_key, (PropertyRNA *)&rna_Object_pose_library,
	-1, "pose", 8388608, 1, 0, 0, 0, "Pose",
	"Current pose for armatures",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_pose_get, NULL, NULL, NULL,&RNA_Pose
};

BoolPropertyRNA rna_Object_show_only_shape_key = {
	{(PropertyRNA *)&rna_Object_use_shape_key_edit_mode, (PropertyRNA *)&rna_Object_pose,
	-1, "show_only_shape_key", 4099, 1, 0, 0, 0, "Shape Key Lock",
	"Always show the current shape for this object",
	42, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_show_only_shape_key_get, Object_show_only_shape_key_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_use_shape_key_edit_mode = {
	{(PropertyRNA *)&rna_Object_active_shape_key, (PropertyRNA *)&rna_Object_show_only_shape_key,
	-1, "use_shape_key_edit_mode", 3, 1, 0, 0, 0, "Shape Key Edit Mode",
	"Apply shape keys in edit mode (for meshes only)",
	131, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_shape_key_edit_mode_get, Object_use_shape_key_edit_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_active_shape_key = {
	{(PropertyRNA *)&rna_Object_active_shape_key_index, (PropertyRNA *)&rna_Object_use_shape_key_edit_mode,
	-1, "active_shape_key", 8388608, 6, 0, 0, 0, "Active Shape Key",
	"Current shape key",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_active_shape_key_get, NULL, NULL, NULL,&RNA_ShapeKey
};

IntPropertyRNA rna_Object_active_shape_key_index = {
	{(PropertyRNA *)&rna_Object_use_dynamic_topology_sculpting, (PropertyRNA *)&rna_Object_active_shape_key,
	-1, "active_shape_key_index", 1, 1, 0, 0, 0, "Active Shape Key Index",
	"Current shape key index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_active_shape_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_active_shape_key_index_get, Object_active_shape_key_index_set, NULL, NULL, rna_Object_active_shape_key_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_Object_use_dynamic_topology_sculpting = {
	{(PropertyRNA *)&rna_Object_is_from_instancer, (PropertyRNA *)&rna_Object_active_shape_key_index,
	-1, "use_dynamic_topology_sculpting", 2, 1, 0, 0, 0, "Dynamic Topology Sculpting",
	NULL,
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_dynamic_topology_sculpting_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_is_from_instancer = {
	{(PropertyRNA *)&rna_Object_is_from_set, (PropertyRNA *)&rna_Object_use_dynamic_topology_sculpting,
	-1, "is_from_instancer", 2, 2, 0, 0, 0, "Base from Instancer",
	"Object comes from a instancer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_is_from_instancer_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_is_from_set = {
	{(PropertyRNA *)&rna_Object_display, (PropertyRNA *)&rna_Object_is_from_instancer,
	-1, "is_from_set", 2, 2, 0, 0, 0, "Base from Set",
	"Object comes from a background set",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_is_from_set_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_display = {
	{(PropertyRNA *)&rna_Object_lineart, (PropertyRNA *)&rna_Object_is_from_set,
	-1, "display", 8650752, 1, 0, 0, 0, "Object Display",
	"Object display settings for 3D viewport",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_display_get, NULL, NULL, NULL,&RNA_ObjectDisplay
};

PointerPropertyRNA rna_Object_lineart = {
	{(PropertyRNA *)&rna_Object_use_mesh_mirror_x, (PropertyRNA *)&rna_Object_display,
	-1, "lineart", 8388608, 1, 0, 0, 0, "Line Art",
	"Line art settings for the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_lineart_get, NULL, NULL, NULL,&RNA_ObjectLineArt
};

BoolPropertyRNA rna_Object_use_mesh_mirror_x = {
	{(PropertyRNA *)&rna_Object_use_mesh_mirror_y, (PropertyRNA *)&rna_Object_lineart,
	-1, "use_mesh_mirror_x", 3, 1, 0, 0, 0, "X",
	"Enable mesh symmetry in the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_mesh_mirror_x_get, Object_use_mesh_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_use_mesh_mirror_y = {
	{(PropertyRNA *)&rna_Object_use_mesh_mirror_z, (PropertyRNA *)&rna_Object_use_mesh_mirror_x,
	-1, "use_mesh_mirror_y", 3, 1, 0, 0, 0, "Y",
	"Enable mesh symmetry in the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_Object_mesh_symmetry_yz_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_mesh_mirror_y_get, Object_use_mesh_mirror_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Object_use_mesh_mirror_z = {
	{(PropertyRNA *)&rna_Object_lightgroup, (PropertyRNA *)&rna_Object_use_mesh_mirror_y,
	-1, "use_mesh_mirror_z", 3, 1, 0, 0, 0, "Z",
	"Enable mesh symmetry in the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_Object_mesh_symmetry_yz_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_use_mesh_mirror_z_get, Object_use_mesh_mirror_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_Object_lightgroup = {
	{(PropertyRNA *)&rna_Object_animation_data, (PropertyRNA *)&rna_Object_use_mesh_mirror_z,
	-1, "lightgroup", 262145, 1, 0, 0, 0, "Lightgroup",
	"Lightgroup that the object belongs to",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_lightgroup_get, Object_lightgroup_length, Object_lightgroup_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_Object_animation_data = {
	{(PropertyRNA *)&rna_Object_animation_visualization, (PropertyRNA *)&rna_Object_lightgroup,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Object_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_Object_animation_visualization = {
	{(PropertyRNA *)&rna_Object_motion_path, (PropertyRNA *)&rna_Object_animation_data,
	-1, "animation_visualization", 8650752, 1, 0, 0, 0, "Animation Visualization",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_animation_visualization_get, NULL, NULL, NULL,&RNA_AnimViz
};

PointerPropertyRNA rna_Object_motion_path = {
	{NULL, (PropertyRNA *)&rna_Object_animation_visualization,
	-1, "motion_path", 8388608, 0, 0, 0, 0, "Motion Path",
	"Motion Path for this element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Object_motion_path_get, NULL, NULL, NULL,&RNA_MotionPath
};

PointerPropertyRNA rna_Object_select_get_view_layer = {
	{(PropertyRNA *)&rna_Object_select_get_result, NULL,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_select_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_select_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_select_get_func = {
	{(FunctionRNA *)&rna_Object_select_set_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Object_select_get_view_layer, (PropertyRNA *)&rna_Object_select_get_result}},
	"select_get", 8, "Test if the object is selected. The selection state is per view layer",
	Object_select_get_call,
	(PropertyRNA *)&rna_Object_select_get_result
};

BoolPropertyRNA rna_Object_select_set_state = {
	{(PropertyRNA *)&rna_Object_select_set_view_layer, NULL,
	-1, "state", 3, 0, 1, 0, 0, "",
	"Selection state to define",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_select_set_view_layer = {
	{NULL, (PropertyRNA *)&rna_Object_select_set_state,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

FunctionRNA rna_Object_select_set_func = {
	{(FunctionRNA *)&rna_Object_hide_get_func, (FunctionRNA *)&rna_Object_select_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_select_set_state, (PropertyRNA *)&rna_Object_select_set_view_layer}},
	"select_set", 24, "Select or deselect the object. The selection state is per view layer",
	Object_select_set_call,
	NULL
};

PointerPropertyRNA rna_Object_hide_get_view_layer = {
	{(PropertyRNA *)&rna_Object_hide_get_result, NULL,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_hide_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_hide_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object hidden",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_hide_get_func = {
	{(FunctionRNA *)&rna_Object_hide_set_func, (FunctionRNA *)&rna_Object_select_set_func,
	NULL,
	{(PropertyRNA *)&rna_Object_hide_get_view_layer, (PropertyRNA *)&rna_Object_hide_get_result}},
	"hide_get", 8, "Test if the object is hidden for viewport editing. This hiding state is per view layer",
	Object_hide_get_call,
	(PropertyRNA *)&rna_Object_hide_get_result
};

BoolPropertyRNA rna_Object_hide_set_state = {
	{(PropertyRNA *)&rna_Object_hide_set_view_layer, NULL,
	-1, "state", 3, 0, 1, 0, 0, "",
	"Hide state to define",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_hide_set_view_layer = {
	{NULL, (PropertyRNA *)&rna_Object_hide_set_state,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

FunctionRNA rna_Object_hide_set_func = {
	{(FunctionRNA *)&rna_Object_visible_get_func, (FunctionRNA *)&rna_Object_hide_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_hide_set_state, (PropertyRNA *)&rna_Object_hide_set_view_layer}},
	"hide_set", 24, "Hide the object for viewport editing. This hiding state is per view layer",
	Object_hide_set_call,
	NULL
};

PointerPropertyRNA rna_Object_visible_get_view_layer = {
	{(PropertyRNA *)&rna_Object_visible_get_viewport, NULL,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

PointerPropertyRNA rna_Object_visible_get_viewport = {
	{(PropertyRNA *)&rna_Object_visible_get_result, (PropertyRNA *)&rna_Object_visible_get_view_layer,
	-1, "viewport", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active 3D viewport",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_visible_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_visible_get_viewport,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object visible",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_visible_get_func = {
	{(FunctionRNA *)&rna_Object_holdout_get_func, (FunctionRNA *)&rna_Object_hide_set_func,
	NULL,
	{(PropertyRNA *)&rna_Object_visible_get_view_layer, (PropertyRNA *)&rna_Object_visible_get_result}},
	"visible_get", 8, "Test if the object is visible in the 3D viewport, taking into account all visibility settings",
	Object_visible_get_call,
	(PropertyRNA *)&rna_Object_visible_get_result
};

PointerPropertyRNA rna_Object_holdout_get_view_layer = {
	{(PropertyRNA *)&rna_Object_holdout_get_result, NULL,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_holdout_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_holdout_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object holdout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_holdout_get_func = {
	{(FunctionRNA *)&rna_Object_indirect_only_get_func, (FunctionRNA *)&rna_Object_visible_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_holdout_get_view_layer, (PropertyRNA *)&rna_Object_holdout_get_result}},
	"holdout_get", 8, "Test if object is masked in the view layer",
	Object_holdout_get_call,
	(PropertyRNA *)&rna_Object_holdout_get_result
};

PointerPropertyRNA rna_Object_indirect_only_get_view_layer = {
	{(PropertyRNA *)&rna_Object_indirect_only_get_result, NULL,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "",
	"Use this instead of the active view layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

BoolPropertyRNA rna_Object_indirect_only_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_indirect_only_get_view_layer,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object indirect only",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_indirect_only_get_func = {
	{(FunctionRNA *)&rna_Object_local_view_get_func, (FunctionRNA *)&rna_Object_holdout_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_indirect_only_get_view_layer, (PropertyRNA *)&rna_Object_indirect_only_get_result}},
	"indirect_only_get", 8, "Test if object is set to contribute only indirectly (through shadows and reflections) in the view layer",
	Object_indirect_only_get_call,
	(PropertyRNA *)&rna_Object_indirect_only_get_result
};

PointerPropertyRNA rna_Object_local_view_get_viewport = {
	{(PropertyRNA *)&rna_Object_local_view_get_result, NULL,
	-1, "viewport", 8388608, 0, 1, 0, 0, "",
	"Viewport in local view",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_local_view_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_local_view_get_viewport,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object local view state",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_local_view_get_func = {
	{(FunctionRNA *)&rna_Object_local_view_set_func, (FunctionRNA *)&rna_Object_indirect_only_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_local_view_get_viewport, (PropertyRNA *)&rna_Object_local_view_get_result}},
	"local_view_get", 16, "Get the local view state for this object",
	Object_local_view_get_call,
	(PropertyRNA *)&rna_Object_local_view_get_result
};

PointerPropertyRNA rna_Object_local_view_set_viewport = {
	{(PropertyRNA *)&rna_Object_local_view_set_state, NULL,
	-1, "viewport", 8388608, 0, 5, 0, 0, "",
	"Viewport in local view",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_local_view_set_state = {
	{NULL, (PropertyRNA *)&rna_Object_local_view_set_viewport,
	-1, "state", 3, 0, 1, 0, 0, "",
	"Local view state to define",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_local_view_set_func = {
	{(FunctionRNA *)&rna_Object_visible_in_viewport_get_func, (FunctionRNA *)&rna_Object_local_view_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_local_view_set_viewport, (PropertyRNA *)&rna_Object_local_view_set_state}},
	"local_view_set", 16, "Set the local view state for this object",
	Object_local_view_set_call,
	NULL
};

PointerPropertyRNA rna_Object_visible_in_viewport_get_viewport = {
	{(PropertyRNA *)&rna_Object_visible_in_viewport_get_result, NULL,
	-1, "viewport", 8388608, 0, 1, 0, 0, "",
	"Viewport in local collections",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SpaceView3D
};

BoolPropertyRNA rna_Object_visible_in_viewport_get_result = {
	{NULL, (PropertyRNA *)&rna_Object_visible_in_viewport_get_viewport,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Object viewport visibility",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_visible_in_viewport_get_func = {
	{(FunctionRNA *)&rna_Object_convert_space_func, (FunctionRNA *)&rna_Object_local_view_set_func,
	NULL,
	{(PropertyRNA *)&rna_Object_visible_in_viewport_get_viewport, (PropertyRNA *)&rna_Object_visible_in_viewport_get_result}},
	"visible_in_viewport_get", 0, "Check for local view and local collections for this viewport and object",
	Object_visible_in_viewport_get_call,
	(PropertyRNA *)&rna_Object_visible_in_viewport_get_result
};

PointerPropertyRNA rna_Object_convert_space_pose_bone = {
	{(PropertyRNA *)&rna_Object_convert_space_matrix, NULL,
	-1, "pose_bone", 8388608, 0, 0, 0, 0, "",
	"Bone to use to define spaces (may be None, in which case only the two \'WORLD\' and \'LOCAL\' spaces are usable)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PoseBone
};

static float rna_Object_convert_space_matrix_default[16] = {
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

FloatPropertyRNA rna_Object_convert_space_matrix = {
	{(PropertyRNA *)&rna_Object_convert_space_matrix_return, (PropertyRNA *)&rna_Object_convert_space_pose_bone,
	-1, "matrix", 3, 0, 0, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_convert_space_matrix_default
};

static float rna_Object_convert_space_matrix_return_default[16] = {
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

FloatPropertyRNA rna_Object_convert_space_matrix_return = {
	{(PropertyRNA *)&rna_Object_convert_space_from_space, (PropertyRNA *)&rna_Object_convert_space_matrix,
	-1, "matrix_return", 3, 0, 2, 0, 0, "",
	"The transformed matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_convert_space_matrix_return_default
};

static const EnumPropertyItem rna_Object_convert_space_from_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The most global space in Blender"},
	{2, "POSE", 0, "Pose Space", "The pose space of a bone (its armature\'s object space)"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The rest pose local space of a bone (thus matrix includes parent transforms)"},
	{1, "LOCAL", 0, "Local Space", "The local space of an object/bone"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_convert_space_from_space = {
	{(PropertyRNA *)&rna_Object_convert_space_to_space, (PropertyRNA *)&rna_Object_convert_space_matrix_return,
	-1, "from_space", 3, 0, 0, 0, 0, "",
	"The space in which \'matrix\' is currently",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_Object_convert_space_from_space_items, 4, 0
};

static const EnumPropertyItem rna_Object_convert_space_to_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The most global space in Blender"},
	{2, "POSE", 0, "Pose Space", "The pose space of a bone (its armature\'s object space)"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The rest pose local space of a bone (thus matrix includes parent transforms)"},
	{1, "LOCAL", 0, "Local Space", "The local space of an object/bone"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_convert_space_to_space = {
	{NULL, (PropertyRNA *)&rna_Object_convert_space_from_space,
	-1, "to_space", 3, 0, 0, 0, 0, "",
	"The space to which you want to transform \'matrix\'",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_Object_convert_space_to_space_items, 4, 0
};

FunctionRNA rna_Object_convert_space_func = {
	{(FunctionRNA *)&rna_Object_calc_matrix_camera_func, (FunctionRNA *)&rna_Object_visible_in_viewport_get_func,
	NULL,
	{(PropertyRNA *)&rna_Object_convert_space_pose_bone, (PropertyRNA *)&rna_Object_convert_space_to_space}},
	"convert_space", 16, "Convert (transform) the given matrix from one space to another",
	Object_convert_space_call,
	NULL
};

PointerPropertyRNA rna_Object_calc_matrix_camera_depsgraph = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_result, NULL,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"Depsgraph to get evaluated data from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

static float rna_Object_calc_matrix_camera_result_default[16] = {
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

FloatPropertyRNA rna_Object_calc_matrix_camera_result = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_x, (PropertyRNA *)&rna_Object_calc_matrix_camera_depsgraph,
	-1, "result", 3, 0, 2, 0, 0, "",
	"The camera projection matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_calc_matrix_camera_result_default
};

IntPropertyRNA rna_Object_calc_matrix_camera_x = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_y, (PropertyRNA *)&rna_Object_calc_matrix_camera_result,
	-1, "x", 3, 0, 0, 0, 0, "",
	"Width of the render area",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 1, NULL
};

IntPropertyRNA rna_Object_calc_matrix_camera_y = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_scale_x, (PropertyRNA *)&rna_Object_calc_matrix_camera_x,
	-1, "y", 3, 0, 0, 0, 0, "",
	"Height of the render area",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 1, NULL
};

FloatPropertyRNA rna_Object_calc_matrix_camera_scale_x = {
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_scale_y, (PropertyRNA *)&rna_Object_calc_matrix_camera_y,
	-1, "scale_x", 3, 0, 0, 0, 0, "",
	"Width scaling factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0000010000f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Object_calc_matrix_camera_scale_y = {
	{NULL, (PropertyRNA *)&rna_Object_calc_matrix_camera_scale_x,
	-1, "scale_y", 3, 0, 0, 0, 0, "",
	"Height scaling factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0000010000f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FunctionRNA rna_Object_calc_matrix_camera_func = {
	{(FunctionRNA *)&rna_Object_camera_fit_coords_func, (FunctionRNA *)&rna_Object_convert_space_func,
	NULL,
	{(PropertyRNA *)&rna_Object_calc_matrix_camera_depsgraph, (PropertyRNA *)&rna_Object_calc_matrix_camera_scale_y}},
	"calc_matrix_camera", 0, "Generate the camera projection matrix of this object (mostly useful for Camera and Light types)",
	Object_calc_matrix_camera_call,
	NULL
};

PointerPropertyRNA rna_Object_camera_fit_coords_depsgraph = {
	{(PropertyRNA *)&rna_Object_camera_fit_coords_coordinates, NULL,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"Depsgraph to get evaluated data from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

static float rna_Object_camera_fit_coords_coordinates_default[1] = {
	0.0f
};

FloatPropertyRNA rna_Object_camera_fit_coords_coordinates = {
	{(PropertyRNA *)&rna_Object_camera_fit_coords_co_return, (PropertyRNA *)&rna_Object_camera_fit_coords_depsgraph,
	-1, "coordinates", 393219, 0, 1, 0, 0, "",
	"Coordinates to fit in",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_camera_fit_coords_coordinates_default
};

static float rna_Object_camera_fit_coords_co_return_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_camera_fit_coords_co_return = {
	{(PropertyRNA *)&rna_Object_camera_fit_coords_scale_return, (PropertyRNA *)&rna_Object_camera_fit_coords_coordinates,
	-1, "co_return", 3, 0, 2, 0, 0, "",
	"The location to aim to be able to see all given points",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_camera_fit_coords_co_return_default
};

FloatPropertyRNA rna_Object_camera_fit_coords_scale_return = {
	{NULL, (PropertyRNA *)&rna_Object_camera_fit_coords_co_return,
	-1, "scale_return", 3, 0, 2, 0, 0, "",
	"The ortho scale to aim to be able to see all given points (if relevant)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Object_camera_fit_coords_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_eval_func, (FunctionRNA *)&rna_Object_calc_matrix_camera_func,
	NULL,
	{(PropertyRNA *)&rna_Object_camera_fit_coords_depsgraph, (PropertyRNA *)&rna_Object_camera_fit_coords_scale_return}},
	"camera_fit_coords", 0, "Compute the coordinate (and scale for ortho cameras) given object should be to \'see\' all given coordinates",
	Object_camera_fit_coords_call,
	NULL
};

PointerPropertyRNA rna_Object_crazyspace_eval_depsgraph = {
	{(PropertyRNA *)&rna_Object_crazyspace_eval_scene, NULL,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "Dependency Graph",
	"Evaluated dependency graph",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

PointerPropertyRNA rna_Object_crazyspace_eval_scene = {
	{NULL, (PropertyRNA *)&rna_Object_crazyspace_eval_depsgraph,
	-1, "scene", 8388736, 0, 1, 0, 0, "Scene",
	"Scene of the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_Object_crazyspace_eval_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_displacement_to_deformed_func, (FunctionRNA *)&rna_Object_camera_fit_coords_func,
	NULL,
	{(PropertyRNA *)&rna_Object_crazyspace_eval_depsgraph, (PropertyRNA *)&rna_Object_crazyspace_eval_scene}},
	"crazyspace_eval", 16, "Compute orientation mapping between vertices of an original object and object with shape keys and deforming modifiers applied.The evaluation is to be freed with the crazyspace_eval_free function",
	Object_crazyspace_eval_call,
	NULL
};

IntPropertyRNA rna_Object_crazyspace_displacement_to_deformed_vertex_index = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement, NULL,
	-1, "vertex_index", 3, 0, 0, 0, 0, "vertex_index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_Object_crazyspace_displacement_to_deformed_displacement_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement_deformed, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_vertex_index,
	-1, "displacement", 3, 0, 0, 0, 0, "displacement",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_deformed_displacement_default
};

static float rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_deformed_displacement_deformed = {
	{NULL, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement,
	-1, "displacement_deformed", 3, 0, 3, 0, 0, "displacement_deformed",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_deformed_displacement_deformed_default
};

FunctionRNA rna_Object_crazyspace_displacement_to_deformed_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_displacement_to_original_func, (FunctionRNA *)&rna_Object_crazyspace_eval_func,
	NULL,
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_vertex_index, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_deformed_displacement_deformed}},
	"crazyspace_displacement_to_deformed", 16, "Convert displacement vector from non-deformed object space to deformed object space",
	Object_crazyspace_displacement_to_deformed_call,
	NULL
};

IntPropertyRNA rna_Object_crazyspace_displacement_to_original_vertex_index = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement, NULL,
	-1, "vertex_index", 3, 0, 0, 0, 0, "vertex_index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_Object_crazyspace_displacement_to_original_displacement_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement = {
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement_original, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_vertex_index,
	-1, "displacement", 3, 0, 0, 0, 0, "displacement",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_original_displacement_default
};

static float rna_Object_crazyspace_displacement_to_original_displacement_original_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_crazyspace_displacement_to_original_displacement_original = {
	{NULL, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement,
	-1, "displacement_original", 3, 0, 2, 0, 0, "displacement_original",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_crazyspace_displacement_to_original_displacement_original_default
};

FunctionRNA rna_Object_crazyspace_displacement_to_original_func = {
	{(FunctionRNA *)&rna_Object_crazyspace_eval_clear_func, (FunctionRNA *)&rna_Object_crazyspace_displacement_to_deformed_func,
	NULL,
	{(PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_vertex_index, (PropertyRNA *)&rna_Object_crazyspace_displacement_to_original_displacement_original}},
	"crazyspace_displacement_to_original", 16, "Free evaluated state of crazyspace",
	Object_crazyspace_displacement_to_original_call,
	NULL
};

FunctionRNA rna_Object_crazyspace_eval_clear_func = {
	{(FunctionRNA *)&rna_Object_to_mesh_func, (FunctionRNA *)&rna_Object_crazyspace_displacement_to_original_func,
	NULL,
	{NULL, NULL}},
	"crazyspace_eval_clear", 0, "crazyspace_eval_clear",
	Object_crazyspace_eval_clear_call,
	NULL
};

BoolPropertyRNA rna_Object_to_mesh_preserve_all_data_layers = {
	{(PropertyRNA *)&rna_Object_to_mesh_depsgraph, NULL,
	-1, "preserve_all_data_layers", 3, 0, 0, 0, 0, "",
	"Preserve all data layers in the mesh, like UV maps and vertex groups. By default Blender only computes the subset of data layers needed for viewport display and rendering, for better performance",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_to_mesh_depsgraph = {
	{(PropertyRNA *)&rna_Object_to_mesh_mesh, (PropertyRNA *)&rna_Object_to_mesh_preserve_all_data_layers,
	-1, "depsgraph", 8388608, 0, 0, 0, 0, "Dependency Graph",
	"Evaluated dependency graph which is required when preserve_all_data_layers is true",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

PointerPropertyRNA rna_Object_to_mesh_mesh = {
	{NULL, (PropertyRNA *)&rna_Object_to_mesh_depsgraph,
	-1, "mesh", 8388736, 0, 2, 0, 0, "",
	"Mesh created from object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_Object_to_mesh_func = {
	{(FunctionRNA *)&rna_Object_to_mesh_clear_func, (FunctionRNA *)&rna_Object_crazyspace_eval_clear_func,
	NULL,
	{(PropertyRNA *)&rna_Object_to_mesh_preserve_all_data_layers, (PropertyRNA *)&rna_Object_to_mesh_mesh}},
	"to_mesh", 16, "Create a Mesh data-block from the current state of the object. The object owns the data-block. To force free it use to_mesh_clear(). The result is temporary and can not be used by objects from the main database",
	Object_to_mesh_call,
	(PropertyRNA *)&rna_Object_to_mesh_mesh
};

FunctionRNA rna_Object_to_mesh_clear_func = {
	{(FunctionRNA *)&rna_Object_to_curve_func, (FunctionRNA *)&rna_Object_to_mesh_func,
	NULL,
	{NULL, NULL}},
	"to_mesh_clear", 0, "Clears mesh data-block created by to_mesh()",
	Object_to_mesh_clear_call,
	NULL
};

PointerPropertyRNA rna_Object_to_curve_depsgraph = {
	{(PropertyRNA *)&rna_Object_to_curve_apply_modifiers, NULL,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "Dependency Graph",
	"Evaluated dependency graph",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

BoolPropertyRNA rna_Object_to_curve_apply_modifiers = {
	{(PropertyRNA *)&rna_Object_to_curve_curve, (PropertyRNA *)&rna_Object_to_curve_depsgraph,
	-1, "apply_modifiers", 3, 0, 0, 0, 0, "",
	"Apply the deform modifiers on the control points of the curve. This is only supported for curve objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_to_curve_curve = {
	{NULL, (PropertyRNA *)&rna_Object_to_curve_apply_modifiers,
	-1, "curve", 8388736, 0, 2, 0, 0, "",
	"Curve created from object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Curve
};

FunctionRNA rna_Object_to_curve_func = {
	{(FunctionRNA *)&rna_Object_to_curve_clear_func, (FunctionRNA *)&rna_Object_to_mesh_clear_func,
	NULL,
	{(PropertyRNA *)&rna_Object_to_curve_depsgraph, (PropertyRNA *)&rna_Object_to_curve_curve}},
	"to_curve", 16, "Create a Curve data-block from the current state of the object. This only works for curve and text objects. The object owns the data-block. To force free it, use to_curve_clear(). The result is temporary and can not be used by objects from the main database",
	Object_to_curve_call,
	(PropertyRNA *)&rna_Object_to_curve_curve
};

FunctionRNA rna_Object_to_curve_clear_func = {
	{(FunctionRNA *)&rna_Object_find_armature_func, (FunctionRNA *)&rna_Object_to_curve_func,
	NULL,
	{NULL, NULL}},
	"to_curve_clear", 0, "Clears curve data-block created by to_curve()",
	Object_to_curve_clear_call,
	NULL
};

PointerPropertyRNA rna_Object_find_armature_ob_arm = {
	{NULL, NULL,
	-1, "ob_arm", 8388736, 0, 2, 0, 0, "",
	"Armature object influencing this object or NULL",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_Object_find_armature_func = {
	{(FunctionRNA *)&rna_Object_shape_key_add_func, (FunctionRNA *)&rna_Object_to_curve_clear_func,
	NULL,
	{(PropertyRNA *)&rna_Object_find_armature_ob_arm, (PropertyRNA *)&rna_Object_find_armature_ob_arm}},
	"find_armature", 0, "Find armature influencing this object as a parent or via a modifier",
	Object_find_armature_call,
	(PropertyRNA *)&rna_Object_find_armature_ob_arm
};

StringPropertyRNA rna_Object_shape_key_add_name = {
	{(PropertyRNA *)&rna_Object_shape_key_add_from_mix, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Unique name for the new keyblock",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Key"
};

BoolPropertyRNA rna_Object_shape_key_add_from_mix = {
	{(PropertyRNA *)&rna_Object_shape_key_add_key, (PropertyRNA *)&rna_Object_shape_key_add_name,
	-1, "from_mix", 3, 0, 0, 0, 0, "",
	"Create new shape from existing mix of shapes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Object_shape_key_add_key = {
	{NULL, (PropertyRNA *)&rna_Object_shape_key_add_from_mix,
	-1, "key", 8388608, 0, 6, 0, 0, "",
	"New shape keyblock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ShapeKey
};

FunctionRNA rna_Object_shape_key_add_func = {
	{(FunctionRNA *)&rna_Object_shape_key_remove_func, (FunctionRNA *)&rna_Object_find_armature_func,
	NULL,
	{(PropertyRNA *)&rna_Object_shape_key_add_name, (PropertyRNA *)&rna_Object_shape_key_add_key}},
	"shape_key_add", 24, "Add shape key to this object",
	Object_shape_key_add_call,
	(PropertyRNA *)&rna_Object_shape_key_add_key
};

PointerPropertyRNA rna_Object_shape_key_remove_key = {
	{NULL, NULL,
	-1, "key", 262144, 0, 5, 0, 0, "",
	"Keyblock to be removed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ShapeKey
};

FunctionRNA rna_Object_shape_key_remove_func = {
	{(FunctionRNA *)&rna_Object_shape_key_clear_func, (FunctionRNA *)&rna_Object_shape_key_add_func,
	NULL,
	{(PropertyRNA *)&rna_Object_shape_key_remove_key, (PropertyRNA *)&rna_Object_shape_key_remove_key}},
	"shape_key_remove", 20, "Remove a Shape Key from this object",
	Object_shape_key_remove_call,
	NULL
};

FunctionRNA rna_Object_shape_key_clear_func = {
	{(FunctionRNA *)&rna_Object_ray_cast_func, (FunctionRNA *)&rna_Object_shape_key_remove_func,
	NULL,
	{NULL, NULL}},
	"shape_key_clear", 4, "Remove all Shape Keys from this object",
	Object_shape_key_clear_call,
	NULL
};

static float rna_Object_ray_cast_origin_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_origin = {
	{(PropertyRNA *)&rna_Object_ray_cast_direction, NULL,
	-1, "origin", 3, 0, 1, 0, 0, "",
	"Origin of the ray, in object space",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_origin_default
};

static float rna_Object_ray_cast_direction_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_direction = {
	{(PropertyRNA *)&rna_Object_ray_cast_distance, (PropertyRNA *)&rna_Object_ray_cast_origin,
	-1, "direction", 3, 0, 1, 0, 0, "",
	"Direction of the ray, in object space",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_direction_default
};

FloatPropertyRNA rna_Object_ray_cast_distance = {
	{(PropertyRNA *)&rna_Object_ray_cast_depsgraph, (PropertyRNA *)&rna_Object_ray_cast_direction,
	-1, "distance", 3, 0, 0, 0, 0, "",
	"Maximum distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 170141173319264429905852091742258462720.0000000000f, 0.0f, 170141173319264429905852091742258462720.0000000000f, 1.0f, 3, 170141173319264429905852091742258462720.0000000000f, NULL
};

PointerPropertyRNA rna_Object_ray_cast_depsgraph = {
	{(PropertyRNA *)&rna_Object_ray_cast_result, (PropertyRNA *)&rna_Object_ray_cast_distance,
	-1, "depsgraph", 8388608, 0, 4, 0, 0, "",
	"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

BoolPropertyRNA rna_Object_ray_cast_result = {
	{(PropertyRNA *)&rna_Object_ray_cast_location, (PropertyRNA *)&rna_Object_ray_cast_depsgraph,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether the ray successfully hit the geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Object_ray_cast_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_location = {
	{(PropertyRNA *)&rna_Object_ray_cast_normal, (PropertyRNA *)&rna_Object_ray_cast_result,
	-1, "location", 8388611, 0, 2, 0, 0, "Location",
	"The hit location of this ray cast",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_location_default
};

static float rna_Object_ray_cast_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_normal = {
	{(PropertyRNA *)&rna_Object_ray_cast_index, (PropertyRNA *)&rna_Object_ray_cast_location,
	-1, "normal", 8388611, 0, 2, 0, 0, "Normal",
	"The face normal at the ray cast hit location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_normal_default
};

IntPropertyRNA rna_Object_ray_cast_index = {
	{NULL, (PropertyRNA *)&rna_Object_ray_cast_normal,
	-1, "index", 3, 0, 2, 0, 0, "",
	"The face index, -1 when original data isn\'t available",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Object_ray_cast_func = {
	{(FunctionRNA *)&rna_Object_closest_point_on_mesh_func, (FunctionRNA *)&rna_Object_shape_key_clear_func,
	NULL,
	{(PropertyRNA *)&rna_Object_ray_cast_origin, (PropertyRNA *)&rna_Object_ray_cast_index}},
	"ray_cast", 24, "Cast a ray onto evaluated geometry, in object space (using context\'s or provided depsgraph to get evaluated mesh if needed)",
	Object_ray_cast_call,
	NULL
};

static float rna_Object_closest_point_on_mesh_origin_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_origin = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_distance, NULL,
	-1, "origin", 3, 0, 1, 0, 0, "",
	"Point to find closest geometry from (in object space)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_closest_point_on_mesh_origin_default
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_distance = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_depsgraph, (PropertyRNA *)&rna_Object_closest_point_on_mesh_origin,
	-1, "distance", 3, 0, 0, 0, 0, "",
	"Maximum distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 18446742974197923840.0000000000f, NULL
};

PointerPropertyRNA rna_Object_closest_point_on_mesh_depsgraph = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_result, (PropertyRNA *)&rna_Object_closest_point_on_mesh_distance,
	-1, "depsgraph", 8388608, 0, 4, 0, 0, "",
	"Depsgraph to use to get evaluated data, when called from original object (only needed if current Context\'s depsgraph is not suitable)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

BoolPropertyRNA rna_Object_closest_point_on_mesh_result = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_location, (PropertyRNA *)&rna_Object_closest_point_on_mesh_depsgraph,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether closest point on geometry was found",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Object_closest_point_on_mesh_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_location = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_normal, (PropertyRNA *)&rna_Object_closest_point_on_mesh_result,
	-1, "location", 8388611, 0, 2, 0, 0, "Location",
	"The location on the object closest to the point",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_closest_point_on_mesh_location_default
};

static float rna_Object_closest_point_on_mesh_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_closest_point_on_mesh_normal = {
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_index, (PropertyRNA *)&rna_Object_closest_point_on_mesh_location,
	-1, "normal", 8388611, 0, 2, 0, 0, "Normal",
	"The face normal at the closest point",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_closest_point_on_mesh_normal_default
};

IntPropertyRNA rna_Object_closest_point_on_mesh_index = {
	{NULL, (PropertyRNA *)&rna_Object_closest_point_on_mesh_normal,
	-1, "index", 3, 0, 2, 0, 0, "",
	"The face index, -1 when original data isn\'t available",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Object_closest_point_on_mesh_func = {
	{(FunctionRNA *)&rna_Object_is_modified_func, (FunctionRNA *)&rna_Object_ray_cast_func,
	NULL,
	{(PropertyRNA *)&rna_Object_closest_point_on_mesh_origin, (PropertyRNA *)&rna_Object_closest_point_on_mesh_index}},
	"closest_point_on_mesh", 24, "Find the nearest point on evaluated geometry, in object space (using context\'s or provided depsgraph to get evaluated mesh if needed)",
	Object_closest_point_on_mesh_call,
	NULL
};

PointerPropertyRNA rna_Object_is_modified_scene = {
	{(PropertyRNA *)&rna_Object_is_modified_settings, NULL,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"Scene in which to check the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

static const EnumPropertyItem rna_Object_is_modified_settings_items[3] = {
	{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{2, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_is_modified_settings = {
	{(PropertyRNA *)&rna_Object_is_modified_result, (PropertyRNA *)&rna_Object_is_modified_scene,
	-1, "settings", 3, 0, 1, 0, 0, "",
	"Modifier settings to apply",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_Object_is_modified_settings_items, 2, 1
};

BoolPropertyRNA rna_Object_is_modified_result = {
	{NULL, (PropertyRNA *)&rna_Object_is_modified_settings,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether the object is modified",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_is_modified_func = {
	{(FunctionRNA *)&rna_Object_is_deform_modified_func, (FunctionRNA *)&rna_Object_closest_point_on_mesh_func,
	NULL,
	{(PropertyRNA *)&rna_Object_is_modified_scene, (PropertyRNA *)&rna_Object_is_modified_result}},
	"is_modified", 0, "Determine if this object is modified from the base mesh data",
	Object_is_modified_call,
	(PropertyRNA *)&rna_Object_is_modified_result
};

PointerPropertyRNA rna_Object_is_deform_modified_scene = {
	{(PropertyRNA *)&rna_Object_is_deform_modified_settings, NULL,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"Scene in which to check the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

static const EnumPropertyItem rna_Object_is_deform_modified_settings_items[3] = {
	{1, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{2, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_is_deform_modified_settings = {
	{(PropertyRNA *)&rna_Object_is_deform_modified_result, (PropertyRNA *)&rna_Object_is_deform_modified_scene,
	-1, "settings", 3, 0, 1, 0, 0, "",
	"Modifier settings to apply",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_Object_is_deform_modified_settings_items, 2, 1
};

BoolPropertyRNA rna_Object_is_deform_modified_result = {
	{NULL, (PropertyRNA *)&rna_Object_is_deform_modified_settings,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Whether the object is deform-modified",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_is_deform_modified_func = {
	{(FunctionRNA *)&rna_Object_update_from_editmode_func, (FunctionRNA *)&rna_Object_is_modified_func,
	NULL,
	{(PropertyRNA *)&rna_Object_is_deform_modified_scene, (PropertyRNA *)&rna_Object_is_deform_modified_result}},
	"is_deform_modified", 0, "Determine if this object is modified by a deformation from the base mesh data",
	Object_is_deform_modified_call,
	(PropertyRNA *)&rna_Object_is_deform_modified_result
};

BoolPropertyRNA rna_Object_update_from_editmode_result = {
	{NULL, NULL,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Success",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_update_from_editmode_func = {
	{(FunctionRNA *)&rna_Object_cache_release_func, (FunctionRNA *)&rna_Object_is_deform_modified_func,
	NULL,
	{(PropertyRNA *)&rna_Object_update_from_editmode_result, (PropertyRNA *)&rna_Object_update_from_editmode_result}},
	"update_from_editmode", 4, "Load the objects edit-mode data into the object data",
	Object_update_from_editmode_call,
	(PropertyRNA *)&rna_Object_update_from_editmode_result
};

FunctionRNA rna_Object_cache_release_func = {
	{(FunctionRNA *)&rna_Object_generate_gpencil_strokes_func, (FunctionRNA *)&rna_Object_update_from_editmode_func,
	NULL,
	{NULL, NULL}},
	"cache_release", 0, "Release memory used by caches associated with this object. Intended to be used by render engines only",
	Object_cache_release_call,
	NULL
};

PointerPropertyRNA rna_Object_generate_gpencil_strokes_grease_pencil_object = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_use_collections, NULL,
	-1, "grease_pencil_object", 8650880, 0, 1, 0, 0, "",
	"Grease Pencil object used to create new strokes",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_Object_generate_gpencil_strokes_use_collections = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_scale_thickness, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_grease_pencil_object,
	-1, "use_collections", 3, 0, 0, 0, 0, "",
	"Use Collections",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_Object_generate_gpencil_strokes_scale_thickness = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_sample, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_use_collections,
	-1, "scale_thickness", 3, 0, 0, 0, 0, "",
	"Thickness scaling factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Object_generate_gpencil_strokes_sample = {
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_result, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_scale_thickness,
	-1, "sample", 3, 0, 0, 0, 0, "",
	"Sample distance, zero to disable",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Object_generate_gpencil_strokes_result = {
	{NULL, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_sample,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Result",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_generate_gpencil_strokes_func = {
	{NULL, (FunctionRNA *)&rna_Object_cache_release_func,
	NULL,
	{(PropertyRNA *)&rna_Object_generate_gpencil_strokes_grease_pencil_object, (PropertyRNA *)&rna_Object_generate_gpencil_strokes_result}},
	"generate_gpencil_strokes", 24, "Convert a curve object to grease pencil strokes.",
	Object_generate_gpencil_strokes_call,
	(PropertyRNA *)&rna_Object_generate_gpencil_strokes_result
};

StructRNA RNA_Object = {
	{(ContainerRNA *)&RNA_ObjectModifiers, (ContainerRNA *)&RNA_NodeInstanceHash,
	NULL,
	{(PropertyRNA *)&rna_Object_data, (PropertyRNA *)&rna_Object_motion_path}},
	"Object", NULL, NULL, 517, NULL, "Object",
	"Object data-block defining an object in a scene",
	"*", 159,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Object_select_get_func, (FunctionRNA *)&rna_Object_generate_gpencil_strokes_func}
};

/* Object Modifiers */
CollectionPropertyRNA rna_ObjectModifiers_rna_properties = {
	{(PropertyRNA *)&rna_ObjectModifiers_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectModifiers_rna_properties_begin, ObjectModifiers_rna_properties_next, ObjectModifiers_rna_properties_end, ObjectModifiers_rna_properties_get, NULL, NULL, ObjectModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ObjectModifiers_rna_type = {
	{(PropertyRNA *)&rna_ObjectModifiers_active, (PropertyRNA *)&rna_ObjectModifiers_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ObjectModifiers_active = {
	{NULL, (PropertyRNA *)&rna_ObjectModifiers_rna_type,
	-1, "active", 1082130433, 1, 0, 0, 0, "Active Modifier",
	"The active modifier in the list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectModifiers_active_get, ObjectModifiers_active_set, NULL, NULL,&RNA_Modifier
};

StringPropertyRNA rna_ObjectModifiers_new_name = {
	{(PropertyRNA *)&rna_ObjectModifiers_new_type, NULL,
	-1, "name", 262145, 1, 1, 0, 0, "",
	"New name for the modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Name"
};

EnumPropertyRNA rna_ObjectModifiers_new_type = {
	{(PropertyRNA *)&rna_ObjectModifiers_new_modifier, (PropertyRNA *)&rna_ObjectModifiers_new_name,
	-1, "type", 3, 1, 1, 0, 0, "",
	"Modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_object_modifier_type_items, 61, 1
};

PointerPropertyRNA rna_ObjectModifiers_new_modifier = {
	{NULL, (PropertyRNA *)&rna_ObjectModifiers_new_type,
	-1, "modifier", 8388608, 1, 2, 0, 0, "",
	"Newly created modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Modifier
};

FunctionRNA rna_ObjectModifiers_new_func = {
	{(FunctionRNA *)&rna_ObjectModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ObjectModifiers_new_name, (PropertyRNA *)&rna_ObjectModifiers_new_modifier}},
	"new", 24, "Add a new modifier",
	ObjectModifiers_new_call,
	(PropertyRNA *)&rna_ObjectModifiers_new_modifier
};

PointerPropertyRNA rna_ObjectModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 262144, 1, 5, 0, 0, "",
	"Modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Modifier
};

FunctionRNA rna_ObjectModifiers_remove_func = {
	{(FunctionRNA *)&rna_ObjectModifiers_clear_func, (FunctionRNA *)&rna_ObjectModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_ObjectModifiers_remove_modifier, (PropertyRNA *)&rna_ObjectModifiers_remove_modifier}},
	"remove", 24, "Remove an existing modifier from the object",
	ObjectModifiers_remove_call,
	NULL
};

FunctionRNA rna_ObjectModifiers_clear_func = {
	{NULL, (FunctionRNA *)&rna_ObjectModifiers_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Remove all modifiers from the object",
	ObjectModifiers_clear_call,
	NULL
};

StructRNA RNA_ObjectModifiers = {
	{(ContainerRNA *)&RNA_ObjectGpencilModifiers, (ContainerRNA *)&RNA_Object,
	NULL,
	{(PropertyRNA *)&rna_ObjectModifiers_rna_properties, (PropertyRNA *)&rna_ObjectModifiers_active}},
	"ObjectModifiers", NULL, NULL, 516, NULL, "Object Modifiers",
	"Collection of object modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ObjectModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ObjectModifiers_new_func, (FunctionRNA *)&rna_ObjectModifiers_clear_func}
};

/* Object Grease Pencil Modifiers */
CollectionPropertyRNA rna_ObjectGpencilModifiers_rna_properties = {
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectGpencilModifiers_rna_properties_begin, ObjectGpencilModifiers_rna_properties_next, ObjectGpencilModifiers_rna_properties_end, ObjectGpencilModifiers_rna_properties_get, NULL, NULL, ObjectGpencilModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ObjectGpencilModifiers_rna_type = {
	{NULL, (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectGpencilModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ObjectGpencilModifiers_new_name = {
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_new_type, NULL,
	-1, "name", 262145, 1, 1, 0, 0, "",
	"New name for the greasepencil_modifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Name"
};

EnumPropertyRNA rna_ObjectGpencilModifiers_new_type = {
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_new_greasepencil_modifier, (PropertyRNA *)&rna_ObjectGpencilModifiers_new_name,
	-1, "type", 3, 1, 1, 0, 0, "",
	"Modifier type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_object_greasepencil_modifier_type_items, 29, 1
};

PointerPropertyRNA rna_ObjectGpencilModifiers_new_greasepencil_modifier = {
	{NULL, (PropertyRNA *)&rna_ObjectGpencilModifiers_new_type,
	-1, "greasepencil_modifier", 8388608, 1, 2, 0, 0, "",
	"Newly created modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GpencilModifier
};

FunctionRNA rna_ObjectGpencilModifiers_new_func = {
	{(FunctionRNA *)&rna_ObjectGpencilModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_new_name, (PropertyRNA *)&rna_ObjectGpencilModifiers_new_greasepencil_modifier}},
	"new", 24, "Add a new greasepencil_modifier",
	ObjectGpencilModifiers_new_call,
	(PropertyRNA *)&rna_ObjectGpencilModifiers_new_greasepencil_modifier
};

PointerPropertyRNA rna_ObjectGpencilModifiers_remove_greasepencil_modifier = {
	{NULL, NULL,
	-1, "greasepencil_modifier", 262144, 1, 5, 0, 0, "",
	"Modifier to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GpencilModifier
};

FunctionRNA rna_ObjectGpencilModifiers_remove_func = {
	{(FunctionRNA *)&rna_ObjectGpencilModifiers_clear_func, (FunctionRNA *)&rna_ObjectGpencilModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_remove_greasepencil_modifier, (PropertyRNA *)&rna_ObjectGpencilModifiers_remove_greasepencil_modifier}},
	"remove", 24, "Remove an existing greasepencil_modifier from the object",
	ObjectGpencilModifiers_remove_call,
	NULL
};

FunctionRNA rna_ObjectGpencilModifiers_clear_func = {
	{NULL, (FunctionRNA *)&rna_ObjectGpencilModifiers_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Remove all grease pencil modifiers from the object",
	ObjectGpencilModifiers_clear_call,
	NULL
};

StructRNA RNA_ObjectGpencilModifiers = {
	{(ContainerRNA *)&RNA_ObjectShaderFx, (ContainerRNA *)&RNA_ObjectModifiers,
	NULL,
	{(PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties, (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_type}},
	"ObjectGpencilModifiers", NULL, NULL, 516, NULL, "Object Grease Pencil Modifiers",
	"Collection of object grease pencil modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ObjectGpencilModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ObjectGpencilModifiers_new_func, (FunctionRNA *)&rna_ObjectGpencilModifiers_clear_func}
};

/* Object Shader Effects */
CollectionPropertyRNA rna_ObjectShaderFx_rna_properties = {
	{(PropertyRNA *)&rna_ObjectShaderFx_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectShaderFx_rna_properties_begin, ObjectShaderFx_rna_properties_next, ObjectShaderFx_rna_properties_end, ObjectShaderFx_rna_properties_get, NULL, NULL, ObjectShaderFx_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ObjectShaderFx_rna_type = {
	{NULL, (PropertyRNA *)&rna_ObjectShaderFx_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectShaderFx_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ObjectShaderFx_new_name = {
	{(PropertyRNA *)&rna_ObjectShaderFx_new_type, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the effect",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Name"
};

EnumPropertyRNA rna_ObjectShaderFx_new_type = {
	{(PropertyRNA *)&rna_ObjectShaderFx_new_shader_fx, (PropertyRNA *)&rna_ObjectShaderFx_new_name,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Effect type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_object_shaderfx_type_items, 9, 1
};

PointerPropertyRNA rna_ObjectShaderFx_new_shader_fx = {
	{NULL, (PropertyRNA *)&rna_ObjectShaderFx_new_type,
	-1, "shader_fx", 8388608, 0, 2, 0, 0, "",
	"Newly created effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ShaderFx
};

FunctionRNA rna_ObjectShaderFx_new_func = {
	{(FunctionRNA *)&rna_ObjectShaderFx_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ObjectShaderFx_new_name, (PropertyRNA *)&rna_ObjectShaderFx_new_shader_fx}},
	"new", 24, "Add a new shader fx",
	ObjectShaderFx_new_call,
	(PropertyRNA *)&rna_ObjectShaderFx_new_shader_fx
};

PointerPropertyRNA rna_ObjectShaderFx_remove_shader_fx = {
	{NULL, NULL,
	-1, "shader_fx", 262144, 0, 5, 0, 0, "",
	"Effect to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ShaderFx
};

FunctionRNA rna_ObjectShaderFx_remove_func = {
	{(FunctionRNA *)&rna_ObjectShaderFx_clear_func, (FunctionRNA *)&rna_ObjectShaderFx_new_func,
	NULL,
	{(PropertyRNA *)&rna_ObjectShaderFx_remove_shader_fx, (PropertyRNA *)&rna_ObjectShaderFx_remove_shader_fx}},
	"remove", 24, "Remove an existing effect from the object",
	ObjectShaderFx_remove_call,
	NULL
};

FunctionRNA rna_ObjectShaderFx_clear_func = {
	{NULL, (FunctionRNA *)&rna_ObjectShaderFx_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Remove all effects from the object",
	ObjectShaderFx_clear_call,
	NULL
};

StructRNA RNA_ObjectShaderFx = {
	{(ContainerRNA *)&RNA_ObjectConstraints, (ContainerRNA *)&RNA_ObjectGpencilModifiers,
	NULL,
	{(PropertyRNA *)&rna_ObjectShaderFx_rna_properties, (PropertyRNA *)&rna_ObjectShaderFx_rna_type}},
	"ObjectShaderFx", NULL, NULL, 516, NULL, "Object Shader Effects",
	"Collection of object effects",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ObjectShaderFx_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ObjectShaderFx_new_func, (FunctionRNA *)&rna_ObjectShaderFx_clear_func}
};

/* Object Constraints */
CollectionPropertyRNA rna_ObjectConstraints_rna_properties = {
	{(PropertyRNA *)&rna_ObjectConstraints_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectConstraints_rna_properties_begin, ObjectConstraints_rna_properties_next, ObjectConstraints_rna_properties_end, ObjectConstraints_rna_properties_get, NULL, NULL, ObjectConstraints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ObjectConstraints_rna_type = {
	{(PropertyRNA *)&rna_ObjectConstraints_active, (PropertyRNA *)&rna_ObjectConstraints_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectConstraints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ObjectConstraints_active = {
	{NULL, (PropertyRNA *)&rna_ObjectConstraints_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Constraint",
	"Active Object constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectConstraints_active_get, ObjectConstraints_active_set, NULL, NULL,&RNA_Constraint
};

EnumPropertyRNA rna_ObjectConstraints_new_type = {
	{(PropertyRNA *)&rna_ObjectConstraints_new_constraint, NULL,
	-1, "type", 3, 1, 1, 0, 0, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_constraint_type_items, 32, 1
};

PointerPropertyRNA rna_ObjectConstraints_new_constraint = {
	{NULL, (PropertyRNA *)&rna_ObjectConstraints_new_type,
	-1, "constraint", 8388608, 1, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_new_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ObjectConstraints_new_type, (PropertyRNA *)&rna_ObjectConstraints_new_constraint}},
	"new", 4, "Add a new constraint to this object",
	ObjectConstraints_new_call,
	(PropertyRNA *)&rna_ObjectConstraints_new_constraint
};

PointerPropertyRNA rna_ObjectConstraints_remove_constraint = {
	{NULL, NULL,
	-1, "constraint", 262144, 1, 5, 0, 0, "",
	"Removed constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_remove_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_clear_func, (FunctionRNA *)&rna_ObjectConstraints_new_func,
	NULL,
	{(PropertyRNA *)&rna_ObjectConstraints_remove_constraint, (PropertyRNA *)&rna_ObjectConstraints_remove_constraint}},
	"remove", 20, "Remove a constraint from this object",
	ObjectConstraints_remove_call,
	NULL
};

FunctionRNA rna_ObjectConstraints_clear_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_move_func, (FunctionRNA *)&rna_ObjectConstraints_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 4, "Remove all constraint from this object",
	ObjectConstraints_clear_call,
	NULL
};

IntPropertyRNA rna_ObjectConstraints_move_from_index = {
	{(PropertyRNA *)&rna_ObjectConstraints_move_to_index, NULL,
	-1, "from_index", 3, 1, 1, 0, 0, "From Index",
	"Index to move",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, INT_MIN, INT_MAX, 1, -1, NULL
};

IntPropertyRNA rna_ObjectConstraints_move_to_index = {
	{NULL, (PropertyRNA *)&rna_ObjectConstraints_move_from_index,
	-1, "to_index", 3, 1, 1, 0, 0, "To Index",
	"Target index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, INT_MIN, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_ObjectConstraints_move_func = {
	{(FunctionRNA *)&rna_ObjectConstraints_copy_func, (FunctionRNA *)&rna_ObjectConstraints_clear_func,
	NULL,
	{(PropertyRNA *)&rna_ObjectConstraints_move_from_index, (PropertyRNA *)&rna_ObjectConstraints_move_to_index}},
	"move", 20, "Move a constraint to a different position",
	ObjectConstraints_move_call,
	NULL
};

PointerPropertyRNA rna_ObjectConstraints_copy_constraint = {
	{(PropertyRNA *)&rna_ObjectConstraints_copy_new_constraint, NULL,
	-1, "constraint", 262144, 1, 5, 0, 0, "",
	"Constraint to copy - may belong to a different object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

PointerPropertyRNA rna_ObjectConstraints_copy_new_constraint = {
	{NULL, (PropertyRNA *)&rna_ObjectConstraints_copy_constraint,
	-1, "new_constraint", 8388608, 1, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_copy_func = {
	{NULL, (FunctionRNA *)&rna_ObjectConstraints_move_func,
	NULL,
	{(PropertyRNA *)&rna_ObjectConstraints_copy_constraint, (PropertyRNA *)&rna_ObjectConstraints_copy_new_constraint}},
	"copy", 4, "Add a new constraint that is a copy of the given one",
	ObjectConstraints_copy_call,
	(PropertyRNA *)&rna_ObjectConstraints_copy_new_constraint
};

StructRNA RNA_ObjectConstraints = {
	{(ContainerRNA *)&RNA_VertexGroups, (ContainerRNA *)&RNA_ObjectShaderFx,
	NULL,
	{(PropertyRNA *)&rna_ObjectConstraints_rna_properties, (PropertyRNA *)&rna_ObjectConstraints_active}},
	"ObjectConstraints", NULL, NULL, 516, NULL, "Object Constraints",
	"Collection of object constraints",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ObjectConstraints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ObjectConstraints_new_func, (FunctionRNA *)&rna_ObjectConstraints_copy_func}
};

/* Vertex Groups */
CollectionPropertyRNA rna_VertexGroups_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroups_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroups_rna_properties_begin, VertexGroups_rna_properties_next, VertexGroups_rna_properties_end, VertexGroups_rna_properties_get, NULL, NULL, VertexGroups_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexGroups_rna_type = {
	{(PropertyRNA *)&rna_VertexGroups_active, (PropertyRNA *)&rna_VertexGroups_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_VertexGroups_active = {
	{(PropertyRNA *)&rna_VertexGroups_active_index, (PropertyRNA *)&rna_VertexGroups_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Vertex Group",
	"Vertex groups of the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 291176448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroups_active_get, VertexGroups_active_set, NULL, NULL,&RNA_VertexGroup
};

IntPropertyRNA rna_VertexGroups_active_index = {
	{NULL, (PropertyRNA *)&rna_VertexGroups_active,
	-1, "active_index", 1, 1, 0, 0, 0, "Active Vertex Group Index",
	"Active index in vertex group array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 291176448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroups_active_index_get, VertexGroups_active_index_set, NULL, NULL, rna_Object_active_vertex_group_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_VertexGroups_new_name = {
	{(PropertyRNA *)&rna_VertexGroups_new_group, NULL,
	-1, "name", 262145, 1, 0, 0, 0, "",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Group"
};

PointerPropertyRNA rna_VertexGroups_new_group = {
	{NULL, (PropertyRNA *)&rna_VertexGroups_new_name,
	-1, "group", 8388608, 1, 2, 0, 0, "",
	"New vertex group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VertexGroup
};

FunctionRNA rna_VertexGroups_new_func = {
	{(FunctionRNA *)&rna_VertexGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertexGroups_new_name, (PropertyRNA *)&rna_VertexGroups_new_group}},
	"new", 20, "Add vertex group to object",
	VertexGroups_new_call,
	(PropertyRNA *)&rna_VertexGroups_new_group
};

PointerPropertyRNA rna_VertexGroups_remove_group = {
	{NULL, NULL,
	-1, "group", 262144, 1, 5, 0, 0, "",
	"Vertex group to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VertexGroup
};

FunctionRNA rna_VertexGroups_remove_func = {
	{(FunctionRNA *)&rna_VertexGroups_clear_func, (FunctionRNA *)&rna_VertexGroups_new_func,
	NULL,
	{(PropertyRNA *)&rna_VertexGroups_remove_group, (PropertyRNA *)&rna_VertexGroups_remove_group}},
	"remove", 20, "Delete vertex group from object",
	VertexGroups_remove_call,
	NULL
};

FunctionRNA rna_VertexGroups_clear_func = {
	{NULL, (FunctionRNA *)&rna_VertexGroups_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 20, "Delete all vertex groups from object",
	VertexGroups_clear_call,
	NULL
};

StructRNA RNA_VertexGroups = {
	{(ContainerRNA *)&RNA_FaceMaps, (ContainerRNA *)&RNA_ObjectConstraints,
	NULL,
	{(PropertyRNA *)&rna_VertexGroups_rna_properties, (PropertyRNA *)&rna_VertexGroups_active_index}},
	"VertexGroups", NULL, NULL, 516, NULL, "Vertex Groups",
	"Collection of vertex groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VertexGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertexGroups_new_func, (FunctionRNA *)&rna_VertexGroups_clear_func}
};

/* Face Maps */
CollectionPropertyRNA rna_FaceMaps_rna_properties = {
	{(PropertyRNA *)&rna_FaceMaps_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMaps_rna_properties_begin, FaceMaps_rna_properties_next, FaceMaps_rna_properties_end, FaceMaps_rna_properties_get, NULL, NULL, FaceMaps_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FaceMaps_rna_type = {
	{(PropertyRNA *)&rna_FaceMaps_active, (PropertyRNA *)&rna_FaceMaps_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMaps_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FaceMaps_active = {
	{(PropertyRNA *)&rna_FaceMaps_active_index, (PropertyRNA *)&rna_FaceMaps_rna_type,
	-1, "active", 8388608, 1, 0, 0, 0, "Active Face Map",
	"Face maps of the object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 291176448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMaps_active_get, NULL, NULL, NULL,&RNA_FaceMap
};

IntPropertyRNA rna_FaceMaps_active_index = {
	{NULL, (PropertyRNA *)&rna_FaceMaps_active,
	-1, "active_index", 1, 1, 0, 0, 0, "Active Face Map Index",
	"Active index in face map array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 291176448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMaps_active_index_get, FaceMaps_active_index_set, NULL, NULL, rna_Object_active_face_map_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

StringPropertyRNA rna_FaceMaps_new_name = {
	{(PropertyRNA *)&rna_FaceMaps_new_fmap, NULL,
	-1, "name", 262145, 1, 0, 0, 0, "",
	"face map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Map"
};

PointerPropertyRNA rna_FaceMaps_new_fmap = {
	{NULL, (PropertyRNA *)&rna_FaceMaps_new_name,
	-1, "fmap", 8388608, 1, 2, 0, 0, "",
	"New face map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FaceMap
};

FunctionRNA rna_FaceMaps_new_func = {
	{(FunctionRNA *)&rna_FaceMaps_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FaceMaps_new_name, (PropertyRNA *)&rna_FaceMaps_new_fmap}},
	"new", 0, "Add face map to object",
	FaceMaps_new_call,
	(PropertyRNA *)&rna_FaceMaps_new_fmap
};

PointerPropertyRNA rna_FaceMaps_remove_group = {
	{NULL, NULL,
	-1, "group", 262144, 1, 5, 0, 0, "",
	"Face map to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FaceMap
};

FunctionRNA rna_FaceMaps_remove_func = {
	{(FunctionRNA *)&rna_FaceMaps_clear_func, (FunctionRNA *)&rna_FaceMaps_new_func,
	NULL,
	{(PropertyRNA *)&rna_FaceMaps_remove_group, (PropertyRNA *)&rna_FaceMaps_remove_group}},
	"remove", 16, "Delete vertex group from object",
	FaceMaps_remove_call,
	NULL
};

FunctionRNA rna_FaceMaps_clear_func = {
	{NULL, (FunctionRNA *)&rna_FaceMaps_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Delete all vertex groups from object",
	FaceMaps_clear_call,
	NULL
};

StructRNA RNA_FaceMaps = {
	{(ContainerRNA *)&RNA_ParticleSystems, (ContainerRNA *)&RNA_VertexGroups,
	NULL,
	{(PropertyRNA *)&rna_FaceMaps_rna_properties, (PropertyRNA *)&rna_FaceMaps_active_index}},
	"FaceMaps", NULL, NULL, 516, NULL, "Face Maps",
	"Collection of face maps",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FaceMaps_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FaceMaps_new_func, (FunctionRNA *)&rna_FaceMaps_clear_func}
};

/* Particle Systems */
CollectionPropertyRNA rna_ParticleSystems_rna_properties = {
	{(PropertyRNA *)&rna_ParticleSystems_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystems_rna_properties_begin, ParticleSystems_rna_properties_next, ParticleSystems_rna_properties_end, ParticleSystems_rna_properties_get, NULL, NULL, ParticleSystems_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleSystems_rna_type = {
	{(PropertyRNA *)&rna_ParticleSystems_active, (PropertyRNA *)&rna_ParticleSystems_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystems_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ParticleSystems_active = {
	{(PropertyRNA *)&rna_ParticleSystems_active_index, (PropertyRNA *)&rna_ParticleSystems_rna_type,
	-1, "active", 8388608, 1, 0, 0, 0, "Active Particle System",
	"Active particle system being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystems_active_get, NULL, NULL, NULL,&RNA_ParticleSystem
};

IntPropertyRNA rna_ParticleSystems_active_index = {
	{NULL, (PropertyRNA *)&rna_ParticleSystems_active,
	-1, "active_index", 1, 1, 0, 0, 0, "Active Particle System Index",
	"Index of active particle system slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_particle_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleSystems_active_index_get, ParticleSystems_active_index_set, NULL, NULL, rna_Object_active_particle_system_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_ParticleSystems = {
	{(ContainerRNA *)&RNA_VertexGroup, (ContainerRNA *)&RNA_FaceMaps,
	NULL,
	{(PropertyRNA *)&rna_ParticleSystems_rna_properties, (PropertyRNA *)&rna_ParticleSystems_active_index}},
	"ParticleSystems", NULL, NULL, 516, NULL, "Particle Systems",
	"Collection of particle systems",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleSystems_rna_properties,
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

/* Vertex Group */
CollectionPropertyRNA rna_VertexGroup_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroup_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroup_rna_properties_begin, VertexGroup_rna_properties_next, VertexGroup_rna_properties_end, VertexGroup_rna_properties_get, NULL, NULL, VertexGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexGroup_rna_type = {
	{(PropertyRNA *)&rna_VertexGroup_name, (PropertyRNA *)&rna_VertexGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_VertexGroup_name = {
	{(PropertyRNA *)&rna_VertexGroup_lock_weight, (PropertyRNA *)&rna_VertexGroup_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Vertex group name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Object_internal_update_data_dependency, 291176453, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroup_name_get, VertexGroup_name_length, VertexGroup_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_VertexGroup_lock_weight = {
	{(PropertyRNA *)&rna_VertexGroup_index, (PropertyRNA *)&rna_VertexGroup_name,
	-1, "lock_weight", 1, 0, 0, 4, 0, "",
	"Maintain the relative weights for the group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 291176453, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bDeformGroup, flag), 2, NULL},
	VertexGroup_lock_weight_get, VertexGroup_lock_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_VertexGroup_index = {
	{NULL, (PropertyRNA *)&rna_VertexGroup_lock_weight,
	-1, "index", 0, 0, 0, 0, 0, "Index",
	"Index number of the vertex group",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroup_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static int rna_VertexGroup_add_index_default[1] = {
	0
};

IntPropertyRNA rna_VertexGroup_add_index = {
	{(PropertyRNA *)&rna_VertexGroup_add_weight, NULL,
	-1, "index", 131073, 0, 1, 0, 0, "",
	"List of indices",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_VertexGroup_add_index_default
};

FloatPropertyRNA rna_VertexGroup_add_weight = {
	{(PropertyRNA *)&rna_VertexGroup_add_type, (PropertyRNA *)&rna_VertexGroup_add_index,
	-1, "weight", 1, 0, 1, 0, 0, "",
	"Vertex weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_VertexGroup_add_type_items[4] = {
	{1, "REPLACE", 0, "Replace", "Replace"},
	{2, "ADD", 0, "Add", "Add"},
	{3, "SUBTRACT", 0, "Subtract", "Subtract"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexGroup_add_type = {
	{NULL, (PropertyRNA *)&rna_VertexGroup_add_weight,
	-1, "type", 1, 0, 1, 0, 0, "",
	"Vertex assign mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_VertexGroup_add_type_items, 3, 1
};

FunctionRNA rna_VertexGroup_add_func = {
	{(FunctionRNA *)&rna_VertexGroup_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertexGroup_add_index, (PropertyRNA *)&rna_VertexGroup_add_type}},
	"add", 2064, "Add vertices to the group",
	VertexGroup_add_call,
	NULL
};

static int rna_VertexGroup_remove_index_default[1] = {
	0
};

IntPropertyRNA rna_VertexGroup_remove_index = {
	{NULL, NULL,
	-1, "index", 131073, 0, 1, 0, 0, "",
	"List of indices",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_VertexGroup_remove_index_default
};

FunctionRNA rna_VertexGroup_remove_func = {
	{(FunctionRNA *)&rna_VertexGroup_weight_func, (FunctionRNA *)&rna_VertexGroup_add_func,
	NULL,
	{(PropertyRNA *)&rna_VertexGroup_remove_index, (PropertyRNA *)&rna_VertexGroup_remove_index}},
	"remove", 2064, "Remove vertices from the group",
	VertexGroup_remove_call,
	NULL
};

IntPropertyRNA rna_VertexGroup_weight_index = {
	{(PropertyRNA *)&rna_VertexGroup_weight_weight, NULL,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"The index of the vertex",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_VertexGroup_weight_weight = {
	{NULL, (PropertyRNA *)&rna_VertexGroup_weight_index,
	-1, "weight", 1, 0, 2, 0, 0, "",
	"Vertex weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_VertexGroup_weight_func = {
	{NULL, (FunctionRNA *)&rna_VertexGroup_remove_func,
	NULL,
	{(PropertyRNA *)&rna_VertexGroup_weight_index, (PropertyRNA *)&rna_VertexGroup_weight_weight}},
	"weight", 2064, "Get a vertex weight from the group",
	VertexGroup_weight_call,
	(PropertyRNA *)&rna_VertexGroup_weight_weight
};

StructRNA RNA_VertexGroup = {
	{(ContainerRNA *)&RNA_FaceMap, (ContainerRNA *)&RNA_ParticleSystems,
	NULL,
	{(PropertyRNA *)&rna_VertexGroup_rna_properties, (PropertyRNA *)&rna_VertexGroup_index}},
	"VertexGroup", NULL, NULL, 516, NULL, "Vertex Group",
	"Group of vertices, used for armature deform and other purposes",
	"*", 201,
	(PropertyRNA *)&rna_VertexGroup_name, (PropertyRNA *)&rna_VertexGroup_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertexGroup_add_func, (FunctionRNA *)&rna_VertexGroup_weight_func}
};

/* Face Map */
CollectionPropertyRNA rna_FaceMap_rna_properties = {
	{(PropertyRNA *)&rna_FaceMap_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMap_rna_properties_begin, FaceMap_rna_properties_next, FaceMap_rna_properties_end, FaceMap_rna_properties_get, NULL, NULL, FaceMap_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FaceMap_rna_type = {
	{(PropertyRNA *)&rna_FaceMap_name, (PropertyRNA *)&rna_FaceMap_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_FaceMap_name = {
	{(PropertyRNA *)&rna_FaceMap_select, (PropertyRNA *)&rna_FaceMap_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Face map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Object_internal_update_data, 291176453, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMap_name_get, FaceMap_name_length, FaceMap_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_FaceMap_select = {
	{(PropertyRNA *)&rna_FaceMap_index, (PropertyRNA *)&rna_FaceMap_name,
	-1, "select", 1, 0, 0, 0, 0, "Select",
	"Face map selection state (for tools to use)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMap_select_get, FaceMap_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_FaceMap_index = {
	{NULL, (PropertyRNA *)&rna_FaceMap_select,
	-1, "index", 0, 0, 0, 0, 0, "Index",
	"Index number of the face map",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FaceMap_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static int rna_FaceMap_add_index_default[1] = {
	0
};

IntPropertyRNA rna_FaceMap_add_index = {
	{NULL, NULL,
	-1, "index", 131073, 0, 1, 0, 0, "",
	"List of indices",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_FaceMap_add_index_default
};

FunctionRNA rna_FaceMap_add_func = {
	{(FunctionRNA *)&rna_FaceMap_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FaceMap_add_index, (PropertyRNA *)&rna_FaceMap_add_index}},
	"add", 2064, "Add faces to the face-map",
	FaceMap_add_call,
	NULL
};

static int rna_FaceMap_remove_index_default[1] = {
	0
};

IntPropertyRNA rna_FaceMap_remove_index = {
	{NULL, NULL,
	-1, "index", 131073, 0, 1, 0, 0, "",
	"List of indices",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_FaceMap_remove_index_default
};

FunctionRNA rna_FaceMap_remove_func = {
	{NULL, (FunctionRNA *)&rna_FaceMap_add_func,
	NULL,
	{(PropertyRNA *)&rna_FaceMap_remove_index, (PropertyRNA *)&rna_FaceMap_remove_index}},
	"remove", 2064, "Remove faces from the face-map",
	FaceMap_remove_call,
	NULL
};

StructRNA RNA_FaceMap = {
	{(ContainerRNA *)&RNA_MaterialSlot, (ContainerRNA *)&RNA_VertexGroup,
	NULL,
	{(PropertyRNA *)&rna_FaceMap_rna_properties, (PropertyRNA *)&rna_FaceMap_index}},
	"FaceMap", NULL, NULL, 516, NULL, "Face Map",
	"Group of faces, each face can only be part of one map",
	"*", 481,
	(PropertyRNA *)&rna_FaceMap_name, (PropertyRNA *)&rna_FaceMap_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FaceMap_add_func, (FunctionRNA *)&rna_FaceMap_remove_func}
};

/* Material Slot */
CollectionPropertyRNA rna_MaterialSlot_rna_properties = {
	{(PropertyRNA *)&rna_MaterialSlot_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialSlot_rna_properties_begin, MaterialSlot_rna_properties_next, MaterialSlot_rna_properties_end, MaterialSlot_rna_properties_get, NULL, NULL, MaterialSlot_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialSlot_rna_type = {
	{(PropertyRNA *)&rna_MaterialSlot_link, (PropertyRNA *)&rna_MaterialSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_MaterialSlot_link_items[3] = {
	{1, "OBJECT", 0, "Object", ""},
	{0, "DATA", 0, "Data", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialSlot_link = {
	{(PropertyRNA *)&rna_MaterialSlot_material, (PropertyRNA *)&rna_MaterialSlot_rna_type,
	-1, "link", 1, 1, 0, 0, 0, "Link",
	"Link material to object or the object\'s data",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialSlot_link_get, MaterialSlot_link_set, NULL, NULL, NULL, rna_MaterialSlot_link_items, 2, 0
};

PointerPropertyRNA rna_MaterialSlot_material = {
	{(PropertyRNA *)&rna_MaterialSlot_slot_index, (PropertyRNA *)&rna_MaterialSlot_link,
	-1, "material", 8388737, 1, 0, 0, 0, "Material",
	"Material data-block used by this material slot",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 102170624, rna_MaterialSlot_material_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialSlot_material_get, MaterialSlot_material_set, NULL, rna_MaterialSlot_material_poll,&RNA_Material
};

IntPropertyRNA rna_MaterialSlot_slot_index = {
	{(PropertyRNA *)&rna_MaterialSlot_name, (PropertyRNA *)&rna_MaterialSlot_material,
	-1, "slot_index", 0, 1, 0, 0, 0, "slot_index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialSlot_slot_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_MaterialSlot_name = {
	{NULL, (PropertyRNA *)&rna_MaterialSlot_slot_index,
	-1, "name", 262144, 4, 0, 0, 0, "Name",
	"Material slot name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialSlot_name_get, MaterialSlot_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StructRNA RNA_MaterialSlot = {
	{(ContainerRNA *)&RNA_ObjectDisplay, (ContainerRNA *)&RNA_FaceMap,
	NULL,
	{(PropertyRNA *)&rna_MaterialSlot_rna_properties, (PropertyRNA *)&rna_MaterialSlot_name}},
	"MaterialSlot", NULL, NULL, 516, NULL, "Material Slot",
	"Material slot in an object",
	"*", 165,
	(PropertyRNA *)&rna_MaterialSlot_name, (PropertyRNA *)&rna_MaterialSlot_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MaterialSlot_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Object Display */
CollectionPropertyRNA rna_ObjectDisplay_rna_properties = {
	{(PropertyRNA *)&rna_ObjectDisplay_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectDisplay_rna_properties_begin, ObjectDisplay_rna_properties_next, ObjectDisplay_rna_properties_end, ObjectDisplay_rna_properties_get, NULL, NULL, ObjectDisplay_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ObjectDisplay_rna_type = {
	{(PropertyRNA *)&rna_ObjectDisplay_show_shadows, (PropertyRNA *)&rna_ObjectDisplay_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectDisplay_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_ObjectDisplay_show_shadows = {
	{NULL, (PropertyRNA *)&rna_ObjectDisplay_rna_type,
	-1, "show_shadows", 1, 1, 0, 0, 0, "Shadow",
	"Object cast shadows in the 3D viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectDisplay_show_shadows_get, ObjectDisplay_show_shadows_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

StructRNA RNA_ObjectDisplay = {
	{(ContainerRNA *)&RNA_ObjectLineArt, (ContainerRNA *)&RNA_MaterialSlot,
	NULL,
	{(PropertyRNA *)&rna_ObjectDisplay_rna_properties, (PropertyRNA *)&rna_ObjectDisplay_show_shadows}},
	"ObjectDisplay", NULL, NULL, 516, NULL, "Object Display",
	"Object display settings for 3D viewport",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ObjectDisplay_rna_properties,
	NULL,
	&RNA_Object,
	NULL,
	rna_ObjectDisplay_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Object Line Art */
CollectionPropertyRNA rna_ObjectLineArt_rna_properties = {
	{(PropertyRNA *)&rna_ObjectLineArt_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectLineArt_rna_properties_begin, ObjectLineArt_rna_properties_next, ObjectLineArt_rna_properties_end, ObjectLineArt_rna_properties_get, NULL, NULL, ObjectLineArt_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ObjectLineArt_rna_type = {
	{(PropertyRNA *)&rna_ObjectLineArt_usage, (PropertyRNA *)&rna_ObjectLineArt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectLineArt_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_ObjectLineArt_usage_items[8] = {
	{0, "INHERIT", 0, "Inherit", "Use settings from the parent collection"},
	{1, "INCLUDE", 0, "Include", "Generate feature lines for this object\'s data"},
	{2, "OCCLUSION_ONLY", 0, "Occlusion Only", "Only use the object data to produce occlusion"},
	{4, "EXCLUDE", 0, "Exclude", "Don\'t use this object for Line Art rendering"},
	{8, "INTERSECTION_ONLY", 0, "Intersection Only", "Only generate intersection lines for this collection"},
	{16, "NO_INTERSECTION", 0, "No Intersection", "Include this object but do not generate intersection lines"},
	{32, "FORCE_INTERSECTION", 0, "Force Intersection", "Generate intersection lines even with objects that disabled intersection"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ObjectLineArt_usage = {
	{(PropertyRNA *)&rna_ObjectLineArt_use_crease_override, (PropertyRNA *)&rna_ObjectLineArt_rna_type,
	-1, "usage", 1, 0, 0, 4, 0, "Usage",
	"How to use this object in line art calculation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ObjectLineArt, usage), 1, NULL},
	ObjectLineArt_usage_get, ObjectLineArt_usage_set, NULL, NULL, NULL, rna_ObjectLineArt_usage_items, 7, 0
};

BoolPropertyRNA rna_ObjectLineArt_use_crease_override = {
	{(PropertyRNA *)&rna_ObjectLineArt_crease_threshold, (PropertyRNA *)&rna_ObjectLineArt_usage,
	-1, "use_crease_override", 1, 0, 0, 0, 0, "Use Crease",
	"Use this object\'s crease setting to overwrite scene global",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectLineArt_use_crease_override_get, ObjectLineArt_use_crease_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ObjectLineArt_crease_threshold = {
	{(PropertyRNA *)&rna_ObjectLineArt_use_intersection_priority_override, (PropertyRNA *)&rna_ObjectLineArt_use_crease_override,
	-1, "crease_threshold", 1, 0, 0, 4, 0, "Crease",
	"Angles smaller than this will be treated as creases",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ObjectLineArt, crease_threshold), 5, NULL},
	ObjectLineArt_crease_threshold_get, ObjectLineArt_crease_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 0.0099999998f, 1, 0.0f, NULL
};

BoolPropertyRNA rna_ObjectLineArt_use_intersection_priority_override = {
	{(PropertyRNA *)&rna_ObjectLineArt_intersection_priority, (PropertyRNA *)&rna_ObjectLineArt_crease_threshold,
	-1, "use_intersection_priority_override", 1, 0, 0, 0, 0, "Use Intersection Priority",
	"Use this object\'s intersection priority to override collection setting",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ObjectLineArt_use_intersection_priority_override_get, ObjectLineArt_use_intersection_priority_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ObjectLineArt_intersection_priority = {
	{NULL, (PropertyRNA *)&rna_ObjectLineArt_use_intersection_priority_override,
	-1, "intersection_priority", 1, 0, 0, 4, 0, "Intersection Priority",
	"The intersection line will be included into the object with the higher intersection priority value",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_object_lineart_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ObjectLineArt, intersection_priority), 2, NULL},
	ObjectLineArt_intersection_priority_get, ObjectLineArt_intersection_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

StructRNA RNA_ObjectLineArt = {
	{(ContainerRNA *)&RNA_PointCache, (ContainerRNA *)&RNA_ObjectDisplay,
	NULL,
	{(PropertyRNA *)&rna_ObjectLineArt_rna_properties, (PropertyRNA *)&rna_ObjectLineArt_intersection_priority}},
	"ObjectLineArt", NULL, NULL, 516, NULL, "Object Line Art",
	"Object line art settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ObjectLineArt_rna_properties,
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

