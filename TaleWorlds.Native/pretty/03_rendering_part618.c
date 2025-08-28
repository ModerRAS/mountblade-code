#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part618.c - 2 个函数

// 函数: void FUN_18060d060(int param_1,uint param_2,float param_3,uint64_t *param_4)
void FUN_18060d060(int param_1,uint param_2,float param_3,uint64_t *param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint64_t in_R8;
  uint auStackX_8 [2];
  int8_t auStack_70 [8];
  void *puStack_68;
  int32_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  iVar9 = 0;
  uVar10 = 0;
  if (5.0 <= param_3) {
    if (10.0 <= param_3) {
      if (16.0 <= param_3) {
        uVar10 = (21.0 <= param_3) + 3;
      }
      else {
        uVar10 = 2;
      }
    }
    else {
      uVar10 = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar10;
  puVar4 = (uint64_t *)0x180c95e98;
  puVar7 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar7 + 4) < auStackX_8[0]) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar4 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    } while (puVar7 != (uint64_t *)0x0);
  }
  if ((puVar4 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar4 + 4))) {
    puVar4 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStack_70,in_R8,puVar4,auStackX_8);
    puVar4 = (uint64_t *)*puVar4;
  }
  lVar5 = puVar4[5];
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x9d8) < 1) {
      return;
    }
    lVar6 = lVar5 - (int64_t)param_4;
    do {
      puVar7 = (uint64_t *)(lVar6 + 0x7d8 + (int64_t)param_4);
      uVar1 = puVar7[1];
      *param_4 = *puVar7;
      param_4[1] = uVar1;
      iVar9 = iVar9 + 1;
      param_4 = param_4 + 2;
    } while (iVar9 < *(int *)(lVar5 + 0x9d8));
    return;
  }
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (int32_t *)0x0;
  uStack_58 = 0;
  puStack_60 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_60 = 0;
  uVar2 = CoreMemoryPoolCleaner(puStack_60);
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  *puStack_60 = 0x65636146;
  puStack_60[1] = 0x736e695f;
  puStack_60[2] = 0x636e6174;
  puStack_60[3] = 0x6f662065;
  puStack_60[4] = 0x61722072;
  *(int16_t *)(puStack_60 + 5) = 0x6563;
  *(int8_t *)((int64_t)puStack_60 + 0x16) = 0;
  uStack_58 = 0x16;
  FUN_180628380(&puStack_68,param_1);
  uVar11 = uStack_58 + 0xc;
  if (uVar11 != 0) {
    uVar3 = uStack_58 + 0xd;
    if (puStack_60 == (int32_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_60 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
      *(int8_t *)puStack_60 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_50) goto LAB_18060d273;
      puStack_60 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_60,uVar3,0x10,0x13);
    }
    uVar2 = CoreMemoryPoolCleaner(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  }
LAB_18060d273:
  puVar7 = (uint64_t *)((uint64_t)uStack_58 + (int64_t)puStack_60);
  *puVar7 = 0x6e656720726f6620;
  *(int32_t *)(puVar7 + 1) = 0x20726564;
  *(int8_t *)((int64_t)puVar7 + 0xc) = 0;
  uStack_58 = uVar11;
  FUN_180628380(&puStack_68,param_2);
  uVar11 = uStack_58 + 0x13;
  if (uVar11 != 0) {
    uVar3 = uStack_58 + 0x14;
    if (puStack_60 == (int32_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_60 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
      *(int8_t *)puStack_60 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_50) goto LAB_18060d30d;
      puStack_60 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_60,uVar3,0x10,0x13);
    }
    uVar2 = CoreMemoryPoolCleaner(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  }
LAB_18060d30d:
  puVar8 = (int32_t *)((uint64_t)uStack_58 + (int64_t)puStack_60);
  *puVar8 = 0x726f6620;
  puVar8[1] = 0x74616d20;
  puVar8[2] = 0x74697275;
  puVar8[3] = 0x79742079;
  puVar8[4] = 0x206570;
  uStack_58 = uVar11;
  lVar5 = FUN_1805705b0(&puStack_48,uVar10);
  if (0 < *(int *)(lVar5 + 0x10)) {
    iVar9 = uStack_58 + *(int *)(lVar5 + 0x10);
    if (iVar9 != 0) {
      uVar10 = iVar9 + 1;
      if (puStack_60 == (int32_t *)0x0) {
        if ((int)uVar10 < 0x10) {
          uVar10 = 0x10;
        }
        puStack_60 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar10,0x13);
        *(int8_t *)puStack_60 = 0;
      }
      else {
        if (uVar10 <= (uint)uStack_50) goto LAB_18060d3a7;
        puStack_60 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_60,uVar10,0x10,0x13);
      }
      uVar2 = CoreMemoryPoolCleaner(puStack_60);
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
    }
