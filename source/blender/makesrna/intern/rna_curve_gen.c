
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

#include "rna_curve.c"
#include "rna_curve_api.c"

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

PointerPropertyRNA rna_Curve_shape_keys;
CollectionPropertyRNA rna_Curve_splines;
IntPropertyRNA rna_Curve_path_duration;
BoolPropertyRNA rna_Curve_use_path;
BoolPropertyRNA rna_Curve_use_path_follow;
BoolPropertyRNA rna_Curve_use_path_clamp;
BoolPropertyRNA rna_Curve_use_stretch;
BoolPropertyRNA rna_Curve_use_deform_bounds;
BoolPropertyRNA rna_Curve_use_radius;
EnumPropertyRNA rna_Curve_bevel_mode;
PointerPropertyRNA rna_Curve_bevel_profile;
IntPropertyRNA rna_Curve_bevel_resolution;
FloatPropertyRNA rna_Curve_offset;
FloatPropertyRNA rna_Curve_extrude;
FloatPropertyRNA rna_Curve_bevel_depth;
IntPropertyRNA rna_Curve_resolution_u;
IntPropertyRNA rna_Curve_resolution_v;
IntPropertyRNA rna_Curve_render_resolution_u;
IntPropertyRNA rna_Curve_render_resolution_v;
FloatPropertyRNA rna_Curve_eval_time;
PointerPropertyRNA rna_Curve_bevel_object;
PointerPropertyRNA rna_Curve_taper_object;
EnumPropertyRNA rna_Curve_dimensions;
EnumPropertyRNA rna_Curve_fill_mode;
EnumPropertyRNA rna_Curve_twist_mode;
EnumPropertyRNA rna_Curve_taper_radius_mode;
EnumPropertyRNA rna_Curve_bevel_factor_mapping_start;
EnumPropertyRNA rna_Curve_bevel_factor_mapping_end;
FloatPropertyRNA rna_Curve_twist_smooth;
BoolPropertyRNA rna_Curve_use_fill_caps;
BoolPropertyRNA rna_Curve_use_map_taper;
BoolPropertyRNA rna_Curve_use_auto_texspace;
FloatPropertyRNA rna_Curve_texspace_location;
FloatPropertyRNA rna_Curve_texspace_size;
CollectionPropertyRNA rna_Curve_materials;
FloatPropertyRNA rna_Curve_bevel_factor_start;
FloatPropertyRNA rna_Curve_bevel_factor_end;
BoolPropertyRNA rna_Curve_is_editmode;
PointerPropertyRNA rna_Curve_animation_data;

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


extern FunctionRNA rna_Curve_transform_func;
extern FloatPropertyRNA rna_Curve_transform_matrix;
extern BoolPropertyRNA rna_Curve_transform_shape_keys;

extern FunctionRNA rna_Curve_validate_material_indices_func;
extern BoolPropertyRNA rna_Curve_validate_material_indices_result;

extern FunctionRNA rna_Curve_update_gpu_tag_func;


CollectionPropertyRNA rna_CurveSplines_rna_properties;
PointerPropertyRNA rna_CurveSplines_rna_type;
PointerPropertyRNA rna_CurveSplines_active;

extern FunctionRNA rna_CurveSplines_new_func;
extern EnumPropertyRNA rna_CurveSplines_new_type;
extern PointerPropertyRNA rna_CurveSplines_new_spline;

extern FunctionRNA rna_CurveSplines_remove_func;
extern PointerPropertyRNA rna_CurveSplines_remove_spline;

extern FunctionRNA rna_CurveSplines_clear_func;


extern PointerPropertyRNA rna_Curve_shape_keys;
extern CollectionPropertyRNA rna_Curve_splines;
extern IntPropertyRNA rna_Curve_path_duration;
extern BoolPropertyRNA rna_Curve_use_path;
extern BoolPropertyRNA rna_Curve_use_path_follow;
extern BoolPropertyRNA rna_Curve_use_path_clamp;
extern BoolPropertyRNA rna_Curve_use_stretch;
extern BoolPropertyRNA rna_Curve_use_deform_bounds;
extern BoolPropertyRNA rna_Curve_use_radius;
extern EnumPropertyRNA rna_Curve_bevel_mode;
extern PointerPropertyRNA rna_Curve_bevel_profile;
extern IntPropertyRNA rna_Curve_bevel_resolution;
extern FloatPropertyRNA rna_Curve_offset;
extern FloatPropertyRNA rna_Curve_extrude;
extern FloatPropertyRNA rna_Curve_bevel_depth;
extern IntPropertyRNA rna_Curve_resolution_u;
extern IntPropertyRNA rna_Curve_resolution_v;
extern IntPropertyRNA rna_Curve_render_resolution_u;
extern IntPropertyRNA rna_Curve_render_resolution_v;
extern FloatPropertyRNA rna_Curve_eval_time;
extern PointerPropertyRNA rna_Curve_bevel_object;
extern PointerPropertyRNA rna_Curve_taper_object;
extern EnumPropertyRNA rna_Curve_dimensions;
extern EnumPropertyRNA rna_Curve_fill_mode;
extern EnumPropertyRNA rna_Curve_twist_mode;
extern EnumPropertyRNA rna_Curve_taper_radius_mode;
extern EnumPropertyRNA rna_Curve_bevel_factor_mapping_start;
extern EnumPropertyRNA rna_Curve_bevel_factor_mapping_end;
extern FloatPropertyRNA rna_Curve_twist_smooth;
extern BoolPropertyRNA rna_Curve_use_fill_caps;
extern BoolPropertyRNA rna_Curve_use_map_taper;
extern BoolPropertyRNA rna_Curve_use_auto_texspace;
extern FloatPropertyRNA rna_Curve_texspace_location;
extern FloatPropertyRNA rna_Curve_texspace_size;
extern CollectionPropertyRNA rna_Curve_materials;
extern FloatPropertyRNA rna_Curve_bevel_factor_start;
extern FloatPropertyRNA rna_Curve_bevel_factor_end;
extern BoolPropertyRNA rna_Curve_is_editmode;
extern PointerPropertyRNA rna_Curve_animation_data;

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

extern FunctionRNA rna_Curve_transform_func;
extern FloatPropertyRNA rna_Curve_transform_matrix;
extern BoolPropertyRNA rna_Curve_transform_shape_keys;

extern FunctionRNA rna_Curve_validate_material_indices_func;
extern BoolPropertyRNA rna_Curve_validate_material_indices_result;

extern FunctionRNA rna_Curve_update_gpu_tag_func;

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



extern PointerPropertyRNA rna_Curve_shape_keys;
extern CollectionPropertyRNA rna_Curve_splines;
extern IntPropertyRNA rna_Curve_path_duration;
extern BoolPropertyRNA rna_Curve_use_path;
extern BoolPropertyRNA rna_Curve_use_path_follow;
extern BoolPropertyRNA rna_Curve_use_path_clamp;
extern BoolPropertyRNA rna_Curve_use_stretch;
extern BoolPropertyRNA rna_Curve_use_deform_bounds;
extern BoolPropertyRNA rna_Curve_use_radius;
extern EnumPropertyRNA rna_Curve_bevel_mode;
extern PointerPropertyRNA rna_Curve_bevel_profile;
extern IntPropertyRNA rna_Curve_bevel_resolution;
extern FloatPropertyRNA rna_Curve_offset;
extern FloatPropertyRNA rna_Curve_extrude;
extern FloatPropertyRNA rna_Curve_bevel_depth;
extern IntPropertyRNA rna_Curve_resolution_u;
extern IntPropertyRNA rna_Curve_resolution_v;
extern IntPropertyRNA rna_Curve_render_resolution_u;
extern IntPropertyRNA rna_Curve_render_resolution_v;
extern FloatPropertyRNA rna_Curve_eval_time;
extern PointerPropertyRNA rna_Curve_bevel_object;
extern PointerPropertyRNA rna_Curve_taper_object;
extern EnumPropertyRNA rna_Curve_dimensions;
extern EnumPropertyRNA rna_Curve_fill_mode;
extern EnumPropertyRNA rna_Curve_twist_mode;
extern EnumPropertyRNA rna_Curve_taper_radius_mode;
extern EnumPropertyRNA rna_Curve_bevel_factor_mapping_start;
extern EnumPropertyRNA rna_Curve_bevel_factor_mapping_end;
extern FloatPropertyRNA rna_Curve_twist_smooth;
extern BoolPropertyRNA rna_Curve_use_fill_caps;
extern BoolPropertyRNA rna_Curve_use_map_taper;
extern BoolPropertyRNA rna_Curve_use_auto_texspace;
extern FloatPropertyRNA rna_Curve_texspace_location;
extern FloatPropertyRNA rna_Curve_texspace_size;
extern CollectionPropertyRNA rna_Curve_materials;
extern FloatPropertyRNA rna_Curve_bevel_factor_start;
extern FloatPropertyRNA rna_Curve_bevel_factor_end;
extern BoolPropertyRNA rna_Curve_is_editmode;
extern PointerPropertyRNA rna_Curve_animation_data;

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

EnumPropertyRNA rna_TextCurve_align_x;
EnumPropertyRNA rna_TextCurve_align_y;
EnumPropertyRNA rna_TextCurve_overflow;
FloatPropertyRNA rna_TextCurve_size;
FloatPropertyRNA rna_TextCurve_small_caps_scale;
FloatPropertyRNA rna_TextCurve_space_line;
FloatPropertyRNA rna_TextCurve_space_word;
FloatPropertyRNA rna_TextCurve_space_character;
FloatPropertyRNA rna_TextCurve_shear;
FloatPropertyRNA rna_TextCurve_offset_x;
FloatPropertyRNA rna_TextCurve_offset_y;
FloatPropertyRNA rna_TextCurve_underline_position;
FloatPropertyRNA rna_TextCurve_underline_height;
CollectionPropertyRNA rna_TextCurve_text_boxes;
IntPropertyRNA rna_TextCurve_active_textbox;
StringPropertyRNA rna_TextCurve_family;
StringPropertyRNA rna_TextCurve_body;
CollectionPropertyRNA rna_TextCurve_body_format;
PointerPropertyRNA rna_TextCurve_follow_curve;
PointerPropertyRNA rna_TextCurve_font;
PointerPropertyRNA rna_TextCurve_font_bold;
PointerPropertyRNA rna_TextCurve_font_italic;
PointerPropertyRNA rna_TextCurve_font_bold_italic;
PointerPropertyRNA rna_TextCurve_edit_format;
BoolPropertyRNA rna_TextCurve_use_fast_edit;

extern FunctionRNA rna_Curve_transform_func;
extern FloatPropertyRNA rna_Curve_transform_matrix;
extern BoolPropertyRNA rna_Curve_transform_shape_keys;

extern FunctionRNA rna_Curve_validate_material_indices_func;
extern BoolPropertyRNA rna_Curve_validate_material_indices_result;

extern FunctionRNA rna_Curve_update_gpu_tag_func;

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



CollectionPropertyRNA rna_TextBox_rna_properties;
PointerPropertyRNA rna_TextBox_rna_type;
FloatPropertyRNA rna_TextBox_x;
FloatPropertyRNA rna_TextBox_y;
FloatPropertyRNA rna_TextBox_width;
FloatPropertyRNA rna_TextBox_height;


CollectionPropertyRNA rna_TextCharacterFormat_rna_properties;
PointerPropertyRNA rna_TextCharacterFormat_rna_type;
BoolPropertyRNA rna_TextCharacterFormat_use_bold;
BoolPropertyRNA rna_TextCharacterFormat_use_italic;
BoolPropertyRNA rna_TextCharacterFormat_use_underline;
BoolPropertyRNA rna_TextCharacterFormat_use_small_caps;
IntPropertyRNA rna_TextCharacterFormat_material_index;
IntPropertyRNA rna_TextCharacterFormat_kerning;


CollectionPropertyRNA rna_SplinePoint_rna_properties;
PointerPropertyRNA rna_SplinePoint_rna_type;
BoolPropertyRNA rna_SplinePoint_select;
BoolPropertyRNA rna_SplinePoint_hide;
FloatPropertyRNA rna_SplinePoint_co;
FloatPropertyRNA rna_SplinePoint_weight;
FloatPropertyRNA rna_SplinePoint_tilt;
FloatPropertyRNA rna_SplinePoint_weight_softbody;
FloatPropertyRNA rna_SplinePoint_radius;


CollectionPropertyRNA rna_BezierSplinePoint_rna_properties;
PointerPropertyRNA rna_BezierSplinePoint_rna_type;
BoolPropertyRNA rna_BezierSplinePoint_select_left_handle;
BoolPropertyRNA rna_BezierSplinePoint_select_right_handle;
BoolPropertyRNA rna_BezierSplinePoint_select_control_point;
BoolPropertyRNA rna_BezierSplinePoint_hide;
EnumPropertyRNA rna_BezierSplinePoint_handle_left_type;
EnumPropertyRNA rna_BezierSplinePoint_handle_right_type;
FloatPropertyRNA rna_BezierSplinePoint_handle_left;
FloatPropertyRNA rna_BezierSplinePoint_co;
FloatPropertyRNA rna_BezierSplinePoint_handle_right;
FloatPropertyRNA rna_BezierSplinePoint_tilt;
FloatPropertyRNA rna_BezierSplinePoint_weight_softbody;
FloatPropertyRNA rna_BezierSplinePoint_radius;


