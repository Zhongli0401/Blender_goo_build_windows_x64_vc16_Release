
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

#include "rna_animviz.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_AnimViz_rna_properties;
PointerPropertyRNA rna_AnimViz_rna_type;
PointerPropertyRNA rna_AnimViz_motion_path;


CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties;
PointerPropertyRNA rna_AnimVizMotionPaths_rna_type;
EnumPropertyRNA rna_AnimVizMotionPaths_type;
EnumPropertyRNA rna_AnimVizMotionPaths_range;
EnumPropertyRNA rna_AnimVizMotionPaths_bake_location;
BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers;
BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all;
IntPropertyRNA rna_AnimVizMotionPaths_frame_step;
IntPropertyRNA rna_AnimVizMotionPaths_frame_start;
IntPropertyRNA rna_AnimVizMotionPaths_frame_end;
IntPropertyRNA rna_AnimVizMotionPaths_frame_before;
IntPropertyRNA rna_AnimVizMotionPaths_frame_after;
BoolPropertyRNA rna_AnimVizMotionPaths_has_motion_paths;


CollectionPropertyRNA rna_MotionPath_rna_properties;
PointerPropertyRNA rna_MotionPath_rna_type;
CollectionPropertyRNA rna_MotionPath_points;
IntPropertyRNA rna_MotionPath_frame_start;
IntPropertyRNA rna_MotionPath_frame_end;
IntPropertyRNA rna_MotionPath_length;
FloatPropertyRNA rna_MotionPath_color;
IntPropertyRNA rna_MotionPath_line_thickness;
BoolPropertyRNA rna_MotionPath_use_bone_head;
BoolPropertyRNA rna_MotionPath_is_modified;
BoolPropertyRNA rna_MotionPath_use_custom_color;
BoolPropertyRNA rna_MotionPath_lines;


CollectionPropertyRNA rna_MotionPathVert_rna_properties;
PointerPropertyRNA rna_MotionPathVert_rna_type;
FloatPropertyRNA rna_MotionPathVert_co;
BoolPropertyRNA rna_MotionPathVert_select;

static PointerRNA AnimViz_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AnimViz_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimViz_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimViz_rna_properties_get(iter);
    }
}

void AnimViz_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnimViz_rna_properties_get(iter);
    }
}

void AnimViz_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnimViz_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimViz_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA AnimViz_motion_path_get(PointerRNA *ptr)
{
    return rna_AnimViz_motion_paths_get(ptr);
}

static PointerRNA AnimVizMotionPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
    }
}

void AnimVizMotionPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
    }
}

void AnimVizMotionPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnimVizMotionPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnimVizMotionPaths_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int AnimVizMotionPaths_type_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_type);
}

void AnimVizMotionPaths_type_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_type = value;
}

int AnimVizMotionPaths_range_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_range);
}

void AnimVizMotionPaths_range_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_range = value;
}

int AnimVizMotionPaths_bake_location_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((data->path_bakeflag) & 2);
}

void AnimVizMotionPaths_bake_location_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_bakeflag &= ~2;
    data->path_bakeflag |= value;
}

bool AnimVizMotionPaths_show_frame_numbers_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (((data->path_viewflag) & 1) != 0);
}

void AnimVizMotionPaths_show_frame_numbers_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag |= 1; }
    else { data->path_viewflag &= ~1; }
}

bool AnimVizMotionPaths_show_keyframe_highlight_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (((data->path_viewflag) & 2) != 0);
}

void AnimVizMotionPaths_show_keyframe_highlight_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag |= 2; }
    else { data->path_viewflag &= ~2; }
}

bool AnimVizMotionPaths_show_keyframe_numbers_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (((data->path_viewflag) & 4) != 0);
}

void AnimVizMotionPaths_show_keyframe_numbers_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag |= 4; }
    else { data->path_viewflag &= ~4; }
}

bool AnimVizMotionPaths_show_keyframe_action_all_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (((data->path_viewflag) & 8) != 0);
}

