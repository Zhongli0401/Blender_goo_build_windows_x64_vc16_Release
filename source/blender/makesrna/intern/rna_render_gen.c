
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

#include "rna_render.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_RenderEngine_rna_properties;
PointerPropertyRNA rna_RenderEngine_rna_type;
BoolPropertyRNA rna_RenderEngine_is_animation;
BoolPropertyRNA rna_RenderEngine_is_preview;
PointerPropertyRNA rna_RenderEngine_camera_override;
BoolPropertyRNA rna_RenderEngine_layer_override;
IntPropertyRNA rna_RenderEngine_resolution_x;
IntPropertyRNA rna_RenderEngine_resolution_y;
StringPropertyRNA rna_RenderEngine_temporary_directory;
PointerPropertyRNA rna_RenderEngine_render;
BoolPropertyRNA rna_RenderEngine_use_highlight_tiles;
StringPropertyRNA rna_RenderEngine_bl_idname;
StringPropertyRNA rna_RenderEngine_bl_label;
BoolPropertyRNA rna_RenderEngine_bl_use_preview;
BoolPropertyRNA rna_RenderEngine_bl_use_postprocess;
BoolPropertyRNA rna_RenderEngine_bl_use_eevee_viewport;
BoolPropertyRNA rna_RenderEngine_bl_use_custom_freestyle;
BoolPropertyRNA rna_RenderEngine_bl_use_image_save;
BoolPropertyRNA rna_RenderEngine_bl_use_gpu_context;
BoolPropertyRNA rna_RenderEngine_bl_use_shading_nodes_custom;
BoolPropertyRNA rna_RenderEngine_bl_use_spherical_stereo;
BoolPropertyRNA rna_RenderEngine_bl_use_stereo_viewport;
BoolPropertyRNA rna_RenderEngine_bl_use_alembic_procedural;

extern FunctionRNA rna_RenderEngine_update_func;
extern PointerPropertyRNA rna_RenderEngine_update_data;
extern PointerPropertyRNA rna_RenderEngine_update_depsgraph;

extern FunctionRNA rna_RenderEngine_render_func;
extern PointerPropertyRNA rna_RenderEngine_render_depsgraph;

extern FunctionRNA rna_RenderEngine_render_frame_finish_func;
extern FunctionRNA rna_RenderEngine_draw_func;
extern PointerPropertyRNA rna_RenderEngine_draw_context;
extern PointerPropertyRNA rna_RenderEngine_draw_depsgraph;

extern FunctionRNA rna_RenderEngine_bake_func;
extern PointerPropertyRNA rna_RenderEngine_bake_depsgraph;
extern PointerPropertyRNA rna_RenderEngine_bake_object;
extern EnumPropertyRNA rna_RenderEngine_bake_pass_type;
extern IntPropertyRNA rna_RenderEngine_bake_pass_filter;
extern IntPropertyRNA rna_RenderEngine_bake_width;
extern IntPropertyRNA rna_RenderEngine_bake_height;

extern FunctionRNA rna_RenderEngine_view_update_func;
extern PointerPropertyRNA rna_RenderEngine_view_update_context;
extern PointerPropertyRNA rna_RenderEngine_view_update_depsgraph;

extern FunctionRNA rna_RenderEngine_view_draw_func;
extern PointerPropertyRNA rna_RenderEngine_view_draw_context;
extern PointerPropertyRNA rna_RenderEngine_view_draw_depsgraph;

extern FunctionRNA rna_RenderEngine_update_script_node_func;
extern PointerPropertyRNA rna_RenderEngine_update_script_node_node;

extern FunctionRNA rna_RenderEngine_update_render_passes_func;
extern PointerPropertyRNA rna_RenderEngine_update_render_passes_scene;
extern PointerPropertyRNA rna_RenderEngine_update_render_passes_renderlayer;

extern FunctionRNA rna_RenderEngine_tag_redraw_func;
extern FunctionRNA rna_RenderEngine_tag_update_func;
extern FunctionRNA rna_RenderEngine_begin_result_func;
extern IntPropertyRNA rna_RenderEngine_begin_result_x;
extern IntPropertyRNA rna_RenderEngine_begin_result_y;
extern IntPropertyRNA rna_RenderEngine_begin_result_w;
extern IntPropertyRNA rna_RenderEngine_begin_result_h;
extern StringPropertyRNA rna_RenderEngine_begin_result_layer;
extern StringPropertyRNA rna_RenderEngine_begin_result_view;
extern PointerPropertyRNA rna_RenderEngine_begin_result_result;

extern FunctionRNA rna_RenderEngine_update_result_func;
extern PointerPropertyRNA rna_RenderEngine_update_result_result;

extern FunctionRNA rna_RenderEngine_end_result_func;
extern PointerPropertyRNA rna_RenderEngine_end_result_result;
extern BoolPropertyRNA rna_RenderEngine_end_result_cancel;
extern BoolPropertyRNA rna_RenderEngine_end_result_highlight;
extern BoolPropertyRNA rna_RenderEngine_end_result_do_merge_results;

extern FunctionRNA rna_RenderEngine_add_pass_func;
extern StringPropertyRNA rna_RenderEngine_add_pass_name;
extern IntPropertyRNA rna_RenderEngine_add_pass_channels;
extern StringPropertyRNA rna_RenderEngine_add_pass_chan_id;
extern StringPropertyRNA rna_RenderEngine_add_pass_layer;

extern FunctionRNA rna_RenderEngine_get_result_func;
extern PointerPropertyRNA rna_RenderEngine_get_result_result;

extern FunctionRNA rna_RenderEngine_test_break_func;
extern BoolPropertyRNA rna_RenderEngine_test_break_do_break;

extern FunctionRNA rna_RenderEngine_pass_by_index_get_func;
extern StringPropertyRNA rna_RenderEngine_pass_by_index_get_layer;
extern IntPropertyRNA rna_RenderEngine_pass_by_index_get_index;
extern PointerPropertyRNA rna_RenderEngine_pass_by_index_get_render_pass;

extern FunctionRNA rna_RenderEngine_active_view_get_func;
extern StringPropertyRNA rna_RenderEngine_active_view_get_view;

extern FunctionRNA rna_RenderEngine_active_view_set_func;
extern StringPropertyRNA rna_RenderEngine_active_view_set_view;

extern FunctionRNA rna_RenderEngine_camera_shift_x_func;
extern PointerPropertyRNA rna_RenderEngine_camera_shift_x_camera;
extern BoolPropertyRNA rna_RenderEngine_camera_shift_x_use_spherical_stereo;
extern FloatPropertyRNA rna_RenderEngine_camera_shift_x_shift_x;

extern FunctionRNA rna_RenderEngine_camera_model_matrix_func;
extern PointerPropertyRNA rna_RenderEngine_camera_model_matrix_camera;
extern BoolPropertyRNA rna_RenderEngine_camera_model_matrix_use_spherical_stereo;
extern FloatPropertyRNA rna_RenderEngine_camera_model_matrix_r_model_matrix;

extern FunctionRNA rna_RenderEngine_use_spherical_stereo_func;
extern PointerPropertyRNA rna_RenderEngine_use_spherical_stereo_camera;
extern BoolPropertyRNA rna_RenderEngine_use_spherical_stereo_use_spherical_stereo;

extern FunctionRNA rna_RenderEngine_update_stats_func;
extern StringPropertyRNA rna_RenderEngine_update_stats_stats;
extern StringPropertyRNA rna_RenderEngine_update_stats_info;

extern FunctionRNA rna_RenderEngine_frame_set_func;
extern IntPropertyRNA rna_RenderEngine_frame_set_frame;
extern FloatPropertyRNA rna_RenderEngine_frame_set_subframe;

extern FunctionRNA rna_RenderEngine_update_progress_func;
extern FloatPropertyRNA rna_RenderEngine_update_progress_progress;

extern FunctionRNA rna_RenderEngine_update_memory_stats_func;
extern FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_used;
extern FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_peak;

extern FunctionRNA rna_RenderEngine_report_func;
extern EnumPropertyRNA rna_RenderEngine_report_type;
extern StringPropertyRNA rna_RenderEngine_report_message;

extern FunctionRNA rna_RenderEngine_error_set_func;
extern StringPropertyRNA rna_RenderEngine_error_set_message;

extern FunctionRNA rna_RenderEngine_bind_display_space_shader_func;
extern PointerPropertyRNA rna_RenderEngine_bind_display_space_shader_scene;

extern FunctionRNA rna_RenderEngine_unbind_display_space_shader_func;
extern FunctionRNA rna_RenderEngine_support_display_space_shader_func;
extern PointerPropertyRNA rna_RenderEngine_support_display_space_shader_scene;
extern BoolPropertyRNA rna_RenderEngine_support_display_space_shader_supported;

extern FunctionRNA rna_RenderEngine_get_preview_pixel_size_func;
extern PointerPropertyRNA rna_RenderEngine_get_preview_pixel_size_scene;
extern IntPropertyRNA rna_RenderEngine_get_preview_pixel_size_pixel_size;

extern FunctionRNA rna_RenderEngine_free_blender_memory_func;
extern FunctionRNA rna_RenderEngine_tile_highlight_set_func;
extern IntPropertyRNA rna_RenderEngine_tile_highlight_set_x;
extern IntPropertyRNA rna_RenderEngine_tile_highlight_set_y;
extern IntPropertyRNA rna_RenderEngine_tile_highlight_set_width;
extern IntPropertyRNA rna_RenderEngine_tile_highlight_set_height;
extern BoolPropertyRNA rna_RenderEngine_tile_highlight_set_highlight;

extern FunctionRNA rna_RenderEngine_tile_highlight_clear_all_func;
extern FunctionRNA rna_RenderEngine_register_pass_func;
extern PointerPropertyRNA rna_RenderEngine_register_pass_scene;
extern PointerPropertyRNA rna_RenderEngine_register_pass_view_layer;
extern StringPropertyRNA rna_RenderEngine_register_pass_name;
extern IntPropertyRNA rna_RenderEngine_register_pass_channels;
extern StringPropertyRNA rna_RenderEngine_register_pass_chanid;
extern EnumPropertyRNA rna_RenderEngine_register_pass_type;



CollectionPropertyRNA rna_RenderResult_rna_properties;
PointerPropertyRNA rna_RenderResult_rna_type;
IntPropertyRNA rna_RenderResult_resolution_x;
IntPropertyRNA rna_RenderResult_resolution_y;
CollectionPropertyRNA rna_RenderResult_layers;
CollectionPropertyRNA rna_RenderResult_views;

extern FunctionRNA rna_RenderResult_load_from_file_func;
extern StringPropertyRNA rna_RenderResult_load_from_file_filename;

extern FunctionRNA rna_RenderResult_stamp_data_add_field_func;
extern StringPropertyRNA rna_RenderResult_stamp_data_add_field_field;
extern StringPropertyRNA rna_RenderResult_stamp_data_add_field_value;



CollectionPropertyRNA rna_RenderView_rna_properties;
PointerPropertyRNA rna_RenderView_rna_type;
StringPropertyRNA rna_RenderView_name;


CollectionPropertyRNA rna_RenderLayer_rna_properties;
PointerPropertyRNA rna_RenderLayer_rna_type;
StringPropertyRNA rna_RenderLayer_name;
BoolPropertyRNA rna_RenderLayer_use_solid;
BoolPropertyRNA rna_RenderLayer_use_sky;
BoolPropertyRNA rna_RenderLayer_use_ao;
BoolPropertyRNA rna_RenderLayer_use_strand;
BoolPropertyRNA rna_RenderLayer_use_volumes;
BoolPropertyRNA rna_RenderLayer_use_motion_blur;
BoolPropertyRNA rna_RenderLayer_use_pass_combined;
BoolPropertyRNA rna_RenderLayer_use_pass_z;
BoolPropertyRNA rna_RenderLayer_use_pass_vector;
BoolPropertyRNA rna_RenderLayer_use_pass_position;
BoolPropertyRNA rna_RenderLayer_use_pass_normal;
BoolPropertyRNA rna_RenderLayer_use_pass_uv;
BoolPropertyRNA rna_RenderLayer_use_pass_mist;
BoolPropertyRNA rna_RenderLayer_use_pass_object_index;
BoolPropertyRNA rna_RenderLayer_use_pass_material_index;
BoolPropertyRNA rna_RenderLayer_use_pass_shadow;
BoolPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion;
BoolPropertyRNA rna_RenderLayer_use_pass_emit;
BoolPropertyRNA rna_RenderLayer_use_pass_environment;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_color;
BoolPropertyRNA rna_RenderLayer_use_pass_glossy_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_glossy_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_glossy_color;
BoolPropertyRNA rna_RenderLayer_use_pass_transmission_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_transmission_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_transmission_color;
BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_direct;
BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_indirect;
BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_color;
CollectionPropertyRNA rna_RenderLayer_passes;

