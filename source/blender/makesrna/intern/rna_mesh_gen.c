
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

#include "rna_mesh.c"
#include "rna_mesh_api.c"

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

CollectionPropertyRNA rna_Mesh_vertices;
CollectionPropertyRNA rna_Mesh_edges;
CollectionPropertyRNA rna_Mesh_loops;
CollectionPropertyRNA rna_Mesh_polygons;
CollectionPropertyRNA rna_Mesh_vertex_normals;
CollectionPropertyRNA rna_Mesh_polygon_normals;
CollectionPropertyRNA rna_Mesh_loop_triangles;
PointerPropertyRNA rna_Mesh_texture_mesh;
CollectionPropertyRNA rna_Mesh_uv_layers;
PointerPropertyRNA rna_Mesh_uv_layer_clone;
IntPropertyRNA rna_Mesh_uv_layer_clone_index;
PointerPropertyRNA rna_Mesh_uv_layer_stencil;
IntPropertyRNA rna_Mesh_uv_layer_stencil_index;
CollectionPropertyRNA rna_Mesh_vertex_colors;
CollectionPropertyRNA rna_Mesh_sculpt_vertex_colors;
CollectionPropertyRNA rna_Mesh_vertex_layers_float;
CollectionPropertyRNA rna_Mesh_vertex_layers_int;
CollectionPropertyRNA rna_Mesh_vertex_layers_string;
CollectionPropertyRNA rna_Mesh_polygon_layers_float;
CollectionPropertyRNA rna_Mesh_polygon_layers_int;
CollectionPropertyRNA rna_Mesh_polygon_layers_string;
CollectionPropertyRNA rna_Mesh_face_maps;
CollectionPropertyRNA rna_Mesh_skin_vertices;
CollectionPropertyRNA rna_Mesh_vertex_creases;
CollectionPropertyRNA rna_Mesh_vertex_paint_masks;
CollectionPropertyRNA rna_Mesh_attributes;
CollectionPropertyRNA rna_Mesh_color_attributes;
FloatPropertyRNA rna_Mesh_remesh_voxel_size;
FloatPropertyRNA rna_Mesh_remesh_voxel_adaptivity;
BoolPropertyRNA rna_Mesh_use_remesh_fix_poles;
BoolPropertyRNA rna_Mesh_use_remesh_preserve_volume;
BoolPropertyRNA rna_Mesh_use_remesh_preserve_paint_mask;
BoolPropertyRNA rna_Mesh_use_remesh_preserve_sculpt_face_sets;
BoolPropertyRNA rna_Mesh_use_remesh_preserve_vertex_colors;
EnumPropertyRNA rna_Mesh_remesh_mode;
BoolPropertyRNA rna_Mesh_use_mirror_x;
BoolPropertyRNA rna_Mesh_use_mirror_y;
BoolPropertyRNA rna_Mesh_use_mirror_z;
BoolPropertyRNA rna_Mesh_use_mirror_vertex_groups;
BoolPropertyRNA rna_Mesh_use_auto_smooth;
FloatPropertyRNA rna_Mesh_auto_smooth_angle;
BoolPropertyRNA rna_Mesh_has_custom_normals;
PointerPropertyRNA rna_Mesh_texco_mesh;
PointerPropertyRNA rna_Mesh_shape_keys;
BoolPropertyRNA rna_Mesh_use_auto_texspace;
BoolPropertyRNA rna_Mesh_use_mirror_topology;
BoolPropertyRNA rna_Mesh_use_paint_mask;
BoolPropertyRNA rna_Mesh_use_paint_mask_vertex;
BoolPropertyRNA rna_Mesh_use_customdata_vertex_bevel;
BoolPropertyRNA rna_Mesh_use_customdata_edge_bevel;
BoolPropertyRNA rna_Mesh_use_customdata_vertex_crease;
BoolPropertyRNA rna_Mesh_use_customdata_edge_crease;
IntPropertyRNA rna_Mesh_total_vert_sel;
IntPropertyRNA rna_Mesh_total_edge_sel;
IntPropertyRNA rna_Mesh_total_face_sel;
BoolPropertyRNA rna_Mesh_is_editmode;
PointerPropertyRNA rna_Mesh_animation_data;
BoolPropertyRNA rna_Mesh_auto_texspace;
FloatPropertyRNA rna_Mesh_texspace_location;
FloatPropertyRNA rna_Mesh_texspace_size;
CollectionPropertyRNA rna_Mesh_materials;

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


extern FunctionRNA rna_Mesh_transform_func;
extern FloatPropertyRNA rna_Mesh_transform_matrix;
extern BoolPropertyRNA rna_Mesh_transform_shape_keys;

extern FunctionRNA rna_Mesh_flip_normals_func;
extern FunctionRNA rna_Mesh_calc_normals_func;
extern FunctionRNA rna_Mesh_create_normals_split_func;
extern FunctionRNA rna_Mesh_calc_normals_split_func;
extern FunctionRNA rna_Mesh_free_normals_split_func;
extern FunctionRNA rna_Mesh_split_faces_func;
extern BoolPropertyRNA rna_Mesh_split_faces_free_loop_normals;

extern FunctionRNA rna_Mesh_calc_tangents_func;
extern StringPropertyRNA rna_Mesh_calc_tangents_uvmap;

extern FunctionRNA rna_Mesh_free_tangents_func;
extern FunctionRNA rna_Mesh_calc_loop_triangles_func;
extern FunctionRNA rna_Mesh_calc_smooth_groups_func;
extern BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags;
extern IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups;
extern IntPropertyRNA rna_Mesh_calc_smooth_groups_groups;

extern FunctionRNA rna_Mesh_normals_split_custom_set_func;
extern FloatPropertyRNA rna_Mesh_normals_split_custom_set_normals;

extern FunctionRNA rna_Mesh_normals_split_custom_set_from_vertices_func;
extern FloatPropertyRNA rna_Mesh_normals_split_custom_set_from_vertices_normals;

extern FunctionRNA rna_Mesh_update_func;
extern BoolPropertyRNA rna_Mesh_update_calc_edges;
extern BoolPropertyRNA rna_Mesh_update_calc_edges_loose;

extern FunctionRNA rna_Mesh_update_gpu_tag_func;
extern FunctionRNA rna_Mesh_unit_test_compare_func;
extern PointerPropertyRNA rna_Mesh_unit_test_compare_mesh;
extern FloatPropertyRNA rna_Mesh_unit_test_compare_threshold;
extern StringPropertyRNA rna_Mesh_unit_test_compare_result;

extern FunctionRNA rna_Mesh_clear_geometry_func;
extern FunctionRNA rna_Mesh_validate_func;
extern BoolPropertyRNA rna_Mesh_validate_verbose;
extern BoolPropertyRNA rna_Mesh_validate_clean_customdata;
extern BoolPropertyRNA rna_Mesh_validate_result;

extern FunctionRNA rna_Mesh_validate_material_indices_func;
extern BoolPropertyRNA rna_Mesh_validate_material_indices_result;

extern FunctionRNA rna_Mesh_count_selected_items_func;
extern IntPropertyRNA rna_Mesh_count_selected_items_result;



CollectionPropertyRNA rna_MeshVertices_rna_properties;
PointerPropertyRNA rna_MeshVertices_rna_type;

extern FunctionRNA rna_MeshVertices_add_func;
extern IntPropertyRNA rna_MeshVertices_add_count;



CollectionPropertyRNA rna_MeshEdges_rna_properties;
PointerPropertyRNA rna_MeshEdges_rna_type;

extern FunctionRNA rna_MeshEdges_add_func;
extern IntPropertyRNA rna_MeshEdges_add_count;



CollectionPropertyRNA rna_MeshLoops_rna_properties;
PointerPropertyRNA rna_MeshLoops_rna_type;

extern FunctionRNA rna_MeshLoops_add_func;
extern IntPropertyRNA rna_MeshLoops_add_count;



CollectionPropertyRNA rna_MeshPolygons_rna_properties;
PointerPropertyRNA rna_MeshPolygons_rna_type;
IntPropertyRNA rna_MeshPolygons_active;

extern FunctionRNA rna_MeshPolygons_add_func;
extern IntPropertyRNA rna_MeshPolygons_add_count;



CollectionPropertyRNA rna_MeshNormalValue_rna_properties;
PointerPropertyRNA rna_MeshNormalValue_rna_type;
FloatPropertyRNA rna_MeshNormalValue_vector;


CollectionPropertyRNA rna_MeshLoopTriangles_rna_properties;
PointerPropertyRNA rna_MeshLoopTriangles_rna_type;


CollectionPropertyRNA rna_UVLoopLayers_rna_properties;
PointerPropertyRNA rna_UVLoopLayers_rna_type;
PointerPropertyRNA rna_UVLoopLayers_active;
IntPropertyRNA rna_UVLoopLayers_active_index;

extern FunctionRNA rna_UVLoopLayers_new_func;
extern StringPropertyRNA rna_UVLoopLayers_new_name;
extern BoolPropertyRNA rna_UVLoopLayers_new_do_init;
extern PointerPropertyRNA rna_UVLoopLayers_new_layer;

extern FunctionRNA rna_UVLoopLayers_remove_func;
extern PointerPropertyRNA rna_UVLoopLayers_remove_layer;



CollectionPropertyRNA rna_LoopColors_rna_properties;
PointerPropertyRNA rna_LoopColors_rna_type;
PointerPropertyRNA rna_LoopColors_active;
IntPropertyRNA rna_LoopColors_active_index;

extern FunctionRNA rna_LoopColors_new_func;
extern StringPropertyRNA rna_LoopColors_new_name;
extern BoolPropertyRNA rna_LoopColors_new_do_init;
extern PointerPropertyRNA rna_LoopColors_new_layer;

extern FunctionRNA rna_LoopColors_remove_func;
extern PointerPropertyRNA rna_LoopColors_remove_layer;



CollectionPropertyRNA rna_VertColors_rna_properties;
PointerPropertyRNA rna_VertColors_rna_type;
PointerPropertyRNA rna_VertColors_active;
IntPropertyRNA rna_VertColors_active_index;

extern FunctionRNA rna_VertColors_new_func;
extern StringPropertyRNA rna_VertColors_new_name;
extern BoolPropertyRNA rna_VertColors_new_do_init;
extern PointerPropertyRNA rna_VertColors_new_layer;

extern FunctionRNA rna_VertColors_remove_func;
extern PointerPropertyRNA rna_VertColors_remove_layer;



CollectionPropertyRNA rna_VertexFloatProperties_rna_properties;
PointerPropertyRNA rna_VertexFloatProperties_rna_type;

extern FunctionRNA rna_VertexFloatProperties_new_func;
extern StringPropertyRNA rna_VertexFloatProperties_new_name;
extern PointerPropertyRNA rna_VertexFloatProperties_new_layer;



CollectionPropertyRNA rna_VertexIntProperties_rna_properties;
PointerPropertyRNA rna_VertexIntProperties_rna_type;

extern FunctionRNA rna_VertexIntProperties_new_func;
extern StringPropertyRNA rna_VertexIntProperties_new_name;
extern PointerPropertyRNA rna_VertexIntProperties_new_layer;



CollectionPropertyRNA rna_VertexStringProperties_rna_properties;
PointerPropertyRNA rna_VertexStringProperties_rna_type;

extern FunctionRNA rna_VertexStringProperties_new_func;
extern StringPropertyRNA rna_VertexStringProperties_new_name;
extern PointerPropertyRNA rna_VertexStringProperties_new_layer;



CollectionPropertyRNA rna_PolygonFloatProperties_rna_properties;
PointerPropertyRNA rna_PolygonFloatProperties_rna_type;

extern FunctionRNA rna_PolygonFloatProperties_new_func;
extern StringPropertyRNA rna_PolygonFloatProperties_new_name;
extern PointerPropertyRNA rna_PolygonFloatProperties_new_layer;



CollectionPropertyRNA rna_PolygonIntProperties_rna_properties;
PointerPropertyRNA rna_PolygonIntProperties_rna_type;

extern FunctionRNA rna_PolygonIntProperties_new_func;
extern StringPropertyRNA rna_PolygonIntProperties_new_name;
extern PointerPropertyRNA rna_PolygonIntProperties_new_layer;



CollectionPropertyRNA rna_PolygonStringProperties_rna_properties;
PointerPropertyRNA rna_PolygonStringProperties_rna_type;

extern FunctionRNA rna_PolygonStringProperties_new_func;
extern StringPropertyRNA rna_PolygonStringProperties_new_name;
extern PointerPropertyRNA rna_PolygonStringProperties_new_layer;



CollectionPropertyRNA rna_MeshFaceMapLayers_rna_properties;
PointerPropertyRNA rna_MeshFaceMapLayers_rna_type;
PointerPropertyRNA rna_MeshFaceMapLayers_active;

extern FunctionRNA rna_MeshFaceMapLayers_new_func;
extern StringPropertyRNA rna_MeshFaceMapLayers_new_name;
extern PointerPropertyRNA rna_MeshFaceMapLayers_new_layer;

extern FunctionRNA rna_MeshFaceMapLayers_remove_func;
extern PointerPropertyRNA rna_MeshFaceMapLayers_remove_layer;



CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties;
PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type;
StringPropertyRNA rna_MeshSkinVertexLayer_name;
CollectionPropertyRNA rna_MeshSkinVertexLayer_data;


CollectionPropertyRNA rna_MeshSkinVertex_rna_properties;
PointerPropertyRNA rna_MeshSkinVertex_rna_type;
FloatPropertyRNA rna_MeshSkinVertex_radius;
BoolPropertyRNA rna_MeshSkinVertex_use_root;
BoolPropertyRNA rna_MeshSkinVertex_use_loose;


CollectionPropertyRNA rna_MeshVertexCreaseLayer_rna_properties;
PointerPropertyRNA rna_MeshVertexCreaseLayer_rna_type;
CollectionPropertyRNA rna_MeshVertexCreaseLayer_data;


CollectionPropertyRNA rna_MeshVertexCrease_rna_properties;
PointerPropertyRNA rna_MeshVertexCrease_rna_type;
FloatPropertyRNA rna_MeshVertexCrease_value;


CollectionPropertyRNA rna_MeshPaintMaskLayer_rna_properties;
PointerPropertyRNA rna_MeshPaintMaskLayer_rna_type;
CollectionPropertyRNA rna_MeshPaintMaskLayer_data;


CollectionPropertyRNA rna_MeshPaintMaskProperty_rna_properties;
PointerPropertyRNA rna_MeshPaintMaskProperty_rna_type;
FloatPropertyRNA rna_MeshPaintMaskProperty_value;


CollectionPropertyRNA rna_MeshVertex_rna_properties;
PointerPropertyRNA rna_MeshVertex_rna_type;
FloatPropertyRNA rna_MeshVertex_co;
FloatPropertyRNA rna_MeshVertex_normal;
BoolPropertyRNA rna_MeshVertex_select;
BoolPropertyRNA rna_MeshVertex_hide;
FloatPropertyRNA rna_MeshVertex_bevel_weight;
CollectionPropertyRNA rna_MeshVertex_groups;
IntPropertyRNA rna_MeshVertex_index;
FloatPropertyRNA rna_MeshVertex_undeformed_co;


CollectionPropertyRNA rna_VertexGroupElement_rna_properties;
PointerPropertyRNA rna_VertexGroupElement_rna_type;
IntPropertyRNA rna_VertexGroupElement_group;
FloatPropertyRNA rna_VertexGroupElement_weight;


CollectionPropertyRNA rna_MeshEdge_rna_properties;
PointerPropertyRNA rna_MeshEdge_rna_type;
IntPropertyRNA rna_MeshEdge_vertices;
FloatPropertyRNA rna_MeshEdge_crease;
FloatPropertyRNA rna_MeshEdge_bevel_weight;
BoolPropertyRNA rna_MeshEdge_select;
BoolPropertyRNA rna_MeshEdge_hide;
BoolPropertyRNA rna_MeshEdge_use_seam;
BoolPropertyRNA rna_MeshEdge_use_edge_sharp;
BoolPropertyRNA rna_MeshEdge_is_loose;
BoolPropertyRNA rna_MeshEdge_use_freestyle_mark;
IntPropertyRNA rna_MeshEdge_index;


CollectionPropertyRNA rna_MeshLoopTriangle_rna_properties;
PointerPropertyRNA rna_MeshLoopTriangle_rna_type;
IntPropertyRNA rna_MeshLoopTriangle_vertices;
IntPropertyRNA rna_MeshLoopTriangle_loops;
IntPropertyRNA rna_MeshLoopTriangle_polygon_index;
FloatPropertyRNA rna_MeshLoopTriangle_normal;
FloatPropertyRNA rna_MeshLoopTriangle_split_normals;
FloatPropertyRNA rna_MeshLoopTriangle_area;
IntPropertyRNA rna_MeshLoopTriangle_index;
IntPropertyRNA rna_MeshLoopTriangle_material_index;
BoolPropertyRNA rna_MeshLoopTriangle_use_smooth;


CollectionPropertyRNA rna_MeshLoop_rna_properties;
PointerPropertyRNA rna_MeshLoop_rna_type;
IntPropertyRNA rna_MeshLoop_vertex_index;
IntPropertyRNA rna_MeshLoop_edge_index;
IntPropertyRNA rna_MeshLoop_index;
FloatPropertyRNA rna_MeshLoop_normal;
FloatPropertyRNA rna_MeshLoop_tangent;
FloatPropertyRNA rna_MeshLoop_bitangent_sign;
FloatPropertyRNA rna_MeshLoop_bitangent;


CollectionPropertyRNA rna_MeshPolygon_rna_properties;
PointerPropertyRNA rna_MeshPolygon_rna_type;
IntPropertyRNA rna_MeshPolygon_vertices;
IntPropertyRNA rna_MeshPolygon_loop_start;
IntPropertyRNA rna_MeshPolygon_loop_total;
IntPropertyRNA rna_MeshPolygon_material_index;
BoolPropertyRNA rna_MeshPolygon_select;
BoolPropertyRNA rna_MeshPolygon_hide;
BoolPropertyRNA rna_MeshPolygon_use_smooth;
BoolPropertyRNA rna_MeshPolygon_use_freestyle_mark;
FloatPropertyRNA rna_MeshPolygon_normal;
FloatPropertyRNA rna_MeshPolygon_center;
FloatPropertyRNA rna_MeshPolygon_area;
IntPropertyRNA rna_MeshPolygon_index;

extern FunctionRNA rna_MeshPolygon_flip_func;


CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties;
PointerPropertyRNA rna_MeshUVLoopLayer_rna_type;
CollectionPropertyRNA rna_MeshUVLoopLayer_data;
StringPropertyRNA rna_MeshUVLoopLayer_name;
BoolPropertyRNA rna_MeshUVLoopLayer_active;
BoolPropertyRNA rna_MeshUVLoopLayer_active_render;
BoolPropertyRNA rna_MeshUVLoopLayer_active_clone;


CollectionPropertyRNA rna_MeshUVLoop_rna_properties;
PointerPropertyRNA rna_MeshUVLoop_rna_type;
FloatPropertyRNA rna_MeshUVLoop_uv;
BoolPropertyRNA rna_MeshUVLoop_pin_uv;
BoolPropertyRNA rna_MeshUVLoop_select;
BoolPropertyRNA rna_MeshUVLoop_select_edge;


CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties;
PointerPropertyRNA rna_MeshLoopColorLayer_rna_type;
StringPropertyRNA rna_MeshLoopColorLayer_name;
BoolPropertyRNA rna_MeshLoopColorLayer_active;
BoolPropertyRNA rna_MeshLoopColorLayer_active_render;
CollectionPropertyRNA rna_MeshLoopColorLayer_data;


CollectionPropertyRNA rna_MeshLoopColor_rna_properties;
PointerPropertyRNA rna_MeshLoopColor_rna_type;
FloatPropertyRNA rna_MeshLoopColor_color;


CollectionPropertyRNA rna_MeshVertColorLayer_rna_properties;
PointerPropertyRNA rna_MeshVertColorLayer_rna_type;
StringPropertyRNA rna_MeshVertColorLayer_name;
BoolPropertyRNA rna_MeshVertColorLayer_active;
BoolPropertyRNA rna_MeshVertColorLayer_active_render;
CollectionPropertyRNA rna_MeshVertColorLayer_data;


CollectionPropertyRNA rna_MeshVertColor_rna_properties;
PointerPropertyRNA rna_MeshVertColor_rna_type;
FloatPropertyRNA rna_MeshVertColor_color;


CollectionPropertyRNA rna_MeshVertexFloatPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshVertexFloatPropertyLayer_rna_type;
StringPropertyRNA rna_MeshVertexFloatPropertyLayer_name;
CollectionPropertyRNA rna_MeshVertexFloatPropertyLayer_data;


CollectionPropertyRNA rna_MeshVertexFloatProperty_rna_properties;
PointerPropertyRNA rna_MeshVertexFloatProperty_rna_type;
FloatPropertyRNA rna_MeshVertexFloatProperty_value;


CollectionPropertyRNA rna_MeshPolygonFloatPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshPolygonFloatPropertyLayer_rna_type;
StringPropertyRNA rna_MeshPolygonFloatPropertyLayer_name;
CollectionPropertyRNA rna_MeshPolygonFloatPropertyLayer_data;


CollectionPropertyRNA rna_MeshPolygonFloatProperty_rna_properties;
PointerPropertyRNA rna_MeshPolygonFloatProperty_rna_type;
FloatPropertyRNA rna_MeshPolygonFloatProperty_value;


CollectionPropertyRNA rna_MeshVertexIntPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshVertexIntPropertyLayer_rna_type;
StringPropertyRNA rna_MeshVertexIntPropertyLayer_name;
CollectionPropertyRNA rna_MeshVertexIntPropertyLayer_data;


CollectionPropertyRNA rna_MeshVertexIntProperty_rna_properties;
PointerPropertyRNA rna_MeshVertexIntProperty_rna_type;
IntPropertyRNA rna_MeshVertexIntProperty_value;


CollectionPropertyRNA rna_MeshPolygonIntPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshPolygonIntPropertyLayer_rna_type;
StringPropertyRNA rna_MeshPolygonIntPropertyLayer_name;
CollectionPropertyRNA rna_MeshPolygonIntPropertyLayer_data;


CollectionPropertyRNA rna_MeshPolygonIntProperty_rna_properties;
PointerPropertyRNA rna_MeshPolygonIntProperty_rna_type;
IntPropertyRNA rna_MeshPolygonIntProperty_value;


CollectionPropertyRNA rna_MeshVertexStringPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshVertexStringPropertyLayer_rna_type;
StringPropertyRNA rna_MeshVertexStringPropertyLayer_name;
CollectionPropertyRNA rna_MeshVertexStringPropertyLayer_data;


CollectionPropertyRNA rna_MeshVertexStringProperty_rna_properties;
PointerPropertyRNA rna_MeshVertexStringProperty_rna_type;
StringPropertyRNA rna_MeshVertexStringProperty_value;


CollectionPropertyRNA rna_MeshPolygonStringPropertyLayer_rna_properties;
PointerPropertyRNA rna_MeshPolygonStringPropertyLayer_rna_type;
StringPropertyRNA rna_MeshPolygonStringPropertyLayer_name;
CollectionPropertyRNA rna_MeshPolygonStringPropertyLayer_data;


CollectionPropertyRNA rna_MeshPolygonStringProperty_rna_properties;
PointerPropertyRNA rna_MeshPolygonStringProperty_rna_type;
StringPropertyRNA rna_MeshPolygonStringProperty_value;


CollectionPropertyRNA rna_MeshFaceMapLayer_rna_properties;
PointerPropertyRNA rna_MeshFaceMapLayer_rna_type;
StringPropertyRNA rna_MeshFaceMapLayer_name;
CollectionPropertyRNA rna_MeshFaceMapLayer_data;


CollectionPropertyRNA rna_MeshFaceMap_rna_properties;
PointerPropertyRNA rna_MeshFaceMap_rna_type;
IntPropertyRNA rna_MeshFaceMap_value;

int Mesh_vertices_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->mvert == NULL) ? 0 : data->totvert;
}

static PointerRNA Mesh_vertices_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertex, rna_iterator_array_get(iter));
}

void Mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertices;

    rna_iterator_array_begin(iter, data->mvert, sizeof(data->mvert[0]), data->totvert, 0, NULL);

    if (iter->valid) {
        iter->ptr = Mesh_vertices_get(iter);
    }
}

void Mesh_vertices_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertices_get(iter);
    }
}

void Mesh_vertices_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertices_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertices_get(&iter); }
    }

    Mesh_vertices_end(&iter);

    return found;
}

int Mesh_edges_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->medge == NULL) ? 0 : data->totedge;
}

static PointerRNA Mesh_edges_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshEdge, rna_iterator_array_get(iter));
}

void Mesh_edges_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_edges;

    rna_iterator_array_begin(iter, data->medge, sizeof(data->medge[0]), data->totedge, 0, NULL);

    if (iter->valid) {
        iter->ptr = Mesh_edges_get(iter);
    }
}

void Mesh_edges_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_edges_get(iter);
    }
}

void Mesh_edges_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_edges_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_edges_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_edges_get(&iter); }
    }

    Mesh_edges_end(&iter);

    return found;
}

int Mesh_loops_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->mloop == NULL) ? 0 : data->totloop;
}

static PointerRNA Mesh_loops_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoop, rna_iterator_array_get(iter));
}

void Mesh_loops_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_loops;

    rna_iterator_array_begin(iter, data->mloop, sizeof(data->mloop[0]), data->totloop, 0, NULL);

    if (iter->valid) {
        iter->ptr = Mesh_loops_get(iter);
    }
}

void Mesh_loops_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loops_get(iter);
    }
}

void Mesh_loops_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_loops_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_loops_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_loops_get(&iter); }
    }

    Mesh_loops_end(&iter);

    return found;
}

int Mesh_polygons_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->mpoly == NULL) ? 0 : data->totpoly;
}

static PointerRNA Mesh_polygons_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygon, rna_iterator_array_get(iter));
}

void Mesh_polygons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygons;

    rna_iterator_array_begin(iter, data->mpoly, sizeof(data->mpoly[0]), data->totpoly, 0, NULL);

    if (iter->valid) {
        iter->ptr = Mesh_polygons_get(iter);
    }
}

void Mesh_polygons_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygons_get(iter);
    }
}

void Mesh_polygons_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_polygons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_polygons_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_polygons_get(&iter); }
    }

    Mesh_polygons_end(&iter);

    return found;
}

int Mesh_vertex_normals_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_normals_length(ptr);
}

static PointerRNA Mesh_vertex_normals_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

void Mesh_vertex_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_normals;

    rna_Mesh_vertex_normals_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_normals_get(iter);
    }
}

void Mesh_vertex_normals_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_normals_get(iter);
    }
}

void Mesh_vertex_normals_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_polygon_normals_length(PointerRNA *ptr)
{
    return rna_Mesh_poly_normals_length(ptr);
}

static PointerRNA Mesh_polygon_normals_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

void Mesh_polygon_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygon_normals;

    rna_Mesh_poly_normals_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_normals_get(iter);
    }
}

void Mesh_polygon_normals_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_normals_get(iter);
    }
}

void Mesh_polygon_normals_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_loop_triangles_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->runtime.looptris.array == NULL) ? 0 : data->runtime.looptris.len;
}

static PointerRNA Mesh_loop_triangles_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopTriangle, rna_iterator_array_get(iter));
}

void Mesh_loop_triangles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_loop_triangles;

    rna_iterator_array_begin(iter, data->runtime.looptris.array, sizeof(data->runtime.looptris.array[0]), data->runtime.looptris.len, 0, NULL);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangles_get(iter);
    }
}

void Mesh_loop_triangles_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangles_get(iter);
    }
}

void Mesh_loop_triangles_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_loop_triangles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_loop_triangles_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_loop_triangles_get(&iter); }
    }

    Mesh_loop_triangles_end(&iter);

    return found;
}

PointerRNA Mesh_texture_mesh_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

void Mesh_texture_mesh_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Mesh *data = (Mesh *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }

    if (data->texcomesh) {
        id_us_min((ID *)data->texcomesh);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->texcomesh = value.data;
}

int Mesh_uv_layers_length(PointerRNA *ptr)
{
    return rna_Mesh_uv_layers_length(ptr);
}

static PointerRNA Mesh_uv_layers_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshUVLoopLayer, rna_iterator_array_get(iter));
}

void Mesh_uv_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_uv_layers;

    rna_Mesh_uv_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_uv_layers_get(iter);
    }
}

void Mesh_uv_layers_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_uv_layers_get(iter);
    }
}

void Mesh_uv_layers_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_uv_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_uv_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_uv_layers_get(&iter); }
    }

    Mesh_uv_layers_end(&iter);

    return found;
}

int Mesh_uv_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshUVLoopLayer_name_length(PointerRNA *);
    extern void MeshUVLoopLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_uv_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshUVLoopLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshUVLoopLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshUVLoopLayer_name_get(&iter.ptr, name);
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
        Mesh_uv_layers_next(&iter);
    }
    Mesh_uv_layers_end(&iter);

    return found;
}

PointerRNA Mesh_uv_layer_clone_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_clone_get(ptr);
}

void Mesh_uv_layer_clone_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_uv_layer_clone_set(ptr, value, reports);
}

int Mesh_uv_layer_clone_index_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_clone_index_get(ptr);
}

