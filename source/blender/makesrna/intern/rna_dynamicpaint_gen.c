
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

#include "rna_dynamicpaint.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties;
PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type;
CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces;


CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties;
PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type;
IntPropertyRNA rna_DynamicPaintSurfaces_active_index;
PointerPropertyRNA rna_DynamicPaintSurfaces_active;


CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties;
PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase;
EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type;
FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor;
FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge;
FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength;
FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color;
EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source;
FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha;
EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project;
EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction;
BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume;
PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system;
BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius;
FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius;
FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius;
PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp;
PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp;


CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties;
PointerPropertyRNA rna_DynamicPaintSurface_rna_type;
EnumPropertyRNA rna_DynamicPaintSurface_surface_format;
EnumPropertyRNA rna_DynamicPaintSurface_surface_type;
BoolPropertyRNA rna_DynamicPaintSurface_is_active;
StringPropertyRNA rna_DynamicPaintSurface_name;
PointerPropertyRNA rna_DynamicPaintSurface_brush_collection;
BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve;
IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed;
BoolPropertyRNA rna_DynamicPaintSurface_use_drying;
IntPropertyRNA rna_DynamicPaintSurface_dry_speed;
IntPropertyRNA rna_DynamicPaintSurface_image_resolution;
StringPropertyRNA rna_DynamicPaintSurface_uv_layer;
IntPropertyRNA rna_DynamicPaintSurface_frame_start;
IntPropertyRNA rna_DynamicPaintSurface_frame_end;
IntPropertyRNA rna_DynamicPaintSurface_frame_substeps;
BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing;
FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale;
FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale;
EnumPropertyRNA rna_DynamicPaintSurface_init_color_type;
FloatPropertyRNA rna_DynamicPaintSurface_init_color;
PointerPropertyRNA rna_DynamicPaintSurface_init_texture;
StringPropertyRNA rna_DynamicPaintSurface_init_layername;
EnumPropertyRNA rna_DynamicPaintSurface_effect_ui;
BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log;
BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log;
BoolPropertyRNA rna_DynamicPaintSurface_use_spread;
FloatPropertyRNA rna_DynamicPaintSurface_spread_speed;
FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold;
FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed;
BoolPropertyRNA rna_DynamicPaintSurface_use_drip;
BoolPropertyRNA rna_DynamicPaintSurface_use_shrink;
FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed;
PointerPropertyRNA rna_DynamicPaintSurface_effector_weights;
FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity;
FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration;
BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply;
StringPropertyRNA rna_DynamicPaintSurface_image_output_path;
StringPropertyRNA rna_DynamicPaintSurface_output_name_a;
BoolPropertyRNA rna_DynamicPaintSurface_use_output_a;
StringPropertyRNA rna_DynamicPaintSurface_output_name_b;
BoolPropertyRNA rna_DynamicPaintSurface_use_output_b;
FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp;
FloatPropertyRNA rna_DynamicPaintSurface_displace_factor;
EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat;
EnumPropertyRNA rna_DynamicPaintSurface_displace_type;
BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace;
FloatPropertyRNA rna_DynamicPaintSurface_wave_damping;
FloatPropertyRNA rna_DynamicPaintSurface_wave_speed;
FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale;
FloatPropertyRNA rna_DynamicPaintSurface_wave_spring;
FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness;
BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border;
PointerPropertyRNA rna_DynamicPaintSurface_point_cache;
BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user;

extern FunctionRNA rna_DynamicPaintSurface_output_exists_func;
extern PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object;
extern IntPropertyRNA rna_DynamicPaintSurface_output_exists_index;
extern BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists;


static PointerRNA DynamicPaintCanvasSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DynamicPaintCanvasSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
    }
}

void DynamicPaintCanvasSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
    }
}

void DynamicPaintCanvasSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DynamicPaintCanvasSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintCanvasSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA DynamicPaintCanvasSettings_canvas_surfaces_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_DynamicPaintSurface, rna_iterator_listbase_get(iter));
}

void DynamicPaintCanvasSettings_canvas_surfaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces;

    rna_DynamicPaint_surfaces_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
    }
}

void DynamicPaintCanvasSettings_canvas_surfaces_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
    }
}

void DynamicPaintCanvasSettings_canvas_surfaces_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA DynamicPaintSurfaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DynamicPaintSurfaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
    }
}

void DynamicPaintSurfaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
    }
}

void DynamicPaintSurfaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DynamicPaintSurfaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintSurfaces_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int DynamicPaintSurfaces_active_index_get(PointerRNA *ptr)
{
    return rna_Surface_active_point_index_get(ptr);
}

void DynamicPaintSurfaces_active_index_set(PointerRNA *ptr, int value)
{
    rna_Surface_active_point_index_set(ptr, value);
}

PointerRNA DynamicPaintSurfaces_active_get(PointerRNA *ptr)
{
    return rna_PaintSurface_active_get(ptr);
}

static PointerRNA DynamicPaintBrushSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DynamicPaintBrushSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
    }
}

void DynamicPaintBrushSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
    }
}

void DynamicPaintBrushSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DynamicPaintBrushSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintBrushSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void DynamicPaintBrushSettings_paint_color_get(PointerRNA *ptr, float values[3])
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void DynamicPaintBrushSettings_paint_color_set(PointerRNA *ptr, const float values[3])
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->r)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

float DynamicPaintBrushSettings_paint_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->alpha);
}

void DynamicPaintBrushSettings_paint_alpha_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->alpha = CLAMPIS(value, 0.0f, 1.0f);
}

bool DynamicPaintBrushSettings_use_absolute_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void DynamicPaintBrushSettings_use_absolute_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

float DynamicPaintBrushSettings_paint_wetness_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wetness);
}

void DynamicPaintBrushSettings_paint_wetness_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wetness = CLAMPIS(value, 0.0f, 1.0f);
}

bool DynamicPaintBrushSettings_use_paint_erase_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

void DynamicPaintBrushSettings_use_paint_erase_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

int DynamicPaintBrushSettings_wave_type_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->wave_type);
}

void DynamicPaintBrushSettings_wave_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wave_type = value;
}

float DynamicPaintBrushSettings_wave_factor_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wave_factor);
}

void DynamicPaintBrushSettings_wave_factor_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wave_factor = CLAMPIS(value, -2.0f, 2.0f);
}

float DynamicPaintBrushSettings_wave_clamp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wave_clamp);
}

void DynamicPaintBrushSettings_wave_clamp_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wave_clamp = CLAMPIS(value, 0.0f, 50.0f);
}

bool DynamicPaintBrushSettings_use_smudge_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

void DynamicPaintBrushSettings_use_smudge_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

float DynamicPaintBrushSettings_smudge_strength_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->smudge_strength);
}

void DynamicPaintBrushSettings_smudge_strength_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->smudge_strength = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintBrushSettings_velocity_max_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->max_velocity);
}