extern FunctionRNA rna_RenderLayer_load_from_file_func;
extern StringPropertyRNA rna_RenderLayer_load_from_file_filename;
extern IntPropertyRNA rna_RenderLayer_load_from_file_x;
extern IntPropertyRNA rna_RenderLayer_load_from_file_y;



CollectionPropertyRNA rna_RenderPasses_rna_properties;
PointerPropertyRNA rna_RenderPasses_rna_type;

extern FunctionRNA rna_RenderPasses_find_by_type_func;
extern EnumPropertyRNA rna_RenderPasses_find_by_type_pass_type;
extern StringPropertyRNA rna_RenderPasses_find_by_type_view;
extern PointerPropertyRNA rna_RenderPasses_find_by_type_render_pass;

extern FunctionRNA rna_RenderPasses_find_by_name_func;
extern StringPropertyRNA rna_RenderPasses_find_by_name_name;
extern StringPropertyRNA rna_RenderPasses_find_by_name_view;
extern PointerPropertyRNA rna_RenderPasses_find_by_name_render_pass;



CollectionPropertyRNA rna_RenderPass_rna_properties;
PointerPropertyRNA rna_RenderPass_rna_type;
StringPropertyRNA rna_RenderPass_fullname;
StringPropertyRNA rna_RenderPass_name;
StringPropertyRNA rna_RenderPass_channel_id;
IntPropertyRNA rna_RenderPass_channels;
FloatPropertyRNA rna_RenderPass_rect;
IntPropertyRNA rna_RenderPass_view_id;

static PointerRNA RenderEngine_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RenderEngine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderEngine_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderEngine_rna_properties_get(iter);
    }
}

void RenderEngine_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderEngine_rna_properties_get(iter);
    }
}

void RenderEngine_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RenderEngine_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderEngine_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool RenderEngine_is_animation_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void RenderEngine_is_animation_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool RenderEngine_is_preview_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void RenderEngine_is_preview_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

PointerRNA RenderEngine_camera_override_get(PointerRNA *ptr)
{
    return rna_RenderEngine_camera_override_get(ptr);
}

void RenderEngine_layer_override_get(PointerRNA *ptr, bool values[20])
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 20; i++) {
        values[i] = ((data->layer_override & (1 << i)) != 0);
    }
}

void RenderEngine_layer_override_set(PointerRNA *ptr, const bool values[20])
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 20; i++) {
        if (values[i]) { data->layer_override |= (1 << i); }
        else { data->layer_override &= ~(1 << i); }
    }
}

int RenderEngine_resolution_x_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (int)(data->resolution_x);
}

int RenderEngine_resolution_y_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (int)(data->resolution_y);
}

void RenderEngine_temporary_directory_get(PointerRNA *ptr, char *value)
{
    rna_RenderEngine_tempdir_get(ptr, value);
}

int RenderEngine_temporary_directory_length(PointerRNA *ptr)
{
    return rna_RenderEngine_tempdir_length(ptr);
}

PointerRNA RenderEngine_render_get(PointerRNA *ptr)
{
    return rna_RenderEngine_render_get(ptr);
}

bool RenderEngine_use_highlight_tiles_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void RenderEngine_use_highlight_tiles_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

void RenderEngine_bl_idname_get(PointerRNA *ptr, char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int RenderEngine_bl_idname_length(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return strlen(data->type->idname);
}

void RenderEngine_bl_idname_set(PointerRNA *ptr, const char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void RenderEngine_bl_label_get(PointerRNA *ptr, char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->name, sizeof(data->type->name));
}

int RenderEngine_bl_label_length(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return strlen(data->type->name);
}

void RenderEngine_bl_label_set(PointerRNA *ptr, const char *value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    BLI_strncpy_utf8(data->type->name, value, sizeof(data->type->name));
}

bool RenderEngine_bl_use_preview_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 4) != 0);
}

void RenderEngine_bl_use_preview_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 4; }
    else { data->type->flag &= ~4; }
}

bool RenderEngine_bl_use_postprocess_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return !(((data->type->flag) & 8) != 0);
}

void RenderEngine_bl_use_postprocess_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (!value) { data->type->flag |= 8; }
    else { data->type->flag &= ~8; }
}

bool RenderEngine_bl_use_eevee_viewport_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 16) != 0);
}

void RenderEngine_bl_use_eevee_viewport_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 16; }
    else { data->type->flag &= ~16; }
}

bool RenderEngine_bl_use_custom_freestyle_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 1024) != 0);
}

void RenderEngine_bl_use_custom_freestyle_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 1024; }
    else { data->type->flag &= ~1024; }
}

bool RenderEngine_bl_use_image_save_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return !(((data->type->flag) & 2048) != 0);
}

void RenderEngine_bl_use_image_save_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (!value) { data->type->flag |= 2048; }
    else { data->type->flag &= ~2048; }
}

bool RenderEngine_bl_use_gpu_context_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 512) != 0);
}

void RenderEngine_bl_use_gpu_context_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 512; }
    else { data->type->flag &= ~512; }
}

bool RenderEngine_bl_use_shading_nodes_custom_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 64) != 0);
}

void RenderEngine_bl_use_shading_nodes_custom_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 64; }
    else { data->type->flag &= ~64; }
}

bool RenderEngine_bl_use_spherical_stereo_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 128) != 0);
}

void RenderEngine_bl_use_spherical_stereo_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 128; }
    else { data->type->flag &= ~128; }
}

bool RenderEngine_bl_use_stereo_viewport_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 256) != 0);
}

void RenderEngine_bl_use_stereo_viewport_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 256; }
    else { data->type->flag &= ~256; }
}

bool RenderEngine_bl_use_alembic_procedural_get(PointerRNA *ptr)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    return (((data->type->flag) & 4096) != 0);
}

void RenderEngine_bl_use_alembic_procedural_set(PointerRNA *ptr, bool value)
{
    RenderEngine *data = (RenderEngine *)(ptr->data);
    if (value) { data->type->flag |= 4096; }
    else { data->type->flag &= ~4096; }
}

static PointerRNA RenderResult_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RenderResult_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderResult_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderResult_rna_properties_get(iter);
    }
}

void RenderResult_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderResult_rna_properties_get(iter);
    }
}

void RenderResult_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RenderResult_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderResult_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int RenderResult_resolution_x_get(PointerRNA *ptr)
{
    RenderResult *data = (RenderResult *)(ptr->data);
    return (int)(data->rectx);
}

int RenderResult_resolution_y_get(PointerRNA *ptr)
{
    RenderResult *data = (RenderResult *)(ptr->data);
    return (int)(data->recty);
}

static PointerRNA RenderResult_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderLayer, rna_iterator_listbase_get(iter));
}

void RenderResult_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderResult_layers;

    rna_RenderResult_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderResult_layers_get(iter);
    }
}

void RenderResult_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = RenderResult_layers_get(iter);
    }
}

void RenderResult_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA RenderResult_views_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderView, rna_iterator_listbase_get(iter));
}

void RenderResult_views_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderResult_views;

    rna_RenderResult_views_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderResult_views_get(iter);
    }
}

void RenderResult_views_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = RenderResult_views_get(iter);
    }
}

void RenderResult_views_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA RenderView_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RenderView_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderView_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderView_rna_properties_get(iter);
    }
}

void RenderView_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderView_rna_properties_get(iter);
    }
}

void RenderView_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RenderView_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderView_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void RenderView_name_get(PointerRNA *ptr, char *value)
{
    RenderView *data = (RenderView *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int RenderView_name_length(PointerRNA *ptr)
{
    RenderView *data = (RenderView *)(ptr->data);
    return strlen(data->name);
}

static PointerRNA RenderLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RenderLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderLayer_rna_properties_get(iter);
    }
}

void RenderLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderLayer_rna_properties_get(iter);
    }
}

void RenderLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RenderLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void RenderLayer_name_get(PointerRNA *ptr, char *value)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int RenderLayer_name_length(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return strlen(data->name);
}

bool RenderLayer_use_solid_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->layflag) & 1) != 0);
}

bool RenderLayer_use_sky_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->layflag) & 16) != 0);
}

bool RenderLayer_use_ao_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->layflag) & 128) != 0);
}

bool RenderLayer_use_strand_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->layflag) & 32) != 0);
}

bool RenderLayer_use_volumes_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->layflag) & 256) != 0);
}

bool RenderLayer_use_motion_blur_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->layflag) & 512) != 0);
}

bool RenderLayer_use_pass_combined_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 1) != 0);
}

bool RenderLayer_use_pass_z_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 2) != 0);
}

bool RenderLayer_use_pass_vector_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 512) != 0);
}

bool RenderLayer_use_pass_position_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 128) != 0);
}

bool RenderLayer_use_pass_normal_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 256) != 0);
}

bool RenderLayer_use_pass_uv_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 4096) != 0);
}

bool RenderLayer_use_pass_mist_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 16384) != 0);
}

bool RenderLayer_use_pass_object_index_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 2048) != 0);
}

bool RenderLayer_use_pass_material_index_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 262144) != 0);
}

bool RenderLayer_use_pass_shadow_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 32) != 0);
}

bool RenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 64) != 0);
}

bool RenderLayer_use_pass_emit_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 65536) != 0);
}

bool RenderLayer_use_pass_environment_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 131072) != 0);
}

bool RenderLayer_use_pass_diffuse_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 524288) != 0);
}

bool RenderLayer_use_pass_diffuse_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 1048576) != 0);
}

bool RenderLayer_use_pass_diffuse_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 2097152) != 0);
}

bool RenderLayer_use_pass_glossy_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 4194304) != 0);
}

bool RenderLayer_use_pass_glossy_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 8388608) != 0);
}

bool RenderLayer_use_pass_glossy_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 16777216) != 0);
}

bool RenderLayer_use_pass_transmission_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 33554432) != 0);
}

bool RenderLayer_use_pass_transmission_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 67108864) != 0);
}

bool RenderLayer_use_pass_transmission_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 134217728) != 0);
}

bool RenderLayer_use_pass_subsurface_direct_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 268435456) != 0);
}

bool RenderLayer_use_pass_subsurface_indirect_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 536870912) != 0);
}

bool RenderLayer_use_pass_subsurface_color_get(PointerRNA *ptr)
{
    RenderLayer *data = (RenderLayer *)(ptr->data);
    return (((data->passflag) & 1073741824) != 0);
}

static PointerRNA RenderLayer_passes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderPass, rna_iterator_listbase_get(iter));
}

void RenderLayer_passes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderLayer_passes;

    rna_RenderLayer_passes_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderLayer_passes_get(iter);
    }
}

void RenderLayer_passes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = RenderLayer_passes_get(iter);
    }
}

void RenderLayer_passes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA RenderPasses_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RenderPasses_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderPasses_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderPasses_rna_properties_get(iter);
    }
}

void RenderPasses_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderPasses_rna_properties_get(iter);
    }
}

void RenderPasses_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RenderPasses_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderPasses_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA RenderPass_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RenderPass_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RenderPass_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RenderPass_rna_properties_get(iter);
    }
}

void RenderPass_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RenderPass_rna_properties_get(iter);
    }
}

void RenderPass_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RenderPass_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RenderPass_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void RenderPass_fullname_get(PointerRNA *ptr, char *value)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    BLI_strncpy_utf8(value, data->fullname, sizeof(data->fullname));
}

int RenderPass_fullname_length(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return strlen(data->fullname);
}

void RenderPass_name_get(PointerRNA *ptr, char *value)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int RenderPass_name_length(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return strlen(data->name);
}

void RenderPass_channel_id_get(PointerRNA *ptr, char *value)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    BLI_strncpy_utf8(value, data->chan_id, sizeof(data->chan_id));
}

int RenderPass_channel_id_length(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return strlen(data->chan_id);
}

int RenderPass_channels_get(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return (int)(data->channels);
}

void RenderPass_rect_get(PointerRNA *ptr, float values[])
{
    rna_RenderPass_rect_get(ptr, values);
}

void RenderPass_rect_set(PointerRNA *ptr, const float values[])
{
    rna_RenderPass_rect_set(ptr, values);
}

int RenderPass_view_id_get(PointerRNA *ptr)
{
    RenderPass *data = (RenderPass *)(ptr->data);
    return (int)(data->view_id);
}

void RenderEngine_tag_redraw_func(struct RenderEngine *_self)
{
	engine_tag_redraw(_self);
}

void RenderEngine_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	engine_tag_redraw(_self);
}

void RenderEngine_tag_update_func(struct RenderEngine *_self)
{
	engine_tag_update(_self);
}

void RenderEngine_tag_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	engine_tag_update(_self);
}

