
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

#include "rna_depsgraph.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_DepsgraphObjectInstance_rna_properties;
PointerPropertyRNA rna_DepsgraphObjectInstance_rna_type;
PointerPropertyRNA rna_DepsgraphObjectInstance_object;
BoolPropertyRNA rna_DepsgraphObjectInstance_show_self;
BoolPropertyRNA rna_DepsgraphObjectInstance_show_particles;
BoolPropertyRNA rna_DepsgraphObjectInstance_is_instance;
PointerPropertyRNA rna_DepsgraphObjectInstance_instance_object;
PointerPropertyRNA rna_DepsgraphObjectInstance_parent;
PointerPropertyRNA rna_DepsgraphObjectInstance_particle_system;
IntPropertyRNA rna_DepsgraphObjectInstance_persistent_id;
IntPropertyRNA rna_DepsgraphObjectInstance_random_id;
FloatPropertyRNA rna_DepsgraphObjectInstance_matrix_world;
FloatPropertyRNA rna_DepsgraphObjectInstance_orco;
FloatPropertyRNA rna_DepsgraphObjectInstance_uv;


CollectionPropertyRNA rna_DepsgraphUpdate_rna_properties;
PointerPropertyRNA rna_DepsgraphUpdate_rna_type;
PointerPropertyRNA rna_DepsgraphUpdate_id;
BoolPropertyRNA rna_DepsgraphUpdate_is_updated_transform;
BoolPropertyRNA rna_DepsgraphUpdate_is_updated_geometry;
BoolPropertyRNA rna_DepsgraphUpdate_is_updated_shading;


CollectionPropertyRNA rna_Depsgraph_rna_properties;
PointerPropertyRNA rna_Depsgraph_rna_type;
EnumPropertyRNA rna_Depsgraph_mode;
PointerPropertyRNA rna_Depsgraph_scene;
PointerPropertyRNA rna_Depsgraph_view_layer;
PointerPropertyRNA rna_Depsgraph_scene_eval;
PointerPropertyRNA rna_Depsgraph_view_layer_eval;
CollectionPropertyRNA rna_Depsgraph_ids;
CollectionPropertyRNA rna_Depsgraph_objects;
CollectionPropertyRNA rna_Depsgraph_object_instances;
CollectionPropertyRNA rna_Depsgraph_updates;

extern FunctionRNA rna_Depsgraph_debug_relations_graphviz_func;
extern StringPropertyRNA rna_Depsgraph_debug_relations_graphviz_filename;

extern FunctionRNA rna_Depsgraph_debug_stats_gnuplot_func;
extern StringPropertyRNA rna_Depsgraph_debug_stats_gnuplot_filename;
extern StringPropertyRNA rna_Depsgraph_debug_stats_gnuplot_output_filename;

extern FunctionRNA rna_Depsgraph_debug_tag_update_func;
extern FunctionRNA rna_Depsgraph_debug_stats_func;
extern StringPropertyRNA rna_Depsgraph_debug_stats_result;

extern FunctionRNA rna_Depsgraph_update_func;
extern FunctionRNA rna_Depsgraph_id_eval_get_func;
extern PointerPropertyRNA rna_Depsgraph_id_eval_get_id;
extern PointerPropertyRNA rna_Depsgraph_id_eval_get_id_eval;

extern FunctionRNA rna_Depsgraph_id_type_updated_func;
extern EnumPropertyRNA rna_Depsgraph_id_type_updated_id_type;
extern BoolPropertyRNA rna_Depsgraph_id_type_updated_updated;


static PointerRNA DepsgraphObjectInstance_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DepsgraphObjectInstance_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DepsgraphObjectInstance_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DepsgraphObjectInstance_rna_properties_get(iter);
    }
}

void DepsgraphObjectInstance_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DepsgraphObjectInstance_rna_properties_get(iter);
    }
}

void DepsgraphObjectInstance_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DepsgraphObjectInstance_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DepsgraphObjectInstance_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA DepsgraphObjectInstance_object_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_object_get(ptr);
}

