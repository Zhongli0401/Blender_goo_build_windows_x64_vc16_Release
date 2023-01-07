
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

#include "rna_ui.c"
#include "rna_ui_api.c"

/* Auto-generated Functions. */


CollectionPropertyRNA rna_UILayout_rna_properties;
PointerPropertyRNA rna_UILayout_rna_type;
BoolPropertyRNA rna_UILayout_active;
BoolPropertyRNA rna_UILayout_active_default;
BoolPropertyRNA rna_UILayout_activate_init;
EnumPropertyRNA rna_UILayout_operator_context;
BoolPropertyRNA rna_UILayout_enabled;
BoolPropertyRNA rna_UILayout_alert;
EnumPropertyRNA rna_UILayout_alignment;
EnumPropertyRNA rna_UILayout_direction;
FloatPropertyRNA rna_UILayout_scale_x;
FloatPropertyRNA rna_UILayout_scale_y;
FloatPropertyRNA rna_UILayout_ui_units_x;
FloatPropertyRNA rna_UILayout_ui_units_y;
EnumPropertyRNA rna_UILayout_emboss;
BoolPropertyRNA rna_UILayout_use_property_split;
BoolPropertyRNA rna_UILayout_use_property_decorate;

extern FunctionRNA rna_UILayout_row_func;
extern PointerPropertyRNA rna_UILayout_row_layout;
extern BoolPropertyRNA rna_UILayout_row_align;
extern StringPropertyRNA rna_UILayout_row_heading;
extern StringPropertyRNA rna_UILayout_row_heading_ctxt;
extern BoolPropertyRNA rna_UILayout_row_translate;

extern FunctionRNA rna_UILayout_column_func;
extern PointerPropertyRNA rna_UILayout_column_layout;
extern BoolPropertyRNA rna_UILayout_column_align;
extern StringPropertyRNA rna_UILayout_column_heading;
extern StringPropertyRNA rna_UILayout_column_heading_ctxt;
extern BoolPropertyRNA rna_UILayout_column_translate;

extern FunctionRNA rna_UILayout_column_flow_func;
extern IntPropertyRNA rna_UILayout_column_flow_columns;
extern PointerPropertyRNA rna_UILayout_column_flow_layout;
extern BoolPropertyRNA rna_UILayout_column_flow_align;

extern FunctionRNA rna_UILayout_grid_flow_func;
extern BoolPropertyRNA rna_UILayout_grid_flow_row_major;
extern IntPropertyRNA rna_UILayout_grid_flow_columns;
extern BoolPropertyRNA rna_UILayout_grid_flow_even_columns;
extern BoolPropertyRNA rna_UILayout_grid_flow_even_rows;
extern BoolPropertyRNA rna_UILayout_grid_flow_align;
extern PointerPropertyRNA rna_UILayout_grid_flow_layout;

extern FunctionRNA rna_UILayout_box_func;
extern PointerPropertyRNA rna_UILayout_box_layout;

extern FunctionRNA rna_UILayout_split_func;
extern PointerPropertyRNA rna_UILayout_split_layout;
extern FloatPropertyRNA rna_UILayout_split_factor;
extern BoolPropertyRNA rna_UILayout_split_align;

extern FunctionRNA rna_UILayout_menu_pie_func;
extern PointerPropertyRNA rna_UILayout_menu_pie_layout;

extern FunctionRNA rna_UILayout_icon_func;
extern IntPropertyRNA rna_UILayout_icon_icon_value;
extern PointerPropertyRNA rna_UILayout_icon_data;

extern FunctionRNA rna_UILayout_enum_item_name_func;
extern StringPropertyRNA rna_UILayout_enum_item_name_name;
extern PointerPropertyRNA rna_UILayout_enum_item_name_data;
extern StringPropertyRNA rna_UILayout_enum_item_name_property;
extern StringPropertyRNA rna_UILayout_enum_item_name_identifier;

extern FunctionRNA rna_UILayout_enum_item_description_func;
extern StringPropertyRNA rna_UILayout_enum_item_description_description;
extern PointerPropertyRNA rna_UILayout_enum_item_description_data;
extern StringPropertyRNA rna_UILayout_enum_item_description_property;
extern StringPropertyRNA rna_UILayout_enum_item_description_identifier;

extern FunctionRNA rna_UILayout_enum_item_icon_func;
extern IntPropertyRNA rna_UILayout_enum_item_icon_icon_value;
extern PointerPropertyRNA rna_UILayout_enum_item_icon_data;
extern StringPropertyRNA rna_UILayout_enum_item_icon_property;
extern StringPropertyRNA rna_UILayout_enum_item_icon_identifier;

extern FunctionRNA rna_UILayout_prop_func;
extern PointerPropertyRNA rna_UILayout_prop_data;
extern StringPropertyRNA rna_UILayout_prop_property;
extern StringPropertyRNA rna_UILayout_prop_text;
extern StringPropertyRNA rna_UILayout_prop_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_translate;
extern EnumPropertyRNA rna_UILayout_prop_icon;
extern BoolPropertyRNA rna_UILayout_prop_expand;
extern BoolPropertyRNA rna_UILayout_prop_slider;
extern IntPropertyRNA rna_UILayout_prop_toggle;
extern BoolPropertyRNA rna_UILayout_prop_icon_only;
extern BoolPropertyRNA rna_UILayout_prop_event;
extern BoolPropertyRNA rna_UILayout_prop_full_event;
extern BoolPropertyRNA rna_UILayout_prop_emboss;
extern IntPropertyRNA rna_UILayout_prop_index;
extern IntPropertyRNA rna_UILayout_prop_icon_value;
extern BoolPropertyRNA rna_UILayout_prop_invert_checkbox;

extern FunctionRNA rna_UILayout_props_enum_func;
extern PointerPropertyRNA rna_UILayout_props_enum_data;
extern StringPropertyRNA rna_UILayout_props_enum_property;

extern FunctionRNA rna_UILayout_prop_menu_enum_func;
extern PointerPropertyRNA rna_UILayout_prop_menu_enum_data;
extern StringPropertyRNA rna_UILayout_prop_menu_enum_property;
extern StringPropertyRNA rna_UILayout_prop_menu_enum_text;
extern StringPropertyRNA rna_UILayout_prop_menu_enum_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_menu_enum_translate;
extern EnumPropertyRNA rna_UILayout_prop_menu_enum_icon;

extern FunctionRNA rna_UILayout_prop_with_popover_func;
extern PointerPropertyRNA rna_UILayout_prop_with_popover_data;
extern StringPropertyRNA rna_UILayout_prop_with_popover_property;
extern StringPropertyRNA rna_UILayout_prop_with_popover_text;
extern StringPropertyRNA rna_UILayout_prop_with_popover_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_with_popover_translate;
extern EnumPropertyRNA rna_UILayout_prop_with_popover_icon;
extern BoolPropertyRNA rna_UILayout_prop_with_popover_icon_only;
extern StringPropertyRNA rna_UILayout_prop_with_popover_panel;

extern FunctionRNA rna_UILayout_prop_with_menu_func;
extern PointerPropertyRNA rna_UILayout_prop_with_menu_data;
extern StringPropertyRNA rna_UILayout_prop_with_menu_property;
extern StringPropertyRNA rna_UILayout_prop_with_menu_text;
extern StringPropertyRNA rna_UILayout_prop_with_menu_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_with_menu_translate;
extern EnumPropertyRNA rna_UILayout_prop_with_menu_icon;
extern BoolPropertyRNA rna_UILayout_prop_with_menu_icon_only;
extern StringPropertyRNA rna_UILayout_prop_with_menu_menu;

extern FunctionRNA rna_UILayout_prop_tabs_enum_func;
extern PointerPropertyRNA rna_UILayout_prop_tabs_enum_data;
extern StringPropertyRNA rna_UILayout_prop_tabs_enum_property;
extern PointerPropertyRNA rna_UILayout_prop_tabs_enum_data_highlight;
extern StringPropertyRNA rna_UILayout_prop_tabs_enum_property_highlight;
extern BoolPropertyRNA rna_UILayout_prop_tabs_enum_icon_only;

extern FunctionRNA rna_UILayout_prop_enum_func;
extern PointerPropertyRNA rna_UILayout_prop_enum_data;
extern StringPropertyRNA rna_UILayout_prop_enum_property;
extern StringPropertyRNA rna_UILayout_prop_enum_value;
extern StringPropertyRNA rna_UILayout_prop_enum_text;
extern StringPropertyRNA rna_UILayout_prop_enum_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_enum_translate;
extern EnumPropertyRNA rna_UILayout_prop_enum_icon;

extern FunctionRNA rna_UILayout_prop_search_func;
extern PointerPropertyRNA rna_UILayout_prop_search_data;
extern StringPropertyRNA rna_UILayout_prop_search_property;
extern PointerPropertyRNA rna_UILayout_prop_search_search_data;
extern StringPropertyRNA rna_UILayout_prop_search_search_property;
extern StringPropertyRNA rna_UILayout_prop_search_text;
extern StringPropertyRNA rna_UILayout_prop_search_text_ctxt;
extern BoolPropertyRNA rna_UILayout_prop_search_translate;
extern EnumPropertyRNA rna_UILayout_prop_search_icon;
extern BoolPropertyRNA rna_UILayout_prop_search_results_are_suggestions;

extern FunctionRNA rna_UILayout_prop_decorator_func;
extern PointerPropertyRNA rna_UILayout_prop_decorator_data;
extern StringPropertyRNA rna_UILayout_prop_decorator_property;
extern IntPropertyRNA rna_UILayout_prop_decorator_index;

extern FunctionRNA rna_UILayout_operator_func;
extern StringPropertyRNA rna_UILayout_operator_operator;
extern StringPropertyRNA rna_UILayout_operator_text;
extern StringPropertyRNA rna_UILayout_operator_text_ctxt;
extern BoolPropertyRNA rna_UILayout_operator_translate;
extern EnumPropertyRNA rna_UILayout_operator_icon;
extern BoolPropertyRNA rna_UILayout_operator_emboss;
extern BoolPropertyRNA rna_UILayout_operator_depress;
extern IntPropertyRNA rna_UILayout_operator_icon_value;
extern PointerPropertyRNA rna_UILayout_operator_properties;

extern FunctionRNA rna_UILayout_operator_menu_hold_func;
extern StringPropertyRNA rna_UILayout_operator_menu_hold_operator;
extern StringPropertyRNA rna_UILayout_operator_menu_hold_text;
extern StringPropertyRNA rna_UILayout_operator_menu_hold_text_ctxt;
extern BoolPropertyRNA rna_UILayout_operator_menu_hold_translate;
extern EnumPropertyRNA rna_UILayout_operator_menu_hold_icon;
extern BoolPropertyRNA rna_UILayout_operator_menu_hold_emboss;
extern BoolPropertyRNA rna_UILayout_operator_menu_hold_depress;
extern IntPropertyRNA rna_UILayout_operator_menu_hold_icon_value;
extern StringPropertyRNA rna_UILayout_operator_menu_hold_menu;
extern PointerPropertyRNA rna_UILayout_operator_menu_hold_properties;

extern FunctionRNA rna_UILayout_operator_enum_func;
extern StringPropertyRNA rna_UILayout_operator_enum_operator;
extern StringPropertyRNA rna_UILayout_operator_enum_property;
extern BoolPropertyRNA rna_UILayout_operator_enum_icon_only;

extern FunctionRNA rna_UILayout_operator_menu_enum_func;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_operator;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_property;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_text;
extern StringPropertyRNA rna_UILayout_operator_menu_enum_text_ctxt;
extern BoolPropertyRNA rna_UILayout_operator_menu_enum_translate;
extern EnumPropertyRNA rna_UILayout_operator_menu_enum_icon;
extern PointerPropertyRNA rna_UILayout_operator_menu_enum_properties;

extern FunctionRNA rna_UILayout_label_func;
extern StringPropertyRNA rna_UILayout_label_text;
extern StringPropertyRNA rna_UILayout_label_text_ctxt;
extern BoolPropertyRNA rna_UILayout_label_translate;
extern EnumPropertyRNA rna_UILayout_label_icon;
extern IntPropertyRNA rna_UILayout_label_icon_value;

extern FunctionRNA rna_UILayout_menu_func;
extern StringPropertyRNA rna_UILayout_menu_menu;
extern StringPropertyRNA rna_UILayout_menu_text;
extern StringPropertyRNA rna_UILayout_menu_text_ctxt;
extern BoolPropertyRNA rna_UILayout_menu_translate;
extern EnumPropertyRNA rna_UILayout_menu_icon;
extern IntPropertyRNA rna_UILayout_menu_icon_value;

extern FunctionRNA rna_UILayout_menu_contents_func;
extern StringPropertyRNA rna_UILayout_menu_contents_menu;

extern FunctionRNA rna_UILayout_popover_func;
extern StringPropertyRNA rna_UILayout_popover_panel;
extern StringPropertyRNA rna_UILayout_popover_text;
extern StringPropertyRNA rna_UILayout_popover_text_ctxt;
extern BoolPropertyRNA rna_UILayout_popover_translate;
extern EnumPropertyRNA rna_UILayout_popover_icon;
extern IntPropertyRNA rna_UILayout_popover_icon_value;

extern FunctionRNA rna_UILayout_popover_group_func;
extern EnumPropertyRNA rna_UILayout_popover_group_space_type;
extern EnumPropertyRNA rna_UILayout_popover_group_region_type;
extern StringPropertyRNA rna_UILayout_popover_group_context;
extern StringPropertyRNA rna_UILayout_popover_group_category;

extern FunctionRNA rna_UILayout_separator_func;
extern FloatPropertyRNA rna_UILayout_separator_factor;

extern FunctionRNA rna_UILayout_separator_spacer_func;
extern FunctionRNA rna_UILayout_context_pointer_set_func;
extern StringPropertyRNA rna_UILayout_context_pointer_set_name;
extern PointerPropertyRNA rna_UILayout_context_pointer_set_data;

extern FunctionRNA rna_UILayout_template_header_func;
extern FunctionRNA rna_UILayout_template_ID_func;
extern PointerPropertyRNA rna_UILayout_template_ID_data;
extern StringPropertyRNA rna_UILayout_template_ID_property;
extern StringPropertyRNA rna_UILayout_template_ID_new;
extern StringPropertyRNA rna_UILayout_template_ID_open;
extern StringPropertyRNA rna_UILayout_template_ID_unlink;
extern EnumPropertyRNA rna_UILayout_template_ID_filter;
extern BoolPropertyRNA rna_UILayout_template_ID_live_icon;
extern StringPropertyRNA rna_UILayout_template_ID_text;
extern StringPropertyRNA rna_UILayout_template_ID_text_ctxt;
extern BoolPropertyRNA rna_UILayout_template_ID_translate;

extern FunctionRNA rna_UILayout_template_ID_preview_func;
extern PointerPropertyRNA rna_UILayout_template_ID_preview_data;
extern StringPropertyRNA rna_UILayout_template_ID_preview_property;
extern StringPropertyRNA rna_UILayout_template_ID_preview_new;
extern StringPropertyRNA rna_UILayout_template_ID_preview_open;
extern StringPropertyRNA rna_UILayout_template_ID_preview_unlink;
extern IntPropertyRNA rna_UILayout_template_ID_preview_rows;
extern IntPropertyRNA rna_UILayout_template_ID_preview_cols;
extern EnumPropertyRNA rna_UILayout_template_ID_preview_filter;
extern BoolPropertyRNA rna_UILayout_template_ID_preview_hide_buttons;

extern FunctionRNA rna_UILayout_template_any_ID_func;
extern PointerPropertyRNA rna_UILayout_template_any_ID_data;
extern StringPropertyRNA rna_UILayout_template_any_ID_property;
extern StringPropertyRNA rna_UILayout_template_any_ID_type_property;
extern StringPropertyRNA rna_UILayout_template_any_ID_text;
extern StringPropertyRNA rna_UILayout_template_any_ID_text_ctxt;
extern BoolPropertyRNA rna_UILayout_template_any_ID_translate;

extern FunctionRNA rna_UILayout_template_ID_tabs_func;
extern PointerPropertyRNA rna_UILayout_template_ID_tabs_data;
extern StringPropertyRNA rna_UILayout_template_ID_tabs_property;
extern StringPropertyRNA rna_UILayout_template_ID_tabs_new;
extern StringPropertyRNA rna_UILayout_template_ID_tabs_menu;
extern EnumPropertyRNA rna_UILayout_template_ID_tabs_filter;

extern FunctionRNA rna_UILayout_template_search_func;
extern PointerPropertyRNA rna_UILayout_template_search_data;
extern StringPropertyRNA rna_UILayout_template_search_property;
extern PointerPropertyRNA rna_UILayout_template_search_search_data;
extern StringPropertyRNA rna_UILayout_template_search_search_property;
extern StringPropertyRNA rna_UILayout_template_search_new;
extern StringPropertyRNA rna_UILayout_template_search_unlink;

extern FunctionRNA rna_UILayout_template_search_preview_func;
extern PointerPropertyRNA rna_UILayout_template_search_preview_data;
extern StringPropertyRNA rna_UILayout_template_search_preview_property;
extern PointerPropertyRNA rna_UILayout_template_search_preview_search_data;
extern StringPropertyRNA rna_UILayout_template_search_preview_search_property;
extern StringPropertyRNA rna_UILayout_template_search_preview_new;
extern StringPropertyRNA rna_UILayout_template_search_preview_unlink;
extern IntPropertyRNA rna_UILayout_template_search_preview_rows;
extern IntPropertyRNA rna_UILayout_template_search_preview_cols;

extern FunctionRNA rna_UILayout_template_path_builder_func;
extern PointerPropertyRNA rna_UILayout_template_path_builder_data;
extern StringPropertyRNA rna_UILayout_template_path_builder_property;
extern PointerPropertyRNA rna_UILayout_template_path_builder_root;
extern StringPropertyRNA rna_UILayout_template_path_builder_text;
extern StringPropertyRNA rna_UILayout_template_path_builder_text_ctxt;
extern BoolPropertyRNA rna_UILayout_template_path_builder_translate;

extern FunctionRNA rna_UILayout_template_modifiers_func;
extern FunctionRNA rna_UILayout_template_constraints_func;
extern BoolPropertyRNA rna_UILayout_template_constraints_use_bone_constraints;

extern FunctionRNA rna_UILayout_template_grease_pencil_modifiers_func;
extern FunctionRNA rna_UILayout_template_shaderfx_func;
extern FunctionRNA rna_UILayout_template_greasepencil_color_func;
extern PointerPropertyRNA rna_UILayout_template_greasepencil_color_data;
extern StringPropertyRNA rna_UILayout_template_greasepencil_color_property;
extern IntPropertyRNA rna_UILayout_template_greasepencil_color_rows;
extern IntPropertyRNA rna_UILayout_template_greasepencil_color_cols;
extern FloatPropertyRNA rna_UILayout_template_greasepencil_color_scale;
extern EnumPropertyRNA rna_UILayout_template_greasepencil_color_filter;

extern FunctionRNA rna_UILayout_template_constraint_header_func;
extern PointerPropertyRNA rna_UILayout_template_constraint_header_data;

extern FunctionRNA rna_UILayout_template_preview_func;
extern PointerPropertyRNA rna_UILayout_template_preview_id;
extern BoolPropertyRNA rna_UILayout_template_preview_show_buttons;
extern PointerPropertyRNA rna_UILayout_template_preview_parent;
extern PointerPropertyRNA rna_UILayout_template_preview_slot;
extern StringPropertyRNA rna_UILayout_template_preview_preview_id;

extern FunctionRNA rna_UILayout_template_curve_mapping_func;
extern PointerPropertyRNA rna_UILayout_template_curve_mapping_data;
extern StringPropertyRNA rna_UILayout_template_curve_mapping_property;
extern EnumPropertyRNA rna_UILayout_template_curve_mapping_type;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_levels;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_brush;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_use_negative_slope;
extern BoolPropertyRNA rna_UILayout_template_curve_mapping_show_tone;

extern FunctionRNA rna_UILayout_template_curveprofile_func;
extern PointerPropertyRNA rna_UILayout_template_curveprofile_data;
extern StringPropertyRNA rna_UILayout_template_curveprofile_property;

extern FunctionRNA rna_UILayout_template_color_ramp_func;
extern PointerPropertyRNA rna_UILayout_template_color_ramp_data;
extern StringPropertyRNA rna_UILayout_template_color_ramp_property;
extern BoolPropertyRNA rna_UILayout_template_color_ramp_expand;

extern FunctionRNA rna_UILayout_template_icon_func;
extern IntPropertyRNA rna_UILayout_template_icon_icon_value;
extern FloatPropertyRNA rna_UILayout_template_icon_scale;

extern FunctionRNA rna_UILayout_template_icon_view_func;
extern PointerPropertyRNA rna_UILayout_template_icon_view_data;
extern StringPropertyRNA rna_UILayout_template_icon_view_property;
extern BoolPropertyRNA rna_UILayout_template_icon_view_show_labels;
extern FloatPropertyRNA rna_UILayout_template_icon_view_scale;
extern FloatPropertyRNA rna_UILayout_template_icon_view_scale_popup;

extern FunctionRNA rna_UILayout_template_histogram_func;
extern PointerPropertyRNA rna_UILayout_template_histogram_data;
extern StringPropertyRNA rna_UILayout_template_histogram_property;

extern FunctionRNA rna_UILayout_template_waveform_func;
extern PointerPropertyRNA rna_UILayout_template_waveform_data;
extern StringPropertyRNA rna_UILayout_template_waveform_property;

extern FunctionRNA rna_UILayout_template_vectorscope_func;
extern PointerPropertyRNA rna_UILayout_template_vectorscope_data;
extern StringPropertyRNA rna_UILayout_template_vectorscope_property;

extern FunctionRNA rna_UILayout_template_layers_func;
extern PointerPropertyRNA rna_UILayout_template_layers_data;
extern StringPropertyRNA rna_UILayout_template_layers_property;
extern PointerPropertyRNA rna_UILayout_template_layers_used_layers_data;
extern StringPropertyRNA rna_UILayout_template_layers_used_layers_property;
extern IntPropertyRNA rna_UILayout_template_layers_active_layer;

extern FunctionRNA rna_UILayout_template_color_picker_func;
extern PointerPropertyRNA rna_UILayout_template_color_picker_data;
extern StringPropertyRNA rna_UILayout_template_color_picker_property;
extern BoolPropertyRNA rna_UILayout_template_color_picker_value_slider;
extern BoolPropertyRNA rna_UILayout_template_color_picker_lock;
extern BoolPropertyRNA rna_UILayout_template_color_picker_lock_luminosity;
extern BoolPropertyRNA rna_UILayout_template_color_picker_cubic;

extern FunctionRNA rna_UILayout_template_palette_func;
extern PointerPropertyRNA rna_UILayout_template_palette_data;
extern StringPropertyRNA rna_UILayout_template_palette_property;
extern BoolPropertyRNA rna_UILayout_template_palette_color;

extern FunctionRNA rna_UILayout_template_image_layers_func;
extern PointerPropertyRNA rna_UILayout_template_image_layers_image;
extern PointerPropertyRNA rna_UILayout_template_image_layers_image_user;

extern FunctionRNA rna_UILayout_template_image_func;
extern PointerPropertyRNA rna_UILayout_template_image_data;
extern StringPropertyRNA rna_UILayout_template_image_property;
extern PointerPropertyRNA rna_UILayout_template_image_image_user;
extern BoolPropertyRNA rna_UILayout_template_image_compact;
extern BoolPropertyRNA rna_UILayout_template_image_multiview;

extern FunctionRNA rna_UILayout_template_image_settings_func;
extern PointerPropertyRNA rna_UILayout_template_image_settings_image_settings;
extern BoolPropertyRNA rna_UILayout_template_image_settings_color_management;

extern FunctionRNA rna_UILayout_template_image_stereo_3d_func;
extern PointerPropertyRNA rna_UILayout_template_image_stereo_3d_stereo_3d_format;

extern FunctionRNA rna_UILayout_template_image_views_func;
extern PointerPropertyRNA rna_UILayout_template_image_views_image_settings;

extern FunctionRNA rna_UILayout_template_movieclip_func;
extern PointerPropertyRNA rna_UILayout_template_movieclip_data;
extern StringPropertyRNA rna_UILayout_template_movieclip_property;
extern BoolPropertyRNA rna_UILayout_template_movieclip_compact;

extern FunctionRNA rna_UILayout_template_track_func;
extern PointerPropertyRNA rna_UILayout_template_track_data;
extern StringPropertyRNA rna_UILayout_template_track_property;

extern FunctionRNA rna_UILayout_template_marker_func;
extern PointerPropertyRNA rna_UILayout_template_marker_data;
extern StringPropertyRNA rna_UILayout_template_marker_property;
extern PointerPropertyRNA rna_UILayout_template_marker_clip_user;
extern PointerPropertyRNA rna_UILayout_template_marker_track;
extern BoolPropertyRNA rna_UILayout_template_marker_compact;

extern FunctionRNA rna_UILayout_template_movieclip_information_func;
extern PointerPropertyRNA rna_UILayout_template_movieclip_information_data;
extern StringPropertyRNA rna_UILayout_template_movieclip_information_property;
extern PointerPropertyRNA rna_UILayout_template_movieclip_information_clip_user;

extern FunctionRNA rna_UILayout_template_list_func;
extern StringPropertyRNA rna_UILayout_template_list_listtype_name;
extern StringPropertyRNA rna_UILayout_template_list_list_id;
extern PointerPropertyRNA rna_UILayout_template_list_dataptr;
extern StringPropertyRNA rna_UILayout_template_list_propname;
extern PointerPropertyRNA rna_UILayout_template_list_active_dataptr;
extern StringPropertyRNA rna_UILayout_template_list_active_propname;
extern StringPropertyRNA rna_UILayout_template_list_item_dyntip_propname;
extern IntPropertyRNA rna_UILayout_template_list_rows;
extern IntPropertyRNA rna_UILayout_template_list_maxrows;
extern EnumPropertyRNA rna_UILayout_template_list_type;
extern IntPropertyRNA rna_UILayout_template_list_columns;
extern BoolPropertyRNA rna_UILayout_template_list_sort_reverse;
extern BoolPropertyRNA rna_UILayout_template_list_sort_lock;

extern FunctionRNA rna_UILayout_template_running_jobs_func;
extern FunctionRNA rna_UILayout_template_operator_search_func;
extern FunctionRNA rna_UILayout_template_menu_search_func;
extern FunctionRNA rna_UILayout_template_header_3D_mode_func;
extern FunctionRNA rna_UILayout_template_edit_mode_selection_func;
extern FunctionRNA rna_UILayout_template_reports_banner_func;
extern FunctionRNA rna_UILayout_template_input_status_func;
extern FunctionRNA rna_UILayout_template_node_link_func;
extern PointerPropertyRNA rna_UILayout_template_node_link_ntree;
extern PointerPropertyRNA rna_UILayout_template_node_link_node;
extern PointerPropertyRNA rna_UILayout_template_node_link_socket;

extern FunctionRNA rna_UILayout_template_node_view_func;
extern PointerPropertyRNA rna_UILayout_template_node_view_ntree;
extern PointerPropertyRNA rna_UILayout_template_node_view_node;
extern PointerPropertyRNA rna_UILayout_template_node_view_socket;

extern FunctionRNA rna_UILayout_template_texture_user_func;
extern FunctionRNA rna_UILayout_template_keymap_item_properties_func;
extern PointerPropertyRNA rna_UILayout_template_keymap_item_properties_item;

extern FunctionRNA rna_UILayout_template_component_menu_func;
extern PointerPropertyRNA rna_UILayout_template_component_menu_data;
extern StringPropertyRNA rna_UILayout_template_component_menu_property;
extern StringPropertyRNA rna_UILayout_template_component_menu_name;

extern FunctionRNA rna_UILayout_template_colorspace_settings_func;
extern PointerPropertyRNA rna_UILayout_template_colorspace_settings_data;
extern StringPropertyRNA rna_UILayout_template_colorspace_settings_property;

extern FunctionRNA rna_UILayout_template_colormanaged_view_settings_func;
extern PointerPropertyRNA rna_UILayout_template_colormanaged_view_settings_data;
extern StringPropertyRNA rna_UILayout_template_colormanaged_view_settings_property;

extern FunctionRNA rna_UILayout_template_node_socket_func;
extern FloatPropertyRNA rna_UILayout_template_node_socket_color;

extern FunctionRNA rna_UILayout_template_cache_file_func;
extern PointerPropertyRNA rna_UILayout_template_cache_file_data;
extern StringPropertyRNA rna_UILayout_template_cache_file_property;

extern FunctionRNA rna_UILayout_template_cache_file_velocity_func;
extern PointerPropertyRNA rna_UILayout_template_cache_file_velocity_data;
extern StringPropertyRNA rna_UILayout_template_cache_file_velocity_property;

extern FunctionRNA rna_UILayout_template_cache_file_procedural_func;
extern PointerPropertyRNA rna_UILayout_template_cache_file_procedural_data;
extern StringPropertyRNA rna_UILayout_template_cache_file_procedural_property;

