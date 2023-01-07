
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

#include "rna_attribute.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_Attribute_rna_properties;
PointerPropertyRNA rna_Attribute_rna_type;
StringPropertyRNA rna_Attribute_name;
EnumPropertyRNA rna_Attribute_data_type;
EnumPropertyRNA rna_Attribute_domain;
BoolPropertyRNA rna_Attribute_is_internal;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_FloatAttribute_data;


CollectionPropertyRNA rna_FloatAttributeValue_rna_properties;
PointerPropertyRNA rna_FloatAttributeValue_rna_type;
FloatPropertyRNA rna_FloatAttributeValue_value;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_FloatVectorAttribute_data;


CollectionPropertyRNA rna_FloatVectorAttributeValue_rna_properties;
PointerPropertyRNA rna_FloatVectorAttributeValue_rna_type;
FloatPropertyRNA rna_FloatVectorAttributeValue_vector;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_FloatColorAttribute_data;


CollectionPropertyRNA rna_FloatColorAttributeValue_rna_properties;
PointerPropertyRNA rna_FloatColorAttributeValue_rna_type;
FloatPropertyRNA rna_FloatColorAttributeValue_color;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_ByteColorAttribute_data;


CollectionPropertyRNA rna_ByteColorAttributeValue_rna_properties;
PointerPropertyRNA rna_ByteColorAttributeValue_rna_type;
FloatPropertyRNA rna_ByteColorAttributeValue_color;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_IntAttribute_data;


CollectionPropertyRNA rna_IntAttributeValue_rna_properties;
PointerPropertyRNA rna_IntAttributeValue_rna_type;
IntPropertyRNA rna_IntAttributeValue_value;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_StringAttribute_data;


CollectionPropertyRNA rna_StringAttributeValue_rna_properties;
PointerPropertyRNA rna_StringAttributeValue_rna_type;
StringPropertyRNA rna_StringAttributeValue_value;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_BoolAttribute_data;


CollectionPropertyRNA rna_BoolAttributeValue_rna_properties;
PointerPropertyRNA rna_BoolAttributeValue_rna_type;
BoolPropertyRNA rna_BoolAttributeValue_value;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_Float2Attribute_data;


CollectionPropertyRNA rna_Float2AttributeValue_rna_properties;
PointerPropertyRNA rna_Float2AttributeValue_rna_type;
FloatPropertyRNA rna_Float2AttributeValue_vector;


extern CollectionPropertyRNA rna_Attribute_rna_properties;
extern PointerPropertyRNA rna_Attribute_rna_type;
extern StringPropertyRNA rna_Attribute_name;
extern EnumPropertyRNA rna_Attribute_data_type;
extern EnumPropertyRNA rna_Attribute_domain;
extern BoolPropertyRNA rna_Attribute_is_internal;

CollectionPropertyRNA rna_ByteIntAttribute_data;


CollectionPropertyRNA rna_ByteIntAttributeValue_rna_properties;
PointerPropertyRNA rna_ByteIntAttributeValue_rna_type;
IntPropertyRNA rna_ByteIntAttributeValue_value;


CollectionPropertyRNA rna_AttributeGroup_rna_properties;
PointerPropertyRNA rna_AttributeGroup_rna_type;
PointerPropertyRNA rna_AttributeGroup_active;
IntPropertyRNA rna_AttributeGroup_active_index;
PointerPropertyRNA rna_AttributeGroup_active_color;
IntPropertyRNA rna_AttributeGroup_active_color_index;
IntPropertyRNA rna_AttributeGroup_render_color_index;

extern FunctionRNA rna_AttributeGroup_new_func;
extern StringPropertyRNA rna_AttributeGroup_new_name;
extern EnumPropertyRNA rna_AttributeGroup_new_type;
extern EnumPropertyRNA rna_AttributeGroup_new_domain;
extern PointerPropertyRNA rna_AttributeGroup_new_attribute;

extern FunctionRNA rna_AttributeGroup_remove_func;
extern PointerPropertyRNA rna_AttributeGroup_remove_attribute;


static PointerRNA Attribute_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Attribute_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Attribute_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Attribute_rna_properties_get(iter);
    }
}

void Attribute_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Attribute_rna_properties_get(iter);
    }
}

void Attribute_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Attribute_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Attribute_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void Attribute_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int Attribute_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void Attribute_name_set(PointerRNA *ptr, const char *value)
{
    rna_Attribute_name_set(ptr, value);
}

int Attribute_data_type_get(PointerRNA *ptr)
{
    return rna_Attribute_type_get(ptr);
}

int Attribute_domain_get(PointerRNA *ptr)
{
    return rna_Attribute_domain_get(ptr);
}

bool Attribute_is_internal_get(PointerRNA *ptr)
{
    return rna_Attribute_is_internal_get(ptr);
}

int FloatAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA FloatAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FloatAttributeValue, rna_iterator_array_get(iter));
}

void FloatAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatAttribute_data_get(iter);
    }
}

void FloatAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FloatAttribute_data_get(iter);
    }
}

void FloatAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int FloatAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FloatAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = FloatAttribute_data_get(&iter); }
    }

    FloatAttribute_data_end(&iter);

    return found;
}

static PointerRNA FloatAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FloatAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatAttributeValue_rna_properties_get(iter);
    }
}

void FloatAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FloatAttributeValue_rna_properties_get(iter);
    }
}

void FloatAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FloatAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FloatAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float FloatAttributeValue_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

void FloatAttributeValue_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    data->f = value;
}

int FloatVectorAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA FloatVectorAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FloatVectorAttributeValue, rna_iterator_array_get(iter));
}

void FloatVectorAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatVectorAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatVectorAttribute_data_get(iter);
    }
}

void FloatVectorAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FloatVectorAttribute_data_get(iter);
    }
}

void FloatVectorAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int FloatVectorAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FloatVectorAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = FloatVectorAttribute_data_get(&iter); }
    }

    FloatVectorAttribute_data_end(&iter);

    return found;
}

static PointerRNA FloatVectorAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FloatVectorAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatVectorAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatVectorAttributeValue_rna_properties_get(iter);
    }
}

void FloatVectorAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FloatVectorAttributeValue_rna_properties_get(iter);
    }
}

void FloatVectorAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FloatVectorAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FloatVectorAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void FloatVectorAttributeValue_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void FloatVectorAttributeValue_vector_set(PointerRNA *ptr, const float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

int FloatColorAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA FloatColorAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_FloatColorAttributeValue, rna_iterator_array_get(iter));
}

void FloatColorAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatColorAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatColorAttribute_data_get(iter);
    }
}

void FloatColorAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = FloatColorAttribute_data_get(iter);
    }
}

void FloatColorAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int FloatColorAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    FloatColorAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = FloatColorAttribute_data_get(&iter); }
    }

    FloatColorAttribute_data_end(&iter);

    return found;
}

static PointerRNA FloatColorAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void FloatColorAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_FloatColorAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatColorAttributeValue_rna_properties_get(iter);
    }
}

void FloatColorAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = FloatColorAttributeValue_rna_properties_get(iter);
    }
}

void FloatColorAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int FloatColorAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FloatColorAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void FloatColorAttributeValue_color_get(PointerRNA *ptr, float values[4])
{
    MPropCol *data = (MPropCol *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void FloatColorAttributeValue_color_set(PointerRNA *ptr, const float values[4])
{
    MPropCol *data = (MPropCol *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

int ByteColorAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA ByteColorAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ByteColorAttributeValue, rna_iterator_array_get(iter));
}

void ByteColorAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ByteColorAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteColorAttribute_data_get(iter);
    }
}

void ByteColorAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ByteColorAttribute_data_get(iter);
    }
}

void ByteColorAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int ByteColorAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ByteColorAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = ByteColorAttribute_data_get(&iter); }
    }

    ByteColorAttribute_data_end(&iter);

    return found;
}

static PointerRNA ByteColorAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ByteColorAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ByteColorAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteColorAttributeValue_rna_properties_get(iter);
    }
}

void ByteColorAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ByteColorAttributeValue_rna_properties_get(iter);
    }
}

void ByteColorAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ByteColorAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ByteColorAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void ByteColorAttributeValue_color_get(PointerRNA *ptr, float values[4])
{
    rna_ByteColorAttributeValue_color_get(ptr, values);
}

void ByteColorAttributeValue_color_set(PointerRNA *ptr, const float values[4])
{
    rna_ByteColorAttributeValue_color_set(ptr, values);
}

int IntAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA IntAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_IntAttributeValue, rna_iterator_array_get(iter));
}

void IntAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IntAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IntAttribute_data_get(iter);
    }
}

void IntAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = IntAttribute_data_get(iter);
    }
}

void IntAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int IntAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    IntAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = IntAttribute_data_get(&iter); }
    }

    IntAttribute_data_end(&iter);

    return found;
}

static PointerRNA IntAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IntAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IntAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IntAttributeValue_rna_properties_get(iter);
    }
}

void IntAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IntAttributeValue_rna_properties_get(iter);
    }
}

void IntAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IntAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IntAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int IntAttributeValue_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

void IntAttributeValue_value_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    data->i = value;
}

int StringAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA StringAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_StringAttributeValue, rna_iterator_array_get(iter));
}

void StringAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_StringAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = StringAttribute_data_get(iter);
    }
}

void StringAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = StringAttribute_data_get(iter);
    }
}

void StringAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int StringAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    StringAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = StringAttribute_data_get(&iter); }
    }

    StringAttribute_data_end(&iter);

    return found;
}

static PointerRNA StringAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void StringAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_StringAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = StringAttributeValue_rna_properties_get(iter);
    }
}

void StringAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = StringAttributeValue_rna_properties_get(iter);
    }
}

void StringAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int StringAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA StringAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void StringAttributeValue_value_get(PointerRNA *ptr, char *value)
{
    MStringProperty *data = (MStringProperty *)(ptr->data);
    BLI_strncpy_utf8(value, data->s, 255);
}

int StringAttributeValue_value_length(PointerRNA *ptr)
{
    MStringProperty *data = (MStringProperty *)(ptr->data);
    return strlen(data->s);
}

void StringAttributeValue_value_set(PointerRNA *ptr, const char *value)
{
    MStringProperty *data = (MStringProperty *)(ptr->data);
    BLI_strncpy_utf8(data->s, value, 255);
}

int BoolAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA BoolAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoolAttributeValue, rna_iterator_array_get(iter));
}

void BoolAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoolAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoolAttribute_data_get(iter);
    }
}

void BoolAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = BoolAttribute_data_get(iter);
    }
}

void BoolAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int BoolAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    BoolAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoolAttribute_data_get(&iter); }
    }

    BoolAttribute_data_end(&iter);

    return found;
}