void DynamicPaintBrushSettings_velocity_max_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->max_velocity = CLAMPIS(value, 0.0001000000f, 10.0f);
}

bool DynamicPaintBrushSettings_use_velocity_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

void DynamicPaintBrushSettings_use_velocity_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

bool DynamicPaintBrushSettings_use_velocity_depth_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 2048) != 0);
}

void DynamicPaintBrushSettings_use_velocity_depth_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 2048; }
    else { data->flags &= ~2048; }
}

bool DynamicPaintBrushSettings_use_velocity_color_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

void DynamicPaintBrushSettings_use_velocity_color_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

int DynamicPaintBrushSettings_paint_source_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->collision);
}

void DynamicPaintBrushSettings_paint_source_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->collision = value;
}

float DynamicPaintBrushSettings_paint_distance_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->paint_distance);
}

void DynamicPaintBrushSettings_paint_distance_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->paint_distance = CLAMPIS(value, 0.0f, 500.0f);
}

bool DynamicPaintBrushSettings_use_proximity_ramp_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

void DynamicPaintBrushSettings_use_proximity_ramp_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

int DynamicPaintBrushSettings_proximity_falloff_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->proximity_falloff);
}

void DynamicPaintBrushSettings_proximity_falloff_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->proximity_falloff = value;
}

bool DynamicPaintBrushSettings_use_proximity_project_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

void DynamicPaintBrushSettings_use_proximity_project_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

int DynamicPaintBrushSettings_ray_direction_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->ray_dir);
}

void DynamicPaintBrushSettings_ray_direction_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->ray_dir = value;
}

bool DynamicPaintBrushSettings_invert_proximity_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 64) != 0);
}

void DynamicPaintBrushSettings_invert_proximity_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 64; }
    else { data->flags &= ~64; }
}

bool DynamicPaintBrushSettings_use_negative_volume_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

void DynamicPaintBrushSettings_use_negative_volume_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

PointerRNA DynamicPaintBrushSettings_particle_system_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

void DynamicPaintBrushSettings_particle_system_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->psys = value.data;
}

bool DynamicPaintBrushSettings_use_particle_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

void DynamicPaintBrushSettings_use_particle_radius_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

float DynamicPaintBrushSettings_solid_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->particle_radius);
}

void DynamicPaintBrushSettings_solid_radius_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->particle_radius = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float DynamicPaintBrushSettings_smooth_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->particle_smooth);
}

void DynamicPaintBrushSettings_smooth_radius_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->particle_smooth = CLAMPIS(value, 0.0f, 10.0f);
}

PointerRNA DynamicPaintBrushSettings_paint_ramp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->paint_ramp);
}

PointerRNA DynamicPaintBrushSettings_velocity_ramp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, data->vel_ramp);
}

static PointerRNA DynamicPaintSurface_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DynamicPaintSurface_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
    }
}

void DynamicPaintSurface_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
    }
}

void DynamicPaintSurface_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DynamicPaintSurface_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DynamicPaintSurface_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int DynamicPaintSurface_surface_format_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->format);
}

void DynamicPaintSurface_surface_format_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->format = value;
}

int DynamicPaintSurface_surface_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->type);
}

void DynamicPaintSurface_surface_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->type = value;
}

bool DynamicPaintSurface_is_active_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 1) != 0);
}

void DynamicPaintSurface_is_active_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 1; }
    else { data->flags &= ~1; }
}

void DynamicPaintSurface_name_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int DynamicPaintSurface_name_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->name);
}

void DynamicPaintSurface_name_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

PointerRNA DynamicPaintSurface_brush_collection_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->brush_group);
}

void DynamicPaintSurface_brush_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->brush_group = value.data;
}

bool DynamicPaintSurface_use_dissolve_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void DynamicPaintSurface_use_dissolve_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

int DynamicPaintSurface_dissolve_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->diss_speed);
}

void DynamicPaintSurface_dissolve_speed_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->diss_speed = CLAMPIS(value, 1, 10000);
}

bool DynamicPaintSurface_use_drying_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 512) != 0);
}

void DynamicPaintSurface_use_drying_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 512; }
    else { data->flags &= ~512; }
}

int DynamicPaintSurface_dry_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->dry_speed);
}

void DynamicPaintSurface_dry_speed_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->dry_speed = CLAMPIS(value, 1, 10000);
}

int DynamicPaintSurface_image_resolution_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->image_resolution);
}

void DynamicPaintSurface_image_resolution_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->image_resolution = CLAMPIS(value, 16, 4096);
}

void DynamicPaintSurface_uv_layer_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(value, data->uvlayer_name, 64);
}

int DynamicPaintSurface_uv_layer_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->uvlayer_name);
}

void DynamicPaintSurface_uv_layer_set(PointerRNA *ptr, const char *value)
{
    rna_DynamicPaint_uvlayer_set(ptr, value);
}

int DynamicPaintSurface_frame_start_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->start_frame);
}

void DynamicPaintSurface_frame_start_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->start_frame = CLAMPIS(value, 1, 1048574);
}

int DynamicPaintSurface_frame_end_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->end_frame);
}

void DynamicPaintSurface_frame_end_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->end_frame = CLAMPIS(value, 1, 1048574);
}

int DynamicPaintSurface_frame_substeps_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->substeps);
}

void DynamicPaintSurface_frame_substeps_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->substeps = CLAMPIS(value, 0, 20);
}

bool DynamicPaintSurface_use_antialiasing_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void DynamicPaintSurface_use_antialiasing_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

float DynamicPaintSurface_brush_influence_scale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->influence_scale);
}

void DynamicPaintSurface_brush_influence_scale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->influence_scale = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_brush_radius_scale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->radius_scale);
}

void DynamicPaintSurface_brush_radius_scale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->radius_scale = CLAMPIS(value, 0.0f, 10.0f);
}

int DynamicPaintSurface_init_color_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->init_color_type);
}

void DynamicPaintSurface_init_color_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->init_color_type = value;
}

void DynamicPaintSurface_init_color_get(PointerRNA *ptr, float values[4])
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->init_color)[i]);
    }
}

void DynamicPaintSurface_init_color_set(PointerRNA *ptr, const float values[4])
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->init_color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA DynamicPaintSurface_init_texture_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->init_texture);
}

void DynamicPaintSurface_init_texture_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);

    if (data->init_texture) {
        id_us_min((ID *)data->init_texture);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->init_texture = value.data;
}

void DynamicPaintSurface_init_layername_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(value, data->init_layername, 64);
}

int DynamicPaintSurface_init_layername_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->init_layername);
}

void DynamicPaintSurface_init_layername_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->init_layername, value, 64);
}

int DynamicPaintSurface_effect_ui_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->effect_ui);
}

void DynamicPaintSurface_effect_ui_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->effect_ui = value;
}

bool DynamicPaintSurface_use_dry_log_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 32) != 0);
}

