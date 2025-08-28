#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part206.c - 核心引擎动态数组管理模块

// 函数：向动态数组中插入元素（8字节结构体）
void dynamic_array_insert_8byte(longlong *array_info, longlong insert_pos, undefined8 *element_data)

{
    ulonglong new_capacity;
    undefined8 *new_array;
    code *error_handler;
    ulonglong current_capacity;
    undefined4 element_field_0x14;
    undefined4 element_field_0x18;
    undefined4 element_field_0x1c;
    undefined8 element_field_4;
    longlong array_start;
    longlong array_end;
    undefined1 temp_stack[8];
    ulonglong calc_capacity;
    longlong element_offset;
    
    array_end = *array_info;
    element_offset = (array_info[1] - array_end) / 0x28;
    if (element_offset == 0x666666666666666) {
        // 错误处理：数组大小无效
        handle_array_error(array_info[1] - array_end, 0x666666666666666, array_end, 0x666666666666666, 0xfffffffffffffffe);
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
    }
    new_capacity = element_offset + 1;
    current_capacity = (array_info[2] - array_end) / 0x28;
    calc_capacity = new_capacity;
    if ((current_capacity <= 0x666666666666666 - (current_capacity >> 1)) &&
        (calc_capacity = current_capacity + (current_capacity >> 1), calc_capacity < new_capacity)) {
        calc_capacity = new_capacity;
    }
    element_offset = calc_capacity * 0x28;
    if (0x666666666666666 < calc_capacity) {
        element_offset = -1;
    }
    element_offset = allocate_memory(element_offset);
    new_array = (undefined8 *)(element_offset + ((insert_pos - array_end) / 0x28) * 0x28);
    element_field_4 = element_data[1];
    *new_array = *element_data;
    new_array[1] = element_field_4;
    element_field_0x14 = *(undefined4 *)((longlong)element_data + 0x14);
    element_field_0x18 = *(undefined4 *)(element_data + 3);
    element_field_0x1c = *(undefined4 *)((longlong)element_data + 0x1c);
    *(undefined4 *)(new_array + 2) = *(undefined4 *)(element_data + 2);
    *(undefined4 *)((longlong)new_array + 0x14) = element_field_0x14;
    *(undefined4 *)(new_array + 3) = element_field_0x18;
    *(undefined4 *)((longlong)new_array + 0x1c) = element_field_0x1c;
    new_array[4] = element_data[4];
    array_end = array_info[1];
    element_offset = element_offset;
    copy_array_data(temp_stack, *array_info);
    if (insert_pos != array_end) {
        // 移动现有元素为新元素腾出空间
        memmove(element_offset);
    }
    // 执行内存移动操作
    memmove(element_offset);
}



