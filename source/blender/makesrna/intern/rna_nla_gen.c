
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

#include "rna_nla.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_NlaTrack_rna_properties;
PointerPropertyRNA rna_NlaTrack_rna_type;
CollectionPropertyRNA rna_NlaTrack_strips;
BoolPropertyRNA rna_NlaTrack_is_override_data;
StringPropertyRNA rna_NlaTrack_name;
BoolPropertyRNA rna_NlaTrack_active;
BoolPropertyRNA rna_NlaTrack_is_solo;
BoolPropertyRNA rna_NlaTrack_select;
BoolPropertyRNA rna_NlaTrack_mute;
BoolPropertyRNA rna_NlaTrack_lock;


CollectionPropertyRNA rna_NlaStrips_rna_properties;
PointerPropertyRNA rna_NlaStrips_rna_type;

extern FunctionRNA rna_NlaStrips_new_func;
extern StringPropertyRNA rna_NlaStrips_new_name;
extern IntPropertyRNA rna_NlaStrips_new_start;
extern PointerPropertyRNA rna_NlaStrips_new_action;
extern PointerPropertyRNA rna_NlaStrips_new_strip;

extern FunctionRNA rna_NlaStrips_remove_func;
extern PointerPropertyRNA rna_NlaStrips_remove_strip;



CollectionPropertyRNA rna_NlaStrip_rna_properties;
PointerPropertyRNA rna_NlaStrip_rna_type;
StringPropertyRNA rna_NlaStrip_name;
EnumPropertyRNA rna_NlaStrip_type;
EnumPropertyRNA rna_NlaStrip_extrapolation;
EnumPropertyRNA rna_NlaStrip_blend_type;
FloatPropertyRNA rna_NlaStrip_frame_start;
FloatPropertyRNA rna_NlaStrip_frame_end;
FloatPropertyRNA rna_NlaStrip_frame_start_ui;
FloatPropertyRNA rna_NlaStrip_frame_end_ui;
FloatPropertyRNA rna_NlaStrip_blend_in;
FloatPropertyRNA rna_NlaStrip_blend_out;
BoolPropertyRNA rna_NlaStrip_use_auto_blend;
PointerPropertyRNA rna_NlaStrip_action;
FloatPropertyRNA rna_NlaStrip_action_frame_start;
FloatPropertyRNA rna_NlaStrip_action_frame_end;
FloatPropertyRNA rna_NlaStrip_repeat;
FloatPropertyRNA rna_NlaStrip_scale;
CollectionPropertyRNA rna_NlaStrip_fcurves;
CollectionPropertyRNA rna_NlaStrip_modifiers;
CollectionPropertyRNA rna_NlaStrip_strips;
FloatPropertyRNA rna_NlaStrip_influence;
FloatPropertyRNA rna_NlaStrip_strip_time;
BoolPropertyRNA rna_NlaStrip_use_animated_influence;
BoolPropertyRNA rna_NlaStrip_use_animated_time;
BoolPropertyRNA rna_NlaStrip_use_animated_time_cyclic;
BoolPropertyRNA rna_NlaStrip_active;
BoolPropertyRNA rna_NlaStrip_select;
BoolPropertyRNA rna_NlaStrip_mute;
BoolPropertyRNA rna_NlaStrip_use_reverse;
BoolPropertyRNA rna_NlaStrip_use_sync_length;


CollectionPropertyRNA rna_NlaStripFCurves_rna_properties;
PointerPropertyRNA rna_NlaStripFCurves_rna_type;

extern FunctionRNA rna_NlaStripFCurves_find_func;
extern StringPropertyRNA rna_NlaStripFCurves_find_data_path;
extern IntPropertyRNA rna_NlaStripFCurves_find_index;
extern PointerPropertyRNA rna_NlaStripFCurves_find_fcurve;


static PointerRNA NlaTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void NlaTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaTrack_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaTrack_rna_properties_get(iter);
    }
}

void NlaTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaTrack_rna_properties_get(iter);
    }
}

void NlaTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NlaTrack_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA NlaTrack_strips_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaStrip, rna_iterator_listbase_get(iter));
}

void NlaTrack_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaTrack_strips;

    rna_iterator_listbase_begin(iter, &data->strips, NULL);

    if (iter->valid) {
        iter->ptr = NlaTrack_strips_get(iter);
    }
}

void NlaTrack_strips_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaTrack_strips_get(iter);
    }
}

void NlaTrack_strips_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaTrack_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaTrack_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaTrack_strips_get(&iter); }
    }

    NlaTrack_strips_end(&iter);

    return found;
}