struct RenderResult *RenderEngine_begin_result_func(struct RenderEngine *_self, int x, int y, int w, int h, const char * layer, const char * view)
{
	return RE_engine_begin_result(_self, x, y, w, h, layer, view);
}

void RenderEngine_begin_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int x;
	int y;
	int w;
	int h;
	const char * layer;
	const char * view;
	struct RenderResult *result;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	w = *((int *)_data);
	_data += 8;
	h = *((int *)_data);
	_data += 8;
	layer = *((const char * *)_data);
	_data += 8;
	view = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = RE_engine_begin_result(_self, x, y, w, h, layer, view);
	*((struct RenderResult **)_retdata) = result;
}

void RenderEngine_update_result_func(struct RenderEngine *_self, struct RenderResult *result)
{
	RE_engine_update_result(_self, result);
}

void RenderEngine_update_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	result = *((struct RenderResult **)_data);
	
	RE_engine_update_result(_self, result);
}

void RenderEngine_end_result_func(struct RenderEngine *_self, struct RenderResult *result, bool cancel, bool highlight, bool do_merge_results)
{
	RE_engine_end_result(_self, result, cancel, highlight, do_merge_results);
}

void RenderEngine_end_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	bool cancel;
	bool highlight;
	bool do_merge_results;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	result = *((struct RenderResult **)_data);
	_data += 8;
	cancel = *((bool *)_data);
	_data += 8;
	highlight = *((bool *)_data);
	_data += 8;
	do_merge_results = *((bool *)_data);
	
	RE_engine_end_result(_self, result, cancel, highlight, do_merge_results);
}

void RenderEngine_add_pass_func(struct RenderEngine *_self, const char * name, int channels, const char * chan_id, const char * layer)
{
	RE_engine_add_pass(_self, name, channels, chan_id, layer);
}

void RenderEngine_add_pass_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * name;
	int channels;
	const char * chan_id;
	const char * layer;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	channels = *((int *)_data);
	_data += 8;
	chan_id = *((const char * *)_data);
	_data += 8;
	layer = *((const char * *)_data);
	
	RE_engine_add_pass(_self, name, channels, chan_id, layer);
}

struct RenderResult *RenderEngine_get_result_func(struct RenderEngine *_self)
{
	return RE_engine_get_result(_self);
}

void RenderEngine_get_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = RE_engine_get_result(_self);
	*((struct RenderResult **)_retdata) = result;
}

bool RenderEngine_test_break_func(struct RenderEngine *_self)
{
	return RE_engine_test_break(_self);
}

void RenderEngine_test_break_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	bool do_break;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	do_break = RE_engine_test_break(_self);
	*((bool *)_retdata) = do_break;
}

struct RenderPass *RenderEngine_pass_by_index_get_func(struct RenderEngine *_self, const char * layer, int index)
{
	return RE_engine_pass_by_index_get(_self, layer, index);
}

void RenderEngine_pass_by_index_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * layer;
	int index;
	struct RenderPass *render_pass;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	render_pass = RE_engine_pass_by_index_get(_self, layer, index);
	*((struct RenderPass **)_retdata) = render_pass;
}

const char * RenderEngine_active_view_get_func(struct RenderEngine *_self)
{
	return RE_engine_active_view_get(_self);
}

void RenderEngine_active_view_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * view;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	view = RE_engine_active_view_get(_self);
	*((const char * *)_retdata) = view;
}

void RenderEngine_active_view_set_func(struct RenderEngine *_self, const char * view)
{
	RE_engine_active_view_set(_self, view);
}

void RenderEngine_active_view_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * view;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	view = *((const char * *)_data);
	
	RE_engine_active_view_set(_self, view);
}

float RenderEngine_camera_shift_x_func(struct RenderEngine *_self, struct Object *camera, bool use_spherical_stereo)
{
	return RE_engine_get_camera_shift_x(_self, camera, use_spherical_stereo);
}

void RenderEngine_camera_shift_x_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Object *camera;
	bool use_spherical_stereo;
	float shift_x;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((struct Object **)_data);
	_data += 8;
	use_spherical_stereo = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	shift_x = RE_engine_get_camera_shift_x(_self, camera, use_spherical_stereo);
	*((float *)_retdata) = shift_x;
}

void RenderEngine_camera_model_matrix_func(struct RenderEngine *_self, struct Object *camera, bool use_spherical_stereo, float r_model_matrix[16])
{
	RE_engine_get_camera_model_matrix(_self, camera, use_spherical_stereo, r_model_matrix);
}

void RenderEngine_camera_model_matrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Object *camera;
	bool use_spherical_stereo;
	float *r_model_matrix;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((struct Object **)_data);
	_data += 8;
	use_spherical_stereo = *((bool *)_data);
	_data += 8;
	r_model_matrix = ((float *)_data);
	
	RE_engine_get_camera_model_matrix(_self, camera, use_spherical_stereo, r_model_matrix);
}

bool RenderEngine_use_spherical_stereo_func(struct RenderEngine *_self, struct Object *camera)
{
	return RE_engine_get_spherical_stereo(_self, camera);
}

void RenderEngine_use_spherical_stereo_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Object *camera;
	bool use_spherical_stereo;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((struct Object **)_data);
	_data += 8;
	_retdata = _data;
	
	use_spherical_stereo = RE_engine_get_spherical_stereo(_self, camera);
	*((bool *)_retdata) = use_spherical_stereo;
}

void RenderEngine_update_stats_func(struct RenderEngine *_self, const char * stats, const char * info)
{
	RE_engine_update_stats(_self, stats, info);
}

void RenderEngine_update_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * stats;
	const char * info;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	stats = *((const char * *)_data);
	_data += 8;
	info = *((const char * *)_data);
	
	RE_engine_update_stats(_self, stats, info);
}

void RenderEngine_frame_set_func(struct RenderEngine *_self, int frame, float subframe)
{
	rna_RenderEngine_engine_frame_set(_self, frame, subframe);
}

void RenderEngine_frame_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int frame;
	float subframe;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((int *)_data);
	_data += 8;
	subframe = *((float *)_data);
	
	rna_RenderEngine_engine_frame_set(_self, frame, subframe);
}

void RenderEngine_update_progress_func(struct RenderEngine *_self, float progress)
{
	RE_engine_update_progress(_self, progress);
}

void RenderEngine_update_progress_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	float progress;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	progress = *((float *)_data);
	
	RE_engine_update_progress(_self, progress);
}

void RenderEngine_update_memory_stats_func(struct RenderEngine *_self, float memory_used, float memory_peak)
{
	RE_engine_update_memory_stats(_self, memory_used, memory_peak);
}

void RenderEngine_update_memory_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	float memory_used;
	float memory_peak;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	memory_used = *((float *)_data);
	_data += 8;
	memory_peak = *((float *)_data);
	
	RE_engine_update_memory_stats(_self, memory_used, memory_peak);
}

void RenderEngine_report_func(struct RenderEngine *_self, int type, const char * message)
{
	RE_engine_report(_self, type, message);
}

void RenderEngine_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int type;
	const char * message;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	message = *((const char * *)_data);
	
	RE_engine_report(_self, type, message);
}

void RenderEngine_error_set_func(struct RenderEngine *_self, const char * message)
{
	RE_engine_set_error_message(_self, message);
}

void RenderEngine_error_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char * message;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	message = *((const char * *)_data);
	
	RE_engine_set_error_message(_self, message);
}

void RenderEngine_bind_display_space_shader_func(struct RenderEngine *_self, struct Scene *scene)
{
	engine_bind_display_space_shader(_self, scene);
}

void RenderEngine_bind_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Scene *scene;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	
	engine_bind_display_space_shader(_self, scene);
}

void RenderEngine_unbind_display_space_shader_func(struct RenderEngine *_self)
{
	engine_unbind_display_space_shader(_self);
}

void RenderEngine_unbind_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	engine_unbind_display_space_shader(_self);
}

bool RenderEngine_support_display_space_shader_func(struct RenderEngine *_self, struct Scene *scene)
{
	return engine_support_display_space_shader(_self, scene);
}

void RenderEngine_support_display_space_shader_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Scene *scene;
	bool supported;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	_retdata = _data;
	
	supported = engine_support_display_space_shader(_self, scene);
	*((bool *)_retdata) = supported;
}

int RenderEngine_get_preview_pixel_size_func(struct RenderEngine *_self, struct Scene *scene)
{
	return engine_get_preview_pixel_size(_self, scene);
}

void RenderEngine_get_preview_pixel_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Scene *scene;
	int pixel_size;
	char *_data, *_retdata;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	_retdata = _data;
	
	pixel_size = engine_get_preview_pixel_size(_self, scene);
	*((int *)_retdata) = pixel_size;
}

void RenderEngine_free_blender_memory_func(struct RenderEngine *_self)
{
	RE_engine_free_blender_memory(_self);
}

void RenderEngine_free_blender_memory_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	RE_engine_free_blender_memory(_self);
}

void RenderEngine_tile_highlight_set_func(struct RenderEngine *_self, int x, int y, int width, int height, bool highlight)
{
	RE_engine_tile_highlight_set(_self, x, y, width, height, highlight);
}

void RenderEngine_tile_highlight_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int x;
	int y;
	int width;
	int height;
	bool highlight;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	height = *((int *)_data);
	_data += 8;
	highlight = *((bool *)_data);
	
	RE_engine_tile_highlight_set(_self, x, y, width, height, highlight);
}

void RenderEngine_tile_highlight_clear_all_func(struct RenderEngine *_self)
{
	RE_engine_tile_highlight_clear_all(_self);
}

void RenderEngine_tile_highlight_clear_all_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	_self = (struct RenderEngine *)_ptr->data;
	
	RE_engine_tile_highlight_clear_all(_self);
}

void RenderEngine_register_pass_func(struct RenderEngine *_self, struct Scene *scene, struct ViewLayer *view_layer, const char * name, int channels, const char * chanid, eNodeSocketDatatype type)
{
	RE_engine_register_pass(_self, scene, view_layer, name, channels, chanid, type);
}

void RenderEngine_register_pass_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct Scene *scene;
	struct ViewLayer *view_layer;
	const char * name;
	int channels;
	const char * chanid;
	eNodeSocketDatatype type;
	char *_data;
	
	_self = (struct RenderEngine *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	name = *((const char * *)_data);
	_data += 8;
	channels = *((int *)_data);
	_data += 8;
	chanid = *((const char * *)_data);
	_data += 8;
	type = *((eNodeSocketDatatype *)_data);
	
	RE_engine_register_pass(_self, scene, view_layer, name, channels, chanid, type);
}

/* Repeated prototypes to detect errors */

void engine_tag_redraw(struct RenderEngine *_self);
void engine_tag_update(struct RenderEngine *_self);
struct RenderResult *RE_engine_begin_result(struct RenderEngine *_self, int x, int y, int w, int h, const char * layer, const char * view);
void RE_engine_update_result(struct RenderEngine *_self, struct RenderResult *result);
void RE_engine_end_result(struct RenderEngine *_self, struct RenderResult *result, bool cancel, bool highlight, bool do_merge_results);
void RE_engine_add_pass(struct RenderEngine *_self, const char * name, int channels, const char * chan_id, const char * layer);
struct RenderResult *RE_engine_get_result(struct RenderEngine *_self);
bool RE_engine_test_break(struct RenderEngine *_self);
struct RenderPass *RE_engine_pass_by_index_get(struct RenderEngine *_self, const char * layer, int index);
const char * RE_engine_active_view_get(struct RenderEngine *_self);
void RE_engine_active_view_set(struct RenderEngine *_self, const char * view);
float RE_engine_get_camera_shift_x(struct RenderEngine *_self, struct Object *camera, bool use_spherical_stereo);
void RE_engine_get_camera_model_matrix(struct RenderEngine *_self, struct Object *camera, bool use_spherical_stereo, float r_model_matrix[16]);
bool RE_engine_get_spherical_stereo(struct RenderEngine *_self, struct Object *camera);
void RE_engine_update_stats(struct RenderEngine *_self, const char * stats, const char * info);
void rna_RenderEngine_engine_frame_set(struct RenderEngine *_self, int frame, float subframe);
void RE_engine_update_progress(struct RenderEngine *_self, float progress);
void RE_engine_update_memory_stats(struct RenderEngine *_self, float memory_used, float memory_peak);
void RE_engine_report(struct RenderEngine *_self, int type, const char * message);
void RE_engine_set_error_message(struct RenderEngine *_self, const char * message);
void engine_bind_display_space_shader(struct RenderEngine *_self, struct Scene *scene);
void engine_unbind_display_space_shader(struct RenderEngine *_self);
bool engine_support_display_space_shader(struct RenderEngine *_self, struct Scene *scene);
int engine_get_preview_pixel_size(struct RenderEngine *_self, struct Scene *scene);
void RE_engine_free_blender_memory(struct RenderEngine *_self);
void RE_engine_tile_highlight_set(struct RenderEngine *_self, int x, int y, int width, int height, bool highlight);
void RE_engine_tile_highlight_clear_all(struct RenderEngine *_self);
void RE_engine_register_pass(struct RenderEngine *_self, struct Scene *scene, struct ViewLayer *view_layer, const char * name, int channels, const char * chanid, eNodeSocketDatatype type);

