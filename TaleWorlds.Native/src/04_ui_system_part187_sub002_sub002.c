#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part187_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807777c0(longlong param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
void FUN_1807777c0(longlong param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
                  uint param_5,int *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  float *pfVar17;
  undefined4 *puVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  longlong lVar29;
  undefined4 *puVar30;
  bool bVar31;
  undefined1 auStack_138 [32];
  undefined4 uStack_118;
  uint uStack_108;
  undefined4 *puStack_100;
  longlong alStack_f8 [16];
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_108 = param_4;
  if (param_2 == (undefined4 *)0x0) goto LAB_180778681;
  iVar10 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x6d0);
  bVar31 = *(uint *)(param_1 + 0x33c) != param_5;
  uVar7 = *(uint *)(param_1 + 0x33c);
  if (bVar31) {
    *(uint *)(param_1 + 0x33c) = param_5;
    uVar7 = param_5;
  }
  fVar8 = *(float *)(param_1 + 0x218);
  fVar1 = *(float *)(param_1 + 0x21c);
  if (fVar8 == fVar1) {
    if ((bVar31) || (*(longlong *)(param_1 + 0x2e0) == 0)) goto LAB_18077788a;
  }
  else {
    *(float *)(param_1 + 0x218) = fVar1;
    bVar31 = true;
    fVar8 = fVar1;
LAB_18077788a:
    iVar12 = (int)((float)iVar10 * fVar8 * 0.001 + 0.5) + 1;
    *(int *)(param_1 + 0x2f4) = iVar12;
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      uStack_118 = CONCAT31(uStack_118._1_3_,1);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x2e8),
                    &UNK_180959b80,0x141);
    }
    iVar12 = uVar7 * iVar12;
    *(int *)(param_1 + 0x2f0) = iVar12;
    iVar12 = iVar12 * 4;
    uStack_118 = 0;
    *(int *)(param_1 + 0x2f0) = iVar12;
    lVar11 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar12 + 0x10,&UNK_180959b80);
    *(longlong *)(param_1 + 0x2e8) = lVar11;
    *(ulonglong *)(param_1 + 0x2e0) = lVar11 + 0xfU & 0xfffffffffffffff0;
    if (lVar11 == 0) goto LAB_180778681;
  }
  uVar23 = 0;
  if (3 < param_5) {
    pfVar17 = (float *)(param_1 + 0x220);
    uVar7 = (param_5 - 4 >> 2) + 1;
    uVar22 = (ulonglong)uVar7;
    uVar23 = (ulonglong)(uVar7 * 4);
    do {
      fVar8 = pfVar17[0x10];
      if ((fVar8 != *pfVar17) || (bVar31)) {
        fVar1 = *(float *)(param_1 + 0x218);
        if (fVar1 < fVar8) {
          pfVar17[0x10] = fVar1;
          fVar8 = fVar1;
        }
        *pfVar17 = fVar8;
        fVar8 = (float)(int)((float)iVar10 * fVar8 * 0.001 + 0.5);
        pfVar17[0x20] = fVar8;
        fVar8 = (float)(*(int *)(param_1 + 0x2f8) - (int)fVar8);
        pfVar17[0x37] = fVar8;
        if ((int)fVar8 < 0) {
          pfVar17[0x37] = (float)((int)fVar8 + *(int *)(param_1 + 0x2f4));
        }
      }
      fVar8 = pfVar17[0x11];
      if ((fVar8 != pfVar17[1]) || (bVar31)) {
        fVar1 = *(float *)(param_1 + 0x218);
        if (fVar1 < fVar8) {
          pfVar17[0x11] = fVar1;
          fVar8 = fVar1;
        }
        pfVar17[1] = fVar8;
        fVar8 = (float)(int)((float)iVar10 * fVar8 * 0.001 + 0.5);
        pfVar17[0x21] = fVar8;
        fVar8 = (float)(*(int *)(param_1 + 0x2f8) - (int)fVar8);
        pfVar17[0x38] = fVar8;
        if ((int)fVar8 < 0) {
          pfVar17[0x38] = (float)((int)fVar8 + *(int *)(param_1 + 0x2f4));
        }
      }
      fVar8 = pfVar17[0x12];
      if ((fVar8 != pfVar17[2]) || (bVar31)) {
        fVar1 = *(float *)(param_1 + 0x218);
        if (fVar1 < fVar8) {
          pfVar17[0x12] = fVar1;
          fVar8 = fVar1;
        }
        pfVar17[2] = fVar8;
        fVar8 = (float)(int)((float)iVar10 * fVar8 * 0.001 + 0.5);
        pfVar17[0x22] = fVar8;
        fVar8 = (float)(*(int *)(param_1 + 0x2f8) - (int)fVar8);
        pfVar17[0x39] = fVar8;
        if ((int)fVar8 < 0) {
          pfVar17[0x39] = (float)((int)fVar8 + *(int *)(param_1 + 0x2f4));
        }
      }
      fVar8 = pfVar17[0x13];
      if ((fVar8 != pfVar17[3]) || (bVar31)) {
        fVar1 = *(float *)(param_1 + 0x218);
        if (fVar1 < fVar8) {
          pfVar17[0x13] = fVar1;
          fVar8 = fVar1;
        }
        pfVar17[3] = fVar8;
        fVar8 = (float)(int)((float)iVar10 * fVar8 * 0.001 + 0.5);
        pfVar17[0x23] = fVar8;
        fVar8 = (float)(*(int *)(param_1 + 0x2f8) - (int)fVar8);
        pfVar17[0x3a] = fVar8;
        if ((int)fVar8 < 0) {
          pfVar17[0x3a] = (float)((int)fVar8 + *(int *)(param_1 + 0x2f4));
        }
      }
      pfVar17 = pfVar17 + 4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if ((uint)uVar23 < param_5) {
    uVar22 = (ulonglong)(param_5 - (uint)uVar23);
    pfVar17 = (float *)(param_1 + (uVar23 + 0x88) * 4);
    do {
      fVar8 = pfVar17[0x10];
      if ((fVar8 != *pfVar17) || (bVar31)) {
        fVar1 = *(float *)(param_1 + 0x218);
        if (fVar1 < fVar8) {
          pfVar17[0x10] = fVar1;
          fVar8 = fVar1;
        }
        *pfVar17 = fVar8;
        fVar8 = (float)(int)((float)iVar10 * fVar8 * 0.001 + 0.5);
        pfVar17[0x20] = fVar8;
        fVar8 = (float)(*(int *)(param_1 + 0x2f8) - (int)fVar8);
        pfVar17[0x37] = fVar8;
        if ((int)fVar8 < 0) {
          pfVar17[0x37] = (float)((int)fVar8 + *(int *)(param_1 + 0x2f4));
        }
      }
      pfVar17 = pfVar17 + 1;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if ((bVar31) || (*(longlong *)(param_1 + 0x2e0) == 0)) {
    FUN_1807786c0(param_1);
  }
  lVar11 = *(longlong *)(param_1 + 0x2e0);
  if (lVar11 == 0) {
                    // WARNING: Subroutine does not return
    memcpy(param_3,param_2,(ulonglong)(*param_6 * uStack_108) << 2);
  }
  iVar10 = *(int *)(param_1 + 0x2f8);
  uVar23 = (ulonglong)iVar10;
  if (param_5 == 1) {
    puVar18 = (undefined4 *)(lVar11 + uVar23 * 4);
    puVar13 = (undefined4 *)(lVar11 + (longlong)*(int *)(param_1 + 0x2fc) * 4);
    if (uStack_108 != 0) {
      iVar10 = *(int *)(param_1 + 0x2f4);
      uVar7 = uStack_108;
      do {
        uVar9 = 0;
        uVar21 = iVar10 - (int)uVar23;
        if ((int)((int)uVar23 + uVar7) <= iVar10) {
          uVar21 = uVar7;
        }
        if (3 < uVar21) {
          uVar9 = (uVar21 - 4 >> 2) + 1;
          uVar23 = (ulonglong)uVar9;
          uVar9 = uVar9 * 4;
          do {
            *puVar18 = *param_2;
            *param_3 = *puVar13;
            *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
            if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            puVar18[1] = param_2[1];
            param_3[1] = *puVar13;
            *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
            if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            puVar18[2] = param_2[2];
            param_3[2] = *puVar13;
            *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
            if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            puVar18[3] = param_2[3];
            param_3[3] = *puVar13;
            *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
            if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            puVar18 = puVar18 + 4;
            param_3 = param_3 + 4;
            param_2 = param_2 + 4;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        if (uVar9 < uVar21) {
          uVar23 = (ulonglong)(uVar21 - uVar9);
          do {
            *puVar18 = *param_2;
            *param_3 = *puVar13;
            *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
            if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            puVar18 = puVar18 + 1;
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        iVar10 = *(int *)(param_1 + 0x2f4);
        uVar9 = *(int *)(param_1 + 0x2f8) + uVar21;
        uVar23 = (ulonglong)uVar9;
        *(uint *)(param_1 + 0x2f8) = uVar9;
        if (iVar10 <= (int)uVar9) {
          puVar18 = *(undefined4 **)(param_1 + 0x2e0);
          uVar23 = 0;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        uVar7 = uVar7 - uVar21;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 == 2) {
    puVar18 = (undefined4 *)(lVar11 + (longlong)(iVar10 * 2) * 4);
    puVar13 = (undefined4 *)(lVar11 + (longlong)(*(int *)(param_1 + 0x2fc) * 2) * 4);
    puVar14 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x300) * 2) + 1) * 4);
    if (uStack_108 != 0) {
      iVar10 = *(int *)(param_1 + 0x2f4);
      uVar7 = uStack_108;
      do {
        iVar12 = (int)uVar23;
        uVar9 = iVar10 - iVar12;
        if ((int)(iVar12 + uVar7) <= iVar10) {
          uVar9 = uVar7;
        }
        if (uVar9 != 0) {
          uVar23 = (ulonglong)uVar9;
          do {
            uVar4 = *param_2;
            puVar25 = param_2 + 1;
            param_2 = param_2 + 2;
            puVar18[1] = *puVar25;
            *puVar18 = uVar4;
            puVar18 = puVar18 + 2;
            *param_3 = *puVar13;
            param_3[1] = *puVar14;
            param_3 = param_3 + 2;
            *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2fc) + 1;
            if (*(int *)(param_1 + 0x2fc) < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 2;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 1;
            iVar10 = *(int *)(param_1 + 0x2f4);
            if (*(int *)(param_1 + 0x300) < iVar10) {
              puVar14 = puVar14 + 2;
            }
            else {
              *(undefined4 *)(param_1 + 0x300) = 0;
              iVar10 = *(int *)(param_1 + 0x2f4);
              puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 4);
            }
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          iVar12 = *(int *)(param_1 + 0x2f8);
        }
        uVar21 = iVar12 + uVar9;
        uVar23 = (ulonglong)uVar21;
        *(uint *)(param_1 + 0x2f8) = uVar21;
        if (iVar10 <= (int)uVar21) {
          puVar18 = *(undefined4 **)(param_1 + 0x2e0);
          uVar23 = 0;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        uVar7 = uVar7 - uVar9;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 == 6) {
    puVar18 = (undefined4 *)(lVar11 + (longlong)(iVar10 * 6) * 4);
    puVar13 = (undefined4 *)(lVar11 + (longlong)(*(int *)(param_1 + 0x2fc) * 6) * 4);
    puVar14 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x300) * 6) + 1) * 4);
    puVar25 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x304) * 6) + 2) * 4);
    puVar26 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x308) * 6) + 3) * 4);
    puVar27 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x30c) * 6) + 4) * 4);
    puVar15 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x310) * 6) + 5) * 4);
    if (uStack_108 != 0) {
      iVar10 = *(int *)(param_1 + 0x2f4);
      uVar7 = uStack_108;
      do {
        iVar12 = (int)uVar23;
        uVar9 = iVar10 - iVar12;
        if ((int)(iVar12 + uVar7) <= iVar10) {
          uVar9 = uVar7;
        }
        if (uVar9 != 0) {
          uVar23 = (ulonglong)uVar9;
          do {
            uVar5 = *param_2;
            auVar3 = *(undefined1 (*) [16])(param_2 + 1);
            uVar4 = param_2[5];
            param_2 = param_2 + 6;
            *puVar18 = uVar5;
            *(undefined1 (*) [16])(puVar18 + 1) = auVar3;
            puVar18[5] = uVar4;
            puVar18 = puVar18 + 6;
            *param_3 = *puVar13;
            param_3[1] = *puVar14;
            param_3[2] = *puVar25;
            param_3[3] = *puVar26;
            param_3[4] = *puVar27;
            param_3[5] = *puVar15;
            param_3 = param_3 + 6;
            iVar10 = *(int *)(param_1 + 0x2fc) + 1;
            *(int *)(param_1 + 0x2fc) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            iVar10 = *(int *)(param_1 + 0x300) + 1;
            *(int *)(param_1 + 0x300) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar14 = puVar14 + 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x300) = 0;
              puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 4);
            }
            iVar10 = *(int *)(param_1 + 0x304) + 1;
            *(int *)(param_1 + 0x304) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar25 = puVar25 + 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x304) = 0;
              puVar25 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8);
            }
            iVar10 = *(int *)(param_1 + 0x308) + 1;
            *(int *)(param_1 + 0x308) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar26 = puVar26 + 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x308) = 0;
              puVar26 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0xc);
            }
            iVar10 = *(int *)(param_1 + 0x30c) + 1;
            *(int *)(param_1 + 0x30c) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar27 = puVar27 + 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x30c) = 0;
              puVar27 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x10);
            }
            iVar10 = *(int *)(param_1 + 0x310) + 1;
            *(int *)(param_1 + 0x310) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar15 = puVar15 + 6;
            }
            else {
              *(undefined4 *)(param_1 + 0x310) = 0;
              puVar15 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x14);
            }
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          iVar12 = *(int *)(param_1 + 0x2f8);
        }
        iVar10 = *(int *)(param_1 + 0x2f4);
        uVar21 = iVar12 + uVar9;
        uVar23 = (ulonglong)uVar21;
        *(uint *)(param_1 + 0x2f8) = uVar21;
        if (iVar10 <= (int)uVar21) {
          puVar18 = *(undefined4 **)(param_1 + 0x2e0);
          uVar23 = 0;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        uVar7 = uVar7 - uVar9;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 == 8) {
    puVar18 = (undefined4 *)(lVar11 + (longlong)(iVar10 * 8) * 4);
    puVar13 = (undefined4 *)(lVar11 + (longlong)(*(int *)(param_1 + 0x2fc) << 3) * 4);
    puVar14 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x300) << 3) + 1) * 4);
    puVar25 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x304) << 3) + 2) * 4);
    puVar26 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x308) << 3) + 3) * 4);
    puVar27 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x30c) << 3) + 4) * 4);
    puVar15 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x310) << 3) + 5) * 4);
    puVar28 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x314) << 3) + 6) * 4);
    puVar30 = (undefined4 *)(lVar11 + ((longlong)(*(int *)(param_1 + 0x318) << 3) + 7) * 4);
    puStack_100 = puVar18;
    if (uStack_108 != 0) {
      iVar10 = *(int *)(param_1 + 0x2f4);
      do {
        iVar12 = (int)uVar23;
        uVar7 = iVar10 - iVar12;
        if ((int)(uStack_108 + iVar12) <= iVar10) {
          uVar7 = uStack_108;
        }
        uVar23 = (ulonglong)uVar7;
        puStack_100 = (undefined4 *)CONCAT44(puStack_100._4_4_,uVar7);
        if (uVar7 != 0) {
          do {
            uVar6 = *param_2;
            auVar3 = *(undefined1 (*) [16])(param_2 + 1);
            uVar4 = param_2[5];
            uVar5 = param_2[6];
            uVar2 = param_2[7];
            param_2 = param_2 + 8;
            *puVar18 = uVar6;
            *(undefined1 (*) [16])(puVar18 + 1) = auVar3;
            puVar18[5] = uVar4;
            puVar18[6] = uVar5;
            puVar18[7] = uVar2;
            puVar18 = puVar18 + 8;
            *param_3 = *puVar13;
            param_3[1] = *puVar14;
            param_3[2] = *puVar25;
            param_3[3] = *puVar26;
            param_3[4] = *puVar27;
            param_3[5] = *puVar15;
            param_3[6] = *puVar28;
            param_3[7] = *puVar30;
            param_3 = param_3 + 8;
            iVar10 = *(int *)(param_1 + 0x2fc) + 1;
            *(int *)(param_1 + 0x2fc) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar13 = puVar13 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              puVar13 = *(undefined4 **)(param_1 + 0x2e0);
            }
            iVar10 = *(int *)(param_1 + 0x300) + 1;
            *(int *)(param_1 + 0x300) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar14 = puVar14 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x300) = 0;
              puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 4);
            }
            iVar10 = *(int *)(param_1 + 0x304) + 1;
            *(int *)(param_1 + 0x304) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar25 = puVar25 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x304) = 0;
              puVar25 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 8);
            }
            iVar10 = *(int *)(param_1 + 0x308) + 1;
            *(int *)(param_1 + 0x308) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar26 = puVar26 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x308) = 0;
              puVar26 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0xc);
            }
            iVar10 = *(int *)(param_1 + 0x30c) + 1;
            *(int *)(param_1 + 0x30c) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar27 = puVar27 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x30c) = 0;
              puVar27 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x10);
            }
            iVar10 = *(int *)(param_1 + 0x310) + 1;
            *(int *)(param_1 + 0x310) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar15 = puVar15 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x310) = 0;
              puVar15 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x14);
            }
            iVar10 = *(int *)(param_1 + 0x314) + 1;
            *(int *)(param_1 + 0x314) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar28 = puVar28 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x314) = 0;
              puVar28 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x18);
            }
            iVar10 = *(int *)(param_1 + 0x318) + 1;
            *(int *)(param_1 + 0x318) = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x2f4)) {
              puVar30 = puVar30 + 8;
            }
            else {
              *(undefined4 *)(param_1 + 0x318) = 0;
              puVar30 = (undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x1c);
            }
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          iVar12 = *(int *)(param_1 + 0x2f8);
        }
        iVar10 = *(int *)(param_1 + 0x2f4);
        uVar9 = iVar12 + uVar7;
        uVar23 = (ulonglong)uVar9;
        *(uint *)(param_1 + 0x2f8) = uVar9;
        if (iVar10 <= (int)uVar9) {
          puVar18 = *(undefined4 **)(param_1 + 0x2e0);
          uVar23 = 0;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        uStack_108 = uStack_108 - uVar7;
      } while (uStack_108 != 0);
      uStack_108 = 0;
    }
  }
  else {
    lVar29 = lVar11 + (longlong)(int)(iVar10 * param_5) * 4;
    if (0 < (int)param_5) {
      lVar19 = 0;
      piVar20 = (int *)(param_1 + 0x2fc);
      plVar24 = alStack_f8;
      uVar23 = (ulonglong)param_5;
      do {
        iVar10 = *piVar20;
        piVar20 = piVar20 + 1;
        lVar16 = (int)(iVar10 * param_5) + lVar19;
        lVar19 = lVar19 + 1;
        *plVar24 = lVar11 + lVar16 * 4;
        uVar23 = uVar23 - 1;
        plVar24 = plVar24 + 1;
      } while (uVar23 != 0);
    }
    if (uStack_108 != 0) {
      iVar10 = *(int *)(param_1 + 0x2f8);
      iVar12 = *(int *)(param_1 + 0x2f4);
      do {
        uVar7 = iVar12 - iVar10;
        if ((int)(uStack_108 + iVar10) <= iVar12) {
          uVar7 = uStack_108;
        }
        if (uVar7 != 0) {
          lVar11 = (longlong)(int)param_5;
          uVar23 = (ulonglong)uVar7;
          do {
            lVar19 = 0;
            if (3 < lVar11) {
              puVar18 = (undefined4 *)(lVar29 + 4);
              do {
                puVar18[-1] = *(undefined4 *)((longlong)param_2 + (-4 - lVar29) + (longlong)puVar18)
                ;
                puVar13 = puVar18 + 4;
                *(undefined4 *)((longlong)param_3 + (-0x14 - lVar29) + (longlong)puVar13) =
                     *(undefined4 *)alStack_f8[lVar19];
                *puVar18 = *(undefined4 *)((longlong)param_2 + (-0x10 - lVar29) + (longlong)puVar13)
                ;
                *(undefined4 *)((longlong)param_3 + (-0x10 - lVar29) + (longlong)puVar13) =
                     *(undefined4 *)alStack_f8[lVar19 + 1];
                puVar18[1] = *(undefined4 *)
                              ((longlong)param_2 + (-0xc - lVar29) + (longlong)puVar13);
                *(undefined4 *)((longlong)param_3 + (-0xc - lVar29) + (longlong)puVar13) =
                     *(undefined4 *)alStack_f8[lVar19 + 2];
                puVar18[2] = *(undefined4 *)((longlong)param_2 + (-8 - lVar29) + (longlong)puVar13);
                lVar16 = lVar19 + 3;
                lVar19 = lVar19 + 4;
                *(undefined4 *)((longlong)param_3 + (-8 - lVar29) + (longlong)puVar13) =
                     *(undefined4 *)alStack_f8[lVar16];
                puVar18 = puVar13;
              } while (lVar19 < lVar11 + -3);
            }
            if (lVar19 < lVar11) {
              puVar18 = (undefined4 *)(lVar29 + lVar19 * 4);
              do {
                *puVar18 = *(undefined4 *)((longlong)puVar18 + ((longlong)param_2 - lVar29));
                plVar24 = alStack_f8 + lVar19;
                lVar19 = lVar19 + 1;
                *(undefined4 *)((longlong)puVar18 + ((longlong)param_3 - lVar29)) =
                     *(undefined4 *)*plVar24;
                puVar18 = puVar18 + 1;
              } while (lVar19 < lVar11);
            }
            param_2 = param_2 + lVar11;
            param_3 = param_3 + lVar11;
            lVar29 = lVar29 + lVar11 * 4;
            if (0 < (int)param_5) {
              plVar24 = alStack_f8;
              lVar19 = 0;
              piVar20 = (int *)(param_1 + 0x2fc);
              uVar22 = (ulonglong)param_5;
              do {
                *piVar20 = *piVar20 + 1;
                if (*piVar20 < *(int *)(param_1 + 0x2f4)) {
                  *plVar24 = *plVar24 + lVar11 * 4;
                }
                else {
                  *piVar20 = 0;
                  *plVar24 = *(longlong *)(param_1 + 0x2e0) + lVar19;
                }
                lVar19 = lVar19 + 4;
                piVar20 = piVar20 + 1;
                plVar24 = plVar24 + 1;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          iVar10 = *(int *)(param_1 + 0x2f8);
        }
        iVar12 = *(int *)(param_1 + 0x2f4);
        iVar10 = iVar10 + uVar7;
        *(int *)(param_1 + 0x2f8) = iVar10;
        if (iVar12 <= iVar10) {
          lVar29 = *(longlong *)(param_1 + 0x2e0);
          iVar10 = 0;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        uStack_108 = uStack_108 - uVar7;
      } while (uStack_108 != 0);
    }
  }
LAB_180778681:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_138);
}



undefined8 FUN_1807786c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2a0);
  }
  *(int *)(param_1 + 0x2fc) = iVar2;
  if (*(int *)(param_1 + 0x2a4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2a4);
  }
  *(int *)(param_1 + 0x300) = iVar2;
  if (*(int *)(param_1 + 0x2a8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2a8);
  }
  *(int *)(param_1 + 0x304) = iVar2;
  if (*(int *)(param_1 + 0x2ac) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2ac);
  }
  *(int *)(param_1 + 0x308) = iVar2;
  if (*(int *)(param_1 + 0x2b0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2b0);
  }
  *(int *)(param_1 + 0x30c) = iVar2;
  if (*(int *)(param_1 + 0x2b4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2b4);
  }
  *(int *)(param_1 + 0x310) = iVar2;
  if (*(int *)(param_1 + 0x2b8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2b8);
  }
  *(int *)(param_1 + 0x314) = iVar2;
  if (*(int *)(param_1 + 700) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 700);
  }
  *(int *)(param_1 + 0x318) = iVar2;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2c0);
  }
  *(int *)(param_1 + 0x31c) = iVar2;
  if (*(int *)(param_1 + 0x2c4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2c4);
  }
  *(int *)(param_1 + 800) = iVar2;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2c8);
  }
  *(int *)(param_1 + 0x324) = iVar2;
  if (*(int *)(param_1 + 0x2cc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2cc);
  }
  *(int *)(param_1 + 0x328) = iVar2;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2d0);
  }
  *(int *)(param_1 + 0x32c) = iVar2;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2d4);
  }
  *(int *)(param_1 + 0x330) = iVar2;
  if (*(int *)(param_1 + 0x2d8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2d8);
  }
  *(int *)(param_1 + 0x334) = iVar2;
  if (*(int *)(param_1 + 0x2dc) != 0) {
    iVar1 = *(int *)(param_1 + 0x2f4) - *(int *)(param_1 + 0x2dc);
  }
  *(int *)(param_1 + 0x338) = iVar1;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(param_1 + 0x2e0),0,*(undefined4 *)(param_1 + 0x2f0));
  }
  return 0;
}



