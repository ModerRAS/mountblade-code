#include "TaleWorlds.Native.Split.h"

// 99_part_09_part005.c - 1 个函数

// 函数: void FUN_1805c0300(longlong *param_1,longlong *param_2)
void FUN_1805c0300(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStackX_8;
  int iStackX_20;
  undefined8 uStack_198;
  float fStack_190;
  longlong *plStack_188;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined8 uStack_138;
  undefined1 auStack_130 [240];
  
  *param_2 = param_1[0x38];
  lVar7 = param_1[0x3c];
  param_2[3] = param_1[0x3b];
  param_2[4] = lVar7;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1ec);
  lVar7 = param_1[0x3e];
  uVar3 = *(undefined4 *)((longlong)param_1 + 500);
  *(int *)(param_2 + 5) = (int)param_1[0x3d];
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar2;
  *(int *)(param_2 + 6) = (int)lVar7;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
  param_2[1] = param_1[0x39];
  param_2[2] = param_1[0x3a];
  param_2[7] = param_1[0x3f];
  *(int *)(param_2 + 8) = (int)param_1[0x40];
  fVar13 = (float)func_0x0001805b7780();
  uStack_198 = 0;
  lVar7 = *(longlong *)(*param_1 + 0x20);
  iStackX_20 = 0;
  bVar4 = false;
  uStack_168 = 0;
  uStack_138 = *(undefined8 *)(lVar7 + 0xc);
  fVar15 = *(float *)(lVar7 + 0x84);
  plStack_188 = (longlong *)0x0;
  fVar14 = *(float *)(param_1[0x291] + 0x98d240) * 10.0;
  fVar16 = (*(float *)(*(longlong *)(*param_1 + 0x6d8) + 0x904) + 1.0) * fVar13 * 5.0;
  if (fVar14 <= fVar16) {
    fVar16 = fVar14;
  }
  fStack_190 = fVar13;
  FUN_1804ff330(param_1[0x291] + 0x98d230,&uStack_138,fVar16,&plStack_188);
  if (plStack_188 != (longlong *)0x0) {
    plVar6 = plStack_188;
    fVar16 = uStack_198._4_4_;
    fVar14 = (float)uStack_198;
    iVar11 = iStack_17c;
    iVar10 = iStack_180;
LAB_1805c04d0:
    lVar7 = *plVar6;
    lVar1 = *param_1;
    if ((*(int *)(lVar7 + 0x10) != *(int *)(lVar1 + 0x10)) &&
       (((*(uint *)(lVar7 + 0x56c) & 0x2000) != 0 ||
        ((*(float *)(lVar7 + 0x35c) != *(float *)(lVar1 + 0x35c) &&
         (fVar13 * 3.0 < *(float *)(*(longlong *)(lVar7 + 0x20) + 0x1d0))))))) {
      lVar7 = *(longlong *)(lVar7 + 0x20);
      fVar18 = *(float *)(*(longlong *)(lVar1 + 0x20) + 0xc) - *(float *)(lVar7 + 0xc);
      fVar21 = *(float *)(*(longlong *)(lVar1 + 0x20) + 0x10) - *(float *)(lVar7 + 0x10);
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      auVar17 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar20 = auVar17._0_4_;
      fVar20 = fVar20 * 0.5 * (3.0 - fVar19 * fVar20 * fVar20);
      if (!bVar4) {
        if (fVar13 * 3.5 <= fVar20 * fVar19) {
          if (fVar20 * fVar19 < fVar15 * 3.0) {
                    // WARNING: Subroutine does not return
            FUN_1808fd400(*(undefined4 *)(lVar7 + 0x34));
          }
        }
        else {
          bVar4 = true;
        }
      }
      fVar16 = fVar16 + fVar21 * fVar20;
      fVar14 = fVar14 + fVar20 * fVar18;
      iStackX_20 = iStackX_20 + 1;
    }
    bVar5 = false;
    lVar7 = param_1[0x291];
    plVar6 = (longlong *)plVar6[3];
    while (plVar6 == (longlong *)0x0) {
      if ((float)iVar10 == fStack_170) {
        if ((float)iVar11 == fStack_16c) break;
        iVar11 = iVar11 + 1;
        iVar10 = iStack_178;
        iStack_17c = iVar11;
      }
      else {
        iVar10 = iVar10 + 1;
      }
      iStack_180 = iVar10;
      plVar6 = *(longlong **)
                ((longlong)(iStack_17c * *(int *)(lVar7 + 0x98d238) + iVar10) * 9 +
                *(longlong *)(lVar7 + 0x98d248));
    }
    do {
      if ((plVar6 == (longlong *)0x0) ||
         (fVar20 = uStack_168._4_4_ - *(float *)((longlong)plVar6 + 0xc),
         ((float)uStack_168 - *(float *)(plVar6 + 1)) * ((float)uStack_168 - *(float *)(plVar6 + 1))
         + fVar20 * fVar20 <= fStack_160)) goto LAB_1805c07d0;
      plVar6 = (longlong *)plVar6[3];
      while (plVar6 == (longlong *)0x0) {
        if ((float)iVar10 == fStack_170) {
          if ((float)iVar11 == fStack_16c) break;
          iVar11 = iVar11 + 1;
          iVar10 = iStack_178;
          iStack_17c = iVar11;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        iStack_180 = iVar10;
        plVar6 = *(longlong **)
                  ((longlong)(iStack_17c * *(int *)(lVar7 + 0x98d238) + iVar10) * 9 +
                  *(longlong *)(lVar7 + 0x98d248));
      }
    } while( true );
  }
LAB_1805c0886:
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(*(longlong *)(*param_1 + 0x20) + 0x34));
LAB_1805c07d0:
  if (plVar6 == (longlong *)0x0) goto code_r0x0001805c07d9;
  goto LAB_1805c04d0;