void RenderResult_load_from_file_func(struct RenderResult *_self, ReportList *reports, const char * filename)
{
	RE_result_load_from_file(_self, reports, filename);
}

void RenderResult_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderResult *_self;
	const char * filename;
	char *_data;
	
	_self = (struct RenderResult *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
	
	RE_result_load_from_file(_self, reports, filename);
}

void RenderResult_stamp_data_add_field_func(struct RenderResult *_self, const char * field, const char * value)
{
	rna_RenderResult_stamp_data_add_field(_self, field, value);
}

void RenderResult_stamp_data_add_field_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderResult *_self;
	const char * field;
	const char * value;
	char *_data;
	
	_self = (struct RenderResult *)_ptr->data;
	_data = (char *)_parms->data;
	field = *((const char * *)_data);
	_data += 8;
	value = *((const char * *)_data);
	
	rna_RenderResult_stamp_data_add_field(_self, field, value);
}

/* Repeated prototypes to detect errors */

void RE_result_load_from_file(struct RenderResult *_self, ReportList *reports, const char * filename);
void rna_RenderResult_stamp_data_add_field(struct RenderResult *_self, const char * field, const char * value);


void RenderLayer_load_from_file_func(struct RenderLayer *_self, ReportList *reports, const char * filename, int x, int y)
{
	RE_layer_load_from_file(_self, reports, filename, x, y);
}

void RenderLayer_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderLayer *_self;
	const char * filename;
	int x;
	int y;
	char *_data;
	
	_self = (struct RenderLayer *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
	_data += 8;
	x = *((int *)_data);
	_data += 8;
	y = *((int *)_data);
	
	RE_layer_load_from_file(_self, reports, filename, x, y);
}

/* Repeated prototypes to detect errors */

void RE_layer_load_from_file(struct RenderLayer *_self, ReportList *reports, const char * filename, int x, int y);

struct RenderPass *RenderPasses_find_by_type_func(struct RenderLayer *_self, int pass_type, const char * view)
{
	return rna_RenderPass_find_by_type(_self, pass_type, view);
}

void RenderPasses_find_by_type_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderLayer *_self;
	int pass_type;
	const char * view;
	struct RenderPass *render_pass;
	char *_data, *_retdata;
	
	_self = (struct RenderLayer *)_ptr->data;
	_data = (char *)_parms->data;
	pass_type = *((int *)_data);
	_data += 8;
	view = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	render_pass = rna_RenderPass_find_by_type(_self, pass_type, view);
	*((struct RenderPass **)_retdata) = render_pass;
}

struct RenderPass *RenderPasses_find_by_name_func(struct RenderLayer *_self, const char * name, const char * view)
{
	return rna_RenderPass_find_by_name(_self, name, view);
}

void RenderPasses_find_by_name_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderLayer *_self;
	const char * name;
	const char * view;
	struct RenderPass *render_pass;
	char *_data, *_retdata;
	
	_self = (struct RenderLayer *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	view = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	render_pass = rna_RenderPass_find_by_name(_self, name, view);
	*((struct RenderPass **)_retdata) = render_pass;
}

/* Repeated prototypes to detect errors */

struct RenderPass *rna_RenderPass_find_by_type(struct RenderLayer *_self, int pass_type, const char * view);
struct RenderPass *rna_RenderPass_find_by_name(struct RenderLayer *_self, const char * name, const char * view);

int RenderPass_rect_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_RenderPass_rect_get_length(ptr, arraylen);
}


