/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 99_part_09_part065.c - 10 个函数

// 函数: void FUN_1805e3710(int64_t param_1,uint param_2)
void FUN_1805e3710(int64_t param_1,uint param_2)

{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int64_t lVar18;
  int iVar19;
  uint64_t uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint64_t extraout_XMM0_Qa;
  int8_t auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int32_t uVar30;
  float fVar31;
  uint64_t uStackX_8;
  uint uStackX_10;
  int32_t auStackX_18 [2];
  float afStackX_20 [2];
  float fStack_168;
  float fStack_164;
  int64_t *plStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_148;
  int iStack_144;
  uint64_t uStack_140;
  float fStack_138;
  float fStack_130;
  float fStack_12c;
  int32_t uStack_128;
  int64_t lStack_120;
  float fStack_118;
  int iStack_114;
  float fStack_110;
  float fStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lVar16 = 0;
  uStack_128 = 0;
  uStackX_10 = param_2;
  FUN_1805e0e00();
  lVar12 = **(int64_t **)(param_1 + 0x20);
  lVar2 = *(int64_t *)(lVar12 + 0x8d8);
  uVar30 = *(int32_t *)(*(int64_t *)(lVar12 + 0x20) + 0x34);
  *(int8_t *)(param_1 + 0xf4) = 0;
  auStackX_18[0] = uVar30;
  lStack_f8 = lVar12;
  cVar5 = FUN_1805dbe60(param_1);
  if (cVar5 == '\0') {
LAB_1805e37fa:
    iVar10 = *(int *)(*(int64_t *)(param_1 + 0x20) + 0x1348);
    if (iVar10 == 0x20) {
      atan2f();
                    // WARNING: Subroutine does not return
      AdvancedSystemController();
    }
    if (iVar10 == 0x10) {
      lStack_120 = 0;
      iVar10 = *(int *)(param_1 + 0x1140);
      bVar6 = func_0x000180522f60(lVar12);
      iVar19 = (uint)bVar6 + iVar10;
      uVar20 = (uint64_t)*(byte *)(param_1 + 0x113c);
      do {
        cVar5 = (char)uVar20;
        if (cVar5 == '\0') {
          iVar14 = (int)(*(int64_t *)(param_1 + 0x1120) - *(int64_t *)(param_1 + 0x1118) >> 5);
        }
        else {
          iVar14 = *(int *)(param_1 + 0x1138);
        }
        if ((iVar14 <= iVar19) || (iVar10 + 3 <= iVar19)) goto LAB_1805e39c3;
        lVar11 = param_1 + 0x118;
        lVar18 = (int64_t)iVar19 * 0x20;
        lVar3 = lVar11;
        if (cVar5 == '\0') {
          lVar3 = *(int64_t *)(param_1 + 0x1118);
        }
        if (*(int64_t *)(lVar18 + lVar3 + 0x10) != 0) {
          lVar3 = lVar11;
          if (cVar5 == '\0') {
            lVar3 = *(int64_t *)(param_1 + 0x1118);
          }
          cVar5 = func_0x00018038b3c0(*(uint64_t *)(lVar18 + lVar3 + 0x10));
          if (cVar5 != '\0') goto LAB_1805e3980;
        }
        iVar19 = iVar19 + 1;
      } while( true );
    }
    if ((((*(float *)(param_1 + 0xe8) != 0.0) || (*(float *)(param_1 + 0xec) != 0.0)) ||
        (fVar23 = (float)FUN_180507b40(param_1 + 0x28), 1.5 < fVar23)) ||
       (fVar23 = (float)func_0x000180507ac0(param_1 + 0x28),
       *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) * 1.44 < fVar23)) {
      lVar12 = param_1 + 0x28;
      fVar23 = (float)func_0x000180507a40();
      if (*(float *)(lVar12 + 0x68) <= fVar23 && fVar23 != *(float *)(lVar12 + 0x68)) {
        uVar8 = FUN_180507cf0(param_1,auStackX_18);
        puVar9 = (uint64_t *)FUN_1805e46f0(extraout_XMM0_Qa,afStackX_20,uVar8);
      }
      else {
        uStackX_8 = 0;
        puVar9 = &uStackX_8;
      }
      *(uint64_t *)(param_1 + 0xe8) = *puVar9;
      *(int8_t *)(param_1 + 0xf4) = 1;
    }
  }
  else {
    puVar9 = *(uint64_t **)(param_1 + 0x20);
    cVar5 = func_0x000180522f60(*puVar9);
    if ((cVar5 != '\0') && (*(char *)((int64_t)puVar9 + 0x218a) == '\0')) goto LAB_1805e37fa;
    *(uint64_t *)(param_1 + 0xe8) = 0;
  }
