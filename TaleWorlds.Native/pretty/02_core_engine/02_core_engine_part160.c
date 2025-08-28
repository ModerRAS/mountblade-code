#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part160.c - 核心引擎模块第160部分
// 本文件包含17个函数，主要涉及资源管理、数据处理和系统操作

/**
 * 处理引擎状态更新和回调执行
 * @param engine_context 引擎上下文指针
 * @param state_offset 状态偏移量
 * @param callback_param1 回调参数1
 * @param callback_param2 回调参数2
 */
void process_engine_state_update(undefined8 *engine_context, longlong state_offset, undefined8 callback_param1, undefined8 callback_param_2)

{
  longlong *callback_ptr;
  longlong callback_params[3];
  undefined8 cleanup_param1;
  undefined8 cleanup_param2;
  code *cleanup_func1;
  code *cleanup_func2;
  
  // 检查状态是否允许更新
  if (*(int *)(state_offset + 0x380) != 2) {
    *(int *)*engine_context = *(int *)*engine_context + 1;
    callback_ptr = (longlong *)engine_context[1];
    
    // 执行主回调函数
    if (*callback_ptr != 0) {
      callback_params[0] = state_offset;
      execute_callback_chain(*callback_ptr, callback_params, callback_param1, callback_param2, 0xfffffffffffffffe);
      callback_ptr = (longlong *)engine_context[1];
    }
    
    // 执行清理回调
    if ((char)callback_ptr[2] != '\0') {
      cleanup_param1 = 0;
      cleanup_param2 = 0;
      cleanup_func1 = (code *)0x0;
      cleanup_func2 = _guard_check_icall;
      execute_cleanup_function();
      if (cleanup_func1 != (code *)0x0) {
        (*cleanup_func1)(&cleanup_param1, 0, 0);
      }
    }
  }
  return;
}



/**
 * 释放引擎资源并清理内存
 * @param resource_ptr 资源指针
 * @param flags 释放标志位
 * @return 返回资源指针
 */
