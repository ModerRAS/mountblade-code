#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part146.c - 核心引擎模块第146部分
// 包含9个函数，主要处理引擎资源管理、状态更新和渲染相关功能

// 全局变量
longlong *g_engine_context = SYSTEM_DATA_MANAGER_A;          // 引擎全局上下文
longlong *g_resource_manager = SYSTEM_DATA_MANAGER_B;        // 资源管理器
ulonglong g_stack_cookie = GET_SECURITY_COOKIE();             // 栈保护cookie

// 函数：transfer_engine_resources - 转移引擎资源
// 参数：dest_context - 目标上下文，src_context - 源上下文
// 功能：将源上下文的资源转移到目标上下文
void transfer_engine_resources(longlong dest_context, longlong src_context)
{
  int *resource_count;
  longlong resource_data;
  longlong resource_ptr;
  ulonglong resource_index;
  ulonglong max_resources;
  byte transfer_flag;
  uint current_count;
  ulonglong temp_index;
  
  resource_index = 0;
  resource_data = *(longlong *)(src_context + 0x30);
  if ((resource_data == 0) || (*(longlong *)(dest_context + 0x30) != 0)) {
    transfer_flag = 0;
  }
  else {
    *(longlong *)(dest_context + 0x30) = resource_data;
    transfer_flag = 1;
    *(uint64_t *)(src_context + 0x30) = 0;
  }
  if (0 < *(int *)(src_context + 0x20)) {
    max_resources = resource_index;
    temp_index = resource_index;
    do {
      if (resource_data == 0) {
        resource_ptr = *(longlong *)(max_resources + *(longlong *)(src_context + 0x28));
      }
      else {
        resource_ptr = *(longlong *)(*(longlong *)(resource_data + 8) + 8 + resource_index);
      }
      *(byte *)(resource_ptr + 0x432) = *(byte *)(resource_ptr + 0x432) & 0xfe;
      *(uint64_t *)(resource_ptr + 0x408) = 0;
      update_resource_state(dest_context, resource_ptr, transfer_flag ^ 1);
      current_count = (int)temp_index + 1;
      temp_index = (ulonglong)current_count;
      resource_index = resource_index + 0x28;
      max_resources = max_resources + 8;
    } while ((int)current_count < *(int *)(src_context + 0x20));
  }
  resource_ptr = *g_engine_context;
  resource_data = *(longlong *)(src_context + 0x28);
  if (resource_data == 0) {
    if ((transfer_flag == 0) && (resource_data = *(longlong *)(src_context + 0x30), resource_data != 0)) {
      if (*(longlong *)(dest_context + 0x30) != 0) {
        *(int32_t *)(*(longlong *)(dest_context + 0x30) + 0x14) = *(int32_t *)(resource_data + 0x14);
        resource_data = *(longlong *)(src_context + 0x30);
      }
      release_resource(resource_data);
      *(uint64_t *)(src_context + 0x30) = 0;
    }
    return;
  }
  *(uint64_t *)(src_context + 0x20) = 0;
  if (resource_ptr != 0) {
    resource_count = (int *)(resource_ptr + 0x3a8);
    *resource_count = *resource_count + -1;
  }
  // 释放资源池
  free_resource_pool(resource_data, *g_resource_manager);
}

// 函数：process_resource_batch - 批量处理资源
// 参数：context - 上下文指针，batch_size - 批量大小，resource_offset - 资源偏移
// 功能：批量处理指定数量的资源
void process_resource_batch(uint64_t context, uint64_t batch_size, longlong resource_offset)
{
  int *resource_count;
  longlong resource_ptr;
  longlong base_offset;
  longlong current_offset;
  longlong list_offset;
  char process_flag;
  longlong list_data;
  int item_count;
  
  current_offset = resource_offset;
  list_offset = resource_offset;
  do {
    if (base_offset == 0) {
      resource_ptr = *(longlong *)(current_offset + *(longlong *)(list_data + 0x28));
    }
    else {
      resource_ptr = *(longlong *)(*(longlong *)(base_offset + 8) + 8 + resource_offset);
    }
    *(byte *)(resource_ptr + 0x432) = *(byte *)(resource_ptr + 0x432) & 0xfe;
    *(longlong *)(resource_ptr + 0x408) = list_offset;
    update_resource_state();
    resource_ptr = *g_engine_context;
    item_count = item_count + 1;
    resource_offset = resource_offset + 0x28;
    current_offset = current_offset + 8;
    list_offset = 0;
  } while (item_count < *(int *)(list_data + 0x20));
  current_offset = *(longlong *)(list_data + 0x28);
  if (current_offset != 0) {
    *(uint64_t *)(list_data + 0x20) = 0;
    if (resource_ptr != 0) {
      resource_count = (int *)(resource_ptr + 0x3a8);
      *resource_count = *resource_count + -1;
    }
    // 释放资源池
    free_resource_pool(current_offset, *g_resource_manager);
  }
  if ((process_flag == '\0') && (current_offset = *(longlong *)(list_data + 0x30), current_offset != 0)) {
    if (*(longlong *)(list_offset + 0x30) != 0) {
      *(int32_t *)(*(longlong *)(list_offset + 0x30) + 0x14) = *(int32_t *)(current_offset + 0x14);
      current_offset = *(longlong *)(list_data + 0x30);
    }
    release_resource(current_offset);
    *(uint64_t *)(list_data + 0x30) = 0;
  }
  return;
}

