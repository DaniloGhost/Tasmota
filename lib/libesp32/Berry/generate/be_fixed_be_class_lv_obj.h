#include "be_constobj.h"

static be_define_const_map_slots(be_class_lv_obj_map) {
    { be_const_key(get_style_border_color, -1), be_const_func(lvbe_obj_get_style_border_color) },
    { be_const_key(get_style_scale_grad_color, -1), be_const_func(lvbe_obj_get_style_scale_grad_color) },
    { be_const_key(get_state, -1), be_const_func(lvbe_obj_get_state) },
    { be_const_key(refresh_style, -1), be_const_func(lvbe_obj_refresh_style) },
    { be_const_key(set_style_local_text_opa, -1), be_const_func(lvbe_obj_set_style_local_text_opa) },
    { be_const_key(create, 181), be_const_func(lvbe_obj_create) },
    { be_const_key(refresh_ext_draw_pad, -1), be_const_func(lvbe_obj_refresh_ext_draw_pad) },
    { be_const_key(get_style_pad_top, 75), be_const_func(lvbe_obj_get_style_pad_top) },
    { be_const_key(get_style_opa_scale, 82), be_const_func(lvbe_obj_get_style_opa_scale) },
    { be_const_key(align_mid_x, 151), be_const_func(lvbe_obj_align_mid_x) },
    { be_const_key(set_style_local_margin_top, -1), be_const_func(lvbe_obj_set_style_local_margin_top) },
    { be_const_key(align_y, -1), be_const_func(lvbe_obj_align_y) },
    { be_const_key(set_ext_click_area, 208), be_const_func(lvbe_obj_set_ext_click_area) },
    { be_const_key(init, -1), be_const_func(lvbe_obj_create) },
    { be_const_key(clear_protect, -1), be_const_func(lvbe_obj_clear_protect) },
    { be_const_key(set_style_local_transition_prop_1, -1), be_const_func(lvbe_obj_set_style_local_transition_prop_1) },
    { be_const_key(set_style_local_shadow_width, -1), be_const_func(lvbe_obj_set_style_local_shadow_width) },
    { be_const_key(set_drag_dir, -1), be_const_func(lvbe_obj_set_drag_dir) },
    { be_const_key(set_style_local_pattern_recolor, -1), be_const_func(lvbe_obj_set_style_local_pattern_recolor) },
    { be_const_key(is_visible, 130), be_const_func(lvbe_obj_is_visible) },
    { be_const_key(set_style_local_value_blend_mode, 234), be_const_func(lvbe_obj_set_style_local_value_blend_mode) },
    { be_const_key(hittest, -1), be_const_func(lvbe_obj_hittest) },
    { be_const_key(is_protected, -1), be_const_func(lvbe_obj_is_protected) },
    { be_const_key(get_style_transform_width, 17), be_const_func(lvbe_obj_get_style_transform_width) },
    { be_const_key(set_event_cb, 145), be_const_func(lvbe_obj_set_event_cb) },
    { be_const_key(align_x, -1), be_const_func(lvbe_obj_align_x) },
    { be_const_key(set_style_local_outline_pad, 9), be_const_func(lvbe_obj_set_style_local_outline_pad) },
    { be_const_key(set_style_local_text_line_space, -1), be_const_func(lvbe_obj_set_style_local_text_line_space) },
    { be_const_key(get_child, -1), be_const_func(lvbe_obj_get_child) },
    { be_const_key(set_style_local_margin_left, 195), be_const_func(lvbe_obj_set_style_local_margin_left) },
    { be_const_key(set_style_local_shadow_ofs_y, -1), be_const_func(lvbe_obj_set_style_local_shadow_ofs_y) },
    { be_const_key(set_top, -1), be_const_func(lvbe_obj_set_top) },
    { be_const_key(get_style_pattern_image, -1), be_const_func(lvbe_obj_get_style_pattern_image) },
    { be_const_key(get_style_outline_opa, 138), be_const_func(lvbe_obj_get_style_outline_opa) },
    { be_const_key(fade_out, 176), be_const_func(lvbe_obj_fade_out) },
    { be_const_key(del, -1), be_const_func(lvbe_obj_del) },
    { be_const_key(get_style_pad_right, 1), be_const_func(lvbe_obj_get_style_pad_right) },
    { be_const_key(clean, -1), be_const_func(lvbe_obj_clean) },
    { be_const_key(get_style_border_width, -1), be_const_func(lvbe_obj_get_style_border_width) },
    { be_const_key(set_style_local_pattern_opa, 226), be_const_func(lvbe_obj_set_style_local_pattern_opa) },
    { be_const_key(align_mid_y, -1), be_const_func(lvbe_obj_align_mid_y) },
    { be_const_key(get_style_line_color, -1), be_const_func(lvbe_obj_get_style_line_color) },
    { be_const_key(is_focused, -1), be_const_func(lvbe_obj_is_focused) },
    { be_const_key(set_style_local_transition_prop_3, 113), be_const_func(lvbe_obj_set_style_local_transition_prop_3) },
    { be_const_key(set_style_local_image_opa, -1), be_const_func(lvbe_obj_set_style_local_image_opa) },
    { be_const_key(set_style_local_bg_grad_stop, -1), be_const_func(lvbe_obj_set_style_local_bg_grad_stop) },
    { be_const_key(del_async, 260), be_const_func(lvbe_obj_del_async) },
    { be_const_key(set_y, 119), be_const_func(lvbe_obj_set_y) },
    { be_const_key(set_hidden, -1), be_const_func(lvbe_obj_set_hidden) },
    { be_const_key(get_adv_hittest, -1), be_const_func(lvbe_obj_get_adv_hittest) },
    { be_const_key(tostring, -1), be_const_func(lvx_tostring) },
    { be_const_key(set_style_local_value_line_space, -1), be_const_func(lvbe_obj_set_style_local_value_line_space) },
    { be_const_key(set_style_local_border_side, -1), be_const_func(lvbe_obj_set_style_local_border_side) },
    { be_const_key(set_style_local_bg_grad_color, 136), be_const_func(lvbe_obj_set_style_local_bg_grad_color) },
    { be_const_key(set_style_local_shadow_color, -1), be_const_func(lvbe_obj_set_style_local_shadow_color) },
    { be_const_key(set_style_local_pad_left, -1), be_const_func(lvbe_obj_set_style_local_pad_left) },
    { be_const_key(set_style_local_transition_delay, -1), be_const_func(lvbe_obj_set_style_local_transition_delay) },
    { be_const_key(get_auto_realign, 38), be_const_func(lvbe_obj_get_auto_realign) },
    { be_const_key(get_style_value_ofs_x, -1), be_const_func(lvbe_obj_get_style_value_ofs_x) },
    { be_const_key(set_style_local_image_blend_mode, 56), be_const_func(lvbe_obj_set_style_local_image_blend_mode) },
    { be_const_key(set_style_local_pad_bottom, -1), be_const_func(lvbe_obj_set_style_local_pad_bottom) },
    { be_const_key(get_style_image_recolor, 255), be_const_func(lvbe_obj_get_style_image_recolor) },
    { be_const_key(set_height_fit, -1), be_const_func(lvbe_obj_set_height_fit) },
    { be_const_key(set_style_local_line_width, 32), be_const_func(lvbe_obj_set_style_local_line_width) },
    { be_const_key(set_style_local_border_color, 135), be_const_func(lvbe_obj_set_style_local_border_color) },
    { be_const_key(get_width, -1), be_const_func(lvbe_obj_get_width) },
    { be_const_key(set_style_local_scale_width, -1), be_const_func(lvbe_obj_set_style_local_scale_width) },
    { be_const_key(get_local_style, 189), be_const_func(lvbe_obj_get_local_style) },
    { be_const_key(get_ext_click_pad_bottom, -1), be_const_func(lvbe_obj_get_ext_click_pad_bottom) },
    { be_const_key(set_style_local_border_post, -1), be_const_func(lvbe_obj_set_style_local_border_post) },
    { be_const_key(get_screen, -1), be_const_func(lvbe_obj_get_screen) },
    { be_const_key(set_style_local_line_opa, 162), be_const_func(lvbe_obj_set_style_local_line_opa) },
    { be_const_key(set_style_local_pattern_blend_mode, -1), be_const_func(lvbe_obj_set_style_local_pattern_blend_mode) },
    { be_const_key(set_style_local_transform_height, -1), be_const_func(lvbe_obj_set_style_local_transform_height) },
    { be_const_key(set_style_local_border_opa, 86), be_const_func(lvbe_obj_set_style_local_border_opa) },
    { be_const_key(get_style_text_color, -1), be_const_func(lvbe_obj_get_style_text_color) },
    { be_const_key(get_style_shadow_ofs_x, 84), be_const_func(lvbe_obj_get_style_shadow_ofs_x) },
    { be_const_key(get_ext_click_pad_right, -1), be_const_func(lvbe_obj_get_ext_click_pad_right) },
    { be_const_key(get_style_bg_opa, 104), be_const_func(lvbe_obj_get_style_bg_opa) },
    { be_const_key(set_style_local_text_sel_bg_color, 219), be_const_func(lvbe_obj_set_style_local_text_sel_bg_color) },
    { be_const_key(set_style_local_opa_scale, -1), be_const_func(lvbe_obj_set_style_local_opa_scale) },
    { be_const_key(set_style_local_value_opa, -1), be_const_func(lvbe_obj_set_style_local_value_opa) },
    { be_const_key(set_style_local_margin_bottom, 242), be_const_func(lvbe_obj_set_style_local_margin_bottom) },
    { be_const_key(set_style_local_scale_end_line_width, -1), be_const_func(lvbe_obj_set_style_local_scale_end_line_width) },
    { be_const_key(set_gesture_parent, -1), be_const_func(lvbe_obj_set_gesture_parent) },
    { be_const_key(get_protect, -1), be_const_func(lvbe_obj_get_protect) },
    { be_const_key(set_style_local_bg_main_stop, 281), be_const_func(lvbe_obj_set_style_local_bg_main_stop) },
    { be_const_key(get_style_transition_prop_1, -1), be_const_func(lvbe_obj_get_style_transition_prop_1) },
    { be_const_key(set_style_local_scale_end_border_width, -1), be_const_func(lvbe_obj_set_style_local_scale_end_border_width) },
    { be_const_key(set_style_local_outline_color, -1), be_const_func(lvbe_obj_set_style_local_outline_color) },
    { be_const_key(set_style_local_transform_zoom, 128), be_const_func(lvbe_obj_set_style_local_transform_zoom) },
    { be_const_key(get_style_image_opa, -1), be_const_func(lvbe_obj_get_style_image_opa) },
    { be_const_key(get_focused_obj, -1), be_const_func(lvbe_obj_get_focused_obj) },
    { be_const_key(set_user_data, -1), be_const_func(lvbe_obj_set_user_data) },
    { be_const_key(set_adv_hittest, -1), be_const_func(lvbe_obj_set_adv_hittest) },
    { be_const_key(init_draw_line_dsc, -1), be_const_func(lvbe_obj_init_draw_line_dsc) },
    { be_const_key(set_focus_parent, -1), be_const_func(lvbe_obj_set_focus_parent) },
    { be_const_key(set_style_local_image_recolor, -1), be_const_func(lvbe_obj_set_style_local_image_recolor) },
    { be_const_key(get_parent, -1), be_const_func(lvbe_obj_get_parent) },
    { be_const_key(init_draw_rect_dsc, 67), be_const_func(lvbe_obj_init_draw_rect_dsc) },
    { be_const_key(set_style_local_line_dash_width, -1), be_const_func(lvbe_obj_set_style_local_line_dash_width) },
    { be_const_key(get_style_transition_prop_2, 182), be_const_func(lvbe_obj_get_style_transition_prop_2) },
    { be_const_key(get_drag_parent, -1), be_const_func(lvbe_obj_get_drag_parent) },
    { be_const_key(get_style_line_opa, -1), be_const_func(lvbe_obj_get_style_line_opa) },
    { be_const_key(get_y, -1), be_const_func(lvbe_obj_get_y) },
    { be_const_key(set_style_local_shadow_opa, 18), be_const_func(lvbe_obj_set_style_local_shadow_opa) },
    { be_const_key(add_protect, 69), be_const_func(lvbe_obj_add_protect) },
    { be_const_key(get_width_margin, -1), be_const_func(lvbe_obj_get_width_margin) },
    { be_const_key(remove_style_local_prop, -1), be_const_func(lvbe_obj_remove_style_local_prop) },
    { be_const_key(set_style_local_value_align, -1), be_const_func(lvbe_obj_set_style_local_value_align) },
    { be_const_key(get_style_text_letter_space, -1), be_const_func(lvbe_obj_get_style_text_letter_space) },
    { be_const_key(set_style_local_pattern_image, -1), be_const_func(lvbe_obj_set_style_local_pattern_image) },
    { be_const_key(get_style_pattern_recolor_opa, -1), be_const_func(lvbe_obj_get_style_pattern_recolor_opa) },
    { be_const_key(get_width_grid, 127), be_const_func(lvbe_obj_get_width_grid) },
    { be_const_key(get_top, 223), be_const_func(lvbe_obj_get_top) },
    { be_const_key(get_style_transition_prop_3, -1), be_const_func(lvbe_obj_get_style_transition_prop_3) },
    { be_const_key(get_user_data, 28), be_const_func(lvbe_obj_get_user_data) },
    { be_const_key(get_width_fit, 158), be_const_func(lvbe_obj_get_width_fit) },
    { be_const_key(align_mid, 283), be_const_func(lvbe_obj_align_mid) },
    { be_const_key(get_style_value_str, 178), be_const_func(lvbe_obj_get_style_value_str) },
    { be_const_key(set_style_local_outline_width, 175), be_const_func(lvbe_obj_set_style_local_outline_width) },
    { be_const_key(set_style_local_value_str, 94), be_const_func(lvbe_obj_set_style_local_value_str) },
    { be_const_key(get_drag, 251), be_const_func(lvbe_obj_get_drag) },
    { be_const_key(set_style_local_line_rounded, -1), be_const_func(lvbe_obj_set_style_local_line_rounded) },
    { be_const_key(get_type, 139), be_const_func(lvbe_obj_get_type) },
    { be_const_key(set_style_local_pattern_repeat, -1), be_const_func(lvbe_obj_set_style_local_pattern_repeat) },
    { be_const_key(get_style_text_sel_bg_color, 133), be_const_func(lvbe_obj_get_style_text_sel_bg_color) },
    { be_const_key(get_style_transition_time, 72), be_const_func(lvbe_obj_get_style_transition_time) },
    { be_const_key(invalidate, 184), be_const_func(lvbe_obj_invalidate) },
    { be_const_key(get_style_transition_prop_4, 0), be_const_func(lvbe_obj_get_style_transition_prop_4) },
    { be_const_key(set_style_local_bg_blend_mode, -1), be_const_func(lvbe_obj_set_style_local_bg_blend_mode) },
    { be_const_key(get_style_bg_main_stop, 37), be_const_func(lvbe_obj_get_style_bg_main_stop) },
    { be_const_key(get_ext_attr, 80), be_const_func(lvbe_obj_get_ext_attr) },
    { be_const_key(set_signal_cb, 51), be_const_func(lvbe_obj_set_signal_cb) },
    { be_const_key(get_style_pad_inner, -1), be_const_func(lvbe_obj_get_style_pad_inner) },
    { be_const_key(get_x, 272), be_const_func(lvbe_obj_get_x) },
    { be_const_key(get_style_bg_grad_stop, -1), be_const_func(lvbe_obj_get_style_bg_grad_stop) },
    { be_const_key(add_state, -1), be_const_func(lvbe_obj_add_state) },
    { be_const_key(set_x, -1), be_const_func(lvbe_obj_set_x) },
    { be_const_key(get_draw_rect_ext_pad_size, -1), be_const_func(lvbe_obj_get_draw_rect_ext_pad_size) },
    { be_const_key(get_style_margin_right, -1), be_const_func(lvbe_obj_get_style_margin_right) },
    { be_const_key(init_draw_img_dsc, -1), be_const_func(lvbe_obj_init_draw_img_dsc) },
    { be_const_key(set_size, -1), be_const_func(lvbe_obj_set_size) },
    { be_const_key(get_style_transition_prop_5, 89), be_const_func(lvbe_obj_get_style_transition_prop_5) },
    { be_const_key(set_style_local_size, -1), be_const_func(lvbe_obj_set_style_local_size) },
    { be_const_key(handle_get_type_signal, -1), be_const_func(lvbe_obj_handle_get_type_signal) },
    { be_const_key(get_style_transform_height, -1), be_const_func(lvbe_obj_get_style_transform_height) },
    { be_const_key(set_style_local_pad_top, 263), be_const_func(lvbe_obj_set_style_local_pad_top) },
    { be_const_key(get_group, 165), be_const_func(lvbe_obj_get_group) },
    { be_const_key(set_width_margin, -1), be_const_func(lvbe_obj_set_width_margin) },
    { be_const_key(set_style_local_line_dash_gap, 248), be_const_func(lvbe_obj_set_style_local_line_dash_gap) },
    { be_const_key(set_parent_event, -1), be_const_func(lvbe_obj_set_parent_event) },
    { be_const_key(remove_style, -1), be_const_func(lvbe_obj_remove_style) },
    { be_const_key(set_pos, -1), be_const_func(lvbe_obj_set_pos) },
    { be_const_key(get_style_value_letter_space, -1), be_const_func(lvbe_obj_get_style_value_letter_space) },
    { be_const_key(fade_in, -1), be_const_func(lvbe_obj_fade_in) },
    { be_const_key(get_style_text_opa, 213), be_const_func(lvbe_obj_get_style_text_opa) },
    { be_const_key(get_style_transition_prop_6, -1), be_const_func(lvbe_obj_get_style_transition_prop_6) },
    { be_const_key(set_auto_realign, -1), be_const_func(lvbe_obj_set_auto_realign) },
    { be_const_key(set_style_local_shadow_ofs_x, 118), be_const_func(lvbe_obj_set_style_local_shadow_ofs_x) },
    { be_const_key(set_style_local_radius, -1), be_const_func(lvbe_obj_set_style_local_radius) },
    { be_const_key(get_style_transform_angle, -1), be_const_func(lvbe_obj_get_style_transform_angle) },
    { be_const_key(get_drag_throw, 216), be_const_func(lvbe_obj_get_drag_throw) },
    { be_const_key(set_style_local_border_width, -1), be_const_func(lvbe_obj_set_style_local_border_width) },
    { be_const_key(get_style_bg_grad_color, 132), be_const_func(lvbe_obj_get_style_bg_grad_color) },
    { be_const_key(set_style_local_shadow_spread, -1), be_const_func(lvbe_obj_set_style_local_shadow_spread) },
    { be_const_key(get_hidden, -1), be_const_func(lvbe_obj_get_hidden) },
    { be_const_key(set_base_dir, 134), be_const_func(lvbe_obj_set_base_dir) },
    { be_const_key(allocate_ext_attr, -1), be_const_func(lvbe_obj_allocate_ext_attr) },
    { be_const_key(set_style_local_scale_border_width, 116), be_const_func(lvbe_obj_set_style_local_scale_border_width) },
    { be_const_key(get_style_line_dash_width, -1), be_const_func(lvbe_obj_get_style_line_dash_width) },
    { be_const_key(set_style_local_image_recolor_opa, -1), be_const_func(lvbe_obj_set_style_local_image_recolor_opa) },
    { be_const_key(set_style_local_outline_opa, -1), be_const_func(lvbe_obj_set_style_local_outline_opa) },
    { be_const_key(set_drag_parent, 30), be_const_func(lvbe_obj_set_drag_parent) },
    { be_const_key(add_style, -1), be_const_func(lvbe_obj_add_style) },
    { be_const_key(get_child_back, 215), be_const_func(lvbe_obj_get_child_back) },
    { be_const_key(get_style_scale_end_color, 10), be_const_func(lvbe_obj_get_style_scale_end_color) },
    { be_const_key(get_style_bg_color, 171), be_const_func(lvbe_obj_get_style_bg_color) },
    { be_const_key(get_style_outline_pad, -1), be_const_func(lvbe_obj_get_style_outline_pad) },
    { be_const_key(get_style_transition_delay, -1), be_const_func(lvbe_obj_get_style_transition_delay) },
    { be_const_key(get_style_text_sel_color, -1), be_const_func(lvbe_obj_get_style_text_sel_color) },
    { be_const_key(set_style_local_text_sel_color, -1), be_const_func(lvbe_obj_set_style_local_text_sel_color) },
    { be_const_key(set_style_local_transform_width, -1), be_const_func(lvbe_obj_set_style_local_transform_width) },
    { be_const_key(get_height_margin, 60), be_const_func(lvbe_obj_get_height_margin) },
    { be_const_key(get_style_shadow_ofs_y, -1), be_const_func(lvbe_obj_get_style_shadow_ofs_y) },
    { be_const_key(get_style_shadow_color, 150), be_const_func(lvbe_obj_get_style_shadow_color) },
    { be_const_key(get_height_fit, -1), be_const_func(lvbe_obj_get_height_fit) },
    { be_const_key(get_style_value_opa, -1), be_const_func(lvbe_obj_get_style_value_opa) },
    { be_const_key(set_parent, -1), be_const_func(lvbe_obj_set_parent) },
    { be_const_key(clear_state, 142), be_const_func(lvbe_obj_clear_state) },
    { be_const_key(invalidate_area, -1), be_const_func(lvbe_obj_invalidate_area) },
    { be_const_key(is_point_on_coords, -1), be_const_func(lvbe_obj_is_point_on_coords) },
    { be_const_key(set_style_local_scale_grad_color, -1), be_const_func(lvbe_obj_set_style_local_scale_grad_color) },
    { be_const_key(get_style_line_rounded, 217), be_const_func(lvbe_obj_get_style_line_rounded) },
    { be_const_key(set_style_local_transform_angle, 117), be_const_func(lvbe_obj_set_style_local_transform_angle) },
    { be_const_key(set_style_local_transition_prop_2, -1), be_const_func(lvbe_obj_set_style_local_transition_prop_2) },
    { be_const_key(set_style_local_value_ofs_y, -1), be_const_func(lvbe_obj_set_style_local_value_ofs_y) },
    { be_const_key(get_style_transform_zoom, 229), be_const_func(lvbe_obj_get_style_transform_zoom) },
    { be_const_key(get_style_size, -1), be_const_func(lvbe_obj_get_style_size) },
    { be_const_key(get_style_margin_top, -1), be_const_func(lvbe_obj_get_style_margin_top) },
    { be_const_key(set_style_local_text_letter_space, -1), be_const_func(lvbe_obj_set_style_local_text_letter_space) },
    { be_const_key(set_style_local_pattern_recolor_opa, -1), be_const_func(lvbe_obj_set_style_local_pattern_recolor_opa) },
    { be_const_key(set_style_local_scale_end_color, 271), be_const_func(lvbe_obj_set_style_local_scale_end_color) },
    { be_const_key(area_is_visible, -1), be_const_func(lvbe_obj_area_is_visible) },
    { be_const_key(get_height_grid, -1), be_const_func(lvbe_obj_get_height_grid) },
    { be_const_key(get_style_text_line_space, 107), be_const_func(lvbe_obj_get_style_text_line_space) },
    { be_const_key(set_style_local_shadow_blend_mode, -1), be_const_func(lvbe_obj_set_style_local_shadow_blend_mode) },
    { be_const_key(set_style_local_border_blend_mode, 13), be_const_func(lvbe_obj_set_style_local_border_blend_mode) },
    { be_const_key(get_base_dir, -1), be_const_func(lvbe_obj_get_base_dir) },
    { be_const_key(get_focus_parent, -1), be_const_func(lvbe_obj_get_focus_parent) },
    { be_const_key(set_style_local_bg_color, 249), be_const_func(lvbe_obj_set_style_local_bg_color) },
    { be_const_key(get_style_pattern_repeat, -1), be_const_func(lvbe_obj_get_style_pattern_repeat) },
    { be_const_key(get_coords, -1), be_const_func(lvbe_obj_get_coords) },
    { be_const_key(get_style_shadow_spread, -1), be_const_func(lvbe_obj_get_style_shadow_spread) },
    { be_const_key(set_width_fit, -1), be_const_func(lvbe_obj_set_width_fit) },
    { be_const_key(set_style_local_value_font, -1), be_const_func(lvbe_obj_set_style_local_value_font) },
    { be_const_key(set_width, -1), be_const_func(lvbe_obj_set_width) },
    { be_const_key(set_style_local_text_font, 209), be_const_func(lvbe_obj_set_style_local_text_font) },
    { be_const_key(align, -1), be_const_func(lvbe_obj_align) },
    { be_const_key(set_design_cb, -1), be_const_func(lvbe_obj_set_design_cb) },
    { be_const_key(reset_style_list, 102), be_const_func(lvbe_obj_reset_style_list) },
    { be_const_key(set_drag_throw, -1), be_const_func(lvbe_obj_set_drag_throw) },
    { be_const_key(get_ext_click_pad_top, -1), be_const_func(lvbe_obj_get_ext_click_pad_top) },
    { be_const_key(set_style_local_value_letter_space, 211), be_const_func(lvbe_obj_set_style_local_value_letter_space) },
    { be_const_key(get_click, -1), be_const_func(lvbe_obj_get_click) },
    { be_const_key(get_style_value_ofs_y, -1), be_const_func(lvbe_obj_get_style_value_ofs_y) },
    { be_const_key(get_style_pattern_opa, -1), be_const_func(lvbe_obj_get_style_pattern_opa) },
    { be_const_key(set_style_local_line_blend_mode, -1), be_const_func(lvbe_obj_set_style_local_line_blend_mode) },
    { be_const_key(get_inner_coords, -1), be_const_func(lvbe_obj_get_inner_coords) },
    { be_const_key(get_style_radius, -1), be_const_func(lvbe_obj_get_style_radius) },
    { be_const_key(get_style_line_width, -1), be_const_func(lvbe_obj_get_style_line_width) },
    { be_const_key(set_style_local_pad_inner, -1), be_const_func(lvbe_obj_set_style_local_pad_inner) },
    { be_const_key(set_style_local_line_color, 124), be_const_func(lvbe_obj_set_style_local_line_color) },
    { be_const_key(set_style_local_pad_right, -1), be_const_func(lvbe_obj_set_style_local_pad_right) },
    { be_const_key(set_state, -1), be_const_func(lvbe_obj_set_state) },
    { be_const_key(move_background, -1), be_const_func(lvbe_obj_move_background) },
    { be_const_key(set_style_local_transition_prop_4, -1), be_const_func(lvbe_obj_set_style_local_transition_prop_4) },
    { be_const_key(get_ext_click_pad_left, -1), be_const_func(lvbe_obj_get_ext_click_pad_left) },
    { be_const_key(get_ext_draw_pad, -1), be_const_func(lvbe_obj_get_ext_draw_pad) },
    { be_const_key(get_style_shadow_width, 58), be_const_func(lvbe_obj_get_style_shadow_width) },
    { be_const_key(clean_style_list, -1), be_const_func(lvbe_obj_clean_style_list) },
    { be_const_key(get_style_pad_bottom, -1), be_const_func(lvbe_obj_get_style_pad_bottom) },
    { be_const_key(set_style_local_value_color, -1), be_const_func(lvbe_obj_set_style_local_value_color) },
    { be_const_key(get_style_value_line_space, 44), be_const_func(lvbe_obj_get_style_value_line_space) },
    { be_const_key(get_style_shadow_opa, 62), be_const_func(lvbe_obj_get_style_shadow_opa) },
    { be_const_key(get_style_margin_left, -1), be_const_func(lvbe_obj_get_style_margin_left) },
    { be_const_key(get_style_scale_end_line_width, -1), be_const_func(lvbe_obj_get_style_scale_end_line_width) },
    { be_const_key(get_style_scale_width, 50), be_const_func(lvbe_obj_get_style_scale_width) },
    { be_const_key(finish_transitions, -1), be_const_func(lvbe_obj_finish_transitions) },
    { be_const_key(set_style_local_value_ofs_x, -1), be_const_func(lvbe_obj_set_style_local_value_ofs_x) },
    { be_const_key(set_style_local_transition_prop_5, 53), be_const_func(lvbe_obj_set_style_local_transition_prop_5) },
    { be_const_key(get_drag_dir, -1), be_const_func(lvbe_obj_get_drag_dir) },
    { be_const_key(set_style_local_text_decor, -1), be_const_func(lvbe_obj_set_style_local_text_decor) },
    { be_const_key(get_style_outline_color, -1), be_const_func(lvbe_obj_get_style_outline_color) },
    { be_const_key(count_children, 79), be_const_func(lvbe_obj_count_children) },
    { be_const_key(del_anim_ready_cb, 98), be_const_func(lvbe_obj_del_anim_ready_cb) },
    { be_const_key(get_style_pattern_recolor, 227), be_const_func(lvbe_obj_get_style_pattern_recolor) },
    { be_const_key(get_gesture_parent, 282), be_const_func(lvbe_obj_get_gesture_parent) },
    { be_const_key(get_style_image_recolor_opa, -1), be_const_func(lvbe_obj_get_style_image_recolor_opa) },
    { be_const_key(realign, -1), be_const_func(lvbe_obj_realign) },
    { be_const_key(get_parent_event, -1), be_const_func(lvbe_obj_get_parent_event) },
    { be_const_key(set_style_local_bg_grad_dir, -1), be_const_func(lvbe_obj_set_style_local_bg_grad_dir) },
    { be_const_key(set_style_local_transition_path, -1), be_const_func(lvbe_obj_set_style_local_transition_path) },
    { be_const_key(get_style_line_dash_gap, -1), be_const_func(lvbe_obj_get_style_line_dash_gap) },
    { be_const_key(set_style_local_transition_prop_6, 95), be_const_func(lvbe_obj_set_style_local_transition_prop_6) },
    { be_const_key(set_click, -1), be_const_func(lvbe_obj_set_click) },
    { be_const_key(count_children_recursive, -1), be_const_func(lvbe_obj_count_children_recursive) },
    { be_const_key(set_height, 154), be_const_func(lvbe_obj_set_height) },
    { be_const_key(get_style_border_opa, -1), be_const_func(lvbe_obj_get_style_border_opa) },
    { be_const_key(set_style_local_text_color, 140), be_const_func(lvbe_obj_set_style_local_text_color) },
    { be_const_key(set_style_local_clip_corner, -1), be_const_func(lvbe_obj_set_style_local_clip_corner) },
    { be_const_key(get_style_outline_width, -1), be_const_func(lvbe_obj_get_style_outline_width) },
    { be_const_key(set_style_local_text_blend_mode, -1), be_const_func(lvbe_obj_set_style_local_text_blend_mode) },
    { be_const_key(get_style_margin_bottom, -1), be_const_func(lvbe_obj_get_style_margin_bottom) },
    { be_const_key(get_style_scale_border_width, -1), be_const_func(lvbe_obj_get_style_scale_border_width) },
    { be_const_key(set_style_local_transition_time, -1), be_const_func(lvbe_obj_set_style_local_transition_time) },
    { be_const_key(move_foreground, -1), be_const_func(lvbe_obj_move_foreground) },
    { be_const_key(set_style_local_outline_blend_mode, -1), be_const_func(lvbe_obj_set_style_local_outline_blend_mode) },
    { be_const_key(set_drag, -1), be_const_func(lvbe_obj_set_drag) },
    { be_const_key(get_style_clip_corner, -1), be_const_func(lvbe_obj_get_style_clip_corner) },
    { be_const_key(get_height, 285), be_const_func(lvbe_obj_get_height) },
    { be_const_key(set_style_local_bg_opa, -1), be_const_func(lvbe_obj_set_style_local_bg_opa) },
    { be_const_key(init_draw_label_dsc, -1), be_const_func(lvbe_obj_init_draw_label_dsc) },
    { be_const_key(get_style_border_post, -1), be_const_func(lvbe_obj_get_style_border_post) },
    { be_const_key(get_style_value_color, -1), be_const_func(lvbe_obj_get_style_value_color) },
    { be_const_key(set_height_margin, 289), be_const_func(lvbe_obj_set_height_margin) },
    { be_const_key(dot_p, -1), be_const_int(0) },
    { be_const_key(get_style_pad_left, -1), be_const_func(lvbe_obj_get_style_pad_left) },
    { be_const_key(report_style_mod, -1), be_const_func(lvbe_obj_report_style_mod) },
    { be_const_key(set_style_local_margin_right, -1), be_const_func(lvbe_obj_set_style_local_margin_right) },
    { be_const_key(get_style_scale_end_border_width, 141), be_const_func(lvbe_obj_get_style_scale_end_border_width) },
};

static be_define_const_map(
    be_class_lv_obj_map,
    291
);

BE_EXPORT_VARIABLE be_define_const_class(
    be_class_lv_obj,
    1,
    NULL,
    lv_obj
);