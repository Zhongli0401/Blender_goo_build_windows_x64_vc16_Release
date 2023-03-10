
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

#include "rna_pose.c"
#include "rna_pose_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_Pose_rna_properties;
PointerPropertyRNA rna_Pose_rna_type;
CollectionPropertyRNA rna_Pose_bones;
CollectionPropertyRNA rna_Pose_bone_groups;
EnumPropertyRNA rna_Pose_ik_solver;
PointerPropertyRNA rna_Pose_ik_param;
BoolPropertyRNA rna_Pose_use_mirror_x;
BoolPropertyRNA rna_Pose_use_mirror_relative;
BoolPropertyRNA rna_Pose_use_auto_ik;
PointerPropertyRNA rna_Pose_animation_visualization;

extern FunctionRNA rna_Pose_apply_pose_from_action_func;
extern PointerPropertyRNA rna_Pose_apply_pose_from_action_action;
extern FloatPropertyRNA rna_Pose_apply_pose_from_action_evaluation_time;



CollectionPropertyRNA rna_BoneGroups_rna_properties;
PointerPropertyRNA rna_BoneGroups_rna_type;
PointerPropertyRNA rna_BoneGroups_active;
IntPropertyRNA rna_BoneGroups_active_index;

extern FunctionRNA rna_BoneGroups_new_func;
extern StringPropertyRNA rna_BoneGroups_new_name;
extern PointerPropertyRNA rna_BoneGroups_new_group;

extern FunctionRNA rna_BoneGroups_remove_func;
extern PointerPropertyRNA rna_BoneGroups_remove_group;



CollectionPropertyRNA rna_PoseBone_rna_properties;
PointerPropertyRNA rna_PoseBone_rna_type;
CollectionPropertyRNA rna_PoseBone_constraints;
StringPropertyRNA rna_PoseBone_name;
PointerPropertyRNA rna_PoseBone_motion_path;
PointerPropertyRNA rna_PoseBone_bone;
PointerPropertyRNA rna_PoseBone_parent;
PointerPropertyRNA rna_PoseBone_child;
FloatPropertyRNA rna_PoseBone_location;
FloatPropertyRNA rna_PoseBone_scale;
FloatPropertyRNA rna_PoseBone_rotation_quaternion;
FloatPropertyRNA rna_PoseBone_rotation_axis_angle;
FloatPropertyRNA rna_PoseBone_rotation_euler;
EnumPropertyRNA rna_PoseBone_rotation_mode;
FloatPropertyRNA rna_PoseBone_bbone_rollin;
FloatPropertyRNA rna_PoseBone_bbone_rollout;
FloatPropertyRNA rna_PoseBone_bbone_curveinx;
FloatPropertyRNA rna_PoseBone_bbone_curveinz;
FloatPropertyRNA rna_PoseBone_bbone_curveoutx;
FloatPropertyRNA rna_PoseBone_bbone_curveoutz;
FloatPropertyRNA rna_PoseBone_bbone_easein;
FloatPropertyRNA rna_PoseBone_bbone_easeout;
FloatPropertyRNA rna_PoseBone_bbone_scalein;
FloatPropertyRNA rna_PoseBone_bbone_scaleout;
PointerPropertyRNA rna_PoseBone_bbone_custom_handle_start;
PointerPropertyRNA rna_PoseBone_bbone_custom_handle_end;
FloatPropertyRNA rna_PoseBone_matrix_channel;
FloatPropertyRNA rna_PoseBone_matrix_basis;
FloatPropertyRNA rna_PoseBone_matrix;
FloatPropertyRNA rna_PoseBone_head;
FloatPropertyRNA rna_PoseBone_tail;
FloatPropertyRNA rna_PoseBone_length;
BoolPropertyRNA rna_PoseBone_is_in_ik_chain;
BoolPropertyRNA rna_PoseBone_lock_ik_x;
BoolPropertyRNA rna_PoseBone_lock_ik_y;
BoolPropertyRNA rna_PoseBone_lock_ik_z;
BoolPropertyRNA rna_PoseBone_use_ik_limit_x;
BoolPropertyRNA rna_PoseBone_use_ik_limit_y;
BoolPropertyRNA rna_PoseBone_use_ik_limit_z;
BoolPropertyRNA rna_PoseBone_use_ik_rotation_control;
BoolPropertyRNA rna_PoseBone_use_ik_linear_control;
FloatPropertyRNA rna_PoseBone_ik_min_x;
FloatPropertyRNA rna_PoseBone_ik_max_x;
FloatPropertyRNA rna_PoseBone_ik_min_y;
FloatPropertyRNA rna_PoseBone_ik_max_y;
FloatPropertyRNA rna_PoseBone_ik_min_z;
FloatPropertyRNA rna_PoseBone_ik_max_z;
FloatPropertyRNA rna_PoseBone_ik_stiffness_x;
FloatPropertyRNA rna_PoseBone_ik_stiffness_y;
FloatPropertyRNA rna_PoseBone_ik_stiffness_z;
FloatPropertyRNA rna_PoseBone_ik_stretch;
FloatPropertyRNA rna_PoseBone_ik_rotation_weight;
FloatPropertyRNA rna_PoseBone_ik_linear_weight;
PointerPropertyRNA rna_PoseBone_custom_shape;
FloatPropertyRNA rna_PoseBone_custom_shape_scale_xyz;
FloatPropertyRNA rna_PoseBone_custom_shape_translation;
FloatPropertyRNA rna_PoseBone_custom_shape_rotation_euler;
BoolPropertyRNA rna_PoseBone_use_custom_shape_bone_size;
PointerPropertyRNA rna_PoseBone_custom_shape_transform;
IntPropertyRNA rna_PoseBone_bone_group_index;
PointerPropertyRNA rna_PoseBone_bone_group;
BoolPropertyRNA rna_PoseBone_lock_location;
BoolPropertyRNA rna_PoseBone_lock_rotation;
BoolPropertyRNA rna_PoseBone_lock_rotation_w;
BoolPropertyRNA rna_PoseBone_lock_rotations_4d;
BoolPropertyRNA rna_PoseBone_lock_scale;

extern FunctionRNA rna_PoseBone_evaluate_envelope_func;
extern FloatPropertyRNA rna_PoseBone_evaluate_envelope_point;
extern FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor;

extern FunctionRNA rna_PoseBone_bbone_segment_matrix_func;
extern FloatPropertyRNA rna_PoseBone_bbone_segment_matrix_matrix_return;
extern IntPropertyRNA rna_PoseBone_bbone_segment_matrix_index;
extern BoolPropertyRNA rna_PoseBone_bbone_segment_matrix_rest;

extern FunctionRNA rna_PoseBone_compute_bbone_handles_func;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle1;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll1;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle2;
extern FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll2;
extern BoolPropertyRNA rna_PoseBone_compute_bbone_handles_rest;
extern BoolPropertyRNA rna_PoseBone_compute_bbone_handles_ease;
extern BoolPropertyRNA rna_PoseBone_compute_bbone_handles_offsets;



CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties;
PointerPropertyRNA rna_PoseBoneConstraints_rna_type;
PointerPropertyRNA rna_PoseBoneConstraints_active;

extern FunctionRNA rna_PoseBoneConstraints_new_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_new_constraint;
extern EnumPropertyRNA rna_PoseBoneConstraints_new_type;

extern FunctionRNA rna_PoseBoneConstraints_remove_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint;

extern FunctionRNA rna_PoseBoneConstraints_move_func;
extern IntPropertyRNA rna_PoseBoneConstraints_move_from_index;
extern IntPropertyRNA rna_PoseBoneConstraints_move_to_index;

extern FunctionRNA rna_PoseBoneConstraints_copy_func;
extern PointerPropertyRNA rna_PoseBoneConstraints_copy_constraint;
extern PointerPropertyRNA rna_PoseBoneConstraints_copy_new_constraint;



CollectionPropertyRNA rna_IKParam_rna_properties;
PointerPropertyRNA rna_IKParam_rna_type;
EnumPropertyRNA rna_IKParam_ik_solver;


extern CollectionPropertyRNA rna_IKParam_rna_properties;
extern PointerPropertyRNA rna_IKParam_rna_type;
extern EnumPropertyRNA rna_IKParam_ik_solver;

FloatPropertyRNA rna_Itasc_precision;
IntPropertyRNA rna_Itasc_iterations;
IntPropertyRNA rna_Itasc_step_count;
EnumPropertyRNA rna_Itasc_mode;
EnumPropertyRNA rna_Itasc_reiteration_method;
BoolPropertyRNA rna_Itasc_use_auto_step;
FloatPropertyRNA rna_Itasc_step_min;
FloatPropertyRNA rna_Itasc_step_max;
FloatPropertyRNA rna_Itasc_feedback;
FloatPropertyRNA rna_Itasc_velocity_max;
EnumPropertyRNA rna_Itasc_solver;
FloatPropertyRNA rna_Itasc_damping_max;
FloatPropertyRNA rna_Itasc_damping_epsilon;


CollectionPropertyRNA rna_BoneGroup_rna_properties;
PointerPropertyRNA rna_BoneGroup_rna_type;
StringPropertyRNA rna_BoneGroup_name;
EnumPropertyRNA rna_BoneGroup_color_set;
BoolPropertyRNA rna_BoneGroup_is_custom_color_set;
PointerPropertyRNA rna_BoneGroup_colors;

static PointerRNA Pose_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Pose_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Pose_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Pose_rna_properties_get(iter);
    }
}

void Pose_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Pose_rna_properties_get(iter);
    }
}

void Pose_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Pose_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Pose_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA Pose_bones_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_PoseBone, rna_iterator_listbase_get(iter));
}

void Pose_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Pose_bones;

    rna_iterator_listbase_begin(iter, &data->chanbase, NULL);

    if (iter->valid) {
        iter->ptr = Pose_bones_get(iter);
    }
}

void Pose_bones_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Pose_bones_get(iter);
    }
}

void Pose_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Pose_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Pose_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = Pose_bones_get(&iter); }
    }

    Pose_bones_end(&iter);

    return found;
}

int Pose_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_PoseBones_lookup_string(ptr, key, r_ptr);
}

static PointerRNA Pose_bone_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoneGroup, rna_iterator_listbase_get(iter));
}

void Pose_bone_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Pose_bone_groups;

    rna_iterator_listbase_begin(iter, &data->agroups, NULL);

    if (iter->valid) {
        iter->ptr = Pose_bone_groups_get(iter);
    }
}

void Pose_bone_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Pose_bone_groups_get(iter);
    }
}

void Pose_bone_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Pose_bone_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Pose_bone_groups_begin(&iter, ptr);

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
        if (found) { *r_ptr = Pose_bone_groups_get(&iter); }
    }

    Pose_bone_groups_end(&iter);

    return found;
}

int Pose_bone_groups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int BoneGroup_name_length(PointerRNA *);
    extern void BoneGroup_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Pose_bone_groups_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoneGroup_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoneGroup_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                BoneGroup_name_get(&iter.ptr, name);
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
        Pose_bone_groups_next(&iter);
    }
    Pose_bone_groups_end(&iter);

    return found;
}

int Pose_ik_solver_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (int)(data->iksolver);
}

