#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part041_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805a1900(longlong param_1)
void FUN_1805a1900(longlong param_1)

{
  uint64_t *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  bool bVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  longlong lVar20;
  int8_t uVar21;
  int iVar22;
  float fVar23;
  uint *puVar24;
  longlong unaff_RBX;
  longlong lVar25;
  float *unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar26;
  longlong lVar27;
  char cVar28;
  longlong *unaff_R12;
  longlong lVar29;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar30;
  longlong lVar31;
  float fVar32;
  int32_t extraout_XMM0_Da;
  int32_t uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  char in_stack_00000070;
  longlong *in_stack_00000078;
  
code_r0x0001805a1900:
  cVar15 = FUN_1805a3ab0(param_1 + 0x28);
  if (cVar15 == '\0') {
LAB_1805a186c:
    unaff_XMM7_Da = 0.0;
    unaff_RBP[-0x1f] = 0.0;
LAB_1805a1876:
    fVar35 = unaff_RBP[-0x1f];
    *(float *)(unaff_R13 + 0x44) = fVar35;
    FUN_1805a0af0(fVar35,unaff_XMM7_Da,1);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1c0) ^ (ulonglong)&stack0x00000000);
  }
  do {
    lVar5 = *unaff_RDI;
    lVar25 = unaff_RBX * 0xcb0;
    fVar35 = *(float *)(lVar25 + 0xc94 + lVar5);
    if (fVar35 <= unaff_XMM7_Da) {
      fVar35 = unaff_XMM7_Da;
    }
    cVar15 = *(char *)(lVar25 + 0xc18 + lVar5);
    bVar8 = *(int *)(lVar25 + 0xc20 + lVar5) - 3U < 3;
    if (cVar15 == '\0') {
      lVar31 = 0;
    }
    else {
      lVar31 = *(longlong *)(lVar25 + 0xc08 + lVar5);
    }
    if (*(char *)((longlong)unaff_R12 + 0x21) == '\x02') {
      if (lVar31 != 0) {
        lVar29 = *(longlong *)(*(longlong *)(unaff_R13 + 0x108) + 0x20);
        lVar27 = *(longlong *)(lVar31 + 0x20);
        fVar36 = *(float *)(lVar29 + 0x24) - *(float *)(lVar27 + 0x24);
        fVar34 = *(float *)(lVar29 + 0x28) - *(float *)(lVar27 + 0x28);
        fVar32 = *(float *)(lVar29 + 0x2c) - *(float *)(lVar27 + 0x2c);
        if (_DAT_180c96500 * _DAT_180c96500 <= fVar36 * fVar36 + fVar34 * fVar34 + fVar32 * fVar32)
        goto LAB_1805a19c5;
      }
LAB_1805a19d0:
      unaff_RBP[-0x1f] = 0.0;
      cVar15 = *(char *)(lVar25 + 0xc18 + lVar5);
    }
    else {
LAB_1805a19c5:
      if ((bVar8) && (*(char *)((longlong)unaff_R12 + 0x21) == '\x01')) goto LAB_1805a19d0;
    }
    if ((cVar15 == '\0') && ((*(byte *)(unaff_R12 + 4) & 1) == 0)) {
      func_0x0001805d7910(*(uint64_t *)(unaff_R14 + 0x6e0),*(int32_t *)(unaff_R13 + 0x48),
                          *(uint64_t *)(lVar25 + lVar5));
    }
    if (lVar31 == 0) {
LAB_1805a1a1f:
      bVar13 = false;
    }
    else {
      cVar15 = FUN_18052da10(lVar31);
      bVar13 = true;
      if (cVar15 == '\0') goto LAB_1805a1a1f;
    }
    if ((lVar31 == 0) || (cVar15 = func_0x00018052da70(lVar31), cVar15 == '\0')) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    unaff_RBP[-0x20] = -NAN;
    unaff_RBP[-0x16] = -NAN;
    unaff_RBP[-0x15] = -NAN;
    unaff_RBP[-0x14] = -NAN;
    if ((((((*(int *)(lVar25 + 0xc20 + lVar5) == 5) || (!bVar8)) || (lVar31 == 0)) ||
         ((lVar29 = *(longlong *)(*(longlong *)(lVar31 + 0x8f8) + 0x9f0), lVar29 == 0 ||
          (*(int *)(lVar29 + 0x30) < 1)))) ||
        ((uVar6 = *(ulonglong *)
                   ((longlong)*(int *)(lVar29 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar29 + 0xd0)),
         (uVar6 >> 9 & 1) != 0 && (*(short *)(lVar29 + 8) < 1)))) || ((uVar6 >> 0x1c & 1) == 0)) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x01';
    }
    cVar16 = *(char *)(lVar25 + 0xc18 + lVar5);
    if ((bVar14) || (cVar16 == '\0')) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (((cVar16 == '\0') && (*(longlong *)(lVar25 + lVar5) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar25 + lVar5) + 0x10) != 0)) {
      cVar28 = '\x01';
    }
    else {
      cVar28 = '\0';
    }
    if ((bVar8) && (*(char *)(lVar25 + 0xca9 + lVar5) == '\0')) {
      unaff_RBP[-0x1f] = *(float *)(lVar25 + 0xc9c + lVar5);
      cVar16 = *(char *)(lVar25 + 0xc18 + lVar5);
    }
    if ((cVar16 == '\0') && (*(longlong *)(lVar25 + lVar5) != 0)) {
      lVar29 = *(longlong *)(*(longlong *)(lVar25 + lVar5) + 0x10);
LAB_1805a1b3a:
      lVar27 = *(longlong *)(lVar25 + 0xc10 + lVar5);
      if (lVar27 == 0) goto LAB_1805a1b4d;
      fVar32 = *(float *)(lVar27 + 100);
    }
    else {
      lVar29 = 0;
      if (cVar16 == '\0') goto LAB_1805a1b3a;
LAB_1805a1b4d:
      fVar32 = -NAN;
    }
    cVar16 = *(char *)(lVar25 + 0xca0 + lVar5);
    if (cVar16 == -1) {
      uVar21 = 0xff;
    }
    else {
      uVar21 = *(int8_t *)
                (*(longlong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar31 + 0x6d8) + 0x8a8) + 0x260) +
                    0x208) + 0x140) + 0x104 + (longlong)cVar16 * 0x1b0);
    }
    func_0x0001805345e0(unaff_RBP + 0x18);
    lVar27 = *(longlong *)(unaff_RBP + -0x10);
    unaff_RBP[0x37] = NAN;
    unaff_RBP[0x38] = NAN;
    unaff_RBP[0x39] = NAN;
    unaff_RBP[0x3a] = NAN;
    *(int16_t *)((longlong)unaff_RBP + 0x65) = 0;
    unaff_RBP[0x3b] = NAN;
    unaff_RBP[0x3c] = NAN;
    unaff_RBP[0x3d] = NAN;
    unaff_RBP[0x3e] = NAN;
    *(int8_t *)((longlong)unaff_RBP + 0x67) = 0;
    fVar34 = *(float *)(lVar27 + 0x30);
    *(int16_t *)((longlong)unaff_RBP + 0x6a) = 0;
    unaff_RBP[0x27] = -NAN;
    unaff_RBP[0x28] = -NAN;
    unaff_RBP[0x29] = -NAN;
    unaff_RBP[0x2a] = -NAN;
    *(char *)(unaff_RBP + 0x18) = cVar15;
    *(int8_t *)((longlong)unaff_RBP + 0x61) = *(int8_t *)(lVar25 + 0xcaa + lVar5);
    *(int8_t *)((longlong)unaff_RBP + 0x62) = *(int8_t *)(unaff_R13 + 0x56);
    *(int8_t *)((longlong)unaff_RBP + 99) = *(int8_t *)(lVar25 + 0xc18 + lVar5);
    *(byte *)(unaff_RBP + 0x19) = (byte)~*(byte *)(lVar25 + 0xca2 + lVar5) >> 7;
    *(bool *)(unaff_RBP + 0x1a) = lVar29 != 0;
    *(int8_t *)((longlong)unaff_RBP + 0x69) = *(int8_t *)(lVar25 + 0xca8 + lVar5);
    unaff_RBP[0x21] = fVar32;
    *(int8_t *)(unaff_RBP + 0x22) = *(int8_t *)(lVar25 + 0xc24 + lVar5);
    unaff_RBP[0x1b] = *(float *)(lVar25 + 0xc20 + lVar5);
    unaff_RBP[0x1c] = *(float *)(lVar27 + 0x28);
    unaff_RBP[0x1d] = *(float *)(lVar27 + 0x38);
    unaff_RBP[0x1e] = unaff_RBP[-0x1c];
    *(int8_t *)(unaff_RBP + 0x1f) = *(int8_t *)(lVar25 + 0xca0 + lVar5);
    *(int8_t *)((longlong)unaff_RBP + 0x7d) = uVar21;
    *(int8_t *)((longlong)unaff_RBP + 0x7e) = *(int8_t *)(lVar25 + 0xca1 + lVar5);
    unaff_RBP[0x20] = *(float *)(unaff_R13 + 0x48);
    unaff_RBP[0x23] = fVar34;
    unaff_RBP[0x24] = *(float *)(lVar25 + 0xc90 + lVar5);
    unaff_RBP[0x25] = *(float *)(lVar25 + 0xc94 + lVar5);
    unaff_RBP[0x26] = *(float *)(lVar25 + 0xc98 + lVar5);
    puVar1 = (uint64_t *)(lVar25 + 0xc48 + lVar5);
    uVar10 = puVar1[1];
    *(uint64_t *)(unaff_RBP + 0x2b) = *puVar1;
    *(uint64_t *)(unaff_RBP + 0x2d) = uVar10;
    pfVar19 = (float *)(lVar25 + 0xc58 + lVar5);
    fVar32 = pfVar19[1];
    fVar34 = pfVar19[2];
    fVar36 = pfVar19[3];
    unaff_RBP[0x2f] = *pfVar19;
    unaff_RBP[0x30] = fVar32;
    unaff_RBP[0x31] = fVar34;
    unaff_RBP[0x32] = fVar36;
    uVar10 = *(uint64_t *)(lVar25 + lVar5 + 0xc28);
    uVar11 = *(uint64_t *)(lVar25 + lVar5 + 0xc30);
    lVar27 = lVar25 + lVar5;
    unaff_RBP[0x3f] = NAN;
    unaff_RBP[0x40] = NAN;
    unaff_RBP[0x41] = NAN;
    unaff_RBP[0x42] = NAN;
    *(uint64_t *)(unaff_RBP + 0x33) = uVar10;
    *(uint64_t *)(unaff_RBP + 0x35) = uVar11;
    fVar32 = *(float *)(lVar27 + 0xc3c);
    fVar34 = *(float *)(lVar27 + 0xc40);
    fVar36 = *(float *)(lVar27 + 0xc44);
    unaff_RBP[0x43] = *(float *)(lVar27 + 0xc38);
    unaff_RBP[0x44] = fVar32;
    unaff_RBP[0x45] = fVar34;
    unaff_RBP[0x46] = fVar36;
    if ((bVar12) || (cVar28 != '\0')) {
      lVar27 = *(longlong *)(unaff_RBP + -0x1a);
      if (lVar31 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = (longlong)*(int *)(lVar31 + 0x10) * 0xa60 + lVar27;
      }
      FUN_1804f91b0(*(uint64_t *)(unaff_RBP + -0x18),unaff_RBP + 0x18,
                    *(uint64_t *)(unaff_RBP + -0x1e),lVar30,lVar29);
      unaff_XMM7_Da = unaff_RBP[0x25];
      if (unaff_RBP[0x25] <= fVar35) {
        unaff_XMM7_Da = fVar35;
      }
      if ((((*(char *)(lVar25 + 0xc18 + lVar5) != '\0') && (*(char *)(unaff_RBP + 0x4c) == '\0')) &&
          (cVar15 != '\0')) && (bVar13)) {
        lVar29 = *(longlong *)(*(longlong *)(lVar31 + 0x658) + 0x208);
        lVar30 = *(longlong *)(lVar29 + 0x140);
        cVar15 = *(char *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar31 + 0x8f8) + 0x9f0) + 0xf8) + 0x88);
        lVar20 = (longlong)cVar15;
        iVar4 = *(int *)(lVar20 * 0x1b0 + 0x110 + lVar30);
        while ((iVar4 == -1 && (cVar15 = (char)lVar20, cVar15 != -1))) {
          cVar15 = *(char *)(lVar20 + 0x100 + lVar29);
          lVar20 = (longlong)cVar15;
          iVar4 = *(int *)(lVar20 * 0x1b0 + 0x110 + lVar30);
        }
        puVar24 = (uint *)((longlong)cVar15 * 0x100 +
                          *(longlong *)(*(longlong *)(lVar31 + 0x658) + 0x18));
        do {
          LOCK();
          uVar3 = *puVar24;
          *puVar24 = *puVar24 | 1;
          UNLOCK();
        } while ((uVar3 & 1) != 0);
        fVar35 = (float)puVar24[1];
        fVar32 = (float)puVar24[2];
        fVar34 = (float)puVar24[3];
        fVar36 = (float)puVar24[4];
        fVar17 = (float)puVar24[5];
        fVar18 = (float)puVar24[6];
        fVar23 = (float)puVar24[7];
        fVar9 = (float)puVar24[8];
        unaff_RBP[0x1b0] = fVar35;
        unaff_RBP[0x1b1] = fVar32;
        unaff_RBP[0x1b2] = fVar34;
        unaff_RBP[0x1b3] = fVar36;
        unaff_RBP[0x1b4] = fVar17;
        unaff_RBP[0x1b5] = fVar18;
        unaff_RBP[0x1b6] = fVar23;
        unaff_RBP[0x1b7] = fVar9;
        fVar26 = 0.0;
        unaff_RBP[0x168] = fVar35;
        unaff_RBP[0x169] = fVar32;
        unaff_RBP[0x16a] = fVar34;
        unaff_RBP[0x16b] = fVar36;
        *puVar24 = 0;
        lVar29 = *(longlong *)(lVar31 + 0x6d8);
        unaff_RBP[0x16c] = fVar17;
        unaff_RBP[0x16d] = fVar18;
        unaff_RBP[0x16e] = fVar23;
        unaff_RBP[0x16f] = fVar9;
        unaff_RBP[0x158] = fVar35;
        unaff_RBP[0x159] = fVar32;
        unaff_RBP[0x15a] = fVar34;
        unaff_RBP[0x15b] = fVar36;
        unaff_RBP[0x15c] = fVar17;
        unaff_RBP[0x15d] = fVar18;
        unaff_RBP[0x15e] = fVar23;
        unaff_RBP[0x15f] = fVar9;
        pfVar19 = (float *)FUN_180534930(*(longlong *)(lVar29 + 0x8a8) + 0x70,unaff_RBP + 0x178,
                                         lVar5 + 0xc28 + lVar25);
        unaff_RBP[-0xb] = 3.4028235e+38;
        fVar35 = pfVar19[1];
        fVar32 = pfVar19[2];
        unaff_RBP[-0xe] = *pfVar19 - fVar17;
        unaff_RBP[-0xd] = fVar35 - fVar18;
        unaff_RBP[-0xc] = fVar32 - fVar23;
        FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 0x154,unaff_RBP + -0xe);
        lVar29 = lVar25 + lVar5;
        unaff_RBP[-7] = 3.4028235e+38;
        fVar35 = *(float *)(lVar29 + 0xc3c);
        fVar32 = *(float *)(lVar29 + 0xc38);
        fVar34 = *(float *)(lVar31 + 0x520);
        fVar36 = *(float *)(lVar31 + 0x524);
        fVar17 = *(float *)(lVar31 + 0x530);
        fVar18 = *(float *)(lVar31 + 0x534);
        unaff_RBP[-8] = *(float *)(lVar29 + 0xc40);
        unaff_RBP[-10] = fVar35 * fVar36 + fVar32 * fVar34;
        unaff_RBP[-9] = fVar32 * fVar17 + fVar35 * fVar18;
        FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 8);
        iVar4 = *(int *)(lVar31 + 0x10);
        fVar32 = (float)(int)unaff_RBP[0x4a] * unaff_XMM11_Da;
        fVar35 = unaff_XMM9_Da;
        if ((unaff_XMM9_Da <= fVar32) && (fVar35 = fVar32, unaff_XMM10_Da <= fVar32)) {
          fVar35 = unaff_XMM10_Da;
        }
        unaff_RBP[-3] = 3.4028235e+38;
        unaff_RBP[0x50] = 2.8026e-45;
        fVar32 = unaff_RBP[-3];
        unaff_RBP[0x51] = -NAN;
        *(int16_t *)(unaff_RBP + 0x5a) = 0xff;
        unaff_RBP[0x5b] = fVar26;
        unaff_RBP[-6] = fVar35 * unaff_RBP[8];
        unaff_RBP[-5] = fVar35 * unaff_RBP[9];
        unaff_RBP[-4] = fVar35 * unaff_RBP[10];
        unaff_RBP[-3] = fVar32;
        unaff_RBP[0x56] = fVar35 * unaff_RBP[8];
        unaff_RBP[0x57] = fVar35 * unaff_RBP[9];
        unaff_RBP[0x58] = fVar35 * unaff_RBP[10];
        unaff_RBP[0x59] = fVar32;
        unaff_RBP[0x52] = unaff_RBP[0x154];
        unaff_RBP[0x53] = unaff_RBP[0x155];
        unaff_RBP[0x54] = unaff_RBP[0x156];
        unaff_RBP[0x55] = unaff_RBP[0x157];
        FUN_1805a4590((longlong)iVar4 * 0xa60 + 0x28 + lVar27,unaff_RBP + 0x50);
      }
      if (unaff_RBP[-0x20] == 4.2039e-45) goto LAB_1805a205f;
      fVar35 = unaff_XMM7_Da;
      if ((1 < (uint)unaff_RBP[-0x20]) ||
         (cVar15 = FUN_1805a15d0(in_stack_00000078), cVar15 != '\0')) goto LAB_1805a2073;
    }
    else {
      unaff_RBP[-0x20] = 4.2039e-45;
      unaff_XMM7_Da = fVar35;
LAB_1805a205f:
      fVar35 = _DAT_180c9645c;
      if (_DAT_180c9645c <= unaff_XMM7_Da) {
        fVar35 = unaff_XMM7_Da;
      }
LAB_1805a2073:
      in_stack_00000070 = '\0';
      unaff_XMM7_Da = fVar35;
    }
    if (*(char *)(lVar25 + 0xc18 + lVar5) == '\0') {
      unaff_RBP[-0x1f] = 0.0;
      in_stack_00000070 = '\0';
      lVar29 = lVar5 + 0xc28 + lVar25;
      FUN_1804f6570(*(uint64_t *)(unaff_RBP + -0x18),*(uint64_t *)(lVar25 + 0xc88 + lVar5),
                    lVar29,lVar5 + 0xc38 + lVar25,lVar5 + 0xc78 + lVar25);
      if (*(longlong *)(lVar25 + 0xc88 + lVar5) != 0) {
        FUN_1804f8630(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x1e) + 0x8d8),
                      *(int32_t *)(*(longlong *)(unaff_RBP + -0x1e) + 0x10));
      }
    }
    else if ((bVar14) || (*(int *)(lVar25 + 0xc20 + lVar5) != 1)) {
      lVar29 = lVar5 + 0xc28 + lVar25;
    }
    else {
      lVar27 = (longlong)*(int *)(lVar31 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a);
      puVar24 = (uint *)((longlong)*(char *)(lVar25 + 0xca0 + lVar5) * 0x100 +
                        *(longlong *)(*(longlong *)(lVar27 + 0x658) + 0x18));
      do {
        LOCK();
        uVar3 = *puVar24;
        *puVar24 = *puVar24 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      fVar35 = (float)puVar24[1];
      fVar32 = (float)puVar24[2];
      fVar34 = (float)puVar24[3];
      fVar36 = (float)puVar24[4];
      fVar17 = (float)puVar24[5];
      fVar18 = (float)puVar24[6];
      fVar23 = (float)puVar24[7];
      fVar9 = (float)puVar24[8];
      unaff_RBP[0x1b8] = fVar35;
      unaff_RBP[0x1b9] = fVar32;
      unaff_RBP[0x1ba] = fVar34;
      unaff_RBP[0x1bb] = fVar36;
      unaff_RBP[0x1bc] = fVar17;
      unaff_RBP[0x1bd] = fVar18;
      unaff_RBP[0x1be] = fVar23;
      unaff_RBP[0x1bf] = fVar9;
      *puVar24 = 0;
      lVar30 = *(longlong *)(lVar27 + 0x6d8);
      lVar29 = lVar5 + 0xc28 + lVar25;
      unaff_RBP[0x170] = fVar35;
      unaff_RBP[0x171] = fVar32;
      unaff_RBP[0x172] = fVar34;
      unaff_RBP[0x173] = fVar36;
      unaff_RBP[0x174] = fVar17;
      unaff_RBP[0x175] = fVar18;
      unaff_RBP[0x176] = fVar23;
      unaff_RBP[0x177] = fVar9;
      unaff_RBP[0x160] = fVar35;
      unaff_RBP[0x161] = fVar32;
      unaff_RBP[0x162] = fVar34;
      unaff_RBP[0x163] = fVar36;
      lVar30 = *(longlong *)(lVar30 + 0x8a8);
      unaff_RBP[0x164] = fVar17;
      unaff_RBP[0x165] = fVar18;
      unaff_RBP[0x166] = fVar23;
      unaff_RBP[0x167] = fVar9;
      pfVar19 = (float *)FUN_180534930(lVar30 + 0x70,unaff_RBP + 0x17c,lVar29);
      unaff_RBP[1] = 3.4028235e+38;
      fVar35 = pfVar19[1];
      fVar32 = pfVar19[2];
      unaff_RBP[-2] = *pfVar19 - fVar17;
      unaff_RBP[-1] = fVar35 - fVar18;
      *unaff_RBP = fVar32 - fVar23;
      FUN_180285b40(unaff_RBP + 0x160,unaff_RBP + 0x14c,unaff_RBP + -2);
      FUN_1805ab940(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x18) + 0x98d920),
                    *(uint64_t *)(unaff_RBP + -0x1e),lVar27,
                    *(int8_t *)(lVar25 + 0xca0 + lVar5),unaff_RBP + 0x14c);
    }
    lVar27 = _DAT_180c8aa00;
    uVar3 = *(uint *)(lVar25 + 0xc20 + lVar5);
    if ((((1 < uVar3) && (unaff_RSI != 0)) && (0 < *(int *)(unaff_RSI + 0x30))) &&
       (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                   *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
        (0 < *(short *)(unaff_RSI + 8))))) {
      iVar4 = *(int *)(unaff_RSI + 0x34);
      lVar30 = *(longlong *)(lVar25 + 0xc88 + lVar5);
      fVar35 = (float)(*(uint *)(lVar25 + 0xc7c + lVar5) ^ unaff_XMM8_Da);
      unaff_RBP[2] = (float)(*(uint *)(lVar25 + 0xc78 + lVar5) ^ unaff_XMM8_Da);
      uVar2 = *(uint *)(lVar25 + 0xc80 + lVar5);
      unaff_RBP[3] = fVar35;
      unaff_RBP[4] = (float)(uVar2 ^ unaff_XMM8_Da);
      unaff_RBP[5] = 3.4028235e+38;
      if (((uVar3 - 2 & 0xfffffffc) == 0) && (uVar3 != 3)) {
        if (lVar30 == 0) {
          if ((uVar3 != 2) && (lVar30 = *(longlong *)(lVar31 + 0x8f8), lVar30 != 0)) {
            if ((uVar3 == 5) ||
               ((lVar20 = *(longlong *)(lVar30 + 0x9f0), lVar20 == 0 ||
                ((*(uint *)((longlong)*(int *)(lVar20 + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(lVar20 + 0xd0)) >> 0x1c & 1) == 0)))) {
              lVar20 = *(longlong *)(lVar30 + 0x9e8);
            }
            if (lVar20 != 0) {
              iVar22 = *(int *)(lVar20 + 0x34);
              goto LAB_1805a23af;
            }
          }
        }
        else {
          iVar22 = *(int *)(lVar30 + 100);
LAB_1805a23af:
          if (iVar22 != -1) {
            lVar30 = *(longlong *)
                      (_DAT_180c91fe0 +
                      (longlong)
                      *(int *)((longlong)iVar4 * 0x68 + *(longlong *)(lVar27 + 0x38) + 100) * 8);
            iVar4 = *(int *)(lVar30 + (longlong)iVar22 * 0x28);
            if (iVar4 < 0) {
              iVar4 = *(int *)(lVar30 + (longlong)*(int *)(*(longlong *)(lVar27 + 0x28) + 100) *
                                        0x28);
            }
            if (iVar4 != -1) {
              FUN_1804eb8d0(*(uint64_t *)(unaff_RBP + -0x18),fVar35,lVar29,unaff_RBP + 2);
            }
          }
        }
      }
    }
    if ((*(byte *)(in_stack_00000078 + 4) & 1) != 0) {
      if (in_stack_00000070 == '\0') {
        pfVar19 = unaff_RBP + 0x98;
        *(int8_t *)(unaff_RBP + 0xaa) = 0;
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
        *(int16_t *)(unaff_RBP + 0xa8) = 0x100;
        unaff_RBP[0xab] = 1.26117e-44;
        unaff_RBP[0xac] = -NAN;
        unaff_RBP[0xb6] = -NAN;
        unaff_RBP[0xb7] = -NAN;
        *(int8_t *)(unaff_RBP + 0xb8) = 0xff;
        unaff_RBP[0xb9] = 0.0;
        unaff_RBP[0xba] = 0.0;
        unaff_RBP[0xb5] = -NAN;
        unaff_RBP[0xbb] = 1.0;
        goto LAB_1805a2c65;
      }
      goto LAB_1805a2c79;
    }
    if (*(char *)(lVar25 + 0xcab + lVar5) == '\0') {
      if ((bVar8) || (iVar4 = *(int *)(lVar25 + 0xc20 + lVar5), iVar4 == 2)) {
        if ((((*(char *)(lVar25 + 0xca1 + lVar5) == *(char *)(unaff_R13 + 0xd8)) && (unaff_RSI != 0)
             ) && (0 < *(int *)(unaff_RSI + 0x30))) &&
           (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                       *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
            (0 < *(short *)(unaff_RSI + 8))))) {
          lVar27 = *(longlong *)(unaff_RBP + -0x1e);
          pfVar19 = (float *)FUN_18051bd60(lVar27,unaff_RBP + 0x188,
                                           *(int8_t *)(*(longlong *)(unaff_RSI + 0xf8) + 0x88),
                                           lVar29);
          fVar35 = *pfVar19;
          fVar32 = pfVar19[1];
          fVar34 = pfVar19[2];
          fVar36 = pfVar19[3];
          unaff_RBP[0x14] = fVar35;
          unaff_RBP[0x15] = fVar32;
          unaff_RBP[0x16] = fVar34;
          unaff_RBP[0x17] = fVar36;
        }
        else {
          lVar27 = *(longlong *)(unaff_RBP + -0x1e);
          unaff_RBP[0x14] = 0.0;
          unaff_RBP[0x15] = 0.0;
          unaff_RBP[0x16] = 0.0;
          unaff_RBP[0x17] = 0.0;
          fVar35 = unaff_RBP[0x14];
          fVar32 = unaff_RBP[0x15];
          fVar34 = unaff_RBP[0x16];
          fVar36 = unaff_RBP[0x17];
        }
        iVar4 = *(int *)(lVar25 + 0xc20 + lVar5);
        if (iVar4 == 2) {
          if ((uint)unaff_RBP[-0x20] < 2) {
            unaff_RBP[0x68] = 1.4013e-45;
            unaff_RBP[0x69] = -NAN;
            unaff_RBP[0x6a] = 0.0;
            unaff_RBP[0x6b] = 0.0;
            unaff_RBP[0x6c] = 0.0;
            unaff_RBP[0x6d] = 0.0;
            lVar29 = in_stack_00000078[3];
            unaff_RBP[0x6e] = 0.0;
            unaff_RBP[0x6f] = 0.0;
            unaff_RBP[0x70] = 0.0;
            unaff_RBP[0x71] = 0.0;
            *(int8_t *)(unaff_RBP + 0x72) = 0xff;
            *(bool *)((longlong)unaff_RBP + 0x1c9) = (int)lVar29 == 1;
            unaff_RBP[0x73] = 0.0;
            FUN_1805a4590(0,unaff_RBP + 0x68);
          }
          else {
            iVar4 = *(int *)(*(longlong *)(lVar27 + 0x590) + 0x2498);
            if ((iVar4 != -1) && (*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) == 0x14))
            {
              pfVar7 = *(float **)(unaff_R13 + 600);
              pfVar19 = unaff_RBP + 0x104;
              *(int8_t *)(unaff_RBP + 0x116) = 0;
              unaff_RBP[0x108] = 0.0;
              unaff_RBP[0x109] = 0.0;
              unaff_RBP[0x10a] = 0.0;
              unaff_RBP[0x10b] = 0.0;
              unaff_RBP[0x118] = *pfVar7;
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
              *(int16_t *)(unaff_RBP + 0x114) = 0x100;
              unaff_RBP[0x117] = 1.12104e-44;
              unaff_RBP[0x119] = fVar35;
              unaff_RBP[0x11a] = fVar32;
              unaff_RBP[0x11b] = fVar34;
              unaff_RBP[0x11c] = fVar36;
              unaff_RBP[0x122] = -NAN;
              unaff_RBP[0x123] = -NAN;
              unaff_RBP[0x11d] = 0.0;
              unaff_RBP[0x11e] = 0.0;
              unaff_RBP[0x11f] = 0.0;
              unaff_RBP[0x120] = 0.0;
              *(int8_t *)(unaff_RBP + 0x124) = 0xff;
              unaff_RBP[0x125] = 0.0;
              unaff_RBP[0x126] = 0.0;
              unaff_RBP[0x121] = -NAN;
              unaff_RBP[0x127] = 1.0;
              goto LAB_1805a2c65;
            }
          }
          goto LAB_1805a2c79;
        }
        fVar17 = *(float *)(lVar25 + 0xc98 + lVar5);
        if (bVar13) {
          if (iVar4 == 4) {
            fVar23 = *(float *)(lVar31 + 0x10);
            fVar18 = 1.4013e-44;
          }
          else {
            fVar23 = *(float *)(lVar31 + 0x10);
            fVar18 = 1.54143e-44;
            if (iVar4 == 3) {
              fVar18 = 1.26117e-44;
            }
          }
        }
        else {
          fVar18 = 1.12104e-44;
          fVar23 = -NAN;
        }
        unaff_RBP[0x13b] = fVar18;
        pfVar19 = *(float **)(unaff_R13 + 600);
        unaff_RBP[300] = 0.0;
        unaff_RBP[0x12d] = 0.0;
        unaff_RBP[0x12e] = 0.0;
        unaff_RBP[0x12f] = 0.0;
        unaff_RBP[0x12a] = 0.0;
        fVar18 = *pfVar19;
        unaff_RBP[0x130] = 0.0;
        unaff_RBP[0x131] = 0.0;
        unaff_RBP[0x14a] = 0.0;
        pfVar19 = unaff_RBP + 0x128;
        unaff_RBP[0x13c] = fVar18;
        unaff_RBP[0x149] = fVar17;
        *(int8_t *)(unaff_RBP + 0x13a) = 0;
        unaff_RBP[0x128] = -NAN;
        unaff_RBP[0x129] = -NAN;
        unaff_RBP[0x132] = 0.0;
        unaff_RBP[0x133] = 1.0;
        unaff_RBP[0x134] = -0.2;
        unaff_RBP[0x135] = -0.2;
        unaff_RBP[0x136] = 0.4;
        unaff_RBP[0x137] = 0.0;
        *(int16_t *)(unaff_RBP + 0x138) = 0x100;
        unaff_RBP[0x13d] = fVar35;
        unaff_RBP[0x13e] = fVar32;
        unaff_RBP[0x13f] = fVar34;
        unaff_RBP[0x140] = fVar36;
        unaff_RBP[0x147] = fVar23;
        unaff_RBP[0x141] = 0.0;
        unaff_RBP[0x142] = 0.0;
        unaff_RBP[0x143] = 0.0;
        unaff_RBP[0x144] = 0.0;
        *(int8_t *)(unaff_RBP + 0x148) = 0xff;
        unaff_RBP[0x145] = -NAN;
        unaff_RBP[0x146] = -NAN;
        unaff_RBP[0x14b] = 1.0;
LAB_1805a2c65:
        uVar33 = 0;
LAB_1805a2c68:
        FUN_1805a4a20(uVar33,1,pfVar19);
      }
      else if (iVar4 == 1) {
        cVar15 = *(char *)(lVar25 + 0xca1 + lVar5);
        if ((int)unaff_RBP[-0x20] - 3U < 2) {
          iVar4 = *(int *)(*(longlong *)(*(longlong *)(unaff_RBP + -0x1e) + 0x590) + 0x2498);
          if ((iVar4 != -1) && (*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) == 0x14)) {
            if (((cVar15 == *(char *)(unaff_R13 + 0xd8)) &&
                ((unaff_RSI != 0 && (0 < *(int *)(unaff_RSI + 0x30))))) &&
               (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
                (0 < *(short *)(unaff_RSI + 8))))) {
              pfVar19 = (float *)FUN_18051bd60(*(longlong *)(unaff_RBP + -0x1e),unaff_RBP + 0x184,
                                               *(int8_t *)
                                                (*(longlong *)(unaff_RSI + 0xf8) + 0x88),lVar29);
              fVar35 = *pfVar19;
              fVar32 = pfVar19[1];
              fVar34 = pfVar19[2];
              fVar36 = pfVar19[3];
              unaff_RBP[0x10] = fVar35;
              unaff_RBP[0x11] = fVar32;
              unaff_RBP[0x12] = fVar34;
              unaff_RBP[0x13] = fVar36;
            }
            else {
              unaff_RBP[0x10] = 0.0;
              unaff_RBP[0x11] = 0.0;
              unaff_RBP[0x12] = 0.0;
              unaff_RBP[0x13] = 0.0;
              fVar35 = unaff_RBP[0x10];
              fVar32 = unaff_RBP[0x11];
              fVar34 = unaff_RBP[0x12];
              fVar36 = unaff_RBP[0x13];
            }
            pfVar7 = *(float **)(unaff_R13 + 600);
            pfVar19 = unaff_RBP + 0xe0;
            *(int8_t *)(unaff_RBP + 0xf2) = 0;
            unaff_RBP[0xe4] = 0.0;
            unaff_RBP[0xe5] = 0.0;
            unaff_RBP[0xe6] = 0.0;
            unaff_RBP[0xe7] = 0.0;
            fVar17 = *pfVar7;
            unaff_RBP[0xff] = *(float *)(lVar31 + 0x10);
            *(int8_t *)(unaff_RBP + 0x100) = *(int8_t *)(lVar25 + 0xca0 + lVar5);
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
            *(int16_t *)(unaff_RBP + 0xf0) = 0x100;
            unaff_RBP[0xf3] = 1.12104e-44;
            unaff_RBP[0xf4] = fVar17;
            unaff_RBP[0xf5] = fVar35;
            unaff_RBP[0xf6] = fVar32;
            unaff_RBP[0xf7] = fVar34;
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
            if ((((cVar15 == *(char *)(unaff_R13 + 0xd8)) && (unaff_RSI != 0)) &&
                (0 < *(int *)(unaff_RSI + 0x30))) &&
               (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
                (0 < *(short *)(unaff_RSI + 8))))) {
              pfVar19 = (float *)FUN_18051bd60(*(uint64_t *)(unaff_RBP + -0x1e),unaff_RBP + 0x180,
                                               *(int8_t *)
                                                (*(longlong *)(unaff_RSI + 0xf8) + 0x88),lVar29);
              fVar35 = *pfVar19;
              fVar32 = pfVar19[1];
              fVar34 = pfVar19[2];
              fVar36 = pfVar19[3];
              pfVar19 = *(float **)(unaff_R13 + 600);
              unaff_RBP[0xc] = fVar35;
              unaff_RBP[0xd] = fVar32;
              unaff_RBP[0xe] = fVar34;
              unaff_RBP[0xf] = fVar36;
              if (pfVar19 != (float *)0x0) goto LAB_1805a271b;
              fVar17 = -NAN;
            }
            else {
              unaff_RBP[0xc] = 0.0;
              unaff_RBP[0xd] = 0.0;
              unaff_RBP[0xe] = 0.0;
              unaff_RBP[0xf] = 0.0;
              pfVar19 = *(float **)(unaff_R13 + 600);
              fVar35 = unaff_RBP[0xc];
              fVar32 = unaff_RBP[0xd];
              fVar34 = unaff_RBP[0xe];
              fVar36 = unaff_RBP[0xf];
LAB_1805a271b:
              fVar17 = *pfVar19;
            }
            pfVar19 = unaff_RBP + 0xbc;
            unaff_RBP[0xd0] = fVar17;
            fVar17 = *(float *)(lVar31 + 0x10);
            unaff_RBP[0xc0] = 0.0;
            unaff_RBP[0xc1] = 0.0;
            unaff_RBP[0xc2] = 0.0;
            unaff_RBP[0xc3] = 0.0;
            unaff_RBP[0xdb] = fVar17;
            uVar21 = *(int8_t *)(lVar25 + 0xca0 + lVar5);
            unaff_RBP[0xd5] = 0.0;
            unaff_RBP[0xd6] = 0.0;
            unaff_RBP[0xd7] = 0.0;
            unaff_RBP[0xd8] = 0.0;
            *(int8_t *)(unaff_RBP + 0xdc) = uVar21;
            *(int8_t *)(unaff_RBP + 0xce) = 0;
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
            *(int16_t *)(unaff_RBP + 0xcc) = 0x100;
            unaff_RBP[0xcf] = 1.96182e-44;
            unaff_RBP[0xd1] = fVar35;
            unaff_RBP[0xd2] = fVar32;
            unaff_RBP[0xd3] = fVar34;
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
          lVar29 = in_stack_00000078[3];
          unaff_RBP[0x62] = 0.0;
          unaff_RBP[99] = 0.0;
          unaff_RBP[100] = 0.0;
          unaff_RBP[0x65] = 0.0;
          *(int8_t *)(unaff_RBP + 0x66) = 0xff;
          *(bool *)((longlong)unaff_RBP + 0x199) = (int)lVar29 == 1;
          unaff_RBP[0x67] = 0.0;
          FUN_1805a4590(0,unaff_RBP + 0x5c);
        }
      }
    }
    else {
      lVar30 = (longlong)*(int *)(lVar31 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a);
      lVar27 = *(longlong *)(*(longlong *)(lVar30 + 0x8f8) + 0x9e8);
      if (lVar27 != 0) {
        if (*(int *)(lVar27 + 0x30) < 1) {
          bVar8 = false;
        }
        else if (((*(uint *)((longlong)*(int *)(lVar27 + 0xf0) * 0xa0 + 0x50 +
                            *(longlong *)(lVar27 + 0xd0)) >> 9 & 1) == 0) ||
                (0 < *(short *)(lVar27 + 8))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          FUN_18051bd60(lVar30,unaff_RBP + 0x150,
                        *(int8_t *)(*(longlong *)(lVar27 + 0xf8) + 0x88),lVar29);
          uVar21 = *(int8_t *)(unaff_R13 + 0xd8);
          if (*(float **)(lVar30 + 0x288) == (float *)0x0) {
            fVar35 = -NAN;
          }
          else {
            fVar35 = **(float **)(lVar30 + 0x288);
          }
          unaff_RBP[0x93] = *(float *)(*(longlong *)(unaff_RBP + -0x1e) + 0x10);
          *(int8_t *)(unaff_RBP + 0x86) = 0;
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
          *(int16_t *)(unaff_RBP + 0x84) = 0x100;
          unaff_RBP[0x87] = 1.82169e-44;
          unaff_RBP[0x88] = fVar35;
          unaff_RBP[0x8d] = 0.0;
          unaff_RBP[0x8e] = 0.0;
          unaff_RBP[0x8f] = 0.0;
          unaff_RBP[0x90] = 0.0;
          *(int8_t *)(unaff_RBP + 0x94) = uVar21;
          unaff_RBP[0x95] = 0.0;
          unaff_RBP[0x96] = 0.0;
          unaff_RBP[0x91] = -NAN;
          unaff_RBP[0x92] = -NAN;
          unaff_RBP[0x97] = 1.0;
          pfVar19 = (float *)func_0x00018055f040(unaff_RBP + 0x18c,unaff_RBP + 0x74);
          uVar33 = extraout_XMM0_Da;
          goto LAB_1805a2c68;
        }
      }
    }