LAB_1805e3d5e:
  uVar15 = 0;
  *(int32_t *)(param_1 + 0x11a8) = 0;
  fVar23 = *(float *)(param_1 + 0xe8);
  if (fVar23 <= 0.2) {
    if (fVar23 < -0.2) {
      *(int32_t *)(param_1 + 0x11a8) = 0x10;
      uVar15 = 0x10;
    }
  }
  else {
    uVar15 = 0x20;
    *(int32_t *)(param_1 + 0x11a8) = 0x20;
  }
  if (*(float *)(param_1 + 0xec) <= 0.2) {
    if (-0.2 <= *(float *)(param_1 + 0xec)) goto LAB_1805e467d;
    uVar15 = uVar15 | 2;
  }
  else {
    uVar15 = uVar15 | 1;
  }
  *(uint *)(param_1 + 0x11a8) = uVar15;
LAB_1805e467d:
  *(uint64_t *)(param_1 + 0xe0) = *(uint64_t *)(param_1 + 0xe8);
  *(int32_t *)(param_1 + 0xf0) = uVar30;
  return;
LAB_1805e3980:
  if ((char)uVar20 == '\0') {
    lVar11 = *(int64_t *)(lVar11 + 0x1000);
  }
  lVar16 = *(int64_t *)(lVar11 + 0x10 + lVar18);
  lStack_120 = lVar16;
  if (lVar16 == 0) {
LAB_1805e39c3:
    lVar11 = *(int64_t *)(lVar12 + 0x20);
  }
  else {
    lVar11 = *(int64_t *)(lVar12 + 0x20);
    if (1.0000005 < ABS(*(float *)(lVar16 + 0xf0) - *(float *)(lVar11 + 0x14))) {
      uStackX_10 = CONCAT31(uStackX_10._1_3_,1);
      goto LAB_1805e39cf;
    }
  }
  uStackX_10 = uStackX_10 & 0xffffff00;
