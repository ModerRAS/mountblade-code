#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part065.c - 5 个函数

// 函数: void FUN_1803a1590(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1803a1590(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  int iVar9;
  int64_t *plStackX_20;
  
  plStackX_20 = param_4;
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plVar5 = (int64_t *)FUN_18023a2e0(uVar4,0);
  puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar6 = 0;
  uVar2 = CoreEngineSystemCleanup(puVar6);
  *puVar6 = 0x72726574;
  puVar6[1] = 0x5f6e6961;
  puVar6[2] = 0x65646f6e;
  puVar6[3] = 0x6965685f;
  *(uint64_t *)(puVar6 + 4) = 0x5f70616d746867;
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68);
  iVar9 = *(int *)(lVar7 + 0x4e8);
  if (0 < iVar9) {
    if ((iVar9 != -0x17) && (uVar2 < iVar9 + 0x18U)) {
      puVar6 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar6,iVar9 + 0x18U,0x10,0x13);
      CoreEngineSystemCleanup(puVar6);
      iVar9 = *(int *)(lVar7 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar6 + 0x17),*(uint64_t *)(lVar7 + 0x4e0),
           (int64_t)(iVar9 + 1));
  }
  puVar8 = (int32_t *)&system_buffer_ptr;
  if (puVar6 != (int32_t *)0x0) {
    puVar8 = puVar6;
  }
  (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,puVar8);
  lVar7 = FUN_1803a1a70(&plStackX_20);
  *(int8_t *)(lVar7 + 0x11) = 1;
  *(int64_t *)(param_1 + 0x818) = lVar7;
  FUN_1800a5810(system_message_buffer,lVar7,0,0,plVar5,
                *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0xa4));
  FUN_18023ce10(plVar5);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_1 + 0x1c0);
  *(int64_t **)(param_1 + 0x1c0) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  *(int8_t *)(lVar7 + 0x11) = 0;
  if (puVar6 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar6);
  }
  iVar9 = 0;
  do {
    iVar3 = *(int *)param_4[1];
    param_4[1] = (int64_t)((int *)param_4[1] + 1);
    if ((iVar3 != 0) && (lVar7 = FUN_1803a1a70(&plStackX_20), lVar7 != 0)) {
      *(int32_t *)(lVar7 + 0x54) = 0xb;
      FUN_1803a39b0(param_1,iVar9,lVar7);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  iVar9 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0x60a70);
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plVar5 = (int64_t *)FUN_18023a2e0(uVar4,0);
  puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar6 = 0;
  uVar2 = CoreEngineSystemCleanup(puVar6);
  *puVar6 = 0x72726574;
  puVar6[1] = 0x5f6e6961;
  puVar6[2] = 0x65646f6e;
  puVar6[3] = 0x726f6e5f;
  *(uint64_t *)(puVar6 + 4) = 0x5f70616d6c616d;
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68);
  iVar3 = *(int *)(lVar7 + 0x4e8);
  if (0 < iVar3) {
    if ((iVar3 != -0x17) && (uVar2 < iVar3 + 0x18U)) {
      puVar6 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar6,iVar3 + 0x18U,0x10,0x13);
      CoreEngineSystemCleanup(puVar6);
      iVar3 = *(int *)(lVar7 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar6 + 0x17),*(uint64_t *)(lVar7 + 0x4e0),
           (int64_t)(iVar3 + 1));
  }
  puVar8 = (int32_t *)&system_buffer_ptr;
  if (puVar6 != (int32_t *)0x0) {
    puVar8 = puVar6;
  }
  (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,puVar8);
  lVar7 = FUN_1803a1a70(&plStackX_20);
  *(int8_t *)(lVar7 + 0x11) = 1;
  if (iVar9 < 1) {
    *(int64_t *)(param_1 + 0x810) = lVar7;
    FUN_1800a5810(system_message_buffer,lVar7,0,0,plVar5,
                  *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0xa4));
    FUN_18023ce10(plVar5);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
      (**(code **)(*plVar5 + 0x28))(plVar5);
      plStackX_20 = plVar5;
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plStackX_20 = *(int64_t **)(param_1 + 0x138);
    *(int64_t **)(param_1 + 0x138) = plVar5;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  *(int8_t *)(lVar7 + 0x11) = 0;
  if (puVar6 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar6);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001803a1c68)
