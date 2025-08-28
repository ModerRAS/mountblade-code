#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part047.c - 4 个函数

// 函数: void FUN_1805d22d0(int64_t *param_1,uint param_2)
void FUN_1805d22d0(int64_t *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int8_t uVar7;
  int64_t lVar8;
  int8_t auStackX_8 [8];
  uint auStackX_10 [2];
  int8_t auStackX_18 [8];
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  lVar8 = *param_1;
  if (((*(uint *)(lVar8 + 0x56c) & 0x4000) != 0) && ((*(uint *)(param_1 + 2) & 0x20) == 0)) {
    param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
    lVar8 = *param_1;
  }
  auStackX_10[0] = param_2;
  if ((*(uint *)(lVar8 + 0x56c) & 0x4000) == 0) {
LAB_1805d236f:
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 2);
    if ((uVar3 & 1) == 0) {
      FUN_1805d3210(param_1 + 1);
      uVar3 = *(uint *)(param_1 + 2);
    }
    if ((uVar3 >> 0xc & 1) == 0) {
      FUN_1805d4df0(param_1 + 1);
    }
    if (*(float *)(param_1 + 0x22) < *(float *)(param_1 + 0xd) ||
        *(float *)(param_1 + 0x22) == *(float *)(param_1 + 0xd)) goto LAB_1805d236f;
    uVar7 = 1;
  }
  FUN_180619540(param_1 + 0x269);
  FUN_18061a730(param_1 + 0x269,(int)param_1[0x427],(int64_t)param_1 + 0x213c,uVar7);
  FUN_1805e3710();
  if (*(int *)(*param_1 + 0x5f8) == 0) {
    FUN_1805e0fd0(param_1 + 0x2f,param_1 + 0x2ac);
    auStackX_8[0] = (int8_t)param_1[0x431];
    auStackX_18[0] = *(int8_t *)((int64_t)param_1 + 0x2189);
    auStackX_10[0] = auStackX_10[0] & 0xffffff00;
    *(int8_t *)((int64_t)param_1 + 0x218a) = 1;
    FUN_1805e2d20(param_1 + 0x2f,auStackX_10,auStackX_8,auStackX_18,
                  (int8_t *)((int64_t)param_1 + 0x218a));
    *(char *)(param_1 + 0x441) = (char)auStackX_10[0];
    if ((char)auStackX_10[0] != '\0') {
      *(int8_t *)((int64_t)param_1 + 0x2209) = auStackX_8[0];
      *(int8_t *)((int64_t)param_1 + 0x220a) = auStackX_18[0];
    }
  }
  cVar2 = (char)param_1[0x438];
  if (cVar2 == '\0') {
    iVar4 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar4 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if (-1 < iVar4) {
    lVar8 = *(int64_t *)((int64_t)iVar4 * 0xa60 + 0x3778 + param_1[0x291]);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x8be) != '\0')) {
      lVar8 = param_1[0x291] + 0x30a0;
      if (cVar2 == '\0') {
        iVar4 = *(int *)((int64_t)param_1 + 0x14b4);
      }
      else {
        iVar4 = *(int *)((int64_t)param_1 + 0x21c4);
      }
      if (*(int *)((int64_t)iVar4 * 0xa60 + 0x568 + lVar8) == 1) {
        lVar6 = *param_1;
        if (cVar2 == '\0') {
          iVar4 = *(int *)((int64_t)param_1 + 0x14b4);
        }
        else {
          iVar4 = *(int *)((int64_t)param_1 + 0x21c4);
        }
        cVar2 = func_0x000180508270(lVar6,(int64_t)iVar4 * 0xa60 + lVar8);
        if (cVar2 != '\0') {
          bVar1 = true;
          goto LAB_1805d24dd;
        }
      }
    }
  }
  lVar6 = *param_1;
  bVar1 = false;
