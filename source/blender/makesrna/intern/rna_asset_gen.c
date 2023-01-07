
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

#include "rna_asset.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_AssetTag_rna_properties;
PointerPropertyRNA rna_AssetTag_rna_type;
StringPropertyRNA rna_AssetTag_name;


CollectionPropertyRNA rna_AssetMetaData_rna_properties;
PointerPropertyRNA rna_AssetMetaData_rna_type;
StringPropertyRNA rna_AssetMetaData_author;
StringPropertyRNA rna_AssetMetaData_description;
CollectionPropertyRNA rna_AssetMetaData_tags;
IntPropertyRNA rna_AssetMetaData_active_tag;
StringPropertyRNA rna_AssetMetaData_catalog_id;
StringPropertyRNA rna_AssetMetaData_catalog_simple_name;


CollectionPropertyRNA rna_AssetTags_rna_properties;
PointerPropertyRNA rna_AssetTags_rna_type;

extern FunctionRNA rna_AssetTags_new_func;
extern StringPropertyRNA rna_AssetTags_new_name;
extern BoolPropertyRNA rna_AssetTags_new_skip_if_exists;
extern PointerPropertyRNA rna_AssetTags_new_tag;

extern FunctionRNA rna_AssetTags_remove_func;
extern PointerPropertyRNA rna_AssetTags_remove_tag;



CollectionPropertyRNA rna_AssetLibraryReference_rna_properties;
PointerPropertyRNA rna_AssetLibraryReference_rna_type;


extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;
extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;

PointerPropertyRNA rna_AssetHandle_file_data;
PointerPropertyRNA rna_AssetHandle_local_id;

extern FunctionRNA rna_AssetHandle_get_full_library_path_func;
extern PointerPropertyRNA rna_AssetHandle_get_full_library_path_asset_file_handle;
extern PointerPropertyRNA rna_AssetHandle_get_full_library_path_asset_library_ref;
extern StringPropertyRNA rna_AssetHandle_get_full_library_path_result;


static PointerRNA AssetTag_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AssetTag_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetTag_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetTag_rna_properties_get(iter);
    }
}

void AssetTag_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetTag_rna_properties_get(iter);
    }
}

void AssetTag_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AssetTag_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AssetTag_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void AssetTag_name_get(PointerRNA *ptr, char *value)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int AssetTag_name_length(PointerRNA *ptr)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    return strlen(data->name);
}

void AssetTag_name_set(PointerRNA *ptr, const char *value)
{
    AssetTag *data = (AssetTag *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

static PointerRNA AssetMetaData_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AssetMetaData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetMetaData_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetMetaData_rna_properties_get(iter);
    }
}

void AssetMetaData_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetMetaData_rna_properties_get(iter);
    }
}

void AssetMetaData_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AssetMetaData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AssetMetaData_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void AssetMetaData_author_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_author_get(ptr, value);
}

int AssetMetaData_author_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_author_length(ptr);
}

void AssetMetaData_author_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_author_set(ptr, value);
}

void AssetMetaData_description_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_description_get(ptr, value);
}

int AssetMetaData_description_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_description_length(ptr);
}

void AssetMetaData_description_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_description_set(ptr, value);
}

static PointerRNA AssetMetaData_tags_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_AssetTag, rna_iterator_listbase_get(iter));
}

void AssetMetaData_tags_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetMetaData_tags;

    rna_iterator_listbase_begin(iter, &data->tags, NULL);

    if (iter->valid) {
        iter->ptr = AssetMetaData_tags_get(iter);
    }
}

void AssetMetaData_tags_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = AssetMetaData_tags_get(iter);
    }
}

void AssetMetaData_tags_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AssetMetaData_tags_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    AssetMetaData_tags_begin(&iter, ptr);

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
        if (found) { *r_ptr = AssetMetaData_tags_get(&iter); }
    }

    AssetMetaData_tags_end(&iter);

    return found;
}

