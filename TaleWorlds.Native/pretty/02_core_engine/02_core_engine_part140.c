#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part140.c - 核心引擎模块第140部分
// 包含UI系统、渲染和数据处理相关函数

// 函数: void update_ui_component_with_float(float value)
// 更新UI组件，处理浮点数值
void update_ui_component_with_float(float value)

{
  ulonglong *component_ptr;
  float temp_float;
  longlong temp_long;
  ulonglong temp_ulong;
  char status_flag;
  float *float_ptr;
  char temp_char;
  uint temp_uint;
  int8_t *data_ptr;
  int32_t temp_int;
  longlong base_ptr;
  longlong context_ptr;
  ulonglong object_id;
  longlong target_ptr;
  char control_flag;
  int32_t render_flag;
  char update_flag;
  int component_id;
  ulonglong entity_id;
  float position_value;
  float scale_value;
  ulonglong link_ptr;
  
  status_flag = (char)render_flag;
  if (value == scale_value) {
    *(char *)(base_ptr + 0x1cf8) = status_flag;
  }
  component_id = (int)entity_id;
  control_flag = (char)entity_id;
  if ((((*(int *)(base_ptr + 0x1b2c) == component_id) || (*(char *)(base_ptr + 0x1b3d) != control_flag)) &&
      (*(char *)(base_ptr + 0x1cf8) != control_flag)) &&
     ((*(float *)(base_ptr + 0x14c8) < scale_value &&
      (scale_value < *(float *)(base_ptr + 0x151c) ||
       scale_value == *(float *)(base_ptr + 0x151c))))) {
    if ((*(float *)(base_ptr + 0x118) <= -256000.0 && *(float *)(base_ptr + 0x118) != -256000.0)
       || (temp_char = status_flag,
          *(float *)(base_ptr + 0x11c) <= -256000.0 && *(float *)(base_ptr + 0x11c) != -256000.0))
    {
      temp_char = '\0';
    }
    float_ptr = (float *)(base_ptr + 0x3b4);
    if (float_ptr == (float *)0x0) {
      float_ptr = (float *)(base_ptr + 0x118);
    }
    if ((*float_ptr <= -256000.0 && *float_ptr != -256000.0) ||
       (status_flag = status_flag, float_ptr[1] <= -256000.0 && float_ptr[1] != -256000.0)) {
      status_flag = '\0';
    }
    if (temp_char == status_flag) {
      update_flag = status_flag;
    }
  }
  if ((context_ptr != 0) && ((*(byte *)(context_ptr + 0xc) & 4) == 0)) {
    if (*(int *)(base_ptr + 0x1cc0) == 3) {
      if (*(char *)(base_ptr + 0x135) == control_flag) {
        data_ptr = &stack0x000000a0;
        temp_int = render_flag;
LAB_render_update:
        float_ptr = (float *)get_render_data(data_ptr,temp_int,0,0);
        temp_float = float_ptr[1];
        if ((*float_ptr != scale_value) || (temp_float != scale_value)) {
          position_value = *(float *)(base_ptr + 0xbc);
          if (*(float *)(base_ptr + 0xb8) <= *(float *)(base_ptr + 0xbc)) {
            position_value = *(float *)(base_ptr + 0xb8);
          }
          temp_long = *(longlong *)(context_ptr + 0x3a0);
          position_value = (float)(int)(position_value * *(float *)(base_ptr + 0x18) * 800.0);
          *(float *)(temp_long + 0x40) = *float_ptr * position_value + *(float *)(temp_long + 0x40);
          *(float *)(temp_long + 0x44) = temp_float * position_value + *(float *)(temp_long + 0x44);
          *(char *)(base_ptr + 0x1d07) = status_flag;
          if (((*(uint *)(*(longlong *)(base_ptr + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(base_ptr + 0x2e04) <= scale_value)) {
            *(int32_t *)(base_ptr + 0x2e04) = *(int32_t *)(base_ptr + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(base_ptr + 0x1cc0) == 4) {
      temp_int = 4;
      data_ptr = &stack0x000000a8;
      goto LAB_render_update;
    }
  }
  if (target_ptr == 0) goto LAB_cleanup_complete;
  temp_long = *(longlong *)(base_ptr + 0x1c98);
  object_id = entity_id;
  if (temp_long == 0) {
LAB_entity_cleanup:
    *(int16_t *)(base_ptr + 0x1d06) = 0x100;
    if (*(longlong *)(target_ptr + 0x3c0) != 0) {
      target_ptr = *(longlong *)(target_ptr + 0x3c0);
    }
    cleanup_entity_resources(target_ptr);
    update_entity_state(target_ptr);
    if (*(int *)(target_ptr + 0x3c8) == component_id) {
      set_entity_property(target_ptr,0);
    }
    if (*(int *)(target_ptr + 0x174) == 2) {
      *(int32_t *)(base_ptr + 0x1cfc) = render_flag;
    }
    if ((*(ulonglong *)(target_ptr + 0x28) != object_id) &&
       (*(code **)(base_ptr + 0x1578) != (code *)0x0)) {
      (**(code **)(base_ptr + 0x1578))();
    }
  }
  else if (target_ptr != *(longlong *)(temp_long + 0x3a8)) {
    object_id = *(ulonglong *)(temp_long + 0x28);
    goto LAB_entity_cleanup;
  }
  *(ulonglong *)(base_ptr + 0x1cd8) = entity_id;
LAB_cleanup_complete:
  if ((update_flag != '\0') && (object_id = *(ulonglong *)(base_ptr + 0x1c98), object_id != 0)) {
    component_ptr = (ulonglong *)(object_id + 0x398);
    link_ptr = *component_ptr;
    temp_ulong = object_id;
    while (((link_ptr != entity_id && ((*(byte *)(temp_ulong + 0x174) & 2) == 0)) &&
           ((*(uint *)(temp_ulong + 0xc) & 0x15000000) == 0x1000000))) {
      temp_ulong = *component_ptr;
      component_ptr = (ulonglong *)(temp_ulong + 0x398);
      link_ptr = *component_ptr;
    }
    if (temp_ulong != object_id) {
      update_entity_state(temp_ulong);
      *(ulonglong *)(temp_ulong + 0x3c0) = object_id;
      object_id = *(ulonglong *)(base_ptr + 0x1c98);
    }
    *(int16_t *)(base_ptr + 0x1d06) = 0x100;
    if ((*(byte *)(object_id + 0x174) & 2) == 0) {
      link_ptr = entity_id & 0xffffffff;
    }
    else {
      temp_uint = *(uint *)(base_ptr + 0x1cfc) ^ 1;
      link_ptr = (ulonglong)temp_uint;
      if ((temp_uint == 1) && (*(ulonglong *)(temp_ulong + 0x410) == entity_id)) {
        *(int *)(object_id + 0x3cc) = component_id;
      }
    }
    process_entity_update(link_ptr);
  }
  return;
}


// 函数: void cleanup_entity_components(void)
// 清理实体组件资源
void cleanup_entity_components(void)

{
  ulonglong *component_ptr;
  longlong entity_ptr;
  ulonglong entity_id;
  uint property_id;
  longlong base_ptr;
  ulonglong context_id;
  longlong target_ptr;
  int32_t render_flag;
  char update_flag;
  ulonglong object_id;
  ulonglong link_ptr;
  
  entity_ptr = *(longlong *)(base_ptr + 0x1c98);
  context_id = object_id;
  if (entity_ptr != 0) {
    if (target_ptr == *(longlong *)(entity_ptr + 0x3a8)) goto LAB_skip_cleanup;
    context_id = *(ulonglong *)(entity_ptr + 0x28);
  }
  *(int16_t *)(base_ptr + 0x1d06) = 0x100;
  if (*(longlong *)(target_ptr + 0x3c0) != 0) {
    target_ptr = *(longlong *)(target_ptr + 0x3c0);
  }
  cleanup_entity_resources(target_ptr);
  update_entity_state(target_ptr);
  if (*(int *)(target_ptr + 0x3c8) == (int)object_id) {
    set_entity_property(target_ptr,0);
  }
  if (*(int *)(target_ptr + 0x174) == 2) {
    *(int32_t *)(base_ptr + 0x1cfc) = render_flag;
  }
  if ((*(ulonglong *)(target_ptr + 0x28) != context_id) && (*(code **)(base_ptr + 0x1578) != (code *)0x0)
     ) {
    (**(code **)(base_ptr + 0x1578))();
  }
LAB_skip_cleanup:
  *(ulonglong *)(base_ptr + 0x1cd8) = object_id;
  if ((update_flag != '\0') && (context_id = *(ulonglong *)(base_ptr + 0x1c98), context_id != 0)) {
    component_ptr = (ulonglong *)(context_id + 0x398);
    link_ptr = *component_ptr;
    entity_id = context_id;
    while (((link_ptr != object_id && ((*(byte *)(entity_id + 0x174) & 2) == 0)) &&
           ((*(uint *)(entity_id + 0xc) & 0x15000000) == 0x1000000))) {
      entity_id = *component_ptr;
      component_ptr = (ulonglong *)(entity_id + 0x398);
      link_ptr = *component_ptr;
    }
    if (entity_id != context_id) {
      update_entity_state(entity_id);
      *(ulonglong *)(entity_id + 0x3c0) = context_id;
      context_id = *(ulonglong *)(base_ptr + 0x1c98);
    }
    *(int16_t *)(base_ptr + 0x1d06) = 0x100;
    if ((*(byte *)(context_id + 0x174) & 2) == 0) {
      link_ptr = object_id & 0xffffffff;
    }
    else {
      property_id = *(uint *)(base_ptr + 0x1cfc) ^ 1;
      link_ptr = (ulonglong)property_id;
      if ((property_id == 1) && (*(ulonglong *)(entity_id + 0x410) == object_id)) {
        *(int *)(context_id + 0x3cc) = (int)object_id;
      }
    }
    process_entity_update(link_ptr);
  }
  return;
}


// 函数: void update_entity_state_simple(void)
// 简单更新实体状态
void update_entity_state_simple(void)

{
  ulonglong *component_ptr;
  ulonglong entity_id;
  uint property_id;
  longlong base_ptr;
  ulonglong context_id;
  ulonglong object_id;
  ulonglong link_ptr;
  
  context_id = *(ulonglong *)(base_ptr + 0x1c98);
  if (context_id != 0) {
    component_ptr = (ulonglong *)(context_id + 0x398);
    link_ptr = *component_ptr;
    entity_id = context_id;
    while (((link_ptr != object_id && ((*(byte *)(entity_id + 0x174) & 2) == 0)) &&
           ((*(uint *)(entity_id + 0xc) & 0x15000000) == 0x1000000))) {
      entity_id = *component_ptr;
      component_ptr = (ulonglong *)(entity_id + 0x398);
      link_ptr = *component_ptr;
    }
    if (entity_id != context_id) {
      update_entity_state(entity_id);
      *(ulonglong *)(entity_id + 0x3c0) = context_id;
      context_id = *(ulonglong *)(base_ptr + 0x1c98);
    }
    *(int16_t *)(base_ptr + 0x1d06) = 0x100;
    if ((*(byte *)(context_id + 0x174) & 2) == 0) {
      link_ptr = object_id & 0xffffffff;
    }
    else {
      property_id = *(uint *)(base_ptr + 0x1cfc) ^ 1;
      link_ptr = (ulonglong)property_id;
      if ((property_id == 1) && (*(ulonglong *)(entity_id + 0x410) == object_id)) {
        *(int *)(context_id + 0x3cc) = (int)object_id;
      }
    }
    process_entity_update(link_ptr);
  }
  return;
}


// 全局变量符号重叠警告


// 函数: void render_ui_menu_system(void)
// 渲染UI菜单系统
void render_ui_menu_system(void)

{
  float menu_x;
  float menu_y;
  float menu_width;
  float menu_height;
  uint menu_flags;
  uint64_t *menu_data;
  longlong engine_ptr;
  int menu_count;
  uint64_t window_handle;
  char *menu_title;
  longlong menu_list_ptr;
  longlong menu_item_ptr;
  longlong current_menu;
  ulonglong menu_id;
  char *display_name;
  uint64_t temp_stack1;
  int32_t stack_param1;
  int32_t stack_param2;
  int32_t stack_param3;
  int32_t stack_param4;
  
  engine_ptr = global_engine_context;
  if (0.15 < *(float *)(global_engine_context + 0x1cf0) || *(float *)(global_engine_context + 0x1cf0) == 0.15) {
    if (*(longlong *)(global_engine_context + 0x1ce8) == 0) {
      window_handle = create_window_handle(&global_window_manager);
      *(uint64_t *)(engine_ptr + 0x1ce8) = window_handle;
    }
    current_menu = **(longlong **)(engine_ptr + 0x1c70);
    menu_x = *(float *)(current_menu + 0x10);
    menu_y = *(float *)(current_menu + 0x14);
    *(int32_t *)(engine_ptr + 0x1be0) = 1;
    *(uint64_t *)(engine_ptr + 0x1c28) = 0;
    *(uint64_t *)(engine_ptr + 0x1c30) = 0;
    *(float *)(engine_ptr + 0x1c18) = menu_x * 0.2;
    *(float *)(engine_ptr + 0x1c1c) = menu_y * 0.2;
    *(int32_t *)(engine_ptr + 0x1c20) = 0x7f7fffff;
    *(int32_t *)(engine_ptr + 0x1c24) = 0x7f7fffff;
    menu_x = *(float *)(current_menu + 0x14);
    menu_y = *(float *)(current_menu + 0x10);
    menu_width = *(float *)(current_menu + 0xc);
    stack_param4 = 0x7f7fffff;
    stack_param1 = 1;
    menu_height = *(float *)(current_menu + 8);
    *(int32_t *)(engine_ptr + 0x1bfc) = 0x3f000000;
    *(float *)(engine_ptr + 0x1bf8) = menu_x * 0.5 + menu_width;
    *(int32_t *)(engine_ptr + 0x1c00) = 0x3f000000;
    *(int32_t *)(engine_ptr + 0x1bd0) = 1;
    *(float *)(engine_ptr + 0x1bf4) = menu_y * 0.5 + menu_height;
    *(int8_t *)(engine_ptr + 0x1c14) = 1;
    menu_x = *(float *)(engine_ptr + 0x162c);
    menu_y = *(float *)(engine_ptr + 0x1630);
    stack_param2 = *(int32_t *)(engine_ptr + 0x162c);
    stack_param3 = *(int32_t *)(engine_ptr + 0x1630);
    render_menu_items(engine_ptr + 0x1b90,&stack_param1);
    *(float *)(engine_ptr + 0x162c) = menu_x + menu_x;
    *(float *)(engine_ptr + 0x1630) = menu_y + menu_y;
    update_window_state(&global_window_manager,0,0xc1347);
    menu_count = *(int *)(engine_ptr + 0x1ab0) + -1;
    current_menu = (longlong)menu_count;
    if (-1 < menu_count) {
      do {
        menu_data = *(uint64_t **)(*(longlong *)(engine_ptr + 0x1ab8) + current_menu * 8);
        if ((*(char *)((longlong)menu_data + 0xaf) != '\0') && (menu_data == (uint64_t *)menu_data[0x75]))
        {
          menu_flags = *(uint *)((longlong)menu_data + 0xc);
          if ((menu_flags >> 0x13 & 1) == 0) {
            display_name = (char *)*menu_data;
            menu_title = display_name;
            if (display_name == (char *)0xffffffffffffffff) {
LAB_name_processing:
              if ((menu_flags >> 0x1a & 1) == 0) {
                if ((menu_flags >> 10 & 1) != 0) {
                  menu_count = strcmp(display_name,&main_menu_bar_string);
                  if (menu_count == 0) {
                    display_name = "(Main menu bar)";
                    goto LAB_display_name;
                  }
                }
                display_name = "(Dock node)";
                if (menu_data[0x82] == 0) {
                  display_name = "(Untitled)";
                }
              }
              else {
                display_name = "(Popup)";
              }
            }
            else {
              while (*menu_title != '\0') {
                if (((*menu_title == '#') && (menu_title[1] == '#')) ||
                   (menu_title = menu_title + 1, menu_title == (char *)0xffffffffffffffff)) break;
              }
              if (display_name == menu_title) goto LAB_name_processing;
            }
LAB_display_name:
            temp_stack1 = 0;
            display_menu_item(display_name,*(uint64_t **)(engine_ptr + 0x1cd8) == menu_data,0,&temp_stack1);
          }
        }
        current_menu = current_menu + -1;
      } while (-1 < current_menu);
    }
    finalize_rendering();
    current_menu = global_engine_context;
    menu_list_ptr = (longlong)*(int *)(global_engine_context + 0x1b90);
    engine_ptr = *(longlong *)(global_engine_context + 0x1b98);
    menu_item_ptr = (longlong)*(int *)(engine_ptr + -0xc + menu_list_ptr * 0xc);
    menu_id = (ulonglong)*(uint *)(&global_menu_id_table + menu_item_ptr * 0xc);
    if (*(int *)(&global_menu_type_table + menu_item_ptr * 0xc) == 4) {
      if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 1) {
        *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
             *(int32_t *)(engine_ptr + -8 + menu_list_ptr * 0xc);
        *(int *)(current_menu + 0x1b90) = *(int *)(current_menu + 0x1b90) + -1;
        return;
      }
      if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 2) {
        *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
             *(int32_t *)(engine_ptr + -8 + menu_list_ptr * 0xc);
        *(int32_t *)(menu_id + 0x162c + current_menu) = *(int32_t *)(engine_ptr + -4 + menu_list_ptr * 0xc);
      }
    }
    *(int *)(current_menu + 0x1b90) = *(int *)(current_menu + 0x1b90) + -1;
  }
  return;
}


// 全局变量符号重叠警告


// 函数: void render_ui_menu_system_alt(void)
// 渲染UI菜单系统（替代版本）
void render_ui_menu_system_alt(void)

{
  float menu_x;
  float menu_y;
  float menu_width;
  float menu_height;
  uint menu_flags;
  uint64_t *menu_data;
  longlong engine_ptr;
  int menu_count;
  uint64_t window_handle;
  char *menu_title;
  longlong menu_list_ptr;
  longlong menu_item_ptr;
  longlong current_menu;
  longlong context_ptr;
  ulonglong menu_id;
  char *display_name;
  bool should_render;
  int32_t render_param;
  int32_t stack_param1;
  uint64_t temp_stack;
  
  if (should_render) {
    window_handle = create_window_handle(&global_window_manager);
    *(uint64_t *)(context_ptr + 0x1ce8) = window_handle;
  }
  current_menu = **(longlong **)(context_ptr + 0x1c70);
  menu_x = *(float *)(current_menu + 0x10);
  menu_y = *(float *)(current_menu + 0x14);
  *(int32_t *)(context_ptr + 0x1be0) = 1;
  *(uint64_t *)(context_ptr + 0x1c28) = 0;
  *(uint64_t *)(context_ptr + 0x1c30) = 0;
  *(float *)(context_ptr + 0x1c18) = menu_x * 0.2;
  *(float *)(context_ptr + 0x1c1c) = menu_y * 0.2;
  *(int32_t *)(context_ptr + 0x1c20) = 0x7f7fffff;
  *(int32_t *)(context_ptr + 0x1c24) = 0x7f7fffff;
  menu_x = *(float *)(current_menu + 0x14);
  menu_y = *(float *)(current_menu + 0x10);
  menu_width = *(float *)(current_menu + 0xc);
  stack_param1 = 0x7f7fffff;
  render_param = 1;
  menu_height = *(float *)(current_menu + 8);
  *(int32_t *)(context_ptr + 0x1bfc) = 0x3f000000;
  *(float *)(context_ptr + 0x1bf8) = menu_x * 0.5 + menu_width;
  *(int32_t *)(context_ptr + 0x1c00) = 0x3f000000;
  *(int32_t *)(context_ptr + 0x1bd0) = 1;
  *(float *)(context_ptr + 0x1bf4) = menu_y * 0.5 + menu_height;
  *(int8_t *)(context_ptr + 0x1c14) = 1;
  menu_x = *(float *)(context_ptr + 0x162c);
  menu_y = *(float *)(context_ptr + 0x1630);
  render_menu_items(context_ptr + 0x1b90,&stack0x00000020);
  *(float *)(context_ptr + 0x162c) = menu_x + menu_x;
  *(float *)(context_ptr + 0x1630) = menu_y + menu_y;
  update_window_state(&global_window_manager,0,0xc1347);
  menu_count = *(int *)(context_ptr + 0x1ab0) + -1;
  current_menu = (longlong)menu_count;
  if (-1 < menu_count) {
    do {
      menu_data = *(uint64_t **)(*(longlong *)(context_ptr + 0x1ab8) + current_menu * 8);
      if ((*(char *)((longlong)menu_data + 0xaf) != '\0') && (menu_data == (uint64_t *)menu_data[0x75])) {
        menu_flags = *(uint *)((longlong)menu_data + 0xc);
        if ((menu_flags >> 0x13 & 1) == 0) {
          display_name = (char *)*menu_data;
          menu_title = display_name;
          if (display_name == (char *)0xffffffffffffffff) {
LAB_name_processing:
            if ((menu_flags >> 0x1a & 1) == 0) {
              if ((menu_flags >> 10 & 1) != 0) {
                menu_count = strcmp(display_name,&main_menu_bar_string);
                if (menu_count == 0) {
                  display_name = "(Main menu bar)";
                  goto LAB_display_name;
                }
              }
              display_name = "(Dock node)";
              if (menu_data[0x82] == 0) {
                display_name = "(Untitled)";
              }
            }
            else {
              display_name = "(Popup)";
            }
          }
          else {
            while (*menu_title != '\0') {
              if (((*menu_title == '#') && (menu_title[1] == '#')) ||
                 (menu_title = menu_title + 1, menu_title == (char *)0xffffffffffffffff)) break;
            }
            if (display_name == menu_title) goto LAB_name_processing;
          }
LAB_display_name:
          temp_stack = 0;
          display_menu_item(display_name,*(uint64_t **)(context_ptr + 0x1cd8) == menu_data,0,&stack0x00000060,
                        render_param);
        }
      }
      current_menu = current_menu + -1;
    } while (-1 < current_menu);
  }
  finalize_rendering();
  engine_ptr = global_engine_context;
  menu_list_ptr = (longlong)*(int *)(global_engine_context + 0x1b90);
  current_menu = *(longlong *)(global_engine_context + 0x1b98);
  menu_item_ptr = (longlong)*(int *)(current_menu + -0xc + menu_list_ptr * 0xc);
  menu_id = (ulonglong)*(uint *)(&global_menu_id_table + menu_item_ptr * 0xc);
  if (*(int *)(&global_menu_type_table + menu_item_ptr * 0xc) == 4) {
    if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 1) {
      *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
           *(int32_t *)(current_menu + -8 + menu_list_ptr * 0xc);
      *(int *)(engine_ptr + 0x1b90) = *(int *)(engine_ptr + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 2) {
      *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
           *(int32_t *)(current_menu + -8 + menu_list_ptr * 0xc);
      *(int32_t *)(menu_id + 0x162c + engine_ptr) = *(int32_t *)(current_menu + -4 + menu_list_ptr * 0xc);
    }
  }
  *(int *)(engine_ptr + 0x1b90) = *(int *)(engine_ptr + 0x1b90) + -1;
  return;
}


// 全局变量符号重叠警告


// 函数: void render_ui_menu_system_alt2(void)
// 渲染UI菜单系统（替代版本2）
void render_ui_menu_system_alt2(void)

{
  float menu_x;
  float menu_y;
  float menu_width;
  float menu_height;
  uint menu_flags;
  uint64_t *menu_data;
  longlong engine_ptr;
  int menu_count;
  uint64_t window_handle;
  char *menu_title;
  longlong menu_list_ptr;
  longlong menu_item_ptr;
  longlong current_menu;
  longlong context_ptr;
  ulonglong menu_id;
  char *display_name;
  bool should_render;
  int32_t render_param;
  int32_t stack_param1;
  uint64_t temp_stack;
  
  if (should_render) {
    window_handle = create_window_handle(&global_window_manager);
    *(uint64_t *)(context_ptr + 0x1ce8) = window_handle;
  }
  current_menu = **(longlong **)(context_ptr + 0x1c70);
  menu_x = *(float *)(current_menu + 0x10);
  menu_y = *(float *)(current_menu + 0x14);
  *(int32_t *)(context_ptr + 0x1be0) = 1;
  *(uint64_t *)(context_ptr + 0x1c28) = 0;
  *(uint64_t *)(context_ptr + 0x1c30) = 0;
  *(float *)(context_ptr + 0x1c18) = menu_x * 0.2;
  *(float *)(context_ptr + 0x1c1c) = menu_y * 0.2;
  *(int32_t *)(context_ptr + 0x1c20) = 0x7f7fffff;
  *(int32_t *)(context_ptr + 0x1c24) = 0x7f7fffff;
  menu_x = *(float *)(current_menu + 0x14);
  menu_y = *(float *)(current_menu + 0x10);
  menu_width = *(float *)(current_menu + 0xc);
  stack_param1 = 0x7f7fffff;
  render_param = 1;
  menu_height = *(float *)(current_menu + 8);
  *(int32_t *)(context_ptr + 0x1bfc) = 0x3f000000;
  *(float *)(context_ptr + 0x1bf8) = menu_x * 0.5 + menu_width;
  *(int32_t *)(context_ptr + 0x1c00) = 0x3f000000;
  *(int32_t *)(context_ptr + 0x1bd0) = 1;
  *(float *)(context_ptr + 0x1bf4) = menu_y * 0.5 + menu_height;
  *(int8_t *)(context_ptr + 0x1c14) = 1;
  menu_x = *(float *)(context_ptr + 0x162c);
  menu_y = *(float *)(context_ptr + 0x1630);
  render_menu_items(context_ptr + 0x1b90,&stack0x00000020);
  *(float *)(context_ptr + 0x162c) = menu_x + menu_x;
  *(float *)(context_ptr + 0x1630) = menu_y + menu_y;
  update_window_state(&global_window_manager,0,0xc1347);
  menu_count = *(int *)(context_ptr + 0x1ab0) + -1;
  current_menu = (longlong)menu_count;
  if (-1 < menu_count) {
    do {
      menu_data = *(uint64_t **)(*(longlong *)(context_ptr + 0x1ab8) + current_menu * 8);
      if ((*(char *)((longlong)menu_data + 0xaf) != '\0') && (menu_data == (uint64_t *)menu_data[0x75])) {
        menu_flags = *(uint *)((longlong)menu_data + 0xc);
        if ((menu_flags >> 0x13 & 1) == 0) {
          display_name = (char *)*menu_data;
          menu_title = display_name;
          if (display_name == (char *)0xffffffffffffffff) {
LAB_name_processing:
            if ((menu_flags >> 0x1a & 1) == 0) {
              if ((menu_flags >> 10 & 1) != 0) {
                menu_count = strcmp(display_name,&main_menu_bar_string);
                if (menu_count == 0) {
                  display_name = "(Main menu bar)";
                  goto LAB_display_name;
                }
              }
              display_name = "(Dock node)";
              if (menu_data[0x82] == 0) {
                display_name = "(Untitled)";
              }
            }
            else {
              display_name = "(Popup)";
            }
          }
          else {
            while (*menu_title != '\0') {
              if (((*menu_title == '#') && (menu_title[1] == '#')) ||
                 (menu_title = menu_title + 1, menu_title == (char *)0xffffffffffffffff)) break;
            }
            if (display_name == menu_title) goto LAB_name_processing;
          }
LAB_display_name:
          temp_stack = 0;
          display_menu_item(display_name,*(uint64_t **)(context_ptr + 0x1cd8) == menu_data,0,&stack0x00000060,
                        render_param);
        }
      }
      current_menu = current_menu + -1;
    } while (-1 < current_menu);
  }
  finalize_rendering();
  engine_ptr = global_engine_context;
  menu_list_ptr = (longlong)*(int *)(global_engine_context + 0x1b90);
  current_menu = *(longlong *)(global_engine_context + 0x1b98);
  menu_item_ptr = (longlong)*(int *)(current_menu + -0xc + menu_list_ptr * 0xc);
  menu_id = (ulonglong)*(uint *)(&global_menu_id_table + menu_item_ptr * 0xc);
  if (*(int *)(&global_menu_type_table + menu_item_ptr * 0xc) == 4) {
    if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 1) {
      *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
           *(int32_t *)(current_menu + -8 + menu_list_ptr * 0xc);
      *(int *)(engine_ptr + 0x1b90) = *(int *)(engine_ptr + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 2) {
      *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
           *(int32_t *)(current_menu + -8 + menu_list_ptr * 0xc);
      *(int32_t *)(menu_id + 0x162c + engine_ptr) = *(int32_t *)(current_menu + -4 + menu_list_ptr * 0xc);
    }
  }
  *(int *)(engine_ptr + 0x1b90) = *(int *)(engine_ptr + 0x1b90) + -1;
  return;
}


// 全局变量符号重叠警告


// 函数: void process_menu_items_loop(void)
// 处理菜单项循环
void process_menu_items_loop(void)

{
  uint menu_flags;
  uint64_t *menu_data;
  longlong engine_ptr;
  longlong menu_list_ptr;
  longlong menu_item_ptr;
  int menu_count;
  char *menu_title;
  longlong current_menu;
  longlong context_ptr;
  ulonglong menu_id;
  char *display_name;
  uint64_t temp_stack;
  
  do {
    menu_data = *(uint64_t **)(*(longlong *)(context_ptr + 0x1ab8) + current_menu * 8);
    if ((*(char *)((longlong)menu_data + 0xaf) != '\0') && (menu_data == (uint64_t *)menu_data[0x75])) {
      menu_flags = *(uint *)((longlong)menu_data + 0xc);
      if ((menu_flags >> 0x13 & 1) == 0) {
        display_name = (char *)*menu_data;
        menu_title = display_name;
        if (display_name == (char *)0xffffffffffffffff) {
LAB_name_processing:
          if ((menu_flags >> 0x1a & 1) == 0) {
            if ((menu_flags >> 10 & 1) != 0) {
              menu_count = strcmp(display_name,&main_menu_bar_string);
              if (menu_count == 0) {
                display_name = "(Main menu bar)";
                goto LAB_display_name;
              }
            }
            display_name = "(Dock node)";
            if (menu_data[0x82] == 0) {
              display_name = "(Untitled)";
            }
          }
          else {
            display_name = "(Popup)";
          }
        }
        else {
          while (*menu_title != '\0') {
            if (((*menu_title == '#') && (menu_title[1] == '#')) ||
               (menu_title = menu_title + 1, menu_title == (char *)0xffffffffffffffff)) break;
          }
          if (display_name == menu_title) goto LAB_name_processing;
        }
LAB_display_name:
        temp_stack = 0;
        display_menu_item(display_name,*(uint64_t **)(context_ptr + 0x1cd8) == menu_data,0,&stack0x00000060);
      }
    }
    current_menu = current_menu + -1;
    if (current_menu < 0) {
      finalize_rendering();
      menu_list_ptr = global_engine_context;
      engine_ptr = (longlong)*(int *)(global_engine_context + 0x1b90);
      current_menu = *(longlong *)(global_engine_context + 0x1b98);
      menu_item_ptr = (longlong)*(int *)(current_menu + -0xc + engine_ptr * 0xc);
      menu_id = (ulonglong)*(uint *)(&global_menu_id_table + menu_item_ptr * 0xc);
      if (*(int *)(&global_menu_type_table + menu_item_ptr * 0xc) == 4) {
        if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 1) {
          *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
               *(int32_t *)(current_menu + -8 + engine_ptr * 0xc);
          *(int *)(menu_list_ptr + 0x1b90) = *(int *)(menu_list_ptr + 0x1b90) + -1;
          return;
        }
        if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 2) {
          *(int32_t *)(menu_id + 0x1628 + global_engine_context) =
               *(int32_t *)(current_menu + -8 + engine_ptr * 0xc);
          *(int32_t *)(menu_id + 0x162c + menu_list_ptr) = *(int32_t *)(current_menu + -4 + engine_ptr * 0xc);
        }
      }
      *(int *)(menu_list_ptr + 0x1b90) = *(int *)(menu_list_ptr + 0x1b90) + -1;
      return;
    }
  } while( true );
}


// 全局变量符号重叠警告


// 函数: void finalize_menu_rendering(void)
// 完成菜单渲染
void finalize_menu_rendering(void)

{
  longlong engine_ptr;
  longlong menu_list_ptr;
  longlong menu_item_ptr;
  longlong current_menu;
  ulonglong menu_id;
  
  finalize_rendering();
  menu_list_ptr = global_engine_context;
  engine_ptr = (longlong)*(int *)(global_engine_context + 0x1b90);
  current_menu = *(longlong *)(global_engine_context + 0x1b98);
  menu_item_ptr = (longlong)*(int *)(current_menu + -0xc + engine_ptr * 0xc);
  menu_id = (ulonglong)*(uint *)(&global_menu_id_table + menu_item_ptr * 0xc);
  if (*(int *)(&global_menu_type_table + menu_item_ptr * 0xc) == 4) {
    if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 1) {
      *(int32_t *)(menu_id + 0x1628 + global_engine_context) = *(int32_t *)(current_menu + -8 + engine_ptr * 0xc);
      *(int *)(menu_list_ptr + 0x1b90) = *(int *)(menu_list_ptr + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&global_menu_subtype_table + menu_item_ptr * 0xc) == 2) {
      *(int32_t *)(menu_id + 0x1628 + global_engine_context) = *(int32_t *)(current_menu + -8 + engine_ptr * 0xc);
      *(int32_t *)(menu_id + 0x162c + menu_list_ptr) = *(int32_t *)(current_menu + -4 + engine_ptr * 0xc);
    }
  }
  *(int *)(menu_list_ptr + 0x1b90) = *(int *)(menu_list_ptr + 0x1b90) + -1;
  return;
}


// 函数: void update_menu_data_structure(longlong context,longlong list_ptr,longlong item_ptr,longlong menu_id)
// 更新菜单数据结构
void update_menu_data_structure(longlong context,longlong list_ptr,longlong item_ptr,longlong menu_id)

{
  int menu_type;
  longlong data_ptr;
  longlong index_ptr;
  
  menu_type = *(int *)(data_ptr + 4 + index_ptr * 4);
  if (menu_type == 1) {
    *(int32_t *)(menu_id + 0x1628 + context) = *(int32_t *)(item_ptr + -8 + list_ptr * 4);
    *(int *)(context + 0x1b90) = *(int *)(context + 0x1b90) + -1;
    return;
  }
  if (menu_type == 2) {
    *(int32_t *)(menu_id + 0x1628 + context) = *(int32_t *)(item_ptr + -8 + list_ptr * 4);
    *(int32_t *)(menu_id + 0x162c + context) = *(int32_t *)(item_ptr + -4 + list_ptr * 4);
  }
  *(int *)(context + 0x1b90) = *(int *)(context + 0x1b90) + -1;
  return;
}


// 全局变量符号重叠警告


// 函数: void update_animation_system(void)
// 更新动画系统
void update_animation_system(void)

{
  longlong entity_ptr;
  longlong animation_ptr;
  int frame_count;
  longlong timeline_ptr;
  uint64_t timeline_handle;
  float current_time;
  
  entity_ptr = global_engine_context;
  *(int8_t *)(*(longlong *)(global_engine_context + 0x1af8) + 0xb1) = 1;
  animation_ptr = *(longlong *)(entity_ptr + 0x1af8);
  if ((*(char *)(animation_ptr + 0xb4) == '\0') && (*(longlong *)(animation_ptr + 0x210) != 0)) {
    initialize_animation_system();
    process_animation_queue();
    timeline_ptr = *(longlong *)(animation_ptr + 0x210);
    timeline_handle = 0;
    current_time = *(float *)(animation_ptr + 0x104);
    if (*(float *)(animation_ptr + 0x104) <= *(float *)(timeline_ptr + 0x20)) {
      current_time = *(float *)(timeline_ptr + 0x20);
    }
    frame_count = *(int *)(timeline_ptr + 0xc) + 1;
    *(int *)(timeline_ptr + 0xc) = frame_count;
    *(float *)(timeline_ptr + 0x20) = current_time;
    if (frame_count < *(int *)(timeline_ptr + 0x10)) {
      current_time = (float)get_animation_timestamp();
      *(float *)(animation_ptr + 0x20c) = (current_time - *(float *)(animation_ptr + 0x204)) + *(float *)(entity_ptr + 0x166c);
      update_animation_frame(*(uint64_t *)(animation_ptr + 0x2e8),*(int32_t *)(timeline_ptr + 0xc));
    }
    else {
      *(int32_t *)(animation_ptr + 0x20c) = 0;
      update_animation_frame(*(uint64_t *)(animation_ptr + 0x2e8),0);
      *(int32_t *)(timeline_ptr + 0x1c) = *(int32_t *)(timeline_ptr + 0x20);
      *(int *)(timeline_ptr + 0xc) = (int)timeline_handle;
    }
    *(float *)(animation_ptr + 0x100) =
         (float)(int)(*(float *)(animation_ptr + 0x204) + *(float *)(animation_ptr + 0x40) +
                     *(float *)(animation_ptr + 0x20c));
    *(int32_t *)(animation_ptr + 0x104) = *(int32_t *)(timeline_ptr + 0x1c);
    *(uint64_t *)(animation_ptr + 0x120) = timeline_handle;
    *(int *)(animation_ptr + 0x128) = (int)timeline_handle;
    finalize_animation_update();
    animation_ptr = *(longlong *)(*(longlong *)(global_engine_context + 0x1af8) + 0x210);
    process_animation_delta((*(float *)(((longlong)*(int *)(animation_ptr + 0xc) + 1) * 0x1c +
                                   *(longlong *)(animation_ptr + 0x38)) -
                        *(float *)((longlong)*(int *)(animation_ptr + 0xc) * 0x1c +
                                  *(longlong *)(animation_ptr + 0x38))) *
                        (*(float *)(animation_ptr + 0x18) - *(float *)(animation_ptr + 0x14)) * 0.65);
  }
  return;
}


// 全局变量符号重叠警告


// 函数: void update_animation_parameter(int param_index,float param_value)
// 更新动画参数
void update_animation_parameter(int param_index,float param_value)

{
  longlong entity_ptr;
  longlong animation_ptr;
  bool is_valid;
  longlong frame_data;
  int current_frame;
  longlong next_frame;
  longlong frame_offset;
  float frame_delta;
  float time_value;
  float range_min;
  float range_max;
  
  entity_ptr = global_engine_context;
  while( true ) {
    animation_ptr = *(longlong *)(*(longlong *)(entity_ptr + 0x1af8) + 0x210);
    if (param_index < 0) {
      param_index = *(int *)(animation_ptr + 0xc);
    }
    if (((*(uint *)(animation_ptr + 4) & 4) == 0) && (param_index < *(int *)(animation_ptr + 0x10) + -1)) {
      is_valid = true;
      current_frame = param_index;
      if (param_index < 0) {
        current_frame = *(int *)(animation_ptr + 0xc);
      }
      frame_data = *(longlong *)(animation_ptr + 0x38);
      frame_offset = ((longlong)current_frame + 1) * 0x1c;
      next_frame = (longlong)current_frame * 0x1c;
      if (*(char *)(animation_ptr + 9) == '\0') {
        frame_delta = *(float *)(frame_offset + frame_data) - *(float *)(next_frame + frame_data);
      }
      else {
        frame_delta = *(float *)(frame_offset + 4 + frame_data) - *(float *)(next_frame + 4 + frame_data);
      }
      range_max = *(float *)(animation_ptr + 0x18);
      frame_delta = (range_max - *(float *)(animation_ptr + 0x14)) * frame_delta;
    }
    else {
      range_max = *(float *)(animation_ptr + 0x18);
      is_valid = false;
      frame_delta = 0.0;
    }
    if (((*(uint *)(animation_ptr + 4) & 8) == 0) &&
       (time_value = range_max - (float)(*(int *)(animation_ptr + 0x10) - param_index) * *(float *)(entity_ptr + 0x1688),
       time_value <= param_value)) {
      param_value = time_value;
    }
    *(float *)((longlong)param_index * 0x1c + *(longlong *)(animation_ptr + 0x38)) =
         (param_value - *(float *)(animation_ptr + 0x14)) / (range_max - *(float *)(animation_ptr + 0x14));
    if (!is_valid) break;
    param_index = param_index + 1;
    range_max = *(float *)(entity_ptr + 0x1688);
    if (*(float *)(entity_ptr + 0x1688) <= frame_delta) {
      range_max = frame_delta;
    }
    param_value = param_value + range_max;
  }
  return;
}


// 全局变量符号重叠警告