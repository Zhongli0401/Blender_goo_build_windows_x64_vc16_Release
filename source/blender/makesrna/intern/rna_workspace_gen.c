
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

#include "rna_workspace.c"
#include "rna_workspace_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_wmOwnerID_rna_properties;
PointerPropertyRNA rna_wmOwnerID_rna_type;
StringPropertyRNA rna_wmOwnerID_name;


CollectionPropertyRNA rna_WorkSpaceTool_rna_properties;
PointerPropertyRNA rna_WorkSpaceTool_rna_type;
StringPropertyRNA rna_WorkSpaceTool_idname;
StringPropertyRNA rna_WorkSpaceTool_idname_fallback;
IntPropertyRNA rna_WorkSpaceTool_index;
EnumPropertyRNA rna_WorkSpaceTool_space_type;
EnumPropertyRNA rna_WorkSpaceTool_mode;
BoolPropertyRNA rna_WorkSpaceTool_use_paint_canvas;
BoolPropertyRNA rna_WorkSpaceTool_has_datablock;
StringPropertyRNA rna_WorkSpaceTool_widget;

extern FunctionRNA rna_WorkSpaceTool_setup_func;
extern StringPropertyRNA rna_WorkSpaceTool_setup_idname;
extern EnumPropertyRNA rna_WorkSpaceTool_setup_cursor;
extern StringPropertyRNA rna_WorkSpaceTool_setup_keymap;
extern StringPropertyRNA rna_WorkSpaceTool_setup_gizmo_group;
extern StringPropertyRNA rna_WorkSpaceTool_setup_data_block;
extern StringPropertyRNA rna_WorkSpaceTool_setup_operator;
extern IntPropertyRNA rna_WorkSpaceTool_setup_index;
extern EnumPropertyRNA rna_WorkSpaceTool_setup_options;
extern StringPropertyRNA rna_WorkSpaceTool_setup_idname_fallback;
extern StringPropertyRNA rna_WorkSpaceTool_setup_keymap_fallback;

extern FunctionRNA rna_WorkSpaceTool_operator_properties_func;
extern StringPropertyRNA rna_WorkSpaceTool_operator_properties_operator;
extern PointerPropertyRNA rna_WorkSpaceTool_operator_properties_result;

extern FunctionRNA rna_WorkSpaceTool_gizmo_group_properties_func;
extern StringPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_group;
extern PointerPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_result;

extern FunctionRNA rna_WorkSpaceTool_refresh_from_context_func;


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

CollectionPropertyRNA rna_WorkSpace_screens;
CollectionPropertyRNA rna_WorkSpace_owner_ids;
CollectionPropertyRNA rna_WorkSpace_tools;
EnumPropertyRNA rna_WorkSpace_object_mode;
BoolPropertyRNA rna_WorkSpace_use_pin_scene;
BoolPropertyRNA rna_WorkSpace_use_filter_by_owner;
EnumPropertyRNA rna_WorkSpace_asset_library_ref;

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


extern FunctionRNA rna_WorkSpace_status_text_set_internal_func;
extern StringPropertyRNA rna_WorkSpace_status_text_set_internal_text;



CollectionPropertyRNA rna_wmOwnerIDs_rna_properties;
PointerPropertyRNA rna_wmOwnerIDs_rna_type;

extern FunctionRNA rna_wmOwnerIDs_new_func;
extern StringPropertyRNA rna_wmOwnerIDs_new_name;
extern PointerPropertyRNA rna_wmOwnerIDs_new_owner_id;

extern FunctionRNA rna_wmOwnerIDs_remove_func;
extern PointerPropertyRNA rna_wmOwnerIDs_remove_owner_id;

extern FunctionRNA rna_wmOwnerIDs_clear_func;


CollectionPropertyRNA rna_wmTools_rna_properties;
PointerPropertyRNA rna_wmTools_rna_type;

extern FunctionRNA rna_wmTools_from_space_view3d_mode_func;
extern EnumPropertyRNA rna_wmTools_from_space_view3d_mode_mode;
extern BoolPropertyRNA rna_wmTools_from_space_view3d_mode_create;
extern PointerPropertyRNA rna_wmTools_from_space_view3d_mode_result;

extern FunctionRNA rna_wmTools_from_space_image_mode_func;
extern EnumPropertyRNA rna_wmTools_from_space_image_mode_mode;
extern BoolPropertyRNA rna_wmTools_from_space_image_mode_create;
extern PointerPropertyRNA rna_wmTools_from_space_image_mode_result;

extern FunctionRNA rna_wmTools_from_space_node_func;
extern BoolPropertyRNA rna_wmTools_from_space_node_create;
extern PointerPropertyRNA rna_wmTools_from_space_node_result;

extern FunctionRNA rna_wmTools_from_space_sequencer_func;
extern EnumPropertyRNA rna_wmTools_from_space_sequencer_mode;
extern BoolPropertyRNA rna_wmTools_from_space_sequencer_create;
extern PointerPropertyRNA rna_wmTools_from_space_sequencer_result;


static PointerRNA wmOwnerID_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void wmOwnerID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_wmOwnerID_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmOwnerID_rna_properties_get(iter);
    }
}

void wmOwnerID_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = wmOwnerID_rna_properties_get(iter);
    }
}

