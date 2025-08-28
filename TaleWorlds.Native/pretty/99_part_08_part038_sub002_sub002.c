#include "TaleWorlds.Native.Split.h"

// 99_part_08_part038_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805a16ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1805a16ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  float fVar15;
  float fVar16;
  longlong in_RAX;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 uVar20;
  int iVar21;
  float fVar22;
  uint *puVar23;
  longlong lVar24;
  float *unaff_RBP;
  longlong lVar25;
  longlong *unaff_RDI;
  undefined7 uVar26;
  float fVar27;
  longlong lVar28;
  char cVar29;
  longlong *unaff_R12;
  longlong lVar30;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar31;
  longlong lVar32;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  char cStack0000000000000070;
  longlong *in_stack_00000078;
  
  if ((int)in_RAX < 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = *(longlong *)(*unaff_R12 + 0x8f8) + 8 + in_RAX * 0x1f8;
    if ((lVar25 != 0) && (0 < *(int *)(lVar25 + 0x30))) {
      lVar24 = *(longlong *)(lVar25 + 0xd0);
      lVar18 = (longlong)*(int *)(lVar25 + 0xf0) * 0xa0;
      if (((*(uint *)(lVar18 + 0x50 + lVar24) >> 9 & 1) == 0) || (0 < *(short *)(lVar25 + 8))) {
        if ((int)unaff_R12[3] == 0) {
          unaff_RBP[-0x1c] = *(float *)(lVar18 + 0x9c + lVar24);
        }
        else {
          unaff_RBP[-0x1c] = *(float *)(lVar18 + 0x98 + lVar24);
        }
        goto LAB_1805a1778;
      }
    }
  }
  unaff_RBP[-0x1c] = 2.8026e-45;