void DynamicPaintSurface_use_dry_log_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 32; }
    else { data->flags &= ~32; }
}

bool DynamicPaintSurface_use_dissolve_log_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 16) != 0);
}

void DynamicPaintSurface_use_dissolve_log_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 16; }
    else { data->flags &= ~16; }
}

bool DynamicPaintSurface_use_spread_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->effect) & 1) != 0);
}

void DynamicPaintSurface_use_spread_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect |= 1; }
    else { data->effect &= ~1; }
}

float DynamicPaintSurface_spread_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->spread_speed);
}

void DynamicPaintSurface_spread_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->spread_speed = CLAMPIS(value, 0.0010000000f, 10.0f);
}

float DynamicPaintSurface_color_dry_threshold_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->color_dry_threshold);
}

void DynamicPaintSurface_color_dry_threshold_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->color_dry_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_color_spread_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->color_spread_speed);
}

void DynamicPaintSurface_color_spread_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->color_spread_speed = CLAMPIS(value, 0.0f, 2.0f);
}

bool DynamicPaintSurface_use_drip_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->effect) & 2) != 0);
}

void DynamicPaintSurface_use_drip_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect |= 2; }
    else { data->effect &= ~2; }
}

bool DynamicPaintSurface_use_shrink_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->effect) & 4) != 0);
}

void DynamicPaintSurface_use_shrink_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect |= 4; }
    else { data->effect &= ~4; }
}

float DynamicPaintSurface_shrink_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->shrink_speed);
}

void DynamicPaintSurface_shrink_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->shrink_speed = CLAMPIS(value, 0.0010000000f, 10.0f);
}

PointerRNA DynamicPaintSurface_effector_weights_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

float DynamicPaintSurface_drip_velocity_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->drip_vel);
}

void DynamicPaintSurface_drip_velocity_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->drip_vel = CLAMPIS(value, -200.0f, 200.0f);
}

float DynamicPaintSurface_drip_acceleration_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->drip_acc);
}

void DynamicPaintSurface_drip_acceleration_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->drip_acc = CLAMPIS(value, -200.0f, 200.0f);
}

bool DynamicPaintSurface_use_premultiply_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 8) != 0);
}

void DynamicPaintSurface_use_premultiply_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 8; }
    else { data->flags &= ~8; }
}

void DynamicPaintSurface_image_output_path_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy(value, data->image_output_path, 1024);
}

int DynamicPaintSurface_image_output_path_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->image_output_path);
}

void DynamicPaintSurface_image_output_path_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy(data->image_output_path, value, 1024);
}

void DynamicPaintSurface_output_name_a_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(value, data->output_name, 64);
}

int DynamicPaintSurface_output_name_a_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->output_name);
}

void DynamicPaintSurface_output_name_a_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->output_name, value, 64);
}

bool DynamicPaintSurface_use_output_a_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 1024) != 0);
}

void DynamicPaintSurface_use_output_a_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 1024; }
    else { data->flags &= ~1024; }
}

void DynamicPaintSurface_output_name_b_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(value, data->output_name2, 64);
}

int DynamicPaintSurface_output_name_b_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->output_name2);
}

void DynamicPaintSurface_output_name_b_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->output_name2, value, 64);
}

bool DynamicPaintSurface_use_output_b_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 2048) != 0);
}

void DynamicPaintSurface_use_output_b_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 2048; }
    else { data->flags &= ~2048; }
}

float DynamicPaintSurface_depth_clamp_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->depth_clamp);
}

void DynamicPaintSurface_depth_clamp_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->depth_clamp = CLAMPIS(value, 0.0f, 50.0f);
}

float DynamicPaintSurface_displace_factor_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->disp_factor);
}

void DynamicPaintSurface_displace_factor_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->disp_factor = CLAMPIS(value, -50.0f, 50.0f);
}

int DynamicPaintSurface_image_fileformat_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->image_fileformat);
}

void DynamicPaintSurface_image_fileformat_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->image_fileformat = value;
}

int DynamicPaintSurface_displace_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->disp_type);
}

void DynamicPaintSurface_displace_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->disp_type = value;
}

bool DynamicPaintSurface_use_incremental_displace_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 256) != 0);
}

void DynamicPaintSurface_use_incremental_displace_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 256; }
    else { data->flags &= ~256; }
}

float DynamicPaintSurface_wave_damping_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_damping);
}

void DynamicPaintSurface_wave_damping_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_damping = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_wave_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_speed);
}

void DynamicPaintSurface_wave_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_speed = CLAMPIS(value, 0.0099999998f, 5.0f);
}

float DynamicPaintSurface_wave_timescale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_timescale);
}

void DynamicPaintSurface_wave_timescale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_timescale = CLAMPIS(value, 0.0099999998f, 3.0f);
}

float DynamicPaintSurface_wave_spring_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_spring);
}

void DynamicPaintSurface_wave_spring_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_spring = CLAMPIS(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_wave_smoothness_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_smoothness);
}

void DynamicPaintSurface_wave_smoothness_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_smoothness = CLAMPIS(value, 0.0f, 10.0f);
}

bool DynamicPaintSurface_use_wave_open_border_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (((data->flags) & 128) != 0);
}

void DynamicPaintSurface_use_wave_open_border_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags |= 128; }
    else { data->flags &= ~128; }
}

PointerRNA DynamicPaintSurface_point_cache_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->pointcache);
}

bool DynamicPaintSurface_is_cache_user_get(PointerRNA *ptr)
{
    return rna_DynamicPaint_is_cache_user_get(ptr);
}




bool DynamicPaintSurface_output_exists_func(struct DynamicPaintSurface *_self, struct Object *object, int index)
{
	return rna_DynamicPaint_is_output_exists(_self, object, index);
}

void DynamicPaintSurface_output_exists_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct DynamicPaintSurface *_self;
	struct Object *object;
	int index;
	bool exists;
	char *_data, *_retdata;
	
	_self = (struct DynamicPaintSurface *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	exists = rna_DynamicPaint_is_output_exists(_self, object, index);
	*((bool *)_retdata) = exists;
}

/* Repeated prototypes to detect errors */

bool rna_DynamicPaint_is_output_exists(struct DynamicPaintSurface *_self, struct Object *object, int index);

/* Canvas Settings */
CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintCanvasSettings_rna_properties_begin, DynamicPaintCanvasSettings_rna_properties_next, DynamicPaintCanvasSettings_rna_properties_end, DynamicPaintCanvasSettings_rna_properties_get, NULL, NULL, DynamicPaintCanvasSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintCanvasSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_type,
	-1, "canvas_surfaces", 0, 0, 0, 0, 0, "Paint Surface List",
	"Paint surface list",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_DynamicPaintSurfaces},
	DynamicPaintCanvasSettings_canvas_surfaces_begin, DynamicPaintCanvasSettings_canvas_surfaces_next, DynamicPaintCanvasSettings_canvas_surfaces_end, DynamicPaintCanvasSettings_canvas_surfaces_get, NULL, NULL, NULL, NULL, &RNA_DynamicPaintSurface
};

