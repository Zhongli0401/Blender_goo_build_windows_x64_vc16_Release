
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

#include "rna_boid.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_BoidRule_rna_properties;
PointerPropertyRNA rna_BoidRule_rna_type;
StringPropertyRNA rna_BoidRule_name;
EnumPropertyRNA rna_BoidRule_type;
BoolPropertyRNA rna_BoidRule_use_in_air;
BoolPropertyRNA rna_BoidRule_use_on_land;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

PointerPropertyRNA rna_BoidRuleGoal_object;
BoolPropertyRNA rna_BoidRuleGoal_use_predict;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

PointerPropertyRNA rna_BoidRuleAvoid_object;
BoolPropertyRNA rna_BoidRuleAvoid_use_predict;
FloatPropertyRNA rna_BoidRuleAvoid_fear_factor;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid;
BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision;
FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

PointerPropertyRNA rna_BoidRuleFollowLeader_object;
FloatPropertyRNA rna_BoidRuleFollowLeader_distance;
IntPropertyRNA rna_BoidRuleFollowLeader_queue_count;
BoolPropertyRNA rna_BoidRuleFollowLeader_use_line;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

FloatPropertyRNA rna_BoidRuleAverageSpeed_wander;
FloatPropertyRNA rna_BoidRuleAverageSpeed_level;
FloatPropertyRNA rna_BoidRuleAverageSpeed_speed;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

FloatPropertyRNA rna_BoidRuleFight_distance;
FloatPropertyRNA rna_BoidRuleFight_flee_distance;


CollectionPropertyRNA rna_BoidState_rna_properties;
PointerPropertyRNA rna_BoidState_rna_type;
StringPropertyRNA rna_BoidState_name;
EnumPropertyRNA rna_BoidState_ruleset_type;
CollectionPropertyRNA rna_BoidState_rules;
PointerPropertyRNA rna_BoidState_active_boid_rule;
IntPropertyRNA rna_BoidState_active_boid_rule_index;
FloatPropertyRNA rna_BoidState_rule_fuzzy;
FloatPropertyRNA rna_BoidState_volume;
FloatPropertyRNA rna_BoidState_falloff;


CollectionPropertyRNA rna_BoidSettings_rna_properties;
PointerPropertyRNA rna_BoidSettings_rna_type;
FloatPropertyRNA rna_BoidSettings_land_smooth;
FloatPropertyRNA rna_BoidSettings_bank;
FloatPropertyRNA rna_BoidSettings_pitch;
FloatPropertyRNA rna_BoidSettings_height;
CollectionPropertyRNA rna_BoidSettings_states;
PointerPropertyRNA rna_BoidSettings_active_boid_state;
IntPropertyRNA rna_BoidSettings_active_boid_state_index;
FloatPropertyRNA rna_BoidSettings_health;
FloatPropertyRNA rna_BoidSettings_strength;
FloatPropertyRNA rna_BoidSettings_aggression;
FloatPropertyRNA rna_BoidSettings_accuracy;
FloatPropertyRNA rna_BoidSettings_range;
FloatPropertyRNA rna_BoidSettings_air_speed_min;
FloatPropertyRNA rna_BoidSettings_air_speed_max;
FloatPropertyRNA rna_BoidSettings_air_acc_max;
FloatPropertyRNA rna_BoidSettings_air_ave_max;
FloatPropertyRNA rna_BoidSettings_air_personal_space;
FloatPropertyRNA rna_BoidSettings_land_jump_speed;
FloatPropertyRNA rna_BoidSettings_land_speed_max;
FloatPropertyRNA rna_BoidSettings_land_acc_max;
FloatPropertyRNA rna_BoidSettings_land_ave_max;
FloatPropertyRNA rna_BoidSettings_land_personal_space;
FloatPropertyRNA rna_BoidSettings_land_stick_force;
BoolPropertyRNA rna_BoidSettings_use_flight;
BoolPropertyRNA rna_BoidSettings_use_land;
BoolPropertyRNA rna_BoidSettings_use_climb;

static PointerRNA BoidRule_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BoidRule_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidRule_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidRule_rna_properties_get(iter);
    }
}

void BoidRule_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoidRule_rna_properties_get(iter);
    }
}

void BoidRule_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoidRule_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoidRule_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void BoidRule_name_get(PointerRNA *ptr, char *value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 32);
}

int BoidRule_name_length(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return strlen(data->name);
}

void BoidRule_name_set(PointerRNA *ptr, const char *value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 32);
}

int BoidRule_type_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (int)(data->type);
}

bool BoidRule_use_in_air_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void BoidRule_use_in_air_set(PointerRNA *ptr, bool value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool BoidRule_use_on_land_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (((data->flag) & 8) != 0);
}

void BoidRule_use_on_land_set(PointerRNA *ptr, bool value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    if (value) { data->flag |= 8; }
    else { data->flag &= ~8; }
}

PointerRNA BoidRuleGoal_object_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleGoal_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->ob = value.data;
}