LAB_1805d24dd:
  if (((((*(byte *)(lVar6 + 0x56c) & 8) == 0) || (*(int *)(lVar6 + 0x920) != 0)) ||
      (uVar5 = (uint64_t)*(uint *)(param_1 + 0x413), (*(uint *)(param_1 + 0x413) & 2) != 0)) ||
     (((((*(uint *)((int64_t)param_1 + 0x1484) >> 2 & 1) != 0 ||
        ((*(uint *)((int64_t)param_1 + 0x1484) & 2) == 0)) ||
       ((!bVar1 && (cVar2 = func_0x0001805b7bd0(param_1), cVar2 == '\0')))) ||
      ((uVar5 >> 8 & 1) != 0)))) {
    *(int32_t *)(param_1 + 0x2f2) = 5;
  }
  else {
    FUN_1805cac10(param_1);
  }
  uStack_28 = *(int32_t *)((int64_t)param_1 + 0x135c);
  uStack_24 = (int32_t)param_1[0x26c];
  uStack_20 = *(int32_t *)((int64_t)param_1 + 0x1364);
  uStack_1c = (int32_t)param_1[0x26d];
  FUN_180538160(param_1 + 0x2ac,&uStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d2570(int64_t *param_1)
void FUN_1805d2570(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  bool bVar4;
  int32_t uVar5;
  float *pfVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  int64_t lVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint64_t uStack_88;
  
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  lVar1 = param_1[0x1d];
  lVar12 = lVar1;
  if (((*(uint *)(lVar1 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar1 + 0x564))) {
    lVar7 = (int64_t)*(int *)(lVar1 + 0x564) * 0xa60;
    if (*(int *)(lVar7 + 0x3608 + *(int64_t *)(lVar1 + 0x8d8)) == 1) {
      lVar12 = *(int64_t *)(lVar1 + 0x8d8) + 0x30a0 + lVar7;
    }
  }
  fVar19 = *(float *)(*(int64_t *)(lVar1 + 0x6d8) + 0x8c4) -
           *(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8c4);
  fVar21 = *(float *)(*(int64_t *)(lVar1 + 0x6d8) + 0x8c8) -
           *(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8c8);
  fVar15 = fVar21 * fVar21 + fVar19 * fVar19;
  fVar15 = fVar15 + (float)(fVar15 <= 1.1754944e-38) * 1.1754944e-38;
  auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
  fVar18 = auVar14._0_4_;
  fVar18 = fVar18 * 0.5 * (3.0 - fVar15 * fVar18 * fVar18);
  pfVar6 = (float *)FUN_1805b6cc0(param_1 + 1);
  uVar11 = *(uint *)(param_1 + 2);
  fVar20 = ABS(fVar21 * fVar18 * pfVar6[1] + fVar19 * fVar18 * *pfVar6);
  if ((uVar11 & 0x20) == 0) {
    uVar11 = uVar11 | 0x20;
    lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar7;
    *(uint *)(param_1 + 2) = uVar11;
  }
  else {
    lVar7 = param_1[0x15];
  }
  if ((lVar7 == 0) ||
     ((*(byte *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) >> 1
      & 1) == 0)) {
    if ((uVar11 & 0x10) == 0) {
      FUN_1805d3770(param_1 + 1);
    }
    if ((*(float *)((int64_t)param_1 + 0xa4) <= 5.0) &&
       (*(float *)(*(int64_t *)(*param_1 + 0x20) + 0x234) <=
        *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x84) * 0.65)) {
      if ((*(uint *)(param_1 + 2) >> 0x19 & 1) == 0) {
        fVar19 = *(float *)(*(int64_t *)param_1[1] + 0x7dc);
        *(float *)((int64_t)param_1 + 0xb4) = fVar19;
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x2000000;
      }
      else {
        fVar19 = *(float *)((int64_t)param_1 + 0xb4);
      }
      if ((fVar18 * fVar15 <= fVar19 * 0.3) &&
         (fVar20 < *(float *)(*(int64_t *)(lVar1 + 0x20) + 0x84) * 0.5)) goto LAB_1805d285d;
      if (lVar7 == 0) {
LAB_1805d294d:
        fVar19 = fVar19 * fVar19;
        lVar8 = *(int64_t *)(*param_1 + 0x6d8);
        lVar3 = *(int64_t *)(lVar1 + 0x6d8);
        fVar20 = *(float *)(lVar3 + 0x8c4) - *(float *)(lVar8 + 0x8c4);
        fVar15 = *(float *)(lVar3 + 0x8c8) - *(float *)(lVar8 + 0x8c8);
        fVar18 = *(float *)(lVar3 + 0x8cc) - *(float *)(lVar8 + 0x8cc);
        if (fVar19 <= fVar20 * fVar20 + fVar15 * fVar15 + fVar18 * fVar18) {
          if (lVar7 == 0) {
LAB_1805d29f8:
            bVar4 = false;
            bVar10 = 0;
          }
          else {
            lVar8 = (int64_t)*(int *)(lVar7 + 0xf0) * 0xa0;
            if ((*(byte *)(lVar8 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) & 0x40) == 0)
            goto LAB_1805d29f8;
            bVar4 = true;
            bVar10 = *(byte *)((int64_t)*(int *)(lVar8 + 100 + *(int64_t *)(lVar7 + 0xd0)) * 0x170
                               + 0x140 + system_system_memory) >> 4 & 1;
          }
          puVar9 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar12 + 0x590) + 0x2581) * 0x100 +
                           *(int64_t *)(*(int64_t *)(lVar1 + 0x658) + 0x18));
          do {
            LOCK();
            uVar11 = *puVar9;
            *puVar9 = *puVar9 | 1;
            UNLOCK();
          } while ((uVar11 & 1) != 0);
          uStack_a8 = *(uint64_t *)(puVar9 + 1);
          uStack_a0 = *(uint64_t *)(puVar9 + 3);
          fStack_98 = (float)puVar9[5];
          fStack_94 = (float)puVar9[6];
          fStack_90 = (float)puVar9[7];
          uStack_8c = puVar9[8];
          *puVar9 = 0;
          lVar1 = *(int64_t *)(lVar1 + 0x6d8);
          lVar12 = *(int64_t *)(lVar12 + 0x6d8);
          lVar7 = *(int64_t *)(lVar12 + 0x8a8);
          fVar18 = *(float *)(lVar1 + 0x8ec);
          fVar15 = fVar18 - (fStack_90 * *(float *)(lVar7 + 0x98) + *(float *)(lVar7 + 0xa8));
          if (ABS(fVar15) <= 0.001) {
            fVar20 = 1.0;
          }
          else {
            fVar21 = (*(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8ec) - fVar18) / fVar15;
            fVar20 = 0.0;
            if ((0.0 <= fVar21) && (fVar20 = fVar21, 1.0 <= fVar21)) {
              fVar20 = 1.0;
            }
          }
          if (bVar10 == 0) {
            lVar8 = *(int64_t *)(*param_1 + 0x6d8);
            fVar21 = *(float *)(lVar8 + 0x8c8) -
                     (fVar20 * (*(float *)(lVar1 + 0x8e8) -
                               (fStack_98 * *(float *)(lVar7 + 0x74) +
                                fStack_94 * *(float *)(lVar7 + 0x84) + *(float *)(lVar7 + 0xa4))) +
                     *(float *)(lVar1 + 0x8e8));
            fVar13 = *(float *)(lVar8 + 0x8c4) -
                     (fVar20 * (*(float *)(lVar1 + 0x8e4) -
                               (fStack_94 * *(float *)(lVar7 + 0x80) +
                                fStack_98 * *(float *)(lVar7 + 0x70) + *(float *)(lVar7 + 0xa0))) +
                     *(float *)(lVar1 + 0x8e4));
            fVar18 = *(float *)(lVar8 + 0x8cc) - (fVar20 * fVar15 + fVar18);
            if (fVar19 <= fVar13 * fVar13 + fVar21 * fVar21 + fVar18 * fVar18) {
              uStack_b8 = *(uint64_t *)(lVar12 + 0x8d4);
              uStack_b0 = *(uint64_t *)(lVar12 + 0x8dc);
              if (!bVar4) {
                fVar18 = *(float *)(lVar8 + 0x8c4) - (float)uStack_b8;
                uStack_b8._4_4_ = (float)((uint64_t)uStack_b8 >> 0x20);
                fVar15 = *(float *)(lVar8 + 0x8c8) - uStack_b8._4_4_;
                fVar20 = *(float *)(lVar8 + 0x8cc) - (float)uStack_b0;
                if (fVar18 * fVar18 + fVar15 * fVar15 + fVar20 * fVar20 < fVar19) {
                  uVar5 = 5;
                  goto LAB_1805d2bf1;
                }
              }
              uVar5 = 6;
              goto LAB_1805d2bf1;
            }
          }
          uVar5 = 4;
          goto LAB_1805d2bf1;
        }
      }
      else {
        lVar8 = (int64_t)*(int *)(lVar7 + 0xf0) * 0xa0;
        if (((*(byte *)(lVar8 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) & 0x40) == 0) ||
           ((*(byte *)((int64_t)*(int *)(lVar8 + 100 + *(int64_t *)(lVar7 + 0xd0)) * 0x170 + 0x140
                      + system_system_memory) & 0x10) == 0)) goto LAB_1805d294d;
      }
      uVar5 = 3;
      goto LAB_1805d2bf1;
    }
  }
  else {
    uVar2 = *(uint64_t *)pfVar6;
    uStack_b8._4_4_ = (float)((uint64_t)uVar2 >> 0x20);
    uStack_b8._0_4_ = (float)uVar2;
    fVar13 = uStack_b8._4_4_ * uStack_b8._4_4_ + (float)uStack_b8 * (float)uStack_b8;
    fVar13 = (float)(fVar13 <= 1.1754944e-38) * 1.1754944e-38 + fVar13;
    auVar14 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar16 = auVar14._0_4_;
    fVar16 = fVar16 * 0.5 * (3.0 - fVar13 * fVar16 * fVar16);
    fVar17 = (float)uStack_b8 * fVar16;
    fVar16 = uStack_b8._4_4_ * fVar16;
    fVar13 = *(float *)(*(int64_t *)(lVar12 + 0x20) + 0x84);
    uStack_b8 = uVar2;
    if ((uVar11 & 0x10) == 0) {
      FUN_1805d3770(param_1 + 1);
    }
    if ((0.98999906 < ABS(fVar17 * fVar19 * fVar18 + fVar16 * fVar21 * fVar18)) &&
       ((*(float *)((int64_t)param_1 + 0xa4) < 2.0 ||
        (((*(float *)((int64_t)param_1 + 0xa4) < 5.0 && (fVar20 < fVar13 * 0.5)) &&
         (fVar19 = (float)FUN_1805b7b70(param_1,lVar7,lVar1), fVar18 * fVar15 * 0.5 < fVar19)))))) {
LAB_1805d285d:
      uVar5 = 1;
      goto LAB_1805d2bf1;
    }
  }
  uVar5 = 2;