LAB_1805e39cf:
  fVar23 = *(float *)(lVar11 + 0x1d0);
  fStack_118 = *(float *)(*(int64_t *)(lVar12 + 0x6d8) + 0x8ec);
  afStackX_20[0] = *(float *)(*(int64_t *)(lVar12 + 0x6d8) + 0x8fc);
  fStack_130 = 0.0;
  fVar31 = 0.0;
  pfVar1 = (float *)(param_1 + 0x1148);
  pfVar7 = (float *)(lVar16 + 0xe8);
  if (lVar16 == 0) {
    pfVar7 = pfVar1;
  }
  uVar8 = *(uint64_t *)pfVar7;
  if (lVar16 != 0) {
    fVar28 = *(float *)(lVar16 + 0xec) - *(float *)(param_1 + 0x114c);
    fStack_130 = *(float *)(lVar16 + 0xe8) - *pfVar1;
    fVar25 = fStack_130 * fStack_130 + fVar28 * fVar28;
    auVar24 = rsqrtss(ZEXT416((uint)(fVar28 * fVar28)),ZEXT416((uint)fVar25));
    fVar31 = auVar24._0_4_;
    fVar31 = fVar31 * 0.5 * (3.0 - fVar25 * fVar31 * fVar31);
    fStack_130 = fVar31 * fStack_130;
    fVar31 = fVar31 * fVar28;
  }
  fVar25 = fStack_130;
  if ((float)(*(float *)(lVar11 + 0x50) * *(float *)(lVar11 + 0x50) * 0.010000001 <
             *(float *)(lVar11 + 0x24) * *(float *)(lVar11 + 0x24) +
             *(float *)(lVar11 + 0x28) * *(float *)(lVar11 + 0x28) +
             *(float *)(lVar11 + 0x2c) * *(float *)(lVar11 + 0x2c)) == 0.0) {
    fVar28 = -0.5;
  }
  else {
    fVar28 = -0.25;
  }
  fStack_110 = *(float *)(param_1 + 0x114c) - *(float *)(lVar11 + 0x10);
  fStack_12c = *pfVar1 - *(float *)(lVar11 + 0xc);
  fVar29 = fStack_12c * fStack_12c + fStack_110 * fStack_110;
  fVar21 = (float)(fVar29 <= 1.1754944e-38) * 1.1754944e-38;
  fVar29 = fVar29 + fVar21;
  auVar24 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar29));
  fVar21 = auVar24._0_4_;
  fVar21 = fVar21 * 0.5 * (3.0 - fVar29 * fVar21 * fVar21);
  fStack_12c = fVar21 * fStack_12c;
  fStack_110 = fVar21 * fStack_110;
  fVar21 = fVar21 * fVar29;
  uStack_140 = 0;
  plStack_160 = (int64_t *)0x0;
  fStack_10c = fVar23 * 2.5;
  FUN_1804ff330(lVar2 + 0x98d230,param_1 + 0x2c,fStack_10c,&plStack_160);
  if (plStack_160 == (int64_t *)0x0) {
LAB_1805e404b:
    uVar8 = FUN_180507e30(param_1,&uStackX_8);
    puVar9 = (uint64_t *)FUN_1805e46f0(param_1,afStackX_20,uVar8);
    *(uint64_t *)(param_1 + 0xe8) = *puVar9;
    *(int8_t *)(param_1 + 0xf4) = 1;
                    // WARNING: Subroutine does not return
    AdvancedSystemController();
  }
  iStack_114 = *(int *)(lVar12 + 0x10);
  fStack_168 = (float)uVar8;
  fVar4 = uStack_140._4_4_;
  fVar29 = (float)uStack_140;
  plVar17 = plStack_160;
  fVar27 = fStack_168;
  iVar10 = iStack_144;
  iVar19 = iStack_154;
  iVar14 = iStack_158;
  iVar13 = iStack_148;