int AssetMetaData_tags_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int AssetTag_name_length(PointerRNA *);
    extern void AssetTag_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    AssetMetaData_tags_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = AssetTag_name_length(&iter.ptr);
            if (namelen < 1024) {
                AssetTag_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                AssetTag_name_get(&iter.ptr, name);
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
        AssetMetaData_tags_next(&iter);
    }
    AssetMetaData_tags_end(&iter);

    return found;
}

int AssetMetaData_active_tag_get(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return (int)(data->active_tag);
}

void AssetMetaData_active_tag_set(PointerRNA *ptr, int value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    int prop_clamp_min = INT_MIN, prop_clamp_max = INT_MAX, prop_soft_min, prop_soft_max;
    rna_AssetMetaData_active_tag_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->active_tag = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

void AssetMetaData_catalog_id_get(PointerRNA *ptr, char *value)
{
    rna_AssetMetaData_catalog_id_get(ptr, value);
}

int AssetMetaData_catalog_id_length(PointerRNA *ptr)
{
    return rna_AssetMetaData_catalog_id_length(ptr);
}

void AssetMetaData_catalog_id_set(PointerRNA *ptr, const char *value)
{
    rna_AssetMetaData_catalog_id_set(ptr, value);
}

void AssetMetaData_catalog_simple_name_get(PointerRNA *ptr, char *value)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    BLI_strncpy_utf8(value, data->catalog_simple_name, 64);
}

int AssetMetaData_catalog_simple_name_length(PointerRNA *ptr)
{
    AssetMetaData *data = (AssetMetaData *)(ptr->data);
    return strlen(data->catalog_simple_name);
}

static PointerRNA AssetTags_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AssetTags_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetTags_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetTags_rna_properties_get(iter);
    }
}

void AssetTags_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetTags_rna_properties_get(iter);
    }
}

void AssetTags_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AssetTags_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AssetTags_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA AssetLibraryReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AssetLibraryReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AssetLibraryReference_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AssetLibraryReference_rna_properties_get(iter);
    }
}

void AssetLibraryReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AssetLibraryReference_rna_properties_get(iter);
    }
}

void AssetLibraryReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AssetLibraryReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AssetLibraryReference_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA AssetHandle_file_data_get(PointerRNA *ptr)
{
    return rna_AssetHandle_file_data_get(ptr);
}

void AssetHandle_file_data_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AssetHandle_file_data_set(ptr, value, reports);
}

PointerRNA AssetHandle_local_id_get(PointerRNA *ptr)
{
    return rna_AssetHandle_local_id_get(ptr);
}



struct AssetTag *AssetTags_new_func(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, const char * name, bool skip_if_exists)
{
	return rna_AssetMetaData_tag_new(_selfid, _self, reports, name, skip_if_exists);
}

void AssetTags_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AssetMetaData *_self;
	const char * name;
	bool skip_if_exists;
	struct AssetTag *tag;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AssetMetaData *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	skip_if_exists = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	tag = rna_AssetMetaData_tag_new(_selfid, _self, reports, name, skip_if_exists);
	*((struct AssetTag **)_retdata) = tag;
}

void AssetTags_remove_func(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, struct PointerRNA *tag)
{
	rna_AssetMetaData_tag_remove(_selfid, _self, reports, tag);
}

void AssetTags_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct AssetMetaData *_self;
	struct PointerRNA *tag;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct AssetMetaData *)_ptr->data;
	_data = (char *)_parms->data;
	tag = *((struct PointerRNA **)_data);
	
	rna_AssetMetaData_tag_remove(_selfid, _self, reports, tag);
}

/* Repeated prototypes to detect errors */

struct AssetTag *rna_AssetMetaData_tag_new(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, const char * name, bool skip_if_exists);
void rna_AssetMetaData_tag_remove(struct ID *_selfid, struct AssetMetaData *_self, ReportList *reports, struct PointerRNA *tag);


void AssetHandle_get_full_library_path_func(bContext *C, struct FileDirEntry *asset_file_handle, struct AssetLibraryReference *asset_library_ref, char * result)
{
	rna_AssetHandle_get_full_library_path(C, asset_file_handle, asset_library_ref, result);
}

