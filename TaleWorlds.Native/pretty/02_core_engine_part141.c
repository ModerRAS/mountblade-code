#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part141.c - 4 个函数

// 函数: void FUN_180134400(void)
void FUN_180134400(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  lVar2 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar5 = (int64_t)*(int *)(lVar2 + 0xc) * 0x1c + *(int64_t *)(lVar2 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar2 = *(int64_t *)(lVar4 + 0x1af8);
  FUN_180291b40(*(uint64_t *)(lVar2 + 0x2e8),*(uint64_t *)(lVar5 + 0xc),
                *(uint64_t *)(lVar5 + 0x14),0);
  puVar1 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar2 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar2 + 0x2e8) + 0x60) * 0x10);
  uVar3 = puVar1[1];
  *(uint64_t *)(lVar2 + 0x228) = *puVar1;
  *(uint64_t *)(lVar2 + 0x230) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180134480(int64_t param_1,int param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  ushort uStack_46;
  uint uStack_24;
  
  uVar6 = 0;
  lVar9 = (int64_t)*(int *)(param_1 + 0x2c8);
  if (0 < lVar9) {
    piVar5 = *(int **)(param_1 + 0x2d0);
    param_3 = uVar6;
    do {
      if (*piVar5 == param_2) {
        return *(int **)(param_1 + 0x2d0) + (int64_t)(int)uVar6 * 0x10;
      }
      uVar6 = (uint64_t)((int)uVar6 + 1);
      param_3 = param_3 + 1;
      piVar5 = piVar5 + 0x10;
    } while ((int64_t)param_3 < lVar9);
  }
  iVar2 = *(int *)(param_1 + 0x2cc);
  if (*(int *)(param_1 + 0x2c8) == iVar2) {
    iVar8 = *(int *)(param_1 + 0x2c8) + 1;
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    if (iVar2 < iVar8) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uVar4 = func_0x000180120ce0((int64_t)iVar8 << 6,SYSTEM_DATA_MANAGER_B,param_3,lVar9,
                                  0xfffffffffffffffe);
      if (*(int64_t *)(param_1 + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar4,*(int64_t *)(param_1 + 0x2d0),(int64_t)*(int *)(param_1 + 0x2c8) << 6);
      }
      *(uint64_t *)(param_1 + 0x2d0) = uVar4;
      *(int *)(param_1 + 0x2cc) = iVar8;
    }
  }
  lVar7 = (int64_t)*(int *)(param_1 + 0x2c8) * 0x40;
  lVar9 = *(int64_t *)(param_1 + 0x2d0);
  *(uint64_t *)(lVar7 + lVar9) = 0;
  ((uint64_t *)(lVar7 + lVar9))[1] = (uint64_t)uStack_46 << 0x10;
  puVar1 = (uint64_t *)(lVar7 + 0x10 + lVar9);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1 = (uint64_t *)(lVar7 + 0x20 + lVar9);
  *puVar1 = 0;
  puVar1[1] = (uint64_t)uStack_24 << 0x20;
  puVar1 = (uint64_t *)(lVar7 + 0x30 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
  piVar5 = (int *)(*(int64_t *)(param_1 + 0x2d0) + -0x40 +
                  (int64_t)*(int *)(param_1 + 0x2c8) * 0x40);
  *piVar5 = param_2;
  return piVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180134640(void *param_1,int param_2,int32_t param_3)
void FUN_180134640(void *param_1,int param_2,int32_t param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int64_t lVar14;
  void *puVar15;
  int *piVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int iVar19;
  uint64_t unaff_RDI;
  uint64_t uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar20 = 0;
  iVar11 = param_2;
  if (param_1 != (void *)0x0) {
    iVar11 = 0;
  }
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar6 + 0x1af8);
  FUN_18012e2d0(iVar11 + 0x11223347);
  puVar15 = &unknown_var_2648_ptr;
  if (param_1 != (void *)0x0) {
    puVar15 = param_1;
  }
  iVar11 = FUN_180121250(puVar15,0,
                         *(int32_t *)
                          (*(int64_t *)(lVar5 + 0x220) + -4 + (int64_t)*(int *)(lVar5 + 0x218) * 4
                          ));
  lVar14 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar11) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar11;
  }
  if (*(int *)(lVar14 + 0x1b30) == iVar11) {
    *(int8_t *)(lVar14 + 0x1b3f) = 1;
  }
  piVar16 = (int *)(*(int64_t *)(lVar14 + 0x1af8) + 0x218);
  *piVar16 = *piVar16 + -1;
  lVar14 = FUN_180134480(lVar5);
  *(int32_t *)(lVar14 + 0xc) = 0;
  *(int *)(lVar14 + 0x10) = param_2;
  *(int32_t *)(lVar14 + 4) = param_3;
  fVar23 = *(float *)(lVar5 + 0x68);
  *(int64_t *)(lVar5 + 0x210) = lVar14;
  if (fVar23 == 0.0) {
    fVar23 = *(float *)(lVar5 + 0x260) - *(float *)(lVar5 + 0x40);
  }
  fVar22 = *(float *)(lVar5 + 0x204) - *(float *)(lVar6 + 0x166c);
  *(float *)(lVar14 + 0x14) = fVar22;
  fVar22 = fVar22 + 1.0;
  fVar23 = fVar23 - *(float *)(lVar5 + 0x8c);
  if (fVar23 <= fVar22) {
    fVar23 = fVar22;
  }
  *(float *)(lVar14 + 0x18) = fVar23;
  *(int32_t *)(lVar14 + 0x24) = *(int32_t *)(lVar5 + 0x104);
  *(int32_t *)(lVar14 + 0x28) = *(int32_t *)(lVar5 + 0x118);
  uVar3 = *(int32_t *)(lVar5 + 0x104);
  *(int32_t *)(lVar14 + 0x20) = uVar3;
  *(int32_t *)(lVar14 + 0x1c) = uVar3;
  *(int32_t *)(lVar5 + 0x20c) = 0;
  *(float *)(lVar5 + 0x100) = (float)(int)(*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x204));
  iVar11 = *(int *)(lVar14 + 0x30);
  if ((iVar11 != 0) && (iVar11 != param_2 + 1)) {
    iVar11 = *(int *)(lVar14 + 0x34);
    if (iVar11 < 0) {
      uVar12 = iVar11 / 2 + iVar11;
      uVar17 = uVar20;
      if (0 < (int)uVar12) {
        uVar17 = (uint64_t)uVar12;
      }
      FUN_18013e250(lVar14 + 0x30,uVar17);
    }
    *(int32_t *)(lVar14 + 0x30) = 0;
    iVar11 = 0;
  }
  *(bool *)(lVar14 + 8) = iVar11 == 0;
  if (iVar11 == 0) {
    iVar11 = param_2 + 1;
    FUN_18013e250(lVar14 + 0x30,iVar11);
    if (0 < iVar11) {
      iVar10 = *(int *)(lVar14 + 0x30);
      uVar17 = uVar20;
      do {
        iVar13 = *(int *)(lVar14 + 0x34);
        iVar19 = (int)uVar17;
        if (iVar10 == iVar13) {
          if (iVar13 == 0) {
            iVar13 = 8;
          }
          else {
            iVar13 = iVar13 / 2 + iVar13;
          }
          iVar8 = iVar10 + 1;
          if (iVar10 + 1 < iVar13) {
            iVar8 = iVar13;
          }
          FUN_18013e250(lVar14 + 0x30,iVar8);
          iVar10 = *(int *)(lVar14 + 0x30);
        }
        lVar6 = *(int64_t *)(lVar14 + 0x38);
        uVar12 = iVar19 + 1;
        uVar17 = (uint64_t)uVar12;
        lVar18 = (int64_t)iVar10 * 0x1c;
        *(uint64_t *)(lVar18 + lVar6) = (uint64_t)(uint)((float)iVar19 * (1.0 / (float)param_2));
        ((uint64_t *)(lVar18 + lVar6))[1] = 0x7f7fffff00000000;
        *(uint64_t *)(lVar18 + 0x10 + lVar6) = 0xff7fffff7f7fffff;
        *(int32_t *)(lVar18 + 0x18 + lVar6) = 0xff7fffff;
        *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
        iVar10 = *(int *)(lVar14 + 0x30);
      } while ((int)uVar12 < iVar11);
    }
  }
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar17 = uVar20;
  if (0 < param_2) {
    do {
      iVar10 = (int)uVar20;
      lVar18 = *(int64_t *)(lVar14 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0x210);
      iVar11 = iVar10;
      if (iVar10 < 0) {
        iVar11 = *(int *)(lVar7 + 0xc);
      }
      fVar23 = *(float *)(lVar7 + 0x14);
      uVar21 = iVar10 + 1;
      fVar22 = *(float *)(lVar7 + 0x18) - fVar23;
      fVar24 = *(float *)(lVar5 + 0x40) + 0.5;
      uVar12 = uVar21;
      if ((int)uVar21 < 0) {
        uVar12 = *(uint *)(lVar7 + 0xc);
      }
      uVar20 = (uint64_t)uVar21;
      fVar4 = *(float *)((int64_t)(int)uVar12 * 0x1c + *(int64_t *)(lVar7 + 0x38));
      pfVar1 = (float *)(uVar17 + 0xc + lVar18);
      *pfVar1 = (float)(int)((fVar22 * *(float *)((int64_t)iVar11 * 0x1c +
                                                 *(int64_t *)(lVar7 + 0x38)) + fVar23 + fVar24) -
                            1.0);
      pfVar1[1] = -3.4028235e+38;
      pfVar1[2] = (float)(int)((fVar22 * fVar4 + fVar23 + fVar24) - 1.0);
      pfVar1[3] = 3.4028235e+38;
      fVar23 = *(float *)(uVar17 + 0x10 + lVar18);
      if (fVar23 <= *(float *)(lVar5 + 0x22c)) {
        fVar23 = *(float *)(lVar5 + 0x22c);
      }
      fVar22 = *(float *)(uVar17 + 0xc + lVar18);
      fVar24 = *(float *)(lVar5 + 0x228);
      if (*(float *)(lVar5 + 0x228) <= fVar22) {
        fVar24 = fVar22;
      }
      *(float *)(uVar17 + 0x10 + lVar18) = fVar23;
      *(float *)(uVar17 + 0xc + lVar18) = fVar24;
      fVar23 = *(float *)(uVar17 + 0x14 + lVar18);
      fVar22 = *(float *)(uVar17 + 0x18 + lVar18);
      if (*(float *)(lVar5 + 0x230) <= fVar23) {
        fVar23 = *(float *)(lVar5 + 0x230);
      }
      if (*(float *)(lVar5 + 0x234) <= fVar22) {
        fVar22 = *(float *)(lVar5 + 0x234);
      }
      *(float *)(uVar17 + 0x14 + lVar18) = fVar23;
      *(float *)(uVar17 + 0x18 + lVar18) = fVar22;
      uVar17 = uVar17 + 0x1c;
    } while ((int)uVar21 < param_2);
  }
  FUN_180291cf0(*(uint64_t *)(lVar5 + 0x2e8),*(int32_t *)(lVar14 + 0x10));
  lVar5 = SYSTEM_DATA_MANAGER_A;
  lVar6 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar14 = (int64_t)*(int *)(lVar6 + 0xc) * 0x1c + *(int64_t *)(lVar6 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar6 = *(int64_t *)(lVar5 + 0x1af8);
  FUN_180291b40(*(uint64_t *)(lVar6 + 0x2e8),*(uint64_t *)(lVar14 + 0xc),
                *(uint64_t *)(lVar14 + 0x14),0);
  lVar5 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar6 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar6 + 0x2e8) + 0x60) * 0x10);
  uVar9 = puVar2[1];
  *(uint64_t *)(lVar6 + 0x228) = *puVar2;
  *(uint64_t *)(lVar6 + 0x230) = uVar9;
  lVar6 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x210);
  fVar23 = *(float *)(lVar6 + 0x18);
  fVar22 = *(float *)(lVar6 + 0x14);
  fVar24 = *(float *)(((int64_t)*(int *)(lVar6 + 0xc) + 1) * 0x1c + *(int64_t *)(lVar6 + 0x38));
  fVar4 = *(float *)((int64_t)*(int *)(lVar6 + 0xc) * 0x1c + *(int64_t *)(lVar6 + 0x38));
  *(int8_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar5 + 0x1af8);
  fVar23 = (fVar24 - fVar4) * (fVar23 - fVar22) * 0.65;
  if (fVar23 == 0.0) {
    fVar23 = *(float *)(lVar5 + 0x284);
  }
  piVar16 = (int *)(lVar5 + 0x1c8);
  *(float *)(lVar5 + 0x1ac) = fVar23;
  iVar11 = *piVar16;
  iVar10 = *(int *)(lVar5 + 0x1cc);
  if (iVar11 == iVar10) {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    iVar13 = iVar11 + 1;
    if (iVar11 + 1 < iVar10) {
      iVar13 = iVar10;
    }
    FUN_18011dbd0(piVar16,iVar13,iVar13,lVar6,unaff_RDI);
    iVar11 = *piVar16;
  }
  *(float *)(*(int64_t *)(lVar5 + 0x1d0) + (int64_t)iVar11 * 4) = *(float *)(lVar5 + 0x1ac);
  *piVar16 = *piVar16 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013464a(void *param_1,int param_2,int32_t param_3)
