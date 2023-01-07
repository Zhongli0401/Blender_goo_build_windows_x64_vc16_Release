
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

#include "rna_rigidbody.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_RigidBodyWorld_rna_properties;
PointerPropertyRNA rna_RigidBodyWorld_rna_type;
PointerPropertyRNA rna_RigidBodyWorld_collection;
PointerPropertyRNA rna_RigidBodyWorld_constraints;
BoolPropertyRNA rna_RigidBodyWorld_enabled;
FloatPropertyRNA rna_RigidBodyWorld_time_scale;
IntPropertyRNA rna_RigidBodyWorld_substeps_per_frame;
IntPropertyRNA rna_RigidBodyWorld_solver_iterations;
BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse;
PointerPropertyRNA rna_RigidBodyWorld_point_cache;
PointerPropertyRNA rna_RigidBodyWorld_effector_weights;

extern FunctionRNA rna_RigidBodyWorld_convex_sweep_test_func;
extern PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint;
extern FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal;
extern IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit;



CollectionPropertyRNA rna_RigidBodyObject_rna_properties;
PointerPropertyRNA rna_RigidBodyObject_rna_type;
EnumPropertyRNA rna_RigidBodyObject_type;
EnumPropertyRNA rna_RigidBodyObject_mesh_source;
BoolPropertyRNA rna_RigidBodyObject_enabled;
EnumPropertyRNA rna_RigidBodyObject_collision_shape;
BoolPropertyRNA rna_RigidBodyObject_kinematic;
BoolPropertyRNA rna_RigidBodyObject_use_deform;
FloatPropertyRNA rna_RigidBodyObject_mass;
BoolPropertyRNA rna_RigidBodyObject_use_deactivation;
BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated;
FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity;
FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity;
FloatPropertyRNA rna_RigidBodyObject_linear_damping;
FloatPropertyRNA rna_RigidBodyObject_angular_damping;
FloatPropertyRNA rna_RigidBodyObject_friction;
FloatPropertyRNA rna_RigidBodyObject_restitution;
BoolPropertyRNA rna_RigidBodyObject_use_margin;
FloatPropertyRNA rna_RigidBodyObject_collision_margin;
BoolPropertyRNA rna_RigidBodyObject_collision_collections;


CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties;
PointerPropertyRNA rna_RigidBodyConstraint_rna_type;
EnumPropertyRNA rna_RigidBodyConstraint_type;
EnumPropertyRNA rna_RigidBodyConstraint_spring_type;
BoolPropertyRNA rna_RigidBodyConstraint_enabled;
BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions;
PointerPropertyRNA rna_RigidBodyConstraint_object1;
PointerPropertyRNA rna_RigidBodyConstraint_object2;
BoolPropertyRNA rna_RigidBodyConstraint_use_breaking;
FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold;
BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations;
IntPropertyRNA rna_RigidBodyConstraint_solver_iterations;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_x;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_y;
BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_z;
BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin;
BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower;
FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_x;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_y;
FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_z;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_x;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_y;
FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_z;
FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity;
FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse;
FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity;
FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse;

static PointerRNA RigidBodyWorld_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RigidBodyWorld_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RigidBodyWorld_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyWorld_rna_properties_get(iter);
    }
}

void RigidBodyWorld_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyWorld_rna_properties_get(iter);
    }
}

void RigidBodyWorld_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RigidBodyWorld_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RigidBodyWorld_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA RigidBodyWorld_collection_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->group);
}

void RigidBodyWorld_collection_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->group) {
        id_us_min((ID *)data->group);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->group = value.data;
}

PointerRNA RigidBodyWorld_constraints_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Collection, data->constraints);
}

void RigidBodyWorld_constraints_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->constraints) {
        id_us_min((ID *)data->constraints);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->constraints = value.data;
}

bool RigidBodyWorld_enabled_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return !(((data->flag) & 1) != 0);
}

void RigidBodyWorld_enabled_set(PointerRNA *ptr, bool value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    if (!value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

float RigidBodyWorld_time_scale_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (float)(data->time_scale);
}

void RigidBodyWorld_time_scale_set(PointerRNA *ptr, float value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    data->time_scale = CLAMPIS(value, 0.0f, 100.0f);
}

int RigidBodyWorld_substeps_per_frame_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (int)(data->substeps_per_frame);
}

void RigidBodyWorld_substeps_per_frame_set(PointerRNA *ptr, int value)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    data->substeps_per_frame = CLAMPIS(value, 1, 32767);
}

int RigidBodyWorld_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (int)(data->num_solver_iterations);
}

void RigidBodyWorld_solver_iterations_set(PointerRNA *ptr, int value)
{
    rna_RigidBodyWorld_num_solver_iterations_set(ptr, value);
}

bool RigidBodyWorld_use_split_impulse_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void RigidBodyWorld_use_split_impulse_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyWorld_split_impulse_set(ptr, value);
}

PointerRNA RigidBodyWorld_point_cache_get(PointerRNA *ptr)
{
    return rna_RigidBodyWorld_PointCache_get(ptr);
}

PointerRNA RigidBodyWorld_effector_weights_get(PointerRNA *ptr)
{
    RigidBodyWorld *data = (RigidBodyWorld *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

static PointerRNA RigidBodyObject_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RigidBodyObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RigidBodyObject_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyObject_rna_properties_get(iter);
    }
}

void RigidBodyObject_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyObject_rna_properties_get(iter);
    }
}

void RigidBodyObject_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RigidBodyObject_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RigidBodyObject_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int RigidBodyObject_type_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->type);
}

void RigidBodyObject_type_set(PointerRNA *ptr, int value)
{
    rna_RigidBodyOb_type_set(ptr, value);
}

int RigidBodyObject_mesh_source_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->mesh_source);
}

void RigidBodyObject_mesh_source_set(PointerRNA *ptr, int value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    data->mesh_source = value;
}

bool RigidBodyObject_enabled_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return !(((data->flag) & 32) != 0);
}

void RigidBodyObject_enabled_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyOb_disabled_set(ptr, value);
}

int RigidBodyObject_collision_shape_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (int)(data->shape);
}

