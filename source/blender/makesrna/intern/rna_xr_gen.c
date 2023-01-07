
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

#include "rna_xr.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_XrActionMap_rna_properties;
PointerPropertyRNA rna_XrActionMap_rna_type;
StringPropertyRNA rna_XrActionMap_name;
CollectionPropertyRNA rna_XrActionMap_actionmap_items;
IntPropertyRNA rna_XrActionMap_selected_item;


CollectionPropertyRNA rna_XrActionMapItems_rna_properties;
PointerPropertyRNA rna_XrActionMapItems_rna_type;

extern FunctionRNA rna_XrActionMapItems_new_func;
extern StringPropertyRNA rna_XrActionMapItems_new_name;
extern BoolPropertyRNA rna_XrActionMapItems_new_replace_existing;
extern PointerPropertyRNA rna_XrActionMapItems_new_item;

extern FunctionRNA rna_XrActionMapItems_new_from_item_func;
extern PointerPropertyRNA rna_XrActionMapItems_new_from_item_item;
extern PointerPropertyRNA rna_XrActionMapItems_new_from_item_result;

extern FunctionRNA rna_XrActionMapItems_remove_func;
extern PointerPropertyRNA rna_XrActionMapItems_remove_item;

extern FunctionRNA rna_XrActionMapItems_find_func;
extern StringPropertyRNA rna_XrActionMapItems_find_name;
extern PointerPropertyRNA rna_XrActionMapItems_find_item;



CollectionPropertyRNA rna_XrUserPath_rna_properties;
PointerPropertyRNA rna_XrUserPath_rna_type;
StringPropertyRNA rna_XrUserPath_path;


CollectionPropertyRNA rna_XrActionMapItem_rna_properties;
PointerPropertyRNA rna_XrActionMapItem_rna_type;
StringPropertyRNA rna_XrActionMapItem_name;
EnumPropertyRNA rna_XrActionMapItem_type;
CollectionPropertyRNA rna_XrActionMapItem_user_paths;
StringPropertyRNA rna_XrActionMapItem_op;
StringPropertyRNA rna_XrActionMapItem_op_name;
PointerPropertyRNA rna_XrActionMapItem_op_properties;
EnumPropertyRNA rna_XrActionMapItem_op_mode;
BoolPropertyRNA rna_XrActionMapItem_bimanual;
BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_grip;
BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_aim;
StringPropertyRNA rna_XrActionMapItem_haptic_name;
BoolPropertyRNA rna_XrActionMapItem_haptic_match_user_paths;
FloatPropertyRNA rna_XrActionMapItem_haptic_duration;
FloatPropertyRNA rna_XrActionMapItem_haptic_frequency;
FloatPropertyRNA rna_XrActionMapItem_haptic_amplitude;
EnumPropertyRNA rna_XrActionMapItem_haptic_mode;
CollectionPropertyRNA rna_XrActionMapItem_bindings;
IntPropertyRNA rna_XrActionMapItem_selected_binding;


CollectionPropertyRNA rna_XrUserPaths_rna_properties;
PointerPropertyRNA rna_XrUserPaths_rna_type;

extern FunctionRNA rna_XrUserPaths_new_func;
extern StringPropertyRNA rna_XrUserPaths_new_path;
extern PointerPropertyRNA rna_XrUserPaths_new_user_path;

extern FunctionRNA rna_XrUserPaths_remove_func;
extern PointerPropertyRNA rna_XrUserPaths_remove_user_path;

extern FunctionRNA rna_XrUserPaths_find_func;
extern StringPropertyRNA rna_XrUserPaths_find_path;
extern PointerPropertyRNA rna_XrUserPaths_find_user_path;



CollectionPropertyRNA rna_XrActionMapBindings_rna_properties;
PointerPropertyRNA rna_XrActionMapBindings_rna_type;

extern FunctionRNA rna_XrActionMapBindings_new_func;
extern StringPropertyRNA rna_XrActionMapBindings_new_name;
extern BoolPropertyRNA rna_XrActionMapBindings_new_replace_existing;
extern PointerPropertyRNA rna_XrActionMapBindings_new_binding;

extern FunctionRNA rna_XrActionMapBindings_new_from_binding_func;
extern PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_binding;
extern PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_result;

extern FunctionRNA rna_XrActionMapBindings_remove_func;
extern PointerPropertyRNA rna_XrActionMapBindings_remove_binding;

extern FunctionRNA rna_XrActionMapBindings_find_func;
extern StringPropertyRNA rna_XrActionMapBindings_find_name;
extern PointerPropertyRNA rna_XrActionMapBindings_find_binding;



CollectionPropertyRNA rna_XrComponentPath_rna_properties;
PointerPropertyRNA rna_XrComponentPath_rna_type;
StringPropertyRNA rna_XrComponentPath_path;


CollectionPropertyRNA rna_XrActionMapBinding_rna_properties;
PointerPropertyRNA rna_XrActionMapBinding_rna_type;
StringPropertyRNA rna_XrActionMapBinding_name;
StringPropertyRNA rna_XrActionMapBinding_profile;
CollectionPropertyRNA rna_XrActionMapBinding_component_paths;
FloatPropertyRNA rna_XrActionMapBinding_threshold;
EnumPropertyRNA rna_XrActionMapBinding_axis0_region;
EnumPropertyRNA rna_XrActionMapBinding_axis1_region;
FloatPropertyRNA rna_XrActionMapBinding_pose_location;
FloatPropertyRNA rna_XrActionMapBinding_pose_rotation;


CollectionPropertyRNA rna_XrComponentPaths_rna_properties;
PointerPropertyRNA rna_XrComponentPaths_rna_type;

extern FunctionRNA rna_XrComponentPaths_new_func;
extern StringPropertyRNA rna_XrComponentPaths_new_path;
extern PointerPropertyRNA rna_XrComponentPaths_new_component_path;

extern FunctionRNA rna_XrComponentPaths_remove_func;
extern PointerPropertyRNA rna_XrComponentPaths_remove_component_path;

extern FunctionRNA rna_XrComponentPaths_find_func;
extern StringPropertyRNA rna_XrComponentPaths_find_path;
extern PointerPropertyRNA rna_XrComponentPaths_find_component_path;



CollectionPropertyRNA rna_XrSessionSettings_rna_properties;
PointerPropertyRNA rna_XrSessionSettings_rna_type;
PointerPropertyRNA rna_XrSessionSettings_shading;
EnumPropertyRNA rna_XrSessionSettings_base_pose_type;
PointerPropertyRNA rna_XrSessionSettings_base_pose_object;
FloatPropertyRNA rna_XrSessionSettings_base_pose_location;
FloatPropertyRNA rna_XrSessionSettings_base_pose_angle;
FloatPropertyRNA rna_XrSessionSettings_base_scale;
BoolPropertyRNA rna_XrSessionSettings_show_floor;
BoolPropertyRNA rna_XrSessionSettings_show_annotation;
BoolPropertyRNA rna_XrSessionSettings_show_selection;
BoolPropertyRNA rna_XrSessionSettings_show_controllers;
BoolPropertyRNA rna_XrSessionSettings_show_custom_overlays;
BoolPropertyRNA rna_XrSessionSettings_show_object_extras;
EnumPropertyRNA rna_XrSessionSettings_controller_draw_style;
FloatPropertyRNA rna_XrSessionSettings_clip_start;
FloatPropertyRNA rna_XrSessionSettings_clip_end;
BoolPropertyRNA rna_XrSessionSettings_use_positional_tracking;
BoolPropertyRNA rna_XrSessionSettings_use_absolute_tracking;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_mesh;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curve;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_surf;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_meta;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_font;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curves;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_pointcloud;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_volume;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_armature;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_lattice;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_empty;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_grease_pencil;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_camera;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_speaker;
BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light_probe;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_mesh;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_curve;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_surf;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_meta;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_font;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_curves;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_pointcloud;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_volume;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_armature;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_lattice;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_empty;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_grease_pencil;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_camera;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_light;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_speaker;
BoolPropertyRNA rna_XrSessionSettings_show_object_select_light_probe;
IntPropertyRNA rna_XrSessionSettings_icon_from_show_object_viewport;


CollectionPropertyRNA rna_XrSessionState_rna_properties;
PointerPropertyRNA rna_XrSessionState_rna_type;
FloatPropertyRNA rna_XrSessionState_viewer_pose_location;
FloatPropertyRNA rna_XrSessionState_viewer_pose_rotation;
FloatPropertyRNA rna_XrSessionState_navigation_location;
FloatPropertyRNA rna_XrSessionState_navigation_rotation;
FloatPropertyRNA rna_XrSessionState_navigation_scale;
CollectionPropertyRNA rna_XrSessionState_actionmaps;
IntPropertyRNA rna_XrSessionState_active_actionmap;
IntPropertyRNA rna_XrSessionState_selected_actionmap;

extern FunctionRNA rna_XrSessionState_is_running_func;
extern PointerPropertyRNA rna_XrSessionState_is_running_context;
extern BoolPropertyRNA rna_XrSessionState_is_running_result;

extern FunctionRNA rna_XrSessionState_reset_to_base_pose_func;
extern PointerPropertyRNA rna_XrSessionState_reset_to_base_pose_context;

extern FunctionRNA rna_XrSessionState_action_set_create_func;
extern PointerPropertyRNA rna_XrSessionState_action_set_create_context;
extern PointerPropertyRNA rna_XrSessionState_action_set_create_actionmap;
extern BoolPropertyRNA rna_XrSessionState_action_set_create_result;

extern FunctionRNA rna_XrSessionState_action_create_func;
extern PointerPropertyRNA rna_XrSessionState_action_create_context;
extern PointerPropertyRNA rna_XrSessionState_action_create_actionmap;
extern PointerPropertyRNA rna_XrSessionState_action_create_actionmap_item;
extern BoolPropertyRNA rna_XrSessionState_action_create_result;

extern FunctionRNA rna_XrSessionState_action_binding_create_func;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_context;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_item;
extern PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_binding;
extern BoolPropertyRNA rna_XrSessionState_action_binding_create_result;

extern FunctionRNA rna_XrSessionState_active_action_set_set_func;
extern PointerPropertyRNA rna_XrSessionState_active_action_set_set_context;
extern StringPropertyRNA rna_XrSessionState_active_action_set_set_action_set;
extern BoolPropertyRNA rna_XrSessionState_active_action_set_set_result;

extern FunctionRNA rna_XrSessionState_controller_pose_actions_set_func;
extern PointerPropertyRNA rna_XrSessionState_controller_pose_actions_set_context;
extern StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_action_set;
extern StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_grip_action;
extern StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_aim_action;
extern BoolPropertyRNA rna_XrSessionState_controller_pose_actions_set_result;

extern FunctionRNA rna_XrSessionState_action_state_get_func;
extern PointerPropertyRNA rna_XrSessionState_action_state_get_context;
extern StringPropertyRNA rna_XrSessionState_action_state_get_action_set_name;
extern StringPropertyRNA rna_XrSessionState_action_state_get_action_name;
extern StringPropertyRNA rna_XrSessionState_action_state_get_user_path;
extern FloatPropertyRNA rna_XrSessionState_action_state_get_state;

extern FunctionRNA rna_XrSessionState_haptic_action_apply_func;
extern PointerPropertyRNA rna_XrSessionState_haptic_action_apply_context;
extern StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_set_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_apply_user_path;
extern FloatPropertyRNA rna_XrSessionState_haptic_action_apply_duration;
extern FloatPropertyRNA rna_XrSessionState_haptic_action_apply_frequency;
extern FloatPropertyRNA rna_XrSessionState_haptic_action_apply_amplitude;
extern BoolPropertyRNA rna_XrSessionState_haptic_action_apply_result;

extern FunctionRNA rna_XrSessionState_haptic_action_stop_func;
extern PointerPropertyRNA rna_XrSessionState_haptic_action_stop_context;
extern StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_set_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_name;
extern StringPropertyRNA rna_XrSessionState_haptic_action_stop_user_path;

extern FunctionRNA rna_XrSessionState_controller_grip_location_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_grip_location_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_grip_location_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_grip_location_get_location;

extern FunctionRNA rna_XrSessionState_controller_grip_rotation_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_grip_rotation_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_grip_rotation_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_grip_rotation_get_rotation;

extern FunctionRNA rna_XrSessionState_controller_aim_location_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_aim_location_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_aim_location_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_aim_location_get_location;

extern FunctionRNA rna_XrSessionState_controller_aim_rotation_get_func;
extern PointerPropertyRNA rna_XrSessionState_controller_aim_rotation_get_context;
extern IntPropertyRNA rna_XrSessionState_controller_aim_rotation_get_index;
extern FloatPropertyRNA rna_XrSessionState_controller_aim_rotation_get_rotation;



CollectionPropertyRNA rna_XrActionMaps_rna_properties;
PointerPropertyRNA rna_XrActionMaps_rna_type;

extern FunctionRNA rna_XrActionMaps_new_func;
extern PointerPropertyRNA rna_XrActionMaps_new_xr_session_state;
extern StringPropertyRNA rna_XrActionMaps_new_name;
extern BoolPropertyRNA rna_XrActionMaps_new_replace_existing;
extern PointerPropertyRNA rna_XrActionMaps_new_actionmap;

extern FunctionRNA rna_XrActionMaps_new_from_actionmap_func;
extern PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_xr_session_state;
extern PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_actionmap;
extern PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_result;

extern FunctionRNA rna_XrActionMaps_remove_func;
extern PointerPropertyRNA rna_XrActionMaps_remove_xr_session_state;
extern PointerPropertyRNA rna_XrActionMaps_remove_actionmap;

extern FunctionRNA rna_XrActionMaps_find_func;
extern PointerPropertyRNA rna_XrActionMaps_find_xr_session_state;
extern StringPropertyRNA rna_XrActionMaps_find_name;
extern PointerPropertyRNA rna_XrActionMaps_find_actionmap;



CollectionPropertyRNA rna_XrEventData_rna_properties;
PointerPropertyRNA rna_XrEventData_rna_type;
StringPropertyRNA rna_XrEventData_action_set;
StringPropertyRNA rna_XrEventData_action;
StringPropertyRNA rna_XrEventData_user_path;
StringPropertyRNA rna_XrEventData_user_path_other;
EnumPropertyRNA rna_XrEventData_type;
FloatPropertyRNA rna_XrEventData_state;
FloatPropertyRNA rna_XrEventData_state_other;
FloatPropertyRNA rna_XrEventData_float_threshold;
FloatPropertyRNA rna_XrEventData_controller_location;
FloatPropertyRNA rna_XrEventData_controller_rotation;
FloatPropertyRNA rna_XrEventData_controller_location_other;
FloatPropertyRNA rna_XrEventData_controller_rotation_other;
BoolPropertyRNA rna_XrEventData_bimanual;

static PointerRNA XrActionMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrActionMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMap_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMap_rna_properties_get(iter);
    }
}

void XrActionMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMap_rna_properties_get(iter);
    }
}

void XrActionMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrActionMap_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrActionMap_name_get(PointerRNA *ptr, char *value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int XrActionMap_name_length(PointerRNA *ptr)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    return strlen(data->name);
}

void XrActionMap_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

int XrActionMap_actionmap_items_length(PointerRNA *ptr)
{
    return rna_XrActionMap_items_length(ptr);
}

static PointerRNA XrActionMap_actionmap_items_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrActionMapItem, rna_iterator_listbase_get(iter));
}

void XrActionMap_actionmap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMap_actionmap_items;

    rna_XrActionMap_items_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMap_actionmap_items_get(iter);
    }
}

void XrActionMap_actionmap_items_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMap_actionmap_items_get(iter);
    }
}

void XrActionMap_actionmap_items_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMap_actionmap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMap_actionmap_items_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMap_actionmap_items_get(&iter); }
    }

    XrActionMap_actionmap_items_end(&iter);

    return found;
}

int XrActionMap_actionmap_items_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int XrActionMapItem_name_length(PointerRNA *);
    extern void XrActionMapItem_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    XrActionMap_actionmap_items_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = XrActionMapItem_name_length(&iter.ptr);
            if (namelen < 1024) {
                XrActionMapItem_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                XrActionMapItem_name_get(&iter.ptr, name);
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
        XrActionMap_actionmap_items_next(&iter);
    }
    XrActionMap_actionmap_items_end(&iter);

    return found;
}

int XrActionMap_selected_item_get(PointerRNA *ptr)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    return (int)(data->selitem);
}

void XrActionMap_selected_item_set(PointerRNA *ptr, int value)
{
    XrActionMap *data = (XrActionMap *)(ptr->data);
    data->selitem = CLAMPIS(value, -32768, 32767);
}

static PointerRNA XrActionMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrActionMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItems_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItems_rna_properties_get(iter);
    }
}

void XrActionMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItems_rna_properties_get(iter);
    }
}

void XrActionMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapItems_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrActionMapItems_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrUserPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrUserPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrUserPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrUserPath_rna_properties_get(iter);
    }
}

void XrUserPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrUserPath_rna_properties_get(iter);
    }
}

void XrUserPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrUserPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrUserPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrUserPath_path_get(PointerRNA *ptr, char *value)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    BLI_strncpy_utf8(value, data->path, 64);
}

int XrUserPath_path_length(PointerRNA *ptr)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    return strlen(data->path);
}

void XrUserPath_path_set(PointerRNA *ptr, const char *value)
{
    XrUserPath *data = (XrUserPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 64);
}

static PointerRNA XrActionMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrActionMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_rna_properties_get(iter);
    }
}

void XrActionMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_rna_properties_get(iter);
    }
}

void XrActionMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrActionMapItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrActionMapItem_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int XrActionMapItem_name_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->name);
}

void XrActionMapItem_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

int XrActionMapItem_type_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->type);
}

void XrActionMapItem_type_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->type = value;
}

int XrActionMapItem_user_paths_length(PointerRNA *ptr)
{
    return rna_XrActionMapItem_user_paths_length(ptr);
}

static PointerRNA XrActionMapItem_user_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrUserPath, rna_iterator_listbase_get(iter));
}

void XrActionMapItem_user_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItem_user_paths;

    rna_XrActionMapItem_user_paths_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_user_paths_get(iter);
    }
}

void XrActionMapItem_user_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_user_paths_get(iter);
    }
}

void XrActionMapItem_user_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapItem_user_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMapItem_user_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapItem_user_paths_get(&iter); }
    }

    XrActionMapItem_user_paths_end(&iter);

    return found;
}

void XrActionMapItem_op_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(value, data->op, 64);
}

int XrActionMapItem_op_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->op);
}

void XrActionMapItem_op_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->op, value, 64);
}

void XrActionMapItem_op_name_get(PointerRNA *ptr, char *value)
{
    rna_XrActionMapItem_op_name_get(ptr, value);
}

int XrActionMapItem_op_name_length(PointerRNA *ptr)
{
    return rna_XrActionMapItem_op_name_length(ptr);
}

PointerRNA XrActionMapItem_op_properties_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_op_properties_get(ptr);
}

int XrActionMapItem_op_mode_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->op_flag);
}

void XrActionMapItem_op_mode_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->op_flag = value;
}

bool XrActionMapItem_bimanual_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_bimanual_get(ptr);
}

void XrActionMapItem_bimanual_set(PointerRNA *ptr, bool value)
{
    rna_XrActionMapItem_bimanual_set(ptr, value);
}

bool XrActionMapItem_pose_is_controller_grip_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_pose_is_controller_grip_get(ptr);
}

void XrActionMapItem_pose_is_controller_grip_set(PointerRNA *ptr, bool value)
{
    rna_XrActionMapItem_pose_is_controller_grip_set(ptr, value);
}

bool XrActionMapItem_pose_is_controller_aim_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_pose_is_controller_aim_get(ptr);
}

void XrActionMapItem_pose_is_controller_aim_set(PointerRNA *ptr, bool value)
{
    rna_XrActionMapItem_pose_is_controller_aim_set(ptr, value);
}

void XrActionMapItem_haptic_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(value, data->haptic_name, 64);
}

int XrActionMapItem_haptic_name_length(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return strlen(data->haptic_name);
}

void XrActionMapItem_haptic_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    BLI_strncpy_utf8(data->haptic_name, value, 64);
}

bool XrActionMapItem_haptic_match_user_paths_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_haptic_match_user_paths_get(ptr);
}

void XrActionMapItem_haptic_match_user_paths_set(PointerRNA *ptr, bool value)
{
    rna_XrActionMapItem_haptic_match_user_paths_set(ptr, value);
}

float XrActionMapItem_haptic_duration_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_duration);
}

void XrActionMapItem_haptic_duration_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->haptic_duration = CLAMPIS(value, 0.0f, FLT_MAX);
}

float XrActionMapItem_haptic_frequency_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_frequency);
}

void XrActionMapItem_haptic_frequency_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->haptic_frequency = CLAMPIS(value, 0.0f, FLT_MAX);
}

float XrActionMapItem_haptic_amplitude_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (float)(data->haptic_amplitude);
}

void XrActionMapItem_haptic_amplitude_set(PointerRNA *ptr, float value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->haptic_amplitude = CLAMPIS(value, 0.0f, 1.0f);
}

int XrActionMapItem_haptic_mode_get(PointerRNA *ptr)
{
    return rna_XrActionMapItem_haptic_mode_get(ptr);
}

void XrActionMapItem_haptic_mode_set(PointerRNA *ptr, int value)
{
    rna_XrActionMapItem_haptic_mode_set(ptr, value);
}

int XrActionMapItem_bindings_length(PointerRNA *ptr)
{
    return rna_XrActionMapItem_bindings_length(ptr);
}

static PointerRNA XrActionMapItem_bindings_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrActionMapBinding, rna_iterator_listbase_get(iter));
}

void XrActionMapItem_bindings_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapItem_bindings;

    rna_XrActionMapItem_bindings_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_bindings_get(iter);
    }
}

void XrActionMapItem_bindings_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapItem_bindings_get(iter);
    }
}

void XrActionMapItem_bindings_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapItem_bindings_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMapItem_bindings_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapItem_bindings_get(&iter); }
    }

    XrActionMapItem_bindings_end(&iter);

    return found;
}

int XrActionMapItem_bindings_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int XrActionMapBinding_name_length(PointerRNA *);
    extern void XrActionMapBinding_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    XrActionMapItem_bindings_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = XrActionMapBinding_name_length(&iter.ptr);
            if (namelen < 1024) {
                XrActionMapBinding_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                XrActionMapBinding_name_get(&iter.ptr, name);
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
        XrActionMapItem_bindings_next(&iter);
    }
    XrActionMapItem_bindings_end(&iter);

    return found;
}

int XrActionMapItem_selected_binding_get(PointerRNA *ptr)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    return (int)(data->selbinding);
}

void XrActionMapItem_selected_binding_set(PointerRNA *ptr, int value)
{
    XrActionMapItem *data = (XrActionMapItem *)(ptr->data);
    data->selbinding = CLAMPIS(value, -32768, 32767);
}

static PointerRNA XrUserPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrUserPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrUserPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrUserPaths_rna_properties_get(iter);
    }
}

void XrUserPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrUserPaths_rna_properties_get(iter);
    }
}

void XrUserPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrUserPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrUserPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrActionMapBindings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrActionMapBindings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapBindings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBindings_rna_properties_get(iter);
    }
}

void XrActionMapBindings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBindings_rna_properties_get(iter);
    }
}

void XrActionMapBindings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapBindings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrActionMapBindings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrComponentPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrComponentPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrComponentPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrComponentPath_rna_properties_get(iter);
    }
}

void XrComponentPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrComponentPath_rna_properties_get(iter);
    }
}

void XrComponentPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrComponentPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrComponentPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrComponentPath_path_get(PointerRNA *ptr, char *value)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    BLI_strncpy_utf8(value, data->path, 192);
}

int XrComponentPath_path_length(PointerRNA *ptr)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    return strlen(data->path);
}

void XrComponentPath_path_set(PointerRNA *ptr, const char *value)
{
    XrComponentPath *data = (XrComponentPath *)(ptr->data);
    BLI_strncpy_utf8(data->path, value, 192);
}

static PointerRNA XrActionMapBinding_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrActionMapBinding_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapBinding_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_rna_properties_get(iter);
    }
}

void XrActionMapBinding_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_rna_properties_get(iter);
    }
}

void XrActionMapBinding_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapBinding_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrActionMapBinding_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrActionMapBinding_name_get(PointerRNA *ptr, char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int XrActionMapBinding_name_length(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return strlen(data->name);
}

void XrActionMapBinding_name_set(PointerRNA *ptr, const char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

void XrActionMapBinding_profile_get(PointerRNA *ptr, char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(value, data->profile, 256);
}

int XrActionMapBinding_profile_length(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return strlen(data->profile);
}

void XrActionMapBinding_profile_set(PointerRNA *ptr, const char *value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    BLI_strncpy_utf8(data->profile, value, 256);
}

int XrActionMapBinding_component_paths_length(PointerRNA *ptr)
{
    return rna_XrActionMapBinding_component_paths_length(ptr);
}

static PointerRNA XrActionMapBinding_component_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrComponentPath, rna_iterator_listbase_get(iter));
}

void XrActionMapBinding_component_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMapBinding_component_paths;

    rna_XrActionMapBinding_component_paths_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_component_paths_get(iter);
    }
}

void XrActionMapBinding_component_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMapBinding_component_paths_get(iter);
    }
}

void XrActionMapBinding_component_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMapBinding_component_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    XrActionMapBinding_component_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = XrActionMapBinding_component_paths_get(&iter); }
    }

    XrActionMapBinding_component_paths_end(&iter);

    return found;
}

float XrActionMapBinding_threshold_get(PointerRNA *ptr)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    return (float)(data->float_threshold);
}

void XrActionMapBinding_threshold_set(PointerRNA *ptr, float value)
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    data->float_threshold = CLAMPIS(value, 0.0f, 1.0f);
}

int XrActionMapBinding_axis0_region_get(PointerRNA *ptr)
{
    return rna_XrActionMapBinding_axis0_region_get(ptr);
}

void XrActionMapBinding_axis0_region_set(PointerRNA *ptr, int value)
{
    rna_XrActionMapBinding_axis0_region_set(ptr, value);
}

int XrActionMapBinding_axis1_region_get(PointerRNA *ptr)
{
    return rna_XrActionMapBinding_axis1_region_get(ptr);
}

void XrActionMapBinding_axis1_region_set(PointerRNA *ptr, int value)
{
    rna_XrActionMapBinding_axis1_region_set(ptr, value);
}

void XrActionMapBinding_pose_location_get(PointerRNA *ptr, float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_location)[i]);
    }
}

void XrActionMapBinding_pose_location_set(PointerRNA *ptr, const float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->pose_location)[i] = values[i];
    }
}

void XrActionMapBinding_pose_rotation_get(PointerRNA *ptr, float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_rotation)[i]);
    }
}

void XrActionMapBinding_pose_rotation_set(PointerRNA *ptr, const float values[3])
{
    XrActionMapBinding *data = (XrActionMapBinding *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->pose_rotation)[i] = values[i];
    }
}

static PointerRNA XrComponentPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrComponentPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrComponentPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrComponentPaths_rna_properties_get(iter);
    }
}

void XrComponentPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrComponentPaths_rna_properties_get(iter);
    }
}

void XrComponentPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrComponentPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrComponentPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrSessionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrSessionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrSessionSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionSettings_rna_properties_get(iter);
    }
}

void XrSessionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrSessionSettings_rna_properties_get(iter);
    }
}

void XrSessionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrSessionSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrSessionSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA XrSessionSettings_shading_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_View3DShading, &data->shading);
}

int XrSessionSettings_base_pose_type_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->base_pose_type);
}

void XrSessionSettings_base_pose_type_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->base_pose_type = value;
}

PointerRNA XrSessionSettings_base_pose_object_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->base_pose_object);
}

void XrSessionSettings_base_pose_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->base_pose_object = value.data;
}

void XrSessionSettings_base_pose_location_get(PointerRNA *ptr, float values[3])
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->base_pose_location)[i]);
    }
}

void XrSessionSettings_base_pose_location_set(PointerRNA *ptr, const float values[3])
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->base_pose_location)[i] = values[i];
    }
}

float XrSessionSettings_base_pose_angle_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->base_pose_angle);
}

void XrSessionSettings_base_pose_angle_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->base_pose_angle = value;
}

float XrSessionSettings_base_scale_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->base_scale);
}

void XrSessionSettings_base_scale_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->base_scale = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

bool XrSessionSettings_show_floor_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 4) != 0);
}

void XrSessionSettings_show_floor_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 4; }
    else { data->draw_flags &= ~4; }
}

bool XrSessionSettings_show_annotation_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 1) != 0);
}

void XrSessionSettings_show_annotation_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 1; }
    else { data->draw_flags &= ~1; }
}

bool XrSessionSettings_show_selection_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 8) != 0);
}

void XrSessionSettings_show_selection_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 8; }
    else { data->draw_flags &= ~8; }
}

bool XrSessionSettings_show_controllers_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 16) != 0);
}

void XrSessionSettings_show_controllers_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 16; }
    else { data->draw_flags &= ~16; }
}

bool XrSessionSettings_show_custom_overlays_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 32) != 0);
}

void XrSessionSettings_show_custom_overlays_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 32; }
    else { data->draw_flags &= ~32; }
}

bool XrSessionSettings_show_object_extras_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (((data->draw_flags) & 64) != 0);
}

void XrSessionSettings_show_object_extras_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (value) { data->draw_flags |= 64; }
    else { data->draw_flags &= ~64; }
}

int XrSessionSettings_controller_draw_style_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (int)(data->controller_draw_style);
}

void XrSessionSettings_controller_draw_style_set(PointerRNA *ptr, int value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->controller_draw_style = value;
}

float XrSessionSettings_clip_start_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->clip_start);
}

void XrSessionSettings_clip_start_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->clip_start = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

float XrSessionSettings_clip_end_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return (float)(data->clip_end);
}

void XrSessionSettings_clip_end_set(PointerRNA *ptr, float value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    data->clip_end = CLAMPIS(value, 0.0000010000f, FLT_MAX);
}

bool XrSessionSettings_use_positional_tracking_get(PointerRNA *ptr)
{
    return rna_XrSessionSettings_use_positional_tracking_get(ptr);
}

void XrSessionSettings_use_positional_tracking_set(PointerRNA *ptr, bool value)
{
    rna_XrSessionSettings_use_positional_tracking_set(ptr, value);
}

bool XrSessionSettings_use_absolute_tracking_get(PointerRNA *ptr)
{
    return rna_XrSessionSettings_use_absolute_tracking_get(ptr);
}

void XrSessionSettings_use_absolute_tracking_set(PointerRNA *ptr, bool value)
{
    rna_XrSessionSettings_use_absolute_tracking_set(ptr, value);
}

bool XrSessionSettings_show_object_viewport_mesh_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 2) != 0);
}

void XrSessionSettings_show_object_viewport_mesh_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 2; }
    else { data->object_type_exclude_viewport &= ~2; }
}

bool XrSessionSettings_show_object_viewport_curve_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 4) != 0);
}

void XrSessionSettings_show_object_viewport_curve_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 4; }
    else { data->object_type_exclude_viewport &= ~4; }
}

bool XrSessionSettings_show_object_viewport_surf_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 8) != 0);
}

void XrSessionSettings_show_object_viewport_surf_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 8; }
    else { data->object_type_exclude_viewport &= ~8; }
}

bool XrSessionSettings_show_object_viewport_meta_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 32) != 0);
}

void XrSessionSettings_show_object_viewport_meta_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 32; }
    else { data->object_type_exclude_viewport &= ~32; }
}

bool XrSessionSettings_show_object_viewport_font_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 16) != 0);
}

void XrSessionSettings_show_object_viewport_font_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 16; }
    else { data->object_type_exclude_viewport &= ~16; }
}

bool XrSessionSettings_show_object_viewport_curves_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 134217728) != 0);
}

void XrSessionSettings_show_object_viewport_curves_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 134217728; }
    else { data->object_type_exclude_viewport &= ~134217728; }
}

bool XrSessionSettings_show_object_viewport_pointcloud_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 268435456) != 0);
}

void XrSessionSettings_show_object_viewport_pointcloud_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 268435456; }
    else { data->object_type_exclude_viewport &= ~268435456; }
}

bool XrSessionSettings_show_object_viewport_volume_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 536870912) != 0);
}

void XrSessionSettings_show_object_viewport_volume_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 536870912; }
    else { data->object_type_exclude_viewport &= ~536870912; }
}

bool XrSessionSettings_show_object_viewport_armature_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 33554432) != 0);
}

void XrSessionSettings_show_object_viewport_armature_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 33554432; }
    else { data->object_type_exclude_viewport &= ~33554432; }
}

bool XrSessionSettings_show_object_viewport_lattice_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 4194304) != 0);
}

void XrSessionSettings_show_object_viewport_lattice_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 4194304; }
    else { data->object_type_exclude_viewport &= ~4194304; }
}

bool XrSessionSettings_show_object_viewport_empty_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 1) != 0);
}

void XrSessionSettings_show_object_viewport_empty_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 1; }
    else { data->object_type_exclude_viewport &= ~1; }
}

bool XrSessionSettings_show_object_viewport_grease_pencil_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 67108864) != 0);
}

void XrSessionSettings_show_object_viewport_grease_pencil_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 67108864; }
    else { data->object_type_exclude_viewport &= ~67108864; }
}

bool XrSessionSettings_show_object_viewport_camera_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 2048) != 0);
}

void XrSessionSettings_show_object_viewport_camera_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 2048; }
    else { data->object_type_exclude_viewport &= ~2048; }
}

bool XrSessionSettings_show_object_viewport_light_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 1024) != 0);
}

void XrSessionSettings_show_object_viewport_light_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 1024; }
    else { data->object_type_exclude_viewport &= ~1024; }
}

bool XrSessionSettings_show_object_viewport_speaker_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 4096) != 0);
}

void XrSessionSettings_show_object_viewport_speaker_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 4096; }
    else { data->object_type_exclude_viewport &= ~4096; }
}

bool XrSessionSettings_show_object_viewport_light_probe_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_viewport) & 8192) != 0);
}

void XrSessionSettings_show_object_viewport_light_probe_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_viewport |= 8192; }
    else { data->object_type_exclude_viewport &= ~8192; }
}

bool XrSessionSettings_show_object_select_mesh_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 2) != 0);
}

void XrSessionSettings_show_object_select_mesh_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 2; }
    else { data->object_type_exclude_select &= ~2; }
}

bool XrSessionSettings_show_object_select_curve_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 4) != 0);
}

void XrSessionSettings_show_object_select_curve_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 4; }
    else { data->object_type_exclude_select &= ~4; }
}

bool XrSessionSettings_show_object_select_surf_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 8) != 0);
}

void XrSessionSettings_show_object_select_surf_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 8; }
    else { data->object_type_exclude_select &= ~8; }
}