bool BoidRuleGoal_use_predict_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (((data->options) & 1) != 0);
}

void BoidRuleGoal_use_predict_set(PointerRNA *ptr, bool value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

PointerRNA BoidRuleAvoid_object_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleAvoid_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->ob = value.data;
}

bool BoidRuleAvoid_use_predict_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (((data->options) & 1) != 0);
}

void BoidRuleAvoid_use_predict_set(PointerRNA *ptr, bool value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

float BoidRuleAvoid_fear_factor_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (float)(data->fear_factor);
}

void BoidRuleAvoid_fear_factor_set(PointerRNA *ptr, float value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    data->fear_factor = CLAMPIS(value, 0.0f, 100.0f);
}

bool BoidRuleAvoidCollision_use_avoid_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (((data->options) & 1) != 0);
}

void BoidRuleAvoidCollision_use_avoid_set(PointerRNA *ptr, bool value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

bool BoidRuleAvoidCollision_use_avoid_collision_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (((data->options) & 2) != 0);
}

void BoidRuleAvoidCollision_use_avoid_collision_set(PointerRNA *ptr, bool value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    if (value) { data->options |= 2; }
    else { data->options &= ~2; }
}

float BoidRuleAvoidCollision_look_ahead_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (float)(data->look_ahead);
}

void BoidRuleAvoidCollision_look_ahead_set(PointerRNA *ptr, float value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    data->look_ahead = CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA BoidRuleFollowLeader_object_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleFollowLeader_object_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    data->ob = value.data;
}

float BoidRuleFollowLeader_distance_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (float)(data->distance);
}

void BoidRuleFollowLeader_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    data->distance = CLAMPIS(value, 0.0f, 100.0f);
}

int BoidRuleFollowLeader_queue_count_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (int)(data->queue_size);
}

void BoidRuleFollowLeader_queue_count_set(PointerRNA *ptr, int value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    data->queue_size = CLAMPIS(value, 0, 100);
}

bool BoidRuleFollowLeader_use_line_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (((data->options) & 1) != 0);
}

void BoidRuleFollowLeader_use_line_set(PointerRNA *ptr, bool value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

float BoidRuleAverageSpeed_wander_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->wander);
}

void BoidRuleAverageSpeed_wander_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    data->wander = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_level_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->level);
}

void BoidRuleAverageSpeed_level_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    data->level = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_speed_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->speed);
}

void BoidRuleAverageSpeed_speed_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    data->speed = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleFight_distance_get(PointerRNA *ptr)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    return (float)(data->distance);
}

void BoidRuleFight_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    data->distance = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidRuleFight_flee_distance_get(PointerRNA *ptr)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    return (float)(data->flee_distance);
}

void BoidRuleFight_flee_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    data->flee_distance = CLAMPIS(value, 0.0f, 100.0f);
}

static PointerRNA BoidState_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BoidState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidState_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidState_rna_properties_get(iter);
    }
}

void BoidState_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoidState_rna_properties_get(iter);
    }
}

void BoidState_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoidState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoidState_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void BoidState_name_get(PointerRNA *ptr, char *value)
{
    BoidState *data = (BoidState *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 32);
}

int BoidState_name_length(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return strlen(data->name);
}

void BoidState_name_set(PointerRNA *ptr, const char *value)
{
    BoidState *data = (BoidState *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 32);
}

int BoidState_ruleset_type_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (int)(data->ruleset_type);
}

void BoidState_ruleset_type_set(PointerRNA *ptr, int value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->ruleset_type = value;
}

static PointerRNA BoidState_rules_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidRule, rna_iterator_listbase_get(iter));
}

void BoidState_rules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidState_rules;

    rna_iterator_listbase_begin(iter, &data->rules, NULL);

    if (iter->valid) {
        iter->ptr = BoidState_rules_get(iter);
    }
}

void BoidState_rules_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BoidState_rules_get(iter);
    }
}

void BoidState_rules_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoidState_rules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    BoidState_rules_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoidState_rules_get(&iter); }
    }

    BoidState_rules_end(&iter);

    return found;
}

int BoidState_rules_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int BoidRule_name_length(PointerRNA *);
    extern void BoidRule_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoidState_rules_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoidRule_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoidRule_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                BoidRule_name_get(&iter.ptr, name);
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
        BoidState_rules_next(&iter);
    }
    BoidState_rules_end(&iter);

    return found;
}

PointerRNA BoidState_active_boid_rule_get(PointerRNA *ptr)
{
    return rna_BoidState_active_boid_rule_get(ptr);
}

int BoidState_active_boid_rule_index_get(PointerRNA *ptr)
{
    return rna_BoidState_active_boid_rule_index_get(ptr);
}

void BoidState_active_boid_rule_index_set(PointerRNA *ptr, int value)
{
    rna_BoidState_active_boid_rule_index_set(ptr, value);
}

float BoidState_rule_fuzzy_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->rule_fuzziness);
}