void wmOwnerID_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int wmOwnerID_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA wmOwnerID_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void wmOwnerID_name_get(PointerRNA *ptr, char *value)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int wmOwnerID_name_length(PointerRNA *ptr)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    return strlen(data->name);
}

void wmOwnerID_name_set(PointerRNA *ptr, const char *value)
{
    wmOwnerID *data = (wmOwnerID *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA WorkSpaceTool_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void WorkSpaceTool_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpaceTool_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorkSpaceTool_rna_properties_get(iter);
    }
}

void WorkSpaceTool_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpaceTool_rna_properties_get(iter);
    }
}

void WorkSpaceTool_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int WorkSpaceTool_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WorkSpaceTool_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void WorkSpaceTool_idname_get(PointerRNA *ptr, char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(value, data->idname, 64);
}

int WorkSpaceTool_idname_length(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return strlen(data->idname);
}

void WorkSpaceTool_idname_set(PointerRNA *ptr, const char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

void WorkSpaceTool_idname_fallback_get(PointerRNA *ptr, char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(value, data->idname_fallback, 64);
}

int WorkSpaceTool_idname_fallback_length(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return strlen(data->idname_fallback);
}

void WorkSpaceTool_idname_fallback_set(PointerRNA *ptr, const char *value)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    BLI_strncpy_utf8(data->idname_fallback, value, 64);
}

int WorkSpaceTool_index_get(PointerRNA *ptr)
{
    return rna_WorkSpaceTool_index_get(ptr);
}

int WorkSpaceTool_space_type_get(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return (int)(data->space_type);
}

int WorkSpaceTool_mode_get(PointerRNA *ptr)
{
    bToolRef *data = (bToolRef *)(ptr->data);
    return (int)(data->mode);
}

bool WorkSpaceTool_use_paint_canvas_get(PointerRNA *ptr)
{
    return rna_WorkSpaceTool_use_paint_canvas_get(ptr);
}

bool WorkSpaceTool_has_datablock_get(PointerRNA *ptr)
{
    return rna_WorkSpaceTool_has_datablock_get(ptr);
}

void WorkSpaceTool_widget_get(PointerRNA *ptr, char *value)
{
    rna_WorkSpaceTool_widget_get(ptr, value);
}

int WorkSpaceTool_widget_length(PointerRNA *ptr)
{
    return rna_WorkSpaceTool_widget_length(ptr);
}

static PointerRNA WorkSpace_screens_get(CollectionPropertyIterator *iter)
{
    return rna_workspace_screens_item_get(iter);
}

void WorkSpace_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpace_screens;

    rna_workspace_screens_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorkSpace_screens_get(iter);
    }
}

void WorkSpace_screens_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_screens_get(iter);
    }
}

void WorkSpace_screens_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int WorkSpace_screens_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WorkSpace_screens_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_screens_get(&iter); }
    }

    WorkSpace_screens_end(&iter);

    return found;
}

int WorkSpace_screens_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_screens_begin(&iter, ptr);

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
        WorkSpace_screens_next(&iter);
    }
    WorkSpace_screens_end(&iter);

    return found;
}

static PointerRNA WorkSpace_owner_ids_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_wmOwnerID, rna_iterator_listbase_get(iter));
}

void WorkSpace_owner_ids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpace_owner_ids;

    rna_iterator_listbase_begin(iter, &data->owner_ids, NULL);

    if (iter->valid) {
        iter->ptr = WorkSpace_owner_ids_get(iter);
    }
}

void WorkSpace_owner_ids_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_owner_ids_get(iter);
    }
}

void WorkSpace_owner_ids_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int WorkSpace_owner_ids_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WorkSpace_owner_ids_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_owner_ids_get(&iter); }
    }

    WorkSpace_owner_ids_end(&iter);

    return found;
}

int WorkSpace_owner_ids_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int wmOwnerID_name_length(PointerRNA *);
    extern void wmOwnerID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_owner_ids_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = wmOwnerID_name_length(&iter.ptr);
            if (namelen < 1024) {
                wmOwnerID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                wmOwnerID_name_get(&iter.ptr, name);
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
        WorkSpace_owner_ids_next(&iter);
    }
    WorkSpace_owner_ids_end(&iter);

    return found;
}

static PointerRNA WorkSpace_tools_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_WorkSpaceTool, rna_iterator_listbase_get(iter));
}

void WorkSpace_tools_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorkSpace_tools;

    rna_iterator_listbase_begin(iter, &data->tools, NULL);

    if (iter->valid) {
        iter->ptr = WorkSpace_tools_get(iter);
    }
}

void WorkSpace_tools_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = WorkSpace_tools_get(iter);
    }
}

void WorkSpace_tools_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int WorkSpace_tools_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    WorkSpace_tools_begin(&iter, ptr);

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
        if (found) { *r_ptr = WorkSpace_tools_get(&iter); }
    }

    WorkSpace_tools_end(&iter);

    return found;
}

int WorkSpace_tools_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int WorkSpaceTool_idname_length(PointerRNA *);
    extern void WorkSpaceTool_idname_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    WorkSpace_tools_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = WorkSpaceTool_idname_length(&iter.ptr);
            if (namelen < 1024) {
                WorkSpaceTool_idname_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                WorkSpaceTool_idname_get(&iter.ptr, name);
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
        WorkSpace_tools_next(&iter);
    }
    WorkSpace_tools_end(&iter);

    return found;
}

int WorkSpace_object_mode_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (int)(data->object_mode);
}