code_r0x0001805c07d9:
  if (iStackX_20 < 1) goto LAB_1805c0886;
  fVar20 = fVar16 * fVar16 + fVar14 * fVar14;
  auVar17 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
  fVar18 = auVar17._0_4_;
  fVar20 = fVar18 * 0.5 * (3.0 - fVar20 * fVar18 * fVar18);
  fVar14 = fVar14 * fVar20;
  fVar16 = fVar16 * fVar20;
  uStack_198 = CONCAT44(fVar16,fVar14);
  if ((((*(uint *)(*param_1 + 0x56c) & 0x200000) != 0) && (0 < *(int *)((longlong)param_1 + 0x1b6c))
      ) && (!bVar4)) {
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 ^ uVar8 >> 0x11;
    uVar8 = uVar8 ^ uVar8 << 5;
    *(uint *)(param_1 + 0x272) = uVar8;
    fVar20 = (float)(uVar8 - 1);
    if (((fVar20 * 2.1684043e-19 + 1.8626451e-09) * fVar15 * fVar20 +
        (fVar20 * 1.8626451e-09 + 16.0) * fVar15) * fVar15 < -*(float *)((longlong)param_1 + 0x17b4)
       ) {
      bVar5 = true;
    }
  }
  if (bVar4) {
    uVar8 = *(uint *)((longlong)param_1 + 0x1484) & 0xfffffffe | 2;
LAB_1805c09a3:
    *(uint *)((longlong)param_1 + 0x1484) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0x2201) = 1;
  }
  else if (bVar5) {
    uVar8 = *(uint *)((longlong)param_1 + 0x1484) & 0xfffffffd | 1;
    goto LAB_1805c09a3;
  }
  uVar8 = *(uint *)((longlong)param_1 + 0x1484);
  lVar7 = *param_1;
  if ((uVar8 & 2) != 0) {
    lStack_150 = 0;
    plStack_188 = *(longlong **)(*(longlong *)(lVar7 + 0x8d8) + 0x18);
    fVar16 = *(float *)(param_1 + 0x3b) - *(float *)(*(longlong *)(lVar7 + 0x20) + 0xc);
    fVar13 = *(float *)((longlong)param_1 + 0x1dc) - *(float *)(*(longlong *)(lVar7 + 0x20) + 0x10);
    if (fVar16 * fVar16 + fVar13 * fVar13 < fVar15 * fVar15 * 0.5) {
      if (bVar4) {
        FUN_1805c1160(param_1,&uStack_198,uVar8,param_2);
        fVar15 = -1.0;
        goto LAB_1805c111b;
      }
      *(uint *)((longlong)param_1 + 0x1484) = uVar8 & 0xfffffffd | 1;
      *(undefined1 *)((longlong)param_1 + 0x2201) = 1;
    }
    fVar15 = -1.0;
    goto LAB_1805c111b;
  }
  if ((uVar8 & 1) == 0) {
    lVar7 = FUN_18065cec0(*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar7 + 0x590) + 0x2590) + 0xc78) + 0x60,0);
    fVar15 = *(float *)(lVar7 + 0x10) * 0.9;
    goto LAB_1805c111b;
  }
  lVar1 = *(longlong *)(lVar7 + 0x20);
  lStack_150 = 0;
  plStack_188 = *(longlong **)(*(longlong *)(lVar7 + 0x8d8) + 0x18);
  fStack_170 = *(float *)(lVar1 + 0xc);
  fStack_16c = *(float *)(lVar1 + 0x10);
  uStack_168._0_4_ = *(float *)(lVar1 + 0x14);
  uStack_168._4_4_ = *(float *)(lVar1 + 0x18);
  if (bVar5) {
    fVar20 = *(float *)((longlong)param_1 + 0x1dc) - fStack_16c;
    if ((*(float *)(param_1 + 0x3b) - fStack_170) * (*(float *)(param_1 + 0x3b) - fStack_170) +
        fVar20 * fVar20 < fVar15 * fVar15 * 0.5) {
      if (((*(uint *)(lVar7 + 0x56c) & 0x200000) == 0) || (*(int *)((longlong)param_1 + 0x1b6c) < 1)
         ) {
        if (iStackX_20 < 1) {
          plVar6 = (longlong *)FUN_180516f50(lVar7,auStack_130);
          *param_2 = *plVar6;
          lVar7 = plVar6[4];
          param_2[3] = plVar6[3];
          param_2[4] = lVar7;
          lVar7 = plVar6[6];
          param_2[5] = plVar6[5];
          param_2[6] = lVar7;
          param_2[1] = plVar6[1];
          param_2[2] = plVar6[2];
          param_2[7] = plVar6[7];
          *(int *)(param_2 + 8) = (int)plVar6[8];
          uVar9 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar9 = uVar9 ^ uVar9 >> 0x11;
          uVar9 = uVar9 ^ uVar9 << 5;
          uVar8 = uVar9 << 0xd ^ uVar9;
          uVar8 = uVar8 ^ uVar8 >> 0x11;
          uVar8 = uVar8 ^ uVar8 << 5;
          *(uint *)(param_1 + 0x272) = uVar8;
          fVar15 = ((float)(uVar8 - 1) * 1.3969839e-09 - 3.0) * fVar13 + *(float *)(param_2 + 3);
          fVar16 = ((float)(uVar9 - 1) * 2.3283064e-09 - 5.0) * fVar13 +
                   *(float *)((longlong)param_2 + 0x1c);
          uStackX_8 = CONCAT44(fVar16,fVar15);
          if ((*(float *)(param_2 + 3) != fVar15) ||
             (*(float *)((longlong)param_2 + 0x1c) != fVar16)) {
            if ((int)param_2[8] != 0) goto LAB_1805c1095;
            goto LAB_1805c109d;
          }
        }
        else {
          plVar6 = (longlong *)FUN_180516f50(lVar7,auStack_130);
          *param_2 = *plVar6;
          lVar7 = plVar6[4];
          param_2[3] = plVar6[3];
          param_2[4] = lVar7;
          lVar7 = plVar6[6];
          param_2[5] = plVar6[5];
          param_2[6] = lVar7;
          param_2[1] = plVar6[1];
          param_2[2] = plVar6[2];
          param_2[7] = plVar6[7];
          *(int *)(param_2 + 8) = (int)plVar6[8];
          uVar9 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar9 = uVar9 ^ uVar9 >> 0x11;
          uVar9 = uVar9 ^ uVar9 << 5;
          *(uint *)(param_1 + 0x272) = uVar9;
          fVar13 = *(float *)(param_2 + 3);
          fVar20 = *(float *)((longlong)param_2 + 0x1c);
          uVar12 = uVar9 << 0xd ^ uVar9;
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          uVar8 = uVar12 << 0xd ^ uVar12;
          fVar21 = (float)(uVar9 - 1) * 2.3283064e-10 + 0.5;
          uVar8 = uVar8 ^ uVar8 >> 0x11;
          uVar8 = uVar8 ^ uVar8 << 5;
          *(uint *)(param_1 + 0x272) = uVar8;
          fVar18 = (float)(uVar8 - 1) * 2.3283064e-10;
          fVar19 = (float)(uVar12 - 1) * 2.3283064e-10;
          fVar13 = (((fVar14 * fVar15 * fVar21 + fVar13 + fVar18) - 0.5) + fVar18) - 0.5;
          fVar15 = (((fVar16 * fVar15 * fVar21 + fVar20 + fVar19) - 0.5) + fVar19) - 0.5;
          uStackX_8 = CONCAT44(fVar15,fVar13);
          if ((fVar13 != *(float *)(param_2 + 3)) ||
             (fVar15 != *(float *)((longlong)param_2 + 0x1c))) {
            if ((int)param_2[8] != 0) {
              *(undefined4 *)(param_2 + 8) = 0;
            }
            param_2[3] = uStackX_8;
          }
        }
      }
      else {
        FUN_180516f50((longlong)*(int *)((longlong)param_1 + 0x17ac) * 0xa60 +
                      param_1[0x291] + 0x30a0,&plStack_188);
        if (0 < iStackX_20) {
          fVar13 = fStack_170 - *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc);
          fVar20 = fStack_16c - *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10);
          fVar18 = fVar20 * fVar20 + fVar13 * fVar13;
          auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar15 = auVar17._0_4_;
          fVar15 = fVar15 * 0.5 * (3.0 - fVar18 * fVar15 * fVar15);
          if (0.99 < ABS(fVar16 * fVar15 * fVar20 + fVar14 * fVar15 * fVar13)) {
            uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
            uVar8 = uVar8 ^ uVar8 >> 0x11;
            uVar8 = uVar8 ^ uVar8 << 5;
            *(uint *)(param_1 + 0x272) = uVar8;
                    // WARNING: Subroutine does not return
            FUN_1808fd400((float)(uVar8 - 1) * 3.949879e-10 - 0.84823006);
          }
        }
        *param_2 = (longlong)plStack_188;
        param_2[1] = CONCAT44(iStack_17c,iStack_180);
        param_2[2] = CONCAT44(uStack_174,iStack_178);
        param_2[7] = lStack_150;
        *(undefined4 *)(param_2 + 8) = uStack_148;
        *(float *)(param_2 + 3) = fStack_170;
        *(float *)((longlong)param_2 + 0x1c) = fStack_16c;
        *(float *)(param_2 + 4) = (float)uStack_168;
        *(float *)((longlong)param_2 + 0x24) = uStack_168._4_4_;
        *(float *)(param_2 + 5) = fStack_160;
        *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_15c;
        *(undefined4 *)(param_2 + 6) = uStack_158;
        *(undefined4 *)((longlong)param_2 + 0x34) = uStack_154;
        uVar9 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar9 = uVar9 ^ uVar9 >> 0x11;
        uVar9 = uVar9 ^ uVar9 << 5;
        uVar8 = uVar9 << 0xd ^ uVar9;
        uVar8 = uVar8 ^ uVar8 >> 0x11;
        uVar8 = uVar8 ^ uVar8 << 5;
        *(uint *)(param_1 + 0x272) = uVar8;
        fVar15 = ((float)(uVar8 - 1) * 9.313226e-10 - 2.0) * fStack_190 + *(float *)(param_2 + 3);
        fVar16 = ((float)(uVar9 - 1) * 9.313226e-10 - 2.0) * fStack_190 +
                 *(float *)((longlong)param_2 + 0x1c);
        uStackX_8 = CONCAT44(fVar16,fVar15);
        if ((*(float *)(param_2 + 3) != fVar15) || (*(float *)((longlong)param_2 + 0x1c) != fVar16))
        {
LAB_1805c1095:
          *(undefined4 *)(param_2 + 8) = 0;
LAB_1805c109d:
          param_2[3] = uStackX_8;
        }
      }
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x1484) = uVar8 & 0xfffffffc;
    *(undefined1 *)((longlong)param_1 + 0x2201) = 1;
  }
  lVar7 = FUN_18065cec0(*(longlong *)
                         (*(longlong *)(*(longlong *)(*param_1 + 0x590) + 0x2590) + 0xc78) + 0x60,0)
  ;
  fVar15 = *(float *)(lVar7 + 0x10) * 1.8;
LAB_1805c111b:
  *(float *)((longlong)param_1 + 0x2204) = fVar15;
  return;
}






