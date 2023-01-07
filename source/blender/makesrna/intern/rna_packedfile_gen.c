
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

#include "rna_packedfile.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_PackedFile_rna_properties;
PointerPropertyRNA rna_PackedFile_rna_type;
IntPropertyRNA rna_PackedFile_size;
StringPropertyRNA rna_PackedFile_data;

static PointerRNA PackedFile_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PackedFile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PackedFile_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PackedFile_rna_properties_get(iter);
    }
}

void PackedFile_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PackedFile_rna_properties_get(iter);
    }
}

void PackedFile_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PackedFile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PackedFile_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int PackedFile_size_get(PointerRNA *ptr)
{
    PackedFile *data = (PackedFile *)(ptr->data);
    return (int)(data->size);
}

void PackedFile_data_get(PointerRNA *ptr, char *value)
{
    rna_PackedImage_data_get(ptr, value);
}

int PackedFile_data_length(PointerRNA *ptr)
{
    return rna_PackedImage_data_len(ptr);
}


/* Packed File */
CollectionPropertyRNA rna_PackedFile_rna_properties = {
	{(PropertyRNA *)&rna_PackedFile_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PackedFile_rna_properties_begin, PackedFile_rna_properties_next, PackedFile_rna_properties_end, PackedFile_rna_properties_get, NULL, NULL, PackedFile_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PackedFile_rna_type = {
	{(PropertyRNA *)&rna_PackedFile_size, (PropertyRNA *)&rna_PackedFile_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PackedFile_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_PackedFile_size = {
	{(PropertyRNA *)&rna_PackedFile_data, (PropertyRNA *)&rna_PackedFile_rna_type,
	-1, "size", 2, 0, 0, 4, 0, "Size",
	"Size of packed file in bytes",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PackedFile, size), 0, NULL},
	PackedFile_size_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_PackedFile_data = {
	{NULL, (PropertyRNA *)&rna_PackedFile_size,
	-1, "data", 262144, 0, 0, 0, 0, "Data",
	"Raw data (bytes, exact content of the embedded file)",
	0, "*",
	PROP_STRING, PROP_BYTESTRING | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PackedFile_data_get, PackedFile_data_length, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StructRNA RNA_PackedFile = {
	{(ContainerRNA *)&RNA_PaletteColor, (ContainerRNA *)&RNA_Depsgraph,
	NULL,
	{(PropertyRNA *)&rna_PackedFile_rna_properties, (PropertyRNA *)&rna_PackedFile_data}},
	"PackedFile", NULL, NULL, 516, NULL, "Packed File",
	"External file packed into the .blend file",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PackedFile_rna_properties,
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

