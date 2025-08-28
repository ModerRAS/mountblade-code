#include "TaleWorlds.Native.Split.h"

// 03_rendering_part337.c - 渲染系统高级资源管理和对象处理模块
// 该模块包含11个核心函数，涵盖渲染资源管理、对象处理、参数设置、内存分配等高级渲染功能

// 函数: 渲染系统高级对象创建和资源管理
// 功能: 创建渲染对象，管理资源分配，处理多个参数输入
// 参数:
//   render_context - 渲染系统上下文指针
//   param_2 - 第一个4D向量参数（位置、颜色等）
//   param_3 - 第二个4D向量参数（方向、大小等）
//   param_4 - 第三个对象参数指针
//   param_5 - 第一个8字节参数
//   param_6 - 第二个8字节参数
//   param_7 - 第三个8字节参数
//   param_8 - 整数标志参数
void render_system_advanced_object_creation(longlong *render_context, undefined4 *vector_param_1, undefined4 *vector_param_2, undefined8 *object_param,
                                          undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 flag_param)

{
  longlong *resource_manager_1;
  undefined4 *data_ptr_1;
  undefined8 *object_ptr_1;
  int count_1;
  int count_2;
  undefined8 temp_data_1;
  longlong *resource_manager_2;
  undefined4 data_value_1;
  undefined4 data_value_2;
  undefined4 data_value_3;
  int index_1;
  int index_2;
  longlong *stack_ptr_1;
  longlong *stack_ptr_2;
  longlong *stack_ptr_3;
  longlong array_data_1 [3];
  longlong *stack_ptr_4;
  char flag_1;
  char flag_2;
  char flag_3;
  longlong *stack_ptr_5;
  undefined8 stack_data_1;
  undefined8 stack_data_2;
  undefined8 stack_data_3;
  undefined4 stack_value_1;
  undefined4 stack_value_2;
  undefined4 stack_value_3;
  undefined4 stack_value_4;
  undefined8 stack_data_4;
  longlong *stack_ptr_6;
  
  stack_data_4 = 0xfffffffffffffffe;
  stack_ptr_6 = render_context;
  if (render_context != (longlong *)0x0) {
    // 初始化渲染上下文
    (**(code **)(*render_context + 0x28))();
    stack_ptr_1 = (longlong *)CONCAT44(stack_ptr_1._4_4_,flag_param);
    stack_data_3 = param_7;
    stack_data_2 = param_6;
    stack_data_1 = param_5;
    stack_ptr_5 = render_context;
    (**(code **)(*render_context + 0x28))();
    stack_ptr_2 = (longlong *)0x0;
    stack_ptr_3 = (longlong *)0x0;
    stack_ptr_5 = array_data_1;
    stack_ptr_4 = (longlong *)0x0;
    array_data_1[1] = 0;
    array_data_1[0]._0_1_ = 0;
    
    // 创建资源管理器
    FUN_18022f2e0(&stack_ptr_2,render_context,0);
    (**(code **)(*render_context + 0x38))(render_context);
    resource_manager_1 = stack_ptr_3;
    count_1 = (int)stack_ptr_3[2];
    stack_ptr_5 = (longlong *)CONCAT44(stack_ptr_5._4_4_,count_1);
    index_2 = count_1 + 1;
    count_2 = *(int *)((longlong)stack_ptr_3 + 0x14);
    
    // 检查并扩展数组容量
    if (count_2 < index_2) {
      if (count_2 < 2) {
        *(undefined4 *)((longlong)stack_ptr_3 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_3 + 0x14) = (count_2 >> 1) + count_2;
      }
      FUN_1800846d0(stack_ptr_3 + 2);
    }
    *(int *)(resource_manager_1 + 2) = index_2;
    
    // 处理第一个4D向量参数
    data_value_1 = vector_param_1[1];
    data_value_2 = vector_param_1[2];
    data_value_3 = vector_param_1[3];
    data_ptr_1 = (undefined4 *)(stack_ptr_3[3] + (longlong)count_1 * 0x10);
    *data_ptr_1 = *vector_param_1;
    data_ptr_1[1] = data_value_1;
    data_ptr_1[2] = data_value_2;
    data_ptr_1[3] = data_value_3;
    
    resource_manager_1 = stack_ptr_3 + 7;
    if ((int)*resource_manager_1 != 0) {
      count_2 = *(int *)((longlong)stack_ptr_3 + 0x3c);
      if (count_2 < index_2) {
        if (count_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_3 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_3 + 0x3c) = (count_2 >> 1) + count_2;
        }
        FUN_1800846d0(resource_manager_1);
      }
      *(int *)resource_manager_1 = index_2;
      data_value_1 = vector_param_1[1];
      data_value_2 = vector_param_1[2];
      data_value_3 = vector_param_1[3];
      data_ptr_1 = (undefined4 *)(stack_ptr_3[8] + (longlong)count_1 * 0x10);
      *data_ptr_1 = *vector_param_1;
      data_ptr_1[1] = data_value_1;
      data_ptr_1[2] = data_value_2;
      data_ptr_1[3] = data_value_3;
    }
    
    flag_1 = 1;
    flag_3 = 1;
    resource_manager_1 = stack_ptr_3 + 2;
    count_1 = (int)*resource_manager_1;
    index_2 = count_1 + 1;
    count_2 = *(int *)((longlong)stack_ptr_3 + 0x14);
    
    // 处理第二个4D向量参数
    if (count_2 < index_2) {
      if (count_2 < 2) {
        *(undefined4 *)((longlong)stack_ptr_3 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_3 + 0x14) = (count_2 >> 1) + count_2;
      }
      FUN_1800846d0(resource_manager_1);
    }
    *(int *)resource_manager_1 = index_2;
    data_value_1 = vector_param_2[1];
    data_value_2 = vector_param_2[2];
    data_value_3 = vector_param_2[3];
    data_ptr_1 = (undefined4 *)(stack_ptr_3[3] + (longlong)count_1 * 0x10);
    *data_ptr_1 = *vector_param_2;
    data_ptr_1[1] = data_value_1;
    data_ptr_1[2] = data_value_2;
    data_ptr_1[3] = data_value_3;
    
    resource_manager_1 = stack_ptr_3 + 7;
    if ((int)*resource_manager_1 != 0) {
      count_2 = *(int *)((longlong)stack_ptr_3 + 0x3c);
      if (count_2 < index_2) {
        if (count_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_3 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_3 + 0x3c) = (count_2 >> 1) + count_2;
        }
        FUN_1800846d0(resource_manager_1);
      }
      *(int *)resource_manager_1 = index_2;
      data_value_1 = vector_param_2[1];
      data_value_2 = vector_param_2[2];
      data_value_3 = vector_param_2[3];
      data_ptr_1 = (undefined4 *)(stack_ptr_3[8] + (longlong)count_1 * 0x10);
      *data_ptr_1 = *vector_param_2;
      data_ptr_1[1] = data_value_1;
      data_ptr_1[2] = data_value_2;
      data_ptr_1[3] = data_value_3;
    }
    
    flag_1 = 1;
    flag_3 = 1;
    resource_manager_1 = stack_ptr_3 + 2;
    count_2 = (int)*resource_manager_1;
    index_1 = count_2 + 1;
    index_2 = *(int *)((longlong)stack_ptr_3 + 0x14);
    
    // 处理第三个对象参数
    if (index_2 < index_1) {
      if (index_2 < 2) {
        *(undefined4 *)((longlong)stack_ptr_3 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_3 + 0x14) = (index_2 >> 1) + index_2;
      }
      FUN_1800846d0(resource_manager_1);
    }
    resource_manager_2 = stack_ptr_3;
    *(int *)resource_manager_1 = index_1;
    data_value_1 = *(undefined4 *)((longlong)object_param + 4);
    data_value_2 = *(undefined4 *)(object_param + 1);
    data_value_3 = *(undefined4 *)((longlong)object_param + 0xc);
    data_ptr_1 = (undefined4 *)(stack_ptr_3[3] + (longlong)count_2 * 0x10);
    *data_ptr_1 = *(undefined4 *)object_param;
    data_ptr_1[1] = data_value_1;
    data_ptr_1[2] = data_value_2;
    data_ptr_1[3] = data_value_3;
    
    if ((int)stack_ptr_3[7] != 0) {
      index_2 = *(int *)((longlong)stack_ptr_3 + 0x3c);
      if (index_2 < index_1) {
        if (index_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_3 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_3 + 0x3c) = (index_2 >> 1) + index_2;
        }
        FUN_1800846d0(stack_ptr_3 + 7);
      }
      *(int *)(resource_manager_2 + 7) = index_1;
      temp_data_1 = object_param[1];
      object_ptr_1 = (undefined8 *)(stack_ptr_3[8] + (longlong)count_2 * 0x10);
      *object_ptr_1 = *object_param;
      object_ptr_1[1] = temp_data_1;
    }
    
    flag_1 = '\x01';
    flag_3 = '\x01';
    stack_value_1 = 0;
    stack_value_2 = 0;
    stack_value_3 = 0x3f800000;
    stack_value_4 = 0x7f7fffff;
    
    // 创建渲染对象
    data_value_1 = FUN_1802350e0(&stack_ptr_2,(ulonglong)stack_ptr_5 & 0xffffffff,&stack_data_1,&stack_ptr_1,
                          &stack_value_1);
    data_value_2 = FUN_1802350e0(&stack_ptr_2,count_1,&stack_data_2,&stack_ptr_1,&stack_value_1);
    data_value_3 = FUN_1802350e0(&stack_ptr_2,count_2,&stack_data_3,&stack_ptr_1,&stack_value_1);
    FUN_180235410(&stack_ptr_2,data_value_1,data_value_2,data_value_3);
    
    // 清理资源
    if ((stack_ptr_2 != (longlong *)0x0) && (stack_ptr_3 != (longlong *)0x0)) {
      if (flag_3 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(array_data_1);
      if (flag_1 != '\0') {
        FUN_180079520(stack_ptr_2);
      }
      if (flag_2 != '\0') {
        FUN_180079520(stack_ptr_2);
      }
      resource_manager_1 = stack_ptr_3;
      stack_ptr_1 = stack_ptr_3;
      stack_ptr_3 = (longlong *)0x0;
      if (resource_manager_1 != (longlong *)0x0) {
        (**(code **)(*resource_manager_1 + 0x38))();
      }
    }
    
    stack_ptr_1 = array_data_1;
    FUN_18007f6a0(array_data_1);
    if (stack_ptr_4 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_4 + 0x38))();
    }
    if (stack_ptr_3 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_3 + 0x38))();
    }
    if (stack_ptr_2 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_2 + 0x38))();
    }
  }
  
  // 清理渲染上下文
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统高级对象创建和资源管理（扩展版本）
// 功能: 扩展的对象创建函数，支持更多参数输入
// 参数: 包含额外的颜色和透明度参数
void render_system_advanced_object_creation_extended(longlong *render_context, undefined4 *vector_param_1, undefined4 *vector_param_2, undefined8 *object_param,
                                                  undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 flag_param,
                                                  undefined4 color_param, undefined4 alpha_param)

