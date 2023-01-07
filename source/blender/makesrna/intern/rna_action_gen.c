
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

#include "rna_action.c"
#include "rna_action_api.c"

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

CollectionPropertyRNA rna_Action_fcurves;
CollectionPropertyRNA rna_Action_groups;
CollectionPropertyRNA rna_Action_pose_markers;
BoolPropertyRNA rna_Action_use_frame_range;
BoolPropertyRNA rna_Action_use_cyclic;
FloatPropertyRNA rna_Action_frame_start;
FloatPropertyRNA rna_Action_frame_end;
FloatPropertyRNA rna_Action_frame_range;
FloatPropertyRNA rna_Action_curve_frame_range;
EnumPropertyRNA rna_Action_id_root;

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


extern FunctionRNA rna_Action_flip_with_pose_func;
extern PointerPropertyRNA rna_Action_flip_with_pose_object;



CollectionPropertyRNA rna_ActionFCurves_rna_properties;
PointerPropertyRNA rna_ActionFCurves_rna_type;

extern FunctionRNA rna_ActionFCurves_new_func;
extern StringPropertyRNA rna_ActionFCurves_new_data_path;
extern IntPropertyRNA rna_ActionFCurves_new_index;
extern StringPropertyRNA rna_ActionFCurves_new_action_group;
extern PointerPropertyRNA rna_ActionFCurves_new_fcurve;

extern FunctionRNA rna_ActionFCurves_find_func;
extern StringPropertyRNA rna_ActionFCurves_find_data_path;
extern IntPropertyRNA rna_ActionFCurves_find_index;
extern PointerPropertyRNA rna_ActionFCurves_find_fcurve;

extern FunctionRNA rna_ActionFCurves_remove_func;
extern PointerPropertyRNA rna_ActionFCurves_remove_fcurve;

extern FunctionRNA rna_ActionFCurves_clear_func;


CollectionPropertyRNA rna_ActionGroups_rna_properties;
PointerPropertyRNA rna_ActionGroups_rna_type;

extern FunctionRNA rna_ActionGroups_new_func;
extern StringPropertyRNA rna_ActionGroups_new_name;
extern PointerPropertyRNA rna_ActionGroups_new_action_group;

extern FunctionRNA rna_ActionGroups_remove_func;
extern PointerPropertyRNA rna_ActionGroups_remove_action_group;



CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties;
PointerPropertyRNA rna_ActionPoseMarkers_rna_type;
PointerPropertyRNA rna_ActionPoseMarkers_active;
IntPropertyRNA rna_ActionPoseMarkers_active_index;

extern FunctionRNA rna_ActionPoseMarkers_new_func;
extern StringPropertyRNA rna_ActionPoseMarkers_new_name;
extern PointerPropertyRNA rna_ActionPoseMarkers_new_marker;

extern FunctionRNA rna_ActionPoseMarkers_remove_func;
extern PointerPropertyRNA rna_ActionPoseMarkers_remove_marker;



CollectionPropertyRNA rna_ActionGroup_rna_properties;
PointerPropertyRNA rna_ActionGroup_rna_type;
StringPropertyRNA rna_ActionGroup_name;
CollectionPropertyRNA rna_ActionGroup_channels;
BoolPropertyRNA rna_ActionGroup_select;
BoolPropertyRNA rna_ActionGroup_lock;
BoolPropertyRNA rna_ActionGroup_mute;
BoolPropertyRNA rna_ActionGroup_show_expanded;
BoolPropertyRNA rna_ActionGroup_show_expanded_graph;
BoolPropertyRNA rna_ActionGroup_use_pin;
EnumPropertyRNA rna_ActionGroup_color_set;
BoolPropertyRNA rna_ActionGroup_is_custom_color_set;
PointerPropertyRNA rna_ActionGroup_colors;


CollectionPropertyRNA rna_DopeSheet_rna_properties;
PointerPropertyRNA rna_DopeSheet_rna_type;
PointerPropertyRNA rna_DopeSheet_source;
BoolPropertyRNA rna_DopeSheet_show_datablock_filters;
BoolPropertyRNA rna_DopeSheet_show_only_selected;
BoolPropertyRNA rna_DopeSheet_show_hidden;
BoolPropertyRNA rna_DopeSheet_use_datablock_sort;
BoolPropertyRNA rna_DopeSheet_use_filter_invert;
BoolPropertyRNA rna_DopeSheet_show_only_errors;
PointerPropertyRNA rna_DopeSheet_filter_collection;
StringPropertyRNA rna_DopeSheet_filter_fcurve_name;
StringPropertyRNA rna_DopeSheet_filter_text;
BoolPropertyRNA rna_DopeSheet_use_multi_word_filter;
BoolPropertyRNA rna_DopeSheet_show_missing_nla;
BoolPropertyRNA rna_DopeSheet_show_summary;
BoolPropertyRNA rna_DopeSheet_show_expanded_summary;
BoolPropertyRNA rna_DopeSheet_show_transforms;
BoolPropertyRNA rna_DopeSheet_show_shapekeys;
BoolPropertyRNA rna_DopeSheet_show_modifiers;
BoolPropertyRNA rna_DopeSheet_show_meshes;
BoolPropertyRNA rna_DopeSheet_show_lattices;
BoolPropertyRNA rna_DopeSheet_show_cameras;
BoolPropertyRNA rna_DopeSheet_show_materials;
BoolPropertyRNA rna_DopeSheet_show_lights;
BoolPropertyRNA rna_DopeSheet_show_linestyles;
BoolPropertyRNA rna_DopeSheet_show_textures;
BoolPropertyRNA rna_DopeSheet_show_curves;
BoolPropertyRNA rna_DopeSheet_show_worlds;
BoolPropertyRNA rna_DopeSheet_show_scenes;
BoolPropertyRNA rna_DopeSheet_show_particles;
BoolPropertyRNA rna_DopeSheet_show_metaballs;
BoolPropertyRNA rna_DopeSheet_show_armatures;
BoolPropertyRNA rna_DopeSheet_show_nodes;
BoolPropertyRNA rna_DopeSheet_show_speakers;
BoolPropertyRNA rna_DopeSheet_show_cache_files;
BoolPropertyRNA rna_DopeSheet_show_hair_curves;
BoolPropertyRNA rna_DopeSheet_show_pointclouds;
BoolPropertyRNA rna_DopeSheet_show_volumes;
BoolPropertyRNA rna_DopeSheet_show_gpencil;
BoolPropertyRNA rna_DopeSheet_show_movieclips;

static PointerRNA Action_fcurves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void Action_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Action_fcurves;

    rna_iterator_listbase_begin(iter, &data->curves, NULL);

    if (iter->valid) {
        iter->ptr = Action_fcurves_get(iter);
    }
}

void Action_fcurves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Action_fcurves_get(iter);
    }
}

void Action_fcurves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Action_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Action_fcurves_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_fcurves_get(&iter); }
    }

    Action_fcurves_end(&iter);

    return found;
}

static PointerRNA Action_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ActionGroup, rna_iterator_listbase_get(iter));
}

void Action_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Action_groups;

    rna_iterator_listbase_begin(iter, &data->groups, NULL);

    if (iter->valid) {
        iter->ptr = Action_groups_get(iter);
    }
}

void Action_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Action_groups_get(iter);
    }
}

void Action_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Action_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Action_groups_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_groups_get(&iter); }
    }

    Action_groups_end(&iter);

    return found;
}

