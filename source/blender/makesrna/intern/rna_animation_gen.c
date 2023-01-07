
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

#include "rna_animation.c"
#include "rna_animation_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_AnimData_rna_properties;
PointerPropertyRNA rna_AnimData_rna_type;
CollectionPropertyRNA rna_AnimData_nla_tracks;
PointerPropertyRNA rna_AnimData_action;
EnumPropertyRNA rna_AnimData_action_extrapolation;
EnumPropertyRNA rna_AnimData_action_blend_type;
FloatPropertyRNA rna_AnimData_action_influence;
CollectionPropertyRNA rna_AnimData_drivers;
BoolPropertyRNA rna_AnimData_use_nla;
BoolPropertyRNA rna_AnimData_use_tweak_mode;
BoolPropertyRNA rna_AnimData_use_pin;

extern FunctionRNA rna_AnimData_nla_tweak_strip_time_to_scene_func;
extern FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_frame;
extern BoolPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_invert;
extern FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_result;



CollectionPropertyRNA rna_NlaTracks_rna_properties;
PointerPropertyRNA rna_NlaTracks_rna_type;
PointerPropertyRNA rna_NlaTracks_active;

extern FunctionRNA rna_NlaTracks_new_func;
extern PointerPropertyRNA rna_NlaTracks_new_prev;
extern PointerPropertyRNA rna_NlaTracks_new_track;

extern FunctionRNA rna_NlaTracks_remove_func;
extern PointerPropertyRNA rna_NlaTracks_remove_track;



CollectionPropertyRNA rna_AnimDataDrivers_rna_properties;
PointerPropertyRNA rna_AnimDataDrivers_rna_type;

extern FunctionRNA rna_AnimDataDrivers_new_func;
extern StringPropertyRNA rna_AnimDataDrivers_new_data_path;
extern IntPropertyRNA rna_AnimDataDrivers_new_index;
extern PointerPropertyRNA rna_AnimDataDrivers_new_driver;

extern FunctionRNA rna_AnimDataDrivers_remove_func;
extern PointerPropertyRNA rna_AnimDataDrivers_remove_driver;

extern FunctionRNA rna_AnimDataDrivers_from_existing_func;
extern PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver;
extern PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver;

extern FunctionRNA rna_AnimDataDrivers_find_func;
extern StringPropertyRNA rna_AnimDataDrivers_find_data_path;
extern IntPropertyRNA rna_AnimDataDrivers_find_index;
extern PointerPropertyRNA rna_AnimDataDrivers_find_fcurve;



CollectionPropertyRNA rna_KeyingSet_rna_properties;
PointerPropertyRNA rna_KeyingSet_rna_type;
StringPropertyRNA rna_KeyingSet_bl_idname;
StringPropertyRNA rna_KeyingSet_bl_label;
StringPropertyRNA rna_KeyingSet_bl_description;
PointerPropertyRNA rna_KeyingSet_type_info;
CollectionPropertyRNA rna_KeyingSet_paths;
BoolPropertyRNA rna_KeyingSet_is_path_absolute;
BoolPropertyRNA rna_KeyingSet_use_insertkey_override_needed;
BoolPropertyRNA rna_KeyingSet_use_insertkey_override_visual;
BoolPropertyRNA rna_KeyingSet_use_insertkey_override_xyz_to_rgb;
BoolPropertyRNA rna_KeyingSet_use_insertkey_needed;
BoolPropertyRNA rna_KeyingSet_use_insertkey_visual;
BoolPropertyRNA rna_KeyingSet_use_insertkey_xyz_to_rgb;

extern FunctionRNA rna_KeyingSet_refresh_func;


CollectionPropertyRNA rna_KeyingSetPaths_rna_properties;
PointerPropertyRNA rna_KeyingSetPaths_rna_type;
PointerPropertyRNA rna_KeyingSetPaths_active;
IntPropertyRNA rna_KeyingSetPaths_active_index;

extern FunctionRNA rna_KeyingSetPaths_add_func;
extern PointerPropertyRNA rna_KeyingSetPaths_add_ksp;
extern PointerPropertyRNA rna_KeyingSetPaths_add_target_id;
extern StringPropertyRNA rna_KeyingSetPaths_add_data_path;
extern IntPropertyRNA rna_KeyingSetPaths_add_index;
extern EnumPropertyRNA rna_KeyingSetPaths_add_group_method;
extern StringPropertyRNA rna_KeyingSetPaths_add_group_name;

extern FunctionRNA rna_KeyingSetPaths_remove_func;
extern PointerPropertyRNA rna_KeyingSetPaths_remove_path;

extern FunctionRNA rna_KeyingSetPaths_clear_func;


CollectionPropertyRNA rna_KeyingSetPath_rna_properties;
PointerPropertyRNA rna_KeyingSetPath_rna_type;
PointerPropertyRNA rna_KeyingSetPath_id;
EnumPropertyRNA rna_KeyingSetPath_id_type;
StringPropertyRNA rna_KeyingSetPath_group;
EnumPropertyRNA rna_KeyingSetPath_group_method;
StringPropertyRNA rna_KeyingSetPath_data_path;
IntPropertyRNA rna_KeyingSetPath_array_index;
BoolPropertyRNA rna_KeyingSetPath_use_entire_array;
BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_needed;
BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_visual;
BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb;
BoolPropertyRNA rna_KeyingSetPath_use_insertkey_needed;
BoolPropertyRNA rna_KeyingSetPath_use_insertkey_visual;
BoolPropertyRNA rna_KeyingSetPath_use_insertkey_xyz_to_rgb;


CollectionPropertyRNA rna_KeyingSetInfo_rna_properties;
PointerPropertyRNA rna_KeyingSetInfo_rna_type;
StringPropertyRNA rna_KeyingSetInfo_bl_idname;
StringPropertyRNA rna_KeyingSetInfo_bl_label;
StringPropertyRNA rna_KeyingSetInfo_bl_description;
EnumPropertyRNA rna_KeyingSetInfo_bl_options;

extern FunctionRNA rna_KeyingSetInfo_poll_func;
extern BoolPropertyRNA rna_KeyingSetInfo_poll_ok;
extern PointerPropertyRNA rna_KeyingSetInfo_poll_context;

extern FunctionRNA rna_KeyingSetInfo_iterator_func;
extern PointerPropertyRNA rna_KeyingSetInfo_iterator_context;
extern PointerPropertyRNA rna_KeyingSetInfo_iterator_ks;

extern FunctionRNA rna_KeyingSetInfo_generate_func;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_context;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_ks;
extern PointerPropertyRNA rna_KeyingSetInfo_generate_data;


static PointerRNA AnimData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AnimData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimData_rna_properties_get(iter);
    }
}

void AnimData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnimData_rna_properties_get(iter);
    }
}

void AnimData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnimData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA AnimData_nla_tracks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaTrack, rna_iterator_listbase_get(iter));
}

void AnimData_nla_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimData_nla_tracks;

    rna_iterator_listbase_begin(iter, &data->nla_tracks, NULL);

    if (iter->valid) {
        iter->ptr = AnimData_nla_tracks_get(iter);
    }
}

void AnimData_nla_tracks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = AnimData_nla_tracks_get(iter);
    }
}

void AnimData_nla_tracks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnimData_nla_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    AnimData_nla_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_nla_tracks_get(&iter); }
    }

    AnimData_nla_tracks_end(&iter);

    return found;
}

int AnimData_nla_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int NlaTrack_name_length(PointerRNA *);
    extern void NlaTrack_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    AnimData_nla_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                NlaTrack_name_get(&iter.ptr, name);
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
        AnimData_nla_tracks_next(&iter);
    }
    AnimData_nla_tracks_end(&iter);

    return found;
}

