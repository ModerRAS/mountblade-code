#include "TaleWorlds.Native.Split.h"

// 03_rendering_part365.c - 1 个函数

// 函数: void FUN_180467500(longlong param_1)
void FUN_180467500(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *******pppppppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 ******ppppppuVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 ******ppppppuVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *******pppppppuVar24;
  undefined8 ******ppppppuVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  undefined8 ******ppppppuVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uStackX_8;
  float afStackX_10 [2];
  float afStackX_18 [3];
  undefined4 uStackX_24;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [184];
  
  uStack_108 = 0xfffffffffffffffe;
  if ((ulonglong)(*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 3) < 2) {
    return;
  }
  if ((*(uint *)(param_1 + 0x170) >> 1 & 1) != 0) {
    FUN_180468070(param_1,1,0);
  }
  puVar1 = (undefined8 *)(param_1 + 0x180);
  FUN_1801e85e0(puVar1,*(undefined8 *)(param_1 + 400));
  *puVar1 = puVar1;
  *(undefined8 **)(param_1 + 0x188) = puVar1;
  pfVar34 = (float *)0x0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_1800b8500(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  fVar38 = 0.0;
  afStackX_10[0] = 0.0;
  uStackX_8 = 0;
  puVar17 = (undefined8 *)func_0x0001804662e0(param_1,0);
  uStack_1a8 = *puVar17;
  uStack_1a0 = puVar17[1];
  uStack_198 = puVar17[2];
  uStack_190 = puVar17[3];
  uStack_188 = puVar17[4];
  uStack_180 = puVar17[5];
  fVar37 = *(float *)(puVar17 + 6);
  fVar42 = *(float *)((longlong)puVar17 + 0x34);
  fVar41 = *(float *)(puVar17 + 7);
  uStackX_8._0_4_ = 0x3f800000;
  uStackX_8._4_4_ = 0;
  puVar17 = (undefined8 *)func_0x0001804662e0(param_1,0x3f800000);
  uStack_158 = *puVar17;
  uStack_150 = puVar17[1];
  uStack_148 = puVar17[2];
  uStack_140 = puVar17[3];
  uStack_138 = puVar17[4];
  uStack_130 = puVar17[5];
  fVar39 = 0.0;
  fVar35 = *(float *)((longlong)puVar17 + 0x34) - fVar42;
  fVar40 = 0.05 / SQRT((*(float *)(puVar17 + 6) - fVar37) * (*(float *)(puVar17 + 6) - fVar37) +
                       fVar35 * fVar35 +
                       (*(float *)(puVar17 + 7) - fVar41) * (*(float *)(puVar17 + 7) - fVar41)) +
           0.0001;
  uStackX_8._0_4_ = 0;
  uStack_1b0 = 3;
  pppppppuStack_1d8 = &pppppppuStack_1d8;
  pppppppuStack_1d0 = &pppppppuStack_1d8;
  pppppppuStack_1c8 = (undefined8 *******)0x0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  pfVar27 = pfVar34;
  fVar35 = 0.0;
  do {
    fVar36 = fVar35;
    if (1.0 < fVar39) {
      iVar32 = (int)pfVar27;
      puVar18 = puVar1;
      puVar17 = *(undefined8 **)(param_1 + 400);
      while (puVar17 != (undefined8 *)0x0) {
        if (*(int *)(puVar17 + 4) < iVar32) {
          puVar17 = (undefined8 *)*puVar17;
        }
        else {
          puVar18 = puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
      }
      if ((puVar18 == puVar1) || (iVar32 < *(int *)(puVar18 + 4))) {
        puVar18 = (undefined8 *)FUN_1804695d0(puVar1,auStack_100);
        puVar18 = (undefined8 *)*puVar18;
      }
      pppppppuVar2 = (undefined8 *******)(puVar18 + 5);
      if ((undefined8 ********)pppppppuVar2 == &pppppppuStack_1d8) {
LAB_1804677f9:
        pppppppuVar2 = pppppppuStack_1c8;
        if (pppppppuStack_1c8 != (undefined8 *******)0x0) {
          FUN_18004b790(&pppppppuStack_1d8,*pppppppuStack_1c8);
                    // WARNING: Subroutine does not return
          FUN_18064e900(pppppppuVar2);
        }
      }
      else {
        FUN_1800572d0(pppppppuVar2);
        if (pppppppuStack_1c8 != (undefined8 *******)0x0) {
          ppppppuVar19 = (undefined8 ******)
                         FUN_180469740(pppppppuVar2,pppppppuStack_1c8,pppppppuVar2);
          puVar18[7] = ppppppuVar19;
          ppppppuVar29 = (undefined8 ******)*ppppppuVar19;
          ppppppuVar25 = ppppppuVar19;
          while (ppppppuVar15 = ppppppuVar29, ppppppuVar15 != (undefined8 ******)0x0) {
            ppppppuVar25 = ppppppuVar15;
            ppppppuVar29 = (undefined8 ******)*ppppppuVar15;
          }
          *pppppppuVar2 = ppppppuVar25;
          ppppppuVar25 = (undefined8 ******)ppppppuVar19[1];
          while (ppppppuVar29 = ppppppuVar25, ppppppuVar29 != (undefined8 ******)0x0) {
            ppppppuVar19 = ppppppuVar29;
            ppppppuVar25 = (undefined8 ******)ppppppuVar29[1];
          }
          puVar18[6] = ppppppuVar19;
          puVar18[9] = uStack_1b8;
          goto LAB_1804677f9;
        }
      }
      pppppppuStack_1d8 = &pppppppuStack_1d8;
      pppppppuStack_1d0 = &pppppppuStack_1d8;
      pppppppuStack_1c8 = (undefined8 *******)0x0;
      uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
      uStack_1b8 = 0;
      uVar33 = iVar32 + 1;
      pfVar27 = (float *)(ulonglong)uVar33;
      lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)(int)uVar33 * 8);
      fVar40 = fVar42 - *(float *)(lVar23 + 0x34);
      fVar36 = fVar37 - *(float *)(lVar23 + 0x30);
      fVar39 = fVar41 - *(float *)(lVar23 + 0x38);
      fVar36 = SQRT(fVar36 * fVar36 + fVar40 * fVar40 + fVar39 * fVar39) + fVar38;
      pfVar28 = *(float **)(param_1 + 0x100);
      uStackX_8._0_4_ = uVar33;
      if (pfVar28 < *(float **)(param_1 + 0x108)) {
        *(float **)(param_1 + 0x100) = pfVar28 + 1;
        *pfVar28 = fVar36 - fVar35;
      }
      else {
        pfVar26 = *(float **)(param_1 + 0xf8);
        lVar23 = (longlong)pfVar28 - (longlong)pfVar26 >> 2;
        if (lVar23 == 0) {
          lVar23 = 1;
LAB_1804678f3:
          pfVar20 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar23 * 4,
                                           *(undefined1 *)(param_1 + 0x110));
          pfVar28 = *(float **)(param_1 + 0x100);
          pfVar26 = *(float **)(param_1 + 0xf8);
        }
        else {
          lVar23 = lVar23 * 2;
          pfVar20 = pfVar34;
          if (lVar23 != 0) goto LAB_1804678f3;
        }
        if (pfVar26 != pfVar28) {
                    // WARNING: Subroutine does not return
          memmove(pfVar20,pfVar26,(longlong)pfVar28 - (longlong)pfVar26);
        }
        *pfVar20 = fVar36 - fVar35;
        if (*(longlong *)(param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(float **)(param_1 + 0xf8) = pfVar20;
        *(float **)(param_1 + 0x100) = pfVar20 + 1;
        *(float **)(param_1 + 0x108) = pfVar20 + lVar23;
      }
      lVar23 = *(longlong *)(param_1 + 0xd0);
      uVar30 = *(longlong *)(param_1 + 0xd8) - lVar23 >> 3;
      uVar31 = uVar30 - 1;
      if ((ulonglong)(longlong)(int)uVar33 < uVar31) {
        iVar32 = iVar32 + 2;
        afStackX_18[0] = (float)iVar32;
        afStackX_18[1] = 0.0;
        lVar21 = func_0x0001804662e0(param_1,afStackX_18[0]);
        afStackX_18[2] = (float)(int)uVar33;
        uStackX_24 = 0;
        lVar22 = func_0x0001804662e0(param_1);
        fVar40 = *(float *)(lVar21 + 0x38) - *(float *)(lVar22 + 0x38);
        fVar35 = *(float *)(lVar21 + 0x34) - *(float *)(lVar22 + 0x34);
        fVar39 = *(float *)(lVar21 + 0x30) - *(float *)(lVar22 + 0x30);
        if (SQRT(fVar39 * fVar39 + fVar35 * fVar35 + fVar40 * fVar40) < 1e-06) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar30;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (longlong)iVar32;
          pfVar27 = SUB168(auVar4 % auVar3,0);
          uStackX_8._0_4_ = SUB164(auVar4 % auVar3,0);
        }
      }
      iVar32 = (int)pfVar27;
      if (uVar31 <= (ulonglong)(longlong)iVar32) {
        puVar17 = *(undefined8 **)(lVar23 + (longlong)iVar32 * 8);
        uVar5 = *puVar17;
        uVar6 = puVar17[1];
        uVar7 = puVar17[2];
        uVar8 = puVar17[3];
        uVar9 = puVar17[4];
        uVar10 = puVar17[5];
        uVar11 = puVar17[6];
        uVar12 = puVar17[7];
        uVar13 = puVar17[0x18];
        uVar14 = puVar17[0x19];
        pppppppuVar24 = &pppppppuStack_1d8;
        pppppppuVar2 = pppppppuStack_1c8;
        while (pppppppuVar2 != (undefined8 *******)0x0) {
          if (*(float *)(pppppppuVar2 + 4) <= fVar38 && fVar38 != *(float *)(pppppppuVar2 + 4)) {
            pppppppuVar2 = (undefined8 *******)*pppppppuVar2;
          }
          else {
            pppppppuVar24 = pppppppuVar2;
            pppppppuVar2 = (undefined8 *******)pppppppuVar2[1];
          }
        }
        if (((undefined8 ********)pppppppuVar24 == &pppppppuStack_1d8) ||
           (fVar38 < *(float *)(pppppppuVar24 + 4))) {
          puVar17 = (undefined8 *)FUN_180469830(&pppppppuStack_1d8,afStackX_18);
          pppppppuVar24 = (undefined8 *******)*puVar17;
        }
        *(undefined8 *)((longlong)pppppppuVar24 + 0x24) = uVar5;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x2c) = uVar6;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x34) = uVar7;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x3c) = uVar8;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x44) = uVar9;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x4c) = uVar10;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x54) = uVar11;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x5c) = uVar12;
        *(undefined8 *)((longlong)pppppppuVar24 + 100) = uVar13;
        *(undefined8 *)((longlong)pppppppuVar24 + 0x6c) = uVar14;
        puVar18 = puVar1;
        puVar17 = *(undefined8 **)(param_1 + 400);
        while (puVar17 != (undefined8 *)0x0) {
          if (*(int *)(puVar17 + 4) < iVar32) {
            puVar17 = (undefined8 *)*puVar17;
          }
          else {
            puVar18 = puVar17;
            puVar17 = (undefined8 *)puVar17[1];
          }
        }
        if ((puVar18 == puVar1) || (iVar32 < *(int *)(puVar18 + 4))) {
          puVar18 = (undefined8 *)FUN_1804695d0(puVar1,afStackX_10);
          puVar18 = (undefined8 *)*puVar18;
        }
        pppppppuVar2 = (undefined8 *******)(puVar18 + 5);
        if (((undefined8 ********)pppppppuVar2 != &pppppppuStack_1d8) &&
           (FUN_1800572d0(pppppppuVar2), pppppppuStack_1c8 != (undefined8 *******)0x0)) {
          ppppppuVar25 = (undefined8 ******)
                         FUN_180469740(pppppppuVar2,pppppppuStack_1c8,pppppppuVar2);
          puVar18[7] = ppppppuVar25;
          ppppppuVar19 = (undefined8 ******)*ppppppuVar25;
          ppppppuVar29 = ppppppuVar25;
          if ((undefined8 ******)*ppppppuVar25 != (undefined8 ******)0x0) {
            do {
              ppppppuVar29 = ppppppuVar19;
              ppppppuVar19 = (undefined8 ******)*ppppppuVar29;
            } while ((undefined8 ******)*ppppppuVar29 != (undefined8 ******)0x0);
            ppppppuVar25 = (undefined8 ******)puVar18[7];
          }
          *pppppppuVar2 = ppppppuVar29;
          ppppppuVar19 = (undefined8 ******)ppppppuVar25[1];
          while (ppppppuVar29 = ppppppuVar19, ppppppuVar29 != (undefined8 ******)0x0) {
            ppppppuVar25 = ppppppuVar29;
            ppppppuVar19 = (undefined8 ******)ppppppuVar29[1];
          }
          puVar18[6] = ppppppuVar25;
          puVar18[9] = uStack_1b8;
        }
        uVar33 = *(uint *)(param_1 + 0x170);
        if ((uVar33 >> 1 & 1) != 0) {
          FUN_180468070(param_1,0,1);
          uVar33 = (uint)*(byte *)(param_1 + 0x170);
        }
        if ((uVar33 & 1) != 0) {
          uStackX_8._0_4_ = 0;
          lVar23 = *(longlong *)(param_1 + 0xd8);
          lVar21 = *(longlong *)(param_1 + 0xd0);
          if (lVar23 - lVar21 >> 3 != 1) {
            do {
              iVar32 = (int)pfVar34;
              puVar17 = *(undefined8 **)(lVar21 + (longlong)iVar32 * 8);
              uStack_1a8 = *puVar17;
              uStack_1a0 = puVar17[1];
              uStack_198 = puVar17[2];
              uStack_190 = puVar17[3];
              uStack_188 = puVar17[4];
              uStack_180 = puVar17[5];
              uStack_178 = puVar17[6];
              uStack_170 = puVar17[7];
              puVar18 = puVar1;
              puVar17 = *(undefined8 **)(param_1 + 400);
              while (puVar17 != (undefined8 *)0x0) {
                if (*(int *)(puVar17 + 4) < iVar32) {
                  puVar17 = (undefined8 *)*puVar17;
                }
                else {
                  puVar18 = puVar17;
                  puVar17 = (undefined8 *)puVar17[1];
                }
              }
              if ((puVar18 == puVar1) || (iVar32 < *(int *)(puVar18 + 4))) {
                puVar18 = (undefined8 *)FUN_1804695d0(puVar1,afStackX_10,pfVar34,puVar18,&uStackX_8)
                ;
                puVar18 = (undefined8 *)*puVar18;
              }
              lVar23 = puVar18[6];
              uStack_1a8 = *(undefined8 *)(lVar23 + 0x24);
              uStack_1a0 = *(undefined8 *)(lVar23 + 0x2c);
              uStack_198 = *(undefined8 *)(lVar23 + 0x34);
              uStack_190 = *(undefined8 *)(lVar23 + 0x3c);
              uStack_188 = *(undefined8 *)(lVar23 + 0x44);
              uStack_180 = *(undefined8 *)(lVar23 + 0x4c);
              fVar37 = (float)iVar32;
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              if (9.223372e+18 <= fVar37) {
                fVar37 = fVar37 - 9.223372e+18;
              }
              FUN_180464e90(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)fVar37 * 8),
                            &uStack_1a8,0);
              uStackX_8._0_4_ = iVar32 + 1;
              pfVar34 = (float *)(ulonglong)(uint)uStackX_8;
              lVar23 = *(longlong *)(param_1 + 0xd8);
              lVar21 = *(longlong *)(param_1 + 0xd0);
            } while ((ulonglong)(longlong)(int)(uint)uStackX_8 < (lVar23 - lVar21 >> 3) - 1U);
          }
          lVar23 = lVar23 - lVar21 >> 3;
          puVar17 = *(undefined8 **)(lVar21 + -8 + lVar23 * 8);
          uStack_1a8 = *puVar17;
          uStack_1a0 = puVar17[1];
          uStack_198 = puVar17[2];
          uStack_190 = puVar17[3];
          uStack_188 = puVar17[4];
          uStack_180 = puVar17[5];
          uStack_178 = puVar17[6];
          uStack_170 = puVar17[7];
          uStackX_8._0_4_ = (int)lVar23 - 2;
          puVar18 = puVar1;
          puVar17 = *(undefined8 **)(param_1 + 400);
          while (puVar17 != (undefined8 *)0x0) {
            if (*(int *)(puVar17 + 4) < (int)(uint)uStackX_8) {
              puVar17 = (undefined8 *)*puVar17;
            }
            else {
              puVar18 = puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
          }
          if ((puVar18 == puVar1) || ((int)(uint)uStackX_8 < *(int *)(puVar18 + 4))) {
            puVar18 = (undefined8 *)
                      FUN_1804695d0(puVar1,afStackX_10,(uint)uStackX_8,puVar18,&uStackX_8);
            puVar18 = (undefined8 *)*puVar18;
          }
          lVar23 = func_0x00018066b9a0(puVar18 + 5);
          uStack_1a8 = *(undefined8 *)(lVar23 + 0x24);
          uStack_1a0 = *(undefined8 *)(lVar23 + 0x2c);
          uStack_198 = *(undefined8 *)(lVar23 + 0x34);
          uStack_190 = *(undefined8 *)(lVar23 + 0x3c);
          uStack_188 = *(undefined8 *)(lVar23 + 0x44);
          uStack_180 = *(undefined8 *)(lVar23 + 0x4c);
          lVar23 = (*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 3) + -1;
          fVar37 = (float)lVar23;
          if (lVar23 < 0) {
            fVar37 = fVar37 + 1.8446744e+19;
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          if (9.223372e+18 <= fVar37) {
            fVar37 = fVar37 - 9.223372e+18;
          }
          FUN_180464e90(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)fVar37 * 8),
                        &uStack_1a8,0);
        }
        pppppppuVar2 = pppppppuStack_1c8;
        if (pppppppuStack_1c8 == (undefined8 *******)0x0) {
          return;
        }
        FUN_18004b790(&pppppppuStack_1d8,*pppppppuStack_1c8);
                    // WARNING: Subroutine does not return
        FUN_18064e900(pppppppuVar2);
      }
      fStack_168 = (float)(iVar32 + 1);
      uStack_164 = 0;
      lVar23 = func_0x0001804662e0(param_1,fStack_168);
      fStack_160 = (float)iVar32;
      uStack_15c = 0;
      lVar21 = func_0x0001804662e0(param_1,fStack_160);
      fVar40 = *(float *)(lVar23 + 0x30) - *(float *)(lVar21 + 0x30);
      fVar39 = *(float *)(lVar23 + 0x34) - *(float *)(lVar21 + 0x34);
      fVar35 = *(float *)(lVar23 + 0x38) - *(float *)(lVar21 + 0x38);
      fVar40 = 0.05 / SQRT(fVar39 * fVar39 + fVar40 * fVar40 + fVar35 * fVar35);
      fVar39 = 0.0;
    }
    FUN_180466610(param_1,&uStack_158);
    fVar37 = (fStack_124 - fVar42) * (fStack_124 - fVar42) +
             (fStack_128 - fVar37) * (fStack_128 - fVar37) +
             (fStack_120 - fVar41) * (fStack_120 - fVar41);
    fVar38 = fVar38 + SQRT(fVar37);
    pppppppuVar24 = &pppppppuStack_1d8;
    pppppppuVar2 = pppppppuStack_1c8;
    while (pppppppuVar2 != (undefined8 *******)0x0) {
      if (*(float *)(pppppppuVar2 + 4) <= fVar38 && fVar38 != *(float *)(pppppppuVar2 + 4)) {
        pppppppuVar2 = (undefined8 *******)*pppppppuVar2;
      }
      else {
        pppppppuVar24 = pppppppuVar2;
        pppppppuVar2 = (undefined8 *******)pppppppuVar2[1];
      }
    }
    afStackX_10[0] = fVar38;
    if (((undefined8 ********)pppppppuVar24 == &pppppppuStack_1d8) ||
       (fVar38 < *(float *)(pppppppuVar24 + 4))) {
      puVar17 = (undefined8 *)
                FUN_180469830(&pppppppuStack_1d8,auStack_f8,fVar37,pppppppuVar24,afStackX_10);
      pppppppuVar24 = (undefined8 *******)*puVar17;
    }
    uVar6 = uStack_150;
    uVar5 = uStack_158;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x24) = uStack_158;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x2c) = uVar6;
    uVar8 = uStack_140;
    uVar7 = uStack_148;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x34) = uStack_148;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x3c) = uVar8;
    uVar10 = uStack_130;
    uVar9 = uStack_138;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x44) = uStack_138;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x4c) = uVar10;
    uVar16 = uStack_11c;
    fVar41 = fStack_120;
    fVar42 = fStack_124;
    fVar37 = fStack_128;
    *(float *)((longlong)pppppppuVar24 + 0x54) = fStack_128;
    *(float *)(pppppppuVar24 + 0xb) = fVar42;
    *(float *)((longlong)pppppppuVar24 + 0x5c) = fVar41;
    *(undefined4 *)(pppppppuVar24 + 0xc) = uVar16;
    uVar11 = uStack_110;
    *(undefined8 *)((longlong)pppppppuVar24 + 100) = uStack_118;
    *(undefined8 *)((longlong)pppppppuVar24 + 0x6c) = uVar11;
    uStack_1a8 = uVar5;
    uStack_1a0 = uVar6;
    uStack_198 = uVar7;
    uStack_190 = uVar8;
    uStack_188 = uVar9;
    uStack_180 = uVar10;
    fVar39 = fVar39 + fVar40;
    uStack_178 = CONCAT44(fVar42,fVar37);
    uStack_170 = CONCAT44(uVar16,fVar41);
    fVar35 = fVar36;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