LAB_18060d3a7:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)uStack_58 + (int64_t)puStack_60),*(uint64_t *)(lVar5 + 8),
           (int64_t)(*(int *)(lVar5 + 0x10) + 1));
  }
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &system_state_ptr;
  iVar9 = uStack_58 + 0x2f;
  if (iVar9 != 0) {
    uVar10 = uStack_58 + 0x30;
    if (puStack_60 == (int32_t *)0x0) {
      if ((int)uVar10 < 0x10) {
        uVar10 = 0x10;
      }
      puStack_60 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar10,0x13);
      *(int8_t *)puStack_60 = 0;
    }
    else {
      if (uVar10 <= (uint)uStack_50) goto LAB_18060d444;
      puStack_60 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_60,uVar10,0x10,0x13);
    }
    uVar2 = CoreMemoryPoolCleaner(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  }
LAB_18060d444:
  puVar7 = (uint64_t *)((uint64_t)uStack_58 + (int64_t)puStack_60);
  *puVar7 = 0x6620746f6e207369;
  puVar7[1] = 0x206e6920646e756f;
  *(int32_t *)(puVar7 + 2) = 0x5f746567;
  *(int32_t *)((int64_t)puVar7 + 0x14) = 0x72696168;
  *(int32_t *)(puVar7 + 3) = 0x6c6f635f;
  *(int32_t *)((int64_t)puVar7 + 0x1c) = 0x675f726f;
  *(int32_t *)(puVar7 + 4) = 0x69646172;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x5f746e65;
  *(int32_t *)(puVar7 + 5) = 0x6e696f70;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x217374;
  puVar8 = (int32_t *)&system_buffer_ptr;
  if (puStack_60 != (int32_t *)0x0) {
    puVar8 = puStack_60;
  }
  uStack_58 = iVar9;
  SystemCore_ResourceManager0(puVar8);
  puStack_68 = &system_data_buffer_ptr;
  if (puStack_60 == (int32_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18060d4d0(int param_1,uint param_2,float param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint64_t in_R8;
  uint auStackX_8 [2];
  int8_t auStackX_20 [8];
  void *puStack_80;
  int32_t *puStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int64_t lStack_58;
  int32_t uStack_48;
  
  uVar7 = 0;
  if (5.0 <= param_3) {
    if (10.0 <= param_3) {
      if (16.0 <= param_3) {
        uVar7 = (21.0 <= param_3) + 3;
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar7;
  puVar3 = (uint64_t *)0x180c95e98;
  puVar5 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar5 + 4) < auStackX_8[0]) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar3 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_20,in_R8,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  if (puVar3[5] != 0) {
    return *(int32_t *)(puVar3[5] + 0x5c4);
  }
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (int32_t *)0x0;
  uStack_70 = 0;
  puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_78 = 0;
  uVar1 = CoreMemoryPoolCleaner(puStack_78);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puStack_78 = 0x65636146;
  puStack_78[1] = 0x736e695f;
  puStack_78[2] = 0x636e6174;
  puStack_78[3] = 0x6f662065;
  puStack_78[4] = 0x61722072;
  *(int16_t *)(puStack_78 + 5) = 0x6563;
  *(int8_t *)((int64_t)puStack_78 + 0x16) = 0;
  uStack_70 = 0x16;
  FUN_180628380(&puStack_80,param_1);
  uVar9 = uStack_70 + 0xc;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0xd;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060d6b3;
      puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = CoreMemoryPoolCleaner(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060d6b3:
  puVar5 = (uint64_t *)((uint64_t)uStack_70 + (int64_t)puStack_78);
  *puVar5 = 0x6e656720726f6620;
  *(int32_t *)(puVar5 + 1) = 0x20726564;
  *(int8_t *)((int64_t)puVar5 + 0xc) = 0;
  uStack_70 = uVar9;
  FUN_180628380(&puStack_80,param_2);
  uVar9 = uStack_70 + 0x13;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0x14;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060d74c;
      puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = CoreMemoryPoolCleaner(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060d74c:
  puVar6 = (int32_t *)((uint64_t)uStack_70 + (int64_t)puStack_78);
  *puVar6 = 0x726f6620;
  puVar6[1] = 0x74616d20;
  puVar6[2] = 0x74697275;
  puVar6[3] = 0x79742079;
  puVar6[4] = 0x206570;
  uStack_70 = uVar9;
  lVar4 = FUN_1805705b0(&puStack_60,uVar7);
  if (0 < *(int *)(lVar4 + 0x10)) {
    iVar8 = uStack_70 + *(int *)(lVar4 + 0x10);
    if (iVar8 != 0) {
      uVar7 = iVar8 + 1;
      if (puStack_78 == (int32_t *)0x0) {
        if ((int)uVar7 < 0x10) {
          uVar7 = 0x10;
        }
        puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
        *(int8_t *)puStack_78 = 0;
      }
      else {
        if (uVar7 <= (uint)uStack_68) goto LAB_18060d7e2;
        puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
      }
      uVar1 = CoreMemoryPoolCleaner(puStack_78);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
    }
LAB_18060d7e2:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)uStack_70 + (int64_t)puStack_78),*(uint64_t *)(lVar4 + 8),
           (int64_t)(*(int *)(lVar4 + 0x10) + 1));
  }
  puStack_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &system_state_ptr;
  iVar8 = uStack_70 + 0x26;
  if (iVar8 != 0) {
    uVar7 = uStack_70 + 0x27;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar7 <= (uint)uStack_68) goto LAB_18060d880;
      puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
    }
    uVar1 = CoreMemoryPoolCleaner(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060d880:
  puVar6 = (int32_t *)((uint64_t)uStack_70 + (int64_t)puStack_78);
  *puVar6 = 0x6e207369;
  puVar6[1] = 0x6620746f;
  puVar6[2] = 0x646e756f;
  puVar6[3] = 0x206e6920;
  puVar6[4] = 0x5f746567;
  puVar6[5] = 0x6f746174;
  puVar6[6] = 0x6f635f6f;
  puVar6[7] = 0x5f726f6c;
  puVar6[8] = 0x6e756f63;
  *(int16_t *)(puVar6 + 9) = 0x2174;
  *(int8_t *)((int64_t)puVar6 + 0x26) = 0;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (puStack_78 != (int32_t *)0x0) {
    puVar6 = puStack_78;
  }
  uStack_70 = iVar8;
  SystemCore_ResourceManager0(puVar6);
  puStack_80 = &system_data_buffer_ptr;
  if (puStack_78 == (int32_t *)0x0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060d910(int param_1,uint param_2,float param_3,uint64_t *param_4)
void FUN_18060d910(int param_1,uint param_2,float param_3,uint64_t *param_4)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  uint auStackX_8 [2];
  int8_t auStack_18 [16];
  
  iVar7 = 0;
  auStackX_8[0] = 0;
  if (5.0 <= param_3) {
    if (10.0 <= param_3) {
      if (16.0 <= param_3) {
        auStackX_8[0] = (21.0 <= param_3) + 3;
      }
      else {
        auStackX_8[0] = 2;
      }
    }
    else {
      auStackX_8[0] = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | auStackX_8[0];
  puVar5 = (uint64_t *)0x180c95e98;
  puVar6 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar6 + 4) < auStackX_8[0]) {
        puVar2 = (uint64_t *)*puVar6;
      }
      else {
        puVar2 = (uint64_t *)puVar6[1];
        puVar5 = puVar6;
      }
      puVar6 = puVar2;
    } while (puVar2 != (uint64_t *)0x0);
  }
  if ((puVar5 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStack_18,auStackX_8[0],puVar5,auStackX_8);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar3 = puVar5[5];
  piVar1 = (int *)(lVar3 + 0x5c4);
  if (0 < *piVar1) {
    puVar5 = param_4;
    do {
      puVar6 = (uint64_t *)((lVar3 - (int64_t)param_4) + 0x3c4 + (int64_t)puVar5);
      uVar4 = puVar6[1];
      iVar7 = iVar7 + 1;
      *puVar5 = *puVar6;
      puVar5[1] = uVar4;
      puVar5 = puVar5 + 2;
    } while (iVar7 < *piVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18060da20(int param_1,uint param_2,float param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint64_t in_R8;
  uint auStackX_8 [2];
  int8_t auStackX_20 [8];
  void *puStack_80;
  int32_t *puStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int64_t lStack_58;
  int32_t uStack_48;
  
  uVar7 = 0;
  if (5.0 <= param_3) {
    if (10.0 <= param_3) {
      if (16.0 <= param_3) {
        uVar7 = (21.0 <= param_3) + 3;
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar7;
  puVar3 = (uint64_t *)0x180c95e98;
  puVar5 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar5 + 4) < auStackX_8[0]) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar3 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_20,in_R8,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  if (puVar3[5] != 0) {
    return *(int32_t *)(puVar3[5] + 0x5d0);
  }
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (int32_t *)0x0;
  uStack_70 = 0;
  puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_78 = 0;
  uVar1 = CoreMemoryPoolCleaner(puStack_78);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puStack_78 = 0x65636146;
  puStack_78[1] = 0x736e695f;
  puStack_78[2] = 0x636e6174;
  puStack_78[3] = 0x6f662065;
  puStack_78[4] = 0x61722072;
  *(int16_t *)(puStack_78 + 5) = 0x6563;
  *(int8_t *)((int64_t)puStack_78 + 0x16) = 0;
  uStack_70 = 0x16;
  FUN_180628380(&puStack_80,param_1);
  uVar9 = uStack_70 + 0xc;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0xd;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060dc03;
      puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = CoreMemoryPoolCleaner(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060dc03:
  puVar5 = (uint64_t *)((uint64_t)uStack_70 + (int64_t)puStack_78);
  *puVar5 = 0x6e656720726f6620;
  *(int32_t *)(puVar5 + 1) = 0x20726564;
  *(int8_t *)((int64_t)puVar5 + 0xc) = 0;
  uStack_70 = uVar9;
  FUN_180628380(&puStack_80,param_2);
  uVar9 = uStack_70 + 0x13;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0x14;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060dc9c;
      puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = CoreMemoryPoolCleaner(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060dc9c:
  puVar6 = (int32_t *)((uint64_t)uStack_70 + (int64_t)puStack_78);
  *puVar6 = 0x726f6620;
  puVar6[1] = 0x74616d20;
  puVar6[2] = 0x74697275;
  puVar6[3] = 0x79742079;
  puVar6[4] = 0x206570;
  uStack_70 = uVar9;
  lVar4 = FUN_1805705b0(&puStack_60,uVar7);
  if (0 < *(int *)(lVar4 + 0x10)) {
    iVar8 = uStack_70 + *(int *)(lVar4 + 0x10);
    if (iVar8 != 0) {
      uVar7 = iVar8 + 1;
      if (puStack_78 == (int32_t *)0x0) {
        if ((int)uVar7 < 0x10) {
          uVar7 = 0x10;
        }
        puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
        *(int8_t *)puStack_78 = 0;
      }
      else {
        if (uVar7 <= (uint)uStack_68) goto LAB_18060dd32;
        puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
      }
      uVar1 = CoreMemoryPoolCleaner(puStack_78);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
    }
LAB_18060dd32:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)uStack_70 + (int64_t)puStack_78),*(uint64_t *)(lVar4 + 8),
           (int64_t)(*(int *)(lVar4 + 0x10) + 1));
  }
  puStack_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &system_state_ptr;
  iVar8 = uStack_70 + 0x25;
  if (iVar8 != 0) {
    uVar7 = uStack_70 + 0x26;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puStack_78 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar7 <= (uint)uStack_68) goto LAB_18060ddd0;
      puStack_78 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
    }
    uVar1 = CoreMemoryPoolCleaner(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060ddd0:
  puVar6 = (int32_t *)((uint64_t)uStack_70 + (int64_t)puStack_78);
  *puVar6 = 0x6e207369;
  puVar6[1] = 0x6620746f;
  puVar6[2] = 0x646e756f;
  puVar6[3] = 0x206e6920;
  puVar6[4] = 0x5f746567;
  puVar6[5] = 0x6e696b73;
  puVar6[6] = 0x6c6f635f;
  puVar6[7] = 0x635f726f;
  puVar6[8] = 0x746e756f;
  *(int16_t *)(puVar6 + 9) = 0x21;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (puStack_78 != (int32_t *)0x0) {
    puVar6 = puStack_78;
  }
  uStack_70 = iVar8;
  SystemCore_ResourceManager0(puVar6);
  puStack_80 = &system_data_buffer_ptr;
  if (puStack_78 == (int32_t *)0x0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18060de60(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int32_t uVar5;
  byte *pbVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  void *puStack_70;
  int64_t lStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  uint64_t *puStack_40;
  int32_t uStack_38;
  uint64_t *puVar15;
  
  puStack_50 = (uint64_t *)0x0;
  puStack_48 = (uint64_t *)0x0;
  puVar16 = (uint64_t *)0x0;
  puStack_40 = (uint64_t *)0x0;
  uStack_38 = 3;
  puStack_70 = &system_data_buffer_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  puVar18 = (uint64_t *)0x0;
  puVar17 = (uint64_t *)0x0;
  lVar9 = render_system_memory;
  puVar19 = puVar18;
  if (render_system_memory != 0x180c95e98) {
    do {
      puVar7 = (uint64_t *)0x0;
      lVar4 = *(int64_t *)(lVar9 + 0x28);
      uVar13 = (int64_t)puVar19 - (int64_t)puVar17 >> 5;
      if (uVar13 != 0) {
        iVar2 = *(int *)(lVar4 + 0x18);
        puVar12 = puVar17 + 1;
        puVar15 = puVar7;
        do {
          iVar3 = *(int *)(puVar12 + 1);
          iVar10 = iVar2;
          if (iVar3 == iVar2) {
            if (iVar3 != 0) {
              pbVar6 = (byte *)*puVar12;
              lVar11 = *(int64_t *)(lVar4 + 0x10) - (int64_t)pbVar6;
              do {
                pbVar1 = pbVar6 + lVar11;
                iVar10 = (uint)*pbVar6 - (uint)*pbVar1;
                if (iVar10 != 0) break;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18060df4d:
            puVar18 = puVar19;
            if (iVar10 == 0) goto LAB_18060e080;
          }
          else if (iVar3 == 0) goto LAB_18060df4d;
          uVar14 = (int)puVar15 + 1;
          puVar15 = (uint64_t *)(uint64_t)uVar14;
          puVar12 = puVar12 + 4;
        } while ((uint64_t)(int64_t)(int)uVar14 < uVar13);
      }
      if (puVar19 < puVar16) {
        puVar18 = puVar19 + 4;
        puStack_48 = puVar18;
        SystemCore_NetworkHandler0(puVar19,lVar4 + 8);
        puVar7 = puVar17;
      }
      else {
        if (uVar13 == 0) {
          lVar11 = 1;
LAB_18060df9c:
          puVar7 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 << 5,3);
        }
        else {
          lVar11 = uVar13 * 2;
          if (lVar11 != 0) goto LAB_18060df9c;
        }
        lVar8 = FUN_180059780(puVar17,puVar19,puVar7);
        SystemCore_NetworkHandler0(lVar8,lVar4 + 8);
        puVar18 = (uint64_t *)(lVar8 + 0x20);
        for (puVar16 = puVar17; puVar16 != puVar19; puVar16 = puVar16 + 4) {
          (**(code **)*puVar16)(puVar16,0);
        }
        if (puVar17 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(puVar17);
        }
        puVar16 = puVar7 + lVar11 * 4;
        puStack_50 = puVar7;
        puStack_48 = puVar18;
        puStack_40 = puVar16;
      }
      if (lVar9 != render_system_memory) {
        uVar14 = uStack_60 + 1;
        CoreMemoryPoolProcessor(&puStack_70,uVar14);
        *(int16_t *)((uint64_t)uStack_60 + lStack_68) = 0x3b;
        uStack_60 = uVar14;
      }
      lVar4 = *(int64_t *)(lVar9 + 0x28);
      puVar17 = puVar7;
      if (0 < *(int *)(lVar4 + 0x18)) {
        CoreMemoryPoolProcessor(&puStack_70,uStack_60 + *(int *)(lVar4 + 0x18));
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)uStack_60 + lStack_68,*(uint64_t *)(lVar4 + 0x10),
               (int64_t)(*(int *)(lVar4 + 0x18) + 1));
      }
LAB_18060e080:
      lVar9 = func_0x00018066bd70(lVar9);
      puVar19 = puVar18;
    } while (lVar9 != 0x180c95e98);
  }
  uVar5 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_70);
  puStack_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_68 = 0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  puStack_70 = &system_state_ptr;
  for (puVar19 = puVar17; puVar19 != puVar18; puVar19 = puVar19 + 4) {
    (**(code **)*puVar19)(puVar19,0);
  }
  if (puVar17 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar17);
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