// WARNING: Removing unreachable block (ram,0x0001803a1db7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a1a70(int64_t *param_1)
void FUN_1803a1a70(int64_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  int *piVar3;
  int iVar4;
  uint64_t uVar5;
  int *piVar6;
  int8_t auStack_158 [128];
  uint64_t uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_b0;
  int iStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  int16_t uStack_90;
  int8_t uStack_8e;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  int16_t uStack_44;
  int16_t uStack_42;
  int16_t uStack_40;
  ushort uStack_3e;
  int8_t uStack_3c;
  int8_t uStack_3b;
  int8_t uStack_3a;
  uint8_t uStack_39;
  uint64_t uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_8e = 3;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_3b = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40 = 0;
  uStack_3a = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  iStack_a8 = 0;
  lVar2 = *param_1;
  piVar3 = *(int **)(lVar2 + 8);
  iVar1 = *piVar3;
  *(int **)(lVar2 + 8) = piVar3 + 1;
  if (iVar1 == 0x30484354) {
    iVar1 = piVar3[1];
    piVar6 = piVar3 + 2;
    *(int **)(lVar2 + 8) = piVar6;
    if (iVar1 == 2) {
      iVar1 = *piVar6;
      *(int **)(lVar2 + 8) = piVar3 + 3;
      if (iVar1 == 0x14) {
        iVar1 = piVar3[3];
        *(int **)(lVar2 + 8) = piVar3 + 4;
        iVar4 = piVar3[4];
        iStack_cc = piVar3[5];
        iStack_c8 = piVar3[6];
        iStack_c4 = piVar3[7];
        iStack_b0 = piVar3[8];
        *(int **)(lVar2 + 8) = piVar3 + 9;
        iStack_d0 = iVar4;
        uVar5 = func_0x000180220c90(iVar4);
        strcpy_s(&uStack_8c,0x40,uVar5);
        uStack_4c = CONCAT44(iStack_cc,iVar4);
        uStack_44 = (int16_t)iStack_c8;
        uStack_42 = (int16_t)((uint)iStack_c8 >> 0x10);
        uStack_40 = (int16_t)iStack_c4;
        uStack_3e = (ushort)((uint)iStack_c4 >> 0x10) & 0xff;
        uStack_3c = (int8_t)iStack_b0;
        uStack_3b = (int8_t)((uint)iStack_c4 >> 0x18);
        uStack_3a = 0;
        FUN_1802a1bc0(&uStack_a0);
        iStack_a8 = iVar1;
LAB_1803a1c46:
                    // WARNING: Subroutine does not return
        memcpy(uStack_a0,*(uint64_t *)(lVar2 + 8),(int64_t)(int)uStack_98);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = *piVar6;
      *(int **)(lVar2 + 8) = piVar3 + 3;
      if (iVar1 == 0x58) {
        iVar1 = piVar3[3];
        *(int **)(lVar2 + 8) = piVar3 + 4;
        uStack_8c = *(uint64_t *)(piVar3 + 4);
        uStack_84 = *(uint64_t *)(piVar3 + 6);
        uStack_7c = *(uint64_t *)(piVar3 + 8);
        uStack_74 = *(uint64_t *)(piVar3 + 10);
        uStack_6c = *(uint64_t *)(piVar3 + 0xc);
        uStack_64 = *(uint64_t *)(piVar3 + 0xe);
        uStack_5c = *(uint64_t *)(piVar3 + 0x10);
        uStack_54 = *(uint64_t *)(piVar3 + 0x12);
        uStack_4c = *(uint64_t *)(piVar3 + 0x14);
        uVar5 = *(uint64_t *)(piVar3 + 0x16);
        uStack_44 = (int16_t)uVar5;
        uStack_42 = (int16_t)((uint64_t)uVar5 >> 0x10);
        uStack_40 = (int16_t)((uint64_t)uVar5 >> 0x20);
        uStack_3e = (ushort)((uint64_t)uVar5 >> 0x30);
        uVar5 = *(uint64_t *)(piVar3 + 0x18);
        uStack_3c = (int8_t)uVar5;
        uStack_3b = (int8_t)((uint64_t)uVar5 >> 8);
        uStack_39 = (uint8_t)((uint64_t)uVar5 >> 0x18);
        *(int64_t *)(lVar2 + 8) = *(int64_t *)(lVar2 + 8) + 0x58;
        uStack_3a = 0;
        FUN_1802a1bc0(&uStack_a0);
        iStack_a8 = iVar1;
        goto LAB_1803a1c46;
      }
    }
  }
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a1df0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1803a1df0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int32_t *puVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  int *piVar21;
  int32_t *puVar22;
  uint64_t uVar23;
  int iVar24;
  int64_t *plStackX_20;
  
  plStackX_20 = param_4;
  uVar16 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
  plVar17 = (int64_t *)FUN_18023a2e0(uVar16,0);
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  iVar24 = 0;
  puVar18 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar18 = 0;
  uVar14 = CoreEngineSystemCleanup(puVar18);
  *puVar18 = 0x72726574;
  puVar18[1] = 0x5f6e6961;
  puVar18[2] = 0x65646f6e;
  puVar18[3] = 0x6965685f;
  *(uint64_t *)(puVar18 + 4) = 0x5f70616d746867;
  lVar19 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68);
  iVar15 = *(int *)(lVar19 + 0x4e8);
  if (0 < iVar15) {
    if ((iVar15 != -0x17) && (uVar14 < iVar15 + 0x18U)) {
      puVar18 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar18,iVar15 + 0x18U,0x10,0x13);
      CoreEngineSystemCleanup(puVar18);
      iVar15 = *(int *)(lVar19 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar18 + 0x17),*(uint64_t *)(lVar19 + 0x4e0),
           (int64_t)(iVar15 + 1));
  }
  puVar22 = (int32_t *)&system_buffer_ptr;
  if (puVar18 != (int32_t *)0x0) {
    puVar22 = puVar18;
  }
  (**(code **)(plVar17[2] + 0x10))(plVar17 + 2,puVar22);
  lVar19 = FUN_1803a24a0(&plStackX_20,0xc);
  *(int8_t *)(lVar19 + 0x11) = 1;
  *(int64_t *)(param_1 + 0x818) = lVar19;
  if (system_data_2847 == '\0') {
    FUN_1800a5810(system_message_buffer,lVar19,0,0,plVar17,
                  *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0xa4));
    FUN_18023ce10(plVar17);
  }
  else {
    uVar5 = *(uint64_t *)(lVar19 + 0x1c);
    uVar6 = *(uint64_t *)(lVar19 + 0x24);
    uVar7 = *(uint64_t *)(lVar19 + 0x2c);
    uVar8 = *(uint64_t *)(lVar19 + 0x34);
    uVar9 = *(uint64_t *)(lVar19 + 0x3c);
    uVar10 = *(uint64_t *)(lVar19 + 0x44);
    uVar11 = *(uint64_t *)(lVar19 + 0x4c);
    uVar12 = *(uint64_t *)(lVar19 + 0x54);
    uVar13 = *(uint64_t *)(lVar19 + 0x5c);
    uVar16 = *(uint64_t *)(lVar19 + 100);
    *(uint64_t *)((int64_t)plVar17 + 0x2e4) = *(uint64_t *)(lVar19 + 0x14);
    *(uint64_t *)((int64_t)plVar17 + 0x2ec) = uVar5;
    *(uint64_t *)((int64_t)plVar17 + 0x2f4) = uVar6;
    *(uint64_t *)((int64_t)plVar17 + 0x2fc) = uVar7;
    *(uint64_t *)((int64_t)plVar17 + 0x304) = uVar8;
    *(uint64_t *)((int64_t)plVar17 + 0x30c) = uVar9;
    *(uint64_t *)((int64_t)plVar17 + 0x314) = uVar10;
    *(uint64_t *)((int64_t)plVar17 + 0x31c) = uVar11;
    *(uint64_t *)((int64_t)plVar17 + 0x324) = uVar12;
    *(uint64_t *)((int64_t)plVar17 + 0x32c) = uVar13;
    *(uint64_t *)((int64_t)plVar17 + 0x334) = uVar16;
  }
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x28))(plVar17);
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plVar1 = *(int64_t **)(param_1 + 0x1c0);
  *(int64_t **)(param_1 + 0x1c0) = plVar17;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  *(int8_t *)(lVar19 + 0x11) = 0;
  if (puVar18 == (int32_t *)0x0) {
    if (plVar17 != (int64_t *)0x0) {
      (**(code **)(*plVar17 + 0x38))(plVar17);
    }
    do {
      iVar15 = *(int *)param_4[1];
      param_4[1] = (int64_t)((int *)param_4[1] + 1);
      if (iVar15 != 0) {
        puVar20 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
        *puVar20 = 0;
        puVar20[1] = 0;
        *(int16_t *)(puVar20 + 2) = 0;
        *(int32_t *)((int64_t)puVar20 + 0x62) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x54) = 0;
        *(int32_t *)((int64_t)puVar20 + 0x5c) = 0;
        *(int16_t *)(puVar20 + 0xc) = 0;
        *(int8_t *)((int64_t)puVar20 + 0x66) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x14) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x1c) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x24) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x2c) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x34) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x3c) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x44) = 0;
        *(uint64_t *)((int64_t)puVar20 + 0x4c) = 0;
        *(int8_t *)((int64_t)puVar20 + 0x12) = 0x23;
        iVar15 = *(int *)param_4[1];
        piVar21 = (int *)param_4[1] + 1;
        param_4[1] = (int64_t)piVar21;
        if (iVar15 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar15,3);
          piVar21 = (int *)param_4[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(uVar16,piVar21,(int64_t)iVar15);
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < 0x10);
    if ((*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0x60a70) < 1) &&
       (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x198) == 0)) {
      uVar16 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
      plVar17 = (int64_t *)FUN_18023a2e0(uVar16,0);
      puVar18 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
      *(int8_t *)puVar18 = 0;
      uVar14 = CoreEngineSystemCleanup(puVar18);
      *puVar18 = 0x72726574;
      puVar18[1] = 0x5f6e6961;
      puVar18[2] = 0x65646f6e;
      puVar18[3] = 0x726f6e5f;
      *(uint64_t *)(puVar18 + 4) = 0x5f70616d6c616d;
      lVar19 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68);
      iVar15 = *(int *)(lVar19 + 0x4e8);
      if (0 < iVar15) {
        if ((iVar15 != -0x17) && (uVar14 < iVar15 + 0x18U)) {
          puVar18 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar18,iVar15 + 0x18U,0x10,0x13);
          CoreEngineSystemCleanup(puVar18);
          iVar15 = *(int *)(lVar19 + 0x4e8);
        }
                    // WARNING: Subroutine does not return
        memcpy((int8_t *)((int64_t)puVar18 + 0x17),*(uint64_t *)(lVar19 + 0x4e0),
               (int64_t)(iVar15 + 1));
      }
      puVar22 = (int32_t *)&system_buffer_ptr;
      if (puVar18 != (int32_t *)0x0) {
        puVar22 = puVar18;
      }
      (**(code **)(plVar17[2] + 0x10))(plVar17 + 2,puVar22);
      lVar19 = FUN_1803a24a0(&plStackX_20,0,0);
      *(int8_t *)(lVar19 + 0x11) = 1;
      *(int64_t *)(param_1 + 0x810) = lVar19;
      if (system_data_2847 == '\0') {
        FUN_1800a5810(system_message_buffer,lVar19,0,0,plVar17,
                      *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0xa4));
        FUN_18023ce10(plVar17);
      }
      else {
        uVar16 = *(uint64_t *)(lVar19 + 0x1c);
        *(uint64_t *)((int64_t)plVar17 + 0x2e4) = *(uint64_t *)(lVar19 + 0x14);
        *(uint64_t *)((int64_t)plVar17 + 0x2ec) = uVar16;
        uVar16 = *(uint64_t *)(lVar19 + 0x2c);
        *(uint64_t *)((int64_t)plVar17 + 0x2f4) = *(uint64_t *)(lVar19 + 0x24);
        *(uint64_t *)((int64_t)plVar17 + 0x2fc) = uVar16;
        uVar16 = *(uint64_t *)(lVar19 + 0x3c);
        *(uint64_t *)((int64_t)plVar17 + 0x304) = *(uint64_t *)(lVar19 + 0x34);
        *(uint64_t *)((int64_t)plVar17 + 0x30c) = uVar16;
        uVar16 = *(uint64_t *)(lVar19 + 0x4c);
        *(uint64_t *)((int64_t)plVar17 + 0x314) = *(uint64_t *)(lVar19 + 0x44);
        *(uint64_t *)((int64_t)plVar17 + 0x31c) = uVar16;
        uVar2 = *(int32_t *)(lVar19 + 0x58);
        uVar3 = *(int32_t *)(lVar19 + 0x5c);
        uVar4 = *(int32_t *)(lVar19 + 0x60);
        *(int32_t *)((int64_t)plVar17 + 0x324) = *(int32_t *)(lVar19 + 0x54);
        *(int32_t *)(plVar17 + 0x65) = uVar2;
        *(int32_t *)((int64_t)plVar17 + 0x32c) = uVar3;
        *(int32_t *)(plVar17 + 0x66) = uVar4;
        *(uint64_t *)((int64_t)plVar17 + 0x334) = *(uint64_t *)(lVar19 + 100);
      }
      if (plVar17 != (int64_t *)0x0) {
        (**(code **)(*plVar17 + 0x28))(plVar17);
        (**(code **)(*plVar17 + 0x28))(plVar17);
        plStackX_20 = plVar17;
        (**(code **)(*plVar17 + 0x28))(plVar17);
      }
      plStackX_20 = *(int64_t **)(param_1 + 0x138);
      *(int64_t **)(param_1 + 0x138) = plVar17;
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      if (plVar17 != (int64_t *)0x0) {
        (**(code **)(*plVar17 + 0x38))();
        (**(code **)(*plVar17 + 0x38))(plVar17);
      }
      *(int8_t *)(lVar19 + 0x11) = 0;
      if (puVar18 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar18);
      }
    }
    else {
      uVar23 = (uint64_t)*(int *)param_4[1];
      piVar21 = (int *)param_4[1] + 1;
      param_4[1] = (int64_t)piVar21;
      if ((uint64_t)((param_4[2] - (int64_t)piVar21) + *param_4) <= uVar23) {
        System_BufferManager(param_4,(uVar23 - *param_4) + (int64_t)piVar21);
        piVar21 = (int *)param_4[1];
      }
      param_4[1] = (int64_t)piVar21 + uVar23;
    }
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a24a0(int64_t *param_1)
void FUN_1803a24a0(int64_t *param_1)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
  uVar4 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(int16_t *)(puVar3 + 2) = 0;
  *(int32_t *)((int64_t)puVar3 + 0x62) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x54) = 0;
  *(int32_t *)((int64_t)puVar3 + 0x5c) = 0;
  *(int16_t *)(puVar3 + 0xc) = 0;
  *(int8_t *)((int64_t)puVar3 + 0x66) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x14) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x1c) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x24) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x2c) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x34) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x3c) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x44) = 0;
  *(uint64_t *)((int64_t)puVar3 + 0x4c) = 0;
  *(int8_t *)((int64_t)puVar3 + 0x12) = 0x23;
  piVar2 = *(int **)(*param_1 + 8);
  iVar1 = *piVar2;
  *(int **)(*param_1 + 8) = piVar2 + 1;
  if (iVar1 != 0) {
    uVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,3);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar4,*(uint64_t *)(*param_1 + 8),(int64_t)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a25c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1803a25c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int64_t param_6)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  byte bVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar12;
  int64_t lVar13;
  int64_t *plStack_98;
  void *puStack_78;
  int8_t *puStack_70;
  uint uStack_68;
  uint uStack_60;
  void *puStack_58;
  int8_t *puStack_50;
  uint uStack_48;
  uint64_t uStack_40;
  int64_t lVar11;
  
  FUN_1800634b0(param_2,0x40,&unknown_var_8072_ptr,param_4,param_5);
  CoreEngineDataTransformer(&puStack_58,param_6);
  uVar9 = uStack_48 + 1;
  CoreEngineDataBufferProcessor(&puStack_58,uVar9);
  *(int16_t *)((uint64_t)uStack_48 + (int64_t)puStack_50) = 0x2f;
  uStack_48 = uVar9;
  if (param_2 != 0) {
    lVar13 = -1;
    do {
      lVar10 = lVar13;
      lVar13 = lVar10 + 1;
    } while (*(char *)(param_2 + lVar13) != '\0');
    if (0 < (int)lVar13) {
      CoreEngineDataBufferProcessor(&puStack_58,uVar9 + (int)lVar13);
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)uStack_48 + (int64_t)puStack_50,param_2,(int64_t)((int)lVar10 + 2));
    }
  }
  cVar2 = FUN_180624af0(&puStack_58);
  iVar12 = 0;
  if (cVar2 != '\0') {
    FUN_180627910(&puStack_78,param_2);
    FUN_1800b2cd0();
    puStack_78 = &system_data_buffer_ptr;
    if (puStack_70 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_70 = (int8_t *)0x0;
    uStack_60 = 0;
    puStack_78 = &system_state_ptr;
    if (plStack_98 != (int64_t *)0x0) {
      (**(code **)(*plStack_98 + 0x28))();
      (**(code **)(*plStack_98 + 0x28))(plStack_98);
    }
    plVar1 = *(int64_t **)(param_1 + 0x1c0);
    *(int64_t **)(param_1 + 0x1c0) = plStack_98;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plStack_98 != (int64_t *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
      (**(code **)(*plStack_98 + 0x38))();
    }
  }
  puStack_58 = &system_data_buffer_ptr;
  if (puStack_50 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_50 = (int8_t *)0x0;
  uStack_40 = (uint64_t)uStack_40._4_4_ << 0x20;
  puStack_58 = &system_state_ptr;
  lVar13 = 0x80;
  do {
    bVar8 = (byte)iVar12;
    if ((((((*(uint *)(param_1 + 0x860) >> (bVar8 & 0x1f) & 1) != 0) ||
          ((*(uint *)(param_1 + 0x864) >> (bVar8 & 0x1f) & 1) != 0)) ||
         ((*(uint *)(param_1 + 0x868) >> (bVar8 & 0x1f) & 1) != 0)) ||
        ((*(uint *)(param_1 + 0x86c) >> (bVar8 & 0x1f) & 1) != 0)) &&
       ((iVar12 < *(int *)(*(int64_t *)(param_1 + 0x10) + 0x78) &&
        (*(char *)(*(int64_t *)(lVar13 + *(int64_t *)(param_1 + 0x10)) + 0x150) == '\0')))) {
      FUN_1800634b0(param_2,0x40,&unknown_var_8048_ptr,param_4 & 0xffffffff,param_5,iVar12);
      CoreEngineDataTransformer(&puStack_78,param_6);
      uVar9 = uStack_68 + 1;
      if (uVar9 != 0) {
        uVar3 = uStack_68 + 2;
        if (puStack_70 == (int8_t *)0x0) {
          if ((int)uVar3 < 0x10) {
            uVar3 = 0x10;
          }
          puStack_70 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
          *puStack_70 = 0;
        }
        else {
          if (uVar3 <= uStack_60) goto LAB_1803a286b;
          puStack_70 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_70,uVar3,0x10,0x13);
        }
        uStack_60 = CoreEngineSystemCleanup(puStack_70);
      }
LAB_1803a286b:
      *(int16_t *)(puStack_70 + uStack_68) = 0x2f;
      uStack_68 = uVar9;
      if (param_2 != 0) {
        lVar10 = -1;
        do {
          lVar11 = lVar10;
          lVar10 = lVar11 + 1;
        } while (*(char *)(param_2 + lVar10) != '\0');
        if (0 < (int)lVar10) {
          iVar12 = uVar9 + (int)lVar10;
          if (iVar12 != 0) {
            uVar9 = iVar12 + 1;
            if (puStack_70 == (int8_t *)0x0) {
              if ((int)uVar9 < 0x10) {
                uVar9 = 0x10;
              }
              puStack_70 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar9,0x13);
              *puStack_70 = 0;
            }
            else {
              if (uVar9 <= uStack_60) goto LAB_1803a290a;
              puStack_70 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_70,uVar9,0x10,0x13);
            }
            uStack_60 = CoreEngineSystemCleanup(puStack_70);
          }
LAB_1803a290a:
                    // WARNING: Subroutine does not return
          memcpy(puStack_70 + uStack_68,param_2,(int64_t)((int)lVar11 + 2));
        }
      }
      cVar2 = FUN_180624af0(&puStack_78);
      if (cVar2 == '\0') {
        if ((0 < *(int *)(param_6 + 0x10)) &&
           (*(char *)(*(int64_t *)(param_1 + 0x10) + 0x30) != '\0')) {
          *(int8_t *)(*(int64_t *)(param_1 + 0x10) + 0x30) = 0;
          FUN_180627020(&unknown_var_8008_ptr,param_2);
        }
      }
      else {
        puVar6 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
        puVar7 = (int8_t *)0x0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(int16_t *)(puVar6 + 2) = 0;
        *(int8_t *)((int64_t)puVar6 + 0x12) = 3;
        *(int32_t *)((int64_t)puVar6 + 0x62) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x54) = 0;
        *(int32_t *)((int64_t)puVar6 + 0x5c) = 0;
        *(int16_t *)(puVar6 + 0xc) = 0;
        *(int8_t *)((int64_t)puVar6 + 0x66) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x14) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x1c) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x24) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x2c) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x34) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x3c) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x44) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x4c) = 0;
        puStack_58 = &system_data_buffer_ptr;
        uStack_40 = 0;
        puStack_50 = (int8_t *)0x0;
        uStack_48 = 0;
        if (uStack_68 != 0) {
          iVar4 = uStack_68 + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puVar7 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
          *puVar7 = 0;
          puStack_50 = puVar7;
          uVar5 = CoreEngineSystemCleanup(puVar7);
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
          if (uStack_68 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar7,puStack_70,uStack_68 + 1);
          }
        }
        if (puStack_70 != (int8_t *)0x0) {
          uStack_48 = 0;
          if (puVar7 != (int8_t *)0x0) {
            *puVar7 = 0;
          }
          uStack_40 = uStack_40 & 0xffffffff;
        }
        FUN_1802a7680(&puStack_58,puVar6);
        puStack_58 = &system_data_buffer_ptr;
        if (puStack_50 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_50 = (int8_t *)0x0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        puStack_58 = &system_state_ptr;
        *(int32_t *)((int64_t)puVar6 + 0x54) = 0xb;
        FUN_1803a39b0(param_1,iVar12,puVar6);
      }
      puStack_78 = &system_data_buffer_ptr;
      if (puStack_70 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puStack_70 = (int8_t *)0x0;
      uStack_60 = 0;
      puStack_78 = &system_state_ptr;
    }
    iVar12 = iVar12 + 1;
    lVar13 = lVar13 + 8;
    if (0xf < iVar12) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




