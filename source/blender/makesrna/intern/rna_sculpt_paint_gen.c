
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

#include "rna_sculpt_paint.c"

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



CollectionPropertyRNA rna_PaintToolSlot_rna_properties;
PointerPropertyRNA rna_PaintToolSlot_rna_type;
PointerPropertyRNA rna_PaintToolSlot_brush;


CollectionPropertyRNA rna_Paint_rna_properties;
PointerPropertyRNA rna_Paint_rna_type;
PointerPropertyRNA rna_Paint_brush;
CollectionPropertyRNA rna_Paint_tool_slots;
PointerPropertyRNA rna_Paint_palette;
BoolPropertyRNA rna_Paint_show_brush;
BoolPropertyRNA rna_Paint_show_brush_on_surface;
BoolPropertyRNA rna_Paint_show_low_resolution;
BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
IntPropertyRNA rna_Paint_input_samples;
BoolPropertyRNA rna_Paint_use_symmetry_x;
BoolPropertyRNA rna_Paint_use_symmetry_y;
BoolPropertyRNA rna_Paint_use_symmetry_z;
BoolPropertyRNA rna_Paint_use_symmetry_feather;
PointerPropertyRNA rna_Paint_cavity_curve;
BoolPropertyRNA rna_Paint_use_cavity;
FloatPropertyRNA rna_Paint_tile_offset;
BoolPropertyRNA rna_Paint_tile_x;
BoolPropertyRNA rna_Paint_tile_y;
BoolPropertyRNA rna_Paint_tile_z;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;

IntPropertyRNA rna_Sculpt_radial_symmetry;
BoolPropertyRNA rna_Sculpt_lock_x;
BoolPropertyRNA rna_Sculpt_lock_y;
BoolPropertyRNA rna_Sculpt_lock_z;
BoolPropertyRNA rna_Sculpt_use_deform_only;
BoolPropertyRNA rna_Sculpt_show_mask;
BoolPropertyRNA rna_Sculpt_show_face_sets;
FloatPropertyRNA rna_Sculpt_detail_size;
FloatPropertyRNA rna_Sculpt_detail_percent;
FloatPropertyRNA rna_Sculpt_constant_detail_resolution;
BoolPropertyRNA rna_Sculpt_use_smooth_shading;
BoolPropertyRNA rna_Sculpt_use_automasking_topology;
BoolPropertyRNA rna_Sculpt_use_automasking_face_sets;
BoolPropertyRNA rna_Sculpt_use_automasking_boundary_edges;
BoolPropertyRNA rna_Sculpt_use_automasking_boundary_face_sets;
EnumPropertyRNA rna_Sculpt_symmetrize_direction;
EnumPropertyRNA rna_Sculpt_detail_refine_method;
EnumPropertyRNA rna_Sculpt_detail_type_method;
FloatPropertyRNA rna_Sculpt_gravity;
EnumPropertyRNA rna_Sculpt_transform_mode;
PointerPropertyRNA rna_Sculpt_gravity_object;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;

EnumPropertyRNA rna_GpPaint_color_mode;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;

BoolPropertyRNA rna_VertexPaint_use_group_restrict;
IntPropertyRNA rna_VertexPaint_radial_symmetry;


CollectionPropertyRNA rna_PaintModeSettings_rna_properties;
PointerPropertyRNA rna_PaintModeSettings_rna_type;
EnumPropertyRNA rna_PaintModeSettings_canvas_source;
PointerPropertyRNA rna_PaintModeSettings_canvas_image;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;

BoolPropertyRNA rna_ImagePaint_use_occlude;
BoolPropertyRNA rna_ImagePaint_use_backface_culling;
BoolPropertyRNA rna_ImagePaint_use_normal_falloff;
BoolPropertyRNA rna_ImagePaint_use_stencil_layer;
BoolPropertyRNA rna_ImagePaint_invert_stencil;
PointerPropertyRNA rna_ImagePaint_stencil_image;
PointerPropertyRNA rna_ImagePaint_canvas;
PointerPropertyRNA rna_ImagePaint_clone_image;
FloatPropertyRNA rna_ImagePaint_stencil_color;
FloatPropertyRNA rna_ImagePaint_dither;
BoolPropertyRNA rna_ImagePaint_use_clone_layer;
IntPropertyRNA rna_ImagePaint_seam_bleed;
IntPropertyRNA rna_ImagePaint_normal_angle;
IntPropertyRNA rna_ImagePaint_screen_grab_size;
EnumPropertyRNA rna_ImagePaint_mode;
EnumPropertyRNA rna_ImagePaint_interpolation;
BoolPropertyRNA rna_ImagePaint_missing_uvs;
BoolPropertyRNA rna_ImagePaint_missing_materials;
BoolPropertyRNA rna_ImagePaint_missing_stencil;
BoolPropertyRNA rna_ImagePaint_missing_texture;

extern FunctionRNA rna_ImagePaint_detect_data_func;
extern BoolPropertyRNA rna_ImagePaint_detect_data_ok;



CollectionPropertyRNA rna_ParticleEdit_rna_properties;
PointerPropertyRNA rna_ParticleEdit_rna_type;
EnumPropertyRNA rna_ParticleEdit_tool;
EnumPropertyRNA rna_ParticleEdit_select_mode;
BoolPropertyRNA rna_ParticleEdit_use_preserve_length;
BoolPropertyRNA rna_ParticleEdit_use_preserve_root;
BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect;
FloatPropertyRNA rna_ParticleEdit_emitter_distance;
BoolPropertyRNA rna_ParticleEdit_use_fade_time;
BoolPropertyRNA rna_ParticleEdit_use_auto_velocity;
BoolPropertyRNA rna_ParticleEdit_show_particles;
BoolPropertyRNA rna_ParticleEdit_use_default_interpolate;
IntPropertyRNA rna_ParticleEdit_default_key_count;
PointerPropertyRNA rna_ParticleEdit_brush;
IntPropertyRNA rna_ParticleEdit_display_step;
IntPropertyRNA rna_ParticleEdit_fade_frames;
EnumPropertyRNA rna_ParticleEdit_type;
BoolPropertyRNA rna_ParticleEdit_is_editable;
BoolPropertyRNA rna_ParticleEdit_is_hair;
PointerPropertyRNA rna_ParticleEdit_object;
PointerPropertyRNA rna_ParticleEdit_shape_object;


CollectionPropertyRNA rna_ParticleBrush_rna_properties;
PointerPropertyRNA rna_ParticleBrush_rna_type;
IntPropertyRNA rna_ParticleBrush_size;
FloatPropertyRNA rna_ParticleBrush_strength;
IntPropertyRNA rna_ParticleBrush_count;
IntPropertyRNA rna_ParticleBrush_steps;
EnumPropertyRNA rna_ParticleBrush_puff_mode;
BoolPropertyRNA rna_ParticleBrush_use_puff_volume;
EnumPropertyRNA rna_ParticleBrush_length_mode;
PointerPropertyRNA rna_ParticleBrush_curve;


CollectionPropertyRNA rna_GPencilSculptGuide_rna_properties;
PointerPropertyRNA rna_GPencilSculptGuide_rna_type;
BoolPropertyRNA rna_GPencilSculptGuide_use_guide;
BoolPropertyRNA rna_GPencilSculptGuide_use_snapping;
PointerPropertyRNA rna_GPencilSculptGuide_reference_object;
EnumPropertyRNA rna_GPencilSculptGuide_reference_point;
EnumPropertyRNA rna_GPencilSculptGuide_type;
FloatPropertyRNA rna_GPencilSculptGuide_angle;
FloatPropertyRNA rna_GPencilSculptGuide_angle_snap;
FloatPropertyRNA rna_GPencilSculptGuide_spacing;
FloatPropertyRNA rna_GPencilSculptGuide_location;


CollectionPropertyRNA rna_GPencilSculptSettings_rna_properties;
PointerPropertyRNA rna_GPencilSculptSettings_rna_type;
PointerPropertyRNA rna_GPencilSculptSettings_guide;
BoolPropertyRNA rna_GPencilSculptSettings_use_multiframe_falloff;
BoolPropertyRNA rna_GPencilSculptSettings_use_thickness_curve;
BoolPropertyRNA rna_GPencilSculptSettings_use_scale_thickness;
PointerPropertyRNA rna_GPencilSculptSettings_multiframe_falloff_curve;
PointerPropertyRNA rna_GPencilSculptSettings_thickness_primitive_curve;
EnumPropertyRNA rna_GPencilSculptSettings_lock_axis;
FloatPropertyRNA rna_GPencilSculptSettings_intersection_threshold;


extern CollectionPropertyRNA rna_Paint_rna_properties;
extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern CollectionPropertyRNA rna_Paint_tool_slots;
extern PointerPropertyRNA rna_Paint_palette;
extern BoolPropertyRNA rna_Paint_show_brush;
extern BoolPropertyRNA rna_Paint_show_brush_on_surface;
extern BoolPropertyRNA rna_Paint_show_low_resolution;
extern BoolPropertyRNA rna_Paint_use_sculpt_delay_updates;
extern IntPropertyRNA rna_Paint_input_samples;
extern BoolPropertyRNA rna_Paint_use_symmetry_x;
extern BoolPropertyRNA rna_Paint_use_symmetry_y;
extern BoolPropertyRNA rna_Paint_use_symmetry_z;
extern BoolPropertyRNA rna_Paint_use_symmetry_feather;
extern PointerPropertyRNA rna_Paint_cavity_curve;
extern BoolPropertyRNA rna_Paint_use_cavity;
extern FloatPropertyRNA rna_Paint_tile_offset;
extern BoolPropertyRNA rna_Paint_tile_x;
extern BoolPropertyRNA rna_Paint_tile_y;
extern BoolPropertyRNA rna_Paint_tile_z;

static PointerRNA PaintToolSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PaintToolSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaintToolSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaintToolSlot_rna_properties_get(iter);
    }
}

void PaintToolSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaintToolSlot_rna_properties_get(iter);
    }
}

void PaintToolSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PaintToolSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PaintToolSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA PaintToolSlot_brush_get(PointerRNA *ptr)
{
    PaintToolSlot *data = (PaintToolSlot *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Brush, data->brush);
}

void PaintToolSlot_brush_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PaintToolSlot *data = (PaintToolSlot *)(ptr->data);

    if (data->brush) {
        id_us_min((ID *)data->brush);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->brush = value.data;
}

static PointerRNA Paint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Paint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Paint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Paint_rna_properties_get(iter);
    }
}

void Paint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Paint_rna_properties_get(iter);
    }
}

void Paint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Paint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Paint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA Paint_brush_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Brush, data->brush);
}

void Paint_brush_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Paint *data = (Paint *)(ptr->data);

    if (data->brush) {
        id_us_min((ID *)data->brush);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->brush = value.data;
}

int Paint_tool_slots_length(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (data->tool_slots == NULL) ? 0 : data->tool_slots_len;
}

static PointerRNA Paint_tool_slots_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PaintToolSlot, rna_iterator_array_get(iter));
}

void Paint_tool_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Paint_tool_slots;

    rna_iterator_array_begin(iter, data->tool_slots, sizeof(data->tool_slots[0]), data->tool_slots_len, 0, NULL);

    if (iter->valid) {
        iter->ptr = Paint_tool_slots_get(iter);
    }
}

void Paint_tool_slots_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Paint_tool_slots_get(iter);
    }
}