LAB_1805e3c0c:
  fStack_164 = (float)((uint64_t)uVar8 >> 0x20);
  lVar12 = *plVar17;
  if (((*(int *)(lVar12 + 0x10) == iStack_114) || ((*(uint *)(lVar12 + 0x56c) & 0x800) == 0)) ||
     (-1 < *(int *)(lVar12 + 0x564))) goto LAB_1805e3f38;
  lVar16 = *(int64_t *)(lVar12 + 0x6d8);
  uStack_108 = *(uint64_t *)(lVar16 + 0x8f4);
  uStack_100 = *(uint64_t *)(lVar16 + 0x8fc);
  cVar5 = func_0x000180522f60(lVar12);
  iVar10 = iStack_144;
  iVar13 = iStack_148;
  if (cVar5 == '\0') {
    if (((fVar23 * 3.5 <= fVar21) || (0.6 <= ABS(afStackX_20[0] - (float)uStack_100))) ||
       (cVar5 = func_0x000180508270(lVar12,lStack_f8), iVar10 = iStack_144, iVar13 = iStack_148,
       cVar5 != '\0')) goto LAB_1805e3f38;
    fStack_164 = fStack_164 - uStack_108._4_4_;
    fVar22 = fVar27 - (float)uStack_108;
    fVar26 = fVar22 * fVar22 + fStack_164 * fStack_164;
    fVar25 = (float)(fVar26 <= 1.1754944e-38) * 1.1754944e-38;
    fVar26 = fVar26 + fVar25;
    auVar24 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar26));
    fVar25 = auVar24._0_4_;
    fVar25 = fVar25 * 0.5 * (3.0 - fVar26 * fVar25 * fVar25);
    fVar27 = fStack_168;
    if (((fVar21 <= fVar25 * fVar26) ||
        (fVar25 * fStack_164 * *(float *)(lVar12 + 0x4a0) +
         fVar25 * fVar22 * *(float *)(lVar12 + 0x49c) < 0.0)) ||
       (fVar25 * fStack_164 * *(float *)(*(int64_t *)(lVar12 + 0x20) + 0x28) +
        fVar25 * fVar22 * *(float *)(*(int64_t *)(lVar12 + 0x20) + 0x24) <= 0.0))
    goto LAB_1805e3f38;
  }
  else {
    fStack_164 = uStack_108._4_4_ - fStack_164;
    fVar27 = (float)uStack_108 - fVar27;
    fVar26 = fVar27 * fVar27 + fStack_164 * fStack_164;
    fVar22 = (float)(fVar26 <= 1.1754944e-38) * 1.1754944e-38;
    fVar26 = fVar26 + fVar22;
    auVar24 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar26));
    fVar22 = auVar24._0_4_;
    fVar26 = fVar22 * 0.5 * (3.0 - fVar26 * fVar22 * fVar22);
    fVar22 = fVar26 * fVar27;
    fVar26 = fVar26 * fStack_164;
    if ((char)uStackX_10 == '\0') {
      fVar27 = fStack_168;
      if ((lStack_120 == 0) || (fVar25 * fVar22 + fVar26 * fVar31 <= 0.9396926)) goto LAB_1805e3f38;
      pfVar1 = (float *)(*(int64_t *)(lVar12 + 0x20) + 0x214);
      if (0.0 < *pfVar1 || *pfVar1 == 0.0) goto LAB_1805e3d28;
      if (fVar28 * fVar23 <= *(float *)(lVar16 + 0x8ec) - afStackX_20[0]) goto LAB_1805e3f38;
    }
    else {
      fVar27 = fStack_168;
      if ((lStack_120 == 0) || (-0.9396926 <= fVar31 * fVar26 + fVar25 * fVar22))
      goto LAB_1805e3f38;
      pfVar1 = (float *)(*(int64_t *)(lVar12 + 0x20) + 0x214);
      if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
        if (fStack_118 - (float)uStack_100 <= fVar28 * fVar23) goto LAB_1805e3f38;
      }
      else {
LAB_1805e3d28:
        fVar27 = fStack_168;
        if (fVar23 + fVar23 <= fVar21) {
LAB_1805e3f38:
          plVar17 = (int64_t *)plVar17[3];
          while (plVar17 == (int64_t *)0x0) {
            if (iVar14 == iVar13) {
              if (iVar19 == iVar10) break;
              iVar19 = iVar19 + 1;
              iVar14 = iStack_150;
              iStack_154 = iVar19;
            }
            else {
              iVar14 = iVar14 + 1;
            }
            iVar10 = iStack_144;
            iStack_158 = iVar14;
            plVar17 = *(int64_t **)
                       ((int64_t)(iStack_154 * *(int *)(lVar2 + 0x98d238) + iVar14) * 9 +
                       *(int64_t *)(lVar2 + 0x98d248));
          }
          do {
            if ((plVar17 == (int64_t *)0x0) ||
               (fVar25 = fVar4 - *(float *)((int64_t)plVar17 + 0xc),
               (fVar29 - *(float *)(plVar17 + 1)) * (fVar29 - *(float *)(plVar17 + 1)) +
               fVar25 * fVar25 <= fStack_138)) goto LAB_1805e4027;
            plVar17 = (int64_t *)plVar17[3];
            while (plVar17 == (int64_t *)0x0) {
              if (iVar14 == iVar13) {
                if (iVar19 == iVar10) break;
                iVar19 = iVar19 + 1;
                iVar14 = iStack_150;
                iStack_154 = iVar19;
              }
              else {
                iVar14 = iVar14 + 1;
              }
              iVar10 = iStack_144;
              iStack_158 = iVar14;
              plVar17 = *(int64_t **)
                         ((int64_t)(iStack_154 * *(int *)(lVar2 + 0x98d238) + iVar14) * 9 +
                         *(int64_t *)(lVar2 + 0x98d248));
            }
          } while( true );
        }
      }
    }
  }
  *(uint64_t *)(param_1 + 0xe8) = 0;
  uVar30 = auStackX_18[0];
  goto LAB_1805e3d5e;
LAB_1805e4027:
  fVar25 = fStack_130;
  if (plVar17 == (int64_t *)0x0) goto LAB_1805e404b;
  goto LAB_1805e3c0c;
}