extern FunctionRNA rna_UILayout_template_cache_file_time_settings_func;
extern PointerPropertyRNA rna_UILayout_template_cache_file_time_settings_data;
extern StringPropertyRNA rna_UILayout_template_cache_file_time_settings_property;

extern FunctionRNA rna_UILayout_template_cache_file_layers_func;
extern PointerPropertyRNA rna_UILayout_template_cache_file_layers_data;
extern StringPropertyRNA rna_UILayout_template_cache_file_layers_property;

extern FunctionRNA rna_UILayout_template_recent_files_func;
extern IntPropertyRNA rna_UILayout_template_recent_files_rows;
extern IntPropertyRNA rna_UILayout_template_recent_files_found;

extern FunctionRNA rna_UILayout_template_file_select_path_func;
extern PointerPropertyRNA rna_UILayout_template_file_select_path_params;

extern FunctionRNA rna_UILayout_template_event_from_keymap_item_func;
extern PointerPropertyRNA rna_UILayout_template_event_from_keymap_item_item;
extern StringPropertyRNA rna_UILayout_template_event_from_keymap_item_text;
extern StringPropertyRNA rna_UILayout_template_event_from_keymap_item_text_ctxt;
extern BoolPropertyRNA rna_UILayout_template_event_from_keymap_item_translate;

extern FunctionRNA rna_UILayout_template_asset_view_func;
extern StringPropertyRNA rna_UILayout_template_asset_view_list_id;
extern PointerPropertyRNA rna_UILayout_template_asset_view_asset_library_dataptr;
extern StringPropertyRNA rna_UILayout_template_asset_view_asset_library_propname;
extern PointerPropertyRNA rna_UILayout_template_asset_view_assets_dataptr;
extern StringPropertyRNA rna_UILayout_template_asset_view_assets_propname;
extern PointerPropertyRNA rna_UILayout_template_asset_view_active_dataptr;
extern StringPropertyRNA rna_UILayout_template_asset_view_active_propname;
extern EnumPropertyRNA rna_UILayout_template_asset_view_filter_id_types;
extern EnumPropertyRNA rna_UILayout_template_asset_view_display_options;
extern StringPropertyRNA rna_UILayout_template_asset_view_activate_operator;
extern PointerPropertyRNA rna_UILayout_template_asset_view_activate_operator_properties;
extern StringPropertyRNA rna_UILayout_template_asset_view_drag_operator;
extern PointerPropertyRNA rna_UILayout_template_asset_view_drag_operator_properties;



CollectionPropertyRNA rna_Panel_rna_properties;
PointerPropertyRNA rna_Panel_rna_type;
PointerPropertyRNA rna_Panel_layout;
StringPropertyRNA rna_Panel_text;
PointerPropertyRNA rna_Panel_custom_data;
StringPropertyRNA rna_Panel_bl_idname;
StringPropertyRNA rna_Panel_bl_label;
StringPropertyRNA rna_Panel_bl_translation_context;
StringPropertyRNA rna_Panel_bl_description;
StringPropertyRNA rna_Panel_bl_category;
StringPropertyRNA rna_Panel_bl_owner_id;
EnumPropertyRNA rna_Panel_bl_space_type;
EnumPropertyRNA rna_Panel_bl_region_type;
StringPropertyRNA rna_Panel_bl_context;
EnumPropertyRNA rna_Panel_bl_options;
StringPropertyRNA rna_Panel_bl_parent_id;
IntPropertyRNA rna_Panel_bl_ui_units_x;
IntPropertyRNA rna_Panel_bl_order;
BoolPropertyRNA rna_Panel_use_pin;
BoolPropertyRNA rna_Panel_is_popover;

extern FunctionRNA rna_Panel_poll_func;
extern BoolPropertyRNA rna_Panel_poll_visible;
extern PointerPropertyRNA rna_Panel_poll_context;

extern FunctionRNA rna_Panel_draw_func;
extern PointerPropertyRNA rna_Panel_draw_context;

extern FunctionRNA rna_Panel_draw_header_func;
extern PointerPropertyRNA rna_Panel_draw_header_context;

extern FunctionRNA rna_Panel_draw_header_preset_func;
extern PointerPropertyRNA rna_Panel_draw_header_preset_context;



CollectionPropertyRNA rna_UIList_rna_properties;
PointerPropertyRNA rna_UIList_rna_type;
StringPropertyRNA rna_UIList_bl_idname;
StringPropertyRNA rna_UIList_list_id;
EnumPropertyRNA rna_UIList_layout_type;
BoolPropertyRNA rna_UIList_use_filter_show;
StringPropertyRNA rna_UIList_filter_name;
BoolPropertyRNA rna_UIList_use_filter_invert;
BoolPropertyRNA rna_UIList_use_filter_sort_alpha;
BoolPropertyRNA rna_UIList_use_filter_sort_reverse;
BoolPropertyRNA rna_UIList_use_filter_sort_lock;
IntPropertyRNA rna_UIList_bitflag_filter_item;

extern FunctionRNA rna_UIList_draw_item_func;
extern PointerPropertyRNA rna_UIList_draw_item_context;
extern PointerPropertyRNA rna_UIList_draw_item_layout;
extern PointerPropertyRNA rna_UIList_draw_item_data;
extern PointerPropertyRNA rna_UIList_draw_item_item;
extern IntPropertyRNA rna_UIList_draw_item_icon;
extern PointerPropertyRNA rna_UIList_draw_item_active_data;
extern StringPropertyRNA rna_UIList_draw_item_active_property;
extern IntPropertyRNA rna_UIList_draw_item_index;
extern IntPropertyRNA rna_UIList_draw_item_flt_flag;

extern FunctionRNA rna_UIList_draw_filter_func;
extern PointerPropertyRNA rna_UIList_draw_filter_context;
extern PointerPropertyRNA rna_UIList_draw_filter_layout;

extern FunctionRNA rna_UIList_filter_items_func;
extern PointerPropertyRNA rna_UIList_filter_items_context;
extern PointerPropertyRNA rna_UIList_filter_items_data;
extern StringPropertyRNA rna_UIList_filter_items_property;
extern IntPropertyRNA rna_UIList_filter_items_filter_flags;
extern IntPropertyRNA rna_UIList_filter_items_filter_neworder;



CollectionPropertyRNA rna_Header_rna_properties;
PointerPropertyRNA rna_Header_rna_type;
PointerPropertyRNA rna_Header_layout;
StringPropertyRNA rna_Header_bl_idname;
EnumPropertyRNA rna_Header_bl_space_type;
EnumPropertyRNA rna_Header_bl_region_type;

extern FunctionRNA rna_Header_draw_func;
extern PointerPropertyRNA rna_Header_draw_context;



CollectionPropertyRNA rna_Menu_rna_properties;
PointerPropertyRNA rna_Menu_rna_type;
PointerPropertyRNA rna_Menu_layout;
StringPropertyRNA rna_Menu_bl_idname;
StringPropertyRNA rna_Menu_bl_label;
StringPropertyRNA rna_Menu_bl_translation_context;
StringPropertyRNA rna_Menu_bl_description;
StringPropertyRNA rna_Menu_bl_owner_id;

extern FunctionRNA rna_Menu_poll_func;
extern BoolPropertyRNA rna_Menu_poll_visible;
extern PointerPropertyRNA rna_Menu_poll_context;

extern FunctionRNA rna_Menu_draw_func;
extern PointerPropertyRNA rna_Menu_draw_context;


static PointerRNA UILayout_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void UILayout_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UILayout_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UILayout_rna_properties_get(iter);
    }
}

void UILayout_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UILayout_rna_properties_get(iter);
    }
}

void UILayout_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int UILayout_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UILayout_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

bool UILayout_active_get(PointerRNA *ptr)
{
    return rna_UILayout_active_get(ptr);
}

void UILayout_active_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_active_set(ptr, value);
}

bool UILayout_active_default_get(PointerRNA *ptr)
{
    return rna_UILayout_active_default_get(ptr);
}

void UILayout_active_default_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_active_default_set(ptr, value);
}

bool UILayout_activate_init_get(PointerRNA *ptr)
{
    return rna_UILayout_activate_init_get(ptr);
}

void UILayout_activate_init_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_activate_init_set(ptr, value);
}

int UILayout_operator_context_get(PointerRNA *ptr)
{
    return rna_UILayout_op_context_get(ptr);
}

void UILayout_operator_context_set(PointerRNA *ptr, int value)
{
    rna_UILayout_op_context_set(ptr, value);
}

bool UILayout_enabled_get(PointerRNA *ptr)
{
    return rna_UILayout_enabled_get(ptr);
}

void UILayout_enabled_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_enabled_set(ptr, value);
}

bool UILayout_alert_get(PointerRNA *ptr)
{
    return rna_UILayout_alert_get(ptr);
}

void UILayout_alert_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_alert_set(ptr, value);
}

int UILayout_alignment_get(PointerRNA *ptr)
{
    return rna_UILayout_alignment_get(ptr);
}

void UILayout_alignment_set(PointerRNA *ptr, int value)
{
    rna_UILayout_alignment_set(ptr, value);
}

int UILayout_direction_get(PointerRNA *ptr)
{
    return rna_UILayout_direction_get(ptr);
}

float UILayout_scale_x_get(PointerRNA *ptr)
{
    return rna_UILayout_scale_x_get(ptr);
}

void UILayout_scale_x_set(PointerRNA *ptr, float value)
{
    rna_UILayout_scale_x_set(ptr, value);
}

float UILayout_scale_y_get(PointerRNA *ptr)
{
    return rna_UILayout_scale_y_get(ptr);
}

void UILayout_scale_y_set(PointerRNA *ptr, float value)
{
    rna_UILayout_scale_y_set(ptr, value);
}

float UILayout_ui_units_x_get(PointerRNA *ptr)
{
    return rna_UILayout_units_x_get(ptr);
}

void UILayout_ui_units_x_set(PointerRNA *ptr, float value)
{
    rna_UILayout_units_x_set(ptr, value);
}

float UILayout_ui_units_y_get(PointerRNA *ptr)
{
    return rna_UILayout_units_y_get(ptr);
}

void UILayout_ui_units_y_set(PointerRNA *ptr, float value)
{
    rna_UILayout_units_y_set(ptr, value);
}

int UILayout_emboss_get(PointerRNA *ptr)
{
    return rna_UILayout_emboss_get(ptr);
}

void UILayout_emboss_set(PointerRNA *ptr, int value)
{
    rna_UILayout_emboss_set(ptr, value);
}

bool UILayout_use_property_split_get(PointerRNA *ptr)
{
    return rna_UILayout_property_split_get(ptr);
}

void UILayout_use_property_split_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_property_split_set(ptr, value);
}

bool UILayout_use_property_decorate_get(PointerRNA *ptr)
{
    return rna_UILayout_property_decorate_get(ptr);
}

void UILayout_use_property_decorate_set(PointerRNA *ptr, bool value)
{
    rna_UILayout_property_decorate_set(ptr, value);
}

static PointerRNA Panel_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Panel_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Panel_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Panel_rna_properties_get(iter);
    }
}

void Panel_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Panel_rna_properties_get(iter);
    }
}

void Panel_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Panel_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Panel_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA Panel_layout_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Panel_text_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->drawname, 64);
}

int Panel_text_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->drawname);
}

void Panel_text_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->drawname, value, 64);
}

PointerRNA Panel_custom_data_get(PointerRNA *ptr)
{
    return rna_Panel_custom_data_get(ptr);
}

void Panel_bl_idname_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int Panel_bl_idname_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->idname);
}

void Panel_bl_idname_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void Panel_bl_label_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->label, sizeof(data->type->label));
}

int Panel_bl_label_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->label);
}

void Panel_bl_label_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->label, value, sizeof(data->type->label));
}

void Panel_bl_translation_context_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->translation_context, sizeof(data->type->translation_context));
}

int Panel_bl_translation_context_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->translation_context);
}

void Panel_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->translation_context, value, sizeof(data->type->translation_context));
}

void Panel_bl_description_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->description, 240);
}

int Panel_bl_description_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->description);
}

void Panel_bl_description_set(PointerRNA *ptr, const char *value)
{
    rna_Panel_bl_description_set(ptr, value);
}

void Panel_bl_category_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->category, sizeof(data->type->category));
}

int Panel_bl_category_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->category);
}

void Panel_bl_category_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->category, value, sizeof(data->type->category));
}

void Panel_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->owner_id, sizeof(data->type->owner_id));
}

int Panel_bl_owner_id_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->owner_id);
}

void Panel_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->owner_id, value, sizeof(data->type->owner_id));
}

int Panel_bl_space_type_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (int)(data->type->space_type);
}

void Panel_bl_space_type_set(PointerRNA *ptr, int value)
{
    Panel *data = (Panel *)(ptr->data);
    data->type->space_type = value;
}

int Panel_bl_region_type_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (int)(data->type->region_type);
}

void Panel_bl_region_type_set(PointerRNA *ptr, int value)
{
    Panel *data = (Panel *)(ptr->data);
    data->type->region_type = value;
}

void Panel_bl_context_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->context, sizeof(data->type->context));
}

int Panel_bl_context_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->context);
}

void Panel_bl_context_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->context, value, sizeof(data->type->context));
}

int Panel_bl_options_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (int)(data->type->flag);
}

void Panel_bl_options_set(PointerRNA *ptr, int value)
{
    Panel *data = (Panel *)(ptr->data);
    data->type->flag = value;
}

void Panel_bl_parent_id_get(PointerRNA *ptr, char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->parent_id, sizeof(data->type->parent_id));
}

int Panel_bl_parent_id_length(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return strlen(data->type->parent_id);
}

void Panel_bl_parent_id_set(PointerRNA *ptr, const char *value)
{
    Panel *data = (Panel *)(ptr->data);
    BLI_strncpy_utf8(data->type->parent_id, value, sizeof(data->type->parent_id));
}

int Panel_bl_ui_units_x_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (int)(data->type->ui_units_x);
}

void Panel_bl_ui_units_x_set(PointerRNA *ptr, int value)
{
    Panel *data = (Panel *)(ptr->data);
    data->type->ui_units_x = CLAMPIS(value, 0, INT_MAX);
}

int Panel_bl_order_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (int)(data->type->order);
}

void Panel_bl_order_set(PointerRNA *ptr, int value)
{
    Panel *data = (Panel *)(ptr->data);
    data->type->order = CLAMPIS(value, 0, INT_MAX);
}

bool Panel_use_pin_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (((data->flag) & 32) != 0);
}

void Panel_use_pin_set(PointerRNA *ptr, bool value)
{
    Panel *data = (Panel *)(ptr->data);
    if (value) { data->flag |= 32; }
    else { data->flag &= ~32; }
}

bool Panel_is_popover_get(PointerRNA *ptr)
{
    Panel *data = (Panel *)(ptr->data);
    return (((data->flag) & 64) != 0);
}

static PointerRNA UIList_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void UIList_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_UIList_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = UIList_rna_properties_get(iter);
    }
}

void UIList_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = UIList_rna_properties_get(iter);
    }
}

void UIList_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int UIList_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UIList_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

void UIList_bl_idname_get(PointerRNA *ptr, char *value)
{
    uiList *data = (uiList *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int UIList_bl_idname_length(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return strlen(data->type->idname);
}

void UIList_bl_idname_set(PointerRNA *ptr, const char *value)
{
    uiList *data = (uiList *)(ptr->data);
    BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void UIList_list_id_get(PointerRNA *ptr, char *value)
{
    rna_UIList_list_id_get(ptr, value);
}

int UIList_list_id_length(PointerRNA *ptr)
{
    return rna_UIList_list_id_length(ptr);
}

int UIList_layout_type_get(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return (int)(data->layout_type);
}

bool UIList_use_filter_show_get(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return (((data->filter_flag) & 1) != 0);
}

void UIList_use_filter_show_set(PointerRNA *ptr, bool value)
{
    uiList *data = (uiList *)(ptr->data);
    if (value) { data->filter_flag |= 1; }
    else { data->filter_flag &= ~1; }
}

void UIList_filter_name_get(PointerRNA *ptr, char *value)
{
    uiList *data = (uiList *)(ptr->data);
    BLI_strncpy_utf8(value, data->filter_byname, 64);
}

int UIList_filter_name_length(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return strlen(data->filter_byname);
}

void UIList_filter_name_set(PointerRNA *ptr, const char *value)
{
    uiList *data = (uiList *)(ptr->data);
    BLI_strncpy_utf8(data->filter_byname, value, 64);
}

bool UIList_use_filter_invert_get(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return (((data->filter_flag) & 1073741824) != 0);
}

void UIList_use_filter_invert_set(PointerRNA *ptr, bool value)
{
    uiList *data = (uiList *)(ptr->data);
    if (value) { data->filter_flag |= 1073741824; }
    else { data->filter_flag &= ~1073741824; }
}

bool UIList_use_filter_sort_alpha_get(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return (((data->filter_sort_flag) & 1) != 0);
}

void UIList_use_filter_sort_alpha_set(PointerRNA *ptr, bool value)
{
    uiList *data = (uiList *)(ptr->data);
    if (value) { data->filter_sort_flag |= 1; }
    else { data->filter_sort_flag &= ~1; }
}

bool UIList_use_filter_sort_reverse_get(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return (((data->filter_sort_flag) & INT_MIN) != 0);
}

void UIList_use_filter_sort_reverse_set(PointerRNA *ptr, bool value)
{
    uiList *data = (uiList *)(ptr->data);
    if (value) { data->filter_sort_flag |= INT_MIN; }
    else { data->filter_sort_flag &= ~INT_MIN; }
}

bool UIList_use_filter_sort_lock_get(PointerRNA *ptr)
{
    uiList *data = (uiList *)(ptr->data);
    return (((data->filter_sort_flag) & 1073741824) != 0);
}

void UIList_use_filter_sort_lock_set(PointerRNA *ptr, bool value)
{
    uiList *data = (uiList *)(ptr->data);
    if (value) { data->filter_sort_flag |= 1073741824; }
    else { data->filter_sort_flag &= ~1073741824; }
}

int UIList_bitflag_filter_item_get(PointerRNA *ptr)
{
    return rna_UIList_filter_const_FILTER_ITEM_get(ptr);
}

static PointerRNA Header_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Header_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Header_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Header_rna_properties_get(iter);
    }
}

void Header_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Header_rna_properties_get(iter);
    }
}

void Header_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Header_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Header_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA Header_layout_get(PointerRNA *ptr)
{
    Header *data = (Header *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Header_bl_idname_get(PointerRNA *ptr, char *value)
{
    Header *data = (Header *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int Header_bl_idname_length(PointerRNA *ptr)
{
    Header *data = (Header *)(ptr->data);
    return strlen(data->type->idname);
}

void Header_bl_idname_set(PointerRNA *ptr, const char *value)
{
    Header *data = (Header *)(ptr->data);
    BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

int Header_bl_space_type_get(PointerRNA *ptr)
{
    Header *data = (Header *)(ptr->data);
    return (int)(data->type->space_type);
}

void Header_bl_space_type_set(PointerRNA *ptr, int value)
{
    Header *data = (Header *)(ptr->data);
    data->type->space_type = value;
}

int Header_bl_region_type_get(PointerRNA *ptr)
{
    Header *data = (Header *)(ptr->data);
    return (int)(data->type->region_type);
}

void Header_bl_region_type_set(PointerRNA *ptr, int value)
{
    Header *data = (Header *)(ptr->data);
    data->type->region_type = value;
}

static PointerRNA Menu_rna_properties_get(CollectionPropertyIterator *iter)
{
    return rna_builtin_properties_get(iter);
}

void Menu_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    memset(iter, 0, sizeof(*iter));
    iter->parent = *ptr;
    iter->prop = (PropertyRNA *)&rna_Menu_rna_properties;

    rna_builtin_properties_begin(iter, ptr);

    if (iter->valid) {
        iter->ptr = Menu_rna_properties_get(iter);
    }
}

void Menu_rna_properties_next(CollectionPropertyIterator *iter)
{
    rna_builtin_properties_next(iter);

    if (iter->valid) {
        iter->ptr = Menu_rna_properties_get(iter);
    }
}

void Menu_rna_properties_end(CollectionPropertyIterator *iter)
{
    rna_iterator_listbase_end(iter);
}

int Menu_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Menu_rna_type_get(PointerRNA *ptr)
{
    return rna_builtin_type_get(ptr);
}

PointerRNA Menu_layout_get(PointerRNA *ptr)
{
    Menu *data = (Menu *)(ptr->data);
    return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

void Menu_bl_idname_get(PointerRNA *ptr, char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->idname, sizeof(data->type->idname));
}

int Menu_bl_idname_length(PointerRNA *ptr)
{
    Menu *data = (Menu *)(ptr->data);
    return strlen(data->type->idname);
}

void Menu_bl_idname_set(PointerRNA *ptr, const char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(data->type->idname, value, sizeof(data->type->idname));
}

void Menu_bl_label_get(PointerRNA *ptr, char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->label, sizeof(data->type->label));
}

int Menu_bl_label_length(PointerRNA *ptr)
{
    Menu *data = (Menu *)(ptr->data);
    return strlen(data->type->label);
}

void Menu_bl_label_set(PointerRNA *ptr, const char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(data->type->label, value, sizeof(data->type->label));
}

void Menu_bl_translation_context_get(PointerRNA *ptr, char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->translation_context, sizeof(data->type->translation_context));
}

int Menu_bl_translation_context_length(PointerRNA *ptr)
{
    Menu *data = (Menu *)(ptr->data);
    return strlen(data->type->translation_context);
}

void Menu_bl_translation_context_set(PointerRNA *ptr, const char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(data->type->translation_context, value, sizeof(data->type->translation_context));
}

void Menu_bl_description_get(PointerRNA *ptr, char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->description, 240);
}

int Menu_bl_description_length(PointerRNA *ptr)
{
    Menu *data = (Menu *)(ptr->data);
    return strlen(data->type->description);
}

void Menu_bl_description_set(PointerRNA *ptr, const char *value)
{
    rna_Menu_bl_description_set(ptr, value);
}

void Menu_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(value, data->type->owner_id, sizeof(data->type->owner_id));
}

int Menu_bl_owner_id_length(PointerRNA *ptr)
{
    Menu *data = (Menu *)(ptr->data);
    return strlen(data->type->owner_id);
}

void Menu_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    Menu *data = (Menu *)(ptr->data);
    BLI_strncpy_utf8(data->type->owner_id, value, sizeof(data->type->owner_id));
}

struct uiLayout *UILayout_row_func(struct uiLayout *_self, bool align, const char * heading, const char * heading_ctxt, bool translate)
{
	return rna_uiLayoutRowWithHeading(_self, align, heading, heading_ctxt, translate);
}

void UILayout_row_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	bool align;
	const char * heading;
	const char * heading_ctxt;
	bool translate;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	align = *((bool *)_data);
	_data += 8;
	heading = *((const char * *)_data);
	_data += 8;
	heading_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	layout = rna_uiLayoutRowWithHeading(_self, align, heading, heading_ctxt, translate);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_column_func(struct uiLayout *_self, bool align, const char * heading, const char * heading_ctxt, bool translate)
{
	return rna_uiLayoutColumnWithHeading(_self, align, heading, heading_ctxt, translate);
}

void UILayout_column_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	bool align;
	const char * heading;
	const char * heading_ctxt;
	bool translate;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	align = *((bool *)_data);
	_data += 8;
	heading = *((const char * *)_data);
	_data += 8;
	heading_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	layout = rna_uiLayoutColumnWithHeading(_self, align, heading, heading_ctxt, translate);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_column_flow_func(struct uiLayout *_self, int columns, bool align)
{
	return uiLayoutColumnFlow(_self, columns, align);
}

void UILayout_column_flow_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	int columns;
	struct uiLayout *layout;
	bool align;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	columns = *((int *)_data);
	_data += 8;
	_retdata = _data;
	_data += 8;
	align = *((bool *)_data);
	
	layout = uiLayoutColumnFlow(_self, columns, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_grid_flow_func(struct uiLayout *_self, bool row_major, int columns, bool even_columns, bool even_rows, bool align)
{
	return uiLayoutGridFlow(_self, row_major, columns, even_columns, even_rows, align);
}

void UILayout_grid_flow_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	bool row_major;
	int columns;
	bool even_columns;
	bool even_rows;
	bool align;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	row_major = *((bool *)_data);
	_data += 8;
	columns = *((int *)_data);
	_data += 8;
	even_columns = *((bool *)_data);
	_data += 8;
	even_rows = *((bool *)_data);
	_data += 8;
	align = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layout = uiLayoutGridFlow(_self, row_major, columns, even_columns, even_rows, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_box_func(struct uiLayout *_self)
{
	return uiLayoutBox(_self);
}

void UILayout_box_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	layout = uiLayoutBox(_self);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_split_func(struct uiLayout *_self, float factor, bool align)
{
	return uiLayoutSplit(_self, factor, align);
}

void UILayout_split_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	float factor;
	bool align;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	factor = *((float *)_data);
	_data += 8;
	align = *((bool *)_data);
	
	layout = uiLayoutSplit(_self, factor, align);
	*((struct uiLayout **)_retdata) = layout;
}

struct uiLayout *UILayout_menu_pie_func(struct uiLayout *_self)
{
	return uiLayoutRadial(_self);
}

void UILayout_menu_pie_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct uiLayout *layout;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	layout = uiLayoutRadial(_self);
	*((struct uiLayout **)_retdata) = layout;
}

int UILayout_icon_func(bContext *C, struct PointerRNA *data)
{
	return rna_ui_get_rnaptr_icon(C, data);
}

void UILayout_icon_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	int icon_value;
	struct PointerRNA *data;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	data = ((struct PointerRNA *)_data);
	
	icon_value = rna_ui_get_rnaptr_icon(C, data);
	*((int *)_retdata) = icon_value;
}

const char * UILayout_enum_item_name_func(bContext *C, struct PointerRNA *data, const char * property, const char * identifier)
{
	return rna_ui_get_enum_name(C, data, property, identifier);
}

void UILayout_enum_item_name_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * name;
	struct PointerRNA *data;
	const char * property;
	const char * identifier;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	identifier = *((const char * *)_data);
	
	name = rna_ui_get_enum_name(C, data, property, identifier);
	*((const char * *)_retdata) = name;
}

const char * UILayout_enum_item_description_func(bContext *C, struct PointerRNA *data, const char * property, const char * identifier)
{
	return rna_ui_get_enum_description(C, data, property, identifier);
}

void UILayout_enum_item_description_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const char * description;
	struct PointerRNA *data;
	const char * property;
	const char * identifier;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	identifier = *((const char * *)_data);
	
	description = rna_ui_get_enum_description(C, data, property, identifier);
	*((const char * *)_retdata) = description;
}

int UILayout_enum_item_icon_func(bContext *C, struct PointerRNA *data, const char * property, const char * identifier)
{
	return rna_ui_get_enum_icon(C, data, property, identifier);
}

void UILayout_enum_item_icon_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	int icon_value;
	struct PointerRNA *data;
	const char * property;
	const char * identifier;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	identifier = *((const char * *)_data);
	
	icon_value = rna_ui_get_enum_icon(C, data, property, identifier);
	*((int *)_retdata) = icon_value;
}

void UILayout_prop_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon, bool expand, bool slider, int toggle, bool icon_only, bool event, bool full_event, bool emboss, int index, int icon_value, bool invert_checkbox)
{
	rna_uiItemR(_self, data, property, text, text_ctxt, translate, icon, expand, slider, toggle, icon_only, event, full_event, emboss, index, icon_value, invert_checkbox);
}

void UILayout_prop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	bool expand;
	bool slider;
	int toggle;
	bool icon_only;
	bool event;
	bool full_event;
	bool emboss;
	int index;
	int icon_value;
	bool invert_checkbox;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	expand = *((bool *)_data);
	_data += 8;
	slider = *((bool *)_data);
	_data += 8;
	toggle = *((int *)_data);
	_data += 8;
	icon_only = *((bool *)_data);
	_data += 8;
	event = *((bool *)_data);
	_data += 8;
	full_event = *((bool *)_data);
	_data += 8;
	emboss = *((bool *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	icon_value = *((int *)_data);
	_data += 8;
	invert_checkbox = *((bool *)_data);
	
	rna_uiItemR(_self, data, property, text, text_ctxt, translate, icon, expand, slider, toggle, icon_only, event, full_event, emboss, index, icon_value, invert_checkbox);
}

void UILayout_props_enum_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiItemsEnumR(_self, data, property);
}

void UILayout_props_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiItemsEnumR(_self, data, property);
}

void UILayout_prop_menu_enum_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon)
{
	rna_uiItemMenuEnumR(_self, data, property, text, text_ctxt, translate, icon);
}

void UILayout_prop_menu_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	
	rna_uiItemMenuEnumR(_self, data, property, text, text_ctxt, translate, icon);
}

void UILayout_prop_with_popover_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon, bool icon_only, const char * panel)
{
	rna_uiItemR_with_popover(_self, data, property, text, text_ctxt, translate, icon, icon_only, panel);
}

