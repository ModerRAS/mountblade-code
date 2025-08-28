#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part265.c - 核心引擎模块第265部分
// 包含10个函数，主要负责场景对象组件复制、纹理数据复制、对象生命周期管理和事件处理

// 常量定义
#define COMPONENT_ARRAY_SIZE 16
#define TEXTURE_DATA_SIZE 7
#define RENDER_COMPONENT_SIZE 16
#define MAX_COMPONENT_INDEX 15
#define OBJECT_NAME_MAX_LENGTH 128
#define EVENT_STRING_MAX_LENGTH 32
#define LIFETIME_EVENT_ENABLED _DAT_180c8a9d0
#define DEFAULT_STACK_PROTECTION 0xfffffffffffffffe
#define FULL_COMPONENT_MASK 0xffff

// 内存偏移常量
#define OFFSET_OBJECT_SCENE_DATA 0xa8
#define OFFSET_OBJECT_EVENT_MASK 0x140
#define OFFSET_OBJECT_COMPONENT_ARRAY 0xb8
#define OFFSET_OBJECT_RENDER_COMPONENT_ARRAY 0x3e0
#define OFFSET_OBJECT_LIFETIME_FLAG 0x158
#define OFFSET_OBJECT_TEXTURE_DATA 0x148
#define OFFSET_OBJECT_RENDERER 0x3c8
#define OFFSET_OBJECT_PHYSICS 0x3d0
#define OFFSET_OBJECT_VISIBILITY 0x3c1
#define OFFSET_OBJECT_COLLISION 0x460
#define OFFSET_OBJECT_TRANSFORM_DATA 0x390
#define OFFSET_OBJECT_RENDER_STATE 0x3d8
#define OFFSET_OBJECT_LIFETIME_EVENT 0x1d0
#define OFFSET_OBJECT_TYPE_INFO 0x1e0
#define OFFSET_OBJECT_COMPONENT_TABLE 0x1c38

/**
 * 复制场景对象组件数据
 * 将源对象的所有组件、属性和状态复制到目标对象
 * 
 * @param target_object 目标对象指针，接收复制的数据
 * @param source_object 源对象指针，提供要复制的数据
 * 
 * 功能说明：
 * 1. 复制基础属性值（位置、旋转、缩放等）
 * 2. 复制组件数组（16个组件）
 * 3. 复制纹理和渲染数据
 * 4. 复制事件掩码和状态标志
 * 5. 处理引用计数和生命周期事件
 * 6. 复制碰撞和物理数据
 * 
 * 注意事项：
 * - 函数不会返回，内部调用堆栈保护清理函数
 * - 需要正确处理引用计数以避免内存泄漏
 * - 生命周期事件只在特定条件下触发
 */
