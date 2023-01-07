
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

#include "rna_fcurve.c"
#include "rna_fcurve_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_FCurve_rna_properties;
PointerPropertyRNA rna_FCurve_rna_type;
EnumPropertyRNA rna_FCurve_extrapolation;
PointerPropertyRNA rna_FCurve_driver;
PointerPropertyRNA rna_FCurve_group;
StringPropertyRNA rna_FCurve_data_path;
IntPropertyRNA rna_FCurve_array_index;
EnumPropertyRNA rna_FCurve_color_mode;
FloatPropertyRNA rna_FCurve_color;
BoolPropertyRNA rna_FCurve_select;
BoolPropertyRNA rna_FCurve_lock;
BoolPropertyRNA rna_FCurve_mute;
BoolPropertyRNA rna_FCurve_hide;
EnumPropertyRNA rna_FCurve_auto_smoothing;
BoolPropertyRNA rna_FCurve_is_valid;
BoolPropertyRNA rna_FCurve_is_empty;
CollectionPropertyRNA rna_FCurve_sampled_points;
CollectionPropertyRNA rna_FCurve_keyframe_points;
CollectionPropertyRNA rna_FCurve_modifiers;

extern FunctionRNA rna_FCurve_evaluate_func;
extern FloatPropertyRNA rna_FCurve_evaluate_frame;
extern FloatPropertyRNA rna_FCurve_evaluate_value;

extern FunctionRNA rna_FCurve_update_func;
extern FunctionRNA rna_FCurve_range_func;
extern FloatPropertyRNA rna_FCurve_range_range;

extern FunctionRNA rna_FCurve_update_autoflags_func;
extern PointerPropertyRNA rna_FCurve_update_autoflags_data;

extern FunctionRNA rna_FCurve_convert_to_samples_func;
extern IntPropertyRNA rna_FCurve_convert_to_samples_start;
extern IntPropertyRNA rna_FCurve_convert_to_samples_end;

extern FunctionRNA rna_FCurve_convert_to_keyframes_func;
extern IntPropertyRNA rna_FCurve_convert_to_keyframes_start;
extern IntPropertyRNA rna_FCurve_convert_to_keyframes_end;



CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties;
PointerPropertyRNA rna_FCurveKeyframePoints_rna_type;

extern FunctionRNA rna_FCurveKeyframePoints_insert_func;
extern FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame;
extern FloatPropertyRNA rna_FCurveKeyframePoints_insert_value;
extern EnumPropertyRNA rna_FCurveKeyframePoints_insert_options;
extern EnumPropertyRNA rna_FCurveKeyframePoints_insert_keyframe_type;
extern PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe;

extern FunctionRNA rna_FCurveKeyframePoints_add_func;
extern IntPropertyRNA rna_FCurveKeyframePoints_add_count;

extern FunctionRNA rna_FCurveKeyframePoints_remove_func;
extern PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe;
extern BoolPropertyRNA rna_FCurveKeyframePoints_remove_fast;

extern FunctionRNA rna_FCurveKeyframePoints_clear_func;


CollectionPropertyRNA rna_FCurveModifiers_rna_properties;
PointerPropertyRNA rna_FCurveModifiers_rna_type;
PointerPropertyRNA rna_FCurveModifiers_active;

extern FunctionRNA rna_FCurveModifiers_new_func;
extern PointerPropertyRNA rna_FCurveModifiers_new_fmodifier;
extern EnumPropertyRNA rna_FCurveModifiers_new_type;

extern FunctionRNA rna_FCurveModifiers_remove_func;
extern PointerPropertyRNA rna_FCurveModifiers_remove_modifier;



CollectionPropertyRNA rna_Keyframe_rna_properties;
PointerPropertyRNA rna_Keyframe_rna_type;
BoolPropertyRNA rna_Keyframe_select_left_handle;
BoolPropertyRNA rna_Keyframe_select_right_handle;
BoolPropertyRNA rna_Keyframe_select_control_point;
EnumPropertyRNA rna_Keyframe_handle_left_type;
EnumPropertyRNA rna_Keyframe_handle_right_type;
EnumPropertyRNA rna_Keyframe_interpolation;
EnumPropertyRNA rna_Keyframe_type;
EnumPropertyRNA rna_Keyframe_easing;
FloatPropertyRNA rna_Keyframe_back;
FloatPropertyRNA rna_Keyframe_amplitude;
FloatPropertyRNA rna_Keyframe_period;
FloatPropertyRNA rna_Keyframe_handle_left;
FloatPropertyRNA rna_Keyframe_co;
FloatPropertyRNA rna_Keyframe_co_ui;
FloatPropertyRNA rna_Keyframe_handle_right;


CollectionPropertyRNA rna_FCurveSample_rna_properties;
PointerPropertyRNA rna_FCurveSample_rna_type;
BoolPropertyRNA rna_FCurveSample_select;
FloatPropertyRNA rna_FCurveSample_co;


CollectionPropertyRNA rna_DriverTarget_rna_properties;
PointerPropertyRNA rna_DriverTarget_rna_type;
PointerPropertyRNA rna_DriverTarget_id;
EnumPropertyRNA rna_DriverTarget_id_type;
StringPropertyRNA rna_DriverTarget_data_path;
StringPropertyRNA rna_DriverTarget_bone_target;
EnumPropertyRNA rna_DriverTarget_transform_type;
EnumPropertyRNA rna_DriverTarget_rotation_mode;
EnumPropertyRNA rna_DriverTarget_transform_space;


CollectionPropertyRNA rna_DriverVariable_rna_properties;
PointerPropertyRNA rna_DriverVariable_rna_type;
StringPropertyRNA rna_DriverVariable_name;
EnumPropertyRNA rna_DriverVariable_type;
CollectionPropertyRNA rna_DriverVariable_targets;
BoolPropertyRNA rna_DriverVariable_is_name_valid;


CollectionPropertyRNA rna_Driver_rna_properties;
PointerPropertyRNA rna_Driver_rna_type;
EnumPropertyRNA rna_Driver_type;
StringPropertyRNA rna_Driver_expression;
CollectionPropertyRNA rna_Driver_variables;
BoolPropertyRNA rna_Driver_use_self;
BoolPropertyRNA rna_Driver_is_valid;
BoolPropertyRNA rna_Driver_is_simple_expression;


CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties;
PointerPropertyRNA rna_ChannelDriverVariables_rna_type;

extern FunctionRNA rna_ChannelDriverVariables_new_func;
extern PointerPropertyRNA rna_ChannelDriverVariables_new_var;

extern FunctionRNA rna_ChannelDriverVariables_remove_func;
extern PointerPropertyRNA rna_ChannelDriverVariables_remove_variable;



CollectionPropertyRNA rna_FModifier_rna_properties;
PointerPropertyRNA rna_FModifier_rna_type;
EnumPropertyRNA rna_FModifier_type;
BoolPropertyRNA rna_FModifier_show_expanded;
BoolPropertyRNA rna_FModifier_mute;
BoolPropertyRNA rna_FModifier_is_valid;
BoolPropertyRNA rna_FModifier_active;
BoolPropertyRNA rna_FModifier_use_restricted_range;
FloatPropertyRNA rna_FModifier_frame_start;
FloatPropertyRNA rna_FModifier_frame_end;
FloatPropertyRNA rna_FModifier_blend_in;
FloatPropertyRNA rna_FModifier_blend_out;
BoolPropertyRNA rna_FModifier_use_influence;
FloatPropertyRNA rna_FModifier_influence;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

BoolPropertyRNA rna_FModifierGenerator_use_additive;
EnumPropertyRNA rna_FModifierGenerator_mode;
IntPropertyRNA rna_FModifierGenerator_poly_order;
FloatPropertyRNA rna_FModifierGenerator_coefficients;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude;
FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier;
FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset;
FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset;
BoolPropertyRNA rna_FModifierFunctionGenerator_use_additive;
EnumPropertyRNA rna_FModifierFunctionGenerator_function_type;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

CollectionPropertyRNA rna_FModifierEnvelope_control_points;
FloatPropertyRNA rna_FModifierEnvelope_reference_value;
FloatPropertyRNA rna_FModifierEnvelope_default_min;
FloatPropertyRNA rna_FModifierEnvelope_default_max;


CollectionPropertyRNA rna_FModifierEnvelopeControlPoints_rna_properties;
PointerPropertyRNA rna_FModifierEnvelopeControlPoints_rna_type;

extern FunctionRNA rna_FModifierEnvelopeControlPoints_add_func;
extern FloatPropertyRNA rna_FModifierEnvelopeControlPoints_add_frame;
extern PointerPropertyRNA rna_FModifierEnvelopeControlPoints_add_point;

extern FunctionRNA rna_FModifierEnvelopeControlPoints_remove_func;
extern PointerPropertyRNA rna_FModifierEnvelopeControlPoints_remove_point;



CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties;
PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type;
FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min;
FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max;
FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

EnumPropertyRNA rna_FModifierCycles_mode_before;
IntPropertyRNA rna_FModifierCycles_cycles_before;
EnumPropertyRNA rna_FModifierCycles_mode_after;
IntPropertyRNA rna_FModifierCycles_cycles_after;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

BoolPropertyRNA rna_FModifierLimits_use_min_x;
BoolPropertyRNA rna_FModifierLimits_use_min_y;
BoolPropertyRNA rna_FModifierLimits_use_max_x;
BoolPropertyRNA rna_FModifierLimits_use_max_y;
FloatPropertyRNA rna_FModifierLimits_min_x;
FloatPropertyRNA rna_FModifierLimits_min_y;
FloatPropertyRNA rna_FModifierLimits_max_x;
FloatPropertyRNA rna_FModifierLimits_max_y;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

EnumPropertyRNA rna_FModifierNoise_blend_type;
FloatPropertyRNA rna_FModifierNoise_scale;
FloatPropertyRNA rna_FModifierNoise_strength;
FloatPropertyRNA rna_FModifierNoise_phase;
FloatPropertyRNA rna_FModifierNoise_offset;
IntPropertyRNA rna_FModifierNoise_depth;


extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern PointerPropertyRNA rna_FModifier_rna_type;
extern EnumPropertyRNA rna_FModifier_type;
extern BoolPropertyRNA rna_FModifier_show_expanded;
extern BoolPropertyRNA rna_FModifier_mute;
extern BoolPropertyRNA rna_FModifier_is_valid;
extern BoolPropertyRNA rna_FModifier_active;
extern BoolPropertyRNA rna_FModifier_use_restricted_range;
extern FloatPropertyRNA rna_FModifier_frame_start;
extern FloatPropertyRNA rna_FModifier_frame_end;
extern FloatPropertyRNA rna_FModifier_blend_in;
extern FloatPropertyRNA rna_FModifier_blend_out;
extern BoolPropertyRNA rna_FModifier_use_influence;
extern FloatPropertyRNA rna_FModifier_influence;

FloatPropertyRNA rna_FModifierStepped_frame_step;
FloatPropertyRNA rna_FModifierStepped_frame_offset;
BoolPropertyRNA rna_FModifierStepped_use_frame_start;
BoolPropertyRNA rna_FModifierStepped_use_frame_end;
FloatPropertyRNA rna_FModifierStepped_frame_start;
FloatPropertyRNA rna_FModifierStepped_frame_end;

static PointerRNA FCurve_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FCurve_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurve_rna_properties_get(iter);
    }
}

void FCurve_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_rna_properties_get(iter);
    }
}

void FCurve_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FCurve_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FCurve_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int FCurve_extrapolation_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->extend);
}

void FCurve_extrapolation_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->extend = value;
}

PointerRNA FCurve_driver_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Driver, data->driver);
}

PointerRNA FCurve_group_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ActionGroup, data->grp);
}

void FCurve_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_FCurve_group_set(ptr, value, reports);
}

void FCurve_data_path_get(PointerRNA *ptr, char *value)
{
    rna_FCurve_RnaPath_get(ptr, value);
}

int FCurve_data_path_length(PointerRNA *ptr)
{
    return rna_FCurve_RnaPath_length(ptr);
}

void FCurve_data_path_set(PointerRNA *ptr, const char *value)
{
    rna_FCurve_RnaPath_set(ptr, value);
}

int FCurve_array_index_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->array_index);
}

void FCurve_array_index_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->array_index = CLAMPIS(value, 0, INT_MAX);
}

int FCurve_color_mode_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->color_mode);
}

void FCurve_color_mode_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->color_mode = value;
}

void FCurve_color_get(PointerRNA *ptr, float values[3])
{
    FCurve *data = (FCurve *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void FCurve_color_set(PointerRNA *ptr, const float values[3])
{
    FCurve *data = (FCurve *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

bool FCurve_select_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void FCurve_select_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool FCurve_lock_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void FCurve_lock_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool FCurve_mute_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void FCurve_mute_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool FCurve_hide_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void FCurve_hide_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

int FCurve_auto_smoothing_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (int)(data->auto_smoothing);
}

void FCurve_auto_smoothing_set(PointerRNA *ptr, int value)
{
    FCurve *data = (FCurve *)(ptr->data);
    data->auto_smoothing = value;
}

bool FCurve_is_valid_get(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return !(((data->flag) & 1024) != 0);
}

void FCurve_is_valid_set(PointerRNA *ptr, bool value)
{
    FCurve *data = (FCurve *)(ptr->data);
    if (!value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool FCurve_is_empty_get(PointerRNA *ptr)
{
    return rna_FCurve_is_empty_get(ptr);
}

int FCurve_sampled_points_length(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (data->fpt == NULL) ? 0 : data->totvert;
}

static PointerRNA FCurve_sampled_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurveSample, rna_iterator_array_get(iter));
}

void FCurve_sampled_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_sampled_points;

    rna_iterator_array_begin(iter, data->fpt, sizeof(data->fpt[0]), data->totvert, 0, NULL);

    if (iter->valid) {
        iter->ptr = FCurve_sampled_points_get(iter);
    }
}

void FCurve_sampled_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_sampled_points_get(iter);
    }
}

void FCurve_sampled_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int FCurve_sampled_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FCurve_sampled_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_sampled_points_get(&iter); }
    }

    FCurve_sampled_points_end(&iter);

    return found;
}

int FCurve_keyframe_points_length(PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);
    return (data->bezt == NULL) ? 0 : data->totvert;
}

static PointerRNA FCurve_keyframe_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Keyframe, rna_iterator_array_get(iter));
}

void FCurve_keyframe_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_keyframe_points;

    rna_iterator_array_begin(iter, data->bezt, sizeof(data->bezt[0]), data->totvert, 0, NULL);

    if (iter->valid) {
        iter->ptr = FCurve_keyframe_points_get(iter);
    }
}

void FCurve_keyframe_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_keyframe_points_get(iter);
    }
}

