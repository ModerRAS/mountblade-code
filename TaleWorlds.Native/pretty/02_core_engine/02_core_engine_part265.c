#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part265.c - 核心引擎模块第265部分
// 包含7个函数，主要负责组件复制、生命周期管理和事件处理

/**
 * 复制场景对象组件数据
 * @param target_object 目标对象指针
 * @param source_object 源对象指针
 */
void copy_scene_object_components(longlong target_object, longlong source_object) {
  longlong *component_ptr1;
  longlong *component_ptr2;
  undefined8 temp_value1;
  undefined4 temp_value2;
  undefined4 temp_value3;
  bool flag1;
  bool flag2;
  char char_value;
  undefined4 temp_value4;
  undefined4 *string_ptr;
  ulonglong bitmask_value;
  longlong *ref_count_ptr;
  undefined *object_ptr;
  longlong offset1;
  longlong offset2;
  undefined1 stack_buffer1[32];
  undefined *stack_ptr1;
  undefined4 *stack_ptr2;
  undefined4 stack_value1;
  ulonglong stack_value2;
  undefined4 stack_value3;
  undefined8 stack_value4;
  undefined *stack_ptr3;
  undefined1 *stack_ptr4;
  undefined4 stack_value5;
  undefined1 stack_buffer2[24];
  undefined8 stack_value6;
  ulonglong stack_value7;
  
  stack_value6 = 0xfffffffffffffffe;
  
  // 复制基础属性值
  *(undefined4 *)(target_object + 0x138) = *(undefined4 *)(source_object + 0x138);
  *(undefined4 *)(target_object + 0x25c) = *(undefined4 *)(source_object + 0x25c);
  *(undefined4 *)(target_object + 0x260) = *(undefined4 *)(source_object + 0x260);
  *(undefined4 *)(target_object + 0x264) = *(undefined4 *)(source_object + 0x264);
  *(undefined4 *)(target_object + 0x268) = *(undefined4 *)(source_object + 0x268);
  *(undefined4 *)(target_object + 0x278) = *(undefined4 *)(source_object + 0x278);
  *(undefined4 *)(target_object + 0x27c) = *(undefined4 *)(source_object + 0x27c);
  *(undefined4 *)(target_object + 0x280) = *(undefined4 *)(source_object + 0x280);
  *(undefined4 *)(target_object + 0x284) = *(undefined4 *)(source_object + 0x284);
  
  // 复制64位值
  temp_value1 = *(undefined8 *)(source_object + 0x290);
  *(undefined8 *)(target_object + 0x288) = *(undefined8 *)(source_object + 0x288);
  *(undefined8 *)(target_object + 0x290) = temp_value1;
  temp_value1 = *(undefined8 *)(source_object + 0x2a0);
  *(undefined8 *)(target_object + 0x298) = *(undefined8 *)(source_object + 0x298);
  *(undefined8 *)(target_object + 0x2a0) = temp_value1;
  temp_value1 = *(undefined8 *)(source_object + 0x2b0);
  *(undefined8 *)(target_object + 0x2a8) = *(undefined8 *)(source_object + 0x2a8);
  *(undefined8 *)(target_object + 0x2b0) = temp_value1;
  
  // 复制更多属性
  temp_value4 = *(undefined4 *)(source_object + 700);
  temp_value2 = *(undefined4 *)(source_object + 0x2c0);
  temp_value3 = *(undefined4 *)(source_object + 0x2c4);
  *(undefined4 *)(target_object + 0x2b8) = *(undefined4 *)(source_object + 0x2b8);
  *(undefined4 *)(target_object + 700) = temp_value4;
  *(undefined4 *)(target_object + 0x2c0) = temp_value2;
  *(undefined4 *)(target_object + 0x2c4) = temp_value3;
  *(undefined4 *)(target_object + 0x2c8) = *(undefined4 *)(source_object + 0x2c8);
  *(undefined4 *)(target_object + 0x2e0) = *(undefined4 *)(source_object + 0x2e0);
  
  // 复制字符串数据
  object_ptr = &DEFAULT_STRING_DATA;
  if (*(undefined **)(source_object + 0x2d8) != (undefined *)0x0) {
    object_ptr = *(undefined **)(source_object + 0x2d8);
  }
  stack_ptr4 = (undefined1 *)0x18022c87f;
  strcpy_s(*(undefined8 *)(target_object + 0x2d8), 0x80, object_ptr);
  
  // 复制状态标志
  *(undefined1 *)(target_object + 0x13c) = *(undefined1 *)(source_object + 0x13c);
  *(undefined4 *)(target_object + 600) = *(undefined4 *)(source_object + 600);
  
  // 处理引用计数
  ref_count_ptr = *(longlong **)(source_object + 0x1e0);
  if (ref_count_ptr != (longlong *)0x0) {
    stack_ptr4 = (undefined1 *)0x18022c8b2;
    (**(code **)(*ref_count_ptr + 0x28))(ref_count_ptr);
  }
  component_ptr1 = *(longlong **)(target_object + 0x1e0);
  *(longlong **)(target_object + 0x1e0) = ref_count_ptr;
  if (component_ptr1 != (longlong *)0x0) {
    stack_ptr4 = (undefined1 *)0x18022c8d1;
    (**(code **)(*component_ptr1 + 0x38))();
  }
  
  // 复制更多状态数据
  *(undefined4 *)(target_object + 0x388) = *(undefined4 *)(source_object + 0x388);
  *(undefined1 *)(target_object + 0x38c) = *(undefined1 *)(source_object + 0x38c);
  *(undefined4 *)(target_object + 0x26c) = *(undefined4 *)(source_object + 0x26c);
  *(undefined4 *)(target_object + 0x270) = *(undefined4 *)(source_object + 0x270);
  *(undefined4 *)(target_object + 0x274) = *(undefined4 *)(source_object + 0x274);
  
  // 处理组件数组 (16个元素)
  ref_count_ptr = (longlong *)(target_object + 0xb8);
  offset2 = 0x10;
  offset1 = 0x10;
  do {
    component_ptr1 = *(longlong **)((source_object - target_object) + (longlong)ref_count_ptr);
    if (component_ptr1 != (longlong *)0x0) {
      stack_ptr4 = (undefined1 *)0x18022c947;
      (**(code **)(*component_ptr1 + 0x28))(component_ptr1);
    }
    component_ptr2 = (longlong *)*ref_count_ptr;
    *ref_count_ptr = (longlong)component_ptr1;
    if (component_ptr2 != (longlong *)0x0) {
      stack_ptr4 = (undefined1 *)0x18022c95e;
      (**(code **)(*component_ptr2 + 0x38))();
    }
    ref_count_ptr = ref_count_ptr + 1;
    offset1 = offset1 + -1;
  } while (offset1 != 0);
  
  // 复制事件掩码
  *(undefined8 *)(target_object + 0x140) = *(undefined8 *)(source_object + 0x140);
  stack_ptr4 = (undefined1 *)0x18022c97e;
  update_object_event_mask(target_object);
  
  // 设置标志位
  *(undefined2 *)(target_object + 0x3c0) = 0xffff;
  
  // 复制变换数据
  *(undefined8 *)(target_object + 0x390) = *(undefined8 *)(source_object + 0x390);
  *(undefined8 *)(target_object + 0x3a8) = *(undefined8 *)(source_object + 0x3a8);
  *(undefined8 *)(target_object + 0x3b0) = *(undefined8 *)(source_object + 0x3b0);
  *(undefined8 *)(target_object + 0x3b8) = *(undefined8 *)(source_object + 0x3b8);
  *(undefined8 *)(target_object + 0x398) = *(undefined8 *)(source_object + 0x398);
  *(undefined8 *)(target_object + 0x3a0) = *(undefined8 *)(source_object + 0x3a0);
  
  // 复制纹理数据
  stack_ptr4 = (undefined1 *)0x18022c9ee;
  copy_texture_data(target_object + 0x148, source_object + 0x148);
  
  // 复制渲染状态
  *(undefined1 *)(target_object + 0x3d8) = *(undefined1 *)(source_object + 0x3d8);
  ref_count_ptr = (longlong *)(target_object + 0x3e0);
  do {
    component_ptr1 = *(longlong **)(((source_object + 0x3d8) - (target_object + 0x3d8)) + (longlong)ref_count_ptr);
    if (component_ptr1 != (longlong *)0x0) {
      stack_ptr4 = (undefined1 *)0x18022ca27;
      (**(code **)(*component_ptr1 + 0x28))(component_ptr1);
    }
    component_ptr2 = (longlong *)*ref_count_ptr;
    *ref_count_ptr = (longlong)component_ptr1;
    if (component_ptr2 != (longlong *)0x0) {
      stack_ptr4 = (undefined1 *)0x18022ca3e;
      (**(code **)(*component_ptr2 + 0x38))();
    }
    ref_count_ptr = ref_count_ptr + 1;
    offset2 = offset2 + -1;
  } while (offset2 != 0);
  
  // 复制碰撞数据
  *(undefined1 *)(target_object + 0x460) = *(undefined1 *)(source_object + 0x460);
  *(undefined8 *)(target_object + 0x3c8) = *(undefined8 *)(source_object + 0x3c8);
  *(undefined8 *)(target_object + 0x3d0) = *(undefined8 *)(source_object + 0x3d0);
  stack_ptr4 = (undefined1 *)0x18022ca86;
  copy_texture_data(target_object + 0x148, source_object + 0x148);
  
  // 堆栈保护
  stack_value4 = 0xfffffffffffffffe;
  stack_value7 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  flag1 = false;
  stack_value3 = 0;
  *(undefined8 *)(target_object + 0x1d0) = 0;
  
  // 检查是否需要处理生存期事件
  if (_DAT_180c8a9d0 == 0) goto SKIP_LIFETIME_EVENTS;
  offset1 = get_system_time();
  string_ptr = stack_ptr2;
  if ((offset1 == 0) || (char_value = check_object_lifecycle(target_object), string_ptr = stack_ptr2, char_value == '\0')) {
    EVENT_HANDLER_LABEL:
    flag2 = false;
  }
  else {
    temp_value1 = *(undefined8 *)(target_object + 0x1e0);
    stack_ptr1 = &EVENT_LOG_BUFFER;
    stack_value2 = 0;
    stack_ptr2 = (undefined4 *)0x0;
    stack_value1 = 0;
    string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x16, 0x13);
    *(undefined1 *)string_ptr = 0;
    stack_ptr2 = string_ptr;
    temp_value4 = initialize_event_string(string_ptr);
    stack_value2 = CONCAT44(stack_value2._4_4_, temp_value4);
    *string_ptr = 0x5f657375;  // "_esu"
    string_ptr[1] = 0x74726976;  // "triv"
    string_ptr[2] = 0x5f6c6175;  // "_lau"
    string_ptr[3] = 0x74786574;  // "txet"
    string_ptr[4] = 0x6e697275;  // "niru"
    *(undefined2 *)(string_ptr + 5) = 0x67;  // "g"
    stack_value1 = 0x15;
    flag1 = true;
    stack_value3 = 1;
    offset1 = register_event_listener(temp_value1, &stack_ptr1, 0);
    if (offset1 == 0) goto EVENT_HANDLER_LABEL;
    flag2 = true;
  }
  
  // 清理事件资源
  if (flag1) {
    stack_value3 = 0;
    stack_ptr1 = &EVENT_LOG_BUFFER;
    if (string_ptr != (undefined4 *)0x0) {
      // WARNING: Subroutine does not return
      free_event_string(string_ptr);
    }
    stack_ptr2 = (undefined4 *)0x0;
    stack_value2 = stack_value2 & 0xffffffff00000000;
    stack_ptr1 = &MEMORY_CLEANUP_FLAG;
  }
  
  // 处理生存期事件
  if (flag2) {
    if (*(longlong *)(target_object + 0xa8) != 0) {
      *(undefined1 *)(target_object + 0x158) = 1;
      initialize_object_lifecycle(&stack_ptr1, target_object);
      if (*(undefined **)(target_object + 0x148) != stack_ptr1) {
        *(undefined2 *)(target_object + 0x158) = 0;
      }
    }
    if (*(char *)(target_object + 0x158) != '\0') {
      // 更新不同组件的生存期引用
      if (*(longlong *)(target_object + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(target_object + 0xb8) + 0x348) = *(undefined8 *)(target_object + 0x148);
        *(undefined4 *)(*(longlong *)(target_object + 0xb8) + 0x350) = 0;
      }
      if (*(longlong *)(target_object + 200) != 0) {
        *(undefined8 *)(*(longlong *)(target_object + 200) + 0x348) = *(undefined8 *)(target_object + 0x148);
        *(undefined4 *)(*(longlong *)(target_object + 200) + 0x350) = 1;
      }
      if (*(longlong *)(target_object + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(target_object + 0xd8) + 0x348) = *(undefined8 *)(target_object + 0x148);
        *(undefined4 *)(*(longlong *)(target_object + 0xd8) + 0x350) = 2;
      }
      
      // 注册组件事件
      stack_ptr3 = &COMPONENT_EVENT_FLAG;
      stack_ptr4 = stack_buffer2;
      stack_buffer2[0] = 0;
      stack_value5 = 0x15;
      strcpy_s(stack_buffer2, 0x20, &COMPONENT_EVENT_DATA);
      bitmask_value = register_event_listener(*(undefined8 *)(target_object + 0x1e0), &stack_ptr3, 1);
      *(ulonglong *)(target_object + 0x140) = *(ulonglong *)(target_object + 0x140) | bitmask_value;
      update_object_event_mask(target_object);
      *(undefined2 *)(target_object + 0x3c0) = 0xffff;
      stack_ptr3 = &MEMORY_CLEANUP_FLAG;
      *(undefined4 *)(target_object + 0x1d0) = 1;
      
      // 记录调试事件
      temp_value1 = *(undefined8 *)(target_object + 0x1e0);
      stack_ptr1 = &EVENT_LOG_BUFFER;
      stack_value2 = 0;
      stack_ptr2 = (undefined4 *)0x0;
      stack_value1 = 0;
      string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x26, 0x13);
      *(undefined1 *)string_ptr = 0;
      stack_ptr2 = string_ptr;
      temp_value4 = initialize_event_string(string_ptr);
      stack_value2 = CONCAT44(stack_value2._4_4_, temp_value4);
      *string_ptr = 0x5f657375;  // "_esu"
      string_ptr[1] = 0x62756f64;  // "buod"
      string_ptr[2] = 0x635f656c;  // "c_el"
      string_ptr[3] = 0x726f6c6f;  // "rolo"
      string_ptr[4] = 0x5f70616d;  // "_pam"
      string_ptr[5] = 0x68746977;  // "htiw"
      string_ptr[6] = 0x73616d5f;  // "sam_"
      string_ptr[7] = 0x65745f6b;  // "et_k"
      string_ptr[8] = 0x72757478;  // "rutx"
      *(undefined2 *)(string_ptr + 9) = 0x65;  // "e"
      stack_value1 = 0x25;
      register_event_listener(temp_value1, &stack_ptr1, 0);
      stack_ptr1 = &EVENT_LOG_BUFFER;
      // WARNING: Subroutine does not return
      free_event_string(string_ptr);
    }
    
    // 注销组件事件
    stack_ptr3 = &COMPONENT_EVENT_FLAG;
    stack_ptr4 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_value5 = 0x15;
    strcpy_s(stack_buffer2, 0x20, &COMPONENT_EVENT_DATA);
    bitmask_value = register_event_listener(*(undefined8 *)(target_object + 0x1e0), &stack_ptr3, 1);
    *(ulonglong *)(target_object + 0x140) = *(ulonglong *)(target_object + 0x140) & ~bitmask_value;
    update_object_event_mask(target_object);
    stack_ptr3 = &MEMORY_CLEANUP_FLAG;
  }
  