undefined8 * release_engine_resources(undefined8 *resource_ptr, ulonglong flags)
{
  // 设置资源指针指向全局资源管理器
  *resource_ptr = &global_resource_manager;
  
  // 根据标志位决定是否释放内存
  if ((flags & 1) != 0) {
    free(resource_ptr, 8);
  }
  
  return resource_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理引擎数据统计和计算
 * @param context_ptr 引擎上下文指针
 */
void process_engine_data_statistics(longlong context_ptr)
{
  int *counter_ptr;
  ushort width;
  ushort height;
  int data_value;
  uint *result_ptr;
  uint valid_count;
  ulonglong sum;
  uint total_count;
  ulonglong index;
  ulonglong max_items;
  ulonglong temp_sum;
  longlong data_buffer;
  undefined8 *temp_array;
  
  // 获取数据缓冲区和结果指针
  data_buffer = *(longlong *)(context_ptr + 0x98d8);
  result_ptr = *(uint **)(context_ptr + 0x9650);
  
  if (data_buffer != 0) {
    // 获取宽度和高度信息
    width = *(ushort *)(data_buffer + 0x32c);
    height = *(ushort *)(data_buffer + 0x32e);
    
    // 初始化统计变量
    temp_sum = 0;
    // 获取数据数组
    get_data_array(*(undefined8 *)(global_data_table + 0x1cd8), data_buffer, 0, 0, &temp_array, 0);
    
    total_count = 0;
    max_items = (longlong)(int)((uint)height * (uint)width);
    index = temp_sum;
    temp_sum = temp_sum;
    valid_count = total_count;
    
    // 遍历数据数组进行统计
    if (0 < max_items) {
      do {
        data_value = *(int *)((longlong)temp_array + index * 4);
        sum = (ulonglong)(uint)((int)temp_sum + data_value);
        if (data_value == 0) {
          sum = temp_sum;
        }
        total_count = (uint)sum;
        valid_count = (uint)temp_sum + 1;
        if (data_value == 0) {
          valid_count = (uint)temp_sum;
        }
        index = index + 1;
        temp_sum = sum;
        temp_sum = (ulonglong)valid_count;
      } while ((longlong)index < max_items);
    }
    
    // 保存统计结果
    *result_ptr = valid_count;
    result_ptr[1] = total_count;
    
    // 清理临时数组
    if (temp_array != (undefined8 *)0x0) {
      temp_sum = (ulonglong)temp_array & 0xffffffffffc00000;
      if (temp_sum != 0) {
        data_buffer = temp_sum + 0x80 + ((longlong)temp_array - temp_sum >> 0x10) * 0x50;
        data_buffer = data_buffer - (ulonglong)*(uint *)(data_buffer + 4);
        if ((*(void ***)(temp_sum + 0x70) == &ExceptionList) && (*(char *)(data_buffer + 0xe) == '\0')) {
          // 标准清理流程
          *temp_array = *(undefined8 *)(data_buffer + 0x20);
          *(undefined8 **)(data_buffer + 0x20) = temp_array;
          counter_ptr = (int *)(data_buffer + 0x18);
          *counter_ptr = *counter_ptr + -1;
          if (*counter_ptr == 0) {
            cleanup_memory_pool();
            return;
          }
        }
        else {
          // 异常清理流程
          cleanup_memory_block(temp_sum, CONCAT71(0xff000000,
                                                 *(void ***)(temp_sum + 0x70) == &ExceptionList),
                              temp_array, temp_sum, 0xfffffffffffffffe);
        }
      }
      return;
    }
  }
  return;
}





/**
 * 处理引擎数据统计的变体版本
 * @param context_ptr 引擎上下文指针
 * @param data_ptr 数据指针
 */
void process_engine_data_statistics_variant(longlong context_ptr, longlong data_ptr)
{
  int *counter_ptr;
  ushort height;
  int data_value;
  int width;
  uint sum_result;
  ulonglong temp_sum;
  uint *result_ptr;
  uint valid_count;
  ulonglong index;
  ulonglong max_items;
  longlong total_items;
  undefined8 temp_param;
  undefined8 *data_array;
  
  // 获取高度信息
  height = *(ushort *)(data_ptr + 0x32e);
  temp_sum = 0;
  temp_param = 0;
  // 获取数据数组
  get_data_array(*(undefined8 *)(context_ptr + 0x1cd8));
  
  valid_count = 0;
  total_items = (longlong)(int)((uint)height * width);
  index = temp_sum;
  temp_sum = temp_sum;
  sum_result = valid_count;
  
  // 遍历数据数组进行统计
  if (0 < total_items) {
    do {
      data_value = *(int *)((longlong)data_array + index * 4);
      temp_sum = (ulonglong)(uint)((int)temp_sum + data_value);
      if (data_value == 0) {
        temp_sum = temp_sum;
      }
      sum_result = (uint)temp_sum;
      valid_count = (uint)temp_sum + 1;
      if (data_value == 0) {
        valid_count = (uint)temp_sum;
      }
      index = index + 1;
      temp_sum = temp_sum;
      temp_sum = (ulonglong)valid_count;
    } while ((longlong)index < total_items);
  }
  
  // 保存统计结果
  *result_ptr = valid_count;
  result_ptr[1] = sum_result;
  
  // 清理数据数组
  if (data_array == (undefined8 *)0x0) {
    return;
  }
  
  temp_sum = (ulonglong)data_array & 0xffffffffffc00000;
  if (temp_sum != 0) {
    total_items = temp_sum + 0x80 + ((longlong)data_array - temp_sum >> 0x10) * 0x50;
    total_items = total_items - (ulonglong)*(uint *)(total_items + 4);
    if ((*(void ***)(temp_sum + 0x70) == &ExceptionList) && (*(char *)(total_items + 0xe) == '\0')) {
      // 标准清理流程
      *data_array = *(undefined8 *)(total_items + 0x20);
      *(undefined8 **)(total_items + 0x20) = data_array;
      counter_ptr = (int *)(total_items + 0x18);
      *counter_ptr = *counter_ptr + -1;
      if (*counter_ptr == 0) {
        cleanup_memory_pool();
        return;
      }
    }
    else {
      // 异常清理流程
      cleanup_memory_block(temp_sum, CONCAT71(0xff000000, *(void ***)(temp_sum + 0x70) == &ExceptionList),
                          data_array, temp_sum, 0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180149b76(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 *param_4)
void FUN_180149b76(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *unaff_RSI;
  uint unaff_EDI;
  ulonglong uVar5;
  longlong in_R10;
  
  uVar5 = (ulonglong)unaff_EDI;
  do {
    iVar2 = *(int *)((longlong)param_4 + uVar5 * 4);
    uVar3 = param_2 + iVar2;
    if (iVar2 == 0) {
      uVar3 = param_2;
    }
    param_2 = uVar3;
    uVar3 = unaff_EDI + 1;
    if (iVar2 == 0) {
      uVar3 = unaff_EDI;
    }
    unaff_EDI = uVar3;
    uVar5 = uVar5 + 1;
  } while ((longlong)uVar5 < in_R10);
  *unaff_RSI = unaff_EDI;
  unaff_RSI[1] = param_2;
  if (param_4 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)param_4 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar4 = uVar5 + 0x80 + ((longlong)param_4 - uVar5 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *param_4 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = param_4;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            param_4,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180149bac(void)
void FUN_180149bac(void)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *in_R9;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)in_R9 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)in_R9 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *in_R9 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 **)(lVar2 + 0x20) = in_R9;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          in_R9,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180149bd0(longlong param_1,undefined1 *param_2)
void FUN_180149bd0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_e8 [16];
  code *pcStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  undefined1 auStack_c0 [16];
  code *pcStack_b0;
  code *pcStack_a8;
  longlong lStack_a0;
  undefined1 *apuStack_98 [2];
  code *pcStack_88;
  code *pcStack_80;
  undefined1 auStack_78 [16];
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  
  uStack_58 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x60,8,3);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 3;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 3;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 3;
    *(undefined8 **)(param_1 + 0xc0) = puVar3;
    pcStack_68 = (code *)&UNK_18014f7f0;
    pcStack_60 = _guard_check_icall;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
    pcVar2 = *(code **)(*plVar1 + 0x70);
    pcStack_d8 = (code *)0x0;
    pcStack_d0 = _guard_check_icall;
    if (auStack_e8 != param_2) {
      pcVar4 = *(code **)(param_2 + 0x10);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(auStack_e8,param_2,1);
        pcVar4 = *(code **)(param_2 + 0x10);
      }
      pcStack_d0 = *(code **)(param_2 + 0x18);
      pcStack_d8 = pcVar4;
    }
    pcStack_b0 = (code *)0x0;
    pcStack_a8 = _guard_check_icall;
    lStack_c8 = param_1;
    FUN_180069130(auStack_c0,auStack_e8);
    lStack_a0 = lStack_c8;
    pcStack_88 = FUN_18014f840;
    pcStack_80 = FUN_18014f810;
    apuStack_98[0] = (undefined1 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc);
    *(undefined8 *)(apuStack_98[0] + 0x10) = 0;
    *(code **)(apuStack_98[0] + 0x18) = _guard_check_icall;
    puStack_50 = apuStack_98[0];
    if (apuStack_98[0] != auStack_c0) {
      FUN_180069130(apuStack_98[0],auStack_c0);
    }
    *(longlong *)(apuStack_98[0] + 0x20) = lStack_a0;
    if (pcStack_b0 != (code *)0x0) {
      (*pcStack_b0)(auStack_c0,0,0);
    }
    if (pcStack_d8 != (code *)0x0) {
      (*pcStack_d8)(auStack_e8,0,0);
    }
    (*pcVar2)(plVar1,&DAT_18098c968,*(longlong *)(param_1 + 0xa8) + 0xc,0,apuStack_98,auStack_78);
    if (pcStack_88 != (code *)0x0) {
      (*pcStack_88)(apuStack_98,0,0);
    }
    if (pcStack_68 != (code *)0x0) {
      (*pcStack_68)(auStack_78,0,0);
    }
  }
  else {
    (**(code **)(param_2 + 0x18))(param_2);
  }
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0);
  }
  return;
}