uint64_t * FUN_1805e46f0(int64_t param_1,uint64_t *param_2,float *param_3)

{
  float fVar1;
  int64_t lVar2;
  uint uVar3;
  float fVar4;
  
  lVar2 = **(int64_t **)(param_1 + 0x20);
  fVar4 = *param_3;
  *param_2 = 0;
  fVar1 = *(float *)(lVar2 + 0x4ac);
  if (((fVar4 != 0.0) || (param_3[1] != 0.0)) &&
     ((fVar4 = (float)func_0x000180507ac0(param_1 + 0x28),
      *(float *)(param_1 + 0x94) <= fVar4 && fVar4 != *(float *)(param_1 + 0x94) ||
      (fVar4 = (float)FUN_180507b40(param_1 + 0x28), 1.5 <= fVar4)))) {
    uVar3 = *(uint *)(param_1 + 0x28);
    if ((uVar3 & 8) == 0) {
      if ((uVar3 >> 8 & 1) == 0) {
        if ((uVar3 & 2) == 0) {
          uVar3 = uVar3 | 2;
          *(uint *)(param_1 + 0x28) = uVar3;
          *(uint64_t *)(param_1 + 0xa8) =
               CONCAT44(*(float *)(param_1 + 100) - *(float *)(param_1 + 0x30),
                        *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x2c));
        }
        uVar3 = uVar3 | 0x100;
        fVar4 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8) +
                *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xac);
        *(float *)(param_1 + 0xb0) = fVar4;
      }
      else {
        fVar4 = *(float *)(param_1 + 0xb0);
      }
      *(uint *)(param_1 + 0xb4) = (int)fVar4 + 0x3f800000U >> 1;
      *(uint *)(param_1 + 0x28) = uVar3 | 8;
    }
    *param_2 = *(uint64_t *)param_3;
                    // WARNING: Subroutine does not return
    AdvancedSystemController(6.2831855 - fVar1);
  }
  *param_2 = 0;
  return param_2;
}






// 函数: void FUN_1805e4775(uint param_1)
void FUN_1805e4775(uint param_1)

{
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  float fVar1;
  
  if ((param_1 & 8) == 0) {
    if ((param_1 >> 8 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        param_1 = param_1 | 2;
        *(uint *)(unaff_RBP + 0x28) = param_1;
        *(uint64_t *)(unaff_RBP + 0xa8) =
             CONCAT44(*(float *)(unaff_RBP + 100) - *(float *)(unaff_RBP + 0x30),
                      *(float *)(unaff_RBP + 0x60) - *(float *)(unaff_RBP + 0x2c));
      }
      param_1 = param_1 | 0x100;
      fVar1 = *(float *)(unaff_RBP + 0xa8) * *(float *)(unaff_RBP + 0xa8) +
              *(float *)(unaff_RBP + 0xac) * *(float *)(unaff_RBP + 0xac);
      *(float *)(unaff_RBP + 0xb0) = fVar1;
    }
    else {
      fVar1 = *(float *)(unaff_RBP + 0xb0);
    }
    *(uint *)(unaff_RBP + 0xb4) = (int)fVar1 + 0x3f800000U >> 1;
    *(uint *)(unaff_RBP + 0x28) = param_1 | 8;
  }
  *unaff_RDI = *unaff_RSI;
                    // WARNING: Subroutine does not return
  AdvancedSystemController();
}






// 函数: void FUN_1805e48a0(void)
void FUN_1805e48a0(void)

{
  return;
}






// 函数: void FUN_1805e48c0(int32_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1805e48c0(int32_t *param_1,int64_t param_2,int64_t param_3)