void FCurve_keyframe_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int FCurve_keyframe_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FCurve_keyframe_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_keyframe_points_get(&iter); }
    }

    FCurve_keyframe_points_end(&iter);

    return found;
}

static PointerRNA FCurve_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifier, rna_iterator_listbase_get(iter));
}

void FCurve_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FCurve *data = (FCurve *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurve_modifiers;

    rna_iterator_listbase_begin(iter, &data->modifiers, NULL);

    if (iter->valid) {
        iter->ptr = FCurve_modifiers_get(iter);
    }
}

void FCurve_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = FCurve_modifiers_get(iter);
    }
}

void FCurve_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FCurve_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FCurve_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = FCurve_modifiers_get(&iter); }
    }

    FCurve_modifiers_end(&iter);

    return found;
}

static PointerRNA FCurveKeyframePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FCurveKeyframePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveKeyframePoints_rna_properties_get(iter);
    }
}

void FCurveKeyframePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurveKeyframePoints_rna_properties_get(iter);
    }
}

void FCurveKeyframePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FCurveKeyframePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FCurveKeyframePoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FCurveModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FCurveModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurveModifiers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveModifiers_rna_properties_get(iter);
    }
}

void FCurveModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurveModifiers_rna_properties_get(iter);
    }
}

void FCurveModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FCurveModifiers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FCurveModifiers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA FCurveModifiers_active_get(PointerRNA *ptr)
{
    return rna_FCurve_active_modifier_get(ptr);
}

void FCurveModifiers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_FCurve_active_modifier_set(ptr, value, reports);
}

static PointerRNA Keyframe_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Keyframe_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Keyframe_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Keyframe_rna_properties_get(iter);
    }
}

void Keyframe_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Keyframe_rna_properties_get(iter);
    }
}

void Keyframe_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Keyframe_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Keyframe_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool Keyframe_select_left_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f1) & 1) != 0);
}

void Keyframe_select_left_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f1 |= 1; }
    else { data->f1 &= ~1; }
}

bool Keyframe_select_right_handle_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f3) & 1) != 0);
}

void Keyframe_select_right_handle_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f3 |= 1; }
    else { data->f3 &= ~1; }
}

bool Keyframe_select_control_point_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (((data->f2) & 1) != 0);
}

void Keyframe_select_control_point_set(PointerRNA *ptr, bool value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    if (value) { data->f2 |= 1; }
    else { data->f2 &= ~1; }
}

int Keyframe_handle_left_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h1);
}

void Keyframe_handle_left_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h1 = value;
}

int Keyframe_handle_right_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->h2);
}

void Keyframe_handle_right_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->h2 = value;
}

int Keyframe_interpolation_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->ipo);
}

void Keyframe_interpolation_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->ipo = value;
}

int Keyframe_type_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->hide);
}

void Keyframe_type_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->hide = value;
}

int Keyframe_easing_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (int)(data->easing);
}

void Keyframe_easing_set(PointerRNA *ptr, int value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->easing = value;
}

float Keyframe_back_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->back);
}

void Keyframe_back_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->back = value;
}

float Keyframe_amplitude_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->amplitude);
}

void Keyframe_amplitude_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->amplitude = CLAMPIS(value, 0.0f, FLT_MAX);
}

float Keyframe_period_get(PointerRNA *ptr)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    return (float)(data->period);
}

void Keyframe_period_set(PointerRNA *ptr, float value)
{
    BezTriple *data = (BezTriple *)(ptr->data);
    data->period = value;
}

void Keyframe_handle_left_get(PointerRNA *ptr, float values[2])
{
    rna_FKeyframe_handle1_get(ptr, values);
}

void Keyframe_handle_left_set(PointerRNA *ptr, const float values[2])
{
    rna_FKeyframe_handle1_set(ptr, values);
}

void Keyframe_co_get(PointerRNA *ptr, float values[2])
{
    rna_FKeyframe_ctrlpoint_get(ptr, values);
}

void Keyframe_co_set(PointerRNA *ptr, const float values[2])
{
    rna_FKeyframe_ctrlpoint_set(ptr, values);
}

void Keyframe_co_ui_get(PointerRNA *ptr, float values[2])
{
    rna_FKeyframe_ctrlpoint_get(ptr, values);
}

void Keyframe_co_ui_set(PointerRNA *ptr, const float values[2])
{
    rna_FKeyframe_ctrlpoint_ui_set(ptr, values);
}

void Keyframe_handle_right_get(PointerRNA *ptr, float values[2])
{
    rna_FKeyframe_handle2_get(ptr, values);
}

void Keyframe_handle_right_set(PointerRNA *ptr, const float values[2])
{
    rna_FKeyframe_handle2_set(ptr, values);
}

static PointerRNA FCurveSample_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FCurveSample_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FCurveSample_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FCurveSample_rna_properties_get(iter);
    }
}

void FCurveSample_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FCurveSample_rna_properties_get(iter);
    }
}

void FCurveSample_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FCurveSample_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FCurveSample_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool FCurveSample_select_get(PointerRNA *ptr)
{
    FPoint *data = (FPoint *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void FCurveSample_select_set(PointerRNA *ptr, bool value)
{
    FPoint *data = (FPoint *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

void FCurveSample_co_get(PointerRNA *ptr, float values[2])
{
    FPoint *data = (FPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->vec)[i]);
    }
}

void FCurveSample_co_set(PointerRNA *ptr, const float values[2])
{
    FPoint *data = (FPoint *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->vec)[i] = values[i];
    }
}

static PointerRNA DriverTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DriverTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DriverTarget_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DriverTarget_rna_properties_get(iter);
    }
}

void DriverTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DriverTarget_rna_properties_get(iter);
    }
}

void DriverTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DriverTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DriverTarget_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA DriverTarget_id_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

void DriverTarget_id_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_DriverTarget_id_set(ptr, value, reports);
}

int DriverTarget_id_type_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->idtype);
}

void DriverTarget_id_type_set(PointerRNA *ptr, int value)
{
    rna_DriverTarget_id_type_set(ptr, value);
}

void DriverTarget_data_path_get(PointerRNA *ptr, char *value)
{
    rna_DriverTarget_RnaPath_get(ptr, value);
}

int DriverTarget_data_path_length(PointerRNA *ptr)
{
    return rna_DriverTarget_RnaPath_length(ptr);
}

void DriverTarget_data_path_set(PointerRNA *ptr, const char *value)
{
    rna_DriverTarget_RnaPath_set(ptr, value);
}

void DriverTarget_bone_target_get(PointerRNA *ptr, char *value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    BLI_strncpy_utf8(value, data->pchan_name, 64);
}

int DriverTarget_bone_target_length(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return strlen(data->pchan_name);
}

void DriverTarget_bone_target_set(PointerRNA *ptr, const char *value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    BLI_strncpy_utf8(data->pchan_name, value, 64);
}

int DriverTarget_transform_type_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->transChan);
}

void DriverTarget_transform_type_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->transChan = value;
}

int DriverTarget_rotation_mode_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return (int)(data->rotation_mode);
}

void DriverTarget_rotation_mode_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->rotation_mode = value;
}

int DriverTarget_transform_space_get(PointerRNA *ptr)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    return ((data->flag) & 12);
}

void DriverTarget_transform_space_set(PointerRNA *ptr, int value)
{
    DriverTarget *data = (DriverTarget *)(ptr->data);
    data->flag &= ~12;
    data->flag |= value;
}

static PointerRNA DriverVariable_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DriverVariable_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DriverVariable_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DriverVariable_rna_properties_get(iter);
    }
}

void DriverVariable_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DriverVariable_rna_properties_get(iter);
    }
}

void DriverVariable_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DriverVariable_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DriverVariable_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void DriverVariable_name_get(PointerRNA *ptr, char *value)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int DriverVariable_name_length(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return strlen(data->name);
}

void DriverVariable_name_set(PointerRNA *ptr, const char *value)
{
    rna_DriverVariable_name_set(ptr, value);
}

int DriverVariable_type_get(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return (int)(data->type);
}

void DriverVariable_type_set(PointerRNA *ptr, int value)
{
    rna_DriverVariable_type_set(ptr, value);
}

int DriverVariable_targets_length(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return data->num_targets;
}

static PointerRNA DriverVariable_targets_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_DriverTarget, rna_iterator_array_get(iter));
}

void DriverVariable_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DriverVariable_targets;

    rna_iterator_array_begin(iter, data->targets, sizeof(data->targets[0]), data->num_targets, 0, NULL);

    if (iter->valid) {
        iter->ptr = DriverVariable_targets_get(iter);
    }
}

void DriverVariable_targets_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = DriverVariable_targets_get(iter);
    }
}

void DriverVariable_targets_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int DriverVariable_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    DriverVariable_targets_begin(&iter, ptr);

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
        if (found) { *r_ptr = DriverVariable_targets_get(&iter); }
    }

    DriverVariable_targets_end(&iter);

    return found;
}

bool DriverVariable_is_name_valid_get(PointerRNA *ptr)
{
    DriverVar *data = (DriverVar *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

static PointerRNA Driver_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Driver_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Driver_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Driver_rna_properties_get(iter);
    }
}

void Driver_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Driver_rna_properties_get(iter);
    }
}

void Driver_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Driver_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Driver_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int Driver_type_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return (int)(data->type);
}

void Driver_type_set(PointerRNA *ptr, int value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    data->type = value;
}

void Driver_expression_get(PointerRNA *ptr, char *value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    BLI_strncpy_utf8(value, data->expression, 256);
}

int Driver_expression_length(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return strlen(data->expression);
}

void Driver_expression_set(PointerRNA *ptr, const char *value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    BLI_strncpy_utf8(data->expression, value, 256);
}

static PointerRNA Driver_variables_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_DriverVariable, rna_iterator_listbase_get(iter));
}

void Driver_variables_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Driver_variables;

    rna_iterator_listbase_begin(iter, &data->variables, NULL);

    if (iter->valid) {
        iter->ptr = Driver_variables_get(iter);
    }
}

void Driver_variables_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Driver_variables_get(iter);
    }
}

void Driver_variables_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Driver_variables_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Driver_variables_begin(&iter, ptr);

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
        if (found) { *r_ptr = Driver_variables_get(&iter); }
    }

    Driver_variables_end(&iter);

    return found;
}

int Driver_variables_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int DriverVariable_name_length(PointerRNA *);
    extern void DriverVariable_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Driver_variables_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = DriverVariable_name_length(&iter.ptr);
            if (namelen < 1024) {
                DriverVariable_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                DriverVariable_name_get(&iter.ptr, name);
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
        Driver_variables_next(&iter);
    }
    Driver_variables_end(&iter);

    return found;
}

bool Driver_use_self_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void Driver_use_self_set(PointerRNA *ptr, bool value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool Driver_is_valid_get(PointerRNA *ptr)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void Driver_is_valid_set(PointerRNA *ptr, bool value)
{
    ChannelDriver *data = (ChannelDriver *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool Driver_is_simple_expression_get(PointerRNA *ptr)
{
    return rna_ChannelDriver_is_simple_expression_get(ptr);
}

static PointerRNA ChannelDriverVariables_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ChannelDriverVariables_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ChannelDriverVariables_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ChannelDriverVariables_rna_properties_get(iter);
    }
}

void ChannelDriverVariables_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ChannelDriverVariables_rna_properties_get(iter);
    }
}

void ChannelDriverVariables_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ChannelDriverVariables_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ChannelDriverVariables_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifier_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifier_rna_properties_get(iter);
    }
}

void FModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FModifier_rna_properties_get(iter);
    }
}

void FModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FModifier_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FModifier_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int FModifier_type_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (int)(data->type);
}

bool FModifier_show_expanded_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

void FModifier_show_expanded_set(PointerRNA *ptr, bool value)
{
    rna_FModifier_show_expanded_set(ptr, value);
}

bool FModifier_mute_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void FModifier_mute_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool FModifier_is_valid_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

bool FModifier_active_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void FModifier_active_set(PointerRNA *ptr, bool value)
{
    rna_FModifier_active_set(ptr, value);
}

bool FModifier_use_restricted_range_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void FModifier_use_restricted_range_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

float FModifier_frame_start_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->sfra);
}

void FModifier_frame_start_set(PointerRNA *ptr, float value)
{
    rna_FModifier_start_frame_set(ptr, value);
}

float FModifier_frame_end_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->efra);
}

void FModifier_frame_end_set(PointerRNA *ptr, float value)
{
    rna_FModifier_end_frame_set(ptr, value);
}

float FModifier_blend_in_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->blendin);
}

void FModifier_blend_in_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_FModifier_blending_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->blendin = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float FModifier_blend_out_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->blendout);
}

void FModifier_blend_out_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_FModifier_blending_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->blendout = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

bool FModifier_use_influence_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void FModifier_use_influence_set(PointerRNA *ptr, bool value)
{
    FModifier *data = (FModifier *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

float FModifier_influence_get(PointerRNA *ptr)
{
    FModifier *data = (FModifier *)(ptr->data);
    return (float)(data->influence);
}

void FModifier_influence_set(PointerRNA *ptr, float value)
{
    FModifier *data = (FModifier *)(ptr->data);
    data->influence = CLAMPIS(value, 0.0f, 1.0f);
}

bool FModifierGenerator_use_additive_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

void FModifierGenerator_use_additive_set(PointerRNA *ptr, bool value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

int FModifierGenerator_mode_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (int)(data->mode);
}

void FModifierGenerator_mode_set(PointerRNA *ptr, int value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    data->mode = value;
}

int FModifierGenerator_poly_order_get(PointerRNA *ptr)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    return (int)(data->poly_order);
}

void FModifierGenerator_poly_order_set(PointerRNA *ptr, int value)
{
    FMod_Generator *data = (FMod_Generator *)(((FModifier *)ptr->data)->data);
    data->poly_order = CLAMPIS(value, 1, 100);
}

void FModifierGenerator_coefficients_get(PointerRNA *ptr, float values[])
{
    rna_FModifierGenerator_coefficients_get(ptr, values);
}

void FModifierGenerator_coefficients_set(PointerRNA *ptr, const float values[])
{
    rna_FModifierGenerator_coefficients_set(ptr, values);
}

float FModifierFunctionGenerator_amplitude_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->amplitude);
}

void FModifierFunctionGenerator_amplitude_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->amplitude = value;
}

float FModifierFunctionGenerator_phase_multiplier_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase_multiplier);
}

void FModifierFunctionGenerator_phase_multiplier_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->phase_multiplier = value;
}

float FModifierFunctionGenerator_phase_offset_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase_offset);
}

void FModifierFunctionGenerator_phase_offset_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->phase_offset = value;
}

float FModifierFunctionGenerator_value_offset_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (float)(data->value_offset);
}

void FModifierFunctionGenerator_value_offset_set(PointerRNA *ptr, float value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->value_offset = value;
}

bool FModifierFunctionGenerator_use_additive_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

