
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

#include "rna_ID.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_UnknownType_rna_properties;
PointerPropertyRNA rna_UnknownType_rna_type;


CollectionPropertyRNA rna_AnyType_rna_properties;
PointerPropertyRNA rna_AnyType_rna_type;


CollectionPropertyRNA rna_ID_rna_properties;
PointerPropertyRNA rna_ID_rna_type;
StringPropertyRNA rna_ID_name;
StringPropertyRNA rna_ID_name_full;
BoolPropertyRNA rna_ID_is_evaluated;
PointerPropertyRNA rna_ID_original;
IntPropertyRNA rna_ID_users;
BoolPropertyRNA rna_ID_use_fake_user;
BoolPropertyRNA rna_ID_use_extra_user;
BoolPropertyRNA rna_ID_is_embedded_data;
BoolPropertyRNA rna_ID_tag;
BoolPropertyRNA rna_ID_is_library_indirect;
PointerPropertyRNA rna_ID_library;
PointerPropertyRNA rna_ID_library_weak_reference;
PointerPropertyRNA rna_ID_asset_data;
PointerPropertyRNA rna_ID_override_library;
PointerPropertyRNA rna_ID_preview;

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



CollectionPropertyRNA rna_IDOverrideLibrary_rna_properties;
PointerPropertyRNA rna_IDOverrideLibrary_rna_type;
PointerPropertyRNA rna_IDOverrideLibrary_reference;
PointerPropertyRNA rna_IDOverrideLibrary_hierarchy_root;
BoolPropertyRNA rna_IDOverrideLibrary_is_in_hierarchy;
BoolPropertyRNA rna_IDOverrideLibrary_is_system_override;
CollectionPropertyRNA rna_IDOverrideLibrary_properties;

extern FunctionRNA rna_IDOverrideLibrary_operations_update_func;
extern FunctionRNA rna_IDOverrideLibrary_reset_func;
extern BoolPropertyRNA rna_IDOverrideLibrary_reset_do_hierarchy;
extern BoolPropertyRNA rna_IDOverrideLibrary_reset_set_system_override;

extern FunctionRNA rna_IDOverrideLibrary_destroy_func;
extern BoolPropertyRNA rna_IDOverrideLibrary_destroy_do_hierarchy;



CollectionPropertyRNA rna_IDOverrideLibraryProperties_rna_properties;
PointerPropertyRNA rna_IDOverrideLibraryProperties_rna_type;

extern FunctionRNA rna_IDOverrideLibraryProperties_add_func;
extern PointerPropertyRNA rna_IDOverrideLibraryProperties_add_property;
extern StringPropertyRNA rna_IDOverrideLibraryProperties_add_rna_path;

extern FunctionRNA rna_IDOverrideLibraryProperties_remove_func;
extern PointerPropertyRNA rna_IDOverrideLibraryProperties_remove_property;



CollectionPropertyRNA rna_IDOverrideLibraryProperty_rna_properties;
PointerPropertyRNA rna_IDOverrideLibraryProperty_rna_type;
StringPropertyRNA rna_IDOverrideLibraryProperty_rna_path;
CollectionPropertyRNA rna_IDOverrideLibraryProperty_operations;


CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_properties;
PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_type;

extern FunctionRNA rna_IDOverrideLibraryPropertyOperations_add_func;
extern EnumPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_operation;
extern StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name;
extern StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name;
extern IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index;
extern IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index;
extern PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_property;

extern FunctionRNA rna_IDOverrideLibraryPropertyOperations_remove_func;
extern PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_remove_operation;



CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_properties;
PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_type;
EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_operation;
EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_flag;
StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_name;
StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_name;
IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_index;
IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_index;


CollectionPropertyRNA rna_ImagePreview_rna_properties;
PointerPropertyRNA rna_ImagePreview_rna_type;
BoolPropertyRNA rna_ImagePreview_is_image_custom;
IntPropertyRNA rna_ImagePreview_image_size;
IntPropertyRNA rna_ImagePreview_image_pixels;
FloatPropertyRNA rna_ImagePreview_image_pixels_float;
BoolPropertyRNA rna_ImagePreview_is_icon_custom;
IntPropertyRNA rna_ImagePreview_icon_size;
IntPropertyRNA rna_ImagePreview_icon_pixels;
FloatPropertyRNA rna_ImagePreview_icon_pixels_float;
IntPropertyRNA rna_ImagePreview_icon_id;

extern FunctionRNA rna_ImagePreview_reload_func;


CollectionPropertyRNA rna_PropertyGroupItem_rna_properties;
PointerPropertyRNA rna_PropertyGroupItem_rna_type;
StringPropertyRNA rna_PropertyGroupItem_string;
IntPropertyRNA rna_PropertyGroupItem_int;
IntPropertyRNA rna_PropertyGroupItem_int_array;
FloatPropertyRNA rna_PropertyGroupItem_float;
FloatPropertyRNA rna_PropertyGroupItem_float_array;
FloatPropertyRNA rna_PropertyGroupItem_double;
FloatPropertyRNA rna_PropertyGroupItem_double_array;
PointerPropertyRNA rna_PropertyGroupItem_group;
CollectionPropertyRNA rna_PropertyGroupItem_collection;
CollectionPropertyRNA rna_PropertyGroupItem_idp_array;
PointerPropertyRNA rna_PropertyGroupItem_id;


CollectionPropertyRNA rna_PropertyGroup_rna_properties;
PointerPropertyRNA rna_PropertyGroup_rna_type;
StringPropertyRNA rna_PropertyGroup_name;


CollectionPropertyRNA rna_IDMaterials_rna_properties;
PointerPropertyRNA rna_IDMaterials_rna_type;

extern FunctionRNA rna_IDMaterials_append_func;
extern PointerPropertyRNA rna_IDMaterials_append_material;

extern FunctionRNA rna_IDMaterials_pop_func;
extern IntPropertyRNA rna_IDMaterials_pop_index;
extern PointerPropertyRNA rna_IDMaterials_pop_material;

extern FunctionRNA rna_IDMaterials_clear_func;


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

StringPropertyRNA rna_Library_filepath;
PointerPropertyRNA rna_Library_parent;
PointerPropertyRNA rna_Library_packed_file;
IntPropertyRNA rna_Library_version;

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


extern FunctionRNA rna_Library_reload_func;


CollectionPropertyRNA rna_LibraryWeakReference_rna_properties;
PointerPropertyRNA rna_LibraryWeakReference_rna_type;
StringPropertyRNA rna_LibraryWeakReference_filepath;
StringPropertyRNA rna_LibraryWeakReference_id_name;


CollectionPropertyRNA rna_IDPropertyWrapPtr_rna_properties;
PointerPropertyRNA rna_IDPropertyWrapPtr_rna_type;

static PointerRNA UnknownType_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void UnknownType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UnknownType_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UnknownType_rna_properties_get(iter);
    }
}

void UnknownType_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UnknownType_rna_properties_get(iter);
    }
}

void UnknownType_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int UnknownType_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UnknownType_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA AnyType_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AnyType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AnyType_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnyType_rna_properties_get(iter);
    }
}

void AnyType_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AnyType_rna_properties_get(iter);
    }
}

void AnyType_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AnyType_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AnyType_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA ID_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ID_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ID_rna_properties_get(iter);
    }
}

void ID_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ID_rna_properties_get(iter);
    }
}

void ID_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ID_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ID_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ID_name_get(PointerRNA *ptr, char *value)
{
    rna_ID_name_get(ptr, value);
}

int ID_name_length(PointerRNA *ptr)
{
    return rna_ID_name_length(ptr);
}

void ID_name_set(PointerRNA *ptr, const char *value)
{
    rna_ID_name_set(ptr, value);
}

void ID_name_full_get(PointerRNA *ptr, char *value)
{
    rna_ID_name_full_get(ptr, value);
}

int ID_name_full_length(PointerRNA *ptr)
{
    return rna_ID_name_full_length(ptr);
}

bool ID_is_evaluated_get(PointerRNA *ptr)
{
    return rna_ID_is_evaluated_get(ptr);
}

PointerRNA ID_original_get(PointerRNA *ptr)
{
    return rna_ID_original_get(ptr);
}

int ID_users_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (int)(data->us);
}

bool ID_use_fake_user_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void ID_use_fake_user_set(PointerRNA *ptr, bool value)
{
    rna_ID_fake_user_set(ptr, value);
}

bool ID_use_extra_user_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & 4) != 0);
}

void ID_use_extra_user_set(PointerRNA *ptr, bool value)
{
    rna_ID_extra_user_set(ptr, value);
}

bool ID_is_embedded_data_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

bool ID_tag_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & 1024) != 0);
}

void ID_tag_set(PointerRNA *ptr, bool value)
{
    ID *data = (ID *)(ptr->data);
    if (value) { data->tag |= 1024; }
    else { data->tag &= ~1024; }
}

bool ID_is_library_indirect_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return (((data->tag) & 2) != 0);
}

PointerRNA ID_library_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Library, data->lib);
}

PointerRNA ID_library_weak_reference_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_LibraryWeakReference, data->library_weak_reference);
}

PointerRNA ID_asset_data_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AssetMetaData, data->asset_data);
}

PointerRNA ID_override_library_get(PointerRNA *ptr)
{
    ID *data = (ID *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_IDOverrideLibrary, data->override_library);
}

PointerRNA ID_preview_get(PointerRNA *ptr)
{
    return rna_IDPreview_get(ptr);
}

static PointerRNA IDOverrideLibrary_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDOverrideLibrary_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibrary_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_rna_properties_get(iter);
    }
}

void IDOverrideLibrary_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_rna_properties_get(iter);
    }
}

void IDOverrideLibrary_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibrary_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibrary_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA IDOverrideLibrary_reference_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->reference);
}

PointerRNA IDOverrideLibrary_hierarchy_root_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ID, data->hierarchy_root);
}

bool IDOverrideLibrary_is_in_hierarchy_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void IDOverrideLibrary_is_in_hierarchy_set(PointerRNA *ptr, bool value)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool IDOverrideLibrary_is_system_override_get(PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void IDOverrideLibrary_is_system_override_set(PointerRNA *ptr, bool value)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA IDOverrideLibrary_properties_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IDOverrideLibraryProperty, rna_iterator_listbase_get(iter));
}

void IDOverrideLibrary_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    IDOverrideLibrary *data = (IDOverrideLibrary *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibrary_properties;

    rna_iterator_listbase_begin(iter, &data->properties, NULL);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_properties_get(iter);
    }
}

void IDOverrideLibrary_properties_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibrary_properties_get(iter);
    }
}

void IDOverrideLibrary_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibrary_properties_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    IDOverrideLibrary_properties_begin(&iter, ptr);

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
        if (found) { *r_ptr = IDOverrideLibrary_properties_get(&iter); }
    }

    IDOverrideLibrary_properties_end(&iter);

    return found;
}

static PointerRNA IDOverrideLibraryProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDOverrideLibraryProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperties_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperties_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibraryProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA IDOverrideLibraryProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDOverrideLibraryProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_rna_properties_get(iter);
    }
}

void IDOverrideLibraryProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibraryProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void IDOverrideLibraryProperty_rna_path_get(PointerRNA *ptr, char *value)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);
    if (data->rna_path == NULL) {
        *value = '\0';
        return;
    }
    BLI_strncpy_utf8(value, data->rna_path, strlen(data->rna_path) + 1);
}

int IDOverrideLibraryProperty_rna_path_length(PointerRNA *ptr)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);
    return (data->rna_path == NULL) ? 0 : strlen(data->rna_path);
}

static PointerRNA IDOverrideLibraryProperty_operations_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IDOverrideLibraryPropertyOperation, rna_iterator_listbase_get(iter));
}

void IDOverrideLibraryProperty_operations_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    IDOverrideLibraryProperty *data = (IDOverrideLibraryProperty *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryProperty_operations;

    rna_iterator_listbase_begin(iter, &data->operations, NULL);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_operations_get(iter);
    }
}

void IDOverrideLibraryProperty_operations_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryProperty_operations_get(iter);
    }
}

void IDOverrideLibraryProperty_operations_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibraryProperty_operations_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    IDOverrideLibraryProperty_operations_begin(&iter, ptr);

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
        if (found) { *r_ptr = IDOverrideLibraryProperty_operations_get(&iter); }
    }

    IDOverrideLibraryProperty_operations_end(&iter);

    return found;
}

static PointerRNA IDOverrideLibraryPropertyOperations_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDOverrideLibraryPropertyOperations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperations_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperations_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperations_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperations_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibraryPropertyOperations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryPropertyOperations_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA IDOverrideLibraryPropertyOperation_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDOverrideLibraryPropertyOperation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperation_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperation_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDOverrideLibraryPropertyOperation_rna_properties_get(iter);
    }
}

void IDOverrideLibraryPropertyOperation_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDOverrideLibraryPropertyOperation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDOverrideLibraryPropertyOperation_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int IDOverrideLibraryPropertyOperation_operation_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->operation);
}

int IDOverrideLibraryPropertyOperation_flag_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->flag);
}

void IDOverrideLibraryPropertyOperation_subitem_reference_name_get(PointerRNA *ptr, char *value)
{
    rna_ID_override_library_property_operation_refname_get(ptr, value);
}

int IDOverrideLibraryPropertyOperation_subitem_reference_name_length(PointerRNA *ptr)
{
    return rna_ID_override_library_property_operation_refname_length(ptr);
}

void IDOverrideLibraryPropertyOperation_subitem_local_name_get(PointerRNA *ptr, char *value)
{
    rna_ID_override_library_property_operation_locname_get(ptr, value);
}

int IDOverrideLibraryPropertyOperation_subitem_local_name_length(PointerRNA *ptr)
{
    return rna_ID_override_library_property_operation_locname_length(ptr);
}

int IDOverrideLibraryPropertyOperation_subitem_reference_index_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->subitem_reference_index);
}

int IDOverrideLibraryPropertyOperation_subitem_local_index_get(PointerRNA *ptr)
{
    IDOverrideLibraryPropertyOperation *data = (IDOverrideLibraryPropertyOperation *)(ptr->data);
    return (int)(data->subitem_local_index);
}

static PointerRNA ImagePreview_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ImagePreview_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ImagePreview_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ImagePreview_rna_properties_get(iter);
    }
}

void ImagePreview_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ImagePreview_rna_properties_get(iter);
    }
}

void ImagePreview_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ImagePreview_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ImagePreview_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool ImagePreview_is_image_custom_get(PointerRNA *ptr)
{
    PreviewImage *data = (PreviewImage *)(ptr->data);
    return (((data->flag[ICON_SIZE_PREVIEW]) & 2) != 0);
}

void ImagePreview_is_image_custom_set(PointerRNA *ptr, bool value)
{
    rna_ImagePreview_is_image_custom_set(ptr, value);
}

void ImagePreview_image_size_get(PointerRNA *ptr, int values[2])
{
    rna_ImagePreview_image_size_get(ptr, values);
}

void ImagePreview_image_size_set(PointerRNA *ptr, const int values[2])
{
    rna_ImagePreview_image_size_set(ptr, values);
}

void ImagePreview_image_pixels_get(PointerRNA *ptr, int values[])
{
    rna_ImagePreview_image_pixels_get(ptr, values);
}

void ImagePreview_image_pixels_set(PointerRNA *ptr, const int values[])
{
    rna_ImagePreview_image_pixels_set(ptr, values);
}

void ImagePreview_image_pixels_float_get(PointerRNA *ptr, float values[])
{
    rna_ImagePreview_image_pixels_float_get(ptr, values);
}

void ImagePreview_image_pixels_float_set(PointerRNA *ptr, const float values[])
{
    rna_ImagePreview_image_pixels_float_set(ptr, values);
}

bool ImagePreview_is_icon_custom_get(PointerRNA *ptr)
{
    PreviewImage *data = (PreviewImage *)(ptr->data);
    return (((data->flag[ICON_SIZE_ICON]) & 2) != 0);
}

void ImagePreview_is_icon_custom_set(PointerRNA *ptr, bool value)
{
    rna_ImagePreview_is_icon_custom_set(ptr, value);
}

void ImagePreview_icon_size_get(PointerRNA *ptr, int values[2])
{
    rna_ImagePreview_icon_size_get(ptr, values);
}

void ImagePreview_icon_size_set(PointerRNA *ptr, const int values[2])
{
    rna_ImagePreview_icon_size_set(ptr, values);
}

void ImagePreview_icon_pixels_get(PointerRNA *ptr, int values[])
{
    rna_ImagePreview_icon_pixels_get(ptr, values);
}

void ImagePreview_icon_pixels_set(PointerRNA *ptr, const int values[])
{
    rna_ImagePreview_icon_pixels_set(ptr, values);
}

void ImagePreview_icon_pixels_float_get(PointerRNA *ptr, float values[])
{
    rna_ImagePreview_icon_pixels_float_get(ptr, values);
}

void ImagePreview_icon_pixels_float_set(PointerRNA *ptr, const float values[])
{
    rna_ImagePreview_icon_pixels_float_set(ptr, values);
}

int ImagePreview_icon_id_get(PointerRNA *ptr)
{
    return rna_ImagePreview_icon_id_get(ptr);
}

static PointerRNA PropertyGroupItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PropertyGroupItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PropertyGroupItem_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_rna_properties_get(iter);
    }
}

void PropertyGroupItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_rna_properties_get(iter);
    }
}

void PropertyGroupItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PropertyGroupItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PropertyGroupItem_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int PropertyGroupItem_idp_array_length(PointerRNA *ptr)
{
    return rna_IDPArray_length(ptr);
}

static PointerRNA PropertyGroupItem_idp_array_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PropertyGroup, rna_iterator_array_get(iter));
}

void PropertyGroupItem_idp_array_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PropertyGroupItem_idp_array;

    rna_IDPArray_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_idp_array_get(iter);
    }
}

void PropertyGroupItem_idp_array_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroupItem_idp_array_get(iter);
    }
}

void PropertyGroupItem_idp_array_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

static PointerRNA PropertyGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PropertyGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PropertyGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PropertyGroup_rna_properties_get(iter);
    }
}

void PropertyGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PropertyGroup_rna_properties_get(iter);
    }
}

void PropertyGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PropertyGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PropertyGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA IDMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDMaterials_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDMaterials_rna_properties_get(iter);
    }
}

void IDMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDMaterials_rna_properties_get(iter);
    }
}

void IDMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDMaterials_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDMaterials_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void Library_filepath_get(PointerRNA *ptr, char *value)
{
    Library *data = (Library *)(ptr->data);
    BLI_strncpy(value, data->filepath, 1024);
}

int Library_filepath_length(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return strlen(data->filepath);
}

void Library_filepath_set(PointerRNA *ptr, const char *value)
{
    rna_Library_filepath_set(ptr, value);
}

PointerRNA Library_parent_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Library, data->parent);
}

PointerRNA Library_packed_file_get(PointerRNA *ptr)
{
    Library *data = (Library *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

void Library_version_get(PointerRNA *ptr, int values[3])
{
    rna_Library_version_get(ptr, values);
}

static PointerRNA LibraryWeakReference_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void LibraryWeakReference_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LibraryWeakReference_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LibraryWeakReference_rna_properties_get(iter);
    }
}

void LibraryWeakReference_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LibraryWeakReference_rna_properties_get(iter);
    }
}

void LibraryWeakReference_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int LibraryWeakReference_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LibraryWeakReference_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void LibraryWeakReference_filepath_get(PointerRNA *ptr, char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_strncpy(value, data->library_filepath, 1024);
}

int LibraryWeakReference_filepath_length(PointerRNA *ptr)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    return strlen(data->library_filepath);
}

void LibraryWeakReference_id_name_get(PointerRNA *ptr, char *value)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    BLI_strncpy(value, data->library_id_name, 66);
}

int LibraryWeakReference_id_name_length(PointerRNA *ptr)
{
    LibraryWeakReference *data = (LibraryWeakReference *)(ptr->data);
    return strlen(data->library_id_name);
}

static PointerRNA IDPropertyWrapPtr_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IDPropertyWrapPtr_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IDPropertyWrapPtr_rna_properties_get(iter);
    }
}

void IDPropertyWrapPtr_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IDPropertyWrapPtr_rna_properties_get(iter);
    }
}

void IDPropertyWrapPtr_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IDPropertyWrapPtr_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IDPropertyWrapPtr_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}



struct ID *ID_evaluated_get_func(struct ID *_self, struct Depsgraph *depsgraph)
{
	return rna_ID_evaluated_get(_self, depsgraph);
}

void ID_evaluated_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct Depsgraph *depsgraph;
	struct ID *id;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	depsgraph = *((struct Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	id = rna_ID_evaluated_get(_self, depsgraph);
	*((struct ID **)_retdata) = id;
}

struct ID *ID_copy_func(struct ID *_self, Main *bmain)
{
	return rna_ID_copy(_self, bmain);
}

void ID_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	id = rna_ID_copy(_self, CTX_data_main(C));
	*((struct ID **)_retdata) = id;
}

void ID_asset_mark_func(struct ID *_self)
{
	rna_ID_asset_mark(_self);
}

void ID_asset_mark_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_asset_mark(_self);
}

void ID_asset_clear_func(struct ID *_self)
{
	rna_ID_asset_clear(_self);
}

void ID_asset_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_asset_clear(_self);
}

void ID_asset_generate_preview_func(struct ID *_self, bContext *C)
{
	rna_ID_asset_generate_preview(_self, C);
}

void ID_asset_generate_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_asset_generate_preview(_self, C);
}

struct ID *ID_override_create_func(struct ID *_self, Main *bmain, bool remap_local_usages)
{
	return rna_ID_override_create(_self, bmain, remap_local_usages);
}

void ID_override_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	bool remap_local_usages;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	remap_local_usages = *((bool *)_data);
	
	id = rna_ID_override_create(_self, CTX_data_main(C), remap_local_usages);
	*((struct ID **)_retdata) = id;
}

struct ID *ID_override_hierarchy_create_func(struct ID *_self, Main *bmain, struct Scene *scene, struct ViewLayer *view_layer, struct ID *reference)
{
	return rna_ID_override_hierarchy_create(_self, bmain, scene, view_layer, reference);
}