// 函数：cleanup_resource_pool - 清理资源池
// 功能：释放资源池中的所有资源
void cleanup_resource_pool(void)
{
  int *resource_count;
  longlong resource_ptr;
  longlong pool_data;
  longlong context_ptr;
  char cleanup_flag;
  
  resource_ptr = *g_engine_context;
  pool_data = *(longlong *)(context_ptr + 0x28);
  if (pool_data != 0) {
    *(uint64_t *)(context_ptr + 0x20) = 0;
    if (resource_ptr != 0) {
      resource_count = (int *)(resource_ptr + 0x3a8);
      *resource_count = *resource_count + -1;
    }
    // 释放资源池
    free_resource_pool(pool_data, *g_resource_manager);
  }
  if ((cleanup_flag == '\0') && (pool_data = *(longlong *)(context_ptr + 0x30), pool_data != 0)) {
    if (*(longlong *)(context_ptr + 0x30) != 0) {
      *(int32_t *)(*(longlong *)(context_ptr + 0x30) + 0x14) = *(int32_t *)(pool_data + 0x14);
      pool_data = *(longlong *)(context_ptr + 0x30);
    }
    release_resource(pool_data);
    *(uint64_t *)(context_ptr + 0x30) = 0;
  }
  return;
}

// 函数：reset_resource_counter - 重置资源计数器
// 参数：context - 上下文指针
// 功能：重置指定上下文的资源计数器
void reset_resource_counter(uint64_t context)
{
  int *resource_count;
  longlong resource_ptr;
  longlong context_data;
  
  resource_ptr = *g_engine_context;
  *(uint64_t *)(context_data + 0x20) = 0;
  if (resource_ptr != 0) {
    resource_count = (int *)(resource_ptr + 0x3a8);
    *resource_count = *resource_count + -1;
  }
  // 释放资源池
  free_resource_pool(context, *g_resource_manager);
}

// 函数：release_pending_resources - 释放待处理的资源
// 功能：释放所有待处理的资源
void release_pending_resources(void)
{
  longlong resource_ptr;
  longlong context_data;
  longlong target_context;
  
  resource_ptr = *(longlong *)(context_data + 0x30);
  if (resource_ptr != 0) {
    if (*(longlong *)(target_context + 0x30) != 0) {
      *(int32_t *)(*(longlong *)(target_context + 0x30) + 0x14) = *(int32_t *)(resource_ptr + 0x14);
      resource_ptr = *(longlong *)(context_data + 0x30);
    }
    release_resource(resource_ptr);
    *(uint64_t *)(context_data + 0x30) = 0;
  }
  return;
}

// 函数：traverse_resource_tree - 遍历资源树
// 参数：node - 节点指针，result - 结果存储结构
// 功能：深度优先遍历资源树结构
void traverse_resource_tree(longlong node, longlong *result)
{
  while( true ) {
    if (0 < *(int *)(node + 0x20)) {
      if (result[1] == 0) {
        result[1] = node;
      }
      *(int *)(result + 2) = (int)result[2] + 1;
    }
    if ((*(byte *)(node + 0xa0) & 0x20) != 0) {
      *result = node;
    }
    if ((1 < (int)result[2]) && (*result != 0)) break;
    if (*(longlong *)(node + 0x10) != 0) {
      traverse_resource_tree(*(longlong *)(node + 0x10), result);
    }
    node = *(longlong *)(node + 0x18);
    if (node == 0) {
      return;
    }
  }
  return;
}