StructRNA RNA_DynamicPaintCanvasSettings = {
	{(ContainerRNA *)&RNA_DynamicPaintSurfaces, (ContainerRNA *)&RNA_SplineBezierPoints,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_canvas_surfaces}},
	"DynamicPaintCanvasSettings", NULL, NULL, 516, NULL, "Canvas Settings",
	"Dynamic Paint canvas settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DynamicPaintCanvasSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DynamicPaintCanvasSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Canvas Surfaces */
CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurfaces_rna_properties_begin, DynamicPaintSurfaces_rna_properties_next, DynamicPaintSurfaces_rna_properties_end, DynamicPaintSurfaces_rna_properties_get, NULL, NULL, DynamicPaintSurfaces_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_active_index, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurfaces_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_DynamicPaintSurfaces_active_index = {
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_active, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_type,
	-1, "active_index", 1, 0, 0, 0, 0, "Active Point Cache Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurfaces_active_index_get, DynamicPaintSurfaces_active_index_set, NULL, NULL, rna_Surface_active_point_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintSurfaces_active = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintSurfaces_active_index,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Surface",
	"Active Dynamic Paint surface being displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurfaces_active_get, NULL, NULL, NULL,&RNA_DynamicPaintSurface
};

StructRNA RNA_DynamicPaintSurfaces = {
	{(ContainerRNA *)&RNA_DynamicPaintBrushSettings, (ContainerRNA *)&RNA_DynamicPaintCanvasSettings,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties, (PropertyRNA *)&rna_DynamicPaintSurfaces_active}},
	"DynamicPaintSurfaces", NULL, NULL, 516, NULL, "Canvas Surfaces",
	"Collection of Dynamic Paint Canvas surfaces",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DynamicPaintSurfaces_rna_properties,
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