PointerRNA AnimData_action_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Action, data->action);
}

void AnimData_action_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AnimData_action_set(ptr, value, reports);
}

int AnimData_action_extrapolation_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->act_extendmode);
}

void AnimData_action_extrapolation_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->act_extendmode = value;
}

int AnimData_action_blend_type_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->act_blendmode);
}

void AnimData_action_blend_type_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->act_blendmode = value;
}

float AnimData_action_influence_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (float)(data->act_influence);
}

void AnimData_action_influence_set(PointerRNA *ptr, float value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->act_influence = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA AnimData_drivers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void AnimData_drivers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimData_drivers;

    rna_iterator_listbase_begin(iter, &data->drivers, NULL);

    if (iter->valid) {
        iter->ptr = AnimData_drivers_get(iter);
    }
}

void AnimData_drivers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = AnimData_drivers_get(iter);
    }
}

void AnimData_drivers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnimData_drivers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    AnimData_drivers_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_drivers_get(&iter); }
    }

    AnimData_drivers_end(&iter);

    return found;
}

bool AnimData_use_nla_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

void AnimData_use_nla_set(PointerRNA *ptr, bool value)
{
    AnimData *data = (AnimData *)(ptr->data);
    if (!value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool AnimData_use_tweak_mode_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void AnimData_use_tweak_mode_set(PointerRNA *ptr, bool value)
{
    rna_AnimData_tweakmode_set(ptr, value);
}

bool AnimData_use_pin_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

void AnimData_use_pin_set(PointerRNA *ptr, bool value)
{
    AnimData *data = (AnimData *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

static PointerRNA NlaTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void NlaTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaTracks_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaTracks_rna_properties_get(iter);
    }
}

void NlaTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaTracks_rna_properties_get(iter);
    }
}

void NlaTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NlaTracks_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA NlaTracks_active_get(PointerRNA *ptr)
{
    return rna_NlaTrack_active_get(ptr);
}

void NlaTracks_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_NlaTrack_active_set(ptr, value, reports);
}

static PointerRNA AnimDataDrivers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AnimDataDrivers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimDataDrivers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimDataDrivers_rna_properties_get(iter);
    }
}

void AnimDataDrivers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnimDataDrivers_rna_properties_get(iter);
    }
}

void AnimDataDrivers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnimDataDrivers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimDataDrivers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA KeyingSet_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void KeyingSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSet_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSet_rna_properties_get(iter);
    }
}

void KeyingSet_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSet_rna_properties_get(iter);
    }
}

void KeyingSet_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int KeyingSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSet_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void KeyingSet_bl_idname_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(value, data->idname, 64);
}

int KeyingSet_bl_idname_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->idname);
}

void KeyingSet_bl_idname_set(PointerRNA *ptr, const char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

void KeyingSet_bl_label_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int KeyingSet_bl_label_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->name);
}

void KeyingSet_bl_label_set(PointerRNA *ptr, const char *value)
{
    rna_KeyingSet_name_set(ptr, value);
}

void KeyingSet_bl_description_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(value, data->description, 240);
}

int KeyingSet_bl_description_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->description);
}

void KeyingSet_bl_description_set(PointerRNA *ptr, const char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 240);
}

PointerRNA KeyingSet_type_info_get(PointerRNA *ptr)
{
    return rna_KeyingSet_typeinfo_get(ptr);
}

static PointerRNA KeyingSet_paths_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyingSetPath, rna_iterator_listbase_get(iter));
}

void KeyingSet_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSet_paths;

    rna_iterator_listbase_begin(iter, &data->paths, NULL);

    if (iter->valid) {
        iter->ptr = KeyingSet_paths_get(iter);
    }
}

void KeyingSet_paths_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSet_paths_get(iter);
    }
}

void KeyingSet_paths_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int KeyingSet_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    KeyingSet_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyingSet_paths_get(&iter); }
    }

    KeyingSet_paths_end(&iter);

    return found;
}

int KeyingSet_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int KeyingSetPath_data_path_length(PointerRNA *);
    extern void KeyingSetPath_data_path_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyingSet_paths_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyingSetPath_data_path_length(&iter.ptr);
            if (namelen < 1024) {
                KeyingSetPath_data_path_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                KeyingSetPath_data_path_get(&iter.ptr, name);
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
        KeyingSet_paths_next(&iter);
    }
    KeyingSet_paths_end(&iter);

    return found;
}

bool KeyingSet_is_path_absolute_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

bool KeyingSet_use_insertkey_override_needed_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingoverride) & 1) != 0);
}

void KeyingSet_use_insertkey_override_needed_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride |= 1; }
    else { data->keyingoverride &= ~1; }
}

bool KeyingSet_use_insertkey_override_visual_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingoverride) & 2) != 0);
}

void KeyingSet_use_insertkey_override_visual_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride |= 2; }
    else { data->keyingoverride &= ~2; }
}

bool KeyingSet_use_insertkey_override_xyz_to_rgb_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingoverride) & 32) != 0);
}

void KeyingSet_use_insertkey_override_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride |= 32; }
    else { data->keyingoverride &= ~32; }
}

bool KeyingSet_use_insertkey_needed_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingflag) & 1) != 0);
}

void KeyingSet_use_insertkey_needed_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag |= 1; }
    else { data->keyingflag &= ~1; }
}

bool KeyingSet_use_insertkey_visual_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingflag) & 2) != 0);
}

void KeyingSet_use_insertkey_visual_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag |= 2; }
    else { data->keyingflag &= ~2; }
}

bool KeyingSet_use_insertkey_xyz_to_rgb_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return (((data->keyingflag) & 32) != 0);
}

void KeyingSet_use_insertkey_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag |= 32; }
    else { data->keyingflag &= ~32; }
}

static PointerRNA KeyingSetPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void KeyingSetPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSetPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetPaths_rna_properties_get(iter);
    }
}

void KeyingSetPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetPaths_rna_properties_get(iter);
    }
}

void KeyingSetPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int KeyingSetPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA KeyingSetPaths_active_get(PointerRNA *ptr)
{
    return rna_KeyingSet_active_ksPath_get(ptr);
}

void KeyingSetPaths_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_KeyingSet_active_ksPath_set(ptr, value, reports);
}

int KeyingSetPaths_active_index_get(PointerRNA *ptr)
{
    return rna_KeyingSet_active_ksPath_index_get(ptr);
}

void KeyingSetPaths_active_index_set(PointerRNA *ptr, int value)
{
    rna_KeyingSet_active_ksPath_index_set(ptr, value);
}

static PointerRNA KeyingSetPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void KeyingSetPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSetPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetPath_rna_properties_get(iter);
    }
}

void KeyingSetPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetPath_rna_properties_get(iter);
    }
}

void KeyingSetPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int KeyingSetPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA KeyingSetPath_id_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

void KeyingSetPath_id_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    KS_Path *data = (KS_Path *)(ptr->data);

    if (data->id) {
        id_us_min((ID *)data->id);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->id = value.data;
}

int KeyingSetPath_id_type_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->idtype);
}

void KeyingSetPath_id_type_set(PointerRNA *ptr, int value)
{
    rna_ksPath_id_type_set(ptr, value);
}

void KeyingSetPath_group_get(PointerRNA *ptr, char *value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    BLI_strncpy_utf8(value, data->group, 64);
}

int KeyingSetPath_group_length(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return strlen(data->group);
}

