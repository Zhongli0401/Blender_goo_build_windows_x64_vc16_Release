
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

#include "rna_movieclip.c"

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

StringPropertyRNA rna_MovieClip_filepath;
PointerPropertyRNA rna_MovieClip_tracking;
PointerPropertyRNA rna_MovieClip_proxy;
BoolPropertyRNA rna_MovieClip_use_proxy;
IntPropertyRNA rna_MovieClip_size;
FloatPropertyRNA rna_MovieClip_display_aspect;
EnumPropertyRNA rna_MovieClip_source;
BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory;
PointerPropertyRNA rna_MovieClip_grease_pencil;
IntPropertyRNA rna_MovieClip_frame_start;
IntPropertyRNA rna_MovieClip_frame_offset;
IntPropertyRNA rna_MovieClip_frame_duration;
FloatPropertyRNA rna_MovieClip_fps;
PointerPropertyRNA rna_MovieClip_colorspace_settings;
PointerPropertyRNA rna_MovieClip_animation_data;

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


extern FunctionRNA rna_MovieClip_metadata_func;
extern PointerPropertyRNA rna_MovieClip_metadata_metadata;



CollectionPropertyRNA rna_MovieClipProxy_rna_properties;
PointerPropertyRNA rna_MovieClipProxy_rna_type;
BoolPropertyRNA rna_MovieClipProxy_build_25;
BoolPropertyRNA rna_MovieClipProxy_build_50;
BoolPropertyRNA rna_MovieClipProxy_build_75;
BoolPropertyRNA rna_MovieClipProxy_build_100;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75;
BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100;
BoolPropertyRNA rna_MovieClipProxy_build_record_run;
BoolPropertyRNA rna_MovieClipProxy_build_free_run;
BoolPropertyRNA rna_MovieClipProxy_build_free_run_rec_date;
IntPropertyRNA rna_MovieClipProxy_quality;
EnumPropertyRNA rna_MovieClipProxy_timecode;
StringPropertyRNA rna_MovieClipProxy_directory;


CollectionPropertyRNA rna_MovieClipUser_rna_properties;
PointerPropertyRNA rna_MovieClipUser_rna_type;
IntPropertyRNA rna_MovieClipUser_frame_current;
EnumPropertyRNA rna_MovieClipUser_proxy_render_size;
BoolPropertyRNA rna_MovieClipUser_use_render_undistorted;


CollectionPropertyRNA rna_MovieClipScopes_rna_properties;
PointerPropertyRNA rna_MovieClipScopes_rna_type;

void MovieClip_filepath_get(PointerRNA *ptr, char *value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    BLI_strncpy(value, data->filepath, 1024);
}

int MovieClip_filepath_length(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return strlen(data->filepath);
}

void MovieClip_filepath_set(PointerRNA *ptr, const char *value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    BLI_strncpy(data->filepath, value, 1024);
}

PointerRNA MovieClip_tracking_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieTracking, &data->tracking);
}

PointerRNA MovieClip_proxy_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MovieClipProxy, &data->proxy);
}

bool MovieClip_use_proxy_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MovieClip_use_proxy_set(PointerRNA *ptr, bool value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

void MovieClip_size_get(PointerRNA *ptr, int values[2])
{
    rna_MovieClip_size_get(ptr, values);
}

void MovieClip_display_aspect_get(PointerRNA *ptr, float values[2])
{
    MovieClip *data = (MovieClip *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->aspx)[i]);
    }
}

void MovieClip_display_aspect_set(PointerRNA *ptr, const float values[2])
{
    MovieClip *data = (MovieClip *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->aspx)[i] = CLAMPIS(values[i], 0.1000000015f, FLT_MAX);
    }
}

int MovieClip_source_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->source);
}

bool MovieClip_use_proxy_custom_directory_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MovieClip_use_proxy_custom_directory_set(PointerRNA *ptr, bool value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

PointerRNA MovieClip_grease_pencil_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void MovieClip_grease_pencil_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    MovieClip *data = (MovieClip *)(ptr->data);

    if (data->gpd) {
        id_us_min((ID *)data->gpd);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->gpd = value.data;
}

int MovieClip_frame_start_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->start_frame);
}