void Pose_ik_solver_set(PointerRNA *ptr, int value)
{
    rna_Pose_ik_solver_set(ptr, value);
}

PointerRNA Pose_ik_param_get(PointerRNA *ptr)
{
    return rna_Pose_ikparam_get(ptr);
}

bool Pose_use_mirror_x_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void Pose_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool Pose_use_mirror_relative_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void Pose_use_mirror_relative_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool Pose_use_auto_ik_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void Pose_use_auto_ik_set(PointerRNA *ptr, bool value)
{
    bPose *data = (bPose *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

PointerRNA Pose_animation_visualization_get(PointerRNA *ptr)
{
    bPose *data = (bPose *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimViz, &data->avs);
}

static PointerRNA BoneGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BoneGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneGroups_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneGroups_rna_properties_get(iter);
    }
}

void BoneGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoneGroups_rna_properties_get(iter);
    }
}

void BoneGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoneGroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoneGroups_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA BoneGroups_active_get(PointerRNA *ptr)
{
    return rna_Pose_active_bone_group_get(ptr);
}

void BoneGroups_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Pose_active_bone_group_set(ptr, value, reports);
}

int BoneGroups_active_index_get(PointerRNA *ptr)
{
    return rna_Pose_active_bone_group_index_get(ptr);
}

void BoneGroups_active_index_set(PointerRNA *ptr, int value)
{
    rna_Pose_active_bone_group_index_set(ptr, value);
}

static PointerRNA PoseBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PoseBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PoseBone_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PoseBone_rna_properties_get(iter);
    }
}

void PoseBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PoseBone_rna_properties_get(iter);
    }
}

void PoseBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PoseBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PoseBone_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA PoseBone_constraints_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Constraint, rna_iterator_listbase_get(iter));
}

void PoseBone_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PoseBone_constraints;

    rna_iterator_listbase_begin(iter, &data->constraints, NULL);

    if (iter->valid) {
        iter->ptr = PoseBone_constraints_get(iter);
    }
}

void PoseBone_constraints_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = PoseBone_constraints_get(iter);
    }
}

void PoseBone_constraints_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PoseBone_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    PoseBone_constraints_begin(&iter, ptr);

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
        if (found) { *r_ptr = PoseBone_constraints_get(&iter); }
    }

    PoseBone_constraints_end(&iter);

    return found;
}

int PoseBone_constraints_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int Constraint_name_length(PointerRNA *);
    extern void Constraint_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    PoseBone_constraints_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Constraint_name_length(&iter.ptr);
            if (namelen < 1024) {
                Constraint_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                Constraint_name_get(&iter.ptr, name);
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
        PoseBone_constraints_next(&iter);
    }
    PoseBone_constraints_end(&iter);

    return found;
}

void PoseBone_name_get(PointerRNA *ptr, char *value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int PoseBone_name_length(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return strlen(data->name);
}

void PoseBone_name_set(PointerRNA *ptr, const char *value)
{
    rna_PoseChannel_name_set(ptr, value);
}

PointerRNA PoseBone_motion_path_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_MotionPath, data->mpath);
}

PointerRNA PoseBone_bone_get(PointerRNA *ptr)
{
    return rna_PoseChannel_bone_get(ptr);
}

PointerRNA PoseBone_parent_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->parent);
}

PointerRNA PoseBone_child_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->child);
}

void PoseBone_location_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->loc)[i]);
    }
}

void PoseBone_location_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

void PoseBone_scale_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->size)[i]);
    }
}

void PoseBone_scale_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->size)[i] = values[i];
    }
}

void PoseBone_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

void PoseBone_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

void PoseBone_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
    rna_PoseChannel_rotation_axis_angle_get(ptr, values);
}

void PoseBone_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
    rna_PoseChannel_rotation_axis_angle_set(ptr, values);
}

void PoseBone_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->eul)[i]);
    }
}

void PoseBone_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->eul)[i] = values[i];
    }
}

int PoseBone_rotation_mode_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (int)(data->rotmode);
}

void PoseBone_rotation_mode_set(PointerRNA *ptr, int value)
{
    rna_PoseChannel_rotation_mode_set(ptr, value);
}

float PoseBone_bbone_rollin_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->roll1);
}

void PoseBone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->roll1 = value;
}

float PoseBone_bbone_rollout_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->roll2);
}

void PoseBone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->roll2 = value;
}

float PoseBone_bbone_curveinx_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_in_x);
}

void PoseBone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_in_x = value;
}

float PoseBone_bbone_curveinz_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_in_z);
}

void PoseBone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_in_z = value;
}

float PoseBone_bbone_curveoutx_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_out_x);
}

void PoseBone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_out_x = value;
}

float PoseBone_bbone_curveoutz_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->curve_out_z);
}

void PoseBone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->curve_out_z = value;
}

float PoseBone_bbone_easein_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ease1);
}

void PoseBone_bbone_easein_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ease1 = value;
}

float PoseBone_bbone_easeout_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ease2);
}

void PoseBone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ease2 = value;
}

void PoseBone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_in)[i]);
    }
}

void PoseBone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_in)[i] = values[i];
    }
}

void PoseBone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_out)[i]);
    }
}

void PoseBone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_out)[i] = values[i];
    }
}

PointerRNA PoseBone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->bbone_prev);
}

PointerRNA PoseBone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->bbone_next);
}

void PoseBone_matrix_channel_get(PointerRNA *ptr, float values[16])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->chan_mat)[i]);
    }
}

void PoseBone_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    rna_PoseChannel_matrix_basis_get(ptr, values);
}

void PoseBone_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    rna_PoseChannel_matrix_basis_set(ptr, values);
}

void PoseBone_matrix_get(PointerRNA *ptr, float values[16])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->pose_mat)[i]);
    }
}

void PoseBone_matrix_set(PointerRNA *ptr, const float values[16])
{
    rna_PoseChannel_matrix_set(ptr, values);
}

void PoseBone_head_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_head)[i]);
    }
}

void PoseBone_tail_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->pose_tail)[i]);
    }
}

float PoseBone_length_get(PointerRNA *ptr)
{
    return rna_PoseChannel_length_get(ptr);
}

bool PoseBone_is_in_ik_chain_get(PointerRNA *ptr)
{
    return rna_PoseChannel_has_ik_get(ptr);
}

bool PoseBone_lock_ik_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 1) != 0);
}

void PoseBone_lock_ik_x_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 1; }
    else { data->ikflag &= ~1; }
}

bool PoseBone_lock_ik_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 2) != 0);
}

void PoseBone_lock_ik_y_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 2; }
    else { data->ikflag &= ~2; }
}

bool PoseBone_lock_ik_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 4) != 0);
}

void PoseBone_lock_ik_z_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 4; }
    else { data->ikflag &= ~4; }
}

bool PoseBone_use_ik_limit_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 8) != 0);
}

void PoseBone_use_ik_limit_x_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 8; }
    else { data->ikflag &= ~8; }
}

bool PoseBone_use_ik_limit_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 16) != 0);
}

void PoseBone_use_ik_limit_y_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 16; }
    else { data->ikflag &= ~16; }
}

bool PoseBone_use_ik_limit_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 32) != 0);
}

void PoseBone_use_ik_limit_z_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 32; }
    else { data->ikflag &= ~32; }
}

bool PoseBone_use_ik_rotation_control_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 64) != 0);
}

void PoseBone_use_ik_rotation_control_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 64; }
    else { data->ikflag &= ~64; }
}

bool PoseBone_use_ik_linear_control_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->ikflag) & 128) != 0);
}

void PoseBone_use_ik_linear_control_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->ikflag |= 128; }
    else { data->ikflag &= ~128; }
}

float PoseBone_ik_min_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[0]);
}

void PoseBone_ik_min_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmin[0] = CLAMPIS(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[0]);
}

void PoseBone_ik_max_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmax[0] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_min_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[1]);
}

void PoseBone_ik_min_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmin[1] = CLAMPIS(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[1]);
}

void PoseBone_ik_max_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmax[1] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_min_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmin[2]);
}

void PoseBone_ik_min_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmin[2] = CLAMPIS(value, -3.1415927410f, 0.0f);
}

float PoseBone_ik_max_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->limitmax[2]);
}

void PoseBone_ik_max_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->limitmax[2] = CLAMPIS(value, 0.0f, 3.1415927410f);
}

float PoseBone_ik_stiffness_x_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[0]);
}

void PoseBone_ik_stiffness_x_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->stiffness[0] = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stiffness_y_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[1]);
}

void PoseBone_ik_stiffness_y_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->stiffness[1] = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stiffness_z_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->stiffness[2]);
}

void PoseBone_ik_stiffness_z_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->stiffness[2] = CLAMPIS(value, 0.0f, 0.9900000095f);
}

float PoseBone_ik_stretch_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ikstretch);
}

void PoseBone_ik_stretch_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ikstretch = CLAMPIS(value, 0.0f, 1.0f);
}

float PoseBone_ik_rotation_weight_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->ikrotweight);
}

void PoseBone_ik_rotation_weight_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->ikrotweight = CLAMPIS(value, 0.0f, 1.0f);
}

float PoseBone_ik_linear_weight_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (float)(data->iklinweight);
}

void PoseBone_ik_linear_weight_set(PointerRNA *ptr, float value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    data->iklinweight = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA PoseBone_custom_shape_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->custom);
}

void PoseBone_custom_shape_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);

    if (data->custom) {
        id_us_min((ID *)data->custom);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->custom = value.data;
}

void PoseBone_custom_shape_scale_xyz_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_scale_xyz)[i]);
    }
}

void PoseBone_custom_shape_scale_xyz_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->custom_scale_xyz)[i] = values[i];
    }
}

void PoseBone_custom_shape_translation_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_translation)[i]);
    }
}

void PoseBone_custom_shape_translation_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->custom_translation)[i] = values[i];
    }
}

void PoseBone_custom_shape_rotation_euler_get(PointerRNA *ptr, float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->custom_rotation_euler)[i]);
    }
}

void PoseBone_custom_shape_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->custom_rotation_euler)[i] = values[i];
    }
}

bool PoseBone_use_custom_shape_bone_size_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return !(((data->drawflag) & 1) != 0);
}

void PoseBone_use_custom_shape_bone_size_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (!value) { data->drawflag |= 1; }
    else { data->drawflag &= ~1; }
}

PointerRNA PoseBone_custom_shape_transform_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_PoseBone, data->custom_tx);
}

void PoseBone_custom_shape_transform_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_PoseChannel_custom_shape_transform_set(ptr, value, reports);
}

int PoseBone_bone_group_index_get(PointerRNA *ptr)
{
    return rna_PoseChannel_bone_group_index_get(ptr);
}

void PoseBone_bone_group_index_set(PointerRNA *ptr, int value)
{
    rna_PoseChannel_bone_group_index_set(ptr, value);
}

PointerRNA PoseBone_bone_group_get(PointerRNA *ptr)
{
    return rna_PoseChannel_bone_group_get(ptr);
}

void PoseBone_bone_group_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_PoseChannel_bone_group_set(ptr, value, reports);
}

void PoseBone_lock_location_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (1 << i)) != 0);
    }
}

void PoseBone_lock_location_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (1 << i); }
        else { data->protectflag &= ~(1 << i); }
    }
}