void 复制场景对象组件数据(longlong target_object, longlong source_object) {
  longlong *source_component_ptr;      // 源组件指针
  longlong *target_component_ptr;      // 目标组件指针
  longlong *temp_component_ptr;        // 临时组件指针
  undefined8 temp_value_64bit;         // 64位临时值
  undefined4 temp_value_32bit;         // 32位临时值
  bool event_registration_success;     // 事件注册成功标志
  bool lifecycle_event_active;         // 生命周期事件活动标志
  char lifecycle_check_result;         // 生命周期检查结果
  undefined4 *event_string_ptr;       // 事件字符串指针
  ulonglong event_bitmask;             // 事件位掩码
  longlong *reference_count_ptr;       // 引用计数指针
  undefined *object_name_ptr;          // 对象名称指针
  longlong component_loop_counter;     // 组件循环计数器
  longlong render_loop_counter;        // 渲染组件循环计数器
  
  // 堆栈缓冲区 - 用于堆栈保护检查
  undefined1 stack_protection_buffer_1[32];
  undefined *stack_context_ptr_1;
  undefined4 *stack_context_ptr_2;
  undefined4 stack_temp_value_1;
  ulonglong stack_temp_value_2;
  undefined4 stack_temp_value_3;
  undefined8 stack_temp_value_4;
  undefined *stack_context_ptr_3;
  undefined1 *stack_context_ptr_4;
  undefined4 stack_temp_value_5;
  
  // 生命周期事件处理缓冲区
  undefined1 lifecycle_event_buffer[24];
  undefined8 stack_temp_value_6;
  ulonglong stack_protection_value;
  
  // 初始化堆栈保护
  stack_temp_value_6 = DEFAULT_STACK_PROTECTION;
  
  // 第一阶段：复制基础属性值 (0x138 - 0x284)
  // 这些是对象的基本变换和渲染属性
  *(undefined4 *)(target_object + 0x138) = *(undefined4 *)(source_object + 0x138);  // 基础属性1
  *(undefined4 *)(target_object + 0x25c) = *(undefined4 *)(source_object + 0x25c);  // 渲染属性1
  *(undefined4 *)(target_object + 0x260) = *(undefined4 *)(source_object + 0x260);  // 渲染属性2
  *(undefined4 *)(target_object + 0x264) = *(undefined4 *)(source_object + 0x264);  // 渲染属性3
  *(undefined4 *)(target_object + 0x268) = *(undefined4 *)(source_object + 0x268);  // 渲染属性4
  *(undefined4 *)(target_object + 0x278) = *(undefined4 *)(source_object + 0x278);  // 材质属性1
  *(undefined4 *)(target_object + 0x27c) = *(undefined4 *)(source_object + 0x27c);  // 材质属性2
  *(undefined4 *)(target_object + 0x280) = *(undefined4 *)(source_object + 0x280);  // 材质属性3
  *(undefined4 *)(target_object + 0x284) = *(undefined4 *)(source_object + 0x284);  // 材质属性4
  
  // 第二阶段：复制64位变换数据 (0x288 - 0x2b0)
  // 包含位置、旋转、缩放等变换矩阵数据
  temp_value_64bit = *(undefined8 *)(source_object + 0x290);  // 保存临时值
  *(undefined8 *)(target_object + 0x288) = *(undefined8 *)(source_object + 0x288);  // 变换数据1
  *(undefined8 *)(target_object + 0x290) = temp_value_64bit;                    // 变换数据2
  temp_value_64bit = *(undefined8 *)(source_object + 0x2a0);  // 保存临时值
  *(undefined8 *)(target_object + 0x298) = *(undefined8 *)(source_object + 0x298);  // 变换数据3
  *(undefined8 *)(target_object + 0x2a0) = temp_value_64bit;                    // 变换数据4
  temp_value_64bit = *(undefined8 *)(source_object + 0x2b0);  // 保存临时值
  *(undefined8 *)(target_object + 0x2a8) = *(undefined8 *)(source_object + 0x2a8);  // 变换数据5
  *(undefined8 *)(target_object + 0x2b0) = temp_value_64bit;                    // 变换数据6
  
  // 第三阶段：复制高级属性 (0x2b8 - 0x2e0)
  temp_value_32bit = *(undefined4 *)(source_object + 700);    // 保存临时值
  undefined4 temp_render_attr_1 = *(undefined4 *)(source_object + 0x2c0);  // 渲染属性
  undefined4 temp_render_attr_2 = *(undefined4 *)(source_object + 0x2c4);  // 渲染属性
  *(undefined4 *)(target_object + 0x2b8) = *(undefined4 *)(source_object + 0x2b8);  // 高级属性1
  *(undefined4 *)(target_object + 700) = temp_value_32bit;                  // 高级属性2
  *(undefined4 *)(target_object + 0x2c0) = temp_render_attr_1;              // 渲染属性
  *(undefined4 *)(target_object + 0x2c4) = temp_render_attr_2;              // 渲染属性
  *(undefined4 *)(target_object + 0x2c8) = *(undefined4 *)(source_object + 0x2c8);  // 高级属性3
  *(undefined4 *)(target_object + 0x2e0) = *(undefined4 *)(source_object + 0x2e0);  // 高级属性4
  
  // 第四阶段：复制字符串数据 (对象名称等)
  object_name_ptr = &DEFAULT_STRING_DATA;
  if (*(undefined **)(source_object + 0x2d8) != (undefined *)0x0) {
    object_name_ptr = *(undefined **)(source_object + 0x2d8);
  }
  stack_context_ptr_4 = (undefined1 *)0x18022c87f;  // 调试信息指针
  strcpy_s(*(undefined8 *)(target_object + 0x2d8), OBJECT_NAME_MAX_LENGTH, object_name_ptr);
  
  // 第五阶段：复制状态标志
  *(undefined1 *)(target_object + 0x13c) = *(undefined1 *)(source_object + 0x13c);  // 对象状态标志
  *(undefined4 *)(target_object + 600) = *(undefined4 *)(source_object + 600);      // 状态数据
  
  // 第六阶段：处理引用计数 (对象类型信息)
  reference_count_ptr = *(longlong **)(source_object + OFFSET_OBJECT_TYPE_INFO);
  if (reference_count_ptr != (longlong *)0x0) {
    stack_context_ptr_4 = (undefined1 *)0x18022c8b2;  // 调试信息指针
    // 增加源对象引用计数
    (**(code **)(*reference_count_ptr + 0x28))(reference_count_ptr);
  }
  
  // 释放目标对象的旧引用
  temp_component_ptr = *(longlong **)(target_object + OFFSET_OBJECT_TYPE_INFO);
  *(longlong **)(target_object + OFFSET_OBJECT_TYPE_INFO) = reference_count_ptr;
  if (temp_component_ptr != (longlong *)0x0) {
    stack_context_ptr_4 = (undefined1 *)0x18022c8d1;  // 调试信息指针
    // 减少旧引用的计数
    (**(code **)(*temp_component_ptr + 0x38))();
  }
  
  // 第七阶段：复制更多状态数据
  *(undefined4 *)(target_object + 0x388) = *(undefined4 *)(source_object + 0x388);  // 状态标志1
  *(undefined1 *)(target_object + 0x38c) = *(undefined1 *)(source_object + 0x38c);  // 状态标志2
  *(undefined4 *)(target_object + 0x26c) = *(undefined4 *)(source_object + 0x26c);  // 变换属性1
  *(undefined4 *)(target_object + 0x270) = *(undefined4 *)(source_object + 0x270);  // 变换属性2
  *(undefined4 *)(target_object + 0x274) = *(undefined4 *)(source_object + 0x274);  // 变换属性3
  
  // 第八阶段：处理主组件数组 (16个元素)
  reference_count_ptr = (longlong *)(target_object + OFFSET_OBJECT_COMPONENT_ARRAY);
  render_loop_counter = RENDER_COMPONENT_SIZE;
  component_loop_counter = COMPONENT_ARRAY_SIZE;
  
  do {
    // 获取源组件并增加引用计数
    source_component_ptr = *(longlong **)((source_object - target_object) + (longlong)reference_count_ptr);
    if (source_component_ptr != (longlong *)0x0) {
      stack_context_ptr_4 = (undefined1 *)0x18022c947;  // 调试信息指针
      (**(code **)(*source_component_ptr + 0x28))(source_component_ptr);
    }
    
    // 替换目标组件并释放旧组件
    target_component_ptr = (longlong *)*reference_count_ptr;
    *reference_count_ptr = (longlong)source_component_ptr;
    if (target_component_ptr != (longlong *)0x0) {
      stack_context_ptr_4 = (undefined1 *)0x18022c95e;  // 调试信息指针
      (**(code **)(*target_component_ptr + 0x38))();
    }
    
    reference_count_ptr = reference_count_ptr + 1;
    component_loop_counter = component_loop_counter - 1;
  } while (component_loop_counter != 0);
  
  // 第九阶段：复制事件掩码
  *(undefined8 *)(target_object + OFFSET_OBJECT_EVENT_MASK) = *(undefined8 *)(source_object + OFFSET_OBJECT_EVENT_MASK);
  stack_context_ptr_4 = (undefined1 *)0x18022c97e;  // 调试信息指针
  update_object_event_mask(target_object);
  
  // 第十阶段：设置组件掩码标志
  *(undefined2 *)(target_object + 0x3c0) = FULL_COMPONENT_MASK;
  
  // 第十一阶段：复制变换数据矩阵
  *(undefined8 *)(target_object + OFFSET_OBJECT_TRANSFORM_DATA) = *(undefined8 *)(source_object + OFFSET_OBJECT_TRANSFORM_DATA);      // 变换矩阵1
  *(undefined8 *)(target_object + 0x3a8) = *(undefined8 *)(source_object + 0x3a8);  // 变换矩阵2
  *(undefined8 *)(target_object + 0x3b0) = *(undefined8 *)(source_object + 0x3b0);  // 变换矩阵3
  *(undefined8 *)(target_object + 0x3b8) = *(undefined8 *)(source_object + 0x3b8);  // 变换矩阵4
  *(undefined8 *)(target_object + 0x398) = *(undefined8 *)(source_object + 0x398);  // 变换矩阵5
  *(undefined8 *)(target_object + 0x3a0) = *(undefined8 *)(source_object + 0x3a0);  // 变换矩阵6
  
  // 第十二阶段：复制纹理数据
  stack_context_ptr_4 = (undefined1 *)0x18022c9ee;  // 调试信息指针
  复制纹理数据(target_object + OFFSET_OBJECT_TEXTURE_DATA, source_object + OFFSET_OBJECT_TEXTURE_DATA);
  
  // 第十三阶段：复制渲染状态
  *(undefined1 *)(target_object + OFFSET_OBJECT_RENDER_STATE) = *(undefined1 *)(source_object + OFFSET_OBJECT_RENDER_STATE);
  reference_count_ptr = (longlong *)(target_object + OFFSET_OBJECT_RENDER_COMPONENT_ARRAY);
  
  do {
    // 处理渲染组件数组 (16个元素)
    source_component_ptr = *(longlong **)(((source_object + OFFSET_OBJECT_RENDER_STATE) - (target_object + OFFSET_OBJECT_RENDER_STATE)) + (longlong)reference_count_ptr);
    if (source_component_ptr != (longlong *)0x0) {
      stack_context_ptr_4 = (undefined1 *)0x18022ca27;  // 调试信息指针
      (**(code **)(*source_component_ptr + 0x28))(source_component_ptr);
    }
    
    target_component_ptr = (longlong *)*reference_count_ptr;
    *reference_count_ptr = (longlong)source_component_ptr;
    if (target_component_ptr != (longlong *)0x0) {
      stack_context_ptr_4 = (undefined1 *)0x18022ca3e;  // 调试信息指针
      (**(code **)(*target_component_ptr + 0x38))();
    }
    
    reference_count_ptr = reference_count_ptr + 1;
    render_loop_counter = render_loop_counter - 1;
  } while (render_loop_counter != 0);
  
  // 第十四阶段：复制碰撞数据
  *(undefined1 *)(target_object + OFFSET_OBJECT_COLLISION) = *(undefined1 *)(source_object + OFFSET_OBJECT_COLLISION);
  *(undefined8 *)(target_object + OFFSET_OBJECT_RENDERER) = *(undefined8 *)(source_object + OFFSET_OBJECT_RENDERER);
  *(undefined8 *)(target_object + OFFSET_OBJECT_PHYSICS) = *(undefined8 *)(source_object + OFFSET_OBJECT_PHYSICS);
  stack_context_ptr_4 = (undefined1 *)0x18022ca86;  // 调试信息指针
  复制纹理数据(target_object + OFFSET_OBJECT_TEXTURE_DATA, source_object + OFFSET_OBJECT_TEXTURE_DATA);
  
  // 第十五阶段：初始化生命周期事件处理
  stack_temp_value_4 = DEFAULT_STACK_PROTECTION;
  stack_protection_value = _DAT_180bf00a8 ^ (ulonglong)stack_protection_buffer_1;
  event_registration_success = false;
  stack_temp_value_3 = 0;
  *(undefined8 *)(target_object + OFFSET_OBJECT_LIFETIME_EVENT) = 0;
  
  // 检查是否需要处理生存期事件
  if (LIFETIME_EVENT_ENABLED == 0) goto 跳过生命周期事件处理;
  
  component_loop_counter = get_system_time();
  event_string_ptr = stack_context_ptr_2;
  
  // 检查时间和生命周期状态
  if ((component_loop_counter == 0) || 
      (lifecycle_check_result = 检查对象生命周期(target_object), 
       event_string_ptr = stack_context_ptr_2, 
       lifecycle_check_result == '\0')) {
    
    事件处理器标签:
    lifecycle_event_active = false;
  }
  else {
    // 注册生存期事件监听器
    temp_value_64bit = *(undefined8 *)(target_object + OFFSET_OBJECT_TYPE_INFO);
    stack_context_ptr_1 = &EVENT_LOG_BUFFER;
    stack_temp_value_2 = 0;
    stack_context_ptr_2 = (undefined4 *)0x0;
    stack_temp_value_1 = 0;
    
    event_string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x16, 0x13);
    *(undefined1 *)event_string_ptr = 0;
    stack_context_ptr_2 = event_string_ptr;
    
    temp_value_32bit = initialize_event_string(event_string_ptr);
    stack_temp_value_2 = CONCAT44(stack_temp_value_2._4_4_, temp_value_32bit);
    
    // 设置事件字符串: "_use_lifetime_texturing"
    *event_string_ptr = 0x5f657375;  // "_esu"
    event_string_ptr[1] = 0x74726976;  // "triv"
    event_string_ptr[2] = 0x5f6c6175;  // "_lau"
    event_string_ptr[3] = 0x74786574;  // "txet"
    event_string_ptr[4] = 0x6e697275;  // "niru"
    *(undefined2 *)(event_string_ptr + 5) = 0x67;  // "g"
    
    stack_temp_value_1 = 0x15;
    event_registration_success = true;
    stack_temp_value_3 = 1;
    
    component_loop_counter = register_event_listener(temp_value_64bit, &stack_context_ptr_1, 0);
    if (component_loop_counter == 0) goto 事件处理器标签;
    lifecycle_event_active = true;
  }
  
  // 清理事件资源
  if (event_registration_success) {
    stack_temp_value_3 = 0;
    stack_context_ptr_1 = &EVENT_LOG_BUFFER;
    if (event_string_ptr != (undefined4 *)0x0) {
      // WARNING: Subroutine does not return
      free_event_string(event_string_ptr);
    }
    stack_context_ptr_2 = (undefined4 *)0x0;
    stack_temp_value_2 = stack_temp_value_2 & 0xffffffff00000000;
    stack_context_ptr_1 = &MEMORY_CLEANUP_FLAG;
  }
  
  // 处理生存期事件
  if (lifecycle_event_active) {
    // 检查场景数据有效性
    if (*(longlong *)(target_object + OFFSET_OBJECT_SCENE_DATA) != 0) {
      *(undefined1 *)(target_object + OFFSET_OBJECT_LIFETIME_FLAG) = 1;
      initialize_object_lifecycle(&stack_context_ptr_1, target_object);
      if (*(undefined **)(target_object + OFFSET_OBJECT_TEXTURE_DATA) != stack_context_ptr_1) {
        *(undefined2 *)(target_object + OFFSET_OBJECT_LIFETIME_FLAG) = 0;
      }
    }
    
    // 如果生命周期标志有效，处理组件生存期引用
    if (*(char *)(target_object + OFFSET_OBJECT_LIFETIME_FLAG) != '\0') {
      // 更新主组件数组的生存期引用
      if (*(longlong *)(target_object + OFFSET_OBJECT_COMPONENT_ARRAY) != 0) {
        *(undefined8 *)(*(longlong *)(target_object + OFFSET_OBJECT_COMPONENT_ARRAY) + 0x348) = 
          *(undefined8 *)(target_object + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(target_object + OFFSET_OBJECT_COMPONENT_ARRAY) + 0x350) = 0;
      }
      
      // 更新渲染组件数组的生存期引用
      if (*(longlong *)(target_object + 200) != 0) {
        *(undefined8 *)(*(longlong *)(target_object + 200) + 0x348) = 
          *(undefined8 *)(target_object + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(target_object + 200) + 0x350) = 1;
      }
      
      // 更新其他组件的生存期引用
      if (*(longlong *)(target_object + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(target_object + 0xd8) + 0x348) = 
          *(undefined8 *)(target_object + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(target_object + 0xd8) + 0x350) = 2;
      }
      
      // 注册组件事件
      stack_context_ptr_3 = &COMPONENT_EVENT_FLAG;
      stack_context_ptr_4 = lifecycle_event_buffer;
      lifecycle_event_buffer[0] = 0;
      stack_temp_value_5 = 0x15;
      strcpy_s(lifecycle_event_buffer, EVENT_STRING_MAX_LENGTH, &COMPONENT_EVENT_DATA);
      
      event_bitmask = register_event_listener(*(undefined8 *)(target_object + OFFSET_OBJECT_TYPE_INFO), 
                                            &stack_context_ptr_3, 1);
      *(ulonglong *)(target_object + OFFSET_OBJECT_EVENT_MASK) = 
        *(ulonglong *)(target_object + OFFSET_OBJECT_EVENT_MASK) | event_bitmask;
      
      update_object_event_mask(target_object);
      *(undefined2 *)(target_object + 0x3c0) = FULL_COMPONENT_MASK;
      stack_context_ptr_3 = &MEMORY_CLEANUP_FLAG;
      *(undefined4 *)(target_object + OFFSET_OBJECT_LIFETIME_EVENT) = 1;
      
      // 记录调试事件: "_use_build_color_control_with_sample_texture"
      temp_value_64bit = *(undefined8 *)(target_object + OFFSET_OBJECT_TYPE_INFO);
      stack_context_ptr_1 = &EVENT_LOG_BUFFER;
      stack_temp_value_2 = 0;
      stack_context_ptr_2 = (undefined4 *)0x0;
      stack_temp_value_1 = 0;
      
      event_string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x26, 0x13);
      *(undefined1 *)event_string_ptr = 0;
      stack_context_ptr_2 = event_string_ptr;
      
      temp_value_32bit = initialize_event_string(event_string_ptr);
      stack_temp_value_2 = CONCAT44(stack_temp_value_2._4_4_, temp_value_32bit);
      
      *event_string_ptr = 0x5f657375;  // "_esu"
      event_string_ptr[1] = 0x62756f64;  // "buod"
      event_string_ptr[2] = 0x635f656c;  // "c_el"
      event_string_ptr[3] = 0x726f6c6f;  // "rolo"
      event_string_ptr[4] = 0x5f70616d;  // "_pam"
      event_string_ptr[5] = 0x68746977;  // "htiw"
      event_string_ptr[6] = 0x73616d5f;  // "sam_"
      event_string_ptr[7] = 0x65745f6b;  // "et_k"
      event_string_ptr[8] = 0x72757478;  // "rutx"
      *(undefined2 *)(event_string_ptr + 9) = 0x65;  // "e"
      
      stack_temp_value_1 = 0x25;
      register_event_listener(temp_value_64bit, &stack_context_ptr_1, 0);
      stack_context_ptr_1 = &EVENT_LOG_BUFFER;
      // WARNING: Subroutine does not return
      free_event_string(event_string_ptr);
    }
    
    // 注销组件事件
    stack_context_ptr_3 = &COMPONENT_EVENT_FLAG;
    stack_context_ptr_4 = lifecycle_event_buffer;
    lifecycle_event_buffer[0] = 0;
    stack_temp_value_5 = 0x15;
    strcpy_s(lifecycle_event_buffer, EVENT_STRING_MAX_LENGTH, &COMPONENT_EVENT_DATA);
    
    event_bitmask = register_event_listener(*(undefined8 *)(target_object + OFFSET_OBJECT_TYPE_INFO), 
                                          &stack_context_ptr_3, 1);
    *(ulonglong *)(target_object + OFFSET_OBJECT_EVENT_MASK) = 
      *(ulonglong *)(target_object + OFFSET_OBJECT_EVENT_MASK) & ~event_bitmask;
    
    update_object_event_mask(target_object);
    stack_context_ptr_3 = &MEMORY_CLEANUP_FLAG;
  }
  
