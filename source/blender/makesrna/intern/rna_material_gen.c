
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

#include "rna_material.c"
#include "rna_material_api.c"

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

EnumPropertyRNA rna_Material_blend_method;
EnumPropertyRNA rna_Material_shadow_method;
FloatPropertyRNA rna_Material_alpha_threshold;
BoolPropertyRNA rna_Material_show_transparent_back;
BoolPropertyRNA rna_Material_use_backface_culling;
BoolPropertyRNA rna_Material_use_screen_refraction;
BoolPropertyRNA rna_Material_use_sss_translucency;
FloatPropertyRNA rna_Material_refraction_depth;
IntPropertyRNA rna_Material_light_group_bits;
IntPropertyRNA rna_Material_light_group_shadow_bits;
BoolPropertyRNA rna_Material_check_shadow_id;
EnumPropertyRNA rna_Material_preview_render_type;
BoolPropertyRNA rna_Material_use_preview_world;
IntPropertyRNA rna_Material_pass_index;
PointerPropertyRNA rna_Material_node_tree;
BoolPropertyRNA rna_Material_use_nodes;
PointerPropertyRNA rna_Material_animation_data;
CollectionPropertyRNA rna_Material_texture_paint_images;
CollectionPropertyRNA rna_Material_texture_paint_slots;
IntPropertyRNA rna_Material_paint_active_slot;
IntPropertyRNA rna_Material_paint_clone_slot;
FloatPropertyRNA rna_Material_diffuse_color;
FloatPropertyRNA rna_Material_specular_color;
FloatPropertyRNA rna_Material_roughness;
FloatPropertyRNA rna_Material_specular_intensity;
FloatPropertyRNA rna_Material_metallic;
FloatPropertyRNA rna_Material_line_color;
IntPropertyRNA rna_Material_line_priority;
PointerPropertyRNA rna_Material_grease_pencil;
BoolPropertyRNA rna_Material_is_grease_pencil;
PointerPropertyRNA rna_Material_lineart;

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



CollectionPropertyRNA rna_TexPaintSlot_rna_properties;
PointerPropertyRNA rna_TexPaintSlot_rna_type;
StringPropertyRNA rna_TexPaintSlot_name;
IntPropertyRNA rna_TexPaintSlot_icon_value;
StringPropertyRNA rna_TexPaintSlot_uv_layer;
BoolPropertyRNA rna_TexPaintSlot_is_valid;


CollectionPropertyRNA rna_MaterialGPencilStyle_rna_properties;
PointerPropertyRNA rna_MaterialGPencilStyle_rna_type;
FloatPropertyRNA rna_MaterialGPencilStyle_color;
FloatPropertyRNA rna_MaterialGPencilStyle_fill_color;
FloatPropertyRNA rna_MaterialGPencilStyle_mix_color;
FloatPropertyRNA rna_MaterialGPencilStyle_mix_factor;
FloatPropertyRNA rna_MaterialGPencilStyle_mix_stroke_factor;
FloatPropertyRNA rna_MaterialGPencilStyle_texture_angle;
FloatPropertyRNA rna_MaterialGPencilStyle_texture_scale;
FloatPropertyRNA rna_MaterialGPencilStyle_texture_offset;
FloatPropertyRNA rna_MaterialGPencilStyle_pixel_size;
BoolPropertyRNA rna_MaterialGPencilStyle_hide;
BoolPropertyRNA rna_MaterialGPencilStyle_lock;
BoolPropertyRNA rna_MaterialGPencilStyle_ghost;
BoolPropertyRNA rna_MaterialGPencilStyle_texture_clamp;
BoolPropertyRNA rna_MaterialGPencilStyle_flip;
BoolPropertyRNA rna_MaterialGPencilStyle_use_overlap_strokes;
BoolPropertyRNA rna_MaterialGPencilStyle_use_stroke_holdout;
BoolPropertyRNA rna_MaterialGPencilStyle_use_fill_holdout;
BoolPropertyRNA rna_MaterialGPencilStyle_show_stroke;
BoolPropertyRNA rna_MaterialGPencilStyle_show_fill;
EnumPropertyRNA rna_MaterialGPencilStyle_alignment_mode;
FloatPropertyRNA rna_MaterialGPencilStyle_alignment_rotation;
IntPropertyRNA rna_MaterialGPencilStyle_pass_index;
EnumPropertyRNA rna_MaterialGPencilStyle_mode;
EnumPropertyRNA rna_MaterialGPencilStyle_stroke_style;
PointerPropertyRNA rna_MaterialGPencilStyle_stroke_image;
EnumPropertyRNA rna_MaterialGPencilStyle_fill_style;
EnumPropertyRNA rna_MaterialGPencilStyle_gradient_type;
PointerPropertyRNA rna_MaterialGPencilStyle_fill_image;
BoolPropertyRNA rna_MaterialGPencilStyle_is_stroke_visible;
BoolPropertyRNA rna_MaterialGPencilStyle_is_fill_visible;


CollectionPropertyRNA rna_MaterialLineArt_rna_properties;
PointerPropertyRNA rna_MaterialLineArt_rna_type;
BoolPropertyRNA rna_MaterialLineArt_use_material_mask;
BoolPropertyRNA rna_MaterialLineArt_use_material_mask_bits;
IntPropertyRNA rna_MaterialLineArt_mat_occlusion;
IntPropertyRNA rna_MaterialLineArt_intersection_priority;
BoolPropertyRNA rna_MaterialLineArt_use_intersection_priority_override;

int Material_blend_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->blend_method);
}

void Material_blend_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->blend_method = value;
}

int Material_shadow_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->blend_shadow);
}

void Material_shadow_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->blend_shadow = value;
}

float Material_alpha_threshold_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->alpha_threshold);
}

void Material_alpha_threshold_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->alpha_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

bool Material_show_transparent_back_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return !(((data->blend_flag) & 1) != 0);
}

void Material_show_transparent_back_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (!value) { data->blend_flag |= 1; }
    else { data->blend_flag &= ~1; }
}

bool Material_use_backface_culling_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 4) != 0);
}

void Material_use_backface_culling_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 4; }
    else { data->blend_flag &= ~4; }
}

bool Material_use_screen_refraction_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 2) != 0);
}

void Material_use_screen_refraction_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 2; }
    else { data->blend_flag &= ~2; }
}

bool Material_use_sss_translucency_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->blend_flag) & 8) != 0);
}

void Material_use_sss_translucency_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag |= 8; }
    else { data->blend_flag &= ~8; }
}

float Material_refraction_depth_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->refract_depth);
}

void Material_refraction_depth_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->refract_depth = CLAMPIS(value, 0.0f, FLT_MAX);
}