void FModifierFunctionGenerator_use_additive_set(PointerRNA *ptr, bool value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

int FModifierFunctionGenerator_function_type_get(PointerRNA *ptr)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    return (int)(data->type);
}

void FModifierFunctionGenerator_function_type_set(PointerRNA *ptr, int value)
{
    FMod_FunctionGenerator *data = (FMod_FunctionGenerator *)(((FModifier *)ptr->data)->data);
    data->type = value;
}

int FModifierEnvelope_control_points_length(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (data->data == NULL) ? 0 : data->totvert;
}

static PointerRNA FModifierEnvelope_control_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifierEnvelopeControlPoint, rna_iterator_array_get(iter));
}

void FModifierEnvelope_control_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifierEnvelope_control_points;

    rna_iterator_array_begin(iter, data->data, sizeof(data->data[0]), data->totvert, 0, NULL);

    if (iter->valid) {
        iter->ptr = FModifierEnvelope_control_points_get(iter);
    }
}

void FModifierEnvelope_control_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelope_control_points_get(iter);
    }
}

void FModifierEnvelope_control_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int FModifierEnvelope_control_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FModifierEnvelope_control_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = FModifierEnvelope_control_points_get(&iter); }
    }

    FModifierEnvelope_control_points_end(&iter);

    return found;
}

float FModifierEnvelope_reference_value_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->midval);
}

void FModifierEnvelope_reference_value_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    data->midval = value;
}

float FModifierEnvelope_default_min_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->min);
}

void FModifierEnvelope_default_min_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    data->min = value;
}

float FModifierEnvelope_default_max_get(PointerRNA *ptr)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    return (float)(data->max);
}

void FModifierEnvelope_default_max_set(PointerRNA *ptr, float value)
{
    FMod_Envelope *data = (FMod_Envelope *)(((FModifier *)ptr->data)->data);
    data->max = value;
}

static PointerRNA FModifierEnvelopeControlPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FModifierEnvelopeControlPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoints_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoints_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FModifierEnvelopeControlPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FModifierEnvelopeControlPoints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA FModifierEnvelopeControlPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FModifierEnvelopeControlPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoint_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FModifierEnvelopeControlPoint_rna_properties_get(iter);
    }
}

void FModifierEnvelopeControlPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FModifierEnvelopeControlPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FModifierEnvelopeControlPoint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float FModifierEnvelopeControlPoint_min_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->min);
}

void FModifierEnvelopeControlPoint_min_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    data->min = value;
}

float FModifierEnvelopeControlPoint_max_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->max);
}

void FModifierEnvelopeControlPoint_max_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    data->max = value;
}

float FModifierEnvelopeControlPoint_frame_get(PointerRNA *ptr)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    return (float)(data->time);
}

void FModifierEnvelopeControlPoint_frame_set(PointerRNA *ptr, float value)
{
    FCM_EnvelopeData *data = (FCM_EnvelopeData *)(ptr->data);
    data->time = value;
}

int FModifierCycles_mode_before_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->before_mode);
}

void FModifierCycles_mode_before_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->before_mode = value;
}

int FModifierCycles_cycles_before_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->before_cycles);
}

void FModifierCycles_cycles_before_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->before_cycles = CLAMPIS(value, -32768, 32767);
}

int FModifierCycles_mode_after_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->after_mode);
}

void FModifierCycles_mode_after_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->after_mode = value;
}

int FModifierCycles_cycles_after_get(PointerRNA *ptr)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    return (int)(data->after_cycles);
}

void FModifierCycles_cycles_after_set(PointerRNA *ptr, int value)
{
    FMod_Cycles *data = (FMod_Cycles *)(((FModifier *)ptr->data)->data);
    data->after_cycles = CLAMPIS(value, -32768, 32767);
}

bool FModifierLimits_use_min_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

void FModifierLimits_use_min_x_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool FModifierLimits_use_min_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 4) != 0);
}

void FModifierLimits_use_min_y_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool FModifierLimits_use_max_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 2) != 0);
}

void FModifierLimits_use_max_x_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool FModifierLimits_use_max_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 8) != 0);
}

void FModifierLimits_use_max_y_set(PointerRNA *ptr, bool value)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

float FModifierLimits_min_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.xmin);
}

void FModifierLimits_min_x_set(PointerRNA *ptr, float value)
{
    rna_FModifierLimits_minx_set(ptr, value);
}

float FModifierLimits_min_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.ymin);
}

void FModifierLimits_min_y_set(PointerRNA *ptr, float value)
{
    rna_FModifierLimits_miny_set(ptr, value);
}

float FModifierLimits_max_x_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.xmax);
}

void FModifierLimits_max_x_set(PointerRNA *ptr, float value)
{
    rna_FModifierLimits_maxx_set(ptr, value);
}

float FModifierLimits_max_y_get(PointerRNA *ptr)
{
    FMod_Limits *data = (FMod_Limits *)(((FModifier *)ptr->data)->data);
    return (float)(data->rect.ymax);
}

void FModifierLimits_max_y_set(PointerRNA *ptr, float value)
{
    rna_FModifierLimits_maxy_set(ptr, value);
}

int FModifierNoise_blend_type_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (int)(data->modification);
}

void FModifierNoise_blend_type_set(PointerRNA *ptr, int value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->modification = value;
}

float FModifierNoise_scale_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->size);
}

void FModifierNoise_scale_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->size = value;
}

float FModifierNoise_strength_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->strength);
}

void FModifierNoise_strength_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->strength = value;
}

float FModifierNoise_phase_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->phase);
}

void FModifierNoise_phase_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->phase = value;
}

float FModifierNoise_offset_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (float)(data->offset);
}

void FModifierNoise_offset_set(PointerRNA *ptr, float value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->offset = value;
}

int FModifierNoise_depth_get(PointerRNA *ptr)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    return (int)(data->depth);
}

void FModifierNoise_depth_set(PointerRNA *ptr, int value)
{
    FMod_Noise *data = (FMod_Noise *)(((FModifier *)ptr->data)->data);
    data->depth = CLAMPIS(value, 0, 32767);
}

float FModifierStepped_frame_step_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->step_size);
}

void FModifierStepped_frame_step_set(PointerRNA *ptr, float value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    data->step_size = value;
}

float FModifierStepped_frame_offset_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->offset);
}

void FModifierStepped_frame_offset_set(PointerRNA *ptr, float value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    data->offset = value;
}

bool FModifierStepped_use_frame_start_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 1) != 0);
}

void FModifierStepped_use_frame_start_set(PointerRNA *ptr, bool value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool FModifierStepped_use_frame_end_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (((data->flag) & 2) != 0);
}

void FModifierStepped_use_frame_end_set(PointerRNA *ptr, bool value)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

float FModifierStepped_frame_start_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->start_frame);
}

void FModifierStepped_frame_start_set(PointerRNA *ptr, float value)
{
    rna_FModifierStepped_frame_start_set(ptr, value);
}

float FModifierStepped_frame_end_get(PointerRNA *ptr)
{
    FMod_Stepped *data = (FMod_Stepped *)(((FModifier *)ptr->data)->data);
    return (float)(data->end_frame);
}

void FModifierStepped_frame_end_set(PointerRNA *ptr, float value)
{
    rna_FModifierStepped_frame_end_set(ptr, value);
}

float FCurve_evaluate_func(struct FCurve *_self, float frame)
{
	return evaluate_fcurve(_self, frame);
}

void FCurve_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float frame;
	float value;
	char *_data, *_retdata;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	value = evaluate_fcurve(_self, frame);
	*((float *)_retdata) = value;
}

void FCurve_update_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FCurve_update_data_ex(_selfid, _self, bmain);
}

void FCurve_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FCurve_update_data_ex(_selfid, _self, CTX_data_main(C));
}

void FCurve_range_func(struct FCurve *_self, float range[2])
{
	rna_FCurve_range(_self, range);
}

void FCurve_range_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float *range;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	range = ((float *)_data);
	
	rna_FCurve_range(_self, range);
}

void FCurve_update_autoflags_func(struct FCurve *_self, bContext *C, ReportList *reports, struct PointerRNA *data)
{
	update_autoflags_fcurve(_self, C, reports, data);
}

void FCurve_update_autoflags_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct PointerRNA *data;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	
	update_autoflags_fcurve(_self, C, reports, data);
}

void FCurve_convert_to_samples_func(struct FCurve *_self, ReportList *reports, int start, int end)
{
	rna_FCurve_convert_to_samples(_self, reports, start, end);
}

void FCurve_convert_to_samples_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	int start;
	int end;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	
	rna_FCurve_convert_to_samples(_self, reports, start, end);
}

void FCurve_convert_to_keyframes_func(struct FCurve *_self, ReportList *reports, int start, int end)
{
	rna_FCurve_convert_to_keyframes(_self, reports, start, end);
}

void FCurve_convert_to_keyframes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	int start;
	int end;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	start = *((int *)_data);
	_data += 8;
	end = *((int *)_data);
	
	rna_FCurve_convert_to_keyframes(_self, reports, start, end);
}

/* Repeated prototypes to detect errors */

float evaluate_fcurve(struct FCurve *_self, float frame);
void rna_FCurve_update_data_ex(struct ID *_selfid, struct FCurve *_self, Main *bmain);
void rna_FCurve_range(struct FCurve *_self, float range[2]);
void update_autoflags_fcurve(struct FCurve *_self, bContext *C, ReportList *reports, struct PointerRNA *data);
void rna_FCurve_convert_to_samples(struct FCurve *_self, ReportList *reports, int start, int end);
void rna_FCurve_convert_to_keyframes(struct FCurve *_self, ReportList *reports, int start, int end);

struct BezTriple *FCurveKeyframePoints_insert_func(struct ID *_selfid, struct FCurve *_self, Main *bmain, float frame, float value, int options, int keyframe_type)
{
	return rna_FKeyframe_points_insert(_selfid, _self, bmain, frame, value, options, keyframe_type);
}

void FCurveKeyframePoints_insert_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	float frame;
	float value;
	int options;
	int keyframe_type;
	struct BezTriple *keyframe;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	value = *((float *)_data);
	_data += 8;
	options = *((int *)_data);
	_data += 8;
	keyframe_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	keyframe = rna_FKeyframe_points_insert(_selfid, _self, CTX_data_main(C), frame, value, options, keyframe_type);
	*((struct BezTriple **)_retdata) = keyframe;
}

void FCurveKeyframePoints_add_func(struct ID *_selfid, struct FCurve *_self, Main *bmain, int count)
{
	rna_FKeyframe_points_add(_selfid, _self, bmain, count);
}

void FCurveKeyframePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	int count;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	rna_FKeyframe_points_add(_selfid, _self, CTX_data_main(C), count);
}

void FCurveKeyframePoints_remove_func(struct ID *_selfid, struct FCurve *_self, Main *bmain, ReportList *reports, struct PointerRNA *keyframe, bool fast)
{
	rna_FKeyframe_points_remove(_selfid, _self, bmain, reports, keyframe, fast);
}

void FCurveKeyframePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	struct PointerRNA *keyframe;
	bool fast;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	keyframe = *((struct PointerRNA **)_data);
	_data += 8;
	fast = *((bool *)_data);
	
	rna_FKeyframe_points_remove(_selfid, _self, CTX_data_main(C), reports, keyframe, fast);
}

void FCurveKeyframePoints_clear_func(struct ID *_selfid, struct FCurve *_self, Main *bmain)
{
	rna_FKeyframe_points_clear(_selfid, _self, bmain);
}

void FCurveKeyframePoints_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FCurve *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FCurve *)_ptr->data;
	
	rna_FKeyframe_points_clear(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

struct BezTriple *rna_FKeyframe_points_insert(struct ID *_selfid, struct FCurve *_self, Main *bmain, float frame, float value, int options, int keyframe_type);
void rna_FKeyframe_points_add(struct ID *_selfid, struct FCurve *_self, Main *bmain, int count);
void rna_FKeyframe_points_remove(struct ID *_selfid, struct FCurve *_self, Main *bmain, ReportList *reports, struct PointerRNA *keyframe, bool fast);
void rna_FKeyframe_points_clear(struct ID *_selfid, struct FCurve *_self, Main *bmain);

struct FModifier *FCurveModifiers_new_func(struct FCurve *_self, int type)
{
	return rna_FCurve_modifiers_new(_self, type);
}

void FCurveModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct FModifier *fmodifier;
	int type;
	char *_data, *_retdata;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	type = *((int *)_data);
	
	fmodifier = rna_FCurve_modifiers_new(_self, type);
	*((struct FModifier **)_retdata) = fmodifier;
}

void FCurveModifiers_remove_func(struct FCurve *_self, ReportList *reports, struct PointerRNA *modifier)
{
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

void FCurveModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct PointerRNA *modifier;
	char *_data;
	
	_self = (struct FCurve *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((struct PointerRNA **)_data);
	
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct FModifier *rna_FCurve_modifiers_new(struct FCurve *_self, int type);
void rna_FCurve_modifiers_remove(struct FCurve *_self, ReportList *reports, struct PointerRNA *modifier);






struct DriverVar *ChannelDriverVariables_new_func(struct ChannelDriver *_self)
{
	return rna_Driver_new_variable(_self);
}

void ChannelDriverVariables_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ChannelDriver *_self;
	struct DriverVar *var;
	char *_data, *_retdata;
	
	_self = (struct ChannelDriver *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	var = rna_Driver_new_variable(_self);
	*((struct DriverVar **)_retdata) = var;
}

void ChannelDriverVariables_remove_func(struct ChannelDriver *_self, ReportList *reports, struct PointerRNA *variable)
{
	rna_Driver_remove_variable(_self, reports, variable);
}

void ChannelDriverVariables_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ChannelDriver *_self;
	struct PointerRNA *variable;
	char *_data;
	
	_self = (struct ChannelDriver *)_ptr->data;
	_data = (char *)_parms->data;
	variable = *((struct PointerRNA **)_data);
	
	rna_Driver_remove_variable(_self, reports, variable);
}

/* Repeated prototypes to detect errors */

struct DriverVar *rna_Driver_new_variable(struct ChannelDriver *_self);
void rna_Driver_remove_variable(struct ChannelDriver *_self, ReportList *reports, struct PointerRNA *variable);


int FModifierGenerator_coefficients_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_FModifierGenerator_coefficients_get_length(ptr, arraylen);
}




struct FCM_EnvelopeData *FModifierEnvelopeControlPoints_add_func(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, float frame)
{
	return rna_FModifierEnvelope_points_add(_selfid, _self, bmain, reports, frame);
}

void FModifierEnvelopeControlPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FModifier *_self;
	float frame;
	struct FCM_EnvelopeData *point;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FModifier *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = rna_FModifierEnvelope_points_add(_selfid, _self, CTX_data_main(C), reports, frame);
	*((struct FCM_EnvelopeData **)_retdata) = point;
}

