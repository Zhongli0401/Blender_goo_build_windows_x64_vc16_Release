
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

#include "rna_collection.c"

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

FloatPropertyRNA rna_Collection_instance_offset;
CollectionPropertyRNA rna_Collection_objects;
CollectionPropertyRNA rna_Collection_all_objects;
CollectionPropertyRNA rna_Collection_children;
BoolPropertyRNA rna_Collection_hide_select;
BoolPropertyRNA rna_Collection_hide_viewport;
BoolPropertyRNA rna_Collection_hide_render;
EnumPropertyRNA rna_Collection_lineart_usage;
BoolPropertyRNA rna_Collection_lineart_use_intersection_mask;
BoolPropertyRNA rna_Collection_lineart_intersection_mask;
IntPropertyRNA rna_Collection_lineart_intersection_priority;
BoolPropertyRNA rna_Collection_use_lineart_intersection_priority;
EnumPropertyRNA rna_Collection_color_tag;

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



CollectionPropertyRNA rna_CollectionObjects_rna_properties;
PointerPropertyRNA rna_CollectionObjects_rna_type;

extern FunctionRNA rna_CollectionObjects_link_func;
extern PointerPropertyRNA rna_CollectionObjects_link_object;

extern FunctionRNA rna_CollectionObjects_unlink_func;
extern PointerPropertyRNA rna_CollectionObjects_unlink_object;



CollectionPropertyRNA rna_CollectionChildren_rna_properties;
PointerPropertyRNA rna_CollectionChildren_rna_type;

extern FunctionRNA rna_CollectionChildren_link_func;
extern PointerPropertyRNA rna_CollectionChildren_link_child;

extern FunctionRNA rna_CollectionChildren_unlink_func;
extern PointerPropertyRNA rna_CollectionChildren_unlink_child;


void Collection_instance_offset_get(PointerRNA *ptr, float values[3])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->instance_offset)[i]);
    }
}

void Collection_instance_offset_set(PointerRNA *ptr, const float values[3])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->instance_offset)[i] = values[i];
    }
}

static PointerRNA Collection_objects_get(CollectionPropertyIterator *iter)
{
    return rna_Collection_objects_get(iter);
}

void Collection_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_objects;

    rna_Collection_objects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_objects_get(iter);
    }
}

void Collection_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_objects_get(iter);
    }
}

void Collection_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Collection_all_objects_get(CollectionPropertyIterator *iter)
{
    return rna_Collection_all_objects_get(iter);
}

void Collection_all_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_all_objects;

    rna_Collection_all_objects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_all_objects_get(iter);
    }
}

void Collection_all_objects_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_all_objects_get(iter);
    }
}

void Collection_all_objects_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

static PointerRNA Collection_children_get(CollectionPropertyIterator *iter)
{
    return rna_Collection_children_get(iter);
}

void Collection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Collection_children;

    rna_Collection_children_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Collection_children_get(iter);
    }
}

void Collection_children_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Collection_children_get(iter);
    }
}

void Collection_children_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Collection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Collection_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Collection_children_get(&iter); }
    }

    Collection_children_end(&iter);

    return found;
}

int Collection_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Collection_children_begin(&iter, ptr);

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
        Collection_children_next(&iter);
    }
    Collection_children_end(&iter);

    return found;
}

bool Collection_hide_select_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void Collection_hide_select_set(PointerRNA *ptr, bool value)
{
    rna_Collection_hide_select_set(ptr, value);
}

bool Collection_hide_viewport_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void Collection_hide_viewport_set(PointerRNA *ptr, bool value)
{
    rna_Collection_hide_viewport_set(ptr, value);
}

bool Collection_hide_render_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void Collection_hide_render_set(PointerRNA *ptr, bool value)
{
    rna_Collection_hide_render_set(ptr, value);
}

int Collection_lineart_usage_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->lineart_usage);
}

void Collection_lineart_usage_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
    data->lineart_usage = value;
}