void Material_light_group_bits_get(PointerRNA *ptr, int values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (int)(((int *)data->light_group_bits)[i]);
    }
}

void Material_light_group_bits_set(PointerRNA *ptr, const int values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((int *)data->light_group_bits)[i] = values[i];
    }
}

void Material_light_group_shadow_bits_get(PointerRNA *ptr, int values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (int)(((int *)data->light_group_shadow_bits)[i]);
    }
}

void Material_light_group_shadow_bits_set(PointerRNA *ptr, const int values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((int *)data->light_group_shadow_bits)[i] = values[i];
    }
}

bool Material_check_shadow_id_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->check_shadow_id) & 1) != 0);
}

void Material_check_shadow_id_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->check_shadow_id |= 1; }
    else { data->check_shadow_id &= ~1; }
}

int Material_preview_render_type_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->pr_type);
}

void Material_preview_render_type_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->pr_type = value;
}

bool Material_use_preview_world_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->pr_flag) & 1) != 0);
}

void Material_use_preview_world_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->pr_flag |= 1; }
    else { data->pr_flag &= ~1; }
}

int Material_pass_index_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->index);
}

void Material_pass_index_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->index = CLAMPIS(value, 0, 32767);
}

PointerRNA Material_node_tree_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

bool Material_use_nodes_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (((data->use_nodes) & 1) != 0);
}

void Material_use_nodes_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->use_nodes |= 1; }
    else { data->use_nodes &= ~1; }
}

PointerRNA Material_animation_data_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Material_texture_paint_images_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Image, rna_iterator_array_dereference_get(iter));
}

void Material_texture_paint_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Material_texture_paint_images;

    rna_Material_texpaint_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_images_get(iter);
    }
}

void Material_texture_paint_images_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_images_get(iter);
    }
}

void Material_texture_paint_images_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Material_texture_paint_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Material_texture_paint_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = Material_texture_paint_images_get(&iter); }
    }

    Material_texture_paint_images_end(&iter);

    return found;
}

int Material_texture_paint_images_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Material_texture_paint_images_begin(&iter, ptr);

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
        Material_texture_paint_images_next(&iter);
    }
    Material_texture_paint_images_end(&iter);

    return found;
}

static PointerRNA Material_texture_paint_slots_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TexPaintSlot, rna_iterator_array_get(iter));
}

void Material_texture_paint_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Material_texture_paint_slots;

    rna_Material_texpaint_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_slots_get(iter);
    }
}

void Material_texture_paint_slots_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_slots_get(iter);
    }
}

void Material_texture_paint_slots_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Material_paint_active_slot_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->paint_active_slot);
}

void Material_paint_active_slot_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->paint_active_slot = CLAMPIS(value, 0, 32767);
}

int Material_paint_clone_slot_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->paint_clone_slot);
}

void Material_paint_clone_slot_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->paint_clone_slot = CLAMPIS(value, 0, 32767);
}

void Material_diffuse_color_get(PointerRNA *ptr, float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void Material_diffuse_color_set(PointerRNA *ptr, const float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

void Material_specular_color_get(PointerRNA *ptr, float values[3])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->specr)[i]);
    }
}

void Material_specular_color_set(PointerRNA *ptr, const float values[3])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->specr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float Material_roughness_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->roughness);
}

void Material_roughness_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->roughness = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_specular_intensity_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->spec);
}

void Material_specular_intensity_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->spec = CLAMPIS(value, 0.0f, 1.0f);
}

float Material_metallic_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->metallic);
}

void Material_metallic_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->metallic = CLAMPIS(value, 0.0f, 1.0f);
}

void Material_line_color_get(PointerRNA *ptr, float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->line_col)[i]);
    }
}

void Material_line_color_set(PointerRNA *ptr, const float values[4])
{
    Material *data = (Material *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->line_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

int Material_line_priority_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->line_priority);
}

void Material_line_priority_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->line_priority = CLAMPIS(value, 0, 32767);
}

PointerRNA Material_grease_pencil_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MaterialGPencilStyle, data->gp_style);
}

bool Material_is_grease_pencil_get(PointerRNA *ptr)
{
    return rna_is_grease_pencil_get(ptr);
}

PointerRNA Material_lineart_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MaterialLineArt, &data->lineart);
}

static PointerRNA TexPaintSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void TexPaintSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_TexPaintSlot_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = TexPaintSlot_rna_properties_get(iter);
    }
}

void TexPaintSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = TexPaintSlot_rna_properties_get(iter);
    }
}

void TexPaintSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int TexPaintSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA TexPaintSlot_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void TexPaintSlot_name_get(PointerRNA *ptr, char *value)
{
    rna_TexPaintSlot_name_get(ptr, value);
}

int TexPaintSlot_name_length(PointerRNA *ptr)
{
    return rna_TexPaintSlot_name_length(ptr);
}

int TexPaintSlot_icon_value_get(PointerRNA *ptr)
{
    return rna_TexPaintSlot_icon_get(ptr);
}

void TexPaintSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
    rna_TexPaintSlot_uv_layer_get(ptr, value);
}

int TexPaintSlot_uv_layer_length(PointerRNA *ptr)
{
    return rna_TexPaintSlot_uv_layer_length(ptr);
}

void TexPaintSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
    rna_TexPaintSlot_uv_layer_set(ptr, value);
}

bool TexPaintSlot_is_valid_get(PointerRNA *ptr)
{
    TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
    return (((data->valid) & 1) != 0);
}

static PointerRNA MaterialGPencilStyle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaterialGPencilStyle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialGPencilStyle_rna_properties_get(iter);
    }
}

void MaterialGPencilStyle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaterialGPencilStyle_rna_properties_get(iter);
    }
}

void MaterialGPencilStyle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaterialGPencilStyle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialGPencilStyle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MaterialGPencilStyle_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->stroke_rgba)[i]);
    }
}

void MaterialGPencilStyle_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->stroke_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void MaterialGPencilStyle_fill_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->fill_rgba)[i]);
    }
}

void MaterialGPencilStyle_fill_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->fill_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void MaterialGPencilStyle_mix_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->mix_rgba)[i]);
    }
}

void MaterialGPencilStyle_mix_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->mix_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float MaterialGPencilStyle_mix_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->mix_factor);
}

void MaterialGPencilStyle_mix_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mix_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_mix_stroke_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->mix_stroke_factor);
}

void MaterialGPencilStyle_mix_stroke_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mix_stroke_factor = CLAMPIS(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_texture_angle_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->texture_angle);
}

void MaterialGPencilStyle_texture_angle_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->texture_angle = value;
}

void MaterialGPencilStyle_texture_scale_get(PointerRNA *ptr, float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->texture_scale)[i]);
    }
}

