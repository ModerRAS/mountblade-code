#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part046.c - 14 个函数

// 函数: void SerializeTransformData - 序列化变换数据
// 将变换数据序列化到缓冲区中，包括位置、旋转、缩放等信息
void SerializeTransformData(longlong source_buffer, longlong *target_buffer)

  int8_t *byte_data_ptr;
  int32_t *word_data_ptr;
  int32_t temp_word1;
  int32_t temp_word2;
  int32_t temp_word3;
  int32_t temp_word4;
  int32_t *buffer_ptr;
  
  buffer_ptr = (int32_t *)target_buffer[1];
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    buffer_ptr = (int32_t *)target_buffer[1];
  }
  *buffer_ptr = 1;
  buffer_ptr = (int32_t *)(target_buffer[1] + 4);
  target_buffer[1] = (longlong)buffer_ptr;
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 0x11) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (0x10 - *target_buffer));
    buffer_ptr = (int32_t *)target_buffer[1];
  }
  temp_word1 = *(int32_t *)(source_buffer + 0x1c);
  temp_word2 = *(int32_t *)(source_buffer + 0x20);
  temp_word3 = *(int32_t *)(source_buffer + 0x24);
  *buffer_ptr = *(int32_t *)(source_buffer + 0x18);
  buffer_ptr[1] = temp_word1;
  buffer_ptr[2] = temp_word2;
  buffer_ptr[3] = temp_word3;
  byte_data_ptr = (int8_t *)(target_buffer[1] + 0x10);
  target_buffer[1] = (longlong)byte_data_ptr;
  temp_word1 = *(int8_t *)(source_buffer + 0x28);
  if ((ulonglong)((*target_buffer - (longlong)byte_data_ptr) + target_buffer[2]) < 2) {
    FUN_180639bf0(target_buffer,byte_data_ptr + (1 - *target_buffer));
    byte_data_ptr = (int8_t *)target_buffer[1];
  }
  *byte_data_ptr = temp_word1;
  buffer_ptr = (int32_t *)(target_buffer[1] + 1);
  target_buffer[1] = (longlong)buffer_ptr;
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 0x11) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (0x10 - *target_buffer));
    buffer_ptr = (int32_t *)target_buffer[1];
  }
  temp_word1 = *(int32_t *)(source_buffer + 0xc);
  temp_word2 = *(int32_t *)(source_buffer + 0x10);
  temp_word3 = *(int32_t *)(source_buffer + 0x14);
  *buffer_ptr = *(int32_t *)(source_buffer + 8);
  buffer_ptr[1] = temp_word1;
  buffer_ptr[2] = temp_word2;
  buffer_ptr[3] = temp_word3;
  buffer_ptr = (int32_t *)(target_buffer[1] + 0x10);
  target_buffer[1] = (longlong)buffer_ptr;
  temp_word1 = *(int32_t *)(source_buffer + 0x2c);
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    buffer_ptr = (int32_t *)target_buffer[1];
  }
  *buffer_ptr = temp_word1;
  buffer_ptr = (int32_t *)(target_buffer[1] + 4);
  target_buffer[1] = (longlong)buffer_ptr;
  temp_word1 = *(int32_t *)(source_buffer + 0x30);
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    buffer_ptr = (int32_t *)target_buffer[1];
  }
  *buffer_ptr = temp_word1;
  buffer_ptr = (int32_t *)(target_buffer[1] + 4);
  target_buffer[1] = (longlong)buffer_ptr;
  temp_word1 = *(int32_t *)(source_buffer + 0x34);
  if ((ulonglong)((*target_buffer - (longlong)buffer_ptr) + target_buffer[2]) < 5) {
    FUN_180639bf0(target_buffer,(longlong)buffer_ptr + (4 - *target_buffer));
    *(int32_t *)target_buffer[1] = temp_word1;
  }
  else {
    *buffer_ptr = temp_word1;
  }
  target_buffer[1] = target_buffer[1] + 4;
  return;
}





// 函数: void ClearTransformArray - 清理变换数组
// 清理变换数组中的所有元素，重置指针和数据
void ClearTransformArray(longlong *array_container)