SKIP_LIFETIME_EVENTS:
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_value7 ^ (ulonglong)stack_buffer1);
}

/**
 * 复制纹理数据块
 * @param dest 目标数据指针
 * @param source 源数据指针
 * @return 目标数据指针
 */
undefined8 *copy_texture_data(undefined8 *dest, undefined8 *source) {
  undefined *string_ptr1;
  undefined8 *data_ptr;
  longlong loop_counter;
  undefined *string_ptr2;
  
  data_ptr = dest + 5;
  *dest = *source;
  dest[1] = source[1];
  loop_counter = 2;
  *(undefined1 *)(dest + 2) = *(undefined1 *)(source + 2);
  *(undefined1 *)((longlong)dest + 0x11) = *(undefined1 *)((longlong)source + 0x11);
  
  // 复制数据块
  do {
    *(undefined4 *)data_ptr = *(undefined4 *)(((longlong)source - (longlong)dest) + (longlong)data_ptr);
    string_ptr1 = *(undefined **)(((longlong)source - (longlong)dest) + -8 + (longlong)data_ptr);
    string_ptr2 = &DEFAULT_STRING_DATA;
    if (string_ptr1 != (undefined *)0x0) {
      string_ptr2 = string_ptr1;
    }
    strcpy_s(data_ptr[-1], 0x20, string_ptr2);
    data_ptr = data_ptr + 7;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  return dest;
}

/**
 * 创建场景对象实例
 * @param scene_data 场景数据指针
 * @param object_ptr 对象指针输出参数
 */
void create_scene_object_instance(longlong scene_data, longlong *object_ptr) {
  undefined8 allocated_memory;
  longlong *instance_ptr;
  undefined4 *string_ptr;
  undefined *name_ptr;
  undefined1 name_buffer[32];
  undefined4 stack_value1;
  undefined8 stack_value2;
  longlong *temp_ptr;
  undefined *stack_ptr1;
  undefined *stack_ptr2;
  uint name_length;
  undefined config_buffer[136];
  ulonglong stack_value3;
  
  stack_value2 = 0xfffffffffffffffe;
  stack_value3 = _DAT_180bf00a8 ^ (ulonglong)name_buffer;
  stack_value1 = 0;
  temp_ptr = object_ptr;
  
  // 分配内存并初始化对象
  allocated_memory = allocate_object_memory(_DAT_180c8ed18, 0x470, 0x10, 0x15);
  instance_ptr = (longlong *)initialize_object_instance(allocated_memory);
  *object_ptr = (longlong)instance_ptr;
  
  // 设置引用计数
  if (instance_ptr != (longlong *)0x0) {
    (**(code **)(*instance_ptr + 0x28))(instance_ptr);
  }
  stack_value1 = 1;
  stack_ptr1 = &OBJECT_FACTORY_FLAG;
  stack_ptr2 = config_buffer;
  config_buffer[0] = 0;
  name_length = *(uint *)(scene_data + 0x20);
  name_ptr = &DEFAULT_STRING_DATA;
  
  // 获取对象名称
  if (*(undefined **)(scene_data + 0x18) != (undefined *)0x0) {
    name_ptr = *(undefined **)(scene_data + 0x18);
  }
  strcpy_s(config_buffer, 0x80, name_ptr);
  
  // 构建配置字符串
  if (name_length + 6 < 0x7f) {
    string_ptr = (undefined4 *)(stack_ptr2 + name_length);
    *string_ptr = 0x706f6328;  // "poc("
    *(undefined2 *)(string_ptr + 1) = 0x2979;  // ")y"
    *(undefined1 *)((longlong)string_ptr + 6) = 0;
    name_length = name_length + 6;
  }
  
  // 复制场景数据到对象
  *(undefined8 *)(*object_ptr + 0xa8) = *(undefined8 *)(scene_data + 0xa8);
  name_ptr = &DEFAULT_STRING_DATA;
  if (stack_ptr2 != (undefined *)0x0) {
    name_ptr = stack_ptr2;
  }
  
  // 调用对象初始化方法
  (**(code **)(*(longlong *)(*object_ptr + 0x10) + 0x10))((longlong *)(*object_ptr + 0x10), name_ptr);
  copy_scene_object_components(*object_ptr, scene_data);
  stack_ptr1 = &MEMORY_CLEANUP_FLAG;
  
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_value3 ^ (ulonglong)name_buffer);
}