bool XrSessionSettings_show_object_select_meta_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 32) != 0);
}

void XrSessionSettings_show_object_select_meta_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 32; }
    else { data->object_type_exclude_select &= ~32; }
}

bool XrSessionSettings_show_object_select_font_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 16) != 0);
}

void XrSessionSettings_show_object_select_font_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 16; }
    else { data->object_type_exclude_select &= ~16; }
}

bool XrSessionSettings_show_object_select_curves_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 134217728) != 0);
}

void XrSessionSettings_show_object_select_curves_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 134217728; }
    else { data->object_type_exclude_select &= ~134217728; }
}

bool XrSessionSettings_show_object_select_pointcloud_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 268435456) != 0);
}

void XrSessionSettings_show_object_select_pointcloud_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 268435456; }
    else { data->object_type_exclude_select &= ~268435456; }
}

bool XrSessionSettings_show_object_select_volume_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 536870912) != 0);
}

void XrSessionSettings_show_object_select_volume_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 536870912; }
    else { data->object_type_exclude_select &= ~536870912; }
}

bool XrSessionSettings_show_object_select_armature_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 33554432) != 0);
}

void XrSessionSettings_show_object_select_armature_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 33554432; }
    else { data->object_type_exclude_select &= ~33554432; }
}

bool XrSessionSettings_show_object_select_lattice_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 4194304) != 0);
}

void XrSessionSettings_show_object_select_lattice_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 4194304; }
    else { data->object_type_exclude_select &= ~4194304; }
}

bool XrSessionSettings_show_object_select_empty_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 1) != 0);
}

void XrSessionSettings_show_object_select_empty_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 1; }
    else { data->object_type_exclude_select &= ~1; }
}

bool XrSessionSettings_show_object_select_grease_pencil_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 67108864) != 0);
}

void XrSessionSettings_show_object_select_grease_pencil_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 67108864; }
    else { data->object_type_exclude_select &= ~67108864; }
}

bool XrSessionSettings_show_object_select_camera_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 2048) != 0);
}

void XrSessionSettings_show_object_select_camera_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 2048; }
    else { data->object_type_exclude_select &= ~2048; }
}

bool XrSessionSettings_show_object_select_light_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 1024) != 0);
}

void XrSessionSettings_show_object_select_light_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 1024; }
    else { data->object_type_exclude_select &= ~1024; }
}

bool XrSessionSettings_show_object_select_speaker_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 4096) != 0);
}

void XrSessionSettings_show_object_select_speaker_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 4096; }
    else { data->object_type_exclude_select &= ~4096; }
}

bool XrSessionSettings_show_object_select_light_probe_get(PointerRNA *ptr)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    return !(((data->object_type_exclude_select) & 8192) != 0);
}

void XrSessionSettings_show_object_select_light_probe_set(PointerRNA *ptr, bool value)
{
    XrSessionSettings *data = (XrSessionSettings *)(ptr->data);
    if (!value) { data->object_type_exclude_select |= 8192; }
    else { data->object_type_exclude_select &= ~8192; }
}

int XrSessionSettings_icon_from_show_object_viewport_get(PointerRNA *ptr)
{
    return rna_XrSessionSettings_icon_from_show_object_viewport_get(ptr);
}

static PointerRNA XrSessionState_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrSessionState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrSessionState_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionState_rna_properties_get(iter);
    }
}

void XrSessionState_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrSessionState_rna_properties_get(iter);
    }
}

void XrSessionState_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrSessionState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrSessionState_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrSessionState_viewer_pose_location_get(PointerRNA *ptr, float values[3])
{
    rna_XrSessionState_viewer_pose_location_get(ptr, values);
}

void XrSessionState_viewer_pose_rotation_get(PointerRNA *ptr, float values[4])
{
    rna_XrSessionState_viewer_pose_rotation_get(ptr, values);
}

void XrSessionState_navigation_location_get(PointerRNA *ptr, float values[3])
{
    rna_XrSessionState_nav_location_get(ptr, values);
}

void XrSessionState_navigation_location_set(PointerRNA *ptr, const float values[3])
{
    rna_XrSessionState_nav_location_set(ptr, values);
}

void XrSessionState_navigation_rotation_get(PointerRNA *ptr, float values[4])
{
    rna_XrSessionState_nav_rotation_get(ptr, values);
}

void XrSessionState_navigation_rotation_set(PointerRNA *ptr, const float values[4])
{
    rna_XrSessionState_nav_rotation_set(ptr, values);
}

float XrSessionState_navigation_scale_get(PointerRNA *ptr)
{
    return rna_XrSessionState_nav_scale_get(ptr);
}

void XrSessionState_navigation_scale_set(PointerRNA *ptr, float value)
{
    rna_XrSessionState_nav_scale_set(ptr, value);
}

int XrSessionState_actionmaps_length(PointerRNA *ptr)
{
    return rna_XrSessionState_actionmaps_length(ptr);
}

static PointerRNA XrSessionState_actionmaps_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_XrActionMap, rna_iterator_listbase_get(iter));
}

void XrSessionState_actionmaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrSessionState_actionmaps;

    rna_XrSessionState_actionmaps_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrSessionState_actionmaps_get(iter);
    }
}

void XrSessionState_actionmaps_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = XrSessionState_actionmaps_get(iter);
    }
}

void XrSessionState_actionmaps_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrSessionState_active_actionmap_get(PointerRNA *ptr)
{
    return rna_XrSessionState_active_actionmap_get(ptr);
}

void XrSessionState_active_actionmap_set(PointerRNA *ptr, int value)
{
    rna_XrSessionState_active_actionmap_set(ptr, value);
}

int XrSessionState_selected_actionmap_get(PointerRNA *ptr)
{
    return rna_XrSessionState_selected_actionmap_get(ptr);
}

void XrSessionState_selected_actionmap_set(PointerRNA *ptr, int value)
{
    rna_XrSessionState_selected_actionmap_set(ptr, value);
}

static PointerRNA XrActionMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrActionMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrActionMaps_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrActionMaps_rna_properties_get(iter);
    }
}

void XrActionMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrActionMaps_rna_properties_get(iter);
    }
}

void XrActionMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrActionMaps_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrActionMaps_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA XrEventData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void XrEventData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_XrEventData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = XrEventData_rna_properties_get(iter);
    }
}

void XrEventData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = XrEventData_rna_properties_get(iter);
    }
}

void XrEventData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int XrEventData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA XrEventData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void XrEventData_action_set_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_action_set_get(ptr, value);
}

int XrEventData_action_set_length(PointerRNA *ptr)
{
    return rna_XrEventData_action_set_length(ptr);
}

void XrEventData_action_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_action_get(ptr, value);
}

int XrEventData_action_length(PointerRNA *ptr)
{
    return rna_XrEventData_action_length(ptr);
}

void XrEventData_user_path_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_user_path_get(ptr, value);
}

int XrEventData_user_path_length(PointerRNA *ptr)
{
    return rna_XrEventData_user_path_length(ptr);
}

void XrEventData_user_path_other_get(PointerRNA *ptr, char *value)
{
    rna_XrEventData_user_path_other_get(ptr, value);
}

int XrEventData_user_path_other_length(PointerRNA *ptr)
{
    return rna_XrEventData_user_path_other_length(ptr);
}

int XrEventData_type_get(PointerRNA *ptr)
{
    return rna_XrEventData_type_get(ptr);
}

void XrEventData_state_get(PointerRNA *ptr, float values[2])
{
    rna_XrEventData_state_get(ptr, values);
}

void XrEventData_state_other_get(PointerRNA *ptr, float values[2])
{
    rna_XrEventData_state_other_get(ptr, values);
}

float XrEventData_float_threshold_get(PointerRNA *ptr)
{
    return rna_XrEventData_float_threshold_get(ptr);
}

void XrEventData_controller_location_get(PointerRNA *ptr, float values[3])
{
    rna_XrEventData_controller_location_get(ptr, values);
}

void XrEventData_controller_rotation_get(PointerRNA *ptr, float values[4])
{
    rna_XrEventData_controller_rotation_get(ptr, values);
}

void XrEventData_controller_location_other_get(PointerRNA *ptr, float values[3])
{
    rna_XrEventData_controller_location_other_get(ptr, values);
}

void XrEventData_controller_rotation_other_get(PointerRNA *ptr, float values[4])
{
    rna_XrEventData_controller_rotation_other_get(ptr, values);
}

bool XrEventData_bimanual_get(PointerRNA *ptr)
{
    return rna_XrEventData_bimanual_get(ptr);
}


struct XrActionMapItem *XrActionMapItems_new_func(struct XrActionMap *_self, const char * name, bool replace_existing)
{
	return rna_XrActionMapItem_new(_self, name, replace_existing);
}

void XrActionMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	const char * name;
	bool replace_existing;
	struct XrActionMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_XrActionMapItem_new(_self, name, replace_existing);
	*((struct XrActionMapItem **)_retdata) = item;
}

struct XrActionMapItem *XrActionMapItems_new_from_item_func(struct XrActionMap *_self, struct XrActionMapItem *item)
{
	return rna_XrActionMapItem_new_from_item(_self, item);
}

void XrActionMapItems_new_from_item_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	struct XrActionMapItem *item;
	struct XrActionMapItem *result;
	char *_data, *_retdata;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct XrActionMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMapItem_new_from_item(_self, item);
	*((struct XrActionMapItem **)_retdata) = result;
}

void XrActionMapItems_remove_func(struct XrActionMap *_self, ReportList *reports, struct PointerRNA *item)
{
	rna_XrActionMapItem_remove(_self, reports, item);
}

void XrActionMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	struct PointerRNA *item;
	char *_data;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct PointerRNA **)_data);
	
	rna_XrActionMapItem_remove(_self, reports, item);
}

struct XrActionMapItem *XrActionMapItems_find_func(struct XrActionMap *_self, const char * name)
{
	return rna_XrActionMapItem_find(_self, name);
}

void XrActionMapItems_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMap *_self;
	const char * name;
	struct XrActionMapItem *item;
	char *_data, *_retdata;
	
	_self = (struct XrActionMap *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	item = rna_XrActionMapItem_find(_self, name);
	*((struct XrActionMapItem **)_retdata) = item;
}

/* Repeated prototypes to detect errors */

struct XrActionMapItem *rna_XrActionMapItem_new(struct XrActionMap *_self, const char * name, bool replace_existing);
struct XrActionMapItem *rna_XrActionMapItem_new_from_item(struct XrActionMap *_self, struct XrActionMapItem *item);
void rna_XrActionMapItem_remove(struct XrActionMap *_self, ReportList *reports, struct PointerRNA *item);
struct XrActionMapItem *rna_XrActionMapItem_find(struct XrActionMap *_self, const char * name);



struct XrUserPath *XrUserPaths_new_func(struct XrActionMapItem *_self, const char * path)
{
	return rna_XrUserPath_new(_self, path);
}

void XrUserPaths_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * path;
	struct XrUserPath *user_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	user_path = rna_XrUserPath_new(_self, path);
	*((struct XrUserPath **)_retdata) = user_path;
}

void XrUserPaths_remove_func(struct XrActionMapItem *_self, struct PointerRNA *user_path)
{
	rna_XrUserPath_remove(_self, user_path);
}

void XrUserPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	struct PointerRNA *user_path;
	char *_data;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	user_path = *((struct PointerRNA **)_data);
	
	rna_XrUserPath_remove(_self, user_path);
}

struct XrUserPath *XrUserPaths_find_func(struct XrActionMapItem *_self, const char * path)
{
	return rna_XrUserPath_find(_self, path);
}

void XrUserPaths_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * path;
	struct XrUserPath *user_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	user_path = rna_XrUserPath_find(_self, path);
	*((struct XrUserPath **)_retdata) = user_path;
}

/* Repeated prototypes to detect errors */

struct XrUserPath *rna_XrUserPath_new(struct XrActionMapItem *_self, const char * path);
void rna_XrUserPath_remove(struct XrActionMapItem *_self, struct PointerRNA *user_path);
struct XrUserPath *rna_XrUserPath_find(struct XrActionMapItem *_self, const char * path);

struct XrActionMapBinding *XrActionMapBindings_new_func(struct XrActionMapItem *_self, const char * name, bool replace_existing)
{
	return rna_XrActionMapBinding_new(_self, name, replace_existing);
}

void XrActionMapBindings_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * name;
	bool replace_existing;
	struct XrActionMapBinding *binding;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	binding = rna_XrActionMapBinding_new(_self, name, replace_existing);
	*((struct XrActionMapBinding **)_retdata) = binding;
}

struct XrActionMapBinding *XrActionMapBindings_new_from_binding_func(struct XrActionMapItem *_self, struct XrActionMapBinding *binding)
{
	return rna_XrActionMapBinding_new_from_binding(_self, binding);
}

void XrActionMapBindings_new_from_binding_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	struct XrActionMapBinding *binding;
	struct XrActionMapBinding *result;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	binding = *((struct XrActionMapBinding **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMapBinding_new_from_binding(_self, binding);
	*((struct XrActionMapBinding **)_retdata) = result;
}

void XrActionMapBindings_remove_func(struct XrActionMapItem *_self, ReportList *reports, struct PointerRNA *binding)
{
	rna_XrActionMapBinding_remove(_self, reports, binding);
}

void XrActionMapBindings_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	struct PointerRNA *binding;
	char *_data;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	binding = *((struct PointerRNA **)_data);
	
	rna_XrActionMapBinding_remove(_self, reports, binding);
}

struct XrActionMapBinding *XrActionMapBindings_find_func(struct XrActionMapItem *_self, const char * name)
{
	return rna_XrActionMapBinding_find(_self, name);
}

void XrActionMapBindings_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapItem *_self;
	const char * name;
	struct XrActionMapBinding *binding;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapItem *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	binding = rna_XrActionMapBinding_find(_self, name);
	*((struct XrActionMapBinding **)_retdata) = binding;
}

/* Repeated prototypes to detect errors */

struct XrActionMapBinding *rna_XrActionMapBinding_new(struct XrActionMapItem *_self, const char * name, bool replace_existing);
struct XrActionMapBinding *rna_XrActionMapBinding_new_from_binding(struct XrActionMapItem *_self, struct XrActionMapBinding *binding);
void rna_XrActionMapBinding_remove(struct XrActionMapItem *_self, ReportList *reports, struct PointerRNA *binding);
struct XrActionMapBinding *rna_XrActionMapBinding_find(struct XrActionMapItem *_self, const char * name);



struct XrComponentPath *XrComponentPaths_new_func(struct XrActionMapBinding *_self, const char * path)
{
	return rna_XrComponentPath_new(_self, path);
}

void XrComponentPaths_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapBinding *_self;
	const char * path;
	struct XrComponentPath *component_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	component_path = rna_XrComponentPath_new(_self, path);
	*((struct XrComponentPath **)_retdata) = component_path;
}

void XrComponentPaths_remove_func(struct XrActionMapBinding *_self, struct PointerRNA *component_path)
{
	rna_XrComponentPath_remove(_self, component_path);
}

void XrComponentPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapBinding *_self;
	struct PointerRNA *component_path;
	char *_data;
	
	_self = (struct XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	component_path = *((struct PointerRNA **)_data);
	
	rna_XrComponentPath_remove(_self, component_path);
}

struct XrComponentPath *XrComponentPaths_find_func(struct XrActionMapBinding *_self, const char * path)
{
	return rna_XrComponentPath_find(_self, path);
}

void XrComponentPaths_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct XrActionMapBinding *_self;
	const char * path;
	struct XrComponentPath *component_path;
	char *_data, *_retdata;
	
	_self = (struct XrActionMapBinding *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	component_path = rna_XrComponentPath_find(_self, path);
	*((struct XrComponentPath **)_retdata) = component_path;
}

/* Repeated prototypes to detect errors */

struct XrComponentPath *rna_XrComponentPath_new(struct XrActionMapBinding *_self, const char * path);
void rna_XrComponentPath_remove(struct XrActionMapBinding *_self, struct PointerRNA *component_path);
struct XrComponentPath *rna_XrComponentPath_find(struct XrActionMapBinding *_self, const char * path);


bool XrSessionState_is_running_func(struct bContext *context)
{
	return rna_XrSessionState_is_running(context);
}

void XrSessionState_is_running_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_is_running(context);
	*((bool *)_retdata) = result;
}

void XrSessionState_reset_to_base_pose_func(struct bContext *context)
{
	rna_XrSessionState_reset_to_base_pose(context);
}

void XrSessionState_reset_to_base_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	
	rna_XrSessionState_reset_to_base_pose(context);
}

bool XrSessionState_action_set_create_func(struct bContext *context, struct XrActionMap *actionmap)
{
	return rna_XrSessionState_action_set_create(context, actionmap);
}

void XrSessionState_action_set_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	struct XrActionMap *actionmap;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_set_create(context, actionmap);
	*((bool *)_retdata) = result;
}

bool XrSessionState_action_create_func(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item)
{
	return rna_XrSessionState_action_create(context, actionmap, actionmap_item);
}