void Paint_tool_slots_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Paint_tool_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Paint_tool_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = Paint_tool_slots_get(&iter); }
    }

    Paint_tool_slots_end(&iter);

    return found;
}

PointerRNA Paint_palette_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Palette, data->palette);
}

void Paint_palette_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Paint *data = (Paint *)(ptr->data);

    if (data->palette) {
        id_us_min((ID *)data->palette);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->palette = value.data;
}

bool Paint_show_brush_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

void Paint_show_brush_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

bool Paint_show_brush_on_surface_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void Paint_show_brush_on_surface_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

bool Paint_show_low_resolution_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void Paint_show_low_resolution_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

bool Paint_use_sculpt_delay_updates_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

void Paint_use_sculpt_delay_updates_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

int Paint_input_samples_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (int)(data->num_input_samples);
}

void Paint_input_samples_set(PointerRNA *ptr, int value)
{
    Paint *data = (Paint *)(ptr->data);
    data->num_input_samples = CLAMPIS(value, 0, INT_MAX);
}

bool Paint_use_symmetry_x_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 1) != 0);
}

void Paint_use_symmetry_x_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 1; }
    else { data->symmetry_flags &= ~1; }
}

bool Paint_use_symmetry_y_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 2) != 0);
}

void Paint_use_symmetry_y_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 2; }
    else { data->symmetry_flags &= ~2; }
}

bool Paint_use_symmetry_z_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 4) != 0);
}

void Paint_use_symmetry_z_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 4; }
    else { data->symmetry_flags &= ~4; }
}

bool Paint_use_symmetry_feather_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 8) != 0);
}

void Paint_use_symmetry_feather_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 8; }
    else { data->symmetry_flags &= ~8; }
}

PointerRNA Paint_cavity_curve_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cavity_curve);
}

bool Paint_use_cavity_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

void Paint_use_cavity_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

void Paint_tile_offset_get(PointerRNA *ptr, float values[3])
{
    Paint *data = (Paint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tile_offset)[i]);
    }
}

void Paint_tile_offset_set(PointerRNA *ptr, const float values[3])
{
    Paint *data = (Paint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->tile_offset)[i] = CLAMPIS(values[i], 0.0099999998f, FLT_MAX);
    }
}

bool Paint_tile_x_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 16) != 0);
}

void Paint_tile_x_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 16; }
    else { data->symmetry_flags &= ~16; }
}

bool Paint_tile_y_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 32) != 0);
}

void Paint_tile_y_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 32; }
    else { data->symmetry_flags &= ~32; }
}

bool Paint_tile_z_get(PointerRNA *ptr)
{
    Paint *data = (Paint *)(ptr->data);
    return (((data->symmetry_flags) & 64) != 0);
}

void Paint_tile_z_set(PointerRNA *ptr, bool value)
{
    Paint *data = (Paint *)(ptr->data);
    if (value) { data->symmetry_flags |= 64; }
    else { data->symmetry_flags &= ~64; }
}

void Sculpt_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
    Sculpt *data = (Sculpt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->radial_symm)[i]);
    }
}

void Sculpt_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
    Sculpt *data = (Sculpt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((int *)data->radial_symm)[i] = CLAMPIS(values[i], 1, 64);
    }
}

bool Sculpt_lock_x_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

void Sculpt_lock_x_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

bool Sculpt_lock_y_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

void Sculpt_lock_y_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

bool Sculpt_lock_z_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

void Sculpt_lock_z_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

bool Sculpt_use_deform_only_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

void Sculpt_use_deform_only_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

bool Sculpt_show_mask_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return !(((data->flags) & 32768) != 0);
}

void Sculpt_show_mask_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (!value) { data->flags |= 32768; }
    else { data->flags &= ~32768; }
}

bool Sculpt_show_face_sets_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return !(((data->flags) & 131072) != 0);
}

void Sculpt_show_face_sets_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (!value) { data->flags |= 131072; }
    else { data->flags &= ~131072; }
}

float Sculpt_detail_size_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->detail_size);
}

void Sculpt_detail_size_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->detail_size = value;
}

float Sculpt_detail_percent_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->detail_percent);
}

void Sculpt_detail_percent_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->detail_percent = value;
}

float Sculpt_constant_detail_resolution_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->constant_detail);
}

void Sculpt_constant_detail_resolution_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->constant_detail = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

bool Sculpt_use_smooth_shading_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

void Sculpt_use_smooth_shading_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

bool Sculpt_use_automasking_topology_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 1) != 0);
}

void Sculpt_use_automasking_topology_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 1; }
    else { data->automasking_flags &= ~1; }
}

bool Sculpt_use_automasking_face_sets_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 2) != 0);
}

void Sculpt_use_automasking_face_sets_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 2; }
    else { data->automasking_flags &= ~2; }
}

bool Sculpt_use_automasking_boundary_edges_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 4) != 0);
}

void Sculpt_use_automasking_boundary_edges_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 4; }
    else { data->automasking_flags &= ~4; }
}

bool Sculpt_use_automasking_boundary_face_sets_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (((data->automasking_flags) & 8) != 0);
}

void Sculpt_use_automasking_boundary_face_sets_set(PointerRNA *ptr, bool value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value) { data->automasking_flags |= 8; }
    else { data->automasking_flags &= ~8; }
}

int Sculpt_symmetrize_direction_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->symmetrize_direction);
}

void Sculpt_symmetrize_direction_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->symmetrize_direction = value;
}

int Sculpt_detail_refine_method_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((data->flags) & 6144);
}

void Sculpt_detail_refine_method_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->flags &= ~6144;
    data->flags |= value;
}

int Sculpt_detail_type_method_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return ((data->flags) & 90112);
}

void Sculpt_detail_type_method_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->flags &= ~90112;
    data->flags |= value;
}

float Sculpt_gravity_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (float)(data->gravity_factor);
}

void Sculpt_gravity_set(PointerRNA *ptr, float value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->gravity_factor = CLAMPIS(value, 0.0f, 1.0f);
}

int Sculpt_transform_mode_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return (int)(data->transform_mode);
}

void Sculpt_transform_mode_set(PointerRNA *ptr, int value)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    data->transform_mode = value;
}

PointerRNA Sculpt_gravity_object_get(PointerRNA *ptr)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->gravity_object);
}

void Sculpt_gravity_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Sculpt *data = (Sculpt *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->gravity_object = value.data;
}

int GpPaint_color_mode_get(PointerRNA *ptr)
{
    GpPaint *data = (GpPaint *)(ptr->data);
    return (int)(data->mode);
}

void GpPaint_color_mode_set(PointerRNA *ptr, int value)
{
    GpPaint *data = (GpPaint *)(ptr->data);
    data->mode = value;
}

bool VertexPaint_use_group_restrict_get(PointerRNA *ptr)
{
    VPaint *data = (VPaint *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void VertexPaint_use_group_restrict_set(PointerRNA *ptr, bool value)
{
    VPaint *data = (VPaint *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

void VertexPaint_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
    VPaint *data = (VPaint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->radial_symm)[i]);
    }
}

void VertexPaint_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
    VPaint *data = (VPaint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((int *)data->radial_symm)[i] = CLAMPIS(values[i], 1, 64);
    }
}

static PointerRNA PaintModeSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PaintModeSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaintModeSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaintModeSettings_rna_properties_get(iter);
    }
}

void PaintModeSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaintModeSettings_rna_properties_get(iter);
    }
}

void PaintModeSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PaintModeSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PaintModeSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int PaintModeSettings_canvas_source_get(PointerRNA *ptr)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    return (int)(data->canvas_source);
}

void PaintModeSettings_canvas_source_set(PointerRNA *ptr, int value)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    data->canvas_source = value;
}

PointerRNA PaintModeSettings_canvas_image_get(PointerRNA *ptr)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->canvas_image);
}

void PaintModeSettings_canvas_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    PaintModeSettings *data = (PaintModeSettings *)(ptr->data);

    if (data->canvas_image) {
        id_us_min((ID *)data->canvas_image);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->canvas_image = value.data;
}

bool ImagePaint_use_occlude_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !(((data->flag) & 16) != 0);
}

void ImagePaint_use_occlude_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool ImagePaint_use_backface_culling_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !(((data->flag) & 32) != 0);
}

void ImagePaint_use_backface_culling_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool ImagePaint_use_normal_falloff_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return !(((data->flag) & 64) != 0);
}

void ImagePaint_use_normal_falloff_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (!value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool ImagePaint_use_stencil_layer_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void ImagePaint_use_stencil_layer_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool ImagePaint_invert_stencil_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void ImagePaint_invert_stencil_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

PointerRNA ImagePaint_stencil_image_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->stencil);
}

void ImagePaint_stencil_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

    if (data->stencil) {
        id_us_min((ID *)data->stencil);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->stencil = value.data;
}

PointerRNA ImagePaint_canvas_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->canvas);
}

void ImagePaint_canvas_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

    if (data->canvas) {
        id_us_min((ID *)data->canvas);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->canvas = value.data;
}

PointerRNA ImagePaint_clone_image_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone);
}

void ImagePaint_clone_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);

    if (data->clone) {
        id_us_min((ID *)data->clone);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->clone = value.data;
}

void ImagePaint_stencil_color_get(PointerRNA *ptr, float values[3])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->stencil_col)[i]);
    }
}

void ImagePaint_stencil_color_set(PointerRNA *ptr, const float values[3])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->stencil_col)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float ImagePaint_dither_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (float)(data->dither);
}

void ImagePaint_dither_set(PointerRNA *ptr, float value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->dither = CLAMPIS(value, 0.0f, 2.0f);
}

bool ImagePaint_use_clone_layer_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void ImagePaint_use_clone_layer_set(PointerRNA *ptr, bool value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

int ImagePaint_seam_bleed_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->seam_bleed);
}

void ImagePaint_seam_bleed_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->seam_bleed = CLAMPIS(value, -32768, 32767);
}

int ImagePaint_normal_angle_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->normal_angle);
}

void ImagePaint_normal_angle_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->normal_angle = CLAMPIS(value, 0, 90);
}

void ImagePaint_screen_grab_size_get(PointerRNA *ptr, int values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((short *)data->screen_grab_size)[i]);
    }
}

void ImagePaint_screen_grab_size_set(PointerRNA *ptr, const int values[2])
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((short *)data->screen_grab_size)[i] = CLAMPIS(values[i], 512, 16384);
    }
}

int ImagePaint_mode_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->mode);
}

void ImagePaint_mode_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->mode = value;
}

int ImagePaint_interpolation_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (int)(data->interp);
}

void ImagePaint_interpolation_set(PointerRNA *ptr, int value)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    data->interp = value;
}

bool ImagePaint_missing_uvs_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 1) != 0);
}

bool ImagePaint_missing_materials_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 2) != 0);
}

bool ImagePaint_missing_stencil_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 8) != 0);
}

bool ImagePaint_missing_texture_get(PointerRNA *ptr)
{
    ImagePaintSettings *data = (ImagePaintSettings *)(ptr->data);
    return (((data->missing_data) & 4) != 0);
}

static PointerRNA ParticleEdit_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleEdit_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleEdit_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleEdit_rna_properties_get(iter);
    }
}

void ParticleEdit_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleEdit_rna_properties_get(iter);
    }
}

void ParticleEdit_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleEdit_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleEdit_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int ParticleEdit_tool_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->brushtype);
}

void ParticleEdit_tool_set(PointerRNA *ptr, int value)
{
    rna_ParticleEdit_tool_set(ptr, value);
}