{
  longlong *current_element;
  longlong *array_end;
  
  current_element = (longlong *)array_container[1];
  array_end = (longlong *)*array_container;
  while( true ) {
    if (current_element == array_end) {
      if (*array_container != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)((longlong)current_element + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)((longlong)current_element + 0x12) = 0;
    if (*(longlong *)((longlong)current_element + 0x1a) != 0) break;
    *(uint64_t *)((longlong)current_element + 0x1a) = 0;
    if (*current_element != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *current_element = 0;
    if (current_element[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    current_element[1] = 0;
    current_element = (longlong *)((longlong)current_element + 0x24);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void ResizeTransformArray - 调整变换数组大小
// 调整变换数组的大小到指定的元素数量
void ResizeTransformArray(longlong *array_container, ulonglong new_size)

{
  longlong *current_end;
  ulonglong current_size;
  longlong *new_end;
  longlong array_start;
  longlong size_difference;
  
  current_end = (longlong *)array_container[1];
  array_start = *array_container;
  current_size = ((longlong)current_end - array_start) / 0x24;
  if (current_size < new_size) {
    size_difference = new_size - current_size;
    FUN_180074c20(array_container,size_difference,(longlong)current_end - array_start,size_difference,0xfffffffffffffffe);
  }
  else {
    new_end = (longlong *)(new_size * 0x24 + array_start);
    if (new_end != current_end) {
      do {
        if (*(longlong *)((longlong)new_end + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)new_end + 0x12) = 0;
        if (*(longlong *)((longlong)new_end + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)new_end + 0x1a) = 0;
        if (*new_end != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *new_end = 0;
        if (new_end[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        new_end[1] = 0;
        new_end = (longlong *)((longlong)new_end + 0x24);
      } while (new_end != current_end);
      array_start = *array_container;
    }
    array_container[1] = new_size * 0x24 + array_start;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ReallocateTransformArray - 重新分配变换数组内存
// 重新分配变换数组的内存，处理数据的复制和清理
void ReallocateTransformArray(uint64_t *array_container, ulonglong additional_elements)

{
  longlong *new_array;
  longlong *old_array;
  uint64_t *old_start;
  longlong *copy_source;
  longlong *copy_dest;
  ulonglong current_capacity;
  uint64_t *current_end;
  longlong current_used;
  ulonglong new_capacity;
  
  current_end = (uint64_t *)array_container[1];
  if ((ulonglong)((array_container[2] - (longlong)current_end) / 0x24) < additional_elements) {
    old_start = (uint64_t *)*array_container;
    current_used = ((longlong)current_end - (longlong)old_start) / 0x24;
    new_capacity = current_used * 2;
    if (current_used == 0) {
      new_capacity = 1;
    }
    if (new_capacity < current_used + additional_elements) {
      new_capacity = current_used + additional_elements;
    }
    new_array = (longlong *)0x0;
    if (new_capacity != 0) {
      new_array = (longlong *)
               FUN_18062b420(system_memory_pool_ptr,new_capacity * 0x24,*(int8_t *)(array_container + 3),current_end,
                             0xfffffffffffffffe);
      current_end = (uint64_t *)array_container[1];
      old_start = (uint64_t *)*array_container;
    }
    copy_dest = new_array;
    if (old_start != current_end) {
      current_used = (longlong)new_array - (longlong)old_start;
      copy_source = (longlong *)((longlong)old_start + 0x1a);
      do {
        *(int16_t *)(current_used + -10 + (longlong)copy_source) = *(int16_t *)((longlong)copy_source + -10);
        if (*(longlong *)((longlong)copy_source + -0x12) == 0) {
          *(uint64_t *)(current_used + -0x12 + (longlong)copy_source) = 0;
        }
        else {
          *(longlong *)(current_used + -0x12 + (longlong)copy_source) = *(longlong *)((longlong)copy_source + -0x12);
          *(uint64_t *)((longlong)copy_source + -0x12) = 0;
        }
        if (*(longlong *)((longlong)copy_source + -0x1a) == 0) {
          *copy_dest = 0;
        }
        else {
          *copy_dest = *(longlong *)((longlong)copy_source + -0x1a);
          *(uint64_t *)((longlong)copy_source + -0x1a) = 0;
        }
        *(int16_t *)((longlong)copy_source + -10) = 0;
        *(short *)(current_used + 8 + (longlong)copy_source) = (short)copy_source[1];
        if (*copy_source == 0) {
          *(uint64_t *)((longlong)copy_source + current_used) = 0;
        }
        else {
          *(longlong *)((longlong)copy_source + current_used) = *copy_source;
          *copy_source = 0;
        }
        if (copy_source[-1] == 0) {
          *(uint64_t *)(current_used + -8 + (longlong)copy_source) = 0;
        }
        else {
          *(longlong *)(current_used + -8 + (longlong)copy_source) = copy_source[-1];
          copy_source[-1] = 0;
        }
        *(int16_t *)(copy_source + 1) = 0;
        copy_dest = (longlong *)((longlong)copy_dest + 0x24);
        old_start = (uint64_t *)((longlong)copy_source + 10);
        copy_source = (longlong *)((longlong)copy_source + 0x24);
      } while (old_start != current_end);
    }
    if (additional_elements != 0) {
      current_end = (uint64_t *)((longlong)copy_dest + 0x1a);
      current_capacity = additional_elements;
      do {
        current_end[-1] = 0;
        *current_end = 0;
        *(int16_t *)(current_end + 1) = 0;
        *(int16_t *)((longlong)current_end + -10) = 0;
        *(uint64_t *)((longlong)current_end + -0x1a) = 0;
        *(uint64_t *)((longlong)current_end + -0x12) = 0;
        *(int16_t *)(current_end + 1) = 0;
        current_end[-1] = 0;
        *current_end = 0;
        current_end = (uint64_t *)((longlong)current_end + 0x24);
        current_capacity = current_capacity - 1;
      } while (current_capacity != 0);
    }
    copy_source = (longlong *)array_container[1];
    old_array = (longlong *)*array_container;
    if (old_array != copy_source) {
      do {
        if (*(longlong *)((longlong)old_array + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)old_array + 0x12) = 0;
        if (*(longlong *)((longlong)old_array + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)old_array + 0x1a) = 0;
        if (*old_array != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *old_array = 0;
        if (old_array[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        old_array[1] = 0;
        old_array = (longlong *)((longlong)old_array + 0x24);
      } while (old_array != copy_source);
      old_array = (longlong *)*array_container;
    }
    if (old_array != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(old_array);
    }
    *array_container = new_array;
    array_container[1] = (longlong)copy_dest + additional_elements * 0x24;
    array_container[2] = (longlong)new_array + new_capacity * 0x24;
  }
  else {
    if (additional_elements != 0) {
      old_start = (uint64_t *)((longlong)current_end + 0x1a);
      new_capacity = additional_elements;
      do {
        current_end[1] = 0;
        current_end[2] = 0;
        current_end[3] = 0;
        *(int32_t *)(current_end + 4) = 0;
        *(int16_t *)((longlong)old_start + -10) = 0;
        *current_end = 0;
        *(uint64_t *)((longlong)old_start + -0x12) = 0;
        *(int16_t *)(old_start + 1) = 0;
        old_start[-1] = 0;
        *old_start = 0;
        current_end = (uint64_t *)((longlong)current_end + 0x24);
        old_start = (uint64_t *)((longlong)old_start + 0x24);
        new_capacity = new_capacity - 1;
      } while (new_capacity != 0);
      current_end = (uint64_t *)array_container[1];
    }
    array_container[1] = (longlong)current_end + additional_elements * 0x24;
  }
  return;
}





// 函数: void ResetTransformPointers - 重置变换指针
// 重置变换相关的指针，确保它们为空
void ResetTransformPointers(longlong *transform_data)

{
  if (*transform_data != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *transform_data = 0;
  if (transform_data[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  transform_data[1] = 0;
  return;
}



// 函数: uint64_t * InitializeTransformVTable - 初始化变换虚函数表
// 初始化变换对象的虚函数表指针
uint64_t * InitializeTransformVTable(uint64_t *object, ulonglong flags, uint64_t param3, uint64_t param_4)

{
  *object = &VTABLE_TransformObject;
  if ((flags & 1) != 0) {
    free(object,0x38,param3,param4,0xfffffffffffffffe);
  }
  return object;
}



// 函数: uint64_t * CleanupTransformMemory - 清理变换内存
// 清理变换对象的内存，根据标志决定是否释放
uint64_t * CleanupTransformMemory(uint64_t *object, ulonglong flags)

{
  *object = &VTABLE_TransformObject;
  if ((flags & 1) != 0) {
    free(object,8);
  }
  return object;
}



// 函数: uint64_t * SetTransformString - 设置变换字符串
// 为变换对象设置字符串值
uint64_t * SetTransformString(uint64_t param1, uint64_t *string_ptr, uint64_t param3, uint64_t param_4)

{
  *string_ptr = &STRING_Empty;
  string_ptr[1] = 0;
  *(int32_t *)(string_ptr + 2) = 0;
  *string_ptr = &STRING_Constant;
  string_ptr[1] = string_ptr + 3;
  *(int8_t *)(string_ptr + 3) = 0;
  *(int32_t *)(string_ptr + 2) = 7;
  strcpy_s(string_ptr[1],0x80,&STRING_DefaultValue,param_4,0,0xfffffffffffffffe);
  return string_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t * InitializeComplexTransformObject - 初始化复杂变换对象
// 初始化一个复杂的变换对象，包含多个属性和状态
uint64_t * InitializeComplexTransformObject(uint64_t *object, char param2, char param3)

{
  longlong *temp_ptr;
  byte byte_flag;
  longlong *cleanup_ptr1;
  longlong *cleanup_ptr2;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &unknown_var_3432_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int8_t *)((longlong)param_1 + 0xb2) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &unknown_var_7328_ptr;
  func_0x000180086550(param_1 + 0x19);
  *(int32_t *)(param_1 + 0x1e) = 0;
  LOCK();
  *(int32_t *)(param_1 + 0x1d) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((longlong)param_1 + 0xec) = 0;
  UNLOCK();
  *(int32_t *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = param_1;
  param_1[0x3d] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(int32_t *)(param_1 + 0x46) = 3;
  param_1[0x4d] = 0;
  *(int32_t *)((longlong)param_1 + 0x2a4) = 0;
  *(uint64_t *)((longlong)param_1 + 0x274) = 0;
  *(uint64_t *)((longlong)param_1 + 0x27c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x284) = 0;
  *(uint64_t *)((longlong)param_1 + 0x28c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x294) = 0;
  *(uint64_t *)((longlong)param_1 + 0x29c) = 0;
  *(int16_t *)(param_1 + 0x5d) = 0;
  param_1[0x5c] = 0;
  *(int32_t *)((longlong)param_1 + 0x2ec) = 0xffffffff;
  *(int16_t *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  *(int32_t *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0xfb;
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) | param_2 << 2;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  *(int32_t *)((longlong)param_1 + 0xbc) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(int32_t *)((longlong)param_1 + 0xc4) = 0;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) & 0xfe;
  *(int8_t *)((longlong)param_1 + 0xfc) = 0;
  plVar4 = (longlong *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  if (param_3 == '\0') {
    *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0xdf;
  }
  else {
    *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) | 0x20;
  }
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0xbf;
  *(int8_t *)((longlong)param_1 + 0xff) = 1;
  plVar4 = (longlong *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(int8_t *)((longlong)param_1 + 0xf4) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(int8_t *)((longlong)param_1 + 0xf7) = 0;
  *(byte *)((longlong)param_1 + 0xfd) = *(byte *)((longlong)param_1 + 0xfd) & 0x6d;
  plVar3 = (longlong *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  bVar2 = *(byte *)((longlong)param_1 + 0xfd) & 0xf7;
  *(byte *)((longlong)param_1 + 0xfd) = bVar2;
  param_1[0x47] = 0x3f8000003f800000;
  param_1[0x48] = 0x3f8000003f800000;
  param_1[0x49] = 0x3f8000003f800000;
  param_1[0x4a] = 0x3f8000003f800000;
  *(int32_t *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f80000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f80000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  *(byte *)((longlong)param_1 + 0xfd) = bVar2 | 1;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 2;
  *(int32_t *)(param_1 + 0x4e) = 0x21;
  *(int32_t *)((longlong)param_1 + 0x104) = 0x80;
  *(int8_t *)((longlong)param_1 + 0xf6) = 0;
  *(int16_t *)((longlong)param_1 + 0xfa) = 0;
  *(uint64_t *)((longlong)param_1 + 0x204) = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x5b) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x2dc) = 0xbf800000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  *(int32_t *)((longlong)param_1 + 0xcc) = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  *(int32_t *)((longlong)param_1 + 0xd4) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x1b) = 0;
  *(int32_t *)((longlong)param_1 + 0xdc) = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int32_t *)((longlong)param_1 + 0xe4) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x21) = 0xffffffff;
  param_1[0x5a] = 0;
  if (param_2 == '\0') {
    plVar1 = (longlong *)param_1[0x42];
    param_1[0x42] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,0);
    }
  }
  *(int8_t *)(param_1 + 0x1f) = 0;
  *(int32_t *)(param_1 + 0x34) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x35) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x1ac) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x3a) = 0xffffffff;
  plVar3 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,9,plVar4,plVar3);
  *plVar3 = (longlong)&unknown_var_3552_ptr;
  *plVar3 = (longlong)&unknown_var_3696_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&unknown_var_7224_ptr;
  plVar3[4] = (longlong)&unknown_var_720_ptr;
  plVar3[5] = 0;
  *(int32_t *)(plVar3 + 6) = 0;
  plVar3[4] = (longlong)&unknown_var_3456_ptr;
  plVar3[7] = 0;
  plVar3[5] = 0;
  *(int32_t *)(plVar3 + 6) = 0;
  *(int32_t *)(plVar3 + 8) = 0xffffffff;
  *(int32_t *)((longlong)plVar3 + 0x44) = 0x3f000000;
  *(int32_t *)(plVar3 + 9) = 0x3f000000;
  *(int32_t *)((longlong)plVar3 + 0x4c) = 0x3f4ccccd;
  *(int32_t *)(plVar3 + 10) = 0x3f000000;
  *(int32_t *)((longlong)plVar3 + 0x54) = 0x3e99999a;
  *(int32_t *)(plVar3 + 0xb) = 0x411cf5c3;
  *(int32_t *)((longlong)plVar3 + 0x5c) = 0x3f800000;
  *(int32_t *)(plVar3 + 0xc) = 0xbf800000;
  *(int32_t *)((longlong)plVar3 + 100) = 0x3f800000;
  *(int32_t *)(plVar3 + 0xd) = 0x3f000000;
  *(int32_t *)((longlong)plVar3 + 0x6c) = 0x3f800000;
  *(int32_t *)(plVar3 + 2) = 0x3f800000;
  *(int32_t *)((longlong)plVar3 + 0x14) = 0x78;
  *(int16_t *)(plVar3 + 3) = 0;
  *(int8_t *)((longlong)plVar3 + 0x1a) = 0;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar4 = (longlong *)param_1[0x4d];
  param_1[0x4d] = plVar3;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) & 0xf3;
  param_1[0x3b] = 0;
  LOCK();
  *(int8_t *)((longlong)param_1 + 0xf9) = 0;
  UNLOCK();
  param_1[0x59] = 0;
  *(int8_t *)((longlong)param_1 + 0xf5) = 0;
  param_1[0x4b] = 0;
  return param_1;
}



// 函数: uint64_t ReleaseTransformResources - 释放变换资源
// 释放变换对象相关的资源，根据标志决定是否释放内存
uint64_t ReleaseTransformResources(uint64_t object, ulonglong flags)

{
  FUN_1800756e0();
  if ((flags & 1) != 0) {
    free(object,0x300);
  }
  return object;
}



// 函数: int8_t CheckTransformStatus - 检查变换状态
// 检查变换对象的状态，返回状态信息
int8_t CheckTransformStatus(longlong transform_data, uint64_t param2, uint64_t param3, uint64_t param_4)

{
  int8_t status_result;
  uint64_t error_code;
  void *stack_data;
  longlong check_result;
  
  error_code = 0xfffffffffffffffe;
  FUN_1806279c0(&stack_data);
  status_result = FUN_180063510(transform_data + 0x218,&stack_data,param3,param4,error_code);
  stack_data = &VTABLE_TransformObject6;
  if (check_result != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return status_result;
}



// WARNING: Removing unreachable block (ram,0x000180276fbd)



// 函数: void ProcessTransformData - 处理变换数据
// 处理变换数据，计算边界框和相关信息
void ProcessTransformData(longlong transform_data, uint64_t *data_source)

{
  uint64_t *transform_array;
  longlong *transform_manager;
  longlong element_data;
  int32_t word_data1;
  int32_t word_data2;
  int32_t word_data3;
  uint64_t quad_data;
  char has_transform;
  longlong transform_address;
  longlong *array_iterator;
  uint transform_flags;
  float min_x, min_y, min_z;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_e8 [184];
  uint64_t uStack_30;
  
  uVar11 = *(uint *)(param_1 + 0x100) & 0xfbffffff;
  *(uint *)(param_1 + 0x100) = uVar11;
  uStack_30 = 0x180075655;
  cVar8 = FUN_1800861a0(param_2);
  if (cVar8 == '\0') {
    *(uint *)(param_1 + 0x100) = uVar11 | 0x4000000;
  }
  uVar7 = param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  *(uint64_t *)(param_1 + 0x120) = *param_2;
  *(uint64_t *)(param_1 + 0x128) = uVar7;
  uVar7 = param_2[3];
  *(uint64_t *)(param_1 + 0x130) = param_2[2];
  *(uint64_t *)(param_1 + 0x138) = uVar7;
  uVar4 = *(int32_t *)((longlong)param_2 + 0x24);
  uVar5 = *(int32_t *)(param_2 + 5);
  uVar6 = *(int32_t *)((longlong)param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x140) = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_1 + 0x144) = uVar4;
  *(int32_t *)(param_1 + 0x148) = uVar5;
  *(int32_t *)(param_1 + 0x14c) = uVar6;
  uVar4 = *(int32_t *)((longlong)param_2 + 0x34);
  uVar5 = *(int32_t *)(param_2 + 7);
  uVar6 = *(int32_t *)((longlong)param_2 + 0x3c);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(param_2 + 6);
  *(int32_t *)(param_1 + 0x154) = uVar4;
  *(int32_t *)(param_1 + 0x158) = uVar5;
  *(int32_t *)(param_1 + 0x15c) = uVar6;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 0x160) == (code *)&unknown_var_6368_ptr) {
      puVar1 = (uint64_t *)((longlong)plVar2 + 0x214);
      *(int32_t *)((longlong)plVar2 + 0x244) = 0;
      if (plVar2[8] - plVar2[7] >> 4 == 0) {
        *puVar1 = 0;
        *(uint64_t *)((longlong)plVar2 + 0x21c) = 0;
        *(uint64_t *)((longlong)plVar2 + 0x224) = 0;
        *(uint64_t *)((longlong)plVar2 + 0x22c) = 0;
        *(uint64_t *)((longlong)plVar2 + 0x234) = 0;
        *(uint64_t *)((longlong)plVar2 + 0x23c) = 0;
      }
      else {
        *puVar1 = 0x4cbebc204cbebc20;
        *(uint64_t *)((longlong)plVar2 + 0x21c) = 0x7f7fffff4cbebc20;
        *(int32_t *)((longlong)plVar2 + 0x234) = 0;
        *(int32_t *)(plVar2 + 0x47) = 0;
        *(int32_t *)((longlong)plVar2 + 0x23c) = 0;
        *(int32_t *)(plVar2 + 0x48) = 0x7f7fffff;
        *(uint64_t *)((longlong)plVar2 + 0x224) = 0xccbebc20ccbebc20;
        *(uint64_t *)((longlong)plVar2 + 0x22c) = 0x7f7fffffccbebc20;
        plVar10 = (longlong *)plVar2[7];
        if (plVar10 < (longlong *)plVar2[8]) {
          do {
            lVar3 = *plVar10;
            if (((*(byte *)(lVar3 + 0x100) & 0x20) == 0) || (plVar2[5] == 0)) {
              lVar9 = lVar3 + 0x120;
            }
            else {
              lVar9 = FUN_180194940(lVar3 + 0x120,auStack_e8,plVar2[5] + 0x70);
            }
            FUN_18063a240(puVar1,lVar3 + 0x274,lVar9);
            plVar10 = plVar10 + 2;
          } while (plVar10 < (longlong *)plVar2[8]);
        }
        if (((plVar2[8] - plVar2[7] & 0xfffffffffffffff0U) == 0x10) &&
           (lVar3 = *(longlong *)plVar2[7], (*(uint *)(lVar3 + 0x100) & 0x4000000) == 0)) {
          uVar7 = *(uint64_t *)(lVar3 + 0x29c);
          *(uint64_t *)((longlong)plVar2 + 0x234) = *(uint64_t *)(lVar3 + 0x294);
          *(uint64_t *)((longlong)plVar2 + 0x23c) = uVar7;
          *(int32_t *)((longlong)plVar2 + 0x244) =
               *(int32_t *)(*(longlong *)plVar2[7] + 0x2a4);
        }
        else {
          FUN_1800b9f60(puVar1);
          plVar10 = (longlong *)plVar2[7];
          fVar14 = 0.0;
          if (plVar10 < (longlong *)plVar2[8]) {
            do {
              lVar3 = *plVar10;
              if ((*(uint *)(lVar3 + 0x100) & 0x4000000) == 0) {
                fVar15 = *(float *)(lVar3 + 0x294);
                fVar16 = *(float *)(lVar3 + 0x298);
                fVar17 = *(float *)(lVar3 + 0x29c);
                fVar12 = *(float *)(lVar3 + 0x2a4);
              }
              else {
                fVar12 = *(float *)(lVar3 + 0x298);
                fVar17 = *(float *)(lVar3 + 0x294);
                fVar13 = *(float *)(lVar3 + 0x29c);
                fVar15 = *(float *)(lVar3 + 0x130) * fVar12 + *(float *)(lVar3 + 0x120) * fVar17 +
                         *(float *)(lVar3 + 0x140) * fVar13 + *(float *)(lVar3 + 0x150);
                fVar16 = *(float *)(lVar3 + 0x134) * fVar12 + *(float *)(lVar3 + 0x124) * fVar17 +
                         *(float *)(lVar3 + 0x144) * fVar13 + *(float *)(lVar3 + 0x154);
                fVar17 = *(float *)(lVar3 + 0x138) * fVar12 + *(float *)(lVar3 + 0x128) * fVar17 +
                         *(float *)(lVar3 + 0x148) * fVar13 + *(float *)(lVar3 + 0x158);
                fVar12 = *(float *)(lVar3 + 0x140) * *(float *)(lVar3 + 0x140) +
                         *(float *)(lVar3 + 0x144) * *(float *)(lVar3 + 0x144) +
                         *(float *)(lVar3 + 0x148) * *(float *)(lVar3 + 0x148);
                fVar13 = *(float *)(lVar3 + 0x130) * *(float *)(lVar3 + 0x130) +
                         *(float *)(lVar3 + 0x134) * *(float *)(lVar3 + 0x134) +
                         *(float *)(lVar3 + 0x138) * *(float *)(lVar3 + 0x138);
                fVar18 = *(float *)(lVar3 + 0x120) * *(float *)(lVar3 + 0x120) +
                         *(float *)(lVar3 + 0x124) * *(float *)(lVar3 + 0x124) +
                         *(float *)(lVar3 + 0x128) * *(float *)(lVar3 + 0x128);
                if (fVar18 <= fVar13) {
                  if (fVar12 <= fVar13) {
                    fVar12 = fVar13;
                  }
                }
                else if (fVar12 <= fVar18) {
                  fVar12 = fVar18;
                }
                if ((fVar12 - 1.0 <= -1e-06) || (1e-06 <= fVar12 - 1.0)) {
                  fVar12 = SQRT(fVar12) * *(float *)(lVar3 + 0x2a4);
                }
                else {
                  fVar12 = *(float *)(lVar3 + 0x2a4) * 1.0;
                }
              }
              fVar17 = *(float *)((longlong)plVar2 + 0x23c) - fVar17;
              fVar15 = *(float *)((longlong)plVar2 + 0x234) - fVar15;
              fVar16 = (*(float *)(plVar2 + 0x47) - fVar16) * (*(float *)(plVar2 + 0x47) - fVar16) +
                       fVar15 * fVar15 + fVar17 * fVar17;
              fVar15 = fVar14 - fVar12;
              if (fVar15 <= 0.0) {
                fVar15 = 0.0;
              }
              if (fVar15 * fVar15 < fVar16) {
                fVar14 = SQRT(fVar16) + fVar12;
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 < (longlong *)plVar2[8]);
            if ((0.0 < fVar14) &&
               (fVar14 < *(float *)((longlong)plVar2 + 0x244) ||
                fVar14 == *(float *)((longlong)plVar2 + 0x244))) {
              *(float *)((longlong)plVar2 + 0x244) = fVar14;
            }
          }
        }
      }
      return;
    }
    uStack_30 = 0x1800756d4;
    (**(code **)(*plVar2 + 0x160))();
  }
  return;
}





// 函数: void DestroyTransformObject - 销毁变换对象
// 销毁变换对象，释放所有相关资源
void DestroyTransformObject(uint64_t *object)

{
  byte *flag_byte;
  longlong *resource_ptr;
  longlong resource_handle;
  uint64_t error_code;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7328_ptr;
  param_1[0x39] = 0;
  if (param_1[0x59] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x59] = 0;
  plVar2 = (longlong *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (longlong *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (param_1[0x5a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x5a] = 0;
  plVar2 = (longlong *)param_1[0x4b];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    if (plVar2[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar2[2] = 0;
    if (plVar2[7] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar2[2] = 0;
    plVar2[7] = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar2);
  }
  param_1[0x4b] = 0;
  if (*(char *)((longlong)param_1 + 0xf9) != '\0') {
    if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[0x3b] = 0;
    LOCK();
    *(int8_t *)((longlong)param_1 + 0xf9) = 0;
    UNLOCK();
  }
  if (param_1[0x3d] != 0) {
    FUN_180080060();
    param_1[0x3d] = 0;
    if (param_1[0x3e] != 0) {
      pbVar1 = (byte *)(param_1[0x3e] + 0xfe);
      *pbVar1 = *pbVar1 & 0xfb;
    }
  }
  plVar2 = (longlong *)param_1[0x42];
  param_1[0x42] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  lVar3 = param_1[0x3c];
  if (lVar3 != 0) {
    FUN_1808fc8a8(lVar3,0x18,0x10,FUN_18007bb70,uVar4,lVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  param_1[0x3c] = 0;
  FUN_180080870(param_1 + 0x5e);
  FUN_1800809a0(param_1 + 0x5c);
  if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4d] + 0x38))();
  }
  FUN_18005d580();
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x42] + 0x38))();
  }
  if (param_1[0x3d] != 0) {
    FUN_180080060();
  }
  if ((longlong *)param_1[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x38))();
  }
  if ((longlong *)param_1[0x37] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x37] + 0x38))();
  }
  if ((longlong *)param_1[0x36] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x36] + 0x38))();
  }
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x38))();
  }
  *object = &VTABLE_TransformObject3;
  object[2] = &STRING_Empty;
  *object = &VTABLE_TransformObject2;
  *object = &VTABLE_TransformObject;
  return;
}

// 常量定义:
// VTABLE_TransformObject - 变换对象虚函数表
// VTABLE_TransformObject2 - 变换对象虚函数表2
// VTABLE_TransformObject3 - 变换对象虚函数表3
// VTABLE_TransformObject4 - 变换对象虚函数表4
// VTABLE_TransformObject5 - 变换对象虚函数表5
// VTABLE_TransformObject6 - 变换对象虚函数表6
// STRING_Empty - 空字符串
// STRING_Constant - 常量字符串
// STRING_DefaultValue - 默认值字符串
// FUNC_180277350 - 变换处理函数