void XrSessionState_action_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	struct XrActionMap *actionmap;
	struct XrActionMapItem *actionmap_item;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	actionmap_item = *((struct XrActionMapItem **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_create(context, actionmap, actionmap_item);
	*((bool *)_retdata) = result;
}

bool XrSessionState_action_binding_create_func(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item, struct XrActionMapBinding *actionmap_binding)
{
	return rna_XrSessionState_action_binding_create(context, actionmap, actionmap_item, actionmap_binding);
}

void XrSessionState_action_binding_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	struct XrActionMap *actionmap;
	struct XrActionMapItem *actionmap_item;
	struct XrActionMapBinding *actionmap_binding;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	actionmap_item = *((struct XrActionMapItem **)_data);
	_data += 8;
	actionmap_binding = *((struct XrActionMapBinding **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_action_binding_create(context, actionmap, actionmap_item, actionmap_binding);
	*((bool *)_retdata) = result;
}

bool XrSessionState_active_action_set_set_func(struct bContext *context, const char * action_set)
{
	return rna_XrSessionState_active_action_set_set(context, action_set);
}

void XrSessionState_active_action_set_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_active_action_set_set(context, action_set);
	*((bool *)_retdata) = result;
}

bool XrSessionState_controller_pose_actions_set_func(struct bContext *context, const char * action_set, const char * grip_action, const char * aim_action)
{
	return rna_XrSessionState_controller_pose_actions_set(context, action_set, grip_action, aim_action);
}

void XrSessionState_controller_pose_actions_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set;
	const char * grip_action;
	const char * aim_action;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set = *((const char * *)_data);
	_data += 8;
	grip_action = *((const char * *)_data);
	_data += 8;
	aim_action = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_controller_pose_actions_set(context, action_set, grip_action, aim_action);
	*((bool *)_retdata) = result;
}

void XrSessionState_action_state_get_func(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float state[2])
{
	rna_XrSessionState_action_state_get(context, action_set_name, action_name, user_path, state);
}

void XrSessionState_action_state_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	float *state;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	_data += 8;
	state = ((float *)_data);
	
	rna_XrSessionState_action_state_get(context, action_set_name, action_name, user_path, state);
}

bool XrSessionState_haptic_action_apply_func(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float duration, float frequency, float amplitude)
{
	return rna_XrSessionState_haptic_action_apply(context, action_set_name, action_name, user_path, duration, frequency, amplitude);
}

void XrSessionState_haptic_action_apply_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	float duration;
	float frequency;
	float amplitude;
	bool result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	_data += 8;
	duration = *((float *)_data);
	_data += 8;
	frequency = *((float *)_data);
	_data += 8;
	amplitude = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrSessionState_haptic_action_apply(context, action_set_name, action_name, user_path, duration, frequency, amplitude);
	*((bool *)_retdata) = result;
}

void XrSessionState_haptic_action_stop_func(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path)
{
	rna_XrSessionState_haptic_action_stop(context, action_set_name, action_name, user_path);
}

void XrSessionState_haptic_action_stop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	const char * action_set_name;
	const char * action_name;
	const char * user_path;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	action_set_name = *((const char * *)_data);
	_data += 8;
	action_name = *((const char * *)_data);
	_data += 8;
	user_path = *((const char * *)_data);
	
	rna_XrSessionState_haptic_action_stop(context, action_set_name, action_name, user_path);
}

void XrSessionState_controller_grip_location_get_func(struct bContext *context, int index, float location[3])
{
	rna_XrSessionState_controller_grip_location_get(context, index, location);
}

void XrSessionState_controller_grip_location_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *location;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_XrSessionState_controller_grip_location_get(context, index, location);
}

void XrSessionState_controller_grip_rotation_get_func(struct bContext *context, int index, float rotation[4])
{
	rna_XrSessionState_controller_grip_rotation_get(context, index, rotation);
}

void XrSessionState_controller_grip_rotation_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *rotation;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	rotation = ((float *)_data);
	
	rna_XrSessionState_controller_grip_rotation_get(context, index, rotation);
}

void XrSessionState_controller_aim_location_get_func(struct bContext *context, int index, float location[3])
{
	rna_XrSessionState_controller_aim_location_get(context, index, location);
}

void XrSessionState_controller_aim_location_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *location;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_XrSessionState_controller_aim_location_get(context, index, location);
}

void XrSessionState_controller_aim_rotation_get_func(struct bContext *context, int index, float rotation[4])
{
	rna_XrSessionState_controller_aim_rotation_get(context, index, rotation);
}

void XrSessionState_controller_aim_rotation_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bContext *context;
	int index;
	float *rotation;
	char *_data;
	
	_data = (char *)_parms->data;
	context = *((struct bContext **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	rotation = ((float *)_data);
	
	rna_XrSessionState_controller_aim_rotation_get(context, index, rotation);
}

/* Repeated prototypes to detect errors */

bool rna_XrSessionState_is_running(struct bContext *context);
void rna_XrSessionState_reset_to_base_pose(struct bContext *context);
bool rna_XrSessionState_action_set_create(struct bContext *context, struct XrActionMap *actionmap);
bool rna_XrSessionState_action_create(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item);
bool rna_XrSessionState_action_binding_create(struct bContext *context, struct XrActionMap *actionmap, struct XrActionMapItem *actionmap_item, struct XrActionMapBinding *actionmap_binding);
bool rna_XrSessionState_active_action_set_set(struct bContext *context, const char * action_set);
bool rna_XrSessionState_controller_pose_actions_set(struct bContext *context, const char * action_set, const char * grip_action, const char * aim_action);
void rna_XrSessionState_action_state_get(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float state[2]);
bool rna_XrSessionState_haptic_action_apply(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path, float duration, float frequency, float amplitude);
void rna_XrSessionState_haptic_action_stop(struct bContext *context, const char * action_set_name, const char * action_name, const char * user_path);
void rna_XrSessionState_controller_grip_location_get(struct bContext *context, int index, float location[3]);
void rna_XrSessionState_controller_grip_rotation_get(struct bContext *context, int index, float rotation[4]);
void rna_XrSessionState_controller_aim_location_get(struct bContext *context, int index, float location[3]);
void rna_XrSessionState_controller_aim_rotation_get(struct bContext *context, int index, float rotation[4]);

struct XrActionMap *XrActionMaps_new_func(struct PointerRNA *xr_session_state, const char * name, bool replace_existing)
{
	return rna_XrActionMap_new(xr_session_state, name, replace_existing);
}

void XrActionMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	const char * name;
	bool replace_existing;
	struct XrActionMap *actionmap;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	name = *((const char * *)_data);
	_data += 8;
	replace_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	actionmap = rna_XrActionMap_new(xr_session_state, name, replace_existing);
	*((struct XrActionMap **)_retdata) = actionmap;
}

struct XrActionMap *XrActionMaps_new_from_actionmap_func(struct PointerRNA *xr_session_state, struct XrActionMap *actionmap)
{
	return rna_XrActionMap_new_from_actionmap(xr_session_state, actionmap);
}

void XrActionMaps_new_from_actionmap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	struct XrActionMap *actionmap;
	struct XrActionMap *result;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	actionmap = *((struct XrActionMap **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_XrActionMap_new_from_actionmap(xr_session_state, actionmap);
	*((struct XrActionMap **)_retdata) = result;
}

void XrActionMaps_remove_func(ReportList *reports, struct PointerRNA *xr_session_state, struct PointerRNA *actionmap)
{
	rna_XrActionMap_remove(reports, xr_session_state, actionmap);
}

void XrActionMaps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	struct PointerRNA *actionmap;
	char *_data;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	actionmap = *((struct PointerRNA **)_data);
	
	rna_XrActionMap_remove(reports, xr_session_state, actionmap);
}

struct XrActionMap *XrActionMaps_find_func(struct PointerRNA *xr_session_state, const char * name)
{
	return rna_XrActionMap_find(xr_session_state, name);
}

void XrActionMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *xr_session_state;
	const char * name;
	struct XrActionMap *actionmap;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	xr_session_state = ((struct PointerRNA *)_data);
	_data += 24;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	actionmap = rna_XrActionMap_find(xr_session_state, name);
	*((struct XrActionMap **)_retdata) = actionmap;
}

/* Repeated prototypes to detect errors */

struct XrActionMap *rna_XrActionMap_new(struct PointerRNA *xr_session_state, const char * name, bool replace_existing);
struct XrActionMap *rna_XrActionMap_new_from_actionmap(struct PointerRNA *xr_session_state, struct XrActionMap *actionmap);
void rna_XrActionMap_remove(ReportList *reports, struct PointerRNA *xr_session_state, struct PointerRNA *actionmap);
struct XrActionMap *rna_XrActionMap_find(struct PointerRNA *xr_session_state, const char * name);