void Mesh_uv_layer_clone_index_set(PointerRNA *ptr, int value)
{
    rna_Mesh_uv_layer_clone_index_set(ptr, value);
}

PointerRNA Mesh_uv_layer_stencil_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_stencil_get(ptr);
}

void Mesh_uv_layer_stencil_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_uv_layer_stencil_set(ptr, value, reports);
}

int Mesh_uv_layer_stencil_index_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_stencil_index_get(ptr);
}

void Mesh_uv_layer_stencil_index_set(PointerRNA *ptr, int value)
{
    rna_Mesh_uv_layer_stencil_index_set(ptr, value);
}

int Mesh_vertex_colors_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_colors_length(ptr);
}

static PointerRNA Mesh_vertex_colors_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopColorLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_colors;

    rna_Mesh_vertex_colors_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_colors_get(iter);
    }
}

void Mesh_vertex_colors_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_colors_get(iter);
    }
}

void Mesh_vertex_colors_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_colors_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_colors_get(&iter); }
    }

    Mesh_vertex_colors_end(&iter);

    return found;
}

int Mesh_vertex_colors_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshLoopColorLayer_name_length(PointerRNA *);
    extern void MeshLoopColorLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_vertex_colors_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshLoopColorLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshLoopColorLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshLoopColorLayer_name_get(&iter.ptr, name);
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
        Mesh_vertex_colors_next(&iter);
    }
    Mesh_vertex_colors_end(&iter);

    return found;
}

int Mesh_sculpt_vertex_colors_length(PointerRNA *ptr)
{
    return rna_Mesh_sculpt_vertex_colors_length(ptr);
}

static PointerRNA Mesh_sculpt_vertex_colors_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertColorLayer, rna_iterator_array_get(iter));
}

void Mesh_sculpt_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_sculpt_vertex_colors;

    rna_Mesh_sculpt_vertex_colors_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_sculpt_vertex_colors_get(iter);
    }
}

void Mesh_sculpt_vertex_colors_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_sculpt_vertex_colors_get(iter);
    }
}

void Mesh_sculpt_vertex_colors_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_sculpt_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_sculpt_vertex_colors_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_sculpt_vertex_colors_get(&iter); }
    }

    Mesh_sculpt_vertex_colors_end(&iter);

    return found;
}

int Mesh_sculpt_vertex_colors_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshVertColorLayer_name_length(PointerRNA *);
    extern void MeshVertColorLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_sculpt_vertex_colors_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshVertColorLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshVertColorLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshVertColorLayer_name_get(&iter.ptr, name);
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
        Mesh_sculpt_vertex_colors_next(&iter);
    }
    Mesh_sculpt_vertex_colors_end(&iter);

    return found;
}

int Mesh_vertex_layers_float_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_float_layers_length(ptr);
}

static PointerRNA Mesh_vertex_layers_float_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexFloatPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_layers_float_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_layers_float;

    rna_Mesh_vertex_float_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_layers_float_get(iter);
    }
}

void Mesh_vertex_layers_float_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_layers_float_get(iter);
    }
}

void Mesh_vertex_layers_float_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertex_layers_float_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_layers_float_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_layers_float_get(&iter); }
    }

    Mesh_vertex_layers_float_end(&iter);

    return found;
}

int Mesh_vertex_layers_float_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshVertexFloatPropertyLayer_name_length(PointerRNA *);
    extern void MeshVertexFloatPropertyLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_vertex_layers_float_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshVertexFloatPropertyLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshVertexFloatPropertyLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshVertexFloatPropertyLayer_name_get(&iter.ptr, name);
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
        Mesh_vertex_layers_float_next(&iter);
    }
    Mesh_vertex_layers_float_end(&iter);

    return found;
}

int Mesh_vertex_layers_int_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_int_layers_length(ptr);
}

static PointerRNA Mesh_vertex_layers_int_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexIntPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_layers_int_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_layers_int;

    rna_Mesh_vertex_int_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_layers_int_get(iter);
    }
}

void Mesh_vertex_layers_int_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_layers_int_get(iter);
    }
}

void Mesh_vertex_layers_int_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertex_layers_int_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_layers_int_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_layers_int_get(&iter); }
    }

    Mesh_vertex_layers_int_end(&iter);

    return found;
}

int Mesh_vertex_layers_int_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshVertexIntPropertyLayer_name_length(PointerRNA *);
    extern void MeshVertexIntPropertyLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_vertex_layers_int_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshVertexIntPropertyLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshVertexIntPropertyLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshVertexIntPropertyLayer_name_get(&iter.ptr, name);
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
        Mesh_vertex_layers_int_next(&iter);
    }
    Mesh_vertex_layers_int_end(&iter);

    return found;
}

int Mesh_vertex_layers_string_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_string_layers_length(ptr);
}

static PointerRNA Mesh_vertex_layers_string_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexStringPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_layers_string_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_layers_string;

    rna_Mesh_vertex_string_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_layers_string_get(iter);
    }
}

void Mesh_vertex_layers_string_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_layers_string_get(iter);
    }
}

void Mesh_vertex_layers_string_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertex_layers_string_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_layers_string_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_layers_string_get(&iter); }
    }

    Mesh_vertex_layers_string_end(&iter);

    return found;
}

int Mesh_vertex_layers_string_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshVertexStringPropertyLayer_name_length(PointerRNA *);
    extern void MeshVertexStringPropertyLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_vertex_layers_string_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshVertexStringPropertyLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshVertexStringPropertyLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshVertexStringPropertyLayer_name_get(&iter.ptr, name);
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
        Mesh_vertex_layers_string_next(&iter);
    }
    Mesh_vertex_layers_string_end(&iter);

    return found;
}

int Mesh_polygon_layers_float_length(PointerRNA *ptr)
{
    return rna_Mesh_polygon_float_layers_length(ptr);
}

static PointerRNA Mesh_polygon_layers_float_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygonFloatPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_polygon_layers_float_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygon_layers_float;

    rna_Mesh_polygon_float_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_layers_float_get(iter);
    }
}

void Mesh_polygon_layers_float_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_layers_float_get(iter);
    }
}

void Mesh_polygon_layers_float_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_polygon_layers_float_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_polygon_layers_float_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_polygon_layers_float_get(&iter); }
    }

    Mesh_polygon_layers_float_end(&iter);

    return found;
}

int Mesh_polygon_layers_float_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshPolygonFloatPropertyLayer_name_length(PointerRNA *);
    extern void MeshPolygonFloatPropertyLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_polygon_layers_float_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshPolygonFloatPropertyLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshPolygonFloatPropertyLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshPolygonFloatPropertyLayer_name_get(&iter.ptr, name);
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
        Mesh_polygon_layers_float_next(&iter);
    }
    Mesh_polygon_layers_float_end(&iter);

    return found;
}

int Mesh_polygon_layers_int_length(PointerRNA *ptr)
{
    return rna_Mesh_polygon_int_layers_length(ptr);
}

static PointerRNA Mesh_polygon_layers_int_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygonIntPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_polygon_layers_int_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygon_layers_int;

    rna_Mesh_polygon_int_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_layers_int_get(iter);
    }
}

void Mesh_polygon_layers_int_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_layers_int_get(iter);
    }
}

void Mesh_polygon_layers_int_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_polygon_layers_int_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_polygon_layers_int_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_polygon_layers_int_get(&iter); }
    }

    Mesh_polygon_layers_int_end(&iter);

    return found;
}

int Mesh_polygon_layers_int_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshPolygonIntPropertyLayer_name_length(PointerRNA *);
    extern void MeshPolygonIntPropertyLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_polygon_layers_int_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshPolygonIntPropertyLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshPolygonIntPropertyLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshPolygonIntPropertyLayer_name_get(&iter.ptr, name);
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
        Mesh_polygon_layers_int_next(&iter);
    }
    Mesh_polygon_layers_int_end(&iter);

    return found;
}

int Mesh_polygon_layers_string_length(PointerRNA *ptr)
{
    return rna_Mesh_polygon_string_layers_length(ptr);
}

static PointerRNA Mesh_polygon_layers_string_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygonStringPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_polygon_layers_string_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_polygon_layers_string;

    rna_Mesh_polygon_string_layers_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_layers_string_get(iter);
    }
}

void Mesh_polygon_layers_string_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_layers_string_get(iter);
    }
}

void Mesh_polygon_layers_string_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_polygon_layers_string_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_polygon_layers_string_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_polygon_layers_string_get(&iter); }
    }

    Mesh_polygon_layers_string_end(&iter);

    return found;
}

int Mesh_polygon_layers_string_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshPolygonStringPropertyLayer_name_length(PointerRNA *);
    extern void MeshPolygonStringPropertyLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_polygon_layers_string_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshPolygonStringPropertyLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshPolygonStringPropertyLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshPolygonStringPropertyLayer_name_get(&iter.ptr, name);
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
        Mesh_polygon_layers_string_next(&iter);
    }
    Mesh_polygon_layers_string_end(&iter);

    return found;
}

int Mesh_face_maps_length(PointerRNA *ptr)
{
    return rna_Mesh_face_maps_length(ptr);
}

static PointerRNA Mesh_face_maps_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFaceMapLayer, rna_iterator_array_get(iter));
}

void Mesh_face_maps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_face_maps;

    rna_Mesh_face_maps_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_face_maps_get(iter);
    }
}

void Mesh_face_maps_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_face_maps_get(iter);
    }
}

void Mesh_face_maps_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_face_maps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_face_maps_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_face_maps_get(&iter); }
    }

    Mesh_face_maps_end(&iter);

    return found;
}

int Mesh_face_maps_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshFaceMapLayer_name_length(PointerRNA *);
    extern void MeshFaceMapLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_face_maps_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshFaceMapLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshFaceMapLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshFaceMapLayer_name_get(&iter.ptr, name);
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
        Mesh_face_maps_next(&iter);
    }
    Mesh_face_maps_end(&iter);

    return found;
}

int Mesh_skin_vertices_length(PointerRNA *ptr)
{
    return rna_Mesh_skin_vertices_length(ptr);
}

static PointerRNA Mesh_skin_vertices_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSkinVertexLayer, rna_iterator_array_get(iter));
}

void Mesh_skin_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_skin_vertices;

    rna_Mesh_skin_vertices_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_skin_vertices_get(iter);
    }
}

void Mesh_skin_vertices_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_skin_vertices_get(iter);
    }
}

void Mesh_skin_vertices_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_skin_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_skin_vertices_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_skin_vertices_get(&iter); }
    }

    Mesh_skin_vertices_end(&iter);

    return found;
}

int Mesh_skin_vertices_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int MeshSkinVertexLayer_name_length(PointerRNA *);
    extern void MeshSkinVertexLayer_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_skin_vertices_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshSkinVertexLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshSkinVertexLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_mallocN(namelen+1, "name string");
                MeshSkinVertexLayer_name_get(&iter.ptr, name);
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
        Mesh_skin_vertices_next(&iter);
    }
    Mesh_skin_vertices_end(&iter);

    return found;
}

int Mesh_vertex_creases_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_creases_length(ptr);
}

static PointerRNA Mesh_vertex_creases_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexCreaseLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_creases_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_creases;

    rna_Mesh_vertex_creases_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_creases_get(iter);
    }
}

void Mesh_vertex_creases_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_creases_get(iter);
    }
}

void Mesh_vertex_creases_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertex_creases_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_creases_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_creases_get(&iter); }
    }

    Mesh_vertex_creases_end(&iter);

    return found;
}

int Mesh_vertex_paint_masks_length(PointerRNA *ptr)
{
    return rna_Mesh_vertex_paint_masks_length(ptr);
}

static PointerRNA Mesh_vertex_paint_masks_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPaintMaskLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_paint_masks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_vertex_paint_masks;

    rna_Mesh_vertex_paint_masks_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_paint_masks_get(iter);
    }
}

void Mesh_vertex_paint_masks_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_paint_masks_get(iter);
    }
}

void Mesh_vertex_paint_masks_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_vertex_paint_masks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_vertex_paint_masks_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_paint_masks_get(&iter); }
    }

    Mesh_vertex_paint_masks_end(&iter);

    return found;
}

int Mesh_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_length(ptr);
}

static PointerRNA Mesh_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_iterator_get(iter);
}

void Mesh_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_attributes;

    rna_AttributeGroup_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_attributes_get(iter);
    }
}

void Mesh_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_attributes_get(iter);
    }
}

void Mesh_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_color_attributes_length(PointerRNA *ptr)
{
    return rna_AttributeGroup_color_length(ptr);
}

static PointerRNA Mesh_color_attributes_get(CollectionPropertyIterator *iter)
{
    return rna_AttributeGroup_color_iterator_get(iter);
}

void Mesh_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_color_attributes;

    rna_AttributeGroup_color_iterator_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_color_attributes_get(iter);
    }
}

void Mesh_color_attributes_next(CollectionPropertyIterator *iter)
{
    rna_AttributeGroup_color_iterator_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_color_attributes_get(iter);
    }
}

void Mesh_color_attributes_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

float Mesh_remesh_voxel_size_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->remesh_voxel_size);
}

void Mesh_remesh_voxel_size_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->remesh_voxel_size = CLAMPIS(value, 0.0001000000f, FLT_MAX);
}

float Mesh_remesh_voxel_adaptivity_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->remesh_voxel_adaptivity);
}

void Mesh_remesh_voxel_adaptivity_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->remesh_voxel_adaptivity = CLAMPIS(value, 0.0f, 1.0f);
}

bool Mesh_use_remesh_fix_poles_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 8192) != 0);
}

void Mesh_use_remesh_fix_poles_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 8192; }
    else { data->flag &= ~8192; }
}

bool Mesh_use_remesh_preserve_volume_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 16384) != 0);
}

void Mesh_use_remesh_preserve_volume_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 16384; }
    else { data->flag &= ~16384; }
}

bool Mesh_use_remesh_preserve_paint_mask_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 4096) != 0);
}

void Mesh_use_remesh_preserve_paint_mask_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 4096; }
    else { data->flag &= ~4096; }
}

bool Mesh_use_remesh_preserve_sculpt_face_sets_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 32768) != 0);
}

void Mesh_use_remesh_preserve_sculpt_face_sets_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 32768; }
    else { data->flag &= ~32768; }
}

bool Mesh_use_remesh_preserve_vertex_colors_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 256) != 0);
}

void Mesh_use_remesh_preserve_vertex_colors_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 256; }
    else { data->flag &= ~256; }
}

int Mesh_remesh_mode_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (int)(data->remesh_mode);
}

void Mesh_remesh_mode_set(PointerRNA *ptr, int value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->remesh_mode = value;
}

bool Mesh_use_mirror_x_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->symmetry) & 1) != 0);
}

void Mesh_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry |= 1; }
    else { data->symmetry &= ~1; }
}

bool Mesh_use_mirror_y_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->symmetry) & 2) != 0);
}

void Mesh_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry |= 2; }
    else { data->symmetry &= ~2; }
}

bool Mesh_use_mirror_z_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->symmetry) & 4) != 0);
}

void Mesh_use_mirror_z_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry |= 4; }
    else { data->symmetry &= ~4; }
}

bool Mesh_use_mirror_vertex_groups_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 1) != 0);
}

void Mesh_use_mirror_vertex_groups_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 1; }
    else { data->editflag &= ~1; }
}

bool Mesh_use_auto_smooth_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void Mesh_use_auto_smooth_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

float Mesh_auto_smooth_angle_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->smoothresh);
}

void Mesh_auto_smooth_angle_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->smoothresh = CLAMPIS(value, 0.0f, 3.1415927410f);
}

bool Mesh_has_custom_normals_get(PointerRNA *ptr)
{
    return rna_Mesh_has_custom_normals_get(ptr);
}

PointerRNA Mesh_texco_mesh_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

void Mesh_texco_mesh_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    Mesh *data = (Mesh *)(ptr->data);

    if (data->texcomesh) {
        id_us_min((ID *)data->texcomesh);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    data->texcomesh = value.data;
}

PointerRNA Mesh_shape_keys_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

bool Mesh_use_auto_texspace_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->texflag) & 1) != 0);
}

void Mesh_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->texflag |= 1; }
    else { data->texflag &= ~1; }
}

bool Mesh_use_mirror_topology_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 16) != 0);
}

void Mesh_use_mirror_topology_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 16; }
    else { data->editflag &= ~16; }
}

bool Mesh_use_paint_mask_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 8) != 0);
}

void Mesh_use_paint_mask_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 8; }
    else { data->editflag &= ~8; }
}

bool Mesh_use_paint_mask_vertex_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->editflag) & 32) != 0);
}

void Mesh_use_paint_mask_vertex_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag |= 32; }
    else { data->editflag &= ~32; }
}

bool Mesh_use_customdata_vertex_bevel_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->cd_flag) & 1) != 0);
}

void Mesh_use_customdata_vertex_bevel_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->cd_flag |= 1; }
    else { data->cd_flag &= ~1; }
}

bool Mesh_use_customdata_edge_bevel_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->cd_flag) & 2) != 0);
}

void Mesh_use_customdata_edge_bevel_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->cd_flag |= 2; }
    else { data->cd_flag &= ~2; }
}

bool Mesh_use_customdata_vertex_crease_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->cd_flag) & 8) != 0);
}

void Mesh_use_customdata_vertex_crease_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->cd_flag |= 8; }
    else { data->cd_flag &= ~8; }
}

bool Mesh_use_customdata_edge_crease_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->cd_flag) & 4) != 0);
}

void Mesh_use_customdata_edge_crease_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->cd_flag |= 4; }
    else { data->cd_flag &= ~4; }
}

int Mesh_total_vert_sel_get(PointerRNA *ptr)
{
    return rna_Mesh_tot_vert_get(ptr);
}

int Mesh_total_edge_sel_get(PointerRNA *ptr)
{
    return rna_Mesh_tot_edge_get(ptr);
}

int Mesh_total_face_sel_get(PointerRNA *ptr)
{
    return rna_Mesh_tot_face_get(ptr);
}

bool Mesh_is_editmode_get(PointerRNA *ptr)
{
    return rna_Mesh_is_editmode_get(ptr);
}

PointerRNA Mesh_animation_data_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

bool Mesh_auto_texspace_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (((data->texflag) & 1) != 0);
}

void Mesh_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->texflag |= 1; }
    else { data->texflag &= ~1; }
}

void Mesh_texspace_location_get(PointerRNA *ptr, float values[3])
{
    rna_Mesh_texspace_loc_get(ptr, values);
}

void Mesh_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->loc)[i] = values[i];
    }
}

void Mesh_texspace_size_get(PointerRNA *ptr, float values[3])
{
    rna_Mesh_texspace_size_get(ptr, values);
}

void Mesh_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->size)[i] = values[i];
    }
}

int Mesh_materials_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->mat == NULL) ? 0 : data->totcol;
}

static PointerRNA Mesh_materials_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Mesh_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Mesh_materials;

    rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

    if (iter->valid) {
        iter->ptr = Mesh_materials_get(iter);
    }
}

void Mesh_materials_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = Mesh_materials_get(iter);
    }
}

void Mesh_materials_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int Mesh_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    Mesh_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_materials_get(&iter); }
    }

    Mesh_materials_end(&iter);

    return found;
}

int Mesh_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    extern int ID_name_length(PointerRNA *);
    extern void ID_name_get(PointerRNA *, char *);

    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_materials_begin(&iter, ptr);

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
        Mesh_materials_next(&iter);
    }
    Mesh_materials_end(&iter);

    return found;
}

static PointerRNA MeshVertices_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertices_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertices_rna_properties_get(iter);
    }
}

void MeshVertices_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertices_rna_properties_get(iter);
    }
}

void MeshVertices_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertices_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshEdges_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshEdges_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshEdges_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshEdges_rna_properties_get(iter);
    }
}

void MeshEdges_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshEdges_rna_properties_get(iter);
    }
}

void MeshEdges_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshEdges_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshEdges_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshLoops_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshLoops_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoops_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoops_rna_properties_get(iter);
    }
}

void MeshLoops_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoops_rna_properties_get(iter);
    }
}

void MeshLoops_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshLoops_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoops_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshPolygons_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygons_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygons_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygons_rna_properties_get(iter);
    }
}

void MeshPolygons_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygons_rna_properties_get(iter);
    }
}

void MeshPolygons_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygons_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygons_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshPolygons_active_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (int)(data->act_face);
}

void MeshPolygons_active_set(PointerRNA *ptr, int value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->act_face = value;
}

static PointerRNA MeshNormalValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshNormalValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshNormalValue_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshNormalValue_rna_properties_get(iter);
    }
}

void MeshNormalValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshNormalValue_rna_properties_get(iter);
    }
}

void MeshNormalValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshNormalValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshNormalValue_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshNormalValue_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

static PointerRNA MeshLoopTriangles_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshLoopTriangles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopTriangles_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangles_rna_properties_get(iter);
    }
}

void MeshLoopTriangles_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangles_rna_properties_get(iter);
    }
}

void MeshLoopTriangles_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshLoopTriangles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoopTriangles_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA UVLoopLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void UVLoopLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UVLoopLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UVLoopLayers_rna_properties_get(iter);
    }
}

void UVLoopLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UVLoopLayers_rna_properties_get(iter);
    }
}

void UVLoopLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int UVLoopLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UVLoopLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA UVLoopLayers_active_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_active_get(ptr);
}

void UVLoopLayers_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_uv_layer_active_set(ptr, value, reports);
}

int UVLoopLayers_active_index_get(PointerRNA *ptr)
{
    return rna_Mesh_uv_layer_active_index_get(ptr);
}

void UVLoopLayers_active_index_set(PointerRNA *ptr, int value)
{
    rna_Mesh_uv_layer_active_index_set(ptr, value);
}

static PointerRNA LoopColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void LoopColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_LoopColors_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = LoopColors_rna_properties_get(iter);
    }
}

void LoopColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = LoopColors_rna_properties_get(iter);
    }
}

void LoopColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int LoopColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA LoopColors_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA LoopColors_active_get(PointerRNA *ptr)
{
    return rna_Mesh_vertex_color_active_get(ptr);
}

void LoopColors_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_vertex_color_active_set(ptr, value, reports);
}

int LoopColors_active_index_get(PointerRNA *ptr)
{
    return rna_Mesh_vertex_color_active_index_get(ptr);
}

void LoopColors_active_index_set(PointerRNA *ptr, int value)
{
    rna_Mesh_vertex_color_active_index_set(ptr, value);
}

static PointerRNA VertColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertColors_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertColors_rna_properties_get(iter);
    }
}

void VertColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertColors_rna_properties_get(iter);
    }
}

void VertColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertColors_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA VertColors_active_get(PointerRNA *ptr)
{
    return rna_Mesh_sculpt_vertex_color_active_get(ptr);
}

void VertColors_active_set(PointerRNA *ptr, PointerRNA value, struct ReportList *reports)
{
    rna_Mesh_sculpt_vertex_color_active_set(ptr, value, reports);
}

int VertColors_active_index_get(PointerRNA *ptr)
{
    return rna_Mesh_sculpt_vertex_color_active_index_get(ptr);
}

void VertColors_active_index_set(PointerRNA *ptr, int value)
{
    rna_Mesh_sculpt_vertex_color_active_index_set(ptr, value);
}

static PointerRNA VertexFloatProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertexFloatProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexFloatProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexFloatProperties_rna_properties_get(iter);
    }
}

void VertexFloatProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexFloatProperties_rna_properties_get(iter);
    }
}

void VertexFloatProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertexFloatProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexFloatProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA VertexIntProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertexIntProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexIntProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexIntProperties_rna_properties_get(iter);
    }
}

void VertexIntProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexIntProperties_rna_properties_get(iter);
    }
}

void VertexIntProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertexIntProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexIntProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA VertexStringProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertexStringProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexStringProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexStringProperties_rna_properties_get(iter);
    }
}

void VertexStringProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexStringProperties_rna_properties_get(iter);
    }
}

void VertexStringProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertexStringProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexStringProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA PolygonFloatProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PolygonFloatProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PolygonFloatProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PolygonFloatProperties_rna_properties_get(iter);
    }
}

void PolygonFloatProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PolygonFloatProperties_rna_properties_get(iter);
    }
}

void PolygonFloatProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PolygonFloatProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PolygonFloatProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA PolygonIntProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PolygonIntProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PolygonIntProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PolygonIntProperties_rna_properties_get(iter);
    }
}

void PolygonIntProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PolygonIntProperties_rna_properties_get(iter);
    }
}

void PolygonIntProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PolygonIntProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PolygonIntProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA PolygonStringProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void PolygonStringProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_PolygonStringProperties_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = PolygonStringProperties_rna_properties_get(iter);
    }
}

void PolygonStringProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = PolygonStringProperties_rna_properties_get(iter);
    }
}

void PolygonStringProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int PolygonStringProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PolygonStringProperties_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

static PointerRNA MeshFaceMapLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshFaceMapLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshFaceMapLayers_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshFaceMapLayers_rna_properties_get(iter);
    }
}

void MeshFaceMapLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshFaceMapLayers_rna_properties_get(iter);
    }
}

void MeshFaceMapLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshFaceMapLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshFaceMapLayers_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA MeshFaceMapLayers_active_get(PointerRNA *ptr)
{
    return rna_Mesh_face_map_active_get(ptr);
}

static PointerRNA MeshSkinVertexLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshSkinVertexLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
    }
}

void MeshSkinVertexLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
    }
}

void MeshSkinVertexLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshSkinVertexLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshSkinVertexLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshSkinVertexLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshSkinVertexLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshSkinVertexLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshVertexLayer_name_set(ptr, value);
}

int MeshSkinVertexLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshSkinVertexLayer_data_length(ptr);
}

static PointerRNA MeshSkinVertexLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSkinVertex, rna_iterator_array_get(iter));
}

void MeshSkinVertexLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshSkinVertexLayer_data;

    rna_MeshSkinVertexLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_data_get(iter);
    }
}

void MeshSkinVertexLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_data_get(iter);
    }
}

void MeshSkinVertexLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshSkinVertexLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshSkinVertexLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshSkinVertexLayer_data_get(&iter); }
    }

    MeshSkinVertexLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshSkinVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshSkinVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshSkinVertex_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertex_rna_properties_get(iter);
    }
}

void MeshSkinVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertex_rna_properties_get(iter);
    }
}

void MeshSkinVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshSkinVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshSkinVertex_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshSkinVertex_radius_get(PointerRNA *ptr, float values[2])
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->radius)[i]);
    }
}

void MeshSkinVertex_radius_set(PointerRNA *ptr, const float values[2])
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->radius)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
    }
}

bool MeshSkinVertex_use_root_get(PointerRNA *ptr)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MeshSkinVertex_use_root_set(PointerRNA *ptr, bool value)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool MeshSkinVertex_use_loose_get(PointerRNA *ptr)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MeshSkinVertex_use_loose_set(PointerRNA *ptr, bool value)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

static PointerRNA MeshVertexCreaseLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexCreaseLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexCreaseLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexCreaseLayer_rna_properties_get(iter);
    }
}

void MeshVertexCreaseLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexCreaseLayer_rna_properties_get(iter);
    }
}

void MeshVertexCreaseLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexCreaseLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexCreaseLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshVertexCreaseLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshVertexCreaseLayer_data_length(ptr);
}

static PointerRNA MeshVertexCreaseLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexCrease, rna_iterator_array_get(iter));
}

void MeshVertexCreaseLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexCreaseLayer_data;

    rna_MeshVertexCreaseLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexCreaseLayer_data_get(iter);
    }
}

void MeshVertexCreaseLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexCreaseLayer_data_get(iter);
    }
}

void MeshVertexCreaseLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshVertexCreaseLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshVertexCreaseLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshVertexCreaseLayer_data_get(&iter); }
    }

    MeshVertexCreaseLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshVertexCrease_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexCrease_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexCrease_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexCrease_rna_properties_get(iter);
    }
}

void MeshVertexCrease_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexCrease_rna_properties_get(iter);
    }
}

void MeshVertexCrease_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexCrease_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexCrease_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float MeshVertexCrease_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

void MeshVertexCrease_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    data->f = value;
}

static PointerRNA MeshPaintMaskLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPaintMaskLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_rna_properties_get(iter);
    }
}

void MeshPaintMaskLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_rna_properties_get(iter);
    }
}

void MeshPaintMaskLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPaintMaskLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPaintMaskLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshPaintMaskLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshPaintMaskLayer_data_length(ptr);
}

static PointerRNA MeshPaintMaskLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPaintMaskProperty, rna_iterator_array_get(iter));
}

void MeshPaintMaskLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPaintMaskLayer_data;

    rna_MeshPaintMaskLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_data_get(iter);
    }
}

void MeshPaintMaskLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskLayer_data_get(iter);
    }
}

void MeshPaintMaskLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshPaintMaskLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshPaintMaskLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshPaintMaskLayer_data_get(&iter); }
    }

    MeshPaintMaskLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshPaintMaskProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPaintMaskProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskProperty_rna_properties_get(iter);
    }
}

void MeshPaintMaskProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPaintMaskProperty_rna_properties_get(iter);
    }
}

void MeshPaintMaskProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPaintMaskProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPaintMaskProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float MeshPaintMaskProperty_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

void MeshPaintMaskProperty_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    data->f = value;
}

static PointerRNA MeshVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertex_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertex_rna_properties_get(iter);
    }
}

void MeshVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertex_rna_properties_get(iter);
    }
}

void MeshVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertex_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertex_co_get(PointerRNA *ptr, float values[3])
{
    MVert *data = (MVert *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void MeshVertex_co_set(PointerRNA *ptr, const float values[3])
{
    MVert *data = (MVert *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

void MeshVertex_normal_get(PointerRNA *ptr, float values[3])
{
    rna_MeshVertex_normal_get(ptr, values);
}

bool MeshVertex_select_get(PointerRNA *ptr)
{
    MVert *data = (MVert *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MeshVertex_select_set(PointerRNA *ptr, bool value)
{
    MVert *data = (MVert *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool MeshVertex_hide_get(PointerRNA *ptr)
{
    MVert *data = (MVert *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void MeshVertex_hide_set(PointerRNA *ptr, bool value)
{
    MVert *data = (MVert *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

float MeshVertex_bevel_weight_get(PointerRNA *ptr)
{
    return rna_MeshVertex_bevel_weight_get(ptr);
}

void MeshVertex_bevel_weight_set(PointerRNA *ptr, float value)
{
    rna_MeshVertex_bevel_weight_set(ptr, value);
}

static PointerRNA MeshVertex_groups_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

void MeshVertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertex_groups;

    rna_MeshVertex_groups_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertex_groups_get(iter);
    }
}

void MeshVertex_groups_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertex_groups_get(iter);
    }
}

void MeshVertex_groups_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshVertex_index_get(PointerRNA *ptr)
{
    return rna_MeshVertex_index_get(ptr);
}

void MeshVertex_undeformed_co_get(PointerRNA *ptr, float values[3])
{
    rna_MeshVertex_undeformed_co_get(ptr, values);
}

static PointerRNA VertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void VertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_VertexGroupElement_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroupElement_rna_properties_get(iter);
    }
}

void VertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = VertexGroupElement_rna_properties_get(iter);
    }
}

void VertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int VertexGroupElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA VertexGroupElement_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int VertexGroupElement_group_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (int)(data->def_nr);
}

float VertexGroupElement_weight_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (float)(data->weight);
}

void VertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    data->weight = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA MeshEdge_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshEdge_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshEdge_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshEdge_rna_properties_get(iter);
    }
}

void MeshEdge_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshEdge_rna_properties_get(iter);
    }
}

void MeshEdge_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshEdge_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshEdge_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshEdge_vertices_get(PointerRNA *ptr, int values[2])
{
    MEdge *data = (MEdge *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (int)((&data->v1)[i]);
    }
}

void MeshEdge_vertices_set(PointerRNA *ptr, const int values[2])
{
    MEdge *data = (MEdge *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        (&data->v1)[i] = CLAMPIS(values[i], 0, INT_MAX);
    }
}

float MeshEdge_crease_get(PointerRNA *ptr)
{
    return rna_MEdge_crease_get(ptr);
}

void MeshEdge_crease_set(PointerRNA *ptr, float value)
{
    rna_MEdge_crease_set(ptr, value);
}

float MeshEdge_bevel_weight_get(PointerRNA *ptr)
{
    return rna_MEdge_bevel_weight_get(ptr);
}

void MeshEdge_bevel_weight_set(PointerRNA *ptr, float value)
{
    rna_MEdge_bevel_weight_set(ptr, value);
}

bool MeshEdge_select_get(PointerRNA *ptr)
{
    MEdge *data = (MEdge *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MeshEdge_select_set(PointerRNA *ptr, bool value)
{
    MEdge *data = (MEdge *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool MeshEdge_hide_get(PointerRNA *ptr)
{
    MEdge *data = (MEdge *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void MeshEdge_hide_set(PointerRNA *ptr, bool value)
{
    MEdge *data = (MEdge *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool MeshEdge_use_seam_get(PointerRNA *ptr)
{
    MEdge *data = (MEdge *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void MeshEdge_use_seam_set(PointerRNA *ptr, bool value)
{
    MEdge *data = (MEdge *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool MeshEdge_use_edge_sharp_get(PointerRNA *ptr)
{
    MEdge *data = (MEdge *)(ptr->data);
    return (((data->flag) & 512) != 0);
}

void MeshEdge_use_edge_sharp_set(PointerRNA *ptr, bool value)
{
    MEdge *data = (MEdge *)(ptr->data);
    if (value) { data->flag |= 512; }
    else { data->flag &= ~512; }
}

bool MeshEdge_is_loose_get(PointerRNA *ptr)
{
    MEdge *data = (MEdge *)(ptr->data);
    return (((data->flag) & 128) != 0);
}

void MeshEdge_is_loose_set(PointerRNA *ptr, bool value)
{
    MEdge *data = (MEdge *)(ptr->data);
    if (value) { data->flag |= 128; }
    else { data->flag &= ~128; }
}

bool MeshEdge_use_freestyle_mark_get(PointerRNA *ptr)
{
    return rna_MEdge_freestyle_edge_mark_get(ptr);
}

void MeshEdge_use_freestyle_mark_set(PointerRNA *ptr, bool value)
{
    rna_MEdge_freestyle_edge_mark_set(ptr, value);
}

int MeshEdge_index_get(PointerRNA *ptr)
{
    return rna_MeshEdge_index_get(ptr);
}

static PointerRNA MeshLoopTriangle_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshLoopTriangle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopTriangle_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangle_rna_properties_get(iter);
    }
}

void MeshLoopTriangle_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangle_rna_properties_get(iter);
    }
}

void MeshLoopTriangle_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshLoopTriangle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoopTriangle_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshLoopTriangle_vertices_get(PointerRNA *ptr, int values[3])
{
    rna_MeshLoopTriangle_verts_get(ptr, values);
}

void MeshLoopTriangle_loops_get(PointerRNA *ptr, int values[3])
{
    MLoopTri *data = (MLoopTri *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->tri)[i]);
    }
}

int MeshLoopTriangle_polygon_index_get(PointerRNA *ptr)
{
    MLoopTri *data = (MLoopTri *)(ptr->data);
    return (int)(data->poly);
}

void MeshLoopTriangle_normal_get(PointerRNA *ptr, float values[3])
{
    rna_MeshLoopTriangle_normal_get(ptr, values);
}

void MeshLoopTriangle_split_normals_get(PointerRNA *ptr, float values[9])
{
    rna_MeshLoopTriangle_split_normals_get(ptr, values);
}

float MeshLoopTriangle_area_get(PointerRNA *ptr)
{
    return rna_MeshLoopTriangle_area_get(ptr);
}

int MeshLoopTriangle_index_get(PointerRNA *ptr)
{
    return rna_MeshLoopTriangle_index_get(ptr);
}

int MeshLoopTriangle_material_index_get(PointerRNA *ptr)
{
    return rna_MeshLoopTriangle_material_index_get(ptr);
}

bool MeshLoopTriangle_use_smooth_get(PointerRNA *ptr)
{
    return rna_MeshLoopTriangle_use_smooth_get(ptr);
}

static PointerRNA MeshLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoop_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoop_rna_properties_get(iter);
    }
}

void MeshLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoop_rna_properties_get(iter);
    }
}

void MeshLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoop_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshLoop_vertex_index_get(PointerRNA *ptr)
{
    MLoop *data = (MLoop *)(ptr->data);
    return (int)(data->v);
}

void MeshLoop_vertex_index_set(PointerRNA *ptr, int value)
{
    MLoop *data = (MLoop *)(ptr->data);
    data->v = CLAMPIS(value, 0, INT_MAX);
}

int MeshLoop_edge_index_get(PointerRNA *ptr)
{
    MLoop *data = (MLoop *)(ptr->data);
    return (int)(data->e);
}

void MeshLoop_edge_index_set(PointerRNA *ptr, int value)
{
    MLoop *data = (MLoop *)(ptr->data);
    data->e = CLAMPIS(value, 0, INT_MAX);
}

int MeshLoop_index_get(PointerRNA *ptr)
{
    return rna_MeshLoop_index_get(ptr);
}

void MeshLoop_normal_get(PointerRNA *ptr, float values[3])
{
    rna_MeshLoop_normal_get(ptr, values);
}

void MeshLoop_normal_set(PointerRNA *ptr, const float values[3])
{
    rna_MeshLoop_normal_set(ptr, values);
}

void MeshLoop_tangent_get(PointerRNA *ptr, float values[3])
{
    rna_MeshLoop_tangent_get(ptr, values);
}

float MeshLoop_bitangent_sign_get(PointerRNA *ptr)
{
    return rna_MeshLoop_bitangent_sign_get(ptr);
}

void MeshLoop_bitangent_get(PointerRNA *ptr, float values[3])
{
    rna_MeshLoop_bitangent_get(ptr, values);
}

static PointerRNA MeshPolygon_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygon_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygon_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygon_rna_properties_get(iter);
    }
}

void MeshPolygon_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygon_rna_properties_get(iter);
    }
}

void MeshPolygon_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygon_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygon_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshPolygon_vertices_get(PointerRNA *ptr, int values[])
{
    rna_MeshPoly_vertices_get(ptr, values);
}

void MeshPolygon_vertices_set(PointerRNA *ptr, const int values[])
{
    rna_MeshPoly_vertices_set(ptr, values);
}

int MeshPolygon_loop_start_get(PointerRNA *ptr)
{
    MPoly *data = (MPoly *)(ptr->data);
    return (int)(data->loopstart);
}

void MeshPolygon_loop_start_set(PointerRNA *ptr, int value)
{
    MPoly *data = (MPoly *)(ptr->data);
    data->loopstart = CLAMPIS(value, 0, INT_MAX);
}

int MeshPolygon_loop_total_get(PointerRNA *ptr)
{
    MPoly *data = (MPoly *)(ptr->data);
    return (int)(data->totloop);
}

void MeshPolygon_loop_total_set(PointerRNA *ptr, int value)
{
    MPoly *data = (MPoly *)(ptr->data);
    data->totloop = CLAMPIS(value, 0, INT_MAX);
}

int MeshPolygon_material_index_get(PointerRNA *ptr)
{
    MPoly *data = (MPoly *)(ptr->data);
    return (int)(data->mat_nr);
}

void MeshPolygon_material_index_set(PointerRNA *ptr, int value)
{
    MPoly *data = (MPoly *)(ptr->data);
    data->mat_nr = CLAMPIS(value, 0, 32767);
}

bool MeshPolygon_select_get(PointerRNA *ptr)
{
    MPoly *data = (MPoly *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MeshPolygon_select_set(PointerRNA *ptr, bool value)
{
    MPoly *data = (MPoly *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool MeshPolygon_hide_get(PointerRNA *ptr)
{
    MPoly *data = (MPoly *)(ptr->data);
    return (((data->flag) & 16) != 0);
}

void MeshPolygon_hide_set(PointerRNA *ptr, bool value)
{
    MPoly *data = (MPoly *)(ptr->data);
    if (value) { data->flag |= 16; }
    else { data->flag &= ~16; }
}

bool MeshPolygon_use_smooth_get(PointerRNA *ptr)
{
    MPoly *data = (MPoly *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MeshPolygon_use_smooth_set(PointerRNA *ptr, bool value)
{
    MPoly *data = (MPoly *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

bool MeshPolygon_use_freestyle_mark_get(PointerRNA *ptr)
{
    return rna_MPoly_freestyle_face_mark_get(ptr);
}

void MeshPolygon_use_freestyle_mark_set(PointerRNA *ptr, bool value)
{
    rna_MPoly_freestyle_face_mark_set(ptr, value);
}

void MeshPolygon_normal_get(PointerRNA *ptr, float values[3])
{
    rna_MeshPolygon_normal_get(ptr, values);
}

void MeshPolygon_center_get(PointerRNA *ptr, float values[3])
{
    rna_MeshPolygon_center_get(ptr, values);
}

float MeshPolygon_area_get(PointerRNA *ptr)
{
    return rna_MeshPolygon_area_get(ptr);
}

int MeshPolygon_index_get(PointerRNA *ptr)
{
    return rna_MeshPolygon_index_get(ptr);
}

static PointerRNA MeshUVLoopLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshUVLoopLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
    }
}

void MeshUVLoopLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
    }
}

void MeshUVLoopLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshUVLoopLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshUVLoopLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshUVLoopLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_data_length(ptr);
}

static PointerRNA MeshUVLoopLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshUVLoop, rna_iterator_array_get(iter));
}

void MeshUVLoopLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoopLayer_data;

    rna_MeshUVLoopLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_data_get(iter);
    }
}

void MeshUVLoopLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_data_get(iter);
    }
}

void MeshUVLoopLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshUVLoopLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshUVLoopLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshUVLoopLayer_data_get(&iter); }
    }

    MeshUVLoopLayer_data_end(&iter);

    return found;
}

void MeshUVLoopLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshUVLoopLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshUVLoopLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshLoopLayer_name_set(ptr, value);
}

bool MeshUVLoopLayer_active_get(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_active_get(ptr);
}

void MeshUVLoopLayer_active_set(PointerRNA *ptr, bool value)
{
    rna_MeshUVLoopLayer_active_set(ptr, value);
}

bool MeshUVLoopLayer_active_render_get(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_active_render_get(ptr);
}

void MeshUVLoopLayer_active_render_set(PointerRNA *ptr, bool value)
{
    rna_MeshUVLoopLayer_active_render_set(ptr, value);
}

bool MeshUVLoopLayer_active_clone_get(PointerRNA *ptr)
{
    return rna_MeshUVLoopLayer_clone_get(ptr);
}

void MeshUVLoopLayer_active_clone_set(PointerRNA *ptr, bool value)
{
    rna_MeshUVLoopLayer_clone_set(ptr, value);
}

static PointerRNA MeshUVLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshUVLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshUVLoop_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoop_rna_properties_get(iter);
    }
}

void MeshUVLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoop_rna_properties_get(iter);
    }
}

void MeshUVLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshUVLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshUVLoop_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshUVLoop_uv_get(PointerRNA *ptr, float values[2])
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->uv)[i]);
    }
}

void MeshUVLoop_uv_set(PointerRNA *ptr, const float values[2])
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 2; i++) {
        ((float *)data->uv)[i] = values[i];
    }
}

bool MeshUVLoop_pin_uv_get(PointerRNA *ptr)
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    return (((data->flag) & 4) != 0);
}

void MeshUVLoop_pin_uv_set(PointerRNA *ptr, bool value)
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    if (value) { data->flag |= 4; }
    else { data->flag &= ~4; }
}

bool MeshUVLoop_select_get(PointerRNA *ptr)
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    return (((data->flag) & 2) != 0);
}

void MeshUVLoop_select_set(PointerRNA *ptr, bool value)
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    if (value) { data->flag |= 2; }
    else { data->flag &= ~2; }
}

bool MeshUVLoop_select_edge_get(PointerRNA *ptr)
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    return (((data->flag) & 1) != 0);
}

void MeshUVLoop_select_edge_set(PointerRNA *ptr, bool value)
{
    MLoopUV *data = (MLoopUV *)(ptr->data);
    if (value) { data->flag |= 1; }
    else { data->flag &= ~1; }
}

static PointerRNA MeshLoopColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshLoopColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
    }
}

void MeshLoopColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
    }
}

void MeshLoopColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshLoopColorLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoopColorLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshLoopColorLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshLoopColorLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshLoopColorLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshLoopLayer_name_set(ptr, value);
}

bool MeshLoopColorLayer_active_get(PointerRNA *ptr)
{
    return rna_MeshLoopColorLayer_active_get(ptr);
}

void MeshLoopColorLayer_active_set(PointerRNA *ptr, bool value)
{
    rna_MeshLoopColorLayer_active_set(ptr, value);
}

bool MeshLoopColorLayer_active_render_get(PointerRNA *ptr)
{
    return rna_MeshLoopColorLayer_active_render_get(ptr);
}

void MeshLoopColorLayer_active_render_set(PointerRNA *ptr, bool value)
{
    rna_MeshLoopColorLayer_active_render_set(ptr, value);
}

int MeshLoopColorLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshLoopColorLayer_data_length(ptr);
}

static PointerRNA MeshLoopColorLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshLoopColor, rna_iterator_array_get(iter));
}

void MeshLoopColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopColorLayer_data;

    rna_MeshLoopColorLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_data_get(iter);
    }
}

void MeshLoopColorLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_data_get(iter);
    }
}

void MeshLoopColorLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshLoopColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshLoopColorLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshLoopColorLayer_data_get(&iter); }
    }

    MeshLoopColorLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshLoopColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshLoopColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshLoopColor_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColor_rna_properties_get(iter);
    }
}

void MeshLoopColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColor_rna_properties_get(iter);
    }
}

void MeshLoopColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshLoopColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshLoopColor_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshLoopColor_color_get(PointerRNA *ptr, float values[4])
{
    rna_MeshLoopColor_color_get(ptr, values);
}

void MeshLoopColor_color_set(PointerRNA *ptr, const float values[4])
{
    rna_MeshLoopColor_color_set(ptr, values);
}

static PointerRNA MeshVertColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertColorLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertColorLayer_rna_properties_get(iter);
    }
}

void MeshVertColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertColorLayer_rna_properties_get(iter);
    }
}

void MeshVertColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertColorLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertColorLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertColorLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshVertColorLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshVertColorLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshVertexLayer_name_set(ptr, value);
}

bool MeshVertColorLayer_active_get(PointerRNA *ptr)
{
    return rna_MeshVertColorLayer_active_get(ptr);
}

void MeshVertColorLayer_active_set(PointerRNA *ptr, bool value)
{
    rna_MeshVertColorLayer_active_set(ptr, value);
}

bool MeshVertColorLayer_active_render_get(PointerRNA *ptr)
{
    return rna_MeshVertColorLayer_active_render_get(ptr);
}

void MeshVertColorLayer_active_render_set(PointerRNA *ptr, bool value)
{
    rna_MeshVertColorLayer_active_render_set(ptr, value);
}

int MeshVertColorLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshVertColorLayer_data_length(ptr);
}

static PointerRNA MeshVertColorLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertColor, rna_iterator_array_get(iter));
}

void MeshVertColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertColorLayer_data;

    rna_MeshVertColorLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertColorLayer_data_get(iter);
    }
}

void MeshVertColorLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertColorLayer_data_get(iter);
    }
}

void MeshVertColorLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshVertColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshVertColorLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshVertColorLayer_data_get(&iter); }
    }

    MeshVertColorLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshVertColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertColor_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertColor_rna_properties_get(iter);
    }
}

void MeshVertColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertColor_rna_properties_get(iter);
    }
}

void MeshVertColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertColor_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertColor_color_get(PointerRNA *ptr, float values[4])
{
    MPropCol *data = (MPropCol *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void MeshVertColor_color_set(PointerRNA *ptr, const float values[4])
{
    MPropCol *data = (MPropCol *)(ptr->data);
    unsigned int i;

    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = CLAMPIS(values[i], 0.0f, 1.0f);
    }
}

static PointerRNA MeshVertexFloatPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexFloatPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexFloatPropertyLayer_rna_properties_get(iter);
    }
}

void MeshVertexFloatPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexFloatPropertyLayer_rna_properties_get(iter);
    }
}

void MeshVertexFloatPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexFloatPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexFloatPropertyLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertexFloatPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshVertexFloatPropertyLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshVertexFloatPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshAnyLayer_name_set(ptr, value);
}

int MeshVertexFloatPropertyLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshVertexFloatPropertyLayer_data_length(ptr);
}

static PointerRNA MeshVertexFloatPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexFloatProperty, rna_iterator_array_get(iter));
}

void MeshVertexFloatPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_data;

    rna_MeshVertexFloatPropertyLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexFloatPropertyLayer_data_get(iter);
    }
}

void MeshVertexFloatPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexFloatPropertyLayer_data_get(iter);
    }
}

void MeshVertexFloatPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshVertexFloatPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshVertexFloatPropertyLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshVertexFloatPropertyLayer_data_get(&iter); }
    }

    MeshVertexFloatPropertyLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshVertexFloatProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexFloatProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexFloatProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexFloatProperty_rna_properties_get(iter);
    }
}

void MeshVertexFloatProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexFloatProperty_rna_properties_get(iter);
    }
}

void MeshVertexFloatProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexFloatProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexFloatProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float MeshVertexFloatProperty_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

void MeshVertexFloatProperty_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    data->f = value;
}

static PointerRNA MeshPolygonFloatPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygonFloatPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonFloatPropertyLayer_rna_properties_get(iter);
    }
}

void MeshPolygonFloatPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonFloatPropertyLayer_rna_properties_get(iter);
    }
}

void MeshPolygonFloatPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygonFloatPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygonFloatPropertyLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshPolygonFloatPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshPolygonFloatPropertyLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshPolygonFloatPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshAnyLayer_name_set(ptr, value);
}

int MeshPolygonFloatPropertyLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshPolygonFloatPropertyLayer_data_length(ptr);
}

static PointerRNA MeshPolygonFloatPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygonFloatProperty, rna_iterator_array_get(iter));
}

void MeshPolygonFloatPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_data;

    rna_MeshPolygonFloatPropertyLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonFloatPropertyLayer_data_get(iter);
    }
}

void MeshPolygonFloatPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonFloatPropertyLayer_data_get(iter);
    }
}

void MeshPolygonFloatPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshPolygonFloatPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshPolygonFloatPropertyLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshPolygonFloatPropertyLayer_data_get(&iter); }
    }

    MeshPolygonFloatPropertyLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshPolygonFloatProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygonFloatProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonFloatProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonFloatProperty_rna_properties_get(iter);
    }
}

void MeshPolygonFloatProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonFloatProperty_rna_properties_get(iter);
    }
}

void MeshPolygonFloatProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygonFloatProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygonFloatProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

float MeshPolygonFloatProperty_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

void MeshPolygonFloatProperty_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    data->f = value;
}

static PointerRNA MeshVertexIntPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexIntPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexIntPropertyLayer_rna_properties_get(iter);
    }
}

void MeshVertexIntPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexIntPropertyLayer_rna_properties_get(iter);
    }
}

void MeshVertexIntPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexIntPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexIntPropertyLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertexIntPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshVertexIntPropertyLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshVertexIntPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshAnyLayer_name_set(ptr, value);
}

int MeshVertexIntPropertyLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshVertexIntPropertyLayer_data_length(ptr);
}

static PointerRNA MeshVertexIntPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexIntProperty, rna_iterator_array_get(iter));
}

void MeshVertexIntPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_data;

    rna_MeshVertexIntPropertyLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexIntPropertyLayer_data_get(iter);
    }
}

void MeshVertexIntPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexIntPropertyLayer_data_get(iter);
    }
}

void MeshVertexIntPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshVertexIntPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshVertexIntPropertyLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshVertexIntPropertyLayer_data_get(&iter); }
    }

    MeshVertexIntPropertyLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshVertexIntProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexIntProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexIntProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexIntProperty_rna_properties_get(iter);
    }
}

void MeshVertexIntProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexIntProperty_rna_properties_get(iter);
    }
}

void MeshVertexIntProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexIntProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexIntProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshVertexIntProperty_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

void MeshVertexIntProperty_value_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    data->i = value;
}

static PointerRNA MeshPolygonIntPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygonIntPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonIntPropertyLayer_rna_properties_get(iter);
    }
}

void MeshPolygonIntPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonIntPropertyLayer_rna_properties_get(iter);
    }
}

void MeshPolygonIntPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygonIntPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygonIntPropertyLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshPolygonIntPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshPolygonIntPropertyLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshPolygonIntPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshAnyLayer_name_set(ptr, value);
}

int MeshPolygonIntPropertyLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshPolygonIntPropertyLayer_data_length(ptr);
}

static PointerRNA MeshPolygonIntPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygonIntProperty, rna_iterator_array_get(iter));
}

void MeshPolygonIntPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_data;

    rna_MeshPolygonIntPropertyLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonIntPropertyLayer_data_get(iter);
    }
}

void MeshPolygonIntPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonIntPropertyLayer_data_get(iter);
    }
}

void MeshPolygonIntPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshPolygonIntPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshPolygonIntPropertyLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshPolygonIntPropertyLayer_data_get(&iter); }
    }

    MeshPolygonIntPropertyLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshPolygonIntProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygonIntProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonIntProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonIntProperty_rna_properties_get(iter);
    }
}

void MeshPolygonIntProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonIntProperty_rna_properties_get(iter);
    }
}

void MeshPolygonIntProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygonIntProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygonIntProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshPolygonIntProperty_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

void MeshPolygonIntProperty_value_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    data->i = value;
}

static PointerRNA MeshVertexStringPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexStringPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexStringPropertyLayer_rna_properties_get(iter);
    }
}

void MeshVertexStringPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexStringPropertyLayer_rna_properties_get(iter);
    }
}

void MeshVertexStringPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexStringPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexStringPropertyLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertexStringPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshVertexStringPropertyLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshVertexStringPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshAnyLayer_name_set(ptr, value);
}

int MeshVertexStringPropertyLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshVertexStringPropertyLayer_data_length(ptr);
}

static PointerRNA MeshVertexStringPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertexStringProperty, rna_iterator_array_get(iter));
}

void MeshVertexStringPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_data;

    rna_MeshVertexStringPropertyLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexStringPropertyLayer_data_get(iter);
    }
}

void MeshVertexStringPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexStringPropertyLayer_data_get(iter);
    }
}

void MeshVertexStringPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshVertexStringPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshVertexStringPropertyLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshVertexStringPropertyLayer_data_get(&iter); }
    }

    MeshVertexStringPropertyLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshVertexStringProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshVertexStringProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshVertexStringProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertexStringProperty_rna_properties_get(iter);
    }
}

void MeshVertexStringProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshVertexStringProperty_rna_properties_get(iter);
    }
}

void MeshVertexStringProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshVertexStringProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshVertexStringProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshVertexStringProperty_value_get(PointerRNA *ptr, char *value)
{
    rna_MeshStringProperty_s_get(ptr, value);
}

int MeshVertexStringProperty_value_length(PointerRNA *ptr)
{
    return rna_MeshStringProperty_s_length(ptr);
}

void MeshVertexStringProperty_value_set(PointerRNA *ptr, const char *value)
{
    rna_MeshStringProperty_s_set(ptr, value);
}

static PointerRNA MeshPolygonStringPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygonStringPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonStringPropertyLayer_rna_properties_get(iter);
    }
}

void MeshPolygonStringPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonStringPropertyLayer_rna_properties_get(iter);
    }
}

void MeshPolygonStringPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygonStringPropertyLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygonStringPropertyLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshPolygonStringPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshPolygonStringPropertyLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshPolygonStringPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshAnyLayer_name_set(ptr, value);
}

int MeshPolygonStringPropertyLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshPolygonStringPropertyLayer_data_length(ptr);
}

static PointerRNA MeshPolygonStringPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshPolygonStringProperty, rna_iterator_array_get(iter));
}

void MeshPolygonStringPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_data;

    rna_MeshPolygonStringPropertyLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonStringPropertyLayer_data_get(iter);
    }
}

void MeshPolygonStringPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonStringPropertyLayer_data_get(iter);
    }
}

void MeshPolygonStringPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshPolygonStringPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshPolygonStringPropertyLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshPolygonStringPropertyLayer_data_get(&iter); }
    }

    MeshPolygonStringPropertyLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshPolygonStringProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshPolygonStringProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshPolygonStringProperty_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygonStringProperty_rna_properties_get(iter);
    }
}

void MeshPolygonStringProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygonStringProperty_rna_properties_get(iter);
    }
}

void MeshPolygonStringProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshPolygonStringProperty_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshPolygonStringProperty_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshPolygonStringProperty_value_get(PointerRNA *ptr, char *value)
{
    rna_MeshStringProperty_s_get(ptr, value);
}

int MeshPolygonStringProperty_value_length(PointerRNA *ptr)
{
    return rna_MeshStringProperty_s_length(ptr);
}

void MeshPolygonStringProperty_value_set(PointerRNA *ptr, const char *value)
{
    rna_MeshStringProperty_s_set(ptr, value);
}

static PointerRNA MeshFaceMapLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshFaceMapLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshFaceMapLayer_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshFaceMapLayer_rna_properties_get(iter);
    }
}

void MeshFaceMapLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshFaceMapLayer_rna_properties_get(iter);
    }
}

void MeshFaceMapLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshFaceMapLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshFaceMapLayer_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void MeshFaceMapLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_strncpy_utf8(value, data->name, 64);
}

int MeshFaceMapLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshFaceMapLayer_name_set(PointerRNA *ptr, const char *value)
{
    rna_MeshPolyLayer_name_set(ptr, value);
}

int MeshFaceMapLayer_data_length(PointerRNA *ptr)
{
    return rna_MeshFaceMapLayer_data_length(ptr);
}

static PointerRNA MeshFaceMapLayer_data_get(CollectionPropertyIterator *iter)
{
    return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFaceMap, rna_iterator_array_get(iter));
}

void MeshFaceMapLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshFaceMapLayer_data;

    rna_MeshFaceMapLayer_data_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshFaceMapLayer_data_get(iter);
    }
}

void MeshFaceMapLayer_data_next(CollectionPropertyIterator *iter)
{
    rna_iterator_array_next(iter);

    if (iter->valid) {
        iter->ptr = MeshFaceMapLayer_data_get(iter);
    }
}