void PoseBone_lock_rotation_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (8 << i)) != 0);
    }
}

void PoseBone_lock_rotation_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (8 << i); }
        else { data->protectflag &= ~(8 << i); }
    }
}

bool PoseBone_lock_rotation_w_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->protectflag) & 512) != 0);
}

void PoseBone_lock_rotation_w_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->protectflag |= 512; }
    else { data->protectflag &= ~512; }
}

bool PoseBone_lock_rotations_4d_get(PointerRNA *ptr)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    return (((data->protectflag) & 1024) != 0);
}

void PoseBone_lock_rotations_4d_set(PointerRNA *ptr, bool value)
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    if (value) { data->protectflag |= 1024; }
    else { data->protectflag &= ~1024; }
}

void PoseBone_lock_scale_get(PointerRNA *ptr, bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->protectflag & (64 << i)) != 0);
    }
}

void PoseBone_lock_scale_set(PointerRNA *ptr, const bool values[3])
{
    bPoseChannel *data = (bPoseChannel *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->protectflag |= (64 << i); }
        else { data->protectflag &= ~(64 << i); }
    }
}

static PointerRNA PoseBoneConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PoseBoneConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
    }
}

void PoseBoneConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PoseBoneConstraints_rna_properties_get(iter);
    }
}

void PoseBoneConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PoseBoneConstraints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PoseBoneConstraints_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA PoseBoneConstraints_active_get(PointerRNA *ptr)
{
    return rna_PoseChannel_active_constraint_get(ptr);
}

void PoseBoneConstraints_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_PoseChannel_active_constraint_set(ptr, value, reports);
}

static PointerRNA IKParam_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void IKParam_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_IKParam_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = IKParam_rna_properties_get(iter);
    }
}

void IKParam_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = IKParam_rna_properties_get(iter);
    }
}

void IKParam_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int IKParam_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA IKParam_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int IKParam_ik_solver_get(PointerRNA *ptr)
{
    bIKParam *data = (bIKParam *)(ptr->data);
    return (int)(data->iksolver);
}

float Itasc_precision_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->precision);
}

void Itasc_precision_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->precision = CLAMPIS(value, 0.0f, 0.1000000015f);
}

int Itasc_iterations_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->numiter);
}

void Itasc_iterations_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->numiter = CLAMPIS(value, 0, 1000);
}

int Itasc_step_count_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->numstep);
}

void Itasc_step_count_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->numstep = CLAMPIS(value, 1, 50);
}

int Itasc_mode_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return ((data->flag) & 8);
}

void Itasc_mode_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->flag &= ~8;
    data->flag |= value;
}

int Itasc_reiteration_method_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return ((data->flag) & 6);
}

void Itasc_reiteration_method_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->flag &= ~6;
    data->flag |= value;
}

bool Itasc_use_auto_step_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void Itasc_use_auto_step_set(PointerRNA *ptr, bool value)
{
    bItasc *data = (bItasc *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

float Itasc_step_min_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->minstep);
}

void Itasc_step_min_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->minstep = CLAMPIS(value, 0.0f, 0.1000000015f);
}

float Itasc_step_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->maxstep);
}

void Itasc_step_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->maxstep = CLAMPIS(value, 0.0f, 1.0f);
}

float Itasc_feedback_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->feedback);
}

void Itasc_feedback_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->feedback = CLAMPIS(value, 0.0f, 100.0f);
}

float Itasc_velocity_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->maxvel);
}

void Itasc_velocity_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->maxvel = CLAMPIS(value, 0.0f, 100.0f);
}

int Itasc_solver_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (int)(data->solver);
}

void Itasc_solver_set(PointerRNA *ptr, int value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->solver = value;
}

float Itasc_damping_max_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->dampmax);
}

void Itasc_damping_max_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->dampmax = CLAMPIS(value, 0.0f, 1.0f);
}

float Itasc_damping_epsilon_get(PointerRNA *ptr)
{
    bItasc *data = (bItasc *)(ptr->data);
    return (float)(data->dampeps);
}

void Itasc_damping_epsilon_set(PointerRNA *ptr, float value)
{
    bItasc *data = (bItasc *)(ptr->data);
    data->dampeps = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA BoneGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BoneGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoneGroup_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneGroup_rna_properties_get(iter);
    }
}

void BoneGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoneGroup_rna_properties_get(iter);
    }
}

void BoneGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoneGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoneGroup_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void BoneGroup_name_get(PointerRNA *ptr, char *value)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int BoneGroup_name_length(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return strlen(data->name);
}

void BoneGroup_name_set(PointerRNA *ptr, const char *value)
{
    rna_BoneGroup_name_set(ptr, value);
}

int BoneGroup_color_set_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return (int)(data->customCol);
}

void BoneGroup_color_set_set(PointerRNA *ptr, int value)
{
    rna_ActionGroup_colorset_set(ptr, value);
}

bool BoneGroup_is_custom_color_set_get(PointerRNA *ptr)
{
    return rna_ActionGroup_is_custom_colorset_get(ptr);
}

PointerRNA BoneGroup_colors_get(PointerRNA *ptr)
{
    bActionGroup *data = (bActionGroup *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_ThemeBoneColorSet, &data->cs);
}

void Pose_apply_pose_from_action_func(struct ID *_selfid, bContext *C, struct bAction *action, float evaluation_time)
{
	rna_Pose_apply_pose_from_action(_selfid, C, action, evaluation_time);
}

void Pose_apply_pose_from_action_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bAction *action;
	float evaluation_time;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	action = *((struct bAction **)_data);
	_data += 8;
	evaluation_time = *((float *)_data);
	
	rna_Pose_apply_pose_from_action(_selfid, C, action, evaluation_time);
}

/* Repeated prototypes to detect errors */

void rna_Pose_apply_pose_from_action(struct ID *_selfid, bContext *C, struct bAction *action, float evaluation_time);

struct bActionGroup *BoneGroups_new_func(struct ID *_selfid, struct bPose *_self, ReportList *reports, const char * name)
{
	return rna_bone_group_new(_selfid, _self, reports, name);
}

void BoneGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPose *_self;
	const char * name;
	struct bActionGroup *group;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPose *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	group = rna_bone_group_new(_selfid, _self, reports, name);
	*((struct bActionGroup **)_retdata) = group;
}

void BoneGroups_remove_func(struct ID *_selfid, struct bPose *_self, ReportList *reports, struct PointerRNA *group)
{
	rna_bone_group_remove(_selfid, _self, reports, group);
}

void BoneGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPose *_self;
	struct PointerRNA *group;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPose *)_ptr->data;
	_data = (char *)_parms->data;
	group = *((struct PointerRNA **)_data);
	
	rna_bone_group_remove(_selfid, _self, reports, group);
}

/* Repeated prototypes to detect errors */

struct bActionGroup *rna_bone_group_new(struct ID *_selfid, struct bPose *_self, ReportList *reports, const char * name);
void rna_bone_group_remove(struct ID *_selfid, struct bPose *_self, ReportList *reports, struct PointerRNA *group);

float PoseBone_evaluate_envelope_func(struct bPoseChannel *_self, float point[3])
{
	return rna_PoseBone_do_envelope(_self, point);
}

void PoseBone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	float *point;
	float factor;
	char *_data, *_retdata;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((float *)_data);
	_data += 16;
	_retdata = _data;
	
	factor = rna_PoseBone_do_envelope(_self, point);
	*((float *)_retdata) = factor;
}

void PoseBone_bbone_segment_matrix_func(struct bPoseChannel *_self, ReportList *reports, float matrix_return[16], int index, bool rest)
{
	rna_PoseBone_bbone_segment_matrix(_self, reports, matrix_return, index, rest);
}

void PoseBone_bbone_segment_matrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	float *matrix_return;
	int index;
	bool rest;
	char *_data;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_return = ((float *)_data);
	_data += 64;
	index = *((int *)_data);
	_data += 8;
	rest = *((bool *)_data);
	
	rna_PoseBone_bbone_segment_matrix(_self, reports, matrix_return, index, rest);
}

void PoseBone_compute_bbone_handles_func(struct bPoseChannel *_self, ReportList *reports, float handle1[3], float *roll1, float handle2[3], float *roll2, bool rest, bool ease, bool offsets)
{
	rna_PoseBone_compute_bbone_handles(_self, reports, handle1, roll1, handle2, roll2, rest, ease, offsets);
}

void PoseBone_compute_bbone_handles_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPoseChannel *_self;
	float *handle1;
	float *roll1;
	float *handle2;
	float *roll2;
	bool rest;
	bool ease;
	bool offsets;
	char *_data;
	
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	handle1 = ((float *)_data);
	_data += 16;
	roll1 = ((float *)_data);
	_data += 8;
	handle2 = ((float *)_data);
	_data += 16;
	roll2 = ((float *)_data);
	_data += 8;
	rest = *((bool *)_data);
	_data += 8;
	ease = *((bool *)_data);
	_data += 8;
	offsets = *((bool *)_data);
	
	rna_PoseBone_compute_bbone_handles(_self, reports, handle1, roll1, handle2, roll2, rest, ease, offsets);
}

/* Repeated prototypes to detect errors */

float rna_PoseBone_do_envelope(struct bPoseChannel *_self, float point[3]);
void rna_PoseBone_bbone_segment_matrix(struct bPoseChannel *_self, ReportList *reports, float matrix_return[16], int index, bool rest);
void rna_PoseBone_compute_bbone_handles(struct bPoseChannel *_self, ReportList *reports, float handle1[3], float *roll1, float handle2[3], float *roll2, bool rest, bool ease, bool offsets);

struct bConstraint *PoseBoneConstraints_new_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, int type)
{
	return rna_PoseChannel_constraints_new(_selfid, _self, bmain, type);
}

void PoseBoneConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct bConstraint *constraint;
	int type;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	type = *((int *)_data);
	
	constraint = rna_PoseChannel_constraints_new(_selfid, _self, CTX_data_main(C), type);
	*((struct bConstraint **)_retdata) = constraint;
}

void PoseBoneConstraints_remove_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint)
{
	rna_PoseChannel_constraints_remove(_selfid, _self, bmain, reports, constraint);
}

void PoseBoneConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct PointerRNA *constraint;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	
	rna_PoseChannel_constraints_remove(_selfid, _self, CTX_data_main(C), reports, constraint);
}

void PoseBoneConstraints_move_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, int from_index, int to_index)
{
	rna_PoseChannel_constraints_move(_selfid, _self, bmain, reports, from_index, to_index);
}

void PoseBoneConstraints_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_PoseChannel_constraints_move(_selfid, _self, CTX_data_main(C), reports, from_index, to_index);
}

struct bConstraint *PoseBoneConstraints_copy_func(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, struct PointerRNA *constraint)
{
	return rna_PoseChannel_constraints_copy(_selfid, _self, bmain, constraint);
}

void PoseBoneConstraints_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bPoseChannel *_self;
	struct PointerRNA *constraint;
	struct bConstraint *new_constraint;
	char *_data, *_retdata;
	
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct bPoseChannel *)_ptr->data;
	_data = (char *)_parms->data;
	constraint = *((struct PointerRNA **)_data);
	_data += 8;
	_retdata = _data;
	
	new_constraint = rna_PoseChannel_constraints_copy(_selfid, _self, CTX_data_main(C), constraint);
	*((struct bConstraint **)_retdata) = new_constraint;
}