void MaterialGPencilStyle_texture_scale_set(PointerRNA *ptr, const float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->texture_scale)[i] = values[i];
    }
}

void MaterialGPencilStyle_texture_offset_get(PointerRNA *ptr, float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->texture_offset)[i]);
    }
}

void MaterialGPencilStyle_texture_offset_set(PointerRNA *ptr, const float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->texture_offset)[i] = values[i];
    }
}

float MaterialGPencilStyle_pixel_size_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->texture_pixsize);
}

void MaterialGPencilStyle_pixel_size_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->texture_pixsize = CLAMPIS(value, 1.0f, 5000.0f);
}

bool MaterialGPencilStyle_hide_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MaterialGPencilStyle_hide_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool MaterialGPencilStyle_lock_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void MaterialGPencilStyle_lock_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool MaterialGPencilStyle_ghost_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void MaterialGPencilStyle_ghost_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool MaterialGPencilStyle_texture_clamp_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void MaterialGPencilStyle_texture_clamp_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool MaterialGPencilStyle_flip_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void MaterialGPencilStyle_flip_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool MaterialGPencilStyle_use_overlap_strokes_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void MaterialGPencilStyle_use_overlap_strokes_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool MaterialGPencilStyle_use_stroke_holdout_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void MaterialGPencilStyle_use_stroke_holdout_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool MaterialGPencilStyle_use_fill_holdout_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

void MaterialGPencilStyle_use_fill_holdout_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

bool MaterialGPencilStyle_show_stroke_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void MaterialGPencilStyle_show_stroke_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool MaterialGPencilStyle_show_fill_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void MaterialGPencilStyle_show_fill_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

int MaterialGPencilStyle_alignment_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->alignment_mode) & 3);
}

void MaterialGPencilStyle_alignment_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->alignment_mode &= ~3;
    data->alignment_mode |= value;
}

float MaterialGPencilStyle_alignment_rotation_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->alignment_rotation);
}

void MaterialGPencilStyle_alignment_rotation_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->alignment_rotation = CLAMPIS(value, -1.5707963705f, 1.5707963705f);
}

int MaterialGPencilStyle_pass_index_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (int)(data->index);
}

void MaterialGPencilStyle_pass_index_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->index = CLAMPIS(value, 0, 32767);
}

int MaterialGPencilStyle_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->mode) & 3);
}

void MaterialGPencilStyle_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mode &= ~3;
    data->mode |= value;
}

int MaterialGPencilStyle_stroke_style_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->stroke_style) & 1);
}

void MaterialGPencilStyle_stroke_style_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->stroke_style &= ~1;
    data->stroke_style |= value;
}

PointerRNA MaterialGPencilStyle_stroke_image_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->sima);
}

void MaterialGPencilStyle_stroke_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GpencilColorData_stroke_image_set(ptr, value, reports);
}

int MaterialGPencilStyle_fill_style_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->fill_style) & 3);
}

void MaterialGPencilStyle_fill_style_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->fill_style &= ~3;
    data->fill_style |= value;
}

int MaterialGPencilStyle_gradient_type_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((data->gradient_type) & 1);
}

void MaterialGPencilStyle_gradient_type_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->gradient_type &= ~1;
    data->gradient_type |= value;
}

PointerRNA MaterialGPencilStyle_fill_image_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

void MaterialGPencilStyle_fill_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_GpencilColorData_fill_image_set(ptr, value, reports);
}

bool MaterialGPencilStyle_is_stroke_visible_get(PointerRNA *ptr)
{
    return rna_GpencilColorData_is_stroke_visible_get(ptr);
}

bool MaterialGPencilStyle_is_fill_visible_get(PointerRNA *ptr)
{
    return rna_GpencilColorData_is_fill_visible_get(ptr);
}

static PointerRNA MaterialLineArt_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MaterialLineArt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MaterialLineArt_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialLineArt_rna_properties_get(iter);
    }
}

void MaterialLineArt_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MaterialLineArt_rna_properties_get(iter);
    }
}

void MaterialLineArt_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MaterialLineArt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MaterialLineArt_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool MaterialLineArt_use_material_mask_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

void MaterialLineArt_use_material_mask_set(PointerRNA *ptr, bool value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

void MaterialLineArt_use_material_mask_bits_get(PointerRNA *ptr, bool values[8])
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        values[i] = ((data->material_mask_bits & (1 << i)) != 0);
    }
}

void MaterialLineArt_use_material_mask_bits_set(PointerRNA *ptr, const bool values[8])
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (values[i]) { data->material_mask_bits |= (1 << i); }
        else { data->material_mask_bits &= ~(1 << i); }
    }
}

int MaterialLineArt_mat_occlusion_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (int)(data->mat_occlusion);
}

void MaterialLineArt_mat_occlusion_set(PointerRNA *ptr, int value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    data->mat_occlusion = CLAMPIS(value, 0, 255);
}

int MaterialLineArt_intersection_priority_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (int)(data->intersection_priority);
}

void MaterialLineArt_intersection_priority_set(PointerRNA *ptr, int value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    data->intersection_priority = CLAMPIS(value, 0, 255);
}

bool MaterialLineArt_use_intersection_priority_override_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void MaterialLineArt_use_intersection_priority_override_set(PointerRNA *ptr, bool value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}





