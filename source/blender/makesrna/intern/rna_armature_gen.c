
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

#include "rna_armature.c"
#include "rna_armature_api.c"

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

PointerPropertyRNA rna_Armature_animation_data;
CollectionPropertyRNA rna_Armature_bones;
CollectionPropertyRNA rna_Armature_edit_bones;
EnumPropertyRNA rna_Armature_pose_position;
EnumPropertyRNA rna_Armature_display_type;
BoolPropertyRNA rna_Armature_layers;
BoolPropertyRNA rna_Armature_layers_protected;
BoolPropertyRNA rna_Armature_show_axes;
FloatPropertyRNA rna_Armature_axes_position;
BoolPropertyRNA rna_Armature_show_names;
BoolPropertyRNA rna_Armature_use_mirror_x;
BoolPropertyRNA rna_Armature_show_bone_custom_shapes;
BoolPropertyRNA rna_Armature_show_group_colors;
BoolPropertyRNA rna_Armature_is_editmode;

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


extern FunctionRNA rna_Armature_transform_func;
extern FloatPropertyRNA rna_Armature_transform_matrix;



CollectionPropertyRNA rna_ArmatureBones_rna_properties;
PointerPropertyRNA rna_ArmatureBones_rna_type;
PointerPropertyRNA rna_ArmatureBones_active;


CollectionPropertyRNA rna_ArmatureEditBones_rna_properties;
PointerPropertyRNA rna_ArmatureEditBones_rna_type;
PointerPropertyRNA rna_ArmatureEditBones_active;

extern FunctionRNA rna_ArmatureEditBones_new_func;
extern StringPropertyRNA rna_ArmatureEditBones_new_name;
extern PointerPropertyRNA rna_ArmatureEditBones_new_bone;

extern FunctionRNA rna_ArmatureEditBones_remove_func;
extern PointerPropertyRNA rna_ArmatureEditBones_remove_bone;



CollectionPropertyRNA rna_Bone_rna_properties;
PointerPropertyRNA rna_Bone_rna_type;
PointerPropertyRNA rna_Bone_parent;
CollectionPropertyRNA rna_Bone_children;
StringPropertyRNA rna_Bone_name;
BoolPropertyRNA rna_Bone_layers;
BoolPropertyRNA rna_Bone_use_connect;
BoolPropertyRNA rna_Bone_use_inherit_rotation;
BoolPropertyRNA rna_Bone_use_envelope_multiply;
BoolPropertyRNA rna_Bone_use_deform;
EnumPropertyRNA rna_Bone_inherit_scale;
BoolPropertyRNA rna_Bone_use_inherit_scale;
BoolPropertyRNA rna_Bone_use_local_location;
BoolPropertyRNA rna_Bone_use_relative_parent;
BoolPropertyRNA rna_Bone_show_wire;
BoolPropertyRNA rna_Bone_use_cyclic_offset;
BoolPropertyRNA rna_Bone_hide_select;
FloatPropertyRNA rna_Bone_envelope_distance;
FloatPropertyRNA rna_Bone_envelope_weight;
FloatPropertyRNA rna_Bone_head_radius;
FloatPropertyRNA rna_Bone_tail_radius;
IntPropertyRNA rna_Bone_bbone_segments;
FloatPropertyRNA rna_Bone_bbone_x;
FloatPropertyRNA rna_Bone_bbone_z;
EnumPropertyRNA rna_Bone_bbone_handle_type_start;
PointerPropertyRNA rna_Bone_bbone_custom_handle_start;
BoolPropertyRNA rna_Bone_bbone_handle_use_scale_start;
BoolPropertyRNA rna_Bone_bbone_handle_use_ease_start;
EnumPropertyRNA rna_Bone_bbone_handle_type_end;
PointerPropertyRNA rna_Bone_bbone_custom_handle_end;
BoolPropertyRNA rna_Bone_bbone_handle_use_scale_end;
BoolPropertyRNA rna_Bone_bbone_handle_use_ease_end;
FloatPropertyRNA rna_Bone_bbone_rollin;
FloatPropertyRNA rna_Bone_bbone_rollout;
BoolPropertyRNA rna_Bone_use_endroll_as_inroll;
FloatPropertyRNA rna_Bone_bbone_curveinx;
FloatPropertyRNA rna_Bone_bbone_curveinz;
FloatPropertyRNA rna_Bone_bbone_curveoutx;
FloatPropertyRNA rna_Bone_bbone_curveoutz;
FloatPropertyRNA rna_Bone_bbone_easein;
FloatPropertyRNA rna_Bone_bbone_easeout;
BoolPropertyRNA rna_Bone_use_scale_easing;
FloatPropertyRNA rna_Bone_bbone_scalein;
FloatPropertyRNA rna_Bone_bbone_scaleout;
BoolPropertyRNA rna_Bone_hide;
BoolPropertyRNA rna_Bone_select;
BoolPropertyRNA rna_Bone_select_head;
BoolPropertyRNA rna_Bone_select_tail;
FloatPropertyRNA rna_Bone_matrix;
FloatPropertyRNA rna_Bone_matrix_local;
FloatPropertyRNA rna_Bone_tail;
FloatPropertyRNA rna_Bone_tail_local;
FloatPropertyRNA rna_Bone_head;
FloatPropertyRNA rna_Bone_head_local;
FloatPropertyRNA rna_Bone_length;

extern FunctionRNA rna_Bone_evaluate_envelope_func;
extern FloatPropertyRNA rna_Bone_evaluate_envelope_point;
extern FloatPropertyRNA rna_Bone_evaluate_envelope_factor;

extern FunctionRNA rna_Bone_convert_local_to_pose_func;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_return;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_local;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix;
extern FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix_local;
extern BoolPropertyRNA rna_Bone_convert_local_to_pose_invert;

extern FunctionRNA rna_Bone_MatrixFromAxisRoll_func;
extern FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_axis;
extern FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_roll;
extern FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_result_matrix;

extern FunctionRNA rna_Bone_AxisRollFromMatrix_func;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_matrix;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_axis;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_axis;
extern FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_roll;



CollectionPropertyRNA rna_EditBone_rna_properties;
PointerPropertyRNA rna_EditBone_rna_type;
PointerPropertyRNA rna_EditBone_parent;
FloatPropertyRNA rna_EditBone_roll;
FloatPropertyRNA rna_EditBone_head;
FloatPropertyRNA rna_EditBone_tail;
FloatPropertyRNA rna_EditBone_length;
StringPropertyRNA rna_EditBone_name;
BoolPropertyRNA rna_EditBone_layers;
BoolPropertyRNA rna_EditBone_use_connect;
BoolPropertyRNA rna_EditBone_use_inherit_rotation;
BoolPropertyRNA rna_EditBone_use_envelope_multiply;
BoolPropertyRNA rna_EditBone_use_deform;
EnumPropertyRNA rna_EditBone_inherit_scale;
BoolPropertyRNA rna_EditBone_use_inherit_scale;
BoolPropertyRNA rna_EditBone_use_local_location;
BoolPropertyRNA rna_EditBone_use_relative_parent;
BoolPropertyRNA rna_EditBone_show_wire;
BoolPropertyRNA rna_EditBone_use_cyclic_offset;
BoolPropertyRNA rna_EditBone_hide_select;
FloatPropertyRNA rna_EditBone_envelope_distance;
FloatPropertyRNA rna_EditBone_envelope_weight;
FloatPropertyRNA rna_EditBone_head_radius;
FloatPropertyRNA rna_EditBone_tail_radius;
IntPropertyRNA rna_EditBone_bbone_segments;
FloatPropertyRNA rna_EditBone_bbone_x;
FloatPropertyRNA rna_EditBone_bbone_z;
EnumPropertyRNA rna_EditBone_bbone_handle_type_start;
PointerPropertyRNA rna_EditBone_bbone_custom_handle_start;
BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_start;
BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_start;
EnumPropertyRNA rna_EditBone_bbone_handle_type_end;
PointerPropertyRNA rna_EditBone_bbone_custom_handle_end;
BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_end;
BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_end;
FloatPropertyRNA rna_EditBone_bbone_rollin;
FloatPropertyRNA rna_EditBone_bbone_rollout;
BoolPropertyRNA rna_EditBone_use_endroll_as_inroll;
FloatPropertyRNA rna_EditBone_bbone_curveinx;
FloatPropertyRNA rna_EditBone_bbone_curveinz;
FloatPropertyRNA rna_EditBone_bbone_curveoutx;
FloatPropertyRNA rna_EditBone_bbone_curveoutz;
FloatPropertyRNA rna_EditBone_bbone_easein;
FloatPropertyRNA rna_EditBone_bbone_easeout;
BoolPropertyRNA rna_EditBone_use_scale_easing;
FloatPropertyRNA rna_EditBone_bbone_scalein;
FloatPropertyRNA rna_EditBone_bbone_scaleout;
BoolPropertyRNA rna_EditBone_hide;
BoolPropertyRNA rna_EditBone_lock;
BoolPropertyRNA rna_EditBone_select;
BoolPropertyRNA rna_EditBone_select_head;
BoolPropertyRNA rna_EditBone_select_tail;
FloatPropertyRNA rna_EditBone_matrix;

extern FunctionRNA rna_EditBone_align_roll_func;
extern FloatPropertyRNA rna_EditBone_align_roll_vector;


PointerRNA Armature_animation_data_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Armature_bones_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Bone, rna_iterator_listbase_get(iter));
}

void Armature_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Armature_bones;

    rna_iterator_listbase_begin(iter, &data->bonebase, NULL);

    if (iter->valid) {
        iter->ptr = Armature_bones_get(iter);
    }
}

void Armature_bones_next(CollectionPropertyIterator *iter)
{
    rna_Armature_bones_next(iter);

    if (iter->valid) {
        iter->ptr = Armature_bones_get(iter);
    }
}

void Armature_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Armature_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_Armature_bones_lookup_string(ptr, key, r_ptr);
}

static PointerRNA Armature_edit_bones_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_EditBone, rna_iterator_listbase_get(iter));
}

void Armature_edit_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Armature_edit_bones;

    rna_iterator_listbase_begin(iter, data->edbo, NULL);

    if (iter->valid) {
        iter->ptr = Armature_edit_bones_get(iter);
    }
}

void Armature_edit_bones_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Armature_edit_bones_get(iter);
    }
}

void Armature_edit_bones_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Armature_edit_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Armature_edit_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = Armature_edit_bones_get(&iter); }
    }

    Armature_edit_bones_end(&iter);

    return found;
}

int Armature_edit_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int EditBone_name_length(PointerRNA *);
    extern void EditBone_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Armature_edit_bones_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = EditBone_name_length(&iter.ptr);
            if (namelen < 1024) {
                EditBone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                EditBone_name_get(&iter.ptr, name);
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
        Armature_edit_bones_next(&iter);
    }
    Armature_edit_bones_end(&iter);

    return found;
}

int Armature_pose_position_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((data->flag) & 1);
}

void Armature_pose_position_set(PointerRNA *ptr, int value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->flag &= ~1;
    data->flag |= value;
}

int Armature_display_type_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (int)(data->drawtype);
}

void Armature_display_type_set(PointerRNA *ptr, int value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->drawtype = value;
}

void Armature_layers_get(PointerRNA *ptr, bool values[32])
{
    bArmature *data = (bArmature *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 32; i++) {
        values[i] = ((data->layer & (1 << i)) != 0);
    }
}

void Armature_layers_set(PointerRNA *ptr, const bool values[32])
{
    rna_Armature_layer_set(ptr, values);
}

void Armature_layers_protected_get(PointerRNA *ptr, bool values[32])
{
    bArmature *data = (bArmature *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 32; i++) {
        values[i] = ((data->layer_protected & (1 << i)) != 0);
    }
}

void Armature_layers_protected_set(PointerRNA *ptr, const bool values[32])
{
    bArmature *data = (bArmature *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 32; i++) {
        if (values[i]) { data->layer_protected |= (1 << i); }
        else { data->layer_protected &= ~(1 << i); }
    }
}

bool Armature_show_axes_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void Armature_show_axes_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