void FModifierEnvelopeControlPoints_remove_func(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, struct PointerRNA *point)
{
	rna_FModifierEnvelope_points_remove(_selfid, _self, bmain, reports, point);
}

void FModifierEnvelopeControlPoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct FModifier *_self;
	struct PointerRNA *point;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct FModifier *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((struct PointerRNA *)_data);
	
	rna_FModifierEnvelope_points_remove(_selfid, _self, CTX_data_main(C), reports, point);
}

/* Repeated prototypes to detect errors */

struct FCM_EnvelopeData *rna_FModifierEnvelope_points_add(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, float frame);
void rna_FModifierEnvelope_points_remove(struct ID *_selfid, struct FModifier *_self, Main *bmain, ReportList *reports, struct PointerRNA *point);







/* F-Curve */
CollectionPropertyRNA rna_FCurve_rna_properties = {
	{(PropertyRNA *)&rna_FCurve_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_rna_properties_begin, FCurve_rna_properties_next, FCurve_rna_properties_end, FCurve_rna_properties_get, NULL, NULL, FCurve_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FCurve_rna_type = {
	{(PropertyRNA *)&rna_FCurve_extrapolation, (PropertyRNA *)&rna_FCurve_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_FCurve_extrapolation_items[3] = {
	{0, "CONSTANT", 0, "Constant", "Hold values of endpoint keyframes"},
	{1, "LINEAR", 0, "Linear", "Use slope of curve leading in/out of endpoint keyframes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurve_extrapolation = {
	{(PropertyRNA *)&rna_FCurve_driver, (PropertyRNA *)&rna_FCurve_rna_type,
	-1, "extrapolation", 3, 0, 0, 4, 0, "Extrapolation",
	"Method used for evaluating value of F-Curve outside first and last keyframes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, extend), 1, NULL},
	FCurve_extrapolation_get, FCurve_extrapolation_set, NULL, NULL, NULL, rna_FCurve_extrapolation_items, 2, 0
};

PointerPropertyRNA rna_FCurve_driver = {
	{(PropertyRNA *)&rna_FCurve_group, (PropertyRNA *)&rna_FCurve_extrapolation,
	-1, "driver", 8388608, 1, 0, 0, 0, "Driver",
	"Channel Driver (only set for Driver F-Curves)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_driver_get, NULL, NULL, NULL,&RNA_Driver
};

PointerPropertyRNA rna_FCurve_group = {
	{(PropertyRNA *)&rna_FCurve_data_path, (PropertyRNA *)&rna_FCurve_driver,
	-1, "group", 8388737, 0, 0, 0, 0, "Group",
	"Action Group that this F-Curve belongs to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251658240, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_group_get, FCurve_group_set, NULL, NULL,&RNA_ActionGroup
};

StringPropertyRNA rna_FCurve_data_path = {
	{(PropertyRNA *)&rna_FCurve_array_index, (PropertyRNA *)&rna_FCurve_group,
	-1, "data_path", 262145, 0, 0, 0, 0, "Data Path",
	"RNA Path to property affected by F-Curve",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data_relations, 251658240, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_data_path_get, FCurve_data_path_length, FCurve_data_path_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_FCurve_array_index = {
	{(PropertyRNA *)&rna_FCurve_color_mode, (PropertyRNA *)&rna_FCurve_data_path,
	-1, "array_index", 3, 0, 0, 4, 0, "RNA Array Index",
	"Index to the specific property affected by F-Curve if applicable",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data_relations, 251658240, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, array_index), 0, NULL},
	FCurve_array_index_get, FCurve_array_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static const EnumPropertyItem rna_FCurve_color_mode_items[5] = {
	{0, "AUTO_RAINBOW", 0, "Auto Rainbow", "Cycle through the rainbow, trying to give each curve a unique color"},
	{1, "AUTO_RGB", 0, "Auto XYZ to RGB", "Use axis colors for transform and color properties, and auto-rainbow for the rest"},
	{3, "AUTO_YRGB", 0, "Auto WXYZ to YRGB", "Use axis colors for XYZ parts of transform, and yellow for the \'W\' channel"},
	{2, "CUSTOM", 0, "User Defined", "Use custom hand-picked color for F-Curve"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurve_color_mode = {
	{(PropertyRNA *)&rna_FCurve_color, (PropertyRNA *)&rna_FCurve_array_index,
	-1, "color_mode", 3, 0, 0, 4, 0, "Color Mode",
	"Method used to determine color of F-Curve in Graph Editor",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 251658240, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, color_mode), 0, NULL},
	FCurve_color_mode_get, FCurve_color_mode_set, NULL, NULL, NULL, rna_FCurve_color_mode_items, 4, 0
};

static float rna_FCurve_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurve_color = {
	{(PropertyRNA *)&rna_FCurve_select, (PropertyRNA *)&rna_FCurve_color_mode,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Color of the F-Curve in the Graph Editor",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 251658240, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, color), 5, NULL},
	NULL, NULL, FCurve_color_get, FCurve_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_FCurve_color_default
};

BoolPropertyRNA rna_FCurve_select = {
	{(PropertyRNA *)&rna_FCurve_lock, (PropertyRNA *)&rna_FCurve_color,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"F-Curve is selected for editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256245766, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_select_get, FCurve_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FCurve_lock = {
	{(PropertyRNA *)&rna_FCurve_mute, (PropertyRNA *)&rna_FCurve_select,
	-1, "lock", 3, 0, 0, 0, 0, "Lock",
	"F-Curve\'s settings cannot be edited",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_lock_get, FCurve_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FCurve_mute = {
	{(PropertyRNA *)&rna_FCurve_hide, (PropertyRNA *)&rna_FCurve_lock,
	-1, "mute", 3, 1, 0, 0, 0, "Muted",
	"Disable F-Curve evaluation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FCurve_update_eval, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_mute_get, FCurve_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FCurve_hide = {
	{(PropertyRNA *)&rna_FCurve_auto_smoothing, (PropertyRNA *)&rna_FCurve_mute,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"F-Curve and its keyframes are hidden in the Graph Editor graphs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 269352960, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_hide_get, FCurve_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_FCurve_auto_smoothing = {
	{(PropertyRNA *)&rna_FCurve_is_valid, (PropertyRNA *)&rna_FCurve_hide,
	-1, "auto_smoothing", 3, 0, 0, 4, 0, "Auto Handle Smoothing",
	"Algorithm used to compute automatic handles",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FCurve_update_data, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCurve, auto_smoothing), 2, NULL},
	FCurve_auto_smoothing_get, FCurve_auto_smoothing_set, NULL, NULL, NULL, rna_enum_fcurve_auto_smoothing_items, 2, 0
};

BoolPropertyRNA rna_FCurve_is_valid = {
	{(PropertyRNA *)&rna_FCurve_is_empty, (PropertyRNA *)&rna_FCurve_auto_smoothing,
	-1, "is_valid", 3, 0, 0, 0, 0, "Valid",
	"False when F-Curve could not be evaluated in past, so should be skipped when evaluating",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_is_valid_get, FCurve_is_valid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FCurve_is_empty = {
	{(PropertyRNA *)&rna_FCurve_sampled_points, (PropertyRNA *)&rna_FCurve_is_valid,
	-1, "is_empty", 2, 0, 0, 0, 0, "Empty",
	"True if the curve contributes no animation due to lack of keyframes or useful modifiers, and should be deleted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_is_empty_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_FCurve_sampled_points = {
	{(PropertyRNA *)&rna_FCurve_keyframe_points, (PropertyRNA *)&rna_FCurve_is_empty,
	-1, "sampled_points", 0, 0, 0, 8, 0, "Sampled Points",
	"Sampled animation data",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurve_sampled_points_begin, FCurve_sampled_points_next, FCurve_sampled_points_end, FCurve_sampled_points_get, FCurve_sampled_points_length, FCurve_sampled_points_lookup_int, NULL, NULL, &RNA_FCurveSample
};

CollectionPropertyRNA rna_FCurve_keyframe_points = {
	{(PropertyRNA *)&rna_FCurve_modifiers, (PropertyRNA *)&rna_FCurve_sampled_points,
	-1, "keyframe_points", 0, 0, 0, 8, 0, "Keyframes",
	"User-editable keyframes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_FCurveKeyframePoints},
	FCurve_keyframe_points_begin, FCurve_keyframe_points_next, FCurve_keyframe_points_end, FCurve_keyframe_points_get, FCurve_keyframe_points_length, FCurve_keyframe_points_lookup_int, NULL, NULL, &RNA_Keyframe
};

CollectionPropertyRNA rna_FCurve_modifiers = {
	{NULL, (PropertyRNA *)&rna_FCurve_keyframe_points,
	-1, "modifiers", 0, 0, 0, 0, 0, "Modifiers",
	"Modifiers affecting the shape of the F-Curve",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_FCurveModifiers},
	FCurve_modifiers_begin, FCurve_modifiers_next, FCurve_modifiers_end, FCurve_modifiers_get, NULL, FCurve_modifiers_lookup_int, NULL, NULL, &RNA_FModifier
};

FloatPropertyRNA rna_FCurve_evaluate_frame = {
	{(PropertyRNA *)&rna_FCurve_evaluate_value, NULL,
	-1, "frame", 3, 0, 1, 0, 0, "Frame",
	"Evaluate F-Curve at given frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_FCurve_evaluate_value = {
	{NULL, (PropertyRNA *)&rna_FCurve_evaluate_frame,
	-1, "value", 3, 0, 2, 0, 0, "Value",
	"Value of F-Curve specific frame",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_FCurve_evaluate_func = {
	{(FunctionRNA *)&rna_FCurve_update_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FCurve_evaluate_frame, (PropertyRNA *)&rna_FCurve_evaluate_value}},
	"evaluate", 0, "Evaluate F-Curve",
	FCurve_evaluate_call,
	(PropertyRNA *)&rna_FCurve_evaluate_value
};

FunctionRNA rna_FCurve_update_func = {
	{(FunctionRNA *)&rna_FCurve_range_func, (FunctionRNA *)&rna_FCurve_evaluate_func,
	NULL,
	{NULL, NULL}},
	"update", 2052, "Ensure keyframes are sorted in chronological order and handles are set correctly",
	FCurve_update_call,
	NULL
};

static float rna_FCurve_range_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurve_range_range = {
	{NULL, NULL,
	-1, "range", 8388611, 0, 2, 0, 0, "Range",
	"Min/Max values",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_FCurve_range_range_default
};

FunctionRNA rna_FCurve_range_func = {
	{(FunctionRNA *)&rna_FCurve_update_autoflags_func, (FunctionRNA *)&rna_FCurve_update_func,
	NULL,
	{(PropertyRNA *)&rna_FCurve_range_range, (PropertyRNA *)&rna_FCurve_range_range}},
	"range", 0, "Get the time extents for F-Curve",
	FCurve_range_call,
	NULL
};

PointerPropertyRNA rna_FCurve_update_autoflags_data = {
	{NULL, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "Data",
	"Data containing the property controlled by given FCurve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_FCurve_update_autoflags_func = {
	{(FunctionRNA *)&rna_FCurve_convert_to_samples_func, (FunctionRNA *)&rna_FCurve_range_func,
	NULL,
	{(PropertyRNA *)&rna_FCurve_update_autoflags_data, (PropertyRNA *)&rna_FCurve_update_autoflags_data}},
	"update_autoflags", 24, "Update FCurve flags set automatically from affected property (currently, integer/discrete flags set when the property is not a float)",
	FCurve_update_autoflags_call,
	NULL
};

IntPropertyRNA rna_FCurve_convert_to_samples_start = {
	{(PropertyRNA *)&rna_FCurve_convert_to_samples_end, NULL,
	-1, "start", 3, 0, 1, 0, 0, "Start Frame",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_FCurve_convert_to_samples_end = {
	{NULL, (PropertyRNA *)&rna_FCurve_convert_to_samples_start,
	-1, "end", 3, 0, 1, 0, 0, "End Frame",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 0, NULL
};

FunctionRNA rna_FCurve_convert_to_samples_func = {
	{(FunctionRNA *)&rna_FCurve_convert_to_keyframes_func, (FunctionRNA *)&rna_FCurve_update_autoflags_func,
	NULL,
	{(PropertyRNA *)&rna_FCurve_convert_to_samples_start, (PropertyRNA *)&rna_FCurve_convert_to_samples_end}},
	"convert_to_samples", 16, "Convert current FCurve from keyframes to sample points, if necessary",
	FCurve_convert_to_samples_call,
	NULL
};

IntPropertyRNA rna_FCurve_convert_to_keyframes_start = {
	{(PropertyRNA *)&rna_FCurve_convert_to_keyframes_end, NULL,
	-1, "start", 3, 0, 1, 0, 0, "Start Frame",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 0, NULL
};

IntPropertyRNA rna_FCurve_convert_to_keyframes_end = {
	{NULL, (PropertyRNA *)&rna_FCurve_convert_to_keyframes_start,
	-1, "end", 3, 0, 1, 0, 0, "End Frame",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 0, NULL
};

FunctionRNA rna_FCurve_convert_to_keyframes_func = {
	{NULL, (FunctionRNA *)&rna_FCurve_convert_to_samples_func,
	NULL,
	{(PropertyRNA *)&rna_FCurve_convert_to_keyframes_start, (PropertyRNA *)&rna_FCurve_convert_to_keyframes_end}},
	"convert_to_keyframes", 16, "Convert current FCurve from sample points to keyframes (linear interpolation), if necessary",
	FCurve_convert_to_keyframes_call,
	NULL
};

StructRNA RNA_FCurve = {
	{(ContainerRNA *)&RNA_FCurveKeyframePoints, (ContainerRNA *)&RNA_DynamicPaintSurface,
	NULL,
	{(PropertyRNA *)&rna_FCurve_rna_properties, (PropertyRNA *)&rna_FCurve_modifiers}},
	"FCurve", NULL, NULL, 516, NULL, "F-Curve",
	"F-Curve defining values of a period of time",
	"*", 167,
	NULL, (PropertyRNA *)&rna_FCurve_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FCurve_evaluate_func, (FunctionRNA *)&rna_FCurve_convert_to_keyframes_func}
};

/* Keyframe Points */
CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveKeyframePoints_rna_properties_begin, FCurveKeyframePoints_rna_properties_next, FCurveKeyframePoints_rna_properties_end, FCurveKeyframePoints_rna_properties_get, NULL, NULL, FCurveKeyframePoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FCurveKeyframePoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveKeyframePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_value, NULL,
	-1, "frame", 3, 0, 1, 0, 0, "",
	"X Value of this keyframe point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FCurveKeyframePoints_insert_value = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_options, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_frame,
	-1, "value", 3, 0, 1, 0, 0, "",
	"Y Value of this keyframe point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_FCurveKeyframePoints_insert_options_items[4] = {
	{16, "REPLACE", 0, "Replace", "Don\'t add any new keyframes, but just replace existing ones"},
	{1, "NEEDED", 0, "Needed", "Only adds keyframes that are needed"},
	{4, "FAST", 0, "Fast", "Fast keyframe insertion to avoid recalculating the curve each time"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurveKeyframePoints_insert_options = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe_type, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_value,
	-1, "options", 2097155, 0, 0, 0, 0, "",
	"Keyframe options",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_FCurveKeyframePoints_insert_options_items, 3, 0
};

EnumPropertyRNA rna_FCurveKeyframePoints_insert_keyframe_type = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_options,
	-1, "keyframe_type", 3, 0, 0, 0, 0, "",
	"Type of keyframe to insert",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_beztriple_keyframe_type_items, 5, 0
};

PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe = {
	{NULL, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe_type,
	-1, "keyframe", 8388608, 0, 2, 0, 0, "",
	"Newly created keyframe",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Keyframe
};

FunctionRNA rna_FCurveKeyframePoints_insert_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_add_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_insert_frame, (PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe}},
	"insert", 2052, "Add a keyframe point to a F-Curve",
	FCurveKeyframePoints_insert_call,
	(PropertyRNA *)&rna_FCurveKeyframePoints_insert_keyframe
};

IntPropertyRNA rna_FCurveKeyframePoints_add_count = {
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

FunctionRNA rna_FCurveKeyframePoints_add_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_remove_func, (FunctionRNA *)&rna_FCurveKeyframePoints_insert_func,
	NULL,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_add_count, (PropertyRNA *)&rna_FCurveKeyframePoints_add_count}},
	"add", 2052, "Add a keyframe point to a F-Curve",
	FCurveKeyframePoints_add_call,
	NULL
};

PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe = {
	{(PropertyRNA *)&rna_FCurveKeyframePoints_remove_fast, NULL,
	-1, "keyframe", 262144, 0, 5, 0, 0, "",
	"Keyframe to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Keyframe
};

BoolPropertyRNA rna_FCurveKeyframePoints_remove_fast = {
	{NULL, (PropertyRNA *)&rna_FCurveKeyframePoints_remove_keyframe,
	-1, "fast", 3, 0, 0, 0, 0, "Fast",
	"Fast keyframe removal to avoid recalculating the curve each time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_FCurveKeyframePoints_remove_func = {
	{(FunctionRNA *)&rna_FCurveKeyframePoints_clear_func, (FunctionRNA *)&rna_FCurveKeyframePoints_add_func,
	NULL,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_remove_keyframe, (PropertyRNA *)&rna_FCurveKeyframePoints_remove_fast}},
	"remove", 2068, "Remove keyframe from an F-Curve",
	FCurveKeyframePoints_remove_call,
	NULL
};

FunctionRNA rna_FCurveKeyframePoints_clear_func = {
	{NULL, (FunctionRNA *)&rna_FCurveKeyframePoints_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 2052, "Remove all keyframes from an F-Curve",
	FCurveKeyframePoints_clear_call,
	NULL
};

StructRNA RNA_FCurveKeyframePoints = {
	{(ContainerRNA *)&RNA_FCurveModifiers, (ContainerRNA *)&RNA_FCurve,
	NULL,
	{(PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties, (PropertyRNA *)&rna_FCurveKeyframePoints_rna_type}},
	"FCurveKeyframePoints", NULL, NULL, 516, NULL, "Keyframe Points",
	"Collection of keyframe points",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FCurveKeyframePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FCurveKeyframePoints_insert_func, (FunctionRNA *)&rna_FCurveKeyframePoints_clear_func}
};

/* F-Curve Modifiers */
CollectionPropertyRNA rna_FCurveModifiers_rna_properties = {
	{(PropertyRNA *)&rna_FCurveModifiers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveModifiers_rna_properties_begin, FCurveModifiers_rna_properties_next, FCurveModifiers_rna_properties_end, FCurveModifiers_rna_properties_get, NULL, NULL, FCurveModifiers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FCurveModifiers_rna_type = {
	{(PropertyRNA *)&rna_FCurveModifiers_active, (PropertyRNA *)&rna_FCurveModifiers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FCurveModifiers_active = {
	{NULL, (PropertyRNA *)&rna_FCurveModifiers_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active F-Curve Modifier",
	"Active F-Curve Modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveModifiers_active_get, FCurveModifiers_active_set, NULL, NULL,&RNA_FModifier
};

PointerPropertyRNA rna_FCurveModifiers_new_fmodifier = {
	{(PropertyRNA *)&rna_FCurveModifiers_new_type, NULL,
	-1, "fmodifier", 8388608, 0, 2, 0, 0, "",
	"New fmodifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FModifier
};

EnumPropertyRNA rna_FCurveModifiers_new_type = {
	{NULL, (PropertyRNA *)&rna_FCurveModifiers_new_fmodifier,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_fmodifier_type_items, 8, 1
};

FunctionRNA rna_FCurveModifiers_new_func = {
	{(FunctionRNA *)&rna_FCurveModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FCurveModifiers_new_fmodifier, (PropertyRNA *)&rna_FCurveModifiers_new_type}},
	"new", 0, "Add a constraint to this object",
	FCurveModifiers_new_call,
	(PropertyRNA *)&rna_FCurveModifiers_new_fmodifier
};

PointerPropertyRNA rna_FCurveModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 262144, 0, 5, 0, 0, "",
	"Removed modifier",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FModifier
};

FunctionRNA rna_FCurveModifiers_remove_func = {
	{NULL, (FunctionRNA *)&rna_FCurveModifiers_new_func,
	NULL,
	{(PropertyRNA *)&rna_FCurveModifiers_remove_modifier, (PropertyRNA *)&rna_FCurveModifiers_remove_modifier}},
	"remove", 16, "Remove a modifier from this F-Curve",
	FCurveModifiers_remove_call,
	NULL
};

StructRNA RNA_FCurveModifiers = {
	{(ContainerRNA *)&RNA_Keyframe, (ContainerRNA *)&RNA_FCurveKeyframePoints,
	NULL,
	{(PropertyRNA *)&rna_FCurveModifiers_rna_properties, (PropertyRNA *)&rna_FCurveModifiers_active}},
	"FCurveModifiers", NULL, NULL, 516, NULL, "F-Curve Modifiers",
	"Collection of F-Curve Modifiers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FCurveModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FCurveModifiers_new_func, (FunctionRNA *)&rna_FCurveModifiers_remove_func}
};

/* Keyframe */
CollectionPropertyRNA rna_Keyframe_rna_properties = {
	{(PropertyRNA *)&rna_Keyframe_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_rna_properties_begin, Keyframe_rna_properties_next, Keyframe_rna_properties_end, Keyframe_rna_properties_get, NULL, NULL, Keyframe_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Keyframe_rna_type = {
	{(PropertyRNA *)&rna_Keyframe_select_left_handle, (PropertyRNA *)&rna_Keyframe_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_Keyframe_select_left_handle = {
	{(PropertyRNA *)&rna_Keyframe_select_right_handle, (PropertyRNA *)&rna_Keyframe_rna_type,
	-1, "select_left_handle", 3, 0, 0, 0, 0, "Handle 1 selected",
	"Left handle selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256245766, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_select_left_handle_get, Keyframe_select_left_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Keyframe_select_right_handle = {
	{(PropertyRNA *)&rna_Keyframe_select_control_point, (PropertyRNA *)&rna_Keyframe_select_left_handle,
	-1, "select_right_handle", 3, 0, 0, 0, 0, "Handle 2 selected",
	"Right handle selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256245766, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_select_right_handle_get, Keyframe_select_right_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Keyframe_select_control_point = {
	{(PropertyRNA *)&rna_Keyframe_handle_left_type, (PropertyRNA *)&rna_Keyframe_select_right_handle,
	-1, "select_control_point", 3, 0, 0, 0, 0, "Select",
	"Control point selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256245766, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_select_control_point_get, Keyframe_select_control_point_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_Keyframe_handle_left_type = {
	{(PropertyRNA *)&rna_Keyframe_handle_right_type, (PropertyRNA *)&rna_Keyframe_select_control_point,
	-1, "handle_left_type", 3, 0, 0, 0, 0, "Left Handle Type",
	"Handle types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_handle_left_type_get, Keyframe_handle_left_type_set, NULL, NULL, NULL, rna_enum_keyframe_handle_type_items, 5, 0
};

EnumPropertyRNA rna_Keyframe_handle_right_type = {
	{(PropertyRNA *)&rna_Keyframe_interpolation, (PropertyRNA *)&rna_Keyframe_handle_left_type,
	-1, "handle_right_type", 3, 0, 0, 0, 0, "Right Handle Type",
	"Handle types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Keyframe_handle_right_type_get, Keyframe_handle_right_type_set, NULL, NULL, NULL, rna_enum_keyframe_handle_type_items, 5, 0
};

EnumPropertyRNA rna_Keyframe_interpolation = {
	{(PropertyRNA *)&rna_Keyframe_type, (PropertyRNA *)&rna_Keyframe_handle_right_type,
	-1, "interpolation", 3, 0, 0, 4, 0, "Interpolation",
	"Interpolation method to use for segment of the F-Curve from this Keyframe until the next Keyframe",
	0, "Action",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, ipo), 2, NULL},
	Keyframe_interpolation_get, Keyframe_interpolation_set, NULL, NULL, NULL, rna_enum_beztriple_interpolation_mode_items, 16, 0
};

EnumPropertyRNA rna_Keyframe_type = {
	{(PropertyRNA *)&rna_Keyframe_easing, (PropertyRNA *)&rna_Keyframe_interpolation,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Type of keyframe (for visual purposes only)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, hide), 2, NULL},
	Keyframe_type_get, Keyframe_type_set, NULL, NULL, NULL, rna_enum_beztriple_keyframe_type_items, 5, 0
};

EnumPropertyRNA rna_Keyframe_easing = {
	{(PropertyRNA *)&rna_Keyframe_back, (PropertyRNA *)&rna_Keyframe_type,
	-1, "easing", 3, 0, 0, 4, 0, "Easing",
	"Which ends of the segment between this and the next keyframe easing interpolation is applied to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, easing), 2, NULL},
	Keyframe_easing_get, Keyframe_easing_set, NULL, NULL, NULL, rna_enum_beztriple_interpolation_easing_items, 4, 0
};

FloatPropertyRNA rna_Keyframe_back = {
	{(PropertyRNA *)&rna_Keyframe_amplitude, (PropertyRNA *)&rna_Keyframe_easing,
	-1, "back", 3, 0, 0, 4, 0, "Back",
	"Amount of overshoot for \'back\' easing",
	0, "Action",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, back), 5, NULL},
	Keyframe_back_get, Keyframe_back_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Keyframe_amplitude = {
	{(PropertyRNA *)&rna_Keyframe_period, (PropertyRNA *)&rna_Keyframe_back,
	-1, "amplitude", 3, 0, 0, 4, 0, "Amplitude",
	"Amount to boost elastic bounces for \'elastic\' easing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, amplitude), 5, NULL},
	Keyframe_amplitude_get, Keyframe_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Keyframe_period = {
	{(PropertyRNA *)&rna_Keyframe_handle_left, (PropertyRNA *)&rna_Keyframe_amplitude,
	-1, "period", 3, 0, 0, 4, 0, "Period",
	"Time between bounces for elastic easing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Keyframe_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BezTriple, period), 5, NULL},
	Keyframe_period_get, Keyframe_period_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_Keyframe_handle_left_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_handle_left = {
	{(PropertyRNA *)&rna_Keyframe_co, (PropertyRNA *)&rna_Keyframe_period,
	-1, "handle_left", 3, 0, 0, 0, 0, "Left Handle",
	"Coordinates of the left handle (before the control point)",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Keyframe_handle_left_get, Keyframe_handle_left_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_handle_left_default
};

static float rna_Keyframe_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_co = {
	{(PropertyRNA *)&rna_Keyframe_co_ui, (PropertyRNA *)&rna_Keyframe_handle_left,
	-1, "co", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Keyframe_co_get, Keyframe_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_co_default
};

static float rna_Keyframe_co_ui_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_co_ui = {
	{(PropertyRNA *)&rna_Keyframe_handle_right, (PropertyRNA *)&rna_Keyframe_co,
	-1, "co_ui", 3, 0, 0, 0, 0, "Control Point",
	"Coordinates of the control point. Note: Changing this value also updates the handles similar to using the graph editor transform operator",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Keyframe_co_ui_get, Keyframe_co_ui_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_co_ui_default
};

static float rna_Keyframe_handle_right_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_handle_right = {
	{NULL, (PropertyRNA *)&rna_Keyframe_co_ui,
	-1, "handle_right", 3, 0, 0, 0, 0, "Right Handle",
	"Coordinates of the right handle (after the control point)",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Keyframe_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Keyframe_handle_right_get, Keyframe_handle_right_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_handle_right_default
};

StructRNA RNA_Keyframe = {
	{(ContainerRNA *)&RNA_FCurveSample, (ContainerRNA *)&RNA_FCurveModifiers,
	NULL,
	{(PropertyRNA *)&rna_Keyframe_rna_properties, (PropertyRNA *)&rna_Keyframe_handle_right}},
	"Keyframe", NULL, NULL, 516, NULL, "Keyframe",
	"Bezier curve point with two handles defining a Keyframe on an F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Keyframe_rna_properties,
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

/* F-Curve Sample */
CollectionPropertyRNA rna_FCurveSample_rna_properties = {
	{(PropertyRNA *)&rna_FCurveSample_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveSample_rna_properties_begin, FCurveSample_rna_properties_next, FCurveSample_rna_properties_end, FCurveSample_rna_properties_get, NULL, NULL, FCurveSample_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FCurveSample_rna_type = {
	{(PropertyRNA *)&rna_FCurveSample_select, (PropertyRNA *)&rna_FCurveSample_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveSample_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_FCurveSample_select = {
	{(PropertyRNA *)&rna_FCurveSample_co, (PropertyRNA *)&rna_FCurveSample_rna_type,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Selection status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256245766, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FCurveSample_select_get, FCurveSample_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_FCurveSample_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurveSample_co = {
	{NULL, (PropertyRNA *)&rna_FCurveSample_select,
	-1, "co", 3, 0, 0, 4, 0, "Point",
	"Point coordinates",
	0, "*",
	PROP_FLOAT, PROP_COORDS | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FPoint, vec), 5, NULL},
	NULL, NULL, FCurveSample_co_get, FCurveSample_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FCurveSample_co_default
};

StructRNA RNA_FCurveSample = {
	{(ContainerRNA *)&RNA_DriverTarget, (ContainerRNA *)&RNA_Keyframe,
	NULL,
	{(PropertyRNA *)&rna_FCurveSample_rna_properties, (PropertyRNA *)&rna_FCurveSample_co}},
	"FCurveSample", NULL, NULL, 516, NULL, "F-Curve Sample",
	"Sample point for F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FCurveSample_rna_properties,
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

/* Driver Target */
CollectionPropertyRNA rna_DriverTarget_rna_properties = {
	{(PropertyRNA *)&rna_DriverTarget_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverTarget_rna_properties_begin, DriverTarget_rna_properties_next, DriverTarget_rna_properties_end, DriverTarget_rna_properties_get, NULL, NULL, DriverTarget_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DriverTarget_rna_type = {
	{(PropertyRNA *)&rna_DriverTarget_id, (PropertyRNA *)&rna_DriverTarget_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverTarget_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_DriverTarget_id = {
	{(PropertyRNA *)&rna_DriverTarget_id_type, (PropertyRNA *)&rna_DriverTarget_rna_type,
	-1, "id", 8388801, 1, 0, 0, 0, "ID",
	"ID-block that the specific property used can be found from (id_type property must be set first)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, rna_DriverTarget_id_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverTarget_id_get, DriverTarget_id_set, rna_DriverTarget_id_typef, NULL,&RNA_ID
};

EnumPropertyRNA rna_DriverTarget_id_type = {
	{(PropertyRNA *)&rna_DriverTarget_data_path, (PropertyRNA *)&rna_DriverTarget_id,
	-1, "id_type", 3, 0, 0, 0, 0, "ID Type",
	"Type of ID-block that can be used",
	0, "ID",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, rna_DriverTarget_id_type_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverTarget_id_type_get, DriverTarget_id_type_set, NULL, NULL, NULL, rna_enum_id_type_items, 38, 16975
};

StringPropertyRNA rna_DriverTarget_data_path = {
	{(PropertyRNA *)&rna_DriverTarget_bone_target, (PropertyRNA *)&rna_DriverTarget_id_type,
	-1, "data_path", 262145, 0, 0, 0, 0, "Data Path",
	"RNA Path (from ID-block) to property used",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverTarget_data_path_get, DriverTarget_data_path_length, DriverTarget_data_path_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_DriverTarget_bone_target = {
	{(PropertyRNA *)&rna_DriverTarget_transform_type, (PropertyRNA *)&rna_DriverTarget_data_path,
	-1, "bone_target", 262145, 0, 0, 0, 0, "Bone Name",
	"Name of PoseBone to use as target",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverTarget_bone_target_get, DriverTarget_bone_target_length, DriverTarget_bone_target_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_DriverTarget_transform_type_items[14] = {
	{0, "LOC_X", 0, "X Location", ""},
	{1, "LOC_Y", 0, "Y Location", ""},
	{2, "LOC_Z", 0, "Z Location", ""},
	{0, "", 0, NULL, NULL},
	{3, "ROT_X", 0, "X Rotation", ""},
	{4, "ROT_Y", 0, "Y Rotation", ""},
	{5, "ROT_Z", 0, "Z Rotation", ""},
	{10, "ROT_W", 0, "W Rotation", ""},
	{0, "", 0, NULL, NULL},
	{6, "SCALE_X", 0, "X Scale", ""},
	{7, "SCALE_Y", 0, "Y Scale", ""},
	{8, "SCALE_Z", 0, "Z Scale", ""},
	{9, "SCALE_AVG", 0, "Average Scale", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DriverTarget_transform_type = {
	{(PropertyRNA *)&rna_DriverTarget_rotation_mode, (PropertyRNA *)&rna_DriverTarget_bone_target,
	-1, "transform_type", 3, 0, 0, 4, 0, "Type",
	"Driver variable type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, transChan), 1, NULL},
	DriverTarget_transform_type_get, DriverTarget_transform_type_set, NULL, NULL, NULL, rna_DriverTarget_transform_type_items, 13, 0
};

EnumPropertyRNA rna_DriverTarget_rotation_mode = {
	{(PropertyRNA *)&rna_DriverTarget_transform_space, (PropertyRNA *)&rna_DriverTarget_transform_type,
	-1, "rotation_mode", 3, 0, 0, 4, 0, "Rotation Mode",
	"Mode for calculating rotation channel values",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, rotation_mode), 2, NULL},
	DriverTarget_rotation_mode_get, DriverTarget_rotation_mode_set, NULL, NULL, NULL, rna_enum_driver_target_rotation_mode_items, 11, 0
};

static const EnumPropertyItem rna_DriverTarget_transform_space_items[4] = {
	{0, "WORLD_SPACE", 0, "World Space", "Transforms include effects of parenting/restpose and constraints"},
	{4, "TRANSFORM_SPACE", 0, "Transform Space", "Transforms don\'t include parenting/restpose or constraints"},
	{12, "LOCAL_SPACE", 0, "Local Space", "Transforms include effects of constraints but not parenting/restpose"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DriverTarget_transform_space = {
	{NULL, (PropertyRNA *)&rna_DriverTarget_rotation_mode,
	-1, "transform_space", 3, 0, 0, 4, 0, "Transform Space",
	"Space in which transforms are used",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(DriverTarget, flag), 1, NULL},
	DriverTarget_transform_space_get, DriverTarget_transform_space_set, NULL, NULL, NULL, rna_DriverTarget_transform_space_items, 3, 0
};

StructRNA RNA_DriverTarget = {
	{(ContainerRNA *)&RNA_DriverVariable, (ContainerRNA *)&RNA_FCurveSample,
	NULL,
	{(PropertyRNA *)&rna_DriverTarget_rna_properties, (PropertyRNA *)&rna_DriverTarget_transform_space}},
	"DriverTarget", NULL, NULL, 516, NULL, "Driver Target",
	"Source of input values for driver variables",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DriverTarget_rna_properties,
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

/* Driver Variable */
CollectionPropertyRNA rna_DriverVariable_rna_properties = {
	{(PropertyRNA *)&rna_DriverVariable_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverVariable_rna_properties_begin, DriverVariable_rna_properties_next, DriverVariable_rna_properties_end, DriverVariable_rna_properties_get, NULL, NULL, DriverVariable_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DriverVariable_rna_type = {
	{(PropertyRNA *)&rna_DriverVariable_name, (PropertyRNA *)&rna_DriverVariable_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverVariable_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_DriverVariable_name = {
	{(PropertyRNA *)&rna_DriverVariable_type, (PropertyRNA *)&rna_DriverVariable_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name to use in scripted expressions/functions (no spaces or dots are allowed, and must start with a letter)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DriverTarget_update_name, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverVariable_name_get, DriverVariable_name_length, DriverVariable_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_DriverVariable_type_items[5] = {
	{0, "SINGLE_PROP", 206, "Single Property", "Use the value from some RNA property"},
	{3, "TRANSFORMS", 65, "Transform Channel", "Final transformation value of object or bone"},
	{1, "ROTATION_DIFF", 64, "Rotational Difference", "Use the angle between two bones"},
	{2, "LOC_DIFF", 63, "Distance", "Distance between two bones or objects"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DriverVariable_type = {
	{(PropertyRNA *)&rna_DriverVariable_targets, (PropertyRNA *)&rna_DriverVariable_name,
	-1, "type", 3, 0, 0, 0, 0, "Type",
	"Driver variable type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ChannelDriver_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverVariable_type_get, DriverVariable_type_set, NULL, NULL, NULL, rna_DriverVariable_type_items, 4, 0
};

CollectionPropertyRNA rna_DriverVariable_targets = {
	{(PropertyRNA *)&rna_DriverVariable_is_name_valid, (PropertyRNA *)&rna_DriverVariable_type,
	-1, "targets", 0, 1, 0, 8, 0, "Targets",
	"Sources of input data for evaluating this variable",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {8, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverVariable_targets_begin, DriverVariable_targets_next, DriverVariable_targets_end, DriverVariable_targets_get, DriverVariable_targets_length, DriverVariable_targets_lookup_int, NULL, NULL, &RNA_DriverTarget
};

BoolPropertyRNA rna_DriverVariable_is_name_valid = {
	{NULL, (PropertyRNA *)&rna_DriverVariable_targets,
	-1, "is_name_valid", 2, 0, 0, 0, 0, "Is Name Valid",
	"Is this a valid name for a driver variable",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DriverVariable_is_name_valid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_DriverVariable = {
	{(ContainerRNA *)&RNA_Driver, (ContainerRNA *)&RNA_DriverTarget,
	NULL,
	{(PropertyRNA *)&rna_DriverVariable_rna_properties, (PropertyRNA *)&rna_DriverVariable_is_name_valid}},
	"DriverVariable", NULL, NULL, 516, NULL, "Driver Variable",
	"Variable from some source/target for driver relationship",
	"*", 17,
	(PropertyRNA *)&rna_DriverVariable_name, (PropertyRNA *)&rna_DriverVariable_rna_properties,
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

/* Driver */
CollectionPropertyRNA rna_Driver_rna_properties = {
	{(PropertyRNA *)&rna_Driver_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Driver_rna_properties_begin, Driver_rna_properties_next, Driver_rna_properties_end, Driver_rna_properties_get, NULL, NULL, Driver_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Driver_rna_type = {
	{(PropertyRNA *)&rna_Driver_type, (PropertyRNA *)&rna_Driver_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Driver_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_Driver_type_items[6] = {
	{0, "AVERAGE", 0, "Averaged Value", ""},
	{2, "SUM", 0, "Sum Values", ""},
	{1, "SCRIPTED", 0, "Scripted Expression", ""},
	{3, "MIN", 0, "Minimum Value", ""},
	{4, "MAX", 0, "Maximum Value", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Driver_type = {
	{(PropertyRNA *)&rna_Driver_expression, (PropertyRNA *)&rna_Driver_rna_type,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Driver type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ChannelDriver_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ChannelDriver, type), 0, NULL},
	Driver_type_get, Driver_type_set, NULL, NULL, NULL, rna_Driver_type_items, 5, 0
};

StringPropertyRNA rna_Driver_expression = {
	{(PropertyRNA *)&rna_Driver_variables, (PropertyRNA *)&rna_Driver_type,
	-1, "expression", 262145, 0, 0, 0, 0, "Expression",
	"Expression to use for Scripted Expression",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	rna_ChannelDriver_update_expr, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Driver_expression_get, Driver_expression_length, Driver_expression_set, NULL, NULL, NULL, NULL, 0, 256, ""
};

CollectionPropertyRNA rna_Driver_variables = {
	{(PropertyRNA *)&rna_Driver_use_self, (PropertyRNA *)&rna_Driver_expression,
	-1, "variables", 0, 1, 0, 0, 0, "Variables",
	"Properties acting as inputs for this driver",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ChannelDriverVariables},
	Driver_variables_begin, Driver_variables_next, Driver_variables_end, Driver_variables_get, NULL, Driver_variables_lookup_int, Driver_variables_lookup_string, NULL, &RNA_DriverVariable
};

BoolPropertyRNA rna_Driver_use_self = {
	{(PropertyRNA *)&rna_Driver_is_valid, (PropertyRNA *)&rna_Driver_variables,
	-1, "use_self", 3, 0, 0, 0, 0, "Use Self",
	"Include a \'self\' variable in the name-space, so drivers can easily reference the data being modified (object, bone, etc...)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Driver_use_self_get, Driver_use_self_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Driver_is_valid = {
	{(PropertyRNA *)&rna_Driver_is_simple_expression, (PropertyRNA *)&rna_Driver_use_self,
	-1, "is_valid", 3, 0, 0, 0, 0, "Invalid",
	"Driver could not be evaluated in past, so should be skipped",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Driver_is_valid_get, Driver_is_valid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Driver_is_simple_expression = {
	{NULL, (PropertyRNA *)&rna_Driver_is_valid,
	-1, "is_simple_expression", 2, 0, 0, 0, 0, "Simple Expression",
	"The scripted expression can be evaluated without using the full python interpreter",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Driver_is_simple_expression_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Driver = {
	{(ContainerRNA *)&RNA_ChannelDriverVariables, (ContainerRNA *)&RNA_DriverVariable,
	NULL,
	{(PropertyRNA *)&rna_Driver_rna_properties, (PropertyRNA *)&rna_Driver_is_simple_expression}},
	"Driver", NULL, NULL, 516, NULL, "Driver",
	"Driver for the value of a setting based on an external value",
	"*", 519,
	NULL, (PropertyRNA *)&rna_Driver_rna_properties,
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

/* ChannelDriver Variables */
CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties = {
	{(PropertyRNA *)&rna_ChannelDriverVariables_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ChannelDriverVariables_rna_properties_begin, ChannelDriverVariables_rna_properties_next, ChannelDriverVariables_rna_properties_end, ChannelDriverVariables_rna_properties_get, NULL, NULL, ChannelDriverVariables_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ChannelDriverVariables_rna_type = {
	{NULL, (PropertyRNA *)&rna_ChannelDriverVariables_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ChannelDriverVariables_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ChannelDriverVariables_new_var = {
	{NULL, NULL,
	-1, "var", 8388608, 0, 2, 0, 0, "",
	"Newly created Driver Variable",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_DriverVariable
};

FunctionRNA rna_ChannelDriverVariables_new_func = {
	{(FunctionRNA *)&rna_ChannelDriverVariables_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ChannelDriverVariables_new_var, (PropertyRNA *)&rna_ChannelDriverVariables_new_var}},
	"new", 0, "Add a new variable for the driver",
	ChannelDriverVariables_new_call,
	(PropertyRNA *)&rna_ChannelDriverVariables_new_var
};

PointerPropertyRNA rna_ChannelDriverVariables_remove_variable = {
	{NULL, NULL,
	-1, "variable", 262144, 0, 5, 0, 0, "",
	"Variable to remove from the driver",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_DriverVariable
};

FunctionRNA rna_ChannelDriverVariables_remove_func = {
	{NULL, (FunctionRNA *)&rna_ChannelDriverVariables_new_func,
	NULL,
	{(PropertyRNA *)&rna_ChannelDriverVariables_remove_variable, (PropertyRNA *)&rna_ChannelDriverVariables_remove_variable}},
	"remove", 16, "Remove an existing variable from the driver",
	ChannelDriverVariables_remove_call,
	NULL
};

StructRNA RNA_ChannelDriverVariables = {
	{(ContainerRNA *)&RNA_FModifier, (ContainerRNA *)&RNA_Driver,
	NULL,
	{(PropertyRNA *)&rna_ChannelDriverVariables_rna_properties, (PropertyRNA *)&rna_ChannelDriverVariables_rna_type}},
	"ChannelDriverVariables", NULL, NULL, 516, NULL, "ChannelDriver Variables",
	"Collection of channel driver Variables",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ChannelDriverVariables_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ChannelDriverVariables_new_func, (FunctionRNA *)&rna_ChannelDriverVariables_remove_func}
};

/* F-Modifier */
CollectionPropertyRNA rna_FModifier_rna_properties = {
	{(PropertyRNA *)&rna_FModifier_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_rna_properties_begin, FModifier_rna_properties_next, FModifier_rna_properties_end, FModifier_rna_properties_get, NULL, NULL, FModifier_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FModifier_rna_type = {
	{(PropertyRNA *)&rna_FModifier_type, (PropertyRNA *)&rna_FModifier_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_FModifier_type = {
	{(PropertyRNA *)&rna_FModifier_show_expanded, (PropertyRNA *)&rna_FModifier_rna_type,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"F-Curve Modifier Type",
	0, "Action",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, type), 1, NULL},
	FModifier_type_get, NULL, NULL, NULL, NULL, rna_enum_fmodifier_type_items, 8, 0
};

BoolPropertyRNA rna_FModifier_show_expanded = {
	{(PropertyRNA *)&rna_FModifier_mute, (PropertyRNA *)&rna_FModifier_type,
	-1, "show_expanded", 1073745923, 0, 0, 0, 0, "Expanded",
	"F-Curve Modifier\'s panel is expanded in UI",
	10, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_show_expanded_get, FModifier_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifier_mute = {
	{(PropertyRNA *)&rna_FModifier_is_valid, (PropertyRNA *)&rna_FModifier_show_expanded,
	-1, "mute", 4355, 1, 0, 0, 0, "Enabled",
	"Enable F-Curve modifier evaluation",
	39, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_mute_get, FModifier_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifier_is_valid = {
	{(PropertyRNA *)&rna_FModifier_active, (PropertyRNA *)&rna_FModifier_mute,
	-1, "is_valid", 2, 0, 0, 0, 0, "Disabled",
	"F-Curve Modifier has invalid settings and will not be evaluated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_is_valid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifier_active = {
	{(PropertyRNA *)&rna_FModifier_use_restricted_range, (PropertyRNA *)&rna_FModifier_is_valid,
	-1, "active", 4099, 1, 0, 0, 0, "Active",
	"F-Curve modifier will show settings in the editor",
	12, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_active_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_active_get, FModifier_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifier_use_restricted_range = {
	{(PropertyRNA *)&rna_FModifier_frame_start, (PropertyRNA *)&rna_FModifier_active,
	-1, "use_restricted_range", 3, 1, 0, 0, 0, "Restrict Frame Range",
	"F-Curve Modifier is only applied for the specified frame range to help mask off effects in order to chain them",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_use_restricted_range_get, FModifier_use_restricted_range_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifier_frame_start = {
	{(PropertyRNA *)&rna_FModifier_frame_end, (PropertyRNA *)&rna_FModifier_use_restricted_range,
	-1, "frame_start", 3, 1, 0, 0, 0, "Start Frame",
	"Frame that modifier\'s influence starts (if Restrict Frame Range is in use)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_frame_start_get, FModifier_frame_start_set, NULL, NULL, rna_FModifier_start_frame_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifier_frame_end = {
	{(PropertyRNA *)&rna_FModifier_blend_in, (PropertyRNA *)&rna_FModifier_frame_start,
	-1, "frame_end", 3, 1, 0, 0, 0, "End Frame",
	"Frame that modifier\'s influence ends (if Restrict Frame Range is in use)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_frame_end_get, FModifier_frame_end_set, NULL, NULL, rna_FModifier_end_frame_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifier_blend_in = {
	{(PropertyRNA *)&rna_FModifier_blend_out, (PropertyRNA *)&rna_FModifier_frame_end,
	-1, "blend_in", 3, 1, 0, 4, 0, "Blend In",
	"Number of frames from start frame for influence to take effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, blendin), 5, NULL},
	FModifier_blend_in_get, FModifier_blend_in_set, NULL, NULL, rna_FModifier_blending_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifier_blend_out = {
	{(PropertyRNA *)&rna_FModifier_use_influence, (PropertyRNA *)&rna_FModifier_blend_in,
	-1, "blend_out", 3, 1, 0, 4, 0, "Blend Out",
	"Number of frames from end frame for influence to fade out",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, blendout), 5, NULL},
	FModifier_blend_out_get, FModifier_blend_out_set, NULL, NULL, rna_FModifier_blending_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FModifier_use_influence = {
	{(PropertyRNA *)&rna_FModifier_influence, (PropertyRNA *)&rna_FModifier_blend_out,
	-1, "use_influence", 3, 1, 0, 0, 0, "Use Influence",
	"F-Curve Modifier\'s effects will be tempered by a default factor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifier_use_influence_get, FModifier_use_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifier_influence = {
	{NULL, (PropertyRNA *)&rna_FModifier_use_influence,
	-1, "influence", 3, 1, 0, 4, 0, "Influence",
	"Amount of influence F-Curve Modifier will have when not fading in/out",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256311296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FModifier, influence), 5, NULL},
	FModifier_influence_get, FModifier_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

StructRNA RNA_FModifier = {
	{(ContainerRNA *)&RNA_FModifierGenerator, (ContainerRNA *)&RNA_ChannelDriverVariables,
	NULL,
	{(PropertyRNA *)&rna_FModifier_rna_properties, (PropertyRNA *)&rna_FModifier_influence}},
	"FModifier", NULL, NULL, 516, NULL, "F-Modifier",
	"Modifier for values of F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	NULL,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Generator F-Modifier */
BoolPropertyRNA rna_FModifierGenerator_use_additive = {
	{(PropertyRNA *)&rna_FModifierGenerator_mode, NULL,
	-1, "use_additive", 3, 1, 0, 0, 0, "Additive",
	"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierGenerator_use_additive_get, FModifierGenerator_use_additive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FModifierGenerator_mode_items[3] = {
	{0, "POLYNOMIAL", 0, "Expanded Polynomial", ""},
	{1, "POLYNOMIAL_FACTORISED", 0, "Factorized Polynomial", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierGenerator_mode = {
	{(PropertyRNA *)&rna_FModifierGenerator_poly_order, (PropertyRNA *)&rna_FModifierGenerator_use_additive,
	-1, "mode", 3, 1, 0, 4, 0, "Mode",
	"Type of generator to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_verify_data_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Generator, mode), 0, NULL},
	FModifierGenerator_mode_get, FModifierGenerator_mode_set, NULL, NULL, NULL, rna_FModifierGenerator_mode_items, 2, 0
};

IntPropertyRNA rna_FModifierGenerator_poly_order = {
	{(PropertyRNA *)&rna_FModifierGenerator_coefficients, (PropertyRNA *)&rna_FModifierGenerator_mode,
	-1, "poly_order", 3, 1, 0, 4, 0, "Polynomial Order",
	"The highest power of \'x\' for this polynomial (number of coefficients - 1)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_verify_data_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Generator, poly_order), 0, NULL},
	FModifierGenerator_poly_order_get, FModifierGenerator_poly_order_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 100, 1, 0, NULL
};

static float rna_FModifierGenerator_coefficients_default[32] = {
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

FloatPropertyRNA rna_FModifierGenerator_coefficients = {
	{NULL, (PropertyRNA *)&rna_FModifierGenerator_poly_order,
	-1, "coefficients", 131075, 1, 0, 0, 0, "Coefficients",
	"Coefficients for \'x\' (starting from lowest power of x^0)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_FModifierGenerator_coefficients_get_length, 1, {32, 0, 0}, 32,
	rna_FModifier_verify_data_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, FModifierGenerator_coefficients_get, FModifierGenerator_coefficients_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FModifierGenerator_coefficients_default
};

StructRNA RNA_FModifierGenerator = {
	{(ContainerRNA *)&RNA_FModifierFunctionGenerator, (ContainerRNA *)&RNA_FModifier,
	NULL,
	{(PropertyRNA *)&rna_FModifierGenerator_use_additive, (PropertyRNA *)&rna_FModifierGenerator_coefficients}},
	"FModifierGenerator", NULL, NULL, 516, NULL, "Generator F-Modifier",
	"Deterministically generate values for the modified F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Built-In Function F-Modifier */
FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_phase_multiplier, NULL,
	-1, "amplitude", 3, 1, 0, 4, 0, "Amplitude",
	"Scale factor determining the maximum/minimum values",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, amplitude), 5, NULL},
	FModifierFunctionGenerator_amplitude_get, FModifierFunctionGenerator_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_phase_offset, (PropertyRNA *)&rna_FModifierFunctionGenerator_amplitude,
	-1, "phase_multiplier", 3, 1, 0, 4, 0, "Phase Multiple",
	"Scale factor determining the \'speed\' of the function",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, phase_multiplier), 5, NULL},
	FModifierFunctionGenerator_phase_multiplier_get, FModifierFunctionGenerator_phase_multiplier_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_value_offset, (PropertyRNA *)&rna_FModifierFunctionGenerator_phase_multiplier,
	-1, "phase_offset", 3, 1, 0, 4, 0, "Phase Offset",
	"Constant factor to offset time by for function",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, phase_offset), 5, NULL},
	FModifierFunctionGenerator_phase_offset_get, FModifierFunctionGenerator_phase_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_use_additive, (PropertyRNA *)&rna_FModifierFunctionGenerator_phase_offset,
	-1, "value_offset", 3, 1, 0, 4, 0, "Value Offset",
	"Constant factor to offset values by",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, value_offset), 5, NULL},
	FModifierFunctionGenerator_value_offset_get, FModifierFunctionGenerator_value_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FModifierFunctionGenerator_use_additive = {
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_function_type, (PropertyRNA *)&rna_FModifierFunctionGenerator_value_offset,
	-1, "use_additive", 3, 1, 0, 0, 0, "Additive",
	"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierFunctionGenerator_use_additive_get, FModifierFunctionGenerator_use_additive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_FModifierFunctionGenerator_function_type_items[7] = {
	{0, "SIN", 0, "Sine", ""},
	{1, "COS", 0, "Cosine", ""},
	{2, "TAN", 0, "Tangent", ""},
	{3, "SQRT", 0, "Square Root", ""},
	{4, "LN", 0, "Natural Logarithm", ""},
	{5, "SINC", 0, "Normalized Sine", "sin(x) / x"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierFunctionGenerator_function_type = {
	{NULL, (PropertyRNA *)&rna_FModifierFunctionGenerator_use_additive,
	-1, "function_type", 3, 1, 0, 4, 0, "Type",
	"Type of built-in function to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_FunctionGenerator, type), 0, NULL},
	FModifierFunctionGenerator_function_type_get, FModifierFunctionGenerator_function_type_set, NULL, NULL, NULL, rna_FModifierFunctionGenerator_function_type_items, 6, 0
};

StructRNA RNA_FModifierFunctionGenerator = {
	{(ContainerRNA *)&RNA_FModifierEnvelope, (ContainerRNA *)&RNA_FModifierGenerator,
	NULL,
	{(PropertyRNA *)&rna_FModifierFunctionGenerator_amplitude, (PropertyRNA *)&rna_FModifierFunctionGenerator_function_type}},
	"FModifierFunctionGenerator", NULL, NULL, 516, NULL, "Built-In Function F-Modifier",
	"Generate values using a built-in function",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Envelope F-Modifier */
CollectionPropertyRNA rna_FModifierEnvelope_control_points = {
	{(PropertyRNA *)&rna_FModifierEnvelope_reference_value, NULL,
	-1, "control_points", 0, 1, 0, 8, 0, "Control Points",
	"Control points defining the shape of the envelope",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_FModifierEnvelopeControlPoints},
	FModifierEnvelope_control_points_begin, FModifierEnvelope_control_points_next, FModifierEnvelope_control_points_end, FModifierEnvelope_control_points_get, FModifierEnvelope_control_points_length, FModifierEnvelope_control_points_lookup_int, NULL, NULL, &RNA_FModifierEnvelopeControlPoint
};

FloatPropertyRNA rna_FModifierEnvelope_reference_value = {
	{(PropertyRNA *)&rna_FModifierEnvelope_default_min, (PropertyRNA *)&rna_FModifierEnvelope_control_points,
	-1, "reference_value", 3, 1, 0, 4, 0, "Reference Value",
	"Value that envelope\'s influence is centered around / based on",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Envelope, midval), 5, NULL},
	FModifierEnvelope_reference_value_get, FModifierEnvelope_reference_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelope_default_min = {
	{(PropertyRNA *)&rna_FModifierEnvelope_default_max, (PropertyRNA *)&rna_FModifierEnvelope_reference_value,
	-1, "default_min", 3, 1, 0, 4, 0, "Default Minimum",
	"Lower distance from Reference Value for 1:1 default influence",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Envelope, min), 5, NULL},
	FModifierEnvelope_default_min_get, FModifierEnvelope_default_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelope_default_max = {
	{NULL, (PropertyRNA *)&rna_FModifierEnvelope_default_min,
	-1, "default_max", 3, 1, 0, 4, 0, "Default Maximum",
	"Upper distance from Reference Value for 1:1 default influence",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Envelope, max), 5, NULL},
	FModifierEnvelope_default_max_get, FModifierEnvelope_default_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierEnvelope = {
	{(ContainerRNA *)&RNA_FModifierEnvelopeControlPoints, (ContainerRNA *)&RNA_FModifierFunctionGenerator,
	NULL,
	{(PropertyRNA *)&rna_FModifierEnvelope_control_points, (PropertyRNA *)&rna_FModifierEnvelope_default_max}},
	"FModifierEnvelope", NULL, NULL, 516, NULL, "Envelope F-Modifier",
	"Scale the values of the modified F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Control Points */
CollectionPropertyRNA rna_FModifierEnvelopeControlPoints_rna_properties = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierEnvelopeControlPoints_rna_properties_begin, FModifierEnvelopeControlPoints_rna_properties_next, FModifierEnvelopeControlPoints_rna_properties_end, FModifierEnvelopeControlPoints_rna_properties_get, NULL, NULL, FModifierEnvelopeControlPoints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoints_rna_type = {
	{NULL, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierEnvelopeControlPoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoints_add_frame = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_point, NULL,
	-1, "frame", 3, 0, 1, 0, 0, "",
	"Frame to add this control-point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoints_add_point = {
	{NULL, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_frame,
	-1, "point", 8388608, 0, 2, 0, 0, "",
	"Newly created control-point",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FModifierEnvelopeControlPoint
};

FunctionRNA rna_FModifierEnvelopeControlPoints_add_func = {
	{(FunctionRNA *)&rna_FModifierEnvelopeControlPoints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_frame, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_point}},
	"add", 2068, "Add a control point to a FModifierEnvelope",
	FModifierEnvelopeControlPoints_add_call,
	(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_add_point
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoints_remove_point = {
	{NULL, NULL,
	-1, "point", 8650752, 0, 5, 0, 0, "",
	"Control-point to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FModifierEnvelopeControlPoint
};

FunctionRNA rna_FModifierEnvelopeControlPoints_remove_func = {
	{NULL, (FunctionRNA *)&rna_FModifierEnvelopeControlPoints_add_func,
	NULL,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_remove_point, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_remove_point}},
	"remove", 2068, "Remove a control-point from an FModifierEnvelope",
	FModifierEnvelopeControlPoints_remove_call,
	NULL
};

StructRNA RNA_FModifierEnvelopeControlPoints = {
	{(ContainerRNA *)&RNA_FModifierEnvelopeControlPoint, (ContainerRNA *)&RNA_FModifierEnvelope,
	NULL,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_type}},
	"FModifierEnvelopeControlPoints", NULL, NULL, 516, NULL, "Control Points",
	"Control points defining the shape of the envelope",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifierEnvelopeControlPoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_FModifierEnvelopeControlPoints_add_func, (FunctionRNA *)&rna_FModifierEnvelopeControlPoints_remove_func}
};

/* Envelope Control Point */
CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierEnvelopeControlPoint_rna_properties_begin, FModifierEnvelopeControlPoint_rna_properties_next, FModifierEnvelopeControlPoint_rna_properties_end, FModifierEnvelopeControlPoint_rna_properties_get, NULL, NULL, FModifierEnvelopeControlPoint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_min, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierEnvelopeControlPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_max, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_type,
	-1, "min", 3, 1, 0, 4, 0, "Minimum Value",
	"Lower bound of envelope at this control-point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCM_EnvelopeData, min), 5, NULL},
	FModifierEnvelopeControlPoint_min_get, FModifierEnvelopeControlPoint_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max = {
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_frame, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_min,
	-1, "max", 3, 1, 0, 4, 0, "Maximum Value",
	"Upper bound of envelope at this control-point",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCM_EnvelopeData, max), 5, NULL},
	FModifierEnvelopeControlPoint_max_get, FModifierEnvelopeControlPoint_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame = {
	{NULL, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_max,
	-1, "frame", 3, 1, 0, 4, 0, "Frame",
	"Frame this control-point occurs on",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FCM_EnvelopeData, time), 5, NULL},
	FModifierEnvelopeControlPoint_frame_get, FModifierEnvelopeControlPoint_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierEnvelopeControlPoint = {
	{(ContainerRNA *)&RNA_FModifierCycles, (ContainerRNA *)&RNA_FModifierEnvelopeControlPoints,
	NULL,
	{(PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_frame}},
	"FModifierEnvelopeControlPoint", NULL, NULL, 516, NULL, "Envelope Control Point",
	"Control point for envelope F-Modifier",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifierEnvelopeControlPoint_rna_properties,
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

/* Cycles F-Modifier */
static const EnumPropertyItem rna_FModifierCycles_mode_before_items[5] = {
	{0, "NONE", 0, "No Cycles", "Don\'t do anything"},
	{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"},
	{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between start and end values"},
	{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierCycles_mode_before = {
	{(PropertyRNA *)&rna_FModifierCycles_cycles_before, NULL,
	-1, "mode_before", 3, 1, 0, 4, 0, "Before Mode",
	"Cycling mode to use before first keyframe",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, before_mode), 1, NULL},
	FModifierCycles_mode_before_get, FModifierCycles_mode_before_set, NULL, NULL, NULL, rna_FModifierCycles_mode_before_items, 4, 0
};

IntPropertyRNA rna_FModifierCycles_cycles_before = {
	{(PropertyRNA *)&rna_FModifierCycles_mode_after, (PropertyRNA *)&rna_FModifierCycles_mode_before,
	-1, "cycles_before", 3, 1, 0, 4, 0, "Before Cycles",
	"Maximum number of cycles to allow before first keyframe (0 = infinite)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, before_cycles), 1, NULL},
	FModifierCycles_cycles_before_get, FModifierCycles_cycles_before_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

static const EnumPropertyItem rna_FModifierCycles_mode_after_items[5] = {
	{0, "NONE", 0, "No Cycles", "Don\'t do anything"},
	{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"},
	{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between start and end values"},
	{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierCycles_mode_after = {
	{(PropertyRNA *)&rna_FModifierCycles_cycles_after, (PropertyRNA *)&rna_FModifierCycles_cycles_before,
	-1, "mode_after", 3, 1, 0, 4, 0, "After Mode",
	"Cycling mode to use after last keyframe",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, after_mode), 1, NULL},
	FModifierCycles_mode_after_get, FModifierCycles_mode_after_set, NULL, NULL, NULL, rna_FModifierCycles_mode_after_items, 4, 0
};

IntPropertyRNA rna_FModifierCycles_cycles_after = {
	{NULL, (PropertyRNA *)&rna_FModifierCycles_mode_after,
	-1, "cycles_after", 3, 1, 0, 4, 0, "After Cycles",
	"Maximum number of cycles to allow after last keyframe (0 = infinite)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Cycles, after_cycles), 1, NULL},
	FModifierCycles_cycles_after_get, FModifierCycles_cycles_after_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

StructRNA RNA_FModifierCycles = {
	{(ContainerRNA *)&RNA_FModifierPython, (ContainerRNA *)&RNA_FModifierEnvelopeControlPoint,
	NULL,
	{(PropertyRNA *)&rna_FModifierCycles_mode_before, (PropertyRNA *)&rna_FModifierCycles_cycles_after}},
	"FModifierCycles", NULL, NULL, 516, NULL, "Cycles F-Modifier",
	"Repeat the values of the modified F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Python F-Modifier */
StructRNA RNA_FModifierPython = {
	{(ContainerRNA *)&RNA_FModifierLimits, (ContainerRNA *)&RNA_FModifierCycles,
	NULL,
	{NULL, NULL}},
	"FModifierPython", NULL, NULL, 516, NULL, "Python F-Modifier",
	"Perform user-defined operation on the modified F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Limit F-Modifier */
BoolPropertyRNA rna_FModifierLimits_use_min_x = {
	{(PropertyRNA *)&rna_FModifierLimits_use_min_y, NULL,
	-1, "use_min_x", 3, 1, 0, 0, 0, "Minimum X",
	"Use the minimum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_use_min_x_get, FModifierLimits_use_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifierLimits_use_min_y = {
	{(PropertyRNA *)&rna_FModifierLimits_use_max_x, (PropertyRNA *)&rna_FModifierLimits_use_min_x,
	-1, "use_min_y", 3, 1, 0, 0, 0, "Minimum Y",
	"Use the minimum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_use_min_y_get, FModifierLimits_use_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifierLimits_use_max_x = {
	{(PropertyRNA *)&rna_FModifierLimits_use_max_y, (PropertyRNA *)&rna_FModifierLimits_use_min_y,
	-1, "use_max_x", 3, 1, 0, 0, 0, "Maximum X",
	"Use the maximum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_use_max_x_get, FModifierLimits_use_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifierLimits_use_max_y = {
	{(PropertyRNA *)&rna_FModifierLimits_min_x, (PropertyRNA *)&rna_FModifierLimits_use_max_x,
	-1, "use_max_y", 3, 1, 0, 0, 0, "Maximum Y",
	"Use the maximum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_use_max_y_get, FModifierLimits_use_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierLimits_min_x = {
	{(PropertyRNA *)&rna_FModifierLimits_min_y, (PropertyRNA *)&rna_FModifierLimits_use_max_y,
	-1, "min_x", 3, 1, 0, 0, 0, "Minimum X",
	"Lowest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_min_x_get, FModifierLimits_min_x_set, NULL, NULL, rna_FModifierLimits_minx_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierLimits_min_y = {
	{(PropertyRNA *)&rna_FModifierLimits_max_x, (PropertyRNA *)&rna_FModifierLimits_min_x,
	-1, "min_y", 3, 1, 0, 0, 0, "Minimum Y",
	"Lowest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_min_y_get, FModifierLimits_min_y_set, NULL, NULL, rna_FModifierLimits_miny_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierLimits_max_x = {
	{(PropertyRNA *)&rna_FModifierLimits_max_y, (PropertyRNA *)&rna_FModifierLimits_min_y,
	-1, "max_x", 3, 1, 0, 0, 0, "Maximum X",
	"Highest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_max_x_get, FModifierLimits_max_x_set, NULL, NULL, rna_FModifierLimits_maxx_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierLimits_max_y = {
	{NULL, (PropertyRNA *)&rna_FModifierLimits_max_x,
	-1, "max_y", 3, 1, 0, 0, 0, "Maximum Y",
	"Highest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierLimits_max_y_get, FModifierLimits_max_y_set, NULL, NULL, rna_FModifierLimits_maxy_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierLimits = {
	{(ContainerRNA *)&RNA_FModifierNoise, (ContainerRNA *)&RNA_FModifierPython,
	NULL,
	{(PropertyRNA *)&rna_FModifierLimits_use_min_x, (PropertyRNA *)&rna_FModifierLimits_max_y}},
	"FModifierLimits", NULL, NULL, 516, NULL, "Limit F-Modifier",
	"Limit the time/value ranges of the modified F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Noise F-Modifier */
static const EnumPropertyItem rna_FModifierNoise_blend_type_items[5] = {
	{0, "REPLACE", 0, "Replace", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "SUBTRACT", 0, "Subtract", ""},
	{3, "MULTIPLY", 0, "Multiply", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierNoise_blend_type = {
	{(PropertyRNA *)&rna_FModifierNoise_scale, NULL,
	-1, "blend_type", 3, 1, 0, 4, 0, "Blend Type",
	"Method of modifying the existing F-Curve",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, modification), 1, NULL},
	FModifierNoise_blend_type_get, FModifierNoise_blend_type_set, NULL, NULL, NULL, rna_FModifierNoise_blend_type_items, 4, 0
};

FloatPropertyRNA rna_FModifierNoise_scale = {
	{(PropertyRNA *)&rna_FModifierNoise_strength, (PropertyRNA *)&rna_FModifierNoise_blend_type,
	-1, "scale", 3, 1, 0, 4, 0, "Scale",
	"Scaling (in time) of the noise",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, size), 5, NULL},
	FModifierNoise_scale_get, FModifierNoise_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierNoise_strength = {
	{(PropertyRNA *)&rna_FModifierNoise_phase, (PropertyRNA *)&rna_FModifierNoise_scale,
	-1, "strength", 3, 1, 0, 4, 0, "Strength",
	"Amplitude of the noise - the amount that it modifies the underlying curve",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, strength), 5, NULL},
	FModifierNoise_strength_get, FModifierNoise_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierNoise_phase = {
	{(PropertyRNA *)&rna_FModifierNoise_offset, (PropertyRNA *)&rna_FModifierNoise_strength,
	-1, "phase", 3, 1, 0, 4, 0, "Phase",
	"A random seed for the noise effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, phase), 5, NULL},
	FModifierNoise_phase_get, FModifierNoise_phase_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierNoise_offset = {
	{(PropertyRNA *)&rna_FModifierNoise_depth, (PropertyRNA *)&rna_FModifierNoise_phase,
	-1, "offset", 3, 1, 0, 4, 0, "Offset",
	"Time offset for the noise effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, offset), 5, NULL},
	FModifierNoise_offset_get, FModifierNoise_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_FModifierNoise_depth = {
	{NULL, (PropertyRNA *)&rna_FModifierNoise_offset,
	-1, "depth", 3, 1, 0, 4, 0, "Depth",
	"Amount of fine level detail present in the noise",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Noise, depth), 1, NULL},
	FModifierNoise_depth_get, FModifierNoise_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

StructRNA RNA_FModifierNoise = {
	{(ContainerRNA *)&RNA_FModifierStepped, (ContainerRNA *)&RNA_FModifierLimits,
	NULL,
	{(PropertyRNA *)&rna_FModifierNoise_blend_type, (PropertyRNA *)&rna_FModifierNoise_depth}},
	"FModifierNoise", NULL, NULL, 516, NULL, "Noise F-Modifier",
	"Give randomness to the modified F-Curve",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Stepped Interpolation F-Modifier */
FloatPropertyRNA rna_FModifierStepped_frame_step = {
	{(PropertyRNA *)&rna_FModifierStepped_frame_offset, NULL,
	-1, "frame_step", 3, 1, 0, 4, 0, "Step Size",
	"Number of frames to hold each value",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Stepped, step_size), 5, NULL},
	FModifierStepped_frame_step_get, FModifierStepped_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierStepped_frame_offset = {
	{(PropertyRNA *)&rna_FModifierStepped_use_frame_start, (PropertyRNA *)&rna_FModifierStepped_frame_step,
	-1, "frame_offset", 3, 1, 0, 4, 0, "Offset",
	"Reference number of frames before frames get held (use to get hold for \'1-3\' vs \'5-7\' holding patterns)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(FMod_Stepped, offset), 5, NULL},
	FModifierStepped_frame_offset_get, FModifierStepped_frame_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_FModifierStepped_use_frame_start = {
	{(PropertyRNA *)&rna_FModifierStepped_use_frame_end, (PropertyRNA *)&rna_FModifierStepped_frame_offset,
	-1, "use_frame_start", 3, 1, 0, 0, 0, "Use Start Frame",
	"Restrict modifier to only act after its \'start\' frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierStepped_use_frame_start_get, FModifierStepped_use_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FModifierStepped_use_frame_end = {
	{(PropertyRNA *)&rna_FModifierStepped_frame_start, (PropertyRNA *)&rna_FModifierStepped_use_frame_start,
	-1, "use_frame_end", 3, 1, 0, 0, 0, "Use End Frame",
	"Restrict modifier to only act before its \'end\' frame",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierStepped_use_frame_end_get, FModifierStepped_use_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierStepped_frame_start = {
	{(PropertyRNA *)&rna_FModifierStepped_frame_end, (PropertyRNA *)&rna_FModifierStepped_use_frame_end,
	-1, "frame_start", 3, 1, 0, 0, 0, "Start Frame",
	"Frame that modifier\'s influence starts (if applicable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierStepped_frame_start_get, FModifierStepped_frame_start_set, NULL, NULL, rna_FModifierStepped_start_frame_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierStepped_frame_end = {
	{NULL, (PropertyRNA *)&rna_FModifierStepped_frame_start,
	-1, "frame_end", 3, 1, 0, 0, 0, "End Frame",
	"Frame that modifier\'s influence ends (if applicable)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_update, 256245761, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FModifierStepped_frame_end_get, FModifierStepped_frame_end_set, NULL, NULL, rna_FModifierStepped_end_frame_range, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierStepped = {
	{(ContainerRNA *)&RNA_GreasePencil, (ContainerRNA *)&RNA_FModifierNoise,
	NULL,
	{(PropertyRNA *)&rna_FModifierStepped_frame_step, (PropertyRNA *)&rna_FModifierStepped_frame_end}},
	"FModifierStepped", NULL, NULL, 516, NULL, "Stepped Interpolation F-Modifier",
	"Hold each interpolated value from the F-Curve for several frames without changing the timing",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