void MeshFaceMapLayer_data_end(CollectionPropertyIterator *iter)
{
    rna_iterator_array_end(iter);
}

int MeshFaceMapLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    int found = 0;
    CollectionPropertyIterator iter;

    MeshFaceMapLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshFaceMapLayer_data_get(&iter); }
    }

    MeshFaceMapLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshFaceMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void MeshFaceMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_MeshFaceMap_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshFaceMap_rna_properties_get(iter);
    }
}

void MeshFaceMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = MeshFaceMap_rna_properties_get(iter);
    }
}

void MeshFaceMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int MeshFaceMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA MeshFaceMap_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

int MeshFaceMap_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

void MeshFaceMap_value_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    data->i = value;
}

void Mesh_transform_func(struct Mesh *_self, float matrix[16], bool shape_keys)
{
	rna_Mesh_transform(_self, matrix, shape_keys);
}

void Mesh_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Mesh_transform(_self, matrix, shape_keys);
}

void Mesh_flip_normals_func(struct Mesh *_self)
{
	rna_Mesh_flip_normals(_self);
}

void Mesh_flip_normals_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_flip_normals(_self);
}

void Mesh_calc_normals_func(struct Mesh *_self)
{
	BKE_mesh_calc_normals(_self);
}

void Mesh_calc_normals_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	BKE_mesh_calc_normals(_self);
}

void Mesh_create_normals_split_func(struct Mesh *_self)
{
	rna_Mesh_create_normals_split(_self);
}

void Mesh_create_normals_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_create_normals_split(_self);
}

void Mesh_calc_normals_split_func(struct Mesh *_self)
{
	BKE_mesh_calc_normals_split(_self);
}

void Mesh_calc_normals_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	BKE_mesh_calc_normals_split(_self);
}

void Mesh_free_normals_split_func(struct Mesh *_self)
{
	rna_Mesh_free_normals_split(_self);
}

void Mesh_free_normals_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_free_normals_split(_self);
}

void Mesh_split_faces_func(struct Mesh *_self, bool free_loop_normals)
{
	rna_Mesh_split_faces(_self, free_loop_normals);
}

void Mesh_split_faces_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool free_loop_normals;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	free_loop_normals = *((bool *)_data);
	
	rna_Mesh_split_faces(_self, free_loop_normals);
}

void Mesh_calc_tangents_func(struct Mesh *_self, ReportList *reports, const char * uvmap)
{
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

void Mesh_calc_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * uvmap;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	uvmap = *((const char * *)_data);
	
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

void Mesh_free_tangents_func(struct Mesh *_self)
{
	rna_Mesh_free_tangents(_self);
}

void Mesh_free_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_free_tangents(_self);
}

void Mesh_calc_loop_triangles_func(struct Mesh *_self)
{
	rna_Mesh_calc_looptri(_self);
}

void Mesh_calc_loop_triangles_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_calc_looptri(_self);
}

void Mesh_calc_smooth_groups_func(struct Mesh *_self, bool use_bitflags, int *poly_groups_len, int **poly_groups, int *groups)
{
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, poly_groups_len, poly_groups, groups);
}

void Mesh_calc_smooth_groups_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool use_bitflags;
	int *poly_groups_len;
	int **poly_groups;
	int *groups;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	use_bitflags = *((bool *)_data);
	_data += 8;
	poly_groups_len = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	poly_groups = ((int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	groups = ((int *)_data);
	
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, poly_groups_len, poly_groups, groups);
}

void Mesh_normals_split_custom_set_func(struct Mesh *_self, ReportList *reports, int normals_len, float *normals)
{
	rna_Mesh_normals_split_custom_set(_self, reports, normals_len, normals);
}

void Mesh_normals_split_custom_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int normals_len;
	float *normals;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	normals_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	normals = *((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Mesh_normals_split_custom_set(_self, reports, normals_len, normals);
}

void Mesh_normals_split_custom_set_from_vertices_func(struct Mesh *_self, ReportList *reports, int normals_len, float *normals)
{
	rna_Mesh_normals_split_custom_set_from_vertices(_self, reports, normals_len, normals);
}

void Mesh_normals_split_custom_set_from_vertices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int normals_len;
	float *normals;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	normals_len = (int)((ParameterDynAlloc *)_data)->array_tot;
	normals = *((float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Mesh_normals_split_custom_set_from_vertices(_self, reports, normals_len, normals);
}

void Mesh_update_func(struct Mesh *_self, bContext *C, bool calc_edges, bool calc_edges_loose)
{
	ED_mesh_update(_self, C, calc_edges, calc_edges_loose);
}

void Mesh_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool calc_edges;
	bool calc_edges_loose;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	calc_edges = *((bool *)_data);
	_data += 8;
	calc_edges_loose = *((bool *)_data);
	
	ED_mesh_update(_self, C, calc_edges, calc_edges_loose);
}

void Mesh_update_gpu_tag_func(struct Mesh *_self)
{
	rna_Mesh_update_gpu_tag(_self);
}

void Mesh_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_update_gpu_tag(_self);
}

const char * Mesh_unit_test_compare_func(struct Mesh *_self, struct Mesh *mesh, float threshold)
{
	return rna_Mesh_unit_test_compare(_self, mesh, threshold);
}

void Mesh_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct Mesh *mesh;
	float threshold;
	const char * result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((struct Mesh **)_data);
	_data += 8;
	threshold = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Mesh_unit_test_compare(_self, mesh, threshold);
	*((const char * *)_retdata) = result;
}

void Mesh_clear_geometry_func(struct Mesh *_self)
{
	rna_Mesh_clear_geometry(_self);
}

void Mesh_clear_geometry_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self = (struct Mesh *)_ptr->data;
	
	rna_Mesh_clear_geometry(_self);
}

bool Mesh_validate_func(struct Mesh *_self, bool verbose, bool clean_customdata)
{
	return BKE_mesh_validate(_self, verbose, clean_customdata);
}

void Mesh_validate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool verbose;
	bool clean_customdata;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	verbose = *((bool *)_data);
	_data += 8;
	clean_customdata = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = BKE_mesh_validate(_self, verbose, clean_customdata);
	*((bool *)_retdata) = result;
}

bool Mesh_validate_material_indices_func(struct Mesh *_self)
{
	return BKE_mesh_validate_material_indices(_self);
}

void Mesh_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = BKE_mesh_validate_material_indices(_self);
	*((bool *)_retdata) = result;
}

void Mesh_count_selected_items_func(struct Mesh *_self, int result[3])
{
	rna_Mesh_count_selected_items (_self, result);
}

void Mesh_count_selected_items_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int *result;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	result = ((int *)_data);
	
	rna_Mesh_count_selected_items (_self, result);
}

/* Repeated prototypes to detect errors */

void rna_Mesh_transform(struct Mesh *_self, float matrix[16], bool shape_keys);
void rna_Mesh_flip_normals(struct Mesh *_self);
void BKE_mesh_calc_normals(struct Mesh *_self);
void rna_Mesh_create_normals_split(struct Mesh *_self);
void BKE_mesh_calc_normals_split(struct Mesh *_self);
void rna_Mesh_free_normals_split(struct Mesh *_self);
void rna_Mesh_split_faces(struct Mesh *_self, bool free_loop_normals);
void rna_Mesh_calc_tangents(struct Mesh *_self, ReportList *reports, const char * uvmap);
void rna_Mesh_free_tangents(struct Mesh *_self);
void rna_Mesh_calc_looptri(struct Mesh *_self);
void rna_Mesh_calc_smooth_groups(struct Mesh *_self, bool use_bitflags, int *poly_groups_len, int **poly_groups, int *groups);
void rna_Mesh_normals_split_custom_set(struct Mesh *_self, ReportList *reports, int normals_len, float *normals);
void rna_Mesh_normals_split_custom_set_from_vertices(struct Mesh *_self, ReportList *reports, int normals_len, float *normals);
void ED_mesh_update(struct Mesh *_self, bContext *C, bool calc_edges, bool calc_edges_loose);
void rna_Mesh_update_gpu_tag(struct Mesh *_self);
const char * rna_Mesh_unit_test_compare(struct Mesh *_self, struct Mesh *mesh, float threshold);
void rna_Mesh_clear_geometry(struct Mesh *_self);
bool BKE_mesh_validate(struct Mesh *_self, bool verbose, bool clean_customdata);
bool BKE_mesh_validate_material_indices(struct Mesh *_self);
void rna_Mesh_count_selected_items (struct Mesh *_self, int result[3]);

void MeshVertices_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_verts_add(_self, reports, count);
}

void MeshVertices_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_verts_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_verts_add(struct Mesh *_self, ReportList *reports, int count);

void MeshEdges_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_edges_add(_self, reports, count);
}

void MeshEdges_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_edges_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_edges_add(struct Mesh *_self, ReportList *reports, int count);

void MeshLoops_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_loops_add(_self, reports, count);
}

void MeshLoops_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_loops_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_loops_add(struct Mesh *_self, ReportList *reports, int count);

void MeshPolygons_add_func(struct Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_polys_add(_self, reports, count);
}

void MeshPolygons_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_polys_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_polys_add(struct Mesh *_self, ReportList *reports, int count);



struct PointerRNA UVLoopLayers_new_func(struct Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_uv_layers_new(_self, reports, name, do_init);
}

void UVLoopLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	bool do_init;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_uv_layers_new(_self, reports, name, do_init);
	*((struct PointerRNA *)_retdata) = layer;
}

void UVLoopLayers_remove_func(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_uv_layers_remove(_self, reports, layer);
}

void UVLoopLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_uv_layers_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_uv_layers_new(struct Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_uv_layers_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);

struct PointerRNA LoopColors_new_func(struct Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_vertex_color_new(_self, reports, name, do_init);
}

void LoopColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	bool do_init;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_vertex_color_new(_self, reports, name, do_init);
	*((struct PointerRNA *)_retdata) = layer;
}

void LoopColors_remove_func(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

void LoopColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_vertex_color_new(struct Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_vertex_color_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);

struct PointerRNA VertColors_new_func(struct Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_sculpt_vertex_color_new(_self, reports, name, do_init);
}

void VertColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	bool do_init;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_sculpt_vertex_color_new(_self, reports, name, do_init);
	*((struct PointerRNA *)_retdata) = layer;
}

void VertColors_remove_func(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_sculpt_vertex_color_remove(_self, reports, layer);
}

void VertColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_sculpt_vertex_color_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_sculpt_vertex_color_new(struct Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_sculpt_vertex_color_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);

struct PointerRNA VertexFloatProperties_new_func(struct Mesh *_self, const char * name)
{
	return rna_Mesh_vertex_float_property_new(_self, name);
}

void VertexFloatProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_vertex_float_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_vertex_float_property_new(struct Mesh *_self, const char * name);

struct PointerRNA VertexIntProperties_new_func(struct Mesh *_self, const char * name)
{
	return rna_Mesh_vertex_int_property_new(_self, name);
}

void VertexIntProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_vertex_int_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_vertex_int_property_new(struct Mesh *_self, const char * name);

struct PointerRNA VertexStringProperties_new_func(struct Mesh *_self, const char * name)
{
	return rna_Mesh_vertex_string_property_new(_self, name);
}

void VertexStringProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_vertex_string_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_vertex_string_property_new(struct Mesh *_self, const char * name);

struct PointerRNA PolygonFloatProperties_new_func(struct Mesh *_self, const char * name)
{
	return rna_Mesh_polygon_float_property_new(_self, name);
}

void PolygonFloatProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_polygon_float_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_polygon_float_property_new(struct Mesh *_self, const char * name);

struct PointerRNA PolygonIntProperties_new_func(struct Mesh *_self, const char * name)
{
	return rna_Mesh_polygon_int_property_new(_self, name);
}

void PolygonIntProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_polygon_int_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_polygon_int_property_new(struct Mesh *_self, const char * name);

struct PointerRNA PolygonStringProperties_new_func(struct Mesh *_self, const char * name)
{
	return rna_Mesh_polygon_string_property_new(_self, name);
}

void PolygonStringProperties_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_polygon_string_property_new(_self, name);
	*((struct PointerRNA *)_retdata) = layer;
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_polygon_string_property_new(struct Mesh *_self, const char * name);

struct PointerRNA MeshFaceMapLayers_new_func(struct Mesh *_self, ReportList *reports, const char * name)
{
	return rna_Mesh_face_map_new(_self, reports, name);
}

void MeshFaceMapLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char * name;
	struct PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_face_map_new(_self, reports, name);
	*((struct PointerRNA *)_retdata) = layer;
}

void MeshFaceMapLayers_remove_func(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer)
{
	rna_Mesh_face_map_remove(_self, reports, layer);
}

void MeshFaceMapLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	struct CustomDataLayer *layer;
	char *_data;
	
	_self = (struct Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((struct CustomDataLayer **)_data);
	
	rna_Mesh_face_map_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

struct PointerRNA rna_Mesh_face_map_new(struct Mesh *_self, ReportList *reports, const char * name);
void rna_Mesh_face_map_remove(struct Mesh *_self, ReportList *reports, struct CustomDataLayer *layer);












int MeshPolygon_vertices_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_MeshPoly_vertices_get_length(ptr, arraylen);
}

void MeshPolygon_flip_func(struct ID *_selfid, struct MPoly *_self)
{
	rna_MeshPolygon_flip(_selfid, _self);
}

