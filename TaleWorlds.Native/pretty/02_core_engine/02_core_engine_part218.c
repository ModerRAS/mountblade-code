#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part218.c - 核心引擎模块第218部分
// 包含19个函数，主要涉及内存管理、容器操作、对象生命周期管理等功能

// 函数: 释放容器中的对象资源
// 作用: 遍历容器中的所有对象，调用它们的析构函数，然后释放容器资源
void cleanup_container_objects(longlong *container_ptr)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((longlong *)plVar2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[1] + 0x38))();
    }
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 清理全局对象池
// 作用: 清理全局对象池中的所有对象，释放相关资源
void cleanup_global_object_pool(void)

{
  longlong global_pool_base;
  longlong *pool_start;
  longlong *pool_end;
  ulonglong index;
  uint counter;
  ulonglong total_items;
  
  global_pool_base = global_object_pool_base;
  index = 0;
  pool_end = *(longlong **)(global_object_pool_base + 0x58);
  pool_start = *(longlong **)(global_object_pool_base + 0x50);
  total_items = index;
  if (((longlong)plVar3 - (longlong)plVar2) / 0x18 != 0) {
    do {
      plVar3 = *(longlong **)(uVar4 + (longlong)plVar2);
      *(undefined8 *)(uVar4 + (longlong)plVar2) = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = *(longlong **)(uVar4 + 8 + *(longlong *)(lVar1 + 0x50));
      *(undefined8 *)(uVar4 + 8 + *(longlong *)(lVar1 + 0x50)) = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x18;
      plVar3 = *(longlong **)(lVar1 + 0x58);
      plVar2 = *(longlong **)(lVar1 + 0x50);
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(((longlong)plVar3 - (longlong)plVar2) / 0x18));
  }
  if (plVar2 == plVar3) {
    *(longlong **)(lVar1 + 0x58) = plVar2;
  }
  else {
    do {
      if ((longlong *)plVar2[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[1] + 0x38))();
      }
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar3);
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x50);
  }
  return;
}





// 函数: 安全释放容器对象
// 作用: 安全地释放容器中的对象，避免内存泄漏
void safe_cleanup_container_objects(longlong *container_ptr)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((longlong *)plVar2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[1] + 0x38))();
    }
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 向容器添加对象
// 作用: 将新对象添加到容器中，必要时扩容
void add_object_to_container(longlong *container_ptr, longlong *object_ptr)

{
  undefined8 *container_end;
  longlong *current_obj;
  longlong *container_start;
  undefined8 *src_ptr;
  longlong *new_obj_ptr;
  longlong *old_obj_ptr;
  undefined8 *temp_ptr1;
  undefined8 *temp_ptr2;
  longlong new_capacity;
  
  container_end = (undefined8 *)container_ptr[1];
  container_start = (undefined8 *)*container_ptr;
  new_capacity = ((longlong)container_end - (longlong)container_start) / 0x18;
  new_obj_ptr = (longlong *)0x0;
  if (new_capacity == 0) {
    new_capacity = 1;
  }
  else {
    new_capacity = new_capacity * 2;
    if (new_capacity == 0) goto CAPACITY_CALCULATED;
  }
  new_obj_ptr = (longlong *)
           allocate_container_memory(global_memory_allocator,new_capacity * 0x18,(char)container_ptr[3],container_start,0xfffffffffffffffe);
  container_end = (undefined8 *)container_ptr[1];
  container_start = (undefined8 *)*container_ptr;
CAPACITY_CALCULATED:
  new_obj_ptr = new_obj_ptr;
  if (container_start != container_end) {
    src_ptr = container_start + 1;
    do {
      *new_obj_ptr = src_ptr[-1];
      src_ptr[-1] = 0;
      *(undefined8 *)((longlong)src_ptr + ((longlong)new_obj_ptr - (longlong)container_start)) = *src_ptr;
      *src_ptr = 0;
      *(undefined4 *)(((longlong)new_obj_ptr - (longlong)container_start) + 8 + (longlong)src_ptr) =
           *(undefined4 *)(src_ptr + 1);
      new_obj_ptr = new_obj_ptr + 3;
      temp_ptr1 = src_ptr + 2;
      src_ptr = src_ptr + 3;
    } while (temp_ptr1 != container_end);
  }
  old_obj_ptr = (longlong *)*object_ptr;
  *new_obj_ptr = (longlong)old_obj_ptr;
  if (old_obj_ptr != (longlong *)0x0) {
    (**(code **)(*old_obj_ptr + 0x28))();
  }
  old_obj_ptr = (longlong *)object_ptr[1];
  new_obj_ptr[1] = (longlong)old_obj_ptr;
  if (old_obj_ptr != (longlong *)0x0) {
    (**(code **)(*old_obj_ptr + 0x28))();
  }
  *(int *)(new_obj_ptr + 2) = (int)object_ptr[2];
  old_obj_ptr = (longlong *)container_ptr[1];
  container_start = (longlong *)*container_ptr;
  if (container_start != old_obj_ptr) {
    do {
      if ((longlong *)container_start[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)container_start[1] + 0x38))();
      }
      if ((longlong *)*container_start != (longlong *)0x0) {
        (**(code **)(*(longlong *)*container_start + 0x38))();
      }
      container_start = container_start + 3;
    } while (container_start != old_obj_ptr);
    container_start = (longlong *)*container_ptr;
  }
  if (container_start == (longlong *)0x0) {
    *container_ptr = (longlong)new_obj_ptr;
    container_ptr[1] = (longlong)(new_obj_ptr + 3);
    container_ptr[2] = (longlong)(new_obj_ptr + new_capacity * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  handle_memory_error(container_start);
}





// 函数: void FUN_1801946c0(longlong *param_1)
void FUN_1801946c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x38))();
    }
    if (*(longlong *)(lVar2 + 0x20) != 0) break;
    FUN_180057830(lVar2);
    lVar2 = lVar2 + 0x48;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1801946e0(undefined8 *param_1)
