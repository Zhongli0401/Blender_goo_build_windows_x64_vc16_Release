
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

#include "rna_camera.c"
#include "rna_camera_api.c"

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

EnumPropertyRNA rna_Camera_type;
EnumPropertyRNA rna_Camera_sensor_fit;
FloatPropertyRNA rna_Camera_passepartout_alpha;
FloatPropertyRNA rna_Camera_angle_x;
FloatPropertyRNA rna_Camera_angle_y;
FloatPropertyRNA rna_Camera_angle;
FloatPropertyRNA rna_Camera_clip_start;
FloatPropertyRNA rna_Camera_clip_end;
FloatPropertyRNA rna_Camera_lens;
FloatPropertyRNA rna_Camera_sensor_width;
FloatPropertyRNA rna_Camera_sensor_height;
FloatPropertyRNA rna_Camera_ortho_scale;
FloatPropertyRNA rna_Camera_display_size;
FloatPropertyRNA rna_Camera_shift_x;
FloatPropertyRNA rna_Camera_shift_y;
PointerPropertyRNA rna_Camera_stereo;
BoolPropertyRNA rna_Camera_show_limits;
BoolPropertyRNA rna_Camera_show_mist;
BoolPropertyRNA rna_Camera_show_passepartout;
BoolPropertyRNA rna_Camera_show_safe_areas;
BoolPropertyRNA rna_Camera_show_safe_center;
BoolPropertyRNA rna_Camera_show_name;
BoolPropertyRNA rna_Camera_show_sensor;
BoolPropertyRNA rna_Camera_show_background_images;
EnumPropertyRNA rna_Camera_lens_unit;
BoolPropertyRNA rna_Camera_show_composition_center;
BoolPropertyRNA rna_Camera_show_composition_center_diagonal;
BoolPropertyRNA rna_Camera_show_composition_thirds;
BoolPropertyRNA rna_Camera_show_composition_golden;
BoolPropertyRNA rna_Camera_show_composition_golden_tria_a;
BoolPropertyRNA rna_Camera_show_composition_golden_tria_b;
BoolPropertyRNA rna_Camera_show_composition_harmony_tri_a;
BoolPropertyRNA rna_Camera_show_composition_harmony_tri_b;
PointerPropertyRNA rna_Camera_dof;
CollectionPropertyRNA rna_Camera_background_images;
PointerPropertyRNA rna_Camera_animation_data;

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


extern FunctionRNA rna_Camera_view_frame_func;
extern PointerPropertyRNA rna_Camera_view_frame_scene;
extern FloatPropertyRNA rna_Camera_view_frame_result_1;
extern FloatPropertyRNA rna_Camera_view_frame_result_2;
extern FloatPropertyRNA rna_Camera_view_frame_result_3;
extern FloatPropertyRNA rna_Camera_view_frame_result_4;



CollectionPropertyRNA rna_CameraBackgroundImage_rna_properties;
PointerPropertyRNA rna_CameraBackgroundImage_rna_type;
BoolPropertyRNA rna_CameraBackgroundImage_is_override_data;
EnumPropertyRNA rna_CameraBackgroundImage_source;
PointerPropertyRNA rna_CameraBackgroundImage_image;
PointerPropertyRNA rna_CameraBackgroundImage_clip;
PointerPropertyRNA rna_CameraBackgroundImage_image_user;
PointerPropertyRNA rna_CameraBackgroundImage_clip_user;
FloatPropertyRNA rna_CameraBackgroundImage_offset;
FloatPropertyRNA rna_CameraBackgroundImage_scale;
FloatPropertyRNA rna_CameraBackgroundImage_rotation;
BoolPropertyRNA rna_CameraBackgroundImage_use_flip_x;
BoolPropertyRNA rna_CameraBackgroundImage_use_flip_y;
FloatPropertyRNA rna_CameraBackgroundImage_alpha;
BoolPropertyRNA rna_CameraBackgroundImage_show_expanded;
BoolPropertyRNA rna_CameraBackgroundImage_use_camera_clip;
BoolPropertyRNA rna_CameraBackgroundImage_show_background_image;
BoolPropertyRNA rna_CameraBackgroundImage_show_on_foreground;
EnumPropertyRNA rna_CameraBackgroundImage_display_depth;
EnumPropertyRNA rna_CameraBackgroundImage_frame_method;


CollectionPropertyRNA rna_CameraBackgroundImages_rna_properties;
PointerPropertyRNA rna_CameraBackgroundImages_rna_type;

extern FunctionRNA rna_CameraBackgroundImages_new_func;
extern PointerPropertyRNA rna_CameraBackgroundImages_new_image;

extern FunctionRNA rna_CameraBackgroundImages_remove_func;
extern PointerPropertyRNA rna_CameraBackgroundImages_remove_image;

extern FunctionRNA rna_CameraBackgroundImages_clear_func;


CollectionPropertyRNA rna_CameraStereoData_rna_properties;
PointerPropertyRNA rna_CameraStereoData_rna_type;
EnumPropertyRNA rna_CameraStereoData_convergence_mode;
EnumPropertyRNA rna_CameraStereoData_pivot;
FloatPropertyRNA rna_CameraStereoData_interocular_distance;
FloatPropertyRNA rna_CameraStereoData_convergence_distance;
BoolPropertyRNA rna_CameraStereoData_use_spherical_stereo;
BoolPropertyRNA rna_CameraStereoData_use_pole_merge;
FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_from;
FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_to;


CollectionPropertyRNA rna_CameraDOFSettings_rna_properties;
PointerPropertyRNA rna_CameraDOFSettings_rna_type;
BoolPropertyRNA rna_CameraDOFSettings_use_dof;
PointerPropertyRNA rna_CameraDOFSettings_focus_object;
StringPropertyRNA rna_CameraDOFSettings_focus_subtarget;
FloatPropertyRNA rna_CameraDOFSettings_focus_distance;
FloatPropertyRNA rna_CameraDOFSettings_aperture_fstop;
IntPropertyRNA rna_CameraDOFSettings_aperture_blades;
FloatPropertyRNA rna_CameraDOFSettings_aperture_rotation;
FloatPropertyRNA rna_CameraDOFSettings_aperture_ratio;

int Camera_type_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->type);
}

void Camera_type_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->type = value;
}

int Camera_sensor_fit_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (int)(data->sensor_fit);
}

void Camera_sensor_fit_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->sensor_fit = value;
}

float Camera_passepartout_alpha_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->passepartalpha);
}

void Camera_passepartout_alpha_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->passepartalpha = CLAMPIS(value, 0.0f, 1.0f);
}

float Camera_angle_x_get(PointerRNA *ptr)
{
    return rna_Camera_angle_x_get(ptr);
}

void Camera_angle_x_set(PointerRNA *ptr, float value)
{
    rna_Camera_angle_x_set(ptr, value);
}

float Camera_angle_y_get(PointerRNA *ptr)
{
    return rna_Camera_angle_y_get(ptr);
}

void Camera_angle_y_set(PointerRNA *ptr, float value)
{
    rna_Camera_angle_y_set(ptr, value);
}

float Camera_angle_get(PointerRNA *ptr)
{
    return rna_Camera_angle_get(ptr);
}

void Camera_angle_set(PointerRNA *ptr, float value)
{
    rna_Camera_angle_set(ptr, value);
}

float Camera_clip_start_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->clip_start);
}

void Camera_clip_start_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->clip_start = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float Camera_clip_end_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->clip_end);
}

void Camera_clip_end_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->clip_end = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float Camera_lens_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->lens);
}