跳过生命周期事件处理:
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_protection_value ^ (ulonglong)stack_protection_buffer_1);
}

/**
 * 复制纹理数据块
 * 将源纹理数据复制到目标位置，包括纹理属性和相关信息
 * 
 * @param dest 目标数据指针，接收复制的数据
 * @param source 源数据指针，提供要复制的纹理数据
 * @return 目标数据指针
 * 
 * 功能说明：
 * 1. 复制纹理的基本属性（前5个元素）
 * 2. 复制纹理数据块（7个元素）
 * 3. 复制纹理名称字符串
 * 4. 处理每个纹理块的引用计数
 * 
 * 数据结构：
 * - 前5个元素：纹理基本属性（宽度、高度、格式等）
 * - 第6个元素开始：纹理数据块数组
 * - 每个数据块包含：数据指针和名称字符串
 */
undefined8 *复制纹理数据(undefined8 *dest, undefined8 *source) {
  undefined *source_name_ptr;        // 源纹理名称指针
  undefined8 *texture_data_ptr;     // 纹理数据指针
  longlong texture_block_counter;    // 纹理块计数器
  undefined *default_name_ptr;       // 默认名称指针
  
  // 初始化纹理数据指针和计数器
  texture_data_ptr = dest + 5;  // 跳过前5个基本属性
  *dest = *source;              // 复制第1个属性
  dest[1] = source[1];          // 复制第2个属性
  texture_block_counter = 2;    // 从第3个属性开始
  
  // 复制纹理基本属性
  *(undefined1 *)(dest + 2) = *(undefined1 *)(source + 2);  // 第3个属性（字节）
  *(undefined1 *)((longlong)dest + 0x11) = *(undefined1 *)((longlong)source + 0x11);  // 第17个属性（字节）
  
  // 复制纹理数据块（7个块）
  do {
    // 复制纹理数据块的32位数据
    *(undefined4 *)texture_data_ptr = *(undefined4 *)(((longlong)source - (longlong)dest) + (longlong)texture_data_ptr);
    
    // 获取纹理名称并复制
    source_name_ptr = *(undefined **)(((longlong)source - (longlong)dest) + -8 + (longlong)texture_data_ptr);
    default_name_ptr = &DEFAULT_STRING_DATA;
    
    if (source_name_ptr != (undefined *)0x0) {
      default_name_ptr = source_name_ptr;
    }
    
    // 复制纹理名称字符串（最大32字节）
    strcpy_s(texture_data_ptr[-1], EVENT_STRING_MAX_LENGTH, default_name_ptr);
    
    texture_data_ptr = texture_data_ptr + 7;  // 移动到下一个纹理块
    texture_block_counter = texture_block_counter - 1;
  } while (texture_block_counter != 0);
  
  return dest;
}