/**
 * 处理场景对象销毁事件
 * @param object_ptr 对象指针
 * @param event_data 事件数据指针
 * @param param3 参数3
 * @param param4 参数4
 */
void handle_object_destruction_event(longlong object_ptr, undefined8 *event_data, undefined8 param3, undefined8 param4) {
  code *event_handler;
  undefined *event_name;
  
  event_handler = *(code **)(*(longlong *)(object_ptr + 0x2d0) + 0x10);
  event_name = &DEFAULT_STRING_DATA;
  if ((undefined *)event_data[1] != (undefined *)0x0) {
    event_name = (undefined *)event_data[1];
  }
  
  // 调用事件处理器
  (*event_handler)((longlong *)(object_ptr + 0x2d0), event_name, event_handler, param4, 0xfffffffffffffffe);
  cleanup_object_resources(object_ptr, 1);
  *event_data = &MEMORY_CLEANUP_FLAG;
  return;
}

/**
 * 设置对象组件
 * @param object_ptr 对象指针
 * @param component_index 组件索引
 * @param component_ptr 组件指针
 */
void set_object_component(longlong object_ptr, int component_index, longlong *component_ptr) {
  longlong *old_component;
  undefined8 object_data;
  bool event_flag1;
  bool event_flag2;
  char lifecycle_flag;
  undefined4 string_value;
  longlong temp_value;
  undefined4 *event_string;
  ulonglong event_mask;
  undefined1 stack_buffer1[32];
  undefined *stack_ptr1;
  undefined4 *stack_ptr2;
  undefined4 stack_value1;
  ulonglong stack_value2;
  undefined4 stack_value3;
  undefined8 stack_value4;
  undefined *stack_ptr3;
  undefined1 *stack_ptr4;
  undefined4 stack_value5;
  undefined1 stack_buffer2[16];
  undefined8 stack_value6;
  ulonglong stack_value7;
  
  temp_value = object_ptr + (longlong)component_index * 8;
  
  // 释放旧组件
  if (component_ptr != (longlong *)0x0) {
    stack_value6 = 0x18022cd69;
    (**(code **)(*component_ptr + 0x28))(component_ptr);
  }
  
  old_component = *(longlong **)(temp_value + 0xb8);
  *(longlong **)(temp_value + 0xb8) = component_ptr;
  if (old_component != (longlong *)0x0) {
    stack_value6 = 0x18022cd88;
    (**(code **)(*old_component + 0x38))();
  }
  
  // 堆栈保护
  stack_value4 = 0xfffffffffffffffe;
  stack_value7 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  event_flag1 = false;
  stack_value3 = 0;
  *(undefined8 *)(object_ptr + 0x1d0) = 0;
  
  // 检查是否需要处理生存期事件
  if (_DAT_180c8a9d0 == 0) goto SKIP_LIFETIME_EVENTS;
  temp_value = get_system_time();
  event_string = stack_ptr2;
  if ((temp_value == 0) || (lifecycle_flag = check_object_lifecycle(object_ptr), event_string = stack_ptr2, lifecycle_flag == '\0')) {
    EVENT_HANDLER_LABEL:
    event_flag2 = false;
  }
  else {
    object_data = *(undefined8 *)(object_ptr + 0x1e0);
    stack_ptr1 = &EVENT_LOG_BUFFER;
    stack_value2 = 0;
    stack_ptr2 = (undefined4 *)0x0;
    stack_value1 = 0;
    event_string = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x16, 0x13);
    *(undefined1 *)event_string = 0;
    stack_ptr2 = event_string;
    string_value = initialize_event_string(event_string);
    stack_value2 = CONCAT44(stack_value2._4_4_, string_value);
    *event_string = 0x5f657375;  // "_esu"
    event_string[1] = 0x74726976;  // "triv"
    event_string[2] = 0x5f6c6175;  // "_lau"
    event_string[3] = 0x74786574;  // "txet"
    event_string[4] = 0x6e697275;  // "niru"
    *(undefined2 *)(event_string + 5) = 0x67;  // "g"
    stack_value1 = 0x15;
    event_flag1 = true;
    stack_value3 = 1;
    temp_value = register_event_listener(object_data, &stack_ptr1, 0);
    if (temp_value == 0) goto EVENT_HANDLER_LABEL;
    event_flag2 = true;
  }
  
  // 清理事件资源
  if (event_flag1) {
    stack_value3 = 0;
    stack_ptr1 = &EVENT_LOG_BUFFER;
    if (event_string != (undefined4 *)0x0) {
      // WARNING: Subroutine does not return
      free_event_string(event_string);
    }
    stack_ptr2 = (undefined4 *)0x0;
    stack_value2 = stack_value2 & 0xffffffff00000000;
    stack_ptr1 = &MEMORY_CLEANUP_FLAG;
  }
  
  // 处理生存期事件
  if (event_flag2) {
    if (*(longlong *)(object_ptr + 0xa8) != 0) {
      *(undefined1 *)(object_ptr + 0x158) = 1;
      initialize_object_lifecycle(&stack_ptr1, object_ptr);
      if (*(undefined **)(object_ptr + 0x148) != stack_ptr1) {
        *(undefined2 *)(object_ptr + 0x158) = 0;
      }
    }
    if (*(char *)(object_ptr + 0x158) != '\0') {
      // 更新不同组件的生存期引用
      if (*(longlong *)(object_ptr + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 0xb8) + 0x348) = *(undefined8 *)(object_ptr + 0x148);
        *(undefined4 *)(*(longlong *)(object_ptr + 0xb8) + 0x350) = 0;
      }
      if (*(longlong *)(object_ptr + 200) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 200) + 0x348) = *(undefined8 *)(object_ptr + 0x148);
        *(undefined4 *)(*(longlong *)(object_ptr + 200) + 0x350) = 1;
      }
      if (*(longlong *)(object_ptr + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 0xd8) + 0x348) = *(undefined8 *)(object_ptr + 0x148);
        *(undefined4 *)(*(longlong *)(object_ptr + 0xd8) + 0x350) = 2;
      }
      
      // 注册组件事件
      stack_ptr3 = &COMPONENT_EVENT_FLAG;
      stack_ptr4 = stack_buffer2;
      stack_buffer2[0] = 0;
      stack_value5 = 0x15;
      strcpy_s(stack_buffer2, 0x20, &COMPONENT_EVENT_DATA);
      event_mask = register_event_listener(*(undefined8 *)(object_ptr + 0x1e0), &stack_ptr3, 1);
      *(ulonglong *)(object_ptr + 0x140) = *(ulonglong *)(object_ptr + 0x140) | event_mask;
      update_object_event_mask(object_ptr);
      *(undefined2 *)(object_ptr + 0x3c0) = 0xffff;
      stack_ptr3 = &MEMORY_CLEANUP_FLAG;
      *(undefined4 *)(object_ptr + 0x1d0) = 1;
      
      // 记录调试事件
      object_data = *(undefined8 *)(object_ptr + 0x1e0);
      stack_ptr1 = &EVENT_LOG_BUFFER;
      stack_value2 = 0;
      stack_ptr2 = (undefined4 *)0x0;
      stack_value1 = 0;
      event_string = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x26, 0x13);
      *(undefined1 *)event_string = 0;
      stack_ptr2 = event_string;
      string_value = initialize_event_string(event_string);
      stack_value2 = CONCAT44(stack_value2._4_4_, string_value);
      *event_string = 0x5f657375;  // "_esu"
      event_string[1] = 0x62756f64;  // "buod"
      event_string[2] = 0x635f656c;  // "c_el"
      event_string[3] = 0x726f6c6f;  // "rolo"
      event_string[4] = 0x5f70616d;  // "_pam"
      event_string[5] = 0x68746977;  // "htiw"
      event_string[6] = 0x73616d5f;  // "sam_"
      event_string[7] = 0x65745f6b;  // "et_k"
      event_string[8] = 0x72757478;  // "rutx"
      *(undefined2 *)(event_string + 9) = 0x65;  // "e"
      stack_value1 = 0x25;
      register_event_listener(object_data, &stack_ptr1, 0);
      stack_ptr1 = &EVENT_LOG_BUFFER;
      // WARNING: Subroutine does not return
      free_event_string(event_string);
    }
    
    // 注销组件事件
    stack_ptr3 = &COMPONENT_EVENT_FLAG;
    stack_ptr4 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_value5 = 0x15;
    strcpy_s(stack_buffer2, 0x20, &COMPONENT_EVENT_DATA);
    event_mask = register_event_listener(*(undefined8 *)(object_ptr + 0x1e0), &stack_ptr3, 1);
    *(ulonglong *)(object_ptr + 0x140) = *(ulonglong *)(object_ptr + 0x140) & ~event_mask;
    update_object_event_mask(object_ptr);
    stack_ptr3 = &MEMORY_CLEANUP_FLAG;
  }
  