{
  bool bVar1;
  char cVar2;
  int64_t *plVar3;
  byte bVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  if ((((*(char *)(param_1 + 0x451) != '\0') && (param_3 != 0)) && (param_2 != 0)) &&
     (param_3 != param_2)) {
    bVar1 = false;
    bVar4 = *(byte *)(param_2 + 0x139) & 4;
    if (((bVar4 == 0) || ((*(byte *)(param_3 + 0x139) & 4) != 0)) &&
       ((bVar4 != 0 || ((*(byte *)(param_3 + 0x139) & 4) == 0)))) {
      if (*(byte *)(param_2 + 0xa8) != 0) {
        lVar6 = 0;
        do {
          if (bVar1) {
            return;
          }
          if (*(byte *)(param_3 + 0xa8) != 0) {
            plVar3 = (int64_t *)(param_3 + 0x80);
            lVar5 = 0;
            do {
              if (*(int64_t *)(param_2 + 0x80 + lVar6 * 8) == *plVar3) {
                bVar1 = true;
                break;
              }
              lVar5 = lVar5 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar5 < (int64_t)(uint64_t)*(byte *)(param_3 + 0xa8));
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int64_t)(uint64_t)*(byte *)(param_2 + 0xa8));
        if (bVar1) {
          return;
        }
      }
    }
    else {
      lVar5 = param_3;
      lVar6 = param_2;
      if (bVar4 != 0) {
        lVar5 = param_2;
        lVar6 = param_3;
      }
      for (plVar3 = *(int64_t **)(lVar6 + 0xf8); plVar3 != *(int64_t **)(lVar6 + 0x100);
          plVar3 = plVar3 + 1) {
        if (*plVar3 == lVar5) {
          return;
        }
      }
    }
    fStack_18 = *(float *)(param_3 + 0xe8) - *(float *)(param_2 + 0xe8);
    fStack_14 = *(float *)(param_3 + 0xec) - *(float *)(param_2 + 0xec);
    fStack_10 = *(float *)(param_3 + 0xf0) - *(float *)(param_2 + 0xf0);
    cVar2 = FUN_1803944c0(*(int64_t *)(*(int64_t *)(**(int64_t **)(param_1 + 8) + 0x8d8) + 0x18)
                          + 0x2a68,param_2,param_3,(float *)(param_2 + 0xe8),&fStack_18,0,
                          *(int32_t *)
                           (*(int64_t *)(**(int64_t **)(param_1 + 8) + 0x20) + 0x1d0),0,0,0,0);
    if ((cVar2 == '\0') && (*param_1 = 7, *(char *)(param_1 + 0x451) != '\0')) {
      *(int16_t *)(param_1 + 0x451) = 0;
      param_1[0x45e] = 0;
    }
  }
  return;
}






// 函数: void FUN_1805e4907(byte param_1,int64_t param_2,int64_t param_3)
void FUN_1805e4907(byte param_1,int64_t param_2,int64_t param_3)

{
  char cVar1;
  int64_t in_RAX;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int32_t *unaff_RDI;
  int64_t lVar4;
  char in_R10B;
  int64_t in_R11;
  int8_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  int8_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  param_1 = param_1 & 4;
  if (((param_1 == 0) || ((*(byte *)(param_3 + 0x139) & 4) != 0)) &&
     ((param_1 != 0 || ((*(byte *)(param_3 + 0x139) & 4) == 0)))) {
    if (*(byte *)(param_2 + 0xa8) != 0) {
      lVar4 = 0;
      do {
        if (in_R10B != '\0') {
          return;
        }
        if (*(byte *)(in_R11 + 0xa8) != 0) {
          plVar2 = (int64_t *)(in_R11 + 0x80);
          lVar3 = 0;
          do {
            if (*(int64_t *)(unaff_RBX + 0x80 + lVar4 * 8) == *plVar2) {
              in_R10B = '\x01';
              break;
            }
            lVar3 = lVar3 + 1;
            plVar2 = plVar2 + 1;
          } while (lVar3 < (int64_t)(uint64_t)*(byte *)(in_R11 + 0xa8));
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int64_t)(uint64_t)*(byte *)(param_2 + 0xa8));
      if (in_R10B != '\0') {
        return;
      }
    }
  }
  else {
    lVar3 = in_R11;
    lVar4 = unaff_RBX;
    if (param_1 != 0) {
      lVar3 = unaff_RBX;
      lVar4 = in_R11;
    }
    for (plVar2 = *(int64_t **)(lVar4 + 0xf8); plVar2 != *(int64_t **)(lVar4 + 0x100);
        plVar2 = plVar2 + 1) {
      if (*plVar2 == lVar3) {
        return;
      }
    }
  }
  fStack0000000000000060 = *(float *)(in_R11 + 0xe8) - *(float *)(unaff_RBX + 0xe8);
  fStack0000000000000064 = *(float *)(in_R11 + 0xec) - *(float *)(unaff_RBX + 0xec);
  uStack0000000000000050 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 =
       *(int32_t *)(*(int64_t *)(**(int64_t **)(unaff_RDI + 8) + 0x20) + 0x1d0);
  fStack0000000000000068 = *(float *)(in_R11 + 0xf0) - *(float *)(unaff_RBX + 0xf0);
  uStack0000000000000028 = 0;
  cVar1 = FUN_1803944c0(*(int64_t *)(*(int64_t *)(**(int64_t **)(unaff_RDI + 8) + 0x8d8) + 0x18)
                        + 0x2a68,fStack0000000000000064,uStack0000000000000030,
                        (float *)(unaff_RBX + 0xe8),&stack0x00000060);
  if ((cVar1 == '\0') && (*unaff_RDI = 7, *(char *)(unaff_RDI + 0x451) != '\0')) {
    *(int16_t *)(unaff_RDI + 0x451) = 0;
    unaff_RDI[0x45e] = 0;
  }
  return;
}