LAB_1805a1778:
  lVar24 = unaff_RDI[1];
  lVar18 = *unaff_RDI;
  uVar26 = (undefined7)((ulonglong)param_3 >> 8);
  fVar38 = 0.0;
  unaff_RBP[-0x1f] = *(float *)(unaff_R13 + 0x44);
  cStack0000000000000070 = '\x01';
  iVar2 = (int)((lVar24 - lVar18) / 0xcb0);
  *(longlong *)(unaff_RBP + 6) = (longlong)iVar2;
  if (0 < iVar2) {
    lVar24 = 0;
    unaff_RBP[-0x12] = 0.0;
    unaff_RBP[-0x11] = 0.0;
    do {
      if (cStack0000000000000070 == '\0') break;
      lVar18 = *unaff_R12;
      if (*(int *)(lVar18 + 0x568) != 1) {
LAB_1805a186c:
        fVar38 = 0.0;
        unaff_RBP[-0x1f] = 0.0;
        break;
      }
      if ((*(byte *)(unaff_R12 + 4) & 1) == 0) {
        iVar2 = *(int *)(*(longlong *)(lVar18 + 0x590) + 0x2498);
        if ((iVar2 == -1) || (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) != 0x14))
        goto LAB_1805a186c;
      }
      else {
        cVar13 = FUN_1805a3ab0(lVar18 + 0x28);
        if (cVar13 == '\0') goto LAB_1805a186c;
      }
      lVar18 = *unaff_RDI;
      lVar24 = lVar24 * 0xcb0;
      fVar37 = *(float *)(lVar24 + 0xc94 + lVar18);
      if (fVar37 <= fVar38) {
        fVar37 = fVar38;
      }
      cVar13 = *(char *)(lVar24 + 0xc18 + lVar18);
      bVar6 = *(int *)(lVar24 + 0xc20 + lVar18) - 3U < 3;
      if (cVar13 == '\0') {
        lVar32 = 0;
      }
      else {
        lVar32 = *(longlong *)(lVar24 + 0xc08 + lVar18);
      }
      if (*(char *)((longlong)unaff_R12 + 0x21) == '\x02') {
        if (lVar32 != 0) {
          lVar30 = *(longlong *)(*(longlong *)(unaff_R13 + 0x108) + 0x20);
          lVar28 = *(longlong *)(lVar32 + 0x20);
          fVar35 = *(float *)(lVar30 + 0x24) - *(float *)(lVar28 + 0x24);
          fVar34 = *(float *)(lVar30 + 0x28) - *(float *)(lVar28 + 0x28);
          fVar38 = *(float *)(lVar30 + 0x2c) - *(float *)(lVar28 + 0x2c);
          if (_DAT_180c96500 * _DAT_180c96500 <= fVar35 * fVar35 + fVar34 * fVar34 + fVar38 * fVar38
             ) goto LAB_1805a19c5;
        }
LAB_1805a19d0:
        unaff_RBP[-0x1f] = 0.0;
        cVar13 = *(char *)(lVar24 + 0xc18 + lVar18);
      }
      else {
LAB_1805a19c5:
        if ((bVar6) && (*(char *)((longlong)unaff_R12 + 0x21) == '\x01')) goto LAB_1805a19d0;
      }
      if ((cVar13 == '\0') && ((*(byte *)(unaff_R12 + 4) & 1) == 0)) {
        func_0x0001805d7910(*(undefined8 *)(unaff_R14 + 0x6e0),*(undefined4 *)(unaff_R13 + 0x48),
                            *(undefined8 *)(lVar24 + lVar18));
      }
      if (lVar32 == 0) {
LAB_1805a1a1f:
        bVar12 = false;
      }
      else {
        cVar13 = FUN_18052da10(lVar32);
        bVar12 = true;
        if (cVar13 == '\0') goto LAB_1805a1a1f;
      }
      if ((lVar32 == 0) || (cVar13 = func_0x00018052da70(lVar32), cVar13 == '\0')) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      unaff_RBP[-0x20] = -NAN;
      unaff_RBP[-0x16] = -NAN;
      unaff_RBP[-0x15] = -NAN;
      unaff_RBP[-0x14] = -NAN;
      if (((((*(int *)(lVar24 + 0xc20 + lVar18) == 5) || (!bVar6)) || (lVar32 == 0)) ||
          (((lVar30 = *(longlong *)(*(longlong *)(lVar32 + 0x8f8) + 0x9f0), lVar30 == 0 ||
            (*(int *)(lVar30 + 0x30) < 1)) ||
           ((uVar4 = *(ulonglong *)
                      ((longlong)*(int *)(lVar30 + 0xf0) * 0xa0 + 0x50 +
                      *(longlong *)(lVar30 + 0xd0)), (uVar4 >> 9 & 1) != 0 &&
            (*(short *)(lVar30 + 8) < 1)))))) || ((uVar4 >> 0x1c & 1) == 0)) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
      }
      cVar14 = *(char *)(lVar24 + 0xc18 + lVar18);
      if ((bVar11) || (cVar14 == '\0')) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (((cVar14 == '\0') && (*(longlong *)(lVar24 + lVar18) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar24 + lVar18) + 0x10) != 0)) {
        cVar29 = '\x01';
      }
      else {
        cVar29 = '\0';
      }
      if ((bVar6) && (*(char *)(lVar24 + 0xca9 + lVar18) == '\0')) {
        unaff_RBP[-0x1f] = *(float *)(lVar24 + 0xc9c + lVar18);
        cVar14 = *(char *)(lVar24 + 0xc18 + lVar18);
      }
      if ((cVar14 == '\0') && (*(longlong *)(lVar24 + lVar18) != 0)) {
        lVar30 = *(longlong *)(*(longlong *)(lVar24 + lVar18) + 0x10);
LAB_1805a1b3a:
        lVar28 = *(longlong *)(lVar24 + 0xc10 + lVar18);
        if (lVar28 == 0) goto LAB_1805a1b4d;
        fVar38 = *(float *)(lVar28 + 100);
      }
      else {
        lVar30 = 0;
        if (cVar14 == '\0') goto LAB_1805a1b3a;
LAB_1805a1b4d:
        fVar38 = -NAN;
      }
      cVar14 = *(char *)(lVar24 + 0xca0 + lVar18);
      if (cVar14 == -1) {
        uVar20 = 0xff;
      }
      else {
        uVar20 = *(undefined1 *)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(lVar32 + 0x6d8) + 0x8a8) + 0x260) +
                      0x208) + 0x140) + 0x104 + (longlong)cVar14 * 0x1b0);
      }
      func_0x0001805345e0(unaff_RBP + 0x18);
      lVar28 = *(longlong *)(unaff_RBP + -0x10);
      unaff_RBP[0x37] = NAN;
      unaff_RBP[0x38] = NAN;
      unaff_RBP[0x39] = NAN;
      unaff_RBP[0x3a] = NAN;
      *(undefined2 *)((longlong)unaff_RBP + 0x65) = 0;
      unaff_RBP[0x3b] = NAN;
      unaff_RBP[0x3c] = NAN;
      unaff_RBP[0x3d] = NAN;
      unaff_RBP[0x3e] = NAN;
      *(undefined1 *)((longlong)unaff_RBP + 0x67) = 0;
      fVar34 = *(float *)(lVar28 + 0x30);
      *(undefined2 *)((longlong)unaff_RBP + 0x6a) = 0;
      unaff_RBP[0x27] = -NAN;
      unaff_RBP[0x28] = -NAN;
      unaff_RBP[0x29] = -NAN;
      unaff_RBP[0x2a] = -NAN;
      *(char *)(unaff_RBP + 0x18) = cVar13;
      *(undefined1 *)((longlong)unaff_RBP + 0x61) = *(undefined1 *)(lVar24 + 0xcaa + lVar18);
      *(undefined1 *)((longlong)unaff_RBP + 0x62) = *(undefined1 *)(unaff_R13 + 0x56);
      *(undefined1 *)((longlong)unaff_RBP + 99) = *(undefined1 *)(lVar24 + 0xc18 + lVar18);
      *(byte *)(unaff_RBP + 0x19) = (byte)~*(byte *)(lVar24 + 0xca2 + lVar18) >> 7;
      *(bool *)(unaff_RBP + 0x1a) = lVar30 != 0;
      *(undefined1 *)((longlong)unaff_RBP + 0x69) = *(undefined1 *)(lVar24 + 0xca8 + lVar18);
      unaff_RBP[0x21] = fVar38;
      *(undefined1 *)(unaff_RBP + 0x22) = *(undefined1 *)(lVar24 + 0xc24 + lVar18);
      unaff_RBP[0x1b] = *(float *)(lVar24 + 0xc20 + lVar18);
      unaff_RBP[0x1c] = *(float *)(lVar28 + 0x28);
      unaff_RBP[0x1d] = *(float *)(lVar28 + 0x38);
      unaff_RBP[0x1e] = unaff_RBP[-0x1c];
      *(undefined1 *)(unaff_RBP + 0x1f) = *(undefined1 *)(lVar24 + 0xca0 + lVar18);
      *(undefined1 *)((longlong)unaff_RBP + 0x7d) = uVar20;
      *(undefined1 *)((longlong)unaff_RBP + 0x7e) = *(undefined1 *)(lVar24 + 0xca1 + lVar18);
      unaff_RBP[0x20] = *(float *)(unaff_R13 + 0x48);
      unaff_RBP[0x23] = fVar34;
      unaff_RBP[0x24] = *(float *)(lVar24 + 0xc90 + lVar18);
      unaff_RBP[0x25] = *(float *)(lVar24 + 0xc94 + lVar18);
      unaff_RBP[0x26] = *(float *)(lVar24 + 0xc98 + lVar18);
      puVar1 = (undefined8 *)(lVar24 + 0xc48 + lVar18);
      uVar8 = puVar1[1];
      *(undefined8 *)(unaff_RBP + 0x2b) = *puVar1;
      *(undefined8 *)(unaff_RBP + 0x2d) = uVar8;
      pfVar17 = (float *)(lVar24 + 0xc58 + lVar18);
      fVar38 = pfVar17[1];
      fVar34 = pfVar17[2];
      fVar35 = pfVar17[3];
      unaff_RBP[0x2f] = *pfVar17;
      unaff_RBP[0x30] = fVar38;
      unaff_RBP[0x31] = fVar34;
      unaff_RBP[0x32] = fVar35;
      uVar8 = *(undefined8 *)(lVar24 + lVar18 + 0xc28);
      uVar9 = *(undefined8 *)(lVar24 + lVar18 + 0xc30);
      lVar28 = lVar24 + lVar18;
      unaff_RBP[0x3f] = NAN;
      unaff_RBP[0x40] = NAN;
      unaff_RBP[0x41] = NAN;
      unaff_RBP[0x42] = NAN;
      *(undefined8 *)(unaff_RBP + 0x33) = uVar8;
      *(undefined8 *)(unaff_RBP + 0x35) = uVar9;
      fVar38 = *(float *)(lVar28 + 0xc3c);
      fVar34 = *(float *)(lVar28 + 0xc40);
      fVar35 = *(float *)(lVar28 + 0xc44);
      unaff_RBP[0x43] = *(float *)(lVar28 + 0xc38);
      unaff_RBP[0x44] = fVar38;
      unaff_RBP[0x45] = fVar34;
      unaff_RBP[0x46] = fVar35;
      if ((bVar10) || (cVar29 != '\0')) {
        lVar28 = *(longlong *)(unaff_RBP + -0x1a);
        if (lVar32 == 0) {
          lVar31 = 0;
        }
        else {
          lVar31 = (longlong)*(int *)(lVar32 + 0x10) * 0xa60 + lVar28;
        }
        FUN_1804f91b0(*(undefined8 *)(unaff_RBP + -0x18),unaff_RBP + 0x18,
                      *(undefined8 *)(unaff_RBP + -0x1e),lVar31,lVar30);
        fVar38 = unaff_RBP[0x25];
        if (unaff_RBP[0x25] <= fVar37) {
          fVar38 = fVar37;
        }
        if ((((*(char *)(lVar24 + 0xc18 + lVar18) != '\0') && (*(char *)(unaff_RBP + 0x4c) == '\0'))
            && (cVar13 != '\0')) && (bVar12)) {
          lVar30 = *(longlong *)(*(longlong *)(lVar32 + 0x658) + 0x208);
          lVar31 = *(longlong *)(lVar30 + 0x140);
          cVar13 = *(char *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar32 + 0x8f8) + 0x9f0) + 0xf8) + 0x88);
          lVar19 = (longlong)cVar13;
          iVar2 = *(int *)(lVar19 * 0x1b0 + 0x110 + lVar31);
          while ((iVar2 == -1 && (cVar13 = (char)lVar19, cVar13 != -1))) {
            cVar13 = *(char *)(lVar19 + 0x100 + lVar30);
            lVar19 = (longlong)cVar13;
            iVar2 = *(int *)(lVar19 * 0x1b0 + 0x110 + lVar31);
          }
          puVar23 = (uint *)((longlong)cVar13 * 0x100 +
                            *(longlong *)(*(longlong *)(lVar32 + 0x658) + 0x18));
          do {
            LOCK();
            uVar3 = *puVar23;
            *puVar23 = *puVar23 | 1;
            UNLOCK();
          } while ((uVar3 & 1) != 0);
          fVar37 = (float)puVar23[1];
          fVar34 = (float)puVar23[2];
          fVar35 = (float)puVar23[3];
          fVar36 = (float)puVar23[4];
          fVar15 = (float)puVar23[5];
          fVar16 = (float)puVar23[6];
          fVar22 = (float)puVar23[7];
          fVar7 = (float)puVar23[8];
          unaff_RBP[0x1b0] = fVar37;
          unaff_RBP[0x1b1] = fVar34;
          unaff_RBP[0x1b2] = fVar35;
          unaff_RBP[0x1b3] = fVar36;
          unaff_RBP[0x1b4] = fVar15;
          unaff_RBP[0x1b5] = fVar16;
          unaff_RBP[0x1b6] = fVar22;
          unaff_RBP[0x1b7] = fVar7;
          fVar27 = 0.0;
          unaff_RBP[0x168] = fVar37;
          unaff_RBP[0x169] = fVar34;
          unaff_RBP[0x16a] = fVar35;
          unaff_RBP[0x16b] = fVar36;
          *puVar23 = 0;
          lVar30 = *(longlong *)(lVar32 + 0x6d8);
          unaff_RBP[0x16c] = fVar15;
          unaff_RBP[0x16d] = fVar16;
          unaff_RBP[0x16e] = fVar22;
          unaff_RBP[0x16f] = fVar7;
          unaff_RBP[0x158] = fVar37;
          unaff_RBP[0x159] = fVar34;
          unaff_RBP[0x15a] = fVar35;
          unaff_RBP[0x15b] = fVar36;
          unaff_RBP[0x15c] = fVar15;
          unaff_RBP[0x15d] = fVar16;
          unaff_RBP[0x15e] = fVar22;
          unaff_RBP[0x15f] = fVar7;
          pfVar17 = (float *)FUN_180534930(*(longlong *)(lVar30 + 0x8a8) + 0x70,unaff_RBP + 0x178,
                                           lVar18 + 0xc28 + lVar24);
          unaff_RBP[-0xb] = 3.4028235e+38;
          fVar37 = pfVar17[1];
          fVar34 = pfVar17[2];
          unaff_RBP[-0xe] = *pfVar17 - fVar15;
          unaff_RBP[-0xd] = fVar37 - fVar16;
          unaff_RBP[-0xc] = fVar34 - fVar22;
          FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 0x154,unaff_RBP + -0xe);
          lVar30 = lVar24 + lVar18;
          unaff_RBP[-7] = 3.4028235e+38;
          fVar37 = *(float *)(lVar30 + 0xc3c);
          fVar34 = *(float *)(lVar30 + 0xc38);
          fVar35 = *(float *)(lVar32 + 0x520);
          fVar36 = *(float *)(lVar32 + 0x524);
          fVar15 = *(float *)(lVar32 + 0x530);
          fVar16 = *(float *)(lVar32 + 0x534);
          unaff_RBP[-8] = *(float *)(lVar30 + 0xc40);
          unaff_RBP[-10] = fVar37 * fVar36 + fVar34 * fVar35;
          unaff_RBP[-9] = fVar34 * fVar15 + fVar37 * fVar16;
          FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 8);
          iVar2 = *(int *)(lVar32 + 0x10);
          fVar37 = (float)(int)unaff_RBP[0x4a] * 0.3;
          if (-1.0 <= fVar37) {
            if (1.0 <= fVar37) {
              fVar37 = 1.0;
            }
          }
          else {
            fVar37 = -1.0;
          }
          unaff_RBP[-3] = 3.4028235e+38;
          unaff_RBP[0x50] = 2.8026e-45;
          fVar34 = unaff_RBP[-3];
          unaff_RBP[0x51] = -NAN;
          *(undefined2 *)(unaff_RBP + 0x5a) = 0xff;
          unaff_RBP[0x5b] = fVar27;
          unaff_RBP[-6] = fVar37 * unaff_RBP[8];
          unaff_RBP[-5] = fVar37 * unaff_RBP[9];
          unaff_RBP[-4] = fVar37 * unaff_RBP[10];
          unaff_RBP[-3] = fVar34;
          unaff_RBP[0x56] = fVar37 * unaff_RBP[8];
          unaff_RBP[0x57] = fVar37 * unaff_RBP[9];
          unaff_RBP[0x58] = fVar37 * unaff_RBP[10];
          unaff_RBP[0x59] = fVar34;
          unaff_RBP[0x52] = unaff_RBP[0x154];
          unaff_RBP[0x53] = unaff_RBP[0x155];
          unaff_RBP[0x54] = unaff_RBP[0x156];
          unaff_RBP[0x55] = unaff_RBP[0x157];
          FUN_1805a4590((longlong)iVar2 * 0xa60 + 0x28 + lVar28,unaff_RBP + 0x50);
        }
        if (unaff_RBP[-0x20] == 4.2039e-45) goto LAB_1805a205f;
        fVar37 = fVar38;
        if ((1 < (uint)unaff_RBP[-0x20]) ||
           (cVar13 = FUN_1805a15d0(in_stack_00000078), cVar13 != '\0')) goto LAB_1805a2073;
      }
      else {
        unaff_RBP[-0x20] = 4.2039e-45;
        fVar38 = fVar37;
LAB_1805a205f:
        fVar37 = _DAT_180c9645c;
        if (_DAT_180c9645c <= fVar38) {
          fVar37 = fVar38;
        }
LAB_1805a2073:
        cStack0000000000000070 = '\0';
        fVar38 = fVar37;
      }
      if (*(char *)(lVar24 + 0xc18 + lVar18) == '\0') {
        unaff_RBP[-0x1f] = 0.0;
        cStack0000000000000070 = '\0';
        lVar30 = lVar18 + 0xc28 + lVar24;
        FUN_1804f6570(*(undefined8 *)(unaff_RBP + -0x18),*(undefined8 *)(lVar24 + 0xc88 + lVar18),
                      lVar30,lVar18 + 0xc38 + lVar24,lVar18 + 0xc78 + lVar24);
        lVar28 = *(longlong *)(lVar24 + 0xc88 + lVar18);
        if (lVar28 != 0) {
          FUN_1804f8630(*(undefined8 *)(*(longlong *)(unaff_RBP + -0x1e) + 0x8d8),
                        *(undefined4 *)(*(longlong *)(unaff_RBP + -0x1e) + 0x10),lVar25,
                        *(undefined4 *)(lVar28 + 100),lVar30);
        }
      }
      else if ((bVar11) || (*(int *)(lVar24 + 0xc20 + lVar18) != 1)) {
        lVar30 = lVar18 + 0xc28 + lVar24;
      }
      else {
        lVar28 = (longlong)*(int *)(lVar32 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a);
        puVar23 = (uint *)((longlong)*(char *)(lVar24 + 0xca0 + lVar18) * 0x100 +
                          *(longlong *)(*(longlong *)(lVar28 + 0x658) + 0x18));
        do {
          LOCK();
          uVar3 = *puVar23;
          *puVar23 = *puVar23 | 1;
          UNLOCK();
        } while ((uVar3 & 1) != 0);
        fVar37 = (float)puVar23[1];
        fVar34 = (float)puVar23[2];
        fVar35 = (float)puVar23[3];
        fVar36 = (float)puVar23[4];
        fVar15 = (float)puVar23[5];
        fVar16 = (float)puVar23[6];
        fVar22 = (float)puVar23[7];
        fVar7 = (float)puVar23[8];
        unaff_RBP[0x1b8] = fVar37;
        unaff_RBP[0x1b9] = fVar34;
        unaff_RBP[0x1ba] = fVar35;
        unaff_RBP[0x1bb] = fVar36;
        unaff_RBP[0x1bc] = fVar15;
        unaff_RBP[0x1bd] = fVar16;
        unaff_RBP[0x1be] = fVar22;
        unaff_RBP[0x1bf] = fVar7;
        *puVar23 = 0;
        lVar31 = *(longlong *)(lVar28 + 0x6d8);
        lVar30 = lVar18 + 0xc28 + lVar24;
        unaff_RBP[0x170] = fVar37;
        unaff_RBP[0x171] = fVar34;
        unaff_RBP[0x172] = fVar35;
        unaff_RBP[0x173] = fVar36;
        unaff_RBP[0x174] = fVar15;
        unaff_RBP[0x175] = fVar16;
        unaff_RBP[0x176] = fVar22;
        unaff_RBP[0x177] = fVar7;
        unaff_RBP[0x160] = fVar37;
        unaff_RBP[0x161] = fVar34;
        unaff_RBP[0x162] = fVar35;
        unaff_RBP[0x163] = fVar36;
        lVar31 = *(longlong *)(lVar31 + 0x8a8);
        unaff_RBP[0x164] = fVar15;
        unaff_RBP[0x165] = fVar16;
        unaff_RBP[0x166] = fVar22;
        unaff_RBP[0x167] = fVar7;
        pfVar17 = (float *)FUN_180534930(lVar31 + 0x70,unaff_RBP + 0x17c,lVar30);
        unaff_RBP[1] = 3.4028235e+38;
        fVar37 = pfVar17[1];
        fVar34 = pfVar17[2];
        unaff_RBP[-2] = *pfVar17 - fVar15;
        unaff_RBP[-1] = fVar37 - fVar16;
        *unaff_RBP = fVar34 - fVar22;
        FUN_180285b40(unaff_RBP + 0x160,unaff_RBP + 0x14c,unaff_RBP + -2);
        FUN_1805ab940(*(undefined8 *)(*(longlong *)(unaff_RBP + -0x18) + 0x98d920),
                      *(undefined8 *)(unaff_RBP + -0x1e),lVar28,
                      *(undefined1 *)(lVar24 + 0xca0 + lVar18),unaff_RBP + 0x14c);
      }
      lVar28 = _DAT_180c8aa00;
      uVar3 = *(uint *)(lVar24 + 0xc20 + lVar18);
      if ((((1 < uVar3) && (lVar25 != 0)) && (0 < *(int *)(lVar25 + 0x30))) &&
         (((*(uint *)((longlong)*(int *)(lVar25 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar25 + 0xd0)
                     ) >> 9 & 1) == 0 || (0 < *(short *)(lVar25 + 8))))) {
        iVar2 = *(int *)(lVar25 + 0x34);
        lVar31 = *(longlong *)(lVar24 + 0xc88 + lVar18);
        fVar34 = -*(float *)(lVar24 + 0xc7c + lVar18);
        unaff_RBP[2] = -*(float *)(lVar24 + 0xc78 + lVar18);
        fVar37 = *(float *)(lVar24 + 0xc80 + lVar18);
        unaff_RBP[3] = fVar34;
        unaff_RBP[4] = -fVar37;
        unaff_RBP[5] = 3.4028235e+38;
        if (((uVar3 - 2 & 0xfffffffc) == 0) && (uVar3 != 3)) {
          if (lVar31 == 0) {
            if ((uVar3 != 2) && (lVar31 = *(longlong *)(lVar32 + 0x8f8), lVar31 != 0)) {
              if ((uVar3 == 5) ||
                 ((lVar19 = *(longlong *)(lVar31 + 0x9f0), lVar19 == 0 ||
                  ((*(uint *)((longlong)*(int *)(lVar19 + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(lVar19 + 0xd0)) >> 0x1c & 1) == 0)))) {
                lVar19 = *(longlong *)(lVar31 + 0x9e8);
              }
              if (lVar19 != 0) {
                iVar21 = *(int *)(lVar19 + 0x34);
                goto LAB_1805a23af;
              }
            }
          }
          else {
            iVar21 = *(int *)(lVar31 + 100);
LAB_1805a23af:
            if (iVar21 != -1) {
              lVar31 = *(longlong *)
                        (_DAT_180c91fe0 +
                        (longlong)
                        *(int *)((longlong)iVar2 * 0x68 + *(longlong *)(lVar28 + 0x38) + 100) * 8);
              iVar2 = *(int *)(lVar31 + (longlong)iVar21 * 0x28);
              if (iVar2 < 0) {
                iVar2 = *(int *)(lVar31 + (longlong)*(int *)(*(longlong *)(lVar28 + 0x28) + 100) *
                                          0x28);
              }
              if (iVar2 != -1) {
                FUN_1804eb8d0(*(undefined8 *)(unaff_RBP + -0x18),fVar34,lVar30,unaff_RBP + 2);
              }
            }
          }
        }
      }
      if ((*(byte *)(in_stack_00000078 + 4) & 1) != 0) {
        if (cStack0000000000000070 == '\0') {
          pfVar17 = unaff_RBP + 0x98;
          *(undefined1 *)(unaff_RBP + 0xaa) = 0;
          unaff_RBP[0x98] = -NAN;
          unaff_RBP[0x99] = -NAN;
          unaff_RBP[0x9c] = 0.0;
          unaff_RBP[0x9d] = 0.0;
          unaff_RBP[0x9e] = 0.0;
          unaff_RBP[0x9f] = 0.0;
          unaff_RBP[0x9a] = 0.0;
          unaff_RBP[0xad] = 0.0;
          unaff_RBP[0xae] = 0.0;
          unaff_RBP[0xaf] = 0.0;
          unaff_RBP[0xb0] = 0.0;
          unaff_RBP[0xa0] = 0.0;
          unaff_RBP[0xa1] = 0.0;
          unaff_RBP[0xb1] = 0.0;
          unaff_RBP[0xb2] = 0.0;
          unaff_RBP[0xb3] = 0.0;
          unaff_RBP[0xb4] = 0.0;
          unaff_RBP[0xa6] = 0.4;
          unaff_RBP[0xa7] = 0.0;
          unaff_RBP[0xa2] = 0.0;
          unaff_RBP[0xa3] = 1.0;
          unaff_RBP[0xa4] = -0.2;
          unaff_RBP[0xa5] = -0.2;
          *(undefined2 *)(unaff_RBP + 0xa8) = 0x100;
          unaff_RBP[0xab] = 1.26117e-44;
          unaff_RBP[0xac] = -NAN;
          unaff_RBP[0xb6] = -NAN;
          unaff_RBP[0xb7] = -NAN;
          *(undefined1 *)(unaff_RBP + 0xb8) = 0xff;
          unaff_RBP[0xb9] = 0.0;
          unaff_RBP[0xba] = 0.0;
          unaff_RBP[0xb5] = -NAN;
          unaff_RBP[0xbb] = 1.0;
          goto LAB_1805a2c65;
        }
        goto LAB_1805a2c79;
      }
      if (*(char *)(lVar24 + 0xcab + lVar18) == '\0') {
        if ((bVar6) || (iVar2 = *(int *)(lVar24 + 0xc20 + lVar18), iVar2 == 2)) {
          if ((((*(char *)(lVar24 + 0xca1 + lVar18) == *(char *)(unaff_R13 + 0xd8)) && (lVar25 != 0)
               ) && (0 < *(int *)(lVar25 + 0x30))) &&
             (((*(uint *)((longlong)*(int *)(lVar25 + 0xf0) * 0xa0 + 0x50 +
                         *(longlong *)(lVar25 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(lVar25 + 8))))) {
            lVar28 = *(longlong *)(unaff_RBP + -0x1e);
            pfVar17 = (float *)FUN_18051bd60(lVar28,unaff_RBP + 0x188,
                                             *(undefined1 *)(*(longlong *)(lVar25 + 0xf8) + 0x88),
                                             lVar30);
            fVar37 = *pfVar17;
            fVar34 = pfVar17[1];
            fVar35 = pfVar17[2];
            fVar36 = pfVar17[3];
            unaff_RBP[0x14] = fVar37;
            unaff_RBP[0x15] = fVar34;
            unaff_RBP[0x16] = fVar35;
            unaff_RBP[0x17] = fVar36;
          }
          else {
            lVar28 = *(longlong *)(unaff_RBP + -0x1e);
            unaff_RBP[0x14] = 0.0;
            unaff_RBP[0x15] = 0.0;
            unaff_RBP[0x16] = 0.0;
            unaff_RBP[0x17] = 0.0;
            fVar37 = unaff_RBP[0x14];
            fVar34 = unaff_RBP[0x15];
            fVar35 = unaff_RBP[0x16];
            fVar36 = unaff_RBP[0x17];
          }
          iVar2 = *(int *)(lVar24 + 0xc20 + lVar18);
          if (iVar2 == 2) {
            if ((uint)unaff_RBP[-0x20] < 2) {
              unaff_RBP[0x68] = 1.4013e-45;
              unaff_RBP[0x69] = -NAN;
              unaff_RBP[0x6a] = 0.0;
              unaff_RBP[0x6b] = 0.0;
              unaff_RBP[0x6c] = 0.0;
              unaff_RBP[0x6d] = 0.0;
              lVar30 = in_stack_00000078[3];
              unaff_RBP[0x6e] = 0.0;
              unaff_RBP[0x6f] = 0.0;
              unaff_RBP[0x70] = 0.0;
              unaff_RBP[0x71] = 0.0;
              *(undefined1 *)(unaff_RBP + 0x72) = 0xff;
              *(bool *)((longlong)unaff_RBP + 0x1c9) = (int)lVar30 == 1;
              unaff_RBP[0x73] = 0.0;
              FUN_1805a4590(0,unaff_RBP + 0x68);
            }
            else {
              iVar2 = *(int *)(*(longlong *)(lVar28 + 0x590) + 0x2498);
              if ((iVar2 != -1) &&
                 (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) == 0x14)) {
                pfVar5 = *(float **)(unaff_R13 + 600);
                pfVar17 = unaff_RBP + 0x104;
                *(undefined1 *)(unaff_RBP + 0x116) = 0;
                unaff_RBP[0x108] = 0.0;
                unaff_RBP[0x109] = 0.0;
                unaff_RBP[0x10a] = 0.0;
                unaff_RBP[0x10b] = 0.0;
                unaff_RBP[0x118] = *pfVar5;
                unaff_RBP[0x104] = -NAN;
                unaff_RBP[0x105] = -NAN;
                unaff_RBP[0x106] = 0.0;
                unaff_RBP[0x10c] = 0.0;
                unaff_RBP[0x10d] = 0.0;
                unaff_RBP[0x10e] = 0.0;
                unaff_RBP[0x10f] = 1.0;
                unaff_RBP[0x110] = -0.2;
                unaff_RBP[0x111] = -0.2;
                unaff_RBP[0x112] = 0.4;
                unaff_RBP[0x113] = 0.0;
                *(undefined2 *)(unaff_RBP + 0x114) = 0x100;
                unaff_RBP[0x117] = 1.12104e-44;
                unaff_RBP[0x119] = fVar37;
                unaff_RBP[0x11a] = fVar34;
                unaff_RBP[0x11b] = fVar35;
                unaff_RBP[0x11c] = fVar36;
                unaff_RBP[0x122] = -NAN;
                unaff_RBP[0x123] = -NAN;
                unaff_RBP[0x11d] = 0.0;
                unaff_RBP[0x11e] = 0.0;
                unaff_RBP[0x11f] = 0.0;
                unaff_RBP[0x120] = 0.0;
                *(undefined1 *)(unaff_RBP + 0x124) = 0xff;
                unaff_RBP[0x125] = 0.0;
                unaff_RBP[0x126] = 0.0;
                unaff_RBP[0x121] = -NAN;
                unaff_RBP[0x127] = 1.0;
                goto LAB_1805a2c65;
              }
            }
            goto LAB_1805a2c79;
          }
          fVar15 = *(float *)(lVar24 + 0xc98 + lVar18);
          if (bVar12) {
            if (iVar2 == 4) {
              fVar22 = *(float *)(lVar32 + 0x10);
              fVar16 = 1.4013e-44;
            }
            else {
              fVar22 = *(float *)(lVar32 + 0x10);
              fVar16 = 1.54143e-44;
              if (iVar2 == 3) {
                fVar16 = 1.26117e-44;
              }
            }
          }
          else {
            fVar16 = 1.12104e-44;
            fVar22 = -NAN;
          }
          unaff_RBP[0x13b] = fVar16;
          pfVar17 = *(float **)(unaff_R13 + 600);
          unaff_RBP[300] = 0.0;
          unaff_RBP[0x12d] = 0.0;
          unaff_RBP[0x12e] = 0.0;
          unaff_RBP[0x12f] = 0.0;
          unaff_RBP[0x12a] = 0.0;
          fVar16 = *pfVar17;
          unaff_RBP[0x130] = 0.0;
          unaff_RBP[0x131] = 0.0;
          unaff_RBP[0x14a] = 0.0;
          pfVar17 = unaff_RBP + 0x128;
          unaff_RBP[0x13c] = fVar16;
          unaff_RBP[0x149] = fVar15;
          *(undefined1 *)(unaff_RBP + 0x13a) = 0;
          unaff_RBP[0x128] = -NAN;
          unaff_RBP[0x129] = -NAN;
          unaff_RBP[0x132] = 0.0;
          unaff_RBP[0x133] = 1.0;
          unaff_RBP[0x134] = -0.2;
          unaff_RBP[0x135] = -0.2;
          unaff_RBP[0x136] = 0.4;
          unaff_RBP[0x137] = 0.0;
          *(undefined2 *)(unaff_RBP + 0x138) = 0x100;
          unaff_RBP[0x13d] = fVar37;
          unaff_RBP[0x13e] = fVar34;
          unaff_RBP[0x13f] = fVar35;
          unaff_RBP[0x140] = fVar36;
          unaff_RBP[0x147] = fVar22;
          unaff_RBP[0x141] = 0.0;
          unaff_RBP[0x142] = 0.0;
          unaff_RBP[0x143] = 0.0;
          unaff_RBP[0x144] = 0.0;
          *(undefined1 *)(unaff_RBP + 0x148) = 0xff;
          unaff_RBP[0x145] = -NAN;
          unaff_RBP[0x146] = -NAN;
          unaff_RBP[0x14b] = 1.0;
LAB_1805a2c65:
          uVar33 = 0;
LAB_1805a2c68:
          FUN_1805a4a20(uVar33,1,pfVar17);
        }
        else if (iVar2 == 1) {
          cVar13 = *(char *)(lVar24 + 0xca1 + lVar18);
          if ((int)unaff_RBP[-0x20] - 3U < 2) {
            iVar2 = *(int *)(*(longlong *)(*(longlong *)(unaff_RBP + -0x1e) + 0x590) + 0x2498);
            if ((iVar2 != -1) && (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) == 0x14))
            {
              if (((cVar13 == *(char *)(unaff_R13 + 0xd8)) &&
                  ((lVar25 != 0 && (0 < *(int *)(lVar25 + 0x30))))) &&
                 (((*(uint *)((longlong)*(int *)(lVar25 + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(lVar25 + 0xd0)) >> 9 & 1) == 0 ||
                  (0 < *(short *)(lVar25 + 8))))) {
                pfVar17 = (float *)FUN_18051bd60(*(longlong *)(unaff_RBP + -0x1e),unaff_RBP + 0x184,
                                                 *(undefined1 *)
                                                  (*(longlong *)(lVar25 + 0xf8) + 0x88),lVar30);
                fVar37 = *pfVar17;
                fVar34 = pfVar17[1];
                fVar35 = pfVar17[2];
                fVar36 = pfVar17[3];
                unaff_RBP[0x10] = fVar37;
                unaff_RBP[0x11] = fVar34;
                unaff_RBP[0x12] = fVar35;
                unaff_RBP[0x13] = fVar36;
              }
              else {
                unaff_RBP[0x10] = 0.0;
                unaff_RBP[0x11] = 0.0;
                unaff_RBP[0x12] = 0.0;
                unaff_RBP[0x13] = 0.0;
                fVar37 = unaff_RBP[0x10];
                fVar34 = unaff_RBP[0x11];
                fVar35 = unaff_RBP[0x12];
                fVar36 = unaff_RBP[0x13];
              }
              pfVar5 = *(float **)(unaff_R13 + 600);
              pfVar17 = unaff_RBP + 0xe0;
              *(undefined1 *)(unaff_RBP + 0xf2) = 0;
              unaff_RBP[0xe4] = 0.0;
              unaff_RBP[0xe5] = 0.0;
              unaff_RBP[0xe6] = 0.0;
              unaff_RBP[0xe7] = 0.0;
              fVar15 = *pfVar5;
              unaff_RBP[0xff] = *(float *)(lVar32 + 0x10);
              *(undefined1 *)(unaff_RBP + 0x100) = *(undefined1 *)(lVar24 + 0xca0 + lVar18);
              unaff_RBP[0xe0] = -NAN;
              unaff_RBP[0xe1] = -NAN;
              unaff_RBP[0xe2] = 0.0;
              unaff_RBP[0xe8] = 0.0;
              unaff_RBP[0xe9] = 0.0;
              unaff_RBP[0xea] = 0.0;
              unaff_RBP[0xeb] = 1.0;
              unaff_RBP[0xec] = -0.2;
              unaff_RBP[0xed] = -0.2;
              unaff_RBP[0xee] = 0.4;
              unaff_RBP[0xef] = 0.0;
              *(undefined2 *)(unaff_RBP + 0xf0) = 0x100;
              unaff_RBP[0xf3] = 1.12104e-44;
              unaff_RBP[0xf4] = fVar15;
              unaff_RBP[0xf5] = fVar37;
              unaff_RBP[0xf6] = fVar34;
              unaff_RBP[0xf7] = fVar35;
              unaff_RBP[0xf8] = fVar36;
              unaff_RBP[0x101] = 0.0;
              unaff_RBP[0x102] = 0.0;
              unaff_RBP[0xf9] = 0.0;
              unaff_RBP[0xfa] = 0.0;
              unaff_RBP[0xfb] = 0.0;
              unaff_RBP[0xfc] = 0.0;
              unaff_RBP[0xfd] = -NAN;
              unaff_RBP[0xfe] = -NAN;
              unaff_RBP[0x103] = 1.0;
              goto LAB_1805a2c65;
            }
          }
          else {
            if (unaff_RBP[-0x20] == 2.8026e-45) {
              if ((((cVar13 == *(char *)(unaff_R13 + 0xd8)) && (lVar25 != 0)) &&
                  (0 < *(int *)(lVar25 + 0x30))) &&
                 (((*(uint *)((longlong)*(int *)(lVar25 + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(lVar25 + 0xd0)) >> 9 & 1) == 0 ||
                  (0 < *(short *)(lVar25 + 8))))) {
                pfVar17 = (float *)FUN_18051bd60(*(undefined8 *)(unaff_RBP + -0x1e),
                                                 unaff_RBP + 0x180,
                                                 *(undefined1 *)
                                                  (*(longlong *)(lVar25 + 0xf8) + 0x88),lVar30);
                fVar37 = *pfVar17;
                fVar34 = pfVar17[1];
                fVar35 = pfVar17[2];
                fVar36 = pfVar17[3];
                pfVar17 = *(float **)(unaff_R13 + 600);
                unaff_RBP[0xc] = fVar37;
                unaff_RBP[0xd] = fVar34;
                unaff_RBP[0xe] = fVar35;
                unaff_RBP[0xf] = fVar36;
                if (pfVar17 != (float *)0x0) goto LAB_1805a271b;
                fVar15 = -NAN;
              }
              else {
                unaff_RBP[0xc] = 0.0;
                unaff_RBP[0xd] = 0.0;
                unaff_RBP[0xe] = 0.0;
                unaff_RBP[0xf] = 0.0;
                pfVar17 = *(float **)(unaff_R13 + 600);
                fVar37 = unaff_RBP[0xc];
                fVar34 = unaff_RBP[0xd];
                fVar35 = unaff_RBP[0xe];
                fVar36 = unaff_RBP[0xf];
LAB_1805a271b:
                fVar15 = *pfVar17;
              }
              pfVar17 = unaff_RBP + 0xbc;
              unaff_RBP[0xd0] = fVar15;
              fVar15 = *(float *)(lVar32 + 0x10);
              unaff_RBP[0xc0] = 0.0;
              unaff_RBP[0xc1] = 0.0;
              unaff_RBP[0xc2] = 0.0;
              unaff_RBP[0xc3] = 0.0;
              unaff_RBP[0xdb] = fVar15;
              uVar20 = *(undefined1 *)(lVar24 + 0xca0 + lVar18);
              unaff_RBP[0xd5] = 0.0;
              unaff_RBP[0xd6] = 0.0;
              unaff_RBP[0xd7] = 0.0;
              unaff_RBP[0xd8] = 0.0;
              *(undefined1 *)(unaff_RBP + 0xdc) = uVar20;
              *(undefined1 *)(unaff_RBP + 0xce) = 0;
              unaff_RBP[0xbc] = -NAN;
              unaff_RBP[0xbd] = -NAN;
              unaff_RBP[0xbe] = 0.0;
              unaff_RBP[0xc4] = 0.0;
              unaff_RBP[0xc5] = 0.0;
              unaff_RBP[0xc6] = 0.0;
              unaff_RBP[199] = 1.0;
              unaff_RBP[200] = -0.2;
              unaff_RBP[0xc9] = -0.2;
              unaff_RBP[0xca] = 0.4;
              unaff_RBP[0xcb] = 0.0;
              *(undefined2 *)(unaff_RBP + 0xcc) = 0x100;
              unaff_RBP[0xcf] = 1.96182e-44;
              unaff_RBP[0xd1] = fVar37;
              unaff_RBP[0xd2] = fVar34;
              unaff_RBP[0xd3] = fVar35;
              unaff_RBP[0xd4] = fVar36;
              unaff_RBP[0xdd] = 0.5;
              unaff_RBP[0xde] = 0.0;
              unaff_RBP[0xd9] = -NAN;
              unaff_RBP[0xda] = -NAN;
              unaff_RBP[0xdf] = 1.0;
              goto LAB_1805a2c65;
            }
            unaff_RBP[0x5c] = 1.4013e-45;
            unaff_RBP[0x5d] = -NAN;
            unaff_RBP[0x5e] = 0.0;
            unaff_RBP[0x5f] = 0.0;
            unaff_RBP[0x60] = 0.0;
            unaff_RBP[0x61] = 0.0;
            lVar30 = in_stack_00000078[3];
            unaff_RBP[0x62] = 0.0;
            unaff_RBP[99] = 0.0;
            unaff_RBP[100] = 0.0;
            unaff_RBP[0x65] = 0.0;
            *(undefined1 *)(unaff_RBP + 0x66) = 0xff;
            *(bool *)((longlong)unaff_RBP + 0x199) = (int)lVar30 == 1;
            unaff_RBP[0x67] = 0.0;
            FUN_1805a4590(0,unaff_RBP + 0x5c);
          }
        }
      }
      else {
        lVar31 = (longlong)*(int *)(lVar32 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a);
        lVar28 = *(longlong *)(*(longlong *)(lVar31 + 0x8f8) + 0x9e8);
        if (lVar28 != 0) {
          if (*(int *)(lVar28 + 0x30) < 1) {
            bVar6 = false;
          }
          else if (((*(uint *)((longlong)*(int *)(lVar28 + 0xf0) * 0xa0 + 0x50 +
                              *(longlong *)(lVar28 + 0xd0)) >> 9 & 1) == 0) ||
                  (0 < *(short *)(lVar28 + 8))) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_18051bd60(lVar31,unaff_RBP + 0x150,
                          *(undefined1 *)(*(longlong *)(lVar28 + 0xf8) + 0x88),lVar30);
            uVar20 = *(undefined1 *)(unaff_R13 + 0xd8);
            if (*(float **)(lVar31 + 0x288) == (float *)0x0) {
              fVar37 = -NAN;
            }
            else {
              fVar37 = **(float **)(lVar31 + 0x288);
            }
            unaff_RBP[0x93] = *(float *)(*(longlong *)(unaff_RBP + -0x1e) + 0x10);
            *(undefined1 *)(unaff_RBP + 0x86) = 0;
            unaff_RBP[0x78] = 0.0;
            unaff_RBP[0x79] = 0.0;
            unaff_RBP[0x7a] = 0.0;
            unaff_RBP[0x7b] = 0.0;
            unaff_RBP[0x80] = -0.2;
            unaff_RBP[0x81] = -0.2;
            unaff_RBP[0x82] = 0.4;
            unaff_RBP[0x83] = 0.0;
            unaff_RBP[0x74] = -NAN;
            unaff_RBP[0x75] = -NAN;
            unaff_RBP[0x76] = 0.0;
            unaff_RBP[0x89] = unaff_RBP[0x150];
            unaff_RBP[0x8a] = unaff_RBP[0x151];
            unaff_RBP[0x8b] = unaff_RBP[0x152];
            unaff_RBP[0x8c] = unaff_RBP[0x153];
            unaff_RBP[0x7c] = 0.0;
            unaff_RBP[0x7d] = 0.0;
            unaff_RBP[0x7e] = 0.0;
            unaff_RBP[0x7f] = 1.0;
            *(undefined2 *)(unaff_RBP + 0x84) = 0x100;
            unaff_RBP[0x87] = 1.82169e-44;
            unaff_RBP[0x88] = fVar37;
            unaff_RBP[0x8d] = 0.0;
            unaff_RBP[0x8e] = 0.0;
            unaff_RBP[0x8f] = 0.0;
            unaff_RBP[0x90] = 0.0;
            *(undefined1 *)(unaff_RBP + 0x94) = uVar20;
            unaff_RBP[0x95] = 0.0;
            unaff_RBP[0x96] = 0.0;
            unaff_RBP[0x91] = -NAN;
            unaff_RBP[0x92] = -NAN;
            unaff_RBP[0x97] = 1.0;
            pfVar17 = (float *)func_0x00018055f040(unaff_RBP + 0x18c,unaff_RBP + 0x74);
            uVar33 = extraout_XMM0_Da;
            goto LAB_1805a2c68;
          }
        }
      }
LAB_1805a2c79:
      cVar13 = *(char *)(lVar24 + 0xca9 + lVar18);
      if (((cVar13 == '\0') && (2 < *(int *)(lVar24 + 0xc20 + lVar18) - 3U)) &&
         (*(char *)(lVar24 + 0xca2 + lVar18) < '\0')) {
        unaff_R14 = *(longlong *)(unaff_RBP + -0x1e);
      }
      else {
        unaff_R14 = *(longlong *)(unaff_RBP + -0x1e);
        FUN_1805253f0((longlong)*(int *)(lVar32 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a),
                      unaff_RBP + 0x18,cVar13,*(undefined1 *)(lVar24 + 0xca2 + lVar18),
                      (int)in_stack_00000078[1]);
      }
      uVar26 = 0;
      lVar24 = *(longlong *)(unaff_RBP + -0x12) + 1;
      unaff_RDI = *(longlong **)(unaff_RBP + -0x10);
      *(longlong *)(unaff_RBP + -0x12) = lVar24;
      unaff_R12 = in_stack_00000078;
    } while (lVar24 < *(longlong *)(unaff_RBP + 6));
  }
  fVar37 = unaff_RBP[-0x1f];
  *(float *)(unaff_R13 + 0x44) = fVar37;
  FUN_1805a0af0(fVar37,fVar38,CONCAT71(uVar26,1));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1c0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






