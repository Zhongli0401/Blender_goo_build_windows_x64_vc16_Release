
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

#include "rna_gpencil.c"

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

CollectionPropertyRNA rna_GreasePencil_layers;
PointerPropertyRNA rna_GreasePencil_animation_data;
CollectionPropertyRNA rna_GreasePencil_materials;
EnumPropertyRNA rna_GreasePencil_stroke_depth_order;
BoolPropertyRNA rna_GreasePencil_use_stroke_edit_mode;
BoolPropertyRNA rna_GreasePencil_is_stroke_paint_mode;
BoolPropertyRNA rna_GreasePencil_is_stroke_sculpt_mode;
BoolPropertyRNA rna_GreasePencil_is_stroke_weight_mode;
BoolPropertyRNA rna_GreasePencil_is_stroke_vertex_mode;
BoolPropertyRNA rna_GreasePencil_use_onion_skinning;
EnumPropertyRNA rna_GreasePencil_stroke_thickness_space;
FloatPropertyRNA rna_GreasePencil_pixel_factor;
IntPropertyRNA rna_GreasePencil_edit_curve_resolution;
BoolPropertyRNA rna_GreasePencil_use_adaptive_curve_resolution;
FloatPropertyRNA rna_GreasePencil_curve_edit_threshold;
FloatPropertyRNA rna_GreasePencil_curve_edit_corner_angle;
BoolPropertyRNA rna_GreasePencil_use_multiedit;
BoolPropertyRNA rna_GreasePencil_use_curve_edit;
BoolPropertyRNA rna_GreasePencil_use_autolock_layers;
FloatPropertyRNA rna_GreasePencil_edit_line_color;
IntPropertyRNA rna_GreasePencil_ghost_before_range;
IntPropertyRNA rna_GreasePencil_ghost_after_range;
BoolPropertyRNA rna_GreasePencil_use_ghost_custom_colors;
FloatPropertyRNA rna_GreasePencil_before_color;
FloatPropertyRNA rna_GreasePencil_after_color;
BoolPropertyRNA rna_GreasePencil_use_ghosts_always;
EnumPropertyRNA rna_GreasePencil_onion_mode;
EnumPropertyRNA rna_GreasePencil_onion_keyframe_type;
BoolPropertyRNA rna_GreasePencil_use_onion_fade;
BoolPropertyRNA rna_GreasePencil_use_onion_loop;
FloatPropertyRNA rna_GreasePencil_onion_factor;
FloatPropertyRNA rna_GreasePencil_zdepth_offset;
BoolPropertyRNA rna_GreasePencil_is_annotation;
PointerPropertyRNA rna_GreasePencil_grid;

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


extern FunctionRNA rna_GreasePencil_clear_func;


CollectionPropertyRNA rna_GreasePencilLayers_rna_properties;
PointerPropertyRNA rna_GreasePencilLayers_rna_type;
PointerPropertyRNA rna_GreasePencilLayers_active;
IntPropertyRNA rna_GreasePencilLayers_active_index;
EnumPropertyRNA rna_GreasePencilLayers_active_note;

extern FunctionRNA rna_GreasePencilLayers_new_func;
extern StringPropertyRNA rna_GreasePencilLayers_new_name;
extern BoolPropertyRNA rna_GreasePencilLayers_new_set_active;
extern PointerPropertyRNA rna_GreasePencilLayers_new_layer;

extern FunctionRNA rna_GreasePencilLayers_remove_func;
extern PointerPropertyRNA rna_GreasePencilLayers_remove_layer;

extern FunctionRNA rna_GreasePencilLayers_move_func;
extern PointerPropertyRNA rna_GreasePencilLayers_move_layer;
extern EnumPropertyRNA rna_GreasePencilLayers_move_type;



CollectionPropertyRNA rna_GreasePencilGrid_rna_properties;
PointerPropertyRNA rna_GreasePencilGrid_rna_type;
FloatPropertyRNA rna_GreasePencilGrid_scale;
FloatPropertyRNA rna_GreasePencilGrid_color;
IntPropertyRNA rna_GreasePencilGrid_lines;
FloatPropertyRNA rna_GreasePencilGrid_offset;


CollectionPropertyRNA rna_GPencilLayer_rna_properties;
PointerPropertyRNA rna_GPencilLayer_rna_type;
StringPropertyRNA rna_GPencilLayer_info;
CollectionPropertyRNA rna_GPencilLayer_frames;
CollectionPropertyRNA rna_GPencilLayer_mask_layers;
PointerPropertyRNA rna_GPencilLayer_active_frame;
FloatPropertyRNA rna_GPencilLayer_opacity;
FloatPropertyRNA rna_GPencilLayer_channel_color;
FloatPropertyRNA rna_GPencilLayer_annotation_opacity;
FloatPropertyRNA rna_GPencilLayer_color;
IntPropertyRNA rna_GPencilLayer_thickness;
FloatPropertyRNA rna_GPencilLayer_tint_color;
FloatPropertyRNA rna_GPencilLayer_tint_factor;
FloatPropertyRNA rna_GPencilLayer_vertex_paint_opacity;
IntPropertyRNA rna_GPencilLayer_line_change;
BoolPropertyRNA rna_GPencilLayer_use_onion_skinning;
BoolPropertyRNA rna_GPencilLayer_use_annotation_onion_skinning;
IntPropertyRNA rna_GPencilLayer_annotation_onion_before_range;
IntPropertyRNA rna_GPencilLayer_annotation_onion_after_range;
FloatPropertyRNA rna_GPencilLayer_annotation_onion_before_color;
FloatPropertyRNA rna_GPencilLayer_annotation_onion_after_color;
IntPropertyRNA rna_GPencilLayer_pass_index;
StringPropertyRNA rna_GPencilLayer_viewlayer_render;
BoolPropertyRNA rna_GPencilLayer_use_viewlayer_masks;
EnumPropertyRNA rna_GPencilLayer_blend_mode;
FloatPropertyRNA rna_GPencilLayer_location;
FloatPropertyRNA rna_GPencilLayer_rotation;
FloatPropertyRNA rna_GPencilLayer_scale;
FloatPropertyRNA rna_GPencilLayer_matrix_layer;
FloatPropertyRNA rna_GPencilLayer_matrix_inverse_layer;
BoolPropertyRNA rna_GPencilLayer_hide;
BoolPropertyRNA rna_GPencilLayer_annotation_hide;
BoolPropertyRNA rna_GPencilLayer_lock;
BoolPropertyRNA rna_GPencilLayer_lock_frame;
BoolPropertyRNA rna_GPencilLayer_lock_material;
BoolPropertyRNA rna_GPencilLayer_use_mask_layer;
BoolPropertyRNA rna_GPencilLayer_use_lights;
BoolPropertyRNA rna_GPencilLayer_use_solo_mode;
BoolPropertyRNA rna_GPencilLayer_is_ruler;
BoolPropertyRNA rna_GPencilLayer_select;
BoolPropertyRNA rna_GPencilLayer_show_points;
BoolPropertyRNA rna_GPencilLayer_show_in_front;
PointerPropertyRNA rna_GPencilLayer_parent;
EnumPropertyRNA rna_GPencilLayer_parent_type;
StringPropertyRNA rna_GPencilLayer_parent_bone;
FloatPropertyRNA rna_GPencilLayer_matrix_inverse;
BoolPropertyRNA rna_GPencilLayer_is_parented;

extern FunctionRNA rna_GPencilLayer_clear_func;


CollectionPropertyRNA rna_GPencilFrames_rna_properties;
PointerPropertyRNA rna_GPencilFrames_rna_type;

extern FunctionRNA rna_GPencilFrames_new_func;
extern IntPropertyRNA rna_GPencilFrames_new_frame_number;
extern BoolPropertyRNA rna_GPencilFrames_new_active;
extern PointerPropertyRNA rna_GPencilFrames_new_frame;

extern FunctionRNA rna_GPencilFrames_remove_func;
extern PointerPropertyRNA rna_GPencilFrames_remove_frame;

extern FunctionRNA rna_GPencilFrames_copy_func;
extern PointerPropertyRNA rna_GPencilFrames_copy_source;
extern PointerPropertyRNA rna_GPencilFrames_copy_copy;



CollectionPropertyRNA rna_GreasePencilMaskLayers_rna_properties;
PointerPropertyRNA rna_GreasePencilMaskLayers_rna_type;
IntPropertyRNA rna_GreasePencilMaskLayers_active_mask_index;

extern FunctionRNA rna_GreasePencilMaskLayers_add_func;
extern PointerPropertyRNA rna_GreasePencilMaskLayers_add_layer;

extern FunctionRNA rna_GreasePencilMaskLayers_remove_func;
extern PointerPropertyRNA rna_GreasePencilMaskLayers_remove_mask;



CollectionPropertyRNA rna_GPencilLayerMask_rna_properties;
PointerPropertyRNA rna_GPencilLayerMask_rna_type;
StringPropertyRNA rna_GPencilLayerMask_name;
BoolPropertyRNA rna_GPencilLayerMask_hide;
BoolPropertyRNA rna_GPencilLayerMask_invert;


CollectionPropertyRNA rna_GPencilFrame_rna_properties;
PointerPropertyRNA rna_GPencilFrame_rna_type;
CollectionPropertyRNA rna_GPencilFrame_strokes;
IntPropertyRNA rna_GPencilFrame_frame_number;
EnumPropertyRNA rna_GPencilFrame_keyframe_type;
BoolPropertyRNA rna_GPencilFrame_is_edited;
BoolPropertyRNA rna_GPencilFrame_select;

extern FunctionRNA rna_GPencilFrame_clear_func;


CollectionPropertyRNA rna_GPencilStrokes_rna_properties;
PointerPropertyRNA rna_GPencilStrokes_rna_type;

extern FunctionRNA rna_GPencilStrokes_new_func;
extern PointerPropertyRNA rna_GPencilStrokes_new_stroke;

extern FunctionRNA rna_GPencilStrokes_remove_func;
extern PointerPropertyRNA rna_GPencilStrokes_remove_stroke;

extern FunctionRNA rna_GPencilStrokes_close_func;
extern PointerPropertyRNA rna_GPencilStrokes_close_stroke;



CollectionPropertyRNA rna_GPencilStroke_rna_properties;
PointerPropertyRNA rna_GPencilStroke_rna_type;
CollectionPropertyRNA rna_GPencilStroke_points;
CollectionPropertyRNA rna_GPencilStroke_triangles;
PointerPropertyRNA rna_GPencilStroke_edit_curve;
IntPropertyRNA rna_GPencilStroke_material_index;
EnumPropertyRNA rna_GPencilStroke_display_mode;
BoolPropertyRNA rna_GPencilStroke_select;
BoolPropertyRNA rna_GPencilStroke_use_cyclic;
BoolPropertyRNA rna_GPencilStroke_has_edit_curve;
EnumPropertyRNA rna_GPencilStroke_start_cap_mode;
EnumPropertyRNA rna_GPencilStroke_end_cap_mode;
BoolPropertyRNA rna_GPencilStroke_is_nofill_stroke;
IntPropertyRNA rna_GPencilStroke_line_width;
FloatPropertyRNA rna_GPencilStroke_hardness;
FloatPropertyRNA rna_GPencilStroke_bound_box_min;
FloatPropertyRNA rna_GPencilStroke_bound_box_max;
FloatPropertyRNA rna_GPencilStroke_aspect;
FloatPropertyRNA rna_GPencilStroke_uv_translation;
FloatPropertyRNA rna_GPencilStroke_uv_rotation;
FloatPropertyRNA rna_GPencilStroke_uv_scale;
FloatPropertyRNA rna_GPencilStroke_vertex_color_fill;
IntPropertyRNA rna_GPencilStroke_select_index;


CollectionPropertyRNA rna_GPencilStrokePoints_rna_properties;
PointerPropertyRNA rna_GPencilStrokePoints_rna_type;

extern FunctionRNA rna_GPencilStrokePoints_add_func;
extern IntPropertyRNA rna_GPencilStrokePoints_add_count;
extern FloatPropertyRNA rna_GPencilStrokePoints_add_pressure;
extern FloatPropertyRNA rna_GPencilStrokePoints_add_strength;

extern FunctionRNA rna_GPencilStrokePoints_pop_func;
extern IntPropertyRNA rna_GPencilStrokePoints_pop_index;

extern FunctionRNA rna_GPencilStrokePoints_update_func;
extern FunctionRNA rna_GPencilStrokePoints_weight_get_func;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_get_vertex_group_index;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_get_point_index;
extern FloatPropertyRNA rna_GPencilStrokePoints_weight_get_weight;

extern FunctionRNA rna_GPencilStrokePoints_weight_set_func;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_set_vertex_group_index;
extern IntPropertyRNA rna_GPencilStrokePoints_weight_set_point_index;
extern FloatPropertyRNA rna_GPencilStrokePoints_weight_set_weight;



CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties;
PointerPropertyRNA rna_GPencilStrokePoint_rna_type;
FloatPropertyRNA rna_GPencilStrokePoint_co;
FloatPropertyRNA rna_GPencilStrokePoint_pressure;
FloatPropertyRNA rna_GPencilStrokePoint_strength;
FloatPropertyRNA rna_GPencilStrokePoint_uv_factor;
FloatPropertyRNA rna_GPencilStrokePoint_uv_rotation;
FloatPropertyRNA rna_GPencilStrokePoint_uv_fill;
BoolPropertyRNA rna_GPencilStrokePoint_select;
FloatPropertyRNA rna_GPencilStrokePoint_vertex_color;


CollectionPropertyRNA rna_GPencilTriangle_rna_properties;
PointerPropertyRNA rna_GPencilTriangle_rna_type;
IntPropertyRNA rna_GPencilTriangle_v1;
IntPropertyRNA rna_GPencilTriangle_v2;
IntPropertyRNA rna_GPencilTriangle_v3;


CollectionPropertyRNA rna_GPencilEditCurve_rna_properties;
PointerPropertyRNA rna_GPencilEditCurve_rna_type;
CollectionPropertyRNA rna_GPencilEditCurve_curve_points;
BoolPropertyRNA rna_GPencilEditCurve_select;


CollectionPropertyRNA rna_GPencilEditCurvePoint_rna_properties;
PointerPropertyRNA rna_GPencilEditCurvePoint_rna_type;
BoolPropertyRNA rna_GPencilEditCurvePoint_select_left_handle;
BoolPropertyRNA rna_GPencilEditCurvePoint_select_right_handle;
BoolPropertyRNA rna_GPencilEditCurvePoint_select_control_point;
BoolPropertyRNA rna_GPencilEditCurvePoint_hide;
FloatPropertyRNA rna_GPencilEditCurvePoint_handle_left;
FloatPropertyRNA rna_GPencilEditCurvePoint_co;
FloatPropertyRNA rna_GPencilEditCurvePoint_handle_right;
FloatPropertyRNA rna_GPencilEditCurvePoint_pressure;
FloatPropertyRNA rna_GPencilEditCurvePoint_strength;
IntPropertyRNA rna_GPencilEditCurvePoint_point_index;
FloatPropertyRNA rna_GPencilEditCurvePoint_uv_factor;
FloatPropertyRNA rna_GPencilEditCurvePoint_uv_rotation;
FloatPropertyRNA rna_GPencilEditCurvePoint_vertex_color;


CollectionPropertyRNA rna_GpencilVertexGroupElement_rna_properties;
PointerPropertyRNA rna_GpencilVertexGroupElement_rna_type;
IntPropertyRNA rna_GpencilVertexGroupElement_group;
FloatPropertyRNA rna_GpencilVertexGroupElement_weight;

static PointerRNA GreasePencil_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilLayer, rna_iterator_listbase_get(iter));
}

void GreasePencil_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencil_layers;

    rna_iterator_listbase_begin(iter, &data->layers, NULL);

    if (iter->valid) {
        iter->ptr = GreasePencil_layers_get(iter);
    }
}

void GreasePencil_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_layers_get(iter);
    }
}

void GreasePencil_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GreasePencil_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GreasePencil_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_layers_get(&iter); }
    }

    GreasePencil_layers_end(&iter);

    return found;
}

int GreasePencil_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int GPencilLayer_info_length(PointerRNA *);
    extern void GPencilLayer_info_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencil_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GPencilLayer_info_length(&iter.ptr);
            if (namelen < 1024) {
                GPencilLayer_info_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                GPencilLayer_info_get(&iter.ptr, name);
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
        GreasePencil_layers_next(&iter);
    }
    GreasePencil_layers_end(&iter);

    return found;
}

PointerRNA GreasePencil_animation_data_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int GreasePencil_materials_length(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA GreasePencil_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void GreasePencil_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencil_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

    if (iter->valid) {
        iter->ptr = GreasePencil_materials_get(iter);
    }
}

void GreasePencil_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_materials_get(iter);
    }
}

void GreasePencil_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int GreasePencil_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GreasePencil_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_materials_get(&iter); }
    }

    GreasePencil_materials_end(&iter);

    return found;
}

int GreasePencil_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencil_materials_begin(&iter, ptr);

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
        GreasePencil_materials_next(&iter);
    }
    GreasePencil_materials_end(&iter);

    return found;
}

int GreasePencil_stroke_depth_order_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->draw_mode);
}

void GreasePencil_stroke_depth_order_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->draw_mode = value;
}

bool GreasePencil_use_stroke_edit_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void GreasePencil_use_stroke_edit_mode_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool GreasePencil_is_stroke_paint_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

bool GreasePencil_is_stroke_sculpt_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

bool GreasePencil_is_stroke_weight_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

bool GreasePencil_is_stroke_vertex_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

bool GreasePencil_use_onion_skinning_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void GreasePencil_use_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

int GreasePencil_stroke_thickness_space_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return ((data->flag) & 8421376);
}

void GreasePencil_stroke_thickness_space_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->flag &= ~8421376;
    data->flag |= value;
}

float GreasePencil_pixel_factor_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->pixfactor);
}

void GreasePencil_pixel_factor_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->pixfactor = CLAMPIS(value, 0.1000000015f, 30.0f);
}

int GreasePencil_edit_curve_resolution_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->curve_edit_resolution);
}

void GreasePencil_edit_curve_resolution_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->curve_edit_resolution = CLAMPIS(value, 1, 256);
}

bool GreasePencil_use_adaptive_curve_resolution_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 4194304) != 0);
}

void GreasePencil_use_adaptive_curve_resolution_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

float GreasePencil_curve_edit_threshold_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->curve_edit_threshold);
}

void GreasePencil_curve_edit_threshold_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->curve_edit_threshold = CLAMPIS(value, 0.0000000000f, 10.0f);
}

float GreasePencil_curve_edit_corner_angle_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->curve_edit_corner_angle);
}

void GreasePencil_curve_edit_corner_angle_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->curve_edit_corner_angle = CLAMPIS(value, 0.0f, 3.1415927410f);
}

bool GreasePencil_use_multiedit_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

void GreasePencil_use_multiedit_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

bool GreasePencil_use_curve_edit_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 2097152) != 0);
}

void GreasePencil_use_curve_edit_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 2097152; }
    else { data->flag &= ~2097152; }
}