bool Collection_lineart_use_intersection_mask_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->lineart_flags) & 1) != 0);
}

void Collection_lineart_use_intersection_mask_set(PointerRNA *ptr, bool value)
{
    Collection *data = (Collection *)(ptr->data);
    if (value) { data->lineart_flags |= 1; }
    else { data->lineart_flags &= ~1; }
}

void Collection_lineart_intersection_mask_get(PointerRNA *ptr, bool values[8])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        values[i] = ((data->lineart_intersection_mask & (1 << i)) != 0);
    }
}

void Collection_lineart_intersection_mask_set(PointerRNA *ptr, const bool values[8])
{
    Collection *data = (Collection *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (values[i]) { data->lineart_intersection_mask |= (1 << i); }
        else { data->lineart_intersection_mask &= ~(1 << i); }
    }
}

int Collection_lineart_intersection_priority_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (int)(data->lineart_intersection_priority);
}

void Collection_lineart_intersection_priority_set(PointerRNA *ptr, int value)
{
    Collection *data = (Collection *)(ptr->data);
    data->lineart_intersection_priority = CLAMPIS(value, 0, 255);
}

bool Collection_use_lineart_intersection_priority_get(PointerRNA *ptr)
{
    Collection *data = (Collection *)(ptr->data);
    return (((data->lineart_flags) & 2) != 0);
}

void Collection_use_lineart_intersection_priority_set(PointerRNA *ptr, bool value)
{
    Collection *data = (Collection *)(ptr->data);
    if (value) { data->lineart_flags |= 2; }
    else { data->lineart_flags &= ~2; }
}

int Collection_color_tag_get(PointerRNA *ptr)
{
    return rna_Collection_color_tag_get(ptr);
}

void Collection_color_tag_set(PointerRNA *ptr, int value)
{
    rna_Collection_color_tag_set(ptr, value);
}

static PointerRNA CollectionObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CollectionObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionObjects_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionObjects_rna_properties_get(iter);
    }
}

void CollectionObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionObjects_rna_properties_get(iter);
    }
}

void CollectionObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CollectionObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CollectionObjects_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA CollectionChildren_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void CollectionChildren_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_CollectionChildren_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = CollectionChildren_rna_properties_get(iter);
    }
}

void CollectionChildren_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = CollectionChildren_rna_properties_get(iter);
    }
}

void CollectionChildren_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int CollectionChildren_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA CollectionChildren_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}


void CollectionObjects_link_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object)
{
	rna_Collection_objects_link(_self, bmain, reports, object);
}

void CollectionObjects_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Collection_objects_link(_self, CTX_data_main(C), reports, object);
}

void CollectionObjects_unlink_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object)
{
	rna_Collection_objects_unlink(_self, bmain, reports, object);
}

void CollectionObjects_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Object *object;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	
	rna_Collection_objects_unlink(_self, CTX_data_main(C), reports, object);
}

/* Repeated prototypes to detect errors */

void rna_Collection_objects_link(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object);
void rna_Collection_objects_unlink(struct Collection *_self, Main *bmain, ReportList *reports, struct Object *object);

void CollectionChildren_link_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child)
{
	rna_Collection_children_link(_self, bmain, reports, child);
}

void CollectionChildren_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Collection *child;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	child = *((struct Collection **)_data);
	
	rna_Collection_children_link(_self, CTX_data_main(C), reports, child);
}

void CollectionChildren_unlink_func(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child)
{
	rna_Collection_children_unlink(_self, bmain, reports, child);
}

void CollectionChildren_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Collection *_self;
	struct Collection *child;
	char *_data;
	
	_self = (struct Collection *)_ptr->data;
	_data = (char *)_parms->data;
	child = *((struct Collection **)_data);
	
	rna_Collection_children_unlink(_self, CTX_data_main(C), reports, child);
}

/* Repeated prototypes to detect errors */

void rna_Collection_children_link(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child);
void rna_Collection_children_unlink(struct Collection *_self, Main *bmain, ReportList *reports, struct Collection *child);

