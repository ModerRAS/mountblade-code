#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part252.c - 核心引擎模块第252部分
// 本文件包含内存管理、数据结构操作和排序算法相关函数

// 函数: void reallocate_and_copy_data_structure(int64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 重新分配数据结构内存并复制数据
void reallocate_and_copy_data_structure(int64_t *data_structure_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int64_t old_start;
  int64_t old_end;
  int64_t new_memory;
  uint64_t *dest_ptr;
  int64_t item_count;
  int64_t saved_start;
  int64_t saved_end;
  int64_t saved_capacity;
  int32_t saved_flags;
  
  old_end = data_structure_ptr[1];
  old_start = *data_structure_ptr;
  saved_start = 0;
  saved_end = 0;
  new_memory = 0;
  saved_capacity = 0;
  saved_flags = (int32_t)data_structure_ptr[3];
  item_count = (old_end - old_start) / 0x28;
  if (item_count != 0) {
    new_memory = allocate_memory_blocks(_GLOBAL_MEMORY_POOL, item_count * 0x28, (int8_t)saved_flags, param_4,
                          0xfffffffffffffffe);
  }
  item_count = new_memory + item_count * 0x28;
  if (old_start != old_end) {
    dest_ptr = (uint64_t *)(new_memory + 8);
    do {
      dest_ptr[-1] = &VTABLE_DESTRUCTOR_1;
      *dest_ptr = 0;
      *(int32_t *)(dest_ptr + 1) = 0;
      dest_ptr[-1] = &VTABLE_DESTRUCTOR_2;
      dest_ptr[2] = 0;
      *dest_ptr = 0;
      *(int32_t *)(dest_ptr + 1) = 0;
      *(int32_t *)(dest_ptr + 1) = *(int32_t *)(old_start + 0x10);
      *dest_ptr = *(uint64_t *)(old_start + 8);
      *(int32_t *)((int64_t)dest_ptr + 0x14) = *(int32_t *)(old_start + 0x1c);
      *(int32_t *)(dest_ptr + 2) = *(int32_t *)(old_start + 0x18);
      *(int32_t *)(old_start + 0x10) = 0;
      *(uint64_t *)(old_start + 8) = 0;
      *(uint64_t *)(old_start + 0x18) = 0;
      dest_ptr[3] = *(uint64_t *)(old_start + 0x20);
      old_start = old_start + 0x28;
      dest_ptr = dest_ptr + 5;
    } while (old_start != old_end);
  }
  saved_start = *data_structure_ptr;
  *data_structure_ptr = new_memory;
  saved_end = data_structure_ptr[1];
  data_structure_ptr[1] = item_count;
  saved_capacity = data_structure_ptr[2];
  data_structure_ptr[2] = item_count;
  old_end = data_structure_ptr[3];
  *(int32_t *)(data_structure_ptr + 3) = saved_flags;
  saved_flags = (int)old_end;
  cleanup_temporary_data(&saved_start);
  return;
}



// 函数: int64_t dynamic_array_insert_and_expand(int64_t *array_ptr, uint64_t *insert_pos, uint64_t *new_item)
// 功能: 在动态数组中插入元素并自动扩展容量
int64_t dynamic_array_insert_and_expand(int64_t *array_ptr, uint64_t *insert_pos, uint64_t *new_item)