void WorkSpace_object_mode_set(PointerRNA *ptr, int value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    data->object_mode = value;
}

bool WorkSpace_use_pin_scene_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (((data->flags) & 4) != 0);
}

void WorkSpace_use_pin_scene_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags |= 4; }
    else { data->flags &= ~4; }
}

bool WorkSpace_use_filter_by_owner_get(PointerRNA *ptr)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    return (((data->flags) & 2) != 0);
}

void WorkSpace_use_filter_by_owner_set(PointerRNA *ptr, bool value)
{
    WorkSpace *data = (WorkSpace *)(ptr->data);
    if (value) { data->flags |= 2; }
    else { data->flags &= ~2; }
}

int WorkSpace_asset_library_ref_get(PointerRNA *ptr)
{
    return rna_WorkSpace_asset_library_get(ptr);
}

void WorkSpace_asset_library_ref_set(PointerRNA *ptr, int value)
{
    rna_WorkSpace_asset_library_set(ptr, value);
}

static PointerRNA wmOwnerIDs_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void wmOwnerIDs_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_wmOwnerIDs_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmOwnerIDs_rna_properties_get(iter);
    }
}

void wmOwnerIDs_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = wmOwnerIDs_rna_properties_get(iter);
    }
}

void wmOwnerIDs_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int wmOwnerIDs_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA wmOwnerIDs_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA wmTools_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void wmTools_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_wmTools_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = wmTools_rna_properties_get(iter);
    }
}

void wmTools_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = wmTools_rna_properties_get(iter);
    }
}

void wmTools_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int wmTools_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA wmTools_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


void WorkSpaceTool_setup_func(struct ID *_selfid, struct bToolRef *_self, bContext *C, const char * idname, int cursor, const char * keymap, const char * gizmo_group, const char * data_block, const char * operator_value, int index, int options, const char * idname_fallback, const char * keymap_fallback)
{
	rna_WorkSpaceTool_setup(_selfid, _self, C, idname, cursor, keymap, gizmo_group, data_block, operator_value, index, options, idname_fallback, keymap_fallback);
}

void WorkSpaceTool_setup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bToolRef *_self;
	const char * idname;
	int cursor;
	const char * keymap;
	const char * gizmo_group;
	const char * data_block;
	const char * operator;
	int index;
	int options;
	const char * idname_fallback;
	const char * keymap_fallback;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	idname = *((const char * *)_data);
	_data += 8;
	cursor = *((int *)_data);
	_data += 8;
	keymap = *((const char * *)_data);
	_data += 8;
	gizmo_group = *((const char * *)_data);
	_data += 8;
	data_block = *((const char * *)_data);
	_data += 8;
	operator = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	options = *((int *)_data);
	_data += 8;
	idname_fallback = *((const char * *)_data);
	_data += 8;
	keymap_fallback = *((const char * *)_data);
	
	rna_WorkSpaceTool_setup(_selfid, _self, C, idname, cursor, keymap, gizmo_group, data_block, operator, index, options, idname_fallback, keymap_fallback);
}

struct PointerRNA WorkSpaceTool_operator_properties_func(struct bToolRef *_self, ReportList *reports, const char * operator_value)
{
	return rna_WorkSpaceTool_operator_properties(_self, reports, operator_value);
}

void WorkSpaceTool_operator_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bToolRef *_self;
	const char * operator;
	struct PointerRNA result;
	char *_data, *_retdata;
	
	_self = (struct bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpaceTool_operator_properties(_self, reports, operator);
	*((struct PointerRNA *)_retdata) = result;
}

struct PointerRNA WorkSpaceTool_gizmo_group_properties_func(struct bToolRef *_self, ReportList *reports, const char * group)
{
	return rna_WorkSpaceTool_gizmo_group_properties(_self, reports, group);
}

void WorkSpaceTool_gizmo_group_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bToolRef *_self;
	const char * group;
	struct PointerRNA result;
	char *_data, *_retdata;
	
	_self = (struct bToolRef *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpaceTool_gizmo_group_properties(_self, reports, group);
	*((struct PointerRNA *)_retdata) = result;
}

void WorkSpaceTool_refresh_from_context_func(struct ID *_selfid, struct bToolRef *_self, Main *bmain)
{
	rna_WorkSpaceTool_refresh_from_context(_selfid, _self, bmain);
}

void WorkSpaceTool_refresh_from_context_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bToolRef *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bToolRef *)_ptr->data;
	
	rna_WorkSpaceTool_refresh_from_context(_selfid, _self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_WorkSpaceTool_setup(struct ID *_selfid, struct bToolRef *_self, bContext *C, const char * idname, int cursor, const char * keymap, const char * gizmo_group, const char * data_block, const char * operator_value, int index, int options, const char * idname_fallback, const char * keymap_fallback);
struct PointerRNA rna_WorkSpaceTool_operator_properties(struct bToolRef *_self, ReportList *reports, const char * operator_value);
struct PointerRNA rna_WorkSpaceTool_gizmo_group_properties(struct bToolRef *_self, ReportList *reports, const char * group);
void rna_WorkSpaceTool_refresh_from_context(struct ID *_selfid, struct bToolRef *_self, Main *bmain);

void WorkSpace_status_text_set_internal_func(bContext *C, const char * text)
{
	ED_workspace_status_text(C, text);
}

void WorkSpace_status_text_set_internal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * text;
	char *_data;
	
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	ED_workspace_status_text(C, text);
}