// 函数: void FUN_180149eb0(longlong *param_1)
void FUN_180149eb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    if (plVar2[3] != 0) break;
    plVar2 = plVar2 + 7;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180149ed0(longlong param_1,undefined1 *param_2,float *param_3)
void FUN_180149ed0(longlong param_1,undefined1 *param_2,float *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_108 [16];
  code *pcStack_f8;
  code *pcStack_f0;
  uint uStack_e8;
  longlong lStack_e0;
  float *pfStack_d8;
  undefined8 auStack_d0 [2];
  code *pcStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [16];
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [72];
  ulonglong uVar11;
  
  uStack_90 = 0xfffffffffffffffe;
  iVar4 = 2;
  if (param_3[1] <= 0.0 && param_3[1] != 0.0) {
    iVar4 = 0;
  }
  iVar9 = 4;
  if (*param_3 <= 0.0 && *param_3 != 0.0) {
    iVar9 = 0;
  }
  uVar10 = iVar9 + iVar4 + (uint)(0.0 < param_3[2] || param_3[2] == 0.0);
  uVar11 = (ulonglong)uVar10;
  if (*(longlong *)(param_1 + 200 + uVar11 * 8) == 0) {
    puVar5 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x60,8,3);
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 3;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 3;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 3;
    *(undefined8 **)(param_1 + 200 + uVar11 * 8) = puVar5;
    pcStack_a0 = (code *)&UNK_18014f640;
    pcStack_98 = _guard_check_icall;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
    pcVar3 = *(code **)(*plVar2 + 0x70);
    pcStack_f8 = (code *)0x0;
    pcStack_f0 = _guard_check_icall;
    if (auStack_108 != param_2) {
      pcVar8 = *(code **)(param_2 + 0x10);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(auStack_108,param_2,1);
        pcVar8 = *(code **)(param_2 + 0x10);
      }
      pcStack_f0 = *(code **)(param_2 + 0x18);
      pcStack_f8 = pcVar8;
    }
    uStack_e8 = uVar10;
    lStack_e0 = param_1;
    pfStack_d8 = param_3;
    lVar6 = FUN_18014e960(auStack_88,auStack_108);
    pcStack_c0 = FUN_18014f6a0;
    pcStack_b8 = FUN_18014f660;
    uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x38,8,DAT_180bf65bc);
    FUN_18014e960(uVar7,lVar6);
    auStack_d0[0] = uVar7;
    if (*(code **)(lVar6 + 0x10) != (code *)0x0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0,0);
    }
    if (pcStack_f8 != (code *)0x0) {
      (*pcStack_f8)(auStack_108,0,0);
    }
    (*pcVar3)(plVar2,&DAT_18098c990,*(longlong *)(param_1 + 0xa8) + 0xc,0,auStack_d0,auStack_b0);
    if (pcStack_c0 != (code *)0x0) {
      (*pcStack_c0)(auStack_d0,0,0);
    }
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(auStack_b0,0,0);
    }
  }
  else {
    (**(code **)(param_2 + 0x18))(param_2);
  }
  piVar1 = (int *)(param_1 + 0x108 + uVar11 * 4);
  *piVar1 = *piVar1 + 1;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0);
  }
  return;
}