void AnimVizMotionPaths_show_keyframe_action_all_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag |= 8; }
    else { data->path_viewflag &= ~8; }
}

int AnimVizMotionPaths_frame_step_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_step);
}

void AnimVizMotionPaths_frame_step_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_step = CLAMPIS(value, 1, 100);
}

int AnimVizMotionPaths_frame_start_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_sf);
}

void AnimVizMotionPaths_frame_start_set(PointerRNA *ptr, int value)
{
    rna_AnimViz_path_start_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_end_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_ef);
}

void AnimVizMotionPaths_frame_end_set(PointerRNA *ptr, int value)
{
    rna_AnimViz_path_end_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_before_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_bc);
}

void AnimVizMotionPaths_frame_before_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_bc = CLAMPIS(value, 1, 524287);
}

int AnimVizMotionPaths_frame_after_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_ac);
}

void AnimVizMotionPaths_frame_after_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_ac = CLAMPIS(value, 1, 524287);
}

bool AnimVizMotionPaths_has_motion_paths_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (((data->path_bakeflag) & 4) != 0);
}

static PointerRNA MotionPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MotionPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MotionPath_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MotionPath_rna_properties_get(iter);
    }
}

void MotionPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MotionPath_rna_properties_get(iter);
    }
}

void MotionPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MotionPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MotionPath_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MotionPath_points_length(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (data->points == NULL) ? 0 : data->length;
}

static PointerRNA MotionPath_points_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MotionPathVert, rna_iterator_array_get(iter));
}

void MotionPath_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MotionPath_points;

    rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->length, 0, NULL);

    if (iter->valid) {
        iter->ptr = MotionPath_points_get(iter);
    }
}

void MotionPath_points_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MotionPath_points_get(iter);
    }
}

void MotionPath_points_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MotionPath_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MotionPath_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = MotionPath_points_get(&iter); }
    }

    MotionPath_points_end(&iter);

    return found;
}

int MotionPath_frame_start_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->start_frame);
}

int MotionPath_frame_end_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->end_frame);
}

int MotionPath_length_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->length);
}

void MotionPath_color_get(PointerRNA *ptr, float values[3])
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void MotionPath_color_set(PointerRNA *ptr, const float values[3])
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

int MotionPath_line_thickness_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->line_thickness);
}

void MotionPath_line_thickness_set(PointerRNA *ptr, int value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    data->line_thickness = CLAMPIS(value, 1, 6);
}

bool MotionPath_use_bone_head_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

bool MotionPath_is_modified_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MotionPath_is_modified_set(PointerRNA *ptr, bool value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool MotionPath_use_custom_color_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void MotionPath_use_custom_color_set(PointerRNA *ptr, bool value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool MotionPath_lines_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void MotionPath_lines_set(PointerRNA *ptr, bool value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA MotionPathVert_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MotionPathVert_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MotionPathVert_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MotionPathVert_rna_properties_get(iter);
    }
}

void MotionPathVert_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MotionPathVert_rna_properties_get(iter);
    }
}

void MotionPathVert_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MotionPathVert_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MotionPathVert_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MotionPathVert_co_get(PointerRNA *ptr, float values[3])
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void MotionPathVert_co_set(PointerRNA *ptr, const float values[3])
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

bool MotionPathVert_select_get(PointerRNA *ptr)
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MotionPathVert_select_set(PointerRNA *ptr, bool value)
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}