/* Repeated prototypes to detect errors */

void ED_workspace_status_text(bContext *C, const char * text);

struct wmOwnerID *wmOwnerIDs_new_func(struct WorkSpace *_self, const char * name)
{
	return rna_WorkSpace_owner_ids_new(_self, name);
}

void wmOwnerIDs_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	const char * name;
	struct wmOwnerID *owner_id;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	owner_id = rna_WorkSpace_owner_ids_new(_self, name);
	*((struct wmOwnerID **)_retdata) = owner_id;
}

void wmOwnerIDs_remove_func(struct WorkSpace *_self, ReportList *reports, struct PointerRNA *owner_id)
{
	rna_WorkSpace_owner_ids_remove(_self, reports, owner_id);
}

void wmOwnerIDs_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	struct PointerRNA *owner_id;
	char *_data;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	owner_id = *((struct PointerRNA **)_data);
	
	rna_WorkSpace_owner_ids_remove(_self, reports, owner_id);
}

void wmOwnerIDs_clear_func(struct WorkSpace *_self)
{
	rna_WorkSpace_owner_ids_clear(_self);
}

void wmOwnerIDs_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	_self = (struct WorkSpace *)_ptr->data;
	
	rna_WorkSpace_owner_ids_clear(_self);
}

/* Repeated prototypes to detect errors */

struct wmOwnerID *rna_WorkSpace_owner_ids_new(struct WorkSpace *_self, const char * name);
void rna_WorkSpace_owner_ids_remove(struct WorkSpace *_self, ReportList *reports, struct PointerRNA *owner_id);
void rna_WorkSpace_owner_ids_clear(struct WorkSpace *_self);

struct bToolRef *wmTools_from_space_view3d_mode_func(struct WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_view3d_mode(_self, mode, create);
}

void wmTools_from_space_view3d_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	int mode;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_view3d_mode(_self, mode, create);
	*((struct bToolRef **)_retdata) = result;
}

struct bToolRef *wmTools_from_space_image_mode_func(struct WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_image_mode(_self, mode, create);
}

void wmTools_from_space_image_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	int mode;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_image_mode(_self, mode, create);
	*((struct bToolRef **)_retdata) = result;
}

struct bToolRef *wmTools_from_space_node_func(struct WorkSpace *_self, bool create)
{
	return rna_WorkSpace_tools_from_space_node(_self, create);
}

void wmTools_from_space_node_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_node(_self, create);
	*((struct bToolRef **)_retdata) = result;
}

struct bToolRef *wmTools_from_space_sequencer_func(struct WorkSpace *_self, int mode, bool create)
{
	return rna_WorkSpace_tools_from_space_sequencer(_self, mode, create);
}

void wmTools_from_space_sequencer_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct WorkSpace *_self;
	int mode;
	bool create;
	struct bToolRef *result;
	char *_data, *_retdata;
	
	_self = (struct WorkSpace *)_ptr->data;
	_data = (char *)_parms->data;
	mode = *((int *)_data);
	_data += 8;
	create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_WorkSpace_tools_from_space_sequencer(_self, mode, create);
	*((struct bToolRef **)_retdata) = result;
}

/* Repeated prototypes to detect errors */

struct bToolRef *rna_WorkSpace_tools_from_space_view3d_mode(struct WorkSpace *_self, int mode, bool create);
struct bToolRef *rna_WorkSpace_tools_from_space_image_mode(struct WorkSpace *_self, int mode, bool create);
struct bToolRef *rna_WorkSpace_tools_from_space_node(struct WorkSpace *_self, bool create);
struct bToolRef *rna_WorkSpace_tools_from_space_sequencer(struct WorkSpace *_self, int mode, bool create);