/* Brush Settings */
CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_rna_properties_begin, DynamicPaintBrushSettings_rna_properties_next, DynamicPaintBrushSettings_rna_properties_end, DynamicPaintBrushSettings_rna_properties_get, NULL, NULL, DynamicPaintBrushSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_color, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_DynamicPaintBrushSettings_paint_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_type,
	-1, "paint_color", 3, 0, 0, 4, 0, "Paint Color",
	"Color of the paint",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, r), 5, NULL},
	NULL, NULL, DynamicPaintBrushSettings_paint_color_get, DynamicPaintBrushSettings_paint_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_DynamicPaintBrushSettings_paint_color_default
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_absolute_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_color,
	-1, "paint_alpha", 3, 0, 0, 4, 0, "Paint Alpha",
	"Paint alpha",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, alpha), 5, NULL},
	DynamicPaintBrushSettings_paint_alpha_get, DynamicPaintBrushSettings_paint_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_wetness, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_alpha,
	-1, "use_absolute_alpha", 3, 0, 0, 0, 0, "Absolute Alpha",
	"Only increase alpha value if paint alpha is higher than existing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_absolute_alpha_get, DynamicPaintBrushSettings_use_absolute_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_paint_erase, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_absolute_alpha,
	-1, "paint_wetness", 3, 0, 0, 4, 0, "Paint Wetness",
	"Paint wetness, visible in wetmap (some effects only affect wet paint)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wetness), 5, NULL},
	DynamicPaintBrushSettings_paint_wetness_get, DynamicPaintBrushSettings_paint_wetness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_type, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_wetness,
	-1, "use_paint_erase", 3, 0, 0, 0, 0, "Erase Paint",
	"Erase / remove paint instead of adding it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_paint_erase_get, DynamicPaintBrushSettings_use_paint_erase_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_wave_type_items[5] = {
	{3, "CHANGE", 0, "Depth Change", ""},
	{0, "DEPTH", 0, "Obstacle", ""},
	{1, "FORCE", 0, "Force", ""},
	{2, "REFLECT", 0, "Reflect Only", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_factor, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_paint_erase,
	-1, "wave_type", 1, 0, 0, 4, 0, "Wave Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wave_type), 1, NULL},
	DynamicPaintBrushSettings_wave_type_get, DynamicPaintBrushSettings_wave_type_set, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_wave_type_items, 4, 0
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_clamp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_type,
	-1, "wave_factor", 3, 0, 0, 4, 0, "Factor",
	"Multiplier for wave influence of this brush",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wave_factor), 5, NULL},
	DynamicPaintBrushSettings_wave_factor_get, DynamicPaintBrushSettings_wave_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -2.0f, 2.0f, 5.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_smudge, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_factor,
	-1, "wave_clamp", 3, 0, 0, 4, 0, "Clamp Waves",
	"Maximum level of surface intersection used to influence waves (use 0.0 to disable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, wave_clamp), 5, NULL},
	DynamicPaintBrushSettings_wave_clamp_get, DynamicPaintBrushSettings_wave_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_smudge_strength, (PropertyRNA *)&rna_DynamicPaintBrushSettings_wave_clamp,
	-1, "use_smudge", 3, 0, 0, 0, 0, "Do Smudge",
	"Make this brush to smudge existing paint as it moves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_smudge_get, DynamicPaintBrushSettings_use_smudge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_max, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_smudge,
	-1, "smudge_strength", 3, 0, 0, 4, 0, "Smudge Strength",
	"Smudge effect strength",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, smudge_strength), 5, NULL},
	DynamicPaintBrushSettings_smudge_strength_get, DynamicPaintBrushSettings_smudge_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_smudge_strength,
	-1, "velocity_max", 3, 0, 0, 4, 0, "Max Velocity",
	"Velocity considered as maximum influence (Blender units per frame)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, max_velocity), 5, NULL},
	DynamicPaintBrushSettings_velocity_max_get, DynamicPaintBrushSettings_velocity_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 2.0f, 0.0001000000f, 10.0f, 5.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_depth, (PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_max,
	-1, "use_velocity_alpha", 3, 0, 0, 0, 0, "Multiply Alpha",
	"Multiply brush influence by velocity color ramp alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_velocity_alpha_get, DynamicPaintBrushSettings_use_velocity_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_color, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_alpha,
	-1, "use_velocity_depth", 3, 0, 0, 0, 0, "Multiply Depth",
	"Multiply brush intersection depth (displace, waves) by velocity ramp alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_velocity_depth_get, DynamicPaintBrushSettings_use_velocity_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_source, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_depth,
	-1, "use_velocity_color", 3, 0, 0, 0, 0, "Replace Color",
	"Replace brush color by velocity color ramp",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_velocity_color_get, DynamicPaintBrushSettings_use_velocity_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_paint_source_items[6] = {
	{3, "PARTICLE_SYSTEM", 88, "Particle System", ""},
	{4, "POINT", 318, "Object Center", ""},
	{1, "DISTANCE", 63, "Proximity", ""},
	{2, "VOLUME_DISTANCE", 307, "Mesh Volume + Proximity", ""},
	{0, "VOLUME", 287, "Mesh Volume", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_distance, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_velocity_color,
	-1, "paint_source", 1, 0, 0, 4, 0, "Paint Source",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, collision), 0, NULL},
	DynamicPaintBrushSettings_paint_source_get, DynamicPaintBrushSettings_paint_source_set, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_paint_source_items, 5, 0
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_source,
	-1, "paint_distance", 3, 0, 0, 4, 0, "Proximity Distance",
	"Maximum distance from brush to mesh surface to affect paint",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, paint_distance), 5, NULL},
	DynamicPaintBrushSettings_paint_distance_get, DynamicPaintBrushSettings_paint_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_proximity_falloff, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_distance,
	-1, "use_proximity_ramp_alpha", 3, 0, 0, 0, 0, "Only Use Alpha",
	"Only read color ramp alpha",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_proximity_ramp_alpha_get, DynamicPaintBrushSettings_use_proximity_ramp_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_proximity_falloff_items[4] = {
	{1, "SMOOTH", 559, "Smooth", ""},
	{0, "CONSTANT", 563, "Constant", ""},
	{2, "RAMP", 54, "Color Ramp", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_project, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha,
	-1, "proximity_falloff", 1, 0, 0, 4, 0, "Falloff",
	"Proximity falloff type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, proximity_falloff), 1, NULL},
	DynamicPaintBrushSettings_proximity_falloff_get, DynamicPaintBrushSettings_proximity_falloff_set, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_proximity_falloff_items, 3, 0
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_ray_direction, (PropertyRNA *)&rna_DynamicPaintBrushSettings_proximity_falloff,
	-1, "use_proximity_project", 3, 0, 0, 0, 0, "Project",
	"Brush is projected to canvas from defined direction within brush proximity",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_proximity_project_get, DynamicPaintBrushSettings_use_proximity_project_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_DynamicPaintBrushSettings_ray_direction_items[4] = {
	{0, "CANVAS", 0, "Canvas Normal", ""},
	{1, "BRUSH", 0, "Brush Normal", ""},
	{2, "Z_AXIS", 0, "Z-Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_invert_proximity, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_proximity_project,
	-1, "ray_direction", 3, 0, 0, 4, 0, "Ray Direction",
	"Ray direction to use for projection (if brush object is located in that direction it\'s painted)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, ray_dir), 1, NULL},
	DynamicPaintBrushSettings_ray_direction_get, DynamicPaintBrushSettings_ray_direction_set, NULL, NULL, NULL, rna_DynamicPaintBrushSettings_ray_direction_items, 3, 0
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_negative_volume, (PropertyRNA *)&rna_DynamicPaintBrushSettings_ray_direction,
	-1, "invert_proximity", 3, 0, 0, 0, 0, "Inner Proximity",
	"Proximity falloff is applied inside the volume",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_invert_proximity_get, DynamicPaintBrushSettings_invert_proximity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_particle_system, (PropertyRNA *)&rna_DynamicPaintBrushSettings_invert_proximity,
	-1, "use_negative_volume", 3, 0, 0, 0, 0, "Negate Volume",
	"Negate influence inside the volume",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_negative_volume_get, DynamicPaintBrushSettings_use_negative_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_use_particle_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_negative_volume,
	-1, "particle_system", 8388609, 0, 0, 0, 0, "Particle Systems",
	"The particle system to paint with",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_reset_dependency, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_particle_system_get, DynamicPaintBrushSettings_particle_system_set, NULL, NULL,&RNA_ParticleSystem
};

BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_solid_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_particle_system,
	-1, "use_particle_radius", 3, 0, 0, 0, 0, "Use Particle Radius",
	"Use radius from particle settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_use_particle_radius_get, DynamicPaintBrushSettings_use_particle_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_smooth_radius, (PropertyRNA *)&rna_DynamicPaintBrushSettings_use_particle_radius,
	-1, "solid_radius", 3, 0, 0, 4, 0, "Solid Radius",
	"Radius that will be painted solid",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, particle_radius), 5, NULL},
	DynamicPaintBrushSettings_solid_radius_get, DynamicPaintBrushSettings_solid_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 2.0f, 0.0099999998f, 10.0f, 5.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_ramp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_solid_radius,
	-1, "smooth_radius", 3, 0, 0, 4, 0, "Smooth Radius",
	"Smooth falloff added after solid radius",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintBrushSettings, particle_smooth), 5, NULL},
	DynamicPaintBrushSettings_smooth_radius_get, DynamicPaintBrushSettings_smooth_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 10.0f, 5.0f, -1, 0.0f, NULL
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp = {
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_ramp, (PropertyRNA *)&rna_DynamicPaintBrushSettings_smooth_radius,
	-1, "paint_ramp", 8388608, 0, 0, 0, 0, "Paint Color Ramp",
	"Color ramp used to define proximity falloff",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_paint_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintBrushSettings_paint_ramp,
	-1, "velocity_ramp", 8388608, 0, 0, 0, 0, "Velocity Color Ramp",
	"Color ramp used to define brush velocity effect",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintBrushSettings_velocity_ramp_get, NULL, NULL, NULL,&RNA_ColorRamp
};

StructRNA RNA_DynamicPaintBrushSettings = {
	{(ContainerRNA *)&RNA_DynamicPaintSurface, (ContainerRNA *)&RNA_DynamicPaintSurfaces,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties, (PropertyRNA *)&rna_DynamicPaintBrushSettings_velocity_ramp}},
	"DynamicPaintBrushSettings", NULL, NULL, 516, NULL, "Brush Settings",
	"Brush settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DynamicPaintBrushSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DynamicPaintBrushSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Paint Surface */
CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_rna_properties_begin, DynamicPaintSurface_rna_properties_next, DynamicPaintSurface_rna_properties_end, DynamicPaintSurface_rna_properties_get, NULL, NULL, DynamicPaintSurface_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DynamicPaintSurface_rna_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_surface_format, (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_DynamicPaintSurface_surface_format_items[3] = {
	{1, "VERTEX", 261, "Vertex", ""},
	{2, "IMAGE", 696, "Image Sequence", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_surface_format = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_surface_type, (PropertyRNA *)&rna_DynamicPaintSurface_rna_type,
	-1, "surface_format", 1, 0, 0, 4, 0, "Format",
	"Surface Format",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_changeFormat, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, format), 1, NULL},
	DynamicPaintSurface_surface_format_get, DynamicPaintSurface_surface_format_set, NULL, NULL, NULL, rna_DynamicPaintSurface_surface_format_items, 2, 1
};