// 函数：向4字节元素数组中插入元素
undefined4 * array_insert_4byte_elements(longlong *array_info, longlong insert_pos, undefined4 *element_data)
{
  ulonglong new_element_count;
  undefined4 *new_array;
  code *error_handler;
  undefined4 *result_ptr;
  undefined4 element_field_1;
  undefined4 element_field_2;
  undefined4 element_field_3;
  undefined4 *element_ptr;
  undefined4 *temp_ptr;
  longlong array_start;
  longlong array_end;
  undefined8 temp_var;
  ulonglong current_count;
  ulonglong new_capacity;
  longlong element_offset;
  
  array_end = *array_info;
  element_offset = (array_info[1] - array_end) / 0x28;
  if (element_offset == 0x666666666666666) {
    // 错误处理：数组大小无效
    handle_array_size_error();
    error_handler = (code *)swi(3);
    result_ptr = (undefined4 *)(*error_handler)();
    return result_ptr;
  }
  new_element_count = element_offset + 1;
  current_count = (array_info[2] - array_end) / 0x28;
  new_capacity = new_element_count;
  if ((current_count <= 0x666666666666666 - (current_count >> 1)) &&
     (new_capacity = current_count + (current_count >> 1), new_capacity < new_element_count)) {
    new_capacity = new_element_count;
  }
  element_offset = new_capacity * 0x28;
  if (0x666666666666666 < new_capacity) {
    element_offset = -1;
  }
  new_array = (undefined4 *)allocate_memory(element_offset);
  result_ptr = new_array + ((insert_pos - array_end) / 0x28) * 10;
  *(undefined8 *)(result_ptr + 4) = 0;
  *(undefined8 *)(result_ptr + 6) = 0;
  element_field_1 = element_data[1];
  element_field_2 = element_data[2];
  element_field_3 = element_data[3];
  *result_ptr = *element_data;
  result_ptr[1] = element_field_1;
  result_ptr[2] = element_field_2;
  result_ptr[3] = element_field_3;
  element_field_1 = element_data[5];
  element_field_2 = element_data[6];
  element_field_3 = element_data[7];
  result_ptr[4] = element_data[4];
  result_ptr[5] = element_field_1;
  result_ptr[6] = element_field_2;
  result_ptr[7] = element_field_3;
  *(undefined8 *)(element_data + 4) = 0;
  *(undefined8 *)(element_data + 6) = 0xf;
  *(undefined1 *)element_data = 0;
  *(undefined1 *)(result_ptr + 8) = *(undefined1 *)(element_data + 8);
  array_end = array_info[1];
  element_offset = (longlong)new_array;
  temp_ptr = new_array;
  element_ptr = result_ptr;
  if (insert_pos != array_end) {
    copy_array_segment_with_4byte_elements(*array_info, insert_pos, new_array, array_info, result_ptr, 0xfffffffffffffffe, result_ptr);
    temp_ptr = result_ptr + 10;
    array_end = array_info[1];
    element_offset = insert_pos;
    element_ptr = new_array;
  }
  copy_array_segment_with_4byte_elements(element_offset, array_end, temp_ptr, array_info, element_ptr, 0xfffffffffffffffe, result_ptr);
  element_offset = *array_info;
  if (element_offset != 0) {
    array_end = array_info[1];
    if (element_offset != array_end) {
      do {
        free_memory(element_offset);
        element_offset = element_offset + 0x28;
      } while (element_offset != array_end);
      element_offset = *array_info;
    }
    current_count = ((array_info[2] - element_offset) / 0x28) * 0x28;
    array_end = element_offset;
    if (0xfff < current_count) {
      array_end = *(longlong *)(element_offset + -8);
      if (0x1f < (element_offset - array_end) - 8U) {
        // WARNING: Subroutine does not return
        invalid_parameter_no_info_no_return(array_info[2] - element_offset, current_count + 0x27);
      }
    }
    free(array_end);
  }
  *array_info = (longlong)new_array;
  array_info[1] = (longlong)(new_array + new_element_count * 10);
  array_info[2] = (longlong)(new_array + new_capacity * 10);
  return result_ptr;
}



// 函数：向数组中插入结构体元素
longlong array_insert_struct_element(longlong *array_info, longlong insert_pos, longlong element_data)
{
  ulonglong new_element_count;
  code *error_handler;
  longlong array_start;
  longlong array_end;
  longlong new_array_start;
  longlong insert_position;
  ulonglong current_count;
  ulonglong new_capacity;
  longlong element_offset;
  undefined8 temp_var;
  longlong new_array;
  longlong result_ptr;
  
  temp_var = 0xfffffffffffffffe;
  array_start = *array_info;
  array_end = (array_info[1] - array_start) / 0x28;
  if (array_end == 0x666666666666666) {
    handle_array_size_error();
    error_handler = (code *)swi(3);
    array_start = (*error_handler)();
    return array_start;
  }
  new_element_count = array_end + 1;
  current_count = (array_info[2] - array_start) / 0x28;
  new_capacity = new_element_count;
  if ((current_count <= 0x666666666666666 - (current_count >> 1)) && 
     (new_capacity = current_count + (current_count >> 1), new_capacity < new_element_count)) {
    new_capacity = new_element_count;
  }
  array_end = new_capacity * 0x28;
  if (0x666666666666666 < new_capacity) {
    array_end = -1;
  }
  new_array = allocate_memory(array_end);
  result_ptr = new_array + ((insert_pos - array_start) / 0x28) * 0x28;
  new_array_start = new_array;
  insert_position = result_ptr;
  copy_struct_data(result_ptr, element_data);
  *(undefined4 *)(result_ptr + 0x20) = *(undefined4 *)(element_data + 0x20);
  *(undefined4 *)(result_ptr + 0x24) = *(undefined4 *)(element_data + 0x24);
  array_end = array_info[1];
  array_start = *array_info;
  new_array = new_array_start;
  result_ptr = insert_position;
  if (insert_pos != array_end) {
    copy_array_segment_with_structs(array_info, array_start, insert_pos, new_array_start, result_ptr, new_array, temp_var, insert_position);
    array_end = array_info[1];
    array_start = insert_pos;
    new_array = result_ptr + 0x28;
    result_ptr = new_array_start;
  }
  copy_array_segment_with_structs(array_start, array_end, new_array, array_info, result_ptr, new_array, temp_var, insert_position);
  array_start = *array_info;
  if (array_start != 0) {
    array_end = array_info[1];
    if (array_start != array_end) {
      do {
        free_memory(array_start);
        array_start = array_start + 0x28;
      } while (array_start != array_end);
      array_start = *array_info;
    }
    current_count = ((array_info[2] - array_start) / 0x28) * 0x28;
    array_end = array_start;
    if (0xfff < current_count) {
      array_end = *(longlong *)(array_start + -8);
      if (0x1f < (array_start - array_end) - 8U) {
        // WARNING: Subroutine does not return
        invalid_parameter_no_info_no_return(array_info[2] - array_start, current_count + 0x27);
      }
    }
    free(array_end);
  }
  *array_info = new_array_start;
  array_info[1] = new_array_start + new_element_count * 0x28;
  array_info[2] = new_capacity * 0x28 + new_array_start;
  return result_ptr;
}