/* Work Space UI Tag */
CollectionPropertyRNA rna_wmOwnerID_rna_properties = {
	{(PropertyRNA *)&rna_wmOwnerID_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmOwnerID_rna_properties_begin, wmOwnerID_rna_properties_next, wmOwnerID_rna_properties_end, wmOwnerID_rna_properties_get, NULL, NULL, wmOwnerID_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_wmOwnerID_rna_type = {
	{(PropertyRNA *)&rna_wmOwnerID_name, (PropertyRNA *)&rna_wmOwnerID_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmOwnerID_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_wmOwnerID_name = {
	{NULL, (PropertyRNA *)&rna_wmOwnerID_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmOwnerID_name_get, wmOwnerID_name_length, wmOwnerID_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StructRNA RNA_wmOwnerID = {
	{(ContainerRNA *)&RNA_WorkSpaceTool, (ContainerRNA *)&RNA_GizmoGroupProperties,
	NULL,
	{(PropertyRNA *)&rna_wmOwnerID_rna_properties, (PropertyRNA *)&rna_wmOwnerID_name}},
	"wmOwnerID", NULL, NULL, 512, NULL, "Work Space UI Tag",
	"",
	"*", 17,
	(PropertyRNA *)&rna_wmOwnerID_name, (PropertyRNA *)&rna_wmOwnerID_rna_properties,
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

/* Work Space Tool */
CollectionPropertyRNA rna_WorkSpaceTool_rna_properties = {
	{(PropertyRNA *)&rna_WorkSpaceTool_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_rna_properties_begin, WorkSpaceTool_rna_properties_next, WorkSpaceTool_rna_properties_end, WorkSpaceTool_rna_properties_get, NULL, NULL, WorkSpaceTool_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WorkSpaceTool_rna_type = {
	{(PropertyRNA *)&rna_WorkSpaceTool_idname, (PropertyRNA *)&rna_WorkSpaceTool_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_WorkSpaceTool_idname = {
	{(PropertyRNA *)&rna_WorkSpaceTool_idname_fallback, (PropertyRNA *)&rna_WorkSpaceTool_rna_type,
	-1, "idname", 262145, 0, 0, 0, 0, "Identifier",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_idname_get, WorkSpaceTool_idname_length, WorkSpaceTool_idname_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_idname_fallback = {
	{(PropertyRNA *)&rna_WorkSpaceTool_index, (PropertyRNA *)&rna_WorkSpaceTool_idname,
	-1, "idname_fallback", 262145, 0, 0, 0, 0, "Identifier Fallback",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_idname_fallback_get, WorkSpaceTool_idname_fallback_length, WorkSpaceTool_idname_fallback_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

IntPropertyRNA rna_WorkSpaceTool_index = {
	{(PropertyRNA *)&rna_WorkSpaceTool_space_type, (PropertyRNA *)&rna_WorkSpaceTool_idname_fallback,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

EnumPropertyRNA rna_WorkSpaceTool_space_type = {
	{(PropertyRNA *)&rna_WorkSpaceTool_mode, (PropertyRNA *)&rna_WorkSpaceTool_index,
	-1, "space_type", 2, 0, 0, 4, 0, "Space Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bToolRef, space_type), 1, NULL},
	WorkSpaceTool_space_type_get, NULL, NULL, NULL, NULL, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_WorkSpaceTool_mode = {
	{(PropertyRNA *)&rna_WorkSpaceTool_use_paint_canvas, (PropertyRNA *)&rna_WorkSpaceTool_space_type,
	-1, "mode", 2, 0, 0, 4, 0, "Tool Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bToolRef, mode), 0, NULL},
	WorkSpaceTool_mode_get, NULL, rna_WorkSpace_tools_mode_itemf, NULL, NULL, DummyRNA_DEFAULT_items, 1, 0
};

BoolPropertyRNA rna_WorkSpaceTool_use_paint_canvas = {
	{(PropertyRNA *)&rna_WorkSpaceTool_has_datablock, (PropertyRNA *)&rna_WorkSpaceTool_mode,
	-1, "use_paint_canvas", 2, 0, 0, 0, 0, "Use Paint Canvas",
	"Does this tool use an painting canvas",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_use_paint_canvas_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WorkSpaceTool_has_datablock = {
	{(PropertyRNA *)&rna_WorkSpaceTool_widget, (PropertyRNA *)&rna_WorkSpaceTool_use_paint_canvas,
	-1, "has_datablock", 2, 0, 0, 0, 0, "Has Data-Block",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_has_datablock_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_WorkSpaceTool_widget = {
	{NULL, (PropertyRNA *)&rna_WorkSpaceTool_has_datablock,
	-1, "widget", 262144, 0, 0, 0, 0, "Widget",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpaceTool_widget_get, WorkSpaceTool_widget_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_idname = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_cursor, NULL,
	-1, "idname", 262145, 0, 1, 0, 0, "Identifier",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_WorkSpaceTool_setup_cursor = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_keymap, (PropertyRNA *)&rna_WorkSpaceTool_setup_idname,
	-1, "cursor", 3, 0, 0, 0, 0, "cursor",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_window_cursor_items, 24, 1
};

StringPropertyRNA rna_WorkSpaceTool_setup_keymap = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_gizmo_group, (PropertyRNA *)&rna_WorkSpaceTool_setup_cursor,
	-1, "keymap", 262145, 0, 0, 0, 0, "Key Map",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_gizmo_group = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_data_block, (PropertyRNA *)&rna_WorkSpaceTool_setup_keymap,
	-1, "gizmo_group", 262145, 0, 0, 0, 0, "Gizmo Group",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_data_block = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_operator, (PropertyRNA *)&rna_WorkSpaceTool_setup_gizmo_group,
	-1, "data_block", 262145, 0, 0, 0, 0, "Data Block",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_operator = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_index, (PropertyRNA *)&rna_WorkSpaceTool_setup_data_block,
	-1, "operator", 262145, 0, 0, 0, 0, "Operator",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

IntPropertyRNA rna_WorkSpaceTool_setup_index = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_options, (PropertyRNA *)&rna_WorkSpaceTool_setup_operator,
	-1, "index", 3, 0, 0, 0, 0, "Index",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

static const EnumPropertyItem rna_WorkSpaceTool_setup_options_items[2] = {
	{1, "KEYMAP_FALLBACK", 0, "Fallback", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorkSpaceTool_setup_options = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_idname_fallback, (PropertyRNA *)&rna_WorkSpaceTool_setup_index,
	-1, "options", 2097155, 0, 0, 0, 0, "Tool Options",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_WorkSpaceTool_setup_options_items, 1, 0
};

StringPropertyRNA rna_WorkSpaceTool_setup_idname_fallback = {
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_keymap_fallback, (PropertyRNA *)&rna_WorkSpaceTool_setup_options,
	-1, "idname_fallback", 262145, 0, 0, 0, 0, "Fallback Identifier",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_WorkSpaceTool_setup_keymap_fallback = {
	{NULL, (PropertyRNA *)&rna_WorkSpaceTool_setup_idname_fallback,
	-1, "keymap_fallback", 262145, 0, 0, 0, 0, "Fallback Key Map",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

FunctionRNA rna_WorkSpaceTool_setup_func = {
	{(FunctionRNA *)&rna_WorkSpaceTool_operator_properties_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_WorkSpaceTool_setup_idname, (PropertyRNA *)&rna_WorkSpaceTool_setup_keymap_fallback}},
	"setup", 2056, "Set the tool settings",
	WorkSpaceTool_setup_call,
	NULL
};

StringPropertyRNA rna_WorkSpaceTool_operator_properties_operator = {
	{(PropertyRNA *)&rna_WorkSpaceTool_operator_properties_result, NULL,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_WorkSpaceTool_operator_properties_result = {
	{NULL, (PropertyRNA *)&rna_WorkSpaceTool_operator_properties_operator,
	-1, "result", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_WorkSpaceTool_operator_properties_func = {
	{(FunctionRNA *)&rna_WorkSpaceTool_gizmo_group_properties_func, (FunctionRNA *)&rna_WorkSpaceTool_setup_func,
	NULL,
	{(PropertyRNA *)&rna_WorkSpaceTool_operator_properties_operator, (PropertyRNA *)&rna_WorkSpaceTool_operator_properties_result}},
	"operator_properties", 16, "operator_properties",
	WorkSpaceTool_operator_properties_call,
	(PropertyRNA *)&rna_WorkSpaceTool_operator_properties_result
};

StringPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_group = {
	{(PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_result, NULL,
	-1, "group", 262145, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_WorkSpaceTool_gizmo_group_properties_result = {
	{NULL, (PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_group,
	-1, "result", 8650752, 0, 6, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_GizmoGroupProperties
};

FunctionRNA rna_WorkSpaceTool_gizmo_group_properties_func = {
	{(FunctionRNA *)&rna_WorkSpaceTool_refresh_from_context_func, (FunctionRNA *)&rna_WorkSpaceTool_operator_properties_func,
	NULL,
	{(PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_group, (PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_result}},
	"gizmo_group_properties", 16, "gizmo_group_properties",
	WorkSpaceTool_gizmo_group_properties_call,
	(PropertyRNA *)&rna_WorkSpaceTool_gizmo_group_properties_result
};

FunctionRNA rna_WorkSpaceTool_refresh_from_context_func = {
	{NULL, (FunctionRNA *)&rna_WorkSpaceTool_gizmo_group_properties_func,
	NULL,
	{NULL, NULL}},
	"refresh_from_context", 2052, "refresh_from_context",
	WorkSpaceTool_refresh_from_context_call,
	NULL
};

StructRNA RNA_WorkSpaceTool = {
	{(ContainerRNA *)&RNA_WorkSpace, (ContainerRNA *)&RNA_wmOwnerID,
	NULL,
	{(PropertyRNA *)&rna_WorkSpaceTool_rna_properties, (PropertyRNA *)&rna_WorkSpaceTool_widget}},
	"WorkSpaceTool", NULL, NULL, 512, NULL, "Work Space Tool",
	"",
	"*", 17,
	(PropertyRNA *)&rna_WorkSpaceTool_idname, (PropertyRNA *)&rna_WorkSpaceTool_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_WorkSpaceTool_setup_func, (FunctionRNA *)&rna_WorkSpaceTool_refresh_from_context_func}
};

/* Workspace */
CollectionPropertyRNA rna_WorkSpace_screens = {
	{(PropertyRNA *)&rna_WorkSpace_owner_ids, NULL,
	-1, "screens", 128, 0, 0, 0, 0, "Screens",
	"Screen layouts of a workspace",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpace_screens_begin, WorkSpace_screens_next, WorkSpace_screens_end, WorkSpace_screens_get, NULL, WorkSpace_screens_lookup_int, WorkSpace_screens_lookup_string, NULL, &RNA_Screen
};

CollectionPropertyRNA rna_WorkSpace_owner_ids = {
	{(PropertyRNA *)&rna_WorkSpace_tools, (PropertyRNA *)&rna_WorkSpace_screens,
	-1, "owner_ids", 0, 0, 0, 0, 0, "UI Tags",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_wmOwnerIDs},
	WorkSpace_owner_ids_begin, WorkSpace_owner_ids_next, WorkSpace_owner_ids_end, WorkSpace_owner_ids_get, NULL, WorkSpace_owner_ids_lookup_int, WorkSpace_owner_ids_lookup_string, NULL, &RNA_wmOwnerID
};

CollectionPropertyRNA rna_WorkSpace_tools = {
	{(PropertyRNA *)&rna_WorkSpace_object_mode, (PropertyRNA *)&rna_WorkSpace_owner_ids,
	-1, "tools", 0, 0, 0, 0, 0, "Tools",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_wmTools},
	WorkSpace_tools_begin, WorkSpace_tools_next, WorkSpace_tools_end, WorkSpace_tools_get, NULL, WorkSpace_tools_lookup_int, WorkSpace_tools_lookup_string, NULL, &RNA_WorkSpaceTool
};

EnumPropertyRNA rna_WorkSpace_object_mode = {
	{(PropertyRNA *)&rna_WorkSpace_use_pin_scene, (PropertyRNA *)&rna_WorkSpace_tools,
	-1, "object_mode", 3, 0, 0, 4, 0, "Object Mode",
	"Switch to this object mode when activating the workspace",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(WorkSpace, object_mode), 0, NULL},
	WorkSpace_object_mode_get, WorkSpace_object_mode_set, NULL, NULL, NULL, rna_enum_workspace_object_mode_items, 13, 0
};

BoolPropertyRNA rna_WorkSpace_use_pin_scene = {
	{(PropertyRNA *)&rna_WorkSpace_use_filter_by_owner, (PropertyRNA *)&rna_WorkSpace_object_mode,
	-1, "use_pin_scene", 3, 0, 0, 0, 0, "Pin Scene",
	"Remember the last used scene for the workspace and switch to it whenever this workspace is activated again",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50331648, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpace_use_pin_scene_get, WorkSpace_use_pin_scene_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WorkSpace_use_filter_by_owner = {
	{(PropertyRNA *)&rna_WorkSpace_asset_library_ref, (PropertyRNA *)&rna_WorkSpace_use_pin_scene,
	-1, "use_filter_by_owner", 1, 0, 0, 0, 0, "Use UI Tags",
	"Filter the UI by tags",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_window_update_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpace_use_filter_by_owner_get, WorkSpace_use_filter_by_owner_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_WorkSpace_asset_library_ref = {
	{NULL, (PropertyRNA *)&rna_WorkSpace_use_filter_by_owner,
	-1, "asset_library_ref", 3, 0, 0, 0, 0, "Asset Library",
	"Active asset library to show in the UI, not used by the Asset Browser (which has its own active asset library)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 453181440, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorkSpace_asset_library_ref_get, WorkSpace_asset_library_ref_set, rna_asset_library_reference_itemf, NULL, NULL, DummyRNA_NULL_items, 0, 0
};

StringPropertyRNA rna_WorkSpace_status_text_set_internal_text = {
	{NULL, NULL,
	-1, "text", 1, 0, 1, 0, 0, "Text",
	"New string for the status bar, None clears the text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_WorkSpace_status_text_set_internal_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_WorkSpace_status_text_set_internal_text, (PropertyRNA *)&rna_WorkSpace_status_text_set_internal_text}},
	"status_text_set_internal", 9, "Set the status bar text, typically key shortcuts for modal operators",
	WorkSpace_status_text_set_internal_call,
	NULL
};

StructRNA RNA_WorkSpace = {
	{(ContainerRNA *)&RNA_wmOwnerIDs, (ContainerRNA *)&RNA_WorkSpaceTool,
	NULL,
	{(PropertyRNA *)&rna_WorkSpace_screens, (PropertyRNA *)&rna_WorkSpace_asset_library_ref}},
	"WorkSpace", NULL, NULL, 519, NULL, "Workspace",
	"Workspace data-block, defining the working environment for the user",
	"*", 27,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_WorkSpace_status_text_set_internal_func, (FunctionRNA *)&rna_WorkSpace_status_text_set_internal_func}
};

/* WorkSpace UI Tags */
CollectionPropertyRNA rna_wmOwnerIDs_rna_properties = {
	{(PropertyRNA *)&rna_wmOwnerIDs_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmOwnerIDs_rna_properties_begin, wmOwnerIDs_rna_properties_next, wmOwnerIDs_rna_properties_end, wmOwnerIDs_rna_properties_get, NULL, NULL, wmOwnerIDs_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_wmOwnerIDs_rna_type = {
	{NULL, (PropertyRNA *)&rna_wmOwnerIDs_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmOwnerIDs_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_wmOwnerIDs_new_name = {
	{(PropertyRNA *)&rna_wmOwnerIDs_new_owner_id, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "",
	"New name for the tag",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Name"
};

PointerPropertyRNA rna_wmOwnerIDs_new_owner_id = {
	{NULL, (PropertyRNA *)&rna_wmOwnerIDs_new_name,
	-1, "owner_id", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_wmOwnerID
};

FunctionRNA rna_wmOwnerIDs_new_func = {
	{(FunctionRNA *)&rna_wmOwnerIDs_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_wmOwnerIDs_new_name, (PropertyRNA *)&rna_wmOwnerIDs_new_owner_id}},
	"new", 0, "Add ui tag",
	wmOwnerIDs_new_call,
	(PropertyRNA *)&rna_wmOwnerIDs_new_owner_id
};

PointerPropertyRNA rna_wmOwnerIDs_remove_owner_id = {
	{NULL, NULL,
	-1, "owner_id", 262144, 0, 5, 0, 0, "",
	"Tag to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_wmOwnerID
};

FunctionRNA rna_wmOwnerIDs_remove_func = {
	{(FunctionRNA *)&rna_wmOwnerIDs_clear_func, (FunctionRNA *)&rna_wmOwnerIDs_new_func,
	NULL,
	{(PropertyRNA *)&rna_wmOwnerIDs_remove_owner_id, (PropertyRNA *)&rna_wmOwnerIDs_remove_owner_id}},
	"remove", 16, "Remove ui tag",
	wmOwnerIDs_remove_call,
	NULL
};

FunctionRNA rna_wmOwnerIDs_clear_func = {
	{NULL, (FunctionRNA *)&rna_wmOwnerIDs_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all tags",
	wmOwnerIDs_clear_call,
	NULL
};

StructRNA RNA_wmOwnerIDs = {
	{(ContainerRNA *)&RNA_wmTools, (ContainerRNA *)&RNA_WorkSpace,
	NULL,
	{(PropertyRNA *)&rna_wmOwnerIDs_rna_properties, (PropertyRNA *)&rna_wmOwnerIDs_rna_type}},
	"wmOwnerIDs", NULL, NULL, 516, NULL, "WorkSpace UI Tags",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_wmOwnerIDs_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_wmOwnerIDs_new_func, (FunctionRNA *)&rna_wmOwnerIDs_clear_func}
};

/* WorkSpace UI Tags */
CollectionPropertyRNA rna_wmTools_rna_properties = {
	{(PropertyRNA *)&rna_wmTools_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmTools_rna_properties_begin, wmTools_rna_properties_next, wmTools_rna_properties_end, wmTools_rna_properties_get, NULL, NULL, wmTools_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_wmTools_rna_type = {
	{NULL, (PropertyRNA *)&rna_wmTools_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	wmTools_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_wmTools_from_space_view3d_mode_mode = {
	{(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_create, NULL,
	-1, "mode", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_context_mode_items, 21, 0
};

BoolPropertyRNA rna_wmTools_from_space_view3d_mode_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_result, (PropertyRNA *)&rna_wmTools_from_space_view3d_mode_mode,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_wmTools_from_space_view3d_mode_result = {
	{NULL, (PropertyRNA *)&rna_wmTools_from_space_view3d_mode_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_view3d_mode_func = {
	{(FunctionRNA *)&rna_wmTools_from_space_image_mode_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_mode, (PropertyRNA *)&rna_wmTools_from_space_view3d_mode_result}},
	"from_space_view3d_mode", 0, "",
	wmTools_from_space_view3d_mode_call,
	(PropertyRNA *)&rna_wmTools_from_space_view3d_mode_result
};

EnumPropertyRNA rna_wmTools_from_space_image_mode_mode = {
	{(PropertyRNA *)&rna_wmTools_from_space_image_mode_create, NULL,
	-1, "mode", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_space_image_mode_all_items, 4, 0
};

BoolPropertyRNA rna_wmTools_from_space_image_mode_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_image_mode_result, (PropertyRNA *)&rna_wmTools_from_space_image_mode_mode,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_wmTools_from_space_image_mode_result = {
	{NULL, (PropertyRNA *)&rna_wmTools_from_space_image_mode_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_image_mode_func = {
	{(FunctionRNA *)&rna_wmTools_from_space_node_func, (FunctionRNA *)&rna_wmTools_from_space_view3d_mode_func,
	NULL,
	{(PropertyRNA *)&rna_wmTools_from_space_image_mode_mode, (PropertyRNA *)&rna_wmTools_from_space_image_mode_result}},
	"from_space_image_mode", 0, "",
	wmTools_from_space_image_mode_call,
	(PropertyRNA *)&rna_wmTools_from_space_image_mode_result
};

BoolPropertyRNA rna_wmTools_from_space_node_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_node_result, NULL,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_wmTools_from_space_node_result = {
	{NULL, (PropertyRNA *)&rna_wmTools_from_space_node_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_node_func = {
	{(FunctionRNA *)&rna_wmTools_from_space_sequencer_func, (FunctionRNA *)&rna_wmTools_from_space_image_mode_func,
	NULL,
	{(PropertyRNA *)&rna_wmTools_from_space_node_create, (PropertyRNA *)&rna_wmTools_from_space_node_result}},
	"from_space_node", 0, "",
	wmTools_from_space_node_call,
	(PropertyRNA *)&rna_wmTools_from_space_node_result
};

EnumPropertyRNA rna_wmTools_from_space_sequencer_mode = {
	{(PropertyRNA *)&rna_wmTools_from_space_sequencer_create, NULL,
	-1, "mode", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_space_sequencer_view_type_items, 3, 1
};

BoolPropertyRNA rna_wmTools_from_space_sequencer_create = {
	{(PropertyRNA *)&rna_wmTools_from_space_sequencer_result, (PropertyRNA *)&rna_wmTools_from_space_sequencer_mode,
	-1, "create", 3, 0, 0, 0, 0, "Create",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_wmTools_from_space_sequencer_result = {
	{NULL, (PropertyRNA *)&rna_wmTools_from_space_sequencer_create,
	-1, "result", 8388608, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_WorkSpaceTool
};

FunctionRNA rna_wmTools_from_space_sequencer_func = {
	{NULL, (FunctionRNA *)&rna_wmTools_from_space_node_func,
	NULL,
	{(PropertyRNA *)&rna_wmTools_from_space_sequencer_mode, (PropertyRNA *)&rna_wmTools_from_space_sequencer_result}},
	"from_space_sequencer", 0, "",
	wmTools_from_space_sequencer_call,
	(PropertyRNA *)&rna_wmTools_from_space_sequencer_result
};

StructRNA RNA_wmTools = {
	{(ContainerRNA *)&RNA_World, (ContainerRNA *)&RNA_wmOwnerIDs,
	NULL,
	{(PropertyRNA *)&rna_wmTools_rna_properties, (PropertyRNA *)&rna_wmTools_rna_type}},
	"wmTools", NULL, NULL, 516, NULL, "WorkSpace UI Tags",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_wmTools_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_wmTools_from_space_view3d_mode_func, (FunctionRNA *)&rna_wmTools_from_space_sequencer_func}
};

