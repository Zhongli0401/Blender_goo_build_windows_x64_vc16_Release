
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

#include "rna_screen.c"

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

CollectionPropertyRNA rna_Screen_areas;
BoolPropertyRNA rna_Screen_is_animation_playing;
BoolPropertyRNA rna_Screen_is_scrubbing;
BoolPropertyRNA rna_Screen_is_temporary;
BoolPropertyRNA rna_Screen_show_fullscreen;
BoolPropertyRNA rna_Screen_show_statusbar;
BoolPropertyRNA rna_Screen_use_play_top_left_3d_editor;
BoolPropertyRNA rna_Screen_use_play_3d_editors;
BoolPropertyRNA rna_Screen_use_follow;
BoolPropertyRNA rna_Screen_use_play_animation_editors;
BoolPropertyRNA rna_Screen_use_play_properties_editors;
BoolPropertyRNA rna_Screen_use_play_image_editors;
BoolPropertyRNA rna_Screen_use_play_sequence_editors;
BoolPropertyRNA rna_Screen_use_play_node_editors;
BoolPropertyRNA rna_Screen_use_play_clip_editors;

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


extern FunctionRNA rna_Screen_statusbar_info_func;
extern StringPropertyRNA rna_Screen_statusbar_info_statusbar_info;



CollectionPropertyRNA rna_Area_rna_properties;
PointerPropertyRNA rna_Area_rna_type;
CollectionPropertyRNA rna_Area_spaces;
CollectionPropertyRNA rna_Area_regions;
BoolPropertyRNA rna_Area_show_menus;
EnumPropertyRNA rna_Area_type;
EnumPropertyRNA rna_Area_ui_type;
IntPropertyRNA rna_Area_x;
IntPropertyRNA rna_Area_y;
IntPropertyRNA rna_Area_width;
IntPropertyRNA rna_Area_height;

extern FunctionRNA rna_Area_tag_redraw_func;
extern FunctionRNA rna_Area_header_text_set_func;
extern StringPropertyRNA rna_Area_header_text_set_text;



CollectionPropertyRNA rna_AreaSpaces_rna_properties;
PointerPropertyRNA rna_AreaSpaces_rna_type;
PointerPropertyRNA rna_AreaSpaces_active;


CollectionPropertyRNA rna_Region_rna_properties;
PointerPropertyRNA rna_Region_rna_type;
EnumPropertyRNA rna_Region_type;
IntPropertyRNA rna_Region_x;
IntPropertyRNA rna_Region_y;
IntPropertyRNA rna_Region_width;
IntPropertyRNA rna_Region_height;
PointerPropertyRNA rna_Region_view2d;
EnumPropertyRNA rna_Region_alignment;
PointerPropertyRNA rna_Region_data;

extern FunctionRNA rna_Region_tag_redraw_func;


CollectionPropertyRNA rna_View2D_rna_properties;
PointerPropertyRNA rna_View2D_rna_type;

extern FunctionRNA rna_View2D_region_to_view_func;
extern FloatPropertyRNA rna_View2D_region_to_view_x;
extern FloatPropertyRNA rna_View2D_region_to_view_y;
extern FloatPropertyRNA rna_View2D_region_to_view_result;

extern FunctionRNA rna_View2D_view_to_region_func;
extern FloatPropertyRNA rna_View2D_view_to_region_x;
extern FloatPropertyRNA rna_View2D_view_to_region_y;
extern BoolPropertyRNA rna_View2D_view_to_region_clip;
extern IntPropertyRNA rna_View2D_view_to_region_result;


static PointerRNA Screen_areas_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Area, rna_iterator_listbase_get(iter));
}

void Screen_areas_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Screen_areas;

    rna_iterator_listbase_begin(iter, &data->areabase, NULL);

    if (iter->valid) {
        iter->ptr = Screen_areas_get(iter);
    }
}

void Screen_areas_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Screen_areas_get(iter);
    }
}

void Screen_areas_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Screen_areas_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Screen_areas_begin(&iter, ptr);

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
        if (found) { *r_ptr = Screen_areas_get(&iter); }
    }

    Screen_areas_end(&iter);

    return found;
}

