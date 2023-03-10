
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

#include "rna_world.c"

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

PointerPropertyRNA rna_World_animation_data;
FloatPropertyRNA rna_World_color;
PointerPropertyRNA rna_World_light_settings;
PointerPropertyRNA rna_World_mist_settings;
PointerPropertyRNA rna_World_node_tree;
BoolPropertyRNA rna_World_use_nodes;
StringPropertyRNA rna_World_lightgroup;

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



CollectionPropertyRNA rna_WorldLighting_rna_properties;
PointerPropertyRNA rna_WorldLighting_rna_type;
BoolPropertyRNA rna_WorldLighting_use_ambient_occlusion;
FloatPropertyRNA rna_WorldLighting_ao_factor;
FloatPropertyRNA rna_WorldLighting_distance;


CollectionPropertyRNA rna_WorldMistSettings_rna_properties;
PointerPropertyRNA rna_WorldMistSettings_rna_type;
BoolPropertyRNA rna_WorldMistSettings_use_mist;
FloatPropertyRNA rna_WorldMistSettings_intensity;
FloatPropertyRNA rna_WorldMistSettings_start;
FloatPropertyRNA rna_WorldMistSettings_depth;
FloatPropertyRNA rna_WorldMistSettings_height;
EnumPropertyRNA rna_WorldMistSettings_falloff;

PointerRNA World_animation_data_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

void World_color_get(PointerRNA *ptr, float values[3])
{
    World *data = (World *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->horr)[i]);
    }
}

void World_color_set(PointerRNA *ptr, const float values[3])
{
    World *data = (World *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (&data->horr)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA World_light_settings_get(PointerRNA *ptr)
{
    return rna_World_lighting_get(ptr);
}

PointerRNA World_mist_settings_get(PointerRNA *ptr)
{
    return rna_World_mist_get(ptr);
}

PointerRNA World_node_tree_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_NodeTree, data->nodetree);
}

bool World_use_nodes_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (((data->use_nodes) & 1) != 0);
}

void World_use_nodes_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->use_nodes |= 1; }
    else { data->use_nodes &= ~1; }
}

void World_lightgroup_get(PointerRNA *ptr, char *value)
{
    rna_World_lightgroup_get(ptr, value);
}

int World_lightgroup_length(PointerRNA *ptr)
{
    return rna_World_lightgroup_length(ptr);
}

void World_lightgroup_set(PointerRNA *ptr, const char *value)
{
    rna_World_lightgroup_set(ptr, value);
}

static PointerRNA WorldLighting_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void WorldLighting_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorldLighting_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorldLighting_rna_properties_get(iter);
    }
}

void WorldLighting_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = WorldLighting_rna_properties_get(iter);
    }
}

void WorldLighting_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int WorldLighting_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WorldLighting_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool WorldLighting_use_ambient_occlusion_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (((data->mode) & 64) != 0);
}

void WorldLighting_use_ambient_occlusion_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->mode |= 64; }
    else { data->mode &= ~64; }
}

float WorldLighting_ao_factor_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->aoenergy);
}

void WorldLighting_ao_factor_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->aoenergy = CLAMPIS(value, 0.0f, 2147483648.0f);
}

float WorldLighting_distance_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->aodist);
}

void WorldLighting_distance_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->aodist = CLAMPIS(value, 0.0f, FLT_MAX);
}

static PointerRNA WorldMistSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void WorldMistSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_WorldMistSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = WorldMistSettings_rna_properties_get(iter);
    }
}

void WorldMistSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = WorldMistSettings_rna_properties_get(iter);
    }
}

void WorldMistSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int WorldMistSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WorldMistSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool WorldMistSettings_use_mist_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (((data->mode) & 1) != 0);
}

void WorldMistSettings_use_mist_set(PointerRNA *ptr, bool value)
{
    World *data = (World *)(ptr->data);
    if (value) { data->mode |= 1; }
    else { data->mode &= ~1; }
}

float WorldMistSettings_intensity_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->misi);
}

void WorldMistSettings_intensity_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->misi = CLAMPIS(value, 0.0f, 1.0f);
}

float WorldMistSettings_start_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->miststa);
}

void WorldMistSettings_start_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->miststa = CLAMPIS(value, 0.0f, FLT_MAX);
}

float WorldMistSettings_depth_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->mistdist);
}

void WorldMistSettings_depth_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->mistdist = CLAMPIS(value, 0.0f, FLT_MAX);
}

float WorldMistSettings_height_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (float)(data->misthi);
}

void WorldMistSettings_height_set(PointerRNA *ptr, float value)
{
    World *data = (World *)(ptr->data);
    data->misthi = CLAMPIS(value, 0.0f, 100.0f);
}

