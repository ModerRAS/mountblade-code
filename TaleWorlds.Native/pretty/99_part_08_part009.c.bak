#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part009.c - 9 个函数

// 函数: void FUN_1804e6ae1(void)
void FUN_1804e6ae1(void)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte *pbVar5;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar6;
  uint64_t in_R11;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int64_t in_stack_00000088;
  
  do {
    lVar2 = *(int64_t *)(unaff_RDI + 8);
    lVar3 = *(int64_t *)(lVar2 + in_R11 * 8);
    while (lVar3 != 0) {
      pbVar5 = &system_buffer_ptr;
      if (*(byte **)(lVar3 + 8) != (byte *)0x0) {
        pbVar5 = *(byte **)(lVar3 + 8);
      }
      uVar6 = 0;
      uVar4 = 0xcbf29ce484222325;
      if (*(uint *)(lVar3 + 0x10) != 0) {
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 + 1;
          uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        } while (uVar6 < *(uint *)(lVar3 + 0x10));
      }
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8) = *(uint64_t *)(lVar3 + 0x60);
      uVar4 = uVar4 % unaff_RBP & 0xffffffff;
      *(uint64_t *)(lVar3 + 0x60) = *(uint64_t *)(unaff_RSI + uVar4 * 8);
      *(int64_t *)(unaff_RSI + uVar4 * 8) = lVar3;
      lVar2 = *(int64_t *)(unaff_RDI + 8);
      lVar3 = *(int64_t *)(lVar2 + in_R11 * 8);
    }
    in_R11 = in_R11 + 1;
  } while (in_R11 < *(uint64_t *)(unaff_RDI + 0x10));
  if ((1 < *(uint64_t *)(unaff_RDI + 0x10)) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  *(uint64_t *)(in_stack_00000088 + 0x60) = *(uint64_t *)(unaff_RSI + unaff_R15 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R15 * 8) = in_stack_00000088;
  lVar2 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar2 + unaff_R15 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}






// 函数: void FUN_1804e6b8e(void)
void FUN_1804e6b8e(void)

{
  int64_t lVar1;
  uint64_t in_RAX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int64_t in_stack_00000088;
  
  if ((1 < in_RAX) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  *(uint64_t *)(in_stack_00000088 + 0x60) = *(uint64_t *)(unaff_RSI + unaff_R15 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R15 * 8) = in_stack_00000088;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar1 + unaff_R15 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1804e6c00(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3,0xfffffffffffffffe);
  *puVar1 = &system_state_ptr;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  *puVar1 = &unknown_var_3480_ptr;
  puVar1[1] = puVar1 + 3;
  *(int32_t *)(puVar1 + 2) = 0;
  *(int8_t *)(puVar1 + 3) = 0;
  *(uint64_t **)(param_1 + 0x18) = puVar1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  FUN_1804e6c90(param_1,param_2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e6c90(uint64_t *param_1,uint64_t *param_2)
void FUN_1804e6c90(uint64_t *param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  int64_t lVar2;
  void *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  void *puVar10;
  
  lVar9 = param_1[3];
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[2] = 0;
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x54);
  uVar5 = *(int32_t *)(param_2 + 0xb);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x5c);
  *(int32_t *)(param_1 + 10) = *(int32_t *)(param_2 + 10);
  *(int32_t *)((int64_t)param_1 + 0x54) = uVar4;
  *(int32_t *)(param_1 + 0xb) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0x5c) = uVar6;
  param_1[0xc] = param_2[0xc];
  param_1[3] = lVar9;
  if (param_2[2] != 0) {
    puVar8 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x24,4,3);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(int32_t *)(puVar8 + 4) = 0;
    param_1[2] = puVar8;
    puVar1 = (int32_t *)param_2[2];
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *(int32_t *)puVar8 = *puVar1;
    *(int32_t *)((int64_t)puVar8 + 4) = uVar4;
    *(int32_t *)(puVar8 + 1) = uVar5;
    *(int32_t *)((int64_t)puVar8 + 0xc) = uVar6;
    uVar4 = puVar1[5];
    uVar5 = puVar1[6];
    uVar6 = puVar1[7];
    *(int32_t *)(puVar8 + 2) = puVar1[4];
    *(int32_t *)((int64_t)puVar8 + 0x14) = uVar4;
    *(int32_t *)(puVar8 + 3) = uVar5;
    *(int32_t *)((int64_t)puVar8 + 0x1c) = uVar6;
    *(int32_t *)(puVar8 + 4) = puVar1[8];
    lVar9 = param_1[3];
  }
  lVar2 = param_2[3];
  *(int32_t *)(lVar9 + 0x10) = *(int32_t *)(lVar2 + 0x10);
  puVar3 = *(void **)(lVar2 + 8);
  puVar10 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar10 = puVar3;
  }
                    // WARNING: Could not recover jumptable at 0x0001804e6d85. Too many branches
                    // WARNING: Treating indirect jump as call
  strcpy_s(*(uint64_t *)(lVar9 + 8),0x40,puVar10);
  return;
}