{
  uint64_t current_capacity;
  code *error_handler;
  int64_t current_size;
  uint64_t *new_array;
  uint64_t new_capacity;
  int64_t old_start;
  uint64_t required_capacity;
  uint64_t *old_data;
  uint64_t *old_end;
  uint64_t *copy_dest;
  int64_t insert_index;
  uint64_t final_capacity;
  
  old_start = *array_ptr;
  insert_index = (int64_t)insert_pos - old_start >> 3;
  current_size = array_ptr[1] - old_start >> 3;
  if (current_size == 0x1fffffffffffffff) {
    handle_array_overflow();
    error_handler = (code *)swi(3);
    old_start = (*error_handler)();
    return old_start;
  }
  current_capacity = current_size + 1;
  required_capacity = array_ptr[2] - old_start >> 3;
  final_capacity = current_capacity;
  if ((required_capacity <= 0x1fffffffffffffff - (required_capacity >> 1)) &&
     (final_capacity = (required_capacity >> 1) + required_capacity, final_capacity < current_capacity)) {
    final_capacity = current_capacity;
  }
  old_start = final_capacity * 8;
  if (0x1fffffffffffffff < final_capacity) {
    old_start = -1;
  }
  new_array = (uint64_t *)allocate_memory(old_start);
  new_array[insert_index] = *new_item;
  old_end = (uint64_t *)array_ptr[1];
  old_data = (uint64_t *)*array_ptr;
  copy_dest = new_array;
  if (insert_pos == old_end) {
    for (; old_data != old_end; old_data = old_data + 1) {
      *copy_dest = *old_data;
      copy_dest = copy_dest + 1;
    }
  }
  else {
    for (; old_data != insert_pos; old_data = old_data + 1) {
      *copy_dest = *old_data;
      copy_dest = copy_dest + 1;
    }
    old_data = (uint64_t *)array_ptr[1];
    old_end = new_array + insert_index + 1;
    for (; insert_pos != old_data; insert_pos = insert_pos + 1) {
      *old_end = *insert_pos;
      old_end = old_end + 1;
    }
  }
  resize_dynamic_array(array_ptr, new_array, current_capacity, final_capacity);
  return *array_ptr + insert_index * 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180218a80(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  CoreEngineDataTransformer();
  lVar4 = (*(int64_t *)(param_2 + 0x28) - *(int64_t *)(param_2 + 0x20)) / 0x28;
  uVar2 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar2;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0x28,uVar2 & 0xff,param_4,uVar8);
  }
  *(int64_t *)(param_1 + 0x20) = lVar3;
  *(int64_t *)(param_1 + 0x28) = lVar3;
  *(int64_t *)(param_1 + 0x30) = lVar3 + lVar4 * 0x28;
  lVar4 = *(int64_t *)(param_1 + 0x20);
  lVar3 = *(int64_t *)(param_2 + 0x28);
  lVar5 = *(int64_t *)(param_2 + 0x20);
  if (lVar5 != lVar3) {
    lVar6 = lVar5 - lVar4;
    lVar7 = lVar4 - lVar5;
    do {
      CoreEngineDataTransformer(lVar4,lVar5);
      lVar1 = lVar7 + lVar5;
      *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(lVar1 + 0x20 + lVar6);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar3);
  }
  *(int64_t *)(param_1 + 0x28) = lVar4;
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(param_2 + 0x40);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_2 + 0x44);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_2 + 0x48);
  *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(param_2 + 0x4c);
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(param_2 + 0x50);
  *(int32_t *)(param_1 + 0x54) = *(int32_t *)(param_2 + 0x54);
  *(int8_t *)(param_1 + 0x58) = *(int8_t *)(param_2 + 0x58);
  *(int8_t *)(param_1 + 0x59) = *(int8_t *)(param_2 + 0x59);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180218c30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180218c30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((uint64_t)(param_1[2] - (int64_t)puVar7 >> 4) < param_2) {
    puVar10 = (uint64_t *)*param_1;
    lVar2 = (int64_t)puVar7 - (int64_t)puVar10 >> 4;
    uVar9 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar2 + param_2) {
      uVar9 = lVar2 + param_2;
    }
    puVar3 = (uint64_t *)0x0;
    if (uVar9 != 0) {
      puVar3 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 << 4,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar10 = (uint64_t *)*param_1;
    }
    puVar4 = puVar3;
    if (puVar10 != puVar7) {
      lVar2 = (int64_t)puVar10 - (int64_t)puVar3;
      do {
        puVar4[1] = 0;
        *puVar4 = *(uint64_t *)(lVar2 + (int64_t)puVar4);
        plVar8 = *(int64_t **)(lVar2 + 8 + (int64_t)puVar4);
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8);
        }
        plVar1 = (int64_t *)puVar4[1];
        puVar4[1] = plVar8;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        puVar4 = puVar4 + 2;
      } while ((uint64_t *)(lVar2 + (int64_t)puVar4) != puVar7);
    }
    if (param_2 != 0) {
      plVar8 = puVar4 + 1;
      uVar6 = param_2;
      do {
        *plVar8 = 0;
        plVar8[-1] = 0;
        plVar1 = (int64_t *)*plVar8;
        *plVar8 = 0;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        plVar8 = plVar8 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar4 = puVar4 + param_2 * 2;
    lVar2 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar2) {
      do {
        if (*(int64_t **)(lVar5 + 8) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar5 + 8) + 0x38))();
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != lVar2);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar5);
    }
    *param_1 = (int64_t)puVar3;
    param_1[2] = (int64_t)(puVar3 + uVar9 * 2);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        puVar7[1] = 0;
        *puVar7 = 0;
        plVar8 = (int64_t *)puVar7[1];
        puVar7[1] = 0;
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x38))();
        }
        puVar7 = puVar7 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    puVar4 = puVar7 + param_2 * 2;
  }
  param_1[1] = (int64_t)puVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180218e40(uint64_t *param_1,int64_t param_2)