/* Collection */
static float rna_Collection_instance_offset_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Collection_instance_offset = {
	{(PropertyRNA *)&rna_Collection_objects, NULL,
	-1, "instance_offset", 3, 1, 0, 4, 0, "Instance Offset",
	"Offset from the origin to use when instancing",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Collection_instance_offset_update, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Collection, instance_offset), 5, NULL},
	NULL, NULL, Collection_instance_offset_get, Collection_instance_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_Collection_instance_offset_default
};

CollectionPropertyRNA rna_Collection_objects = {
	{(PropertyRNA *)&rna_Collection_all_objects, (PropertyRNA *)&rna_Collection_instance_offset,
	-1, "objects", 128, 1, 0, 0, 0, "Objects",
	"Objects that are directly in this collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Collection_objects_override_apply,
	0, -1, &RNA_CollectionObjects},
	Collection_objects_begin, Collection_objects_next, Collection_objects_end, Collection_objects_get, NULL, NULL, NULL, NULL, &RNA_Object
};

CollectionPropertyRNA rna_Collection_all_objects = {
	{(PropertyRNA *)&rna_Collection_children, (PropertyRNA *)&rna_Collection_objects,
	-1, "all_objects", 128, 2, 0, 0, 0, "All Objects",
	"Objects that are in this collection and its child collections",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_all_objects_begin, Collection_all_objects_next, Collection_all_objects_end, Collection_all_objects_get, NULL, NULL, NULL, NULL, &RNA_Object
};

CollectionPropertyRNA rna_Collection_children = {
	{(PropertyRNA *)&rna_Collection_hide_select, (PropertyRNA *)&rna_Collection_all_objects,
	-1, "children", 128, 1, 0, 0, 0, "Children",
	"Collections that are immediate children of this collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Collection_children_override_apply,
	0, -1, &RNA_CollectionChildren},
	Collection_children_begin, Collection_children_next, Collection_children_end, Collection_children_get, NULL, Collection_children_lookup_int, Collection_children_lookup_string, NULL, &RNA_Collection
};

BoolPropertyRNA rna_Collection_hide_select = {
	{(PropertyRNA *)&rna_Collection_hide_viewport, (PropertyRNA *)&rna_Collection_children,
	-1, "hide_select", 4353, 1, 0, 0, 0, "Disable Selection",
	"Disable selection in viewport",
	256, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Collection_flag_update, 90505216, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_hide_select_get, Collection_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Collection_hide_viewport = {
	{(PropertyRNA *)&rna_Collection_hide_render, (PropertyRNA *)&rna_Collection_hide_select,
	-1, "hide_viewport", 4353, 1, 0, 0, 0, "Disable in Viewports",
	"Globally disable in viewports",
	284, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Collection_flag_update, 90505216, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_hide_viewport_get, Collection_hide_viewport_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Collection_hide_render = {
	{(PropertyRNA *)&rna_Collection_lineart_usage, (PropertyRNA *)&rna_Collection_hide_viewport,
	-1, "hide_render", 4353, 1, 0, 0, 0, "Disable in Renders",
	"Globally disable in renders",
	258, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Collection_flag_update, 90505216, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_hide_render_get, Collection_hide_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Collection_lineart_usage_items[7] = {
	{0, "INCLUDE", 0, "Include", "Generate feature lines for this collection"},
	{1, "OCCLUSION_ONLY", 0, "Occlusion Only", "Only use the collection to produce occlusion"},
	{2, "EXCLUDE", 0, "Exclude", "Don\'t use this collection in line art"},
	{4, "INTERSECTION_ONLY", 0, "Intersection Only", "Only generate intersection lines for this collection"},
	{8, "NO_INTERSECTION", 0, "No Intersection", "Include this collection but do not generate intersection lines"},
	{16, "FORCE_INTERSECTION", 0, "Force Intersection", "Generate intersection lines even with objects that disabled intersection"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Collection_lineart_usage = {
	{(PropertyRNA *)&rna_Collection_lineart_use_intersection_mask, (PropertyRNA *)&rna_Collection_hide_render,
	-1, "lineart_usage", 3, 1, 0, 4, 0, "Usage",
	"How to use this collection in line art",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Collection, lineart_usage), 1, NULL},
	Collection_lineart_usage_get, Collection_lineart_usage_set, NULL, NULL, NULL, rna_Collection_lineart_usage_items, 6, 0
};

BoolPropertyRNA rna_Collection_lineart_use_intersection_mask = {
	{(PropertyRNA *)&rna_Collection_lineart_intersection_mask, (PropertyRNA *)&rna_Collection_lineart_usage,
	-1, "lineart_use_intersection_mask", 3, 1, 0, 0, 0, "Use Intersection Masks",
	"Use custom intersection mask for faces in this collection",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_lineart_use_intersection_mask_get, Collection_lineart_use_intersection_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static bool rna_Collection_lineart_intersection_mask_default[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_Collection_lineart_intersection_mask = {
	{(PropertyRNA *)&rna_Collection_lineart_intersection_priority, (PropertyRNA *)&rna_Collection_lineart_use_intersection_mask,
	-1, "lineart_intersection_mask", 3, 1, 0, 0, 0, "Masks",
	"Intersection generated by this collection will have this mask value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {8, 0, 0}, 8,
	NULL, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Collection_lineart_intersection_mask_get, Collection_lineart_intersection_mask_set, NULL, NULL, NULL, NULL, 0, rna_Collection_lineart_intersection_mask_default
};

IntPropertyRNA rna_Collection_lineart_intersection_priority = {
	{(PropertyRNA *)&rna_Collection_use_lineart_intersection_priority, (PropertyRNA *)&rna_Collection_lineart_intersection_mask,
	-1, "lineart_intersection_priority", 3, 1, 0, 4, 0, "Intersection Priority",
	"The intersection line will be included into the object with the higher intersection priority value",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Collection, lineart_intersection_priority), 2, NULL},
	Collection_lineart_intersection_priority_get, Collection_lineart_intersection_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 255, 0, 255, 1, 0, NULL
};

BoolPropertyRNA rna_Collection_use_lineart_intersection_priority = {
	{(PropertyRNA *)&rna_Collection_color_tag, (PropertyRNA *)&rna_Collection_lineart_intersection_priority,
	-1, "use_lineart_intersection_priority", 3, 1, 0, 0, 0, "Use Intersection Priority",
	"Assign intersection priority value for this collection",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_use_lineart_intersection_priority_get, Collection_use_lineart_intersection_priority_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_Collection_color_tag = {
	{NULL, (PropertyRNA *)&rna_Collection_use_lineart_intersection_priority,
	-1, "color_tag", 3, 1, 0, 0, 0, "Collection Color",
	"Color tag for a collection",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Collection_color_tag_update, 90505216, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Collection_color_tag_get, Collection_color_tag_set, NULL, NULL, NULL, rna_enum_collection_color_items, 9, -1
};

StructRNA RNA_Collection = {
	{(ContainerRNA *)&RNA_CollectionObjects, (ContainerRNA *)&RNA_ClothCollisionSettings,
	NULL,
	{(PropertyRNA *)&rna_Collection_instance_offset, (PropertyRNA *)&rna_Collection_color_tag}},
	"Collection", NULL, NULL, 517, NULL, "Collection",
	"Collection of Object data-blocks",
	"*", 250,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Collection Objects */
CollectionPropertyRNA rna_CollectionObjects_rna_properties = {
	{(PropertyRNA *)&rna_CollectionObjects_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollectionObjects_rna_properties_begin, CollectionObjects_rna_properties_next, CollectionObjects_rna_properties_end, CollectionObjects_rna_properties_get, NULL, NULL, CollectionObjects_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CollectionObjects_rna_type = {
	{NULL, (PropertyRNA *)&rna_CollectionObjects_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollectionObjects_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_CollectionObjects_link_object = {
	{NULL, NULL,
	-1, "object", 8650880, 1, 1, 0, 0, "",
	"Object to add",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_CollectionObjects_link_func = {
	{(FunctionRNA *)&rna_CollectionObjects_unlink_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_CollectionObjects_link_object, (PropertyRNA *)&rna_CollectionObjects_link_object}},
	"link", 20, "Add this object to a collection",
	CollectionObjects_link_call,
	NULL
};

PointerPropertyRNA rna_CollectionObjects_unlink_object = {
	{NULL, NULL,
	-1, "object", 8388736, 1, 1, 0, 0, "",
	"Object to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_CollectionObjects_unlink_func = {
	{NULL, (FunctionRNA *)&rna_CollectionObjects_link_func,
	NULL,
	{(PropertyRNA *)&rna_CollectionObjects_unlink_object, (PropertyRNA *)&rna_CollectionObjects_unlink_object}},
	"unlink", 20, "Remove this object from a collection",
	CollectionObjects_unlink_call,
	NULL
};

StructRNA RNA_CollectionObjects = {
	{(ContainerRNA *)&RNA_CollectionChildren, (ContainerRNA *)&RNA_Collection,
	NULL,
	{(PropertyRNA *)&rna_CollectionObjects_rna_properties, (PropertyRNA *)&rna_CollectionObjects_rna_type}},
	"CollectionObjects", NULL, NULL, 516, NULL, "Collection Objects",
	"Collection of collection objects",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CollectionObjects_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CollectionObjects_link_func, (FunctionRNA *)&rna_CollectionObjects_unlink_func}
};

/* Collection Children */
CollectionPropertyRNA rna_CollectionChildren_rna_properties = {
	{(PropertyRNA *)&rna_CollectionChildren_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollectionChildren_rna_properties_begin, CollectionChildren_rna_properties_next, CollectionChildren_rna_properties_end, CollectionChildren_rna_properties_get, NULL, NULL, CollectionChildren_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_CollectionChildren_rna_type = {
	{NULL, (PropertyRNA *)&rna_CollectionChildren_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	CollectionChildren_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_CollectionChildren_link_child = {
	{NULL, NULL,
	-1, "child", 8650880, 1, 1, 0, 0, "",
	"Collection to add",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Collection
};

FunctionRNA rna_CollectionChildren_link_func = {
	{(FunctionRNA *)&rna_CollectionChildren_unlink_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_CollectionChildren_link_child, (PropertyRNA *)&rna_CollectionChildren_link_child}},
	"link", 20, "Add this collection as child of this collection",
	CollectionChildren_link_call,
	NULL
};

PointerPropertyRNA rna_CollectionChildren_unlink_child = {
	{NULL, NULL,
	-1, "child", 8388736, 1, 1, 0, 0, "",
	"Collection to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Collection
};

FunctionRNA rna_CollectionChildren_unlink_func = {
	{NULL, (FunctionRNA *)&rna_CollectionChildren_link_func,
	NULL,
	{(PropertyRNA *)&rna_CollectionChildren_unlink_child, (PropertyRNA *)&rna_CollectionChildren_unlink_child}},
	"unlink", 20, "Remove this child collection from a collection",
	CollectionChildren_unlink_call,
	NULL
};

StructRNA RNA_CollectionChildren = {
	{(ContainerRNA *)&RNA_CurveMapPoint, (ContainerRNA *)&RNA_CollectionObjects,
	NULL,
	{(PropertyRNA *)&rna_CollectionChildren_rna_properties, (PropertyRNA *)&rna_CollectionChildren_rna_type}},
	"CollectionChildren", NULL, NULL, 516, NULL, "Collection Children",
	"Collection of child collections",
	"*", 17,
	NULL, (PropertyRNA *)&rna_CollectionChildren_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_CollectionChildren_link_func, (FunctionRNA *)&rna_CollectionChildren_unlink_func}
};