void FUN_1801946e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar10 = param_1[3];
  lVar5 = param_1[2];
  lVar3 = lVar10 - lVar5 >> 0x3f;
  uVar6 = uVar11;
  uVar12 = uVar11;
  if ((lVar10 - lVar5) / 0x48 + lVar3 != lVar3) {
    do {
      uVar8 = uVar11;
      uVar9 = uVar11;
      if (*(longlong *)(uVar12 + 8 + lVar5) - *(longlong *)(uVar12 + lVar5) >> 3 != 0) {
        do {
          plVar1 = *(longlong **)(uVar9 + *(longlong *)(uVar12 + lVar5));
          *(undefined8 *)(uVar9 + *(longlong *)(uVar12 + lVar5)) = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))();
          }
          uVar7 = (int)uVar8 + 1;
          lVar5 = param_1[2];
          uVar8 = (ulonglong)uVar7;
          uVar9 = uVar9 + 8;
        } while ((ulonglong)(longlong)(int)uVar7 <
                 (ulonglong)(*(longlong *)(uVar12 + 8 + lVar5) - *(longlong *)(uVar12 + lVar5) >> 3)
                );
      }
      plVar1 = (longlong *)(uVar12 + lVar5);
      plVar2 = (longlong *)plVar1[1];
      plVar4 = (longlong *)*plVar1;
      if (plVar4 != plVar2) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = (longlong *)*plVar1;
      }
      plVar1[1] = (longlong)plVar4;
      plVar1 = *(longlong **)(uVar12 + 0x40 + param_1[2]);
      *(undefined8 *)(uVar12 + 0x40 + param_1[2]) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar7 = (int)uVar6 + 1;
      lVar10 = param_1[3];
      lVar5 = param_1[2];
      uVar6 = (ulonglong)uVar7;
      uVar12 = uVar12 + 0x48;
    } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)((lVar10 - lVar5) / 0x48));
  }
  if (lVar5 == lVar10) {
    param_1[3] = lVar5;
  }
  else {
    do {
      if (*(longlong **)(lVar5 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar5 + 0x40) + 0x38))();
      }
      if (*(longlong *)(lVar5 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      FUN_180057830(lVar5);
      lVar5 = lVar5 + 0x48;
    } while (lVar5 != lVar10);
    param_1[3] = param_1[2];
  }
  return;
}





// 函数: void FUN_1801948b0(longlong *param_1)
void FUN_1801948b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x38))();
    }
    if (*(longlong *)(lVar2 + 0x20) != 0) break;
    FUN_180057830(lVar2);
    lVar2 = lVar2 + 0x48;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



