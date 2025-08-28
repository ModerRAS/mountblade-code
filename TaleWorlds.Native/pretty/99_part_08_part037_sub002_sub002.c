#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part037_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805a1683(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805a1683(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float *pfVar6;
  bool bVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  int64_t lVar20;
  int64_t lVar21;
  int8_t uVar22;
  int iVar23;
  float fVar24;
  uint *puVar25;
  float *unaff_RBP;
  int64_t lVar26;
  int64_t *unaff_RDI;
  uint8_t uVar27;
  float fVar28;
  int64_t lVar29;
  char cVar30;
  int64_t *unaff_R12;
  int64_t lVar31;
  int64_t lVar32;
  int64_t unaff_R14;
  int64_t lVar33;
  int64_t lVar34;
  bool in_ZF;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int64_t *in_stack_00000078;
  
  if (in_ZF) {
    iVar2 = *(int *)(*(int64_t *)(unaff_R14 + 0x590) + 0x2498);
    if ((iVar2 == -1) || (*(int *)((int64_t)iVar2 * 0x68 + 0x58 + system_system_ui) != 0x14))
    goto FUN_1805a18db;
  }
  else {
    cVar15 = FUN_1805a3ab0(unaff_R14 + 0x28);
    if (cVar15 == '\0') goto FUN_1805a18db;
  }
  lVar32 = unaff_R14 + 0x28;
  lVar26 = *(int64_t *)(unaff_R14 + 0x8d8);
  *(int64_t *)(unaff_RBP + -0x18) = lVar26;
  *(int64_t *)(unaff_RBP + -0x1a) = lVar26 + 0x30a0;
  if ((int)unaff_R12[1] < 0) {
    lVar26 = 0;
LAB_1805a1771:
    unaff_RBP[-0x1c] = 2.8026e-45;
  }
  else {
    lVar26 = *(int64_t *)(*unaff_R12 + 0x8f8) + 8 + (int64_t)(int)unaff_R12[1] * 0x1f8;
    if ((lVar26 == 0) || (*(int *)(lVar26 + 0x30) < 1)) goto LAB_1805a1771;
    lVar31 = *(int64_t *)(lVar26 + 0xd0);
    lVar20 = (int64_t)*(int *)(lVar26 + 0xf0) * 0xa0;
    if (((*(uint *)(lVar20 + 0x50 + lVar31) >> 9 & 1) != 0) && (*(short *)(lVar26 + 8) < 1))
    goto LAB_1805a1771;
    if ((int)unaff_R12[3] == 0) {
      unaff_RBP[-0x1c] = *(float *)(lVar20 + 0x9c + lVar31);
    }
    else {
      unaff_RBP[-0x1c] = *(float *)(lVar20 + 0x98 + lVar31);
    }
  }
  lVar31 = unaff_RDI[1];
  lVar20 = *unaff_RDI;
  uVar27 = (uint8_t)((uint64_t)param_3 >> 8);
  fVar39 = 0.0;
  unaff_RBP[-0x1f] = *(float *)(unaff_R14 + 0x6c);
  bVar14 = true;
  iVar2 = (int)((lVar31 - lVar20) / 0xcb0);
  *(int64_t *)(unaff_RBP + 6) = (int64_t)iVar2;
  if (0 < iVar2) {
    lVar20 = 0;
    unaff_RBP[-0x12] = 0.0;
    unaff_RBP[-0x11] = 0.0;
    lVar31 = unaff_R14;
    do {
      if (!bVar14) break;
      lVar4 = *unaff_R12;
      if (*(int *)(lVar4 + 0x568) != 1) {
LAB_1805a186c:
        fVar39 = 0.0;
        unaff_RBP[-0x1f] = 0.0;
        break;
      }
      if ((*(byte *)(unaff_R12 + 4) & 1) == 0) {
        iVar2 = *(int *)(*(int64_t *)(lVar4 + 0x590) + 0x2498);
        if ((iVar2 == -1) || (*(int *)((int64_t)iVar2 * 0x68 + 0x58 + system_system_ui) != 0x14))
        goto LAB_1805a186c;
      }
      else {
        cVar15 = FUN_1805a3ab0(lVar4 + 0x28);
        if (cVar15 == '\0') goto LAB_1805a186c;
      }
      lVar4 = *unaff_RDI;
      lVar20 = lVar20 * 0xcb0;
      fVar38 = *(float *)(lVar20 + 0xc94 + lVar4);
      if (fVar38 <= fVar39) {
        fVar38 = fVar39;
      }
      cVar15 = *(char *)(lVar20 + 0xc18 + lVar4);
      bVar7 = *(int *)(lVar20 + 0xc20 + lVar4) - 3U < 3;
      if (cVar15 == '\0') {
        lVar34 = 0;
      }
      else {
        lVar34 = *(int64_t *)(lVar20 + 0xc08 + lVar4);
      }
      if (*(char *)((int64_t)unaff_R12 + 0x21) == '\x02') {
        if (lVar34 != 0) {
          lVar29 = *(int64_t *)(*(int64_t *)(unaff_R14 + 0x130) + 0x20);
          lVar33 = *(int64_t *)(lVar34 + 0x20);
          fVar36 = *(float *)(lVar29 + 0x24) - *(float *)(lVar33 + 0x24);
          fVar35 = *(float *)(lVar29 + 0x28) - *(float *)(lVar33 + 0x28);
          fVar39 = *(float *)(lVar29 + 0x2c) - *(float *)(lVar33 + 0x2c);
          if (system_system_ui * system_system_ui <= fVar36 * fVar36 + fVar35 * fVar35 + fVar39 * fVar39
             ) goto LAB_1805a19c5;
        }
LAB_1805a19d0:
        unaff_RBP[-0x1f] = 0.0;
        cVar15 = *(char *)(lVar20 + 0xc18 + lVar4);
      }
      else {
LAB_1805a19c5:
        if ((bVar7) && (*(char *)((int64_t)unaff_R12 + 0x21) == '\x01')) goto LAB_1805a19d0;
      }
      if ((cVar15 == '\0') && ((*(byte *)(unaff_R12 + 4) & 1) == 0)) {
        func_0x0001805d7910(*(uint64_t *)(lVar31 + 0x6e0),*(int32_t *)(unaff_R14 + 0x70),
                            *(uint64_t *)(lVar20 + lVar4));
      }
      if (lVar34 == 0) {
LAB_1805a1a1f:
        bVar13 = false;
      }
      else {
        cVar15 = FUN_18052da10(lVar34);
        bVar13 = true;
        if (cVar15 == '\0') goto LAB_1805a1a1f;
      }
      if ((lVar34 == 0) || (cVar15 = func_0x00018052da70(lVar34), cVar15 == '\0')) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      unaff_RBP[-0x20] = -NAN;
      unaff_RBP[-0x16] = -NAN;
      unaff_RBP[-0x15] = -NAN;
      unaff_RBP[-0x14] = -NAN;
      if (((((*(int *)(lVar20 + 0xc20 + lVar4) == 5) || (!bVar7)) || (lVar34 == 0)) ||
          (((lVar31 = *(int64_t *)(*(int64_t *)(lVar34 + 0x8f8) + 0x9f0), lVar31 == 0 ||
            (*(int *)(lVar31 + 0x30) < 1)) ||
           ((uVar5 = *(uint64_t *)
                      ((int64_t)*(int *)(lVar31 + 0xf0) * 0xa0 + 0x50 +
                      *(int64_t *)(lVar31 + 0xd0)), (uVar5 >> 9 & 1) != 0 &&
            (*(short *)(lVar31 + 8) < 1)))))) || ((uVar5 >> 0x1c & 1) == 0)) {
        cVar15 = '\0';
      }
      else {
        cVar15 = '\x01';
      }
      cVar16 = *(char *)(lVar20 + 0xc18 + lVar4);
      if ((bVar12) || (cVar16 == '\0')) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (((cVar16 == '\0') && (*(int64_t *)(lVar20 + lVar4) != 0)) &&
         (*(int64_t *)(*(int64_t *)(lVar20 + lVar4) + 0x10) != 0)) {
        cVar30 = '\x01';
      }
      else {
        cVar30 = '\0';
      }
      if ((bVar7) && (*(char *)(lVar20 + 0xca9 + lVar4) == '\0')) {
        unaff_RBP[-0x1f] = *(float *)(lVar20 + 0xc9c + lVar4);
        cVar16 = *(char *)(lVar20 + 0xc18 + lVar4);
      }
      if ((cVar16 == '\0') && (*(int64_t *)(lVar20 + lVar4) != 0)) {
        lVar31 = *(int64_t *)(*(int64_t *)(lVar20 + lVar4) + 0x10);
LAB_1805a1b3a:
        lVar29 = *(int64_t *)(lVar20 + 0xc10 + lVar4);
        if (lVar29 == 0) goto LAB_1805a1b4d;
        fVar39 = *(float *)(lVar29 + 100);
      }
      else {
        lVar31 = 0;
        if (cVar16 == '\0') goto LAB_1805a1b3a;
LAB_1805a1b4d:
        fVar39 = -NAN;
      }
      cVar16 = *(char *)(lVar20 + 0xca0 + lVar4);
      if (cVar16 == -1) {
        uVar22 = 0xff;
      }
      else {
        uVar22 = *(int8_t *)
                  (*(int64_t *)
                    (*(int64_t *)
                      (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar34 + 0x6d8) + 0x8a8) + 0x260) +
                      0x208) + 0x140) + 0x104 + (int64_t)cVar16 * 0x1b0);
      }
      func_0x0001805345e0(unaff_RBP + 0x18);
      lVar29 = *(int64_t *)(unaff_RBP + -0x10);
      unaff_RBP[0x37] = NAN;
      unaff_RBP[0x38] = NAN;
      unaff_RBP[0x39] = NAN;
      unaff_RBP[0x3a] = NAN;
      *(int16_t *)((int64_t)unaff_RBP + 0x65) = 0;
      unaff_RBP[0x3b] = NAN;
      unaff_RBP[0x3c] = NAN;
      unaff_RBP[0x3d] = NAN;
      unaff_RBP[0x3e] = NAN;
      *(int8_t *)((int64_t)unaff_RBP + 0x67) = 0;
      fVar35 = *(float *)(lVar29 + 0x30);
      *(int16_t *)((int64_t)unaff_RBP + 0x6a) = 0;
      unaff_RBP[0x27] = -NAN;
      unaff_RBP[0x28] = -NAN;
      unaff_RBP[0x29] = -NAN;
      unaff_RBP[0x2a] = -NAN;
      *(char *)(unaff_RBP + 0x18) = cVar15;
      *(int8_t *)((int64_t)unaff_RBP + 0x61) = *(int8_t *)(lVar20 + 0xcaa + lVar4);
      *(int8_t *)((int64_t)unaff_RBP + 0x62) = *(int8_t *)(unaff_R14 + 0x7e);
      *(int8_t *)((int64_t)unaff_RBP + 99) = *(int8_t *)(lVar20 + 0xc18 + lVar4);
      *(byte *)(unaff_RBP + 0x19) = (byte)~*(byte *)(lVar20 + 0xca2 + lVar4) >> 7;
      *(bool *)(unaff_RBP + 0x1a) = lVar31 != 0;
      *(int8_t *)((int64_t)unaff_RBP + 0x69) = *(int8_t *)(lVar20 + 0xca8 + lVar4);
      unaff_RBP[0x21] = fVar39;
      *(int8_t *)(unaff_RBP + 0x22) = *(int8_t *)(lVar20 + 0xc24 + lVar4);
      unaff_RBP[0x1b] = *(float *)(lVar20 + 0xc20 + lVar4);
      unaff_RBP[0x1c] = *(float *)(lVar29 + 0x28);
      unaff_RBP[0x1d] = *(float *)(lVar29 + 0x38);
      unaff_RBP[0x1e] = unaff_RBP[-0x1c];
      *(int8_t *)(unaff_RBP + 0x1f) = *(int8_t *)(lVar20 + 0xca0 + lVar4);
      *(int8_t *)((int64_t)unaff_RBP + 0x7d) = uVar22;
      *(int8_t *)((int64_t)unaff_RBP + 0x7e) = *(int8_t *)(lVar20 + 0xca1 + lVar4);
      unaff_RBP[0x20] = *(float *)(unaff_R14 + 0x70);
      unaff_RBP[0x23] = fVar35;
      unaff_RBP[0x24] = *(float *)(lVar20 + 0xc90 + lVar4);
      unaff_RBP[0x25] = *(float *)(lVar20 + 0xc94 + lVar4);
      unaff_RBP[0x26] = *(float *)(lVar20 + 0xc98 + lVar4);
      puVar1 = (uint64_t *)(lVar20 + 0xc48 + lVar4);
      uVar9 = puVar1[1];
      *(uint64_t *)(unaff_RBP + 0x2b) = *puVar1;
      *(uint64_t *)(unaff_RBP + 0x2d) = uVar9;
      pfVar19 = (float *)(lVar20 + 0xc58 + lVar4);
      fVar39 = pfVar19[1];
      fVar35 = pfVar19[2];
      fVar36 = pfVar19[3];
      unaff_RBP[0x2f] = *pfVar19;
      unaff_RBP[0x30] = fVar39;
      unaff_RBP[0x31] = fVar35;
      unaff_RBP[0x32] = fVar36;
      uVar9 = *(uint64_t *)(lVar20 + lVar4 + 0xc28);
      uVar10 = *(uint64_t *)(lVar20 + lVar4 + 0xc30);
      lVar29 = lVar20 + lVar4;
      unaff_RBP[0x3f] = NAN;
      unaff_RBP[0x40] = NAN;
      unaff_RBP[0x41] = NAN;
      unaff_RBP[0x42] = NAN;
      *(uint64_t *)(unaff_RBP + 0x33) = uVar9;
      *(uint64_t *)(unaff_RBP + 0x35) = uVar10;
      fVar39 = *(float *)(lVar29 + 0xc3c);
      fVar35 = *(float *)(lVar29 + 0xc40);
      fVar36 = *(float *)(lVar29 + 0xc44);
      unaff_RBP[0x43] = *(float *)(lVar29 + 0xc38);
      unaff_RBP[0x44] = fVar39;
      unaff_RBP[0x45] = fVar35;
      unaff_RBP[0x46] = fVar36;
      if ((bVar11) || (cVar30 != '\0')) {
        lVar29 = *(int64_t *)(unaff_RBP + -0x1a);
        if (lVar34 == 0) {
          lVar33 = 0;
        }
        else {
          lVar33 = (int64_t)*(int *)(lVar34 + 0x10) * 0xa60 + lVar29;
        }
        FUN_1804f91b0(*(uint64_t *)(unaff_RBP + -0x18),unaff_RBP + 0x18,
                      *(uint64_t *)(unaff_RBP + -0x1e),lVar33,lVar31);
        fVar39 = unaff_RBP[0x25];
        if (unaff_RBP[0x25] <= fVar38) {
          fVar39 = fVar38;
        }
        if ((((*(char *)(lVar20 + 0xc18 + lVar4) != '\0') && (*(char *)(unaff_RBP + 0x4c) == '\0'))
            && (cVar15 != '\0')) && (bVar13)) {
          lVar31 = *(int64_t *)(*(int64_t *)(lVar34 + 0x658) + 0x208);
          lVar33 = *(int64_t *)(lVar31 + 0x140);
          cVar15 = *(char *)(*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(lVar34 + 0x8f8) + 0x9f0) + 0xf8) + 0x88);
          lVar21 = (int64_t)cVar15;
          iVar2 = *(int *)(lVar21 * 0x1b0 + 0x110 + lVar33);
          while ((iVar2 == -1 && (cVar15 = (char)lVar21, cVar15 != -1))) {
            cVar15 = *(char *)(lVar21 + 0x100 + lVar31);
            lVar21 = (int64_t)cVar15;
            iVar2 = *(int *)(lVar21 * 0x1b0 + 0x110 + lVar33);
          }
          puVar25 = (uint *)((int64_t)cVar15 * 0x100 +
                            *(int64_t *)(*(int64_t *)(lVar34 + 0x658) + 0x18));
          do {
            LOCK();
            uVar3 = *puVar25;
            *puVar25 = *puVar25 | 1;
            UNLOCK();
          } while ((uVar3 & 1) != 0);
          fVar38 = (float)puVar25[1];
          fVar35 = (float)puVar25[2];
          fVar36 = (float)puVar25[3];
          fVar37 = (float)puVar25[4];
          fVar17 = (float)puVar25[5];
          fVar18 = (float)puVar25[6];
          fVar24 = (float)puVar25[7];
          fVar8 = (float)puVar25[8];
          unaff_RBP[0x1b0] = fVar38;
          unaff_RBP[0x1b1] = fVar35;
          unaff_RBP[0x1b2] = fVar36;
          unaff_RBP[0x1b3] = fVar37;
          unaff_RBP[0x1b4] = fVar17;
          unaff_RBP[0x1b5] = fVar18;
          unaff_RBP[0x1b6] = fVar24;
          unaff_RBP[0x1b7] = fVar8;
          fVar28 = 0.0;
          unaff_RBP[0x168] = fVar38;
          unaff_RBP[0x169] = fVar35;
          unaff_RBP[0x16a] = fVar36;
          unaff_RBP[0x16b] = fVar37;
          *puVar25 = 0;
          lVar31 = *(int64_t *)(lVar34 + 0x6d8);
          unaff_RBP[0x16c] = fVar17;
          unaff_RBP[0x16d] = fVar18;
          unaff_RBP[0x16e] = fVar24;
          unaff_RBP[0x16f] = fVar8;
          unaff_RBP[0x158] = fVar38;
          unaff_RBP[0x159] = fVar35;
          unaff_RBP[0x15a] = fVar36;
          unaff_RBP[0x15b] = fVar37;
          unaff_RBP[0x15c] = fVar17;
          unaff_RBP[0x15d] = fVar18;
          unaff_RBP[0x15e] = fVar24;
          unaff_RBP[0x15f] = fVar8;
          pfVar19 = (float *)FUN_180534930(*(int64_t *)(lVar31 + 0x8a8) + 0x70,unaff_RBP + 0x178,
                                           lVar4 + 0xc28 + lVar20);
          unaff_RBP[-0xb] = 3.4028235e+38;
          fVar38 = pfVar19[1];
          fVar35 = pfVar19[2];
          unaff_RBP[-0xe] = *pfVar19 - fVar17;
          unaff_RBP[-0xd] = fVar38 - fVar18;
          unaff_RBP[-0xc] = fVar35 - fVar24;
          FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 0x154,unaff_RBP + -0xe);
          lVar31 = lVar20 + lVar4;
          unaff_RBP[-7] = 3.4028235e+38;
          fVar38 = *(float *)(lVar31 + 0xc3c);
          fVar35 = *(float *)(lVar31 + 0xc38);
          fVar36 = *(float *)(lVar34 + 0x520);
          fVar37 = *(float *)(lVar34 + 0x524);
          fVar17 = *(float *)(lVar34 + 0x530);
          fVar18 = *(float *)(lVar34 + 0x534);
          unaff_RBP[-8] = *(float *)(lVar31 + 0xc40);
          unaff_RBP[-10] = fVar38 * fVar37 + fVar35 * fVar36;
          unaff_RBP[-9] = fVar35 * fVar17 + fVar38 * fVar18;
          FUN_180285b40(unaff_RBP + 0x158,unaff_RBP + 8);
          iVar2 = *(int *)(lVar34 + 0x10);
          fVar38 = (float)(int)unaff_RBP[0x4a] * 0.3;
          if (-1.0 <= fVar38) {
            if (1.0 <= fVar38) {
              fVar38 = 1.0;
            }
          }
          else {
            fVar38 = -1.0;
          }
          unaff_RBP[-3] = 3.4028235e+38;
          unaff_RBP[0x50] = 2.8026e-45;
          fVar35 = unaff_RBP[-3];
          unaff_RBP[0x51] = -NAN;
          *(int16_t *)(unaff_RBP + 0x5a) = 0xff;
          unaff_RBP[0x5b] = fVar28;
          unaff_RBP[-6] = fVar38 * unaff_RBP[8];
          unaff_RBP[-5] = fVar38 * unaff_RBP[9];
          unaff_RBP[-4] = fVar38 * unaff_RBP[10];
          unaff_RBP[-3] = fVar35;
          unaff_RBP[0x56] = fVar38 * unaff_RBP[8];
          unaff_RBP[0x57] = fVar38 * unaff_RBP[9];
          unaff_RBP[0x58] = fVar38 * unaff_RBP[10];
          unaff_RBP[0x59] = fVar35;
          unaff_RBP[0x52] = unaff_RBP[0x154];
          unaff_RBP[0x53] = unaff_RBP[0x155];
          unaff_RBP[0x54] = unaff_RBP[0x156];
          unaff_RBP[0x55] = unaff_RBP[0x157];
          FUN_1805a4590((int64_t)iVar2 * 0xa60 + 0x28 + lVar29,unaff_RBP + 0x50);
        }
        if (unaff_RBP[-0x20] == 4.2039e-45) goto LAB_1805a205f;
        fVar38 = fVar39;
        if ((1 < (uint)unaff_RBP[-0x20]) ||
           (cVar15 = FUN_1805a15d0(in_stack_00000078), cVar15 != '\0')) goto LAB_1805a2073;
      }
      else {
        unaff_RBP[-0x20] = 4.2039e-45;
        fVar39 = fVar38;
LAB_1805a205f:
        fVar38 = system_system_ui;
        if (system_system_ui <= fVar39) {
          fVar38 = fVar39;
        }
LAB_1805a2073:
        bVar14 = false;
        fVar39 = fVar38;
      }
      if (*(char *)(lVar20 + 0xc18 + lVar4) == '\0') {
        unaff_RBP[-0x1f] = 0.0;
        bVar14 = false;
        lVar31 = lVar4 + 0xc28 + lVar20;
        FUN_1804f6570(*(uint64_t *)(unaff_RBP + -0x18),*(uint64_t *)(lVar20 + 0xc88 + lVar4),
                      lVar31,lVar4 + 0xc38 + lVar20,lVar4 + 0xc78 + lVar20);
        lVar29 = *(int64_t *)(lVar20 + 0xc88 + lVar4);
        if (lVar29 != 0) {
          FUN_1804f8630(*(uint64_t *)(*(int64_t *)(unaff_RBP + -0x1e) + 0x8d8),
                        *(int32_t *)(*(int64_t *)(unaff_RBP + -0x1e) + 0x10),lVar26,
                        *(int32_t *)(lVar29 + 100),lVar31);
        }
      }
      else if ((bVar12) || (*(int *)(lVar20 + 0xc20 + lVar4) != 1)) {
        lVar31 = lVar4 + 0xc28 + lVar20;
      }
      else {
        lVar29 = (int64_t)*(int *)(lVar34 + 0x10) * 0xa60 + *(int64_t *)(unaff_RBP + -0x1a);
        puVar25 = (uint *)((int64_t)*(char *)(lVar20 + 0xca0 + lVar4) * 0x100 +
                          *(int64_t *)(*(int64_t *)(lVar29 + 0x658) + 0x18));
        do {
          LOCK();
          uVar3 = *puVar25;
          *puVar25 = *puVar25 | 1;
          UNLOCK();
        } while ((uVar3 & 1) != 0);
        fVar38 = (float)puVar25[1];
        fVar35 = (float)puVar25[2];
        fVar36 = (float)puVar25[3];
        fVar37 = (float)puVar25[4];
        fVar17 = (float)puVar25[5];
        fVar18 = (float)puVar25[6];
        fVar24 = (float)puVar25[7];
        fVar8 = (float)puVar25[8];
        unaff_RBP[0x1b8] = fVar38;
        unaff_RBP[0x1b9] = fVar35;
        unaff_RBP[0x1ba] = fVar36;
        unaff_RBP[0x1bb] = fVar37;
        unaff_RBP[0x1bc] = fVar17;
        unaff_RBP[0x1bd] = fVar18;
        unaff_RBP[0x1be] = fVar24;
        unaff_RBP[0x1bf] = fVar8;
        *puVar25 = 0;
        lVar33 = *(int64_t *)(lVar29 + 0x6d8);
        lVar31 = lVar4 + 0xc28 + lVar20;
        unaff_RBP[0x170] = fVar38;
        unaff_RBP[0x171] = fVar35;
        unaff_RBP[0x172] = fVar36;
        unaff_RBP[0x173] = fVar37;
        unaff_RBP[0x174] = fVar17;
        unaff_RBP[0x175] = fVar18;
        unaff_RBP[0x176] = fVar24;
        unaff_RBP[0x177] = fVar8;
        unaff_RBP[0x160] = fVar38;
        unaff_RBP[0x161] = fVar35;
        unaff_RBP[0x162] = fVar36;
        unaff_RBP[0x163] = fVar37;
        lVar33 = *(int64_t *)(lVar33 + 0x8a8);
        unaff_RBP[0x164] = fVar17;
        unaff_RBP[0x165] = fVar18;
        unaff_RBP[0x166] = fVar24;
        unaff_RBP[0x167] = fVar8;
        pfVar19 = (float *)FUN_180534930(lVar33 + 0x70,unaff_RBP + 0x17c,lVar31);
        unaff_RBP[1] = 3.4028235e+38;
        fVar38 = pfVar19[1];
        fVar35 = pfVar19[2];
        unaff_RBP[-2] = *pfVar19 - fVar17;
        unaff_RBP[-1] = fVar38 - fVar18;
        *unaff_RBP = fVar35 - fVar24;
        FUN_180285b40(unaff_RBP + 0x160,unaff_RBP + 0x14c,unaff_RBP + -2);
        FUN_1805ab940(*(uint64_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x98d920),
                      *(uint64_t *)(unaff_RBP + -0x1e),lVar29,
                      *(int8_t *)(lVar20 + 0xca0 + lVar4),unaff_RBP + 0x14c);
      }
      lVar29 = system_system_data_ui;
      uVar3 = *(uint *)(lVar20 + 0xc20 + lVar4);
      if ((((1 < uVar3) && (lVar26 != 0)) && (0 < *(int *)(lVar26 + 0x30))) &&
         (((*(uint *)((int64_t)*(int *)(lVar26 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar26 + 0xd0)
                     ) >> 9 & 1) == 0 || (0 < *(short *)(lVar26 + 8))))) {
        iVar2 = *(int *)(lVar26 + 0x34);
        lVar33 = *(int64_t *)(lVar20 + 0xc88 + lVar4);
        fVar35 = -*(float *)(lVar20 + 0xc7c + lVar4);
        unaff_RBP[2] = -*(float *)(lVar20 + 0xc78 + lVar4);
        fVar38 = *(float *)(lVar20 + 0xc80 + lVar4);
        unaff_RBP[3] = fVar35;
        unaff_RBP[4] = -fVar38;
        unaff_RBP[5] = 3.4028235e+38;
        if (((uVar3 - 2 & 0xfffffffc) == 0) && (uVar3 != 3)) {
          if (lVar33 == 0) {
            if ((uVar3 != 2) && (lVar33 = *(int64_t *)(lVar34 + 0x8f8), lVar33 != 0)) {
              if ((uVar3 == 5) ||
                 ((lVar21 = *(int64_t *)(lVar33 + 0x9f0), lVar21 == 0 ||
                  ((*(uint *)((int64_t)*(int *)(lVar21 + 0xf0) * 0xa0 + 0x50 +
                             *(int64_t *)(lVar21 + 0xd0)) >> 0x1c & 1) == 0)))) {
                lVar21 = *(int64_t *)(lVar33 + 0x9e8);
              }
              if (lVar21 != 0) {
                iVar23 = *(int *)(lVar21 + 0x34);
                goto LAB_1805a23af;
              }
            }
          }
          else {
            iVar23 = *(int *)(lVar33 + 100);
LAB_1805a23af:
            if (iVar23 != -1) {
              lVar33 = *(int64_t *)
                        (system_system_ui +
                        (int64_t)
                        *(int *)((int64_t)iVar2 * 0x68 + *(int64_t *)(lVar29 + 0x38) + 100) * 8);
              iVar2 = *(int *)(lVar33 + (int64_t)iVar23 * 0x28);
              if (iVar2 < 0) {
                iVar2 = *(int *)(lVar33 + (int64_t)*(int *)(*(int64_t *)(lVar29 + 0x28) + 100) *
                                          0x28);
              }
              if (iVar2 != -1) {
                FUN_1804eb8d0(*(uint64_t *)(unaff_RBP + -0x18),fVar35,lVar31,unaff_RBP + 2);
              }
            }
          }
        }
      }
      lVar29 = lVar32;
      if ((*(byte *)(in_stack_00000078 + 4) & 1) == 0) {
        if (*(char *)(lVar20 + 0xcab + lVar4) == '\0') {
          if ((bVar7) || (iVar2 = *(int *)(lVar20 + 0xc20 + lVar4), iVar2 == 2)) {
            if ((((*(char *)(lVar20 + 0xca1 + lVar4) == *(char *)(unaff_R14 + 0x100)) &&
                 (lVar26 != 0)) && (0 < *(int *)(lVar26 + 0x30))) &&
               (((*(uint *)((int64_t)*(int *)(lVar26 + 0xf0) * 0xa0 + 0x50 +
                           *(int64_t *)(lVar26 + 0xd0)) >> 9 & 1) == 0 ||
                (0 < *(short *)(lVar26 + 8))))) {
              lVar33 = *(int64_t *)(unaff_RBP + -0x1e);
              pfVar19 = (float *)FUN_18051bd60(lVar33,unaff_RBP + 0x188,
                                               *(int8_t *)(*(int64_t *)(lVar26 + 0xf8) + 0x88),
                                               lVar31);
              fVar38 = *pfVar19;
              fVar35 = pfVar19[1];
              fVar36 = pfVar19[2];
              fVar37 = pfVar19[3];
              unaff_RBP[0x14] = fVar38;
              unaff_RBP[0x15] = fVar35;
              unaff_RBP[0x16] = fVar36;
              unaff_RBP[0x17] = fVar37;
            }
            else {
              lVar33 = *(int64_t *)(unaff_RBP + -0x1e);
              unaff_RBP[0x14] = 0.0;
              unaff_RBP[0x15] = 0.0;
              unaff_RBP[0x16] = 0.0;
              unaff_RBP[0x17] = 0.0;
              fVar38 = unaff_RBP[0x14];
              fVar35 = unaff_RBP[0x15];
              fVar36 = unaff_RBP[0x16];
              fVar37 = unaff_RBP[0x17];
            }
            iVar2 = *(int *)(lVar20 + 0xc20 + lVar4);
            if (iVar2 == 2) {
              if ((uint)unaff_RBP[-0x20] < 2) {
                unaff_RBP[0x68] = 1.4013e-45;
                unaff_RBP[0x69] = -NAN;
                unaff_RBP[0x6a] = 0.0;
                unaff_RBP[0x6b] = 0.0;
                unaff_RBP[0x6c] = 0.0;
                unaff_RBP[0x6d] = 0.0;
                lVar31 = in_stack_00000078[3];
                unaff_RBP[0x6e] = 0.0;
                unaff_RBP[0x6f] = 0.0;
                unaff_RBP[0x70] = 0.0;
                unaff_RBP[0x71] = 0.0;
                *(int8_t *)(unaff_RBP + 0x72) = 0xff;
                *(bool *)((int64_t)unaff_RBP + 0x1c9) = (int)lVar31 == 1;
                unaff_RBP[0x73] = 0.0;
                FUN_1805a4590(lVar32,unaff_RBP + 0x68);
              }
              else {
                iVar2 = *(int *)(*(int64_t *)(lVar33 + 0x590) + 0x2498);
                if ((iVar2 != -1) &&
                   (*(int *)((int64_t)iVar2 * 0x68 + 0x58 + system_system_ui) == 0x14)) {
                  pfVar6 = *(float **)(unaff_R14 + 0x280);
                  pfVar19 = unaff_RBP + 0x104;
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
                  unaff_RBP[0x119] = fVar38;
                  unaff_RBP[0x11a] = fVar35;
                  unaff_RBP[0x11b] = fVar36;
                  unaff_RBP[0x11c] = fVar37;
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
                  goto LAB_1805a2c68;
                }
              }
              goto LAB_1805a2c79;
            }
            fVar17 = *(float *)(lVar20 + 0xc98 + lVar4);
            if (bVar13) {
              if (iVar2 == 4) {
                fVar24 = *(float *)(lVar34 + 0x10);
                fVar18 = 1.4013e-44;
              }
              else {
                fVar24 = *(float *)(lVar34 + 0x10);
                fVar18 = 1.54143e-44;
                if (iVar2 == 3) {
                  fVar18 = 1.26117e-44;
                }
              }
            }
            else {
              fVar18 = 1.12104e-44;
              fVar24 = -NAN;
            }
            unaff_RBP[0x13b] = fVar18;
            pfVar19 = *(float **)(unaff_R14 + 0x280);
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
            unaff_RBP[0x13d] = fVar38;
            unaff_RBP[0x13e] = fVar35;
            unaff_RBP[0x13f] = fVar36;
            unaff_RBP[0x140] = fVar37;
            unaff_RBP[0x147] = fVar24;
            unaff_RBP[0x141] = 0.0;
            unaff_RBP[0x142] = 0.0;
            unaff_RBP[0x143] = 0.0;
            unaff_RBP[0x144] = 0.0;
            *(int8_t *)(unaff_RBP + 0x148) = 0xff;
            unaff_RBP[0x145] = -NAN;
            unaff_RBP[0x146] = -NAN;
            unaff_RBP[0x14b] = 1.0;
LAB_1805a2c68:
            FUN_1805a4a20(lVar29,1,pfVar19);
          }
          else if (iVar2 == 1) {
            cVar15 = *(char *)(lVar20 + 0xca1 + lVar4);
            if ((int)unaff_RBP[-0x20] - 3U < 2) {
              iVar2 = *(int *)(*(int64_t *)(*(int64_t *)(unaff_RBP + -0x1e) + 0x590) + 0x2498);
              if ((iVar2 != -1) &&
                 (*(int *)((int64_t)iVar2 * 0x68 + 0x58 + system_system_ui) == 0x14)) {
                if (((cVar15 == *(char *)(unaff_R14 + 0x100)) &&
                    ((lVar26 != 0 && (0 < *(int *)(lVar26 + 0x30))))) &&
                   (((*(uint *)((int64_t)*(int *)(lVar26 + 0xf0) * 0xa0 + 0x50 +
                               *(int64_t *)(lVar26 + 0xd0)) >> 9 & 1) == 0 ||
                    (0 < *(short *)(lVar26 + 8))))) {
                  pfVar19 = (float *)FUN_18051bd60(*(int64_t *)(unaff_RBP + -0x1e),
                                                   unaff_RBP + 0x184,
                                                   *(int8_t *)
                                                    (*(int64_t *)(lVar26 + 0xf8) + 0x88),lVar31);
                  fVar38 = *pfVar19;
                  fVar35 = pfVar19[1];
                  fVar36 = pfVar19[2];
                  fVar37 = pfVar19[3];
                  unaff_RBP[0x10] = fVar38;
                  unaff_RBP[0x11] = fVar35;
                  unaff_RBP[0x12] = fVar36;
                  unaff_RBP[0x13] = fVar37;
                }
                else {
                  unaff_RBP[0x10] = 0.0;
                  unaff_RBP[0x11] = 0.0;
                  unaff_RBP[0x12] = 0.0;
                  unaff_RBP[0x13] = 0.0;
                  fVar38 = unaff_RBP[0x10];
                  fVar35 = unaff_RBP[0x11];
                  fVar36 = unaff_RBP[0x12];
                  fVar37 = unaff_RBP[0x13];
                }
                pfVar6 = *(float **)(unaff_R14 + 0x280);
                pfVar19 = unaff_RBP + 0xe0;
                *(int8_t *)(unaff_RBP + 0xf2) = 0;
                unaff_RBP[0xe4] = 0.0;
                unaff_RBP[0xe5] = 0.0;
                unaff_RBP[0xe6] = 0.0;
                unaff_RBP[0xe7] = 0.0;
                fVar17 = *pfVar6;
                unaff_RBP[0xff] = *(float *)(lVar34 + 0x10);
                *(int8_t *)(unaff_RBP + 0x100) = *(int8_t *)(lVar20 + 0xca0 + lVar4);
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
                unaff_RBP[0xf5] = fVar38;
                unaff_RBP[0xf6] = fVar35;
                unaff_RBP[0xf7] = fVar36;
                unaff_RBP[0xf8] = fVar37;
                unaff_RBP[0x101] = 0.0;
                unaff_RBP[0x102] = 0.0;
                unaff_RBP[0xf9] = 0.0;
                unaff_RBP[0xfa] = 0.0;
                unaff_RBP[0xfb] = 0.0;
                unaff_RBP[0xfc] = 0.0;
                unaff_RBP[0xfd] = -NAN;
                unaff_RBP[0xfe] = -NAN;
                unaff_RBP[0x103] = 1.0;
                goto LAB_1805a2c68;
              }
            }
            else {
              if (unaff_RBP[-0x20] == 2.8026e-45) {
                if ((((cVar15 == *(char *)(unaff_R14 + 0x100)) && (lVar26 != 0)) &&
                    (0 < *(int *)(lVar26 + 0x30))) &&
                   (((*(uint *)((int64_t)*(int *)(lVar26 + 0xf0) * 0xa0 + 0x50 +
                               *(int64_t *)(lVar26 + 0xd0)) >> 9 & 1) == 0 ||
                    (0 < *(short *)(lVar26 + 8))))) {
                  pfVar19 = (float *)FUN_18051bd60(*(uint64_t *)(unaff_RBP + -0x1e),
                                                   unaff_RBP + 0x180,
                                                   *(int8_t *)
                                                    (*(int64_t *)(lVar26 + 0xf8) + 0x88),lVar31);
                  fVar38 = *pfVar19;
                  fVar35 = pfVar19[1];
                  fVar36 = pfVar19[2];
                  fVar37 = pfVar19[3];
                  pfVar19 = *(float **)(unaff_R14 + 0x280);
                  unaff_RBP[0xc] = fVar38;
                  unaff_RBP[0xd] = fVar35;
                  unaff_RBP[0xe] = fVar36;
                  unaff_RBP[0xf] = fVar37;
                  if (pfVar19 != (float *)0x0) goto LAB_1805a271b;
                  fVar17 = -NAN;
                }
                else {
                  unaff_RBP[0xc] = 0.0;
                  unaff_RBP[0xd] = 0.0;
                  unaff_RBP[0xe] = 0.0;
                  unaff_RBP[0xf] = 0.0;
                  pfVar19 = *(float **)(unaff_R14 + 0x280);
                  fVar38 = unaff_RBP[0xc];
                  fVar35 = unaff_RBP[0xd];
                  fVar36 = unaff_RBP[0xe];
                  fVar37 = unaff_RBP[0xf];
LAB_1805a271b:
                  fVar17 = *pfVar19;
                }
                pfVar19 = unaff_RBP + 0xbc;
                unaff_RBP[0xd0] = fVar17;
                fVar17 = *(float *)(lVar34 + 0x10);
                unaff_RBP[0xc0] = 0.0;
                unaff_RBP[0xc1] = 0.0;
                unaff_RBP[0xc2] = 0.0;
                unaff_RBP[0xc3] = 0.0;
                unaff_RBP[0xdb] = fVar17;
                uVar22 = *(int8_t *)(lVar20 + 0xca0 + lVar4);
                unaff_RBP[0xd5] = 0.0;
                unaff_RBP[0xd6] = 0.0;
                unaff_RBP[0xd7] = 0.0;
                unaff_RBP[0xd8] = 0.0;
                *(int8_t *)(unaff_RBP + 0xdc) = uVar22;
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
                unaff_RBP[0xd1] = fVar38;
                unaff_RBP[0xd2] = fVar35;
                unaff_RBP[0xd3] = fVar36;
                unaff_RBP[0xd4] = fVar37;
                unaff_RBP[0xdd] = 0.5;
                unaff_RBP[0xde] = 0.0;
                unaff_RBP[0xd9] = -NAN;
                unaff_RBP[0xda] = -NAN;
                unaff_RBP[0xdf] = 1.0;
                goto LAB_1805a2c68;
              }
              unaff_RBP[0x5c] = 1.4013e-45;
              unaff_RBP[0x5d] = -NAN;
              unaff_RBP[0x5e] = 0.0;
              unaff_RBP[0x5f] = 0.0;
              unaff_RBP[0x60] = 0.0;
              unaff_RBP[0x61] = 0.0;
              lVar31 = in_stack_00000078[3];
              unaff_RBP[0x62] = 0.0;
              unaff_RBP[99] = 0.0;
              unaff_RBP[100] = 0.0;
              unaff_RBP[0x65] = 0.0;
              *(int8_t *)(unaff_RBP + 0x66) = 0xff;
              *(bool *)((int64_t)unaff_RBP + 0x199) = (int)lVar31 == 1;
              unaff_RBP[0x67] = 0.0;
              FUN_1805a4590(lVar32,unaff_RBP + 0x5c);
            }
          }
        }
        else {
          lVar33 = (int64_t)*(int *)(lVar34 + 0x10) * 0xa60 + *(int64_t *)(unaff_RBP + -0x1a);
          lVar29 = *(int64_t *)(*(int64_t *)(lVar33 + 0x8f8) + 0x9e8);
          if (lVar29 != 0) {
            if (*(int *)(lVar29 + 0x30) < 1) {
              bVar7 = false;
            }
            else if (((*(uint *)((int64_t)*(int *)(lVar29 + 0xf0) * 0xa0 + 0x50 +
                                *(int64_t *)(lVar29 + 0xd0)) >> 9 & 1) == 0) ||
                    (0 < *(short *)(lVar29 + 8))) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              FUN_18051bd60(lVar33,unaff_RBP + 0x150,
                            *(int8_t *)(*(int64_t *)(lVar29 + 0xf8) + 0x88),lVar31);
              lVar29 = lVar33 + 0x28;
              uVar22 = *(int8_t *)(unaff_R14 + 0x100);
              if (*(float **)(lVar33 + 0x288) == (float *)0x0) {
                fVar38 = -NAN;
              }
              else {
                fVar38 = **(float **)(lVar33 + 0x288);
              }
              unaff_RBP[0x93] = *(float *)(*(int64_t *)(unaff_RBP + -0x1e) + 0x10);
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
              unaff_RBP[0x88] = fVar38;
              unaff_RBP[0x8d] = 0.0;
              unaff_RBP[0x8e] = 0.0;
              unaff_RBP[0x8f] = 0.0;
              unaff_RBP[0x90] = 0.0;
              *(int8_t *)(unaff_RBP + 0x94) = uVar22;
              unaff_RBP[0x95] = 0.0;
              unaff_RBP[0x96] = 0.0;
              unaff_RBP[0x91] = -NAN;
              unaff_RBP[0x92] = -NAN;
              unaff_RBP[0x97] = 1.0;
              pfVar19 = (float *)func_0x00018055f040(unaff_RBP + 0x18c,unaff_RBP + 0x74);
              goto LAB_1805a2c68;
            }
          }
        }
      }
      else if (!bVar14) {
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
        goto LAB_1805a2c68;
      }