bool GreasePencil_use_autolock_layers_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 1048576) != 0);
}

void GreasePencil_use_autolock_layers_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->flag |= 1048576; }
    else { data->flag &= ~1048576; }
}

void GreasePencil_edit_line_color_get(PointerRNA *ptr, float values[4])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->line_color)[i]);
    }
}

void GreasePencil_edit_line_color_set(PointerRNA *ptr, const float values[4])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->line_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int GreasePencil_ghost_before_range_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->gstep);
}

void GreasePencil_ghost_before_range_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->gstep = CLAMPIS(value, 0, 120);
}

int GreasePencil_ghost_after_range_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->gstep_next);
}

void GreasePencil_ghost_after_range_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->gstep_next = CLAMPIS(value, 0, 120);
}

bool GreasePencil_use_ghost_custom_colors_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 3) != 0);
}

void GreasePencil_use_ghost_custom_colors_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 3; }
    else { data->onion_flag &= ~3; }
}

void GreasePencil_before_color_get(PointerRNA *ptr, float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_prev)[i]);
    }
}

void GreasePencil_before_color_set(PointerRNA *ptr, const float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_prev)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void GreasePencil_after_color_get(PointerRNA *ptr, float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_next)[i]);
    }
}

void GreasePencil_after_color_set(PointerRNA *ptr, const float values[3])
{
    bGPdata *data = (bGPdata *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_next)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

bool GreasePencil_use_ghosts_always_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 4) != 0);
}

void GreasePencil_use_ghosts_always_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 4; }
    else { data->onion_flag &= ~4; }
}

int GreasePencil_onion_mode_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->onion_mode);
}

void GreasePencil_onion_mode_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->onion_mode = value;
}

int GreasePencil_onion_keyframe_type_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (int)(data->onion_keytype);
}

void GreasePencil_onion_keyframe_type_set(PointerRNA *ptr, int value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->onion_keytype = value;
}

bool GreasePencil_use_onion_fade_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 8) != 0);
}

void GreasePencil_use_onion_fade_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 8; }
    else { data->onion_flag &= ~8; }
}

bool GreasePencil_use_onion_loop_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->onion_flag) & 16) != 0);
}

void GreasePencil_use_onion_loop_set(PointerRNA *ptr, bool value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    if (value) { data->onion_flag |= 16; }
    else { data->onion_flag &= ~16; }
}

float GreasePencil_onion_factor_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->onion_factor);
}

void GreasePencil_onion_factor_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->onion_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float GreasePencil_zdepth_offset_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (float)(data->zdepth_offset);
}

void GreasePencil_zdepth_offset_set(PointerRNA *ptr, float value)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    data->zdepth_offset = CLAMPIS(value, 0.0f, 1.0f);
}

bool GreasePencil_is_annotation_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

PointerRNA GreasePencil_grid_get(PointerRNA *ptr)
{
    bGPdata *data = (bGPdata *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GreasePencilGrid, &data->grid);
}

static PointerRNA GreasePencilLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GreasePencilLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayers_rna_properties_get(iter);
    }
}

void GreasePencilLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayers_rna_properties_get(iter);
    }
}

void GreasePencilLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GreasePencilLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GreasePencilLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA GreasePencilLayers_active_get(PointerRNA *ptr)
{
    return rna_GPencil_active_layer_get(ptr);
}

void GreasePencilLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GPencil_active_layer_set(ptr, value, reports);
}

int GreasePencilLayers_active_index_get(PointerRNA *ptr)
{
    return rna_GPencil_active_layer_index_get(ptr);
}

void GreasePencilLayers_active_index_set(PointerRNA *ptr, int value)
{
    rna_GPencil_active_layer_index_set(ptr, value);
}

int GreasePencilLayers_active_note_get(PointerRNA *ptr)
{
    return rna_GPencil_active_layer_index_get(ptr);
}

void GreasePencilLayers_active_note_set(PointerRNA *ptr, int value)
{
    rna_GPencil_active_layer_index_set(ptr, value);
}

static PointerRNA GreasePencilGrid_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GreasePencilGrid_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilGrid_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilGrid_rna_properties_get(iter);
    }
}

void GreasePencilGrid_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilGrid_rna_properties_get(iter);
    }
}

void GreasePencilGrid_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GreasePencilGrid_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GreasePencilGrid_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void GreasePencilGrid_scale_get(PointerRNA *ptr, float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void GreasePencilGrid_scale_set(PointerRNA *ptr, const float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->scale)[i] = CLAMPIS(values[i], 0.0099999998f, FLT_MAX);
    }
}

void GreasePencilGrid_color_get(PointerRNA *ptr, float values[3])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void GreasePencilGrid_color_set(PointerRNA *ptr, const float values[3])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int GreasePencilGrid_lines_get(PointerRNA *ptr)
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    return (int)(data->lines);
}

void GreasePencilGrid_lines_set(PointerRNA *ptr, int value)
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    data->lines = CLAMPIS(value, 0, 32767);
}

void GreasePencilGrid_offset_get(PointerRNA *ptr, float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

void GreasePencilGrid_offset_set(PointerRNA *ptr, const float values[2])
{
    bGPgrid *data = (bGPgrid *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

static PointerRNA GPencilLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilLayer_rna_properties_get(iter);
    }
}

void GPencilLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayer_rna_properties_get(iter);
    }
}

void GPencilLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void GPencilLayer_info_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->info, 128);
}

int GPencilLayer_info_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->info);
}

void GPencilLayer_info_set(PointerRNA *ptr, const char *value)
{
    rna_GPencilLayer_info_set(ptr, value);
}

static PointerRNA GPencilLayer_frames_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilFrame, rna_iterator_listbase_get(iter));
}

void GPencilLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayer_frames;

    rna_iterator_listbase_begin(iter, &data->frames, NULL);

    if (iter->valid) {
        iter->ptr = GPencilLayer_frames_get(iter);
    }
}

void GPencilLayer_frames_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayer_frames_get(iter);
    }
}

void GPencilLayer_frames_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilLayer_frames_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilLayer_frames_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilLayer_frames_get(&iter); }
    }

    GPencilLayer_frames_end(&iter);

    return found;
}

static PointerRNA GPencilLayer_mask_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilLayerMask, rna_iterator_listbase_get(iter));
}

void GPencilLayer_mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayer_mask_layers;

    rna_iterator_listbase_begin(iter, &data->mask_layers, NULL);

    if (iter->valid) {
        iter->ptr = GPencilLayer_mask_layers_get(iter);
    }
}

void GPencilLayer_mask_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayer_mask_layers_get(iter);
    }
}

void GPencilLayer_mask_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilLayer_mask_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilLayer_mask_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilLayer_mask_layers_get(&iter); }
    }

    GPencilLayer_mask_layers_end(&iter);

    return found;
}

int GPencilLayer_mask_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int GPencilLayerMask_name_length(PointerRNA *);
    extern void GPencilLayerMask_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GPencilLayer_mask_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GPencilLayerMask_name_length(&iter.ptr);
            if (namelen < 1024) {
                GPencilLayerMask_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                GPencilLayerMask_name_get(&iter.ptr, name);
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
        GPencilLayer_mask_layers_next(&iter);
    }
    GPencilLayer_mask_layers_end(&iter);

    return found;
}

PointerRNA GPencilLayer_active_frame_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GPencilFrame, data->actframe);
}

float GPencilLayer_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->opacity);
}

void GPencilLayer_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->opacity = CLAMPIS(value, 0.0f, 1.0f);
}

void GPencilLayer_channel_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void GPencilLayer_channel_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float GPencilLayer_annotation_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->opacity);
}

void GPencilLayer_annotation_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->opacity = CLAMPIS(value, 0.0f, 1.0f);
}

void GPencilLayer_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void GPencilLayer_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int GPencilLayer_thickness_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->thickness);
}

void GPencilLayer_thickness_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->thickness = CLAMPIS(value, 1, 10);
}

void GPencilLayer_tint_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tintcolor)[i]);
    }
}

void GPencilLayer_tint_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->tintcolor)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float GPencilLayer_tint_factor_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->tintcolor[3]);
}

void GPencilLayer_tint_factor_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->tintcolor[3] = CLAMPIS(value, 0.0f, 1.0f);
}

float GPencilLayer_vertex_paint_opacity_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (float)(data->vertex_paint_opacity);
}

void GPencilLayer_vertex_paint_opacity_set(PointerRNA *ptr, float value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->vertex_paint_opacity = CLAMPIS(value, 0.0f, 1.0f);
}

int GPencilLayer_line_change_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->line_change);
}

void GPencilLayer_line_change_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->line_change = CLAMPIS(value, -300, 300);
}

bool GPencilLayer_use_onion_skinning_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->onion_flag) & 1) != 0);
}

void GPencilLayer_use_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->onion_flag |= 1; }
    else { data->onion_flag &= ~1; }
}

bool GPencilLayer_use_annotation_onion_skinning_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->onion_flag) & 1) != 0);
}

void GPencilLayer_use_annotation_onion_skinning_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->onion_flag |= 1; }
    else { data->onion_flag &= ~1; }
}

int GPencilLayer_annotation_onion_before_range_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->gstep);
}

void GPencilLayer_annotation_onion_before_range_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->gstep = CLAMPIS(value, -1, 120);
}

int GPencilLayer_annotation_onion_after_range_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->gstep_next);
}

void GPencilLayer_annotation_onion_after_range_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->gstep_next = CLAMPIS(value, -1, 120);
}

void GPencilLayer_annotation_onion_before_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_prev)[i]);
    }
}

void GPencilLayer_annotation_onion_before_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_prev)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void GPencilLayer_annotation_onion_after_color_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gcolor_next)[i]);
    }
}

void GPencilLayer_annotation_onion_after_color_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->gcolor_next)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int GPencilLayer_pass_index_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->pass_index);
}

void GPencilLayer_pass_index_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->pass_index = CLAMPIS(value, 0, 32767);
}

void GPencilLayer_viewlayer_render_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->viewlayername, 64);
}

int GPencilLayer_viewlayer_render_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->viewlayername);
}

void GPencilLayer_viewlayer_render_set(PointerRNA *ptr, const char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_strncpy_utf8(data->viewlayername, value, 64);
}

bool GPencilLayer_use_viewlayer_masks_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !(((data->flag) & 32768) != 0);
}

void GPencilLayer_use_viewlayer_masks_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

int GPencilLayer_blend_mode_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (int)(data->blend_mode);
}

void GPencilLayer_blend_mode_set(PointerRNA *ptr, int value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    data->blend_mode = value;
}

void GPencilLayer_location_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->location)[i]);
    }
}

void GPencilLayer_location_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->location)[i] = values[i];
    }
}

void GPencilLayer_rotation_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rotation)[i]);
    }
}

void GPencilLayer_rotation_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rotation)[i] = values[i];
    }
}

void GPencilLayer_scale_get(PointerRNA *ptr, float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void GPencilLayer_scale_set(PointerRNA *ptr, const float values[3])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void GPencilLayer_matrix_layer_get(PointerRNA *ptr, float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->layer_mat)[i]);
    }
}

void GPencilLayer_matrix_inverse_layer_get(PointerRNA *ptr, float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->layer_invmat)[i]);
    }
}

bool GPencilLayer_hide_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void GPencilLayer_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool GPencilLayer_annotation_hide_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void GPencilLayer_annotation_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool GPencilLayer_lock_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void GPencilLayer_lock_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool GPencilLayer_lock_frame_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void GPencilLayer_lock_frame_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool GPencilLayer_lock_material_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !(((data->flag) & 4096) != 0);
}

void GPencilLayer_lock_material_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool GPencilLayer_use_mask_layer_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void GPencilLayer_use_mask_layer_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool GPencilLayer_use_lights_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void GPencilLayer_use_lights_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool GPencilLayer_use_solo_mode_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void GPencilLayer_use_solo_mode_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool GPencilLayer_is_ruler_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

bool GPencilLayer_select_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void GPencilLayer_select_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool GPencilLayer_show_points_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void GPencilLayer_show_points_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool GPencilLayer_show_in_front_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return !(((data->flag) & 128) != 0);
}

void GPencilLayer_show_in_front_set(PointerRNA *ptr, bool value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    if (!value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

PointerRNA GPencilLayer_parent_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

void GPencilLayer_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GPencilLayer_parent_set(ptr, value, reports);
}

int GPencilLayer_parent_type_get(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return ((data->partype) & 7);
}

void GPencilLayer_parent_type_set(PointerRNA *ptr, int value)
{
    rna_GPencilLayer_parent_type_set(ptr, value);
}

void GPencilLayer_parent_bone_get(PointerRNA *ptr, char *value)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->parsubstr, 64);
}

int GPencilLayer_parent_bone_length(PointerRNA *ptr)
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    return strlen(data->parsubstr);
}

void GPencilLayer_parent_bone_set(PointerRNA *ptr, const char *value)
{
    rna_GPencilLayer_parent_bone_set(ptr, value);
}

void GPencilLayer_matrix_inverse_get(PointerRNA *ptr, float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->inverse)[i]);
    }
}

void GPencilLayer_matrix_inverse_set(PointerRNA *ptr, const float values[16])
{
    bGPDlayer *data = (bGPDlayer *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        ((float *)data->inverse)[i] = values[i];
    }
}

bool GPencilLayer_is_parented_get(PointerRNA *ptr)
{
    return rna_GPencilLayer_is_parented_get(ptr);
}

static PointerRNA GPencilFrames_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilFrames_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilFrames_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilFrames_rna_properties_get(iter);
    }
}

void GPencilFrames_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilFrames_rna_properties_get(iter);
    }
}

void GPencilFrames_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilFrames_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilFrames_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GreasePencilMaskLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GreasePencilMaskLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilMaskLayers_rna_properties_get(iter);
    }
}

void GreasePencilMaskLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilMaskLayers_rna_properties_get(iter);
    }
}

void GreasePencilMaskLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GreasePencilMaskLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GreasePencilMaskLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int GreasePencilMaskLayers_active_mask_index_get(PointerRNA *ptr)
{
    return rna_GPencil_active_mask_index_get(ptr);
}

void GreasePencilMaskLayers_active_mask_index_set(PointerRNA *ptr, int value)
{
    rna_GPencil_active_mask_index_set(ptr, value);
}

static PointerRNA GPencilLayerMask_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilLayerMask_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilLayerMask_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilLayerMask_rna_properties_get(iter);
    }
}

void GPencilLayerMask_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilLayerMask_rna_properties_get(iter);
    }
}

void GPencilLayerMask_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilLayerMask_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilLayerMask_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void GPencilLayerMask_name_get(PointerRNA *ptr, char *value)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 128);
}

int GPencilLayerMask_name_length(PointerRNA *ptr)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    return strlen(data->name);
}

void GPencilLayerMask_name_set(PointerRNA *ptr, const char *value)
{
    rna_GPencilLayer_mask_info_set(ptr, value);
}

bool GPencilLayerMask_hide_get(PointerRNA *ptr)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void GPencilLayerMask_hide_set(PointerRNA *ptr, bool value)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool GPencilLayerMask_invert_get(PointerRNA *ptr)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void GPencilLayerMask_invert_set(PointerRNA *ptr, bool value)
{
    bGPDlayer_Mask *data = (bGPDlayer_Mask *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA GPencilFrame_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilFrame_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilFrame_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilFrame_rna_properties_get(iter);
    }
}

void GPencilFrame_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilFrame_rna_properties_get(iter);
    }
}

void GPencilFrame_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilFrame_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilFrame_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilFrame_strokes_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStroke, rna_iterator_listbase_get(iter));
}

void GPencilFrame_strokes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilFrame_strokes;

    rna_iterator_listbase_begin(iter, &data->strokes, NULL);

    if (iter->valid) {
        iter->ptr = GPencilFrame_strokes_get(iter);
    }
}

void GPencilFrame_strokes_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilFrame_strokes_get(iter);
    }
}

void GPencilFrame_strokes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilFrame_strokes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilFrame_strokes_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilFrame_strokes_get(&iter); }
    }

    GPencilFrame_strokes_end(&iter);

    return found;
}

int GPencilFrame_frame_number_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (int)(data->framenum);
}

void GPencilFrame_frame_number_set(PointerRNA *ptr, int value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    data->framenum = CLAMPIS(value, -1048574, 1048574);
}

int GPencilFrame_keyframe_type_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (int)(data->key_type);
}

void GPencilFrame_keyframe_type_set(PointerRNA *ptr, int value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    data->key_type = value;
}

bool GPencilFrame_is_edited_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void GPencilFrame_is_edited_set(PointerRNA *ptr, bool value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool GPencilFrame_select_get(PointerRNA *ptr)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void GPencilFrame_select_set(PointerRNA *ptr, bool value)
{
    bGPDframe *data = (bGPDframe *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA GPencilStrokes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilStrokes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStrokes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStrokes_rna_properties_get(iter);
    }
}

void GPencilStrokes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStrokes_rna_properties_get(iter);
    }
}

void GPencilStrokes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilStrokes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStrokes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStroke_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilStroke_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStroke_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStroke_rna_properties_get(iter);
    }
}

void GPencilStroke_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStroke_rna_properties_get(iter);
    }
}

void GPencilStroke_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilStroke_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStroke_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int GPencilStroke_points_length(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (data->points == NULL) ? 0 : data->totpoints;
}

static PointerRNA GPencilStroke_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStrokePoint, rna_iterator_array_get(iter));
}

void GPencilStroke_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStroke_points;

    rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->totpoints, 0, NULL);

    if (iter->valid) {
        iter->ptr = GPencilStroke_points_get(iter);
    }
}

void GPencilStroke_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStroke_points_get(iter);
    }
}

void GPencilStroke_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int GPencilStroke_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilStroke_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilStroke_points_get(&iter); }
    }

    GPencilStroke_points_end(&iter);

    return found;
}

int GPencilStroke_triangles_length(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (data->triangles == NULL) ? 0 : data->tot_triangles;
}

static PointerRNA GPencilStroke_triangles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilTriangle, rna_iterator_array_get(iter));
}

void GPencilStroke_triangles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStroke_triangles;

    rna_iterator_array_begin(iter, data->triangles, sizeof(data->triangles[0]), data->tot_triangles, 0, NULL);

    if (iter->valid) {
        iter->ptr = GPencilStroke_triangles_get(iter);
    }
}

void GPencilStroke_triangles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStroke_triangles_get(iter);
    }
}

void GPencilStroke_triangles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int GPencilStroke_triangles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilStroke_triangles_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilStroke_triangles_get(&iter); }
    }

    GPencilStroke_triangles_end(&iter);

    return found;
}

PointerRNA GPencilStroke_edit_curve_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GPencilEditCurve, data->editcurve);
}

int GPencilStroke_material_index_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->mat_nr);
}

void GPencilStroke_material_index_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->mat_nr = value;
}

int GPencilStroke_display_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return ((data->flag) & 7);
}

void GPencilStroke_display_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->flag &= ~7;
    data->flag |= value;
}