int NlaTrack_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int NlaStrip_name_length(PointerRNA *);
    extern void NlaStrip_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaTrack_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaStrip_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaStrip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                NlaStrip_name_get(&iter.ptr, name);
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
        NlaTrack_strips_next(&iter);
    }
    NlaTrack_strips_end(&iter);

    return found;
}

bool NlaTrack_is_override_data_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return !(((data->flag) & 65536) != 0);
}

void NlaTrack_name_get(PointerRNA *ptr, char *value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int NlaTrack_name_length(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return strlen(data->name);
}

void NlaTrack_name_set(PointerRNA *ptr, const char *value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

bool NlaTrack_active_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

bool NlaTrack_is_solo_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void NlaTrack_is_solo_set(PointerRNA *ptr, bool value)
{
    rna_NlaTrack_solo_set(ptr, value);
}

bool NlaTrack_select_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void NlaTrack_select_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool NlaTrack_mute_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void NlaTrack_mute_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool NlaTrack_lock_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void NlaTrack_lock_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

static PointerRNA NlaStrips_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void NlaStrips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrips_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrips_rna_properties_get(iter);
    }
}

void NlaStrips_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrips_rna_properties_get(iter);
    }
}

void NlaStrips_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaStrips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NlaStrips_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA NlaStrip_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void NlaStrip_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_rna_properties_get(iter);
    }
}

void NlaStrip_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_rna_properties_get(iter);
    }
}

void NlaStrip_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaStrip_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NlaStrip_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void NlaStrip_name_get(PointerRNA *ptr, char *value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int NlaStrip_name_length(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return strlen(data->name);
}

void NlaStrip_name_set(PointerRNA *ptr, const char *value)
{
    rna_NlaStrip_name_set(ptr, value);
}

int NlaStrip_type_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->type);
}

int NlaStrip_extrapolation_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->extendmode);
}

void NlaStrip_extrapolation_set(PointerRNA *ptr, int value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->extendmode = value;
}

int NlaStrip_blend_type_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->blendmode);
}

void NlaStrip_blend_type_set(PointerRNA *ptr, int value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->blendmode = value;
}

float NlaStrip_frame_start_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

void NlaStrip_frame_start_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_start_frame_set(ptr, value);
}

float NlaStrip_frame_end_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

void NlaStrip_frame_end_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_end_frame_set(ptr, value);
}

float NlaStrip_frame_start_ui_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

void NlaStrip_frame_start_ui_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_frame_start_ui_set(ptr, value);
}

float NlaStrip_frame_end_ui_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

void NlaStrip_frame_end_ui_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_frame_end_ui_set(ptr, value);
}

float NlaStrip_blend_in_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->blendin);
}

void NlaStrip_blend_in_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_blend_in_set(ptr, value);
}

float NlaStrip_blend_out_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->blendout);
}

void NlaStrip_blend_out_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_blend_out_set(ptr, value);
}

bool NlaStrip_use_auto_blend_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void NlaStrip_use_auto_blend_set(PointerRNA *ptr, bool value)
{
    rna_NlaStrip_use_auto_blend_set(ptr, value);
}

PointerRNA NlaStrip_action_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Action, data->act);
}

void NlaStrip_action_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    if (data->act) {
        id_us_min((ID *)data->act);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->act = value.data;
}

float NlaStrip_action_frame_start_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->actstart);
}

void NlaStrip_action_frame_start_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_action_start_frame_set(ptr, value);
}

float NlaStrip_action_frame_end_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->actend);
}

void NlaStrip_action_frame_end_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_action_end_frame_set(ptr, value);
}

float NlaStrip_repeat_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->repeat);
}

void NlaStrip_repeat_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_repeat_set(ptr, value);
}

float NlaStrip_scale_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->scale);
}

void NlaStrip_scale_set(PointerRNA *ptr, float value)
{
    rna_NlaStrip_scale_set(ptr, value);
}

static PointerRNA NlaStrip_fcurves_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void NlaStrip_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_fcurves;

    rna_iterator_listbase_begin(iter, &data->fcurves, NULL);

    if (iter->valid) {
        iter->ptr = NlaStrip_fcurves_get(iter);
    }
}

void NlaStrip_fcurves_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_fcurves_get(iter);
    }
}

void NlaStrip_fcurves_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaStrip_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaStrip_fcurves_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_fcurves_get(&iter); }
    }

    NlaStrip_fcurves_end(&iter);

    return found;
}

static PointerRNA NlaStrip_modifiers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifier, rna_iterator_listbase_get(iter));
}

void NlaStrip_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_modifiers;

    rna_iterator_listbase_begin(iter, &data->modifiers, NULL);

    if (iter->valid) {
        iter->ptr = NlaStrip_modifiers_get(iter);
    }
}