int Action_groups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ActionGroup_name_length(PointerRNA *);
    extern void ActionGroup_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Action_groups_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ActionGroup_name_length(&iter.ptr);
            if (namelen < 1024) {
                ActionGroup_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                ActionGroup_name_get(&iter.ptr, name);
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
        Action_groups_next(&iter);
    }
    Action_groups_end(&iter);

    return found;
}

static PointerRNA Action_pose_markers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_TimelineMarker, rna_iterator_listbase_get(iter));
}

void Action_pose_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Action_pose_markers;

    rna_iterator_listbase_begin(iter, &data->markers, NULL);

    if (iter->valid) {
        iter->ptr = Action_pose_markers_get(iter);
    }
}

void Action_pose_markers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Action_pose_markers_get(iter);
    }
}

void Action_pose_markers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Action_pose_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Action_pose_markers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Action_pose_markers_get(&iter); }
    }

    Action_pose_markers_end(&iter);

    return found;
}

int Action_pose_markers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int TimelineMarker_name_length(PointerRNA *);
    extern void TimelineMarker_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Action_pose_markers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = TimelineMarker_name_length(&iter.ptr);
            if (namelen < 1024) {
                TimelineMarker_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                TimelineMarker_name_get(&iter.ptr, name);
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
        Action_pose_markers_next(&iter);
    }
    Action_pose_markers_end(&iter);

    return found;
}

bool Action_use_frame_range_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void Action_use_frame_range_set(PointerRNA *ptr, bool value)
{
    rna_Action_use_frame_range_set(ptr, value);
}

bool Action_use_cyclic_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void Action_use_cyclic_set(PointerRNA *ptr, bool value)
{
    bAction *data = (bAction *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

float Action_frame_start_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (float)(data->frame_start);
}

void Action_frame_start_set(PointerRNA *ptr, float value)
{
    rna_Action_start_frame_set(ptr, value);
}

float Action_frame_end_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (float)(data->frame_end);
}

void Action_frame_end_set(PointerRNA *ptr, float value)
{
    rna_Action_end_frame_set(ptr, value);
}

void Action_frame_range_get(PointerRNA *ptr, float values[2])
{
    rna_Action_frame_range_get(ptr, values);
}

void Action_frame_range_set(PointerRNA *ptr, const float values[2])
{
    rna_Action_frame_range_set(ptr, values);
}

void Action_curve_frame_range_get(PointerRNA *ptr, float values[2])
{
    rna_Action_curve_frame_range_get(ptr, values);
}

int Action_id_root_get(PointerRNA *ptr)
{
    bAction *data = (bAction *)(ptr->data);
    return (int)(data->idroot);
}

void Action_id_root_set(PointerRNA *ptr, int value)
{
    bAction *data = (bAction *)(ptr->data);
    data->idroot = value;
}

static PointerRNA ActionFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ActionFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionFCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionFCurves_rna_properties_get(iter);
    }
}

void ActionFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionFCurves_rna_properties_get(iter);
    }
}

void ActionFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ActionFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionFCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ActionGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ActionGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionGroups_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionGroups_rna_properties_get(iter);
    }
}

void ActionGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionGroups_rna_properties_get(iter);
    }
}

void ActionGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ActionGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionGroups_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ActionPoseMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
    }
}

void ActionPoseMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionPoseMarkers_rna_properties_get(iter);
    }
}

void ActionPoseMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ActionPoseMarkers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionPoseMarkers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA ActionPoseMarkers_active_get(PointerRNA *ptr)
{
    return rna_Action_active_pose_marker_get(ptr);
}

void ActionPoseMarkers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Action_active_pose_marker_set(ptr, value, reports);
}

int ActionPoseMarkers_active_index_get(PointerRNA *ptr)
{
    return rna_Action_active_pose_marker_index_get(ptr);
}

void ActionPoseMarkers_active_index_set(PointerRNA *ptr, int value)
{
    rna_Action_active_pose_marker_index_set(ptr, value);
}

static PointerRNA ActionGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ActionGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ActionGroup_rna_properties_get(iter);
    }
}

void ActionGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ActionGroup_rna_properties_get(iter);
    }
}

void ActionGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ActionGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ActionGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ActionGroup_name_get(PointerRNA *ptr, char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int ActionGroup_name_length(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return strlen(data->name);
}

void ActionGroup_name_set(PointerRNA *ptr, const char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA ActionGroup_channels_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void ActionGroup_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ActionGroup_channels;

    rna_iterator_listbase_begin(iter, &data->channels, NULL);

    if (iter->valid) {
        iter->ptr = ActionGroup_channels_get(iter);
    }
}

void ActionGroup_channels_next(CollectionPropertyIterator *iter)
{
    rna_ActionGroup_channels_next(iter);

    if (iter->valid) {
        iter->ptr = ActionGroup_channels_get(iter);
    }
}

void ActionGroup_channels_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

bool ActionGroup_select_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void ActionGroup_select_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool ActionGroup_lock_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void ActionGroup_lock_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool ActionGroup_mute_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void ActionGroup_mute_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool ActionGroup_show_expanded_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void ActionGroup_show_expanded_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool ActionGroup_show_expanded_graph_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void ActionGroup_show_expanded_graph_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool ActionGroup_use_pin_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

void ActionGroup_use_pin_set(PointerRNA *ptr, bool value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

int ActionGroup_color_set_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (int)(data->customCol);
}

void ActionGroup_color_set_set(PointerRNA *ptr, int value)
{
    rna_ActionGroup_colorset_set(ptr, value);
}

bool ActionGroup_is_custom_color_set_get(PointerRNA *ptr)
{
    return rna_ActionGroup_is_custom_colorset_get(ptr);
}

PointerRNA ActionGroup_colors_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ThemeBoneColorSet, &data->cs);
}

static PointerRNA DopeSheet_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DopeSheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DopeSheet_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DopeSheet_rna_properties_get(iter);
    }
}

void DopeSheet_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DopeSheet_rna_properties_get(iter);
    }
}

void DopeSheet_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DopeSheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DopeSheet_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA DopeSheet_source_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->source);
}

bool DopeSheet_show_datablock_filters_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void DopeSheet_show_datablock_filters_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool DopeSheet_show_only_selected_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 1) != 0);
}

void DopeSheet_show_only_selected_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 1; }
    else { data->filterflag &= ~1; }
}

bool DopeSheet_show_hidden_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 67108864) != 0);
}

void DopeSheet_show_hidden_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 67108864; }
    else { data->filterflag &= ~67108864; }
}

bool DopeSheet_use_datablock_sort_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->flag) & 8) != 0);
}

void DopeSheet_use_datablock_sort_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool DopeSheet_use_filter_invert_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void DopeSheet_use_filter_invert_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool DopeSheet_show_only_errors_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 268435456) != 0);
}

void DopeSheet_show_only_errors_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 268435456; }
    else { data->filterflag &= ~268435456; }
}

PointerRNA DopeSheet_filter_collection_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->filter_grp);
}

void DopeSheet_filter_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->filter_grp = value.data;
}

void DopeSheet_filter_fcurve_name_get(PointerRNA *ptr, char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(value, data->searchstr, 64);
}

int DopeSheet_filter_fcurve_name_length(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return strlen(data->searchstr);
}