void ID_override_hierarchy_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	struct Scene *scene;
	struct ViewLayer *view_layer;
	struct ID *reference;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	scene = *((struct Scene **)_data);
	_data += 8;
	view_layer = *((struct ViewLayer **)_data);
	_data += 8;
	reference = *((struct ID **)_data);
	
	id = rna_ID_override_hierarchy_create(_self, CTX_data_main(C), scene, view_layer, reference);
	*((struct ID **)_retdata) = id;
}

void ID_override_template_create_func(struct ID *_self, ReportList *reports)
{
	rna_ID_override_template_create(_self, reports);
}

void ID_override_template_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_override_template_create(_self, reports);
}

void ID_user_clear_func(struct ID *_self)
{
	rna_ID_user_clear(_self);
}

void ID_user_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_user_clear(_self);
}

void ID_user_remap_func(struct ID *_self, Main *bmain, struct ID *new_id)
{
	rna_ID_user_remap(_self, bmain, new_id);
}

void ID_user_remap_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *new_id;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	new_id = *((struct ID **)_data);
	
	rna_ID_user_remap(_self, CTX_data_main(C), new_id);
}

struct ID *ID_make_local_func(struct ID *_self, Main *bmain, bool clear_proxy)
{
	return rna_ID_make_local(_self, bmain, clear_proxy);
}

void ID_make_local_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	bool clear_proxy;
	struct ID *id;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	clear_proxy = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	id = rna_ID_make_local(_self, CTX_data_main(C), clear_proxy);
	*((struct ID **)_retdata) = id;
}

int ID_user_of_id_func(struct ID *_self, struct ID *id)
{
	return BKE_library_ID_use_ID(_self, id);
}

void ID_user_of_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	int count;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((struct ID **)_data);
	_data += 8;
	_retdata = _data;
	
	count = BKE_library_ID_use_ID(_self, id);
	*((int *)_retdata) = count;
}

struct AnimData *ID_animation_data_create_func(struct ID *_self, Main *bmain)
{
	return rna_ID_animation_data_create(_self, bmain);
}

void ID_animation_data_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct AnimData *anim_data;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	anim_data = rna_ID_animation_data_create(_self, CTX_data_main(C));
	*((struct AnimData **)_retdata) = anim_data;
}

void ID_animation_data_clear_func(struct ID *_self, Main *bmain)
{
	rna_ID_animation_data_free(_self, bmain);
}

void ID_animation_data_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_ID_animation_data_free(_self, CTX_data_main(C));
}

void ID_update_tag_func(struct ID *_self, Main *bmain, ReportList *reports, int refresh)
{
	rna_ID_update_tag(_self, bmain, reports, refresh);
}

void ID_update_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	int refresh;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	refresh = *((int *)_data);
	
	rna_ID_update_tag(_self, CTX_data_main(C), reports, refresh);
}

struct PreviewImage *ID_preview_ensure_func(struct ID *_self)
{
	return BKE_previewimg_id_ensure(_self);
}

void ID_preview_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct PreviewImage *preview_image;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	preview_image = BKE_previewimg_id_ensure(_self);
	*((struct PreviewImage **)_retdata) = preview_image;
}

/* Repeated prototypes to detect errors */

struct ID *rna_ID_evaluated_get(struct ID *_self, struct Depsgraph *depsgraph);
struct ID *rna_ID_copy(struct ID *_self, Main *bmain);
void rna_ID_asset_mark(struct ID *_self);
void rna_ID_asset_clear(struct ID *_self);
void rna_ID_asset_generate_preview(struct ID *_self, bContext *C);
struct ID *rna_ID_override_create(struct ID *_self, Main *bmain, bool remap_local_usages);
struct ID *rna_ID_override_hierarchy_create(struct ID *_self, Main *bmain, struct Scene *scene, struct ViewLayer *view_layer, struct ID *reference);
void rna_ID_override_template_create(struct ID *_self, ReportList *reports);
void rna_ID_user_clear(struct ID *_self);
void rna_ID_user_remap(struct ID *_self, Main *bmain, struct ID *new_id);
struct ID *rna_ID_make_local(struct ID *_self, Main *bmain, bool clear_proxy);
int BKE_library_ID_use_ID(struct ID *_self, struct ID *id);
struct AnimData *rna_ID_animation_data_create(struct ID *_self, Main *bmain);
void rna_ID_animation_data_free(struct ID *_self, Main *bmain);
void rna_ID_update_tag(struct ID *_self, Main *bmain, ReportList *reports, int refresh);
struct PreviewImage *BKE_previewimg_id_ensure(struct ID *_self);

void IDOverrideLibrary_operations_update_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports)
{
	rna_ID_override_library_operations_update(_selfid, _self, bmain, reports);
}

void IDOverrideLibrary_operations_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	
	rna_ID_override_library_operations_update(_selfid, _self, CTX_data_main(C), reports);
}

void IDOverrideLibrary_reset_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy, bool set_system_override)
{
	rna_ID_override_library_reset(_selfid, _self, bmain, reports, do_hierarchy, set_system_override);
}

void IDOverrideLibrary_reset_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	bool do_hierarchy;
	bool set_system_override;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	do_hierarchy = *((bool *)_data);
	_data += 8;
	set_system_override = *((bool *)_data);
	
	rna_ID_override_library_reset(_selfid, _self, CTX_data_main(C), reports, do_hierarchy, set_system_override);
}

void IDOverrideLibrary_destroy_func(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy)
{
	rna_ID_override_library_destroy(_selfid, _self, bmain, reports, do_hierarchy);
}

void IDOverrideLibrary_destroy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct IDOverrideLibrary *_self;
	bool do_hierarchy;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	do_hierarchy = *((bool *)_data);
	
	rna_ID_override_library_destroy(_selfid, _self, CTX_data_main(C), reports, do_hierarchy);
}

/* Repeated prototypes to detect errors */

void rna_ID_override_library_operations_update(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports);
void rna_ID_override_library_reset(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy, bool set_system_override);
void rna_ID_override_library_destroy(struct ID *_selfid, struct IDOverrideLibrary *_self, Main *bmain, ReportList *reports, bool do_hierarchy);

struct IDOverrideLibraryProperty *IDOverrideLibraryProperties_add_func(struct IDOverrideLibrary *_self, ReportList *reports, const char * rna_path)
{
	return rna_ID_override_library_properties_add(_self, reports, rna_path);
}

void IDOverrideLibraryProperties_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibrary *_self;
	struct IDOverrideLibraryProperty *property;
	const char * rna_path;
	char *_data, *_retdata;
	
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	rna_path = *((const char * *)_data);
	
	property = rna_ID_override_library_properties_add(_self, reports, rna_path);
	*((struct IDOverrideLibraryProperty **)_retdata) = property;
}

void IDOverrideLibraryProperties_remove_func(struct IDOverrideLibrary *_self, ReportList *reports, struct IDOverrideLibraryProperty *property)
{
	rna_ID_override_library_properties_remove(_self, reports, property);
}

void IDOverrideLibraryProperties_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibrary *_self;
	struct IDOverrideLibraryProperty *property;
	char *_data;
	
	_self = (struct IDOverrideLibrary *)_ptr->data;
	_data = (char *)_parms->data;
	property = *((struct IDOverrideLibraryProperty **)_data);
	
	rna_ID_override_library_properties_remove(_self, reports, property);
}

/* Repeated prototypes to detect errors */

struct IDOverrideLibraryProperty *rna_ID_override_library_properties_add(struct IDOverrideLibrary *_self, ReportList *reports, const char * rna_path);
void rna_ID_override_library_properties_remove(struct IDOverrideLibrary *_self, ReportList *reports, struct IDOverrideLibraryProperty *property);


struct IDOverrideLibraryPropertyOperation *IDOverrideLibraryPropertyOperations_add_func(struct IDOverrideLibraryProperty *_self, ReportList *reports, int operation, const char * subitem_reference_name, const char * subitem_local_name, int subitem_reference_index, int subitem_local_index)
{
	return rna_ID_override_library_property_operations_add(_self, reports, operation, subitem_reference_name, subitem_local_name, subitem_reference_index, subitem_local_index);
}

void IDOverrideLibraryPropertyOperations_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibraryProperty *_self;
	int operation;
	const char * subitem_reference_name;
	const char * subitem_local_name;
	int subitem_reference_index;
	int subitem_local_index;
	struct IDOverrideLibraryPropertyOperation *property;
	char *_data, *_retdata;
	
	_self = (struct IDOverrideLibraryProperty *)_ptr->data;
	_data = (char *)_parms->data;
	operation = *((int *)_data);
	_data += 8;
	subitem_reference_name = *((const char * *)_data);
	_data += 8;
	subitem_local_name = *((const char * *)_data);
	_data += 8;
	subitem_reference_index = *((int *)_data);
	_data += 8;
	subitem_local_index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	property = rna_ID_override_library_property_operations_add(_self, reports, operation, subitem_reference_name, subitem_local_name, subitem_reference_index, subitem_local_index);
	*((struct IDOverrideLibraryPropertyOperation **)_retdata) = property;
}

void IDOverrideLibraryPropertyOperations_remove_func(struct IDOverrideLibraryProperty *_self, ReportList *reports, struct IDOverrideLibraryPropertyOperation *operation)
{
	rna_ID_override_library_property_operations_remove(_self, reports, operation);
}

void IDOverrideLibraryPropertyOperations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct IDOverrideLibraryProperty *_self;
	struct IDOverrideLibraryPropertyOperation *operation;
	char *_data;
	
	_self = (struct IDOverrideLibraryProperty *)_ptr->data;
	_data = (char *)_parms->data;
	operation = *((struct IDOverrideLibraryPropertyOperation **)_data);
	
	rna_ID_override_library_property_operations_remove(_self, reports, operation);
}

/* Repeated prototypes to detect errors */

struct IDOverrideLibraryPropertyOperation *rna_ID_override_library_property_operations_add(struct IDOverrideLibraryProperty *_self, ReportList *reports, int operation, const char * subitem_reference_name, const char * subitem_local_name, int subitem_reference_index, int subitem_local_index);
void rna_ID_override_library_property_operations_remove(struct IDOverrideLibraryProperty *_self, ReportList *reports, struct IDOverrideLibraryPropertyOperation *operation);


int ImagePreview_image_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_image_pixels_get_length(ptr, arraylen);
}

int ImagePreview_image_pixels_float_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_image_pixels_float_get_length(ptr, arraylen);
}

int ImagePreview_icon_pixels_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_icon_pixels_get_length(ptr, arraylen);
}

int ImagePreview_icon_pixels_float_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_ImagePreview_icon_pixels_float_get_length(ptr, arraylen);
}

void ImagePreview_reload_func(struct PreviewImage *_self)
{
	rna_ImagePreview_icon_reload(_self);
}

void ImagePreview_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PreviewImage *_self;
	_self = (struct PreviewImage *)_ptr->data;
	
	rna_ImagePreview_icon_reload(_self);
}

/* Repeated prototypes to detect errors */

void rna_ImagePreview_icon_reload(struct PreviewImage *_self);



void IDMaterials_append_func(struct ID *_self, Main *bmain, struct Material *material)
{
	rna_IDMaterials_append_id(_self, bmain, material);
}