SKIP_LIFETIME_EVENTS:
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_value7 ^ (ulonglong)stack_buffer1);
}

/**
 * 销毁场景对象
 * @param object_ptr 对象指针
 */
void destroy_scene_object(longlong object_ptr) {
  undefined8 object_data;
  bool event_flag1;
  bool event_flag2;
  char lifecycle_flag;
  undefined4 string_value;
  longlong temp_value;
  undefined4 *event_string;
  ulonglong event_mask;
  undefined1 stack_buffer1[32];
  undefined *stack_ptr1;
  undefined4 *stack_ptr2;
  undefined4 stack_value1;
  ulonglong stack_value2;
  undefined4 stack_value3;
  undefined8 stack_value4;
  undefined *stack_ptr3;
  undefined1 *stack_ptr4;
  undefined4 stack_value5;
  undefined1 stack_buffer2[32];
  ulonglong stack_value5;
  
  // 堆栈保护
  stack_value4 = 0xfffffffffffffffe;
  stack_value5 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  event_flag1 = false;
  stack_value3 = 0;
  *(undefined8 *)(object_ptr + 0x1d0) = 0;
  
  // 检查是否需要处理生存期事件
  if (_DAT_180c8a9d0 == 0) goto SKIP_LIFETIME_EVENTS;
  temp_value = get_system_time();
  event_string = stack_ptr2;
  if ((temp_value == 0) || (lifecycle_flag = check_object_lifecycle(object_ptr), event_string = stack_ptr2, lifecycle_flag == '\0')) {
    EVENT_HANDLER_LABEL:
    event_flag2 = false;
  }
  else {
    object_data = *(undefined8 *)(object_ptr + 0x1e0);
    stack_ptr1 = &EVENT_LOG_BUFFER;
    stack_value2 = 0;
    stack_ptr2 = (undefined4 *)0x0;
    stack_value1 = 0;
    event_string = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x16, 0x13);
    *(undefined1 *)event_string = 0;
    stack_ptr2 = event_string;
    string_value = initialize_event_string(event_string);
    stack_value2 = CONCAT44(stack_value2._4_4_, string_value);
    *event_string = 0x5f657375;  // "_esu"
    event_string[1] = 0x74726976;  // "triv"
    event_string[2] = 0x5f6c6175;  // "_lau"
    event_string[3] = 0x74786574;  // "txet"
    event_string[4] = 0x6e697275;  // "niru"
    *(undefined2 *)(event_string + 5) = 0x67;  // "g"
    stack_value1 = 0x15;
    event_flag1 = true;
    stack_value3 = 1;
    temp_value = register_event_listener(object_data, &stack_ptr1, 0);
    if (temp_value == 0) goto EVENT_HANDLER_LABEL;
    event_flag2 = true;
  }
  
  // 清理事件资源
  if (event_flag1) {
    stack_value3 = 0;
    stack_ptr1 = &EVENT_LOG_BUFFER;
    if (event_string != (undefined4 *)0x0) {
      // WARNING: Subroutine does not return
      free_event_string(event_string);
    }
    stack_ptr2 = (undefined4 *)0x0;
    stack_value2 = stack_value2 & 0xffffffff00000000;
    stack_ptr1 = &MEMORY_CLEANUP_FLAG;
  }
  
  // 处理生存期事件
  if (event_flag2) {
    if (*(longlong *)(object_ptr + 0xa8) != 0) {
      *(undefined1 *)(object_ptr + 0x158) = 1;
      initialize_object_lifecycle(&stack_ptr1, object_ptr);
      if (*(undefined **)(object_ptr + 0x148) != stack_ptr1) {
        *(undefined2 *)(object_ptr + 0x158) = 0;
      }
    }
    if (*(char *)(object_ptr + 0x158) != '\0') {
      // 更新不同组件的生存期引用
      if (*(longlong *)(object_ptr + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 0xb8) + 0x348) = *(undefined8 *)(object_ptr + 0x148);
        *(undefined4 *)(*(longlong *)(object_ptr + 0xb8) + 0x350) = 0;
      }
      if (*(longlong *)(object_ptr + 200) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 200) + 0x348) = *(undefined8 *)(object_ptr + 0x148);
        *(undefined4 *)(*(longlong *)(object_ptr + 200) + 0x350) = 1;
      }
      if (*(longlong *)(object_ptr + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 0xd8) + 0x348) = *(undefined8 *)(object_ptr + 0x148);
        *(undefined4 *)(*(longlong *)(object_ptr + 0xd8) + 0x350) = 2;
      }
      
      // 注册组件事件
      stack_ptr3 = &COMPONENT_EVENT_FLAG;
      stack_ptr4 = stack_buffer2;
      stack_buffer2[0] = 0;
      stack_value5 = 0x15;
      strcpy_s(stack_buffer2, 0x20, &COMPONENT_EVENT_DATA);
      event_mask = register_event_listener(*(undefined8 *)(object_ptr + 0x1e0), &stack_ptr3, 1);
      *(ulonglong *)(object_ptr + 0x140) = *(ulonglong *)(object_ptr + 0x140) | event_mask;
      update_object_event_mask(object_ptr);
      *(undefined2 *)(object_ptr + 0x3c0) = 0xffff;
      stack_ptr3 = &MEMORY_CLEANUP_FLAG;
      *(undefined4 *)(object_ptr + 0x1d0) = 1;
      
      // 记录调试事件
      object_data = *(undefined8 *)(object_ptr + 0x1e0);
      stack_ptr1 = &EVENT_LOG_BUFFER;
      stack_value2 = 0;
      stack_ptr2 = (undefined4 *)0x0;
      stack_value1 = 0;
      event_string = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x26, 0x13);
      *(undefined1 *)event_string = 0;
      stack_ptr2 = event_string;
      string_value = initialize_event_string(event_string);
      stack_value2 = CONCAT44(stack_value2._4_4_, string_value);
      *event_string = 0x5f657375;  // "_esu"
      event_string[1] = 0x62756f64;  // "buod"
      event_string[2] = 0x635f656c;  // "c_el"
      event_string[3] = 0x726f6c6f;  // "rolo"
      event_string[4] = 0x5f70616d;  // "_pam"
      event_string[5] = 0x68746977;  // "htiw"
      event_string[6] = 0x73616d5f;  // "sam_"
      event_string[7] = 0x65745f6b;  // "et_k"
      event_string[8] = 0x72757478;  // "rutx"
      *(undefined2 *)(event_string + 9) = 0x65;  // "e"
      stack_value1 = 0x25;
      register_event_listener(object_data, &stack_ptr1, 0);
      stack_ptr1 = &EVENT_LOG_BUFFER;
      // WARNING: Subroutine does not return
      free_event_string(event_string);
    }
    
    // 注销组件事件
    stack_ptr3 = &COMPONENT_EVENT_FLAG;
    stack_ptr4 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_value5 = 0x15;
    strcpy_s(stack_buffer2, 0x20, &COMPONENT_EVENT_DATA);
    event_mask = register_event_listener(*(undefined8 *)(object_ptr + 0x1e0), &stack_ptr3, 1);
    *(ulonglong *)(object_ptr + 0x140) = *(ulonglong *)(object_ptr + 0x140) & ~event_mask;
    update_object_event_mask(object_ptr);
    stack_ptr3 = &MEMORY_CLEANUP_FLAG;
  }
  