static const EnumPropertyItem rna_DynamicPaintSurface_surface_type_items[2] = {
	{0, "PAINT", 0, "Paint", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_surface_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_is_active, (PropertyRNA *)&rna_DynamicPaintSurface_surface_format,
	-1, "surface_type", 1, 0, 0, 4, 0, "Surface Type",
	"Surface Type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_changeType, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, type), 1, NULL},
	DynamicPaintSurface_surface_type_get, DynamicPaintSurface_surface_type_set, rna_DynamicPaint_surface_type_itemf, NULL, NULL, rna_DynamicPaintSurface_surface_type_items, 1, 0
};

BoolPropertyRNA rna_DynamicPaintSurface_is_active = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_name, (PropertyRNA *)&rna_DynamicPaintSurface_surface_type,
	-1, "is_active", 3, 0, 0, 0, 0, "Is Active",
	"Toggle whether surface is processed or ignored",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_is_active_get, DynamicPaintSurface_is_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_name = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_collection, (PropertyRNA *)&rna_DynamicPaintSurface_is_active,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Surface name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DynamicPaintSurface_uniqueName, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_name_get, DynamicPaintSurface_name_length, DynamicPaintSurface_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_DynamicPaintSurface_brush_collection = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve, (PropertyRNA *)&rna_DynamicPaintSurface_name,
	-1, "brush_collection", 8388737, 0, 0, 0, 0, "Brush Collection",
	"Only use brush objects from this collection",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset_dependency, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_brush_collection_get, DynamicPaintSurface_brush_collection_set, NULL, NULL,&RNA_Collection
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_dissolve_speed, (PropertyRNA *)&rna_DynamicPaintSurface_brush_collection,
	-1, "use_dissolve", 3, 0, 0, 0, 0, "Dissolve",
	"Enable to make surface changes disappear over time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_dissolve_get, DynamicPaintSurface_use_dissolve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_drying, (PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve,
	-1, "dissolve_speed", 3, 0, 0, 4, 0, "Dissolve Time",
	"Approximately in how many frames should dissolve happen",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, diss_speed), 0, NULL},
	DynamicPaintSurface_dissolve_speed_get, DynamicPaintSurface_dissolve_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10000, 1, 10000, 5, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_drying = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_dry_speed, (PropertyRNA *)&rna_DynamicPaintSurface_dissolve_speed,
	-1, "use_drying", 3, 0, 0, 0, 0, "Dry",
	"Enable to make surface wetness dry over time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_drying_get, DynamicPaintSurface_use_drying_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_dry_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_resolution, (PropertyRNA *)&rna_DynamicPaintSurface_use_drying,
	-1, "dry_speed", 3, 0, 0, 4, 0, "Dry Time",
	"Approximately in how many frames should drying happen",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, dry_speed), 0, NULL},
	DynamicPaintSurface_dry_speed_get, DynamicPaintSurface_dry_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 10000, 1, 10000, 5, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_image_resolution = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_uv_layer, (PropertyRNA *)&rna_DynamicPaintSurface_dry_speed,
	-1, "image_resolution", 1, 0, 0, 4, 0, "Resolution",
	"Output image resolution",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, image_resolution), 0, NULL},
	DynamicPaintSurface_image_resolution_get, DynamicPaintSurface_image_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 16, 4096, 16, 4096, 1, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_uv_layer = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_start, (PropertyRNA *)&rna_DynamicPaintSurface_image_resolution,
	-1, "uv_layer", 262145, 0, 0, 0, 0, "UV Map",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_uv_layer_get, DynamicPaintSurface_uv_layer_length, DynamicPaintSurface_uv_layer_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

IntPropertyRNA rna_DynamicPaintSurface_frame_start = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_end, (PropertyRNA *)&rna_DynamicPaintSurface_uv_layer,
	-1, "frame_start", 1, 0, 0, 4, 0, "Start Frame",
	"Simulation start frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_updateFrames, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, start_frame), 0, NULL},
	DynamicPaintSurface_frame_start_get, DynamicPaintSurface_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 9999, 1, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_frame_end = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_frame_substeps, (PropertyRNA *)&rna_DynamicPaintSurface_frame_start,
	-1, "frame_end", 1, 0, 0, 4, 0, "End Frame",
	"Simulation end frame",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurfaces_updateFrames, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, end_frame), 0, NULL},
	DynamicPaintSurface_frame_end_get, DynamicPaintSurface_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 9999, 1, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_DynamicPaintSurface_frame_substeps = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_antialiasing, (PropertyRNA *)&rna_DynamicPaintSurface_frame_end,
	-1, "frame_substeps", 3, 0, 0, 4, 0, "Sub-Steps",
	"Do extra frames between scene frames to ensure smooth motion",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, substeps), 0, NULL},
	DynamicPaintSurface_frame_substeps_get, DynamicPaintSurface_frame_substeps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10, 0, 20, 1, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_influence_scale, (PropertyRNA *)&rna_DynamicPaintSurface_frame_substeps,
	-1, "use_antialiasing", 1, 0, 0, 0, 0, "Anti-Aliasing",
	"Use 5x multisampling to smooth paint edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_antialiasing_get, DynamicPaintSurface_use_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_brush_radius_scale, (PropertyRNA *)&rna_DynamicPaintSurface_use_antialiasing,
	-1, "brush_influence_scale", 3, 0, 0, 4, 0, "Influence Scale",
	"Adjust influence brush objects have on this surface",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, influence_scale), 5, NULL},
	DynamicPaintSurface_brush_influence_scale_get, DynamicPaintSurface_brush_influence_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_color_type, (PropertyRNA *)&rna_DynamicPaintSurface_brush_influence_scale,
	-1, "brush_radius_scale", 3, 0, 0, 4, 0, "Radius Scale",
	"Adjust radius of proximity brushes or particles for this surface",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, radius_scale), 5, NULL},
	DynamicPaintSurface_brush_radius_scale_get, DynamicPaintSurface_brush_radius_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

static const EnumPropertyItem rna_DynamicPaintSurface_init_color_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{1, "COLOR", 54, "Color", ""},
	{2, "TEXTURE", 80, "UV Texture", ""},
	{3, "VERTEX_COLOR", 202, "Vertex Color", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_init_color_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_color, (PropertyRNA *)&rna_DynamicPaintSurface_brush_radius_scale,
	-1, "init_color_type", 1, 0, 0, 4, 0, "Initial Color",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_initialcolortype, 119472128, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, init_color_type), 1, NULL},
	DynamicPaintSurface_init_color_type_get, DynamicPaintSurface_init_color_type_set, NULL, NULL, NULL, rna_DynamicPaintSurface_init_color_type_items, 4, 0
};

static float rna_DynamicPaintSurface_init_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DynamicPaintSurface_init_color = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_texture, (PropertyRNA *)&rna_DynamicPaintSurface_init_color_type,
	-1, "init_color", 1, 0, 0, 4, 0, "Color",
	"Initial color of the surface",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_DynamicPaintSurface_reset, 119472128, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, init_color), 5, NULL},
	NULL, NULL, DynamicPaintSurface_init_color_get, DynamicPaintSurface_init_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_DynamicPaintSurface_init_color_default
};