/* Material */
static const EnumPropertyItem rna_Material_blend_method_items[5] = {
	{0, "OPAQUE", 0, "Opaque", "Render surface without transparency"},
	{3, "CLIP", 0, "Alpha Clip", "Use the alpha threshold to clip the visibility (binary visibility)"},
	{4, "HASHED", 0, "Alpha Hashed", "Use noise to dither the binary visibility (works well with multi-samples)"},
	{5, "BLEND", 0, "Alpha Blend", "Render polygon transparent, depending on alpha channel of the texture"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_blend_method = {
	{(PropertyRNA *)&rna_Material_shadow_method, NULL,
	-1, "blend_method", 3, 0, 0, 4, 0, "Blend Mode",
	"Blend Mode for Transparent Faces",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, blend_method), 2, NULL},
	Material_blend_method_get, Material_blend_method_set, NULL, NULL, NULL, rna_Material_blend_method_items, 4, 0
};

static const EnumPropertyItem rna_Material_shadow_method_items[5] = {
	{0, "NONE", 0, "None", "Material will cast no shadow"},
	{1, "OPAQUE", 0, "Opaque", "Material will cast shadows without transparency"},
	{2, "CLIP", 0, "Alpha Clip", "Use the alpha threshold to clip the visibility (binary visibility)"},
	{3, "HASHED", 0, "Alpha Hashed", "Use noise to dither the binary visibility and use filtering to reduce the noise"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_shadow_method = {
	{(PropertyRNA *)&rna_Material_alpha_threshold, (PropertyRNA *)&rna_Material_blend_method,
	-1, "shadow_method", 3, 0, 0, 4, 0, "Shadow Mode",
	"Shadow mapping method",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, blend_shadow), 2, NULL},
	Material_shadow_method_get, Material_shadow_method_set, NULL, NULL, NULL, rna_Material_shadow_method_items, 4, 1
};

FloatPropertyRNA rna_Material_alpha_threshold = {
	{(PropertyRNA *)&rna_Material_show_transparent_back, (PropertyRNA *)&rna_Material_shadow_method,
	-1, "alpha_threshold", 3, 0, 0, 4, 0, "Clip Threshold",
	"A pixel is rendered only if its alpha value is above this threshold",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, alpha_threshold), 5, NULL},
	Material_alpha_threshold_get, Material_alpha_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

BoolPropertyRNA rna_Material_show_transparent_back = {
	{(PropertyRNA *)&rna_Material_use_backface_culling, (PropertyRNA *)&rna_Material_alpha_threshold,
	-1, "show_transparent_back", 3, 0, 0, 0, 0, "Show Backface",
	"Render multiple transparent layers (may introduce transparency sorting problems)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_show_transparent_back_get, Material_show_transparent_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_backface_culling = {
	{(PropertyRNA *)&rna_Material_use_screen_refraction, (PropertyRNA *)&rna_Material_show_transparent_back,
	-1, "use_backface_culling", 3, 0, 0, 0, 0, "Backface Culling",
	"Use back face culling to hide the back side of faces",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_use_backface_culling_get, Material_use_backface_culling_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_screen_refraction = {
	{(PropertyRNA *)&rna_Material_use_sss_translucency, (PropertyRNA *)&rna_Material_use_backface_culling,
	-1, "use_screen_refraction", 3, 0, 0, 0, 0, "Screen Space Refraction",
	"Use raytraced screen space refractions",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_use_screen_refraction_get, Material_use_screen_refraction_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Material_use_sss_translucency = {
	{(PropertyRNA *)&rna_Material_refraction_depth, (PropertyRNA *)&rna_Material_use_screen_refraction,
	-1, "use_sss_translucency", 3, 0, 0, 0, 0, "Subsurface Translucency",
	"Add translucency effect to subsurface",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_use_sss_translucency_get, Material_use_sss_translucency_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Material_refraction_depth = {
	{(PropertyRNA *)&rna_Material_light_group_bits, (PropertyRNA *)&rna_Material_use_sss_translucency,
	-1, "refraction_depth", 3, 0, 0, 4, 0, "Refraction Depth",
	"Approximate the thickness of the object to compute two refraction events (0 is disabled)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, refract_depth), 5, NULL},
	Material_refraction_depth_get, Material_refraction_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static int rna_Material_light_group_bits_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_Material_light_group_bits = {
	{(PropertyRNA *)&rna_Material_light_group_shadow_bits, (PropertyRNA *)&rna_Material_refraction_depth,
	-1, "light_group_bits", 268500993, 0, 0, 4, 0, "Light Groups",
	"Light group bitfield",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, light_group_bits), 0, NULL},
	NULL, NULL, Material_light_group_bits_get, Material_light_group_bits_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_Material_light_group_bits_default
};

static int rna_Material_light_group_shadow_bits_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_Material_light_group_shadow_bits = {
	{(PropertyRNA *)&rna_Material_check_shadow_id, (PropertyRNA *)&rna_Material_light_group_bits,
	-1, "light_group_shadow_bits", 268500993, 0, 0, 4, 0, "Light Group Shadows",
	"Light group shadow bitfield",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, light_group_shadow_bits), 0, NULL},
	NULL, NULL, Material_light_group_shadow_bits_get, Material_light_group_shadow_bits_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_Material_light_group_shadow_bits_default
};

BoolPropertyRNA rna_Material_check_shadow_id = {
	{(PropertyRNA *)&rna_Material_preview_render_type, (PropertyRNA *)&rna_Material_light_group_shadow_bits,
	-1, "check_shadow_id", 3, 0, 0, 0, 0, "Check Self Shadowing",
	"Calculate shadows cast by this object onto itself",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_check_shadow_id_get, Material_check_shadow_id_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Material_preview_render_type_items[8] = {
	{0, "FLAT", 728, "Flat", "Flat XY plane"},
	{1, "SPHERE", 729, "Sphere", "Sphere"},
	{2, "CUBE", 730, "Cube", "Cube"},
	{10, "HAIR", 732, "Hair", "Hair strands"},
	{3, "SHADERBALL", 736, "Shader Ball", "Shader ball"},
	{12, "CLOTH", 737, "Cloth", "Cloth"},
	{13, "FLUID", 738, "Fluid", "Fluid"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Material_preview_render_type = {
	{(PropertyRNA *)&rna_Material_use_preview_world, (PropertyRNA *)&rna_Material_check_shadow_id,
	-1, "preview_render_type", 3, 0, 0, 4, 0, "Preview Render Type",
	"Type of preview render",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update_previews, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, pr_type), 2, NULL},
	Material_preview_render_type_get, Material_preview_render_type_set, NULL, NULL, NULL, rna_Material_preview_render_type_items, 7, 1
};

BoolPropertyRNA rna_Material_use_preview_world = {
	{(PropertyRNA *)&rna_Material_pass_index, (PropertyRNA *)&rna_Material_preview_render_type,
	-1, "use_preview_world", 3, 0, 0, 0, 0, "Preview World",
	"Use the current world background to light the preview render",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update_previews, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_use_preview_world_get, Material_use_preview_world_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Material_pass_index = {
	{(PropertyRNA *)&rna_Material_node_tree, (PropertyRNA *)&rna_Material_use_preview_world,
	-1, "pass_index", 3, 0, 0, 4, 0, "Pass Index",
	"Index number for the \"Material Index\" render pass",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, index), 1, NULL},
	Material_pass_index_get, Material_pass_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_Material_node_tree = {
	{(PropertyRNA *)&rna_Material_use_nodes, (PropertyRNA *)&rna_Material_pass_index,
	-1, "node_tree", 8388672, 1, 0, 32, 0, "Node Tree",
	"Node tree for node based materials",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_Material_use_nodes = {
	{(PropertyRNA *)&rna_Material_animation_data, (PropertyRNA *)&rna_Material_node_tree,
	-1, "use_nodes", 4194305, 0, 0, 0, 0, "Use Nodes",
	"Use shader nodes to render the material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Material_use_nodes_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_use_nodes_get, Material_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Material_animation_data = {
	{(PropertyRNA *)&rna_Material_texture_paint_images, (PropertyRNA *)&rna_Material_use_nodes,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Material_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_Material_texture_paint_images = {
	{(PropertyRNA *)&rna_Material_texture_paint_slots, (PropertyRNA *)&rna_Material_animation_data,
	-1, "texture_paint_images", 128, 0, 0, 0, 0, "Texture Slot Images",
	"Texture images used for texture painting",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_texture_paint_images_begin, Material_texture_paint_images_next, Material_texture_paint_images_end, Material_texture_paint_images_get, NULL, Material_texture_paint_images_lookup_int, Material_texture_paint_images_lookup_string, NULL, &RNA_Image
};

CollectionPropertyRNA rna_Material_texture_paint_slots = {
	{(PropertyRNA *)&rna_Material_paint_active_slot, (PropertyRNA *)&rna_Material_texture_paint_images,
	-1, "texture_paint_slots", 0, 0, 0, 8, 0, "Texture Slots",
	"Texture slots defining the mapping and influence of textures",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_texture_paint_slots_begin, Material_texture_paint_slots_next, Material_texture_paint_slots_end, Material_texture_paint_slots_get, NULL, NULL, NULL, NULL, &RNA_TexPaintSlot
};

IntPropertyRNA rna_Material_paint_active_slot = {
	{(PropertyRNA *)&rna_Material_paint_clone_slot, (PropertyRNA *)&rna_Material_texture_paint_slots,
	-1, "paint_active_slot", 4194307, 0, 0, 4, 0, "Active Paint Texture Index",
	"Index of active texture paint slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Material_active_paint_texture_index_update, 119537664, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, paint_active_slot), 1, NULL},
	Material_paint_active_slot_get, Material_paint_active_slot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Material_paint_clone_slot = {
	{(PropertyRNA *)&rna_Material_diffuse_color, (PropertyRNA *)&rna_Material_paint_active_slot,
	-1, "paint_clone_slot", 3, 0, 0, 4, 0, "Clone Paint Texture Index",
	"Index of clone texture paint slot",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 119537664, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, paint_clone_slot), 1, NULL},
	Material_paint_clone_slot_get, Material_paint_clone_slot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

static float rna_Material_diffuse_color_default[4] = {
	0.8000000119f,
	0.8000000119f,
	0.8000000119f,
	0.8000000119f
};

FloatPropertyRNA rna_Material_diffuse_color = {
	{(PropertyRNA *)&rna_Material_specular_color, (PropertyRNA *)&rna_Material_paint_clone_slot,
	-1, "diffuse_color", 3, 1, 0, 4, 0, "Diffuse Color",
	"Diffuse color of the material",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, r), 5, NULL},
	NULL, NULL, Material_diffuse_color_get, Material_diffuse_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.8000000119f, rna_Material_diffuse_color_default
};

static float rna_Material_specular_color_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Material_specular_color = {
	{(PropertyRNA *)&rna_Material_roughness, (PropertyRNA *)&rna_Material_diffuse_color,
	-1, "specular_color", 3, 1, 0, 4, 0, "Specular Color",
	"Specular color of the material",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, specr), 5, NULL},
	NULL, NULL, Material_specular_color_get, Material_specular_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 1.0f, rna_Material_specular_color_default
};

FloatPropertyRNA rna_Material_roughness = {
	{(PropertyRNA *)&rna_Material_specular_intensity, (PropertyRNA *)&rna_Material_specular_color,
	-1, "roughness", 3, 1, 0, 4, 0, "Roughness",
	"Roughness of the material",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, roughness), 5, NULL},
	Material_roughness_get, Material_roughness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.4000000060f, NULL
};

FloatPropertyRNA rna_Material_specular_intensity = {
	{(PropertyRNA *)&rna_Material_metallic, (PropertyRNA *)&rna_Material_roughness,
	-1, "specular_intensity", 3, 1, 0, 4, 0, "Specular",
	"How intense (bright) the specular reflection is",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, spec), 5, NULL},
	Material_specular_intensity_get, Material_specular_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Material_metallic = {
	{(PropertyRNA *)&rna_Material_line_color, (PropertyRNA *)&rna_Material_specular_intensity,
	-1, "metallic", 3, 1, 0, 4, 0, "Metallic",
	"Amount of mirror reflection for raytrace",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, metallic), 5, NULL},
	Material_metallic_get, Material_metallic_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_Material_line_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Material_line_color = {
	{(PropertyRNA *)&rna_Material_line_priority, (PropertyRNA *)&rna_Material_metallic,
	-1, "line_color", 3, 0, 0, 4, 0, "Line Color",
	"Line color used for Freestyle line rendering",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Material_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, line_col), 5, NULL},
	NULL, NULL, Material_line_color_get, Material_line_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Material_line_color_default
};

IntPropertyRNA rna_Material_line_priority = {
	{(PropertyRNA *)&rna_Material_grease_pencil, (PropertyRNA *)&rna_Material_line_color,
	-1, "line_priority", 3, 0, 0, 4, 0, "Line Priority",
	"The line color of a higher priority is used at material boundaries",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Material, line_priority), 1, NULL},
	Material_line_priority_get, Material_line_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_Material_grease_pencil = {
	{(PropertyRNA *)&rna_Material_is_grease_pencil, (PropertyRNA *)&rna_Material_line_priority,
	-1, "grease_pencil", 8388608, 0, 0, 0, 0, "Grease Pencil Settings",
	"Grease pencil color settings for material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_grease_pencil_get, NULL, NULL, NULL,&RNA_MaterialGPencilStyle
};

BoolPropertyRNA rna_Material_is_grease_pencil = {
	{(PropertyRNA *)&rna_Material_lineart, (PropertyRNA *)&rna_Material_grease_pencil,
	-1, "is_grease_pencil", 2, 0, 0, 0, 0, "Is Grease Pencil",
	"True if this material has grease pencil data",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_is_grease_pencil_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Material_lineart = {
	{NULL, (PropertyRNA *)&rna_Material_is_grease_pencil,
	-1, "lineart", 8388608, 0, 0, 0, 0, "Line Art Settings",
	"Line art settings for material",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Material_lineart_get, NULL, NULL, NULL,&RNA_MaterialLineArt
};

StructRNA RNA_Material = {
	{(ContainerRNA *)&RNA_TexPaintSlot, (ContainerRNA *)&RNA_FluidEffectorSettings,
	NULL,
	{(PropertyRNA *)&rna_Material_blend_method, (PropertyRNA *)&rna_Material_lineart}},
	"Material", NULL, NULL, 519, NULL, "Material",
	"Material data-block to define the appearance of geometric objects for rendering",
	"*", 165,
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

/* Texture Paint Slot */
CollectionPropertyRNA rna_TexPaintSlot_rna_properties = {
	{(PropertyRNA *)&rna_TexPaintSlot_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TexPaintSlot_rna_properties_begin, TexPaintSlot_rna_properties_next, TexPaintSlot_rna_properties_end, TexPaintSlot_rna_properties_get, NULL, NULL, TexPaintSlot_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_TexPaintSlot_rna_type = {
	{(PropertyRNA *)&rna_TexPaintSlot_name, (PropertyRNA *)&rna_TexPaintSlot_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TexPaintSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_TexPaintSlot_name = {
	{(PropertyRNA *)&rna_TexPaintSlot_icon_value, (PropertyRNA *)&rna_TexPaintSlot_rna_type,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"Name of the slot",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TexPaintSlot_name_get, TexPaintSlot_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_TexPaintSlot_icon_value = {
	{(PropertyRNA *)&rna_TexPaintSlot_uv_layer, (PropertyRNA *)&rna_TexPaintSlot_name,
	-1, "icon_value", 2, 0, 0, 0, 0, "Icon",
	"Paint slot icon",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TexPaintSlot_icon_value_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_TexPaintSlot_uv_layer = {
	{(PropertyRNA *)&rna_TexPaintSlot_is_valid, (PropertyRNA *)&rna_TexPaintSlot_icon_value,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"Name of UV map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Material_update, 291176448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TexPaintSlot_uv_layer_get, TexPaintSlot_uv_layer_length, TexPaintSlot_uv_layer_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_TexPaintSlot_is_valid = {
	{NULL, (PropertyRNA *)&rna_TexPaintSlot_uv_layer,
	-1, "is_valid", 2, 0, 0, 0, 0, "Valid",
	"Slot has a valid image and UV map",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	TexPaintSlot_is_valid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_TexPaintSlot = {
	{(ContainerRNA *)&RNA_MaterialGPencilStyle, (ContainerRNA *)&RNA_Material,
	NULL,
	{(PropertyRNA *)&rna_TexPaintSlot_rna_properties, (PropertyRNA *)&rna_TexPaintSlot_is_valid}},
	"TexPaintSlot", NULL, NULL, 516, NULL, "Texture Paint Slot",
	"Slot that contains information about texture painting",
	"*", 17,
	NULL, (PropertyRNA *)&rna_TexPaintSlot_rna_properties,
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

/* Grease Pencil Color */
CollectionPropertyRNA rna_MaterialGPencilStyle_rna_properties = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_rna_properties_begin, MaterialGPencilStyle_rna_properties_next, MaterialGPencilStyle_rna_properties_end, MaterialGPencilStyle_rna_properties_get, NULL, NULL, MaterialGPencilStyle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialGPencilStyle_rna_type = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_color, (PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MaterialGPencilStyle_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_color = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_fill_color, (PropertyRNA *)&rna_MaterialGPencilStyle_rna_type,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, stroke_rgba), 5, NULL},
	NULL, NULL, MaterialGPencilStyle_color_get, MaterialGPencilStyle_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_color_default
};

static float rna_MaterialGPencilStyle_fill_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_fill_color = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mix_color, (PropertyRNA *)&rna_MaterialGPencilStyle_color,
	-1, "fill_color", 3, 0, 0, 4, 0, "Fill Color",
	"Color for filling region bounded by each stroke",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, fill_rgba), 5, NULL},
	NULL, NULL, MaterialGPencilStyle_fill_color_get, MaterialGPencilStyle_fill_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_fill_color_default
};

static float rna_MaterialGPencilStyle_mix_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_mix_color = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mix_factor, (PropertyRNA *)&rna_MaterialGPencilStyle_fill_color,
	-1, "mix_color", 3, 0, 0, 4, 0, "Mix Color",
	"Color for mixing with primary filling color",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mix_rgba), 5, NULL},
	NULL, NULL, MaterialGPencilStyle_mix_color_get, MaterialGPencilStyle_mix_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_mix_color_default
};

FloatPropertyRNA rna_MaterialGPencilStyle_mix_factor = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mix_stroke_factor, (PropertyRNA *)&rna_MaterialGPencilStyle_mix_color,
	-1, "mix_factor", 3, 0, 0, 4, 0, "Mix",
	"Mix Factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mix_factor), 5, NULL},
	MaterialGPencilStyle_mix_factor_get, MaterialGPencilStyle_mix_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialGPencilStyle_mix_stroke_factor = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_angle, (PropertyRNA *)&rna_MaterialGPencilStyle_mix_factor,
	-1, "mix_stroke_factor", 3, 0, 0, 4, 0, "Mix",
	"Mix Stroke Factor",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mix_stroke_factor), 5, NULL},
	MaterialGPencilStyle_mix_stroke_factor_get, MaterialGPencilStyle_mix_stroke_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MaterialGPencilStyle_texture_angle = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_scale, (PropertyRNA *)&rna_MaterialGPencilStyle_mix_stroke_factor,
	-1, "texture_angle", 3, 0, 0, 4, 0, "Angle",
	"Texture Orientation Angle",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_angle), 5, NULL},
	MaterialGPencilStyle_texture_angle_get, MaterialGPencilStyle_texture_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_MaterialGPencilStyle_texture_scale_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_texture_scale = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_offset, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_angle,
	-1, "texture_scale", 3, 0, 0, 4, 0, "Scale",
	"Scale Factor for Texture",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_scale), 5, NULL},
	NULL, NULL, MaterialGPencilStyle_texture_scale_get, MaterialGPencilStyle_texture_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_texture_scale_default
};

static float rna_MaterialGPencilStyle_texture_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MaterialGPencilStyle_texture_offset = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_pixel_size, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_scale,
	-1, "texture_offset", 3, 0, 0, 4, 0, "Offset",
	"Shift Texture in 2d Space",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_offset), 5, NULL},
	NULL, NULL, MaterialGPencilStyle_texture_offset_get, MaterialGPencilStyle_texture_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MaterialGPencilStyle_texture_offset_default
};

FloatPropertyRNA rna_MaterialGPencilStyle_pixel_size = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_hide, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_offset,
	-1, "pixel_size", 3, 0, 0, 4, 0, "UV Factor",
	"Texture Pixel Size factor along the stroke",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_gpcolordata_uv_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, texture_pixsize), 5, NULL},
	MaterialGPencilStyle_pixel_size_get, MaterialGPencilStyle_pixel_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 5000.0f, 1.0f, 5000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_hide = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_lock, (PropertyRNA *)&rna_MaterialGPencilStyle_pixel_size,
	-1, "hide", 4355, 0, 0, 0, 0, "Hide",
	"Set color Visibility",
	254, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_hide_get, MaterialGPencilStyle_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_lock = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_ghost, (PropertyRNA *)&rna_MaterialGPencilStyle_hide,
	-1, "lock", 4099, 0, 0, 0, 0, "Locked",
	"Protect color from further editing and/or frame changes",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_lock_get, MaterialGPencilStyle_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_ghost = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_texture_clamp, (PropertyRNA *)&rna_MaterialGPencilStyle_lock,
	-1, "ghost", 3, 0, 0, 0, 0, "Show in Ghosts",
	"Display strokes using this color when showing onion skins",
	53, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_ghost_get, MaterialGPencilStyle_ghost_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_texture_clamp = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_flip, (PropertyRNA *)&rna_MaterialGPencilStyle_ghost,
	-1, "texture_clamp", 3, 0, 0, 0, 0, "Clamp",
	"Do not repeat texture and clamp to one instance only",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_texture_clamp_get, MaterialGPencilStyle_texture_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_flip = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_use_overlap_strokes, (PropertyRNA *)&rna_MaterialGPencilStyle_texture_clamp,
	-1, "flip", 3, 0, 0, 0, 0, "Flip",
	"Flip filling colors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_flip_get, MaterialGPencilStyle_flip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_use_overlap_strokes = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_use_stroke_holdout, (PropertyRNA *)&rna_MaterialGPencilStyle_flip,
	-1, "use_overlap_strokes", 3, 0, 0, 0, 0, "Self Overlap",
	"Disable stencil and overlap self intersections with alpha materials",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_use_overlap_strokes_get, MaterialGPencilStyle_use_overlap_strokes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_use_stroke_holdout = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_use_fill_holdout, (PropertyRNA *)&rna_MaterialGPencilStyle_use_overlap_strokes,
	-1, "use_stroke_holdout", 3, 0, 0, 0, 0, "Holdout",
	"Remove the color from underneath this stroke by using it as a mask",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_use_stroke_holdout_get, MaterialGPencilStyle_use_stroke_holdout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_use_fill_holdout = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_show_stroke, (PropertyRNA *)&rna_MaterialGPencilStyle_use_stroke_holdout,
	-1, "use_fill_holdout", 3, 0, 0, 0, 0, "Holdout",
	"Remove the color from underneath this stroke by using it as a mask",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_use_fill_holdout_get, MaterialGPencilStyle_use_fill_holdout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_show_stroke = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_show_fill, (PropertyRNA *)&rna_MaterialGPencilStyle_use_fill_holdout,
	-1, "show_stroke", 3, 0, 0, 0, 0, "Show Stroke",
	"Show stroke lines of this material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_show_stroke_get, MaterialGPencilStyle_show_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_show_fill = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_alignment_mode, (PropertyRNA *)&rna_MaterialGPencilStyle_show_stroke,
	-1, "show_fill", 3, 0, 0, 0, 0, "Show Fill",
	"Show stroke fills of this material",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_show_fill_get, MaterialGPencilStyle_show_fill_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_MaterialGPencilStyle_alignment_mode_items[4] = {
	{0, "PATH", 0, "Path", "Follow stroke drawing path and object rotation"},
	{1, "OBJECT", 0, "Object", "Follow object rotation only"},
	{2, "FIXED", 0, "Fixed", "Do not follow drawing path or object rotation and keeps aligned with viewport"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGPencilStyle_alignment_mode = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_alignment_rotation, (PropertyRNA *)&rna_MaterialGPencilStyle_show_fill,
	-1, "alignment_mode", 3, 0, 0, 4, 0, "Alignment",
	"Defines how align Dots and Boxes with drawing path and object rotation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, alignment_mode), 0, NULL},
	MaterialGPencilStyle_alignment_mode_get, MaterialGPencilStyle_alignment_mode_set, NULL, NULL, NULL, rna_MaterialGPencilStyle_alignment_mode_items, 3, 0
};

FloatPropertyRNA rna_MaterialGPencilStyle_alignment_rotation = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_pass_index, (PropertyRNA *)&rna_MaterialGPencilStyle_alignment_mode,
	-1, "alignment_rotation", 3, 0, 0, 4, 0, "Rotation",
	"Additional rotation applied to dots and square texture of strokes. Only applies in texture shading mode",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, alignment_rotation), 5, NULL},
	MaterialGPencilStyle_alignment_rotation_get, MaterialGPencilStyle_alignment_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MaterialGPencilStyle_pass_index = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_mode, (PropertyRNA *)&rna_MaterialGPencilStyle_alignment_rotation,
	-1, "pass_index", 3, 0, 0, 4, 0, "Pass Index",
	"Index number for the \"Color Index\" pass",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, index), 1, NULL},
	MaterialGPencilStyle_pass_index_get, MaterialGPencilStyle_pass_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

static const EnumPropertyItem rna_MaterialGPencilStyle_mode_items[4] = {
	{0, "LINE", 0, "Line", "Draw strokes using a continuous line"},
	{1, "DOTS", 0, "Dots", "Draw strokes using separated dots"},
	{2, "BOX", 0, "Squares", "Draw strokes using separated squares"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGPencilStyle_mode = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_stroke_style, (PropertyRNA *)&rna_MaterialGPencilStyle_pass_index,
	-1, "mode", 3, 0, 0, 4, 0, "Line Type",
	"Select line type for strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, mode), 0, NULL},
	MaterialGPencilStyle_mode_get, MaterialGPencilStyle_mode_set, NULL, NULL, NULL, rna_MaterialGPencilStyle_mode_items, 3, 0
};

static const EnumPropertyItem rna_MaterialGPencilStyle_stroke_style_items[3] = {
	{0, "SOLID", 0, "Solid", "Draw strokes with solid color"},
	{1, "TEXTURE", 0, "Texture", "Draw strokes using texture"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGPencilStyle_stroke_style = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_stroke_image, (PropertyRNA *)&rna_MaterialGPencilStyle_mode,
	-1, "stroke_style", 3, 0, 0, 4, 0, "Stroke Style",
	"Select style used to draw strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, stroke_style), 1, NULL},
	MaterialGPencilStyle_stroke_style_get, MaterialGPencilStyle_stroke_style_set, NULL, NULL, NULL, rna_MaterialGPencilStyle_stroke_style_items, 2, 0
};

PointerPropertyRNA rna_MaterialGPencilStyle_stroke_image = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_fill_style, (PropertyRNA *)&rna_MaterialGPencilStyle_stroke_style,
	-1, "stroke_image", 8388801, 1, 0, 0, 0, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_stroke_image_get, MaterialGPencilStyle_stroke_image_set, NULL, NULL,&RNA_Image
};

static const EnumPropertyItem rna_MaterialGPencilStyle_fill_style_items[4] = {
	{0, "SOLID", 0, "Solid", "Fill area with solid color"},
	{1, "GRADIENT", 0, "Gradient", "Fill area with gradient color"},
	{3, "TEXTURE", 0, "Texture", "Fill area with image texture"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGPencilStyle_fill_style = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_gradient_type, (PropertyRNA *)&rna_MaterialGPencilStyle_stroke_image,
	-1, "fill_style", 3, 0, 0, 4, 0, "Fill Style",
	"Select style used to fill strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, fill_style), 1, NULL},
	MaterialGPencilStyle_fill_style_get, MaterialGPencilStyle_fill_style_set, NULL, NULL, NULL, rna_MaterialGPencilStyle_fill_style_items, 3, 0
};

static const EnumPropertyItem rna_MaterialGPencilStyle_gradient_type_items[3] = {
	{0, "LINEAR", 0, "Linear", "Fill area with gradient color"},
	{1, "RADIAL", 0, "Radial", "Fill area with radial gradient"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialGPencilStyle_gradient_type = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_fill_image, (PropertyRNA *)&rna_MaterialGPencilStyle_fill_style,
	-1, "gradient_type", 3, 0, 0, 4, 0, "Gradient Type",
	"Select type of gradient used to fill strokes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialGPencilStyle, gradient_type), 0, NULL},
	MaterialGPencilStyle_gradient_type_get, MaterialGPencilStyle_gradient_type_set, NULL, NULL, NULL, rna_MaterialGPencilStyle_gradient_type_items, 2, 0
};

PointerPropertyRNA rna_MaterialGPencilStyle_fill_image = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_is_stroke_visible, (PropertyRNA *)&rna_MaterialGPencilStyle_gradient_type,
	-1, "fill_image", 8388801, 1, 0, 0, 0, "Image",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialGpencil_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_fill_image_get, MaterialGPencilStyle_fill_image_set, NULL, NULL,&RNA_Image
};

BoolPropertyRNA rna_MaterialGPencilStyle_is_stroke_visible = {
	{(PropertyRNA *)&rna_MaterialGPencilStyle_is_fill_visible, (PropertyRNA *)&rna_MaterialGPencilStyle_fill_image,
	-1, "is_stroke_visible", 2, 0, 0, 0, 0, "Is Stroke Visible",
	"True when opacity of stroke is set high enough to be visible",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_is_stroke_visible_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MaterialGPencilStyle_is_fill_visible = {
	{NULL, (PropertyRNA *)&rna_MaterialGPencilStyle_is_stroke_visible,
	-1, "is_fill_visible", 2, 0, 0, 0, 0, "Is Fill Visible",
	"True when opacity of fill is set high enough to be visible",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialGPencilStyle_is_fill_visible_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaterialGPencilStyle = {
	{(ContainerRNA *)&RNA_MaterialLineArt, (ContainerRNA *)&RNA_TexPaintSlot,
	NULL,
	{(PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties, (PropertyRNA *)&rna_MaterialGPencilStyle_is_fill_visible}},
	"MaterialGPencilStyle", NULL, NULL, 516, NULL, "Grease Pencil Color",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialGPencilStyle_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_GpencilColorData_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Line Art */
CollectionPropertyRNA rna_MaterialLineArt_rna_properties = {
	{(PropertyRNA *)&rna_MaterialLineArt_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialLineArt_rna_properties_begin, MaterialLineArt_rna_properties_next, MaterialLineArt_rna_properties_end, MaterialLineArt_rna_properties_get, NULL, NULL, MaterialLineArt_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MaterialLineArt_rna_type = {
	{(PropertyRNA *)&rna_MaterialLineArt_use_material_mask, (PropertyRNA *)&rna_MaterialLineArt_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialLineArt_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MaterialLineArt_use_material_mask = {
	{(PropertyRNA *)&rna_MaterialLineArt_use_material_mask_bits, (PropertyRNA *)&rna_MaterialLineArt_rna_type,
	-1, "use_material_mask", 3, 0, 0, 0, 0, "Use Material Mask",
	"Use material masks to filter out occluded strokes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialLineArt_use_material_mask_get, MaterialLineArt_use_material_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static bool rna_MaterialLineArt_use_material_mask_bits_default[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_MaterialLineArt_use_material_mask_bits = {
	{(PropertyRNA *)&rna_MaterialLineArt_mat_occlusion, (PropertyRNA *)&rna_MaterialLineArt_use_material_mask,
	-1, "use_material_mask_bits", 3, 0, 0, 0, 0, "Mask",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {8, 0, 0}, 8,
	rna_MaterialLineArt_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MaterialLineArt_use_material_mask_bits_get, MaterialLineArt_use_material_mask_bits_set, NULL, NULL, NULL, NULL, 0, rna_MaterialLineArt_use_material_mask_bits_default
};

IntPropertyRNA rna_MaterialLineArt_mat_occlusion = {
	{(PropertyRNA *)&rna_MaterialLineArt_intersection_priority, (PropertyRNA *)&rna_MaterialLineArt_use_material_mask_bits,
	-1, "mat_occlusion", 3, 0, 0, 4, 0, "Effectiveness",
	"Faces with this material will behave as if it has set number of layers in occlusion",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialLineArt, mat_occlusion), 2, NULL},
	MaterialLineArt_mat_occlusion_get, MaterialLineArt_mat_occlusion_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 5, 0, 255, 1, 1, NULL
};

IntPropertyRNA rna_MaterialLineArt_intersection_priority = {
	{(PropertyRNA *)&rna_MaterialLineArt_use_intersection_priority_override, (PropertyRNA *)&rna_MaterialLineArt_mat_occlusion,
	-1, "intersection_priority", 3, 0, 0, 4, 0, "Intersection Priority",
	"The intersection line will be included into the object with the higher intersection priority value",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MaterialLineArt, intersection_priority), 2, NULL},
	MaterialLineArt_intersection_priority_get, MaterialLineArt_intersection_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

BoolPropertyRNA rna_MaterialLineArt_use_intersection_priority_override = {
	{NULL, (PropertyRNA *)&rna_MaterialLineArt_intersection_priority,
	-1, "use_intersection_priority_override", 3, 0, 0, 0, 0, "Use Intersection Priority",
	"Override object and collection intersection priority value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialLineArt_update, 387842048, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MaterialLineArt_use_intersection_priority_override_get, MaterialLineArt_use_intersection_priority_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MaterialLineArt = {
	{(ContainerRNA *)&RNA_Mesh, (ContainerRNA *)&RNA_MaterialGPencilStyle,
	NULL,
	{(PropertyRNA *)&rna_MaterialLineArt_rna_properties, (PropertyRNA *)&rna_MaterialLineArt_use_intersection_priority_override}},
	"MaterialLineArt", NULL, NULL, 516, NULL, "Material Line Art",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MaterialLineArt_rna_properties,
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