// 函数: void FUN_1805e4a96(void)
void FUN_1805e4a96(void)

{
  return;
}






// 函数: void FUN_1805e4ab0(int32_t *param_1,uint64_t param_2)
void FUN_1805e4ab0(int32_t *param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  char cVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int32_t uVar14;
  
  param_1[0x450] = 0;
  param_1[0x45e] = 0;
  if (*(char *)(param_1 + 0x44f) == '\0') {
    *(uint64_t *)(param_1 + 0x448) = *(uint64_t *)(param_1 + 0x446);
    *(int8_t *)(param_1 + 0x44f) = 1;
  }
  param_1[0x44e] = 0;
  *(int8_t *)(param_1 + 0x451) = 0;
  *(int8_t *)((int64_t)param_1 + 0x1147) = 0;
  puVar10 = (uint64_t *)FUN_1803975b0();
  *(uint64_t *)(param_1 + 0x452) = *puVar10;
  *(uint64_t *)(param_1 + 0x45c) = 0;
  param_1[0x45e] = 0;
  *(uint64_t *)(param_1 + 5) = 0;
  param_1[7] = 0x3f800000;
  *(uint64_t *)(param_1 + 0x46b) = 0;
  *param_1 = 0;
  *(int8_t *)((int64_t)param_1 + 0x1145) = 1;
  param_1[0x459] = 0xffffffff;
  param_1[0x468] = 0x3f800000;
  *(uint64_t *)(param_1 + 0x469) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x36) = 0xffffffffffffffff;
  lVar13 = *(int64_t *)(**(int64_t **)(param_1 + 8) + 0x9d8);
  lVar12 = *(int64_t *)(**(int64_t **)(param_1 + 8) + 0x20);
  if (lVar13 != 0) {
    cVar9 = FUN_18038d0a0(lVar13,lVar12 + 0xc);
    lVar11 = lVar13;
    if (cVar9 != '\0') goto LAB_1805e4ba2;
  }
  lVar11 = 0;