SKIP_LIFETIME_EVENTS:
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_value5 ^ (ulonglong)stack_buffer1);
}

/**
 * 检查对象是否可见
 * @param object_ptr 对象指针
 * @return 可见性状态
 */
bool check_object_visibility(longlong object_ptr) {
  char visibility_flag;
  longlong *object_data;
  longlong temp_value;
  longlong range_value;
  byte *component_data;
  uint component_index;
  ulonglong event_mask;
  
  visibility_flag = *(char *)(object_ptr + 0x3c1);
  if (visibility_flag == -1) {
    temp_value = object_ptr;
    visibility_flag = get_current_frame_time();
    if ((((((visibility_flag == '\0') ||
           (temp_value = *(longlong *)(temp_value + 0x1e0), 1 < *(int *)(temp_value + 0x1c4) - 1U)) ||
          ((*(uint *)(temp_value + 0x1588) & 0x10000) != 0)) ||
         (((*(uint *)(object_ptr + 0x388) >> 0x19 & 1) != 0 || (*(int *)(temp_value + 0x290) != 0)))) ||
        ((*(char *)(object_ptr + 0x13c) != '\x06' && (*(char *)(object_ptr + 0x13c) != '\0')))) ||
       ((*(ulonglong *)(object_ptr + 0x140) & *(ulonglong *)(object_ptr + 0x398)) != 0)) {
    VISIBILITY_CHECK_FAILED:
      visibility_flag = '\0';
    }
    else {
      visibility_flag = '\x01';
      object_data = (longlong *)get_active_component_list();
      event_mask = 0;
      range_value = object_data[1] - *object_data;
      temp_value = range_value >> 0x3f;
      range_value = range_value / 0x60 + temp_value;
      if (range_value != temp_value) {
        component_data = (byte *)(*object_data + 0x58);
        do {
          if (((*(ulonglong *)(object_ptr + 0x140) >> (event_mask & 0x3f) & 1) != 0) && ((*component_data & 2) != 0)) {
            goto VISIBILITY_CHECK_FAILED;
          }
          component_index = (int)event_mask + 1;
          event_mask = (ulonglong)component_index;
          component_data = component_data + 0x60;
        } while ((ulonglong)(longlong)(int)component_index < (ulonglong)(range_value - temp_value));
      }
    }
    *(char *)(object_ptr + 0x3c1) = visibility_flag;
  }
  return visibility_flag == '\x01';
}