void KeyingSetPath_group_set(PointerRNA *ptr, const char *value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    BLI_strncpy_utf8(data->group, value, 64);
}

int KeyingSetPath_group_method_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->groupmode);
}

void KeyingSetPath_group_method_set(PointerRNA *ptr, int value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    data->groupmode = value;
}

void KeyingSetPath_data_path_get(PointerRNA *ptr, char *value)
{
    rna_ksPath_RnaPath_get(ptr, value);
}

int KeyingSetPath_data_path_length(PointerRNA *ptr)
{
    return rna_ksPath_RnaPath_length(ptr);
}

void KeyingSetPath_data_path_set(PointerRNA *ptr, const char *value)
{
    rna_ksPath_RnaPath_set(ptr, value);
}

int KeyingSetPath_array_index_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->array_index);
}

void KeyingSetPath_array_index_set(PointerRNA *ptr, int value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    data->array_index = value;
}

bool KeyingSetPath_use_entire_array_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void KeyingSetPath_use_entire_array_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool KeyingSetPath_use_insertkey_override_needed_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingoverride) & 1) != 0);
}

void KeyingSetPath_use_insertkey_override_needed_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride |= 1; }
    else { data->keyingoverride &= ~1; }
}

bool KeyingSetPath_use_insertkey_override_visual_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingoverride) & 2) != 0);
}

void KeyingSetPath_use_insertkey_override_visual_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride |= 2; }
    else { data->keyingoverride &= ~2; }
}

bool KeyingSetPath_use_insertkey_override_xyz_to_rgb_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingoverride) & 32) != 0);
}

void KeyingSetPath_use_insertkey_override_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride |= 32; }
    else { data->keyingoverride &= ~32; }
}

bool KeyingSetPath_use_insertkey_needed_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingflag) & 1) != 0);
}

void KeyingSetPath_use_insertkey_needed_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag |= 1; }
    else { data->keyingflag &= ~1; }
}

bool KeyingSetPath_use_insertkey_visual_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingflag) & 2) != 0);
}

void KeyingSetPath_use_insertkey_visual_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag |= 2; }
    else { data->keyingflag &= ~2; }
}

bool KeyingSetPath_use_insertkey_xyz_to_rgb_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (((data->keyingflag) & 32) != 0);
}

void KeyingSetPath_use_insertkey_xyz_to_rgb_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag |= 32; }
    else { data->keyingflag &= ~32; }
}

static PointerRNA KeyingSetInfo_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void KeyingSetInfo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_KeyingSetInfo_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetInfo_rna_properties_get(iter);
    }
}

void KeyingSetInfo_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetInfo_rna_properties_get(iter);
    }
}

void KeyingSetInfo_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int KeyingSetInfo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA KeyingSetInfo_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void KeyingSetInfo_bl_idname_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(value, data->idname, sizeof(data->idname));
}

int KeyingSetInfo_bl_idname_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->idname);
}

void KeyingSetInfo_bl_idname_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, sizeof(data->idname));
}

void KeyingSetInfo_bl_label_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int KeyingSetInfo_bl_label_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->name);
}

void KeyingSetInfo_bl_label_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, sizeof(data->name));
}

void KeyingSetInfo_bl_description_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(value, data->description, 240);
}

int KeyingSetInfo_bl_description_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->description);
}

void KeyingSetInfo_bl_description_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 240);
}

int KeyingSetInfo_bl_options_get(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return (int)(data->keyingflag);
}

void KeyingSetInfo_bl_options_set(PointerRNA *ptr, int value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    data->keyingflag = value;
}

float AnimData_nla_tweak_strip_time_to_scene_func(struct AnimData *_self, float frame, bool invert)
{
	return rna_AnimData_nla_tweak_strip_time_to_scene(_self, frame, invert);
}

void AnimData_nla_tweak_strip_time_to_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	float frame;
	bool invert;
	float result;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	invert = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_AnimData_nla_tweak_strip_time_to_scene(_self, frame, invert);
	*((float *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

float rna_AnimData_nla_tweak_strip_time_to_scene(struct AnimData *_self, float frame, bool invert);

struct NlaTrack *NlaTracks_new_func(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, struct NlaTrack *prev)
{
	return rna_NlaTrack_new(_selfid, _self, bmain, C, prev);
}

void NlaTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AnimData *_self;
	struct NlaTrack *prev;
	struct NlaTrack *track;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	prev = *((struct NlaTrack **)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_NlaTrack_new(_selfid, _self, CTX_data_main(C), C, prev);
	*((struct NlaTrack **)_retdata) = track;
}

void NlaTracks_remove_func(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *track)
{
	rna_NlaTrack_remove(_selfid, _self, bmain, C, reports, track);
}

void NlaTracks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AnimData *_self;
	struct PointerRNA *track;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	track = *((struct PointerRNA **)_data);
	
	rna_NlaTrack_remove(_selfid, _self, CTX_data_main(C), C, reports, track);
}

/* Repeated prototypes to detect errors */

struct NlaTrack *rna_NlaTrack_new(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, struct NlaTrack *prev);
void rna_NlaTrack_remove(struct ID *_selfid, struct AnimData *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *track);

struct FCurve *AnimDataDrivers_new_func(struct ID *_selfid, struct AnimData *_self, Main *bmain, ReportList *reports, const char * data_path, int index)
{
	return rna_Driver_new(_selfid, _self, bmain, reports, data_path, index);
}

void AnimDataDrivers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AnimData *_self;
	const char * data_path;
	int index;
	struct FCurve *driver;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	driver = rna_Driver_new(_selfid, _self, CTX_data_main(C), reports, data_path, index);
	*((struct FCurve **)_retdata) = driver;
}

void AnimDataDrivers_remove_func(struct AnimData *_self, Main *bmain, ReportList *reports, struct FCurve *driver)
{
	rna_Driver_remove(_self, bmain, reports, driver);
}

void AnimDataDrivers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct FCurve *driver;
	char *_data;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	driver = *((struct FCurve **)_data);
	
	rna_Driver_remove(_self, CTX_data_main(C), reports, driver);
}

struct FCurve *AnimDataDrivers_from_existing_func(struct AnimData *_self, bContext *C, struct FCurve *src_driver)
{
	return rna_Driver_from_existing(_self, C, src_driver);
}

void AnimDataDrivers_from_existing_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	struct FCurve *src_driver;
	struct FCurve *driver;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	src_driver = *((struct FCurve **)_data);
	_data += 8;
	_retdata = _data;
	
	driver = rna_Driver_from_existing(_self, C, src_driver);
	*((struct FCurve **)_retdata) = driver;
}

struct FCurve *AnimDataDrivers_find_func(struct AnimData *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_Driver_find(_self, reports, data_path, index);
}

void AnimDataDrivers_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct AnimData *_self;
	const char * data_path;
	int index;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Driver_find(_self, reports, data_path, index);
	*((struct FCurve **)_retdata) = fcurve;
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Driver_new(struct ID *_selfid, struct AnimData *_self, Main *bmain, ReportList *reports, const char * data_path, int index);
void rna_Driver_remove(struct AnimData *_self, Main *bmain, ReportList *reports, struct FCurve *driver);
struct FCurve *rna_Driver_from_existing(struct AnimData *_self, bContext *C, struct FCurve *src_driver);
struct FCurve *rna_Driver_find(struct AnimData *_self, ReportList *reports, const char * data_path, int index);

void KeyingSet_refresh_func(struct KeyingSet *_self, bContext *C, ReportList *reports)
{
	rna_KeyingSet_context_refresh(_self, C, reports);
}