bool Screen_is_animation_playing_get(PointerRNA *ptr)
{
    return rna_Screen_is_animation_playing_get(ptr);
}

bool Screen_is_scrubbing_get(PointerRNA *ptr)
{
    return rna_Screen_is_scrubbing_get(ptr);
}

bool Screen_is_temporary_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->temp) & 1) != 0);
}

bool Screen_show_fullscreen_get(PointerRNA *ptr)
{
    return rna_Screen_fullscreen_get(ptr);
}

bool Screen_show_statusbar_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return !(((data->flag) & 2) != 0);
}

void Screen_show_statusbar_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (!value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool Screen_use_play_top_left_3d_editor_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 1) != 0);
}

void Screen_use_play_top_left_3d_editor_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 1; }
    else { data->redraws_flag &= ~1; }
}

bool Screen_use_play_3d_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 2) != 0);
}

void Screen_use_play_3d_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 2; }
    else { data->redraws_flag &= ~2; }
}

bool Screen_use_follow_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 32768) != 0);
}

void Screen_use_follow_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 32768; }
    else { data->redraws_flag &= ~32768; }
}

bool Screen_use_play_animation_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 4) != 0);
}

void Screen_use_play_animation_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 4; }
    else { data->redraws_flag &= ~4; }
}

bool Screen_use_play_properties_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 8) != 0);
}

void Screen_use_play_properties_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 8; }
    else { data->redraws_flag &= ~8; }
}

bool Screen_use_play_image_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 64) != 0);
}

void Screen_use_play_image_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 64; }
    else { data->redraws_flag &= ~64; }
}

bool Screen_use_play_sequence_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 32) != 0);
}

void Screen_use_play_sequence_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 32; }
    else { data->redraws_flag &= ~32; }
}

bool Screen_use_play_node_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 256) != 0);
}

void Screen_use_play_node_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 256; }
    else { data->redraws_flag &= ~256; }
}

bool Screen_use_play_clip_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return (((data->redraws_flag) & 512) != 0);
}

void Screen_use_play_clip_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag |= 512; }
    else { data->redraws_flag &= ~512; }
}

static PointerRNA Area_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Area_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Area_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Area_rna_properties_get(iter);
    }
}

void Area_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Area_rna_properties_get(iter);
    }
}

void Area_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Area_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Area_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Area_spaces_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Space, rna_iterator_listbase_get(iter));
}

void Area_spaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Area_spaces;

    rna_iterator_listbase_begin(iter, &data->spacedata, NULL);

    if (iter->valid) {
        iter->ptr = Area_spaces_get(iter);
    }
}

void Area_spaces_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Area_spaces_get(iter);
    }
}

void Area_spaces_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Area_spaces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Area_spaces_begin(&iter, ptr);

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
        if (found) { *r_ptr = Area_spaces_get(&iter); }
    }

    Area_spaces_end(&iter);

    return found;
}

static PointerRNA Area_regions_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Region, rna_iterator_listbase_get(iter));
}

void Area_regions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Area_regions;

    rna_iterator_listbase_begin(iter, &data->regionbase, NULL);

    if (iter->valid) {
        iter->ptr = Area_regions_get(iter);
    }
}

void Area_regions_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Area_regions_get(iter);
    }
}

void Area_regions_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Area_regions_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Area_regions_begin(&iter, ptr);

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
        if (found) { *r_ptr = Area_regions_get(&iter); }
    }

    Area_regions_end(&iter);

    return found;
}

bool Area_show_menus_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void Area_show_menus_set(PointerRNA *ptr, bool value)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

int Area_type_get(PointerRNA *ptr)
{
    return rna_Area_type_get(ptr);
}

void Area_type_set(PointerRNA *ptr, int value)
{
    rna_Area_type_set(ptr, value);
}

int Area_ui_type_get(PointerRNA *ptr)
{
    return rna_Area_ui_type_get(ptr);
}

void Area_ui_type_set(PointerRNA *ptr, int value)
{
    rna_Area_ui_type_set(ptr, value);
}

