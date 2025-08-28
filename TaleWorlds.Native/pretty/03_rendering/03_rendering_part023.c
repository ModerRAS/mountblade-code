#include "TaleWorlds.Native.Split.h"

// 03_rendering_part023.c - 渲染系统组件处理和状态管理功能
// 本文件包含5个主要函数，用于处理渲染组件的状态更新、计数统计和对象管理

/**
 * 更新渲染组件状态
 * @param component_ptr 组件指针
 * @param state_data 状态数据指针
 * 
 * 此函数负责：
 * 1. 检查组件状态并执行相应操作
 * 2. 更新组件的状态数据
 * 3. 处理组件的引用计数
 * 4. 触发相关的状态更新回调
 */
void update_rendering_component_state(undefined8 *component_ptr, undefined8 *state_data)

{
  longlong ref_count_ptr;
  undefined8 state_value;
  char is_active;
  undefined1 flag_value;
  undefined8 *data_ptr;
  
  data_ptr = state_data;
  is_active = func_0x000180285980(component_ptr + 0x66);
  if (is_active != '\0') {
    flag_value = func_0x00018023a100(data_ptr);
    *(undefined1 *)(component_ptr + 100) = flag_value;
    if ((undefined *)*component_ptr == &UNK_180a169b8) {
      FUN_180276f30(component_ptr, (longlong)component_ptr + 0x214, 0);
    }
    else {
      (**(code **)((undefined *)*component_ptr + 0x160))(component_ptr);
    }
    ref_count_ptr = component_ptr[5];
    if (ref_count_ptr != 0) {
      *(short *)(ref_count_ptr + 0x2b0) = *(short *)(ref_count_ptr + 0x2b0) + 1;
      if (*(longlong *)(ref_count_ptr + 0x168) != 0) {
        func_0x0001802eeba0();
      }
    }
    state_value = state_data[1];
    component_ptr[0x66] = *state_data;
    component_ptr[0x67] = state_value;
    state_value = state_data[3];
    component_ptr[0x68] = state_data[2];
    component_ptr[0x69] = state_value;
    state_value = state_data[5];
    component_ptr[0x6a] = state_data[4];
    component_ptr[0x6b] = state_value;
    state_value = state_data[7];
    component_ptr[0x6c] = state_data[6];
    component_ptr[0x6d] = state_value;
  }
  return;
}



/**
 * 计算渲染对象的总计数
 * @param object_container 对象容器指针
 * @return 对象总数
 * 
 * 此函数遍历容器中的所有对象，计算有效对象的总数
 */
int calculate_rendering_object_count(longlong object_container)

{
  int total_count;
  longlong object_ptr;
  longlong *object_array;
  longlong array_size;
  int object_count;
  
  object_array = *(longlong **)(object_container + 0x38);
  object_count = 0;
  total_count = (int)(*(longlong *)(object_container + 0x40) - (longlong)object_array >> 4);
  array_size = (longlong)total_count;
  if (0 < total_count) {
    do {
      object_ptr = *object_array;
      if ((*(byte *)(object_ptr + 0xfd) & 0x20) == 0) {
        object_ptr = func_0x000180085de0(*(undefined8 *)(object_ptr + 0x1b0));
      }
      object_count = object_count + *(int *)(object_ptr + 0x1fc);
      object_array = object_array + 2;
      array_size = array_size + -1;
    } while (array_size != 0);
  }
  return object_count;
}



/**
 * 根据标志位计算渲染对象计数
 * @param object_container 对象容器指针
 * @param flag_bit 标志位
 * @return 符合条件的对象数量
 * 
 * 此函数根据指定的标志位筛选对象并计算数量
 */
int calculate_flagged_object_count(longlong object_container, byte flag_bit)

