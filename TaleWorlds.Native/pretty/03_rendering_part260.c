#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part260.c - 4 个函数

// 函数: void FUN_18041189a(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_18041189a(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,float param_11,uint64_t param_12,
                  float param_13,uint64_t param_14,float param_15)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong in_RCX;
  int32_t *puVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R13;
  longlong *unaff_R14;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int32_t uVar14;
  int32_t extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int32_t unaff_XMM7_Da;
  float fVar20;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar21;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar22;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar23;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar24;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar25;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  float fVar26;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  float fVar27;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  float fVar28;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  int iStackX_24;
  
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0xd8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xd4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xd0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xcc) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -0xe8) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xe4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xe0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xdc) = unaff_XMM15_Dd;
  lVar6 = in_RCX + 0x2c;
  puVar7 = (int32_t *)(in_RCX + 8);
  plVar8 = (longlong *)(unaff_RDI + 0x18);
  do {
    puVar7[-2] = 0xffffffff;
    plVar8[-1] = in_R10;
    *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 4;
    puVar7[-1] = 0xffffffff;
    *plVar8 = in_R10;
    *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 4;
    *puVar7 = 0xffffffff;
    plVar8[1] = in_R10;
    *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 4;
    *(longlong *)(lVar6 + -4) = in_R10;
    *(longlong *)(lVar6 + 4) = in_R10;
    *(longlong *)(lVar6 + 0xc) = in_R10;
    *(longlong *)(lVar6 + 0x14) = in_R10;
    unaff_RSI = unaff_RSI + -1;
    lVar6 = lVar6 + 0x58;
    puVar7 = puVar7 + 0x16;
    plVar8 = plVar8 + 0xb;
  } while (unaff_RSI != 0);
  puVar9 = (uint64_t *)(unaff_RDI + 0x34);
  do {
    uVar14 = (**(code **)(*unaff_R14 + 0x10))
                       (param_1,unaff_RBP + -0x80,(int)*(uint *)(in_R10 + unaff_R13) >> 2,
                        *(uint *)(in_R10 + unaff_R13) & 3);
    uVar12 = *(uint *)(in_R10 + 4 + unaff_R13);
    uVar14 = (**(code **)(*unaff_R14 + 0x10))(uVar14,&param_14,(int)uVar12 >> 2,uVar12 & 3);
    uVar12 = *(uint *)(in_R10 + 8 + unaff_R13);
    uVar14 = (**(code **)(*unaff_R14 + 0x10))(uVar14,unaff_RBP + -0x70,(int)uVar12 >> 2,uVar12 & 3);
    uVar14 = (**(code **)(*unaff_R14 + 0x20))
                       (uVar14,&param_7,(int)*(uint *)(in_R10 + unaff_R13) >> 2,
                        *(uint *)(in_R10 + unaff_R13) & 3);
    uVar12 = *(uint *)(in_R10 + 4 + unaff_R13);
    uVar14 = (**(code **)(*unaff_R14 + 0x20))(uVar14,&param_6,(int)uVar12 >> 2,uVar12 & 3);
    uVar12 = *(uint *)(in_R10 + 8 + unaff_R13);
    (**(code **)(*unaff_R14 + 0x20))(uVar14,&param_8,(int)uVar12 >> 2,uVar12 & 3);
    fVar17 = param_8._4_4_ - param_7._4_4_;
    fVar16 = param_6._4_4_ - param_7._4_4_;
    fVar21 = (float)param_6 - (float)param_7;
    fVar18 = *(float *)(unaff_RBP + -0x70) - *(float *)(unaff_RBP + -0x80);
    fVar19 = *(float *)(unaff_RBP + -0x6c) - *(float *)(unaff_RBP + -0x7c);
    fVar20 = *(float *)(unaff_RBP + -0x68) - *(float *)(unaff_RBP + -0x78);
    fVar24 = (float)param_14 - *(float *)(unaff_RBP + -0x80);
    fVar25 = param_14._4_4_ - *(float *)(unaff_RBP + -0x7c);
    fVar23 = param_15 - *(float *)(unaff_RBP + -0x78);
    fVar15 = fVar17 * fVar21 - ((float)param_8 - (float)param_7) * fVar16;
    fVar22 = -((float)param_8 - (float)param_7);
    uVar10 = 0;
    fVar28 = fVar25 * fVar17 - fVar19 * fVar16;
    param_1 = 0.0;
    fVar27 = fVar24 * fVar17 - fVar18 * fVar16;
    fVar26 = fVar23 * fVar17 - fVar20 * fVar16;
    fVar17 = fVar23 * fVar22 + fVar20 * fVar21;
    fVar16 = ABS(fVar15);
    uVar12 = 0;
    if (0.0 < fVar15) {
      uVar12 = 8;
    }
    uVar2 = *(uint *)(puVar9 + 3);
    *(uint *)(puVar9 + 3) = uVar12 | uVar2;
    fVar15 = fVar24 * fVar22 + fVar18 * fVar21;
    fVar18 = fVar25 * fVar22 + fVar19 * fVar21;
    if (1.1754944e-38 < fVar16) {
      param_1 = SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26);
      fVar19 = SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar17 * fVar17);
      if (uVar12 == 0 && (uVar2 & 8) == 0) {
        fVar20 = -1.0;
      }
      else {
        fVar20 = 1.0;
      }
      if (1.1754944e-38 < param_1) {
        fVar21 = fVar20 / param_1;
        param_11 = fVar26 * fVar21;
        *(ulonglong *)((longlong)puVar9 + -0xc) = CONCAT44(fVar28 * fVar21,fVar27 * fVar21);
        *(float *)((longlong)puVar9 + -4) = param_11;
      }
      if (1.1754944e-38 < fVar19) {
        fVar20 = fVar20 / fVar19;
        param_13 = fVar17 * fVar20;
        *puVar9 = CONCAT44(fVar18 * fVar20,fVar15 * fVar20);
        *(float *)(puVar9 + 1) = param_13;
      }
      fVar16 = 1.0 / fVar16;
      fVar19 = fVar16 * fVar19;
      param_1 = fVar16 * param_1;
      *(float *)(puVar9 + 2) = fVar19;
      *(float *)((longlong)puVar9 + 0xc) = param_1;
      if ((1.1754944e-38 < param_1) && (1.1754944e-38 < fVar19)) {
        *(uint *)(puVar9 + 3) = uVar12 | uVar2 & 0xfffffffb;
      }
    }
    in_R10 = in_R10 + 0xc;
    puVar9 = puVar9 + 0xb;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  uVar13 = uVar10;
  if (0 < iStackX_24 + -1) {
    do {
      uVar11 = uVar10 + 1;
      if (*(int *)(uVar10 * 0x58 + 0x48 + unaff_RDI) == *(int *)(uVar11 * 0x58 + 0x48 + unaff_RDI))
      {
        uVar12 = *(uint *)(uVar10 * 0x58 + 0x4c + unaff_RDI);
        if ((((uVar12 & 1) == 0) &&
            (uVar2 = *(uint *)(uVar11 * 0x58 + 0x4c + unaff_RDI), (uVar2 & 1) == 0)) &&
           (((uVar12 ^ uVar2) & 8) != 0)) {
          bVar4 = false;
          if ((uVar2 & 4) == 0) {
            iVar3 = (int)uVar13 * 3;
            fVar15 = (float)FUN_180411780(param_9,(longlong)iVar3 * 4 + unaff_R13);
            fVar16 = (float)FUN_180411780(param_9,(longlong)(iVar3 + 3) * 4 + unaff_R13);
            uVar5 = uVar11;
            if (fVar16 <= fVar15) goto LAB_180411d45;
          }
          else {
LAB_180411d45:
            bVar4 = true;
            uVar5 = uVar10;
          }
          if (!bVar4) {
            uVar11 = uVar10;
          }
          puVar1 = (uint *)(uVar11 * 0x58 + 0x4c + unaff_RDI);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar1 = (uint *)(uVar11 * 0x58 + 0x4c + unaff_RDI);
          *puVar1 = *puVar1 | *(uint *)(uVar5 * 0x58 + 0x4c + unaff_RDI) & 8;
        }
        lVar6 = 2;
      }
      else {
        lVar6 = 1;
      }
      uVar12 = (int)uVar13 + (int)lVar6;
      uVar10 = uVar10 + lVar6;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < iStackX_24 + -1);
  }
  lVar6 = malloc((longlong)iStackX_24 * 0x24);
  if (lVar6 == 0) {
    FUN_180413980();
  }
  else {
    FUN_1804135e0(extraout_XMM0_Da,lVar6);
    free(lVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x60) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180411ca6(void)
void FUN_180411ca6(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar6;
  longlong in_R10;
  int iVar7;
  longlong unaff_R13;
  int unaff_R15D;
  float fVar8;
  float fVar9;
  int32_t extraout_XMM0_Da;
  int iStackX_24;
  uint64_t in_stack_00000048;
  
  iVar6 = unaff_ESI + -1;
  lVar5 = in_R10;
  if (0 < iVar6) {
    do {
      lVar4 = in_R10 + 1;
      if (*(int *)(in_R10 * 0x58 + 0x48 + unaff_RDI) == *(int *)(lVar4 * 0x58 + 0x48 + unaff_RDI)) {
        uVar2 = *(uint *)(in_R10 * 0x58 + 0x4c + unaff_RDI);
        if ((((uVar2 & 1) == 0) &&
            (uVar3 = *(uint *)(lVar4 * 0x58 + 0x4c + unaff_RDI), (uVar3 & 1) == 0)) &&
           (((uVar2 ^ uVar3) & 8) != 0)) {
          iVar7 = (int)lVar5;
          if ((uVar3 & 4) == 0) {
            fVar8 = (float)FUN_180411780(in_stack_00000048,
                                         (longlong)(unaff_R15D * 3) * 4 + unaff_R13);
            fVar9 = (float)FUN_180411780(in_stack_00000048,
                                         (longlong)(unaff_R15D * 3 + 3) * 4 + unaff_R13);
            lVar5 = lVar4;
            if (fVar9 <= fVar8) goto LAB_180411d45;
          }
          else {
LAB_180411d45:
            iVar7 = 1;
            lVar5 = in_R10;
          }
          if (iVar7 == 0) {
            lVar4 = in_R10;
          }
          puVar1 = (uint *)(lVar4 * 0x58 + 0x4c + unaff_RDI);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar1 = (uint *)(lVar4 * 0x58 + 0x4c + unaff_RDI);
          *puVar1 = *puVar1 | *(uint *)(lVar5 * 0x58 + 0x4c + unaff_RDI) & 8;
          lVar5 = 0;
        }
        lVar4 = 2;
      }
      else {
        lVar4 = 1;
      }
      unaff_R15D = unaff_R15D + (int)lVar4;
      in_R10 = in_R10 + lVar4;
      unaff_ESI = iStackX_24;
    } while (unaff_R15D < iVar6);
  }
  lVar5 = malloc((longlong)unaff_ESI * 0x24);
  if (lVar5 == 0) {
    FUN_180413980();
  }
  else {
    FUN_1804135e0(extraout_XMM0_Da,lVar5);
    free(lVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x60) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180411dd3(void)
void FUN_180411dd3(void)

{
  longlong unaff_RBP;
  
  FUN_180413980();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x60) ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_180411e20(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar2 = param_4[4];
  iVar6 = 2;
  piVar1 = (int *)(param_1 + (longlong)(param_3 * 3) * 4);
  lVar7 = (longlong)param_3 * 0x58 + param_2;
  iVar8 = -1;
  if (*piVar1 == iVar2) {
    iVar8 = 0;
  }
  else if (piVar1[1] == iVar2) {
    iVar8 = 1;
  }
  else if (piVar1[2] == iVar2) {
    iVar8 = 2;
  }
  lVar5 = (longlong)iVar8;
  piVar1 = *(int **)(lVar7 + 0x10 + lVar5 * 8);
  if (piVar1 == param_4) {
LAB_180411f2a:
    uVar4 = 1;
  }
  else {
    if (piVar1 == (int *)0x0) {
      uVar3 = *(uint *)(lVar7 + 0x4c);
      if (((((uVar3 & 4) != 0) && (*(longlong *)(lVar7 + 0x10) == 0)) &&
          (*(longlong *)(lVar7 + 0x18) == 0)) && (*(longlong *)(lVar7 + 0x20) == 0)) {
        *(uint *)(lVar7 + 0x4c) = uVar3 & 0xfffffff7;
        uVar3 = -(uint)(param_4[5] != 0) & 8 | uVar3 & 0xfffffff7;
        *(uint *)(lVar7 + 0x4c) = uVar3;
      }
      if ((uVar3 >> 3 & 1) == param_4[5]) {
        *(int *)(*(longlong *)(param_4 + 2) + (longlong)*param_4 * 4) = param_3;
        *param_4 = *param_4 + 1;
        *(int **)(lVar7 + 0x10 + lVar5 * 8) = param_4;
        iVar2 = *(int *)(lVar7 + lVar5 * 4);
        if (0 < iVar8) {
          iVar6 = iVar8 + -1;
        }
        iVar6 = *(int *)(lVar7 + (longlong)iVar6 * 4);
        if (-1 < iVar2) {
          FUN_180411e20(param_1,param_2,iVar2,param_4);
        }
        if (-1 < iVar6) {
          FUN_180411e20(param_1,param_2,iVar6,param_4);
        }
        goto LAB_180411f2a;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// WARNING: Removing unreachable block (ram,0x000180412842)
// WARNING: Removing unreachable block (ram,0x00018041284b)
// WARNING: Removing unreachable block (ram,0x00018041286d)
// WARNING: Removing unreachable block (ram,0x000180412871)
// WARNING: Removing unreachable block (ram,0x000180412876)
// WARNING: Removing unreachable block (ram,0x000180412889)
// WARNING: Removing unreachable block (ram,0x00018041288d)
// WARNING: Removing unreachable block (ram,0x000180412898)
// WARNING: Removing unreachable block (ram,0x00018041289c)
// WARNING: Removing unreachable block (ram,0x000180412868)
// WARNING: Removing unreachable block (ram,0x0001804128a4)
// WARNING: Removing unreachable block (ram,0x0001804128ab)
// WARNING: Removing unreachable block (ram,0x0001804128af)
// WARNING: Removing unreachable block (ram,0x0001804128b5)
// WARNING: Removing unreachable block (ram,0x0001804128b8)
// WARNING: Removing unreachable block (ram,0x0001804128bf)
// WARNING: Removing unreachable block (ram,0x000180412972)
// WARNING: Removing unreachable block (ram,0x0001804129d1)
// WARNING: Removing unreachable block (ram,0x00018041299b)
// WARNING: Removing unreachable block (ram,0x0001804129f5)
// WARNING: Removing unreachable block (ram,0x000180412a2c)
// WARNING: Removing unreachable block (ram,0x000180412a41)
// WARNING: Removing unreachable block (ram,0x000180412a45)
// WARNING: Removing unreachable block (ram,0x000180412a58)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180411f50(uint64_t param_1,longlong param_2,int *param_3,uint param_4,uint64_t param_5,
void FUN_180411f50(uint64_t param_1,longlong param_2,int *param_3,uint param_4,uint64_t param_5,
                  float param_6,longlong *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int8_t auStack_2e8 [64];
  int32_t uStack_2a8;
  int32_t uStack_2a4;
  longlong lStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  int32_t uStack_288;
  uint64_t uStack_280;
  int *piStack_278;
  int *piStack_270;
  longlong lStack_268;
  longlong lStack_260;
  uint64_t uStack_258;
  float fStack_250;
  uint64_t uStack_248;
  float fStack_240;
  uint64_t uStack_238;
  float fStack_230;
  uint64_t uStack_228;
  float fStack_220;
  longlong *plStack_218;
  uint64_t uStack_210;
  longlong lStack_208;
  uint64_t uStack_200;
  longlong lStack_1f8;
  uint64_t uStack_1f0;
  longlong lStack_1e8;
  uint64_t uStack_1d8;
  float fStack_1d0;
  uint64_t uStack_1c8;
  float fStack_1c0;
  uint64_t uStack_1b8;
  float fStack_1b0;
  uint64_t uStack_1a8;
  float fStack_1a0;
  uint64_t uStack_198;
  float fStack_190;
  uint64_t uStack_188;
  float fStack_180;
  uint64_t uStack_178;
  float fStack_170;
  uint64_t uStack_168;
  float fStack_160;
  float fStack_150;
  float fStack_140;
  float fStack_130;
  float fStack_120;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  ulonglong uStack_e0;
  
  uStack_e0 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2e8;
  uStack_210 = param_5;
  uVar8 = 0;
  iVar16 = 0;
  plStack_218 = param_7;
  lVar14 = (longlong)(int)param_4;
  lStack_1f8 = param_2;
  uStack_1f0 = param_1;
  if (0 < (int)param_4) {
    if ((7 < param_4) && (1 < _DAT_180bf00b0)) {
      uVar18 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar8 = param_4 & 0x80000007;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
      }
      lVar10 = 0;
      piVar6 = param_3 + 0xc;
      do {
        iVar9 = piVar6[6];
        iVar16 = iVar16 + 8;
        iVar13 = *piVar6;
        lVar10 = lVar10 + 8;
        iVar1 = piVar6[-6];
        iVar2 = piVar6[-0xc];
        iVar3 = piVar6[0x18];
        iVar4 = piVar6[0x1e];
        iVar5 = piVar6[0x12];
        uVar18 = (uint)((int)uVar18 < iVar2) * iVar2 | ((int)uVar18 >= iVar2) * uVar18;
        uVar22 = (uint)((int)uVar22 < iVar1) * iVar1 | ((int)uVar22 >= iVar1) * uVar22;
        uVar23 = (uint)((int)uVar23 < iVar13) * iVar13 | ((int)uVar23 >= iVar13) * uVar23;
        uVar24 = (uint)((int)uVar24 < iVar9) * iVar9 | ((int)uVar24 >= iVar9) * uVar24;
        iVar9 = piVar6[0xc];
        uVar25 = (uint)((int)uVar25 < iVar9) * iVar9 | ((int)uVar25 >= iVar9) * uVar25;
        uVar26 = (uint)((int)uVar26 < iVar5) * iVar5 | ((int)uVar26 >= iVar5) * uVar26;
        uVar27 = (uint)((int)uVar27 < iVar3) * iVar3 | ((int)uVar27 >= iVar3) * uVar27;
        uVar28 = (uint)((int)uVar28 < iVar4) * iVar4 | ((int)uVar28 >= iVar4) * uVar28;
        piVar6 = piVar6 + 0x30;
      } while (lVar10 < (int)(param_4 - uVar8));
      uVar8 = ((int)uVar18 < (int)uVar25) * uVar25 | ((int)uVar18 >= (int)uVar25) * uVar18;
      uVar18 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
      uVar22 = ((int)uVar23 < (int)uVar27) * uVar27 | ((int)uVar23 >= (int)uVar27) * uVar23;
      uVar23 = ((int)uVar24 < (int)uVar28) * uVar28 | ((int)uVar24 >= (int)uVar28) * uVar24;
      uVar8 = ((int)uVar8 < (int)uVar22) * uVar22 | ((int)uVar8 >= (int)uVar22) * uVar8;
      uVar18 = ((int)uVar18 < (int)uVar23) * uVar23 | ((int)uVar18 >= (int)uVar23) * uVar18;
      uVar8 = ((int)uVar8 < (int)uVar18) * uVar18 | ((int)uVar8 >= (int)uVar18) * uVar8;
    }
    if (iVar16 < (int)param_4) {
      puVar12 = (uint *)(param_3 + (longlong)iVar16 * 6);
      uVar11 = (ulonglong)(param_4 - iVar16);
      uVar18 = uVar8;
      do {
        uVar8 = *puVar12;
        puVar12 = puVar12 + 6;
        if ((int)uVar8 <= (int)uVar18) {
          uVar8 = uVar18;
        }
        uVar11 = uVar11 - 1;
        uVar18 = uVar8;
      } while (uVar11 != 0);
    }
    if (uVar8 != 0) {
      lVar10 = (longlong)(int)uVar8;
      lStack_2a0 = malloc(lVar10 * 0x28);
      piVar6 = (int *)malloc(lVar10 << 4);
      piStack_278 = piVar6;
      piVar7 = (int *)malloc(lVar10 * 4);
      if (lStack_2a0 != 0) {
        if ((piVar6 != (int *)0x0) && (piVar7 != (int *)0x0)) {
          uStack_2a4 = 0;
          lStack_1e8 = lVar14;
          if (0 < (int)param_4) {
            lStack_268 = 0;
            do {
              uStack_2a8 = 0;
              lStack_260 = 0;
              uStack_288 = 0;
              if (0 < *param_3) {
                lStack_208 = lStack_2a0;
                uStack_200 = 0;
                uStack_280 = 0xffffffffffffffff;
                lVar14 = (longlong)**(int **)(param_3 + 2) * 0x58 + param_2;
                if (*(int **)(lVar14 + 0x10) == param_3) {
                  uStack_280 = 0;
                }
                else if (*(int **)(lVar14 + 0x18) == param_3) {
                  uStack_280 = 1;
                }
                else if (*(int **)(lVar14 + 0x20) == param_3) {
                  uStack_280 = 2;
                }
                piStack_270 = piVar6;
                (**(code **)(*plStack_218 + 0x18))(plStack_218,&fStack_f0);
                uStack_1d8 = *(uint64_t *)(lVar14 + 0x28);
                fStack_1d0 = *(float *)(lVar14 + 0x30);
                fVar19 = fStack_ec * (float)((ulonglong)uStack_1d8 >> 0x20) +
                         fStack_f0 * (float)uStack_1d8 + fStack_e8 * fStack_1d0;
                uStack_1c8 = *(uint64_t *)(lVar14 + 0x28);
                fStack_294 = (float)uStack_1c8 - fStack_f0 * fVar19;
                fStack_298 = (float)((ulonglong)uStack_1c8 >> 0x20) - fStack_ec * fVar19;
                uStack_1b8 = *(uint64_t *)(lVar14 + 0x34);
                fStack_250 = fStack_1d0 - fStack_e8 * fVar19;
                uStack_258 = CONCAT44(fStack_298,fStack_294);
                fStack_1b0 = *(float *)(lVar14 + 0x3c);
                fVar19 = fStack_ec * (float)((ulonglong)uStack_1b8 >> 0x20) +
                         fStack_f0 * (float)uStack_1b8 + fStack_e8 * fStack_1b0;
                uStack_1a8 = *(uint64_t *)(lVar14 + 0x34);
                fStack_28c = (float)uStack_1a8 - fStack_f0 * fVar19;
                fStack_240 = fStack_1b0 - fStack_e8 * fVar19;
                fStack_290 = (float)((ulonglong)uStack_1a8 >> 0x20) - fStack_ec * fVar19;
                uStack_248 = CONCAT44(fStack_290,fStack_28c);
                if (((1.1754944e-38 < ABS(fStack_294)) || (1.1754944e-38 < ABS(fStack_298))) ||
                   (fVar19 = fStack_250, 1.1754944e-38 < ABS(fStack_250))) {
                  fVar19 = 1.0 / SQRT(fStack_294 * fStack_294 + fStack_298 * fStack_298 +
                                      fStack_250 * fStack_250);
                  fStack_294 = fVar19 * fStack_294;
                  fStack_298 = fVar19 * fStack_298;
                  fVar19 = fVar19 * fStack_250;
                }
                if (((1.1754944e-38 < ABS(fStack_28c)) || (1.1754944e-38 < ABS(fStack_290))) ||
                   (fVar32 = fStack_240, 1.1754944e-38 < ABS(fStack_240))) {
                  fVar32 = 1.0 / SQRT(fStack_28c * fStack_28c + fStack_290 * fStack_290 +
                                      fStack_240 * fStack_240);
                  fStack_28c = fVar32 * fStack_28c;
                  fStack_290 = fVar32 * fStack_290;
                  fVar32 = fVar32 * fStack_240;
                }
                iVar16 = *(int *)(lVar14 + 0x48);
                iVar13 = 0;
                iVar9 = 0;
                fStack_1c0 = fStack_1d0;
                fStack_1a0 = fStack_1b0;
                fStack_150 = fStack_250;
                fStack_140 = fStack_240;
                if (0 < *param_3) {
                  lVar10 = 0;
                  piVar6 = piVar7;
                  do {
                    lVar15 = (longlong)*(int *)(lVar10 + *(longlong *)(param_3 + 2)) * 0x58;
                    uStack_198 = *(uint64_t *)(lVar15 + 0x28 + param_2);
                    fStack_190 = *(float *)(lVar15 + 0x30 + param_2);
                    fVar20 = fStack_ec * (float)((ulonglong)uStack_198 >> 0x20) +
                             fStack_f0 * (float)uStack_198 + fStack_e8 * fStack_190;
                    uStack_188 = *(uint64_t *)(lVar15 + 0x28 + param_2);
                    fVar31 = (float)uStack_188 - fStack_f0 * fVar20;
                    fVar29 = (float)((ulonglong)uStack_188 >> 0x20) - fStack_ec * fVar20;
                    uStack_178 = *(uint64_t *)(lVar15 + 0x34 + param_2);
                    fStack_230 = fStack_190 - fStack_e8 * fVar20;
                    uStack_238 = CONCAT44(fVar29,fVar31);
                    fStack_170 = *(float *)(lVar15 + 0x3c + param_2);
                    fVar21 = fStack_ec * (float)((ulonglong)uStack_178 >> 0x20) +
                             fStack_f0 * (float)uStack_178 + fStack_e8 * fStack_170;
                    uStack_168 = *(uint64_t *)(lVar15 + 0x34 + param_2);
                    fVar30 = (float)uStack_168 - fStack_f0 * fVar21;
                    fVar20 = (float)((ulonglong)uStack_168 >> 0x20) - fStack_ec * fVar21;
                    fStack_220 = fStack_170 - fStack_e8 * fVar21;
                    uStack_228 = CONCAT44(fVar20,fVar30);
                    if (((1.1754944e-38 < ABS(fVar31)) || (1.1754944e-38 < ABS(fVar29))) ||
                       (fVar21 = fStack_230, 1.1754944e-38 < ABS(fStack_230))) {
                      fVar21 = 1.0 / SQRT(fVar31 * fVar31 + fVar29 * fVar29 +
                                          fStack_230 * fStack_230);
                      fVar31 = fVar21 * fVar31;
                      fVar29 = fVar21 * fVar29;
                      fVar21 = fVar21 * fStack_230;
                    }
                    if (((1.1754944e-38 < ABS(fVar30)) || (1.1754944e-38 < ABS(fVar20))) ||
                       (fVar17 = fStack_220, 1.1754944e-38 < ABS(fStack_220))) {
                      fVar17 = 1.0 / SQRT(fVar30 * fVar30 + fVar20 * fVar20 +
                                          fStack_220 * fStack_220);
                      fVar30 = fVar17 * fVar30;
                      fVar20 = fVar17 * fVar20;
                      fVar17 = fVar17 * fStack_220;
                    }
                    if (((((*(uint *)(lVar15 + 0x4c + param_2) | *(uint *)(lVar14 + 0x4c)) & 4) != 0
                         ) || (iVar16 == *(int *)(lVar15 + 0x48 + param_2))) ||
                       ((param_6 < fVar29 * fStack_298 + fVar31 * fStack_294 + fVar21 * fVar19 &&
                        (param_6 < fVar20 * fStack_290 + fVar30 * fStack_28c + fVar17 * fVar32)))) {
                      iVar13 = iVar13 + 1;
                      *piVar6 = *(int *)(lVar10 + *(longlong *)(param_3 + 2));
                      piVar6 = piVar6 + 1;
                    }
                    iVar9 = iVar9 + 1;
                    lVar10 = lVar10 + 4;
                  } while (iVar9 < *param_3);
                  fStack_180 = fStack_190;
                  fStack_160 = fStack_170;
                  fStack_130 = fStack_230;
                  fStack_120 = fStack_220;
                  if (1 < iVar13) {
                    FUN_1804134f0(piVar7,0);
                  }
                }
                lVar14 = malloc((longlong)iVar13 << 2);
                if (lVar14 != 0) {
                  *piStack_270 = iVar13;
                  *(longlong *)(piStack_270 + 2) = lVar14;
                    // WARNING: Subroutine does not return
                  memcpy(lVar14,piVar7,(longlong)iVar13 << 2);
                }
                if (0 < lStack_260) {
                  piVar6 = piStack_278 + 2;
                  lVar14 = lStack_260;
                  do {
                    free(*(uint64_t *)piVar6);
                    piVar6 = piVar6 + 4;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                free(piStack_278);
                free(piVar7);
                free(lStack_2a0);
                goto FUN_180412b4c;
              }
              lStack_260 = 0;
              uStack_288 = 0;
              uStack_2a8 = 0;
              lStack_268 = lStack_268 + 1;
              param_3 = param_3 + 6;
            } while (lStack_268 < lVar14);
          }
          free(piVar6);
          free(piVar7);
          free(lStack_2a0);
          goto FUN_180412b4c;
        }
        free();
      }
      if (piVar6 != (int *)0x0) {
        free(piVar6);
      }
      if (piVar7 != (int *)0x0) {
        free(piVar7);
      }
    }
  }
FUN_180412b4c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e0 ^ (ulonglong)auStack_2e8);
}



// WARNING: Removing unreachable block (ram,0x000180412842)
// WARNING: Removing unreachable block (ram,0x00018041284b)
// WARNING: Removing unreachable block (ram,0x00018041286d)
// WARNING: Removing unreachable block (ram,0x000180412871)
// WARNING: Removing unreachable block (ram,0x000180412876)
// WARNING: Removing unreachable block (ram,0x000180412889)
// WARNING: Removing unreachable block (ram,0x00018041288d)
// WARNING: Removing unreachable block (ram,0x000180412898)
// WARNING: Removing unreachable block (ram,0x00018041289c)
// WARNING: Removing unreachable block (ram,0x000180412868)
// WARNING: Removing unreachable block (ram,0x0001804128a4)
// WARNING: Removing unreachable block (ram,0x0001804128ab)
// WARNING: Removing unreachable block (ram,0x0001804128af)
// WARNING: Removing unreachable block (ram,0x0001804128b5)
// WARNING: Removing unreachable block (ram,0x0001804128b8)
// WARNING: Removing unreachable block (ram,0x0001804128bf)
// WARNING: Removing unreachable block (ram,0x000180412972)
// WARNING: Removing unreachable block (ram,0x0001804129d1)
// WARNING: Removing unreachable block (ram,0x00018041299b)
// WARNING: Removing unreachable block (ram,0x0001804129f5)
// WARNING: Removing unreachable block (ram,0x000180412a2c)
// WARNING: Removing unreachable block (ram,0x000180412a41)
// WARNING: Removing unreachable block (ram,0x000180412a45)
// WARNING: Removing unreachable block (ram,0x000180412a58)



