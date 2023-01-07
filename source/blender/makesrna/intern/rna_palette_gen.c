
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

#include "rna_palette.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_PaletteColor_rna_properties;
PointerPropertyRNA rna_PaletteColor_rna_type;
FloatPropertyRNA rna_PaletteColor_color;
FloatPropertyRNA rna_PaletteColor_strength;
FloatPropertyRNA rna_PaletteColor_weight;


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

CollectionPropertyRNA rna_Palette_colors;

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



CollectionPropertyRNA rna_PaletteColors_rna_properties;
PointerPropertyRNA rna_PaletteColors_rna_type;
PointerPropertyRNA rna_PaletteColors_active;

extern FunctionRNA rna_PaletteColors_new_func;
extern PointerPropertyRNA rna_PaletteColors_new_color;

extern FunctionRNA rna_PaletteColors_remove_func;
extern PointerPropertyRNA rna_PaletteColors_remove_color;

extern FunctionRNA rna_PaletteColors_clear_func;

static PointerRNA PaletteColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PaletteColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaletteColor_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaletteColor_rna_properties_get(iter);
    }
}

void PaletteColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaletteColor_rna_properties_get(iter);
    }
}

void PaletteColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PaletteColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PaletteColor_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void PaletteColor_color_get(PointerRNA *ptr, float values[3])
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rgb)[i]);
    }
}

void PaletteColor_color_set(PointerRNA *ptr, const float values[3])
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->rgb)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

float PaletteColor_strength_get(PointerRNA *ptr)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    return (float)(data->value);
}

void PaletteColor_strength_set(PointerRNA *ptr, float value)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    data->value = CLAMPIS(value, 0.0f, 1.0f);
}

float PaletteColor_weight_get(PointerRNA *ptr)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    return (float)(data->value);
}

void PaletteColor_weight_set(PointerRNA *ptr, float value)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    data->value = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA Palette_colors_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PaletteColor, rna_iterator_listbase_get(iter));
}

void Palette_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Palette *data = (Palette *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Palette_colors;

    rna_iterator_listbase_begin(iter, &data->colors, NULL);

    if (iter->valid) {
        iter->ptr = Palette_colors_get(iter);
    }
}

void Palette_colors_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Palette_colors_get(iter);
    }
}

void Palette_colors_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Palette_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Palette_colors_begin(&iter, ptr);

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
        if (found) { *r_ptr = Palette_colors_get(&iter); }
    }

    Palette_colors_end(&iter);

    return found;
}

static PointerRNA PaletteColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PaletteColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PaletteColors_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaletteColors_rna_properties_get(iter);
    }
}

void PaletteColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PaletteColors_rna_properties_get(iter);
    }
}

void PaletteColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PaletteColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PaletteColors_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA PaletteColors_active_get(PointerRNA *ptr)
{
    return rna_Palette_active_color_get(ptr);
}

void PaletteColors_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Palette_active_color_set(ptr, value, reports);
}



struct PaletteColor *PaletteColors_new_func(struct Palette *_self)
{
	return rna_Palette_color_new(_self);
}

void PaletteColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Palette *_self;
	struct PaletteColor *color;
	char *_data, *_retdata;
	
	_self = (struct Palette *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	color = rna_Palette_color_new(_self);
	*((struct PaletteColor **)_retdata) = color;
}

void PaletteColors_remove_func(struct Palette *_self, ReportList *reports, struct PointerRNA *color)
{
	rna_Palette_color_remove(_self, reports, color);
}

void PaletteColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Palette *_self;
	struct PointerRNA *color;
	char *_data;
	
	_self = (struct Palette *)_ptr->data;
	_data = (char *)_parms->data;
	color = *((struct PointerRNA **)_data);
	
	rna_Palette_color_remove(_self, reports, color);
}

void PaletteColors_clear_func(struct Palette *_self)
{
	rna_Palette_color_clear(_self);
}

void PaletteColors_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Palette *_self;
	_self = (struct Palette *)_ptr->data;
	
	rna_Palette_color_clear(_self);
}

/* Repeated prototypes to detect errors */

struct PaletteColor *rna_Palette_color_new(struct Palette *_self);
void rna_Palette_color_remove(struct Palette *_self, ReportList *reports, struct PointerRNA *color);
void rna_Palette_color_clear(struct Palette *_self);