void UILayout_prop_with_popover_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	bool icon_only;
	const char * panel;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	icon_only = *((bool *)_data);
	_data += 8;
	panel = *((const char * *)_data);
	
	rna_uiItemR_with_popover(_self, data, property, text, text_ctxt, translate, icon, icon_only, panel);
}

void UILayout_prop_with_menu_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon, bool icon_only, const char * menu)
{
	rna_uiItemR_with_menu(_self, data, property, text, text_ctxt, translate, icon, icon_only, menu);
}

void UILayout_prop_with_menu_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	bool icon_only;
	const char * menu;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	icon_only = *((bool *)_data);
	_data += 8;
	menu = *((const char * *)_data);
	
	rna_uiItemR_with_menu(_self, data, property, text, text_ctxt, translate, icon, icon_only, menu);
}

void UILayout_prop_tabs_enum_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *data_highlight, const char * property_highlight, bool icon_only)
{
	rna_uiItemTabsEnumR(_self, C, data, property, data_highlight, property_highlight, icon_only);
}

void UILayout_prop_tabs_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *data_highlight;
	const char * property_highlight;
	bool icon_only;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	data_highlight = ((struct PointerRNA *)_data);
	_data += 24;
	property_highlight = *((const char * *)_data);
	_data += 8;
	icon_only = *((bool *)_data);
	
	rna_uiItemTabsEnumR(_self, C, data, property, data_highlight, property_highlight, icon_only);
}

void UILayout_prop_enum_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * value, const char * text, const char * text_ctxt, bool translate, int icon)
{
	rna_uiItemEnumR_string(_self, data, property, value, text, text_ctxt, translate, icon);
}

void UILayout_prop_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * value;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	value = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	
	rna_uiItemEnumR_string(_self, data, property, value, text, text_ctxt, translate, icon);
}

void UILayout_prop_search_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * text, const char * text_ctxt, bool translate, int icon, bool results_are_suggestions)
{
	rna_uiItemPointerR(_self, data, property, search_data, search_property, text, text_ctxt, translate, icon, results_are_suggestions);
}

void UILayout_prop_search_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *search_data;
	const char * search_property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	bool results_are_suggestions;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	search_data = ((struct PointerRNA *)_data);
	_data += 24;
	search_property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	results_are_suggestions = *((bool *)_data);
	
	rna_uiItemPointerR(_self, data, property, search_data, search_property, text, text_ctxt, translate, icon, results_are_suggestions);
}

void UILayout_prop_decorator_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, int index)
{
	uiItemDecoratorR(_self, data, property, index);
}

void UILayout_prop_decorator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int index;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	
	uiItemDecoratorR(_self, data, property, index);
}

struct PointerRNA UILayout_operator_func(struct uiLayout *_self, const char * operator_value, const char * text, const char * text_ctxt, bool translate, int icon, bool emboss, bool depress, int icon_value)
{
	return rna_uiItemO(_self, operator_value, text, text_ctxt, translate, icon, emboss, depress, icon_value);
}

void UILayout_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	bool emboss;
	bool depress;
	int icon_value;
	struct PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	emboss = *((bool *)_data);
	_data += 8;
	depress = *((bool *)_data);
	_data += 8;
	icon_value = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	properties = rna_uiItemO(_self, operator, text, text_ctxt, translate, icon, emboss, depress, icon_value);
	*((struct PointerRNA *)_retdata) = properties;
}

struct PointerRNA UILayout_operator_menu_hold_func(struct uiLayout *_self, const char * operator_value, const char * text, const char * text_ctxt, bool translate, int icon, bool emboss, bool depress, int icon_value, const char * menu)
{
	return rna_uiItemOMenuHold(_self, operator_value, text, text_ctxt, translate, icon, emboss, depress, icon_value, menu);
}

void UILayout_operator_menu_hold_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	bool emboss;
	bool depress;
	int icon_value;
	const char * menu;
	struct PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	emboss = *((bool *)_data);
	_data += 8;
	depress = *((bool *)_data);
	_data += 8;
	icon_value = *((int *)_data);
	_data += 8;
	menu = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	properties = rna_uiItemOMenuHold(_self, operator, text, text_ctxt, translate, icon, emboss, depress, icon_value, menu);
	*((struct PointerRNA *)_retdata) = properties;
}

void UILayout_operator_enum_func(struct uiLayout *_self, const char * operator_value, const char * property, bool icon_only)
{
	rna_uiItemsEnumO(_self, operator_value, property, icon_only);
}

void UILayout_operator_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * property;
	bool icon_only;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
	_data += 8;
	property = *((const char * *)_data);
	_data += 8;
	icon_only = *((bool *)_data);
	
	rna_uiItemsEnumO(_self, operator, property, icon_only);
}

struct PointerRNA UILayout_operator_menu_enum_func(struct uiLayout *_self, bContext *C, const char * operator_value, const char * property, const char * text, const char * text_ctxt, bool translate, int icon)
{
	return rna_uiItemMenuEnumO(_self, C, operator_value, property, text, text_ctxt, translate, icon);
}

void UILayout_operator_menu_enum_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * operator;
	const char * property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	struct PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	operator = *((const char * *)_data);
	_data += 8;
	property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	properties = rna_uiItemMenuEnumO(_self, C, operator, property, text, text_ctxt, translate, icon);
	*((struct PointerRNA *)_retdata) = properties;
}

void UILayout_label_func(struct uiLayout *_self, const char * text, const char * text_ctxt, bool translate, int icon, int icon_value)
{
	rna_uiItemL(_self, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_label_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	int icon_value;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	icon_value = *((int *)_data);
	
	rna_uiItemL(_self, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_menu_func(struct uiLayout *_self, const char * menu, const char * text, const char * text_ctxt, bool translate, int icon, int icon_value)
{
	rna_uiItemM(_self, menu, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_menu_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * menu;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	int icon_value;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	menu = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	icon_value = *((int *)_data);
	
	rna_uiItemM(_self, menu, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_menu_contents_func(struct uiLayout *_self, const char * menu)
{
	rna_uiItemM_contents(_self, menu);
}

void UILayout_menu_contents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * menu;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	menu = *((const char * *)_data);
	
	rna_uiItemM_contents(_self, menu);
}

void UILayout_popover_func(struct uiLayout *_self, bContext *C, const char * panel, const char * text, const char * text_ctxt, bool translate, int icon, int icon_value)
{
	rna_uiItemPopoverPanel(_self, C, panel, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_popover_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * panel;
	const char * text;
	const char * text_ctxt;
	bool translate;
	int icon;
	int icon_value;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	panel = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	_data += 8;
	icon = *((int *)_data);
	_data += 8;
	icon_value = *((int *)_data);
	
	rna_uiItemPopoverPanel(_self, C, panel, text, text_ctxt, translate, icon, icon_value);
}

void UILayout_popover_group_func(struct uiLayout *_self, bContext *C, int space_type, int region_type, const char * context, const char * category)
{
	rna_uiItemPopoverPanelFromGroup(_self, C, space_type, region_type, context, category);
}

void UILayout_popover_group_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	int space_type;
	int region_type;
	const char * context;
	const char * category;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	space_type = *((int *)_data);
	_data += 8;
	region_type = *((int *)_data);
	_data += 8;
	context = *((const char * *)_data);
	_data += 8;
	category = *((const char * *)_data);
	
	rna_uiItemPopoverPanelFromGroup(_self, C, space_type, region_type, context, category);
}

void UILayout_separator_func(struct uiLayout *_self, float factor)
{
	uiItemS_ex(_self, factor);
}

void UILayout_separator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	float factor;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	factor = *((float *)_data);
	
	uiItemS_ex(_self, factor);
}

void UILayout_separator_spacer_func(struct uiLayout *_self)
{
	uiItemSpacer(_self);
}

void UILayout_separator_spacer_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiItemSpacer(_self);
}

void UILayout_context_pointer_set_func(struct uiLayout *_self, const char * name, struct PointerRNA *data)
{
	uiLayoutSetContextPointer(_self, name, data);
}

void UILayout_context_pointer_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * name;
	struct PointerRNA *data;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	data = ((struct PointerRNA *)_data);
	
	uiLayoutSetContextPointer(_self, name, data);
}

void UILayout_template_header_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateHeader(_self, C);
}

void UILayout_template_header_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateHeader(_self, C);
}

void UILayout_template_ID_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink, int filter, bool live_icon, const char * text, const char * text_ctxt, bool translate)
{
	rna_uiTemplateID(_self, C, data, property, create, open, unlink, filter, live_icon, text, text_ctxt, translate);
}

void UILayout_template_ID_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * new;
	const char * open;
	const char * unlink;
	int filter;
	bool live_icon;
	const char * text;
	const char * text_ctxt;
	bool translate;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	new = *((const char * *)_data);
	_data += 8;
	open = *((const char * *)_data);
	_data += 8;
	unlink = *((const char * *)_data);
	_data += 8;
	filter = *((int *)_data);
	_data += 8;
	live_icon = *((bool *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	rna_uiTemplateID(_self, C, data, property, new, open, unlink, filter, live_icon, text, text_ctxt, translate);
}

void UILayout_template_ID_preview_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink, int rows, int cols, int filter, bool hide_buttons)
{
	uiTemplateIDPreview(_self, C, data, property, create, open, unlink, rows, cols, filter, hide_buttons);
}

void UILayout_template_ID_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * new;
	const char * open;
	const char * unlink;
	int rows;
	int cols;
	int filter;
	bool hide_buttons;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	new = *((const char * *)_data);
	_data += 8;
	open = *((const char * *)_data);
	_data += 8;
	unlink = *((const char * *)_data);
	_data += 8;
	rows = *((int *)_data);
	_data += 8;
	cols = *((int *)_data);
	_data += 8;
	filter = *((int *)_data);
	_data += 8;
	hide_buttons = *((bool *)_data);
	
	uiTemplateIDPreview(_self, C, data, property, new, open, unlink, rows, cols, filter, hide_buttons);
}

void UILayout_template_any_ID_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * type_property, const char * text, const char * text_ctxt, bool translate)
{
	rna_uiTemplateAnyID(_self, data, property, type_property, text, text_ctxt, translate);
}

void UILayout_template_any_ID_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * type_property;
	const char * text;
	const char * text_ctxt;
	bool translate;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	type_property = *((const char * *)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	rna_uiTemplateAnyID(_self, data, property, type_property, text, text_ctxt, translate);
}

void UILayout_template_ID_tabs_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * menu, int filter)
{
	uiTemplateIDTabs(_self, C, data, property, create, menu, filter);
}

void UILayout_template_ID_tabs_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * new;
	const char * menu;
	int filter;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	new = *((const char * *)_data);
	_data += 8;
	menu = *((const char * *)_data);
	_data += 8;
	filter = *((int *)_data);
	
	uiTemplateIDTabs(_self, C, data, property, new, menu, filter);
}

void UILayout_template_search_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * create, const char * unlink)
{
	uiTemplateSearch(_self, C, data, property, search_data, search_property, create, unlink);
}

void UILayout_template_search_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *search_data;
	const char * search_property;
	const char * new;
	const char * unlink;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	search_data = ((struct PointerRNA *)_data);
	_data += 24;
	search_property = *((const char * *)_data);
	_data += 8;
	new = *((const char * *)_data);
	_data += 8;
	unlink = *((const char * *)_data);
	
	uiTemplateSearch(_self, C, data, property, search_data, search_property, new, unlink);
}

void UILayout_template_search_preview_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * create, const char * unlink, int rows, int cols)
{
	uiTemplateSearchPreview(_self, C, data, property, search_data, search_property, create, unlink, rows, cols);
}

void UILayout_template_search_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *search_data;
	const char * search_property;
	const char * new;
	const char * unlink;
	int rows;
	int cols;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	search_data = ((struct PointerRNA *)_data);
	_data += 24;
	search_property = *((const char * *)_data);
	_data += 8;
	new = *((const char * *)_data);
	_data += 8;
	unlink = *((const char * *)_data);
	_data += 8;
	rows = *((int *)_data);
	_data += 8;
	cols = *((int *)_data);
	
	uiTemplateSearchPreview(_self, C, data, property, search_data, search_property, new, unlink, rows, cols);
}

void UILayout_template_path_builder_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *root, const char * text, const char * text_ctxt, bool translate)
{
	rna_uiTemplatePathBuilder(_self, data, property, root, text, text_ctxt, translate);
}

void UILayout_template_path_builder_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *root;
	const char * text;
	const char * text_ctxt;
	bool translate;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	root = ((struct PointerRNA *)_data);
	_data += 24;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	rna_uiTemplatePathBuilder(_self, data, property, root, text, text_ctxt, translate);
}

void UILayout_template_modifiers_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateModifiers(_self, C);
}

void UILayout_template_modifiers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateModifiers(_self, C);
}

void UILayout_template_constraints_func(struct uiLayout *_self, bContext *C, bool use_bone_constraints)
{
	uiTemplateConstraints(_self, C, use_bone_constraints);
}

void UILayout_template_constraints_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	bool use_bone_constraints;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	use_bone_constraints = *((bool *)_data);
	
	uiTemplateConstraints(_self, C, use_bone_constraints);
}

void UILayout_template_grease_pencil_modifiers_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateGpencilModifiers(_self, C);
}

void UILayout_template_grease_pencil_modifiers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateGpencilModifiers(_self, C);
}

void UILayout_template_shaderfx_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateShaderFx(_self, C);
}

void UILayout_template_shaderfx_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateShaderFx(_self, C);
}

void UILayout_template_greasepencil_color_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, int rows, int cols, float scale, int filter)
{
	uiTemplateGpencilColorPreview(_self, C, data, property, rows, cols, scale, filter);
}

void UILayout_template_greasepencil_color_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int rows;
	int cols;
	float scale;
	int filter;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	rows = *((int *)_data);
	_data += 8;
	cols = *((int *)_data);
	_data += 8;
	scale = *((float *)_data);
	_data += 8;
	filter = *((int *)_data);
	
	uiTemplateGpencilColorPreview(_self, C, data, property, rows, cols, scale, filter);
}

void UILayout_template_constraint_header_func(struct uiLayout *_self, struct PointerRNA *data)
{
	uiTemplateConstraintHeader(_self, data);
}

void UILayout_template_constraint_header_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	
	uiTemplateConstraintHeader(_self, data);
}

void UILayout_template_preview_func(struct uiLayout *_self, bContext *C, struct ID *id, bool show_buttons, struct ID *parent, struct MTex *slot, const char * preview_id)
{
	uiTemplatePreview(_self, C, id, show_buttons, parent, slot, preview_id);
}

void UILayout_template_preview_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct ID *id;
	bool show_buttons;
	struct ID *parent;
	struct MTex *slot;
	const char * preview_id;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((struct ID **)_data);
	_data += 8;
	show_buttons = *((bool *)_data);
	_data += 8;
	parent = *((struct ID **)_data);
	_data += 8;
	slot = *((struct MTex **)_data);
	_data += 8;
	preview_id = *((const char * *)_data);
	
	uiTemplatePreview(_self, C, id, show_buttons, parent, slot, preview_id);
}

void UILayout_template_curve_mapping_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, int type, bool levels, bool brush, bool use_negative_slope, bool show_tone)
{
	uiTemplateCurveMapping(_self, data, property, type, levels, brush, use_negative_slope, show_tone);
}

void UILayout_template_curve_mapping_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	int type;
	bool levels;
	bool brush;
	bool use_negative_slope;
	bool show_tone;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	levels = *((bool *)_data);
	_data += 8;
	brush = *((bool *)_data);
	_data += 8;
	use_negative_slope = *((bool *)_data);
	_data += 8;
	show_tone = *((bool *)_data);
	
	uiTemplateCurveMapping(_self, data, property, type, levels, brush, use_negative_slope, show_tone);
}

void UILayout_template_curveprofile_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateCurveProfile(_self, data, property);
}

void UILayout_template_curveprofile_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateCurveProfile(_self, data, property);
}

void UILayout_template_color_ramp_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool expand)
{
	uiTemplateColorRamp(_self, data, property, expand);
}

void UILayout_template_color_ramp_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	bool expand;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	expand = *((bool *)_data);
	
	uiTemplateColorRamp(_self, data, property, expand);
}

void UILayout_template_icon_func(struct uiLayout *_self, int icon_value, float scale)
{
	uiTemplateIcon(_self, icon_value, scale);
}

void UILayout_template_icon_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	int icon_value;
	float scale;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	icon_value = *((int *)_data);
	_data += 8;
	scale = *((float *)_data);
	
	uiTemplateIcon(_self, icon_value, scale);
}

void UILayout_template_icon_view_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool show_labels, float scale, float scale_popup)
{
	uiTemplateIconView(_self, data, property, show_labels, scale, scale_popup);
}

void UILayout_template_icon_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	bool show_labels;
	float scale;
	float scale_popup;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	show_labels = *((bool *)_data);
	_data += 8;
	scale = *((float *)_data);
	_data += 8;
	scale_popup = *((float *)_data);
	
	uiTemplateIconView(_self, data, property, show_labels, scale, scale_popup);
}

void UILayout_template_histogram_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateHistogram(_self, data, property);
}

void UILayout_template_histogram_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateHistogram(_self, data, property);
}

void UILayout_template_waveform_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateWaveform(_self, data, property);
}

void UILayout_template_waveform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateWaveform(_self, data, property);
}

void UILayout_template_vectorscope_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateVectorscope(_self, data, property);
}

void UILayout_template_vectorscope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateVectorscope(_self, data, property);
}

void UILayout_template_layers_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *used_layers_data, const char * used_layers_property, int active_layer)
{
	uiTemplateLayers(_self, data, property, used_layers_data, used_layers_property, active_layer);
}

void UILayout_template_layers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *used_layers_data;
	const char * used_layers_property;
	int active_layer;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	used_layers_data = ((struct PointerRNA *)_data);
	_data += 24;
	used_layers_property = *((const char * *)_data);
	_data += 8;
	active_layer = *((int *)_data);
	
	uiTemplateLayers(_self, data, property, used_layers_data, used_layers_property, active_layer);
}

void UILayout_template_color_picker_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool value_slider, bool lock, bool lock_luminosity, bool cubic)
{
	uiTemplateColorPicker(_self, data, property, value_slider, lock, lock_luminosity, cubic);
}

void UILayout_template_color_picker_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	bool value_slider;
	bool lock;
	bool lock_luminosity;
	bool cubic;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	value_slider = *((bool *)_data);
	_data += 8;
	lock = *((bool *)_data);
	_data += 8;
	lock_luminosity = *((bool *)_data);
	_data += 8;
	cubic = *((bool *)_data);
	
	uiTemplateColorPicker(_self, data, property, value_slider, lock, lock_luminosity, cubic);
}

void UILayout_template_palette_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool color)
{
	uiTemplatePalette(_self, data, property, color);
}

void UILayout_template_palette_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	bool color;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	color = *((bool *)_data);
	
	uiTemplatePalette(_self, data, property, color);
}

void UILayout_template_image_layers_func(struct uiLayout *_self, bContext *C, struct Image *image, struct ImageUser *image_user)
{
	uiTemplateImageLayers(_self, C, image, image_user);
}

void UILayout_template_image_layers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct Image *image;
	struct ImageUser *image_user;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((struct Image **)_data);
	_data += 8;
	image_user = *((struct ImageUser **)_data);
	
	uiTemplateImageLayers(_self, C, image, image_user);
}

void UILayout_template_image_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *image_user, bool compact, bool multiview)
{
	uiTemplateImage(_self, C, data, property, image_user, compact, multiview);
}

void UILayout_template_image_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *image_user;
	bool compact;
	bool multiview;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	image_user = ((struct PointerRNA *)_data);
	_data += 24;
	compact = *((bool *)_data);
	_data += 8;
	multiview = *((bool *)_data);
	
	uiTemplateImage(_self, C, data, property, image_user, compact, multiview);
}

void UILayout_template_image_settings_func(struct uiLayout *_self, struct PointerRNA *image_settings, bool color_management)
{
	uiTemplateImageSettings(_self, image_settings, color_management);
}

void UILayout_template_image_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *image_settings;
	bool color_management;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	image_settings = ((struct PointerRNA *)_data);
	_data += 24;
	color_management = *((bool *)_data);
	
	uiTemplateImageSettings(_self, image_settings, color_management);
}

void UILayout_template_image_stereo_3d_func(struct uiLayout *_self, struct PointerRNA *stereo_3d_format)
{
	uiTemplateImageStereo3d(_self, stereo_3d_format);
}

void UILayout_template_image_stereo_3d_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *stereo_3d_format;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	stereo_3d_format = ((struct PointerRNA *)_data);
	
	uiTemplateImageStereo3d(_self, stereo_3d_format);
}

void UILayout_template_image_views_func(struct uiLayout *_self, struct PointerRNA *image_settings)
{
	uiTemplateImageViews(_self, image_settings);
}

void UILayout_template_image_views_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *image_settings;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	image_settings = ((struct PointerRNA *)_data);
	
	uiTemplateImageViews(_self, image_settings);
}

void UILayout_template_movieclip_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, bool compact)
{
	uiTemplateMovieClip(_self, C, data, property, compact);
}

void UILayout_template_movieclip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	bool compact;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	compact = *((bool *)_data);
	
	uiTemplateMovieClip(_self, C, data, property, compact);
}

void UILayout_template_track_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateTrack(_self, data, property);
}

void UILayout_template_track_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateTrack(_self, data, property);
}

void UILayout_template_marker_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user, struct PointerRNA *track, bool compact)
{
	uiTemplateMarker(_self, data, property, clip_user, track, compact);
}

void UILayout_template_marker_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *clip_user;
	struct PointerRNA *track;
	bool compact;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	clip_user = ((struct PointerRNA *)_data);
	_data += 24;
	track = ((struct PointerRNA *)_data);
	_data += 24;
	compact = *((bool *)_data);
	
	uiTemplateMarker(_self, data, property, clip_user, track, compact);
}

void UILayout_template_movieclip_information_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user)
{
	uiTemplateMovieclipInformation(_self, data, property, clip_user);
}

void UILayout_template_movieclip_information_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	struct PointerRNA *clip_user;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	clip_user = ((struct PointerRNA *)_data);
	
	uiTemplateMovieclipInformation(_self, data, property, clip_user);
}

void UILayout_template_list_func(struct uiLayout *_self, bContext *C, const char * listtype_name, const char * list_id, struct PointerRNA *dataptr, const char * propname, struct PointerRNA *active_dataptr, const char * active_propname, const char * item_dyntip_propname, int rows, int maxrows, int type, int columns, bool sort_reverse, bool sort_lock)
{
	rna_uiTemplateList(_self, C, listtype_name, list_id, dataptr, propname, active_dataptr, active_propname, item_dyntip_propname, rows, maxrows, type, columns, sort_reverse, sort_lock);
}

void UILayout_template_list_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * listtype_name;
	const char * list_id;
	struct PointerRNA *dataptr;
	const char * propname;
	struct PointerRNA *active_dataptr;
	const char * active_propname;
	const char * item_dyntip_propname;
	int rows;
	int maxrows;
	int type;
	int columns;
	bool sort_reverse;
	bool sort_lock;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	listtype_name = *((const char * *)_data);
	_data += 8;
	list_id = *((const char * *)_data);
	_data += 8;
	dataptr = ((struct PointerRNA *)_data);
	_data += 24;
	propname = *((const char * *)_data);
	_data += 8;
	active_dataptr = ((struct PointerRNA *)_data);
	_data += 24;
	active_propname = *((const char * *)_data);
	_data += 8;
	item_dyntip_propname = *((const char * *)_data);
	_data += 8;
	rows = *((int *)_data);
	_data += 8;
	maxrows = *((int *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	columns = *((int *)_data);
	_data += 8;
	sort_reverse = *((bool *)_data);
	_data += 8;
	sort_lock = *((bool *)_data);
	
	rna_uiTemplateList(_self, C, listtype_name, list_id, dataptr, propname, active_dataptr, active_propname, item_dyntip_propname, rows, maxrows, type, columns, sort_reverse, sort_lock);
}

void UILayout_template_running_jobs_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateRunningJobs(_self, C);
}

void UILayout_template_running_jobs_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateRunningJobs(_self, C);
}

void UILayout_template_operator_search_func(struct uiLayout *_self)
{
	uiTemplateOperatorSearch(_self);
}

void UILayout_template_operator_search_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateOperatorSearch(_self);
}

void UILayout_template_menu_search_func(struct uiLayout *_self)
{
	uiTemplateMenuSearch(_self);
}

void UILayout_template_menu_search_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateMenuSearch(_self);
}

void UILayout_template_header_3D_mode_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateHeader3D_mode(_self, C);
}

void UILayout_template_header_3D_mode_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateHeader3D_mode(_self, C);
}

void UILayout_template_edit_mode_selection_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateEditModeSelection(_self, C);
}

void UILayout_template_edit_mode_selection_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateEditModeSelection(_self, C);
}

void UILayout_template_reports_banner_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateReportsBanner(_self, C);
}

void UILayout_template_reports_banner_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateReportsBanner(_self, C);
}

void UILayout_template_input_status_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateInputStatus(_self, C);
}

void UILayout_template_input_status_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateInputStatus(_self, C);
}

void UILayout_template_node_link_func(struct uiLayout *_self, bContext *C, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket)
{
	uiTemplateNodeLink(_self, C, ntree, node, socket);
}

void UILayout_template_node_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct bNodeTree *ntree;
	struct bNode *node;
	struct bNodeSocket *socket;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	ntree = *((struct bNodeTree **)_data);
	_data += 8;
	node = *((struct bNode **)_data);
	_data += 8;
	socket = *((struct bNodeSocket **)_data);
	
	uiTemplateNodeLink(_self, C, ntree, node, socket);
}

void UILayout_template_node_view_func(struct uiLayout *_self, bContext *C, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket)
{
	uiTemplateNodeView(_self, C, ntree, node, socket);
}

void UILayout_template_node_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct bNodeTree *ntree;
	struct bNode *node;
	struct bNodeSocket *socket;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	ntree = *((struct bNodeTree **)_data);
	_data += 8;
	node = *((struct bNode **)_data);
	_data += 8;
	socket = *((struct bNodeSocket **)_data);
	
	uiTemplateNodeView(_self, C, ntree, node, socket);
}

void UILayout_template_texture_user_func(struct uiLayout *_self, bContext *C)
{
	uiTemplateTextureUser(_self, C);
}

void UILayout_template_texture_user_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	_self = (struct uiLayout *)_ptr->data;
	
	uiTemplateTextureUser(_self, C);
}

void UILayout_template_keymap_item_properties_func(struct uiLayout *_self, struct PointerRNA *item)
{
	uiTemplateKeymapItemProperties(_self, item);
}

void UILayout_template_keymap_item_properties_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *item;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	item = ((struct PointerRNA *)_data);
	
	uiTemplateKeymapItemProperties(_self, item);
}

void UILayout_template_component_menu_func(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * name)
{
	uiTemplateComponentMenu(_self, data, property, name);
}

void UILayout_template_component_menu_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	const char * name;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	_data += 8;
	name = *((const char * *)_data);
	
	uiTemplateComponentMenu(_self, data, property, name);
}

void UILayout_template_colorspace_settings_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	uiTemplateColorspaceSettings(_self, data, property);
}

void UILayout_template_colorspace_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateColorspaceSettings(_self, data, property);
}

void UILayout_template_colormanaged_view_settings_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property)
{
	uiTemplateColormanagedViewSettings(_self, C, data, property);
}

void UILayout_template_colormanaged_view_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	uiTemplateColormanagedViewSettings(_self, C, data, property);
}

void UILayout_template_node_socket_func(struct uiLayout *_self, bContext *C, float color[4])
{
	uiTemplateNodeSocket(_self, C, color);
}

void UILayout_template_node_socket_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	float *color;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	color = ((float *)_data);
	
	uiTemplateNodeSocket(_self, C, color);
}

void UILayout_template_cache_file_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property)
{
	rna_uiTemplateCacheFile(_self, C, data, property);
}

void UILayout_template_cache_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	rna_uiTemplateCacheFile(_self, C, data, property);
}

void UILayout_template_cache_file_velocity_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	rna_uiTemplateCacheFileVelocity(_self, data, property);
}

void UILayout_template_cache_file_velocity_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	rna_uiTemplateCacheFileVelocity(_self, data, property);
}

void UILayout_template_cache_file_procedural_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property)
{
	rna_uiTemplateCacheFileProcedural(_self, C, data, property);
}

void UILayout_template_cache_file_procedural_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	rna_uiTemplateCacheFileProcedural(_self, C, data, property);
}

void UILayout_template_cache_file_time_settings_func(struct uiLayout *_self, struct PointerRNA *data, const char * property)
{
	rna_uiTemplateCacheFileTimeSettings(_self, data, property);
}

void UILayout_template_cache_file_time_settings_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	rna_uiTemplateCacheFileTimeSettings(_self, data, property);
}

void UILayout_template_cache_file_layers_func(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property)
{
	rna_uiTemplateCacheFileLayers(_self, C, data, property);
}