void MovieClip_frame_start_set(PointerRNA *ptr, int value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    data->start_frame = value;
}

int MovieClip_frame_offset_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->frame_offset);
}

void MovieClip_frame_offset_set(PointerRNA *ptr, int value)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    data->frame_offset = value;
}

int MovieClip_frame_duration_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return (int)(data->len);
}

float MovieClip_fps_get(PointerRNA *ptr)
{
    return rna_MovieClip_fps_get(ptr);
}

PointerRNA MovieClip_colorspace_settings_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ColorManagedInputColorspaceSettings, &data->colorspace_settings);
}

PointerRNA MovieClip_animation_data_get(PointerRNA *ptr)
{
    MovieClip *data = (MovieClip *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MovieClipProxy_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MovieClipProxy_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieClipProxy_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipProxy_rna_properties_get(iter);
    }
}

void MovieClipProxy_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieClipProxy_rna_properties_get(iter);
    }
}

void MovieClipProxy_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MovieClipProxy_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieClipProxy_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool MovieClipProxy_build_25_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 1) != 0);
}

void MovieClipProxy_build_25_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 1; }
    else { data->build_size_flag &= ~1; }
}

bool MovieClipProxy_build_50_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 2) != 0);
}

void MovieClipProxy_build_50_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 2; }
    else { data->build_size_flag &= ~2; }
}

bool MovieClipProxy_build_75_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 4) != 0);
}

void MovieClipProxy_build_75_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 4; }
    else { data->build_size_flag &= ~4; }
}

bool MovieClipProxy_build_100_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 8) != 0);
}

void MovieClipProxy_build_100_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 8; }
    else { data->build_size_flag &= ~8; }
}

bool MovieClipProxy_build_undistorted_25_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 16) != 0);
}

void MovieClipProxy_build_undistorted_25_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 16; }
    else { data->build_size_flag &= ~16; }
}

bool MovieClipProxy_build_undistorted_50_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 32) != 0);
}

void MovieClipProxy_build_undistorted_50_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 32; }
    else { data->build_size_flag &= ~32; }
}

bool MovieClipProxy_build_undistorted_75_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 64) != 0);
}

void MovieClipProxy_build_undistorted_75_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 64; }
    else { data->build_size_flag &= ~64; }
}

bool MovieClipProxy_build_undistorted_100_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_size_flag) & 128) != 0);
}

void MovieClipProxy_build_undistorted_100_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_size_flag |= 128; }
    else { data->build_size_flag &= ~128; }
}

bool MovieClipProxy_build_record_run_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_tc_flag) & 1) != 0);
}

void MovieClipProxy_build_record_run_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_tc_flag |= 1; }
    else { data->build_tc_flag &= ~1; }
}

bool MovieClipProxy_build_free_run_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_tc_flag) & 2) != 0);
}

void MovieClipProxy_build_free_run_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_tc_flag |= 2; }
    else { data->build_tc_flag &= ~2; }
}

bool MovieClipProxy_build_free_run_rec_date_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (((data->build_tc_flag) & 4) != 0);
}

void MovieClipProxy_build_free_run_rec_date_set(PointerRNA *ptr, bool value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    if (value) { data->build_tc_flag |= 4; }
    else { data->build_tc_flag &= ~4; }
}

int MovieClipProxy_quality_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (int)(data->quality);
}

void MovieClipProxy_quality_set(PointerRNA *ptr, int value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    data->quality = CLAMPIS(value, 0, 32767);
}

int MovieClipProxy_timecode_get(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return (int)(data->tc);
}

void MovieClipProxy_timecode_set(PointerRNA *ptr, int value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    data->tc = value;
}

void MovieClipProxy_directory_get(PointerRNA *ptr, char *value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    BLI_strncpy(value, data->dir, 768);
}

