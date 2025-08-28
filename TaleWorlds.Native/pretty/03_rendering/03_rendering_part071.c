#include "TaleWorlds.Native.Split.h"

// 03_rendering_part071.c - 渲染系统高级数据处理和渲染控制模块
// 包含10个核心函数，涵盖渲染数据高级处理、渲染管线控制、资源管理、内存分配、数据结构操作等高级渲染功能

// 常量定义
#define RENDERING_DATA_MAX_ARRAY_SIZE 0x100
#define RENDERING_DATA_ALIGNMENT_SIZE 0x38
#define RENDERING_DATA_MAX_BUFFER_SIZE 0x560
#define RENDERING_DATA_HASH_MASK 0x1fffff
#define RENDERING_DATA_HASH_SHIFT 0xb
#define RENDERING_DATA_HASH_BLOCK_SIZE 0x800

// 函数别名定义
#define rendering_system_process_data_blocks FUN_180308aca
#define rendering_system_process_render_data FUN_180308bc3
#define rendering_system_process_render_batches FUN_180308be0
#define rendering_system_execute_render_pipeline FUN_180308c30
#define rendering_system_compare_render_data FUN_180308f10
#define rendering_system_merge_render_data FUN_1803090c0
#define rendering_system_optimize_render_data FUN_180309290
#define rendering_system_cleanup_render_data FUN_180309520
#define rendering_system_release_render_data FUN_1803095c0
#define rendering_system_initialize_render_data FUN_1803095e0
#define rendering_system_destroy_render_data FUN_180309640
#define rendering_system_process_render_queue FUN_1803096a0
#define rendering_system_create_render_object FUN_180309740
#define rendering_system_free_render_object FUN_180309910
#define rendering_system_cleanup_render_object FUN_180309950

// 全局变量别名定义
#define g_rendering_system_data_table UNK_180a1a2f0
#define g_rendering_system_data_vtable UNK_180a1a278
#define g_rendering_system_string_constants UNK_180a1a248
#define g_rendering_system_string_table UNK_180a1a258
#define g_rendering_system_memory_allocator DAT_180c86870
#define g_rendering_system_texture_manager DAT_18098bc73
#define g_rendering_system_resource_manager DAT_18098bc80
#define g_rendering_system_state_manager DAT_18098bcb0
#define g_rendering_system_heap_base _DAT_180bf00a8
#define g_rendering_system_resource_array _DAT_180bfaea0
#define g_rendering_system_resource_end _DAT_180bfaea8
#define g_rendering_system_resource_count _DAT_180bfaeb8
#define g_rendering_system_module_registry _DAT_180c8ed18
#define g_rendering_system_global_state _DAT_180c86920
#define g_rendering_system_name_registry UNK_180a0c288

// 函数声明
void rendering_system_process_data_blocks(void);
void rendering_system_process_render_data(void);
void rendering_system_process_render_batches(void);
void rendering_system_execute_render_pipeline(longlong *param_1, longlong *param_2, longlong param_3, longlong *param_4);
longlong *rendering_system_compare_render_data(longlong *param_1, longlong *param_2, longlong *param_3);
longlong *rendering_system_merge_render_data(longlong *param_1, longlong *param_2, longlong *param_3, longlong *param_4);
void rendering_system_optimize_render_data(longlong *param_1, longlong param_2, longlong param_3, longlong param_4, longlong *param_5);
void rendering_system_cleanup_render_data(longlong *param_1);
void rendering_system_release_render_data(longlong *param_1);
undefined8 *rendering_system_initialize_render_data(undefined8 *param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4);
void rendering_system_destroy_render_data(undefined8 *param_1);
void rendering_system_process_render_queue(longlong param_1);
undefined8 *rendering_system_create_render_object(undefined8 *param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5);
undefined8 rendering_system_free_render_object(undefined8 param_1, ulonglong param_2);
void rendering_system_cleanup_render_object(undefined8 *param_1);