bool GPencilStroke_select_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void GPencilStroke_select_set(PointerRNA *ptr, bool value)
{
    rna_GPencil_stroke_select_set(ptr, value);
}

bool GPencilStroke_use_cyclic_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void GPencilStroke_use_cyclic_set(PointerRNA *ptr, bool value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool GPencilStroke_has_edit_curve_get(PointerRNA *ptr)
{
    return rna_stroke_has_edit_curve_get(ptr);
}

int GPencilStroke_start_cap_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->caps[0]);
}

void GPencilStroke_start_cap_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->caps[0] = value;
}

int GPencilStroke_end_cap_mode_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->caps[1]);
}

void GPencilStroke_end_cap_mode_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->caps[1] = value;
}

bool GPencilStroke_is_nofill_stroke_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void GPencilStroke_is_nofill_stroke_set(PointerRNA *ptr, bool value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

int GPencilStroke_line_width_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->thickness);
}

void GPencilStroke_line_width_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->thickness = CLAMPIS(value, 1, 1000);
}

float GPencilStroke_hardness_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->hardeness);
}

void GPencilStroke_hardness_set(PointerRNA *ptr, float value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->hardeness = CLAMPIS(value, 0.0010000000f, 1.0f);
}

void GPencilStroke_bound_box_min_get(PointerRNA *ptr, float values[3])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->boundbox_min)[i]);
    }
}

void GPencilStroke_bound_box_max_get(PointerRNA *ptr, float values[3])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->boundbox_max)[i]);
    }
}

void GPencilStroke_aspect_get(PointerRNA *ptr, float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->aspect_ratio)[i]);
    }
}

void GPencilStroke_aspect_set(PointerRNA *ptr, const float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->aspect_ratio)[i] = CLAMPIS(values[i], 0.0099999998f, 1.0f);
    }
}

void GPencilStroke_uv_translation_get(PointerRNA *ptr, float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->uv_translation)[i]);
    }
}

void GPencilStroke_uv_translation_set(PointerRNA *ptr, const float values[2])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->uv_translation)[i] = values[i];
    }
}

float GPencilStroke_uv_rotation_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->uv_rotation);
}

void GPencilStroke_uv_rotation_set(PointerRNA *ptr, float value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->uv_rotation = value;
}

float GPencilStroke_uv_scale_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (float)(data->uv_scale);
}

void GPencilStroke_uv_scale_set(PointerRNA *ptr, float value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->uv_scale = CLAMPIS(value, 0.0099999998f, 100.0f);
}

void GPencilStroke_vertex_color_fill_get(PointerRNA *ptr, float values[4])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vert_color_fill)[i]);
    }
}

void GPencilStroke_vertex_color_fill_set(PointerRNA *ptr, const float values[4])
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vert_color_fill)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int GPencilStroke_select_index_get(PointerRNA *ptr)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    return (int)(data->select_index);
}

void GPencilStroke_select_index_set(PointerRNA *ptr, int value)
{
    bGPDstroke *data = (bGPDstroke *)(ptr->data);
    data->select_index = value;
}

static PointerRNA GPencilStrokePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilStrokePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoints_rna_properties_get(iter);
    }
}

void GPencilStrokePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoints_rna_properties_get(iter);
    }
}

void GPencilStrokePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilStrokePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStrokePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStrokePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoint_rna_properties_get(iter);
    }
}

void GPencilStrokePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilStrokePoint_rna_properties_get(iter);
    }
}

void GPencilStrokePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilStrokePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilStrokePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void GPencilStrokePoint_co_get(PointerRNA *ptr, float values[3])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void GPencilStrokePoint_co_set(PointerRNA *ptr, const float values[3])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

float GPencilStrokePoint_pressure_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->pressure);
}

void GPencilStrokePoint_pressure_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    data->pressure = CLAMPIS(value, 0.0f, FLT_MAX);
}

float GPencilStrokePoint_strength_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->strength);
}

void GPencilStrokePoint_strength_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    data->strength = CLAMPIS(value, 0.0f, 1.0f);
}

float GPencilStrokePoint_uv_factor_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->uv_fac);
}

void GPencilStrokePoint_uv_factor_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    data->uv_fac = CLAMPIS(value, 0.0f, 1.0f);
}

float GPencilStrokePoint_uv_rotation_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (float)(data->uv_rot);
}

void GPencilStrokePoint_uv_rotation_set(PointerRNA *ptr, float value)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    data->uv_rot = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
}

void GPencilStrokePoint_uv_fill_get(PointerRNA *ptr, float values[2])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->uv_fill)[i]);
    }
}

void GPencilStrokePoint_uv_fill_set(PointerRNA *ptr, const float values[2])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->uv_fill)[i] = values[i];
    }
}

bool GPencilStrokePoint_select_get(PointerRNA *ptr)
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void GPencilStrokePoint_select_set(PointerRNA *ptr, bool value)
{
    rna_GPencil_stroke_point_select_set(ptr, value);
}

void GPencilStrokePoint_vertex_color_get(PointerRNA *ptr, float values[4])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vert_color)[i]);
    }
}

void GPencilStrokePoint_vertex_color_set(PointerRNA *ptr, const float values[4])
{
    bGPDspoint *data = (bGPDspoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vert_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

static PointerRNA GPencilTriangle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilTriangle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilTriangle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilTriangle_rna_properties_get(iter);
    }
}

void GPencilTriangle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilTriangle_rna_properties_get(iter);
    }
}

void GPencilTriangle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilTriangle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilTriangle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int GPencilTriangle_v1_get(PointerRNA *ptr)
{
    bGPDtriangle *data = (bGPDtriangle *)(ptr->data);
    return (int)(data->verts[0]);
}

int GPencilTriangle_v2_get(PointerRNA *ptr)
{
    bGPDtriangle *data = (bGPDtriangle *)(ptr->data);
    return (int)(data->verts[1]);
}

int GPencilTriangle_v3_get(PointerRNA *ptr)
{
    bGPDtriangle *data = (bGPDtriangle *)(ptr->data);
    return (int)(data->verts[2]);
}

static PointerRNA GPencilEditCurve_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilEditCurve_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilEditCurve_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_rna_properties_get(iter);
    }
}

void GPencilEditCurve_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_rna_properties_get(iter);
    }
}

void GPencilEditCurve_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilEditCurve_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilEditCurve_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int GPencilEditCurve_curve_points_length(PointerRNA *ptr)
{
    bGPDcurve *data = (bGPDcurve *)(ptr->data);
    return (data->curve_points == NULL) ? 0 : data->tot_curve_points;
}

static PointerRNA GPencilEditCurve_curve_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilEditCurvePoint, rna_iterator_array_get(iter));
}

void GPencilEditCurve_curve_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bGPDcurve *data = (bGPDcurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilEditCurve_curve_points;

    rna_iterator_array_begin(iter, data->curve_points, sizeof(data->curve_points[0]), data->tot_curve_points, 0, NULL);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_curve_points_get(iter);
    }
}

void GPencilEditCurve_curve_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilEditCurve_curve_points_get(iter);
    }
}

void GPencilEditCurve_curve_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int GPencilEditCurve_curve_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GPencilEditCurve_curve_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = GPencilEditCurve_curve_points_get(&iter); }
    }

    GPencilEditCurve_curve_points_end(&iter);

    return found;
}

bool GPencilEditCurve_select_get(PointerRNA *ptr)
{
    bGPDcurve *data = (bGPDcurve *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void GPencilEditCurve_select_set(PointerRNA *ptr, bool value)
{
    rna_GPencil_curve_select_set(ptr, value);
}

static PointerRNA GPencilEditCurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GPencilEditCurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GPencilEditCurvePoint_rna_properties_get(iter);
    }
}

void GPencilEditCurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GPencilEditCurvePoint_rna_properties_get(iter);
    }
}

void GPencilEditCurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GPencilEditCurvePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GPencilEditCurvePoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool GPencilEditCurvePoint_select_left_handle_get(PointerRNA *ptr)
{
    return rna_GpencilCurvePoint_BezTriple_handle1_select_get(ptr);
}

void GPencilEditCurvePoint_select_left_handle_set(PointerRNA *ptr, bool value)
{
    rna_GpencilCurvePoint_BezTriple_handle1_select_set(ptr, value);
}

bool GPencilEditCurvePoint_select_right_handle_get(PointerRNA *ptr)
{
    return rna_GpencilCurvePoint_BezTriple_handle2_select_get(ptr);
}

void GPencilEditCurvePoint_select_right_handle_set(PointerRNA *ptr, bool value)
{
    rna_GpencilCurvePoint_BezTriple_handle2_select_set(ptr, value);
}

bool GPencilEditCurvePoint_select_control_point_get(PointerRNA *ptr)
{
    return rna_GpencilCurvePoint_BezTriple_ctrlpoint_select_get(ptr);
}

void GPencilEditCurvePoint_select_control_point_set(PointerRNA *ptr, bool value)
{
    rna_GpencilCurvePoint_BezTriple_ctrlpoint_select_set(ptr, value);
}

bool GPencilEditCurvePoint_hide_get(PointerRNA *ptr)
{
    return rna_GpencilCurvePoint_BezTriple_hide_get(ptr);
}

void GPencilEditCurvePoint_hide_set(PointerRNA *ptr, bool value)
{
    rna_GpencilCurvePoint_BezTriple_hide_set(ptr, value);
}

void GPencilEditCurvePoint_handle_left_get(PointerRNA *ptr, float values[3])
{
    rna_GpencilCurvePoint_BezTriple_handle1_get(ptr, values);
}

void GPencilEditCurvePoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
    rna_GpencilCurvePoint_BezTriple_handle1_set(ptr, values);
}

void GPencilEditCurvePoint_co_get(PointerRNA *ptr, float values[3])
{
    rna_GpencilCurvePoint_BezTriple_ctrlpoint_get(ptr, values);
}

void GPencilEditCurvePoint_co_set(PointerRNA *ptr, const float values[3])
{
    rna_GpencilCurvePoint_BezTriple_ctrlpoint_set(ptr, values);
}

void GPencilEditCurvePoint_handle_right_get(PointerRNA *ptr, float values[3])
{
    rna_GpencilCurvePoint_BezTriple_handle2_get(ptr, values);
}

void GPencilEditCurvePoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
    rna_GpencilCurvePoint_BezTriple_handle2_set(ptr, values);
}

float GPencilEditCurvePoint_pressure_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->pressure);
}

void GPencilEditCurvePoint_pressure_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    data->pressure = CLAMPIS(value, 0.0f, FLT_MAX);
}

float GPencilEditCurvePoint_strength_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->strength);
}

void GPencilEditCurvePoint_strength_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    data->strength = CLAMPIS(value, 0.0f, 1.0f);
}

int GPencilEditCurvePoint_point_index_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (int)(data->point_index);
}

float GPencilEditCurvePoint_uv_factor_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->uv_fac);
}

void GPencilEditCurvePoint_uv_factor_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    data->uv_fac = CLAMPIS(value, 0.0f, 1.0f);
}

float GPencilEditCurvePoint_uv_rotation_get(PointerRNA *ptr)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    return (float)(data->uv_rot);
}

void GPencilEditCurvePoint_uv_rotation_set(PointerRNA *ptr, float value)
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    data->uv_rot = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
}

void GPencilEditCurvePoint_vertex_color_get(PointerRNA *ptr, float values[4])
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->vert_color)[i]);
    }
}

void GPencilEditCurvePoint_vertex_color_set(PointerRNA *ptr, const float values[4])
{
    bGPDcurve_point *data = (bGPDcurve_point *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->vert_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

static PointerRNA GpencilVertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GpencilVertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GpencilVertexGroupElement_rna_properties_get(iter);
    }
}

void GpencilVertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GpencilVertexGroupElement_rna_properties_get(iter);
    }
}

void GpencilVertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GpencilVertexGroupElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GpencilVertexGroupElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int GpencilVertexGroupElement_group_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (int)(data->def_nr);
}

float GpencilVertexGroupElement_weight_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (float)(data->weight);
}

void GpencilVertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

void GreasePencil_clear_func(struct bGPdata *_self)
{
	rna_GPencil_clear(_self);
}

void GreasePencil_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	_self = (struct bGPdata *)_ptr->data;
	
	rna_GPencil_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_clear(struct bGPdata *_self);

struct bGPDlayer *GreasePencilLayers_new_func(struct bGPdata *_self, const char * name, bool set_active)
{
	return rna_GPencil_layer_new(_self, name, set_active);
}

void GreasePencilLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	const char * name;
	bool set_active;
	struct bGPDlayer *layer;
	char *_data, *_retdata;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	set_active = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_GPencil_layer_new(_self, name, set_active);
	*((struct bGPDlayer **)_retdata) = layer;
}

void GreasePencilLayers_remove_func(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer)
{
	rna_GPencil_layer_remove(_self, reports, layer);
}

void GreasePencilLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_remove(_self, reports, layer);
}

void GreasePencilLayers_move_func(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer, int type)
{
	rna_GPencil_layer_move(_self, reports, layer, type);
}

void GreasePencilLayers_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPdata *_self;
	struct PointerRNA *layer;
	int type;
	char *_data;
	
	_self = (struct bGPdata *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_GPencil_layer_move(_self, reports, layer, type);
}

/* Repeated prototypes to detect errors */

struct bGPDlayer *rna_GPencil_layer_new(struct bGPdata *_self, const char * name, bool set_active);
void rna_GPencil_layer_remove(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer);
void rna_GPencil_layer_move(struct bGPdata *_self, ReportList *reports, struct PointerRNA *layer, int type);


void GPencilLayer_clear_func(struct bGPDlayer *_self)
{
	rna_GPencil_layer_clear(_self);
}

void GPencilLayer_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	_self = (struct bGPDlayer *)_ptr->data;
	
	rna_GPencil_layer_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_layer_clear(struct bGPDlayer *_self);

struct bGPDframe *GPencilFrames_new_func(struct bGPDlayer *_self, ReportList *reports, int frame_number, bool active)
{
	return rna_GPencil_frame_new(_self, reports, frame_number, active);
}

void GPencilFrames_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	int frame_number;
	bool active;
	struct bGPDframe *frame;
	char *_data, *_retdata;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	_data += 8;
	active = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	frame = rna_GPencil_frame_new(_self, reports, frame_number, active);
	*((struct bGPDframe **)_retdata) = frame;
}

void GPencilFrames_remove_func(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *frame)
{
	rna_GPencil_frame_remove(_self, reports, frame);
}

void GPencilFrames_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *frame;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((struct PointerRNA **)_data);
	
	rna_GPencil_frame_remove(_self, reports, frame);
}

struct bGPDframe *GPencilFrames_copy_func(struct bGPDlayer *_self, struct bGPDframe *source)
{
	return rna_GPencil_frame_copy(_self, source);
}

void GPencilFrames_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct bGPDframe *source;
	struct bGPDframe *copy;
	char *_data, *_retdata;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	source = *((struct bGPDframe **)_data);
	_data += 8;
	_retdata = _data;
	
	copy = rna_GPencil_frame_copy(_self, source);
	*((struct bGPDframe **)_retdata) = copy;
}

/* Repeated prototypes to detect errors */

struct bGPDframe *rna_GPencil_frame_new(struct bGPDlayer *_self, ReportList *reports, int frame_number, bool active);
void rna_GPencil_frame_remove(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *frame);
struct bGPDframe *rna_GPencil_frame_copy(struct bGPDlayer *_self, struct bGPDframe *source);

void GreasePencilMaskLayers_add_func(struct bGPDlayer *_self, struct PointerRNA *layer)
{
	rna_GPencil_layer_mask_add(_self, layer);
}

void GreasePencilMaskLayers_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *layer;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_mask_add(_self, layer);
}

void GreasePencilMaskLayers_remove_func(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *mask)
{
	rna_GPencil_layer_mask_remove(_self, reports, mask);
}

void GreasePencilMaskLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDlayer *_self;
	struct PointerRNA *mask;
	char *_data;
	
	_self = (struct bGPDlayer *)_ptr->data;
	_data = (char *)_parms->data;
	mask = *((struct PointerRNA **)_data);
	
	rna_GPencil_layer_mask_remove(_self, reports, mask);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_layer_mask_add(struct bGPDlayer *_self, struct PointerRNA *layer);
void rna_GPencil_layer_mask_remove(struct bGPDlayer *_self, ReportList *reports, struct PointerRNA *mask);


void GPencilFrame_clear_func(struct bGPDframe *_self)
{
	rna_GPencil_frame_clear(_self);
}

void GPencilFrame_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDframe *_self;
	_self = (struct bGPDframe *)_ptr->data;
	
	rna_GPencil_frame_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_frame_clear(struct bGPDframe *_self);

struct bGPDstroke *GPencilStrokes_new_func(struct bGPDframe *_self)
{
	return rna_GPencil_stroke_new(_self);
}

void GPencilStrokes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDframe *_self;
	struct bGPDstroke *stroke;
	char *_data, *_retdata;
	
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	stroke = rna_GPencil_stroke_new(_self);
	*((struct bGPDstroke **)_retdata) = stroke;
}

void GPencilStrokes_remove_func(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke)
{
	rna_GPencil_stroke_remove(_selfid, _self, reports, stroke);
}

void GPencilStrokes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDframe *_self;
	struct PointerRNA *stroke;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	stroke = *((struct PointerRNA **)_data);
	
	rna_GPencil_stroke_remove(_selfid, _self, reports, stroke);
}

void GPencilStrokes_close_func(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke)
{
	rna_GPencil_stroke_close(_selfid, _self, reports, stroke);
}

void GPencilStrokes_close_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDframe *_self;
	struct PointerRNA *stroke;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDframe *)_ptr->data;
	_data = (char *)_parms->data;
	stroke = *((struct PointerRNA **)_data);
	
	rna_GPencil_stroke_close(_selfid, _self, reports, stroke);
}

/* Repeated prototypes to detect errors */

struct bGPDstroke *rna_GPencil_stroke_new(struct bGPDframe *_self);
void rna_GPencil_stroke_remove(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke);
void rna_GPencil_stroke_close(struct ID *_selfid, struct bGPDframe *_self, ReportList *reports, struct PointerRNA *stroke);


void GPencilStrokePoints_add_func(struct ID *_selfid, struct bGPDstroke *_self, int count, float pressure, float strength)
{
	rna_GPencil_stroke_point_add(_selfid, _self, count, pressure, strength);
}

void GPencilStrokePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDstroke *_self;
	int count;
	float pressure;
	float strength;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	_data += 8;
	pressure = *((float *)_data);
	_data += 8;
	strength = *((float *)_data);
	
	rna_GPencil_stroke_point_add(_selfid, _self, count, pressure, strength);
}

void GPencilStrokePoints_pop_func(struct ID *_selfid, struct bGPDstroke *_self, ReportList *reports, int index)
{
	rna_GPencil_stroke_point_pop(_selfid, _self, reports, index);
}

void GPencilStrokePoints_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDstroke *_self;
	int index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_GPencil_stroke_point_pop(_selfid, _self, reports, index);
}