/**
 * 创建场景对象实例
 * 根据场景数据创建一个新的场景对象实例
 * 
 * @param scene_data 场景数据指针，包含对象创建所需的信息
 * @param object_ptr 对象指针输出参数，返回创建的对象实例
 * 
 * 功能说明：
 * 1. 分配对象内存（0x470字节）
 * 2. 初始化对象实例
 * 3. 设置引用计数
 * 4. 构建对象配置字符串
 * 5. 调用对象初始化方法
 * 6. 复制场景组件数据
 * 
 * 内存布局：
 * - 对象总大小：0x470字节
 * - 包含：基本信息、组件数组、纹理数据、变换矩阵等
 * 
 * 注意事项：
 * - 函数不会返回，内部调用堆栈保护清理函数
 * - 需要正确处理内存分配失败的情况
 * - 配置字符串格式："poc(y)" + 对象名称
 */
void 创建场景对象实例(longlong scene_data, longlong *object_ptr) {
  undefined8 allocated_memory;      // 分配的内存块
  longlong *object_instance_ptr;   // 对象实例指针
  undefined4 *config_string_ptr;   // 配置字符串指针
  undefined *object_name_ptr;      // 对象名称指针
  undefined1 name_buffer[32];      // 名称缓冲区（用于堆栈保护）
  undefined4 stack_temp_value_1;   // 堆栈临时值1
  undefined8 stack_temp_value_2;   // 堆栈临时值2
  longlong *output_ptr;            // 输出指针
  undefined *stack_context_ptr_1;  // 堆栈上下文指针1
  undefined *stack_context_ptr_2;  // 堆栈上下文指针2
  uint object_name_length;         // 对象名称长度
  
  // 配置缓冲区 - 用于构建对象配置字符串
  undefined config_buffer[136];
  ulonglong stack_protection_value;
  
  // 初始化堆栈保护
  stack_temp_value_2 = DEFAULT_STACK_PROTECTION;
  stack_protection_value = _DAT_180bf00a8 ^ (ulonglong)name_buffer;
  stack_temp_value_1 = 0;
  output_ptr = object_ptr;
  
  // 第一阶段：分配对象内存并初始化
  // 分配0x470字节的内存，对齐到0x10字节
  allocated_memory = allocate_object_memory(_DAT_180c8ed18, 0x470, 0x10, 0x15);
  object_instance_ptr = (longlong *)initialize_object_instance(allocated_memory);
  *object_ptr = (longlong)object_instance_ptr;
  
  // 第二阶段：设置对象引用计数
  if (object_instance_ptr != (longlong *)0x0) {
    // 增加对象引用计数
    (**(code **)(*object_instance_ptr + 0x28))(object_instance_ptr);
  }
  
  stack_temp_value_1 = 1;
  stack_context_ptr_1 = &OBJECT_FACTORY_FLAG;
  stack_context_ptr_2 = config_buffer;
  config_buffer[0] = 0;
  
  // 第三阶段：获取对象名称信息
  object_name_length = *(uint *)(scene_data + 0x20);  // 名称长度
  object_name_ptr = &DEFAULT_STRING_DATA;
  
  if (*(undefined **)(scene_data + 0x18) != (undefined *)0x0) {
    object_name_ptr = *(undefined **)(scene_data + 0x18);  // 获取实际名称
  }
  
  // 复制对象名称到配置缓冲区
  strcpy_s(config_buffer, OBJECT_NAME_MAX_LENGTH, object_name_ptr);
  
  // 第四阶段：构建配置字符串
  // 格式：对象名称 + "poc(y)" 后缀
  if (object_name_length + 6 < 0x7f) {  // 检查缓冲区大小
    config_string_ptr = (undefined4 *)(stack_context_ptr_2 + object_name_length);
    *config_string_ptr = 0x706f6328;  // "poc("
    *(undefined2 *)(config_string_ptr + 1) = 0x2979;  // ")y"
    *(undefined1 *)((longlong)config_string_ptr + 6) = 0;  // 字符串结束符
    object_name_length = object_name_length + 6;
  }
  
  // 第五阶段：复制场景数据到对象
  *(undefined8 *)(*object_ptr + OFFSET_OBJECT_SCENE_DATA) = *(undefined8 *)(scene_data + OFFSET_OBJECT_SCENE_DATA);
  object_name_ptr = &DEFAULT_STRING_DATA;
  
  if (stack_context_ptr_2 != (undefined *)0x0) {
    object_name_ptr = stack_context_ptr_2;
  }
  
  // 第六阶段：调用对象初始化方法
  // 调用对象的初始化函数（虚函数表偏移0x10）
  (**(code **)(*(longlong *)(*object_ptr + 0x10) + 0x10))((longlong *)(*object_ptr + 0x10), object_name_ptr);
  
  // 复制场景对象组件数据
  复制场景对象组件数据(*object_ptr, scene_data);
  stack_context_ptr_1 = &MEMORY_CLEANUP_FLAG;
  
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_protection_value ^ (ulonglong)name_buffer);
}

/**
 * 处理场景对象销毁事件
 * 当对象需要销毁时，调用相应的事件处理器并清理资源
 * 
 * @param object_ptr 对象指针，要销毁的对象
 * @param event_data 事件数据指针，包含事件相关信息
 * @param param3 参数3（未使用）
 * @param param4 参数4，传递给事件处理器的参数
 * 
 * 功能说明：
 * 1. 获取对象的事件处理器函数
 * 2. 获取事件名称
 * 3. 调用事件处理器处理销毁事件
 * 4. 清理对象资源
 * 5. 设置事件数据清理标志
 * 
 * 事件处理流程：
 * 1. 从对象的虚函数表中获取事件处理器
 * 2. 传递对象引用、事件名称和其他参数
 * 3. 事件处理器负责具体的销毁逻辑
 * 4. 最后调用资源清理函数释放内存
 * 
 * 注意事项：
 * - 函数会正常返回（与其他函数不同）
 * - 需要确保事件处理器正确处理销毁逻辑
 * - 资源清理会释放所有相关内存
 */