undefined8 FUN_180778d00(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  lVar1 = *param_1;
  iVar5 = 0;
  puVar6 = (undefined4 *)(lVar1 + 0x4cc);
  do {
    uVar8 = cosf((float)iVar5 * 0.0001917476);
    iVar5 = iVar5 + 1;
    *puVar6 = uVar8;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 0x2000);
  lVar3 = *(longlong *)(lVar1 + 0xe8);
  iVar5 = 0;
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar7 = 0;
    do {
      piVar2 = *(int **)(lVar7 + *(longlong *)(lVar3 + 0x68));
      if ((*piVar2 == 1) && (uVar4 = func_0x000180762af0(lVar1,iVar5,piVar2[0xe]), (int)uVar4 != 0))
      {
        return uVar4;
      }
      lVar3 = *(longlong *)(lVar1 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar5 < *(int *)(lVar3 + 0x60));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180778db0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x328) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(lVar1 + 0x328),
                  &UNK_180959d10,0x222,1);
  }
  *(undefined8 *)(lVar1 + 0x438) = 0;
  if (*(longlong *)(lVar1 + 0x220) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(lVar1 + 0x220),
                  &UNK_180959d10,0x225,1);
  }
  *(undefined8 *)(lVar1 + 0x218) = 0;
  lVar3 = 0x20;
  plVar2 = (longlong *)(lVar1 + 0x228);
  do {
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar2,&UNK_180959d10,0x22a,1);
    }
    plVar2[0x22] = 0;
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 0;
}



undefined8 FUN_180778f30(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(lVar2 + 0x84cc);
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x84cc);
  }
  else {
    if (param_2 != 1) {
      return 0x1f;
    }
    *param_3 = *(undefined4 *)(lVar2 + 34000);
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(lVar2 + 34000);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&UNK_1809fd0a0,uVar1);
}



undefined8
FUN_180778fa0(longlong *param_1,int param_2,longlong *param_3,undefined4 *param_4,longlong param_5)

{
  if (param_2 != 2) {
    return 0x1f;
  }
  *param_3 = *param_1 + 0x330;
  *param_4 = 0x108;
  if (param_5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_5,0x20,&UNK_180959d80);
  }
  return 0;
}



undefined8 FUN_180778ff0(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_2 != 3) {
    return 0x1f;
  }
  lVar1 = *param_1;
  *param_3 = *(undefined4 *)(lVar1 + 0x44c);
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_4,0x20,&UNK_180958d90,(double)*(float *)(lVar1 + 0x44c));
  }
  return 0;
}