void KeyingSet_refresh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	_self = (struct KeyingSet *)_ptr->data;
	
	rna_KeyingSet_context_refresh(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_KeyingSet_context_refresh(struct KeyingSet *_self, bContext *C, ReportList *reports);

struct KS_Path *KeyingSetPaths_add_func(struct KeyingSet *_self, ReportList *reports, struct ID *target_id, const char * data_path, int index, int group_method, const char * group_name)
{
	return rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
}

void KeyingSetPaths_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	struct KS_Path *ksp;
	struct ID *target_id;
	const char * data_path;
	int index;
	int group_method;
	const char * group_name;
	char *_data, *_retdata;
	
	_self = (struct KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	target_id = *((struct ID **)_data);
	_data += 8;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	group_method = *((int *)_data);
	_data += 8;
	group_name = *((const char * *)_data);
	
	ksp = rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
	*((struct KS_Path **)_retdata) = ksp;
}

void KeyingSetPaths_remove_func(struct KeyingSet *_self, ReportList *reports, struct PointerRNA *path)
{
	rna_KeyingSet_paths_remove(_self, reports, path);
}

void KeyingSetPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	struct PointerRNA *path;
	char *_data;
	
	_self = (struct KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((struct PointerRNA **)_data);
	
	rna_KeyingSet_paths_remove(_self, reports, path);
}

void KeyingSetPaths_clear_func(struct KeyingSet *_self, ReportList *reports)
{
	rna_KeyingSet_paths_clear(_self, reports);
}

void KeyingSetPaths_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct KeyingSet *_self;
	_self = (struct KeyingSet *)_ptr->data;
	
	rna_KeyingSet_paths_clear(_self, reports);
}

/* Repeated prototypes to detect errors */

struct KS_Path *rna_KeyingSet_paths_add(struct KeyingSet *_self, ReportList *reports, struct ID *target_id, const char * data_path, int index, int group_method, const char * group_name);
void rna_KeyingSet_paths_remove(struct KeyingSet *_self, ReportList *reports, struct PointerRNA *path);
void rna_KeyingSet_paths_clear(struct KeyingSet *_self, ReportList *reports);