void 处理场景对象销毁事件(longlong object_ptr, undefined8 *event_data, undefined8 param3, undefined8 param4) {
  code *destruction_event_handler;  // 销毁事件处理器函数指针
  undefined *event_name_ptr;        // 事件名称指针
  
  // 获取对象的销毁事件处理器
  // 从对象偏移0x2d0处获取虚函数表，然后获取偏移0x10处的事件处理器
  destruction_event_handler = *(code **)(*(longlong *)(object_ptr + 0x2d0) + 0x10);
  
  // 获取事件名称
  event_name_ptr = &DEFAULT_STRING_DATA;
  if ((undefined *)event_data[1] != (undefined *)0x0) {
    event_name_ptr = (undefined *)event_data[1];  // 使用事件数据中的名称
  }
  
  // 调用销毁事件处理器
  // 参数：对象引用、事件名称、处理器函数、参数4、堆栈保护值
  (*destruction_event_handler)((longlong *)(object_ptr + 0x2d0), event_name_ptr, destruction_event_handler, param4, DEFAULT_STACK_PROTECTION);
  
  // 清理对象资源
  // 参数：对象指针，清理标志（1表示完全清理）
  cleanup_object_resources(object_ptr, 1);
  
  // 设置事件数据清理标志
  *event_data = &MEMORY_CLEANUP_FLAG;
  
  return;
}

/**
 * 设置对象组件
 * 为指定对象设置或替换特定索引位置的组件
 * 
 * @param object_ptr 对象指针，要设置组件的对象
 * @param component_index 组件索引，指定要设置的组件位置
 * @param component_ptr 组件指针，要设置的组件实例
 * 
 * 功能说明：
 * 1. 释放旧组件的引用计数
 * 2. 增加新组件的引用计数
 * 3. 替换组件指针
 * 4. 处理生命周期事件
 * 5. 更新事件掩码和组件状态
 * 
 * 组件管理：
 * - 每个对象包含多个组件数组
 * - 组件索引对应不同的功能组件
 * - 需要正确处理引用计数以避免内存泄漏
 * - 生命周期事件用于组件状态同步
 * 
 * 事件处理：
 * - 注册组件相关的事件监听器
 * - 更新对象的组件掩码
 * - 处理组件的生存期引用
 * 
 * 注意事项：
 * - 函数不会返回，内部调用堆栈保护清理函数
 * - 需要确保组件索引在有效范围内
 * - 引用计数管理对内存安全至关重要
 */
void 设置对象组件(longlong object_ptr, int component_index, longlong *component_ptr) {
  longlong *old_component_ptr;     // 旧组件指针
  undefined8 object_type_data;     // 对象类型数据
  bool event_registration_success; // 事件注册成功标志
  bool lifecycle_event_active;     // 生命周期事件活动标志
  char lifecycle_check_result;     // 生命周期检查结果
  undefined4 event_string_value;   // 事件字符串值
  longlong component_offset;       // 组件偏移量
  undefined4 *event_string_ptr;    // 事件字符串指针
  ulonglong component_event_mask;  // 组件事件掩码
  
  // 堆栈缓冲区 - 用于堆栈保护检查
  undefined1 stack_protection_buffer_1[32];
  undefined *stack_context_ptr_1;
  undefined4 *stack_context_ptr_2;
  undefined4 stack_temp_value_1;
  ulonglong stack_temp_value_2;
  undefined4 stack_temp_value_3;
  undefined8 stack_temp_value_4;
  undefined *stack_context_ptr_3;
  undefined1 *stack_context_ptr_4;
  undefined4 stack_temp_value_5;
  
  // 生命周期事件处理缓冲区
  undefined1 lifecycle_event_buffer[16];
  undefined8 stack_temp_value_6;
  ulonglong stack_protection_value;
  
  // 计算组件在对象中的偏移量
  component_offset = object_ptr + (longlong)component_index * 8;
  
  // 第一阶段：释放旧组件并增加新组件引用计数
  if (component_ptr != (longlong *)0x0) {
    stack_temp_value_6 = 0x18022cd69;  // 调试信息指针
    // 增加新组件的引用计数
    (**(code **)(*component_ptr + 0x28))(component_ptr);
  }
  
  // 获取旧组件并替换
  old_component_ptr = *(longlong **)(component_offset + OFFSET_OBJECT_COMPONENT_ARRAY);
  *(longlong **)(component_offset + OFFSET_OBJECT_COMPONENT_ARRAY) = component_ptr;
  
  if (old_component_ptr != (longlong *)0x0) {
    stack_temp_value_6 = 0x18022cd88;  // 调试信息指针
    // 释放旧组件的引用计数
    (**(code **)(*old_component_ptr + 0x38))();
  }
  
  // 第二阶段：初始化生命周期事件处理
  stack_temp_value_4 = DEFAULT_STACK_PROTECTION;
  stack_protection_value = _DAT_180bf00a8 ^ (ulonglong)stack_protection_buffer_1;
  event_registration_success = false;
  stack_temp_value_3 = 0;
  *(undefined8 *)(object_ptr + OFFSET_OBJECT_LIFETIME_EVENT) = 0;
  
  // 检查是否需要处理生存期事件
  if (LIFETIME_EVENT_ENABLED == 0) goto 跳过生命周期事件处理;
  
  component_offset = get_system_time();
  event_string_ptr = stack_context_ptr_2;
  
  // 检查时间和生命周期状态
  if ((component_offset == 0) || 
      (lifecycle_check_result = 检查对象生命周期(object_ptr), 
       event_string_ptr = stack_context_ptr_2, 
       lifecycle_check_result == '\0')) {
    
    事件处理器标签:
    lifecycle_event_active = false;
  }
  else {
    // 注册生存期事件监听器
    object_type_data = *(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO);
    stack_context_ptr_1 = &EVENT_LOG_BUFFER;
    stack_temp_value_2 = 0;
    stack_context_ptr_2 = (undefined4 *)0x0;
    stack_temp_value_1 = 0;
    
    event_string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x16, 0x13);
    *(undefined1 *)event_string_ptr = 0;
    stack_context_ptr_2 = event_string_ptr;
    
    event_string_value = initialize_event_string(event_string_ptr);
    stack_temp_value_2 = CONCAT44(stack_temp_value_2._4_4_, event_string_value);
    
    // 设置事件字符串: "_use_lifetime_texturing"
    *event_string_ptr = 0x5f657375;  // "_esu"
    event_string_ptr[1] = 0x74726976;  // "triv"
    event_string_ptr[2] = 0x5f6c6175;  // "_lau"
    event_string_ptr[3] = 0x74786574;  // "txet"
    event_string_ptr[4] = 0x6e697275;  // "niru"
    *(undefined2 *)(event_string_ptr + 5) = 0x67;  // "g"
    
    stack_temp_value_1 = 0x15;
    event_registration_success = true;
    stack_temp_value_3 = 1;
    
    component_offset = register_event_listener(object_type_data, &stack_context_ptr_1, 0);
    if (component_offset == 0) goto 事件处理器标签;
    lifecycle_event_active = true;
  }
  
  // 清理事件资源
  if (event_registration_success) {
    stack_temp_value_3 = 0;
    stack_context_ptr_1 = &EVENT_LOG_BUFFER;
    if (event_string_ptr != (undefined4 *)0x0) {
      // WARNING: Subroutine does not return
      free_event_string(event_string_ptr);
    }
    stack_context_ptr_2 = (undefined4 *)0x0;
    stack_temp_value_2 = stack_temp_value_2 & 0xffffffff00000000;
    stack_context_ptr_1 = &MEMORY_CLEANUP_FLAG;
  }
  
  // 处理生存期事件
  if (lifecycle_event_active) {
    // 检查场景数据有效性
    if (*(longlong *)(object_ptr + OFFSET_OBJECT_SCENE_DATA) != 0) {
      *(undefined1 *)(object_ptr + OFFSET_OBJECT_LIFETIME_FLAG) = 1;
      initialize_object_lifecycle(&stack_context_ptr_1, object_ptr);
      if (*(undefined **)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA) != stack_context_ptr_1) {
        *(undefined2 *)(object_ptr + OFFSET_OBJECT_LIFETIME_FLAG) = 0;
      }
    }
    
    // 如果生命周期标志有效，处理组件生存期引用
    if (*(char *)(object_ptr + OFFSET_OBJECT_LIFETIME_FLAG) != '\0') {
      // 更新主组件数组的生存期引用
      if (*(longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY) + 0x348) = 
          *(undefined8 *)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY) + 0x350) = 0;
      }
      
      // 更新渲染组件数组的生存期引用
      if (*(longlong *)(object_ptr + 200) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 200) + 0x348) = 
          *(undefined8 *)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(object_ptr + 200) + 0x350) = 1;
      }
      
      // 更新其他组件的生存期引用
      if (*(longlong *)(object_ptr + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 0xd8) + 0x348) = 
          *(undefined8 *)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(object_ptr + 0xd8) + 0x350) = 2;
      }
      
      // 注册组件事件
      stack_context_ptr_3 = &COMPONENT_EVENT_FLAG;
      stack_context_ptr_4 = lifecycle_event_buffer;
      lifecycle_event_buffer[0] = 0;
      stack_temp_value_5 = 0x15;
      strcpy_s(lifecycle_event_buffer, EVENT_STRING_MAX_LENGTH, &COMPONENT_EVENT_DATA);
      
      component_event_mask = register_event_listener(*(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO), 
                                                    &stack_context_ptr_3, 1);
      *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) = 
        *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) | component_event_mask;
      
      update_object_event_mask(object_ptr);
      *(undefined2 *)(object_ptr + 0x3c0) = FULL_COMPONENT_MASK;
      stack_context_ptr_3 = &MEMORY_CLEANUP_FLAG;
      *(undefined4 *)(object_ptr + OFFSET_OBJECT_LIFETIME_EVENT) = 1;
      
      // 记录调试事件: "_use_build_color_control_with_sample_texture"
      object_type_data = *(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO);
      stack_context_ptr_1 = &EVENT_LOG_BUFFER;
      stack_temp_value_2 = 0;
      stack_context_ptr_2 = (undefined4 *)0x0;
      stack_temp_value_1 = 0;
      
      event_string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x26, 0x13);
      *(undefined1 *)event_string_ptr = 0;
      stack_context_ptr_2 = event_string_ptr;
      
      event_string_value = initialize_event_string(event_string_ptr);
      stack_temp_value_2 = CONCAT44(stack_temp_value_2._4_4_, event_string_value);
      
      *event_string_ptr = 0x5f657375;  // "_esu"
      event_string_ptr[1] = 0x62756f64;  // "buod"
      event_string_ptr[2] = 0x635f656c;  // "c_el"
      event_string_ptr[3] = 0x726f6c6f;  // "rolo"
      event_string_ptr[4] = 0x5f70616d;  // "_pam"
      event_string_ptr[5] = 0x68746977;  // "htiw"
      event_string_ptr[6] = 0x73616d5f;  // "sam_"
      event_string_ptr[7] = 0x65745f6b;  // "et_k"
      event_string_ptr[8] = 0x72757478;  // "rutx"
      *(undefined2 *)(event_string_ptr + 9) = 0x65;  // "e"
      
      stack_temp_value_1 = 0x25;
      register_event_listener(object_type_data, &stack_context_ptr_1, 0);
      stack_context_ptr_1 = &EVENT_LOG_BUFFER;
      // WARNING: Subroutine does not return
      free_event_string(event_string_ptr);
    }
    
    // 注销组件事件
    stack_context_ptr_3 = &COMPONENT_EVENT_FLAG;
    stack_context_ptr_4 = lifecycle_event_buffer;
    lifecycle_event_buffer[0] = 0;
    stack_temp_value_5 = 0x15;
    strcpy_s(lifecycle_event_buffer, EVENT_STRING_MAX_LENGTH, &COMPONENT_EVENT_DATA);
    
    component_event_mask = register_event_listener(*(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO), 
                                                  &stack_context_ptr_3, 1);
    *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) = 
      *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) & ~component_event_mask;
    
    update_object_event_mask(object_ptr);
    stack_context_ptr_3 = &MEMORY_CLEANUP_FLAG;
  }
  