bool DepsgraphObjectInstance_show_self_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_show_self_get(ptr);
}

bool DepsgraphObjectInstance_show_particles_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_show_particles_get(ptr);
}

bool DepsgraphObjectInstance_is_instance_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_is_instance_get(ptr);
}

PointerRNA DepsgraphObjectInstance_instance_object_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_instance_object_get(ptr);
}

PointerRNA DepsgraphObjectInstance_parent_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_parent_get(ptr);
}

PointerRNA DepsgraphObjectInstance_particle_system_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_particle_system_get(ptr);
}

void DepsgraphObjectInstance_persistent_id_get(PointerRNA *ptr, int values[8])
{
    rna_DepsgraphObjectInstance_persistent_id_get(ptr, values);
}

int DepsgraphObjectInstance_random_id_get(PointerRNA *ptr)
{
    return rna_DepsgraphObjectInstance_random_id_get(ptr);
}

void DepsgraphObjectInstance_matrix_world_get(PointerRNA *ptr, float values[16])
{
    rna_DepsgraphObjectInstance_matrix_world_get(ptr, values);
}

void DepsgraphObjectInstance_orco_get(PointerRNA *ptr, float values[3])
{
    rna_DepsgraphObjectInstance_orco_get(ptr, values);
}

void DepsgraphObjectInstance_uv_get(PointerRNA *ptr, float values[2])
{
    rna_DepsgraphObjectInstance_uv_get(ptr, values);
}

static PointerRNA DepsgraphUpdate_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void DepsgraphUpdate_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_DepsgraphUpdate_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = DepsgraphUpdate_rna_properties_get(iter);
    }
}

void DepsgraphUpdate_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = DepsgraphUpdate_rna_properties_get(iter);
    }
}

void DepsgraphUpdate_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int DepsgraphUpdate_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA DepsgraphUpdate_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA DepsgraphUpdate_id_get(PointerRNA *ptr)
{
    return rna_DepsgraphUpdate_id_get(ptr);
}

bool DepsgraphUpdate_is_updated_transform_get(PointerRNA *ptr)
{
    return rna_DepsgraphUpdate_is_updated_transform_get(ptr);
}

bool DepsgraphUpdate_is_updated_geometry_get(PointerRNA *ptr)
{
    return rna_DepsgraphUpdate_is_updated_geometry_get(ptr);
}

bool DepsgraphUpdate_is_updated_shading_get(PointerRNA *ptr)
{
    return rna_DepsgraphUpdate_is_updated_shading_get(ptr);
}

static PointerRNA Depsgraph_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Depsgraph_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Depsgraph_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_rna_properties_get(iter);
    }
}

void Depsgraph_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_rna_properties_get(iter);
    }
}

void Depsgraph_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Depsgraph_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Depsgraph_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int Depsgraph_mode_get(PointerRNA *ptr)
{
    return rna_Depsgraph_mode_get(ptr);
}

PointerRNA Depsgraph_scene_get(PointerRNA *ptr)
{
    return rna_Depsgraph_scene_get(ptr);
}

PointerRNA Depsgraph_view_layer_get(PointerRNA *ptr)
{
    return rna_Depsgraph_view_layer_get(ptr);
}

PointerRNA Depsgraph_scene_eval_get(PointerRNA *ptr)
{
    return rna_Depsgraph_scene_eval_get(ptr);
}

PointerRNA Depsgraph_view_layer_eval_get(PointerRNA *ptr)
{
    return rna_Depsgraph_view_layer_eval_get(ptr);
}

static PointerRNA Depsgraph_ids_get(CollectionPropertyIterator *iter)
{
    return rna_Depsgraph_ids_get(iter);
}

void Depsgraph_ids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Depsgraph_ids;

    rna_Depsgraph_ids_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_ids_get(iter);
    }
}

void Depsgraph_ids_next(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_ids_next(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_ids_get(iter);
    }
}

void Depsgraph_ids_end(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_ids_end(iter);
}

static PointerRNA Depsgraph_objects_get(CollectionPropertyIterator *iter)
{
    return rna_Depsgraph_objects_get(iter);
}