static PointerRNA BoolAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BoolAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoolAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoolAttributeValue_rna_properties_get(iter);
    }
}

void BoolAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoolAttributeValue_rna_properties_get(iter);
    }
}

void BoolAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoolAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoolAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool BoolAttributeValue_value_get(PointerRNA *ptr)
{
    MBoolProperty *data = (MBoolProperty *)(ptr->data);
    return (((data->b) & 1) != 0);
}

void BoolAttributeValue_value_set(PointerRNA *ptr, bool value)
{
    MBoolProperty *data = (MBoolProperty *)(ptr->data);
    if (value) { data->b |= 1; }
    else { data->b &= ~1; }
}

int Float2Attribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA Float2Attribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Float2AttributeValue, rna_iterator_array_get(iter));
}

void Float2Attribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Float2Attribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float2Attribute_data_get(iter);
    }
}

void Float2Attribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Float2Attribute_data_get(iter);
    }
}

void Float2Attribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Float2Attribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Float2Attribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = Float2Attribute_data_get(&iter); }
    }

    Float2Attribute_data_end(&iter);

    return found;
}

static PointerRNA Float2AttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Float2AttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Float2AttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float2AttributeValue_rna_properties_get(iter);
    }
}

void Float2AttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Float2AttributeValue_rna_properties_get(iter);
    }
}

void Float2AttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Float2AttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Float2AttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void Float2AttributeValue_vector_get(PointerRNA *ptr, float values[2])
{
    vec2f *data = (vec2f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void Float2AttributeValue_vector_set(PointerRNA *ptr, const float values[2])
{
    vec2f *data = (vec2f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

int ByteIntAttribute_data_length(PointerRNA *ptr)
{
    return rna_Attribute_data_length(ptr);
}

static PointerRNA ByteIntAttribute_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_ByteIntAttributeValue, rna_iterator_array_get(iter));
}

void ByteIntAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ByteIntAttribute_data;

    rna_Attribute_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteIntAttribute_data_get(iter);
    }
}

void ByteIntAttribute_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = ByteIntAttribute_data_get(iter);
    }
}

void ByteIntAttribute_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int ByteIntAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    ByteIntAttribute_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = ByteIntAttribute_data_get(&iter); }
    }

    ByteIntAttribute_data_end(&iter);

    return found;
}

static PointerRNA ByteIntAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ByteIntAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ByteIntAttributeValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteIntAttributeValue_rna_properties_get(iter);
    }
}

void ByteIntAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ByteIntAttributeValue_rna_properties_get(iter);
    }
}

void ByteIntAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ByteIntAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ByteIntAttributeValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int ByteIntAttributeValue_value_get(PointerRNA *ptr)
{
    return rna_ByteIntAttributeValue_get(ptr);
}

void ByteIntAttributeValue_value_set(PointerRNA *ptr, int value)
{
    rna_ByteIntAttributeValue_set(ptr, value);
}

static PointerRNA AttributeGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void AttributeGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_AttributeGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = AttributeGroup_rna_properties_get(iter);
    }
}

void AttributeGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = AttributeGroup_rna_properties_get(iter);
    }
}

void AttributeGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int AttributeGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AttributeGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA AttributeGroup_active_get(PointerRNA *ptr)
{
    return rna_AttributeGroup_active_get(ptr);
}

void AttributeGroup_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AttributeGroup_active_set(ptr, value, reports);
}

int AttributeGroup_active_index_get(PointerRNA *ptr)
{
    return rna_AttributeGroup_active_index_get(ptr);
}

void AttributeGroup_active_index_set(PointerRNA *ptr, int value)
{
    rna_AttributeGroup_active_index_set(ptr, value);
}

PointerRNA AttributeGroup_active_color_get(PointerRNA *ptr)
{
    return rna_AttributeGroup_active_color_get(ptr);
}

void AttributeGroup_active_color_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_AttributeGroup_active_color_set(ptr, value, reports);
}

int AttributeGroup_active_color_index_get(PointerRNA *ptr)
{
    return rna_AttributeGroup_active_color_index_get(ptr);
}

void AttributeGroup_active_color_index_set(PointerRNA *ptr, int value)
{
    rna_AttributeGroup_active_color_index_set(ptr, value);
}

int AttributeGroup_render_color_index_get(PointerRNA *ptr)
{
    return rna_AttributeGroup_render_color_index_get(ptr);
}

void AttributeGroup_render_color_index_set(PointerRNA *ptr, int value)
{
    rna_AttributeGroup_render_color_index_set(ptr, value);
}




















struct PointerRNA AttributeGroup_new_func(struct ID *_self, ReportList *reports, const char * name, int type, int domain)
{
	return rna_AttributeGroup_new(_self, reports, name, type, domain);
}

void AttributeGroup_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	const char * name;
	int type;
	int domain;
	struct PointerRNA attribute;
	char *_data, *_retdata;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	attribute = rna_AttributeGroup_new(_self, reports, name, type, domain);
	*((struct PointerRNA *)_retdata) = attribute;
}

void AttributeGroup_remove_func(struct ID *_self, ReportList *reports, struct PointerRNA *attribute)
{
	rna_AttributeGroup_remove(_self, reports, attribute);
}