跳过生命周期事件处理:
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_protection_value ^ (ulonglong)stack_protection_buffer_1);
}

/**
 * 销毁场景对象
 * 完全销毁一个场景对象，释放所有相关资源
 * 
 * @param object_ptr 对象指针，要销毁的对象
 * 
 * 功能说明：
 * 1. 处理生命周期事件的清理
 * 2. 释放所有组件的引用计数
 * 3. 注销事件监听器
 * 4. 清理对象资源
 * 5. 释放对象内存
 * 
 * 销毁流程：
 * 1. 检查并处理生命周期事件
 * 2. 更新组件的生存期引用
 * 3. 注册和注销组件事件
 * 4. 记录调试事件日志
 * 5. 最终清理所有资源
 * 
 * 内存管理：
 * - 正确处理所有引用计数
 * - 避免内存泄漏
 * - 确保事件系统状态一致
 * 
 * 注意事项：
 * - 函数不会返回，内部调用堆栈保护清理函数
 * - 销毁过程需要处理复杂的依赖关系
 * - 需要确保所有相关资源都被正确释放
 */
void 销毁场景对象(longlong object_ptr) {
  undefined8 object_type_data;     // 对象类型数据
  bool event_registration_success; // 事件注册成功标志
  bool lifecycle_event_active;     // 生命周期事件活动标志
  char lifecycle_check_result;     // 生命周期检查结果
  undefined4 event_string_value;   // 事件字符串值
  longlong temp_value;             // 临时值
  undefined4 *event_string_ptr;    // 事件字符串指针
  ulonglong destruction_event_mask; // 销毁事件掩码
  
  // 堆栈缓冲区 - 用于堆栈保护检查
  undefined1 stack_protection_buffer_1[32];
  undefined *stack_context_ptr_1;
  undefined4 *stack_context_ptr_2;
  undefined4 stack_temp_value_1;
  ulonglong stack_temp_value_2;
  undefined4 stack_temp_value_3;
  undefined8 stack_temp_value_4;
  undefined *stack_context_ptr_3;
  undefined1 *stack_context_ptr_4;
  undefined4 stack_temp_value_5;
  
  // 生命周期事件处理缓冲区
  undefined1 destruction_event_buffer[32];
  ulonglong stack_protection_value;
  
  // 初始化堆栈保护
  stack_temp_value_4 = DEFAULT_STACK_PROTECTION;
  stack_protection_value = _DAT_180bf00a8 ^ (ulonglong)stack_protection_buffer_1;
  event_registration_success = false;
  stack_temp_value_3 = 0;
  *(undefined8 *)(object_ptr + OFFSET_OBJECT_LIFETIME_EVENT) = 0;
  
  // 检查是否需要处理生存期事件
  if (LIFETIME_EVENT_ENABLED == 0) goto 跳过生命周期事件处理;
  
  temp_value = get_system_time();
  event_string_ptr = stack_context_ptr_2;
  
  // 检查时间和生命周期状态
  if ((temp_value == 0) || 
      (lifecycle_check_result = 检查对象生命周期(object_ptr), 
       event_string_ptr = stack_context_ptr_2, 
       lifecycle_check_result == '\0')) {
    
    销毁事件处理器标签:
    lifecycle_event_active = false;
  }
  else {
    // 注册销毁事件监听器
    object_type_data = *(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO);
    stack_context_ptr_1 = &EVENT_LOG_BUFFER;
    stack_temp_value_2 = 0;
    stack_context_ptr_2 = (undefined4 *)0x0;
    stack_temp_value_1 = 0;
    
    event_string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x16, 0x13);
    *(undefined1 *)event_string_ptr = 0;
    stack_context_ptr_2 = event_string_ptr;
    
    event_string_value = initialize_event_string(event_string_ptr);
    stack_temp_value_2 = CONCAT44(stack_temp_value_2._4_4_, event_string_value);
    
    // 设置事件字符串: "_use_lifetime_texturing"
    *event_string_ptr = 0x5f657375;  // "_esu"
    event_string_ptr[1] = 0x74726976;  // "triv"
    event_string_ptr[2] = 0x5f6c6175;  // "_lau"
    event_string_ptr[3] = 0x74786574;  // "txet"
    event_string_ptr[4] = 0x6e697275;  // "niru"
    *(undefined2 *)(event_string_ptr + 5) = 0x67;  // "g"
    
    stack_temp_value_1 = 0x15;
    event_registration_success = true;
    stack_temp_value_3 = 1;
    
    temp_value = register_event_listener(object_type_data, &stack_context_ptr_1, 0);
    if (temp_value == 0) goto 销毁事件处理器标签;
    lifecycle_event_active = true;
  }
  
  // 清理事件资源
  if (event_registration_success) {
    stack_temp_value_3 = 0;
    stack_context_ptr_1 = &EVENT_LOG_BUFFER;
    if (event_string_ptr != (undefined4 *)0x0) {
      // WARNING: Subroutine does not return
      free_event_string(event_string_ptr);
    }
    stack_context_ptr_2 = (undefined4 *)0x0;
    stack_temp_value_2 = stack_temp_value_2 & 0xffffffff00000000;
    stack_context_ptr_1 = &MEMORY_CLEANUP_FLAG;
  }
  
  // 处理生存期事件
  if (lifecycle_event_active) {
    // 检查场景数据有效性
    if (*(longlong *)(object_ptr + OFFSET_OBJECT_SCENE_DATA) != 0) {
      *(undefined1 *)(object_ptr + OFFSET_OBJECT_LIFETIME_FLAG) = 1;
      initialize_object_lifecycle(&stack_context_ptr_1, object_ptr);
      if (*(undefined **)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA) != stack_context_ptr_1) {
        *(undefined2 *)(object_ptr + OFFSET_OBJECT_LIFETIME_FLAG) = 0;
      }
    }
    
    // 如果生命周期标志有效，处理组件生存期引用清理
    if (*(char *)(object_ptr + OFFSET_OBJECT_LIFETIME_FLAG) != '\0') {
      // 清理主组件数组的生存期引用
      if (*(longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY) + 0x348) = 
          *(undefined8 *)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY) + 0x350) = 0;
      }
      
      // 清理渲染组件数组的生存期引用
      if (*(longlong *)(object_ptr + 200) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 200) + 0x348) = 
          *(undefined8 *)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(object_ptr + 200) + 0x350) = 1;
      }
      
      // 清理其他组件的生存期引用
      if (*(longlong *)(object_ptr + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(object_ptr + 0xd8) + 0x348) = 
          *(undefined8 *)(object_ptr + OFFSET_OBJECT_TEXTURE_DATA);
        *(undefined4 *)(*(longlong *)(object_ptr + 0xd8) + 0x350) = 2;
      }
      
      // 注册销毁组件事件
      stack_context_ptr_3 = &COMPONENT_EVENT_FLAG;
      stack_context_ptr_4 = destruction_event_buffer;
      destruction_event_buffer[0] = 0;
      stack_temp_value_5 = 0x15;
      strcpy_s(destruction_event_buffer, EVENT_STRING_MAX_LENGTH, &COMPONENT_EVENT_DATA);
      
      destruction_event_mask = register_event_listener(*(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO), 
                                                    &stack_context_ptr_3, 1);
      *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) = 
        *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) | destruction_event_mask;
      
      update_object_event_mask(object_ptr);
      *(undefined2 *)(object_ptr + 0x3c0) = FULL_COMPONENT_MASK;
      stack_context_ptr_3 = &MEMORY_CLEANUP_FLAG;
      *(undefined4 *)(object_ptr + OFFSET_OBJECT_LIFETIME_EVENT) = 1;
      
      // 记录销毁调试事件: "_use_build_color_control_with_sample_texture"
      object_type_data = *(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO);
      stack_context_ptr_1 = &EVENT_LOG_BUFFER;
      stack_temp_value_2 = 0;
      stack_context_ptr_2 = (undefined4 *)0x0;
      stack_temp_value_1 = 0;
      
      event_string_ptr = (undefined4 *)allocate_event_string(_DAT_180c8ed18, 0x26, 0x13);
      *(undefined1 *)event_string_ptr = 0;
      stack_context_ptr_2 = event_string_ptr;
      
      event_string_value = initialize_event_string(event_string_ptr);
      stack_temp_value_2 = CONCAT44(stack_temp_value_2._4_4_, event_string_value);
      
      *event_string_ptr = 0x5f657375;  // "_esu"
      event_string_ptr[1] = 0x62756f64;  // "buod"
      event_string_ptr[2] = 0x635f656c;  // "c_el"
      event_string_ptr[3] = 0x726f6c6f;  // "rolo"
      event_string_ptr[4] = 0x5f70616d;  // "_pam"
      event_string_ptr[5] = 0x68746977;  // "htiw"
      event_string_ptr[6] = 0x73616d5f;  // "sam_"
      event_string_ptr[7] = 0x65745f6b;  // "et_k"
      event_string_ptr[8] = 0x72757478;  // "rutx"
      *(undefined2 *)(event_string_ptr + 9) = 0x65;  // "e"
      
      stack_temp_value_1 = 0x25;
      register_event_listener(object_type_data, &stack_context_ptr_1, 0);
      stack_context_ptr_1 = &EVENT_LOG_BUFFER;
      // WARNING: Subroutine does not return
      free_event_string(event_string_ptr);
    }
    
    // 注销销毁组件事件
    stack_context_ptr_3 = &COMPONENT_EVENT_FLAG;
    stack_context_ptr_4 = destruction_event_buffer;
    destruction_event_buffer[0] = 0;
    stack_temp_value_5 = 0x15;
    strcpy_s(destruction_event_buffer, EVENT_STRING_MAX_LENGTH, &COMPONENT_EVENT_DATA);
    
    destruction_event_mask = register_event_listener(*(undefined8 *)(object_ptr + OFFSET_OBJECT_TYPE_INFO), 
                                                  &stack_context_ptr_3, 1);
    *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) = 
      *(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) & ~destruction_event_mask;
    
    update_object_event_mask(object_ptr);
    stack_context_ptr_3 = &MEMORY_CLEANUP_FLAG;
  }
  