LAB_1805a2c79:
      cVar15 = *(char *)(lVar20 + 0xca9 + lVar4);
      if (((cVar15 == '\0') && (2 < *(int *)(lVar20 + 0xc20 + lVar4) - 3U)) &&
         (*(char *)(lVar20 + 0xca2 + lVar4) < '\0')) {
        lVar31 = *(int64_t *)(unaff_RBP + -0x1e);
      }
      else {
        lVar31 = *(int64_t *)(unaff_RBP + -0x1e);
        FUN_1805253f0((int64_t)*(int *)(lVar34 + 0x10) * 0xa60 + *(int64_t *)(unaff_RBP + -0x1a),
                      unaff_RBP + 0x18,cVar15,*(int8_t *)(lVar20 + 0xca2 + lVar4),
                      (int)in_stack_00000078[1]);
      }
      uVar27 = 0;
      lVar20 = *(int64_t *)(unaff_RBP + -0x12) + 1;
      unaff_RDI = *(int64_t **)(unaff_RBP + -0x10);
      *(int64_t *)(unaff_RBP + -0x12) = lVar20;
      unaff_R12 = in_stack_00000078;
    } while (lVar20 < *(int64_t *)(unaff_RBP + 6));
  }
  *(float *)(unaff_R14 + 0x6c) = unaff_RBP[-0x1f];
  FUN_1805a0af0(lVar32,fVar39,CONCAT71(uVar27,1));
FUN_1805a18db:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1c0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