PointerPropertyRNA rna_DynamicPaintSurface_init_texture = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_init_layername, (PropertyRNA *)&rna_DynamicPaintSurface_init_color,
	-1, "init_texture", 8388801, 0, 0, 0, 0, "Texture",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 119472128, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_init_texture_get, DynamicPaintSurface_init_texture_set, NULL, NULL,&RNA_Texture
};

StringPropertyRNA rna_DynamicPaintSurface_init_layername = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_effect_ui, (PropertyRNA *)&rna_DynamicPaintSurface_init_texture,
	-1, "init_layername", 262145, 0, 0, 0, 0, "Data Layer",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 119472128, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_init_layername_get, DynamicPaintSurface_init_layername_length, DynamicPaintSurface_init_layername_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_DynamicPaintSurface_effect_ui_items[4] = {
	{1, "SPREAD", 0, "Spread", ""},
	{2, "DRIP", 0, "Drip", ""},
	{3, "SHRINK", 0, "Shrink", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_effect_ui = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dry_log, (PropertyRNA *)&rna_DynamicPaintSurface_init_layername,
	-1, "effect_ui", 1, 0, 0, 4, 0, "Effect Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, effect_ui), 1, NULL},
	DynamicPaintSurface_effect_ui_get, DynamicPaintSurface_effect_ui_set, NULL, NULL, NULL, rna_DynamicPaintSurface_effect_ui_items, 3, 1
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve_log, (PropertyRNA *)&rna_DynamicPaintSurface_effect_ui,
	-1, "use_dry_log", 3, 0, 0, 0, 0, "Slow",
	"Use logarithmic drying (makes high values to dry faster than low values)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_dry_log_get, DynamicPaintSurface_use_dry_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_spread, (PropertyRNA *)&rna_DynamicPaintSurface_use_dry_log,
	-1, "use_dissolve_log", 3, 0, 0, 0, 0, "Slow",
	"Use logarithmic dissolve (makes high values to fade faster than low values)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_dissolve_log_get, DynamicPaintSurface_use_dissolve_log_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_spread = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_spread_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_dissolve_log,
	-1, "use_spread", 1, 0, 0, 0, 0, "Use Spread",
	"Process spread effect (spread wet paint around surface)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_spread_get, DynamicPaintSurface_use_spread_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_spread_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_color_dry_threshold, (PropertyRNA *)&rna_DynamicPaintSurface_use_spread,
	-1, "spread_speed", 3, 0, 0, 4, 0, "Spread Speed",
	"How fast spread effect moves on the canvas surface",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, spread_speed), 5, NULL},
	DynamicPaintSurface_spread_speed_get, DynamicPaintSurface_spread_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_color_spread_speed, (PropertyRNA *)&rna_DynamicPaintSurface_spread_speed,
	-1, "color_dry_threshold", 3, 0, 0, 4, 0, "Color Dry",
	"The wetness level when colors start to shift to the background",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, color_dry_threshold), 5, NULL},
	DynamicPaintSurface_color_dry_threshold_get, DynamicPaintSurface_color_dry_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_drip, (PropertyRNA *)&rna_DynamicPaintSurface_color_dry_threshold,
	-1, "color_spread_speed", 3, 0, 0, 4, 0, "Color Spread",
	"How fast colors get mixed within wet paint",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, color_spread_speed), 5, NULL},
	DynamicPaintSurface_color_spread_speed_get, DynamicPaintSurface_color_spread_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_drip = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_shrink, (PropertyRNA *)&rna_DynamicPaintSurface_color_spread_speed,
	-1, "use_drip", 1, 0, 0, 0, 0, "Use Drip",
	"Process drip effect (drip wet paint to gravity direction)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_drip_get, DynamicPaintSurface_use_drip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_shrink = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_shrink_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_drip,
	-1, "use_shrink", 1, 0, 0, 0, 0, "Use Shrink",
	"Process shrink effect (shrink paint areas)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_shrink_get, DynamicPaintSurface_use_shrink_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_effector_weights, (PropertyRNA *)&rna_DynamicPaintSurface_use_shrink,
	-1, "shrink_speed", 3, 0, 0, 4, 0, "Shrink Speed",
	"How fast shrink effect moves on the canvas surface",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, shrink_speed), 5, NULL},
	DynamicPaintSurface_shrink_speed_get, DynamicPaintSurface_shrink_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, 0.0f, NULL
};

PointerPropertyRNA rna_DynamicPaintSurface_effector_weights = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_drip_velocity, (PropertyRNA *)&rna_DynamicPaintSurface_shrink_speed,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_drip_acceleration, (PropertyRNA *)&rna_DynamicPaintSurface_effector_weights,
	-1, "drip_velocity", 3, 0, 0, 4, 0, "Velocity",
	"How much surface velocity affects dripping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, drip_vel), 5, NULL},
	DynamicPaintSurface_drip_velocity_get, DynamicPaintSurface_drip_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_premultiply, (PropertyRNA *)&rna_DynamicPaintSurface_drip_velocity,
	-1, "drip_acceleration", 3, 0, 0, 4, 0, "Acceleration",
	"How much surface acceleration affects dripping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, drip_acc), 5, NULL},
	DynamicPaintSurface_drip_acceleration_get, DynamicPaintSurface_drip_acceleration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_output_path, (PropertyRNA *)&rna_DynamicPaintSurface_drip_acceleration,
	-1, "use_premultiply", 1, 0, 0, 0, 0, "Premultiply Alpha",
	"Multiply color by alpha (recommended for Blender input)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_premultiply_get, DynamicPaintSurface_use_premultiply_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_image_output_path = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_name_a, (PropertyRNA *)&rna_DynamicPaintSurface_use_premultiply,
	-1, "image_output_path", 262145, 0, 0, 0, 0, "Output Path",
	"Directory to save the textures",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_image_output_path_get, DynamicPaintSurface_image_output_path_length, DynamicPaintSurface_image_output_path_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

