#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part155.c - 5 个函数

// 函数: void FUN_18013ce2f(void)
void FUN_18013ce2f(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18013ce40(int64_t *param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  uVar6 = 0;
  piVar1 = (int *)(SYSTEM_DATA_MANAGER_A + 0x2e08);
  iVar7 = 0;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = 0;
  iVar4 = *(int *)(lVar2 + 0x2e0c);
  if (iVar4 < 0) {
    uVar3 = iVar4 / 2 + iVar4;
    uVar5 = uVar6;
    if (0 < (int)uVar3) {
      uVar5 = (uint64_t)uVar3;
    }
    FUN_18011da00(piVar1,uVar5);
  }
  *piVar1 = 0;
  iVar4 = iVar7;
  if (*(int *)(lVar2 + 0x2e0c) == 0) {
    FUN_18011da00(piVar1,8);
    iVar4 = *piVar1;
  }
  *(int8_t *)((int64_t)iVar4 + *(int64_t *)(lVar2 + 0x2e10)) = 0;
  *piVar1 = *piVar1 + 1;
  uVar5 = uVar6;
  if (0 < *(int *)(lVar2 + 0x2e18)) {
    do {
      lVar8 = *(int64_t *)(lVar2 + 0x2e20) + uVar5;
      (**(code **)(lVar8 + 0x20))(lVar2,lVar8,piVar1);
      uVar3 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar3;
      uVar5 = uVar5 + 0x30;
    } while ((int)uVar3 < *(int *)(lVar2 + 0x2e18));
  }
  if (param_1 != (int64_t *)0x0) {
    if (*(int64_t *)(lVar2 + 0x2e10) != 0) {
      iVar7 = *piVar1 + -1;
    }
    *param_1 = (int64_t)iVar7;
  }
  lVar8 = 0x180c82861;
  if (*(int64_t *)(lVar2 + 0x2e10) != 0) {
    lVar8 = *(int64_t *)(lVar2 + 0x2e10);
  }
  return lVar8;
}



int64_t FUN_18013ce56(int64_t *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  
  piVar1 = (int *)(unaff_RDI + 0x2e08);
  iVar7 = (int)unaff_RSI;
  *(int *)(unaff_RDI + 0x2e04) = iVar7;
  iVar3 = *(int *)(unaff_RDI + 0x2e0c);
  if (iVar3 < 0) {
    uVar5 = unaff_RSI & 0xffffffff;
    uVar2 = iVar3 / 2 + iVar3;
    if (0 < (int)uVar2) {
      uVar5 = (uint64_t)uVar2;
    }
    FUN_18011da00(piVar1,uVar5);
  }
  *piVar1 = iVar7;
  iVar3 = iVar7;
  if (*(int *)(unaff_RDI + 0x2e0c) == iVar7) {
    FUN_18011da00(piVar1,8);
    iVar3 = *piVar1;
  }
  uVar6 = unaff_RSI & 0xffffffff;
  *(char *)((int64_t)iVar3 + *(int64_t *)(unaff_RDI + 0x2e10)) = (char)unaff_RSI;
  *piVar1 = *piVar1 + 1;
  uVar5 = unaff_RSI;
  if (iVar7 < *(int *)(unaff_RDI + 0x2e18)) {
    do {
      (**(code **)(*(int64_t *)(unaff_RDI + 0x2e20) + uVar5 + 0x20))();
      uVar2 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar2;
      uVar5 = uVar5 + 0x30;
    } while ((int)uVar2 < *(int *)(unaff_RDI + 0x2e18));
  }
  if (param_1 != (int64_t *)0x0) {
    if (*(uint64_t *)(unaff_RDI + 0x2e10) != unaff_RSI) {
      unaff_RSI = (uint64_t)(*piVar1 - 1);
    }
    *param_1 = (int64_t)(int)unaff_RSI;
  }
  lVar4 = 0x180c82861;
  if (*(int64_t *)(unaff_RDI + 0x2e10) != 0) {
    lVar4 = *(int64_t *)(unaff_RDI + 0x2e10);
  }
  return lVar4;
}



int64_t FUN_18013cebd(void)

{
  int64_t lVar1;
  int *unaff_RBX;
  int unaff_EBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar2;
  int64_t *unaff_R15;
  
  uVar2 = unaff_RSI;
  do {
    (**(code **)(*(int64_t *)(unaff_RDI + 0x2e20) + uVar2 + 0x20))();
    unaff_EBP = unaff_EBP + 1;
    uVar2 = uVar2 + 0x30;
  } while (unaff_EBP < *(int *)(unaff_RDI + 0x2e18));
  if (unaff_R15 != (int64_t *)0x0) {
    if (*(uint64_t *)(unaff_RBX + 2) != unaff_RSI) {
      unaff_RSI = (uint64_t)(*unaff_RBX - 1);
    }
    *unaff_R15 = (int64_t)(int)unaff_RSI;
  }
  lVar1 = 0x180c82861;
  if (*(int64_t *)(unaff_RDI + 0x2e10) != 0) {
    lVar1 = *(int64_t *)(unaff_RDI + 0x2e10);
  }
  return lVar1;
}



int64_t FUN_18013cefa(void)

{
  int64_t lVar1;
  int *unaff_RBX;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R15;
  
  if (unaff_R15 != (int64_t *)0x0) {
    if (*(uint64_t *)(unaff_RBX + 2) != unaff_RSI) {
      unaff_RSI = (uint64_t)(*unaff_RBX - 1);
    }
    *unaff_R15 = (int64_t)(int)unaff_RSI;
  }
  lVar1 = 0x180c82861;
  if (*(int64_t *)(unaff_RDI + 0x2e10) != 0) {
    lVar1 = *(int64_t *)(unaff_RDI + 0x2e10);
  }
  return lVar1;
}



int64_t FUN_18013cf04(void)

{
  int64_t lVar1;
  int *unaff_RBX;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R15;
  
  if (*(uint64_t *)(unaff_RBX + 2) != unaff_RSI) {
    unaff_RSI = (uint64_t)(*unaff_RBX - 1);
  }
  *unaff_R15 = (int64_t)(int)unaff_RSI;
  lVar1 = 0x180c82861;
  if (*(int64_t *)(unaff_RDI + 0x2e10) != 0) {
    lVar1 = *(int64_t *)(unaff_RDI + 0x2e10);
  }
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18013cf40(uint64_t param_1,uint64_t param_2,byte *param_3)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint *puVar12;
  uint64_t uVar13;
  int iVar14;
  uint64_t *puVar15;
  uint64_t uVar16;
  uint8_t uStack_15;
  
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar9 = SYSTEM_DATA_MANAGER_B;
  uVar8 = 0xffffffff;
  bVar2 = *param_3;
  pbVar5 = param_3 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar8 = 0xffffffff;
    }
    uVar8 = *(uint *)(&unknown_var_6320_ptr + (uint64_t)(byte)((byte)uVar8 ^ bVar2) * 4) ^ uVar8 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  uVar13 = 0;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
    puVar12 = (uint *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
    uVar16 = uVar13;
    do {
      if (*puVar12 == ~uVar8) {
        puVar15 = (uint64_t *)
                  ((int64_t)(int)uVar16 * 0x38 + *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30));
        if (puVar15 != (uint64_t *)0x0) {
          return puVar15;
        }
        break;
      }
      uVar16 = (uint64_t)((int)uVar16 + 1);
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 0xe;
    } while (uVar13 != (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
  }
  iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
  iVar10 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
  if (iVar10 == iVar3) {
    if (iVar3 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar3 / 2 + iVar3;
    }
    iVar14 = iVar10 + 1;
    if (iVar10 + 1 < iVar7) {
      iVar14 = iVar7;
    }
    if (iVar3 < iVar14) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      uVar9 = func_0x000180120ce0((int64_t)iVar14 * 0x38,uVar9);
      if (*(int64_t *)(lVar6 + 0x2e30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar9,*(int64_t *)(lVar6 + 0x2e30),(int64_t)*(int *)(lVar6 + 0x2e28) * 0x38);
      }
      iVar10 = *(int *)(lVar6 + 0x2e28);
      *(uint64_t *)(lVar6 + 0x2e30) = uVar9;
      *(int *)(lVar6 + 0x2e2c) = iVar14;
    }
  }
  lVar11 = (int64_t)iVar10 * 0x38;
  lVar4 = *(int64_t *)(lVar6 + 0x2e30);
  *(uint64_t *)(lVar11 + lVar4) = 0;
  ((uint64_t *)(lVar11 + lVar4))[1] = 0;
  puVar15 = (uint64_t *)(lVar11 + 0x10 + lVar4);
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar1 = (int32_t *)(lVar11 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(uint64_t *)(lVar11 + 0x30 + lVar4) = CONCAT53(uStack_15,0xffff);
  iVar3 = *(int *)(lVar6 + 0x2e28);
  *(int *)(lVar6 + 0x2e28) = iVar3 + 1;
  puVar15 = (uint64_t *)((int64_t)iVar3 * 0x38 + *(int64_t *)(lVar6 + 0x2e30));
  uVar9 = FUN_1801210b0(param_3);
  *puVar15 = uVar9;
  uVar8 = 0xffffffff;
  bVar2 = *param_3;
  pbVar5 = param_3 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar8 = 0xffffffff;
    }
    uVar8 = *(uint *)(&unknown_var_6320_ptr + ((uint64_t)(uVar8 & 0xff) ^ (uint64_t)bVar2) * 4) ^
            uVar8 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar15 + 1) = ~uVar8;
  return puVar15;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18013cf5d(uint64_t param_1,uint64_t param_2,uint param_3,byte *param_4)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  int iVar7;
  uint in_EAX;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint *puVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t *puVar14;
  uint uVar15;
  uint64_t uVar16;
  byte in_R10B;
  byte *in_R11;
  uint8_t uStackX_13;
  
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar8 = SYSTEM_DATA_MANAGER_B;
  do {
    if (((in_R10B == 0x23) && (*param_4 == 0x23)) && (param_4[1] == 0x23)) {
      in_EAX = param_3;
    }
    bVar2 = *param_4;
    param_4 = param_4 + 1;
    in_EAX = *(uint *)(&unknown_var_6320_ptr + (uint64_t)(byte)((byte)in_EAX ^ in_R10B) * 4) ^ in_EAX >> 8
    ;
    in_R10B = bVar2;
  } while (bVar2 != 0);
  uVar12 = 0;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
    puVar11 = (uint *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
    uVar16 = uVar12;
    do {
      if (*puVar11 == ~in_EAX) {
        puVar14 = (uint64_t *)
                  ((int64_t)(int)uVar16 * 0x38 + *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30));
        if (puVar14 != (uint64_t *)0x0) {
          return puVar14;
        }
        break;
      }
      uVar16 = (uint64_t)((int)uVar16 + 1);
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 0xe;
    } while (uVar12 != (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
  }
  iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
  iVar9 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
  if (iVar9 == iVar3) {
    if (iVar3 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar3 / 2 + iVar3;
    }
    iVar13 = iVar9 + 1;
    if (iVar9 + 1 < iVar7) {
      iVar13 = iVar7;
    }
    if (iVar3 < iVar13) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      uVar8 = func_0x000180120ce0((int64_t)iVar13 * 0x38,uVar8);
      if (*(int64_t *)(lVar6 + 0x2e30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar8,*(int64_t *)(lVar6 + 0x2e30),(int64_t)*(int *)(lVar6 + 0x2e28) * 0x38);
      }
      iVar9 = *(int *)(lVar6 + 0x2e28);
      *(uint64_t *)(lVar6 + 0x2e30) = uVar8;
      *(int *)(lVar6 + 0x2e2c) = iVar13;
    }
  }
  lVar10 = (int64_t)iVar9 * 0x38;
  lVar4 = *(int64_t *)(lVar6 + 0x2e30);
  *(uint64_t *)(lVar10 + lVar4) = 0;
  ((uint64_t *)(lVar10 + lVar4))[1] = 0;
  puVar14 = (uint64_t *)(lVar10 + 0x10 + lVar4);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar1 = (int32_t *)(lVar10 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(uint64_t *)(lVar10 + 0x30 + lVar4) = CONCAT53(uStackX_13,0xffff);
  iVar3 = *(int *)(lVar6 + 0x2e28);
  *(int *)(lVar6 + 0x2e28) = iVar3 + 1;
  puVar14 = (uint64_t *)((int64_t)iVar3 * 0x38 + *(int64_t *)(lVar6 + 0x2e30));
  uVar8 = FUN_1801210b0(in_R11);
  *puVar14 = uVar8;
  uVar15 = 0xffffffff;
  bVar2 = *in_R11;
  pbVar5 = in_R11 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar15 = 0xffffffff;
    }
    uVar15 = *(uint *)(&unknown_var_6320_ptr + ((uint64_t)(uVar15 & 0xff) ^ (uint64_t)bVar2) * 4) ^
             uVar15 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar14 + 1) = ~uVar15;
  return puVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18013cfa8(void)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  int iVar7;
  uint in_EAX;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint *puVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t *puVar14;
  uint uVar15;
  uint64_t uVar16;
  byte *in_R11;
  uint8_t uStackX_13;
  
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar8 = SYSTEM_DATA_MANAGER_B;
  uVar12 = 0;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
    puVar11 = (uint *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
    uVar16 = uVar12;
    do {
      if (*puVar11 == ~in_EAX) {
        puVar14 = (uint64_t *)
                  ((int64_t)(int)uVar16 * 0x38 + *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30));
        if (puVar14 != (uint64_t *)0x0) {
          return puVar14;
        }
        break;
      }
      uVar16 = (uint64_t)((int)uVar16 + 1);
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 0xe;
    } while (uVar12 != (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
  }
  iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e2c);
  iVar9 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28);
  if (iVar9 == iVar3) {
    if (iVar3 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar3 / 2 + iVar3;
    }
    iVar13 = iVar9 + 1;
    if (iVar9 + 1 < iVar7) {
      iVar13 = iVar7;
    }
    if (iVar3 < iVar13) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      uVar8 = func_0x000180120ce0((int64_t)iVar13 * 0x38,uVar8);
      if (*(int64_t *)(lVar6 + 0x2e30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar8,*(int64_t *)(lVar6 + 0x2e30),(int64_t)*(int *)(lVar6 + 0x2e28) * 0x38);
      }
      iVar9 = *(int *)(lVar6 + 0x2e28);
      *(uint64_t *)(lVar6 + 0x2e30) = uVar8;
      *(int *)(lVar6 + 0x2e2c) = iVar13;
    }
  }
  lVar10 = (int64_t)iVar9 * 0x38;
  lVar4 = *(int64_t *)(lVar6 + 0x2e30);
  *(uint64_t *)(lVar10 + lVar4) = 0;
  ((uint64_t *)(lVar10 + lVar4))[1] = 0;
  puVar14 = (uint64_t *)(lVar10 + 0x10 + lVar4);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar1 = (int32_t *)(lVar10 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(uint64_t *)(lVar10 + 0x30 + lVar4) = CONCAT53(uStackX_13,0xffff);
  iVar3 = *(int *)(lVar6 + 0x2e28);
  *(int *)(lVar6 + 0x2e28) = iVar3 + 1;
  puVar14 = (uint64_t *)((int64_t)iVar3 * 0x38 + *(int64_t *)(lVar6 + 0x2e30));
  uVar8 = FUN_1801210b0(in_R11);
  *puVar14 = uVar8;
  uVar15 = 0xffffffff;
  bVar2 = *in_R11;
  pbVar5 = in_R11 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar15 = 0xffffffff;
    }
    uVar15 = *(uint *)(&unknown_var_6320_ptr + ((uint64_t)(uVar15 & 0xff) ^ (uint64_t)bVar2) * 4) ^
             uVar15 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar14 + 1) = ~uVar15;
  return puVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013d010(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_18013d010(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  int iVar1;
  float fVar2;
  int32_t auStackX_18 [4];
  float fStack_18;
  float fStack_14;
  int aiStack_10 [2];
  
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3208_ptr,&fStack_18,&fStack_14);
  if (iVar1 == 2) {
    *(float *)(param_3 + 0xc) = fStack_18;
    *(float *)(param_3 + 0x10) = fStack_14;
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3248_ptr,&fStack_18,&fStack_14);
  if (iVar1 == 2) {
    if (fStack_18 <= *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c)) {
      fStack_18 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x163c);
    }
    fVar2 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1640);
    if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1640) <= fStack_14) {
      fVar2 = fStack_14;
    }
    *(float *)(param_3 + 0x14) = fStack_18;
    *(float *)(param_3 + 0x18) = fVar2;
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3224_ptr,auStackX_18);
  if (iVar1 == 1) {
    *(int32_t *)(param_3 + 0x24) = auStackX_18[0];
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3280_ptr,&fStack_18,&fStack_14);
  if (iVar1 == 2) {
    *(float *)(param_3 + 0x1c) = fStack_18;
    *(float *)(param_3 + 0x20) = fStack_14;
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3264_ptr,aiStack_10);
  if (iVar1 == 1) {
    *(bool *)(param_3 + 0x32) = aiStack_10[0] != 0;
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3320_ptr,auStackX_18,aiStack_10);
  if (iVar1 == 2) {
    *(int32_t *)(param_3 + 0x28) = auStackX_18[0];
    *(int16_t *)(param_3 + 0x30) = (int16_t)aiStack_10[0];
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3304_ptr,auStackX_18);
  if (iVar1 == 1) {
    *(int32_t *)(param_3 + 0x28) = auStackX_18[0];
    *(int16_t *)(param_3 + 0x30) = 0xffff;
    return;
  }
  iVar1 = FUN_18010cbc0(param_4,&unknown_var_3344_ptr,auStackX_18);
  if (iVar1 == 1) {
    *(int32_t *)(param_3 + 0x2c) = auStackX_18[0];
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013d200(int64_t param_1,uint64_t *param_2,int *param_3)
void FUN_18013d200(int64_t param_1,uint64_t *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  
  uVar13 = 0;
  iVar9 = 0;
  uVar14 = uVar13;
  uVar16 = uVar13;
  if (*(int *)(param_1 + 0x1aa0) != 0) {
    do {
      puVar4 = *(uint64_t **)(uVar14 + *(int64_t *)(param_1 + 0x1aa8));
      if ((*(uint *)((int64_t)puVar4 + 0xc) & 0x100) == 0) {
        if (*(int *)(puVar4 + 0x5c) == -1) {
          uVar7 = uVar13;
          if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
            piVar6 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
            uVar10 = uVar13;
            uVar11 = uVar13;
            do {
              if (*piVar6 == *(int *)(puVar4 + 1)) {
                uVar7 = (int64_t)(int)uVar11 * 0x38 + *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30);
                break;
              }
              uVar11 = (uint64_t)((int)uVar11 + 1);
              uVar10 = uVar10 + 1;
              piVar6 = piVar6 + 0xe;
            } while (uVar10 != (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
          }
        }
        else {
          uVar7 = (int64_t)*(int *)(puVar4 + 0x5c) * 0x38 + *(int64_t *)(param_1 + 0x2e30);
        }
        if (uVar7 == 0) {
          uVar7 = FUN_18013c940(*puVar4);
          *(int *)(puVar4 + 0x5c) =
               (int)((int64_t)(uVar7 - *(int64_t *)(param_1 + 0x2e30)) / 0x38);
        }
        fVar1 = *(float *)(puVar4 + 8);
        fVar2 = *(float *)((int64_t)puVar4 + 0x34);
        *(float *)(uVar7 + 0x10) = *(float *)((int64_t)puVar4 + 0x44) - *(float *)(puVar4 + 7);
        *(float *)(uVar7 + 0xc) = fVar1 - fVar2;
        *(uint64_t *)(uVar7 + 0x14) = puVar4[10];
        *(int32_t *)(uVar7 + 0x24) = *(int32_t *)(puVar4 + 6);
        *(uint64_t *)(uVar7 + 0x1c) = *(uint64_t *)((int64_t)puVar4 + 0x34);
        *(int32_t *)(uVar7 + 0x28) = *(int32_t *)(puVar4 + 0x83);
        *(int32_t *)(uVar7 + 0x2c) = *(int32_t *)((int64_t)puVar4 + 0x14);
        *(int16_t *)(uVar7 + 0x30) = *(int16_t *)(puVar4 + 0x86);
        *(int8_t *)(uVar7 + 0x32) = *(int8_t *)((int64_t)puVar4 + 0xb2);
      }
      uVar15 = (int)uVar16 + 1;
      uVar14 = uVar14 + 8;
      uVar16 = (uint64_t)uVar15;
    } while (uVar15 != *(uint *)(param_1 + 0x1aa0));
  }
  if (*(int64_t *)(param_3 + 2) != 0) {
    iVar9 = *param_3 + -1;
  }
  FUN_18011da00(param_3,*(int *)(param_1 + 0x2e28) * 0x60 + iVar9);
  uVar14 = uVar13;
  if (*(int *)(param_1 + 0x2e28) != 0) {
    do {
      lVar5 = *(int64_t *)(param_1 + 0x2e30);
      lVar12 = *(int64_t *)(uVar14 + lVar5);
      lVar8 = strstr(lVar12,&unknown_var_3336_ptr);
      if (lVar8 != 0) {
        lVar12 = lVar8;
      }
      FUN_180122210(param_3,&unknown_var_3384_ptr,*param_2,lVar12);
      iVar9 = *(int *)(uVar14 + 0x24 + lVar5);
      if ((iVar9 != 0) && (iVar9 != 0x11111111)) {
        FUN_180122210(param_3,&unknown_var_3360_ptr,(int)*(float *)(uVar14 + 0x1c + lVar5),
                      (int)*(float *)(uVar14 + 0x20 + lVar5));
        FUN_180122210(param_3,&unknown_var_3416_ptr,*(int32_t *)(uVar14 + 0x24 + lVar5));
      }
      fVar1 = *(float *)(uVar14 + 0xc + lVar5);
      if (((fVar1 != 0.0) || (*(float *)(uVar14 + 0x10 + lVar5) != 0.0)) ||
         (*(int *)(uVar14 + 0x24 + lVar5) == 0x11111111)) {
        FUN_180122210(param_3,&unknown_var_3400_ptr,(int)fVar1,(int)*(float *)(uVar14 + 0x10 + lVar5));
      }
      fVar1 = *(float *)(uVar14 + 0x14 + lVar5);
      if ((fVar1 != 0.0) || (*(float *)(uVar14 + 0x18 + lVar5) != 0.0)) {
        FUN_180122210(param_3,&system_data_buffer_ptr,(int)fVar1,(int)*(float *)(uVar14 + 0x18 + lVar5));
      }
      FUN_180122210(param_3,&unknown_var_3440_ptr,*(int8_t *)(uVar14 + 0x32 + lVar5));
      iVar9 = *(int *)(uVar14 + 0x28 + lVar5);
      if (iVar9 != 0) {
        sVar3 = *(short *)(uVar14 + 0x30 + lVar5);
        if (sVar3 == -1) {
          FUN_180122210(param_3,&unknown_var_3496_ptr);
        }
        else {
          FUN_180122210(param_3,&unknown_var_3472_ptr,iVar9,(int)sVar3);
        }
        if (*(int *)(uVar14 + 0x2c + lVar5) != 0) {
          FUN_180122210(param_3,&unknown_var_3512_ptr);
        }
      }
      FUN_180122210(param_3,&system_data_cc18);
      uVar15 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar15;
      uVar14 = uVar14 + 0x38;
    } while (uVar15 != *(uint *)(param_1 + 0x2e28));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013d22f(uint64_t param_1)
void FUN_18013d22f(uint64_t param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t unaff_RBP;
  uint64_t uVar14;
  int unaff_EDI;
  uint64_t *unaff_R12;
  int *unaff_R14;
  int64_t unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar15;
  
  uVar14 = unaff_RBP & 0xffffffff;
  do {
    puVar4 = *(uint64_t **)(uVar14 + *(int64_t *)(unaff_R15 + 0x1aa8));
    if ((*(uint *)((int64_t)puVar4 + 0xc) & 0x100) == 0) {
      if (*(int *)(puVar4 + 0x5c) == -1) {
        uVar11 = unaff_RBP & 0xffffffff;
        uVar7 = unaff_RBP;
        if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28) != 0) {
          piVar6 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30) + 8);
          uVar10 = unaff_RBP;
          do {
            if (*piVar6 == *(int *)(puVar4 + 1)) {
              uVar7 = (int64_t)(int)uVar11 * 0x38 + *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x2e30);
              break;
            }
            uVar11 = (uint64_t)((int)uVar11 + 1);
            uVar10 = uVar10 + 1;
            piVar6 = piVar6 + 0xe;
          } while (uVar10 != (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28));
        }
      }
      else {
        uVar7 = (int64_t)*(int *)(puVar4 + 0x5c) * 0x38 + *(int64_t *)(unaff_R15 + 0x2e30);
      }
      if (uVar7 == 0) {
        uVar7 = FUN_18013c940(*puVar4);
        *(int *)(puVar4 + 0x5c) =
             (int)((int64_t)(uVar7 - *(int64_t *)(unaff_R15 + 0x2e30)) / 0x38);
      }
      fVar1 = *(float *)(puVar4 + 8);
      fVar2 = *(float *)((int64_t)puVar4 + 0x34);
      *(float *)(uVar7 + 0x10) = *(float *)((int64_t)puVar4 + 0x44) - *(float *)(puVar4 + 7);
      *(float *)(uVar7 + 0xc) = fVar1 - fVar2;
      *(uint64_t *)(uVar7 + 0x14) = puVar4[10];
      *(int32_t *)(uVar7 + 0x24) = *(int32_t *)(puVar4 + 6);
      param_1 = *(uint64_t *)((int64_t)puVar4 + 0x34);
      *(uint64_t *)(uVar7 + 0x1c) = param_1;
      *(int32_t *)(uVar7 + 0x28) = *(int32_t *)(puVar4 + 0x83);
      *(int32_t *)(uVar7 + 0x2c) = *(int32_t *)((int64_t)puVar4 + 0x14);
      *(int16_t *)(uVar7 + 0x30) = *(int16_t *)(puVar4 + 0x86);
      *(int8_t *)(uVar7 + 0x32) = *(int8_t *)((int64_t)puVar4 + 0xb2);
    }
    unaff_EDI = unaff_EDI + 1;
    uVar14 = uVar14 + 8;
    if (unaff_EDI == *(int *)(unaff_R15 + 0x1aa0)) {
      iVar9 = (int)unaff_RBP;
      if (*(uint64_t *)(unaff_R14 + 2) != unaff_RBP) {
        iVar9 = *unaff_R14 + -1;
      }
      FUN_18011da00(param_1,*(int *)(unaff_R15 + 0x2e28) * 0x60 + iVar9);
      uVar14 = unaff_RBP;
      if (*(int *)(unaff_R15 + 0x2e28) != (int)unaff_RBP) {
        do {
          lVar5 = *(int64_t *)(unaff_R15 + 0x2e30);
          lVar12 = *(int64_t *)(uVar14 + lVar5);
          lVar8 = strstr(lVar12,&unknown_var_3336_ptr);
          if (lVar8 != 0) {
            lVar12 = lVar8;
          }
          uVar15 = FUN_180122210(extraout_XMM0_Qa,&unknown_var_3384_ptr,*unaff_R12,lVar12);
          iVar9 = *(int *)(uVar14 + 0x24 + lVar5);
          if ((iVar9 != 0) && (iVar9 != 0x11111111)) {
            uVar15 = FUN_180122210(uVar15,&unknown_var_3360_ptr,(int)*(float *)(uVar14 + 0x1c + lVar5),
                                   (int)*(float *)(uVar14 + 0x20 + lVar5));
            FUN_180122210(uVar15,&unknown_var_3416_ptr,*(int32_t *)(uVar14 + 0x24 + lVar5));
          }
          fVar1 = *(float *)(uVar14 + 0xc + lVar5);
          if (((fVar1 != 0.0) || (*(float *)(uVar14 + 0x10 + lVar5) != 0.0)) ||
             (*(int *)(uVar14 + 0x24 + lVar5) == 0x11111111)) {
            FUN_180122210(fVar1,&unknown_var_3400_ptr,(int)fVar1,(int)*(float *)(uVar14 + 0x10 + lVar5));
          }
          fVar1 = *(float *)(uVar14 + 0x14 + lVar5);
          uVar7 = (uint64_t)(uint)fVar1;
          if ((fVar1 != 0.0) || (*(float *)(uVar14 + 0x18 + lVar5) != 0.0)) {
            uVar7 = FUN_180122210(uVar7,&system_data_buffer_ptr,(int)fVar1,
                                  (int)*(float *)(uVar14 + 0x18 + lVar5));
          }
          uVar15 = FUN_180122210(uVar7,&unknown_var_3440_ptr,*(int8_t *)(uVar14 + 0x32 + lVar5));
          iVar9 = *(int *)(uVar14 + 0x28 + lVar5);
          if (iVar9 != 0) {
            sVar3 = *(short *)(uVar14 + 0x30 + lVar5);
            if (sVar3 == -1) {
              uVar15 = FUN_180122210(uVar15,&unknown_var_3496_ptr);
            }
            else {
              uVar15 = FUN_180122210(uVar15,&unknown_var_3472_ptr,iVar9,(int)sVar3);
            }
            if (*(int *)(uVar14 + 0x2c + lVar5) != 0) {
              uVar15 = FUN_180122210(uVar15,&unknown_var_3512_ptr);
            }
          }
          FUN_180122210(uVar15,&system_data_cc18);
          uVar13 = (int)unaff_RBP + 1;
          unaff_RBP = (uint64_t)uVar13;
          uVar14 = uVar14 + 0x38;
        } while (uVar13 != *(uint *)(unaff_R15 + 0x2e28));
      }
      return;
    }
  } while( true );
}