float * FUN_180194940(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar11 = param_3[1];
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar12 = *param_3;
  fVar13 = param_3[2];
  *param_2 = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[1] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[2] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[3] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar11 = param_3[5];
  fVar12 = param_3[4];
  fVar13 = param_3[6];
  param_2[4] = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[5] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[6] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[7] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar11 = param_3[9];
  fVar12 = param_3[8];
  fVar13 = param_3[10];
  param_2[8] = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[9] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[10] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[0xb] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar13 = param_3[0xd] - param_1[0xd];
  fVar11 = param_3[0xc] - param_1[0xc];
  fVar12 = param_3[0xe] - param_1[0xe];
  param_2[0xc] = fVar13 * fVar9 + fVar11 * fVar8 + fVar12 * fVar10;
  param_2[0xd] = fVar13 * fVar6 + fVar11 * fVar5 + fVar12 * fVar7;
  param_2[0xe] = fVar13 * fVar2 + fVar11 * fVar1 + fVar12 * fVar3;
  param_2[0xf] = fVar13 * fVar4 + fVar11 * fVar4 + fVar12 * fVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180194a50(longlong *param_1,undefined1 *param_2)
void FUN_180194a50(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)param_1[1];
  if (puVar4 < (undefined1 *)param_1[2]) {
    param_1[1] = (longlong)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar2 = (undefined1 *)*param_1;
  if ((longlong)puVar4 - (longlong)puVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = ((longlong)puVar4 - (longlong)puVar2) * 2;
    if (lVar3 == 0) {
      puVar1 = (undefined1 *)0x0;
      goto LAB_180194acf;
    }
  }
  puVar1 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,lVar3,(char)param_1[3]);
  puVar2 = (undefined1 *)*param_1;
  puVar4 = (undefined1 *)param_1[1];
LAB_180194acf:
  if (puVar2 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,puVar2,(longlong)puVar4 - (longlong)puVar2);
  }
  *puVar1 = *param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)(puVar1 + 1);
  param_1[2] = (longlong)(puVar1 + lVar3);
  return;
}





// 函数: void FUN_180194b30(undefined8 param_1)
void FUN_180194b30(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,0x30,4,FUN_18004a130,0xfffffffffffffffe);
  return;
}



undefined8 *
FUN_180194b60(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a0c9a0;
  *param_1 = &UNK_180a0cb40;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined4 * FUN_180194c10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x7f7fffff;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0x7f7fffff;
  FUN_1800b9f60(0);
  return param_2;
}



undefined8 *
FUN_180194c60(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a0c808;
  *param_1 = &UNK_180a0c9b0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180194cc0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a0c7d8;
  *param_1 = &UNK_180a0c7f0;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180194d10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (longlong)&UNK_180a21690;
  *plVar1 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar1 + 1) = 0;
  *plVar1 = (longlong)&UNK_180a0c9b0;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (longlong)&UNK_180a0c808;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(undefined4 *)(plVar1 + 9) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x4c) = 0;
  *(undefined4 *)(plVar1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)plVar1 + 0x54) = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x5c) = 0;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)plVar1 + 100) = 0x3f800000;
  (**(code **)(*plVar1 + 0x138))(plVar1,param_4);
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180194e00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (longlong)&UNK_180a21690;
  *plVar1 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar1 + 1) = 0;
  *plVar1 = (longlong)&UNK_180a0c9b0;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (longlong)&UNK_180a0c808;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(undefined4 *)(plVar1 + 9) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x4c) = 0;
  *(undefined4 *)(plVar1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)plVar1 + 0x54) = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x5c) = 0;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  (**(code **)(*(longlong *)*param_2 + 0x138))((longlong *)*param_2,param_4);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180194ef0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3,0xfffffffffffffffe);
  *puVar1 = &UNK_180a0cb40;
  *puVar1 = &UNK_180a0c9a0;
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  if (puVar5 < *(undefined8 **)(param_1 + 0x38)) {
    *(undefined8 **)(param_1 + 0x30) = puVar5 + 1;
    *puVar5 = puVar1;
    return puVar1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
      goto LAB_180194fa5;
    }
  }
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(param_1 + 0x40));
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x28);
LAB_180194fa5:
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  *puVar3 = puVar1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    *(undefined8 **)(param_1 + 0x30) = puVar3 + 1;
    *(undefined8 **)(param_1 + 0x38) = puVar3 + lVar2;
    return puVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180195000(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (longlong)&UNK_180a21690;
  *plVar1 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar1 + 1) = 0;
  *plVar1 = (longlong)&UNK_180a0c9b0;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (longlong)&UNK_180a0c808;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(undefined4 *)(plVar1 + 9) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x4c) = 0;
  *(undefined4 *)(plVar1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)plVar1 + 0x54) = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x5c) = 0;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1801950d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puStackX_8;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3,0xfffffffffffffffe);
  *puVar1 = &UNK_180a0c7f0;
  *puVar1 = &UNK_180a0c7d8;
  puStackX_8 = puVar1;
  FUN_18005ea90(param_1 + 0x48,&puStackX_8);
  return puVar1;
}