{
  longlong object_ptr;
  longlong *object_array;
  ulonglong array_size;
  int flagged_count;
  int index;
  
  flagged_count = 0;
  index = 0;
  object_array = *(longlong **)(object_container + 0x38);
  array_size = *(longlong *)(object_container + 0x40) - (longlong)object_array >> 4;
  if (array_size != 0) {
    do {
      if ((*(uint *)(object_array + 1) & 1 << (flag_bit & 0x1f)) != 0) {
        object_ptr = *object_array;
        if ((*(byte *)(object_ptr + 0xfd) & 0x20) == 0) {
          object_ptr = func_0x000180085de0(*(undefined8 *)(object_ptr + 0x1b0));
        }
        flagged_count = flagged_count + *(int *)(object_ptr + 0x1fc);
      }
      index = index + 1;
      object_array = object_array + 2;
    } while ((ulonglong)(longlong)index < array_size);
  }
  return flagged_count;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 创建渲染管理器对象
 * @param manager_type 管理器类型
 * @param output_ptr 输出指针
 * @return 输出指针
 * 
 * 此函数创建并初始化渲染管理器对象
 */
undefined8 *create_rendering_manager(undefined8 manager_type, undefined8 *output_ptr)

{
  undefined8 manager_handle;
  longlong *manager_ptr;
  
  manager_handle = FUN_18062b1e0(_DAT_180c8ed18, 0x3d0, 8, 0x16, 0, 0xfffffffffffffffe);
  manager_ptr = (longlong *)FUN_180275090(manager_handle);
  if (manager_ptr != (longlong *)0x0) {
    (**(code **)(*manager_ptr + 0x28))(manager_ptr);
  }
  FUN_180275a60(manager_type, manager_ptr, 1);
  *output_ptr = manager_ptr;
  if (manager_ptr != (longlong *)0x0) {
    (**(code **)(*manager_ptr + 0x28))(manager_ptr);
    (**(code **)(*manager_ptr + 0x38))(manager_ptr);
  }
  return output_ptr;
}





/**
 * 合并渲染对象数据
 * @param target_object 目标对象指针
 * @param source_object 源对象指针
 * @param merge_flag1 合并标志1
 * @param merge_flag2 合并标志2
 * 
 * 此函数负责：
 * 1. 同步两个对象的深度范围
 * 2. 合并对象的渲染数据
 * 3. 处理引用计数
 * 4. 合并纹理和着色器资源链表
 */
void merge_rendering_object_data(longlong target_object, longlong source_object, undefined8 merge_flag1, undefined8 merge_flag2)

{
  longlong resource_ptr;
  longlong *source_resource;
  longlong *target_resource;
  undefined8 merge_flag;
  
  merge_flag = 0xfffffffffffffffe;
  
  // 同步深度范围 - 确保两个对象使用相同的深度范围
  if ((0 < *(int *)(target_object + 0x58)) && (*(int *)(target_object + 0x58) < *(int *)(source_object + 0x58))) {
    *(int *)(target_object + 0x58) = *(int *)(source_object + 0x58);
    update_depth_range_settings(target_object);
  }
  if ((0 < *(int *)(source_object + 0x58)) && (*(int *)(source_object + 0x58) < *(int *)(target_object + 0x58))) {
    *(int *)(source_object + 0x58) = *(int *)(target_object + 0x58);
    update_depth_range_settings(source_object);
  }
  
  // 执行核心数据合并操作
  perform_data_merge_operation(target_object, source_object, merge_flag1, merge_flag2, merge_flag);
  
  // 更新目标对象的引用计数
  resource_ptr = *(longlong *)(target_object + 0x28);
  if (resource_ptr != 0) {
    *(short *)(resource_ptr + 0x2b0) = *(short *)(resource_ptr + 0x2b0) + 1;
    if (*(longlong *)(resource_ptr + 0x168) != 0) {
      update_reference_tracking_system();
    }
  }
  
  // 合并纹理资源链表
  resource_ptr = *(longlong *)(target_object + 0x3c8);
  if (*(longlong *)(resource_ptr + 0x20) == 0) {
    source_resource = *(longlong **)(*(longlong *)(source_object + 0x3c8) + 0x20);
    if (source_resource != (longlong *)0x0) {
      (**(code **)(*source_resource + 0x28))(source_resource);
    }
    target_resource = *(longlong **)(resource_ptr + 0x20);
    *(longlong **)(resource_ptr + 0x20) = source_resource;
    if (target_resource != (longlong *)0x0) {
      (**(code **)(*target_resource + 0x38))();
    }
  }
  
  // 合并着色器资源链表
  resource_ptr = *(longlong *)(target_object + 0x3c8);
  if (*(longlong *)(resource_ptr + 0x18) == 0) {
    source_resource = *(longlong **)(*(longlong *)(source_object + 0x3c8) + 0x18);
    if (source_resource != (longlong *)0x0) {
      (**(code **)(*source_resource + 0x28))(source_resource);
    }
    target_resource = *(longlong **)(resource_ptr + 0x18);
    *(longlong **)(resource_ptr + 0x18) = source_resource;
    if (target_resource != (longlong *)0x0) {
      (**(code **)(*target_resource + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