CollectionPropertyRNA rna_Spline_rna_properties;
PointerPropertyRNA rna_Spline_rna_type;
CollectionPropertyRNA rna_Spline_points;
CollectionPropertyRNA rna_Spline_bezier_points;
EnumPropertyRNA rna_Spline_tilt_interpolation;
EnumPropertyRNA rna_Spline_radius_interpolation;
EnumPropertyRNA rna_Spline_type;
IntPropertyRNA rna_Spline_point_count_u;
IntPropertyRNA rna_Spline_point_count_v;
IntPropertyRNA rna_Spline_order_u;
IntPropertyRNA rna_Spline_order_v;
IntPropertyRNA rna_Spline_resolution_u;
IntPropertyRNA rna_Spline_resolution_v;
BoolPropertyRNA rna_Spline_use_cyclic_u;
BoolPropertyRNA rna_Spline_use_cyclic_v;
BoolPropertyRNA rna_Spline_use_endpoint_u;
BoolPropertyRNA rna_Spline_use_endpoint_v;
BoolPropertyRNA rna_Spline_use_bezier_u;
BoolPropertyRNA rna_Spline_use_bezier_v;
BoolPropertyRNA rna_Spline_use_smooth;
BoolPropertyRNA rna_Spline_hide;
IntPropertyRNA rna_Spline_material_index;
IntPropertyRNA rna_Spline_character_index;

extern FunctionRNA rna_Spline_calc_length_func;
extern IntPropertyRNA rna_Spline_calc_length_resolution;
extern FloatPropertyRNA rna_Spline_calc_length_length;

extern FunctionRNA rna_Spline_valid_message_func;
extern IntPropertyRNA rna_Spline_valid_message_direction;
extern StringPropertyRNA rna_Spline_valid_message_result;



CollectionPropertyRNA rna_SplinePoints_rna_properties;
PointerPropertyRNA rna_SplinePoints_rna_type;

extern FunctionRNA rna_SplinePoints_add_func;
extern IntPropertyRNA rna_SplinePoints_add_count;



CollectionPropertyRNA rna_SplineBezierPoints_rna_properties;
PointerPropertyRNA rna_SplineBezierPoints_rna_type;

extern FunctionRNA rna_SplineBezierPoints_add_func;
extern IntPropertyRNA rna_SplineBezierPoints_add_count;


PointerRNA Curve_shape_keys_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

static PointerRNA Curve_splines_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Spline, rna_iterator_listbase_get(iter));
}

void Curve_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curve_splines;

    rna_Curve_splines_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Curve_splines_get(iter);
    }
}

void Curve_splines_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Curve_splines_get(iter);
    }
}

void Curve_splines_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Curve_path_duration_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->pathlen);
}

void Curve_path_duration_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->pathlen = CLAMPIS(value, 1, 1048574);
}

bool Curve_use_path_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void Curve_use_path_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool Curve_use_path_follow_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void Curve_use_path_follow_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool Curve_use_path_clamp_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void Curve_use_path_clamp_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool Curve_use_stretch_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void Curve_use_stretch_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool Curve_use_deform_bounds_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

void Curve_use_deform_bounds_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool Curve_use_radius_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void Curve_use_radius_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

int Curve_bevel_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevel_mode);
}

void Curve_bevel_mode_set(PointerRNA *ptr, int value)
{
    rna_Curve_bevel_mode_set(ptr, value);
}

PointerRNA Curve_bevel_profile_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveProfile, data->bevel_profile);
}

int Curve_bevel_resolution_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevresol);
}

void Curve_bevel_resolution_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevresol = CLAMPIS(value, 0, 32);
}

float Curve_offset_get(PointerRNA *ptr)
{
    return rna_Curve_offset_get(ptr);
}

void Curve_offset_set(PointerRNA *ptr, float value)
{
    rna_Curve_offset_set(ptr, value);
}

float Curve_extrude_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->extrude);
}

void Curve_extrude_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->extrude = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Curve_bevel_depth_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevel_radius);
}

void Curve_bevel_depth_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevel_radius = value;
}

int Curve_resolution_u_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolu);
}

void Curve_resolution_u_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolu = CLAMPIS(value, 1, 1024);
}

int Curve_resolution_v_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolv);
}

void Curve_resolution_v_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolv = CLAMPIS(value, 1, 1024);
}

int Curve_render_resolution_u_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolu_ren);
}

void Curve_render_resolution_u_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolu_ren = CLAMPIS(value, 0, 1024);
}

int Curve_render_resolution_v_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->resolv_ren);
}

void Curve_render_resolution_v_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->resolv_ren = CLAMPIS(value, 0, 1024);
}

float Curve_eval_time_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ctime);
}

void Curve_eval_time_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->ctime = value;
}

PointerRNA Curve_bevel_object_get(PointerRNA *ptr)
{
    return rna_Curve_bevelObject_get(ptr);
}

void Curve_bevel_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Curve_bevelObject_set(ptr, value, reports);
}

PointerRNA Curve_taper_object_get(PointerRNA *ptr)
{
    return rna_Curve_taperObject_get(ptr);
}

void Curve_taper_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Curve_taperObject_set(ptr, value, reports);
}

int Curve_dimensions_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((data->flag) & 1);
}

void Curve_dimensions_set(PointerRNA *ptr, int value)
{
    rna_Curve_dimension_set(ptr, value);
}

int Curve_fill_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return ((data->flag) & 6);
}

void Curve_fill_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->flag &= ~6;
    data->flag |= value;
}

int Curve_twist_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->twist_mode);
}

void Curve_twist_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->twist_mode = value;
}

int Curve_taper_radius_mode_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->taper_radius_mode);
}

void Curve_taper_radius_mode_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->taper_radius_mode = value;
}

int Curve_bevel_factor_mapping_start_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevfac1_mapping);
}

void Curve_bevel_factor_mapping_start_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac1_mapping = value;
}

int Curve_bevel_factor_mapping_end_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->bevfac2_mapping);
}

void Curve_bevel_factor_mapping_end_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac2_mapping = value;
}

float Curve_twist_smooth_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->twist_smooth);
}

void Curve_twist_smooth_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->twist_smooth = value;
}

bool Curve_use_fill_caps_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

void Curve_use_fill_caps_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

bool Curve_use_map_taper_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

void Curve_use_map_taper_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

bool Curve_use_auto_texspace_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->texflag) & 1) != 0);
}

void Curve_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->texflag |= 1; }
    else { data->texflag &= ~1; }
}

void Curve_texspace_location_get(PointerRNA *ptr, float values[3])
{
    rna_Curve_texspace_loc_get(ptr, values);
}

void Curve_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    rna_Curve_texspace_loc_set(ptr, values);
}

void Curve_texspace_size_get(PointerRNA *ptr, float values[3])
{
    rna_Curve_texspace_size_get(ptr, values);
}

void Curve_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    rna_Curve_texspace_size_set(ptr, values);
}

int Curve_materials_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA Curve_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Curve_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Curve_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

    if (iter->valid) {
        iter->ptr = Curve_materials_get(iter);
    }
}

void Curve_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Curve_materials_get(iter);
    }
}

void Curve_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Curve_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Curve_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Curve_materials_get(&iter); }
    }

    Curve_materials_end(&iter);

    return found;
}

int Curve_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Curve_materials_begin(&iter, ptr);

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
        Curve_materials_next(&iter);
    }
    Curve_materials_end(&iter);

    return found;
}

float Curve_bevel_factor_start_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevfac1);
}

void Curve_bevel_factor_start_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac1 = CLAMPIS(value, 0.0f, 1.0f);
}

float Curve_bevel_factor_end_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->bevfac2);
}

void Curve_bevel_factor_end_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->bevfac2 = CLAMPIS(value, 0.0f, 1.0f);
}

bool Curve_is_editmode_get(PointerRNA *ptr)
{
    return rna_Curve_is_editmode_get(ptr);
}

PointerRNA Curve_animation_data_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA CurveSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CurveSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CurveSplines_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveSplines_rna_properties_get(iter);
    }
}

void CurveSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CurveSplines_rna_properties_get(iter);
    }
}

void CurveSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CurveSplines_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CurveSplines_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA CurveSplines_active_get(PointerRNA *ptr)
{
    return rna_Curve_active_spline_get(ptr);
}

void CurveSplines_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Curve_active_spline_set(ptr, value, reports);
}

int TextCurve_align_x_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->spacemode);
}

void TextCurve_align_x_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->spacemode = value;
}

int TextCurve_align_y_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->align_y);
}

void TextCurve_align_y_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->align_y = value;
}

int TextCurve_overflow_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->overflow);
}

void TextCurve_overflow_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    data->overflow = value;
}

float TextCurve_size_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->fsize);
}

void TextCurve_size_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->fsize = CLAMPIS(value, 0.0001000000f, 10000.0f);
}

float TextCurve_small_caps_scale_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->smallcaps_scale);
}

void TextCurve_small_caps_scale_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->smallcaps_scale = value;
}

float TextCurve_space_line_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->linedist);
}

void TextCurve_space_line_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->linedist = CLAMPIS(value, 0.0f, 10.0f);
}

float TextCurve_space_word_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->wordspace);
}

void TextCurve_space_word_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->wordspace = CLAMPIS(value, 0.0f, 10.0f);
}

float TextCurve_space_character_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->spacing);
}

void TextCurve_space_character_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->spacing = CLAMPIS(value, 0.0f, 10.0f);
}

float TextCurve_shear_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->shear);
}

void TextCurve_shear_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->shear = CLAMPIS(value, -1.0f, 1.0f);
}

float TextCurve_offset_x_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->xof);
}

void TextCurve_offset_x_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->xof = value;
}

float TextCurve_offset_y_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->yof);
}

void TextCurve_offset_y_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->yof = value;
}

float TextCurve_underline_position_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ulpos);
}

void TextCurve_underline_position_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->ulpos = CLAMPIS(value, -0.2000000030f, 0.8000000119f);
}

float TextCurve_underline_height_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (float)(data->ulheight);
}

void TextCurve_underline_height_set(PointerRNA *ptr, float value)
{
    Curve *data = (Curve *)(ptr->data);
    data->ulheight = CLAMPIS(value, 0.0f, 0.8000000119f);
}

int TextCurve_text_boxes_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->tb == NULL) ? 0 : data->totbox;
}

static PointerRNA TextCurve_text_boxes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TextBox, rna_iterator_array_get(iter));
}

void TextCurve_text_boxes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextCurve_text_boxes;

    rna_iterator_array_begin(iter, data->tb, sizeof(data->tb[0]), data->totbox, 0, NULL);

    if (iter->valid) {
        iter->ptr = TextCurve_text_boxes_get(iter);
    }
}

void TextCurve_text_boxes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = TextCurve_text_boxes_get(iter);
    }
}

void TextCurve_text_boxes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int TextCurve_text_boxes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    TextCurve_text_boxes_begin(&iter, ptr);

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
        if (found) { *r_ptr = TextCurve_text_boxes_get(&iter); }
    }

    TextCurve_text_boxes_end(&iter);

    return found;
}

int TextCurve_active_textbox_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (int)(data->actbox);
}

void TextCurve_active_textbox_set(PointerRNA *ptr, int value)
{
    Curve *data = (Curve *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_Curve_active_textbox_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->actbox = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

void TextCurve_family_get(PointerRNA *ptr, char *value)
{
    Curve *data = (Curve *)(ptr->data);
    BLI_strncpy_utf8(value, data->family, 64);
}

int TextCurve_family_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return strlen(data->family);
}

void TextCurve_family_set(PointerRNA *ptr, const char *value)
{
    Curve *data = (Curve *)(ptr->data);
    BLI_strncpy_utf8(data->family, value, 64);
}

void TextCurve_body_get(PointerRNA *ptr, char *value)
{
    rna_Curve_body_get(ptr, value);
}

int TextCurve_body_length(PointerRNA *ptr)
{
    return rna_Curve_body_length(ptr);
}

void TextCurve_body_set(PointerRNA *ptr, const char *value)
{
    rna_Curve_body_set(ptr, value);
}

int TextCurve_body_format_length(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (data->strinfo == NULL) ? 0 : data->len_char32;
}

static PointerRNA TextCurve_body_format_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TextCharacterFormat, rna_iterator_array_get(iter));
}

void TextCurve_body_format_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextCurve_body_format;

    rna_iterator_array_begin(iter, data->strinfo, sizeof(data->strinfo[0]), data->len_char32, 0, NULL);

    if (iter->valid) {
        iter->ptr = TextCurve_body_format_get(iter);
    }
}

void TextCurve_body_format_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = TextCurve_body_format_get(iter);
    }
}

void TextCurve_body_format_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int TextCurve_body_format_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    TextCurve_body_format_begin(&iter, ptr);

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
        if (found) { *r_ptr = TextCurve_body_format_get(&iter); }
    }

    TextCurve_body_format_end(&iter);

    return found;
}

PointerRNA TextCurve_follow_curve_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->textoncurve);
}