int MovieClipProxy_directory_length(PointerRNA *ptr)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    return strlen(data->dir);
}

void MovieClipProxy_directory_set(PointerRNA *ptr, const char *value)
{
    MovieClipProxy *data = (MovieClipProxy *)(ptr->data);
    BLI_strncpy(data->dir, value, 768);
}

static PointerRNA MovieClipUser_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MovieClipUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieClipUser_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipUser_rna_properties_get(iter);
    }
}

void MovieClipUser_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieClipUser_rna_properties_get(iter);
    }
}

void MovieClipUser_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MovieClipUser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieClipUser_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MovieClipUser_frame_current_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (int)(data->framenr);
}

void MovieClipUser_frame_current_set(PointerRNA *ptr, int value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    data->framenr = CLAMPIS(value, -1048574, 1048574);
}

int MovieClipUser_proxy_render_size_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (int)(data->render_size);
}

void MovieClipUser_proxy_render_size_set(PointerRNA *ptr, int value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    data->render_size = value;
}

bool MovieClipUser_use_render_undistorted_get(PointerRNA *ptr)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    return (((data->render_flag) & 1) != 0);
}

void MovieClipUser_use_render_undistorted_set(PointerRNA *ptr, bool value)
{
    MovieClipUser *data = (MovieClipUser *)(ptr->data);
    if (value) { data->render_flag |= 1; }
    else { data->render_flag &= ~1; }
}

static PointerRNA MovieClipScopes_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MovieClipScopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MovieClipScopes_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MovieClipScopes_rna_properties_get(iter);
    }
}

void MovieClipScopes_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MovieClipScopes_rna_properties_get(iter);
    }
}

void MovieClipScopes_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MovieClipScopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MovieClipScopes_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

struct PointerRNA MovieClip_metadata_func(struct MovieClip *_self)
{
	return rna_MovieClip_metadata_get(_self);
}