// 函数：update_render_component - 更新渲染组件
// 参数：component - 组件指针
// 功能：更新指定渲染组件的状态和属性
void update_render_component(int32_t *component)
{
  int render_state;
  longlong render_context;
  longlong component_data;
  bool should_update;
  bool needs_refresh;
  int item_count;
  int current_item;
  longlong item_offset;
  
  render_context = *g_engine_context;
  if (*(longlong *)(component + 2) != 0) {
    component[1] = *(int32_t *)(*(longlong *)(component + 2) + 4);
  }
  if (*(longlong *)(component + 4) != 0) {
    update_render_component();
  }
  if (*(longlong *)(component + 6) != 0) {
    update_render_component();
  }
  item_count = component[8];
  current_item = 0;
  if (0 < item_count) {
    item_offset = 0;
    do {
      render_state = *(int *)(render_context + 0x1a90);
      component_data = *(longlong *)(item_offset + *(longlong *)(component + 10));
      if ((component[0x23] + 1 == render_state) && (*(int *)(component_data + 0x280) + 1 < render_state)) {
        should_update = true;
      }
      else {
        should_update = false;
      }
      if (((component[0x23] + 1 == render_state) &&
          ((((*(byte *)((longlong)component + 0xa1) & 2) != 0 ||
            (component[0x27] == *(int *)(component_data + 8))) && (*(char *)(component_data + 0xb7) != '\0')))) &&
         ((*(uint *)(component_data + 0xc) & 0x100000) == 0)) {
        needs_refresh = true;
      }
      else {
        needs_refresh = false;
      }
      if (((*(byte *)(component_data + 0x432) >> 2 & 1) != 0 || needs_refresh) || should_update) {
        *(byte *)(component_data + 0x432) = *(byte *)(component_data + 0x432) & 0xfb;
        if ((component[8] == 1) && ((*(byte *)(component + 0x28) & 0x20) == 0)) {
          render_context = *(longlong *)(component + 0x1a);
          if (render_context != 0) {
            if (*(int32_t **)(render_context + 0x410) == component) {
              *(uint64_t *)(render_context + 0x410) = 0;
            }
            *(uint64_t *)(component + 0x1a) = 0;
          }
          if (component[8] == 1) {
            *(uint64_t *)(component + 0x1c) = **(uint64_t **)(component + 10);
            *(byte *)(**(longlong **)(component + 10) + 0x432) =
                 *(byte *)(**(longlong **)(component + 10) + 0x432) & 0xfe;
          }
          if (*(longlong *)(component + 0xc) != 0) {
            release_resource();
            *(uint64_t *)(component + 0xc) = 0;
          }
          update_component_properties(component, component_data, *component);
          return;
        }
        update_component_properties(component, component_data, *component);
        item_count = component[8];
        current_item = current_item + -1;
        item_offset = item_offset + -8;
      }
      current_item = current_item + 1;
      item_offset = item_offset + 8;
    } while (current_item < item_count);
  }
  if (item_count < 2) {
    if ((*(byte *)((longlong)component + 0xa1) & 0x10) != 0) {
      *(byte *)(component + 0x28) = *(byte *)(component + 0x28) ^ 0x40;
    }
  }
  else {
    *(byte *)(component + 0x28) = *(byte *)(component + 0x28) & 0xbf;
  }
  *(byte *)((longlong)component + 0xa1) = *(byte *)((longlong)component + 0xa1) & 0xef;
  finalize_component_update(component);
  return;
}

// 函数：set_render_target - 设置渲染目标
// 参数：target_ptr - 目标指针，render_params - 渲染参数
// 功能：设置渲染目标并更新相关状态
void set_render_target(longlong target_ptr, uint64_t render_params)
{
  int32_t prev_width;
  int32_t prev_height;
  longlong render_context;
  
  render_context = *g_engine_context;
  prev_width = *(int32_t *)(*g_engine_context + 0x1b48);
  prev_height = *(int32_t *)(*g_engine_context + 0x1b4c);
  initialize_render_pipeline(render_params);
  *(uint64_t *)(render_context + 0x1b78) = render_params;
  *(byte *)(target_ptr + 0xa1) = *(byte *)(target_ptr + 0xa1) & 0xf7;
  *(int32_t *)(render_context + 0x1b48) = prev_width;
  *(int32_t *)(render_context + 0x1b4c) = prev_height;
  return;
}