LAB_1805a2c79:
    cVar15 = *(char *)(lVar25 + 0xca9 + lVar5);
    if (((cVar15 == '\0') && (2 < *(int *)(lVar25 + 0xc20 + lVar5) - 3U)) &&
       (*(char *)(lVar25 + 0xca2 + lVar5) < '\0')) {
      unaff_R14 = *(longlong *)(unaff_RBP + -0x1e);
    }
    else {
      unaff_R14 = *(longlong *)(unaff_RBP + -0x1e);
      FUN_1805253f0((longlong)*(int *)(lVar31 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a),
                    unaff_RBP + 0x18,cVar15,*(int8_t *)(lVar25 + 0xca2 + lVar5),
                    (int)in_stack_00000078[1]);
    }
    unaff_RBX = *(longlong *)(unaff_RBP + -0x12) + 1;
    unaff_RDI = *(longlong **)(unaff_RBP + -0x10);
    *(longlong *)(unaff_RBP + -0x12) = unaff_RBX;
    if ((*(longlong *)(unaff_RBP + 6) <= unaff_RBX) || (in_stack_00000070 == '\0'))
    goto LAB_1805a1876;
    param_1 = *in_stack_00000078;
    if (*(int *)(param_1 + 0x568) != 1) goto LAB_1805a186c;
    unaff_R12 = in_stack_00000078;
    if ((*(byte *)(in_stack_00000078 + 4) & 1) != 0) goto code_r0x0001805a1900;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2498);
    if ((iVar4 == -1) || (*(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) != 0x14))
    goto LAB_1805a186c;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






