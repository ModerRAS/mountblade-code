#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part006.c - 5 个函数

// 函数: void FUN_1803a7b10(float *param_1,float param_2)
void FUN_1803a7b10(float *param_1,float param_2)

{
  uint *puVar1;
  int32_t *puVar2;
  longlong *plVar3;
  uint *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  longlong *plVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint *puVar19;
  longlong lVar20;
  uint64_t *puVar21;
  uint *puVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  uint64_t *puVar28;
  int iVar29;
  float *pfVar30;
  int32_t uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint *puStackX_8;
  uint *puStackX_18;
  uint *puStackX_20;
  uint *puStack_208;
  uint uStack_200;
  uint uStack_1fc;
  int iStack_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  uint **ppuStack_1d8;
  uint64_t uStack_1d0;
  longlong *plStack_1c8;
  longlong *plStack_1c0;
  longlong alStack_1b8 [2];
  char cStack_1a8;
  longlong alStack_1a0 [2];
  char cStack_190;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  
  uStack_1d0 = 0xfffffffffffffffe;
  if (param_1[10] <= 0.0) {
    param_1[10] = param_2;
  }
  else {
    fVar35 = param_1[0x9e];
    uVar25 = 0;
    if (0 < (int)fVar35) {
      do {
        puVar28 = (uint64_t *)
                  (*(longlong *)(param_1 + (ulonglong)(uVar25 >> 0xb) * 2 + 0xa0) +
                  (ulonglong)(uVar25 + (uVar25 >> 0xb) * -0x800) * 0x54);
        uVar12 = (uint)(longlong)(param_1[0x145] * *(float *)(puVar28 + 6));
        uVar23 = 0;
        if (uVar12 != 0) {
          uVar23 = uVar12;
        }
        uStack_200 = (int)param_1[0x146] - 1U;
        if (uVar23 < (int)param_1[0x146] - 1U) {
          uStack_200 = uVar23;
        }
        uVar12 = (uint)(longlong)(param_1[0x145] * *(float *)((longlong)puVar28 + 0x34));
        uVar23 = 0;
        if (uVar12 != 0) {
          uVar23 = uVar12;
        }
        uStack_1fc = (int)param_1[0x147] - 1U;
        if (uVar23 < (int)param_1[0x147] - 1U) {
          uStack_1fc = uVar23;
        }
        iStack_1f8 = *(int *)(puVar28 + 10);
        uVar23 = (uStack_200 & 0xfff) << 0xc;
        uVar31 = FUN_1803a8a90(param_1 + 0x130,alStack_1b8,uVar23,&uStack_200,
                               iStack_1f8 << 0x18 | uVar23 | uStack_1fc & 0xfff);
        lVar20 = alStack_1b8[0];
        if (cStack_1a8 != '\0') {
          FUN_1800c1750(uVar31,&puStackX_18,*(int32_t *)(puVar28 + 10));
          uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3);
          plVar14 = (longlong *)FUN_1802ac390(uVar13);
          plStack_1c8 = plVar14;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          FUN_1802ae9a0(plVar14,*(uint64_t *)(param_1 + 8));
          ppuStack_1d8 = &puStackX_8;
          puStackX_8 = puStackX_18;
          if (puStackX_18 != (uint *)0x0) {
            (**(code **)(*(longlong *)puStackX_18 + 0x28))();
          }
          FUN_1802adab0(plVar14,&puStackX_8);
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          plVar3 = *(longlong **)(lVar20 + 0x10);
          *(longlong **)(lVar20 + 0x10) = plVar14;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14);
          }
          if (puStackX_18 != (uint *)0x0) {
            (**(code **)(*(longlong *)puStackX_18 + 0x38))();
          }
        }
        puVar21 = *(uint64_t **)(lVar20 + 0x40);
        if (puVar21 < *(uint64_t **)(lVar20 + 0x48)) {
          uVar13 = puVar28[1];
          *puVar21 = *puVar28;
          puVar21[1] = uVar13;
          uVar13 = puVar28[3];
          puVar21[2] = puVar28[2];
          puVar21[3] = uVar13;
          uVar13 = puVar28[5];
          puVar21[4] = puVar28[4];
          puVar21[5] = uVar13;
          uVar13 = puVar28[7];
          puVar21[6] = puVar28[6];
          puVar21[7] = uVar13;
          uVar31 = *(int32_t *)((longlong)puVar28 + 0x44);
          uVar5 = *(int32_t *)(puVar28 + 9);
          uVar6 = *(int32_t *)((longlong)puVar28 + 0x4c);
          *(int32_t *)(puVar21 + 8) = *(int32_t *)(puVar28 + 8);
          *(int32_t *)((longlong)puVar21 + 0x44) = uVar31;
          *(int32_t *)(puVar21 + 9) = uVar5;
          *(int32_t *)((longlong)puVar21 + 0x4c) = uVar6;
          *(int32_t *)(puVar21 + 10) = *(int32_t *)(puVar28 + 10);
          *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 0x54;
        }
        else {
          puVar16 = *(uint64_t **)(lVar20 + 0x38);
          lVar27 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                          SEXT816((longlong)puVar21 - (longlong)puVar16),8) +
                   ((longlong)puVar21 - (longlong)puVar16);
          lVar27 = (lVar27 >> 6) - (lVar27 >> 0x3f);
          if (lVar27 == 0) {
            lVar27 = 1;
LAB_1803a7dd7:
            puVar18 = (uint64_t *)
                      FUN_18062b420(_DAT_180c8ed18,lVar27 * 0x54,*(int8_t *)(lVar20 + 0x50));
            puVar21 = *(uint64_t **)(lVar20 + 0x40);
            puVar16 = *(uint64_t **)(lVar20 + 0x38);
          }
          else {
            lVar27 = lVar27 * 2;
            if (lVar27 != 0) goto LAB_1803a7dd7;
            puVar18 = (uint64_t *)0x0;
          }
          puVar17 = puVar18;
          if (puVar16 != puVar21) {
            lVar24 = (longlong)puVar16 - (longlong)puVar18;
            puVar16 = puVar18 + 8;
            do {
              puVar15 = (uint64_t *)(lVar24 + -0x40 + (longlong)puVar16);
              uVar13 = puVar15[1];
              *puVar17 = *puVar15;
              puVar17[1] = uVar13;
              puVar15 = (uint64_t *)(lVar24 + -0x30 + (longlong)puVar16);
              uVar13 = puVar15[1];
              puVar17[2] = *puVar15;
              puVar17[3] = uVar13;
              puVar15 = (uint64_t *)(lVar24 + -0x20 + (longlong)puVar16);
              uVar13 = puVar15[1];
              puVar17[4] = *puVar15;
              puVar17[5] = uVar13;
              puVar15 = (uint64_t *)(lVar24 + -0x10 + (longlong)puVar16);
              uVar13 = puVar15[1];
              puVar17[6] = *puVar15;
              puVar17[7] = uVar13;
              uVar13 = ((uint64_t *)(lVar24 + (longlong)puVar16))[1];
              *puVar16 = *(uint64_t *)(lVar24 + (longlong)puVar16);
              puVar16[1] = uVar13;
              *(int32_t *)(puVar16 + 2) = *(int32_t *)(lVar24 + 0x10 + (longlong)puVar16);
              puVar17 = (uint64_t *)((longlong)puVar17 + 0x54);
              puVar15 = (uint64_t *)((longlong)puVar16 + lVar24 + 0x14);
              puVar16 = (uint64_t *)((longlong)puVar16 + 0x54);
            } while (puVar15 != puVar21);
          }
          uVar13 = puVar28[1];
          *puVar17 = *puVar28;
          puVar17[1] = uVar13;
          uVar13 = puVar28[3];
          puVar17[2] = puVar28[2];
          puVar17[3] = uVar13;
          uVar13 = puVar28[5];
          puVar17[4] = puVar28[4];
          puVar17[5] = uVar13;
          uVar31 = *(int32_t *)((longlong)puVar28 + 0x34);
          uVar5 = *(int32_t *)(puVar28 + 7);
          uVar6 = *(int32_t *)((longlong)puVar28 + 0x3c);
          *(int32_t *)(puVar17 + 6) = *(int32_t *)(puVar28 + 6);
          *(int32_t *)((longlong)puVar17 + 0x34) = uVar31;
          *(int32_t *)(puVar17 + 7) = uVar5;
          *(int32_t *)((longlong)puVar17 + 0x3c) = uVar6;
          uVar31 = *(int32_t *)((longlong)puVar28 + 0x44);
          uVar5 = *(int32_t *)(puVar28 + 9);
          uVar6 = *(int32_t *)((longlong)puVar28 + 0x4c);
          *(int32_t *)(puVar17 + 8) = *(int32_t *)(puVar28 + 8);
          *(int32_t *)((longlong)puVar17 + 0x44) = uVar31;
          *(int32_t *)(puVar17 + 9) = uVar5;
          *(int32_t *)((longlong)puVar17 + 0x4c) = uVar6;
          *(int32_t *)(puVar17 + 10) = *(int32_t *)(puVar28 + 10);
          if (*(longlong *)(lVar20 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t **)(lVar20 + 0x38) = puVar18;
          *(longlong *)(lVar20 + 0x40) = (longlong)puVar17 + 0x54;
          *(longlong *)(lVar20 + 0x48) = lVar27 * 0x54 + (longlong)puVar18;
        }
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)fVar35);
    }
    LOCK();
    param_1[0x9e] = 0.0;
    UNLOCK();
    fVar35 = param_1[0xc];
    uVar25 = 0;
    if (0 < (int)fVar35) {
      do {
        pfVar30 = (float *)(*(longlong *)(param_1 + (ulonglong)(uVar25 >> 0xb) * 2 + 0xe) +
                           (ulonglong)(uVar25 + (uVar25 >> 0xb) * -0x800) * 0x24);
        uVar12 = (uint)(longlong)((*pfVar30 - *param_1) * param_1[0x145]);
        uVar23 = 0;
        if (uVar12 != 0) {
          uVar23 = uVar12;
        }
        uStack_1f0 = (int)param_1[0x146] - 1U;
        if (uVar23 < (int)param_1[0x146] - 1U) {
          uStack_1f0 = uVar23;
        }
        uVar12 = (uint)(longlong)(param_1[0x145] * (pfVar30[1] - param_1[1]));
        uVar23 = 0;
        if (uVar12 != 0) {
          uVar23 = uVar12;
        }
        uStack_1ec = (int)param_1[0x147] - 1U;
        if (uVar23 < (int)param_1[0x147] - 1U) {
          uStack_1ec = uVar23;
        }
        fStack_1e8 = pfVar30[8];
        uVar23 = (uStack_1f0 & 0xfff) << 0xc;
        uVar31 = FUN_1803a8a90(param_1 + 0x130,alStack_1a0,uVar23,&uStack_1f0,
                               (int)fStack_1e8 << 0x18 | uVar23 | uStack_1ec & 0xfff);
        lVar20 = alStack_1a0[0];
        if (cStack_190 != '\0') {
          FUN_1800c1750(uVar31,&puStack_208,pfVar30[8]);
          uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3);
          plVar14 = (longlong *)FUN_1802ac390(uVar13);
          plStack_1c0 = plVar14;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          FUN_1802ae9a0(plVar14,*(uint64_t *)(param_1 + 8));
          ppuStack_1d8 = &puStackX_20;
          puStackX_20 = puStack_208;
          if (puStack_208 != (uint *)0x0) {
            (**(code **)(*(longlong *)puStack_208 + 0x28))();
          }
          FUN_1802adab0(plVar14,&puStackX_20);
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          plVar3 = *(longlong **)(lVar20 + 0x10);
          *(longlong **)(lVar20 + 0x10) = plVar14;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14);
          }
          if (puStack_208 != (uint *)0x0) {
            (**(code **)(*(longlong *)puStack_208 + 0x38))();
          }
        }
        puVar28 = *(uint64_t **)(lVar20 + 0x20);
        if (puVar28 < *(uint64_t **)(lVar20 + 0x28)) {
          uVar13 = *(uint64_t *)(pfVar30 + 2);
          *puVar28 = *(uint64_t *)pfVar30;
          puVar28[1] = uVar13;
          fVar32 = pfVar30[5];
          fVar33 = pfVar30[6];
          fVar34 = pfVar30[7];
          *(float *)(puVar28 + 2) = pfVar30[4];
          *(float *)((longlong)puVar28 + 0x14) = fVar32;
          *(float *)(puVar28 + 3) = fVar33;
          *(float *)((longlong)puVar28 + 0x1c) = fVar34;
          *(float *)(puVar28 + 4) = pfVar30[8];
          *(longlong *)(lVar20 + 0x20) = *(longlong *)(lVar20 + 0x20) + 0x24;
        }
        else {
          puVar21 = *(uint64_t **)(lVar20 + 0x18);
          lVar27 = ((longlong)puVar28 - (longlong)puVar21) / 0x24;
          if (lVar27 == 0) {
            lVar27 = 1;
LAB_1803a810b:
            puVar16 = (uint64_t *)
                      FUN_18062b420(_DAT_180c8ed18,lVar27 * 0x24,*(int8_t *)(lVar20 + 0x30));
            puVar28 = *(uint64_t **)(lVar20 + 0x20);
            puVar21 = *(uint64_t **)(lVar20 + 0x18);
          }
          else {
            lVar27 = lVar27 * 2;
            if (lVar27 != 0) goto LAB_1803a810b;
            puVar16 = (uint64_t *)0x0;
          }
          puVar18 = puVar16;
          if (puVar21 != puVar28) {
            lVar24 = (longlong)puVar21 - (longlong)puVar16;
            puVar21 = puVar16 + 2;
            do {
              puVar17 = (uint64_t *)(lVar24 + -0x10 + (longlong)puVar21);
              uVar13 = puVar17[1];
              *puVar18 = *puVar17;
              puVar18[1] = uVar13;
              uVar13 = ((uint64_t *)(lVar24 + (longlong)puVar21))[1];
              *puVar21 = *(uint64_t *)(lVar24 + (longlong)puVar21);
              puVar21[1] = uVar13;
              *(int32_t *)(puVar21 + 2) = *(int32_t *)(lVar24 + 0x10 + (longlong)puVar21);
              puVar18 = (uint64_t *)((longlong)puVar18 + 0x24);
              puVar17 = (uint64_t *)((longlong)puVar21 + lVar24 + 0x14);
              puVar21 = (uint64_t *)((longlong)puVar21 + 0x24);
            } while (puVar17 != puVar28);
          }
          uVar13 = *(uint64_t *)(pfVar30 + 2);
          *puVar18 = *(uint64_t *)pfVar30;
          puVar18[1] = uVar13;
          fVar32 = pfVar30[5];
          fVar33 = pfVar30[6];
          fVar34 = pfVar30[7];
          *(float *)(puVar18 + 2) = pfVar30[4];
          *(float *)((longlong)puVar18 + 0x14) = fVar32;
          *(float *)(puVar18 + 3) = fVar33;
          *(float *)((longlong)puVar18 + 0x1c) = fVar34;
          *(float *)(puVar18 + 4) = pfVar30[8];
          if (*(longlong *)(lVar20 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t **)(lVar20 + 0x18) = puVar16;
          *(longlong *)(lVar20 + 0x20) = (longlong)puVar18 + 0x24;
          *(longlong *)(lVar20 + 0x28) = (longlong)puVar16 + lVar27 * 0x24;
        }
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)fVar35);
    }
    LOCK();
    param_1[0xc] = 0.0;
    UNLOCK();
    lVar20 = *(longlong *)(param_1 + 0x13c);
    *(longlong *)(param_1 + 0x13e) = lVar20;
    fVar35 = (float)_DAT_180c8ed30;
    puVar21 = *(uint64_t **)(param_1 + 0x132);
    puVar16 = (uint64_t *)*puVar21;
    puVar28 = puVar21;
    if (puVar16 == (uint64_t *)0x0) {
      puVar28 = puVar21 + 1;
      puVar16 = (uint64_t *)*puVar28;
      while (puVar16 == (uint64_t *)0x0) {
        puVar28 = puVar28 + 1;
        puVar16 = (uint64_t *)*puVar28;
      }
    }
    if (puVar16 != (uint64_t *)puVar21[*(longlong *)(param_1 + 0x134)]) {
      do {
        uStack_148 = 0x3f800000;
        uStack_140 = 0;
        uStack_138 = 0x3f80000000000000;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0x3f800000;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0x3f800000;
        lVar20 = (longlong)(puVar16[4] - puVar16[3]) / 0x12 +
                 ((longlong)(puVar16[4] - puVar16[3]) >> 0x3f);
        iVar26 = (int)(lVar20 >> 1) - (int)(lVar20 >> 0x3f);
        lVar20 = (longlong)iVar26;
        if (0 < iVar26) {
          lVar27 = 0;
          do {
            puVar21 = (uint64_t *)(lVar27 + puVar16[3]);
            uVar13 = *puVar21;
            uVar7 = puVar21[1];
            puVar2 = (int32_t *)(lVar27 + 0x10 + puVar16[3]);
            uStack_118 = *puVar2;
            uStack_114 = puVar2[1];
            uStack_110 = puVar2[2];
            uStack_10c = puVar2[3];
            lVar24 = puVar16[2];
            *(uint64_t *)(lVar24 + 0x90) = 0x3f800000;
            *(uint64_t *)(lVar24 + 0x98) = 0;
            *(uint64_t *)(lVar24 + 0xa0) = 0x3f80000000000000;
            *(uint64_t *)(lVar24 + 0xa8) = 0;
            *(uint64_t *)(lVar24 + 0xb0) = 0;
            *(uint64_t *)(lVar24 + 0xb8) = 0x3f800000;
            *(uint64_t *)(lVar24 + 0xc0) = uVar13;
            *(uint64_t *)(lVar24 + 200) = uVar7;
            *(int8_t *)(lVar24 + 0x15c) = 1;
            FUN_1802ac930(puVar16[2],param_1[10],&uStack_148);
            lVar27 = lVar27 + 0x24;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        puVar16[4] = puVar16[3];
        lVar20 = (puVar16[8] - puVar16[7]) +
                 SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)(puVar16[8] - puVar16[7])),
                        8);
        iVar29 = (int)(lVar20 >> 6) - (int)(lVar20 >> 0x3f);
        lVar20 = (longlong)iVar29;
        if (0 < iVar29) {
          lVar27 = 0;
          do {
            puVar21 = (uint64_t *)(puVar16[7] + lVar27);
            uVar13 = *puVar21;
            uVar7 = puVar21[1];
            uVar8 = puVar21[2];
            uVar9 = puVar21[3];
            uVar10 = puVar21[4];
            uVar11 = puVar21[5];
            fStack_158 = *(float *)(puVar21 + 6);
            fStack_154 = *(float *)((longlong)puVar21 + 0x34);
            fStack_150 = *(float *)(puVar21 + 7);
            uStack_14c = *(int32_t *)((longlong)puVar21 + 0x3c);
            fVar32 = fStack_158 - param_2 * *(float *)(puVar21 + 8);
            fVar33 = fStack_154 - param_2 * *(float *)((longlong)puVar21 + 0x44);
            fVar34 = fStack_150 - param_2 * *(float *)(puVar21 + 9);
            FUN_1802ae420(puVar16[2]);
            lVar24 = puVar16[2];
            *(uint64_t *)(lVar24 + 0x90) = uVar13;
            *(uint64_t *)(lVar24 + 0x98) = uVar7;
            *(uint64_t *)(lVar24 + 0xa0) = uVar8;
            *(uint64_t *)(lVar24 + 0xa8) = uVar9;
            *(uint64_t *)(lVar24 + 0xb0) = uVar10;
            *(uint64_t *)(lVar24 + 0xb8) = uVar11;
            *(float *)(lVar24 + 0xc0) = fVar32;
            *(float *)(lVar24 + 0xc4) = fVar33;
            *(float *)(lVar24 + 200) = fVar34;
            *(int32_t *)(lVar24 + 0xcc) = uStack_14c;
            *(int8_t *)(lVar24 + 0x15c) = 1;
            fStack_158 = fVar32;
            fStack_154 = fVar33;
            fStack_150 = fVar34;
            FUN_1802ac930(puVar16[2],param_1[10],puVar21);
            lVar27 = lVar27 + 0x54;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        puVar16[8] = puVar16[7];
        if ((iVar26 == 0) && (iVar29 == 0)) {
          if (3.0 < fVar35 * 1e-05 - *(float *)(puVar16 + 0xb)) {
            puVar21 = *(uint64_t **)(param_1 + 0x13e);
            if (puVar21 < *(uint64_t **)(param_1 + 0x140)) {
              *puVar21 = *puVar16;
              *(int32_t *)(puVar21 + 1) = *(int32_t *)(puVar16 + 1);
              *(longlong *)(param_1 + 0x13e) = *(longlong *)(param_1 + 0x13e) + 0xc;
            }
            else {
              puVar18 = *(uint64_t **)(param_1 + 0x13c);
              lVar20 = ((longlong)puVar21 - (longlong)puVar18) / 0xc;
              if (lVar20 == 0) {
                lVar20 = 1;
LAB_1803a84a3:
                puVar17 = (uint64_t *)
                          FUN_18062b420(_DAT_180c8ed18,lVar20 * 0xc,*(int8_t *)(param_1 + 0x142)
                                       );
                puVar21 = *(uint64_t **)(param_1 + 0x13e);
                puVar18 = *(uint64_t **)(param_1 + 0x13c);
              }
              else {
                lVar20 = lVar20 * 2;
                if (lVar20 != 0) goto LAB_1803a84a3;
                puVar17 = (uint64_t *)0x0;
              }
              if (puVar18 != puVar21) {
                    // WARNING: Subroutine does not return
                memmove(puVar17,puVar18,(longlong)puVar21 - (longlong)puVar18);
              }
              *puVar17 = *puVar16;
              *(int32_t *)(puVar17 + 1) = *(int32_t *)(puVar16 + 1);
              if (*(longlong *)(param_1 + 0x13c) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(uint64_t **)(param_1 + 0x13c) = puVar17;
              *(longlong *)(param_1 + 0x13e) = (longlong)puVar17 + 0xc;
              *(longlong *)(param_1 + 0x140) = (longlong)puVar17 + lVar20 * 0xc;
            }
          }
        }
        else {
          *(float *)(puVar16 + 0xb) = fVar35 * 1e-05;
        }
        puVar16 = (uint64_t *)puVar16[0xc];
        while (puVar16 == (uint64_t *)0x0) {
          puVar28 = puVar28 + 1;
          puVar16 = (uint64_t *)*puVar28;
        }
      } while (puVar16 !=
               *(uint64_t **)(*(longlong *)(param_1 + 0x132) + *(longlong *)(param_1 + 0x134) * 8)
              );
      lVar20 = *(longlong *)(param_1 + 0x13e);
    }
    iVar26 = (int)((lVar20 - *(longlong *)(param_1 + 0x13c)) / 0xc);
    lVar20 = (longlong)iVar26;
    if (0 < iVar26) {
      lVar27 = 0;
      do {
        lVar24 = *(longlong *)(param_1 + 0x13c);
        uVar25 = *(uint *)(lVar27 + 8 + lVar24);
        uVar23 = *(uint *)(lVar27 + 4 + lVar24);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x132) +
                         ((ulonglong)
                          ((*(uint *)(lVar27 + lVar24) & 0xfff) << 0xc | uVar25 << 0x18 |
                          uVar23 & 0xfff) % (ulonglong)(uint)param_1[0x134]) * 8);
        puVar4 = *(uint **)puVar1;
        while ((puVar4 != (uint *)0x0 &&
               (((*(uint *)(lVar27 + lVar24) != *puVar4 || (uVar23 != puVar4[1])) ||
                (uVar25 != puVar4[2]))))) {
          puVar1 = puVar4 + 0x18;
          puVar4 = *(uint **)puVar1;
        }
        puVar22 = (uint *)0x0;
        if (puVar4 != (uint *)0x0) {
          do {
            puVar19 = puVar4;
            if (((*(uint *)(lVar27 + lVar24) != *puVar19) ||
                (*(uint *)(lVar27 + 4 + lVar24) != puVar19[1])) ||
               (*(uint *)(lVar27 + 8 + lVar24) != puVar19[2])) break;
            *(uint64_t *)puVar1 = *(uint64_t *)(puVar19 + 0x18);
            *(uint **)(puVar19 + 0x18) = puVar22;
            *(longlong *)(param_1 + 0x136) = *(longlong *)(param_1 + 0x136) + -1;
            puVar4 = *(uint **)puVar1;
            puVar22 = puVar19;
          } while (*(uint **)puVar1 != (uint *)0x0);
          if (puVar22 != (uint *)0x0) {
            puStackX_8 = puVar22;
            FUN_1803a8d20(puVar22 + 4);
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar22);
          }
        }
        lVar27 = lVar27 + 0xc;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    param_1[10] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a8720(longlong param_1,float *param_2,float *param_3,int32_t param_4)
void FUN_1803a8720(longlong param_1,float *param_2,float *param_3,int32_t param_4)

{
  uint *puVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if (0.0005 <= (*param_2 - *param_3) * (*param_2 - *param_3) +
                (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) {
    LOCK();
    puVar1 = (uint *)(param_1 + 0x30);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    uVar12 = uVar6 >> 0xb;
    uVar15 = (ulonglong)uVar12;
    if (*(longlong *)(param_1 + 0x38 + (ulonglong)uVar12 * 8) == 0) {
      lVar13 = FUN_18062b420(_DAT_180c8ed18,0x12000,3);
      plVar4 = (longlong *)(param_1 + 0x38 + uVar15 * 8);
      LOCK();
      bVar16 = *plVar4 == 0;
      if (bVar16) {
        *plVar4 = lVar13;
      }
      UNLOCK();
      if (bVar16) {
        iVar14 = uVar12 * 0x800;
        iVar2 = iVar14 + 0x800;
        for (; iVar14 < iVar2; iVar14 = iVar14 + 1) {
        }
        LOCK();
        *(int8_t *)(uVar15 + 0x238 + param_1) = 0;
        UNLOCK();
      }
      else {
        if (lVar13 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*(char *)(uVar15 + 0x238 + param_1) != '\0');
      }
    }
    else {
      do {
      } while (*(char *)(uVar15 + 0x238 + param_1) != '\0');
    }
    lVar13 = *(longlong *)(param_1 + 0x38 + uVar15 * 8);
    uVar11 = *(uint64_t *)(param_2 + 2);
    uVar15 = (ulonglong)(uVar6 + uVar12 * -0x800);
    puVar3 = (uint64_t *)(lVar13 + uVar15 * 0x24);
    *puVar3 = *(uint64_t *)param_2;
    puVar3[1] = uVar11;
    fVar7 = *param_3;
    fVar8 = param_3[1];
    fVar9 = param_3[2];
    fVar10 = param_3[3];
    *(int32_t *)(lVar13 + 0x20 + uVar15 * 0x24) = param_4;
    pfVar5 = (float *)(lVar13 + 0x10 + uVar15 * 0x24);
    *pfVar5 = fVar7;
    pfVar5[1] = fVar8;
    pfVar5[2] = fVar9;
    pfVar5[3] = fVar10;
    if (*(longlong *)(param_1 + 0x550) != 0) {
      (**(code **)(param_1 + 0x558))(param_2,param_3,param_4,param_1 + 0x540);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a8766(longlong param_1)
void FUN_1803a8766(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  int32_t *puVar5;
  uint uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong unaff_RBX;
  uint64_t *unaff_RBP;
  int32_t *unaff_RSI;
  ulonglong uVar15;
  int32_t unaff_R15D;
  bool bVar16;
  
  LOCK();
  puVar1 = (uint *)(param_1 + 0x30);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar12 = uVar6 >> 0xb;
  uVar15 = (ulonglong)uVar12;
  if (*(longlong *)(param_1 + 0x38 + (ulonglong)uVar12 * 8) == 0) {
    lVar13 = FUN_18062b420(_DAT_180c8ed18,0x12000,3);
    plVar4 = (longlong *)(unaff_RBX + 0x38 + uVar15 * 8);
    LOCK();
    bVar16 = *plVar4 == 0;
    if (bVar16) {
      *plVar4 = lVar13;
    }
    UNLOCK();
    if (bVar16) {
      iVar14 = uVar12 * 0x800;
      iVar2 = iVar14 + 0x800;
      for (; iVar14 < iVar2; iVar14 = iVar14 + 1) {
      }
      LOCK();
      *(int8_t *)(uVar15 + 0x238 + unaff_RBX) = 0;
      UNLOCK();
    }
    else {
      if (lVar13 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      do {
      } while (*(char *)(uVar15 + 0x238 + unaff_RBX) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(uVar15 + 0x238 + param_1) != '\0');
  }
  lVar13 = *(longlong *)(unaff_RBX + 0x38 + uVar15 * 8);
  uVar11 = unaff_RBP[1];
  uVar15 = (ulonglong)(uVar6 + uVar12 * -0x800);
  puVar3 = (uint64_t *)(lVar13 + uVar15 * 0x24);
  *puVar3 = *unaff_RBP;
  puVar3[1] = uVar11;
  uVar7 = *unaff_RSI;
  uVar8 = unaff_RSI[1];
  uVar9 = unaff_RSI[2];
  uVar10 = unaff_RSI[3];
  *(int32_t *)(lVar13 + 0x20 + uVar15 * 0x24) = unaff_R15D;
  puVar5 = (int32_t *)(lVar13 + 0x10 + uVar15 * 0x24);
  *puVar5 = uVar7;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar10;
  if (*(longlong *)(unaff_RBX + 0x550) != 0) {
    (**(code **)(unaff_RBX + 0x558))();
  }
  return;
}






// 函数: void FUN_1803a8846(void)
void FUN_1803a8846(void)

{
  longlong unaff_RBX;
  
  (**(code **)(unaff_RBX + 0x558))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a8870(longlong param_1,uint64_t *param_2,int32_t *param_3,int32_t param_4)
void FUN_1803a8870(longlong param_1,uint64_t *param_2,int32_t *param_3,int32_t param_4)

{
  int iVar1;
  uint *puVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  longlong *plVar5;
  uint uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  
  LOCK();
  puVar2 = (uint *)(param_1 + 0x278);
  uVar6 = *puVar2;
  *puVar2 = *puVar2 + 1;
  UNLOCK();
  uVar12 = uVar6 >> 0xb;
  uVar16 = (ulonglong)uVar12;
  if (*(longlong *)(param_1 + 0x280 + (ulonglong)uVar12 * 8) == 0) {
    lVar14 = FUN_18062b420(_DAT_180c8ed18,0x2a000,3);
    plVar5 = (longlong *)(param_1 + 0x280 + uVar16 * 8);
    LOCK();
    bVar17 = *plVar5 == 0;
    if (bVar17) {
      *plVar5 = lVar14;
    }
    UNLOCK();
    if (bVar17) {
      iVar13 = uVar12 * 0x800;
      iVar1 = iVar13 + 0x800;
      for (; iVar13 < iVar1; iVar13 = iVar13 + 1) {
      }
      LOCK();
      *(int8_t *)(uVar16 + 0x480 + param_1) = 0;
      UNLOCK();
    }
    else {
      if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      do {
      } while (*(char *)(uVar16 + 0x480 + param_1) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(uVar16 + 0x480 + param_1) != '\0');
  }
  lVar14 = *(longlong *)(param_1 + 0x280 + uVar16 * 8);
  uVar11 = param_2[1];
  lVar15 = (ulonglong)(uVar6 + uVar12 * -0x800) * 0x54;
  *(uint64_t *)(lVar14 + lVar15) = *param_2;
  ((uint64_t *)(lVar14 + lVar15))[1] = uVar11;
  uVar11 = param_2[3];
  puVar3 = (uint64_t *)(lVar14 + 0x10 + lVar15);
  *puVar3 = param_2[2];
  puVar3[1] = uVar11;
  uVar11 = param_2[5];
  puVar3 = (uint64_t *)(lVar14 + 0x20 + lVar15);
  *puVar3 = param_2[4];
  puVar3[1] = uVar11;
  uVar7 = *(int32_t *)((longlong)param_2 + 0x34);
  uVar8 = *(int32_t *)(param_2 + 7);
  uVar9 = *(int32_t *)((longlong)param_2 + 0x3c);
  puVar4 = (int32_t *)(lVar14 + 0x30 + lVar15);
  *puVar4 = *(int32_t *)(param_2 + 6);
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar10 = param_3[3];
  *(int32_t *)(lVar14 + 0x50 + lVar15) = param_4;
  puVar4 = (int32_t *)(lVar14 + 0x40 + lVar15);
  *puVar4 = uVar7;
  puVar4[1] = uVar8;
  puVar4[2] = uVar9;
  puVar4[3] = uVar10;
  if (*(longlong *)(param_1 + 0x530) != 0) {
    (**(code **)(param_1 + 0x538))(param_2,param_3,param_4,param_1 + 0x520);
  }
  return;
}