跳过生命周期事件处理:
  // WARNING: Subroutine does not return
  cleanup_stack_protection(stack_protection_value ^ (ulonglong)stack_protection_buffer_1);
}

/**
 * 检查对象是否可见
 * 检查场景对象在当前渲染帧中是否可见
 * 
 * @param object_ptr 对象指针，要检查可见性的对象
 * @return 可见性状态，true表示可见，false表示不可见
 * 
 * 功能说明：
 * 1. 检查缓存的可见性标志
 * 2. 如果标志为-1，重新计算可见性
 * 3. 检查多种可见性条件
 * 4. 遍历活动组件列表进行详细检查
 * 5. 缓存计算结果
 * 
 * 可见性检查条件：
 * - 当前帧时间有效性
 * - 对象状态和类型信息
 * - 渲染器状态标志
 * - 事件掩码和变换数据
 * - 活动组件的可见性标志
 * 
 * 性能优化：
 * - 使用缓存避免重复计算
 * - 快速失败机制
 * - 组件列表的批量检查
 * 
 * 注意事项：
 * - 可见性检查考虑多种因素
 * - 缓存机制提高性能
 * - 需要考虑渲染管线状态
 */
bool 检查对象可见性(longlong object_ptr) {
  char cached_visibility_flag;    // 缓存的可见性标志
  longlong *active_component_list; // 活动组件列表
  longlong object_type_info;      // 对象类型信息
  longlong component_range;       // 组件范围值
  byte *component_data_ptr;       // 组件数据指针
  uint component_loop_index;      // 组件循环索引
  ulonglong current_event_mask;   // 当前事件掩码
  
  // 获取缓存的可见性标志
  cached_visibility_flag = *(char *)(object_ptr + OFFSET_OBJECT_VISIBILITY);
  
  // 如果标志为-1，需要重新计算可见性
  if (cached_visibility_flag == -1) {
    object_type_info = object_ptr;
    cached_visibility_flag = get_current_frame_time();
    
    // 第一阶段：快速可见性检查
    // 检查多种可能导致对象不可见的条件
    if ((((((cached_visibility_flag == '\0') ||  // 帧时间无效
           (object_type_info = *(longlong *)(object_type_info + OFFSET_OBJECT_TYPE_INFO), 
            1 < *(int *)(object_type_info + 0x1c4) - 1U)) ||  // 对象类型检查
          ((*(uint *)(object_type_info + 0x1588) & 0x10000) != 0)) ||  // 渲染器状态标志
         (((*(uint *)(object_ptr + 0x388) >> 0x19 & 1) != 0 ||  // 对象状态位检查
           (*(int *)(object_type_info + 0x290) != 0)))) ||  // 其他状态检查
        ((*(char *)(object_ptr + 0x13c) != '\x06' &&  // 对象类型检查
         (*(char *)(object_ptr + 0x13c) != '\0')))) ||  // 对象类型检查
       ((*(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) & 
         *(ulonglong *)(object_ptr + OFFSET_OBJECT_TRANSFORM_DATA)) != 0)) {  // 事件掩码检查
      
    可见性检查失败:
      cached_visibility_flag = '\0';  // 设置为不可见
    }
    else {
      // 第二阶段：详细组件可见性检查
      cached_visibility_flag = '\x01';  // 默认设置为可见
      
      // 获取活动组件列表
      active_component_list = (longlong *)get_active_component_list();
      current_event_mask = 0;
      
      // 计算组件范围
      component_range = active_component_list[1] - *active_component_list;
      object_type_info = component_range >> 0x3f;  // 符号扩展
      component_range = component_range / 0x60 + object_type_info;  // 每个组件0x60字节
      
      // 如果有活动组件，进行详细检查
      if (component_range != object_type_info) {
        component_data_ptr = (byte *)(*active_component_list + 0x58);  // 组件数据起始偏移
        
        do {
          // 检查组件事件掩码和可见性标志
          if (((*(ulonglong *)(object_ptr + OFFSET_OBJECT_EVENT_MASK) >> (current_event_mask & 0x3f) & 1) != 0) && 
              ((*component_data_ptr & 2) != 0)) {  // 组件可见性标志
            goto 可见性检查失败;
          }
          
          component_loop_index = (int)current_event_mask + 1;
          current_event_mask = (ulonglong)component_loop_index;
          component_data_ptr = component_data_ptr + 0x60;  // 移动到下一个组件
        } while ((ulonglong)(longlong)(int)component_loop_index < (ulonglong)(component_range - object_type_info));
      }
    }
    
    // 缓存计算结果
    *(char *)(object_ptr + OFFSET_OBJECT_VISIBILITY) = cached_visibility_flag;
  }
  
  return cached_visibility_flag == '\x01';
}