void AttributeGroup_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct PointerRNA *attribute;
	char *_data;
	
	_self = (struct ID *)_ptr->data;
	_data = (char *)_parms->data;
	attribute = *((struct PointerRNA **)_data);
	
	rna_AttributeGroup_remove(_self, reports, attribute);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_AttributeGroup_new(struct ID *_self, ReportList *reports, const char * name, int type, int domain);
void rna_AttributeGroup_remove(struct ID *_self, ReportList *reports, struct PointerRNA *attribute);

/* Attribute */
CollectionPropertyRNA rna_Attribute_rna_properties = {
	{(PropertyRNA *)&rna_Attribute_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Attribute_rna_properties_begin, Attribute_rna_properties_next, Attribute_rna_properties_end, Attribute_rna_properties_get, NULL, NULL, Attribute_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Attribute_rna_type = {
	{(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Attribute_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Attribute_name = {
	{(PropertyRNA *)&rna_Attribute_data_type, (PropertyRNA *)&rna_Attribute_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of the Attribute",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, rna_Attribute_name_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Attribute_name_get, Attribute_name_length, Attribute_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_Attribute_data_type = {
	{(PropertyRNA *)&rna_Attribute_domain, (PropertyRNA *)&rna_Attribute_name,
	-1, "data_type", 2, 0, 0, 0, 0, "Data Type",
	"Type of data stored in attribute",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Attribute_data_type_get, NULL, NULL, NULL, NULL, rna_enum_attribute_type_items, 9, 10
};

EnumPropertyRNA rna_Attribute_domain = {
	{(PropertyRNA *)&rna_Attribute_is_internal, (PropertyRNA *)&rna_Attribute_data_type,
	-1, "domain", 2, 0, 0, 0, 0, "Domain",
	"Domain of the Attribute",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Attribute_domain_get, NULL, rna_Attribute_domain_itemf, NULL, NULL, rna_enum_attribute_domain_items, 6, 0
};

BoolPropertyRNA rna_Attribute_is_internal = {
	{NULL, (PropertyRNA *)&rna_Attribute_domain,
	-1, "is_internal", 2, 0, 0, 0, 0, "Is Internal",
	"The attribute is meant for internal use by Blender",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Attribute_is_internal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Attribute = {
	{(ContainerRNA *)&RNA_FloatAttribute, (ContainerRNA *)&RNA_EditBone,
	NULL,
	{(PropertyRNA *)&rna_Attribute_rna_properties, (PropertyRNA *)&rna_Attribute_is_internal}},
	"Attribute", NULL, NULL, 516, NULL, "Attribute",
	"Geometry attribute",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	NULL,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Attribute */
CollectionPropertyRNA rna_FloatAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatAttribute_data_begin, FloatAttribute_data_next, FloatAttribute_data_end, FloatAttribute_data_get, FloatAttribute_data_length, FloatAttribute_data_lookup_int, NULL, NULL, &RNA_FloatAttributeValue
};

StructRNA RNA_FloatAttribute = {
	{(ContainerRNA *)&RNA_FloatAttributeValue, (ContainerRNA *)&RNA_Attribute,
	NULL,
	{(PropertyRNA *)&rna_FloatAttribute_data, (PropertyRNA *)&rna_FloatAttribute_data}},
	"FloatAttribute", NULL, NULL, 516, NULL, "Float Attribute",
	"Geometry attribute that stores floating-point values",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Attribute Value */
CollectionPropertyRNA rna_FloatAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_FloatAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatAttributeValue_rna_properties_begin, FloatAttributeValue_rna_properties_next, FloatAttributeValue_rna_properties_end, FloatAttributeValue_rna_properties_get, NULL, NULL, FloatAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FloatAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_FloatAttributeValue_value, (PropertyRNA *)&rna_FloatAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_FloatAttributeValue_value = {
	{NULL, (PropertyRNA *)&rna_FloatAttributeValue_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MFloatProperty, f), 5, NULL},
	FloatAttributeValue_value_get, FloatAttributeValue_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FloatAttributeValue = {
	{(ContainerRNA *)&RNA_FloatVectorAttribute, (ContainerRNA *)&RNA_FloatAttribute,
	NULL,
	{(PropertyRNA *)&rna_FloatAttributeValue_rna_properties, (PropertyRNA *)&rna_FloatAttributeValue_value}},
	"FloatAttributeValue", NULL, NULL, 516, NULL, "Float Attribute Value",
	"Floating-point value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FloatAttributeValue_rna_properties,
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

/* Float Vector Attribute */
CollectionPropertyRNA rna_FloatVectorAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatVectorAttribute_data_begin, FloatVectorAttribute_data_next, FloatVectorAttribute_data_end, FloatVectorAttribute_data_get, FloatVectorAttribute_data_length, FloatVectorAttribute_data_lookup_int, NULL, NULL, &RNA_FloatVectorAttributeValue
};

StructRNA RNA_FloatVectorAttribute = {
	{(ContainerRNA *)&RNA_FloatVectorAttributeValue, (ContainerRNA *)&RNA_FloatAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_FloatVectorAttribute_data, (PropertyRNA *)&rna_FloatVectorAttribute_data}},
	"FloatVectorAttribute", NULL, NULL, 516, NULL, "Float Vector Attribute",
	"Geometry attribute that stores floating-point 3D vectors",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Vector Attribute Value */
CollectionPropertyRNA rna_FloatVectorAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_FloatVectorAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatVectorAttributeValue_rna_properties_begin, FloatVectorAttributeValue_rna_properties_next, FloatVectorAttributeValue_rna_properties_end, FloatVectorAttributeValue_rna_properties_get, NULL, NULL, FloatVectorAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FloatVectorAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_FloatVectorAttributeValue_vector, (PropertyRNA *)&rna_FloatVectorAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatVectorAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_FloatVectorAttributeValue_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FloatVectorAttributeValue_vector = {
	{NULL, (PropertyRNA *)&rna_FloatVectorAttributeValue_rna_type,
	-1, "vector", 3, 0, 0, 4, 0, "Vector",
	"3D vector",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(vec3f, x), 5, NULL},
	NULL, NULL, FloatVectorAttributeValue_vector_get, FloatVectorAttributeValue_vector_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FloatVectorAttributeValue_vector_default
};

StructRNA RNA_FloatVectorAttributeValue = {
	{(ContainerRNA *)&RNA_FloatColorAttribute, (ContainerRNA *)&RNA_FloatVectorAttribute,
	NULL,
	{(PropertyRNA *)&rna_FloatVectorAttributeValue_rna_properties, (PropertyRNA *)&rna_FloatVectorAttributeValue_vector}},
	"FloatVectorAttributeValue", NULL, NULL, 516, NULL, "Float Vector Attribute Value",
	"Vector value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FloatVectorAttributeValue_rna_properties,
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

/* Float Color Attribute */
CollectionPropertyRNA rna_FloatColorAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatColorAttribute_data_begin, FloatColorAttribute_data_next, FloatColorAttribute_data_end, FloatColorAttribute_data_get, FloatColorAttribute_data_length, FloatColorAttribute_data_lookup_int, NULL, NULL, &RNA_FloatColorAttributeValue
};

StructRNA RNA_FloatColorAttribute = {
	{(ContainerRNA *)&RNA_FloatColorAttributeValue, (ContainerRNA *)&RNA_FloatVectorAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_FloatColorAttribute_data, (PropertyRNA *)&rna_FloatColorAttribute_data}},
	"FloatColorAttribute", NULL, NULL, 516, NULL, "Float Color Attribute",
	"Geometry attribute that stores RGBA colors as floating-point values using 32-bits per channel",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Color Attribute Value */
CollectionPropertyRNA rna_FloatColorAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_FloatColorAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatColorAttributeValue_rna_properties_begin, FloatColorAttributeValue_rna_properties_next, FloatColorAttributeValue_rna_properties_end, FloatColorAttributeValue_rna_properties_get, NULL, NULL, FloatColorAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FloatColorAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_FloatColorAttributeValue_color, (PropertyRNA *)&rna_FloatColorAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	FloatColorAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_FloatColorAttributeValue_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FloatColorAttributeValue_color = {
	{NULL, (PropertyRNA *)&rna_FloatColorAttributeValue_rna_type,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"RGBA color in scene linear color space",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MPropCol, color), 5, NULL},
	NULL, NULL, FloatColorAttributeValue_color_get, FloatColorAttributeValue_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_FloatColorAttributeValue_color_default
};

StructRNA RNA_FloatColorAttributeValue = {
	{(ContainerRNA *)&RNA_ByteColorAttribute, (ContainerRNA *)&RNA_FloatColorAttribute,
	NULL,
	{(PropertyRNA *)&rna_FloatColorAttributeValue_rna_properties, (PropertyRNA *)&rna_FloatColorAttributeValue_color}},
	"FloatColorAttributeValue", NULL, NULL, 516, NULL, "Float Color Attribute Value",
	"Color value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FloatColorAttributeValue_rna_properties,
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

/* Byte Color Attribute */
CollectionPropertyRNA rna_ByteColorAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteColorAttribute_data_begin, ByteColorAttribute_data_next, ByteColorAttribute_data_end, ByteColorAttribute_data_get, ByteColorAttribute_data_length, ByteColorAttribute_data_lookup_int, NULL, NULL, &RNA_ByteColorAttributeValue
};

StructRNA RNA_ByteColorAttribute = {
	{(ContainerRNA *)&RNA_ByteColorAttributeValue, (ContainerRNA *)&RNA_FloatColorAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_ByteColorAttribute_data, (PropertyRNA *)&rna_ByteColorAttribute_data}},
	"ByteColorAttribute", NULL, NULL, 516, NULL, "Byte Color Attribute",
	"Geometry attribute that stores RGBA colors as positive integer values using 8-bits per channel",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Byte Color Attribute Value */
CollectionPropertyRNA rna_ByteColorAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_ByteColorAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteColorAttributeValue_rna_properties_begin, ByteColorAttributeValue_rna_properties_next, ByteColorAttributeValue_rna_properties_end, ByteColorAttributeValue_rna_properties_get, NULL, NULL, ByteColorAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ByteColorAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_ByteColorAttributeValue_color, (PropertyRNA *)&rna_ByteColorAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteColorAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ByteColorAttributeValue_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ByteColorAttributeValue_color = {
	{NULL, (PropertyRNA *)&rna_ByteColorAttributeValue_rna_type,
	-1, "color", 3, 0, 0, 0, 0, "Color",
	"RGBA color in scene linear color space",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, ByteColorAttributeValue_color_get, ByteColorAttributeValue_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ByteColorAttributeValue_color_default
};

StructRNA RNA_ByteColorAttributeValue = {
	{(ContainerRNA *)&RNA_IntAttribute, (ContainerRNA *)&RNA_ByteColorAttribute,
	NULL,
	{(PropertyRNA *)&rna_ByteColorAttributeValue_rna_properties, (PropertyRNA *)&rna_ByteColorAttributeValue_color}},
	"ByteColorAttributeValue", NULL, NULL, 516, NULL, "Byte Color Attribute Value",
	"Color value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ByteColorAttributeValue_rna_properties,
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

/* Integer Attribute */
CollectionPropertyRNA rna_IntAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IntAttribute_data_begin, IntAttribute_data_next, IntAttribute_data_end, IntAttribute_data_get, IntAttribute_data_length, IntAttribute_data_lookup_int, NULL, NULL, &RNA_IntAttributeValue
};

StructRNA RNA_IntAttribute = {
	{(ContainerRNA *)&RNA_IntAttributeValue, (ContainerRNA *)&RNA_ByteColorAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_IntAttribute_data, (PropertyRNA *)&rna_IntAttribute_data}},
	"IntAttribute", NULL, NULL, 516, NULL, "Integer Attribute",
	"Geometry attribute that stores integer values",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Integer Attribute Value */
CollectionPropertyRNA rna_IntAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_IntAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IntAttributeValue_rna_properties_begin, IntAttributeValue_rna_properties_next, IntAttributeValue_rna_properties_end, IntAttributeValue_rna_properties_get, NULL, NULL, IntAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IntAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_IntAttributeValue_value, (PropertyRNA *)&rna_IntAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IntAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_IntAttributeValue_value = {
	{NULL, (PropertyRNA *)&rna_IntAttributeValue_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "value",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MIntProperty, i), 0, NULL},
	IntAttributeValue_value_get, IntAttributeValue_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_IntAttributeValue = {
	{(ContainerRNA *)&RNA_StringAttribute, (ContainerRNA *)&RNA_IntAttribute,
	NULL,
	{(PropertyRNA *)&rna_IntAttributeValue_rna_properties, (PropertyRNA *)&rna_IntAttributeValue_value}},
	"IntAttributeValue", NULL, NULL, 516, NULL, "Integer Attribute Value",
	"Integer value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IntAttributeValue_rna_properties,
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

/* String Attribute */
CollectionPropertyRNA rna_StringAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	StringAttribute_data_begin, StringAttribute_data_next, StringAttribute_data_end, StringAttribute_data_get, StringAttribute_data_length, StringAttribute_data_lookup_int, NULL, NULL, &RNA_StringAttributeValue
};

StructRNA RNA_StringAttribute = {
	{(ContainerRNA *)&RNA_StringAttributeValue, (ContainerRNA *)&RNA_IntAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_StringAttribute_data, (PropertyRNA *)&rna_StringAttribute_data}},
	"StringAttribute", NULL, NULL, 516, NULL, "String Attribute",
	"Geometry attribute that stores strings",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* String Attribute Value */
CollectionPropertyRNA rna_StringAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_StringAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	StringAttributeValue_rna_properties_begin, StringAttributeValue_rna_properties_next, StringAttributeValue_rna_properties_end, StringAttributeValue_rna_properties_get, NULL, NULL, StringAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_StringAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_StringAttributeValue_value, (PropertyRNA *)&rna_StringAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	StringAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_StringAttributeValue_value = {
	{NULL, (PropertyRNA *)&rna_StringAttributeValue_rna_type,
	-1, "value", 262145, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {255, 0, 0}, 0,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	StringAttributeValue_value_get, StringAttributeValue_value_length, StringAttributeValue_value_set, NULL, NULL, NULL, NULL, 0, 255, ""
};

StructRNA RNA_StringAttributeValue = {
	{(ContainerRNA *)&RNA_BoolAttribute, (ContainerRNA *)&RNA_StringAttribute,
	NULL,
	{(PropertyRNA *)&rna_StringAttributeValue_rna_properties, (PropertyRNA *)&rna_StringAttributeValue_value}},
	"StringAttributeValue", NULL, NULL, 516, NULL, "String Attribute Value",
	"String value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_StringAttributeValue_rna_properties,
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

/* Bool Attribute */
CollectionPropertyRNA rna_BoolAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoolAttribute_data_begin, BoolAttribute_data_next, BoolAttribute_data_end, BoolAttribute_data_get, BoolAttribute_data_length, BoolAttribute_data_lookup_int, NULL, NULL, &RNA_BoolAttributeValue
};

StructRNA RNA_BoolAttribute = {
	{(ContainerRNA *)&RNA_BoolAttributeValue, (ContainerRNA *)&RNA_StringAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_BoolAttribute_data, (PropertyRNA *)&rna_BoolAttribute_data}},
	"BoolAttribute", NULL, NULL, 516, NULL, "Bool Attribute",
	"Geometry attribute that stores booleans",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Bool Attribute Value */
CollectionPropertyRNA rna_BoolAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_BoolAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoolAttributeValue_rna_properties_begin, BoolAttributeValue_rna_properties_next, BoolAttributeValue_rna_properties_end, BoolAttributeValue_rna_properties_get, NULL, NULL, BoolAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoolAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_BoolAttributeValue_value, (PropertyRNA *)&rna_BoolAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoolAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_BoolAttributeValue_value = {
	{NULL, (PropertyRNA *)&rna_BoolAttributeValue_rna_type,
	-1, "value", 3, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoolAttributeValue_value_get, BoolAttributeValue_value_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoolAttributeValue = {
	{(ContainerRNA *)&RNA_Float2Attribute, (ContainerRNA *)&RNA_BoolAttribute,
	NULL,
	{(PropertyRNA *)&rna_BoolAttributeValue_rna_properties, (PropertyRNA *)&rna_BoolAttributeValue_value}},
	"BoolAttributeValue", NULL, NULL, 516, NULL, "Bool Attribute Value",
	"Bool value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BoolAttributeValue_rna_properties,
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

/* Float2 Attribute */
CollectionPropertyRNA rna_Float2Attribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Float2Attribute_data_begin, Float2Attribute_data_next, Float2Attribute_data_end, Float2Attribute_data_get, Float2Attribute_data_length, Float2Attribute_data_lookup_int, NULL, NULL, &RNA_Float2AttributeValue
};

StructRNA RNA_Float2Attribute = {
	{(ContainerRNA *)&RNA_Float2AttributeValue, (ContainerRNA *)&RNA_BoolAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_Float2Attribute_data, (PropertyRNA *)&rna_Float2Attribute_data}},
	"Float2Attribute", NULL, NULL, 516, NULL, "Float2 Attribute",
	"Geometry attribute that stores floating-point 2D vectors",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float2 Attribute Value */
CollectionPropertyRNA rna_Float2AttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_Float2AttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Float2AttributeValue_rna_properties_begin, Float2AttributeValue_rna_properties_next, Float2AttributeValue_rna_properties_end, Float2AttributeValue_rna_properties_get, NULL, NULL, Float2AttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Float2AttributeValue_rna_type = {
	{(PropertyRNA *)&rna_Float2AttributeValue_vector, (PropertyRNA *)&rna_Float2AttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Float2AttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_Float2AttributeValue_vector_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Float2AttributeValue_vector = {
	{NULL, (PropertyRNA *)&rna_Float2AttributeValue_rna_type,
	-1, "vector", 3, 0, 0, 4, 0, "Vector",
	"2D vector",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Attribute_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(vec2f, x), 5, NULL},
	NULL, NULL, Float2AttributeValue_vector_get, Float2AttributeValue_vector_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Float2AttributeValue_vector_default
};

StructRNA RNA_Float2AttributeValue = {
	{(ContainerRNA *)&RNA_ByteIntAttribute, (ContainerRNA *)&RNA_Float2Attribute,
	NULL,
	{(PropertyRNA *)&rna_Float2AttributeValue_rna_properties, (PropertyRNA *)&rna_Float2AttributeValue_vector}},
	"Float2AttributeValue", NULL, NULL, 516, NULL, "Float2 Attribute Value",
	"2D Vector value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Float2AttributeValue_rna_properties,
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

/* 8-bit Integer Attribute */
CollectionPropertyRNA rna_ByteIntAttribute_data = {
	{NULL, NULL,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteIntAttribute_data_begin, ByteIntAttribute_data_next, ByteIntAttribute_data_end, ByteIntAttribute_data_get, ByteIntAttribute_data_length, ByteIntAttribute_data_lookup_int, NULL, NULL, &RNA_ByteIntAttributeValue
};

StructRNA RNA_ByteIntAttribute = {
	{(ContainerRNA *)&RNA_ByteIntAttributeValue, (ContainerRNA *)&RNA_Float2AttributeValue,
	NULL,
	{(PropertyRNA *)&rna_ByteIntAttribute_data, (PropertyRNA *)&rna_ByteIntAttribute_data}},
	"ByteIntAttribute", NULL, NULL, 516, NULL, "8-bit Integer Attribute",
	"Geometry attribute that stores 8-bit integers",
	"*", 17,
	(PropertyRNA *)&rna_Attribute_name, (PropertyRNA *)&rna_Attribute_rna_properties,
	&RNA_Attribute,
	NULL,
	rna_Attribute_refine,
	rna_Attribute_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* 8-bit Integer Attribute Value */
CollectionPropertyRNA rna_ByteIntAttributeValue_rna_properties = {
	{(PropertyRNA *)&rna_ByteIntAttributeValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteIntAttributeValue_rna_properties_begin, ByteIntAttributeValue_rna_properties_next, ByteIntAttributeValue_rna_properties_end, ByteIntAttributeValue_rna_properties_get, NULL, NULL, ByteIntAttributeValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ByteIntAttributeValue_rna_type = {
	{(PropertyRNA *)&rna_ByteIntAttributeValue_value, (PropertyRNA *)&rna_ByteIntAttributeValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteIntAttributeValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_ByteIntAttributeValue_value = {
	{NULL, (PropertyRNA *)&rna_ByteIntAttributeValue_rna_type,
	-1, "value", 3, 0, 0, 0, 0, "value",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ByteIntAttributeValue_value_get, ByteIntAttributeValue_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_ByteIntAttributeValue = {
	{(ContainerRNA *)&RNA_AttributeGroup, (ContainerRNA *)&RNA_ByteIntAttribute,
	NULL,
	{(PropertyRNA *)&rna_ByteIntAttributeValue_rna_properties, (PropertyRNA *)&rna_ByteIntAttributeValue_value}},
	"ByteIntAttributeValue", NULL, NULL, 516, NULL, "8-bit Integer Attribute Value",
	"8-bit value in geometry attribute",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ByteIntAttributeValue_rna_properties,
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

/* Attribute Group */
CollectionPropertyRNA rna_AttributeGroup_rna_properties = {
	{(PropertyRNA *)&rna_AttributeGroup_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_rna_properties_begin, AttributeGroup_rna_properties_next, AttributeGroup_rna_properties_end, AttributeGroup_rna_properties_get, NULL, NULL, AttributeGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AttributeGroup_rna_type = {
	{(PropertyRNA *)&rna_AttributeGroup_active, (PropertyRNA *)&rna_AttributeGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AttributeGroup_active = {
	{(PropertyRNA *)&rna_AttributeGroup_active_index, (PropertyRNA *)&rna_AttributeGroup_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Attribute",
	"Active attribute",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AttributeGroup_update_active, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_active_get, AttributeGroup_active_set, NULL, NULL,&RNA_Attribute
};

IntPropertyRNA rna_AttributeGroup_active_index = {
	{(PropertyRNA *)&rna_AttributeGroup_active_color, (PropertyRNA *)&rna_AttributeGroup_active,
	-1, "active_index", 1, 0, 0, 0, 0, "Active Attribute Index",
	"Active attribute index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AttributeGroup_update_active, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_active_index_get, AttributeGroup_active_index_set, NULL, NULL, rna_AttributeGroup_active_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_AttributeGroup_active_color = {
	{(PropertyRNA *)&rna_AttributeGroup_active_color_index, (PropertyRNA *)&rna_AttributeGroup_active_index,
	-1, "active_color", 41943041, 0, 0, 0, 0, "Active Color",
	"Active color attribute for display and editing",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AttributeGroup_update_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_active_color_get, AttributeGroup_active_color_set, NULL, NULL,&RNA_Attribute
};

IntPropertyRNA rna_AttributeGroup_active_color_index = {
	{(PropertyRNA *)&rna_AttributeGroup_render_color_index, (PropertyRNA *)&rna_AttributeGroup_active_color,
	-1, "active_color_index", 1, 0, 0, 0, 0, "Active Color Index",
	"Active color attribute index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AttributeGroup_update_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_active_color_index_get, AttributeGroup_active_color_index_set, NULL, NULL, rna_AttributeGroup_active_color_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AttributeGroup_render_color_index = {
	{NULL, (PropertyRNA *)&rna_AttributeGroup_active_color_index,
	-1, "render_color_index", 1, 0, 0, 0, 0, "Active Render Color Index",
	"The index of the color attribute used as a fallback for rendering",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_AttributeGroup_update_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	AttributeGroup_render_color_index_get, AttributeGroup_render_color_index_set, NULL, NULL, rna_AttributeGroup_render_color_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_AttributeGroup_new_name = {
	{(PropertyRNA *)&rna_AttributeGroup_new_type, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"Name of geometry attribute",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Attribute"
};

EnumPropertyRNA rna_AttributeGroup_new_type = {
	{(PropertyRNA *)&rna_AttributeGroup_new_domain, (PropertyRNA *)&rna_AttributeGroup_new_name,
	-1, "type", 3, 0, 1, 0, 0, "Type",
	"Attribute type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_attribute_type_items, 9, 10
};

EnumPropertyRNA rna_AttributeGroup_new_domain = {
	{(PropertyRNA *)&rna_AttributeGroup_new_attribute, (PropertyRNA *)&rna_AttributeGroup_new_type,
	-1, "domain", 3, 0, 1, 0, 0, "Domain",
	"Type of element that attribute is stored on",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_attribute_domain_items, 6, 0
};

PointerPropertyRNA rna_AttributeGroup_new_attribute = {
	{NULL, (PropertyRNA *)&rna_AttributeGroup_new_domain,
	-1, "attribute", 8388608, 0, 6, 0, 0, "",
	"New geometry attribute",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Attribute
};

FunctionRNA rna_AttributeGroup_new_func = {
	{(FunctionRNA *)&rna_AttributeGroup_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_AttributeGroup_new_name, (PropertyRNA *)&rna_AttributeGroup_new_attribute}},
	"new", 16, "Add attribute to geometry",
	AttributeGroup_new_call,
	(PropertyRNA *)&rna_AttributeGroup_new_attribute
};

PointerPropertyRNA rna_AttributeGroup_remove_attribute = {
	{NULL, NULL,
	-1, "attribute", 262144, 0, 5, 0, 0, "",
	"Geometry Attribute",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Attribute
};

FunctionRNA rna_AttributeGroup_remove_func = {
	{NULL, (FunctionRNA *)&rna_AttributeGroup_new_func,
	NULL,
	{(PropertyRNA *)&rna_AttributeGroup_remove_attribute, (PropertyRNA *)&rna_AttributeGroup_remove_attribute}},
	"remove", 16, "Remove attribute from geometry",
	AttributeGroup_remove_call,
	NULL
};

StructRNA RNA_AttributeGroup = {
	{(ContainerRNA *)&RNA_AssetTag, (ContainerRNA *)&RNA_ByteIntAttributeValue,
	NULL,
	{(PropertyRNA *)&rna_AttributeGroup_rna_properties, (PropertyRNA *)&rna_AttributeGroup_render_color_index}},
	"AttributeGroup", NULL, NULL, 516, NULL, "Attribute Group",
	"Group of geometry attributes",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AttributeGroup_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_AttributeGroup_new_func, (FunctionRNA *)&rna_AttributeGroup_remove_func}
};