void TextCurve_follow_curve_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->textoncurve = value.data;
}

PointerRNA TextCurve_font_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfont);
}

void TextCurve_font_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfont) {
        id_us_min((ID *)data->vfont);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->vfont = value.data;
}

PointerRNA TextCurve_font_bold_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfontb);
}

void TextCurve_font_bold_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfontb) {
        id_us_min((ID *)data->vfontb);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->vfontb = value.data;
}

PointerRNA TextCurve_font_italic_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfonti);
}

void TextCurve_font_italic_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfonti) {
        id_us_min((ID *)data->vfonti);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->vfonti = value.data;
}

PointerRNA TextCurve_font_bold_italic_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfontbi);
}

void TextCurve_font_bold_italic_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Curve *data = (Curve *)(ptr->data);

    if (data->vfontbi) {
        id_us_min((ID *)data->vfontbi);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->vfontbi = value.data;
}

PointerRNA TextCurve_edit_format_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_TextCharacterFormat, &data->curinfo);
}

bool TextCurve_use_fast_edit_get(PointerRNA *ptr)
{
    Curve *data = (Curve *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void TextCurve_use_fast_edit_set(PointerRNA *ptr, bool value)
{
    Curve *data = (Curve *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

static PointerRNA TextBox_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void TextBox_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextBox_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextBox_rna_properties_get(iter);
    }
}

void TextBox_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TextBox_rna_properties_get(iter);
    }
}

void TextBox_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int TextBox_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TextBox_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float TextBox_x_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->x);
}

void TextBox_x_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->x = value;
}

float TextBox_y_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->y);
}

void TextBox_y_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->y = value;
}

float TextBox_width_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->w);
}

void TextBox_width_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->w = CLAMPIS(value, 0.0f, FLT_MAX);
}

float TextBox_height_get(PointerRNA *ptr)
{
    TextBox *data = (TextBox *)(ptr->data);
    return (float)(data->h);
}

void TextBox_height_set(PointerRNA *ptr, float value)
{
    TextBox *data = (TextBox *)(ptr->data);
    data->h = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA TextCharacterFormat_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void TextCharacterFormat_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TextCharacterFormat_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TextCharacterFormat_rna_properties_get(iter);
    }
}

void TextCharacterFormat_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TextCharacterFormat_rna_properties_get(iter);
    }
}

void TextCharacterFormat_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int TextCharacterFormat_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TextCharacterFormat_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool TextCharacterFormat_use_bold_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void TextCharacterFormat_use_bold_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool TextCharacterFormat_use_italic_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void TextCharacterFormat_use_italic_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool TextCharacterFormat_use_underline_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void TextCharacterFormat_use_underline_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool TextCharacterFormat_use_small_caps_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void TextCharacterFormat_use_small_caps_set(PointerRNA *ptr, bool value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

int TextCharacterFormat_material_index_get(PointerRNA *ptr)
{
    return rna_ChariInfo_material_index_get(ptr);
}

void TextCharacterFormat_material_index_set(PointerRNA *ptr, int value)
{
    rna_ChariInfo_material_index_set(ptr, value);
}

int TextCharacterFormat_kerning_get(PointerRNA *ptr)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    return (int)(data->kern);
}

void TextCharacterFormat_kerning_set(PointerRNA *ptr, int value)
{
    CharInfo *data = (CharInfo *)(ptr->data);
    data->kern = CLAMPIS(value, 0, 32767);
}

static PointerRNA SplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void SplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SplinePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplinePoint_rna_properties_get(iter);
    }
}

void SplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SplinePoint_rna_properties_get(iter);
    }
}

void SplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int SplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SplinePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool SplinePoint_select_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

void SplinePoint_select_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

bool SplinePoint_hide_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (bool)(data->hide);
}

void SplinePoint_hide_set(PointerRNA *ptr, bool value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->hide = value;
}

void SplinePoint_co_get(PointerRNA *ptr, float values[4])
{
    BPoint *data = (BPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

void SplinePoint_co_set(PointerRNA *ptr, const float values[4])
{
    BPoint *data = (BPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

float SplinePoint_weight_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->vec[3]);
}

void SplinePoint_weight_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->vec[3] = value;
}

float SplinePoint_tilt_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->tilt);
}

void SplinePoint_tilt_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->tilt = CLAMPIS(value, -376.9911193848f, 376.9911193848f);
}

float SplinePoint_weight_softbody_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->weight);
}

void SplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0099999998f, 100.0f);
}

float SplinePoint_radius_get(PointerRNA *ptr)
{
    BPoint *data = (BPoint *)(ptr->data);
    return (float)(data->radius);
}

void SplinePoint_radius_set(PointerRNA *ptr, float value)
{
    BPoint *data = (BPoint *)(ptr->data);
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA BezierSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BezierSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BezierSplinePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BezierSplinePoint_rna_properties_get(iter);
    }
}

void BezierSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BezierSplinePoint_rna_properties_get(iter);
    }
}

void BezierSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BezierSplinePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BezierSplinePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BezierSplinePoint_select_left_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

void BezierSplinePoint_select_left_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

bool BezierSplinePoint_select_right_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f3) & 1) != 0);
}

void BezierSplinePoint_select_right_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f3 |= 1; }
    else { data->f3 &= ~1; }
}

bool BezierSplinePoint_select_control_point_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f2) & 1) != 0);
}

void BezierSplinePoint_select_control_point_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f2 |= 1; }
    else { data->f2 &= ~1; }
}

bool BezierSplinePoint_hide_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (bool)(data->hide);
}

void BezierSplinePoint_hide_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->hide = value;
}

int BezierSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h1);
}

void BezierSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h1 = value;
}

int BezierSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h2);
}

void BezierSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h2 = value;
}

void BezierSplinePoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    rna_BezTriple_handle1_get(ptr, values);
}

void BezierSplinePoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    rna_BezTriple_handle1_set(ptr, values);
}

void BezierSplinePoint_co_get(PointerRNA *ptr, float values[3])
{
    rna_BezTriple_ctrlpoint_get(ptr, values);
}

void BezierSplinePoint_co_set(PointerRNA *ptr, const float values[3])
{
    rna_BezTriple_ctrlpoint_set(ptr, values);
}

void BezierSplinePoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    rna_BezTriple_handle2_get(ptr, values);
}

void BezierSplinePoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    rna_BezTriple_handle2_set(ptr, values);
}

float BezierSplinePoint_tilt_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->tilt);
}

void BezierSplinePoint_tilt_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->tilt = CLAMPIS(value, -376.9911193848f, 376.9911193848f);
}

float BezierSplinePoint_weight_softbody_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->weight);
}

void BezierSplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0099999998f, 100.0f);
}

float BezierSplinePoint_radius_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->radius);
}

void BezierSplinePoint_radius_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->radius = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA Spline_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Spline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Spline_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Spline_rna_properties_get(iter);
    }
}

void Spline_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Spline_rna_properties_get(iter);
    }
}

void Spline_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Spline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Spline_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int Spline_points_length(PointerRNA *ptr)
{
    return rna_Nurb_length(ptr);
}

static PointerRNA Spline_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_SplinePoint, rna_iterator_array_get(iter));
}

void Spline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Spline_points;

    rna_BPoint_array_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Spline_points_get(iter);
    }
}

void Spline_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Spline_points_get(iter);
    }
}

void Spline_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Spline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Spline_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = Spline_points_get(&iter); }
    }

    Spline_points_end(&iter);

    return found;
}

int Spline_bezier_points_length(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (data->bezt == NULL) ? 0 : data->pntsu;
}

static PointerRNA Spline_bezier_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BezierSplinePoint, rna_iterator_array_get(iter));
}

void Spline_bezier_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Spline_bezier_points;

    rna_iterator_array_begin(iter, data->bezt, sizeof(data->bezt[0]), data->pntsu, 0, NULL);

    if (iter->valid) {
        iter->ptr = Spline_bezier_points_get(iter);
    }
}

void Spline_bezier_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Spline_bezier_points_get(iter);
    }
}

void Spline_bezier_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Spline_bezier_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Spline_bezier_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = Spline_bezier_points_get(&iter); }
    }

    Spline_bezier_points_end(&iter);

    return found;
}

int Spline_tilt_interpolation_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->tilt_interp);
}

void Spline_tilt_interpolation_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->tilt_interp = value;
}

int Spline_radius_interpolation_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->radius_interp);
}

void Spline_radius_interpolation_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->radius_interp = value;
}

int Spline_type_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->type);
}

void Spline_type_set(PointerRNA *ptr, int value)
{
    rna_Nurb_type_set(ptr, value);
}

int Spline_point_count_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->pntsu);
}

int Spline_point_count_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->pntsv);
}

int Spline_order_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->orderu);
}

void Spline_order_u_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->orderu = CLAMPIS(value, 2, 6);
}

int Spline_order_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->orderv);
}

void Spline_order_v_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->orderv = CLAMPIS(value, 2, 6);
}

int Spline_resolution_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->resolu);
}

void Spline_resolution_u_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->resolu = CLAMPIS(value, 1, 1024);
}

int Spline_resolution_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->resolv);
}

void Spline_resolution_v_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    data->resolv = CLAMPIS(value, 1, 1024);
}

bool Spline_use_cyclic_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagu) & 1) != 0);
}

void Spline_use_cyclic_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu |= 1; }
    else { data->flagu &= ~1; }
}

bool Spline_use_cyclic_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagv) & 1) != 0);
}

void Spline_use_cyclic_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv |= 1; }
    else { data->flagv &= ~1; }
}

bool Spline_use_endpoint_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagu) & 2) != 0);
}

void Spline_use_endpoint_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu |= 2; }
    else { data->flagu &= ~2; }
}

bool Spline_use_endpoint_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagv) & 2) != 0);
}

void Spline_use_endpoint_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv |= 2; }
    else { data->flagv &= ~2; }
}

bool Spline_use_bezier_u_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagu) & 4) != 0);
}

void Spline_use_bezier_u_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagu |= 4; }
    else { data->flagu &= ~4; }
}

bool Spline_use_bezier_v_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flagv) & 4) != 0);
}

void Spline_use_bezier_v_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flagv |= 4; }
    else { data->flagv &= ~4; }
}

bool Spline_use_smooth_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void Spline_use_smooth_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool Spline_hide_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (((data->hide) & 1) != 0);
}

void Spline_hide_set(PointerRNA *ptr, bool value)
{
    Nurb *data = (Nurb *)(ptr->data);
    if (value) { data->hide |= 1; }
    else { data->hide &= ~1; }
}

int Spline_material_index_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->mat_nr);
}

void Spline_material_index_set(PointerRNA *ptr, int value)
{
    Nurb *data = (Nurb *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_Curve_material_index_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->mat_nr = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

int Spline_character_index_get(PointerRNA *ptr)
{
    Nurb *data = (Nurb *)(ptr->data);
    return (int)(data->charidx);
}

static PointerRNA SplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void SplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SplinePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplinePoints_rna_properties_get(iter);
    }
}

void SplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SplinePoints_rna_properties_get(iter);
    }
}

void SplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int SplinePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SplinePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA SplineBezierPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void SplineBezierPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_SplineBezierPoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = SplineBezierPoints_rna_properties_get(iter);
    }
}

void SplineBezierPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = SplineBezierPoints_rna_properties_get(iter);
    }
}

void SplineBezierPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int SplineBezierPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA SplineBezierPoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void Curve_transform_func(struct Curve *_self, float matrix[16], bool shape_keys)
{
	rna_Curve_transform(_self, matrix, shape_keys);
}

void Curve_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Curve_transform(_self, matrix, shape_keys);
}

bool Curve_validate_material_indices_func(struct Curve *_self)
{
	return BKE_curve_material_index_validate(_self);
}

void Curve_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = BKE_curve_material_index_validate(_self);
	*((bool *)_retdata) = result;
}

void Curve_update_gpu_tag_func(struct Curve *_self)
{
	rna_Curve_update_gpu_tag(_self);
}

void Curve_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	_self = (struct Curve *)_ptr->data;
	
	rna_Curve_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Curve_transform(struct Curve *_self, float matrix[16], bool shape_keys);
bool BKE_curve_material_index_validate(struct Curve *_self);
void rna_Curve_update_gpu_tag(struct Curve *_self);

struct Nurb *CurveSplines_new_func(struct Curve *_self, int type)
{
	return rna_Curve_spline_new(_self, type);
}

void CurveSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	int type;
	struct Nurb *spline;
	char *_data, *_retdata;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	spline = rna_Curve_spline_new(_self, type);
	*((struct Nurb **)_retdata) = spline;
}

void CurveSplines_remove_func(struct Curve *_self, ReportList *reports, struct PointerRNA *spline)
{
	rna_Curve_spline_remove(_self, reports, spline);
}

void CurveSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	struct PointerRNA *spline;
	char *_data;
	
	_self = (struct Curve *)_ptr->data;
	_data = (char *)_parms->data;
	spline = *((struct PointerRNA **)_data);
	
	rna_Curve_spline_remove(_self, reports, spline);
}

void CurveSplines_clear_func(struct Curve *_self)
{
	rna_Curve_spline_clear(_self);
}

