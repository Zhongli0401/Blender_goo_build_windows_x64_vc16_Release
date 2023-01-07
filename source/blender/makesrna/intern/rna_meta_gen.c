
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

#include "rna_meta.c"
#include "rna_meta_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_MetaElement_rna_properties;
PointerPropertyRNA rna_MetaElement_rna_type;
EnumPropertyRNA rna_MetaElement_type;
FloatPropertyRNA rna_MetaElement_co;
FloatPropertyRNA rna_MetaElement_rotation;
FloatPropertyRNA rna_MetaElement_radius;
FloatPropertyRNA rna_MetaElement_size_x;
FloatPropertyRNA rna_MetaElement_size_y;
FloatPropertyRNA rna_MetaElement_size_z;
FloatPropertyRNA rna_MetaElement_stiffness;
BoolPropertyRNA rna_MetaElement_use_negative;
BoolPropertyRNA rna_MetaElement_use_scale_stiffness;
BoolPropertyRNA rna_MetaElement_select;
BoolPropertyRNA rna_MetaElement_hide;


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

CollectionPropertyRNA rna_MetaBall_elements;
EnumPropertyRNA rna_MetaBall_update_method;
FloatPropertyRNA rna_MetaBall_resolution;
FloatPropertyRNA rna_MetaBall_render_resolution;
FloatPropertyRNA rna_MetaBall_threshold;
BoolPropertyRNA rna_MetaBall_use_auto_texspace;
FloatPropertyRNA rna_MetaBall_texspace_location;
FloatPropertyRNA rna_MetaBall_texspace_size;
CollectionPropertyRNA rna_MetaBall_materials;
BoolPropertyRNA rna_MetaBall_is_editmode;
PointerPropertyRNA rna_MetaBall_animation_data;

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


extern FunctionRNA rna_MetaBall_transform_func;
extern FloatPropertyRNA rna_MetaBall_transform_matrix;

extern FunctionRNA rna_MetaBall_update_gpu_tag_func;


CollectionPropertyRNA rna_MetaBallElements_rna_properties;
PointerPropertyRNA rna_MetaBallElements_rna_type;
PointerPropertyRNA rna_MetaBallElements_active;

extern FunctionRNA rna_MetaBallElements_new_func;
extern EnumPropertyRNA rna_MetaBallElements_new_type;
extern PointerPropertyRNA rna_MetaBallElements_new_element;

extern FunctionRNA rna_MetaBallElements_remove_func;
extern PointerPropertyRNA rna_MetaBallElements_remove_element;

extern FunctionRNA rna_MetaBallElements_clear_func;

static PointerRNA MetaElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MetaElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MetaElement_rna_properties_get(iter);
    }
}

void MetaElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MetaElement_rna_properties_get(iter);
    }
}

void MetaElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MetaElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MetaElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MetaElement_type_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (int)(data->type);
}

void MetaElement_type_set(PointerRNA *ptr, int value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->type = value;
}

void MetaElement_co_get(PointerRNA *ptr, float values[3])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void MetaElement_co_set(PointerRNA *ptr, const float values[3])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

void MetaElement_rotation_get(PointerRNA *ptr, float values[4])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

void MetaElement_rotation_set(PointerRNA *ptr, const float values[4])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

float MetaElement_radius_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->rad);
}

void MetaElement_radius_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->rad = CLAMPIS(value, 0.0f, FLT_MAX);
}

float MetaElement_size_x_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expx);
}

void MetaElement_size_x_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->expx = CLAMPIS(value, 0.0f, 20.0f);
}

float MetaElement_size_y_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expy);
}

void MetaElement_size_y_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->expy = CLAMPIS(value, 0.0f, 20.0f);
}

float MetaElement_size_z_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expz);
}

void MetaElement_size_z_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->expz = CLAMPIS(value, 0.0f, 20.0f);
}

float MetaElement_stiffness_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->s);
}

void MetaElement_stiffness_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->s = CLAMPIS(value, 0.0f, 10.0f);
}