void FUN_18013464a(void *param_1,int param_2,int32_t param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int64_t in_RAX;
  int64_t lVar14;
  void *puVar15;
  int *piVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint64_t unaff_RBX;
  int iVar19;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar20;
  uint uVar21;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar22;
  float fVar23;
  float fVar24;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  lVar6 = SYSTEM_DATA_MANAGER_A;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  uVar20 = 0;
  *(uint64_t *)(in_RAX + -8) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  iVar11 = param_2;
  if (param_1 != (void *)0x0) {
    iVar11 = 0;
  }
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int8_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar6 + 0x1af8);
  FUN_18012e2d0(iVar11 + 0x11223347);
  puVar15 = &unknown_var_2648_ptr;
  if (param_1 != (void *)0x0) {
    puVar15 = param_1;
  }
  iVar11 = FUN_180121250(puVar15,0,
                         *(int32_t *)
                          (*(int64_t *)(lVar5 + 0x220) + -4 + (int64_t)*(int *)(lVar5 + 0x218) * 4
                          ));
  lVar14 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar11) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar11;
  }
  if (*(int *)(lVar14 + 0x1b30) == iVar11) {
    *(int8_t *)(lVar14 + 0x1b3f) = 1;
  }
  piVar16 = (int *)(*(int64_t *)(lVar14 + 0x1af8) + 0x218);
  *piVar16 = *piVar16 + -1;
  lVar14 = FUN_180134480(lVar5);
  *(int32_t *)(lVar14 + 0xc) = 0;
  *(int *)(lVar14 + 0x10) = param_2;
  *(int32_t *)(lVar14 + 4) = param_3;
  fVar23 = *(float *)(lVar5 + 0x68);
  *(int64_t *)(lVar5 + 0x210) = lVar14;
  if (fVar23 == 0.0) {
    fVar23 = *(float *)(lVar5 + 0x260) - *(float *)(lVar5 + 0x40);
  }
  fVar22 = *(float *)(lVar5 + 0x204) - *(float *)(lVar6 + 0x166c);
  *(float *)(lVar14 + 0x14) = fVar22;
  fVar22 = fVar22 + 1.0;
  fVar23 = fVar23 - *(float *)(lVar5 + 0x8c);
  if (fVar23 <= fVar22) {
    fVar23 = fVar22;
  }
  *(float *)(lVar14 + 0x18) = fVar23;
  *(int32_t *)(lVar14 + 0x24) = *(int32_t *)(lVar5 + 0x104);
  *(int32_t *)(lVar14 + 0x28) = *(int32_t *)(lVar5 + 0x118);
  uVar3 = *(int32_t *)(lVar5 + 0x104);
  *(int32_t *)(lVar14 + 0x20) = uVar3;
  *(int32_t *)(lVar14 + 0x1c) = uVar3;
  *(int32_t *)(lVar5 + 0x20c) = 0;
  *(float *)(lVar5 + 0x100) = (float)(int)(*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x204));
  iVar11 = *(int *)(lVar14 + 0x30);
  if ((iVar11 != 0) && (iVar11 != param_2 + 1)) {
    iVar11 = *(int *)(lVar14 + 0x34);
    if (iVar11 < 0) {
      uVar12 = iVar11 / 2 + iVar11;
      uVar17 = uVar20;
      if (0 < (int)uVar12) {
        uVar17 = (uint64_t)uVar12;
      }
      FUN_18013e250(lVar14 + 0x30,uVar17);
    }
    *(int32_t *)(lVar14 + 0x30) = 0;
    iVar11 = 0;
  }
  *(bool *)(lVar14 + 8) = iVar11 == 0;
  if (iVar11 == 0) {
    iVar11 = param_2 + 1;
    FUN_18013e250(lVar14 + 0x30,iVar11);
    if (0 < iVar11) {
      iVar10 = *(int *)(lVar14 + 0x30);
      uVar17 = uVar20;
      do {
        iVar13 = *(int *)(lVar14 + 0x34);
        iVar19 = (int)uVar17;
        if (iVar10 == iVar13) {
          if (iVar13 == 0) {
            iVar13 = 8;
          }
          else {
            iVar13 = iVar13 / 2 + iVar13;
          }
          iVar8 = iVar10 + 1;
          if (iVar10 + 1 < iVar13) {
            iVar8 = iVar13;
          }
          FUN_18013e250(lVar14 + 0x30,iVar8);
          iVar10 = *(int *)(lVar14 + 0x30);
        }
        lVar6 = *(int64_t *)(lVar14 + 0x38);
        uVar12 = iVar19 + 1;
        uVar17 = (uint64_t)uVar12;
        lVar18 = (int64_t)iVar10 * 0x1c;
        *(uint64_t *)(lVar18 + lVar6) = (uint64_t)(uint)((float)iVar19 * (1.0 / (float)param_2));
        ((uint64_t *)(lVar18 + lVar6))[1] = 0x7f7fffff00000000;
        *(uint64_t *)(lVar18 + 0x10 + lVar6) = 0xff7fffff7f7fffff;
        *(int32_t *)(lVar18 + 0x18 + lVar6) = 0xff7fffff;
        *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
        iVar10 = *(int *)(lVar14 + 0x30);
      } while ((int)uVar12 < iVar11);
    }
  }
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar17 = uVar20;
  if (0 < param_2) {
    do {
      iVar10 = (int)uVar20;
      lVar18 = *(int64_t *)(lVar14 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0x210);
      iVar11 = iVar10;
      if (iVar10 < 0) {
        iVar11 = *(int *)(lVar7 + 0xc);
      }
      fVar23 = *(float *)(lVar7 + 0x14);
      uVar21 = iVar10 + 1;
      fVar22 = *(float *)(lVar7 + 0x18) - fVar23;
      fVar24 = *(float *)(lVar5 + 0x40) + 0.5;
      uVar12 = uVar21;
      if ((int)uVar21 < 0) {
        uVar12 = *(uint *)(lVar7 + 0xc);
      }
      uVar20 = (uint64_t)uVar21;
      fVar4 = *(float *)((int64_t)(int)uVar12 * 0x1c + *(int64_t *)(lVar7 + 0x38));
      pfVar1 = (float *)(uVar17 + 0xc + lVar18);
      *pfVar1 = (float)(int)((fVar22 * *(float *)((int64_t)iVar11 * 0x1c +
                                                 *(int64_t *)(lVar7 + 0x38)) + fVar23 + fVar24) -
                            1.0);
      pfVar1[1] = -3.4028235e+38;
      pfVar1[2] = (float)(int)((fVar22 * fVar4 + fVar23 + fVar24) - 1.0);
      pfVar1[3] = 3.4028235e+38;
      fVar23 = *(float *)(uVar17 + 0x10 + lVar18);
      if (fVar23 <= *(float *)(lVar5 + 0x22c)) {
        fVar23 = *(float *)(lVar5 + 0x22c);
      }
      fVar22 = *(float *)(uVar17 + 0xc + lVar18);
      fVar24 = *(float *)(lVar5 + 0x228);
      if (*(float *)(lVar5 + 0x228) <= fVar22) {
        fVar24 = fVar22;
      }
      *(float *)(uVar17 + 0x10 + lVar18) = fVar23;
      *(float *)(uVar17 + 0xc + lVar18) = fVar24;
      fVar23 = *(float *)(uVar17 + 0x14 + lVar18);
      fVar22 = *(float *)(uVar17 + 0x18 + lVar18);
      if (*(float *)(lVar5 + 0x230) <= fVar23) {
        fVar23 = *(float *)(lVar5 + 0x230);
      }
      if (*(float *)(lVar5 + 0x234) <= fVar22) {
        fVar22 = *(float *)(lVar5 + 0x234);
      }
      *(float *)(uVar17 + 0x14 + lVar18) = fVar23;
      *(float *)(uVar17 + 0x18 + lVar18) = fVar22;
      uVar17 = uVar17 + 0x1c;
    } while ((int)uVar21 < param_2);
  }
  FUN_180291cf0(*(uint64_t *)(lVar5 + 0x2e8),*(int32_t *)(lVar14 + 0x10));
  lVar5 = SYSTEM_DATA_MANAGER_A;
  lVar6 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar14 = (int64_t)*(int *)(lVar6 + 0xc) * 0x1c + *(int64_t *)(lVar6 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar6 = *(int64_t *)(lVar5 + 0x1af8);
  FUN_180291b40(*(uint64_t *)(lVar6 + 0x2e8),*(uint64_t *)(lVar14 + 0xc),
                *(uint64_t *)(lVar14 + 0x14),0);
  lVar5 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar6 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar6 + 0x2e8) + 0x60) * 0x10);
  uVar9 = puVar2[1];
  *(uint64_t *)(lVar6 + 0x228) = *puVar2;
  *(uint64_t *)(lVar6 + 0x230) = uVar9;
  lVar6 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x210);
  fVar23 = *(float *)(lVar6 + 0x18);
  fVar22 = *(float *)(lVar6 + 0x14);
  fVar24 = *(float *)(((int64_t)*(int *)(lVar6 + 0xc) + 1) * 0x1c + *(int64_t *)(lVar6 + 0x38));
  fVar4 = *(float *)((int64_t)*(int *)(lVar6 + 0xc) * 0x1c + *(int64_t *)(lVar6 + 0x38));
  *(int8_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0xb1) = 1;
  lVar6 = *(int64_t *)(lVar5 + 0x1af8);
  fVar23 = (fVar24 - fVar4) * (fVar23 - fVar22) * 0.65;
  if (fVar23 == 0.0) {
    fVar23 = *(float *)(lVar6 + 0x284);
  }
  piVar16 = (int *)(lVar6 + 0x1c8);
  *(float *)(lVar6 + 0x1ac) = fVar23;
  iVar11 = *piVar16;
  iVar10 = *(int *)(lVar6 + 0x1cc);
  if (iVar11 == iVar10) {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    iVar13 = iVar11 + 1;
    if (iVar11 + 1 < iVar10) {
      iVar13 = iVar10;
    }
    FUN_18011dbd0(piVar16,iVar13);
    iVar11 = *piVar16;
  }
  *(float *)(*(int64_t *)(lVar6 + 0x1d0) + (int64_t)iVar11 * 4) = *(float *)(lVar6 + 0x1ac);
  *piVar16 = *piVar16 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180134651(uint64_t param_1,int param_2,int32_t param_3)