void RigidBodyObject_collision_shape_set(PointerRNA *ptr, int value)
{
    rna_RigidBodyOb_shape_set(ptr, value);
}

bool RigidBodyObject_kinematic_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void RigidBodyObject_kinematic_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyOb_kinematic_state_set(ptr, value);
}

bool RigidBodyObject_use_deform_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void RigidBodyObject_use_deform_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

float RigidBodyObject_mass_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->mass);
}

void RigidBodyObject_mass_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_mass_set(ptr, value);
}

bool RigidBodyObject_use_deactivation_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void RigidBodyObject_use_deactivation_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyOb_activation_state_set(ptr, value);
}

bool RigidBodyObject_use_start_deactivated_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void RigidBodyObject_use_start_deactivated_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

float RigidBodyObject_deactivate_linear_velocity_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->lin_sleep_thresh);
}

void RigidBodyObject_deactivate_linear_velocity_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_linear_sleepThresh_set(ptr, value);
}

float RigidBodyObject_deactivate_angular_velocity_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->ang_sleep_thresh);
}

void RigidBodyObject_deactivate_angular_velocity_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_angular_sleepThresh_set(ptr, value);
}

float RigidBodyObject_linear_damping_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->lin_damping);
}

void RigidBodyObject_linear_damping_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_linear_damping_set(ptr, value);
}

float RigidBodyObject_angular_damping_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->ang_damping);
}

void RigidBodyObject_angular_damping_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_angular_damping_set(ptr, value);
}

float RigidBodyObject_friction_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->friction);
}

void RigidBodyObject_friction_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_friction_set(ptr, value);
}

float RigidBodyObject_restitution_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->restitution);
}

void RigidBodyObject_restitution_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_restitution_set(ptr, value);
}

bool RigidBodyObject_use_margin_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void RigidBodyObject_use_margin_set(PointerRNA *ptr, bool value)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

float RigidBodyObject_collision_margin_get(PointerRNA *ptr)
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    return (float)(data->margin);
}

void RigidBodyObject_collision_margin_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyOb_collision_margin_set(ptr, value);
}

void RigidBodyObject_collision_collections_get(PointerRNA *ptr, bool values[20])
{
    RigidBodyOb *data = (RigidBodyOb *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 20; i++) {
        values[i] = ((data->col_groups & (1 << i)) != 0);
    }
}

void RigidBodyObject_collision_collections_set(PointerRNA *ptr, const bool values[20])
{
    rna_RigidBodyOb_collision_collections_set(ptr, values);
}

static PointerRNA RigidBodyConstraint_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void RigidBodyConstraint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
    }
}

void RigidBodyConstraint_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = RigidBodyConstraint_rna_properties_get(iter);
    }
}

void RigidBodyConstraint_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int RigidBodyConstraint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA RigidBodyConstraint_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int RigidBodyConstraint_type_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->type);
}

void RigidBodyConstraint_type_set(PointerRNA *ptr, int value)
{
    rna_RigidBodyCon_type_set(ptr, value);
}

int RigidBodyConstraint_spring_type_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->spring_type);
}

void RigidBodyConstraint_spring_type_set(PointerRNA *ptr, int value)
{
    rna_RigidBodyCon_spring_type_set(ptr, value);
}

bool RigidBodyConstraint_enabled_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void RigidBodyConstraint_enabled_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyCon_enabled_set(ptr, value);
}

bool RigidBodyConstraint_disable_collisions_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void RigidBodyConstraint_disable_collisions_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyCon_disable_collisions_set(ptr, value);
}

PointerRNA RigidBodyConstraint_object1_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob1);
}

void RigidBodyConstraint_object1_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->ob1 = value.data;
}

PointerRNA RigidBodyConstraint_object2_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob2);
}

void RigidBodyConstraint_object2_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->ob2 = value.data;
}

bool RigidBodyConstraint_use_breaking_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void RigidBodyConstraint_use_breaking_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyCon_use_breaking_set(ptr, value);
}

float RigidBodyConstraint_breaking_threshold_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->breaking_threshold);
}

void RigidBodyConstraint_breaking_threshold_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_breaking_threshold_set(ptr, value);
}

bool RigidBodyConstraint_use_override_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void RigidBodyConstraint_use_override_solver_iterations_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyCon_override_solver_iterations_set(ptr, value);
}

int RigidBodyConstraint_solver_iterations_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (int)(data->num_solver_iterations);
}

void RigidBodyConstraint_solver_iterations_set(PointerRNA *ptr, int value)
{
    rna_RigidBodyCon_num_solver_iterations_set(ptr, value);
}

bool RigidBodyConstraint_use_limit_lin_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void RigidBodyConstraint_use_limit_lin_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool RigidBodyConstraint_use_limit_lin_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void RigidBodyConstraint_use_limit_lin_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool RigidBodyConstraint_use_limit_lin_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void RigidBodyConstraint_use_limit_lin_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool RigidBodyConstraint_use_limit_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void RigidBodyConstraint_use_limit_ang_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool RigidBodyConstraint_use_limit_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void RigidBodyConstraint_use_limit_ang_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool RigidBodyConstraint_use_limit_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void RigidBodyConstraint_use_limit_ang_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool RigidBodyConstraint_use_spring_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void RigidBodyConstraint_use_spring_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool RigidBodyConstraint_use_spring_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void RigidBodyConstraint_use_spring_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool RigidBodyConstraint_use_spring_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void RigidBodyConstraint_use_spring_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool RigidBodyConstraint_use_spring_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 65536) != 0);
}

void RigidBodyConstraint_use_spring_ang_x_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 65536; }
    else { data->flag &= ~65536; }
}

bool RigidBodyConstraint_use_spring_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

void RigidBodyConstraint_use_spring_ang_y_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

bool RigidBodyConstraint_use_spring_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 262144) != 0);
}

void RigidBodyConstraint_use_spring_ang_z_set(PointerRNA *ptr, bool value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    if (value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

bool RigidBodyConstraint_use_motor_lin_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

void RigidBodyConstraint_use_motor_lin_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyCon_use_motor_lin_set(ptr, value);
}

bool RigidBodyConstraint_use_motor_ang_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

void RigidBodyConstraint_use_motor_ang_set(PointerRNA *ptr, bool value)
{
    rna_RigidBodyCon_use_motor_ang_set(ptr, value);
}

float RigidBodyConstraint_limit_lin_x_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_x_lower);
}