void Depsgraph_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Depsgraph_objects;

    rna_Depsgraph_objects_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_objects_get(iter);
    }
}

void Depsgraph_objects_next(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_objects_next(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_objects_get(iter);
    }
}

void Depsgraph_objects_end(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_objects_end(iter);
}

static PointerRNA Depsgraph_object_instances_get(CollectionPropertyIterator *iter)
{
    return rna_Depsgraph_object_instances_get(iter);
}

void Depsgraph_object_instances_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Depsgraph_object_instances;

    rna_Depsgraph_object_instances_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_object_instances_get(iter);
    }
}

void Depsgraph_object_instances_next(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_object_instances_next(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_object_instances_get(iter);
    }
}

void Depsgraph_object_instances_end(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_object_instances_end(iter);
}

static PointerRNA Depsgraph_updates_get(CollectionPropertyIterator *iter)
{
    return rna_Depsgraph_updates_get(iter);
}

void Depsgraph_updates_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Depsgraph_updates;

    rna_Depsgraph_updates_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_updates_get(iter);
    }
}

void Depsgraph_updates_next(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_ids_next(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_updates_get(iter);
    }
}

void Depsgraph_updates_end(CollectionPropertyIterator *iter)
{
    rna_Depsgraph_ids_end(iter);
}



void Depsgraph_debug_relations_graphviz_func(struct Depsgraph *_self, const char * filename)
{
	rna_Depsgraph_debug_relations_graphviz(_self, filename);
}

void Depsgraph_debug_relations_graphviz_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	const char * filename;
	char *_data;
	
	_self = (struct Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
	
	rna_Depsgraph_debug_relations_graphviz(_self, filename);
}

void Depsgraph_debug_stats_gnuplot_func(struct Depsgraph *_self, const char * filename, const char * output_filename)
{
	rna_Depsgraph_debug_stats_gnuplot(_self, filename, output_filename);
}

void Depsgraph_debug_stats_gnuplot_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	const char * filename;
	const char * output_filename;
	char *_data;
	
	_self = (struct Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	filename = *((const char * *)_data);
	_data += 8;
	output_filename = *((const char * *)_data);
	
	rna_Depsgraph_debug_stats_gnuplot(_self, filename, output_filename);
}

void Depsgraph_debug_tag_update_func(struct Depsgraph *_self)
{
	rna_Depsgraph_debug_tag_update(_self);
}

void Depsgraph_debug_tag_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	_self = (struct Depsgraph *)_ptr->data;
	
	rna_Depsgraph_debug_tag_update(_self);
}

void Depsgraph_debug_stats_func(struct Depsgraph *_self, char * result)
{
	rna_Depsgraph_debug_stats(_self, result);
}

void Depsgraph_debug_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	char * result;
	char *_data;
	
	_self = (struct Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	result = ((char * )_data);
	
	rna_Depsgraph_debug_stats(_self, result);
}

void Depsgraph_update_func(struct Depsgraph *_self, Main *bmain, ReportList *reports)
{
	rna_Depsgraph_update(_self, bmain, reports);
}

void Depsgraph_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	_self = (struct Depsgraph *)_ptr->data;
	
	rna_Depsgraph_update(_self, CTX_data_main(C), reports);
}

struct ID *Depsgraph_id_eval_get_func(struct Depsgraph *_self, struct ID *id)
{
	return rna_Depsgraph_id_eval_get(_self, id);
}

void Depsgraph_id_eval_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	struct ID *id;
	struct ID *id_eval;
	char *_data, *_retdata;
	
	_self = (struct Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((struct ID **)_data);
	_data += 8;
	_retdata = _data;
	
	id_eval = rna_Depsgraph_id_eval_get(_self, id);
	*((struct ID **)_retdata) = id_eval;
}

bool Depsgraph_id_type_updated_func(struct Depsgraph *_self, int id_type)
{
	return rna_Depsgraph_id_type_updated(_self, id_type);
}