void MeshPolygon_flip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct MPoly *_self;
	_selfid = (struct ID *)_ptr->owner_id;
	_self = (struct MPoly *)_ptr->data;
	
	rna_MeshPolygon_flip(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_MeshPolygon_flip(struct ID *_selfid, struct MPoly *_self);





















/* Mesh */
CollectionPropertyRNA rna_Mesh_vertices = {
	{(PropertyRNA *)&rna_Mesh_edges, NULL,
	-1, "vertices", 0, 4, 0, 8, 0, "Vertices",
	"Vertices of the mesh",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MeshVertices},
	Mesh_vertices_begin, Mesh_vertices_next, Mesh_vertices_end, Mesh_vertices_get, Mesh_vertices_length, Mesh_vertices_lookup_int, NULL, NULL, &RNA_MeshVertex
};

CollectionPropertyRNA rna_Mesh_edges = {
	{(PropertyRNA *)&rna_Mesh_loops, (PropertyRNA *)&rna_Mesh_vertices,
	-1, "edges", 0, 4, 0, 8, 0, "Edges",
	"Edges of the mesh",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MeshEdges},
	Mesh_edges_begin, Mesh_edges_next, Mesh_edges_end, Mesh_edges_get, Mesh_edges_length, Mesh_edges_lookup_int, NULL, NULL, &RNA_MeshEdge
};

CollectionPropertyRNA rna_Mesh_loops = {
	{(PropertyRNA *)&rna_Mesh_polygons, (PropertyRNA *)&rna_Mesh_edges,
	-1, "loops", 0, 4, 0, 8, 0, "Loops",
	"Loops of the mesh (polygon corners)",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MeshLoops},
	Mesh_loops_begin, Mesh_loops_next, Mesh_loops_end, Mesh_loops_get, Mesh_loops_length, Mesh_loops_lookup_int, NULL, NULL, &RNA_MeshLoop
};

CollectionPropertyRNA rna_Mesh_polygons = {
	{(PropertyRNA *)&rna_Mesh_vertex_normals, (PropertyRNA *)&rna_Mesh_loops,
	-1, "polygons", 0, 4, 0, 8, 0, "Polygons",
	"Polygons of the mesh",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MeshPolygons},
	Mesh_polygons_begin, Mesh_polygons_next, Mesh_polygons_end, Mesh_polygons_get, Mesh_polygons_length, Mesh_polygons_lookup_int, NULL, NULL, &RNA_MeshPolygon
};

CollectionPropertyRNA rna_Mesh_vertex_normals = {
	{(PropertyRNA *)&rna_Mesh_polygon_normals, (PropertyRNA *)&rna_Mesh_polygons,
	-1, "vertex_normals", 0, 4, 0, 8, 0, "Vertex Normals",
	"The normal direction of each vertex, defined as the average of the surrounding face normals",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_vertex_normals_begin, Mesh_vertex_normals_next, Mesh_vertex_normals_end, Mesh_vertex_normals_get, Mesh_vertex_normals_length, NULL, NULL, NULL, &RNA_MeshNormalValue
};

CollectionPropertyRNA rna_Mesh_polygon_normals = {
	{(PropertyRNA *)&rna_Mesh_loop_triangles, (PropertyRNA *)&rna_Mesh_vertex_normals,
	-1, "polygon_normals", 0, 4, 0, 8, 0, "Polygon Normals",
	"The normal direction of each polygon, defined by the winding order and position of its vertices",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_polygon_normals_begin, Mesh_polygon_normals_next, Mesh_polygon_normals_end, Mesh_polygon_normals_get, Mesh_polygon_normals_length, NULL, NULL, NULL, &RNA_MeshNormalValue
};

CollectionPropertyRNA rna_Mesh_loop_triangles = {
	{(PropertyRNA *)&rna_Mesh_texture_mesh, (PropertyRNA *)&rna_Mesh_polygon_normals,
	-1, "loop_triangles", 0, 4, 0, 8, 0, "Loop Triangles",
	"Tessellation of mesh polygons into triangles",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MeshLoopTriangles},
	Mesh_loop_triangles_begin, Mesh_loop_triangles_next, Mesh_loop_triangles_end, Mesh_loop_triangles_get, Mesh_loop_triangles_length, Mesh_loop_triangles_lookup_int, NULL, NULL, &RNA_MeshLoopTriangle
};

PointerPropertyRNA rna_Mesh_texture_mesh = {
	{(PropertyRNA *)&rna_Mesh_uv_layers, (PropertyRNA *)&rna_Mesh_loop_triangles,
	-1, "texture_mesh", 9437377, 1, 0, 0, 0, "Texture Mesh",
	"Use another mesh for texture indices (vertex indices must be aligned)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_texture_mesh_get, Mesh_texture_mesh_set, NULL, NULL,&RNA_Mesh
};

CollectionPropertyRNA rna_Mesh_uv_layers = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_clone, (PropertyRNA *)&rna_Mesh_texture_mesh,
	-1, "uv_layers", 0, 4, 0, 8, 0, "UV Loop Layers",
	"All UV loop layers",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_UVLoopLayers},
	Mesh_uv_layers_begin, Mesh_uv_layers_next, Mesh_uv_layers_end, Mesh_uv_layers_get, Mesh_uv_layers_length, Mesh_uv_layers_lookup_int, Mesh_uv_layers_lookup_string, NULL, &RNA_MeshUVLoopLayer
};

PointerPropertyRNA rna_Mesh_uv_layer_clone = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_clone_index, (PropertyRNA *)&rna_Mesh_uv_layers,
	-1, "uv_layer_clone", 8388609, 4, 0, 0, 0, "Clone UV Loop Layer",
	"UV loop layer to be used as cloning source",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_uv_layer_clone_get, Mesh_uv_layer_clone_set, NULL, NULL,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_Mesh_uv_layer_clone_index = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_stencil, (PropertyRNA *)&rna_Mesh_uv_layer_clone,
	-1, "uv_layer_clone_index", 3, 0, 0, 0, 0, "Clone UV Loop Layer Index",
	"Clone UV loop layer index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_uv_layer_clone_index_get, Mesh_uv_layer_clone_index_set, NULL, NULL, rna_Mesh_uv_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_Mesh_uv_layer_stencil = {
	{(PropertyRNA *)&rna_Mesh_uv_layer_stencil_index, (PropertyRNA *)&rna_Mesh_uv_layer_clone_index,
	-1, "uv_layer_stencil", 8388609, 4, 0, 0, 0, "Mask UV Loop Layer",
	"UV loop layer to mask the painted area",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_uv_layer_stencil_get, Mesh_uv_layer_stencil_set, NULL, NULL,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_Mesh_uv_layer_stencil_index = {
	{(PropertyRNA *)&rna_Mesh_vertex_colors, (PropertyRNA *)&rna_Mesh_uv_layer_stencil,
	-1, "uv_layer_stencil_index", 3, 0, 0, 0, 0, "Mask UV Loop Layer Index",
	"Mask UV loop layer index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_uv_layer_stencil_index_get, Mesh_uv_layer_stencil_index_set, NULL, NULL, rna_Mesh_uv_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_Mesh_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_sculpt_vertex_colors, (PropertyRNA *)&rna_Mesh_uv_layer_stencil_index,
	-1, "vertex_colors", 0, 4, 0, 8, 0, "Vertex Colors",
	"Legacy vertex color layers. Deprecated, use color attributes instead",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_LoopColors},
	Mesh_vertex_colors_begin, Mesh_vertex_colors_next, Mesh_vertex_colors_end, Mesh_vertex_colors_get, Mesh_vertex_colors_length, Mesh_vertex_colors_lookup_int, Mesh_vertex_colors_lookup_string, NULL, &RNA_MeshLoopColorLayer
};

CollectionPropertyRNA rna_Mesh_sculpt_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_vertex_layers_float, (PropertyRNA *)&rna_Mesh_vertex_colors,
	-1, "sculpt_vertex_colors", 0, 4, 0, 8, 0, "Sculpt Vertex Colors",
	"Sculpt vertex color layers. Deprecated, use color attributes instead",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_VertColors},
	Mesh_sculpt_vertex_colors_begin, Mesh_sculpt_vertex_colors_next, Mesh_sculpt_vertex_colors_end, Mesh_sculpt_vertex_colors_get, Mesh_sculpt_vertex_colors_length, Mesh_sculpt_vertex_colors_lookup_int, Mesh_sculpt_vertex_colors_lookup_string, NULL, &RNA_MeshVertColorLayer
};

CollectionPropertyRNA rna_Mesh_vertex_layers_float = {
	{(PropertyRNA *)&rna_Mesh_vertex_layers_int, (PropertyRNA *)&rna_Mesh_sculpt_vertex_colors,
	-1, "vertex_layers_float", 0, 4, 0, 8, 0, "Float Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_VertexFloatProperties},
	Mesh_vertex_layers_float_begin, Mesh_vertex_layers_float_next, Mesh_vertex_layers_float_end, Mesh_vertex_layers_float_get, Mesh_vertex_layers_float_length, Mesh_vertex_layers_float_lookup_int, Mesh_vertex_layers_float_lookup_string, NULL, &RNA_MeshVertexFloatPropertyLayer
};

CollectionPropertyRNA rna_Mesh_vertex_layers_int = {
	{(PropertyRNA *)&rna_Mesh_vertex_layers_string, (PropertyRNA *)&rna_Mesh_vertex_layers_float,
	-1, "vertex_layers_int", 0, 4, 0, 8, 0, "Int Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_VertexIntProperties},
	Mesh_vertex_layers_int_begin, Mesh_vertex_layers_int_next, Mesh_vertex_layers_int_end, Mesh_vertex_layers_int_get, Mesh_vertex_layers_int_length, Mesh_vertex_layers_int_lookup_int, Mesh_vertex_layers_int_lookup_string, NULL, &RNA_MeshVertexIntPropertyLayer
};

CollectionPropertyRNA rna_Mesh_vertex_layers_string = {
	{(PropertyRNA *)&rna_Mesh_polygon_layers_float, (PropertyRNA *)&rna_Mesh_vertex_layers_int,
	-1, "vertex_layers_string", 0, 4, 0, 8, 0, "String Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_VertexStringProperties},
	Mesh_vertex_layers_string_begin, Mesh_vertex_layers_string_next, Mesh_vertex_layers_string_end, Mesh_vertex_layers_string_get, Mesh_vertex_layers_string_length, Mesh_vertex_layers_string_lookup_int, Mesh_vertex_layers_string_lookup_string, NULL, &RNA_MeshVertexStringPropertyLayer
};

CollectionPropertyRNA rna_Mesh_polygon_layers_float = {
	{(PropertyRNA *)&rna_Mesh_polygon_layers_int, (PropertyRNA *)&rna_Mesh_vertex_layers_string,
	-1, "polygon_layers_float", 0, 4, 0, 8, 0, "Float Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_PolygonFloatProperties},
	Mesh_polygon_layers_float_begin, Mesh_polygon_layers_float_next, Mesh_polygon_layers_float_end, Mesh_polygon_layers_float_get, Mesh_polygon_layers_float_length, Mesh_polygon_layers_float_lookup_int, Mesh_polygon_layers_float_lookup_string, NULL, &RNA_MeshPolygonFloatPropertyLayer
};

CollectionPropertyRNA rna_Mesh_polygon_layers_int = {
	{(PropertyRNA *)&rna_Mesh_polygon_layers_string, (PropertyRNA *)&rna_Mesh_polygon_layers_float,
	-1, "polygon_layers_int", 0, 4, 0, 8, 0, "Int Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_PolygonIntProperties},
	Mesh_polygon_layers_int_begin, Mesh_polygon_layers_int_next, Mesh_polygon_layers_int_end, Mesh_polygon_layers_int_get, Mesh_polygon_layers_int_length, Mesh_polygon_layers_int_lookup_int, Mesh_polygon_layers_int_lookup_string, NULL, &RNA_MeshPolygonIntPropertyLayer
};

CollectionPropertyRNA rna_Mesh_polygon_layers_string = {
	{(PropertyRNA *)&rna_Mesh_face_maps, (PropertyRNA *)&rna_Mesh_polygon_layers_int,
	-1, "polygon_layers_string", 0, 4, 0, 8, 0, "String Property Layers",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_PolygonStringProperties},
	Mesh_polygon_layers_string_begin, Mesh_polygon_layers_string_next, Mesh_polygon_layers_string_end, Mesh_polygon_layers_string_get, Mesh_polygon_layers_string_length, Mesh_polygon_layers_string_lookup_int, Mesh_polygon_layers_string_lookup_string, NULL, &RNA_MeshPolygonStringPropertyLayer
};

CollectionPropertyRNA rna_Mesh_face_maps = {
	{(PropertyRNA *)&rna_Mesh_skin_vertices, (PropertyRNA *)&rna_Mesh_polygon_layers_string,
	-1, "face_maps", 0, 4, 0, 8, 0, "Face Map",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_MeshFaceMapLayers},
	Mesh_face_maps_begin, Mesh_face_maps_next, Mesh_face_maps_end, Mesh_face_maps_get, Mesh_face_maps_length, Mesh_face_maps_lookup_int, Mesh_face_maps_lookup_string, NULL, &RNA_MeshFaceMapLayer
};

CollectionPropertyRNA rna_Mesh_skin_vertices = {
	{(PropertyRNA *)&rna_Mesh_vertex_creases, (PropertyRNA *)&rna_Mesh_face_maps,
	-1, "skin_vertices", 0, 4, 0, 8, 0, "Skin Vertices",
	"All skin vertices",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_skin_vertices_begin, Mesh_skin_vertices_next, Mesh_skin_vertices_end, Mesh_skin_vertices_get, Mesh_skin_vertices_length, Mesh_skin_vertices_lookup_int, Mesh_skin_vertices_lookup_string, NULL, &RNA_MeshSkinVertexLayer
};

CollectionPropertyRNA rna_Mesh_vertex_creases = {
	{(PropertyRNA *)&rna_Mesh_vertex_paint_masks, (PropertyRNA *)&rna_Mesh_skin_vertices,
	-1, "vertex_creases", 0, 4, 0, 8, 0, "Vertex Creases",
	"Sharpness of the vertices",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_vertex_creases_begin, Mesh_vertex_creases_next, Mesh_vertex_creases_end, Mesh_vertex_creases_get, Mesh_vertex_creases_length, Mesh_vertex_creases_lookup_int, NULL, NULL, &RNA_MeshVertexCreaseLayer
};

CollectionPropertyRNA rna_Mesh_vertex_paint_masks = {
	{(PropertyRNA *)&rna_Mesh_attributes, (PropertyRNA *)&rna_Mesh_vertex_creases,
	-1, "vertex_paint_masks", 0, 4, 0, 8, 0, "Vertex Paint Mask",
	"Vertex paint mask",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_vertex_paint_masks_begin, Mesh_vertex_paint_masks_next, Mesh_vertex_paint_masks_end, Mesh_vertex_paint_masks_get, Mesh_vertex_paint_masks_length, Mesh_vertex_paint_masks_lookup_int, NULL, NULL, &RNA_MeshPaintMaskLayer
};

CollectionPropertyRNA rna_Mesh_attributes = {
	{(PropertyRNA *)&rna_Mesh_color_attributes, (PropertyRNA *)&rna_Mesh_vertex_paint_masks,
	-1, "attributes", 0, 0, 0, 0, 0, "Attributes",
	"Geometry attributes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AttributeGroup},
	Mesh_attributes_begin, Mesh_attributes_next, Mesh_attributes_end, Mesh_attributes_get, Mesh_attributes_length, NULL, NULL, NULL, &RNA_Attribute
};

CollectionPropertyRNA rna_Mesh_color_attributes = {
	{(PropertyRNA *)&rna_Mesh_remesh_voxel_size, (PropertyRNA *)&rna_Mesh_attributes,
	-1, "color_attributes", 0, 0, 0, 0, 0, "Color Attributes",
	"Geometry color attributes",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, &RNA_AttributeGroup},
	Mesh_color_attributes_begin, Mesh_color_attributes_next, Mesh_color_attributes_end, Mesh_color_attributes_get, Mesh_color_attributes_length, NULL, NULL, NULL, &RNA_Attribute
};

FloatPropertyRNA rna_Mesh_remesh_voxel_size = {
	{(PropertyRNA *)&rna_Mesh_remesh_voxel_adaptivity, (PropertyRNA *)&rna_Mesh_color_attributes,
	-1, "remesh_voxel_size", 3, 0, 0, 4, 0, "Voxel Size",
	"Size of the voxel in object space used for volume evaluation. Lower values preserve finer details",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, remesh_voxel_size), 5, NULL},
	Mesh_remesh_voxel_size_get, Mesh_remesh_voxel_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0001000000f, FLT_MAX, 0.0001000000f, FLT_MAX, 0.0099999998f, 4, 0.1000000015f, NULL
};

FloatPropertyRNA rna_Mesh_remesh_voxel_adaptivity = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_fix_poles, (PropertyRNA *)&rna_Mesh_remesh_voxel_size,
	-1, "remesh_voxel_adaptivity", 3, 0, 0, 4, 0, "Adaptivity",
	"Reduces the final face count by simplifying geometry where detail is not needed, generating triangles. A value greater than 0 disables Fix Poles",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, remesh_voxel_adaptivity), 5, NULL},
	Mesh_remesh_voxel_adaptivity_get, Mesh_remesh_voxel_adaptivity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 4, 0.0f, NULL
};

BoolPropertyRNA rna_Mesh_use_remesh_fix_poles = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_volume, (PropertyRNA *)&rna_Mesh_remesh_voxel_adaptivity,
	-1, "use_remesh_fix_poles", 3, 0, 0, 0, 0, "Fix Poles",
	"Produces less poles and a better topology flow",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_remesh_fix_poles_get, Mesh_use_remesh_fix_poles_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_volume = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_paint_mask, (PropertyRNA *)&rna_Mesh_use_remesh_fix_poles,
	-1, "use_remesh_preserve_volume", 3, 0, 0, 0, 0, "Preserve Volume",
	"Projects the mesh to preserve the volume and details of the original mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_remesh_preserve_volume_get, Mesh_use_remesh_preserve_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_paint_mask = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_sculpt_face_sets, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_volume,
	-1, "use_remesh_preserve_paint_mask", 3, 0, 0, 0, 0, "Preserve Paint Mask",
	"Keep the current mask on the new mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_remesh_preserve_paint_mask_get, Mesh_use_remesh_preserve_paint_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_sculpt_face_sets = {
	{(PropertyRNA *)&rna_Mesh_use_remesh_preserve_vertex_colors, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_paint_mask,
	-1, "use_remesh_preserve_sculpt_face_sets", 3, 0, 0, 0, 0, "Preserve Face Sets",
	"Keep the current Face Sets on the new mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_remesh_preserve_sculpt_face_sets_get, Mesh_use_remesh_preserve_sculpt_face_sets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_remesh_preserve_vertex_colors = {
	{(PropertyRNA *)&rna_Mesh_remesh_mode, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_sculpt_face_sets,
	-1, "use_remesh_preserve_vertex_colors", 3, 0, 0, 0, 0, "Preserve Vertex Colors",
	"Keep the current vertex colors on the new mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_remesh_preserve_vertex_colors_get, Mesh_use_remesh_preserve_vertex_colors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_Mesh_remesh_mode_items[3] = {
	{0, "VOXEL", 0, "Voxel", "Use the voxel remesher"},
	{1, "QUAD", 0, "Quad", "Use the quad remesher"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Mesh_remesh_mode = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_x, (PropertyRNA *)&rna_Mesh_use_remesh_preserve_vertex_colors,
	-1, "remesh_mode", 3, 0, 0, 4, 0, "Remesh Mode",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, remesh_mode), 2, NULL},
	Mesh_remesh_mode_get, Mesh_remesh_mode_set, NULL, NULL, NULL, rna_Mesh_remesh_mode_items, 2, 0
};

BoolPropertyRNA rna_Mesh_use_mirror_x = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_y, (PropertyRNA *)&rna_Mesh_remesh_mode,
	-1, "use_mirror_x", 3, 0, 0, 0, 0, "X",
	"Enable symmetry in the X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_mirror_x_get, Mesh_use_mirror_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_mirror_y = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_z, (PropertyRNA *)&rna_Mesh_use_mirror_x,
	-1, "use_mirror_y", 3, 0, 0, 0, 0, "Y",
	"Enable symmetry in the Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_mirror_y_get, Mesh_use_mirror_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_mirror_z = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_vertex_groups, (PropertyRNA *)&rna_Mesh_use_mirror_y,
	-1, "use_mirror_z", 3, 0, 0, 0, 0, "Z",
	"Enable symmetry in the Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_mirror_z_get, Mesh_use_mirror_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_mirror_vertex_groups = {
	{(PropertyRNA *)&rna_Mesh_use_auto_smooth, (PropertyRNA *)&rna_Mesh_use_mirror_z,
	-1, "use_mirror_vertex_groups", 3, 0, 0, 0, 0, "Mirror Vertex Groups",
	"Mirror the left/right vertex groups when painting. The symmetry axis is determined by the symmetry settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_mirror_vertex_groups_get, Mesh_use_mirror_vertex_groups_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Mesh_use_auto_smooth = {
	{(PropertyRNA *)&rna_Mesh_auto_smooth_angle, (PropertyRNA *)&rna_Mesh_use_mirror_vertex_groups,
	-1, "use_auto_smooth", 3, 0, 0, 0, 0, "Auto Smooth",
	"Auto smooth (based on smooth/sharp faces/edges and angle between faces), or use custom split normals data if available",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_geom_and_params, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_auto_smooth_get, Mesh_use_auto_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Mesh_auto_smooth_angle = {
	{(PropertyRNA *)&rna_Mesh_has_custom_normals, (PropertyRNA *)&rna_Mesh_use_auto_smooth,
	-1, "auto_smooth_angle", 3, 0, 0, 4, 0, "Auto Smooth Angle",
	"Maximum angle between face normals that will be considered as smooth (unused if custom split normals data are available)",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_geom_and_params, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, smoothresh), 5, NULL},
	Mesh_auto_smooth_angle_get, Mesh_auto_smooth_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, 0.5235987902f, NULL
};

BoolPropertyRNA rna_Mesh_has_custom_normals = {
	{(PropertyRNA *)&rna_Mesh_texco_mesh, (PropertyRNA *)&rna_Mesh_auto_smooth_angle,
	-1, "has_custom_normals", 2, 0, 0, 0, 0, "Has Custom Normals",
	"True if there are custom split normals data in this mesh",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_has_custom_normals_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Mesh_texco_mesh = {
	{(PropertyRNA *)&rna_Mesh_shape_keys, (PropertyRNA *)&rna_Mesh_has_custom_normals,
	-1, "texco_mesh", 8388801, 1, 0, 0, 0, "Texture Space Mesh",
	"Derive texture coordinates from another mesh",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_texco_mesh_get, Mesh_texco_mesh_set, NULL, NULL,&RNA_Mesh
};

PointerPropertyRNA rna_Mesh_shape_keys = {
	{(PropertyRNA *)&rna_Mesh_use_auto_texspace, (PropertyRNA *)&rna_Mesh_texco_mesh,
	-1, "shape_keys", 8388672, 1, 0, 32, 0, "Shape Keys",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_shape_keys_get, NULL, NULL, NULL,&RNA_Key
};

BoolPropertyRNA rna_Mesh_use_auto_texspace = {
	{(PropertyRNA *)&rna_Mesh_use_mirror_topology, (PropertyRNA *)&rna_Mesh_shape_keys,
	-1, "use_auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_geom_and_params, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_auto_texspace_get, Mesh_use_auto_texspace_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Mesh_use_mirror_topology = {
	{(PropertyRNA *)&rna_Mesh_use_paint_mask, (PropertyRNA *)&rna_Mesh_use_auto_texspace,
	-1, "use_mirror_topology", 3, 0, 0, 0, 0, "Topology Mirror",
	"Use topology based mirroring (for when both sides of mesh have matching, unique topology)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_mirror_topology_get, Mesh_use_mirror_topology_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_paint_mask = {
	{(PropertyRNA *)&rna_Mesh_use_paint_mask_vertex, (PropertyRNA *)&rna_Mesh_use_mirror_topology,
	-1, "use_paint_mask", 3, 0, 0, 0, 0, "Paint Mask",
	"Face selection masking for painting",
	548, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_facemask, 269090816, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_paint_mask_get, Mesh_use_paint_mask_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_paint_mask_vertex = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_vertex_bevel, (PropertyRNA *)&rna_Mesh_use_paint_mask,
	-1, "use_paint_mask_vertex", 3, 0, 0, 0, 0, "Vertex Selection",
	"Vertex selection masking for painting",
	546, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_vertmask, 269090816, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_paint_mask_vertex_get, Mesh_use_paint_mask_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_vertex_bevel = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_edge_bevel, (PropertyRNA *)&rna_Mesh_use_paint_mask_vertex,
	-1, "use_customdata_vertex_bevel", 3, 0, 0, 0, 0, "Store Vertex Bevel Weight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_customdata_vertex_bevel_get, Mesh_use_customdata_vertex_bevel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_edge_bevel = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_vertex_crease, (PropertyRNA *)&rna_Mesh_use_customdata_vertex_bevel,
	-1, "use_customdata_edge_bevel", 3, 0, 0, 0, 0, "Store Edge Bevel Weight",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_customdata_edge_bevel_get, Mesh_use_customdata_edge_bevel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_vertex_crease = {
	{(PropertyRNA *)&rna_Mesh_use_customdata_edge_crease, (PropertyRNA *)&rna_Mesh_use_customdata_edge_bevel,
	-1, "use_customdata_vertex_crease", 3, 0, 0, 0, 0, "Store Vertex Crease",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_customdata_vertex_crease_get, Mesh_use_customdata_vertex_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_use_customdata_edge_crease = {
	{(PropertyRNA *)&rna_Mesh_total_vert_sel, (PropertyRNA *)&rna_Mesh_use_customdata_vertex_crease,
	-1, "use_customdata_edge_crease", 3, 0, 0, 0, 0, "Store Edge Crease",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_use_customdata_edge_crease_get, Mesh_use_customdata_edge_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Mesh_total_vert_sel = {
	{(PropertyRNA *)&rna_Mesh_total_edge_sel, (PropertyRNA *)&rna_Mesh_use_customdata_edge_crease,
	-1, "total_vert_sel", 2, 0, 0, 0, 0, "Selected Vertex Total",
	"Selected vertex count in editmode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_total_vert_sel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mesh_total_edge_sel = {
	{(PropertyRNA *)&rna_Mesh_total_face_sel, (PropertyRNA *)&rna_Mesh_total_vert_sel,
	-1, "total_edge_sel", 2, 0, 0, 0, 0, "Selected Edge Total",
	"Selected edge count in editmode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_total_edge_sel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mesh_total_face_sel = {
	{(PropertyRNA *)&rna_Mesh_is_editmode, (PropertyRNA *)&rna_Mesh_total_edge_sel,
	-1, "total_face_sel", 2, 0, 0, 0, 0, "Selected Face Total",
	"Selected face count in editmode",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_total_face_sel_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_Mesh_is_editmode = {
	{(PropertyRNA *)&rna_Mesh_animation_data, (PropertyRNA *)&rna_Mesh_total_face_sel,
	-1, "is_editmode", 2, 0, 0, 0, 0, "Is Editmode",
	"True when used in editmode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_is_editmode_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Mesh_animation_data = {
	{(PropertyRNA *)&rna_Mesh_auto_texspace, (PropertyRNA *)&rna_Mesh_is_editmode,
	-1, "animation_data", 8388608, 1, 0, 0, 0, "Animation Data",
	"Animation data for this data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_AnimaData_override_apply,
	0, -1, NULL},
	Mesh_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BoolPropertyRNA rna_Mesh_auto_texspace = {
	{(PropertyRNA *)&rna_Mesh_texspace_location, (PropertyRNA *)&rna_Mesh_animation_data,
	-1, "auto_texspace", 3, 0, 0, 0, 0, "Auto Texture Space",
	"Adjust active object\'s texture space automatically when transforming object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Mesh_auto_texspace_get, Mesh_auto_texspace_set, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

static float rna_Mesh_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_texspace_location = {
	{(PropertyRNA *)&rna_Mesh_texspace_size, (PropertyRNA *)&rna_Mesh_auto_texspace,
	-1, "texspace_location", 3, 0, 0, 0, 0, "Texture Space Location",
	"Texture space location",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, rna_Mesh_texspace_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Mesh_texspace_location_get, Mesh_texspace_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_location_default
};

static float rna_Mesh_texspace_size_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Mesh_texspace_size = {
	{(PropertyRNA *)&rna_Mesh_materials, (PropertyRNA *)&rna_Mesh_texspace_location,
	-1, "texspace_size", 67108867, 0, 0, 0, 0, "Texture Space Size",
	"Texture space size",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, rna_Mesh_texspace_editable, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, Mesh_texspace_size_get, Mesh_texspace_size_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_size_default
};

CollectionPropertyRNA rna_Mesh_materials = {
	{NULL, (PropertyRNA *)&rna_Mesh_texspace_size,
	-1, "materials", 128, 1, 0, 0, 0, "Materials",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_Mesh_materials_override_apply,
	0, -1, &RNA_IDMaterials},
	Mesh_materials_begin, Mesh_materials_next, Mesh_materials_end, Mesh_materials_get, Mesh_materials_length, Mesh_materials_lookup_int, Mesh_materials_lookup_string, rna_IDMaterials_assign_int, &RNA_Material
};

static float rna_Mesh_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Mesh_transform_matrix = {
	{(PropertyRNA *)&rna_Mesh_transform_shape_keys, NULL,
	-1, "matrix", 3, 0, 1, 0, 0, "",
	"Matrix",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Mesh_transform_matrix_default
};

BoolPropertyRNA rna_Mesh_transform_shape_keys = {
	{NULL, (PropertyRNA *)&rna_Mesh_transform_matrix,
	-1, "shape_keys", 3, 0, 0, 0, 0, "",
	"Transform Shape Keys",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_transform_func = {
	{(FunctionRNA *)&rna_Mesh_flip_normals_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Mesh_transform_matrix, (PropertyRNA *)&rna_Mesh_transform_shape_keys}},
	"transform", 0, "Transform mesh vertices by a matrix (Warning: inverts normals if matrix is negative)",
	Mesh_transform_call,
	NULL
};

FunctionRNA rna_Mesh_flip_normals_func = {
	{(FunctionRNA *)&rna_Mesh_calc_normals_func, (FunctionRNA *)&rna_Mesh_transform_func,
	NULL,
	{NULL, NULL}},
	"flip_normals", 0, "Invert winding of all polygons (clears tessellation, does not handle custom normals)",
	Mesh_flip_normals_call,
	NULL
};

FunctionRNA rna_Mesh_calc_normals_func = {
	{(FunctionRNA *)&rna_Mesh_create_normals_split_func, (FunctionRNA *)&rna_Mesh_flip_normals_func,
	NULL,
	{NULL, NULL}},
	"calc_normals", 0, "Calculate vertex normals",
	Mesh_calc_normals_call,
	NULL
};

FunctionRNA rna_Mesh_create_normals_split_func = {
	{(FunctionRNA *)&rna_Mesh_calc_normals_split_func, (FunctionRNA *)&rna_Mesh_calc_normals_func,
	NULL,
	{NULL, NULL}},
	"create_normals_split", 0, "Empty split vertex normals",
	Mesh_create_normals_split_call,
	NULL
};

FunctionRNA rna_Mesh_calc_normals_split_func = {
	{(FunctionRNA *)&rna_Mesh_free_normals_split_func, (FunctionRNA *)&rna_Mesh_create_normals_split_func,
	NULL,
	{NULL, NULL}},
	"calc_normals_split", 0, "Calculate split vertex normals, which preserve sharp edges",
	Mesh_calc_normals_split_call,
	NULL
};

FunctionRNA rna_Mesh_free_normals_split_func = {
	{(FunctionRNA *)&rna_Mesh_split_faces_func, (FunctionRNA *)&rna_Mesh_calc_normals_split_func,
	NULL,
	{NULL, NULL}},
	"free_normals_split", 0, "Free split vertex normals",
	Mesh_free_normals_split_call,
	NULL
};

BoolPropertyRNA rna_Mesh_split_faces_free_loop_normals = {
	{NULL, NULL,
	-1, "free_loop_normals", 3, 0, 0, 0, 0, "Free Loop Normals",
	"Free loop normals custom data layer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_Mesh_split_faces_func = {
	{(FunctionRNA *)&rna_Mesh_calc_tangents_func, (FunctionRNA *)&rna_Mesh_free_normals_split_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_split_faces_free_loop_normals, (PropertyRNA *)&rna_Mesh_split_faces_free_loop_normals}},
	"split_faces", 0, "Split faces based on the edge angle",
	Mesh_split_faces_call,
	NULL
};

StringPropertyRNA rna_Mesh_calc_tangents_uvmap = {
	{NULL, NULL,
	-1, "uvmap", 262145, 0, 0, 0, 0, "",
	"Name of the UV map to use for tangent space computation",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

FunctionRNA rna_Mesh_calc_tangents_func = {
	{(FunctionRNA *)&rna_Mesh_free_tangents_func, (FunctionRNA *)&rna_Mesh_split_faces_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_calc_tangents_uvmap, (PropertyRNA *)&rna_Mesh_calc_tangents_uvmap}},
	"calc_tangents", 16, "Compute tangents and bitangent signs, to be used together with the split normals to get a complete tangent space for normal mapping (split normals are also computed if not yet present)",
	Mesh_calc_tangents_call,
	NULL
};

FunctionRNA rna_Mesh_free_tangents_func = {
	{(FunctionRNA *)&rna_Mesh_calc_loop_triangles_func, (FunctionRNA *)&rna_Mesh_calc_tangents_func,
	NULL,
	{NULL, NULL}},
	"free_tangents", 0, "Free tangents",
	Mesh_free_tangents_call,
	NULL
};

FunctionRNA rna_Mesh_calc_loop_triangles_func = {
	{(FunctionRNA *)&rna_Mesh_calc_smooth_groups_func, (FunctionRNA *)&rna_Mesh_free_tangents_func,
	NULL,
	{NULL, NULL}},
	"calc_loop_triangles", 0, "Calculate loop triangle tessellation (supports editmode too)",
	Mesh_calc_loop_triangles_call,
	NULL
};

BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags = {
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_poly_groups, NULL,
	-1, "use_bitflags", 3, 0, 0, 0, 0, "",
	"Produce bitflags groups instead of simple numeric values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static int rna_Mesh_calc_smooth_groups_poly_groups_default[1] = {
	0
};

IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups = {
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_groups, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_use_bitflags,
	-1, "poly_groups", 131075, 0, 2, 0, 0, "",
	"Smooth Groups",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 0, INT_MIN, INT_MAX, 1, 0, rna_Mesh_calc_smooth_groups_poly_groups_default
};

IntPropertyRNA rna_Mesh_calc_smooth_groups_groups = {
	{NULL, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_poly_groups,
	-1, "groups", 3, 0, 2, 0, 0, "groups",
	"Total number of groups",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Mesh_calc_smooth_groups_func = {
	{(FunctionRNA *)&rna_Mesh_normals_split_custom_set_func, (FunctionRNA *)&rna_Mesh_calc_loop_triangles_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_calc_smooth_groups_use_bitflags, (PropertyRNA *)&rna_Mesh_calc_smooth_groups_groups}},
	"calc_smooth_groups", 0, "Calculate smooth groups from sharp edges",
	Mesh_calc_smooth_groups_call,
	NULL
};

static float rna_Mesh_normals_split_custom_set_normals_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_normals_split_custom_set_normals = {
	{NULL, NULL,
	-1, "normals", 131075, 0, 1, 0, 0, "",
	"Normals",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 2, {1, 3, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f, 3, 0.0f, rna_Mesh_normals_split_custom_set_normals_default
};

FunctionRNA rna_Mesh_normals_split_custom_set_func = {
	{(FunctionRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_func, (FunctionRNA *)&rna_Mesh_calc_smooth_groups_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_normals_split_custom_set_normals, (PropertyRNA *)&rna_Mesh_normals_split_custom_set_normals}},
	"normals_split_custom_set", 16, "Define custom split normals of this mesh (use zero-vectors to keep auto ones)",
	Mesh_normals_split_custom_set_call,
	NULL
};

static float rna_Mesh_normals_split_custom_set_from_vertices_normals_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_normals_split_custom_set_from_vertices_normals = {
	{NULL, NULL,
	-1, "normals", 131075, 0, 1, 0, 0, "",
	"Normals",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 2, {1, 3, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f, 3, 0.0f, rna_Mesh_normals_split_custom_set_from_vertices_normals_default
};

FunctionRNA rna_Mesh_normals_split_custom_set_from_vertices_func = {
	{(FunctionRNA *)&rna_Mesh_update_func, (FunctionRNA *)&rna_Mesh_normals_split_custom_set_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_normals, (PropertyRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_normals}},
	"normals_split_custom_set_from_vertices", 16, "Define custom split normals of this mesh, from vertices\' normals (use zero-vectors to keep auto ones)",
	Mesh_normals_split_custom_set_from_vertices_call,
	NULL
};

BoolPropertyRNA rna_Mesh_update_calc_edges = {
	{(PropertyRNA *)&rna_Mesh_update_calc_edges_loose, NULL,
	-1, "calc_edges", 3, 0, 0, 0, 0, "Calculate Edges",
	"Force recalculation of edges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_update_calc_edges_loose = {
	{NULL, (PropertyRNA *)&rna_Mesh_update_calc_edges,
	-1, "calc_edges_loose", 3, 0, 0, 0, 0, "Calculate Loose Edges",
	"Calculate the loose state of each edge",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_update_func = {
	{(FunctionRNA *)&rna_Mesh_update_gpu_tag_func, (FunctionRNA *)&rna_Mesh_normals_split_custom_set_from_vertices_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_update_calc_edges, (PropertyRNA *)&rna_Mesh_update_calc_edges_loose}},
	"update", 8, "update",
	Mesh_update_call,
	NULL
};

FunctionRNA rna_Mesh_update_gpu_tag_func = {
	{(FunctionRNA *)&rna_Mesh_unit_test_compare_func, (FunctionRNA *)&rna_Mesh_update_func,
	NULL,
	{NULL, NULL}},
	"update_gpu_tag", 0, "update_gpu_tag",
	Mesh_update_gpu_tag_call,
	NULL
};

PointerPropertyRNA rna_Mesh_unit_test_compare_mesh = {
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_threshold, NULL,
	-1, "mesh", 8388736, 0, 0, 0, 0, "",
	"Mesh to compare to",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FloatPropertyRNA rna_Mesh_unit_test_compare_threshold = {
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_result, (PropertyRNA *)&rna_Mesh_unit_test_compare_mesh,
	-1, "threshold", 3, 0, 0, 0, 0, "Threshold",
	"Comparison tolerance threshold",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 0.0000071526f, NULL
};

StringPropertyRNA rna_Mesh_unit_test_compare_result = {
	{NULL, (PropertyRNA *)&rna_Mesh_unit_test_compare_threshold,
	-1, "result", 262145, 0, 2, 0, 0, "Return value",
	"String description of result of comparison",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 64, "nothing"
};

FunctionRNA rna_Mesh_unit_test_compare_func = {
	{(FunctionRNA *)&rna_Mesh_clear_geometry_func, (FunctionRNA *)&rna_Mesh_update_gpu_tag_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_unit_test_compare_mesh, (PropertyRNA *)&rna_Mesh_unit_test_compare_result}},
	"unit_test_compare", 0, "unit_test_compare",
	Mesh_unit_test_compare_call,
	(PropertyRNA *)&rna_Mesh_unit_test_compare_result
};

FunctionRNA rna_Mesh_clear_geometry_func = {
	{(FunctionRNA *)&rna_Mesh_validate_func, (FunctionRNA *)&rna_Mesh_unit_test_compare_func,
	NULL,
	{NULL, NULL}},
	"clear_geometry", 0, "Remove all geometry from the mesh. Note that this does not free shape keys or materials",
	Mesh_clear_geometry_call,
	NULL
};

BoolPropertyRNA rna_Mesh_validate_verbose = {
	{(PropertyRNA *)&rna_Mesh_validate_clean_customdata, NULL,
	-1, "verbose", 3, 0, 0, 0, 0, "Verbose",
	"Output information about the errors found",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Mesh_validate_clean_customdata = {
	{(PropertyRNA *)&rna_Mesh_validate_result, (PropertyRNA *)&rna_Mesh_validate_verbose,
	-1, "clean_customdata", 3, 0, 0, 0, 0, "Clean Custom Data",
	"Remove temp/cached custom-data layers, like e.g. normals...",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_Mesh_validate_result = {
	{NULL, (PropertyRNA *)&rna_Mesh_validate_clean_customdata,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_validate_func = {
	{(FunctionRNA *)&rna_Mesh_validate_material_indices_func, (FunctionRNA *)&rna_Mesh_clear_geometry_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_validate_verbose, (PropertyRNA *)&rna_Mesh_validate_result}},
	"validate", 0, "Validate geometry, return True when the mesh has had invalid geometry corrected/removed",
	Mesh_validate_call,
	(PropertyRNA *)&rna_Mesh_validate_result
};

BoolPropertyRNA rna_Mesh_validate_material_indices_result = {
	{NULL, NULL,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_validate_material_indices_func = {
	{(FunctionRNA *)&rna_Mesh_count_selected_items_func, (FunctionRNA *)&rna_Mesh_validate_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_validate_material_indices_result, (PropertyRNA *)&rna_Mesh_validate_material_indices_result}},
	"validate_material_indices", 0, "Validate material indices of polygons, return True when the mesh has had invalid indices corrected (to default 0)",
	Mesh_validate_material_indices_call,
	(PropertyRNA *)&rna_Mesh_validate_material_indices_result
};

static int rna_Mesh_count_selected_items_result_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Mesh_count_selected_items_result = {
	{NULL, NULL,
	-1, "result", 3, 0, 2, 0, 0, "Result",
	NULL,
	0, "*",
	PROP_INT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, rna_Mesh_count_selected_items_result_default
};

FunctionRNA rna_Mesh_count_selected_items_func = {
	{NULL, (FunctionRNA *)&rna_Mesh_validate_material_indices_func,
	NULL,
	{(PropertyRNA *)&rna_Mesh_count_selected_items_result, (PropertyRNA *)&rna_Mesh_count_selected_items_result}},
	"count_selected_items", 0, "Return the number of selected items (vert, edge, face)",
	Mesh_count_selected_items_call,
	NULL
};

StructRNA RNA_Mesh = {
	{(ContainerRNA *)&RNA_MeshVertices, (ContainerRNA *)&RNA_MaterialLineArt,
	NULL,
	{(PropertyRNA *)&rna_Mesh_vertices, (PropertyRNA *)&rna_Mesh_materials}},
	"Mesh", NULL, NULL, 519, NULL, "Mesh",
	"Mesh data-block defining geometric surfaces",
	"*", 160,
	(PropertyRNA *)&rna_ID_name, (PropertyRNA *)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_instance,
	rna_ID_idprops,
	{(FunctionRNA *)&rna_Mesh_transform_func, (FunctionRNA *)&rna_Mesh_count_selected_items_func}
};

/* Mesh Vertices */
CollectionPropertyRNA rna_MeshVertices_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertices_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertices_rna_properties_begin, MeshVertices_rna_properties_next, MeshVertices_rna_properties_end, MeshVertices_rna_properties_get, NULL, NULL, MeshVertices_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertices_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshVertices_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertices_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshVertices_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of vertices to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshVertices_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshVertices_add_count, (PropertyRNA *)&rna_MeshVertices_add_count}},
	"add", 16, "add",
	MeshVertices_add_call,
	NULL
};

StructRNA RNA_MeshVertices = {
	{(ContainerRNA *)&RNA_MeshEdges, (ContainerRNA *)&RNA_Mesh,
	NULL,
	{(PropertyRNA *)&rna_MeshVertices_rna_properties, (PropertyRNA *)&rna_MeshVertices_rna_type}},
	"MeshVertices", NULL, NULL, 516, NULL, "Mesh Vertices",
	"Collection of mesh vertices",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertices_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshVertices_add_func, (FunctionRNA *)&rna_MeshVertices_add_func}
};

/* Mesh Edges */
CollectionPropertyRNA rna_MeshEdges_rna_properties = {
	{(PropertyRNA *)&rna_MeshEdges_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdges_rna_properties_begin, MeshEdges_rna_properties_next, MeshEdges_rna_properties_end, MeshEdges_rna_properties_get, NULL, NULL, MeshEdges_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshEdges_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshEdges_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdges_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshEdges_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of edges to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshEdges_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshEdges_add_count, (PropertyRNA *)&rna_MeshEdges_add_count}},
	"add", 16, "add",
	MeshEdges_add_call,
	NULL
};

StructRNA RNA_MeshEdges = {
	{(ContainerRNA *)&RNA_MeshLoops, (ContainerRNA *)&RNA_MeshVertices,
	NULL,
	{(PropertyRNA *)&rna_MeshEdges_rna_properties, (PropertyRNA *)&rna_MeshEdges_rna_type}},
	"MeshEdges", NULL, NULL, 516, NULL, "Mesh Edges",
	"Collection of mesh edges",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshEdges_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshEdges_add_func, (FunctionRNA *)&rna_MeshEdges_add_func}
};

/* Mesh Loops */
CollectionPropertyRNA rna_MeshLoops_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoops_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoops_rna_properties_begin, MeshLoops_rna_properties_next, MeshLoops_rna_properties_end, MeshLoops_rna_properties_get, NULL, NULL, MeshLoops_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoops_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshLoops_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoops_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshLoops_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of loops to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshLoops_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshLoops_add_count, (PropertyRNA *)&rna_MeshLoops_add_count}},
	"add", 16, "add",
	MeshLoops_add_call,
	NULL
};

StructRNA RNA_MeshLoops = {
	{(ContainerRNA *)&RNA_MeshPolygons, (ContainerRNA *)&RNA_MeshEdges,
	NULL,
	{(PropertyRNA *)&rna_MeshLoops_rna_properties, (PropertyRNA *)&rna_MeshLoops_rna_type}},
	"MeshLoops", NULL, NULL, 516, NULL, "Mesh Loops",
	"Collection of mesh loops",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshLoops_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshLoops_add_func, (FunctionRNA *)&rna_MeshLoops_add_func}
};

/* Mesh Polygons */
CollectionPropertyRNA rna_MeshPolygons_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygons_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygons_rna_properties_begin, MeshPolygons_rna_properties_next, MeshPolygons_rna_properties_end, MeshPolygons_rna_properties_get, NULL, NULL, MeshPolygons_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygons_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygons_active, (PropertyRNA *)&rna_MeshPolygons_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygons_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshPolygons_active = {
	{NULL, (PropertyRNA *)&rna_MeshPolygons_rna_type,
	-1, "active", 3, 0, 0, 4, 0, "Active Polygon",
	"The active polygon for this mesh",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(Mesh, act_face), 0, NULL},
	MeshPolygons_active_get, MeshPolygons_active_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshPolygons_add_count = {
	{NULL, NULL,
	-1, "count", 3, 0, 1, 0, 0, "Count",
	"Number of polygons to add",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshPolygons_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygons_add_count, (PropertyRNA *)&rna_MeshPolygons_add_count}},
	"add", 16, "add",
	MeshPolygons_add_call,
	NULL
};

StructRNA RNA_MeshPolygons = {
	{(ContainerRNA *)&RNA_MeshNormalValue, (ContainerRNA *)&RNA_MeshLoops,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygons_rna_properties, (PropertyRNA *)&rna_MeshPolygons_active}},
	"MeshPolygons", NULL, NULL, 516, NULL, "Mesh Polygons",
	"Collection of mesh polygons",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPolygons_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshPolygons_add_func, (FunctionRNA *)&rna_MeshPolygons_add_func}
};

/* Mesh Normal Vector */
CollectionPropertyRNA rna_MeshNormalValue_rna_properties = {
	{(PropertyRNA *)&rna_MeshNormalValue_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshNormalValue_rna_properties_begin, MeshNormalValue_rna_properties_next, MeshNormalValue_rna_properties_end, MeshNormalValue_rna_properties_get, NULL, NULL, MeshNormalValue_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshNormalValue_rna_type = {
	{(PropertyRNA *)&rna_MeshNormalValue_vector, (PropertyRNA *)&rna_MeshNormalValue_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshNormalValue_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshNormalValue_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshNormalValue_vector = {
	{NULL, (PropertyRNA *)&rna_MeshNormalValue_rna_type,
	-1, "vector", 2, 0, 0, 4, 0, "Vector",
	"3D vector",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(vec3f, x), 5, NULL},
	NULL, NULL, MeshNormalValue_vector_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshNormalValue_vector_default
};

StructRNA RNA_MeshNormalValue = {
	{(ContainerRNA *)&RNA_MeshLoopTriangles, (ContainerRNA *)&RNA_MeshPolygons,
	NULL,
	{(PropertyRNA *)&rna_MeshNormalValue_rna_properties, (PropertyRNA *)&rna_MeshNormalValue_vector}},
	"MeshNormalValue", NULL, NULL, 516, NULL, "Mesh Normal Vector",
	"Vector in a mesh normal array",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshNormalValue_rna_properties,
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

/* Mesh Loop Triangles */
CollectionPropertyRNA rna_MeshLoopTriangles_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopTriangles_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangles_rna_properties_begin, MeshLoopTriangles_rna_properties_next, MeshLoopTriangles_rna_properties_end, MeshLoopTriangles_rna_properties_get, NULL, NULL, MeshLoopTriangles_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopTriangles_rna_type = {
	{NULL, (PropertyRNA *)&rna_MeshLoopTriangles_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangles_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_MeshLoopTriangles = {
	{(ContainerRNA *)&RNA_UVLoopLayers, (ContainerRNA *)&RNA_MeshNormalValue,
	NULL,
	{(PropertyRNA *)&rna_MeshLoopTriangles_rna_properties, (PropertyRNA *)&rna_MeshLoopTriangles_rna_type}},
	"MeshLoopTriangles", NULL, NULL, 516, NULL, "Mesh Loop Triangles",
	"Tessellation of mesh polygons into triangles",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshLoopTriangles_rna_properties,
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

/* UV Map Layers */
CollectionPropertyRNA rna_UVLoopLayers_rna_properties = {
	{(PropertyRNA *)&rna_UVLoopLayers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UVLoopLayers_rna_properties_begin, UVLoopLayers_rna_properties_next, UVLoopLayers_rna_properties_end, UVLoopLayers_rna_properties_get, NULL, NULL, UVLoopLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UVLoopLayers_rna_type = {
	{(PropertyRNA *)&rna_UVLoopLayers_active, (PropertyRNA *)&rna_UVLoopLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UVLoopLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UVLoopLayers_active = {
	{(PropertyRNA *)&rna_UVLoopLayers_active_index, (PropertyRNA *)&rna_UVLoopLayers_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active UV Map Layer",
	"Active UV Map layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UVLoopLayers_active_get, UVLoopLayers_active_set, NULL, NULL,&RNA_MeshUVLoopLayer
};

IntPropertyRNA rna_UVLoopLayers_active_index = {
	{NULL, (PropertyRNA *)&rna_UVLoopLayers_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active UV Map Index",
	"Active UV map index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UVLoopLayers_active_index_get, UVLoopLayers_active_index_set, NULL, NULL, rna_Mesh_uv_layer_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_UVLoopLayers_new_name = {
	{(PropertyRNA *)&rna_UVLoopLayers_new_do_init, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"UV map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "UVMap"
};

BoolPropertyRNA rna_UVLoopLayers_new_do_init = {
	{(PropertyRNA *)&rna_UVLoopLayers_new_layer, (PropertyRNA *)&rna_UVLoopLayers_new_name,
	-1, "do_init", 3, 0, 0, 0, 0, "",
	"Whether new layer\'s data should be initialized by copying current active one, or if none is active, with a default UVmap",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_UVLoopLayers_new_layer = {
	{NULL, (PropertyRNA *)&rna_UVLoopLayers_new_do_init,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshUVLoopLayer
};

FunctionRNA rna_UVLoopLayers_new_func = {
	{(FunctionRNA *)&rna_UVLoopLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_UVLoopLayers_new_name, (PropertyRNA *)&rna_UVLoopLayers_new_layer}},
	"new", 16, "Add a UV map layer to Mesh",
	UVLoopLayers_new_call,
	(PropertyRNA *)&rna_UVLoopLayers_new_layer
};

PointerPropertyRNA rna_UVLoopLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 8650752, 0, 1, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshUVLoopLayer
};

FunctionRNA rna_UVLoopLayers_remove_func = {
	{NULL, (FunctionRNA *)&rna_UVLoopLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_UVLoopLayers_remove_layer, (PropertyRNA *)&rna_UVLoopLayers_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	UVLoopLayers_remove_call,
	NULL
};

StructRNA RNA_UVLoopLayers = {
	{(ContainerRNA *)&RNA_LoopColors, (ContainerRNA *)&RNA_MeshLoopTriangles,
	NULL,
	{(PropertyRNA *)&rna_UVLoopLayers_rna_properties, (PropertyRNA *)&rna_UVLoopLayers_active_index}},
	"UVLoopLayers", NULL, NULL, 516, NULL, "UV Map Layers",
	"Collection of UV map layers",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UVLoopLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_UVLoopLayers_new_func, (FunctionRNA *)&rna_UVLoopLayers_remove_func}
};

/* Loop Colors */
CollectionPropertyRNA rna_LoopColors_rna_properties = {
	{(PropertyRNA *)&rna_LoopColors_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LoopColors_rna_properties_begin, LoopColors_rna_properties_next, LoopColors_rna_properties_end, LoopColors_rna_properties_get, NULL, NULL, LoopColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_LoopColors_rna_type = {
	{(PropertyRNA *)&rna_LoopColors_active, (PropertyRNA *)&rna_LoopColors_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LoopColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_LoopColors_active = {
	{(PropertyRNA *)&rna_LoopColors_active_index, (PropertyRNA *)&rna_LoopColors_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Vertex Color Layer",
	"Active vertex color layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LoopColors_active_get, LoopColors_active_set, NULL, NULL,&RNA_MeshLoopColorLayer
};

IntPropertyRNA rna_LoopColors_active_index = {
	{NULL, (PropertyRNA *)&rna_LoopColors_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Vertex Color Index",
	"Active vertex color index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	LoopColors_active_index_get, LoopColors_active_index_set, NULL, NULL, rna_Mesh_vertex_color_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_LoopColors_new_name = {
	{(PropertyRNA *)&rna_LoopColors_new_do_init, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Vertex color name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Col"
};

BoolPropertyRNA rna_LoopColors_new_do_init = {
	{(PropertyRNA *)&rna_LoopColors_new_layer, (PropertyRNA *)&rna_LoopColors_new_name,
	-1, "do_init", 3, 0, 0, 0, 0, "",
	"Whether new layer\'s data should be initialized by copying current active one",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_LoopColors_new_layer = {
	{NULL, (PropertyRNA *)&rna_LoopColors_new_do_init,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshLoopColorLayer
};

FunctionRNA rna_LoopColors_new_func = {
	{(FunctionRNA *)&rna_LoopColors_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_LoopColors_new_name, (PropertyRNA *)&rna_LoopColors_new_layer}},
	"new", 16, "Add a vertex color layer to Mesh",
	LoopColors_new_call,
	(PropertyRNA *)&rna_LoopColors_new_layer
};

PointerPropertyRNA rna_LoopColors_remove_layer = {
	{NULL, NULL,
	-1, "layer", 262144, 0, 1, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshLoopColorLayer
};

FunctionRNA rna_LoopColors_remove_func = {
	{NULL, (FunctionRNA *)&rna_LoopColors_new_func,
	NULL,
	{(PropertyRNA *)&rna_LoopColors_remove_layer, (PropertyRNA *)&rna_LoopColors_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	LoopColors_remove_call,
	NULL
};

StructRNA RNA_LoopColors = {
	{(ContainerRNA *)&RNA_VertColors, (ContainerRNA *)&RNA_UVLoopLayers,
	NULL,
	{(PropertyRNA *)&rna_LoopColors_rna_properties, (PropertyRNA *)&rna_LoopColors_active_index}},
	"LoopColors", NULL, NULL, 516, NULL, "Loop Colors",
	"Collection of vertex colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_LoopColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_LoopColors_new_func, (FunctionRNA *)&rna_LoopColors_remove_func}
};

/* Vert Colors */
CollectionPropertyRNA rna_VertColors_rna_properties = {
	{(PropertyRNA *)&rna_VertColors_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertColors_rna_properties_begin, VertColors_rna_properties_next, VertColors_rna_properties_end, VertColors_rna_properties_get, NULL, NULL, VertColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertColors_rna_type = {
	{(PropertyRNA *)&rna_VertColors_active, (PropertyRNA *)&rna_VertColors_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_VertColors_active = {
	{(PropertyRNA *)&rna_VertColors_active_index, (PropertyRNA *)&rna_VertColors_rna_type,
	-1, "active", 41943041, 0, 0, 0, 0, "Active Sculpt Vertex Color Layer",
	"Active sculpt vertex color layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertColors_active_get, VertColors_active_set, NULL, NULL,&RNA_MeshVertColorLayer
};

IntPropertyRNA rna_VertColors_active_index = {
	{NULL, (PropertyRNA *)&rna_VertColors_active,
	-1, "active_index", 3, 0, 0, 0, 0, "Active Sculpt Vertex Color Index",
	"Active sculpt vertex color index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_active_color, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertColors_active_index_get, VertColors_active_index_set, NULL, NULL, rna_Mesh_sculpt_vertex_color_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_VertColors_new_name = {
	{(PropertyRNA *)&rna_VertColors_new_do_init, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Sculpt Vertex color name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Col"
};

BoolPropertyRNA rna_VertColors_new_do_init = {
	{(PropertyRNA *)&rna_VertColors_new_layer, (PropertyRNA *)&rna_VertColors_new_name,
	-1, "do_init", 3, 0, 0, 0, 0, "",
	"Whether new layer\'s data should be initialized by copying current active one",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_VertColors_new_layer = {
	{NULL, (PropertyRNA *)&rna_VertColors_new_do_init,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshVertColorLayer
};

FunctionRNA rna_VertColors_new_func = {
	{(FunctionRNA *)&rna_VertColors_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertColors_new_name, (PropertyRNA *)&rna_VertColors_new_layer}},
	"new", 16, "Add a sculpt vertex color layer to Mesh",
	VertColors_new_call,
	(PropertyRNA *)&rna_VertColors_new_layer
};

PointerPropertyRNA rna_VertColors_remove_layer = {
	{NULL, NULL,
	-1, "layer", 262144, 0, 1, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshVertColorLayer
};

FunctionRNA rna_VertColors_remove_func = {
	{NULL, (FunctionRNA *)&rna_VertColors_new_func,
	NULL,
	{(PropertyRNA *)&rna_VertColors_remove_layer, (PropertyRNA *)&rna_VertColors_remove_layer}},
	"remove", 16, "Remove a vertex color layer",
	VertColors_remove_call,
	NULL
};

StructRNA RNA_VertColors = {
	{(ContainerRNA *)&RNA_VertexFloatProperties, (ContainerRNA *)&RNA_LoopColors,
	NULL,
	{(PropertyRNA *)&rna_VertColors_rna_properties, (PropertyRNA *)&rna_VertColors_active_index}},
	"VertColors", NULL, NULL, 516, NULL, "Vert Colors",
	"Collection of sculpt vertex colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VertColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertColors_new_func, (FunctionRNA *)&rna_VertColors_remove_func}
};

/* Vertex Float Properties */
CollectionPropertyRNA rna_VertexFloatProperties_rna_properties = {
	{(PropertyRNA *)&rna_VertexFloatProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexFloatProperties_rna_properties_begin, VertexFloatProperties_rna_properties_next, VertexFloatProperties_rna_properties_end, VertexFloatProperties_rna_properties_get, NULL, NULL, VertexFloatProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexFloatProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_VertexFloatProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexFloatProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_VertexFloatProperties_new_name = {
	{(PropertyRNA *)&rna_VertexFloatProperties_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Float property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Float Prop"
};

PointerPropertyRNA rna_VertexFloatProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_VertexFloatProperties_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshVertexFloatPropertyLayer
};

FunctionRNA rna_VertexFloatProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertexFloatProperties_new_name, (PropertyRNA *)&rna_VertexFloatProperties_new_layer}},
	"new", 0, "Add a float property layer to Mesh",
	VertexFloatProperties_new_call,
	(PropertyRNA *)&rna_VertexFloatProperties_new_layer
};

StructRNA RNA_VertexFloatProperties = {
	{(ContainerRNA *)&RNA_VertexIntProperties, (ContainerRNA *)&RNA_VertColors,
	NULL,
	{(PropertyRNA *)&rna_VertexFloatProperties_rna_properties, (PropertyRNA *)&rna_VertexFloatProperties_rna_type}},
	"VertexFloatProperties", NULL, NULL, 516, NULL, "Vertex Float Properties",
	"Collection of float properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VertexFloatProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertexFloatProperties_new_func, (FunctionRNA *)&rna_VertexFloatProperties_new_func}
};

/* Vertex Int Properties */
CollectionPropertyRNA rna_VertexIntProperties_rna_properties = {
	{(PropertyRNA *)&rna_VertexIntProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexIntProperties_rna_properties_begin, VertexIntProperties_rna_properties_next, VertexIntProperties_rna_properties_end, VertexIntProperties_rna_properties_get, NULL, NULL, VertexIntProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexIntProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_VertexIntProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexIntProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_VertexIntProperties_new_name = {
	{(PropertyRNA *)&rna_VertexIntProperties_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Int property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Int Prop"
};

PointerPropertyRNA rna_VertexIntProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_VertexIntProperties_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshVertexIntPropertyLayer
};

FunctionRNA rna_VertexIntProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertexIntProperties_new_name, (PropertyRNA *)&rna_VertexIntProperties_new_layer}},
	"new", 0, "Add a integer property layer to Mesh",
	VertexIntProperties_new_call,
	(PropertyRNA *)&rna_VertexIntProperties_new_layer
};

StructRNA RNA_VertexIntProperties = {
	{(ContainerRNA *)&RNA_VertexStringProperties, (ContainerRNA *)&RNA_VertexFloatProperties,
	NULL,
	{(PropertyRNA *)&rna_VertexIntProperties_rna_properties, (PropertyRNA *)&rna_VertexIntProperties_rna_type}},
	"VertexIntProperties", NULL, NULL, 516, NULL, "Vertex Int Properties",
	"Collection of int properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VertexIntProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertexIntProperties_new_func, (FunctionRNA *)&rna_VertexIntProperties_new_func}
};

/* Vertex String Properties */
CollectionPropertyRNA rna_VertexStringProperties_rna_properties = {
	{(PropertyRNA *)&rna_VertexStringProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexStringProperties_rna_properties_begin, VertexStringProperties_rna_properties_next, VertexStringProperties_rna_properties_end, VertexStringProperties_rna_properties_get, NULL, NULL, VertexStringProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexStringProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_VertexStringProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexStringProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_VertexStringProperties_new_name = {
	{(PropertyRNA *)&rna_VertexStringProperties_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"String property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "String Prop"
};

PointerPropertyRNA rna_VertexStringProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_VertexStringProperties_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshVertexStringPropertyLayer
};

FunctionRNA rna_VertexStringProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_VertexStringProperties_new_name, (PropertyRNA *)&rna_VertexStringProperties_new_layer}},
	"new", 0, "Add a string property layer to Mesh",
	VertexStringProperties_new_call,
	(PropertyRNA *)&rna_VertexStringProperties_new_layer
};

StructRNA RNA_VertexStringProperties = {
	{(ContainerRNA *)&RNA_PolygonFloatProperties, (ContainerRNA *)&RNA_VertexIntProperties,
	NULL,
	{(PropertyRNA *)&rna_VertexStringProperties_rna_properties, (PropertyRNA *)&rna_VertexStringProperties_rna_type}},
	"VertexStringProperties", NULL, NULL, 516, NULL, "Vertex String Properties",
	"Collection of string properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_VertexStringProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_VertexStringProperties_new_func, (FunctionRNA *)&rna_VertexStringProperties_new_func}
};

/* Polygon Float Properties */
CollectionPropertyRNA rna_PolygonFloatProperties_rna_properties = {
	{(PropertyRNA *)&rna_PolygonFloatProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PolygonFloatProperties_rna_properties_begin, PolygonFloatProperties_rna_properties_next, PolygonFloatProperties_rna_properties_end, PolygonFloatProperties_rna_properties_get, NULL, NULL, PolygonFloatProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PolygonFloatProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_PolygonFloatProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PolygonFloatProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PolygonFloatProperties_new_name = {
	{(PropertyRNA *)&rna_PolygonFloatProperties_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Float property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Float Prop"
};

PointerPropertyRNA rna_PolygonFloatProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_PolygonFloatProperties_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshPolygonFloatPropertyLayer
};

FunctionRNA rna_PolygonFloatProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_PolygonFloatProperties_new_name, (PropertyRNA *)&rna_PolygonFloatProperties_new_layer}},
	"new", 0, "Add a float property layer to Mesh",
	PolygonFloatProperties_new_call,
	(PropertyRNA *)&rna_PolygonFloatProperties_new_layer
};

StructRNA RNA_PolygonFloatProperties = {
	{(ContainerRNA *)&RNA_PolygonIntProperties, (ContainerRNA *)&RNA_VertexStringProperties,
	NULL,
	{(PropertyRNA *)&rna_PolygonFloatProperties_rna_properties, (PropertyRNA *)&rna_PolygonFloatProperties_rna_type}},
	"PolygonFloatProperties", NULL, NULL, 516, NULL, "Polygon Float Properties",
	"Collection of float properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PolygonFloatProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PolygonFloatProperties_new_func, (FunctionRNA *)&rna_PolygonFloatProperties_new_func}
};

/* Polygon Int Properties */
CollectionPropertyRNA rna_PolygonIntProperties_rna_properties = {
	{(PropertyRNA *)&rna_PolygonIntProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PolygonIntProperties_rna_properties_begin, PolygonIntProperties_rna_properties_next, PolygonIntProperties_rna_properties_end, PolygonIntProperties_rna_properties_get, NULL, NULL, PolygonIntProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PolygonIntProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_PolygonIntProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PolygonIntProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PolygonIntProperties_new_name = {
	{(PropertyRNA *)&rna_PolygonIntProperties_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Int property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Int Prop"
};

PointerPropertyRNA rna_PolygonIntProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_PolygonIntProperties_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshPolygonIntPropertyLayer
};

FunctionRNA rna_PolygonIntProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_PolygonIntProperties_new_name, (PropertyRNA *)&rna_PolygonIntProperties_new_layer}},
	"new", 0, "Add a integer property layer to Mesh",
	PolygonIntProperties_new_call,
	(PropertyRNA *)&rna_PolygonIntProperties_new_layer
};

StructRNA RNA_PolygonIntProperties = {
	{(ContainerRNA *)&RNA_PolygonStringProperties, (ContainerRNA *)&RNA_PolygonFloatProperties,
	NULL,
	{(PropertyRNA *)&rna_PolygonIntProperties_rna_properties, (PropertyRNA *)&rna_PolygonIntProperties_rna_type}},
	"PolygonIntProperties", NULL, NULL, 516, NULL, "Polygon Int Properties",
	"Collection of int properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PolygonIntProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PolygonIntProperties_new_func, (FunctionRNA *)&rna_PolygonIntProperties_new_func}
};

/* Polygon String Properties */
CollectionPropertyRNA rna_PolygonStringProperties_rna_properties = {
	{(PropertyRNA *)&rna_PolygonStringProperties_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PolygonStringProperties_rna_properties_begin, PolygonStringProperties_rna_properties_next, PolygonStringProperties_rna_properties_end, PolygonStringProperties_rna_properties_get, NULL, NULL, PolygonStringProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PolygonStringProperties_rna_type = {
	{NULL, (PropertyRNA *)&rna_PolygonStringProperties_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	PolygonStringProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PolygonStringProperties_new_name = {
	{(PropertyRNA *)&rna_PolygonStringProperties_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"String property name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "String Prop"
};

PointerPropertyRNA rna_PolygonStringProperties_new_layer = {
	{NULL, (PropertyRNA *)&rna_PolygonStringProperties_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshPolygonStringPropertyLayer
};

FunctionRNA rna_PolygonStringProperties_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_PolygonStringProperties_new_name, (PropertyRNA *)&rna_PolygonStringProperties_new_layer}},
	"new", 0, "Add a string property layer to Mesh",
	PolygonStringProperties_new_call,
	(PropertyRNA *)&rna_PolygonStringProperties_new_layer
};

StructRNA RNA_PolygonStringProperties = {
	{(ContainerRNA *)&RNA_MeshFaceMapLayers, (ContainerRNA *)&RNA_PolygonIntProperties,
	NULL,
	{(PropertyRNA *)&rna_PolygonStringProperties_rna_properties, (PropertyRNA *)&rna_PolygonStringProperties_rna_type}},
	"PolygonStringProperties", NULL, NULL, 516, NULL, "Polygon String Properties",
	"Collection of string properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PolygonStringProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PolygonStringProperties_new_func, (FunctionRNA *)&rna_PolygonStringProperties_new_func}
};

/* Mesh Face Maps */
CollectionPropertyRNA rna_MeshFaceMapLayers_rna_properties = {
	{(PropertyRNA *)&rna_MeshFaceMapLayers_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayers_rna_properties_begin, MeshFaceMapLayers_rna_properties_next, MeshFaceMapLayers_rna_properties_end, MeshFaceMapLayers_rna_properties_get, NULL, NULL, MeshFaceMapLayers_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshFaceMapLayers_rna_type = {
	{(PropertyRNA *)&rna_MeshFaceMapLayers_active, (PropertyRNA *)&rna_MeshFaceMapLayers_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MeshFaceMapLayers_active = {
	{NULL, (PropertyRNA *)&rna_MeshFaceMapLayers_rna_type,
	-1, "active", 8388608, 0, 0, 0, 0, "Active Face Map Layer",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayers_active_get, NULL, NULL, NULL,&RNA_MeshFaceMapLayer
};

StringPropertyRNA rna_MeshFaceMapLayers_new_name = {
	{(PropertyRNA *)&rna_MeshFaceMapLayers_new_layer, NULL,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"Face map name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, "Face Map"
};

PointerPropertyRNA rna_MeshFaceMapLayers_new_layer = {
	{NULL, (PropertyRNA *)&rna_MeshFaceMapLayers_new_name,
	-1, "layer", 8388608, 0, 6, 0, 0, "",
	"The newly created layer",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshFaceMapLayer
};

FunctionRNA rna_MeshFaceMapLayers_new_func = {
	{(FunctionRNA *)&rna_MeshFaceMapLayers_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_MeshFaceMapLayers_new_name, (PropertyRNA *)&rna_MeshFaceMapLayers_new_layer}},
	"new", 16, "Add a float property layer to Mesh",
	MeshFaceMapLayers_new_call,
	(PropertyRNA *)&rna_MeshFaceMapLayers_new_layer
};

PointerPropertyRNA rna_MeshFaceMapLayers_remove_layer = {
	{NULL, NULL,
	-1, "layer", 262144, 0, 1, 0, 0, "",
	"The layer to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshFaceMapLayer
};

FunctionRNA rna_MeshFaceMapLayers_remove_func = {
	{NULL, (FunctionRNA *)&rna_MeshFaceMapLayers_new_func,
	NULL,
	{(PropertyRNA *)&rna_MeshFaceMapLayers_remove_layer, (PropertyRNA *)&rna_MeshFaceMapLayers_remove_layer}},
	"remove", 16, "Remove a face map layer",
	MeshFaceMapLayers_remove_call,
	NULL
};

StructRNA RNA_MeshFaceMapLayers = {
	{(ContainerRNA *)&RNA_MeshSkinVertexLayer, (ContainerRNA *)&RNA_PolygonStringProperties,
	NULL,
	{(PropertyRNA *)&rna_MeshFaceMapLayers_rna_properties, (PropertyRNA *)&rna_MeshFaceMapLayers_active}},
	"MeshFaceMapLayers", NULL, NULL, 516, NULL, "Mesh Face Maps",
	"Collection of mesh face maps",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshFaceMapLayers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshFaceMapLayers_new_func, (FunctionRNA *)&rna_MeshFaceMapLayers_remove_func}
};

/* Mesh Skin Vertex Layer */
CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertexLayer_rna_properties_begin, MeshSkinVertexLayer_rna_properties_next, MeshSkinVertexLayer_rna_properties_end, MeshSkinVertexLayer_rna_properties_get, NULL, NULL, MeshSkinVertexLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_name, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertexLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshSkinVertexLayer_name = {
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_data, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of skin layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertexLayer_name_get, MeshSkinVertexLayer_name_length, MeshSkinVertexLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshSkinVertexLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshSkinVertexLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertexLayer_data_begin, MeshSkinVertexLayer_data_next, MeshSkinVertexLayer_data_end, MeshSkinVertexLayer_data_get, MeshSkinVertexLayer_data_length, MeshSkinVertexLayer_data_lookup_int, NULL, NULL, &RNA_MeshSkinVertex
};

StructRNA RNA_MeshSkinVertexLayer = {
	{(ContainerRNA *)&RNA_MeshSkinVertex, (ContainerRNA *)&RNA_MeshFaceMapLayers,
	NULL,
	{(PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties, (PropertyRNA *)&rna_MeshSkinVertexLayer_data}},
	"MeshSkinVertexLayer", NULL, NULL, 516, NULL, "Mesh Skin Vertex Layer",
	"Per-vertex skin data for use with the Skin modifier",
	"*", 17,
	(PropertyRNA *)&rna_MeshSkinVertexLayer_name, (PropertyRNA *)&rna_MeshSkinVertexLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshSkinVertexLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Skin Vertex */
CollectionPropertyRNA rna_MeshSkinVertex_rna_properties = {
	{(PropertyRNA *)&rna_MeshSkinVertex_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertex_rna_properties_begin, MeshSkinVertex_rna_properties_next, MeshSkinVertex_rna_properties_end, MeshSkinVertex_rna_properties_get, NULL, NULL, MeshSkinVertex_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshSkinVertex_rna_type = {
	{(PropertyRNA *)&rna_MeshSkinVertex_radius, (PropertyRNA *)&rna_MeshSkinVertex_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertex_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshSkinVertex_radius_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshSkinVertex_radius = {
	{(PropertyRNA *)&rna_MeshSkinVertex_use_root, (PropertyRNA *)&rna_MeshSkinVertex_rna_type,
	-1, "radius", 3, 0, 0, 4, 0, "Radius",
	"Radius of the skin",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MVertSkin, radius), 5, NULL},
	NULL, NULL, MeshSkinVertex_radius_get, MeshSkinVertex_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0010000000f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, 0.0f, rna_MeshSkinVertex_radius_default
};

BoolPropertyRNA rna_MeshSkinVertex_use_root = {
	{(PropertyRNA *)&rna_MeshSkinVertex_use_loose, (PropertyRNA *)&rna_MeshSkinVertex_radius,
	-1, "use_root", 3, 0, 0, 0, 0, "Root",
	"Vertex is a root for rotation calculations and armature generation, setting this flag does not clear other roots in the same mesh island",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertex_use_root_get, MeshSkinVertex_use_root_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshSkinVertex_use_loose = {
	{NULL, (PropertyRNA *)&rna_MeshSkinVertex_use_root,
	-1, "use_loose", 3, 0, 0, 0, 0, "Loose",
	"If vertex has multiple adjacent edges, it is hulled to them directly",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshSkinVertex_use_loose_get, MeshSkinVertex_use_loose_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshSkinVertex = {
	{(ContainerRNA *)&RNA_MeshVertexCreaseLayer, (ContainerRNA *)&RNA_MeshSkinVertexLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshSkinVertex_rna_properties, (PropertyRNA *)&rna_MeshSkinVertex_use_loose}},
	"MeshSkinVertex", NULL, NULL, 516, NULL, "Skin Vertex",
	"Per-vertex skin data for use with the Skin modifier",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshSkinVertex_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshSkinVertex_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Crease Layer */
CollectionPropertyRNA rna_MeshVertexCreaseLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexCreaseLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexCreaseLayer_rna_properties_begin, MeshVertexCreaseLayer_rna_properties_next, MeshVertexCreaseLayer_rna_properties_end, MeshVertexCreaseLayer_rna_properties_get, NULL, NULL, MeshVertexCreaseLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexCreaseLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexCreaseLayer_data, (PropertyRNA *)&rna_MeshVertexCreaseLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexCreaseLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshVertexCreaseLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshVertexCreaseLayer_rna_type,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexCreaseLayer_data_begin, MeshVertexCreaseLayer_data_next, MeshVertexCreaseLayer_data_end, MeshVertexCreaseLayer_data_get, MeshVertexCreaseLayer_data_length, MeshVertexCreaseLayer_data_lookup_int, NULL, NULL, &RNA_MeshVertexCrease
};

StructRNA RNA_MeshVertexCreaseLayer = {
	{(ContainerRNA *)&RNA_MeshVertexCrease, (ContainerRNA *)&RNA_MeshSkinVertex,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexCreaseLayer_rna_properties, (PropertyRNA *)&rna_MeshVertexCreaseLayer_data}},
	"MeshVertexCreaseLayer", NULL, NULL, 516, NULL, "Mesh Vertex Crease Layer",
	"Per-vertex crease",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertexCreaseLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexCreaseLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Property */
CollectionPropertyRNA rna_MeshVertexCrease_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexCrease_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexCrease_rna_properties_begin, MeshVertexCrease_rna_properties_next, MeshVertexCrease_rna_properties_end, MeshVertexCrease_rna_properties_get, NULL, NULL, MeshVertexCrease_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexCrease_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexCrease_value, (PropertyRNA *)&rna_MeshVertexCrease_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexCrease_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshVertexCrease_value = {
	{NULL, (PropertyRNA *)&rna_MeshVertexCrease_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MFloatProperty, f), 5, NULL},
	MeshVertexCrease_value_get, MeshVertexCrease_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshVertexCrease = {
	{(ContainerRNA *)&RNA_MeshPaintMaskLayer, (ContainerRNA *)&RNA_MeshVertexCreaseLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexCrease_rna_properties, (PropertyRNA *)&rna_MeshVertexCrease_value}},
	"MeshVertexCrease", NULL, NULL, 516, NULL, "Float Property",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertexCrease_rna_properties,
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

/* Mesh Paint Mask Layer */
CollectionPropertyRNA rna_MeshPaintMaskLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshPaintMaskLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPaintMaskLayer_rna_properties_begin, MeshPaintMaskLayer_rna_properties_next, MeshPaintMaskLayer_rna_properties_end, MeshPaintMaskLayer_rna_properties_get, NULL, NULL, MeshPaintMaskLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPaintMaskLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshPaintMaskLayer_data, (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPaintMaskLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshPaintMaskLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_type,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPaintMaskLayer_data_begin, MeshPaintMaskLayer_data_next, MeshPaintMaskLayer_data_end, MeshPaintMaskLayer_data_get, MeshPaintMaskLayer_data_length, MeshPaintMaskLayer_data_lookup_int, NULL, NULL, &RNA_MeshPaintMaskProperty
};

StructRNA RNA_MeshPaintMaskLayer = {
	{(ContainerRNA *)&RNA_MeshPaintMaskProperty, (ContainerRNA *)&RNA_MeshVertexCrease,
	NULL,
	{(PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties, (PropertyRNA *)&rna_MeshPaintMaskLayer_data}},
	"MeshPaintMaskLayer", NULL, NULL, 516, NULL, "Mesh Paint Mask Layer",
	"Per-vertex paint mask data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPaintMaskLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPaintMaskLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Paint Mask Property */
CollectionPropertyRNA rna_MeshPaintMaskProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshPaintMaskProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPaintMaskProperty_rna_properties_begin, MeshPaintMaskProperty_rna_properties_next, MeshPaintMaskProperty_rna_properties_end, MeshPaintMaskProperty_rna_properties_get, NULL, NULL, MeshPaintMaskProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPaintMaskProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshPaintMaskProperty_value, (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPaintMaskProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshPaintMaskProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MFloatProperty, f), 5, NULL},
	MeshPaintMaskProperty_value_get, MeshPaintMaskProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshPaintMaskProperty = {
	{(ContainerRNA *)&RNA_MeshVertex, (ContainerRNA *)&RNA_MeshPaintMaskLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties, (PropertyRNA *)&rna_MeshPaintMaskProperty_value}},
	"MeshPaintMaskProperty", NULL, NULL, 516, NULL, "Mesh Paint Mask Property",
	"Floating-point paint mask value",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPaintMaskProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPaintMask_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex */
CollectionPropertyRNA rna_MeshVertex_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertex_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_rna_properties_begin, MeshVertex_rna_properties_next, MeshVertex_rna_properties_end, MeshVertex_rna_properties_get, NULL, NULL, MeshVertex_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertex_rna_type = {
	{(PropertyRNA *)&rna_MeshVertex_co, (PropertyRNA *)&rna_MeshVertex_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshVertex_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_co = {
	{(PropertyRNA *)&rna_MeshVertex_normal, (PropertyRNA *)&rna_MeshVertex_rna_type,
	-1, "co", 3, 0, 0, 4, 0, "Location",
	"",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_positions_tag, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MVert, co), 5, NULL},
	NULL, NULL, MeshVertex_co_get, MeshVertex_co_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_co_default
};

static float rna_MeshVertex_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_normal = {
	{(PropertyRNA *)&rna_MeshVertex_select, (PropertyRNA *)&rna_MeshVertex_co,
	-1, "normal", 2, 0, 0, 0, 0, "Normal",
	"Vertex Normal",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshVertex_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_normal_default
};

BoolPropertyRNA rna_MeshVertex_select = {
	{(PropertyRNA *)&rna_MeshVertex_hide, (PropertyRNA *)&rna_MeshVertex_normal,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_select_get, MeshVertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshVertex_hide = {
	{(PropertyRNA *)&rna_MeshVertex_bevel_weight, (PropertyRNA *)&rna_MeshVertex_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_hide_get, MeshVertex_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_MeshVertex_bevel_weight = {
	{(PropertyRNA *)&rna_MeshVertex_groups, (PropertyRNA *)&rna_MeshVertex_hide,
	-1, "bevel_weight", 3, 0, 0, 0, 0, "Bevel Weight",
	"Weight used by the Bevel modifier \'Only Vertices\' option",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_bevel_weight_get, MeshVertex_bevel_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_MeshVertex_groups = {
	{(PropertyRNA *)&rna_MeshVertex_index, (PropertyRNA *)&rna_MeshVertex_bevel_weight,
	-1, "groups", 0, 0, 0, 8, 0, "Groups",
	"Weights for the vertex groups this vertex is member of",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_groups_begin, MeshVertex_groups_next, MeshVertex_groups_end, MeshVertex_groups_get, NULL, NULL, NULL, NULL, &RNA_VertexGroupElement
};

IntPropertyRNA rna_MeshVertex_index = {
	{(PropertyRNA *)&rna_MeshVertex_undeformed_co, (PropertyRNA *)&rna_MeshVertex_groups,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this vertex",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertex_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_MeshVertex_undeformed_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_undeformed_co = {
	{NULL, (PropertyRNA *)&rna_MeshVertex_index,
	-1, "undeformed_co", 2, 0, 0, 0, 0, "Undeformed Location",
	"For meshes with modifiers applied, the coordinate of the vertex with no deforming modifiers applied, as used for generated texture coordinates",
	0, "*",
	PROP_FLOAT, PROP_TRANSLATION | PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshVertex_undeformed_co_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_undeformed_co_default
};

StructRNA RNA_MeshVertex = {
	{(ContainerRNA *)&RNA_VertexGroupElement, (ContainerRNA *)&RNA_MeshPaintMaskProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshVertex_rna_properties, (PropertyRNA *)&rna_MeshVertex_undeformed_co}},
	"MeshVertex", NULL, NULL, 516, NULL, "Mesh Vertex",
	"Vertex in a Mesh data-block",
	"*", 546,
	NULL, (PropertyRNA *)&rna_MeshVertex_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertex_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Group Element */
CollectionPropertyRNA rna_VertexGroupElement_rna_properties = {
	{(PropertyRNA *)&rna_VertexGroupElement_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroupElement_rna_properties_begin, VertexGroupElement_rna_properties_next, VertexGroupElement_rna_properties_end, VertexGroupElement_rna_properties_get, NULL, NULL, VertexGroupElement_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_VertexGroupElement_rna_type = {
	{(PropertyRNA *)&rna_VertexGroupElement_group, (PropertyRNA *)&rna_VertexGroupElement_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	VertexGroupElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_VertexGroupElement_group = {
	{(PropertyRNA *)&rna_VertexGroupElement_weight, (PropertyRNA *)&rna_VertexGroupElement_rna_type,
	-1, "group", 2, 0, 0, 4, 0, "Group Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, def_nr), 0, NULL},
	VertexGroupElement_group_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_VertexGroupElement_weight = {
	{NULL, (PropertyRNA *)&rna_VertexGroupElement_group,
	-1, "weight", 3, 0, 0, 4, 0, "Weight",
	"Vertex Weight",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_edit_weight, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MDeformWeight, weight), 5, NULL},
	VertexGroupElement_weight_get, VertexGroupElement_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_VertexGroupElement = {
	{(ContainerRNA *)&RNA_MeshEdge, (ContainerRNA *)&RNA_MeshVertex,
	NULL,
	{(PropertyRNA *)&rna_VertexGroupElement_rna_properties, (PropertyRNA *)&rna_VertexGroupElement_weight}},
	"VertexGroupElement", NULL, NULL, 516, NULL, "Vertex Group Element",
	"Weight value of a vertex in a vertex group",
	"*", 201,
	NULL, (PropertyRNA *)&rna_VertexGroupElement_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_VertexGroupElement_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Edge */
CollectionPropertyRNA rna_MeshEdge_rna_properties = {
	{(PropertyRNA *)&rna_MeshEdge_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_rna_properties_begin, MeshEdge_rna_properties_next, MeshEdge_rna_properties_end, MeshEdge_rna_properties_get, NULL, NULL, MeshEdge_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshEdge_rna_type = {
	{(PropertyRNA *)&rna_MeshEdge_vertices, (PropertyRNA *)&rna_MeshEdge_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_MeshEdge_vertices_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MeshEdge_vertices = {
	{(PropertyRNA *)&rna_MeshEdge_crease, (PropertyRNA *)&rna_MeshEdge_rna_type,
	-1, "vertices", 3, 0, 0, 4, 0, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MEdge, v1), 0, NULL},
	NULL, NULL, MeshEdge_vertices_get, MeshEdge_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshEdge_vertices_default
};

FloatPropertyRNA rna_MeshEdge_crease = {
	{(PropertyRNA *)&rna_MeshEdge_bevel_weight, (PropertyRNA *)&rna_MeshEdge_vertices,
	-1, "crease", 3, 0, 0, 0, 0, "Crease",
	"Weight used by the Subdivision Surface modifier for creasing",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_crease_get, MeshEdge_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshEdge_bevel_weight = {
	{(PropertyRNA *)&rna_MeshEdge_select, (PropertyRNA *)&rna_MeshEdge_crease,
	-1, "bevel_weight", 3, 0, 0, 0, 0, "Bevel Weight",
	"Weight used by the Bevel modifier",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_bevel_weight_get, MeshEdge_bevel_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_MeshEdge_select = {
	{(PropertyRNA *)&rna_MeshEdge_hide, (PropertyRNA *)&rna_MeshEdge_bevel_weight,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_select_get, MeshEdge_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_hide = {
	{(PropertyRNA *)&rna_MeshEdge_use_seam, (PropertyRNA *)&rna_MeshEdge_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_hide_get, MeshEdge_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_use_seam = {
	{(PropertyRNA *)&rna_MeshEdge_use_edge_sharp, (PropertyRNA *)&rna_MeshEdge_hide,
	-1, "use_seam", 3, 0, 0, 0, 0, "Seam",
	"Seam edge for UV unwrapping",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_use_seam_get, MeshEdge_use_seam_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_use_edge_sharp = {
	{(PropertyRNA *)&rna_MeshEdge_is_loose, (PropertyRNA *)&rna_MeshEdge_use_seam,
	-1, "use_edge_sharp", 3, 0, 0, 0, 0, "Sharp",
	"Sharp edge for the Edge Split modifier",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_use_edge_sharp_get, MeshEdge_use_edge_sharp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_is_loose = {
	{(PropertyRNA *)&rna_MeshEdge_use_freestyle_mark, (PropertyRNA *)&rna_MeshEdge_use_edge_sharp,
	-1, "is_loose", 3, 0, 0, 0, 0, "Loose",
	"Loose edge",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_is_loose_get, MeshEdge_is_loose_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshEdge_use_freestyle_mark = {
	{(PropertyRNA *)&rna_MeshEdge_index, (PropertyRNA *)&rna_MeshEdge_is_loose,
	-1, "use_freestyle_mark", 3, 0, 0, 0, 0, "Freestyle Edge Mark",
	"Edge mark for Freestyle line rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_use_freestyle_mark_get, MeshEdge_use_freestyle_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MeshEdge_index = {
	{NULL, (PropertyRNA *)&rna_MeshEdge_use_freestyle_mark,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this edge",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshEdge_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshEdge = {
	{(ContainerRNA *)&RNA_MeshLoopTriangle, (ContainerRNA *)&RNA_VertexGroupElement,
	NULL,
	{(PropertyRNA *)&rna_MeshEdge_rna_properties, (PropertyRNA *)&rna_MeshEdge_index}},
	"MeshEdge", NULL, NULL, 516, NULL, "Mesh Edge",
	"Edge in a Mesh data-block",
	"*", 547,
	NULL, (PropertyRNA *)&rna_MeshEdge_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshEdge_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Loop Triangle */
CollectionPropertyRNA rna_MeshLoopTriangle_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangle_rna_properties_begin, MeshLoopTriangle_rna_properties_next, MeshLoopTriangle_rna_properties_end, MeshLoopTriangle_rna_properties_get, NULL, NULL, MeshLoopTriangle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopTriangle_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_vertices, (PropertyRNA *)&rna_MeshLoopTriangle_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_MeshLoopTriangle_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshLoopTriangle_vertices = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_loops, (PropertyRNA *)&rna_MeshLoopTriangle_rna_type,
	-1, "vertices", 2, 0, 0, 0, 0, "Vertices",
	"Indices of triangle vertices",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoopTriangle_vertices_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshLoopTriangle_vertices_default
};

static int rna_MeshLoopTriangle_loops_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshLoopTriangle_loops = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_polygon_index, (PropertyRNA *)&rna_MeshLoopTriangle_vertices,
	-1, "loops", 2, 0, 0, 4, 0, "Loops",
	"Indices of mesh loops that make up the triangle",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MLoopTri, tri), 0, NULL},
	NULL, NULL, MeshLoopTriangle_loops_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshLoopTriangle_loops_default
};

IntPropertyRNA rna_MeshLoopTriangle_polygon_index = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_normal, (PropertyRNA *)&rna_MeshLoopTriangle_loops,
	-1, "polygon_index", 2, 0, 0, 4, 0, "Polygon",
	"Index of mesh polygon that the triangle is a part of",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MLoopTri, poly), 0, NULL},
	MeshLoopTriangle_polygon_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_MeshLoopTriangle_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoopTriangle_normal = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_split_normals, (PropertyRNA *)&rna_MeshLoopTriangle_polygon_index,
	-1, "normal", 2, 0, 0, 0, 0, "Triangle Normal",
	"Local space unit length normal vector for this triangle",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoopTriangle_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopTriangle_normal_default
};

static float rna_MeshLoopTriangle_split_normals_default[9] = {
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

FloatPropertyRNA rna_MeshLoopTriangle_split_normals = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_area, (PropertyRNA *)&rna_MeshLoopTriangle_normal,
	-1, "split_normals", 2, 0, 0, 0, 0, "Split Normals",
	"Local space unit length split normals vectors of the vertices of this triangle (must be computed beforehand using calc_normals_split or calc_tangents)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoopTriangle_split_normals_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopTriangle_split_normals_default
};

FloatPropertyRNA rna_MeshLoopTriangle_area = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_index, (PropertyRNA *)&rna_MeshLoopTriangle_split_normals,
	-1, "area", 2, 0, 0, 0, 0, "Triangle Area",
	"Area of this triangle",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangle_area_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MeshLoopTriangle_index = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_material_index, (PropertyRNA *)&rna_MeshLoopTriangle_area,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this loop triangle",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangle_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshLoopTriangle_material_index = {
	{(PropertyRNA *)&rna_MeshLoopTriangle_use_smooth, (PropertyRNA *)&rna_MeshLoopTriangle_index,
	-1, "material_index", 2, 0, 0, 0, 0, "Material Index",
	"Material slot index of this triangle",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangle_material_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_MeshLoopTriangle_use_smooth = {
	{NULL, (PropertyRNA *)&rna_MeshLoopTriangle_material_index,
	-1, "use_smooth", 2, 0, 0, 0, 0, "Smooth",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopTriangle_use_smooth_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshLoopTriangle = {
	{(ContainerRNA *)&RNA_MeshLoop, (ContainerRNA *)&RNA_MeshEdge,
	NULL,
	{(PropertyRNA *)&rna_MeshLoopTriangle_rna_properties, (PropertyRNA *)&rna_MeshLoopTriangle_use_smooth}},
	"MeshLoopTriangle", NULL, NULL, 516, NULL, "Mesh Loop Triangle",
	"Tessellated triangle in a Mesh data-block",
	"*", 548,
	NULL, (PropertyRNA *)&rna_MeshLoopTriangle_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshLoopTriangle_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Loop */
CollectionPropertyRNA rna_MeshLoop_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoop_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoop_rna_properties_begin, MeshLoop_rna_properties_next, MeshLoop_rna_properties_end, MeshLoop_rna_properties_get, NULL, NULL, MeshLoop_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoop_rna_type = {
	{(PropertyRNA *)&rna_MeshLoop_vertex_index, (PropertyRNA *)&rna_MeshLoop_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoop_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshLoop_vertex_index = {
	{(PropertyRNA *)&rna_MeshLoop_edge_index, (PropertyRNA *)&rna_MeshLoop_rna_type,
	-1, "vertex_index", 3, 0, 0, 4, 0, "Vertex",
	"Vertex index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MLoop, v), 0, NULL},
	MeshLoop_vertex_index_get, MeshLoop_vertex_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshLoop_edge_index = {
	{(PropertyRNA *)&rna_MeshLoop_index, (PropertyRNA *)&rna_MeshLoop_vertex_index,
	-1, "edge_index", 3, 0, 0, 4, 0, "Edge",
	"Edge index",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MLoop, e), 0, NULL},
	MeshLoop_edge_index_get, MeshLoop_edge_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshLoop_index = {
	{(PropertyRNA *)&rna_MeshLoop_normal, (PropertyRNA *)&rna_MeshLoop_edge_index,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this loop",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoop_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_MeshLoop_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_normal = {
	{(PropertyRNA *)&rna_MeshLoop_tangent, (PropertyRNA *)&rna_MeshLoop_index,
	-1, "normal", 3, 0, 0, 0, 0, "Normal",
	"Local space unit length split normal vector of this vertex for this polygon (must be computed beforehand using calc_normals_split or calc_tangents)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoop_normal_get, MeshLoop_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_normal_default
};

static float rna_MeshLoop_tangent_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_tangent = {
	{(PropertyRNA *)&rna_MeshLoop_bitangent_sign, (PropertyRNA *)&rna_MeshLoop_normal,
	-1, "tangent", 2, 0, 0, 0, 0, "Tangent",
	"Local space unit length tangent vector of this vertex for this polygon (must be computed beforehand using calc_tangents)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoop_tangent_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_tangent_default
};

FloatPropertyRNA rna_MeshLoop_bitangent_sign = {
	{(PropertyRNA *)&rna_MeshLoop_bitangent, (PropertyRNA *)&rna_MeshLoop_tangent,
	-1, "bitangent_sign", 2, 0, 0, 0, 0, "Bitangent Sign",
	"Sign of the bitangent vector of this vertex for this polygon (must be computed beforehand using calc_tangents, bitangent = bitangent_sign * cross(normal, tangent))",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoop_bitangent_sign_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_MeshLoop_bitangent_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoop_bitangent = {
	{NULL, (PropertyRNA *)&rna_MeshLoop_bitangent_sign,
	-1, "bitangent", 2, 0, 0, 0, 0, "Bitangent",
	"Bitangent vector of this vertex for this polygon (must be computed beforehand using calc_tangents, use it only if really needed, slower access than bitangent_sign)",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoop_bitangent_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoop_bitangent_default
};

StructRNA RNA_MeshLoop = {
	{(ContainerRNA *)&RNA_MeshPolygon, (ContainerRNA *)&RNA_MeshLoopTriangle,
	NULL,
	{(PropertyRNA *)&rna_MeshLoop_rna_properties, (PropertyRNA *)&rna_MeshLoop_bitangent}},
	"MeshLoop", NULL, NULL, 516, NULL, "Mesh Loop",
	"Loop in a Mesh data-block",
	"*", 547,
	NULL, (PropertyRNA *)&rna_MeshLoop_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshLoop_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon */
CollectionPropertyRNA rna_MeshPolygon_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygon_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_rna_properties_begin, MeshPolygon_rna_properties_next, MeshPolygon_rna_properties_end, MeshPolygon_rna_properties_get, NULL, NULL, MeshPolygon_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygon_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygon_vertices, (PropertyRNA *)&rna_MeshPolygon_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_MeshPolygon_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_MeshPolygon_vertices = {
	{(PropertyRNA *)&rna_MeshPolygon_loop_start, (PropertyRNA *)&rna_MeshPolygon_rna_type,
	-1, "vertices", 131075, 0, 0, 0, 0, "Vertices",
	"Vertex indices",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, rna_MeshPoly_vertices_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshPolygon_vertices_get, MeshPolygon_vertices_set, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_MeshPolygon_vertices_default
};

IntPropertyRNA rna_MeshPolygon_loop_start = {
	{(PropertyRNA *)&rna_MeshPolygon_loop_total, (PropertyRNA *)&rna_MeshPolygon_vertices,
	-1, "loop_start", 3, 0, 0, 4, 0, "Loop Start",
	"Index of the first loop of this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MPoly, loopstart), 0, NULL},
	MeshPolygon_loop_start_get, MeshPolygon_loop_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshPolygon_loop_total = {
	{(PropertyRNA *)&rna_MeshPolygon_material_index, (PropertyRNA *)&rna_MeshPolygon_loop_start,
	-1, "loop_total", 3, 0, 0, 4, 0, "Loop Total",
	"Number of loops used by this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MPoly, totloop), 0, NULL},
	MeshPolygon_loop_total_get, MeshPolygon_loop_total_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshPolygon_material_index = {
	{(PropertyRNA *)&rna_MeshPolygon_select, (PropertyRNA *)&rna_MeshPolygon_loop_total,
	-1, "material_index", 3, 0, 0, 4, 0, "Material Index",
	"Material slot index of this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MPoly, mat_nr), 1, NULL},
	MeshPolygon_material_index_get, MeshPolygon_material_index_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 32767, 0, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_select = {
	{(PropertyRNA *)&rna_MeshPolygon_hide, (PropertyRNA *)&rna_MeshPolygon_material_index,
	-1, "select", 3, 0, 0, 0, 0, "Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_select_get, MeshPolygon_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_hide = {
	{(PropertyRNA *)&rna_MeshPolygon_use_smooth, (PropertyRNA *)&rna_MeshPolygon_select,
	-1, "hide", 3, 0, 0, 0, 0, "Hide",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_hide_get, MeshPolygon_hide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_use_smooth = {
	{(PropertyRNA *)&rna_MeshPolygon_use_freestyle_mark, (PropertyRNA *)&rna_MeshPolygon_hide,
	-1, "use_smooth", 3, 0, 0, 0, 0, "Smooth",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_use_smooth_get, MeshPolygon_use_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshPolygon_use_freestyle_mark = {
	{(PropertyRNA *)&rna_MeshPolygon_normal, (PropertyRNA *)&rna_MeshPolygon_use_smooth,
	-1, "use_freestyle_mark", 3, 0, 0, 0, 0, "Freestyle Face Mark",
	"Face mark for Freestyle line rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_use_freestyle_mark_get, MeshPolygon_use_freestyle_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_MeshPolygon_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshPolygon_normal = {
	{(PropertyRNA *)&rna_MeshPolygon_center, (PropertyRNA *)&rna_MeshPolygon_use_freestyle_mark,
	-1, "normal", 2, 0, 0, 0, 0, "Polygon Normal",
	"Local space unit length normal vector for this polygon",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshPolygon_normal_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshPolygon_normal_default
};

static float rna_MeshPolygon_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshPolygon_center = {
	{(PropertyRNA *)&rna_MeshPolygon_area, (PropertyRNA *)&rna_MeshPolygon_normal,
	-1, "center", 2, 0, 0, 0, 0, "Polygon Center",
	"Center of this polygon",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshPolygon_center_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshPolygon_center_default
};

FloatPropertyRNA rna_MeshPolygon_area = {
	{(PropertyRNA *)&rna_MeshPolygon_index, (PropertyRNA *)&rna_MeshPolygon_center,
	-1, "area", 2, 0, 0, 0, 0, "Polygon Area",
	"Read only area of this polygon",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_area_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_MeshPolygon_index = {
	{NULL, (PropertyRNA *)&rna_MeshPolygon_area,
	-1, "index", 2, 0, 0, 0, 0, "Index",
	"Index of this polygon",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygon_index_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshPolygon_flip_func = {
	{NULL, NULL,
	NULL,
	{NULL, NULL}},
	"flip", 2048, "Invert winding of this polygon (flip its normal)",
	MeshPolygon_flip_call,
	NULL
};

StructRNA RNA_MeshPolygon = {
	{(ContainerRNA *)&RNA_MeshUVLoopLayer, (ContainerRNA *)&RNA_MeshLoop,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygon_rna_properties, (PropertyRNA *)&rna_MeshPolygon_index}},
	"MeshPolygon", NULL, NULL, 516, NULL, "Mesh Polygon",
	"Polygon in a Mesh data-block",
	"*", 548,
	NULL, (PropertyRNA *)&rna_MeshPolygon_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygon_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_MeshPolygon_flip_func, (FunctionRNA *)&rna_MeshPolygon_flip_func}
};

/* MeshUVLoopLayer */
CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_rna_properties_begin, MeshUVLoopLayer_rna_properties_next, MeshUVLoopLayer_rna_properties_end, MeshUVLoopLayer_rna_properties_get, NULL, NULL, MeshUVLoopLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshUVLoopLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_data, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshUVLoopLayer_data = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_name, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_type,
	-1, "data", 0, 0, 0, 8, 0, "data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_data_begin, MeshUVLoopLayer_data_next, MeshUVLoopLayer_data_end, MeshUVLoopLayer_data_get, MeshUVLoopLayer_data_length, MeshUVLoopLayer_data_lookup_int, NULL, NULL, &RNA_MeshUVLoop
};

StringPropertyRNA rna_MeshUVLoopLayer_name = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_active, (PropertyRNA *)&rna_MeshUVLoopLayer_data,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of UV map",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_name_get, MeshUVLoopLayer_name_length, MeshUVLoopLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_MeshUVLoopLayer_active = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_active_render, (PropertyRNA *)&rna_MeshUVLoopLayer_name,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"Set the map as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_active_get, MeshUVLoopLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshUVLoopLayer_active_render = {
	{(PropertyRNA *)&rna_MeshUVLoopLayer_active_clone, (PropertyRNA *)&rna_MeshUVLoopLayer_active,
	-1, "active_render", 3, 0, 0, 0, 0, "Active Render",
	"Set the UV map as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_active_render_get, MeshUVLoopLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshUVLoopLayer_active_clone = {
	{NULL, (PropertyRNA *)&rna_MeshUVLoopLayer_active_render,
	-1, "active_clone", 3, 0, 0, 0, 0, "Active Clone",
	"Set the map as active for cloning",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoopLayer_active_clone_get, MeshUVLoopLayer_active_clone_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshUVLoopLayer = {
	{(ContainerRNA *)&RNA_MeshUVLoop, (ContainerRNA *)&RNA_MeshPolygon,
	NULL,
	{(PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties, (PropertyRNA *)&rna_MeshUVLoopLayer_active_clone}},
	"MeshUVLoopLayer", NULL, NULL, 516, NULL, "MeshUVLoopLayer",
	"",
	"*", 17,
	(PropertyRNA *)&rna_MeshUVLoopLayer_name, (PropertyRNA *)&rna_MeshUVLoopLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshUVLoopLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* MeshUVLoop */
CollectionPropertyRNA rna_MeshUVLoop_rna_properties = {
	{(PropertyRNA *)&rna_MeshUVLoop_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoop_rna_properties_begin, MeshUVLoop_rna_properties_next, MeshUVLoop_rna_properties_end, MeshUVLoop_rna_properties_get, NULL, NULL, MeshUVLoop_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshUVLoop_rna_type = {
	{(PropertyRNA *)&rna_MeshUVLoop_uv, (PropertyRNA *)&rna_MeshUVLoop_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoop_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshUVLoop_uv_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshUVLoop_uv = {
	{(PropertyRNA *)&rna_MeshUVLoop_pin_uv, (PropertyRNA *)&rna_MeshUVLoop_rna_type,
	-1, "uv", 3, 0, 0, 4, 0, "uv",
	"",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MLoopUV, uv), 5, NULL},
	NULL, NULL, MeshUVLoop_uv_get, MeshUVLoop_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshUVLoop_uv_default
};

BoolPropertyRNA rna_MeshUVLoop_pin_uv = {
	{(PropertyRNA *)&rna_MeshUVLoop_select, (PropertyRNA *)&rna_MeshUVLoop_uv,
	-1, "pin_uv", 3, 0, 0, 0, 0, "UV Pinned",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoop_pin_uv_get, MeshUVLoop_pin_uv_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshUVLoop_select = {
	{(PropertyRNA *)&rna_MeshUVLoop_select_edge, (PropertyRNA *)&rna_MeshUVLoop_pin_uv,
	-1, "select", 3, 0, 0, 0, 0, "UV Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoop_select_get, MeshUVLoop_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshUVLoop_select_edge = {
	{NULL, (PropertyRNA *)&rna_MeshUVLoop_select,
	-1, "select_edge", 3, 0, 0, 0, 0, "UV Edge Select",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshUVLoop_select_edge_get, MeshUVLoop_select_edge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshUVLoop = {
	{(ContainerRNA *)&RNA_MeshLoopColorLayer, (ContainerRNA *)&RNA_MeshUVLoopLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshUVLoop_rna_properties, (PropertyRNA *)&rna_MeshUVLoop_select_edge}},
	"MeshUVLoop", NULL, NULL, 516, NULL, "MeshUVLoop",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshUVLoop_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshUVLoop_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color Layer */
CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColorLayer_rna_properties_begin, MeshLoopColorLayer_rna_properties_next, MeshLoopColorLayer_rna_properties_end, MeshLoopColorLayer_rna_properties_get, NULL, NULL, MeshLoopColorLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopColorLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_name, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColorLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshLoopColorLayer_name = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_active, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of Vertex color layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColorLayer_name_get, MeshLoopColorLayer_name_length, MeshLoopColorLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_MeshLoopColorLayer_active = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_active_render, (PropertyRNA *)&rna_MeshLoopColorLayer_name,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"Sets the layer as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColorLayer_active_get, MeshLoopColorLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshLoopColorLayer_active_render = {
	{(PropertyRNA *)&rna_MeshLoopColorLayer_data, (PropertyRNA *)&rna_MeshLoopColorLayer_active,
	-1, "active_render", 3, 0, 0, 0, 0, "Active Render",
	"Sets the layer as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColorLayer_active_render_get, MeshLoopColorLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshLoopColorLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshLoopColorLayer_active_render,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColorLayer_data_begin, MeshLoopColorLayer_data_next, MeshLoopColorLayer_data_end, MeshLoopColorLayer_data_get, MeshLoopColorLayer_data_length, MeshLoopColorLayer_data_lookup_int, NULL, NULL, &RNA_MeshLoopColor
};

StructRNA RNA_MeshLoopColorLayer = {
	{(ContainerRNA *)&RNA_MeshLoopColor, (ContainerRNA *)&RNA_MeshUVLoop,
	NULL,
	{(PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties, (PropertyRNA *)&rna_MeshLoopColorLayer_data}},
	"MeshLoopColorLayer", NULL, NULL, 516, NULL, "Mesh Vertex Color Layer",
	"Layer of vertex colors in a Mesh data-block",
	"*", 202,
	(PropertyRNA *)&rna_MeshLoopColorLayer_name, (PropertyRNA *)&rna_MeshLoopColorLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshLoopColorLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color */
CollectionPropertyRNA rna_MeshLoopColor_rna_properties = {
	{(PropertyRNA *)&rna_MeshLoopColor_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColor_rna_properties_begin, MeshLoopColor_rna_properties_next, MeshLoopColor_rna_properties_end, MeshLoopColor_rna_properties_get, NULL, NULL, MeshLoopColor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshLoopColor_rna_type = {
	{(PropertyRNA *)&rna_MeshLoopColor_color, (PropertyRNA *)&rna_MeshLoopColor_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshLoopColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshLoopColor_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshLoopColor_color = {
	{NULL, (PropertyRNA *)&rna_MeshLoopColor_rna_type,
	-1, "color", 3, 0, 0, 0, 0, "Color",
	"Color in sRGB color space",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, MeshLoopColor_color_get, MeshLoopColor_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshLoopColor_color_default
};

StructRNA RNA_MeshLoopColor = {
	{(ContainerRNA *)&RNA_MeshVertColorLayer, (ContainerRNA *)&RNA_MeshLoopColorLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshLoopColor_rna_properties, (PropertyRNA *)&rna_MeshLoopColor_color}},
	"MeshLoopColor", NULL, NULL, 516, NULL, "Mesh Vertex Color",
	"Vertex loop colors in a Mesh",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshLoopColor_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshColor_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Sculpt Vertex Color Layer */
CollectionPropertyRNA rna_MeshVertColorLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertColorLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColorLayer_rna_properties_begin, MeshVertColorLayer_rna_properties_next, MeshVertColorLayer_rna_properties_end, MeshVertColorLayer_rna_properties_get, NULL, NULL, MeshVertColorLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertColorLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshVertColorLayer_name, (PropertyRNA *)&rna_MeshVertColorLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColorLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshVertColorLayer_name = {
	{(PropertyRNA *)&rna_MeshVertColorLayer_active, (PropertyRNA *)&rna_MeshVertColorLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of Sculpt Vertex color layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColorLayer_name_get, MeshVertColorLayer_name_length, MeshVertColorLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_MeshVertColorLayer_active = {
	{(PropertyRNA *)&rna_MeshVertColorLayer_active_render, (PropertyRNA *)&rna_MeshVertColorLayer_name,
	-1, "active", 3, 0, 0, 0, 0, "Active",
	"Sets the sculpt vertex color layer as active for display and editing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColorLayer_active_get, MeshVertColorLayer_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_MeshVertColorLayer_active_render = {
	{(PropertyRNA *)&rna_MeshVertColorLayer_data, (PropertyRNA *)&rna_MeshVertColorLayer_active,
	-1, "active_render", 3, 0, 0, 0, 0, "Active Render",
	"Sets the sculpt vertex color layer as active for rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColorLayer_active_render_get, MeshVertColorLayer_active_render_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshVertColorLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshVertColorLayer_active_render,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColorLayer_data_begin, MeshVertColorLayer_data_next, MeshVertColorLayer_data_end, MeshVertColorLayer_data_get, MeshVertColorLayer_data_length, MeshVertColorLayer_data_lookup_int, NULL, NULL, &RNA_MeshVertColor
};

StructRNA RNA_MeshVertColorLayer = {
	{(ContainerRNA *)&RNA_MeshVertColor, (ContainerRNA *)&RNA_MeshLoopColor,
	NULL,
	{(PropertyRNA *)&rna_MeshVertColorLayer_rna_properties, (PropertyRNA *)&rna_MeshVertColorLayer_data}},
	"MeshVertColorLayer", NULL, NULL, 516, NULL, "Mesh Sculpt Vertex Color Layer",
	"Layer of sculpt vertex colors in a Mesh data-block",
	"*", 202,
	(PropertyRNA *)&rna_MeshVertColorLayer_name, (PropertyRNA *)&rna_MeshVertColorLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertColorLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Sculpt Vertex Color */
CollectionPropertyRNA rna_MeshVertColor_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertColor_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColor_rna_properties_begin, MeshVertColor_rna_properties_next, MeshVertColor_rna_properties_end, MeshVertColor_rna_properties_get, NULL, NULL, MeshVertColor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertColor_rna_type = {
	{(PropertyRNA *)&rna_MeshVertColor_color, (PropertyRNA *)&rna_MeshVertColor_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshVertColor_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertColor_color = {
	{NULL, (PropertyRNA *)&rna_MeshVertColor_rna_type,
	-1, "color", 3, 0, 0, 4, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MPropCol, color), 5, NULL},
	NULL, NULL, MeshVertColor_color_get, MeshVertColor_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshVertColor_color_default
};

StructRNA RNA_MeshVertColor = {
	{(ContainerRNA *)&RNA_MeshVertexFloatPropertyLayer, (ContainerRNA *)&RNA_MeshVertColorLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshVertColor_rna_properties, (PropertyRNA *)&rna_MeshVertColor_color}},
	"MeshVertColor", NULL, NULL, 516, NULL, "Mesh Sculpt Vertex Color",
	"Vertex colors in a Mesh",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertColor_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertColor_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Float Property Layer */
CollectionPropertyRNA rna_MeshVertexFloatPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexFloatPropertyLayer_rna_properties_begin, MeshVertexFloatPropertyLayer_rna_properties_next, MeshVertexFloatPropertyLayer_rna_properties_end, MeshVertexFloatPropertyLayer_rna_properties_get, NULL, NULL, MeshVertexFloatPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexFloatPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_name, (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexFloatPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshVertexFloatPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_data, (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexFloatPropertyLayer_name_get, MeshVertexFloatPropertyLayer_name_length, MeshVertexFloatPropertyLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshVertexFloatPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexFloatPropertyLayer_data_begin, MeshVertexFloatPropertyLayer_data_next, MeshVertexFloatPropertyLayer_data_end, MeshVertexFloatPropertyLayer_data_get, MeshVertexFloatPropertyLayer_data_length, MeshVertexFloatPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshVertexFloatProperty
};

StructRNA RNA_MeshVertexFloatPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshVertexFloatProperty, (ContainerRNA *)&RNA_MeshVertColor,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_data}},
	"MeshVertexFloatPropertyLayer", NULL, NULL, 516, NULL, "Mesh Vertex Float Property Layer",
	"User defined layer of floating-point number values",
	"*", 17,
	(PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_name, (PropertyRNA *)&rna_MeshVertexFloatPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexFloatPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Float Property */
CollectionPropertyRNA rna_MeshVertexFloatProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexFloatProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexFloatProperty_rna_properties_begin, MeshVertexFloatProperty_rna_properties_next, MeshVertexFloatProperty_rna_properties_end, MeshVertexFloatProperty_rna_properties_get, NULL, NULL, MeshVertexFloatProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexFloatProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexFloatProperty_value, (PropertyRNA *)&rna_MeshVertexFloatProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexFloatProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshVertexFloatProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshVertexFloatProperty_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MFloatProperty, f), 5, NULL},
	MeshVertexFloatProperty_value_get, MeshVertexFloatProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshVertexFloatProperty = {
	{(ContainerRNA *)&RNA_MeshPolygonFloatPropertyLayer, (ContainerRNA *)&RNA_MeshVertexFloatPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexFloatProperty_rna_properties, (PropertyRNA *)&rna_MeshVertexFloatProperty_value}},
	"MeshVertexFloatProperty", NULL, NULL, 516, NULL, "Mesh Vertex Float Property",
	"User defined floating-point number value in a float properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertexFloatProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexFloatProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon Float Property Layer */
CollectionPropertyRNA rna_MeshPolygonFloatPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonFloatPropertyLayer_rna_properties_begin, MeshPolygonFloatPropertyLayer_rna_properties_next, MeshPolygonFloatPropertyLayer_rna_properties_end, MeshPolygonFloatPropertyLayer_rna_properties_get, NULL, NULL, MeshPolygonFloatPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygonFloatPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_name, (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonFloatPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshPolygonFloatPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_data, (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonFloatPropertyLayer_name_get, MeshPolygonFloatPropertyLayer_name_length, MeshPolygonFloatPropertyLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshPolygonFloatPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonFloatPropertyLayer_data_begin, MeshPolygonFloatPropertyLayer_data_next, MeshPolygonFloatPropertyLayer_data_end, MeshPolygonFloatPropertyLayer_data_get, MeshPolygonFloatPropertyLayer_data_length, MeshPolygonFloatPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshPolygonFloatProperty
};

StructRNA RNA_MeshPolygonFloatPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshPolygonFloatProperty, (ContainerRNA *)&RNA_MeshVertexFloatProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_data}},
	"MeshPolygonFloatPropertyLayer", NULL, NULL, 516, NULL, "Mesh Polygon Float Property Layer",
	"User defined layer of floating-point number values",
	"*", 17,
	(PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_name, (PropertyRNA *)&rna_MeshPolygonFloatPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygonFloatPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon Float Property */
CollectionPropertyRNA rna_MeshPolygonFloatProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygonFloatProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonFloatProperty_rna_properties_begin, MeshPolygonFloatProperty_rna_properties_next, MeshPolygonFloatProperty_rna_properties_end, MeshPolygonFloatProperty_rna_properties_get, NULL, NULL, MeshPolygonFloatProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygonFloatProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygonFloatProperty_value, (PropertyRNA *)&rna_MeshPolygonFloatProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonFloatProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshPolygonFloatProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshPolygonFloatProperty_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MFloatProperty, f), 5, NULL},
	MeshPolygonFloatProperty_value_get, MeshPolygonFloatProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshPolygonFloatProperty = {
	{(ContainerRNA *)&RNA_MeshVertexIntPropertyLayer, (ContainerRNA *)&RNA_MeshPolygonFloatPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygonFloatProperty_rna_properties, (PropertyRNA *)&rna_MeshPolygonFloatProperty_value}},
	"MeshPolygonFloatProperty", NULL, NULL, 516, NULL, "Mesh Polygon Float Property",
	"User defined floating-point number value in a float properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPolygonFloatProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygonFloatProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Int Property Layer */
CollectionPropertyRNA rna_MeshVertexIntPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexIntPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexIntPropertyLayer_rna_properties_begin, MeshVertexIntPropertyLayer_rna_properties_next, MeshVertexIntPropertyLayer_rna_properties_end, MeshVertexIntPropertyLayer_rna_properties_get, NULL, NULL, MeshVertexIntPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexIntPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexIntPropertyLayer_name, (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexIntPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshVertexIntPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshVertexIntPropertyLayer_data, (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexIntPropertyLayer_name_get, MeshVertexIntPropertyLayer_name_length, MeshVertexIntPropertyLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshVertexIntPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexIntPropertyLayer_data_begin, MeshVertexIntPropertyLayer_data_next, MeshVertexIntPropertyLayer_data_end, MeshVertexIntPropertyLayer_data_get, MeshVertexIntPropertyLayer_data_length, MeshVertexIntPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshVertexIntProperty
};

StructRNA RNA_MeshVertexIntPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshVertexIntProperty, (ContainerRNA *)&RNA_MeshPolygonFloatProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexIntPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_data}},
	"MeshVertexIntPropertyLayer", NULL, NULL, 516, NULL, "Mesh Vertex Int Property Layer",
	"User defined layer of integer number values",
	"*", 17,
	(PropertyRNA *)&rna_MeshVertexIntPropertyLayer_name, (PropertyRNA *)&rna_MeshVertexIntPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexIntPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Int Property */
CollectionPropertyRNA rna_MeshVertexIntProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexIntProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexIntProperty_rna_properties_begin, MeshVertexIntProperty_rna_properties_next, MeshVertexIntProperty_rna_properties_end, MeshVertexIntProperty_rna_properties_get, NULL, NULL, MeshVertexIntProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexIntProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexIntProperty_value, (PropertyRNA *)&rna_MeshVertexIntProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexIntProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshVertexIntProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshVertexIntProperty_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MIntProperty, i), 0, NULL},
	MeshVertexIntProperty_value_get, MeshVertexIntProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshVertexIntProperty = {
	{(ContainerRNA *)&RNA_MeshPolygonIntPropertyLayer, (ContainerRNA *)&RNA_MeshVertexIntPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexIntProperty_rna_properties, (PropertyRNA *)&rna_MeshVertexIntProperty_value}},
	"MeshVertexIntProperty", NULL, NULL, 516, NULL, "Mesh Vertex Int Property",
	"User defined integer number value in an integer properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertexIntProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexIntProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon Int Property Layer */
CollectionPropertyRNA rna_MeshPolygonIntPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonIntPropertyLayer_rna_properties_begin, MeshPolygonIntPropertyLayer_rna_properties_next, MeshPolygonIntPropertyLayer_rna_properties_end, MeshPolygonIntPropertyLayer_rna_properties_get, NULL, NULL, MeshPolygonIntPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygonIntPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_name, (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonIntPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshPolygonIntPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_data, (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonIntPropertyLayer_name_get, MeshPolygonIntPropertyLayer_name_length, MeshPolygonIntPropertyLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshPolygonIntPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonIntPropertyLayer_data_begin, MeshPolygonIntPropertyLayer_data_next, MeshPolygonIntPropertyLayer_data_end, MeshPolygonIntPropertyLayer_data_get, MeshPolygonIntPropertyLayer_data_length, MeshPolygonIntPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshPolygonIntProperty
};

StructRNA RNA_MeshPolygonIntPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshPolygonIntProperty, (ContainerRNA *)&RNA_MeshVertexIntProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_data}},
	"MeshPolygonIntPropertyLayer", NULL, NULL, 516, NULL, "Mesh Polygon Int Property Layer",
	"User defined layer of integer number values",
	"*", 17,
	(PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_name, (PropertyRNA *)&rna_MeshPolygonIntPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygonIntPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon Int Property */
CollectionPropertyRNA rna_MeshPolygonIntProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygonIntProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonIntProperty_rna_properties_begin, MeshPolygonIntProperty_rna_properties_next, MeshPolygonIntProperty_rna_properties_end, MeshPolygonIntProperty_rna_properties_get, NULL, NULL, MeshPolygonIntProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygonIntProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygonIntProperty_value, (PropertyRNA *)&rna_MeshPolygonIntProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonIntProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshPolygonIntProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshPolygonIntProperty_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MIntProperty, i), 0, NULL},
	MeshPolygonIntProperty_value_get, MeshPolygonIntProperty_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshPolygonIntProperty = {
	{(ContainerRNA *)&RNA_MeshVertexStringPropertyLayer, (ContainerRNA *)&RNA_MeshPolygonIntPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygonIntProperty_rna_properties, (PropertyRNA *)&rna_MeshPolygonIntProperty_value}},
	"MeshPolygonIntProperty", NULL, NULL, 516, NULL, "Mesh Polygon Int Property",
	"User defined integer number value in an integer properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPolygonIntProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygonIntProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex String Property Layer */
CollectionPropertyRNA rna_MeshVertexStringPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexStringPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringPropertyLayer_rna_properties_begin, MeshVertexStringPropertyLayer_rna_properties_next, MeshVertexStringPropertyLayer_rna_properties_end, MeshVertexStringPropertyLayer_rna_properties_get, NULL, NULL, MeshVertexStringPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexStringPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexStringPropertyLayer_name, (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshVertexStringPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshVertexStringPropertyLayer_data, (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringPropertyLayer_name_get, MeshVertexStringPropertyLayer_name_length, MeshVertexStringPropertyLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshVertexStringPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringPropertyLayer_data_begin, MeshVertexStringPropertyLayer_data_next, MeshVertexStringPropertyLayer_data_end, MeshVertexStringPropertyLayer_data_get, MeshVertexStringPropertyLayer_data_length, MeshVertexStringPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshVertexStringProperty
};

StructRNA RNA_MeshVertexStringPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshVertexStringProperty, (ContainerRNA *)&RNA_MeshPolygonIntProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexStringPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_data}},
	"MeshVertexStringPropertyLayer", NULL, NULL, 516, NULL, "Mesh Vertex String Property Layer",
	"User defined layer of string text values",
	"*", 17,
	(PropertyRNA *)&rna_MeshVertexStringPropertyLayer_name, (PropertyRNA *)&rna_MeshVertexStringPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexStringPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex String Property */
CollectionPropertyRNA rna_MeshVertexStringProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshVertexStringProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringProperty_rna_properties_begin, MeshVertexStringProperty_rna_properties_next, MeshVertexStringProperty_rna_properties_end, MeshVertexStringProperty_rna_properties_get, NULL, NULL, MeshVertexStringProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshVertexStringProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshVertexStringProperty_value, (PropertyRNA *)&rna_MeshVertexStringProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshVertexStringProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshVertexStringProperty_rna_type,
	-1, "value", 262145, 0, 0, 0, 0, "Value",
	"",
	0, "*",
	PROP_STRING, PROP_BYTESTRING | PROP_UNIT_NONE, NULL, 0, {255, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshVertexStringProperty_value_get, MeshVertexStringProperty_value_length, MeshVertexStringProperty_value_set, NULL, NULL, NULL, NULL, 0, 255, ""
};

StructRNA RNA_MeshVertexStringProperty = {
	{(ContainerRNA *)&RNA_MeshPolygonStringPropertyLayer, (ContainerRNA *)&RNA_MeshVertexStringPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshVertexStringProperty_rna_properties, (PropertyRNA *)&rna_MeshVertexStringProperty_value}},
	"MeshVertexStringProperty", NULL, NULL, 516, NULL, "Mesh Vertex String Property",
	"User defined string text value in a string properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshVertexStringProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertexStringProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon String Property Layer */
CollectionPropertyRNA rna_MeshPolygonStringPropertyLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringPropertyLayer_rna_properties_begin, MeshPolygonStringPropertyLayer_rna_properties_next, MeshPolygonStringPropertyLayer_rna_properties_end, MeshPolygonStringPropertyLayer_rna_properties_get, NULL, NULL, MeshPolygonStringPropertyLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygonStringPropertyLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_name, (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshPolygonStringPropertyLayer_name = {
	{(PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_data, (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringPropertyLayer_name_get, MeshPolygonStringPropertyLayer_name_length, MeshPolygonStringPropertyLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshPolygonStringPropertyLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringPropertyLayer_data_begin, MeshPolygonStringPropertyLayer_data_next, MeshPolygonStringPropertyLayer_data_end, MeshPolygonStringPropertyLayer_data_get, MeshPolygonStringPropertyLayer_data_length, MeshPolygonStringPropertyLayer_data_lookup_int, NULL, NULL, &RNA_MeshPolygonStringProperty
};

StructRNA RNA_MeshPolygonStringPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshPolygonStringProperty, (ContainerRNA *)&RNA_MeshVertexStringProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_rna_properties, (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_data}},
	"MeshPolygonStringPropertyLayer", NULL, NULL, 516, NULL, "Mesh Polygon String Property Layer",
	"User defined layer of string text values",
	"*", 17,
	(PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_name, (PropertyRNA *)&rna_MeshPolygonStringPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygonStringPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Polygon String Property */
CollectionPropertyRNA rna_MeshPolygonStringProperty_rna_properties = {
	{(PropertyRNA *)&rna_MeshPolygonStringProperty_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringProperty_rna_properties_begin, MeshPolygonStringProperty_rna_properties_next, MeshPolygonStringProperty_rna_properties_end, MeshPolygonStringProperty_rna_properties_get, NULL, NULL, MeshPolygonStringProperty_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshPolygonStringProperty_rna_type = {
	{(PropertyRNA *)&rna_MeshPolygonStringProperty_value, (PropertyRNA *)&rna_MeshPolygonStringProperty_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshPolygonStringProperty_value = {
	{NULL, (PropertyRNA *)&rna_MeshPolygonStringProperty_rna_type,
	-1, "value", 262145, 0, 0, 0, 0, "Value",
	"",
	0, "*",
	PROP_STRING, PROP_BYTESTRING | PROP_UNIT_NONE, NULL, 0, {255, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshPolygonStringProperty_value_get, MeshPolygonStringProperty_value_length, MeshPolygonStringProperty_value_set, NULL, NULL, NULL, NULL, 0, 255, ""
};

StructRNA RNA_MeshPolygonStringProperty = {
	{(ContainerRNA *)&RNA_MeshFaceMapLayer, (ContainerRNA *)&RNA_MeshPolygonStringPropertyLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshPolygonStringProperty_rna_properties, (PropertyRNA *)&rna_MeshPolygonStringProperty_value}},
	"MeshPolygonStringProperty", NULL, NULL, 516, NULL, "Mesh Polygon String Property",
	"User defined string text value in a string properties layer",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshPolygonStringProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshPolygonStringProperty_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Face Map Layer */
CollectionPropertyRNA rna_MeshFaceMapLayer_rna_properties = {
	{(PropertyRNA *)&rna_MeshFaceMapLayer_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayer_rna_properties_begin, MeshFaceMapLayer_rna_properties_next, MeshFaceMapLayer_rna_properties_end, MeshFaceMapLayer_rna_properties_get, NULL, NULL, MeshFaceMapLayer_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshFaceMapLayer_rna_type = {
	{(PropertyRNA *)&rna_MeshFaceMapLayer_name, (PropertyRNA *)&rna_MeshFaceMapLayer_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshFaceMapLayer_name = {
	{(PropertyRNA *)&rna_MeshFaceMapLayer_data, (PropertyRNA *)&rna_MeshFaceMapLayer_rna_type,
	-1, "name", 262145, 0, 0, 0, 0, "Name",
	"Name of face map layer",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayer_name_get, MeshFaceMapLayer_name_length, MeshFaceMapLayer_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

CollectionPropertyRNA rna_MeshFaceMapLayer_data = {
	{NULL, (PropertyRNA *)&rna_MeshFaceMapLayer_name,
	-1, "data", 0, 0, 0, 8, 0, "Data",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMapLayer_data_begin, MeshFaceMapLayer_data_next, MeshFaceMapLayer_data_end, MeshFaceMapLayer_data_get, MeshFaceMapLayer_data_length, MeshFaceMapLayer_data_lookup_int, NULL, NULL, &RNA_MeshFaceMap
};

StructRNA RNA_MeshFaceMapLayer = {
	{(ContainerRNA *)&RNA_MeshFaceMap, (ContainerRNA *)&RNA_MeshPolygonStringProperty,
	NULL,
	{(PropertyRNA *)&rna_MeshFaceMapLayer_rna_properties, (PropertyRNA *)&rna_MeshFaceMapLayer_data}},
	"MeshFaceMapLayer", NULL, NULL, 516, NULL, "Mesh Face Map Layer",
	"Per-face map index",
	"*", 17,
	(PropertyRNA *)&rna_MeshFaceMapLayer_name, (PropertyRNA *)&rna_MeshFaceMapLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFaceMapLayer_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Int Property */
CollectionPropertyRNA rna_MeshFaceMap_rna_properties = {
	{(PropertyRNA *)&rna_MeshFaceMap_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMap_rna_properties_begin, MeshFaceMap_rna_properties_next, MeshFaceMap_rna_properties_end, MeshFaceMap_rna_properties_get, NULL, NULL, MeshFaceMap_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_MeshFaceMap_rna_type = {
	{(PropertyRNA *)&rna_MeshFaceMap_value, (PropertyRNA *)&rna_MeshFaceMap_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	MeshFaceMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshFaceMap_value = {
	{NULL, (PropertyRNA *)&rna_MeshFaceMap_rna_type,
	-1, "value", 3, 0, 0, 4, 0, "Value",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data_legacy_deg_tag_all, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(MIntProperty, i), 0, NULL},
	MeshFaceMap_value_get, MeshFaceMap_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshFaceMap = {
	{(ContainerRNA *)&RNA_MetaElement, (ContainerRNA *)&RNA_MeshFaceMapLayer,
	NULL,
	{(PropertyRNA *)&rna_MeshFaceMap_rna_properties, (PropertyRNA *)&rna_MeshFaceMap_value}},
	"MeshFaceMap", NULL, NULL, 516, NULL, "Int Property",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_MeshFaceMap_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFaceMap_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