// 函数: void FUN_18013d36b(int32_t param_1)
void FUN_18013d36b(int32_t param_1)

{
  short sVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t unaff_RBP;
  uint64_t uVar7;
  uint64_t *unaff_R12;
  int *unaff_R14;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar8;
  float fVar9;
  
  iVar4 = (int)unaff_RBP;
  if (*(uint64_t *)(unaff_R14 + 2) != unaff_RBP) {
    iVar4 = *unaff_R14 + -1;
  }
  FUN_18011da00(param_1,*(int *)(unaff_R15 + 0x2e28) * 0x60 + iVar4);
  uVar7 = unaff_RBP;
  if (*(int *)(unaff_R15 + 0x2e28) != (int)unaff_RBP) {
    do {
      lVar2 = *(int64_t *)(unaff_R15 + 0x2e30);
      lVar5 = *(int64_t *)(uVar7 + lVar2);
      lVar3 = strstr(lVar5,&unknown_var_3336_ptr);
      if (lVar3 != 0) {
        lVar5 = lVar3;
      }
      uVar8 = FUN_180122210(extraout_XMM0_Da,&unknown_var_3384_ptr,*unaff_R12,lVar5);
      iVar4 = *(int *)(uVar7 + 0x24 + lVar2);
      if ((iVar4 != 0) && (iVar4 != 0x11111111)) {
        uVar8 = FUN_180122210(uVar8,&unknown_var_3360_ptr,(int)*(float *)(uVar7 + 0x1c + lVar2),
                              (int)*(float *)(uVar7 + 0x20 + lVar2));
        FUN_180122210(uVar8,&unknown_var_3416_ptr,*(int32_t *)(uVar7 + 0x24 + lVar2));
      }
      fVar9 = *(float *)(uVar7 + 0xc + lVar2);
      if (((fVar9 != 0.0) || (*(float *)(uVar7 + 0x10 + lVar2) != 0.0)) ||
         (*(int *)(uVar7 + 0x24 + lVar2) == 0x11111111)) {
        FUN_180122210(fVar9,&unknown_var_3400_ptr,(int)fVar9,(int)*(float *)(uVar7 + 0x10 + lVar2));
      }
      fVar9 = *(float *)(uVar7 + 0x14 + lVar2);
      if ((fVar9 != 0.0) || (*(float *)(uVar7 + 0x18 + lVar2) != 0.0)) {
        fVar9 = (float)FUN_180122210(fVar9,&system_data_buffer_ptr,(int)fVar9,
                                     (int)*(float *)(uVar7 + 0x18 + lVar2));
      }
      uVar8 = FUN_180122210(fVar9,&unknown_var_3440_ptr,*(int8_t *)(uVar7 + 0x32 + lVar2));
      iVar4 = *(int *)(uVar7 + 0x28 + lVar2);
      if (iVar4 != 0) {
        sVar1 = *(short *)(uVar7 + 0x30 + lVar2);
        if (sVar1 == -1) {
          uVar8 = FUN_180122210(uVar8,&unknown_var_3496_ptr);
        }
        else {
          uVar8 = FUN_180122210(uVar8,&unknown_var_3472_ptr,iVar4,(int)sVar1);
        }
        if (*(int *)(uVar7 + 0x2c + lVar2) != 0) {
          uVar8 = FUN_180122210(uVar8,&unknown_var_3512_ptr);
        }
      }
      FUN_180122210(uVar8,&system_data_cc18);
      uVar6 = (int)unaff_RBP + 1;
      unaff_RBP = (uint64_t)uVar6;
      uVar7 = uVar7 + 0x38;
    } while (uVar6 != *(uint *)(unaff_R15 + 0x2e28));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