float Armature_axes_position_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (float)(data->axes_position);
}

void Armature_axes_position_set(PointerRNA *ptr, float value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->axes_position = CLAMPIS(value, 0.0f, 1.0f);
}

bool Armature_show_names_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void Armature_show_names_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

bool Armature_use_mirror_x_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void Armature_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

bool Armature_show_bone_custom_shapes_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return !(((data->flag) & 1024) != 0);
}

void Armature_show_bone_custom_shapes_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (!value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool Armature_show_group_colors_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void Armature_show_group_colors_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool Armature_is_editmode_get(PointerRNA *ptr)
{
    return rna_Armature_is_editmode_get(ptr);
}

static PointerRNA ArmatureBones_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ArmatureBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ArmatureBones_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureBones_rna_properties_get(iter);
    }
}

void ArmatureBones_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ArmatureBones_rna_properties_get(iter);
    }
}

void ArmatureBones_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ArmatureBones_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ArmatureBones_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA ArmatureBones_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->act_bone);
}

void ArmatureBones_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Armature_act_bone_set(ptr, value, reports);
}

static PointerRNA ArmatureEditBones_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void ArmatureEditBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_ArmatureEditBones_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureEditBones_rna_properties_get(iter);
    }
}

void ArmatureEditBones_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = ArmatureEditBones_rna_properties_get(iter);
    }
}

void ArmatureEditBones_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int ArmatureEditBones_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ArmatureEditBones_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA ArmatureEditBones_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_EditBone, data->act_edbone);
}

void ArmatureEditBones_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Armature_act_edit_bone_set(ptr, value, reports);
}

static PointerRNA Bone_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Bone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Bone_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Bone_rna_properties_get(iter);
    }
}

void Bone_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Bone_rna_properties_get(iter);
    }
}

void Bone_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Bone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Bone_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA Bone_parent_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->parent);
}

static PointerRNA Bone_children_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Bone, rna_iterator_listbase_get(iter));
}

void Bone_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Bone_children;

    rna_iterator_listbase_begin(iter, &data->childbase, NULL);

    if (iter->valid) {
        iter->ptr = Bone_children_get(iter);
    }
}

void Bone_children_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = Bone_children_get(iter);
    }
}

void Bone_children_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Bone_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Bone_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Bone_children_get(&iter); }
    }

    Bone_children_end(&iter);

    return found;
}

int Bone_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int Bone_name_length(PointerRNA *);
    extern void Bone_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Bone_children_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Bone_name_length(&iter.ptr);
            if (namelen < 1024) {
                Bone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                Bone_name_get(&iter.ptr, name);
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
        Bone_children_next(&iter);
    }
    Bone_children_end(&iter);

    return found;
}

void Bone_name_get(PointerRNA *ptr, char *value)
{
    Bone *data = (Bone *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int Bone_name_length(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return strlen(data->name);
}

void Bone_name_set(PointerRNA *ptr, const char *value)
{
    rna_Bone_name_set(ptr, value);
}

void Bone_layers_get(PointerRNA *ptr, bool values[32])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 32; i++) {
        values[i] = ((data->layer & (1 << i)) != 0);
    }
}

void Bone_layers_set(PointerRNA *ptr, const bool values[32])
{
    rna_Bone_layer_set(ptr, values);
}

bool Bone_use_connect_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

bool Bone_use_inherit_rotation_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 512) != 0);
}

void Bone_use_inherit_rotation_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool Bone_use_envelope_multiply_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void Bone_use_envelope_multiply_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool Bone_use_deform_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 4096) != 0);
}

void Bone_use_deform_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

int Bone_inherit_scale_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->inherit_scale_mode);
}

void Bone_inherit_scale_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->inherit_scale_mode = value;
}

bool Bone_use_inherit_scale_get(PointerRNA *ptr)
{
    return rna_Bone_use_inherit_scale_get(ptr);
}

void Bone_use_inherit_scale_set(PointerRNA *ptr, bool value)
{
    rna_Bone_use_inherit_scale_set(ptr, value);
}

bool Bone_use_local_location_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 4194304) != 0);
}

void Bone_use_local_location_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

bool Bone_use_relative_parent_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 8388608) != 0);
}

void Bone_use_relative_parent_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 8388608; }
    else { data->flag &= ~8388608; }
}

bool Bone_show_wire_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

void Bone_show_wire_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

bool Bone_use_cyclic_offset_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !(((data->flag) & 262144) != 0);
}

void Bone_use_cyclic_offset_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

bool Bone_hide_select_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 2097152) != 0);
}

void Bone_hide_select_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 2097152; }
    else { data->flag &= ~2097152; }
}

float Bone_envelope_distance_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->dist);
}

void Bone_envelope_distance_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->dist = CLAMPIS(value, 0.0f, 1000.0f);
}

float Bone_envelope_weight_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->weight);
}

void Bone_envelope_weight_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0f, 1000.0f);
}

float Bone_head_radius_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->rad_head);
}

void Bone_head_radius_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->rad_head = value;
}

float Bone_tail_radius_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->rad_tail);
}

void Bone_tail_radius_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->rad_tail = value;
}

int Bone_bbone_segments_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->segments);
}

void Bone_bbone_segments_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->segments = CLAMPIS(value, 1, 32);
}

float Bone_bbone_x_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->xwidth);
}

void Bone_bbone_x_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->xwidth = value;
}

float Bone_bbone_z_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->zwidth);
}

void Bone_bbone_z_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->zwidth = value;
}

int Bone_bbone_handle_type_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_prev_type);
}

void Bone_bbone_handle_type_start_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->bbone_prev_type = value;
}

PointerRNA Bone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->bbone_prev);
}

void Bone_bbone_custom_handle_start_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Bone_bbone_prev_set(ptr, value, reports);
}

void Bone_bbone_handle_use_scale_start_get(PointerRNA *ptr, bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_prev_flag & (1 << i)) != 0);
    }
}

void Bone_bbone_handle_use_scale_start_set(PointerRNA *ptr, const bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_prev_flag |= (1 << i); }
        else { data->bbone_prev_flag &= ~(1 << i); }
    }
}

bool Bone_bbone_handle_use_ease_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_prev_flag) & 8) != 0);
}

void Bone_bbone_handle_use_ease_start_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_prev_flag |= 8; }
    else { data->bbone_prev_flag &= ~8; }
}

int Bone_bbone_handle_type_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_next_type);
}

void Bone_bbone_handle_type_end_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->bbone_next_type = value;
}

PointerRNA Bone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->bbone_next);
}

void Bone_bbone_custom_handle_end_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Bone_bbone_next_set(ptr, value, reports);
}

void Bone_bbone_handle_use_scale_end_get(PointerRNA *ptr, bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_next_flag & (1 << i)) != 0);
    }
}

void Bone_bbone_handle_use_scale_end_set(PointerRNA *ptr, const bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_next_flag |= (1 << i); }
        else { data->bbone_next_flag &= ~(1 << i); }
    }
}

bool Bone_bbone_handle_use_ease_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_next_flag) & 8) != 0);
}

void Bone_bbone_handle_use_ease_end_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_next_flag |= 8; }
    else { data->bbone_next_flag &= ~8; }
}

float Bone_bbone_rollin_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->roll1);
}

void Bone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->roll1 = value;
}

float Bone_bbone_rollout_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->roll2);
}

void Bone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->roll2 = value;
}

bool Bone_use_endroll_as_inroll_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_flag) & 1) != 0);
}

void Bone_use_endroll_as_inroll_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_flag |= 1; }
    else { data->bbone_flag &= ~1; }
}

float Bone_bbone_curveinx_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_in_x);
}

void Bone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_in_x = value;
}

float Bone_bbone_curveinz_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_in_z);
}

void Bone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_in_z = value;
}

float Bone_bbone_curveoutx_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_out_x);
}

void Bone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_out_x = value;
}

float Bone_bbone_curveoutz_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_out_z);
}

void Bone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_out_z = value;
}

float Bone_bbone_easein_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->ease1);
}

void Bone_bbone_easein_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->ease1 = value;
}

float Bone_bbone_easeout_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->ease2);
}

void Bone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->ease2 = value;
}

bool Bone_use_scale_easing_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->bbone_flag) & 2) != 0);
}

void Bone_use_scale_easing_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_flag |= 2; }
    else { data->bbone_flag &= ~2; }
}

void Bone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_in)[i]);
    }
}

void Bone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_in)[i] = values[i];
    }
}

void Bone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_out)[i]);
    }
}

void Bone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->scale_out)[i] = values[i];
    }
}

bool Bone_hide_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

void Bone_hide_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 64; }
    else { data->flag &= ~64; }
}

bool Bone_select_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void Bone_select_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool Bone_select_head_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void Bone_select_head_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool Bone_select_tail_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void Bone_select_tail_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

void Bone_matrix_get(PointerRNA *ptr, float values[9])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->bone_mat)[i]);
    }
}

void Bone_matrix_local_get(PointerRNA *ptr, float values[16])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->arm_mat)[i]);
    }
}

void Bone_tail_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tail)[i]);
    }
}

void Bone_tail_local_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->arm_tail)[i]);
    }
}

void Bone_head_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->head)[i]);
    }
}

void Bone_head_local_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->arm_head)[i]);
    }
}

float Bone_length_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->length);
}

static PointerRNA EditBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void EditBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_EditBone_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = EditBone_rna_properties_get(iter);
    }
}

void EditBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = EditBone_rna_properties_get(iter);
    }
}

void EditBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int EditBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA EditBone_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA EditBone_parent_get(PointerRNA *ptr)
{
    return rna_EditBone_parent_get(ptr);
}

void EditBone_parent_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_EditBone_parent_set(ptr, value, reports);
}

float EditBone_roll_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll);
}

void EditBone_roll_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->roll = value;
}

void EditBone_head_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->head)[i]);
    }
}

void EditBone_head_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->head)[i] = values[i];
    }
}

void EditBone_tail_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->tail)[i]);
    }
}

void EditBone_tail_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->tail)[i] = values[i];
    }
}

float EditBone_length_get(PointerRNA *ptr)
{
    return rna_EditBone_length_get(ptr);
}

void EditBone_length_set(PointerRNA *ptr, float value)
{
    rna_EditBone_length_set(ptr, value);
}

void EditBone_name_get(PointerRNA *ptr, char *value)
{
    EditBone *data = (EditBone *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, sizeof(data->name));
}

int EditBone_name_length(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return strlen(data->name);
}

void EditBone_name_set(PointerRNA *ptr, const char *value)
{
    rna_EditBone_name_set(ptr, value);
}

void EditBone_layers_get(PointerRNA *ptr, bool values[32])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 32; i++) {
        values[i] = ((data->layer & (1 << i)) != 0);
    }
}

void EditBone_layers_set(PointerRNA *ptr, const bool values[32])
{
    rna_EditBone_layer_set(ptr, values);
}

bool EditBone_use_connect_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void EditBone_use_connect_set(PointerRNA *ptr, bool value)
{
    rna_EditBone_connected_set(ptr, value);
}

bool EditBone_use_inherit_rotation_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 512) != 0);
}

void EditBone_use_inherit_rotation_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool EditBone_use_envelope_multiply_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 2048) != 0);
}

void EditBone_use_envelope_multiply_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 2048; }
    else { data->flag &= ~2048; }
}

bool EditBone_use_deform_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 4096) != 0);
}

void EditBone_use_deform_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

int EditBone_inherit_scale_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->inherit_scale_mode);
}

void EditBone_inherit_scale_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->inherit_scale_mode = value;
}

bool EditBone_use_inherit_scale_get(PointerRNA *ptr)
{
    return rna_EditBone_use_inherit_scale_get(ptr);
}

void EditBone_use_inherit_scale_set(PointerRNA *ptr, bool value)
{
    rna_EditBone_use_inherit_scale_set(ptr, value);
}

bool EditBone_use_local_location_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 4194304) != 0);
}

void EditBone_use_local_location_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 4194304; }
    else { data->flag &= ~4194304; }
}

