#include "TaleWorlds.Native.Split.h"

// 99_part_08_part034.c - 1 个函数

// 函数: void FUN_1805a0cf5(uint64_t param_1,int64_t param_2)
void FUN_1805a0cf5(uint64_t param_1,int64_t param_2)

{
  int32_t *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int32_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  int32_t uVar22;
  float *pfVar23;
  int64_t lVar24;
  int8_t uVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  uint64_t *unaff_RBP;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t lVar32;
  int8_t uVar33;
  uint64_t *puVar34;
  int64_t *in_stack_00000078;
  
  iVar26 = (int)(param_2 >> 10) - (int)(param_2 >> 0x3f);
  if (iVar26 < 1) {
FUN_1805a15a6:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(unaff_RBP[0x32] ^ (uint64_t)&stack0x00000000);
  }
  lVar29 = 0;
  unaff_RBP[-0xc] = 0;
LAB_1805a0d60:
  lVar24 = *unaff_R12;
  if (*(char *)(lVar29 + 0xc18 + lVar24) == '\0') {
    lVar32 = 0;
LAB_1805a0d8e:
    if ((((((*(int *)(lVar29 + 0xc20 + lVar24) - 3U < 3) && (lVar32 != 0)) &&
          (lVar31 = *(int64_t *)(*(int64_t *)(lVar32 + 0x8f8) + 0x9f0), lVar31 != 0)) &&
         (0 < *(int *)(lVar31 + 0x30))) &&
        ((uVar7 = *(uint64_t *)
                   ((int64_t)*(int *)(lVar31 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar31 + 0xd0)),
         (uVar7 >> 9 & 1) == 0 || (0 < *(short *)(lVar31 + 8))))) && ((uVar7 >> 0x1c & 1) != 0)) {
      uVar33 = 1;
    }
    else {
      uVar33 = 0;
    }
    *(int32_t *)(unaff_RBP + -0x10) = 0xffffffff;
    if ((lVar32 == 0) || (cVar21 = func_0x00018052da70(), cVar21 == '\0')) {
      cVar21 = *(char *)(lVar29 + 0xc18 + lVar24);
      bVar20 = false;
      if (cVar21 == '\0') goto LAB_1805a0e22;
      bVar18 = true;
    }
    else {
      cVar21 = *(char *)(lVar29 + 0xc18 + lVar24);
      bVar20 = true;
LAB_1805a0e22:
      bVar18 = false;
    }
    if (((cVar21 == '\0') && (*(int64_t *)(lVar29 + lVar24) != 0)) &&
       (*(int64_t *)(*(int64_t *)(lVar29 + lVar24) + 0x10) != 0)) {
      bVar19 = true;
    }
    else {
      bVar19 = false;
    }
    if ((bVar18) || (bVar19)) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    if ((cVar21 == '\0') && (*(int64_t *)(lVar29 + lVar24) != 0)) {
      lVar31 = *(int64_t *)(*(int64_t *)(lVar29 + lVar24) + 0x10);
LAB_1805a0e7b:
      lVar30 = *(int64_t *)(lVar29 + 0xc10 + lVar24);
      if (lVar30 == 0) goto LAB_1805a0e8e;
      uVar22 = *(int32_t *)(lVar30 + 100);
    }
    else {
      lVar31 = 0;
      if (cVar21 == '\0') goto LAB_1805a0e7b;
LAB_1805a0e8e:
      uVar22 = 0xffffffff;
    }
    cVar21 = *(char *)(lVar29 + 0xca0 + lVar24);
    if (cVar21 == -1) {
      uVar25 = 0xff;
    }
    else {
      uVar25 = *(int8_t *)
                (*(int64_t *)
                  (*(int64_t *)
                    (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar32 + 0x6d8) + 0x8a8) + 0x260) +
                    0x208) + 0x140) + 0x104 + (int64_t)cVar21 * 0x1b0);
    }
    *(int32_t *)((int64_t)unaff_RBP + -0x4f) = 0;
    *(int16_t *)(unaff_RBP + -9) = 0;
    *(uint64_t *)((int64_t)unaff_RBP + -0x44) = 0xffffffffffffffff;
    *(uint64_t *)((int64_t)unaff_RBP + -0x3c) = 0xffffffffffffffff;
    *(int16_t *)((int64_t)unaff_RBP + -0x34) = 0xffff;
    unaff_RBP[-6] = 0xffffffffffffffff;
    *unaff_RBP = 0;
    unaff_RBP[1] = 0;
    unaff_RBP[2] = 0;
    unaff_RBP[3] = 0;
    *(int8_t *)((int64_t)unaff_RBP + -0x32) = 0xff;
    *(int8_t *)(unaff_RBP + -5) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -0x24) = 0xbf800000;
    *(int32_t *)(unaff_RBP + -4) = 0xbf800000;
    *(int32_t *)((int64_t)unaff_RBP + -0x1c) = 0xbf800000;
    *(int32_t *)(unaff_RBP + -3) = 0xbf800000;
    *(int32_t *)((int64_t)unaff_RBP + -4) = 0;
    unaff_RBP[10] = 0;
    unaff_RBP[0xb] = 0;
    lVar30 = in_stack_00000078[6];
    unaff_RBP[0xc] = 0;
    unaff_RBP[0xd] = 0xbf80000000000000;
    unaff_RBP[4] = 0;
    *(int32_t *)(unaff_RBP + 5) = 0;
    *(int32_t *)((int64_t)unaff_RBP + 0x4c) = 0;
    *(int32_t *)(unaff_RBP + 0xe) = 0xbf800000;
    *(int32_t *)((int64_t)unaff_RBP + 0x74) = 0x80000000;
    *(int32_t *)(unaff_RBP + 0xf) = 0x80000000;
    *(int32_t *)((int64_t)unaff_RBP + 0x7c) = 0x80000000;
    *(int8_t *)(unaff_RBP + 0x10) = 0;
    *(int16_t *)((int64_t)unaff_RBP + -0x4b) = 0;
    *(int8_t *)((int64_t)unaff_RBP + -0x49) = 0;
    *(int16_t *)((int64_t)unaff_RBP + -0x46) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -0x14) = 0xffc00000;
    *(int32_t *)(unaff_RBP + -2) = 0xffc00000;
    *(int32_t *)((int64_t)unaff_RBP + -0xc) = 0xffc00000;
    *(int32_t *)(unaff_RBP + -1) = 0xffc00000;
    *(int32_t *)((int64_t)unaff_RBP + 0x2c) = 0x7fc00000;
    *(int32_t *)(unaff_RBP + 6) = 0x7fc00000;
    *(int32_t *)((int64_t)unaff_RBP + 0x34) = 0x7fc00000;
    *(int32_t *)(unaff_RBP + 7) = 0x7fc00000;
    *(int8_t *)(unaff_RBP + -10) = uVar33;
    *(int32_t *)((int64_t)unaff_RBP + 0x3c) = 0x7fc00000;
    *(int32_t *)(unaff_RBP + 8) = 0x7fc00000;
    *(int32_t *)((int64_t)unaff_RBP + 0x44) = 0x7fc00000;
    *(int32_t *)(unaff_RBP + 9) = 0x7fc00000;
    *(int8_t *)((int64_t)unaff_RBP + -0x4f) = *(int8_t *)(lVar29 + 0xcaa + lVar24);
    *(int8_t *)((int64_t)unaff_RBP + -0x4e) = *(int8_t *)(unaff_R13 + 0x7e);
    *(int8_t *)((int64_t)unaff_RBP + -0x4d) = *(int8_t *)(lVar29 + 0xc18 + lVar24);
    *(byte *)((int64_t)unaff_RBP + -0x4c) = (byte)~*(byte *)(lVar29 + 0xca2 + lVar24) >> 7;
    *(bool *)(unaff_RBP + -9) = lVar31 != 0;
    *(int8_t *)((int64_t)unaff_RBP + -0x47) = *(int8_t *)(lVar29 + 0xca8 + lVar24);
    *(int32_t *)((int64_t)unaff_RBP + -0x2c) = uVar22;
    *(int8_t *)(unaff_RBP + -5) = *(int8_t *)(lVar29 + 0xc24 + lVar24);
    *(int32_t *)((int64_t)unaff_RBP + -0x44) = *(int32_t *)(lVar29 + 0xc20 + lVar24);
    *(int *)(unaff_RBP + -8) = (int)in_stack_00000078[5];
    *(int32_t *)((int64_t)unaff_RBP + -0x3c) = 1;
    *(int32_t *)(unaff_RBP + -7) = 2;
    *(int8_t *)((int64_t)unaff_RBP + -0x34) = *(int8_t *)(lVar29 + 0xca0 + lVar24);
    *(int8_t *)((int64_t)unaff_RBP + -0x33) = uVar25;
    *(int8_t *)((int64_t)unaff_RBP + -0x32) = *(int8_t *)(lVar29 + 0xca1 + lVar24);
    *(int32_t *)(unaff_RBP + -6) = *(int32_t *)(unaff_R13 + 0x70);
    *(int *)((int64_t)unaff_RBP + -0x24) = (int)lVar30;
    *(int32_t *)(unaff_RBP + -4) = *(int32_t *)(lVar29 + 0xc90 + lVar24);
    *(int32_t *)((int64_t)unaff_RBP + -0x1c) = *(int32_t *)(lVar29 + 0xc94 + lVar24);
    *(int32_t *)(unaff_RBP + -3) = *(int32_t *)(lVar29 + 0xc98 + lVar24);
    puVar34 = (uint64_t *)(lVar29 + 0xc48 + lVar24);
    uVar16 = puVar34[1];
    *(uint64_t *)((int64_t)unaff_RBP + -4) = *puVar34;
    *(uint64_t *)((int64_t)unaff_RBP + 4) = uVar16;
    puVar1 = (int32_t *)(lVar29 + 0xc58 + lVar24);
    uVar22 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    *(int32_t *)((int64_t)unaff_RBP + 0xc) = *puVar1;
    *(int32_t *)(unaff_RBP + 2) = uVar22;
    *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar6;
    *(int32_t *)(unaff_RBP + 3) = uVar8;
    puVar34 = (uint64_t *)(lVar24 + 0xc28 + lVar29);
    uVar16 = *puVar34;
    uVar17 = puVar34[1];
    *(int32_t *)((int64_t)unaff_RBP + 0x4c) = 0x7fc00000;
    *(int32_t *)(unaff_RBP + 10) = 0x7fc00000;
    *(int32_t *)((int64_t)unaff_RBP + 0x54) = 0x7fc00000;
    *(int32_t *)(unaff_RBP + 0xb) = 0x7fc00000;
    *(uint64_t *)((int64_t)unaff_RBP + 0x1c) = uVar16;
    *(uint64_t *)((int64_t)unaff_RBP + 0x24) = uVar17;
    puVar1 = (int32_t *)(lVar29 + 0xc38 + lVar24);
    uVar22 = puVar1[1];
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
    *(int32_t *)((int64_t)unaff_RBP + 0x5c) = *puVar1;
    *(int32_t *)(unaff_RBP + 0xc) = uVar22;
    *(int32_t *)((int64_t)unaff_RBP + 100) = uVar6;
    *(int32_t *)(unaff_RBP + 0xd) = uVar8;
    if (bVar18) {
      unaff_RBP[-0xf] = 0xffffffffffffffff;
      *(int32_t *)(unaff_RBP + -0xe) = 0xffffffff;
      if (lVar32 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = (int64_t)*(int *)(lVar32 + 0x10) * 0xa60 + unaff_RBP[-0xd] + 0x30a0;
      }
      FUN_1804f91b0(unaff_RBP[-0xd],unaff_RBP + -10,0x7fc00000,lVar30,lVar31);
      if ((((*(int *)(unaff_RBP + -0xf) != -1) || (*(int *)((int64_t)unaff_RBP + -0x74) != -1)) ||
          (*(int *)(unaff_RBP + -0xe) != -1)) && (lVar32 != 0)) {
        lVar31 = (int64_t)*(int *)(lVar32 + 0x10) * 0xa60 + unaff_RBP[-0xd] + 0x30a0;
        puVar28 = (uint *)((int64_t)*(char *)(lVar29 + 0xca0 + lVar24) * 0x100 +
                          *(int64_t *)(*(int64_t *)(lVar31 + 0x658) + 0x18));
        do {
          LOCK();
          uVar2 = *puVar28;
          *puVar28 = *puVar28 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        uVar2 = puVar28[1];
        uVar9 = puVar28[2];
        uVar10 = puVar28[3];
        uVar11 = puVar28[4];
        fVar12 = (float)puVar28[5];
        fVar13 = (float)puVar28[6];
        fVar14 = (float)puVar28[7];
        uVar15 = puVar28[8];
        *(uint *)(unaff_RBP + 0x2e) = uVar2;
        *(uint *)((int64_t)unaff_RBP + 0x174) = uVar9;
        *(uint *)(unaff_RBP + 0x2f) = uVar10;
        *(uint *)((int64_t)unaff_RBP + 0x17c) = uVar11;
        *(float *)(unaff_RBP + 0x30) = fVar12;
        *(float *)((int64_t)unaff_RBP + 0x184) = fVar13;
        *(float *)(unaff_RBP + 0x31) = fVar14;
        *(uint *)((int64_t)unaff_RBP + 0x18c) = uVar15;
        *puVar28 = 0;
        lVar31 = *(int64_t *)(lVar31 + 0x6d8);
        *(uint *)(unaff_RBP + 0x28) = uVar2;
        *(uint *)((int64_t)unaff_RBP + 0x144) = uVar9;
        *(uint *)(unaff_RBP + 0x29) = uVar10;
        *(uint *)((int64_t)unaff_RBP + 0x14c) = uVar11;
        *(float *)(unaff_RBP + 0x2a) = fVar12;
        *(float *)((int64_t)unaff_RBP + 0x154) = fVar13;
        *(float *)(unaff_RBP + 0x2b) = fVar14;
        *(uint *)((int64_t)unaff_RBP + 0x15c) = uVar15;
        pfVar23 = (float *)FUN_180534930(*(int64_t *)(lVar31 + 0x8a8) + 0x70,unaff_RBP + 0x2c,
                                         puVar34);
        *(int32_t *)((int64_t)unaff_RBP + 0x9c) = 0x7f7fffff;
        fVar3 = pfVar23[1];
        fVar4 = pfVar23[2];
        *(float *)(unaff_RBP + 0x12) = *pfVar23 - fVar12;
        *(float *)((int64_t)unaff_RBP + 0x94) = fVar3 - fVar13;
        *(float *)(unaff_RBP + 0x13) = fVar4 - fVar14;
        FUN_180285b40(unaff_RBP + 0x28,unaff_RBP + 0x26,unaff_RBP + 0x12);
        FUN_1805ab940();
      }
    }
    unaff_R12 = in_stack_00000078;
    if (!bVar20) {
      FUN_1805a0af0();
      if (*(int *)(lVar29 + 0xc20 + lVar24) == 1) {
        *(int32_t *)(unaff_R13 + 0x2a8) = *(int32_t *)(*(int64_t *)(unaff_R13 + 0x2b8) + 8);
      }
      else {
        iVar27 = *(int *)(*(int64_t *)(unaff_R13 + 0x2b8) + 4);
        if (iVar27 != -1) {
          if (lVar32 == 0) {
            uVar22 = 0xffffffff;
          }
          else {
            uVar22 = *(int32_t *)(lVar32 + 0x10);
          }
          unaff_RBP[0x16] = 0;
          unaff_RBP[0x17] = 0;
          *(int32_t *)(unaff_RBP + 0x15) = 0;
          uVar6 = *(int32_t *)((int64_t)in_stack_00000078 + 0x3c);
          unaff_RBP[0x18] = 0;
          *(uint64_t *)((int64_t)unaff_RBP + 0x124) = 0;
          *(int *)((int64_t)unaff_RBP + 0x114) = iVar27;
          *(int32_t *)(unaff_RBP + 0x1e) = uVar6;
          *(int8_t *)(unaff_RBP + 0x1d) = 0;
          unaff_RBP[0x14] = 0xffffffffffffffff;
          *(int32_t *)(unaff_RBP + 0x19) = 0;
          *(int32_t *)((int64_t)unaff_RBP + 0xcc) = 0x3f800000;
          *(int32_t *)(unaff_RBP + 0x1a) = 0xbe4ccccd;
          *(int32_t *)((int64_t)unaff_RBP + 0xd4) = 0xbe4ccccd;
          unaff_RBP[0x1b] = 0x3ecccccd;
          *(int16_t *)(unaff_RBP + 0x1c) = 0x100;
          *(int32_t *)((int64_t)unaff_RBP + 0xec) = 0x11;
          *(int32_t *)((int64_t)unaff_RBP + 0xf4) = 0;
          *(int32_t *)(unaff_RBP + 0x1f) = 0;
          *(int32_t *)((int64_t)unaff_RBP + 0xfc) = 0;
          *(int32_t *)(unaff_RBP + 0x20) = 0;
          *(int32_t *)((int64_t)unaff_RBP + 0x11c) = uVar22;
          *(int32_t *)((int64_t)unaff_RBP + 0x104) = 0;
          *(int32_t *)(unaff_RBP + 0x21) = 0;
          *(int32_t *)((int64_t)unaff_RBP + 0x10c) = 0;
          *(int32_t *)(unaff_RBP + 0x22) = 0;
          *(int8_t *)(unaff_RBP + 0x24) = 0xff;
          *(int32_t *)(unaff_RBP + 0x23) = 0xffffffff;
          *(int32_t *)((int64_t)unaff_RBP + 300) = 0x3f800000;
          FUN_1805a4a20(unaff_R13 + 0x28,uVar6,unaff_RBP + 0x14,0);
        }
      }
      if ((*(int *)(lVar29 + 0xc20 + lVar24) == 2) &&
         (lVar31 = *(int64_t *)(lVar29 + 0xc88 + lVar24), lVar31 != 0)) {
        if ((int)in_stack_00000078[5] < 0) {
          lVar30 = 0;
        }
        else {
          lVar30 = *(int64_t *)(unaff_R13 + 0x8f8) + 8 +
                   (int64_t)(int)in_stack_00000078[5] * 0x1f8;
        }
        FUN_1804f8630(*(uint64_t *)(unaff_R13 + 0x8d8),*(int32_t *)(unaff_R13 + 0x10),lVar30,
                      *(int32_t *)(lVar31 + 100),puVar34);
      }
      cVar21 = *(char *)(lVar29 + 0xca9 + lVar24);
      if (((cVar21 != '\0') || (*(int *)(lVar29 + 0xc20 + lVar24) - 3U < 3)) ||
         (-1 < *(char *)(lVar29 + 0xca2 + lVar24))) {
        FUN_1805253f0((int64_t)*(int *)(lVar32 + 0x10) * 0xa60 + unaff_RBP[-0xd] + 0x30a0,
                      unaff_RBP + -10,cVar21,*(int8_t *)(lVar29 + 0xca2 + lVar24),
                      (int)in_stack_00000078[5]);
      }
      if (*(int *)(unaff_RBP + -0x10) == 1) {
        if (lVar32 != 0) {
          bVar5 = *(byte *)(unaff_R13 + 0x68);
          lVar24 = 0;
          if (bVar5 != 0) {
            do {
              if ((uint)*(ushort *)(unaff_R13 + 0x28 + lVar24 * 2) == *(uint *)(lVar32 + 0x10)) {
                iVar27 = 0;
                lVar24 = 0;
                goto LAB_1805a1510;
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 < (int64_t)(uint64_t)bVar5);
          }
        }
        goto LAB_1805a1543;
      }
      *(int32_t *)(unaff_R13 + 0x2b4) = 0;
      *(uint64_t *)(unaff_R13 + 0x2b8) = 0;
      goto FUN_1805a15a6;
    }
  }
  else {
    lVar32 = *(int64_t *)(lVar29 + 0xc08 + lVar24);
    if ((lVar32 == 0) || (*(int *)(lVar32 + 0x568) == 1)) goto LAB_1805a0d8e;
  }
LAB_1805a1543:
  lVar24 = unaff_RBP[-0xc];
  lVar29 = lVar29 + 0xcb0;
  unaff_RBP[-0xc] = lVar24 + 1;
  if ((int64_t)iVar26 <= lVar24 + 1) goto FUN_1805a15a6;
  goto LAB_1805a0d60;
  while( true ) {
    iVar27 = iVar27 + 1;
    lVar24 = lVar24 + 1;
    if ((int)(uint)bVar5 <= iVar27) break;
LAB_1805a1510:
    if ((uint)*(ushort *)(unaff_R13 + 0x28 + lVar24 * 2) == *(uint *)(lVar32 + 0x10)) {
      *(int16_t *)(unaff_R13 + 0x28 + lVar24 * 2) =
           *(int16_t *)(unaff_R13 + 0x26 + (uint64_t)bVar5 * 2);
      *(char *)(unaff_R13 + 0x68) = *(char *)(unaff_R13 + 0x68) + -1;
      break;
    }
  }
  goto LAB_1805a1543;
}