void GPencilStrokePoints_update_func(struct ID *_selfid, struct bGPDstroke *_self)
{
	rna_GPencil_stroke_point_update(_selfid, _self);
}

void GPencilStrokePoints_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bGPDstroke *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bGPDstroke *)_ptr->data;
	
	rna_GPencil_stroke_point_update(_selfid, _self);
}

float GPencilStrokePoints_weight_get_func(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index)
{
	return rna_GPencilStrokePoints_weight_get(_self, reports, vertex_group_index, point_index);
}

void GPencilStrokePoints_weight_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDstroke *_self;
	int vertex_group_index;
	int point_index;
	float weight;
	char *_data, *_retdata;
	
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_group_index = *((int *)_data);
	_data += 8;
	point_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	weight = rna_GPencilStrokePoints_weight_get(_self, reports, vertex_group_index, point_index);
	*((float *)_retdata) = weight;
}

void GPencilStrokePoints_weight_set_func(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index, float weight)
{
	rna_GPencilStrokePoints_weight_set(_self, reports, vertex_group_index, point_index, weight);
}

void GPencilStrokePoints_weight_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bGPDstroke *_self;
	int vertex_group_index;
	int point_index;
	float weight;
	char *_data;
	
	_self = (struct bGPDstroke *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_group_index = *((int *)_data);
	_data += 8;
	point_index = *((int *)_data);
	_data += 8;
	weight = *((float *)_data);
	
	rna_GPencilStrokePoints_weight_set(_self, reports, vertex_group_index, point_index, weight);
}

/* Repeated prototypes to detect errors */

void rna_GPencil_stroke_point_add(struct ID *_selfid, struct bGPDstroke *_self, int count, float pressure, float strength);
void rna_GPencil_stroke_point_pop(struct ID *_selfid, struct bGPDstroke *_self, ReportList *reports, int index);
void rna_GPencil_stroke_point_update(struct ID *_selfid, struct bGPDstroke *_self);
float rna_GPencilStrokePoints_weight_get(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index);
void rna_GPencilStrokePoints_weight_set(struct bGPDstroke *_self, ReportList *reports, int vertex_group_index, int point_index, float weight);