void CurveSplines_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	_self = (struct Curve *)_ptr->data;
	
	rna_Curve_spline_clear(_self);
}

/* Repeated prototypes to detect errors */

struct Nurb *rna_Curve_spline_new(struct Curve *_self, int type);
void rna_Curve_spline_remove(struct Curve *_self, ReportList *reports, struct PointerRNA *spline);
void rna_Curve_spline_clear(struct Curve *_self);







float Spline_calc_length_func(struct Nurb *_self, int resolution)
{
	return rna_Nurb_calc_length(_self, resolution);
}

void Spline_calc_length_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Nurb *_self;
	int resolution;
	float length;
	char *_data, *_retdata;
	
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	resolution = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	length = rna_Nurb_calc_length(_self, resolution);
	*((float *)_retdata) = length;
}

void Spline_valid_message_func(struct Nurb *_self, int direction, int *result_len, const char * *result)
{
	rna_Nurb_valid_message(_self, direction, result_len, result);
}

void Spline_valid_message_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Nurb *_self;
	int direction;
	int *result_len;
	const char * *result;
	char *_data;
	
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	direction = *((int *)_data);
	_data += 8;
	result_len = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	result = ((const char * *)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Nurb_valid_message(_self, direction, result_len, result);
}

/* Repeated prototypes to detect errors */

float rna_Nurb_calc_length(struct Nurb *_self, int resolution);
void rna_Nurb_valid_message(struct Nurb *_self, int direction, int *result_len, const char * *result);