// 渲染数据块处理函数
void rendering_system_process_data_blocks(void)
{
    longlong processed_data_1;
    longlong processed_data_2;
    uint data_index_1;
    undefined8 *data_pointer;
    uint data_index_2;
    ulonglong hash_value;
    uint data_index_3;
    longlong iteration_count;
    ulonglong base_pointer;
    longlong *source_data_ptr;
    longlong *target_data_ptr;
    uint iteration_index;
    longlong register_r11;
    undefined4 xmm6_data_a;
    undefined4 xmm6_data_b;
    undefined4 xmm6_data_c;
    undefined4 xmm6_data_d;
    undefined4 stack_buffer_1[4];
    undefined4 stack_buffer_2[4];
    undefined4 stack_buffer_3[4];
    undefined4 stack_buffer_4[4];
    longlong stack_data_1;
    longlong stack_data_2;
    undefined4 stack_buffer_5[4];
    undefined4 stack_buffer_6[4];
    undefined4 stack_buffer_7[4];
    undefined4 stack_buffer_8[4];
    longlong stack_data_3;
    longlong stack_data_4;
    longlong stack_data_5;
    longlong stack_data_6;
    longlong stack_data_7;
    longlong stack_data_8;
    undefined4 stack_data_9;
    undefined4 stack_buffer_9;
    undefined4 stack_data_10;
    undefined4 stack_buffer_10;
    undefined8 stack_data_11;
    
    // 保存XMM6寄存器数据到堆栈
    *(undefined4 *)(register_r11 + -0x28) = xmm6_data_a;
    *(undefined4 *)(register_r11 + -0x24) = xmm6_data_b;
    *(undefined4 *)(register_r11 + -0x20) = xmm6_data_c;
    *(undefined4 *)(register_r11 + -0x1c) = xmm6_data_d;
    
    // 主处理循环
    do {
        if (iteration_count < 1) break;
        
        // 计算数据索引和哈希值
        data_index_3 = (int)target_data_ptr[1] - 1;
        data_index_2 = data_index_3 >> RENDERING_DATA_HASH_SHIFT;
        data_index_1 = (int)((longlong)((longlong)(int)target_data_ptr[1] - base_pointer) / 2) + (int)base_pointer;
        data_index_3 = data_index_1 >> RENDERING_DATA_HASH_SHIFT;
        hash_value = base_pointer >> RENDERING_DATA_HASH_SHIFT & RENDERING_DATA_HASH_MASK;
        
        // 调用数据比较函数
        data_pointer = (undefined8 *)
                     rendering_system_compare_render_data(
                         *(longlong *)(*source_data_ptr + 8 + hash_value * 8) +
                         (ulonglong)(uint)((int)base_pointer + (int)hash_value * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8,
                         *(longlong *)(*source_data_ptr + 8 + (ulonglong)data_index_3 * 8) +
                         (ulonglong)(data_index_1 + data_index_3 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8,
                         *(longlong *)(*target_data_ptr + 8 + (ulonglong)data_index_2 * 8) +
                         (ulonglong)(data_index_3 + data_index_2 * -RENDERING_DATA_HASH_BLOCK_SIZE) * 8);
        
        // 准备堆栈数据
        stack_buffer_1[0] = (undefined4)*target_data_ptr;
        stack_buffer_1[1] = *(undefined4 *)((longlong)target_data_ptr + 4);
        stack_buffer_1[2] = (undefined4)target_data_ptr[1];
        stack_buffer_1[3] = *(undefined4 *)((longlong)target_data_ptr + 0xc);
        stack_buffer_2[0] = (undefined4)*source_data_ptr;
        stack_buffer_2[1] = *(undefined4 *)((longlong)source_data_ptr + 4);
        stack_buffer_2[2] = (undefined4)source_data_ptr[1];
        stack_buffer_2[3] = *(undefined4 *)((longlong)source_data_ptr + 0xc);
        stack_data_11 = *data_pointer;
        
        // 调用数据合并函数
        rendering_system_merge_render_data(&stack_data_1, &stack_data_2, &stack_data_3, &stack_data_11);
        processed_data_2 = stack_data_2;
        processed_data_1 = stack_data_1;
        
        // 准备第二轮处理数据
        stack_buffer_5[0] = (undefined4)*target_data_ptr;
        stack_buffer_5[1] = *(undefined4 *)((longlong)target_data_ptr + 4);
        stack_buffer_5[2] = (undefined4)target_data_ptr[1];
        stack_buffer_5[3] = *(undefined4 *)((longlong)target_data_ptr + 0xc);
        iteration_count = iteration_count + -1;
        stack_data_3 = stack_data_1;
        stack_data_4 = stack_data_2;
        
        // 调用渲染处理函数
        rendering_system_process_render_data(&stack_data_3, &stack_data_5, iteration_count, rendering_system_initialize_context);
        
        // 更新目标数据
        *target_data_ptr = processed_data_1;
        target_data_ptr[1] = processed_data_2;
    } while (0x1c < (longlong)((longlong)(int)target_data_ptr[1] - base_pointer));
    
    // 处理剩余数据
    if (iteration_count == 0) {
        stack_data_5 = *target_data_ptr;
        stack_data_6 = target_data_ptr[1];
        stack_data_9 = (undefined4)*source_data_ptr;
        stack_buffer_9[1] = *(undefined4 *)((longlong)source_data_ptr + 4);
        stack_data_10 = (undefined4)source_data_ptr[1];
        stack_buffer_10[3] = *(undefined4 *)((longlong)source_data_ptr + 0xc);
        stack_data_7 = stack_data_5;
        stack_data_8 = stack_data_6;
        rendering_system_process_render_batches(&stack_data_9, &stack_data_7, &stack_data_5);
    }
    
    return;
}





// 渲染数据条件处理函数
void rendering_system_process_render_data(void)
{
    longlong iteration_count;
    undefined4 *source_data_ptr;
    undefined8 *target_data_ptr;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined8 stack_data_3;
    undefined8 stack_data_4;
    undefined4 stack_buffer_1[4];
    undefined4 stack_buffer_2[4];
    undefined4 stack_buffer_3[4];
    undefined4 stack_buffer_4[4];
    
    // 条件检查：只有在迭代计数为0时才执行处理
    if (iteration_count == 0) {
        // 准备目标数据
        stack_data_1 = *target_data_ptr;
        stack_data_2 = target_data_ptr[1];
        
        // 准备源数据缓冲区
        stack_buffer_1[0] = *source_data_ptr;
        stack_buffer_1[1] = source_data_ptr[1];
        stack_buffer_1[2] = source_data_ptr[2];
        stack_buffer_1[3] = source_data_ptr[3];
        
        // 设置处理参数
        stack_data_3 = stack_data_1;
        stack_data_4 = stack_data_2;
        
        // 调用渲染管线执行函数
        rendering_system_execute_render_pipeline(&stack_buffer_1, &stack_data_3, &stack_data_1);
    }
    return;
}





// 渲染批处理函数
void rendering_system_process_render_batches(void)
{
    undefined4 *source_data_ptr;
    undefined8 *target_data_ptr;
    undefined8 stack_data_1;
    undefined8 stack_data_2;
    undefined8 stack_data_3;
    undefined8 stack_data_4;
    undefined4 stack_buffer_1[4];
    undefined4 stack_buffer_2[4];
    undefined4 stack_buffer_3[4];
    undefined4 stack_buffer_4[4];
    
    // 准备目标数据
    stack_data_1 = *target_data_ptr;
    stack_data_2 = target_data_ptr[1];
    
    // 准备源数据缓冲区
    stack_buffer_1[0] = *source_data_ptr;
    stack_buffer_1[1] = source_data_ptr[1];
    stack_buffer_1[2] = source_data_ptr[2];
    stack_buffer_1[3] = source_data_ptr[3];
    
    // 设置处理参数
    stack_data_3 = stack_data_1;
    stack_data_4 = stack_data_2;
    
    // 调用渲染管线执行函数
    rendering_system_execute_render_pipeline(&stack_buffer_1, &stack_data_3, &stack_data_1);
    return;
}





// 函数: void FUN_180308c30(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)
void FUN_180308c30(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  longlong **pplVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong **pplStack_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong **pplStack_60;
  longlong lStack_58;
  longlong lStack_50;
  
  uStack_68 = 0xfffffffffffffffe;
  pplVar3 = (longlong **)*param_1;
  iVar2 = (int)param_1[1];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar8 = (longlong)(int)param_2[1] - (longlong)iVar2;
  plStackX_10 = param_2;
  plStackX_20 = param_4;
  pplStack_78 = pplVar3;
  iStack_70 = iVar2;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    do {
      lVar7 = lVar7 + -1;
      uVar6 = (int)lVar7 + iVar2;
      uVar5 = uVar6 >> 0xb;
      lStack_b8 = pplVar3[(ulonglong)uVar5 + 1][uVar6 + uVar5 * -0x800];
      lStack_98 = *param_1;
      lStack_90 = param_1[1];
      FUN_180309290(&lStack_98,lVar7,lVar8,lVar7,&lStack_b8);
    } while (lVar7 != 0);
  }
  lVar8 = *param_2;
  lStack_90 = param_2[1];
  iVar2 = *(int *)(param_3 + 8);
  uVar5 = (uint)lStack_90;
  lStack_98 = lVar8;
  if ((int)uVar5 < iVar2) {
    lVar9 = *param_1;
    uVar6 = *(uint *)(param_1 + 1);
    lStackX_18 = (ulonglong)(uVar6 >> 0xb) * 8;
    lVar7 = (ulonglong)(uVar6 - (uVar6 & 0xfffff800)) * 8;
    do {
      pplStack_60 = &plStackX_20;
      plStackX_20 = *(longlong **)(*(longlong *)(lStackX_18 + 8 + lVar9) + lVar7);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      pplStack_78 = &plStackX_8;
      uVar6 = uVar5 >> 0xb;
      plStackX_8 = *(longlong **)
                    (*(longlong *)(lVar8 + 8 + (ulonglong)uVar6 * 8) +
                    (ulonglong)(uVar5 + uVar6 * -0x800) * 8);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      cVar4 = FUN_180306d20(&plStackX_8,&plStackX_20);
      if (cVar4 != '\0') {
        uStack_b0 = *(undefined8 *)
                     (*(longlong *)(lVar8 + 8 + (ulonglong)uVar6 * 8) +
                     (ulonglong)(uVar5 + uVar6 * -0x800) * 8);
        *(undefined8 *)
         (*(longlong *)(lVar8 + 8 + (ulonglong)uVar6 * 8) + (ulonglong)(uVar5 + uVar6 * -0x800) * 8)
             = *(undefined8 *)(*(longlong *)(lStackX_18 + 8 + *param_1) + lVar7);
        lStack_88 = *param_1;
        lStack_80 = param_1[1];
        FUN_180309290(&lStack_88,0,(longlong)(int)plStackX_10[1] - (longlong)(int)param_1[1],0,
                      &uStack_b0);
      }
      uVar5 = uVar5 + 1;
      lVar9 = *param_1;
      param_2 = plStackX_10;
    } while ((int)uVar5 < iVar2);
  }
  lVar8 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  lStack_80 = param_2[1];
  lVar7 = param_1[1];
  if (1 < (longlong)(int)uVar5 - (longlong)(int)lVar7) {
    lVar9 = *param_1;
    uVar6 = (uint)param_1[1];
    lStack_88 = lVar8;
    do {
      uVar1 = uVar5 - 1;
      auStack_a8[0] =
           *(undefined8 *)
            (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
            (ulonglong)(uVar1 & 0x7ff) * 8);
      *(undefined8 *)
       (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) + (ulonglong)(uVar1 & 0x7ff) * 8) =
           *(undefined8 *)
            (*(longlong *)(lVar9 + (ulonglong)(uVar6 >> 0xb) * 8 + 8) +
            (ulonglong)(uVar6 + (uVar6 >> 0xb) * -0x800) * 8);
      lStack_58 = *param_1;
      lStack_50 = param_1[1];
      FUN_180309290(&lStack_58,0,((longlong)(int)uVar5 - (longlong)(int)uVar6) + -1,0,auStack_a8);
      uVar5 = uVar1;
    } while (1 < (longlong)(int)uVar1 - (longlong)(int)lVar7);
  }
  return;
}