// 函数: void FUN_1804e6d90(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1804e6d90(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint64_t uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar4 = *(uint *)(param_1 + 0x52ed94);
  uVar11 = 0;
  if (0 < (int64_t)(int)uVar4) {
    piVar17 = (int *)(param_1 + 0x30b0);
    uVar8 = uVar11;
    uVar18 = uVar11;
    do {
      if (-1 < *piVar17) goto LAB_1804e6de8;
      uVar8 = (uint64_t)((int)uVar8 + 1);
      uVar18 = uVar18 + 1;
      piVar17 = piVar17 + 0x298;
    } while ((int64_t)uVar18 < (int64_t)(int)uVar4);
  }
  uVar8 = (uint64_t)uVar4;
LAB_1804e6de8:
  uVar6 = (uint)uVar8;
  while ((int)uVar6 < (int)uVar4) {
    lVar9 = (int64_t)(int)uVar8 * 0xa60;
    if (*(int64_t *)(lVar9 + 0x3a78 + param_1) == param_3) {
      *(uint64_t *)(lVar9 + 0x3a78 + param_1) = 0;
    }
    lVar9 = *(int64_t *)(lVar9 + 0x3780 + param_1);
    if (*(int64_t *)(lVar9 + 0x1c8) == param_3) {
      *(uint64_t *)(lVar9 + 0x1c8) = 0;
    }
    if (*(int64_t *)(lVar9 + 0x1d0) == param_3) {
      *(uint64_t *)(lVar9 + 0x1d0) = 0;
    }
    uVar18 = uVar11;
    while( true ) {
      cVar2 = *(char *)(lVar9 + 0x12b4);
      if (cVar2 == '\0') {
        iVar15 = (int)(*(int64_t *)(lVar9 + 0x1298) - *(int64_t *)(lVar9 + 0x1290) >> 5);
      }
      else {
        iVar15 = *(int *)(lVar9 + 0x12b0);
      }
      iVar20 = (int)uVar18;
      if (iVar15 <= iVar20) break;
      lVar12 = lVar9 + 0x290;
      if (cVar2 == '\0') {
        lVar12 = *(int64_t *)(lVar9 + 0x1290);
      }
      if (*(int64_t *)((int64_t)iVar20 * 0x20 + 0x10 + lVar12) == param_3) {
        lVar12 = lVar9 + 0x290;
        if (cVar2 == '\0') {
          lVar12 = *(int64_t *)(lVar9 + 0x1290);
        }
        *(uint64_t *)((int64_t)iVar20 * 0x20 + 0x10 + lVar12) = 0;
      }
      uVar18 = (uint64_t)(iVar20 + 1);
    }
    uVar6 = (uint)*(short *)(param_1 + 0x52dda0 + (int64_t)(int)uVar8 * 2);
    uVar8 = (uint64_t)uVar6;
  }
  uVar11 = (uint64_t)*(byte *)(param_3 + 0xa8);
  lVar9 = 0;
  fVar26 = 1e+06;
  fVar27 = -1e+06;
  fVar28 = -1e+06;
  fVar29 = 1e+06;
  if (3 < uVar11) {
    lVar12 = (uVar11 - 4 >> 2) + 1;
    lVar9 = lVar12 * 4;
    puVar13 = (uint64_t *)(param_3 + 0x88);
    do {
      fVar22 = *(float *)puVar13[-1];
      fVar23 = ((float *)puVar13[-1])[1];
      fVar25 = fVar22;
      if (fVar22 <= fVar27) {
        fVar25 = fVar27;
      }
      if (fVar26 <= fVar22) {
        fVar22 = fVar26;
      }
      fVar24 = fVar23;
      if (fVar23 <= fVar28) {
        fVar24 = fVar28;
      }
      if (fVar29 <= fVar23) {
        fVar23 = fVar29;
      }
      fVar27 = ((float *)*puVar13)[1];
      fVar28 = *(float *)*puVar13;
      if (fVar25 <= fVar28) {
        fVar25 = fVar28;
      }
      if (fVar28 <= fVar22) {
        fVar22 = fVar28;
      }
      if (fVar27 <= fVar23) {
        fVar23 = fVar27;
      }
      fVar28 = *(float *)puVar13[1];
      if (fVar24 <= fVar27) {
        fVar24 = fVar27;
      }
      fVar27 = ((float *)puVar13[1])[1];
      if (fVar25 <= fVar28) {
        fVar25 = fVar28;
      }
      pfVar5 = (float *)puVar13[2];
      if (fVar28 <= fVar22) {
        fVar22 = fVar28;
      }
      if (fVar27 <= fVar23) {
        fVar23 = fVar27;
      }
      if (fVar24 <= fVar27) {
        fVar24 = fVar27;
      }
      fVar27 = fVar25;
      if (fVar25 <= *pfVar5) {
        fVar27 = *pfVar5;
      }
      fVar26 = fVar22;
      if (*pfVar5 <= fVar22) {
        fVar26 = *pfVar5;
      }
      fVar29 = fVar23;
      if (pfVar5[1] <= fVar23) {
        fVar29 = pfVar5[1];
      }
      fVar28 = fVar24;
      if (fVar24 <= pfVar5[1]) {
        fVar28 = pfVar5[1];
      }
      lVar12 = lVar12 + -1;
      puVar13 = puVar13 + 4;
    } while (lVar12 != 0);
  }
  if (lVar9 < (int64_t)uVar11) {
    lVar12 = uVar11 - lVar9;
    puVar13 = (uint64_t *)(param_3 + 0x80 + lVar9 * 8);
    fVar22 = fVar26;
    fVar23 = fVar27;
    fVar25 = fVar28;
    fVar24 = fVar29;
    do {
      pfVar5 = (float *)*puVar13;
      puVar13 = puVar13 + 1;
      fVar27 = *pfVar5;
      fVar28 = pfVar5[1];
      fVar26 = fVar27;
      if (fVar22 <= fVar27) {
        fVar26 = fVar22;
      }
      fVar29 = fVar28;
      if (fVar24 <= fVar28) {
        fVar29 = fVar24;
      }
      if (fVar27 <= fVar23) {
        fVar27 = fVar23;
      }
      if (fVar28 <= fVar25) {
        fVar28 = fVar25;
      }
      lVar12 = lVar12 + -1;
      fVar22 = fVar26;
      fVar23 = fVar27;
      fVar25 = fVar28;
      fVar24 = fVar29;
    } while (lVar12 != 0);
  }
  iVar20 = *(int *)(param_2 + 0x28e8);
  iVar15 = (int)(((fVar26 - *(float *)(param_2 + 0x28d0)) - 1e-06) / *(float *)(param_2 + 0x28e0));
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  else if (iVar20 <= iVar15) {
    iVar15 = iVar20 + -1;
  }
  iVar3 = *(int *)(param_2 + 0x28ec);
  iVar21 = (int)(((fVar29 - *(float *)(param_2 + 0x28d4)) - 1e-06) / *(float *)(param_2 + 0x28e4));
  if (iVar21 < 0) {
    iVar21 = 0;
  }
  else if (iVar3 <= iVar21) {
    iVar21 = iVar3 + -1;
  }
  iVar19 = (int)(((fVar27 - *(float *)(param_2 + 0x28d0)) - 1e-06) / *(float *)(param_2 + 0x28e0));
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  else if (iVar20 <= iVar19) {
    iVar19 = iVar20 + -1;
  }
  iVar20 = (int)(((fVar28 - *(float *)(param_2 + 0x28d4)) - 1e-06) / *(float *)(param_2 + 0x28e4));
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  else if (iVar3 <= iVar20) {
    iVar20 = iVar3 + -1;
  }
  do {
    iVar3 = iVar21;
    if (iVar19 < iVar15) {
      return;
    }
    for (; iVar3 <= iVar20; iVar3 = iVar3 + 1) {
      iVar10 = 0;
      lVar9 = *(int64_t *)(param_2 + 0x28c8);
      lVar14 = 0;
      lVar7 = (int64_t)(*(int *)(param_2 + 0x28ec) * iVar15 + iVar3);
      lVar12 = *(int64_t *)(lVar9 + 8 + lVar7 * 0x28);
      iVar16 = (int)(*(int64_t *)(lVar9 + 0x10 + lVar7 * 0x28) - lVar12 >> 3);
      if (0 < iVar16) {
        do {
          if (*(int64_t *)(lVar12 + lVar14 * 8) == param_3) {
            if (iVar10 != iVar16 + -1) {
              *(uint64_t *)(lVar12 + lVar14 * 8) =
                   *(uint64_t *)(lVar12 + -8 + (int64_t)iVar16 * 8);
            }
            plVar1 = (int64_t *)(lVar9 + 0x10 + lVar7 * 0x28);
            *plVar1 = *plVar1 + -8;
            break;
          }
          iVar10 = iVar10 + 1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar16);
      }
    }
    iVar15 = iVar15 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e6ed0(int64_t param_1,int64_t param_2)
void FUN_1804e6ed0(int64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *puStack_78;
  int64_t lStack_70;
  void *puStack_58;
  int64_t lStack_50;
  int32_t uStack_40;
  
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xea0,8,3,0,0xfffffffffffffffe);
  lVar5 = FUN_1803a9530(uVar4);
  FUN_180627910(&puStack_78,param_2 + 0x514);
  uVar4 = CoreEngineDataTransformer(&puStack_58,*(int64_t *)(param_1 + 0x18) + 0x27c8);
  cVar3 = FUN_1803ae820(uVar4,&puStack_78);
  puStack_58 = &system_data_buffer_ptr;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_50 = 0;
  uStack_40 = 0;
  puStack_58 = &system_state_ptr;
  if (cVar3 == '\0') {
    (**(code **)(puStack_78 + 0x10))(&puStack_78,&unknown_var_3728_ptr);
    uVar4 = CoreEngineDataTransformer(&puStack_58,*(int64_t *)(param_1 + 0x18) + 0x27c8);
    FUN_1803ae570(lVar5,uVar4,&puStack_78);
    puStack_58 = &system_data_buffer_ptr;
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    uVar4 = CoreEngineDataTransformer(&puStack_58,*(int64_t *)(param_1 + 0x18) + 0x27c8);
    FUN_1803ae570(lVar5,uVar4,&puStack_78);
    puStack_58 = &system_data_buffer_ptr;
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  uStack_40 = 0;
  lStack_50 = 0;
  puStack_58 = &system_state_ptr;
  fVar1 = *(float *)(param_2 + 0x4e8);
  *(float *)(lVar5 + 0xe1c) = fVar1 * 10.0;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  *(int64_t *)(lVar2 + 0x3360) = lVar5;
  FUN_1803aad40(lVar5,lVar2 + 0x3018,0);
  FUN_180198750(*(uint64_t *)(param_1 + 0x18),0);
  func_0x0001801be740(*(int64_t *)(param_1 + 0x18) + 0x60c10);
  lVar5 = *(int64_t *)(param_1 + 0x18);
  *(float *)(lVar5 + 0x3044) = fVar1;
  *(int *)(lVar5 + 0x3358) = *(int *)(lVar5 + 0x3358) + 1;
  *(int32_t *)(lVar5 + 0x3140) = *(int32_t *)(param_2 + 0x4a8);
  *(int32_t *)(lVar5 + 0x32f4) = 0x3f800000;
  *(uint *)(lVar5 + 0x3324) = *(uint *)(lVar5 + 0x3324) & 0xffffffeb;
  *(int *)(lVar5 + 0x3358) = *(int *)(lVar5 + 0x3358) + 2;
  puStack_78 = &system_data_buffer_ptr;
  if (lStack_70 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e7130(int64_t param_1,uint64_t param_2)
void FUN_1804e7130(int64_t param_1,uint64_t param_2)

{
  int8_t auStack_2a8 [80];
  int32_t uStack_258;
  int64_t lStack_230;
  uint64_t uStack_228;
  uint64_t uStack_98;
  
  uStack_228 = 0xfffffffffffffffe;
  uStack_98 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  uStack_258 = 0;
  *(int32_t *)(system_main_module_state + 0x200) = 0x3d088889;
  lStack_230 = param_1;
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 0x87b7ac,param_2,0x554);
}






// 函数: void FUN_1804e8540(int64_t *param_1)
void FUN_1804e8540(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    if (*(int64_t **)(lVar2 + 0x68) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x68) + 0x38))();
    }
    FUN_180057830();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e8560(uint64_t param_1,int64_t param_2)