void NlaStrip_modifiers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_modifiers_get(iter);
    }
}

void NlaStrip_modifiers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaStrip_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaStrip_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_modifiers_get(&iter); }
    }

    NlaStrip_modifiers_end(&iter);

    return found;
}

static PointerRNA NlaStrip_strips_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_NlaStrip, rna_iterator_listbase_get(iter));
}

void NlaStrip_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStrip_strips;

    rna_iterator_listbase_begin(iter, &data->strips, NULL);

    if (iter->valid) {
        iter->ptr = NlaStrip_strips_get(iter);
    }
}

void NlaStrip_strips_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_strips_get(iter);
    }
}

void NlaStrip_strips_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaStrip_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    NlaStrip_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_strips_get(&iter); }
    }

    NlaStrip_strips_end(&iter);

    return found;
}

int NlaStrip_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int NlaStrip_name_length(PointerRNA *);
    extern void NlaStrip_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaStrip_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaStrip_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaStrip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                NlaStrip_name_get(&iter.ptr, name);
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
        NlaStrip_strips_next(&iter);
    }
    NlaStrip_strips_end(&iter);

    return found;
}

float NlaStrip_influence_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->influence);
}

void NlaStrip_influence_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->influence = CLAMPIS(value, 0.0f, 1.0f);
}

float NlaStrip_strip_time_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->strip_time);
}

void NlaStrip_strip_time_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->strip_time = value;
}

bool NlaStrip_use_animated_influence_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void NlaStrip_use_animated_influence_set(PointerRNA *ptr, bool value)
{
    rna_NlaStrip_animated_influence_set(ptr, value);
}

bool NlaStrip_use_animated_time_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void NlaStrip_use_animated_time_set(PointerRNA *ptr, bool value)
{
    rna_NlaStrip_animated_time_set(ptr, value);
}

bool NlaStrip_use_animated_time_cyclic_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void NlaStrip_use_animated_time_cyclic_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool NlaStrip_active_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

bool NlaStrip_select_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void NlaStrip_select_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool NlaStrip_mute_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void NlaStrip_mute_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool NlaStrip_use_reverse_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void NlaStrip_use_reverse_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool NlaStrip_use_sync_length_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void NlaStrip_use_sync_length_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

static PointerRNA NlaStripFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void NlaStripFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_NlaStripFCurves_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStripFCurves_rna_properties_get(iter);
    }
}

void NlaStripFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = NlaStripFCurves_rna_properties_get(iter);
    }
}

void NlaStripFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int NlaStripFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA NlaStripFCurves_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


struct NlaStrip *NlaStrips_new_func(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, const char * name, int start, struct bAction *action)
{
	return rna_NlaStrip_new(_selfid, _self, bmain, C, reports, name, start, action);
}

void NlaStrips_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct NlaTrack *_self;
	const char * name;
	int start;
	struct bAction *action;
	struct NlaStrip *strip;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct NlaTrack *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	start = *((int *)_data);
	_data += 8;
	action = *((struct bAction **)_data);
	_data += 8;
	_retdata = _data;
	
	strip = rna_NlaStrip_new(_selfid, _self, CTX_data_main(C), C, reports, name, start, action);
	*((struct NlaStrip **)_retdata) = strip;
}

void NlaStrips_remove_func(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *strip)
{
	rna_NlaStrip_remove(_selfid, _self, bmain, C, reports, strip);
}

void NlaStrips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct NlaTrack *_self;
	struct PointerRNA *strip;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct NlaTrack *)_ptr->data;
	_data = (char *)_parms->data;
	strip = *((struct PointerRNA **)_data);
	
	rna_NlaStrip_remove(_selfid, _self, CTX_data_main(C), C, reports, strip);
}

/* Repeated prototypes to detect errors */

struct NlaStrip *rna_NlaStrip_new(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, const char * name, int start, struct bAction *action);
void rna_NlaStrip_remove(struct ID *_selfid, struct NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, struct PointerRNA *strip);


struct FCurve *NlaStripFCurves_find_func(struct NlaStrip *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_NlaStrip_fcurve_find(_self, reports, data_path, index);
}