bool EditBone_use_relative_parent_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 8388608) != 0);
}

void EditBone_use_relative_parent_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 8388608; }
    else { data->flag &= ~8388608; }
}

bool EditBone_show_wire_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 131072) != 0);
}

void EditBone_show_wire_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 131072; }
    else { data->flag &= ~131072; }
}

bool EditBone_use_cyclic_offset_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !(((data->flag) & 262144) != 0);
}

void EditBone_use_cyclic_offset_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag |= 262144; }
    else { data->flag &= ~262144; }
}

bool EditBone_hide_select_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 2097152) != 0);
}

void EditBone_hide_select_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 2097152; }
    else { data->flag &= ~2097152; }
}

float EditBone_envelope_distance_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->dist);
}

void EditBone_envelope_distance_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->dist = CLAMPIS(value, 0.0f, 1000.0f);
}

float EditBone_envelope_weight_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->weight);
}

void EditBone_envelope_weight_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0f, 1000.0f);
}

float EditBone_head_radius_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->rad_head);
}

void EditBone_head_radius_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->rad_head = value;
}

float EditBone_tail_radius_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->rad_tail);
}

void EditBone_tail_radius_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->rad_tail = value;
}

int EditBone_bbone_segments_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->segments);
}

void EditBone_bbone_segments_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->segments = CLAMPIS(value, 1, 32);
}

float EditBone_bbone_x_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->xwidth);
}

void EditBone_bbone_x_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->xwidth = value;
}

float EditBone_bbone_z_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->zwidth);
}

void EditBone_bbone_z_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->zwidth = value;
}

int EditBone_bbone_handle_type_start_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_prev_type);
}

void EditBone_bbone_handle_type_start_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->bbone_prev_type = value;
}

PointerRNA EditBone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    return rna_EditBone_bbone_prev_get(ptr);
}

void EditBone_bbone_custom_handle_start_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_EditBone_bbone_prev_set(ptr, value, reports);
}

void EditBone_bbone_handle_use_scale_start_get(PointerRNA *ptr, bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_prev_flag & (1 << i)) != 0);
    }
}

void EditBone_bbone_handle_use_scale_start_set(PointerRNA *ptr, const bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_prev_flag |= (1 << i); }
        else { data->bbone_prev_flag &= ~(1 << i); }
    }
}

bool EditBone_bbone_handle_use_ease_start_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_prev_flag) & 8) != 0);
}

void EditBone_bbone_handle_use_ease_start_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_prev_flag |= 8; }
    else { data->bbone_prev_flag &= ~8; }
}

int EditBone_bbone_handle_type_end_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_next_type);
}

void EditBone_bbone_handle_type_end_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->bbone_next_type = value;
}

PointerRNA EditBone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    return rna_EditBone_bbone_next_get(ptr);
}

void EditBone_bbone_custom_handle_end_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_EditBone_bbone_next_set(ptr, value, reports);
}

void EditBone_bbone_handle_use_scale_end_get(PointerRNA *ptr, bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = ((data->bbone_next_flag & (1 << i)) != 0);
    }
}

void EditBone_bbone_handle_use_scale_end_set(PointerRNA *ptr, const bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_next_flag |= (1 << i); }
        else { data->bbone_next_flag &= ~(1 << i); }
    }
}

bool EditBone_bbone_handle_use_ease_end_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_next_flag) & 8) != 0);
}

void EditBone_bbone_handle_use_ease_end_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_next_flag |= 8; }
    else { data->bbone_next_flag &= ~8; }
}

float EditBone_bbone_rollin_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll1);
}

void EditBone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->roll1 = value;
}

float EditBone_bbone_rollout_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll2);
}

void EditBone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->roll2 = value;
}

bool EditBone_use_endroll_as_inroll_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_flag) & 1) != 0);
}

void EditBone_use_endroll_as_inroll_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_flag |= 1; }
    else { data->bbone_flag &= ~1; }
}

float EditBone_bbone_curveinx_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_in_x);
}

void EditBone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_in_x = value;
}

float EditBone_bbone_curveinz_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_in_z);
}

void EditBone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_in_z = value;
}

float EditBone_bbone_curveoutx_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_out_x);
}

void EditBone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_out_x = value;
}

float EditBone_bbone_curveoutz_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_out_z);
}

void EditBone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_out_z = value;
}

float EditBone_bbone_easein_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->ease1);
}

void EditBone_bbone_easein_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->ease1 = value;
}

float EditBone_bbone_easeout_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->ease2);
}

void EditBone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->ease2 = value;
}

bool EditBone_use_scale_easing_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->bbone_flag) & 2) != 0);
}

void EditBone_use_scale_easing_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_flag |= 2; }
    else { data->bbone_flag &= ~2; }
}

void EditBone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->scale_in)[i]);
    }
}

void EditBone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->scale_in)[i] = values[i];
    }
}

void EditBone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->scale_out)[i]);
    }
}

void EditBone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        (data->scale_out)[i] = values[i];
    }
}

bool EditBone_hide_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 1024) != 0);
}

void EditBone_hide_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 1024; }
    else { data->flag &= ~1024; }
}

bool EditBone_lock_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 524288) != 0);
}

void EditBone_lock_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 524288; }
    else { data->flag &= ~524288; }
}

bool EditBone_select_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void EditBone_select_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool EditBone_select_head_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void EditBone_select_head_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool EditBone_select_tail_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void EditBone_select_tail_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

void EditBone_matrix_get(PointerRNA *ptr, float values[16])
{
    rna_EditBone_matrix_get(ptr, values);
}

void EditBone_matrix_set(PointerRNA *ptr, const float values[16])
{
    rna_EditBone_matrix_set(ptr, values);
}

void Armature_transform_func(struct bArmature *_self, float matrix[16])
{
	rna_Armature_transform(_self, matrix);
}

void Armature_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	float *matrix;
	char *_data;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	
	rna_Armature_transform(_self, matrix);
}

/* Repeated prototypes to detect errors */

void rna_Armature_transform(struct bArmature *_self, float matrix[16]);


struct EditBone *ArmatureEditBones_new_func(struct bArmature *_self, ReportList *reports, const char * name)
{
	return rna_Armature_edit_bone_new(_self, reports, name);
}

void ArmatureEditBones_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	const char * name;
	struct EditBone *bone;
	char *_data, *_retdata;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	bone = rna_Armature_edit_bone_new(_self, reports, name);
	*((struct EditBone **)_retdata) = bone;
}

void ArmatureEditBones_remove_func(struct bArmature *_self, ReportList *reports, struct PointerRNA *bone)
{
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

void ArmatureEditBones_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	struct PointerRNA *bone;
	char *_data;
	
	_self = (struct bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	bone = *((struct PointerRNA **)_data);
	
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

/* Repeated prototypes to detect errors */

struct EditBone *rna_Armature_edit_bone_new(struct bArmature *_self, ReportList *reports, const char * name);
void rna_Armature_edit_bone_remove(struct bArmature *_self, ReportList *reports, struct PointerRNA *bone);

float Bone_evaluate_envelope_func(struct Bone *_self, float point[3])
{
	return rna_Bone_do_envelope(_self, point);
}

void Bone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Bone *_self;
	float *point;
	float factor;
	char *_data, *_retdata;
	
	_self = (struct Bone *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((float *)_data);
	_data += 16;
	_retdata = _data;
	
	factor = rna_Bone_do_envelope(_self, point);
	*((float *)_retdata) = factor;
}

void Bone_convert_local_to_pose_func(struct Bone *_self, float matrix_return[16], float matrix[16], float matrix_local[16], float parent_matrix[16], float parent_matrix_local[16], bool invert)
{
	rna_Bone_convert_local_to_pose(_self, matrix_return, matrix, matrix_local, parent_matrix, parent_matrix_local, invert);
}

void Bone_convert_local_to_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Bone *_self;
	float *matrix_return;
	float *matrix;
	float *matrix_local;
	float *parent_matrix;
	float *parent_matrix_local;
	bool invert;
	char *_data;
	
	_self = (struct Bone *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_return = ((float *)_data);
	_data += 64;
	matrix = ((float *)_data);
	_data += 64;
	matrix_local = ((float *)_data);
	_data += 64;
	parent_matrix = ((float *)_data);
	_data += 64;
	parent_matrix_local = ((float *)_data);
	_data += 64;
	invert = *((bool *)_data);
	
	rna_Bone_convert_local_to_pose(_self, matrix_return, matrix, matrix_local, parent_matrix, parent_matrix_local, invert);
}

void Bone_MatrixFromAxisRoll_func(float axis[3], float roll, float result_matrix[9])
{
	rna_Bone_MatrixFromAxisRoll(axis, roll, result_matrix);
}

void Bone_MatrixFromAxisRoll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	float *axis;
	float roll;
	float *result_matrix;
	char *_data;
	
	_data = (char *)_parms->data;
	axis = ((float *)_data);
	_data += 16;
	roll = *((float *)_data);
	_data += 8;
	result_matrix = ((float *)_data);
	
	rna_Bone_MatrixFromAxisRoll(axis, roll, result_matrix);
}

void Bone_AxisRollFromMatrix_func(float matrix[9], float axis[3], float result_axis[3], float *result_roll)
{
	rna_Bone_AxisRollFromMatrix(matrix, axis, result_axis, result_roll);
}

void Bone_AxisRollFromMatrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	float *matrix;
	float *axis;
	float *result_axis;
	float *result_roll;
	char *_data;
	
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 40;
	axis = ((float *)_data);
	_data += 16;
	result_axis = ((float *)_data);
	_data += 16;
	result_roll = ((float *)_data);
	
	rna_Bone_AxisRollFromMatrix(matrix, axis, result_axis, result_roll);
}

/* Repeated prototypes to detect errors */

float rna_Bone_do_envelope(struct Bone *_self, float point[3]);
void rna_Bone_convert_local_to_pose(struct Bone *_self, float matrix_return[16], float matrix[16], float matrix_local[16], float parent_matrix[16], float parent_matrix_local[16], bool invert);
void rna_Bone_MatrixFromAxisRoll(float axis[3], float roll, float result_matrix[9]);
void rna_Bone_AxisRollFromMatrix(float matrix[9], float axis[3], float result_axis[3], float *result_roll);

void EditBone_align_roll_func(struct EditBone *_self, float vector[3])
{
	rna_EditBone_align_roll(_self, vector);
}

void EditBone_align_roll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct EditBone *_self;
	float *vector;
	char *_data;
	
	_self = (struct EditBone *)_ptr->data;
	_data = (char *)_parms->data;
	vector = ((float *)_data);
	
	rna_EditBone_align_roll(_self, vector);
}

/* Repeated prototypes to detect errors */

void rna_EditBone_align_roll(struct EditBone *_self, float vector[3]);