longlong * FUN_180308f10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_20;
  
  pplStackX_10 = &plStackX_20;
  plStackX_20 = (longlong *)*param_2;
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  plStackX_8 = (longlong *)*param_1;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
  plStackX_20 = (longlong *)*param_3;
  pplStackX_10 = &plStackX_20;
  if (cVar1 == '\0') {
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    plStackX_8 = (longlong *)*param_1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
    if (cVar1 == '\0') {
      pplStackX_10 = &plStackX_20;
      plStackX_20 = (longlong *)*param_3;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      plStackX_8 = (longlong *)*param_2;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
      if (cVar1 == '\0') {
        return param_2;
      }
      return param_3;
    }
  }
  else {
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    plStackX_8 = (longlong *)*param_2;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
    if (cVar1 != '\0') {
      return param_2;
    }
    pplStackX_10 = &plStackX_20;
    plStackX_20 = (longlong *)*param_3;
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    plStackX_8 = (longlong *)*param_1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    cVar1 = FUN_180306d20(&plStackX_8,&plStackX_20);
    if (cVar1 != '\0') {
      param_1 = param_3;
    }
  }
  return param_1;
}



longlong * FUN_1803090c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong **pplStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong ***ppplStack0000000000000028;
  
  lVar3 = *param_3;
  lVar4 = *param_2;
  uVar8 = *(uint *)(param_2 + 1);
  while( true ) {
    while( true ) {
      ppplStack0000000000000028 = &pplStackX_8;
      pplStackX_8 = (longlong **)*param_4;
      if (pplStackX_8 != (longlong **)0x0) {
        (*(code *)(*pplStackX_8)[5])();
      }
      plStackX_10 = *(longlong **)
                     (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
                     (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8);
      if (plStackX_10 != (longlong *)0x0) {
        (**(code **)(*plStackX_10 + 0x28))();
      }
      cVar7 = FUN_180306d20(&plStackX_10,&pplStackX_8);
      if (cVar7 == '\0') break;
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 1) = uVar8;
    }
    *(int *)(param_3 + 1) = (int)param_3[1] + -1;
    uVar8 = *(uint *)(param_3 + 1);
    while( true ) {
      ppplStack0000000000000028 = (longlong ***)&plStackX_18;
      plStackX_18 = *(longlong **)
                     (*(longlong *)(lVar3 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
                     (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 8);
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      pplStackX_8 = &plStackX_20;
      plStackX_20 = (longlong *)*param_4;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      cVar7 = FUN_180306d20(&plStackX_20,&plStackX_18);
      if (cVar7 == '\0') break;
      uVar8 = uVar8 - 1;
      *(uint *)(param_3 + 1) = uVar8;
    }
    lVar6 = param_2[1];
    if ((int)uVar8 <= (int)lVar6) break;
    uVar8 = (uint)param_3[1] >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(*param_3 + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)((uint)param_3[1] + uVar8 * -0x800) * 8);
    uVar8 = (uint)param_2[1] >> 0xb;
    puVar2 = (undefined8 *)
             (*(longlong *)(*param_2 + 8 + (ulonglong)uVar8 * 8) +
             (ulonglong)((uint)param_2[1] + uVar8 * -0x800) * 8);
    uVar5 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar5;
    uVar8 = (int)lVar6 + 1;
    *(uint *)(param_2 + 1) = uVar8;
  }
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  return param_1;
}





