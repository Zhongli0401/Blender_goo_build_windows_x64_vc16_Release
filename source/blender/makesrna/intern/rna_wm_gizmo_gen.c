
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

#include "rna_wm_gizmo.c"
#include "rna_wm_gizmo_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_GizmoGroup_rna_properties;
PointerPropertyRNA rna_GizmoGroup_rna_type;
StringPropertyRNA rna_GizmoGroup_bl_idname;
StringPropertyRNA rna_GizmoGroup_bl_label;
EnumPropertyRNA rna_GizmoGroup_bl_space_type;
EnumPropertyRNA rna_GizmoGroup_bl_region_type;
StringPropertyRNA rna_GizmoGroup_bl_owner_id;
EnumPropertyRNA rna_GizmoGroup_bl_options;
StringPropertyRNA rna_GizmoGroup_name;
BoolPropertyRNA rna_GizmoGroup_has_reports;
CollectionPropertyRNA rna_GizmoGroup_gizmos;

extern FunctionRNA rna_GizmoGroup_poll_func;
extern BoolPropertyRNA rna_GizmoGroup_poll_visible;
extern PointerPropertyRNA rna_GizmoGroup_poll_context;

extern FunctionRNA rna_GizmoGroup_setup_keymap_func;
extern PointerPropertyRNA rna_GizmoGroup_setup_keymap_keyconfig;
extern PointerPropertyRNA rna_GizmoGroup_setup_keymap_keymap;

extern FunctionRNA rna_GizmoGroup_setup_func;
extern PointerPropertyRNA rna_GizmoGroup_setup_context;

extern FunctionRNA rna_GizmoGroup_refresh_func;
extern PointerPropertyRNA rna_GizmoGroup_refresh_context;

extern FunctionRNA rna_GizmoGroup_draw_prepare_func;
extern PointerPropertyRNA rna_GizmoGroup_draw_prepare_context;

extern FunctionRNA rna_GizmoGroup_invoke_prepare_func;
extern PointerPropertyRNA rna_GizmoGroup_invoke_prepare_context;
extern PointerPropertyRNA rna_GizmoGroup_invoke_prepare_gizmo;



CollectionPropertyRNA rna_Gizmo_rna_properties;
PointerPropertyRNA rna_Gizmo_rna_type;
PointerPropertyRNA rna_Gizmo_properties;
StringPropertyRNA rna_Gizmo_bl_idname;
PointerPropertyRNA rna_Gizmo_group;
FloatPropertyRNA rna_Gizmo_color;
FloatPropertyRNA rna_Gizmo_alpha;
FloatPropertyRNA rna_Gizmo_color_highlight;
FloatPropertyRNA rna_Gizmo_alpha_highlight;
FloatPropertyRNA rna_Gizmo_matrix_space;
FloatPropertyRNA rna_Gizmo_matrix_basis;
FloatPropertyRNA rna_Gizmo_matrix_offset;
FloatPropertyRNA rna_Gizmo_matrix_world;
FloatPropertyRNA rna_Gizmo_scale_basis;
FloatPropertyRNA rna_Gizmo_line_width;
FloatPropertyRNA rna_Gizmo_select_bias;
BoolPropertyRNA rna_Gizmo_hide;
BoolPropertyRNA rna_Gizmo_hide_select;
BoolPropertyRNA rna_Gizmo_hide_keymap;
BoolPropertyRNA rna_Gizmo_use_grab_cursor;
BoolPropertyRNA rna_Gizmo_use_draw_hover;
BoolPropertyRNA rna_Gizmo_use_draw_modal;
BoolPropertyRNA rna_Gizmo_use_draw_value;
BoolPropertyRNA rna_Gizmo_use_draw_offset_scale;
BoolPropertyRNA rna_Gizmo_use_draw_scale;
BoolPropertyRNA rna_Gizmo_use_select_background;
BoolPropertyRNA rna_Gizmo_use_operator_tool_properties;
BoolPropertyRNA rna_Gizmo_use_event_handle_all;
BoolPropertyRNA rna_Gizmo_use_tooltip;
BoolPropertyRNA rna_Gizmo_is_highlight;
BoolPropertyRNA rna_Gizmo_is_modal;
BoolPropertyRNA rna_Gizmo_select;

extern FunctionRNA rna_Gizmo_draw_func;
extern PointerPropertyRNA rna_Gizmo_draw_context;

extern FunctionRNA rna_Gizmo_draw_select_func;
extern PointerPropertyRNA rna_Gizmo_draw_select_context;
extern IntPropertyRNA rna_Gizmo_draw_select_select_id;

extern FunctionRNA rna_Gizmo_test_select_func;
extern PointerPropertyRNA rna_Gizmo_test_select_context;
extern IntPropertyRNA rna_Gizmo_test_select_location;
extern IntPropertyRNA rna_Gizmo_test_select_intersect_id;

extern FunctionRNA rna_Gizmo_modal_func;
extern PointerPropertyRNA rna_Gizmo_modal_context;
extern PointerPropertyRNA rna_Gizmo_modal_event;
extern EnumPropertyRNA rna_Gizmo_modal_tweak;
extern EnumPropertyRNA rna_Gizmo_modal_result;

extern FunctionRNA rna_Gizmo_setup_func;
extern FunctionRNA rna_Gizmo_invoke_func;
extern PointerPropertyRNA rna_Gizmo_invoke_context;
extern PointerPropertyRNA rna_Gizmo_invoke_event;
extern EnumPropertyRNA rna_Gizmo_invoke_result;

extern FunctionRNA rna_Gizmo_exit_func;
extern PointerPropertyRNA rna_Gizmo_exit_context;
extern BoolPropertyRNA rna_Gizmo_exit_cancel;

extern FunctionRNA rna_Gizmo_select_refresh_func;
extern FunctionRNA rna_Gizmo_draw_preset_box_func;
extern FloatPropertyRNA rna_Gizmo_draw_preset_box_matrix;
extern IntPropertyRNA rna_Gizmo_draw_preset_box_select_id;

extern FunctionRNA rna_Gizmo_draw_preset_arrow_func;
extern FloatPropertyRNA rna_Gizmo_draw_preset_arrow_matrix;
extern EnumPropertyRNA rna_Gizmo_draw_preset_arrow_axis;
extern IntPropertyRNA rna_Gizmo_draw_preset_arrow_select_id;

extern FunctionRNA rna_Gizmo_draw_preset_circle_func;
extern FloatPropertyRNA rna_Gizmo_draw_preset_circle_matrix;
extern EnumPropertyRNA rna_Gizmo_draw_preset_circle_axis;
extern IntPropertyRNA rna_Gizmo_draw_preset_circle_select_id;

extern FunctionRNA rna_Gizmo_draw_preset_facemap_func;
extern PointerPropertyRNA rna_Gizmo_draw_preset_facemap_object;
extern IntPropertyRNA rna_Gizmo_draw_preset_facemap_face_map;
extern IntPropertyRNA rna_Gizmo_draw_preset_facemap_select_id;

extern FunctionRNA rna_Gizmo_target_set_prop_func;
extern StringPropertyRNA rna_Gizmo_target_set_prop_target;
extern PointerPropertyRNA rna_Gizmo_target_set_prop_data;
extern StringPropertyRNA rna_Gizmo_target_set_prop_property;
extern IntPropertyRNA rna_Gizmo_target_set_prop_index;

extern FunctionRNA rna_Gizmo_target_set_operator_func;
extern StringPropertyRNA rna_Gizmo_target_set_operator_operator;
extern IntPropertyRNA rna_Gizmo_target_set_operator_index;
extern PointerPropertyRNA rna_Gizmo_target_set_operator_properties;