void IDMaterials_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct Material *material;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	material = *((struct Material **)_data);
	
	rna_IDMaterials_append_id(_self, CTX_data_main(C), material);
}

struct Material *IDMaterials_pop_func(struct ID *_self, Main *bmain, ReportList *reports, int index)
{
	return rna_IDMaterials_pop_id(_self, bmain, reports, index);
}

void IDMaterials_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	int index;
	struct Material *material;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	material = rna_IDMaterials_pop_id(_self, CTX_data_main(C), reports, index);
	*((struct Material **)_retdata) = material;
}

void IDMaterials_clear_func(struct ID *_self, Main *bmain)
{
	rna_IDMaterials_clear_id(_self, bmain);
}

void IDMaterials_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self = (struct ID *)_ptr->data;
	
	rna_IDMaterials_clear_id(_self, CTX_data_main(C));
}

/* Repeated prototypes to detect errors */

void rna_IDMaterials_append_id(struct ID *_self, Main *bmain, struct Material *material);
struct Material *rna_IDMaterials_pop_id(struct ID *_self, Main *bmain, ReportList *reports, int index);
void rna_IDMaterials_clear_id(struct ID *_self, Main *bmain);

void Library_reload_func(struct Library *_self, bContext *C, ReportList *reports)
{
	rna_Library_reload(_self, C, reports);
}

