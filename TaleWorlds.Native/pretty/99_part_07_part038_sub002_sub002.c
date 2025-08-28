#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part038_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804bd980(longlong param_1,uint *param_2,uint64_t param_3,uint64_t param_4,uint param_5
void FUN_1804bd980(longlong param_1,uint *param_2,uint64_t param_3,uint64_t param_4,uint param_5
                  ,uint64_t param_6,uint64_t param_7,uint64_t param_8)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t *puVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  uint64_t *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint64_t *puVar17;
  int iVar18;
  int iVar19;
  uint64_t *puVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  int *piVar32;
  float fVar33;
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  float fVar43;
  float fVar44;
  int8_t auStack_d28 [32];
  uint *puStack_d08;
  uint auStack_cf8 [2];
  ulonglong uStack_cf0;
  longlong lStack_ce8;
  longlong lStack_ce0;
  longlong lStack_cd8;
  int *piStack_cd0;
  int *piStack_cc8;
  int *piStack_cc0;
  int32_t uStack_cb8;
  uint *puStack_cb0;
  uint64_t *puStack_ca8;
  uint64_t *puStack_ca0;
  uint64_t uStack_c98;
  int32_t uStack_c90;
  uint64_t *puStack_c88;
  uint64_t *puStack_c80;
  uint64_t uStack_c78;
  int32_t uStack_c70;
  uint64_t *puStack_c68;
  uint64_t *puStack_c60;
  uint64_t uStack_c58;
  int32_t uStack_c50;
  uint64_t *puStack_c48;
  int8_t auStack_c40 [8];
  void *puStack_c38;
  longlong lStack_c30;
  int32_t uStack_c20;
  void *puStack_c18;
  longlong lStack_c10;
  int32_t uStack_c00;
  void *puStack_bf8;
  longlong lStack_bf0;
  int32_t uStack_be0;
  uint64_t uStack_bd8;
  float fStack_bc8;
  uint uStack_bc4;
  uint uStack_bc0;
  uint uStack_bbc;
  uint uStack_bb8;
  uint uStack_bb4;
  uint uStack_bb0;
  uint uStack_bac;
  uint uStack_ba8;
  uint uStack_ba4;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float fStack_678;
  float fStack_670;
  float fStack_66c;
  uint uStack_668;
  char cStack_664;
  float fStack_658;
  int iStack_654;
  int iStack_650;
  int iStack_64c;
  uint uStack_648;
  uint uStack_644;
  int iStack_640;
  int iStack_63c;
  int iStack_638;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  char cStack_f4;
  ulonglong uStack_e8;
  
  uStack_bd8 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d28;
  lStack_cd8 = param_1;
  puStack_cb0 = param_2;
  FUN_180627910(&puStack_bf8,param_6);
  puStack_c88 = (uint64_t *)0x0;
  puStack_c80 = (uint64_t *)0x0;
  uStack_c78 = 0;
  uStack_c70 = 3;
  if (lStack_bf0 != 0) {
    FUN_180057980(&puStack_bf8,&puStack_c88,&system_data_d518);
  }
  FUN_180627910(&puStack_c18,param_7);
  puStack_ca8 = (uint64_t *)0x0;
  puStack_ca0 = (uint64_t *)0x0;
  uStack_c98 = 0;
  uStack_c90 = 3;
  if (lStack_c10 != 0) {
    FUN_180057980(&puStack_c18,&puStack_ca8,&system_data_d518);
  }
  FUN_180627910(&puStack_c38,param_8);
  puStack_c68 = (uint64_t *)0x0;
  puStack_c60 = (uint64_t *)0x0;
  uStack_c58 = 0;
  uStack_c50 = 3;
  if (lStack_c30 != 0) {
    FUN_180057980(&puStack_c38,&puStack_c68,&system_data_d518);
  }
  FUN_1804bbec0(param_1,param_2,param_3);
  *param_2 = param_5;
  uVar13 = (param_5 ^ 0x41c64e6d) << 0xd ^ param_5 ^ 0x41c64e6d;
  uVar13 = uVar13 ^ uVar13 >> 0x11;
  *(uint *)(param_1 + 0x80) = uVar13 << 5 ^ uVar13;
  uStack_bb8 = param_2[4];
  uStack_bb4 = param_2[5];
  FUN_1804bbec0(param_1,&fStack_bc8,param_3);
  uStack_648 = param_2[4];
  uStack_644 = param_2[5];
  FUN_1804bbec0(param_1,&fStack_658,param_4);
  fVar6 = fStack_66c;
  fVar5 = fStack_684;
  fVar43 = fStack_688;
  fVar33 = fStack_68c;
  if (param_5 == 0xffffffff) {
    param_2[0x152] = (uint)fStack_680;
    param_2[0x14f] = (uint)fStack_68c;
    param_2[0x150] = (uint)fStack_688;
    param_2[0x151] = (uint)fStack_684;
    param_2[0x153] = (uint)fStack_67c;
    param_2[0x154] = (uint)fStack_678;
    param_2[0x156] = (uint)fStack_670;
    param_2[7] = uStack_bac;
    *(char *)(param_2 + 0x159) = cStack_664;
    param_2[0x157] = (uint)fStack_66c;
    fVar33 = fStack_66c;
  }
  else {
    if (fStack_11c < fStack_68c) {
      fStack_68c = fStack_11c;
      fStack_11c = fVar33;
    }
    if (fStack_118 < fStack_688) {
      fStack_688 = fStack_118;
      fStack_118 = fVar43;
    }
    if (fStack_114 < fStack_684) {
      fStack_684 = fStack_114;
      fStack_114 = fVar5;
    }
    if (fStack_fc < fStack_66c) {
      fStack_66c = fStack_fc;
      fStack_fc = fVar6;
    }
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x152] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_110 - fStack_680) + fStack_680);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x14f] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_11c - fStack_68c) + fStack_68c);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x150] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_118 - fStack_688) + fStack_688);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x151] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_114 - fStack_684) + fStack_684);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x153] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_10c - fStack_67c) + fStack_67c);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x154] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_108 - fStack_678) + fStack_678);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    param_2[0x156] =
         (uint)((float)(uVar13 - 1) * 2.3283064e-10 * (fStack_100 - fStack_670) + fStack_670);
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    uVar13 = uVar13 - 1;
    fVar43 = (float)(int)(iStack_63c - uStack_bac) * (float)uVar13 * 2.3283064e-10;
    iVar14 = (int)fVar43;
    fVar33 = fVar43;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar43)) {
      auVar34._4_4_ = fVar43;
      auVar34._0_4_ = fVar43;
      auVar34._8_8_ = 0;
      uVar13 = movmskps(uVar13,auVar34);
      fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
    }
    iVar14 = (int)fVar33;
    if (0.5 < fVar43 - fVar33) {
      iVar14 = (int)fVar33 + 1;
    }
    param_2[7] = iVar14 + uStack_bac;
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    if (cStack_664 != cStack_f4) {
      cStack_f4 = 0.5 < (float)(uVar13 - 1) * 2.3283064e-10;
    }
    *(char *)(param_2 + 0x159) = cStack_f4;
    uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(param_1 + 0x80) = uVar13;
    fVar33 = (float)(uVar13 - 1) * 2.3283064e-10 * (fStack_fc - fStack_66c) + fStack_66c;
    param_2[0x157] = (uint)fVar33;
  }
  fVar7 = fStack_114;
  fVar6 = fStack_118;
  fVar5 = fStack_684;
  fVar43 = fStack_688;
  fVar44 = 0.0;
  if ((0.0 <= fVar33) && (fVar44 = fVar33, 1.0 <= fVar33)) {
    fVar44 = 1.0;
  }
  param_2[0x157] = (uint)fVar44;
  puVar12 = (uint64_t *)(param_1 + 0xb8);
  puStack_c48 = puVar12;
  auStack_cf8[0] = func_0x0001804bb950(param_2);
  puVar8 = puVar12;
  puVar17 = *(uint64_t **)(param_1 + 200);
  while (puVar17 != (uint64_t *)0x0) {
    if (*(uint *)(puVar17 + 4) < auStack_cf8[0]) {
      puVar17 = (uint64_t *)*puVar17;
    }
    else {
      puVar8 = puVar17;
      puVar17 = (uint64_t *)puVar17[1];
    }
  }
  if ((puVar8 == puVar12) || (auStack_cf8[0] < *(uint *)(puVar8 + 4))) {
    puStack_d08 = auStack_cf8;
    puVar8 = (uint64_t *)FUN_1804c0610(puVar12,auStack_c40);
    puVar8 = (uint64_t *)*puVar8;
  }
  lVar27 = puVar8[5];
  lStack_ce0 = lVar27;
  if (param_5 == 0xffffffff) {
    param_2[2] = uStack_bc0;
    param_2[1] = uStack_bc4;
    param_2[8] = uStack_ba8;
    param_2[6] = uStack_bb0;
    param_2[3] = uStack_bbc;
    param_2[9] = uStack_ba4;
    param_2[0x158] = uStack_668;
  }
  else {
    uVar29 = (longlong)puStack_c80 - (longlong)puStack_c88 >> 5;
    if (uVar29 == 0) {
      uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
      uVar13 = uVar13 ^ uVar13 >> 0x11;
      uVar13 = uVar13 ^ uVar13 << 5;
      *(uint *)(lStack_cd8 + 0x80) = uVar13;
      uVar13 = uVar13 - 1;
      fVar44 = (float)(int)(iStack_650 - uStack_bc0) * (float)uVar13 * 2.3283064e-10;
      iVar14 = (int)fVar44;
      fVar33 = fVar44;
      if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
        auVar35._4_4_ = fVar44;
        auVar35._0_4_ = fVar44;
        auVar35._8_8_ = 0;
        uVar13 = movmskps(uVar13,auVar35);
        fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
      }
      iVar14 = (int)fVar33;
      if (0.5 < fVar44 - fVar33) {
        iVar14 = (int)fVar33 + 1;
      }
      param_2[2] = iVar14 + uStack_bc0;
    }
    else {
      piStack_cd0 = (int *)0x0;
      piStack_cc8 = (int *)0x0;
      piStack_cc0 = (int *)0x0;
      uStack_cb8 = 3;
      piVar10 = (int *)(longlong)(int)uStack_bc0;
      uStack_cf0 = CONCAT44(uStack_cf0._4_4_,uStack_bc0);
      auStack_cf8[0] = iStack_650 + 1;
      piVar11 = (int *)0x0;
      piVar23 = (int *)0x0;
      if ((int)uStack_bc0 < (int)auStack_cf8[0]) {
        lStack_ce8 = (longlong)piVar10 * 400;
        piVar22 = piVar10;
        puVar12 = puStack_c88;
        uVar13 = auStack_cf8[0];
        do {
          iVar31 = 0;
          iVar14 = (int)piVar10;
          if (uVar29 != 0) {
            lVar28 = *(longlong *)(lStack_ce8 + *(longlong *)(lVar27 + 0x378));
            uVar30 = *(longlong *)(lStack_ce8 + 8 + *(longlong *)(lVar27 + 0x378)) - lVar28 >> 5;
            piVar10 = (int *)(puVar12 + 2);
            do {
              iVar19 = 0;
              lVar27 = lStack_ce0;
              puVar12 = puStack_c88;
              iVar14 = (int)uStack_cf0;
              uVar13 = auStack_cf8[0];
              if (uVar30 != 0) {
                iVar16 = *piVar10;
                lVar26 = 0;
                do {
                  iVar3 = *(int *)(lVar28 + 0x10 + lVar26);
                  iVar18 = iVar16;
                  if (iVar3 == iVar16) {
                    if (iVar3 != 0) {
                      pbVar9 = *(byte **)(lVar28 + 8 + lVar26);
                      piVar22 = (int *)(*(longlong *)(piVar10 + -2) - (longlong)pbVar9);
                      do {
                        pbVar1 = pbVar9 + (longlong)piVar22;
                        iVar18 = (uint)*pbVar9 - (uint)*pbVar1;
                        if (iVar18 != 0) break;
                        pbVar9 = pbVar9 + 1;
                      } while (*pbVar1 != 0);
                    }
LAB_1804be25e:
                    if (iVar18 == 0) {
                      if (piVar11 < piStack_cc0) {
                        piStack_cc8 = piVar11 + 1;
                        *piVar11 = (int)uStack_cf0;
                        piVar11 = piStack_cc8;
                      }
                      else {
                        lVar27 = (longlong)piVar11 - (longlong)piVar23 >> 2;
                        if (lVar27 == 0) {
                          lVar27 = 1;
LAB_1804be3a7:
                          piVar10 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar27 * 4,
                                                         CONCAT71((int7)((ulonglong)piVar22 >> 8),3)
                                                        );
                        }
                        else {
                          lVar27 = lVar27 * 2;
                          if (lVar27 != 0) goto LAB_1804be3a7;
                          piVar10 = (int *)0x0;
                        }
                        if (piVar23 != piVar11) {
                    // WARNING: Subroutine does not return
                          memmove(piVar10,piVar23,(longlong)piVar11 - (longlong)piVar23);
                        }
                        *piVar10 = (int)uStack_cf0;
                        piVar11 = piVar10 + 1;
                        if (piVar23 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                          FUN_18064e900(piVar23);
                        }
                        piVar22 = piVar10 + lVar27;
                        lVar27 = lStack_ce0;
                        puVar12 = puStack_c88;
                        piVar23 = piVar10;
                        iVar14 = (int)uStack_cf0;
                        piStack_cd0 = piVar10;
                        piStack_cc8 = piVar11;
                        piStack_cc0 = piVar22;
                        uVar13 = auStack_cf8[0];
                      }
                      goto LAB_1804be298;
                    }
                  }
                  else if (iVar3 == 0) goto LAB_1804be25e;
                  iVar19 = iVar19 + 1;
                  lVar26 = lVar26 + 0x20;
                } while ((ulonglong)(longlong)iVar19 < uVar30);
              }
              iVar31 = iVar31 + 1;
              piVar10 = piVar10 + 8;
            } while ((ulonglong)(longlong)iVar31 < uVar29);
          }
LAB_1804be298:
          uVar15 = iVar14 + 1;
          piVar10 = (int *)(ulonglong)uVar15;
          uStack_cf0 = CONCAT44(uStack_cf0._4_4_,uVar15);
          lStack_ce8 = lStack_ce8 + 400;
        } while ((int)uVar15 < (int)uVar13);
      }
      uVar29 = (longlong)piVar11 - (longlong)piVar23 >> 2;
      uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
      uVar13 = uVar13 ^ uVar13 >> 0x11;
      uVar13 = uVar13 ^ uVar13 << 5;
      *(uint *)(lStack_cd8 + 0x80) = uVar13;
      uVar13 = uVar13 - 1;
      if (uVar29 == 0) {
        fVar44 = (float)(int)(iStack_650 - uStack_bc0) * (float)uVar13 * 2.3283064e-10;
        iVar14 = (int)fVar44;
        fVar33 = fVar44;
        if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
          auVar36._4_4_ = fVar44;
          auVar36._0_4_ = fVar44;
          auVar36._8_8_ = 0;
          uVar13 = movmskps(uVar13,auVar36);
          fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
        }
        iVar14 = (int)fVar33;
        if (0.5 < fVar44 - fVar33) {
          iVar14 = (int)fVar33 + 1;
        }
        puStack_cb0[2] = iVar14 + uStack_bc0;
      }
      else {
        puStack_cb0[2] = piVar23[(ulonglong)uVar13 % (uVar29 & 0xffffffff)];
      }
      param_2 = puStack_cb0;
      if (piVar23 != (int *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(piVar23);
      }
    }
    if (*(int *)(lVar27 + 0x390) < 1) {
      param_2[1] = 0;
    }
    else {
      uStack_cf0 = (longlong)puStack_ca0 - (longlong)puStack_ca8 >> 5;
      if (uStack_cf0 == 0) {
        uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
        uVar13 = uVar13 ^ uVar13 >> 0x11;
        uVar13 = uVar13 ^ uVar13 << 5;
        *(uint *)(lStack_cd8 + 0x80) = uVar13;
        uVar13 = uVar13 - 1;
        fVar44 = (float)(int)(iStack_654 - uStack_bc4) * (float)uVar13 * 2.3283064e-10;
        iVar14 = (int)fVar44;
        fVar33 = fVar44;
        if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
          auVar37._4_4_ = fVar44;
          auVar37._0_4_ = fVar44;
          auVar37._8_8_ = 0;
          uVar13 = movmskps(uVar13,auVar37);
          fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
        }
        iVar14 = (int)fVar33;
        if (0.5 < fVar44 - fVar33) {
          iVar14 = (int)fVar33 + 1;
        }
        param_2[1] = iVar14 + uStack_bc4;
      }
      else {
        piStack_cd0 = (int *)0x0;
        piStack_cc8 = (int *)0x0;
        piStack_cc0 = (int *)0x0;
        uStack_cb8 = 3;
        piVar23 = (int *)(longlong)(int)uStack_bc4;
        auStack_cf8[0] = iStack_654 + 1;
        piVar10 = (int *)0x0;
        piVar11 = (int *)0x0;
        if ((int)uStack_bc4 < (int)auStack_cf8[0]) {
          lStack_ce8 = (longlong)piVar23 * 400;
          puVar12 = puStack_ca8;
          piVar22 = (int *)0x0;
          piVar21 = piVar23;
          piVar32 = (int *)0x0;
          uVar13 = auStack_cf8[0];
          do {
            iVar14 = (int)piVar21;
            piVar10 = piVar22;
            piVar11 = piVar32;
            if (*(int *)(lVar27 + 0x390) <= iVar14) break;
            iVar31 = 0;
            if (uStack_cf0 != 0) {
              lVar28 = *(longlong *)(lStack_ce8 + *(longlong *)(lVar27 + 0x388));
              uVar29 = *(longlong *)(lStack_ce8 + 8 + *(longlong *)(lVar27 + 0x388)) - lVar28 >> 5;
              piVar21 = (int *)(puVar12 + 2);
              do {
                iVar19 = 0;
                lVar27 = lStack_ce0;
                puVar12 = puStack_ca8;
                uVar13 = auStack_cf8[0];
                if (uVar29 != 0) {
                  iVar16 = *piVar21;
                  lVar26 = 0;
                  do {
                    iVar3 = *(int *)(lVar28 + 0x10 + lVar26);
                    iVar18 = iVar16;
                    if (iVar3 == iVar16) {
                      if (iVar3 != 0) {
                        pbVar9 = *(byte **)(lVar28 + 8 + lVar26);
                        piVar23 = (int *)(*(longlong *)(piVar21 + -2) - (longlong)pbVar9);
                        do {
                          pbVar1 = pbVar9 + (longlong)piVar23;
                          iVar18 = (uint)*pbVar9 - (uint)*pbVar1;
                          if (iVar18 != 0) break;
                          pbVar9 = pbVar9 + 1;
                        } while (*pbVar1 != 0);
                      }
LAB_1804be5be:
                      if (iVar18 == 0) {
                        if (piVar32 < piStack_cc0) {
                          piVar11 = piVar32 + 1;
                          *piVar32 = iVar14;
                          piStack_cc8 = piVar11;
                        }
                        else {
                          lVar27 = (longlong)piVar32 - (longlong)piVar22 >> 2;
                          if (lVar27 == 0) {
                            lVar27 = 1;
LAB_1804be628:
                            piVar10 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar27 * 4,
                                                           CONCAT71((int7)((ulonglong)piVar23 >> 8),
                                                                    3));
                          }
                          else {
                            lVar27 = lVar27 * 2;
                            if (lVar27 != 0) goto LAB_1804be628;
                            piVar10 = (int *)0x0;
                          }
                          if (piVar22 != piVar32) {
                    // WARNING: Subroutine does not return
                            memmove(piVar10,piVar22,(longlong)piVar32 - (longlong)piVar22);
                          }
                          *piVar10 = iVar14;
                          piVar11 = piVar10 + 1;
                          if (piVar22 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900(piVar22);
                          }
                          piVar23 = piVar10 + lVar27;
                          lVar27 = lStack_ce0;
                          puVar12 = puStack_ca8;
                          piStack_cd0 = piVar10;
                          piStack_cc8 = piVar11;
                          piStack_cc0 = piVar23;
                          uVar13 = auStack_cf8[0];
                        }
                        goto LAB_1804be69a;
                      }
                    }
                    else if (iVar3 == 0) goto LAB_1804be5be;
                    iVar19 = iVar19 + 1;
                    lVar26 = lVar26 + 0x20;
                  } while ((ulonglong)(longlong)iVar19 < uVar29);
                }
                iVar31 = iVar31 + 1;
                piVar21 = piVar21 + 8;
              } while ((ulonglong)(longlong)iVar31 < uStack_cf0);
            }
LAB_1804be69a:
            piVar21 = (int *)(ulonglong)(iVar14 + 1U);
            lStack_ce8 = lStack_ce8 + 400;
            piVar22 = piVar10;
            piVar32 = piVar11;
          } while ((int)(iVar14 + 1U) < (int)uVar13);
        }
        uVar29 = (longlong)piVar11 - (longlong)piVar10 >> 2;
        uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
        uVar13 = uVar13 ^ uVar13 >> 0x11;
        uVar13 = uVar13 ^ uVar13 << 5;
        *(uint *)(lStack_cd8 + 0x80) = uVar13;
        uVar13 = uVar13 - 1;
        if (uVar29 == 0) {
          fVar44 = (float)(int)(iStack_654 - uStack_bc4) * (float)uVar13 * 2.3283064e-10;
          iVar14 = (int)fVar44;
          fVar33 = fVar44;
          if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
            auVar38._4_4_ = fVar44;
            auVar38._0_4_ = fVar44;
            auVar38._8_8_ = 0;
            uVar13 = movmskps(uVar13,auVar38);
            fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
          }
          iVar14 = (int)fVar33;
          if (0.5 < fVar44 - fVar33) {
            iVar14 = (int)fVar33 + 1;
          }
          puStack_cb0[1] = iVar14 + uStack_bc4;
        }
        else {
          puStack_cb0[1] = piVar10[(ulonglong)uVar13 % (uVar29 & 0xffffffff)];
        }
        param_2 = puStack_cb0;
        if (piVar10 != (int *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(piVar10);
        }
      }
    }
    uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(lStack_cd8 + 0x80) = uVar13;
    if (*(float *)(lVar27 + 0x3a4) <= (float)(uVar13 - 1) * 2.3283064e-10) {
      if (((longlong)puStack_ca0 - (longlong)puStack_ca8 & 0xffffffffffffffe0U) == 0) {
        uVar13 = uVar13 << 0xd ^ uVar13;
        uVar13 = uVar13 ^ uVar13 >> 0x11;
        uVar13 = uVar13 ^ uVar13 << 5;
        *(uint *)(lStack_cd8 + 0x80) = uVar13;
        uVar13 = uVar13 - 1;
        fVar44 = (float)(int)(iStack_638 - uStack_ba8) * (float)uVar13 * 2.3283064e-10;
        iVar14 = (int)fVar44;
        fVar33 = fVar44;
        if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
          auVar39._4_4_ = fVar44;
          auVar39._0_4_ = fVar44;
          auVar39._8_8_ = 0;
          uVar13 = movmskps(uVar13,auVar39);
          fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
        }
        iVar14 = (int)fVar33;
        if (0.5 < fVar44 - fVar33) {
          iVar14 = (int)fVar33 + 1;
        }
        param_2[8] = iVar14 + uStack_ba8;
      }
      else {
        piStack_cd0 = (int *)0x0;
        piStack_cc8 = (int *)0x0;
        piStack_cc0 = (int *)0x0;
        uStack_cb8 = 3;
        uVar29 = (ulonglong)(int)uStack_ba8;
        uStack_cf0 = CONCAT44(uStack_cf0._4_4_,uStack_ba8);
        auStack_cf8[0] = iStack_638 + 1;
        piVar11 = (int *)0x0;
        piVar23 = (int *)0x0;
        if ((int)uStack_ba8 < (int)auStack_cf8[0]) {
          uVar30 = (longlong)puStack_c60 - (longlong)puStack_c68 >> 5;
          lStack_ce8 = uVar29 * 0x48;
          uVar13 = auStack_cf8[0];
          do {
            iVar31 = 0;
            iVar14 = (int)uVar29;
            if (uVar30 != 0) {
              lVar28 = *(longlong *)(*(longlong *)(lVar27 + 0x3a8) + 0x20 + lStack_ce8);
              uVar29 = *(longlong *)(*(longlong *)(lVar27 + 0x3a8) + 0x28 + lStack_ce8) - lVar28 >>
                       5;
              piVar10 = (int *)(puStack_c68 + 2);
              do {
                iVar19 = 0;
                lVar27 = lStack_ce0;
                iVar14 = (int)uStack_cf0;
                uVar13 = auStack_cf8[0];
                if (uVar29 != 0) {
                  iVar16 = *piVar10;
                  lVar26 = 0;
                  do {
                    iVar3 = *(int *)(lVar26 + 0x10 + lVar28);
                    iVar18 = iVar16;
                    if (iVar3 == iVar16) {
                      if (iVar3 != 0) {
                        pbVar9 = *(byte **)(lVar26 + 8 + lVar28);
                        lVar24 = *(longlong *)(piVar10 + -2) - (longlong)pbVar9;
                        do {
                          pbVar1 = pbVar9 + lVar24;
                          iVar18 = (uint)*pbVar9 - (uint)*pbVar1;
                          if (iVar18 != 0) break;
                          pbVar9 = pbVar9 + 1;
                        } while (*pbVar1 != 0);
                      }
LAB_1804be94e:
                      if (iVar18 == 0) {
                        if (piVar11 < piStack_cc0) {
                          piStack_cc8 = piVar11 + 1;
                          *piVar11 = (int)uStack_cf0;
                          piVar11 = piStack_cc8;
                        }
                        else {
                          lVar27 = (longlong)piVar11 - (longlong)piVar23 >> 2;
                          if (lVar27 == 0) {
                            lVar27 = 1;
LAB_1804bea93:
                            piVar10 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar27 * 4,3);
                          }
                          else {
                            lVar27 = lVar27 * 2;
                            if (lVar27 != 0) goto LAB_1804bea93;
                            piVar10 = (int *)0x0;
                          }
                          if (piVar23 != piVar11) {
                    // WARNING: Subroutine does not return
                            memmove(piVar10,piVar23,(longlong)piVar11 - (longlong)piVar23);
                          }
                          *piVar10 = (int)uStack_cf0;
                          piVar11 = piVar10 + 1;
                          if (piVar23 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900(piVar23);
                          }
                          piStack_cc0 = piVar10 + lVar27;
                          lVar27 = lStack_ce0;
                          piVar23 = piVar10;
                          iVar14 = (int)uStack_cf0;
                          piStack_cd0 = piVar10;
                          piStack_cc8 = piVar11;
                          uVar13 = auStack_cf8[0];
                        }
                        goto LAB_1804be984;
                      }
                    }
                    else if (iVar3 == 0) goto LAB_1804be94e;
                    iVar19 = iVar19 + 1;
                    lVar26 = lVar26 + 0x20;
                  } while ((ulonglong)(longlong)iVar19 < uVar29);
                }
                iVar31 = iVar31 + 1;
                piVar10 = piVar10 + 8;
              } while ((ulonglong)(longlong)iVar31 < uVar30);
            }
LAB_1804be984:
            uVar15 = iVar14 + 1;
            uVar29 = (ulonglong)uVar15;
            uStack_cf0 = CONCAT44(uStack_cf0._4_4_,uVar15);
            lStack_ce8 = lStack_ce8 + 0x48;
          } while ((int)uVar15 < (int)uVar13);
        }
        uVar29 = (longlong)piVar11 - (longlong)piVar23 >> 2;
        uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
        uVar13 = uVar13 ^ uVar13 >> 0x11;
        uVar13 = uVar13 ^ uVar13 << 5;
        *(uint *)(lStack_cd8 + 0x80) = uVar13;
        uVar13 = uVar13 - 1;
        if (uVar29 == 0) {
          fVar44 = (float)(int)(iStack_638 - uStack_ba8) * (float)uVar13 * 2.3283064e-10;
          iVar14 = (int)fVar44;
          fVar33 = fVar44;
          if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
            auVar40._4_4_ = fVar44;
            auVar40._0_4_ = fVar44;
            auVar40._8_8_ = 0;
            uVar13 = movmskps(uVar13,auVar40);
            fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
          }
          iVar14 = (int)fVar33;
          if (0.5 < fVar44 - fVar33) {
            iVar14 = (int)fVar33 + 1;
          }
          puStack_cb0[8] = iVar14 + uStack_ba8;
        }
        else {
          puStack_cb0[1] = piVar23[(ulonglong)uVar13 % (uVar29 & 0xffffffff)];
        }
        param_2 = puStack_cb0;
        if (piVar23 != (int *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(piVar23);
        }
      }
    }
    else {
      param_2[8] = 0;
    }
    uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(lStack_cd8 + 0x80) = uVar13;
    uVar13 = uVar13 - 1;
    fVar44 = (float)(int)(iStack_640 - uStack_bb0) * (float)uVar13 * 2.3283064e-10;
    iVar14 = (int)fVar44;
    fVar33 = fVar44;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
      auVar41._4_4_ = fVar44;
      auVar41._0_4_ = fVar44;
      auVar41._8_8_ = 0;
      uVar13 = movmskps(uVar13,auVar41);
      fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
    }
    iVar14 = (int)fVar33;
    if (0.5 < fVar44 - fVar33) {
      iVar14 = (int)fVar33 + 1;
    }
    param_2[6] = iVar14 + uStack_bb0;
    uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
    uVar13 = uVar13 ^ uVar13 >> 0x11;
    uVar13 = uVar13 ^ uVar13 << 5;
    *(uint *)(lStack_cd8 + 0x80) = uVar13;
    uVar13 = uVar13 - 1;
    fVar44 = (float)(int)(iStack_64c - uStack_bbc) * (float)uVar13 * 2.3283064e-10;
    iVar14 = (int)fVar44;
    fVar33 = fVar44;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar44)) {
      auVar42._4_4_ = fVar44;
      auVar42._0_4_ = fVar44;
      auVar42._8_8_ = 0;
      uVar13 = movmskps(uVar13,auVar42);
      fVar33 = (float)(int)(iVar14 - (uVar13 & 1));
    }
    iVar14 = (int)fVar33;
    if (0.5 < fVar44 - fVar33) {
      iVar14 = (int)fVar33 + 1;
    }
    param_2[3] = iVar14 + uStack_bbc;
    uVar13 = *(uint *)(lVar27 + 0x3c0);
    if (0 < (int)uVar13) {
      uVar15 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
      uVar15 = uVar15 ^ uVar15 >> 0x11;
      uVar15 = uVar15 ^ uVar15 << 5;
      *(uint *)(lStack_cd8 + 0x80) = uVar15;
      param_2[9] = (uVar15 - 1) % uVar13;
      uVar13 = *(uint *)(lStack_cd8 + 0x80) << 0xd ^ *(uint *)(lStack_cd8 + 0x80);
      uVar13 = uVar13 ^ uVar13 >> 0x11;
      uVar13 = uVar13 ^ uVar13 << 5;
      *(uint *)(lStack_cd8 + 0x80) = uVar13;
      param_2[0x158] = (uint)((float)(uVar13 - 1) * 2.3283064e-10);
    }
    puVar12 = (uint64_t *)(lStack_cd8 + 0xb8);
    param_1 = lStack_cd8;
  }
  if ((int)param_2[2] < 0) {
LAB_1804bedd0:
    param_2[2] = 0;
  }
  else {
    fVar33 = (float)param_2[0x14f];
    if (5.0 <= fVar33) {
      if (10.0 <= fVar33) {
        if (16.0 <= fVar33) {
          uVar13 = (21.0 <= fVar33) + 3;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
    uVar13 = (param_2[4] << 8 | param_2[5]) << 8 | uVar13;
    puVar17 = (uint64_t *)puVar12[2];
    puVar8 = puVar12;
    if (puVar17 == (uint64_t *)0x0) {
LAB_1804beda8:
      puVar8 = puVar12;
    }
    else {
      do {
        if (*(uint *)(puVar17 + 4) < uVar13) {
          puVar17 = (uint64_t *)*puVar17;
        }
        else {
          puVar8 = puVar17;
          puVar17 = (uint64_t *)puVar17[1];
        }
      } while (puVar17 != (uint64_t *)0x0);
      if ((puVar8 == puVar12) || (uVar13 < *(uint *)(puVar8 + 4))) goto LAB_1804beda8;
    }
    if (puVar8[5] == 0) {
      FUN_180626f80(&unknown_var_7800_ptr);
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(puVar8[5] + 0x380);
    }
    if (iVar14 <= (int)param_2[2]) goto LAB_1804bedd0;
  }
  if ((int)param_2[1] < 0) {
LAB_1804bee84:
    param_2[1] = 0;
  }
  else {
    fVar33 = (float)param_2[0x14f];
    if (5.0 <= fVar33) {
      if (10.0 <= fVar33) {
        if (16.0 <= fVar33) {
          uVar13 = (21.0 <= fVar33) + 3;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
    uVar13 = (param_2[4] << 8 | param_2[5]) << 8 | uVar13;
    puVar17 = (uint64_t *)puVar12[2];
    puVar8 = puVar12;
    if (puVar17 == (uint64_t *)0x0) {
LAB_1804bee5c:
      puVar8 = puVar12;
    }
    else {
      do {
        if (*(uint *)(puVar17 + 4) < uVar13) {
          puVar17 = (uint64_t *)*puVar17;
        }
        else {
          puVar8 = puVar17;
          puVar17 = (uint64_t *)puVar17[1];
        }
      } while (puVar17 != (uint64_t *)0x0);
      if ((puVar8 == puVar12) || (uVar13 < *(uint *)(puVar8 + 4))) goto LAB_1804bee5c;
    }
    if (puVar8[5] == 0) {
      FUN_180626f80(&unknown_var_7512_ptr);
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(puVar8[5] + 0x390);
    }
    if (iVar14 <= (int)param_2[1]) goto LAB_1804bee84;
  }
  if (-1 < (int)param_2[8]) {
    fVar33 = (float)param_2[0x14f];
    if (5.0 <= fVar33) {
      if (10.0 <= fVar33) {
        if (16.0 <= fVar33) {
          uVar13 = (21.0 <= fVar33) + 3;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
    uVar13 = (param_2[4] << 8 | param_2[5]) << 8 | uVar13;
    puVar17 = (uint64_t *)puVar12[2];
    puVar8 = puVar12;
    if (puVar17 == (uint64_t *)0x0) {
LAB_1804bef10:
      puVar8 = puVar12;
    }
    else {
      do {
        if (*(uint *)(puVar17 + 4) < uVar13) {
          puVar17 = (uint64_t *)*puVar17;
        }
        else {
          puVar8 = puVar17;
          puVar17 = (uint64_t *)puVar17[1];
        }
      } while (puVar17 != (uint64_t *)0x0);
      if ((puVar8 == puVar12) || (uVar13 < *(uint *)(puVar8 + 4))) goto LAB_1804bef10;
    }
    if (puVar8[5] == 0) {
      FUN_180626f80(&unknown_var_7832_ptr);
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(puVar8[5] + 0x3b0);
    }
    if ((int)param_2[8] < iVar14) goto LAB_1804bef40;
  }
  param_2[8] = 0;
LAB_1804bef40:
  uVar29 = (*(longlong *)(lVar27 + 0xa28) - *(longlong *)(lVar27 + 0xa20)) / 0x50;
  if (uVar29 == 0) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)((ulonglong)(longlong)(int)param_2[6] % uVar29);
  }
  iVar14 = *(int *)(lVar27 + 0x298);
  lVar28 = 0x140;
  iVar31 = 0x140;
  if (iVar14 < 0x140) {
    iVar31 = iVar14;
  }
  iVar19 = 0;
  if (0 < iVar14) {
    piVar11 = (int *)(*(longlong *)(lVar27 + 0x290) + 0x44);
    do {
      if (*piVar11 == 0x3c) goto LAB_1804befc7;
      iVar19 = iVar19 + 1;
      piVar11 = piVar11 + 0x2a;
    } while (iVar19 < iVar14);
  }
  iVar19 = -1;
LAB_1804befc7:
  iVar16 = 0;
  if (0 < iVar14) {
    piVar11 = (int *)(*(longlong *)(lVar27 + 0x290) + 0x44);
    do {
      if (*piVar11 == 0x3d) goto LAB_1804beff7;
      iVar16 = iVar16 + 1;
      piVar11 = piVar11 + 0x2a;
    } while (iVar16 < iVar14);
  }
  iVar16 = -1;
LAB_1804beff7:
  lVar27 = 0;
  pfVar25 = (float *)(param_2 + 0xf);
  do {
    if (lVar27 < iVar31) {
      fVar33 = *(float *)(((longlong)&fStack_bc8 - (longlong)param_2) + (longlong)pfVar25);
      fVar44 = *(float *)(((longlong)&fStack_658 - (longlong)param_2) + (longlong)pfVar25);
      fVar2 = fVar33;
      if (fVar44 <= fVar33) {
        fVar2 = fVar44;
      }
      fVar44 = *(float *)(((longlong)&fStack_658 - (longlong)param_2) + (longlong)pfVar25);
      if (fVar33 <= fVar44) {
        fVar33 = fVar44;
      }
      if (lVar27 == iVar19) {
        if (param_5 == 0xffffffff) {
          *pfVar25 = fVar43;
          param_2[0x150] = (uint)fVar43;
        }
        else {
          uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
          uVar13 = uVar13 >> 0x11 ^ uVar13;
          uVar13 = uVar13 << 5 ^ uVar13;
          *(uint *)(param_1 + 0x80) = uVar13;
          fVar33 = (float)(uVar13 - 1) * 2.3283064e-10 * (fVar6 - fVar43) + fVar43;
          *pfVar25 = fVar33;
          param_2[0x150] = (uint)fVar33;
        }
      }
      else if (lVar27 == iVar16) {
        if (param_5 == 0xffffffff) {
          *pfVar25 = fVar5;
          param_2[0x151] = (uint)fVar5;
        }
        else {
          uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
          uVar13 = uVar13 >> 0x11 ^ uVar13;
          uVar13 = uVar13 << 5 ^ uVar13;
          *(uint *)(param_1 + 0x80) = uVar13;
          fVar33 = (float)(uVar13 - 1) * 2.3283064e-10 * (fVar7 - fVar5) + fVar5;
          *pfVar25 = fVar33;
          param_2[0x151] = (uint)fVar33;
        }
      }
      else if (param_5 == 0xffffffff) {
        *pfVar25 = fVar2;
      }
      else {
        uVar13 = *(uint *)(param_1 + 0x80) << 0xd ^ *(uint *)(param_1 + 0x80);
        uVar13 = uVar13 >> 0x11 ^ uVar13;
        uVar13 = uVar13 << 5 ^ uVar13;
        *(uint *)(param_1 + 0x80) = uVar13;
        *pfVar25 = (fVar33 - fVar2) * (float)(uVar13 - 1) * 2.3283064e-10 + fVar2;
      }
    }
    else {
      *pfVar25 = 0.0;
    }
    lVar27 = lVar27 + 1;
    pfVar25 = pfVar25 + 1;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  fVar33 = (float)param_2[0x14f];
  if (5.0 <= fVar33) {
    if (10.0 <= fVar33) {
      if (16.0 <= fVar33) {
        auStack_cf8[0] = (21.0 <= fVar33) + 3;
      }
      else {
        auStack_cf8[0] = 2;
      }
    }
    else {
      auStack_cf8[0] = 1;
    }
  }
  else {
    auStack_cf8[0] = 0;
  }
  auStack_cf8[0] = (param_2[4] << 8 | param_2[5]) << 8 | auStack_cf8[0];
  puVar17 = (uint64_t *)puStack_c48[2];
  puVar12 = puStack_c48;
  while (puVar8 = puVar17, puVar8 != (uint64_t *)0x0) {
    if (*(uint *)(puVar8 + 4) < auStack_cf8[0]) {
      puVar17 = (uint64_t *)*puVar8;
    }
    else {
      puVar17 = (uint64_t *)puVar8[1];
      puVar12 = puVar8;
    }
  }
  if ((puVar12 == puStack_c48) || (auStack_cf8[0] < *(uint *)(puVar12 + 4))) {
    puStack_d08 = auStack_cf8;
    puVar12 = (uint64_t *)FUN_1804c0610(puStack_c48,auStack_c40,pfVar25,puVar12);
    puVar12 = (uint64_t *)*puVar12;
  }
  FUN_1804b2ea0(puVar12[5],param_2);
  puVar20 = puStack_c60;
  puVar4 = puStack_c68;
  puVar12 = puStack_ca8;
  puVar17 = puStack_ca0;
  for (puVar8 = puStack_c68; puStack_ca8 = puVar12, puStack_ca0 = puVar17, puVar8 != puVar20;
      puVar8 = puVar8 + 4) {
    (**(code **)*puVar8)(puVar8,0);
    puVar12 = puStack_ca8;
    puVar17 = puStack_ca0;
  }
  if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  puStack_c38 = &unknown_var_3456_ptr;
  if (lStack_c30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c30 = 0;
  uStack_c20 = 0;
  puStack_c38 = &unknown_var_720_ptr;
  puVar8 = puStack_c88;
  puVar4 = puStack_c80;
  for (puVar20 = puVar12; puStack_c88 = puVar8, puStack_c80 = puVar4, puVar20 != puVar17;
      puVar20 = puVar20 + 4) {
    (**(code **)*puVar20)(puVar20,0);
    puVar8 = puStack_c88;
    puVar4 = puStack_c80;
  }
  if (puVar12 == (uint64_t *)0x0) {
    puStack_c18 = &unknown_var_3456_ptr;
    if (lStack_c10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_c10 = 0;
    uStack_c00 = 0;
    puStack_c18 = &unknown_var_720_ptr;
    for (puVar12 = puVar8; puVar12 != puVar4; puVar12 = puVar12 + 4) {
      (**(code **)*puVar12)(puVar12,0);
    }
    if (puVar8 == (uint64_t *)0x0) {
      puStack_bf8 = &unknown_var_3456_ptr;
      if (lStack_bf0 == 0) {
        lStack_bf0 = 0;
        uStack_be0 = 0;
        puStack_bf8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_d28);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar12);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