/**
 * 处理对象更新事件
 * @param object_ptr 对象指针
 * @param event_params 事件参数
 * @return 处理的对象数量
 */
uint process_object_update_events(longlong object_ptr, longlong *event_params) {
  char update_flag;
  longlong *component_array;
  uint processed_count;
  uint component_index;
  longlong component_data;
  undefined8 stack_param1;
  undefined8 stack_param2;
  code *callback_func;
  code *guard_func;
  
  processed_count = 0;
  if ((*(byte *)(event_params + 1) & 1) != 0) {
    initialize_event_system();
  }
  
  if (*(char *)(object_ptr + 0x460) == '\0') {
    if ((char)event_params[2] != '\0') {
      // 处理渲染器清理
      if ((*(longlong *)(object_ptr + 0x3c8) != 0) &&
          (((_DAT_180c8a9d0 == 0 || (*(char *)(_DAT_180c8a9d0 + 0x1f1) == '\0')) &&
           (*(char *)(object_ptr + 0x1d8) == '\0'))) &&
         ((*(int *)(object_ptr + 0x1d0) != -1 && (*(int *)(object_ptr + 0x1d0) != 0)))) {
        release_renderer_resources(*(longlong *)(object_ptr + 0x3c8), 0xffffffff);
      }
      
      // 处理物理资源清理
      if ((*(longlong *)(object_ptr + 0x3d0) != 0) &&
          ((_DAT_180c8a9d0 == 0 || (*(char *)(_DAT_180c8a9d0 + 0x1f1) == '\0'))) &&
         ((*(char *)(object_ptr + 0x1d8) == '\0' &&
          ((*(int *)(object_ptr + 0x1d4) != -1 && (*(int *)(object_ptr + 0x1d4) != 0)))))) {
        release_renderer_resources(*(longlong *)(object_ptr + 0x3d0), 0xffffffff);
      }
    }
    
    // 处理组件更新 (16个组件)
    component_array = (longlong *)(object_ptr + 0xb8);
    component_index = processed_count;
    do {
      component_data = *component_array;
      if (((component_data != 0) &&
          (((update_flag = check_component_update_state(object_ptr, 0), update_flag == '\0' || ((component_index & 0xfffffff9) != 0))
           || (component_index == 6)))) &&
         ((((update_flag = check_component_update_state(object_ptr, 1), update_flag == '\0' ||
            ((component_index - 1 & 0xfffffffd) != 0)) && (*(int *)(component_data + 0x380) != 2)) &&
          ((*(int *)(*component_array + 0x380) != 3 && (*(longlong *)(*component_array + 0xa8) != 0)))))) {
        processed_count = processed_count + 1;
        if (*event_params != 0) {
          acquire_update_lock();
        }
        if ((char)event_params[2] != '\0') {
          stack_param1 = 0;
          stack_param2 = 0;
          callback_func = (code *)0x0;
          guard_func = _guard_check_icall;
          execute_component_callback(*component_array, 0, *(undefined4 *)((longlong)event_params + 0x14), &stack_param1);
          if (callback_func != (code *)0x0) {
            (*callback_func)(&stack_param1, 0, 0);
          }
        }
      }
      component_index = component_index + 1;
      component_array = component_array + 1;
    } while ((int)component_index < 0x10);
  }
  else if ((*(byte *)(event_params + 1) & 1) != 0) {
    // 处理特殊组件数组
    component_array = (longlong *)(object_ptr + 0x3e0);
    component_data = 0x10;
    do {
      if ((((component_array[-0x65] != 0) && (*component_array != 0)) && (*(int *)(*component_array + 0x380) != 2)) &&
         (*(int *)(*component_array + 0x380) != 3)) {
        processed_count = processed_count + 1;
      }
      component_array = component_array + 1;
      component_data = component_data + -1;
    } while (component_data != 0);
  }
  return processed_count;
}

