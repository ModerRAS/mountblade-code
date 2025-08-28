#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part039_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805a17bf(uint64_t param_1,uint64_t param_2,char param_3)
void FUN_1805a17bf(uint64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  longlong lVar19;
  int8_t uVar20;
  int iVar21;
  float fVar22;
  uint *puVar23;
  longlong lVar24;
  float *unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar25;
  longlong lVar26;
  char cVar27;
  longlong *unaff_R12;
  longlong lVar28;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar29;
  longlong lVar30;
  float fVar31;
  int32_t extraout_XMM0_Da;
  int32_t uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM7_Da;
  char in_stack_00000070;
  longlong *in_stack_00000078;
  
  lVar24 = 0;
  unaff_RBP[-0x12] = 0.0;
  unaff_RBP[-0x11] = 0.0;
  do {
    if (param_3 == '\0') break;
    lVar4 = *unaff_R12;
    if (*(int *)(lVar4 + 0x568) != 1) {
LAB_1805a186c:
      unaff_XMM7_Da = 0.0;
      unaff_RBP[-0x1f] = 0.0;
      break;
    }
    if ((*(byte *)(unaff_R12 + 4) & 1) == 0) {
      iVar2 = *(int *)(*(longlong *)(lVar4 + 0x590) + 0x2498);
      if ((iVar2 == -1) || (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) != 0x14))
      goto LAB_1805a186c;
    }
    else {
      cVar14 = FUN_1805a3ab0(lVar4 + 0x28);
      if (cVar14 == '\0') goto LAB_1805a186c;
    }
    lVar4 = *unaff_RDI;
    lVar24 = lVar24 * 0xcb0;
    fVar35 = *(float *)(lVar24 + 0xc94 + lVar4);
    if (fVar35 <= unaff_XMM7_Da) {
      fVar35 = unaff_XMM7_Da;
    }
    cVar14 = *(char *)(lVar24 + 0xc18 + lVar4);
    bVar7 = *(int *)(lVar24 + 0xc20 + lVar4) - 3U < 3;
    if (cVar14 == '\0') {
      lVar30 = 0;
    }
    else {
      lVar30 = *(longlong *)(lVar24 + 0xc08 + lVar4);
    }
    if (*(char *)((longlong)unaff_R12 + 0x21) == '\x02') {
      if (lVar30 != 0) {
        lVar28 = *(longlong *)(*(longlong *)(unaff_R13 + 0x108) + 0x20);
        lVar26 = *(longlong *)(lVar30 + 0x20);
        fVar34 = *(float *)(lVar28 + 0x24) - *(float *)(lVar26 + 0x24);
        fVar33 = *(float *)(lVar28 + 0x28) - *(float *)(lVar26 + 0x28);
        fVar31 = *(float *)(lVar28 + 0x2c) - *(float *)(lVar26 + 0x2c);
        if (_DAT_180c96500 * _DAT_180c96500 <= fVar34 * fVar34 + fVar33 * fVar33 + fVar31 * fVar31)
        goto LAB_1805a19c5;
      }
LAB_1805a19d0:
      unaff_RBP[-0x1f] = 0.0;
      cVar14 = *(char *)(lVar24 + 0xc18 + lVar4);
    }
    else {
LAB_1805a19c5:
      if ((bVar7) && (*(char *)((longlong)unaff_R12 + 0x21) == '\x01')) goto LAB_1805a19d0;
    }
    if ((cVar14 == '\0') && ((*(byte *)(unaff_R12 + 4) & 1) == 0)) {
      func_0x0001805d7910(*(uint64_t *)(unaff_R14 + 0x6e0),*(int32_t *)(unaff_R13 + 0x48),
                          *(uint64_t *)(lVar24 + lVar4));
    }
    if (lVar30 == 0) {
LAB_1805a1a1f:
      bVar12 = false;
    }
    else {
      cVar14 = FUN_18052da10(lVar30);
      bVar12 = true;
      if (cVar14 == '\0') goto LAB_1805a1a1f;
    }
    if ((lVar30 == 0) || (cVar14 = func_0x00018052da70(lVar30), cVar14 == '\0')) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    unaff_RBP[-0x20] = -NAN;
    unaff_RBP[-0x16] = -NAN;
    unaff_RBP[-0x15] = -NAN;
    unaff_RBP[-0x14] = -NAN;
    if (((((*(int *)(lVar24 + 0xc20 + lVar4) == 5) || (!bVar7)) || (lVar30 == 0)) ||
        (((lVar28 = *(longlong *)(*(longlong *)(lVar30 + 0x8f8) + 0x9f0), lVar28 == 0 ||
          (*(int *)(lVar28 + 0x30) < 1)) ||
         ((uVar5 = *(ulonglong *)
                    ((longlong)*(int *)(lVar28 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar28 + 0xd0))
          , (uVar5 >> 9 & 1) != 0 && (*(short *)(lVar28 + 8) < 1)))))) || ((uVar5 >> 0x1c & 1) == 0)
       ) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x01';
    }
    cVar15 = *(char *)(lVar24 + 0xc18 + lVar4);
    if ((bVar13) || (cVar15 == '\0')) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (((cVar15 == '\0') && (*(longlong *)(lVar24 + lVar4) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar24 + lVar4) + 0x10) != 0)) {
      cVar27 = '\x01';
    }
    else {
      cVar27 = '\0';
    }
    if ((bVar7) && (*(char *)(lVar24 + 0xca9 + lVar4) == '\0')) {
      unaff_RBP[-0x1f] = *(float *)(lVar24 + 0xc9c + lVar4);
      cVar15 = *(char *)(lVar24 + 0xc18 + lVar4);
    }
    if ((cVar15 == '\0') && (*(longlong *)(lVar24 + lVar4) != 0)) {
      lVar28 = *(longlong *)(*(longlong *)(lVar24 + lVar4) + 0x10);
LAB_1805a1b3a:
      lVar26 = *(longlong *)(lVar24 + 0xc10 + lVar4);
      if (lVar26 == 0) goto LAB_1805a1b4d;
      fVar31 = *(float *)(lVar26 + 100);
    }
    else {
      lVar28 = 0;
      if (cVar15 == '\0') goto LAB_1805a1b3a;
LAB_1805a1b4d:
      fVar31 = -NAN;
    }
    cVar15 = *(char *)(lVar24 + 0xca0 + lVar4);
    if (cVar15 == -1) {
      uVar20 = 0xff;
    }
    else {
      uVar20 = *(int8_t *)
                (*(longlong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar30 + 0x6d8) + 0x8a8) + 0x260) +
                    0x208) + 0x140) + 0x104 + (longlong)cVar15 * 0x1b0);
    }
    func_0x0001805345e0(unaff_RBP + 0x18);
    lVar26 = *(longlong *)(unaff_RBP + -0x10);
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
    fVar33 = *(float *)(lVar26 + 0x30);
    *(int16_t *)((longlong)unaff_RBP + 0x6a) = 0;
    unaff_RBP[0x27] = -NAN;
    unaff_RBP[0x28] = -NAN;
    unaff_RBP[0x29] = -NAN;
    unaff_RBP[0x2a] = -NAN;
    *(char *)(unaff_RBP + 0x18) = cVar14;
    *(int8_t *)((longlong)unaff_RBP + 0x61) = *(int8_t *)(lVar24 + 0xcaa + lVar4);
    *(int8_t *)((longlong)unaff_RBP + 0x62) = *(int8_t *)(unaff_R13 + 0x56);
    *(int8_t *)((longlong)unaff_RBP + 99) = *(int8_t *)(lVar24 + 0xc18 + lVar4);
    *(byte *)(unaff_RBP + 0x19) = (byte)~*(byte *)(lVar24 + 0xca2 + lVar4) >> 7;
    *(bool *)(unaff_RBP + 0x1a) = lVar28 != 0;
    *(int8_t *)((longlong)unaff_RBP + 0x69) = *(int8_t *)(lVar24 + 0xca8 + lVar4);
    unaff_RBP[0x21] = fVar31;
    *(int8_t *)(unaff_RBP + 0x22) = *(int8_t *)(lVar24 + 0xc24 + lVar4);
    unaff_RBP[0x1b] = *(float *)(lVar24 + 0xc20 + lVar4);
    unaff_RBP[0x1c] = *(float *)(lVar26 + 0x28);
    unaff_RBP[0x1d] = *(float *)(lVar26 + 0x38);
    unaff_RBP[0x1e] = unaff_RBP[-0x1c];
    *(int8_t *)(unaff_RBP + 0x1f) = *(int8_t *)(lVar24 + 0xca0 + lVar4);
    *(int8_t *)((longlong)unaff_RBP + 0x7d) = uVar20;
    *(int8_t *)((longlong)unaff_RBP + 0x7e) = *(int8_t *)(lVar24 + 0xca1 + lVar4);
    unaff_RBP[0x20] = *(float *)(unaff_R13 + 0x48);
    unaff_RBP[0x23] = fVar33;
    unaff_RBP[0x24] = *(float *)(lVar24 + 0xc90 + lVar4);
    unaff_RBP[0x25] = *(float *)(lVar24 + 0xc94 + lVar4);
    unaff_RBP[0x26] = *(float *)(lVar24 + 0xc98 + lVar4);
    puVar1 = (uint64_t *)(lVar24 + 0xc48 + lVar4);
    uVar9 = puVar1[1];
    *(uint64_t *)(unaff_RBP + 0x2b) = *puVar1;
    *(uint64_t *)(unaff_RBP + 0x2d) = uVar9;
    pfVar18 = (float *)(lVar24 + 0xc58 + lVar4);
    fVar31 = pfVar18[1];
    fVar33 = pfVar18[2];
    fVar34 = pfVar18[3];
    unaff_RBP[0x2f] = *pfVar18;
    unaff_RBP[0x30] = fVar31;
    unaff_RBP[0x31] = fVar33;
    unaff_RBP[0x32] = fVar34;
    uVar9 = *(uint64_t *)(lVar24 + lVar4 + 0xc28);
    uVar10 = *(uint64_t *)(lVar24 + lVar4 + 0xc30);
    lVar26 = lVar24 + lVar4;
    unaff_RBP[0x3f] = NAN;
    unaff_RBP[0x40] = NAN;
    unaff_RBP[0x41] = NAN;
    unaff_RBP[0x42] = NAN;
    *(uint64_t *)(unaff_RBP + 0x33) = uVar9;
    *(uint64_t *)(unaff_RBP + 0x35) = uVar10;
    fVar31 = *(float *)(lVar26 + 0xc3c);
    fVar33 = *(float *)(lVar26 + 0xc40);
    fVar34 = *(float *)(lVar26 + 0xc44);
    unaff_RBP[0x43] = *(float *)(lVar26 + 0xc38);
    unaff_RBP[0x44] = fVar31;
    unaff_RBP[0x45] = fVar33;
    unaff_RBP[0x46] = fVar34;
    if ((bVar11) || (cVar27 != '\0')) {
      lVar26 = *(longlong *)(unaff_RBP + -0x1a);
      if (lVar30 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = (longlong)*(int *)(lVar30 + 0x10) * 0xa60 + lVar26;
      }
      FUN_1804f91b0(*(uint64_t *)(unaff_RBP + -0x18),unaff_RBP + 0x18,
                    *(uint64_t *)(unaff_RBP + -0x1e),lVar29,lVar28);
      unaff_XMM7_Da = unaff_RBP[0x25];
      if (unaff_RBP[0x25] <= fVar35) {
        unaff_XMM7_Da = fVar35;
      }
      if ((((*(char *)(lVar24 + 0xc18 + lVar4) != '\0') && (*(char *)(unaff_RBP + 0x4c) == '\0')) &&
          (cVar14 != '\0')) && (bVar12)) {
        lVar28 = *(longlong *)(*(longlong *)(lVar30 + 0x658) + 0x208);
        lVar29 = *(longlong *)(lVar28 + 0x140);
        cVar14 = *(char *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar30 + 0x8f8) + 0x9f0) + 0xf8) + 0x88);
        lVar19 = (longlong)cVar14;
        iVar2 = *(int *)(lVar19 * 0x1b0 + 0x110 + lVar29);
        while ((iVar2 == -1 && (cVar14 = (char)lVar19, cVar14 != -1))) {
          cVar14 = *(char *)(lVar19 + 0x100 + lVar28);
          lVar19 = (longlong)cVar14;
          iVar2 = *(int *)(lVar19 * 0x1b0 + 0x110 + lVar29);
        }
        puVar23 = (uint *)((longlong)cVar14 * 0x100 +
                          *(longlong *)(*(longlong *)(lVar30 + 0x658) + 0x18));
        do {
          LOCK();
          uVar3 = *puVar23;
          *puVar23 = *puVar23 | 1;
          UNLOCK();
        } while ((uVar3 & 1) != 0);
        fVar35 = (float)puVar23[1];
        fVar31 = (float)puVar23[2];
        fVar33 = (float)puVar23[3];
        fVar34 = (float)puVar23[4];
        fVar16 = (float)puVar23[5];
        fVar17 = (float)puVar23[6];
        fVar22 = (float)puVar23[7];
        fVar8 = (float)puVar23[8];
        unaff_RBP[0x1b0] = fVar35;
        unaff_RBP[0x1b1] = fVar31;
        unaff_RBP[0x1b2] = fVar33;
        unaff_RBP[0x1b3] = fVar34;
        unaff_RBP[0x1b4] = fVar16;
        unaff_RBP[0x1b5] = fVar17;
        unaff_RBP[0x1b6] = fVar22;
        unaff_RBP[0x1b7] = fVar8;
        fVar25 = 0.0;
        unaff_RBP[0x168] = fVar35;
        unaff_RBP[0x169] = fVar31;
        unaff_RBP[0x16a] = fVar33;
        unaff_RBP[0x16b] = fVar34;
        *puVar23 = 0;
        lVar28 = *(longlong *)(lVar30 + 0x6d8);
        unaff_RBP[0x16c] = fVar16;
        unaff_RBP[0x16d] = fVar17;
        unaff_RBP[0x16e] = fVar22;
        unaff_RBP[0x16f] = fVar8;
        unaff_RBP[0x158] = fVar35;
        unaff_RBP[0x159] = fVar31;
        unaff_RBP[0x15a] = fVar33;
        unaff_RBP[0x15b] = fVar34;
        unaff_RBP[0x15c] = fVar16;
        unaff_RBP[0x15d] = fVar17;
        unaff_RBP[0x15e] = fVar22;
        unaff_RBP[0x15f] = fVar8;
        pfVar18 = (float *)FUN_180534930(*(longlong *)(lVar28 + 0x8a8) + 0x70,unaff_RBP + 0x178,
                                         lVar4 + 0xc28 + lVar24);
        unaff_RBP[-0xb] = 3.4028235e+38;
        fVar35 = pfVar18[1];
        fVar31 = pfVar18[2];
        unaff_RBP[-0xe] = *pfVar18 - fVar16;
        unaff_RBP[-0xd] = fVar35 - fVar17;
        unaff_RBP[-0xc] = fVar31 - fVar22;
        FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 0x154,unaff_RBP + -0xe);
        lVar28 = lVar24 + lVar4;
        unaff_RBP[-7] = 3.4028235e+38;
        fVar35 = *(float *)(lVar28 + 0xc3c);
        fVar31 = *(float *)(lVar28 + 0xc38);
        fVar33 = *(float *)(lVar30 + 0x520);
        fVar34 = *(float *)(lVar30 + 0x524);
        fVar16 = *(float *)(lVar30 + 0x530);
        fVar17 = *(float *)(lVar30 + 0x534);
        unaff_RBP[-8] = *(float *)(lVar28 + 0xc40);
        unaff_RBP[-10] = fVar35 * fVar34 + fVar31 * fVar33;
        unaff_RBP[-9] = fVar31 * fVar16 + fVar35 * fVar17;
        FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 8);
        iVar2 = *(int *)(lVar30 + 0x10);
        fVar35 = (float)(int)unaff_RBP[0x4a] * 0.3;
        if (-1.0 <= fVar35) {
          if (1.0 <= fVar35) {
            fVar35 = 1.0;
          }
        }
        else {
          fVar35 = -1.0;
        }
        unaff_RBP[-3] = 3.4028235e+38;
        unaff_RBP[0x50] = 2.8026e-45;
        fVar31 = unaff_RBP[-3];
        unaff_RBP[0x51] = -NAN;
        *(int16_t *)(unaff_RBP + 0x5a) = 0xff;
        unaff_RBP[0x5b] = fVar25;
        unaff_RBP[-6] = fVar35 * unaff_RBP[8];
        unaff_RBP[-5] = fVar35 * unaff_RBP[9];
        unaff_RBP[-4] = fVar35 * unaff_RBP[10];
        unaff_RBP[-3] = fVar31;
        unaff_RBP[0x56] = fVar35 * unaff_RBP[8];
        unaff_RBP[0x57] = fVar35 * unaff_RBP[9];
        unaff_RBP[0x58] = fVar35 * unaff_RBP[10];
        unaff_RBP[0x59] = fVar31;
        unaff_RBP[0x52] = unaff_RBP[0x154];
        unaff_RBP[0x53] = unaff_RBP[0x155];
        unaff_RBP[0x54] = unaff_RBP[0x156];
        unaff_RBP[0x55] = unaff_RBP[0x157];
        FUN_1805a4590((longlong)iVar2 * 0xa60 + 0x28 + lVar26,unaff_RBP + 0x50);
      }
      if (unaff_RBP[-0x20] == 4.2039e-45) goto LAB_1805a205f;
      fVar35 = unaff_XMM7_Da;
      if ((1 < (uint)unaff_RBP[-0x20]) ||
         (cVar14 = FUN_1805a15d0(in_stack_00000078), cVar14 != '\0')) goto LAB_1805a2073;
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
    if (*(char *)(lVar24 + 0xc18 + lVar4) == '\0') {
      unaff_RBP[-0x1f] = 0.0;
      in_stack_00000070 = '\0';
      lVar28 = lVar4 + 0xc28 + lVar24;
      FUN_1804f6570(*(uint64_t *)(unaff_RBP + -0x18),*(uint64_t *)(lVar24 + 0xc88 + lVar4),
                    lVar28,lVar4 + 0xc38 + lVar24,lVar4 + 0xc78 + lVar24);
      if (*(longlong *)(lVar24 + 0xc88 + lVar4) != 0) {
        FUN_1804f8630(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x1e) + 0x8d8),
                      *(int32_t *)(*(longlong *)(unaff_RBP + -0x1e) + 0x10));
      }
    }
    else if ((bVar13) || (*(int *)(lVar24 + 0xc20 + lVar4) != 1)) {
      lVar28 = lVar4 + 0xc28 + lVar24;
    }
    else {
      lVar26 = (longlong)*(int *)(lVar30 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a);
      puVar23 = (uint *)((longlong)*(char *)(lVar24 + 0xca0 + lVar4) * 0x100 +
                        *(longlong *)(*(longlong *)(lVar26 + 0x658) + 0x18));
      do {
        LOCK();
        uVar3 = *puVar23;
        *puVar23 = *puVar23 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      fVar35 = (float)puVar23[1];
      fVar31 = (float)puVar23[2];
      fVar33 = (float)puVar23[3];
      fVar34 = (float)puVar23[4];
      fVar16 = (float)puVar23[5];
      fVar17 = (float)puVar23[6];
      fVar22 = (float)puVar23[7];
      fVar8 = (float)puVar23[8];
      unaff_RBP[0x1b8] = fVar35;
      unaff_RBP[0x1b9] = fVar31;
      unaff_RBP[0x1ba] = fVar33;
      unaff_RBP[0x1bb] = fVar34;
      unaff_RBP[0x1bc] = fVar16;
      unaff_RBP[0x1bd] = fVar17;
      unaff_RBP[0x1be] = fVar22;
      unaff_RBP[0x1bf] = fVar8;
      *puVar23 = 0;
      lVar29 = *(longlong *)(lVar26 + 0x6d8);
      lVar28 = lVar4 + 0xc28 + lVar24;
      unaff_RBP[0x170] = fVar35;
      unaff_RBP[0x171] = fVar31;
      unaff_RBP[0x172] = fVar33;
      unaff_RBP[0x173] = fVar34;
      unaff_RBP[0x174] = fVar16;
      unaff_RBP[0x175] = fVar17;
      unaff_RBP[0x176] = fVar22;
      unaff_RBP[0x177] = fVar8;
      unaff_RBP[0x160] = fVar35;
      unaff_RBP[0x161] = fVar31;
      unaff_RBP[0x162] = fVar33;
      unaff_RBP[0x163] = fVar34;
      lVar29 = *(longlong *)(lVar29 + 0x8a8);
      unaff_RBP[0x164] = fVar16;
      unaff_RBP[0x165] = fVar17;
      unaff_RBP[0x166] = fVar22;
      unaff_RBP[0x167] = fVar8;
      pfVar18 = (float *)FUN_180534930(lVar29 + 0x70,unaff_RBP + 0x17c,lVar28);
      unaff_RBP[1] = 3.4028235e+38;
      fVar35 = pfVar18[1];
      fVar31 = pfVar18[2];
      unaff_RBP[-2] = *pfVar18 - fVar16;
      unaff_RBP[-1] = fVar35 - fVar17;
      *unaff_RBP = fVar31 - fVar22;
      FUN_180285b40(unaff_RBP + 0x160,unaff_RBP + 0x14c,unaff_RBP + -2);
      FUN_1805ab940(*(uint64_t *)(*(longlong *)(unaff_RBP + -0x18) + 0x98d920),
                    *(uint64_t *)(unaff_RBP + -0x1e),lVar26,
                    *(int8_t *)(lVar24 + 0xca0 + lVar4),unaff_RBP + 0x14c);
    }
    lVar26 = _DAT_180c8aa00;
    uVar3 = *(uint *)(lVar24 + 0xc20 + lVar4);
    if ((((1 < uVar3) && (unaff_RSI != 0)) && (0 < *(int *)(unaff_RSI + 0x30))) &&
       (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                   *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
        (0 < *(short *)(unaff_RSI + 8))))) {
      iVar2 = *(int *)(unaff_RSI + 0x34);
      lVar29 = *(longlong *)(lVar24 + 0xc88 + lVar4);
      fVar31 = -*(float *)(lVar24 + 0xc7c + lVar4);
      unaff_RBP[2] = -*(float *)(lVar24 + 0xc78 + lVar4);
      fVar35 = *(float *)(lVar24 + 0xc80 + lVar4);
      unaff_RBP[3] = fVar31;
      unaff_RBP[4] = -fVar35;
      unaff_RBP[5] = 3.4028235e+38;
      if (((uVar3 - 2 & 0xfffffffc) == 0) && (uVar3 != 3)) {
        if (lVar29 == 0) {
          if ((uVar3 != 2) && (lVar29 = *(longlong *)(lVar30 + 0x8f8), lVar29 != 0)) {
            if ((uVar3 == 5) ||
               ((lVar19 = *(longlong *)(lVar29 + 0x9f0), lVar19 == 0 ||
                ((*(uint *)((longlong)*(int *)(lVar19 + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(lVar19 + 0xd0)) >> 0x1c & 1) == 0)))) {
              lVar19 = *(longlong *)(lVar29 + 0x9e8);
            }
            if (lVar19 != 0) {
              iVar21 = *(int *)(lVar19 + 0x34);
              goto LAB_1805a23af;
            }
          }
        }
        else {
          iVar21 = *(int *)(lVar29 + 100);
LAB_1805a23af:
          if (iVar21 != -1) {
            lVar29 = *(longlong *)
                      (_DAT_180c91fe0 +
                      (longlong)
                      *(int *)((longlong)iVar2 * 0x68 + *(longlong *)(lVar26 + 0x38) + 100) * 8);
            iVar2 = *(int *)(lVar29 + (longlong)iVar21 * 0x28);
            if (iVar2 < 0) {
              iVar2 = *(int *)(lVar29 + (longlong)*(int *)(*(longlong *)(lVar26 + 0x28) + 100) *
                                        0x28);
            }
            if (iVar2 != -1) {
              FUN_1804eb8d0(*(uint64_t *)(unaff_RBP + -0x18),fVar31,lVar28,unaff_RBP + 2);
            }
          }
        }
      }
    }
    if ((*(byte *)(in_stack_00000078 + 4) & 1) != 0) {
      if (in_stack_00000070 == '\0') {
        pfVar18 = unaff_RBP + 0x98;
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
    if (*(char *)(lVar24 + 0xcab + lVar4) == '\0') {
      if ((bVar7) || (iVar2 = *(int *)(lVar24 + 0xc20 + lVar4), iVar2 == 2)) {
        if ((((*(char *)(lVar24 + 0xca1 + lVar4) == *(char *)(unaff_R13 + 0xd8)) && (unaff_RSI != 0)
             ) && (0 < *(int *)(unaff_RSI + 0x30))) &&
           (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                       *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
            (0 < *(short *)(unaff_RSI + 8))))) {
          lVar26 = *(longlong *)(unaff_RBP + -0x1e);
          pfVar18 = (float *)FUN_18051bd60(lVar26,unaff_RBP + 0x188,
                                           *(int8_t *)(*(longlong *)(unaff_RSI + 0xf8) + 0x88),
                                           lVar28);
          fVar35 = *pfVar18;
          fVar31 = pfVar18[1];
          fVar33 = pfVar18[2];
          fVar34 = pfVar18[3];
          unaff_RBP[0x14] = fVar35;
          unaff_RBP[0x15] = fVar31;
          unaff_RBP[0x16] = fVar33;
          unaff_RBP[0x17] = fVar34;
        }
        else {
          lVar26 = *(longlong *)(unaff_RBP + -0x1e);
          unaff_RBP[0x14] = 0.0;
          unaff_RBP[0x15] = 0.0;
          unaff_RBP[0x16] = 0.0;
          unaff_RBP[0x17] = 0.0;
          fVar35 = unaff_RBP[0x14];
          fVar31 = unaff_RBP[0x15];
          fVar33 = unaff_RBP[0x16];
          fVar34 = unaff_RBP[0x17];
        }
        iVar2 = *(int *)(lVar24 + 0xc20 + lVar4);
        if (iVar2 == 2) {
          if ((uint)unaff_RBP[-0x20] < 2) {
            unaff_RBP[0x68] = 1.4013e-45;
            unaff_RBP[0x69] = -NAN;
            unaff_RBP[0x6a] = 0.0;
            unaff_RBP[0x6b] = 0.0;
            unaff_RBP[0x6c] = 0.0;
            unaff_RBP[0x6d] = 0.0;
            lVar28 = in_stack_00000078[3];
            unaff_RBP[0x6e] = 0.0;
            unaff_RBP[0x6f] = 0.0;
            unaff_RBP[0x70] = 0.0;
            unaff_RBP[0x71] = 0.0;
            *(int8_t *)(unaff_RBP + 0x72) = 0xff;
            *(bool *)((longlong)unaff_RBP + 0x1c9) = (int)lVar28 == 1;
            unaff_RBP[0x73] = 0.0;
            FUN_1805a4590(0,unaff_RBP + 0x68);
          }
          else {
            iVar2 = *(int *)(*(longlong *)(lVar26 + 0x590) + 0x2498);
            if ((iVar2 != -1) && (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) == 0x14))
            {
              pfVar6 = *(float **)(unaff_R13 + 600);
              pfVar18 = unaff_RBP + 0x104;
              *(int8_t *)(unaff_RBP + 0x116) = 0;
              unaff_RBP[0x108] = 0.0;
              unaff_RBP[0x109] = 0.0;
              unaff_RBP[0x10a] = 0.0;
              unaff_RBP[0x10b] = 0.0;
              unaff_RBP[0x118] = *pfVar6;
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
              unaff_RBP[0x11a] = fVar31;
              unaff_RBP[0x11b] = fVar33;
              unaff_RBP[0x11c] = fVar34;
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
        fVar16 = *(float *)(lVar24 + 0xc98 + lVar4);
        if (bVar12) {
          if (iVar2 == 4) {
            fVar22 = *(float *)(lVar30 + 0x10);
            fVar17 = 1.4013e-44;
          }
          else {
            fVar22 = *(float *)(lVar30 + 0x10);
            fVar17 = 1.54143e-44;
            if (iVar2 == 3) {
              fVar17 = 1.26117e-44;
            }
          }
        }
        else {
          fVar17 = 1.12104e-44;
          fVar22 = -NAN;
        }
        unaff_RBP[0x13b] = fVar17;
        pfVar18 = *(float **)(unaff_R13 + 600);
        unaff_RBP[300] = 0.0;
        unaff_RBP[0x12d] = 0.0;
        unaff_RBP[0x12e] = 0.0;
        unaff_RBP[0x12f] = 0.0;
        unaff_RBP[0x12a] = 0.0;
        fVar17 = *pfVar18;
        unaff_RBP[0x130] = 0.0;
        unaff_RBP[0x131] = 0.0;
        unaff_RBP[0x14a] = 0.0;
        pfVar18 = unaff_RBP + 0x128;
        unaff_RBP[0x13c] = fVar17;
        unaff_RBP[0x149] = fVar16;
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
        unaff_RBP[0x13e] = fVar31;
        unaff_RBP[0x13f] = fVar33;
        unaff_RBP[0x140] = fVar34;
        unaff_RBP[0x147] = fVar22;
        unaff_RBP[0x141] = 0.0;
        unaff_RBP[0x142] = 0.0;
        unaff_RBP[0x143] = 0.0;
        unaff_RBP[0x144] = 0.0;
        *(int8_t *)(unaff_RBP + 0x148) = 0xff;
        unaff_RBP[0x145] = -NAN;
        unaff_RBP[0x146] = -NAN;
        unaff_RBP[0x14b] = 1.0;
LAB_1805a2c65:
        uVar32 = 0;
LAB_1805a2c68:
        FUN_1805a4a20(uVar32,1,pfVar18);
      }
      else if (iVar2 == 1) {
        cVar14 = *(char *)(lVar24 + 0xca1 + lVar4);
        if ((int)unaff_RBP[-0x20] - 3U < 2) {
          iVar2 = *(int *)(*(longlong *)(*(longlong *)(unaff_RBP + -0x1e) + 0x590) + 0x2498);
          if ((iVar2 != -1) && (*(int *)((longlong)iVar2 * 0x68 + 0x58 + _DAT_180c96150) == 0x14)) {
            if (((cVar14 == *(char *)(unaff_R13 + 0xd8)) &&
                ((unaff_RSI != 0 && (0 < *(int *)(unaff_RSI + 0x30))))) &&
               (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
                (0 < *(short *)(unaff_RSI + 8))))) {
              pfVar18 = (float *)FUN_18051bd60(*(longlong *)(unaff_RBP + -0x1e),unaff_RBP + 0x184,
                                               *(int8_t *)
                                                (*(longlong *)(unaff_RSI + 0xf8) + 0x88),lVar28);
              fVar35 = *pfVar18;
              fVar31 = pfVar18[1];
              fVar33 = pfVar18[2];
              fVar34 = pfVar18[3];
              unaff_RBP[0x10] = fVar35;
              unaff_RBP[0x11] = fVar31;
              unaff_RBP[0x12] = fVar33;
              unaff_RBP[0x13] = fVar34;
            }
            else {
              unaff_RBP[0x10] = 0.0;
              unaff_RBP[0x11] = 0.0;
              unaff_RBP[0x12] = 0.0;
              unaff_RBP[0x13] = 0.0;
              fVar35 = unaff_RBP[0x10];
              fVar31 = unaff_RBP[0x11];
              fVar33 = unaff_RBP[0x12];
              fVar34 = unaff_RBP[0x13];
            }
            pfVar6 = *(float **)(unaff_R13 + 600);
            pfVar18 = unaff_RBP + 0xe0;
            *(int8_t *)(unaff_RBP + 0xf2) = 0;
            unaff_RBP[0xe4] = 0.0;
            unaff_RBP[0xe5] = 0.0;
            unaff_RBP[0xe6] = 0.0;
            unaff_RBP[0xe7] = 0.0;
            fVar16 = *pfVar6;
            unaff_RBP[0xff] = *(float *)(lVar30 + 0x10);
            *(int8_t *)(unaff_RBP + 0x100) = *(int8_t *)(lVar24 + 0xca0 + lVar4);
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
            unaff_RBP[0xf4] = fVar16;
            unaff_RBP[0xf5] = fVar35;
            unaff_RBP[0xf6] = fVar31;
            unaff_RBP[0xf7] = fVar33;
            unaff_RBP[0xf8] = fVar34;
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
            if ((((cVar14 == *(char *)(unaff_R13 + 0xd8)) && (unaff_RSI != 0)) &&
                (0 < *(int *)(unaff_RSI + 0x30))) &&
               (((*(uint *)((longlong)*(int *)(unaff_RSI + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(unaff_RSI + 0xd0)) >> 9 & 1) == 0 ||
                (0 < *(short *)(unaff_RSI + 8))))) {
              pfVar18 = (float *)FUN_18051bd60(*(uint64_t *)(unaff_RBP + -0x1e),unaff_RBP + 0x180,
                                               *(int8_t *)
                                                (*(longlong *)(unaff_RSI + 0xf8) + 0x88),lVar28);
              fVar35 = *pfVar18;
              fVar31 = pfVar18[1];
              fVar33 = pfVar18[2];
              fVar34 = pfVar18[3];
              pfVar18 = *(float **)(unaff_R13 + 600);
              unaff_RBP[0xc] = fVar35;
              unaff_RBP[0xd] = fVar31;
              unaff_RBP[0xe] = fVar33;
              unaff_RBP[0xf] = fVar34;
              if (pfVar18 != (float *)0x0) goto LAB_1805a271b;
              fVar16 = -NAN;
            }
            else {
              unaff_RBP[0xc] = 0.0;
              unaff_RBP[0xd] = 0.0;
              unaff_RBP[0xe] = 0.0;
              unaff_RBP[0xf] = 0.0;
              pfVar18 = *(float **)(unaff_R13 + 600);
              fVar35 = unaff_RBP[0xc];
              fVar31 = unaff_RBP[0xd];
              fVar33 = unaff_RBP[0xe];
              fVar34 = unaff_RBP[0xf];
LAB_1805a271b:
              fVar16 = *pfVar18;
            }
            pfVar18 = unaff_RBP + 0xbc;
            unaff_RBP[0xd0] = fVar16;
            fVar16 = *(float *)(lVar30 + 0x10);
            unaff_RBP[0xc0] = 0.0;
            unaff_RBP[0xc1] = 0.0;
            unaff_RBP[0xc2] = 0.0;
            unaff_RBP[0xc3] = 0.0;
            unaff_RBP[0xdb] = fVar16;
            uVar20 = *(int8_t *)(lVar24 + 0xca0 + lVar4);
            unaff_RBP[0xd5] = 0.0;
            unaff_RBP[0xd6] = 0.0;
            unaff_RBP[0xd7] = 0.0;
            unaff_RBP[0xd8] = 0.0;
            *(int8_t *)(unaff_RBP + 0xdc) = uVar20;
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
            unaff_RBP[0xd2] = fVar31;
            unaff_RBP[0xd3] = fVar33;
            unaff_RBP[0xd4] = fVar34;
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
          lVar28 = in_stack_00000078[3];
          unaff_RBP[0x62] = 0.0;
          unaff_RBP[99] = 0.0;
          unaff_RBP[100] = 0.0;
          unaff_RBP[0x65] = 0.0;
          *(int8_t *)(unaff_RBP + 0x66) = 0xff;
          *(bool *)((longlong)unaff_RBP + 0x199) = (int)lVar28 == 1;
          unaff_RBP[0x67] = 0.0;
          FUN_1805a4590(0,unaff_RBP + 0x5c);
        }
      }
    }
    else {
      lVar29 = (longlong)*(int *)(lVar30 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a);
      lVar26 = *(longlong *)(*(longlong *)(lVar29 + 0x8f8) + 0x9e8);
      if (lVar26 != 0) {
        if (*(int *)(lVar26 + 0x30) < 1) {
          bVar7 = false;
        }
        else if (((*(uint *)((longlong)*(int *)(lVar26 + 0xf0) * 0xa0 + 0x50 +
                            *(longlong *)(lVar26 + 0xd0)) >> 9 & 1) == 0) ||
                (0 < *(short *)(lVar26 + 8))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          FUN_18051bd60(lVar29,unaff_RBP + 0x150,
                        *(int8_t *)(*(longlong *)(lVar26 + 0xf8) + 0x88),lVar28);
          uVar20 = *(int8_t *)(unaff_R13 + 0xd8);
          if (*(float **)(lVar29 + 0x288) == (float *)0x0) {
            fVar35 = -NAN;
          }
          else {
            fVar35 = **(float **)(lVar29 + 0x288);
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
          *(int8_t *)(unaff_RBP + 0x94) = uVar20;
          unaff_RBP[0x95] = 0.0;
          unaff_RBP[0x96] = 0.0;
          unaff_RBP[0x91] = -NAN;
          unaff_RBP[0x92] = -NAN;
          unaff_RBP[0x97] = 1.0;
          pfVar18 = (float *)func_0x00018055f040(unaff_RBP + 0x18c,unaff_RBP + 0x74);
          uVar32 = extraout_XMM0_Da;
          goto LAB_1805a2c68;
        }
      }
    }
LAB_1805a2c79:
    cVar14 = *(char *)(lVar24 + 0xca9 + lVar4);
    if (((cVar14 == '\0') && (2 < *(int *)(lVar24 + 0xc20 + lVar4) - 3U)) &&
       (*(char *)(lVar24 + 0xca2 + lVar4) < '\0')) {
      unaff_R14 = *(longlong *)(unaff_RBP + -0x1e);
    }
    else {
      unaff_R14 = *(longlong *)(unaff_RBP + -0x1e);
      FUN_1805253f0((longlong)*(int *)(lVar30 + 0x10) * 0xa60 + *(longlong *)(unaff_RBP + -0x1a),
                    unaff_RBP + 0x18,cVar14,*(int8_t *)(lVar24 + 0xca2 + lVar4),
                    (int)in_stack_00000078[1]);
    }
    lVar24 = *(longlong *)(unaff_RBP + -0x12) + 1;
    unaff_RDI = *(longlong **)(unaff_RBP + -0x10);
    *(longlong *)(unaff_RBP + -0x12) = lVar24;
    unaff_R12 = in_stack_00000078;
    param_3 = in_stack_00000070;
  } while (lVar24 < *(longlong *)(unaff_RBP + 6));
  fVar35 = unaff_RBP[-0x1f];
  *(float *)(unaff_R13 + 0x44) = fVar35;
  FUN_1805a0af0(fVar35,unaff_XMM7_Da,1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1c0) ^ (ulonglong)&stack0x00000000);
}