{
  longlong *resource_manager_1;
  undefined4 *data_ptr_1;
  undefined8 *object_ptr_1;
  int count_1;
  int count_2;
  undefined8 temp_data_1;
  longlong *resource_manager_2;
  undefined4 data_value_1;
  undefined4 data_value_2;
  undefined4 data_value_3;
  int index_1;
  int index_2;
  longlong *stack_ptr_1;
  longlong *stack_ptr_2;
  longlong *stack_ptr_3;
  longlong array_data_1 [3];
  longlong *stack_ptr_4;
  char flag_1;
  char flag_2;
  char flag_3;
  longlong *stack_ptr_5;
  undefined4 stack_color;
  undefined4 stack_alpha;
  undefined8 stack_data_1;
  undefined8 stack_data_2;
  undefined8 stack_data_3;
  undefined4 stack_value_1;
  undefined4 stack_value_2;
  undefined4 stack_value_3;
  undefined4 stack_value_4;
  undefined8 stack_data_4;
  longlong *stack_ptr_6;
  
  stack_data_4 = 0xfffffffffffffffe;
  stack_ptr_6 = render_context;
  if (render_context != (longlong *)0x0) {
    // 初始化渲染上下文
    (**(code **)(*render_context + 0x28))();
    stack_alpha = alpha_param;
    stack_color = color_param;
    stack_ptr_1 = (longlong *)CONCAT44(stack_ptr_1._4_4_,flag_param);
    stack_data_3 = param_7;
    stack_data_2 = param_6;
    stack_data_1 = param_5;
    stack_ptr_5 = render_context;
    (**(code **)(*render_context + 0x28))();
    stack_ptr_2 = (longlong *)0x0;
    stack_ptr_3 = (longlong *)0x0;
    stack_ptr_5 = array_data_1;
    stack_ptr_4 = (longlong *)0x0;
    array_data_1[1] = 0;
    array_data_1[0]._0_1_ = 0;
    
    // 创建资源管理器
    FUN_18022f2e0(&stack_ptr_2,render_context,0);
    (**(code **)(*render_context + 0x38))(render_context);
    resource_manager_1 = stack_ptr_3;
    count_1 = (int)stack_ptr_3[2];
    stack_ptr_5 = (longlong *)CONCAT44(stack_ptr_5._4_4_,count_1);
    index_2 = count_1 + 1;
    count_2 = *(int *)((longlong)stack_ptr_3 + 0x14);
    
    // 检查并扩展数组容量
    if (count_2 < index_2) {
      if (count_2 < 2) {
        *(undefined4 *)((longlong)stack_ptr_3 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_3 + 0x14) = (count_2 >> 1) + count_2;
      }
      FUN_1800846d0(stack_ptr_3 + 2);
    }
    *(int *)(resource_manager_1 + 2) = index_2;
    
    // 处理第一个4D向量参数
    data_value_1 = vector_param_1[1];
    data_value_2 = vector_param_1[2];
    data_value_3 = vector_param_1[3];
    data_ptr_1 = (undefined4 *)(stack_ptr_3[3] + (longlong)count_1 * 0x10);
    *data_ptr_1 = *vector_param_1;
    data_ptr_1[1] = data_value_1;
    data_ptr_1[2] = data_value_2;
    data_ptr_1[3] = data_value_3;
    
    resource_manager_1 = stack_ptr_3 + 7;
    if ((int)*resource_manager_1 != 0) {
      count_2 = *(int *)((longlong)stack_ptr_3 + 0x3c);
      if (count_2 < index_2) {
        if (count_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_3 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_3 + 0x3c) = (count_2 >> 1) + count_2;
        }
        FUN_1800846d0(resource_manager_1);
      }
      *(int *)resource_manager_1 = index_2;
      data_value_1 = vector_param_1[1];
      data_value_2 = vector_param_1[2];
      data_value_3 = vector_param_1[3];
      data_ptr_1 = (undefined4 *)(stack_ptr_3[8] + (longlong)count_1 * 0x10);
      *data_ptr_1 = *vector_param_1;
      data_ptr_1[1] = data_value_1;
      data_ptr_1[2] = data_value_2;
      data_ptr_1[3] = data_value_3;
    }
    
    flag_1 = 1;
    flag_3 = 1;
    resource_manager_1 = stack_ptr_3 + 2;
    count_1 = (int)*resource_manager_1;
    index_2 = count_1 + 1;
    count_2 = *(int *)((longlong)stack_ptr_3 + 0x14);
    
    // 处理第二个4D向量参数
    if (count_2 < index_2) {
      if (count_2 < 2) {
        *(undefined4 *)((longlong)stack_ptr_3 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_3 + 0x14) = (count_2 >> 1) + count_2;
      }
      FUN_1800846d0(resource_manager_1);
    }
    *(int *)resource_manager_1 = index_2;
    data_value_1 = vector_param_2[1];
    data_value_2 = vector_param_2[2];
    data_value_3 = vector_param_2[3];
    data_ptr_1 = (undefined4 *)(stack_ptr_3[3] + (longlong)count_1 * 0x10);
    *data_ptr_1 = *vector_param_2;
    data_ptr_1[1] = data_value_1;
    data_ptr_1[2] = data_value_2;
    data_ptr_1[3] = data_value_3;
    
    resource_manager_1 = stack_ptr_3 + 7;
    if ((int)*resource_manager_1 != 0) {
      count_2 = *(int *)((longlong)stack_ptr_3 + 0x3c);
      if (count_2 < index_2) {
        if (count_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_3 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_3 + 0x3c) = (count_2 >> 1) + count_2;
        }
        FUN_1800846d0(resource_manager_1);
      }
      *(int *)resource_manager_1 = index_2;
      data_value_1 = vector_param_2[1];
      data_value_2 = vector_param_2[2];
      data_value_3 = vector_param_2[3];
      data_ptr_1 = (undefined4 *)(stack_ptr_3[8] + (longlong)count_1 * 0x10);
      *data_ptr_1 = *vector_param_2;
      data_ptr_1[1] = data_value_1;
      data_ptr_1[2] = data_value_2;
      data_ptr_1[3] = data_value_3;
    }
    
    flag_1 = 1;
    flag_3 = 1;
    resource_manager_1 = stack_ptr_3 + 2;
    count_2 = (int)*resource_manager_1;
    index_1 = count_2 + 1;
    index_2 = *(int *)((longlong)stack_ptr_3 + 0x14);
    
    // 处理第三个对象参数
    if (index_2 < index_1) {
      if (index_2 < 2) {
        *(undefined4 *)((longlong)stack_ptr_3 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_3 + 0x14) = (index_2 >> 1) + index_2;
      }
      FUN_1800846d0(resource_manager_1);
    }
    resource_manager_2 = stack_ptr_3;
    *(int *)resource_manager_1 = index_1;
    data_value_1 = *(undefined4 *)((longlong)object_param + 4);
    data_value_2 = *(undefined4 *)(object_param + 1);
    data_value_3 = *(undefined4 *)((longlong)object_param + 0xc);
    data_ptr_1 = (undefined4 *)(stack_ptr_3[3] + (longlong)count_2 * 0x10);
    *data_ptr_1 = *(undefined4 *)object_param;
    data_ptr_1[1] = data_value_1;
    data_ptr_1[2] = data_value_2;
    data_ptr_1[3] = data_value_3;
    
    if ((int)stack_ptr_3[7] != 0) {
      index_2 = *(int *)((longlong)stack_ptr_3 + 0x3c);
      if (index_2 < index_1) {
        if (index_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_3 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_3 + 0x3c) = (index_2 >> 1) + index_2;
        }
        FUN_1800846d0(stack_ptr_3 + 7);
      }
      *(int *)(resource_manager_2 + 7) = index_1;
      temp_data_1 = object_param[1];
      object_ptr_1 = (undefined8 *)(stack_ptr_3[8] + (longlong)count_2 * 0x10);
      *object_ptr_1 = *object_param;
      object_ptr_1[1] = temp_data_1;
    }
    
    flag_1 = '\x01';
    flag_3 = '\x01';
    stack_value_1 = 0;
    stack_value_2 = 0;
    stack_value_3 = 0x3f800000;
    stack_value_4 = 0x7f7fffff;
    
    // 创建渲染对象（包含颜色和透明度）
    data_value_1 = FUN_1802350e0(&stack_ptr_2,(ulonglong)stack_ptr_5 & 0xffffffff,&stack_data_1,&stack_ptr_1,
                          &stack_value_1);
    data_value_2 = FUN_1802350e0(&stack_ptr_2,count_1,&stack_data_2,&stack_ptr_1,&stack_color);
    data_value_3 = FUN_1802350e0(&stack_ptr_2,count_2,&stack_data_3,&stack_alpha,&stack_value_1);
    FUN_180235410(&stack_ptr_2,data_value_1,data_value_2,data_value_3);
    
    // 清理资源
    if ((stack_ptr_2 != (longlong *)0x0) && (stack_ptr_3 != (longlong *)0x0)) {
      if (flag_3 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(array_data_1);
      if (flag_1 != '\0') {
        FUN_180079520(stack_ptr_2);
      }
      if (flag_2 != '\0') {
        FUN_180079520(stack_ptr_2);
      }
      resource_manager_1 = stack_ptr_3;
      stack_ptr_1 = stack_ptr_3;
      stack_ptr_3 = (longlong *)0x0;
      if (resource_manager_1 != (longlong *)0x0) {
        (**(code **)(*resource_manager_1 + 0x38))();
      }
    }
    
    stack_ptr_1 = array_data_1;
    FUN_18007f6a0(array_data_1);
    if (stack_ptr_4 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_4 + 0x38))();
    }
    if (stack_ptr_3 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_3 + 0x38))();
    }
    if (stack_ptr_2 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_2 + 0x38))();
    }
  }
  
  // 清理渲染上下文
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统状态标志设置
// 功能: 设置渲染系统的状态标志位
// 参数:
//   render_context - 渲染系统上下文指针
void render_system_set_status_flag(longlong *render_context)