void Library_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Library *_self;
	_self = (struct Library *)_ptr->data;
	
	rna_Library_reload(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_Library_reload(struct Library *_self, bContext *C, ReportList *reports);



/* Unknown Type */
CollectionPropertyRNA rna_UnknownType_rna_properties = {
	{(PropertyRNA *)&rna_UnknownType_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UnknownType_rna_properties_begin, UnknownType_rna_properties_next, UnknownType_rna_properties_end, UnknownType_rna_properties_get, NULL, NULL, UnknownType_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UnknownType_rna_type = {
	{NULL, (PropertyRNA *)&rna_UnknownType_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UnknownType_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_UnknownType = {
	{(ContainerRNA *)&RNA_AnyType, (ContainerRNA *)&RNA_BlenderRNA,
	NULL,
	{(PropertyRNA *)&rna_UnknownType_rna_properties, (PropertyRNA *)&rna_UnknownType_rna_type}},
	"UnknownType", NULL, NULL, 516, NULL, "Unknown Type",
	"Stub RNA type used for pointers to unknown or internal data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UnknownType_rna_properties,
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

/* Any Type */
CollectionPropertyRNA rna_AnyType_rna_properties = {
	{(PropertyRNA *)&rna_AnyType_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnyType_rna_properties_begin, AnyType_rna_properties_next, AnyType_rna_properties_end, AnyType_rna_properties_get, NULL, NULL, AnyType_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AnyType_rna_type = {
	{NULL, (PropertyRNA *)&rna_AnyType_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AnyType_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_AnyType = {
	{(ContainerRNA *)&RNA_ID, (ContainerRNA *)&RNA_UnknownType,
	NULL,
	{(PropertyRNA *)&rna_AnyType_rna_properties, (PropertyRNA *)&rna_AnyType_rna_type}},
	"AnyType", NULL, NULL, 516, NULL, "Any Type",
	"RNA type used for pointers to any possible data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AnyType_rna_properties,
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

/* ID */
CollectionPropertyRNA rna_ID_rna_properties = {
	{(PropertyRNA *)&rna_ID_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_rna_properties_begin, ID_rna_properties_next, ID_rna_properties_end, ID_rna_properties_get, NULL, NULL, ID_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ID_rna_type = {
	{(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ID_name = {
	{(PropertyRNA *)&rna_ID_name_full, (PropertyRNA *)&rna_ID_rna_type,
	-1, "name", 262145, 4, 0, 0, 0, "Name",
	"Unique data-block ID name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {66, 0, 0}, 0,
	NULL, 318767109, rna_ID_name_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_name_get, ID_name_length, ID_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

StringPropertyRNA rna_ID_name_full = {
	{(PropertyRNA *)&rna_ID_is_evaluated, (PropertyRNA *)&rna_ID_name,
	-1, "name_full", 262144, 0, 0, 0, 0, "Full Name",
	"Unique data-block ID name, including library one is any",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_name_full_get, ID_name_full_length, NULL, NULL, NULL, NULL, NULL, 0, 132, ""
};

BoolPropertyRNA rna_ID_is_evaluated = {
	{(PropertyRNA *)&rna_ID_original, (PropertyRNA *)&rna_ID_name_full,
	-1, "is_evaluated", 2, 0, 0, 0, 0, "Is Evaluated",
	"Whether this ID is runtime-only, evaluated data-block, or actual data from .blend file",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_is_evaluated_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ID_original = {
	{(PropertyRNA *)&rna_ID_users, (PropertyRNA *)&rna_ID_is_evaluated,
	-1, "original", 8912896, 2, 0, 32, 0, "Original ID",
	"Actual data-block from .blend file (Main database) that generated that evaluated one",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_original_get, NULL, NULL, NULL,&RNA_ID
};

IntPropertyRNA rna_ID_users = {
	{(PropertyRNA *)&rna_ID_use_fake_user, (PropertyRNA *)&rna_ID_original,
	-1, "users", 2, 0, 0, 4, 0, "Users",
	"Number of times this data-block is referenced",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(ID, us), 0, NULL},
	ID_users_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_ID_use_fake_user = {
	{(PropertyRNA *)&rna_ID_use_extra_user, (PropertyRNA *)&rna_ID_users,
	-1, "use_fake_user", 4099, 0, 0, 0, 0, "Fake User",
	"Save this data-block even if it has no users",
	102, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_use_fake_user_get, ID_use_fake_user_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ID_use_extra_user = {
	{(PropertyRNA *)&rna_ID_is_embedded_data, (PropertyRNA *)&rna_ID_use_fake_user,
	-1, "use_extra_user", 3, 0, 0, 0, 0, "Extra User",
	"Indicates whether an extra user is set or not (mainly for internal/debug usages)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_use_extra_user_get, ID_use_extra_user_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ID_is_embedded_data = {
	{(PropertyRNA *)&rna_ID_tag, (PropertyRNA *)&rna_ID_use_extra_user,
	-1, "is_embedded_data", 2, 0, 0, 0, 0, "Embedded Data",
	"This data-block is not an independent one, but is actually a sub-data of another ID (typical example: root node trees or master collections)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_is_embedded_data_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ID_tag = {
	{(PropertyRNA *)&rna_ID_is_library_indirect, (PropertyRNA *)&rna_ID_is_embedded_data,
	-1, "tag", 65539, 0, 0, 0, 0, "Tag",
	"Tools can use this to tag data for their own purposes (initial state is undefined)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_tag_get, ID_tag_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ID_is_library_indirect = {
	{(PropertyRNA *)&rna_ID_library, (PropertyRNA *)&rna_ID_tag,
	-1, "is_library_indirect", 2, 0, 0, 0, 0, "Is Indirect",
	"Is this ID block linked indirectly",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_is_library_indirect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ID_library = {
	{(PropertyRNA *)&rna_ID_library_weak_reference, (PropertyRNA *)&rna_ID_is_library_indirect,
	-1, "library", 8388800, 2, 0, 0, 0, "Library",
	"Library file the data-block is linked from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_library_get, NULL, NULL, NULL,&RNA_Library
};

PointerPropertyRNA rna_ID_library_weak_reference = {
	{(PropertyRNA *)&rna_ID_asset_data, (PropertyRNA *)&rna_ID_library,
	-1, "library_weak_reference", 8388608, 2, 0, 0, 0, "Library Weak Reference",
	"Weak reference to a data-block in another library .blend file (used to re-use already appended data instead of appending new copies)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_library_weak_reference_get, NULL, NULL, NULL,&RNA_LibraryWeakReference
};

PointerPropertyRNA rna_ID_asset_data = {
	{(PropertyRNA *)&rna_ID_override_library, (PropertyRNA *)&rna_ID_library_weak_reference,
	-1, "asset_data", 8388608, 2, 0, 0, 0, "Asset Data",
	"Additional data for an asset data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_asset_data_get, NULL, NULL, NULL,&RNA_AssetMetaData
};

PointerPropertyRNA rna_ID_override_library = {
	{(PropertyRNA *)&rna_ID_preview, (PropertyRNA *)&rna_ID_asset_data,
	-1, "override_library", 8388608, 3, 0, 0, 0, "Library Override",
	"Library override data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_override_library_get, NULL, NULL, NULL,&RNA_IDOverrideLibrary
};

PointerPropertyRNA rna_ID_preview = {
	{NULL, (PropertyRNA *)&rna_ID_override_library,
	-1, "preview", 8388608, 2, 0, 0, 0, "Preview",
	"Preview image and icon of this data-block (always None if not supported for this type of data)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ID_preview_get, NULL, NULL, NULL,&RNA_ImagePreview
};

PointerPropertyRNA rna_ID_evaluated_get_depsgraph = {
	{(PropertyRNA *)&rna_ID_evaluated_get_id, NULL,
	-1, "depsgraph", 8650752, 0, 1, 0, 0, "",
	"Dependency graph to perform lookup in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Depsgraph
};

PointerPropertyRNA rna_ID_evaluated_get_id = {
	{NULL, (PropertyRNA *)&rna_ID_evaluated_get_depsgraph,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New copy of the ID",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_ID_evaluated_get_func = {
	{(FunctionRNA *)&rna_ID_copy_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ID_evaluated_get_depsgraph, (PropertyRNA *)&rna_ID_evaluated_get_id}},
	"evaluated_get", 0, "Get corresponding evaluated ID from the given dependency graph",
	ID_evaluated_get_call,
	(PropertyRNA *)&rna_ID_evaluated_get_id
};

PointerPropertyRNA rna_ID_copy_id = {
	{NULL, NULL,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New copy of the ID",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_ID_copy_func = {
	{(FunctionRNA *)&rna_ID_asset_mark_func, (FunctionRNA *)&rna_ID_evaluated_get_func,
	NULL,
	{(PropertyRNA *)&rna_ID_copy_id, (PropertyRNA *)&rna_ID_copy_id}},
	"copy", 4, "Create a copy of this data-block (not supported for all data-blocks)",
	ID_copy_call,
	(PropertyRNA *)&rna_ID_copy_id
};

FunctionRNA rna_ID_asset_mark_func = {
	{(FunctionRNA *)&rna_ID_asset_clear_func, (FunctionRNA *)&rna_ID_copy_func,
	NULL,
	{NULL, NULL}},
	"asset_mark", 0, "Enable easier reuse of the data-block through the Asset Browser, with the help of customizable metadata (like previews, descriptions and tags)",
	ID_asset_mark_call,
	NULL
};

FunctionRNA rna_ID_asset_clear_func = {
	{(FunctionRNA *)&rna_ID_asset_generate_preview_func, (FunctionRNA *)&rna_ID_asset_mark_func,
	NULL,
	{NULL, NULL}},
	"asset_clear", 0, "Delete all asset metadata and turn the asset data-block back into a normal data-block",
	ID_asset_clear_call,
	NULL
};

FunctionRNA rna_ID_asset_generate_preview_func = {
	{(FunctionRNA *)&rna_ID_override_create_func, (FunctionRNA *)&rna_ID_asset_clear_func,
	NULL,
	{NULL, NULL}},
	"asset_generate_preview", 8, "Generate preview image (might be scheduled in a background thread)",
	ID_asset_generate_preview_call,
	NULL
};

PointerPropertyRNA rna_ID_override_create_id = {
	{(PropertyRNA *)&rna_ID_override_create_remap_local_usages, NULL,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New overridden local copy of the ID",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_ID_override_create_remap_local_usages = {
	{NULL, (PropertyRNA *)&rna_ID_override_create_id,
	-1, "remap_local_usages", 3, 0, 0, 0, 0, "",
	"Whether local usages of the linked ID should be remapped to the new library override of it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_ID_override_create_func = {
	{(FunctionRNA *)&rna_ID_override_hierarchy_create_func, (FunctionRNA *)&rna_ID_asset_generate_preview_func,
	NULL,
	{(PropertyRNA *)&rna_ID_override_create_id, (PropertyRNA *)&rna_ID_override_create_remap_local_usages}},
	"override_create", 4, "Create an overridden local copy of this linked data-block (not supported for all data-blocks)",
	ID_override_create_call,
	(PropertyRNA *)&rna_ID_override_create_id
};

PointerPropertyRNA rna_ID_override_hierarchy_create_id = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_scene, NULL,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"New overridden local copy of the root ID",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_ID_override_hierarchy_create_scene = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_view_layer, (PropertyRNA *)&rna_ID_override_hierarchy_create_id,
	-1, "scene", 8650880, 0, 1, 0, 0, "",
	"In which scene the new overrides should be instantiated",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_ID_override_hierarchy_create_view_layer = {
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_reference, (PropertyRNA *)&rna_ID_override_hierarchy_create_scene,
	-1, "view_layer", 8650752, 0, 1, 0, 0, "",
	"In which view layer the new overrides should be instantiated",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ViewLayer
};

PointerPropertyRNA rna_ID_override_hierarchy_create_reference = {
	{NULL, (PropertyRNA *)&rna_ID_override_hierarchy_create_view_layer,
	-1, "reference", 8388736, 0, 0, 0, 0, "",
	"Another ID (usually an Object or Collection) used as a hint to decide where to instantiate the new overrides",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_ID_override_hierarchy_create_func = {
	{(FunctionRNA *)&rna_ID_override_template_create_func, (FunctionRNA *)&rna_ID_override_create_func,
	NULL,
	{(PropertyRNA *)&rna_ID_override_hierarchy_create_id, (PropertyRNA *)&rna_ID_override_hierarchy_create_reference}},
	"override_hierarchy_create", 4, "Create an overridden local copy of this linked data-block, and most of its dependencies when it is a Collection or and Object",
	ID_override_hierarchy_create_call,
	(PropertyRNA *)&rna_ID_override_hierarchy_create_id
};

FunctionRNA rna_ID_override_template_create_func = {
	{(FunctionRNA *)&rna_ID_user_clear_func, (FunctionRNA *)&rna_ID_override_hierarchy_create_func,
	NULL,
	{NULL, NULL}},
	"override_template_create", 16, "Create an override template for this ID",
	ID_override_template_create_call,
	NULL
};

FunctionRNA rna_ID_user_clear_func = {
	{(FunctionRNA *)&rna_ID_user_remap_func, (FunctionRNA *)&rna_ID_override_template_create_func,
	NULL,
	{NULL, NULL}},
	"user_clear", 0, "Clear the user count of a data-block so its not saved, on reload the data will be removed",
	ID_user_clear_call,
	NULL
};

PointerPropertyRNA rna_ID_user_remap_new_id = {
	{NULL, NULL,
	-1, "new_id", 8650880, 0, 1, 0, 0, "",
	"New ID to use",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_ID_user_remap_func = {
	{(FunctionRNA *)&rna_ID_make_local_func, (FunctionRNA *)&rna_ID_user_clear_func,
	NULL,
	{(PropertyRNA *)&rna_ID_user_remap_new_id, (PropertyRNA *)&rna_ID_user_remap_new_id}},
	"user_remap", 4, "Replace all usage in the .blend file of this ID by new given one",
	ID_user_remap_call,
	NULL
};

BoolPropertyRNA rna_ID_make_local_clear_proxy = {
	{(PropertyRNA *)&rna_ID_make_local_id, NULL,
	-1, "clear_proxy", 3, 0, 0, 0, 0, "",
	"Deprecated, has no effect",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_ID_make_local_id = {
	{NULL, (PropertyRNA *)&rna_ID_make_local_clear_proxy,
	-1, "id", 8388736, 0, 2, 0, 0, "",
	"This ID, or the new ID if it was copied",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_ID_make_local_func = {
	{(FunctionRNA *)&rna_ID_user_of_id_func, (FunctionRNA *)&rna_ID_user_remap_func,
	NULL,
	{(PropertyRNA *)&rna_ID_make_local_clear_proxy, (PropertyRNA *)&rna_ID_make_local_id}},
	"make_local", 4, "Make this datablock local, return local one (may be a copy of the original, in case it is also indirectly used)",
	ID_make_local_call,
	(PropertyRNA *)&rna_ID_make_local_id
};

PointerPropertyRNA rna_ID_user_of_id_id = {
	{(PropertyRNA *)&rna_ID_user_of_id_count, NULL,
	-1, "id", 8650880, 0, 1, 0, 0, "",
	"ID to count usages",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

IntPropertyRNA rna_ID_user_of_id_count = {
	{NULL, (PropertyRNA *)&rna_ID_user_of_id_id,
	-1, "count", 3, 0, 2, 0, 0, "",
	"Number of usages/references of given id by current data-block",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_ID_user_of_id_func = {
	{(FunctionRNA *)&rna_ID_animation_data_create_func, (FunctionRNA *)&rna_ID_make_local_func,
	NULL,
	{(PropertyRNA *)&rna_ID_user_of_id_id, (PropertyRNA *)&rna_ID_user_of_id_count}},
	"user_of_id", 0, "Count the number of times that ID uses/references given one",
	ID_user_of_id_call,
	(PropertyRNA *)&rna_ID_user_of_id_count
};

PointerPropertyRNA rna_ID_animation_data_create_anim_data = {
	{NULL, NULL,
	-1, "anim_data", 8388608, 0, 2, 0, 0, "",
	"New animation data or NULL",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnimData
};

FunctionRNA rna_ID_animation_data_create_func = {
	{(FunctionRNA *)&rna_ID_animation_data_clear_func, (FunctionRNA *)&rna_ID_user_of_id_func,
	NULL,
	{(PropertyRNA *)&rna_ID_animation_data_create_anim_data, (PropertyRNA *)&rna_ID_animation_data_create_anim_data}},
	"animation_data_create", 4, "Create animation data to this ID, note that not all ID types support this",
	ID_animation_data_create_call,
	(PropertyRNA *)&rna_ID_animation_data_create_anim_data
};

FunctionRNA rna_ID_animation_data_clear_func = {
	{(FunctionRNA *)&rna_ID_update_tag_func, (FunctionRNA *)&rna_ID_animation_data_create_func,
	NULL,
	{NULL, NULL}},
	"animation_data_clear", 4, "Clear animation on this this ID",
	ID_animation_data_clear_call,
	NULL
};

static const EnumPropertyItem rna_ID_update_tag_refresh_items[4] = {
	{1, "OBJECT", 0, "Object", ""},
	{2, "DATA", 0, "Data", ""},
	{4, "TIME", 0, "Time", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ID_update_tag_refresh = {
	{NULL, NULL,
	-1, "refresh", 2097155, 0, 0, 0, 0, "",
	"Type of updates to perform",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_ID_update_tag_refresh_items, 3, 0
};

FunctionRNA rna_ID_update_tag_func = {
	{(FunctionRNA *)&rna_ID_preview_ensure_func, (FunctionRNA *)&rna_ID_animation_data_clear_func,
	NULL,
	{(PropertyRNA *)&rna_ID_update_tag_refresh, (PropertyRNA *)&rna_ID_update_tag_refresh}},
	"update_tag", 20, "Tag the ID to update its display data, e.g. when calling :class:`bpy.types.Scene.update`",
	ID_update_tag_call,
	NULL
};

PointerPropertyRNA rna_ID_preview_ensure_preview_image = {
	{NULL, NULL,
	-1, "preview_image", 8388608, 0, 2, 0, 0, "",
	"The existing or created preview",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImagePreview
};

FunctionRNA rna_ID_preview_ensure_func = {
	{NULL, (FunctionRNA *)&rna_ID_update_tag_func,
	NULL,
	{(PropertyRNA *)&rna_ID_preview_ensure_preview_image, (PropertyRNA *)&rna_ID_preview_ensure_preview_image}},
	"preview_ensure", 0, "Ensure that this ID has preview data (if ID type supports it)",
	ID_preview_ensure_call,
	(PropertyRNA *)&rna_ID_preview_ensure_preview_image
};

StructRNA RNA_ID = {
	{(ContainerRNA *)&RNA_IDOverrideLibrary, (ContainerRNA *)&RNA_AnyType,
	NULL,
	{(PropertyRNA *)&rna_ID_rna_properties, (PropertyRNA *)&rna_ID_preview}},
	"ID", NULL, NULL, 519, NULL, "ID",
	"Base type for data-blocks, defining a unique name, linking from other libraries and garbage collection",
	"*", 17,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	NULL,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_ID_evaluated_get_func, (FunctionRNA *)&rna_ID_preview_ensure_func}
};

/* ID Library Override */
CollectionPropertyRNA rna_IDOverrideLibrary_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibrary_rna_properties_begin, IDOverrideLibrary_rna_properties_next, IDOverrideLibrary_rna_properties_end, IDOverrideLibrary_rna_properties_get, NULL, NULL, IDOverrideLibrary_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibrary_rna_type = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_reference, (PropertyRNA *)&rna_IDOverrideLibrary_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibrary_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_IDOverrideLibrary_reference = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_hierarchy_root, (PropertyRNA *)&rna_IDOverrideLibrary_rna_type,
	-1, "reference", 8388800, 0, 0, 0, 0, "Reference ID",
	"Linked ID used as reference by this override",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17301504, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibrary_reference_get, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_IDOverrideLibrary_hierarchy_root = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_is_in_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_reference,
	-1, "hierarchy_root", 8388800, 0, 0, 0, 0, "Hierarchy Root ID",
	"Library override ID used as root of the override hierarchy this ID is a member of",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibrary_hierarchy_root_get, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_IDOverrideLibrary_is_in_hierarchy = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_is_system_override, (PropertyRNA *)&rna_IDOverrideLibrary_hierarchy_root,
	-1, "is_in_hierarchy", 3, 1, 0, 0, 0, "Is In Hierarchy",
	"Whether this library override is defined as part of a library hierarchy, or as a single, isolated and autonomous override",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17301504, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibrary_is_in_hierarchy_get, IDOverrideLibrary_is_in_hierarchy_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_IDOverrideLibrary_is_system_override = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_properties, (PropertyRNA *)&rna_IDOverrideLibrary_is_in_hierarchy,
	-1, "is_system_override", 3, 1, 0, 0, 0, "Is System Override",
	"Whether this library override exists only for the override hierarchy, or if it is actually editable by the user",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17301504, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibrary_is_system_override_get, IDOverrideLibrary_is_system_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_IDOverrideLibrary_properties = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibrary_is_system_override,
	-1, "properties", 0, 0, 0, 0, 0, "Properties",
	"List of overridden properties",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17301504, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDOverrideLibraryProperties},
	IDOverrideLibrary_properties_begin, IDOverrideLibrary_properties_next, IDOverrideLibrary_properties_end, IDOverrideLibrary_properties_get, NULL, IDOverrideLibrary_properties_lookup_int, NULL, NULL, &RNA_IDOverrideLibraryProperty
};

FunctionRNA rna_IDOverrideLibrary_operations_update_func = {
	{(FunctionRNA *)&rna_IDOverrideLibrary_reset_func, NULL,
	NULL,
	{NULL, NULL}},
	"operations_update", 2068, "Update the library override operations based on the differences between this override ID and its reference",
	IDOverrideLibrary_operations_update_call,
	NULL
};

BoolPropertyRNA rna_IDOverrideLibrary_reset_do_hierarchy = {
	{(PropertyRNA *)&rna_IDOverrideLibrary_reset_set_system_override, NULL,
	-1, "do_hierarchy", 3, 0, 0, 0, 0, "",
	"Also reset all the dependencies of this override to match their reference linked IDs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_IDOverrideLibrary_reset_set_system_override = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibrary_reset_do_hierarchy,
	-1, "set_system_override", 3, 0, 0, 0, 0, "",
	"Reset all user-editable overrides as (non-editable) system overrides",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_IDOverrideLibrary_reset_func = {
	{(FunctionRNA *)&rna_IDOverrideLibrary_destroy_func, (FunctionRNA *)&rna_IDOverrideLibrary_operations_update_func,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibrary_reset_do_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_reset_set_system_override}},
	"reset", 2068, "Reset this override to match again its linked reference ID",
	IDOverrideLibrary_reset_call,
	NULL
};

BoolPropertyRNA rna_IDOverrideLibrary_destroy_do_hierarchy = {
	{NULL, NULL,
	-1, "do_hierarchy", 3, 0, 0, 0, 0, "",
	"Also delete all the dependencies of this override and remap their usages to their reference linked IDs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_IDOverrideLibrary_destroy_func = {
	{NULL, (FunctionRNA *)&rna_IDOverrideLibrary_reset_func,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibrary_destroy_do_hierarchy, (PropertyRNA *)&rna_IDOverrideLibrary_destroy_do_hierarchy}},
	"destroy", 2068, "Delete this override ID and remap its usages to its linked reference ID instead",
	IDOverrideLibrary_destroy_call,
	NULL
};

StructRNA RNA_IDOverrideLibrary = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryProperties, (ContainerRNA *)&RNA_ID,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibrary_rna_properties, (PropertyRNA *)&rna_IDOverrideLibrary_properties}},
	"IDOverrideLibrary", NULL, NULL, 516, NULL, "ID Library Override",
	"Struct gathering all data needed by overridden linked IDs",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDOverrideLibrary_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_IDOverrideLibrary_operations_update_func, (FunctionRNA *)&rna_IDOverrideLibrary_destroy_func}
};

/* Override Properties */
CollectionPropertyRNA rna_IDOverrideLibraryProperties_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryProperties_rna_properties_begin, IDOverrideLibraryProperties_rna_properties_next, IDOverrideLibraryProperties_rna_properties_end, IDOverrideLibraryProperties_rna_properties_get, NULL, NULL, IDOverrideLibraryProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_IDOverrideLibraryProperties_add_property = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_add_rna_path, NULL,
	-1, "property", 8388608, 0, 2, 0, 0, "New Property",
	"Newly created override property or existing one",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_IDOverrideLibraryProperty
};

StringPropertyRNA rna_IDOverrideLibraryProperties_add_rna_path = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibraryProperties_add_property,
	-1, "rna_path", 262145, 0, 1, 0, 0, "RNA Path",
	"RNA-Path of the property to add",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 256, ""
};

FunctionRNA rna_IDOverrideLibraryProperties_add_func = {
	{(FunctionRNA *)&rna_IDOverrideLibraryProperties_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_add_property, (PropertyRNA *)&rna_IDOverrideLibraryProperties_add_rna_path}},
	"add", 16, "Add a property to the override library when it doesn\'t exist yet",
	IDOverrideLibraryProperties_add_call,
	(PropertyRNA *)&rna_IDOverrideLibraryProperties_add_property
};

PointerPropertyRNA rna_IDOverrideLibraryProperties_remove_property = {
	{NULL, NULL,
	-1, "property", 8388608, 0, 1, 0, 0, "Property",
	"Override property to be deleted",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_IDOverrideLibraryProperty
};

FunctionRNA rna_IDOverrideLibraryProperties_remove_func = {
	{NULL, (FunctionRNA *)&rna_IDOverrideLibraryProperties_add_func,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_remove_property, (PropertyRNA *)&rna_IDOverrideLibraryProperties_remove_property}},
	"remove", 16, "Remove and delete a property",
	IDOverrideLibraryProperties_remove_call,
	NULL
};

StructRNA RNA_IDOverrideLibraryProperties = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryProperty, (ContainerRNA *)&RNA_IDOverrideLibrary,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_type}},
	"IDOverrideLibraryProperties", NULL, NULL, 516, NULL, "Override Properties",
	"Collection of override properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDOverrideLibraryProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_IDOverrideLibraryProperties_add_func, (FunctionRNA *)&rna_IDOverrideLibraryProperties_remove_func}
};

/* ID Library Override Property */
CollectionPropertyRNA rna_IDOverrideLibraryProperty_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryProperty_rna_properties_begin, IDOverrideLibraryProperty_rna_properties_next, IDOverrideLibraryProperty_rna_properties_end, IDOverrideLibraryProperty_rna_properties_get, NULL, NULL, IDOverrideLibraryProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryProperty_rna_type = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_path, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_IDOverrideLibraryProperty_rna_path = {
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_operations, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_type,
	-1, "rna_path", 262144, 0, 0, 0, 0, "RNA Path",
	"RNA path leading to that property, from owning ID",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryProperty_rna_path_get, IDOverrideLibraryProperty_rna_path_length, NULL, NULL, NULL, NULL, NULL, 0, 2147483647, ""
};

CollectionPropertyRNA rna_IDOverrideLibraryProperty_operations = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_path,
	-1, "operations", 0, 0, 0, 0, 0, "Operations",
	"List of overriding operations for a property",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 17301504, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDOverrideLibraryPropertyOperations},
	IDOverrideLibraryProperty_operations_begin, IDOverrideLibraryProperty_operations_next, IDOverrideLibraryProperty_operations_end, IDOverrideLibraryProperty_operations_get, NULL, IDOverrideLibraryProperty_operations_lookup_int, NULL, NULL, &RNA_IDOverrideLibraryPropertyOperation
};

StructRNA RNA_IDOverrideLibraryProperty = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperations, (ContainerRNA *)&RNA_IDOverrideLibraryProperties,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryProperty_operations}},
	"IDOverrideLibraryProperty", NULL, NULL, 516, NULL, "ID Library Override Property",
	"Description of an overridden property",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDOverrideLibraryProperty_rna_properties,
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

/* Override Operations */
CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryPropertyOperations_rna_properties_begin, IDOverrideLibraryPropertyOperations_rna_properties_next, IDOverrideLibraryPropertyOperations_rna_properties_end, IDOverrideLibraryPropertyOperations_rna_properties_get, NULL, NULL, IDOverrideLibraryPropertyOperations_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_rna_type = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryPropertyOperations_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperations_add_operation_items[8] = {
	{0, "NOOP", 0, "No-Op", "Does nothing, prevents adding actual overrides (NOT USED)"},
	{1, "REPLACE", 0, "Replace", "Replace value of reference by overriding one"},
	{101, "DIFF_ADD", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{102, "DIFF_SUB", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{103, "FACT_MULTIPLY", 0, "Factor", "Stores and apply multiplication factor between reference and local value (NOT USED)"},
	{201, "INSERT_AFTER", 0, "Insert After", "Insert a new item into collection after the one referenced in subitem_reference_name or _index"},
	{202, "INSERT_BEFORE", 0, "Insert Before", "Insert a new item into collection after the one referenced in subitem_reference_name or _index (NOT USED)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_operation = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name, NULL,
	-1, "operation", 3, 0, 1, 0, 0, "Operation",
	"What override operation is performed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_IDOverrideLibraryPropertyOperations_add_operation_items, 7, 1
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_operation,
	-1, "subitem_reference_name", 262145, 0, 0, 0, 0, "Subitem Reference Name",
	"Used to handle insertions into collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 2147483647, ""
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_name,
	-1, "subitem_local_name", 262145, 0, 0, 0, 0, "Subitem Local Name",
	"Used to handle insertions into collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 2147483647, ""
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_name,
	-1, "subitem_reference_index", 3, 0, 0, 0, 0, "Subitem Reference Index",
	"Used to handle insertions into collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_property, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_reference_index,
	-1, "subitem_local_index", 3, 0, 0, 0, 0, "Subitem Local Index",
	"Used to handle insertions into collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_add_property = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_subitem_local_index,
	-1, "property", 8388608, 0, 2, 0, 0, "New Operation",
	"Created operation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_IDOverrideLibraryPropertyOperation
};

FunctionRNA rna_IDOverrideLibraryPropertyOperations_add_func = {
	{(FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_operation, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_property}},
	"add", 16, "Add a new operation",
	IDOverrideLibraryPropertyOperations_add_call,
	(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_add_property
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperations_remove_operation = {
	{NULL, NULL,
	-1, "operation", 8388608, 0, 1, 0, 0, "Operation",
	"Override operation to be deleted",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_IDOverrideLibraryPropertyOperation
};

FunctionRNA rna_IDOverrideLibraryPropertyOperations_remove_func = {
	{NULL, (FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_add_func,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_operation, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_operation}},
	"remove", 16, "Remove and delete an operation",
	IDOverrideLibraryPropertyOperations_remove_call,
	NULL
};

StructRNA RNA_IDOverrideLibraryPropertyOperations = {
	{(ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperation, (ContainerRNA *)&RNA_IDOverrideLibraryProperty,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_type}},
	"IDOverrideLibraryPropertyOperations", NULL, NULL, 516, NULL, "Override Operations",
	"Collection of override operations",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperations_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_add_func, (FunctionRNA *)&rna_IDOverrideLibraryPropertyOperations_remove_func}
};

/* ID Library Override Property Operation */
CollectionPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_properties = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryPropertyOperation_rna_properties_begin, IDOverrideLibraryPropertyOperation_rna_properties_next, IDOverrideLibraryPropertyOperation_rna_properties_end, IDOverrideLibraryPropertyOperation_rna_properties_get, NULL, NULL, IDOverrideLibraryPropertyOperation_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDOverrideLibraryPropertyOperation_rna_type = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_operation, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryPropertyOperation_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperation_operation_items[8] = {
	{0, "NOOP", 0, "No-Op", "Does nothing, prevents adding actual overrides (NOT USED)"},
	{1, "REPLACE", 0, "Replace", "Replace value of reference by overriding one"},
	{101, "DIFF_ADD", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{102, "DIFF_SUB", 0, "Differential", "Stores and apply difference between reference and local value (NOT USED)"},
	{103, "FACT_MULTIPLY", 0, "Factor", "Stores and apply multiplication factor between reference and local value (NOT USED)"},
	{201, "INSERT_AFTER", 0, "Insert After", "Insert a new item into collection after the one referenced in subitem_reference_name or _index"},
	{202, "INSERT_BEFORE", 0, "Insert Before", "Insert a new item into collection after the one referenced in subitem_reference_name or _index (NOT USED)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_operation = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_flag, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_type,
	-1, "operation", 2, 0, 0, 4, 0, "Operation",
	"What override operation is performed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, operation), 1, NULL},
	IDOverrideLibraryPropertyOperation_operation_get, NULL, NULL, NULL, NULL, rna_IDOverrideLibraryPropertyOperation_operation_items, 7, 1
};

static const EnumPropertyItem rna_IDOverrideLibraryPropertyOperation_flag_items[3] = {
	{1, "MANDATORY", 0, "Mandatory", "For templates, prevents the user from removing predefined operation (NOT USED)"},
	{2, "LOCKED", 0, "Locked", "Prevents the user from modifying that override operation (NOT USED)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_IDOverrideLibraryPropertyOperation_flag = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_operation,
	-1, "flag", 2, 0, 0, 4, 0, "Flags",
	"Optional flags (NOT USED)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, flag), 1, NULL},
	IDOverrideLibraryPropertyOperation_flag_get, NULL, NULL, NULL, NULL, rna_IDOverrideLibraryPropertyOperation_flag_items, 2, 1
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_name, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_flag,
	-1, "subitem_reference_name", 262144, 0, 0, 0, 0, "Subitem Reference Name",
	"Used to handle insertions into collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryPropertyOperation_subitem_reference_name_get, IDOverrideLibraryPropertyOperation_subitem_reference_name_length, NULL, NULL, NULL, NULL, NULL, 0, 2147483647, ""
};

StringPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_name = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_name,
	-1, "subitem_local_name", 262144, 0, 0, 0, 0, "Subitem Local Name",
	"Used to handle insertions into collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDOverrideLibraryPropertyOperation_subitem_local_name_get, IDOverrideLibraryPropertyOperation_subitem_local_name_length, NULL, NULL, NULL, NULL, NULL, 0, 2147483647, ""
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_reference_index = {
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_index, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_name,
	-1, "subitem_reference_index", 2, 0, 0, 4, 0, "Subitem Reference Index",
	"Used to handle insertions into collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, subitem_reference_index), 0, NULL},
	IDOverrideLibraryPropertyOperation_subitem_reference_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

IntPropertyRNA rna_IDOverrideLibraryPropertyOperation_subitem_local_index = {
	{NULL, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_reference_index,
	-1, "subitem_local_index", 2, 0, 0, 4, 0, "Subitem Local Index",
	"Used to handle insertions into collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(IDOverrideLibraryPropertyOperation, subitem_local_index), 0, NULL},
	IDOverrideLibraryPropertyOperation_subitem_local_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, INT_MAX, -1, INT_MAX, 1, -1, NULL
};

StructRNA RNA_IDOverrideLibraryPropertyOperation = {
	{(ContainerRNA *)&RNA_ImagePreview, (ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperations,
	NULL,
	{(PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_subitem_local_index}},
	"IDOverrideLibraryPropertyOperation", NULL, NULL, 516, NULL, "ID Library Override Property Operation",
	"Description of an override operation over an overridden property",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDOverrideLibraryPropertyOperation_rna_properties,
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

/* Image Preview */
CollectionPropertyRNA rna_ImagePreview_rna_properties = {
	{(PropertyRNA *)&rna_ImagePreview_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePreview_rna_properties_begin, ImagePreview_rna_properties_next, ImagePreview_rna_properties_end, ImagePreview_rna_properties_get, NULL, NULL, ImagePreview_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ImagePreview_rna_type = {
	{(PropertyRNA *)&rna_ImagePreview_is_image_custom, (PropertyRNA *)&rna_ImagePreview_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePreview_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_ImagePreview_is_image_custom = {
	{(PropertyRNA *)&rna_ImagePreview_image_size, (PropertyRNA *)&rna_ImagePreview_rna_type,
	-1, "is_image_custom", 3, 0, 0, 0, 0, "Custom Image",
	"True if this preview image has been modified by py script,and is no more auto-generated by Blender",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePreview_is_image_custom_get, ImagePreview_is_image_custom_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_ImagePreview_image_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePreview_image_size = {
	{(PropertyRNA *)&rna_ImagePreview_image_pixels, (PropertyRNA *)&rna_ImagePreview_is_image_custom,
	-1, "image_size", 3, 0, 0, 0, 0, "Image Size",
	"Width and height in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ImagePreview_image_size_get, ImagePreview_image_size_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_ImagePreview_image_size_default
};

IntPropertyRNA rna_ImagePreview_image_pixels = {
	{(PropertyRNA *)&rna_ImagePreview_image_pixels_float, (PropertyRNA *)&rna_ImagePreview_image_size,
	-1, "image_pixels", 131075, 0, 0, 0, 0, "Image Pixels",
	"Image pixels, as bytes (always 32-bit RGBA)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, rna_ImagePreview_image_pixels_get_length, 1, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ImagePreview_image_pixels_get, ImagePreview_image_pixels_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_ImagePreview_image_pixels_float = {
	{(PropertyRNA *)&rna_ImagePreview_is_icon_custom, (PropertyRNA *)&rna_ImagePreview_image_pixels,
	-1, "image_pixels_float", 131075, 0, 0, 0, 0, "Float Image Pixels",
	"Image pixels components, as floats (RGBA concatenated values)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_ImagePreview_image_pixels_float_get_length, 1, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ImagePreview_image_pixels_float_get, ImagePreview_image_pixels_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ImagePreview_is_icon_custom = {
	{(PropertyRNA *)&rna_ImagePreview_icon_size, (PropertyRNA *)&rna_ImagePreview_image_pixels_float,
	-1, "is_icon_custom", 3, 0, 0, 0, 0, "Custom Icon",
	"True if this preview icon has been modified by py script,and is no more auto-generated by Blender",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePreview_is_icon_custom_get, ImagePreview_is_icon_custom_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_ImagePreview_icon_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePreview_icon_size = {
	{(PropertyRNA *)&rna_ImagePreview_icon_pixels, (PropertyRNA *)&rna_ImagePreview_is_icon_custom,
	-1, "icon_size", 3, 0, 0, 0, 0, "Icon Size",
	"Width and height in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ImagePreview_icon_size_get, ImagePreview_icon_size_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_ImagePreview_icon_size_default
};

IntPropertyRNA rna_ImagePreview_icon_pixels = {
	{(PropertyRNA *)&rna_ImagePreview_icon_pixels_float, (PropertyRNA *)&rna_ImagePreview_icon_size,
	-1, "icon_pixels", 131075, 0, 0, 0, 0, "Icon Pixels",
	"Icon pixels, as bytes (always 32-bit RGBA)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, rna_ImagePreview_icon_pixels_get_length, 1, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ImagePreview_icon_pixels_get, ImagePreview_icon_pixels_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_ImagePreview_icon_pixels_float = {
	{(PropertyRNA *)&rna_ImagePreview_icon_id, (PropertyRNA *)&rna_ImagePreview_icon_pixels,
	-1, "icon_pixels_float", 131075, 0, 0, 0, 0, "Float Icon Pixels",
	"Icon pixels components, as floats (RGBA concatenated values)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, rna_ImagePreview_icon_pixels_float_get_length, 1, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ImagePreview_icon_pixels_float_get, ImagePreview_icon_pixels_float_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ImagePreview_icon_id = {
	{NULL, (PropertyRNA *)&rna_ImagePreview_icon_pixels_float,
	-1, "icon_id", 2, 0, 0, 0, 0, "Icon ID",
	"Unique integer identifying this preview as an icon (zero means invalid)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ImagePreview_icon_id_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_ImagePreview_reload_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"reload", 0, "Reload the preview from its source path",
	ImagePreview_reload_call,
	NULL
};

StructRNA RNA_ImagePreview = {
	{(ContainerRNA *)&RNA_PropertyGroupItem, (ContainerRNA *)&RNA_IDOverrideLibraryPropertyOperation,
	NULL,
	{(PropertyRNA *)&rna_ImagePreview_rna_properties, (PropertyRNA *)&rna_ImagePreview_icon_id}},
	"ImagePreview", NULL, NULL, 516, NULL, "Image Preview",
	"Preview image and icon",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ImagePreview_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ImagePreview_reload_func, (FunctionRNA *)&rna_ImagePreview_reload_func}
};

/* ID Property */
CollectionPropertyRNA rna_PropertyGroupItem_rna_properties = {
	{(PropertyRNA *)&rna_PropertyGroupItem_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PropertyGroupItem_rna_properties_begin, PropertyGroupItem_rna_properties_next, PropertyGroupItem_rna_properties_end, PropertyGroupItem_rna_properties_get, NULL, NULL, PropertyGroupItem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PropertyGroupItem_rna_type = {
	{(PropertyRNA *)&rna_PropertyGroupItem_string, (PropertyRNA *)&rna_PropertyGroupItem_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PropertyGroupItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PropertyGroupItem_string = {
	{(PropertyRNA *)&rna_PropertyGroupItem_int, (PropertyRNA *)&rna_PropertyGroupItem_rna_type,
	-1, "string", 263169, 0, 0, 0, 0, "string",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_PropertyGroupItem_int = {
	{(PropertyRNA *)&rna_PropertyGroupItem_int_array, (PropertyRNA *)&rna_PropertyGroupItem_string,
	-1, "int", 1027, 0, 0, 0, 0, "int",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static int rna_PropertyGroupItem_int_array_default[1] = {
	0
};

IntPropertyRNA rna_PropertyGroupItem_int_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_float, (PropertyRNA *)&rna_PropertyGroupItem_int,
	-1, "int_array", 1027, 0, 0, 0, 0, "int_array",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_PropertyGroupItem_int_array_default
};

FloatPropertyRNA rna_PropertyGroupItem_float = {
	{(PropertyRNA *)&rna_PropertyGroupItem_float_array, (PropertyRNA *)&rna_PropertyGroupItem_int_array,
	-1, "float", 1027, 0, 0, 0, 0, "float",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_PropertyGroupItem_float_array_default[1] = {
	0.0f
};

FloatPropertyRNA rna_PropertyGroupItem_float_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_double, (PropertyRNA *)&rna_PropertyGroupItem_float,
	-1, "float_array", 1027, 0, 0, 0, 0, "float_array",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PropertyGroupItem_float_array_default
};

FloatPropertyRNA rna_PropertyGroupItem_double = {
	{(PropertyRNA *)&rna_PropertyGroupItem_double_array, (PropertyRNA *)&rna_PropertyGroupItem_float_array,
	-1, "double", 1027, 0, 0, 0, 0, "double",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_PropertyGroupItem_double_array_default[1] = {
	0.0f
};

FloatPropertyRNA rna_PropertyGroupItem_double_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_group, (PropertyRNA *)&rna_PropertyGroupItem_double,
	-1, "double_array", 1027, 0, 0, 0, 0, "double_array",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PropertyGroupItem_double_array_default
};

PointerPropertyRNA rna_PropertyGroupItem_group = {
	{(PropertyRNA *)&rna_PropertyGroupItem_collection, (PropertyRNA *)&rna_PropertyGroupItem_double_array,
	-1, "group", 8389632, 0, 0, 0, 0, "group",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PropertyGroup
};

CollectionPropertyRNA rna_PropertyGroupItem_collection = {
	{(PropertyRNA *)&rna_PropertyGroupItem_idp_array, (PropertyRNA *)&rna_PropertyGroupItem_group,
	-1, "collection", 1024, 0, 0, 0, 0, "collection",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, &RNA_PropertyGroup
};

CollectionPropertyRNA rna_PropertyGroupItem_idp_array = {
	{(PropertyRNA *)&rna_PropertyGroupItem_id, (PropertyRNA *)&rna_PropertyGroupItem_collection,
	-1, "idp_array", 1024, 0, 0, 8, 0, "idp_array",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PropertyGroupItem_idp_array_begin, PropertyGroupItem_idp_array_next, PropertyGroupItem_idp_array_end, PropertyGroupItem_idp_array_get, PropertyGroupItem_idp_array_length, NULL, NULL, NULL, &RNA_PropertyGroup
};

PointerPropertyRNA rna_PropertyGroupItem_id = {
	{NULL, (PropertyRNA *)&rna_PropertyGroupItem_idp_array,
	-1, "id", 8389761, 0, 0, 0, 0, "id",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

StructRNA RNA_PropertyGroupItem = {
	{(ContainerRNA *)&RNA_PropertyGroup, (ContainerRNA *)&RNA_ImagePreview,
	NULL,
	{(PropertyRNA *)&rna_PropertyGroupItem_rna_properties, (PropertyRNA *)&rna_PropertyGroupItem_id}},
	"PropertyGroupItem", NULL, NULL, 516, NULL, "ID Property",
	"Property that stores arbitrary, user defined properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PropertyGroupItem_rna_properties,
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

/* ID Property Group */
CollectionPropertyRNA rna_PropertyGroup_rna_properties = {
	{(PropertyRNA *)&rna_PropertyGroup_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PropertyGroup_rna_properties_begin, PropertyGroup_rna_properties_next, PropertyGroup_rna_properties_end, PropertyGroup_rna_properties_get, NULL, NULL, PropertyGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PropertyGroup_rna_type = {
	{(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PropertyGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PropertyGroup_name = {
	{NULL, (PropertyRNA *)&rna_PropertyGroup_rna_type,
	-1, "name", 263169, 0, 0, 0, 0, "Name",
	"Unique name used in the code and scripting",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StructRNA RNA_PropertyGroup = {
	{(ContainerRNA *)&RNA_IDMaterials, (ContainerRNA *)&RNA_PropertyGroupItem,
	NULL,
	{(PropertyRNA *)&rna_PropertyGroup_rna_properties, (PropertyRNA *)&rna_PropertyGroup_name}},
	"PropertyGroup", NULL, NULL, 516, NULL, "ID Property Group",
	"Group of ID properties",
	"*", 17,
	(PropertyRNA *)&rna_PropertyGroup_name, (PropertyRNA *)&rna_PropertyGroup_rna_properties,
	NULL,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	NULL,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* ID Materials */
CollectionPropertyRNA rna_IDMaterials_rna_properties = {
	{(PropertyRNA *)&rna_IDMaterials_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDMaterials_rna_properties_begin, IDMaterials_rna_properties_next, IDMaterials_rna_properties_end, IDMaterials_rna_properties_get, NULL, NULL, IDMaterials_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDMaterials_rna_type = {
	{NULL, (PropertyRNA *)&rna_IDMaterials_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDMaterials_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_IDMaterials_append_material = {
	{NULL, NULL,
	-1, "material", 8388736, 0, 1, 0, 0, "",
	"Material to add",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_IDMaterials_append_func = {
	{(FunctionRNA *)&rna_IDMaterials_pop_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_IDMaterials_append_material, (PropertyRNA *)&rna_IDMaterials_append_material}},
	"append", 4, "Add a new material to the data-block",
	IDMaterials_append_call,
	NULL
};

IntPropertyRNA rna_IDMaterials_pop_index = {
	{(PropertyRNA *)&rna_IDMaterials_pop_material, NULL,
	-1, "index", 3, 0, 0, 0, 0, "",
	"Index of material to remove",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32766, -32766, 32766, 1, -1, NULL
};

PointerPropertyRNA rna_IDMaterials_pop_material = {
	{NULL, (PropertyRNA *)&rna_IDMaterials_pop_index,
	-1, "material", 8388736, 0, 2, 0, 0, "",
	"Material to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_IDMaterials_pop_func = {
	{(FunctionRNA *)&rna_IDMaterials_clear_func, (FunctionRNA *)&rna_IDMaterials_append_func,
	NULL,
	{(PropertyRNA *)&rna_IDMaterials_pop_index, (PropertyRNA *)&rna_IDMaterials_pop_material}},
	"pop", 20, "Remove a material from the data-block",
	IDMaterials_pop_call,
	(PropertyRNA *)&rna_IDMaterials_pop_material
};

FunctionRNA rna_IDMaterials_clear_func = {
	{NULL, (FunctionRNA *)&rna_IDMaterials_pop_func,
	NULL,
	{NULL, NULL}},
	"clear", 4, "Remove all materials from the data-block",
	IDMaterials_clear_call,
	NULL
};

StructRNA RNA_IDMaterials = {
	{(ContainerRNA *)&RNA_Library, (ContainerRNA *)&RNA_PropertyGroup,
	NULL,
	{(PropertyRNA *)&rna_IDMaterials_rna_properties, (PropertyRNA *)&rna_IDMaterials_rna_type}},
	"IDMaterials", NULL, NULL, 516, NULL, "ID Materials",
	"Collection of materials",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDMaterials_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_IDMaterials_append_func, (FunctionRNA *)&rna_IDMaterials_clear_func}
};

/* Library */
StringPropertyRNA rna_Library_filepath = {
	{(PropertyRNA *)&rna_Library_parent, NULL,
	-1, "filepath", 262145, 0, 0, 0, 0, "File Path",
	"Path to the library .blend file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Library_filepath_get, Library_filepath_length, Library_filepath_set, NULL, NULL, NULL, NULL, 0, 1024, ""
};

PointerPropertyRNA rna_Library_parent = {
	{(PropertyRNA *)&rna_Library_packed_file, (PropertyRNA *)&rna_Library_filepath,
	-1, "parent", 8388800, 2, 0, 0, 0, "Parent",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Library_parent_get, NULL, NULL, NULL,&RNA_Library
};

PointerPropertyRNA rna_Library_packed_file = {
	{(PropertyRNA *)&rna_Library_version, (PropertyRNA *)&rna_Library_parent,
	-1, "packed_file", 8388608, 0, 0, 0, 0, "Packed File",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Library_packed_file_get, NULL, NULL, NULL,&RNA_PackedFile
};

static int rna_Library_version_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Library_version = {
	{NULL, (PropertyRNA *)&rna_Library_packed_file,
	-1, "version", 8388610, 0, 0, 0, 0, "Version",
	"Version of Blender the library .blend was saved with",
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Library_version_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, rna_Library_version_default
};

FunctionRNA rna_Library_reload_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"reload", 24, "Reload this library and all its linked data-blocks",
	Library_reload_call,
	NULL
};

StructRNA RNA_Library = {
	{(ContainerRNA *)&RNA_LibraryWeakReference, (ContainerRNA *)&RNA_IDMaterials,
	NULL,
	{(PropertyRNA *)&rna_Library_filepath, (PropertyRNA *)&rna_Library_version}},
	"Library", NULL, NULL, 519, NULL, "Library",
	"External .blend file from which data is linked",
	"*", 170,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Library_reload_func, (FunctionRNA *)&rna_Library_reload_func}
};

/* LibraryWeakReference */
CollectionPropertyRNA rna_LibraryWeakReference_rna_properties = {
	{(PropertyRNA *)&rna_LibraryWeakReference_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LibraryWeakReference_rna_properties_begin, LibraryWeakReference_rna_properties_next, LibraryWeakReference_rna_properties_end, LibraryWeakReference_rna_properties_get, NULL, NULL, LibraryWeakReference_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LibraryWeakReference_rna_type = {
	{(PropertyRNA *)&rna_LibraryWeakReference_filepath, (PropertyRNA *)&rna_LibraryWeakReference_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LibraryWeakReference_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_LibraryWeakReference_filepath = {
	{(PropertyRNA *)&rna_LibraryWeakReference_id_name, (PropertyRNA *)&rna_LibraryWeakReference_rna_type,
	-1, "filepath", 262144, 0, 0, 0, 0, "File Path",
	"Path to the library .blend file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LibraryWeakReference_filepath_get, LibraryWeakReference_filepath_length, NULL, NULL, NULL, NULL, NULL, 0, 1024, ""
};

StringPropertyRNA rna_LibraryWeakReference_id_name = {
	{NULL, (PropertyRNA *)&rna_LibraryWeakReference_filepath,
	-1, "id_name", 262144, 0, 0, 0, 0, "ID name",
	"Full ID name in the library .blend file (including the two leading \'id type\' chars)",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {66, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LibraryWeakReference_id_name_get, LibraryWeakReference_id_name_length, NULL, NULL, NULL, NULL, NULL, 0, 66, ""
};

StructRNA RNA_LibraryWeakReference = {
	{(ContainerRNA *)&RNA_IDPropertyWrapPtr, (ContainerRNA *)&RNA_Library,
	NULL,
	{(PropertyRNA *)&rna_LibraryWeakReference_rna_properties, (PropertyRNA *)&rna_LibraryWeakReference_id_name}},
	"LibraryWeakReference", NULL, NULL, 516, NULL, "LibraryWeakReference",
	"Read-only external reference to a linked data-block and its library file",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LibraryWeakReference_rna_properties,
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

/* IDPropertyWrapPtr */
CollectionPropertyRNA rna_IDPropertyWrapPtr_rna_properties = {
	{(PropertyRNA *)&rna_IDPropertyWrapPtr_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDPropertyWrapPtr_rna_properties_begin, IDPropertyWrapPtr_rna_properties_next, IDPropertyWrapPtr_rna_properties_end, IDPropertyWrapPtr_rna_properties_get, NULL, NULL, IDPropertyWrapPtr_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IDPropertyWrapPtr_rna_type = {
	{NULL, (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IDPropertyWrapPtr_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_IDPropertyWrapPtr = {
	{(ContainerRNA *)&RNA_Texture, (ContainerRNA *)&RNA_LibraryWeakReference,
	NULL,
	{(PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties, (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_type}},
	"IDPropertyWrapPtr", NULL, NULL, 644, NULL, "IDPropertyWrapPtr",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IDPropertyWrapPtr_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_IDPropertyWrapPtr_idprops,
	{NULL, NULL}
};

#include "rna_define.c"

BlenderRNA BLENDER_RNA = {
	.structs = {&RNA_Struct, &RNA_XrEventData},
	.structs_map = NULL,
	.structs_len = 0,
};