int Area_x_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->totrct.xmin);
}

int Area_y_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->totrct.ymin);
}

int Area_width_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->winx);
}

int Area_height_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->winy);
}

static PointerRNA AreaSpaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AreaSpaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AreaSpaces_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AreaSpaces_rna_properties_get(iter);
    }
}

void AreaSpaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AreaSpaces_rna_properties_get(iter);
    }
}

void AreaSpaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AreaSpaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AreaSpaces_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA AreaSpaces_active_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Space, data->spacedata.first);
}

static PointerRNA Region_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Region_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Region_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Region_rna_properties_get(iter);
    }
}

void Region_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Region_rna_properties_get(iter);
    }
}

void Region_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Region_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Region_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int Region_type_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->regiontype);
}

int Region_x_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winrct.xmin);
}

int Region_y_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winrct.ymin);
}

int Region_width_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winx);
}

int Region_height_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winy);
}

PointerRNA Region_view2d_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_View2D, &data->v2d);
}

int Region_alignment_get(PointerRNA *ptr)
{
    return rna_region_alignment_get(ptr);
}

PointerRNA Region_data_get(PointerRNA *ptr)
{
    return rna_Region_data_get(ptr);
}

static PointerRNA View2D_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void View2D_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_View2D_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = View2D_rna_properties_get(iter);
    }
}

void View2D_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = View2D_rna_properties_get(iter);
    }
}

void View2D_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int View2D_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA View2D_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

const char * Screen_statusbar_info_func(struct bScreen *_self, Main *bmain, bContext *C)
{
	return rna_Screen_statusbar_info_get(_self, bmain, C);
}

void Screen_statusbar_info_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bScreen *_self;
	const char * statusbar_info;
	char *_data, *_retdata;
	
	_self = (struct bScreen *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	statusbar_info = rna_Screen_statusbar_info_get(_self, CTX_data_main(C), C);
	*((const char * *)_retdata) = statusbar_info;
}

/* Repeated prototypes to detect errors */

const char * rna_Screen_statusbar_info_get(struct bScreen *_self, Main *bmain, bContext *C);

void Area_tag_redraw_func(struct ScrArea *_self)
{
	ED_area_tag_redraw(_self);
}

void Area_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ScrArea *_self;
	_self = (struct ScrArea *)_ptr->data;
	
	ED_area_tag_redraw(_self);
}

void Area_header_text_set_func(struct ScrArea *_self, const char * text)
{
	ED_area_status_text(_self, text);
}

void Area_header_text_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ScrArea *_self;
	const char * text;
	char *_data;
	
	_self = (struct ScrArea *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	ED_area_status_text(_self, text);
}

/* Repeated prototypes to detect errors */

void ED_area_tag_redraw(struct ScrArea *_self);
void ED_area_status_text(struct ScrArea *_self, const char * text);


void Region_tag_redraw_func(struct ARegion *_self)
{
	ED_region_tag_redraw(_self);
}

void Region_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ARegion *_self;
	_self = (struct ARegion *)_ptr->data;
	
	ED_region_tag_redraw(_self);
}

/* Repeated prototypes to detect errors */

void ED_region_tag_redraw(struct ARegion *_self);

void View2D_region_to_view_func(struct View2D *_self, float x, float y, float result[2])
{
	rna_View2D_region_to_view(_self, x, y, result);
}

void View2D_region_to_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View2D *_self;
	float x;
	float y;
	float *result;
	char *_data;
	
	_self = (struct View2D *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	result = ((float *)_data);
	
	rna_View2D_region_to_view(_self, x, y, result);
}

void View2D_view_to_region_func(struct View2D *_self, float x, float y, bool clip, int result[2])
{
	rna_View2D_view_to_region(_self, x, y, clip, result);
}

void View2D_view_to_region_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct View2D *_self;
	float x;
	float y;
	bool clip;
	int *result;
	char *_data;
	
	_self = (struct View2D *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	clip = *((bool *)_data);
	_data += 8;
	result = ((int *)_data);
	
	rna_View2D_view_to_region(_self, x, y, clip, result);
}