extern FunctionRNA rna_Gizmo_target_is_valid_func;
extern StringPropertyRNA rna_Gizmo_target_is_valid_property;
extern BoolPropertyRNA rna_Gizmo_target_is_valid_result;



CollectionPropertyRNA rna_GizmoProperties_rna_properties;
PointerPropertyRNA rna_GizmoProperties_rna_type;


CollectionPropertyRNA rna_Gizmos_rna_properties;
PointerPropertyRNA rna_Gizmos_rna_type;

extern FunctionRNA rna_Gizmos_new_func;
extern StringPropertyRNA rna_Gizmos_new_type;
extern PointerPropertyRNA rna_Gizmos_new_gizmo;

extern FunctionRNA rna_Gizmos_remove_func;
extern PointerPropertyRNA rna_Gizmos_remove_gizmo;

extern FunctionRNA rna_Gizmos_clear_func;


CollectionPropertyRNA rna_GizmoGroupProperties_rna_properties;
PointerPropertyRNA rna_GizmoGroupProperties_rna_type;

static PointerRNA GizmoGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GizmoGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroup_rna_properties_get(iter);
    }
}

void GizmoGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroup_rna_properties_get(iter);
    }
}

void GizmoGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GizmoGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GizmoGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void GizmoGroup_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, 64);
}

int GizmoGroup_bl_idname_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->idname);
}

void GizmoGroup_bl_idname_set(PointerRNA *ptr, const char *value)
{
    rna_GizmoGroup_bl_idname_set(ptr, value);
}

void GizmoGroup_bl_label_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->name, 64);
}

int GizmoGroup_bl_label_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->name);
}

void GizmoGroup_bl_label_set(PointerRNA *ptr, const char *value)
{
    rna_GizmoGroup_bl_label_set(ptr, value);
}

int GizmoGroup_bl_space_type_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->gzmap_params.spaceid);
}

void GizmoGroup_bl_space_type_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    data->type->gzmap_params.spaceid = value;
}

int GizmoGroup_bl_region_type_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->gzmap_params.regionid);
}

void GizmoGroup_bl_region_type_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    data->type->gzmap_params.regionid = value;
}

void GizmoGroup_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->owner_id, sizeof(data->type->owner_id));
}

int GizmoGroup_bl_owner_id_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->owner_id);
}

void GizmoGroup_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_strncpy_utf8(data->type->owner_id, value, sizeof(data->type->owner_id));
}

int GizmoGroup_bl_options_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->flag);
}

void GizmoGroup_bl_options_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    data->type->flag = value;
}

void GizmoGroup_name_get(PointerRNA *ptr, char *value)
{
    rna_GizmoGroup_name_get(ptr, value);
}

int GizmoGroup_name_length(PointerRNA *ptr)
{
    return rna_GizmoGroup_name_length(ptr);
}

bool GizmoGroup_has_reports_get(PointerRNA *ptr)
{
    return rna_GizmoGroup_has_reports_get(ptr);
}

static PointerRNA GizmoGroup_gizmos_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Gizmo, rna_iterator_listbase_get(iter));
}

void GizmoGroup_gizmos_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoGroup_gizmos;

    rna_GizmoGroup_gizmos_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroup_gizmos_get(iter);
    }
}

void GizmoGroup_gizmos_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroup_gizmos_get(iter);
    }
}

void GizmoGroup_gizmos_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GizmoGroup_gizmos_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    GizmoGroup_gizmos_begin(&iter, ptr);

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
        if (found) { *r_ptr = GizmoGroup_gizmos_get(&iter); }
    }

    GizmoGroup_gizmos_end(&iter);

    return found;
}

static PointerRNA Gizmo_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Gizmo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Gizmo_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Gizmo_rna_properties_get(iter);
    }
}

void Gizmo_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Gizmo_rna_properties_get(iter);
    }
}

void Gizmo_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Gizmo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Gizmo_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA Gizmo_properties_get(PointerRNA *ptr)
{
    return rna_Gizmo_properties_get(ptr);
}

void Gizmo_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmGizmo *data = (wmGizmo *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, 64);
}

int Gizmo_bl_idname_length(PointerRNA *ptr)
{
    wmGizmo *data = (wmGizmo *)(ptr->data);
    return strlen(data->type->idname);
}

void Gizmo_bl_idname_set(PointerRNA *ptr, const char *value)
{
    rna_Gizmo_bl_idname_set(ptr, value);
}

PointerRNA Gizmo_group_get(PointerRNA *ptr)
{
    return rna_Gizmo_group_get(ptr);
}

void Gizmo_color_get(PointerRNA *ptr, float values[3])
{
    rna_Gizmo_color_get(ptr, values);
}

void Gizmo_color_set(PointerRNA *ptr, const float values[3])
{
    rna_Gizmo_color_set(ptr, values);
}

float Gizmo_alpha_get(PointerRNA *ptr)
{
    return rna_Gizmo_alpha_get(ptr);
}

void Gizmo_alpha_set(PointerRNA *ptr, float value)
{
    rna_Gizmo_alpha_set(ptr, value);
}

void Gizmo_color_highlight_get(PointerRNA *ptr, float values[3])
{
    rna_Gizmo_color_hi_get(ptr, values);
}

void Gizmo_color_highlight_set(PointerRNA *ptr, const float values[3])
{
    rna_Gizmo_color_hi_set(ptr, values);
}

float Gizmo_alpha_highlight_get(PointerRNA *ptr)
{
    return rna_Gizmo_alpha_hi_get(ptr);
}

void Gizmo_alpha_highlight_set(PointerRNA *ptr, float value)
{
    rna_Gizmo_alpha_hi_set(ptr, value);
}

void Gizmo_matrix_space_get(PointerRNA *ptr, float values[16])
{
    rna_Gizmo_matrix_space_get(ptr, values);
}

void Gizmo_matrix_space_set(PointerRNA *ptr, const float values[16])
{
    rna_Gizmo_matrix_space_set(ptr, values);
}

void Gizmo_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    rna_Gizmo_matrix_basis_get(ptr, values);
}

void Gizmo_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    rna_Gizmo_matrix_basis_set(ptr, values);
}

void Gizmo_matrix_offset_get(PointerRNA *ptr, float values[16])
{
    rna_Gizmo_matrix_offset_get(ptr, values);
}

void Gizmo_matrix_offset_set(PointerRNA *ptr, const float values[16])
{
    rna_Gizmo_matrix_offset_set(ptr, values);
}

void Gizmo_matrix_world_get(PointerRNA *ptr, float values[16])
{
    rna_Gizmo_matrix_world_get(ptr, values);
}

float Gizmo_scale_basis_get(PointerRNA *ptr)
{
    return rna_Gizmo_scale_basis_get(ptr);
}

void Gizmo_scale_basis_set(PointerRNA *ptr, float value)
{
    rna_Gizmo_scale_basis_set(ptr, value);
}

float Gizmo_line_width_get(PointerRNA *ptr)
{
    return rna_Gizmo_line_width_get(ptr);
}

void Gizmo_line_width_set(PointerRNA *ptr, float value)
{
    rna_Gizmo_line_width_set(ptr, value);
}

float Gizmo_select_bias_get(PointerRNA *ptr)
{
    return rna_Gizmo_select_bias_get(ptr);
}

void Gizmo_select_bias_set(PointerRNA *ptr, float value)
{
    rna_Gizmo_select_bias_set(ptr, value);
}

bool Gizmo_hide_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_hide_get(ptr);
}

void Gizmo_hide_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_hide_set(ptr, value);
}

bool Gizmo_hide_select_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_hide_select_get(ptr);
}

void Gizmo_hide_select_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_hide_select_set(ptr, value);
}

bool Gizmo_hide_keymap_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_hide_keymap_get(ptr);
}

void Gizmo_hide_keymap_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_hide_keymap_set(ptr, value);
}

