#include "TaleWorlds.Native.Split.h"

// 01_initialization_part004_sub002.c - 1 个函数

// 函数: void initialize_system_component(void)
// 原始函数: void FUN_180034150(void)
// 功能: 初始化系统组件，设置组件配置参数
void initialize_system_component(void)

{
  char component_status;
  uint64_t *component_ptr;
  int comparison_result;
  int64_t *system_handle;
  int64_t config_offset;
  uint64_t *next_component;
  uint64_t *current_component;
  uint64_t *search_component;
  uint64_t *new_component;
  void *default_config;
  
  // 获取系统句柄
  system_handle = (int64_t *)get_system_handle();
  component_ptr = (uint64_t *)*system_handle;
  
  // 检查组件状态
  component_status = *(char *)((int64_t)component_ptr[1] + 0x19);
  default_config = &DEFAULT_COMPONENT_CONFIG;
  current_component = component_ptr;
  search_component = (uint64_t *)component_ptr[1];
  
  // 遍历组件链表查找目标组件
  while (component_status == '\0') {
    comparison_result = memcmp(search_component + 4,&TARGET_COMPONENT_ID,0x10);
    if (comparison_result < 0) {
      next_component = (uint64_t *)search_component[2];
      search_component = current_component;
    }
    else {
      next_component = (uint64_t *)*search_component;
    }
    current_component = search_component;
    search_component = next_component;
    component_status = *(char *)((int64_t)next_component + 0x19);
  }
  
  // 如果需要创建新组件
  if ((current_component == component_ptr) || (comparison_result = memcmp(&TARGET_COMPONENT_ID,current_component + 4,0x10), comparison_result < 0)) {
    config_offset = allocate_component_config(system_handle);
    insert_component_config(system_handle,&new_component,current_component,config_offset + 0x20,config_offset);
    current_component = new_component;
  }
  
  // 设置组件配置参数
  current_component[6] = 0x4384dcc4b6d3f417;  // 配置参数1
  current_component[7] = 0x92a15d52fe2679bd;  // 配置参数2
  current_component[8] = &COMPONENT_FUNCTION_TABLE;  // 函数表指针
  current_component[9] = 0;  // 保留字段
  current_component[10] = default_config;  // 默认配置
  
  return;
}