void FUN_180218e40(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  lVar6 = ((int64_t)puVar7 - (int64_t)puVar3) / 0x28;
  puVar2 = (uint64_t *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_180218ece;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 0x28,*(int8_t *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
LAB_180218ece:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (int64_t)puVar2 - (int64_t)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *puVar5 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar4 + 0x10 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 1);
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = *puVar3;
      *(int32_t *)(lVar4 + 0x14 + (int64_t)puVar3) = *(int32_t *)((int64_t)puVar3 + 0x14);
      *(int32_t *)(lVar4 + 0x10 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 2);
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(int32_t *)(lVar4 + 0x18 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 3);
      puVar5 = puVar5 + 5;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 5;
    } while (puVar1 != puVar7);
  }
  CoreEngineDataTransformer(puVar5,param_2);
  *(int32_t *)(puVar5 + 4) = *(int32_t *)(param_2 + 0x20);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &system_data_buffer_ptr;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puVar3[1] = 0;
      *(int32_t *)(puVar3 + 3) = 0;
      *puVar3 = &system_state_ptr;
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar7);
    puVar3 = (uint64_t *)*param_1;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 5;
    param_1[2] = puVar2 + lVar6 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180219020(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180219020(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t *puVar11;
  
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar9 = ((int64_t)puVar11 - (int64_t)puVar5) / 0x60;
  puVar4 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1802190a9;
  }
  puVar4 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 0x60,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_1802190a9:
  puVar7 = puVar4;
  if (puVar5 != puVar11) {
    lVar10 = (int64_t)puVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 0xe;
    do {
      *puVar7 = &system_state_ptr;
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = 0;
      *puVar7 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar10 + -0x20 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = puVar5[-10];
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -0xc);
      *(int32_t *)(lVar10 + -0x1c + (int64_t)puVar5) = puVar5[-7];
      *(int32_t *)(lVar10 + -0x20 + (int64_t)puVar5) = puVar5[-8];
      puVar5[-10] = 0;
      *(uint64_t *)(puVar5 + -0xc) = 0;
      *(uint64_t *)(puVar5 + -8) = 0;
      puVar6 = (uint64_t *)((int64_t)puVar5 + lVar10 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar10 + (int64_t)puVar5);
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      *(int32_t *)(lVar10 + 8 + (int64_t)puVar5) = puVar5[2];
      *(int32_t *)(lVar10 + 0xc + (int64_t)puVar5) = puVar5[3];
      *(int32_t *)(lVar10 + 0x10 + (int64_t)puVar5) = puVar5[4];
      *(int32_t *)(lVar10 + 0x14 + (int64_t)puVar5) = puVar5[5];
      *(int32_t *)(lVar10 + 0x18 + (int64_t)puVar5) = puVar5[6];
      *(int32_t *)(lVar10 + 0x1c + (int64_t)puVar5) = puVar5[7];
      *(int8_t *)(lVar10 + 0x20 + (int64_t)puVar5) = *(int8_t *)(puVar5 + 8);
      *(int8_t *)(lVar10 + 0x21 + (int64_t)puVar5) = *(int8_t *)((int64_t)puVar5 + 0x21);
      puVar7 = puVar7 + 0xc;
      puVar1 = puVar5 + 10;
      puVar5 = puVar5 + 0x18;
    } while (puVar1 != puVar11);
  }
  FUN_180218a80(puVar7,param_2);
  lVar10 = param_1[1];
  lVar8 = *param_1;
  if (lVar8 != lVar10) {
    do {
      FUN_180211720(lVar8);
      lVar8 = lVar8 + 0x60;
    } while (lVar8 != lVar10);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar7 + 0xc);
    param_1[2] = (int64_t)(puVar4 + lVar9 * 0xc);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar8);
}