bool MetaElement_use_negative_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MetaElement_use_negative_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool MetaElement_use_scale_stiffness_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return !(((data->flag) & 16) != 0);
}

void MetaElement_use_scale_stiffness_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (!value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool MetaElement_select_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MetaElement_select_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool MetaElement_hide_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void MetaElement_hide_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

static PointerRNA MetaBall_elements_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MetaElement, rna_iterator_listbase_get(iter));
}

void MetaBall_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaBall_elements;

    rna_iterator_listbase_begin(iter, &data->elems, NULL);

    if (iter->valid) {
        iter->ptr = MetaBall_elements_get(iter);
    }
}

void MetaBall_elements_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = MetaBall_elements_get(iter);
    }
}

void MetaBall_elements_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MetaBall_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MetaBall_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaBall_elements_get(&iter); }
    }

    MetaBall_elements_end(&iter);

    return found;
}

int MetaBall_update_method_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (int)(data->flag);
}

void MetaBall_update_method_set(PointerRNA *ptr, int value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->flag = value;
}

float MetaBall_resolution_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->wiresize);
}

void MetaBall_resolution_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->wiresize = CLAMPIS(value, 0.0049999999f, 10000.0f);
}

float MetaBall_render_resolution_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->rendersize);
}

void MetaBall_render_resolution_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->rendersize = CLAMPIS(value, 0.0049999999f, 10000.0f);
}

float MetaBall_threshold_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->thresh);
}

void MetaBall_threshold_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->thresh = CLAMPIS(value, 0.0f, 5.0f);
}

bool MetaBall_use_auto_texspace_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (((data->texflag) & 1) != 0);
}

void MetaBall_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    if (value) { data->texflag |= 1; }
    else { data->texflag &= ~1; }
}

void MetaBall_texspace_location_get(PointerRNA *ptr, float values[3])
{
    rna_Meta_texspace_loc_get(ptr, values);
}

void MetaBall_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    rna_Meta_texspace_loc_set(ptr, values);
}

void MetaBall_texspace_size_get(PointerRNA *ptr, float values[3])
{
    rna_Meta_texspace_size_get(ptr, values);
}

void MetaBall_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    rna_Meta_texspace_size_set(ptr, values);
}

int MetaBall_materials_length(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA MetaBall_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void MetaBall_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaBall_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

    if (iter->valid) {
        iter->ptr = MetaBall_materials_get(iter);
    }
}

void MetaBall_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MetaBall_materials_get(iter);
    }
}

void MetaBall_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MetaBall_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MetaBall_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaBall_materials_get(&iter); }
    }

    MetaBall_materials_end(&iter);

    return found;
}

int MetaBall_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MetaBall_materials_begin(&iter, ptr);

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
        MetaBall_materials_next(&iter);
    }
    MetaBall_materials_end(&iter);

    return found;
}

bool MetaBall_is_editmode_get(PointerRNA *ptr)
{
    return rna_Meta_is_editmode_get(ptr);
}

PointerRNA MetaBall_animation_data_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA MetaBallElements_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MetaBallElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MetaBallElements_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MetaBallElements_rna_properties_get(iter);
    }
}

void MetaBallElements_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MetaBallElements_rna_properties_get(iter);
    }
}

void MetaBallElements_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MetaBallElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MetaBallElements_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA MetaBallElements_active_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MetaElement, data->lastelem);
}


void MetaBall_transform_func(struct MetaBall *_self, float matrix[16])
{
	rna_Meta_transform(_self, matrix);
}

void MetaBall_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	float *matrix;
	char *_data;
	
	_self = (struct MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	
	rna_Meta_transform(_self, matrix);
}

void MetaBall_update_gpu_tag_func(struct MetaBall *_self)
{
	rna_Mball_update_gpu_tag(_self);
}

void MetaBall_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	_self = (struct MetaBall *)_ptr->data;
	
	rna_Mball_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Meta_transform(struct MetaBall *_self, float matrix[16]);
void rna_Mball_update_gpu_tag(struct MetaBall *_self);