void FUN_1804e8560(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int32_t uVar10;
  int8_t auStack_868 [32];
  uint64_t uStack_848;
  uint64_t auStack_838 [36];
  int8_t auStack_718 [848];
  int8_t auStack_3c8 [848];
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  uint64_t uStack_18;
  
  uStack_848 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_868;
  FUN_18018e7e0(auStack_3c8,param_1);
  lVar1 = *(int64_t *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x87bbc8) == '\0') {
    FUN_180198750(lVar1,auStack_3c8);
  }
  else {
    lVar8 = 2;
    puVar4 = (uint64_t *)(param_2 + 0x87bbec);
    puVar5 = auStack_838;
    do {
      puVar9 = puVar5;
      puVar6 = puVar4;
      uVar7 = puVar6[1];
      *puVar9 = *puVar6;
      puVar9[1] = uVar7;
      uVar7 = puVar6[3];
      puVar9[2] = puVar6[2];
      puVar9[3] = uVar7;
      uVar7 = puVar6[5];
      puVar9[4] = puVar6[4];
      puVar9[5] = uVar7;
      uVar7 = puVar6[7];
      puVar9[6] = puVar6[6];
      puVar9[7] = uVar7;
      uVar7 = puVar6[9];
      puVar9[8] = puVar6[8];
      puVar9[9] = uVar7;
      uVar7 = puVar6[0xb];
      puVar9[10] = puVar6[10];
      puVar9[0xb] = uVar7;
      uVar7 = puVar6[0xd];
      puVar9[0xc] = puVar6[0xc];
      puVar9[0xd] = uVar7;
      uVar10 = *(int32_t *)((int64_t)puVar6 + 0x74);
      uVar2 = *(int32_t *)(puVar6 + 0xf);
      uVar3 = *(int32_t *)((int64_t)puVar6 + 0x7c);
      *(int32_t *)(puVar9 + 0xe) = *(int32_t *)(puVar6 + 0xe);
      *(int32_t *)((int64_t)puVar9 + 0x74) = uVar10;
      *(int32_t *)(puVar9 + 0xf) = uVar2;
      *(int32_t *)((int64_t)puVar9 + 0x7c) = uVar3;
      lVar8 = lVar8 + -1;
      puVar4 = puVar6 + 0x10;
      puVar5 = puVar9 + 0x10;
    } while (lVar8 != 0);
    uVar10 = *(int32_t *)((int64_t)puVar6 + 0x84);
    uVar2 = *(int32_t *)(puVar6 + 0x11);
    uVar3 = *(int32_t *)((int64_t)puVar6 + 0x8c);
    *(int32_t *)(puVar9 + 0x10) = *(int32_t *)(puVar6 + 0x10);
    *(int32_t *)((int64_t)puVar9 + 0x84) = uVar10;
    *(int32_t *)(puVar9 + 0x11) = uVar2;
    *(int32_t *)((int64_t)puVar9 + 0x8c) = uVar3;
    *(int32_t *)(puVar9 + 0x12) = *(int32_t *)(puVar6 + 0x12);
    if (*(char *)(lVar1 + 0x3000) == '\0') {
      FUN_18018e0f0(0,auStack_718,auStack_838);
      FUN_180198750(lVar1,auStack_718);
      FUN_1801431d0(auStack_718);
    }
    else {
      puStack_78 = &unknown_var_3480_ptr;
      puStack_70 = auStack_60;
      auStack_60[0] = 0;
      uStack_68 = 8;
      uVar10 = strcpy_s(auStack_60,0x40,&unknown_var_5376_ptr);
      uVar7 = FUN_18018dff0(uVar10,&puStack_78);
      FUN_180198750(lVar1,uVar7);
      puStack_78 = &system_state_ptr;
    }
  }
  FUN_1801431d0(auStack_3c8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_868);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e8740(uint64_t param_1,int64_t param_2)
