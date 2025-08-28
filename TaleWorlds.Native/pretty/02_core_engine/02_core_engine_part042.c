#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part042.c - 核心引擎内存管理函数
// 本文件包含14个函数，主要用于内存分配、数据结构管理和容器操作

/**
 * 验证指针数组的有效性
 * 检查数组中的每个指针是否为非空，如果发现空指针则触发错误处理
 * 
 * @param array_info 包含数组起始和结束地址的结构体指针
 */
void validate_pointer_array(longlong *array_info)
{
  longlong *current_ptr;
  
  // 遍历指针数组，检查每个指针的有效性
  for (current_ptr = (longlong *)*array_info; current_ptr != (longlong *)array_info[1]; current_ptr = current_ptr + 4) {
    if (*current_ptr != 0) {
      // 发现无效指针，触发错误处理（该函数不会返回）
      trigger_memory_error();
    }
  }
  
  // 检查数组起始指针是否为空
  if (*array_info == 0) {
    return;
  }
  
  // 起始指针无效，触发错误处理（该函数不会返回）
  trigger_memory_error();
}



/**
 * 创建并初始化数据容器
 * 分配内存并设置容器的相关函数指针和数据
 * 
 * @param container_ptr 指向容器指针的指针
 * @param source_data 源数据指针
 * @return 初始化后的容器指针
 */
undefined8 *create_data_container(undefined8 *container_ptr, undefined8 *source_data)
{
  undefined1 byte_data;
  undefined8 data_field1;
  undefined8 data_field2;
  undefined8 data_field3;
  undefined8 *new_container;
  
  // 从源数据提取字段信息
  data_field1 = *source_data;
  byte_data = *(undefined1 *)(source_data + 1);
  data_field2 = source_data[2];
  source_data[2] = 0;  // 清空源数据字段
  data_field3 = source_data[3];
  source_data[3] = 0;  // 清空源数据字段
  
  // 设置容器的函数指针
  container_ptr[2] = get_container_data_field1;
  container_ptr[3] = get_container_data_field2;
  
  // 分配新容器的内存
  new_container = (undefined8 *)allocate_container_memory(memory_allocator_ptr, 0x20, 8, default_memory_flags, 0xfffffffffffffffe);
  
  // 初始化新容器
  *new_container = data_field1;
  *(undefined1 *)(new_container + 1) = byte_data;
  new_container[2] = data_field2;
  new_container[3] = data_field3;
  *container_ptr = new_container;
  
  // 调用源数据的析构函数（如果存在）
  if ((longlong *)source_data[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)source_data[3] + 0x38))();
  }
  if ((longlong *)source_data[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)source_data[2] + 0x38))();
  }
  
  return container_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081220(undefined8 param_1,longlong *param_2,int param_3)
void FUN_180081220(undefined8 param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a998;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 4;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&DAT_1809ffc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,3);
  FUN_180082aa0(uVar1,param_2);
  *(undefined8 *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(undefined1 *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081350(undefined8 param_1,longlong *param_2,int param_3)
void FUN_180081350(undefined8 param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a998;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 2;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&DAT_1809ffc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,3);
  FUN_180082c20(uVar1,param_2);
  *(undefined8 *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(undefined1 *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081480(undefined8 param_1,longlong *param_2,undefined4 param_3)
void FUN_180081480(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&DAT_1809ffc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,3);
  FUN_1800828d0(param_1,param_2);
  uStack_a8 = 1;
  *(undefined8 *)(*param_2 + 0x10) = uVar1;
  *(undefined4 *)(*param_2 + 0x18) = param_3;
  *(undefined4 *)(*param_2 + 0x1c) = param_3;
  *(undefined1 *)(*param_2 + 0x20) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081590(undefined8 param_1,longlong *param_2,undefined4 param_3)
void FUN_180081590(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a998;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&DAT_1809ffc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,0x20);
  FUN_1800828d0(uVar1,param_2);
  *(undefined8 *)(*param_2 + 0x10) = uVar2;
  *(undefined4 *)(*param_2 + 0x18) = param_3;
  *(undefined4 *)(*param_2 + 0x1c) = param_3;
  *(undefined1 *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800816c0(longlong param_1,longlong *param_2)
void FUN_1800816c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_180083520(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081870(longlong param_1,longlong *param_2)
void FUN_180081870(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_1800836a0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081a20(longlong param_1,longlong *param_2)
void FUN_180081a20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar4 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar1 = _DAT_180c8a998;
  if (iVar4 != 0) {
    iVar4 = iVar4 * 0x18;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar3 = FUN_18062b1e0(_DAT_180c8ed18,iVar4,0x10,0x1e);
    FUN_180083820(uVar1,&plStack_b0);
    plVar2 = plStack_b0;
    plStack_b0[2] = lVar3;
    *(int *)(plStack_b0 + 3) = iVar4;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar4;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar2;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081bd0(longlong param_1,longlong *param_2)
void FUN_180081bd0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 8;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_1800839a0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081d80(longlong param_1,longlong *param_2)
void FUN_180081d80(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_180082aa0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081f30(longlong param_1,longlong *param_2)
void FUN_180081f30(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_1800828d0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800820e0(longlong param_1,longlong *param_2)
void FUN_1800820e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = _DAT_180c8a998;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 2;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0();
    puStack_98 = &UNK_18098bcb0;
    lVar4 = FUN_18062b1e0(_DAT_180c8ed18,iVar1,0x10,0x1e);
    FUN_180082c20(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((longlong)plStack_b0 + 0x1c) = iVar1;
    *(undefined1 *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)*param_2;
    *param_2 = (longlong)plVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(param_1 + 8),
           (longlong)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (longlong *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180082290(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180082290(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar7 >> 5) < param_2) {
    puVar10 = (undefined8 *)*param_1;
    lVar4 = (longlong)puVar7 - (longlong)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (undefined8 *)0x0;
    if (uVar9 != 0) {
      puVar5 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (longlong)puVar5 - (longlong)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = 0;
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = 0;
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -8 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(undefined4 *)(lVar4 + (longlong)puVar10);
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        *(undefined4 *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar8 = (longlong *)*param_1;
    if (plVar8 != (longlong *)param_1[1]) {
      do {
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != (longlong *)param_1[1]);
      plVar8 = (longlong *)*param_1;
    }
    if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *param_1 = (longlong)puVar5;
    param_1[1] = (longlong)(puVar6 + param_2 * 4);
    param_1[2] = (longlong)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800824a0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800824a0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar7 >> 5) < param_2) {
    puVar10 = (undefined8 *)*param_1;
    lVar4 = (longlong)puVar7 - (longlong)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (undefined8 *)0x0;
    if (uVar9 != 0) {
      puVar5 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (longlong)puVar5 - (longlong)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = 0;
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = 0;
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -0x10 + (longlong)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(undefined8 *)(lVar4 + -8 + (longlong)puVar10);
        *(undefined8 *)(lVar4 + -8 + (longlong)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(undefined4 *)(lVar4 + (longlong)puVar10);
        *(undefined4 *)(lVar4 + (longlong)puVar10) = *(undefined4 *)puVar10;
        *(undefined4 *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar8 = (longlong *)*param_1;
    if (plVar8 != (longlong *)param_1[1]) {
      do {
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != (longlong *)param_1[1]);
      plVar8 = (longlong *)*param_1;
    }
    if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *param_1 = (longlong)puVar5;
    param_1[1] = (longlong)(puVar6 + param_2 * 4);
    param_1[2] = (longlong)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined4 *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