void DopeSheet_filter_fcurve_name_set(PointerRNA *ptr, const char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(data->searchstr, value, 64);
}

void DopeSheet_filter_text_get(PointerRNA *ptr, char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(value, data->searchstr, 64);
}

int DopeSheet_filter_text_length(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return strlen(data->searchstr);
}

void DopeSheet_filter_text_set(PointerRNA *ptr, const char *value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    BLI_strncpy_utf8(data->searchstr, value, 64);
}

bool DopeSheet_use_multi_word_filter_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void DopeSheet_use_multi_word_filter_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool DopeSheet_show_missing_nla_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 33554432) != 0);
}

void DopeSheet_show_missing_nla_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 33554432; }
    else { data->filterflag &= ~33554432; }
}

bool DopeSheet_show_summary_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return (((data->filterflag) & 16) != 0);
}

void DopeSheet_show_summary_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (value) { data->filterflag |= 16; }
    else { data->filterflag &= ~16; }
}

bool DopeSheet_show_expanded_summary_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void DopeSheet_show_expanded_summary_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool DopeSheet_show_transforms_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 256) != 0);
}

void DopeSheet_show_transforms_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 256; }
    else { data->filterflag &= ~256; }
}

bool DopeSheet_show_shapekeys_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 64) != 0);
}

void DopeSheet_show_shapekeys_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 64; }
    else { data->filterflag &= ~64; }
}

bool DopeSheet_show_modifiers_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 8388608) != 0);
}

void DopeSheet_show_modifiers_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 8388608; }
    else { data->filterflag &= ~8388608; }
}

bool DopeSheet_show_meshes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 128) != 0);
}

void DopeSheet_show_meshes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 128; }
    else { data->filterflag &= ~128; }
}

bool DopeSheet_show_lattices_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 512) != 0);
}

void DopeSheet_show_lattices_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 512; }
    else { data->filterflag &= ~512; }
}

bool DopeSheet_show_cameras_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 1024) != 0);
}

void DopeSheet_show_cameras_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 1024; }
    else { data->filterflag &= ~1024; }
}

bool DopeSheet_show_materials_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 2048) != 0);
}

void DopeSheet_show_materials_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 2048; }
    else { data->filterflag &= ~2048; }
}

bool DopeSheet_show_lights_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 4096) != 0);
}

void DopeSheet_show_lights_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 4096; }
    else { data->filterflag &= ~4096; }
}

bool DopeSheet_show_linestyles_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 4194304) != 0);
}

void DopeSheet_show_linestyles_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 4194304; }
    else { data->filterflag &= ~4194304; }
}

bool DopeSheet_show_textures_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 1048576) != 0);
}

void DopeSheet_show_textures_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 1048576; }
    else { data->filterflag &= ~1048576; }
}

bool DopeSheet_show_curves_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 8192) != 0);
}

void DopeSheet_show_curves_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 8192; }
    else { data->filterflag &= ~8192; }
}

bool DopeSheet_show_worlds_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 16384) != 0);
}

void DopeSheet_show_worlds_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 16384; }
    else { data->filterflag &= ~16384; }
}

bool DopeSheet_show_scenes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 32768) != 0);
}

void DopeSheet_show_scenes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 32768; }
    else { data->filterflag &= ~32768; }
}

bool DopeSheet_show_particles_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 65536) != 0);
}

void DopeSheet_show_particles_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 65536; }
    else { data->filterflag &= ~65536; }
}

bool DopeSheet_show_metaballs_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 131072) != 0);
}

void DopeSheet_show_metaballs_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 131072; }
    else { data->filterflag &= ~131072; }
}

bool DopeSheet_show_armatures_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 262144) != 0);
}

void DopeSheet_show_armatures_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 262144; }
    else { data->filterflag &= ~262144; }
}

bool DopeSheet_show_nodes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 524288) != 0);
}

void DopeSheet_show_nodes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 524288; }
    else { data->filterflag &= ~524288; }
}

bool DopeSheet_show_speakers_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 2097152) != 0);
}

void DopeSheet_show_speakers_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 2097152; }
    else { data->filterflag &= ~2097152; }
}

bool DopeSheet_show_cache_files_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 2) != 0);
}

void DopeSheet_show_cache_files_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 2; }
    else { data->filterflag2 &= ~2; }
}

bool DopeSheet_show_hair_curves_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 8) != 0);
}

void DopeSheet_show_hair_curves_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 8; }
    else { data->filterflag2 &= ~8; }
}

bool DopeSheet_show_pointclouds_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 16) != 0);
}

void DopeSheet_show_pointclouds_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 16; }
    else { data->filterflag2 &= ~16; }
}

bool DopeSheet_show_volumes_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 32) != 0);
}

void DopeSheet_show_volumes_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 32; }
    else { data->filterflag2 &= ~32; }
}

bool DopeSheet_show_gpencil_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag) & 16777216) != 0);
}

void DopeSheet_show_gpencil_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag |= 16777216; }
    else { data->filterflag &= ~16777216; }
}

bool DopeSheet_show_movieclips_get(PointerRNA *ptr)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    return !(((data->filterflag2) & 4) != 0);
}

void DopeSheet_show_movieclips_set(PointerRNA *ptr, bool value)
{
    bDopeSheet *data = (bDopeSheet *)(ptr->data);
    if (!value) { data->filterflag2 |= 4; }
    else { data->filterflag2 &= ~4; }
}

void Action_flip_with_pose_func(struct bAction *_self, ReportList *reports, struct Object *object)
{
	rna_Action_flip_with_pose(_self, reports, object);
}

void Action_flip_with_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Action_flip_with_pose(_self, reports, object);
}

/* Repeated prototypes to detect errors */

void rna_Action_flip_with_pose(struct bAction *_self, ReportList *reports, struct Object *object);

struct FCurve *ActionFCurves_new_func(struct bAction *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * action_group)
{
	return rna_Action_fcurve_new(_self, bmain, reports, data_path, index, action_group);
}

void ActionFCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * data_path;
	int index;
	const char * action_group;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	action_group = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Action_fcurve_new(_self, CTX_data_main(C), reports, data_path, index, action_group);
	*((struct FCurve **)_retdata) = fcurve;
}

struct FCurve *ActionFCurves_find_func(struct bAction *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_Action_fcurve_find(_self, reports, data_path, index);
}

void ActionFCurves_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * data_path;
	int index;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Action_fcurve_find(_self, reports, data_path, index);
	*((struct FCurve **)_retdata) = fcurve;
}

void ActionFCurves_remove_func(struct bAction *_self, ReportList *reports, struct PointerRNA *fcurve)
{
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

void ActionFCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *fcurve;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	fcurve = *((struct PointerRNA **)_data);
	
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

void ActionFCurves_clear_func(struct bAction *_self)
{
	rna_Action_fcurve_clear(_self);
}

void ActionFCurves_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	_self = (struct bAction *)_ptr->data;
	
	rna_Action_fcurve_clear(_self);
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Action_fcurve_new(struct bAction *_self, Main *bmain, ReportList *reports, const char * data_path, int index, const char * action_group);
struct FCurve *rna_Action_fcurve_find(struct bAction *_self, ReportList *reports, const char * data_path, int index);
void rna_Action_fcurve_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *fcurve);
void rna_Action_fcurve_clear(struct bAction *_self);