bool Gizmo_use_grab_cursor_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_grab_cursor_get(ptr);
}

void Gizmo_use_grab_cursor_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_grab_cursor_set(ptr, value);
}

bool Gizmo_use_draw_hover_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_draw_hover_get(ptr);
}

void Gizmo_use_draw_hover_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_draw_hover_set(ptr, value);
}

bool Gizmo_use_draw_modal_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_draw_modal_get(ptr);
}

void Gizmo_use_draw_modal_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_draw_modal_set(ptr, value);
}

bool Gizmo_use_draw_value_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_draw_value_get(ptr);
}

void Gizmo_use_draw_value_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_draw_value_set(ptr, value);
}

bool Gizmo_use_draw_offset_scale_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_draw_offset_scale_get(ptr);
}

void Gizmo_use_draw_offset_scale_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_draw_offset_scale_set(ptr, value);
}

bool Gizmo_use_draw_scale_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_draw_scale_get(ptr);
}

void Gizmo_use_draw_scale_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_draw_scale_set(ptr, value);
}

bool Gizmo_use_select_background_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_select_background_get(ptr);
}

void Gizmo_use_select_background_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_select_background_set(ptr, value);
}

bool Gizmo_use_operator_tool_properties_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_operator_tool_properties_get(ptr);
}

void Gizmo_use_operator_tool_properties_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_operator_tool_properties_set(ptr, value);
}

bool Gizmo_use_event_handle_all_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_event_handle_all_get(ptr);
}

void Gizmo_use_event_handle_all_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_event_handle_all_set(ptr, value);
}

bool Gizmo_use_tooltip_get(PointerRNA *ptr)
{
    return rna_Gizmo_flag_use_tooltip_get(ptr);
}

void Gizmo_use_tooltip_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_flag_use_tooltip_set(ptr, value);
}

bool Gizmo_is_highlight_get(PointerRNA *ptr)
{
    return rna_Gizmo_state_is_highlight_get(ptr);
}

bool Gizmo_is_modal_get(PointerRNA *ptr)
{
    return rna_Gizmo_state_is_modal_get(ptr);
}

bool Gizmo_select_get(PointerRNA *ptr)
{
    return rna_Gizmo_state_select_get(ptr);
}

void Gizmo_select_set(PointerRNA *ptr, bool value)
{
    rna_Gizmo_state_select_set(ptr, value);
}

static PointerRNA GizmoProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GizmoProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoProperties_rna_properties_get(iter);
    }
}

void GizmoProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoProperties_rna_properties_get(iter);
    }
}

void GizmoProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GizmoProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GizmoProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Gizmos_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Gizmos_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Gizmos_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Gizmos_rna_properties_get(iter);
    }
}

void Gizmos_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Gizmos_rna_properties_get(iter);
    }
}

void Gizmos_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Gizmos_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Gizmos_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA GizmoGroupProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void GizmoGroupProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_GizmoGroupProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroupProperties_rna_properties_get(iter);
    }
}

void GizmoGroupProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroupProperties_rna_properties_get(iter);
    }
}

void GizmoGroupProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int GizmoGroupProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA GizmoGroupProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


void Gizmo_draw_preset_box_func(struct wmGizmo *_self, float matrix[16], int select_id)
{
	rna_gizmo_draw_preset_box(_self, matrix, select_id);
}

void Gizmo_draw_preset_box_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	float *matrix;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 64;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_box(_self, matrix, select_id);
}

void Gizmo_draw_preset_arrow_func(struct wmGizmo *_self, float matrix[16], int axis, int select_id)
{
	rna_gizmo_draw_preset_arrow(_self, matrix, axis, select_id);
}

void Gizmo_draw_preset_arrow_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	float *matrix;
	int axis;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 64;
	axis = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_arrow(_self, matrix, axis, select_id);
}

void Gizmo_draw_preset_circle_func(struct wmGizmo *_self, float matrix[16], int axis, int select_id)
{
	rna_gizmo_draw_preset_circle(_self, matrix, axis, select_id);
}

void Gizmo_draw_preset_circle_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	float *matrix;
	int axis;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 64;
	axis = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_circle(_self, matrix, axis, select_id);
}

void Gizmo_draw_preset_facemap_func(struct wmGizmo *_self, bContext *C, struct Object *object, int face_map, int select_id)
{
	rna_gizmo_draw_preset_facemap(_self, C, object, face_map, select_id);
}

void Gizmo_draw_preset_facemap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	struct Object *object;
	int face_map;
	int select_id;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	face_map = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_facemap(_self, C, object, face_map, select_id);
}

void Gizmo_target_set_prop_func(struct wmGizmo *_self, ReportList *reports, const char * target, struct PointerRNA *data, const char * property, int index)
{
	rna_gizmo_target_set_prop(_self, reports, target, data, property, index);
}

void Gizmo_target_set_prop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const char * target;
	struct PointerRNA *data;
	const char * property;
	int index;
	char *_data;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	target = *((const char * *)_data);
	_data += 8;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	
	rna_gizmo_target_set_prop(_self, reports, target, data, property, index);
}

struct PointerRNA Gizmo_target_set_operator_func(struct wmGizmo *_self, ReportList *reports, const char * operator_value, int index)
{
	return rna_gizmo_target_set_operator(_self, reports, operator_value, index);
}

void Gizmo_target_set_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const char * operator;
	int index;
	struct PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	properties = rna_gizmo_target_set_operator(_self, reports, operator, index);
	*((struct PointerRNA *)_retdata) = properties;
}

bool Gizmo_target_is_valid_func(struct wmGizmo *_self, ReportList *reports, const char * property)
{
	return rna_gizmo_target_is_valid(_self, reports, property);
}

void Gizmo_target_is_valid_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmo *_self;
	const char * property;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	property = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_gizmo_target_is_valid(_self, reports, property);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_gizmo_draw_preset_box(struct wmGizmo *_self, float matrix[16], int select_id);
void rna_gizmo_draw_preset_arrow(struct wmGizmo *_self, float matrix[16], int axis, int select_id);
void rna_gizmo_draw_preset_circle(struct wmGizmo *_self, float matrix[16], int axis, int select_id);
void rna_gizmo_draw_preset_facemap(struct wmGizmo *_self, bContext *C, struct Object *object, int face_map, int select_id);
void rna_gizmo_target_set_prop(struct wmGizmo *_self, ReportList *reports, const char * target, struct PointerRNA *data, const char * property, int index);
struct PointerRNA rna_gizmo_target_set_operator(struct wmGizmo *_self, ReportList *reports, const char * operator_value, int index);
bool rna_gizmo_target_is_valid(struct wmGizmo *_self, ReportList *reports, const char * property);


struct wmGizmo *Gizmos_new_func(struct wmGizmoGroup *_self, ReportList *reports, const char * type)
{
	return rna_GizmoGroup_gizmo_new(_self, reports, type);
}

void Gizmos_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmoGroup *_self;
	const char * type;
	struct wmGizmo *gizmo;
	char *_data, *_retdata;
	
	_self = (struct wmGizmoGroup *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	gizmo = rna_GizmoGroup_gizmo_new(_self, reports, type);
	*((struct wmGizmo **)_retdata) = gizmo;
}

void Gizmos_remove_func(struct wmGizmoGroup *_self, bContext *C, struct wmGizmo *gizmo)
{
	rna_GizmoGroup_gizmo_remove(_self, C, gizmo);
}

void Gizmos_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmoGroup *_self;
	struct wmGizmo *gizmo;
	char *_data;
	
	_self = (struct wmGizmoGroup *)_ptr->data;
	_data = (char *)_parms->data;
	gizmo = *((struct wmGizmo **)_data);
	
	rna_GizmoGroup_gizmo_remove(_self, C, gizmo);
}