// 函数: void FUN_180189190(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_180189190(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  FUN_18018b350(param_2,param_3,param_3,param_4,0xfffffffffffffffe);
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  FUN_180189c50(param_2 + 0x30,param_3 + 0x30);
  return;
}



longlong FUN_1801891f0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar8 = *param_1;
  lVar3 = param_1[1] - lVar8 >> 6;
  if (lVar3 == 0x3ffffffffffffff) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    lVar8 = (*pcVar2)();
    return lVar8;
  }
  uVar1 = lVar3 + 1;
  uVar4 = param_1[2] - lVar8 >> 6;
  uVar10 = uVar1;
  if ((uVar4 <= 0x3ffffffffffffff - (uVar4 >> 1)) && (uVar10 = (uVar4 >> 1) + uVar4, uVar10 < uVar1)
     ) {
    uVar10 = uVar1;
  }
  lVar3 = uVar10 << 6;
  if (0x3ffffffffffffff < uVar10) {
    lVar3 = -1;
  }
  lVar3 = FUN_180067110(lVar3);
  uVar4 = param_2 - lVar8 & 0xffffffffffffffc0;
  lVar6 = uVar4 + lVar3;
  FUN_18018b350(lVar6,param_3);
  *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_3 + 0x20);
  *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  FUN_180189c50(lVar6 + 0x30,param_3 + 0x30);
  lVar8 = param_1[1];
  if (param_2 == lVar8) {
    lVar7 = lVar3;
    for (lVar6 = *param_1; lVar9 = lVar7, lVar6 != lVar8; lVar6 = lVar6 + 0x40) {
      FUN_18018b350(lVar7,lVar6);
      *(undefined1 *)(lVar7 + 0x20) = *(undefined1 *)(lVar6 + 0x20);
      *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(lVar6 + 0x28);
      FUN_180189c50(lVar7 + 0x30,lVar6 + 0x30);
      lVar7 = lVar7 + 0x40;
    }
    for (; lVar9 != lVar7; lVar9 = lVar9 + 0x40) {
      FUN_180187950(lVar9);
    }
  }
  else {
    FUN_1801899b0(param_1,*param_1,param_2,lVar3,lVar6);
    FUN_1801899b0(param_1,param_2,param_1[1],lVar6 + 0x40,lVar3);
  }
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar6 = param_1[1];
    if (lVar8 != lVar6) {
      do {
        FUN_180187950(lVar8);
        lVar8 = lVar8 + 0x40;
      } while (lVar8 != lVar6);
      lVar8 = *param_1;
    }
    uVar5 = param_1[2] - lVar8 & 0xffffffffffffffc0;
    lVar6 = lVar8;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar6,uVar5 + 0x27);
      }
    }
    free(lVar6);
  }
  *param_1 = lVar3;
  param_1[1] = uVar1 * 0x40 + lVar3;
  param_1[2] = uVar10 * 0x40 + lVar3;
  return uVar4 + lVar3;
}