/* Repeated prototypes to detect errors */

void rna_View2D_region_to_view(struct View2D *_self, float x, float y, float result[2]);
void rna_View2D_view_to_region(struct View2D *_self, float x, float y, bool clip, int result[2]);

/* Screen */
CollectionPropertyRNA rna_Screen_areas = {
	{(PropertyRNA *)&rna_Screen_is_animation_playing, NULL,
	-1, "areas", 0, 0, 0, 0, 0, "Areas",
	"Areas the screen is subdivided into",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_areas_begin, Screen_areas_next, Screen_areas_end, Screen_areas_get, NULL, Screen_areas_lookup_int, NULL, NULL, &RNA_Area
};

BoolPropertyRNA rna_Screen_is_animation_playing = {
	{(PropertyRNA *)&rna_Screen_is_scrubbing, (PropertyRNA *)&rna_Screen_areas,
	-1, "is_animation_playing", 2, 0, 0, 0, 0, "Animation Playing",
	"Animation playback is active",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_is_animation_playing_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_is_scrubbing = {
	{(PropertyRNA *)&rna_Screen_is_temporary, (PropertyRNA *)&rna_Screen_is_animation_playing,
	-1, "is_scrubbing", 2, 0, 0, 0, 0, "User is Scrubbing",
	"True when the user is scrubbing through time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_is_scrubbing_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_is_temporary = {
	{(PropertyRNA *)&rna_Screen_show_fullscreen, (PropertyRNA *)&rna_Screen_is_scrubbing,
	-1, "is_temporary", 2, 0, 0, 0, 0, "Temporary",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_is_temporary_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_show_fullscreen = {
	{(PropertyRNA *)&rna_Screen_show_statusbar, (PropertyRNA *)&rna_Screen_is_temporary,
	-1, "show_fullscreen", 2, 0, 0, 0, 0, "Maximize",
	"An area is maximized, filling this screen",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_show_fullscreen_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_show_statusbar = {
	{(PropertyRNA *)&rna_Screen_use_play_top_left_3d_editor, (PropertyRNA *)&rna_Screen_show_fullscreen,
	-1, "show_statusbar", 3, 0, 0, 0, 0, "Show Status Bar",
	"Show status bar",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_bar_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_show_statusbar_get, Screen_show_statusbar_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_top_left_3d_editor = {
	{(PropertyRNA *)&rna_Screen_use_play_3d_editors, (PropertyRNA *)&rna_Screen_show_statusbar,
	-1, "use_play_top_left_3d_editor", 3, 0, 0, 0, 0, "Top-Left 3D Editor",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_top_left_3d_editor_get, Screen_use_play_top_left_3d_editor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_3d_editors = {
	{(PropertyRNA *)&rna_Screen_use_follow, (PropertyRNA *)&rna_Screen_use_play_top_left_3d_editor,
	-1, "use_play_3d_editors", 3, 0, 0, 0, 0, "All 3D Viewports",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_3d_editors_get, Screen_use_play_3d_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_follow = {
	{(PropertyRNA *)&rna_Screen_use_play_animation_editors, (PropertyRNA *)&rna_Screen_use_play_3d_editors,
	-1, "use_follow", 3, 0, 0, 0, 0, "Follow",
	"Follow current frame in editors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_follow_get, Screen_use_follow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_animation_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_properties_editors, (PropertyRNA *)&rna_Screen_use_follow,
	-1, "use_play_animation_editors", 3, 0, 0, 0, 0, "Animation Editors",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_animation_editors_get, Screen_use_play_animation_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_properties_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_image_editors, (PropertyRNA *)&rna_Screen_use_play_animation_editors,
	-1, "use_play_properties_editors", 3, 0, 0, 0, 0, "Property Editors",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_properties_editors_get, Screen_use_play_properties_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_image_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_sequence_editors, (PropertyRNA *)&rna_Screen_use_play_properties_editors,
	-1, "use_play_image_editors", 3, 0, 0, 0, 0, "Image Editors",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_image_editors_get, Screen_use_play_image_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_sequence_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_node_editors, (PropertyRNA *)&rna_Screen_use_play_image_editors,
	-1, "use_play_sequence_editors", 3, 0, 0, 0, 0, "Sequencer Editors",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_sequence_editors_get, Screen_use_play_sequence_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_node_editors = {
	{(PropertyRNA *)&rna_Screen_use_play_clip_editors, (PropertyRNA *)&rna_Screen_use_play_sequence_editors,
	-1, "use_play_node_editors", 3, 0, 0, 0, 0, "Node Editors",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_node_editors_get, Screen_use_play_node_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Screen_use_play_clip_editors = {
	{NULL, (PropertyRNA *)&rna_Screen_use_play_node_editors,
	-1, "use_play_clip_editors", 3, 0, 0, 0, 0, "Clip Editors",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Screen_redraw_update, 269287424, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Screen_use_play_clip_editors_get, Screen_use_play_clip_editors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_Screen_statusbar_info_statusbar_info = {
	{NULL, NULL,
	-1, "statusbar_info", 262145, 0, 2, 0, 0, "Status Bar Info",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_Screen_statusbar_info_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Screen_statusbar_info_statusbar_info, (PropertyRNA *)&rna_Screen_statusbar_info_statusbar_info}},
	"statusbar_info", 12, "statusbar_info",
	Screen_statusbar_info_call,
	(PropertyRNA *)&rna_Screen_statusbar_info_statusbar_info
};

StructRNA RNA_Screen = {
	{(ContainerRNA *)&RNA_Area, (ContainerRNA *)&RNA_SceneRenderView,
	NULL,
	{(PropertyRNA *)&rna_Screen_areas, (PropertyRNA *)&rna_Screen_use_play_clip_editors}},
	"Screen", NULL, NULL, 519, NULL, "Screen",
	"Screen data-block, defining the layout of areas in a window",
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
	{(FunctionRNA *)&rna_Screen_statusbar_info_func, (FunctionRNA *)&rna_Screen_statusbar_info_func}
};

/* Area */
CollectionPropertyRNA rna_Area_rna_properties = {
	{(PropertyRNA *)&rna_Area_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Area_rna_properties_begin, Area_rna_properties_next, Area_rna_properties_end, Area_rna_properties_get, NULL, NULL, Area_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Area_rna_type = {
	{(PropertyRNA *)&rna_Area_spaces, (PropertyRNA *)&rna_Area_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Area_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Area_spaces = {
	{(PropertyRNA *)&rna_Area_regions, (PropertyRNA *)&rna_Area_rna_type,
	-1, "spaces", 0, 0, 0, 0, 0, "Spaces",
	"Spaces contained in this area, the first being the active space (NOTE: Useful for example to restore a previously used 3D view space in a certain area to get the old view orientation)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AreaSpaces},
	Area_spaces_begin, Area_spaces_next, Area_spaces_end, Area_spaces_get, NULL, Area_spaces_lookup_int, NULL, NULL, &RNA_Space
};

CollectionPropertyRNA rna_Area_regions = {
	{(PropertyRNA *)&rna_Area_show_menus, (PropertyRNA *)&rna_Area_spaces,
	-1, "regions", 0, 0, 0, 0, 0, "Regions",
	"Regions this area is subdivided in",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Area_regions_begin, Area_regions_next, Area_regions_end, Area_regions_get, NULL, Area_regions_lookup_int, NULL, NULL, &RNA_Region
};

BoolPropertyRNA rna_Area_show_menus = {
	{(PropertyRNA *)&rna_Area_type, (PropertyRNA *)&rna_Area_regions,
	-1, "show_menus", 3, 0, 0, 0, 0, "Show Menus",
	"Show menus in the header",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Area_show_menus_get, Area_show_menus_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_Area_type = {
	{(PropertyRNA *)&rna_Area_ui_type, (PropertyRNA *)&rna_Area_show_menus,
	-1, "type", 4194305, 0, 0, 0, 0, "Editor Type",
	"Current editor type for this area",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Area_type_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Area_type_get, Area_type_set, NULL, NULL, NULL, rna_enum_space_type_items, 23, 1
};

EnumPropertyRNA rna_Area_ui_type = {
	{(PropertyRNA *)&rna_Area_x, (PropertyRNA *)&rna_Area_type,
	-1, "ui_type", 4194305, 0, 0, 0, 0, "Editor Type",
	"Current editor type for this area",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Area_ui_type_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Area_ui_type_get, Area_ui_type_set, rna_Area_ui_type_itemf, NULL, NULL, DummyRNA_NULL_items, 0, 65536
};

IntPropertyRNA rna_Area_x = {
	{(PropertyRNA *)&rna_Area_y, (PropertyRNA *)&rna_Area_ui_type,
	-1, "x", 2, 0, 0, 4, 0, "X Position",
	"The window relative vertical location of the area",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, totrct.xmin), 0, NULL},
	Area_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Area_y = {
	{(PropertyRNA *)&rna_Area_width, (PropertyRNA *)&rna_Area_x,
	-1, "y", 2, 0, 0, 4, 0, "Y Position",
	"The window relative horizontal location of the area",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, totrct.ymin), 0, NULL},
	Area_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Area_width = {
	{(PropertyRNA *)&rna_Area_height, (PropertyRNA *)&rna_Area_y,
	-1, "width", 2, 0, 0, 4, 0, "Width",
	"Area width",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, winx), 1, NULL},
	Area_width_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Area_height = {
	{NULL, (PropertyRNA *)&rna_Area_width,
	-1, "height", 2, 0, 0, 4, 0, "Height",
	"Area height",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ScrArea, winy), 1, NULL},
	Area_height_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

FunctionRNA rna_Area_tag_redraw_func = {
	{(FunctionRNA *)&rna_Area_header_text_set_func, NULL,
	NULL,
	{NULL, NULL}},
	"tag_redraw", 0, "tag_redraw",
	Area_tag_redraw_call,
	NULL
};

StringPropertyRNA rna_Area_header_text_set_text = {
	{NULL, NULL,
	-1, "text", 1, 0, 1, 0, 0, "Text",
	"New string for the header, None clears the text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_Area_header_text_set_func = {
	{NULL, (FunctionRNA *)&rna_Area_tag_redraw_func,
	NULL,
	{(PropertyRNA *)&rna_Area_header_text_set_text, (PropertyRNA *)&rna_Area_header_text_set_text}},
	"header_text_set", 0, "Set the header status text",
	Area_header_text_set_call,
	NULL
};

StructRNA RNA_Area = {
	{(ContainerRNA *)&RNA_AreaSpaces, (ContainerRNA *)&RNA_Screen,
	NULL,
	{(PropertyRNA *)&rna_Area_rna_properties, (PropertyRNA *)&rna_Area_height}},
	"Area", NULL, NULL, 516, NULL, "Area",
	"Area in a subdivided screen, containing an editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Area_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Area_tag_redraw_func, (FunctionRNA *)&rna_Area_header_text_set_func}
};

/* Area Spaces */
CollectionPropertyRNA rna_AreaSpaces_rna_properties = {
	{(PropertyRNA *)&rna_AreaSpaces_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaSpaces_rna_properties_begin, AreaSpaces_rna_properties_next, AreaSpaces_rna_properties_end, AreaSpaces_rna_properties_get, NULL, NULL, AreaSpaces_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AreaSpaces_rna_type = {
	{(PropertyRNA *)&rna_AreaSpaces_active, (PropertyRNA *)&rna_AreaSpaces_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaSpaces_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AreaSpaces_active = {
	{NULL, (PropertyRNA *)&rna_AreaSpaces_rna_type,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Space",
	"Space currently being displayed in this area",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AreaSpaces_active_get, NULL, NULL, NULL,&RNA_Space
};

StructRNA RNA_AreaSpaces = {
	{(ContainerRNA *)&RNA_Region, (ContainerRNA *)&RNA_Area,
	NULL,
	{(PropertyRNA *)&rna_AreaSpaces_rna_properties, (PropertyRNA *)&rna_AreaSpaces_active}},
	"AreaSpaces", NULL, NULL, 516, NULL, "Area Spaces",
	"Collection of spaces",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AreaSpaces_rna_properties,
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

/* Region */
CollectionPropertyRNA rna_Region_rna_properties = {
	{(PropertyRNA *)&rna_Region_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Region_rna_properties_begin, Region_rna_properties_next, Region_rna_properties_end, Region_rna_properties_get, NULL, NULL, Region_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Region_rna_type = {
	{(PropertyRNA *)&rna_Region_type, (PropertyRNA *)&rna_Region_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Region_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_Region_type = {
	{(PropertyRNA *)&rna_Region_x, (PropertyRNA *)&rna_Region_rna_type,
	-1, "type", 2, 0, 0, 4, 0, "Region Type",
	"Type of this region",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, regiontype), 1, NULL},
	Region_type_get, NULL, NULL, NULL, NULL, rna_enum_region_type_items, 14, 0
};

IntPropertyRNA rna_Region_x = {
	{(PropertyRNA *)&rna_Region_y, (PropertyRNA *)&rna_Region_type,
	-1, "x", 2, 0, 0, 4, 0, "X Position",
	"The window relative vertical location of the region",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winrct.xmin), 0, NULL},
	Region_x_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Region_y = {
	{(PropertyRNA *)&rna_Region_width, (PropertyRNA *)&rna_Region_x,
	-1, "y", 2, 0, 0, 4, 0, "Y Position",
	"The window relative horizontal location of the region",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winrct.ymin), 0, NULL},
	Region_y_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Region_width = {
	{(PropertyRNA *)&rna_Region_height, (PropertyRNA *)&rna_Region_y,
	-1, "width", 2, 0, 0, 4, 0, "Width",
	"Region width",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winx), 1, NULL},
	Region_width_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Region_height = {
	{(PropertyRNA *)&rna_Region_view2d, (PropertyRNA *)&rna_Region_width,
	-1, "height", 2, 0, 0, 4, 0, "Height",
	"Region height",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ARegion, winy), 1, NULL},
	Region_height_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_Region_view2d = {
	{(PropertyRNA *)&rna_Region_alignment, (PropertyRNA *)&rna_Region_height,
	-1, "view2d", 8650752, 0, 0, 0, 0, "View2D",
	"2D view of the region",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Region_view2d_get, NULL, NULL, NULL,&RNA_View2D
};

static const EnumPropertyItem rna_Region_alignment_items[10] = {
	{0, "NONE", 0, "None", "Don\'t use any fixed alignment, fill available space"},
	{1, "TOP", 0, "Top", ""},
	{2, "BOTTOM", 0, "Bottom", ""},
	{3, "LEFT", 0, "Left", ""},
	{4, "RIGHT", 0, "Right", ""},
	{5, "HORIZONTAL_SPLIT", 0, "Horizontal Split", ""},
	{6, "VERTICAL_SPLIT", 0, "Vertical Split", ""},
	{7, "FLOAT", 0, "Float", "Region floats on screen, doesn\'t use any fixed alignment"},
	{8, "QUAD_SPLIT", 0, "Quad Split", "Region is split horizontally and vertically"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Region_alignment = {
	{(PropertyRNA *)&rna_Region_data, (PropertyRNA *)&rna_Region_view2d,
	-1, "alignment", 2, 0, 0, 0, 0, "Alignment",
	"Alignment of the region within the area",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Region_alignment_get, NULL, NULL, NULL, NULL, rna_Region_alignment_items, 9, 0
};

PointerPropertyRNA rna_Region_data = {
	{NULL, (PropertyRNA *)&rna_Region_alignment,
	-1, "data", 8388608, 0, 0, 0, 0, "Region Data",
	"Region specific data (the type depends on the region type)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Region_data_get, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_Region_tag_redraw_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"tag_redraw", 0, "tag_redraw",
	Region_tag_redraw_call,
	NULL
};

StructRNA RNA_Region = {
	{(ContainerRNA *)&RNA_View2D, (ContainerRNA *)&RNA_AreaSpaces,
	NULL,
	{(PropertyRNA *)&rna_Region_rna_properties, (PropertyRNA *)&rna_Region_data}},
	"Region", NULL, NULL, 516, NULL, "Region",
	"Region in a subdivided screen area",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Region_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Region_tag_redraw_func, (FunctionRNA *)&rna_Region_tag_redraw_func}
};

/* View2D */
CollectionPropertyRNA rna_View2D_rna_properties = {
	{(PropertyRNA *)&rna_View2D_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	View2D_rna_properties_begin, View2D_rna_properties_next, View2D_rna_properties_end, View2D_rna_properties_get, NULL, NULL, View2D_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_View2D_rna_type = {
	{NULL, (PropertyRNA *)&rna_View2D_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	View2D_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_View2D_region_to_view_x = {
	{(PropertyRNA *)&rna_View2D_region_to_view_y, NULL,
	-1, "x", 3, 0, 1, 0, 0, "x",
	"Region x coordinate",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_View2D_region_to_view_y = {
	{(PropertyRNA *)&rna_View2D_region_to_view_result, (PropertyRNA *)&rna_View2D_region_to_view_x,
	-1, "y", 3, 0, 1, 0, 0, "y",
	"Region y coordinate",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static float rna_View2D_region_to_view_result_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_View2D_region_to_view_result = {
	{NULL, (PropertyRNA *)&rna_View2D_region_to_view_y,
	-1, "result", 8388611, 0, 2, 0, 0, "Result",
	"View coordinates",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_View2D_region_to_view_result_default
};

FunctionRNA rna_View2D_region_to_view_func = {
	{(FunctionRNA *)&rna_View2D_view_to_region_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_View2D_region_to_view_x, (PropertyRNA *)&rna_View2D_region_to_view_result}},
	"region_to_view", 0, "Transform region coordinates to 2D view",
	View2D_region_to_view_call,
	NULL
};

FloatPropertyRNA rna_View2D_view_to_region_x = {
	{(PropertyRNA *)&rna_View2D_view_to_region_y, NULL,
	-1, "x", 3, 0, 1, 0, 0, "x",
	"2D View x coordinate",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_View2D_view_to_region_y = {
	{(PropertyRNA *)&rna_View2D_view_to_region_clip, (PropertyRNA *)&rna_View2D_view_to_region_x,
	-1, "y", 3, 0, 1, 0, 0, "y",
	"2D View y coordinate",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_View2D_view_to_region_clip = {
	{(PropertyRNA *)&rna_View2D_view_to_region_result, (PropertyRNA *)&rna_View2D_view_to_region_y,
	-1, "clip", 3, 0, 0, 0, 0, "Clip",
	"Clip coordinates to the visible region",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static int rna_View2D_view_to_region_result_default[2] = {
	0,
	0
};

IntPropertyRNA rna_View2D_view_to_region_result = {
	{NULL, (PropertyRNA *)&rna_View2D_view_to_region_clip,
	-1, "result", 8388611, 0, 2, 0, 0, "Result",
	"Region coordinates",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_View2D_view_to_region_result_default
};

FunctionRNA rna_View2D_view_to_region_func = {
	{NULL, (FunctionRNA *)&rna_View2D_region_to_view_func,
	NULL,
	{(PropertyRNA *)&rna_View2D_view_to_region_x, (PropertyRNA *)&rna_View2D_view_to_region_result}},
	"view_to_region", 0, "Transform 2D view coordinates to region",
	View2D_view_to_region_call,
	NULL
};

StructRNA RNA_View2D = {
	{(ContainerRNA *)&RNA_PaintCurve, (ContainerRNA *)&RNA_Region,
	NULL,
	{(PropertyRNA *)&rna_View2D_rna_properties, (PropertyRNA *)&rna_View2D_rna_type}},
	"View2D", NULL, NULL, 516, NULL, "View2D",
	"Scroll and zoom for a 2D region",
	"*", 17,
	NULL, (PropertyRNA *)&rna_View2D_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_View2D_region_to_view_func, (FunctionRNA *)&rna_View2D_view_to_region_func}
};