void MovieClip_metadata_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MovieClip *_self;
	struct PointerRNA metadata;
	char *_data, *_retdata;
	
	_self = (struct MovieClip *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	metadata = rna_MovieClip_metadata_get(_self);
	*((struct PointerRNA *)_retdata) = metadata;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_MovieClip_metadata_get(struct MovieClip *_self);




/* MovieClip */
StringPropertyRNA rna_MovieClip_filepath = {
	{(PropertyRNA *)&rna_MovieClip_tracking, NULL,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Filename of the movie or sequence file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_filepath_get, MovieClip_filepath_length, MovieClip_filepath_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

PointerPropertyRNA rna_MovieClip_tracking = {
	{(PropertyRNA *)&rna_MovieClip_proxy, (PropertyRNA *)&rna_MovieClip_filepath,
	-1, "tracking", 8388608, 0, 0, 0, 0, "tracking",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_tracking_get, NULL, NULL, NULL,&RNA_MovieTracking
};

PointerPropertyRNA rna_MovieClip_proxy = {
	{(PropertyRNA *)&rna_MovieClip_use_proxy, (PropertyRNA *)&rna_MovieClip_tracking,
	-1, "proxy", 8388608, 0, 0, 0, 0, "proxy",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_proxy_get, NULL, NULL, NULL,&RNA_MovieClipProxy
};

BoolPropertyRNA rna_MovieClip_use_proxy = {
	{(PropertyRNA *)&rna_MovieClip_size, (PropertyRNA *)&rna_MovieClip_proxy,
	-1, "use_proxy", 1, 0, 0, 0, 0, "Use Proxy / Timecode",
	"Use a preview proxy and/or timecode index for this clip",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClip_use_proxy_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_use_proxy_get, MovieClip_use_proxy_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_MovieClip_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MovieClip_size = {
	{(PropertyRNA *)&rna_MovieClip_display_aspect, (PropertyRNA *)&rna_MovieClip_use_proxy,
	-1, "size", 2, 0, 0, 0, 0, "Size",
	"Width and height in pixels, zero when image data can\'t be loaded",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MovieClip_size_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_MovieClip_size_default
};

static float rna_MovieClip_display_aspect_default[2] = {
	1.0f,
	1.0f
};

FloatPropertyRNA rna_MovieClip_display_aspect = {
	{(PropertyRNA *)&rna_MovieClip_source, (PropertyRNA *)&rna_MovieClip_size,
	-1, "display_aspect", 3, 0, 0, 4, 0, "Display Aspect",
	"Display Aspect for this clip, does not affect rendering",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, aspx), 5, NULL},
	NULL, NULL, MovieClip_display_aspect_get, MovieClip_display_aspect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.1000000015f, 5000.0f, 0.1000000015f, FLT_MAX, 1.0f, 2, 1.0f, rna_MovieClip_display_aspect_default
};

static const EnumPropertyItem rna_MovieClip_source_items[3] = {
	{1, "SEQUENCE", 0, "Image Sequence", "Multiple image files, as a sequence"},
	{2, "MOVIE", 0, "Movie File", "Movie file"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClip_source = {
	{(PropertyRNA *)&rna_MovieClip_use_proxy_custom_directory, (PropertyRNA *)&rna_MovieClip_display_aspect,
	-1, "source", 2, 0, 0, 4, 0, "Source",
	"Where the clip comes from",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, source), 0, NULL},
	MovieClip_source_get, NULL, NULL, NULL, NULL, rna_MovieClip_source_items, 2, 1
};

BoolPropertyRNA rna_MovieClip_use_proxy_custom_directory = {
	{(PropertyRNA *)&rna_MovieClip_grease_pencil, (PropertyRNA *)&rna_MovieClip_source,
	-1, "use_proxy_custom_directory", 1, 0, 0, 0, 0, "Proxy Custom Directory",
	"Create proxy images in a custom directory (default is movie location)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_use_proxy_custom_directory_get, MovieClip_use_proxy_custom_directory_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MovieClip_grease_pencil = {
	{(PropertyRNA *)&rna_MovieClip_frame_start, (PropertyRNA *)&rna_MovieClip_use_proxy_custom_directory,
	-1, "grease_pencil", 8388801, 0, 0, 0, 0, "Grease Pencil",
	"Grease pencil data for this movie clip",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_grease_pencil_get, MovieClip_grease_pencil_set, NULL, rna_GPencil_datablocks_annotations_poll,&RNA_GreasePencil
};

IntPropertyRNA rna_MovieClip_frame_start = {
	{(PropertyRNA *)&rna_MovieClip_frame_offset, (PropertyRNA *)&rna_MovieClip_grease_pencil,
	-1, "frame_start", 3, 0, 0, 4, 0, "Start Frame",
	"Global scene frame number at which this movie starts playing (affects all data associated with a clip)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, start_frame), 0, NULL},
	MovieClip_frame_start_get, MovieClip_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 1, NULL
};

IntPropertyRNA rna_MovieClip_frame_offset = {
	{(PropertyRNA *)&rna_MovieClip_frame_duration, (PropertyRNA *)&rna_MovieClip_frame_start,
	-1, "frame_offset", 3, 0, 0, 4, 0, "Frame Offset",
	"Offset of footage first frame relative to its file name (affects only how footage is loading, does not change data associated with a clip)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, frame_offset), 0, NULL},
	MovieClip_frame_offset_get, MovieClip_frame_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MovieClip_frame_duration = {
	{(PropertyRNA *)&rna_MovieClip_fps, (PropertyRNA *)&rna_MovieClip_frame_offset,
	-1, "frame_duration", 2, 0, 0, 4, 0, "Duration",
	"Detected duration of movie clip in frames",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClip, len), 0, NULL},
	MovieClip_frame_duration_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_MovieClip_fps = {
	{(PropertyRNA *)&rna_MovieClip_colorspace_settings, (PropertyRNA *)&rna_MovieClip_frame_duration,
	-1, "fps", 2, 0, 0, 0, 0, "Frame Rate",
	"Detected frame rate of the movie clip in frames per second",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_fps_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_MovieClip_colorspace_settings = {
	{(PropertyRNA *)&rna_MovieClip_animation_data, (PropertyRNA *)&rna_MovieClip_fps,
	-1, "colorspace_settings", 8388608, 0, 0, 0, 0, "Color Space Settings",
	"Input color space settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClip_colorspace_settings_get, NULL, NULL, NULL,&RNA_ColorManagedInputColorspaceSettings
};

PointerPropertyRNA rna_MovieClip_animation_data = {
	{NULL, (PropertyRNA *)&rna_MovieClip_colorspace_settings,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	MovieClip_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_MovieClip_metadata_metadata = {
	{NULL, NULL,
	-1, "metadata", 8388608, 0, 6, 0, 0, "",
	"Dict-like object containing the metadata",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_IDPropertyWrapPtr
};

FunctionRNA rna_MovieClip_metadata_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MovieClip_metadata_metadata, (PropertyRNA *)&rna_MovieClip_metadata_metadata}},
	"metadata", 0, "Retrieve metadata of the movie file",
	MovieClip_metadata_call,
	(PropertyRNA *)&rna_MovieClip_metadata_metadata
};

StructRNA RNA_MovieClip = {
	{(ContainerRNA *)&RNA_MovieClipProxy, (ContainerRNA *)&RNA_WorldMistSettings,
	NULL,
	{(PropertyRNA *)&rna_MovieClip_filepath, (PropertyRNA *)&rna_MovieClip_animation_data}},
	"MovieClip", NULL, NULL, 519, NULL, "MovieClip",
	"MovieClip data-block referencing an external movie file",
	"*", 111,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_MovieClip_metadata_func, (FunctionRNA *)&rna_MovieClip_metadata_func}
};

/* Movie Clip Proxy */
CollectionPropertyRNA rna_MovieClipProxy_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipProxy_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_rna_properties_begin, MovieClipProxy_rna_properties_next, MovieClipProxy_rna_properties_end, MovieClipProxy_rna_properties_get, NULL, NULL, MovieClipProxy_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieClipProxy_rna_type = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_25, (PropertyRNA *)&rna_MovieClipProxy_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_MovieClipProxy_build_25 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_50, (PropertyRNA *)&rna_MovieClipProxy_rna_type,
	-1, "build_25", 1, 0, 0, 0, 0, "25%",
	"Build proxy resolution 25% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_25_get, MovieClipProxy_build_25_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_50 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_75, (PropertyRNA *)&rna_MovieClipProxy_build_25,
	-1, "build_50", 1, 0, 0, 0, 0, "50%",
	"Build proxy resolution 50% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_50_get, MovieClipProxy_build_50_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_75 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_100, (PropertyRNA *)&rna_MovieClipProxy_build_50,
	-1, "build_75", 1, 0, 0, 0, 0, "75%",
	"Build proxy resolution 75% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_75_get, MovieClipProxy_build_75_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_100 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_25, (PropertyRNA *)&rna_MovieClipProxy_build_75,
	-1, "build_100", 1, 0, 0, 0, 0, "100%",
	"Build proxy resolution 100% of the original footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_100_get, MovieClipProxy_build_100_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_25 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_50, (PropertyRNA *)&rna_MovieClipProxy_build_100,
	-1, "build_undistorted_25", 1, 0, 0, 0, 0, "25%",
	"Build proxy resolution 25% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_25_get, MovieClipProxy_build_undistorted_25_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_50 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_75, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_25,
	-1, "build_undistorted_50", 1, 0, 0, 0, 0, "50%",
	"Build proxy resolution 50% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_50_get, MovieClipProxy_build_undistorted_50_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_75 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_undistorted_100, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_50,
	-1, "build_undistorted_75", 1, 0, 0, 0, 0, "75%",
	"Build proxy resolution 75% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_75_get, MovieClipProxy_build_undistorted_75_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_undistorted_100 = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_record_run, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_75,
	-1, "build_undistorted_100", 1, 0, 0, 0, 0, "100%",
	"Build proxy resolution 100% of the original undistorted footage dimension",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_undistorted_100_get, MovieClipProxy_build_undistorted_100_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_record_run = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_free_run, (PropertyRNA *)&rna_MovieClipProxy_build_undistorted_100,
	-1, "build_record_run", 1, 0, 0, 0, 0, "Rec Run",
	"Build record run time code index",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_record_run_get, MovieClipProxy_build_record_run_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_free_run = {
	{(PropertyRNA *)&rna_MovieClipProxy_build_free_run_rec_date, (PropertyRNA *)&rna_MovieClipProxy_build_record_run,
	-1, "build_free_run", 1, 0, 0, 0, 0, "Free Run",
	"Build free run time code index",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_free_run_get, MovieClipProxy_build_free_run_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MovieClipProxy_build_free_run_rec_date = {
	{(PropertyRNA *)&rna_MovieClipProxy_quality, (PropertyRNA *)&rna_MovieClipProxy_build_free_run,
	-1, "build_free_run_rec_date", 1, 0, 0, 0, 0, "Free Run (Rec Date)",
	"Build free run time code index using Record Date/Time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_build_free_run_rec_date_get, MovieClipProxy_build_free_run_rec_date_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MovieClipProxy_quality = {
	{(PropertyRNA *)&rna_MovieClipProxy_timecode, (PropertyRNA *)&rna_MovieClipProxy_build_free_run_rec_date,
	-1, "quality", 1, 0, 0, 4, 0, "Quality",
	"JPEG quality of proxy images",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipProxy, quality), 1, NULL},
	MovieClipProxy_quality_get, MovieClipProxy_quality_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 0, 32767, 1, 0, NULL
};

static const EnumPropertyItem rna_MovieClipProxy_timecode_items[6] = {
	{0, "NONE", 0, "None", ""},
	{1, "RECORD_RUN", 0, "Record Run", "Use images in the order they are recorded"},
	{2, "FREE_RUN", 0, "Free Run", "Use global timestamp written by recording device"},
	{4, "FREE_RUN_REC_DATE", 0, "Free Run (rec date)", "Interpolate a global timestamp using the record date and time written by recording device"},
	{8, "FREE_RUN_NO_GAPS", 0, "Free Run No Gaps", "Record run, but ignore timecode, changes in framerate or dropouts"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClipProxy_timecode = {
	{(PropertyRNA *)&rna_MovieClipProxy_directory, (PropertyRNA *)&rna_MovieClipProxy_quality,
	-1, "timecode", 1, 0, 0, 4, 0, "Timecode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipProxy, tc), 1, NULL},
	MovieClipProxy_timecode_get, MovieClipProxy_timecode_set, NULL, NULL, NULL, rna_MovieClipProxy_timecode_items, 5, 0
};

StringPropertyRNA rna_MovieClipProxy_directory = {
	{NULL, (PropertyRNA *)&rna_MovieClipProxy_timecode,
	-1, "directory", 262145, 0, 0, 0, 0, "Directory",
	"Location to store the proxy files",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	rna_MovieClip_reload_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipProxy_directory_get, MovieClipProxy_directory_length, MovieClipProxy_directory_set, NULL, NULL, NULL, NULL, 0, 768, ""
};

StructRNA RNA_MovieClipProxy = {
	{(ContainerRNA *)&RNA_MovieClipUser, (ContainerRNA *)&RNA_MovieClip,
	NULL,
	{(PropertyRNA *)&rna_MovieClipProxy_rna_properties, (PropertyRNA *)&rna_MovieClipProxy_directory}},
	"MovieClipProxy", NULL, NULL, 516, NULL, "Movie Clip Proxy",
	"Proxy parameters for a movie clip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieClipProxy_rna_properties,
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

/* Movie Clip User */
CollectionPropertyRNA rna_MovieClipUser_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipUser_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipUser_rna_properties_begin, MovieClipUser_rna_properties_next, MovieClipUser_rna_properties_end, MovieClipUser_rna_properties_get, NULL, NULL, MovieClipUser_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieClipUser_rna_type = {
	{(PropertyRNA *)&rna_MovieClipUser_frame_current, (PropertyRNA *)&rna_MovieClipUser_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipUser_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MovieClipUser_frame_current = {
	{(PropertyRNA *)&rna_MovieClipUser_proxy_render_size, (PropertyRNA *)&rna_MovieClipUser_rna_type,
	-1, "frame_current", 3, 1, 0, 4, 0, "Current Frame",
	"Current frame number in movie or image sequence",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipUser, framenr), 0, NULL},
	MovieClipUser_frame_current_get, MovieClipUser_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1048574, 1048574, -1048574, 1048574, 1, 1, NULL
};

static const EnumPropertyItem rna_MovieClipUser_proxy_render_size_items[6] = {
	{1, "PROXY_25", 0, "25%", ""},
	{2, "PROXY_50", 0, "50%", ""},
	{3, "PROXY_75", 0, "75%", ""},
	{4, "PROXY_100", 0, "100%", ""},
	{0, "FULL", 0, "None, full render", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MovieClipUser_proxy_render_size = {
	{(PropertyRNA *)&rna_MovieClipUser_use_render_undistorted, (PropertyRNA *)&rna_MovieClipUser_frame_current,
	-1, "proxy_render_size", 3, 1, 0, 4, 0, "Proxy Render Size",
	"Display preview using full resolution or different proxy resolutions",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClipUser_proxy_render_settings_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MovieClipUser, render_size), 1, NULL},
	MovieClipUser_proxy_render_size_get, MovieClipUser_proxy_render_size_set, NULL, NULL, NULL, rna_MovieClipUser_proxy_render_size_items, 5, 0
};

BoolPropertyRNA rna_MovieClipUser_use_render_undistorted = {
	{NULL, (PropertyRNA *)&rna_MovieClipUser_proxy_render_size,
	-1, "use_render_undistorted", 3, 1, 0, 0, 0, "Render Undistorted",
	"Render preview using undistorted proxy",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MovieClipUser_proxy_render_settings_update, 355663872, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipUser_use_render_undistorted_get, MovieClipUser_use_render_undistorted_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MovieClipUser = {
	{(ContainerRNA *)&RNA_MovieClipScopes, (ContainerRNA *)&RNA_MovieClipProxy,
	NULL,
	{(PropertyRNA *)&rna_MovieClipUser_rna_properties, (PropertyRNA *)&rna_MovieClipUser_use_render_undistorted}},
	"MovieClipUser", NULL, NULL, 516, NULL, "Movie Clip User",
	"Parameters defining how a MovieClip data-block is used by another data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieClipUser_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MovieClipUser_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MovieClipScopes */
CollectionPropertyRNA rna_MovieClipScopes_rna_properties = {
	{(PropertyRNA *)&rna_MovieClipScopes_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipScopes_rna_properties_begin, MovieClipScopes_rna_properties_next, MovieClipScopes_rna_properties_end, MovieClipScopes_rna_properties_get, NULL, NULL, MovieClipScopes_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MovieClipScopes_rna_type = {
	{NULL, (PropertyRNA *)&rna_MovieClipScopes_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MovieClipScopes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_MovieClipScopes = {
	{(ContainerRNA *)&RNA_MovieTrackingSettings, (ContainerRNA *)&RNA_MovieClipUser,
	NULL,
	{(PropertyRNA *)&rna_MovieClipScopes_rna_properties, (PropertyRNA *)&rna_MovieClipScopes_rna_type}},
	"MovieClipScopes", NULL, NULL, 516, NULL, "MovieClipScopes",
	"Scopes for statistical view of a movie clip",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MovieClipScopes_rna_properties,
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