void RigidBodyConstraint_limit_lin_x_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_x_lower = value;
}

float RigidBodyConstraint_limit_lin_x_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_x_upper);
}

void RigidBodyConstraint_limit_lin_x_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_x_upper = value;
}

float RigidBodyConstraint_limit_lin_y_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_y_lower);
}

void RigidBodyConstraint_limit_lin_y_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_y_lower = value;
}

float RigidBodyConstraint_limit_lin_y_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_y_upper);
}

void RigidBodyConstraint_limit_lin_y_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_y_upper = value;
}

float RigidBodyConstraint_limit_lin_z_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_z_lower);
}

void RigidBodyConstraint_limit_lin_z_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_z_lower = value;
}

float RigidBodyConstraint_limit_lin_z_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_lin_z_upper);
}

void RigidBodyConstraint_limit_lin_z_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_lin_z_upper = value;
}

float RigidBodyConstraint_limit_ang_x_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_x_lower);
}

void RigidBodyConstraint_limit_ang_x_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_x_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_x_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_x_upper);
}

void RigidBodyConstraint_limit_ang_x_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_x_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_y_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_y_lower);
}

void RigidBodyConstraint_limit_ang_y_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_y_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_y_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_y_upper);
}

void RigidBodyConstraint_limit_ang_y_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_y_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_z_lower_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_z_lower);
}

void RigidBodyConstraint_limit_ang_z_lower_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_z_lower = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_limit_ang_z_upper_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->limit_ang_z_upper);
}

void RigidBodyConstraint_limit_ang_z_upper_set(PointerRNA *ptr, float value)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    data->limit_ang_z_upper = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyConstraint_spring_stiffness_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_x);
}

void RigidBodyConstraint_spring_stiffness_x_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_stiffness_x_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_y);
}

void RigidBodyConstraint_spring_stiffness_y_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_stiffness_y_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_z);
}

void RigidBodyConstraint_spring_stiffness_z_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_stiffness_z_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_x);
}

void RigidBodyConstraint_spring_stiffness_ang_x_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_stiffness_ang_x_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_y);
}

void RigidBodyConstraint_spring_stiffness_ang_y_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_stiffness_ang_y_set(ptr, value);
}

float RigidBodyConstraint_spring_stiffness_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_stiffness_ang_z);
}

void RigidBodyConstraint_spring_stiffness_ang_z_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_stiffness_ang_z_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_x);
}

void RigidBodyConstraint_spring_damping_x_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_damping_x_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_y);
}

void RigidBodyConstraint_spring_damping_y_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_damping_y_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_z);
}

void RigidBodyConstraint_spring_damping_z_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_damping_z_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_ang_x_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_x);
}

void RigidBodyConstraint_spring_damping_ang_x_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_damping_ang_x_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_ang_y_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_y);
}

void RigidBodyConstraint_spring_damping_ang_y_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_damping_ang_y_set(ptr, value);
}

float RigidBodyConstraint_spring_damping_ang_z_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->spring_damping_ang_z);
}

void RigidBodyConstraint_spring_damping_ang_z_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_spring_damping_ang_z_set(ptr, value);
}

float RigidBodyConstraint_motor_lin_target_velocity_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_lin_target_velocity);
}

void RigidBodyConstraint_motor_lin_target_velocity_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_motor_lin_target_velocity_set(ptr, value);
}

float RigidBodyConstraint_motor_lin_max_impulse_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_lin_max_impulse);
}

void RigidBodyConstraint_motor_lin_max_impulse_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_motor_lin_max_impulse_set(ptr, value);
}

float RigidBodyConstraint_motor_ang_target_velocity_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_ang_target_velocity);
}

void RigidBodyConstraint_motor_ang_target_velocity_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_motor_ang_target_velocity_set(ptr, value);
}

float RigidBodyConstraint_motor_ang_max_impulse_get(PointerRNA *ptr)
{
    RigidBodyCon *data = (RigidBodyCon *)(ptr->data);
    return (float)(data->motor_ang_max_impulse);
}

void RigidBodyConstraint_motor_ang_max_impulse_set(PointerRNA *ptr, float value)
{
    rna_RigidBodyCon_motor_ang_max_impulse_set(ptr, value);
}