void Camera_lens_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->lens = CLAMPIS(value, 1.0f, FLT_MAX);
}

float Camera_sensor_width_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->sensor_x);
}

void Camera_sensor_width_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->sensor_x = CLAMPIS(value, 1.0f, FLT_MAX);
}

float Camera_sensor_height_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->sensor_y);
}

void Camera_sensor_height_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->sensor_y = CLAMPIS(value, 1.0f, FLT_MAX);
}

float Camera_ortho_scale_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->ortho_scale);
}

void Camera_ortho_scale_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->ortho_scale = CLAMPIS(value, 0.0000000000f, FLT_MAX);
}

float Camera_display_size_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->drawsize);
}

void Camera_display_size_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->drawsize = CLAMPIS(value, 0.0099999998f, 1000.0f);
}

float Camera_shift_x_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->shiftx);
}

void Camera_shift_x_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->shiftx = value;
}

float Camera_shift_y_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (float)(data->shifty);
}

void Camera_shift_y_set(PointerRNA *ptr, float value)
{
    Camera *data = (Camera *)(ptr->data);
    data->shifty = value;
}

PointerRNA Camera_stereo_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CameraStereoData, &data->stereo);
}

bool Camera_show_limits_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void Camera_show_limits_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool Camera_show_mist_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void Camera_show_mist_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool Camera_show_passepartout_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void Camera_show_passepartout_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool Camera_show_safe_areas_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void Camera_show_safe_areas_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool Camera_show_safe_center_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void Camera_show_safe_center_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool Camera_show_name_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void Camera_show_name_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool Camera_show_sensor_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void Camera_show_sensor_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool Camera_show_background_images_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void Camera_show_background_images_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

int Camera_lens_unit_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return ((data->flag) & 32);
}

void Camera_lens_unit_set(PointerRNA *ptr, int value)
{
    Camera *data = (Camera *)(ptr->data);
    data->flag &= ~32;
    data->flag |= value;
}

bool Camera_show_composition_center_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 1) != 0);
}

void Camera_show_composition_center_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 1; }
    else { data->dtx &= ~1; }
}

bool Camera_show_composition_center_diagonal_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 2) != 0);
}

void Camera_show_composition_center_diagonal_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 2; }
    else { data->dtx &= ~2; }
}

bool Camera_show_composition_thirds_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 4) != 0);
}

void Camera_show_composition_thirds_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 4; }
    else { data->dtx &= ~4; }
}

bool Camera_show_composition_golden_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 8) != 0);
}

void Camera_show_composition_golden_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 8; }
    else { data->dtx &= ~8; }
}

bool Camera_show_composition_golden_tria_a_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 16) != 0);
}

void Camera_show_composition_golden_tria_a_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 16; }
    else { data->dtx &= ~16; }
}

bool Camera_show_composition_golden_tria_b_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 32) != 0);
}

void Camera_show_composition_golden_tria_b_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 32; }
    else { data->dtx &= ~32; }
}

bool Camera_show_composition_harmony_tri_a_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 64) != 0);
}

void Camera_show_composition_harmony_tri_a_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 64; }
    else { data->dtx &= ~64; }
}

bool Camera_show_composition_harmony_tri_b_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return (((data->dtx) & 128) != 0);
}

void Camera_show_composition_harmony_tri_b_set(PointerRNA *ptr, bool value)
{
    Camera *data = (Camera *)(ptr->data);
    if (value) { data->dtx |= 128; }
    else { data->dtx &= ~128; }
}

PointerRNA Camera_dof_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_CameraDOFSettings, &data->dof);
}

static PointerRNA Camera_background_images_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_CameraBackgroundImage, rna_iterator_listbase_get(iter));
}

void Camera_background_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Camera_background_images;

    rna_iterator_listbase_begin(iter, &data->bg_images, NULL);

    if (iter->valid) {
        iter->ptr = Camera_background_images_get(iter);
    }
}

void Camera_background_images_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Camera_background_images_get(iter);
    }
}

void Camera_background_images_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Camera_background_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Camera_background_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = Camera_background_images_get(&iter); }
    }

    Camera_background_images_end(&iter);

    return found;
}

PointerRNA Camera_animation_data_get(PointerRNA *ptr)
{
    Camera *data = (Camera *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA CameraBackgroundImage_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CameraBackgroundImage_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraBackgroundImage_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImage_rna_properties_get(iter);
    }
}

void CameraBackgroundImage_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImage_rna_properties_get(iter);
    }
}

void CameraBackgroundImage_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CameraBackgroundImage_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CameraBackgroundImage_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool CameraBackgroundImage_is_override_data_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return !(((data->flag) & 512) != 0);
}

int CameraBackgroundImage_source_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (int)(data->source);
}

void CameraBackgroundImage_source_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->source = value;
}

PointerRNA CameraBackgroundImage_image_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Image, data->ima);
}

void CameraBackgroundImage_image_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);

    if (data->ima) {
        id_us_min((ID *)data->ima);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->ima = value.data;
}

PointerRNA CameraBackgroundImage_clip_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void CameraBackgroundImage_clip_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);

    if (data->clip) {
        id_us_min((ID *)data->clip);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->clip = value.data;
}

PointerRNA CameraBackgroundImage_image_user_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ImageUser, &data->iuser);
}

PointerRNA CameraBackgroundImage_clip_user_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieClipUser, &data->cuser);
}

void CameraBackgroundImage_offset_get(PointerRNA *ptr, float values[2])
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->offset)[i]);
    }
}

void CameraBackgroundImage_offset_set(PointerRNA *ptr, const float values[2])
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->offset)[i] = values[i];
    }
}

float CameraBackgroundImage_scale_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->scale);
}

void CameraBackgroundImage_scale_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->scale = CLAMPIS(value, 0.0f, FLT_MAX);
}

float CameraBackgroundImage_rotation_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->rotation);
}

void CameraBackgroundImage_rotation_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->rotation = value;
}

bool CameraBackgroundImage_use_flip_x_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void CameraBackgroundImage_use_flip_x_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool CameraBackgroundImage_use_flip_y_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void CameraBackgroundImage_use_flip_y_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

float CameraBackgroundImage_alpha_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (float)(data->alpha);
}

void CameraBackgroundImage_alpha_set(PointerRNA *ptr, float value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->alpha = CLAMPIS(value, 0.0f, 1.0f);
}

bool CameraBackgroundImage_show_expanded_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void CameraBackgroundImage_show_expanded_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool CameraBackgroundImage_use_camera_clip_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void CameraBackgroundImage_use_camera_clip_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool CameraBackgroundImage_show_background_image_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return !(((data->flag) & 8) != 0);
}

void CameraBackgroundImage_show_background_image_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (!value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool CameraBackgroundImage_show_on_foreground_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void CameraBackgroundImage_show_on_foreground_set(PointerRNA *ptr, bool value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

int CameraBackgroundImage_display_depth_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((data->flag) & 16);
}

void CameraBackgroundImage_display_depth_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->flag &= ~16;
    data->flag |= value;
}

int CameraBackgroundImage_frame_method_get(PointerRNA *ptr)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    return ((data->flag) & 96);
}

void CameraBackgroundImage_frame_method_set(PointerRNA *ptr, int value)
{
    CameraBGImage *data = (CameraBGImage *)(ptr->data);
    data->flag &= ~96;
    data->flag |= value;
}

static PointerRNA CameraBackgroundImages_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CameraBackgroundImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraBackgroundImages_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImages_rna_properties_get(iter);
    }
}