/* Armature */
PointerPropertyRNA rna_Armature_animation_data = {
	{(PropertyRNA *)&rna_Armature_bones, NULL,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Armature_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_Armature_bones = {
	{(PropertyRNA *)&rna_Armature_edit_bones, (PropertyRNA *)&rna_Armature_animation_data,
	-1, "bones", 0, 1, 0, 0, 0, "Bones",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ArmatureBones},
	Armature_bones_begin, Armature_bones_next, Armature_bones_end, Armature_bones_get, NULL, NULL, Armature_bones_lookup_string, NULL, &RNA_Bone
};

CollectionPropertyRNA rna_Armature_edit_bones = {
	{(PropertyRNA *)&rna_Armature_pose_position, (PropertyRNA *)&rna_Armature_bones,
	-1, "edit_bones", 0, 1, 0, 0, 0, "Edit Bones",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_ArmatureEditBones},
	Armature_edit_bones_begin, Armature_edit_bones_next, Armature_edit_bones_end, Armature_edit_bones_get, NULL, Armature_edit_bones_lookup_int, Armature_edit_bones_lookup_string, NULL, &RNA_EditBone
};

static const EnumPropertyItem rna_Armature_pose_position_items[3] = {
	{0, "POSE", 0, "Pose Position", "Show armature in posed state"},
	{1, "REST", 0, "Rest Position", "Show Armature in binding pose state (no posing possible)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Armature_pose_position = {
	{(PropertyRNA *)&rna_Armature_display_type, (PropertyRNA *)&rna_Armature_edit_bones,
	-1, "pose_position", 65539, 1, 0, 4, 0, "Pose Position",
	"Show armature in binding pose or final posed state",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bArmature, flag), 0, NULL},
	Armature_pose_position_get, Armature_pose_position_set, NULL, NULL, NULL, rna_Armature_pose_position_items, 2, 0
};

static const EnumPropertyItem rna_Armature_display_type_items[6] = {
	{0, "OCTAHEDRAL", 0, "Octahedral", "Display bones as octahedral shape (default)"},
	{1, "STICK", 0, "Stick", "Display bones as simple 2D lines with dots"},
	{2, "BBONE", 0, "B-Bone", "Display bones as boxes, showing subdivision and B-Splines"},
	{3, "ENVELOPE", 0, "Envelope", "Display bones as extruded spheres, showing deformation influence volume"},
	{4, "WIRE", 0, "Wire", "Display bones as thin wires, showing subdivision and B-Splines"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Armature_display_type = {
	{(PropertyRNA *)&rna_Armature_layers, (PropertyRNA *)&rna_Armature_pose_position,
	-1, "display_type", 65539, 1, 0, 4, 0, "Display Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bArmature, drawtype), 0, NULL},
	Armature_display_type_get, Armature_display_type_set, NULL, NULL, NULL, rna_Armature_display_type_items, 5, 0
};

static bool rna_Armature_layers_default[32] = {
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1
};

BoolPropertyRNA rna_Armature_layers = {
	{(PropertyRNA *)&rna_Armature_layers_protected, (PropertyRNA *)&rna_Armature_display_type,
	-1, "layers", 65539, 1, 0, 0, 0, "Visible Layers",
	"Armature layer visibility",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_update_layers, 101974016, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Armature_layers_get, Armature_layers_set, NULL, NULL, NULL, NULL, 1, rna_Armature_layers_default
};

static bool rna_Armature_layers_protected_default[32] = {
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

BoolPropertyRNA rna_Armature_layers_protected = {
	{(PropertyRNA *)&rna_Armature_show_axes, (PropertyRNA *)&rna_Armature_layers,
	-1, "layers_protected", 3, 1, 0, 0, 0, "Layer Proxy Protection",
	"Protected layers in Proxy Instances are restored to Proxy settings on file reload and undo",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER | PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Armature_layers_protected_get, Armature_layers_protected_set, NULL, NULL, NULL, NULL, 0, rna_Armature_layers_protected_default
};

BoolPropertyRNA rna_Armature_show_axes = {
	{(PropertyRNA *)&rna_Armature_axes_position, (PropertyRNA *)&rna_Armature_layers_protected,
	-1, "show_axes", 65539, 1, 0, 0, 0, "Display Axes",
	"Display bone axes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Armature_show_axes_get, Armature_show_axes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Armature_axes_position = {
	{(PropertyRNA *)&rna_Armature_show_names, (PropertyRNA *)&rna_Armature_show_axes,
	-1, "axes_position", 3, 1, 0, 4, 0, "Axes Position",
	"The position for the axes on the bone. Increasing the value moves it closer to the tip; decreasing moves it closer to the root",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(bArmature, axes_position), 5, NULL},
	Armature_axes_position_get, Armature_axes_position_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 1, 0.0f, NULL
};

BoolPropertyRNA rna_Armature_show_names = {
	{(PropertyRNA *)&rna_Armature_use_mirror_x, (PropertyRNA *)&rna_Armature_axes_position,
	-1, "show_names", 65539, 1, 0, 0, 0, "Display Names",
	"Display bone names",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Armature_show_names_get, Armature_show_names_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Armature_use_mirror_x = {
	{(PropertyRNA *)&rna_Armature_show_bone_custom_shapes, (PropertyRNA *)&rna_Armature_show_names,
	-1, "use_mirror_x", 65539, 1, 0, 0, 0, "X-Axis Mirror",
	"Apply changes to matching bone on opposite side of X-Axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Armature_use_mirror_x_get, Armature_use_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Armature_show_bone_custom_shapes = {
	{(PropertyRNA *)&rna_Armature_show_group_colors, (PropertyRNA *)&rna_Armature_use_mirror_x,
	-1, "show_bone_custom_shapes", 3, 1, 0, 0, 0, "Display Custom Bone Shapes",
	"Display bones with their custom shapes",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Armature_show_bone_custom_shapes_get, Armature_show_bone_custom_shapes_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Armature_show_group_colors = {
	{(PropertyRNA *)&rna_Armature_is_editmode, (PropertyRNA *)&rna_Armature_show_bone_custom_shapes,
	-1, "show_group_colors", 3, 1, 0, 0, 0, "Display Bone Group Colors",
	"Display bone group colors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Armature_show_group_colors_get, Armature_show_group_colors_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Armature_is_editmode = {
	{NULL, (PropertyRNA *)&rna_Armature_show_group_colors,
	-1, "is_editmode", 2, 1, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Armature_is_editmode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Armature_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Armature_transform_matrix = {
	{NULL, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Armature_transform_matrix_default
};

FunctionRNA rna_Armature_transform_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Armature_transform_matrix, (PropertyRNA *)&rna_Armature_transform_matrix}},
	"transform", 0, "Transform armature bones by a matrix",
	Armature_transform_call,
	NULL
};

StructRNA RNA_Armature = {
	{(ContainerRNA *)&RNA_ArmatureBones, (ContainerRNA *)&RNA_MotionPathVert,
	NULL,
	{(PropertyRNA *)&rna_Armature_animation_data, (PropertyRNA *)&rna_Armature_is_editmode}},
	"Armature", NULL, NULL, 519, NULL, "Armature",
	"Armature data-block containing a hierarchy of bones, usually used for rigging characters",
	"*", 172,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Armature_transform_func, (FunctionRNA *)&rna_Armature_transform_func}
};

/* Armature Bones */
CollectionPropertyRNA rna_ArmatureBones_rna_properties = {
	{(PropertyRNA *)&rna_ArmatureBones_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ArmatureBones_rna_properties_begin, ArmatureBones_rna_properties_next, ArmatureBones_rna_properties_end, ArmatureBones_rna_properties_get, NULL, NULL, ArmatureBones_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ArmatureBones_rna_type = {
	{(PropertyRNA *)&rna_ArmatureBones_active, (PropertyRNA *)&rna_ArmatureBones_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ArmatureBones_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ArmatureBones_active = {
	{NULL, (PropertyRNA *)&rna_ArmatureBones_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active Bone",
	"Armature\'s active bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ArmatureBones_active_get, ArmatureBones_active_set, NULL, NULL,&RNA_Bone
};

StructRNA RNA_ArmatureBones = {
	{(ContainerRNA *)&RNA_ArmatureEditBones, (ContainerRNA *)&RNA_Armature,
	NULL,
	{(PropertyRNA *)&rna_ArmatureBones_rna_properties, (PropertyRNA *)&rna_ArmatureBones_active}},
	"ArmatureBones", NULL, NULL, 516, NULL, "Armature Bones",
	"Collection of armature bones",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ArmatureBones_rna_properties,
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

/* Armature EditBones */
CollectionPropertyRNA rna_ArmatureEditBones_rna_properties = {
	{(PropertyRNA *)&rna_ArmatureEditBones_rna_type, NULL,
	-1, "rna_properties", 0, 1, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ArmatureEditBones_rna_properties_begin, ArmatureEditBones_rna_properties_next, ArmatureEditBones_rna_properties_end, ArmatureEditBones_rna_properties_get, NULL, NULL, ArmatureEditBones_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ArmatureEditBones_rna_type = {
	{(PropertyRNA *)&rna_ArmatureEditBones_active, (PropertyRNA *)&rna_ArmatureEditBones_rna_properties,
	-1, "rna_type", 8912896, 1, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ArmatureEditBones_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ArmatureEditBones_active = {
	{NULL, (PropertyRNA *)&rna_ArmatureEditBones_rna_type,
	-1, "active", 8388609, 1, 0, 0, 0, "Active EditBone",
	"Armatures active edit bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	ArmatureEditBones_active_get, ArmatureEditBones_active_set, NULL, NULL,&RNA_EditBone
};

StringPropertyRNA rna_ArmatureEditBones_new_name = {
	{(PropertyRNA *)&rna_ArmatureEditBones_new_bone, NULL,
	-1, "name", 262145, 1, 1, 0, 0, "",
	"New name for the bone",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Object"
};

PointerPropertyRNA rna_ArmatureEditBones_new_bone = {
	{NULL, (PropertyRNA *)&rna_ArmatureEditBones_new_name,
	-1, "bone", 8388608, 1, 2, 0, 0, "",
	"Newly created edit bone",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_EditBone
};

FunctionRNA rna_ArmatureEditBones_new_func = {
	{(FunctionRNA *)&rna_ArmatureEditBones_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_ArmatureEditBones_new_name, (PropertyRNA *)&rna_ArmatureEditBones_new_bone}},
	"new", 16, "Add a new bone",
	ArmatureEditBones_new_call,
	(PropertyRNA *)&rna_ArmatureEditBones_new_bone
};

PointerPropertyRNA rna_ArmatureEditBones_remove_bone = {
	{NULL, NULL,
	-1, "bone", 262144, 1, 5, 0, 0, "",
	"EditBone to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_EditBone
};

FunctionRNA rna_ArmatureEditBones_remove_func = {
	{NULL, (FunctionRNA *)&rna_ArmatureEditBones_new_func,
	NULL,
	{(PropertyRNA *)&rna_ArmatureEditBones_remove_bone, (PropertyRNA *)&rna_ArmatureEditBones_remove_bone}},
	"remove", 16, "Remove an existing bone from the armature",
	ArmatureEditBones_remove_call,
	NULL
};

StructRNA RNA_ArmatureEditBones = {
	{(ContainerRNA *)&RNA_Bone, (ContainerRNA *)&RNA_ArmatureBones,
	NULL,
	{(PropertyRNA *)&rna_ArmatureEditBones_rna_properties, (PropertyRNA *)&rna_ArmatureEditBones_active}},
	"ArmatureEditBones", NULL, NULL, 516, NULL, "Armature EditBones",
	"Collection of armature edit bones",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ArmatureEditBones_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_ArmatureEditBones_new_func, (FunctionRNA *)&rna_ArmatureEditBones_remove_func}
};

/* Bone */
CollectionPropertyRNA rna_Bone_rna_properties = {
	{(PropertyRNA *)&rna_Bone_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_rna_properties_begin, Bone_rna_properties_next, Bone_rna_properties_end, Bone_rna_properties_get, NULL, NULL, Bone_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Bone_rna_type = {
	{(PropertyRNA *)&rna_Bone_parent, (PropertyRNA *)&rna_Bone_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Bone_parent = {
	{(PropertyRNA *)&rna_Bone_children, (PropertyRNA *)&rna_Bone_rna_type,
	-1, "parent", 8388736, 0, 0, 0, 0, "Parent",
	"Parent bone (in same Armature)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_parent_get, NULL, NULL, NULL,&RNA_Bone
};

CollectionPropertyRNA rna_Bone_children = {
	{(PropertyRNA *)&rna_Bone_name, (PropertyRNA *)&rna_Bone_parent,
	-1, "children", 128, 0, 0, 0, 0, "Children",
	"Bones which are children of this bone",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_children_begin, Bone_children_next, Bone_children_end, Bone_children_get, NULL, Bone_children_lookup_int, Bone_children_lookup_string, NULL, &RNA_Bone
};

StringPropertyRNA rna_Bone_name = {
	{(PropertyRNA *)&rna_Bone_layers, (PropertyRNA *)&rna_Bone_children,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Bone_update_renamed, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_name_get, Bone_name_length, Bone_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

static bool rna_Bone_layers_default[32] = {
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

BoolPropertyRNA rna_Bone_layers = {
	{(PropertyRNA *)&rna_Bone_use_connect, (PropertyRNA *)&rna_Bone_name,
	-1, "layers", 3, 1, 0, 0, 0, "Layers",
	"Layers bone exists in",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Bone_layers_get, Bone_layers_set, NULL, NULL, NULL, NULL, 0, rna_Bone_layers_default
};

BoolPropertyRNA rna_Bone_use_connect = {
	{(PropertyRNA *)&rna_Bone_use_inherit_rotation, (PropertyRNA *)&rna_Bone_layers,
	-1, "use_connect", 2, 1, 0, 0, 0, "Connected",
	"When bone has a parent, bone\'s head is stuck to the parent\'s tail",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_connect_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_use_inherit_rotation = {
	{(PropertyRNA *)&rna_Bone_use_envelope_multiply, (PropertyRNA *)&rna_Bone_use_connect,
	-1, "use_inherit_rotation", 3, 1, 0, 0, 0, "Inherit Rotation",
	"Bone inherits rotation or scale from parent bone",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_inherit_rotation_get, Bone_use_inherit_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_use_envelope_multiply = {
	{(PropertyRNA *)&rna_Bone_use_deform, (PropertyRNA *)&rna_Bone_use_inherit_rotation,
	-1, "use_envelope_multiply", 3, 1, 0, 0, 0, "Multiply Vertex Group with Envelope",
	"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_envelope_multiply_get, Bone_use_envelope_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_use_deform = {
	{(PropertyRNA *)&rna_Bone_inherit_scale, (PropertyRNA *)&rna_Bone_use_envelope_multiply,
	-1, "use_deform", 3, 1, 0, 0, 0, "Deform",
	"Enable Bone to deform geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_deform_get, Bone_use_deform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Bone_inherit_scale_items[7] = {
	{0, "FULL", 0, "Full", "Inherit all effects of parent scaling"},
	{1, "FIX_SHEAR", 0, "Fix Shear", "Inherit scaling, but remove shearing of the child in the rest orientation"},
	{5, "ALIGNED", 0, "Aligned", "Rotate non-uniform parent scaling to align with the child, applying parent X scale to child X axis, and so forth"},
	{2, "AVERAGE", 0, "Average", "Inherit uniform scaling representing the overall change in the volume of the parent"},
	{3, "NONE", 0, "None", "Completely ignore parent scaling"},
	{4, "NONE_LEGACY", 0, "None (Legacy)", "Ignore parent scaling without compensating for parent shear. Replicates the effect of disabling the original Inherit Scale checkbox"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Bone_inherit_scale = {
	{(PropertyRNA *)&rna_Bone_use_inherit_scale, (PropertyRNA *)&rna_Bone_use_deform,
	-1, "inherit_scale", 3, 1, 0, 4, 0, "Inherit Scale",
	"Specifies how the bone inherits scaling from the parent bone",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, inherit_scale_mode), 2, NULL},
	Bone_inherit_scale_get, Bone_inherit_scale_set, NULL, NULL, NULL, rna_Bone_inherit_scale_items, 6, 0
};

BoolPropertyRNA rna_Bone_use_inherit_scale = {
	{(PropertyRNA *)&rna_Bone_use_local_location, (PropertyRNA *)&rna_Bone_inherit_scale,
	-1, "use_inherit_scale", 3, 1, 0, 0, 0, "Inherit Scale",
	"DEPRECATED: Bone inherits scaling from parent bone",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_inherit_scale_get, Bone_use_inherit_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_use_local_location = {
	{(PropertyRNA *)&rna_Bone_use_relative_parent, (PropertyRNA *)&rna_Bone_use_inherit_scale,
	-1, "use_local_location", 3, 1, 0, 0, 0, "Local Location",
	"Bone location is set in local space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_local_location_get, Bone_use_local_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_use_relative_parent = {
	{(PropertyRNA *)&rna_Bone_show_wire, (PropertyRNA *)&rna_Bone_use_local_location,
	-1, "use_relative_parent", 3, 1, 0, 0, 0, "Relative Parenting",
	"Object children will use relative transform, like deform",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_relative_parent_get, Bone_use_relative_parent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_show_wire = {
	{(PropertyRNA *)&rna_Bone_use_cyclic_offset, (PropertyRNA *)&rna_Bone_use_relative_parent,
	-1, "show_wire", 3, 1, 0, 0, 0, "Display Wire",
	"Bone is always displayed in wireframe regardless of viewport shading mode (useful for non-obstructive custom bone shapes)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_show_wire_get, Bone_show_wire_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_use_cyclic_offset = {
	{(PropertyRNA *)&rna_Bone_hide_select, (PropertyRNA *)&rna_Bone_show_wire,
	-1, "use_cyclic_offset", 3, 1, 0, 0, 0, "Cyclic Offset",
	"When bone doesn\'t have a parent, it receives cyclic offset effects (Deprecated)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_cyclic_offset_get, Bone_use_cyclic_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_hide_select = {
	{(PropertyRNA *)&rna_Bone_envelope_distance, (PropertyRNA *)&rna_Bone_use_cyclic_offset,
	-1, "hide_select", 3, 1, 0, 0, 0, "Selectable",
	"Bone is able to be selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_hide_select_get, Bone_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Bone_envelope_distance = {
	{(PropertyRNA *)&rna_Bone_envelope_weight, (PropertyRNA *)&rna_Bone_hide_select,
	-1, "envelope_distance", 3, 1, 0, 4, 0, "Envelope Deform Distance",
	"Bone deformation distance (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, dist), 5, NULL},
	Bone_envelope_distance_get, Bone_envelope_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_envelope_weight = {
	{(PropertyRNA *)&rna_Bone_head_radius, (PropertyRNA *)&rna_Bone_envelope_distance,
	-1, "envelope_weight", 3, 1, 0, 4, 0, "Envelope Deform Weight",
	"Bone deformation weight (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, weight), 5, NULL},
	Bone_envelope_weight_get, Bone_envelope_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_head_radius = {
	{(PropertyRNA *)&rna_Bone_tail_radius, (PropertyRNA *)&rna_Bone_envelope_weight,
	-1, "head_radius", 3, 1, 0, 4, 0, "Envelope Head Radius",
	"Radius of head of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, rad_head), 5, NULL},
	Bone_head_radius_get, Bone_head_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_tail_radius = {
	{(PropertyRNA *)&rna_Bone_bbone_segments, (PropertyRNA *)&rna_Bone_head_radius,
	-1, "tail_radius", 3, 1, 0, 4, 0, "Envelope Tail Radius",
	"Radius of tail of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, rad_tail), 5, NULL},
	Bone_tail_radius_get, Bone_tail_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Bone_bbone_segments = {
	{(PropertyRNA *)&rna_Bone_bbone_x, (PropertyRNA *)&rna_Bone_tail_radius,
	-1, "bbone_segments", 3, 1, 0, 4, 0, "B-Bone Segments",
	"Number of subdivisions of bone (for B-Bones only)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, segments), 1, NULL},
	Bone_bbone_segments_get, Bone_bbone_segments_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32, 1, 32, 1, 0, NULL
};

FloatPropertyRNA rna_Bone_bbone_x = {
	{(PropertyRNA *)&rna_Bone_bbone_z, (PropertyRNA *)&rna_Bone_bbone_segments,
	-1, "bbone_x", 3, 1, 0, 4, 0, "B-Bone Display X Width",
	"B-Bone X size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, xwidth), 5, NULL},
	Bone_bbone_x_get, Bone_bbone_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_z = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_type_start, (PropertyRNA *)&rna_Bone_bbone_x,
	-1, "bbone_z", 3, 1, 0, 4, 0, "B-Bone Display Z Width",
	"B-Bone Z size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, zwidth), 5, NULL},
	Bone_bbone_z_get, Bone_bbone_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

static const EnumPropertyItem rna_Bone_bbone_handle_type_start_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Bone_bbone_handle_type_start = {
	{(PropertyRNA *)&rna_Bone_bbone_custom_handle_start, (PropertyRNA *)&rna_Bone_bbone_z,
	-1, "bbone_handle_type_start", 1, 1, 0, 4, 0, "B-Bone Start Handle Type",
	"Selects how the start handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bbone_prev_type), 2, NULL},
	Bone_bbone_handle_type_start_get, Bone_bbone_handle_type_start_set, NULL, NULL, NULL, rna_Bone_bbone_handle_type_start_items, 4, 0
};

PointerPropertyRNA rna_Bone_bbone_custom_handle_start = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_scale_start, (PropertyRNA *)&rna_Bone_bbone_handle_type_start,
	-1, "bbone_custom_handle_start", 8388737, 3, 0, 0, 0, "B-Bone Start Handle",
	"Bone that serves as the start handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Bone_bbone_handle_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_bbone_custom_handle_start_get, Bone_bbone_custom_handle_start_set, NULL, NULL,&RNA_Bone
};

static bool rna_Bone_bbone_handle_use_scale_start_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Bone_bbone_handle_use_scale_start = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_ease_start, (PropertyRNA *)&rna_Bone_bbone_custom_handle_start,
	-1, "bbone_handle_use_scale_start", 3, 1, 0, 0, 0, "Start Handle Scale",
	"Multiply B-Bone Scale In channels by the local scale values of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Bone_bbone_handle_use_scale_start_get, Bone_bbone_handle_use_scale_start_set, NULL, NULL, NULL, NULL, 0, rna_Bone_bbone_handle_use_scale_start_default
};

BoolPropertyRNA rna_Bone_bbone_handle_use_ease_start = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_type_end, (PropertyRNA *)&rna_Bone_bbone_handle_use_scale_start,
	-1, "bbone_handle_use_ease_start", 3, 1, 0, 0, 0, "Start Handle Ease",
	"Multiply the B-Bone Ease In channel by the local Y scale value of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_bbone_handle_use_ease_start_get, Bone_bbone_handle_use_ease_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Bone_bbone_handle_type_end_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Bone_bbone_handle_type_end = {
	{(PropertyRNA *)&rna_Bone_bbone_custom_handle_end, (PropertyRNA *)&rna_Bone_bbone_handle_use_ease_start,
	-1, "bbone_handle_type_end", 1, 1, 0, 4, 0, "B-Bone End Handle Type",
	"Selects how the end handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bbone_next_type), 2, NULL},
	Bone_bbone_handle_type_end_get, Bone_bbone_handle_type_end_set, NULL, NULL, NULL, rna_Bone_bbone_handle_type_end_items, 4, 0
};

PointerPropertyRNA rna_Bone_bbone_custom_handle_end = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_scale_end, (PropertyRNA *)&rna_Bone_bbone_handle_type_end,
	-1, "bbone_custom_handle_end", 8388737, 3, 0, 0, 0, "B-Bone End Handle",
	"Bone that serves as the end handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Bone_bbone_handle_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_bbone_custom_handle_end_get, Bone_bbone_custom_handle_end_set, NULL, NULL,&RNA_Bone
};

static bool rna_Bone_bbone_handle_use_scale_end_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_Bone_bbone_handle_use_scale_end = {
	{(PropertyRNA *)&rna_Bone_bbone_handle_use_ease_end, (PropertyRNA *)&rna_Bone_bbone_custom_handle_end,
	-1, "bbone_handle_use_scale_end", 3, 1, 0, 0, 0, "End Handle Scale",
	"Multiply B-Bone Scale Out channels by the local scale values of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Bone_bbone_handle_use_scale_end_get, Bone_bbone_handle_use_scale_end_set, NULL, NULL, NULL, NULL, 0, rna_Bone_bbone_handle_use_scale_end_default
};

BoolPropertyRNA rna_Bone_bbone_handle_use_ease_end = {
	{(PropertyRNA *)&rna_Bone_bbone_rollin, (PropertyRNA *)&rna_Bone_bbone_handle_use_scale_end,
	-1, "bbone_handle_use_ease_end", 3, 1, 0, 0, 0, "End Handle Ease",
	"Multiply the B-Bone Ease Out channel by the local Y scale value of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_bbone_handle_use_ease_end_get, Bone_bbone_handle_use_ease_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Bone_bbone_rollin = {
	{(PropertyRNA *)&rna_Bone_bbone_rollout, (PropertyRNA *)&rna_Bone_bbone_handle_use_ease_end,
	-1, "bbone_rollin", 3, 0, 0, 4, 0, "Roll In",
	"Roll offset for the start of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, roll1), 5, NULL},
	Bone_bbone_rollin_get, Bone_bbone_rollin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_rollout = {
	{(PropertyRNA *)&rna_Bone_use_endroll_as_inroll, (PropertyRNA *)&rna_Bone_bbone_rollin,
	-1, "bbone_rollout", 3, 0, 0, 4, 0, "Roll Out",
	"Roll offset for the end of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, roll2), 5, NULL},
	Bone_bbone_rollout_get, Bone_bbone_rollout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_Bone_use_endroll_as_inroll = {
	{(PropertyRNA *)&rna_Bone_bbone_curveinx, (PropertyRNA *)&rna_Bone_bbone_rollout,
	-1, "use_endroll_as_inroll", 1, 0, 0, 0, 0, "Inherit End Roll",
	"Add Roll Out of the Start Handle bone to the Roll In value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_endroll_as_inroll_get, Bone_use_endroll_as_inroll_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Bone_bbone_curveinx = {
	{(PropertyRNA *)&rna_Bone_bbone_curveinz, (PropertyRNA *)&rna_Bone_use_endroll_as_inroll,
	-1, "bbone_curveinx", 3, 0, 0, 4, 0, "In X",
	"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_in_x), 5, NULL},
	Bone_bbone_curveinx_get, Bone_bbone_curveinx_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_curveinz = {
	{(PropertyRNA *)&rna_Bone_bbone_curveoutx, (PropertyRNA *)&rna_Bone_bbone_curveinx,
	-1, "bbone_curveinz", 3, 0, 0, 4, 0, "In Z",
	"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_in_z), 5, NULL},
	Bone_bbone_curveinz_get, Bone_bbone_curveinz_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_curveoutx = {
	{(PropertyRNA *)&rna_Bone_bbone_curveoutz, (PropertyRNA *)&rna_Bone_bbone_curveinz,
	-1, "bbone_curveoutx", 3, 0, 0, 4, 0, "Out X",
	"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_out_x), 5, NULL},
	Bone_bbone_curveoutx_get, Bone_bbone_curveoutx_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_curveoutz = {
	{(PropertyRNA *)&rna_Bone_bbone_easein, (PropertyRNA *)&rna_Bone_bbone_curveoutx,
	-1, "bbone_curveoutz", 3, 0, 0, 4, 0, "Out Z",
	"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, curve_out_z), 5, NULL},
	Bone_bbone_curveoutz_get, Bone_bbone_curveoutz_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_easein = {
	{(PropertyRNA *)&rna_Bone_bbone_easeout, (PropertyRNA *)&rna_Bone_bbone_curveoutz,
	-1, "bbone_easein", 3, 0, 0, 4, 0, "Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, ease1), 5, NULL},
	Bone_bbone_easein_get, Bone_bbone_easein_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_easeout = {
	{(PropertyRNA *)&rna_Bone_use_scale_easing, (PropertyRNA *)&rna_Bone_bbone_easein,
	-1, "bbone_easeout", 3, 0, 0, 4, 0, "Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, ease2), 5, NULL},
	Bone_bbone_easeout_get, Bone_bbone_easeout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_Bone_use_scale_easing = {
	{(PropertyRNA *)&rna_Bone_bbone_scalein, (PropertyRNA *)&rna_Bone_bbone_easeout,
	-1, "use_scale_easing", 3, 0, 0, 0, 0, "Scale Easing",
	"Multiply the final easing values by the Scale In/Out Y factors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_use_scale_easing_get, Bone_use_scale_easing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Bone_bbone_scalein_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Bone_bbone_scalein = {
	{(PropertyRNA *)&rna_Bone_bbone_scaleout, (PropertyRNA *)&rna_Bone_use_scale_easing,
	-1, "bbone_scalein", 67108867, 0, 0, 4, 0, "Scale In",
	"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, scale_in), 5, NULL},
	NULL, NULL, Bone_bbone_scalein_get, Bone_bbone_scalein_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_bbone_scalein_default
};

static float rna_Bone_bbone_scaleout_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Bone_bbone_scaleout = {
	{(PropertyRNA *)&rna_Bone_hide, (PropertyRNA *)&rna_Bone_bbone_scalein,
	-1, "bbone_scaleout", 67108867, 0, 0, 4, 0, "Scale Out",
	"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, scale_out), 5, NULL},
	NULL, NULL, Bone_bbone_scaleout_get, Bone_bbone_scaleout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_bbone_scaleout_default
};

BoolPropertyRNA rna_Bone_hide = {
	{(PropertyRNA *)&rna_Bone_select, (PropertyRNA *)&rna_Bone_bbone_scaleout,
	-1, "hide", 4355, 1, 0, 0, 0, "Hide",
	"Bone is not visible when it is not in Edit Mode (i.e. in Object or Pose Modes)",
	284, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Bone_hide_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_hide_get, Bone_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_select = {
	{(PropertyRNA *)&rna_Bone_select_head, (PropertyRNA *)&rna_Bone_hide,
	-1, "select", 1, 1, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Bone_select_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_select_get, Bone_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_select_head = {
	{(PropertyRNA *)&rna_Bone_select_tail, (PropertyRNA *)&rna_Bone_select,
	-1, "select_head", 1, 1, 0, 0, 0, "Select Head",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_select_head_get, Bone_select_head_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Bone_select_tail = {
	{(PropertyRNA *)&rna_Bone_matrix, (PropertyRNA *)&rna_Bone_select_head,
	-1, "select_tail", 1, 1, 0, 0, 0, "Select Tail",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Bone_select_tail_get, Bone_select_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_Bone_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_matrix = {
	{(PropertyRNA *)&rna_Bone_matrix_local, (PropertyRNA *)&rna_Bone_select_tail,
	-1, "matrix", 2, 1, 0, 4, 0, "Bone Matrix",
	"3x3 bone matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, bone_mat), 5, NULL},
	NULL, NULL, Bone_matrix_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_matrix_default
};

static float rna_Bone_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_matrix_local = {
	{(PropertyRNA *)&rna_Bone_tail, (PropertyRNA *)&rna_Bone_matrix,
	-1, "matrix_local", 2, 1, 0, 4, 0, "Bone Armature-Relative Matrix",
	"4x4 bone matrix relative to armature",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, arm_mat), 5, NULL},
	NULL, NULL, Bone_matrix_local_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_matrix_local_default
};

static float rna_Bone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_tail = {
	{(PropertyRNA *)&rna_Bone_tail_local, (PropertyRNA *)&rna_Bone_matrix_local,
	-1, "tail", 2, 1, 0, 4, 0, "Tail",
	"Location of tail end of the bone relative to its parent",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, tail), 5, NULL},
	NULL, NULL, Bone_tail_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_tail_default
};

static float rna_Bone_tail_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_tail_local = {
	{(PropertyRNA *)&rna_Bone_head, (PropertyRNA *)&rna_Bone_tail,
	-1, "tail_local", 2, 1, 0, 4, 0, "Armature-Relative Tail",
	"Location of tail end of the bone relative to armature",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, arm_tail), 5, NULL},
	NULL, NULL, Bone_tail_local_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_tail_local_default
};

static float rna_Bone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_head = {
	{(PropertyRNA *)&rna_Bone_head_local, (PropertyRNA *)&rna_Bone_tail_local,
	-1, "head", 2, 1, 0, 4, 0, "Head",
	"Location of head end of the bone relative to its parent",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, head), 5, NULL},
	NULL, NULL, Bone_head_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_head_default
};

static float rna_Bone_head_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_head_local = {
	{(PropertyRNA *)&rna_Bone_length, (PropertyRNA *)&rna_Bone_head,
	-1, "head_local", 2, 1, 0, 4, 0, "Armature-Relative Head",
	"Location of head end of the bone relative to armature",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, arm_head), 5, NULL},
	NULL, NULL, Bone_head_local_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, rna_Bone_head_local_default
};

FloatPropertyRNA rna_Bone_length = {
	{NULL, (PropertyRNA *)&rna_Bone_head_local,
	-1, "length", 2, 1, 0, 4, 0, "Length",
	"Length of the bone",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Bone, length), 5, NULL},
	Bone_length_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_Bone_evaluate_envelope_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_evaluate_envelope_point = {
	{(PropertyRNA *)&rna_Bone_evaluate_envelope_factor, NULL,
	-1, "point", 3, 0, 1, 0, 0, "Point",
	"Position in 3d space to evaluate",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_evaluate_envelope_point_default
};

FloatPropertyRNA rna_Bone_evaluate_envelope_factor = {
	{NULL, (PropertyRNA *)&rna_Bone_evaluate_envelope_point,
	-1, "factor", 3, 0, 2, 0, 0, "Factor",
	"Envelope factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Bone_evaluate_envelope_func = {
	{(FunctionRNA *)&rna_Bone_convert_local_to_pose_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Bone_evaluate_envelope_point, (PropertyRNA *)&rna_Bone_evaluate_envelope_factor}},
	"evaluate_envelope", 0, "Calculate bone envelope at given point",
	Bone_evaluate_envelope_call,
	(PropertyRNA *)&rna_Bone_evaluate_envelope_factor
};

static float rna_Bone_convert_local_to_pose_matrix_return_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_return = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix, NULL,
	-1, "matrix_return", 3, 0, 2, 0, 0, "",
	"The transformed matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_matrix_return_default
};

static float rna_Bone_convert_local_to_pose_matrix_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_local, (PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_return,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"The matrix to transform",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_matrix_default
};

static float rna_Bone_convert_local_to_pose_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_local = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix, (PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix,
	-1, "matrix_local", 3, 0, 1, 0, 0, "",
	"The custom rest matrix of this bone (Bone.matrix_local)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_matrix_local_default
};

static float rna_Bone_convert_local_to_pose_parent_matrix_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix_local, (PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_local,
	-1, "parent_matrix", 3, 0, 0, 0, 0, "",
	"The custom pose matrix of the parent bone (PoseBone.matrix)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_parent_matrix_default
};

static float rna_Bone_convert_local_to_pose_parent_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix_local = {
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_invert, (PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix,
	-1, "parent_matrix_local", 3, 0, 0, 0, 0, "",
	"The custom rest matrix of the parent bone (Bone.matrix_local)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_convert_local_to_pose_parent_matrix_local_default
};

BoolPropertyRNA rna_Bone_convert_local_to_pose_invert = {
	{NULL, (PropertyRNA *)&rna_Bone_convert_local_to_pose_parent_matrix_local,
	-1, "invert", 3, 0, 0, 0, 0, "",
	"Convert from Pose to Local space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Bone_convert_local_to_pose_func = {
	{(FunctionRNA *)&rna_Bone_MatrixFromAxisRoll_func, (FunctionRNA *)&rna_Bone_evaluate_envelope_func,
	NULL,
	{(PropertyRNA *)&rna_Bone_convert_local_to_pose_matrix_return, (PropertyRNA *)&rna_Bone_convert_local_to_pose_invert}},
	"convert_local_to_pose", 0, "Transform a matrix from Local to Pose space (or back), taking into account options like Inherit Scale and Local Location. Unlike Object.convert_space, this uses custom rest and pose matrices provided by the caller. If the parent matrices are omitted, the bone is assumed to have no parent.",
	Bone_convert_local_to_pose_call,
	NULL
};

static float rna_Bone_MatrixFromAxisRoll_axis_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_axis = {
	{(PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_roll, NULL,
	-1, "axis", 262147, 0, 1, 0, 0, "",
	"The main axis of the bone (tail - head)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_MatrixFromAxisRoll_axis_default
};

FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_roll = {
	{(PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_result_matrix, (PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_axis,
	-1, "roll", 3, 0, 1, 0, 0, "",
	"The roll of the bone",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_Bone_MatrixFromAxisRoll_result_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_result_matrix = {
	{NULL, (PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_roll,
	-1, "result_matrix", 3, 0, 2, 0, 0, "",
	"The resulting orientation matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_MatrixFromAxisRoll_result_matrix_default
};

FunctionRNA rna_Bone_MatrixFromAxisRoll_func = {
	{(FunctionRNA *)&rna_Bone_AxisRollFromMatrix_func, (FunctionRNA *)&rna_Bone_convert_local_to_pose_func,
	NULL,
	{(PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_axis, (PropertyRNA *)&rna_Bone_MatrixFromAxisRoll_result_matrix}},
	"MatrixFromAxisRoll", 1, "Convert the axis + roll representation to a matrix",
	Bone_MatrixFromAxisRoll_call,
	NULL
};

static float rna_Bone_AxisRollFromMatrix_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_matrix = {
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_axis, NULL,
	-1, "matrix", 262147, 0, 1, 0, 0, "",
	"The orientation matrix of the bone",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_AxisRollFromMatrix_matrix_default
};

static float rna_Bone_AxisRollFromMatrix_axis_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_axis = {
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_axis, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_matrix,
	-1, "axis", 3, 0, 0, 0, 0, "",
	"The optional override for the axis (finds closest approximation for the matrix)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_AxisRollFromMatrix_axis_default
};

static float rna_Bone_AxisRollFromMatrix_result_axis_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_axis = {
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_roll, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_axis,
	-1, "result_axis", 3, 0, 2, 0, 0, "",
	"The main axis of the bone",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_AxisRollFromMatrix_result_axis_default
};

FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_roll = {
	{NULL, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_axis,
	-1, "result_roll", 3, 0, 2, 0, 0, "",
	"The roll of the bone",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Bone_AxisRollFromMatrix_func = {
	{NULL, (FunctionRNA *)&rna_Bone_MatrixFromAxisRoll_func,
	NULL,
	{(PropertyRNA *)&rna_Bone_AxisRollFromMatrix_matrix, (PropertyRNA *)&rna_Bone_AxisRollFromMatrix_result_roll}},
	"AxisRollFromMatrix", 1, "Convert a rotational matrix to the axis + roll representation. Note that the resulting value of the roll may not be as expected if the matrix has shear or negative determinant.",
	Bone_AxisRollFromMatrix_call,
	NULL
};

StructRNA RNA_Bone = {
	{(ContainerRNA *)&RNA_EditBone, (ContainerRNA *)&RNA_ArmatureEditBones,
	NULL,
	{(PropertyRNA *)&rna_Bone_rna_properties, (PropertyRNA *)&rna_Bone_length}},
	"Bone", NULL, NULL, 516, NULL, "Bone",
	"Bone in an Armature data-block",
	"*", 174,
	(PropertyRNA *)&rna_Bone_name, (PropertyRNA *)&rna_Bone_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Bone_path,
	NULL,
	NULL,
	NULL,
	rna_Bone_idprops,
	{(FunctionRNA *)&rna_Bone_evaluate_envelope_func, (FunctionRNA *)&rna_Bone_AxisRollFromMatrix_func}
};

/* Edit Bone */
CollectionPropertyRNA rna_EditBone_rna_properties = {
	{(PropertyRNA *)&rna_EditBone_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_rna_properties_begin, EditBone_rna_properties_next, EditBone_rna_properties_end, EditBone_rna_properties_get, NULL, NULL, EditBone_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_EditBone_rna_type = {
	{(PropertyRNA *)&rna_EditBone_parent, (PropertyRNA *)&rna_EditBone_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_EditBone_parent = {
	{(PropertyRNA *)&rna_EditBone_roll, (PropertyRNA *)&rna_EditBone_rna_type,
	-1, "parent", 8388609, 0, 0, 0, 0, "Parent",
	"Parent edit bone (in same Armature)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_parent_get, EditBone_parent_set, NULL, NULL,&RNA_EditBone
};

FloatPropertyRNA rna_EditBone_roll = {
	{(PropertyRNA *)&rna_EditBone_head, (PropertyRNA *)&rna_EditBone_parent,
	-1, "roll", 1, 0, 0, 0, 0, "Roll",
	"Bone rotation around head-tail axis",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_roll_get, EditBone_roll_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

static float rna_EditBone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_head = {
	{(PropertyRNA *)&rna_EditBone_tail, (PropertyRNA *)&rna_EditBone_roll,
	-1, "head", 1, 0, 0, 0, 0, "Head",
	"Location of head end of the bone",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_head_get, EditBone_head_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_EditBone_head_default
};

static float rna_EditBone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_tail = {
	{(PropertyRNA *)&rna_EditBone_length, (PropertyRNA *)&rna_EditBone_head,
	-1, "tail", 1, 0, 0, 0, 0, "Tail",
	"Location of tail end of the bone",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_tail_get, EditBone_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 5, 0.0f, rna_EditBone_tail_default
};

FloatPropertyRNA rna_EditBone_length = {
	{(PropertyRNA *)&rna_EditBone_name, (PropertyRNA *)&rna_EditBone_tail,
	-1, "length", 1, 0, 0, 0, 0, "Length",
	"Length of the bone. Changing moves the tail end",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_length_get, EditBone_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

StringPropertyRNA rna_EditBone_name = {
	{(PropertyRNA *)&rna_EditBone_layers, (PropertyRNA *)&rna_EditBone_length,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Bone_update_renamed, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_name_get, EditBone_name_length, EditBone_name_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

static bool rna_EditBone_layers_default[32] = {
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

BoolPropertyRNA rna_EditBone_layers = {
	{(PropertyRNA *)&rna_EditBone_use_connect, (PropertyRNA *)&rna_EditBone_name,
	-1, "layers", 3, 1, 0, 0, 0, "Layers",
	"Layers bone exists in",
	0, "*",
	PROP_BOOLEAN, PROP_LAYER_MEMBER | PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_layers_get, EditBone_layers_set, NULL, NULL, NULL, NULL, 0, rna_EditBone_layers_default
};

BoolPropertyRNA rna_EditBone_use_connect = {
	{(PropertyRNA *)&rna_EditBone_use_inherit_rotation, (PropertyRNA *)&rna_EditBone_layers,
	-1, "use_connect", 3, 1, 0, 0, 0, "Connected",
	"When bone has a parent, bone\'s head is stuck to the parent\'s tail",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_connect_get, EditBone_use_connect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_use_inherit_rotation = {
	{(PropertyRNA *)&rna_EditBone_use_envelope_multiply, (PropertyRNA *)&rna_EditBone_use_connect,
	-1, "use_inherit_rotation", 3, 1, 0, 0, 0, "Inherit Rotation",
	"Bone inherits rotation or scale from parent bone",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_inherit_rotation_get, EditBone_use_inherit_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_use_envelope_multiply = {
	{(PropertyRNA *)&rna_EditBone_use_deform, (PropertyRNA *)&rna_EditBone_use_inherit_rotation,
	-1, "use_envelope_multiply", 3, 1, 0, 0, 0, "Multiply Vertex Group with Envelope",
	"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_envelope_multiply_get, EditBone_use_envelope_multiply_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_use_deform = {
	{(PropertyRNA *)&rna_EditBone_inherit_scale, (PropertyRNA *)&rna_EditBone_use_envelope_multiply,
	-1, "use_deform", 3, 1, 0, 0, 0, "Deform",
	"Enable Bone to deform geometry",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_deform_get, EditBone_use_deform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_EditBone_inherit_scale_items[7] = {
	{0, "FULL", 0, "Full", "Inherit all effects of parent scaling"},
	{1, "FIX_SHEAR", 0, "Fix Shear", "Inherit scaling, but remove shearing of the child in the rest orientation"},
	{5, "ALIGNED", 0, "Aligned", "Rotate non-uniform parent scaling to align with the child, applying parent X scale to child X axis, and so forth"},
	{2, "AVERAGE", 0, "Average", "Inherit uniform scaling representing the overall change in the volume of the parent"},
	{3, "NONE", 0, "None", "Completely ignore parent scaling"},
	{4, "NONE_LEGACY", 0, "None (Legacy)", "Ignore parent scaling without compensating for parent shear. Replicates the effect of disabling the original Inherit Scale checkbox"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditBone_inherit_scale = {
	{(PropertyRNA *)&rna_EditBone_use_inherit_scale, (PropertyRNA *)&rna_EditBone_use_deform,
	-1, "inherit_scale", 3, 1, 0, 0, 0, "Inherit Scale",
	"Specifies how the bone inherits scaling from the parent bone",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_inherit_scale_get, EditBone_inherit_scale_set, NULL, NULL, NULL, rna_EditBone_inherit_scale_items, 6, 0
};

BoolPropertyRNA rna_EditBone_use_inherit_scale = {
	{(PropertyRNA *)&rna_EditBone_use_local_location, (PropertyRNA *)&rna_EditBone_inherit_scale,
	-1, "use_inherit_scale", 3, 1, 0, 0, 0, "Inherit Scale",
	"DEPRECATED: Bone inherits scaling from parent bone",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_inherit_scale_get, EditBone_use_inherit_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_use_local_location = {
	{(PropertyRNA *)&rna_EditBone_use_relative_parent, (PropertyRNA *)&rna_EditBone_use_inherit_scale,
	-1, "use_local_location", 3, 1, 0, 0, 0, "Local Location",
	"Bone location is set in local space",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_local_location_get, EditBone_use_local_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_use_relative_parent = {
	{(PropertyRNA *)&rna_EditBone_show_wire, (PropertyRNA *)&rna_EditBone_use_local_location,
	-1, "use_relative_parent", 3, 1, 0, 0, 0, "Relative Parenting",
	"Object children will use relative transform, like deform",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_relative_parent_get, EditBone_use_relative_parent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_show_wire = {
	{(PropertyRNA *)&rna_EditBone_use_cyclic_offset, (PropertyRNA *)&rna_EditBone_use_relative_parent,
	-1, "show_wire", 3, 1, 0, 0, 0, "Display Wire",
	"Bone is always displayed in wireframe regardless of viewport shading mode (useful for non-obstructive custom bone shapes)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_show_wire_get, EditBone_show_wire_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_use_cyclic_offset = {
	{(PropertyRNA *)&rna_EditBone_hide_select, (PropertyRNA *)&rna_EditBone_show_wire,
	-1, "use_cyclic_offset", 3, 1, 0, 0, 0, "Cyclic Offset",
	"When bone doesn\'t have a parent, it receives cyclic offset effects (Deprecated)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_cyclic_offset_get, EditBone_use_cyclic_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_hide_select = {
	{(PropertyRNA *)&rna_EditBone_envelope_distance, (PropertyRNA *)&rna_EditBone_use_cyclic_offset,
	-1, "hide_select", 3, 1, 0, 0, 0, "Selectable",
	"Bone is able to be selected",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_hide_select_get, EditBone_hide_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_EditBone_envelope_distance = {
	{(PropertyRNA *)&rna_EditBone_envelope_weight, (PropertyRNA *)&rna_EditBone_hide_select,
	-1, "envelope_distance", 3, 1, 0, 0, 0, "Envelope Deform Distance",
	"Bone deformation distance (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_envelope_distance_get, EditBone_envelope_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_envelope_weight = {
	{(PropertyRNA *)&rna_EditBone_head_radius, (PropertyRNA *)&rna_EditBone_envelope_distance,
	-1, "envelope_weight", 3, 1, 0, 0, 0, "Envelope Deform Weight",
	"Bone deformation weight (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_envelope_weight_get, EditBone_envelope_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_head_radius = {
	{(PropertyRNA *)&rna_EditBone_tail_radius, (PropertyRNA *)&rna_EditBone_envelope_weight,
	-1, "head_radius", 3, 1, 0, 0, 0, "Envelope Head Radius",
	"Radius of head of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_head_radius_get, EditBone_head_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_tail_radius = {
	{(PropertyRNA *)&rna_EditBone_bbone_segments, (PropertyRNA *)&rna_EditBone_head_radius,
	-1, "tail_radius", 3, 1, 0, 0, 0, "Envelope Tail Radius",
	"Radius of tail of bone (for Envelope deform only)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_tail_radius_get, EditBone_tail_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

IntPropertyRNA rna_EditBone_bbone_segments = {
	{(PropertyRNA *)&rna_EditBone_bbone_x, (PropertyRNA *)&rna_EditBone_tail_radius,
	-1, "bbone_segments", 3, 1, 0, 0, 0, "B-Bone Segments",
	"Number of subdivisions of bone (for B-Bones only)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_segments_get, EditBone_bbone_segments_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, 32, 1, 32, 1, 0, NULL
};

FloatPropertyRNA rna_EditBone_bbone_x = {
	{(PropertyRNA *)&rna_EditBone_bbone_z, (PropertyRNA *)&rna_EditBone_bbone_segments,
	-1, "bbone_x", 3, 1, 0, 0, 0, "B-Bone Display X Width",
	"B-Bone X size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_x_get, EditBone_bbone_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_z = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_type_start, (PropertyRNA *)&rna_EditBone_bbone_x,
	-1, "bbone_z", 3, 1, 0, 0, 0, "B-Bone Display Z Width",
	"B-Bone Z size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_z_get, EditBone_bbone_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

static const EnumPropertyItem rna_EditBone_bbone_handle_type_start_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditBone_bbone_handle_type_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_custom_handle_start, (PropertyRNA *)&rna_EditBone_bbone_z,
	-1, "bbone_handle_type_start", 1, 1, 0, 0, 0, "B-Bone Start Handle Type",
	"Selects how the start handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_handle_type_start_get, EditBone_bbone_handle_type_start_set, NULL, NULL, NULL, rna_EditBone_bbone_handle_type_start_items, 4, 0
};

PointerPropertyRNA rna_EditBone_bbone_custom_handle_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_start, (PropertyRNA *)&rna_EditBone_bbone_handle_type_start,
	-1, "bbone_custom_handle_start", 8388737, 3, 0, 0, 0, "B-Bone Start Handle",
	"Bone that serves as the start handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_custom_handle_start_get, EditBone_bbone_custom_handle_start_set, NULL, NULL,&RNA_EditBone
};

static bool rna_EditBone_bbone_handle_use_scale_start_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_start, (PropertyRNA *)&rna_EditBone_bbone_custom_handle_start,
	-1, "bbone_handle_use_scale_start", 3, 1, 0, 0, 0, "Start Handle Scale",
	"Multiply B-Bone Scale In channels by the local scale values of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_bbone_handle_use_scale_start_get, EditBone_bbone_handle_use_scale_start_set, NULL, NULL, NULL, NULL, 0, rna_EditBone_bbone_handle_use_scale_start_default
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_start = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_type_end, (PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_start,
	-1, "bbone_handle_use_ease_start", 3, 1, 0, 0, 0, "Start Handle Ease",
	"Multiply the B-Bone Ease In channel by the local Y scale value of the start handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_handle_use_ease_start_get, EditBone_bbone_handle_use_ease_start_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_EditBone_bbone_handle_type_end_items[5] = {
	{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"},
	{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"},
	{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"},
	{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EditBone_bbone_handle_type_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_custom_handle_end, (PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_start,
	-1, "bbone_handle_type_end", 1, 1, 0, 0, 0, "B-Bone End Handle Type",
	"Selects how the end handle of the B-Bone is computed",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_handle_type_end_get, EditBone_bbone_handle_type_end_set, NULL, NULL, NULL, rna_EditBone_bbone_handle_type_end_items, 4, 0
};

PointerPropertyRNA rna_EditBone_bbone_custom_handle_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_end, (PropertyRNA *)&rna_EditBone_bbone_handle_type_end,
	-1, "bbone_custom_handle_end", 8388737, 3, 0, 0, 0, "B-Bone End Handle",
	"Bone that serves as the end handle for the B-Bone curve",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_custom_handle_end_get, EditBone_bbone_custom_handle_end_set, NULL, NULL,&RNA_EditBone
};

static bool rna_EditBone_bbone_handle_use_scale_end_default[3] = {
	0,
	0,
	0
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_end, (PropertyRNA *)&rna_EditBone_bbone_custom_handle_end,
	-1, "bbone_handle_use_scale_end", 3, 1, 0, 0, 0, "End Handle Scale",
	"Multiply B-Bone Scale Out channels by the local scale values of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_bbone_handle_use_scale_end_get, EditBone_bbone_handle_use_scale_end_set, NULL, NULL, NULL, NULL, 0, rna_EditBone_bbone_handle_use_scale_end_default
};

BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_end = {
	{(PropertyRNA *)&rna_EditBone_bbone_rollin, (PropertyRNA *)&rna_EditBone_bbone_handle_use_scale_end,
	-1, "bbone_handle_use_ease_end", 3, 1, 0, 0, 0, "End Handle Ease",
	"Multiply the B-Bone Ease Out channel by the local Y scale value of the end handle. This is done after the Scale Easing option and isn\'t affected by it",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_handle_use_ease_end_get, EditBone_bbone_handle_use_ease_end_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_EditBone_bbone_rollin = {
	{(PropertyRNA *)&rna_EditBone_bbone_rollout, (PropertyRNA *)&rna_EditBone_bbone_handle_use_ease_end,
	-1, "bbone_rollin", 3, 0, 0, 0, 0, "Roll In",
	"Roll offset for the start of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_rollin_get, EditBone_bbone_rollin_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_rollout = {
	{(PropertyRNA *)&rna_EditBone_use_endroll_as_inroll, (PropertyRNA *)&rna_EditBone_bbone_rollin,
	-1, "bbone_rollout", 3, 0, 0, 0, 0, "Roll Out",
	"Roll offset for the end of the B-Bone, adjusts twist",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_rollout_get, EditBone_bbone_rollout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, 0.0f, NULL
};

BoolPropertyRNA rna_EditBone_use_endroll_as_inroll = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveinx, (PropertyRNA *)&rna_EditBone_bbone_rollout,
	-1, "use_endroll_as_inroll", 1, 0, 0, 0, 0, "Inherit End Roll",
	"Add Roll Out of the Start Handle bone to the Roll In value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_dependency_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_endroll_as_inroll_get, EditBone_use_endroll_as_inroll_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_EditBone_bbone_curveinx = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveinz, (PropertyRNA *)&rna_EditBone_use_endroll_as_inroll,
	-1, "bbone_curveinx", 3, 0, 0, 0, 0, "In X",
	"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_curveinx_get, EditBone_bbone_curveinx_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_curveinz = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveoutx, (PropertyRNA *)&rna_EditBone_bbone_curveinx,
	-1, "bbone_curveinz", 3, 0, 0, 0, 0, "In Z",
	"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_curveinz_get, EditBone_bbone_curveinz_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_curveoutx = {
	{(PropertyRNA *)&rna_EditBone_bbone_curveoutz, (PropertyRNA *)&rna_EditBone_bbone_curveinz,
	-1, "bbone_curveoutx", 3, 0, 0, 0, 0, "Out X",
	"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_curveoutx_get, EditBone_bbone_curveoutx_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_curveoutz = {
	{(PropertyRNA *)&rna_EditBone_bbone_easein, (PropertyRNA *)&rna_EditBone_bbone_curveoutx,
	-1, "bbone_curveoutz", 3, 0, 0, 0, 0, "Out Z",
	"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_curveoutz_get, EditBone_bbone_curveoutz_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_easein = {
	{(PropertyRNA *)&rna_EditBone_bbone_easeout, (PropertyRNA *)&rna_EditBone_bbone_curveoutz,
	-1, "bbone_easein", 3, 0, 0, 0, 0, "Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_easein_get, EditBone_bbone_easein_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_easeout = {
	{(PropertyRNA *)&rna_EditBone_use_scale_easing, (PropertyRNA *)&rna_EditBone_bbone_easein,
	-1, "bbone_easeout", 3, 0, 0, 0, 0, "Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_bbone_easeout_get, EditBone_bbone_easeout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

BoolPropertyRNA rna_EditBone_use_scale_easing = {
	{(PropertyRNA *)&rna_EditBone_bbone_scalein, (PropertyRNA *)&rna_EditBone_bbone_easeout,
	-1, "use_scale_easing", 3, 0, 0, 0, 0, "Scale Easing",
	"Multiply the final easing values by the Scale In/Out Y factors",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_use_scale_easing_get, EditBone_use_scale_easing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_EditBone_bbone_scalein_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_EditBone_bbone_scalein = {
	{(PropertyRNA *)&rna_EditBone_bbone_scaleout, (PropertyRNA *)&rna_EditBone_use_scale_easing,
	-1, "bbone_scalein", 67108867, 0, 0, 0, 0, "Scale In",
	"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_bbone_scalein_get, EditBone_bbone_scalein_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_bbone_scalein_default
};

static float rna_EditBone_bbone_scaleout_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_EditBone_bbone_scaleout = {
	{(PropertyRNA *)&rna_EditBone_hide, (PropertyRNA *)&rna_EditBone_bbone_scalein,
	-1, "bbone_scaleout", 67108867, 0, 0, 0, 0, "Scale Out",
	"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_bbone_scaleout_get, EditBone_bbone_scaleout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_bbone_scaleout_default
};

BoolPropertyRNA rna_EditBone_hide = {
	{(PropertyRNA *)&rna_EditBone_lock, (PropertyRNA *)&rna_EditBone_bbone_scaleout,
	-1, "hide", 1, 0, 0, 0, 0, "Hide",
	"Bone is not visible when in Edit Mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_hide_get, EditBone_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_lock = {
	{(PropertyRNA *)&rna_EditBone_select, (PropertyRNA *)&rna_EditBone_hide,
	-1, "lock", 1, 0, 0, 0, 0, "Lock",
	"Bone is not able to be transformed when in Edit Mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_lock_get, EditBone_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_select = {
	{(PropertyRNA *)&rna_EditBone_select_head, (PropertyRNA *)&rna_EditBone_lock,
	-1, "select", 1, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_select_get, EditBone_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_select_head = {
	{(PropertyRNA *)&rna_EditBone_select_tail, (PropertyRNA *)&rna_EditBone_select,
	-1, "select_head", 1, 0, 0, 0, 0, "Head Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_select_head_get, EditBone_select_head_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_EditBone_select_tail = {
	{(PropertyRNA *)&rna_EditBone_matrix, (PropertyRNA *)&rna_EditBone_select_head,
	-1, "select_tail", 1, 0, 0, 0, 0, "Tail Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	EditBone_select_tail_get, EditBone_select_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_EditBone_matrix_default[16] = {
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

FloatPropertyRNA rna_EditBone_matrix = {
	{NULL, (PropertyRNA *)&rna_EditBone_select_tail,
	-1, "matrix", 8388611, 0, 0, 0, 0, "Edit Bone Matrix",
	"Matrix combining location and rotation of the bone (head position, direction and roll), in armature space (does not include/support bone\'s length/size)",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, EditBone_matrix_get, EditBone_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_EditBone_matrix_default
};

static float rna_EditBone_align_roll_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_align_roll_vector = {
	{NULL, NULL,
	-1, "vector", 3, 0, 1, 0, 0, "Vector",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_align_roll_vector_default
};

FunctionRNA rna_EditBone_align_roll_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_EditBone_align_roll_vector, (PropertyRNA *)&rna_EditBone_align_roll_vector}},
	"align_roll", 0, "Align the bone to a local-space roll so the Z axis points in the direction of the vector given",
	EditBone_align_roll_call,
	NULL
};

StructRNA RNA_EditBone = {
	{(ContainerRNA *)&RNA_Attribute, (ContainerRNA *)&RNA_Bone,
	NULL,
	{(PropertyRNA *)&rna_EditBone_rna_properties, (PropertyRNA *)&rna_EditBone_matrix}},
	"EditBone", NULL, NULL, 516, NULL, "Edit Bone",
	"Edit mode bone in an armature data-block",
	"*", 174,
	(PropertyRNA *)&rna_EditBone_name, (PropertyRNA *)&rna_EditBone_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_EditBone_idprops,
	{(FunctionRNA *)&rna_EditBone_align_roll_func, (FunctionRNA *)&rna_EditBone_align_roll_func}
};