/* Animation Visualization */
CollectionPropertyRNA rna_AnimViz_rna_properties = {
	{(PropertyRNA *)&rna_AnimViz_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimViz_rna_properties_begin, AnimViz_rna_properties_next, AnimViz_rna_properties_end, AnimViz_rna_properties_get, NULL, NULL, AnimViz_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimViz_rna_type = {
	{(PropertyRNA *)&rna_AnimViz_motion_path, (PropertyRNA *)&rna_AnimViz_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimViz_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AnimViz_motion_path = {
	{NULL, (PropertyRNA *)&rna_AnimViz_rna_type,
	-1, "motion_path", 8650752, 1, 0, 0, 0, "Motion Paths",
	"Motion Path settings for visualization",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimViz_motion_path_get, NULL, NULL, NULL,&RNA_AnimVizMotionPaths
};

StructRNA RNA_AnimViz = {
	{(ContainerRNA *)&RNA_AnimVizMotionPaths, (ContainerRNA *)&RNA_KeyingSetInfo,
	NULL,
	{(PropertyRNA *)&rna_AnimViz_rna_properties, (PropertyRNA *)&rna_AnimViz_motion_path}},
	"AnimViz", NULL, NULL, 516, NULL, "Animation Visualization",
	"Settings for the visualization of motion",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimViz_rna_properties,
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

/* Motion Path Settings */
CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_rna_properties_begin, AnimVizMotionPaths_rna_properties_next, AnimVizMotionPaths_rna_properties_end, AnimVizMotionPaths_rna_properties_get, NULL, NULL, AnimVizMotionPaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnimVizMotionPaths_rna_type = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_type, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_AnimVizMotionPaths_type = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_range, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_type,
	-1, "type", 3, 1, 0, 4, 0, "Paths Type",
	"Type of range to show for Motion Paths",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAnimVizSettings, path_type), 1, NULL},
	AnimVizMotionPaths_type_get, AnimVizMotionPaths_type_set, NULL, NULL, NULL, rna_enum_motionpath_display_type_items, 2, 0
};

EnumPropertyRNA rna_AnimVizMotionPaths_range = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_bake_location, (PropertyRNA *)&rna_AnimVizMotionPaths_type,
	-1, "range", 3, 1, 0, 4, 0, "Paths Range",
	"Type of range to calculate for Motion Paths",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAnimVizSettings, path_range), 1, NULL},
	AnimVizMotionPaths_range_get, AnimVizMotionPaths_range_set, NULL, NULL, NULL, rna_enum_motionpath_range_items, 3, 0
};

EnumPropertyRNA rna_AnimVizMotionPaths_bake_location = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_frame_numbers, (PropertyRNA *)&rna_AnimVizMotionPaths_range,
	-1, "bake_location", 3, 1, 0, 4, 0, "Bake Location",
	"When calculating Bone Paths, use Head or Tips",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAnimVizSettings, path_bakeflag), 1, NULL},
	AnimVizMotionPaths_bake_location_get, AnimVizMotionPaths_bake_location_set, NULL, NULL, NULL, rna_enum_motionpath_bake_location_items, 2, 0
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_highlight, (PropertyRNA *)&rna_AnimVizMotionPaths_bake_location,
	-1, "show_frame_numbers", 3, 1, 0, 0, 0, "Show Frame Numbers",
	"Show frame numbers on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_show_frame_numbers_get, AnimVizMotionPaths_show_frame_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_numbers, (PropertyRNA *)&rna_AnimVizMotionPaths_show_frame_numbers,
	-1, "show_keyframe_highlight", 3, 1, 0, 0, 0, "Highlight Keyframes",
	"Emphasize position of keyframes on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_highlight_get, AnimVizMotionPaths_show_keyframe_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_action_all, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_highlight,
	-1, "show_keyframe_numbers", 3, 1, 0, 0, 0, "Show Keyframe Numbers",
	"Show frame numbers of Keyframes on Motion Paths",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_numbers_get, AnimVizMotionPaths_show_keyframe_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_step, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_numbers,
	-1, "show_keyframe_action_all", 3, 1, 0, 0, 0, "All Action Keyframes",
	"For bone motion paths, search whole Action for keyframes instead of in group with matching name only (is slower)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_action_all_get, AnimVizMotionPaths_show_keyframe_action_all_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_step = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_start, (PropertyRNA *)&rna_AnimVizMotionPaths_show_keyframe_action_all,
	-1, "frame_step", 3, 1, 0, 4, 0, "Frame Step",
	"Number of frames between paths shown (not for \'On Keyframes\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAnimVizSettings, path_step), 1, NULL},
	AnimVizMotionPaths_frame_step_get, AnimVizMotionPaths_frame_step_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 100, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_start = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_end, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_step,
	-1, "frame_start", 3, 1, 0, 0, 0, "Start Frame",
	"Starting frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_frame_start_get, AnimVizMotionPaths_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_end = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_before, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_start,
	-1, "frame_end", 3, 1, 0, 0, 0, "End Frame",
	"End frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_frame_end_get, AnimVizMotionPaths_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_before = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_frame_after, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_end,
	-1, "frame_before", 3, 1, 0, 4, 0, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAnimVizSettings, path_bc), 0, NULL},
	AnimVizMotionPaths_frame_before_get, AnimVizMotionPaths_frame_before_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 524287, 1, 524287, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_after = {
	{(PropertyRNA *)&rna_AnimVizMotionPaths_has_motion_paths, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_before,
	-1, "frame_after", 3, 1, 0, 4, 0, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bAnimVizSettings, path_ac), 0, NULL},
	AnimVizMotionPaths_frame_after_get, AnimVizMotionPaths_frame_after_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 524287, 1, 524287, 1, 0, NULL
};

