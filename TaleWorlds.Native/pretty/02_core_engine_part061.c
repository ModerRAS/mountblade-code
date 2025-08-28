#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part061.c - 4 个函数

// 函数: void FUN_180099430(longlong param_1,longlong param_2)
void FUN_180099430(longlong param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  ushort uVar3;
  code *pcVar4;
  int *piVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int32_t uVar21;
  longlong *plVar22;
  int32_t *puVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int32_t *puVar28;
  longlong lVar29;
  int32_t *puVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  uint64_t uVar38;
  int8_t auStack_2f8 [32];
  code *pcStack_2d8;
  int8_t *puStack_2d0;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  ulonglong uStack_2b8;
  longlong *plStack_2b0;
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong *plStack_288;
  uint64_t uStack_280;
  longlong *plStack_278;
  int32_t uStack_270;
  int16_t uStack_26c;
  uint64_t uStack_268;
  int32_t uStack_260;
  int32_t uStack_25c;
  int32_t uStack_258;
  int32_t uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  ulonglong auStack_238 [16];
  int8_t auStack_1b8 [336];
  ulonglong uStack_68;
  
  if (param_2 == 0) {
    return;
  }
  uStack_280 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2f8;
  lVar17 = (longlong)*(int *)(param_2 + 0x10);
  lStack_2a8 = param_2;
  lStack_298 = param_1;
  if (*(int *)(param_2 + 0x10) != 0) {
    lVar32 = 0;
    lVar24 = lVar32;
    lVar27 = lVar32;
    lVar29 = lVar32;
    if (1 < lVar17) {
      plVar19 = *(longlong **)(param_2 + 8);
      lVar26 = (lVar17 - 2U >> 1) + 1;
      lVar24 = lVar26 * 2;
      do {
        lVar27 = lVar27 + *(int *)(*plVar19 + 0x20);
        lVar29 = lVar29 + *(int *)(plVar19[1] + 0x20);
        plVar19 = plVar19 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    if (lVar24 < lVar17) {
      lVar32 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_2 + 8) + lVar24 * 8) + 0x20);
    }
    if (lVar32 + lVar29 + lVar27 != 0) {
      FUN_180099100(param_1);
      lVar17 = _DAT_180c86938;
      uVar1 = *(int32_t *)(_DAT_180c86950 + 0x17ec);
      uVar2 = *(int32_t *)(_DAT_180c86950 + 0x17f0);
      plVar19 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
      plVar22 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x1d8);
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)0x0;
      }
      else {
        if (_DAT_180c86870 != 0) {
          *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x340) =
               (longlong)*(int *)(_DAT_180c86870 + 0x224);
        }
        if (*plVar22 != 0) {
          (**(code **)(*plVar19 + 0x70))(plVar19,*plVar22,1);
          lVar17 = _DAT_180c86938;
        }
      }
      plVar19[0x1077] = (longlong)plVar22;
      FUN_18029de40(*(uint64_t *)(lVar17 + 0x1cd8),1);
      *(int32_t *)(param_1 + 0x84) =
           *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x324);
      *(int32_t *)(param_1 + 0xa4) = 1;
      uStack_270 = 0;
      uStack_26c = 0;
      plStack_278 = (longlong *)0x10000010001;
      pcStack_2d8 = FUN_180045af0;
      FUN_1808fc838(auStack_238,8,0x10,&SUB_18005d5f0);
      plStack_2b0 = (longlong *)0x0;
      puStack_2d0 = auStack_1b8;
      FUN_180206da0(puStack_2d0,*(uint64_t *)(*(longlong *)(param_1 + 0x10) + 0x18),&plStack_278,
                    auStack_238);
      pcStack_2d8 = (code *)&uStack_268;
      FUN_1802072b0(pcStack_2d8,*(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x18));
      plVar19 = plStack_2b0;
      puVar28 = *(int32_t **)(auStack_238[*(int *)(_DAT_180c86938 + 0x8c)] + 0x10);
      puVar30 = *(int32_t **)(auStack_238[*(int *)(_DAT_180c86938 + 0x80)] + 0x10);
      uVar20 = auStack_238[*(int *)(_DAT_180c86938 + 0x78)];
      puVar23 = *(int32_t **)(uVar20 + 0x10);
      lStack_2a0 = plStack_2b0[2];
      iVar33 = 0;
      iStack_2c8 = 0;
      if (0 < *(int *)(param_2 + 0x10)) {
        lVar17 = 0;
        uStack_2b8 = 0;
        do {
          lVar24 = *(longlong *)(uStack_2b8 + *(longlong *)(lStack_2a8 + 8));
          uVar35 = *(uint *)(lVar24 + 0x20);
          uVar31 = 0;
          if (3 < uVar35) {
            do {
              lVar29 = (longlong)(int)uVar31;
              lVar27 = *(longlong *)(lVar24 + 0x28);
              *puVar28 = *(int32_t *)(lVar27 + lVar29 * 0x14);
              puVar28[1] = *(int32_t *)(lVar27 + 4 + lVar29 * 0x14);
              puVar28[2] = 0;
              *puVar30 = *(int32_t *)(lVar27 + 8 + lVar29 * 0x14);
              puVar30[1] = *(int32_t *)(lVar27 + 0xc + lVar29 * 0x14);
              *puVar23 = *(int32_t *)(lVar27 + 0x10 + lVar29 * 0x14);
              lVar27 = *(longlong *)(lVar24 + 0x28);
              puVar28[3] = *(int32_t *)(lVar27 + 0x14 + lVar29 * 0x14);
              puVar28[4] = *(int32_t *)(lVar27 + 0x18 + lVar29 * 0x14);
              puVar28[5] = 0;
              puVar30[2] = *(int32_t *)(lVar27 + 0x1c + lVar29 * 0x14);
              puVar30[3] = *(int32_t *)(lVar27 + 0x20 + lVar29 * 0x14);
              puVar23[1] = *(int32_t *)(lVar27 + 0x24 + lVar29 * 0x14);
              lVar27 = *(longlong *)(lVar24 + 0x28);
              puVar28[6] = *(int32_t *)(lVar27 + 0x28 + lVar29 * 0x14);
              puVar28[7] = *(int32_t *)(lVar27 + 0x2c + lVar29 * 0x14);
              puVar28[8] = 0;
              puVar30[4] = *(int32_t *)(lVar27 + 0x30 + lVar29 * 0x14);
              puVar30[5] = *(int32_t *)(lVar27 + 0x34 + lVar29 * 0x14);
              puVar23[2] = *(int32_t *)(lVar27 + 0x38 + lVar29 * 0x14);
              lVar27 = *(longlong *)(lVar24 + 0x28);
              puVar28[9] = *(int32_t *)(lVar27 + 0x3c + lVar29 * 0x14);
              puVar28[10] = *(int32_t *)(lVar27 + 0x40 + lVar29 * 0x14);
              puVar28[0xb] = 0;
              puVar30[6] = *(int32_t *)(lVar27 + 0x44 + lVar29 * 0x14);
              puVar30[7] = *(int32_t *)(lVar27 + 0x48 + lVar29 * 0x14);
              puVar23[3] = *(int32_t *)(lVar27 + 0x4c + lVar29 * 0x14);
              puVar23 = puVar23 + 4;
              puVar30 = puVar30 + 8;
              puVar28 = puVar28 + 0xc;
              uVar31 = uVar31 + 4;
            } while (uVar31 < uVar35 - 3);
          }
          iVar25 = 0;
          for (; uVar31 < uVar35; uVar31 = uVar31 + 1) {
            lVar29 = (longlong)(int)uVar31;
            lVar27 = *(longlong *)(lVar24 + 0x28);
            *puVar28 = *(int32_t *)(lVar27 + lVar29 * 0x14);
            puVar28[1] = *(int32_t *)(lVar27 + 4 + lVar29 * 0x14);
            puVar28[2] = 0;
            *puVar30 = *(int32_t *)(lVar27 + 8 + lVar29 * 0x14);
            puVar30[1] = *(int32_t *)(lVar27 + 0xc + lVar29 * 0x14);
            *puVar23 = *(int32_t *)(lVar27 + 0x10 + lVar29 * 0x14);
            puVar23 = puVar23 + 1;
            puVar30 = puVar30 + 2;
            puVar28 = puVar28 + 3;
          }
          if (0 < *(int *)(lVar24 + 0x10)) {
            lVar27 = 0;
            do {
              *(short *)(lStack_2a0 + lVar17 * 2) =
                   *(short *)(lVar27 + *(longlong *)(lVar24 + 0x18)) + (short)iVar33;
              lVar17 = lVar17 + 1;
              iVar25 = iVar25 + 1;
              lVar27 = lVar27 + 2;
            } while (iVar25 < *(int *)(lVar24 + 0x10));
          }
          iVar33 = iVar33 + *(int *)(lVar24 + 0x20);
          iStack_2c8 = iStack_2c8 + 1;
          uVar20 = uStack_2b8 + 8;
          param_1 = lStack_298;
          uStack_2b8 = uVar20;
        } while (iStack_2c8 < *(int *)(lStack_2a8 + 0x10));
      }
      uVar38 = FUN_180207110(uVar20,*(uint64_t *)(*(longlong *)(param_1 + 0x10) + 0x18),
                             auStack_238);
      FUN_180207400(uVar38,*(uint64_t *)(*(longlong *)(param_1 + 0x18) + 0x18),&plStack_2b0);
      lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      lVar24 = *(longlong *)(_DAT_180c86938 + 0x1ca8);
      plVar22 = *(longlong **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x38);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(longlong **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x1f0);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(longlong **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x210);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(longlong **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x80);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(longlong **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x238);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      lVar24 = _DAT_180c86938;
      uVar38 = *(uint64_t *)(param_1 + 0x28);
      uVar21 = *(int32_t *)(param_1 + 0x30);
      uVar6 = *(int32_t *)(param_1 + 0x34);
      uVar7 = *(int32_t *)(param_1 + 0x38);
      uVar8 = *(int32_t *)(param_1 + 0x3c);
      uVar9 = *(int32_t *)(param_1 + 0x40);
      uVar10 = *(int32_t *)(param_1 + 0x44);
      uVar11 = *(int32_t *)(param_1 + 0x48);
      uVar12 = *(int32_t *)(param_1 + 0x4c);
      uVar13 = *(int32_t *)(param_1 + 0x50);
      uVar14 = *(int32_t *)(param_1 + 0x54);
      uVar15 = *(int32_t *)(param_1 + 0x58);
      uVar16 = *(int32_t *)(param_1 + 0x5c);
      lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      *(uint64_t *)(lVar17 + 0x80) = *(uint64_t *)(param_1 + 0x20);
      *(uint64_t *)(lVar17 + 0x88) = uVar38;
      *(int32_t *)(lVar17 + 0x90) = uVar21;
      *(int32_t *)(lVar17 + 0x94) = uVar6;
      *(int32_t *)(lVar17 + 0x98) = uVar7;
      *(int32_t *)(lVar17 + 0x9c) = uVar8;
      *(int32_t *)(lVar17 + 0xa0) = uVar9;
      *(int32_t *)(lVar17 + 0xa4) = uVar10;
      *(int32_t *)(lVar17 + 0xa8) = uVar11;
      *(int32_t *)(lVar17 + 0xac) = uVar12;
      *(int32_t *)(lVar17 + 0xb0) = uVar13;
      *(int32_t *)(lVar17 + 0xb4) = uVar14;
      *(int32_t *)(lVar17 + 0xb8) = uVar15;
      *(int32_t *)(lVar17 + 0xbc) = uVar16;
      lVar17 = *(longlong *)(lVar24 + 0x1cd8);
      FUN_18029fc10(lVar17,*(uint64_t *)(lVar24 + 0x1ca8),lVar17 + 0x80,0x80);
      iVar33 = 0;
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
      if (0 < *(int *)(lStack_2a8 + 0x10)) {
        lStack_2a0 = 0;
        iVar25 = iVar33;
        do {
          piVar5 = *(int **)(lStack_2a0 + *(longlong *)(lStack_2a8 + 8));
          iStack_2c0 = 0;
          if (0 < *piVar5) {
            lStack_290 = 0;
            do {
              plVar19 = (longlong *)0x0;
              puVar36 = (uint *)(*(longlong *)(piVar5 + 2) + lStack_290);
              if ((*(uint *)(*(longlong *)(puVar36 + 6) + 0x328) >> 0xd & 1) == 0) {
                FUN_18029cdd0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8));
                lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
                plVar18 = (longlong *)FUN_18023a940();
                plVar22 = plVar19;
                if (((plVar18 != (longlong *)0x0) && (plVar22 = plVar18, plVar18[1] == 0)) &&
                   (plVar18[2] == 0)) {
                  plVar22 = (longlong *)0x0;
                }
                if ((((*(longlong **)(lVar17 + 0x8438) != plVar22) ||
                     (*(int *)(lVar17 + 0x8838) != -1)) || (*(int *)(lVar17 + 0x8a38) != 0x10)) &&
                   (((plVar22 == (longlong *)0x0 || (plVar22[1] != 0)) || (plVar22[2] != 0)))) {
                  if (plVar22 != (longlong *)0x0) {
                    plVar19 = (longlong *)plVar22[2];
                  }
                  plStack_278 = plVar19;
                  (**(code **)(**(longlong **)(lVar17 + 0x8400) + 0x40))
                            (*(longlong **)(lVar17 + 0x8400),0,1,&plStack_278);
                  *(longlong **)(lVar17 + 0x8438) = plVar22;
                  *(int32_t *)(lVar17 + 0x8838) = 0xffffffff;
                  *(int32_t *)(lVar17 + 0x8a38) = 0x10;
                  *(int *)(lVar17 + 0x82b4) = *(int *)(lVar17 + 0x82b4) + 1;
                }
              }
              else {
                FUN_18029cdd0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),param_1 + 0xa8);
                lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
                plVar18 = (longlong *)FUN_18023a940();
                plVar22 = plVar19;
                if (((plVar18 != (longlong *)0x0) && (plVar22 = plVar18, plVar18[1] == 0)) &&
                   (plVar18[2] == 0)) {
                  plVar22 = (longlong *)0x0;
                }
                if ((((*(longlong **)(lVar17 + 0x8530) != plVar22) ||
                     (*(int *)(lVar17 + 0x88b4) != -1)) || (*(int *)(lVar17 + 0x8ab4) != 0x10)) &&
                   (((plVar22 == (longlong *)0x0 || (plVar22[1] != 0)) || (plVar22[2] != 0)))) {
                  if (plVar22 != (longlong *)0x0) {
                    plVar19 = (longlong *)plVar22[2];
                  }
                  plStack_288 = plVar19;
                  (**(code **)(**(longlong **)(lVar17 + 0x8400) + 0x40))
                            (*(longlong **)(lVar17 + 0x8400),0x1f,1,&plStack_288);
                  *(longlong **)(lVar17 + 0x8530) = plVar22;
                  *(int32_t *)(lVar17 + 0x88b4) = 0xffffffff;
                  *(int32_t *)(lVar17 + 0x8ab4) = 0x10;
                  *(int *)(lVar17 + 0x82b4) = *(int *)(lVar17 + 0x82b4) + 1;
                }
                lVar24 = _DAT_180c86938;
                iVar33 = iVar25 + (iVar25 / 6 + (iVar25 >> 0x1f) +
                                  (int)(((longlong)iVar25 / 6 + ((longlong)iVar25 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -6;
                iVar25 = iVar25 + 1;
                *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0xc0) = (float)iVar33;
                lVar17 = *(longlong *)(lVar24 + 0x1cd8);
                iStack_2c4 = iVar25;
                FUN_18029fc10(lVar17,*(uint64_t *)(lVar24 + 0x1ca8),lVar17 + 0x80,0x80);
              }
              if (*(code **)(puVar36 + 8) == (code *)0x0) {
                lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
                lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
                if (*(longlong *)(lVar17 + 0x8240) != lVar24) {
                  *(longlong *)(lVar17 + 0x8240) = lVar24;
                  puStack_2d0 = (int8_t *)(lVar24 + 0x220);
                  pcStack_2d8 = (code *)(lVar24 + 0x260);
                  (**(code **)(**(longlong **)(lVar17 + 0x8400) + 0x90))
                            (*(longlong **)(lVar17 + 0x8400),0,*(int32_t *)(lVar24 + 0x188),
                             lVar24 + 0x1a0);
                }
                lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
                lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
                if (*(longlong *)(lVar17 + 0x8238) != lVar24) {
                  *(longlong *)(lVar17 + 0x8238) = lVar24;
                  lVar27 = *(longlong *)(lVar24 + 0x18);
                  *(int32_t *)(lVar27 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224);
                  if ((*(byte *)(lVar24 + 4) & 1) == 0) {
                    uVar21 = 0x39;
                    iVar33 = *(int *)(lVar24 + 8) * 2;
                  }
                  else {
                    uVar21 = 0x2a;
                    iVar33 = *(int *)(lVar24 + 8) * 4;
                  }
                  (**(code **)(**(longlong **)(lVar17 + 0x8400) + 0x98))
                            (*(longlong **)(lVar17 + 0x8400),*(uint64_t *)(lVar27 + 0x10),uVar21,
                             iVar33);
                }
                uVar35 = (uint)(float)puVar36[1];
                uVar37 = (uint)(float)puVar36[2];
                uVar34 = (uint)(float)puVar36[3];
                uVar31 = (uint)(float)puVar36[4];
                uVar3 = *(ushort *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32c);
                if ((int)uVar35 < 0) {
                  uVar35 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar35) {
                  uVar35 = (uint)uVar3;
                }
                if ((int)uVar34 < 0) {
                  uVar34 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar34) {
                  uVar34 = (uint)uVar3;
                }
                uVar3 = *(ushort *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32e);
                if ((int)uVar37 < 0) {
                  uVar37 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar37) {
                  uVar37 = (uint)uVar3;
                }
                if ((int)uVar31 < 0) {
                  uVar31 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar31) {
                  uVar31 = (uint)uVar3;
                }
                lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
                uStack_268 = 0;
                uStack_258 = 0;
                uStack_254 = 0x3f800000;
                plVar19 = *(longlong **)(lVar17 + 0x8400);
                uStack_260 = uVar1;
                uStack_25c = uVar2;
                (**(code **)(*plVar19 + 0x160))(plVar19,1,&uStack_268);
                plVar19 = *(longlong **)(lVar17 + 0x8400);
                uStack_250 = uVar35;
                uStack_24c = uVar37;
                uStack_248 = uVar34;
                uStack_244 = uVar31;
                (**(code **)(*plVar19 + 0x168))(plVar19,1,&uStack_250);
                param_1 = lStack_298;
                iVar25 = iStack_2c4;
                if (system_ptr_2846 == '\0') {
                  plVar19 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
                  (**(code **)(*plVar19 + 0x60))(plVar19,(*puVar36 / 3) * 3,iStack_2c8,0);
                  param_1 = lStack_298;
                  iVar25 = iStack_2c4;
                }
              }
              else {
                (**(code **)(puVar36 + 8))(piVar5,puVar36);
              }
              iStack_2c8 = iStack_2c8 + *puVar36;
              iStack_2c0 = iStack_2c0 + 1;
              lStack_290 = lStack_290 + 0x30;
            } while (iStack_2c0 < *piVar5);
            iVar33 = (int)uStack_2b8;
          }
          iVar33 = iVar33 + 1;
          uStack_2b8 = CONCAT44(uStack_2b8._4_4_,iVar33);
          lStack_2a0 = lStack_2a0 + 8;
          plVar19 = plStack_2b0;
        } while (iVar33 < *(int *)(lStack_2a8 + 0x10));
      }
      plStack_278 = *(longlong **)(_DAT_180c86960 + 0x10);
      *(uint64_t *)(_DAT_180c86960 + 0x10) = 0;
      if (plStack_278 != (longlong *)0x0) {
        (**(code **)(*plStack_278 + 0x38))();
      }
      (**(code **)(*plVar19 + 0x38))(plVar19);
      FUN_1808fc8a8(auStack_238,8,0x10,FUN_180045af0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_2f8);
}