void FUN_1804e8740(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int8_t auStack_4c8 [32];
  uint64_t uStack_4a8;
  int8_t auStack_498 [60];
  int iStack_45c;
  uint uStack_18c;
  int iStack_158;
  uint64_t auStack_148 [23];
  int iStack_90;
  int aiStack_28 [4];
  uint64_t uStack_18;
  
  uStack_4a8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4c8;
  lVar9 = 2;
  puVar5 = (uint64_t *)(param_2 + 0x87bbec);
  puVar6 = auStack_148;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar4 = puVar7[1];
    *puVar8 = *puVar7;
    puVar8[1] = uVar4;
    uVar4 = puVar7[3];
    puVar8[2] = puVar7[2];
    puVar8[3] = uVar4;
    uVar4 = puVar7[5];
    puVar8[4] = puVar7[4];
    puVar8[5] = uVar4;
    uVar4 = puVar7[7];
    puVar8[6] = puVar7[6];
    puVar8[7] = uVar4;
    uVar4 = puVar7[9];
    puVar8[8] = puVar7[8];
    puVar8[9] = uVar4;
    uVar4 = puVar7[0xb];
    puVar8[10] = puVar7[10];
    puVar8[0xb] = uVar4;
    uVar4 = puVar7[0xd];
    puVar8[0xc] = puVar7[0xc];
    puVar8[0xd] = uVar4;
    puVar6 = puVar8 + 0x10;
    uVar1 = *(int32_t *)((int64_t)puVar7 + 0x74);
    uVar2 = *(int32_t *)(puVar7 + 0xf);
    uVar3 = *(int32_t *)((int64_t)puVar7 + 0x7c);
    *(int32_t *)(puVar8 + 0xe) = *(int32_t *)(puVar7 + 0xe);
    *(int32_t *)((int64_t)puVar8 + 0x74) = uVar1;
    *(int32_t *)(puVar8 + 0xf) = uVar2;
    *(int32_t *)((int64_t)puVar8 + 0x7c) = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
  } while (lVar9 != 0);
  uVar4 = puVar7[0x11];
  *puVar6 = puVar7[0x10];
  puVar8[0x11] = uVar4;
  *(int32_t *)(puVar8 + 0x12) = *(int32_t *)(puVar7 + 0x12);
  lVar9 = FUN_18018dff0(puVar6,param_2 + 0x98d9b0);
  if (lVar9 == 0) {
    FUN_180198750(*(uint64_t *)(param_2 + 0x18),param_1);
  }
  else {
    FUN_18018e7e0(auStack_498,lVar9);
    aiStack_28[0] = 3;
    aiStack_28[1] = 0;
    aiStack_28[2] = 1;
    aiStack_28[3] = 2;
    if (iStack_90 < 0) {
      iStack_90 = 0;
    }
    else if (3 < iStack_90) {
      iStack_90 = 3;
    }
    if (iStack_45c != aiStack_28[iStack_90]) {
      uStack_18c = uStack_18c & 0xffffffef;
    }
    iStack_158 = iStack_158 + 1;
    iStack_45c = aiStack_28[iStack_90];
    FUN_180198750(*(uint64_t *)(param_2 + 0x18),auStack_498);
    FUN_1801431d0(auStack_498);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_4c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