undefined8 * FUN_18014a1b0(undefined8 *param_1)

{
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = &UNK_1809fcc28;
  param_1[3] = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &UNK_180a07248;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



undefined8 *
FUN_18014a2d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a07248;
  FUN_18014e610(param_1[0x17]);
  param_1[0x17] = 0;
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x140,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014a370(longlong param_1,char param_2,undefined1 *param_3)
void FUN_18014a370(longlong param_1,char param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lStack_148;
  undefined1 auStack_140 [16];
  code *pcStack_130;
  code *pcStack_128;
  undefined8 auStack_120 [2];
  code *pcStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  undefined1 auStack_f8 [16];
  code *pcStack_e8;
  code *pcStack_e0;
  undefined1 auStack_d8 [16];
  code *pcStack_c8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [48];
  
  uStack_b0 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x130,8,6);
                    // WARNING: Subroutine does not return
      memset(uVar3,0,0x130);
    }
    pcStack_e8 = (code *)0x0;
    pcStack_e0 = _guard_check_icall;
    lStack_100 = param_1;
    if (auStack_f8 != param_3) {
      pcVar6 = *(code **)(param_3 + 0x10);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(auStack_f8,param_3,1);
        pcVar6 = *(code **)(param_3 + 0x10);
      }
      pcStack_e0 = *(code **)(param_3 + 0x18);
      pcStack_e8 = pcVar6;
    }
    pcStack_130 = (code *)0x0;
    pcStack_128 = _guard_check_icall;
    lStack_148 = param_1;
    if (auStack_140 != param_3) {
      pcVar6 = *(code **)(param_3 + 0x10);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(auStack_140,param_3,1);
        pcVar6 = *(code **)(param_3 + 0x10);
      }
      pcStack_128 = *(code **)(param_3 + 0x18);
      pcStack_130 = pcVar6;
    }
    if (param_2 == '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
      pcVar6 = *(code **)(*plVar1 + 0x70);
      lVar4 = FUN_18014aa50(auStack_a8,&lStack_148);
      lVar5 = FUN_18014aa50(auStack_80,lVar4);
      pcStack_110 = FUN_18014f3f0;
      puStack_108 = &UNK_18014f3d0;
      uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc);
      FUN_18014aa50(uVar3,lVar5);
      auStack_120[0] = uVar3;
      if (*(code **)(lVar5 + 0x18) != (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(lVar5 + 8,0,0);
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(lVar4 + 8,0,0);
      }
      uVar3 = FUN_18014aa50(auStack_58,&lStack_100);
      FUN_18014e700(auStack_d8,uVar3);
      (*pcVar6)(plVar1,&DAT_180a00d48,*(longlong *)(param_1 + 0xa8) + 0xc,0,auStack_d8,auStack_120);
      if (pcStack_c8 != (code *)0x0) {
        (*pcStack_c8)(auStack_d8,0,0);
      }
      if (pcStack_110 != (code *)0x0) {
        (*pcStack_110)(auStack_120,0,0);
      }
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
      pcVar6 = *(code **)(*plVar1 + 0x60);
      uVar3 = FUN_18014aa50(auStack_d8,&lStack_100);
      FUN_18014e700(auStack_120,uVar3);
      cVar2 = (*pcVar6)(plVar1,&DAT_180a00d48,*(longlong *)(param_1 + 0xa8) + 0xc,0,auStack_120);
      if (pcStack_110 != (code *)0x0) {
        (*pcStack_110)(auStack_120,0,0);
      }
      if ((cVar2 == '\0') && (pcStack_130 != (code *)0x0)) {
        (*pcStack_128)(0,lStack_148,auStack_140);
      }
    }
    if (pcStack_130 != (code *)0x0) {
      (*pcStack_130)(auStack_140,0,0);
    }
    if (pcStack_e8 != (code *)0x0) {
      (*pcStack_e8)(auStack_f8,0,0);
    }
  }
  else {
    (**(code **)(param_3 + 0x18))(1,param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014a720(void)
void FUN_18014a720(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x130,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x130);
}



undefined8 * FUN_18014a900(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 3;
  param_1[0xc] = &UNK_18098bcb0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = &UNK_1809fcc28;
  param_1[0xd] = param_1 + 0xf;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}





// 函数: void FUN_18014a9d0(undefined8 *param_1)
void FUN_18014a9d0(undefined8 *param_1)

{
  FUN_18014e570();
  FUN_18014e4d0();
  FUN_18014e470();
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



undefined8 *
FUN_18014aa50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  if (param_1 + 1 != param_2 + 1) {
    pcVar1 = (code *)param_2[3];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 1,param_2 + 1,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[3];
    }
    param_1[3] = pcVar1;
    param_1[4] = param_2[4];
  }
  return param_1;
}