BoolPropertyRNA rna_AnimVizMotionPaths_has_motion_paths = {
	{NULL, (PropertyRNA *)&rna_AnimVizMotionPaths_frame_after,
	-1, "has_motion_paths", 2, 1, 0, 0, 0, "Has Motion Paths",
	"Are there any bone paths that will need updating (read-only)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnimVizMotionPaths_has_motion_paths_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_AnimVizMotionPaths = {
	{(ContainerRNA *)&RNA_MotionPath, (ContainerRNA *)&RNA_AnimViz,
	NULL,
	{(PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties, (PropertyRNA *)&rna_AnimVizMotionPaths_has_motion_paths}},
	"AnimVizMotionPaths", NULL, NULL, 516, NULL, "Motion Path Settings",
	"Motion Path settings for animation visualization",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnimVizMotionPaths_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path */
CollectionPropertyRNA rna_MotionPath_rna_properties = {
	{(PropertyRNA *)&rna_MotionPath_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_rna_properties_begin, MotionPath_rna_properties_next, MotionPath_rna_properties_end, MotionPath_rna_properties_get, NULL, NULL, MotionPath_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MotionPath_rna_type = {
	{(PropertyRNA *)&rna_MotionPath_points, (PropertyRNA *)&rna_MotionPath_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MotionPath_points = {
	{(PropertyRNA *)&rna_MotionPath_frame_start, (PropertyRNA *)&rna_MotionPath_rna_type,
	-1, "points", 0, 0, 0, 8, 0, "Motion Path Points",
	"Cached positions per frame",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_points_begin, MotionPath_points_next, MotionPath_points_end, MotionPath_points_get, MotionPath_points_length, MotionPath_points_lookup_int, NULL, NULL, &RNA_MotionPathVert
};

IntPropertyRNA rna_MotionPath_frame_start = {
	{(PropertyRNA *)&rna_MotionPath_frame_end, (PropertyRNA *)&rna_MotionPath_points,
	-1, "frame_start", 2, 0, 0, 4, 0, "Start Frame",
	"Starting frame of the stored range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bMotionPath, start_frame), 0, NULL},
	MotionPath_frame_start_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_frame_end = {
	{(PropertyRNA *)&rna_MotionPath_length, (PropertyRNA *)&rna_MotionPath_frame_start,
	-1, "frame_end", 2, 0, 0, 4, 0, "End Frame",
	"End frame of the stored range",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bMotionPath, end_frame), 0, NULL},
	MotionPath_frame_end_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_length = {
	{(PropertyRNA *)&rna_MotionPath_color, (PropertyRNA *)&rna_MotionPath_frame_end,
	-1, "length", 2, 0, 0, 4, 0, "Length",
	"Number of frames cached",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bMotionPath, length), 0, NULL},
	MotionPath_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static float rna_MotionPath_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MotionPath_color = {
	{(PropertyRNA *)&rna_MotionPath_line_thickness, (PropertyRNA *)&rna_MotionPath_length,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Custom color for motion path",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bMotionPath, color), 5, NULL},
	NULL, NULL, MotionPath_color_get, MotionPath_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_MotionPath_color_default
};

IntPropertyRNA rna_MotionPath_line_thickness = {
	{(PropertyRNA *)&rna_MotionPath_use_bone_head, (PropertyRNA *)&rna_MotionPath_color,
	-1, "line_thickness", 3, 0, 0, 4, 0, "Line Thickness",
	"Line thickness for motion path",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bMotionPath, line_thickness), 0, NULL},
	MotionPath_line_thickness_get, MotionPath_line_thickness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 6, 1, 6, 1, 0, NULL
};

BoolPropertyRNA rna_MotionPath_use_bone_head = {
	{(PropertyRNA *)&rna_MotionPath_is_modified, (PropertyRNA *)&rna_MotionPath_line_thickness,
	-1, "use_bone_head", 2, 0, 0, 0, 0, "Use Bone Heads",
	"For PoseBone paths, use the bone head location when calculating this path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_use_bone_head_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MotionPath_is_modified = {
	{(PropertyRNA *)&rna_MotionPath_use_custom_color, (PropertyRNA *)&rna_MotionPath_use_bone_head,
	-1, "is_modified", 3, 0, 0, 0, 0, "Edit Path",
	"Path is being edited",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_is_modified_get, MotionPath_is_modified_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MotionPath_use_custom_color = {
	{(PropertyRNA *)&rna_MotionPath_lines, (PropertyRNA *)&rna_MotionPath_is_modified,
	-1, "use_custom_color", 3, 0, 0, 0, 0, "Custom Colors",
	"Use custom color for this motion path",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_use_custom_color_get, MotionPath_use_custom_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MotionPath_lines = {
	{NULL, (PropertyRNA *)&rna_MotionPath_use_custom_color,
	-1, "lines", 3, 0, 0, 0, 0, "Lines",
	"Use straight lines between keyframe points",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102825984, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPath_lines_get, MotionPath_lines_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPath = {
	{(ContainerRNA *)&RNA_MotionPathVert, (ContainerRNA *)&RNA_AnimVizMotionPaths,
	NULL,
	{(PropertyRNA *)&rna_MotionPath_rna_properties, (PropertyRNA *)&rna_MotionPath_lines}},
	"MotionPath", NULL, NULL, 516, NULL, "Motion Path",
	"Cache of the world-space positions of an element over a frame range",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MotionPath_rna_properties,
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

/* Motion Path Cache Point */
CollectionPropertyRNA rna_MotionPathVert_rna_properties = {
	{(PropertyRNA *)&rna_MotionPathVert_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPathVert_rna_properties_begin, MotionPathVert_rna_properties_next, MotionPathVert_rna_properties_end, MotionPathVert_rna_properties_get, NULL, NULL, MotionPathVert_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MotionPathVert_rna_type = {
	{(PropertyRNA *)&rna_MotionPathVert_co, (PropertyRNA *)&rna_MotionPathVert_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPathVert_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MotionPathVert_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MotionPathVert_co = {
	{(PropertyRNA *)&rna_MotionPathVert_select, (PropertyRNA *)&rna_MotionPathVert_rna_type,
	-1, "co", 3, 0, 0, 4, 0, "Coordinates",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bMotionPathVert, co), 5, NULL},
	NULL, NULL, MotionPathVert_co_get, MotionPathVert_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MotionPathVert_co_default
};

BoolPropertyRNA rna_MotionPathVert_select = {
	{NULL, (PropertyRNA *)&rna_MotionPathVert_co,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Path point is selected for editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MotionPathVert_select_get, MotionPathVert_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPathVert = {
	{(ContainerRNA *)&RNA_Armature, (ContainerRNA *)&RNA_MotionPath,
	NULL,
	{(PropertyRNA *)&rna_MotionPathVert_rna_properties, (PropertyRNA *)&rna_MotionPathVert_select}},
	"MotionPathVert", NULL, NULL, 516, NULL, "Motion Path Cache Point",
	"Cached location on path",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MotionPathVert_rna_properties,
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