void CameraBackgroundImages_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraBackgroundImages_rna_properties_get(iter);
    }
}

void CameraBackgroundImages_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CameraBackgroundImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CameraBackgroundImages_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CameraStereoData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CameraStereoData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraStereoData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraStereoData_rna_properties_get(iter);
    }
}

void CameraStereoData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraStereoData_rna_properties_get(iter);
    }
}

void CameraStereoData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CameraStereoData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CameraStereoData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int CameraStereoData_convergence_mode_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (int)(data->convergence_mode);
}

void CameraStereoData_convergence_mode_set(PointerRNA *ptr, int value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->convergence_mode = value;
}

int CameraStereoData_pivot_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (int)(data->pivot);
}

void CameraStereoData_pivot_set(PointerRNA *ptr, int value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->pivot = value;
}

float CameraStereoData_interocular_distance_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->interocular_distance);
}

void CameraStereoData_interocular_distance_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->interocular_distance = CLAMPIS(value, 0.0f, FLT_MAX);
}

float CameraStereoData_convergence_distance_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->convergence_distance);
}

void CameraStereoData_convergence_distance_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->convergence_distance = CLAMPIS(value, 0.0000100000f, FLT_MAX);
}

bool CameraStereoData_use_spherical_stereo_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void CameraStereoData_use_spherical_stereo_set(PointerRNA *ptr, bool value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool CameraStereoData_use_pole_merge_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void CameraStereoData_use_pole_merge_set(PointerRNA *ptr, bool value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

float CameraStereoData_pole_merge_angle_from_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->pole_merge_angle_from);
}

void CameraStereoData_pole_merge_angle_from_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->pole_merge_angle_from = CLAMPIS(value, 0.0f, 1.5707963705f);
}

float CameraStereoData_pole_merge_angle_to_get(PointerRNA *ptr)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    return (float)(data->pole_merge_angle_to);
}

void CameraStereoData_pole_merge_angle_to_set(PointerRNA *ptr, float value)
{
    CameraStereoSettings *data = (CameraStereoSettings *)(ptr->data);
    data->pole_merge_angle_to = CLAMPIS(value, 0.0f, 1.5707963705f);
}

static PointerRNA CameraDOFSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CameraDOFSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CameraDOFSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CameraDOFSettings_rna_properties_get(iter);
    }
}

void CameraDOFSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CameraDOFSettings_rna_properties_get(iter);
    }
}

void CameraDOFSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CameraDOFSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CameraDOFSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool CameraDOFSettings_use_dof_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void CameraDOFSettings_use_dof_set(PointerRNA *ptr, bool value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

PointerRNA CameraDOFSettings_focus_object_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->focus_object);
}

void CameraDOFSettings_focus_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->focus_object = value.data;
}

void CameraDOFSettings_focus_subtarget_get(PointerRNA *ptr, char *value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    BLI_strncpy_utf8(value, data->focus_subtarget, 64);
}

int CameraDOFSettings_focus_subtarget_length(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return strlen(data->focus_subtarget);
}

void CameraDOFSettings_focus_subtarget_set(PointerRNA *ptr, const char *value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    BLI_strncpy_utf8(data->focus_subtarget, value, 64);
}

float CameraDOFSettings_focus_distance_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->focus_distance);
}

void CameraDOFSettings_focus_distance_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->focus_distance = CLAMPIS(value, 0.0f, FLT_MAX);
}

float CameraDOFSettings_aperture_fstop_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_fstop);
}

void CameraDOFSettings_aperture_fstop_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->aperture_fstop = CLAMPIS(value, 0.0f, FLT_MAX);
}

int CameraDOFSettings_aperture_blades_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (int)(data->aperture_blades);
}

void CameraDOFSettings_aperture_blades_set(PointerRNA *ptr, int value)
{
    rna_CameraDOFSettings_aperture_blades_set(ptr, value);
}

float CameraDOFSettings_aperture_rotation_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_rotation);
}

void CameraDOFSettings_aperture_rotation_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->aperture_rotation = CLAMPIS(value, -3.1415927410f, 3.1415927410f);
}

float CameraDOFSettings_aperture_ratio_get(PointerRNA *ptr)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    return (float)(data->aperture_ratio);
}

void CameraDOFSettings_aperture_ratio_set(PointerRNA *ptr, float value)
{
    CameraDOFSettings *data = (CameraDOFSettings *)(ptr->data);
    data->aperture_ratio = CLAMPIS(value, 0.0099999998f, FLT_MAX);
}

void Camera_view_frame_func(struct Camera *_self, struct Scene *scene, float result_1[3], float result_2[3], float result_3[3], float result_4[3])
{
	rna_camera_view_frame(_self, scene, result_1, result_2, result_3, result_4);
}

void Camera_view_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	struct Scene *scene;
	float *result_1;
	float *result_2;
	float *result_3;
	float *result_4;
	char *_data;
	
	_self = (struct Camera *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((struct Scene **)_data);
	_data += 8;
	result_1 = ((float *)_data);
	_data += 16;
	result_2 = ((float *)_data);
	_data += 16;
	result_3 = ((float *)_data);
	_data += 16;
	result_4 = ((float *)_data);
	
	rna_camera_view_frame(_self, scene, result_1, result_2, result_3, result_4);
}

/* Repeated prototypes to detect errors */

void rna_camera_view_frame(struct Camera *_self, struct Scene *scene, float result_1[3], float result_2[3], float result_3[3], float result_4[3]);


struct CameraBGImage *CameraBackgroundImages_new_func(struct Camera *_self)
{
	return rna_Camera_background_images_new(_self);
}

void CameraBackgroundImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	struct CameraBGImage *image;
	char *_data, *_retdata;
	
	_self = (struct Camera *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	image = rna_Camera_background_images_new(_self);
	*((struct CameraBGImage **)_retdata) = image;
}

void CameraBackgroundImages_remove_func(struct Camera *_self, ReportList *reports, struct PointerRNA *image)
{
	rna_Camera_background_images_remove(_self, reports, image);
}

void CameraBackgroundImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	struct PointerRNA *image;
	char *_data;
	
	_self = (struct Camera *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct PointerRNA **)_data);
	
	rna_Camera_background_images_remove(_self, reports, image);
}

void CameraBackgroundImages_clear_func(struct Camera *_self)
{
	rna_Camera_background_images_clear(_self);
}

void CameraBackgroundImages_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Camera *_self;
	_self = (struct Camera *)_ptr->data;
	
	rna_Camera_background_images_clear(_self);
}

/* Repeated prototypes to detect errors */

struct CameraBGImage *rna_Camera_background_images_new(struct Camera *_self);
void rna_Camera_background_images_remove(struct Camera *_self, ReportList *reports, struct PointerRNA *image);
void rna_Camera_background_images_clear(struct Camera *_self);