void RigidBodyWorld_convex_sweep_test_func(struct RigidBodyWorld *_self, ReportList *reports, struct Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit)
{
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

void RigidBodyWorld_convex_sweep_test_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RigidBodyWorld *_self;
	struct Object *object;
	float *start;
	float *end;
	float *object_location;
	float *hitpoint;
	float *normal;
	int *has_hit;
	char *_data;
	
	_self = (struct RigidBodyWorld *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((struct Object **)_data);
	_data += 8;
	start = ((float *)_data);
	_data += 16;
	end = ((float *)_data);
	_data += 16;
	object_location = ((float *)_data);
	_data += 16;
	hitpoint = ((float *)_data);
	_data += 16;
	normal = ((float *)_data);
	_data += 16;
	has_hit = ((int *)_data);
	
	rna_RigidBodyWorld_convex_sweep_test(_self, reports, object, start, end, object_location, hitpoint, normal, has_hit);
}

/* Repeated prototypes to detect errors */

void rna_RigidBodyWorld_convex_sweep_test(struct RigidBodyWorld *_self, ReportList *reports, struct Object *object, float start[3], float end[3], float object_location[3], float hitpoint[3], float normal[3], int *has_hit);



/* Rigid Body World */
CollectionPropertyRNA rna_RigidBodyWorld_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyWorld_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_rna_properties_begin, RigidBodyWorld_rna_properties_next, RigidBodyWorld_rna_properties_end, RigidBodyWorld_rna_properties_get, NULL, NULL, RigidBodyWorld_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyWorld_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyWorld_collection, (PropertyRNA *)&rna_RigidBodyWorld_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_RigidBodyWorld_collection = {
	{(PropertyRNA *)&rna_RigidBodyWorld_constraints, (PropertyRNA *)&rna_RigidBodyWorld_rna_type,
	-1, "collection", 9437377, 1, 0, 0, 0, "Collection",
	"Collection containing objects participating in this simulation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_objects_collection_update, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_collection_get, RigidBodyWorld_collection_set, NULL, NULL,&RNA_Collection
};

PointerPropertyRNA rna_RigidBodyWorld_constraints = {
	{(PropertyRNA *)&rna_RigidBodyWorld_enabled, (PropertyRNA *)&rna_RigidBodyWorld_collection,
	-1, "constraints", 9437377, 1, 0, 0, 0, "Constraints",
	"Collection containing rigid body constraint objects",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_constraints_collection_update, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_constraints_get, RigidBodyWorld_constraints_set, NULL, NULL,&RNA_Collection
};

BoolPropertyRNA rna_RigidBodyWorld_enabled = {
	{(PropertyRNA *)&rna_RigidBodyWorld_time_scale, (PropertyRNA *)&rna_RigidBodyWorld_constraints,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"Simulation will be evaluated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_enabled_get, RigidBodyWorld_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyWorld_time_scale = {
	{(PropertyRNA *)&rna_RigidBodyWorld_substeps_per_frame, (PropertyRNA *)&rna_RigidBodyWorld_enabled,
	-1, "time_scale", 3, 0, 0, 4, 0, "Time Scale",
	"Change the speed of the simulation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyWorld, time_scale), 5, NULL},
	RigidBodyWorld_time_scale_get, RigidBodyWorld_time_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, 1.0f, NULL
};

IntPropertyRNA rna_RigidBodyWorld_substeps_per_frame = {
	{(PropertyRNA *)&rna_RigidBodyWorld_solver_iterations, (PropertyRNA *)&rna_RigidBodyWorld_time_scale,
	-1, "substeps_per_frame", 3, 0, 0, 4, 0, "Substeps Per Frame",
	"Number of simulation steps taken per frame (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyWorld, substeps_per_frame), 1, NULL},
	RigidBodyWorld_substeps_per_frame_get, RigidBodyWorld_substeps_per_frame_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 1000, 1, 32767, 1, 10, NULL
};

IntPropertyRNA rna_RigidBodyWorld_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyWorld_use_split_impulse, (PropertyRNA *)&rna_RigidBodyWorld_substeps_per_frame,
	-1, "solver_iterations", 3, 0, 0, 0, 0, "Solver Iterations",
	"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_solver_iterations_get, RigidBodyWorld_solver_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 100, 1, 1000, 1, 10, NULL
};

BoolPropertyRNA rna_RigidBodyWorld_use_split_impulse = {
	{(PropertyRNA *)&rna_RigidBodyWorld_point_cache, (PropertyRNA *)&rna_RigidBodyWorld_solver_iterations,
	-1, "use_split_impulse", 3, 0, 0, 0, 0, "Split Impulse",
	"Reduce extra velocity that can build up when objects collide (lowers simulation stability a little so use only when necessary)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyWorld_reset, 83886080, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_use_split_impulse_get, RigidBodyWorld_use_split_impulse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RigidBodyWorld_point_cache = {
	{(PropertyRNA *)&rna_RigidBodyWorld_effector_weights, (PropertyRNA *)&rna_RigidBodyWorld_use_split_impulse,
	-1, "point_cache", 8650752, 0, 0, 0, 0, "Point Cache",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

PointerPropertyRNA rna_RigidBodyWorld_effector_weights = {
	{NULL, (PropertyRNA *)&rna_RigidBodyWorld_point_cache,
	-1, "effector_weights", 8388608, 1, 0, 0, 0, "Effector Weights",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyWorld_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

PointerPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_start, NULL,
	-1, "object", 262272, 0, 1, 0, 0, "",
	"Rigidbody object with a convex collision shape",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

static float rna_RigidBodyWorld_convex_sweep_test_start_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_start = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_end, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object,
	-1, "start", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_start_default
};

static float rna_RigidBodyWorld_convex_sweep_test_end_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_end = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object_location, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_start,
	-1, "end", 3, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_end_default
};

static float rna_RigidBodyWorld_convex_sweep_test_object_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_object_location = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_hitpoint, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_end,
	-1, "object_location", 8388611, 0, 2, 0, 0, "Location",
	"The hit location of this sweep test",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_object_location_default
};

static float rna_RigidBodyWorld_convex_sweep_test_hitpoint_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_hitpoint = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_normal, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object_location,
	-1, "hitpoint", 8388611, 0, 2, 0, 0, "Hitpoint",
	"The hit location of this sweep test",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_hitpoint_default
};

static float rna_RigidBodyWorld_convex_sweep_test_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_RigidBodyWorld_convex_sweep_test_normal = {
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_has_hit, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_hitpoint,
	-1, "normal", 8388611, 0, 2, 0, 0, "Normal",
	"The face normal at the sweep test hit location",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_RigidBodyWorld_convex_sweep_test_normal_default
};

IntPropertyRNA rna_RigidBodyWorld_convex_sweep_test_has_hit = {
	{NULL, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_normal,
	-1, "has_hit", 3, 0, 2, 0, 0, "",
	"If the function has found collision point, value is 1, otherwise 0",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_RigidBodyWorld_convex_sweep_test_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_object, (PropertyRNA *)&rna_RigidBodyWorld_convex_sweep_test_has_hit}},
	"convex_sweep_test", 16, "Sweep test convex rigidbody against the current rigidbody world",
	RigidBodyWorld_convex_sweep_test_call,
	NULL
};

StructRNA RNA_RigidBodyWorld = {
	{(ContainerRNA *)&RNA_RigidBodyObject, (ContainerRNA *)&RNA_RenderPass,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyWorld_rna_properties, (PropertyRNA *)&rna_RigidBodyWorld_effector_weights}},
	"RigidBodyWorld", NULL, NULL, 516, NULL, "Rigid Body World",
	"Self-contained rigid body simulation environment and settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RigidBodyWorld_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_RigidBodyWorld_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_RigidBodyWorld_convex_sweep_test_func, (FunctionRNA *)&rna_RigidBodyWorld_convex_sweep_test_func}
};

/* Rigid Body Object */
CollectionPropertyRNA rna_RigidBodyObject_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyObject_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_rna_properties_begin, RigidBodyObject_rna_properties_next, RigidBodyObject_rna_properties_end, RigidBodyObject_rna_properties_get, NULL, NULL, RigidBodyObject_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyObject_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyObject_type, (PropertyRNA *)&rna_RigidBodyObject_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_RigidBodyObject_type = {
	{(PropertyRNA *)&rna_RigidBodyObject_mesh_source, (PropertyRNA *)&rna_RigidBodyObject_rna_type,
	-1, "type", 1, 0, 0, 0, 0, "Type",
	"Role of object in Rigid Body Simulations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_type_get, RigidBodyObject_type_set, NULL, NULL, NULL, rna_enum_rigidbody_object_type_items, 2, 0
};

static const EnumPropertyItem rna_RigidBodyObject_mesh_source_items[4] = {
	{0, "BASE", 0, "Base", "Base mesh"},
	{1, "DEFORM", 0, "Deform", "Deformations (shape keys, deform modifiers)"},
	{2, "FINAL", 0, "Final", "All modifiers"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyObject_mesh_source = {
	{(PropertyRNA *)&rna_RigidBodyObject_enabled, (PropertyRNA *)&rna_RigidBodyObject_type,
	-1, "mesh_source", 1, 0, 0, 4, 0, "Mesh Source",
	"Source of the mesh used to create collision shape",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_mesh_source_update, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyOb, mesh_source), 1, NULL},
	RigidBodyObject_mesh_source_get, RigidBodyObject_mesh_source_set, NULL, NULL, NULL, rna_RigidBodyObject_mesh_source_items, 3, 0
};

BoolPropertyRNA rna_RigidBodyObject_enabled = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_shape, (PropertyRNA *)&rna_RigidBodyObject_mesh_source,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"Rigid Body actively participates to the simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_enabled_get, RigidBodyObject_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_RigidBodyObject_collision_shape = {
	{(PropertyRNA *)&rna_RigidBodyObject_kinematic, (PropertyRNA *)&rna_RigidBodyObject_enabled,
	-1, "collision_shape", 1, 0, 0, 0, 0, "Collision Shape",
	"Collision Shape of object in Rigid Body Simulations",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_update, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_collision_shape_get, RigidBodyObject_collision_shape_set, NULL, NULL, NULL, rna_enum_rigidbody_object_shape_items, 8, 0
};

BoolPropertyRNA rna_RigidBodyObject_kinematic = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_deform, (PropertyRNA *)&rna_RigidBodyObject_collision_shape,
	-1, "kinematic", 3, 0, 0, 0, 0, "Kinematic",
	"Allow rigid body to be controlled by the animation system",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_kinematic_get, RigidBodyObject_kinematic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_deform = {
	{(PropertyRNA *)&rna_RigidBodyObject_mass, (PropertyRNA *)&rna_RigidBodyObject_kinematic,
	-1, "use_deform", 3, 0, 0, 0, 0, "Deforming",
	"Rigid body deforms during simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_use_deform_get, RigidBodyObject_use_deform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyObject_mass = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_deactivation, (PropertyRNA *)&rna_RigidBodyObject_use_deform,
	-1, "mass", 3, 0, 0, 0, 0, "Mass",
	"How much the object \'weighs\' irrespective of gravity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_mass_get, RigidBodyObject_mass_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, FLT_MAX, 0.0010000000f, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_deactivation = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_start_deactivated, (PropertyRNA *)&rna_RigidBodyObject_mass,
	-1, "use_deactivation", 3, 0, 0, 0, 0, "Enable Deactivation",
	"Enable deactivation of resting rigid bodies (increases performance and stability but can cause glitches)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_use_deactivation_get, RigidBodyObject_use_deactivation_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_start_deactivated = {
	{(PropertyRNA *)&rna_RigidBodyObject_deactivate_linear_velocity, (PropertyRNA *)&rna_RigidBodyObject_use_deactivation,
	-1, "use_start_deactivated", 1, 0, 0, 0, 0, "Start Deactivated",
	"Deactivate rigid body at the start of the simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_use_start_deactivated_get, RigidBodyObject_use_start_deactivated_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyObject_deactivate_linear_velocity = {
	{(PropertyRNA *)&rna_RigidBodyObject_deactivate_angular_velocity, (PropertyRNA *)&rna_RigidBodyObject_use_start_deactivated,
	-1, "deactivate_linear_velocity", 3, 0, 0, 0, 0, "Linear Velocity Deactivation Threshold",
	"Linear Velocity below which simulation stops simulating object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_deactivate_linear_velocity_get, RigidBodyObject_deactivate_linear_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, 0.4000000060f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_deactivate_angular_velocity = {
	{(PropertyRNA *)&rna_RigidBodyObject_linear_damping, (PropertyRNA *)&rna_RigidBodyObject_deactivate_linear_velocity,
	-1, "deactivate_angular_velocity", 3, 0, 0, 0, 0, "Angular Velocity Deactivation Threshold",
	"Angular Velocity below which simulation stops simulating object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_deactivate_angular_velocity_get, RigidBodyObject_deactivate_angular_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0000000000f, FLT_MAX, 0.0000000000f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_linear_damping = {
	{(PropertyRNA *)&rna_RigidBodyObject_angular_damping, (PropertyRNA *)&rna_RigidBodyObject_deactivate_angular_velocity,
	-1, "linear_damping", 3, 0, 0, 0, 0, "Linear Damping",
	"Amount of linear velocity that is lost over time",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_linear_damping_get, RigidBodyObject_linear_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0399999991f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_angular_damping = {
	{(PropertyRNA *)&rna_RigidBodyObject_friction, (PropertyRNA *)&rna_RigidBodyObject_linear_damping,
	-1, "angular_damping", 3, 0, 0, 0, 0, "Angular Damping",
	"Amount of angular velocity that is lost over time",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_angular_damping_get, RigidBodyObject_angular_damping_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.1000000015f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_friction = {
	{(PropertyRNA *)&rna_RigidBodyObject_restitution, (PropertyRNA *)&rna_RigidBodyObject_angular_damping,
	-1, "friction", 3, 0, 0, 0, 0, "Friction",
	"Resistance of object to movement",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_friction_get, RigidBodyObject_friction_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyObject_restitution = {
	{(PropertyRNA *)&rna_RigidBodyObject_use_margin, (PropertyRNA *)&rna_RigidBodyObject_friction,
	-1, "restitution", 3, 0, 0, 0, 0, "Restitution",
	"Tendency of object to bounce after colliding with another (0 = stays still, 1 = perfectly elastic)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_restitution_get, RigidBodyObject_restitution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RigidBodyObject_use_margin = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_margin, (PropertyRNA *)&rna_RigidBodyObject_restitution,
	-1, "use_margin", 3, 0, 0, 0, 0, "Collision Margin",
	"Use custom collision margin (some shapes will have a visible gap around them)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_use_margin_get, RigidBodyObject_use_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyObject_collision_margin = {
	{(PropertyRNA *)&rna_RigidBodyObject_collision_collections, (PropertyRNA *)&rna_RigidBodyObject_use_margin,
	-1, "collision_margin", 3, 0, 0, 0, 0, "Collision Margin",
	"Threshold of distance near surface where collisions are still considered (best results when non-zero)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_shape_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyObject_collision_margin_get, RigidBodyObject_collision_margin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 3, 0.0399999991f, NULL
};

static bool rna_RigidBodyObject_collision_collections_default[20] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BoolPropertyRNA rna_RigidBodyObject_collision_collections = {
	{NULL, (PropertyRNA *)&rna_RigidBodyObject_collision_margin,
	-1, "collision_collections", 65539, 0, 0, 0, 0, "Collision Collections",
	"Collision collections rigid body belongs to",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, RigidBodyObject_collision_collections_get, RigidBodyObject_collision_collections_set, NULL, NULL, NULL, NULL, 0, rna_RigidBodyObject_collision_collections_default
};

StructRNA RNA_RigidBodyObject = {
	{(ContainerRNA *)&RNA_RigidBodyConstraint, (ContainerRNA *)&RNA_RigidBodyWorld,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyObject_rna_properties, (PropertyRNA *)&rna_RigidBodyObject_collision_collections}},
	"RigidBodyObject", NULL, NULL, 516, NULL, "Rigid Body Object",
	"Settings for object participating in Rigid Body Simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RigidBodyObject_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_RigidBodyOb_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Rigid Body Constraint */
CollectionPropertyRNA rna_RigidBodyConstraint_rna_properties = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_rna_properties_begin, RigidBodyConstraint_rna_properties_next, RigidBodyConstraint_rna_properties_end, RigidBodyConstraint_rna_properties_get, NULL, NULL, RigidBodyConstraint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_RigidBodyConstraint_rna_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_type, (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

EnumPropertyRNA rna_RigidBodyConstraint_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_type, (PropertyRNA *)&rna_RigidBodyConstraint_rna_type,
	-1, "type", 1, 0, 0, 0, 0, "Type",
	"Type of Rigid Body Constraint",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_type_get, RigidBodyConstraint_type_set, NULL, NULL, NULL, rna_enum_rigidbody_constraint_type_items, 8, 0
};

static const EnumPropertyItem rna_RigidBodyConstraint_spring_type_items[3] = {
	{0, "SPRING1", 0, "Blender 2.7", "Spring implementation used in blender 2.7. Damping is capped at 1.0"},
	{1, "SPRING2", 0, "Blender 2.8", "New implementation available since 2.8"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyConstraint_spring_type = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_enabled, (PropertyRNA *)&rna_RigidBodyConstraint_type,
	-1, "spring_type", 1, 0, 0, 0, 0, "Spring Type",
	"Which implementation of spring to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_type_get, RigidBodyConstraint_spring_type_set, NULL, NULL, NULL, rna_RigidBodyConstraint_spring_type_items, 2, 0
};

BoolPropertyRNA rna_RigidBodyConstraint_enabled = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_disable_collisions, (PropertyRNA *)&rna_RigidBodyConstraint_spring_type,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"Enable this constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_enabled_get, RigidBodyConstraint_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_disable_collisions = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_object1, (PropertyRNA *)&rna_RigidBodyConstraint_enabled,
	-1, "disable_collisions", 3, 0, 0, 0, 0, "Disable Collisions",
	"Disable collisions between constrained rigid bodies",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_disable_collisions_get, RigidBodyConstraint_disable_collisions_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RigidBodyConstraint_object1 = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_object2, (PropertyRNA *)&rna_RigidBodyConstraint_disable_collisions,
	-1, "object1", 8388737, 1, 0, 0, 0, "Object 1",
	"First Rigid Body Object to be constrained",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_object1_get, RigidBodyConstraint_object1_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_RigidBodyConstraint_object2 = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_breaking, (PropertyRNA *)&rna_RigidBodyConstraint_object1,
	-1, "object2", 8388737, 1, 0, 0, 0, "Object 2",
	"Second Rigid Body Object to be constrained",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_object2_get, RigidBodyConstraint_object2_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_RigidBodyConstraint_use_breaking = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_breaking_threshold, (PropertyRNA *)&rna_RigidBodyConstraint_object2,
	-1, "use_breaking", 3, 0, 0, 0, 0, "Breakable",
	"Constraint can be broken if it receives an impulse above the threshold",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_breaking_get, RigidBodyConstraint_use_breaking_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_breaking_threshold = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_override_solver_iterations, (PropertyRNA *)&rna_RigidBodyConstraint_use_breaking,
	-1, "breaking_threshold", 3, 0, 0, 0, 0, "Breaking Threshold",
	"Impulse threshold that must be reached for the constraint to break",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_breaking_threshold_get, RigidBodyConstraint_breaking_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, FLT_MAX, 100.0f, 2, 10.0f, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_override_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_solver_iterations, (PropertyRNA *)&rna_RigidBodyConstraint_breaking_threshold,
	-1, "use_override_solver_iterations", 3, 0, 0, 0, 0, "Override Solver Iterations",
	"Override the number of solver iterations for this constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102498304, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_override_solver_iterations_get, RigidBodyConstraint_use_override_solver_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_RigidBodyConstraint_solver_iterations = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_override_solver_iterations,
	-1, "solver_iterations", 3, 0, 0, 0, 0, "Solver Iterations",
	"Number of constraint solver iterations made per simulation step (higher values are more accurate but slower)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_solver_iterations_get, RigidBodyConstraint_solver_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 100, 1, 1000, 1, 10, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_y, (PropertyRNA *)&rna_RigidBodyConstraint_solver_iterations,
	-1, "use_limit_lin_x", 3, 0, 0, 0, 0, "X Axis",
	"Limit translation on X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_lin_x_get, RigidBodyConstraint_use_limit_lin_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_x,
	-1, "use_limit_lin_y", 3, 0, 0, 0, 0, "Y Axis",
	"Limit translation on Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_lin_y_get, RigidBodyConstraint_use_limit_lin_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_lin_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_y,
	-1, "use_limit_lin_z", 3, 0, 0, 0, 0, "Z Axis",
	"Limit translation on Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_lin_z_get, RigidBodyConstraint_use_limit_lin_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_lin_z,
	-1, "use_limit_ang_x", 3, 0, 0, 0, 0, "X Angle",
	"Limit rotation around X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_ang_x_get, RigidBodyConstraint_use_limit_ang_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_x,
	-1, "use_limit_ang_y", 3, 0, 0, 0, 0, "Y Angle",
	"Limit rotation around Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_ang_y_get, RigidBodyConstraint_use_limit_ang_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_limit_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_y,
	-1, "use_limit_ang_z", 3, 0, 0, 0, 0, "Z Angle",
	"Limit rotation around Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_limit_ang_z_get, RigidBodyConstraint_use_limit_ang_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_limit_ang_z,
	-1, "use_spring_x", 3, 0, 0, 0, 0, "X Spring",
	"Enable spring on X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_x_get, RigidBodyConstraint_use_spring_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_x,
	-1, "use_spring_y", 3, 0, 0, 0, 0, "Y Spring",
	"Enable spring on Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_y_get, RigidBodyConstraint_use_spring_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_y,
	-1, "use_spring_z", 3, 0, 0, 0, 0, "Z Spring",
	"Enable spring on Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_z_get, RigidBodyConstraint_use_spring_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_z,
	-1, "use_spring_ang_x", 3, 0, 0, 0, 0, "X Angle Spring",
	"Enable spring on X rotational axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_ang_x_get, RigidBodyConstraint_use_spring_ang_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_x,
	-1, "use_spring_ang_y", 3, 0, 0, 0, 0, "Y Angle Spring",
	"Enable spring on Y rotational axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_ang_y_get, RigidBodyConstraint_use_spring_ang_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_spring_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_motor_lin, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_y,
	-1, "use_spring_ang_z", 3, 0, 0, 0, 0, "Z Angle Spring",
	"Enable spring on Z rotational axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_spring_ang_z_get, RigidBodyConstraint_use_spring_ang_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_motor_lin = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_use_motor_ang, (PropertyRNA *)&rna_RigidBodyConstraint_use_spring_ang_z,
	-1, "use_motor_lin", 3, 0, 0, 0, 0, "Linear Motor",
	"Enable linear motor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_motor_lin_get, RigidBodyConstraint_use_motor_lin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyConstraint_use_motor_ang = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_lower, (PropertyRNA *)&rna_RigidBodyConstraint_use_motor_lin,
	-1, "use_motor_ang", 3, 0, 0, 0, 0, "Angular Motor",
	"Enable angular motor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_use_motor_ang_get, RigidBodyConstraint_use_motor_ang_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_upper, (PropertyRNA *)&rna_RigidBodyConstraint_use_motor_ang,
	-1, "limit_lin_x_lower", 3, 0, 0, 4, 0, "Lower X Limit",
	"Lower limit of X axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_x_lower), 5, NULL},
	RigidBodyConstraint_limit_lin_x_lower_get, RigidBodyConstraint_limit_lin_x_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_x_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_lower,
	-1, "limit_lin_x_upper", 3, 0, 0, 4, 0, "Upper X Limit",
	"Upper limit of X axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_x_upper), 5, NULL},
	RigidBodyConstraint_limit_lin_x_upper_get, RigidBodyConstraint_limit_lin_x_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_x_upper,
	-1, "limit_lin_y_lower", 3, 0, 0, 4, 0, "Lower Y Limit",
	"Lower limit of Y axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_y_lower), 5, NULL},
	RigidBodyConstraint_limit_lin_y_lower_get, RigidBodyConstraint_limit_lin_y_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_y_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_lower,
	-1, "limit_lin_y_upper", 3, 0, 0, 4, 0, "Upper Y Limit",
	"Upper limit of Y axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_y_upper), 5, NULL},
	RigidBodyConstraint_limit_lin_y_upper_get, RigidBodyConstraint_limit_lin_y_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_y_upper,
	-1, "limit_lin_z_lower", 3, 0, 0, 4, 0, "Lower Z Limit",
	"Lower limit of Z axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_z_lower), 5, NULL},
	RigidBodyConstraint_limit_lin_z_lower_get, RigidBodyConstraint_limit_lin_z_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, -1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_lin_z_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_lower,
	-1, "limit_lin_z_upper", 3, 0, 0, 4, 0, "Upper Z Limit",
	"Upper limit of Z axis translation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_lin_z_upper), 5, NULL},
	RigidBodyConstraint_limit_lin_z_upper_get, RigidBodyConstraint_limit_lin_z_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_lin_z_upper,
	-1, "limit_ang_x_lower", 3, 0, 0, 4, 0, "Lower X Angle Limit",
	"Lower limit of X axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_x_lower), 5, NULL},
	RigidBodyConstraint_limit_ang_x_lower_get, RigidBodyConstraint_limit_ang_x_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_x_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_lower,
	-1, "limit_ang_x_upper", 3, 0, 0, 4, 0, "Upper X Angle Limit",
	"Upper limit of X axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_x_upper), 5, NULL},
	RigidBodyConstraint_limit_ang_x_upper_get, RigidBodyConstraint_limit_ang_x_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_x_upper,
	-1, "limit_ang_y_lower", 3, 0, 0, 4, 0, "Lower Y Angle Limit",
	"Lower limit of Y axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_y_lower), 5, NULL},
	RigidBodyConstraint_limit_ang_y_lower_get, RigidBodyConstraint_limit_ang_y_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_y_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_lower, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_lower,
	-1, "limit_ang_y_upper", 3, 0, 0, 4, 0, "Upper Y Angle Limit",
	"Upper limit of Y axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_y_upper), 5, NULL},
	RigidBodyConstraint_limit_ang_y_upper_get, RigidBodyConstraint_limit_ang_y_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_lower = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_upper, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_y_upper,
	-1, "limit_ang_z_lower", 3, 0, 0, 4, 0, "Lower Z Angle Limit",
	"Lower limit of Z axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_z_lower), 5, NULL},
	RigidBodyConstraint_limit_ang_z_lower_get, RigidBodyConstraint_limit_ang_z_lower_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, -0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_limit_ang_z_upper = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_x, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_lower,
	-1, "limit_ang_z_upper", 3, 0, 0, 4, 0, "Upper Z Angle Limit",
	"Upper limit of Z axis rotation",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 102170624, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(RigidBodyCon, limit_ang_z_upper), 5, NULL},
	RigidBodyConstraint_limit_ang_z_upper_get, RigidBodyConstraint_limit_ang_z_upper_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.7853981853f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_y, (PropertyRNA *)&rna_RigidBodyConstraint_limit_ang_z_upper,
	-1, "spring_stiffness_x", 3, 0, 0, 0, 0, "X Axis Stiffness",
	"Stiffness on the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_x_get, RigidBodyConstraint_spring_stiffness_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_x,
	-1, "spring_stiffness_y", 3, 0, 0, 0, 0, "Y Axis Stiffness",
	"Stiffness on the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_y_get, RigidBodyConstraint_spring_stiffness_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_y,
	-1, "spring_stiffness_z", 3, 0, 0, 0, 0, "Z Axis Stiffness",
	"Stiffness on the Z axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_z_get, RigidBodyConstraint_spring_stiffness_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_z,
	-1, "spring_stiffness_ang_x", 3, 0, 0, 0, 0, "X Angle Stiffness",
	"Stiffness on the X rotational axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_ang_x_get, RigidBodyConstraint_spring_stiffness_ang_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_x,
	-1, "spring_stiffness_ang_y", 3, 0, 0, 0, 0, "Y Angle Stiffness",
	"Stiffness on the Y rotational axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_ang_y_get, RigidBodyConstraint_spring_stiffness_ang_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_stiffness_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_y,
	-1, "spring_stiffness_ang_z", 3, 0, 0, 0, 0, "Z Angle Stiffness",
	"Stiffness on the Z rotational axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_stiffness_ang_z_get, RigidBodyConstraint_spring_stiffness_ang_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 10.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_stiffness_ang_z,
	-1, "spring_damping_x", 3, 0, 0, 0, 0, "Damping X",
	"Damping on the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_x_get, RigidBodyConstraint_spring_damping_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_x,
	-1, "spring_damping_y", 3, 0, 0, 0, 0, "Damping Y",
	"Damping on the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_y_get, RigidBodyConstraint_spring_damping_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_x, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_y,
	-1, "spring_damping_z", 3, 0, 0, 0, 0, "Damping Z",
	"Damping on the Z axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_z_get, RigidBodyConstraint_spring_damping_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_x = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_y, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_z,
	-1, "spring_damping_ang_x", 3, 0, 0, 0, 0, "Damping X Angle",
	"Damping on the X rotational axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_ang_x_get, RigidBodyConstraint_spring_damping_ang_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_y = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_z, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_x,
	-1, "spring_damping_ang_y", 3, 0, 0, 0, 0, "Damping Y Angle",
	"Damping on the Y rotational axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_ang_y_get, RigidBodyConstraint_spring_damping_ang_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_spring_damping_ang_z = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_target_velocity, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_y,
	-1, "spring_damping_ang_z", 3, 0, 0, 0, 0, "Damping Z Angle",
	"Damping on the Z rotational axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_spring_damping_ang_z_get, RigidBodyConstraint_spring_damping_ang_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.5000000000f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_target_velocity = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_max_impulse, (PropertyRNA *)&rna_RigidBodyConstraint_spring_damping_ang_z,
	-1, "motor_lin_target_velocity", 3, 0, 0, 0, 0, "Target Velocity",
	"Target linear motor velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_motor_lin_target_velocity_get, RigidBodyConstraint_motor_lin_target_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_lin_max_impulse = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_target_velocity, (PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_target_velocity,
	-1, "motor_lin_max_impulse", 3, 0, 0, 0, 0, "Max Impulse",
	"Maximum linear motor impulse",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_motor_lin_max_impulse_get, RigidBodyConstraint_motor_lin_max_impulse_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_target_velocity = {
	{(PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_max_impulse, (PropertyRNA *)&rna_RigidBodyConstraint_motor_lin_max_impulse,
	-1, "motor_ang_target_velocity", 3, 0, 0, 0, 0, "Target Velocity",
	"Target angular motor velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_motor_ang_target_velocity_get, RigidBodyConstraint_motor_ang_target_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -100.0f, 100.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_RigidBodyConstraint_motor_ang_max_impulse = {
	{NULL, (PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_target_velocity,
	-1, "motor_ang_max_impulse", 3, 0, 0, 0, 0, "Max Impulse",
	"Maximum angular motor impulse",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_RigidBodyOb_reset, 100663296, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	RigidBodyConstraint_motor_ang_max_impulse_get, RigidBodyConstraint_motor_ang_max_impulse_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

StructRNA RNA_RigidBodyConstraint = {
	{(ContainerRNA *)&RNA_Scene, (ContainerRNA *)&RNA_RigidBodyObject,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyConstraint_rna_properties, (PropertyRNA *)&rna_RigidBodyConstraint_motor_ang_max_impulse}},
	"RigidBodyConstraint", NULL, NULL, 516, NULL, "Rigid Body Constraint",
	"Constraint influencing Objects inside Rigid Body Simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_RigidBodyConstraint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_RigidBodyCon_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