// 函数: void FUN_180219260(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_180219260(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t lStackX_8;
  int64_t *plStack_38;
  int64_t *plStack_30;
  
  lVar3 = (int64_t)param_2 - (int64_t)param_1;
  while (lVar3 = lVar3 >> 3, 0x20 < lVar3) {
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        uVar6 = (int64_t)param_2 - (int64_t)param_1 >> 3;
        lVar3 = (int64_t)param_2 - (int64_t)param_1 >> 4;
        if (0 < lVar3) {
          lVar9 = (int64_t)(uVar6 - 1) >> 1;
          do {
            lVar2 = param_1[lVar3 + -1];
            lVar3 = lVar3 + -1;
            lVar10 = lVar3;
            while (lVar10 < lVar9) {
              lVar11 = lVar10 * 2 + 2;
              if (*(int *)(param_1[lVar10 * 2 + 1] + 0x10) != 0) {
                if (*(int *)(param_1[lVar11] + 0x10) != 0) {
                  pbVar4 = *(byte **)(param_1[lVar10 * 2 + 1] + 8);
                  lVar14 = *(int64_t *)(param_1[lVar11] + 8) - (int64_t)pbVar4;
                  do {
                    bVar1 = *pbVar4;
                    uVar5 = (uint)pbVar4[lVar14];
                    if (bVar1 != uVar5) break;
                    pbVar4 = pbVar4 + 1;
                  } while (uVar5 != 0);
                  if ((int)(bVar1 - uVar5) < 1) goto LAB_18021943e;
                }
                lVar11 = lVar10 * 2 + 1;
              }
LAB_18021943e:
              param_1[lVar10] = param_1[lVar11];
              lVar10 = lVar11;
            }
            if ((lVar10 == lVar9) && ((uVar6 & 1) == 0)) {
              param_1[lVar10] = param_1[uVar6 - 1];
              lVar10 = uVar6 - 1;
            }
            while (lVar3 < lVar10) {
              lVar14 = lVar10 + -1 >> 1;
              lVar11 = param_1[lVar14];
              if (*(int *)(lVar2 + 0x10) == 0) break;
              if (*(int *)(lVar11 + 0x10) != 0) {
                pbVar4 = *(byte **)(lVar2 + 8);
                lVar12 = *(int64_t *)(lVar11 + 8) - (int64_t)pbVar4;
                do {
                  bVar1 = *pbVar4;
                  uVar5 = (uint)pbVar4[lVar12];
                  if (bVar1 != uVar5) break;
                  pbVar4 = pbVar4 + 1;
                } while (uVar5 != 0);
                if ((int)(bVar1 - uVar5) < 1) break;
              }
              param_1[lVar10] = lVar11;
              lVar10 = lVar14;
            }
            param_1[lVar10] = lVar2;
          } while (0 < lVar3);
        }
        if ((int64_t)uVar6 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (int64_t)uVar6) {
            lStackX_8 = *param_2;
            *param_2 = *param_1;
            FUN_180219eb0(param_1,0,(int64_t)param_2 - (int64_t)param_1 >> 3,&lStackX_8,param_4);
          }
          param_2 = param_2 + -1;
          uVar6 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < (int64_t)uVar6);
        return;
      }
      break;
    }
    FUN_1802199b0(&plStack_38,param_1,param_2,param_4);
    plVar7 = plStack_30;
    plVar8 = plStack_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((int64_t)((int64_t)plStack_38 - (int64_t)param_1 & 0xfffffffffffffff8U) <
        (int64_t)((int64_t)param_2 - (int64_t)plStack_30 & 0xfffffffffffffff8U)) {
      FUN_180219260(param_1,plStack_38,param_3,param_4);
      plVar8 = param_2;
      param_1 = plVar7;
    }
    else {
      FUN_180219260(plStack_30,param_2,param_3,param_4);
    }
    param_2 = plVar8;
    lVar3 = (int64_t)plVar8 - (int64_t)param_1;
  }
  if (((1 < lVar3) && (param_1 != param_2)) && (plVar8 = param_1 + 1, plVar8 != param_2)) {
    plVar7 = param_1 + 2;
    do {
      lVar3 = *plVar8;
      plVar13 = plVar8;
      if (*(int *)(*param_1 + 0x10) != 0) {
        if (*(int *)(lVar3 + 0x10) == 0) {
LAB_18021937f:
          func_0x00018018a000(&lStackX_8);
                    // WARNING: Subroutine does not return
          memmove((int64_t)plVar7 - ((int64_t)plVar8 - (int64_t)param_1),param_1);
        }
        pbVar4 = *(byte **)(*param_1 + 8);
        lVar9 = *(int64_t *)(lVar3 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar9];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if (0 < (int)(bVar1 - uVar5)) goto LAB_18021937f;
      }
      while( true ) {
        lVar9 = plVar13[-1];
        if (*(int *)(lVar9 + 0x10) == 0) break;
        if (*(int *)(lVar3 + 0x10) != 0) {
          pbVar4 = *(byte **)(lVar9 + 8);
          lVar10 = *(int64_t *)(lVar3 + 8) - (int64_t)pbVar4;
          do {
            bVar1 = *pbVar4;
            uVar5 = (uint)pbVar4[lVar10];
            if (bVar1 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          if ((int)(bVar1 - uVar5) < 1) break;
        }
        *plVar13 = lVar9;
        plVar13 = plVar13 + -1;
      }
      *plVar13 = lVar3;
      plVar8 = plVar8 + 1;
      plVar7 = plVar7 + 1;
    } while (plVar8 != param_2);
  }
  return;
}





// 函数: void FUN_1802193c8(void)
void FUN_1802193c8(void)

{
  int64_t lVar1;
  byte bVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t unaff_R13;
  uint64_t *unaff_R14;
  int64_t lVar10;
  uint64_t uStack0000000000000070;
  
  lVar10 = (int64_t)(unaff_RBP - 1) >> 1;
  do {
    lVar3 = unaff_R14[unaff_RSI + -1];
    unaff_RSI = unaff_RSI + -1;
    lVar1 = unaff_RSI;
    while (lVar1 < lVar10) {
      lVar7 = lVar1 * 2 + 2;
      if (*(int *)(unaff_R14[lVar1 * 2 + 1] + 0x10) != 0) {
        if (*(int *)(unaff_R14[lVar7] + 0x10) != 0) {
          pbVar4 = *(byte **)(unaff_R14[lVar1 * 2 + 1] + 8);
          lVar9 = *(int64_t *)(unaff_R14[lVar7] + 8) - (int64_t)pbVar4;
          do {
            bVar2 = *pbVar4;
            uVar5 = (uint)pbVar4[lVar9];
            if (bVar2 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          if ((int)(bVar2 - uVar5) < 1) goto LAB_18021943e;
        }
        lVar7 = lVar1 * 2 + 1;
      }
LAB_18021943e:
      unaff_R14[lVar1] = unaff_R14[lVar7];
      lVar1 = lVar7;
    }
    if ((lVar1 == lVar10) && ((unaff_RBP & 1) == 0)) {
      unaff_R14[lVar1] = unaff_R14[unaff_RBP - 1];
      lVar1 = unaff_RBP - 1;
    }
    while (unaff_RSI < lVar1) {
      lVar9 = lVar1 + -1 >> 1;
      lVar7 = unaff_R14[lVar9];
      if (*(int *)(lVar3 + 0x10) == 0) break;
      if (*(int *)(lVar7 + 0x10) != 0) {
        pbVar4 = *(byte **)(lVar3 + 8);
        lVar8 = *(int64_t *)(lVar7 + 8) - (int64_t)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar8];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar2 - uVar5) < 1) break;
      }
      unaff_R14[lVar1] = lVar7;
      lVar1 = lVar9;
    }
    unaff_R14[lVar1] = lVar3;
    if (unaff_RSI < 1) {
      if (1 < (int64_t)unaff_RBP) {
        puVar6 = (uint64_t *)(unaff_R13 + -8);
        do {
          if (1 < (int64_t)unaff_RBP) {
            uStack0000000000000070 = *puVar6;
            *puVar6 = *unaff_R14;
            FUN_180219eb0();
          }
          puVar6 = puVar6 + -1;
          unaff_RBP = (8 - (int64_t)unaff_R14) + (int64_t)puVar6 >> 3;
        } while (1 < (int64_t)unaff_RBP);
      }
      return;
    }
  } while( true );
}