/* XR Action Map */
CollectionPropertyRNA rna_XrActionMap_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMap_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMap_rna_properties_begin, XrActionMap_rna_properties_next, XrActionMap_rna_properties_end, XrActionMap_rna_properties_get, NULL, NULL, XrActionMap_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrActionMap_rna_type = {
	{(PropertyRNA *)&rna_XrActionMap_name, (PropertyRNA *)&rna_XrActionMap_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrActionMap_name = {
	{(PropertyRNA *)&rna_XrActionMap_actionmap_items, (PropertyRNA *)&rna_XrActionMap_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the action map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_XrActionMap_name_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMap_name_get, XrActionMap_name_length, XrActionMap_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_XrActionMap_actionmap_items = {
	{(PropertyRNA *)&rna_XrActionMap_selected_item, (PropertyRNA *)&rna_XrActionMap_name,
	-1, "actionmap_items", 0, 0, 0, 0, 0, "Items",
	"Items in the action map, mapping an XR event to an operator, pose, or haptic output",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_XrActionMapItems},
	XrActionMap_actionmap_items_begin, XrActionMap_actionmap_items_next, XrActionMap_actionmap_items_end, XrActionMap_actionmap_items_get, XrActionMap_actionmap_items_length, XrActionMap_actionmap_items_lookup_int, XrActionMap_actionmap_items_lookup_string, NULL, &RNA_XrActionMapItem
};

IntPropertyRNA rna_XrActionMap_selected_item = {
	{NULL, (PropertyRNA *)&rna_XrActionMap_actionmap_items,
	-1, "selected_item", 1, 0, 0, 4, 0, "Selected Item",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMap, selitem), 1, NULL},
	XrActionMap_selected_item_get, XrActionMap_selected_item_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

StructRNA RNA_XrActionMap = {
	{(ContainerRNA *)&RNA_XrActionMapItems, (ContainerRNA *)&RNA_MaskLayers,
	NULL,
	{(PropertyRNA *)&rna_XrActionMap_rna_properties, (PropertyRNA *)&rna_XrActionMap_selected_item}},
	"XrActionMap", NULL, NULL, 516, NULL, "XR Action Map",
	"",
	"*", 17,
	(PropertyRNA *)&rna_XrActionMap_name, (PropertyRNA *)&rna_XrActionMap_rna_properties,
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

/* XR Action Map Items */
CollectionPropertyRNA rna_XrActionMapItems_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapItems_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItems_rna_properties_begin, XrActionMapItems_rna_properties_next, XrActionMapItems_rna_properties_end, XrActionMapItems_rna_properties_get, NULL, NULL, XrActionMapItems_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapItems_rna_type = {
	{NULL, (PropertyRNA *)&rna_XrActionMapItems_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItems_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapItems_new_name = {
	{(PropertyRNA *)&rna_XrActionMapItems_new_replace_existing, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name of the action map item",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_XrActionMapItems_new_replace_existing = {
	{(PropertyRNA *)&rna_XrActionMapItems_new_item, (PropertyRNA *)&rna_XrActionMapItems_new_name,
	-1, "replace_existing", 1, 0, 1, 0, 0, "Replace Existing",
	"Replace any existing item with the same name",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_XrActionMapItems_new_item = {
	{NULL, (PropertyRNA *)&rna_XrActionMapItems_new_replace_existing,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"Added action map item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_new_func = {
	{(FunctionRNA *)&rna_XrActionMapItems_new_from_item_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapItems_new_name, (PropertyRNA *)&rna_XrActionMapItems_new_item}},
	"new", 0, "new",
	XrActionMapItems_new_call,
	(PropertyRNA *)&rna_XrActionMapItems_new_item
};

PointerPropertyRNA rna_XrActionMapItems_new_from_item_item = {
	{(PropertyRNA *)&rna_XrActionMapItems_new_from_item_result, NULL,
	-1, "item", 8650752, 0, 1, 0, 0, "Item",
	"Item to use as a reference",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

PointerPropertyRNA rna_XrActionMapItems_new_from_item_result = {
	{NULL, (PropertyRNA *)&rna_XrActionMapItems_new_from_item_item,
	-1, "result", 8388608, 0, 2, 0, 0, "Item",
	"Added action map item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_new_from_item_func = {
	{(FunctionRNA *)&rna_XrActionMapItems_remove_func, (FunctionRNA *)&rna_XrActionMapItems_new_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapItems_new_from_item_item, (PropertyRNA *)&rna_XrActionMapItems_new_from_item_result}},
	"new_from_item", 0, "new_from_item",
	XrActionMapItems_new_from_item_call,
	(PropertyRNA *)&rna_XrActionMapItems_new_from_item_result
};

PointerPropertyRNA rna_XrActionMapItems_remove_item = {
	{NULL, NULL,
	-1, "item", 262144, 0, 5, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_remove_func = {
	{(FunctionRNA *)&rna_XrActionMapItems_find_func, (FunctionRNA *)&rna_XrActionMapItems_new_from_item_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapItems_remove_item, (PropertyRNA *)&rna_XrActionMapItems_remove_item}},
	"remove", 16, "remove",
	XrActionMapItems_remove_call,
	NULL
};

StringPropertyRNA rna_XrActionMapItems_find_name = {
	{(PropertyRNA *)&rna_XrActionMapItems_find_item, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_XrActionMapItems_find_item = {
	{NULL, (PropertyRNA *)&rna_XrActionMapItems_find_name,
	-1, "item", 8388608, 0, 2, 0, 0, "Item",
	"The action map item with the given name",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

FunctionRNA rna_XrActionMapItems_find_func = {
	{NULL, (FunctionRNA *)&rna_XrActionMapItems_remove_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapItems_find_name, (PropertyRNA *)&rna_XrActionMapItems_find_item}},
	"find", 0, "find",
	XrActionMapItems_find_call,
	(PropertyRNA *)&rna_XrActionMapItems_find_item
};

StructRNA RNA_XrActionMapItems = {
	{(ContainerRNA *)&RNA_XrUserPath, (ContainerRNA *)&RNA_XrActionMap,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapItems_rna_properties, (PropertyRNA *)&rna_XrActionMapItems_rna_type}},
	"XrActionMapItems", NULL, NULL, 516, NULL, "XR Action Map Items",
	"Collection of XR action map items",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrActionMapItems_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_XrActionMapItems_new_func, (FunctionRNA *)&rna_XrActionMapItems_find_func}
};

/* XR User Path */
CollectionPropertyRNA rna_XrUserPath_rna_properties = {
	{(PropertyRNA *)&rna_XrUserPath_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrUserPath_rna_properties_begin, XrUserPath_rna_properties_next, XrUserPath_rna_properties_end, XrUserPath_rna_properties_get, NULL, NULL, XrUserPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrUserPath_rna_type = {
	{(PropertyRNA *)&rna_XrUserPath_path, (PropertyRNA *)&rna_XrUserPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrUserPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrUserPath_path = {
	{NULL, (PropertyRNA *)&rna_XrUserPath_rna_type,
	-1, "path", 262145, 0, 0, 0, 0, "Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrUserPath_path_get, XrUserPath_path_length, XrUserPath_path_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StructRNA RNA_XrUserPath = {
	{(ContainerRNA *)&RNA_XrActionMapItem, (ContainerRNA *)&RNA_XrActionMapItems,
	NULL,
	{(PropertyRNA *)&rna_XrUserPath_rna_properties, (PropertyRNA *)&rna_XrUserPath_path}},
	"XrUserPath", NULL, NULL, 516, NULL, "XR User Path",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrUserPath_rna_properties,
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

/* XR Action Map Item */
CollectionPropertyRNA rna_XrActionMapItem_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapItem_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_rna_properties_begin, XrActionMapItem_rna_properties_next, XrActionMapItem_rna_properties_end, XrActionMapItem_rna_properties_get, NULL, NULL, XrActionMapItem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapItem_rna_type = {
	{(PropertyRNA *)&rna_XrActionMapItem_name, (PropertyRNA *)&rna_XrActionMapItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapItem_name = {
	{(PropertyRNA *)&rna_XrActionMapItem_type, (PropertyRNA *)&rna_XrActionMapItem_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the action map item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_XrActionMapItem_name_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_name_get, XrActionMapItem_name_length, XrActionMapItem_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_XrActionMapItem_type_items[5] = {
	{2, "FLOAT", 0, "Float", "Float action, representing either a digital or analog button"},
	{3, "VECTOR2D", 0, "Vector2D", "2D float vector action, representing a thumbstick or trackpad"},
	{4, "POSE", 0, "Pose", "3D pose action, representing a controller\'s location and rotation"},
	{100, "VIBRATION", 0, "Vibration", "Haptic vibration output action, to be applied with a duration, frequency, and amplitude"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrActionMapItem_type = {
	{(PropertyRNA *)&rna_XrActionMapItem_user_paths, (PropertyRNA *)&rna_XrActionMapItem_name,
	-1, "type", 1, 0, 0, 4, 0, "Type",
	"Action type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_XrActionMapItem_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, type), 2, NULL},
	XrActionMapItem_type_get, XrActionMapItem_type_set, NULL, NULL, NULL, rna_XrActionMapItem_type_items, 4, 2
};

CollectionPropertyRNA rna_XrActionMapItem_user_paths = {
	{(PropertyRNA *)&rna_XrActionMapItem_op, (PropertyRNA *)&rna_XrActionMapItem_type,
	-1, "user_paths", 0, 0, 0, 0, 0, "User Paths",
	"OpenXR user paths",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_XrUserPaths},
	XrActionMapItem_user_paths_begin, XrActionMapItem_user_paths_next, XrActionMapItem_user_paths_end, XrActionMapItem_user_paths_get, XrActionMapItem_user_paths_length, XrActionMapItem_user_paths_lookup_int, NULL, NULL, &RNA_XrUserPath
};

StringPropertyRNA rna_XrActionMapItem_op = {
	{(PropertyRNA *)&rna_XrActionMapItem_op_name, (PropertyRNA *)&rna_XrActionMapItem_user_paths,
	-1, "op", 262145, 0, 0, 0, 0, "Operator",
	"Identifier of operator to call on action event",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_XrActionMapItem_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_op_get, XrActionMapItem_op_length, XrActionMapItem_op_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrActionMapItem_op_name = {
	{(PropertyRNA *)&rna_XrActionMapItem_op_properties, (PropertyRNA *)&rna_XrActionMapItem_op,
	-1, "op_name", 262144, 0, 0, 0, 0, "Operator Name",
	"Name of operator (translated) to call on action event",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_op_name_get, XrActionMapItem_op_name_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_XrActionMapItem_op_properties = {
	{(PropertyRNA *)&rna_XrActionMapItem_op_mode, (PropertyRNA *)&rna_XrActionMapItem_op_name,
	-1, "op_properties", 8388608, 0, 0, 0, 0, "Operator Properties",
	"Properties to set when the operator is called",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_XrActionMapItem_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_op_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

static const EnumPropertyItem rna_XrActionMapItem_op_mode_items[4] = {
	{0, "PRESS", 0, "Press", "Execute operator on button press (non-modal operators only)"},
	{1, "RELEASE", 0, "Release", "Execute operator on button release (non-modal operators only)"},
	{2, "MODAL", 0, "Modal", "Use modal execution (modal operators only)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrActionMapItem_op_mode = {
	{(PropertyRNA *)&rna_XrActionMapItem_bimanual, (PropertyRNA *)&rna_XrActionMapItem_op_properties,
	-1, "op_mode", 1, 0, 0, 4, 0, "Operator Mode",
	"Operator execution mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, op_flag), 1, NULL},
	XrActionMapItem_op_mode_get, XrActionMapItem_op_mode_set, NULL, NULL, NULL, rna_XrActionMapItem_op_mode_items, 3, 0
};

BoolPropertyRNA rna_XrActionMapItem_bimanual = {
	{(PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_grip, (PropertyRNA *)&rna_XrActionMapItem_op_mode,
	-1, "bimanual", 1, 0, 0, 0, 0, "Bimanual",
	"The action depends on the states/poses of both user paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_bimanual_get, XrActionMapItem_bimanual_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_grip = {
	{(PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_aim, (PropertyRNA *)&rna_XrActionMapItem_bimanual,
	-1, "pose_is_controller_grip", 1, 0, 0, 0, 0, "Is Controller Grip",
	"The action poses will be used for the VR controller grips",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_pose_is_controller_grip_get, XrActionMapItem_pose_is_controller_grip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrActionMapItem_pose_is_controller_aim = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_name, (PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_grip,
	-1, "pose_is_controller_aim", 1, 0, 0, 0, 0, "Is Controller Aim",
	"The action poses will be used for the VR controller aims",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_pose_is_controller_aim_get, XrActionMapItem_pose_is_controller_aim_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_XrActionMapItem_haptic_name = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_match_user_paths, (PropertyRNA *)&rna_XrActionMapItem_pose_is_controller_aim,
	-1, "haptic_name", 262145, 0, 0, 0, 0, "Haptic Name",
	"Name of the haptic action to apply when executing this action",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_haptic_name_get, XrActionMapItem_haptic_name_length, XrActionMapItem_haptic_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_XrActionMapItem_haptic_match_user_paths = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_duration, (PropertyRNA *)&rna_XrActionMapItem_haptic_name,
	-1, "haptic_match_user_paths", 1, 0, 0, 0, 0, "Haptic Match User Paths",
	"Apply haptics to the same user paths for the haptic action and this action",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_haptic_match_user_paths_get, XrActionMapItem_haptic_match_user_paths_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_XrActionMapItem_haptic_duration = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_frequency, (PropertyRNA *)&rna_XrActionMapItem_haptic_match_user_paths,
	-1, "haptic_duration", 1, 0, 0, 4, 0, "Haptic Duration",
	"Haptic duration in seconds. 0.0 is the minimum supported duration",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, haptic_duration), 5, NULL},
	XrActionMapItem_haptic_duration_get, XrActionMapItem_haptic_duration_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_XrActionMapItem_haptic_frequency = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_amplitude, (PropertyRNA *)&rna_XrActionMapItem_haptic_duration,
	-1, "haptic_frequency", 1, 0, 0, 4, 0, "Haptic Frequency",
	"Frequency of the haptic vibration in hertz. 0.0 specifies the OpenXR runtime\'s default frequency",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, haptic_frequency), 5, NULL},
	XrActionMapItem_haptic_frequency_get, XrActionMapItem_haptic_frequency_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_XrActionMapItem_haptic_amplitude = {
	{(PropertyRNA *)&rna_XrActionMapItem_haptic_mode, (PropertyRNA *)&rna_XrActionMapItem_haptic_frequency,
	-1, "haptic_amplitude", 1, 0, 0, 4, 0, "Haptic Amplitude",
	"Intensity of the haptic vibration, ranging from 0.0 to 1.0",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, haptic_amplitude), 5, NULL},
	XrActionMapItem_haptic_amplitude_get, XrActionMapItem_haptic_amplitude_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_XrActionMapItem_haptic_mode_items[5] = {
	{2, "PRESS", 0, "Press", "Apply haptics on button press"},
	{4, "RELEASE", 0, "Release", "Apply haptics on button release"},
	{6, "PRESS_RELEASE", 0, "Press Release", "Apply haptics on button press and release"},
	{8, "REPEAT", 0, "Repeat", "Apply haptics repeatedly for the duration of the button press"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrActionMapItem_haptic_mode = {
	{(PropertyRNA *)&rna_XrActionMapItem_bindings, (PropertyRNA *)&rna_XrActionMapItem_haptic_amplitude,
	-1, "haptic_mode", 1, 0, 0, 0, 0, "Haptic mode",
	"Haptic application mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapItem_haptic_mode_get, XrActionMapItem_haptic_mode_set, NULL, NULL, NULL, rna_XrActionMapItem_haptic_mode_items, 4, 2
};

CollectionPropertyRNA rna_XrActionMapItem_bindings = {
	{(PropertyRNA *)&rna_XrActionMapItem_selected_binding, (PropertyRNA *)&rna_XrActionMapItem_haptic_mode,
	-1, "bindings", 0, 0, 0, 0, 0, "Bindings",
	"Bindings for the action map item, mapping the action to an XR input",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_XrActionMapBindings},
	XrActionMapItem_bindings_begin, XrActionMapItem_bindings_next, XrActionMapItem_bindings_end, XrActionMapItem_bindings_get, XrActionMapItem_bindings_length, XrActionMapItem_bindings_lookup_int, XrActionMapItem_bindings_lookup_string, NULL, &RNA_XrActionMapBinding
};

IntPropertyRNA rna_XrActionMapItem_selected_binding = {
	{NULL, (PropertyRNA *)&rna_XrActionMapItem_bindings,
	-1, "selected_binding", 1, 0, 0, 4, 0, "Selected Binding",
	"Currently selected binding",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapItem, selbinding), 1, NULL},
	XrActionMapItem_selected_binding_get, XrActionMapItem_selected_binding_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

StructRNA RNA_XrActionMapItem = {
	{(ContainerRNA *)&RNA_XrUserPaths, (ContainerRNA *)&RNA_XrUserPath,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapItem_rna_properties, (PropertyRNA *)&rna_XrActionMapItem_selected_binding}},
	"XrActionMapItem", NULL, NULL, 516, NULL, "XR Action Map Item",
	"",
	"*", 17,
	(PropertyRNA *)&rna_XrActionMapItem_name, (PropertyRNA *)&rna_XrActionMapItem_rna_properties,
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

/* XR User Paths */
CollectionPropertyRNA rna_XrUserPaths_rna_properties = {
	{(PropertyRNA *)&rna_XrUserPaths_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrUserPaths_rna_properties_begin, XrUserPaths_rna_properties_next, XrUserPaths_rna_properties_end, XrUserPaths_rna_properties_get, NULL, NULL, XrUserPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrUserPaths_rna_type = {
	{NULL, (PropertyRNA *)&rna_XrUserPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrUserPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrUserPaths_new_path = {
	{(PropertyRNA *)&rna_XrUserPaths_new_user_path, NULL,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_XrUserPaths_new_user_path = {
	{NULL, (PropertyRNA *)&rna_XrUserPaths_new_path,
	-1, "user_path", 8388608, 0, 2, 0, 0, "User Path",
	"Added user path",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrUserPath
};

FunctionRNA rna_XrUserPaths_new_func = {
	{(FunctionRNA *)&rna_XrUserPaths_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_XrUserPaths_new_path, (PropertyRNA *)&rna_XrUserPaths_new_user_path}},
	"new", 0, "new",
	XrUserPaths_new_call,
	(PropertyRNA *)&rna_XrUserPaths_new_user_path
};

PointerPropertyRNA rna_XrUserPaths_remove_user_path = {
	{NULL, NULL,
	-1, "user_path", 262144, 0, 5, 0, 0, "User Path",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrUserPath
};

FunctionRNA rna_XrUserPaths_remove_func = {
	{(FunctionRNA *)&rna_XrUserPaths_find_func, (FunctionRNA *)&rna_XrUserPaths_new_func,
	NULL,
	{(PropertyRNA *)&rna_XrUserPaths_remove_user_path, (PropertyRNA *)&rna_XrUserPaths_remove_user_path}},
	"remove", 0, "remove",
	XrUserPaths_remove_call,
	NULL
};

StringPropertyRNA rna_XrUserPaths_find_path = {
	{(PropertyRNA *)&rna_XrUserPaths_find_user_path, NULL,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_XrUserPaths_find_user_path = {
	{NULL, (PropertyRNA *)&rna_XrUserPaths_find_path,
	-1, "user_path", 8388608, 0, 2, 0, 0, "User Path",
	"The user path with the given path",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrUserPath
};

FunctionRNA rna_XrUserPaths_find_func = {
	{NULL, (FunctionRNA *)&rna_XrUserPaths_remove_func,
	NULL,
	{(PropertyRNA *)&rna_XrUserPaths_find_path, (PropertyRNA *)&rna_XrUserPaths_find_user_path}},
	"find", 0, "find",
	XrUserPaths_find_call,
	(PropertyRNA *)&rna_XrUserPaths_find_user_path
};

StructRNA RNA_XrUserPaths = {
	{(ContainerRNA *)&RNA_XrActionMapBindings, (ContainerRNA *)&RNA_XrActionMapItem,
	NULL,
	{(PropertyRNA *)&rna_XrUserPaths_rna_properties, (PropertyRNA *)&rna_XrUserPaths_rna_type}},
	"XrUserPaths", NULL, NULL, 516, NULL, "XR User Paths",
	"Collection of OpenXR user paths",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrUserPaths_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_XrUserPaths_new_func, (FunctionRNA *)&rna_XrUserPaths_find_func}
};

/* XR Action Map Bindings */
CollectionPropertyRNA rna_XrActionMapBindings_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapBindings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBindings_rna_properties_begin, XrActionMapBindings_rna_properties_next, XrActionMapBindings_rna_properties_end, XrActionMapBindings_rna_properties_get, NULL, NULL, XrActionMapBindings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapBindings_rna_type = {
	{NULL, (PropertyRNA *)&rna_XrActionMapBindings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBindings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapBindings_new_name = {
	{(PropertyRNA *)&rna_XrActionMapBindings_new_replace_existing, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name of the action map binding",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_XrActionMapBindings_new_replace_existing = {
	{(PropertyRNA *)&rna_XrActionMapBindings_new_binding, (PropertyRNA *)&rna_XrActionMapBindings_new_name,
	-1, "replace_existing", 1, 0, 1, 0, 0, "Replace Existing",
	"Replace any existing binding with the same name",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_XrActionMapBindings_new_binding = {
	{NULL, (PropertyRNA *)&rna_XrActionMapBindings_new_replace_existing,
	-1, "binding", 8388608, 0, 2, 0, 0, "Binding",
	"Added action map binding",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_new_func = {
	{(FunctionRNA *)&rna_XrActionMapBindings_new_from_binding_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapBindings_new_name, (PropertyRNA *)&rna_XrActionMapBindings_new_binding}},
	"new", 0, "new",
	XrActionMapBindings_new_call,
	(PropertyRNA *)&rna_XrActionMapBindings_new_binding
};

PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_binding = {
	{(PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_result, NULL,
	-1, "binding", 8650752, 0, 1, 0, 0, "Binding",
	"Binding to use as a reference",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapBinding
};

PointerPropertyRNA rna_XrActionMapBindings_new_from_binding_result = {
	{NULL, (PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_binding,
	-1, "result", 8388608, 0, 2, 0, 0, "Binding",
	"Added action map binding",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_new_from_binding_func = {
	{(FunctionRNA *)&rna_XrActionMapBindings_remove_func, (FunctionRNA *)&rna_XrActionMapBindings_new_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_binding, (PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_result}},
	"new_from_binding", 0, "new_from_binding",
	XrActionMapBindings_new_from_binding_call,
	(PropertyRNA *)&rna_XrActionMapBindings_new_from_binding_result
};

PointerPropertyRNA rna_XrActionMapBindings_remove_binding = {
	{NULL, NULL,
	-1, "binding", 262144, 0, 5, 0, 0, "Binding",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_remove_func = {
	{(FunctionRNA *)&rna_XrActionMapBindings_find_func, (FunctionRNA *)&rna_XrActionMapBindings_new_from_binding_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapBindings_remove_binding, (PropertyRNA *)&rna_XrActionMapBindings_remove_binding}},
	"remove", 16, "remove",
	XrActionMapBindings_remove_call,
	NULL
};

StringPropertyRNA rna_XrActionMapBindings_find_name = {
	{(PropertyRNA *)&rna_XrActionMapBindings_find_binding, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_XrActionMapBindings_find_binding = {
	{NULL, (PropertyRNA *)&rna_XrActionMapBindings_find_name,
	-1, "binding", 8388608, 0, 2, 0, 0, "Binding",
	"The action map binding with the given name",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapBinding
};

FunctionRNA rna_XrActionMapBindings_find_func = {
	{NULL, (FunctionRNA *)&rna_XrActionMapBindings_remove_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapBindings_find_name, (PropertyRNA *)&rna_XrActionMapBindings_find_binding}},
	"find", 0, "find",
	XrActionMapBindings_find_call,
	(PropertyRNA *)&rna_XrActionMapBindings_find_binding
};

StructRNA RNA_XrActionMapBindings = {
	{(ContainerRNA *)&RNA_XrComponentPath, (ContainerRNA *)&RNA_XrUserPaths,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapBindings_rna_properties, (PropertyRNA *)&rna_XrActionMapBindings_rna_type}},
	"XrActionMapBindings", NULL, NULL, 516, NULL, "XR Action Map Bindings",
	"Collection of XR action map bindings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrActionMapBindings_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_XrActionMapBindings_new_func, (FunctionRNA *)&rna_XrActionMapBindings_find_func}
};

/* XR Component Path */
CollectionPropertyRNA rna_XrComponentPath_rna_properties = {
	{(PropertyRNA *)&rna_XrComponentPath_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrComponentPath_rna_properties_begin, XrComponentPath_rna_properties_next, XrComponentPath_rna_properties_end, XrComponentPath_rna_properties_get, NULL, NULL, XrComponentPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrComponentPath_rna_type = {
	{(PropertyRNA *)&rna_XrComponentPath_path, (PropertyRNA *)&rna_XrComponentPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrComponentPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrComponentPath_path = {
	{NULL, (PropertyRNA *)&rna_XrComponentPath_rna_type,
	-1, "path", 262145, 0, 0, 0, 0, "Path",
	"OpenXR component path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {192, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrComponentPath_path_get, XrComponentPath_path_length, XrComponentPath_path_set, NULL, NULL, NULL, NULL, 0, 192, ""
};

StructRNA RNA_XrComponentPath = {
	{(ContainerRNA *)&RNA_XrActionMapBinding, (ContainerRNA *)&RNA_XrActionMapBindings,
	NULL,
	{(PropertyRNA *)&rna_XrComponentPath_rna_properties, (PropertyRNA *)&rna_XrComponentPath_path}},
	"XrComponentPath", NULL, NULL, 516, NULL, "XR Component Path",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrComponentPath_rna_properties,
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

/* XR Action Map Binding */
CollectionPropertyRNA rna_XrActionMapBinding_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMapBinding_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBinding_rna_properties_begin, XrActionMapBinding_rna_properties_next, XrActionMapBinding_rna_properties_end, XrActionMapBinding_rna_properties_get, NULL, NULL, XrActionMapBinding_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrActionMapBinding_rna_type = {
	{(PropertyRNA *)&rna_XrActionMapBinding_name, (PropertyRNA *)&rna_XrActionMapBinding_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBinding_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrActionMapBinding_name = {
	{(PropertyRNA *)&rna_XrActionMapBinding_profile, (PropertyRNA *)&rna_XrActionMapBinding_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the action map binding",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_XrActionMapBinding_name_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBinding_name_get, XrActionMapBinding_name_length, XrActionMapBinding_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrActionMapBinding_profile = {
	{(PropertyRNA *)&rna_XrActionMapBinding_component_paths, (PropertyRNA *)&rna_XrActionMapBinding_name,
	-1, "profile", 262145, 0, 0, 0, 0, "Profile",
	"OpenXR interaction profile path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBinding_profile_get, XrActionMapBinding_profile_length, XrActionMapBinding_profile_set, NULL, NULL, NULL, NULL, 0, 256, ""
};

CollectionPropertyRNA rna_XrActionMapBinding_component_paths = {
	{(PropertyRNA *)&rna_XrActionMapBinding_threshold, (PropertyRNA *)&rna_XrActionMapBinding_profile,
	-1, "component_paths", 0, 0, 0, 0, 0, "Component Paths",
	"OpenXR component paths",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_XrComponentPaths},
	XrActionMapBinding_component_paths_begin, XrActionMapBinding_component_paths_next, XrActionMapBinding_component_paths_end, XrActionMapBinding_component_paths_get, XrActionMapBinding_component_paths_length, XrActionMapBinding_component_paths_lookup_int, NULL, NULL, &RNA_XrComponentPath
};

FloatPropertyRNA rna_XrActionMapBinding_threshold = {
	{(PropertyRNA *)&rna_XrActionMapBinding_axis0_region, (PropertyRNA *)&rna_XrActionMapBinding_component_paths,
	-1, "threshold", 1, 0, 0, 4, 0, "Threshold",
	"Input threshold for button/axis actions",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapBinding, float_threshold), 5, NULL},
	XrActionMapBinding_threshold_get, XrActionMapBinding_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_XrActionMapBinding_axis0_region_items[4] = {
	{0, "ANY", 0, "Any", "Use any axis region for operator execution"},
	{1, "POSITIVE", 0, "Positive", "Use positive axis region only for operator execution"},
	{2, "NEGATIVE", 0, "Negative", "Use negative axis region only for operator execution"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrActionMapBinding_axis0_region = {
	{(PropertyRNA *)&rna_XrActionMapBinding_axis1_region, (PropertyRNA *)&rna_XrActionMapBinding_threshold,
	-1, "axis0_region", 1, 0, 0, 0, 0, "Axis 0 Region",
	"Action execution region for the first input axis",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBinding_axis0_region_get, XrActionMapBinding_axis0_region_set, NULL, NULL, NULL, rna_XrActionMapBinding_axis0_region_items, 3, 0
};

static const EnumPropertyItem rna_XrActionMapBinding_axis1_region_items[4] = {
	{0, "ANY", 0, "Any", "Use any axis region for operator execution"},
	{4, "POSITIVE", 0, "Positive", "Use positive axis region only for operator execution"},
	{8, "NEGATIVE", 0, "Negative", "Use negative axis region only for operator execution"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrActionMapBinding_axis1_region = {
	{(PropertyRNA *)&rna_XrActionMapBinding_pose_location, (PropertyRNA *)&rna_XrActionMapBinding_axis0_region,
	-1, "axis1_region", 1, 0, 0, 0, 0, "Axis 1 Region",
	"Action execution region for the second input axis",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMapBinding_axis1_region_get, XrActionMapBinding_axis1_region_set, NULL, NULL, NULL, rna_XrActionMapBinding_axis1_region_items, 3, 0
};

static float rna_XrActionMapBinding_pose_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrActionMapBinding_pose_location = {
	{(PropertyRNA *)&rna_XrActionMapBinding_pose_rotation, (PropertyRNA *)&rna_XrActionMapBinding_axis1_region,
	-1, "pose_location", 1, 0, 0, 4, 0, "Pose Location Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapBinding, pose_location), 5, NULL},
	NULL, NULL, XrActionMapBinding_pose_location_get, XrActionMapBinding_pose_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrActionMapBinding_pose_location_default
};

static float rna_XrActionMapBinding_pose_rotation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrActionMapBinding_pose_rotation = {
	{NULL, (PropertyRNA *)&rna_XrActionMapBinding_pose_location,
	-1, "pose_rotation", 1, 0, 0, 4, 0, "Pose Rotation Offset",
	"",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrActionMapBinding, pose_rotation), 5, NULL},
	NULL, NULL, XrActionMapBinding_pose_rotation_get, XrActionMapBinding_pose_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrActionMapBinding_pose_rotation_default
};

StructRNA RNA_XrActionMapBinding = {
	{(ContainerRNA *)&RNA_XrComponentPaths, (ContainerRNA *)&RNA_XrComponentPath,
	NULL,
	{(PropertyRNA *)&rna_XrActionMapBinding_rna_properties, (PropertyRNA *)&rna_XrActionMapBinding_pose_rotation}},
	"XrActionMapBinding", NULL, NULL, 516, NULL, "XR Action Map Binding",
	"Binding in an XR action map item",
	"*", 17,
	(PropertyRNA *)&rna_XrActionMapBinding_name, (PropertyRNA *)&rna_XrActionMapBinding_rna_properties,
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

/* XR Component Paths */
CollectionPropertyRNA rna_XrComponentPaths_rna_properties = {
	{(PropertyRNA *)&rna_XrComponentPaths_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrComponentPaths_rna_properties_begin, XrComponentPaths_rna_properties_next, XrComponentPaths_rna_properties_end, XrComponentPaths_rna_properties_get, NULL, NULL, XrComponentPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrComponentPaths_rna_type = {
	{NULL, (PropertyRNA *)&rna_XrComponentPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrComponentPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrComponentPaths_new_path = {
	{(PropertyRNA *)&rna_XrComponentPaths_new_component_path, NULL,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR component path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 192, ""
};

PointerPropertyRNA rna_XrComponentPaths_new_component_path = {
	{NULL, (PropertyRNA *)&rna_XrComponentPaths_new_path,
	-1, "component_path", 8388608, 0, 2, 0, 0, "Component Path",
	"Added component path",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrComponentPath
};

FunctionRNA rna_XrComponentPaths_new_func = {
	{(FunctionRNA *)&rna_XrComponentPaths_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_XrComponentPaths_new_path, (PropertyRNA *)&rna_XrComponentPaths_new_component_path}},
	"new", 0, "new",
	XrComponentPaths_new_call,
	(PropertyRNA *)&rna_XrComponentPaths_new_component_path
};

PointerPropertyRNA rna_XrComponentPaths_remove_component_path = {
	{NULL, NULL,
	-1, "component_path", 262144, 0, 5, 0, 0, "Component Path",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrComponentPath
};

FunctionRNA rna_XrComponentPaths_remove_func = {
	{(FunctionRNA *)&rna_XrComponentPaths_find_func, (FunctionRNA *)&rna_XrComponentPaths_new_func,
	NULL,
	{(PropertyRNA *)&rna_XrComponentPaths_remove_component_path, (PropertyRNA *)&rna_XrComponentPaths_remove_component_path}},
	"remove", 0, "remove",
	XrComponentPaths_remove_call,
	NULL
};

StringPropertyRNA rna_XrComponentPaths_find_path = {
	{(PropertyRNA *)&rna_XrComponentPaths_find_component_path, NULL,
	-1, "path", 262145, 0, 1, 0, 0, "Path",
	"OpenXR component path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 192, ""
};

PointerPropertyRNA rna_XrComponentPaths_find_component_path = {
	{NULL, (PropertyRNA *)&rna_XrComponentPaths_find_path,
	-1, "component_path", 8388608, 0, 2, 0, 0, "Component Path",
	"The component path with the given path",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrComponentPath
};

FunctionRNA rna_XrComponentPaths_find_func = {
	{NULL, (FunctionRNA *)&rna_XrComponentPaths_remove_func,
	NULL,
	{(PropertyRNA *)&rna_XrComponentPaths_find_path, (PropertyRNA *)&rna_XrComponentPaths_find_component_path}},
	"find", 0, "find",
	XrComponentPaths_find_call,
	(PropertyRNA *)&rna_XrComponentPaths_find_component_path
};

StructRNA RNA_XrComponentPaths = {
	{(ContainerRNA *)&RNA_XrSessionSettings, (ContainerRNA *)&RNA_XrActionMapBinding,
	NULL,
	{(PropertyRNA *)&rna_XrComponentPaths_rna_properties, (PropertyRNA *)&rna_XrComponentPaths_rna_type}},
	"XrComponentPaths", NULL, NULL, 516, NULL, "XR Component Paths",
	"Collection of OpenXR component paths",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrComponentPaths_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_XrComponentPaths_new_func, (FunctionRNA *)&rna_XrComponentPaths_find_func}
};

/* XR Session Settings */
CollectionPropertyRNA rna_XrSessionSettings_rna_properties = {
	{(PropertyRNA *)&rna_XrSessionSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_rna_properties_begin, XrSessionSettings_rna_properties_next, XrSessionSettings_rna_properties_end, XrSessionSettings_rna_properties_get, NULL, NULL, XrSessionSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrSessionSettings_rna_type = {
	{(PropertyRNA *)&rna_XrSessionSettings_shading, (PropertyRNA *)&rna_XrSessionSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_XrSessionSettings_shading = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_type, (PropertyRNA *)&rna_XrSessionSettings_rna_type,
	-1, "shading", 8650752, 0, 0, 0, 0, "Shading Settings",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_shading_get, NULL, NULL, NULL,&RNA_View3DShading
};

static const EnumPropertyItem rna_XrSessionSettings_base_pose_type_items[4] = {
	{0, "SCENE_CAMERA", 0, "Scene Camera", "Follow the active scene camera to define the VR view\'s base pose"},
	{1, "OBJECT", 0, "Object", "Follow the transformation of an object to define the VR view\'s base pose"},
	{2, "CUSTOM", 0, "Custom", "Follow a custom transformation to define the VR view\'s base pose"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrSessionSettings_base_pose_type = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_object, (PropertyRNA *)&rna_XrSessionSettings_shading,
	-1, "base_pose_type", 1, 0, 0, 4, 0, "Base Pose Type",
	"Define where the location and rotation for the VR view come from, to which translation and rotation deltas from the VR headset will be applied to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_pose_type), 2, NULL},
	XrSessionSettings_base_pose_type_get, XrSessionSettings_base_pose_type_set, NULL, NULL, NULL, rna_XrSessionSettings_base_pose_type_items, 3, 0
};

PointerPropertyRNA rna_XrSessionSettings_base_pose_object = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_location, (PropertyRNA *)&rna_XrSessionSettings_base_pose_type,
	-1, "base_pose_object", 8388737, 0, 0, 0, 0, "Base Pose Object",
	"Object to take the location and rotation to which translation and rotation deltas from the VR headset will be applied to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_base_pose_object_get, XrSessionSettings_base_pose_object_set, NULL, NULL,&RNA_Object
};

static float rna_XrSessionSettings_base_pose_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionSettings_base_pose_location = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_pose_angle, (PropertyRNA *)&rna_XrSessionSettings_base_pose_object,
	-1, "base_pose_location", 1, 0, 0, 4, 0, "Base Pose Location",
	"Coordinates to apply translation deltas from the VR headset to",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_pose_location), 5, NULL},
	NULL, NULL, XrSessionSettings_base_pose_location_get, XrSessionSettings_base_pose_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionSettings_base_pose_location_default
};

FloatPropertyRNA rna_XrSessionSettings_base_pose_angle = {
	{(PropertyRNA *)&rna_XrSessionSettings_base_scale, (PropertyRNA *)&rna_XrSessionSettings_base_pose_location,
	-1, "base_pose_angle", 1, 0, 0, 4, 0, "Base Pose Angle",
	"Rotation angle around the Z-Axis to apply the rotation deltas from the VR headset to",
	0, "*",
	PROP_FLOAT, PROP_AXISANGLE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_pose_angle), 5, NULL},
	XrSessionSettings_base_pose_angle_get, XrSessionSettings_base_pose_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_XrSessionSettings_base_scale = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_floor, (PropertyRNA *)&rna_XrSessionSettings_base_pose_angle,
	-1, "base_scale", 1, 0, 0, 4, 0, "Base Scale",
	"Uniform scale to apply to VR view",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, base_scale), 5, NULL},
	XrSessionSettings_base_scale_get, XrSessionSettings_base_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_floor = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_annotation, (PropertyRNA *)&rna_XrSessionSettings_base_scale,
	-1, "show_floor", 1, 0, 0, 0, 0, "Display Grid Floor",
	"Show the ground plane grid",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_floor_get, XrSessionSettings_show_floor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_annotation = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_selection, (PropertyRNA *)&rna_XrSessionSettings_show_floor,
	-1, "show_annotation", 1, 0, 0, 0, 0, "Show Annotation",
	"Show annotations for this view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_annotation_get, XrSessionSettings_show_annotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_selection = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_controllers, (PropertyRNA *)&rna_XrSessionSettings_show_annotation,
	-1, "show_selection", 1, 0, 0, 0, 0, "Show Selection",
	"Show selection outlines",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_selection_get, XrSessionSettings_show_selection_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_controllers = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_custom_overlays, (PropertyRNA *)&rna_XrSessionSettings_show_selection,
	-1, "show_controllers", 1, 0, 0, 0, 0, "Show Controllers",
	"Show VR controllers (requires VR actions for controller poses)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_controllers_get, XrSessionSettings_show_controllers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_custom_overlays = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_extras, (PropertyRNA *)&rna_XrSessionSettings_show_controllers,
	-1, "show_custom_overlays", 1, 0, 0, 0, 0, "Show Custom Overlays",
	"Show custom VR overlays",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_custom_overlays_get, XrSessionSettings_show_custom_overlays_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_extras = {
	{(PropertyRNA *)&rna_XrSessionSettings_controller_draw_style, (PropertyRNA *)&rna_XrSessionSettings_show_custom_overlays,
	-1, "show_object_extras", 1, 0, 0, 0, 0, "Show Object Extras",
	"Show object extras, including empties, lights, and cameras",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_extras_get, XrSessionSettings_show_object_extras_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_XrSessionSettings_controller_draw_style_items[5] = {
	{0, "DARK", 0, "Dark", "Draw dark controller"},
	{1, "LIGHT", 0, "Light", "Draw light controller"},
	{2, "DARK_RAY", 0, "Dark + Ray", "Draw dark controller with aiming axis ray"},
	{3, "LIGHT_RAY", 0, "Light + Ray", "Draw light controller with aiming axis ray"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrSessionSettings_controller_draw_style = {
	{(PropertyRNA *)&rna_XrSessionSettings_clip_start, (PropertyRNA *)&rna_XrSessionSettings_show_object_extras,
	-1, "controller_draw_style", 1, 0, 0, 4, 0, "Controller Draw Style",
	"Style to use when drawing VR controllers",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, controller_draw_style), 2, NULL},
	XrSessionSettings_controller_draw_style_get, XrSessionSettings_controller_draw_style_set, NULL, NULL, NULL, rna_XrSessionSettings_controller_draw_style_items, 4, 0
};

FloatPropertyRNA rna_XrSessionSettings_clip_start = {
	{(PropertyRNA *)&rna_XrSessionSettings_clip_end, (PropertyRNA *)&rna_XrSessionSettings_controller_draw_style,
	-1, "clip_start", 1, 0, 0, 4, 0, "Clip Start",
	"VR viewport near clipping distance",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, clip_start), 5, NULL},
	XrSessionSettings_clip_start_get, XrSessionSettings_clip_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_XrSessionSettings_clip_end = {
	{(PropertyRNA *)&rna_XrSessionSettings_use_positional_tracking, (PropertyRNA *)&rna_XrSessionSettings_clip_start,
	-1, "clip_end", 1, 0, 0, 4, 0, "Clip End",
	"VR viewport far clipping distance",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(XrSessionSettings, clip_end), 5, NULL},
	XrSessionSettings_clip_end_get, XrSessionSettings_clip_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0000010000f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_XrSessionSettings_use_positional_tracking = {
	{(PropertyRNA *)&rna_XrSessionSettings_use_absolute_tracking, (PropertyRNA *)&rna_XrSessionSettings_clip_end,
	-1, "use_positional_tracking", 1, 0, 0, 0, 0, "Positional Tracking",
	"Allow VR headsets to affect the location in virtual space, in addition to the rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_use_positional_tracking_get, XrSessionSettings_use_positional_tracking_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_use_absolute_tracking = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_mesh, (PropertyRNA *)&rna_XrSessionSettings_use_positional_tracking,
	-1, "use_absolute_tracking", 1, 0, 0, 0, 0, "Absolute Tracking",
	"Allow the VR tracking origin to be defined independently of the headset location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_use_absolute_tracking_get, XrSessionSettings_use_absolute_tracking_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_mesh = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curve, (PropertyRNA *)&rna_XrSessionSettings_use_absolute_tracking,
	-1, "show_object_viewport_mesh", 1, 0, 0, 0, 0, "Mesh",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_mesh_get, XrSessionSettings_show_object_viewport_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curve = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_surf, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_mesh,
	-1, "show_object_viewport_curve", 1, 0, 0, 0, 0, "Curve",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_curve_get, XrSessionSettings_show_object_viewport_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_surf = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_meta, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curve,
	-1, "show_object_viewport_surf", 1, 0, 0, 0, 0, "Surface",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_surf_get, XrSessionSettings_show_object_viewport_surf_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_meta = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_font, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_surf,
	-1, "show_object_viewport_meta", 1, 0, 0, 0, 0, "Meta",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_meta_get, XrSessionSettings_show_object_viewport_meta_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_font = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curves, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_meta,
	-1, "show_object_viewport_font", 1, 0, 0, 0, 0, "Font",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_font_get, XrSessionSettings_show_object_viewport_font_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_curves = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_pointcloud, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_font,
	-1, "show_object_viewport_curves", 1, 0, 0, 0, 0, "Hair Curves",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_curves_get, XrSessionSettings_show_object_viewport_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_pointcloud = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_volume, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_curves,
	-1, "show_object_viewport_pointcloud", 1, 0, 0, 0, 0, "Point Cloud",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_pointcloud_get, XrSessionSettings_show_object_viewport_pointcloud_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_volume = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_armature, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_pointcloud,
	-1, "show_object_viewport_volume", 1, 0, 0, 0, 0, "Volume",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_volume_get, XrSessionSettings_show_object_viewport_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_armature = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_lattice, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_volume,
	-1, "show_object_viewport_armature", 1, 0, 0, 0, 0, "Armature",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_armature_get, XrSessionSettings_show_object_viewport_armature_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_lattice = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_empty, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_armature,
	-1, "show_object_viewport_lattice", 1, 0, 0, 0, 0, "Lattice",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_lattice_get, XrSessionSettings_show_object_viewport_lattice_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_empty = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_grease_pencil, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_lattice,
	-1, "show_object_viewport_empty", 1, 0, 0, 0, 0, "Empty",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_empty_get, XrSessionSettings_show_object_viewport_empty_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_grease_pencil = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_camera, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_empty,
	-1, "show_object_viewport_grease_pencil", 1, 0, 0, 0, 0, "Grease Pencil",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_grease_pencil_get, XrSessionSettings_show_object_viewport_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_camera = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_grease_pencil,
	-1, "show_object_viewport_camera", 1, 0, 0, 0, 0, "Camera",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_camera_get, XrSessionSettings_show_object_viewport_camera_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_speaker, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_camera,
	-1, "show_object_viewport_light", 1, 0, 0, 0, 0, "Light",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_light_get, XrSessionSettings_show_object_viewport_light_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_speaker = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light_probe, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light,
	-1, "show_object_viewport_speaker", 1, 0, 0, 0, 0, "Speaker",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_speaker_get, XrSessionSettings_show_object_viewport_speaker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_viewport_light_probe = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_mesh, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_speaker,
	-1, "show_object_viewport_light_probe", 1, 0, 0, 0, 0, "Light Probe",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_viewport_light_probe_get, XrSessionSettings_show_object_viewport_light_probe_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_mesh = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_curve, (PropertyRNA *)&rna_XrSessionSettings_show_object_viewport_light_probe,
	-1, "show_object_select_mesh", 1, 0, 0, 0, 0, "Mesh",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_mesh_get, XrSessionSettings_show_object_select_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_curve = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_surf, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_mesh,
	-1, "show_object_select_curve", 1, 0, 0, 0, 0, "Curve",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_curve_get, XrSessionSettings_show_object_select_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_surf = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_meta, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_curve,
	-1, "show_object_select_surf", 1, 0, 0, 0, 0, "Surface",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_surf_get, XrSessionSettings_show_object_select_surf_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_meta = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_font, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_surf,
	-1, "show_object_select_meta", 1, 0, 0, 0, 0, "Meta",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_meta_get, XrSessionSettings_show_object_select_meta_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_font = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_curves, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_meta,
	-1, "show_object_select_font", 1, 0, 0, 0, 0, "Font",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_font_get, XrSessionSettings_show_object_select_font_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_curves = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_pointcloud, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_font,
	-1, "show_object_select_curves", 1, 0, 0, 0, 0, "Hair Curves",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_curves_get, XrSessionSettings_show_object_select_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_pointcloud = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_volume, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_curves,
	-1, "show_object_select_pointcloud", 1, 0, 0, 0, 0, "Point Cloud",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_pointcloud_get, XrSessionSettings_show_object_select_pointcloud_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_volume = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_armature, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_pointcloud,
	-1, "show_object_select_volume", 1, 0, 0, 0, 0, "Volume",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_volume_get, XrSessionSettings_show_object_select_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_armature = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_lattice, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_volume,
	-1, "show_object_select_armature", 1, 0, 0, 0, 0, "Armature",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_armature_get, XrSessionSettings_show_object_select_armature_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_lattice = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_empty, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_armature,
	-1, "show_object_select_lattice", 1, 0, 0, 0, 0, "Lattice",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_lattice_get, XrSessionSettings_show_object_select_lattice_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_empty = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_grease_pencil, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_lattice,
	-1, "show_object_select_empty", 1, 0, 0, 0, 0, "Empty",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_empty_get, XrSessionSettings_show_object_select_empty_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_grease_pencil = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_camera, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_empty,
	-1, "show_object_select_grease_pencil", 1, 0, 0, 0, 0, "Grease Pencil",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_grease_pencil_get, XrSessionSettings_show_object_select_grease_pencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_camera = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_light, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_grease_pencil,
	-1, "show_object_select_camera", 1, 0, 0, 0, 0, "Camera",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_camera_get, XrSessionSettings_show_object_select_camera_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_light = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_speaker, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_camera,
	-1, "show_object_select_light", 1, 0, 0, 0, 0, "Light",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_light_get, XrSessionSettings_show_object_select_light_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_speaker = {
	{(PropertyRNA *)&rna_XrSessionSettings_show_object_select_light_probe, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_light,
	-1, "show_object_select_speaker", 1, 0, 0, 0, 0, "Speaker",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_speaker_get, XrSessionSettings_show_object_select_speaker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_XrSessionSettings_show_object_select_light_probe = {
	{(PropertyRNA *)&rna_XrSessionSettings_icon_from_show_object_viewport, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_speaker,
	-1, "show_object_select_light_probe", 1, 0, 0, 0, 0, "Light Probe",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17235968, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_show_object_select_light_probe_get, XrSessionSettings_show_object_select_light_probe_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_XrSessionSettings_icon_from_show_object_viewport = {
	{NULL, (PropertyRNA *)&rna_XrSessionSettings_show_object_select_light_probe,
	-1, "icon_from_show_object_viewport", 0, 0, 0, 0, 0, "Visibility Icon",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionSettings_icon_from_show_object_viewport_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_XrSessionSettings = {
	{(ContainerRNA *)&RNA_XrSessionState, (ContainerRNA *)&RNA_XrComponentPaths,
	NULL,
	{(PropertyRNA *)&rna_XrSessionSettings_rna_properties, (PropertyRNA *)&rna_XrSessionSettings_icon_from_show_object_viewport}},
	"XrSessionSettings", NULL, NULL, 516, NULL, "XR Session Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrSessionSettings_rna_properties,
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

/* Session State */
CollectionPropertyRNA rna_XrSessionState_rna_properties = {
	{(PropertyRNA *)&rna_XrSessionState_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionState_rna_properties_begin, XrSessionState_rna_properties_next, XrSessionState_rna_properties_end, XrSessionState_rna_properties_get, NULL, NULL, XrSessionState_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrSessionState_rna_type = {
	{(PropertyRNA *)&rna_XrSessionState_viewer_pose_location, (PropertyRNA *)&rna_XrSessionState_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionState_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_XrSessionState_viewer_pose_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_viewer_pose_location = {
	{(PropertyRNA *)&rna_XrSessionState_viewer_pose_rotation, (PropertyRNA *)&rna_XrSessionState_rna_type,
	-1, "viewer_pose_location", 0, 0, 0, 0, 0, "Viewer Pose Location",
	"Last known location of the viewer pose (center between the eyes) in world space",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrSessionState_viewer_pose_location_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_viewer_pose_location_default
};

static float rna_XrSessionState_viewer_pose_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_viewer_pose_rotation = {
	{(PropertyRNA *)&rna_XrSessionState_navigation_location, (PropertyRNA *)&rna_XrSessionState_viewer_pose_location,
	-1, "viewer_pose_rotation", 0, 0, 0, 0, 0, "Viewer Pose Rotation",
	"Last known rotation of the viewer pose (center between the eyes) in world space",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrSessionState_viewer_pose_rotation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_viewer_pose_rotation_default
};

static float rna_XrSessionState_navigation_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_navigation_location = {
	{(PropertyRNA *)&rna_XrSessionState_navigation_rotation, (PropertyRNA *)&rna_XrSessionState_viewer_pose_rotation,
	-1, "navigation_location", 1, 0, 0, 0, 0, "Navigation Location",
	"Location offset to apply to base pose when determining viewer location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrSessionState_navigation_location_get, XrSessionState_navigation_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_navigation_location_default
};

static float rna_XrSessionState_navigation_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_navigation_rotation = {
	{(PropertyRNA *)&rna_XrSessionState_navigation_scale, (PropertyRNA *)&rna_XrSessionState_navigation_location,
	-1, "navigation_rotation", 1, 0, 0, 0, 0, "Navigation Rotation",
	"Rotation offset to apply to base pose when determining viewer rotation",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrSessionState_navigation_rotation_get, XrSessionState_navigation_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrSessionState_navigation_rotation_default
};

FloatPropertyRNA rna_XrSessionState_navigation_scale = {
	{(PropertyRNA *)&rna_XrSessionState_actionmaps, (PropertyRNA *)&rna_XrSessionState_navigation_rotation,
	-1, "navigation_scale", 1, 0, 0, 0, 0, "Navigation Scale",
	"Additional scale multiplier to apply to base scale when determining viewer scale",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionState_navigation_scale_get, XrSessionState_navigation_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_XrSessionState_actionmaps = {
	{(PropertyRNA *)&rna_XrSessionState_active_actionmap, (PropertyRNA *)&rna_XrSessionState_navigation_scale,
	-1, "actionmaps", 0, 0, 0, 0, 0, "XR Action Maps",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_XrActionMaps},
	XrSessionState_actionmaps_begin, XrSessionState_actionmaps_next, XrSessionState_actionmaps_end, XrSessionState_actionmaps_get, XrSessionState_actionmaps_length, NULL, NULL, NULL, &RNA_XrActionMap
};

IntPropertyRNA rna_XrSessionState_active_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_selected_actionmap, (PropertyRNA *)&rna_XrSessionState_actionmaps,
	-1, "active_actionmap", 1, 0, 0, 0, 0, "Active Action Map",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionState_active_actionmap_get, XrSessionState_active_actionmap_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_XrSessionState_selected_actionmap = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_active_actionmap,
	-1, "selected_actionmap", 1, 0, 0, 0, 0, "Selected Action Map",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrSessionState_selected_actionmap_get, XrSessionState_selected_actionmap_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_XrSessionState_is_running_context = {
	{(PropertyRNA *)&rna_XrSessionState_is_running_result, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

BoolPropertyRNA rna_XrSessionState_is_running_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_is_running_context,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_is_running_func = {
	{(FunctionRNA *)&rna_XrSessionState_reset_to_base_pose_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_is_running_context, (PropertyRNA *)&rna_XrSessionState_is_running_result}},
	"is_running", 1, "Query if the VR session is currently running",
	XrSessionState_is_running_call,
	(PropertyRNA *)&rna_XrSessionState_is_running_result
};

PointerPropertyRNA rna_XrSessionState_reset_to_base_pose_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_XrSessionState_reset_to_base_pose_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_set_create_func, (FunctionRNA *)&rna_XrSessionState_is_running_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_reset_to_base_pose_context, (PropertyRNA *)&rna_XrSessionState_reset_to_base_pose_context}},
	"reset_to_base_pose", 1, "Force resetting of position and rotation deltas",
	XrSessionState_reset_to_base_pose_call,
	NULL
};

PointerPropertyRNA rna_XrSessionState_action_set_create_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_set_create_actionmap, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_XrSessionState_action_set_create_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_action_set_create_result, (PropertyRNA *)&rna_XrSessionState_action_set_create_context,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

BoolPropertyRNA rna_XrSessionState_action_set_create_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_action_set_create_actionmap,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_action_set_create_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_create_func, (FunctionRNA *)&rna_XrSessionState_reset_to_base_pose_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_action_set_create_context, (PropertyRNA *)&rna_XrSessionState_action_set_create_result}},
	"action_set_create", 1, "Create a VR action set",
	XrSessionState_action_set_create_call,
	(PropertyRNA *)&rna_XrSessionState_action_set_create_result
};

PointerPropertyRNA rna_XrSessionState_action_create_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_create_actionmap, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_XrSessionState_action_create_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_action_create_actionmap_item, (PropertyRNA *)&rna_XrSessionState_action_create_context,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

PointerPropertyRNA rna_XrSessionState_action_create_actionmap_item = {
	{(PropertyRNA *)&rna_XrSessionState_action_create_result, (PropertyRNA *)&rna_XrSessionState_action_create_actionmap,
	-1, "actionmap_item", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

BoolPropertyRNA rna_XrSessionState_action_create_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_action_create_actionmap_item,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_action_create_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_binding_create_func, (FunctionRNA *)&rna_XrSessionState_action_set_create_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_action_create_context, (PropertyRNA *)&rna_XrSessionState_action_create_result}},
	"action_create", 1, "Create a VR action",
	XrSessionState_action_create_call,
	(PropertyRNA *)&rna_XrSessionState_action_create_result
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_item, (PropertyRNA *)&rna_XrSessionState_action_binding_create_context,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_item = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_binding, (PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap,
	-1, "actionmap_item", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapItem
};

PointerPropertyRNA rna_XrSessionState_action_binding_create_actionmap_binding = {
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_result, (PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_item,
	-1, "actionmap_binding", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMapBinding
};

BoolPropertyRNA rna_XrSessionState_action_binding_create_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_action_binding_create_actionmap_binding,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_action_binding_create_func = {
	{(FunctionRNA *)&rna_XrSessionState_active_action_set_set_func, (FunctionRNA *)&rna_XrSessionState_action_create_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_action_binding_create_context, (PropertyRNA *)&rna_XrSessionState_action_binding_create_result}},
	"action_binding_create", 1, "Create a VR action binding",
	XrSessionState_action_binding_create_call,
	(PropertyRNA *)&rna_XrSessionState_action_binding_create_result
};

PointerPropertyRNA rna_XrSessionState_active_action_set_set_context = {
	{(PropertyRNA *)&rna_XrSessionState_active_action_set_set_action_set, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_active_action_set_set_action_set = {
	{(PropertyRNA *)&rna_XrSessionState_active_action_set_set_result, (PropertyRNA *)&rna_XrSessionState_active_action_set_set_context,
	-1, "action_set", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_XrSessionState_active_action_set_set_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_active_action_set_set_action_set,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_active_action_set_set_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_pose_actions_set_func, (FunctionRNA *)&rna_XrSessionState_action_binding_create_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_active_action_set_set_context, (PropertyRNA *)&rna_XrSessionState_active_action_set_set_result}},
	"active_action_set_set", 1, "Set the active VR action set",
	XrSessionState_active_action_set_set_call,
	(PropertyRNA *)&rna_XrSessionState_active_action_set_set_result
};

PointerPropertyRNA rna_XrSessionState_controller_pose_actions_set_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_action_set, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_action_set = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_grip_action, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_context,
	-1, "action_set", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_grip_action = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_aim_action, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_action_set,
	-1, "grip_action", 262145, 0, 1, 0, 0, "Grip Action",
	"Name of the action representing the controller grips",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_controller_pose_actions_set_aim_action = {
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_result, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_grip_action,
	-1, "aim_action", 262145, 0, 1, 0, 0, "Aim Action",
	"Name of the action representing the controller aims",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_XrSessionState_controller_pose_actions_set_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_aim_action,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_controller_pose_actions_set_func = {
	{(FunctionRNA *)&rna_XrSessionState_action_state_get_func, (FunctionRNA *)&rna_XrSessionState_active_action_set_set_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_context, (PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_result}},
	"controller_pose_actions_set", 1, "Set the actions that determine the VR controller poses",
	XrSessionState_controller_pose_actions_set_call,
	(PropertyRNA *)&rna_XrSessionState_controller_pose_actions_set_result
};

PointerPropertyRNA rna_XrSessionState_action_state_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_action_set_name, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_action_state_get_action_set_name = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_action_name, (PropertyRNA *)&rna_XrSessionState_action_state_get_context,
	-1, "action_set_name", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_action_state_get_action_name = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_user_path, (PropertyRNA *)&rna_XrSessionState_action_state_get_action_set_name,
	-1, "action_name", 262145, 0, 1, 0, 0, "Action",
	"Action name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_action_state_get_user_path = {
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_state, (PropertyRNA *)&rna_XrSessionState_action_state_get_action_name,
	-1, "user_path", 262145, 0, 1, 0, 0, "User Path",
	"OpenXR user path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

static float rna_XrSessionState_action_state_get_state_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_action_state_get_state = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_action_state_get_user_path,
	-1, "state", 262145, 0, 2, 0, 0, "Action State",
	"Current state of the VR action. Second float value is only set for 2D vector type actions",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_XrSessionState_action_state_get_state_default
};

FunctionRNA rna_XrSessionState_action_state_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_haptic_action_apply_func, (FunctionRNA *)&rna_XrSessionState_controller_pose_actions_set_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_action_state_get_context, (PropertyRNA *)&rna_XrSessionState_action_state_get_state}},
	"action_state_get", 1, "Get the current state of a VR action",
	XrSessionState_action_state_get_call,
	NULL
};

PointerPropertyRNA rna_XrSessionState_haptic_action_apply_context = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_set_name, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_set_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_name, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_context,
	-1, "action_set_name", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_apply_action_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_user_path, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_set_name,
	-1, "action_name", 262145, 0, 1, 0, 0, "Action",
	"Action name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_apply_user_path = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_duration, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_action_name,
	-1, "user_path", 262145, 0, 1, 0, 0, "User Path",
	"Optional OpenXR user path. If not set, the action will be applied to all paths",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

FloatPropertyRNA rna_XrSessionState_haptic_action_apply_duration = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_frequency, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_user_path,
	-1, "duration", 1, 0, 1, 0, 0, "Duration",
	"Haptic duration in seconds. 0.0 is the minimum supported duration",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_XrSessionState_haptic_action_apply_frequency = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_amplitude, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_duration,
	-1, "frequency", 1, 0, 1, 0, 0, "Frequency",
	"Frequency of the haptic vibration in hertz. 0.0 specifies the OpenXR runtime\'s default frequency",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_XrSessionState_haptic_action_apply_amplitude = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_result, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_frequency,
	-1, "amplitude", 1, 0, 1, 0, 0, "Amplitude",
	"Haptic amplitude, ranging from 0.0 to 1.0",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_XrSessionState_haptic_action_apply_result = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_amplitude,
	-1, "result", 1, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_XrSessionState_haptic_action_apply_func = {
	{(FunctionRNA *)&rna_XrSessionState_haptic_action_stop_func, (FunctionRNA *)&rna_XrSessionState_action_state_get_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_context, (PropertyRNA *)&rna_XrSessionState_haptic_action_apply_result}},
	"haptic_action_apply", 1, "Apply a VR haptic action",
	XrSessionState_haptic_action_apply_call,
	(PropertyRNA *)&rna_XrSessionState_haptic_action_apply_result
};

PointerPropertyRNA rna_XrSessionState_haptic_action_stop_context = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_set_name, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_set_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_name, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_context,
	-1, "action_set_name", 262145, 0, 1, 0, 0, "Action Set",
	"Action set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_stop_action_name = {
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_user_path, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_set_name,
	-1, "action_name", 262145, 0, 1, 0, 0, "Action",
	"Action name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_XrSessionState_haptic_action_stop_user_path = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_action_name,
	-1, "user_path", 262145, 0, 1, 0, 0, "User Path",
	"Optional OpenXR user path. If not set, the action will be stopped for all paths",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

FunctionRNA rna_XrSessionState_haptic_action_stop_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_grip_location_get_func, (FunctionRNA *)&rna_XrSessionState_haptic_action_apply_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_haptic_action_stop_context, (PropertyRNA *)&rna_XrSessionState_haptic_action_stop_user_path}},
	"haptic_action_stop", 1, "Stop a VR haptic action",
	XrSessionState_haptic_action_stop_call,
	NULL
};

PointerPropertyRNA rna_XrSessionState_controller_grip_location_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_index, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_grip_location_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_location, (PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

static float rna_XrSessionState_controller_grip_location_get_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_grip_location_get_location = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_index,
	-1, "location", 262145, 0, 2, 0, 0, "Location",
	"Controller grip location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_grip_location_get_location_default
};

FunctionRNA rna_XrSessionState_controller_grip_location_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_grip_rotation_get_func, (FunctionRNA *)&rna_XrSessionState_haptic_action_stop_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_context, (PropertyRNA *)&rna_XrSessionState_controller_grip_location_get_location}},
	"controller_grip_location_get", 1, "Get the last known controller grip location in world space",
	XrSessionState_controller_grip_location_get_call,
	NULL
};

PointerPropertyRNA rna_XrSessionState_controller_grip_rotation_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_index, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_grip_rotation_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_rotation, (PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

static float rna_XrSessionState_controller_grip_rotation_get_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_grip_rotation_get_rotation = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_index,
	-1, "rotation", 262145, 0, 2, 0, 0, "Rotation",
	"Controller grip quaternion rotation",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_grip_rotation_get_rotation_default
};

FunctionRNA rna_XrSessionState_controller_grip_rotation_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_aim_location_get_func, (FunctionRNA *)&rna_XrSessionState_controller_grip_location_get_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_context, (PropertyRNA *)&rna_XrSessionState_controller_grip_rotation_get_rotation}},
	"controller_grip_rotation_get", 1, "Get the last known controller grip rotation (quaternion) in world space",
	XrSessionState_controller_grip_rotation_get_call,
	NULL
};

PointerPropertyRNA rna_XrSessionState_controller_aim_location_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_index, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_aim_location_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_location, (PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

static float rna_XrSessionState_controller_aim_location_get_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_aim_location_get_location = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_index,
	-1, "location", 262145, 0, 2, 0, 0, "Location",
	"Controller aim location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_aim_location_get_location_default
};

FunctionRNA rna_XrSessionState_controller_aim_location_get_func = {
	{(FunctionRNA *)&rna_XrSessionState_controller_aim_rotation_get_func, (FunctionRNA *)&rna_XrSessionState_controller_grip_rotation_get_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_context, (PropertyRNA *)&rna_XrSessionState_controller_aim_location_get_location}},
	"controller_aim_location_get", 1, "Get the last known controller aim location in world space",
	XrSessionState_controller_aim_location_get_call,
	NULL
};

PointerPropertyRNA rna_XrSessionState_controller_aim_rotation_get_context = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_index, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

IntPropertyRNA rna_XrSessionState_controller_aim_rotation_get_index = {
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_rotation, (PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_context,
	-1, "index", 1, 0, 1, 0, 0, "Index",
	"Controller index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

static float rna_XrSessionState_controller_aim_rotation_get_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrSessionState_controller_aim_rotation_get_rotation = {
	{NULL, (PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_index,
	-1, "rotation", 262145, 0, 2, 0, 0, "Rotation",
	"Controller aim quaternion rotation",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_XrSessionState_controller_aim_rotation_get_rotation_default
};

FunctionRNA rna_XrSessionState_controller_aim_rotation_get_func = {
	{NULL, (FunctionRNA *)&rna_XrSessionState_controller_aim_location_get_func,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_context, (PropertyRNA *)&rna_XrSessionState_controller_aim_rotation_get_rotation}},
	"controller_aim_rotation_get", 1, "Get the last known controller aim rotation (quaternion) in world space",
	XrSessionState_controller_aim_rotation_get_call,
	NULL
};

StructRNA RNA_XrSessionState = {
	{(ContainerRNA *)&RNA_XrActionMaps, (ContainerRNA *)&RNA_XrSessionSettings,
	NULL,
	{(PropertyRNA *)&rna_XrSessionState_rna_properties, (PropertyRNA *)&rna_XrSessionState_selected_actionmap}},
	"XrSessionState", NULL, NULL, 512, NULL, "Session State",
	"Runtime state information about the VR session",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrSessionState_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_XrSessionState_is_running_func, (FunctionRNA *)&rna_XrSessionState_controller_aim_rotation_get_func}
};

/* XR Action Maps */
CollectionPropertyRNA rna_XrActionMaps_rna_properties = {
	{(PropertyRNA *)&rna_XrActionMaps_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMaps_rna_properties_begin, XrActionMaps_rna_properties_next, XrActionMaps_rna_properties_end, XrActionMaps_rna_properties_get, NULL, NULL, XrActionMaps_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrActionMaps_rna_type = {
	{NULL, (PropertyRNA *)&rna_XrActionMaps_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrActionMaps_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_XrActionMaps_new_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_new_name, NULL,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrSessionState
};

StringPropertyRNA rna_XrActionMaps_new_name = {
	{(PropertyRNA *)&rna_XrActionMaps_new_replace_existing, (PropertyRNA *)&rna_XrActionMaps_new_xr_session_state,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_XrActionMaps_new_replace_existing = {
	{(PropertyRNA *)&rna_XrActionMaps_new_actionmap, (PropertyRNA *)&rna_XrActionMaps_new_name,
	-1, "replace_existing", 1, 0, 1, 0, 0, "Replace Existing",
	"Replace any existing actionmap with the same name",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_XrActionMaps_new_actionmap = {
	{NULL, (PropertyRNA *)&rna_XrActionMaps_new_replace_existing,
	-1, "actionmap", 8388608, 0, 2, 0, 0, "Action Map",
	"Added action map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_new_func = {
	{(FunctionRNA *)&rna_XrActionMaps_new_from_actionmap_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_XrActionMaps_new_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_new_actionmap}},
	"new", 1, "new",
	XrActionMaps_new_call,
	(PropertyRNA *)&rna_XrActionMaps_new_actionmap
};

PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_actionmap, NULL,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrSessionState
};

PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_actionmap = {
	{(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_result, (PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_xr_session_state,
	-1, "actionmap", 8650752, 0, 1, 0, 0, "Action Map",
	"Action map to use as a reference",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

PointerPropertyRNA rna_XrActionMaps_new_from_actionmap_result = {
	{NULL, (PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_actionmap,
	-1, "result", 8388608, 0, 2, 0, 0, "Action Map",
	"Added action map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_new_from_actionmap_func = {
	{(FunctionRNA *)&rna_XrActionMaps_remove_func, (FunctionRNA *)&rna_XrActionMaps_new_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_result}},
	"new_from_actionmap", 1, "new_from_actionmap",
	XrActionMaps_new_from_actionmap_call,
	(PropertyRNA *)&rna_XrActionMaps_new_from_actionmap_result
};

PointerPropertyRNA rna_XrActionMaps_remove_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_remove_actionmap, NULL,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrSessionState
};

PointerPropertyRNA rna_XrActionMaps_remove_actionmap = {
	{NULL, (PropertyRNA *)&rna_XrActionMaps_remove_xr_session_state,
	-1, "actionmap", 262144, 0, 5, 0, 0, "Action Map",
	"Removed action map",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_remove_func = {
	{(FunctionRNA *)&rna_XrActionMaps_find_func, (FunctionRNA *)&rna_XrActionMaps_new_from_actionmap_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMaps_remove_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_remove_actionmap}},
	"remove", 17, "remove",
	XrActionMaps_remove_call,
	NULL
};

PointerPropertyRNA rna_XrActionMaps_find_xr_session_state = {
	{(PropertyRNA *)&rna_XrActionMaps_find_name, NULL,
	-1, "xr_session_state", 8650752, 0, 5, 0, 0, "XR Session State",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrSessionState
};

StringPropertyRNA rna_XrActionMaps_find_name = {
	{(PropertyRNA *)&rna_XrActionMaps_find_actionmap, (PropertyRNA *)&rna_XrActionMaps_find_xr_session_state,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_XrActionMaps_find_actionmap = {
	{NULL, (PropertyRNA *)&rna_XrActionMaps_find_name,
	-1, "actionmap", 8388608, 0, 2, 0, 0, "Action Map",
	"The action map with the given name",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_XrActionMap
};

FunctionRNA rna_XrActionMaps_find_func = {
	{NULL, (FunctionRNA *)&rna_XrActionMaps_remove_func,
	NULL,
	{(PropertyRNA *)&rna_XrActionMaps_find_xr_session_state, (PropertyRNA *)&rna_XrActionMaps_find_actionmap}},
	"find", 1, "find",
	XrActionMaps_find_call,
	(PropertyRNA *)&rna_XrActionMaps_find_actionmap
};

StructRNA RNA_XrActionMaps = {
	{(ContainerRNA *)&RNA_XrEventData, (ContainerRNA *)&RNA_XrSessionState,
	NULL,
	{(PropertyRNA *)&rna_XrActionMaps_rna_properties, (PropertyRNA *)&rna_XrActionMaps_rna_type}},
	"XrActionMaps", NULL, NULL, 516, NULL, "XR Action Maps",
	"Collection of XR action maps",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrActionMaps_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_XrActionMaps_new_func, (FunctionRNA *)&rna_XrActionMaps_find_func}
};

/* XrEventData */
CollectionPropertyRNA rna_XrEventData_rna_properties = {
	{(PropertyRNA *)&rna_XrEventData_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_rna_properties_begin, XrEventData_rna_properties_next, XrEventData_rna_properties_end, XrEventData_rna_properties_get, NULL, NULL, XrEventData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_XrEventData_rna_type = {
	{(PropertyRNA *)&rna_XrEventData_action_set, (PropertyRNA *)&rna_XrEventData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_XrEventData_action_set = {
	{(PropertyRNA *)&rna_XrEventData_action, (PropertyRNA *)&rna_XrEventData_rna_type,
	-1, "action_set", 262144, 0, 0, 0, 0, "Action Set",
	"XR action set name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_action_set_get, XrEventData_action_set_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_XrEventData_action = {
	{(PropertyRNA *)&rna_XrEventData_user_path, (PropertyRNA *)&rna_XrEventData_action_set,
	-1, "action", 262144, 0, 0, 0, 0, "Action",
	"XR action name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_action_get, XrEventData_action_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_XrEventData_user_path = {
	{(PropertyRNA *)&rna_XrEventData_user_path_other, (PropertyRNA *)&rna_XrEventData_action,
	-1, "user_path", 262144, 0, 0, 0, 0, "User Path",
	"User path of the action. E.g. \"/user/hand/left\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_user_path_get, XrEventData_user_path_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_XrEventData_user_path_other = {
	{(PropertyRNA *)&rna_XrEventData_type, (PropertyRNA *)&rna_XrEventData_user_path,
	-1, "user_path_other", 262144, 0, 0, 0, 0, "User Path Other",
	"Other user path, for bimanual actions. E.g. \"/user/hand/right\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_user_path_other_get, XrEventData_user_path_other_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

static const EnumPropertyItem rna_XrEventData_type_items[5] = {
	{2, "FLOAT", 0, "Float", "Float action, representing either a digital or analog button"},
	{3, "VECTOR2D", 0, "Vector2D", "2D float vector action, representing a thumbstick or trackpad"},
	{4, "POSE", 0, "Pose", "3D pose action, representing a controller\'s location and rotation"},
	{100, "VIBRATION", 0, "Vibration", "Haptic vibration output action, to be applied with a duration, frequency, and amplitude"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_XrEventData_type = {
	{(PropertyRNA *)&rna_XrEventData_state, (PropertyRNA *)&rna_XrEventData_user_path_other,
	-1, "type", 0, 0, 0, 0, 0, "Type",
	"XR action type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_type_get, NULL, NULL, NULL, NULL, rna_XrEventData_type_items, 4, 2
};

static float rna_XrEventData_state_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_state = {
	{(PropertyRNA *)&rna_XrEventData_state_other, (PropertyRNA *)&rna_XrEventData_type,
	-1, "state", 0, 0, 0, 0, 0, "State",
	"XR action values corresponding to type",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrEventData_state_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_state_default
};

static float rna_XrEventData_state_other_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_state_other = {
	{(PropertyRNA *)&rna_XrEventData_float_threshold, (PropertyRNA *)&rna_XrEventData_state,
	-1, "state_other", 0, 0, 0, 0, 0, "State Other",
	"State of the other user path for bimanual actions",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrEventData_state_other_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_state_other_default
};

FloatPropertyRNA rna_XrEventData_float_threshold = {
	{(PropertyRNA *)&rna_XrEventData_controller_location, (PropertyRNA *)&rna_XrEventData_state_other,
	-1, "float_threshold", 0, 0, 0, 0, 0, "Float Threshold",
	"Input threshold for float/2D vector actions",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_float_threshold_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_XrEventData_controller_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_location = {
	{(PropertyRNA *)&rna_XrEventData_controller_rotation, (PropertyRNA *)&rna_XrEventData_float_threshold,
	-1, "controller_location", 0, 0, 0, 0, 0, "Controller Location",
	"Location of the action\'s corresponding controller aim in world space",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrEventData_controller_location_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_location_default
};

static float rna_XrEventData_controller_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_rotation = {
	{(PropertyRNA *)&rna_XrEventData_controller_location_other, (PropertyRNA *)&rna_XrEventData_controller_location,
	-1, "controller_rotation", 0, 0, 0, 0, 0, "Controller Rotation",
	"Rotation of the action\'s corresponding controller aim in world space",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrEventData_controller_rotation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_rotation_default
};

static float rna_XrEventData_controller_location_other_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_location_other = {
	{(PropertyRNA *)&rna_XrEventData_controller_rotation_other, (PropertyRNA *)&rna_XrEventData_controller_rotation,
	-1, "controller_location_other", 0, 0, 0, 0, 0, "Controller Location Other",
	"Controller aim location of the other user path for bimanual actions",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrEventData_controller_location_other_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_location_other_default
};

static float rna_XrEventData_controller_rotation_other_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_XrEventData_controller_rotation_other = {
	{(PropertyRNA *)&rna_XrEventData_bimanual, (PropertyRNA *)&rna_XrEventData_controller_location_other,
	-1, "controller_rotation_other", 0, 0, 0, 0, 0, "Controller Rotation Other",
	"Controller aim rotation of the other user path for bimanual actions",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, XrEventData_controller_rotation_other_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_XrEventData_controller_rotation_other_default
};

BoolPropertyRNA rna_XrEventData_bimanual = {
	{NULL, (PropertyRNA *)&rna_XrEventData_controller_rotation_other,
	-1, "bimanual", 0, 0, 0, 0, 0, "Bimanual",
	"Whether bimanual interaction is occurring",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	XrEventData_bimanual_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_XrEventData = {
	{NULL, (ContainerRNA *)&RNA_XrActionMaps,
	NULL,
	{(PropertyRNA *)&rna_XrEventData_rna_properties, (PropertyRNA *)&rna_XrEventData_bimanual}},
	"XrEventData", NULL, NULL, 516, NULL, "XrEventData",
	"XR Data for Window Manager Event",
	"*", 17,
	NULL, (PropertyRNA *)&rna_XrEventData_rna_properties,
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