{
  if ((render_context != (longlong *)0x0) &&
     ((**(code **)(*render_context + 0x28))(), *(char *)((longlong)render_context + 0xfb) != '\x01')) {
    *(undefined1 *)((longlong)render_context + 0xfb) = 1;
    FUN_180079520(render_context);
  }
  if (render_context == (longlong *)0x0) {
    return;
  }
  // WARNING: Could not recover jumptable at 0x000180448de1. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

// 函数: 渲染系统状态标志重置
// 功能: 重置渲染系统的状态标志位
// 参数:
//   render_context - 渲染系统上下文指针
void render_system_reset_status_flag(longlong *render_context)

{
  if ((render_context != (longlong *)0x0) &&
     ((**(code **)(*render_context + 0x28))(), *(char *)((longlong)render_context + 0xfa) != '\x01')) {
    *(undefined1 *)((longlong)render_context + 0xfa) = 1;
    FUN_180079520(render_context);
  }
  if (render_context == (longlong *)0x0) {
    return;
  }
  // WARNING: Could not recover jumptable at 0x000180448e41. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

// 函数: 渲染系统批量处理初始化
// 功能: 初始化渲染系统的批量处理功能
// 参数:
//   render_context - 渲染系统上下文指针
void render_system_batch_processing_init(longlong *render_context)

{
  if (render_context == (longlong *)0x0) {
    return;
  }
  (**(code **)(*render_context + 0x28))();
  FUN_180075b70(render_context);
  // WARNING: Could not recover jumptable at 0x000180448e91. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

// 函数: 渲染系统状态标志获取
// 功能: 获取渲染系统的状态标志位
// 参数:
//   render_context - 渲染系统上下文指针
// 返回值: 状态标志位值
undefined1 render_system_get_status_flag(longlong *render_context)

{
  undefined1 status_flag;
  
  if (render_context == (longlong *)0x0) {
    status_flag = 0;
  }
  else {
    (**(code **)(*render_context + 0x28))();
    status_flag = *(undefined1 *)((longlong)render_context + 0xf7);
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return status_flag;
}

// 函数: 渲染系统状态标志设置
// 功能: 设置渲染系统的状态标志位
// 参数:
//   render_context - 渲染系统上下文指针
//   status_flag - 要设置的状态标志位值
void render_system_set_status_flag_value(longlong *render_context, undefined1 status_flag)

{
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    *(undefined1 *)((longlong)render_context + 0xf7) = status_flag;
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统参数值获取
// 功能: 获取渲染系统的参数值
// 参数:
//   render_context - 渲染系统上下文指针
// 返回值: 参数值
undefined4 render_system_get_parameter_value(longlong *render_context)

{
  undefined4 parameter_value;
  
  if (render_context == (longlong *)0x0) {
    parameter_value = 0;
  }
  else {
    (**(code **)(*render_context + 0x28))();
    parameter_value = (undefined4)render_context[0x4e];
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return parameter_value;
}

// 函数: 渲染系统参数值设置
// 功能: 设置渲染系统的参数值
// 参数:
//   render_context - 渲染系统上下文指针
//   parameter_value - 要设置的参数值
void render_system_set_parameter_value(longlong *render_context, undefined4 parameter_value)

{
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    *(undefined4 *)(render_context + 0x4e) = parameter_value;
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统高级参数获取
// 功能: 获取渲染系统的高级参数值
// 参数:
//   render_context - 渲染系统上下文指针
// 返回值: 高级参数值
undefined4 render_system_get_advanced_parameter(longlong *render_context)

{
  longlong *resource_manager;
  undefined4 advanced_parameter;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
  }
  advanced_parameter = 0;
  if (render_context != (longlong *)0x0) {
    resource_manager = render_context;
    if ((*(byte *)((longlong)render_context + 0xfd) & 0x20) == 0) {
      resource_manager = (longlong *)func_0x000180085de0(render_context[0x36]);
    }
    advanced_parameter = (undefined4)resource_manager[0x40];
  }
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return advanced_parameter;
}

// 函数: 渲染系统索引参数设置
// 功能: 设置渲染系统的索引参数值
// 参数:
//   render_context - 渲染系统上下文指针
//   index - 索引值
//   parameter_value - 要设置的参数值
void render_system_set_index_parameter(longlong *render_context, int index, undefined4 parameter_value)

{
  longlong *resource_manager_1;
  longlong *stack_ptr_1;
  longlong *stack_ptr_2;
  undefined1 array_data_1 [8];
  undefined8 stack_data_1;
  longlong *stack_ptr_3;
  char flag_1;
  char flag_2;
  char flag_3;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    stack_ptr_1 = (longlong *)0x0;
    stack_ptr_2 = (longlong *)0x0;
    stack_ptr_3 = (longlong *)0x0;
    stack_data_1 = 0;
    array_data_1[0] = 0;
    FUN_18022f2e0(&stack_ptr_1,render_context,0);
    
    // 设置索引参数
    *(undefined4 *)((longlong)index * 0x5c + 0x54 + stack_ptr_2[0xd]) = parameter_value;
    
    flag_1 = '\x01';
    if ((stack_ptr_1 != (longlong *)0x0) && (stack_ptr_2 != (longlong *)0x0)) {
      if (flag_3 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(array_data_1);
      if (flag_1 != '\0') {
        FUN_180079520(stack_ptr_1);
      }
      if (flag_2 != '\0') {
        FUN_180079520(stack_ptr_1);
      }
      resource_manager_1 = stack_ptr_2;
      stack_ptr_2 = (longlong *)0x0;
      if (resource_manager_1 != (longlong *)0x0) {
        (**(code **)(*resource_manager_1 + 0x38))();
      }
    }
    
    FUN_18007f6a0(array_data_1);
    if (stack_ptr_3 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_3 + 0x38))();
    }
    if (stack_ptr_2 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_2 + 0x38))();
    }
    if (stack_ptr_1 != (longlong *)0x0) {
      (**(code **)(*stack_ptr_1 + 0x38))();
    }
  }
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统索引参数获取
// 功能: 获取渲染系统的索引参数值
// 参数:
//   render_context - 渲染系统上下文指针
//   index - 索引值
// 返回值: 索引参数值
undefined4 render_system_get_index_parameter(longlong *render_context, int index)

{
  undefined4 parameter_value;
  
  parameter_value = 0xffffffff;
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    parameter_value = *(undefined4 *)((longlong)index * 0x5c + 0x54 + *(longlong *)(render_context[0x42] + 0x68));
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return parameter_value;
}

// 函数: 渲染系统高级资源清理
// 功能: 清理渲染系统的高级资源
// 参数:
//   render_context - 渲染系统上下文指针
void render_system_advanced_resource_cleanup(longlong *render_context)

{
  undefined8 stack_data_1;
  undefined4 stack_value_1;
  undefined4 stack_value_2;
  undefined2 stack_value_3;
  undefined1 stack_value_4;
  undefined4 stack_value_5;
  undefined1 stack_value_6;
  undefined8 stack_data_2;
  longlong stack_data_3;
  undefined8 stack_data_4;
  undefined8 stack_data_5;
  undefined4 stack_value_7;
  undefined8 stack_data_6;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    stack_data_1 = 0;
    stack_value_1 = 0;
    stack_value_2 = 0xffffffff;
    stack_value_3 = 1;
    stack_value_4 = 0;
    stack_value_5 = 0xffffffff;
    stack_value_6 = 1;
    stack_data_2 = 0;
    stack_data_3 = 0;
    stack_data_4 = 0;
    stack_value_7 = 3;
    stack_data_6 = 0;
    FUN_180076c50(render_context,&stack_data_1);
    if (stack_data_3 != 0) {
      // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统高级缓冲区创建
// 功能: 创建渲染系统的高级缓冲区
// 参数:
//   output_buffer - 输出缓冲区指针
//   count - 元素数量
//   input_buffer - 输入缓冲区指针
//   size - 缓冲区大小
//   param_5 - 参数5指针
//   param_6 - 参数6
//   param_7 - 参数7
// 返回值: 输出缓冲区指针
undefined4 *
render_system_advanced_buffer_creation(undefined4 *output_buffer, int count, undefined4 *input_buffer, uint size, undefined4 *param_5,
                                     int param_6, longlong param_7)

{
  int index_1;
  int index_2;
  undefined4 data_value_1;
  undefined4 data_value_2;
  longlong *resource_manager_1;
  longlong *resource_manager_2;
  undefined4 data_value_3;
  undefined8 temp_data_1;
  longlong *resource_manager_3;
  longlong temp_long_1;
  undefined4 *data_ptr_1;
  ulonglong remaining_count;
  int current_index;
  undefined4 array_data_1 [2];
  undefined4 stack_value_1;
  undefined4 stack_value_2;
  undefined4 stack_value_3;
  longlong *stack_ptr_1;
  longlong *stack_ptr_2;
  undefined1 array_data_2 [8];
  undefined8 stack_data_1;
  longlong *stack_ptr_3;
  char flag_1;
  char flag_2;
  char flag_3;
  
  remaining_count = (ulonglong)size;
  temp_long_1 = (longlong)count;
  temp_data_1 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  resource_manager_3 = (longlong *)FUN_180075030(temp_data_1,1);
  
  if (resource_manager_3 != (longlong *)0x0) {
    (**(code **)(*resource_manager_3 + 0x28))(resource_manager_3);
  }
  
  (**(code **)(resource_manager_3[2] + 0x10))(resource_manager_3 + 2,&UNK_180a2a4d0);
  stack_ptr_1 = (longlong *)0x0;
  stack_ptr_2 = (longlong *)0x0;
  stack_ptr_3 = (longlong *)0x0;
  stack_data_1 = 0;
  array_data_2[0] = 0;
  FUN_18022f2e0(&stack_ptr_1,resource_manager_3,0);
  
  // 检查并扩展数组容量
  if (*(int *)((longlong)stack_ptr_2 + 0x14) < count) {
    index_1 = *(int *)((longlong)stack_ptr_2 + 0x14);
    if (index_1 < count) {
      if (count == 0) {
        if (index_1 < 2) {
          *(undefined4 *)((longlong)stack_ptr_2 + 0x14) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_2 + 0x14) = (index_1 >> 1) + index_1;
        }
      }
      else {
        *(int *)((longlong)stack_ptr_2 + 0x14) = count;
      }
      FUN_1800846d0();
    }
    
    if (((int)stack_ptr_2[7] != 0) &&
       (index_1 = *(int *)((longlong)stack_ptr_2 + 0x3c), index_1 < count)) {
      if (count == 0) {
        if (index_1 < 2) {
          *(undefined4 *)((longlong)stack_ptr_2 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_2 + 0x3c) = (index_1 >> 1) + index_1;
        }
      }
      else {
        *(int *)((longlong)stack_ptr_2 + 0x3c) = count;
      }
      FUN_1800846d0();
    }
  }
  
  // 处理输入缓冲区数据
  if (0 < count) {
    do {
      resource_manager_1 = stack_ptr_2;
      data_value_3 = *input_buffer;
      data_value_1 = input_buffer[1];
      data_value_2 = input_buffer[2];
      stack_value_3 = input_buffer[3];
      index_1 = (int)stack_ptr_2[2];
      current_index = index_1 + 1;
      index_2 = *(int *)((longlong)stack_ptr_2 + 0x14);
      
      if (index_2 < current_index) {
        if (index_2 < 2) {
          *(undefined4 *)((longlong)stack_ptr_2 + 0x14) = 8;
        }
        else {
          *(int *)((longlong)stack_ptr_2 + 0x14) = (index_2 >> 1) + index_2;
        }
        FUN_1800846d0(stack_ptr_2 + 2);
      }
      
      resource_manager_2 = stack_ptr_2;
      *(int *)(resource_manager_1 + 2) = current_index;
      data_ptr_1 = (undefined4 *)(stack_ptr_2[3] + (longlong)index_1 * 0x10);
      *data_ptr_1 = data_value_3;
      data_ptr_1[1] = data_value_1;
      data_ptr_1[2] = data_value_2;
      data_ptr_1[3] = stack_value_3;
      
      if ((int)stack_ptr_2[7] != 0) {
        index_2 = *(int *)((longlong)stack_ptr_2 + 0x3c);
        if (index_2 < current_index) {
          if (index_2 < 2) {
            *(undefined4 *)((longlong)stack_ptr_2 + 0x3c) = 8;
          }
          else {
            *(int *)((longlong)stack_ptr_2 + 0x3c) = (index_2 >> 1) + index_2;
          }
          FUN_1800846d0(stack_ptr_2 + 7);
        }
        *(int *)(resource_manager_2 + 7) = current_index;
        data_ptr_1 = (undefined4 *)(stack_ptr_2[8] + (longlong)index_1 * 0x10);
        *data_ptr_1 = data_value_3;
        data_ptr_1[1] = data_value_1;
        data_ptr_1[2] = data_value_2;
        data_ptr_1[3] = stack_value_3;
      }
      
      flag_1 = '\x01';
      flag_3 = '\x01';
      input_buffer = input_buffer + 4;
      temp_long_1 = temp_long_1 + -1;
    } while (temp_long_1 != 0);
  }
  
  // 处理参数5数据
  if ((*(int *)((longlong)stack_ptr_2 + 100) < (int)size) &&
     (index_1 = *(int *)((longlong)stack_ptr_2 + 100), index_1 < (int)size)) {
    if (size == 0) {
      if (index_1 < 2) {
        *(undefined4 *)((longlong)stack_ptr_2 + 100) = 8;
        FUN_180086010();
      }
      else {
        *(int *)((longlong)stack_ptr_2 + 100) = (index_1 >> 1) + index_1;
        FUN_180086010();
      }
      goto LAB_18044958b;
    }
    *(uint *)((longlong)stack_ptr_2 + 100) = size;
    FUN_180086010();
  }
  
  if (0 < (int)size) {
    data_ptr_1 = param_5 + 1;
    do {
      array_data_1[0] = param_5[7];
      FUN_180235270(&stack_ptr_1,*param_5,data_ptr_1,&DAT_1809ff0c8,array_data_1,data_ptr_1 + 2);
      data_ptr_1 = data_ptr_1 + 8;
      param_5 = param_5 + 8;
      remaining_count = remaining_count - 1;
    } while (remaining_count != 0);
  }
  
LAB_18044958b:
  temp_long_1 = (longlong)param_6;
  if ((*(int *)((longlong)stack_ptr_2 + 0x8c) < param_6) &&
     (index_1 = *(int *)((longlong)stack_ptr_2 + 0x8c), index_1 < param_6)) {
    if (param_6 == 0) {
      if (index_1 < 2) {
        *(undefined4 *)((longlong)stack_ptr_2 + 0x8c) = 8;
      }
      else {
        *(int *)((longlong)stack_ptr_2 + 0x8c) = (index_1 >> 1) + index_1;
      }
    }
    else {
      *(int *)((longlong)stack_ptr_2 + 0x8c) = param_6;
    }
    FUN_180085f20();
  }
  
  if (0 < param_6) {
    data_ptr_1 = (undefined4 *)(param_7 + 4);
    do {
      FUN_180235410(&stack_ptr_1,data_ptr_1[-1],*data_ptr_1,data_ptr_1[1]);
      data_ptr_1 = data_ptr_1 + 3;
      temp_long_1 = temp_long_1 + -1;
    } while (temp_long_1 != 0);
  }
  
  data_value_3 = (**(code **)(*resource_manager_3 + 8))(resource_manager_3);
  (**(code **)(*resource_manager_3 + 0x28))(resource_manager_3);
  stack_value_1 = SUB84(resource_manager_3,0);
  stack_value_2 = (undefined4)((ulonglong)resource_manager_3 >> 0x20);
  *output_buffer = stack_value_1;
  output_buffer[1] = stack_value_2;
  output_buffer[2] = data_value_3;
  output_buffer[3] = stack_value_3;
  
  // 清理资源
  if ((stack_ptr_1 != (longlong *)0x0) && (stack_ptr_2 != (longlong *)0x0)) {
    if (flag_3 != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(array_data_2);
    if (flag_1 != '\0') {
      FUN_180079520(stack_ptr_1);
    }
    if (flag_2 != '\0') {
      FUN_180079520(stack_ptr_1);
    }
    resource_manager_1 = stack_ptr_2;
    stack_ptr_2 = (longlong *)0x0;
    if (resource_manager_1 != (longlong *)0x0) {
      (**(code **)(*resource_manager_1 + 0x38))();
    }
  }
  
  FUN_18007f6a0(array_data_2);
  if (stack_ptr_3 != (longlong *)0x0) {
    (**(code **)(*stack_ptr_3 + 0x38))();
  }
  if (stack_ptr_2 != (longlong *)0x0) {
    (**(code **)(*stack_ptr_2 + 0x38))();
  }
  if (stack_ptr_1 != (longlong *)0x0) {
    (**(code **)(*stack_ptr_1 + 0x38))();
  }
  
  (**(code **)(*resource_manager_3 + 0x38))(resource_manager_3);
  return output_buffer;
}

// 函数: 渲染系统参数配置设置
// 功能: 设置渲染系统的参数配置
// 参数:
//   render_context - 渲染系统上下文指针
//   param_2 - 参数2指针（4D向量）
//   param_3 - 字节参数
//   param_4 - 字符参数
void render_system_set_parameter_configuration(longlong *render_context, undefined4 *param_2, byte param_3, char param_4)

{
  undefined4 data_value_1;
  undefined4 data_value_2;
  undefined4 data_value_3;
  char config_value;
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
    data_value_1 = param_2[1];
    data_value_2 = param_2[2];
    data_value_3 = param_2[3];
    *(undefined4 *)(render_context + 0x34) = *param_2;
    *(undefined4 *)((longlong)render_context + 0x1a4) = data_value_1;
    *(undefined4 *)(render_context + 0x35) = data_value_2;
    *(undefined4 *)((longlong)render_context + 0x1ac) = data_value_3;
    config_value = (param_3 ^ 1) + 1;
    if (param_4 != '\0') {
      config_value = '\x03';
    }
    *(char *)(render_context + 0x1f) = config_value;
  }
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return;
}

// 函数: 渲染系统参数配置重置
// 功能: 重置渲染系统的参数配置
// 参数:
//   render_context - 渲染系统上下文指针
void render_system_reset_parameter_configuration(longlong *render_context)

{
  if (render_context == (longlong *)0x0) {
    return;
  }
  
  (**(code **)(*render_context + 0x28))();
  *(undefined1 *)(render_context + 0x1f) = 0;
  *(undefined4 *)(render_context + 0x34) = 0;
  *(undefined4 *)((longlong)render_context + 0x1a4) = 0;
  *(undefined4 *)(render_context + 0x35) = 0;
  *(undefined4 *)((longlong)render_context + 0x1ac) = 0x7f7fffff;
  
  // WARNING: Could not recover jumptable at 0x0001804497cd. Too many branches
  // WARNING: Treating indirect jump as call
  (**(code **)(*render_context + 0x38))(render_context);
  return;
}

// 函数: 渲染系统资源分配器创建
// 功能: 创建渲染系统的资源分配器
// 参数:
//   render_context - 渲染系统上下文指针
// 返回值: 资源分配器指针
undefined8 * render_system_create_resource_allocator(longlong *render_context)

{
  undefined8 *resource_allocator;
  
  resource_allocator = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3,0xfffffffffffffffe);
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))();
  }
  
  // 初始化资源分配器
  *resource_allocator = 0;
  resource_allocator[1] = 0;
  resource_allocator[5] = 0;
  resource_allocator[3] = 0;
  *(undefined1 *)(resource_allocator + 2) = 0;
  FUN_18022f2e0(resource_allocator,render_context,0);
  
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x38))(render_context);
  }
  return resource_allocator;
}