// 函数: void FUN_180099f60(uint64_t param_1)
void FUN_180099f60(uint64_t param_1)

{
  FUN_1808fc8a8(param_1,8,0x10,FUN_180045af0,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void *
FUN_180099f90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49210) {
    FUN_1808fcb90(&system_ptr_9210);
    if (_DAT_180d49210 == -1) {
      _DAT_180d49218 = &unknown_var_3456_ptr;
      _DAT_180d49230 = 0;
      _DAT_180d49220 = (void *)0x0;
      _DAT_180d49228 = 0;
      FUN_1808fc820(FUN_1809419e0);
      FUN_1808fcb30(&system_ptr_9210);
    }
  }
  FUN_1801717e0(*(uint64_t *)(_DAT_180c86870 + 8),&system_ptr_9218,param_3,param_4,uVar2);
  puVar1 = &system_buffer_ptr;
  if (_DAT_180d49220 != (void *)0x0) {
    puVar1 = _DAT_180d49220;
  }
  return puVar1;
}



int8_t FUN_18009a080(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t *param_4)

{
  int8_t uVar1;
  uint64_t uVar2;
  void *puVar3;
  uint uVar4;
  uint64_t uStackX_8;
  int32_t uStackX_10;
  float fStackX_14;
  uint64_t uStackX_18;
  uint64_t *puStackX_20;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStackX_8 = param_1;
  uStackX_18 = param_3;
  puStackX_20 = param_4;
  uVar2 = func_0x000180220c90(*(int32_t *)(param_2 + 0x324));
  FUN_18012e3b0();
  puVar3 = &system_buffer_ptr;
  if ((void *)param_4[1] != (void *)0x0) {
    puVar3 = (void *)param_4[1];
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x32e);
  FUN_18010f010(&unknown_var_2320_ptr,puVar3,uVar2,*(int16_t *)(param_2 + 0x32c),uVar4);
  uStack_40 = 0x3f8000003f800000;
  uStack_38 = 0x3f8000003f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  uStackX_18 = 0x3f8000003f800000;
  uStackX_8 = 0;
  fStackX_14 = ((float)*(ushort *)(param_2 + 0x32e) * 256.0) / (float)*(ushort *)(param_2 + 0x32c);
  uStackX_10 = 0x43800000;
  uVar1 = FUN_180110ca0(param_2,&uStackX_10,&uStackX_8,&uStackX_18,uVar4,&uStack_30,&uStack_40);
  FUN_18012e4e0();
  *param_4 = &unknown_var_3456_ptr;
  if (param_4[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_4[1] = 0;
  *(int32_t *)(param_4 + 3) = 0;
  *param_4 = &unknown_var_720_ptr;
  return uVar1;
}





// 函数: void FUN_18009a1e0(void)
void FUN_18009a1e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18009a4b0(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4,
void FUN_18009a4b0(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  char *pcVar9;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  void *puVar19;
  float fVar20;
  char *pcVar10;
  ulonglong uVar15;
  
  iVar13 = 0;
  plVar12 = *(longlong **)(param_5 + 0x48);
  if (*(longlong *)(param_5 + 0x50) - (longlong)plVar12 >> 3 != 0) {
    lVar5 = 0;
    do {
      fVar20 = (float)FUN_18009ae50(param_2,*(uint64_t *)(lVar5 + *(longlong *)(param_5 + 0x48)));
      iVar13 = iVar13 + 1;
      *(double *)(*(longlong *)(lVar5 + *(longlong *)(param_5 + 0x48)) + 0x40) = (double)fVar20;
      plVar12 = *(longlong **)(param_5 + 0x48);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)(longlong)iVar13 <
             (ulonglong)(*(longlong *)(param_5 + 0x50) - (longlong)plVar12 >> 3));
  }
  plVar4 = *(longlong **)(param_5 + 0x50);
  if (plVar12 != plVar4) {
    iVar13 = 0;
    lVar16 = (longlong)plVar4 - (longlong)plVar12 >> 3;
    for (lVar5 = lVar16; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar13 = iVar13 + 1;
    }
    FUN_18009d630(plVar12,plVar4,(longlong)(iVar13 + -1) * 2,0);
    plVar18 = plVar12;
    if (lVar16 < 0x1d) {
      while (plVar18 = plVar18 + 1, plVar18 != plVar4) {
        lVar5 = *plVar18;
        plVar11 = plVar18;
        if (plVar18 != plVar12) {
          dVar3 = *(double *)(lVar5 + 0x40);
          plVar7 = plVar18;
          do {
            plVar6 = plVar7 + -1;
            plVar7 = plVar7 + -1;
            pdVar2 = (double *)(*plVar6 + 0x40);
            if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
            *plVar11 = *plVar6;
            plVar11 = plVar11 + -1;
          } while (plVar7 != plVar12);
        }
        *plVar11 = lVar5;
      }
    }
    else {
      plVar18 = plVar12 + 0x1c;
      plVar11 = plVar12;
      if (plVar12 != plVar18) {
        while (plVar11 = plVar11 + 1, plVar11 != plVar18) {
          lVar5 = *plVar11;
          plVar7 = plVar11;
          if (plVar11 != plVar12) {
            dVar3 = *(double *)(lVar5 + 0x40);
            plVar6 = plVar11;
            do {
              plVar1 = plVar6 + -1;
              plVar6 = plVar6 + -1;
              pdVar2 = (double *)(*plVar1 + 0x40);
              if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
              *plVar7 = *plVar1;
              plVar7 = plVar7 + -1;
            } while (plVar6 != plVar12);
          }
          *plVar7 = lVar5;
        }
      }
      for (; plVar18 != plVar4; plVar18 = plVar18 + 1) {
        lVar5 = *plVar18;
        lVar16 = plVar18[-1];
        dVar3 = *(double *)(lVar5 + 0x40);
        plVar12 = plVar18 + -1;
        plVar11 = plVar18;
        plVar7 = plVar18;
        if (*(double *)(lVar16 + 0x40) <= dVar3 && dVar3 != *(double *)(lVar16 + 0x40)) {
          do {
            plVar11 = plVar12;
            *plVar7 = lVar16;
            lVar16 = plVar11[-1];
            plVar12 = plVar11 + -1;
            plVar7 = plVar11;
          } while (*(double *)(lVar16 + 0x40) <= dVar3 && dVar3 != *(double *)(lVar16 + 0x40));
        }
        *plVar11 = lVar5;
      }
    }
  }
  puVar8 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
  uVar15 = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  *(int32_t *)(puVar8 + 5) = 1;
  puVar8[6] = 0;
  puVar8[8] = 0;
  pcVar9 = "scope";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  *puVar8 = &unknown_var_2340_ptr;
  puVar8[2] = pcVar10 + -0x180a01603;
  puVar19 = &system_buffer_ptr;
  if (*(void **)(param_5 + 8) != (void *)0x0) {
    puVar19 = *(void **)(param_5 + 8);
  }
  FUN_180630b20(param_3,puVar8,&unknown_var_2332_ptr,puVar19);
  FUN_180630e10(param_3,puVar8,&unknown_var_2352_ptr,*(double *)(param_5 + 0x40) * 1000.0);
  uVar17 = uVar15;
  if (*(longlong *)(param_5 + 0x50) - *(longlong *)(param_5 + 0x48) >> 3 != 0) {
    do {
      FUN_18009a4b0(param_1,param_2,param_3,puVar8,
                    *(uint64_t *)(uVar17 + *(longlong *)(param_5 + 0x48)));
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar17 = uVar17 + 8;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)(*(longlong *)(param_5 + 0x50) - *(longlong *)(param_5 + 0x48) >> 3));
  }
  if (*(longlong *)(param_4 + 0x30) == 0) {
    puVar8[10] = 0;
    *(uint64_t **)(param_4 + 0x30) = puVar8;
  }
  else {
    puVar8[10] = *(uint64_t *)(param_4 + 0x38);
    *(uint64_t **)(*(longlong *)(param_4 + 0x38) + 0x58) = puVar8;
  }
  *(uint64_t **)(param_4 + 0x38) = puVar8;
  puVar8[4] = param_4;
  puVar8[0xb] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