// 函数：initialize_render_component - 初始化渲染组件
// 参数：component - 组件指针
// 功能：初始化渲染组件的所有属性和状态
void initialize_render_component(int32_t *component)
{
  uint64_t *render_target;
  byte component_flags;
  int32_t width;
  int32_t height;
  uint64_t texture_id;
  bool is_visible;
  longlong render_context;
  char render_mode;
  int32_t *parent_component;
  int16_t component_id;
  longlong component_offset;
  int32_t *child_component;
  int16_t child_id;
  int texture_index;
  ulonglong stack_cookie;
  uint visibility_flag;
  int32_t render_queue;
  int32_t depth_buffer;
  int32_t stencil_buffer;
  float render_scale;
  int8_t temp_buffer [32];
  int32_t render_params;
  int32_t viewport_params;
  char aspect_ratio;
  char aspect_mode;
  float transform_matrix [4];
  int32_t *component_list;
  uint64_t render_data;
  uint render_priority;
  
  render_context = *g_engine_context;
  stack_cookie = g_stack_cookie ^ (ulonglong)temp_buffer;
  parent_component = (int32_t *)0x0;
  component[0x22] = *(int32_t *)(*g_engine_context + 0x1a90);
  *(uint64_t *)(component + 0x20) = 0;
  *(uint64_t *)(component + 0x1e) = 0;
  component_offset = render_context;
  if (*(longlong *)(component + 2) == 0) {
    update_render_component();
    render_data = (int32_t *)0x0;
    if (0 < (int)component[8]) {
      render_data = component;
    }
    render_priority = (uint)(0 < (int)component[8]);
    component_list = parent_component;
    if ((*(byte *)(component + 0x28) & 0x20) != 0) {
      component_list = component;
    }
    if (*(longlong *)(component + 4) != 0) {
      traverse_resource_tree(*(longlong *)(component + 4), &component_list);
    }
    if (*(longlong *)(component + 6) != 0) {
      traverse_resource_tree(*(longlong *)(component + 6), &component_list);
    }
    *(int32_t **)(component + 0x1e) = component_list;
    child_component = parent_component;
    if (render_priority == 1) {
      child_component = render_data;
    }
    *(int32_t **)(component + 0x20) = child_component;
    if (component[0x25] == 0) {
      component_offset = *g_engine_context;
      if (render_data == (int32_t *)0x0) goto INIT_COMPLETE;
      component[0x25] = *render_data;
    }
    component_offset = *g_engine_context;
    if (render_data != (int32_t *)0x0) {
      texture_index = 1;
      component_offset = **(longlong **)(render_data + 10);
      render_queue = *(int32_t *)(component_offset + 0x18);
      viewport_params = *(int32_t *)(component_offset + 0x1c);
      depth_buffer = *(int32_t *)(component_offset + 0x20);
      component[0x15] = *(int32_t *)(component_offset + 0x14);
      component[0x16] = render_queue;
      component[0x17] = viewport_params;
      component[0x18] = depth_buffer;
      component[0x19] = *(int32_t *)(component_offset + 0x24);
      component_offset = *g_engine_context;
      if (1 < (int)render_data[8]) {
        component_offset = 1;
        component_list = *(longlong **)(render_data + 10);
        do {
          component_list = component_list + 1;
          if (*(char *)(*component_list + 0x24) == '\0') {
            component_offset = (*(longlong **)(render_data + 10))[texture_index];
            render_queue = *(int32_t *)(component_offset + 0x18);
            viewport_params = *(int32_t *)(component_offset + 0x1c);
            depth_buffer = *(int32_t *)(component_offset + 0x20);
            component[0x15] = *(int32_t *)(component_offset + 0x14);
            component[0x16] = render_queue;
            component[0x17] = viewport_params;
            component[0x18] = depth_buffer;
            component[0x19] = *(int32_t *)(component_offset + 0x24);
            component_offset = *g_engine_context;
            break;
          }
          texture_index = texture_index + 1;
          component_offset = component_offset + 1;
        } while (component_offset < (int)render_data[8]);
      }
    }
  }
INIT_COMPLETE:
  texture_index = component[8];
  if ((((texture_index < 2) && (*(longlong *)(component + 2) == 0)) && (*(longlong *)(component + 4) == 0)) &&
     (((*(byte *)(component + 0x28) & 0x10) == 0 && (*(char *)(render_context + 0xc2) == '\0')))) {
    if (texture_index == 1) {
      component_offset = *(longlong *)(component + 0x1a);
      component_offset = **(longlong **)(component + 10);
      *(uint64_t *)(component + 0xe) = *(uint64_t *)(component_offset + 0x40);
      *(uint64_t *)(component + 0x10) = *(uint64_t *)(component_offset + 0x50);
      if ((component_offset != 0) && (*(longlong *)(render_context + 0x1c98) == component_offset)) {
        optimize_render_data(component_offset);
        component_offset = *(longlong *)(component + 0x1a);
      }
      if (component_offset != 0) {
        component_offset = *(longlong *)(component_offset + 0x28);
        *(longlong *)(component_offset + 0x28) = component_offset;
        *(int32_t *)(component_offset + 0x30) = *(int32_t *)(*(longlong *)(component + 0x1a) + 0x30);
        if (*(char *)(*(longlong *)(component + 0x1a) + 0xae) != '\0') {
          *(longlong *)(component_offset + 0x78) = component_offset;
          *(int8_t *)(component_offset + 0xae) = 1;
        }
      }
    }
    component_offset = *(longlong *)(component + 0x1a);
    if (component_offset != 0) {
      if (*(int32_t **)(component_offset + 0x410) == component) {
        *(uint64_t *)(component_offset + 0x410) = 0;
      }
      *(uint64_t *)(component + 0x1a) = 0;
    }
    if (component[8] == 1) {
      *(uint64_t *)(component + 0x1c) = **(uint64_t **)(component + 10);
      *(byte *)(**(longlong **)(component + 10) + 0x432) =
           *(byte *)(**(longlong **)(component + 10) + 0x432) & 0xfe;
    }
    if (*(longlong *)(component + 0xc) != 0) {
      release_resource();
      *(uint64_t *)(component + 0xc) = 0;
    }
    *(byte *)((longlong)component + 0xa1) = *(byte *)((longlong)component + 0xa1) & 0xfc;
    component[0x27] = 0;
    *(byte *)(component + 0x28) = *(byte *)(component + 0x28) & 0x7c;
    component[0x23] = *(int32_t *)(render_context + 0x1a90);
    if (((*(byte *)((longlong)component + 0xa1) & 8) != 0) && (component[8] == 1)) {
      set_render_target(component, **(uint64_t **)(component + 10));
    }
    goto INIT_FINALIZE;
  }
  component_flags = *(byte *)(component + 0x28);
  aspect_mode = component_flags & 0x7f;
  aspect_ratio = '\0';
  *(byte *)(component + 0x28) = aspect_mode;
  if ((component_flags & 0x10) == 0) {
    *(byte *)((longlong)component + 0xa1) = 0 < texture_index | *(byte *)((longlong)component + 0xa1) & 0xfe;
    child_component = parent_component;
    render_data = parent_component;
    if (0 < texture_index) {
      do {
        visibility_flag = (int)render_data + 1;
        component_offset = *(longlong *)((longlong)child_component + *(longlong *)(component + 10));
        *(byte *)(component_offset + 0x432) = 1 < (int)component[8] | *(byte *)(component_offset + 0x432) & 0xfe;
        aspect_mode = *(char *)(component_offset + 0xb7) << 7 | *(byte *)(component + 0x28);
        *(byte *)(component + 0x28) = aspect_mode;
        child_component = child_component + 2;
        render_data = (int32_t *)(ulonglong)visibility_flag;
      } while ((int)visibility_flag < (int)component[8]);
    }
    if (*(longlong *)(component + 2) == 0) {
      if ((aspect_mode & 4) != 0) {
        if (((aspect_mode & 1) == 0) || ((int)component[8] < 1)) {
          if (*(longlong *)(component + 0x1a) == 0) {
            *(uint64_t *)(component_offset + 0x1bf4) = *(uint64_t *)(component + 0xe);
            *(uint64_t *)(component_offset + 0x1bfc) = 0;
            *(int32_t *)(component_offset + 0x1bd0) = 1;
            *(int8_t *)(component_offset + 0x1c14) = 1;
            *(uint64_t *)(component_offset + 0x1c04) = *(uint64_t *)(component + 0x10);
            *(int32_t *)(component_offset + 0x1bd4) = 1;
          }
        }
        else {
          component_offset = **(longlong **)(component + 10);
          *(uint64_t *)(component_offset + 0x1bf4) = *(uint64_t *)(component_offset + 0x40);
          *(uint64_t *)(component_offset + 0x1bfc) = 0;
          *(int32_t *)(component_offset + 0x1bd0) = 1;
          *(int8_t *)(component_offset + 0x1c14) = 1;
          *(uint64_t *)(component_offset + 0x1c04) = *(uint64_t *)(component_offset + 0x50);
          *(int32_t *)(component_offset + 0x1bd4) = 1;
          *(int8_t *)(component_offset + 0x1c15) = *(int8_t *)(component_offset + 0xb2);
          *(int32_t *)(component_offset + 0x1bdc) = 1;
        }
        if (((*(byte *)(component + 0x28) & 2) != 0) && (0 < (int)component[8])) {
          render_queue = *(int32_t *)(**(longlong **)(component + 10) + 0x30);
          *(int32_t *)(component_offset + 0x1bec) = 1;
          *(int32_t *)(component_offset + 0x1c3c) = render_queue;
        }
        render_queue = component[0x16];
        viewport_params = component[0x17];
        depth_buffer = component[0x18];
        *(int32_t *)(component_offset + 0x1c44) = component[0x15];
        *(int32_t *)(component_offset + 0x1c48) = render_queue;
        *(int32_t *)(component_offset + 0x1c4c) = viewport_params;
        *(int32_t *)(component_offset + 0x1c50) = depth_buffer;
        *(int32_t *)(component_offset + 0x1c54) = component[0x19];
        setup_render_pipeline(temp_buffer, 0x14, &g_render_constant, *component);
        component_offset = *g_engine_context;
        transform_matrix [0] = 1.4013e-45;
        transform_matrix [1] = *(float *)(*g_engine_context + 0x162c);
        transform_matrix [2] = *(float *)(*g_engine_context + 0x1630);
        update_render_state(*g_engine_context + 0x1b90, &transform_matrix [0]);
        *(uint64_t *)(component_offset + 0x162c) = 0;
        execute_render_command(temp_buffer, 0, 0x20081139);
        component_offset = *g_engine_context;
        render_context = (longlong)*(int *)(*g_engine_context + 0x1b90);
        component_offset = *(longlong *)(*g_engine_context + 0x1b98);
        component_offset = (longlong)*(int *)(component_offset + -0xc + render_context * 0xc);
        stack_cookie = (ulonglong)*(uint *)(&g_render_offset + component_offset * 0xc);
        if (*(int *)(&g_render_base + component_offset * 0xc) == 4) {
          if (*(int *)(&g_render_offset + 4 + component_offset * 0xc) == 1) {
            *(int32_t *)(stack_cookie + 0x1628 + *g_engine_context) =
                 *(int32_t *)(component_offset + -8 + render_context * 0xc);
          }
          else if (*(int *)(&g_render_offset + 4 + component_offset * 0xc) == 2) {
            *(int32_t *)(stack_cookie + 0x1628 + *g_engine_context) =
                 *(int32_t *)(component_offset + -8 + render_context * 0xc);
            *(int32_t *)(stack_cookie + 0x162c + component_offset) = *(int32_t *)(component_offset + -4 + render_context * 0xc);
          }
        }
        *(int *)(component_offset + 0x1b90) = *(int *)(component_offset + 0x1b90) + -1;
        parent_component = *(int32_t **)(render_context + 0x1af8);
        *(int32_t **)(component + 0x1a) = parent_component;
        aspect_ratio = '\x01';
        *(uint64_t *)(parent_component + 0x40) = *(uint64_t *)(parent_component + 0x10);
        *(int32_t **)(parent_component + 0x104) = component;
        *(uint64_t *)(component + 0xe) = *(uint64_t *)(parent_component + 0x10);
        *(uint64_t *)(component + 0x10) = *(uint64_t *)(parent_component + 0x12);
      }
    }
    else {
      parent_component = *(int32_t **)(*(longlong *)(component + 2) + 0x68);
      *(int32_t **)(component + 0x1a) = parent_component;
    }
    *(byte *)(component + 0x28) = *(byte *)(component + 0x28) & 0xfc;
    if (((*(byte *)((longlong)component + 0xa1) & 8) != 0) && (*(longlong *)(component + 0x1a) != 0)) {
      set_render_target(component);
    }
  }
  else {
    parent_component = *(int32_t **)(component + 0x1a);
    *(byte *)((longlong)component + 0xa1) = *(byte *)((longlong)component + 0xa1) | 1;
  }
  if (*(longlong *)(component + 2) == 0) {
    if (*(longlong *)(render_context + 0x1c98) != 0) {
      component_offset = *(longlong *)(*(longlong *)(render_context + 0x1c98) + 0x3a8);
      child_component = *(int32_t **)(component_offset + 0x408);
      if ((child_component != (int32_t *)0x0) && (*(int32_t **)(component_offset + 0x398) == parent_component)) {
        component[0x25] = *child_component;
      }
    }
    if ((parent_component == (int32_t *)0x0) || ((*(byte *)(component + 1) & 0x40) == 0))
    goto SKIP_SHADER_INIT;
    aspect_ratio = '\x01';
    initialize_shader_program(*(uint64_t *)(parent_component + 0xba), 2);
    component_offset = *g_engine_context;
    render_target = *(uint64_t **)(parent_component + 0xba);
    if (*(int *)(render_target + 0x12) != 1) {
      texture_id = render_target[1];
      render_target = (uint64_t *)((longlong)*(int *)(render_target + 0x12) * 0x20 + render_target[0x14]);
      *render_target = *render_target;
      render_target[1] = texture_id;
      texture_id = render_target[3];
      render_target = (uint64_t *)((longlong)*(int *)(render_target + 0x12) * 0x20 + 0x10 + render_target[0x14]);
      *render_target = render_target[2];
      render_target[1] = texture_id;
      component_offset = render_target[0x14];
      *(int32_t *)(render_target + 0x12) = 1;
      texture_id = *(uint64_t *)(component_offset + 0x28);
      *render_target = *(uint64_t *)(component_offset + 0x20);
      render_target[1] = texture_id;
      render_queue = *(int32_t *)(component_offset + 0x34);
      viewport_params = *(int32_t *)(component_offset + 0x38);
      depth_buffer = *(int32_t *)(component_offset + 0x3c);
      *(int32_t *)(render_target + 2) = *(int32_t *)(component_offset + 0x30);
      *(int32_t *)((longlong)render_target + 0x14) = render_queue;
      *(int32_t *)(render_target + 3) = viewport_params;
      *(int32_t *)((longlong)render_target + 0x1c) = depth_buffer;
      render_target[0xb] = render_target[3] + (longlong)*(int *)(render_target + 2) * 2;
    }
  }
  else {
SKIP_SHADER_INIT:
    aspect_ratio = '\0';
  }
  component_offset = *(longlong *)(component + 0x1e);
  if (((((*(longlong *)(component + 2) == 0) && (parent_component != (int32_t *)0x0)) &&
       ((*(byte *)(component + 1) & 0x40) != 0)) &&
      ((component_offset != 0 && (*(longlong *)(component_offset + 0x10) == 0)))) && (*(int *)(component_offset + 0x20) == 0)) {
    render_target = (uint64_t *)(component_offset + 0x1de0);
    is_visible = true;
    if (*(char *)(component_offset + 0x1dd0) == '\0') {
      render_target = (uint64_t *)0x0;
    }
    if (((render_target == (uint64_t *)0x0) || (*(int *)((longlong)render_target + 0x14) == -1)) ||
       ((texture_index = strcmp(&g_window_title, render_target + 3), texture_index != 0 ||
        (render_mode = validate_window_handle(parent_component, *(uint64_t *)*render_target), render_mode == '\0')))) {
      transform_matrix [3] = *(float *)(component_offset + 0x38) - -4.0;
      transform_matrix [2] = *(float *)(component_offset + 0x3c) - -4.0;
      transform_matrix [1] = (*(float *)(component_offset + 0x38) + *(float *)(component_offset + 0x40)) - 4.0;
      transform_matrix [0] = (*(float *)(component_offset + 0x3c) + *(float *)(component_offset + 0x44)) - 4.0;
      if ((transform_matrix [3] <= transform_matrix [1]) && (transform_matrix [2] <= transform_matrix [0])) {
        render_context = *(longlong *)(parent_component + 0xe6);
        component_id = (int16_t)(int)(transform_matrix [0] - transform_matrix [2]);
        child_id = (int16_t)(int)(transform_matrix [1] - transform_matrix [3]);
        parent_component[0x9a] = CONCAT22(component_id, child_id);
        parent_component[0x9b] =
             CONCAT22((short)(int)(transform_matrix [2] - (float)parent_component[0x11]),
                      (short)(int)(transform_matrix [3] - (float)parent_component[0x10]));
        *(uint *)(render_context + 0x268) = CONCAT22(component_id, child_id);
        transform_matrix [0] = (float)CONCAT22((short)(int)(transform_matrix [2] - *(float *)(render_context + 0x44)),
                                    (short)(int)(transform_matrix [3] - *(float *)(render_context + 0x40)));
        *(float *)(render_context + 0x26c) = transform_matrix [0];
      }
    }
  }
  else {
    is_visible = false;
  }
  if (*(longlong *)(component + 2) == 0) {
    if (parent_component != (int32_t *)0x0) {
      update_component_transform(component, *(uint64_t *)(parent_component + 0x10), *(uint64_t *)(parent_component + 0x12));
      update_component_bounds(component);
      component_offset = *g_engine_context;
      goto UPDATE_COMPLETE;
    }
  }
  else {
UPDATE_COMPLETE:
    if ((((parent_component != (int32_t *)0x0) && (*(longlong *)(component + 4) == 0)) && (component[8] == 0))
       && (((*(byte *)(component + 0x28) & 4) != 0 && ((*(byte *)(component + 1) & 0x40) == 0)))) {
      render_queue = *(int32_t *)(component_offset + 0x1938);
      viewport_params = *(int32_t *)(component_offset + 0x193c);
      depth_buffer = *(int32_t *)(component_offset + 0x1940);
      transform_matrix [1] = (float)component[0xf] + (float)component[0x11];
      transform_matrix [0] = *(float *)(component_offset + 0x1944) * *(float *)(component_offset + 0x1628);
      transform_matrix [3] = (float)component[0xe] + (float)component[0x10];
      render_queue = calculate_render_params(&render_queue);
      viewport_params = 0xf;
      render_params = 0;
      render_to_texture(*(uint64_t *)(parent_component + 0xba), component + 0xe, &transform_matrix [3], render_queue);
      component_offset = *g_engine_context;
    }
  }
  if ((aspect_ratio != '\0') && ((*(byte *)(component + 0x28) & 4) != 0)) {
    apply_shader_settings(*(uint64_t *)(parent_component + 0xba), 0);
    render_queue = *(int32_t *)(component_offset + 0x16e8);
    viewport_params = *(int32_t *)(component_offset + 0x16ec);
    depth_buffer = *(int32_t *)(component_offset + 0x16f0);
    transform_matrix [0] = *(float *)(component_offset + 0x16f4) * *(float *)(component_offset + 0x1628);
    if (is_visible) {
      component_list = *(int32_t **)(component_offset + 0x38);
      transform_matrix [1] = (float)component[0xf];
      transform_matrix [3] = (float)component[0xe];
      transform_matrix [2] = transform_matrix [1] + (float)component[0x11];
      transform_matrix [0] = transform_matrix [3] + (float)component[0x10];
      render_data = (int32_t *)
                  CONCAT44(*(float *)(component_offset + 0x3c) + *(float *)(component_offset + 0x44),
                           *(float *)(component_offset + 0x38) + *(float *)(component_offset + 0x40));
      render_queue = calculate_render_params(&render_queue);
      render_params = 0;
      render_to_screen(*(uint64_t *)(parent_component + 0xba), &transform_matrix [3], &component_list, render_queue);
    }
    else {
      transform_matrix [3] = (float)component[0xe] + (float)component[0x10];
      transform_matrix [1] = (float)component[0xf] + (float)component[0x11];
      render_queue = calculate_render_params(&render_queue);
      viewport_params = 0xf;
      render_params = 0;
      render_to_texture(*(uint64_t *)(parent_component + 0xba), component + 0xe, &transform_matrix [3], render_queue);
    }
    finalize_shader_render(*(uint64_t *)(parent_component + 0xba));
  }
  if ((parent_component == (int32_t *)0x0) || ((int)component[8] < 1)) {
    *(byte *)((longlong)component + 0xa1) = *(byte *)((longlong)component + 0xa1) & 0xfd;
    *(byte *)(component + 0x28) = *(byte *)(component + 0x28) & 0xf7;
    component[0x27] = 0;
    if (0 < (int)component[8]) {
      component[0x26] = *(int32_t *)(**(longlong **)(component + 10) + 8);
    }
  }
  else {
    finalize_component_setup(component, parent_component);
    if (*(int *)(*(longlong *)(component + 0xc) + 0x14) != 0) {
      component[0x26] = *(int *)(*(longlong *)(component + 0xc) + 0x14);
    }
  }
  if ((((parent_component != (int32_t *)0x0) && ((*(byte *)(component + 0x28) & 4) != 0)) &&
      (*(longlong *)(component + 2) == 0)) &&
     ((*(longlong *)(render_context + 0x1b78) == 0 ||
      (*(int32_t **)(*(longlong *)(render_context + 0x1b78) + 0x3a0) != parent_component)))) {
    optimize_render_performance(parent_component);
  }
  component[0x23] = *(int32_t *)(render_context + 0x1a90);
  if (parent_component != (int32_t *)0x0) {
    if (*(longlong *)(component + 4) != 0) {
      initialize_render_component();
    }
    if (*(longlong *)(component + 6) != 0) {
      initialize_render_component();
    }
    if (aspect_ratio != '\0') {
      initialize_render_buffers();
    }
  }
INIT_FINALIZE:
  // 执行栈保护检查
  execute_stack_protection(stack_cookie ^ (ulonglong)temp_buffer);
}

// 渲染相关常量
uint *g_render_constant = &unknown_var_2680_ptr;        // 渲染常量
int *g_render_base = &unknown_var_6048_ptr;             // 渲染基础地址
int *g_render_offset = &unknown_var_6056_ptr;           // 渲染偏移量
char *g_window_title = &unknown_var_2304_ptr;           // 窗口标题