void BoidState_rule_fuzzy_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->rule_fuzziness = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidState_volume_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->volume);
}

void BoidState_volume_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->volume = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidState_falloff_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->falloff);
}

void BoidState_falloff_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->falloff = CLAMPIS(value, 0.0f, 10.0f);
}

static PointerRNA BoidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void BoidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidSettings_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidSettings_rna_properties_get(iter);
    }
}

void BoidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = BoidSettings_rna_properties_get(iter);
    }
}

void BoidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoidSettings_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float BoidSettings_land_smooth_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->landing_smoothness);
}

void BoidSettings_land_smooth_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->landing_smoothness = CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_bank_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->banking);
}

void BoidSettings_bank_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->banking = CLAMPIS(value, 0.0f, 2.0f);
}

float BoidSettings_pitch_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->pitch);
}

void BoidSettings_pitch_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->pitch = CLAMPIS(value, 0.0f, 2.0f);
}

float BoidSettings_height_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->height);
}

void BoidSettings_height_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->height = CLAMPIS(value, 0.0f, 2.0f);
}

static PointerRNA BoidSettings_states_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidState, rna_iterator_listbase_get(iter));
}

void BoidSettings_states_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_BoidSettings_states;

    rna_iterator_listbase_begin(iter, &data->states, NULL);

    if (iter->valid) {
        iter->ptr = BoidSettings_states_get(iter);
    }
}

void BoidSettings_states_next(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_next(iter);

    if (iter->valid) {
        iter->ptr = BoidSettings_states_get(iter);
    }
}

void BoidSettings_states_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int BoidSettings_states_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    BoidSettings_states_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoidSettings_states_get(&iter); }
    }

    BoidSettings_states_end(&iter);

    return found;
}

int BoidSettings_states_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int BoidState_name_length(PointerRNA *);
    extern void BoidState_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoidSettings_states_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoidState_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoidState_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                BoidState_name_get(&iter.ptr, name);
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
        BoidSettings_states_next(&iter);
    }
    BoidSettings_states_end(&iter);

    return found;
}

PointerRNA BoidSettings_active_boid_state_get(PointerRNA *ptr)
{
    return rna_BoidSettings_active_boid_state_get(ptr);
}

int BoidSettings_active_boid_state_index_get(PointerRNA *ptr)
{
    return rna_BoidSettings_active_boid_state_index_get(ptr);
}

void BoidSettings_active_boid_state_index_set(PointerRNA *ptr, int value)
{
    rna_BoidSettings_active_boid_state_index_set(ptr, value);
}

float BoidSettings_health_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->health);
}

void BoidSettings_health_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->health = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_strength_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->strength);
}

void BoidSettings_strength_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->strength = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_aggression_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->aggression);
}

void BoidSettings_aggression_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->aggression = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_accuracy_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->accuracy);
}

void BoidSettings_accuracy_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->accuracy = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_range_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->range);
}

void BoidSettings_range_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->range = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_air_speed_min_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_min_speed);
}

void BoidSettings_air_speed_min_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_min_speed = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_speed_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_speed);
}

void BoidSettings_air_speed_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_max_speed = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_air_acc_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_acc);
}

void BoidSettings_air_acc_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_max_acc = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_ave_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_ave);
}

void BoidSettings_air_ave_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_max_ave = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_personal_space_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_personal_space);
}

void BoidSettings_air_personal_space_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_personal_space = CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_land_jump_speed_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_jump_speed);
}

void BoidSettings_land_jump_speed_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_jump_speed = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_land_speed_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_speed);
}

void BoidSettings_land_speed_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_max_speed = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_land_acc_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_acc);
}

void BoidSettings_land_acc_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_max_acc = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_land_ave_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_ave);
}

void BoidSettings_land_ave_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_max_ave = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_land_personal_space_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_personal_space);
}

void BoidSettings_land_personal_space_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_personal_space = CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_land_stick_force_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_stick_force);
}

void BoidSettings_land_stick_force_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_stick_force = CLAMPIS(value, 0.0f, 1000.0f);
}

bool BoidSettings_use_flight_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (((data->options) & 1) != 0);
}

void BoidSettings_use_flight_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options |= 1; }
    else { data->options &= ~1; }
}

bool BoidSettings_use_land_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (((data->options) & 2) != 0);
}

void BoidSettings_use_land_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options |= 2; }
    else { data->options &= ~2; }
}

bool BoidSettings_use_climb_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (((data->options) & 4) != 0);
}

void BoidSettings_use_climb_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options |= 4; }
    else { data->options &= ~4; }
}