LAB_1805d2bf1:
  *(int32_t *)(param_1 + 0x405) = uVar5;
  uVar11 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
  uVar11 = uVar11 ^ uVar11 >> 0x11;
  uVar11 = uVar11 ^ uVar11 << 5;
  *(uint *)(param_1 + 0x272) = uVar11;
  *(float *)((int64_t)param_1 + 0x202c) = (float)(uVar11 - 1) * 2.3283064e-10;
  FUN_1805d2c90(param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_88 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d2722(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
void FUN_1805d2722(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int32_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint *puVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  byte bVar9;
  int64_t unaff_R14;
  uint unaff_R15D;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  uint64_t in_stack_00000050;
  
  if ((unaff_RSI == 0) ||
     ((*(byte *)((int64_t)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                *(int64_t *)(unaff_RSI + 0xd0)) >> 1 & 1) == 0)) {
    if ((param_3 & 0x10) == 0) {
      FUN_1805d3770(unaff_RDI + 1);
    }
    if ((*(float *)((int64_t)unaff_RDI + 0xa4) <= 5.0) &&
       (*(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x234) <=
        *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x84) * 0.65)) {
      if ((*(uint *)(unaff_RDI + 2) >> 0x19 & 1) == 0) {
        fVar11 = *(float *)(*(int64_t *)unaff_RDI[1] + 0x7dc);
        *(float *)((int64_t)unaff_RDI + 0xb4) = fVar11;
        *(uint *)(unaff_RDI + 2) = *(uint *)(unaff_RDI + 2) | 0x2000000;
      }
      else {
        fVar11 = *(float *)((int64_t)unaff_RDI + 0xb4);
      }
      if ((unaff_XMM7_Da <= fVar11 * 0.3) &&
         (unaff_XMM9_Da < *(float *)(*(int64_t *)(unaff_RBP + 0x20) + 0x84) * 0.5))
      goto LAB_1805d285d;
      if (unaff_RSI == 0) {
LAB_1805d294d:
        fVar11 = fVar11 * fVar11;
        lVar6 = *(int64_t *)(*unaff_RDI + 0x6d8);
        lVar1 = *(int64_t *)(unaff_RBP + 0x6d8);
        fVar13 = *(float *)(lVar1 + 0x8c4) - *(float *)(lVar6 + 0x8c4);
        fVar12 = *(float *)(lVar1 + 0x8c8) - *(float *)(lVar6 + 0x8c8);
        fVar16 = *(float *)(lVar1 + 0x8cc) - *(float *)(lVar6 + 0x8cc);
        if (fVar11 <= fVar13 * fVar13 + fVar12 * fVar12 + fVar16 * fVar16) {
          if (unaff_RSI == 0) {
LAB_1805d29f8:
            bVar4 = false;
            bVar9 = 0;
          }
          else {
            lVar6 = (int64_t)*(int *)(unaff_RSI + 0xf0) * 0xa0;
            if ((*(byte *)(lVar6 + 0x50 + *(int64_t *)(unaff_RSI + 0xd0)) & 0x40) == 0)
            goto LAB_1805d29f8;
            bVar4 = true;
            bVar9 = *(byte *)((int64_t)*(int *)(lVar6 + 100 + *(int64_t *)(unaff_RSI + 0xd0)) *
                              0x170 + 0x140 + system_system_memory) >> 4 & 1;
          }
          puVar8 = (uint *)((int64_t)*(char *)(*(int64_t *)(unaff_R14 + 0x590) + 0x2581) * 0x100 +
                           *(int64_t *)(*(int64_t *)(unaff_RBP + 0x658) + 0x18));
          do {
            LOCK();
            uVar7 = *puVar8;
            *puVar8 = *puVar8 | 1;
            UNLOCK();
          } while ((uVar7 & 1) != 0);
          *puVar8 = unaff_R15D;
          lVar6 = *(int64_t *)(unaff_RBP + 0x6d8);
          lVar1 = *(int64_t *)(unaff_R14 + 0x6d8);
          lVar2 = *(int64_t *)(lVar1 + 0x8a8);
          fVar16 = *(float *)(lVar6 + 0x8ec);
          fVar12 = fVar16 - ((float)puVar8[7] * *(float *)(lVar2 + 0x98) + *(float *)(lVar2 + 0xa8))
          ;
          if (ABS(fVar12) <= 0.001) {
            fVar13 = 1.0;
          }
          else {
            fVar10 = (*(float *)(*(int64_t *)(*unaff_RDI + 0x6d8) + 0x8ec) - fVar16) / fVar12;
            fVar13 = 0.0;
            if ((0.0 <= fVar10) && (fVar13 = fVar10, 1.0 <= fVar10)) {
              fVar13 = 1.0;
            }
          }
          if (bVar9 == 0) {
            lVar3 = *(int64_t *)(*unaff_RDI + 0x6d8);
            fVar10 = *(float *)(lVar3 + 0x8c8) -
                     (fVar13 * (*(float *)(lVar6 + 0x8e8) -
                               ((float)puVar8[5] * *(float *)(lVar2 + 0x74) +
                                (float)puVar8[6] * *(float *)(lVar2 + 0x84) +
                               *(float *)(lVar2 + 0xa4))) + *(float *)(lVar6 + 0x8e8));
            fVar14 = *(float *)(lVar3 + 0x8c4) -
                     (fVar13 * (*(float *)(lVar6 + 0x8e4) -
                               ((float)puVar8[6] * *(float *)(lVar2 + 0x80) +
                                (float)puVar8[5] * *(float *)(lVar2 + 0x70) +
                               *(float *)(lVar2 + 0xa0))) + *(float *)(lVar6 + 0x8e4));
            fVar16 = *(float *)(lVar3 + 0x8cc) - (fVar13 * fVar12 + fVar16);
            if (fVar11 <= fVar14 * fVar14 + fVar10 * fVar10 + fVar16 * fVar16) {
              if (!bVar4) {
                fStackX_20 = (float)*(uint64_t *)(lVar1 + 0x8d4);
                fStackX_20 = *(float *)(lVar3 + 0x8c4) - fStackX_20;
                fStackX_24 = (float)((uint64_t)*(uint64_t *)(lVar1 + 0x8d4) >> 0x20);
                fStackX_24 = *(float *)(lVar3 + 0x8c8) - fStackX_24;
                fStack0000000000000028 = (float)*(uint64_t *)(lVar1 + 0x8dc);
                fStack0000000000000028 = *(float *)(lVar3 + 0x8cc) - fStack0000000000000028;
                if (fStackX_20 * fStackX_20 + fStackX_24 * fStackX_24 +
                    fStack0000000000000028 * fStack0000000000000028 < fVar11) {
                  uVar5 = 5;
                  goto LAB_1805d2bf1;
                }
              }
              uVar5 = 6;
              goto LAB_1805d2bf1;
            }
          }
          uVar5 = 4;
          goto LAB_1805d2bf1;
        }
      }
      else {
        lVar6 = (int64_t)*(int *)(unaff_RSI + 0xf0) * 0xa0;
        if (((*(byte *)(lVar6 + 0x50 + *(int64_t *)(unaff_RSI + 0xd0)) & 0x40) == 0) ||
           ((*(byte *)((int64_t)*(int *)(lVar6 + 100 + *(int64_t *)(unaff_RSI + 0xd0)) * 0x170 +
                       0x140 + system_system_memory) & 0x10) == 0)) goto LAB_1805d294d;
      }
      uVar5 = 3;
      goto LAB_1805d2bf1;
    }
  }
  else {
    fStackX_24 = (float)((uint64_t)*param_4 >> 0x20);
    fStackX_20 = (float)*param_4;
    fVar11 = fStackX_24 * fStackX_24 + fStackX_20 * fStackX_20;
    fVar11 = (float)CONCAT31((int3)(unaff_R15D >> 8),fVar11 <= unaff_XMM11_Da) * unaff_XMM11_Da +
             fVar11;
    auVar15 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar16 = auVar15._0_4_;
    fVar16 = fVar16 * 0.5 * (3.0 - fVar11 * fVar16 * fVar16);
    fVar11 = *(float *)(*(int64_t *)(unaff_R14 + 0x20) + 0x84);
    if ((param_3 & 0x10) == 0) {
      FUN_1805d3770(unaff_RDI + 1);
    }
    if ((0.98999906 <
         ABS(fStackX_20 * fVar16 * unaff_XMM8_Da + fStackX_24 * fVar16 * unaff_XMM10_Da)) &&
       ((*(float *)((int64_t)unaff_RDI + 0xa4) < 2.0 ||
        (((*(float *)((int64_t)unaff_RDI + 0xa4) < 5.0 && (unaff_XMM9_Da < fVar11 * 0.5)) &&
         (fVar11 = (float)FUN_1805b7b70(), unaff_XMM7_Da * 0.5 < fVar11)))))) {
LAB_1805d285d:
      uVar5 = 1;
      goto LAB_1805d2bf1;
    }
  }
  uVar5 = 2;
LAB_1805d2bf1:
  *(int32_t *)(unaff_RDI + 0x405) = uVar5;
  uVar7 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
  uVar7 = uVar7 ^ uVar7 >> 0x11;
  uVar7 = uVar7 ^ uVar7 << 5;
  *(uint *)(unaff_RDI + 0x272) = uVar7;
  *(float *)((int64_t)unaff_RDI + 0x202c) = (float)(uVar7 - 1) * 2.3283064e-10;
  FUN_1805d2c90();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d2c90(int64_t *param_1)
void FUN_1805d2c90(int64_t *param_1)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auStack_b8 [48];
  uint64_t uStack_88;
  uint64_t uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  iVar6 = (int)param_1[0x405];
  lVar5 = param_1[0x1d];
  if (iVar6 == 1) {
    lVar3 = *(int64_t *)(lVar5 + 0x6d8);
    lVar2 = *(int64_t *)(lVar3 + 0x8a8);
    puVar4 = (uint *)((int64_t)
                      *(char *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x260) + 0x210) + 0xe3) * 0x100
                     + *(int64_t *)(*(int64_t *)(lVar5 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_88 = *(uint64_t *)(puVar4 + 1);
    uStack_80 = *(uint64_t *)(puVar4 + 3);
    fStack_78 = (float)puVar4[5];
    fStack_74 = (float)puVar4[6];
    fStack_70 = (float)puVar4[7];
    uStack_6c = puVar4[8];
    *puVar4 = 0;
    fVar13 = *(float *)((int64_t)param_1 + 0x202c);
    fVar11 = fStack_70 * *(float *)(lVar2 + 0x98) + *(float *)(lVar2 + 0xa8);
    fVar8 = fStack_74 * *(float *)(lVar2 + 0x80) + fStack_78 * *(float *)(lVar2 + 0x70) +
            *(float *)(lVar2 + 0xa0);
    fVar10 = fStack_78 * *(float *)(lVar2 + 0x74) + fStack_74 * *(float *)(lVar2 + 0x84) +
             *(float *)(lVar2 + 0xa4);
    fVar11 = (*(float *)(lVar3 + 0x8dc) - fVar11) * fVar13 + fVar11;
    fVar8 = (*(float *)(lVar3 + 0x8d4) - fVar8) * fVar13 + fVar8;
    fVar10 = (*(float *)(lVar3 + 0x8d8) - fVar10) * fVar13 + fVar10;
    fVar13 = 3.4028235e+38;
  }
  else if (iVar6 == 2) {
    lVar5 = *(int64_t *)(lVar5 + 0x6d8);
    fVar8 = *(float *)(lVar5 + 0x8c4);
    fVar10 = *(float *)(lVar5 + 0x8c8);
    fVar11 = *(float *)(lVar5 + 0x8cc);
    fVar13 = *(float *)(lVar5 + 0x8d0);
  }
  else if (iVar6 == 3) {
    lVar5 = *(int64_t *)(lVar5 + 0x6d8);
    fVar13 = *(float *)((int64_t)param_1 + 0x202c);
    fVar8 = (*(float *)(lVar5 + 0x8d4) - *(float *)(lVar5 + 0x8c4)) * fVar13 +
            *(float *)(lVar5 + 0x8c4);
    fVar10 = (*(float *)(lVar5 + 0x8d8) - *(float *)(lVar5 + 0x8c8)) * fVar13 +
             *(float *)(lVar5 + 0x8c8);
    fVar11 = (*(float *)(lVar5 + 0x8dc) - *(float *)(lVar5 + 0x8cc)) * fVar13 +
             *(float *)(lVar5 + 0x8cc);
    fVar13 = 3.4028235e+38;
  }
  else {
    lVar3 = func_0x000180524cb0(lVar5);
    if (iVar6 == 4) {
      if ((*(byte *)(lVar3 + 0x56c) & 1) == 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x6d8);
        fVar8 = *(float *)(lVar5 + 0x8c4);
        fVar10 = *(float *)(lVar5 + 0x8c8);
        fVar11 = *(float *)(lVar5 + 0x8cc);
        fVar13 = *(float *)(lVar5 + 0x8d0);
      }
      else {
        puVar4 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar3 + 0x590) + 0x2581) * 0x100 +
                         *(int64_t *)(*(int64_t *)(lVar5 + 0x658) + 0x18));
        do {
          LOCK();
          uVar1 = *puVar4;
          *puVar4 = *puVar4 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        uStack_68 = *(uint64_t *)(puVar4 + 1);
        uStack_60 = *(uint64_t *)(puVar4 + 3);
        fStack_58 = (float)puVar4[5];
        fStack_54 = (float)puVar4[6];
        fStack_50 = (float)puVar4[7];
        uStack_4c = puVar4[8];
        *puVar4 = 0;
        lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x6d8) + 0x8a8);
        lVar5 = *(int64_t *)(lVar5 + 0x6d8);
        fVar11 = *(float *)(lVar5 + 0x8ec);
        fVar12 = fVar11 - (fStack_50 * *(float *)(lVar3 + 0x98) + *(float *)(lVar3 + 0xa8));
        fVar13 = *(float *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8ec);
        if (ABS(fVar12) <= 0.001) {
          fVar7 = 1.0;
        }
        else {
          fVar8 = (fVar13 - fVar11) / fVar12;
          fVar7 = 0.0;
          if ((0.0 <= fVar8) && (fVar7 = fVar8, 1.0 <= fVar8)) {
            fVar7 = 1.0;
          }
        }
        fVar8 = (*(float *)(lVar5 + 0x8e4) -
                (fStack_54 * *(float *)(lVar3 + 0x80) + fStack_58 * *(float *)(lVar3 + 0x70) +
                *(float *)(lVar3 + 0xa0))) * fVar7 + *(float *)(lVar5 + 0x8e4);
        fVar10 = (*(float *)(lVar5 + 0x8e8) -
                 (fStack_58 * *(float *)(lVar3 + 0x74) + fStack_54 * *(float *)(lVar3 + 0x84) +
                 *(float *)(lVar3 + 0xa4))) * fVar7 + *(float *)(lVar5 + 0x8e8);
        fVar11 = fVar7 * fVar12 + fVar11;
      }
    }
    else if (iVar6 == 5) {
      lVar5 = *(int64_t *)(lVar3 + 0x6d8);
      fVar8 = *(float *)(lVar5 + 0x8d4);
      fVar10 = *(float *)(lVar5 + 0x8d8);
      fVar11 = *(float *)(lVar5 + 0x8dc);
      fVar13 = *(float *)(lVar5 + 0x8e0);
    }
    else {
      lVar5 = *(int64_t *)(lVar3 + 0x20);
      fVar8 = *(float *)(lVar5 + 0x1c0) - *(float *)(lVar5 + 0x1b0);
      fVar11 = *(float *)(lVar5 + 0x1c4) - *(float *)(lVar5 + 0x1b4);
      fVar12 = *(float *)(lVar5 + 0x1c8) - *(float *)(lVar5 + 0x1b8);
      lVar3 = *(int64_t *)(*param_1 + 0x6d8);
      fVar10 = fVar11 * fVar11 + fVar8 * fVar8 + fVar12 * fVar12;
      auVar9 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar13 = auVar9._0_4_;
      fVar7 = fVar13 * 0.5 * (3.0 - fVar10 * fVar13 * fVar13);
      fVar13 = (*(float *)(lVar3 + 0x8c8) - *(float *)(lVar5 + 0x1b4)) * fVar11 * fVar7 +
               (*(float *)(lVar3 + 0x8c4) - *(float *)(lVar5 + 0x1b0)) * fVar8 * fVar7 +
               (*(float *)(lVar3 + 0x8cc) - *(float *)(lVar5 + 0x1b8)) * fVar12 * fVar7;
      if (0.0 <= fVar13) {
        if (fVar13 <= fVar7 * fVar10) {
          fVar8 = fVar8 * fVar7 * fVar13 + *(float *)(lVar5 + 0x1b0);
          fVar10 = fVar11 * fVar7 * fVar13 + *(float *)(lVar5 + 0x1b4);
          fVar11 = fVar12 * fVar7 * fVar13 + *(float *)(lVar5 + 0x1b8);
          fVar13 = 3.4028235e+38;
        }
        else {
          fVar8 = *(float *)(lVar5 + 0x1c0);
          fVar10 = *(float *)(lVar5 + 0x1c4);
          fVar11 = *(float *)(lVar5 + 0x1c8);
          fVar13 = *(float *)(lVar5 + 0x1cc);
        }
      }
      else {
        fVar8 = *(float *)(lVar5 + 0x1b0);
        fVar10 = *(float *)(lVar5 + 0x1b4);
        fVar11 = *(float *)(lVar5 + 0x1b8);
        fVar13 = *(float *)(lVar5 + 0x1bc);
      }
    }
  }
  *(float *)(param_1 + 0x406) = fVar8;
  *(float *)((int64_t)param_1 + 0x2034) = fVar10;
  *(float *)(param_1 + 0x407) = fVar11;
  *(float *)((int64_t)param_1 + 0x203c) = fVar13;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_b8);
}