void UILayout_template_cache_file_layers_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct PointerRNA *data;
	const char * property;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	data = ((struct PointerRNA *)_data);
	_data += 24;
	property = *((const char * *)_data);
	
	rna_uiTemplateCacheFileLayers(_self, C, data, property);
}

int UILayout_template_recent_files_func(struct uiLayout *_self, int rows)
{
	return uiTemplateRecentFiles(_self, rows);
}

void UILayout_template_recent_files_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	int rows;
	int found;
	char *_data, *_retdata;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	rows = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	found = uiTemplateRecentFiles(_self, rows);
	*((int *)_retdata) = found;
}

void UILayout_template_file_select_path_func(struct uiLayout *_self, bContext *C, struct FileSelectParams *params)
{
	uiTemplateFileSelectPath(_self, C, params);
}

void UILayout_template_file_select_path_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct FileSelectParams *params;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	params = *((struct FileSelectParams **)_data);
	
	uiTemplateFileSelectPath(_self, C, params);
}

void UILayout_template_event_from_keymap_item_func(struct uiLayout *_self, struct wmKeyMapItem *item, const char * text, const char * text_ctxt, bool translate)
{
	rna_uiTemplateEventFromKeymapItem(_self, item, text, text_ctxt, translate);
}

void UILayout_template_event_from_keymap_item_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	struct wmKeyMapItem *item;
	const char * text;
	const char * text_ctxt;
	bool translate;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	item = *((struct wmKeyMapItem **)_data);
	_data += 8;
	text = *((const char * *)_data);
	_data += 8;
	text_ctxt = *((const char * *)_data);
	_data += 8;
	translate = *((bool *)_data);
	
	rna_uiTemplateEventFromKeymapItem(_self, item, text, text_ctxt, translate);
}

void UILayout_template_asset_view_func(struct uiLayout *_self, bContext *C, const char * list_id, struct PointerRNA *asset_library_dataptr, const char * asset_library_propname, struct PointerRNA *assets_dataptr, const char * assets_propname, struct PointerRNA *active_dataptr, const char * active_propname, int filter_id_types, int display_options, const char * activate_operator, struct PointerRNA *activate_operator_properties, const char * drag_operator, struct PointerRNA *drag_operator_properties)
{
	rna_uiTemplateAssetView(_self, C, list_id, asset_library_dataptr, asset_library_propname, assets_dataptr, assets_propname, active_dataptr, active_propname, filter_id_types, display_options, activate_operator, activate_operator_properties, drag_operator, drag_operator_properties);
}

void UILayout_template_asset_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct uiLayout *_self;
	const char * list_id;
	struct PointerRNA *asset_library_dataptr;
	const char * asset_library_propname;
	struct PointerRNA *assets_dataptr;
	const char * assets_propname;
	struct PointerRNA *active_dataptr;
	const char * active_propname;
	int filter_id_types;
	int display_options;
	const char * activate_operator;
	struct PointerRNA *activate_operator_properties;
	const char * drag_operator;
	struct PointerRNA *drag_operator_properties;
	char *_data;
	
	_self = (struct uiLayout *)_ptr->data;
	_data = (char *)_parms->data;
	list_id = *((const char * *)_data);
	_data += 8;
	asset_library_dataptr = ((struct PointerRNA *)_data);
	_data += 24;
	asset_library_propname = *((const char * *)_data);
	_data += 8;
	assets_dataptr = ((struct PointerRNA *)_data);
	_data += 24;
	assets_propname = *((const char * *)_data);
	_data += 8;
	active_dataptr = ((struct PointerRNA *)_data);
	_data += 24;
	active_propname = *((const char * *)_data);
	_data += 8;
	filter_id_types = *((int *)_data);
	_data += 8;
	display_options = *((int *)_data);
	_data += 8;
	activate_operator = *((const char * *)_data);
	_data += 8;
	activate_operator_properties = ((struct PointerRNA *)_data);
	_data += 24;
	drag_operator = *((const char * *)_data);
	_data += 8;
	drag_operator_properties = ((struct PointerRNA *)_data);
	
	rna_uiTemplateAssetView(_self, C, list_id, asset_library_dataptr, asset_library_propname, assets_dataptr, assets_propname, active_dataptr, active_propname, filter_id_types, display_options, activate_operator, activate_operator_properties, drag_operator, drag_operator_properties);
}

/* Repeated prototypes to detect errors */