/* Boid Rule */
CollectionPropertyRNA rna_BoidRule_rna_properties = {
	{(PropertyRNA *)&rna_BoidRule_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRule_rna_properties_begin, BoidRule_rna_properties_next, BoidRule_rna_properties_end, BoidRule_rna_properties_get, NULL, NULL, BoidRule_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoidRule_rna_type = {
	{(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRule_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoidRule_name = {
	{(PropertyRNA *)&rna_BoidRule_type, (PropertyRNA *)&rna_BoidRule_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Boid rule name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRule_name_get, BoidRule_name_length, BoidRule_name_set, NULL, NULL, NULL, NULL, 0, 32, ""
};

EnumPropertyRNA rna_BoidRule_type = {
	{(PropertyRNA *)&rna_BoidRule_use_in_air, (PropertyRNA *)&rna_BoidRule_name,
	-1, "type", 2, 0, 0, 4, 0, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRule, type), 0, NULL},
	BoidRule_type_get, NULL, NULL, NULL, NULL, rna_enum_boidrule_type_items, 8, 1
};

BoolPropertyRNA rna_BoidRule_use_in_air = {
	{(PropertyRNA *)&rna_BoidRule_use_on_land, (PropertyRNA *)&rna_BoidRule_type,
	-1, "use_in_air", 3, 0, 0, 0, 0, "In Air",
	"Use rule when boid is flying",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRule_use_in_air_get, BoidRule_use_in_air_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidRule_use_on_land = {
	{NULL, (PropertyRNA *)&rna_BoidRule_use_in_air,
	-1, "use_on_land", 3, 0, 0, 0, 0, "On Land",
	"Use rule when boid is on land",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRule_use_on_land_get, BoidRule_use_on_land_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRule = {
	{(ContainerRNA *)&RNA_BoidRuleGoal, (ContainerRNA *)&RNA_AssetHandle,
	NULL,
	{(PropertyRNA *)&rna_BoidRule_rna_properties, (PropertyRNA *)&rna_BoidRule_use_on_land}},
	"BoidRule", NULL, NULL, 516, NULL, "Boid Rule",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	NULL,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Goal */
PointerPropertyRNA rna_BoidRuleGoal_object = {
	{(PropertyRNA *)&rna_BoidRuleGoal_use_predict, NULL,
	-1, "object", 8388737, 0, 0, 0, 0, "Object",
	"Goal object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleGoal_object_get, BoidRuleGoal_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_BoidRuleGoal_use_predict = {
	{NULL, (PropertyRNA *)&rna_BoidRuleGoal_object,
	-1, "use_predict", 3, 0, 0, 0, 0, "Predict",
	"Predict target movement",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleGoal_use_predict_get, BoidRuleGoal_use_predict_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRuleGoal = {
	{(ContainerRNA *)&RNA_BoidRuleAvoid, (ContainerRNA *)&RNA_BoidRule,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleGoal_object, (PropertyRNA *)&rna_BoidRuleGoal_use_predict}},
	"BoidRuleGoal", NULL, NULL, 516, NULL, "Goal",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Avoid */
PointerPropertyRNA rna_BoidRuleAvoid_object = {
	{(PropertyRNA *)&rna_BoidRuleAvoid_use_predict, NULL,
	-1, "object", 8388737, 0, 0, 0, 0, "Object",
	"Object to avoid",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleAvoid_object_get, BoidRuleAvoid_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_BoidRuleAvoid_use_predict = {
	{(PropertyRNA *)&rna_BoidRuleAvoid_fear_factor, (PropertyRNA *)&rna_BoidRuleAvoid_object,
	-1, "use_predict", 3, 0, 0, 0, 0, "Predict",
	"Predict target movement",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleAvoid_use_predict_get, BoidRuleAvoid_use_predict_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BoidRuleAvoid_fear_factor = {
	{NULL, (PropertyRNA *)&rna_BoidRuleAvoid_use_predict,
	-1, "fear_factor", 3, 0, 0, 4, 0, "Fear Factor",
	"Avoid object if danger from it is above this threshold",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleGoalAvoid, fear_factor), 5, NULL},
	BoidRuleAvoid_fear_factor_get, BoidRuleAvoid_fear_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAvoid = {
	{(ContainerRNA *)&RNA_BoidRuleAvoidCollision, (ContainerRNA *)&RNA_BoidRuleGoal,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleAvoid_object, (PropertyRNA *)&rna_BoidRuleAvoid_fear_factor}},
	"BoidRuleAvoid", NULL, NULL, 516, NULL, "Avoid",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Avoid Collision */
BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid = {
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid_collision, NULL,
	-1, "use_avoid", 3, 0, 0, 0, 0, "Boids",
	"Avoid collision with other boids",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleAvoidCollision_use_avoid_get, BoidRuleAvoidCollision_use_avoid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision = {
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_look_ahead, (PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid,
	-1, "use_avoid_collision", 3, 0, 0, 0, 0, "Deflectors",
	"Avoid collision with deflector objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleAvoidCollision_use_avoid_collision_get, BoidRuleAvoidCollision_use_avoid_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead = {
	{NULL, (PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid_collision,
	-1, "look_ahead", 3, 0, 0, 4, 0, "Look Ahead",
	"Time to look ahead in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAvoidCollision, look_ahead), 5, NULL},
	BoidRuleAvoidCollision_look_ahead_get, BoidRuleAvoidCollision_look_ahead_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAvoidCollision = {
	{(ContainerRNA *)&RNA_BoidRuleFollowLeader, (ContainerRNA *)&RNA_BoidRuleAvoid,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid, (PropertyRNA *)&rna_BoidRuleAvoidCollision_look_ahead}},
	"BoidRuleAvoidCollision", NULL, NULL, 516, NULL, "Avoid Collision",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Follow Leader */
PointerPropertyRNA rna_BoidRuleFollowLeader_object = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_distance, NULL,
	-1, "object", 8388737, 0, 0, 0, 0, "Object",
	"Follow this object instead of a boid",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleFollowLeader_object_get, BoidRuleFollowLeader_object_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_BoidRuleFollowLeader_distance = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_queue_count, (PropertyRNA *)&rna_BoidRuleFollowLeader_object,
	-1, "distance", 3, 0, 0, 4, 0, "Distance",
	"Distance behind leader to follow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFollowLeader, distance), 5, NULL},
	BoidRuleFollowLeader_distance_get, BoidRuleFollowLeader_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_BoidRuleFollowLeader_queue_count = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_use_line, (PropertyRNA *)&rna_BoidRuleFollowLeader_distance,
	-1, "queue_count", 3, 0, 0, 4, 0, "Queue Size",
	"How many boids in a line",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFollowLeader, queue_size), 0, NULL},
	BoidRuleFollowLeader_queue_count_get, BoidRuleFollowLeader_queue_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 100, 0, 100, 1, 0, NULL
};

BoolPropertyRNA rna_BoidRuleFollowLeader_use_line = {
	{NULL, (PropertyRNA *)&rna_BoidRuleFollowLeader_queue_count,
	-1, "use_line", 3, 0, 0, 0, 0, "Line",
	"Follow leader in a line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidRuleFollowLeader_use_line_get, BoidRuleFollowLeader_use_line_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRuleFollowLeader = {
	{(ContainerRNA *)&RNA_BoidRuleAverageSpeed, (ContainerRNA *)&RNA_BoidRuleAvoidCollision,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_object, (PropertyRNA *)&rna_BoidRuleFollowLeader_use_line}},
	"BoidRuleFollowLeader", NULL, NULL, 516, NULL, "Follow Leader",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Average Speed */
FloatPropertyRNA rna_BoidRuleAverageSpeed_wander = {
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_level, NULL,
	-1, "wander", 3, 0, 0, 4, 0, "Wander",
	"How fast velocity\'s direction is randomized",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAverageSpeed, wander), 5, NULL},
	BoidRuleAverageSpeed_wander_get, BoidRuleAverageSpeed_wander_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_level = {
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_speed, (PropertyRNA *)&rna_BoidRuleAverageSpeed_wander,
	-1, "level", 3, 0, 0, 4, 0, "Level",
	"How much velocity\'s z-component is kept constant",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAverageSpeed, level), 5, NULL},
	BoidRuleAverageSpeed_level_get, BoidRuleAverageSpeed_level_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_speed = {
	{NULL, (PropertyRNA *)&rna_BoidRuleAverageSpeed_level,
	-1, "speed", 3, 0, 0, 4, 0, "Speed",
	"Percentage of maximum speed",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleAverageSpeed, speed), 5, NULL},
	BoidRuleAverageSpeed_speed_get, BoidRuleAverageSpeed_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAverageSpeed = {
	{(ContainerRNA *)&RNA_BoidRuleFight, (ContainerRNA *)&RNA_BoidRuleFollowLeader,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_wander, (PropertyRNA *)&rna_BoidRuleAverageSpeed_speed}},
	"BoidRuleAverageSpeed", NULL, NULL, 516, NULL, "Average Speed",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Fight */
FloatPropertyRNA rna_BoidRuleFight_distance = {
	{(PropertyRNA *)&rna_BoidRuleFight_flee_distance, NULL,
	-1, "distance", 3, 0, 0, 4, 0, "Fight Distance",
	"Attack boids at max this distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFight, distance), 5, NULL},
	BoidRuleFight_distance_get, BoidRuleFight_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleFight_flee_distance = {
	{NULL, (PropertyRNA *)&rna_BoidRuleFight_distance,
	-1, "flee_distance", 3, 0, 0, 4, 0, "Flee Distance",
	"Flee to this distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidRuleFight, flee_distance), 5, NULL},
	BoidRuleFight_flee_distance_get, BoidRuleFight_flee_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleFight = {
	{(ContainerRNA *)&RNA_BoidState, (ContainerRNA *)&RNA_BoidRuleAverageSpeed,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleFight_distance, (PropertyRNA *)&rna_BoidRuleFight_flee_distance}},
	"BoidRuleFight", NULL, NULL, 516, NULL, "Fight",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boid State */
CollectionPropertyRNA rna_BoidState_rna_properties = {
	{(PropertyRNA *)&rna_BoidState_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidState_rna_properties_begin, BoidState_rna_properties_next, BoidState_rna_properties_end, BoidState_rna_properties_get, NULL, NULL, BoidState_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoidState_rna_type = {
	{(PropertyRNA *)&rna_BoidState_name, (PropertyRNA *)&rna_BoidState_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidState_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoidState_name = {
	{(PropertyRNA *)&rna_BoidState_ruleset_type, (PropertyRNA *)&rna_BoidState_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Boid state name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidState_name_get, BoidState_name_length, BoidState_name_set, NULL, NULL, NULL, NULL, 0, 32, ""
};

static const EnumPropertyItem rna_BoidState_ruleset_type_items[4] = {
	{0, "FUZZY", 0, "Fuzzy", "Rules are gone through top to bottom (only the first rule which effect is above fuzziness threshold is evaluated)"},
	{1, "RANDOM", 0, "Random", "A random rule is selected for each boid"},
	{2, "AVERAGE", 0, "Average", "All rules are averaged"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BoidState_ruleset_type = {
	{(PropertyRNA *)&rna_BoidState_rules, (PropertyRNA *)&rna_BoidState_name,
	-1, "ruleset_type", 3, 0, 0, 4, 0, "Rule Evaluation",
	"How the rules in the list are evaluated",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, ruleset_type), 0, NULL},
	BoidState_ruleset_type_get, BoidState_ruleset_type_set, NULL, NULL, NULL, rna_BoidState_ruleset_type_items, 3, 0
};

CollectionPropertyRNA rna_BoidState_rules = {
	{(PropertyRNA *)&rna_BoidState_active_boid_rule, (PropertyRNA *)&rna_BoidState_ruleset_type,
	-1, "rules", 0, 0, 0, 0, 0, "Boid Rules",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidState_rules_begin, BoidState_rules_next, BoidState_rules_end, BoidState_rules_get, NULL, BoidState_rules_lookup_int, BoidState_rules_lookup_string, NULL, &RNA_BoidRule
};

PointerPropertyRNA rna_BoidState_active_boid_rule = {
	{(PropertyRNA *)&rna_BoidState_active_boid_rule_index, (PropertyRNA *)&rna_BoidState_rules,
	-1, "active_boid_rule", 8388608, 0, 0, 0, 0, "Active Boid Rule",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidState_active_boid_rule_get, NULL, NULL, NULL,&RNA_BoidRule
};

IntPropertyRNA rna_BoidState_active_boid_rule_index = {
	{(PropertyRNA *)&rna_BoidState_rule_fuzzy, (PropertyRNA *)&rna_BoidState_active_boid_rule,
	-1, "active_boid_rule_index", 3, 0, 0, 0, 0, "Active Boid Rule Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidState_active_boid_rule_index_get, BoidState_active_boid_rule_index_set, NULL, NULL, rna_BoidState_active_boid_rule_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_BoidState_rule_fuzzy = {
	{(PropertyRNA *)&rna_BoidState_volume, (PropertyRNA *)&rna_BoidState_active_boid_rule_index,
	-1, "rule_fuzzy", 3, 0, 0, 4, 0, "Rule Fuzziness",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, rule_fuzziness), 5, NULL},
	BoidState_rule_fuzzy_get, BoidState_rule_fuzzy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidState_volume = {
	{(PropertyRNA *)&rna_BoidState_falloff, (PropertyRNA *)&rna_BoidState_rule_fuzzy,
	-1, "volume", 3, 0, 0, 4, 0, "Volume",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, volume), 5, NULL},
	BoidState_volume_get, BoidState_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidState_falloff = {
	{NULL, (PropertyRNA *)&rna_BoidState_volume,
	-1, "falloff", 3, 0, 0, 4, 0, "Falloff",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidState, falloff), 5, NULL},
	BoidState_falloff_get, BoidState_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidState = {
	{(ContainerRNA *)&RNA_BoidSettings, (ContainerRNA *)&RNA_BoidRuleFight,
	NULL,
	{(PropertyRNA *)&rna_BoidState_rna_properties, (PropertyRNA *)&rna_BoidState_falloff}},
	"BoidState", NULL, NULL, 516, NULL, "Boid State",
	"Boid state for boid physics",
	"*", 17,
	(PropertyRNA *)&rna_BoidState_name, (PropertyRNA *)&rna_BoidState_rna_properties,
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

/* Boid Settings */
CollectionPropertyRNA rna_BoidSettings_rna_properties = {
	{(PropertyRNA *)&rna_BoidSettings_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_rna_properties_begin, BoidSettings_rna_properties_next, BoidSettings_rna_properties_end, BoidSettings_rna_properties_get, NULL, NULL, BoidSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoidSettings_rna_type = {
	{(PropertyRNA *)&rna_BoidSettings_land_smooth, (PropertyRNA *)&rna_BoidSettings_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_BoidSettings_land_smooth = {
	{(PropertyRNA *)&rna_BoidSettings_bank, (PropertyRNA *)&rna_BoidSettings_rna_type,
	-1, "land_smooth", 3, 0, 0, 4, 0, "Landing Smoothness",
	"How smoothly the boids land",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, landing_smoothness), 5, NULL},
	BoidSettings_land_smooth_get, BoidSettings_land_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_bank = {
	{(PropertyRNA *)&rna_BoidSettings_pitch, (PropertyRNA *)&rna_BoidSettings_land_smooth,
	-1, "bank", 3, 0, 0, 4, 0, "Banking",
	"Amount of rotation around velocity vector on turns",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, banking), 5, NULL},
	BoidSettings_bank_get, BoidSettings_bank_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_pitch = {
	{(PropertyRNA *)&rna_BoidSettings_height, (PropertyRNA *)&rna_BoidSettings_bank,
	-1, "pitch", 3, 0, 0, 4, 0, "Pitch",
	"Amount of rotation around side vector",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, pitch), 5, NULL},
	BoidSettings_pitch_get, BoidSettings_pitch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_height = {
	{(PropertyRNA *)&rna_BoidSettings_states, (PropertyRNA *)&rna_BoidSettings_pitch,
	-1, "height", 3, 0, 0, 4, 0, "Height",
	"Boid height relative to particle size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, height), 5, NULL},
	BoidSettings_height_get, BoidSettings_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_BoidSettings_states = {
	{(PropertyRNA *)&rna_BoidSettings_active_boid_state, (PropertyRNA *)&rna_BoidSettings_height,
	-1, "states", 0, 0, 0, 0, 0, "Boid States",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_states_begin, BoidSettings_states_next, BoidSettings_states_end, BoidSettings_states_get, NULL, BoidSettings_states_lookup_int, BoidSettings_states_lookup_string, NULL, &RNA_BoidState
};

PointerPropertyRNA rna_BoidSettings_active_boid_state = {
	{(PropertyRNA *)&rna_BoidSettings_active_boid_state_index, (PropertyRNA *)&rna_BoidSettings_states,
	-1, "active_boid_state", 8388608, 0, 0, 0, 0, "Active Boid Rule",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_active_boid_state_get, NULL, NULL, NULL,&RNA_BoidRule
};

IntPropertyRNA rna_BoidSettings_active_boid_state_index = {
	{(PropertyRNA *)&rna_BoidSettings_health, (PropertyRNA *)&rna_BoidSettings_active_boid_state,
	-1, "active_boid_state_index", 3, 0, 0, 0, 0, "Active Boid State Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_active_boid_state_index_get, BoidSettings_active_boid_state_index_set, NULL, NULL, rna_BoidSettings_active_boid_state_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_BoidSettings_health = {
	{(PropertyRNA *)&rna_BoidSettings_strength, (PropertyRNA *)&rna_BoidSettings_active_boid_state_index,
	-1, "health", 3, 0, 0, 4, 0, "Health",
	"Initial boid health when born",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, health), 5, NULL},
	BoidSettings_health_get, BoidSettings_health_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_strength = {
	{(PropertyRNA *)&rna_BoidSettings_aggression, (PropertyRNA *)&rna_BoidSettings_health,
	-1, "strength", 3, 0, 0, 4, 0, "Strength",
	"Maximum caused damage on attack per second",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, strength), 5, NULL},
	BoidSettings_strength_get, BoidSettings_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_aggression = {
	{(PropertyRNA *)&rna_BoidSettings_accuracy, (PropertyRNA *)&rna_BoidSettings_strength,
	-1, "aggression", 3, 0, 0, 4, 0, "Aggression",
	"Boid will fight this times stronger enemy",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, aggression), 5, NULL},
	BoidSettings_aggression_get, BoidSettings_aggression_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_accuracy = {
	{(PropertyRNA *)&rna_BoidSettings_range, (PropertyRNA *)&rna_BoidSettings_aggression,
	-1, "accuracy", 3, 0, 0, 4, 0, "Accuracy",
	"Accuracy of attack",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, accuracy), 5, NULL},
	BoidSettings_accuracy_get, BoidSettings_accuracy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_range = {
	{(PropertyRNA *)&rna_BoidSettings_air_speed_min, (PropertyRNA *)&rna_BoidSettings_accuracy,
	-1, "range", 3, 0, 0, 4, 0, "Range",
	"Maximum distance from which a boid can attack",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, range), 5, NULL},
	BoidSettings_range_get, BoidSettings_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_speed_min = {
	{(PropertyRNA *)&rna_BoidSettings_air_speed_max, (PropertyRNA *)&rna_BoidSettings_range,
	-1, "air_speed_min", 3, 0, 0, 4, 0, "Min Air Speed",
	"Minimum speed in air (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_min_speed), 5, NULL},
	BoidSettings_air_speed_min_get, BoidSettings_air_speed_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_speed_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_acc_max, (PropertyRNA *)&rna_BoidSettings_air_speed_min,
	-1, "air_speed_max", 3, 0, 0, 4, 0, "Max Air Speed",
	"Maximum speed in air",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_max_speed), 5, NULL},
	BoidSettings_air_speed_max_get, BoidSettings_air_speed_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_acc_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_ave_max, (PropertyRNA *)&rna_BoidSettings_air_speed_max,
	-1, "air_acc_max", 3, 0, 0, 4, 0, "Max Air Acceleration",
	"Maximum acceleration in air (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_max_acc), 5, NULL},
	BoidSettings_air_acc_max_get, BoidSettings_air_acc_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_ave_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_personal_space, (PropertyRNA *)&rna_BoidSettings_air_acc_max,
	-1, "air_ave_max", 3, 0, 0, 4, 0, "Max Air Angular Velocity",
	"Maximum angular velocity in air (relative to 180 degrees)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_max_ave), 5, NULL},
	BoidSettings_air_ave_max_get, BoidSettings_air_ave_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_personal_space = {
	{(PropertyRNA *)&rna_BoidSettings_land_jump_speed, (PropertyRNA *)&rna_BoidSettings_air_ave_max,
	-1, "air_personal_space", 3, 0, 0, 4, 0, "Air Personal Space",
	"Radius of boids personal space in air (% of particle size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, air_personal_space), 5, NULL},
	BoidSettings_air_personal_space_get, BoidSettings_air_personal_space_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_jump_speed = {
	{(PropertyRNA *)&rna_BoidSettings_land_speed_max, (PropertyRNA *)&rna_BoidSettings_air_personal_space,
	-1, "land_jump_speed", 3, 0, 0, 4, 0, "Jump Speed",
	"Maximum speed for jumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_jump_speed), 5, NULL},
	BoidSettings_land_jump_speed_get, BoidSettings_land_jump_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_speed_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_acc_max, (PropertyRNA *)&rna_BoidSettings_land_jump_speed,
	-1, "land_speed_max", 3, 0, 0, 4, 0, "Max Land Speed",
	"Maximum speed on land",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_max_speed), 5, NULL},
	BoidSettings_land_speed_max_get, BoidSettings_land_speed_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_acc_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_ave_max, (PropertyRNA *)&rna_BoidSettings_land_speed_max,
	-1, "land_acc_max", 3, 0, 0, 4, 0, "Max Land Acceleration",
	"Maximum acceleration on land (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_max_acc), 5, NULL},
	BoidSettings_land_acc_max_get, BoidSettings_land_acc_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_ave_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_personal_space, (PropertyRNA *)&rna_BoidSettings_land_acc_max,
	-1, "land_ave_max", 3, 0, 0, 4, 0, "Max Land Angular Velocity",
	"Maximum angular velocity on land (relative to 180 degrees)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_max_ave), 5, NULL},
	BoidSettings_land_ave_max_get, BoidSettings_land_ave_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_personal_space = {
	{(PropertyRNA *)&rna_BoidSettings_land_stick_force, (PropertyRNA *)&rna_BoidSettings_land_ave_max,
	-1, "land_personal_space", 3, 0, 0, 4, 0, "Land Personal Space",
	"Radius of boids personal space on land (% of particle size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_personal_space), 5, NULL},
	BoidSettings_land_personal_space_get, BoidSettings_land_personal_space_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_stick_force = {
	{(PropertyRNA *)&rna_BoidSettings_use_flight, (PropertyRNA *)&rna_BoidSettings_land_personal_space,
	-1, "land_stick_force", 3, 0, 0, 4, 0, "Land Stick Force",
	"How strong a force must be to start effecting a boid on land",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(BoidSettings, land_stick_force), 5, NULL},
	BoidSettings_land_stick_force_get, BoidSettings_land_stick_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_BoidSettings_use_flight = {
	{(PropertyRNA *)&rna_BoidSettings_use_land, (PropertyRNA *)&rna_BoidSettings_land_stick_force,
	-1, "use_flight", 3, 0, 0, 0, 0, "Allow Flight",
	"Allow boids to move in air",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_use_flight_get, BoidSettings_use_flight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidSettings_use_land = {
	{(PropertyRNA *)&rna_BoidSettings_use_climb, (PropertyRNA *)&rna_BoidSettings_use_flight,
	-1, "use_land", 3, 0, 0, 0, 0, "Allow Land",
	"Allow boids to move on land",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_use_land_get, BoidSettings_use_land_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidSettings_use_climb = {
	{NULL, (PropertyRNA *)&rna_BoidSettings_use_land,
	-1, "use_climb", 3, 0, 0, 0, 0, "Allow Climbing",
	"Allow boids to climb goal objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	BoidSettings_use_climb_get, BoidSettings_use_climb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidSettings = {
	{(ContainerRNA *)&RNA_Brush, (ContainerRNA *)&RNA_BoidState,
	NULL,
	{(PropertyRNA *)&rna_BoidSettings_rna_properties, (PropertyRNA *)&rna_BoidSettings_use_climb}},
	"BoidSettings", NULL, NULL, 516, NULL, "Boid Settings",
	"Settings for boid physics",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BoidSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_BoidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