/* Render Engine */
CollectionPropertyRNA rna_RenderEngine_rna_properties = {
	{(PropertyRNA *)&rna_RenderEngine_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_rna_properties_begin, RenderEngine_rna_properties_next, RenderEngine_rna_properties_end, RenderEngine_rna_properties_get, NULL, NULL, RenderEngine_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderEngine_rna_type = {
	{(PropertyRNA *)&rna_RenderEngine_is_animation, (PropertyRNA *)&rna_RenderEngine_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_RenderEngine_is_animation = {
	{(PropertyRNA *)&rna_RenderEngine_is_preview, (PropertyRNA *)&rna_RenderEngine_rna_type,
	-1, "is_animation", 3, 0, 0, 0, 0, "is_animation",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_is_animation_get, RenderEngine_is_animation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_is_preview = {
	{(PropertyRNA *)&rna_RenderEngine_camera_override, (PropertyRNA *)&rna_RenderEngine_is_animation,
	-1, "is_preview", 3, 0, 0, 0, 0, "is_preview",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_is_preview_get, RenderEngine_is_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_camera_override = {
	{(PropertyRNA *)&rna_RenderEngine_layer_override, (PropertyRNA *)&rna_RenderEngine_is_preview,
	-1, "camera_override", 8388736, 0, 0, 0, 0, "camera_override",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_camera_override_get, NULL, NULL, NULL,&RNA_Object
};

static bool rna_RenderEngine_layer_override_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RenderEngine_layer_override = {
	{(PropertyRNA *)&rna_RenderEngine_resolution_x, (PropertyRNA *)&rna_RenderEngine_camera_override,
	-1, "layer_override", 3, 0, 0, 0, 0, "layer_override",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, RenderEngine_layer_override_get, RenderEngine_layer_override_set, NULL, NULL, NULL, NULL, 0, rna_RenderEngine_layer_override_default
};

IntPropertyRNA rna_RenderEngine_resolution_x = {
	{(PropertyRNA *)&rna_RenderEngine_resolution_y, (PropertyRNA *)&rna_RenderEngine_layer_override,
	-1, "resolution_x", 2, 0, 0, 0, 0, "resolution_x",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_resolution_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_resolution_y = {
	{(PropertyRNA *)&rna_RenderEngine_temporary_directory, (PropertyRNA *)&rna_RenderEngine_resolution_x,
	-1, "resolution_y", 2, 0, 0, 0, 0, "resolution_y",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_resolution_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_RenderEngine_temporary_directory = {
	{(PropertyRNA *)&rna_RenderEngine_render, (PropertyRNA *)&rna_RenderEngine_resolution_y,
	-1, "temporary_directory", 262144, 0, 0, 0, 0, "temporary_directory",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_temporary_directory_get, RenderEngine_temporary_directory_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_RenderEngine_render = {
	{(PropertyRNA *)&rna_RenderEngine_use_highlight_tiles, (PropertyRNA *)&rna_RenderEngine_temporary_directory,
	-1, "render", 8388608, 0, 0, 0, 0, "Render Data",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_render_get, NULL, NULL, NULL,&RNA_RenderSettings
};

BoolPropertyRNA rna_RenderEngine_use_highlight_tiles = {
	{(PropertyRNA *)&rna_RenderEngine_bl_idname, (PropertyRNA *)&rna_RenderEngine_render,
	-1, "use_highlight_tiles", 3, 0, 0, 0, 0, "use_highlight_tiles",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_use_highlight_tiles_get, RenderEngine_use_highlight_tiles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_RenderEngine_bl_idname = {
	{(PropertyRNA *)&rna_RenderEngine_bl_label, (PropertyRNA *)&rna_RenderEngine_use_highlight_tiles,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_idname_get, RenderEngine_bl_idname_length, RenderEngine_bl_idname_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_RenderEngine_bl_label = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_preview, (PropertyRNA *)&rna_RenderEngine_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "bl_label",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_label_get, RenderEngine_bl_label_length, RenderEngine_bl_label_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_RenderEngine_bl_use_preview = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_postprocess, (PropertyRNA *)&rna_RenderEngine_bl_label,
	-1, "bl_use_preview", 51, 0, 0, 0, 0, "Use Preview Render",
	"Render engine supports being used for rendering previews of materials, lights and worlds",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_preview_get, RenderEngine_bl_use_preview_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_postprocess = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_eevee_viewport, (PropertyRNA *)&rna_RenderEngine_bl_use_preview,
	-1, "bl_use_postprocess", 51, 0, 0, 0, 0, "Use Post Processing",
	"Apply compositing on render results",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_postprocess_get, RenderEngine_bl_use_postprocess_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_eevee_viewport = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_custom_freestyle, (PropertyRNA *)&rna_RenderEngine_bl_use_postprocess,
	-1, "bl_use_eevee_viewport", 51, 0, 0, 0, 0, "Use Eevee Viewport",
	"Uses Eevee for viewport shading in LookDev shading mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_eevee_viewport_get, RenderEngine_bl_use_eevee_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_custom_freestyle = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_image_save, (PropertyRNA *)&rna_RenderEngine_bl_use_eevee_viewport,
	-1, "bl_use_custom_freestyle", 51, 0, 0, 0, 0, "Use Custom Freestyle",
	"Handles freestyle rendering on its own, instead of delegating it to EEVEE",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_custom_freestyle_get, RenderEngine_bl_use_custom_freestyle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_image_save = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_gpu_context, (PropertyRNA *)&rna_RenderEngine_bl_use_custom_freestyle,
	-1, "bl_use_image_save", 51, 0, 0, 0, 0, "Use Image Save",
	"Save images/movie to disk while rendering an animation. Disabling image saving is only supported when bl_use_postprocess is also disabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_image_save_get, RenderEngine_bl_use_image_save_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_gpu_context = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_shading_nodes_custom, (PropertyRNA *)&rna_RenderEngine_bl_use_image_save,
	-1, "bl_use_gpu_context", 51, 0, 0, 0, 0, "Use GPU Context",
	"Enable OpenGL context for the render method, for engines that render using OpenGL",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_gpu_context_get, RenderEngine_bl_use_gpu_context_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_shading_nodes_custom = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_spherical_stereo, (PropertyRNA *)&rna_RenderEngine_bl_use_gpu_context,
	-1, "bl_use_shading_nodes_custom", 51, 0, 0, 0, 0, "Use Custom Shading Nodes",
	"Don\'t expose Cycles and Eevee shading nodes in the node editor user interface, so own nodes can be used instead",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_shading_nodes_custom_get, RenderEngine_bl_use_shading_nodes_custom_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_spherical_stereo = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_stereo_viewport, (PropertyRNA *)&rna_RenderEngine_bl_use_shading_nodes_custom,
	-1, "bl_use_spherical_stereo", 51, 0, 0, 0, 0, "Use Spherical Stereo",
	"Support spherical stereo camera models",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_spherical_stereo_get, RenderEngine_bl_use_spherical_stereo_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_stereo_viewport = {
	{(PropertyRNA *)&rna_RenderEngine_bl_use_alembic_procedural, (PropertyRNA *)&rna_RenderEngine_bl_use_spherical_stereo,
	-1, "bl_use_stereo_viewport", 51, 0, 0, 0, 0, "Use Stereo Viewport",
	"Support rendering stereo 3D viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_stereo_viewport_get, RenderEngine_bl_use_stereo_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_bl_use_alembic_procedural = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_bl_use_stereo_viewport,
	-1, "bl_use_alembic_procedural", 51, 0, 0, 0, 0, "Use Alembic Procedural",
	"Support loading Alembic data at render time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderEngine_bl_use_alembic_procedural_get, RenderEngine_bl_use_alembic_procedural_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_update_data = {
	{(PropertyRNA *)&rna_RenderEngine_update_depsgraph, NULL,
	-1, "data", 8388608, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BlendData
};

PointerPropertyRNA rna_RenderEngine_update_depsgraph = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_data,
	-1, "depsgraph", 8388608, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

FunctionRNA rna_RenderEngine_update_func = {
	{(FunctionRNA *)&rna_RenderEngine_render_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_data, (PropertyRNA *)&rna_RenderEngine_update_depsgraph}},
	"update", 4192, "Export scene data for render",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_render_depsgraph = {
	{NULL, NULL,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

FunctionRNA rna_RenderEngine_render_func = {
	{(FunctionRNA *)&rna_RenderEngine_render_frame_finish_func, (FunctionRNA *)&rna_RenderEngine_update_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_render_depsgraph, (PropertyRNA *)&rna_RenderEngine_render_depsgraph}},
	"render", 4192, "Render scene into an image",
	NULL,
	NULL
};

FunctionRNA rna_RenderEngine_render_frame_finish_func = {
	{(FunctionRNA *)&rna_RenderEngine_draw_func, (FunctionRNA *)&rna_RenderEngine_render_func,
	NULL,
	{NULL, NULL}},
	"render_frame_finish", 4192, "Perform finishing operations after all view layers in a frame were rendered",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_draw_context = {
	{(PropertyRNA *)&rna_RenderEngine_draw_depsgraph, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_RenderEngine_draw_depsgraph = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_draw_context,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

FunctionRNA rna_RenderEngine_draw_func = {
	{(FunctionRNA *)&rna_RenderEngine_bake_func, (FunctionRNA *)&rna_RenderEngine_render_frame_finish_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_draw_context, (PropertyRNA *)&rna_RenderEngine_draw_depsgraph}},
	"draw", 96, "Draw render image",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_bake_depsgraph = {
	{(PropertyRNA *)&rna_RenderEngine_bake_object, NULL,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

PointerPropertyRNA rna_RenderEngine_bake_object = {
	{(PropertyRNA *)&rna_RenderEngine_bake_pass_type, (PropertyRNA *)&rna_RenderEngine_bake_depsgraph,
	-1, "object", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

EnumPropertyRNA rna_RenderEngine_bake_pass_type = {
	{(PropertyRNA *)&rna_RenderEngine_bake_pass_filter, (PropertyRNA *)&rna_RenderEngine_bake_object,
	-1, "pass_type", 3, 0, 1, 0, 0, "Pass",
	"Pass to bake",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_bake_pass_type_items, 12, 1
};

IntPropertyRNA rna_RenderEngine_bake_pass_filter = {
	{(PropertyRNA *)&rna_RenderEngine_bake_width, (PropertyRNA *)&rna_RenderEngine_bake_pass_type,
	-1, "pass_filter", 3, 0, 1, 0, 0, "Pass Filter",
	"Filter to combined, diffuse, glossy and transmission passes",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_bake_width = {
	{(PropertyRNA *)&rna_RenderEngine_bake_height, (PropertyRNA *)&rna_RenderEngine_bake_pass_filter,
	-1, "width", 3, 0, 1, 0, 0, "Width",
	"Image width",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_bake_height = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_bake_width,
	-1, "height", 3, 0, 1, 0, 0, "Height",
	"Image height",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_RenderEngine_bake_func = {
	{(FunctionRNA *)&rna_RenderEngine_view_update_func, (FunctionRNA *)&rna_RenderEngine_draw_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_bake_depsgraph, (PropertyRNA *)&rna_RenderEngine_bake_height}},
	"bake", 4192, "Bake passes",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_view_update_context = {
	{(PropertyRNA *)&rna_RenderEngine_view_update_depsgraph, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_RenderEngine_view_update_depsgraph = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_view_update_context,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

FunctionRNA rna_RenderEngine_view_update_func = {
	{(FunctionRNA *)&rna_RenderEngine_view_draw_func, (FunctionRNA *)&rna_RenderEngine_bake_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_view_update_context, (PropertyRNA *)&rna_RenderEngine_view_update_depsgraph}},
	"view_update", 4192, "Update on data changes for viewport render",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_view_draw_context = {
	{(PropertyRNA *)&rna_RenderEngine_view_draw_depsgraph, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_RenderEngine_view_draw_depsgraph = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_view_draw_context,
	-1, "depsgraph", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

FunctionRNA rna_RenderEngine_view_draw_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_script_node_func, (FunctionRNA *)&rna_RenderEngine_view_update_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_view_draw_context, (PropertyRNA *)&rna_RenderEngine_view_draw_depsgraph}},
	"view_draw", 96, "Draw viewport render",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_update_script_node_node = {
	{NULL, NULL,
	-1, "node", 8388608, 0, 4, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

FunctionRNA rna_RenderEngine_update_script_node_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_render_passes_func, (FunctionRNA *)&rna_RenderEngine_view_draw_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_script_node_node, (PropertyRNA *)&rna_RenderEngine_update_script_node_node}},
	"update_script_node", 4192, "Compile shader script node",
	NULL,
	NULL
};

PointerPropertyRNA rna_RenderEngine_update_render_passes_scene = {
	{(PropertyRNA *)&rna_RenderEngine_update_render_passes_renderlayer, NULL,
	-1, "scene", 8388736, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_RenderEngine_update_render_passes_renderlayer = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_render_passes_scene,
	-1, "renderlayer", 8388608, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

FunctionRNA rna_RenderEngine_update_render_passes_func = {
	{(FunctionRNA *)&rna_RenderEngine_tag_redraw_func, (FunctionRNA *)&rna_RenderEngine_update_script_node_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_render_passes_scene, (PropertyRNA *)&rna_RenderEngine_update_render_passes_renderlayer}},
	"update_render_passes", 4192, "Update the render passes that will be generated",
	NULL,
	NULL
};

FunctionRNA rna_RenderEngine_tag_redraw_func = {
	{(FunctionRNA *)&rna_RenderEngine_tag_update_func, (FunctionRNA *)&rna_RenderEngine_update_render_passes_func,
	NULL,
	{NULL, NULL}},
	"tag_redraw", 0, "Request redraw for viewport rendering",
	RenderEngine_tag_redraw_call,
	NULL
};

FunctionRNA rna_RenderEngine_tag_update_func = {
	{(FunctionRNA *)&rna_RenderEngine_begin_result_func, (FunctionRNA *)&rna_RenderEngine_tag_redraw_func,
	NULL,
	{NULL, NULL}},
	"tag_update", 0, "Request update call for viewport rendering",
	RenderEngine_tag_update_call,
	NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_x = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_y, NULL,
	-1, "x", 3, 0, 1, 0, 0, "X",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_y = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_w, (PropertyRNA *)&rna_RenderEngine_begin_result_x,
	-1, "y", 3, 0, 1, 0, 0, "Y",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_w = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_h, (PropertyRNA *)&rna_RenderEngine_begin_result_y,
	-1, "w", 3, 0, 1, 0, 0, "Width",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_h = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_layer, (PropertyRNA *)&rna_RenderEngine_begin_result_w,
	-1, "h", 3, 0, 1, 0, 0, "Height",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_RenderEngine_begin_result_layer = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_view, (PropertyRNA *)&rna_RenderEngine_begin_result_h,
	-1, "layer", 262145, 0, 0, 0, 0, "Layer",
	"Single layer to get render result for",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_RenderEngine_begin_result_view = {
	{(PropertyRNA *)&rna_RenderEngine_begin_result_result, (PropertyRNA *)&rna_RenderEngine_begin_result_layer,
	-1, "view", 262145, 0, 0, 0, 0, "View",
	"Single view to get render result for",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_RenderEngine_begin_result_result = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_begin_result_view,
	-1, "result", 8388608, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_begin_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_result_func, (FunctionRNA *)&rna_RenderEngine_tag_update_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_begin_result_x, (PropertyRNA *)&rna_RenderEngine_begin_result_result}},
	"begin_result", 0, "Create render result to write linear floating-point render layers and passes",
	RenderEngine_begin_result_call,
	(PropertyRNA *)&rna_RenderEngine_begin_result_result
};

PointerPropertyRNA rna_RenderEngine_update_result_result = {
	{NULL, NULL,
	-1, "result", 8388608, 0, 1, 0, 0, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_update_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_end_result_func, (FunctionRNA *)&rna_RenderEngine_begin_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_result_result, (PropertyRNA *)&rna_RenderEngine_update_result_result}},
	"update_result", 0, "Signal that pixels have been updated and can be redrawn in the user interface",
	RenderEngine_update_result_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_end_result_result = {
	{(PropertyRNA *)&rna_RenderEngine_end_result_cancel, NULL,
	-1, "result", 8388608, 0, 1, 0, 0, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

BoolPropertyRNA rna_RenderEngine_end_result_cancel = {
	{(PropertyRNA *)&rna_RenderEngine_end_result_highlight, (PropertyRNA *)&rna_RenderEngine_end_result_result,
	-1, "cancel", 3, 0, 0, 0, 0, "Cancel",
	"Don\'t mark tile as done, don\'t merge results unless forced",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_end_result_highlight = {
	{(PropertyRNA *)&rna_RenderEngine_end_result_do_merge_results, (PropertyRNA *)&rna_RenderEngine_end_result_cancel,
	-1, "highlight", 3, 0, 0, 0, 0, "Highlight",
	"Don\'t mark tile as done yet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_end_result_do_merge_results = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_end_result_highlight,
	-1, "do_merge_results", 3, 0, 0, 0, 0, "Merge Results",
	"Merge results even if cancel=true",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_end_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_add_pass_func, (FunctionRNA *)&rna_RenderEngine_update_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_end_result_result, (PropertyRNA *)&rna_RenderEngine_end_result_do_merge_results}},
	"end_result", 0, "All pixels in the render result have been set and are final",
	RenderEngine_end_result_call,
	NULL
};

StringPropertyRNA rna_RenderEngine_add_pass_name = {
	{(PropertyRNA *)&rna_RenderEngine_add_pass_channels, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"Name of the Pass, without view or channel tag",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_RenderEngine_add_pass_channels = {
	{(PropertyRNA *)&rna_RenderEngine_add_pass_chan_id, (PropertyRNA *)&rna_RenderEngine_add_pass_name,
	-1, "channels", 3, 0, 1, 0, 0, "Channels",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_RenderEngine_add_pass_chan_id = {
	{(PropertyRNA *)&rna_RenderEngine_add_pass_layer, (PropertyRNA *)&rna_RenderEngine_add_pass_channels,
	-1, "chan_id", 262145, 0, 1, 0, 0, "Channel IDs",
	"Channel names, one character per channel",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_RenderEngine_add_pass_layer = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_add_pass_chan_id,
	-1, "layer", 262145, 0, 0, 0, 0, "Layer",
	"Single layer to add render pass to",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderEngine_add_pass_func = {
	{(FunctionRNA *)&rna_RenderEngine_get_result_func, (FunctionRNA *)&rna_RenderEngine_end_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_add_pass_name, (PropertyRNA *)&rna_RenderEngine_add_pass_layer}},
	"add_pass", 0, "Add a pass to the render layer",
	RenderEngine_add_pass_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_get_result_result = {
	{NULL, NULL,
	-1, "result", 8388608, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_get_result_func = {
	{(FunctionRNA *)&rna_RenderEngine_test_break_func, (FunctionRNA *)&rna_RenderEngine_add_pass_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_get_result_result, (PropertyRNA *)&rna_RenderEngine_get_result_result}},
	"get_result", 0, "Get final result for non-pixel operations",
	RenderEngine_get_result_call,
	(PropertyRNA *)&rna_RenderEngine_get_result_result
};

BoolPropertyRNA rna_RenderEngine_test_break_do_break = {
	{NULL, NULL,
	-1, "do_break", 3, 0, 2, 0, 0, "Break",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_test_break_func = {
	{(FunctionRNA *)&rna_RenderEngine_pass_by_index_get_func, (FunctionRNA *)&rna_RenderEngine_get_result_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_test_break_do_break, (PropertyRNA *)&rna_RenderEngine_test_break_do_break}},
	"test_break", 0, "Test if the render operation should been canceled, this is a fast call that should be used regularly for responsiveness",
	RenderEngine_test_break_call,
	(PropertyRNA *)&rna_RenderEngine_test_break_do_break
};

StringPropertyRNA rna_RenderEngine_pass_by_index_get_layer = {
	{(PropertyRNA *)&rna_RenderEngine_pass_by_index_get_index, NULL,
	-1, "layer", 262145, 0, 1, 0, 0, "Layer",
	"Name of render layer to get pass for",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_RenderEngine_pass_by_index_get_index = {
	{(PropertyRNA *)&rna_RenderEngine_pass_by_index_get_render_pass, (PropertyRNA *)&rna_RenderEngine_pass_by_index_get_layer,
	-1, "index", 3, 0, 1, 0, 0, "Index",
	"Index of pass to get",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_pass_by_index_get_render_pass = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_pass_by_index_get_index,
	-1, "render_pass", 8388608, 0, 2, 0, 0, "Index",
	"Index of pass to get",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderPass
};

FunctionRNA rna_RenderEngine_pass_by_index_get_func = {
	{(FunctionRNA *)&rna_RenderEngine_active_view_get_func, (FunctionRNA *)&rna_RenderEngine_test_break_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_pass_by_index_get_layer, (PropertyRNA *)&rna_RenderEngine_pass_by_index_get_render_pass}},
	"pass_by_index_get", 0, "pass_by_index_get",
	RenderEngine_pass_by_index_get_call,
	(PropertyRNA *)&rna_RenderEngine_pass_by_index_get_render_pass
};

StringPropertyRNA rna_RenderEngine_active_view_get_view = {
	{NULL, NULL,
	-1, "view", 262145, 0, 2, 0, 0, "View",
	"Single view active",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderEngine_active_view_get_func = {
	{(FunctionRNA *)&rna_RenderEngine_active_view_set_func, (FunctionRNA *)&rna_RenderEngine_pass_by_index_get_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_active_view_get_view, (PropertyRNA *)&rna_RenderEngine_active_view_get_view}},
	"active_view_get", 0, "active_view_get",
	RenderEngine_active_view_get_call,
	(PropertyRNA *)&rna_RenderEngine_active_view_get_view
};

StringPropertyRNA rna_RenderEngine_active_view_set_view = {
	{NULL, NULL,
	-1, "view", 262145, 0, 1, 0, 0, "View",
	"Single view to set as active",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderEngine_active_view_set_func = {
	{(FunctionRNA *)&rna_RenderEngine_camera_shift_x_func, (FunctionRNA *)&rna_RenderEngine_active_view_get_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_active_view_set_view, (PropertyRNA *)&rna_RenderEngine_active_view_set_view}},
	"active_view_set", 0, "active_view_set",
	RenderEngine_active_view_set_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_camera_shift_x_camera = {
	{(PropertyRNA *)&rna_RenderEngine_camera_shift_x_use_spherical_stereo, NULL,
	-1, "camera", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_RenderEngine_camera_shift_x_use_spherical_stereo = {
	{(PropertyRNA *)&rna_RenderEngine_camera_shift_x_shift_x, (PropertyRNA *)&rna_RenderEngine_camera_shift_x_camera,
	-1, "use_spherical_stereo", 3, 0, 0, 0, 0, "Spherical Stereo",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RenderEngine_camera_shift_x_shift_x = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_camera_shift_x_use_spherical_stereo,
	-1, "shift_x", 3, 0, 2, 0, 0, "Shift X",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_camera_shift_x_func = {
	{(FunctionRNA *)&rna_RenderEngine_camera_model_matrix_func, (FunctionRNA *)&rna_RenderEngine_active_view_set_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_camera_shift_x_camera, (PropertyRNA *)&rna_RenderEngine_camera_shift_x_shift_x}},
	"camera_shift_x", 0, "camera_shift_x",
	RenderEngine_camera_shift_x_call,
	(PropertyRNA *)&rna_RenderEngine_camera_shift_x_shift_x
};

PointerPropertyRNA rna_RenderEngine_camera_model_matrix_camera = {
	{(PropertyRNA *)&rna_RenderEngine_camera_model_matrix_use_spherical_stereo, NULL,
	-1, "camera", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_RenderEngine_camera_model_matrix_use_spherical_stereo = {
	{(PropertyRNA *)&rna_RenderEngine_camera_model_matrix_r_model_matrix, (PropertyRNA *)&rna_RenderEngine_camera_model_matrix_camera,
	-1, "use_spherical_stereo", 3, 0, 0, 0, 0, "Spherical Stereo",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_RenderEngine_camera_model_matrix_r_model_matrix_default[16] = {
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

FloatPropertyRNA rna_RenderEngine_camera_model_matrix_r_model_matrix = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_camera_model_matrix_use_spherical_stereo,
	-1, "r_model_matrix", 3, 0, 3, 0, 0, "Model Matrix",
	"Normalized camera model matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RenderEngine_camera_model_matrix_r_model_matrix_default
};

FunctionRNA rna_RenderEngine_camera_model_matrix_func = {
	{(FunctionRNA *)&rna_RenderEngine_use_spherical_stereo_func, (FunctionRNA *)&rna_RenderEngine_camera_shift_x_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_camera_model_matrix_camera, (PropertyRNA *)&rna_RenderEngine_camera_model_matrix_r_model_matrix}},
	"camera_model_matrix", 0, "camera_model_matrix",
	RenderEngine_camera_model_matrix_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_use_spherical_stereo_camera = {
	{(PropertyRNA *)&rna_RenderEngine_use_spherical_stereo_use_spherical_stereo, NULL,
	-1, "camera", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_RenderEngine_use_spherical_stereo_use_spherical_stereo = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_use_spherical_stereo_camera,
	-1, "use_spherical_stereo", 3, 0, 2, 0, 0, "Spherical Stereo",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_use_spherical_stereo_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_stats_func, (FunctionRNA *)&rna_RenderEngine_camera_model_matrix_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_use_spherical_stereo_camera, (PropertyRNA *)&rna_RenderEngine_use_spherical_stereo_use_spherical_stereo}},
	"use_spherical_stereo", 0, "use_spherical_stereo",
	RenderEngine_use_spherical_stereo_call,
	(PropertyRNA *)&rna_RenderEngine_use_spherical_stereo_use_spherical_stereo
};

StringPropertyRNA rna_RenderEngine_update_stats_stats = {
	{(PropertyRNA *)&rna_RenderEngine_update_stats_info, NULL,
	-1, "stats", 262145, 0, 1, 0, 0, "Stats",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_RenderEngine_update_stats_info = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_stats_stats,
	-1, "info", 262145, 0, 1, 0, 0, "Info",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderEngine_update_stats_func = {
	{(FunctionRNA *)&rna_RenderEngine_frame_set_func, (FunctionRNA *)&rna_RenderEngine_use_spherical_stereo_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_stats_stats, (PropertyRNA *)&rna_RenderEngine_update_stats_info}},
	"update_stats", 0, "Update and signal to redraw render status text",
	RenderEngine_update_stats_call,
	NULL
};

IntPropertyRNA rna_RenderEngine_frame_set_frame = {
	{(PropertyRNA *)&rna_RenderEngine_frame_set_subframe, NULL,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_RenderEngine_frame_set_subframe = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_frame_set_frame,
	-1, "subframe", 3, 0, 1, 0, 0, "Subframe",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_frame_set_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_progress_func, (FunctionRNA *)&rna_RenderEngine_update_stats_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_frame_set_frame, (PropertyRNA *)&rna_RenderEngine_frame_set_subframe}},
	"frame_set", 0, "Evaluate scene at a different frame (for motion blur)",
	RenderEngine_frame_set_call,
	NULL
};

FloatPropertyRNA rna_RenderEngine_update_progress_progress = {
	{NULL, NULL,
	-1, "progress", 3, 0, 1, 0, 0, "",
	"Percentage of render that\'s done",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_update_progress_func = {
	{(FunctionRNA *)&rna_RenderEngine_update_memory_stats_func, (FunctionRNA *)&rna_RenderEngine_frame_set_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_progress_progress, (PropertyRNA *)&rna_RenderEngine_update_progress_progress}},
	"update_progress", 0, "Update progress percentage of render",
	RenderEngine_update_progress_call,
	NULL
};

FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_used = {
	{(PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_peak, NULL,
	-1, "memory_used", 3, 0, 0, 0, 0, "",
	"Current memory usage in megabytes",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RenderEngine_update_memory_stats_memory_peak = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_used,
	-1, "memory_peak", 3, 0, 0, 0, 0, "",
	"Peak memory usage in megabytes",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_RenderEngine_update_memory_stats_func = {
	{(FunctionRNA *)&rna_RenderEngine_report_func, (FunctionRNA *)&rna_RenderEngine_update_progress_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_used, (PropertyRNA *)&rna_RenderEngine_update_memory_stats_memory_peak}},
	"update_memory_stats", 0, "Update memory usage statistics",
	RenderEngine_update_memory_stats_call,
	NULL
};

EnumPropertyRNA rna_RenderEngine_report_type = {
	{(PropertyRNA *)&rna_RenderEngine_report_message, NULL,
	-1, "type", 2097155, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_wm_report_items, 9, 0
};

StringPropertyRNA rna_RenderEngine_report_message = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_report_type,
	-1, "message", 262145, 0, 1, 0, 0, "Report Message",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderEngine_report_func = {
	{(FunctionRNA *)&rna_RenderEngine_error_set_func, (FunctionRNA *)&rna_RenderEngine_update_memory_stats_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_report_type, (PropertyRNA *)&rna_RenderEngine_report_message}},
	"report", 0, "Report info, warning or error messages",
	RenderEngine_report_call,
	NULL
};

StringPropertyRNA rna_RenderEngine_error_set_message = {
	{NULL, NULL,
	-1, "message", 262145, 0, 1, 0, 0, "Report Message",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderEngine_error_set_func = {
	{(FunctionRNA *)&rna_RenderEngine_bind_display_space_shader_func, (FunctionRNA *)&rna_RenderEngine_report_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_error_set_message, (PropertyRNA *)&rna_RenderEngine_error_set_message}},
	"error_set", 0, "Set error message displaying after the render is finished",
	RenderEngine_error_set_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_bind_display_space_shader_scene = {
	{NULL, NULL,
	-1, "scene", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_RenderEngine_bind_display_space_shader_func = {
	{(FunctionRNA *)&rna_RenderEngine_unbind_display_space_shader_func, (FunctionRNA *)&rna_RenderEngine_error_set_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_bind_display_space_shader_scene, (PropertyRNA *)&rna_RenderEngine_bind_display_space_shader_scene}},
	"bind_display_space_shader", 0, "Bind GLSL fragment shader that converts linear colors to display space colors using scene color management settings",
	RenderEngine_bind_display_space_shader_call,
	NULL
};

FunctionRNA rna_RenderEngine_unbind_display_space_shader_func = {
	{(FunctionRNA *)&rna_RenderEngine_support_display_space_shader_func, (FunctionRNA *)&rna_RenderEngine_bind_display_space_shader_func,
	NULL,
	{NULL, NULL}},
	"unbind_display_space_shader", 0, "Unbind GLSL display space shader, must always be called after binding the shader",
	RenderEngine_unbind_display_space_shader_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_support_display_space_shader_scene = {
	{(PropertyRNA *)&rna_RenderEngine_support_display_space_shader_supported, NULL,
	-1, "scene", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

BoolPropertyRNA rna_RenderEngine_support_display_space_shader_supported = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_support_display_space_shader_scene,
	-1, "supported", 3, 0, 2, 0, 0, "Supported",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_support_display_space_shader_func = {
	{(FunctionRNA *)&rna_RenderEngine_get_preview_pixel_size_func, (FunctionRNA *)&rna_RenderEngine_unbind_display_space_shader_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_support_display_space_shader_scene, (PropertyRNA *)&rna_RenderEngine_support_display_space_shader_supported}},
	"support_display_space_shader", 0, "Test if GLSL display space shader is supported for the combination of graphics card and scene settings",
	RenderEngine_support_display_space_shader_call,
	(PropertyRNA *)&rna_RenderEngine_support_display_space_shader_supported
};

PointerPropertyRNA rna_RenderEngine_get_preview_pixel_size_scene = {
	{(PropertyRNA *)&rna_RenderEngine_get_preview_pixel_size_pixel_size, NULL,
	-1, "scene", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

IntPropertyRNA rna_RenderEngine_get_preview_pixel_size_pixel_size = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_get_preview_pixel_size_scene,
	-1, "pixel_size", 3, 0, 2, 0, 0, "Pixel Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 8, 1, 8, 1, 0, NULL
};

FunctionRNA rna_RenderEngine_get_preview_pixel_size_func = {
	{(FunctionRNA *)&rna_RenderEngine_free_blender_memory_func, (FunctionRNA *)&rna_RenderEngine_support_display_space_shader_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_get_preview_pixel_size_scene, (PropertyRNA *)&rna_RenderEngine_get_preview_pixel_size_pixel_size}},
	"get_preview_pixel_size", 0, "Get the pixel size that should be used for preview rendering",
	RenderEngine_get_preview_pixel_size_call,
	(PropertyRNA *)&rna_RenderEngine_get_preview_pixel_size_pixel_size
};

FunctionRNA rna_RenderEngine_free_blender_memory_func = {
	{(FunctionRNA *)&rna_RenderEngine_tile_highlight_set_func, (FunctionRNA *)&rna_RenderEngine_get_preview_pixel_size_func,
	NULL,
	{NULL, NULL}},
	"free_blender_memory", 0, "Free Blender side memory of render engine",
	RenderEngine_free_blender_memory_call,
	NULL
};

IntPropertyRNA rna_RenderEngine_tile_highlight_set_x = {
	{(PropertyRNA *)&rna_RenderEngine_tile_highlight_set_y, NULL,
	-1, "x", 3, 0, 1, 0, 0, "X",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_tile_highlight_set_y = {
	{(PropertyRNA *)&rna_RenderEngine_tile_highlight_set_width, (PropertyRNA *)&rna_RenderEngine_tile_highlight_set_x,
	-1, "y", 3, 0, 1, 0, 0, "Y",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_tile_highlight_set_width = {
	{(PropertyRNA *)&rna_RenderEngine_tile_highlight_set_height, (PropertyRNA *)&rna_RenderEngine_tile_highlight_set_y,
	-1, "width", 3, 0, 1, 0, 0, "Width",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_tile_highlight_set_height = {
	{(PropertyRNA *)&rna_RenderEngine_tile_highlight_set_highlight, (PropertyRNA *)&rna_RenderEngine_tile_highlight_set_width,
	-1, "height", 3, 0, 1, 0, 0, "Height",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_RenderEngine_tile_highlight_set_highlight = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_tile_highlight_set_height,
	-1, "highlight", 3, 0, 1, 0, 0, "Highlight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_tile_highlight_set_func = {
	{(FunctionRNA *)&rna_RenderEngine_tile_highlight_clear_all_func, (FunctionRNA *)&rna_RenderEngine_free_blender_memory_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_tile_highlight_set_x, (PropertyRNA *)&rna_RenderEngine_tile_highlight_set_highlight}},
	"tile_highlight_set", 0, "Set highlighted state of the given tile",
	RenderEngine_tile_highlight_set_call,
	NULL
};

FunctionRNA rna_RenderEngine_tile_highlight_clear_all_func = {
	{(FunctionRNA *)&rna_RenderEngine_register_pass_func, (FunctionRNA *)&rna_RenderEngine_tile_highlight_set_func,
	NULL,
	{NULL, NULL}},
	"tile_highlight_clear_all", 0, "The temp directory used by Blender",
	RenderEngine_tile_highlight_clear_all_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_register_pass_scene = {
	{(PropertyRNA *)&rna_RenderEngine_register_pass_view_layer, NULL,
	-1, "scene", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_RenderEngine_register_pass_view_layer = {
	{(PropertyRNA *)&rna_RenderEngine_register_pass_name, (PropertyRNA *)&rna_RenderEngine_register_pass_scene,
	-1, "view_layer", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

StringPropertyRNA rna_RenderEngine_register_pass_name = {
	{(PropertyRNA *)&rna_RenderEngine_register_pass_channels, (PropertyRNA *)&rna_RenderEngine_register_pass_view_layer,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

IntPropertyRNA rna_RenderEngine_register_pass_channels = {
	{(PropertyRNA *)&rna_RenderEngine_register_pass_chanid, (PropertyRNA *)&rna_RenderEngine_register_pass_name,
	-1, "channels", 3, 0, 1, 0, 0, "Channels",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 4, 1, 8, 1, 1, NULL
};

StringPropertyRNA rna_RenderEngine_register_pass_chanid = {
	{(PropertyRNA *)&rna_RenderEngine_register_pass_type, (PropertyRNA *)&rna_RenderEngine_register_pass_channels,
	-1, "chanid", 262145, 0, 1, 0, 0, "Channel IDs",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 8, ""
};

static const EnumPropertyItem rna_RenderEngine_register_pass_type_items[4] = {
	{0, "VALUE", 0, "Value", ""},
	{1, "VECTOR", 0, "Vector", ""},
	{2, "COLOR", 0, "Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderEngine_register_pass_type = {
	{NULL, (PropertyRNA *)&rna_RenderEngine_register_pass_chanid,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_RenderEngine_register_pass_type_items, 3, 0
};

FunctionRNA rna_RenderEngine_register_pass_func = {
	{NULL, (FunctionRNA *)&rna_RenderEngine_tile_highlight_clear_all_func,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_register_pass_scene, (PropertyRNA *)&rna_RenderEngine_register_pass_type}},
	"register_pass", 0, "Register a render pass that will be part of the render with the current settings",
	RenderEngine_register_pass_call,
	NULL
};

StructRNA RNA_RenderEngine = {
	{(ContainerRNA *)&RNA_RenderResult, (ContainerRNA *)&RNA_LightProbe,
	NULL,
	{(PropertyRNA *)&rna_RenderEngine_rna_properties, (PropertyRNA *)&rna_RenderEngine_bl_use_alembic_procedural}},
	"RenderEngine", NULL, NULL, 516, NULL, "Render Engine",
	"Render engine",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderEngine_rna_properties,
	NULL,
	NULL,
	rna_RenderEngine_refine,
	NULL,
	rna_RenderEngine_register,
	rna_RenderEngine_unregister,
	rna_RenderEngine_instance,
	NULL,
	{(FunctionRNA *)&rna_RenderEngine_update_func, (FunctionRNA *)&rna_RenderEngine_register_pass_func}
};

/* Render Result */
CollectionPropertyRNA rna_RenderResult_rna_properties = {
	{(PropertyRNA *)&rna_RenderResult_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderResult_rna_properties_begin, RenderResult_rna_properties_next, RenderResult_rna_properties_end, RenderResult_rna_properties_get, NULL, NULL, RenderResult_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderResult_rna_type = {
	{(PropertyRNA *)&rna_RenderResult_resolution_x, (PropertyRNA *)&rna_RenderResult_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderResult_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_RenderResult_resolution_x = {
	{(PropertyRNA *)&rna_RenderResult_resolution_y, (PropertyRNA *)&rna_RenderResult_rna_type,
	-1, "resolution_x", 2, 0, 0, 0, 0, "resolution_x",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderResult_resolution_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderResult_resolution_y = {
	{(PropertyRNA *)&rna_RenderResult_layers, (PropertyRNA *)&rna_RenderResult_resolution_x,
	-1, "resolution_y", 2, 0, 0, 0, 0, "resolution_y",
	"",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderResult_resolution_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_RenderResult_layers = {
	{(PropertyRNA *)&rna_RenderResult_views, (PropertyRNA *)&rna_RenderResult_resolution_y,
	-1, "layers", 0, 0, 0, 0, 0, "layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderResult_layers_begin, RenderResult_layers_next, RenderResult_layers_end, RenderResult_layers_get, NULL, NULL, NULL, NULL, &RNA_RenderLayer
};

CollectionPropertyRNA rna_RenderResult_views = {
	{NULL, (PropertyRNA *)&rna_RenderResult_layers,
	-1, "views", 0, 0, 0, 0, 0, "views",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderResult_views_begin, RenderResult_views_next, RenderResult_views_end, RenderResult_views_get, NULL, NULL, NULL, NULL, &RNA_RenderView
};

StringPropertyRNA rna_RenderResult_load_from_file_filename = {
	{NULL, NULL,
	-1, "filename", 262145, 0, 1, 0, 0, "File Name",
	"Filename to load into this render tile, must be no smaller than the render result",
	0, "*",
	PROP_STRING, PROP_FILENAME | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 1024, ""
};

FunctionRNA rna_RenderResult_load_from_file_func = {
	{(FunctionRNA *)&rna_RenderResult_stamp_data_add_field_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderResult_load_from_file_filename, (PropertyRNA *)&rna_RenderResult_load_from_file_filename}},
	"load_from_file", 16, "Copies the pixels of this render result from an image file",
	RenderResult_load_from_file_call,
	NULL
};

StringPropertyRNA rna_RenderResult_stamp_data_add_field_field = {
	{(PropertyRNA *)&rna_RenderResult_stamp_data_add_field_value, NULL,
	-1, "field", 262145, 0, 1, 0, 0, "Field",
	"Name of the stamp field to add",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 1024, ""
};

StringPropertyRNA rna_RenderResult_stamp_data_add_field_value = {
	{NULL, (PropertyRNA *)&rna_RenderResult_stamp_data_add_field_field,
	-1, "value", 262145, 0, 1, 0, 0, "Value",
	"Value of the stamp data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_RenderResult_stamp_data_add_field_func = {
	{NULL, (FunctionRNA *)&rna_RenderResult_load_from_file_func,
	NULL,
	{(PropertyRNA *)&rna_RenderResult_stamp_data_add_field_field, (PropertyRNA *)&rna_RenderResult_stamp_data_add_field_value}},
	"stamp_data_add_field", 0, "Add engine-specific stamp data to the result",
	RenderResult_stamp_data_add_field_call,
	NULL
};

StructRNA RNA_RenderResult = {
	{(ContainerRNA *)&RNA_RenderView, (ContainerRNA *)&RNA_RenderEngine,
	NULL,
	{(PropertyRNA *)&rna_RenderResult_rna_properties, (PropertyRNA *)&rna_RenderResult_views}},
	"RenderResult", NULL, NULL, 516, NULL, "Render Result",
	"Result of rendering, including all layers and passes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderResult_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderResult_load_from_file_func, (FunctionRNA *)&rna_RenderResult_stamp_data_add_field_func}
};

/* Render View */
CollectionPropertyRNA rna_RenderView_rna_properties = {
	{(PropertyRNA *)&rna_RenderView_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderView_rna_properties_begin, RenderView_rna_properties_next, RenderView_rna_properties_end, RenderView_rna_properties_get, NULL, NULL, RenderView_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderView_rna_type = {
	{(PropertyRNA *)&rna_RenderView_name, (PropertyRNA *)&rna_RenderView_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderView_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderView_name = {
	{NULL, (PropertyRNA *)&rna_RenderView_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderView_name_get, RenderView_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StructRNA RNA_RenderView = {
	{(ContainerRNA *)&RNA_RenderLayer, (ContainerRNA *)&RNA_RenderResult,
	NULL,
	{(PropertyRNA *)&rna_RenderView_rna_properties, (PropertyRNA *)&rna_RenderView_name}},
	"RenderView", NULL, NULL, 516, NULL, "Render View",
	"",
	"*", 17,
	(PropertyRNA *)&rna_RenderView_name, (PropertyRNA *)&rna_RenderView_rna_properties,
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

/* Render Layer */
CollectionPropertyRNA rna_RenderLayer_rna_properties = {
	{(PropertyRNA *)&rna_RenderLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_rna_properties_begin, RenderLayer_rna_properties_next, RenderLayer_rna_properties_end, RenderLayer_rna_properties_get, NULL, NULL, RenderLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderLayer_rna_type = {
	{(PropertyRNA *)&rna_RenderLayer_name, (PropertyRNA *)&rna_RenderLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderLayer_name = {
	{(PropertyRNA *)&rna_RenderLayer_use_solid, (PropertyRNA *)&rna_RenderLayer_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"View layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_name_get, RenderLayer_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_RenderLayer_use_solid = {
	{(PropertyRNA *)&rna_RenderLayer_use_sky, (PropertyRNA *)&rna_RenderLayer_name,
	-1, "use_solid", 2, 0, 0, 0, 0, "Solid",
	"Render Solid faces in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_solid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_sky = {
	{(PropertyRNA *)&rna_RenderLayer_use_ao, (PropertyRNA *)&rna_RenderLayer_use_solid,
	-1, "use_sky", 2, 0, 0, 0, 0, "Sky",
	"Render Sky in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_sky_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_ao = {
	{(PropertyRNA *)&rna_RenderLayer_use_strand, (PropertyRNA *)&rna_RenderLayer_use_sky,
	-1, "use_ao", 2, 0, 0, 0, 0, "Ambient Occlusion",
	"Render Ambient Occlusion in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_ao_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_strand = {
	{(PropertyRNA *)&rna_RenderLayer_use_volumes, (PropertyRNA *)&rna_RenderLayer_use_ao,
	-1, "use_strand", 2, 0, 0, 0, 0, "Strand",
	"Render Strands in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_strand_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_volumes = {
	{(PropertyRNA *)&rna_RenderLayer_use_motion_blur, (PropertyRNA *)&rna_RenderLayer_use_strand,
	-1, "use_volumes", 2, 0, 0, 0, 0, "Volumes",
	"Render volumes in this Layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_volumes_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_motion_blur = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_combined, (PropertyRNA *)&rna_RenderLayer_use_volumes,
	-1, "use_motion_blur", 2, 0, 0, 0, 0, "Motion Blur",
	"Render motion blur in this Layer, if enabled in the scene",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_motion_blur_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_combined = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_z, (PropertyRNA *)&rna_RenderLayer_use_motion_blur,
	-1, "use_pass_combined", 2, 0, 0, 0, 0, "Combined",
	"Deliver full combined RGBA buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_combined_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_z = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_vector, (PropertyRNA *)&rna_RenderLayer_use_pass_combined,
	-1, "use_pass_z", 2, 0, 0, 0, 0, "Z",
	"Deliver Z values pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_z_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_vector = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_position, (PropertyRNA *)&rna_RenderLayer_use_pass_z,
	-1, "use_pass_vector", 2, 0, 0, 0, 0, "Vector",
	"Deliver speed vector pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_vector_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_position = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_normal, (PropertyRNA *)&rna_RenderLayer_use_pass_vector,
	-1, "use_pass_position", 2, 0, 0, 0, 0, "Position",
	"Deliver position pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_position_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_normal = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_uv, (PropertyRNA *)&rna_RenderLayer_use_pass_position,
	-1, "use_pass_normal", 2, 0, 0, 0, 0, "Normal",
	"Deliver normal pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_uv = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_mist, (PropertyRNA *)&rna_RenderLayer_use_pass_normal,
	-1, "use_pass_uv", 2, 0, 0, 0, 0, "UV",
	"Deliver texture UV pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_uv_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_mist = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_object_index, (PropertyRNA *)&rna_RenderLayer_use_pass_uv,
	-1, "use_pass_mist", 2, 0, 0, 0, 0, "Mist",
	"Deliver mist factor pass (0.0 to 1.0)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_mist_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_object_index = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_material_index, (PropertyRNA *)&rna_RenderLayer_use_pass_mist,
	-1, "use_pass_object_index", 2, 0, 0, 0, 0, "Object Index",
	"Deliver object index pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_object_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_material_index = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_shadow, (PropertyRNA *)&rna_RenderLayer_use_pass_object_index,
	-1, "use_pass_material_index", 2, 0, 0, 0, 0, "Material Index",
	"Deliver material index pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_material_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_shadow = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_ambient_occlusion, (PropertyRNA *)&rna_RenderLayer_use_pass_material_index,
	-1, "use_pass_shadow", 2, 0, 0, 0, 0, "Shadow",
	"Deliver shadow pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_shadow_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_emit, (PropertyRNA *)&rna_RenderLayer_use_pass_shadow,
	-1, "use_pass_ambient_occlusion", 2, 0, 0, 0, 0, "Ambient Occlusion",
	"Deliver Ambient Occlusion pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_ambient_occlusion_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_emit = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_environment, (PropertyRNA *)&rna_RenderLayer_use_pass_ambient_occlusion,
	-1, "use_pass_emit", 2, 0, 0, 0, 0, "Emit",
	"Deliver emission pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_emit_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_environment = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_emit,
	-1, "use_pass_environment", 2, 0, 0, 0, 0, "Environment",
	"Deliver environment lighting pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_environment_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_environment,
	-1, "use_pass_diffuse_direct", 2, 0, 0, 0, 0, "Diffuse Direct",
	"Deliver diffuse direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_color, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_direct,
	-1, "use_pass_diffuse_indirect", 2, 0, 0, 0, 0, "Diffuse Indirect",
	"Deliver diffuse indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_diffuse_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_glossy_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_indirect,
	-1, "use_pass_diffuse_color", 2, 0, 0, 0, 0, "Diffuse Color",
	"Deliver diffuse color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_glossy_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_glossy_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_diffuse_color,
	-1, "use_pass_glossy_direct", 2, 0, 0, 0, 0, "Glossy Direct",
	"Deliver glossy direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_glossy_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_glossy_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_glossy_color, (PropertyRNA *)&rna_RenderLayer_use_pass_glossy_direct,
	-1, "use_pass_glossy_indirect", 2, 0, 0, 0, 0, "Glossy Indirect",
	"Deliver glossy indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_glossy_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_glossy_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_transmission_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_glossy_indirect,
	-1, "use_pass_glossy_color", 2, 0, 0, 0, 0, "Glossy Color",
	"Deliver glossy color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_glossy_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_transmission_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_transmission_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_glossy_color,
	-1, "use_pass_transmission_direct", 2, 0, 0, 0, 0, "Transmission Direct",
	"Deliver transmission direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_transmission_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_transmission_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_transmission_color, (PropertyRNA *)&rna_RenderLayer_use_pass_transmission_direct,
	-1, "use_pass_transmission_indirect", 2, 0, 0, 0, 0, "Transmission Indirect",
	"Deliver transmission indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_transmission_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_transmission_color = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_direct, (PropertyRNA *)&rna_RenderLayer_use_pass_transmission_indirect,
	-1, "use_pass_transmission_color", 2, 0, 0, 0, 0, "Transmission Color",
	"Deliver transmission color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_transmission_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_direct = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_indirect, (PropertyRNA *)&rna_RenderLayer_use_pass_transmission_color,
	-1, "use_pass_subsurface_direct", 2, 0, 0, 0, 0, "Subsurface Direct",
	"Deliver subsurface direct pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_subsurface_direct_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_indirect = {
	{(PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_color, (PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_direct,
	-1, "use_pass_subsurface_indirect", 2, 0, 0, 0, 0, "Subsurface Indirect",
	"Deliver subsurface indirect pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_subsurface_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RenderLayer_use_pass_subsurface_color = {
	{(PropertyRNA *)&rna_RenderLayer_passes, (PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_indirect,
	-1, "use_pass_subsurface_color", 2, 0, 0, 0, 0, "Subsurface Color",
	"Deliver subsurface color pass",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderLayer_use_pass_subsurface_color_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_RenderLayer_passes = {
	{NULL, (PropertyRNA *)&rna_RenderLayer_use_pass_subsurface_color,
	-1, "passes", 0, 0, 0, 0, 0, "passes",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_RenderPasses},
	RenderLayer_passes_begin, RenderLayer_passes_next, RenderLayer_passes_end, RenderLayer_passes_get, NULL, NULL, NULL, NULL, &RNA_RenderPass
};

StringPropertyRNA rna_RenderLayer_load_from_file_filename = {
	{(PropertyRNA *)&rna_RenderLayer_load_from_file_x, NULL,
	-1, "filename", 262145, 0, 1, 0, 0, "Filename",
	"Filename to load into this render tile, must be no smaller than the renderlayer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_RenderLayer_load_from_file_x = {
	{(PropertyRNA *)&rna_RenderLayer_load_from_file_y, (PropertyRNA *)&rna_RenderLayer_load_from_file_filename,
	-1, "x", 3, 0, 0, 0, 0, "Offset X",
	"Offset the position to copy from if the image is larger than the render layer",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderLayer_load_from_file_y = {
	{NULL, (PropertyRNA *)&rna_RenderLayer_load_from_file_x,
	-1, "y", 3, 0, 0, 0, 0, "Offset Y",
	"Offset the position to copy from if the image is larger than the render layer",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_RenderLayer_load_from_file_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderLayer_load_from_file_filename, (PropertyRNA *)&rna_RenderLayer_load_from_file_y}},
	"load_from_file", 16, "Copies the pixels of this renderlayer from an image file",
	RenderLayer_load_from_file_call,
	NULL
};

StructRNA RNA_RenderLayer = {
	{(ContainerRNA *)&RNA_RenderPasses, (ContainerRNA *)&RNA_RenderView,
	NULL,
	{(PropertyRNA *)&rna_RenderLayer_rna_properties, (PropertyRNA *)&rna_RenderLayer_passes}},
	"RenderLayer", NULL, NULL, 516, NULL, "Render Layer",
	"",
	"*", 17,
	(PropertyRNA *)&rna_RenderLayer_name, (PropertyRNA *)&rna_RenderLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderLayer_load_from_file_func, (FunctionRNA *)&rna_RenderLayer_load_from_file_func}
};

/* Render Passes */
CollectionPropertyRNA rna_RenderPasses_rna_properties = {
	{(PropertyRNA *)&rna_RenderPasses_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPasses_rna_properties_begin, RenderPasses_rna_properties_next, RenderPasses_rna_properties_end, RenderPasses_rna_properties_get, NULL, NULL, RenderPasses_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderPasses_rna_type = {
	{NULL, (PropertyRNA *)&rna_RenderPasses_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPasses_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_RenderPasses_find_by_type_pass_type = {
	{(PropertyRNA *)&rna_RenderPasses_find_by_type_view, NULL,
	-1, "pass_type", 3, 0, 1, 0, 0, "Pass",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_render_pass_type_items, 25, 1
};

StringPropertyRNA rna_RenderPasses_find_by_type_view = {
	{(PropertyRNA *)&rna_RenderPasses_find_by_type_render_pass, (PropertyRNA *)&rna_RenderPasses_find_by_type_pass_type,
	-1, "view", 262145, 0, 1, 0, 0, "View",
	"Render view to get pass from",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_RenderPasses_find_by_type_render_pass = {
	{NULL, (PropertyRNA *)&rna_RenderPasses_find_by_type_view,
	-1, "render_pass", 8388608, 0, 2, 0, 0, "",
	"The matching render pass",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderPass
};

FunctionRNA rna_RenderPasses_find_by_type_func = {
	{(FunctionRNA *)&rna_RenderPasses_find_by_name_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_RenderPasses_find_by_type_pass_type, (PropertyRNA *)&rna_RenderPasses_find_by_type_render_pass}},
	"find_by_type", 0, "Get the render pass for a given type and view",
	RenderPasses_find_by_type_call,
	(PropertyRNA *)&rna_RenderPasses_find_by_type_render_pass
};

StringPropertyRNA rna_RenderPasses_find_by_name_name = {
	{(PropertyRNA *)&rna_RenderPasses_find_by_name_view, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Pass",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Combined"
};

StringPropertyRNA rna_RenderPasses_find_by_name_view = {
	{(PropertyRNA *)&rna_RenderPasses_find_by_name_render_pass, (PropertyRNA *)&rna_RenderPasses_find_by_name_name,
	-1, "view", 262145, 0, 1, 0, 0, "View",
	"Render view to get pass from",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_RenderPasses_find_by_name_render_pass = {
	{NULL, (PropertyRNA *)&rna_RenderPasses_find_by_name_view,
	-1, "render_pass", 8388608, 0, 2, 0, 0, "",
	"The matching render pass",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderPass
};

FunctionRNA rna_RenderPasses_find_by_name_func = {
	{NULL, (FunctionRNA *)&rna_RenderPasses_find_by_type_func,
	NULL,
	{(PropertyRNA *)&rna_RenderPasses_find_by_name_name, (PropertyRNA *)&rna_RenderPasses_find_by_name_render_pass}},
	"find_by_name", 0, "Get the render pass for a given name and view",
	RenderPasses_find_by_name_call,
	(PropertyRNA *)&rna_RenderPasses_find_by_name_render_pass
};

StructRNA RNA_RenderPasses = {
	{(ContainerRNA *)&RNA_RenderPass, (ContainerRNA *)&RNA_RenderLayer,
	NULL,
	{(PropertyRNA *)&rna_RenderPasses_rna_properties, (PropertyRNA *)&rna_RenderPasses_rna_type}},
	"RenderPasses", NULL, NULL, 516, NULL, "Render Passes",
	"Collection of render passes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RenderPasses_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RenderPasses_find_by_type_func, (FunctionRNA *)&rna_RenderPasses_find_by_name_func}
};

/* Render Pass */
CollectionPropertyRNA rna_RenderPass_rna_properties = {
	{(PropertyRNA *)&rna_RenderPass_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_rna_properties_begin, RenderPass_rna_properties_next, RenderPass_rna_properties_end, RenderPass_rna_properties_get, NULL, NULL, RenderPass_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RenderPass_rna_type = {
	{(PropertyRNA *)&rna_RenderPass_fullname, (PropertyRNA *)&rna_RenderPass_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderPass_fullname = {
	{(PropertyRNA *)&rna_RenderPass_name, (PropertyRNA *)&rna_RenderPass_rna_type,
	-1, "fullname", 262144, 0, 0, 0, 0, "fullname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_fullname_get, RenderPass_fullname_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_RenderPass_name = {
	{(PropertyRNA *)&rna_RenderPass_channel_id, (PropertyRNA *)&rna_RenderPass_fullname,
	-1, "name", 262144, 0, 0, 0, 0, "name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_name_get, RenderPass_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_RenderPass_channel_id = {
	{(PropertyRNA *)&rna_RenderPass_channels, (PropertyRNA *)&rna_RenderPass_name,
	-1, "channel_id", 262144, 0, 0, 0, 0, "channel_id",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_channel_id_get, RenderPass_channel_id_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_RenderPass_channels = {
	{(PropertyRNA *)&rna_RenderPass_rect, (PropertyRNA *)&rna_RenderPass_channel_id,
	-1, "channels", 2, 0, 0, 0, 0, "channels",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_channels_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_RenderPass_rect = {
	{(PropertyRNA *)&rna_RenderPass_view_id, (PropertyRNA *)&rna_RenderPass_channels,
	-1, "rect", 131075, 0, 0, 0, 0, "rect",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_RenderPass_rect_get_length, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, RenderPass_rect_get, RenderPass_rect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_RenderPass_view_id = {
	{NULL, (PropertyRNA *)&rna_RenderPass_rect,
	-1, "view_id", 2, 0, 0, 0, 0, "view_id",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RenderPass_view_id_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_RenderPass = {
	{(ContainerRNA *)&RNA_RigidBodyWorld, (ContainerRNA *)&RNA_RenderPasses,
	NULL,
	{(PropertyRNA *)&rna_RenderPass_rna_properties, (PropertyRNA *)&rna_RenderPass_view_id}},
	"RenderPass", NULL, NULL, 516, NULL, "Render Pass",
	"",
	"*", 17,
	(PropertyRNA *)&rna_RenderPass_name, (PropertyRNA *)&rna_RenderPass_rna_properties,
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