/* Palette Color */
CollectionPropertyRNA rna_PaletteColor_rna_properties = {
	{(PropertyRNA *)&rna_PaletteColor_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaletteColor_rna_properties_begin, PaletteColor_rna_properties_next, PaletteColor_rna_properties_end, PaletteColor_rna_properties_get, NULL, NULL, PaletteColor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PaletteColor_rna_type = {
	{(PropertyRNA *)&rna_PaletteColor_color, (PropertyRNA *)&rna_PaletteColor_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaletteColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_PaletteColor_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PaletteColor_color = {
	{(PropertyRNA *)&rna_PaletteColor_strength, (PropertyRNA *)&rna_PaletteColor_rna_type,
	-1, "color", 65537, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaletteColor, rgb), 5, NULL},
	NULL, NULL, PaletteColor_color_get, PaletteColor_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_PaletteColor_color_default
};

FloatPropertyRNA rna_PaletteColor_strength = {
	{(PropertyRNA *)&rna_PaletteColor_weight, (PropertyRNA *)&rna_PaletteColor_color,
	-1, "strength", 1, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaletteColor, value), 5, NULL},
	PaletteColor_strength_get, PaletteColor_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PaletteColor_weight = {
	{NULL, (PropertyRNA *)&rna_PaletteColor_strength,
	-1, "weight", 1, 0, 0, 4, 0, "Weight",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 84869120, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(PaletteColor, value), 5, NULL},
	PaletteColor_weight_get, PaletteColor_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_PaletteColor = {
	{(ContainerRNA *)&RNA_Palette, (ContainerRNA *)&RNA_PackedFile,
	NULL,
	{(PropertyRNA *)&rna_PaletteColor_rna_properties, (PropertyRNA *)&rna_PaletteColor_weight}},
	"PaletteColor", NULL, NULL, 516, NULL, "Palette Color",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PaletteColor_rna_properties,
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

/* Palette */
CollectionPropertyRNA rna_Palette_colors = {
	{NULL, NULL,
	-1, "colors", 0, 0, 0, 0, 0, "colors",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_PaletteColors},
	Palette_colors_begin, Palette_colors_next, Palette_colors_end, Palette_colors_get, NULL, Palette_colors_lookup_int, NULL, NULL, &RNA_PaletteColor
};

StructRNA RNA_Palette = {
	{(ContainerRNA *)&RNA_PaletteColors, (ContainerRNA *)&RNA_PaletteColor,
	NULL,
	{(PropertyRNA *)&rna_Palette_colors, (PropertyRNA *)&rna_Palette_colors}},
	"Palette", NULL, NULL, 519, NULL, "Palette",
	"",
	"*", 54,
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

/* Palette Splines */
CollectionPropertyRNA rna_PaletteColors_rna_properties = {
	{(PropertyRNA *)&rna_PaletteColors_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaletteColors_rna_properties_begin, PaletteColors_rna_properties_next, PaletteColors_rna_properties_end, PaletteColors_rna_properties_get, NULL, NULL, PaletteColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PaletteColors_rna_type = {
	{(PropertyRNA *)&rna_PaletteColors_active, (PropertyRNA *)&rna_PaletteColors_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaletteColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_PaletteColors_active = {
	{NULL, (PropertyRNA *)&rna_PaletteColors_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Palette Color",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PaletteColors_active_get, PaletteColors_active_set, NULL, NULL,&RNA_PaletteColor
};

PointerPropertyRNA rna_PaletteColors_new_color = {
	{NULL, NULL,
	-1, "color", 8388608, 0, 2, 0, 0, "",
	"The newly created color",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PaletteColor
};

FunctionRNA rna_PaletteColors_new_func = {
	{(FunctionRNA *)&rna_PaletteColors_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_PaletteColors_new_color, (PropertyRNA *)&rna_PaletteColors_new_color}},
	"new", 0, "Add a new color to the palette",
	PaletteColors_new_call,
	(PropertyRNA *)&rna_PaletteColors_new_color
};

PointerPropertyRNA rna_PaletteColors_remove_color = {
	{NULL, NULL,
	-1, "color", 262144, 0, 5, 0, 0, "",
	"The color to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PaletteColor
};

FunctionRNA rna_PaletteColors_remove_func = {
	{(FunctionRNA *)&rna_PaletteColors_clear_func, (FunctionRNA *)&rna_PaletteColors_new_func,
	NULL,
	{(PropertyRNA *)&rna_PaletteColors_remove_color, (PropertyRNA *)&rna_PaletteColors_remove_color}},
	"remove", 16, "Remove a color from the palette",
	PaletteColors_remove_call,
	NULL
};

FunctionRNA rna_PaletteColors_clear_func = {
	{NULL, (FunctionRNA *)&rna_PaletteColors_remove_func,
	NULL,
	{NULL, NULL}},
	"clear", 0, "Remove all colors from the palette",
	PaletteColors_clear_call,
	NULL
};

StructRNA RNA_PaletteColors = {
	{(ContainerRNA *)&RNA_ParticleTarget, (ContainerRNA *)&RNA_Palette,
	NULL,
	{(PropertyRNA *)&rna_PaletteColors_rna_properties, (PropertyRNA *)&rna_PaletteColors_active}},
	"PaletteColors", NULL, NULL, 516, NULL, "Palette Splines",
	"Collection of palette colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PaletteColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PaletteColors_new_func, (FunctionRNA *)&rna_PaletteColors_clear_func}
};

