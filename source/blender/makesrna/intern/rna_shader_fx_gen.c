
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

#include "rna_shader_fx.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_ShaderFx_rna_properties;
PointerPropertyRNA rna_ShaderFx_rna_type;
StringPropertyRNA rna_ShaderFx_name;
EnumPropertyRNA rna_ShaderFx_type;
BoolPropertyRNA rna_ShaderFx_show_viewport;
BoolPropertyRNA rna_ShaderFx_show_render;
BoolPropertyRNA rna_ShaderFx_show_in_editmode;
BoolPropertyRNA rna_ShaderFx_show_expanded;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

FloatPropertyRNA rna_ShaderFxBlur_size;
IntPropertyRNA rna_ShaderFxBlur_samples;
FloatPropertyRNA rna_ShaderFxBlur_rotation;
BoolPropertyRNA rna_ShaderFxBlur_use_dof_mode;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

FloatPropertyRNA rna_ShaderFxColorize_factor;
FloatPropertyRNA rna_ShaderFxColorize_low_color;
FloatPropertyRNA rna_ShaderFxColorize_high_color;
EnumPropertyRNA rna_ShaderFxColorize_mode;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

EnumPropertyRNA rna_ShaderFxWave_orientation;
FloatPropertyRNA rna_ShaderFxWave_amplitude;
FloatPropertyRNA rna_ShaderFxWave_period;
FloatPropertyRNA rna_ShaderFxWave_phase;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

IntPropertyRNA rna_ShaderFxPixel_size;
BoolPropertyRNA rna_ShaderFxPixel_use_antialiasing;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

IntPropertyRNA rna_ShaderFxRim_offset;
FloatPropertyRNA rna_ShaderFxRim_rim_color;
FloatPropertyRNA rna_ShaderFxRim_mask_color;
EnumPropertyRNA rna_ShaderFxRim_mode;
IntPropertyRNA rna_ShaderFxRim_blur;
IntPropertyRNA rna_ShaderFxRim_samples;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

PointerPropertyRNA rna_ShaderFxShadow_object;
IntPropertyRNA rna_ShaderFxShadow_offset;
FloatPropertyRNA rna_ShaderFxShadow_scale;
FloatPropertyRNA rna_ShaderFxShadow_shadow_color;
EnumPropertyRNA rna_ShaderFxShadow_orientation;
FloatPropertyRNA rna_ShaderFxShadow_amplitude;
FloatPropertyRNA rna_ShaderFxShadow_period;
FloatPropertyRNA rna_ShaderFxShadow_phase;
FloatPropertyRNA rna_ShaderFxShadow_rotation;
IntPropertyRNA rna_ShaderFxShadow_blur;
IntPropertyRNA rna_ShaderFxShadow_samples;
BoolPropertyRNA rna_ShaderFxShadow_use_object;
BoolPropertyRNA rna_ShaderFxShadow_use_wave;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

FloatPropertyRNA rna_ShaderFxGlow_glow_color;
FloatPropertyRNA rna_ShaderFxGlow_opacity;
FloatPropertyRNA rna_ShaderFxGlow_select_color;
EnumPropertyRNA rna_ShaderFxGlow_mode;
FloatPropertyRNA rna_ShaderFxGlow_threshold;
FloatPropertyRNA rna_ShaderFxGlow_size;
IntPropertyRNA rna_ShaderFxGlow_samples;
BoolPropertyRNA rna_ShaderFxGlow_use_glow_under;
FloatPropertyRNA rna_ShaderFxGlow_rotation;
EnumPropertyRNA rna_ShaderFxGlow_blend_mode;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

IntPropertyRNA rna_ShaderFxSwirl_radius;
FloatPropertyRNA rna_ShaderFxSwirl_angle;
BoolPropertyRNA rna_ShaderFxSwirl_use_transparent;
PointerPropertyRNA rna_ShaderFxSwirl_object;


extern CollectionPropertyRNA rna_ShaderFx_rna_properties;
extern PointerPropertyRNA rna_ShaderFx_rna_type;
extern StringPropertyRNA rna_ShaderFx_name;
extern EnumPropertyRNA rna_ShaderFx_type;
extern BoolPropertyRNA rna_ShaderFx_show_viewport;
extern BoolPropertyRNA rna_ShaderFx_show_render;
extern BoolPropertyRNA rna_ShaderFx_show_in_editmode;
extern BoolPropertyRNA rna_ShaderFx_show_expanded;

BoolPropertyRNA rna_ShaderFxFlip_use_flip_x;
BoolPropertyRNA rna_ShaderFxFlip_use_flip_y;

static PointerRNA ShaderFx_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ShaderFx_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ShaderFx_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShaderFx_rna_properties_get(iter);
    }
}

void ShaderFx_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ShaderFx_rna_properties_get(iter);
    }
}

void ShaderFx_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ShaderFx_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ShaderFx_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ShaderFx_name_get(PointerRNA *ptr, char *value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int ShaderFx_name_length(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return strlen(data->name);
}

void ShaderFx_name_set(PointerRNA *ptr, const char *value)
{
    rna_ShaderFx_name_set(ptr, value);
}

int ShaderFx_type_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (int)(data->type);
}

bool ShaderFx_show_viewport_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

void ShaderFx_show_viewport_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

bool ShaderFx_show_render_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (((data->mode) & 2) != 0);
}