// 函数: void FUN_180195140(longlong param_1,undefined8 *param_2)
void FUN_180195140(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_1801ba580(param_1 + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = __RTCastToVoid(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  return;
}





// 函数: void FUN_18019515a(void)
void FUN_18019515a(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  return;
}





// 函数: void FUN_180195184(void)
void FUN_180195184(void)

{
  return;
}





// 函数: void FUN_180195190(longlong param_1,undefined8 *param_2)
void FUN_180195190(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_1801ba580(param_1 + 0x48);
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = __RTCastToVoid(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  return;
}





// 函数: void FUN_1801951aa(void)
void FUN_1801951aa(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  return;
}





// 函数: void FUN_1801951d4(void)
void FUN_1801951d4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1801951e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (longlong)&UNK_180a21690;
  *plVar1 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar1 + 1) = 0;
  *plVar1 = (longlong)&UNK_180a0c9b0;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (longlong)&UNK_180a0c808;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(undefined4 *)(plVar1 + 9) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x4c) = 0;
  *(undefined4 *)(plVar1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)plVar1 + 0x54) = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)plVar1 + 0x5c) = 0;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  return param_2;
}



undefined8 * FUN_1801952b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



undefined8 *
FUN_1801952e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a0c508;
  FUN_1801c2640();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}



undefined8 FUN_180195330(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  for (piVar2 = *(int **)(lVar1 + ((ulonglong)(longlong)(param_2 * 1000 + param_3) %
                                  (ulonglong)*(uint *)(param_1 + 0x48)) * 8); piVar2 != (int *)0x0;
      piVar2 = *(int **)(piVar2 + 4)) {
    if ((param_2 == *piVar2) && (param_3 == piVar2[1])) goto LAB_180195376;
  }
  piVar2 = (int *)0x0;
LAB_180195376:
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(lVar1 + *(longlong *)(param_1 + 0x48) * 8);
  }
  if (piVar2 != *(int **)(lVar1 + *(longlong *)(param_1 + 0x48) * 8)) {
    return *(undefined8 *)(piVar2 + 2);
  }
  return 0;
}



undefined8 *
FUN_1801953d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 8;
  strcpy_s(param_2[1],0x80,&UNK_180a0b1c8,param_4,0,0xfffffffffffffffe);
  return param_2;
}





// 函数: void FUN_180195450(longlong param_1)
void FUN_180195450(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    return;
  }
  uVar4 = 0;
  uVar2 = *(ulonglong *)(lVar1 + -0x10);
  uVar3 = uVar2 >> 0x20;
  if ((int)(uVar2 >> 0x20) != 0) {
    do {
      FUN_180195450(uVar4 + lVar1);
      uVar4 = (ulonglong)(uint)((int)uVar4 + (int)uVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar1 + -0x10);
}





// 函数: void FUN_180195464(void)
void FUN_180195464(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(unaff_RDI + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_180195450(uVar3 + unaff_RDI);
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI + -0x10);
}





// 函数: void FUN_180195484(void)
void FUN_180195484(void)

{
  longlong in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  longlong unaff_RDI;
  
  do {
    FUN_180195450((ulonglong)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI + -0x10);
}





// 函数: void FUN_1801954a7(void)
void FUN_1801954a7(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI + -0x10);
}