/**
 * 处理对象更新事件
 * 处理场景对象的更新事件，包括组件更新和资源清理
 * 
 * @param object_ptr 对象指针，要处理更新事件的对象
 * @param event_params 事件参数，包含更新相关的参数信息
 * @return 处理的对象数量，表示成功处理的组件数量
 * 
 * 功能说明：
 * 1. 初始化事件系统（如果需要）
 * 2. 处理渲染器和物理资源的清理
 * 3. 更新主组件数组（16个组件）
 * 4. 处理特殊组件数组
 * 5. 执行组件回调函数
 * 
 * 更新逻辑：
 * - 根据事件参数决定更新模式
 * - 检查组件的更新状态
 * - 执行符合条件的组件更新
 * - 处理资源释放和回调
 * 
 * 组件更新条件：
 * - 组件指针有效
 * - 更新状态检查通过
 * - 组件类型符合要求
 * - 特定组件的特殊处理
 * 
 * 注意事项：
 * - 需要正确处理更新锁
 * - 资源清理考虑生命周期状态
 * - 组件回调可能涉及异步操作
 */
uint 处理对象更新事件(longlong object_ptr, longlong *event_params) {
  char component_update_flag;       // 组件更新标志
  longlong *main_component_array;  // 主组件数组
  uint successfully_processed_count; // 成功处理的数量
  uint current_component_index;    // 当前组件索引
  longlong current_component_data;  // 当前组件数据
  undefined8 callback_stack_param_1; // 回调堆栈参数1
  undefined8 callback_stack_param_2; // 回调堆栈参数2
  code *component_callback_func;    // 组件回调函数
  code *guard_check_function;       // 保护检查函数
  
  successfully_processed_count = 0;
  
  // 第一阶段：初始化事件系统
  if ((*(byte *)(event_params + 1) & 1) != 0) {
    initialize_event_system();
  }
  
  // 第二阶段：处理普通对象更新
  if (*(char *)(object_ptr + OFFSET_OBJECT_COLLISION) == '\0') {
    // 检查是否需要清理资源
    if ((char)event_params[2] != '\0') {
      // 处理渲染器资源清理
      if ((*(longlong *)(object_ptr + OFFSET_OBJECT_RENDERER) != 0) &&
          (((LIFETIME_EVENT_ENABLED == 0 || (*(char *)(LIFETIME_EVENT_ENABLED + 0x1f1) == '\0')) &&
           (*(char *)(object_ptr + 0x1d8) == '\0'))) &&  // 生命周期检查
         ((*(int *)(object_ptr + OFFSET_OBJECT_LIFETIME_EVENT) != -1 && 
           (*(int *)(object_ptr + OFFSET_OBJECT_LIFETIME_EVENT) != 0)))) {  // 事件状态检查
        release_renderer_resources(*(longlong *)(object_ptr + OFFSET_OBJECT_RENDERER), 0xffffffff);
      }
      
      // 处理物理资源清理
      if ((*(longlong *)(object_ptr + OFFSET_OBJECT_PHYSICS) != 0) &&
          ((LIFETIME_EVENT_ENABLED == 0 || (*(char *)(LIFETIME_EVENT_ENABLED + 0x1f1) == '\0'))) &&
         ((*(char *)(object_ptr + 0x1d8) == '\0' &&
          ((*(int *)(object_ptr + 0x1d4) != -1 && (*(int *)(object_ptr + 0x1d4) != 0)))))) {  // 物理状态检查
        release_renderer_resources(*(longlong *)(object_ptr + OFFSET_OBJECT_PHYSICS), 0xffffffff);
      }
    }
    
    // 第三阶段：处理主组件数组更新（16个组件）
    main_component_array = (longlong *)(object_ptr + OFFSET_OBJECT_COMPONENT_ARRAY);
    current_component_index = successfully_processed_count;
    
    do {
      current_component_data = *main_component_array;
      
      // 检查组件是否需要更新
      if (((current_component_data != 0) &&  // 组件存在
          (((component_update_flag = 检查组件更新状态(object_ptr, 0), 
             component_update_flag == '\0' || ((current_component_index & 0xfffffff9) != 0)) ||  // 更新状态检查
           (current_component_index == 6)))) &&  // 特殊组件处理
         ((((component_update_flag = 检查组件更新状态(object_ptr, 1), 
            component_update_flag == '\0' || ((current_component_index - 1 & 0xfffffffd) != 0)) &&  // 第二种更新状态
           (*(int *)(current_component_data + 0x380) != 2)) &&  // 组件状态检查
          ((*(int *)(*main_component_array + 0x380) != 3 &&  // 组件类型检查
            (*(longlong *)(*main_component_array + 0xa8) != 0)))))) {  // 组件数据有效性
        
        // 成功处理一个组件
        successfully_processed_count = successfully_processed_count + 1;
        
        // 获取更新锁（如果需要）
        if (*event_params != 0) {
          acquire_update_lock();
        }
        
        // 执行组件回调（如果需要）
        if ((char)event_params[2] != '\0') {
          callback_stack_param_1 = 0;
          callback_stack_param_2 = 0;
          component_callback_func = (code *)0x0;
          guard_check_function = _guard_check_icall;
          
          // 执行组件回调函数
          execute_component_callback(*main_component_array, 0, 
                                   *(undefined4 *)((longlong)event_params + 0x14), 
                                   &callback_stack_param_1);
          
          // 如果有回调函数，执行它
          if (component_callback_func != (code *)0x0) {
            (*component_callback_func)(&callback_stack_param_1, 0, 0);
          }
        }
      }
      
      current_component_index = current_component_index + 1;
      main_component_array = main_component_array + 1;
    } while ((int)current_component_index < COMPONENT_ARRAY_SIZE);  // 处理16个组件
  }
  else if ((*(byte *)(event_params + 1) & 1) != 0) {
    // 第四阶段：处理特殊组件数组
    main_component_array = (longlong *)(object_ptr + OFFSET_OBJECT_RENDER_COMPONENT_ARRAY);
    current_component_data = RENDER_COMPONENT_SIZE;  // 16个特殊组件
    
    do {
      // 检查特殊组件的有效性
      if ((((main_component_array[-0x65] != 0) && (*main_component_array != 0)) &&  // 组件存在性检查
           (*(int *)(*main_component_array + 0x380) != 2)) &&  // 组件状态检查
         (*(int *)(*main_component_array + 0x380) != 3)) {  // 组件类型检查
        successfully_processed_count = successfully_processed_count + 1;
      }
      
      main_component_array = main_component_array + 1;
      current_component_data = current_component_data + -1;
    } while (current_component_data != 0);
  }
  
  return successfully_processed_count;
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