void AssetHandle_get_full_library_path_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FileDirEntry *asset_file_handle;
	struct AssetLibraryReference *asset_library_ref;
	char * result;
	char *_data;
	
	_data = (char *)_parms->data;
	asset_file_handle = *((struct FileDirEntry **)_data);
	_data += 8;
	asset_library_ref = *((struct AssetLibraryReference **)_data);
	_data += 8;
	result = ((char * )_data);
	
	rna_AssetHandle_get_full_library_path(C, asset_file_handle, asset_library_ref, result);
}

/* Repeated prototypes to detect errors */

void rna_AssetHandle_get_full_library_path(bContext *C, struct FileDirEntry *asset_file_handle, struct AssetLibraryReference *asset_library_ref, char * result);

/* Asset Tag */
CollectionPropertyRNA rna_AssetTag_rna_properties = {
	{(PropertyRNA *)&rna_AssetTag_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetTag_rna_properties_begin, AssetTag_rna_properties_next, AssetTag_rna_properties_end, AssetTag_rna_properties_get, NULL, NULL, AssetTag_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AssetTag_rna_type = {
	{(PropertyRNA *)&rna_AssetTag_name, (PropertyRNA *)&rna_AssetTag_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetTag_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_AssetTag_name = {
	{NULL, (PropertyRNA *)&rna_AssetTag_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"The identifier that makes up this tag",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, rna_AssetTag_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetTag_name_get, AssetTag_name_length, AssetTag_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StructRNA RNA_AssetTag = {
	{(ContainerRNA *)&RNA_AssetMetaData, (ContainerRNA *)&RNA_AttributeGroup,
	NULL,
	{(PropertyRNA *)&rna_AssetTag_rna_properties, (PropertyRNA *)&rna_AssetTag_name}},
	"AssetTag", NULL, NULL, 516, NULL, "Asset Tag",
	"User defined tag (name token)",
	"*", 17,
	(PropertyRNA *)&rna_AssetTag_name, (PropertyRNA *)&rna_AssetTag_rna_properties,
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

/* Asset Data */
CollectionPropertyRNA rna_AssetMetaData_rna_properties = {
	{(PropertyRNA *)&rna_AssetMetaData_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetMetaData_rna_properties_begin, AssetMetaData_rna_properties_next, AssetMetaData_rna_properties_end, AssetMetaData_rna_properties_get, NULL, NULL, AssetMetaData_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AssetMetaData_rna_type = {
	{(PropertyRNA *)&rna_AssetMetaData_author, (PropertyRNA *)&rna_AssetMetaData_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetMetaData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_AssetMetaData_author = {
	{(PropertyRNA *)&rna_AssetMetaData_description, (PropertyRNA *)&rna_AssetMetaData_rna_type,
	-1, "author", 262145, 0, 0, 0, 0, "Author",
	"Name of the creator of the asset",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_AssetMetaData_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetMetaData_author_get, AssetMetaData_author_length, AssetMetaData_author_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_AssetMetaData_description = {
	{(PropertyRNA *)&rna_AssetMetaData_tags, (PropertyRNA *)&rna_AssetMetaData_author,
	-1, "description", 262145, 0, 0, 0, 0, "Description",
	"A description of the asset to be displayed for the user",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_AssetMetaData_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetMetaData_description_get, AssetMetaData_description_length, AssetMetaData_description_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

CollectionPropertyRNA rna_AssetMetaData_tags = {
	{(PropertyRNA *)&rna_AssetMetaData_active_tag, (PropertyRNA *)&rna_AssetMetaData_description,
	-1, "tags", 0, 0, 0, 0, 0, "Tags",
	"Custom tags (name tokens) for the asset, used for filtering and general asset management",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_AssetMetaData_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AssetTags},
	AssetMetaData_tags_begin, AssetMetaData_tags_next, AssetMetaData_tags_end, AssetMetaData_tags_get, NULL, AssetMetaData_tags_lookup_int, AssetMetaData_tags_lookup_string, NULL, &RNA_AssetTag
};

IntPropertyRNA rna_AssetMetaData_active_tag = {
	{(PropertyRNA *)&rna_AssetMetaData_catalog_id, (PropertyRNA *)&rna_AssetMetaData_tags,
	-1, "active_tag", 1, 0, 0, 4, 0, "Active Tag",
	"Index of the tag set for editing",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(AssetMetaData, active_tag), 1, NULL},
	AssetMetaData_active_tag_get, AssetMetaData_active_tag_set, NULL, NULL, rna_AssetMetaData_active_tag_range, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

StringPropertyRNA rna_AssetMetaData_catalog_id = {
	{(PropertyRNA *)&rna_AssetMetaData_catalog_simple_name, (PropertyRNA *)&rna_AssetMetaData_active_tag,
	-1, "catalog_id", 4456449, 0, 0, 0, 0, "Catalog UUID",
	"Identifier for the asset\'s catalog, used by Blender to look up the asset\'s catalog path. Must be a UUID according to RFC4122",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_AssetMetaData_catalog_id_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetMetaData_catalog_id_get, AssetMetaData_catalog_id_length, AssetMetaData_catalog_id_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_AssetMetaData_catalog_simple_name = {
	{NULL, (PropertyRNA *)&rna_AssetMetaData_catalog_id,
	-1, "catalog_simple_name", 262144, 0, 0, 0, 0, "Catalog Simple Name",
	"Simple name of the asset\'s catalog, for debugging and data recovery purposes",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetMetaData_catalog_simple_name_get, AssetMetaData_catalog_simple_name_length, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

StructRNA RNA_AssetMetaData = {
	{(ContainerRNA *)&RNA_AssetTags, (ContainerRNA *)&RNA_AssetTag,
	NULL,
	{(PropertyRNA *)&rna_AssetMetaData_rna_properties, (PropertyRNA *)&rna_AssetMetaData_catalog_simple_name}},
	"AssetMetaData", NULL, NULL, 644, NULL, "Asset Data",
	"Additional data stored for an asset data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AssetMetaData_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_AssetMetaData_idprops,
	{NULL, NULL}
};

/* Asset Tags */
CollectionPropertyRNA rna_AssetTags_rna_properties = {
	{(PropertyRNA *)&rna_AssetTags_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetTags_rna_properties_begin, AssetTags_rna_properties_next, AssetTags_rna_properties_end, AssetTags_rna_properties_get, NULL, NULL, AssetTags_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AssetTags_rna_type = {
	{NULL, (PropertyRNA *)&rna_AssetTags_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetTags_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_AssetTags_new_name = {
	{(PropertyRNA *)&rna_AssetTags_new_skip_if_exists, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_AssetTags_new_skip_if_exists = {
	{(PropertyRNA *)&rna_AssetTags_new_tag, (PropertyRNA *)&rna_AssetTags_new_name,
	-1, "skip_if_exists", 1, 0, 0, 0, 0, "Skip if Exists",
	"Do not add a new tag if one of the same type already exists",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_AssetTags_new_tag = {
	{NULL, (PropertyRNA *)&rna_AssetTags_new_skip_if_exists,
	-1, "tag", 8388608, 0, 2, 0, 0, "",
	"New tag",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AssetTag
};

FunctionRNA rna_AssetTags_new_func = {
	{(FunctionRNA *)&rna_AssetTags_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_AssetTags_new_name, (PropertyRNA *)&rna_AssetTags_new_tag}},
	"new", 2064, "Add a new tag to this asset",
	AssetTags_new_call,
	(PropertyRNA *)&rna_AssetTags_new_tag
};

PointerPropertyRNA rna_AssetTags_remove_tag = {
	{NULL, NULL,
	-1, "tag", 262144, 0, 5, 0, 0, "",
	"Removed tag",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AssetTag
};

FunctionRNA rna_AssetTags_remove_func = {
	{NULL, (FunctionRNA *)&rna_AssetTags_new_func,
	NULL,
	{(PropertyRNA *)&rna_AssetTags_remove_tag, (PropertyRNA *)&rna_AssetTags_remove_tag}},
	"remove", 2064, "Remove an existing tag from this asset",
	AssetTags_remove_call,
	NULL
};

StructRNA RNA_AssetTags = {
	{(ContainerRNA *)&RNA_AssetLibraryReference, (ContainerRNA *)&RNA_AssetMetaData,
	NULL,
	{(PropertyRNA *)&rna_AssetTags_rna_properties, (PropertyRNA *)&rna_AssetTags_rna_type}},
	"AssetTags", NULL, NULL, 516, NULL, "Asset Tags",
	"Collection of custom asset tags",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AssetTags_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_AssetTags_new_func, (FunctionRNA *)&rna_AssetTags_remove_func}
};

/* Asset Library Reference */
CollectionPropertyRNA rna_AssetLibraryReference_rna_properties = {
	{(PropertyRNA *)&rna_AssetLibraryReference_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetLibraryReference_rna_properties_begin, AssetLibraryReference_rna_properties_next, AssetLibraryReference_rna_properties_end, AssetLibraryReference_rna_properties_get, NULL, NULL, AssetLibraryReference_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AssetLibraryReference_rna_type = {
	{NULL, (PropertyRNA *)&rna_AssetLibraryReference_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetLibraryReference_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_AssetLibraryReference = {
	{(ContainerRNA *)&RNA_AssetHandle, (ContainerRNA *)&RNA_AssetTags,
	NULL,
	{(PropertyRNA *)&rna_AssetLibraryReference_rna_properties, (PropertyRNA *)&rna_AssetLibraryReference_rna_type}},
	"AssetLibraryReference", NULL, NULL, 516, NULL, "Asset Library Reference",
	"Identifier to refer to the asset library",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AssetLibraryReference_rna_properties,
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

/* Asset Handle */
PointerPropertyRNA rna_AssetHandle_file_data = {
	{(PropertyRNA *)&rna_AssetHandle_local_id, NULL,
	-1, "file_data", 8388609, 0, 0, 0, 0, "File Entry",
	"TEMPORARY, DO NOT USE - File data used to refer to the asset",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetHandle_file_data_get, AssetHandle_file_data_set, NULL, NULL,&RNA_FileSelectEntry
};

PointerPropertyRNA rna_AssetHandle_local_id = {
	{NULL, (PropertyRNA *)&rna_AssetHandle_file_data,
	-1, "local_id", 8913024, 0, 0, 0, 0, "",
	"The local data-block this asset represents; only valid if that is a data-block in this file",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AssetHandle_local_id_get, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_AssetHandle_get_full_library_path_asset_file_handle = {
	{(PropertyRNA *)&rna_AssetHandle_get_full_library_path_asset_library_ref, NULL,
	-1, "asset_file_handle", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FileSelectEntry
};

PointerPropertyRNA rna_AssetHandle_get_full_library_path_asset_library_ref = {
	{(PropertyRNA *)&rna_AssetHandle_get_full_library_path_result, (PropertyRNA *)&rna_AssetHandle_get_full_library_path_asset_file_handle,
	-1, "asset_library_ref", 8388608, 0, 1, 0, 0, "",
	"The asset library containing the given asset, only valid if the asset library is external (i.e. not the \"Current File\" one",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AssetLibraryReference
};

StringPropertyRNA rna_AssetHandle_get_full_library_path_result = {
	{NULL, (PropertyRNA *)&rna_AssetHandle_get_full_library_path_asset_library_ref,
	-1, "result", 8650753, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 1090, ""
};

FunctionRNA rna_AssetHandle_get_full_library_path_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_AssetHandle_get_full_library_path_asset_file_handle, (PropertyRNA *)&rna_AssetHandle_get_full_library_path_result}},
	"get_full_library_path", 9, "get_full_library_path",
	AssetHandle_get_full_library_path_call,
	NULL
};

StructRNA RNA_AssetHandle = {
	{(ContainerRNA *)&RNA_BoidRule, (ContainerRNA *)&RNA_AssetLibraryReference,
	NULL,
	{(PropertyRNA *)&rna_AssetHandle_file_data, (PropertyRNA *)&rna_AssetHandle_local_id}},
	"AssetHandle", NULL, NULL, 516, NULL, "Asset Handle",
	"Reference to some asset",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{(FunctionRNA *)&rna_AssetHandle_get_full_library_path_func, (FunctionRNA *)&rna_AssetHandle_get_full_library_path_func}
};