struct MetaElem *MetaBallElements_new_func(struct MetaBall *_self, int type)
{
	return rna_MetaBall_elements_new(_self, type);
}

void MetaBallElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	int type;
	struct MetaElem *element;
	char *_data, *_retdata;
	
	_self = (struct MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	element = rna_MetaBall_elements_new(_self, type);
	*((struct MetaElem **)_retdata) = element;
}

void MetaBallElements_remove_func(struct MetaBall *_self, ReportList *reports, struct PointerRNA *element)
{
	rna_MetaBall_elements_remove(_self, reports, element);
}

void MetaBallElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	struct PointerRNA *element;
	char *_data;
	
	_self = (struct MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	element = *((struct PointerRNA **)_data);
	
	rna_MetaBall_elements_remove(_self, reports, element);
}

void MetaBallElements_clear_func(struct MetaBall *_self)
{
	rna_MetaBall_elements_clear(_self);
}

void MetaBallElements_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	_self = (struct MetaBall *)_ptr->data;
	
	rna_MetaBall_elements_clear(_self);
}

/* Repeated prototypes to detect errors */

struct MetaElem *rna_MetaBall_elements_new(struct MetaBall *_self, int type);
void rna_MetaBall_elements_remove(struct MetaBall *_self, ReportList *reports, struct PointerRNA *element);
void rna_MetaBall_elements_clear(struct MetaBall *_self);