struct uiLayout *rna_uiLayoutRowWithHeading(struct uiLayout *_self, bool align, const char * heading, const char * heading_ctxt, bool translate);
struct uiLayout *rna_uiLayoutColumnWithHeading(struct uiLayout *_self, bool align, const char * heading, const char * heading_ctxt, bool translate);
struct uiLayout *uiLayoutColumnFlow(struct uiLayout *_self, int columns, bool align);
struct uiLayout *uiLayoutGridFlow(struct uiLayout *_self, bool row_major, int columns, bool even_columns, bool even_rows, bool align);
struct uiLayout *uiLayoutBox(struct uiLayout *_self);
struct uiLayout *uiLayoutSplit(struct uiLayout *_self, float factor, bool align);
struct uiLayout *uiLayoutRadial(struct uiLayout *_self);
int rna_ui_get_rnaptr_icon(bContext *C, struct PointerRNA *data);
const char * rna_ui_get_enum_name(bContext *C, struct PointerRNA *data, const char * property, const char * identifier);
const char * rna_ui_get_enum_description(bContext *C, struct PointerRNA *data, const char * property, const char * identifier);
int rna_ui_get_enum_icon(bContext *C, struct PointerRNA *data, const char * property, const char * identifier);
void rna_uiItemR(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon, bool expand, bool slider, int toggle, bool icon_only, bool event, bool full_event, bool emboss, int index, int icon_value, bool invert_checkbox);
void uiItemsEnumR(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void rna_uiItemMenuEnumR(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon);
void rna_uiItemR_with_popover(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon, bool icon_only, const char * panel);
void rna_uiItemR_with_menu(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * text, const char * text_ctxt, bool translate, int icon, bool icon_only, const char * menu);
void rna_uiItemTabsEnumR(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *data_highlight, const char * property_highlight, bool icon_only);
void rna_uiItemEnumR_string(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * value, const char * text, const char * text_ctxt, bool translate, int icon);
void rna_uiItemPointerR(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * text, const char * text_ctxt, bool translate, int icon, bool results_are_suggestions);
void uiItemDecoratorR(struct uiLayout *_self, struct PointerRNA *data, const char * property, int index);
struct PointerRNA rna_uiItemO(struct uiLayout *_self, const char * operator_value, const char * text, const char * text_ctxt, bool translate, int icon, bool emboss, bool depress, int icon_value);
struct PointerRNA rna_uiItemOMenuHold(struct uiLayout *_self, const char * operator_value, const char * text, const char * text_ctxt, bool translate, int icon, bool emboss, bool depress, int icon_value, const char * menu);
void rna_uiItemsEnumO(struct uiLayout *_self, const char * operator_value, const char * property, bool icon_only);
struct PointerRNA rna_uiItemMenuEnumO(struct uiLayout *_self, bContext *C, const char * operator_value, const char * property, const char * text, const char * text_ctxt, bool translate, int icon);
void rna_uiItemL(struct uiLayout *_self, const char * text, const char * text_ctxt, bool translate, int icon, int icon_value);
void rna_uiItemM(struct uiLayout *_self, const char * menu, const char * text, const char * text_ctxt, bool translate, int icon, int icon_value);
void rna_uiItemM_contents(struct uiLayout *_self, const char * menu);
void rna_uiItemPopoverPanel(struct uiLayout *_self, bContext *C, const char * panel, const char * text, const char * text_ctxt, bool translate, int icon, int icon_value);
void rna_uiItemPopoverPanelFromGroup(struct uiLayout *_self, bContext *C, int space_type, int region_type, const char * context, const char * category);
void uiItemS_ex(struct uiLayout *_self, float factor);
void uiItemSpacer(struct uiLayout *_self);
void uiLayoutSetContextPointer(struct uiLayout *_self, const char * name, struct PointerRNA *data);
void uiTemplateHeader(struct uiLayout *_self, bContext *C);
void rna_uiTemplateID(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink, int filter, bool live_icon, const char * text, const char * text_ctxt, bool translate);
void uiTemplateIDPreview(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * open, const char * unlink, int rows, int cols, int filter, bool hide_buttons);
void rna_uiTemplateAnyID(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * type_property, const char * text, const char * text_ctxt, bool translate);
void uiTemplateIDTabs(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, const char * create, const char * menu, int filter);
void uiTemplateSearch(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * create, const char * unlink);
void uiTemplateSearchPreview(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *search_data, const char * search_property, const char * create, const char * unlink, int rows, int cols);
void rna_uiTemplatePathBuilder(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *root, const char * text, const char * text_ctxt, bool translate);
void uiTemplateModifiers(struct uiLayout *_self, bContext *C);
void uiTemplateConstraints(struct uiLayout *_self, bContext *C, bool use_bone_constraints);
void uiTemplateGpencilModifiers(struct uiLayout *_self, bContext *C);
void uiTemplateShaderFx(struct uiLayout *_self, bContext *C);
void uiTemplateGpencilColorPreview(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, int rows, int cols, float scale, int filter);
void uiTemplateConstraintHeader(struct uiLayout *_self, struct PointerRNA *data);
void uiTemplatePreview(struct uiLayout *_self, bContext *C, struct ID *id, bool show_buttons, struct ID *parent, struct MTex *slot, const char * preview_id);
void uiTemplateCurveMapping(struct uiLayout *_self, struct PointerRNA *data, const char * property, int type, bool levels, bool brush, bool use_negative_slope, bool show_tone);
void uiTemplateCurveProfile(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateColorRamp(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool expand);
void uiTemplateIcon(struct uiLayout *_self, int icon_value, float scale);
void uiTemplateIconView(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool show_labels, float scale, float scale_popup);
void uiTemplateHistogram(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateWaveform(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateVectorscope(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateLayers(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *used_layers_data, const char * used_layers_property, int active_layer);
void uiTemplateColorPicker(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool value_slider, bool lock, bool lock_luminosity, bool cubic);
void uiTemplatePalette(struct uiLayout *_self, struct PointerRNA *data, const char * property, bool color);
void uiTemplateImageLayers(struct uiLayout *_self, bContext *C, struct Image *image, struct ImageUser *image_user);
void uiTemplateImage(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, struct PointerRNA *image_user, bool compact, bool multiview);
void uiTemplateImageSettings(struct uiLayout *_self, struct PointerRNA *image_settings, bool color_management);
void uiTemplateImageStereo3d(struct uiLayout *_self, struct PointerRNA *stereo_3d_format);
void uiTemplateImageViews(struct uiLayout *_self, struct PointerRNA *image_settings);
void uiTemplateMovieClip(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property, bool compact);
void uiTemplateTrack(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateMarker(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user, struct PointerRNA *track, bool compact);
void uiTemplateMovieclipInformation(struct uiLayout *_self, struct PointerRNA *data, const char * property, struct PointerRNA *clip_user);
void rna_uiTemplateList(struct uiLayout *_self, bContext *C, const char * listtype_name, const char * list_id, struct PointerRNA *dataptr, const char * propname, struct PointerRNA *active_dataptr, const char * active_propname, const char * item_dyntip_propname, int rows, int maxrows, int type, int columns, bool sort_reverse, bool sort_lock);
void uiTemplateRunningJobs(struct uiLayout *_self, bContext *C);
void uiTemplateOperatorSearch(struct uiLayout *_self);
void uiTemplateMenuSearch(struct uiLayout *_self);
void uiTemplateHeader3D_mode(struct uiLayout *_self, bContext *C);
void uiTemplateEditModeSelection(struct uiLayout *_self, bContext *C);
void uiTemplateReportsBanner(struct uiLayout *_self, bContext *C);
void uiTemplateInputStatus(struct uiLayout *_self, bContext *C);
void uiTemplateNodeLink(struct uiLayout *_self, bContext *C, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket);
void uiTemplateNodeView(struct uiLayout *_self, bContext *C, struct bNodeTree *ntree, struct bNode *node, struct bNodeSocket *socket);
void uiTemplateTextureUser(struct uiLayout *_self, bContext *C);
void uiTemplateKeymapItemProperties(struct uiLayout *_self, struct PointerRNA *item);
void uiTemplateComponentMenu(struct uiLayout *_self, struct PointerRNA *data, const char * property, const char * name);
void uiTemplateColorspaceSettings(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void uiTemplateColormanagedViewSettings(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property);
void uiTemplateNodeSocket(struct uiLayout *_self, bContext *C, float color[4]);
void rna_uiTemplateCacheFile(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property);
void rna_uiTemplateCacheFileVelocity(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void rna_uiTemplateCacheFileProcedural(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property);
void rna_uiTemplateCacheFileTimeSettings(struct uiLayout *_self, struct PointerRNA *data, const char * property);
void rna_uiTemplateCacheFileLayers(struct uiLayout *_self, bContext *C, struct PointerRNA *data, const char * property);
int uiTemplateRecentFiles(struct uiLayout *_self, int rows);
void uiTemplateFileSelectPath(struct uiLayout *_self, bContext *C, struct FileSelectParams *params);
void rna_uiTemplateEventFromKeymapItem(struct uiLayout *_self, struct wmKeyMapItem *item, const char * text, const char * text_ctxt, bool translate);
void rna_uiTemplateAssetView(struct uiLayout *_self, bContext *C, const char * list_id, struct PointerRNA *asset_library_dataptr, const char * asset_library_propname, struct PointerRNA *assets_dataptr, const char * assets_propname, struct PointerRNA *active_dataptr, const char * active_propname, int filter_id_types, int display_options, const char * activate_operator, struct PointerRNA *activate_operator_properties, const char * drag_operator, struct PointerRNA *drag_operator_properties);





/* UI Layout */
CollectionPropertyRNA rna_UILayout_rna_properties = {
	{(PropertyRNA *)&rna_UILayout_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_rna_properties_begin, UILayout_rna_properties_next, UILayout_rna_properties_end, UILayout_rna_properties_get, NULL, NULL, UILayout_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UILayout_rna_type = {
	{(PropertyRNA *)&rna_UILayout_active, (PropertyRNA *)&rna_UILayout_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UILayout_active = {
	{(PropertyRNA *)&rna_UILayout_active_default, (PropertyRNA *)&rna_UILayout_rna_type,
	-1, "active", 3, 0, 0, 0, 0, "active",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_active_get, UILayout_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_active_default = {
	{(PropertyRNA *)&rna_UILayout_activate_init, (PropertyRNA *)&rna_UILayout_active,
	-1, "active_default", 3, 0, 0, 0, 0, "Active Default",
	"When true, an operator button defined after this will be activated when pressing return(use with popup dialogs)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_active_default_get, UILayout_active_default_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_activate_init = {
	{(PropertyRNA *)&rna_UILayout_operator_context, (PropertyRNA *)&rna_UILayout_active_default,
	-1, "activate_init", 3, 0, 0, 0, 0, "Activate on Init",
	"When true, buttons defined in popups will be activated on first display (use so you can type into a field without having to click on it first)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_activate_init_get, UILayout_activate_init_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

EnumPropertyRNA rna_UILayout_operator_context = {
	{(PropertyRNA *)&rna_UILayout_enabled, (PropertyRNA *)&rna_UILayout_activate_init,
	-1, "operator_context", 3, 0, 0, 0, 0, "operator_context",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_operator_context_get, UILayout_operator_context_set, NULL, NULL, NULL, rna_enum_operator_context_items, 12, 0
};

BoolPropertyRNA rna_UILayout_enabled = {
	{(PropertyRNA *)&rna_UILayout_alert, (PropertyRNA *)&rna_UILayout_operator_context,
	-1, "enabled", 3, 0, 0, 0, 0, "Enabled",
	"When false, this (sub)layout is grayed out",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_enabled_get, UILayout_enabled_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_alert = {
	{(PropertyRNA *)&rna_UILayout_alignment, (PropertyRNA *)&rna_UILayout_enabled,
	-1, "alert", 3, 0, 0, 0, 0, "alert",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_alert_get, UILayout_alert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static const EnumPropertyItem rna_UILayout_alignment_items[5] = {
	{0, "EXPAND", 0, "Expand", ""},
	{1, "LEFT", 0, "Left", ""},
	{2, "CENTER", 0, "Center", ""},
	{3, "RIGHT", 0, "Right", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_alignment = {
	{(PropertyRNA *)&rna_UILayout_direction, (PropertyRNA *)&rna_UILayout_alert,
	-1, "alignment", 3, 0, 0, 0, 0, "alignment",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_alignment_get, UILayout_alignment_set, NULL, NULL, NULL, rna_UILayout_alignment_items, 4, 0
};

static const EnumPropertyItem rna_UILayout_direction_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "VERTICAL", 0, "Vertical", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_direction = {
	{(PropertyRNA *)&rna_UILayout_scale_x, (PropertyRNA *)&rna_UILayout_alignment,
	-1, "direction", 2, 0, 0, 0, 0, "direction",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_direction_get, NULL, NULL, NULL, NULL, rna_UILayout_direction_items, 2, 0
};

FloatPropertyRNA rna_UILayout_scale_x = {
	{(PropertyRNA *)&rna_UILayout_scale_y, (PropertyRNA *)&rna_UILayout_direction,
	-1, "scale_x", 3, 0, 0, 0, 0, "Scale X",
	"Scale factor along the X for items in this (sub)layout",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_scale_x_get, UILayout_scale_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UILayout_scale_y = {
	{(PropertyRNA *)&rna_UILayout_ui_units_x, (PropertyRNA *)&rna_UILayout_scale_x,
	-1, "scale_y", 3, 0, 0, 0, 0, "Scale Y",
	"Scale factor along the Y for items in this (sub)layout",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_scale_y_get, UILayout_scale_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UILayout_ui_units_x = {
	{(PropertyRNA *)&rna_UILayout_ui_units_y, (PropertyRNA *)&rna_UILayout_scale_y,
	-1, "ui_units_x", 3, 0, 0, 0, 0, "Units X",
	"Fixed size along the X for items in this (sub)layout",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_ui_units_x_get, UILayout_ui_units_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UILayout_ui_units_y = {
	{(PropertyRNA *)&rna_UILayout_emboss, (PropertyRNA *)&rna_UILayout_ui_units_x,
	-1, "ui_units_y", 3, 0, 0, 0, 0, "Units Y",
	"Fixed size along the Y for items in this (sub)layout",
	0, "*",
	PROP_FLOAT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_ui_units_y_get, UILayout_ui_units_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static const EnumPropertyItem rna_UILayout_emboss_items[6] = {
	{0, "NORMAL", 0, "Regular", "Draw standard button emboss style"},
	{1, "NONE", 0, "None", "Draw only text and icons"},
	{2, "PULLDOWN_MENU", 0, "Pulldown Menu", "Draw pulldown menu style"},
	{3, "RADIAL_MENU", 0, "Radial Menu", "Draw radial menu style"},
	{4, "NONE_OR_STATUS", 0, "None or Status", "Draw with no emboss unless the button has a coloring status like an animation state"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_emboss = {
	{(PropertyRNA *)&rna_UILayout_use_property_split, (PropertyRNA *)&rna_UILayout_ui_units_y,
	-1, "emboss", 3, 0, 0, 0, 0, "emboss",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_emboss_get, UILayout_emboss_set, NULL, NULL, NULL, rna_UILayout_emboss_items, 5, 0
};

BoolPropertyRNA rna_UILayout_use_property_split = {
	{(PropertyRNA *)&rna_UILayout_use_property_decorate, (PropertyRNA *)&rna_UILayout_emboss,
	-1, "use_property_split", 3, 0, 0, 0, 0, "use_property_split",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_use_property_split_get, UILayout_use_property_split_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_use_property_decorate = {
	{NULL, (PropertyRNA *)&rna_UILayout_use_property_split,
	-1, "use_property_decorate", 3, 0, 0, 0, 0, "use_property_decorate",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UILayout_use_property_decorate_get, UILayout_use_property_decorate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_UILayout_row_layout = {
	{(PropertyRNA *)&rna_UILayout_row_align, NULL,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

BoolPropertyRNA rna_UILayout_row_align = {
	{(PropertyRNA *)&rna_UILayout_row_heading, (PropertyRNA *)&rna_UILayout_row_layout,
	-1, "align", 3, 0, 0, 0, 0, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UILayout_row_heading = {
	{(PropertyRNA *)&rna_UILayout_row_heading_ctxt, (PropertyRNA *)&rna_UILayout_row_align,
	-1, "heading", 262145, 0, 0, 0, 0, "Heading",
	"Label to insert into the layout for this sub-layout",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 128, ""
};

StringPropertyRNA rna_UILayout_row_heading_ctxt = {
	{(PropertyRNA *)&rna_UILayout_row_translate, (PropertyRNA *)&rna_UILayout_row_heading,
	-1, "heading_ctxt", 262145, 0, 0, 0, 0, "",
	"Override automatic translation context of the given heading",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_row_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_row_heading_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given heading, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_row_func = {
	{(FunctionRNA *)&rna_UILayout_column_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_UILayout_row_layout, (PropertyRNA *)&rna_UILayout_row_translate}},
	"row", 0, "Sub-layout. Items placed in this sublayout are placed next to each other in a row",
	UILayout_row_call,
	(PropertyRNA *)&rna_UILayout_row_layout
};

PointerPropertyRNA rna_UILayout_column_layout = {
	{(PropertyRNA *)&rna_UILayout_column_align, NULL,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

BoolPropertyRNA rna_UILayout_column_align = {
	{(PropertyRNA *)&rna_UILayout_column_heading, (PropertyRNA *)&rna_UILayout_column_layout,
	-1, "align", 3, 0, 0, 0, 0, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UILayout_column_heading = {
	{(PropertyRNA *)&rna_UILayout_column_heading_ctxt, (PropertyRNA *)&rna_UILayout_column_align,
	-1, "heading", 262145, 0, 0, 0, 0, "Heading",
	"Label to insert into the layout for this sub-layout",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 128, ""
};

StringPropertyRNA rna_UILayout_column_heading_ctxt = {
	{(PropertyRNA *)&rna_UILayout_column_translate, (PropertyRNA *)&rna_UILayout_column_heading,
	-1, "heading_ctxt", 262145, 0, 0, 0, 0, "",
	"Override automatic translation context of the given heading",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_column_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_column_heading_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given heading, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_column_func = {
	{(FunctionRNA *)&rna_UILayout_column_flow_func, (FunctionRNA *)&rna_UILayout_row_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_column_layout, (PropertyRNA *)&rna_UILayout_column_translate}},
	"column", 0, "Sub-layout. Items placed in this sublayout are placed under each other in a column",
	UILayout_column_call,
	(PropertyRNA *)&rna_UILayout_column_layout
};

IntPropertyRNA rna_UILayout_column_flow_columns = {
	{(PropertyRNA *)&rna_UILayout_column_flow_layout, NULL,
	-1, "columns", 3, 0, 0, 0, 0, "",
	"Number of columns, 0 is automatic",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_column_flow_layout = {
	{(PropertyRNA *)&rna_UILayout_column_flow_align, (PropertyRNA *)&rna_UILayout_column_flow_columns,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

BoolPropertyRNA rna_UILayout_column_flow_align = {
	{NULL, (PropertyRNA *)&rna_UILayout_column_flow_layout,
	-1, "align", 3, 0, 0, 0, 0, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_column_flow_func = {
	{(FunctionRNA *)&rna_UILayout_grid_flow_func, (FunctionRNA *)&rna_UILayout_column_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_column_flow_columns, (PropertyRNA *)&rna_UILayout_column_flow_align}},
	"column_flow", 0, "column_flow",
	UILayout_column_flow_call,
	(PropertyRNA *)&rna_UILayout_column_flow_layout
};

BoolPropertyRNA rna_UILayout_grid_flow_row_major = {
	{(PropertyRNA *)&rna_UILayout_grid_flow_columns, NULL,
	-1, "row_major", 3, 0, 0, 0, 0, "",
	"Fill row by row, instead of column by column",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UILayout_grid_flow_columns = {
	{(PropertyRNA *)&rna_UILayout_grid_flow_even_columns, (PropertyRNA *)&rna_UILayout_grid_flow_row_major,
	-1, "columns", 3, 0, 0, 0, 0, "",
	"Number of columns, positive are absolute fixed numbers, 0 is automatic, negative are automatic multiple numbers along major axis (e.g. -2 will only produce 2, 4, 6 etc. columns for row major layout, and 2, 4, 6 etc. rows for column major layout)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_UILayout_grid_flow_even_columns = {
	{(PropertyRNA *)&rna_UILayout_grid_flow_even_rows, (PropertyRNA *)&rna_UILayout_grid_flow_columns,
	-1, "even_columns", 3, 0, 0, 0, 0, "",
	"All columns will have the same width",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_grid_flow_even_rows = {
	{(PropertyRNA *)&rna_UILayout_grid_flow_align, (PropertyRNA *)&rna_UILayout_grid_flow_even_columns,
	-1, "even_rows", 3, 0, 0, 0, 0, "",
	"All rows will have the same height",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_grid_flow_align = {
	{(PropertyRNA *)&rna_UILayout_grid_flow_layout, (PropertyRNA *)&rna_UILayout_grid_flow_even_rows,
	-1, "align", 3, 0, 0, 0, 0, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_UILayout_grid_flow_layout = {
	{NULL, (PropertyRNA *)&rna_UILayout_grid_flow_align,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_grid_flow_func = {
	{(FunctionRNA *)&rna_UILayout_box_func, (FunctionRNA *)&rna_UILayout_column_flow_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_grid_flow_row_major, (PropertyRNA *)&rna_UILayout_grid_flow_layout}},
	"grid_flow", 0, "grid_flow",
	UILayout_grid_flow_call,
	(PropertyRNA *)&rna_UILayout_grid_flow_layout
};

PointerPropertyRNA rna_UILayout_box_layout = {
	{NULL, NULL,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_box_func = {
	{(FunctionRNA *)&rna_UILayout_split_func, (FunctionRNA *)&rna_UILayout_grid_flow_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_box_layout, (PropertyRNA *)&rna_UILayout_box_layout}},
	"box", 0, "Sublayout (items placed in this sublayout are placed under each other in a column and are surrounded by a box)",
	UILayout_box_call,
	(PropertyRNA *)&rna_UILayout_box_layout
};

PointerPropertyRNA rna_UILayout_split_layout = {
	{(PropertyRNA *)&rna_UILayout_split_factor, NULL,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FloatPropertyRNA rna_UILayout_split_factor = {
	{(PropertyRNA *)&rna_UILayout_split_align, (PropertyRNA *)&rna_UILayout_split_layout,
	-1, "factor", 3, 0, 0, 0, 0, "Percentage",
	"Percentage of width to split at (leave unset for automatic calculation)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_UILayout_split_align = {
	{NULL, (PropertyRNA *)&rna_UILayout_split_factor,
	-1, "align", 3, 0, 0, 0, 0, "",
	"Align buttons to each other",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_split_func = {
	{(FunctionRNA *)&rna_UILayout_menu_pie_func, (FunctionRNA *)&rna_UILayout_box_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_split_layout, (PropertyRNA *)&rna_UILayout_split_align}},
	"split", 0, "split",
	UILayout_split_call,
	(PropertyRNA *)&rna_UILayout_split_layout
};

PointerPropertyRNA rna_UILayout_menu_pie_layout = {
	{NULL, NULL,
	-1, "layout", 8388608, 0, 2, 0, 0, "",
	"Sub-layout to put items in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UILayout_menu_pie_func = {
	{(FunctionRNA *)&rna_UILayout_icon_func, (FunctionRNA *)&rna_UILayout_split_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_menu_pie_layout, (PropertyRNA *)&rna_UILayout_menu_pie_layout}},
	"menu_pie", 0, "Sublayout. Items placed in this sublayout are placed in a radial fashion around the menu center)",
	UILayout_menu_pie_call,
	(PropertyRNA *)&rna_UILayout_menu_pie_layout
};

IntPropertyRNA rna_UILayout_icon_icon_value = {
	{(PropertyRNA *)&rna_UILayout_icon_data, NULL,
	-1, "icon_value", 3, 0, 2, 0, 0, "",
	"Icon identifier",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_icon_data = {
	{NULL, (PropertyRNA *)&rna_UILayout_icon_icon_value,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take the icon",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_UILayout_icon_func = {
	{(FunctionRNA *)&rna_UILayout_enum_item_name_func, (FunctionRNA *)&rna_UILayout_menu_pie_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_icon_icon_value, (PropertyRNA *)&rna_UILayout_icon_data}},
	"icon", 9, "Return the custom icon for this data, use it e.g. to get materials or texture icons",
	UILayout_icon_call,
	(PropertyRNA *)&rna_UILayout_icon_icon_value
};

StringPropertyRNA rna_UILayout_enum_item_name_name = {
	{(PropertyRNA *)&rna_UILayout_enum_item_name_data, NULL,
	-1, "name", 262145, 0, 2, 0, 0, "",
	"UI name of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_enum_item_name_data = {
	{(PropertyRNA *)&rna_UILayout_enum_item_name_property, (PropertyRNA *)&rna_UILayout_enum_item_name_name,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_enum_item_name_property = {
	{(PropertyRNA *)&rna_UILayout_enum_item_name_identifier, (PropertyRNA *)&rna_UILayout_enum_item_name_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_enum_item_name_identifier = {
	{NULL, (PropertyRNA *)&rna_UILayout_enum_item_name_property,
	-1, "identifier", 262145, 0, 1, 0, 0, "",
	"Identifier of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_enum_item_name_func = {
	{(FunctionRNA *)&rna_UILayout_enum_item_description_func, (FunctionRNA *)&rna_UILayout_icon_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_enum_item_name_name, (PropertyRNA *)&rna_UILayout_enum_item_name_identifier}},
	"enum_item_name", 9, "Return the UI name for this enum item",
	UILayout_enum_item_name_call,
	(PropertyRNA *)&rna_UILayout_enum_item_name_name
};

StringPropertyRNA rna_UILayout_enum_item_description_description = {
	{(PropertyRNA *)&rna_UILayout_enum_item_description_data, NULL,
	-1, "description", 262145, 0, 2, 0, 0, "",
	"UI description of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_enum_item_description_data = {
	{(PropertyRNA *)&rna_UILayout_enum_item_description_property, (PropertyRNA *)&rna_UILayout_enum_item_description_description,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_enum_item_description_property = {
	{(PropertyRNA *)&rna_UILayout_enum_item_description_identifier, (PropertyRNA *)&rna_UILayout_enum_item_description_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_enum_item_description_identifier = {
	{NULL, (PropertyRNA *)&rna_UILayout_enum_item_description_property,
	-1, "identifier", 262145, 0, 1, 0, 0, "",
	"Identifier of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_enum_item_description_func = {
	{(FunctionRNA *)&rna_UILayout_enum_item_icon_func, (FunctionRNA *)&rna_UILayout_enum_item_name_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_enum_item_description_description, (PropertyRNA *)&rna_UILayout_enum_item_description_identifier}},
	"enum_item_description", 9, "Return the UI description for this enum item",
	UILayout_enum_item_description_call,
	(PropertyRNA *)&rna_UILayout_enum_item_description_description
};

IntPropertyRNA rna_UILayout_enum_item_icon_icon_value = {
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_data, NULL,
	-1, "icon_value", 3, 0, 2, 0, 0, "",
	"Icon identifier",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_enum_item_icon_data = {
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_property, (PropertyRNA *)&rna_UILayout_enum_item_icon_icon_value,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_enum_item_icon_property = {
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_identifier, (PropertyRNA *)&rna_UILayout_enum_item_icon_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_enum_item_icon_identifier = {
	{NULL, (PropertyRNA *)&rna_UILayout_enum_item_icon_property,
	-1, "identifier", 262145, 0, 1, 0, 0, "",
	"Identifier of the enum item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_enum_item_icon_func = {
	{(FunctionRNA *)&rna_UILayout_prop_func, (FunctionRNA *)&rna_UILayout_enum_item_description_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_enum_item_icon_icon_value, (PropertyRNA *)&rna_UILayout_enum_item_icon_identifier}},
	"enum_item_icon", 9, "Return the icon for this enum item",
	UILayout_enum_item_icon_call,
	(PropertyRNA *)&rna_UILayout_enum_item_icon_icon_value
};

PointerPropertyRNA rna_UILayout_prop_data = {
	{(PropertyRNA *)&rna_UILayout_prop_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_property = {
	{(PropertyRNA *)&rna_UILayout_prop_text, (PropertyRNA *)&rna_UILayout_prop_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_text = {
	{(PropertyRNA *)&rna_UILayout_prop_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_translate, (PropertyRNA *)&rna_UILayout_prop_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_icon, (PropertyRNA *)&rna_UILayout_prop_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_prop_icon = {
	{(PropertyRNA *)&rna_UILayout_prop_expand, (PropertyRNA *)&rna_UILayout_prop_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

BoolPropertyRNA rna_UILayout_prop_expand = {
	{(PropertyRNA *)&rna_UILayout_prop_slider, (PropertyRNA *)&rna_UILayout_prop_icon,
	-1, "expand", 3, 0, 0, 0, 0, "",
	"Expand button to show more detail",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_slider = {
	{(PropertyRNA *)&rna_UILayout_prop_toggle, (PropertyRNA *)&rna_UILayout_prop_expand,
	-1, "slider", 3, 0, 0, 0, 0, "",
	"Use slider widget for numeric values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UILayout_prop_toggle = {
	{(PropertyRNA *)&rna_UILayout_prop_icon_only, (PropertyRNA *)&rna_UILayout_prop_slider,
	-1, "toggle", 3, 0, 0, 0, 0, "",
	"Use toggle widget for boolean values, or a checkbox when disabled (the default is -1 which uses toggle only when an icon is displayed)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -1, 1, -1, 1, 1, -1, NULL
};

BoolPropertyRNA rna_UILayout_prop_icon_only = {
	{(PropertyRNA *)&rna_UILayout_prop_event, (PropertyRNA *)&rna_UILayout_prop_toggle,
	-1, "icon_only", 3, 0, 0, 0, 0, "",
	"Draw only icons in buttons, no text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_event = {
	{(PropertyRNA *)&rna_UILayout_prop_full_event, (PropertyRNA *)&rna_UILayout_prop_icon_only,
	-1, "event", 3, 0, 0, 0, 0, "",
	"Use button to input key events",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_full_event = {
	{(PropertyRNA *)&rna_UILayout_prop_emboss, (PropertyRNA *)&rna_UILayout_prop_event,
	-1, "full_event", 3, 0, 0, 0, 0, "",
	"Use button to input full events including modifiers",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_emboss = {
	{(PropertyRNA *)&rna_UILayout_prop_index, (PropertyRNA *)&rna_UILayout_prop_full_event,
	-1, "emboss", 3, 0, 0, 0, 0, "",
	"Draw the button itself, not just the icon/text. When false, corresponds to the \'NONE_OR_STATUS\' layout emboss type",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

IntPropertyRNA rna_UILayout_prop_index = {
	{(PropertyRNA *)&rna_UILayout_prop_icon_value, (PropertyRNA *)&rna_UILayout_prop_emboss,
	-1, "index", 3, 0, 0, 0, 0, "",
	"The index of this button, when set a single member of an array can be accessed, when set to -1 all array members are used",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -2, INT_MAX, -2, INT_MAX, 1, -1, NULL
};

IntPropertyRNA rna_UILayout_prop_icon_value = {
	{(PropertyRNA *)&rna_UILayout_prop_invert_checkbox, (PropertyRNA *)&rna_UILayout_prop_index,
	-1, "icon_value", 3, 0, 0, 0, 0, "Icon Value",
	"Override automatic icon of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_UILayout_prop_invert_checkbox = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_icon_value,
	-1, "invert_checkbox", 3, 0, 0, 0, 0, "",
	"Draw checkbox value inverted",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_prop_func = {
	{(FunctionRNA *)&rna_UILayout_props_enum_func, (FunctionRNA *)&rna_UILayout_enum_item_icon_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_data, (PropertyRNA *)&rna_UILayout_prop_invert_checkbox}},
	"prop", 0, "Item. Exposes an RNA item and places it into the layout",
	UILayout_prop_call,
	NULL
};

PointerPropertyRNA rna_UILayout_props_enum_data = {
	{(PropertyRNA *)&rna_UILayout_props_enum_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_props_enum_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_props_enum_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_props_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_menu_enum_func, (FunctionRNA *)&rna_UILayout_prop_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_props_enum_data, (PropertyRNA *)&rna_UILayout_props_enum_property}},
	"props_enum", 0, "props_enum",
	UILayout_props_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_menu_enum_data = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_menu_enum_property = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_text, (PropertyRNA *)&rna_UILayout_prop_menu_enum_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_menu_enum_text = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_menu_enum_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_menu_enum_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_translate, (PropertyRNA *)&rna_UILayout_prop_menu_enum_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_menu_enum_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_icon, (PropertyRNA *)&rna_UILayout_prop_menu_enum_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_prop_menu_enum_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_menu_enum_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

FunctionRNA rna_UILayout_prop_menu_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_with_popover_func, (FunctionRNA *)&rna_UILayout_props_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_menu_enum_data, (PropertyRNA *)&rna_UILayout_prop_menu_enum_icon}},
	"prop_menu_enum", 0, "prop_menu_enum",
	UILayout_prop_menu_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_with_popover_data = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_with_popover_property = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_text, (PropertyRNA *)&rna_UILayout_prop_with_popover_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_with_popover_text = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_with_popover_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_with_popover_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_translate, (PropertyRNA *)&rna_UILayout_prop_with_popover_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_with_popover_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_icon, (PropertyRNA *)&rna_UILayout_prop_with_popover_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_prop_with_popover_icon = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_icon_only, (PropertyRNA *)&rna_UILayout_prop_with_popover_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

BoolPropertyRNA rna_UILayout_prop_with_popover_icon_only = {
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_panel, (PropertyRNA *)&rna_UILayout_prop_with_popover_icon,
	-1, "icon_only", 3, 0, 0, 0, 0, "",
	"Draw only icons in tabs, no text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UILayout_prop_with_popover_panel = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_with_popover_icon_only,
	-1, "panel", 262145, 0, 1, 0, 0, "",
	"Identifier of the panel",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_prop_with_popover_func = {
	{(FunctionRNA *)&rna_UILayout_prop_with_menu_func, (FunctionRNA *)&rna_UILayout_prop_menu_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_with_popover_data, (PropertyRNA *)&rna_UILayout_prop_with_popover_panel}},
	"prop_with_popover", 0, "prop_with_popover",
	UILayout_prop_with_popover_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_with_menu_data = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_with_menu_property = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_text, (PropertyRNA *)&rna_UILayout_prop_with_menu_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_with_menu_text = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_with_menu_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_with_menu_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_translate, (PropertyRNA *)&rna_UILayout_prop_with_menu_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_with_menu_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_icon, (PropertyRNA *)&rna_UILayout_prop_with_menu_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_prop_with_menu_icon = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_icon_only, (PropertyRNA *)&rna_UILayout_prop_with_menu_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

BoolPropertyRNA rna_UILayout_prop_with_menu_icon_only = {
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_menu, (PropertyRNA *)&rna_UILayout_prop_with_menu_icon,
	-1, "icon_only", 3, 0, 0, 0, 0, "",
	"Draw only icons in tabs, no text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UILayout_prop_with_menu_menu = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_with_menu_icon_only,
	-1, "menu", 262145, 0, 1, 0, 0, "",
	"Identifier of the menu",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_prop_with_menu_func = {
	{(FunctionRNA *)&rna_UILayout_prop_tabs_enum_func, (FunctionRNA *)&rna_UILayout_prop_with_popover_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_with_menu_data, (PropertyRNA *)&rna_UILayout_prop_with_menu_menu}},
	"prop_with_menu", 0, "prop_with_menu",
	UILayout_prop_with_menu_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_tabs_enum_data = {
	{(PropertyRNA *)&rna_UILayout_prop_tabs_enum_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_tabs_enum_property = {
	{(PropertyRNA *)&rna_UILayout_prop_tabs_enum_data_highlight, (PropertyRNA *)&rna_UILayout_prop_tabs_enum_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_prop_tabs_enum_data_highlight = {
	{(PropertyRNA *)&rna_UILayout_prop_tabs_enum_property_highlight, (PropertyRNA *)&rna_UILayout_prop_tabs_enum_property,
	-1, "data_highlight", 8650752, 0, 4, 0, 0, "",
	"Data from which to take highlight property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_tabs_enum_property_highlight = {
	{(PropertyRNA *)&rna_UILayout_prop_tabs_enum_icon_only, (PropertyRNA *)&rna_UILayout_prop_tabs_enum_data_highlight,
	-1, "property_highlight", 262145, 0, 0, 0, 0, "",
	"Identifier of highlight property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_tabs_enum_icon_only = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_tabs_enum_property_highlight,
	-1, "icon_only", 3, 0, 0, 0, 0, "",
	"Draw only icons in tabs, no text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_prop_tabs_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_enum_func, (FunctionRNA *)&rna_UILayout_prop_with_menu_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_tabs_enum_data, (PropertyRNA *)&rna_UILayout_prop_tabs_enum_icon_only}},
	"prop_tabs_enum", 8, "prop_tabs_enum",
	UILayout_prop_tabs_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_enum_data = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_enum_property = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_value, (PropertyRNA *)&rna_UILayout_prop_enum_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_enum_value = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_text, (PropertyRNA *)&rna_UILayout_prop_enum_property,
	-1, "value", 262145, 0, 1, 0, 0, "",
	"Enum property value",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_enum_text = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_enum_value,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_enum_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_translate, (PropertyRNA *)&rna_UILayout_prop_enum_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_enum_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_enum_icon, (PropertyRNA *)&rna_UILayout_prop_enum_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_prop_enum_icon = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_enum_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

FunctionRNA rna_UILayout_prop_enum_func = {
	{(FunctionRNA *)&rna_UILayout_prop_search_func, (FunctionRNA *)&rna_UILayout_prop_tabs_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_enum_data, (PropertyRNA *)&rna_UILayout_prop_enum_icon}},
	"prop_enum", 0, "prop_enum",
	UILayout_prop_enum_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_search_data = {
	{(PropertyRNA *)&rna_UILayout_prop_search_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_search_property = {
	{(PropertyRNA *)&rna_UILayout_prop_search_search_data, (PropertyRNA *)&rna_UILayout_prop_search_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_prop_search_search_data = {
	{(PropertyRNA *)&rna_UILayout_prop_search_search_property, (PropertyRNA *)&rna_UILayout_prop_search_property,
	-1, "search_data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take collection to search in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_search_search_property = {
	{(PropertyRNA *)&rna_UILayout_prop_search_text, (PropertyRNA *)&rna_UILayout_prop_search_search_data,
	-1, "search_property", 262145, 0, 1, 0, 0, "",
	"Identifier of search collection property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_search_text = {
	{(PropertyRNA *)&rna_UILayout_prop_search_text_ctxt, (PropertyRNA *)&rna_UILayout_prop_search_search_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_prop_search_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_prop_search_translate, (PropertyRNA *)&rna_UILayout_prop_search_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_prop_search_translate = {
	{(PropertyRNA *)&rna_UILayout_prop_search_icon, (PropertyRNA *)&rna_UILayout_prop_search_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_prop_search_icon = {
	{(PropertyRNA *)&rna_UILayout_prop_search_results_are_suggestions, (PropertyRNA *)&rna_UILayout_prop_search_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

BoolPropertyRNA rna_UILayout_prop_search_results_are_suggestions = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_search_icon,
	-1, "results_are_suggestions", 3, 0, 0, 0, 0, "",
	"Accept inputs that do not match any item",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_prop_search_func = {
	{(FunctionRNA *)&rna_UILayout_prop_decorator_func, (FunctionRNA *)&rna_UILayout_prop_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_search_data, (PropertyRNA *)&rna_UILayout_prop_search_results_are_suggestions}},
	"prop_search", 0, "prop_search",
	UILayout_prop_search_call,
	NULL
};

PointerPropertyRNA rna_UILayout_prop_decorator_data = {
	{(PropertyRNA *)&rna_UILayout_prop_decorator_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_prop_decorator_property = {
	{(PropertyRNA *)&rna_UILayout_prop_decorator_index, (PropertyRNA *)&rna_UILayout_prop_decorator_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UILayout_prop_decorator_index = {
	{NULL, (PropertyRNA *)&rna_UILayout_prop_decorator_property,
	-1, "index", 3, 0, 0, 0, 0, "",
	"The index of this button, when set a single member of an array can be accessed, when set to -1 all array members are used",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, -2, INT_MAX, -2, INT_MAX, 1, -1, NULL
};

FunctionRNA rna_UILayout_prop_decorator_func = {
	{(FunctionRNA *)&rna_UILayout_operator_func, (FunctionRNA *)&rna_UILayout_prop_search_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_prop_decorator_data, (PropertyRNA *)&rna_UILayout_prop_decorator_index}},
	"prop_decorator", 0, "prop_decorator",
	UILayout_prop_decorator_call,
	NULL
};

StringPropertyRNA rna_UILayout_operator_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_text, NULL,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_text = {
	{(PropertyRNA *)&rna_UILayout_operator_text_ctxt, (PropertyRNA *)&rna_UILayout_operator_operator,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_operator_translate, (PropertyRNA *)&rna_UILayout_operator_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_operator_translate = {
	{(PropertyRNA *)&rna_UILayout_operator_icon, (PropertyRNA *)&rna_UILayout_operator_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_operator_icon = {
	{(PropertyRNA *)&rna_UILayout_operator_emboss, (PropertyRNA *)&rna_UILayout_operator_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

BoolPropertyRNA rna_UILayout_operator_emboss = {
	{(PropertyRNA *)&rna_UILayout_operator_depress, (PropertyRNA *)&rna_UILayout_operator_icon,
	-1, "emboss", 3, 0, 0, 0, 0, "",
	"Draw the button itself, not just the icon/text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_UILayout_operator_depress = {
	{(PropertyRNA *)&rna_UILayout_operator_icon_value, (PropertyRNA *)&rna_UILayout_operator_emboss,
	-1, "depress", 3, 0, 0, 0, 0, "",
	"Draw pressed in",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UILayout_operator_icon_value = {
	{(PropertyRNA *)&rna_UILayout_operator_properties, (PropertyRNA *)&rna_UILayout_operator_depress,
	-1, "icon_value", 3, 0, 0, 0, 0, "Icon Value",
	"Override automatic icon of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UILayout_operator_properties = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_icon_value,
	-1, "properties", 8388608, 0, 7, 0, 0, "",
	"Operator properties to fill in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_UILayout_operator_func = {
	{(FunctionRNA *)&rna_UILayout_operator_menu_hold_func, (FunctionRNA *)&rna_UILayout_prop_decorator_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_operator, (PropertyRNA *)&rna_UILayout_operator_properties}},
	"operator", 0, "Item. Places a button into the layout to call an Operator",
	UILayout_operator_call,
	(PropertyRNA *)&rna_UILayout_operator_properties
};

StringPropertyRNA rna_UILayout_operator_menu_hold_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_text, NULL,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_hold_text = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_text_ctxt, (PropertyRNA *)&rna_UILayout_operator_menu_hold_operator,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_hold_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_translate, (PropertyRNA *)&rna_UILayout_operator_menu_hold_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_operator_menu_hold_translate = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_icon, (PropertyRNA *)&rna_UILayout_operator_menu_hold_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_operator_menu_hold_icon = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_emboss, (PropertyRNA *)&rna_UILayout_operator_menu_hold_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

BoolPropertyRNA rna_UILayout_operator_menu_hold_emboss = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_depress, (PropertyRNA *)&rna_UILayout_operator_menu_hold_icon,
	-1, "emboss", 3, 0, 0, 0, 0, "",
	"Draw the button itself, not just the icon/text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

BoolPropertyRNA rna_UILayout_operator_menu_hold_depress = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_icon_value, (PropertyRNA *)&rna_UILayout_operator_menu_hold_emboss,
	-1, "depress", 3, 0, 0, 0, 0, "",
	"Draw pressed in",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UILayout_operator_menu_hold_icon_value = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_menu, (PropertyRNA *)&rna_UILayout_operator_menu_hold_depress,
	-1, "icon_value", 3, 0, 0, 0, 0, "Icon Value",
	"Override automatic icon of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_UILayout_operator_menu_hold_menu = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_properties, (PropertyRNA *)&rna_UILayout_operator_menu_hold_icon_value,
	-1, "menu", 262145, 0, 1, 0, 0, "",
	"Identifier of the menu",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_operator_menu_hold_properties = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_menu_hold_menu,
	-1, "properties", 8388608, 0, 7, 0, 0, "",
	"Operator properties to fill in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_UILayout_operator_menu_hold_func = {
	{(FunctionRNA *)&rna_UILayout_operator_enum_func, (FunctionRNA *)&rna_UILayout_operator_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_menu_hold_operator, (PropertyRNA *)&rna_UILayout_operator_menu_hold_properties}},
	"operator_menu_hold", 0, "Item. Places a button into the layout to call an Operator",
	UILayout_operator_menu_hold_call,
	(PropertyRNA *)&rna_UILayout_operator_menu_hold_properties
};

StringPropertyRNA rna_UILayout_operator_enum_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_enum_property, NULL,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_enum_property = {
	{(PropertyRNA *)&rna_UILayout_operator_enum_icon_only, (PropertyRNA *)&rna_UILayout_operator_enum_operator,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_operator_enum_icon_only = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_enum_property,
	-1, "icon_only", 3, 0, 0, 0, 0, "",
	"Draw only icons in buttons, no text",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_operator_enum_func = {
	{(FunctionRNA *)&rna_UILayout_operator_menu_enum_func, (FunctionRNA *)&rna_UILayout_operator_menu_hold_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_enum_operator, (PropertyRNA *)&rna_UILayout_operator_enum_icon_only}},
	"operator_enum", 0, "operator_enum",
	UILayout_operator_enum_call,
	NULL
};

StringPropertyRNA rna_UILayout_operator_menu_enum_operator = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_property, NULL,
	-1, "operator", 262145, 0, 1, 0, 0, "",
	"Identifier of the operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_enum_property = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_text, (PropertyRNA *)&rna_UILayout_operator_menu_enum_operator,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in operator",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_enum_text = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_text_ctxt, (PropertyRNA *)&rna_UILayout_operator_menu_enum_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_operator_menu_enum_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_translate, (PropertyRNA *)&rna_UILayout_operator_menu_enum_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_operator_menu_enum_translate = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_icon, (PropertyRNA *)&rna_UILayout_operator_menu_enum_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_operator_menu_enum_icon = {
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_properties, (PropertyRNA *)&rna_UILayout_operator_menu_enum_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

PointerPropertyRNA rna_UILayout_operator_menu_enum_properties = {
	{NULL, (PropertyRNA *)&rna_UILayout_operator_menu_enum_icon,
	-1, "properties", 8388608, 0, 7, 0, 0, "",
	"Operator properties to fill in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_UILayout_operator_menu_enum_func = {
	{(FunctionRNA *)&rna_UILayout_label_func, (FunctionRNA *)&rna_UILayout_operator_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_operator_menu_enum_operator, (PropertyRNA *)&rna_UILayout_operator_menu_enum_properties}},
	"operator_menu_enum", 8, "operator_menu_enum",
	UILayout_operator_menu_enum_call,
	(PropertyRNA *)&rna_UILayout_operator_menu_enum_properties
};

StringPropertyRNA rna_UILayout_label_text = {
	{(PropertyRNA *)&rna_UILayout_label_text_ctxt, NULL,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_label_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_label_translate, (PropertyRNA *)&rna_UILayout_label_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_label_translate = {
	{(PropertyRNA *)&rna_UILayout_label_icon, (PropertyRNA *)&rna_UILayout_label_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_label_icon = {
	{(PropertyRNA *)&rna_UILayout_label_icon_value, (PropertyRNA *)&rna_UILayout_label_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

IntPropertyRNA rna_UILayout_label_icon_value = {
	{NULL, (PropertyRNA *)&rna_UILayout_label_icon,
	-1, "icon_value", 3, 0, 0, 0, 0, "Icon Value",
	"Override automatic icon of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_label_func = {
	{(FunctionRNA *)&rna_UILayout_menu_func, (FunctionRNA *)&rna_UILayout_operator_menu_enum_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_label_text, (PropertyRNA *)&rna_UILayout_label_icon_value}},
	"label", 0, "Item. Displays text and/or icon in the layout",
	UILayout_label_call,
	NULL
};

StringPropertyRNA rna_UILayout_menu_menu = {
	{(PropertyRNA *)&rna_UILayout_menu_text, NULL,
	-1, "menu", 262145, 0, 1, 0, 0, "",
	"Identifier of the menu",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_menu_text = {
	{(PropertyRNA *)&rna_UILayout_menu_text_ctxt, (PropertyRNA *)&rna_UILayout_menu_menu,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_menu_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_menu_translate, (PropertyRNA *)&rna_UILayout_menu_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_menu_translate = {
	{(PropertyRNA *)&rna_UILayout_menu_icon, (PropertyRNA *)&rna_UILayout_menu_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_menu_icon = {
	{(PropertyRNA *)&rna_UILayout_menu_icon_value, (PropertyRNA *)&rna_UILayout_menu_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

IntPropertyRNA rna_UILayout_menu_icon_value = {
	{NULL, (PropertyRNA *)&rna_UILayout_menu_icon,
	-1, "icon_value", 3, 0, 0, 0, 0, "Icon Value",
	"Override automatic icon of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_menu_func = {
	{(FunctionRNA *)&rna_UILayout_menu_contents_func, (FunctionRNA *)&rna_UILayout_label_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_menu_menu, (PropertyRNA *)&rna_UILayout_menu_icon_value}},
	"menu", 0, "menu",
	UILayout_menu_call,
	NULL
};

StringPropertyRNA rna_UILayout_menu_contents_menu = {
	{NULL, NULL,
	-1, "menu", 262145, 0, 1, 0, 0, "",
	"Identifier of the menu",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_menu_contents_func = {
	{(FunctionRNA *)&rna_UILayout_popover_func, (FunctionRNA *)&rna_UILayout_menu_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_menu_contents_menu, (PropertyRNA *)&rna_UILayout_menu_contents_menu}},
	"menu_contents", 0, "menu_contents",
	UILayout_menu_contents_call,
	NULL
};

StringPropertyRNA rna_UILayout_popover_panel = {
	{(PropertyRNA *)&rna_UILayout_popover_text, NULL,
	-1, "panel", 262145, 0, 1, 0, 0, "",
	"Identifier of the panel",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_popover_text = {
	{(PropertyRNA *)&rna_UILayout_popover_text_ctxt, (PropertyRNA *)&rna_UILayout_popover_panel,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_popover_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_popover_translate, (PropertyRNA *)&rna_UILayout_popover_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_popover_translate = {
	{(PropertyRNA *)&rna_UILayout_popover_icon, (PropertyRNA *)&rna_UILayout_popover_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

EnumPropertyRNA rna_UILayout_popover_icon = {
	{(PropertyRNA *)&rna_UILayout_popover_icon_value, (PropertyRNA *)&rna_UILayout_popover_translate,
	-1, "icon", 3, 0, 0, 0, 0, "Icon",
	"Override automatic icon of the item",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_icon_items, 833, 0
};

IntPropertyRNA rna_UILayout_popover_icon_value = {
	{NULL, (PropertyRNA *)&rna_UILayout_popover_icon,
	-1, "icon_value", 3, 0, 0, 0, 0, "Icon Value",
	"Override automatic icon of the item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_popover_func = {
	{(FunctionRNA *)&rna_UILayout_popover_group_func, (FunctionRNA *)&rna_UILayout_menu_contents_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_popover_panel, (PropertyRNA *)&rna_UILayout_popover_icon_value}},
	"popover", 8, "popover",
	UILayout_popover_call,
	NULL
};

EnumPropertyRNA rna_UILayout_popover_group_space_type = {
	{(PropertyRNA *)&rna_UILayout_popover_group_region_type, NULL,
	-1, "space_type", 3, 0, 1, 0, 0, "Space Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_UILayout_popover_group_region_type = {
	{(PropertyRNA *)&rna_UILayout_popover_group_context, (PropertyRNA *)&rna_UILayout_popover_group_space_type,
	-1, "region_type", 3, 0, 1, 0, 0, "Region Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_region_type_items, 14, 0
};

StringPropertyRNA rna_UILayout_popover_group_context = {
	{(PropertyRNA *)&rna_UILayout_popover_group_category, (PropertyRNA *)&rna_UILayout_popover_group_region_type,
	-1, "context", 262145, 0, 1, 0, 0, "",
	"panel type context",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_popover_group_category = {
	{NULL, (PropertyRNA *)&rna_UILayout_popover_group_context,
	-1, "category", 262145, 0, 1, 0, 0, "",
	"panel type category",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_popover_group_func = {
	{(FunctionRNA *)&rna_UILayout_separator_func, (FunctionRNA *)&rna_UILayout_popover_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_popover_group_space_type, (PropertyRNA *)&rna_UILayout_popover_group_category}},
	"popover_group", 8, "popover_group",
	UILayout_popover_group_call,
	NULL
};

FloatPropertyRNA rna_UILayout_separator_factor = {
	{NULL, NULL,
	-1, "factor", 3, 0, 0, 0, 0, "Percentage",
	"Percentage of width to space (leave unset for default space)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FunctionRNA rna_UILayout_separator_func = {
	{(FunctionRNA *)&rna_UILayout_separator_spacer_func, (FunctionRNA *)&rna_UILayout_popover_group_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_separator_factor, (PropertyRNA *)&rna_UILayout_separator_factor}},
	"separator", 0, "Item. Inserts empty space into the layout between items",
	UILayout_separator_call,
	NULL
};

FunctionRNA rna_UILayout_separator_spacer_func = {
	{(FunctionRNA *)&rna_UILayout_context_pointer_set_func, (FunctionRNA *)&rna_UILayout_separator_func,
	NULL,
	{NULL, NULL}},
	"separator_spacer", 0, "Item. Inserts horizontal spacing empty space into the layout between items",
	UILayout_separator_spacer_call,
	NULL
};

StringPropertyRNA rna_UILayout_context_pointer_set_name = {
	{(PropertyRNA *)&rna_UILayout_context_pointer_set_data, NULL,
	-1, "name", 262145, 0, 1, 0, 0, "Name",
	"Name of entry in the context",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_context_pointer_set_data = {
	{NULL, (PropertyRNA *)&rna_UILayout_context_pointer_set_name,
	-1, "data", 8388608, 0, 5, 0, 0, "",
	"Pointer to put in context",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

FunctionRNA rna_UILayout_context_pointer_set_func = {
	{(FunctionRNA *)&rna_UILayout_template_header_func, (FunctionRNA *)&rna_UILayout_separator_spacer_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_context_pointer_set_name, (PropertyRNA *)&rna_UILayout_context_pointer_set_data}},
	"context_pointer_set", 0, "context_pointer_set",
	UILayout_context_pointer_set_call,
	NULL
};

FunctionRNA rna_UILayout_template_header_func = {
	{(FunctionRNA *)&rna_UILayout_template_ID_func, (FunctionRNA *)&rna_UILayout_context_pointer_set_func,
	NULL,
	{NULL, NULL}},
	"template_header", 8, "Inserts common Space header UI (editor type selector)",
	UILayout_template_header_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_ID_data = {
	{(PropertyRNA *)&rna_UILayout_template_ID_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_ID_property = {
	{(PropertyRNA *)&rna_UILayout_template_ID_new, (PropertyRNA *)&rna_UILayout_template_ID_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_new = {
	{(PropertyRNA *)&rna_UILayout_template_ID_open, (PropertyRNA *)&rna_UILayout_template_ID_property,
	-1, "new", 262145, 0, 0, 0, 0, "",
	"Operator identifier to create a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_open = {
	{(PropertyRNA *)&rna_UILayout_template_ID_unlink, (PropertyRNA *)&rna_UILayout_template_ID_new,
	-1, "open", 262145, 0, 0, 0, 0, "",
	"Operator identifier to open a file for creating a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_unlink = {
	{(PropertyRNA *)&rna_UILayout_template_ID_filter, (PropertyRNA *)&rna_UILayout_template_ID_open,
	-1, "unlink", 262145, 0, 0, 0, 0, "",
	"Operator identifier to unlink the ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

static const EnumPropertyItem rna_UILayout_template_ID_filter_items[3] = {
	{0, "ALL", 0, "All", ""},
	{1, "AVAILABLE", 0, "Available", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_ID_filter = {
	{(PropertyRNA *)&rna_UILayout_template_ID_live_icon, (PropertyRNA *)&rna_UILayout_template_ID_unlink,
	-1, "filter", 3, 0, 0, 0, 0, "",
	"Optionally limit the items which can be selected",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_ID_filter_items, 2, 0
};

BoolPropertyRNA rna_UILayout_template_ID_live_icon = {
	{(PropertyRNA *)&rna_UILayout_template_ID_text, (PropertyRNA *)&rna_UILayout_template_ID_filter,
	-1, "live_icon", 3, 0, 0, 0, 0, "",
	"Show preview instead of fixed icon",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UILayout_template_ID_text = {
	{(PropertyRNA *)&rna_UILayout_template_ID_text_ctxt, (PropertyRNA *)&rna_UILayout_template_ID_live_icon,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_template_ID_translate, (PropertyRNA *)&rna_UILayout_template_ID_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_ID_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_ID_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_ID_func = {
	{(FunctionRNA *)&rna_UILayout_template_ID_preview_func, (FunctionRNA *)&rna_UILayout_template_header_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_ID_data, (PropertyRNA *)&rna_UILayout_template_ID_translate}},
	"template_ID", 8, "template_ID",
	UILayout_template_ID_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_ID_preview_data = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_ID_preview_property = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_new, (PropertyRNA *)&rna_UILayout_template_ID_preview_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_preview_new = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_open, (PropertyRNA *)&rna_UILayout_template_ID_preview_property,
	-1, "new", 262145, 0, 0, 0, 0, "",
	"Operator identifier to create a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_preview_open = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_unlink, (PropertyRNA *)&rna_UILayout_template_ID_preview_new,
	-1, "open", 262145, 0, 0, 0, 0, "",
	"Operator identifier to open a file for creating a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_preview_unlink = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_rows, (PropertyRNA *)&rna_UILayout_template_ID_preview_open,
	-1, "unlink", 262145, 0, 0, 0, 0, "",
	"Operator identifier to unlink the ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UILayout_template_ID_preview_rows = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_cols, (PropertyRNA *)&rna_UILayout_template_ID_preview_unlink,
	-1, "rows", 3, 0, 0, 0, 0, "Number of thumbnail preview rows to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_UILayout_template_ID_preview_cols = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_filter, (PropertyRNA *)&rna_UILayout_template_ID_preview_rows,
	-1, "cols", 3, 0, 0, 0, 0, "Number of thumbnail preview columns to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

static const EnumPropertyItem rna_UILayout_template_ID_preview_filter_items[3] = {
	{0, "ALL", 0, "All", ""},
	{1, "AVAILABLE", 0, "Available", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_ID_preview_filter = {
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_hide_buttons, (PropertyRNA *)&rna_UILayout_template_ID_preview_cols,
	-1, "filter", 3, 0, 0, 0, 0, "",
	"Optionally limit the items which can be selected",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_ID_preview_filter_items, 2, 0
};

BoolPropertyRNA rna_UILayout_template_ID_preview_hide_buttons = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_ID_preview_filter,
	-1, "hide_buttons", 3, 0, 0, 0, 0, "",
	"Show only list, no buttons",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_ID_preview_func = {
	{(FunctionRNA *)&rna_UILayout_template_any_ID_func, (FunctionRNA *)&rna_UILayout_template_ID_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_ID_preview_data, (PropertyRNA *)&rna_UILayout_template_ID_preview_hide_buttons}},
	"template_ID_preview", 8, "template_ID_preview",
	UILayout_template_ID_preview_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_any_ID_data = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_any_ID_property = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_type_property, (PropertyRNA *)&rna_UILayout_template_any_ID_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_any_ID_type_property = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_text, (PropertyRNA *)&rna_UILayout_template_any_ID_property,
	-1, "type_property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data giving the type of the ID-blocks to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_any_ID_text = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_text_ctxt, (PropertyRNA *)&rna_UILayout_template_any_ID_type_property,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_any_ID_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_template_any_ID_translate, (PropertyRNA *)&rna_UILayout_template_any_ID_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_any_ID_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_any_ID_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_any_ID_func = {
	{(FunctionRNA *)&rna_UILayout_template_ID_tabs_func, (FunctionRNA *)&rna_UILayout_template_ID_preview_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_any_ID_data, (PropertyRNA *)&rna_UILayout_template_any_ID_translate}},
	"template_any_ID", 0, "template_any_ID",
	UILayout_template_any_ID_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_ID_tabs_data = {
	{(PropertyRNA *)&rna_UILayout_template_ID_tabs_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_ID_tabs_property = {
	{(PropertyRNA *)&rna_UILayout_template_ID_tabs_new, (PropertyRNA *)&rna_UILayout_template_ID_tabs_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_tabs_new = {
	{(PropertyRNA *)&rna_UILayout_template_ID_tabs_menu, (PropertyRNA *)&rna_UILayout_template_ID_tabs_property,
	-1, "new", 262145, 0, 0, 0, 0, "",
	"Operator identifier to create a new ID block",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_ID_tabs_menu = {
	{(PropertyRNA *)&rna_UILayout_template_ID_tabs_filter, (PropertyRNA *)&rna_UILayout_template_ID_tabs_new,
	-1, "menu", 262145, 0, 0, 0, 0, "",
	"Context menu identifier",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

static const EnumPropertyItem rna_UILayout_template_ID_tabs_filter_items[3] = {
	{0, "ALL", 0, "All", ""},
	{1, "AVAILABLE", 0, "Available", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_ID_tabs_filter = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_ID_tabs_menu,
	-1, "filter", 3, 0, 0, 0, 0, "",
	"Optionally limit the items which can be selected",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_ID_tabs_filter_items, 2, 0
};

FunctionRNA rna_UILayout_template_ID_tabs_func = {
	{(FunctionRNA *)&rna_UILayout_template_search_func, (FunctionRNA *)&rna_UILayout_template_any_ID_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_ID_tabs_data, (PropertyRNA *)&rna_UILayout_template_ID_tabs_filter}},
	"template_ID_tabs", 8, "template_ID_tabs",
	UILayout_template_ID_tabs_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_search_data = {
	{(PropertyRNA *)&rna_UILayout_template_search_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_search_property = {
	{(PropertyRNA *)&rna_UILayout_template_search_search_data, (PropertyRNA *)&rna_UILayout_template_search_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_search_search_data = {
	{(PropertyRNA *)&rna_UILayout_template_search_search_property, (PropertyRNA *)&rna_UILayout_template_search_property,
	-1, "search_data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take collection to search in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_search_search_property = {
	{(PropertyRNA *)&rna_UILayout_template_search_new, (PropertyRNA *)&rna_UILayout_template_search_search_data,
	-1, "search_property", 262145, 0, 1, 0, 0, "",
	"Identifier of search collection property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_search_new = {
	{(PropertyRNA *)&rna_UILayout_template_search_unlink, (PropertyRNA *)&rna_UILayout_template_search_search_property,
	-1, "new", 262145, 0, 0, 0, 0, "",
	"Operator identifier to create a new item for the collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_search_unlink = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_search_new,
	-1, "unlink", 262145, 0, 0, 0, 0, "",
	"Operator identifier to unlink or delete the active item from the collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_search_func = {
	{(FunctionRNA *)&rna_UILayout_template_search_preview_func, (FunctionRNA *)&rna_UILayout_template_ID_tabs_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_search_data, (PropertyRNA *)&rna_UILayout_template_search_unlink}},
	"template_search", 8, "template_search",
	UILayout_template_search_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_search_preview_data = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_search_preview_property = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_search_data, (PropertyRNA *)&rna_UILayout_template_search_preview_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_search_preview_search_data = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_search_property, (PropertyRNA *)&rna_UILayout_template_search_preview_property,
	-1, "search_data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take collection to search in",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_search_preview_search_property = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_new, (PropertyRNA *)&rna_UILayout_template_search_preview_search_data,
	-1, "search_property", 262145, 0, 1, 0, 0, "",
	"Identifier of search collection property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_search_preview_new = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_unlink, (PropertyRNA *)&rna_UILayout_template_search_preview_search_property,
	-1, "new", 262145, 0, 0, 0, 0, "",
	"Operator identifier to create a new item for the collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_search_preview_unlink = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_rows, (PropertyRNA *)&rna_UILayout_template_search_preview_new,
	-1, "unlink", 262145, 0, 0, 0, 0, "",
	"Operator identifier to unlink or delete the active item from the collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UILayout_template_search_preview_rows = {
	{(PropertyRNA *)&rna_UILayout_template_search_preview_cols, (PropertyRNA *)&rna_UILayout_template_search_preview_unlink,
	-1, "rows", 3, 0, 0, 0, 0, "Number of thumbnail preview rows to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_UILayout_template_search_preview_cols = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_search_preview_rows,
	-1, "cols", 3, 0, 0, 0, 0, "Number of thumbnail preview columns to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_template_search_preview_func = {
	{(FunctionRNA *)&rna_UILayout_template_path_builder_func, (FunctionRNA *)&rna_UILayout_template_search_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_search_preview_data, (PropertyRNA *)&rna_UILayout_template_search_preview_cols}},
	"template_search_preview", 8, "template_search_preview",
	UILayout_template_search_preview_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_path_builder_data = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_path_builder_property = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_root, (PropertyRNA *)&rna_UILayout_template_path_builder_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_path_builder_root = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_text, (PropertyRNA *)&rna_UILayout_template_path_builder_property,
	-1, "root", 8388736, 0, 5, 0, 0, "",
	"ID-block from which path is evaluated from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

StringPropertyRNA rna_UILayout_template_path_builder_text = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_text_ctxt, (PropertyRNA *)&rna_UILayout_template_path_builder_root,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_path_builder_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_template_path_builder_translate, (PropertyRNA *)&rna_UILayout_template_path_builder_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_path_builder_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_path_builder_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_path_builder_func = {
	{(FunctionRNA *)&rna_UILayout_template_modifiers_func, (FunctionRNA *)&rna_UILayout_template_search_preview_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_path_builder_data, (PropertyRNA *)&rna_UILayout_template_path_builder_translate}},
	"template_path_builder", 0, "template_path_builder",
	UILayout_template_path_builder_call,
	NULL
};

FunctionRNA rna_UILayout_template_modifiers_func = {
	{(FunctionRNA *)&rna_UILayout_template_constraints_func, (FunctionRNA *)&rna_UILayout_template_path_builder_func,
	NULL,
	{NULL, NULL}},
	"template_modifiers", 8, "Generates the UI layout for the modifier stack",
	UILayout_template_modifiers_call,
	NULL
};

BoolPropertyRNA rna_UILayout_template_constraints_use_bone_constraints = {
	{NULL, NULL,
	-1, "use_bone_constraints", 3, 0, 0, 0, 0, "",
	"Add panels for bone constraints instead of object constraints",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_constraints_func = {
	{(FunctionRNA *)&rna_UILayout_template_grease_pencil_modifiers_func, (FunctionRNA *)&rna_UILayout_template_modifiers_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_constraints_use_bone_constraints, (PropertyRNA *)&rna_UILayout_template_constraints_use_bone_constraints}},
	"template_constraints", 8, "Generates the panels for the constraint stack",
	UILayout_template_constraints_call,
	NULL
};

FunctionRNA rna_UILayout_template_grease_pencil_modifiers_func = {
	{(FunctionRNA *)&rna_UILayout_template_shaderfx_func, (FunctionRNA *)&rna_UILayout_template_constraints_func,
	NULL,
	{NULL, NULL}},
	"template_grease_pencil_modifiers", 8, "Generates the panels for the grease pencil modifier stack",
	UILayout_template_grease_pencil_modifiers_call,
	NULL
};

FunctionRNA rna_UILayout_template_shaderfx_func = {
	{(FunctionRNA *)&rna_UILayout_template_greasepencil_color_func, (FunctionRNA *)&rna_UILayout_template_grease_pencil_modifiers_func,
	NULL,
	{NULL, NULL}},
	"template_shaderfx", 8, "Generates the panels for the shader effect stack",
	UILayout_template_shaderfx_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_greasepencil_color_data = {
	{(PropertyRNA *)&rna_UILayout_template_greasepencil_color_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_greasepencil_color_property = {
	{(PropertyRNA *)&rna_UILayout_template_greasepencil_color_rows, (PropertyRNA *)&rna_UILayout_template_greasepencil_color_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UILayout_template_greasepencil_color_rows = {
	{(PropertyRNA *)&rna_UILayout_template_greasepencil_color_cols, (PropertyRNA *)&rna_UILayout_template_greasepencil_color_property,
	-1, "rows", 3, 0, 0, 0, 0, "Number of thumbnail preview rows to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_UILayout_template_greasepencil_color_cols = {
	{(PropertyRNA *)&rna_UILayout_template_greasepencil_color_scale, (PropertyRNA *)&rna_UILayout_template_greasepencil_color_rows,
	-1, "cols", 3, 0, 0, 0, 0, "Number of thumbnail preview columns to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_UILayout_template_greasepencil_color_scale = {
	{(PropertyRNA *)&rna_UILayout_template_greasepencil_color_filter, (PropertyRNA *)&rna_UILayout_template_greasepencil_color_cols,
	-1, "scale", 3, 0, 0, 0, 0, "Scale of the image thumbnails",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.5000000000f, 1.0f, 0.1000000015f, 1.5000000000f, 1.0f, 3, 1.0f, NULL
};

static const EnumPropertyItem rna_UILayout_template_greasepencil_color_filter_items[3] = {
	{0, "ALL", 0, "All", ""},
	{1, "AVAILABLE", 0, "Available", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_greasepencil_color_filter = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_greasepencil_color_scale,
	-1, "filter", 3, 0, 0, 0, 0, "",
	"Optionally limit the items which can be selected",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_greasepencil_color_filter_items, 2, 0
};

FunctionRNA rna_UILayout_template_greasepencil_color_func = {
	{(FunctionRNA *)&rna_UILayout_template_constraint_header_func, (FunctionRNA *)&rna_UILayout_template_shaderfx_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_greasepencil_color_data, (PropertyRNA *)&rna_UILayout_template_greasepencil_color_filter}},
	"template_greasepencil_color", 8, "template_greasepencil_color",
	UILayout_template_greasepencil_color_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_constraint_header_data = {
	{NULL, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Constraint data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_UILayout_template_constraint_header_func = {
	{(FunctionRNA *)&rna_UILayout_template_preview_func, (FunctionRNA *)&rna_UILayout_template_greasepencil_color_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_constraint_header_data, (PropertyRNA *)&rna_UILayout_template_constraint_header_data}},
	"template_constraint_header", 0, "Generates the header for constraint panels",
	UILayout_template_constraint_header_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_preview_id = {
	{(PropertyRNA *)&rna_UILayout_template_preview_show_buttons, NULL,
	-1, "id", 8388736, 0, 1, 0, 0, "",
	"ID data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

BoolPropertyRNA rna_UILayout_template_preview_show_buttons = {
	{(PropertyRNA *)&rna_UILayout_template_preview_parent, (PropertyRNA *)&rna_UILayout_template_preview_id,
	-1, "show_buttons", 3, 0, 0, 0, 0, "",
	"Show preview buttons\?",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_UILayout_template_preview_parent = {
	{(PropertyRNA *)&rna_UILayout_template_preview_slot, (PropertyRNA *)&rna_UILayout_template_preview_show_buttons,
	-1, "parent", 8388736, 0, 0, 0, 0, "",
	"ID data-block",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_UILayout_template_preview_slot = {
	{(PropertyRNA *)&rna_UILayout_template_preview_preview_id, (PropertyRNA *)&rna_UILayout_template_preview_parent,
	-1, "slot", 8388608, 0, 0, 0, 0, "",
	"Texture slot",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TextureSlot
};

StringPropertyRNA rna_UILayout_template_preview_preview_id = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_preview_slot,
	-1, "preview_id", 262145, 0, 0, 0, 0, "",
	"Identifier of this preview widget, if not set the ID type will be used (i.e. all previews of materials without explicit ID will have the same size...)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_preview_func = {
	{(FunctionRNA *)&rna_UILayout_template_curve_mapping_func, (FunctionRNA *)&rna_UILayout_template_constraint_header_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_preview_id, (PropertyRNA *)&rna_UILayout_template_preview_preview_id}},
	"template_preview", 8, "Item. A preview window for materials, textures, lights or worlds",
	UILayout_template_preview_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_curve_mapping_data = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_curve_mapping_property = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_type, (PropertyRNA *)&rna_UILayout_template_curve_mapping_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

static const EnumPropertyItem rna_UILayout_template_curve_mapping_type_items[5] = {
	{0, "NONE", 0, "None", ""},
	{118, "VECTOR", 0, "Vector", ""},
	{99, "COLOR", 0, "Color", ""},
	{104, "HUE", 0, "Hue", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_curve_mapping_type = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_levels, (PropertyRNA *)&rna_UILayout_template_curve_mapping_property,
	-1, "type", 3, 0, 0, 0, 0, "Type",
	"Type of curves to display",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_curve_mapping_type_items, 4, 0
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_levels = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_brush, (PropertyRNA *)&rna_UILayout_template_curve_mapping_type,
	-1, "levels", 3, 0, 0, 0, 0, "",
	"Show black/white levels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_brush = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_use_negative_slope, (PropertyRNA *)&rna_UILayout_template_curve_mapping_levels,
	-1, "brush", 3, 0, 0, 0, 0, "",
	"Show brush options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_use_negative_slope = {
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_show_tone, (PropertyRNA *)&rna_UILayout_template_curve_mapping_brush,
	-1, "use_negative_slope", 3, 0, 0, 0, 0, "",
	"Use a negative slope by default",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_curve_mapping_show_tone = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_curve_mapping_use_negative_slope,
	-1, "show_tone", 3, 0, 0, 0, 0, "",
	"Show tone options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_curve_mapping_func = {
	{(FunctionRNA *)&rna_UILayout_template_curveprofile_func, (FunctionRNA *)&rna_UILayout_template_preview_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_curve_mapping_data, (PropertyRNA *)&rna_UILayout_template_curve_mapping_show_tone}},
	"template_curve_mapping", 0, "Item. A curve mapping widget used for e.g falloff curves for lights",
	UILayout_template_curve_mapping_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_curveprofile_data = {
	{(PropertyRNA *)&rna_UILayout_template_curveprofile_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_curveprofile_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_curveprofile_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_curveprofile_func = {
	{(FunctionRNA *)&rna_UILayout_template_color_ramp_func, (FunctionRNA *)&rna_UILayout_template_curve_mapping_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_curveprofile_data, (PropertyRNA *)&rna_UILayout_template_curveprofile_property}},
	"template_curveprofile", 0, "A profile path editor used for custom profiles",
	UILayout_template_curveprofile_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_color_ramp_data = {
	{(PropertyRNA *)&rna_UILayout_template_color_ramp_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_color_ramp_property = {
	{(PropertyRNA *)&rna_UILayout_template_color_ramp_expand, (PropertyRNA *)&rna_UILayout_template_color_ramp_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_color_ramp_expand = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_color_ramp_property,
	-1, "expand", 3, 0, 0, 0, 0, "",
	"Expand button to show more detail",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_color_ramp_func = {
	{(FunctionRNA *)&rna_UILayout_template_icon_func, (FunctionRNA *)&rna_UILayout_template_curveprofile_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_color_ramp_data, (PropertyRNA *)&rna_UILayout_template_color_ramp_expand}},
	"template_color_ramp", 0, "Item. A color ramp widget",
	UILayout_template_color_ramp_call,
	NULL
};

IntPropertyRNA rna_UILayout_template_icon_icon_value = {
	{(PropertyRNA *)&rna_UILayout_template_icon_scale, NULL,
	-1, "icon_value", 3, 0, 1, 0, 0, "Icon to display",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_UILayout_template_icon_scale = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_icon_icon_value,
	-1, "scale", 3, 0, 0, 0, 0, "Scale",
	"Scale the icon size (by the button size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 100.0f, 1.0f, 100.0f, 1.0f, 3, 1.0f, NULL
};

FunctionRNA rna_UILayout_template_icon_func = {
	{(FunctionRNA *)&rna_UILayout_template_icon_view_func, (FunctionRNA *)&rna_UILayout_template_color_ramp_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_icon_icon_value, (PropertyRNA *)&rna_UILayout_template_icon_scale}},
	"template_icon", 0, "Display a large icon",
	UILayout_template_icon_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_icon_view_data = {
	{(PropertyRNA *)&rna_UILayout_template_icon_view_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_icon_view_property = {
	{(PropertyRNA *)&rna_UILayout_template_icon_view_show_labels, (PropertyRNA *)&rna_UILayout_template_icon_view_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_icon_view_show_labels = {
	{(PropertyRNA *)&rna_UILayout_template_icon_view_scale, (PropertyRNA *)&rna_UILayout_template_icon_view_property,
	-1, "show_labels", 3, 0, 0, 0, 0, "",
	"Show enum label in preview buttons",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_UILayout_template_icon_view_scale = {
	{(PropertyRNA *)&rna_UILayout_template_icon_view_scale_popup, (PropertyRNA *)&rna_UILayout_template_icon_view_show_labels,
	-1, "scale", 3, 0, 0, 0, 0, "UI Units",
	"Scale the button icon size (by the button size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 100.0f, 1.0f, 100.0f, 1.0f, 3, 6.0f, NULL
};

FloatPropertyRNA rna_UILayout_template_icon_view_scale_popup = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_icon_view_scale,
	-1, "scale_popup", 3, 0, 0, 0, 0, "Scale",
	"Scale the popup icon size (by the button size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 100.0f, 1.0f, 100.0f, 1.0f, 3, 5.0f, NULL
};

FunctionRNA rna_UILayout_template_icon_view_func = {
	{(FunctionRNA *)&rna_UILayout_template_histogram_func, (FunctionRNA *)&rna_UILayout_template_icon_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_icon_view_data, (PropertyRNA *)&rna_UILayout_template_icon_view_scale_popup}},
	"template_icon_view", 0, "Enum. Large widget showing Icon previews",
	UILayout_template_icon_view_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_histogram_data = {
	{(PropertyRNA *)&rna_UILayout_template_histogram_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_histogram_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_histogram_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_histogram_func = {
	{(FunctionRNA *)&rna_UILayout_template_waveform_func, (FunctionRNA *)&rna_UILayout_template_icon_view_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_histogram_data, (PropertyRNA *)&rna_UILayout_template_histogram_property}},
	"template_histogram", 0, "Item. A histogramm widget to analyze imaga data",
	UILayout_template_histogram_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_waveform_data = {
	{(PropertyRNA *)&rna_UILayout_template_waveform_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_waveform_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_waveform_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_waveform_func = {
	{(FunctionRNA *)&rna_UILayout_template_vectorscope_func, (FunctionRNA *)&rna_UILayout_template_histogram_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_waveform_data, (PropertyRNA *)&rna_UILayout_template_waveform_property}},
	"template_waveform", 0, "Item. A waveform widget to analyze imaga data",
	UILayout_template_waveform_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_vectorscope_data = {
	{(PropertyRNA *)&rna_UILayout_template_vectorscope_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_vectorscope_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_vectorscope_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_vectorscope_func = {
	{(FunctionRNA *)&rna_UILayout_template_layers_func, (FunctionRNA *)&rna_UILayout_template_waveform_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_vectorscope_data, (PropertyRNA *)&rna_UILayout_template_vectorscope_property}},
	"template_vectorscope", 0, "Item. A vectorscope widget to analyze imaga data",
	UILayout_template_vectorscope_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_layers_data = {
	{(PropertyRNA *)&rna_UILayout_template_layers_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_layers_property = {
	{(PropertyRNA *)&rna_UILayout_template_layers_used_layers_data, (PropertyRNA *)&rna_UILayout_template_layers_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_layers_used_layers_data = {
	{(PropertyRNA *)&rna_UILayout_template_layers_used_layers_property, (PropertyRNA *)&rna_UILayout_template_layers_property,
	-1, "used_layers_data", 8388608, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_layers_used_layers_property = {
	{(PropertyRNA *)&rna_UILayout_template_layers_active_layer, (PropertyRNA *)&rna_UILayout_template_layers_used_layers_data,
	-1, "used_layers_property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UILayout_template_layers_active_layer = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_layers_used_layers_property,
	-1, "active_layer", 3, 0, 1, 0, 0, "Active Layer",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_template_layers_func = {
	{(FunctionRNA *)&rna_UILayout_template_color_picker_func, (FunctionRNA *)&rna_UILayout_template_vectorscope_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_layers_data, (PropertyRNA *)&rna_UILayout_template_layers_active_layer}},
	"template_layers", 0, "template_layers",
	UILayout_template_layers_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_color_picker_data = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_color_picker_property = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_value_slider, (PropertyRNA *)&rna_UILayout_template_color_picker_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_color_picker_value_slider = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_lock, (PropertyRNA *)&rna_UILayout_template_color_picker_property,
	-1, "value_slider", 3, 0, 0, 0, 0, "",
	"Display the value slider to the right of the color wheel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_color_picker_lock = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_lock_luminosity, (PropertyRNA *)&rna_UILayout_template_color_picker_value_slider,
	-1, "lock", 3, 0, 0, 0, 0, "",
	"Lock the color wheel display to value 1.0 regardless of actual color",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_color_picker_lock_luminosity = {
	{(PropertyRNA *)&rna_UILayout_template_color_picker_cubic, (PropertyRNA *)&rna_UILayout_template_color_picker_lock,
	-1, "lock_luminosity", 3, 0, 0, 0, 0, "",
	"Keep the color at its original vector length",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_color_picker_cubic = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_color_picker_lock_luminosity,
	-1, "cubic", 3, 0, 0, 0, 0, "",
	"Cubic saturation for picking values close to white",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_color_picker_func = {
	{(FunctionRNA *)&rna_UILayout_template_palette_func, (FunctionRNA *)&rna_UILayout_template_layers_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_color_picker_data, (PropertyRNA *)&rna_UILayout_template_color_picker_cubic}},
	"template_color_picker", 0, "Item. A color wheel widget to pick colors",
	UILayout_template_color_picker_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_palette_data = {
	{(PropertyRNA *)&rna_UILayout_template_palette_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_palette_property = {
	{(PropertyRNA *)&rna_UILayout_template_palette_color, (PropertyRNA *)&rna_UILayout_template_palette_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_palette_color = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_palette_property,
	-1, "color", 3, 0, 0, 0, 0, "",
	"Display the colors as colors or values",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_palette_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_layers_func, (FunctionRNA *)&rna_UILayout_template_color_picker_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_palette_data, (PropertyRNA *)&rna_UILayout_template_palette_color}},
	"template_palette", 0, "Item. A palette used to pick colors",
	UILayout_template_palette_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_layers_image = {
	{(PropertyRNA *)&rna_UILayout_template_image_layers_image_user, NULL,
	-1, "image", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

PointerPropertyRNA rna_UILayout_template_image_layers_image_user = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_image_layers_image,
	-1, "image_user", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageUser
};

FunctionRNA rna_UILayout_template_image_layers_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_func, (FunctionRNA *)&rna_UILayout_template_palette_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_layers_image, (PropertyRNA *)&rna_UILayout_template_image_layers_image_user}},
	"template_image_layers", 8, "template_image_layers",
	UILayout_template_image_layers_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_data = {
	{(PropertyRNA *)&rna_UILayout_template_image_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_image_property = {
	{(PropertyRNA *)&rna_UILayout_template_image_image_user, (PropertyRNA *)&rna_UILayout_template_image_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_image_image_user = {
	{(PropertyRNA *)&rna_UILayout_template_image_compact, (PropertyRNA *)&rna_UILayout_template_image_property,
	-1, "image_user", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageUser
};

BoolPropertyRNA rna_UILayout_template_image_compact = {
	{(PropertyRNA *)&rna_UILayout_template_image_multiview, (PropertyRNA *)&rna_UILayout_template_image_image_user,
	-1, "compact", 3, 0, 0, 0, 0, "",
	"Use more compact layout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_image_multiview = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_image_compact,
	-1, "multiview", 3, 0, 0, 0, 0, "",
	"Expose Multi-View options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_image_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_settings_func, (FunctionRNA *)&rna_UILayout_template_image_layers_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_data, (PropertyRNA *)&rna_UILayout_template_image_multiview}},
	"template_image", 8, "Item(s). User interface for selecting images and their source paths",
	UILayout_template_image_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_settings_image_settings = {
	{(PropertyRNA *)&rna_UILayout_template_image_settings_color_management, NULL,
	-1, "image_settings", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageFormatSettings
};

BoolPropertyRNA rna_UILayout_template_image_settings_color_management = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_image_settings_image_settings,
	-1, "color_management", 3, 0, 0, 0, 0, "",
	"Show color management settings",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_image_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_stereo_3d_func, (FunctionRNA *)&rna_UILayout_template_image_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_settings_image_settings, (PropertyRNA *)&rna_UILayout_template_image_settings_color_management}},
	"template_image_settings", 0, "User interface for setting image format options",
	UILayout_template_image_settings_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_stereo_3d_stereo_3d_format = {
	{NULL, NULL,
	-1, "stereo_3d_format", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Stereo3dFormat
};

FunctionRNA rna_UILayout_template_image_stereo_3d_func = {
	{(FunctionRNA *)&rna_UILayout_template_image_views_func, (FunctionRNA *)&rna_UILayout_template_image_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_stereo_3d_stereo_3d_format, (PropertyRNA *)&rna_UILayout_template_image_stereo_3d_stereo_3d_format}},
	"template_image_stereo_3d", 0, "User interface for setting image stereo 3d options",
	UILayout_template_image_stereo_3d_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_image_views_image_settings = {
	{NULL, NULL,
	-1, "image_settings", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ImageFormatSettings
};

FunctionRNA rna_UILayout_template_image_views_func = {
	{(FunctionRNA *)&rna_UILayout_template_movieclip_func, (FunctionRNA *)&rna_UILayout_template_image_stereo_3d_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_image_views_image_settings, (PropertyRNA *)&rna_UILayout_template_image_views_image_settings}},
	"template_image_views", 0, "User interface for setting image views output options",
	UILayout_template_image_views_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_movieclip_data = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_movieclip_property = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_compact, (PropertyRNA *)&rna_UILayout_template_movieclip_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_movieclip_compact = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_movieclip_property,
	-1, "compact", 3, 0, 0, 0, 0, "",
	"Use more compact layout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_movieclip_func = {
	{(FunctionRNA *)&rna_UILayout_template_track_func, (FunctionRNA *)&rna_UILayout_template_image_views_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_movieclip_data, (PropertyRNA *)&rna_UILayout_template_movieclip_compact}},
	"template_movieclip", 8, "Item(s). User interface for selecting movie clips and their source paths",
	UILayout_template_movieclip_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_track_data = {
	{(PropertyRNA *)&rna_UILayout_template_track_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_track_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_track_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_track_func = {
	{(FunctionRNA *)&rna_UILayout_template_marker_func, (FunctionRNA *)&rna_UILayout_template_movieclip_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_track_data, (PropertyRNA *)&rna_UILayout_template_track_property}},
	"template_track", 0, "Item. A movie-track widget to preview tracking image.",
	UILayout_template_track_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_marker_data = {
	{(PropertyRNA *)&rna_UILayout_template_marker_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_marker_property = {
	{(PropertyRNA *)&rna_UILayout_template_marker_clip_user, (PropertyRNA *)&rna_UILayout_template_marker_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_marker_clip_user = {
	{(PropertyRNA *)&rna_UILayout_template_marker_track, (PropertyRNA *)&rna_UILayout_template_marker_property,
	-1, "clip_user", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClipUser
};

PointerPropertyRNA rna_UILayout_template_marker_track = {
	{(PropertyRNA *)&rna_UILayout_template_marker_compact, (PropertyRNA *)&rna_UILayout_template_marker_clip_user,
	-1, "track", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieTrackingTrack
};

BoolPropertyRNA rna_UILayout_template_marker_compact = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_marker_track,
	-1, "compact", 3, 0, 0, 0, 0, "",
	"Use more compact layout",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_marker_func = {
	{(FunctionRNA *)&rna_UILayout_template_movieclip_information_func, (FunctionRNA *)&rna_UILayout_template_track_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_marker_data, (PropertyRNA *)&rna_UILayout_template_marker_compact}},
	"template_marker", 0, "Item. A widget to control single marker settings.",
	UILayout_template_marker_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_movieclip_information_data = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_information_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_movieclip_information_property = {
	{(PropertyRNA *)&rna_UILayout_template_movieclip_information_clip_user, (PropertyRNA *)&rna_UILayout_template_movieclip_information_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_movieclip_information_clip_user = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_movieclip_information_property,
	-1, "clip_user", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MovieClipUser
};

FunctionRNA rna_UILayout_template_movieclip_information_func = {
	{(FunctionRNA *)&rna_UILayout_template_list_func, (FunctionRNA *)&rna_UILayout_template_marker_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_movieclip_information_data, (PropertyRNA *)&rna_UILayout_template_movieclip_information_clip_user}},
	"template_movieclip_information", 0, "Item. Movie clip information data.",
	UILayout_template_movieclip_information_call,
	NULL
};

StringPropertyRNA rna_UILayout_template_list_listtype_name = {
	{(PropertyRNA *)&rna_UILayout_template_list_list_id, NULL,
	-1, "listtype_name", 262145, 0, 1, 0, 0, "",
	"Identifier of the list type to use",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_list_list_id = {
	{(PropertyRNA *)&rna_UILayout_template_list_dataptr, (PropertyRNA *)&rna_UILayout_template_list_listtype_name,
	-1, "list_id", 262145, 0, 1, 0, 0, "",
	"Identifier of this list widget (mandatory when using default \"UI_UL_list\" class). If this not an empty string, the uilist gets a custom ID, otherwise it takes the name of the class used to define the uilist (for example, if the class name is \"OBJECT_UL_vgroups\", and list_id is not set by the script, then bl_idname = \"OBJECT_UL_vgroups\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_list_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_list_propname, (PropertyRNA *)&rna_UILayout_template_list_list_id,
	-1, "dataptr", 8388608, 0, 5, 0, 0, "",
	"Data from which to take the Collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_list_propname = {
	{(PropertyRNA *)&rna_UILayout_template_list_active_dataptr, (PropertyRNA *)&rna_UILayout_template_list_dataptr,
	-1, "propname", 262145, 0, 1, 0, 0, "",
	"Identifier of the Collection property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_list_active_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_list_active_propname, (PropertyRNA *)&rna_UILayout_template_list_propname,
	-1, "active_dataptr", 8650752, 0, 5, 0, 0, "",
	"Data from which to take the integer property, index of the active item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_list_active_propname = {
	{(PropertyRNA *)&rna_UILayout_template_list_item_dyntip_propname, (PropertyRNA *)&rna_UILayout_template_list_active_dataptr,
	-1, "active_propname", 262145, 0, 1, 0, 0, "",
	"Identifier of the integer property in active_data, index of the active item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_list_item_dyntip_propname = {
	{(PropertyRNA *)&rna_UILayout_template_list_rows, (PropertyRNA *)&rna_UILayout_template_list_active_propname,
	-1, "item_dyntip_propname", 262145, 0, 0, 0, 0, "",
	"Identifier of a string property in items, to use as tooltip content",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UILayout_template_list_rows = {
	{(PropertyRNA *)&rna_UILayout_template_list_maxrows, (PropertyRNA *)&rna_UILayout_template_list_item_dyntip_propname,
	-1, "rows", 3, 0, 0, 0, 0, "",
	"Default and minimum number of rows to display",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 5, NULL
};

IntPropertyRNA rna_UILayout_template_list_maxrows = {
	{(PropertyRNA *)&rna_UILayout_template_list_type, (PropertyRNA *)&rna_UILayout_template_list_rows,
	-1, "maxrows", 3, 0, 0, 0, 0, "",
	"Default maximum number of rows to display",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 5, NULL
};

EnumPropertyRNA rna_UILayout_template_list_type = {
	{(PropertyRNA *)&rna_UILayout_template_list_columns, (PropertyRNA *)&rna_UILayout_template_list_maxrows,
	-1, "type", 3, 0, 0, 0, 0, "Type",
	"Type of layout to use",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_enum_uilist_layout_type_items, 3, 0
};

IntPropertyRNA rna_UILayout_template_list_columns = {
	{(PropertyRNA *)&rna_UILayout_template_list_sort_reverse, (PropertyRNA *)&rna_UILayout_template_list_type,
	-1, "columns", 3, 0, 0, 0, 0, "",
	"Number of items to display per row, for GRID layout",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 9, NULL
};

BoolPropertyRNA rna_UILayout_template_list_sort_reverse = {
	{(PropertyRNA *)&rna_UILayout_template_list_sort_lock, (PropertyRNA *)&rna_UILayout_template_list_columns,
	-1, "sort_reverse", 3, 0, 0, 0, 0, "",
	"Display items in reverse order by default",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UILayout_template_list_sort_lock = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_list_sort_reverse,
	-1, "sort_lock", 3, 0, 0, 0, 0, "",
	"Lock display order to default value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UILayout_template_list_func = {
	{(FunctionRNA *)&rna_UILayout_template_running_jobs_func, (FunctionRNA *)&rna_UILayout_template_movieclip_information_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_list_listtype_name, (PropertyRNA *)&rna_UILayout_template_list_sort_lock}},
	"template_list", 8, "Item. A list widget to display data, e.g. vertexgroups.",
	UILayout_template_list_call,
	NULL
};

FunctionRNA rna_UILayout_template_running_jobs_func = {
	{(FunctionRNA *)&rna_UILayout_template_operator_search_func, (FunctionRNA *)&rna_UILayout_template_list_func,
	NULL,
	{NULL, NULL}},
	"template_running_jobs", 8, "template_running_jobs",
	UILayout_template_running_jobs_call,
	NULL
};

FunctionRNA rna_UILayout_template_operator_search_func = {
	{(FunctionRNA *)&rna_UILayout_template_menu_search_func, (FunctionRNA *)&rna_UILayout_template_running_jobs_func,
	NULL,
	{NULL, NULL}},
	"template_operator_search", 0, "template_operator_search",
	UILayout_template_operator_search_call,
	NULL
};

FunctionRNA rna_UILayout_template_menu_search_func = {
	{(FunctionRNA *)&rna_UILayout_template_header_3D_mode_func, (FunctionRNA *)&rna_UILayout_template_operator_search_func,
	NULL,
	{NULL, NULL}},
	"template_menu_search", 0, "template_menu_search",
	UILayout_template_menu_search_call,
	NULL
};

FunctionRNA rna_UILayout_template_header_3D_mode_func = {
	{(FunctionRNA *)&rna_UILayout_template_edit_mode_selection_func, (FunctionRNA *)&rna_UILayout_template_menu_search_func,
	NULL,
	{NULL, NULL}},
	"template_header_3D_mode", 8, "",
	UILayout_template_header_3D_mode_call,
	NULL
};

FunctionRNA rna_UILayout_template_edit_mode_selection_func = {
	{(FunctionRNA *)&rna_UILayout_template_reports_banner_func, (FunctionRNA *)&rna_UILayout_template_header_3D_mode_func,
	NULL,
	{NULL, NULL}},
	"template_edit_mode_selection", 8, "Inserts common 3DView Edit modes header UI (selector for selection mode)",
	UILayout_template_edit_mode_selection_call,
	NULL
};

FunctionRNA rna_UILayout_template_reports_banner_func = {
	{(FunctionRNA *)&rna_UILayout_template_input_status_func, (FunctionRNA *)&rna_UILayout_template_edit_mode_selection_func,
	NULL,
	{NULL, NULL}},
	"template_reports_banner", 8, "template_reports_banner",
	UILayout_template_reports_banner_call,
	NULL
};

FunctionRNA rna_UILayout_template_input_status_func = {
	{(FunctionRNA *)&rna_UILayout_template_node_link_func, (FunctionRNA *)&rna_UILayout_template_reports_banner_func,
	NULL,
	{NULL, NULL}},
	"template_input_status", 8, "template_input_status",
	UILayout_template_input_status_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_node_link_ntree = {
	{(PropertyRNA *)&rna_UILayout_template_node_link_node, NULL,
	-1, "ntree", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

PointerPropertyRNA rna_UILayout_template_node_link_node = {
	{(PropertyRNA *)&rna_UILayout_template_node_link_socket, (PropertyRNA *)&rna_UILayout_template_node_link_ntree,
	-1, "node", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

PointerPropertyRNA rna_UILayout_template_node_link_socket = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_node_link_node,
	-1, "socket", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeSocket
};

FunctionRNA rna_UILayout_template_node_link_func = {
	{(FunctionRNA *)&rna_UILayout_template_node_view_func, (FunctionRNA *)&rna_UILayout_template_input_status_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_node_link_ntree, (PropertyRNA *)&rna_UILayout_template_node_link_socket}},
	"template_node_link", 8, "template_node_link",
	UILayout_template_node_link_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_node_view_ntree = {
	{(PropertyRNA *)&rna_UILayout_template_node_view_node, NULL,
	-1, "ntree", 8388736, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

PointerPropertyRNA rna_UILayout_template_node_view_node = {
	{(PropertyRNA *)&rna_UILayout_template_node_view_socket, (PropertyRNA *)&rna_UILayout_template_node_view_ntree,
	-1, "node", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Node
};

PointerPropertyRNA rna_UILayout_template_node_view_socket = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_node_view_node,
	-1, "socket", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeSocket
};

FunctionRNA rna_UILayout_template_node_view_func = {
	{(FunctionRNA *)&rna_UILayout_template_texture_user_func, (FunctionRNA *)&rna_UILayout_template_node_link_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_node_view_ntree, (PropertyRNA *)&rna_UILayout_template_node_view_socket}},
	"template_node_view", 8, "template_node_view",
	UILayout_template_node_view_call,
	NULL
};

FunctionRNA rna_UILayout_template_texture_user_func = {
	{(FunctionRNA *)&rna_UILayout_template_keymap_item_properties_func, (FunctionRNA *)&rna_UILayout_template_node_view_func,
	NULL,
	{NULL, NULL}},
	"template_texture_user", 8, "template_texture_user",
	UILayout_template_texture_user_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_keymap_item_properties_item = {
	{NULL, NULL,
	-1, "item", 8650752, 0, 5, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_UILayout_template_keymap_item_properties_func = {
	{(FunctionRNA *)&rna_UILayout_template_component_menu_func, (FunctionRNA *)&rna_UILayout_template_texture_user_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_keymap_item_properties_item, (PropertyRNA *)&rna_UILayout_template_keymap_item_properties_item}},
	"template_keymap_item_properties", 0, "template_keymap_item_properties",
	UILayout_template_keymap_item_properties_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_component_menu_data = {
	{(PropertyRNA *)&rna_UILayout_template_component_menu_property, NULL,
	-1, "data", 8388608, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_component_menu_property = {
	{(PropertyRNA *)&rna_UILayout_template_component_menu_name, (PropertyRNA *)&rna_UILayout_template_component_menu_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_component_menu_name = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_component_menu_property,
	-1, "name", 262145, 0, 0, 0, 0, "",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_component_menu_func = {
	{(FunctionRNA *)&rna_UILayout_template_colorspace_settings_func, (FunctionRNA *)&rna_UILayout_template_keymap_item_properties_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_component_menu_data, (PropertyRNA *)&rna_UILayout_template_component_menu_name}},
	"template_component_menu", 0, "Item. Display expanded property in a popup menu",
	UILayout_template_component_menu_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_colorspace_settings_data = {
	{(PropertyRNA *)&rna_UILayout_template_colorspace_settings_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_colorspace_settings_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_colorspace_settings_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_colorspace_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_colormanaged_view_settings_func, (FunctionRNA *)&rna_UILayout_template_component_menu_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_colorspace_settings_data, (PropertyRNA *)&rna_UILayout_template_colorspace_settings_property}},
	"template_colorspace_settings", 0, "Item. A widget to control input color space settings.",
	UILayout_template_colorspace_settings_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_colormanaged_view_settings_data = {
	{(PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_colormanaged_view_settings_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_colormanaged_view_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_node_socket_func, (FunctionRNA *)&rna_UILayout_template_colorspace_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_data, (PropertyRNA *)&rna_UILayout_template_colormanaged_view_settings_property}},
	"template_colormanaged_view_settings", 8, "Item. A widget to control color managed view settings settings.",
	UILayout_template_colormanaged_view_settings_call,
	NULL
};

static float rna_UILayout_template_node_socket_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	1.0f
};

FloatPropertyRNA rna_UILayout_template_node_socket_color = {
	{NULL, NULL,
	-1, "color", 3, 0, 0, 0, 0, "Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, rna_UILayout_template_node_socket_color_default
};

FunctionRNA rna_UILayout_template_node_socket_func = {
	{(FunctionRNA *)&rna_UILayout_template_cache_file_func, (FunctionRNA *)&rna_UILayout_template_colormanaged_view_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_node_socket_color, (PropertyRNA *)&rna_UILayout_template_node_socket_color}},
	"template_node_socket", 8, "Node Socket Icon",
	UILayout_template_node_socket_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_cache_file_data = {
	{(PropertyRNA *)&rna_UILayout_template_cache_file_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_cache_file_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_cache_file_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_cache_file_func = {
	{(FunctionRNA *)&rna_UILayout_template_cache_file_velocity_func, (FunctionRNA *)&rna_UILayout_template_node_socket_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_cache_file_data, (PropertyRNA *)&rna_UILayout_template_cache_file_property}},
	"template_cache_file", 8, "Item(s). User interface for selecting cache files and their source paths",
	UILayout_template_cache_file_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_cache_file_velocity_data = {
	{(PropertyRNA *)&rna_UILayout_template_cache_file_velocity_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_cache_file_velocity_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_cache_file_velocity_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_cache_file_velocity_func = {
	{(FunctionRNA *)&rna_UILayout_template_cache_file_procedural_func, (FunctionRNA *)&rna_UILayout_template_cache_file_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_cache_file_velocity_data, (PropertyRNA *)&rna_UILayout_template_cache_file_velocity_property}},
	"template_cache_file_velocity", 0, "Show cache files velocity properties",
	UILayout_template_cache_file_velocity_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_cache_file_procedural_data = {
	{(PropertyRNA *)&rna_UILayout_template_cache_file_procedural_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_cache_file_procedural_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_cache_file_procedural_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_cache_file_procedural_func = {
	{(FunctionRNA *)&rna_UILayout_template_cache_file_time_settings_func, (FunctionRNA *)&rna_UILayout_template_cache_file_velocity_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_cache_file_procedural_data, (PropertyRNA *)&rna_UILayout_template_cache_file_procedural_property}},
	"template_cache_file_procedural", 8, "Show cache files render procedural properties",
	UILayout_template_cache_file_procedural_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_cache_file_time_settings_data = {
	{(PropertyRNA *)&rna_UILayout_template_cache_file_time_settings_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_cache_file_time_settings_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_cache_file_time_settings_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_cache_file_time_settings_func = {
	{(FunctionRNA *)&rna_UILayout_template_cache_file_layers_func, (FunctionRNA *)&rna_UILayout_template_cache_file_procedural_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_cache_file_time_settings_data, (PropertyRNA *)&rna_UILayout_template_cache_file_time_settings_property}},
	"template_cache_file_time_settings", 0, "Show cache files time settings",
	UILayout_template_cache_file_time_settings_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_cache_file_layers_data = {
	{(PropertyRNA *)&rna_UILayout_template_cache_file_layers_property, NULL,
	-1, "data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_cache_file_layers_property = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_cache_file_layers_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

FunctionRNA rna_UILayout_template_cache_file_layers_func = {
	{(FunctionRNA *)&rna_UILayout_template_recent_files_func, (FunctionRNA *)&rna_UILayout_template_cache_file_time_settings_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_cache_file_layers_data, (PropertyRNA *)&rna_UILayout_template_cache_file_layers_property}},
	"template_cache_file_layers", 8, "Show cache files override layers properties",
	UILayout_template_cache_file_layers_call,
	NULL
};

IntPropertyRNA rna_UILayout_template_recent_files_rows = {
	{(PropertyRNA *)&rna_UILayout_template_recent_files_found, NULL,
	-1, "rows", 3, 0, 0, 0, 0, "",
	"Maximum number of items to show",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1, INT_MAX, 1, INT_MAX, 1, 5, NULL
};

IntPropertyRNA rna_UILayout_template_recent_files_found = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_recent_files_rows,
	-1, "found", 3, 0, 2, 0, 0, "",
	"Number of items drawn",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UILayout_template_recent_files_func = {
	{(FunctionRNA *)&rna_UILayout_template_file_select_path_func, (FunctionRNA *)&rna_UILayout_template_cache_file_layers_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_recent_files_rows, (PropertyRNA *)&rna_UILayout_template_recent_files_found}},
	"template_recent_files", 0, "Show list of recently saved .blend files",
	UILayout_template_recent_files_call,
	(PropertyRNA *)&rna_UILayout_template_recent_files_found
};

PointerPropertyRNA rna_UILayout_template_file_select_path_params = {
	{NULL, NULL,
	-1, "params", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FileSelectParams
};

FunctionRNA rna_UILayout_template_file_select_path_func = {
	{(FunctionRNA *)&rna_UILayout_template_event_from_keymap_item_func, (FunctionRNA *)&rna_UILayout_template_recent_files_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_file_select_path_params, (PropertyRNA *)&rna_UILayout_template_file_select_path_params}},
	"template_file_select_path", 8, "Item. A text button to set the active file browser path.",
	UILayout_template_file_select_path_call,
	NULL
};

PointerPropertyRNA rna_UILayout_template_event_from_keymap_item_item = {
	{(PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_text, NULL,
	-1, "item", 8650752, 0, 1, 0, 0, "Item",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

StringPropertyRNA rna_UILayout_template_event_from_keymap_item_text = {
	{(PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_text_ctxt, (PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_item,
	-1, "text", 1, 0, 0, 0, 0, "",
	"Override automatic text of the item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UILayout_template_event_from_keymap_item_text_ctxt = {
	{(PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_translate, (PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_text,
	-1, "text_ctxt", 1, 0, 0, 0, 0, "",
	"Override automatic translation context of the given text",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_UILayout_template_event_from_keymap_item_translate = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_text_ctxt,
	-1, "translate", 3, 0, 0, 0, 0, "",
	"Translate the given text, when UI translation is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_UILayout_template_event_from_keymap_item_func = {
	{(FunctionRNA *)&rna_UILayout_template_asset_view_func, (FunctionRNA *)&rna_UILayout_template_file_select_path_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_item, (PropertyRNA *)&rna_UILayout_template_event_from_keymap_item_translate}},
	"template_event_from_keymap_item", 0, "Display keymap item as icons/text",
	UILayout_template_event_from_keymap_item_call,
	NULL
};

StringPropertyRNA rna_UILayout_template_asset_view_list_id = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_asset_library_dataptr, NULL,
	-1, "list_id", 262145, 0, 1, 0, 0, "",
	"Identifier of this asset view. Necessary to tell apart different asset views and to idenify an asset view read from a .blend",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_asset_view_asset_library_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_asset_library_propname, (PropertyRNA *)&rna_UILayout_template_asset_view_list_id,
	-1, "asset_library_dataptr", 8650752, 0, 5, 0, 0, "",
	"Data from which to take the active asset library property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_asset_view_asset_library_propname = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_assets_dataptr, (PropertyRNA *)&rna_UILayout_template_asset_view_asset_library_dataptr,
	-1, "asset_library_propname", 262145, 0, 1, 0, 0, "",
	"Identifier of the asset library property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_asset_view_assets_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_assets_propname, (PropertyRNA *)&rna_UILayout_template_asset_view_asset_library_propname,
	-1, "assets_dataptr", 8650752, 0, 5, 0, 0, "",
	"Data from which to take the asset list property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_asset_view_assets_propname = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_active_dataptr, (PropertyRNA *)&rna_UILayout_template_asset_view_assets_dataptr,
	-1, "assets_propname", 262145, 0, 1, 0, 0, "",
	"Identifier of the asset list property",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_asset_view_active_dataptr = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_active_propname, (PropertyRNA *)&rna_UILayout_template_asset_view_assets_propname,
	-1, "active_dataptr", 8650752, 0, 5, 0, 0, "",
	"Data from which to take the integer property, index of the active item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UILayout_template_asset_view_active_propname = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_filter_id_types, (PropertyRNA *)&rna_UILayout_template_asset_view_active_dataptr,
	-1, "active_propname", 262145, 0, 1, 0, 0, "",
	"Identifier of the integer property in active_data, index of the active item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

EnumPropertyRNA rna_UILayout_template_asset_view_filter_id_types = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_display_options, (PropertyRNA *)&rna_UILayout_template_asset_view_active_propname,
	-1, "filter_id_types", 2097155, 0, 0, 0, 0, "filter_id_types",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, rna_uiTemplateAssetView_filter_id_types_itemf, NULL, NULL, DummyRNA_NULL_items, 0, 0
};

static const EnumPropertyItem rna_UILayout_template_asset_view_display_options_items[4] = {
	{1, "NO_NAMES", 0, "", "Do not display the name of each asset underneath preview images"},
	{2, "NO_FILTER", 0, "", "Do not display buttons for filtering the available assets"},
	{4, "NO_LIBRARY", 0, "", "Do not display buttons to choose or refresh an asset library"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UILayout_template_asset_view_display_options = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_activate_operator, (PropertyRNA *)&rna_UILayout_template_asset_view_filter_id_types,
	-1, "display_options", 2097155, 0, 0, 0, 0, "",
	"Displaying options for the asset view",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, rna_UILayout_template_asset_view_display_options_items, 3, 0
};

StringPropertyRNA rna_UILayout_template_asset_view_activate_operator = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_activate_operator_properties, (PropertyRNA *)&rna_UILayout_template_asset_view_display_options,
	-1, "activate_operator", 262145, 0, 0, 0, 0, "",
	"Name of a custom operator to invoke when activating an item",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_asset_view_activate_operator_properties = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_drag_operator, (PropertyRNA *)&rna_UILayout_template_asset_view_activate_operator,
	-1, "activate_operator_properties", 8388608, 0, 6, 0, 0, "",
	"Operator properties to fill in for the custom activate operator passed to the template",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

StringPropertyRNA rna_UILayout_template_asset_view_drag_operator = {
	{(PropertyRNA *)&rna_UILayout_template_asset_view_drag_operator_properties, (PropertyRNA *)&rna_UILayout_template_asset_view_activate_operator_properties,
	-1, "drag_operator", 262145, 0, 0, 0, 0, "",
	"Name of a custom operator to invoke when starting to drag an item. Never invoked together with the `active_operator` (if set), it\'s either the drag or the activate one",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

PointerPropertyRNA rna_UILayout_template_asset_view_drag_operator_properties = {
	{NULL, (PropertyRNA *)&rna_UILayout_template_asset_view_drag_operator,
	-1, "drag_operator_properties", 8388608, 0, 6, 0, 0, "",
	"Operator properties to fill in for the custom drag operator passed to the template",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_OperatorProperties
};

FunctionRNA rna_UILayout_template_asset_view_func = {
	{NULL, (FunctionRNA *)&rna_UILayout_template_event_from_keymap_item_func,
	NULL,
	{(PropertyRNA *)&rna_UILayout_template_asset_view_list_id, (PropertyRNA *)&rna_UILayout_template_asset_view_drag_operator_properties}},
	"template_asset_view", 8, "Item. A scrollable list of assets in a grid view",
	UILayout_template_asset_view_call,
	NULL
};

StructRNA RNA_UILayout = {
	{(ContainerRNA *)&RNA_Panel, (ContainerRNA *)&RNA_Sound,
	NULL,
	{(PropertyRNA *)&rna_UILayout_rna_properties, (PropertyRNA *)&rna_UILayout_use_property_decorate}},
	"UILayout", NULL, NULL, 516, NULL, "UI Layout",
	"User interface layout in a panel or header",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UILayout_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_UILayout_row_func, (FunctionRNA *)&rna_UILayout_template_asset_view_func}
};

/* Panel */
CollectionPropertyRNA rna_Panel_rna_properties = {
	{(PropertyRNA *)&rna_Panel_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_rna_properties_begin, Panel_rna_properties_next, Panel_rna_properties_end, Panel_rna_properties_get, NULL, NULL, Panel_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Panel_rna_type = {
	{(PropertyRNA *)&rna_Panel_layout, (PropertyRNA *)&rna_Panel_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Panel_layout = {
	{(PropertyRNA *)&rna_Panel_text, (PropertyRNA *)&rna_Panel_rna_type,
	-1, "layout", 8388608, 0, 0, 0, 0, "Layout",
	"Defines the structure of the panel in the UI",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Panel_text = {
	{(PropertyRNA *)&rna_Panel_custom_data, (PropertyRNA *)&rna_Panel_layout,
	-1, "text", 262145, 0, 0, 0, 0, "Text",
	"XXX todo",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_text_get, Panel_text_length, Panel_text_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

PointerPropertyRNA rna_Panel_custom_data = {
	{(PropertyRNA *)&rna_Panel_bl_idname, (PropertyRNA *)&rna_Panel_text,
	-1, "custom_data", 8388608, 0, 0, 0, 0, "Custom Data",
	"Panel data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_custom_data_get, NULL, rna_Panel_custom_data_typef, NULL,&RNA_Constraint
};

StringPropertyRNA rna_Panel_bl_idname = {
	{(PropertyRNA *)&rna_Panel_bl_label, (PropertyRNA *)&rna_Panel_custom_data,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the panel gets a custom ID, otherwise it takes the name of the class used to define the panel. For example, if the class name is \"OBJECT_PT_hello\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_PT_hello\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_idname_get, Panel_bl_idname_length, Panel_bl_idname_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_Panel_bl_label = {
	{(PropertyRNA *)&rna_Panel_bl_translation_context, (PropertyRNA *)&rna_Panel_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "Label",
	"The panel label, shows up in the panel header at the right of the triangle used to collapse the panel",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_label_get, Panel_bl_label_length, Panel_bl_label_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_Panel_bl_translation_context = {
	{(PropertyRNA *)&rna_Panel_bl_description, (PropertyRNA *)&rna_Panel_bl_label,
	-1, "bl_translation_context", 262193, 0, 0, 0, 0, "",
	"Specific translation context, only define when the label needs to be disambiguated from others using the exact same label",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_translation_context_get, Panel_bl_translation_context_length, Panel_bl_translation_context_set, NULL, NULL, NULL, NULL, 0, 0, "*"
};

StringPropertyRNA rna_Panel_bl_description = {
	{(PropertyRNA *)&rna_Panel_bl_category, (PropertyRNA *)&rna_Panel_bl_translation_context,
	-1, "bl_description", 49, 0, 0, 0, 0, "",
	"The panel tooltip",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_description_get, Panel_bl_description_length, Panel_bl_description_set, NULL, NULL, NULL, NULL, 0, 240, ""
};

StringPropertyRNA rna_Panel_bl_category = {
	{(PropertyRNA *)&rna_Panel_bl_owner_id, (PropertyRNA *)&rna_Panel_bl_description,
	-1, "bl_category", 262193, 0, 0, 0, 0, "",
	"The category (tab) in which the panel will be displayed, when applicable",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_category_get, Panel_bl_category_length, Panel_bl_category_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_Panel_bl_owner_id = {
	{(PropertyRNA *)&rna_Panel_bl_space_type, (PropertyRNA *)&rna_Panel_bl_category,
	-1, "bl_owner_id", 262193, 0, 0, 0, 0, "",
	"The ID owning the data displayed in the panel, if any",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_owner_id_get, Panel_bl_owner_id_length, Panel_bl_owner_id_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

EnumPropertyRNA rna_Panel_bl_space_type = {
	{(PropertyRNA *)&rna_Panel_bl_region_type, (PropertyRNA *)&rna_Panel_bl_owner_id,
	-1, "bl_space_type", 19, 0, 0, 0, 0, "Space Type",
	"The space where the panel is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_space_type_get, Panel_bl_space_type_set, NULL, NULL, NULL, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_Panel_bl_region_type = {
	{(PropertyRNA *)&rna_Panel_bl_context, (PropertyRNA *)&rna_Panel_bl_space_type,
	-1, "bl_region_type", 19, 0, 0, 0, 0, "Region Type",
	"The region where the panel is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_region_type_get, Panel_bl_region_type_set, NULL, NULL, NULL, rna_enum_region_type_items, 14, 0
};

StringPropertyRNA rna_Panel_bl_context = {
	{(PropertyRNA *)&rna_Panel_bl_options, (PropertyRNA *)&rna_Panel_bl_region_type,
	-1, "bl_context", 262193, 0, 0, 0, 0, "Context",
	"The context in which the panel belongs to. (TODO: explain the possible combinations bl_context/bl_region_type/bl_space_type)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_context_get, Panel_bl_context_length, Panel_bl_context_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

static const EnumPropertyItem rna_Panel_bl_options_items[5] = {
	{1, "DEFAULT_CLOSED", 0, "Default Closed", "Defines if the panel has to be open or collapsed at the time of its creation"},
	{2, "HIDE_HEADER", 0, "Hide Header", "If set to False, the panel shows a header, which contains a clickable arrow to collapse the panel and the label (see bl_label)"},
	{16, "INSTANCED", 0, "Instanced Panel", "Multiple panels with this type can be used as part of a list depending on data external to the UI. Used to create panels for the modifiers and other stacks"},
	{4, "HEADER_LAYOUT_EXPAND", 0, "Expand Header Layout", "Allow buttons in the header to stretch and shrink to fill the entire layout width"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Panel_bl_options = {
	{(PropertyRNA *)&rna_Panel_bl_parent_id, (PropertyRNA *)&rna_Panel_bl_context,
	-1, "bl_options", 2097203, 0, 0, 0, 0, "Options",
	"Options for this panel type",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_options_get, Panel_bl_options_set, NULL, NULL, NULL, rna_Panel_bl_options_items, 4, 1
};

StringPropertyRNA rna_Panel_bl_parent_id = {
	{(PropertyRNA *)&rna_Panel_bl_ui_units_x, (PropertyRNA *)&rna_Panel_bl_options,
	-1, "bl_parent_id", 262193, 0, 0, 0, 0, "Parent ID Name",
	"If this is set, the panel becomes a sub-panel",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_parent_id_get, Panel_bl_parent_id_length, Panel_bl_parent_id_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_Panel_bl_ui_units_x = {
	{(PropertyRNA *)&rna_Panel_bl_order, (PropertyRNA *)&rna_Panel_bl_parent_id,
	-1, "bl_ui_units_x", 51, 0, 0, 0, 0, "Units X",
	"When set, defines popup panel width",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_ui_units_x_get, Panel_bl_ui_units_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Panel_bl_order = {
	{(PropertyRNA *)&rna_Panel_use_pin, (PropertyRNA *)&rna_Panel_bl_ui_units_x,
	-1, "bl_order", 51, 0, 0, 0, 0, "Order",
	"Panels with lower numbers are default ordered before panels with higher numbers",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_bl_order_get, Panel_bl_order_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

BoolPropertyRNA rna_Panel_use_pin = {
	{(PropertyRNA *)&rna_Panel_is_popover, (PropertyRNA *)&rna_Panel_bl_order,
	-1, "use_pin", 3, 0, 0, 0, 0, "Pin",
	"Show the panel on all tabs",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_use_pin_get, Panel_use_pin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Panel_is_popover = {
	{NULL, (PropertyRNA *)&rna_Panel_use_pin,
	-1, "is_popover", 2, 0, 0, 0, 0, "Popover",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Panel_is_popover_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Panel_poll_visible = {
	{(PropertyRNA *)&rna_Panel_poll_context, NULL,
	-1, "visible", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Panel_poll_context = {
	{NULL, (PropertyRNA *)&rna_Panel_poll_visible,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_poll_func = {
	{(FunctionRNA *)&rna_Panel_draw_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Panel_poll_visible, (PropertyRNA *)&rna_Panel_poll_context}},
	"poll", 97, "If this method returns a non-null output, then the panel can be drawn",
	NULL,
	(PropertyRNA *)&rna_Panel_poll_visible
};

PointerPropertyRNA rna_Panel_draw_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_draw_func = {
	{(FunctionRNA *)&rna_Panel_draw_header_func, (FunctionRNA *)&rna_Panel_poll_func,
	NULL,
	{(PropertyRNA *)&rna_Panel_draw_context, (PropertyRNA *)&rna_Panel_draw_context}},
	"draw", 32, "Draw UI elements into the panel UI layout",
	NULL,
	NULL
};

PointerPropertyRNA rna_Panel_draw_header_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_draw_header_func = {
	{(FunctionRNA *)&rna_Panel_draw_header_preset_func, (FunctionRNA *)&rna_Panel_draw_func,
	NULL,
	{(PropertyRNA *)&rna_Panel_draw_header_context, (PropertyRNA *)&rna_Panel_draw_header_context}},
	"draw_header", 96, "Draw UI elements into the panel\'s header UI layout",
	NULL,
	NULL
};

PointerPropertyRNA rna_Panel_draw_header_preset_context = {
	{NULL, NULL,
	-1, "context", 8650752, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Panel_draw_header_preset_func = {
	{NULL, (FunctionRNA *)&rna_Panel_draw_header_func,
	NULL,
	{(PropertyRNA *)&rna_Panel_draw_header_preset_context, (PropertyRNA *)&rna_Panel_draw_header_preset_context}},
	"draw_header_preset", 96, "Draw UI elements for presets in the panel\'s header",
	NULL,
	NULL
};

StructRNA RNA_Panel = {
	{(ContainerRNA *)&RNA_UIList, (ContainerRNA *)&RNA_UILayout,
	NULL,
	{(PropertyRNA *)&rna_Panel_rna_properties, (PropertyRNA *)&rna_Panel_is_popover}},
	"Panel", NULL, NULL, 1540, NULL, "Panel",
	"Panel containing UI elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Panel_rna_properties,
	NULL,
	NULL,
	rna_Panel_refine,
	NULL,
	rna_Panel_register,
	rna_Panel_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Panel_poll_func, (FunctionRNA *)&rna_Panel_draw_header_preset_func}
};

/* UIList */
CollectionPropertyRNA rna_UIList_rna_properties = {
	{(PropertyRNA *)&rna_UIList_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_rna_properties_begin, UIList_rna_properties_next, UIList_rna_properties_end, UIList_rna_properties_get, NULL, NULL, UIList_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UIList_rna_type = {
	{(PropertyRNA *)&rna_UIList_bl_idname, (PropertyRNA *)&rna_UIList_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_UIList_bl_idname = {
	{(PropertyRNA *)&rna_UIList_list_id, (PropertyRNA *)&rna_UIList_rna_type,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the uilist gets a custom ID, otherwise it takes the name of the class used to define the uilist (for example, if the class name is \"OBJECT_UL_vgroups\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_UL_vgroups\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_bl_idname_get, UIList_bl_idname_length, UIList_bl_idname_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_UIList_list_id = {
	{(PropertyRNA *)&rna_UIList_layout_type, (PropertyRNA *)&rna_UIList_bl_idname,
	-1, "list_id", 262144, 0, 0, 0, 0, "List Name",
	"Identifier of the list, if any was passed to the \"list_id\" parameter of \"template_list()\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_list_id_get, UIList_list_id_length, NULL, NULL, NULL, NULL, NULL, 0, 64, ""
};

EnumPropertyRNA rna_UIList_layout_type = {
	{(PropertyRNA *)&rna_UIList_use_filter_show, (PropertyRNA *)&rna_UIList_list_id,
	-1, "layout_type", 2, 0, 0, 4, 0, "layout_type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	offsetof(uiList, layout_type), 0, NULL},
	UIList_layout_type_get, NULL, NULL, NULL, NULL, rna_enum_uilist_layout_type_items, 3, 0
};

BoolPropertyRNA rna_UIList_use_filter_show = {
	{(PropertyRNA *)&rna_UIList_filter_name, (PropertyRNA *)&rna_UIList_layout_type,
	-1, "use_filter_show", 3, 0, 0, 0, 0, "Show Filter",
	"Show filtering options",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_use_filter_show_get, UIList_use_filter_show_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UIList_filter_name = {
	{(PropertyRNA *)&rna_UIList_use_filter_invert, (PropertyRNA *)&rna_UIList_use_filter_show,
	-1, "filter_name", -2147221503, 0, 0, 0, 0, "Filter by Name",
	"Only show items matching this name (use \'*\' as wildcard)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_filter_name_get, UIList_filter_name_length, UIList_filter_name_set, NULL, NULL, NULL, NULL, 0, 64, ""
};

BoolPropertyRNA rna_UIList_use_filter_invert = {
	{(PropertyRNA *)&rna_UIList_use_filter_sort_alpha, (PropertyRNA *)&rna_UIList_filter_name,
	-1, "use_filter_invert", 3, 0, 0, 0, 0, "Invert",
	"Invert filtering (show hidden items, and vice versa)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_use_filter_invert_get, UIList_use_filter_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UIList_use_filter_sort_alpha = {
	{(PropertyRNA *)&rna_UIList_use_filter_sort_reverse, (PropertyRNA *)&rna_UIList_use_filter_invert,
	-1, "use_filter_sort_alpha", 3, 0, 0, 0, 0, "Sort by Name",
	"Sort items by their name",
	676, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_use_filter_sort_alpha_get, UIList_use_filter_sort_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UIList_use_filter_sort_reverse = {
	{(PropertyRNA *)&rna_UIList_use_filter_sort_lock, (PropertyRNA *)&rna_UIList_use_filter_sort_alpha,
	-1, "use_filter_sort_reverse", 3, 0, 0, 0, 0, "Reverse",
	"Reverse the order of shown items",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_use_filter_sort_reverse_get, UIList_use_filter_sort_reverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UIList_use_filter_sort_lock = {
	{(PropertyRNA *)&rna_UIList_bitflag_filter_item, (PropertyRNA *)&rna_UIList_use_filter_sort_reverse,
	-1, "use_filter_sort_lock", 3, 0, 0, 0, 0, "Lock Order",
	"Lock the order of shown items (user cannot change it)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_use_filter_sort_lock_get, UIList_use_filter_sort_lock_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UIList_bitflag_filter_item = {
	{NULL, (PropertyRNA *)&rna_UIList_use_filter_sort_lock,
	-1, "bitflag_filter_item", 2, 0, 0, 0, 0, "FILTER_ITEM",
	"The value of the reserved bitflag \'FILTER_ITEM\' (in filter_flags values)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	UIList_bitflag_filter_item_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UIList_draw_item_context = {
	{(PropertyRNA *)&rna_UIList_draw_item_layout, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_UIList_draw_item_layout = {
	{(PropertyRNA *)&rna_UIList_draw_item_data, (PropertyRNA *)&rna_UIList_draw_item_context,
	-1, "layout", 8650752, 0, 1, 0, 0, "",
	"Layout to draw the item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

PointerPropertyRNA rna_UIList_draw_item_data = {
	{(PropertyRNA *)&rna_UIList_draw_item_item, (PropertyRNA *)&rna_UIList_draw_item_layout,
	-1, "data", 8388608, 0, 5, 0, 0, "",
	"Data from which to take Collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

PointerPropertyRNA rna_UIList_draw_item_item = {
	{(PropertyRNA *)&rna_UIList_draw_item_icon, (PropertyRNA *)&rna_UIList_draw_item_data,
	-1, "item", 8388608, 0, 5, 0, 0, "",
	"Item of the collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

IntPropertyRNA rna_UIList_draw_item_icon = {
	{(PropertyRNA *)&rna_UIList_draw_item_active_data, (PropertyRNA *)&rna_UIList_draw_item_item,
	-1, "icon", 3, 0, 1, 0, 0, "",
	"Icon of the item in the collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_UIList_draw_item_active_data = {
	{(PropertyRNA *)&rna_UIList_draw_item_active_property, (PropertyRNA *)&rna_UIList_draw_item_icon,
	-1, "active_data", 8650752, 0, 5, 0, 0, "",
	"Data from which to take property for the active element",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UIList_draw_item_active_property = {
	{(PropertyRNA *)&rna_UIList_draw_item_index, (PropertyRNA *)&rna_UIList_draw_item_active_data,
	-1, "active_property", 262145, 0, 9, 0, 0, "",
	"Identifier of property in active_data, for the active element",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

IntPropertyRNA rna_UIList_draw_item_index = {
	{(PropertyRNA *)&rna_UIList_draw_item_flt_flag, (PropertyRNA *)&rna_UIList_draw_item_active_property,
	-1, "index", 3, 0, 0, 0, 0, "",
	"Index of the item in the collection",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_UIList_draw_item_flt_flag = {
	{NULL, (PropertyRNA *)&rna_UIList_draw_item_index,
	-1, "flt_flag", 3, 0, 0, 0, 0, "",
	"The filter-flag result for this item",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_UIList_draw_item_func = {
	{(FunctionRNA *)&rna_UIList_draw_filter_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_UIList_draw_item_context, (PropertyRNA *)&rna_UIList_draw_item_flt_flag}},
	"draw_item", 96, "Draw an item in the list (NOTE: when you define your own draw_item function, you may want to check given \'item\' is of the right type...)",
	NULL,
	NULL
};

PointerPropertyRNA rna_UIList_draw_filter_context = {
	{(PropertyRNA *)&rna_UIList_draw_filter_layout, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_UIList_draw_filter_layout = {
	{NULL, (PropertyRNA *)&rna_UIList_draw_filter_context,
	-1, "layout", 8650752, 0, 1, 0, 0, "",
	"Layout to draw the item",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_UILayout
};

FunctionRNA rna_UIList_draw_filter_func = {
	{(FunctionRNA *)&rna_UIList_filter_items_func, (FunctionRNA *)&rna_UIList_draw_item_func,
	NULL,
	{(PropertyRNA *)&rna_UIList_draw_filter_context, (PropertyRNA *)&rna_UIList_draw_filter_layout}},
	"draw_filter", 96, "Draw filtering options",
	NULL,
	NULL
};

PointerPropertyRNA rna_UIList_filter_items_context = {
	{(PropertyRNA *)&rna_UIList_filter_items_data, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_UIList_filter_items_data = {
	{(PropertyRNA *)&rna_UIList_filter_items_property, (PropertyRNA *)&rna_UIList_filter_items_context,
	-1, "data", 8388608, 0, 5, 0, 0, "",
	"Data from which to take Collection property",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnyType
};

StringPropertyRNA rna_UIList_filter_items_property = {
	{(PropertyRNA *)&rna_UIList_filter_items_filter_flags, (PropertyRNA *)&rna_UIList_filter_items_data,
	-1, "property", 262145, 0, 1, 0, 0, "",
	"Identifier of property in data, for the collection",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, ""
};

static int rna_UIList_filter_items_filter_flags_default[1] = {
	0
};

IntPropertyRNA rna_UIList_filter_items_filter_flags = {
	{(PropertyRNA *)&rna_UIList_filter_items_filter_neworder, (PropertyRNA *)&rna_UIList_filter_items_property,
	-1, "filter_flags", 131075, 0, 2, 0, 0, "",
	"An array of filter flags, one for each item in the collection (NOTE: FILTER_ITEM bit is reserved, it defines whether the item is shown or not)",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_UIList_filter_items_filter_flags_default
};

static int rna_UIList_filter_items_filter_neworder_default[1] = {
	0
};

IntPropertyRNA rna_UIList_filter_items_filter_neworder = {
	{NULL, (PropertyRNA *)&rna_UIList_filter_items_filter_flags,
	-1, "filter_neworder", 131075, 0, 2, 0, 0, "",
	"An array of indices, one for each item in the collection, mapping the org index to the new one",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 0, 10000, 0, INT_MAX, 1, 0, rna_UIList_filter_items_filter_neworder_default
};

FunctionRNA rna_UIList_filter_items_func = {
	{NULL, (FunctionRNA *)&rna_UIList_draw_filter_func,
	NULL,
	{(PropertyRNA *)&rna_UIList_filter_items_context, (PropertyRNA *)&rna_UIList_filter_items_filter_neworder}},
	"filter_items", 96, "Filter and/or re-order items of the collection (output filter results in filter_flags, and reorder results in filter_neworder arrays)",
	NULL,
	NULL
};

StructRNA RNA_UIList = {
	{(ContainerRNA *)&RNA_Header, (ContainerRNA *)&RNA_Panel,
	NULL,
	{(PropertyRNA *)&rna_UIList_rna_properties, (PropertyRNA *)&rna_UIList_bitflag_filter_item}},
	"UIList", NULL, NULL, 1668, NULL, "UIList",
	"UI list containing the elements of a collection",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UIList_rna_properties,
	NULL,
	NULL,
	rna_UIList_refine,
	NULL,
	rna_UIList_register,
	rna_UIList_unregister,
	NULL,
	rna_UIList_idprops,
	{(FunctionRNA *)&rna_UIList_draw_item_func, (FunctionRNA *)&rna_UIList_filter_items_func}
};

/* Header */
CollectionPropertyRNA rna_Header_rna_properties = {
	{(PropertyRNA *)&rna_Header_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Header_rna_properties_begin, Header_rna_properties_next, Header_rna_properties_end, Header_rna_properties_get, NULL, NULL, Header_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Header_rna_type = {
	{(PropertyRNA *)&rna_Header_layout, (PropertyRNA *)&rna_Header_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Header_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Header_layout = {
	{(PropertyRNA *)&rna_Header_bl_idname, (PropertyRNA *)&rna_Header_rna_type,
	-1, "layout", 8388608, 0, 0, 0, 0, "Layout",
	"Structure of the header in the UI",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Header_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Header_bl_idname = {
	{(PropertyRNA *)&rna_Header_bl_space_type, (PropertyRNA *)&rna_Header_layout,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the header gets a custom ID, otherwise it takes the name of the class used to define the panel; for example, if the class name is \"OBJECT_HT_hello\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_HT_hello\"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Header_bl_idname_get, Header_bl_idname_length, Header_bl_idname_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

EnumPropertyRNA rna_Header_bl_space_type = {
	{(PropertyRNA *)&rna_Header_bl_region_type, (PropertyRNA *)&rna_Header_bl_idname,
	-1, "bl_space_type", 19, 0, 0, 0, 0, "Space Type",
	"The space where the header is going to be used in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Header_bl_space_type_get, Header_bl_space_type_set, NULL, NULL, NULL, rna_enum_space_type_items, 23, 0
};

EnumPropertyRNA rna_Header_bl_region_type = {
	{NULL, (PropertyRNA *)&rna_Header_bl_space_type,
	-1, "bl_region_type", 51, 0, 0, 0, 0, "Region Type",
	"The region where the header is going to be used in (defaults to header region)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Header_bl_region_type_get, Header_bl_region_type_set, NULL, NULL, NULL, rna_enum_region_type_items, 14, 1
};

PointerPropertyRNA rna_Header_draw_context = {
	{NULL, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Header_draw_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_Header_draw_context, (PropertyRNA *)&rna_Header_draw_context}},
	"draw", 32, "Draw UI elements into the header UI layout",
	NULL,
	NULL
};

StructRNA RNA_Header = {
	{(ContainerRNA *)&RNA_Menu, (ContainerRNA *)&RNA_UIList,
	NULL,
	{(PropertyRNA *)&rna_Header_rna_properties, (PropertyRNA *)&rna_Header_bl_region_type}},
	"Header", NULL, NULL, 1540, NULL, "Header",
	"Editor header containing UI elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Header_rna_properties,
	NULL,
	NULL,
	rna_Header_refine,
	NULL,
	rna_Header_register,
	rna_Header_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Header_draw_func, (FunctionRNA *)&rna_Header_draw_func}
};

/* Menu */
CollectionPropertyRNA rna_Menu_rna_properties = {
	{(PropertyRNA *)&rna_Menu_rna_type, NULL,
	-1, "rna_properties", 0, 0, 0, 1, 0, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_rna_properties_begin, Menu_rna_properties_next, Menu_rna_properties_end, Menu_rna_properties_get, NULL, NULL, Menu_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Menu_rna_type = {
	{(PropertyRNA *)&rna_Menu_layout, (PropertyRNA *)&rna_Menu_rna_properties,
	-1, "rna_type", 8912896, 0, 0, 0, 0, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Menu_layout = {
	{(PropertyRNA *)&rna_Menu_bl_idname, (PropertyRNA *)&rna_Menu_rna_type,
	-1, "layout", 8388608, 0, 0, 0, 0, "Layout",
	"Defines the structure of the menu in the UI",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

StringPropertyRNA rna_Menu_bl_idname = {
	{(PropertyRNA *)&rna_Menu_bl_label, (PropertyRNA *)&rna_Menu_layout,
	-1, "bl_idname", 262161, 0, 0, 0, 0, "ID Name",
	"If this is set, the menu gets a custom ID, otherwise it takes the name of the class used to define the menu (for example, if the class name is \"OBJECT_MT_hello\", and bl_idname is not set by the script, then bl_idname = \"OBJECT_MT_hello\")",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_bl_idname_get, Menu_bl_idname_length, Menu_bl_idname_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_Menu_bl_label = {
	{(PropertyRNA *)&rna_Menu_bl_translation_context, (PropertyRNA *)&rna_Menu_bl_idname,
	-1, "bl_label", 262161, 0, 0, 0, 0, "Label",
	"The menu label",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_bl_label_get, Menu_bl_label_length, Menu_bl_label_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

StringPropertyRNA rna_Menu_bl_translation_context = {
	{(PropertyRNA *)&rna_Menu_bl_description, (PropertyRNA *)&rna_Menu_bl_label,
	-1, "bl_translation_context", 262193, 0, 0, 0, 0, "bl_translation_context",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_bl_translation_context_get, Menu_bl_translation_context_length, Menu_bl_translation_context_set, NULL, NULL, NULL, NULL, 0, 0, "*"
};

StringPropertyRNA rna_Menu_bl_description = {
	{(PropertyRNA *)&rna_Menu_bl_owner_id, (PropertyRNA *)&rna_Menu_bl_translation_context,
	-1, "bl_description", 49, 0, 0, 0, 0, "bl_description",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_bl_description_get, Menu_bl_description_length, Menu_bl_description_set, NULL, NULL, NULL, NULL, 0, 240, ""
};

StringPropertyRNA rna_Menu_bl_owner_id = {
	{NULL, (PropertyRNA *)&rna_Menu_bl_description,
	-1, "bl_owner_id", 262193, 0, 0, 0, 0, "bl_owner_id",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	Menu_bl_owner_id_get, Menu_bl_owner_id_length, Menu_bl_owner_id_set, NULL, NULL, NULL, NULL, 0, 0, ""
};

BoolPropertyRNA rna_Menu_poll_visible = {
	{(PropertyRNA *)&rna_Menu_poll_context, NULL,
	-1, "visible", 3, 0, 2, 0, 0, "",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Menu_poll_context = {
	{NULL, (PropertyRNA *)&rna_Menu_poll_visible,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Menu_poll_func = {
	{(FunctionRNA *)&rna_Menu_draw_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Menu_poll_visible, (PropertyRNA *)&rna_Menu_poll_context}},
	"poll", 97, "If this method returns a non-null output, then the menu can be drawn",
	NULL,
	(PropertyRNA *)&rna_Menu_poll_visible
};

PointerPropertyRNA rna_Menu_draw_context = {
	{NULL, NULL,
	-1, "context", 8388608, 0, 1, 0, 0, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL, rna_property_override_diff_default, rna_property_override_store_default, rna_property_override_apply_default,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Menu_draw_func = {
	{NULL, (FunctionRNA *)&rna_Menu_poll_func,
	NULL,
	{(PropertyRNA *)&rna_Menu_draw_context, (PropertyRNA *)&rna_Menu_draw_context}},
	"draw", 32, "Draw UI elements into the menu UI layout",
	NULL,
	NULL
};

StructRNA RNA_Menu = {
	{(ContainerRNA *)&RNA_ThemeFontStyle, (ContainerRNA *)&RNA_Header,
	NULL,
	{(PropertyRNA *)&rna_Menu_rna_properties, (PropertyRNA *)&rna_Menu_bl_owner_id}},
	"Menu", NULL, NULL, 1540, NULL, "Menu",
	"Editor menu containing buttons",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Menu_rna_properties,
	NULL,
	NULL,
	rna_Menu_refine,
	NULL,
	rna_Menu_register,
	rna_Menu_unregister,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Menu_poll_func, (FunctionRNA *)&rna_Menu_draw_func}
};