void FUN_180134651(uint64_t param_1,int param_2,int32_t param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int64_t in_RAX;
  int64_t lVar13;
  int *piVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t unaff_RBX;
  int iVar17;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar18;
  uint uVar19;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar20;
  uint64_t uVar21;
  float fVar22;
  float fVar23;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  lVar6 = SYSTEM_DATA_MANAGER_A;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  uVar18 = 0;
  *(uint64_t *)(in_RAX + -8) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  iVar10 = param_2;
  if (unaff_RBX != 0) {
    iVar10 = 0;
  }
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int8_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar6 + 0x1af8);
  uVar21 = FUN_18012e2d0(iVar10 + 0x11223347);
  iVar10 = FUN_180121250(uVar21,0,*(int32_t *)
                                   (*(int64_t *)(lVar5 + 0x220) + -4 +
                                   (int64_t)*(int *)(lVar5 + 0x218) * 4));
  lVar13 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar10) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar10;
  }
  if (*(int *)(lVar13 + 0x1b30) == iVar10) {
    *(int8_t *)(lVar13 + 0x1b3f) = 1;
  }
  piVar14 = (int *)(*(int64_t *)(lVar13 + 0x1af8) + 0x218);
  *piVar14 = *piVar14 + -1;
  lVar13 = FUN_180134480(lVar5);
  *(int32_t *)(lVar13 + 0xc) = 0;
  *(int *)(lVar13 + 0x10) = param_2;
  *(int32_t *)(lVar13 + 4) = param_3;
  fVar22 = *(float *)(lVar5 + 0x68);
  *(int64_t *)(lVar5 + 0x210) = lVar13;
  if (fVar22 == 0.0) {
    fVar22 = *(float *)(lVar5 + 0x260) - *(float *)(lVar5 + 0x40);
  }
  fVar20 = *(float *)(lVar5 + 0x204) - *(float *)(lVar6 + 0x166c);
  *(float *)(lVar13 + 0x14) = fVar20;
  fVar20 = fVar20 + 1.0;
  fVar22 = fVar22 - *(float *)(lVar5 + 0x8c);
  if (fVar22 <= fVar20) {
    fVar22 = fVar20;
  }
  *(float *)(lVar13 + 0x18) = fVar22;
  *(int32_t *)(lVar13 + 0x24) = *(int32_t *)(lVar5 + 0x104);
  *(int32_t *)(lVar13 + 0x28) = *(int32_t *)(lVar5 + 0x118);
  uVar3 = *(int32_t *)(lVar5 + 0x104);
  *(int32_t *)(lVar13 + 0x20) = uVar3;
  *(int32_t *)(lVar13 + 0x1c) = uVar3;
  *(int32_t *)(lVar5 + 0x20c) = 0;
  *(float *)(lVar5 + 0x100) = (float)(int)(*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x204));
  iVar10 = *(int *)(lVar13 + 0x30);
  if ((iVar10 != 0) && (iVar10 != param_2 + 1)) {
    iVar10 = *(int *)(lVar13 + 0x34);
    if (iVar10 < 0) {
      uVar11 = iVar10 / 2 + iVar10;
      uVar15 = uVar18;
      if (0 < (int)uVar11) {
        uVar15 = (uint64_t)uVar11;
      }
      FUN_18013e250(lVar13 + 0x30,uVar15);
    }
    *(int32_t *)(lVar13 + 0x30) = 0;
    iVar10 = 0;
  }
  *(bool *)(lVar13 + 8) = iVar10 == 0;
  if (iVar10 == 0) {
    iVar10 = param_2 + 1;
    FUN_18013e250(lVar13 + 0x30,iVar10);
    if (0 < iVar10) {
      iVar9 = *(int *)(lVar13 + 0x30);
      uVar15 = uVar18;
      do {
        iVar12 = *(int *)(lVar13 + 0x34);
        iVar17 = (int)uVar15;
        if (iVar9 == iVar12) {
          if (iVar12 == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = iVar12 / 2 + iVar12;
          }
          iVar8 = iVar9 + 1;
          if (iVar9 + 1 < iVar12) {
            iVar8 = iVar12;
          }
          FUN_18013e250(lVar13 + 0x30,iVar8);
          iVar9 = *(int *)(lVar13 + 0x30);
        }
        lVar6 = *(int64_t *)(lVar13 + 0x38);
        uVar11 = iVar17 + 1;
        uVar15 = (uint64_t)uVar11;
        lVar16 = (int64_t)iVar9 * 0x1c;
        *(uint64_t *)(lVar16 + lVar6) = (uint64_t)(uint)((float)iVar17 * (1.0 / (float)param_2));
        ((uint64_t *)(lVar16 + lVar6))[1] = 0x7f7fffff00000000;
        *(uint64_t *)(lVar16 + 0x10 + lVar6) = 0xff7fffff7f7fffff;
        *(int32_t *)(lVar16 + 0x18 + lVar6) = 0xff7fffff;
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
        iVar9 = *(int *)(lVar13 + 0x30);
      } while ((int)uVar11 < iVar10);
    }
  }
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uVar15 = uVar18;
  if (0 < param_2) {
    do {
      iVar9 = (int)uVar18;
      lVar16 = *(int64_t *)(lVar13 + 0x38);
      lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0x210);
      iVar10 = iVar9;
      if (iVar9 < 0) {
        iVar10 = *(int *)(lVar7 + 0xc);
      }
      fVar22 = *(float *)(lVar7 + 0x14);
      uVar19 = iVar9 + 1;
      fVar20 = *(float *)(lVar7 + 0x18) - fVar22;
      fVar23 = *(float *)(lVar5 + 0x40) + 0.5;
      uVar11 = uVar19;
      if ((int)uVar19 < 0) {
        uVar11 = *(uint *)(lVar7 + 0xc);
      }
      uVar18 = (uint64_t)uVar19;
      fVar4 = *(float *)((int64_t)(int)uVar11 * 0x1c + *(int64_t *)(lVar7 + 0x38));
      pfVar1 = (float *)(uVar15 + 0xc + lVar16);
      *pfVar1 = (float)(int)((fVar20 * *(float *)((int64_t)iVar10 * 0x1c +
                                                 *(int64_t *)(lVar7 + 0x38)) + fVar22 + fVar23) -
                            1.0);
      pfVar1[1] = -3.4028235e+38;
      pfVar1[2] = (float)(int)((fVar20 * fVar4 + fVar22 + fVar23) - 1.0);
      pfVar1[3] = 3.4028235e+38;
      fVar22 = *(float *)(uVar15 + 0x10 + lVar16);
      if (fVar22 <= *(float *)(lVar5 + 0x22c)) {
        fVar22 = *(float *)(lVar5 + 0x22c);
      }
      fVar20 = *(float *)(uVar15 + 0xc + lVar16);
      fVar23 = *(float *)(lVar5 + 0x228);
      if (*(float *)(lVar5 + 0x228) <= fVar20) {
        fVar23 = fVar20;
      }
      *(float *)(uVar15 + 0x10 + lVar16) = fVar22;
      *(float *)(uVar15 + 0xc + lVar16) = fVar23;
      fVar22 = *(float *)(uVar15 + 0x14 + lVar16);
      fVar20 = *(float *)(uVar15 + 0x18 + lVar16);
      if (*(float *)(lVar5 + 0x230) <= fVar22) {
        fVar22 = *(float *)(lVar5 + 0x230);
      }
      if (*(float *)(lVar5 + 0x234) <= fVar20) {
        fVar20 = *(float *)(lVar5 + 0x234);
      }
      *(float *)(uVar15 + 0x14 + lVar16) = fVar22;
      *(float *)(uVar15 + 0x18 + lVar16) = fVar20;
      uVar15 = uVar15 + 0x1c;
    } while ((int)uVar19 < param_2);
  }
  FUN_180291cf0(*(uint64_t *)(lVar5 + 0x2e8),*(int32_t *)(lVar13 + 0x10));
  lVar5 = SYSTEM_DATA_MANAGER_A;
  lVar6 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar13 = (int64_t)*(int *)(lVar6 + 0xc) * 0x1c + *(int64_t *)(lVar6 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar6 = *(int64_t *)(lVar5 + 0x1af8);
  FUN_180291b40(*(uint64_t *)(lVar6 + 0x2e8),*(uint64_t *)(lVar13 + 0xc),
                *(uint64_t *)(lVar13 + 0x14),0);
  lVar5 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar6 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar6 + 0x2e8) + 0x60) * 0x10);
  uVar21 = puVar2[1];
  *(uint64_t *)(lVar6 + 0x228) = *puVar2;
  *(uint64_t *)(lVar6 + 0x230) = uVar21;
  lVar6 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x210);
  fVar22 = *(float *)(lVar6 + 0x18);
  fVar20 = *(float *)(lVar6 + 0x14);
  fVar23 = *(float *)(((int64_t)*(int *)(lVar6 + 0xc) + 1) * 0x1c + *(int64_t *)(lVar6 + 0x38));
  fVar4 = *(float *)((int64_t)*(int *)(lVar6 + 0xc) * 0x1c + *(int64_t *)(lVar6 + 0x38));
  *(int8_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0xb1) = 1;
  lVar6 = *(int64_t *)(lVar5 + 0x1af8);
  fVar22 = (fVar23 - fVar4) * (fVar22 - fVar20) * 0.65;
  if (fVar22 == 0.0) {
    fVar22 = *(float *)(lVar6 + 0x284);
  }
  piVar14 = (int *)(lVar6 + 0x1c8);
  *(float *)(lVar6 + 0x1ac) = fVar22;
  iVar10 = *piVar14;
  iVar9 = *(int *)(lVar6 + 0x1cc);
  if (iVar10 == iVar9) {
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    iVar12 = iVar10 + 1;
    if (iVar10 + 1 < iVar9) {
      iVar12 = iVar9;
    }
    FUN_18011dbd0(piVar14,iVar12);
    iVar10 = *piVar14;
  }
  *(float *)(*(int64_t *)(lVar6 + 0x1d0) + (int64_t)iVar10 * 4) = *(float *)(lVar6 + 0x1ac);
  *piVar14 = *piVar14 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