// 函数: void FUN_180309290(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180309290(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  lVar9 = param_4 * 2 + 2;
  if (lVar9 < param_3) {
    iVar1 = (int)param_1[1];
    lVar2 = *param_1;
    lVar10 = param_4;
    do {
      uVar6 = (int)lVar9 + iVar1 + -1;
      uVar5 = uVar6 >> 0xb;
      plStackX_8 = *(longlong **)
                    (*(longlong *)(lVar2 + 8 + (ulonglong)uVar5 * 8) +
                    (ulonglong)(uVar6 + uVar5 * -0x800) * 8);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      uVar6 = (int)lVar9 + iVar1;
      uVar5 = uVar6 >> 0xb;
      plStackX_10 = *(longlong **)
                     (*(longlong *)(lVar2 + 8 + (ulonglong)uVar5 * 8) +
                     (ulonglong)(uVar6 + uVar5 * -0x800) * 8);
      if (plStackX_10 != (longlong *)0x0) {
        (**(code **)(*plStackX_10 + 0x28))();
      }
      cVar4 = FUN_180306d20(&plStackX_10,&plStackX_8);
      param_4 = lVar9;
      if (cVar4 != '\0') {
        param_4 = lVar9 + -1;
      }
      uVar7 = iVar1 + (int)param_4;
      uVar5 = uVar7 >> 0xb;
      uVar8 = iVar1 + (int)lVar10;
      uVar6 = uVar8 >> 0xb;
      *(undefined8 *)
       (*(longlong *)(lVar2 + 8 + (ulonglong)uVar6 * 8) + (ulonglong)(uVar8 + uVar6 * -0x800) * 8) =
           *(undefined8 *)
            (*(longlong *)(lVar2 + 8 + (ulonglong)uVar5 * 8) +
            (ulonglong)(uVar7 + uVar5 * -0x800) * 8);
      lVar9 = param_4 * 2 + 2;
      lVar10 = param_4;
    } while (lVar9 < param_3);
  }
  if (lVar9 == param_3) {
    uVar7 = (int)param_1[1] + -1 + (int)lVar9;
    uVar5 = uVar7 >> 0xb;
    uVar8 = (int)param_1[1] + (int)param_4;
    uVar6 = uVar8 >> 0xb;
    *(undefined8 *)
     (*(longlong *)(*param_1 + 8 + (ulonglong)uVar6 * 8) + (ulonglong)(uVar8 + uVar6 * -0x800) * 8)
         = *(undefined8 *)
            (*(longlong *)(*param_1 + 8 + (ulonglong)uVar5 * 8) +
            (ulonglong)(uVar7 + uVar5 * -0x800) * 8);
    param_4 = lVar9 + -1;
  }
  lVar9 = *param_1;
  iVar1 = (int)param_1[1];
  while (iVar3 = (int)param_4, param_2 < param_4) {
    param_4 = param_4 + -1 >> 1;
    plStackX_18 = (longlong *)*param_5;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    uVar6 = (int)param_4 + iVar1;
    uVar5 = uVar6 >> 0xb;
    uVar6 = uVar6 & 0x7ff;
    plStackX_20 = *(longlong **)
                   (*(longlong *)(lVar9 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)uVar6 * 8);
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x28))();
    }
    cVar4 = FUN_180306d20(&plStackX_20,&plStackX_18);
    if (cVar4 == '\0') break;
    uVar8 = iVar3 + iVar1;
    uVar7 = uVar8 >> 0xb;
    *(undefined8 *)
     (*(longlong *)(lVar9 + 8 + (ulonglong)uVar7 * 8) + (ulonglong)(uVar8 + uVar7 * -0x800) * 8) =
         *(undefined8 *)(*(longlong *)(lVar9 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)uVar6 * 8);
  }
  uVar6 = iVar3 + iVar1;
  uVar5 = uVar6 >> 0xb;
  *(longlong *)
   (*(longlong *)(lVar9 + 8 + (ulonglong)uVar5 * 8) + (ulonglong)(uVar6 + uVar5 * -0x800) * 8) =
       *param_5;
  return;
}