int WorldMistSettings_falloff_get(PointerRNA *ptr)
{
    World *data = (World *)(ptr->data);
    return (int)(data->mistype);
}

void WorldMistSettings_falloff_set(PointerRNA *ptr, int value)
{
    World *data = (World *)(ptr->data);
    data->mistype = value;
}




/* World */
PointerPropertyRNA rna_World_animation_data = {
	{(PropertyRNA *)&rna_World_color, NULL,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	World_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

static float rna_World_color_default[3] = {
	0.0500000007f,
	0.0500000007f,
	0.0500000007f
};

FloatPropertyRNA rna_World_color = {
	{(PropertyRNA *)&rna_World_light_settings, (PropertyRNA *)&rna_World_animation_data,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"Color of the background",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_World_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, horr), 5, NULL},
	NULL, NULL, World_color_get, World_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0500000007f, rna_World_color_default
};

PointerPropertyRNA rna_World_light_settings = {
	{(PropertyRNA *)&rna_World_mist_settings, (PropertyRNA *)&rna_World_color,
	-1, "light_settings", 8650752, 0, 0, 0, 0, "Lighting",
	"World lighting settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	World_light_settings_get, NULL, NULL, NULL,&RNA_WorldLighting
};

PointerPropertyRNA rna_World_mist_settings = {
	{(PropertyRNA *)&rna_World_node_tree, (PropertyRNA *)&rna_World_light_settings,
	-1, "mist_settings", 8650752, 0, 0, 0, 0, "Mist",
	"World mist settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	World_mist_settings_get, NULL, NULL, NULL,&RNA_WorldMistSettings
};

PointerPropertyRNA rna_World_node_tree = {
	{(PropertyRNA *)&rna_World_use_nodes, (PropertyRNA *)&rna_World_mist_settings,
	-1, "node_tree", 8388672, 1, 0, 32, 0, "Node Tree",
	"Node tree for node based worlds",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	World_node_tree_get, NULL, NULL, NULL,&RNA_NodeTree
};

BoolPropertyRNA rna_World_use_nodes = {
	{(PropertyRNA *)&rna_World_lightgroup, (PropertyRNA *)&rna_World_node_tree,
	-1, "use_nodes", 4194305, 0, 0, 0, 0, "Use Nodes",
	"Use shader nodes to render the world",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_World_use_nodes_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	World_use_nodes_get, World_use_nodes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_World_lightgroup = {
	{NULL, (PropertyRNA *)&rna_World_use_nodes,
	-1, "lightgroup", 262145, 0, 0, 0, 0, "Lightgroup",
	"Lightgroup that the world belongs to",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	World_lightgroup_get, World_lightgroup_length, World_lightgroup_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StructRNA RNA_World = {
	{(ContainerRNA *)&RNA_WorldLighting, (ContainerRNA *)&RNA_wmTools,
	NULL,
	{(PropertyRNA *)&rna_World_animation_data, (PropertyRNA *)&rna_World_lightgroup}},
	"World", NULL, NULL, 519, NULL, "World",
	"World data-block describing the environment and ambient lighting of a scene",
	"*", 158,
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

/* Lighting */
CollectionPropertyRNA rna_WorldLighting_rna_properties = {
	{(PropertyRNA *)&rna_WorldLighting_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorldLighting_rna_properties_begin, WorldLighting_rna_properties_next, WorldLighting_rna_properties_end, WorldLighting_rna_properties_get, NULL, NULL, WorldLighting_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WorldLighting_rna_type = {
	{(PropertyRNA *)&rna_WorldLighting_use_ambient_occlusion, (PropertyRNA *)&rna_WorldLighting_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorldLighting_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_WorldLighting_use_ambient_occlusion = {
	{(PropertyRNA *)&rna_WorldLighting_ao_factor, (PropertyRNA *)&rna_WorldLighting_rna_type,
	-1, "use_ambient_occlusion", 3, 0, 0, 0, 0, "Use Ambient Occlusion",
	"Use Ambient Occlusion to add shadowing based on distance between objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorldLighting_use_ambient_occlusion_get, WorldLighting_use_ambient_occlusion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WorldLighting_ao_factor = {
	{(PropertyRNA *)&rna_WorldLighting_distance, (PropertyRNA *)&rna_WorldLighting_use_ambient_occlusion,
	-1, "ao_factor", 3, 0, 0, 4, 0, "Factor",
	"Factor for ambient occlusion blending",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, aoenergy), 5, NULL},
	WorldLighting_ao_factor_get, WorldLighting_ao_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 2147483648.0f, 0.1000000015f, 2, 1.0f, NULL
};

FloatPropertyRNA rna_WorldLighting_distance = {
	{NULL, (PropertyRNA *)&rna_WorldLighting_ao_factor,
	-1, "distance", 3, 0, 0, 4, 0, "Distance",
	"Length of rays, defines how far away other faces give occlusion effect",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, aodist), 5, NULL},
	WorldLighting_distance_get, WorldLighting_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 10.0f, NULL
};

StructRNA RNA_WorldLighting = {
	{(ContainerRNA *)&RNA_WorldMistSettings, (ContainerRNA *)&RNA_World,
	NULL,
	{(PropertyRNA *)&rna_WorldLighting_rna_properties, (PropertyRNA *)&rna_WorldLighting_distance}},
	"WorldLighting", NULL, NULL, 516, NULL, "Lighting",
	"Lighting for a World data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_WorldLighting_rna_properties,
	NULL,
	&RNA_World,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* World Mist */
CollectionPropertyRNA rna_WorldMistSettings_rna_properties = {
	{(PropertyRNA *)&rna_WorldMistSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorldMistSettings_rna_properties_begin, WorldMistSettings_rna_properties_next, WorldMistSettings_rna_properties_end, WorldMistSettings_rna_properties_get, NULL, NULL, WorldMistSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WorldMistSettings_rna_type = {
	{(PropertyRNA *)&rna_WorldMistSettings_use_mist, (PropertyRNA *)&rna_WorldMistSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorldMistSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_WorldMistSettings_use_mist = {
	{(PropertyRNA *)&rna_WorldMistSettings_intensity, (PropertyRNA *)&rna_WorldMistSettings_rna_type,
	-1, "use_mist", 3, 0, 0, 0, 0, "Use Mist",
	"Occlude objects with the environment color as they are further away",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	WorldMistSettings_use_mist_get, WorldMistSettings_use_mist_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_WorldMistSettings_intensity = {
	{(PropertyRNA *)&rna_WorldMistSettings_start, (PropertyRNA *)&rna_WorldMistSettings_use_mist,
	-1, "intensity", 3, 0, 0, 4, 0, "Minimum",
	"Overall minimum intensity of the mist effect",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, misi), 5, NULL},
	WorldMistSettings_intensity_get, WorldMistSettings_intensity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WorldMistSettings_start = {
	{(PropertyRNA *)&rna_WorldMistSettings_depth, (PropertyRNA *)&rna_WorldMistSettings_intensity,
	-1, "start", 3, 0, 0, 4, 0, "Start",
	"Starting distance of the mist, measured from the camera",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, miststa), 5, NULL},
	WorldMistSettings_start_get, WorldMistSettings_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, 5.0f, NULL
};

FloatPropertyRNA rna_WorldMistSettings_depth = {
	{(PropertyRNA *)&rna_WorldMistSettings_height, (PropertyRNA *)&rna_WorldMistSettings_start,
	-1, "depth", 3, 0, 0, 4, 0, "Depth",
	"Distance over which the mist effect fades in",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, mistdist), 5, NULL},
	WorldMistSettings_depth_get, WorldMistSettings_depth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 2, 25.0f, NULL
};

FloatPropertyRNA rna_WorldMistSettings_height = {
	{(PropertyRNA *)&rna_WorldMistSettings_falloff, (PropertyRNA *)&rna_WorldMistSettings_depth,
	-1, "height", 3, 0, 0, 4, 0, "Height",
	"Control how much mist density decreases with height",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_World_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, misthi), 5, NULL},
	WorldMistSettings_height_get, WorldMistSettings_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_WorldMistSettings_falloff_items[4] = {
	{0, "QUADRATIC", 0, "Quadratic", "Use quadratic progression"},
	{1, "LINEAR", 0, "Linear", "Use linear progression"},
	{2, "INVERSE_QUADRATIC", 0, "Inverse Quadratic", "Use inverse quadratic progression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WorldMistSettings_falloff = {
	{NULL, (PropertyRNA *)&rna_WorldMistSettings_height,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"Type of transition used to fade mist",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_World_draw_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(World, mistype), 1, NULL},
	WorldMistSettings_falloff_get, WorldMistSettings_falloff_set, NULL, NULL, NULL, rna_WorldMistSettings_falloff_items, 3, 0
};

StructRNA RNA_WorldMistSettings = {
	{(ContainerRNA *)&RNA_MovieClip, (ContainerRNA *)&RNA_WorldLighting,
	NULL,
	{(PropertyRNA *)&rna_WorldMistSettings_rna_properties, (PropertyRNA *)&rna_WorldMistSettings_falloff}},
	"WorldMistSettings", NULL, NULL, 516, NULL, "World Mist",
	"Mist settings for a World data-block",
	"*", 17,
	NULL, (PropertyRNA *)&rna_WorldMistSettings_rna_properties,
	NULL,
	&RNA_World,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