// 函数: void FUN_18014aae0(longlong *param_1)
void FUN_18014aae0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x88) {
    FUN_18014c7d0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18014ab00(longlong *param_1)
void FUN_18014ab00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_18014d790(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18014ab20(longlong *param_1)
void FUN_18014ab20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    *(undefined8 *)(lVar2 + 0x28) = &UNK_180a3c3e0;
    if (*(longlong *)(lVar2 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x28) = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18014ab40(longlong *param_1)
void FUN_18014ab40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    *(undefined8 *)(lVar2 + 0x18) = &UNK_180a3c3e0;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x18) = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014ab60(undefined8 *param_1,undefined8 param_2)
void FUN_18014ab60(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined *puStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_180c8aa00;
  uStack_38 = 0xfffffffffffffffe;
  lVar3 = 0;
  if (*(int *)(*(longlong *)(*(longlong *)*param_1 + 0x20) + 0x20) != 0) {
    iVar2 = FUN_180191c00(_DAT_180c8aa00,*(longlong *)(*(longlong *)*param_1 + 0x20) + 0x10);
    lVar3 = 0;
    if (iVar2 != -1) {
      lVar3 = (longlong)iVar2 * 0x68 + *(longlong *)(lVar1 + 0x38);
    }
  }
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 6;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 6;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 6;
  FUN_18025e700(&puStack_b8,param_2);
  FUN_18025fe70(*(undefined8 *)(param_1[1] + 0xb8),&puStack_b8,lVar3);
  FUN_18014e570(&uStack_58);
  FUN_18014e4d0(&uStack_78);
  FUN_18014e470(&uStack_98);
  puStack_b8 = &UNK_180a3c3e0;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18014acf0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x140,0x10,3,0,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_18014a1b0(uVar2);
  *param_2 = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uVar5 = 1;
  *(undefined8 *)(*param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 0x18);
  }
  strcpy_s(*(undefined8 *)(lVar1 + 0x18),0x80,puVar4);
  *(undefined8 *)(*param_2 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x130,8,6,uVar5,uVar6);
                    // WARNING: Subroutine does not return
    memset(uVar2,0,0x130);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014ae10(longlong *param_1,longlong *param_2)
void FUN_18014ae10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  
  lVar5 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = lVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x10c);
  lVar5 = param_2[0x22];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x114);
  *(int *)(param_1 + 0x21) = (int)param_2[0x21];
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(int *)(param_1 + 0x22) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar4;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x11c);
  lVar5 = param_2[0x24];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x124);
  *(int *)(param_1 + 0x23) = (int)param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  *(int *)(param_1 + 0x24) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar4;
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  if (param_1 != param_2) {
    lVar5 = *param_2;
    lVar1 = param_2[1];
    lVar9 = lVar1 - lVar5;
    lVar6 = lVar9 / 6 + (lVar9 >> 0x3f);
    uVar7 = (lVar6 >> 3) - (lVar6 >> 0x3f);
    if ((ulonglong)((param_1[2] - *param_1) / 0x30) < uVar7) {
      if (uVar7 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,uVar7 * 0x30,(char)param_1[3]);
      }
      if (lVar5 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar5,lVar9);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = lVar6;
      lVar6 = uVar7 * 0x30 + lVar6;
      param_1[1] = lVar6;
      param_1[2] = lVar6;
    }
    else {
      uVar2 = (param_1[1] - *param_1) / 0x30;
      if (uVar2 < uVar7) {
        lVar6 = uVar2 * 0x30 + lVar5;
        FUN_18014fb60(lVar5,lVar6);
        lVar5 = FUN_18014fb60(lVar6,lVar1,param_1[1]);
      }
      else {
        lVar5 = FUN_18014fb60(lVar5,lVar1);
      }
      param_1[1] = lVar5;
    }
  }
  FUN_18014e160(param_1 + 4,param_2 + 4);
  if (param_1 + 8 != param_2 + 8) {
    FUN_18014eff0(param_1 + 8,param_2[8],param_2[9]);
  }
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  puVar8 = &DAT_18098bc73;
  if ((undefined *)param_2[0xd] != (undefined *)0x0) {
    puVar8 = (undefined *)param_2[0xd];
  }
                    // WARNING: Could not recover jumptable at 0x00018014afdc. Too many branches
                    // WARNING: Treating indirect jump as call
  strcpy_s(param_1[0xd],0x80,puVar8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