// 函数: void FUN_1802194d6(void)
void FUN_1802194d6(void)

{
  int64_t unaff_RBP;
  uint64_t *puVar1;
  int64_t unaff_R13;
  uint64_t *unaff_R14;
  uint64_t uStack0000000000000070;
  
  if (1 < unaff_RBP) {
    puVar1 = (uint64_t *)(unaff_R13 + -8);
    do {
      if (1 < unaff_RBP) {
        uStack0000000000000070 = *puVar1;
        *puVar1 = *unaff_R14;
        FUN_180219eb0();
      }
      puVar1 = puVar1 + -1;
      unaff_RBP = (8 - (int64_t)unaff_R14) + (int64_t)puVar1 >> 3;
    } while (1 < unaff_RBP);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802195b0(uint64_t *param_1,int64_t param_2)
void FUN_1802195b0(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  lVar6 = ((int64_t)puVar7 - (int64_t)puVar3) / 0x28;
  puVar2 = (uint64_t *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_18021963e;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 0x28,*(int8_t *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
LAB_18021963e:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (int64_t)puVar2 - (int64_t)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *puVar5 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar4 + 0x10 + (int64_t)puVar3) = 0;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 1);
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = *puVar3;
      *(int32_t *)(lVar4 + 0x14 + (int64_t)puVar3) = *(int32_t *)((int64_t)puVar3 + 0x14);
      *(int32_t *)(lVar4 + 0x10 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 2);
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(uint64_t *)(lVar4 + 0x18 + (int64_t)puVar3) = puVar3[3];
      puVar5 = puVar5 + 5;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 5;
    } while (puVar1 != puVar7);
  }
  CoreEngineDataTransformer(puVar5,param_2);
  puVar5[4] = *(uint64_t *)(param_2 + 0x20);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &system_data_buffer_ptr;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puVar3[1] = 0;
      *(int32_t *)(puVar3 + 3) = 0;
      *puVar3 = &system_state_ptr;
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar7);
    puVar3 = (uint64_t *)*param_1;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 5;
    param_1[2] = puVar2 + lVar6 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802197a0(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1802197a0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  
  lVar8 = param_3 - param_2;
  uVar4 = lVar8 / 0x28;
  lVar5 = *param_1;
  if ((uint64_t)((param_1[2] - lVar5) / 0x28) < uVar4) {
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0x28,(char)param_1[3]);
    }
    FUN_180219e30(param_2,param_3,lVar5);
    puVar2 = (uint64_t *)param_1[1];
    puVar7 = (uint64_t *)*param_1;
    if (puVar7 != puVar2) {
      do {
        *puVar7 = &system_data_buffer_ptr;
        if (puVar7[1] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puVar7[1] = 0;
        *(int32_t *)(puVar7 + 3) = 0;
        *puVar7 = &system_state_ptr;
        puVar7 = puVar7 + 5;
      } while (puVar7 != puVar2);
      puVar7 = (uint64_t *)*param_1;
    }
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar7);
    }
    *param_1 = lVar5;
    lVar5 = uVar4 * 0x28 + lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
  }
  else {
    uVar3 = (param_1[1] - lVar5) / 0x28;
    if (uVar3 < uVar4) {
      lVar1 = param_2 + uVar3 * 0x28;
      FUN_180219d60(param_2,lVar1,lVar5,lVar8,0xfffffffffffffffe);
      lVar5 = FUN_180219e30(lVar1,param_3,param_1[1]);
      param_1[1] = lVar5;
    }
    else {
      puVar6 = (uint64_t *)FUN_180219d60(param_2,param_3,lVar5,lVar8,0xfffffffffffffffe);
      puVar2 = (uint64_t *)param_1[1];
      for (puVar7 = puVar6; puVar7 != puVar2; puVar7 = puVar7 + 5) {
        *puVar7 = &system_data_buffer_ptr;
        if (puVar7[1] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puVar7[1] = 0;
        *(int32_t *)(puVar7 + 3) = 0;
        *puVar7 = &system_state_ptr;
      }
      param_1[1] = (int64_t)puVar6;
    }
  }
  return;
}