/**
 * 发送对象销毁通知
 * @param object_ptr 对象指针
 */
void send_object_destruction_notification(longlong object_ptr) {
  undefined8 object_data;
  undefined1 stack_buffer1[32];
  undefined8 stack_value1;
  undefined *stack_ptr1;
  undefined1 *stack_ptr2;
  undefined4 stack_value2;
  undefined1 stack_buffer2[32];
  ulonglong stack_value3;
  
  stack_value1 = 0xfffffffffffffffe;
  stack_value3 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  object_data = *(undefined8 *)(object_ptr + 0x1e0);
  stack_ptr1 = &COMPONENT_EVENT_FLAG;
  stack_ptr2 = stack_buffer2;
  stack_buffer2[0] = 0;
  stack_value2 = 0x11;
  strcpy_s(stack_buffer2, 0x20, &OBJECT_DESTROY_EVENT_NAME);
  register_event_listener(object_data, &stack_ptr1, 0);
  stack_ptr1 = &MEMORY_CLEANUP_FLAG;
  
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_value3 ^ (ulonglong)stack_buffer1);
}

/**
 * 按名称查找对象组件
 * @param object_ptr 对象指针
 * @param name_data 名称数据
 * @param search_param 搜索参数
 */
void find_object_component_by_name(longlong object_ptr, longlong name_data, undefined8 search_param) {
  byte *name_ptr1;
  int name_length1;
  int name_length2;
  byte *name_ptr2;
  int comparison_result;
  undefined *default_name;
  longlong offset_value;
  undefined *object_name;
  undefined8 *component_table;
  undefined *component_name;
  ulonglong table_index;
  ulonglong max_index;
  
  max_index = 0;
  name_length1 = *(int *)(name_data + 0x10);
  component_table = (undefined8 *)(*(longlong *)(object_ptr + 0x1e0) + 0x1c38);
  table_index = max_index;
  
  do {
    name_length2 = *(int *)(component_table + 1);
    comparison_result = name_length1;
    if (name_length2 == name_length1) {
      if (name_length2 != 0) {
        name_ptr2 = (byte *)*component_table;
        offset_value = *(longlong *)(name_data + 8) - (longlong)name_ptr2;
        do {
          name_ptr1 = name_ptr2 + offset_value;
          comparison_result = (uint)*name_ptr2 - (uint)*name_ptr1;
          if (comparison_result != 0) break;
          name_ptr2 = name_ptr2 + 1;
        } while (*name_ptr1 != 0);
      }
    COMPONENT_FOUND:
      if (comparison_result == 0) {
        if (-1 < (int)table_index) {
          set_object_component(object_ptr, table_index, search_param);
          return;
        }
        goto COMPONENT_NOT_FOUND;
      }
    }
    else if (name_length2 == 0) goto COMPONENT_FOUND;
    table_index = (ulonglong)((int)table_index + 1);
    max_index = max_index + 1;
    component_table = component_table + 0xb;
    if (0xf < (longlong)max_index) {
    COMPONENT_NOT_FOUND:
      object_name = *(undefined **)(*(longlong *)(object_ptr + 0x1e0) + 0x18);
      component_name = &DEFAULT_STRING_DATA;
      if (object_name != (undefined *)0x0) {
        component_name = object_name;
      }
      default_name = &DEFAULT_STRING_DATA;
      if (*(undefined **)(name_data + 8) != (undefined *)0x0) {
        default_name = *(undefined **)(name_data + 8);
      }
      object_name = &DEFAULT_STRING_DATA;
      if (*(undefined **)(object_ptr + 0x18) != (undefined *)0x0) {
        object_name = *(undefined **)(object_ptr + 0x18);
      }
      log_component_error(&COMPONENT_ERROR_MESSAGE, object_name, default_name, component_name);
      return;
    }
  } while( true );
}