void ShaderFx_show_render_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode |= 2; }
    else { data->mode &= ~2; }
}

bool ShaderFx_show_in_editmode_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (((data->mode) & 4) != 0);
}

void ShaderFx_show_in_editmode_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode |= 4; }
    else { data->mode &= ~4; }
}

bool ShaderFx_show_expanded_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

void ShaderFx_show_expanded_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    data->ui_expand_flag = value;
}

void ShaderFxBlur_size_get(PointerRNA *ptr, float values[2])
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->radius)[i]);
    }
}

void ShaderFxBlur_size_set(PointerRNA *ptr, const float values[2])
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->radius)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

int ShaderFxBlur_samples_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxBlur_samples_set(PointerRNA *ptr, int value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    data->samples = CLAMPIS(value, 0, 32);
}

float ShaderFxBlur_rotation_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

void ShaderFxBlur_rotation_set(PointerRNA *ptr, float value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    data->rotation = value;
}

bool ShaderFxBlur_use_dof_mode_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ShaderFxBlur_use_dof_mode_set(PointerRNA *ptr, bool value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

float ShaderFxColorize_factor_get(PointerRNA *ptr)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    return (float)(data->factor);
}

void ShaderFxColorize_factor_set(PointerRNA *ptr, float value)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    data->factor = CLAMPIS(value, 0.0f, 1.0f);
}

void ShaderFxColorize_low_color_get(PointerRNA *ptr, float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->low_color)[i]);
    }
}

void ShaderFxColorize_low_color_set(PointerRNA *ptr, const float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->low_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void ShaderFxColorize_high_color_get(PointerRNA *ptr, float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->high_color)[i]);
    }
}

void ShaderFxColorize_high_color_set(PointerRNA *ptr, const float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->high_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxColorize_mode_get(PointerRNA *ptr)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

void ShaderFxColorize_mode_set(PointerRNA *ptr, int value)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    data->mode = value;
}

int ShaderFxWave_orientation_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (int)(data->orientation);
}

void ShaderFxWave_orientation_set(PointerRNA *ptr, int value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->orientation = value;
}

float ShaderFxWave_amplitude_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->amplitude);
}

void ShaderFxWave_amplitude_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->amplitude = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ShaderFxWave_period_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->period);
}

void ShaderFxWave_period_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->period = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ShaderFxWave_phase_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->phase);
}

void ShaderFxWave_phase_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->phase = value;
}

void ShaderFxPixel_size_get(PointerRNA *ptr, int values[2])
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->size)[i]);
    }
}

void ShaderFxPixel_size_set(PointerRNA *ptr, const int values[2])
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->size)[i] = CLAMPIS(values[i], 1, 32767);
    }
}

bool ShaderFxPixel_use_antialiasing_get(PointerRNA *ptr)
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void ShaderFxPixel_use_antialiasing_set(PointerRNA *ptr, bool value)
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

void ShaderFxRim_offset_get(PointerRNA *ptr, int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->offset)[i]);
    }
}

void ShaderFxRim_offset_set(PointerRNA *ptr, const int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->offset)[i] = CLAMPIS(values[i], -32768, 32767);
    }
}

void ShaderFxRim_rim_color_get(PointerRNA *ptr, float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rim_rgb)[i]);
    }
}

void ShaderFxRim_rim_color_set(PointerRNA *ptr, const float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rim_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

void ShaderFxRim_mask_color_get(PointerRNA *ptr, float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->mask_rgb)[i]);
    }
}

void ShaderFxRim_mask_color_set(PointerRNA *ptr, const float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->mask_rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxRim_mode_get(PointerRNA *ptr)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

void ShaderFxRim_mode_set(PointerRNA *ptr, int value)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    data->mode = value;
}

void ShaderFxRim_blur_get(PointerRNA *ptr, int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->blur)[i]);
    }
}

void ShaderFxRim_blur_set(PointerRNA *ptr, const int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->blur)[i] = CLAMPIS(values[i], 0, 32767);
    }
}

int ShaderFxRim_samples_get(PointerRNA *ptr)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxRim_samples_set(PointerRNA *ptr, int value)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    data->samples = CLAMPIS(value, 0, 32);
}

PointerRNA ShaderFxShadow_object_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void ShaderFxShadow_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_ShadowShaderFx_object_set(ptr, value, reports);
}

void ShaderFxShadow_offset_get(PointerRNA *ptr, int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->offset)[i]);
    }
}

void ShaderFxShadow_offset_set(PointerRNA *ptr, const int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->offset)[i] = CLAMPIS(values[i], -32768, 32767);
    }
}

void ShaderFxShadow_scale_get(PointerRNA *ptr, float values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void ShaderFxShadow_scale_set(PointerRNA *ptr, const float values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void ShaderFxShadow_shadow_color_get(PointerRNA *ptr, float values[4])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->shadow_rgba)[i]);
    }
}

void ShaderFxShadow_shadow_color_set(PointerRNA *ptr, const float values[4])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->shadow_rgba)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxShadow_orientation_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (int)(data->orientation);
}

void ShaderFxShadow_orientation_set(PointerRNA *ptr, int value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->orientation = value;
}

float ShaderFxShadow_amplitude_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->amplitude);
}

void ShaderFxShadow_amplitude_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->amplitude = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ShaderFxShadow_period_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->period);
}

void ShaderFxShadow_period_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->period = CLAMPIS(value, 0.0f, FLT_MAX);
}