/* Repeated prototypes to detect errors */

struct bConstraint *rna_PoseChannel_constraints_new(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, int type);
void rna_PoseChannel_constraints_remove(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, struct PointerRNA *constraint);
void rna_PoseChannel_constraints_move(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, ReportList *reports, int from_index, int to_index);
struct bConstraint *rna_PoseChannel_constraints_copy(struct ID *_selfid, struct bPoseChannel *_self, Main *bmain, struct PointerRNA *constraint);




/* Pose */
CollectionPropertyRNA rna_Pose_rna_properties = {
	{(PropertyRNA *)&rna_Pose_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_rna_properties_begin, Pose_rna_properties_next, Pose_rna_properties_end, Pose_rna_properties_get, NULL, NULL, Pose_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Pose_rna_type = {
	{(PropertyRNA *)&rna_Pose_bones, (PropertyRNA *)&rna_Pose_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Pose_bones = {
	{(PropertyRNA *)&rna_Pose_bone_groups, (PropertyRNA *)&rna_Pose_rna_type,
	-1, "bones", 0, 1, 0, 0, 0, "Pose Bones",
	"Individual pose bones for the armature",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_bones_begin, Pose_bones_next, Pose_bones_end, Pose_bones_get, NULL, Pose_bones_lookup_int, Pose_bones_lookup_string, NULL, &RNA_PoseBone
};

CollectionPropertyRNA rna_Pose_bone_groups = {
	{(PropertyRNA *)&rna_Pose_ik_solver, (PropertyRNA *)&rna_Pose_bones,
	-1, "bone_groups", 0, 0, 0, 0, 0, "Bone Groups",
	"Groups of the bones",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_BoneGroups},
	Pose_bone_groups_begin, Pose_bone_groups_next, Pose_bone_groups_end, Pose_bone_groups_get, NULL, Pose_bone_groups_lookup_int, Pose_bone_groups_lookup_string, NULL, &RNA_BoneGroup
};

static const EnumPropertyItem rna_Pose_ik_solver_items[3] = {
	{0, "LEGACY", 0, "Standard", "Original IK solver"},
	{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Pose_ik_solver = {
	{(PropertyRNA *)&rna_Pose_ik_param, (PropertyRNA *)&rna_Pose_bone_groups,
	-1, "ik_solver", 3, 0, 0, 0, 0, "IK Solver",
	"Selection of IK solver for IK chain",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_ik_solver_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_ik_solver_get, Pose_ik_solver_set, NULL, NULL, NULL, rna_Pose_ik_solver_items, 2, 0
};

PointerPropertyRNA rna_Pose_ik_param = {
	{(PropertyRNA *)&rna_Pose_use_mirror_x, (PropertyRNA *)&rna_Pose_ik_solver,
	-1, "ik_param", 8388608, 0, 0, 0, 0, "IK Param",
	"Parameters for IK solver",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_ik_param_get, NULL, rna_Pose_ikparam_typef, NULL,&RNA_IKParam
};

BoolPropertyRNA rna_Pose_use_mirror_x = {
	{(PropertyRNA *)&rna_Pose_use_mirror_relative, (PropertyRNA *)&rna_Pose_ik_param,
	-1, "use_mirror_x", 65539, 1, 0, 0, 0, "X-Axis Mirror",
	"Apply changes to matching bone on opposite side of X-Axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_use_mirror_x_get, Pose_use_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Pose_use_mirror_relative = {
	{(PropertyRNA *)&rna_Pose_use_auto_ik, (PropertyRNA *)&rna_Pose_use_mirror_x,
	-1, "use_mirror_relative", 65539, 1, 0, 0, 0, "Relative Mirror",
	"Apply relative transformations in X-mirror mode (not supported with Auto IK)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_use_mirror_relative_get, Pose_use_mirror_relative_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Pose_use_auto_ik = {
	{(PropertyRNA *)&rna_Pose_animation_visualization, (PropertyRNA *)&rna_Pose_use_mirror_relative,
	-1, "use_auto_ik", 65539, 1, 0, 0, 0, "Auto IK",
	"Add temporary IK constraints while grabbing bones in Pose Mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_use_auto_ik_get, Pose_use_auto_ik_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Pose_animation_visualization = {
	{NULL, (PropertyRNA *)&rna_Pose_use_auto_ik,
	-1, "animation_visualization", 8650752, 1, 0, 0, 0, "Animation Visualization",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Pose_animation_visualization_get, NULL, NULL, NULL,&RNA_AnimViz
};

PointerPropertyRNA rna_Pose_apply_pose_from_action_action = {
	{(PropertyRNA *)&rna_Pose_apply_pose_from_action_evaluation_time, NULL,
	-1, "action", 8388736, 0, 1, 0, 0, "Action",
	"The Action containing the pose",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Action
};

FloatPropertyRNA rna_Pose_apply_pose_from_action_evaluation_time = {
	{NULL, (PropertyRNA *)&rna_Pose_apply_pose_from_action_action,
	-1, "evaluation_time", 3, 0, 0, 0, 0, "Evaluation Time",
	"Time at which the given action is evaluated to obtain the pose",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Pose_apply_pose_from_action_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Pose_apply_pose_from_action_action, (PropertyRNA *)&rna_Pose_apply_pose_from_action_evaluation_time}},
	"apply_pose_from_action", 2057, "Apply the given action to this pose by evaluating it at a specific time. Only updates the pose of selected bones, or all bones if none are selected.",
	Pose_apply_pose_from_action_call,
	NULL
};

StructRNA RNA_Pose = {
	{(ContainerRNA *)&RNA_BoneGroups, (ContainerRNA *)&RNA_PointCloud,
	NULL,
	{(PropertyRNA *)&rna_Pose_rna_properties, (PropertyRNA *)&rna_Pose_animation_visualization}},
	"Pose", NULL, NULL, 516, NULL, "Pose",
	"A collection of pose channels, including settings for animating bones",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Pose_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Pose_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Pose_apply_pose_from_action_func, (FunctionRNA *)&rna_Pose_apply_pose_from_action_func}
};

/* Bone Groups */
CollectionPropertyRNA rna_BoneGroups_rna_properties = {
	{(PropertyRNA *)&rna_BoneGroups_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroups_rna_properties_begin, BoneGroups_rna_properties_next, BoneGroups_rna_properties_end, BoneGroups_rna_properties_get, NULL, NULL, BoneGroups_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoneGroups_rna_type = {
	{(PropertyRNA *)&rna_BoneGroups_active, (PropertyRNA *)&rna_BoneGroups_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_BoneGroups_active = {
	{(PropertyRNA *)&rna_BoneGroups_active_index, (PropertyRNA *)&rna_BoneGroups_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Bone Group",
	"Active bone group for this pose",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroups_active_get, BoneGroups_active_set, NULL, NULL,&RNA_BoneGroup
};

IntPropertyRNA rna_BoneGroups_active_index = {
	{NULL, (PropertyRNA *)&rna_BoneGroups_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Bone Group Index",
	"Active index in bone groups array",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroups_active_index_get, BoneGroups_active_index_set, NULL, NULL, rna_Pose_active_bone_group_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_BoneGroups_new_name = {
	{(PropertyRNA *)&rna_BoneGroups_new_group, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Name of the new group",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, "Group"
};

PointerPropertyRNA rna_BoneGroups_new_group = {
	{NULL, (PropertyRNA *)&rna_BoneGroups_new_name,
	-1, "group", 8388608, 0, 2, 0, 0, "",
	"New bone group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BoneGroup
};

FunctionRNA rna_BoneGroups_new_func = {
	{(FunctionRNA *)&rna_BoneGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_BoneGroups_new_name, (PropertyRNA *)&rna_BoneGroups_new_group}},
	"new", 2064, "Add a new bone group to the object",
	BoneGroups_new_call,
	(PropertyRNA *)&rna_BoneGroups_new_group
};

PointerPropertyRNA rna_BoneGroups_remove_group = {
	{NULL, NULL,
	-1, "group", 262144, 0, 5, 0, 0, "",
	"Removed bone group",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_BoneGroup
};

FunctionRNA rna_BoneGroups_remove_func = {
	{NULL, (FunctionRNA *)&rna_BoneGroups_new_func,
	NULL,
	{(PropertyRNA *)&rna_BoneGroups_remove_group, (PropertyRNA *)&rna_BoneGroups_remove_group}},
	"remove", 2064, "Remove a bone group from this object",
	BoneGroups_remove_call,
	NULL
};

StructRNA RNA_BoneGroups = {
	{(ContainerRNA *)&RNA_PoseBone, (ContainerRNA *)&RNA_Pose,
	NULL,
	{(PropertyRNA *)&rna_BoneGroups_rna_properties, (PropertyRNA *)&rna_BoneGroups_active_index}},
	"BoneGroups", NULL, NULL, 516, NULL, "Bone Groups",
	"Collection of bone groups",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BoneGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_BoneGroups_new_func, (FunctionRNA *)&rna_BoneGroups_remove_func}
};

/* Pose Bone */
CollectionPropertyRNA rna_PoseBone_rna_properties = {
	{(PropertyRNA *)&rna_PoseBone_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_rna_properties_begin, PoseBone_rna_properties_next, PoseBone_rna_properties_end, PoseBone_rna_properties_get, NULL, NULL, PoseBone_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PoseBone_rna_type = {
	{(PropertyRNA *)&rna_PoseBone_constraints, (PropertyRNA *)&rna_PoseBone_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_PoseBone_constraints = {
	{(PropertyRNA *)&rna_PoseBone_name, (PropertyRNA *)&rna_PoseBone_rna_type,
	-1, "constraints", 0, 1025, 0, 0, 0, "Constraints",
	"Constraints that act on this pose channel",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_PoseChannel_constraints_override_apply,
	0, -1, &RNA_PoseBoneConstraints},
	PoseBone_constraints_begin, PoseBone_constraints_next, PoseBone_constraints_end, PoseBone_constraints_get, NULL, PoseBone_constraints_lookup_int, PoseBone_constraints_lookup_string, NULL, &RNA_Constraint
};

StringPropertyRNA rna_PoseBone_name = {
	{(PropertyRNA *)&rna_PoseBone_motion_path, (PropertyRNA *)&rna_PoseBone_constraints,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_PoseChannel_name_update, 0, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_name_get, PoseBone_name_length, PoseBone_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_PoseBone_motion_path = {
	{(PropertyRNA *)&rna_PoseBone_bone, (PropertyRNA *)&rna_PoseBone_name,
	-1, "motion_path", 8388608, 0, 0, 0, 0, "Motion Path",
	"Motion Path for this element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_motion_path_get, NULL, NULL, NULL,&RNA_MotionPath
};

PointerPropertyRNA rna_PoseBone_bone = {
	{(PropertyRNA *)&rna_PoseBone_parent, (PropertyRNA *)&rna_PoseBone_motion_path,
	-1, "bone", 8650880, 0, 0, 0, 0, "Bone",
	"Bone associated with this PoseBone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_bone_get, NULL, NULL, NULL,&RNA_Bone
};

PointerPropertyRNA rna_PoseBone_parent = {
	{(PropertyRNA *)&rna_PoseBone_child, (PropertyRNA *)&rna_PoseBone_bone,
	-1, "parent", 8388736, 0, 0, 0, 0, "Parent",
	"Parent of this pose bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_parent_get, NULL, NULL, NULL,&RNA_PoseBone
};

PointerPropertyRNA rna_PoseBone_child = {
	{(PropertyRNA *)&rna_PoseBone_location, (PropertyRNA *)&rna_PoseBone_parent,
	-1, "child", 8388736, 0, 0, 0, 0, "Child",
	"Child of this pose bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_child_get, NULL, NULL, NULL,&RNA_PoseBone
};

static float rna_PoseBone_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_location = {
	{(PropertyRNA *)&rna_PoseBone_scale, (PropertyRNA *)&rna_PoseBone_child,
	-1, "location", 3, 1, 0, 4, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_IK_update, 101974016, NULL, rna_PoseChannel_location_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, loc), 5, NULL},
	NULL, NULL, PoseBone_location_get, PoseBone_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_location_default
};

static float rna_PoseBone_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_scale = {
	{(PropertyRNA *)&rna_PoseBone_rotation_quaternion, (PropertyRNA *)&rna_PoseBone_location,
	-1, "scale", 67108867, 1, 0, 4, 0, "Scale",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_IK_update, 101974016, NULL, rna_PoseChannel_scale_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, size), 5, NULL},
	NULL, NULL, PoseBone_scale_get, PoseBone_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_scale_default
};

static float rna_PoseBone_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_quaternion = {
	{(PropertyRNA *)&rna_PoseBone_rotation_axis_angle, (PropertyRNA *)&rna_PoseBone_scale,
	-1, "rotation_quaternion", 3, 1, 0, 4, 0, "Quaternion Rotation",
	"Rotation in Quaternions",
	0, "*",
	PROP_FLOAT, PROP_QUATERNION | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Pose_update, 101974016, NULL, rna_PoseChannel_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, quat), 5, NULL},
	NULL, NULL, PoseBone_rotation_quaternion_get, PoseBone_rotation_quaternion_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_quaternion_default
};

static float rna_PoseBone_rotation_axis_angle_default[4] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_axis_angle = {
	{(PropertyRNA *)&rna_PoseBone_rotation_euler, (PropertyRNA *)&rna_PoseBone_rotation_quaternion,
	-1, "rotation_axis_angle", 3, 1, 0, 0, 0, "Axis-Angle Rotation",
	"Angle of Rotation for Axis-Angle rotation representation",
	0, "*",
	PROP_FLOAT, PROP_AXISANGLE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Pose_update, 101974016, NULL, rna_PoseChannel_rotation_4d_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, PoseBone_rotation_axis_angle_get, PoseBone_rotation_axis_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_axis_angle_default
};

static float rna_PoseBone_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_rotation_euler = {
	{(PropertyRNA *)&rna_PoseBone_rotation_mode, (PropertyRNA *)&rna_PoseBone_rotation_axis_angle,
	-1, "rotation_euler", 3, 1, 0, 4, 0, "Euler Rotation",
	"Rotation in Eulers",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, NULL, rna_PoseChannel_rotation_euler_editable, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, eul), 5, NULL},
	NULL, NULL, PoseBone_rotation_euler_get, PoseBone_rotation_euler_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_rotation_euler_default
};

EnumPropertyRNA rna_PoseBone_rotation_mode = {
	{(PropertyRNA *)&rna_PoseBone_bbone_rollin, (PropertyRNA *)&rna_PoseBone_rotation_euler,
	-1, "rotation_mode", 3, 1, 0, 0, 0, "Rotation Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_rotation_mode_get, PoseBone_rotation_mode_set, NULL, NULL, NULL, rna_enum_object_rotation_mode_items, 8, 0
};

FloatPropertyRNA rna_PoseBone_bbone_rollin = {
	{(PropertyRNA *)&rna_PoseBone_bbone_rollout, (PropertyRNA *)&rna_PoseBone_rotation_mode,
	-1, "bbone_rollin", 3, 0, 0, 4, 0, "Roll In",
	"Roll offset for the start of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, roll1), 5, NULL},
	PoseBone_bbone_rollin_get, PoseBone_bbone_rollin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_rollout = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveinx, (PropertyRNA *)&rna_PoseBone_bbone_rollin,
	-1, "bbone_rollout", 3, 0, 0, 4, 0, "Roll Out",
	"Roll offset for the end of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, roll2), 5, NULL},
	PoseBone_bbone_rollout_get, PoseBone_bbone_rollout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_curveinx = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveinz, (PropertyRNA *)&rna_PoseBone_bbone_rollout,
	-1, "bbone_curveinx", 3, 0, 0, 4, 0, "In X",
	"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_in_x), 5, NULL},
	PoseBone_bbone_curveinx_get, PoseBone_bbone_curveinx_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_curveinz = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveoutx, (PropertyRNA *)&rna_PoseBone_bbone_curveinx,
	-1, "bbone_curveinz", 3, 0, 0, 4, 0, "In Z",
	"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_in_z), 5, NULL},
	PoseBone_bbone_curveinz_get, PoseBone_bbone_curveinz_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_curveoutx = {
	{(PropertyRNA *)&rna_PoseBone_bbone_curveoutz, (PropertyRNA *)&rna_PoseBone_bbone_curveinz,
	-1, "bbone_curveoutx", 3, 0, 0, 4, 0, "Out X",
	"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_out_x), 5, NULL},
	PoseBone_bbone_curveoutx_get, PoseBone_bbone_curveoutx_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_curveoutz = {
	{(PropertyRNA *)&rna_PoseBone_bbone_easein, (PropertyRNA *)&rna_PoseBone_bbone_curveoutx,
	-1, "bbone_curveoutz", 3, 0, 0, 4, 0, "Out Z",
	"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, curve_out_z), 5, NULL},
	PoseBone_bbone_curveoutz_get, PoseBone_bbone_curveoutz_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_easein = {
	{(PropertyRNA *)&rna_PoseBone_bbone_easeout, (PropertyRNA *)&rna_PoseBone_bbone_curveoutz,
	-1, "bbone_easein", 3, 0, 0, 4, 0, "Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ease1), 5, NULL},
	PoseBone_bbone_easein_get, PoseBone_bbone_easein_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_PoseBone_bbone_easeout = {
	{(PropertyRNA *)&rna_PoseBone_bbone_scalein, (PropertyRNA *)&rna_PoseBone_bbone_easein,
	-1, "bbone_easeout", 3, 0, 0, 4, 0, "Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ease2), 5, NULL},
	PoseBone_bbone_easeout_get, PoseBone_bbone_easeout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

static float rna_PoseBone_bbone_scalein_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_bbone_scalein = {
	{(PropertyRNA *)&rna_PoseBone_bbone_scaleout, (PropertyRNA *)&rna_PoseBone_bbone_easeout,
	-1, "bbone_scalein", 67108867, 0, 0, 4, 0, "Scale In",
	"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, scale_in), 5, NULL},
	NULL, NULL, PoseBone_bbone_scalein_get, PoseBone_bbone_scalein_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_bbone_scalein_default
};

static float rna_PoseBone_bbone_scaleout_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_bbone_scaleout = {
	{(PropertyRNA *)&rna_PoseBone_bbone_custom_handle_start, (PropertyRNA *)&rna_PoseBone_bbone_scalein,
	-1, "bbone_scaleout", 67108867, 0, 0, 4, 0, "Scale Out",
	"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, scale_out), 5, NULL},
	NULL, NULL, PoseBone_bbone_scaleout_get, PoseBone_bbone_scaleout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_bbone_scaleout_default
};

PointerPropertyRNA rna_PoseBone_bbone_custom_handle_start = {
	{(PropertyRNA *)&rna_PoseBone_bbone_custom_handle_end, (PropertyRNA *)&rna_PoseBone_bbone_scaleout,
	-1, "bbone_custom_handle_start", 8388736, 2, 0, 0, 0, "B-Bone Start Handle",
	"Bone that serves as the start handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_dependency_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_bbone_custom_handle_start_get, NULL, NULL, NULL,&RNA_PoseBone
};

PointerPropertyRNA rna_PoseBone_bbone_custom_handle_end = {
	{(PropertyRNA *)&rna_PoseBone_matrix_channel, (PropertyRNA *)&rna_PoseBone_bbone_custom_handle_start,
	-1, "bbone_custom_handle_end", 8388736, 2, 0, 0, 0, "B-Bone End Handle",
	"Bone that serves as the end handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_dependency_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_bbone_custom_handle_end_get, NULL, NULL, NULL,&RNA_PoseBone
};

static float rna_PoseBone_matrix_channel_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix_channel = {
	{(PropertyRNA *)&rna_PoseBone_matrix_basis, (PropertyRNA *)&rna_PoseBone_bbone_custom_handle_end,
	-1, "matrix_channel", 2, 0, 0, 4, 0, "Channel Matrix",
	"4x4 matrix, before constraints",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, chan_mat), 5, NULL},
	NULL, NULL, PoseBone_matrix_channel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_channel_default
};

static float rna_PoseBone_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix_basis = {
	{(PropertyRNA *)&rna_PoseBone_matrix, (PropertyRNA *)&rna_PoseBone_matrix_channel,
	-1, "matrix_basis", 1, 0, 0, 0, 0, "Basis Matrix",
	"Alternative access to location/scale/rotation relative to the parent and own rest bone",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, PoseBone_matrix_basis_get, PoseBone_matrix_basis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_basis_default
};

static float rna_PoseBone_matrix_default[16] = {
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

FloatPropertyRNA rna_PoseBone_matrix = {
	{(PropertyRNA *)&rna_PoseBone_head, (PropertyRNA *)&rna_PoseBone_matrix_basis,
	-1, "matrix", 3, 0, 0, 0, 0, "Pose Matrix",
	"Final 4x4 matrix after constraints and drivers are applied (object space)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, PoseBone_matrix_get, PoseBone_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_matrix_default
};

static float rna_PoseBone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_head = {
	{(PropertyRNA *)&rna_PoseBone_tail, (PropertyRNA *)&rna_PoseBone_matrix,
	-1, "head", 2, 0, 0, 4, 0, "Pose Head Position",
	"Location of head of the channel\'s bone",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, pose_head), 5, NULL},
	NULL, NULL, PoseBone_head_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_head_default
};

static float rna_PoseBone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_tail = {
	{(PropertyRNA *)&rna_PoseBone_length, (PropertyRNA *)&rna_PoseBone_head,
	-1, "tail", 2, 0, 0, 4, 0, "Pose Tail Position",
	"Location of tail of the channel\'s bone",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, pose_tail), 5, NULL},
	NULL, NULL, PoseBone_tail_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_tail_default
};

FloatPropertyRNA rna_PoseBone_length = {
	{(PropertyRNA *)&rna_PoseBone_is_in_ik_chain, (PropertyRNA *)&rna_PoseBone_tail,
	-1, "length", 2, 0, 0, 0, 0, "Length",
	"Length of the bone",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_PoseBone_is_in_ik_chain = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_x, (PropertyRNA *)&rna_PoseBone_length,
	-1, "is_in_ik_chain", 2, 0, 0, 0, 0, "Has IK",
	"Is part of an IK chain",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_is_in_ik_chain_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_ik_x = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_y, (PropertyRNA *)&rna_PoseBone_is_in_ik_chain,
	-1, "lock_ik_x", 4099, 0, 0, 0, 0, "IK X Lock",
	"Disallow movement around the X axis",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_lock_ik_x_get, PoseBone_lock_ik_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_ik_y = {
	{(PropertyRNA *)&rna_PoseBone_lock_ik_z, (PropertyRNA *)&rna_PoseBone_lock_ik_x,
	-1, "lock_ik_y", 4099, 0, 0, 0, 0, "IK Y Lock",
	"Disallow movement around the Y axis",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_lock_ik_y_get, PoseBone_lock_ik_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_ik_z = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_x, (PropertyRNA *)&rna_PoseBone_lock_ik_y,
	-1, "lock_ik_z", 4099, 0, 0, 0, 0, "IK Z Lock",
	"Disallow movement around the Z axis",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_lock_ik_z_get, PoseBone_lock_ik_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_x = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_y, (PropertyRNA *)&rna_PoseBone_lock_ik_z,
	-1, "use_ik_limit_x", 3, 0, 0, 0, 0, "IK X Limit",
	"Limit movement around the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_use_ik_limit_x_get, PoseBone_use_ik_limit_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_y = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_limit_z, (PropertyRNA *)&rna_PoseBone_use_ik_limit_x,
	-1, "use_ik_limit_y", 3, 0, 0, 0, 0, "IK Y Limit",
	"Limit movement around the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_use_ik_limit_y_get, PoseBone_use_ik_limit_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_limit_z = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_rotation_control, (PropertyRNA *)&rna_PoseBone_use_ik_limit_y,
	-1, "use_ik_limit_z", 3, 0, 0, 0, 0, "IK Z Limit",
	"Limit movement around the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_use_ik_limit_z_get, PoseBone_use_ik_limit_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_rotation_control = {
	{(PropertyRNA *)&rna_PoseBone_use_ik_linear_control, (PropertyRNA *)&rna_PoseBone_use_ik_limit_z,
	-1, "use_ik_rotation_control", 3, 0, 0, 0, 0, "IK Rotation Control",
	"Apply channel rotation as IK constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_use_ik_rotation_control_get, PoseBone_use_ik_rotation_control_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_use_ik_linear_control = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_x, (PropertyRNA *)&rna_PoseBone_use_ik_rotation_control,
	-1, "use_ik_linear_control", 3, 0, 0, 0, 0, "IK Linear Control",
	"Apply channel size as IK constraint if stretching is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_use_ik_linear_control_get, PoseBone_use_ik_linear_control_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_PoseBone_ik_min_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_x, (PropertyRNA *)&rna_PoseBone_use_ik_linear_control,
	-1, "ik_min_x", 3, 0, 0, 4, 0, "IK X Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmin[0]), 5, NULL},
	PoseBone_ik_min_x_get, PoseBone_ik_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_max_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_y, (PropertyRNA *)&rna_PoseBone_ik_min_x,
	-1, "ik_max_x", 3, 0, 0, 4, 0, "IK X Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmax[0]), 5, NULL},
	PoseBone_ik_max_x_get, PoseBone_ik_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_min_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_y, (PropertyRNA *)&rna_PoseBone_ik_max_x,
	-1, "ik_min_y", 3, 0, 0, 4, 0, "IK Y Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmin[1]), 5, NULL},
	PoseBone_ik_min_y_get, PoseBone_ik_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_max_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_min_z, (PropertyRNA *)&rna_PoseBone_ik_min_y,
	-1, "ik_max_y", 3, 0, 0, 4, 0, "IK Y Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmax[1]), 5, NULL},
	PoseBone_ik_max_y_get, PoseBone_ik_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_min_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_max_z, (PropertyRNA *)&rna_PoseBone_ik_max_y,
	-1, "ik_min_z", 3, 0, 0, 4, 0, "IK Z Minimum",
	"Minimum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmin[2]), 5, NULL},
	PoseBone_ik_min_z_get, PoseBone_ik_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -3.1415927410f, 0.0f, -3.1415927410f, 0.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_max_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_x, (PropertyRNA *)&rna_PoseBone_ik_min_z,
	-1, "ik_max_z", 3, 0, 0, 4, 0, "IK Z Maximum",
	"Maximum angles for IK Limit",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, limitmax[2]), 5, NULL},
	PoseBone_ik_max_z_get, PoseBone_ik_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_x = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_y, (PropertyRNA *)&rna_PoseBone_ik_max_z,
	-1, "ik_stiffness_x", 3, 0, 0, 4, 0, "IK X Stiffness",
	"IK stiffness around the X axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, stiffness[0]), 5, NULL},
	PoseBone_ik_stiffness_x_get, PoseBone_ik_stiffness_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_y = {
	{(PropertyRNA *)&rna_PoseBone_ik_stiffness_z, (PropertyRNA *)&rna_PoseBone_ik_stiffness_x,
	-1, "ik_stiffness_y", 3, 0, 0, 4, 0, "IK Y Stiffness",
	"IK stiffness around the Y axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, stiffness[1]), 5, NULL},
	PoseBone_ik_stiffness_y_get, PoseBone_ik_stiffness_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stiffness_z = {
	{(PropertyRNA *)&rna_PoseBone_ik_stretch, (PropertyRNA *)&rna_PoseBone_ik_stiffness_y,
	-1, "ik_stiffness_z", 3, 0, 0, 4, 0, "IK Z Stiffness",
	"IK stiffness around the Z axis",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, stiffness[2]), 5, NULL},
	PoseBone_ik_stiffness_z_get, PoseBone_ik_stiffness_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_stretch = {
	{(PropertyRNA *)&rna_PoseBone_ik_rotation_weight, (PropertyRNA *)&rna_PoseBone_ik_stiffness_z,
	-1, "ik_stretch", 3, 0, 0, 4, 0, "IK Stretch",
	"Allow scaling of the bone for IK",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_IK_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ikstretch), 5, NULL},
	PoseBone_ik_stretch_get, PoseBone_ik_stretch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_rotation_weight = {
	{(PropertyRNA *)&rna_PoseBone_ik_linear_weight, (PropertyRNA *)&rna_PoseBone_ik_stretch,
	-1, "ik_rotation_weight", 3, 0, 0, 4, 0, "IK Rotation Weight",
	"Weight of rotation constraint for IK",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, ikrotweight), 5, NULL},
	PoseBone_ik_rotation_weight_get, PoseBone_ik_rotation_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_PoseBone_ik_linear_weight = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape, (PropertyRNA *)&rna_PoseBone_ik_rotation_weight,
	-1, "ik_linear_weight", 3, 0, 0, 4, 0, "IK Lin Weight",
	"Weight of scale constraint for IK",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, iklinweight), 5, NULL},
	PoseBone_ik_linear_weight_get, PoseBone_ik_linear_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_PoseBone_custom_shape = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_scale_xyz, (PropertyRNA *)&rna_PoseBone_ik_linear_weight,
	-1, "custom_shape", 8388801, 1, 0, 0, 0, "Custom Object",
	"Object that defines custom display shape for this bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_dependency_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_custom_shape_get, PoseBone_custom_shape_set, NULL, NULL,&RNA_Object
};

static float rna_PoseBone_custom_shape_scale_xyz_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_PoseBone_custom_shape_scale_xyz = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_translation, (PropertyRNA *)&rna_PoseBone_custom_shape,
	-1, "custom_shape_scale_xyz", 67108867, 0, 0, 4, 0, "Custom Shape Scale",
	"Adjust the size of the custom shape",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, custom_scale_xyz), 5, NULL},
	NULL, NULL, PoseBone_custom_shape_scale_xyz_get, PoseBone_custom_shape_scale_xyz_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_custom_shape_scale_xyz_default
};

static float rna_PoseBone_custom_shape_translation_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_custom_shape_translation = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_rotation_euler, (PropertyRNA *)&rna_PoseBone_custom_shape_scale_xyz,
	-1, "custom_shape_translation", 67108867, 0, 0, 4, 0, "Custom Shape Translation",
	"Adjust the location of the custom shape",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, custom_translation), 5, NULL},
	NULL, NULL, PoseBone_custom_shape_translation_get, PoseBone_custom_shape_translation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_PoseBone_custom_shape_translation_default
};

static float rna_PoseBone_custom_shape_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_custom_shape_rotation_euler = {
	{(PropertyRNA *)&rna_PoseBone_use_custom_shape_bone_size, (PropertyRNA *)&rna_PoseBone_custom_shape_translation,
	-1, "custom_shape_rotation_euler", 3, 0, 0, 4, 0, "Custom Shape Rotation",
	"Adjust the rotation of the custom shape",
	0, "*",
	PROP_FLOAT, PROP_EULER | PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bPoseChannel, custom_rotation_euler), 5, NULL},
	NULL, NULL, PoseBone_custom_shape_rotation_euler_get, PoseBone_custom_shape_rotation_euler_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_custom_shape_rotation_euler_default
};

BoolPropertyRNA rna_PoseBone_use_custom_shape_bone_size = {
	{(PropertyRNA *)&rna_PoseBone_custom_shape_transform, (PropertyRNA *)&rna_PoseBone_custom_shape_rotation_euler,
	-1, "use_custom_shape_bone_size", 3, 0, 0, 0, 0, "Scale to Bone Length",
	"Scale the custom object by the bone length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_use_custom_shape_bone_size_get, PoseBone_use_custom_shape_bone_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_PoseBone_custom_shape_transform = {
	{(PropertyRNA *)&rna_PoseBone_bone_group_index, (PropertyRNA *)&rna_PoseBone_use_custom_shape_bone_size,
	-1, "custom_shape_transform", 8388737, 2, 0, 0, 0, "Custom Shape Transform",
	"Bone that defines the display transform of this custom shape",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_custom_shape_transform_get, PoseBone_custom_shape_transform_set, NULL, NULL,&RNA_PoseBone
};

IntPropertyRNA rna_PoseBone_bone_group_index = {
	{(PropertyRNA *)&rna_PoseBone_bone_group, (PropertyRNA *)&rna_PoseBone_custom_shape_transform,
	-1, "bone_group_index", 1, 0, 0, 0, 0, "Bone Group Index",
	"Bone group this pose channel belongs to (0 means no group)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_bone_group_index_get, PoseBone_bone_group_index_set, NULL, NULL, rna_PoseChannel_bone_group_index_range, NULL, NULL, NULL, NULL, NULL,
	0, -32768, 32767, -32768, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_PoseBone_bone_group = {
	{(PropertyRNA *)&rna_PoseBone_lock_location, (PropertyRNA *)&rna_PoseBone_bone_group_index,
	-1, "bone_group", 8388609, 0, 0, 0, 0, "Bone Group",
	"Bone group this pose channel belongs to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_bone_group_get, PoseBone_bone_group_set, NULL, NULL,&RNA_BoneGroup
};

static bool rna_PoseBone_lock_location_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_location = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotation, (PropertyRNA *)&rna_PoseBone_bone_group,
	-1, "lock_location", 4099, 0, 0, 0, 0, "Lock Location",
	"Lock editing of location when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, PoseBone_lock_location_get, PoseBone_lock_location_set, NULL, NULL, NULL, NULL, 0, rna_PoseBone_lock_location_default
};

static bool rna_PoseBone_lock_rotation_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_rotation = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotation_w, (PropertyRNA *)&rna_PoseBone_lock_location,
	-1, "lock_rotation", 4099, 0, 0, 0, 0, "Lock Rotation",
	"Lock editing of rotation when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, PoseBone_lock_rotation_get, PoseBone_lock_rotation_set, NULL, NULL, NULL, NULL, 0, rna_PoseBone_lock_rotation_default
};

BoolPropertyRNA rna_PoseBone_lock_rotation_w = {
	{(PropertyRNA *)&rna_PoseBone_lock_rotations_4d, (PropertyRNA *)&rna_PoseBone_lock_rotation,
	-1, "lock_rotation_w", 4099, 0, 0, 0, 0, "Lock Rotation (4D Angle)",
	"Lock editing of \'angle\' component of four-component rotations when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_lock_rotation_w_get, PoseBone_lock_rotation_w_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_lock_rotations_4d = {
	{(PropertyRNA *)&rna_PoseBone_lock_scale, (PropertyRNA *)&rna_PoseBone_lock_rotation_w,
	-1, "lock_rotations_4d", 3, 0, 0, 0, 0, "Lock Rotations (4D)",
	"Lock editing of four component rotations by components (instead of as Eulers)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBone_lock_rotations_4d_get, PoseBone_lock_rotations_4d_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static bool rna_PoseBone_lock_scale_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_PoseBone_lock_scale = {
	{NULL, (PropertyRNA *)&rna_PoseBone_lock_rotations_4d,
	-1, "lock_scale", 4099, 0, 0, 0, 0, "Lock Scale",
	"Lock editing of scale when transforming",
	40, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Pose_update, 101974016, rna_PoseChannel_proxy_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, PoseBone_lock_scale_get, PoseBone_lock_scale_set, NULL, NULL, NULL, NULL, 0, rna_PoseBone_lock_scale_default
};

static float rna_PoseBone_evaluate_envelope_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_evaluate_envelope_point = {
	{(PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor, NULL,
	-1, "point", 3, 0, 1, 0, 0, "Point",
	"Position in 3d space to evaluate",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_PoseBone_evaluate_envelope_point_default
};

FloatPropertyRNA rna_PoseBone_evaluate_envelope_factor = {
	{NULL, (PropertyRNA *)&rna_PoseBone_evaluate_envelope_point,
	-1, "factor", 3, 0, 2, 0, 0, "Factor",
	"Envelope factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_PoseBone_evaluate_envelope_func = {
	{(FunctionRNA *)&rna_PoseBone_bbone_segment_matrix_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_PoseBone_evaluate_envelope_point, (PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor}},
	"evaluate_envelope", 0, "Calculate bone envelope at given point",
	PoseBone_evaluate_envelope_call,
	(PropertyRNA *)&rna_PoseBone_evaluate_envelope_factor
};

static float rna_PoseBone_bbone_segment_matrix_matrix_return_default[16] = {
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

FloatPropertyRNA rna_PoseBone_bbone_segment_matrix_matrix_return = {
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_index, NULL,
	-1, "matrix_return", 3, 0, 2, 0, 0, "",
	"The resulting matrix in bone local space",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_bbone_segment_matrix_matrix_return_default
};

IntPropertyRNA rna_PoseBone_bbone_segment_matrix_index = {
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_rest, (PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_matrix_return,
	-1, "index", 3, 0, 1, 0, 0, "",
	"Index of the segment endpoint",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_PoseBone_bbone_segment_matrix_rest = {
	{NULL, (PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_index,
	-1, "rest", 3, 0, 0, 0, 0, "",
	"Return the rest pose matrix",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_PoseBone_bbone_segment_matrix_func = {
	{(FunctionRNA *)&rna_PoseBone_compute_bbone_handles_func, (FunctionRNA *)&rna_PoseBone_evaluate_envelope_func,
	NULL,
	{(PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_matrix_return, (PropertyRNA *)&rna_PoseBone_bbone_segment_matrix_rest}},
	"bbone_segment_matrix", 16, "Retrieve the matrix of the joint between B-Bone segments if available",
	PoseBone_bbone_segment_matrix_call,
	NULL
};

static float rna_PoseBone_compute_bbone_handles_handle1_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle1 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll1, NULL,
	-1, "handle1", 3, 0, 2, 0, 0, "",
	"The direction vector of the start handle in bone local space",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_compute_bbone_handles_handle1_default
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll1 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle2, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle1,
	-1, "roll1", 3, 0, 2, 0, 0, "",
	"Roll of the start handle",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static float rna_PoseBone_compute_bbone_handles_handle2_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_handle2 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll2, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll1,
	-1, "handle2", 3, 0, 2, 0, 0, "",
	"The direction vector of the end handle in bone local space",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PoseBone_compute_bbone_handles_handle2_default
};

FloatPropertyRNA rna_PoseBone_compute_bbone_handles_roll2 = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_rest, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle2,
	-1, "roll2", 3, 0, 2, 0, 0, "",
	"Roll of the end handle",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_PoseBone_compute_bbone_handles_rest = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_ease, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_roll2,
	-1, "rest", 3, 0, 0, 0, 0, "",
	"Return the rest pose state",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_compute_bbone_handles_ease = {
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_offsets, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_rest,
	-1, "ease", 3, 0, 0, 0, 0, "",
	"Apply scale from ease values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PoseBone_compute_bbone_handles_offsets = {
	{NULL, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_ease,
	-1, "offsets", 3, 0, 0, 0, 0, "",
	"Apply roll and curve offsets from bone properties",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_PoseBone_compute_bbone_handles_func = {
	{NULL, (FunctionRNA *)&rna_PoseBone_bbone_segment_matrix_func,
	NULL,
	{(PropertyRNA *)&rna_PoseBone_compute_bbone_handles_handle1, (PropertyRNA *)&rna_PoseBone_compute_bbone_handles_offsets}},
	"compute_bbone_handles", 16, "Retrieve the vectors and rolls coming from B-Bone custom handles",
	PoseBone_compute_bbone_handles_call,
	NULL
};

StructRNA RNA_PoseBone = {
	{(ContainerRNA *)&RNA_PoseBoneConstraints, (ContainerRNA *)&RNA_BoneGroups,
	NULL,
	{(PropertyRNA *)&rna_PoseBone_rna_properties, (PropertyRNA *)&rna_PoseBone_lock_scale}},
	"PoseBone", NULL, NULL, 516, NULL, "Pose Bone",
	"Channel defining pose data for a bone in a Pose",
	"*", 174,
	(PropertyRNA *)&rna_PoseBone_name, (PropertyRNA *)&rna_PoseBone_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_PoseBone_path,
	NULL,
	NULL,
	NULL,
	rna_PoseBone_idprops,
	{(FunctionRNA *)&rna_PoseBone_evaluate_envelope_func, (FunctionRNA *)&rna_PoseBone_compute_bbone_handles_func}
};

/* PoseBone Constraints */
CollectionPropertyRNA rna_PoseBoneConstraints_rna_properties = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBoneConstraints_rna_properties_begin, PoseBoneConstraints_rna_properties_next, PoseBoneConstraints_rna_properties_end, PoseBoneConstraints_rna_properties_get, NULL, NULL, PoseBoneConstraints_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PoseBoneConstraints_rna_type = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_active, (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBoneConstraints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_PoseBoneConstraints_active = {
	{NULL, (PropertyRNA *)&rna_PoseBoneConstraints_rna_type,
	-1, "active", 8388609, 0, 0, 0, 0, "Active Constraint",
	"Active PoseChannel constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PoseBoneConstraints_active_get, PoseBoneConstraints_active_set, NULL, NULL,&RNA_Constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_new_constraint = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_new_type, NULL,
	-1, "constraint", 8388608, 0, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

EnumPropertyRNA rna_PoseBoneConstraints_new_type = {
	{NULL, (PropertyRNA *)&rna_PoseBoneConstraints_new_constraint,
	-1, "type", 3, 0, 1, 0, 0, "",
	"Constraint type to add",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_constraint_type_items, 32, 1
};

FunctionRNA rna_PoseBoneConstraints_new_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_new_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_new_type}},
	"new", 2052, "Add a constraint to this object",
	PoseBoneConstraints_new_call,
	(PropertyRNA *)&rna_PoseBoneConstraints_new_constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_remove_constraint = {
	{NULL, NULL,
	-1, "constraint", 262144, 0, 5, 0, 0, "",
	"Removed constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_PoseBoneConstraints_remove_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_move_func, (FunctionRNA *)&rna_PoseBoneConstraints_new_func,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_remove_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_remove_constraint}},
	"remove", 2068, "Remove a constraint from this object",
	PoseBoneConstraints_remove_call,
	NULL
};

IntPropertyRNA rna_PoseBoneConstraints_move_from_index = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_move_to_index, NULL,
	-1, "from_index", 3, 0, 1, 0, 0, "From Index",
	"Index to move",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, INT_MIN, INT_MAX, 1, -1, NULL
};

IntPropertyRNA rna_PoseBoneConstraints_move_to_index = {
	{NULL, (PropertyRNA *)&rna_PoseBoneConstraints_move_from_index,
	-1, "to_index", 3, 0, 1, 0, 0, "To Index",
	"Target index",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, INT_MIN, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_PoseBoneConstraints_move_func = {
	{(FunctionRNA *)&rna_PoseBoneConstraints_copy_func, (FunctionRNA *)&rna_PoseBoneConstraints_remove_func,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_move_from_index, (PropertyRNA *)&rna_PoseBoneConstraints_move_to_index}},
	"move", 2068, "Move a constraint to a different position",
	PoseBoneConstraints_move_call,
	NULL
};

PointerPropertyRNA rna_PoseBoneConstraints_copy_constraint = {
	{(PropertyRNA *)&rna_PoseBoneConstraints_copy_new_constraint, NULL,
	-1, "constraint", 262144, 0, 5, 0, 0, "",
	"Constraint to copy - may belong to a different object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

PointerPropertyRNA rna_PoseBoneConstraints_copy_new_constraint = {
	{NULL, (PropertyRNA *)&rna_PoseBoneConstraints_copy_constraint,
	-1, "new_constraint", 8388608, 0, 2, 0, 0, "",
	"New constraint",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_PoseBoneConstraints_copy_func = {
	{NULL, (FunctionRNA *)&rna_PoseBoneConstraints_move_func,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_copy_constraint, (PropertyRNA *)&rna_PoseBoneConstraints_copy_new_constraint}},
	"copy", 2052, "Add a new constraint that is a copy of the given one",
	PoseBoneConstraints_copy_call,
	(PropertyRNA *)&rna_PoseBoneConstraints_copy_new_constraint
};

StructRNA RNA_PoseBoneConstraints = {
	{(ContainerRNA *)&RNA_IKParam, (ContainerRNA *)&RNA_PoseBone,
	NULL,
	{(PropertyRNA *)&rna_PoseBoneConstraints_rna_properties, (PropertyRNA *)&rna_PoseBoneConstraints_active}},
	"PoseBoneConstraints", NULL, NULL, 516, NULL, "PoseBone Constraints",
	"Collection of pose bone constraints",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PoseBoneConstraints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PoseBoneConstraints_new_func, (FunctionRNA *)&rna_PoseBoneConstraints_copy_func}
};

/* IKParam */
CollectionPropertyRNA rna_IKParam_rna_properties = {
	{(PropertyRNA *)&rna_IKParam_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IKParam_rna_properties_begin, IKParam_rna_properties_next, IKParam_rna_properties_end, IKParam_rna_properties_get, NULL, NULL, IKParam_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_IKParam_rna_type = {
	{(PropertyRNA *)&rna_IKParam_ik_solver, (PropertyRNA *)&rna_IKParam_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	IKParam_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static const EnumPropertyItem rna_IKParam_ik_solver_items[3] = {
	{0, "LEGACY", 0, "Standard", "Original IK solver"},
	{1, "ITASC", 0, "iTaSC", "Multi constraint, stateful IK solver"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_IKParam_ik_solver = {
	{NULL, (PropertyRNA *)&rna_IKParam_rna_type,
	-1, "ik_solver", 2, 0, 0, 4, 0, "IK Solver",
	"IK solver for which these parameters are defined",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bIKParam, iksolver), 0, NULL},
	IKParam_ik_solver_get, NULL, NULL, NULL, NULL, rna_IKParam_ik_solver_items, 2, 0
};

StructRNA RNA_IKParam = {
	{(ContainerRNA *)&RNA_Itasc, (ContainerRNA *)&RNA_PoseBoneConstraints,
	NULL,
	{(PropertyRNA *)&rna_IKParam_rna_properties, (PropertyRNA *)&rna_IKParam_ik_solver}},
	"IKParam", NULL, NULL, 516, NULL, "IKParam",
	"Base type for IK solver parameters",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IKParam_rna_properties,
	NULL,
	NULL,
	rna_IKParam_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* bItasc */
FloatPropertyRNA rna_Itasc_precision = {
	{(PropertyRNA *)&rna_Itasc_iterations, NULL,
	-1, "precision", 3, 0, 0, 4, 0, "Precision",
	"Precision of convergence in case of reiteration",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, precision), 5, NULL},
	Itasc_precision_get, Itasc_precision_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Itasc_iterations = {
	{(PropertyRNA *)&rna_Itasc_step_count, (PropertyRNA *)&rna_Itasc_precision,
	-1, "iterations", 3, 0, 0, 4, 0, "Iterations",
	"Maximum number of iterations for convergence in case of reiteration",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, numiter), 1, NULL},
	Itasc_iterations_get, Itasc_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_Itasc_step_count = {
	{(PropertyRNA *)&rna_Itasc_mode, (PropertyRNA *)&rna_Itasc_iterations,
	-1, "step_count", 3, 0, 0, 4, 0, "Num Steps",
	"Divide the frame interval into this many steps",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, numstep), 1, NULL},
	Itasc_step_count_get, Itasc_step_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 50, 1, 50, 1, 0, NULL
};

static const EnumPropertyItem rna_Itasc_mode_items[3] = {
	{0, "ANIMATION", 0, "Animation", "Stateless solver computing pose starting from current action and non-IK constraints"},
	{8, "SIMULATION", 0, "Simulation", "State-full solver running in real-time context and ignoring actions and non-IK constraints"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Itasc_mode = {
	{(PropertyRNA *)&rna_Itasc_reiteration_method, (PropertyRNA *)&rna_Itasc_step_count,
	-1, "mode", 3, 0, 0, 4, 0, "Mode",
	NULL,
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update_rebuild, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, flag), 1, NULL},
	Itasc_mode_get, Itasc_mode_set, NULL, NULL, NULL, rna_Itasc_mode_items, 2, 0
};

static const EnumPropertyItem rna_Itasc_reiteration_method_items[4] = {
	{0, "NEVER", 0, "Never", "The solver does not reiterate, not even on first frame (starts from rest pose)"},
	{2, "INITIAL", 0, "Initial", "The solver reiterates (converges) on the first frame but not on subsequent frame"},
	{6, "ALWAYS", 0, "Always", "The solver reiterates (converges) on all frames"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Itasc_reiteration_method = {
	{(PropertyRNA *)&rna_Itasc_use_auto_step, (PropertyRNA *)&rna_Itasc_mode,
	-1, "reiteration_method", 3, 0, 0, 4, 0, "Reiteration",
	"Defines if the solver is allowed to reiterate (converge until precision is met) on none, first or all frames",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, flag), 1, NULL},
	Itasc_reiteration_method_get, Itasc_reiteration_method_set, NULL, NULL, NULL, rna_Itasc_reiteration_method_items, 3, 0
};

BoolPropertyRNA rna_Itasc_use_auto_step = {
	{(PropertyRNA *)&rna_Itasc_step_min, (PropertyRNA *)&rna_Itasc_reiteration_method,
	-1, "use_auto_step", 3, 0, 0, 0, 0, "Auto Step",
	"Automatically determine the optimal number of steps for best performance/accuracy trade off",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Itasc_use_auto_step_get, Itasc_use_auto_step_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Itasc_step_min = {
	{(PropertyRNA *)&rna_Itasc_step_max, (PropertyRNA *)&rna_Itasc_use_auto_step,
	-1, "step_min", 3, 0, 0, 4, 0, "Min Step",
	"Lower bound for timestep in second in case of automatic substeps",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, minstep), 5, NULL},
	Itasc_step_min_get, Itasc_step_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.1000000015f, 0.0f, 0.1000000015f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_step_max = {
	{(PropertyRNA *)&rna_Itasc_feedback, (PropertyRNA *)&rna_Itasc_step_min,
	-1, "step_max", 3, 0, 0, 4, 0, "Max Step",
	"Higher bound for timestep in second in case of automatic substeps",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, maxstep), 5, NULL},
	Itasc_step_max_get, Itasc_step_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_feedback = {
	{(PropertyRNA *)&rna_Itasc_velocity_max, (PropertyRNA *)&rna_Itasc_step_max,
	-1, "feedback", 3, 0, 0, 4, 0, "Feedback",
	"Feedback coefficient for error correction, average response time is 1/feedback",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, feedback), 5, NULL},
	Itasc_feedback_get, Itasc_feedback_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_velocity_max = {
	{(PropertyRNA *)&rna_Itasc_solver, (PropertyRNA *)&rna_Itasc_feedback,
	-1, "velocity_max", 3, 0, 0, 4, 0, "Max Velocity",
	"Maximum joint velocity in radians/second",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, maxvel), 5, NULL},
	Itasc_velocity_max_get, Itasc_velocity_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_Itasc_solver_items[3] = {
	{0, "SDLS", 0, "SDLS", "Selective Damped Least Square"},
	{1, "DLS", 0, "DLS", "Damped Least Square with Numerical Filtering"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Itasc_solver = {
	{(PropertyRNA *)&rna_Itasc_damping_max, (PropertyRNA *)&rna_Itasc_velocity_max,
	-1, "solver", 3, 0, 0, 4, 0, "Solver",
	"Solving method selection: automatic damping or manual damping",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update_rebuild, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, solver), 1, NULL},
	Itasc_solver_get, Itasc_solver_set, NULL, NULL, NULL, rna_Itasc_solver_items, 2, 0
};

FloatPropertyRNA rna_Itasc_damping_max = {
	{(PropertyRNA *)&rna_Itasc_damping_epsilon, (PropertyRNA *)&rna_Itasc_solver,
	-1, "damping_max", 3, 0, 0, 4, 0, "Damp",
	"Maximum damping coefficient when singular value is nearly 0 (higher values produce results with more stability, less reactivity)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, dampmax), 5, NULL},
	Itasc_damping_max_get, Itasc_damping_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Itasc_damping_epsilon = {
	{NULL, (PropertyRNA *)&rna_Itasc_damping_max,
	-1, "damping_epsilon", 3, 0, 0, 4, 0, "Epsilon",
	"Singular value under which damping is progressively applied (higher values produce results with more stability, less reactivity)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Itasc_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bItasc, dampeps), 5, NULL},
	Itasc_damping_epsilon_get, Itasc_damping_epsilon_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Itasc = {
	{(ContainerRNA *)&RNA_BoneGroup, (ContainerRNA *)&RNA_IKParam,
	NULL,
	{(PropertyRNA *)&rna_Itasc_precision, (PropertyRNA *)&rna_Itasc_damping_epsilon}},
	"Itasc", NULL, NULL, 516, NULL, "bItasc",
	"Parameters for the iTaSC IK solver",
	"*", 17,
	NULL, (PropertyRNA *)&rna_IKParam_rna_properties,
	&RNA_IKParam,
	NULL,
	rna_IKParam_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Bone Group */
CollectionPropertyRNA rna_BoneGroup_rna_properties = {
	{(PropertyRNA *)&rna_BoneGroup_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroup_rna_properties_begin, BoneGroup_rna_properties_next, BoneGroup_rna_properties_end, BoneGroup_rna_properties_get, NULL, NULL, BoneGroup_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoneGroup_rna_type = {
	{(PropertyRNA *)&rna_BoneGroup_name, (PropertyRNA *)&rna_BoneGroup_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoneGroup_name = {
	{(PropertyRNA *)&rna_BoneGroup_color_set, (PropertyRNA *)&rna_BoneGroup_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroup_name_get, BoneGroup_name_length, BoneGroup_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_BoneGroup_color_set = {
	{(PropertyRNA *)&rna_BoneGroup_is_custom_color_set, (PropertyRNA *)&rna_BoneGroup_name,
	-1, "color_set", 3, 0, 0, 0, 0, "Color Set",
	"Custom color set to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroup_color_set_get, BoneGroup_color_set_set, NULL, NULL, NULL, rna_enum_color_sets_items, 22, 0
};

BoolPropertyRNA rna_BoneGroup_is_custom_color_set = {
	{(PropertyRNA *)&rna_BoneGroup_colors, (PropertyRNA *)&rna_BoneGroup_color_set,
	-1, "is_custom_color_set", 2, 0, 0, 0, 0, "Custom Color Set",
	"Color set is user-defined instead of a fixed theme color set",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroup_is_custom_color_set_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BoneGroup_colors = {
	{NULL, (PropertyRNA *)&rna_BoneGroup_is_custom_color_set,
	-1, "colors", 8650752, 0, 0, 0, 0, "Colors",
	"Copy of the colors associated with the group\'s color set",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Pose_update, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoneGroup_colors_get, NULL, NULL, NULL,&RNA_ThemeBoneColorSet
};

StructRNA RNA_BoneGroup = {
	{(ContainerRNA *)&RNA_CurveProfilePoint, (ContainerRNA *)&RNA_Itasc,
	NULL,
	{(PropertyRNA *)&rna_BoneGroup_rna_properties, (PropertyRNA *)&rna_BoneGroup_colors}},
	"BoneGroup", NULL, NULL, 516, NULL, "Bone Group",
	"Groups of Pose Channels (Bones)",
	"*", 200,
	(PropertyRNA *)&rna_BoneGroup_name, (PropertyRNA *)&rna_BoneGroup_rna_properties,
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