int ParticleEdit_select_mode_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return ((data->selectmode) & 7);
}

void ParticleEdit_select_mode_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->selectmode &= ~7;
    data->selectmode |= value;
}

bool ParticleEdit_use_preserve_length_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ParticleEdit_use_preserve_length_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool ParticleEdit_use_preserve_root_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void ParticleEdit_use_preserve_root_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool ParticleEdit_use_emitter_deflect_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void ParticleEdit_use_emitter_deflect_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

float ParticleEdit_emitter_distance_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (float)(data->emitterdist);
}

void ParticleEdit_emitter_distance_set(PointerRNA *ptr, float value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->emitterdist = value;
}

bool ParticleEdit_use_fade_time_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void ParticleEdit_use_fade_time_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool ParticleEdit_use_auto_velocity_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void ParticleEdit_use_auto_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool ParticleEdit_show_particles_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void ParticleEdit_show_particles_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool ParticleEdit_use_default_interpolate_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void ParticleEdit_use_default_interpolate_set(PointerRNA *ptr, bool value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

int ParticleEdit_default_key_count_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->totaddkey);
}

void ParticleEdit_default_key_count_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->totaddkey = CLAMPIS(value, 2, 32767);
}

PointerRNA ParticleEdit_brush_get(PointerRNA *ptr)
{
    return rna_ParticleEdit_brush_get(ptr);
}

int ParticleEdit_display_step_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->draw_step);
}

void ParticleEdit_display_step_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->draw_step = CLAMPIS(value, 1, 10);
}

int ParticleEdit_fade_frames_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->fade_frames);
}

void ParticleEdit_fade_frames_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->fade_frames = CLAMPIS(value, 1, 100);
}

int ParticleEdit_type_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return (int)(data->edittype);
}

void ParticleEdit_type_set(PointerRNA *ptr, int value)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    data->edittype = value;
}

bool ParticleEdit_is_editable_get(PointerRNA *ptr)
{
    return rna_ParticleEdit_editable_get(ptr);
}

bool ParticleEdit_is_hair_get(PointerRNA *ptr)
{
    return rna_ParticleEdit_hair_get(ptr);
}

PointerRNA ParticleEdit_object_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

PointerRNA ParticleEdit_shape_object_get(PointerRNA *ptr)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->shape_object);
}

void ParticleEdit_shape_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    ParticleEditSettings *data = (ParticleEditSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->shape_object = value.data;
}

static PointerRNA ParticleBrush_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ParticleBrush_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ParticleBrush_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleBrush_rna_properties_get(iter);
    }
}

void ParticleBrush_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ParticleBrush_rna_properties_get(iter);
    }
}

void ParticleBrush_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ParticleBrush_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ParticleBrush_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int ParticleBrush_size_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->size);
}

void ParticleBrush_size_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->size = CLAMPIS(value, 1, 32767);
}

float ParticleBrush_strength_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (float)(data->strength);
}

void ParticleBrush_strength_set(PointerRNA *ptr, float value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->strength = CLAMPIS(value, 0.0010000000f, 1.0f);
}

int ParticleBrush_count_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->count);
}

void ParticleBrush_count_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->count = CLAMPIS(value, 1, 1000);
}

int ParticleBrush_steps_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->step);
}

void ParticleBrush_steps_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->step = CLAMPIS(value, 1, 32767);
}

int ParticleBrush_puff_mode_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->invert);
}

void ParticleBrush_puff_mode_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->invert = value;
}

bool ParticleBrush_use_puff_volume_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ParticleBrush_use_puff_volume_set(PointerRNA *ptr, bool value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

int ParticleBrush_length_mode_get(PointerRNA *ptr)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    return (int)(data->invert);
}

void ParticleBrush_length_mode_set(PointerRNA *ptr, int value)
{
    ParticleBrushData *data = (ParticleBrushData *)(ptr->data);
    data->invert = value;
}

PointerRNA ParticleBrush_curve_get(PointerRNA *ptr)
{
    return rna_ParticleBrush_curve_get(ptr);
}

static PointerRNA GPencilSculptGuide_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilSculptGuide_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilSculptGuide_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilSculptGuide_rna_properties_get(iter);
    }
}

void GPencilSculptGuide_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilSculptGuide_rna_properties_get(iter);
    }
}

void GPencilSculptGuide_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilSculptGuide_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilSculptGuide_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool GPencilSculptGuide_use_guide_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (bool)(data->use_guide);
}

void GPencilSculptGuide_use_guide_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->use_guide = value;
}

bool GPencilSculptGuide_use_snapping_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (bool)(data->use_snapping);
}

void GPencilSculptGuide_use_snapping_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->use_snapping = value;
}

PointerRNA GPencilSculptGuide_reference_object_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->reference_object);
}

void GPencilSculptGuide_reference_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->reference_object = value.data;
}

int GPencilSculptGuide_reference_point_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (int)(data->reference_point);
}

void GPencilSculptGuide_reference_point_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->reference_point = value;
}

int GPencilSculptGuide_type_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (int)(data->type);
}

void GPencilSculptGuide_type_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->type = value;
}

float GPencilSculptGuide_angle_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->angle);
}

void GPencilSculptGuide_angle_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->angle = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float GPencilSculptGuide_angle_snap_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->angle_snap);
}

void GPencilSculptGuide_angle_snap_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->angle_snap = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float GPencilSculptGuide_spacing_get(PointerRNA *ptr)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    return (float)(data->spacing);
}

void GPencilSculptGuide_spacing_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    data->spacing = CLAMPIS(value, 0.0f, FLT_MAX);
}

void GPencilSculptGuide_location_get(PointerRNA *ptr, float values[3])
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->location)[i]);
    }
}

void GPencilSculptGuide_location_set(PointerRNA *ptr, const float values[3])
{
    GP_Sculpt_Guide *data = (GP_Sculpt_Guide *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->location)[i] = values[i];
    }
}

static PointerRNA GPencilSculptSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilSculptSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilSculptSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilSculptSettings_rna_properties_get(iter);
    }
}

void GPencilSculptSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilSculptSettings_rna_properties_get(iter);
    }
}

void GPencilSculptSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilSculptSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilSculptSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA GPencilSculptSettings_guide_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GPencilSculptGuide, &data->guide);
}

bool GPencilSculptSettings_use_multiframe_falloff_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void GPencilSculptSettings_use_multiframe_falloff_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool GPencilSculptSettings_use_thickness_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void GPencilSculptSettings_use_thickness_curve_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool GPencilSculptSettings_use_scale_thickness_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void GPencilSculptSettings_use_scale_thickness_set(PointerRNA *ptr, bool value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

PointerRNA GPencilSculptSettings_multiframe_falloff_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cur_falloff);
}

PointerRNA GPencilSculptSettings_thickness_primitive_curve_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->cur_primitive);
}

int GPencilSculptSettings_lock_axis_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (int)(data->lock_axis);
}

void GPencilSculptSettings_lock_axis_set(PointerRNA *ptr, int value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    data->lock_axis = value;
}

float GPencilSculptSettings_intersection_threshold_get(PointerRNA *ptr)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    return (float)(data->isect_threshold);
}

void GPencilSculptSettings_intersection_threshold_set(PointerRNA *ptr, float value)
{
    GP_Sculpt_Settings *data = (GP_Sculpt_Settings *)(ptr->data);
    data->isect_threshold = CLAMPIS(value, 0.0f, 10.0f);
}












bool ImagePaint_detect_data_func(struct ImagePaintSettings *_self)
{
	return rna_ImaPaint_detect_data(_self);
}

void ImagePaint_detect_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ImagePaintSettings *_self;
	bool ok;
	char *_data, *_retdata;
	
	_self = (struct ImagePaintSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	ok = rna_ImaPaint_detect_data(_self);
	*((bool *)_retdata) = ok;
}

/* Repeated prototypes to detect errors */

bool rna_ImaPaint_detect_data(struct ImagePaintSettings *_self);