/* Metaball Element */
CollectionPropertyRNA rna_MetaElement_rna_properties = {
	{(PropertyRNA *)&rna_MetaElement_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaElement_rna_properties_begin, MetaElement_rna_properties_next, MetaElement_rna_properties_end, MetaElement_rna_properties_get, NULL, NULL, MetaElement_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MetaElement_rna_type = {
	{(PropertyRNA *)&rna_MetaElement_type, (PropertyRNA *)&rna_MetaElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_MetaElement_type = {
	{(PropertyRNA *)&rna_MetaElement_co, (PropertyRNA *)&rna_MetaElement_rna_type,
	-1, "type", 3, 0, 0, 4, 0, "Type",
	"Metaball types",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, type), 1, NULL},
	MetaElement_type_get, MetaElement_type_set, NULL, NULL, NULL, rna_enum_metaelem_type_items, 5, 0
};

static float rna_MetaElement_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaElement_co = {
	{(PropertyRNA *)&rna_MetaElement_rotation, (PropertyRNA *)&rna_MetaElement_type,
	-1, "co", 3, 0, 0, 4, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, x), 5, NULL},
	NULL, NULL, MetaElement_co_get, MetaElement_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaElement_co_default
};

static float rna_MetaElement_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaElement_rotation = {
	{(PropertyRNA *)&rna_MetaElement_radius, (PropertyRNA *)&rna_MetaElement_co,
	-1, "rotation", 3, 0, 0, 4, 0, "Rotation",
	"Normalized quaternion rotation",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_MetaBall_update_rotation, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, quat), 5, NULL},
	NULL, NULL, MetaElement_rotation_get, MetaElement_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaElement_rotation_default
};

FloatPropertyRNA rna_MetaElement_radius = {
	{(PropertyRNA *)&rna_MetaElement_size_x, (PropertyRNA *)&rna_MetaElement_rotation,
	-1, "radius", 3, 0, 0, 4, 0, "Radius",
	"",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, rad), 5, NULL},
	MetaElement_radius_get, MetaElement_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_size_x = {
	{(PropertyRNA *)&rna_MetaElement_size_y, (PropertyRNA *)&rna_MetaElement_radius,
	-1, "size_x", 67108867, 0, 0, 4, 0, "Size X",
	"Size of element, use of components depends on element type",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, expx), 5, NULL},
	MetaElement_size_x_get, MetaElement_size_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_size_y = {
	{(PropertyRNA *)&rna_MetaElement_size_z, (PropertyRNA *)&rna_MetaElement_size_x,
	-1, "size_y", 67108867, 0, 0, 4, 0, "Size Y",
	"Size of element, use of components depends on element type",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, expy), 5, NULL},
	MetaElement_size_y_get, MetaElement_size_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_size_z = {
	{(PropertyRNA *)&rna_MetaElement_stiffness, (PropertyRNA *)&rna_MetaElement_size_y,
	-1, "size_z", 67108867, 0, 0, 4, 0, "Size Z",
	"Size of element, use of components depends on element type",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, expz), 5, NULL},
	MetaElement_size_z_get, MetaElement_size_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_stiffness = {
	{(PropertyRNA *)&rna_MetaElement_use_negative, (PropertyRNA *)&rna_MetaElement_size_z,
	-1, "stiffness", 3, 0, 0, 4, 0, "Stiffness",
	"Stiffness defines how much of the element to fill",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaElem, s), 5, NULL},
	MetaElement_stiffness_get, MetaElement_stiffness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MetaElement_use_negative = {
	{(PropertyRNA *)&rna_MetaElement_use_scale_stiffness, (PropertyRNA *)&rna_MetaElement_stiffness,
	-1, "use_negative", 3, 0, 0, 0, 0, "Negative",
	"Set metaball as negative one",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaElement_use_negative_get, MetaElement_use_negative_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaElement_use_scale_stiffness = {
	{(PropertyRNA *)&rna_MetaElement_select, (PropertyRNA *)&rna_MetaElement_use_negative,
	-1, "use_scale_stiffness", 3, 0, 0, 0, 0, "Scale Stiffness",
	"Scale stiffness instead of radius",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaElement_use_scale_stiffness_get, MetaElement_use_scale_stiffness_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaElement_select = {
	{(PropertyRNA *)&rna_MetaElement_hide, (PropertyRNA *)&rna_MetaElement_use_scale_stiffness,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"Select element",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaElement_select_get, MetaElement_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MetaElement_hide = {
	{NULL, (PropertyRNA *)&rna_MetaElement_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"Hide element",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaElement_hide_get, MetaElement_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MetaElement = {
	{(ContainerRNA *)&RNA_MetaBall, (ContainerRNA *)&RNA_MeshFaceMap,
	NULL,
	{(PropertyRNA *)&rna_MetaElement_rna_properties, (PropertyRNA *)&rna_MetaElement_hide}},
	"MetaElement", NULL, NULL, 516, NULL, "Metaball Element",
	"Blobby element in a metaball data-block",
	"*", 264,
	NULL, (PropertyRNA *)&rna_MetaElement_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MetaElement_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MetaBall */
CollectionPropertyRNA rna_MetaBall_elements = {
	{(PropertyRNA *)&rna_MetaBall_update_method, NULL,
	-1, "elements", 0, 0, 0, 0, 0, "Elements",
	"Metaball elements",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MetaBallElements},
	MetaBall_elements_begin, MetaBall_elements_next, MetaBall_elements_end, MetaBall_elements_get, NULL, MetaBall_elements_lookup_int, NULL, NULL, &RNA_MetaElement
};

static const EnumPropertyItem rna_MetaBall_update_method_items[5] = {
	{0, "UPDATE_ALWAYS", 0, "Always", "While editing, update metaball always"},
	{1, "HALFRES", 0, "Half", "While editing, update metaball in half resolution"},
	{2, "FAST", 0, "Fast", "While editing, update metaball without polygonization"},
	{3, "NEVER", 0, "Never", "While editing, don\'t update metaball at all"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MetaBall_update_method = {
	{(PropertyRNA *)&rna_MetaBall_resolution, (PropertyRNA *)&rna_MetaBall_elements,
	-1, "update_method", 3, 0, 0, 4, 0, "Update",
	"Metaball edit update behavior",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, flag), 2, NULL},
	MetaBall_update_method_get, MetaBall_update_method_set, NULL, NULL, NULL, rna_MetaBall_update_method_items, 4, 0
};

FloatPropertyRNA rna_MetaBall_resolution = {
	{(PropertyRNA *)&rna_MetaBall_render_resolution, (PropertyRNA *)&rna_MetaBall_update_method,
	-1, "resolution", 3, 0, 0, 4, 0, "Wire Size",
	"Polygonization resolution in the 3D viewport",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, wiresize), 5, NULL},
	MetaBall_resolution_get, MetaBall_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0500000007f, 1000.0f, 0.0049999999f, 10000.0f, 2.5000000000f, 3, 0.4000000060f, NULL
};

FloatPropertyRNA rna_MetaBall_render_resolution = {
	{(PropertyRNA *)&rna_MetaBall_threshold, (PropertyRNA *)&rna_MetaBall_resolution,
	-1, "render_resolution", 3, 0, 0, 4, 0, "Render Size",
	"Polygonization resolution in rendering",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, rendersize), 5, NULL},
	MetaBall_render_resolution_get, MetaBall_render_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0250000004f, 1000.0f, 0.0049999999f, 10000.0f, 2.5000000000f, 3, 0.2000000030f, NULL
};

FloatPropertyRNA rna_MetaBall_threshold = {
	{(PropertyRNA *)&rna_MetaBall_use_auto_texspace, (PropertyRNA *)&rna_MetaBall_render_resolution,
	-1, "threshold", 3, 0, 0, 4, 0, "Threshold",
	"Influence of metaball elements",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MetaBall, thresh), 5, NULL},
	MetaBall_threshold_get, MetaBall_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.6000000238f, NULL
};

BoolPropertyRNA rna_MetaBall_use_auto_texspace = {
	{(PropertyRNA *)&rna_MetaBall_texspace_location, (PropertyRNA *)&rna_MetaBall_threshold,
	-1, "use_auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaBall_use_auto_texspace_get, MetaBall_use_auto_texspace_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static float rna_MetaBall_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaBall_texspace_location = {
	{(PropertyRNA *)&rna_MetaBall_texspace_size, (PropertyRNA *)&rna_MetaBall_use_auto_texspace,
	-1, "texspace_location", 3, 0, 0, 0, 0, "Texture Space Location",
	"Texture space location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MetaBall_texspace_location_get, MetaBall_texspace_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaBall_texspace_location_default
};

static float rna_MetaBall_texspace_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaBall_texspace_size = {
	{(PropertyRNA *)&rna_MetaBall_materials, (PropertyRNA *)&rna_MetaBall_texspace_location,
	-1, "texspace_size", 67108867, 0, 0, 0, 0, "Texture Space Size",
	"Texture space size",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MetaBall_texspace_size_get, MetaBall_texspace_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaBall_texspace_size_default
};

CollectionPropertyRNA rna_MetaBall_materials = {
	{(PropertyRNA *)&rna_MetaBall_is_editmode, (PropertyRNA *)&rna_MetaBall_texspace_size,
	-1, "materials", 128, 0, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_IDMaterials},
	MetaBall_materials_begin, MetaBall_materials_next, MetaBall_materials_end, MetaBall_materials_get, MetaBall_materials_length, MetaBall_materials_lookup_int, MetaBall_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

BoolPropertyRNA rna_MetaBall_is_editmode = {
	{(PropertyRNA *)&rna_MetaBall_animation_data, (PropertyRNA *)&rna_MetaBall_materials,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaBall_is_editmode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MetaBall_animation_data = {
	{NULL, (PropertyRNA *)&rna_MetaBall_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	MetaBall_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

static float rna_MetaBall_transform_matrix_default[16] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaBall_transform_matrix = {
	{NULL, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_MetaBall_transform_matrix_default
};

FunctionRNA rna_MetaBall_transform_func = {
	{(FunctionRNA *)&rna_MetaBall_update_gpu_tag_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MetaBall_transform_matrix, (PropertyRNA *)&rna_MetaBall_transform_matrix}},
	"transform", 0, "Transform metaball elements by a matrix",
	MetaBall_transform_call,
	NULL
};

FunctionRNA rna_MetaBall_update_gpu_tag_func = {
	{NULL, (FunctionRNA *)&rna_MetaBall_transform_func,
	NULL,
	{NULL, NULL}},
	"update_gpu_tag", 0, "update_gpu_tag",
	MetaBall_update_gpu_tag_call,
	NULL
};

StructRNA RNA_MetaBall = {
	{(ContainerRNA *)&RNA_MetaBallElements, (ContainerRNA *)&RNA_MetaElement,
	NULL,
	{(PropertyRNA *)&rna_MetaBall_elements, (PropertyRNA *)&rna_MetaBall_animation_data}},
	"MetaBall", NULL, NULL, 519, NULL, "MetaBall",
	"Metaball data-block to defined blobby surfaces",
	"*", 162,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_MetaBall_transform_func, (FunctionRNA *)&rna_MetaBall_update_gpu_tag_func}
};

/* Metaball Elements */
CollectionPropertyRNA rna_MetaBallElements_rna_properties = {
	{(PropertyRNA *)&rna_MetaBallElements_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaBallElements_rna_properties_begin, MetaBallElements_rna_properties_next, MetaBallElements_rna_properties_end, MetaBallElements_rna_properties_get, NULL, NULL, MetaBallElements_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MetaBallElements_rna_type = {
	{(PropertyRNA *)&rna_MetaBallElements_active, (PropertyRNA *)&rna_MetaBallElements_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaBallElements_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MetaBallElements_active = {
	{NULL, (PropertyRNA *)&rna_MetaBallElements_rna_type,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Element",
	"Last selected element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MetaBallElements_active_get, NULL, NULL, NULL,&RNA_MetaElement
};

EnumPropertyRNA rna_MetaBallElements_new_type = {
	{(PropertyRNA *)&rna_MetaBallElements_new_element, NULL,
	-1, "type", 3, 0, 0, 0, 0, "",
	"Type for the new metaball element",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_metaelem_type_items, 5, 0
};

PointerPropertyRNA rna_MetaBallElements_new_element = {
	{NULL, (PropertyRNA *)&rna_MetaBallElements_new_type,
	-1, "element", 8388608, 0, 2, 0, 0, "",
	"The newly created metaball element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaElement
};

FunctionRNA rna_MetaBallElements_new_func = {
	{(FunctionRNA *)&rna_MetaBallElements_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MetaBallElements_new_type, (PropertyRNA *)&rna_MetaBallElements_new_element}},
	"new", 0, "Add a new element to the metaball",
	MetaBallElements_new_call,
	(PropertyRNA *)&rna_MetaBallElements_new_element
};

PointerPropertyRNA rna_MetaBallElements_remove_element = {
	{NULL, NULL,
	-1, "element", 262144, 0, 5, 0, 0, "",
	"The element to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaElement
};

FunctionRNA rna_MetaBallElements_remove_func = {
	{(FunctionRNA *)&rna_MetaBallElements_clear_func, (FunctionRNA *)&rna_MetaBallElements_new_func,
	NULL,
	{(PropertyRNA *)&rna_MetaBallElements_remove_element, (PropertyRNA *)&rna_MetaBallElements_remove_element}},
	"remove", 16, "Remove an element from the metaball",
	MetaBallElements_remove_call,
	NULL
};

FunctionRNA rna_MetaBallElements_clear_func = {
	{NULL, (FunctionRNA *)&rna_MetaBallElements_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all elements from the metaball",
	MetaBallElements_clear_call,
	NULL
};

StructRNA RNA_MetaBallElements = {
	{(ContainerRNA *)&RNA_Modifier, (ContainerRNA *)&RNA_MetaBall,
	NULL,
	{(PropertyRNA *)&rna_MetaBallElements_rna_properties, (PropertyRNA *)&rna_MetaBallElements_active}},
	"MetaBallElements", NULL, NULL, 516, NULL, "Metaball Elements",
	"Collection of metaball elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MetaBallElements_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MetaBallElements_new_func, (FunctionRNA *)&rna_MetaBallElements_clear_func}
};