float ShaderFxShadow_phase_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->phase);
}

void ShaderFxShadow_phase_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->phase = value;
}

float ShaderFxShadow_rotation_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

void ShaderFxShadow_rotation_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->rotation = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

void ShaderFxShadow_blur_get(PointerRNA *ptr, int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->blur)[i]);
    }
}

void ShaderFxShadow_blur_set(PointerRNA *ptr, const int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((int *)data->blur)[i] = CLAMPIS(values[i], 0, 32767);
    }
}

int ShaderFxShadow_samples_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxShadow_samples_set(PointerRNA *ptr, int value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->samples = CLAMPIS(value, 0, 32);
}

bool ShaderFxShadow_use_object_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ShaderFxShadow_use_object_set(PointerRNA *ptr, bool value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool ShaderFxShadow_use_wave_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void ShaderFxShadow_use_wave_set(PointerRNA *ptr, bool value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

void ShaderFxGlow_glow_color_get(PointerRNA *ptr, float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->glow_color)[i]);
    }
}

void ShaderFxGlow_glow_color_set(PointerRNA *ptr, const float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->glow_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float ShaderFxGlow_opacity_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->glow_color[3]);
}

void ShaderFxGlow_opacity_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->glow_color[3] = CLAMPIS(value, 0.0f, 1.0f);
}

void ShaderFxGlow_select_color_get(PointerRNA *ptr, float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->select_color)[i]);
    }
}

void ShaderFxGlow_select_color_set(PointerRNA *ptr, const float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->select_color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxGlow_mode_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

void ShaderFxGlow_mode_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->mode = value;
}

float ShaderFxGlow_threshold_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->threshold);
}

void ShaderFxGlow_threshold_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->threshold = CLAMPIS(value, 0.0f, 1.0f);
}

void ShaderFxGlow_size_get(PointerRNA *ptr, float values[2])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->blur)[i]);
    }
}

void ShaderFxGlow_size_set(PointerRNA *ptr, const float values[2])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->blur)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

int ShaderFxGlow_samples_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxGlow_samples_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->samples = CLAMPIS(value, 1, 32);
}

bool ShaderFxGlow_use_glow_under_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ShaderFxGlow_use_glow_under_set(PointerRNA *ptr, bool value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

float ShaderFxGlow_rotation_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

void ShaderFxGlow_rotation_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->rotation = value;
}

int ShaderFxGlow_blend_mode_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->blend_mode);
}

void ShaderFxGlow_blend_mode_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->blend_mode = value;
}

int ShaderFxSwirl_radius_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (int)(data->radius);
}

void ShaderFxSwirl_radius_set(PointerRNA *ptr, int value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    data->radius = CLAMPIS(value, 0, 32767);
}

float ShaderFxSwirl_angle_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (float)(data->angle);
}

void ShaderFxSwirl_angle_set(PointerRNA *ptr, float value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    data->angle = CLAMPIS(value, -31.4159259796f, 31.4159259796f);
}

bool ShaderFxSwirl_use_transparent_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ShaderFxSwirl_use_transparent_set(PointerRNA *ptr, bool value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

PointerRNA ShaderFxSwirl_object_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

void ShaderFxSwirl_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_SwirlShaderFx_object_set(ptr, value, reports);
}

bool ShaderFxFlip_use_flip_x_get(PointerRNA *ptr)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ShaderFxFlip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool ShaderFxFlip_use_flip_y_get(PointerRNA *ptr)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void ShaderFxFlip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}