struct bActionGroup *ActionGroups_new_func(struct bAction *_self, const char * name)
{
	return rna_Action_groups_new(_self, name);
}

void ActionGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * name;
	struct bActionGroup *action_group;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	action_group = rna_Action_groups_new(_self, name);
	*((struct bActionGroup **)_retdata) = action_group;
}

void ActionGroups_remove_func(struct bAction *_self, ReportList *reports, struct PointerRNA *action_group)
{
	rna_Action_groups_remove(_self, reports, action_group);
}

void ActionGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *action_group;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	action_group = *((struct PointerRNA **)_data);
	
	rna_Action_groups_remove(_self, reports, action_group);
}

/* Repeated prototypes to detect errors */

struct bActionGroup *rna_Action_groups_new(struct bAction *_self, const char * name);
void rna_Action_groups_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *action_group);

struct TimeMarker *ActionPoseMarkers_new_func(struct bAction *_self, const char * name)
{
	return rna_Action_pose_markers_new(_self, name);
}

void ActionPoseMarkers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char * name;
	struct TimeMarker *marker;
	char *_data, *_retdata;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	marker = rna_Action_pose_markers_new(_self, name);
	*((struct TimeMarker **)_retdata) = marker;
}

void ActionPoseMarkers_remove_func(struct bAction *_self, ReportList *reports, struct PointerRNA *marker)
{
	rna_Action_pose_markers_remove(_self, reports, marker);
}

void ActionPoseMarkers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct PointerRNA *marker;
	char *_data;
	
	_self = (struct bAction *)_ptr->data;
	_data = (char *)_parms->data;
	marker = *((struct PointerRNA **)_data);
	
	rna_Action_pose_markers_remove(_self, reports, marker);
}

/* Repeated prototypes to detect errors */

struct TimeMarker *rna_Action_pose_markers_new(struct bAction *_self, const char * name);
void rna_Action_pose_markers_remove(struct bAction *_self, ReportList *reports, struct PointerRNA *marker);



/* Action */
CollectionPropertyRNA rna_Action_fcurves = {
	{(PropertyRNA *)&rna_Action_groups, NULL,
	-1, "fcurves", 0, 0, 0, 0, 0, "F-Curves",
	"The individual F-Curves that make up the action",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ActionFCurves},
	Action_fcurves_begin, Action_fcurves_next, Action_fcurves_end, Action_fcurves_get, NULL, Action_fcurves_lookup_int, NULL, NULL, &RNA_FCurve
};

CollectionPropertyRNA rna_Action_groups = {
	{(PropertyRNA *)&rna_Action_pose_markers, (PropertyRNA *)&rna_Action_fcurves,
	-1, "groups", 0, 0, 0, 0, 0, "Groups",
	"Convenient groupings of F-Curves",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ActionGroups},
	Action_groups_begin, Action_groups_next, Action_groups_end, Action_groups_get, NULL, Action_groups_lookup_int, Action_groups_lookup_string, NULL, &RNA_ActionGroup
};

CollectionPropertyRNA rna_Action_pose_markers = {
	{(PropertyRNA *)&rna_Action_use_frame_range, (PropertyRNA *)&rna_Action_groups,
	-1, "pose_markers", 65536, 0, 0, 0, 0, "Pose Markers",
	"Markers specific to this action, for labeling poses",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ActionPoseMarkers},
	Action_pose_markers_begin, Action_pose_markers_next, Action_pose_markers_end, Action_pose_markers_get, NULL, Action_pose_markers_lookup_int, Action_pose_markers_lookup_string, NULL, &RNA_TimelineMarker
};