LAB_1805e4ba2:
  uVar14 = *(int32_t *)(lVar12 + 0xc);
  uVar1 = *(int32_t *)(lVar12 + 0x10);
  uVar8 = *(uint64_t *)(lVar12 + 0xc);
  uVar2 = *(int32_t *)(lVar12 + 0x14);
  uVar3 = *(int32_t *)(lVar12 + 0x18);
  uVar4 = *(int32_t *)(lVar12 + 0xb0);
  uVar5 = *(int32_t *)(lVar12 + 0xb4);
  uVar6 = *(int32_t *)(lVar12 + 0xb8);
  uVar7 = *(int32_t *)(lVar12 + 0xbc);
  *(int64_t *)(param_1 + 0x14) = lVar11;
  param_1[0x18] = uVar14;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  *(int64_t *)(param_1 + 0x16) = lVar13;
  param_1[0x1c] = uVar4;
  param_1[0x1d] = uVar5;
  param_1[0x1e] = uVar6;
  param_1[0x1f] = uVar7;
  *(uint64_t *)(param_1 + 0x20) = uVar8;
  param_1[0x22] = 3;
  *(uint64_t *)(param_1 + 0x12) = param_2;
  FUN_180487c70(param_1 + 0x12,3);
  if ((int)param_1[0x22] < 3) {
    uVar14 = 0xffc00000;
  }
  else {
    uVar14 = param_1[0x1a];
  }
  *(uint64_t *)(param_1 + 0x24) = 0;
  param_1[10] = 0;
  param_1[0x26] = 0;
  param_1[0xb] = param_1[0x18];
  param_1[0xc] = param_1[0x19];
  param_1[0xd] = uVar14;
  param_1[0xe] = 0x7f7fffff;
  *(uint64_t *)(param_1 + 0xf) = *(uint64_t *)(param_1 + 0xb);
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  *(int8_t *)(param_1 + 0x3d) = 0;
  puVar10 = (uint64_t *)FUN_1803975b0();
  *(uint64_t *)(param_1 + 0x45a) = *puVar10;
  *(int8_t *)(param_1 + 0x45f) = 0;
  *(uint64_t *)(param_1 + 0x3e) =
       *(uint64_t *)(&system_error_code + (int64_t)(int)param_1[0x40] * 8);
  *(uint64_t *)(param_1 + 0x42) =
       *(uint64_t *)(&system_error_code + (int64_t)(int)param_1[0x44] * 8);
  *(uint64_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 4) = 0;
  *(int16_t *)((int64_t)param_1 + 0x1145) = 0;
  *(uint64_t *)(param_1 + 0x454) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x456) = 0xffffffffffffffff;
  return;
}






// 函数: void FUN_1805e4d10(void)
void FUN_1805e4d10(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}






// 函数: void FUN_1805e5240(int64_t param_1,uint64_t *param_2)
void FUN_1805e5240(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int8_t auStack_1a8 [40];
  int32_t uStack_180;
  int64_t lStack_170;
  
  *param_2 = 0xffffffffffffffff;
  *(int8_t *)(param_1 + 0x1146) = 0;
  lVar1 = **(int64_t **)(param_1 + 0x20);
  FUN_180507e30(param_1,auStack_1a8);
  lStack_170 = param_1 + 0x2c;
  uStack_180 = FUN_1805d8ed0(param_1);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar1 + 0x20) + 0x34));
}






// 函数: void FUN_1805e5274(int64_t param_1,uint64_t *param_2)
void FUN_1805e5274(int64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uVar3;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  uint64_t unaff_XMM10_Qa;
  uint64_t unaff_XMM10_Qb;
  uint64_t unaff_XMM13_Qa;
  uint64_t unaff_XMM13_Qb;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int64_t lStack0000000000000060;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R15;
  *(uint64_t *)(in_RAX + -0x58) = unaff_XMM6_Qa;
  *(uint64_t *)(in_RAX + -0x50) = unaff_XMM6_Qb;
  *param_2 = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x68) = unaff_XMM7_Qa;
  *(uint64_t *)(in_RAX + -0x60) = unaff_XMM7_Qb;
  *(uint64_t *)(in_RAX + -0x98) = unaff_XMM10_Qa;
  *(uint64_t *)(in_RAX + -0x90) = unaff_XMM10_Qb;
  *(uint64_t *)(in_RAX + -200) = unaff_XMM13_Qa;
  *(uint64_t *)(in_RAX + -0xc0) = unaff_XMM13_Qb;
  *(int8_t *)(param_1 + 0x1146) = 0;
  *(int32_t *)(in_RAX + -0xd8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xd4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xd0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xcc) = unaff_XMM14_Dd;
  plVar1 = *(int64_t **)(param_1 + 0x20);
  *(uint64_t *)(unaff_RBP + -0x38) = unaff_RBX;
  lVar2 = *plVar1;
  lStack0000000000000060 = lVar2;
  FUN_180507e30(param_1,unaff_RBP + -0x20);
  *(int64_t *)(unaff_RBP + 0x18) = param_1 + 0x2c;
  uVar3 = FUN_1805d8ed0(param_1);
  lVar2 = *(int64_t *)(lVar2 + 0x20);
  *(int32_t *)(unaff_RBP + 8) = uVar3;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(lVar2 + 0x34));
}