/* Animation Data */
CollectionPropertyRNA rna_AnimData_rna_properties = {
	{(PropertyRNA *)&rna_AnimData_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimData_rna_properties_begin, AnimData_rna_properties_next, AnimData_rna_properties_end, AnimData_rna_properties_get, NULL, NULL, AnimData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimData_rna_type = {
	{(PropertyRNA *)&rna_AnimData_nla_tracks, (PropertyRNA *)&rna_AnimData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_AnimData_nla_tracks = {
	{(PropertyRNA *)&rna_AnimData_action, (PropertyRNA *)&rna_AnimData_rna_type,
	-1, "nla_tracks", 0, 3073, 0, 0, 0, "NLA Tracks",
	"NLA Tracks (i.e. Animation Layers)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_NLA_tracks_override_apply,
	0, -1, &RNA_NlaTracks},
	AnimData_nla_tracks_begin, AnimData_nla_tracks_next, AnimData_nla_tracks_end, AnimData_nla_tracks_get, NULL, AnimData_nla_tracks_lookup_int, AnimData_nla_tracks_lookup_string, NULL, &RNA_NlaTrack
};

PointerPropertyRNA rna_AnimData_action = {
	{(PropertyRNA *)&rna_AnimData_action_extrapolation, (PropertyRNA *)&rna_AnimData_nla_tracks,
	-1, "action", 8388801, 1, 0, 0, 0, "Action",
	"Active Action for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_dependency_update, 256507904, rna_AnimData_action_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimData_action_get, AnimData_action_set, NULL, rna_Action_id_poll,&RNA_Action
};

static const EnumPropertyItem rna_AnimData_action_extrapolation_items[4] = {
	{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"},
	{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"},
	{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimData_action_extrapolation = {
	{(PropertyRNA *)&rna_AnimData_action_blend_type, (PropertyRNA *)&rna_AnimData_action,
	-1, "action_extrapolation", 3, 1, 0, 4, 0, "Action Extrapolation",
	"Action to take for gaps past the Active Action\'s range (when evaluating with NLA)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AnimData, act_extendmode), 1, NULL},
	AnimData_action_extrapolation_get, AnimData_action_extrapolation_set, NULL, NULL, NULL, rna_AnimData_action_extrapolation_items, 3, 0
};

static const EnumPropertyItem rna_AnimData_action_blend_type_items[7] = {
	{0, "REPLACE", 0, "Replace", "The strip values replace the accumulated results by amount specified by influence"},
	{4, "COMBINE", 0, "Combine", "The strip values are combined with accumulated results by appropriately using addition, multiplication, or quaternion math, based on channel type"},
	{0, "", 0, NULL, NULL},
	{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"},
	{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"},
	{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimData_action_blend_type = {
	{(PropertyRNA *)&rna_AnimData_action_influence, (PropertyRNA *)&rna_AnimData_action_extrapolation,
	-1, "action_blend_type", 3, 1, 0, 4, 0, "Action Blending",
	"Method used for combining Active Action\'s result with result of NLA stack",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AnimData, act_blendmode), 1, NULL},
	AnimData_action_blend_type_get, AnimData_action_blend_type_set, NULL, NULL, NULL, rna_AnimData_action_blend_type_items, 6, 0
};

FloatPropertyRNA rna_AnimData_action_influence = {
	{(PropertyRNA *)&rna_AnimData_drivers, (PropertyRNA *)&rna_AnimData_action_blend_type,
	-1, "action_influence", 3, 1, 0, 4, 0, "Action Influence",
	"Amount the Active Action contributes to the result of the NLA stack",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AnimData, act_influence), 5, NULL},
	AnimData_action_influence_get, AnimData_action_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 1.0f, NULL
};

CollectionPropertyRNA rna_AnimData_drivers = {
	{(PropertyRNA *)&rna_AnimData_use_nla, (PropertyRNA *)&rna_AnimData_action_influence,
	-1, "drivers", 0, 1, 0, 0, 0, "Drivers",
	"The Drivers/Expressions for this data-block",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AnimDataDrivers},
	AnimData_drivers_begin, AnimData_drivers_next, AnimData_drivers_end, AnimData_drivers_get, NULL, AnimData_drivers_lookup_int, NULL, NULL, &RNA_FCurve
};

BoolPropertyRNA rna_AnimData_use_nla = {
	{(PropertyRNA *)&rna_AnimData_use_tweak_mode, (PropertyRNA *)&rna_AnimData_drivers,
	-1, "use_nla", 3, 1, 0, 0, 0, "NLA Evaluation Enabled",
	"NLA stack is evaluated when evaluating this block",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimData_use_nla_get, AnimData_use_nla_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimData_use_tweak_mode = {
	{(PropertyRNA *)&rna_AnimData_use_pin, (PropertyRNA *)&rna_AnimData_use_nla,
	-1, "use_tweak_mode", 3, 1, 0, 0, 0, "Use NLA Tweak Mode",
	"Whether to enable or disable tweak mode in NLA",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AnimData_update, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimData_use_tweak_mode_get, AnimData_use_tweak_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimData_use_pin = {
	{NULL, (PropertyRNA *)&rna_AnimData_use_tweak_mode,
	-1, "use_pin", 1073741827, 1, 0, 0, 0, "Pin in Graph Editor",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256376833, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimData_use_pin_get, AnimData_use_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_frame = {
	{(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_invert, NULL,
	-1, "frame", 3, 0, 1, 0, 0, "",
	"Input time",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_invert = {
	{(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_result, (PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_frame,
	-1, "invert", 3, 0, 0, 0, 0, "Invert",
	"Convert scene time to action time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_result = {
	{NULL, (PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_invert,
	-1, "result", 3, 0, 2, 0, 0, "",
	"Converted time",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_AnimData_nla_tweak_strip_time_to_scene_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_frame, (PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_result}},
	"nla_tweak_strip_time_to_scene", 0, "Convert a time value from the local time of the tweaked strip to scene time, exactly as done by built-in key editing tools. Returns the input time unchanged if not tweaking.",
	AnimData_nla_tweak_strip_time_to_scene_call,
	(PropertyRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_result
};

StructRNA RNA_AnimData = {
	{(ContainerRNA *)&RNA_NlaTracks, (ContainerRNA *)&RNA_DopeSheet,
	NULL,
	{(PropertyRNA *)&rna_AnimData_rna_properties, (PropertyRNA *)&rna_AnimData_use_pin}},
	"AnimData", NULL, NULL, 516, NULL, "Animation Data",
	"Animation data for data-block",
	"*", 167,
	NULL, (PropertyRNA *)&rna_AnimData_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_func, (FunctionRNA *)&rna_AnimData_nla_tweak_strip_time_to_scene_func}
};

/* NLA Tracks */
CollectionPropertyRNA rna_NlaTracks_rna_properties = {
	{(PropertyRNA *)&rna_NlaTracks_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTracks_rna_properties_begin, NlaTracks_rna_properties_next, NlaTracks_rna_properties_end, NlaTracks_rna_properties_get, NULL, NULL, NlaTracks_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NlaTracks_rna_type = {
	{(PropertyRNA *)&rna_NlaTracks_active, (PropertyRNA *)&rna_NlaTracks_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTracks_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_NlaTracks_active = {
	{NULL, (PropertyRNA *)&rna_NlaTracks_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Track",
	"Active NLA Track",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442374, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTracks_active_get, NlaTracks_active_set, NULL, NULL,&RNA_NlaTrack
};

PointerPropertyRNA rna_NlaTracks_new_prev = {
	{(PropertyRNA *)&rna_NlaTracks_new_track, NULL,
	-1, "prev", 8388608, 0, 0, 0, 0, "",
	"NLA Track to add the new one after",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaTrack
};

PointerPropertyRNA rna_NlaTracks_new_track = {
	{NULL, (PropertyRNA *)&rna_NlaTracks_new_prev,
	-1, "track", 8388608, 0, 2, 0, 0, "",
	"New NLA Track",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaTrack
};

FunctionRNA rna_NlaTracks_new_func = {
	{(FunctionRNA *)&rna_NlaTracks_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_NlaTracks_new_prev, (PropertyRNA *)&rna_NlaTracks_new_track}},
	"new", 2060, "Add a new NLA Track",
	NlaTracks_new_call,
	(PropertyRNA *)&rna_NlaTracks_new_track
};

PointerPropertyRNA rna_NlaTracks_remove_track = {
	{NULL, NULL,
	-1, "track", 262144, 0, 5, 0, 0, "",
	"NLA Track to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaTrack
};

FunctionRNA rna_NlaTracks_remove_func = {
	{NULL, (FunctionRNA *)&rna_NlaTracks_new_func,
	NULL,
	{(PropertyRNA *)&rna_NlaTracks_remove_track, (PropertyRNA *)&rna_NlaTracks_remove_track}},
	"remove", 2076, "Remove a NLA Track",
	NlaTracks_remove_call,
	NULL
};

StructRNA RNA_NlaTracks = {
	{(ContainerRNA *)&RNA_AnimDataDrivers, (ContainerRNA *)&RNA_AnimData,
	NULL,
	{(PropertyRNA *)&rna_NlaTracks_rna_properties, (PropertyRNA *)&rna_NlaTracks_active}},
	"NlaTracks", NULL, NULL, 516, NULL, "NLA Tracks",
	"Collection of NLA Tracks",
	"*", 17,
	NULL, (PropertyRNA *)&rna_NlaTracks_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_NlaTracks_new_func, (FunctionRNA *)&rna_NlaTracks_remove_func}
};

/* Drivers */
CollectionPropertyRNA rna_AnimDataDrivers_rna_properties = {
	{(PropertyRNA *)&rna_AnimDataDrivers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimDataDrivers_rna_properties_begin, AnimDataDrivers_rna_properties_next, AnimDataDrivers_rna_properties_end, AnimDataDrivers_rna_properties_get, NULL, NULL, AnimDataDrivers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimDataDrivers_rna_type = {
	{NULL, (PropertyRNA *)&rna_AnimDataDrivers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimDataDrivers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_AnimDataDrivers_new_data_path = {
	{(PropertyRNA *)&rna_AnimDataDrivers_new_index, NULL,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_AnimDataDrivers_new_index = {
	{(PropertyRNA *)&rna_AnimDataDrivers_new_driver, (PropertyRNA *)&rna_AnimDataDrivers_new_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_AnimDataDrivers_new_driver = {
	{NULL, (PropertyRNA *)&rna_AnimDataDrivers_new_index,
	-1, "driver", 8388608, 0, 2, 0, 0, "",
	"Newly Driver F-Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_new_func = {
	{(FunctionRNA *)&rna_AnimDataDrivers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_new_data_path, (PropertyRNA *)&rna_AnimDataDrivers_new_driver}},
	"new", 2068, "new",
	AnimDataDrivers_new_call,
	(PropertyRNA *)&rna_AnimDataDrivers_new_driver
};

PointerPropertyRNA rna_AnimDataDrivers_remove_driver = {
	{NULL, NULL,
	-1, "driver", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_remove_func = {
	{(FunctionRNA *)&rna_AnimDataDrivers_from_existing_func, (FunctionRNA *)&rna_AnimDataDrivers_new_func,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_remove_driver, (PropertyRNA *)&rna_AnimDataDrivers_remove_driver}},
	"remove", 20, "remove",
	AnimDataDrivers_remove_call,
	NULL
};

PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver = {
	{(PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver, NULL,
	-1, "src_driver", 8388608, 0, 0, 0, 0, "",
	"Existing Driver F-Curve to use as template for a new one",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver = {
	{NULL, (PropertyRNA *)&rna_AnimDataDrivers_from_existing_src_driver,
	-1, "driver", 8388608, 0, 2, 0, 0, "",
	"New Driver F-Curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_from_existing_func = {
	{(FunctionRNA *)&rna_AnimDataDrivers_find_func, (FunctionRNA *)&rna_AnimDataDrivers_remove_func,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_from_existing_src_driver, (PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver}},
	"from_existing", 8, "Add a new driver given an existing one",
	AnimDataDrivers_from_existing_call,
	(PropertyRNA *)&rna_AnimDataDrivers_from_existing_driver
};

StringPropertyRNA rna_AnimDataDrivers_find_data_path = {
	{(PropertyRNA *)&rna_AnimDataDrivers_find_index, NULL,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data Path",
	"F-Curve data path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_AnimDataDrivers_find_index = {
	{(PropertyRNA *)&rna_AnimDataDrivers_find_fcurve, (PropertyRNA *)&rna_AnimDataDrivers_find_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_AnimDataDrivers_find_fcurve = {
	{NULL, (PropertyRNA *)&rna_AnimDataDrivers_find_index,
	-1, "fcurve", 8388608, 0, 2, 0, 0, "",
	"The found F-Curve, or None if it doesn\'t exist",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_AnimDataDrivers_find_func = {
	{NULL, (FunctionRNA *)&rna_AnimDataDrivers_from_existing_func,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_find_data_path, (PropertyRNA *)&rna_AnimDataDrivers_find_fcurve}},
	"find", 16, "Find a driver F-Curve. Note that this function performs a linear scan of all driver F-Curves.",
	AnimDataDrivers_find_call,
	(PropertyRNA *)&rna_AnimDataDrivers_find_fcurve
};

StructRNA RNA_AnimDataDrivers = {
	{(ContainerRNA *)&RNA_KeyingSet, (ContainerRNA *)&RNA_NlaTracks,
	NULL,
	{(PropertyRNA *)&rna_AnimDataDrivers_rna_properties, (PropertyRNA *)&rna_AnimDataDrivers_rna_type}},
	"AnimDataDrivers", NULL, NULL, 516, NULL, "Drivers",
	"Collection of Driver F-Curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimDataDrivers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_AnimDataDrivers_new_func, (FunctionRNA *)&rna_AnimDataDrivers_find_func}
};

/* Keying Set */
CollectionPropertyRNA rna_KeyingSet_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSet_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_rna_properties_begin, KeyingSet_rna_properties_next, KeyingSet_rna_properties_end, KeyingSet_rna_properties_get, NULL, NULL, KeyingSet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSet_rna_type = {
	{(PropertyRNA *)&rna_KeyingSet_bl_idname, (PropertyRNA *)&rna_KeyingSet_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyingSet_bl_idname = {
	{(PropertyRNA *)&rna_KeyingSet_bl_label, (PropertyRNA *)&rna_KeyingSet_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_bl_idname_get, KeyingSet_bl_idname_length, KeyingSet_bl_idname_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_KeyingSet_bl_label = {
	{(PropertyRNA *)&rna_KeyingSet_bl_description, (PropertyRNA *)&rna_KeyingSet_bl_idname,
	-1, "bl_label", 262145, 0, 0, 0, 0, "UI Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 84803589, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_bl_label_get, KeyingSet_bl_label_length, KeyingSet_bl_label_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_KeyingSet_bl_description = {
	{(PropertyRNA *)&rna_KeyingSet_type_info, (PropertyRNA *)&rna_KeyingSet_bl_label,
	-1, "bl_description", 262145, 0, 0, 0, 0, "Description",
	"A short description of the keying set",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_bl_description_get, KeyingSet_bl_description_length, KeyingSet_bl_description_set, NULL, NULL, NULL, NULL, 0, 240, ""
};

PointerPropertyRNA rna_KeyingSet_type_info = {
	{(PropertyRNA *)&rna_KeyingSet_paths, (PropertyRNA *)&rna_KeyingSet_bl_description,
	-1, "type_info", 8388608, 0, 0, 0, 0, "Type Info",
	"Callback function defines for built-in Keying Sets",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_type_info_get, NULL, NULL, NULL,&RNA_KeyingSetInfo
};

CollectionPropertyRNA rna_KeyingSet_paths = {
	{(PropertyRNA *)&rna_KeyingSet_is_path_absolute, (PropertyRNA *)&rna_KeyingSet_type_info,
	-1, "paths", 0, 0, 0, 0, 0, "Paths",
	"Keying Set Paths to define settings that get keyframed together",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_KeyingSetPaths},
	KeyingSet_paths_begin, KeyingSet_paths_next, KeyingSet_paths_end, KeyingSet_paths_get, NULL, KeyingSet_paths_lookup_int, KeyingSet_paths_lookup_string, NULL, &RNA_KeyingSetPath
};

BoolPropertyRNA rna_KeyingSet_is_path_absolute = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_override_needed, (PropertyRNA *)&rna_KeyingSet_paths,
	-1, "is_path_absolute", 2, 0, 0, 0, 0, "Absolute",
	"Keying Set defines specific paths/settings to be keyframed (i.e. is not reliant on context info)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_is_path_absolute_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_override_needed = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_override_visual, (PropertyRNA *)&rna_KeyingSet_is_path_absolute,
	-1, "use_insertkey_override_needed", 3, 0, 0, 0, 0, "Override Insert Keyframes Default- Only Needed",
	"Override default setting to only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_use_insertkey_override_needed_get, KeyingSet_use_insertkey_override_needed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_override_visual = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_override_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSet_use_insertkey_override_needed,
	-1, "use_insertkey_override_visual", 3, 0, 0, 0, 0, "Override Insert Keyframes Default - Visual",
	"Override default setting to insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_use_insertkey_override_visual_get, KeyingSet_use_insertkey_override_visual_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_override_xyz_to_rgb = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_needed, (PropertyRNA *)&rna_KeyingSet_use_insertkey_override_visual,
	-1, "use_insertkey_override_xyz_to_rgb", 3, 0, 0, 0, 0, "Override F-Curve Colors - XYZ to RGB",
	"Override default setting to set color for newly added transformation F-Curves (Location, Rotation, Scale) to be based on the transform axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_use_insertkey_override_xyz_to_rgb_get, KeyingSet_use_insertkey_override_xyz_to_rgb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_needed = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_visual, (PropertyRNA *)&rna_KeyingSet_use_insertkey_override_xyz_to_rgb,
	-1, "use_insertkey_needed", 3, 0, 0, 0, 0, "Insert Keyframes - Only Needed",
	"Only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_use_insertkey_needed_get, KeyingSet_use_insertkey_needed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_visual = {
	{(PropertyRNA *)&rna_KeyingSet_use_insertkey_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSet_use_insertkey_needed,
	-1, "use_insertkey_visual", 3, 0, 0, 0, 0, "Insert Keyframes - Visual",
	"Insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_use_insertkey_visual_get, KeyingSet_use_insertkey_visual_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSet_use_insertkey_xyz_to_rgb = {
	{NULL, (PropertyRNA *)&rna_KeyingSet_use_insertkey_visual,
	-1, "use_insertkey_xyz_to_rgb", 3, 0, 0, 0, 0, "F-Curve Colors - XYZ to RGB",
	"Color for newly added transformation F-Curves (Location, Rotation, Scale) is based on the transform axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSet_use_insertkey_xyz_to_rgb_get, KeyingSet_use_insertkey_xyz_to_rgb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_KeyingSet_refresh_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"refresh", 24, "Refresh Keying Set to ensure that it is valid for the current context (call before each use of one)",
	KeyingSet_refresh_call,
	NULL
};

StructRNA RNA_KeyingSet = {
	{(ContainerRNA *)&RNA_KeyingSetPaths, (ContainerRNA *)&RNA_AnimDataDrivers,
	NULL,
	{(PropertyRNA *)&rna_KeyingSet_rna_properties, (PropertyRNA *)&rna_KeyingSet_use_insertkey_xyz_to_rgb}},
	"KeyingSet", NULL, NULL, 516, NULL, "Keying Set",
	"Settings that should be keyframed together",
	"*", 512,
	(PropertyRNA *)&rna_KeyingSet_bl_label, (PropertyRNA *)&rna_KeyingSet_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSet_refresh_func, (FunctionRNA *)&rna_KeyingSet_refresh_func}
};

/* Keying set paths */
CollectionPropertyRNA rna_KeyingSetPaths_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetPaths_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPaths_rna_properties_begin, KeyingSetPaths_rna_properties_next, KeyingSetPaths_rna_properties_end, KeyingSetPaths_rna_properties_get, NULL, NULL, KeyingSetPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetPaths_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetPaths_active, (PropertyRNA *)&rna_KeyingSetPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetPaths_active = {
	{(PropertyRNA *)&rna_KeyingSetPaths_active_index, (PropertyRNA *)&rna_KeyingSetPaths_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Keying Set",
	"Active Keying Set used to insert/delete keyframes",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_KeyingSet_active_ksPath_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPaths_active_get, KeyingSetPaths_active_set, NULL, NULL,&RNA_KeyingSetPath
};

IntPropertyRNA rna_KeyingSetPaths_active_index = {
	{NULL, (PropertyRNA *)&rna_KeyingSetPaths_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Path Index",
	"Current Keying Set index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPaths_active_index_get, KeyingSetPaths_active_index_set, NULL, NULL, rna_KeyingSet_active_ksPath_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_KeyingSetPaths_add_ksp = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_target_id, NULL,
	-1, "ksp", 8388608, 0, 2, 0, 0, "New Path",
	"Path created and added to the Keying Set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSetPath
};

PointerPropertyRNA rna_KeyingSetPaths_add_target_id = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_data_path, (PropertyRNA *)&rna_KeyingSetPaths_add_ksp,
	-1, "target_id", 8388736, 0, 1, 0, 0, "Target ID",
	"ID data-block for the destination",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

StringPropertyRNA rna_KeyingSetPaths_add_data_path = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_index, (PropertyRNA *)&rna_KeyingSetPaths_add_target_id,
	-1, "data_path", 262145, 0, 1, 0, 0, "Data-Path",
	"RNA-Path to destination property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 256, ""
};

IntPropertyRNA rna_KeyingSetPaths_add_index = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_group_method, (PropertyRNA *)&rna_KeyingSetPaths_add_data_path,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"The index of the destination property (i.e. axis of Location/Rotation/etc.), or -1 for the entire array",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

EnumPropertyRNA rna_KeyingSetPaths_add_group_method = {
	{(PropertyRNA *)&rna_KeyingSetPaths_add_group_name, (PropertyRNA *)&rna_KeyingSetPaths_add_index,
	-1, "group_method", 3, 0, 0, 0, 0, "Grouping Method",
	"Method used to define which Group-name to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_keyingset_path_grouping_items, 3, 2
};

StringPropertyRNA rna_KeyingSetPaths_add_group_name = {
	{NULL, (PropertyRNA *)&rna_KeyingSetPaths_add_group_method,
	-1, "group_name", 262145, 0, 0, 0, 0, "Group Name",
	"Name of Action Group to assign destination to (only if grouping mode is to use this name)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

FunctionRNA rna_KeyingSetPaths_add_func = {
	{(FunctionRNA *)&rna_KeyingSetPaths_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPaths_add_ksp, (PropertyRNA *)&rna_KeyingSetPaths_add_group_name}},
	"add", 16, "Add a new path for the Keying Set",
	KeyingSetPaths_add_call,
	(PropertyRNA *)&rna_KeyingSetPaths_add_ksp
};

PointerPropertyRNA rna_KeyingSetPaths_remove_path = {
	{NULL, NULL,
	-1, "path", 262144, 0, 5, 0, 0, "Path",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSetPath
};

FunctionRNA rna_KeyingSetPaths_remove_func = {
	{(FunctionRNA *)&rna_KeyingSetPaths_clear_func, (FunctionRNA *)&rna_KeyingSetPaths_add_func,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPaths_remove_path, (PropertyRNA *)&rna_KeyingSetPaths_remove_path}},
	"remove", 16, "Remove the given path from the Keying Set",
	KeyingSetPaths_remove_call,
	NULL
};

FunctionRNA rna_KeyingSetPaths_clear_func = {
	{NULL, (FunctionRNA *)&rna_KeyingSetPaths_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 16, "Remove all the paths from the Keying Set",
	KeyingSetPaths_clear_call,
	NULL
};

StructRNA RNA_KeyingSetPaths = {
	{(ContainerRNA *)&RNA_KeyingSetPath, (ContainerRNA *)&RNA_KeyingSet,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPaths_rna_properties, (PropertyRNA *)&rna_KeyingSetPaths_active_index}},
	"KeyingSetPaths", NULL, NULL, 516, NULL, "Keying set paths",
	"Collection of keying set paths",
	"*", 17,
	NULL, (PropertyRNA *)&rna_KeyingSetPaths_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSetPaths_add_func, (FunctionRNA *)&rna_KeyingSetPaths_clear_func}
};

/* Keying Set Path */
CollectionPropertyRNA rna_KeyingSetPath_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetPath_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_rna_properties_begin, KeyingSetPath_rna_properties_next, KeyingSetPath_rna_properties_end, KeyingSetPath_rna_properties_get, NULL, NULL, KeyingSetPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetPath_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetPath_id, (PropertyRNA *)&rna_KeyingSetPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyingSetPath_id = {
	{(PropertyRNA *)&rna_KeyingSetPath_id_type, (PropertyRNA *)&rna_KeyingSetPath_rna_type,
	-1, "id", 8388801, 0, 0, 0, 0, "ID-Block",
	"ID-Block that keyframes for Keying Set should be added to (for Absolute Keying Sets only)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84803585, rna_ksPath_id_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_id_get, KeyingSetPath_id_set, rna_ksPath_id_typef, NULL,&RNA_ID
};

EnumPropertyRNA rna_KeyingSetPath_id_type = {
	{(PropertyRNA *)&rna_KeyingSetPath_group, (PropertyRNA *)&rna_KeyingSetPath_id,
	-1, "id_type", 3, 0, 0, 0, 0, "ID Type",
	"Type of ID-block that can be used",
	0, "ID",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84803585, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_id_type_get, KeyingSetPath_id_type_set, NULL, NULL, NULL, rna_enum_id_type_items, 38, 16975
};

StringPropertyRNA rna_KeyingSetPath_group = {
	{(PropertyRNA *)&rna_KeyingSetPath_group_method, (PropertyRNA *)&rna_KeyingSetPath_id_type,
	-1, "group", 262145, 0, 0, 0, 0, "Group Name",
	"Name of Action Group to assign setting(s) for this path to",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 84803585, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_group_get, KeyingSetPath_group_length, KeyingSetPath_group_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_KeyingSetPath_group_method = {
	{(PropertyRNA *)&rna_KeyingSetPath_data_path, (PropertyRNA *)&rna_KeyingSetPath_group,
	-1, "group_method", 3, 0, 0, 4, 0, "Grouping Method",
	"Method used to define which Group-name to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84803585, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(KS_Path, groupmode), 1, NULL},
	KeyingSetPath_group_method_get, KeyingSetPath_group_method_set, NULL, NULL, NULL, rna_enum_keyingset_path_grouping_items, 3, 0
};

StringPropertyRNA rna_KeyingSetPath_data_path = {
	{(PropertyRNA *)&rna_KeyingSetPath_array_index, (PropertyRNA *)&rna_KeyingSetPath_group_method,
	-1, "data_path", 262145, 0, 0, 0, 0, "Data Path",
	"Path to property setting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84803585, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_data_path_get, KeyingSetPath_data_path_length, KeyingSetPath_data_path_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_KeyingSetPath_array_index = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_entire_array, (PropertyRNA *)&rna_KeyingSetPath_data_path,
	-1, "array_index", 3, 0, 0, 4, 0, "RNA Array Index",
	"Index to the specific setting if applicable",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84803585, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(KS_Path, array_index), 0, NULL},
	KeyingSetPath_array_index_get, KeyingSetPath_array_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_entire_array = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_needed, (PropertyRNA *)&rna_KeyingSetPath_array_index,
	-1, "use_entire_array", 3, 0, 0, 0, 0, "Entire Array",
	"When an \'array/vector\' type is chosen (Location, Rotation, Color, etc.), entire array is to be used",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84803585, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_entire_array_get, KeyingSetPath_use_entire_array_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_needed = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_visual, (PropertyRNA *)&rna_KeyingSetPath_use_entire_array,
	-1, "use_insertkey_override_needed", 3, 0, 0, 0, 0, "Override Insert Keyframes Default- Only Needed",
	"Override default setting to only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_insertkey_override_needed_get, KeyingSetPath_use_insertkey_override_needed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_visual = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_needed,
	-1, "use_insertkey_override_visual", 3, 0, 0, 0, 0, "Override Insert Keyframes Default - Visual",
	"Override default setting to insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_insertkey_override_visual_get, KeyingSetPath_use_insertkey_override_visual_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_needed, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_visual,
	-1, "use_insertkey_override_xyz_to_rgb", 3, 0, 0, 0, 0, "Override F-Curve Colors - XYZ to RGB",
	"Override default setting to set color for newly added transformation F-Curves (Location, Rotation, Scale) to be based on the transform axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_insertkey_override_xyz_to_rgb_get, KeyingSetPath_use_insertkey_override_xyz_to_rgb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_needed = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_visual, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_override_xyz_to_rgb,
	-1, "use_insertkey_needed", 3, 0, 0, 0, 0, "Insert Keyframes - Only Needed",
	"Only insert keyframes where they\'re needed in the relevant F-Curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_insertkey_needed_get, KeyingSetPath_use_insertkey_needed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_visual = {
	{(PropertyRNA *)&rna_KeyingSetPath_use_insertkey_xyz_to_rgb, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_needed,
	-1, "use_insertkey_visual", 3, 0, 0, 0, 0, "Insert Keyframes - Visual",
	"Insert keyframes based on \'visual transforms\'",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_insertkey_visual_get, KeyingSetPath_use_insertkey_visual_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KeyingSetPath_use_insertkey_xyz_to_rgb = {
	{NULL, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_visual,
	-1, "use_insertkey_xyz_to_rgb", 3, 0, 0, 0, 0, "F-Curve Colors - XYZ to RGB",
	"Color for newly added transformation F-Curves (Location, Rotation, Scale) is based on the transform axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetPath_use_insertkey_xyz_to_rgb_get, KeyingSetPath_use_insertkey_xyz_to_rgb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_KeyingSetPath = {
	{(ContainerRNA *)&RNA_KeyingSetInfo, (ContainerRNA *)&RNA_KeyingSetPaths,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetPath_rna_properties, (PropertyRNA *)&rna_KeyingSetPath_use_insertkey_xyz_to_rgb}},
	"KeyingSetPath", NULL, NULL, 516, NULL, "Keying Set Path",
	"Path to a setting for use in a Keying Set",
	"*", 17,
	(PropertyRNA *)&rna_KeyingSetPath_data_path, (PropertyRNA *)&rna_KeyingSetPath_rna_properties,
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

/* Keying Set Info */
CollectionPropertyRNA rna_KeyingSetInfo_rna_properties = {
	{(PropertyRNA *)&rna_KeyingSetInfo_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetInfo_rna_properties_begin, KeyingSetInfo_rna_properties_next, KeyingSetInfo_rna_properties_end, KeyingSetInfo_rna_properties_get, NULL, NULL, KeyingSetInfo_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_KeyingSetInfo_rna_type = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_idname, (PropertyRNA *)&rna_KeyingSetInfo_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetInfo_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyingSetInfo_bl_idname = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_label, (PropertyRNA *)&rna_KeyingSetInfo_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetInfo_bl_idname_get, KeyingSetInfo_bl_idname_length, KeyingSetInfo_bl_idname_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_KeyingSetInfo_bl_label = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_description, (PropertyRNA *)&rna_KeyingSetInfo_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "UI Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetInfo_bl_label_get, KeyingSetInfo_bl_label_length, KeyingSetInfo_bl_label_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_KeyingSetInfo_bl_description = {
	{(PropertyRNA *)&rna_KeyingSetInfo_bl_options, (PropertyRNA *)&rna_KeyingSetInfo_bl_label,
	-1, "bl_description", 262193, 0, 0, 0, 0, "Description",
	"A short description of the keying set",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetInfo_bl_description_get, KeyingSetInfo_bl_description_length, KeyingSetInfo_bl_description_set, NULL, NULL, NULL, NULL, 0, 240, ""
};

EnumPropertyRNA rna_KeyingSetInfo_bl_options = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_bl_description,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Keying Set options to use when inserting keyframes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	KeyingSetInfo_bl_options_get, KeyingSetInfo_bl_options_set, NULL, NULL, NULL, rna_enum_keying_flag_items, 3, 1
};

BoolPropertyRNA rna_KeyingSetInfo_poll_ok = {
	{(PropertyRNA *)&rna_KeyingSetInfo_poll_context, NULL,
	-1, "ok", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_KeyingSetInfo_poll_context = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_poll_ok,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_KeyingSetInfo_poll_func = {
	{(FunctionRNA *)&rna_KeyingSetInfo_iterator_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_poll_ok, (PropertyRNA *)&rna_KeyingSetInfo_poll_context}},
	"poll", 32, "Test if Keying Set can be used or not",
	NULL,
	(PropertyRNA *)&rna_KeyingSetInfo_poll_ok
};

PointerPropertyRNA rna_KeyingSetInfo_iterator_context = {
	{(PropertyRNA *)&rna_KeyingSetInfo_iterator_ks, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_KeyingSetInfo_iterator_ks = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_iterator_context,
	-1, "ks", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSet
};

FunctionRNA rna_KeyingSetInfo_iterator_func = {
	{(FunctionRNA *)&rna_KeyingSetInfo_generate_func, (FunctionRNA *)&rna_KeyingSetInfo_poll_func,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_iterator_context, (PropertyRNA *)&rna_KeyingSetInfo_iterator_ks}},
	"iterator", 32, "Call generate() on the structs which have properties to be keyframed",
	NULL,
	NULL
};

PointerPropertyRNA rna_KeyingSetInfo_generate_context = {
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_ks, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_KeyingSetInfo_generate_ks = {
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_data, (PropertyRNA *)&rna_KeyingSetInfo_generate_context,
	-1, "ks", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyingSet
};

PointerPropertyRNA rna_KeyingSetInfo_generate_data = {
	{NULL, (PropertyRNA *)&rna_KeyingSetInfo_generate_ks,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_KeyingSetInfo_generate_func = {
	{NULL, (FunctionRNA *)&rna_KeyingSetInfo_iterator_func,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_generate_context, (PropertyRNA *)&rna_KeyingSetInfo_generate_data}},
	"generate", 32, "Add Paths to the Keying Set to keyframe the properties of the given data",
	NULL,
	NULL
};

StructRNA RNA_KeyingSetInfo = {
	{(ContainerRNA *)&RNA_AnimViz, (ContainerRNA *)&RNA_KeyingSetPath,
	NULL,
	{(PropertyRNA *)&rna_KeyingSetInfo_rna_properties, (PropertyRNA *)&rna_KeyingSetInfo_bl_options}},
	"KeyingSetInfo", NULL, NULL, 516, NULL, "Keying Set Info",
	"Callback function defines for builtin Keying Sets",
	"*", 17,
	(PropertyRNA *)&rna_KeyingSetInfo_bl_label, (PropertyRNA *)&rna_KeyingSetInfo_rna_properties,
	NULL,
	NULL,
	rna_KeyingSetInfo_refine,
	NULL,
	rna_KeyingSetInfo_register,
	rna_KeyingSetInfo_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_KeyingSetInfo_poll_func, (FunctionRNA *)&rna_KeyingSetInfo_generate_func}
};