BoolPropertyRNA rna_Action_use_frame_range = {
	{(PropertyRNA *)&rna_Action_use_cyclic, (PropertyRNA *)&rna_Action_pose_markers,
	-1, "use_frame_range", 1, 0, 0, 0, 0, "Manual Frame Range",
	"Manually specify the intended playback frame range for the action (this range is used by some tools, but does not affect animation evaluation)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Action_use_frame_range_get, Action_use_frame_range_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Action_use_cyclic = {
	{(PropertyRNA *)&rna_Action_frame_start, (PropertyRNA *)&rna_Action_use_frame_range,
	-1, "use_cyclic", 1, 0, 0, 0, 0, "Cyclic Animation",
	"The action is intended to be used as a cycle looping over its manually set playback frame range (enabling this doesn\'t automatically make it loop)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Action_use_cyclic_get, Action_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Action_frame_start = {
	{(PropertyRNA *)&rna_Action_frame_end, (PropertyRNA *)&rna_Action_use_cyclic,
	-1, "frame_start", 1, 0, 0, 0, 0, "Start Frame",
	"The start frame of the manually set intended playback range",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Action_frame_start_get, Action_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1048574.0f, -FLT_MAX, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Action_frame_end = {
	{(PropertyRNA *)&rna_Action_frame_range, (PropertyRNA *)&rna_Action_frame_start,
	-1, "frame_end", 1, 0, 0, 0, 0, "End Frame",
	"The end frame of the manually set intended playback range",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Action_frame_end_get, Action_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1048574.0f, -FLT_MAX, FLT_MAX, 100.0f, 2, 0.0f, NULL
};

static float rna_Action_frame_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Action_frame_range = {
	{(PropertyRNA *)&rna_Action_curve_frame_range, (PropertyRNA *)&rna_Action_frame_end,
	-1, "frame_range", 3, 0, 0, 0, 0, "Frame Range",
	"The intended playback frame range of this action, using the manually set range if available, or the combined frame range of all F-Curves within this action if not (assigning sets the manual frame range)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Action_frame_range_get, Action_frame_range_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Action_frame_range_default
};

static float rna_Action_curve_frame_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Action_curve_frame_range = {
	{(PropertyRNA *)&rna_Action_id_root, (PropertyRNA *)&rna_Action_frame_range,
	-1, "curve_frame_range", 2, 0, 0, 0, 0, "Curve Frame Range",
	"The combined frame range of all F-Curves within this action",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Action_curve_frame_range_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Action_curve_frame_range_default
};

EnumPropertyRNA rna_Action_id_root = {
	{NULL, (PropertyRNA *)&rna_Action_curve_frame_range,
	-1, "id_root", 3, 0, 0, 4, 0, "ID Root Type",
	"Type of ID block that action can be used on - DO NOT CHANGE UNLESS YOU KNOW WHAT YOU ARE DOING",
	0, "ID",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAction, idroot), 0, NULL},
	Action_id_root_get, Action_id_root_set, NULL, NULL, NULL, rna_enum_id_type_items, 38, 17217
};

PointerPropertyRNA rna_Action_flip_with_pose_object = {
	{NULL, NULL,
	-1, "object", 8650880, 0, 1, 0, 0, "",
	"The reference armature object to use when flipping",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_Action_flip_with_pose_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Action_flip_with_pose_object, (PropertyRNA *)&rna_Action_flip_with_pose_object}},
	"flip_with_pose", 16, "Flip the action around the X axis using a pose",
	Action_flip_with_pose_call,
	NULL
};

StructRNA RNA_Action = {
	{(ContainerRNA *)&RNA_ActionFCurves, (ContainerRNA *)&RNA_ColorMapping,
	NULL,
	{(PropertyRNA *)&rna_Action_fcurves, (PropertyRNA *)&rna_Action_id_root}},
	"Action", NULL, NULL, 519, NULL, "Action",
	"A collection of F-Curves for animation",
	"*", 115,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Action_flip_with_pose_func, (FunctionRNA *)&rna_Action_flip_with_pose_func}
};

/* Action F-Curves */
CollectionPropertyRNA rna_ActionFCurves_rna_properties = {
	{(PropertyRNA *)&rna_ActionFCurves_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionFCurves_rna_properties_begin, ActionFCurves_rna_properties_next, ActionFCurves_rna_properties_end, ActionFCurves_rna_properties_get, NULL, NULL, ActionFCurves_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionFCurves_rna_type = {
	{NULL, (PropertyRNA *)&rna_ActionFCurves_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionFCurves_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionFCurves_new_data_path = {
	{(PropertyRNA *)&rna_ActionFCurves_new_index, NULL,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_ActionFCurves_new_index = {
	{(PropertyRNA *)&rna_ActionFCurves_new_action_group, (PropertyRNA *)&rna_ActionFCurves_new_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ActionFCurves_new_action_group = {
	{(PropertyRNA *)&rna_ActionFCurves_new_fcurve, (PropertyRNA *)&rna_ActionFCurves_new_index,
	-1, "action_group", 262145, 0, 0, 0, 0, "Action Group",
	"Acton group to add this F-Curve into",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_ActionFCurves_new_fcurve = {
	{NULL, (PropertyRNA *)&rna_ActionFCurves_new_action_group,
	-1, "fcurve", 8388608, 0, 2, 0, 0, "",
	"Newly created F-Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_new_func = {
	{(FunctionRNA *)&rna_ActionFCurves_find_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_new_data_path, (PropertyRNA *)&rna_ActionFCurves_new_fcurve}},
	"new", 20, "Add an F-Curve to the action",
	ActionFCurves_new_call,
	(PropertyRNA *)&rna_ActionFCurves_new_fcurve
};

StringPropertyRNA rna_ActionFCurves_find_data_path = {
	{(PropertyRNA *)&rna_ActionFCurves_find_index, NULL,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_ActionFCurves_find_index = {
	{(PropertyRNA *)&rna_ActionFCurves_find_fcurve, (PropertyRNA *)&rna_ActionFCurves_find_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_ActionFCurves_find_fcurve = {
	{NULL, (PropertyRNA *)&rna_ActionFCurves_find_index,
	-1, "fcurve", 8388608, 0, 2, 0, 0, "",
	"The found F-Curve, or None if it doesn\'t exist",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_find_func = {
	{(FunctionRNA *)&rna_ActionFCurves_remove_func, (FunctionRNA *)&rna_ActionFCurves_new_func,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_find_data_path, (PropertyRNA *)&rna_ActionFCurves_find_fcurve}},
	"find", 16, "Find an F-Curve. Note that this function performs a linear scan of all F-Curves in the action.",
	ActionFCurves_find_call,
	(PropertyRNA *)&rna_ActionFCurves_find_fcurve
};

PointerPropertyRNA rna_ActionFCurves_remove_fcurve = {
	{NULL, NULL,
	-1, "fcurve", 262144, 0, 5, 0, 0, "",
	"F-Curve to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_remove_func = {
	{(FunctionRNA *)&rna_ActionFCurves_clear_func, (FunctionRNA *)&rna_ActionFCurves_find_func,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_remove_fcurve, (PropertyRNA *)&rna_ActionFCurves_remove_fcurve}},
	"remove", 16, "Remove F-Curve",
	ActionFCurves_remove_call,
	NULL
};

FunctionRNA rna_ActionFCurves_clear_func = {
	{NULL, (FunctionRNA *)&rna_ActionFCurves_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all F-Curves",
	ActionFCurves_clear_call,
	NULL
};

StructRNA RNA_ActionFCurves = {
	{(ContainerRNA *)&RNA_ActionGroups, (ContainerRNA *)&RNA_Action,
	NULL,
	{(PropertyRNA *)&rna_ActionFCurves_rna_properties, (PropertyRNA *)&rna_ActionFCurves_rna_type}},
	"ActionFCurves", NULL, NULL, 516, NULL, "Action F-Curves",
	"Collection of action F-Curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ActionFCurves_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ActionFCurves_new_func, (FunctionRNA *)&rna_ActionFCurves_clear_func}
};

/* Action Groups */
CollectionPropertyRNA rna_ActionGroups_rna_properties = {
	{(PropertyRNA *)&rna_ActionGroups_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroups_rna_properties_begin, ActionGroups_rna_properties_next, ActionGroups_rna_properties_end, ActionGroups_rna_properties_get, NULL, NULL, ActionGroups_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionGroups_rna_type = {
	{NULL, (PropertyRNA *)&rna_ActionGroups_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionGroups_new_name = {
	{(PropertyRNA *)&rna_ActionGroups_new_action_group, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the action group",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Group"
};

PointerPropertyRNA rna_ActionGroups_new_action_group = {
	{NULL, (PropertyRNA *)&rna_ActionGroups_new_name,
	-1, "action_group", 8388608, 0, 2, 0, 0, "",
	"Newly created action group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_new_func = {
	{(FunctionRNA *)&rna_ActionGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ActionGroups_new_name, (PropertyRNA *)&rna_ActionGroups_new_action_group}},
	"new", 0, "Create a new action group and add it to the action",
	ActionGroups_new_call,
	(PropertyRNA *)&rna_ActionGroups_new_action_group
};

PointerPropertyRNA rna_ActionGroups_remove_action_group = {
	{NULL, NULL,
	-1, "action_group", 262144, 0, 5, 0, 0, "",
	"Action group to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_remove_func = {
	{NULL, (FunctionRNA *)&rna_ActionGroups_new_func,
	NULL,
	{(PropertyRNA *)&rna_ActionGroups_remove_action_group, (PropertyRNA *)&rna_ActionGroups_remove_action_group}},
	"remove", 16, "Remove action group",
	ActionGroups_remove_call,
	NULL
};

StructRNA RNA_ActionGroups = {
	{(ContainerRNA *)&RNA_ActionPoseMarkers, (ContainerRNA *)&RNA_ActionFCurves,
	NULL,
	{(PropertyRNA *)&rna_ActionGroups_rna_properties, (PropertyRNA *)&rna_ActionGroups_rna_type}},
	"ActionGroups", NULL, NULL, 516, NULL, "Action Groups",
	"Collection of action groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ActionGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ActionGroups_new_func, (FunctionRNA *)&rna_ActionGroups_remove_func}
};

/* Action Pose Markers */
CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionPoseMarkers_rna_properties_begin, ActionPoseMarkers_rna_properties_next, ActionPoseMarkers_rna_properties_end, ActionPoseMarkers_rna_properties_get, NULL, NULL, ActionPoseMarkers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionPoseMarkers_rna_type = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_active, (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionPoseMarkers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ActionPoseMarkers_active = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_active_index, (PropertyRNA *)&rna_ActionPoseMarkers_rna_type,
	-1, "active", 8454145, 0, 0, 0, 0, "Active Pose Marker",
	"Active pose marker for this action",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionPoseMarkers_active_get, ActionPoseMarkers_active_set, NULL, NULL,&RNA_TimelineMarker
};

IntPropertyRNA rna_ActionPoseMarkers_active_index = {
	{NULL, (PropertyRNA *)&rna_ActionPoseMarkers_active,
	-1, "active_index", 65539, 0, 0, 0, 0, "Active Pose Marker Index",
	"Index of active pose marker",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionPoseMarkers_active_index_get, ActionPoseMarkers_active_index_set, NULL, NULL, rna_Action_active_pose_marker_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ActionPoseMarkers_new_name = {
	{(PropertyRNA *)&rna_ActionPoseMarkers_new_marker, NULL,
	-1, "name", 262145, 0, 1, 0, 0, NULL,
	"New name for the marker (not unique)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Marker"
};

PointerPropertyRNA rna_ActionPoseMarkers_new_marker = {
	{NULL, (PropertyRNA *)&rna_ActionPoseMarkers_new_name,
	-1, "marker", 8388608, 0, 2, 0, 0, "",
	"Newly created marker",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_new_func = {
	{(FunctionRNA *)&rna_ActionPoseMarkers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ActionPoseMarkers_new_name, (PropertyRNA *)&rna_ActionPoseMarkers_new_marker}},
	"new", 0, "Add a pose marker to the action",
	ActionPoseMarkers_new_call,
	(PropertyRNA *)&rna_ActionPoseMarkers_new_marker
};

PointerPropertyRNA rna_ActionPoseMarkers_remove_marker = {
	{NULL, NULL,
	-1, "marker", 262144, 0, 5, 0, 0, "",
	"Timeline marker to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_remove_func = {
	{NULL, (FunctionRNA *)&rna_ActionPoseMarkers_new_func,
	NULL,
	{(PropertyRNA *)&rna_ActionPoseMarkers_remove_marker, (PropertyRNA *)&rna_ActionPoseMarkers_remove_marker}},
	"remove", 16, "Remove a timeline marker",
	ActionPoseMarkers_remove_call,
	NULL
};

StructRNA RNA_ActionPoseMarkers = {
	{(ContainerRNA *)&RNA_ActionGroup, (ContainerRNA *)&RNA_ActionGroups,
	NULL,
	{(PropertyRNA *)&rna_ActionPoseMarkers_rna_properties, (PropertyRNA *)&rna_ActionPoseMarkers_active_index}},
	"ActionPoseMarkers", NULL, NULL, 516, NULL, "Action Pose Markers",
	"Collection of timeline markers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ActionPoseMarkers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ActionPoseMarkers_new_func, (FunctionRNA *)&rna_ActionPoseMarkers_remove_func}
};

/* Action Group */
CollectionPropertyRNA rna_ActionGroup_rna_properties = {
	{(PropertyRNA *)&rna_ActionGroup_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_rna_properties_begin, ActionGroup_rna_properties_next, ActionGroup_rna_properties_end, ActionGroup_rna_properties_get, NULL, NULL, ActionGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ActionGroup_rna_type = {
	{(PropertyRNA *)&rna_ActionGroup_name, (PropertyRNA *)&rna_ActionGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionGroup_name = {
	{(PropertyRNA *)&rna_ActionGroup_channels, (PropertyRNA *)&rna_ActionGroup_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_name_get, ActionGroup_name_length, ActionGroup_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_ActionGroup_channels = {
	{(PropertyRNA *)&rna_ActionGroup_select, (PropertyRNA *)&rna_ActionGroup_name,
	-1, "channels", 0, 0, 0, 0, 0, "Channels",
	"F-Curves in this group",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_channels_begin, ActionGroup_channels_next, ActionGroup_channels_end, ActionGroup_channels_get, NULL, NULL, NULL, NULL, &RNA_FCurve
};

BoolPropertyRNA rna_ActionGroup_select = {
	{(PropertyRNA *)&rna_ActionGroup_lock, (PropertyRNA *)&rna_ActionGroup_channels,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Action group is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376838, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_select_get, ActionGroup_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_lock = {
	{(PropertyRNA *)&rna_ActionGroup_mute, (PropertyRNA *)&rna_ActionGroup_select,
	-1, "lock", 3, 0, 0, 0, 0, "Lock",
	"Action group is locked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_lock_get, ActionGroup_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_mute = {
	{(PropertyRNA *)&rna_ActionGroup_show_expanded, (PropertyRNA *)&rna_ActionGroup_lock,
	-1, "mute", 3, 0, 0, 0, 0, "Mute",
	"Action group is muted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_mute_get, ActionGroup_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_show_expanded = {
	{(PropertyRNA *)&rna_ActionGroup_show_expanded_graph, (PropertyRNA *)&rna_ActionGroup_mute,
	-1, "show_expanded", 1073741827, 0, 0, 0, 0, "Expanded",
	"Action group is expanded except in graph editor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_show_expanded_get, ActionGroup_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_show_expanded_graph = {
	{(PropertyRNA *)&rna_ActionGroup_use_pin, (PropertyRNA *)&rna_ActionGroup_show_expanded,
	-1, "show_expanded_graph", 1073741827, 0, 0, 0, 0, "Expanded in Graph Editor",
	"Action group is expanded in graph editor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_show_expanded_graph_get, ActionGroup_show_expanded_graph_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ActionGroup_use_pin = {
	{(PropertyRNA *)&rna_ActionGroup_color_set, (PropertyRNA *)&rna_ActionGroup_show_expanded_graph,
	-1, "use_pin", 1073741827, 0, 0, 0, 0, "Pin in Graph Editor",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_use_pin_get, ActionGroup_use_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_ActionGroup_color_set = {
	{(PropertyRNA *)&rna_ActionGroup_is_custom_color_set, (PropertyRNA *)&rna_ActionGroup_use_pin,
	-1, "color_set", 3, 0, 0, 0, 0, "Color Set",
	"Custom color set to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_color_set_get, ActionGroup_color_set_set, NULL, NULL, NULL, rna_enum_color_sets_items, 22, 0
};

BoolPropertyRNA rna_ActionGroup_is_custom_color_set = {
	{(PropertyRNA *)&rna_ActionGroup_colors, (PropertyRNA *)&rna_ActionGroup_color_set,
	-1, "is_custom_color_set", 2, 0, 0, 0, 0, "Custom Color Set",
	"Color set is user-defined instead of a fixed theme color set",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_is_custom_color_set_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ActionGroup_colors = {
	{NULL, (PropertyRNA *)&rna_ActionGroup_is_custom_color_set,
	-1, "colors", 8650752, 0, 0, 0, 0, "Colors",
	"Copy of the colors associated with the group\'s color set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ActionGroup_colors_get, NULL, NULL, NULL,&RNA_ThemeBoneColorSet
};

StructRNA RNA_ActionGroup = {
	{(ContainerRNA *)&RNA_DopeSheet, (ContainerRNA *)&RNA_ActionPoseMarkers,
	NULL,
	{(PropertyRNA *)&rna_ActionGroup_rna_properties, (PropertyRNA *)&rna_ActionGroup_colors}},
	"ActionGroup", NULL, NULL, 516, NULL, "Action Group",
	"Groups of F-Curves",
	"*", 17,
	(PropertyRNA *)&rna_ActionGroup_name, (PropertyRNA *)&rna_ActionGroup_rna_properties,
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

/* Dope Sheet */
CollectionPropertyRNA rna_DopeSheet_rna_properties = {
	{(PropertyRNA *)&rna_DopeSheet_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_rna_properties_begin, DopeSheet_rna_properties_next, DopeSheet_rna_properties_end, DopeSheet_rna_properties_get, NULL, NULL, DopeSheet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DopeSheet_rna_type = {
	{(PropertyRNA *)&rna_DopeSheet_source, (PropertyRNA *)&rna_DopeSheet_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_DopeSheet_source = {
	{(PropertyRNA *)&rna_DopeSheet_show_datablock_filters, (PropertyRNA *)&rna_DopeSheet_rna_type,
	-1, "source", 8388800, 0, 0, 0, 0, "Source",
	"ID-Block representing source data, usually ID_SCE (i.e. Scene)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_source_get, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_DopeSheet_show_datablock_filters = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_selected, (PropertyRNA *)&rna_DopeSheet_source,
	-1, "show_datablock_filters", 4099, 0, 0, 0, 0, "Show Data-Block Filters",
	"Show options for whether channels related to certain types of data are included",
	10, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376832, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_datablock_filters_get, DopeSheet_show_datablock_filters_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_only_selected = {
	{(PropertyRNA *)&rna_DopeSheet_show_hidden, (PropertyRNA *)&rna_DopeSheet_show_datablock_filters,
	-1, "show_only_selected", 3, 0, 0, 0, 0, "Only Show Selected",
	"Only include channels relating to selected objects and data",
	256, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_only_selected_get, DopeSheet_show_only_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_hidden = {
	{(PropertyRNA *)&rna_DopeSheet_use_datablock_sort, (PropertyRNA *)&rna_DopeSheet_show_only_selected,
	-1, "show_hidden", 3, 0, 0, 0, 0, "Show Hidden",
	"Include channels from objects/bone that are not visible",
	48, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_hidden_get, DopeSheet_show_hidden_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_use_datablock_sort = {
	{(PropertyRNA *)&rna_DopeSheet_use_filter_invert, (PropertyRNA *)&rna_DopeSheet_show_hidden,
	-1, "use_datablock_sort", 3, 0, 0, 0, 0, "Sort Data-Blocks",
	"Alphabetically sorts data-blocks - mainly objects in the scene (disable to increase viewport speed)",
	676, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_use_datablock_sort_get, DopeSheet_use_datablock_sort_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_use_filter_invert = {
	{(PropertyRNA *)&rna_DopeSheet_show_only_errors, (PropertyRNA *)&rna_DopeSheet_use_datablock_sort,
	-1, "use_filter_invert", 3, 0, 0, 0, 0, "Invert",
	"Invert filter search",
	61, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_use_filter_invert_get, DopeSheet_use_filter_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_only_errors = {
	{(PropertyRNA *)&rna_DopeSheet_filter_collection, (PropertyRNA *)&rna_DopeSheet_use_filter_invert,
	-1, "show_only_errors", 3, 0, 0, 0, 0, "Only Show Errors",
	"Only include F-Curves and drivers that are disabled or have errors",
	2, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_only_errors_get, DopeSheet_show_only_errors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DopeSheet_filter_collection = {
	{(PropertyRNA *)&rna_DopeSheet_filter_fcurve_name, (PropertyRNA *)&rna_DopeSheet_show_only_errors,
	-1, "filter_collection", 8388737, 0, 0, 0, 0, "Filtering Collection",
	"Collection that included object should be a member of",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_filter_collection_get, DopeSheet_filter_collection_set, NULL, NULL,&RNA_Collection
};

StringPropertyRNA rna_DopeSheet_filter_fcurve_name = {
	{(PropertyRNA *)&rna_DopeSheet_filter_text, (PropertyRNA *)&rna_DopeSheet_filter_collection,
	-1, "filter_fcurve_name", -2147221503, 0, 0, 0, 0, "F-Curve Name Filter",
	"F-Curve live filtering string",
	30, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_filter_fcurve_name_get, DopeSheet_filter_fcurve_name_length, DopeSheet_filter_fcurve_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_DopeSheet_filter_text = {
	{(PropertyRNA *)&rna_DopeSheet_use_multi_word_filter, (PropertyRNA *)&rna_DopeSheet_filter_fcurve_name,
	-1, "filter_text", -2147221503, 0, 0, 0, 0, "Name Filter",
	"Live filtering string",
	30, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_filter_text_get, DopeSheet_filter_text_length, DopeSheet_filter_text_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_DopeSheet_use_multi_word_filter = {
	{(PropertyRNA *)&rna_DopeSheet_show_missing_nla, (PropertyRNA *)&rna_DopeSheet_filter_text,
	-1, "use_multi_word_filter", 3, 0, 0, 0, 0, "Multi-Word Fuzzy Filter",
	"Perform fuzzy/multi-word matching.\nWarning: May be slow",
	676, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_use_multi_word_filter_get, DopeSheet_use_multi_word_filter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_missing_nla = {
	{(PropertyRNA *)&rna_DopeSheet_show_summary, (PropertyRNA *)&rna_DopeSheet_use_multi_word_filter,
	-1, "show_missing_nla", 3, 0, 0, 0, 0, "Include Missing NLA",
	"Include animation data-blocks with no NLA data (NLA editor only)",
	115, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_missing_nla_get, DopeSheet_show_missing_nla_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_summary = {
	{(PropertyRNA *)&rna_DopeSheet_show_expanded_summary, (PropertyRNA *)&rna_DopeSheet_show_missing_nla,
	-1, "show_summary", 3, 0, 0, 0, 0, "Display Summary",
	"Display an additional \'summary\' line (Dope Sheet editors only)",
	29, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_summary_get, DopeSheet_show_summary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_expanded_summary = {
	{(PropertyRNA *)&rna_DopeSheet_show_transforms, (PropertyRNA *)&rna_DopeSheet_show_summary,
	-1, "show_expanded_summary", 3, 0, 0, 0, 0, "Collapse Summary",
	"Collapse summary when shown, so all other channels get hidden (Dope Sheet editors only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_expanded_summary_get, DopeSheet_show_expanded_summary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_transforms = {
	{(PropertyRNA *)&rna_DopeSheet_show_shapekeys, (PropertyRNA *)&rna_DopeSheet_show_expanded_summary,
	-1, "show_transforms", 3, 0, 0, 0, 0, "Display Transforms",
	"Include visualization of object-level animation data (mostly transforms)",
	593, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_transforms_get, DopeSheet_show_transforms_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_shapekeys = {
	{(PropertyRNA *)&rna_DopeSheet_show_modifiers, (PropertyRNA *)&rna_DopeSheet_show_transforms,
	-1, "show_shapekeys", 3, 0, 0, 0, 0, "Display Shape Keys",
	"Include visualization of shape key related animation data",
	176, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_shapekeys_get, DopeSheet_show_shapekeys_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_modifiers = {
	{(PropertyRNA *)&rna_DopeSheet_show_meshes, (PropertyRNA *)&rna_DopeSheet_show_shapekeys,
	-1, "show_modifiers", 3, 0, 0, 0, 0, "Display Modifier Data",
	"Include visualization of animation data related to data-blocks linked to modifiers",
	442, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_modifiers_get, DopeSheet_show_modifiers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_meshes = {
	{(PropertyRNA *)&rna_DopeSheet_show_lattices, (PropertyRNA *)&rna_DopeSheet_show_modifiers,
	-1, "show_meshes", 3, 0, 0, 0, 0, "Display Meshes",
	"Include visualization of mesh related animation data",
	235, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_meshes_get, DopeSheet_show_meshes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_lattices = {
	{(PropertyRNA *)&rna_DopeSheet_show_cameras, (PropertyRNA *)&rna_DopeSheet_show_meshes,
	-1, "show_lattices", 3, 0, 0, 0, 0, "Display Lattices",
	"Include visualization of lattice related animation data",
	237, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_lattices_get, DopeSheet_show_lattices_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_cameras = {
	{(PropertyRNA *)&rna_DopeSheet_show_materials, (PropertyRNA *)&rna_DopeSheet_show_lattices,
	-1, "show_cameras", 3, 0, 0, 0, 0, "Display Camera",
	"Include visualization of camera related animation data",
	240, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_cameras_get, DopeSheet_show_cameras_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_materials = {
	{(PropertyRNA *)&rna_DopeSheet_show_lights, (PropertyRNA *)&rna_DopeSheet_show_cameras,
	-1, "show_materials", 3, 0, 0, 0, 0, "Display Material",
	"Include visualization of material related animation data",
	165, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_materials_get, DopeSheet_show_materials_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_lights = {
	{(PropertyRNA *)&rna_DopeSheet_show_linestyles, (PropertyRNA *)&rna_DopeSheet_show_materials,
	-1, "show_lights", 3, 0, 0, 0, 0, "Display Light",
	"Include visualization of light related animation data",
	239, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_lights_get, DopeSheet_show_lights_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_linestyles = {
	{(PropertyRNA *)&rna_DopeSheet_show_textures, (PropertyRNA *)&rna_DopeSheet_show_lights,
	-1, "show_linestyles", 3, 0, 0, 0, 0, "Display Line Style",
	"Include visualization of Line Style related Animation data",
	198, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_linestyles_get, DopeSheet_show_linestyles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_textures = {
	{(PropertyRNA *)&rna_DopeSheet_show_curves, (PropertyRNA *)&rna_DopeSheet_show_linestyles,
	-1, "show_textures", 3, 0, 0, 0, 0, "Display Texture",
	"Include visualization of texture related animation data",
	166, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_textures_get, DopeSheet_show_textures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_curves = {
	{(PropertyRNA *)&rna_DopeSheet_show_worlds, (PropertyRNA *)&rna_DopeSheet_show_textures,
	-1, "show_curves", 3, 0, 0, 0, 0, "Display Curve",
	"Include visualization of curve related animation data",
	161, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_curves_get, DopeSheet_show_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_worlds = {
	{(PropertyRNA *)&rna_DopeSheet_show_scenes, (PropertyRNA *)&rna_DopeSheet_show_curves,
	-1, "show_worlds", 3, 0, 0, 0, 0, "Display World",
	"Include visualization of world related animation data",
	158, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_worlds_get, DopeSheet_show_worlds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_scenes = {
	{(PropertyRNA *)&rna_DopeSheet_show_particles, (PropertyRNA *)&rna_DopeSheet_show_worlds,
	-1, "show_scenes", 3, 0, 0, 0, 0, "Display Scene",
	"Include visualization of scene related animation data",
	156, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_scenes_get, DopeSheet_show_scenes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_particles = {
	{(PropertyRNA *)&rna_DopeSheet_show_metaballs, (PropertyRNA *)&rna_DopeSheet_show_scenes,
	-1, "show_particles", 3, 0, 0, 0, 0, "Display Particle",
	"Include visualization of particle related animation data",
	169, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_particles_get, DopeSheet_show_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_metaballs = {
	{(PropertyRNA *)&rna_DopeSheet_show_armatures, (PropertyRNA *)&rna_DopeSheet_show_particles,
	-1, "show_metaballs", 3, 0, 0, 0, 0, "Display Metaball",
	"Include visualization of metaball related animation data",
	238, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_metaballs_get, DopeSheet_show_metaballs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_armatures = {
	{(PropertyRNA *)&rna_DopeSheet_show_nodes, (PropertyRNA *)&rna_DopeSheet_show_metaballs,
	-1, "show_armatures", 3, 0, 0, 0, 0, "Display Armature",
	"Include visualization of armature related animation data",
	241, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_armatures_get, DopeSheet_show_armatures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_nodes = {
	{(PropertyRNA *)&rna_DopeSheet_show_speakers, (PropertyRNA *)&rna_DopeSheet_show_armatures,
	-1, "show_nodes", 3, 0, 0, 0, 0, "Display Node",
	"Include visualization of node related animation data",
	119, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_nodes_get, DopeSheet_show_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_speakers = {
	{(PropertyRNA *)&rna_DopeSheet_show_cache_files, (PropertyRNA *)&rna_DopeSheet_show_nodes,
	-1, "show_speakers", 3, 0, 0, 0, 0, "Display Speaker",
	"Include visualization of speaker related animation data",
	244, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_speakers_get, DopeSheet_show_speakers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_cache_files = {
	{(PropertyRNA *)&rna_DopeSheet_show_hair_curves, (PropertyRNA *)&rna_DopeSheet_show_speakers,
	-1, "show_cache_files", 3, 0, 0, 0, 0, "Display Cache Files",
	"Include visualization of cache file related animation data",
	184, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_cache_files_get, DopeSheet_show_cache_files_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_hair_curves = {
	{(PropertyRNA *)&rna_DopeSheet_show_pointclouds, (PropertyRNA *)&rna_DopeSheet_show_cache_files,
	-1, "show_hair_curves", 3, 0, 0, 0, 0, "Display Hair",
	"Include visualization of hair related animation data",
	650, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_hair_curves_get, DopeSheet_show_hair_curves_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_pointclouds = {
	{(PropertyRNA *)&rna_DopeSheet_show_volumes, (PropertyRNA *)&rna_DopeSheet_show_hair_curves,
	-1, "show_pointclouds", 3, 0, 0, 0, 0, "Display Point Cloud",
	"Include visualization of point cloud related animation data",
	653, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_pointclouds_get, DopeSheet_show_pointclouds_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_volumes = {
	{(PropertyRNA *)&rna_DopeSheet_show_gpencil, (PropertyRNA *)&rna_DopeSheet_show_pointclouds,
	-1, "show_volumes", 3, 0, 0, 0, 0, "Display Volume",
	"Include visualization of volume related animation data",
	656, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_volumes_get, DopeSheet_show_volumes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_gpencil = {
	{(PropertyRNA *)&rna_DopeSheet_show_movieclips, (PropertyRNA *)&rna_DopeSheet_show_volumes,
	-1, "show_gpencil", 3, 0, 0, 0, 0, "Display Grease Pencil",
	"Include visualization of Grease Pencil related animation data and frames",
	247, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_gpencil_get, DopeSheet_show_gpencil_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DopeSheet_show_movieclips = {
	{NULL, (PropertyRNA *)&rna_DopeSheet_show_gpencil,
	-1, "show_movieclips", 3, 0, 0, 0, 0, "Display Movie Clips",
	"Include visualization of movie clip related animation data",
	123, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DopeSheet_show_movieclips_get, DopeSheet_show_movieclips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_DopeSheet = {
	{(ContainerRNA *)&RNA_AnimData, (ContainerRNA *)&RNA_ActionGroup,
	NULL,
	{(PropertyRNA *)&rna_DopeSheet_rna_properties, (PropertyRNA *)&rna_DopeSheet_show_movieclips}},
	"DopeSheet", NULL, NULL, 516, NULL, "Dope Sheet",
	"Settings for filtering the channels shown in animation editors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DopeSheet_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_DopeSheet_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