/* Camera */
static const EnumPropertyItem rna_Camera_type_items[4] = {
	{0, "PERSP", 0, "Perspective", ""},
	{1, "ORTHO", 0, "Orthographic", ""},
	{2, "PANO", 0, "Panoramic", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Camera_type = {
	{(PropertyRNA *)&rna_Camera_sensor_fit, NULL,
	-1, "type", 3, 1, 0, 4, 0, "Type",
	"Camera types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, type), 2, NULL},
	Camera_type_get, Camera_type_set, NULL, NULL, NULL, rna_Camera_type_items, 3, 0
};

static const EnumPropertyItem rna_Camera_sensor_fit_items[4] = {
	{0, "AUTO", 0, "Auto", "Fit to the sensor width or height depending on image resolution"},
	{1, "HORIZONTAL", 0, "Horizontal", "Fit to the sensor width"},
	{2, "VERTICAL", 0, "Vertical", "Fit to the sensor height"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Camera_sensor_fit = {
	{(PropertyRNA *)&rna_Camera_passepartout_alpha, (PropertyRNA *)&rna_Camera_type,
	-1, "sensor_fit", 3, 1, 0, 4, 0, "Sensor Fit",
	"Method to fit image and field of view angle inside the sensor",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, sensor_fit), 2, NULL},
	Camera_sensor_fit_get, Camera_sensor_fit_set, NULL, NULL, NULL, rna_Camera_sensor_fit_items, 3, 0
};

FloatPropertyRNA rna_Camera_passepartout_alpha = {
	{(PropertyRNA *)&rna_Camera_angle_x, (PropertyRNA *)&rna_Camera_sensor_fit,
	-1, "passepartout_alpha", 3, 1, 0, 4, 0, "Passepartout Alpha",
	"Opacity (alpha) of the darkened overlay in Camera view",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, passepartalpha), 5, NULL},
	Camera_passepartout_alpha_get, Camera_passepartout_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_Camera_angle_x = {
	{(PropertyRNA *)&rna_Camera_angle_y, (PropertyRNA *)&rna_Camera_passepartout_alpha,
	-1, "angle_x", 1, 1, 0, 0, 0, "Horizontal FOV",
	"Camera lens horizontal field of view",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_angle_x_get, Camera_angle_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_angle_y = {
	{(PropertyRNA *)&rna_Camera_angle, (PropertyRNA *)&rna_Camera_angle_x,
	-1, "angle_y", 1, 1, 0, 0, 0, "Vertical FOV",
	"Camera lens vertical field of view",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_angle_y_get, Camera_angle_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_angle = {
	{(PropertyRNA *)&rna_Camera_clip_start, (PropertyRNA *)&rna_Camera_angle_y,
	-1, "angle", 1, 1, 0, 0, 0, "Field of View",
	"Camera lens field of view",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_angle_get, Camera_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_clip_start = {
	{(PropertyRNA *)&rna_Camera_clip_end, (PropertyRNA *)&rna_Camera_angle,
	-1, "clip_start", 3, 1, 0, 4, 0, "Clip Start",
	"Camera near clipping distance",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, clip_start), 5, NULL},
	Camera_clip_start_get, Camera_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.1000000015f, NULL
};

FloatPropertyRNA rna_Camera_clip_end = {
	{(PropertyRNA *)&rna_Camera_lens, (PropertyRNA *)&rna_Camera_clip_start,
	-1, "clip_end", 3, 1, 0, 4, 0, "Clip End",
	"Camera far clipping distance",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, clip_end), 5, NULL},
	Camera_clip_end_get, Camera_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 1000.0f, NULL
};

FloatPropertyRNA rna_Camera_lens = {
	{(PropertyRNA *)&rna_Camera_sensor_width, (PropertyRNA *)&rna_Camera_clip_end,
	-1, "lens", 3, 1, 0, 4, 0, "Focal Length",
	"Perspective Camera focal length value in millimeters",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE_CAMERA | PROP_UNIT_CAMERA, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, lens), 5, NULL},
	Camera_lens_get, Camera_lens_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 5000.0f, 1.0f, FLT_MAX, 100.0f, 4, 50.0f, NULL
};

FloatPropertyRNA rna_Camera_sensor_width = {
	{(PropertyRNA *)&rna_Camera_sensor_height, (PropertyRNA *)&rna_Camera_lens,
	-1, "sensor_width", 3, 1, 0, 4, 0, "Sensor Width",
	"Horizontal size of the image sensor area in millimeters",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE_CAMERA | PROP_UNIT_CAMERA, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, sensor_x), 5, NULL},
	Camera_sensor_width_get, Camera_sensor_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 100.0f, 1.0f, FLT_MAX, 100.0f, 4, 36.0f, NULL
};

FloatPropertyRNA rna_Camera_sensor_height = {
	{(PropertyRNA *)&rna_Camera_ortho_scale, (PropertyRNA *)&rna_Camera_sensor_width,
	-1, "sensor_height", 3, 1, 0, 4, 0, "Sensor Height",
	"Vertical size of the image sensor area in millimeters",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE_CAMERA | PROP_UNIT_CAMERA, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, sensor_y), 5, NULL},
	Camera_sensor_height_get, Camera_sensor_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 100.0f, 1.0f, FLT_MAX, 100.0f, 4, 24.0f, NULL
};

FloatPropertyRNA rna_Camera_ortho_scale = {
	{(PropertyRNA *)&rna_Camera_display_size, (PropertyRNA *)&rna_Camera_sensor_height,
	-1, "ortho_scale", 3, 1, 0, 4, 0, "Orthographic Scale",
	"Orthographic Camera scale (similar to zoom)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, ortho_scale), 5, NULL},
	Camera_ortho_scale_get, Camera_ortho_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 10000.0f, 0.0000000000f, FLT_MAX, 10.0f, 3, 6.0f, NULL
};

FloatPropertyRNA rna_Camera_display_size = {
	{(PropertyRNA *)&rna_Camera_shift_x, (PropertyRNA *)&rna_Camera_ortho_scale,
	-1, "display_size", 3, 1, 0, 4, 0, "Display Size",
	"Apparent size of the Camera object in the 3D View",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, drawsize), 5, NULL},
	Camera_display_size_get, Camera_display_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, 0.0099999998f, 1000.0f, 1.0f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_Camera_shift_x = {
	{(PropertyRNA *)&rna_Camera_shift_y, (PropertyRNA *)&rna_Camera_display_size,
	-1, "shift_x", 3, 1, 0, 4, 0, "Shift X",
	"Camera horizontal shift",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, shiftx), 5, NULL},
	Camera_shift_x_get, Camera_shift_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_shift_y = {
	{(PropertyRNA *)&rna_Camera_stereo, (PropertyRNA *)&rna_Camera_shift_x,
	-1, "shift_y", 3, 1, 0, 4, 0, "Shift Y",
	"Camera vertical shift",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, shifty), 5, NULL},
	Camera_shift_y_get, Camera_shift_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -2.0f, 2.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Camera_stereo = {
	{(PropertyRNA *)&rna_Camera_show_limits, (PropertyRNA *)&rna_Camera_shift_y,
	-1, "stereo", 8650752, 1, 0, 0, 0, "Stereo",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_stereo_get, NULL, NULL, NULL,&RNA_CameraStereoData
};

BoolPropertyRNA rna_Camera_show_limits = {
	{(PropertyRNA *)&rna_Camera_show_mist, (PropertyRNA *)&rna_Camera_stereo,
	-1, "show_limits", 3, 1, 0, 0, 0, "Show Limits",
	"Display the clipping range and focus point on the camera",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_limits_get, Camera_show_limits_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_mist = {
	{(PropertyRNA *)&rna_Camera_show_passepartout, (PropertyRNA *)&rna_Camera_show_limits,
	-1, "show_mist", 3, 1, 0, 0, 0, "Show Mist",
	"Display a line from the Camera to indicate the mist area",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_mist_get, Camera_show_mist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_passepartout = {
	{(PropertyRNA *)&rna_Camera_show_safe_areas, (PropertyRNA *)&rna_Camera_show_mist,
	-1, "show_passepartout", 3, 1, 0, 0, 0, "Show Passepartout",
	"Show a darkened overlay outside the image area in Camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_passepartout_get, Camera_show_passepartout_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Camera_show_safe_areas = {
	{(PropertyRNA *)&rna_Camera_show_safe_center, (PropertyRNA *)&rna_Camera_show_passepartout,
	-1, "show_safe_areas", 3, 1, 0, 0, 0, "Show Safe Areas",
	"Show TV title safe and action safe areas in Camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_safe_areas_get, Camera_show_safe_areas_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_safe_center = {
	{(PropertyRNA *)&rna_Camera_show_name, (PropertyRNA *)&rna_Camera_show_safe_areas,
	-1, "show_safe_center", 3, 1, 0, 0, 0, "Show Center-Cut Safe Areas",
	"Show safe areas to fit content in a different aspect ratio",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_safe_center_get, Camera_show_safe_center_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_name = {
	{(PropertyRNA *)&rna_Camera_show_sensor, (PropertyRNA *)&rna_Camera_show_safe_center,
	-1, "show_name", 3, 1, 0, 0, 0, "Show Name",
	"Show the active Camera\'s name in Camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_name_get, Camera_show_name_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_sensor = {
	{(PropertyRNA *)&rna_Camera_show_background_images, (PropertyRNA *)&rna_Camera_show_name,
	-1, "show_sensor", 3, 1, 0, 0, 0, "Show Sensor Size",
	"Show sensor size (film gate) in Camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_sensor_get, Camera_show_sensor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_background_images = {
	{(PropertyRNA *)&rna_Camera_lens_unit, (PropertyRNA *)&rna_Camera_show_sensor,
	-1, "show_background_images", 3, 1, 0, 0, 0, "Display Background Images",
	"Display reference images behind objects in the 3D View",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_background_images_get, Camera_show_background_images_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Camera_lens_unit_items[3] = {
	{0, "MILLIMETERS", 0, "Millimeters", "Specify focal length of the lens in millimeters"},
	{32, "FOV", 0, "Field of View", "Specify the lens as the field of view\'s angle"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Camera_lens_unit = {
	{(PropertyRNA *)&rna_Camera_show_composition_center, (PropertyRNA *)&rna_Camera_show_background_images,
	-1, "lens_unit", 3, 1, 0, 4, 0, "Lens Unit",
	"Unit to edit lens in for the user interface",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Camera, flag), 1, NULL},
	Camera_lens_unit_get, Camera_lens_unit_set, NULL, NULL, NULL, rna_Camera_lens_unit_items, 2, 0
};

BoolPropertyRNA rna_Camera_show_composition_center = {
	{(PropertyRNA *)&rna_Camera_show_composition_center_diagonal, (PropertyRNA *)&rna_Camera_lens_unit,
	-1, "show_composition_center", 3, 1, 0, 0, 0, "Center",
	"Display center composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_center_get, Camera_show_composition_center_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_center_diagonal = {
	{(PropertyRNA *)&rna_Camera_show_composition_thirds, (PropertyRNA *)&rna_Camera_show_composition_center,
	-1, "show_composition_center_diagonal", 3, 1, 0, 0, 0, "Center Diagonal",
	"Display diagonal center composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_center_diagonal_get, Camera_show_composition_center_diagonal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_thirds = {
	{(PropertyRNA *)&rna_Camera_show_composition_golden, (PropertyRNA *)&rna_Camera_show_composition_center_diagonal,
	-1, "show_composition_thirds", 3, 1, 0, 0, 0, "Thirds",
	"Display rule of thirds composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_thirds_get, Camera_show_composition_thirds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_golden = {
	{(PropertyRNA *)&rna_Camera_show_composition_golden_tria_a, (PropertyRNA *)&rna_Camera_show_composition_thirds,
	-1, "show_composition_golden", 3, 1, 0, 0, 0, "Golden Ratio",
	"Display golden ratio composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_golden_get, Camera_show_composition_golden_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_golden_tria_a = {
	{(PropertyRNA *)&rna_Camera_show_composition_golden_tria_b, (PropertyRNA *)&rna_Camera_show_composition_golden,
	-1, "show_composition_golden_tria_a", 3, 1, 0, 0, 0, "Golden Triangle A",
	"Display golden triangle A composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_golden_tria_a_get, Camera_show_composition_golden_tria_a_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_golden_tria_b = {
	{(PropertyRNA *)&rna_Camera_show_composition_harmony_tri_a, (PropertyRNA *)&rna_Camera_show_composition_golden_tria_a,
	-1, "show_composition_golden_tria_b", 3, 1, 0, 0, 0, "Golden Triangle B",
	"Display golden triangle B composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_golden_tria_b_get, Camera_show_composition_golden_tria_b_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_harmony_tri_a = {
	{(PropertyRNA *)&rna_Camera_show_composition_harmony_tri_b, (PropertyRNA *)&rna_Camera_show_composition_golden_tria_b,
	-1, "show_composition_harmony_tri_a", 3, 1, 0, 0, 0, "Harmonious Triangle A",
	"Display harmony A composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_harmony_tri_a_get, Camera_show_composition_harmony_tri_a_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Camera_show_composition_harmony_tri_b = {
	{(PropertyRNA *)&rna_Camera_dof, (PropertyRNA *)&rna_Camera_show_composition_harmony_tri_a,
	-1, "show_composition_harmony_tri_b", 3, 1, 0, 0, 0, "Harmonious Triangle B",
	"Display harmony B composition guide inside the camera view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_show_composition_harmony_tri_b_get, Camera_show_composition_harmony_tri_b_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Camera_dof = {
	{(PropertyRNA *)&rna_Camera_background_images, (PropertyRNA *)&rna_Camera_show_composition_harmony_tri_b,
	-1, "dof", 8388608, 1, 0, 0, 0, "Depth Of Field",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Camera_dof_get, NULL, NULL, NULL,&RNA_CameraDOFSettings
};

CollectionPropertyRNA rna_Camera_background_images = {
	{(PropertyRNA *)&rna_Camera_animation_data, (PropertyRNA *)&rna_Camera_dof,
	-1, "background_images", 0, 3073, 0, 0, 0, "Background Images",
	"List of background images",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Camera_background_images_override_apply,
	0, -1, &RNA_CameraBackgroundImages},
	Camera_background_images_begin, Camera_background_images_next, Camera_background_images_end, Camera_background_images_get, NULL, Camera_background_images_lookup_int, NULL, NULL, &RNA_CameraBackgroundImage
};

PointerPropertyRNA rna_Camera_animation_data = {
	{NULL, (PropertyRNA *)&rna_Camera_background_images,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Camera_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_Camera_view_frame_scene = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_1, NULL,
	-1, "scene", 8388736, 0, 0, 0, 0, "",
	"Scene to use for aspect calculation, when omitted 1:1 aspect is used",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

static float rna_Camera_view_frame_result_1_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_1 = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_2, (PropertyRNA *)&rna_Camera_view_frame_scene,
	-1, "result_1", 8388611, 0, 2, 0, 0, "Result",
	NULL,
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_1_default
};

static float rna_Camera_view_frame_result_2_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_2 = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_3, (PropertyRNA *)&rna_Camera_view_frame_result_1,
	-1, "result_2", 8388611, 0, 2, 0, 0, "Result",
	NULL,
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_2_default
};

static float rna_Camera_view_frame_result_3_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_3 = {
	{(PropertyRNA *)&rna_Camera_view_frame_result_4, (PropertyRNA *)&rna_Camera_view_frame_result_2,
	-1, "result_3", 8388611, 0, 2, 0, 0, "Result",
	NULL,
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_3_default
};

static float rna_Camera_view_frame_result_4_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Camera_view_frame_result_4 = {
	{NULL, (PropertyRNA *)&rna_Camera_view_frame_result_3,
	-1, "result_4", 8388611, 0, 2, 0, 0, "Result",
	NULL,
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Camera_view_frame_result_4_default
};

FunctionRNA rna_Camera_view_frame_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Camera_view_frame_scene, (PropertyRNA *)&rna_Camera_view_frame_result_4}},
	"view_frame", 0, "Return 4 points for the cameras frame (before object transformation)",
	Camera_view_frame_call,
	NULL
};

StructRNA RNA_Camera = {
	{(ContainerRNA *)&RNA_CameraBackgroundImage, (ContainerRNA *)&RNA_CacheFileLayer,
	NULL,
	{(PropertyRNA *)&rna_Camera_type, (PropertyRNA *)&rna_Camera_animation_data}},
	"Camera", NULL, NULL, 519, NULL, "Camera",
	"Camera data-block for storing camera settings",
	"*", 168,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Camera_view_frame_func, (FunctionRNA *)&rna_Camera_view_frame_func}
};

/* Background Image */
CollectionPropertyRNA rna_CameraBackgroundImage_rna_properties = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_rna_properties_begin, CameraBackgroundImage_rna_properties_next, CameraBackgroundImage_rna_properties_end, CameraBackgroundImage_rna_properties_get, NULL, NULL, CameraBackgroundImage_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CameraBackgroundImage_rna_type = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_is_override_data, (PropertyRNA *)&rna_CameraBackgroundImage_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_CameraBackgroundImage_is_override_data = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_source, (PropertyRNA *)&rna_CameraBackgroundImage_rna_type,
	-1, "is_override_data", 2, 0, 0, 0, 0, "Override Background Image",
	"In a local override camera, whether this background image comes from the linked reference camera, or is local to the override",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_is_override_data_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_CameraBackgroundImage_source_items[3] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "MOVIE_CLIP", 0, "Movie Clip", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CameraBackgroundImage_source = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_image, (PropertyRNA *)&rna_CameraBackgroundImage_is_override_data,
	-1, "source", 3, 1, 0, 4, 0, "Background Source",
	"Data source used for background",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, source), 1, NULL},
	CameraBackgroundImage_source_get, CameraBackgroundImage_source_set, NULL, NULL, NULL, rna_CameraBackgroundImage_source_items, 2, 0
};

PointerPropertyRNA rna_CameraBackgroundImage_image = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_clip, (PropertyRNA *)&rna_CameraBackgroundImage_source,
	-1, "image", 8388801, 1, 0, 0, 0, "Image",
	"Image displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_image_get, CameraBackgroundImage_image_set, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_CameraBackgroundImage_clip = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_image_user, (PropertyRNA *)&rna_CameraBackgroundImage_image,
	-1, "clip", 8388801, 1, 0, 0, 0, "MovieClip",
	"Movie clip displayed and edited in this space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_clip_get, CameraBackgroundImage_clip_set, NULL, NULL,&RNA_MovieClip
};

PointerPropertyRNA rna_CameraBackgroundImage_image_user = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_clip_user, (PropertyRNA *)&rna_CameraBackgroundImage_clip,
	-1, "image_user", 8650752, 1, 0, 0, 0, "Image User",
	"Parameters defining which layer, pass and frame of the image is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_image_user_get, NULL, NULL, NULL,&RNA_ImageUser
};

PointerPropertyRNA rna_CameraBackgroundImage_clip_user = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_offset, (PropertyRNA *)&rna_CameraBackgroundImage_image_user,
	-1, "clip_user", 8650752, 1, 0, 0, 0, "Clip User",
	"Parameters defining which frame of the movie clip is displayed",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_clip_user_get, NULL, NULL, NULL,&RNA_MovieClipUser
};

static float rna_CameraBackgroundImage_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CameraBackgroundImage_offset = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_scale, (PropertyRNA *)&rna_CameraBackgroundImage_clip_user,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, offset), 5, NULL},
	NULL, NULL, CameraBackgroundImage_offset_get, CameraBackgroundImage_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 5, 0.0f, rna_CameraBackgroundImage_offset_default
};

FloatPropertyRNA rna_CameraBackgroundImage_scale = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_rotation, (PropertyRNA *)&rna_CameraBackgroundImage_offset,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Scale the background image",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, scale), 5, NULL},
	CameraBackgroundImage_scale_get, CameraBackgroundImage_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_CameraBackgroundImage_rotation = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_use_flip_x, (PropertyRNA *)&rna_CameraBackgroundImage_scale,
	-1, "rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation for the background image (ortho view only)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, rotation), 5, NULL},
	CameraBackgroundImage_rotation_get, CameraBackgroundImage_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_CameraBackgroundImage_use_flip_x = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_use_flip_y, (PropertyRNA *)&rna_CameraBackgroundImage_rotation,
	-1, "use_flip_x", 3, 1, 0, 0, 0, "Flip Horizontally",
	"Flip the background image horizontally",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_use_flip_x_get, CameraBackgroundImage_use_flip_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CameraBackgroundImage_use_flip_y = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_alpha, (PropertyRNA *)&rna_CameraBackgroundImage_use_flip_x,
	-1, "use_flip_y", 3, 1, 0, 0, 0, "Flip Vertically",
	"Flip the background image vertically",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_use_flip_y_get, CameraBackgroundImage_use_flip_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CameraBackgroundImage_alpha = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_show_expanded, (PropertyRNA *)&rna_CameraBackgroundImage_use_flip_y,
	-1, "alpha", 3, 1, 0, 4, 0, "Opacity",
	"Image opacity to blend the image against the background color",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, alpha), 5, NULL},
	CameraBackgroundImage_alpha_get, CameraBackgroundImage_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_CameraBackgroundImage_show_expanded = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_use_camera_clip, (PropertyRNA *)&rna_CameraBackgroundImage_alpha,
	-1, "show_expanded", 1073745923, 1, 0, 0, 0, "Show Expanded",
	"Show the expanded in the user interface",
	10, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_show_expanded_get, CameraBackgroundImage_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CameraBackgroundImage_use_camera_clip = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_show_background_image, (PropertyRNA *)&rna_CameraBackgroundImage_show_expanded,
	-1, "use_camera_clip", 3, 1, 0, 0, 0, "Camera Clip",
	"Use movie clip from active scene camera",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_use_camera_clip_get, CameraBackgroundImage_use_camera_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CameraBackgroundImage_show_background_image = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_show_on_foreground, (PropertyRNA *)&rna_CameraBackgroundImage_use_camera_clip,
	-1, "show_background_image", 3, 1, 0, 0, 0, "Show Background Image",
	"Show this image as background",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_show_background_image_get, CameraBackgroundImage_show_background_image_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CameraBackgroundImage_show_on_foreground = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_display_depth, (PropertyRNA *)&rna_CameraBackgroundImage_show_background_image,
	-1, "show_on_foreground", 3, 1, 0, 0, 0, "Show On Foreground",
	"Show this image in front of objects in viewport",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImage_show_on_foreground_get, CameraBackgroundImage_show_on_foreground_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_CameraBackgroundImage_display_depth_items[3] = {
	{0, "BACK", 0, "Back", ""},
	{16, "FRONT", 0, "Front", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CameraBackgroundImage_display_depth = {
	{(PropertyRNA *)&rna_CameraBackgroundImage_frame_method, (PropertyRNA *)&rna_CameraBackgroundImage_show_on_foreground,
	-1, "display_depth", 3, 1, 0, 4, 0, "Depth",
	"Display under or over everything",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, flag), 1, NULL},
	CameraBackgroundImage_display_depth_get, CameraBackgroundImage_display_depth_set, NULL, NULL, NULL, rna_CameraBackgroundImage_display_depth_items, 2, 0
};

static const EnumPropertyItem rna_CameraBackgroundImage_frame_method_items[4] = {
	{0, "STRETCH", 0, "Stretch", ""},
	{32, "FIT", 0, "Fit", ""},
	{96, "CROP", 0, "Crop", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CameraBackgroundImage_frame_method = {
	{NULL, (PropertyRNA *)&rna_CameraBackgroundImage_display_depth,
	-1, "frame_method", 3, 1, 0, 4, 0, "Frame Method",
	"How the image fits in the camera frame",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 421462016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraBGImage, flag), 1, NULL},
	CameraBackgroundImage_frame_method_get, CameraBackgroundImage_frame_method_set, NULL, NULL, NULL, rna_CameraBackgroundImage_frame_method_items, 3, 0
};

StructRNA RNA_CameraBackgroundImage = {
	{(ContainerRNA *)&RNA_CameraBackgroundImages, (ContainerRNA *)&RNA_Camera,
	NULL,
	{(PropertyRNA *)&rna_CameraBackgroundImage_rna_properties, (PropertyRNA *)&rna_CameraBackgroundImage_frame_method}},
	"CameraBackgroundImage", NULL, NULL, 516, NULL, "Background Image",
	"Image and settings for display in the 3D View background",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CameraBackgroundImage_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Camera_background_image_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Background Images */
CollectionPropertyRNA rna_CameraBackgroundImages_rna_properties = {
	{(PropertyRNA *)&rna_CameraBackgroundImages_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImages_rna_properties_begin, CameraBackgroundImages_rna_properties_next, CameraBackgroundImages_rna_properties_end, CameraBackgroundImages_rna_properties_get, NULL, NULL, CameraBackgroundImages_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CameraBackgroundImages_rna_type = {
	{NULL, (PropertyRNA *)&rna_CameraBackgroundImages_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraBackgroundImages_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_CameraBackgroundImages_new_image = {
	{NULL, NULL,
	-1, "image", 8388608, 0, 2, 0, 0, "",
	"Image displayed as viewport background",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_CameraBackgroundImage
};

FunctionRNA rna_CameraBackgroundImages_new_func = {
	{(FunctionRNA *)&rna_CameraBackgroundImages_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_CameraBackgroundImages_new_image, (PropertyRNA *)&rna_CameraBackgroundImages_new_image}},
	"new", 0, "Add new background image",
	CameraBackgroundImages_new_call,
	(PropertyRNA *)&rna_CameraBackgroundImages_new_image
};

PointerPropertyRNA rna_CameraBackgroundImages_remove_image = {
	{NULL, NULL,
	-1, "image", 262144, 0, 5, 0, 0, "",
	"Image displayed as viewport background",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_CameraBackgroundImage
};

FunctionRNA rna_CameraBackgroundImages_remove_func = {
	{(FunctionRNA *)&rna_CameraBackgroundImages_clear_func, (FunctionRNA *)&rna_CameraBackgroundImages_new_func,
	NULL,
	{(PropertyRNA *)&rna_CameraBackgroundImages_remove_image, (PropertyRNA *)&rna_CameraBackgroundImages_remove_image}},
	"remove", 16, "Remove background image",
	CameraBackgroundImages_remove_call,
	NULL
};

FunctionRNA rna_CameraBackgroundImages_clear_func = {
	{NULL, (FunctionRNA *)&rna_CameraBackgroundImages_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all background images",
	CameraBackgroundImages_clear_call,
	NULL
};

StructRNA RNA_CameraBackgroundImages = {
	{(ContainerRNA *)&RNA_CameraStereoData, (ContainerRNA *)&RNA_CameraBackgroundImage,
	NULL,
	{(PropertyRNA *)&rna_CameraBackgroundImages_rna_properties, (PropertyRNA *)&rna_CameraBackgroundImages_rna_type}},
	"CameraBackgroundImages", NULL, NULL, 516, NULL, "Background Images",
	"Collection of background images",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CameraBackgroundImages_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CameraBackgroundImages_new_func, (FunctionRNA *)&rna_CameraBackgroundImages_clear_func}
};

/* Stereo */
CollectionPropertyRNA rna_CameraStereoData_rna_properties = {
	{(PropertyRNA *)&rna_CameraStereoData_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraStereoData_rna_properties_begin, CameraStereoData_rna_properties_next, CameraStereoData_rna_properties_end, CameraStereoData_rna_properties_get, NULL, NULL, CameraStereoData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CameraStereoData_rna_type = {
	{(PropertyRNA *)&rna_CameraStereoData_convergence_mode, (PropertyRNA *)&rna_CameraStereoData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraStereoData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_CameraStereoData_convergence_mode_items[4] = {
	{0, "OFFAXIS", 0, "Off-Axis", "Off-axis frustums converging in a plane"},
	{1, "PARALLEL", 0, "Parallel", "Parallel cameras with no convergence"},
	{2, "TOE", 0, "Toe-in", "Rotated cameras, looking at the convergence distance"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CameraStereoData_convergence_mode = {
	{(PropertyRNA *)&rna_CameraStereoData_pivot, (PropertyRNA *)&rna_CameraStereoData_rna_type,
	-1, "convergence_mode", 3, 1, 0, 4, 0, "Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, convergence_mode), 1, NULL},
	CameraStereoData_convergence_mode_get, CameraStereoData_convergence_mode_set, NULL, NULL, NULL, rna_CameraStereoData_convergence_mode_items, 3, 0
};

static const EnumPropertyItem rna_CameraStereoData_pivot_items[4] = {
	{0, "LEFT", 0, "Left", ""},
	{1, "RIGHT", 0, "Right", ""},
	{2, "CENTER", 0, "Center", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CameraStereoData_pivot = {
	{(PropertyRNA *)&rna_CameraStereoData_interocular_distance, (PropertyRNA *)&rna_CameraStereoData_convergence_mode,
	-1, "pivot", 3, 1, 0, 4, 0, "Pivot",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, pivot), 1, NULL},
	CameraStereoData_pivot_get, CameraStereoData_pivot_set, NULL, NULL, NULL, rna_CameraStereoData_pivot_items, 3, 0
};

FloatPropertyRNA rna_CameraStereoData_interocular_distance = {
	{(PropertyRNA *)&rna_CameraStereoData_convergence_distance, (PropertyRNA *)&rna_CameraStereoData_pivot,
	-1, "interocular_distance", 3, 1, 0, 4, 0, "Interocular Distance",
	"Set the distance between the eyes - the stereo plane distance / 30 should be fine",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, interocular_distance), 5, NULL},
	CameraStereoData_interocular_distance_get, CameraStereoData_interocular_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0649999976f, NULL
};

FloatPropertyRNA rna_CameraStereoData_convergence_distance = {
	{(PropertyRNA *)&rna_CameraStereoData_use_spherical_stereo, (PropertyRNA *)&rna_CameraStereoData_interocular_distance,
	-1, "convergence_distance", 3, 1, 0, 4, 0, "Convergence Plane Distance",
	"The converge point for the stereo cameras (often the distance between a projector and the projection screen)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, convergence_distance), 5, NULL},
	CameraStereoData_convergence_distance_get, CameraStereoData_convergence_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0000100000f, 15.0f, 0.0000100000f, FLT_MAX, 1.0f, 3, 1.9499999285f, NULL
};

BoolPropertyRNA rna_CameraStereoData_use_spherical_stereo = {
	{(PropertyRNA *)&rna_CameraStereoData_use_pole_merge, (PropertyRNA *)&rna_CameraStereoData_convergence_distance,
	-1, "use_spherical_stereo", 3, 1, 0, 0, 0, "Spherical Stereo",
	"Render every pixel rotating the camera around the middle of the interocular distance",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraStereoData_use_spherical_stereo_get, CameraStereoData_use_spherical_stereo_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CameraStereoData_use_pole_merge = {
	{(PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_from, (PropertyRNA *)&rna_CameraStereoData_use_spherical_stereo,
	-1, "use_pole_merge", 3, 1, 0, 0, 0, "Use Pole Merge",
	"Fade interocular distance to 0 after the given cutoff angle",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraStereoData_use_pole_merge_get, CameraStereoData_use_pole_merge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_from = {
	{(PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_to, (PropertyRNA *)&rna_CameraStereoData_use_pole_merge,
	-1, "pole_merge_angle_from", 3, 1, 0, 4, 0, "Pole Merge Start Angle",
	"Angle at which interocular distance starts to fade to 0",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, pole_merge_angle_from), 5, NULL},
	CameraStereoData_pole_merge_angle_from_get, CameraStereoData_pole_merge_angle_from_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 1.0471975803f, NULL
};

FloatPropertyRNA rna_CameraStereoData_pole_merge_angle_to = {
	{NULL, (PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_from,
	-1, "pole_merge_angle_to", 3, 1, 0, 4, 0, "Pole Merge End Angle",
	"Angle at which interocular distance is 0",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraStereoSettings, pole_merge_angle_to), 5, NULL},
	CameraStereoData_pole_merge_angle_to_get, CameraStereoData_pole_merge_angle_to_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.5707963705f, 0.0f, 1.5707963705f, 10.0f, 3, 1.3089969158f, NULL
};

StructRNA RNA_CameraStereoData = {
	{(ContainerRNA *)&RNA_CameraDOFSettings, (ContainerRNA *)&RNA_CameraBackgroundImages,
	NULL,
	{(PropertyRNA *)&rna_CameraStereoData_rna_properties, (PropertyRNA *)&rna_CameraStereoData_pole_merge_angle_to}},
	"CameraStereoData", NULL, NULL, 516, NULL, "Stereo",
	"Stereoscopy settings for a Camera data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CameraStereoData_rna_properties,
	NULL,
	&RNA_Camera,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Depth of Field */
CollectionPropertyRNA rna_CameraDOFSettings_rna_properties = {
	{(PropertyRNA *)&rna_CameraDOFSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraDOFSettings_rna_properties_begin, CameraDOFSettings_rna_properties_next, CameraDOFSettings_rna_properties_end, CameraDOFSettings_rna_properties_get, NULL, NULL, CameraDOFSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CameraDOFSettings_rna_type = {
	{(PropertyRNA *)&rna_CameraDOFSettings_use_dof, (PropertyRNA *)&rna_CameraDOFSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraDOFSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_CameraDOFSettings_use_dof = {
	{(PropertyRNA *)&rna_CameraDOFSettings_focus_object, (PropertyRNA *)&rna_CameraDOFSettings_rna_type,
	-1, "use_dof", 3, 1, 0, 0, 0, "Depth of Field",
	"Use Depth of Field",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraDOFSettings_use_dof_get, CameraDOFSettings_use_dof_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_CameraDOFSettings_focus_object = {
	{(PropertyRNA *)&rna_CameraDOFSettings_focus_subtarget, (PropertyRNA *)&rna_CameraDOFSettings_use_dof,
	-1, "focus_object", 8388737, 1, 0, 0, 0, "Focus Object",
	"Use this object to define the depth of field focal point",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraDOFSettings_focus_object_get, CameraDOFSettings_focus_object_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_CameraDOFSettings_focus_subtarget = {
	{(PropertyRNA *)&rna_CameraDOFSettings_focus_distance, (PropertyRNA *)&rna_CameraDOFSettings_focus_object,
	-1, "focus_subtarget", 262145, 1, 0, 0, 0, "Focus Bone",
	"Use this armature bone to define the depth of field focal point",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Camera_dependency_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraDOFSettings_focus_subtarget_get, CameraDOFSettings_focus_subtarget_length, CameraDOFSettings_focus_subtarget_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

FloatPropertyRNA rna_CameraDOFSettings_focus_distance = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_fstop, (PropertyRNA *)&rna_CameraDOFSettings_focus_subtarget,
	-1, "focus_distance", 3, 1, 0, 4, 0, "Focus Distance",
	"Distance to the focus point for depth of field",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, focus_distance), 5, NULL},
	CameraDOFSettings_focus_distance_get, CameraDOFSettings_focus_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5000.0f, 0.0f, FLT_MAX, 1.0f, 2, 10.0f, NULL
};

FloatPropertyRNA rna_CameraDOFSettings_aperture_fstop = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_blades, (PropertyRNA *)&rna_CameraDOFSettings_focus_distance,
	-1, "aperture_fstop", 3, 1, 0, 4, 0, "F-Stop",
	"F-Stop ratio (lower numbers give more defocus, higher numbers give a sharper image)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, aperture_fstop), 5, NULL},
	CameraDOFSettings_aperture_fstop_get, CameraDOFSettings_aperture_fstop_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 128.0f, 0.0f, FLT_MAX, 10.0f, 1, 2.7999999523f, NULL
};

IntPropertyRNA rna_CameraDOFSettings_aperture_blades = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_rotation, (PropertyRNA *)&rna_CameraDOFSettings_aperture_fstop,
	-1, "aperture_blades", 3, 1, 0, 0, 0, "Blades",
	"Number of blades in aperture for polygonal bokeh (at least 3)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CameraDOFSettings_aperture_blades_get, CameraDOFSettings_aperture_blades_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 16, 0, 16, 1, 0, NULL
};

FloatPropertyRNA rna_CameraDOFSettings_aperture_rotation = {
	{(PropertyRNA *)&rna_CameraDOFSettings_aperture_ratio, (PropertyRNA *)&rna_CameraDOFSettings_aperture_blades,
	-1, "aperture_rotation", 3, 1, 0, 4, 0, "Rotation",
	"Rotation of blades in aperture",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, aperture_rotation), 5, NULL},
	CameraDOFSettings_aperture_rotation_get, CameraDOFSettings_aperture_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CameraDOFSettings_aperture_ratio = {
	{NULL, (PropertyRNA *)&rna_CameraDOFSettings_aperture_rotation,
	-1, "aperture_ratio", 3, 1, 0, 4, 0, "Ratio",
	"Distortion to simulate anamorphic lens bokeh",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Camera_dof_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(CameraDOFSettings, aperture_ratio), 5, NULL},
	CameraDOFSettings_aperture_ratio_get, CameraDOFSettings_aperture_ratio_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 2.0f, 0.0099999998f, FLT_MAX, 0.1000000015f, 3, 1.0f, NULL
};

StructRNA RNA_CameraDOFSettings = {
	{(ContainerRNA *)&RNA_ClothSolverResult, (ContainerRNA *)&RNA_CameraStereoData,
	NULL,
	{(PropertyRNA *)&rna_CameraDOFSettings_rna_properties, (PropertyRNA *)&rna_CameraDOFSettings_aperture_ratio}},
	"CameraDOFSettings", NULL, NULL, 516, NULL, "Depth of Field",
	"Depth of Field settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CameraDOFSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_CameraDOFSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