// 函数: void FUN_180189470(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189470(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 auStackX_18 [2];
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar6 = lVar3 - lVar4 >> 3;
  uVar2 = param_1[2] - lVar4 >> 3;
  auStackX_18[0] = param_3;
  if (uVar2 < param_2) {
    if (0x1fffffffffffffff < param_2) {
      FUN_180189990();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar7 = param_2;
    if ((uVar2 <= 0x1fffffffffffffff - (uVar2 >> 1)) &&
       (uVar7 = (uVar2 >> 1) + uVar2, uVar7 < param_2)) {
      uVar7 = param_2;
    }
    lVar3 = uVar7 * 8;
    if (0x1fffffffffffffff < uVar7) {
      lVar3 = -1;
    }
    lVar3 = FUN_180067110(lVar3);
    puVar5 = (undefined8 *)(lVar3 + uVar6 * 8);
    for (lVar4 = param_2 - uVar6; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    func_0x00018018a000(auStackX_18,*param_1,param_1[1],param_4,0,uVar8);
                    // WARNING: Subroutine does not return
    memmove(lVar3);
  }
  if (uVar6 < param_2) {
    if (param_2 - uVar6 == 0) {
      param_1[1] = lVar3;
      return;
    }
                    // WARNING: Subroutine does not return
    memset(lVar3,0,(param_2 - uVar6) * 8);
  }
  if (param_2 != uVar6) {
    param_1[1] = lVar4 + param_2 * 8;
  }
  return;
}





// 函数: void FUN_180189600(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)
void FUN_180189600(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStackX_20 [8];
  
  lVar3 = *param_1;
  param_3 = param_3 - param_2;
  uVar2 = param_1[1] - lVar3 >> 2;
  uVar5 = param_3 >> 2;
  uVar4 = param_1[2] - lVar3 >> 2;
  auStackX_20[0] = param_4;
  if (uVar5 <= uVar4) {
    if (uVar5 <= uVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,param_2,param_3);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar3,param_2,uVar2 * 4);
  }
  if (0x3fffffffffffffff < uVar5) {
LAB_180189786:
    FUN_180189990();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = uVar5;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) && (uVar2 = (uVar4 >> 1) + uVar4, uVar2 < uVar5))
  {
    uVar2 = uVar5;
  }
  if (lVar3 != 0) {
    lVar6 = lVar3;
    if (0xfff < uVar4 * 4) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar6,uVar4 * 4 + 0x27);
      }
    }
    free(lVar6);
  }
  lVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar2 != 0) {
    if (0x3fffffffffffffff < uVar2) goto LAB_180189786;
    lVar3 = FUN_180067110(uVar2 * 4);
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = uVar2 * 4 + lVar3;
  }
  func_0x00018018a000(auStackX_20);
                    // WARNING: Subroutine does not return
  memmove(lVar3,param_2,param_3);
}