/* Paint Curve */
StructRNA RNA_PaintCurve = {
	{(ContainerRNA *)&RNA_PaintToolSlot, (ContainerRNA *)&RNA_View2D,
	NULL,
	{NULL, NULL}},
	"PaintCurve", NULL, NULL, 519, NULL, "Paint Curve",
	"",
	"*", 321,
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

/* Paint Tool Slot */
CollectionPropertyRNA rna_PaintToolSlot_rna_properties = {
	{(PropertyRNA *)&rna_PaintToolSlot_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaintToolSlot_rna_properties_begin, PaintToolSlot_rna_properties_next, PaintToolSlot_rna_properties_end, PaintToolSlot_rna_properties_get, NULL, NULL, PaintToolSlot_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PaintToolSlot_rna_type = {
	{(PropertyRNA *)&rna_PaintToolSlot_brush, (PropertyRNA *)&rna_PaintToolSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaintToolSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_PaintToolSlot_brush = {
	{NULL, (PropertyRNA *)&rna_PaintToolSlot_rna_type,
	-1, "brush", 8388801, 0, 0, 0, 0, "Brush",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaintToolSlot_brush_get, PaintToolSlot_brush_set, NULL, rna_Brush_mode_with_tool_poll,&RNA_Brush
};

StructRNA RNA_PaintToolSlot = {
	{(ContainerRNA *)&RNA_Paint, (ContainerRNA *)&RNA_PaintCurve,
	NULL,
	{(PropertyRNA *)&rna_PaintToolSlot_rna_properties, (PropertyRNA *)&rna_PaintToolSlot_brush}},
	"PaintToolSlot", NULL, NULL, 516, NULL, "Paint Tool Slot",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PaintToolSlot_rna_properties,
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

/* Paint */
CollectionPropertyRNA rna_Paint_rna_properties = {
	{(PropertyRNA *)&rna_Paint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_rna_properties_begin, Paint_rna_properties_next, Paint_rna_properties_end, Paint_rna_properties_get, NULL, NULL, Paint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Paint_rna_type = {
	{(PropertyRNA *)&rna_Paint_brush, (PropertyRNA *)&rna_Paint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Paint_brush = {
	{(PropertyRNA *)&rna_Paint_tool_slots, (PropertyRNA *)&rna_Paint_rna_type,
	-1, "brush", 8388801, 0, 0, 0, 0, "Brush",
	"Active Brush",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Paint_brush_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_brush_get, Paint_brush_set, NULL, rna_Brush_mode_poll,&RNA_Brush
};

CollectionPropertyRNA rna_Paint_tool_slots = {
	{(PropertyRNA *)&rna_Paint_palette, (PropertyRNA *)&rna_Paint_brush,
	-1, "tool_slots", 0, 0, 0, 8, 0, "Paint Tool Slots",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_tool_slots_begin, Paint_tool_slots_next, Paint_tool_slots_end, Paint_tool_slots_get, Paint_tool_slots_length, Paint_tool_slots_lookup_int, NULL, NULL, &RNA_PaintToolSlot
};

PointerPropertyRNA rna_Paint_palette = {
	{(PropertyRNA *)&rna_Paint_show_brush, (PropertyRNA *)&rna_Paint_tool_slots,
	-1, "palette", 8388801, 0, 0, 0, 0, "Palette",
	"Active Palette",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_palette_get, Paint_palette_set, NULL, NULL,&RNA_Palette
};

BoolPropertyRNA rna_Paint_show_brush = {
	{(PropertyRNA *)&rna_Paint_show_brush_on_surface, (PropertyRNA *)&rna_Paint_palette,
	-1, "show_brush", 1, 0, 0, 0, 0, "Show Brush",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_show_brush_get, Paint_show_brush_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_show_brush_on_surface = {
	{(PropertyRNA *)&rna_Paint_show_low_resolution, (PropertyRNA *)&rna_Paint_show_brush,
	-1, "show_brush_on_surface", 1, 0, 0, 0, 0, "Show Brush On Surface",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_show_brush_on_surface_get, Paint_show_brush_on_surface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_show_low_resolution = {
	{(PropertyRNA *)&rna_Paint_use_sculpt_delay_updates, (PropertyRNA *)&rna_Paint_show_brush_on_surface,
	-1, "show_low_resolution", 1, 0, 0, 0, 0, "Fast Navigate",
	"For multires, show low resolution while navigating the view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_show_low_resolution_get, Paint_show_low_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_sculpt_delay_updates = {
	{(PropertyRNA *)&rna_Paint_input_samples, (PropertyRNA *)&rna_Paint_show_low_resolution,
	-1, "use_sculpt_delay_updates", 1, 0, 0, 0, 0, "Delay Viewport Updates",
	"Update the geometry when it enters the view, providing faster view navigation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_use_sculpt_delay_updates_get, Paint_use_sculpt_delay_updates_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Paint_input_samples = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_x, (PropertyRNA *)&rna_Paint_use_sculpt_delay_updates,
	-1, "input_samples", 1, 0, 0, 4, 0, "Input Samples",
	"Average multiple input samples together to smooth the brush stroke",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Paint, num_input_samples), 0, NULL},
	Paint_input_samples_get, Paint_input_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 64, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_x = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_y, (PropertyRNA *)&rna_Paint_input_samples,
	-1, "use_symmetry_x", 1, 0, 0, 0, 0, "Symmetry X",
	"Mirror brush across the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_use_symmetry_x_get, Paint_use_symmetry_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_y = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_z, (PropertyRNA *)&rna_Paint_use_symmetry_x,
	-1, "use_symmetry_y", 1, 0, 0, 0, 0, "Symmetry Y",
	"Mirror brush across the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_use_symmetry_y_get, Paint_use_symmetry_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_z = {
	{(PropertyRNA *)&rna_Paint_use_symmetry_feather, (PropertyRNA *)&rna_Paint_use_symmetry_y,
	-1, "use_symmetry_z", 1, 0, 0, 0, 0, "Symmetry Z",
	"Mirror brush across the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_use_symmetry_z_get, Paint_use_symmetry_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_use_symmetry_feather = {
	{(PropertyRNA *)&rna_Paint_cavity_curve, (PropertyRNA *)&rna_Paint_use_symmetry_z,
	-1, "use_symmetry_feather", 1, 0, 0, 0, 0, "Symmetry Feathering",
	"Reduce the strength of the brush where it overlaps symmetrical daubs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_use_symmetry_feather_get, Paint_use_symmetry_feather_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Paint_cavity_curve = {
	{(PropertyRNA *)&rna_Paint_use_cavity, (PropertyRNA *)&rna_Paint_use_symmetry_feather,
	-1, "cavity_curve", 8650752, 0, 0, 0, 0, "Curve",
	"Editable cavity curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_cavity_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BoolPropertyRNA rna_Paint_use_cavity = {
	{(PropertyRNA *)&rna_Paint_tile_offset, (PropertyRNA *)&rna_Paint_cavity_curve,
	-1, "use_cavity", 1, 0, 0, 0, 0, "Cavity Mask",
	"Mask painting according to mesh geometry cavity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_use_cavity_get, Paint_use_cavity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Paint_tile_offset_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Paint_tile_offset = {
	{(PropertyRNA *)&rna_Paint_tile_x, (PropertyRNA *)&rna_Paint_use_cavity,
	-1, "tile_offset", 1, 0, 0, 4, 0, "Tiling offset for the X Axis",
	"Stride at which tiled strokes are copied",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Paint, tile_offset), 5, NULL},
	NULL, NULL, Paint_tile_offset_get, Paint_tile_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, FLT_MAX, 100.0f, 2, 0.0f, rna_Paint_tile_offset_default
};

BoolPropertyRNA rna_Paint_tile_x = {
	{(PropertyRNA *)&rna_Paint_tile_y, (PropertyRNA *)&rna_Paint_tile_offset,
	-1, "tile_x", 1, 0, 0, 0, 0, "Tile X",
	"Tile along X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_tile_x_get, Paint_tile_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_tile_y = {
	{(PropertyRNA *)&rna_Paint_tile_z, (PropertyRNA *)&rna_Paint_tile_x,
	-1, "tile_y", 1, 0, 0, 0, 0, "Tile Y",
	"Tile along Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_tile_y_get, Paint_tile_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Paint_tile_z = {
	{NULL, (PropertyRNA *)&rna_Paint_tile_y,
	-1, "tile_z", 1, 0, 0, 0, 0, "Tile Z",
	"Tile along Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Paint_tile_z_get, Paint_tile_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Paint = {
	{(ContainerRNA *)&RNA_Sculpt, (ContainerRNA *)&RNA_PaintToolSlot,
	NULL,
	{(PropertyRNA *)&rna_Paint_rna_properties, (PropertyRNA *)&rna_Paint_tile_z}},
	"Paint", NULL, NULL, 516, NULL, "Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
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

/* Sculpt */
static int rna_Sculpt_radial_symmetry_default[3] = {
	1,
	1,
	1
};

IntPropertyRNA rna_Sculpt_radial_symmetry = {
	{(PropertyRNA *)&rna_Sculpt_lock_x, NULL,
	-1, "radial_symmetry", 1, 0, 0, 4, 0, "Radial Symmetry Count X Axis",
	"Number of times to copy strokes across the surface",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, radial_symm), 0, NULL},
	NULL, NULL, Sculpt_radial_symmetry_get, Sculpt_radial_symmetry_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32, 1, 64, 1, 1, rna_Sculpt_radial_symmetry_default
};

BoolPropertyRNA rna_Sculpt_lock_x = {
	{(PropertyRNA *)&rna_Sculpt_lock_y, (PropertyRNA *)&rna_Sculpt_radial_symmetry,
	-1, "lock_x", 1, 0, 0, 0, 0, "Lock X",
	"Disallow changes to the X axis of vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_lock_x_get, Sculpt_lock_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_lock_y = {
	{(PropertyRNA *)&rna_Sculpt_lock_z, (PropertyRNA *)&rna_Sculpt_lock_x,
	-1, "lock_y", 1, 0, 0, 0, 0, "Lock Y",
	"Disallow changes to the Y axis of vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_lock_y_get, Sculpt_lock_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_lock_z = {
	{(PropertyRNA *)&rna_Sculpt_use_deform_only, (PropertyRNA *)&rna_Sculpt_lock_y,
	-1, "lock_z", 1, 0, 0, 0, 0, "Lock Z",
	"Disallow changes to the Z axis of vertices",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_lock_z_get, Sculpt_lock_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_deform_only = {
	{(PropertyRNA *)&rna_Sculpt_show_mask, (PropertyRNA *)&rna_Sculpt_lock_z,
	-1, "use_deform_only", 4194305, 0, 0, 0, 0, "Use Deform Only",
	"Use only deformation modifiers (temporary disable all constructive modifiers except multi-resolution)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Sculpt_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_use_deform_only_get, Sculpt_use_deform_only_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_show_mask = {
	{(PropertyRNA *)&rna_Sculpt_show_face_sets, (PropertyRNA *)&rna_Sculpt_use_deform_only,
	-1, "show_mask", 4194305, 0, 0, 0, 0, "Show Mask",
	"Show mask as overlay on object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Sculpt_ShowMask_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_show_mask_get, Sculpt_show_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_show_face_sets = {
	{(PropertyRNA *)&rna_Sculpt_detail_size, (PropertyRNA *)&rna_Sculpt_show_mask,
	-1, "show_face_sets", 4194305, 0, 0, 0, 0, "Show Face Sets",
	"Show Face Sets as overlay on object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Sculpt_ShowMask_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_show_face_sets_get, Sculpt_show_face_sets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Sculpt_detail_size = {
	{(PropertyRNA *)&rna_Sculpt_detail_percent, (PropertyRNA *)&rna_Sculpt_show_face_sets,
	-1, "detail_size", 1, 0, 0, 4, 0, "Detail Size",
	"Maximum edge length for dynamic topology sculpting (in pixels)",
	0, "*",
	PROP_FLOAT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, detail_size), 5, NULL},
	Sculpt_detail_size_get, Sculpt_detail_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 2.0f, 0.5000000000f, 40.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Sculpt_detail_percent = {
	{(PropertyRNA *)&rna_Sculpt_constant_detail_resolution, (PropertyRNA *)&rna_Sculpt_detail_size,
	-1, "detail_percent", 1, 0, 0, 4, 0, "Detail Percentage",
	"Maximum edge length for dynamic topology sculpting (in brush percenage)",
	0, "*",
	PROP_FLOAT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, detail_percent), 5, NULL},
	Sculpt_detail_percent_get, Sculpt_detail_percent_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, 100.0f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Sculpt_constant_detail_resolution = {
	{(PropertyRNA *)&rna_Sculpt_use_smooth_shading, (PropertyRNA *)&rna_Sculpt_detail_percent,
	-1, "constant_detail_resolution", 1, 0, 0, 4, 0, "Resolution",
	"Maximum edge length for dynamic topology sculpting (as divisor of blender unit - higher value means smaller edge length)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, constant_detail), 5, NULL},
	Sculpt_constant_detail_resolution_get, Sculpt_constant_detail_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1000.0f, 0.0001000000f, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_Sculpt_use_smooth_shading = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_topology, (PropertyRNA *)&rna_Sculpt_constant_detail_resolution,
	-1, "use_smooth_shading", 4194305, 0, 0, 0, 0, "Smooth Shading",
	"Show faces in dynamic-topology mode with smooth shading rather than flat shaded",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Sculpt_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_use_smooth_shading_get, Sculpt_use_smooth_shading_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_automasking_topology = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_face_sets, (PropertyRNA *)&rna_Sculpt_use_smooth_shading,
	-1, "use_automasking_topology", 1, 0, 0, 0, 0, "Topology Auto-Masking",
	"Affect only vertices connected to the active vertex under the brush",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_use_automasking_topology_get, Sculpt_use_automasking_topology_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_automasking_face_sets = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_boundary_edges, (PropertyRNA *)&rna_Sculpt_use_automasking_topology,
	-1, "use_automasking_face_sets", 1, 0, 0, 0, 0, "Face Sets Auto-Masking",
	"Affect only vertices that share Face Sets with the active vertex",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_use_automasking_face_sets_get, Sculpt_use_automasking_face_sets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_automasking_boundary_edges = {
	{(PropertyRNA *)&rna_Sculpt_use_automasking_boundary_face_sets, (PropertyRNA *)&rna_Sculpt_use_automasking_face_sets,
	-1, "use_automasking_boundary_edges", 1, 0, 0, 0, 0, "Mesh Boundary Auto-Masking",
	"Do not affect non manifold boundary edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_use_automasking_boundary_edges_get, Sculpt_use_automasking_boundary_edges_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Sculpt_use_automasking_boundary_face_sets = {
	{(PropertyRNA *)&rna_Sculpt_symmetrize_direction, (PropertyRNA *)&rna_Sculpt_use_automasking_boundary_edges,
	-1, "use_automasking_boundary_face_sets", 1, 0, 0, 0, 0, "Face Sets Boundary Auto-Masking",
	"Do not affect vertices that belong to a Face Set boundary",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_use_automasking_boundary_face_sets_get, Sculpt_use_automasking_boundary_face_sets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_Sculpt_symmetrize_direction = {
	{(PropertyRNA *)&rna_Sculpt_detail_refine_method, (PropertyRNA *)&rna_Sculpt_use_automasking_boundary_face_sets,
	-1, "symmetrize_direction", 1, 0, 0, 4, 0, "Direction",
	"Source and destination for symmetrize operator",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, symmetrize_direction), 0, NULL},
	Sculpt_symmetrize_direction_get, Sculpt_symmetrize_direction_set, NULL, NULL, NULL, rna_enum_symmetrize_direction_items, 6, 0
};

static const EnumPropertyItem rna_Sculpt_detail_refine_method_items[4] = {
	{4096, "SUBDIVIDE", 0, "Subdivide Edges", "Subdivide long edges to add mesh detail where needed"},
	{2048, "COLLAPSE", 0, "Collapse Edges", "Collapse short edges to remove mesh detail where possible"},
	{6144, "SUBDIVIDE_COLLAPSE", 0, "Subdivide Collapse", "Both subdivide long edges and collapse short edges to refine mesh detail"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sculpt_detail_refine_method = {
	{(PropertyRNA *)&rna_Sculpt_detail_type_method, (PropertyRNA *)&rna_Sculpt_symmetrize_direction,
	-1, "detail_refine_method", 1, 0, 0, 4, 0, "Detail Refine Method",
	"In dynamic-topology mode, how to add or remove mesh detail",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, flags), 0, NULL},
	Sculpt_detail_refine_method_get, Sculpt_detail_refine_method_set, NULL, NULL, NULL, rna_Sculpt_detail_refine_method_items, 3, 4096
};

static const EnumPropertyItem rna_Sculpt_detail_type_method_items[5] = {
	{0, "RELATIVE", 0, "Relative Detail", "Mesh detail is relative to the brush size and detail size"},
	{8192, "CONSTANT", 0, "Constant Detail", "Mesh detail is constant in world space according to detail size"},
	{16384, "BRUSH", 0, "Brush Detail", "Mesh detail is relative to brush radius"},
	{65536, "MANUAL", 0, "Manual Detail", "Mesh detail does not change on each stroke, only when using Flood Fill"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sculpt_detail_type_method = {
	{(PropertyRNA *)&rna_Sculpt_gravity, (PropertyRNA *)&rna_Sculpt_detail_refine_method,
	-1, "detail_type_method", 1, 0, 0, 4, 0, "Detail Type Method",
	"In dynamic-topology mode, how mesh detail size is calculated",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, flags), 0, NULL},
	Sculpt_detail_type_method_get, Sculpt_detail_type_method_set, NULL, NULL, NULL, rna_Sculpt_detail_type_method_items, 4, 0
};

FloatPropertyRNA rna_Sculpt_gravity = {
	{(PropertyRNA *)&rna_Sculpt_transform_mode, (PropertyRNA *)&rna_Sculpt_detail_type_method,
	-1, "gravity", 1, 0, 0, 4, 0, "Gravity",
	"Amount of gravity after each dab",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, gravity_factor), 5, NULL},
	Sculpt_gravity_get, Sculpt_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_Sculpt_transform_mode_items[3] = {
	{0, "ALL_VERTICES", 0, "All Vertices", "Applies the transformation to all vertices in the mesh"},
	{1, "RADIUS_ELASTIC", 0, "Elastic", "Applies the transformation simulating elasticity using the radius of the cursor"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sculpt_transform_mode = {
	{(PropertyRNA *)&rna_Sculpt_gravity_object, (PropertyRNA *)&rna_Sculpt_gravity,
	-1, "transform_mode", 1, 0, 0, 4, 0, "Transform Mode",
	"How the transformation is going to be applied to the target",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Sculpt, transform_mode), 0, NULL},
	Sculpt_transform_mode_get, Sculpt_transform_mode_set, NULL, NULL, NULL, rna_Sculpt_transform_mode_items, 2, 0
};

PointerPropertyRNA rna_Sculpt_gravity_object = {
	{NULL, (PropertyRNA *)&rna_Sculpt_transform_mode,
	-1, "gravity_object", 8388737, 0, 0, 0, 0, "Orientation",
	"Object whose Z axis defines orientation of gravity",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Sculpt_gravity_object_get, Sculpt_gravity_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_Sculpt = {
	{(ContainerRNA *)&RNA_UvSculpt, (ContainerRNA *)&RNA_Paint,
	NULL,
	{(PropertyRNA *)&rna_Sculpt_radial_symmetry, (PropertyRNA *)&rna_Sculpt_gravity_object}},
	"Sculpt", NULL, NULL, 516, NULL, "Sculpt",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_Sculpt_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* UV Sculpting */
StructRNA RNA_UvSculpt = {
	{(ContainerRNA *)&RNA_GpPaint, (ContainerRNA *)&RNA_Sculpt,
	NULL,
	{NULL, NULL}},
	"UvSculpt", NULL, NULL, 516, NULL, "UV Sculpting",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_UvSculpt_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Paint */
static const EnumPropertyItem rna_GpPaint_color_mode_items[3] = {
	{0, "MATERIAL", 0, "Material", "Paint using the active material base color"},
	{1, "VERTEXCOLOR", 0, "Color Attribute", "Paint the material with a color attribute"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GpPaint_color_mode = {
	{NULL, NULL,
	-1, "color_mode", 1, 0, 0, 4, 0, "Mode",
	"Paint Mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GpPaint, mode), 0, NULL},
	GpPaint_color_mode_get, GpPaint_color_mode_set, NULL, NULL, NULL, rna_GpPaint_color_mode_items, 2, 0
};

StructRNA RNA_GpPaint = {
	{(ContainerRNA *)&RNA_GpVertexPaint, (ContainerRNA *)&RNA_UvSculpt,
	NULL,
	{(PropertyRNA *)&rna_GpPaint_color_mode, (PropertyRNA *)&rna_GpPaint_color_mode}},
	"GpPaint", NULL, NULL, 516, NULL, "Grease Pencil Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_GpPaint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Vertex Paint */
StructRNA RNA_GpVertexPaint = {
	{(ContainerRNA *)&RNA_GpSculptPaint, (ContainerRNA *)&RNA_GpPaint,
	NULL,
	{NULL, NULL}},
	"GpVertexPaint", NULL, NULL, 516, NULL, "Grease Pencil Vertex Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_GpVertexPaint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Sculpt Paint */
StructRNA RNA_GpSculptPaint = {
	{(ContainerRNA *)&RNA_GpWeightPaint, (ContainerRNA *)&RNA_GpVertexPaint,
	NULL,
	{NULL, NULL}},
	"GpSculptPaint", NULL, NULL, 516, NULL, "Grease Pencil Sculpt Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_GpSculptPaint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Weight Paint */
StructRNA RNA_GpWeightPaint = {
	{(ContainerRNA *)&RNA_VertexPaint, (ContainerRNA *)&RNA_GpSculptPaint,
	NULL,
	{NULL, NULL}},
	"GpWeightPaint", NULL, NULL, 516, NULL, "Grease Pencil Weight Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_GpWeightPaint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Paint */
BoolPropertyRNA rna_VertexPaint_use_group_restrict = {
	{(PropertyRNA *)&rna_VertexPaint_radial_symmetry, NULL,
	-1, "use_group_restrict", 1, 0, 0, 0, 0, "Restrict",
	"Restrict painting to vertices in the group",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexPaint_use_group_restrict_get, VertexPaint_use_group_restrict_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_VertexPaint_radial_symmetry_default[3] = {
	1,
	1,
	1
};

IntPropertyRNA rna_VertexPaint_radial_symmetry = {
	{NULL, (PropertyRNA *)&rna_VertexPaint_use_group_restrict,
	-1, "radial_symmetry", 1, 0, 0, 4, 0, "Radial Symmetry Count X Axis",
	"Number of times to copy strokes across the surface",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(VPaint, radial_symm), 0, NULL},
	NULL, NULL, VertexPaint_radial_symmetry_get, VertexPaint_radial_symmetry_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32, 1, 64, 1, 1, rna_VertexPaint_radial_symmetry_default
};

StructRNA RNA_VertexPaint = {
	{(ContainerRNA *)&RNA_PaintModeSettings, (ContainerRNA *)&RNA_GpWeightPaint,
	NULL,
	{(PropertyRNA *)&rna_VertexPaint_use_group_restrict, (PropertyRNA *)&rna_VertexPaint_radial_symmetry}},
	"VertexPaint", NULL, NULL, 516, NULL, "Vertex Paint",
	"Properties of vertex and weight paint mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_VertexPaint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Paint Mode */
CollectionPropertyRNA rna_PaintModeSettings_rna_properties = {
	{(PropertyRNA *)&rna_PaintModeSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaintModeSettings_rna_properties_begin, PaintModeSettings_rna_properties_next, PaintModeSettings_rna_properties_end, PaintModeSettings_rna_properties_get, NULL, NULL, PaintModeSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PaintModeSettings_rna_type = {
	{(PropertyRNA *)&rna_PaintModeSettings_canvas_source, (PropertyRNA *)&rna_PaintModeSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaintModeSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_PaintModeSettings_canvas_source_items[4] = {
	{2, "COLOR_ATTRIBUTE", 0, "Color Attribute", ""},
	{0, "MATERIAL", 0, "Material", ""},
	{1, "IMAGE", 0, "Image", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PaintModeSettings_canvas_source = {
	{(PropertyRNA *)&rna_PaintModeSettings_canvas_image, (PropertyRNA *)&rna_PaintModeSettings_rna_type,
	-1, "canvas_source", 4194305, 0, 0, 4, 0, "Source",
	"Source to select canvas from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_PaintModeSettings_canvas_source_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaintModeSettings, canvas_source), 2, NULL},
	PaintModeSettings_canvas_source_get, PaintModeSettings_canvas_source_set, NULL, NULL, NULL, rna_PaintModeSettings_canvas_source_items, 3, 0
};

PointerPropertyRNA rna_PaintModeSettings_canvas_image = {
	{NULL, (PropertyRNA *)&rna_PaintModeSettings_canvas_source,
	-1, "canvas_image", 12583105, 0, 0, 0, 0, "Texture",
	"Image used as as painting target",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaintModeSettings_canvas_image_get, PaintModeSettings_canvas_image_set, NULL, rna_PaintModeSettings_canvas_image_poll,&RNA_Image
};

StructRNA RNA_PaintModeSettings = {
	{(ContainerRNA *)&RNA_ImagePaint, (ContainerRNA *)&RNA_VertexPaint,
	NULL,
	{(PropertyRNA *)&rna_PaintModeSettings_rna_properties, (PropertyRNA *)&rna_PaintModeSettings_canvas_image}},
	"PaintModeSettings", NULL, NULL, 516, NULL, "Paint Mode",
	"Properties of paint mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PaintModeSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_PaintModeSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Image Paint */
BoolPropertyRNA rna_ImagePaint_use_occlude = {
	{(PropertyRNA *)&rna_ImagePaint_use_backface_culling, NULL,
	-1, "use_occlude", 1, 0, 0, 0, 0, "Occlude",
	"Only paint onto the faces directly under the brush (slower)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_use_occlude_get, ImagePaint_use_occlude_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_use_backface_culling = {
	{(PropertyRNA *)&rna_ImagePaint_use_normal_falloff, (PropertyRNA *)&rna_ImagePaint_use_occlude,
	-1, "use_backface_culling", 1, 0, 0, 0, 0, "Cull",
	"Ignore faces pointing away from the view (faster)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_use_backface_culling_get, ImagePaint_use_backface_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_use_normal_falloff = {
	{(PropertyRNA *)&rna_ImagePaint_use_stencil_layer, (PropertyRNA *)&rna_ImagePaint_use_backface_culling,
	-1, "use_normal_falloff", 1, 0, 0, 0, 0, "Normal",
	"Paint most on faces pointing towards the view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_use_normal_falloff_get, ImagePaint_use_normal_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_use_stencil_layer = {
	{(PropertyRNA *)&rna_ImagePaint_invert_stencil, (PropertyRNA *)&rna_ImagePaint_use_normal_falloff,
	-1, "use_stencil_layer", 1, 0, 0, 0, 0, "Stencil Layer",
	"Set the mask layer from the UV map buttons",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_use_stencil_layer_get, ImagePaint_use_stencil_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_invert_stencil = {
	{(PropertyRNA *)&rna_ImagePaint_stencil_image, (PropertyRNA *)&rna_ImagePaint_use_stencil_layer,
	-1, "invert_stencil", 1, 0, 0, 0, 0, "Invert",
	"Invert the stencil layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_invert_stencil_get, ImagePaint_invert_stencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ImagePaint_stencil_image = {
	{(PropertyRNA *)&rna_ImagePaint_canvas, (PropertyRNA *)&rna_ImagePaint_invert_stencil,
	-1, "stencil_image", 12583105, 0, 0, 0, 0, "Stencil Image",
	"Image used as stencil",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ImaPaint_stencil_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_stencil_image_get, ImagePaint_stencil_image_set, NULL, rna_ImaPaint_imagetype_poll,&RNA_Image
};

PointerPropertyRNA rna_ImagePaint_canvas = {
	{(PropertyRNA *)&rna_ImagePaint_clone_image, (PropertyRNA *)&rna_ImagePaint_stencil_image,
	-1, "canvas", 12583105, 0, 0, 0, 0, "Canvas",
	"Image used as canvas",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ImaPaint_canvas_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_canvas_get, ImagePaint_canvas_set, NULL, rna_ImaPaint_imagetype_poll,&RNA_Image
};

PointerPropertyRNA rna_ImagePaint_clone_image = {
	{(PropertyRNA *)&rna_ImagePaint_stencil_color, (PropertyRNA *)&rna_ImagePaint_canvas,
	-1, "clone_image", 8388801, 0, 0, 0, 0, "Clone Image",
	"Image used as clone source",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_clone_image_get, ImagePaint_clone_image_set, NULL, rna_ImaPaint_imagetype_poll,&RNA_Image
};

static float rna_ImagePaint_stencil_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ImagePaint_stencil_color = {
	{(PropertyRNA *)&rna_ImagePaint_dither, (PropertyRNA *)&rna_ImagePaint_clone_image,
	-1, "stencil_color", 1, 0, 0, 4, 0, "Stencil Color",
	"Stencil color in the viewport",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, stencil_col), 5, NULL},
	NULL, NULL, ImagePaint_stencil_color_get, ImagePaint_stencil_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ImagePaint_stencil_color_default
};

FloatPropertyRNA rna_ImagePaint_dither = {
	{(PropertyRNA *)&rna_ImagePaint_use_clone_layer, (PropertyRNA *)&rna_ImagePaint_stencil_color,
	-1, "dither", 1, 0, 0, 4, 0, "Dither",
	"Amount of dithering when painting on byte images",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, dither), 5, NULL},
	ImagePaint_dither_get, ImagePaint_dither_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ImagePaint_use_clone_layer = {
	{(PropertyRNA *)&rna_ImagePaint_seam_bleed, (PropertyRNA *)&rna_ImagePaint_dither,
	-1, "use_clone_layer", 1, 0, 0, 0, 0, "Clone Map",
	"Use another UV map as clone source, otherwise use the 3D cursor as the source",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_use_clone_layer_get, ImagePaint_use_clone_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImagePaint_seam_bleed = {
	{(PropertyRNA *)&rna_ImagePaint_normal_angle, (PropertyRNA *)&rna_ImagePaint_use_clone_layer,
	-1, "seam_bleed", 1, 0, 0, 4, 0, "Bleed",
	"Extend paint beyond the faces UVs to reduce seams (in pixels, slower)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, seam_bleed), 1, NULL},
	ImagePaint_seam_bleed_get, ImagePaint_seam_bleed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 8, -32768, 32767, 1, 2, NULL
};

IntPropertyRNA rna_ImagePaint_normal_angle = {
	{(PropertyRNA *)&rna_ImagePaint_screen_grab_size, (PropertyRNA *)&rna_ImagePaint_seam_bleed,
	-1, "normal_angle", 1, 0, 0, 4, 0, "Angle",
	"Paint most on faces pointing towards the view according to this angle",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, normal_angle), 1, NULL},
	ImagePaint_normal_angle_get, ImagePaint_normal_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 90, 0, 90, 1, 80, NULL
};

static int rna_ImagePaint_screen_grab_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePaint_screen_grab_size = {
	{(PropertyRNA *)&rna_ImagePaint_mode, (PropertyRNA *)&rna_ImagePaint_normal_angle,
	-1, "screen_grab_size", 1, 0, 0, 4, 0, "Screen Grab Size",
	"Size to capture the image for re-projecting",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, screen_grab_size), 1, NULL},
	NULL, NULL, ImagePaint_screen_grab_size_get, ImagePaint_screen_grab_size_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 512, 16384, 512, 16384, 1, 0, rna_ImagePaint_screen_grab_size_default
};

static const EnumPropertyItem rna_ImagePaint_mode_items[3] = {
	{0, "MATERIAL", 0, "Material", "Detect image slots from the material"},
	{1, "IMAGE", 0, "Single Image", "Set image for texture painting directly"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImagePaint_mode = {
	{(PropertyRNA *)&rna_ImagePaint_interpolation, (PropertyRNA *)&rna_ImagePaint_screen_grab_size,
	-1, "mode", 4194305, 0, 0, 4, 0, "Mode",
	"Mode of operation for projection painting",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ImaPaint_mode_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, mode), 0, NULL},
	ImagePaint_mode_get, ImagePaint_mode_set, NULL, NULL, NULL, rna_ImagePaint_mode_items, 2, 0
};

static const EnumPropertyItem rna_ImagePaint_interpolation_items[3] = {
	{0, "LINEAR", 0, "Linear", "Linear interpolation"},
	{1, "CLOSEST", 0, "Closest", "No interpolation (sample closest texel)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ImagePaint_interpolation = {
	{(PropertyRNA *)&rna_ImagePaint_missing_uvs, (PropertyRNA *)&rna_ImagePaint_mode,
	-1, "interpolation", 4194305, 0, 0, 4, 0, "Interpolation",
	"Texture filtering type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ImaPaint_mode_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ImagePaintSettings, interp), 0, NULL},
	ImagePaint_interpolation_get, ImagePaint_interpolation_set, NULL, NULL, NULL, rna_ImagePaint_interpolation_items, 2, 0
};

BoolPropertyRNA rna_ImagePaint_missing_uvs = {
	{(PropertyRNA *)&rna_ImagePaint_missing_materials, (PropertyRNA *)&rna_ImagePaint_interpolation,
	-1, "missing_uvs", 0, 0, 0, 0, 0, "Missing UVs",
	"A UV layer is missing on the mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_missing_uvs_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_missing_materials = {
	{(PropertyRNA *)&rna_ImagePaint_missing_stencil, (PropertyRNA *)&rna_ImagePaint_missing_uvs,
	-1, "missing_materials", 0, 0, 0, 0, 0, "Missing Materials",
	"The mesh is missing materials",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_missing_materials_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_missing_stencil = {
	{(PropertyRNA *)&rna_ImagePaint_missing_texture, (PropertyRNA *)&rna_ImagePaint_missing_materials,
	-1, "missing_stencil", 0, 0, 0, 0, 0, "Missing Stencil",
	"Image Painting does not have a stencil",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_missing_stencil_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_missing_texture = {
	{NULL, (PropertyRNA *)&rna_ImagePaint_missing_stencil,
	-1, "missing_texture", 0, 0, 0, 0, 0, "Missing Texture",
	"Image Painting does not have a texture to paint on",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePaint_missing_texture_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ImagePaint_detect_data_ok = {
	{NULL, NULL,
	-1, "ok", 1, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_ImagePaint_detect_data_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_ImagePaint_detect_data_ok, (PropertyRNA *)&rna_ImagePaint_detect_data_ok}},
	"detect_data", 0, "Check if required texpaint data exist",
	ImagePaint_detect_data_call,
	(PropertyRNA *)&rna_ImagePaint_detect_data_ok
};

StructRNA RNA_ImagePaint = {
	{(ContainerRNA *)&RNA_ParticleEdit, (ContainerRNA *)&RNA_PaintModeSettings,
	NULL,
	{(PropertyRNA *)&rna_ImagePaint_use_occlude, (PropertyRNA *)&rna_ImagePaint_missing_texture}},
	"ImagePaint", NULL, NULL, 516, NULL, "Image Paint",
	"Properties of image and texture painting mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_ImagePaintSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ImagePaint_detect_data_func, (FunctionRNA *)&rna_ImagePaint_detect_data_func}
};

/* Particle Edit */
CollectionPropertyRNA rna_ParticleEdit_rna_properties = {
	{(PropertyRNA *)&rna_ParticleEdit_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_rna_properties_begin, ParticleEdit_rna_properties_next, ParticleEdit_rna_properties_end, ParticleEdit_rna_properties_get, NULL, NULL, ParticleEdit_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleEdit_rna_type = {
	{(PropertyRNA *)&rna_ParticleEdit_tool, (PropertyRNA *)&rna_ParticleEdit_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_ParticleEdit_tool_items[8] = {
	{0, "COMB", 0, "Comb", "Comb hairs"},
	{5, "SMOOTH", 0, "Smooth", "Smooth hairs"},
	{4, "ADD", 0, "Add", "Add hairs"},
	{2, "LENGTH", 0, "Length", "Make hairs longer or shorter"},
	{3, "PUFF", 0, "Puff", "Make hairs stand up"},
	{1, "CUT", 0, "Cut", "Cut hairs"},
	{6, "WEIGHT", 0, "Weight", "Weight hair particles"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_tool = {
	{(PropertyRNA *)&rna_ParticleEdit_select_mode, (PropertyRNA *)&rna_ParticleEdit_rna_type,
	-1, "tool", 1, 0, 0, 0, 0, "Tool",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_tool_get, ParticleEdit_tool_set, rna_ParticleEdit_tool_itemf, NULL, NULL, rna_ParticleEdit_tool_items, 7, 0
};

static const EnumPropertyItem rna_ParticleEdit_select_mode_items[4] = {
	{1, "PATH", 571, "Path", "Path edit mode"},
	{2, "POINT", 569, "Point", "Point select mode"},
	{4, "TIP", 570, "Tip", "Tip select mode"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_select_mode = {
	{(PropertyRNA *)&rna_ParticleEdit_use_preserve_length, (PropertyRNA *)&rna_ParticleEdit_tool,
	-1, "select_mode", 4194305, 0, 0, 4, 0, "Selection Mode",
	"Particle select and display mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, selectmode), 0, NULL},
	ParticleEdit_select_mode_get, ParticleEdit_select_mode_set, NULL, NULL, NULL, rna_ParticleEdit_select_mode_items, 3, 1
};

BoolPropertyRNA rna_ParticleEdit_use_preserve_length = {
	{(PropertyRNA *)&rna_ParticleEdit_use_preserve_root, (PropertyRNA *)&rna_ParticleEdit_select_mode,
	-1, "use_preserve_length", 1, 0, 0, 0, 0, "Keep Lengths",
	"Keep path lengths constant",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_use_preserve_length_get, ParticleEdit_use_preserve_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_preserve_root = {
	{(PropertyRNA *)&rna_ParticleEdit_use_emitter_deflect, (PropertyRNA *)&rna_ParticleEdit_use_preserve_length,
	-1, "use_preserve_root", 1, 0, 0, 0, 0, "Keep Root",
	"Keep root keys unmodified",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_use_preserve_root_get, ParticleEdit_use_preserve_root_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_emitter_deflect = {
	{(PropertyRNA *)&rna_ParticleEdit_emitter_distance, (PropertyRNA *)&rna_ParticleEdit_use_preserve_root,
	-1, "use_emitter_deflect", 1, 0, 0, 0, 0, "Deflect Emitter",
	"Keep paths from intersecting the emitter",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_use_emitter_deflect_get, ParticleEdit_use_emitter_deflect_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_ParticleEdit_emitter_distance = {
	{(PropertyRNA *)&rna_ParticleEdit_use_fade_time, (PropertyRNA *)&rna_ParticleEdit_use_emitter_deflect,
	-1, "emitter_distance", 1, 0, 0, 4, 0, "Emitter Distance",
	"Distance to keep particles away from the emitter",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, emitterdist), 5, NULL},
	ParticleEdit_emitter_distance_get, ParticleEdit_emitter_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.2500000000f, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_fade_time = {
	{(PropertyRNA *)&rna_ParticleEdit_use_auto_velocity, (PropertyRNA *)&rna_ParticleEdit_emitter_distance,
	-1, "use_fade_time", 4194305, 0, 0, 0, 0, "Fade Time",
	"Fade paths and keys further away from current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_use_fade_time_get, ParticleEdit_use_fade_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_auto_velocity = {
	{(PropertyRNA *)&rna_ParticleEdit_show_particles, (PropertyRNA *)&rna_ParticleEdit_use_fade_time,
	-1, "use_auto_velocity", 1, 0, 0, 0, 0, "Auto Velocity",
	"Calculate point velocities automatically",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_use_auto_velocity_get, ParticleEdit_use_auto_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_ParticleEdit_show_particles = {
	{(PropertyRNA *)&rna_ParticleEdit_use_default_interpolate, (PropertyRNA *)&rna_ParticleEdit_use_auto_velocity,
	-1, "show_particles", 4194305, 0, 0, 0, 0, "Display Particles",
	"Display actual particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_redo, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_show_particles_get, ParticleEdit_show_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_use_default_interpolate = {
	{(PropertyRNA *)&rna_ParticleEdit_default_key_count, (PropertyRNA *)&rna_ParticleEdit_show_particles,
	-1, "use_default_interpolate", 1, 0, 0, 0, 0, "Interpolate",
	"Interpolate new particles from the existing ones",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_use_default_interpolate_get, ParticleEdit_use_default_interpolate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleEdit_default_key_count = {
	{(PropertyRNA *)&rna_ParticleEdit_brush, (PropertyRNA *)&rna_ParticleEdit_use_default_interpolate,
	-1, "default_key_count", 1, 0, 0, 4, 0, "Keys",
	"How many keys to make new particles with",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, totaddkey), 1, NULL},
	ParticleEdit_default_key_count_get, ParticleEdit_default_key_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 2, 20, 2, 32767, 10, 5, NULL
};

PointerPropertyRNA rna_ParticleEdit_brush = {
	{(PropertyRNA *)&rna_ParticleEdit_display_step, (PropertyRNA *)&rna_ParticleEdit_default_key_count,
	-1, "brush", 8388608, 0, 0, 0, 0, "Brush",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {7, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_brush_get, NULL, NULL, NULL,&RNA_ParticleBrush
};

IntPropertyRNA rna_ParticleEdit_display_step = {
	{(PropertyRNA *)&rna_ParticleEdit_fade_frames, (PropertyRNA *)&rna_ParticleEdit_brush,
	-1, "display_step", 4194305, 0, 0, 4, 0, "Steps",
	"How many steps to display the path with",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_redo, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, draw_step), 0, NULL},
	ParticleEdit_display_step_get, ParticleEdit_display_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 10, 1, 2, NULL
};

IntPropertyRNA rna_ParticleEdit_fade_frames = {
	{(PropertyRNA *)&rna_ParticleEdit_type, (PropertyRNA *)&rna_ParticleEdit_display_step,
	-1, "fade_frames", 4194305, 0, 0, 4, 0, "Frames",
	"How many frames to fade",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, fade_frames), 0, NULL},
	ParticleEdit_fade_frames_get, ParticleEdit_fade_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 100, 1, 2, NULL
};

static const EnumPropertyItem rna_ParticleEdit_type_items[4] = {
	{0, "PARTICLES", 0, "Particles", ""},
	{1, "SOFT_BODY", 0, "Soft Body", ""},
	{2, "CLOTH", 0, "Cloth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_type = {
	{(PropertyRNA *)&rna_ParticleEdit_is_editable, (PropertyRNA *)&rna_ParticleEdit_fade_frames,
	-1, "type", 4194305, 0, 0, 4, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_redo, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleEditSettings, edittype), 0, NULL},
	ParticleEdit_type_get, ParticleEdit_type_set, NULL, NULL, NULL, rna_ParticleEdit_type_items, 3, 0
};

BoolPropertyRNA rna_ParticleEdit_is_editable = {
	{(PropertyRNA *)&rna_ParticleEdit_is_hair, (PropertyRNA *)&rna_ParticleEdit_type,
	-1, "is_editable", 0, 0, 0, 0, 0, "Editable",
	"A valid edit mode exists",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_is_editable_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleEdit_is_hair = {
	{(PropertyRNA *)&rna_ParticleEdit_object, (PropertyRNA *)&rna_ParticleEdit_is_editable,
	-1, "is_hair", 0, 0, 0, 0, 0, "Hair",
	"Editing hair",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_is_hair_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleEdit_object = {
	{(PropertyRNA *)&rna_ParticleEdit_shape_object, (PropertyRNA *)&rna_ParticleEdit_is_hair,
	-1, "object", 8388736, 0, 0, 0, 0, "Object",
	"The edited object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_object_get, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_ParticleEdit_shape_object = {
	{NULL, (PropertyRNA *)&rna_ParticleEdit_object,
	-1, "shape_object", 12583041, 0, 0, 0, 0, "Shape Object",
	"Outer shape to use for tools",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_ParticleEdit_redo, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleEdit_shape_object_get, ParticleEdit_shape_object_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

StructRNA RNA_ParticleEdit = {
	{(ContainerRNA *)&RNA_ParticleBrush, (ContainerRNA *)&RNA_ImagePaint,
	NULL,
	{(PropertyRNA *)&rna_ParticleEdit_rna_properties, (PropertyRNA *)&rna_ParticleEdit_shape_object}},
	"ParticleEdit", NULL, NULL, 516, NULL, "Particle Edit",
	"Properties of particle editing mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleEdit_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ParticleEdit_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Brush */
CollectionPropertyRNA rna_ParticleBrush_rna_properties = {
	{(PropertyRNA *)&rna_ParticleBrush_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleBrush_rna_properties_begin, ParticleBrush_rna_properties_next, ParticleBrush_rna_properties_end, ParticleBrush_rna_properties_get, NULL, NULL, ParticleBrush_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ParticleBrush_rna_type = {
	{(PropertyRNA *)&rna_ParticleBrush_size, (PropertyRNA *)&rna_ParticleBrush_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleBrush_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_ParticleBrush_size = {
	{(PropertyRNA *)&rna_ParticleBrush_strength, (PropertyRNA *)&rna_ParticleBrush_rna_type,
	-1, "size", 1, 0, 0, 4, 0, "Radius",
	"Radius of the brush in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, size), 1, NULL},
	ParticleBrush_size_get, ParticleBrush_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 500, 1, 32767, 10, 50, NULL
};

FloatPropertyRNA rna_ParticleBrush_strength = {
	{(PropertyRNA *)&rna_ParticleBrush_count, (PropertyRNA *)&rna_ParticleBrush_size,
	-1, "strength", 1, 0, 0, 4, 0, "Strength",
	"Brush strength",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, strength), 5, NULL},
	ParticleBrush_strength_get, ParticleBrush_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

IntPropertyRNA rna_ParticleBrush_count = {
	{(PropertyRNA *)&rna_ParticleBrush_steps, (PropertyRNA *)&rna_ParticleBrush_strength,
	-1, "count", 1, 0, 0, 4, 0, "Count",
	"Particle count",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, count), 1, NULL},
	ParticleBrush_count_get, ParticleBrush_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 1000, 10, 10, NULL
};

IntPropertyRNA rna_ParticleBrush_steps = {
	{(PropertyRNA *)&rna_ParticleBrush_puff_mode, (PropertyRNA *)&rna_ParticleBrush_count,
	-1, "steps", 1, 0, 0, 4, 0, "Steps",
	"Brush steps",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, step), 1, NULL},
	ParticleBrush_steps_get, ParticleBrush_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 50, 1, 32767, 10, 10, NULL
};

static const EnumPropertyItem rna_ParticleBrush_puff_mode_items[3] = {
	{0, "ADD", 0, "Add", "Make hairs more puffy"},
	{1, "SUB", 0, "Sub", "Make hairs less puffy"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleBrush_puff_mode = {
	{(PropertyRNA *)&rna_ParticleBrush_use_puff_volume, (PropertyRNA *)&rna_ParticleBrush_steps,
	-1, "puff_mode", 1, 0, 0, 4, 0, "Puff Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, invert), 1, NULL},
	ParticleBrush_puff_mode_get, ParticleBrush_puff_mode_set, NULL, NULL, NULL, rna_ParticleBrush_puff_mode_items, 2, 0
};

BoolPropertyRNA rna_ParticleBrush_use_puff_volume = {
	{(PropertyRNA *)&rna_ParticleBrush_length_mode, (PropertyRNA *)&rna_ParticleBrush_puff_mode,
	-1, "use_puff_volume", 1, 0, 0, 0, 0, "Puff Volume",
	"Apply puff to unselected end-points (helps maintain hair volume when puffing root)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleBrush_use_puff_volume_get, ParticleBrush_use_puff_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_ParticleBrush_length_mode_items[3] = {
	{0, "GROW", 0, "Grow", "Make hairs longer"},
	{1, "SHRINK", 0, "Shrink", "Make hairs shorter"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleBrush_length_mode = {
	{(PropertyRNA *)&rna_ParticleBrush_curve, (PropertyRNA *)&rna_ParticleBrush_use_puff_volume,
	-1, "length_mode", 1, 0, 0, 4, 0, "Length Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ParticleBrushData, invert), 1, NULL},
	ParticleBrush_length_mode_get, ParticleBrush_length_mode_set, NULL, NULL, NULL, rna_ParticleBrush_length_mode_items, 2, 0
};

PointerPropertyRNA rna_ParticleBrush_curve = {
	{NULL, (PropertyRNA *)&rna_ParticleBrush_length_mode,
	-1, "curve", 8388608, 0, 0, 0, 0, "Curve",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ParticleBrush_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

StructRNA RNA_ParticleBrush = {
	{(ContainerRNA *)&RNA_GPencilSculptGuide, (ContainerRNA *)&RNA_ParticleEdit,
	NULL,
	{(PropertyRNA *)&rna_ParticleBrush_rna_properties, (PropertyRNA *)&rna_ParticleBrush_curve}},
	"ParticleBrush", NULL, NULL, 516, NULL, "Particle Brush",
	"Particle editing brush",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ParticleBrush_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ParticleBrush_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* GPencil Sculpt Guide */
CollectionPropertyRNA rna_GPencilSculptGuide_rna_properties = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptGuide_rna_properties_begin, GPencilSculptGuide_rna_properties_next, GPencilSculptGuide_rna_properties_end, GPencilSculptGuide_rna_properties_get, NULL, NULL, GPencilSculptGuide_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilSculptGuide_rna_type = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_use_guide, (PropertyRNA *)&rna_GPencilSculptGuide_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptGuide_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_GPencilSculptGuide_use_guide = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_use_snapping, (PropertyRNA *)&rna_GPencilSculptGuide_rna_type,
	-1, "use_guide", 1, 0, 0, 4, 0, "Use Guides",
	"Enable speed guides",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, use_guide), 2, NULL},
	GPencilSculptGuide_use_guide_get, GPencilSculptGuide_use_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilSculptGuide_use_snapping = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_reference_object, (PropertyRNA *)&rna_GPencilSculptGuide_use_guide,
	-1, "use_snapping", 1, 0, 0, 4, 0, "Use Snapping",
	"Enable snapping to guides angle or spacing options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, use_snapping), 2, NULL},
	GPencilSculptGuide_use_snapping_get, GPencilSculptGuide_use_snapping_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GPencilSculptGuide_reference_object = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_reference_point, (PropertyRNA *)&rna_GPencilSculptGuide_use_snapping,
	-1, "reference_object", 9437313, 0, 0, 0, 0, "Object",
	"Object used for reference point",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptGuide_reference_object_get, GPencilSculptGuide_reference_object_set, NULL, NULL,&RNA_Object
};

static const EnumPropertyItem rna_GPencilSculptGuide_reference_point_items[4] = {
	{0, "CURSOR", 0, "Cursor", "Use cursor as reference point"},
	{1, "CUSTOM", 0, "Custom", "Use custom reference point"},
	{2, "OBJECT", 0, "Object", "Use object as reference point"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilSculptGuide_reference_point = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_type, (PropertyRNA *)&rna_GPencilSculptGuide_reference_object,
	-1, "reference_point", 1, 0, 0, 4, 0, "Type",
	"Type of speed guide",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, reference_point), 2, NULL},
	GPencilSculptGuide_reference_point_get, GPencilSculptGuide_reference_point_set, NULL, NULL, NULL, rna_GPencilSculptGuide_reference_point_items, 3, 0
};

static const EnumPropertyItem rna_GPencilSculptGuide_type_items[6] = {
	{0, "CIRCULAR", 0, "Circular", "Use single point to create rings"},
	{1, "RADIAL", 0, "Radial", "Use single point as direction"},
	{2, "PARALLEL", 0, "Parallel", "Parallel lines"},
	{3, "GRID", 0, "Grid", "Grid allows horizontal and vertical lines"},
	{4, "ISO", 0, "Isometric", "Grid allows isometric and vertical lines"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilSculptGuide_type = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_angle, (PropertyRNA *)&rna_GPencilSculptGuide_reference_point,
	-1, "type", 1, 0, 0, 4, 0, "Type",
	"Type of speed guide",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, type), 2, NULL},
	GPencilSculptGuide_type_get, GPencilSculptGuide_type_set, NULL, NULL, NULL, rna_GPencilSculptGuide_type_items, 5, 0
};

FloatPropertyRNA rna_GPencilSculptGuide_angle = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_angle_snap, (PropertyRNA *)&rna_GPencilSculptGuide_type,
	-1, "angle", 1, 0, 0, 4, 0, "Angle",
	"Direction of lines",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, angle), 5, NULL},
	GPencilSculptGuide_angle_get, GPencilSculptGuide_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilSculptGuide_angle_snap = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_spacing, (PropertyRNA *)&rna_GPencilSculptGuide_angle,
	-1, "angle_snap", 1, 0, 0, 4, 0, "Angle Snap",
	"Angle snapping",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, angle_snap), 5, NULL},
	GPencilSculptGuide_angle_snap_get, GPencilSculptGuide_angle_snap_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilSculptGuide_spacing = {
	{(PropertyRNA *)&rna_GPencilSculptGuide_location, (PropertyRNA *)&rna_GPencilSculptGuide_angle_snap,
	-1, "spacing", 1, 0, 0, 4, 0, "Spacing",
	"Guide spacing",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, spacing), 5, NULL},
	GPencilSculptGuide_spacing_get, GPencilSculptGuide_spacing_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 20.0f, NULL
};

static float rna_GPencilSculptGuide_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilSculptGuide_location = {
	{NULL, (PropertyRNA *)&rna_GPencilSculptGuide_spacing,
	-1, "location", 1, 0, 0, 4, 0, "Location",
	"Custom reference point for guides",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_ImaPaint_viewport_update, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Guide, location), 5, NULL},
	NULL, NULL, GPencilSculptGuide_location_get, GPencilSculptGuide_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_GPencilSculptGuide_location_default
};

StructRNA RNA_GPencilSculptGuide = {
	{(ContainerRNA *)&RNA_GPencilSculptSettings, (ContainerRNA *)&RNA_ParticleBrush,
	NULL,
	{(PropertyRNA *)&rna_GPencilSculptGuide_rna_properties, (PropertyRNA *)&rna_GPencilSculptGuide_location}},
	"GPencilSculptGuide", NULL, NULL, 516, NULL, "GPencil Sculpt Guide",
	"Guides for drawing",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilSculptGuide_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_GPencilSculptGuide_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* GPencil Sculpt Settings */
CollectionPropertyRNA rna_GPencilSculptSettings_rna_properties = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_rna_properties_begin, GPencilSculptSettings_rna_properties_next, GPencilSculptSettings_rna_properties_end, GPencilSculptSettings_rna_properties_get, NULL, NULL, GPencilSculptSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilSculptSettings_rna_type = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_guide, (PropertyRNA *)&rna_GPencilSculptSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_GPencilSculptSettings_guide = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_multiframe_falloff, (PropertyRNA *)&rna_GPencilSculptSettings_rna_type,
	-1, "guide", 8388608, 0, 0, 0, 0, "Guide",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_guide_get, NULL, NULL, NULL,&RNA_GPencilSculptGuide
};

BoolPropertyRNA rna_GPencilSculptSettings_use_multiframe_falloff = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_thickness_curve, (PropertyRNA *)&rna_GPencilSculptSettings_guide,
	-1, "use_multiframe_falloff", 1, 0, 0, 0, 0, "Use Falloff",
	"Use falloff effect when edit in multiframe mode to compute brush effect by frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_use_multiframe_falloff_get, GPencilSculptSettings_use_multiframe_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilSculptSettings_use_thickness_curve = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_use_scale_thickness, (PropertyRNA *)&rna_GPencilSculptSettings_use_multiframe_falloff,
	-1, "use_thickness_curve", 1, 0, 0, 0, 0, "Use Curve",
	"Use curve to define primitive stroke thickness",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_use_thickness_curve_get, GPencilSculptSettings_use_thickness_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilSculptSettings_use_scale_thickness = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_multiframe_falloff_curve, (PropertyRNA *)&rna_GPencilSculptSettings_use_thickness_curve,
	-1, "use_scale_thickness", 1, 0, 0, 0, 0, "Scale Stroke Thickness",
	"Scale the stroke thickness when transforming strokes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_use_scale_thickness_get, GPencilSculptSettings_use_scale_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GPencilSculptSettings_multiframe_falloff_curve = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_thickness_primitive_curve, (PropertyRNA *)&rna_GPencilSculptSettings_use_scale_thickness,
	-1, "multiframe_falloff_curve", 8388608, 0, 0, 0, 0, "Curve",
	"Custom curve to control falloff of brush effect by Grease Pencil frames",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_multiframe_falloff_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

PointerPropertyRNA rna_GPencilSculptSettings_thickness_primitive_curve = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_lock_axis, (PropertyRNA *)&rna_GPencilSculptSettings_multiframe_falloff_curve,
	-1, "thickness_primitive_curve", 8388608, 0, 0, 0, 0, "Curve",
	"Custom curve to control primitive thickness",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilSculptSettings_thickness_primitive_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

static const EnumPropertyItem rna_GPencilSculptSettings_lock_axis_items[6] = {
	{0, "VIEW", 283, "View", "Align strokes to current view plane"},
	{2, "AXIS_Y", 637, "Front (X-Z)", "Project strokes to plane locked to Y"},
	{1, "AXIS_X", 636, "Side (Y-Z)", "Project strokes to plane locked to X"},
	{3, "AXIS_Z", 638, "Top (X-Y)", "Project strokes to plane locked to Z"},
	{4, "CURSOR", 552, "Cursor", "Align strokes to current 3D cursor orientation"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilSculptSettings_lock_axis = {
	{(PropertyRNA *)&rna_GPencilSculptSettings_intersection_threshold, (PropertyRNA *)&rna_GPencilSculptSettings_thickness_primitive_curve,
	-1, "lock_axis", 1, 0, 0, 4, 0, "Lock Axis",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Settings, lock_axis), 0, NULL},
	GPencilSculptSettings_lock_axis_get, GPencilSculptSettings_lock_axis_set, NULL, NULL, NULL, rna_GPencilSculptSettings_lock_axis_items, 5, 0
};

FloatPropertyRNA rna_GPencilSculptSettings_intersection_threshold = {
	{NULL, (PropertyRNA *)&rna_GPencilSculptSettings_lock_axis,
	-1, "intersection_threshold", 1, 0, 0, 4, 0, "Threshold",
	"Threshold for stroke intersections",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GP_Sculpt_Settings, isect_threshold), 5, NULL},
	GPencilSculptSettings_intersection_threshold_get, GPencilSculptSettings_intersection_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.1000000015f, NULL
};

StructRNA RNA_GPencilSculptSettings = {
	{(ContainerRNA *)&RNA_CurvesSculpt, (ContainerRNA *)&RNA_GPencilSculptGuide,
	NULL,
	{(PropertyRNA *)&rna_GPencilSculptSettings_rna_properties, (PropertyRNA *)&rna_GPencilSculptSettings_intersection_threshold}},
	"GPencilSculptSettings", NULL, NULL, 516, NULL, "GPencil Sculpt Settings",
	"General properties for Grease Pencil stroke sculpting tools",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilSculptSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_GPencilSculptSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Curves Sculpt Paint */
StructRNA RNA_CurvesSculpt = {
	{(ContainerRNA *)&RNA_SequenceColorBalanceData, (ContainerRNA *)&RNA_GPencilSculptSettings,
	NULL,
	{NULL, NULL}},
	"CurvesSculpt", NULL, NULL, 516, NULL, "Curves Sculpt Paint",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	rna_CurvesSculpt_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