StringPropertyRNA rna_DynamicPaintSurface_output_name_a = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_output_a, (PropertyRNA *)&rna_DynamicPaintSurface_image_output_path,
	-1, "output_name_a", 262145, 0, 0, 0, 0, "Output Name",
	"Name used to save output from this surface",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_output_name_a_get, DynamicPaintSurface_output_name_a_length, DynamicPaintSurface_output_name_a_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_DynamicPaintSurface_use_output_a = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_name_b, (PropertyRNA *)&rna_DynamicPaintSurface_output_name_a,
	-1, "use_output_a", 3, 0, 0, 0, 0, "Use Output",
	"Save this output layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_output_a_get, DynamicPaintSurface_use_output_a_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DynamicPaintSurface_output_name_b = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_output_b, (PropertyRNA *)&rna_DynamicPaintSurface_use_output_a,
	-1, "output_name_b", 262145, 0, 0, 0, 0, "Output Name",
	"Name used to save output from this surface",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_output_name_b_get, DynamicPaintSurface_output_name_b_length, DynamicPaintSurface_output_name_b_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_DynamicPaintSurface_use_output_b = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_depth_clamp, (PropertyRNA *)&rna_DynamicPaintSurface_output_name_b,
	-1, "use_output_b", 3, 0, 0, 0, 0, "Use Output",
	"Save this output layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_output_b_get, DynamicPaintSurface_use_output_b_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_displace_factor, (PropertyRNA *)&rna_DynamicPaintSurface_use_output_b,
	-1, "depth_clamp", 1, 0, 0, 4, 0, "Max Displace",
	"Maximum level of depth intersection in object space (use 0.0 to disable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, depth_clamp), 5, NULL},
	DynamicPaintSurface_depth_clamp_get, DynamicPaintSurface_depth_clamp_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_displace_factor = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_image_fileformat, (PropertyRNA *)&rna_DynamicPaintSurface_depth_clamp,
	-1, "displace_factor", 1, 0, 0, 4, 0, "Displace Factor",
	"Strength of displace when applied to the mesh",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaint_redoModifier, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, disp_factor), 5, NULL},
	DynamicPaintSurface_displace_factor_get, DynamicPaintSurface_displace_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -50.0f, 50.0f, 1.0f, 2, 0.0f, NULL
};

static const EnumPropertyItem rna_DynamicPaintSurface_image_fileformat_items[3] = {
	{0, "PNG", 0, "PNG", ""},
	{1, "OPENEXR", 0, "OpenEXR", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_displace_type, (PropertyRNA *)&rna_DynamicPaintSurface_displace_factor,
	-1, "image_fileformat", 1, 0, 0, 4, 0, "File Format",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, image_fileformat), 1, NULL},
	DynamicPaintSurface_image_fileformat_get, DynamicPaintSurface_image_fileformat_set, NULL, NULL, NULL, rna_DynamicPaintSurface_image_fileformat_items, 2, 0
};

static const EnumPropertyItem rna_DynamicPaintSurface_displace_type_items[3] = {
	{0, "DISPLACE", 0, "Displacement", ""},
	{1, "DEPTH", 0, "Depth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DynamicPaintSurface_displace_type = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_incremental_displace, (PropertyRNA *)&rna_DynamicPaintSurface_image_fileformat,
	-1, "displace_type", 1, 0, 0, 4, 0, "Data Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, disp_type), 1, NULL},
	DynamicPaintSurface_displace_type_get, DynamicPaintSurface_displace_type_set, NULL, NULL, NULL, rna_DynamicPaintSurface_displace_type_items, 2, 0
};

BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_damping, (PropertyRNA *)&rna_DynamicPaintSurface_displace_type,
	-1, "use_incremental_displace", 1, 0, 0, 0, 0, "Incremental",
	"New displace is added cumulatively on top of existing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DynamicPaintSurface_reset, 102236160, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_incremental_displace_get, DynamicPaintSurface_use_incremental_displace_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_damping = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_speed, (PropertyRNA *)&rna_DynamicPaintSurface_use_incremental_displace,
	-1, "wave_damping", 3, 0, 0, 4, 0, "Damping",
	"Wave damping factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_damping), 5, NULL},
	DynamicPaintSurface_wave_damping_get, DynamicPaintSurface_wave_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_speed = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_timescale, (PropertyRNA *)&rna_DynamicPaintSurface_wave_damping,
	-1, "wave_speed", 3, 0, 0, 4, 0, "Speed",
	"Wave propagation speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_speed), 5, NULL},
	DynamicPaintSurface_wave_speed_get, DynamicPaintSurface_wave_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.2000000030f, 4.0f, 0.0099999998f, 5.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_spring, (PropertyRNA *)&rna_DynamicPaintSurface_wave_speed,
	-1, "wave_timescale", 3, 0, 0, 4, 0, "Timescale",
	"Wave time scaling factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_timescale), 5, NULL},
	DynamicPaintSurface_wave_timescale_get, DynamicPaintSurface_wave_timescale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.5000000000f, 0.0099999998f, 3.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_spring = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_wave_smoothness, (PropertyRNA *)&rna_DynamicPaintSurface_wave_timescale,
	-1, "wave_spring", 3, 0, 0, 4, 0, "Spring",
	"Spring force that pulls water level back to zero",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_spring), 5, NULL},
	DynamicPaintSurface_wave_spring_get, DynamicPaintSurface_wave_spring_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_use_wave_open_border, (PropertyRNA *)&rna_DynamicPaintSurface_wave_spring,
	-1, "wave_smoothness", 3, 0, 0, 4, 0, "Smoothness",
	"Limit maximum steepness of wave slope between simulation points (use higher values for smoother waves at expense of reduced detail)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DynamicPaintSurface, wave_smoothness), 5, NULL},
	DynamicPaintSurface_wave_smoothness_get, DynamicPaintSurface_wave_smoothness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 5.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_point_cache, (PropertyRNA *)&rna_DynamicPaintSurface_wave_smoothness,
	-1, "use_wave_open_border", 3, 0, 0, 0, 0, "Open Borders",
	"Pass waves through mesh edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_use_wave_open_border_get, DynamicPaintSurface_use_wave_open_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintSurface_point_cache = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_is_cache_user, (PropertyRNA *)&rna_DynamicPaintSurface_use_wave_open_border,
	-1, "point_cache", 8650752, 0, 0, 0, 0, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintSurface_point_cache,
	-1, "is_cache_user", 0, 0, 0, 0, 0, "Use Cache",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DynamicPaintSurface_is_cache_user_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_index, NULL,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_DynamicPaintSurface_output_exists_index = {
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_object,
	-1, "index", 3, 0, 1, 0, 0, "Index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1, 0, 1, 1, 0, NULL
};

BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists = {
	{NULL, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_index,
	-1, "exists", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_DynamicPaintSurface_output_exists_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_object, (PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists}},
	"output_exists", 0, "Checks if surface output layer of given name exists",
	DynamicPaintSurface_output_exists_call,
	(PropertyRNA *)&rna_DynamicPaintSurface_output_exists_exists
};

StructRNA RNA_DynamicPaintSurface = {
	{(ContainerRNA *)&RNA_FCurve, (ContainerRNA *)&RNA_DynamicPaintBrushSettings,
	NULL,
	{(PropertyRNA *)&rna_DynamicPaintSurface_rna_properties, (PropertyRNA *)&rna_DynamicPaintSurface_is_cache_user}},
	"DynamicPaintSurface", NULL, NULL, 516, NULL, "Paint Surface",
	"A canvas surface layer",
	"*", 17,
	(PropertyRNA *)&rna_DynamicPaintSurface_name, (PropertyRNA *)&rna_DynamicPaintSurface_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DynamicPaintSurface_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_DynamicPaintSurface_output_exists_func, (FunctionRNA *)&rna_DynamicPaintSurface_output_exists_func}
};

