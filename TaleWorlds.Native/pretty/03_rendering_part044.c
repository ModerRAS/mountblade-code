#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part044.c - 9 个函数

// 函数: void FUN_18028f350(uint64_t param_1,longlong param_2,int *param_3,uint param_4,float param_5,
void FUN_18028f350(uint64_t param_1,longlong param_2,int *param_3,uint param_4,float param_5,
                  float param_6,uint64_t param_7,uint64_t param_8,int32_t param_9,
                  int32_t param_10)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  int32_t *puVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  uint64_t *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  int32_t uStack_90;
  longlong lStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  ulonglong uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  uVar18 = (ulonglong)param_4;
  iVar14 = 0;
  iVar19 = iVar14;
  iVar20 = 0;
  if ((0 < (int)param_4) && (iVar19 = 0, iVar20 = 0, 7 < param_4)) {
    iVar19 = 0;
    iVar21 = 0;
    iVar23 = 0;
    iVar25 = 0;
    iVar20 = 0;
    iVar22 = 0;
    iVar24 = 0;
    iVar26 = 0;
    uVar7 = param_4 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    lVar5 = 0;
    do {
      piVar1 = param_3 + lVar5;
      iVar14 = iVar14 + 8;
      iVar19 = *piVar1 + iVar19;
      iVar21 = piVar1[1] + iVar21;
      iVar23 = piVar1[2] + iVar23;
      iVar25 = piVar1[3] + iVar25;
      piVar1 = param_3 + lVar5 + 4;
      lVar5 = lVar5 + 8;
      iVar20 = *piVar1 + iVar20;
      iVar22 = piVar1[1] + iVar22;
      iVar24 = piVar1[2] + iVar24;
      iVar26 = piVar1[3] + iVar26;
    } while (lVar5 < (int)(param_4 - uVar7));
    iVar20 = iVar20 + iVar19 + iVar24 + iVar23 + iVar22 + iVar21 + iVar26 + iVar25;
    iVar19 = iVar14;
  }
  lVar5 = (longlong)iVar19;
  iVar19 = 0;
  lVar15 = (longlong)(int)param_4;
  iVar14 = 0;
  if (lVar5 < lVar15) {
    if (1 < lVar15 - lVar5) {
      do {
        iVar19 = iVar19 + param_3[lVar5];
        iVar14 = iVar14 + param_3[lVar5 + 1];
        lVar5 = lVar5 + 2;
      } while (lVar5 < lVar15 + -1);
    }
    if (lVar5 < lVar15) {
      iVar20 = iVar20 + param_3[lVar5];
    }
    iVar20 = iVar20 + iVar14 + iVar19;
  }
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
  }
  lStack_78 = param_2;
  uStack_70 = param_1;
  puVar6 = (uint64_t *)func_0x000180120ce0(((longlong)iVar20 + 1) * 0x14);
  if (puVar6 == (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_b8);
  }
  iVar19 = 0;
  iVar20 = 0;
  lVar5 = 1;
  if (0 < (int)param_4) {
    lVar15 = 0;
    do {
      iVar21 = 0;
      lVar2 = lStack_78 + (longlong)iVar19 * 8;
      iVar14 = *param_3;
      iVar19 = iVar19 + iVar14;
      if (0 < iVar14) {
        pfVar16 = (float *)(lVar2 + 4);
        puVar13 = (int32_t *)(lVar15 * 0x14 + 0x10 + (longlong)puVar6);
        lVar8 = (longlong)(iVar14 + -1);
        lVar11 = 0;
        do {
          if (*pfVar16 != *(float *)(lVar2 + 4 + lVar8 * 8)) {
            *puVar13 = 0;
            lVar9 = lVar8;
            lVar12 = lVar11;
            if (*pfVar16 < *(float *)(lVar2 + 4 + lVar8 * 8)) {
              *puVar13 = 1;
              lVar9 = lVar11;
              lVar12 = lVar8;
            }
            iVar20 = iVar20 + 1;
            lVar15 = lVar15 + 1;
            puVar13[-4] = param_5 * *(float *)(lVar2 + lVar12 * 8);
            puVar13[-3] = -param_6 * *(float *)(lVar2 + 4 + lVar12 * 8);
            puVar13[-2] = param_5 * *(float *)(lVar2 + lVar9 * 8);
            puVar13[-1] = -param_6 * *(float *)(lVar2 + 4 + lVar9 * 8);
            puVar13 = puVar13 + 5;
          }
          iVar21 = iVar21 + 1;
          pfVar16 = pfVar16 + 2;
          lVar8 = lVar11;
          lVar11 = lVar11 + 1;
        } while (iVar21 < *param_3);
      }
      param_3 = param_3 + 1;
      uVar18 = uVar18 - 1;
      param_1 = uStack_70;
    } while (uVar18 != 0);
  }
  FUN_18028f180(puVar6,iVar20);
  puVar10 = puVar6;
  if (1 < (longlong)iVar20) {
    do {
      puVar17 = (uint64_t *)((longlong)puVar10 + 0x14);
      uVar3 = *(int32_t *)((longlong)puVar10 + 0x24);
      uVar4 = *puVar17;
      uStack_60 = *(uint64_t *)((longlong)puVar10 + 0x1c);
      if (0 < lVar5) {
        uStack_68._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        lVar15 = lVar5;
        do {
          if (*(float *)((longlong)puVar10 + 4) <= uStack_68._4_4_) break;
          lVar15 = lVar15 + -1;
          *(uint64_t *)((longlong)puVar10 + 0x14) = *puVar10;
          *(uint64_t *)((longlong)puVar10 + 0x1c) = puVar10[1];
          *(int32_t *)((longlong)puVar10 + 0x24) = *(int32_t *)(puVar10 + 2);
          puVar10 = (uint64_t *)((longlong)puVar10 + -0x14);
        } while (0 < lVar15);
        if (lVar5 != lVar15) {
          puVar10 = (uint64_t *)((longlong)puVar6 + lVar15 * 0x14);
          *puVar10 = uVar4;
          puVar10[1] = uStack_60;
          *(int32_t *)((longlong)puVar6 + lVar15 * 0x14 + 0x10) = uVar3;
        }
      }
      lVar5 = lVar5 + 1;
      puVar10 = puVar17;
      uStack_68 = uVar4;
    } while (lVar5 < iVar20);
  }
  uStack_90 = param_10;
  uStack_98 = param_9;
  FUN_18028ecc0(param_1,puVar6,iVar20);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(puVar6,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f499(float param_1)
void FUN_18028f499(float param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar10;
  int *unaff_RDI;
  int32_t *puVar11;
  float *pfVar12;
  uint64_t *puVar13;
  int iVar14;
  int iVar15;
  uint64_t unaff_R14;
  longlong lVar16;
  int iVar17;
  int32_t uVar18;
  float unaff_XMM6_Da;
  longlong in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack0000000000000054;
  float in_stack_000000e0;
  
  iVar15 = 0;
  iVar17 = 0;
  lVar9 = 1;
  if (0 < (int)unaff_RSI) {
    lVar16 = 0;
    do {
      iVar14 = 0;
      lVar1 = in_stack_00000040 + (longlong)iVar15 * 8;
      iVar3 = *unaff_RDI;
      iVar15 = iVar15 + iVar3;
      if (0 < iVar3) {
        pfVar12 = (float *)(lVar1 + 4);
        puVar11 = (int32_t *)(lVar16 * 0x14 + 0x10 + unaff_RBP);
        lVar6 = (longlong)(iVar3 + -1);
        lVar8 = 0;
        do {
          param_1 = *pfVar12;
          if (param_1 != *(float *)(lVar1 + 4 + lVar6 * 8)) {
            *puVar11 = 0;
            lVar7 = lVar6;
            lVar10 = lVar8;
            if (*pfVar12 < *(float *)(lVar1 + 4 + lVar6 * 8)) {
              *puVar11 = 1;
              lVar7 = lVar8;
              lVar10 = lVar6;
            }
            iVar17 = iVar17 + 1;
            lVar16 = lVar16 + 1;
            puVar11[-4] = in_stack_000000e0 * *(float *)(lVar1 + lVar10 * 8);
            puVar11[-3] = unaff_XMM6_Da * *(float *)(lVar1 + 4 + lVar10 * 8);
            param_1 = in_stack_000000e0 * *(float *)(lVar1 + lVar7 * 8);
            puVar11[-2] = param_1;
            puVar11[-1] = unaff_XMM6_Da * *(float *)(lVar1 + 4 + lVar7 * 8);
            puVar11 = puVar11 + 5;
          }
          iVar14 = iVar14 + 1;
          pfVar12 = pfVar12 + 2;
          lVar6 = lVar8;
          lVar8 = lVar8 + 1;
        } while (iVar14 < *unaff_RDI);
      }
      unaff_RDI = unaff_RDI + 1;
      unaff_RSI = unaff_RSI + -1;
      unaff_R14 = in_stack_00000048;
    } while (unaff_RSI != 0);
  }
  FUN_18028f180(param_1,iVar17);
  if (1 < (longlong)iVar17) {
    puVar13 = (uint64_t *)(unaff_RBP + 0x14);
    do {
      uVar18 = *(int32_t *)(puVar13 + 2);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      if (0 < lVar9) {
        fStack0000000000000054 = (float)((ulonglong)uVar4 >> 0x20);
        lVar16 = lVar9;
        puVar2 = puVar13;
        do {
          if (*(float *)(puVar2 + -2) <= fStack0000000000000054) break;
          lVar16 = lVar16 + -1;
          *(int32_t *)puVar2 = *(int32_t *)((longlong)puVar2 + -0x14);
          *(int32_t *)((longlong)puVar2 + 4) = *(int32_t *)(puVar2 + -2);
          *(int32_t *)(puVar2 + 1) = *(int32_t *)((longlong)puVar2 + -0xc);
          *(int32_t *)((longlong)puVar2 + 0xc) = *(int32_t *)(puVar2 + -1);
          *(int32_t *)(puVar2 + 2) = *(int32_t *)((longlong)puVar2 + -4);
          puVar2 = (uint64_t *)((longlong)puVar2 + -0x14);
        } while (0 < lVar16);
        if (lVar9 != lVar16) {
          puVar2 = (uint64_t *)(unaff_RBP + lVar16 * 0x14);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          *(int32_t *)(unaff_RBP + 0x10 + lVar16 * 0x14) = uVar18;
        }
      }
      lVar9 = lVar9 + 1;
      puVar13 = (uint64_t *)((longlong)puVar13 + 0x14);
    } while (lVar9 < iVar17);
  }
  uVar18 = FUN_18028ecc0(unaff_R14);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(uVar18,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f4a1(float param_1)
void FUN_18028f4a1(float param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar10;
  int *unaff_RDI;
  int32_t *puVar11;
  float *pfVar12;
  uint64_t *puVar13;
  int iVar14;
  int iVar15;
  uint64_t unaff_R14;
  longlong lVar16;
  int iVar17;
  int32_t uVar18;
  float unaff_XMM6_Da;
  longlong in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack0000000000000054;
  float in_stack_000000e0;
  
  iVar15 = 0;
  iVar17 = 0;
  lVar9 = 1;
  if (0 < (int)unaff_RSI) {
    lVar16 = 0;
    do {
      iVar14 = 0;
      lVar1 = in_stack_00000040 + (longlong)iVar15 * 8;
      iVar3 = *unaff_RDI;
      iVar15 = iVar15 + iVar3;
      if (0 < iVar3) {
        pfVar12 = (float *)(lVar1 + 4);
        puVar11 = (int32_t *)(lVar16 * 0x14 + 0x10 + unaff_RBP);
        lVar6 = (longlong)(iVar3 + -1);
        lVar8 = 0;
        do {
          param_1 = *pfVar12;
          if (param_1 != *(float *)(lVar1 + 4 + lVar6 * 8)) {
            *puVar11 = 0;
            lVar7 = lVar6;
            lVar10 = lVar8;
            if (*pfVar12 < *(float *)(lVar1 + 4 + lVar6 * 8)) {
              *puVar11 = 1;
              lVar7 = lVar8;
              lVar10 = lVar6;
            }
            iVar17 = iVar17 + 1;
            lVar16 = lVar16 + 1;
            puVar11[-4] = in_stack_000000e0 * *(float *)(lVar1 + lVar10 * 8);
            puVar11[-3] = unaff_XMM6_Da * *(float *)(lVar1 + 4 + lVar10 * 8);
            param_1 = in_stack_000000e0 * *(float *)(lVar1 + lVar7 * 8);
            puVar11[-2] = param_1;
            puVar11[-1] = unaff_XMM6_Da * *(float *)(lVar1 + 4 + lVar7 * 8);
            puVar11 = puVar11 + 5;
          }
          iVar14 = iVar14 + 1;
          pfVar12 = pfVar12 + 2;
          lVar6 = lVar8;
          lVar8 = lVar8 + 1;
        } while (iVar14 < *unaff_RDI);
      }
      unaff_RDI = unaff_RDI + 1;
      unaff_RSI = unaff_RSI + -1;
      unaff_R14 = in_stack_00000048;
    } while (unaff_RSI != 0);
  }
  FUN_18028f180(param_1,iVar17);
  if (1 < (longlong)iVar17) {
    puVar13 = (uint64_t *)(unaff_RBP + 0x14);
    do {
      uVar18 = *(int32_t *)(puVar13 + 2);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      if (0 < lVar9) {
        fStack0000000000000054 = (float)((ulonglong)uVar4 >> 0x20);
        lVar16 = lVar9;
        puVar2 = puVar13;
        do {
          if (*(float *)(puVar2 + -2) <= fStack0000000000000054) break;
          lVar16 = lVar16 + -1;
          *(int32_t *)puVar2 = *(int32_t *)((longlong)puVar2 + -0x14);
          *(int32_t *)((longlong)puVar2 + 4) = *(int32_t *)(puVar2 + -2);
          *(int32_t *)(puVar2 + 1) = *(int32_t *)((longlong)puVar2 + -0xc);
          *(int32_t *)((longlong)puVar2 + 0xc) = *(int32_t *)(puVar2 + -1);
          *(int32_t *)(puVar2 + 2) = *(int32_t *)((longlong)puVar2 + -4);
          puVar2 = (uint64_t *)((longlong)puVar2 + -0x14);
        } while (0 < lVar16);
        if (lVar9 != lVar16) {
          puVar2 = (uint64_t *)(unaff_RBP + lVar16 * 0x14);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          *(int32_t *)(unaff_RBP + 0x10 + lVar16 * 0x14) = uVar18;
        }
      }
      lVar9 = lVar9 + 1;
      puVar13 = (uint64_t *)((longlong)puVar13 + 0x14);
    } while (lVar9 < iVar17);
  }
  uVar18 = FUN_18028ecc0(unaff_R14);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(uVar18,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f4d4(float param_1,uint64_t param_2,float param_3)
void FUN_18028f4d4(float param_1,uint64_t param_2,float param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  longlong in_RCX;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar9;
  int *unaff_RDI;
  int32_t *puVar10;
  float *pfVar11;
  uint64_t *puVar12;
  int iVar13;
  int unaff_R12D;
  longlong unaff_R14;
  int unaff_R15D;
  int32_t uVar14;
  float unaff_XMM6_Da;
  longlong in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack0000000000000054;
  
  do {
    iVar13 = 0;
    lVar8 = in_RCX + (longlong)unaff_R12D * 8;
    iVar2 = *unaff_RDI;
    unaff_R12D = unaff_R12D + iVar2;
    if (0 < iVar2) {
      pfVar11 = (float *)(lVar8 + 4);
      puVar10 = (int32_t *)(unaff_R14 * 0x14 + 0x10 + unaff_RBP);
      lVar5 = (longlong)(iVar2 + -1);
      lVar7 = 0;
      do {
        param_1 = *pfVar11;
        if (param_1 != *(float *)(lVar8 + 4 + lVar5 * 8)) {
          *puVar10 = 0;
          lVar6 = lVar5;
          lVar9 = lVar7;
          if (*pfVar11 < *(float *)(lVar8 + 4 + lVar5 * 8)) {
            *puVar10 = (int)unaff_RBX;
            lVar6 = lVar7;
            lVar9 = lVar5;
          }
          unaff_R15D = unaff_R15D + 1;
          unaff_R14 = unaff_R14 + 1;
          puVar10[-4] = param_3 * *(float *)(lVar8 + lVar9 * 8);
          puVar10[-3] = unaff_XMM6_Da * *(float *)(lVar8 + 4 + lVar9 * 8);
          param_1 = param_3 * *(float *)(lVar8 + lVar6 * 8);
          puVar10[-2] = param_1;
          puVar10[-1] = unaff_XMM6_Da * *(float *)(lVar8 + 4 + lVar6 * 8);
          puVar10 = puVar10 + 5;
        }
        iVar13 = iVar13 + 1;
        pfVar11 = pfVar11 + 2;
        in_RCX = in_stack_00000040;
        lVar5 = lVar7;
        lVar7 = lVar7 + 1;
      } while (iVar13 < *unaff_RDI);
    }
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = unaff_RSI - unaff_RBX;
  } while (unaff_RSI != 0);
  FUN_18028f180(param_1,unaff_R15D);
  if (unaff_RBX < unaff_R15D) {
    puVar12 = (uint64_t *)(unaff_RBP + 0x14);
    do {
      uVar14 = *(int32_t *)(puVar12 + 2);
      uVar3 = *puVar12;
      uVar4 = puVar12[1];
      if (0 < unaff_RBX) {
        fStack0000000000000054 = (float)((ulonglong)uVar3 >> 0x20);
        lVar8 = unaff_RBX;
        puVar1 = puVar12;
        do {
          if (*(float *)(puVar1 + -2) <= fStack0000000000000054) break;
          lVar8 = lVar8 + -1;
          *(int32_t *)puVar1 = *(int32_t *)((longlong)puVar1 + -0x14);
          *(int32_t *)((longlong)puVar1 + 4) = *(int32_t *)(puVar1 + -2);
          *(int32_t *)(puVar1 + 1) = *(int32_t *)((longlong)puVar1 + -0xc);
          *(int32_t *)((longlong)puVar1 + 0xc) = *(int32_t *)(puVar1 + -1);
          *(int32_t *)(puVar1 + 2) = *(int32_t *)((longlong)puVar1 + -4);
          puVar1 = (uint64_t *)((longlong)puVar1 + -0x14);
        } while (0 < lVar8);
        if (unaff_RBX != lVar8) {
          puVar1 = (uint64_t *)(unaff_RBP + lVar8 * 0x14);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          *(int32_t *)(unaff_RBP + 0x10 + lVar8 * 0x14) = uVar14;
        }
      }
      unaff_RBX = unaff_RBX + 1;
      puVar12 = (uint64_t *)((longlong)puVar12 + 0x14);
    } while (unaff_RBX < unaff_R15D);
  }
  uVar14 = FUN_18028ecc0(in_stack_00000048);
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(uVar14,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f5d1(int32_t param_1)
void FUN_18028f5d1(int32_t param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t *puVar5;
  int unaff_R15D;
  int32_t uVar6;
  float fStack0000000000000054;
  
  FUN_18028f180(param_1,unaff_R15D);
  if (unaff_RBX < unaff_R15D) {
    puVar5 = (uint64_t *)(unaff_RBP + 0x14);
    do {
      uVar6 = *(int32_t *)(puVar5 + 2);
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      if (0 < unaff_RBX) {
        fStack0000000000000054 = (float)((ulonglong)uVar2 >> 0x20);
        lVar4 = unaff_RBX;
        puVar1 = puVar5;
        do {
          if (*(float *)(puVar1 + -2) <= fStack0000000000000054) break;
          lVar4 = lVar4 + -1;
          *(int32_t *)puVar1 = *(int32_t *)((longlong)puVar1 + -0x14);
          *(int32_t *)((longlong)puVar1 + 4) = *(int32_t *)(puVar1 + -2);
          *(int32_t *)(puVar1 + 1) = *(int32_t *)((longlong)puVar1 + -0xc);
          *(int32_t *)((longlong)puVar1 + 0xc) = *(int32_t *)(puVar1 + -1);
          *(int32_t *)(puVar1 + 2) = *(int32_t *)((longlong)puVar1 + -4);
          puVar1 = (uint64_t *)((longlong)puVar1 + -0x14);
        } while (0 < lVar4);
        if (unaff_RBX != lVar4) {
          puVar1 = (uint64_t *)(unaff_RBP + lVar4 * 0x14);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          *(int32_t *)(unaff_RBP + 0x10 + lVar4 * 0x14) = uVar6;
        }
      }
      unaff_RBX = unaff_RBX + 1;
      puVar5 = (uint64_t *)((longlong)puVar5 + 0x14);
    } while (unaff_RBX < unaff_R15D);
  }
  uVar6 = FUN_18028ecc0();
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(uVar6,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f5ec(int32_t param_1,float param_2)
void FUN_18028f5ec(int32_t param_1,float param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *puVar3;
  longlong in_R11;
  int32_t unaff_R15D;
  int32_t uVar4;
  int32_t uStack0000000000000028;
  int32_t uStack0000000000000050;
  float fStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  
  puVar3 = (int32_t *)(unaff_RBP + 0x14);
  do {
    uVar4 = puVar3[4];
    uStack0000000000000050 = *puVar3;
    fStack0000000000000054 = (float)puVar3[1];
    uStack0000000000000058 = puVar3[2];
    uStack000000000000005c = puVar3[3];
    lVar2 = unaff_RBX;
    puVar1 = puVar3;
    if (0 < unaff_RBX) {
      do {
        if ((float)puVar1[-4] <= fStack0000000000000054) break;
        param_1 = puVar1[-5];
        lVar2 = lVar2 + -1;
        *puVar1 = param_1;
        puVar1[1] = puVar1[-4];
        puVar1[2] = puVar1[-3];
        puVar1[3] = puVar1[-2];
        puVar1[4] = puVar1[-1];
        puVar1 = puVar1 + -5;
      } while (0 < lVar2);
      param_2 = fStack0000000000000054;
      if (unaff_RBX != lVar2) {
        puVar1 = (int32_t *)(unaff_RBP + lVar2 * 0x14);
        *puVar1 = uStack0000000000000050;
        puVar1[1] = fStack0000000000000054;
        puVar1[2] = uStack0000000000000058;
        puVar1[3] = uStack000000000000005c;
        *(int32_t *)(unaff_RBP + 0x10 + lVar2 * 0x14) = uVar4;
      }
    }
    unaff_RBX = unaff_RBX + 1;
    puVar3 = puVar3 + 5;
    if (in_R11 <= unaff_RBX) {
      uStack0000000000000028 = in_stack_00000108;
      uVar4 = FUN_18028ecc0(param_1,param_2,unaff_R15D,puVar3,in_stack_00000100);
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(uVar4,SYSTEM_DATA_MANAGER_B);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028f68e(void)
void FUN_18028f68e(void)

{
  longlong in_RAX;
  
  *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + -1;
                    // WARNING: Subroutine does not return
  FUN_180059ba0();
}



uint64_t
FUN_18028f6d0(longlong param_1,int *param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,float param_9,int param_10)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_5 = param_5 * 0.5;
  param_6 = param_6 * 0.5;
  fVar5 = (param_4 + param_8) * 0.25 + param_6;
  fVar4 = (param_3 + param_7) * 0.25 + param_5;
  fVar3 = (param_7 * 0.5 + param_3 * 0.5) - fVar4;
  fVar2 = (param_8 * 0.5 + param_4 * 0.5) - fVar5;
  if (param_10 < 0x11) {
    if (fVar2 * fVar2 + fVar3 * fVar3 <= param_9) {
      iVar1 = *param_2;
      if (param_1 != 0) {
        *(float *)(param_1 + (longlong)iVar1 * 8) = param_7;
        *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_8;
      }
      *param_2 = iVar1 + 1;
    }
    else {
      fVar2 = param_5 + param_3 * 0.5;
      fVar3 = param_6 + param_4 * 0.5;
      FUN_18028f6d0(fVar2,fVar3,param_3,param_4,fVar2,fVar3,fVar4,fVar5,param_9,param_10 + 1);
      FUN_18028f6d0(param_1,param_2,fVar4,fVar5,param_5 + param_7 * 0.5,param_6 + param_8 * 0.5,
                    param_7,param_8,param_9,param_10 + 1);
    }
  }
  return 1;
}



uint64_t FUN_18028f7d7(float param_1,int *param_2,float param_3)

{
  int iVar1;
  longlong in_RAX;
  int unaff_EBX;
  longlong unaff_RDI;
  float in_XMM4_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM10_Da;
  float unaff_XMM14_Da;
  float fStack0000000000000028;
  float fStack0000000000000040;
  int iStack0000000000000048;
  float in_stack_00000140;
  
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  if (param_1 + param_3 <= in_stack_00000140) {
    iVar1 = *param_2;
    if (unaff_RDI != 0) {
      *(int32_t *)(unaff_RDI + (longlong)iVar1 * 8) = unaff_XMM9_Da;
      *(int32_t *)(unaff_RDI + 4 + (longlong)iVar1 * 8) = unaff_XMM10_Da;
    }
    *param_2 = iVar1 + 1;
  }
  else {
    fStack0000000000000028 = unaff_XMM7_Da + in_XMM4_Da;
    fStack0000000000000040 = in_stack_00000140;
    iStack0000000000000048 = unaff_EBX + 1;
    FUN_18028f6d0();
    fStack0000000000000028 = unaff_XMM7_Da + unaff_XMM14_Da;
    fStack0000000000000040 = in_stack_00000140;
    iStack0000000000000048 = unaff_EBX + 1;
    FUN_18028f6d0();
  }
  return 1;
}



uint64_t FUN_18028f898(void)

{
  return 1;
}





// 函数: void FUN_18028f8f0(longlong param_1,int *param_2,float param_3,float param_4,float param_5,
void FUN_18028f8f0(longlong param_1,int *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,int param_12)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStackX_18;
  float fStackX_20;
  
  fVar2 = SQRT((param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5)
              ) + SQRT((param_6 - param_4) * (param_6 - param_4) +
                       (param_5 - param_3) * (param_5 - param_3)) +
          SQRT((param_10 - param_8) * (param_10 - param_8) +
               (param_9 - param_7) * (param_9 - param_7));
  fVar2 = fVar2 * fVar2 -
          ((param_10 - param_4) * (param_10 - param_4) + (param_9 - param_3) * (param_9 - param_3));
  fStackX_18 = param_3;
  fStackX_20 = param_4;
  if (param_12 < 0x11) {
    do {
      if (fVar2 <= param_11) {
        iVar1 = *param_2;
        if (param_1 != 0) {
          *(float *)(param_1 + (longlong)iVar1 * 8) = param_9;
          *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_10;
        }
        *param_2 = iVar1 + 1;
        return;
      }
      param_12 = param_12 + 1;
      fVar2 = param_8 * 0.5;
      fVar7 = param_7 * 0.5 + param_5 * 0.5;
      fVar4 = fStackX_20 * 0.5 + param_6 * 0.5;
      fVar5 = fStackX_18 * 0.5 + param_5 * 0.5;
      param_8 = param_10 * 0.5 + fVar2;
      fVar2 = fVar2 + param_6 * 0.5;
      param_7 = param_9 * 0.5 + param_7 * 0.5;
      fVar3 = (fVar7 + fVar5) * 0.5;
      param_6 = (fVar2 + param_8) * 0.5;
      fVar2 = (fVar2 + fVar4) * 0.5;
      param_5 = (fVar7 + param_7) * 0.5;
      fVar6 = (param_6 + fVar2) * 0.5;
      fVar7 = (param_5 + fVar3) * 0.5;
      FUN_18028f8f0(param_1,param_2,fStackX_18,fStackX_20,fVar5,fVar4,fVar3,fVar2,fVar7,fVar6,
                    param_11,param_12);
      fVar2 = SQRT((param_8 - param_6) * (param_8 - param_6) +
                   (param_7 - param_5) * (param_7 - param_5)) +
              SQRT((param_6 - fVar6) * (param_6 - fVar6) + (param_5 - fVar7) * (param_5 - fVar7)) +
              SQRT((param_10 - param_8) * (param_10 - param_8) +
                   (param_9 - param_7) * (param_9 - param_7));
      fVar2 = fVar2 * fVar2 -
              ((param_10 - fVar6) * (param_10 - fVar6) + (param_9 - fVar7) * (param_9 - fVar7));
      fStackX_18 = fVar7;
      fStackX_20 = fVar6;
    } while (param_12 < 0x11);
  }
  return;
}





// 函数: void FUN_18028fa3b(uint64_t param_1,float param_2)
void FUN_18028fa3b(uint64_t param_1,float param_2)

{
  int iVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  int unaff_ESI;
  int *unaff_RDI;
  float fVar2;
  float fVar3;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar4;
  float unaff_XMM11_Da;
  float fVar5;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000028;
  float fStack0000000000000030;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000048;
  int iStack0000000000000058;
  float in_stack_00000120;
  float in_stack_00000128;
  float fStack0000000000000148;
  
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  do {
    if (param_2 <= unaff_XMM9_Da) {
      iVar1 = *unaff_RDI;
      if (unaff_RBX != 0) {
        *(float *)(unaff_RBX + (longlong)iVar1 * 8) = unaff_XMM13_Da;
        *(float *)(unaff_RBX + 4 + (longlong)iVar1 * 8) = unaff_XMM14_Da;
      }
      *unaff_RDI = iVar1 + 1;
      return;
    }
    unaff_ESI = unaff_ESI + 1;
    fVar4 = unaff_XMM15_Da * 0.5 + unaff_XMM10_Da * 0.5;
    fStack0000000000000028 = in_stack_00000128 * 0.5 + unaff_XMM11_Da * 0.5;
    fVar2 = in_stack_00000120 * 0.5 + unaff_XMM10_Da * 0.5;
    fVar3 = unaff_XMM14_Da * 0.5 + unaff_XMM8_Da * 0.5;
    fVar5 = unaff_XMM8_Da * 0.5 + unaff_XMM11_Da * 0.5;
    unaff_XMM15_Da = unaff_XMM13_Da * 0.5 + unaff_XMM15_Da * 0.5;
    fStack0000000000000030 = (fVar4 + fVar2) * 0.5;
    unaff_XMM11_Da = (fVar5 + fVar3) * 0.5;
    fStack0000000000000038 = (fVar5 + fStack0000000000000028) * 0.5;
    unaff_XMM10_Da = (fVar4 + unaff_XMM15_Da) * 0.5;
    fVar5 = (unaff_XMM11_Da + fStack0000000000000038) * 0.5;
    fVar4 = (unaff_XMM10_Da + fStack0000000000000030) * 0.5;
    fStack0000000000000040 = fVar4;
    fStack0000000000000048 = fVar5;
    iStack0000000000000058 = unaff_ESI;
    fStack0000000000000148 = fVar3;
    FUN_18028f8f0(fStack0000000000000038,fStack0000000000000030,in_stack_00000120,in_stack_00000128,
                  fVar2);
    fVar2 = SQRT((fVar3 - unaff_XMM11_Da) * (fVar3 - unaff_XMM11_Da) +
                 (unaff_XMM15_Da - unaff_XMM10_Da) * (unaff_XMM15_Da - unaff_XMM10_Da)) +
            SQRT((unaff_XMM11_Da - fVar5) * (unaff_XMM11_Da - fVar5) +
                 (unaff_XMM10_Da - fVar4) * (unaff_XMM10_Da - fVar4)) +
            SQRT((unaff_XMM14_Da - fVar3) * (unaff_XMM14_Da - fVar3) +
                 (unaff_XMM13_Da - unaff_XMM15_Da) * (unaff_XMM13_Da - unaff_XMM15_Da));
    param_2 = fVar2 * fVar2 -
              ((unaff_XMM14_Da - fVar5) * (unaff_XMM14_Da - fVar5) +
              (unaff_XMM13_Da - fVar4) * (unaff_XMM13_Da - fVar4));
    unaff_XMM8_Da = fStack0000000000000148;
    in_stack_00000120 = fVar4;
    in_stack_00000128 = fVar5;
  } while (unaff_ESI < 0x11);
  return;
}