/* Grease Pencil */
CollectionPropertyRNA rna_GreasePencil_layers = {
	{(PropertyRNA *)&rna_GreasePencil_animation_data, NULL,
	-1, "layers", 0, 0, 0, 0, 0, "Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_GreasePencilLayers},
	GreasePencil_layers_begin, GreasePencil_layers_next, GreasePencil_layers_end, GreasePencil_layers_get, NULL, GreasePencil_layers_lookup_int, GreasePencil_layers_lookup_string, NULL, &RNA_GPencilLayer
};

PointerPropertyRNA rna_GreasePencil_animation_data = {
	{(PropertyRNA *)&rna_GreasePencil_materials, (PropertyRNA *)&rna_GreasePencil_layers,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	GreasePencil_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_GreasePencil_materials = {
	{(PropertyRNA *)&rna_GreasePencil_stroke_depth_order, (PropertyRNA *)&rna_GreasePencil_animation_data,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDMaterials},
	GreasePencil_materials_begin, GreasePencil_materials_next, GreasePencil_materials_end, GreasePencil_materials_get, GreasePencil_materials_length, GreasePencil_materials_lookup_int, GreasePencil_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

static const EnumPropertyItem rna_GreasePencil_stroke_depth_order_items[3] = {
	{0, "2D", 0, "2D Layers", "Display strokes using grease pencil layers to define order"},
	{1, "3D", 0, "3D Location", "Display strokes using real 3D position in 3D space"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencil_stroke_depth_order = {
	{(PropertyRNA *)&rna_GreasePencil_use_stroke_edit_mode, (PropertyRNA *)&rna_GreasePencil_materials,
	-1, "stroke_depth_order", 3, 0, 0, 4, 0, "Stroke Depth Order",
	"Defines how the strokes are ordered in 3D space (for objects not displayed \'In Front\')",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, draw_mode), 1, NULL},
	GreasePencil_stroke_depth_order_get, GreasePencil_stroke_depth_order_set, NULL, NULL, NULL, rna_GreasePencil_stroke_depth_order_items, 2, 0
};

BoolPropertyRNA rna_GreasePencil_use_stroke_edit_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_paint_mode, (PropertyRNA *)&rna_GreasePencil_stroke_depth_order,
	-1, "use_stroke_edit_mode", 3, 0, 0, 0, 0, "Stroke Edit Mode",
	"Edit Grease Pencil strokes instead of viewport data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_stroke_edit_mode_get, GreasePencil_use_stroke_edit_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_is_stroke_paint_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_sculpt_mode, (PropertyRNA *)&rna_GreasePencil_use_stroke_edit_mode,
	-1, "is_stroke_paint_mode", 2, 0, 0, 0, 0, "Stroke Paint Mode",
	"Draw Grease Pencil strokes on click/drag",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_is_stroke_paint_mode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_is_stroke_sculpt_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_weight_mode, (PropertyRNA *)&rna_GreasePencil_is_stroke_paint_mode,
	-1, "is_stroke_sculpt_mode", 2, 0, 0, 0, 0, "Stroke Sculpt Mode",
	"Sculpt Grease Pencil strokes instead of viewport data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_is_stroke_sculpt_mode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_is_stroke_weight_mode = {
	{(PropertyRNA *)&rna_GreasePencil_is_stroke_vertex_mode, (PropertyRNA *)&rna_GreasePencil_is_stroke_sculpt_mode,
	-1, "is_stroke_weight_mode", 2, 0, 0, 0, 0, "Stroke Weight Paint Mode",
	"Grease Pencil weight paint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_is_stroke_weight_mode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_is_stroke_vertex_mode = {
	{(PropertyRNA *)&rna_GreasePencil_use_onion_skinning, (PropertyRNA *)&rna_GreasePencil_is_stroke_weight_mode,
	-1, "is_stroke_vertex_mode", 2, 0, 0, 0, 0, "Stroke Vertex Paint Mode",
	"Grease Pencil vertex paint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_editmode_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_is_stroke_vertex_mode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_use_onion_skinning = {
	{(PropertyRNA *)&rna_GreasePencil_stroke_thickness_space, (PropertyRNA *)&rna_GreasePencil_is_stroke_vertex_mode,
	-1, "use_onion_skinning", 3, 0, 0, 0, 0, "Onion Skins",
	"Show ghosts of the keyframes before and after the current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_onion_skinning_get, GreasePencil_use_onion_skinning_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static const EnumPropertyItem rna_GreasePencil_stroke_thickness_space_items[4] = {
	{0, "WORLDSPACE", 0, "World Space", "Set stroke thickness relative to the world space"},
	{32768, "SCREENSPACE", 0, "Screen Space", "Set stroke thickness relative to the screen space"},
	{8388608, "WORLDSPACE_NO_PERSPECTIVE", 0, "Fixed Scale World Space", "Set stroke thickness relative to world, but ignore perspective"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencil_stroke_thickness_space = {
	{(PropertyRNA *)&rna_GreasePencil_pixel_factor, (PropertyRNA *)&rna_GreasePencil_use_onion_skinning,
	-1, "stroke_thickness_space", 3, 0, 0, 4, 0, "Stroke Thickness",
	"Set stroke thickness in screen space or world space",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, flag), 0, NULL},
	GreasePencil_stroke_thickness_space_get, GreasePencil_stroke_thickness_space_set, NULL, NULL, NULL, rna_GreasePencil_stroke_thickness_space_items, 3, 0
};

FloatPropertyRNA rna_GreasePencil_pixel_factor = {
	{(PropertyRNA *)&rna_GreasePencil_edit_curve_resolution, (PropertyRNA *)&rna_GreasePencil_stroke_thickness_space,
	-1, "pixel_factor", 3, 0, 0, 4, 0, "Scale",
	"Scale conversion factor for pixel size (use larger values for thicker lines)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, pixfactor), 5, NULL},
	GreasePencil_pixel_factor_get, GreasePencil_pixel_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 30.0f, 0.1000000015f, 30.0f, 1.0f, 2, 0.0f, NULL
};

IntPropertyRNA rna_GreasePencil_edit_curve_resolution = {
	{(PropertyRNA *)&rna_GreasePencil_use_adaptive_curve_resolution, (PropertyRNA *)&rna_GreasePencil_pixel_factor,
	-1, "edit_curve_resolution", 1, 0, 0, 4, 0, "Curve Resolution",
	"Number of segments generated between control points when editing strokes in curve mode",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_resolution_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, curve_edit_resolution), 0, NULL},
	GreasePencil_edit_curve_resolution_get, GreasePencil_edit_curve_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 64, 1, 256, 1, 32, NULL
};

BoolPropertyRNA rna_GreasePencil_use_adaptive_curve_resolution = {
	{(PropertyRNA *)&rna_GreasePencil_curve_edit_threshold, (PropertyRNA *)&rna_GreasePencil_edit_curve_resolution,
	-1, "use_adaptive_curve_resolution", 3, 0, 0, 0, 0, "Adaptive Resolution",
	"Set the resolution of each editcurve segment dynamically depending on the length of the segment. The resolution is the number of points generated per unit distance",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_resolution_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_adaptive_curve_resolution_get, GreasePencil_use_adaptive_curve_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FloatPropertyRNA rna_GreasePencil_curve_edit_threshold = {
	{(PropertyRNA *)&rna_GreasePencil_curve_edit_corner_angle, (PropertyRNA *)&rna_GreasePencil_use_adaptive_curve_resolution,
	-1, "curve_edit_threshold", 1, 0, 0, 4, 0, "Threshold",
	"Curve conversion error threshold",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, curve_edit_threshold), 5, NULL},
	GreasePencil_curve_edit_threshold_get, GreasePencil_curve_edit_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0000000000f, 10.0f, 0.0000000000f, 10.0f, 2.0f, 5, 0.1000000015f, NULL
};

FloatPropertyRNA rna_GreasePencil_curve_edit_corner_angle = {
	{(PropertyRNA *)&rna_GreasePencil_use_multiedit, (PropertyRNA *)&rna_GreasePencil_curve_edit_threshold,
	-1, "curve_edit_corner_angle", 1, 0, 0, 4, 0, "Corner Angle",
	"Angle threshold to be treated as corners",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, curve_edit_corner_angle), 5, NULL},
	GreasePencil_curve_edit_corner_angle_get, GreasePencil_curve_edit_corner_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 1.5707963705f, NULL
};

BoolPropertyRNA rna_GreasePencil_use_multiedit = {
	{(PropertyRNA *)&rna_GreasePencil_use_curve_edit, (PropertyRNA *)&rna_GreasePencil_curve_edit_corner_angle,
	-1, "use_multiedit", 3, 0, 0, 0, 0, "Multiframe",
	"Edit strokes from multiple grease pencil keyframes at the same time (keyframes must be selected to be included)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_multiedit_get, GreasePencil_use_multiedit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_use_curve_edit = {
	{(PropertyRNA *)&rna_GreasePencil_use_autolock_layers, (PropertyRNA *)&rna_GreasePencil_use_multiedit,
	-1, "use_curve_edit", 3, 0, 0, 0, 0, "Curve Editing",
	"Edit strokes using curve handles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_curve_edit_mode_toggle, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_curve_edit_get, GreasePencil_use_curve_edit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_use_autolock_layers = {
	{(PropertyRNA *)&rna_GreasePencil_edit_line_color, (PropertyRNA *)&rna_GreasePencil_use_curve_edit,
	-1, "use_autolock_layers", 3, 0, 0, 0, 0, "Auto-Lock Layers",
	"Automatically lock all layers except the active one to avoid accidental changes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_autolock, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_autolock_layers_get, GreasePencil_use_autolock_layers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_GreasePencil_edit_line_color_default[4] = {
	0.6000000238f,
	0.6000000238f,
	0.6000000238f,
	0.5000000000f
};

FloatPropertyRNA rna_GreasePencil_edit_line_color = {
	{(PropertyRNA *)&rna_GreasePencil_ghost_before_range, (PropertyRNA *)&rna_GreasePencil_use_autolock_layers,
	-1, "edit_line_color", 3, 0, 0, 4, 0, "Edit Line Color",
	"Color for editing line",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, line_color), 5, NULL},
	NULL, NULL, GreasePencil_edit_line_color_get, GreasePencil_edit_line_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencil_edit_line_color_default
};

IntPropertyRNA rna_GreasePencil_ghost_before_range = {
	{(PropertyRNA *)&rna_GreasePencil_ghost_after_range, (PropertyRNA *)&rna_GreasePencil_edit_line_color,
	-1, "ghost_before_range", 1, 0, 0, 4, 0, "Frames Before",
	"Maximum number of frames to show before current frame (0 = don\'t show any frames before current)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gstep), 1, NULL},
	GreasePencil_ghost_before_range_get, GreasePencil_ghost_before_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 120, 0, 120, 1, 1, NULL
};

IntPropertyRNA rna_GreasePencil_ghost_after_range = {
	{(PropertyRNA *)&rna_GreasePencil_use_ghost_custom_colors, (PropertyRNA *)&rna_GreasePencil_ghost_before_range,
	-1, "ghost_after_range", 1, 0, 0, 4, 0, "Frames After",
	"Maximum number of frames to show after current frame (0 = don\'t show any frames after current)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gstep_next), 1, NULL},
	GreasePencil_ghost_after_range_get, GreasePencil_ghost_after_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 120, 0, 120, 1, 1, NULL
};

BoolPropertyRNA rna_GreasePencil_use_ghost_custom_colors = {
	{(PropertyRNA *)&rna_GreasePencil_before_color, (PropertyRNA *)&rna_GreasePencil_ghost_after_range,
	-1, "use_ghost_custom_colors", 1, 0, 0, 0, 0, "Use Custom Ghost Colors",
	"Use custom colors for ghost frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_ghost_custom_colors_get, GreasePencil_use_ghost_custom_colors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_GreasePencil_before_color_default[3] = {
	0.1450980008f,
	0.4196079969f,
	0.1372549981f
};

FloatPropertyRNA rna_GreasePencil_before_color = {
	{(PropertyRNA *)&rna_GreasePencil_after_color, (PropertyRNA *)&rna_GreasePencil_use_ghost_custom_colors,
	-1, "before_color", 1, 0, 0, 4, 0, "Before Color",
	"Base color for ghosts before the active frame",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gcolor_prev), 5, NULL},
	NULL, NULL, GreasePencil_before_color_get, GreasePencil_before_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencil_before_color_default
};

static float rna_GreasePencil_after_color_default[3] = {
	0.1254899949f,
	0.0823530033f,
	0.5294119716f
};

FloatPropertyRNA rna_GreasePencil_after_color = {
	{(PropertyRNA *)&rna_GreasePencil_use_ghosts_always, (PropertyRNA *)&rna_GreasePencil_before_color,
	-1, "after_color", 1, 0, 0, 4, 0, "After Color",
	"Base color for ghosts after the active frame",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 392101888, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, gcolor_next), 5, NULL},
	NULL, NULL, GreasePencil_after_color_get, GreasePencil_after_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencil_after_color_default
};

BoolPropertyRNA rna_GreasePencil_use_ghosts_always = {
	{(PropertyRNA *)&rna_GreasePencil_onion_mode, (PropertyRNA *)&rna_GreasePencil_after_color,
	-1, "use_ghosts_always", 1, 0, 0, 0, 0, "Always Show Ghosts",
	"Ghosts are shown in renders and animation playback. Useful for special effects (e.g. motion blur)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_ghosts_always_get, GreasePencil_use_ghosts_always_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_GreasePencil_onion_mode_items[4] = {
	{0, "ABSOLUTE", 0, "Frames", "Frames in absolute range of the scene frame"},
	{1, "RELATIVE", 0, "Keyframes", "Frames in relative range of the Grease Pencil keyframes"},
	{2, "SELECTED", 0, "Selected", "Only selected keyframes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencil_onion_mode = {
	{(PropertyRNA *)&rna_GreasePencil_onion_keyframe_type, (PropertyRNA *)&rna_GreasePencil_use_ghosts_always,
	-1, "onion_mode", 1, 0, 0, 4, 0, "Mode",
	"Mode to display frames",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, onion_mode), 0, NULL},
	GreasePencil_onion_mode_get, GreasePencil_onion_mode_set, NULL, NULL, NULL, rna_GreasePencil_onion_mode_items, 3, 0
};

static const EnumPropertyItem rna_GreasePencil_onion_keyframe_type_items[7] = {
	{-1, "ALL", 0, "All", "Include all Keyframe types"},
	{0, "KEYFRAME", 840, "Keyframe", "Normal keyframe - e.g. for key poses"},
	{2, "BREAKDOWN", 841, "Breakdown", "A breakdown pose - e.g. for transitions between key poses"},
	{4, "MOVING_HOLD", 844, "Moving Hold", "A keyframe that is part of a moving hold"},
	{1, "EXTREME", 842, "Extreme", "An \'extreme\' pose, or some other purpose as needed"},
	{3, "JITTER", 843, "Jitter", "A filler or baked keyframe for keying on ones, or some other purpose as needed"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencil_onion_keyframe_type = {
	{(PropertyRNA *)&rna_GreasePencil_use_onion_fade, (PropertyRNA *)&rna_GreasePencil_onion_mode,
	-1, "onion_keyframe_type", 1, 0, 0, 4, 0, "Filter by Type",
	"Type of keyframe (for filtering)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, onion_keytype), 1, NULL},
	GreasePencil_onion_keyframe_type_get, GreasePencil_onion_keyframe_type_set, NULL, NULL, NULL, rna_GreasePencil_onion_keyframe_type_items, 6, 0
};

BoolPropertyRNA rna_GreasePencil_use_onion_fade = {
	{(PropertyRNA *)&rna_GreasePencil_use_onion_loop, (PropertyRNA *)&rna_GreasePencil_onion_keyframe_type,
	-1, "use_onion_fade", 1, 0, 0, 0, 0, "Fade",
	"Display onion keyframes with a fade in color transparency",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_onion_fade_get, GreasePencil_use_onion_fade_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GreasePencil_use_onion_loop = {
	{(PropertyRNA *)&rna_GreasePencil_onion_factor, (PropertyRNA *)&rna_GreasePencil_use_onion_fade,
	-1, "use_onion_loop", 1, 0, 0, 0, 0, "Show Start Frame",
	"Display onion keyframes for looping animations",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_use_onion_loop_get, GreasePencil_use_onion_loop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_GreasePencil_onion_factor = {
	{(PropertyRNA *)&rna_GreasePencil_zdepth_offset, (PropertyRNA *)&rna_GreasePencil_use_onion_loop,
	-1, "onion_factor", 1, 0, 0, 4, 0, "Onion Opacity",
	"Change fade opacity of displayed onion frames",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, onion_factor), 5, NULL},
	GreasePencil_onion_factor_get, GreasePencil_onion_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_GreasePencil_zdepth_offset = {
	{(PropertyRNA *)&rna_GreasePencil_is_annotation, (PropertyRNA *)&rna_GreasePencil_onion_factor,
	-1, "zdepth_offset", 3, 0, 0, 4, 0, "Surface Offset",
	"Offset amount when drawing in surface mode",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPdata, zdepth_offset), 5, NULL},
	GreasePencil_zdepth_offset_get, GreasePencil_zdepth_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.1500000060f, NULL
};

BoolPropertyRNA rna_GreasePencil_is_annotation = {
	{(PropertyRNA *)&rna_GreasePencil_grid, (PropertyRNA *)&rna_GreasePencil_zdepth_offset,
	-1, "is_annotation", 2, 0, 0, 0, 0, "Annotation",
	"Current data-block is an annotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_is_annotation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GreasePencil_grid = {
	{NULL, (PropertyRNA *)&rna_GreasePencil_is_annotation,
	-1, "grid", 8650752, 0, 0, 0, 0, "Grid Settings",
	"Settings for grid and canvas in the 3D viewport",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencil_grid_get, NULL, NULL, NULL,&RNA_GreasePencilGrid
};

FunctionRNA rna_GreasePencil_clear_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all the Grease Pencil data",
	GreasePencil_clear_call,
	NULL
};

StructRNA RNA_GreasePencil = {
	{(ContainerRNA *)&RNA_GreasePencilLayers, (ContainerRNA *)&RNA_FModifierStepped,
	NULL,
	{(PropertyRNA *)&rna_GreasePencil_layers, (PropertyRNA *)&rna_GreasePencil_grid}},
	"GreasePencil", NULL, NULL, 519, NULL, "Grease Pencil",
	"Freehand annotation sketchbook",
	"*", 273,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_GreasePencil_clear_func, (FunctionRNA *)&rna_GreasePencil_clear_func}
};

/* Grease Pencil Layers */
CollectionPropertyRNA rna_GreasePencilLayers_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilLayers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilLayers_rna_properties_begin, GreasePencilLayers_rna_properties_next, GreasePencilLayers_rna_properties_end, GreasePencilLayers_rna_properties_get, NULL, NULL, GreasePencilLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilLayers_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active, (PropertyRNA *)&rna_GreasePencilLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_GreasePencilLayers_active = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active_index, (PropertyRNA *)&rna_GreasePencilLayers_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Layer",
	"Active grease pencil layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839750, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilLayers_active_get, GreasePencilLayers_active_set, NULL, NULL,&RNA_GPencilLayer
};

IntPropertyRNA rna_GreasePencilLayers_active_index = {
	{(PropertyRNA *)&rna_GreasePencilLayers_active_note, (PropertyRNA *)&rna_GreasePencilLayers_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Layer Index",
	"Index of active grease pencil layer",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839750, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilLayers_active_index_get, GreasePencilLayers_active_index_set, NULL, NULL, rna_GPencil_active_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

EnumPropertyRNA rna_GreasePencilLayers_active_note = {
	{NULL, (PropertyRNA *)&rna_GreasePencilLayers_active_index,
	-1, "active_note", 3, 0, 0, 0, 0, "Active Note",
	"Note/Layer to add annotation strokes to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilLayers_active_note_get, GreasePencilLayers_active_note_set, rna_GPencil_active_layer_itemf, NULL, NULL, DummyRNA_DEFAULT_items, 1, 0
};

StringPropertyRNA rna_GreasePencilLayers_new_name = {
	{(PropertyRNA *)&rna_GreasePencilLayers_new_set_active, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"Name of the layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, "GPencilLayer"
};

BoolPropertyRNA rna_GreasePencilLayers_new_set_active = {
	{(PropertyRNA *)&rna_GreasePencilLayers_new_layer, (PropertyRNA *)&rna_GreasePencilLayers_new_name,
	-1, "set_active", 3, 0, 0, 0, 0, "Set Active",
	"Set the newly created layer to the active layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_GreasePencilLayers_new_layer = {
	{NULL, (PropertyRNA *)&rna_GreasePencilLayers_new_set_active,
	-1, "layer", 8388608, 0, 2, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilLayers_new_func = {
	{(FunctionRNA *)&rna_GreasePencilLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_new_name, (PropertyRNA *)&rna_GreasePencilLayers_new_layer}},
	"new", 0, "Add a new grease pencil layer",
	GreasePencilLayers_new_call,
	(PropertyRNA *)&rna_GreasePencilLayers_new_layer
};

PointerPropertyRNA rna_GreasePencilLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilLayers_remove_func = {
	{(FunctionRNA *)&rna_GreasePencilLayers_move_func, (FunctionRNA *)&rna_GreasePencilLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_remove_layer, (PropertyRNA *)&rna_GreasePencilLayers_remove_layer}},
	"remove", 16, "Remove a grease pencil layer",
	GreasePencilLayers_remove_call,
	NULL
};

PointerPropertyRNA rna_GreasePencilLayers_move_layer = {
	{(PropertyRNA *)&rna_GreasePencilLayers_move_type, NULL,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"The layer to move",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayer
};

static const EnumPropertyItem rna_GreasePencilLayers_move_type_items[3] = {
	{-1, "UP", 0, "Up", ""},
	{1, "DOWN", 0, "Down", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencilLayers_move_type = {
	{NULL, (PropertyRNA *)&rna_GreasePencilLayers_move_layer,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Direction of movement",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_GreasePencilLayers_move_type_items, 2, 1
};

FunctionRNA rna_GreasePencilLayers_move_func = {
	{NULL, (FunctionRNA *)&rna_GreasePencilLayers_remove_func,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_move_layer, (PropertyRNA *)&rna_GreasePencilLayers_move_type}},
	"move", 16, "Move a grease pencil layer in the layer stack",
	GreasePencilLayers_move_call,
	NULL
};

StructRNA RNA_GreasePencilLayers = {
	{(ContainerRNA *)&RNA_GreasePencilGrid, (ContainerRNA *)&RNA_GreasePencil,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilLayers_rna_properties, (PropertyRNA *)&rna_GreasePencilLayers_active_note}},
	"GreasePencilLayers", NULL, NULL, 516, NULL, "Grease Pencil Layers",
	"Collection of grease pencil layers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GreasePencilLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GreasePencilLayers_new_func, (FunctionRNA *)&rna_GreasePencilLayers_move_func}
};

/* Grid and Canvas Settings */
CollectionPropertyRNA rna_GreasePencilGrid_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilGrid_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilGrid_rna_properties_begin, GreasePencilGrid_rna_properties_next, GreasePencilGrid_rna_properties_end, GreasePencilGrid_rna_properties_get, NULL, NULL, GreasePencilGrid_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilGrid_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilGrid_scale, (PropertyRNA *)&rna_GreasePencilGrid_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilGrid_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_GreasePencilGrid_scale_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_GreasePencilGrid_scale = {
	{(PropertyRNA *)&rna_GreasePencilGrid_color, (PropertyRNA *)&rna_GreasePencilGrid_rna_type,
	-1, "scale", 3, 0, 0, 4, 0, "Grid Scale",
	"Grid scale",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, scale), 5, NULL},
	NULL, NULL, GreasePencilGrid_scale_get, GreasePencilGrid_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, FLT_MAX, 0.0099999998f, FLT_MAX, 10.0f, 3, 1.0f, rna_GreasePencilGrid_scale_default
};

static float rna_GreasePencilGrid_color_default[3] = {
	0.5000000000f,
	0.5000000000f,
	0.5000000000f
};

FloatPropertyRNA rna_GreasePencilGrid_color = {
	{(PropertyRNA *)&rna_GreasePencilGrid_lines, (PropertyRNA *)&rna_GreasePencilGrid_scale,
	-1, "color", 3, 0, 0, 4, 0, "Grid Color",
	"Color for grid lines",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, color), 5, NULL},
	NULL, NULL, GreasePencilGrid_color_get, GreasePencilGrid_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GreasePencilGrid_color_default
};

IntPropertyRNA rna_GreasePencilGrid_lines = {
	{(PropertyRNA *)&rna_GreasePencilGrid_offset, (PropertyRNA *)&rna_GreasePencilGrid_color,
	-1, "lines", 3, 0, 0, 4, 0, "Grid Subdivisions",
	"Number of subdivisions in each side of symmetry line",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, lines), 0, NULL},
	GreasePencilGrid_lines_get, GreasePencilGrid_lines_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 4, NULL
};

static float rna_GreasePencilGrid_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GreasePencilGrid_offset = {
	{NULL, (PropertyRNA *)&rna_GreasePencilGrid_lines,
	-1, "offset", 3, 0, 0, 4, 0, "Offset",
	"Offset of the canvas",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPgrid, offset), 5, NULL},
	NULL, NULL, GreasePencilGrid_offset_get, GreasePencilGrid_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GreasePencilGrid_offset_default
};

StructRNA RNA_GreasePencilGrid = {
	{(ContainerRNA *)&RNA_GPencilLayer, (ContainerRNA *)&RNA_GreasePencilLayers,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilGrid_rna_properties, (PropertyRNA *)&rna_GreasePencilGrid_offset}},
	"GreasePencilGrid", NULL, NULL, 516, NULL, "Grid and Canvas Settings",
	"Settings for grid and canvas in 3D viewport",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GreasePencilGrid_rna_properties,
	NULL,
	&RNA_GreasePencil,
	NULL,
	rna_GreasePencilGrid_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Layer */
CollectionPropertyRNA rna_GPencilLayer_rna_properties = {
	{(PropertyRNA *)&rna_GPencilLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_rna_properties_begin, GPencilLayer_rna_properties_next, GPencilLayer_rna_properties_end, GPencilLayer_rna_properties_get, NULL, NULL, GPencilLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilLayer_rna_type = {
	{(PropertyRNA *)&rna_GPencilLayer_info, (PropertyRNA *)&rna_GPencilLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_GPencilLayer_info = {
	{(PropertyRNA *)&rna_GPencilLayer_frames, (PropertyRNA *)&rna_GPencilLayer_rna_type,
	-1, "info", 262145, 0, 0, 0, 0, "Info",
	"Layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	rna_GPencil_update, 391839749, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_info_get, GPencilLayer_info_length, GPencilLayer_info_set, NULL, NULL, NULL, NULL, 0, 128, ""
};

CollectionPropertyRNA rna_GPencilLayer_frames = {
	{(PropertyRNA *)&rna_GPencilLayer_mask_layers, (PropertyRNA *)&rna_GPencilLayer_info,
	-1, "frames", 0, 0, 0, 0, 0, "Frames",
	"Sketches for this layer on different frames",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_GPencilFrames},
	GPencilLayer_frames_begin, GPencilLayer_frames_next, GPencilLayer_frames_end, GPencilLayer_frames_get, NULL, GPencilLayer_frames_lookup_int, NULL, NULL, &RNA_GPencilFrame
};

CollectionPropertyRNA rna_GPencilLayer_mask_layers = {
	{(PropertyRNA *)&rna_GPencilLayer_active_frame, (PropertyRNA *)&rna_GPencilLayer_frames,
	-1, "mask_layers", 0, 0, 0, 0, 0, "Masks",
	"List of Masking Layers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_GreasePencilMaskLayers},
	GPencilLayer_mask_layers_begin, GPencilLayer_mask_layers_next, GPencilLayer_mask_layers_end, GPencilLayer_mask_layers_get, NULL, GPencilLayer_mask_layers_lookup_int, GPencilLayer_mask_layers_lookup_string, NULL, &RNA_GPencilLayerMask
};

PointerPropertyRNA rna_GPencilLayer_active_frame = {
	{(PropertyRNA *)&rna_GPencilLayer_opacity, (PropertyRNA *)&rna_GPencilLayer_mask_layers,
	-1, "active_frame", 8388608, 0, 0, 0, 0, "Active Frame",
	"Frame currently being displayed for this layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, rna_GPencilLayer_active_frame_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_active_frame_get, NULL, NULL, NULL,&RNA_GPencilFrame
};

FloatPropertyRNA rna_GPencilLayer_opacity = {
	{(PropertyRNA *)&rna_GPencilLayer_channel_color, (PropertyRNA *)&rna_GPencilLayer_active_frame,
	-1, "opacity", 3, 0, 0, 4, 0, "Opacity",
	"Layer Opacity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, opacity), 5, NULL},
	GPencilLayer_opacity_get, GPencilLayer_opacity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_GPencilLayer_channel_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_channel_color = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_opacity, (PropertyRNA *)&rna_GPencilLayer_opacity,
	-1, "channel_color", 1, 0, 0, 4, 0, "Custom Channel Color",
	"Custom color for animation channel in Dopesheet",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, color), 5, NULL},
	NULL, NULL, GPencilLayer_channel_color_get, GPencilLayer_channel_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_channel_color_default
};

FloatPropertyRNA rna_GPencilLayer_annotation_opacity = {
	{(PropertyRNA *)&rna_GPencilLayer_color, (PropertyRNA *)&rna_GPencilLayer_channel_color,
	-1, "annotation_opacity", 1, 0, 0, 4, 0, "Opacity",
	"Annotation Layer Opacity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, opacity), 5, NULL},
	GPencilLayer_annotation_opacity_get, GPencilLayer_annotation_opacity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_GPencilLayer_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_color = {
	{(PropertyRNA *)&rna_GPencilLayer_thickness, (PropertyRNA *)&rna_GPencilLayer_annotation_opacity,
	-1, "color", 1, 0, 0, 4, 0, "Color",
	"Color for all strokes in this layer",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, color), 5, NULL},
	NULL, NULL, GPencilLayer_color_get, GPencilLayer_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_color_default
};

IntPropertyRNA rna_GPencilLayer_thickness = {
	{(PropertyRNA *)&rna_GPencilLayer_tint_color, (PropertyRNA *)&rna_GPencilLayer_color,
	-1, "thickness", 1, 0, 0, 4, 0, "Thickness",
	"Thickness of annotation strokes",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, thickness), 1, NULL},
	GPencilLayer_thickness_get, GPencilLayer_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 10, 1, 0, NULL
};

static float rna_GPencilLayer_tint_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_tint_color = {
	{(PropertyRNA *)&rna_GPencilLayer_tint_factor, (PropertyRNA *)&rna_GPencilLayer_thickness,
	-1, "tint_color", 3, 0, 0, 4, 0, "Tint Color",
	"Color for tinting stroke colors",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, tintcolor), 5, NULL},
	NULL, NULL, GPencilLayer_tint_color_get, GPencilLayer_tint_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_tint_color_default
};

FloatPropertyRNA rna_GPencilLayer_tint_factor = {
	{(PropertyRNA *)&rna_GPencilLayer_vertex_paint_opacity, (PropertyRNA *)&rna_GPencilLayer_tint_color,
	-1, "tint_factor", 3, 0, 0, 4, 0, "Tint Factor",
	"Factor of tinting color",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, tintcolor[3]), 5, NULL},
	GPencilLayer_tint_factor_get, GPencilLayer_tint_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilLayer_vertex_paint_opacity = {
	{(PropertyRNA *)&rna_GPencilLayer_line_change, (PropertyRNA *)&rna_GPencilLayer_tint_factor,
	-1, "vertex_paint_opacity", 3, 0, 0, 4, 0, "Vertex Paint Opacity",
	"Vertex Paint mix factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, vertex_paint_opacity), 5, NULL},
	GPencilLayer_vertex_paint_opacity_get, GPencilLayer_vertex_paint_opacity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_GPencilLayer_line_change = {
	{(PropertyRNA *)&rna_GPencilLayer_use_onion_skinning, (PropertyRNA *)&rna_GPencilLayer_vertex_paint_opacity,
	-1, "line_change", 3, 0, 0, 4, 0, "Thickness Change",
	"Thickness change to apply to current strokes (in pixels)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, line_change), 1, NULL},
	GPencilLayer_line_change_get, GPencilLayer_line_change_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -100, 100, -300, 300, 1, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_use_onion_skinning = {
	{(PropertyRNA *)&rna_GPencilLayer_use_annotation_onion_skinning, (PropertyRNA *)&rna_GPencilLayer_line_change,
	-1, "use_onion_skinning", 3, 0, 0, 0, 0, "Onion Skinning",
	"Display onion skins before and after the current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_use_onion_skinning_get, GPencilLayer_use_onion_skinning_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_use_annotation_onion_skinning = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_range, (PropertyRNA *)&rna_GPencilLayer_use_onion_skinning,
	-1, "use_annotation_onion_skinning", 1, 0, 0, 0, 0, "Onion Skinning",
	"Display annotation onion skins before and after the current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_use_annotation_onion_skinning_get, GPencilLayer_use_annotation_onion_skinning_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_GPencilLayer_annotation_onion_before_range = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_range, (PropertyRNA *)&rna_GPencilLayer_use_annotation_onion_skinning,
	-1, "annotation_onion_before_range", 1, 0, 0, 4, 0, "Frames Before",
	"Maximum number of frames to show before current frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gstep), 1, NULL},
	GPencilLayer_annotation_onion_before_range_get, GPencilLayer_annotation_onion_before_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, 120, -1, 120, 1, 0, NULL
};

IntPropertyRNA rna_GPencilLayer_annotation_onion_after_range = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_color, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_range,
	-1, "annotation_onion_after_range", 1, 0, 0, 4, 0, "Frames After",
	"Maximum number of frames to show after current frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gstep_next), 1, NULL},
	GPencilLayer_annotation_onion_after_range_get, GPencilLayer_annotation_onion_after_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, 120, -1, 120, 1, 0, NULL
};

static float rna_GPencilLayer_annotation_onion_before_color_default[3] = {
	0.3019999862f,
	0.8510000110f,
	0.3019999862f
};

FloatPropertyRNA rna_GPencilLayer_annotation_onion_before_color = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_color, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_range,
	-1, "annotation_onion_before_color", 1, 0, 0, 4, 0, "Before Color",
	"Base color for ghosts before the active frame",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gcolor_prev), 5, NULL},
	NULL, NULL, GPencilLayer_annotation_onion_before_color_get, GPencilLayer_annotation_onion_before_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_annotation_onion_before_color_default
};

static float rna_GPencilLayer_annotation_onion_after_color_default[3] = {
	0.2500000000f,
	0.1000000015f,
	1.0f
};

FloatPropertyRNA rna_GPencilLayer_annotation_onion_after_color = {
	{(PropertyRNA *)&rna_GPencilLayer_pass_index, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_before_color,
	-1, "annotation_onion_after_color", 1, 0, 0, 4, 0, "After Color",
	"Base color for ghosts after the active frame",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, gcolor_next), 5, NULL},
	NULL, NULL, GPencilLayer_annotation_onion_after_color_get, GPencilLayer_annotation_onion_after_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_annotation_onion_after_color_default
};

IntPropertyRNA rna_GPencilLayer_pass_index = {
	{(PropertyRNA *)&rna_GPencilLayer_viewlayer_render, (PropertyRNA *)&rna_GPencilLayer_annotation_onion_after_color,
	-1, "pass_index", 3, 0, 0, 4, 0, "Pass Index",
	"Index number for the \"Layer Index\" pass",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, pass_index), 1, NULL},
	GPencilLayer_pass_index_get, GPencilLayer_pass_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

StringPropertyRNA rna_GPencilLayer_viewlayer_render = {
	{(PropertyRNA *)&rna_GPencilLayer_use_viewlayer_masks, (PropertyRNA *)&rna_GPencilLayer_pass_index,
	-1, "viewlayer_render", 262145, 0, 0, 0, 0, "ViewLayer",
	"Only include Layer in this View Layer render output (leave blank to include always)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_viewlayer_render_get, GPencilLayer_viewlayer_render_length, GPencilLayer_viewlayer_render_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_GPencilLayer_use_viewlayer_masks = {
	{(PropertyRNA *)&rna_GPencilLayer_blend_mode, (PropertyRNA *)&rna_GPencilLayer_viewlayer_render,
	-1, "use_viewlayer_masks", 3, 0, 0, 0, 0, "Use Masks in Render",
	"Include the mask layers when rendering the view-layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_use_viewlayer_masks_get, GPencilLayer_use_viewlayer_masks_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_GPencilLayer_blend_mode_items[7] = {
	{0, "REGULAR", 0, "Regular", ""},
	{1, "HARDLIGHT", 0, "Hard Light", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "MULTIPLY", 0, "Multiply", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilLayer_blend_mode = {
	{(PropertyRNA *)&rna_GPencilLayer_location, (PropertyRNA *)&rna_GPencilLayer_use_viewlayer_masks,
	-1, "blend_mode", 3, 0, 0, 4, 0, "Blend Mode",
	"Blend mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, blend_mode), 0, NULL},
	GPencilLayer_blend_mode_get, GPencilLayer_blend_mode_set, NULL, NULL, NULL, rna_GPencilLayer_blend_mode_items, 6, 0
};

static float rna_GPencilLayer_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_location = {
	{(PropertyRNA *)&rna_GPencilLayer_rotation, (PropertyRNA *)&rna_GPencilLayer_blend_mode,
	-1, "location", 3, 0, 0, 4, 0, "Location",
	"Values for change location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_GpencilLayerMatrix_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, location), 5, NULL},
	NULL, NULL, GPencilLayer_location_get, GPencilLayer_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilLayer_location_default
};

static float rna_GPencilLayer_rotation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_rotation = {
	{(PropertyRNA *)&rna_GPencilLayer_scale, (PropertyRNA *)&rna_GPencilLayer_location,
	-1, "rotation", 3, 0, 0, 4, 0, "Rotation",
	"Values for changes in rotation",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_GpencilLayerMatrix_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, rotation), 5, NULL},
	NULL, NULL, GPencilLayer_rotation_get, GPencilLayer_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilLayer_rotation_default
};

static float rna_GPencilLayer_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_GPencilLayer_scale = {
	{(PropertyRNA *)&rna_GPencilLayer_matrix_layer, (PropertyRNA *)&rna_GPencilLayer_rotation,
	-1, "scale", 3, 0, 0, 4, 0, "Scale",
	"Values for changes in scale",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GpencilLayerMatrix_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, scale), 5, NULL},
	NULL, NULL, GPencilLayer_scale_get, GPencilLayer_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 1.0f, rna_GPencilLayer_scale_default
};

static float rna_GPencilLayer_matrix_layer_default[16] = {
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

FloatPropertyRNA rna_GPencilLayer_matrix_layer = {
	{(PropertyRNA *)&rna_GPencilLayer_matrix_inverse_layer, (PropertyRNA *)&rna_GPencilLayer_scale,
	-1, "matrix_layer", 2, 2, 0, 4, 0, "Matrix Layer",
	"Local Layer transformation matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, layer_mat), 5, NULL},
	NULL, NULL, GPencilLayer_matrix_layer_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilLayer_matrix_layer_default
};

static float rna_GPencilLayer_matrix_inverse_layer_default[16] = {
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

FloatPropertyRNA rna_GPencilLayer_matrix_inverse_layer = {
	{(PropertyRNA *)&rna_GPencilLayer_hide, (PropertyRNA *)&rna_GPencilLayer_matrix_layer,
	-1, "matrix_inverse_layer", 2, 2, 0, 4, 0, "Matrix Layer Inverse",
	"Local Layer transformation inverse matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, layer_invmat), 5, NULL},
	NULL, NULL, GPencilLayer_matrix_inverse_layer_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilLayer_matrix_inverse_layer_default
};

BoolPropertyRNA rna_GPencilLayer_hide = {
	{(PropertyRNA *)&rna_GPencilLayer_annotation_hide, (PropertyRNA *)&rna_GPencilLayer_matrix_inverse_layer,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set layer Visibility",
	254, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_hide_get, GPencilLayer_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_annotation_hide = {
	{(PropertyRNA *)&rna_GPencilLayer_lock, (PropertyRNA *)&rna_GPencilLayer_hide,
	-1, "annotation_hide", 4353, 0, 0, 0, 0, "Hide",
	"Set annotation Visibility",
	254, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_annotation_hide_get, GPencilLayer_annotation_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_lock = {
	{(PropertyRNA *)&rna_GPencilLayer_lock_frame, (PropertyRNA *)&rna_GPencilLayer_annotation_hide,
	-1, "lock", 4099, 0, 0, 0, 0, "Locked",
	"Protect layer from further editing and/or frame changes",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_lock_get, GPencilLayer_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_lock_frame = {
	{(PropertyRNA *)&rna_GPencilLayer_lock_material, (PropertyRNA *)&rna_GPencilLayer_lock,
	-1, "lock_frame", 4097, 0, 0, 0, 0, "Frame Locked",
	"Lock current frame displayed by layer",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_lock_frame_get, GPencilLayer_lock_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_lock_material = {
	{(PropertyRNA *)&rna_GPencilLayer_use_mask_layer, (PropertyRNA *)&rna_GPencilLayer_lock_frame,
	-1, "lock_material", 1, 0, 0, 0, 0, "Disallow Locked Materials Editing",
	"Avoids editing locked materials in the layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_lock_material_get, GPencilLayer_lock_material_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_use_mask_layer = {
	{(PropertyRNA *)&rna_GPencilLayer_use_lights, (PropertyRNA *)&rna_GPencilLayer_lock_material,
	-1, "use_mask_layer", 3, 0, 0, 0, 0, "Use Mask",
	"The visibility of drawings on this layer is affected by the layers in its masks list",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_use_mask_layer_get, GPencilLayer_use_mask_layer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_use_lights = {
	{(PropertyRNA *)&rna_GPencilLayer_use_solo_mode, (PropertyRNA *)&rna_GPencilLayer_use_mask_layer,
	-1, "use_lights", 3, 0, 0, 0, 0, "Use Lights",
	"Enable the use of lights on stroke and fill materials",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_use_lights_get, GPencilLayer_use_lights_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_use_solo_mode = {
	{(PropertyRNA *)&rna_GPencilLayer_is_ruler, (PropertyRNA *)&rna_GPencilLayer_use_lights,
	-1, "use_solo_mode", 3, 0, 0, 0, 0, "Solo Mode",
	"In Draw Mode only display layers with keyframe in current frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_use_solo_mode_get, GPencilLayer_use_solo_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_is_ruler = {
	{(PropertyRNA *)&rna_GPencilLayer_select, (PropertyRNA *)&rna_GPencilLayer_use_solo_mode,
	-1, "is_ruler", 2, 0, 0, 0, 0, "Ruler",
	"This is a special ruler layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_is_ruler_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_select = {
	{(PropertyRNA *)&rna_GPencilLayer_show_points, (PropertyRNA *)&rna_GPencilLayer_is_ruler,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Layer is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839750, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_select_get, GPencilLayer_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_show_points = {
	{(PropertyRNA *)&rna_GPencilLayer_show_in_front, (PropertyRNA *)&rna_GPencilLayer_select,
	-1, "show_points", 3, 0, 0, 0, 0, "Show Points",
	"Show the points which make up the strokes (for debugging purposes)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_show_points_get, GPencilLayer_show_points_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayer_show_in_front = {
	{(PropertyRNA *)&rna_GPencilLayer_parent, (PropertyRNA *)&rna_GPencilLayer_show_points,
	-1, "show_in_front", 3, 0, 0, 0, 0, "In Front",
	"Make the layer display in front of objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_show_in_front_get, GPencilLayer_show_in_front_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GPencilLayer_parent = {
	{(PropertyRNA *)&rna_GPencilLayer_parent_type, (PropertyRNA *)&rna_GPencilLayer_show_in_front,
	-1, "parent", 9437313, 1, 0, 0, 0, "Parent",
	"Parent object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_dependency_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_parent_get, GPencilLayer_parent_set, NULL, NULL,&RNA_Object
};

static const EnumPropertyItem rna_GPencilLayer_parent_type_items[4] = {
	{0, "OBJECT", 0, "Object", "The layer is parented to an object"},
	{4, "ARMATURE", 0, "Armature", ""},
	{7, "BONE", 0, "Bone", "The layer is parented to a bone"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilLayer_parent_type = {
	{(PropertyRNA *)&rna_GPencilLayer_parent_bone, (PropertyRNA *)&rna_GPencilLayer_parent,
	-1, "parent_type", 3, 0, 0, 0, 0, "Parent Type",
	"Type of parent relation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_dependency_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_parent_type_get, GPencilLayer_parent_type_set, rna_Object_parent_type_itemf, NULL, NULL, rna_GPencilLayer_parent_type_items, 3, 0
};

StringPropertyRNA rna_GPencilLayer_parent_bone = {
	{(PropertyRNA *)&rna_GPencilLayer_matrix_inverse, (PropertyRNA *)&rna_GPencilLayer_parent_type,
	-1, "parent_bone", 262145, 0, 0, 0, 0, "Parent Bone",
	"Name of parent bone in case of a bone parenting relation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_GPencil_dependency_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_parent_bone_get, GPencilLayer_parent_bone_length, GPencilLayer_parent_bone_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static float rna_GPencilLayer_matrix_inverse_default[16] = {
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

FloatPropertyRNA rna_GPencilLayer_matrix_inverse = {
	{(PropertyRNA *)&rna_GPencilLayer_is_parented, (PropertyRNA *)&rna_GPencilLayer_parent_bone,
	-1, "matrix_inverse", 1, 0, 0, 4, 0, "Inverse Matrix",
	"Parent inverse transformation matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDlayer, inverse), 5, NULL},
	NULL, NULL, GPencilLayer_matrix_inverse_get, GPencilLayer_matrix_inverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilLayer_matrix_inverse_default
};

BoolPropertyRNA rna_GPencilLayer_is_parented = {
	{NULL, (PropertyRNA *)&rna_GPencilLayer_matrix_inverse,
	-1, "is_parented", 2, 0, 0, 0, 0, "Is Parented",
	"True when the layer parent object is set",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayer_is_parented_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_GPencilLayer_clear_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all the grease pencil layer data",
	GPencilLayer_clear_call,
	NULL
};

StructRNA RNA_GPencilLayer = {
	{(ContainerRNA *)&RNA_GPencilFrames, (ContainerRNA *)&RNA_GreasePencilGrid,
	NULL,
	{(PropertyRNA *)&rna_GPencilLayer_rna_properties, (PropertyRNA *)&rna_GPencilLayer_is_parented}},
	"GPencilLayer", NULL, NULL, 516, NULL, "Grease Pencil Layer",
	"Collection of related sketches",
	"*", 17,
	(PropertyRNA *)&rna_GPencilLayer_info, (PropertyRNA *)&rna_GPencilLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_GPencilLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilLayer_clear_func, (FunctionRNA *)&rna_GPencilLayer_clear_func}
};

/* Grease Pencil Frames */
CollectionPropertyRNA rna_GPencilFrames_rna_properties = {
	{(PropertyRNA *)&rna_GPencilFrames_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilFrames_rna_properties_begin, GPencilFrames_rna_properties_next, GPencilFrames_rna_properties_end, GPencilFrames_rna_properties_get, NULL, NULL, GPencilFrames_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilFrames_rna_type = {
	{NULL, (PropertyRNA *)&rna_GPencilFrames_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilFrames_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GPencilFrames_new_frame_number = {
	{(PropertyRNA *)&rna_GPencilFrames_new_active, NULL,
	-1, "frame_number", 3, 0, 1, 0, 0, "Frame Number",
	"The frame on which this sketch appears",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 1, NULL
};

BoolPropertyRNA rna_GPencilFrames_new_active = {
	{(PropertyRNA *)&rna_GPencilFrames_new_frame, (PropertyRNA *)&rna_GPencilFrames_new_frame_number,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GPencilFrames_new_frame = {
	{NULL, (PropertyRNA *)&rna_GPencilFrames_new_active,
	-1, "frame", 8388608, 0, 2, 0, 0, "",
	"The newly created frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_new_func = {
	{(FunctionRNA *)&rna_GPencilFrames_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_new_frame_number, (PropertyRNA *)&rna_GPencilFrames_new_frame}},
	"new", 16, "Add a new grease pencil frame",
	GPencilFrames_new_call,
	(PropertyRNA *)&rna_GPencilFrames_new_frame
};

PointerPropertyRNA rna_GPencilFrames_remove_frame = {
	{NULL, NULL,
	-1, "frame", 262144, 0, 5, 0, 0, "Frame",
	"The frame to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_remove_func = {
	{(FunctionRNA *)&rna_GPencilFrames_copy_func, (FunctionRNA *)&rna_GPencilFrames_new_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_remove_frame, (PropertyRNA *)&rna_GPencilFrames_remove_frame}},
	"remove", 16, "Remove a grease pencil frame",
	GPencilFrames_remove_call,
	NULL
};

PointerPropertyRNA rna_GPencilFrames_copy_source = {
	{(PropertyRNA *)&rna_GPencilFrames_copy_copy, NULL,
	-1, "source", 8650752, 0, 1, 0, 0, "Source",
	"The source frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

PointerPropertyRNA rna_GPencilFrames_copy_copy = {
	{NULL, (PropertyRNA *)&rna_GPencilFrames_copy_source,
	-1, "copy", 8388608, 0, 2, 0, 0, "",
	"The newly copied frame",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilFrame
};

FunctionRNA rna_GPencilFrames_copy_func = {
	{NULL, (FunctionRNA *)&rna_GPencilFrames_remove_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_copy_source, (PropertyRNA *)&rna_GPencilFrames_copy_copy}},
	"copy", 0, "Copy a grease pencil frame",
	GPencilFrames_copy_call,
	(PropertyRNA *)&rna_GPencilFrames_copy_copy
};

StructRNA RNA_GPencilFrames = {
	{(ContainerRNA *)&RNA_GreasePencilMaskLayers, (ContainerRNA *)&RNA_GPencilLayer,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrames_rna_properties, (PropertyRNA *)&rna_GPencilFrames_rna_type}},
	"GPencilFrames", NULL, NULL, 516, NULL, "Grease Pencil Frames",
	"Collection of grease pencil frames",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilFrames_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilFrames_new_func, (FunctionRNA *)&rna_GPencilFrames_copy_func}
};

/* Grease Pencil Mask Layers */
CollectionPropertyRNA rna_GreasePencilMaskLayers_rna_properties = {
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilMaskLayers_rna_properties_begin, GreasePencilMaskLayers_rna_properties_next, GreasePencilMaskLayers_rna_properties_end, GreasePencilMaskLayers_rna_properties_get, NULL, NULL, GreasePencilMaskLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GreasePencilMaskLayers_rna_type = {
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_active_mask_index, (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilMaskLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GreasePencilMaskLayers_active_mask_index = {
	{NULL, (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_type,
	-1, "active_mask_index", 1, 0, 0, 0, 0, "Active Layer Mask Index",
	"Active index in layer mask array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GreasePencilMaskLayers_active_mask_index_get, GreasePencilMaskLayers_active_mask_index_set, NULL, NULL, rna_GPencil_active_mask_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_GreasePencilMaskLayers_add_layer = {
	{NULL, NULL,
	-1, "layer", 262144, 0, 5, 0, 0, "",
	"Layer to add as mask",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayer
};

FunctionRNA rna_GreasePencilMaskLayers_add_func = {
	{(FunctionRNA *)&rna_GreasePencilMaskLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_add_layer, (PropertyRNA *)&rna_GreasePencilMaskLayers_add_layer}},
	"add", 0, "Add a layer to mask list",
	GreasePencilMaskLayers_add_call,
	NULL
};

PointerPropertyRNA rna_GreasePencilMaskLayers_remove_mask = {
	{NULL, NULL,
	-1, "mask", 262144, 0, 5, 0, 0, "",
	"Mask to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilLayerMask
};

FunctionRNA rna_GreasePencilMaskLayers_remove_func = {
	{NULL, (FunctionRNA *)&rna_GreasePencilMaskLayers_add_func,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_remove_mask, (PropertyRNA *)&rna_GreasePencilMaskLayers_remove_mask}},
	"remove", 16, "Remove a layer from mask list",
	GreasePencilMaskLayers_remove_call,
	NULL
};

StructRNA RNA_GreasePencilMaskLayers = {
	{(ContainerRNA *)&RNA_GPencilLayerMask, (ContainerRNA *)&RNA_GPencilFrames,
	NULL,
	{(PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties, (PropertyRNA *)&rna_GreasePencilMaskLayers_active_mask_index}},
	"GreasePencilMaskLayers", NULL, NULL, 516, NULL, "Grease Pencil Mask Layers",
	"Collection of grease pencil masking layers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GreasePencilMaskLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GreasePencilMaskLayers_add_func, (FunctionRNA *)&rna_GreasePencilMaskLayers_remove_func}
};

/* Grease Pencil Masking Layers */
CollectionPropertyRNA rna_GPencilLayerMask_rna_properties = {
	{(PropertyRNA *)&rna_GPencilLayerMask_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayerMask_rna_properties_begin, GPencilLayerMask_rna_properties_next, GPencilLayerMask_rna_properties_end, GPencilLayerMask_rna_properties_get, NULL, NULL, GPencilLayerMask_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilLayerMask_rna_type = {
	{(PropertyRNA *)&rna_GPencilLayerMask_name, (PropertyRNA *)&rna_GPencilLayerMask_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayerMask_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_GPencilLayerMask_name = {
	{(PropertyRNA *)&rna_GPencilLayerMask_hide, (PropertyRNA *)&rna_GPencilLayerMask_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Layer",
	"Mask layer name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	NULL, 391839749, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayerMask_name_get, GPencilLayerMask_name_length, GPencilLayerMask_name_set, NULL, NULL, NULL, NULL, 0, 128, ""
};

BoolPropertyRNA rna_GPencilLayerMask_hide = {
	{(PropertyRNA *)&rna_GPencilLayerMask_invert, (PropertyRNA *)&rna_GPencilLayerMask_name,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set mask Visibility",
	254, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayerMask_hide_get, GPencilLayerMask_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilLayerMask_invert = {
	{NULL, (PropertyRNA *)&rna_GPencilLayerMask_hide,
	-1, "invert", 4355, 0, 0, 0, 0, "Invert",
	"Invert mask",
	589, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilLayerMask_invert_get, GPencilLayerMask_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_GPencilLayerMask = {
	{(ContainerRNA *)&RNA_GPencilFrame, (ContainerRNA *)&RNA_GreasePencilMaskLayers,
	NULL,
	{(PropertyRNA *)&rna_GPencilLayerMask_rna_properties, (PropertyRNA *)&rna_GPencilLayerMask_invert}},
	"GPencilLayerMask", NULL, NULL, 516, NULL, "Grease Pencil Masking Layers",
	"List of Mask Layers",
	"*", 17,
	(PropertyRNA *)&rna_GPencilLayerMask_name, (PropertyRNA *)&rna_GPencilLayerMask_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_GPencilLayerMask_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Frame */
CollectionPropertyRNA rna_GPencilFrame_rna_properties = {
	{(PropertyRNA *)&rna_GPencilFrame_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilFrame_rna_properties_begin, GPencilFrame_rna_properties_next, GPencilFrame_rna_properties_end, GPencilFrame_rna_properties_get, NULL, NULL, GPencilFrame_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilFrame_rna_type = {
	{(PropertyRNA *)&rna_GPencilFrame_strokes, (PropertyRNA *)&rna_GPencilFrame_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilFrame_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilFrame_strokes = {
	{(PropertyRNA *)&rna_GPencilFrame_frame_number, (PropertyRNA *)&rna_GPencilFrame_rna_type,
	-1, "strokes", 0, 0, 0, 0, 0, "Strokes",
	"Freehand curves defining the sketch on this frame",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_GPencilStrokes},
	GPencilFrame_strokes_begin, GPencilFrame_strokes_next, GPencilFrame_strokes_end, GPencilFrame_strokes_get, NULL, GPencilFrame_strokes_lookup_int, NULL, NULL, &RNA_GPencilStroke
};

IntPropertyRNA rna_GPencilFrame_frame_number = {
	{(PropertyRNA *)&rna_GPencilFrame_keyframe_type, (PropertyRNA *)&rna_GPencilFrame_strokes,
	-1, "frame_number", 3, 0, 0, 4, 0, "Frame Number",
	"The frame on which this sketch appears",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDframe, framenum), 0, NULL},
	GPencilFrame_frame_number_get, GPencilFrame_frame_number_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 0, NULL
};

static const EnumPropertyItem rna_GPencilFrame_keyframe_type_items[6] = {
	{0, "KEYFRAME", 840, "Keyframe", "Normal keyframe - e.g. for key poses"},
	{2, "BREAKDOWN", 841, "Breakdown", "A breakdown pose - e.g. for transitions between key poses"},
	{4, "MOVING_HOLD", 844, "Moving Hold", "A keyframe that is part of a moving hold"},
	{1, "EXTREME", 842, "Extreme", "An \'extreme\' pose, or some other purpose as needed"},
	{3, "JITTER", 843, "Jitter", "A filler or baked keyframe for keying on ones, or some other purpose as needed"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilFrame_keyframe_type = {
	{(PropertyRNA *)&rna_GPencilFrame_is_edited, (PropertyRNA *)&rna_GPencilFrame_frame_number,
	-1, "keyframe_type", 1, 0, 0, 4, 0, "Keyframe Type",
	"Type of keyframe",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDframe, key_type), 1, NULL},
	GPencilFrame_keyframe_type_get, GPencilFrame_keyframe_type_set, NULL, NULL, NULL, rna_GPencilFrame_keyframe_type_items, 5, 0
};

BoolPropertyRNA rna_GPencilFrame_is_edited = {
	{(PropertyRNA *)&rna_GPencilFrame_select, (PropertyRNA *)&rna_GPencilFrame_keyframe_type,
	-1, "is_edited", 3, 0, 0, 0, 0, "Paint Lock",
	"Frame is being edited (painted on)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilFrame_is_edited_get, GPencilFrame_is_edited_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilFrame_select = {
	{NULL, (PropertyRNA *)&rna_GPencilFrame_is_edited,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Frame is selected for editing in the Dope Sheet",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilFrame_select_get, GPencilFrame_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_GPencilFrame_clear_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all the grease pencil frame data",
	GPencilFrame_clear_call,
	NULL
};

StructRNA RNA_GPencilFrame = {
	{(ContainerRNA *)&RNA_GPencilStrokes, (ContainerRNA *)&RNA_GPencilLayerMask,
	NULL,
	{(PropertyRNA *)&rna_GPencilFrame_rna_properties, (PropertyRNA *)&rna_GPencilFrame_select}},
	"GPencilFrame", NULL, NULL, 516, NULL, "Grease Pencil Frame",
	"Collection of related sketches on a particular frame",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilFrame_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilFrame_clear_func, (FunctionRNA *)&rna_GPencilFrame_clear_func}
};

/* Grease Pencil Frames */
CollectionPropertyRNA rna_GPencilStrokes_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokes_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokes_rna_properties_begin, GPencilStrokes_rna_properties_next, GPencilStrokes_rna_properties_end, GPencilStrokes_rna_properties_get, NULL, NULL, GPencilStrokes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokes_rna_type = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_GPencilStrokes_new_stroke = {
	{NULL, NULL,
	-1, "stroke", 8388608, 0, 2, 0, 0, "",
	"The newly created stroke",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_new_func = {
	{(FunctionRNA *)&rna_GPencilStrokes_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_new_stroke, (PropertyRNA *)&rna_GPencilStrokes_new_stroke}},
	"new", 0, "Add a new grease pencil stroke",
	GPencilStrokes_new_call,
	(PropertyRNA *)&rna_GPencilStrokes_new_stroke
};

PointerPropertyRNA rna_GPencilStrokes_remove_stroke = {
	{NULL, NULL,
	-1, "stroke", 262144, 0, 5, 0, 0, "Stroke",
	"The stroke to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_remove_func = {
	{(FunctionRNA *)&rna_GPencilStrokes_close_func, (FunctionRNA *)&rna_GPencilStrokes_new_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_remove_stroke, (PropertyRNA *)&rna_GPencilStrokes_remove_stroke}},
	"remove", 2064, "Remove a grease pencil stroke",
	GPencilStrokes_remove_call,
	NULL
};

PointerPropertyRNA rna_GPencilStrokes_close_stroke = {
	{NULL, NULL,
	-1, "stroke", 262144, 0, 5, 0, 0, "Stroke",
	"The stroke to close",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GPencilStroke
};

FunctionRNA rna_GPencilStrokes_close_func = {
	{NULL, (FunctionRNA *)&rna_GPencilStrokes_remove_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_close_stroke, (PropertyRNA *)&rna_GPencilStrokes_close_stroke}},
	"close", 2064, "Close a grease pencil stroke adding geometry",
	GPencilStrokes_close_call,
	NULL
};

StructRNA RNA_GPencilStrokes = {
	{(ContainerRNA *)&RNA_GPencilStroke, (ContainerRNA *)&RNA_GPencilFrame,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokes_rna_properties, (PropertyRNA *)&rna_GPencilStrokes_rna_type}},
	"GPencilStrokes", NULL, NULL, 516, NULL, "Grease Pencil Frames",
	"Collection of grease pencil stroke",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStrokes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilStrokes_new_func, (FunctionRNA *)&rna_GPencilStrokes_close_func}
};

/* Grease Pencil Stroke */
CollectionPropertyRNA rna_GPencilStroke_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStroke_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_rna_properties_begin, GPencilStroke_rna_properties_next, GPencilStroke_rna_properties_end, GPencilStroke_rna_properties_get, NULL, NULL, GPencilStroke_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStroke_rna_type = {
	{(PropertyRNA *)&rna_GPencilStroke_points, (PropertyRNA *)&rna_GPencilStroke_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilStroke_points = {
	{(PropertyRNA *)&rna_GPencilStroke_triangles, (PropertyRNA *)&rna_GPencilStroke_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Stroke Points",
	"Stroke data points",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_GPencilStrokePoints},
	GPencilStroke_points_begin, GPencilStroke_points_next, GPencilStroke_points_end, GPencilStroke_points_get, GPencilStroke_points_length, GPencilStroke_points_lookup_int, NULL, NULL, &RNA_GPencilStrokePoint
};

CollectionPropertyRNA rna_GPencilStroke_triangles = {
	{(PropertyRNA *)&rna_GPencilStroke_edit_curve, (PropertyRNA *)&rna_GPencilStroke_points,
	-1, "triangles", 0, 0, 0, 8, 0, "Triangles",
	"Triangulation data for HQ fill",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_triangles_begin, GPencilStroke_triangles_next, GPencilStroke_triangles_end, GPencilStroke_triangles_get, GPencilStroke_triangles_length, GPencilStroke_triangles_lookup_int, NULL, NULL, &RNA_GPencilTriangle
};

PointerPropertyRNA rna_GPencilStroke_edit_curve = {
	{(PropertyRNA *)&rna_GPencilStroke_material_index, (PropertyRNA *)&rna_GPencilStroke_triangles,
	-1, "edit_curve", 8388608, 0, 0, 0, 0, "Edit Curve",
	"Temporary data for Edit Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_edit_curve_get, NULL, NULL, NULL,&RNA_GPencilEditCurve
};

IntPropertyRNA rna_GPencilStroke_material_index = {
	{(PropertyRNA *)&rna_GPencilStroke_display_mode, (PropertyRNA *)&rna_GPencilStroke_edit_curve,
	-1, "material_index", 3, 0, 0, 4, 0, "Material Index",
	"Material slot index of this stroke",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, mat_nr), 0, NULL},
	GPencilStroke_material_index_get, GPencilStroke_material_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static const EnumPropertyItem rna_GPencilStroke_display_mode_items[5] = {
	{0, "SCREEN", 0, "Screen", "Stroke is in screen-space"},
	{1, "3DSPACE", 0, "3D Space", "Stroke is in 3D-space"},
	{2, "2DSPACE", 0, "2D Space", "Stroke is in 2D-space"},
	{4, "2DIMAGE", 0, "2D Image", "Stroke is in 2D-space (but with special \'image\' scaling)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilStroke_display_mode = {
	{(PropertyRNA *)&rna_GPencilStroke_select, (PropertyRNA *)&rna_GPencilStroke_material_index,
	-1, "display_mode", 3, 0, 0, 4, 0, "Display Mode",
	"Coordinate space that stroke is in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, flag), 1, NULL},
	GPencilStroke_display_mode_get, GPencilStroke_display_mode_set, NULL, NULL, NULL, rna_GPencilStroke_display_mode_items, 4, 0
};

BoolPropertyRNA rna_GPencilStroke_select = {
	{(PropertyRNA *)&rna_GPencilStroke_use_cyclic, (PropertyRNA *)&rna_GPencilStroke_display_mode,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Stroke is selected for viewport editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_select_get, GPencilStroke_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilStroke_use_cyclic = {
	{(PropertyRNA *)&rna_GPencilStroke_has_edit_curve, (PropertyRNA *)&rna_GPencilStroke_select,
	-1, "use_cyclic", 3, 0, 0, 0, 0, "Cyclic",
	"Enable cyclic drawing, closing the stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_use_cyclic_get, GPencilStroke_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilStroke_has_edit_curve = {
	{(PropertyRNA *)&rna_GPencilStroke_start_cap_mode, (PropertyRNA *)&rna_GPencilStroke_use_cyclic,
	-1, "has_edit_curve", 2, 0, 0, 0, 0, "Has Curve Data",
	"Stroke has Curve data to edit shape",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_has_edit_curve_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_GPencilStroke_start_cap_mode_items[3] = {
	{0, "ROUND", 0, "Rounded", ""},
	{1, "FLAT", 0, "Flat", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilStroke_start_cap_mode = {
	{(PropertyRNA *)&rna_GPencilStroke_end_cap_mode, (PropertyRNA *)&rna_GPencilStroke_has_edit_curve,
	-1, "start_cap_mode", 3, 0, 0, 4, 0, "Start Cap",
	"Stroke start extreme cap style",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, caps[0]), 1, NULL},
	GPencilStroke_start_cap_mode_get, GPencilStroke_start_cap_mode_set, NULL, NULL, NULL, rna_GPencilStroke_start_cap_mode_items, 2, 0
};

static const EnumPropertyItem rna_GPencilStroke_end_cap_mode_items[3] = {
	{0, "ROUND", 0, "Rounded", ""},
	{1, "FLAT", 0, "Flat", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GPencilStroke_end_cap_mode = {
	{(PropertyRNA *)&rna_GPencilStroke_is_nofill_stroke, (PropertyRNA *)&rna_GPencilStroke_start_cap_mode,
	-1, "end_cap_mode", 3, 0, 0, 4, 0, "End Cap",
	"Stroke end extreme cap style",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, caps[1]), 1, NULL},
	GPencilStroke_end_cap_mode_get, GPencilStroke_end_cap_mode_set, NULL, NULL, NULL, rna_GPencilStroke_end_cap_mode_items, 2, 0
};

BoolPropertyRNA rna_GPencilStroke_is_nofill_stroke = {
	{(PropertyRNA *)&rna_GPencilStroke_line_width, (PropertyRNA *)&rna_GPencilStroke_end_cap_mode,
	-1, "is_nofill_stroke", 3, 0, 0, 0, 0, "No Fill",
	"Special stroke to use as boundary for filling areas",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStroke_is_nofill_stroke_get, GPencilStroke_is_nofill_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_GPencilStroke_line_width = {
	{(PropertyRNA *)&rna_GPencilStroke_hardness, (PropertyRNA *)&rna_GPencilStroke_is_nofill_stroke,
	-1, "line_width", 3, 0, 0, 4, 0, "Thickness",
	"Thickness of stroke (in pixels)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, thickness), 1, NULL},
	GPencilStroke_line_width_get, GPencilStroke_line_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10, 1, 1000, 1, 0, NULL
};

FloatPropertyRNA rna_GPencilStroke_hardness = {
	{(PropertyRNA *)&rna_GPencilStroke_bound_box_min, (PropertyRNA *)&rna_GPencilStroke_line_width,
	-1, "hardness", 1, 0, 0, 4, 0, "Hardness",
	"Amount of gradient along section of stroke",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, hardeness), 5, NULL},
	GPencilStroke_hardness_get, GPencilStroke_hardness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 1.0f, NULL
};

static float rna_GPencilStroke_bound_box_min_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_bound_box_min = {
	{(PropertyRNA *)&rna_GPencilStroke_bound_box_max, (PropertyRNA *)&rna_GPencilStroke_hardness,
	-1, "bound_box_min", 2, 0, 0, 4, 0, "Boundbox Min",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, boundbox_min), 5, NULL},
	NULL, NULL, GPencilStroke_bound_box_min_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStroke_bound_box_min_default
};

static float rna_GPencilStroke_bound_box_max_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_bound_box_max = {
	{(PropertyRNA *)&rna_GPencilStroke_aspect, (PropertyRNA *)&rna_GPencilStroke_bound_box_min,
	-1, "bound_box_max", 2, 0, 0, 4, 0, "Boundbox Max",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, boundbox_max), 5, NULL},
	NULL, NULL, GPencilStroke_bound_box_max_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStroke_bound_box_max_default
};

static float rna_GPencilStroke_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_GPencilStroke_aspect = {
	{(PropertyRNA *)&rna_GPencilStroke_uv_translation, (PropertyRNA *)&rna_GPencilStroke_bound_box_max,
	-1, "aspect", 3, 0, 0, 4, 0, "Aspect",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, aspect_ratio), 5, NULL},
	NULL, NULL, GPencilStroke_aspect_get, GPencilStroke_aspect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 1.0f, rna_GPencilStroke_aspect_default
};

static float rna_GPencilStroke_uv_translation_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_uv_translation = {
	{(PropertyRNA *)&rna_GPencilStroke_uv_rotation, (PropertyRNA *)&rna_GPencilStroke_aspect,
	-1, "uv_translation", 1, 0, 0, 4, 0, "UV Translation",
	"Translation of default UV position",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_GPencil_uv_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, uv_translation), 5, NULL},
	NULL, NULL, GPencilStroke_uv_translation_get, GPencilStroke_uv_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStroke_uv_translation_default
};

FloatPropertyRNA rna_GPencilStroke_uv_rotation = {
	{(PropertyRNA *)&rna_GPencilStroke_uv_scale, (PropertyRNA *)&rna_GPencilStroke_uv_translation,
	-1, "uv_rotation", 1, 0, 0, 4, 0, "UV Rotation",
	"Rotation of the UV",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_uv_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, uv_rotation), 5, NULL},
	GPencilStroke_uv_rotation_get, GPencilStroke_uv_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilStroke_uv_scale = {
	{(PropertyRNA *)&rna_GPencilStroke_vertex_color_fill, (PropertyRNA *)&rna_GPencilStroke_uv_rotation,
	-1, "uv_scale", 1, 0, 0, 4, 0, "UV Scale",
	"Scale of the UV",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_uv_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, uv_scale), 5, NULL},
	GPencilStroke_uv_scale_get, GPencilStroke_uv_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 1.0f, NULL
};

static float rna_GPencilStroke_vertex_color_fill_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStroke_vertex_color_fill = {
	{(PropertyRNA *)&rna_GPencilStroke_select_index, (PropertyRNA *)&rna_GPencilStroke_uv_scale,
	-1, "vertex_color_fill", 1, 0, 0, 4, 0, "Vertex Fill Color",
	"Color used to mix with fill color to get final color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, vert_color_fill), 5, NULL},
	NULL, NULL, GPencilStroke_vertex_color_fill_get, GPencilStroke_vertex_color_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilStroke_vertex_color_fill_default
};

IntPropertyRNA rna_GPencilStroke_select_index = {
	{NULL, (PropertyRNA *)&rna_GPencilStroke_vertex_color_fill,
	-1, "select_index", 3, 0, 0, 4, 0, "Select Index",
	"Index of selection used for interpolation",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDstroke, select_index), 0, NULL},
	GPencilStroke_select_index_get, GPencilStroke_select_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_GPencilStroke = {
	{(ContainerRNA *)&RNA_GPencilStrokePoints, (ContainerRNA *)&RNA_GPencilStrokes,
	NULL,
	{(PropertyRNA *)&rna_GPencilStroke_rna_properties, (PropertyRNA *)&rna_GPencilStroke_select_index}},
	"GPencilStroke", NULL, NULL, 516, NULL, "Grease Pencil Stroke",
	"Freehand curve defining part of a sketch",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStroke_rna_properties,
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

/* Grease Pencil Stroke Points */
CollectionPropertyRNA rna_GPencilStrokePoints_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokePoints_rna_properties_begin, GPencilStrokePoints_rna_properties_next, GPencilStrokePoints_rna_properties_end, GPencilStrokePoints_rna_properties_get, NULL, NULL, GPencilStrokePoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokePoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GPencilStrokePoints_add_count = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_pressure, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Number",
	"Number of points to add to the stroke",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 1, NULL
};

FloatPropertyRNA rna_GPencilStrokePoints_add_pressure = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_strength, (PropertyRNA *)&rna_GPencilStrokePoints_add_count,
	-1, "pressure", 3, 0, 0, 0, 0, "Pressure",
	"Pressure for newly created points",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_GPencilStrokePoints_add_strength = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoints_add_pressure,
	-1, "strength", 3, 0, 0, 0, 0, "Strength",
	"Color intensity (alpha factor) for newly created points",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, NULL
};

FunctionRNA rna_GPencilStrokePoints_add_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_pop_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_add_count, (PropertyRNA *)&rna_GPencilStrokePoints_add_strength}},
	"add", 2048, "Add a new grease pencil stroke point",
	GPencilStrokePoints_add_call,
	NULL
};

IntPropertyRNA rna_GPencilStrokePoints_pop_index = {
	{NULL, NULL,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"point index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_GPencilStrokePoints_pop_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_update_func, (FunctionRNA *)&rna_GPencilStrokePoints_add_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_pop_index, (PropertyRNA *)&rna_GPencilStrokePoints_pop_index}},
	"pop", 2064, "Remove a grease pencil stroke point",
	GPencilStrokePoints_pop_call,
	NULL
};

FunctionRNA rna_GPencilStrokePoints_update_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_weight_get_func, (FunctionRNA *)&rna_GPencilStrokePoints_pop_func,
	NULL,
	{NULL, NULL}},
	"update", 2048, "Recalculate internal triangulation data",
	GPencilStrokePoints_update_call,
	NULL
};

IntPropertyRNA rna_GPencilStrokePoints_weight_get_vertex_group_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_point_index, NULL,
	-1, "vertex_group_index", 3, 0, 0, 0, 0, "Vertex Group Index",
	"Index of Vertex Group in the array of groups",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_GPencilStrokePoints_weight_get_point_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_weight, (PropertyRNA *)&rna_GPencilStrokePoints_weight_get_vertex_group_index,
	-1, "point_index", 3, 0, 0, 0, 0, "Point Index",
	"Index of the Point in the array",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_GPencilStrokePoints_weight_get_weight = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoints_weight_get_point_index,
	-1, "weight", 3, 0, 2, 0, 0, "Weight",
	"Point Weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_GPencilStrokePoints_weight_get_func = {
	{(FunctionRNA *)&rna_GPencilStrokePoints_weight_set_func, (FunctionRNA *)&rna_GPencilStrokePoints_update_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_vertex_group_index, (PropertyRNA *)&rna_GPencilStrokePoints_weight_get_weight}},
	"weight_get", 16, "Get vertex group point weight",
	GPencilStrokePoints_weight_get_call,
	(PropertyRNA *)&rna_GPencilStrokePoints_weight_get_weight
};

IntPropertyRNA rna_GPencilStrokePoints_weight_set_vertex_group_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_set_point_index, NULL,
	-1, "vertex_group_index", 3, 0, 0, 0, 0, "Vertex Group Index",
	"Index of Vertex Group in the array of groups",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_GPencilStrokePoints_weight_set_point_index = {
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_set_weight, (PropertyRNA *)&rna_GPencilStrokePoints_weight_set_vertex_group_index,
	-1, "point_index", 3, 0, 0, 0, 0, "Point Index",
	"Index of the Point in the array",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_GPencilStrokePoints_weight_set_weight = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoints_weight_set_point_index,
	-1, "weight", 3, 0, 0, 0, 0, "Weight",
	"Point Weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_GPencilStrokePoints_weight_set_func = {
	{NULL, (FunctionRNA *)&rna_GPencilStrokePoints_weight_get_func,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_weight_set_vertex_group_index, (PropertyRNA *)&rna_GPencilStrokePoints_weight_set_weight}},
	"weight_set", 16, "Set vertex group point weight",
	GPencilStrokePoints_weight_set_call,
	NULL
};

StructRNA RNA_GPencilStrokePoints = {
	{(ContainerRNA *)&RNA_GPencilStrokePoint, (ContainerRNA *)&RNA_GPencilStroke,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoints_rna_properties, (PropertyRNA *)&rna_GPencilStrokePoints_rna_type}},
	"GPencilStrokePoints", NULL, NULL, 516, NULL, "Grease Pencil Stroke Points",
	"Collection of grease pencil stroke points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStrokePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_GPencilStrokePoints_add_func, (FunctionRNA *)&rna_GPencilStrokePoints_weight_set_func}
};

/* Grease Pencil Stroke Point */
CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokePoint_rna_properties_begin, GPencilStrokePoint_rna_properties_next, GPencilStrokePoint_rna_properties_end, GPencilStrokePoint_rna_properties_get, NULL, NULL, GPencilStrokePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilStrokePoint_rna_type = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_co, (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_GPencilStrokePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_co = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_pressure, (PropertyRNA *)&rna_GPencilStrokePoint_rna_type,
	-1, "co", 3, 0, 0, 4, 0, "Coordinates",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, x), 5, NULL},
	NULL, NULL, GPencilStrokePoint_co_get, GPencilStrokePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_co_default
};

FloatPropertyRNA rna_GPencilStrokePoint_pressure = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_strength, (PropertyRNA *)&rna_GPencilStrokePoint_co,
	-1, "pressure", 3, 0, 0, 4, 0, "Pressure",
	"Pressure of tablet at point when drawing it",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, pressure), 5, NULL},
	GPencilStrokePoint_pressure_get, GPencilStrokePoint_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilStrokePoint_strength = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_uv_factor, (PropertyRNA *)&rna_GPencilStrokePoint_pressure,
	-1, "strength", 3, 0, 0, 4, 0, "Strength",
	"Color intensity (alpha factor)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, strength), 5, NULL},
	GPencilStrokePoint_strength_get, GPencilStrokePoint_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilStrokePoint_uv_factor = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_uv_rotation, (PropertyRNA *)&rna_GPencilStrokePoint_strength,
	-1, "uv_factor", 3, 0, 0, 4, 0, "UV Factor",
	"Internal UV factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, uv_fac), 5, NULL},
	GPencilStrokePoint_uv_factor_get, GPencilStrokePoint_uv_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilStrokePoint_uv_rotation = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_uv_fill, (PropertyRNA *)&rna_GPencilStrokePoint_uv_factor,
	-1, "uv_rotation", 3, 0, 0, 4, 0, "UV Rotation",
	"Internal UV factor for dot mode",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, uv_rot), 5, NULL},
	GPencilStrokePoint_uv_rotation_get, GPencilStrokePoint_uv_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

static float rna_GPencilStrokePoint_uv_fill_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_uv_fill = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_select, (PropertyRNA *)&rna_GPencilStrokePoint_uv_rotation,
	-1, "uv_fill", 3, 0, 0, 4, 0, "UV Fill",
	"Internal UV factor for filling",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, uv_fill), 5, NULL},
	NULL, NULL, GPencilStrokePoint_uv_fill_get, GPencilStrokePoint_uv_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_uv_fill_default
};

BoolPropertyRNA rna_GPencilStrokePoint_select = {
	{(PropertyRNA *)&rna_GPencilStrokePoint_vertex_color, (PropertyRNA *)&rna_GPencilStrokePoint_uv_fill,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Point is selected for viewport editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilStrokePoint_select_get, GPencilStrokePoint_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_GPencilStrokePoint_vertex_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_vertex_color = {
	{NULL, (PropertyRNA *)&rna_GPencilStrokePoint_select,
	-1, "vertex_color", 1, 0, 0, 4, 0, "Vertex Color",
	"Color used to mix with point color to get final color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDspoint, vert_color), 5, NULL},
	NULL, NULL, GPencilStrokePoint_vertex_color_get, GPencilStrokePoint_vertex_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_vertex_color_default
};

StructRNA RNA_GPencilStrokePoint = {
	{(ContainerRNA *)&RNA_GPencilTriangle, (ContainerRNA *)&RNA_GPencilStrokePoints,
	NULL,
	{(PropertyRNA *)&rna_GPencilStrokePoint_rna_properties, (PropertyRNA *)&rna_GPencilStrokePoint_vertex_color}},
	"GPencilStrokePoint", NULL, NULL, 516, NULL, "Grease Pencil Stroke Point",
	"Data point for freehand stroke curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilStrokePoint_rna_properties,
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

/* Triangle */
CollectionPropertyRNA rna_GPencilTriangle_rna_properties = {
	{(PropertyRNA *)&rna_GPencilTriangle_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilTriangle_rna_properties_begin, GPencilTriangle_rna_properties_next, GPencilTriangle_rna_properties_end, GPencilTriangle_rna_properties_get, NULL, NULL, GPencilTriangle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilTriangle_rna_type = {
	{(PropertyRNA *)&rna_GPencilTriangle_v1, (PropertyRNA *)&rna_GPencilTriangle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilTriangle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GPencilTriangle_v1 = {
	{(PropertyRNA *)&rna_GPencilTriangle_v2, (PropertyRNA *)&rna_GPencilTriangle_rna_type,
	-1, "v1", 2, 0, 0, 4, 0, "v1",
	"First triangle vertex index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDtriangle, verts[0]), 0, NULL},
	GPencilTriangle_v1_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_GPencilTriangle_v2 = {
	{(PropertyRNA *)&rna_GPencilTriangle_v3, (PropertyRNA *)&rna_GPencilTriangle_v1,
	-1, "v2", 2, 0, 0, 4, 0, "v2",
	"Second triangle vertex index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDtriangle, verts[1]), 0, NULL},
	GPencilTriangle_v2_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_GPencilTriangle_v3 = {
	{NULL, (PropertyRNA *)&rna_GPencilTriangle_v2,
	-1, "v3", 2, 0, 0, 4, 0, "v3",
	"Third triangle vertex index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDtriangle, verts[2]), 0, NULL},
	GPencilTriangle_v3_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_GPencilTriangle = {
	{(ContainerRNA *)&RNA_GPencilEditCurve, (ContainerRNA *)&RNA_GPencilStrokePoint,
	NULL,
	{(PropertyRNA *)&rna_GPencilTriangle_rna_properties, (PropertyRNA *)&rna_GPencilTriangle_v3}},
	"GPencilTriangle", NULL, NULL, 516, NULL, "Triangle",
	"Triangulation data for Grease Pencil fills",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilTriangle_rna_properties,
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

/* Edit Curve */
CollectionPropertyRNA rna_GPencilEditCurve_rna_properties = {
	{(PropertyRNA *)&rna_GPencilEditCurve_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurve_rna_properties_begin, GPencilEditCurve_rna_properties_next, GPencilEditCurve_rna_properties_end, GPencilEditCurve_rna_properties_get, NULL, NULL, GPencilEditCurve_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilEditCurve_rna_type = {
	{(PropertyRNA *)&rna_GPencilEditCurve_curve_points, (PropertyRNA *)&rna_GPencilEditCurve_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurve_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilEditCurve_curve_points = {
	{(PropertyRNA *)&rna_GPencilEditCurve_select, (PropertyRNA *)&rna_GPencilEditCurve_rna_type,
	-1, "curve_points", 0, 0, 0, 8, 0, "Curve Points",
	"Curve data points",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurve_curve_points_begin, GPencilEditCurve_curve_points_next, GPencilEditCurve_curve_points_end, GPencilEditCurve_curve_points_get, GPencilEditCurve_curve_points_length, GPencilEditCurve_curve_points_lookup_int, NULL, NULL, &RNA_GPencilEditCurvePoint
};

BoolPropertyRNA rna_GPencilEditCurve_select = {
	{NULL, (PropertyRNA *)&rna_GPencilEditCurve_curve_points,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Curve is selected for viewport editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurve_select_get, GPencilEditCurve_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_GPencilEditCurve = {
	{(ContainerRNA *)&RNA_GPencilEditCurvePoint, (ContainerRNA *)&RNA_GPencilTriangle,
	NULL,
	{(PropertyRNA *)&rna_GPencilEditCurve_rna_properties, (PropertyRNA *)&rna_GPencilEditCurve_select}},
	"GPencilEditCurve", NULL, NULL, 516, NULL, "Edit Curve",
	"Edition Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilEditCurve_rna_properties,
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

/* Bezier Curve Point */
CollectionPropertyRNA rna_GPencilEditCurvePoint_rna_properties = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurvePoint_rna_properties_begin, GPencilEditCurvePoint_rna_properties_next, GPencilEditCurvePoint_rna_properties_end, GPencilEditCurvePoint_rna_properties_get, NULL, NULL, GPencilEditCurvePoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GPencilEditCurvePoint_rna_type = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_select_left_handle, (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurvePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_GPencilEditCurvePoint_select_left_handle = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_select_right_handle, (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_type,
	-1, "select_left_handle", 3, 0, 0, 0, 0, "Handle 1 selected",
	"Handle 1 selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurvePoint_select_left_handle_get, GPencilEditCurvePoint_select_left_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilEditCurvePoint_select_right_handle = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_select_control_point, (PropertyRNA *)&rna_GPencilEditCurvePoint_select_left_handle,
	-1, "select_right_handle", 3, 0, 0, 0, 0, "Handle 2 selected",
	"Handle 2 selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurvePoint_select_right_handle_get, GPencilEditCurvePoint_select_right_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilEditCurvePoint_select_control_point = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_hide, (PropertyRNA *)&rna_GPencilEditCurvePoint_select_right_handle,
	-1, "select_control_point", 3, 0, 0, 0, 0, "Control Point selected",
	"Control point selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurvePoint_select_control_point_get, GPencilEditCurvePoint_select_control_point_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_GPencilEditCurvePoint_hide = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_handle_left, (PropertyRNA *)&rna_GPencilEditCurvePoint_select_control_point,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"Visibility status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GPencilEditCurvePoint_hide_get, GPencilEditCurvePoint_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_GPencilEditCurvePoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_handle_left = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_co, (PropertyRNA *)&rna_GPencilEditCurvePoint_hide,
	-1, "handle_left", 1, 0, 0, 0, 0, "Handle 1",
	"Coordinates of the first handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, GPencilEditCurvePoint_handle_left_get, GPencilEditCurvePoint_handle_left_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilEditCurvePoint_handle_left_default
};

static float rna_GPencilEditCurvePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_co = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_handle_right, (PropertyRNA *)&rna_GPencilEditCurvePoint_handle_left,
	-1, "co", 1, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, GPencilEditCurvePoint_co_get, GPencilEditCurvePoint_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilEditCurvePoint_co_default
};

static float rna_GPencilEditCurvePoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_handle_right = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_pressure, (PropertyRNA *)&rna_GPencilEditCurvePoint_co,
	-1, "handle_right", 1, 0, 0, 0, 0, "Handle 2",
	"Coordinates of the second handle",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, GPencilEditCurvePoint_handle_right_get, GPencilEditCurvePoint_handle_right_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_GPencilEditCurvePoint_handle_right_default
};

FloatPropertyRNA rna_GPencilEditCurvePoint_pressure = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_strength, (PropertyRNA *)&rna_GPencilEditCurvePoint_handle_right,
	-1, "pressure", 1, 0, 0, 4, 0, "Pressure",
	"Pressure of the grease pencil stroke point",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, pressure), 5, NULL},
	GPencilEditCurvePoint_pressure_get, GPencilEditCurvePoint_pressure_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilEditCurvePoint_strength = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_point_index, (PropertyRNA *)&rna_GPencilEditCurvePoint_pressure,
	-1, "strength", 1, 0, 0, 4, 0, "Strength",
	"Color intensity (alpha factor) of the grease pencil stroke point",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, strength), 5, NULL},
	GPencilEditCurvePoint_strength_get, GPencilEditCurvePoint_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_GPencilEditCurvePoint_point_index = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_uv_factor, (PropertyRNA *)&rna_GPencilEditCurvePoint_strength,
	-1, "point_index", 0, 0, 0, 4, 0, "Point Index",
	"Index of the corresponding grease pencil stroke point",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, point_index), 0, NULL},
	GPencilEditCurvePoint_point_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_GPencilEditCurvePoint_uv_factor = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_uv_rotation, (PropertyRNA *)&rna_GPencilEditCurvePoint_point_index,
	-1, "uv_factor", 1, 0, 0, 4, 0, "UV Factor",
	"Internal UV factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, uv_fac), 5, NULL},
	GPencilEditCurvePoint_uv_factor_get, GPencilEditCurvePoint_uv_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GPencilEditCurvePoint_uv_rotation = {
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_vertex_color, (PropertyRNA *)&rna_GPencilEditCurvePoint_uv_factor,
	-1, "uv_rotation", 1, 0, 0, 4, 0, "UV Rotation",
	"Internal UV factor for dot mode",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, uv_rot), 5, NULL},
	GPencilEditCurvePoint_uv_rotation_get, GPencilEditCurvePoint_uv_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

static float rna_GPencilEditCurvePoint_vertex_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilEditCurvePoint_vertex_color = {
	{NULL, (PropertyRNA *)&rna_GPencilEditCurvePoint_uv_rotation,
	-1, "vertex_color", 1, 0, 0, 4, 0, "Vertex Color",
	"Vertex color of the grease pencil stroke point",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_GPencil_stroke_curve_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bGPDcurve_point, vert_color), 5, NULL},
	NULL, NULL, GPencilEditCurvePoint_vertex_color_get, GPencilEditCurvePoint_vertex_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilEditCurvePoint_vertex_color_default
};

StructRNA RNA_GPencilEditCurvePoint = {
	{(ContainerRNA *)&RNA_GpencilVertexGroupElement, (ContainerRNA *)&RNA_GPencilEditCurve,
	NULL,
	{(PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties, (PropertyRNA *)&rna_GPencilEditCurvePoint_vertex_color}},
	"GPencilEditCurvePoint", NULL, NULL, 516, NULL, "Bezier Curve Point",
	"Bezier curve point with two handles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GPencilEditCurvePoint_rna_properties,
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

/* Vertex Group Element */
CollectionPropertyRNA rna_GpencilVertexGroupElement_rna_properties = {
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GpencilVertexGroupElement_rna_properties_begin, GpencilVertexGroupElement_rna_properties_next, GpencilVertexGroupElement_rna_properties_end, GpencilVertexGroupElement_rna_properties_get, NULL, NULL, GpencilVertexGroupElement_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GpencilVertexGroupElement_rna_type = {
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_group, (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GpencilVertexGroupElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GpencilVertexGroupElement_group = {
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_weight, (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_type,
	-1, "group", 2, 0, 0, 4, 0, "Group Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, def_nr), 0, NULL},
	GpencilVertexGroupElement_group_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_GpencilVertexGroupElement_weight = {
	{NULL, (PropertyRNA *)&rna_GpencilVertexGroupElement_group,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Vertex Weight",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_GPencil_update, 391839744, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, weight), 5, NULL},
	GpencilVertexGroupElement_weight_get, GpencilVertexGroupElement_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_GpencilVertexGroupElement = {
	{(ContainerRNA *)&RNA_CurvePoint, (ContainerRNA *)&RNA_GPencilEditCurvePoint,
	NULL,
	{(PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties, (PropertyRNA *)&rna_GpencilVertexGroupElement_weight}},
	"GpencilVertexGroupElement", NULL, NULL, 516, NULL, "Vertex Group Element",
	"Weight value of a vertex in a vertex group",
	"*", 201,
	NULL, (PropertyRNA *)&rna_GpencilVertexGroupElement_rna_properties,
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