// 函数: void FUN_180189900(longlong *param_1,longlong *param_2)
void FUN_180189900(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != param_2) {
    do {
      lVar1 = *param_1;
      if (lVar1 != 0) {
        uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
        lVar2 = lVar1;
        if (0xfff < uVar3) {
          lVar2 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
          }
        }
        free(lVar2);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return;
}





// 函数: void FUN_18018990f(longlong *param_1,longlong *param_2)
void FUN_18018990f(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
      lVar2 = lVar1;
      if (0xfff < uVar3) {
        lVar2 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
        }
      }
      free(lVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while (param_1 != param_2);
  return;
}





// 函数: void FUN_18018997c(void)
void FUN_18018997c(void)

{
  return;
}





// 函数: void FUN_18018997d(void)
void FUN_18018997d(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}





// 函数: void FUN_180189990(void)
void FUN_180189990(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z(&UNK_180a0aaa8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 *
FUN_1801899b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_2 != param_3) {
    puVar6 = param_2 + 7;
    do {
      *(undefined8 *)(param_4 + 4) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      uVar2 = *(undefined4 *)((longlong)puVar6 + -0x34);
      uVar3 = *(undefined4 *)(puVar6 + -6);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -0x2c);
      *param_4 = *(undefined4 *)(puVar6 + -7);
      param_4[1] = uVar2;
      param_4[2] = uVar3;
      param_4[3] = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar6 + -0x24);
      uVar3 = *(undefined4 *)(puVar6 + -4);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -0x1c);
      param_4[4] = *(undefined4 *)(puVar6 + -5);
      param_4[5] = uVar2;
      param_4[6] = uVar3;
      param_4[7] = uVar4;
      puVar6[-5] = 0;
      puVar6[-4] = 0xf;
      *(undefined1 *)(puVar6 + -7) = 0;
      *(undefined1 *)(param_4 + 8) = *(undefined1 *)(puVar6 + -3);
      param_4[9] = *(undefined4 *)((longlong)puVar6 + -0x14);
      param_4[10] = *(undefined4 *)(puVar6 + -2);
      puVar1 = (undefined8 *)(param_4 + 0xc);
      *puVar1 = 0;
      *(undefined8 *)(param_4 + 0xe) = 0;
      uVar5 = FUN_180188490();
      *puVar1 = uVar5;
      uVar5 = *puVar1;
      *puVar1 = puVar6[-1];
      puVar6[-1] = uVar5;
      uVar5 = *(undefined8 *)(param_4 + 0xe);
      *(undefined8 *)(param_4 + 0xe) = *puVar6;
      *puVar6 = uVar5;
      param_4 = param_4 + 0x10;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 8;
    } while (puVar1 != param_3);
  }
  return param_4;
}



undefined8 *
FUN_180189aa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = param_4;
  if (param_1 != param_2) {
    uVar3 = 0;
    puVar2 = param_1 + 2;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = puVar2[-2];
      param_3[1] = puVar2[-1];
      param_3[2] = *puVar2;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  FUN_180189900(param_3,param_3,param_2,uVar3,0xfffffffffffffffe,param_3,param_3,param_4);
  return param_3;
}



undefined8 * FUN_180189b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    do {
      param_3[2] = 0;
      param_3[3] = 0;
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      uVar1 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar1;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
    } while (param_1 != param_2);
  }
  return param_3;
}



undefined8 * FUN_180189bc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 3;
    do {
      param_3[2] = 0;
      param_3[3] = 0;
      uVar2 = puVar3[-2];
      *param_3 = puVar3[-3];
      param_3[1] = uVar2;
      uVar2 = *puVar3;
      param_3[2] = puVar3[-1];
      param_3[3] = uVar2;
      puVar3[-1] = 0;
      *puVar3 = 0xf;
      *(undefined1 *)(puVar3 + -3) = 0;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)puVar3 + 0xc);
      param_3 = param_3 + 5;
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 5;
    } while (puVar1 != param_2);
  }
  return param_3;
}



longlong * FUN_180189c50(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = FUN_180188490();
  *param_1 = lVar3;
  uVar6 = FUN_18018a8c0(param_1,*(undefined8 *)(*param_2 + 8),*param_1,(ulonglong)param_1 & 0xff,
                        uVar6);
  *(undefined8 *)(*param_1 + 8) = uVar6;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    do {
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar4;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    *plVar1 = (longlong)plVar4;
    lVar3 = *(longlong *)(*param_1 + 8);
    do {
      lVar5 = lVar3;
      lVar3 = *(longlong *)(lVar5 + 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
    *(longlong *)(*param_1 + 0x10) = lVar5;
  }
  else {
    *plVar1 = (longlong)plVar1;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}





// 函数: void FUN_180189d00(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189d00(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_180189e60(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189e60(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189ee0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189ee0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a0a9b0,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189f10(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189f10(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a0aa20,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189f40(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189f40(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a0aa58,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189f70(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189f70(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a0aa40,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189fa0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189fa0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a0aa90,&uStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180189fd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180189fd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_18 = func_0x0001801836e0(*param_2);
  uStackX_20 = param_4;
  FUN_180061f80(_DAT_180c86928,0,0xffffffff00000000,0xd,&UNK_180a0aa70,&uStackX_18);
  return;
}





// 函数: void FUN_18018a010(longlong *param_1)
void FUN_18018a010(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    FUN_180187950(lVar2);
  }
  return;
}





// 函数: void FUN_18018a050(longlong *param_1)
void FUN_18018a050(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_180067070(lVar2);
  }
  return;
}





// 函数: void FUN_18018a0b0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)
void FUN_18018a0b0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}