void Depsgraph_id_type_updated_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Depsgraph *_self;
	int id_type;
	bool updated;
	char *_data, *_retdata;
	
	_self = (struct Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	id_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	updated = rna_Depsgraph_id_type_updated(_self, id_type);
	*((bool *)_retdata) = updated;
}

/* Repeated prototypes to detect errors */

void rna_Depsgraph_debug_relations_graphviz(struct Depsgraph *_self, const char * filename);
void rna_Depsgraph_debug_stats_gnuplot(struct Depsgraph *_self, const char * filename, const char * output_filename);
void rna_Depsgraph_debug_tag_update(struct Depsgraph *_self);
void rna_Depsgraph_debug_stats(struct Depsgraph *_self, char * result);
void rna_Depsgraph_update(struct Depsgraph *_self, Main *bmain, ReportList *reports);
struct ID *rna_Depsgraph_id_eval_get(struct Depsgraph *_self, struct ID *id);
bool rna_Depsgraph_id_type_updated(struct Depsgraph *_self, int id_type);

/* Dependency Graph Object Instance */
CollectionPropertyRNA rna_DepsgraphObjectInstance_rna_properties = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_rna_properties_begin, DepsgraphObjectInstance_rna_properties_next, DepsgraphObjectInstance_rna_properties_end, DepsgraphObjectInstance_rna_properties_get, NULL, NULL, DepsgraphObjectInstance_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DepsgraphObjectInstance_rna_type = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_object, (PropertyRNA *)&rna_DepsgraphObjectInstance_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_DepsgraphObjectInstance_object = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_show_self, (PropertyRNA *)&rna_DepsgraphObjectInstance_rna_type,
	-1, "object", 8388736, 0, 0, 0, 0, "Object",
	"Evaluated object the iterator points to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_object_get, NULL, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_DepsgraphObjectInstance_show_self = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_show_particles, (PropertyRNA *)&rna_DepsgraphObjectInstance_object,
	-1, "show_self", 0, 0, 0, 0, 0, "Show Self",
	"The object geometry itself should be visible in the render",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_show_self_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DepsgraphObjectInstance_show_particles = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_is_instance, (PropertyRNA *)&rna_DepsgraphObjectInstance_show_self,
	-1, "show_particles", 0, 0, 0, 0, 0, "Show Particles",
	"Particles part of the object should be visible in the render",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_show_particles_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DepsgraphObjectInstance_is_instance = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_instance_object, (PropertyRNA *)&rna_DepsgraphObjectInstance_show_particles,
	-1, "is_instance", 0, 0, 0, 0, 0, "Is Instance",
	"Denotes if the object is generated by another object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_is_instance_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DepsgraphObjectInstance_instance_object = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_parent, (PropertyRNA *)&rna_DepsgraphObjectInstance_is_instance,
	-1, "instance_object", 8388736, 0, 0, 0, 0, "Instance Object",
	"Evaluated object which is being instanced by this iterator",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_instance_object_get, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_DepsgraphObjectInstance_parent = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_particle_system, (PropertyRNA *)&rna_DepsgraphObjectInstance_instance_object,
	-1, "parent", 8388736, 0, 0, 0, 0, "Parent",
	"If the object is an instance, the parent object that generated it",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_parent_get, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_DepsgraphObjectInstance_particle_system = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_persistent_id, (PropertyRNA *)&rna_DepsgraphObjectInstance_parent,
	-1, "particle_system", 8388608, 0, 0, 0, 0, "Particle System",
	"Evaluated particle system that this object was instanced from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_particle_system_get, NULL, NULL, NULL,&RNA_ParticleSystem
};

static int rna_DepsgraphObjectInstance_persistent_id_default[8] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_DepsgraphObjectInstance_persistent_id = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_random_id, (PropertyRNA *)&rna_DepsgraphObjectInstance_particle_system,
	-1, "persistent_id", 0, 0, 0, 0, 0, "Persistent ID",
	"Persistent identifier for inter-frame matching of objects with motion blur",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {8, 0, 0}, 8,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, DepsgraphObjectInstance_persistent_id_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_DepsgraphObjectInstance_persistent_id_default
};