/* ShaderFx */
CollectionPropertyRNA rna_ShaderFx_rna_properties = {
	{(PropertyRNA *)&rna_ShaderFx_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFx_rna_properties_begin, ShaderFx_rna_properties_next, ShaderFx_rna_properties_end, ShaderFx_rna_properties_get, NULL, NULL, ShaderFx_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ShaderFx_rna_type = {
	{(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFx_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ShaderFx_name = {
	{(PropertyRNA *)&rna_ShaderFx_type, (PropertyRNA *)&rna_ShaderFx_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Effect name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 102760453, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFx_name_get, ShaderFx_name_length, ShaderFx_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_ShaderFx_type = {
	{(PropertyRNA *)&rna_ShaderFx_show_viewport, (PropertyRNA *)&rna_ShaderFx_name,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"",
	0, "ID",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShaderFxData, type), 0, NULL},
	ShaderFx_type_get, NULL, NULL, NULL, NULL, rna_enum_object_shaderfx_type_items, 9, 1
};

BoolPropertyRNA rna_ShaderFx_show_viewport = {
	{(PropertyRNA *)&rna_ShaderFx_show_render, (PropertyRNA *)&rna_ShaderFx_type,
	-1, "show_viewport", 69635, 1, 0, 0, 0, "Realtime",
	"Display effect in viewport",
	283, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFx_show_viewport_get, ShaderFx_show_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShaderFx_show_render = {
	{(PropertyRNA *)&rna_ShaderFx_show_in_editmode, (PropertyRNA *)&rna_ShaderFx_show_viewport,
	-1, "show_render", 4099, 1, 0, 0, 0, "Render",
	"Use effect during render",
	257, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFx_show_render_get, ShaderFx_show_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShaderFx_show_in_editmode = {
	{(PropertyRNA *)&rna_ShaderFx_show_expanded, (PropertyRNA *)&rna_ShaderFx_show_render,
	-1, "show_in_editmode", 3, 0, 0, 0, 0, "Edit Mode",
	"Display effect in Edit mode",
	131, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFx_show_in_editmode_get, ShaderFx_show_in_editmode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShaderFx_show_expanded = {
	{NULL, (PropertyRNA *)&rna_ShaderFx_show_in_editmode,
	-1, "show_expanded", 1073745923, 1, 0, 4, 0, "Expanded",
	"Set effect expansion in the user interface",
	10, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShaderFxData, ui_expand_flag), 1, NULL},
	ShaderFx_show_expanded_get, ShaderFx_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ShaderFx = {
	{(ContainerRNA *)&RNA_ShaderFxBlur, (ContainerRNA *)&RNA_EnvelopeGpencilModifier,
	NULL,
	{(PropertyRNA *)&rna_ShaderFx_rna_properties, (PropertyRNA *)&rna_ShaderFx_show_expanded}},
	"ShaderFx", NULL, NULL, 516, NULL, "ShaderFx",
	"Effect affecting the grease pencil object",
	"*", 17,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	NULL,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Gaussian Blur Effect */
static float rna_ShaderFxBlur_size_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxBlur_size = {
	{(PropertyRNA *)&rna_ShaderFxBlur_samples, NULL,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Factor of Blur",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BlurShaderFxData, radius), 5, NULL},
	NULL, NULL, ShaderFxBlur_size_get, ShaderFxBlur_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ShaderFxBlur_size_default
};

IntPropertyRNA rna_ShaderFxBlur_samples = {
	{(PropertyRNA *)&rna_ShaderFxBlur_rotation, (PropertyRNA *)&rna_ShaderFxBlur_size,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples (zero, disable blur)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BlurShaderFxData, samples), 0, NULL},
	ShaderFxBlur_samples_get, ShaderFxBlur_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32, 0, 32, 2, 4, NULL
};

FloatPropertyRNA rna_ShaderFxBlur_rotation = {
	{(PropertyRNA *)&rna_ShaderFxBlur_use_dof_mode, (PropertyRNA *)&rna_ShaderFxBlur_samples,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation of the effect",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BlurShaderFxData, rotation), 5, NULL},
	ShaderFxBlur_rotation_get, ShaderFxBlur_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ShaderFxBlur_use_dof_mode = {
	{NULL, (PropertyRNA *)&rna_ShaderFxBlur_rotation,
	-1, "use_dof_mode", 3, 1, 0, 0, 0, "Use as Depth Of Field",
	"Blur using camera depth of field",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxBlur_use_dof_mode_get, ShaderFxBlur_use_dof_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ShaderFxBlur = {
	{(ContainerRNA *)&RNA_ShaderFxColorize, (ContainerRNA *)&RNA_ShaderFx,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxBlur_size, (PropertyRNA *)&rna_ShaderFxBlur_use_dof_mode}},
	"ShaderFxBlur", NULL, NULL, 516, NULL, "Gaussian Blur Effect",
	"Gaussian Blur effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Colorize Effect */
FloatPropertyRNA rna_ShaderFxColorize_factor = {
	{(PropertyRNA *)&rna_ShaderFxColorize_low_color, NULL,
	-1, "factor", 3, 1, 0, 4, 0, "Factor",
	"Mix factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, factor), 5, NULL},
	ShaderFxColorize_factor_get, ShaderFxColorize_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ShaderFxColorize_low_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxColorize_low_color = {
	{(PropertyRNA *)&rna_ShaderFxColorize_high_color, (PropertyRNA *)&rna_ShaderFxColorize_factor,
	-1, "low_color", 3, 1, 0, 4, 0, "Low Color",
	"First color used for effect",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, low_color), 5, NULL},
	NULL, NULL, ShaderFxColorize_low_color_get, ShaderFxColorize_low_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxColorize_low_color_default
};

static float rna_ShaderFxColorize_high_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxColorize_high_color = {
	{(PropertyRNA *)&rna_ShaderFxColorize_mode, (PropertyRNA *)&rna_ShaderFxColorize_low_color,
	-1, "high_color", 3, 1, 0, 4, 0, "High Color",
	"Second color used for effect",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, high_color), 5, NULL},
	NULL, NULL, ShaderFxColorize_high_color_get, ShaderFxColorize_high_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxColorize_high_color_default
};

static const EnumPropertyItem rna_ShaderFxColorize_mode_items[6] = {
	{0, "GRAYSCALE", 0, "Gray Scale", ""},
	{1, "SEPIA", 0, "Sepia", ""},
	{2, "DUOTONE", 0, "Duotone", ""},
	{4, "TRANSPARENT", 0, "Transparent", ""},
	{3, "CUSTOM", 0, "Custom", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShaderFxColorize_mode = {
	{NULL, (PropertyRNA *)&rna_ShaderFxColorize_high_color,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Effect mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ColorizeShaderFxData, mode), 0, NULL},
	ShaderFxColorize_mode_get, ShaderFxColorize_mode_set, NULL, NULL, NULL, rna_ShaderFxColorize_mode_items, 5, 0
};

StructRNA RNA_ShaderFxColorize = {
	{(ContainerRNA *)&RNA_ShaderFxWave, (ContainerRNA *)&RNA_ShaderFxBlur,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxColorize_factor, (PropertyRNA *)&rna_ShaderFxColorize_mode}},
	"ShaderFxColorize", NULL, NULL, 516, NULL, "Colorize Effect",
	"Colorize effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Wave Deformation Effect */
static const EnumPropertyItem rna_ShaderFxWave_orientation_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "VERTICAL", 0, "Vertical", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShaderFxWave_orientation = {
	{(PropertyRNA *)&rna_ShaderFxWave_amplitude, NULL,
	-1, "orientation", 3, 1, 0, 4, 0, "Orientation",
	"Direction of the wave",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, orientation), 0, NULL},
	ShaderFxWave_orientation_get, ShaderFxWave_orientation_set, NULL, NULL, NULL, rna_ShaderFxWave_orientation_items, 2, 0
};

FloatPropertyRNA rna_ShaderFxWave_amplitude = {
	{(PropertyRNA *)&rna_ShaderFxWave_period, (PropertyRNA *)&rna_ShaderFxWave_orientation,
	-1, "amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"Amplitude of Wave",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, amplitude), 5, NULL},
	ShaderFxWave_amplitude_get, ShaderFxWave_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShaderFxWave_period = {
	{(PropertyRNA *)&rna_ShaderFxWave_phase, (PropertyRNA *)&rna_ShaderFxWave_amplitude,
	-1, "period", 3, 1, 0, 4, 0, "Period",
	"Period of Wave",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, period), 5, NULL},
	ShaderFxWave_period_get, ShaderFxWave_period_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShaderFxWave_phase = {
	{NULL, (PropertyRNA *)&rna_ShaderFxWave_period,
	-1, "phase", 3, 1, 0, 4, 0, "Phase",
	"Phase Shift of Wave",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WaveShaderFxData, phase), 5, NULL},
	ShaderFxWave_phase_get, ShaderFxWave_phase_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ShaderFxWave = {
	{(ContainerRNA *)&RNA_ShaderFxPixel, (ContainerRNA *)&RNA_ShaderFxColorize,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxWave_orientation, (PropertyRNA *)&rna_ShaderFxWave_phase}},
	"ShaderFxWave", NULL, NULL, 516, NULL, "Wave Deformation Effect",
	"Wave Deformation effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Pixelate Effect */
static int rna_ShaderFxPixel_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxPixel_size = {
	{(PropertyRNA *)&rna_ShaderFxPixel_use_antialiasing, NULL,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Pixel size",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PixelShaderFxData, size), 0, NULL},
	NULL, NULL, ShaderFxPixel_size_get, ShaderFxPixel_size_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32767, 1, 32767, 1, 0, rna_ShaderFxPixel_size_default
};

BoolPropertyRNA rna_ShaderFxPixel_use_antialiasing = {
	{NULL, (PropertyRNA *)&rna_ShaderFxPixel_size,
	-1, "use_antialiasing", 3, 1, 0, 0, 0, "Antialiasing",
	"Antialias pixels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxPixel_use_antialiasing_get, ShaderFxPixel_use_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ShaderFxPixel = {
	{(ContainerRNA *)&RNA_ShaderFxRim, (ContainerRNA *)&RNA_ShaderFxWave,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxPixel_size, (PropertyRNA *)&rna_ShaderFxPixel_use_antialiasing}},
	"ShaderFxPixel", NULL, NULL, 516, NULL, "Pixelate Effect",
	"Pixelate effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Rim Effect */
static int rna_ShaderFxRim_offset_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxRim_offset = {
	{(PropertyRNA *)&rna_ShaderFxRim_rim_color, NULL,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"Offset of the rim",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, offset), 0, NULL},
	NULL, NULL, ShaderFxRim_offset_get, ShaderFxRim_offset_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, rna_ShaderFxRim_offset_default
};

static float rna_ShaderFxRim_rim_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxRim_rim_color = {
	{(PropertyRNA *)&rna_ShaderFxRim_mask_color, (PropertyRNA *)&rna_ShaderFxRim_offset,
	-1, "rim_color", 3, 1, 0, 4, 0, "Rim Color",
	"Color used for Rim",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, rim_rgb), 5, NULL},
	NULL, NULL, ShaderFxRim_rim_color_get, ShaderFxRim_rim_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxRim_rim_color_default
};

static float rna_ShaderFxRim_mask_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxRim_mask_color = {
	{(PropertyRNA *)&rna_ShaderFxRim_mode, (PropertyRNA *)&rna_ShaderFxRim_rim_color,
	-1, "mask_color", 3, 1, 0, 4, 0, "Mask Color",
	"Color that must be kept",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, mask_rgb), 5, NULL},
	NULL, NULL, ShaderFxRim_mask_color_get, ShaderFxRim_mask_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxRim_mask_color_default
};

static const EnumPropertyItem rna_ShaderFxRim_mode_items[7] = {
	{0, "NORMAL", 0, "Regular", ""},
	{1, "OVERLAY", 0, "Overlay", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "MULTIPLY", 0, "Multiply", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShaderFxRim_mode = {
	{(PropertyRNA *)&rna_ShaderFxRim_blur, (PropertyRNA *)&rna_ShaderFxRim_mask_color,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Blend mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, mode), 0, NULL},
	ShaderFxRim_mode_get, ShaderFxRim_mode_set, NULL, NULL, NULL, rna_ShaderFxRim_mode_items, 6, 0
};

static int rna_ShaderFxRim_blur_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxRim_blur = {
	{(PropertyRNA *)&rna_ShaderFxRim_samples, (PropertyRNA *)&rna_ShaderFxRim_mode,
	-1, "blur", 3, 1, 0, 4, 0, "Blur",
	"Number of pixels for blurring rim (set to 0 to disable)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, blur), 0, NULL},
	NULL, NULL, ShaderFxRim_blur_get, ShaderFxRim_blur_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, rna_ShaderFxRim_blur_default
};

IntPropertyRNA rna_ShaderFxRim_samples = {
	{NULL, (PropertyRNA *)&rna_ShaderFxRim_blur,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples (zero, disable blur)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RimShaderFxData, samples), 0, NULL},
	ShaderFxRim_samples_get, ShaderFxRim_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32, 0, 32, 2, 4, NULL
};

StructRNA RNA_ShaderFxRim = {
	{(ContainerRNA *)&RNA_ShaderFxShadow, (ContainerRNA *)&RNA_ShaderFxPixel,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxRim_offset, (PropertyRNA *)&rna_ShaderFxRim_samples}},
	"ShaderFxRim", NULL, NULL, 516, NULL, "Rim Effect",
	"Rim effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shadow Effect */
PointerPropertyRNA rna_ShaderFxShadow_object = {
	{(PropertyRNA *)&rna_ShaderFxShadow_offset, NULL,
	-1, "object", 9437313, 1, 0, 0, 0, "Object",
	"Object to determine center of rotation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxShadow_object_get, ShaderFxShadow_object_set, NULL, NULL,&RNA_Object
};

static int rna_ShaderFxShadow_offset_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxShadow_offset = {
	{(PropertyRNA *)&rna_ShaderFxShadow_scale, (PropertyRNA *)&rna_ShaderFxShadow_object,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"Offset of the shadow",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, offset), 0, NULL},
	NULL, NULL, ShaderFxShadow_offset_get, ShaderFxShadow_offset_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, rna_ShaderFxShadow_offset_default
};

static float rna_ShaderFxShadow_scale_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxShadow_scale = {
	{(PropertyRNA *)&rna_ShaderFxShadow_shadow_color, (PropertyRNA *)&rna_ShaderFxShadow_offset,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Offset of the shadow",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, scale), 5, NULL},
	NULL, NULL, ShaderFxShadow_scale_get, ShaderFxShadow_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShaderFxShadow_scale_default
};

static float rna_ShaderFxShadow_shadow_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxShadow_shadow_color = {
	{(PropertyRNA *)&rna_ShaderFxShadow_orientation, (PropertyRNA *)&rna_ShaderFxShadow_scale,
	-1, "shadow_color", 3, 1, 0, 4, 0, "Shadow Color",
	"Color used for Shadow",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, shadow_rgba), 5, NULL},
	NULL, NULL, ShaderFxShadow_shadow_color_get, ShaderFxShadow_shadow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxShadow_shadow_color_default
};

static const EnumPropertyItem rna_ShaderFxShadow_orientation_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "VERTICAL", 0, "Vertical", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShaderFxShadow_orientation = {
	{(PropertyRNA *)&rna_ShaderFxShadow_amplitude, (PropertyRNA *)&rna_ShaderFxShadow_shadow_color,
	-1, "orientation", 3, 1, 0, 4, 0, "Orientation",
	"Direction of the wave",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, orientation), 0, NULL},
	ShaderFxShadow_orientation_get, ShaderFxShadow_orientation_set, NULL, NULL, NULL, rna_ShaderFxShadow_orientation_items, 2, 0
};

FloatPropertyRNA rna_ShaderFxShadow_amplitude = {
	{(PropertyRNA *)&rna_ShaderFxShadow_period, (PropertyRNA *)&rna_ShaderFxShadow_orientation,
	-1, "amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"Amplitude of Wave",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, amplitude), 5, NULL},
	ShaderFxShadow_amplitude_get, ShaderFxShadow_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShaderFxShadow_period = {
	{(PropertyRNA *)&rna_ShaderFxShadow_phase, (PropertyRNA *)&rna_ShaderFxShadow_amplitude,
	-1, "period", 3, 1, 0, 4, 0, "Period",
	"Period of Wave",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, period), 5, NULL},
	ShaderFxShadow_period_get, ShaderFxShadow_period_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShaderFxShadow_phase = {
	{(PropertyRNA *)&rna_ShaderFxShadow_rotation, (PropertyRNA *)&rna_ShaderFxShadow_period,
	-1, "phase", 3, 1, 0, 4, 0, "Phase",
	"Phase Shift of Wave",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, phase), 5, NULL},
	ShaderFxShadow_phase_get, ShaderFxShadow_phase_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShaderFxShadow_rotation = {
	{(PropertyRNA *)&rna_ShaderFxShadow_blur, (PropertyRNA *)&rna_ShaderFxShadow_phase,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation around center or object",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, rotation), 5, NULL},
	ShaderFxShadow_rotation_get, ShaderFxShadow_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 5.0f, 2, 0.0f, NULL
};

static int rna_ShaderFxShadow_blur_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ShaderFxShadow_blur = {
	{(PropertyRNA *)&rna_ShaderFxShadow_samples, (PropertyRNA *)&rna_ShaderFxShadow_rotation,
	-1, "blur", 3, 1, 0, 4, 0, "Blur",
	"Number of pixels for blurring shadow (set to 0 to disable)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, blur), 0, NULL},
	NULL, NULL, ShaderFxShadow_blur_get, ShaderFxShadow_blur_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, rna_ShaderFxShadow_blur_default
};

IntPropertyRNA rna_ShaderFxShadow_samples = {
	{(PropertyRNA *)&rna_ShaderFxShadow_use_object, (PropertyRNA *)&rna_ShaderFxShadow_blur,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples (zero, disable blur)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ShadowShaderFxData, samples), 0, NULL},
	ShaderFxShadow_samples_get, ShaderFxShadow_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32, 0, 32, 2, 4, NULL
};

BoolPropertyRNA rna_ShaderFxShadow_use_object = {
	{(PropertyRNA *)&rna_ShaderFxShadow_use_wave, (PropertyRNA *)&rna_ShaderFxShadow_samples,
	-1, "use_object", 3, 1, 0, 0, 0, "Use Object",
	"Use object as center of rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxShadow_use_object_get, ShaderFxShadow_use_object_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShaderFxShadow_use_wave = {
	{NULL, (PropertyRNA *)&rna_ShaderFxShadow_use_object,
	-1, "use_wave", 3, 1, 0, 0, 0, "Wave",
	"Use wave effect",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxShadow_use_wave_get, ShaderFxShadow_use_wave_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ShaderFxShadow = {
	{(ContainerRNA *)&RNA_ShaderFxGlow, (ContainerRNA *)&RNA_ShaderFxRim,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxShadow_object, (PropertyRNA *)&rna_ShaderFxShadow_use_wave}},
	"ShaderFxShadow", NULL, NULL, 516, NULL, "Shadow Effect",
	"Shadow effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Glow Effect */
static float rna_ShaderFxGlow_glow_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxGlow_glow_color = {
	{(PropertyRNA *)&rna_ShaderFxGlow_opacity, NULL,
	-1, "glow_color", 3, 1, 0, 4, 0, "Glow Color",
	"Color used for generated glow",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, glow_color), 5, NULL},
	NULL, NULL, ShaderFxGlow_glow_color_get, ShaderFxGlow_glow_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxGlow_glow_color_default
};

FloatPropertyRNA rna_ShaderFxGlow_opacity = {
	{(PropertyRNA *)&rna_ShaderFxGlow_select_color, (PropertyRNA *)&rna_ShaderFxGlow_glow_color,
	-1, "opacity", 3, 1, 0, 4, 0, "Opacity",
	"Effect Opacity",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, glow_color[3]), 5, NULL},
	ShaderFxGlow_opacity_get, ShaderFxGlow_opacity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ShaderFxGlow_select_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxGlow_select_color = {
	{(PropertyRNA *)&rna_ShaderFxGlow_mode, (PropertyRNA *)&rna_ShaderFxGlow_opacity,
	-1, "select_color", 3, 1, 0, 4, 0, "Select Color",
	"Color selected to apply glow",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, select_color), 5, NULL},
	NULL, NULL, ShaderFxGlow_select_color_get, ShaderFxGlow_select_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ShaderFxGlow_select_color_default
};

static const EnumPropertyItem rna_ShaderFxGlow_mode_items[3] = {
	{0, "LUMINANCE", 0, "Luminance", ""},
	{1, "COLOR", 0, "Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShaderFxGlow_mode = {
	{(PropertyRNA *)&rna_ShaderFxGlow_threshold, (PropertyRNA *)&rna_ShaderFxGlow_select_color,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Glow mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, mode), 0, NULL},
	ShaderFxGlow_mode_get, ShaderFxGlow_mode_set, NULL, NULL, NULL, rna_ShaderFxGlow_mode_items, 2, 0
};

FloatPropertyRNA rna_ShaderFxGlow_threshold = {
	{(PropertyRNA *)&rna_ShaderFxGlow_size, (PropertyRNA *)&rna_ShaderFxGlow_mode,
	-1, "threshold", 3, 1, 0, 4, 0, "Threshold",
	"Limit to select color for glow effect",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, threshold), 5, NULL},
	ShaderFxGlow_threshold_get, ShaderFxGlow_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, 0.0f, NULL
};

static float rna_ShaderFxGlow_size_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShaderFxGlow_size = {
	{(PropertyRNA *)&rna_ShaderFxGlow_samples, (PropertyRNA *)&rna_ShaderFxGlow_threshold,
	-1, "size", 3, 1, 0, 4, 0, "Size",
	"Size of the effect",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, blur), 5, NULL},
	NULL, NULL, ShaderFxGlow_size_get, ShaderFxGlow_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_ShaderFxGlow_size_default
};

IntPropertyRNA rna_ShaderFxGlow_samples = {
	{(PropertyRNA *)&rna_ShaderFxGlow_use_glow_under, (PropertyRNA *)&rna_ShaderFxGlow_size,
	-1, "samples", 3, 1, 0, 4, 0, "Samples",
	"Number of Blur Samples",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, samples), 0, NULL},
	ShaderFxGlow_samples_get, ShaderFxGlow_samples_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32, 1, 32, 2, 4, NULL
};

BoolPropertyRNA rna_ShaderFxGlow_use_glow_under = {
	{(PropertyRNA *)&rna_ShaderFxGlow_rotation, (PropertyRNA *)&rna_ShaderFxGlow_samples,
	-1, "use_glow_under", 3, 1, 0, 0, 0, "Glow Under",
	"Glow only areas with alpha (not supported with Regular blend mode)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxGlow_use_glow_under_get, ShaderFxGlow_use_glow_under_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ShaderFxGlow_rotation = {
	{(PropertyRNA *)&rna_ShaderFxGlow_blend_mode, (PropertyRNA *)&rna_ShaderFxGlow_use_glow_under,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation of the effect",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, rotation), 5, NULL},
	ShaderFxGlow_rotation_get, ShaderFxGlow_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_ShaderFxGlow_blend_mode_items[6] = {
	{0, "REGULAR", 0, "Regular", ""},
	{2, "ADD", 0, "Add", ""},
	{3, "SUBTRACT", 0, "Subtract", ""},
	{4, "MULTIPLY", 0, "Multiply", ""},
	{5, "DIVIDE", 0, "Divide", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShaderFxGlow_blend_mode = {
	{NULL, (PropertyRNA *)&rna_ShaderFxGlow_rotation,
	-1, "blend_mode", 3, 1, 0, 4, 0, "Blend Mode",
	"Blend mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(GlowShaderFxData, blend_mode), 0, NULL},
	ShaderFxGlow_blend_mode_get, ShaderFxGlow_blend_mode_set, NULL, NULL, NULL, rna_ShaderFxGlow_blend_mode_items, 5, 0
};

StructRNA RNA_ShaderFxGlow = {
	{(ContainerRNA *)&RNA_ShaderFxSwirl, (ContainerRNA *)&RNA_ShaderFxShadow,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxGlow_glow_color, (PropertyRNA *)&rna_ShaderFxGlow_blend_mode}},
	"ShaderFxGlow", NULL, NULL, 516, NULL, "Glow Effect",
	"Glow effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Swirl Effect */
IntPropertyRNA rna_ShaderFxSwirl_radius = {
	{(PropertyRNA *)&rna_ShaderFxSwirl_angle, NULL,
	-1, "radius", 3, 1, 0, 4, 0, "Radius",
	"Radius to apply",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SwirlShaderFxData, radius), 0, NULL},
	ShaderFxSwirl_radius_get, ShaderFxSwirl_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_ShaderFxSwirl_angle = {
	{(PropertyRNA *)&rna_ShaderFxSwirl_use_transparent, (PropertyRNA *)&rna_ShaderFxSwirl_radius,
	-1, "angle", 3, 1, 0, 4, 0, "Angle",
	"Angle of rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(SwirlShaderFxData, angle), 5, NULL},
	ShaderFxSwirl_angle_get, ShaderFxSwirl_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -31.4159259796f, 31.4159259796f, -31.4159259796f, 31.4159259796f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_ShaderFxSwirl_use_transparent = {
	{(PropertyRNA *)&rna_ShaderFxSwirl_object, (PropertyRNA *)&rna_ShaderFxSwirl_angle,
	-1, "use_transparent", 3, 1, 0, 0, 0, "Transparent",
	"Make image transparent outside of radius",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxSwirl_use_transparent_get, ShaderFxSwirl_use_transparent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ShaderFxSwirl_object = {
	{NULL, (PropertyRNA *)&rna_ShaderFxSwirl_use_transparent,
	-1, "object", 9437313, 1, 0, 0, 0, "Object",
	"Object to determine center location",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxSwirl_object_get, ShaderFxSwirl_object_set, NULL, NULL,&RNA_Object
};

StructRNA RNA_ShaderFxSwirl = {
	{(ContainerRNA *)&RNA_ShaderFxFlip, (ContainerRNA *)&RNA_ShaderFxGlow,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxSwirl_radius, (PropertyRNA *)&rna_ShaderFxSwirl_object}},
	"ShaderFxSwirl", NULL, NULL, 516, NULL, "Swirl Effect",
	"Swirl effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Flip Effect */
BoolPropertyRNA rna_ShaderFxFlip_use_flip_x = {
	{(PropertyRNA *)&rna_ShaderFxFlip_use_flip_y, NULL,
	-1, "use_flip_x", 3, 1, 0, 0, 0, "Horizontal",
	"Flip image horizontally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxFlip_use_flip_x_get, ShaderFxFlip_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ShaderFxFlip_use_flip_y = {
	{NULL, (PropertyRNA *)&rna_ShaderFxFlip_use_flip_x,
	-1, "use_flip_y", 3, 1, 0, 0, 0, "Vertical",
	"Flip image vertically",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ShaderFx_update, 102760448, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ShaderFxFlip_use_flip_y_get, ShaderFxFlip_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ShaderFxFlip = {
	{(ContainerRNA *)&RNA_NlaTrack, (ContainerRNA *)&RNA_ShaderFxSwirl,
	NULL,
	{(PropertyRNA *)&rna_ShaderFxFlip_use_flip_x, (PropertyRNA *)&rna_ShaderFxFlip_use_flip_y}},
	"ShaderFxFlip", NULL, NULL, 516, NULL, "Flip Effect",
	"Flip effect",
	"*", 93,
	(PropertyRNA *)&rna_ShaderFx_name, (PropertyRNA *)&rna_ShaderFx_rna_properties,
	&RNA_ShaderFx,
	NULL,
	rna_ShaderFx_refine,
	rna_ShaderFx_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