void SplinePoints_add_func(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count)
{
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

void SplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Nurb *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_points_add(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count);

void SplineBezierPoints_add_func(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count)
{
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

void SplineBezierPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Nurb *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct Nurb *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_bezpoints_add(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count);

/* Curve */
PointerPropertyRNA rna_Curve_shape_keys = {
	{(PropertyRNA *)&rna_Curve_splines, NULL,
	-1, "shape_keys", 8388672, 1, 0, 32, 0, "Shape Keys",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_shape_keys_get, NULL, NULL, NULL,&RNA_Key
};

CollectionPropertyRNA rna_Curve_splines = {
	{(PropertyRNA *)&rna_Curve_path_duration, (PropertyRNA *)&rna_Curve_shape_keys,
	-1, "splines", 0, 0, 0, 0, 0, "Splines",
	"Collection of splines in this curve data object",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_CurveSplines},
	Curve_splines_begin, Curve_splines_next, Curve_splines_end, Curve_splines_get, NULL, NULL, NULL, NULL, &RNA_Spline
};

IntPropertyRNA rna_Curve_path_duration = {
	{(PropertyRNA *)&rna_Curve_use_path, (PropertyRNA *)&rna_Curve_splines,
	-1, "path_duration", 3, 0, 0, 4, 0, "Path Length",
	"The number of frames that are needed to traverse the path, defining the maximum value for the \'Evaluation Time\' setting",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, pathlen), 0, NULL},
	Curve_path_duration_get, Curve_path_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 1048574, 1, 1048574, 1, 100, NULL
};

BoolPropertyRNA rna_Curve_use_path = {
	{(PropertyRNA *)&rna_Curve_use_path_follow, (PropertyRNA *)&rna_Curve_path_duration,
	-1, "use_path", 3, 0, 0, 0, 0, "Path",
	"Enable the curve to become a translation path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_path_get, Curve_use_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curve_use_path_follow = {
	{(PropertyRNA *)&rna_Curve_use_path_clamp, (PropertyRNA *)&rna_Curve_use_path,
	-1, "use_path_follow", 3, 0, 0, 0, 0, "Follow",
	"Make curve path children to rotate along the path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_path_follow_get, Curve_use_path_follow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curve_use_path_clamp = {
	{(PropertyRNA *)&rna_Curve_use_stretch, (PropertyRNA *)&rna_Curve_use_path_follow,
	-1, "use_path_clamp", 3, 0, 0, 0, 0, "Clamp",
	"Clamp the curve path children so they can\'t travel past the start/end point of the curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_path_clamp_get, Curve_use_path_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curve_use_stretch = {
	{(PropertyRNA *)&rna_Curve_use_deform_bounds, (PropertyRNA *)&rna_Curve_use_path_clamp,
	-1, "use_stretch", 3, 0, 0, 0, 0, "Stretch",
	"Option for curve-deform: make deformed child to stretch along entire path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_stretch_get, Curve_use_stretch_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curve_use_deform_bounds = {
	{(PropertyRNA *)&rna_Curve_use_radius, (PropertyRNA *)&rna_Curve_use_stretch,
	-1, "use_deform_bounds", 3, 0, 0, 0, 0, "Bounds Clamp",
	"Option for curve-deform: Use the mesh bounds to clamp the deformation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_deform_bounds_get, Curve_use_deform_bounds_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Curve_use_radius = {
	{(PropertyRNA *)&rna_Curve_bevel_mode, (PropertyRNA *)&rna_Curve_use_deform_bounds,
	-1, "use_radius", 3, 0, 0, 0, 0, "Radius",
	"Option for paths and curve-deform: apply the curve radius with path following it and deforming",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_radius_get, Curve_use_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static const EnumPropertyItem rna_Curve_bevel_mode_items[4] = {
	{0, "ROUND", 0, "Round", "Use circle for the section of the curve\'s bevel geometry"},
	{1, "OBJECT", 0, "Object", "Use an object for the section of the curve\'s bevel geometry segment"},
	{2, "PROFILE", 0, "Profile", "Use a custom profile for each quarter of curve\'s bevel geometry"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_bevel_mode = {
	{(PropertyRNA *)&rna_Curve_bevel_profile, (PropertyRNA *)&rna_Curve_use_radius,
	-1, "bevel_mode", 3, 0, 0, 0, 0, "Bevel Mode",
	"Determine how to build the curve\'s bevel geometry",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_bevel_resolution_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_bevel_mode_get, Curve_bevel_mode_set, NULL, NULL, NULL, rna_Curve_bevel_mode_items, 3, 0
};

PointerPropertyRNA rna_Curve_bevel_profile = {
	{(PropertyRNA *)&rna_Curve_bevel_resolution, (PropertyRNA *)&rna_Curve_bevel_mode,
	-1, "bevel_profile", 8388608, 0, 0, 0, 0, "Custom Profile Path",
	"The path for the curve\'s custom profile",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_bevel_profile_get, NULL, NULL, NULL,&RNA_CurveProfile
};

IntPropertyRNA rna_Curve_bevel_resolution = {
	{(PropertyRNA *)&rna_Curve_offset, (PropertyRNA *)&rna_Curve_bevel_profile,
	-1, "bevel_resolution", 3, 0, 0, 4, 0, "Bevel Resolution",
	"The number of segments in each quarter-circle of the bevel",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_bevel_resolution_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevresol), 1, NULL},
	Curve_bevel_resolution_get, Curve_bevel_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32, 0, 32, 1, 4, NULL
};

FloatPropertyRNA rna_Curve_offset = {
	{(PropertyRNA *)&rna_Curve_extrude, (PropertyRNA *)&rna_Curve_bevel_resolution,
	-1, "offset", 3, 0, 0, 0, 0, "Offset",
	"Distance to move the curve parallel to its normals",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_offset_get, Curve_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Curve_extrude = {
	{(PropertyRNA *)&rna_Curve_bevel_depth, (PropertyRNA *)&rna_Curve_offset,
	-1, "extrude", 3, 0, 0, 4, 0, "Extrude",
	"Length of the depth added in the local Z direction along the curve, perpendicular to its normals",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, extrude), 5, NULL},
	Curve_extrude_get, Curve_extrude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Curve_bevel_depth = {
	{(PropertyRNA *)&rna_Curve_resolution_u, (PropertyRNA *)&rna_Curve_extrude,
	-1, "bevel_depth", 3, 0, 0, 4, 0, "Bevel Depth",
	"Radius of the bevel geometry, not including extrusion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevel_radius), 5, NULL},
	Curve_bevel_depth_get, Curve_bevel_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Curve_resolution_u = {
	{(PropertyRNA *)&rna_Curve_resolution_v, (PropertyRNA *)&rna_Curve_bevel_depth,
	-1, "resolution_u", 1, 0, 0, 4, 0, "Resolution U",
	"Number of computed points in the U direction between every pair of control points",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_resolution_u_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolu), 1, NULL},
	Curve_resolution_u_get, Curve_resolution_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 64, 1, 1024, 1, 12, NULL
};

IntPropertyRNA rna_Curve_resolution_v = {
	{(PropertyRNA *)&rna_Curve_render_resolution_u, (PropertyRNA *)&rna_Curve_resolution_u,
	-1, "resolution_v", 1, 0, 0, 4, 0, "Resolution V",
	"The number of computed points in the V direction between every pair of control points",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_resolution_v_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolv), 1, NULL},
	Curve_resolution_v_get, Curve_resolution_v_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 1024, 1, 1024, 1, 12, NULL
};

IntPropertyRNA rna_Curve_render_resolution_u = {
	{(PropertyRNA *)&rna_Curve_render_resolution_v, (PropertyRNA *)&rna_Curve_resolution_v,
	-1, "render_resolution_u", 3, 0, 0, 4, 0, "Render Resolution U",
	"Surface resolution in U direction used while rendering (zero uses preview resolution)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolu_ren), 1, NULL},
	Curve_render_resolution_u_get, Curve_render_resolution_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 64, 0, 1024, 1, 0, NULL
};

IntPropertyRNA rna_Curve_render_resolution_v = {
	{(PropertyRNA *)&rna_Curve_eval_time, (PropertyRNA *)&rna_Curve_render_resolution_u,
	-1, "render_resolution_v", 3, 0, 0, 4, 0, "Render Resolution V",
	"Surface resolution in V direction used while rendering (zero uses preview resolution)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, resolv_ren), 1, NULL},
	Curve_render_resolution_v_get, Curve_render_resolution_v_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1024, 0, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_Curve_eval_time = {
	{(PropertyRNA *)&rna_Curve_bevel_object, (PropertyRNA *)&rna_Curve_render_resolution_v,
	-1, "eval_time", 3, 0, 0, 4, 0, "Evaluation Time",
	"Parametric position along the length of the curve that Objects \'following\' it should be at (position is evaluated by dividing by the \'Path Length\' value)",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, ctime), 5, NULL},
	Curve_eval_time_get, Curve_eval_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Curve_bevel_object = {
	{(PropertyRNA *)&rna_Curve_taper_object, (PropertyRNA *)&rna_Curve_eval_time,
	-1, "bevel_object", 8388737, 1, 0, 0, 0, "Bevel Object",
	"The name of the Curve object that defines the bevel shape",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_bevel_object_get, Curve_bevel_object_set, NULL, rna_Curve_otherObject_poll,&RNA_Object
};

PointerPropertyRNA rna_Curve_taper_object = {
	{(PropertyRNA *)&rna_Curve_dimensions, (PropertyRNA *)&rna_Curve_bevel_object,
	-1, "taper_object", 8388737, 1, 0, 0, 0, "Taper Object",
	"Curve object name that defines the taper (width)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_taper_object_get, Curve_taper_object_set, NULL, rna_Curve_otherObject_poll,&RNA_Object
};

static const EnumPropertyItem rna_Curve_dimensions_items[3] = {
	{0, "2D", 0, "2D", "Clamp the Z axis of the curve"},
	{1, "3D", 0, "3D", "Allow editing on the Z axis of this curve, also allows tilt and curve radius to be used"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_dimensions = {
	{(PropertyRNA *)&rna_Curve_fill_mode, (PropertyRNA *)&rna_Curve_taper_object,
	-1, "dimensions", 3, 0, 0, 0, 0, "Dimensions",
	"Select 2D or 3D curve type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_dimensions_get, Curve_dimensions_set, NULL, NULL, NULL, rna_Curve_dimensions_items, 2, 0
};

static const EnumPropertyItem rna_Curve_fill_mode_items[5] = {
	{0, "FULL", 0, "Full", ""},
	{4, "BACK", 0, "Back", ""},
	{2, "FRONT", 0, "Front", ""},
	{6, "HALF", 0, "Half", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_fill_mode = {
	{(PropertyRNA *)&rna_Curve_twist_mode, (PropertyRNA *)&rna_Curve_dimensions,
	-1, "fill_mode", 3, 0, 0, 4, 0, "Fill Mode",
	"Mode of filling curve",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, flag), 0, NULL},
	Curve_fill_mode_get, Curve_fill_mode_set, rna_Curve_fill_mode_itemf, NULL, NULL, rna_Curve_fill_mode_items, 4, 0
};

static const EnumPropertyItem rna_Curve_twist_mode_items[4] = {
	{0, "Z_UP", 0, "Z-Up", "Use Z-Up axis to calculate the curve twist at each point"},
	{3, "MINIMUM", 0, "Minimum", "Use the least twist over the entire curve"},
	{4, "TANGENT", 0, "Tangent", "Use the tangent to calculate twist"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_twist_mode = {
	{(PropertyRNA *)&rna_Curve_taper_radius_mode, (PropertyRNA *)&rna_Curve_fill_mode,
	-1, "twist_mode", 3, 0, 0, 4, 0, "Twist Method",
	"The type of tilt calculation for 3D Curves",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, twist_mode), 1, NULL},
	Curve_twist_mode_get, Curve_twist_mode_set, NULL, NULL, NULL, rna_Curve_twist_mode_items, 3, 3
};

static const EnumPropertyItem rna_Curve_taper_radius_mode_items[4] = {
	{0, "OVERRIDE", 0, "Override", "Override the radius of the spline point with the taper radius"},
	{1, "MULTIPLY", 0, "Multiply", "Multiply the radius of the spline point by the taper radius"},
	{2, "ADD", 0, "Add", "Add the radius of the bevel point to the taper radius"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_taper_radius_mode = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_mapping_start, (PropertyRNA *)&rna_Curve_twist_mode,
	-1, "taper_radius_mode", 3, 0, 0, 4, 0, "Taper Radius",
	"Determine how the effective radius of the spline point is computed when a taper object is specified",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, taper_radius_mode), 2, NULL},
	Curve_taper_radius_mode_get, Curve_taper_radius_mode_set, NULL, NULL, NULL, rna_Curve_taper_radius_mode_items, 3, 0
};

static const EnumPropertyItem rna_Curve_bevel_factor_mapping_start_items[4] = {
	{0, "RESOLUTION", 0, "Resolution", "Map the geometry factor to the number of subdivisions of a spline (U resolution)"},
	{1, "SEGMENTS", 0, "Segments", "Map the geometry factor to the length of a segment and to the number of subdivisions of a segment"},
	{2, "SPLINE", 0, "Spline", "Map the geometry factor to the length of a spline"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_bevel_factor_mapping_start = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_mapping_end, (PropertyRNA *)&rna_Curve_taper_radius_mode,
	-1, "bevel_factor_mapping_start", 3, 0, 0, 4, 0, "Start Mapping Type",
	"Determine how the geometry start factor is mapped to a spline",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac1_mapping), 2, NULL},
	Curve_bevel_factor_mapping_start_get, Curve_bevel_factor_mapping_start_set, NULL, NULL, NULL, rna_Curve_bevel_factor_mapping_start_items, 3, 0
};

static const EnumPropertyItem rna_Curve_bevel_factor_mapping_end_items[4] = {
	{0, "RESOLUTION", 0, "Resolution", "Map the geometry factor to the number of subdivisions of a spline (U resolution)"},
	{1, "SEGMENTS", 0, "Segments", "Map the geometry factor to the length of a segment and to the number of subdivisions of a segment"},
	{2, "SPLINE", 0, "Spline", "Map the geometry factor to the length of a spline"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_bevel_factor_mapping_end = {
	{(PropertyRNA *)&rna_Curve_twist_smooth, (PropertyRNA *)&rna_Curve_bevel_factor_mapping_start,
	-1, "bevel_factor_mapping_end", 3, 0, 0, 4, 0, "End Mapping Type",
	"Determine how the geometry end factor is mapped to a spline",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac2_mapping), 2, NULL},
	Curve_bevel_factor_mapping_end_get, Curve_bevel_factor_mapping_end_set, NULL, NULL, NULL, rna_Curve_bevel_factor_mapping_end_items, 3, 0
};

FloatPropertyRNA rna_Curve_twist_smooth = {
	{(PropertyRNA *)&rna_Curve_use_fill_caps, (PropertyRNA *)&rna_Curve_bevel_factor_mapping_end,
	-1, "twist_smooth", 3, 0, 0, 4, 0, "Twist Smooth",
	"Smoothing iteration for tangents",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, twist_smooth), 5, NULL},
	Curve_twist_smooth_get, Curve_twist_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_Curve_use_fill_caps = {
	{(PropertyRNA *)&rna_Curve_use_map_taper, (PropertyRNA *)&rna_Curve_twist_smooth,
	-1, "use_fill_caps", 3, 0, 0, 0, 0, "Fill Caps",
	"Fill caps for beveled curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_fill_caps_get, Curve_use_fill_caps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curve_use_map_taper = {
	{(PropertyRNA *)&rna_Curve_use_auto_texspace, (PropertyRNA *)&rna_Curve_use_fill_caps,
	-1, "use_map_taper", 3, 0, 0, 0, 0, "Map Taper",
	"Map effect of the taper object to the beveled part of the curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_map_taper_get, Curve_use_map_taper_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Curve_use_auto_texspace = {
	{(PropertyRNA *)&rna_Curve_texspace_location, (PropertyRNA *)&rna_Curve_use_map_taper,
	-1, "use_auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_texspace_set, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_use_auto_texspace_get, Curve_use_auto_texspace_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static float rna_Curve_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Curve_texspace_location = {
	{(PropertyRNA *)&rna_Curve_texspace_size, (PropertyRNA *)&rna_Curve_use_auto_texspace,
	-1, "texspace_location", 3, 0, 0, 0, 0, "Texture Space Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_data, 0, rna_Curve_texspace_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Curve_texspace_location_get, Curve_texspace_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Curve_texspace_location_default
};

static float rna_Curve_texspace_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Curve_texspace_size = {
	{(PropertyRNA *)&rna_Curve_materials, (PropertyRNA *)&rna_Curve_texspace_location,
	-1, "texspace_size", 67108867, 0, 0, 0, 0, "Texture Space Size",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_data, 0, rna_Curve_texspace_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Curve_texspace_size_get, Curve_texspace_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Curve_texspace_size_default
};

CollectionPropertyRNA rna_Curve_materials = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_start, (PropertyRNA *)&rna_Curve_texspace_size,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDMaterials},
	Curve_materials_begin, Curve_materials_next, Curve_materials_end, Curve_materials_get, Curve_materials_length, Curve_materials_lookup_int, Curve_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

FloatPropertyRNA rna_Curve_bevel_factor_start = {
	{(PropertyRNA *)&rna_Curve_bevel_factor_end, (PropertyRNA *)&rna_Curve_materials,
	-1, "bevel_factor_start", 3, 0, 0, 4, 0, "Geometry Start Factor",
	"Define where along the spline the curve geometry starts (0 for the beginning, 1 for the end)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac1), 5, NULL},
	Curve_bevel_factor_start_get, Curve_bevel_factor_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Curve_bevel_factor_end = {
	{(PropertyRNA *)&rna_Curve_is_editmode, (PropertyRNA *)&rna_Curve_bevel_factor_start,
	-1, "bevel_factor_end", 3, 0, 0, 4, 0, "Geometry End Factor",
	"Define where along the spline the curve geometry ends (0 for the beginning, 1 for the end)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, bevfac2), 5, NULL},
	Curve_bevel_factor_end_get, Curve_bevel_factor_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_Curve_is_editmode = {
	{(PropertyRNA *)&rna_Curve_animation_data, (PropertyRNA *)&rna_Curve_bevel_factor_end,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Curve_is_editmode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Curve_animation_data = {
	{NULL, (PropertyRNA *)&rna_Curve_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Curve_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

static float rna_Curve_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Curve_transform_matrix = {
	{(PropertyRNA *)&rna_Curve_transform_shape_keys, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Curve_transform_matrix_default
};

BoolPropertyRNA rna_Curve_transform_shape_keys = {
	{NULL, (PropertyRNA *)&rna_Curve_transform_matrix,
	-1, "shape_keys", 3, 0, 0, 0, 0, "",
	"Transform Shape Keys",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Curve_transform_func = {
	{(FunctionRNA *)&rna_Curve_validate_material_indices_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Curve_transform_matrix, (PropertyRNA *)&rna_Curve_transform_shape_keys}},
	"transform", 0, "Transform curve by a matrix",
	Curve_transform_call,
	NULL
};

BoolPropertyRNA rna_Curve_validate_material_indices_result = {
	{NULL, NULL,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Curve_validate_material_indices_func = {
	{(FunctionRNA *)&rna_Curve_update_gpu_tag_func, (FunctionRNA *)&rna_Curve_transform_func,
	NULL,
	{(PropertyRNA *)&rna_Curve_validate_material_indices_result, (PropertyRNA *)&rna_Curve_validate_material_indices_result}},
	"validate_material_indices", 0, "Validate material indices of splines or letters, return True when the curve has had invalid indices corrected (to default 0)",
	Curve_validate_material_indices_call,
	(PropertyRNA *)&rna_Curve_validate_material_indices_result
};

FunctionRNA rna_Curve_update_gpu_tag_func = {
	{NULL, (FunctionRNA *)&rna_Curve_validate_material_indices_func,
	NULL,
	{NULL, NULL}},
	"update_gpu_tag", 0, "update_gpu_tag",
	Curve_update_gpu_tag_call,
	NULL
};

StructRNA RNA_Curve = {
	{(ContainerRNA *)&RNA_CurveSplines, (ContainerRNA *)&RNA_Context,
	NULL,
	{(PropertyRNA *)&rna_Curve_shape_keys, (PropertyRNA *)&rna_Curve_animation_data}},
	"Curve", NULL, NULL, 519, NULL, "Curve",
	"Curve data-block storing curves, splines and NURBS",
	"*", 161,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_Curve_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Curve_transform_func, (FunctionRNA *)&rna_Curve_update_gpu_tag_func}
};

/* Curve Splines */
CollectionPropertyRNA rna_CurveSplines_rna_properties = {
	{(PropertyRNA *)&rna_CurveSplines_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSplines_rna_properties_begin, CurveSplines_rna_properties_next, CurveSplines_rna_properties_end, CurveSplines_rna_properties_get, NULL, NULL, CurveSplines_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CurveSplines_rna_type = {
	{(PropertyRNA *)&rna_CurveSplines_active, (PropertyRNA *)&rna_CurveSplines_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSplines_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_CurveSplines_active = {
	{NULL, (PropertyRNA *)&rna_CurveSplines_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Spline",
	"Active curve spline",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CurveSplines_active_get, CurveSplines_active_set, NULL, NULL,&RNA_Spline
};

static const EnumPropertyItem rna_CurveSplines_new_type_items[4] = {
	{0, "POLY", 0, "Poly", ""},
	{1, "BEZIER", 0, "Bezier", ""},
	{4, "NURBS", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveSplines_new_type = {
	{(PropertyRNA *)&rna_CurveSplines_new_spline, NULL,
	-1, "type", 3, 0, 1, 0, 0, "",
	"type for the new spline",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_CurveSplines_new_type_items, 3, 0
};

PointerPropertyRNA rna_CurveSplines_new_spline = {
	{NULL, (PropertyRNA *)&rna_CurveSplines_new_type,
	-1, "spline", 8388608, 0, 2, 0, 0, "",
	"The newly created spline",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Spline
};

FunctionRNA rna_CurveSplines_new_func = {
	{(FunctionRNA *)&rna_CurveSplines_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_CurveSplines_new_type, (PropertyRNA *)&rna_CurveSplines_new_spline}},
	"new", 0, "Add a new spline to the curve",
	CurveSplines_new_call,
	(PropertyRNA *)&rna_CurveSplines_new_spline
};

PointerPropertyRNA rna_CurveSplines_remove_spline = {
	{NULL, NULL,
	-1, "spline", 262144, 0, 5, 0, 0, "",
	"The spline to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Spline
};

FunctionRNA rna_CurveSplines_remove_func = {
	{(FunctionRNA *)&rna_CurveSplines_clear_func, (FunctionRNA *)&rna_CurveSplines_new_func,
	NULL,
	{(PropertyRNA *)&rna_CurveSplines_remove_spline, (PropertyRNA *)&rna_CurveSplines_remove_spline}},
	"remove", 16, "Remove a spline from a curve",
	CurveSplines_remove_call,
	NULL
};

FunctionRNA rna_CurveSplines_clear_func = {
	{NULL, (FunctionRNA *)&rna_CurveSplines_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all splines from a curve",
	CurveSplines_clear_call,
	NULL
};

StructRNA RNA_CurveSplines = {
	{(ContainerRNA *)&RNA_SurfaceCurve, (ContainerRNA *)&RNA_Curve,
	NULL,
	{(PropertyRNA *)&rna_CurveSplines_rna_properties, (PropertyRNA *)&rna_CurveSplines_active}},
	"CurveSplines", NULL, NULL, 516, NULL, "Curve Splines",
	"Collection of curve splines",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CurveSplines_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CurveSplines_new_func, (FunctionRNA *)&rna_CurveSplines_clear_func}
};

/* Surface Curve */
StructRNA RNA_SurfaceCurve = {
	{(ContainerRNA *)&RNA_TextCurve, (ContainerRNA *)&RNA_CurveSplines,
	NULL,
	{NULL, NULL}},
	"SurfaceCurve", NULL, NULL, 519, NULL, "Surface Curve",
	"Curve data-block used for storing surfaces",
	"*", 188,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Curve,
	NULL,
	rna_Curve_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Text Curve */
static const EnumPropertyItem rna_TextCurve_align_x_items[6] = {
	{0, "LEFT", 390, "Left", "Align text to the left"},
	{1, "CENTER", 391, "Center", "Center text"},
	{2, "RIGHT", 392, "Right", "Align text to the right"},
	{3, "JUSTIFY", 393, "Justify", "Align to the left and the right"},
	{4, "FLUSH", 394, "Flush", "Align to the left and the right, with equal character spacing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TextCurve_align_x = {
	{(PropertyRNA *)&rna_TextCurve_align_y, NULL,
	-1, "align_x", 3, 0, 0, 4, 0, "Text Horizontal Align",
	"Text horizontal align from the object center",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, spacemode), 2, NULL},
	TextCurve_align_x_get, TextCurve_align_x_set, NULL, NULL, NULL, rna_TextCurve_align_x_items, 5, 0
};

static const EnumPropertyItem rna_TextCurve_align_y_items[6] = {
	{0, "TOP_BASELINE", 395, "Top Base-Line", "Align to top but use the base-line of the text"},
	{1, "TOP", 395, "Top", "Align text to the top"},
	{2, "CENTER", 396, "Center", "Align text to the middle"},
	{4, "BOTTOM", 397, "Bottom", "Align text to the bottom"},
	{3, "BOTTOM_BASELINE", 397, "Bottom Base-Line", "Align text to the bottom but use the base-line of the text"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TextCurve_align_y = {
	{(PropertyRNA *)&rna_TextCurve_overflow, (PropertyRNA *)&rna_TextCurve_align_x,
	-1, "align_y", 3, 0, 0, 4, 0, "Text Vertical Align",
	"Text vertical align from the object center",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, align_y), 2, NULL},
	TextCurve_align_y_get, TextCurve_align_y_set, NULL, NULL, NULL, rna_TextCurve_align_y_items, 5, 0
};

static const EnumPropertyItem rna_TextCurve_overflow_items[4] = {
	{0, "NONE", 0, "Overflow", "Let the text overflow outside the text boxes"},
	{1, "SCALE", 0, "Scale to Fit", "Scale down the text to fit inside the text boxes"},
	{2, "TRUNCATE", 0, "Truncate", "Truncate the text that would go outside the text boxes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TextCurve_overflow = {
	{(PropertyRNA *)&rna_TextCurve_size, (PropertyRNA *)&rna_TextCurve_align_y,
	-1, "overflow", 3, 0, 0, 4, 0, "Textbox Overflow",
	"Handle the text behavior when it doesn\'t fit in the text boxes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, overflow), 2, NULL},
	TextCurve_overflow_get, TextCurve_overflow_set, NULL, NULL, NULL, rna_TextCurve_overflow_items, 3, 0
};

FloatPropertyRNA rna_TextCurve_size = {
	{(PropertyRNA *)&rna_TextCurve_small_caps_scale, (PropertyRNA *)&rna_TextCurve_overflow,
	-1, "size", 3, 0, 0, 4, 0, "Font Size",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {3, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, fsize), 5, NULL},
	TextCurve_size_get, TextCurve_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 10.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_TextCurve_small_caps_scale = {
	{(PropertyRNA *)&rna_TextCurve_space_line, (PropertyRNA *)&rna_TextCurve_size,
	-1, "small_caps_scale", 3, 0, 0, 4, 0, "Small Caps",
	"Scale of small capitals",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, smallcaps_scale), 5, NULL},
	TextCurve_small_caps_scale_get, TextCurve_small_caps_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.7500000000f, NULL
};

FloatPropertyRNA rna_TextCurve_space_line = {
	{(PropertyRNA *)&rna_TextCurve_space_word, (PropertyRNA *)&rna_TextCurve_small_caps_scale,
	-1, "space_line", 3, 0, 0, 4, 0, "Distance between lines of text",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, linedist), 5, NULL},
	TextCurve_space_line_get, TextCurve_space_line_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_TextCurve_space_word = {
	{(PropertyRNA *)&rna_TextCurve_space_character, (PropertyRNA *)&rna_TextCurve_space_line,
	-1, "space_word", 3, 0, 0, 4, 0, "Spacing between words",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, wordspace), 5, NULL},
	TextCurve_space_word_get, TextCurve_space_word_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_TextCurve_space_character = {
	{(PropertyRNA *)&rna_TextCurve_shear, (PropertyRNA *)&rna_TextCurve_space_word,
	-1, "space_character", 3, 0, 0, 4, 0, "Global spacing between characters",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, spacing), 5, NULL},
	TextCurve_space_character_get, TextCurve_space_character_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_TextCurve_shear = {
	{(PropertyRNA *)&rna_TextCurve_offset_x, (PropertyRNA *)&rna_TextCurve_space_character,
	-1, "shear", 3, 0, 0, 4, 0, "Shear",
	"Italic angle of the characters",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, shear), 5, NULL},
	TextCurve_shear_get, TextCurve_shear_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_offset_x = {
	{(PropertyRNA *)&rna_TextCurve_offset_y, (PropertyRNA *)&rna_TextCurve_shear,
	-1, "offset_x", 3, 0, 0, 4, 0, "X Offset",
	"Horizontal offset from the object origin",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, xof), 5, NULL},
	TextCurve_offset_x_get, TextCurve_offset_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_offset_y = {
	{(PropertyRNA *)&rna_TextCurve_underline_position, (PropertyRNA *)&rna_TextCurve_offset_x,
	-1, "offset_y", 3, 0, 0, 4, 0, "Y Offset",
	"Vertical offset from the object origin",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, yof), 5, NULL},
	TextCurve_offset_y_get, TextCurve_offset_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_underline_position = {
	{(PropertyRNA *)&rna_TextCurve_underline_height, (PropertyRNA *)&rna_TextCurve_offset_y,
	-1, "underline_position", 3, 0, 0, 4, 0, "Underline Position",
	"Vertical position of underline",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, ulpos), 5, NULL},
	TextCurve_underline_position_get, TextCurve_underline_position_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -0.2000000030f, 0.8000000119f, -0.2000000030f, 0.8000000119f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_underline_height = {
	{(PropertyRNA *)&rna_TextCurve_text_boxes, (PropertyRNA *)&rna_TextCurve_underline_position,
	-1, "underline_height", 3, 0, 0, 4, 0, "Underline Thickness",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, ulheight), 5, NULL},
	TextCurve_underline_height_get, TextCurve_underline_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.8000000119f, 0.0f, 0.8000000119f, 10.0f, 3, 0.0500000007f, NULL
};

CollectionPropertyRNA rna_TextCurve_text_boxes = {
	{(PropertyRNA *)&rna_TextCurve_active_textbox, (PropertyRNA *)&rna_TextCurve_underline_height,
	-1, "text_boxes", 0, 0, 0, 8, 0, "Textboxes",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_text_boxes_begin, TextCurve_text_boxes_next, TextCurve_text_boxes_end, TextCurve_text_boxes_get, TextCurve_text_boxes_length, TextCurve_text_boxes_lookup_int, NULL, NULL, &RNA_TextBox
};

IntPropertyRNA rna_TextCurve_active_textbox = {
	{(PropertyRNA *)&rna_TextCurve_family, (PropertyRNA *)&rna_TextCurve_text_boxes,
	-1, "active_textbox", 3, 0, 0, 4, 0, "Active Text Box",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Curve, actbox), 0, NULL},
	TextCurve_active_textbox_get, TextCurve_active_textbox_set, NULL, NULL, rna_Curve_active_textbox_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_TextCurve_family = {
	{(PropertyRNA *)&rna_TextCurve_body, (PropertyRNA *)&rna_TextCurve_active_textbox,
	-1, "family", 262145, 0, 0, 0, 0, "Object Font",
	"Use objects as font characters (give font objects a common name followed by the character they represent, eg. \'family-a\', \'family-b\', etc, set this setting to \'family-\', and turn on Vertex Instancing)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_family_get, TextCurve_family_length, TextCurve_family_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_TextCurve_body = {
	{(PropertyRNA *)&rna_TextCurve_body_format, (PropertyRNA *)&rna_TextCurve_family,
	-1, "body", 262145, 0, 0, 0, 0, "Body Text",
	"Content of this text object",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_body_get, TextCurve_body_length, TextCurve_body_set, NULL, NULL, NULL, NULL, 0, 8192, ""
};

CollectionPropertyRNA rna_TextCurve_body_format = {
	{(PropertyRNA *)&rna_TextCurve_follow_curve, (PropertyRNA *)&rna_TextCurve_body,
	-1, "body_format", 0, 0, 0, 8, 0, "Character Info",
	"Stores the style of each character",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_body_format_begin, TextCurve_body_format_next, TextCurve_body_format_end, TextCurve_body_format_get, TextCurve_body_format_length, TextCurve_body_format_lookup_int, NULL, NULL, &RNA_TextCharacterFormat
};

PointerPropertyRNA rna_TextCurve_follow_curve = {
	{(PropertyRNA *)&rna_TextCurve_font, (PropertyRNA *)&rna_TextCurve_body_format,
	-1, "follow_curve", 8388737, 1, 0, 0, 0, "Text on Curve",
	"Curve deforming text object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_follow_curve_get, TextCurve_follow_curve_set, NULL, rna_Curve_otherObject_poll,&RNA_Object
};

PointerPropertyRNA rna_TextCurve_font = {
	{(PropertyRNA *)&rna_TextCurve_font_bold, (PropertyRNA *)&rna_TextCurve_follow_curve,
	-1, "font", 8388801, 1, 0, 0, 0, "Font",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_font_get, TextCurve_font_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_bold = {
	{(PropertyRNA *)&rna_TextCurve_font_italic, (PropertyRNA *)&rna_TextCurve_font,
	-1, "font_bold", 8388801, 1, 0, 0, 0, "Font Bold",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_font_bold_get, TextCurve_font_bold_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_italic = {
	{(PropertyRNA *)&rna_TextCurve_font_bold_italic, (PropertyRNA *)&rna_TextCurve_font_bold,
	-1, "font_italic", 8388801, 1, 0, 0, 0, "Font Italic",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_font_italic_get, TextCurve_font_italic_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_bold_italic = {
	{(PropertyRNA *)&rna_TextCurve_edit_format, (PropertyRNA *)&rna_TextCurve_font_italic,
	-1, "font_bold_italic", 8388801, 1, 0, 0, 0, "Font Bold Italic",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_font_bold_italic_get, TextCurve_font_bold_italic_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_edit_format = {
	{(PropertyRNA *)&rna_TextCurve_use_fast_edit, (PropertyRNA *)&rna_TextCurve_font_bold_italic,
	-1, "edit_format", 8388608, 0, 0, 0, 0, "Edit Format",
	"Editing settings character formatting",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_edit_format_get, NULL, NULL, NULL,&RNA_TextCharacterFormat
};

BoolPropertyRNA rna_TextCurve_use_fast_edit = {
	{NULL, (PropertyRNA *)&rna_TextCurve_edit_format,
	-1, "use_fast_edit", 3, 0, 0, 0, 0, "Fast Editing",
	"Don\'t fill polygons while editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCurve_use_fast_edit_get, TextCurve_use_fast_edit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_TextCurve = {
	{(ContainerRNA *)&RNA_TextBox, (ContainerRNA *)&RNA_SurfaceCurve,
	NULL,
	{(PropertyRNA *)&rna_TextCurve_align_x, (PropertyRNA *)&rna_TextCurve_use_fast_edit}},
	"TextCurve", NULL, NULL, 519, NULL, "Text Curve",
	"Curve data-block used for storing text",
	"*", 186,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_Curve,
	NULL,
	rna_Curve_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Text Box */
CollectionPropertyRNA rna_TextBox_rna_properties = {
	{(PropertyRNA *)&rna_TextBox_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextBox_rna_properties_begin, TextBox_rna_properties_next, TextBox_rna_properties_end, TextBox_rna_properties_get, NULL, NULL, TextBox_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TextBox_rna_type = {
	{(PropertyRNA *)&rna_TextBox_x, (PropertyRNA *)&rna_TextBox_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextBox_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_TextBox_x = {
	{(PropertyRNA *)&rna_TextBox_y, (PropertyRNA *)&rna_TextBox_rna_type,
	-1, "x", 3, 0, 0, 4, 0, "Textbox X Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, x), 5, NULL},
	TextBox_x_get, TextBox_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextBox_y = {
	{(PropertyRNA *)&rna_TextBox_width, (PropertyRNA *)&rna_TextBox_x,
	-1, "y", 3, 0, 0, 4, 0, "Textbox Y Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, y), 5, NULL},
	TextBox_y_get, TextBox_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -50.0f, 50.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextBox_width = {
	{(PropertyRNA *)&rna_TextBox_height, (PropertyRNA *)&rna_TextBox_y,
	-1, "width", 3, 0, 0, 4, 0, "Textbox Width",
	"",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, w), 5, NULL},
	TextBox_width_get, TextBox_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 50.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextBox_height = {
	{NULL, (PropertyRNA *)&rna_TextBox_width,
	-1, "height", 3, 0, 0, 4, 0, "Textbox Height",
	"",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(TextBox, h), 5, NULL},
	TextBox_height_get, TextBox_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 50.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_TextBox = {
	{(ContainerRNA *)&RNA_TextCharacterFormat, (ContainerRNA *)&RNA_TextCurve,
	NULL,
	{(PropertyRNA *)&rna_TextBox_rna_properties, (PropertyRNA *)&rna_TextBox_height}},
	"TextBox", NULL, NULL, 516, NULL, "Text Box",
	"Text bounding box for layout",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TextBox_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_TextBox_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Text Character Format */
CollectionPropertyRNA rna_TextCharacterFormat_rna_properties = {
	{(PropertyRNA *)&rna_TextCharacterFormat_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_rna_properties_begin, TextCharacterFormat_rna_properties_next, TextCharacterFormat_rna_properties_end, TextCharacterFormat_rna_properties_get, NULL, NULL, TextCharacterFormat_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TextCharacterFormat_rna_type = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_bold, (PropertyRNA *)&rna_TextCharacterFormat_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_TextCharacterFormat_use_bold = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_italic, (PropertyRNA *)&rna_TextCharacterFormat_rna_type,
	-1, "use_bold", 3, 0, 0, 0, 0, "Bold",
	"",
	398, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_use_bold_get, TextCharacterFormat_use_bold_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_TextCharacterFormat_use_italic = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_underline, (PropertyRNA *)&rna_TextCharacterFormat_use_bold,
	-1, "use_italic", 3, 0, 0, 0, 0, "Italic",
	"",
	399, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_use_italic_get, TextCharacterFormat_use_italic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_TextCharacterFormat_use_underline = {
	{(PropertyRNA *)&rna_TextCharacterFormat_use_small_caps, (PropertyRNA *)&rna_TextCharacterFormat_use_italic,
	-1, "use_underline", 3, 0, 0, 0, 0, "Underline",
	"",
	400, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_use_underline_get, TextCharacterFormat_use_underline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_TextCharacterFormat_use_small_caps = {
	{(PropertyRNA *)&rna_TextCharacterFormat_material_index, (PropertyRNA *)&rna_TextCharacterFormat_use_underline,
	-1, "use_small_caps", 3, 0, 0, 0, 0, "Small Caps",
	"",
	401, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_use_small_caps_get, TextCharacterFormat_use_small_caps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_TextCharacterFormat_material_index = {
	{(PropertyRNA *)&rna_TextCharacterFormat_kerning, (PropertyRNA *)&rna_TextCharacterFormat_use_small_caps,
	-1, "material_index", 3, 0, 0, 0, 0, "Material Index",
	"Material slot index of this character",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TextCharacterFormat_material_index_get, TextCharacterFormat_material_index_set, NULL, NULL, rna_Curve_material_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_TextCharacterFormat_kerning = {
	{NULL, (PropertyRNA *)&rna_TextCharacterFormat_material_index,
	-1, "kerning", 3, 0, 0, 4, 0, "Kerning",
	"Spacing between characters",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CharInfo, kern), 1, NULL},
	TextCharacterFormat_kerning_get, TextCharacterFormat_kerning_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

StructRNA RNA_TextCharacterFormat = {
	{(ContainerRNA *)&RNA_SplinePoint, (ContainerRNA *)&RNA_TextBox,
	NULL,
	{(PropertyRNA *)&rna_TextCharacterFormat_rna_properties, (PropertyRNA *)&rna_TextCharacterFormat_kerning}},
	"TextCharacterFormat", NULL, NULL, 516, NULL, "Text Character Format",
	"Text character formatting settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TextCharacterFormat_rna_properties,
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

/* SplinePoint */
CollectionPropertyRNA rna_SplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_SplinePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplinePoint_rna_properties_begin, SplinePoint_rna_properties_next, SplinePoint_rna_properties_end, SplinePoint_rna_properties_get, NULL, NULL, SplinePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SplinePoint_rna_type = {
	{(PropertyRNA *)&rna_SplinePoint_select, (PropertyRNA *)&rna_SplinePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplinePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_SplinePoint_select = {
	{(PropertyRNA *)&rna_SplinePoint_hide, (PropertyRNA *)&rna_SplinePoint_rna_type,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplinePoint_select_get, SplinePoint_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SplinePoint_hide = {
	{(PropertyRNA *)&rna_SplinePoint_co, (PropertyRNA *)&rna_SplinePoint_select,
	-1, "hide", 3, 0, 0, 4, 0, "Hide",
	"Visibility status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, hide), 1, NULL},
	SplinePoint_hide_get, SplinePoint_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_SplinePoint_co_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SplinePoint_co = {
	{(PropertyRNA *)&rna_SplinePoint_weight, (PropertyRNA *)&rna_SplinePoint_hide,
	-1, "co", 3, 0, 0, 4, 0, "Point",
	"Point coordinates",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {4, 0, 0}, 4,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, vec), 5, NULL},
	NULL, NULL, SplinePoint_co_get, SplinePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_SplinePoint_co_default
};

FloatPropertyRNA rna_SplinePoint_weight = {
	{(PropertyRNA *)&rna_SplinePoint_tilt, (PropertyRNA *)&rna_SplinePoint_co,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"NURBS weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, vec[3]), 5, NULL},
	SplinePoint_weight_get, SplinePoint_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SplinePoint_tilt = {
	{(PropertyRNA *)&rna_SplinePoint_weight_softbody, (PropertyRNA *)&rna_SplinePoint_weight,
	-1, "tilt", 3, 0, 0, 4, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, tilt), 5, NULL},
	SplinePoint_tilt_get, SplinePoint_tilt_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SplinePoint_weight_softbody = {
	{(PropertyRNA *)&rna_SplinePoint_radius, (PropertyRNA *)&rna_SplinePoint_tilt,
	-1, "weight_softbody", 3, 0, 0, 4, 0, "Weight",
	"Softbody goal weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, weight), 5, NULL},
	SplinePoint_weight_softbody_get, SplinePoint_weight_softbody_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SplinePoint_radius = {
	{NULL, (PropertyRNA *)&rna_SplinePoint_weight_softbody,
	-1, "radius", 3, 0, 0, 4, 0, "Bevel Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BPoint, radius), 5, NULL},
	SplinePoint_radius_get, SplinePoint_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_SplinePoint = {
	{(ContainerRNA *)&RNA_BezierSplinePoint, (ContainerRNA *)&RNA_TextCharacterFormat,
	NULL,
	{(PropertyRNA *)&rna_SplinePoint_rna_properties, (PropertyRNA *)&rna_SplinePoint_radius}},
	"SplinePoint", NULL, NULL, 516, NULL, "SplinePoint",
	"Spline point without handles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SplinePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Curve_spline_point_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Bezier Curve Point */
CollectionPropertyRNA rna_BezierSplinePoint_rna_properties = {
	{(PropertyRNA *)&rna_BezierSplinePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_rna_properties_begin, BezierSplinePoint_rna_properties_next, BezierSplinePoint_rna_properties_end, BezierSplinePoint_rna_properties_get, NULL, NULL, BezierSplinePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BezierSplinePoint_rna_type = {
	{(PropertyRNA *)&rna_BezierSplinePoint_select_left_handle, (PropertyRNA *)&rna_BezierSplinePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BezierSplinePoint_select_left_handle = {
	{(PropertyRNA *)&rna_BezierSplinePoint_select_right_handle, (PropertyRNA *)&rna_BezierSplinePoint_rna_type,
	-1, "select_left_handle", 3, 0, 0, 0, 0, "Handle 1 selected",
	"Handle 1 selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_select_left_handle_get, BezierSplinePoint_select_left_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BezierSplinePoint_select_right_handle = {
	{(PropertyRNA *)&rna_BezierSplinePoint_select_control_point, (PropertyRNA *)&rna_BezierSplinePoint_select_left_handle,
	-1, "select_right_handle", 3, 0, 0, 0, 0, "Handle 2 selected",
	"Handle 2 selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_select_right_handle_get, BezierSplinePoint_select_right_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BezierSplinePoint_select_control_point = {
	{(PropertyRNA *)&rna_BezierSplinePoint_hide, (PropertyRNA *)&rna_BezierSplinePoint_select_right_handle,
	-1, "select_control_point", 3, 0, 0, 0, 0, "Control Point selected",
	"Control point selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_select_control_point_get, BezierSplinePoint_select_control_point_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BezierSplinePoint_hide = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_left_type, (PropertyRNA *)&rna_BezierSplinePoint_select_control_point,
	-1, "hide", 3, 0, 0, 4, 0, "Hide",
	"Visibility status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, hide), 2, NULL},
	BezierSplinePoint_hide_get, BezierSplinePoint_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_BezierSplinePoint_handle_left_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{1, "AUTO", 0, "Auto", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BezierSplinePoint_handle_left_type = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_right_type, (PropertyRNA *)&rna_BezierSplinePoint_hide,
	-1, "handle_left_type", 3, 0, 0, 0, 0, "Handle 1 Type",
	"Handle types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_points, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_handle_left_type_get, BezierSplinePoint_handle_left_type_set, NULL, NULL, NULL, rna_BezierSplinePoint_handle_left_type_items, 4, 0
};

static const EnumPropertyItem rna_BezierSplinePoint_handle_right_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{1, "AUTO", 0, "Auto", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BezierSplinePoint_handle_right_type = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_left, (PropertyRNA *)&rna_BezierSplinePoint_handle_left_type,
	-1, "handle_right_type", 3, 0, 0, 0, 0, "Handle 2 Type",
	"Handle types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_points, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BezierSplinePoint_handle_right_type_get, BezierSplinePoint_handle_right_type_set, NULL, NULL, NULL, rna_BezierSplinePoint_handle_right_type_items, 4, 0
};

static float rna_BezierSplinePoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_handle_left = {
	{(PropertyRNA *)&rna_BezierSplinePoint_co, (PropertyRNA *)&rna_BezierSplinePoint_handle_right_type,
	-1, "handle_left", 3, 0, 0, 0, 0, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, BezierSplinePoint_handle_left_get, BezierSplinePoint_handle_left_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_BezierSplinePoint_handle_left_default
};

static float rna_BezierSplinePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_co = {
	{(PropertyRNA *)&rna_BezierSplinePoint_handle_right, (PropertyRNA *)&rna_BezierSplinePoint_handle_left,
	-1, "co", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, BezierSplinePoint_co_get, BezierSplinePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_BezierSplinePoint_co_default
};

static float rna_BezierSplinePoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_handle_right = {
	{(PropertyRNA *)&rna_BezierSplinePoint_tilt, (PropertyRNA *)&rna_BezierSplinePoint_co,
	-1, "handle_right", 3, 0, 0, 0, 0, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, BezierSplinePoint_handle_right_get, BezierSplinePoint_handle_right_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_BezierSplinePoint_handle_right_default
};

FloatPropertyRNA rna_BezierSplinePoint_tilt = {
	{(PropertyRNA *)&rna_BezierSplinePoint_weight_softbody, (PropertyRNA *)&rna_BezierSplinePoint_handle_right,
	-1, "tilt", 3, 0, 0, 4, 0, "Tilt",
	"Tilt in 3D View",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, tilt), 5, NULL},
	BezierSplinePoint_tilt_get, BezierSplinePoint_tilt_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -376.9911193848f, 376.9911193848f, -376.9911193848f, 376.9911193848f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BezierSplinePoint_weight_softbody = {
	{(PropertyRNA *)&rna_BezierSplinePoint_radius, (PropertyRNA *)&rna_BezierSplinePoint_tilt,
	-1, "weight_softbody", 3, 0, 0, 4, 0, "Weight",
	"Softbody goal weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, weight), 5, NULL},
	BezierSplinePoint_weight_softbody_get, BezierSplinePoint_weight_softbody_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BezierSplinePoint_radius = {
	{NULL, (PropertyRNA *)&rna_BezierSplinePoint_weight_softbody,
	-1, "radius", 3, 0, 0, 4, 0, "Bevel Radius",
	"Radius for beveling",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, radius), 5, NULL},
	BezierSplinePoint_radius_get, BezierSplinePoint_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BezierSplinePoint = {
	{(ContainerRNA *)&RNA_Spline, (ContainerRNA *)&RNA_SplinePoint,
	NULL,
	{(PropertyRNA *)&rna_BezierSplinePoint_rna_properties, (PropertyRNA *)&rna_BezierSplinePoint_radius}},
	"BezierSplinePoint", NULL, NULL, 516, NULL, "Bezier Curve Point",
	"Bezier curve point with two handles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BezierSplinePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Curve_spline_point_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Spline */
CollectionPropertyRNA rna_Spline_rna_properties = {
	{(PropertyRNA *)&rna_Spline_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_rna_properties_begin, Spline_rna_properties_next, Spline_rna_properties_end, Spline_rna_properties_get, NULL, NULL, Spline_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Spline_rna_type = {
	{(PropertyRNA *)&rna_Spline_points, (PropertyRNA *)&rna_Spline_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Spline_points = {
	{(PropertyRNA *)&rna_Spline_bezier_points, (PropertyRNA *)&rna_Spline_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Points",
	"Collection of points that make up this poly or nurbs spline",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_SplinePoints},
	Spline_points_begin, Spline_points_next, Spline_points_end, Spline_points_get, Spline_points_length, Spline_points_lookup_int, NULL, NULL, &RNA_SplinePoint
};

CollectionPropertyRNA rna_Spline_bezier_points = {
	{(PropertyRNA *)&rna_Spline_tilt_interpolation, (PropertyRNA *)&rna_Spline_points,
	-1, "bezier_points", 0, 0, 0, 8, 0, "Bezier Points",
	"Collection of points for Bezier curves only",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_SplineBezierPoints},
	Spline_bezier_points_begin, Spline_bezier_points_next, Spline_bezier_points_end, Spline_bezier_points_get, Spline_bezier_points_length, Spline_bezier_points_lookup_int, NULL, NULL, &RNA_BezierSplinePoint
};

static const EnumPropertyItem rna_Spline_tilt_interpolation_items[5] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "CARDINAL", 0, "Cardinal", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "EASE", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Spline_tilt_interpolation = {
	{(PropertyRNA *)&rna_Spline_radius_interpolation, (PropertyRNA *)&rna_Spline_bezier_points,
	-1, "tilt_interpolation", 3, 0, 0, 4, 0, "Tilt Interpolation",
	"The type of tilt interpolation for 3D, Bezier curves",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, tilt_interp), 1, NULL},
	Spline_tilt_interpolation_get, Spline_tilt_interpolation_set, NULL, NULL, NULL, rna_Spline_tilt_interpolation_items, 4, 0
};

static const EnumPropertyItem rna_Spline_radius_interpolation_items[5] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "CARDINAL", 0, "Cardinal", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "EASE", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Spline_radius_interpolation = {
	{(PropertyRNA *)&rna_Spline_type, (PropertyRNA *)&rna_Spline_tilt_interpolation,
	-1, "radius_interpolation", 3, 0, 0, 4, 0, "Radius Interpolation",
	"The type of radius interpolation for Bezier curves",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, radius_interp), 1, NULL},
	Spline_radius_interpolation_get, Spline_radius_interpolation_set, NULL, NULL, NULL, rna_Spline_radius_interpolation_items, 4, 0
};

static const EnumPropertyItem rna_Spline_type_items[4] = {
	{0, "POLY", 0, "Poly", ""},
	{1, "BEZIER", 0, "Bezier", ""},
	{4, "NURBS", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Spline_type = {
	{(PropertyRNA *)&rna_Spline_point_count_u, (PropertyRNA *)&rna_Spline_radius_interpolation,
	-1, "type", 3, 0, 0, 0, 0, "Type",
	"The interpolation type for this curve element",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_type_get, Spline_type_set, NULL, NULL, NULL, rna_Spline_type_items, 3, 0
};

IntPropertyRNA rna_Spline_point_count_u = {
	{(PropertyRNA *)&rna_Spline_point_count_v, (PropertyRNA *)&rna_Spline_type,
	-1, "point_count_u", 2, 0, 0, 4, 0, "Points U",
	"Total number points for the curve or surface in the U direction",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, pntsu), 0, NULL},
	Spline_point_count_u_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Spline_point_count_v = {
	{(PropertyRNA *)&rna_Spline_order_u, (PropertyRNA *)&rna_Spline_point_count_u,
	-1, "point_count_v", 2, 0, 0, 4, 0, "Points V",
	"Total number points for the surface on the V direction",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, pntsv), 0, NULL},
	Spline_point_count_v_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Spline_order_u = {
	{(PropertyRNA *)&rna_Spline_order_v, (PropertyRNA *)&rna_Spline_point_count_v,
	-1, "order_u", 1, 0, 0, 4, 0, "Order U",
	"NURBS order in the U direction (for splines and surfaces, higher values let points influence a greater area)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, orderu), 1, NULL},
	Spline_order_u_get, Spline_order_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2, 6, 2, 6, 1, 0, NULL
};

IntPropertyRNA rna_Spline_order_v = {
	{(PropertyRNA *)&rna_Spline_resolution_u, (PropertyRNA *)&rna_Spline_order_u,
	-1, "order_v", 1, 0, 0, 4, 0, "Order V",
	"NURBS order in the V direction (for surfaces only, higher values let points influence a greater area)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, orderv), 1, NULL},
	Spline_order_v_get, Spline_order_v_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2, 6, 2, 6, 1, 0, NULL
};

IntPropertyRNA rna_Spline_resolution_u = {
	{(PropertyRNA *)&rna_Spline_resolution_v, (PropertyRNA *)&rna_Spline_order_v,
	-1, "resolution_u", 1, 0, 0, 4, 0, "Resolution U",
	"Curve or Surface subdivisions per segment",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, resolu), 1, NULL},
	Spline_resolution_u_get, Spline_resolution_u_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 64, 1, 1024, 1, 0, NULL
};

IntPropertyRNA rna_Spline_resolution_v = {
	{(PropertyRNA *)&rna_Spline_use_cyclic_u, (PropertyRNA *)&rna_Spline_resolution_u,
	-1, "resolution_v", 1, 0, 0, 4, 0, "Resolution V",
	"Surface subdivisions per segment",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, resolv), 1, NULL},
	Spline_resolution_v_get, Spline_resolution_v_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 64, 1, 1024, 1, 0, NULL
};

BoolPropertyRNA rna_Spline_use_cyclic_u = {
	{(PropertyRNA *)&rna_Spline_use_cyclic_v, (PropertyRNA *)&rna_Spline_resolution_v,
	-1, "use_cyclic_u", 1, 0, 0, 0, 0, "Cyclic U",
	"Make this curve or surface a closed loop in the U direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_cyclic_u, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_cyclic_u_get, Spline_use_cyclic_u_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_use_cyclic_v = {
	{(PropertyRNA *)&rna_Spline_use_endpoint_u, (PropertyRNA *)&rna_Spline_use_cyclic_u,
	-1, "use_cyclic_v", 1, 0, 0, 0, 0, "Cyclic V",
	"Make this surface a closed loop in the V direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_cyclic_v, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_cyclic_v_get, Spline_use_cyclic_v_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_use_endpoint_u = {
	{(PropertyRNA *)&rna_Spline_use_endpoint_v, (PropertyRNA *)&rna_Spline_use_cyclic_v,
	-1, "use_endpoint_u", 1, 0, 0, 0, 0, "Endpoint U",
	"Make this nurbs curve or surface meet the endpoints in the U direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_endpoint_u_get, Spline_use_endpoint_u_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_use_endpoint_v = {
	{(PropertyRNA *)&rna_Spline_use_bezier_u, (PropertyRNA *)&rna_Spline_use_endpoint_u,
	-1, "use_endpoint_v", 1, 0, 0, 0, 0, "Endpoint V",
	"Make this nurbs surface meet the endpoints in the V direction ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_endpoint_v_get, Spline_use_endpoint_v_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_use_bezier_u = {
	{(PropertyRNA *)&rna_Spline_use_bezier_v, (PropertyRNA *)&rna_Spline_use_endpoint_v,
	-1, "use_bezier_u", 1, 0, 0, 0, 0, "Bezier U",
	"Make this nurbs curve or surface act like a Bezier spline in the U direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_bezier_u_get, Spline_use_bezier_u_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_use_bezier_v = {
	{(PropertyRNA *)&rna_Spline_use_smooth, (PropertyRNA *)&rna_Spline_use_bezier_u,
	-1, "use_bezier_v", 1, 0, 0, 0, 0, "Bezier V",
	"Make this nurbs surface act like a Bezier spline in the V direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_bezier_v_get, Spline_use_bezier_v_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_use_smooth = {
	{(PropertyRNA *)&rna_Spline_hide, (PropertyRNA *)&rna_Spline_use_bezier_v,
	-1, "use_smooth", 3, 0, 0, 0, 0, "Smooth",
	"Smooth the normals of the surface or beveled curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_use_smooth_get, Spline_use_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Spline_hide = {
	{(PropertyRNA *)&rna_Spline_material_index, (PropertyRNA *)&rna_Spline_use_smooth,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"Hide this curve in Edit mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Spline_hide_get, Spline_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Spline_material_index = {
	{(PropertyRNA *)&rna_Spline_character_index, (PropertyRNA *)&rna_Spline_hide,
	-1, "material_index", 3, 0, 0, 4, 0, "Material Index",
	"Material slot index of this curve",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, mat_nr), 1, NULL},
	Spline_material_index_get, Spline_material_index_set, NULL, NULL, rna_Curve_material_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Spline_character_index = {
	{NULL, (PropertyRNA *)&rna_Spline_material_index,
	-1, "character_index", 2, 0, 0, 4, 0, "Character Index",
	"Location of this character in the text data (only for text curves)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Nurb, charidx), 0, NULL},
	Spline_character_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Spline_calc_length_resolution = {
	{(PropertyRNA *)&rna_Spline_calc_length_length, NULL,
	-1, "resolution", 3, 0, 0, 0, 0, "Resolution",
	"Spline resolution to be used, 0 defaults to the resolution_u",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 64, 0, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_Spline_calc_length_length = {
	{NULL, (PropertyRNA *)&rna_Spline_calc_length_resolution,
	-1, "length", 3, 0, 2, 0, 0, "Length",
	"Length of the polygonaly approximated spline",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Spline_calc_length_func = {
	{(FunctionRNA *)&rna_Spline_valid_message_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Spline_calc_length_resolution, (PropertyRNA *)&rna_Spline_calc_length_length}},
	"calc_length", 0, "Calculate spline length",
	Spline_calc_length_call,
	(PropertyRNA *)&rna_Spline_calc_length_length
};

IntPropertyRNA rna_Spline_valid_message_direction = {
	{(PropertyRNA *)&rna_Spline_valid_message_result, NULL,
	-1, "direction", 3, 0, 1, 0, 0, "Direction",
	"The direction where 0-1 maps to U-V",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1, 0, 1, 1, 0, NULL
};

StringPropertyRNA rna_Spline_valid_message_result = {
	{NULL, (PropertyRNA *)&rna_Spline_valid_message_direction,
	-1, "result", 131073, 0, 2, 0, 0, "Return value",
	"The message or an empty string when there is no error",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, "nothing"
};

FunctionRNA rna_Spline_valid_message_func = {
	{NULL, (FunctionRNA *)&rna_Spline_calc_length_func,
	NULL,
	{(PropertyRNA *)&rna_Spline_valid_message_direction, (PropertyRNA *)&rna_Spline_valid_message_result}},
	"valid_message", 0, "Return the message",
	Spline_valid_message_call,
	NULL
};

StructRNA RNA_Spline = {
	{(ContainerRNA *)&RNA_SplinePoints, (ContainerRNA *)&RNA_BezierSplinePoint,
	NULL,
	{(PropertyRNA *)&rna_Spline_rna_properties, (PropertyRNA *)&rna_Spline_character_index}},
	"Spline", NULL, NULL, 516, NULL, "Spline",
	"Element of a curve, either NURBS, Bezier or Polyline or a character with text objects",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Spline_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Curve_spline_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Spline_calc_length_func, (FunctionRNA *)&rna_Spline_valid_message_func}
};

/* Spline Points */
CollectionPropertyRNA rna_SplinePoints_rna_properties = {
	{(PropertyRNA *)&rna_SplinePoints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplinePoints_rna_properties_begin, SplinePoints_rna_properties_next, SplinePoints_rna_properties_end, SplinePoints_rna_properties_get, NULL, NULL, SplinePoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SplinePoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_SplinePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplinePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SplinePoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the spline",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_SplinePoints_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_SplinePoints_add_count, (PropertyRNA *)&rna_SplinePoints_add_count}},
	"add", 2064, "Add a number of points to this spline",
	SplinePoints_add_call,
	NULL
};

StructRNA RNA_SplinePoints = {
	{(ContainerRNA *)&RNA_SplineBezierPoints, (ContainerRNA *)&RNA_Spline,
	NULL,
	{(PropertyRNA *)&rna_SplinePoints_rna_properties, (PropertyRNA *)&rna_SplinePoints_rna_type}},
	"SplinePoints", NULL, NULL, 516, NULL, "Spline Points",
	"Collection of spline points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SplinePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SplinePoints_add_func, (FunctionRNA *)&rna_SplinePoints_add_func}
};

/* Spline Bezier Points */
CollectionPropertyRNA rna_SplineBezierPoints_rna_properties = {
	{(PropertyRNA *)&rna_SplineBezierPoints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplineBezierPoints_rna_properties_begin, SplineBezierPoints_rna_properties_next, SplineBezierPoints_rna_properties_end, SplineBezierPoints_rna_properties_get, NULL, NULL, SplineBezierPoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_SplineBezierPoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_SplineBezierPoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	SplineBezierPoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SplineBezierPoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the spline",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_SplineBezierPoints_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_SplineBezierPoints_add_count, (PropertyRNA *)&rna_SplineBezierPoints_add_count}},
	"add", 2064, "Add a number of points to this spline",
	SplineBezierPoints_add_call,
	NULL
};

StructRNA RNA_SplineBezierPoints = {
	{(ContainerRNA *)&RNA_DynamicPaintCanvasSettings, (ContainerRNA *)&RNA_SplinePoints,
	NULL,
	{(PropertyRNA *)&rna_SplineBezierPoints_rna_properties, (PropertyRNA *)&rna_SplineBezierPoints_rna_type}},
	"SplineBezierPoints", NULL, NULL, 516, NULL, "Spline Bezier Points",
	"Collection of spline Bezier points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_SplineBezierPoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_SplineBezierPoints_add_func, (FunctionRNA *)&rna_SplineBezierPoints_add_func}
};