IntPropertyRNA rna_DepsgraphObjectInstance_random_id = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_matrix_world, (PropertyRNA *)&rna_DepsgraphObjectInstance_persistent_id,
	-1, "random_id", 0, 0, 0, 0, 0, "Instance Random ID",
	"Random id for this instance, typically for randomized shading",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphObjectInstance_random_id_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_DepsgraphObjectInstance_matrix_world_default[16] = {
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

FloatPropertyRNA rna_DepsgraphObjectInstance_matrix_world = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_orco, (PropertyRNA *)&rna_DepsgraphObjectInstance_random_id,
	-1, "matrix_world", 0, 0, 0, 0, 0, "Generated Matrix",
	"Generated transform matrix in world space",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, DepsgraphObjectInstance_matrix_world_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_DepsgraphObjectInstance_matrix_world_default
};

static float rna_DepsgraphObjectInstance_orco_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DepsgraphObjectInstance_orco = {
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_uv, (PropertyRNA *)&rna_DepsgraphObjectInstance_matrix_world,
	-1, "orco", 0, 0, 0, 0, 0, "Generated Coordinates",
	"Generated coordinates in parent object space",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, DepsgraphObjectInstance_orco_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_DepsgraphObjectInstance_orco_default
};

static float rna_DepsgraphObjectInstance_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DepsgraphObjectInstance_uv = {
	{NULL, (PropertyRNA *)&rna_DepsgraphObjectInstance_orco,
	-1, "uv", 0, 0, 0, 0, 0, "UV Coordinates",
	"UV coordinates in parent object space",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, DepsgraphObjectInstance_uv_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_DepsgraphObjectInstance_uv_default
};

StructRNA RNA_DepsgraphObjectInstance = {
	{(ContainerRNA *)&RNA_DepsgraphUpdate, (ContainerRNA *)&RNA_SoftBodySettings,
	NULL,
	{(PropertyRNA *)&rna_DepsgraphObjectInstance_rna_properties, (PropertyRNA *)&rna_DepsgraphObjectInstance_uv}},
	"DepsgraphObjectInstance", NULL, NULL, 516, NULL, "Dependency Graph Object Instance",
	"Extended information about dependency graph object iterator (Warning: All data here is \'evaluated\' one, not original .blend IDs)",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DepsgraphObjectInstance_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_DepsgraphIterator_instance,
	NULL,
	{NULL, NULL}
};

/* Dependency Graph Update */
CollectionPropertyRNA rna_DepsgraphUpdate_rna_properties = {
	{(PropertyRNA *)&rna_DepsgraphUpdate_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphUpdate_rna_properties_begin, DepsgraphUpdate_rna_properties_next, DepsgraphUpdate_rna_properties_end, DepsgraphUpdate_rna_properties_get, NULL, NULL, DepsgraphUpdate_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_DepsgraphUpdate_rna_type = {
	{(PropertyRNA *)&rna_DepsgraphUpdate_id, (PropertyRNA *)&rna_DepsgraphUpdate_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphUpdate_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_DepsgraphUpdate_id = {
	{(PropertyRNA *)&rna_DepsgraphUpdate_is_updated_transform, (PropertyRNA *)&rna_DepsgraphUpdate_rna_type,
	-1, "id", 8388736, 0, 0, 0, 0, "ID",
	"Updated data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphUpdate_id_get, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_DepsgraphUpdate_is_updated_transform = {
	{(PropertyRNA *)&rna_DepsgraphUpdate_is_updated_geometry, (PropertyRNA *)&rna_DepsgraphUpdate_id,
	-1, "is_updated_transform", 0, 0, 0, 0, 0, "Transform",
	"Object transformation is updated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphUpdate_is_updated_transform_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DepsgraphUpdate_is_updated_geometry = {
	{(PropertyRNA *)&rna_DepsgraphUpdate_is_updated_shading, (PropertyRNA *)&rna_DepsgraphUpdate_is_updated_transform,
	-1, "is_updated_geometry", 0, 0, 0, 0, 0, "Geometry",
	"Object geometry is updated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphUpdate_is_updated_geometry_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DepsgraphUpdate_is_updated_shading = {
	{NULL, (PropertyRNA *)&rna_DepsgraphUpdate_is_updated_geometry,
	-1, "is_updated_shading", 0, 0, 0, 0, 0, "Shading",
	"Object shading is updated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	DepsgraphUpdate_is_updated_shading_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_DepsgraphUpdate = {
	{(ContainerRNA *)&RNA_Depsgraph, (ContainerRNA *)&RNA_DepsgraphObjectInstance,
	NULL,
	{(PropertyRNA *)&rna_DepsgraphUpdate_rna_properties, (PropertyRNA *)&rna_DepsgraphUpdate_is_updated_shading}},
	"DepsgraphUpdate", NULL, NULL, 516, NULL, "Dependency Graph Update",
	"Information about ID that was updated",
	"*", 17,
	NULL, (PropertyRNA *)&rna_DepsgraphUpdate_rna_properties,
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

/* Dependency Graph */
CollectionPropertyRNA rna_Depsgraph_rna_properties = {
	{(PropertyRNA *)&rna_Depsgraph_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_rna_properties_begin, Depsgraph_rna_properties_next, Depsgraph_rna_properties_end, Depsgraph_rna_properties_get, NULL, NULL, Depsgraph_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Depsgraph_rna_type = {
	{(PropertyRNA *)&rna_Depsgraph_mode, (PropertyRNA *)&rna_Depsgraph_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_Depsgraph_mode_items[3] = {
	{0, "VIEWPORT", 0, "Viewport", "Viewport non-rendered mode"},
	{1, "RENDER", 0, "Render", "Render"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Depsgraph_mode = {
	{(PropertyRNA *)&rna_Depsgraph_scene, (PropertyRNA *)&rna_Depsgraph_rna_type,
	-1, "mode", 2, 0, 0, 0, 0, "Mode",
	"Evaluation mode",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_mode_get, NULL, NULL, NULL, NULL, rna_Depsgraph_mode_items, 2, 0
};

PointerPropertyRNA rna_Depsgraph_scene = {
	{(PropertyRNA *)&rna_Depsgraph_view_layer, (PropertyRNA *)&rna_Depsgraph_mode,
	-1, "scene", 8388736, 0, 0, 0, 0, "Scene",
	"Original scene dependency graph is built for",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_scene_get, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_Depsgraph_view_layer = {
	{(PropertyRNA *)&rna_Depsgraph_scene_eval, (PropertyRNA *)&rna_Depsgraph_scene,
	-1, "view_layer", 8388608, 0, 0, 0, 0, "View Layer",
	"Original view layer dependency graph is built for",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_view_layer_get, NULL, NULL, NULL,&RNA_ViewLayer
};

PointerPropertyRNA rna_Depsgraph_scene_eval = {
	{(PropertyRNA *)&rna_Depsgraph_view_layer_eval, (PropertyRNA *)&rna_Depsgraph_view_layer,
	-1, "scene_eval", 8388736, 0, 0, 0, 0, "Scene",
	"Original scene dependency graph is built for",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_scene_eval_get, NULL, NULL, NULL,&RNA_Scene
};

PointerPropertyRNA rna_Depsgraph_view_layer_eval = {
	{(PropertyRNA *)&rna_Depsgraph_ids, (PropertyRNA *)&rna_Depsgraph_scene_eval,
	-1, "view_layer_eval", 8388608, 0, 0, 0, 0, "View Layer",
	"Original view layer dependency graph is built for",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_view_layer_eval_get, NULL, NULL, NULL,&RNA_ViewLayer
};

CollectionPropertyRNA rna_Depsgraph_ids = {
	{(PropertyRNA *)&rna_Depsgraph_objects, (PropertyRNA *)&rna_Depsgraph_view_layer_eval,
	-1, "ids", 128, 0, 0, 0, 0, "IDs",
	"All evaluated data-blocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_ids_begin, Depsgraph_ids_next, Depsgraph_ids_end, Depsgraph_ids_get, NULL, NULL, NULL, NULL, &RNA_ID
};

CollectionPropertyRNA rna_Depsgraph_objects = {
	{(PropertyRNA *)&rna_Depsgraph_object_instances, (PropertyRNA *)&rna_Depsgraph_ids,
	-1, "objects", 128, 0, 0, 0, 0, "Objects",
	"Evaluated objects in the dependency graph",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_objects_begin, Depsgraph_objects_next, Depsgraph_objects_end, Depsgraph_objects_get, NULL, NULL, NULL, NULL, &RNA_Object
};

CollectionPropertyRNA rna_Depsgraph_object_instances = {
	{(PropertyRNA *)&rna_Depsgraph_updates, (PropertyRNA *)&rna_Depsgraph_objects,
	-1, "object_instances", 0, 0, 0, 0, 0, "Object Instances",
	"All object instances to display or render (Warning: Only use this as an iterator, never as a sequence, and do not keep any references to its items)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_object_instances_begin, Depsgraph_object_instances_next, Depsgraph_object_instances_end, Depsgraph_object_instances_get, NULL, NULL, NULL, NULL, &RNA_DepsgraphObjectInstance
};

CollectionPropertyRNA rna_Depsgraph_updates = {
	{NULL, (PropertyRNA *)&rna_Depsgraph_object_instances,
	-1, "updates", 0, 0, 0, 0, 0, "Updates",
	"Updates to data-blocks",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Depsgraph_updates_begin, Depsgraph_updates_next, Depsgraph_updates_end, Depsgraph_updates_get, NULL, NULL, NULL, NULL, &RNA_DepsgraphUpdate
};

StringPropertyRNA rna_Depsgraph_debug_relations_graphviz_filename = {
	{NULL, NULL,
	-1, "filename", 262145, 0, 1, 0, 0, "File Name",
	"Output path for the graphviz debug file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 1024, ""
};

FunctionRNA rna_Depsgraph_debug_relations_graphviz_func = {
	{(FunctionRNA *)&rna_Depsgraph_debug_stats_gnuplot_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Depsgraph_debug_relations_graphviz_filename, (PropertyRNA *)&rna_Depsgraph_debug_relations_graphviz_filename}},
	"debug_relations_graphviz", 0, "debug_relations_graphviz",
	Depsgraph_debug_relations_graphviz_call,
	NULL
};

StringPropertyRNA rna_Depsgraph_debug_stats_gnuplot_filename = {
	{(PropertyRNA *)&rna_Depsgraph_debug_stats_gnuplot_output_filename, NULL,
	-1, "filename", 262145, 0, 1, 0, 0, "File Name",
	"Output path for the gnuplot debug file",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 1024, ""
};

StringPropertyRNA rna_Depsgraph_debug_stats_gnuplot_output_filename = {
	{NULL, (PropertyRNA *)&rna_Depsgraph_debug_stats_gnuplot_filename,
	-1, "output_filename", 262145, 0, 1, 0, 0, "Output File Name",
	"File name where gnuplot script will save the result",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 1024, ""
};

FunctionRNA rna_Depsgraph_debug_stats_gnuplot_func = {
	{(FunctionRNA *)&rna_Depsgraph_debug_tag_update_func, (FunctionRNA *)&rna_Depsgraph_debug_relations_graphviz_func,
	NULL,
	{(PropertyRNA *)&rna_Depsgraph_debug_stats_gnuplot_filename, (PropertyRNA *)&rna_Depsgraph_debug_stats_gnuplot_output_filename}},
	"debug_stats_gnuplot", 0, "debug_stats_gnuplot",
	Depsgraph_debug_stats_gnuplot_call,
	NULL
};

FunctionRNA rna_Depsgraph_debug_tag_update_func = {
	{(FunctionRNA *)&rna_Depsgraph_debug_stats_func, (FunctionRNA *)&rna_Depsgraph_debug_stats_gnuplot_func,
	NULL,
	{NULL, NULL}},
	"debug_tag_update", 0, "debug_tag_update",
	Depsgraph_debug_tag_update_call,
	NULL
};

StringPropertyRNA rna_Depsgraph_debug_stats_result = {
	{NULL, NULL,
	-1, "result", 8650753, 0, 2, 0, 0, "result",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 16384, ""
};

FunctionRNA rna_Depsgraph_debug_stats_func = {
	{(FunctionRNA *)&rna_Depsgraph_update_func, (FunctionRNA *)&rna_Depsgraph_debug_tag_update_func,
	NULL,
	{(PropertyRNA *)&rna_Depsgraph_debug_stats_result, (PropertyRNA *)&rna_Depsgraph_debug_stats_result}},
	"debug_stats", 0, "Report the number of elements in the Dependency Graph",
	Depsgraph_debug_stats_call,
	NULL
};

FunctionRNA rna_Depsgraph_update_func = {
	{(FunctionRNA *)&rna_Depsgraph_id_eval_get_func, (FunctionRNA *)&rna_Depsgraph_debug_stats_func,
	NULL,
	{NULL, NULL}},
	"update", 20, "Re-evaluate any modified data-blocks, for example for animation or modifiers. This invalidates all references to evaluated data-blocks from this dependency graph.",
	Depsgraph_update_call,
	NULL
};

PointerPropertyRNA rna_Depsgraph_id_eval_get_id = {
	{(PropertyRNA *)&rna_Depsgraph_id_eval_get_id_eval, NULL,
	-1, "id", 8388736, 0, 1, 0, 0, "",
	"Original ID to get evaluated complementary part for",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_Depsgraph_id_eval_get_id_eval = {
	{NULL, (PropertyRNA *)&rna_Depsgraph_id_eval_get_id,
	-1, "id_eval", 8388736, 0, 2, 0, 0, "",
	"Evaluated ID for the given original one",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_Depsgraph_id_eval_get_func = {
	{(FunctionRNA *)&rna_Depsgraph_id_type_updated_func, (FunctionRNA *)&rna_Depsgraph_update_func,
	NULL,
	{(PropertyRNA *)&rna_Depsgraph_id_eval_get_id, (PropertyRNA *)&rna_Depsgraph_id_eval_get_id_eval}},
	"id_eval_get", 0, "id_eval_get",
	Depsgraph_id_eval_get_call,
	(PropertyRNA *)&rna_Depsgraph_id_eval_get_id_eval
};

EnumPropertyRNA rna_Depsgraph_id_type_updated_id_type = {
	{(PropertyRNA *)&rna_Depsgraph_id_type_updated_updated, NULL,
	-1, "id_type", 3, 0, 1, 0, 0, "ID Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_id_type_items, 38, 17217
};

BoolPropertyRNA rna_Depsgraph_id_type_updated_updated = {
	{NULL, (PropertyRNA *)&rna_Depsgraph_id_type_updated_id_type,
	-1, "updated", 3, 0, 2, 0, 0, "Updated",
	"True if any datablock with this type was added, updated or removed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Depsgraph_id_type_updated_func = {
	{NULL, (FunctionRNA *)&rna_Depsgraph_id_eval_get_func,
	NULL,
	{(PropertyRNA *)&rna_Depsgraph_id_type_updated_id_type, (PropertyRNA *)&rna_Depsgraph_id_type_updated_updated}},
	"id_type_updated", 0, "id_type_updated",
	Depsgraph_id_type_updated_call,
	(PropertyRNA *)&rna_Depsgraph_id_type_updated_updated
};

StructRNA RNA_Depsgraph = {
	{(ContainerRNA *)&RNA_PackedFile, (ContainerRNA *)&RNA_DepsgraphUpdate,
	NULL,
	{(PropertyRNA *)&rna_Depsgraph_rna_properties, (PropertyRNA *)&rna_Depsgraph_updates}},
	"Depsgraph", NULL, NULL, 516, NULL, "Dependency Graph",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Depsgraph_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Depsgraph_debug_relations_graphviz_func, (FunctionRNA *)&rna_Depsgraph_id_type_updated_func}
};