void NlaStripFCurves_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct NlaStrip *_self;
	const char * data_path;
	int index;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (struct NlaStrip *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_NlaStrip_fcurve_find(_self, reports, data_path, index);
	*((struct FCurve **)_retdata) = fcurve;
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_NlaStrip_fcurve_find(struct NlaStrip *_self, ReportList *reports, const char * data_path, int index);

/* NLA Track */
CollectionPropertyRNA rna_NlaTrack_rna_properties = {
	{(PropertyRNA *)&rna_NlaTrack_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_rna_properties_begin, NlaTrack_rna_properties_next, NlaTrack_rna_properties_end, NlaTrack_rna_properties_get, NULL, NULL, NlaTrack_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NlaTrack_rna_type = {
	{(PropertyRNA *)&rna_NlaTrack_strips, (PropertyRNA *)&rna_NlaTrack_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_NlaTrack_strips = {
	{(PropertyRNA *)&rna_NlaTrack_is_override_data, (PropertyRNA *)&rna_NlaTrack_rna_type,
	-1, "strips", 0, 1, 0, 0, 0, "NLA Strips",
	"NLA Strips on this NLA-track",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_NlaStrips},
	NlaTrack_strips_begin, NlaTrack_strips_next, NlaTrack_strips_end, NlaTrack_strips_get, NULL, NlaTrack_strips_lookup_int, NlaTrack_strips_lookup_string, NULL, &RNA_NlaStrip
};

BoolPropertyRNA rna_NlaTrack_is_override_data = {
	{(PropertyRNA *)&rna_NlaTrack_name, (PropertyRNA *)&rna_NlaTrack_strips,
	-1, "is_override_data", 2, 0, 0, 0, 0, "Override Track",
	"In a local override data, whether this NLA track comes from the linked reference data, or is local to the override",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_is_override_data_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_NlaTrack_name = {
	{(PropertyRNA *)&rna_NlaTrack_active, (PropertyRNA *)&rna_NlaTrack_is_override_data,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_name_get, NlaTrack_name_length, NlaTrack_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_NlaTrack_active = {
	{(PropertyRNA *)&rna_NlaTrack_is_solo, (PropertyRNA *)&rna_NlaTrack_name,
	-1, "active", 2, 1, 0, 0, 0, "Active",
	"NLA Track is active",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_active_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaTrack_is_solo = {
	{(PropertyRNA *)&rna_NlaTrack_select, (PropertyRNA *)&rna_NlaTrack_active,
	-1, "is_solo", 3, 1, 0, 0, 0, "Solo",
	"NLA Track is evaluated itself (i.e. active Action and all other NLA Tracks in the same AnimData block are disabled)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_is_solo_get, NlaTrack_is_solo_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaTrack_select = {
	{(PropertyRNA *)&rna_NlaTrack_mute, (PropertyRNA *)&rna_NlaTrack_is_solo,
	-1, "select", 3, 1, 0, 0, 0, "Select",
	"NLA Track is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_select_get, NlaTrack_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaTrack_mute = {
	{(PropertyRNA *)&rna_NlaTrack_lock, (PropertyRNA *)&rna_NlaTrack_select,
	-1, "mute", 3, 1, 0, 0, 0, "Muted",
	"Disable NLA Track evaluation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_mute_get, NlaTrack_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaTrack_lock = {
	{NULL, (PropertyRNA *)&rna_NlaTrack_mute,
	-1, "lock", 3, 1, 0, 0, 0, "Locked",
	"NLA Track is locked",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaTrack_lock_get, NlaTrack_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_NlaTrack = {
	{(ContainerRNA *)&RNA_NlaStrips, (ContainerRNA *)&RNA_ShaderFxFlip,
	NULL,
	{(PropertyRNA *)&rna_NlaTrack_rna_properties, (PropertyRNA *)&rna_NlaTrack_lock}},
	"NlaTrack", NULL, NULL, 516, NULL, "NLA Track",
	"A animation layer containing Actions referenced as NLA strips",
	"*", 116,
	(PropertyRNA *)&rna_NlaTrack_name, (PropertyRNA *)&rna_NlaTrack_rna_properties,
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

/* Nla Strips */
CollectionPropertyRNA rna_NlaStrips_rna_properties = {
	{(PropertyRNA *)&rna_NlaStrips_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrips_rna_properties_begin, NlaStrips_rna_properties_next, NlaStrips_rna_properties_end, NlaStrips_rna_properties_get, NULL, NULL, NlaStrips_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NlaStrips_rna_type = {
	{NULL, (PropertyRNA *)&rna_NlaStrips_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrips_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_NlaStrips_new_name = {
	{(PropertyRNA *)&rna_NlaStrips_new_start, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"Name for the NLA Strips",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "NlaStrip"
};

IntPropertyRNA rna_NlaStrips_new_start = {
	{(PropertyRNA *)&rna_NlaStrips_new_action, (PropertyRNA *)&rna_NlaStrips_new_name,
	-1, "start", 3, 0, 1, 0, 0, "Start Frame",
	"Start frame for this strip",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_NlaStrips_new_action = {
	{(PropertyRNA *)&rna_NlaStrips_new_strip, (PropertyRNA *)&rna_NlaStrips_new_start,
	-1, "action", 8650880, 0, 1, 0, 0, "",
	"Action to assign to this strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Action
};

PointerPropertyRNA rna_NlaStrips_new_strip = {
	{NULL, (PropertyRNA *)&rna_NlaStrips_new_action,
	-1, "strip", 8388608, 0, 2, 0, 0, "",
	"New NLA Strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaStrip
};

FunctionRNA rna_NlaStrips_new_func = {
	{(FunctionRNA *)&rna_NlaStrips_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_NlaStrips_new_name, (PropertyRNA *)&rna_NlaStrips_new_strip}},
	"new", 2076, "Add a new Action-Clip strip to the track",
	NlaStrips_new_call,
	(PropertyRNA *)&rna_NlaStrips_new_strip
};

PointerPropertyRNA rna_NlaStrips_remove_strip = {
	{NULL, NULL,
	-1, "strip", 262144, 0, 5, 0, 0, "",
	"NLA Strip to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NlaStrip
};

FunctionRNA rna_NlaStrips_remove_func = {
	{NULL, (FunctionRNA *)&rna_NlaStrips_new_func,
	NULL,
	{(PropertyRNA *)&rna_NlaStrips_remove_strip, (PropertyRNA *)&rna_NlaStrips_remove_strip}},
	"remove", 2076, "Remove a NLA Strip",
	NlaStrips_remove_call,
	NULL
};

StructRNA RNA_NlaStrips = {
	{(ContainerRNA *)&RNA_NlaStrip, (ContainerRNA *)&RNA_NlaTrack,
	NULL,
	{(PropertyRNA *)&rna_NlaStrips_rna_properties, (PropertyRNA *)&rna_NlaStrips_rna_type}},
	"NlaStrips", NULL, NULL, 516, NULL, "Nla Strips",
	"Collection of Nla Strips",
	"*", 17,
	NULL, (PropertyRNA *)&rna_NlaStrips_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_NlaStrips_new_func, (FunctionRNA *)&rna_NlaStrips_remove_func}
};

/* NLA Strip */
CollectionPropertyRNA rna_NlaStrip_rna_properties = {
	{(PropertyRNA *)&rna_NlaStrip_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_rna_properties_begin, NlaStrip_rna_properties_next, NlaStrip_rna_properties_end, NlaStrip_rna_properties_get, NULL, NULL, NlaStrip_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NlaStrip_rna_type = {
	{(PropertyRNA *)&rna_NlaStrip_name, (PropertyRNA *)&rna_NlaStrip_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_NlaStrip_name = {
	{(PropertyRNA *)&rna_NlaStrip_type, (PropertyRNA *)&rna_NlaStrip_rna_type,
	-1, "name", 262145, 1, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_name_get, NlaStrip_name_length, NlaStrip_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static const EnumPropertyItem rna_NlaStrip_type_items[5] = {
	{0, "CLIP", 0, "Action Clip", "NLA Strip references some Action"},
	{1, "TRANSITION", 0, "Transition", "NLA Strip \'transitions\' between adjacent strips"},
	{2, "META", 0, "Meta", "NLA Strip acts as a container for adjacent strips"},
	{3, "SOUND", 0, "Sound Clip", "NLA Strip representing a sound event for speakers"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_NlaStrip_type = {
	{(PropertyRNA *)&rna_NlaStrip_extrapolation, (PropertyRNA *)&rna_NlaStrip_name,
	-1, "type", 2, 1, 0, 4, 0, "Type",
	"Type of NLA Strip",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, type), 1, NULL},
	NlaStrip_type_get, NULL, NULL, NULL, NULL, rna_NlaStrip_type_items, 4, 0
};

static const EnumPropertyItem rna_NlaStrip_extrapolation_items[4] = {
	{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"},
	{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"},
	{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_NlaStrip_extrapolation = {
	{(PropertyRNA *)&rna_NlaStrip_blend_type, (PropertyRNA *)&rna_NlaStrip_type,
	-1, "extrapolation", 3, 1, 0, 4, 0, "Extrapolation",
	"Action to take for gaps past the strip extents",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, extendmode), 1, NULL},
	NlaStrip_extrapolation_get, NlaStrip_extrapolation_set, NULL, NULL, NULL, rna_NlaStrip_extrapolation_items, 3, 0
};

static const EnumPropertyItem rna_NlaStrip_blend_type_items[7] = {
	{0, "REPLACE", 0, "Replace", "The strip values replace the accumulated results by amount specified by influence"},
	{4, "COMBINE", 0, "Combine", "The strip values are combined with accumulated results by appropriately using addition, multiplication, or quaternion math, based on channel type"},
	{0, "", 0, NULL, NULL},
	{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"},
	{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"},
	{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_NlaStrip_blend_type = {
	{(PropertyRNA *)&rna_NlaStrip_frame_start, (PropertyRNA *)&rna_NlaStrip_extrapolation,
	-1, "blend_type", 3, 1, 0, 4, 0, "Blending",
	"Method used for combining strip\'s result with accumulated result",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, blendmode), 1, NULL},
	NlaStrip_blend_type_get, NlaStrip_blend_type_set, NULL, NULL, NULL, rna_NlaStrip_blend_type_items, 6, 0
};

FloatPropertyRNA rna_NlaStrip_frame_start = {
	{(PropertyRNA *)&rna_NlaStrip_frame_end, (PropertyRNA *)&rna_NlaStrip_blend_type,
	-1, "frame_start", 3, 1, 0, 0, 0, "Start Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_frame_start_get, NlaStrip_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_frame_end = {
	{(PropertyRNA *)&rna_NlaStrip_frame_start_ui, (PropertyRNA *)&rna_NlaStrip_frame_start,
	-1, "frame_end", 3, 1, 0, 0, 0, "End Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_frame_end_get, NlaStrip_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_frame_start_ui = {
	{(PropertyRNA *)&rna_NlaStrip_frame_end_ui, (PropertyRNA *)&rna_NlaStrip_frame_end,
	-1, "frame_start_ui", 3, 1, 0, 0, 0, "Start Frame (manipulated from UI)",
	"Start frame of the NLA strip. Note: changing this value also updates the value of the strip\'s end frame. If only the start frame should be changed, see the \"frame_start\" property instead",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_frame_start_ui_get, NlaStrip_frame_start_ui_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_frame_end_ui = {
	{(PropertyRNA *)&rna_NlaStrip_blend_in, (PropertyRNA *)&rna_NlaStrip_frame_start_ui,
	-1, "frame_end_ui", 3, 1, 0, 0, 0, "End Frame (manipulated from UI)",
	"End frame of the NLA strip. Note: changing this value also updates the value of the strip\'s repeats or its action\'s end frame. If only the end frame should be changed, see the \"frame_end\" property instead",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_frame_end_ui_get, NlaStrip_frame_end_ui_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_blend_in = {
	{(PropertyRNA *)&rna_NlaStrip_blend_out, (PropertyRNA *)&rna_NlaStrip_frame_end_ui,
	-1, "blend_in", 3, 1, 0, 0, 0, "Blend In",
	"Number of frames at start of strip to fade in influence",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_blend_in_get, NlaStrip_blend_in_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_blend_out = {
	{(PropertyRNA *)&rna_NlaStrip_use_auto_blend, (PropertyRNA *)&rna_NlaStrip_blend_in,
	-1, "blend_out", 3, 1, 0, 0, 0, "Blend Out",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_blend_out_get, NlaStrip_blend_out_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_NlaStrip_use_auto_blend = {
	{(PropertyRNA *)&rna_NlaStrip_action, (PropertyRNA *)&rna_NlaStrip_blend_out,
	-1, "use_auto_blend", 3, 1, 0, 0, 0, "Auto Blend In/Out",
	"Number of frames for Blending In/Out is automatically determined from overlapping strips",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_use_auto_blend_get, NlaStrip_use_auto_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_NlaStrip_action = {
	{(PropertyRNA *)&rna_NlaStrip_action_frame_start, (PropertyRNA *)&rna_NlaStrip_use_auto_blend,
	-1, "action", 8388801, 1, 0, 0, 0, "Action",
	"Action referenced by this strip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_dependency_update, 256442369, rna_NlaStrip_action_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_action_get, NlaStrip_action_set, NULL, rna_Action_id_poll,&RNA_Action
};

FloatPropertyRNA rna_NlaStrip_action_frame_start = {
	{(PropertyRNA *)&rna_NlaStrip_action_frame_end, (PropertyRNA *)&rna_NlaStrip_action,
	-1, "action_frame_start", 3, 1, 0, 0, 0, "Action Start Frame",
	"First frame from action to use",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_action_frame_start_get, NlaStrip_action_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_action_frame_end = {
	{(PropertyRNA *)&rna_NlaStrip_repeat, (PropertyRNA *)&rna_NlaStrip_action_frame_start,
	-1, "action_frame_end", 3, 1, 0, 0, 0, "Action End Frame",
	"Last frame from action to use",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_action_frame_end_get, NlaStrip_action_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_repeat = {
	{(PropertyRNA *)&rna_NlaStrip_scale, (PropertyRNA *)&rna_NlaStrip_action_frame_end,
	-1, "repeat", 3, 1, 0, 0, 0, "Repeat",
	"Number of times to repeat the action range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_repeat_get, NlaStrip_repeat_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 1000.0f, 0.1000000015f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_scale = {
	{(PropertyRNA *)&rna_NlaStrip_fcurves, (PropertyRNA *)&rna_NlaStrip_repeat,
	-1, "scale", 3, 1, 0, 0, 0, "Scale",
	"Scaling factor for action",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_scale_get, NlaStrip_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, 1000.0f, 0.0001000000f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_NlaStrip_fcurves = {
	{(PropertyRNA *)&rna_NlaStrip_modifiers, (PropertyRNA *)&rna_NlaStrip_scale,
	-1, "fcurves", 0, 1, 0, 0, 0, "F-Curves",
	"F-Curves for controlling the strip\'s influence and timing",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_NlaStripFCurves},
	NlaStrip_fcurves_begin, NlaStrip_fcurves_next, NlaStrip_fcurves_end, NlaStrip_fcurves_get, NULL, NlaStrip_fcurves_lookup_int, NULL, NULL, &RNA_FCurve
};

CollectionPropertyRNA rna_NlaStrip_modifiers = {
	{(PropertyRNA *)&rna_NlaStrip_strips, (PropertyRNA *)&rna_NlaStrip_fcurves,
	-1, "modifiers", 0, 1, 0, 0, 0, "Modifiers",
	"Modifiers affecting all the F-Curves in the referenced Action",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_modifiers_begin, NlaStrip_modifiers_next, NlaStrip_modifiers_end, NlaStrip_modifiers_get, NULL, NlaStrip_modifiers_lookup_int, NULL, NULL, &RNA_FModifier
};

CollectionPropertyRNA rna_NlaStrip_strips = {
	{(PropertyRNA *)&rna_NlaStrip_influence, (PropertyRNA *)&rna_NlaStrip_modifiers,
	-1, "strips", 0, 1, 0, 0, 0, "NLA Strips",
	"NLA Strips that this strip acts as a container for (if it is of type Meta)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_strips_begin, NlaStrip_strips_next, NlaStrip_strips_end, NlaStrip_strips_get, NULL, NlaStrip_strips_lookup_int, NlaStrip_strips_lookup_string, NULL, &RNA_NlaStrip
};

FloatPropertyRNA rna_NlaStrip_influence = {
	{(PropertyRNA *)&rna_NlaStrip_strip_time, (PropertyRNA *)&rna_NlaStrip_strips,
	-1, "influence", 3, 1, 0, 4, 0, "Influence",
	"Amount the strip contributes to the current result",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, influence), 5, NULL},
	NlaStrip_influence_get, NlaStrip_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_NlaStrip_strip_time = {
	{(PropertyRNA *)&rna_NlaStrip_use_animated_influence, (PropertyRNA *)&rna_NlaStrip_influence,
	-1, "strip_time", 3, 1, 0, 4, 0, "Strip Time",
	"Frame of referenced Action to evaluate",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(NlaStrip, strip_time), 5, NULL},
	NlaStrip_strip_time_get, NlaStrip_strip_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_NlaStrip_use_animated_influence = {
	{(PropertyRNA *)&rna_NlaStrip_use_animated_time, (PropertyRNA *)&rna_NlaStrip_strip_time,
	-1, "use_animated_influence", 3, 1, 0, 0, 0, "Animated Influence",
	"Influence setting is controlled by an F-Curve rather than automatically determined",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_use_animated_influence_get, NlaStrip_use_animated_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_use_animated_time = {
	{(PropertyRNA *)&rna_NlaStrip_use_animated_time_cyclic, (PropertyRNA *)&rna_NlaStrip_use_animated_influence,
	-1, "use_animated_time", 3, 1, 0, 0, 0, "Animated Strip Time",
	"Strip time is controlled by an F-Curve rather than automatically determined",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_use_animated_time_get, NlaStrip_use_animated_time_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_use_animated_time_cyclic = {
	{(PropertyRNA *)&rna_NlaStrip_active, (PropertyRNA *)&rna_NlaStrip_use_animated_time,
	-1, "use_animated_time_cyclic", 3, 1, 0, 0, 0, "Cyclic Strip Time",
	"Cycle the animated time within the action start and end",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_transform_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_use_animated_time_cyclic_get, NlaStrip_use_animated_time_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_active = {
	{(PropertyRNA *)&rna_NlaStrip_select, (PropertyRNA *)&rna_NlaStrip_use_animated_time_cyclic,
	-1, "active", 2, 1, 0, 0, 0, "Active",
	"NLA Strip is active",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_active_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_select = {
	{(PropertyRNA *)&rna_NlaStrip_mute, (PropertyRNA *)&rna_NlaStrip_active,
	-1, "select", 3, 1, 0, 0, 0, "Select",
	"NLA Strip is selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 256442368, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_select_get, NlaStrip_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_mute = {
	{(PropertyRNA *)&rna_NlaStrip_use_reverse, (PropertyRNA *)&rna_NlaStrip_select,
	-1, "mute", 4355, 1, 0, 0, 0, "Mute",
	"Disable NLA Strip evaluation",
	39, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_mute_get, NlaStrip_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_use_reverse = {
	{(PropertyRNA *)&rna_NlaStrip_use_sync_length, (PropertyRNA *)&rna_NlaStrip_mute,
	-1, "use_reverse", 3, 1, 0, 0, 0, "Reversed",
	"NLA Strip is played back in reverse order (only when timing is automatically determined)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_use_reverse_get, NlaStrip_use_reverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_NlaStrip_use_sync_length = {
	{NULL, (PropertyRNA *)&rna_NlaStrip_use_reverse,
	-1, "use_sync_length", 3, 1, 0, 0, 0, "Sync Action Length",
	"Update range of frames referenced from action after tweaking strip and its keyframes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_NlaStrip_update, 256442369, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStrip_use_sync_length_get, NlaStrip_use_sync_length_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_NlaStrip = {
	{(ContainerRNA *)&RNA_NlaStripFCurves, (ContainerRNA *)&RNA_NlaStrips,
	NULL,
	{(PropertyRNA *)&rna_NlaStrip_rna_properties, (PropertyRNA *)&rna_NlaStrip_use_sync_length}},
	"NlaStrip", NULL, NULL, 516, NULL, "NLA Strip",
	"A container referencing an existing Action",
	"*", 116,
	(PropertyRNA *)&rna_NlaStrip_name, (PropertyRNA *)&rna_NlaStrip_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_NlaStrip_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* NLA-Strip F-Curves */
CollectionPropertyRNA rna_NlaStripFCurves_rna_properties = {
	{(PropertyRNA *)&rna_NlaStripFCurves_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStripFCurves_rna_properties_begin, NlaStripFCurves_rna_properties_next, NlaStripFCurves_rna_properties_end, NlaStripFCurves_rna_properties_get, NULL, NULL, NlaStripFCurves_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_NlaStripFCurves_rna_type = {
	{NULL, (PropertyRNA *)&rna_NlaStripFCurves_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NlaStripFCurves_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_NlaStripFCurves_find_data_path = {
	{(PropertyRNA *)&rna_NlaStripFCurves_find_index, NULL,
	-1, "data_path", 262145, 1, 1, 0, 0, "Data Path",
	"F-Curve data path",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_NlaStripFCurves_find_index = {
	{(PropertyRNA *)&rna_NlaStripFCurves_find_fcurve, (PropertyRNA *)&rna_NlaStripFCurves_find_data_path,
	-1, "index", 3, 1, 0, 0, 0, "Index",
	"Array index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_NlaStripFCurves_find_fcurve = {
	{NULL, (PropertyRNA *)&rna_NlaStripFCurves_find_index,
	-1, "fcurve", 8388608, 1, 2, 0, 0, "",
	"The found F-Curve, or None if it doesn\'t exist",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_NlaStripFCurves_find_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_NlaStripFCurves_find_data_path, (PropertyRNA *)&rna_NlaStripFCurves_find_fcurve}},
	"find", 16, "Find an F-Curve. Note that this function performs a linear scan of all F-Curves in the NLA strip.",
	NlaStripFCurves_find_call,
	(PropertyRNA *)&rna_NlaStripFCurves_find_fcurve
};

StructRNA RNA_NlaStripFCurves = {
	{(ContainerRNA *)&RNA_NodeSocket, (ContainerRNA *)&RNA_NlaStrip,
	NULL,
	{(PropertyRNA *)&rna_NlaStripFCurves_rna_properties, (PropertyRNA *)&rna_NlaStripFCurves_rna_type}},
	"NlaStripFCurves", NULL, NULL, 516, NULL, "NLA-Strip F-Curves",
	"Collection of NLA strip F-Curves",
	"*", 17,
	NULL, (PropertyRNA *)&rna_NlaStripFCurves_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_NlaStripFCurves_find_func, (FunctionRNA *)&rna_NlaStripFCurves_find_func}
};