void Gizmos_clear_func(struct wmGizmoGroup *_self, bContext *C)
{
	rna_GizmoGroup_gizmo_clear(_self, C);
}

void Gizmos_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmGizmoGroup *_self;
	_self = (struct wmGizmoGroup *)_ptr->data;
	
	rna_GizmoGroup_gizmo_clear(_self, C);
}

/* Repeated prototypes to detect errors */

struct wmGizmo *rna_GizmoGroup_gizmo_new(struct wmGizmoGroup *_self, ReportList *reports, const char * type);
void rna_GizmoGroup_gizmo_remove(struct wmGizmoGroup *_self, bContext *C, struct wmGizmo *gizmo);
void rna_GizmoGroup_gizmo_clear(struct wmGizmoGroup *_self, bContext *C);


/* GizmoGroup */
CollectionPropertyRNA rna_GizmoGroup_rna_properties = {
	{(PropertyRNA *)&rna_GizmoGroup_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_rna_properties_begin, GizmoGroup_rna_properties_next, GizmoGroup_rna_properties_end, GizmoGroup_rna_properties_get, NULL, NULL, GizmoGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GizmoGroup_rna_type = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_idname, (PropertyRNA *)&rna_GizmoGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_GizmoGroup_bl_idname = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_label, (PropertyRNA *)&rna_GizmoGroup_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_bl_idname_get, GizmoGroup_bl_idname_length, GizmoGroup_bl_idname_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_GizmoGroup_bl_label = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_space_type, (PropertyRNA *)&rna_GizmoGroup_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "bl_label",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_bl_label_get, GizmoGroup_bl_label_length, GizmoGroup_bl_label_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_GizmoGroup_bl_space_type = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_region_type, (PropertyRNA *)&rna_GizmoGroup_bl_label,
	-1, "bl_space_type", 19, 0, 0, 0, 0, "Space Type",
	"The space where the panel is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_bl_space_type_get, GizmoGroup_bl_space_type_set, NULL, NULL, NULL, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_GizmoGroup_bl_region_type = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_owner_id, (PropertyRNA *)&rna_GizmoGroup_bl_space_type,
	-1, "bl_region_type", 19, 0, 0, 0, 0, "Region Type",
	"The region where the panel is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_bl_region_type_get, GizmoGroup_bl_region_type_set, NULL, NULL, NULL, rna_enum_region_type_items, 14, 0
};

StringPropertyRNA rna_GizmoGroup_bl_owner_id = {
	{(PropertyRNA *)&rna_GizmoGroup_bl_options, (PropertyRNA *)&rna_GizmoGroup_bl_region_type,
	-1, "bl_owner_id", 262193, 0, 0, 0, 0, "bl_owner_id",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_bl_owner_id_get, GizmoGroup_bl_owner_id_length, GizmoGroup_bl_owner_id_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

static const EnumPropertyItem rna_GizmoGroup_bl_options_items[11] = {
	{1, "3D", 0, "3D", "Use in 3D viewport"},
	{2, "SCALE", 0, "Scale", "Scale to respect zoom (otherwise zoom independent display size)"},
	{4, "DEPTH_3D", 0, "Depth 3D", "Supports culled depth by other objects in the view"},
	{8, "SELECT", 0, "Select", "Supports selection"},
	{16, "PERSISTENT", 0, "Persistent", ""},
	{32, "SHOW_MODAL_ALL", 0, "Show Modal All", "Show all while interacting, as well as this group when another is being interacted with"},
	{64, "EXCLUDE_MODAL", 0, "Exclude Modal", "Show all except this group while interacting"},
	{128, "TOOL_INIT", 0, "Tool Init", "Postpone running until tool operator run (when used with a tool)"},
	{256, "TOOL_FALLBACK_KEYMAP", 0, "Use fallback tools keymap", "Add fallback tools keymap to this gizmo type"},
	{1024, "VR_REDRAWS", 0, "VR Redraws", "The gizmos are made for use with virtual reality sessions and require special redraw management"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GizmoGroup_bl_options = {
	{(PropertyRNA *)&rna_GizmoGroup_name, (PropertyRNA *)&rna_GizmoGroup_bl_owner_id,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Options for this operator type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_bl_options_get, GizmoGroup_bl_options_set, NULL, NULL, NULL, rna_GizmoGroup_bl_options_items, 10, 1
};

StringPropertyRNA rna_GizmoGroup_name = {
	{(PropertyRNA *)&rna_GizmoGroup_has_reports, (PropertyRNA *)&rna_GizmoGroup_bl_options,
	-1, "name", 262144, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_name_get, GizmoGroup_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_GizmoGroup_has_reports = {
	{(PropertyRNA *)&rna_GizmoGroup_gizmos, (PropertyRNA *)&rna_GizmoGroup_name,
	-1, "has_reports", 2, 0, 0, 0, 0, "Has Reports",
	"GizmoGroup has a set of reports (warnings and errors) from last execution",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroup_has_reports_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_GizmoGroup_gizmos = {
	{NULL, (PropertyRNA *)&rna_GizmoGroup_has_reports,
	-1, "gizmos", 0, 0, 0, 0, 0, "Gizmos",
	"List of gizmos in the Gizmo Map",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_Gizmos},
	GizmoGroup_gizmos_begin, GizmoGroup_gizmos_next, GizmoGroup_gizmos_end, GizmoGroup_gizmos_get, NULL, GizmoGroup_gizmos_lookup_int, NULL, NULL, &RNA_Gizmo
};

BoolPropertyRNA rna_GizmoGroup_poll_visible = {
	{(PropertyRNA *)&rna_GizmoGroup_poll_context, NULL,
	-1, "visible", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_GizmoGroup_poll_context = {
	{NULL, (PropertyRNA *)&rna_GizmoGroup_poll_visible,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_GizmoGroup_poll_func = {
	{(FunctionRNA *)&rna_GizmoGroup_setup_keymap_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_poll_visible, (PropertyRNA *)&rna_GizmoGroup_poll_context}},
	"poll", 97, "Test if the gizmo group can be called or not",
	NULL,
	(PropertyRNA *)&rna_GizmoGroup_poll_visible
};

PointerPropertyRNA rna_GizmoGroup_setup_keymap_keyconfig = {
	{(PropertyRNA *)&rna_GizmoGroup_setup_keymap_keymap, NULL,
	-1, "keyconfig", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyConfig
};

PointerPropertyRNA rna_GizmoGroup_setup_keymap_keymap = {
	{NULL, (PropertyRNA *)&rna_GizmoGroup_setup_keymap_keyconfig,
	-1, "keymap", 8650752, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_GizmoGroup_setup_keymap_func = {
	{(FunctionRNA *)&rna_GizmoGroup_setup_func, (FunctionRNA *)&rna_GizmoGroup_poll_func,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_setup_keymap_keyconfig, (PropertyRNA *)&rna_GizmoGroup_setup_keymap_keymap}},
	"setup_keymap", 97, "Initialize keymaps for this gizmo group, use fallback keymap when not present",
	NULL,
	(PropertyRNA *)&rna_GizmoGroup_setup_keymap_keymap
};

PointerPropertyRNA rna_GizmoGroup_setup_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_GizmoGroup_setup_func = {
	{(FunctionRNA *)&rna_GizmoGroup_refresh_func, (FunctionRNA *)&rna_GizmoGroup_setup_keymap_func,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_setup_context, (PropertyRNA *)&rna_GizmoGroup_setup_context}},
	"setup", 32, "Create gizmos function for the gizmo group",
	NULL,
	NULL
};

PointerPropertyRNA rna_GizmoGroup_refresh_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_GizmoGroup_refresh_func = {
	{(FunctionRNA *)&rna_GizmoGroup_draw_prepare_func, (FunctionRNA *)&rna_GizmoGroup_setup_func,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_refresh_context, (PropertyRNA *)&rna_GizmoGroup_refresh_context}},
	"refresh", 96, "Refresh data (called on common state changes such as selection)",
	NULL,
	NULL
};

PointerPropertyRNA rna_GizmoGroup_draw_prepare_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_GizmoGroup_draw_prepare_func = {
	{(FunctionRNA *)&rna_GizmoGroup_invoke_prepare_func, (FunctionRNA *)&rna_GizmoGroup_refresh_func,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_draw_prepare_context, (PropertyRNA *)&rna_GizmoGroup_draw_prepare_context}},
	"draw_prepare", 96, "Run before each redraw",
	NULL,
	NULL
};

PointerPropertyRNA rna_GizmoGroup_invoke_prepare_context = {
	{(PropertyRNA *)&rna_GizmoGroup_invoke_prepare_gizmo, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_GizmoGroup_invoke_prepare_gizmo = {
	{NULL, (PropertyRNA *)&rna_GizmoGroup_invoke_prepare_context,
	-1, "gizmo", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Gizmo
};

FunctionRNA rna_GizmoGroup_invoke_prepare_func = {
	{NULL, (FunctionRNA *)&rna_GizmoGroup_draw_prepare_func,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_invoke_prepare_context, (PropertyRNA *)&rna_GizmoGroup_invoke_prepare_gizmo}},
	"invoke_prepare", 96, "Run before invoke",
	NULL,
	NULL
};

StructRNA RNA_GizmoGroup = {
	{(ContainerRNA *)&RNA_Gizmo, (ContainerRNA *)&RNA_KeyMapItem,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroup_rna_properties, (PropertyRNA *)&rna_GizmoGroup_gizmos}},
	"GizmoGroup", NULL, NULL, 516, NULL, "GizmoGroup",
	"Storage of an operator being executed, or registered after execution",
	"Operator", 17,
	(PropertyRNA *)&rna_GizmoGroup_bl_idname, (PropertyRNA *)&rna_GizmoGroup_rna_properties,
	NULL,
	NULL,
	rna_GizmoGroup_refine,
	NULL,
	rna_GizmoGroup_register,
	rna_GizmoGroup_unregister,
	rna_GizmoGroup_instance,
	NULL,
	{(FunctionRNA *)&rna_GizmoGroup_poll_func, (FunctionRNA *)&rna_GizmoGroup_invoke_prepare_func}
};

/* Gizmo */
CollectionPropertyRNA rna_Gizmo_rna_properties = {
	{(PropertyRNA *)&rna_Gizmo_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_rna_properties_begin, Gizmo_rna_properties_next, Gizmo_rna_properties_end, Gizmo_rna_properties_get, NULL, NULL, Gizmo_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Gizmo_rna_type = {
	{(PropertyRNA *)&rna_Gizmo_properties, (PropertyRNA *)&rna_Gizmo_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Gizmo_properties = {
	{(PropertyRNA *)&rna_Gizmo_bl_idname, (PropertyRNA *)&rna_Gizmo_rna_type,
	-1, "properties", 8650752, 0, 0, 0, 0, "Properties",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_properties_get, NULL, NULL, NULL,&RNA_GizmoProperties
};

StringPropertyRNA rna_Gizmo_bl_idname = {
	{(PropertyRNA *)&rna_Gizmo_group, (PropertyRNA *)&rna_Gizmo_properties,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_bl_idname_get, Gizmo_bl_idname_length, Gizmo_bl_idname_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_Gizmo_group = {
	{(PropertyRNA *)&rna_Gizmo_color, (PropertyRNA *)&rna_Gizmo_bl_idname,
	-1, "group", 8388608, 0, 0, 0, 0, "",
	"Gizmo group this gizmo is a member of",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_group_get, NULL, NULL, NULL,&RNA_GizmoGroup
};

static float rna_Gizmo_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Gizmo_color = {
	{(PropertyRNA *)&rna_Gizmo_alpha, (PropertyRNA *)&rna_Gizmo_group,
	-1, "color", 3, 0, 0, 0, 0, "color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Gizmo_color_get, Gizmo_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_color_default
};

FloatPropertyRNA rna_Gizmo_alpha = {
	{(PropertyRNA *)&rna_Gizmo_color_highlight, (PropertyRNA *)&rna_Gizmo_color,
	-1, "alpha", 3, 0, 0, 0, 0, "Alpha",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_alpha_get, Gizmo_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_Gizmo_color_highlight_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Gizmo_color_highlight = {
	{(PropertyRNA *)&rna_Gizmo_alpha_highlight, (PropertyRNA *)&rna_Gizmo_alpha,
	-1, "color_highlight", 3, 0, 0, 0, 0, "color_highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Gizmo_color_highlight_get, Gizmo_color_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_color_highlight_default
};

FloatPropertyRNA rna_Gizmo_alpha_highlight = {
	{(PropertyRNA *)&rna_Gizmo_matrix_space, (PropertyRNA *)&rna_Gizmo_color_highlight,
	-1, "alpha_highlight", 3, 0, 0, 0, 0, "Alpha",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_alpha_highlight_get, Gizmo_alpha_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_Gizmo_matrix_space_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_space = {
	{(PropertyRNA *)&rna_Gizmo_matrix_basis, (PropertyRNA *)&rna_Gizmo_alpha_highlight,
	-1, "matrix_space", 3, 0, 0, 0, 0, "Space Matrix",
	"",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Gizmo_matrix_space_get, Gizmo_matrix_space_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_space_default
};

static float rna_Gizmo_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_basis = {
	{(PropertyRNA *)&rna_Gizmo_matrix_offset, (PropertyRNA *)&rna_Gizmo_matrix_space,
	-1, "matrix_basis", 3, 0, 0, 0, 0, "Basis Matrix",
	"",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Gizmo_matrix_basis_get, Gizmo_matrix_basis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_basis_default
};

static float rna_Gizmo_matrix_offset_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_offset = {
	{(PropertyRNA *)&rna_Gizmo_matrix_world, (PropertyRNA *)&rna_Gizmo_matrix_basis,
	-1, "matrix_offset", 3, 0, 0, 0, 0, "Offset Matrix",
	"",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Gizmo_matrix_offset_get, Gizmo_matrix_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_offset_default
};

static float rna_Gizmo_matrix_world_default[16] = {
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

FloatPropertyRNA rna_Gizmo_matrix_world = {
	{(PropertyRNA *)&rna_Gizmo_scale_basis, (PropertyRNA *)&rna_Gizmo_matrix_offset,
	-1, "matrix_world", 2, 0, 0, 0, 0, "Final World Matrix",
	"",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Gizmo_matrix_world_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_matrix_world_default
};

FloatPropertyRNA rna_Gizmo_scale_basis = {
	{(PropertyRNA *)&rna_Gizmo_line_width, (PropertyRNA *)&rna_Gizmo_matrix_world,
	-1, "scale_basis", 3, 0, 0, 0, 0, "Scale Basis",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_scale_basis_get, Gizmo_scale_basis_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Gizmo_line_width = {
	{(PropertyRNA *)&rna_Gizmo_select_bias, (PropertyRNA *)&rna_Gizmo_scale_basis,
	-1, "line_width", 3, 0, 0, 0, 0, "Line Width",
	"",
	0, "*",
	PROP_FLOAT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_line_width_get, Gizmo_line_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Gizmo_select_bias = {
	{(PropertyRNA *)&rna_Gizmo_hide, (PropertyRNA *)&rna_Gizmo_line_width,
	-1, "select_bias", 3, 0, 0, 0, 0, "Select Bias",
	"Depth bias used for selection",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_select_bias_get, Gizmo_select_bias_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_Gizmo_hide = {
	{(PropertyRNA *)&rna_Gizmo_hide_select, (PropertyRNA *)&rna_Gizmo_select_bias,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_hide_get, Gizmo_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_hide_select = {
	{(PropertyRNA *)&rna_Gizmo_hide_keymap, (PropertyRNA *)&rna_Gizmo_hide,
	-1, "hide_select", 3, 0, 0, 0, 0, "Hide Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_hide_select_get, Gizmo_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_hide_keymap = {
	{(PropertyRNA *)&rna_Gizmo_use_grab_cursor, (PropertyRNA *)&rna_Gizmo_hide_select,
	-1, "hide_keymap", 3, 0, 0, 0, 0, "Hide Keymap",
	"Ignore the key-map for this gizmo",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_hide_keymap_get, Gizmo_hide_keymap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_grab_cursor = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_hover, (PropertyRNA *)&rna_Gizmo_hide_keymap,
	-1, "use_grab_cursor", 3, 0, 0, 0, 0, "Grab Cursor",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_grab_cursor_get, Gizmo_use_grab_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_draw_hover = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_modal, (PropertyRNA *)&rna_Gizmo_use_grab_cursor,
	-1, "use_draw_hover", 3, 0, 0, 0, 0, "Show Hover",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_draw_hover_get, Gizmo_use_draw_hover_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_draw_modal = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_value, (PropertyRNA *)&rna_Gizmo_use_draw_hover,
	-1, "use_draw_modal", 3, 0, 0, 0, 0, "Show Active",
	"Show while dragging",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_draw_modal_get, Gizmo_use_draw_modal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_draw_value = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_offset_scale, (PropertyRNA *)&rna_Gizmo_use_draw_modal,
	-1, "use_draw_value", 3, 0, 0, 0, 0, "Show Value",
	"Show an indicator for the current value while dragging",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_draw_value_get, Gizmo_use_draw_value_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_draw_offset_scale = {
	{(PropertyRNA *)&rna_Gizmo_use_draw_scale, (PropertyRNA *)&rna_Gizmo_use_draw_value,
	-1, "use_draw_offset_scale", 3, 0, 0, 0, 0, "Scale Offset",
	"Scale the offset matrix (use to apply screen-space offset)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_draw_offset_scale_get, Gizmo_use_draw_offset_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_draw_scale = {
	{(PropertyRNA *)&rna_Gizmo_use_select_background, (PropertyRNA *)&rna_Gizmo_use_draw_offset_scale,
	-1, "use_draw_scale", 3, 0, 0, 0, 0, "Scale",
	"Use scale when calculating the matrix",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_draw_scale_get, Gizmo_use_draw_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_select_background = {
	{(PropertyRNA *)&rna_Gizmo_use_operator_tool_properties, (PropertyRNA *)&rna_Gizmo_use_draw_scale,
	-1, "use_select_background", 3, 0, 0, 0, 0, "Select Background",
	"Don\'t write into the depth buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_select_background_get, Gizmo_use_select_background_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_operator_tool_properties = {
	{(PropertyRNA *)&rna_Gizmo_use_event_handle_all, (PropertyRNA *)&rna_Gizmo_use_select_background,
	-1, "use_operator_tool_properties", 3, 0, 0, 0, 0, "Tool Property Init",
	"Merge active tool properties on activation (does not overwrite existing)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_operator_tool_properties_get, Gizmo_use_operator_tool_properties_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_event_handle_all = {
	{(PropertyRNA *)&rna_Gizmo_use_tooltip, (PropertyRNA *)&rna_Gizmo_use_operator_tool_properties,
	-1, "use_event_handle_all", 3, 0, 0, 0, 0, "Handle All Events",
	"When highlighted, do not pass events through to be handled by other keymaps",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Gizmo_update_redraw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_event_handle_all_get, Gizmo_use_event_handle_all_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_use_tooltip = {
	{(PropertyRNA *)&rna_Gizmo_is_highlight, (PropertyRNA *)&rna_Gizmo_use_event_handle_all,
	-1, "use_tooltip", 3, 0, 0, 0, 0, "Use Tooltip",
	"Use tooltips when hovering over this gizmo",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_use_tooltip_get, Gizmo_use_tooltip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_is_highlight = {
	{(PropertyRNA *)&rna_Gizmo_is_modal, (PropertyRNA *)&rna_Gizmo_use_tooltip,
	-1, "is_highlight", 2, 0, 0, 0, 0, "Highlight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_is_highlight_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_is_modal = {
	{(PropertyRNA *)&rna_Gizmo_select, (PropertyRNA *)&rna_Gizmo_is_highlight,
	-1, "is_modal", 2, 0, 0, 0, 0, "Highlight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_is_modal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Gizmo_select = {
	{NULL, (PropertyRNA *)&rna_Gizmo_is_modal,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmo_select_get, Gizmo_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Gizmo_draw_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Gizmo_draw_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_select_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_draw_context, (PropertyRNA *)&rna_Gizmo_draw_context}},
	"draw", 32, "",
	NULL,
	NULL
};

PointerPropertyRNA rna_Gizmo_draw_select_context = {
	{(PropertyRNA *)&rna_Gizmo_draw_select_select_id, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

IntPropertyRNA rna_Gizmo_draw_select_select_id = {
	{NULL, (PropertyRNA *)&rna_Gizmo_draw_select_context,
	-1, "select_id", 3, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Gizmo_draw_select_func = {
	{(FunctionRNA *)&rna_Gizmo_test_select_func, (FunctionRNA *)&rna_Gizmo_draw_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_draw_select_context, (PropertyRNA *)&rna_Gizmo_draw_select_select_id}},
	"draw_select", 96, "",
	NULL,
	NULL
};

PointerPropertyRNA rna_Gizmo_test_select_context = {
	{(PropertyRNA *)&rna_Gizmo_test_select_location, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

static int rna_Gizmo_test_select_location_default[2] = {
	0,
	0
};

IntPropertyRNA rna_Gizmo_test_select_location = {
	{(PropertyRNA *)&rna_Gizmo_test_select_intersect_id, (PropertyRNA *)&rna_Gizmo_test_select_context,
	-1, "location", 262147, 0, 1, 0, 0, "Location",
	"Region coordinates",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, rna_Gizmo_test_select_location_default
};

IntPropertyRNA rna_Gizmo_test_select_intersect_id = {
	{NULL, (PropertyRNA *)&rna_Gizmo_test_select_location,
	-1, "intersect_id", 3, 0, 2, 0, 0, "",
	"Use -1 to skip this gizmo",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_Gizmo_test_select_func = {
	{(FunctionRNA *)&rna_Gizmo_modal_func, (FunctionRNA *)&rna_Gizmo_draw_select_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_test_select_context, (PropertyRNA *)&rna_Gizmo_test_select_intersect_id}},
	"test_select", 96, "",
	NULL,
	(PropertyRNA *)&rna_Gizmo_test_select_intersect_id
};

PointerPropertyRNA rna_Gizmo_modal_context = {
	{(PropertyRNA *)&rna_Gizmo_modal_event, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_Gizmo_modal_event = {
	{(PropertyRNA *)&rna_Gizmo_modal_tweak, (PropertyRNA *)&rna_Gizmo_modal_context,
	-1, "event", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static const EnumPropertyItem rna_Gizmo_modal_tweak_items[3] = {
	{1, "PRECISE", 0, "Precise", ""},
	{2, "SNAP", 0, "Snap", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Gizmo_modal_tweak = {
	{(PropertyRNA *)&rna_Gizmo_modal_result, (PropertyRNA *)&rna_Gizmo_modal_event,
	-1, "tweak", 2097155, 0, 1, 0, 0, "Tweak",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_Gizmo_modal_tweak_items, 2, 0
};

EnumPropertyRNA rna_Gizmo_modal_result = {
	{NULL, (PropertyRNA *)&rna_Gizmo_modal_tweak,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Gizmo_modal_func = {
	{(FunctionRNA *)&rna_Gizmo_setup_func, (FunctionRNA *)&rna_Gizmo_test_select_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_modal_context, (PropertyRNA *)&rna_Gizmo_modal_result}},
	"modal", 4192, "",
	NULL,
	(PropertyRNA *)&rna_Gizmo_modal_result
};

FunctionRNA rna_Gizmo_setup_func = {
	{(FunctionRNA *)&rna_Gizmo_invoke_func, (FunctionRNA *)&rna_Gizmo_modal_func,
	NULL,
	{NULL, NULL}},
	"setup", 4192, "",
	NULL,
	NULL
};

PointerPropertyRNA rna_Gizmo_invoke_context = {
	{(PropertyRNA *)&rna_Gizmo_invoke_event, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_Gizmo_invoke_event = {
	{(PropertyRNA *)&rna_Gizmo_invoke_result, (PropertyRNA *)&rna_Gizmo_invoke_context,
	-1, "event", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

EnumPropertyRNA rna_Gizmo_invoke_result = {
	{NULL, (PropertyRNA *)&rna_Gizmo_invoke_event,
	-1, "result", 2097155, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_operator_return_items, 5, 4
};

FunctionRNA rna_Gizmo_invoke_func = {
	{(FunctionRNA *)&rna_Gizmo_exit_func, (FunctionRNA *)&rna_Gizmo_setup_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_invoke_context, (PropertyRNA *)&rna_Gizmo_invoke_result}},
	"invoke", 4192, "",
	NULL,
	(PropertyRNA *)&rna_Gizmo_invoke_result
};

PointerPropertyRNA rna_Gizmo_exit_context = {
	{(PropertyRNA *)&rna_Gizmo_exit_cancel, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

BoolPropertyRNA rna_Gizmo_exit_cancel = {
	{NULL, (PropertyRNA *)&rna_Gizmo_exit_context,
	-1, "cancel", 3, 0, 1, 0, 0, "Cancel, otherwise confirm",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Gizmo_exit_func = {
	{(FunctionRNA *)&rna_Gizmo_select_refresh_func, (FunctionRNA *)&rna_Gizmo_invoke_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_exit_context, (PropertyRNA *)&rna_Gizmo_exit_cancel}},
	"exit", 4192, "",
	NULL,
	NULL
};

FunctionRNA rna_Gizmo_select_refresh_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_box_func, (FunctionRNA *)&rna_Gizmo_exit_func,
	NULL,
	{NULL, NULL}},
	"select_refresh", 4192, "",
	NULL,
	NULL
};

static float rna_Gizmo_draw_preset_box_matrix_default[16] = {
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

FloatPropertyRNA rna_Gizmo_draw_preset_box_matrix = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_box_select_id, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_draw_preset_box_matrix_default
};

IntPropertyRNA rna_Gizmo_draw_preset_box_select_id = {
	{NULL, (PropertyRNA *)&rna_Gizmo_draw_preset_box_matrix,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable.  Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_Gizmo_draw_preset_box_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_arrow_func, (FunctionRNA *)&rna_Gizmo_select_refresh_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_box_matrix, (PropertyRNA *)&rna_Gizmo_draw_preset_box_select_id}},
	"draw_preset_box", 0, "Draw a box",
	Gizmo_draw_preset_box_call,
	NULL
};

static float rna_Gizmo_draw_preset_arrow_matrix_default[16] = {
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

FloatPropertyRNA rna_Gizmo_draw_preset_arrow_matrix = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_arrow_axis, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_draw_preset_arrow_matrix_default
};

EnumPropertyRNA rna_Gizmo_draw_preset_arrow_axis = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_arrow_select_id, (PropertyRNA *)&rna_Gizmo_draw_preset_arrow_matrix,
	-1, "axis", 3, 0, 0, 0, 0, "",
	"Arrow Orientation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_object_axis_items, 6, 2
};

IntPropertyRNA rna_Gizmo_draw_preset_arrow_select_id = {
	{NULL, (PropertyRNA *)&rna_Gizmo_draw_preset_arrow_axis,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable.  Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_Gizmo_draw_preset_arrow_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_circle_func, (FunctionRNA *)&rna_Gizmo_draw_preset_box_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_arrow_matrix, (PropertyRNA *)&rna_Gizmo_draw_preset_arrow_select_id}},
	"draw_preset_arrow", 0, "Draw a box",
	Gizmo_draw_preset_arrow_call,
	NULL
};

static float rna_Gizmo_draw_preset_circle_matrix_default[16] = {
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

FloatPropertyRNA rna_Gizmo_draw_preset_circle_matrix = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_circle_axis, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Gizmo_draw_preset_circle_matrix_default
};

EnumPropertyRNA rna_Gizmo_draw_preset_circle_axis = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_circle_select_id, (PropertyRNA *)&rna_Gizmo_draw_preset_circle_matrix,
	-1, "axis", 3, 0, 0, 0, 0, "",
	"Arrow Orientation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_object_axis_items, 6, 2
};

IntPropertyRNA rna_Gizmo_draw_preset_circle_select_id = {
	{NULL, (PropertyRNA *)&rna_Gizmo_draw_preset_circle_axis,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable.  Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_Gizmo_draw_preset_circle_func = {
	{(FunctionRNA *)&rna_Gizmo_draw_preset_facemap_func, (FunctionRNA *)&rna_Gizmo_draw_preset_arrow_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_circle_matrix, (PropertyRNA *)&rna_Gizmo_draw_preset_circle_select_id}},
	"draw_preset_circle", 0, "Draw a box",
	Gizmo_draw_preset_circle_call,
	NULL
};

PointerPropertyRNA rna_Gizmo_draw_preset_facemap_object = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_facemap_face_map, NULL,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_Gizmo_draw_preset_facemap_face_map = {
	{(PropertyRNA *)&rna_Gizmo_draw_preset_facemap_select_id, (PropertyRNA *)&rna_Gizmo_draw_preset_facemap_object,
	-1, "face_map", 3, 0, 1, 0, 0, "Face map index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Gizmo_draw_preset_facemap_select_id = {
	{NULL, (PropertyRNA *)&rna_Gizmo_draw_preset_facemap_face_map,
	-1, "select_id", 3, 0, 0, 0, 0, "ID to use when gizmo is selectable.  Use -1 when not selecting",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_Gizmo_draw_preset_facemap_func = {
	{(FunctionRNA *)&rna_Gizmo_target_set_prop_func, (FunctionRNA *)&rna_Gizmo_draw_preset_circle_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_draw_preset_facemap_object, (PropertyRNA *)&rna_Gizmo_draw_preset_facemap_select_id}},
	"draw_preset_facemap", 8, "Draw the face-map of a mesh object",
	Gizmo_draw_preset_facemap_call,
	NULL
};

StringPropertyRNA rna_Gizmo_target_set_prop_target = {
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_data, NULL,
	-1, "target", 262145, 0, 1, 0, 0, "",
	"Target property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_Gizmo_target_set_prop_data = {
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_property, (PropertyRNA *)&rna_Gizmo_target_set_prop_target,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_Gizmo_target_set_prop_property = {
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_index, (PropertyRNA *)&rna_Gizmo_target_set_prop_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_Gizmo_target_set_prop_index = {
	{NULL, (PropertyRNA *)&rna_Gizmo_target_set_prop_property,
	-1, "index", 3, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_Gizmo_target_set_prop_func = {
	{(FunctionRNA *)&rna_Gizmo_target_set_operator_func, (FunctionRNA *)&rna_Gizmo_draw_preset_facemap_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_target_set_prop_target, (PropertyRNA *)&rna_Gizmo_target_set_prop_index}},
	"target_set_prop", 16, "",
	Gizmo_target_set_prop_call,
	NULL
};

StringPropertyRNA rna_Gizmo_target_set_operator_operator = {
	{(PropertyRNA *)&rna_Gizmo_target_set_operator_index, NULL,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"Target operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_Gizmo_target_set_operator_index = {
	{(PropertyRNA *)&rna_Gizmo_target_set_operator_properties, (PropertyRNA *)&rna_Gizmo_target_set_operator_operator,
	-1, "index", 3, 0, 0, 0, 0, "Part index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

PointerPropertyRNA rna_Gizmo_target_set_operator_properties = {
	{NULL, (PropertyRNA *)&rna_Gizmo_target_set_operator_index,
	-1, "properties", 8388608, 0, 7, 0, 0, "",
	"Operator properties to fill in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_Gizmo_target_set_operator_func = {
	{(FunctionRNA *)&rna_Gizmo_target_is_valid_func, (FunctionRNA *)&rna_Gizmo_target_set_prop_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_target_set_operator_operator, (PropertyRNA *)&rna_Gizmo_target_set_operator_properties}},
	"target_set_operator", 16, "Operator to run when activating the gizmo (overrides property targets)",
	Gizmo_target_set_operator_call,
	(PropertyRNA *)&rna_Gizmo_target_set_operator_properties
};

StringPropertyRNA rna_Gizmo_target_is_valid_property = {
	{(PropertyRNA *)&rna_Gizmo_target_is_valid_result, NULL,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Property identifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_Gizmo_target_is_valid_result = {
	{NULL, (PropertyRNA *)&rna_Gizmo_target_is_valid_property,
	-1, "result", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Gizmo_target_is_valid_func = {
	{NULL, (FunctionRNA *)&rna_Gizmo_target_set_operator_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_target_is_valid_property, (PropertyRNA *)&rna_Gizmo_target_is_valid_result}},
	"target_is_valid", 16, "",
	Gizmo_target_is_valid_call,
	(PropertyRNA *)&rna_Gizmo_target_is_valid_result
};

StructRNA RNA_Gizmo = {
	{(ContainerRNA *)&RNA_GizmoProperties, (ContainerRNA *)&RNA_GizmoGroup,
	NULL,
	{(PropertyRNA *)&rna_Gizmo_rna_properties, (PropertyRNA *)&rna_Gizmo_select}},
	"Gizmo", NULL, NULL, 516, NULL, "Gizmo",
	"Collection of gizmos",
	"Operator", 17,
	NULL, (PropertyRNA *)&rna_Gizmo_rna_properties,
	NULL,
	NULL,
	rna_Gizmo_refine,
	NULL,
	rna_Gizmo_register,
	rna_Gizmo_unregister,
	rna_Gizmo_instance,
	NULL,
	{(FunctionRNA *)&rna_Gizmo_draw_func, (FunctionRNA *)&rna_Gizmo_target_is_valid_func}
};

/* Gizmo Properties */
CollectionPropertyRNA rna_GizmoProperties_rna_properties = {
	{(PropertyRNA *)&rna_GizmoProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoProperties_rna_properties_begin, GizmoProperties_rna_properties_next, GizmoProperties_rna_properties_end, GizmoProperties_rna_properties_get, NULL, NULL, GizmoProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GizmoProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_GizmoProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_GizmoProperties = {
	{(ContainerRNA *)&RNA_Gizmos, (ContainerRNA *)&RNA_Gizmo,
	NULL,
	{(PropertyRNA *)&rna_GizmoProperties_rna_properties, (PropertyRNA *)&rna_GizmoProperties_rna_type}},
	"GizmoProperties", NULL, NULL, 644, NULL, "Gizmo Properties",
	"Input properties of an Gizmo",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GizmoProperties_rna_properties,
	NULL,
	NULL,
	rna_GizmoProperties_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_GizmoProperties_idprops,
	{NULL, NULL}
};

/* Gizmos */
CollectionPropertyRNA rna_Gizmos_rna_properties = {
	{(PropertyRNA *)&rna_Gizmos_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmos_rna_properties_begin, Gizmos_rna_properties_next, Gizmos_rna_properties_end, Gizmos_rna_properties_get, NULL, NULL, Gizmos_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Gizmos_rna_type = {
	{NULL, (PropertyRNA *)&rna_Gizmos_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Gizmos_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Gizmos_new_type = {
	{(PropertyRNA *)&rna_Gizmos_new_gizmo, NULL,
	-1, "type", 262145, 0, 1, 0, 0, "",
	"Gizmo identifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Type"
};

PointerPropertyRNA rna_Gizmos_new_gizmo = {
	{NULL, (PropertyRNA *)&rna_Gizmos_new_type,
	-1, "gizmo", 8388608, 0, 2, 0, 0, "",
	"New gizmo",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Gizmo
};

FunctionRNA rna_Gizmos_new_func = {
	{(FunctionRNA *)&rna_Gizmos_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Gizmos_new_type, (PropertyRNA *)&rna_Gizmos_new_gizmo}},
	"new", 16, "Add gizmo",
	Gizmos_new_call,
	(PropertyRNA *)&rna_Gizmos_new_gizmo
};

PointerPropertyRNA rna_Gizmos_remove_gizmo = {
	{NULL, NULL,
	-1, "gizmo", 262144, 0, 1, 0, 0, "",
	"New gizmo",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Gizmo
};

FunctionRNA rna_Gizmos_remove_func = {
	{(FunctionRNA *)&rna_Gizmos_clear_func, (FunctionRNA *)&rna_Gizmos_new_func,
	NULL,
	{(PropertyRNA *)&rna_Gizmos_remove_gizmo, (PropertyRNA *)&rna_Gizmos_remove_gizmo}},
	"remove", 8, "Delete gizmo",
	Gizmos_remove_call,
	NULL
};

FunctionRNA rna_Gizmos_clear_func = {
	{NULL, (FunctionRNA *)&rna_Gizmos_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 8, "Delete all gizmos",
	Gizmos_clear_call,
	NULL
};

StructRNA RNA_Gizmos = {
	{(ContainerRNA *)&RNA_GizmoGroupProperties, (ContainerRNA *)&RNA_GizmoProperties,
	NULL,
	{(PropertyRNA *)&rna_Gizmos_rna_properties, (PropertyRNA *)&rna_Gizmos_rna_type}},
	"Gizmos", NULL, NULL, 516, NULL, "Gizmos",
	"Collection of gizmos",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Gizmos_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Gizmos_new_func, (FunctionRNA *)&rna_Gizmos_clear_func}
};

/* Gizmo Group Properties */
CollectionPropertyRNA rna_GizmoGroupProperties_rna_properties = {
	{(PropertyRNA *)&rna_GizmoGroupProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroupProperties_rna_properties_begin, GizmoGroupProperties_rna_properties_next, GizmoGroupProperties_rna_properties_end, GizmoGroupProperties_rna_properties_get, NULL, NULL, GizmoGroupProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_GizmoGroupProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_GizmoGroupProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	GizmoGroupProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_GizmoGroupProperties = {
	{(ContainerRNA *)&RNA_wmOwnerID, (ContainerRNA *)&RNA_Gizmos,
	NULL,
	{(PropertyRNA *)&rna_GizmoGroupProperties_rna_properties, (PropertyRNA *)&rna_GizmoGroupProperties_rna_type}},
	"GizmoGroupProperties", NULL, NULL, 644, NULL, "Gizmo Group Properties",
	"Input properties of a Gizmo Group",
	"*", 17,
	NULL, (PropertyRNA *)&rna_GizmoGroupProperties_rna_properties,
	NULL,
	NULL,
	rna_GizmoGroupProperties_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_GizmoGroupProperties_idprops,
	{NULL, NULL}
};