// 函数: void FUN_180309520(longlong *param_1)
void FUN_180309520(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_1803095c0(longlong *param_1)
void FUN_1803095c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



undefined8 *
FUN_1803095e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a1a2f0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x68,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180309640(undefined8 *param_1)
void FUN_180309640(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &UNK_180a1a2f0;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_1803096a0(longlong param_1)
void FUN_1803096a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != plVar1) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = *(longlong **)(param_1 + 0x88);
  }
  *(longlong **)(param_1 + 0x90) = plVar3;
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180309740(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a1a3d0;
  *(int *)(param_1 + 3) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13d) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffffffffffff;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f80000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)(_DAT_180c8a980 + 0x140) + (longlong)param_2 * 8) +
                  0x1a0);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    LOCK();
    piVar1 = (int *)(*(longlong *)
                      (*(longlong *)(_DAT_180c8a980 + 0x160) +
                      (longlong)*(int *)((longlong)param_1 + 0x1c) * 8) + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



undefined8 FUN_180309910(undefined8 param_1,ulonglong param_2)

{
  FUN_180309950();
  if ((param_2 & 1) != 0) {
    free(param_1,0x140);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180309950(undefined8 *param_1)
void FUN_180309950(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int aiStackX_10 [2];
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  *param_1 = &UNK_180a1a3d0;
  lVar5 = _DAT_180c8a980;
  iVar6 = *(int *)((longlong)param_1 + 0x24);
  lVar7 = (longlong)iVar6;
  if ((iVar6 != -1) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
    lVar1 = _DAT_180c8a980 + 0x2b8;
    aiStackX_10[0] = iVar6;
    AcquireSRWLockExclusive(lVar1);
    *(undefined1 *)(lVar5 + 3) = 1;
    *(undefined1 *)(*(longlong *)(lVar5 + 0x1a0) + lVar7 * 0x10) = 0;
    lVar8 = *(longlong *)(lVar5 + 0x1a0);
    lVar3 = lVar8 + lVar7 * 0x10;
    if (*(int *)(lVar3 + 4) != -1) {
      FUN_18030a460(lVar5 + 0x58,*(undefined8 *)(lVar3 + 4));
      lVar8 = *(longlong *)(lVar5 + 0x1a0);
    }
    plStackX_18 = (longlong *)0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 4 + lVar7 * 0x10) = 0xffffffffffffffff;
    FUN_1800571e0(lVar5 + 0x120,aiStackX_10);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
    ReleaseSRWLockExclusive(lVar1);
  }
  lVar5 = _DAT_180c8a980;
  iVar4 = *(int *)(param_1 + 3);
  LOCK();
  piVar2 = (int *)(*(longlong *)(*(longlong *)(_DAT_180c8a980 + 0x140) + (longlong)iVar4 * 8) +
                  0x1a0);
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    iVar6 = _Mtx_lock(lVar5 + 0x1c0);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    plStackX_18 = *(longlong **)
                   (*(longlong *)((longlong)iVar4 * 8 + *(longlong *)(lVar5 + 0x140)) + 0x1a8);
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    FUN_1800b87c0(lVar5 + 0x210,&plStackX_18);
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    iVar6 = _Mtx_unlock(lVar5 + 0x1c0);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
  }
  lVar5 = _DAT_180c8a980;
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    lVar7 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 8;
    LOCK();
    piVar2 = (int *)(*(longlong *)(lVar7 + *(longlong *)(_DAT_180c8a980 + 0x160)) + 0x18);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      iVar6 = _Mtx_lock(lVar5 + 0x1c0);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      plStackX_20 = *(longlong **)(*(longlong *)(lVar7 + *(longlong *)(lVar5 + 0x160)) + 0x20);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      FUN_1800b87c0(lVar5 + 0x230,&plStackX_20);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      iVar6 = _Mtx_unlock(lVar5 + 0x1c0);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
    }
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}





