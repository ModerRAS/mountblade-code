#include "TaleWorlds.Native.Split.h"

// 03_rendering_part192.c - 3 个函数

// 函数: void FUN_18037c8d0(longlong param_1,uint64_t param_2)
void FUN_18037c8d0(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int aiStackX_8 [2];
  uint64_t uVar8;
  int32_t uStack_68;
  int32_t uStack_64;
  int *piStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  void *puStack_50;
  void *puStack_48;
  
  uVar8 = 0xfffffffffffffffe;
  aiStackX_8[0] = (int)(*(longlong *)(param_1 + 0x20b8) - *(longlong *)(param_1 + 0x20b0) >> 3);
  if (0 < aiStackX_8[0]) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x20b0));
      plVar3 = *(longlong **)(lVar1 + 0x20);
      if (*(code **)(*plVar3 + 0xc0) == (code *)&UNK_180277e10) {
        cVar7 = (plVar3[8] - plVar3[7] & 0xfffffffffffffff0U) == 0;
      }
      else {
        cVar7 = (**(code **)(*plVar3 + 0xc0))();
      }
      if (cVar7 == '\0') {
        lVar4 = *(longlong *)plVar3[7];
      }
      else {
        lVar4 = 0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x1b8);
      if (*(longlong *)(lVar4 + 0xb8) == 0) {
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3,uVar8);
        plVar3 = (longlong *)FUN_18023a2e0(uVar2,1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,&system_data_1858);
        FUN_18022cd30(lVar4,0,plVar3);
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      if (*(longlong *)(lVar4 + 200) == 0) {
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3,uVar8);
        plVar3 = (longlong *)FUN_18023a2e0(uVar2,1);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,&system_data_1838);
        FUN_18022cd30(lVar4,2,plVar3);
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      FUN_18037ae90(param_1,param_2,lVar1);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < aiStackX_8[0]);
    piStack_60 = aiStackX_8;
    puStack_50 = &UNK_180380050;
    puStack_48 = &UNK_180380040;
    uStack_68 = (int32_t)param_1;
    uStack_64 = (int32_t)((ulonglong)param_1 >> 0x20);
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    FUN_18005c650(&piStack_60);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037caf0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18037caf0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lStackX_10;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int32_t uVar12;
  
  uVar9 = 0xfffffffffffffffe;
  puVar10 = (uint64_t *)0x0;
  puVar5 = (uint64_t *)0x0;
  puVar11 = (uint64_t *)0x0;
  uVar12 = 3;
  iVar7 = 0;
  puVar4 = (uint64_t *)0x0;
  puVar3 = (uint64_t *)0x0;
  if (0 < *(int *)*param_1) {
    lStackX_10 = 0;
    puVar6 = puVar3;
    puVar4 = (uint64_t *)0x0;
    do {
      puVar1 = *(uint64_t **)(lStackX_10 + *(longlong *)(param_1[1] + 0x20b0));
      if ((*(int *)*puVar1 == 1) && (*(int *)puVar1[1] == 1)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar1);
      }
      if (puVar4 < puVar5) {
        *puVar4 = puVar1;
        puVar3 = puVar6;
      }
      else {
        lVar8 = (longlong)puVar4 - (longlong)puVar6 >> 3;
        if (lVar8 == 0) {
          lVar8 = 1;
LAB_18037cbba:
          puVar3 = (uint64_t *)
                   FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,3,param_4,uVar9,puVar10,puVar4,puVar11,
                                 uVar12);
        }
        else {
          lVar8 = lVar8 * 2;
          if (lVar8 != 0) goto LAB_18037cbba;
          puVar3 = (uint64_t *)0x0;
        }
        if (puVar6 != puVar4) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar6,(longlong)puVar4 - (longlong)puVar6);
        }
        *puVar3 = puVar1;
        if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar6);
        }
        puVar5 = puVar3 + lVar8;
        puVar10 = puVar3;
        puVar11 = puVar5;
        puVar4 = puVar3;
      }
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + 1;
      lStackX_10 = lStackX_10 + 8;
      puVar6 = puVar3;
    } while (iVar7 < *(int *)*param_1);
  }
  lVar8 = param_1[1];
  lVar2 = *(longlong *)(lVar8 + 0x20b0);
  *(longlong *)(lVar8 + 0x20b0) = (longlong)puVar3;
  *(uint64_t **)(lVar8 + 0x20b8) = puVar4;
  *(uint64_t **)(lVar8 + 0x20c0) = puVar5;
  *(int32_t *)(lVar8 + 0x20c8) = 3;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037ccb0(longlong param_1,uint64_t *param_2)
void FUN_18037ccb0(longlong param_1,uint64_t *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  longlong **pplVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  int iStackX_18;
  int iStackX_20;
  longlong lStack_f8;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  uint uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  int32_t uStack_a0;
  int32_t uStack_9c;
  longlong *plStack_98;
  uint64_t *puStack_90;
  longlong *plStack_88;
  uint64_t *puStack_80;
  int aiStack_78 [2];
  uint64_t uStack_70;
  uint64_t uStack_68;
  longlong *plStack_60;
  int8_t auStack_58 [32];
  
  uStack_68 = 0xfffffffffffffffe;
  plStack_b0 = (longlong *)
               (((longlong)*(int *)(*(longlong *)(param_1 + 0x2148) + 0x3054) + 0x10b) * 0x20 +
               param_1);
  lStack_b8 = (longlong)(int)(plStack_b0[1] - *plStack_b0 >> 3);
  if (0 < lStack_b8) {
    lStack_f8 = 0;
    do {
      plVar6 = *(longlong **)(*plStack_b0 + lStack_f8 * 8);
      iVar11 = (int)plVar6[6];
      if (((iVar11 == -1) ||
          (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x2148) + 0x60b80), lVar7 == 0)) ||
         (*(char *)(*(longlong *)(lVar7 + 0x80 + (longlong)iVar11 * 8) + 0x152) != '\0')) {
        lVar7 = *plVar6;
        iStackX_20 = 0;
        lStack_c0 = lVar7;
        if (0 < *(int *)(lVar7 + 0x54)) {
          do {
            iStackX_18 = 0;
            iVar11 = *(int *)(lVar7 + 0x58);
            if (0 < iVar11) {
              do {
                iVar14 = iVar11 * iStackX_20 + iStackX_18;
                lVar9 = *(longlong *)(lVar7 + 0x110);
                puVar8 = (uint64_t *)
                         (lVar9 + ((ulonglong)(longlong)iVar14 % (ulonglong)*(uint *)(lVar7 + 0x118)
                                  ) * 8);
                plVar6 = (longlong *)*puVar8;
                for (plVar1 = plVar6; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
                  if (iVar14 == (int)*plVar1) {
                    plStack_98 = plVar1;
                    puStack_90 = puVar8;
                    pplVar4 = &plStack_98;
                    lVar12 = *(longlong *)(lVar7 + 0x118);
                    goto LAB_18037cdee;
                  }
                }
                lVar12 = *(longlong *)(lVar7 + 0x118);
                puStack_80 = (uint64_t *)(lVar9 + lVar12 * 8);
                plStack_88 = (longlong *)*puStack_80;
                pplVar4 = &plStack_88;
LAB_18037cdee:
                plVar1 = *(longlong **)(lVar9 + lVar12 * 8);
                if (*pplVar4 != plVar1) {
                  iVar11 = iVar11 * iStackX_20 + iStackX_18;
                  for (; (plVar10 = plVar1, plVar6 != (longlong *)0x0 &&
                         (plVar10 = plVar6, iVar11 != (int)*plVar6)); plVar6 = (longlong *)plVar6[2]
                      ) {
                  }
                  if (plVar10 == plVar1) {
                    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,
                                          CONCAT71((int7)((ulonglong)lVar9 >> 8),3));
                    uStack_70 = FUN_180372430(uVar5,*(uint64_t *)(lVar7 + 0x68));
                    aiStack_78[0] = iVar11;
                    plVar6 = (longlong *)FUN_18037f020(lVar7 + 0x108,auStack_58,aiStack_78);
                    plVar10 = (longlong *)*plVar6;
                    uStack_a0 = (int32_t)plVar6[1];
                    uStack_9c = *(int32_t *)((longlong)plVar6 + 0xc);
                    plStack_a8 = plVar10;
                  }
                  lVar12 = plVar10[1] + 0x118;
                  lVar9 = *(longlong *)(plVar10[1] + 0x120);
                  lStack_c8 = lVar12;
                  if (lVar9 != lVar12) {
                    plStack_60 = &lStack_e8;
                    do {
                      lVar7 = *(longlong *)(lVar9 + 0x20);
                      lVar13 = *(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) >> 5;
                      uStack_d0 = *(uint *)(lVar9 + 0x40);
                      if (lVar13 == 0) {
                        lStack_e8 = 0;
                      }
                      else {
                        lStack_e8 = FUN_18062b420(_DAT_180c8ed18,lVar13 << 5,uStack_d0 & 0xff);
                      }
                      lStack_d8 = lVar13 * 0x20 + lStack_e8;
                      lVar13 = *(longlong *)(lVar9 + 0x28);
                      lStack_e0 = lStack_e8;
                      if (lVar13 != *(longlong *)(lVar9 + 0x30)) {
                    // WARNING: Subroutine does not return
                        memmove(lStack_e8,lVar13,*(longlong *)(lVar9 + 0x30) - lVar13);
                      }
                      plVar6 = *(longlong **)(lVar7 + 0x38);
                      if (*(longlong *)(lVar7 + 0x40) - (longlong)plVar6 >> 4 != 0) {
                        uVar2 = *(ulonglong *)(*plVar6 + 0x1b8);
                        lVar7 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_2 + 5));
                        *(ulonglong *)(lVar7 + 0x20) = uVar2;
                        bVar15 = true;
                        puVar8 = (uint64_t *)param_2[2];
                        puVar3 = param_2;
                        while (puVar8 != (uint64_t *)0x0) {
                          bVar15 = uVar2 < (ulonglong)puVar8[4];
                          puVar3 = puVar8;
                          if (bVar15) {
                            puVar8 = (uint64_t *)puVar8[1];
                          }
                          else {
                            puVar8 = (uint64_t *)*puVar8;
                          }
                        }
                        puVar8 = puVar3;
                        if (bVar15) {
                          if (puVar3 == (uint64_t *)param_2[1]) goto LAB_18037cfde;
                          puVar8 = (uint64_t *)func_0x00018066b9a0(puVar3);
                        }
                        if (*(ulonglong *)(lVar7 + 0x20) <= (ulonglong)puVar8[4]) {
                    // WARNING: Subroutine does not return
                          FUN_18064e900(lVar7);
                        }
LAB_18037cfde:
                        if ((puVar3 == param_2) ||
                           (*(ulonglong *)(lVar7 + 0x20) < (ulonglong)puVar3[4])) {
                          uVar5 = 0;
                        }
                        else {
                          uVar5 = 1;
                        }
                    // WARNING: Subroutine does not return
                        FUN_18066bdc0(lVar7,puVar3,param_2,uVar5);
                      }
                      plStack_a8 = &lStack_e8;
                      if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      lVar9 = func_0x00018066bd70(lVar9);
                      lVar7 = lStack_c0;
                    } while (lVar9 != lVar12);
                  }
                }
                iStackX_18 = iStackX_18 + 1;
                iVar11 = *(int *)(lVar7 + 0x58);
              } while (iStackX_18 < iVar11);
            }
            iStackX_20 = iStackX_20 + 1;
          } while (iStackX_20 < *(int *)(lVar7 + 0x54));
        }
      }
      lStack_f8 = lStack_f8 + 1;
    } while (lStack_f8 < lStack_b8);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18037d0d0(uint64_t param_1)

{
  char cVar1;
  uint64_t ******ppppppuVar2;
  uint64_t *****pppppuVar3;
  uint64_t ***pppuVar4;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t *******pppppppuVar7;
  uint uVar8;
  uint64_t *******pppppppuVar9;
  uint64_t *******pppppppuVar10;
  longlong **pplVar11;
  longlong *plVar12;
  uint64_t **ppuVar13;
  int iVar14;
  uint64_t **ppuVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  void *puVar19;
  uint64_t ******ppppppuVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  uint64_t *******pppppppuStack_280;
  uint64_t *******pppppppuStack_278;
  uint64_t *******pppppppuStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  int32_t uStack_258;
  void *puStack_250;
  longlong lStack_248;
  int32_t uStack_240;
  uint64_t uStack_238;
  float fStack_230;
  void *puStack_228;
  longlong lStack_220;
  int32_t uStack_218;
  ulonglong uStack_210;
  void *puStack_208;
  longlong lStack_200;
  int32_t uStack_1f8;
  ulonglong uStack_1f0;
  longlong lStack_1e8;
  uint64_t *puStack_1e0;
  uint64_t *puStack_1d8;
  int32_t uStack_1d0;
  uint64_t *******pppppppuStack_1c8;
  uint64_t *******pppppppuStack_1c0;
  uint64_t *puStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  int32_t uStack_1a0;
  void *puStack_198;
  uint64_t uStack_190;
  int32_t uStack_188;
  ulonglong uStack_180;
  uint64_t *apuStack_178 [2];
  code *pcStack_168;
  void *puStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  uint64_t **ppuStack_130;
  longlong *plStack_128;
  uint64_t **ppuStack_120;
  uint64_t uStack_118;
  
  uStack_118 = 0xfffffffffffffffe;
  uVar16 = 0;
  uStack_1a0 = 3;
  pppppppuStack_1c8 = &pppppppuStack_1c8;
  pppppppuStack_1c0 = &pppppppuStack_1c8;
  puStack_1b8 = (uint64_t *)0x0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  FUN_18037ccb0(param_1,&pppppppuStack_1c8);
  uStack_258 = 3;
  pppppppuStack_280 = &pppppppuStack_280;
  pppppppuStack_278 = &pppppppuStack_280;
  pppppppuStack_270 = (uint64_t *******)0x0;
  uStack_268 = 0;
  uStack_260 = 0;
  pppppppuVar10 = pppppppuStack_1c0;
  if ((uint64_t ********)pppppppuStack_1c0 != &pppppppuStack_1c8) {
    do {
      ppppppuVar20 = pppppppuVar10[4];
      if ((((_DAT_180c8a9d0 != 0) && (*(char *)(_DAT_180c8a9d0 + 0x1f1) != '\0')) ||
          (*(char *)(ppppppuVar20 + 0x3b) != '\0')) ||
         ((*(int *)(ppppppuVar20 + 0x3a) == -1 || (*(int *)(ppppppuVar20 + 0x3a) == 0)))) {
        ppppppuVar20 = ppppppuVar20 + 0x17;
        lVar21 = 0x10;
        do {
          ppppppuVar2 = (uint64_t ******)*ppppppuVar20;
          bVar23 = true;
          pppppppuVar7 = &pppppppuStack_280;
          pppppppuVar9 = pppppppuStack_270;
          while (pppppppuVar9 != (uint64_t *******)0x0) {
            bVar23 = ppppppuVar2 < pppppppuVar9[4];
            pppppppuVar7 = pppppppuVar9;
            if (bVar23) {
              pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
            }
            else {
              pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
            }
          }
          pppppppuVar9 = pppppppuVar7;
          if (bVar23) {
            if (pppppppuVar7 == pppppppuStack_278) goto LAB_18037d26b;
            pppppppuVar9 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar7);
          }
          if (pppppppuVar9[4] < ppppppuVar2) {
LAB_18037d26b:
            lVar21 = FUN_18062b420(_DAT_180c8ed18,0x28,(int8_t)uStack_258);
            *(uint64_t *******)(lVar21 + 0x20) = ppppppuVar2;
            if (((uint64_t ********)pppppppuVar7 == &pppppppuStack_280) ||
               (uVar22 = 1, ppppppuVar2 < pppppppuVar7[4])) {
              uVar22 = uVar16;
            }
                    // WARNING: Subroutine does not return
            FUN_18066bdc0(lVar21,pppppppuVar7,&pppppppuStack_280,uVar22);
          }
          ppppppuVar20 = ppppppuVar20 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      pppppppuVar10 = (uint64_t *******)func_0x00018066bd70(pppppppuVar10);
    } while ((uint64_t ********)pppppppuVar10 != &pppppppuStack_1c8);
  }
  lStack_1e8 = 0;
  puStack_1e0 = (uint64_t *)0x0;
  puStack_1d8 = (uint64_t *)0x0;
  uStack_1d0 = 3;
  pppppppuVar10 = pppppppuStack_278;
  uVar22 = uVar16;
  if ((uint64_t ********)pppppppuStack_278 != &pppppppuStack_280) {
    do {
      if (pppppppuVar10[4] != (uint64_t ******)0x0) {
        pppppuVar3 = pppppppuVar10[4][0x15];
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        lStack_140 = 0;
        pcStack_168 = (code *)&UNK_180380000;
        puStack_160 = &UNK_18037fff0;
        apuStack_178[0] = &uStack_158;
        (*(code *)(*pppppuVar3[0x11])[0xc])
                  (pppppuVar3[0x11],&system_data_1028,(longlong)pppppuVar3 + 0xc,0,apuStack_178);
        if (pcStack_168 != (code *)0x0) {
          (*pcStack_168)(apuStack_178,0,0);
        }
        puStack_228 = &UNK_180a3c3e0;
        uStack_210 = 0;
        lStack_220 = 0;
        uStack_218 = 0;
        puStack_198 = &UNK_180a3c3e0;
        uStack_180 = 0;
        uStack_190 = 0;
        uStack_188 = 0;
        iVar14 = -1;
        for (uVar8 = (uint)lStack_140; uVar8 != 0; uVar8 = uVar8 >> 1) {
          iVar14 = iVar14 + 1;
        }
        uVar8 = 0x400;
        iVar18 = -1;
        do {
          iVar18 = iVar18 + 1;
          uVar8 = uVar8 >> 1;
        } while (uVar8 != 0);
        cVar1 = (&UNK_1809fe050)[iVar14 / iVar18];
        fVar24 = (float)powf(0x44800000);
        fVar25 = (float)lStack_140;
        if (lStack_140 < 0) {
          fVar25 = fVar25 + 1.8446744e+19;
        }
        FUN_180628040(&puStack_228,&UNK_1809fe058,(double)(fVar24 * fVar25),(int)cVar1);
        pppuVar4 = pppppuVar3[0x11][1];
        ppuVar13 = pppuVar4[0x10];
        for (plVar12 = ppuVar13[(*(ulonglong *)((longlong)pppppuVar3 + 0x14) ^
                                *(ulonglong *)((longlong)pppppuVar3 + 0xc)) %
                                (ulonglong)*(uint *)(pppuVar4 + 0x11)]; plVar12 != (longlong *)0x0;
            plVar12 = (longlong *)plVar12[3]) {
          if ((*(longlong *)((longlong)pppppuVar3 + 0xc) == *plVar12) &&
             (*(longlong *)((longlong)pppppuVar3 + 0x14) == plVar12[1])) {
            if (plVar12 != (longlong *)0x0) {
              plStack_138 = plVar12;
              ppuStack_130 = ppuVar13 +
                             (*(ulonglong *)((longlong)pppppuVar3 + 0x14) ^
                             *(ulonglong *)((longlong)pppppuVar3 + 0xc)) %
                             (ulonglong)*(uint *)(pppuVar4 + 0x11);
              pplVar11 = &plStack_138;
              ppuVar15 = pppuVar4[0x11];
              goto LAB_18037d51b;
            }
            break;
          }
        }
        ppuVar15 = pppuVar4[0x11];
        plStack_128 = ppuVar13[(longlong)ppuVar15];
        ppuStack_120 = ppuVar13 + (longlong)ppuVar15;
        pplVar11 = &plStack_128;
LAB_18037d51b:
        plVar12 = *pplVar11;
        if (plVar12 != ppuVar13[(longlong)ppuVar15]) {
          iVar14 = (int)plVar12[2];
          iVar18 = *(int *)((longlong)plVar12 + 0x14) + iVar14;
          if (iVar14 < iVar18) {
            do {
              ppuVar13 = pppuVar4[0x15] + (longlong)iVar14 * 0x12;
              if ((((ppuVar13[4] == *(uint64_t **)((longlong)pppppuVar3 + 0xc)) &&
                   (ppuVar13[5] == *(uint64_t **)((longlong)pppppuVar3 + 0x14))) &&
                  (*ppuVar13 == (uint64_t *)0x4b2d79e470ee4e2c)) &&
                 (ppuVar13[1] == (uint64_t *)0x9c552acd3ed5548d)) {
                puVar6 = ppuVar13[7];
                uVar22 = uVar22 + (longlong)puVar6;
                FUN_180627ae0(&puStack_250,pppppuVar3 + 0xd);
                fStack_230 = (float)(longlong)puVar6;
                if ((longlong)puVar6 < 0) {
                  fStack_230 = fStack_230 + 1.8446744e+19;
                }
                fStack_230 = fStack_230 * 9.536743e-07;
                if (puStack_1e0 < puStack_1d8) {
                  *puStack_1e0 = &UNK_18098bcb0;
                  puStack_1e0[1] = 0;
                  *(int32_t *)(puStack_1e0 + 2) = 0;
                  *puStack_1e0 = &UNK_180a3c3e0;
                  puStack_1e0[3] = 0;
                  puStack_1e0[1] = 0;
                  *(int32_t *)(puStack_1e0 + 2) = 0;
                  *(int32_t *)(puStack_1e0 + 2) = uStack_240;
                  puStack_1e0[1] = lStack_248;
                  *(int32_t *)((longlong)puStack_1e0 + 0x1c) = uStack_238._4_4_;
                  *(int32_t *)(puStack_1e0 + 3) = (int32_t)uStack_238;
                  uStack_240 = 0;
                  lStack_248 = 0;
                  uStack_238 = 0;
                  *(float *)(puStack_1e0 + 4) = fStack_230;
                  puStack_1e0 = puStack_1e0 + 5;
                }
                else {
                  FUN_1800584e0(&lStack_1e8,&puStack_250);
                }
                puStack_250 = &UNK_180a3c3e0;
                if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                lStack_248 = 0;
                uStack_238 = uStack_238 & 0xffffffff00000000;
                puStack_250 = &UNK_18098bcb0;
                break;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar18);
          }
        }
        uStack_190 = 0;
        uStack_180 = uStack_180 & 0xffffffff00000000;
        puStack_198 = &UNK_18098bcb0;
        puStack_228 = &UNK_180a3c3e0;
        if (lStack_220 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_220 = 0;
        uStack_210 = uStack_210 & 0xffffffff00000000;
        puStack_228 = &UNK_18098bcb0;
      }
      pppppppuVar10 = (uint64_t *******)func_0x00018066bd70(pppppppuVar10);
    } while ((uint64_t ********)pppppppuVar10 != &pppppppuStack_280);
  }
  FUN_18037f790(lStack_1e8,puStack_1e0,&UNK_18037d8a0);
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uVar17 = uVar16;
  if (((longlong)puStack_1e0 - lStack_1e8) / 0x28 != 0) {
    do {
      puVar5 = *(void **)(lStack_1e8 + 8 + uVar16);
      puVar19 = &system_buffer_ptr;
      if (puVar5 != (void *)0x0) {
        puVar19 = puVar5;
      }
      FUN_180628040(&puStack_208,&UNK_1809fc9a4,puVar19,
                    (double)*(float *)(lStack_1e8 + 0x20 + uVar16));
      uVar8 = (int)uVar17 + 1;
      uVar16 = uVar16 + 0x28;
      uVar17 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(((longlong)puStack_1e0 - lStack_1e8) / 0x28));
  }
  puStack_208 = &UNK_180a3c3e0;
  if (lStack_200 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_200 = 0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  FUN_180048980(&lStack_1e8);
  puVar6 = puStack_1b8;
  pppppppuVar10 = pppppppuStack_270;
  if (pppppppuStack_270 != (uint64_t *******)0x0) {
    FUN_18004b790(&pppppppuStack_280,*pppppppuStack_270);
                    // WARNING: Subroutine does not return
    FUN_18064e900(pppppppuVar10);
  }
  if (puStack_1b8 != (uint64_t *)0x0) {
    FUN_18004b790(&pppppppuStack_1c8,*puStack_1b8);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  return uVar22;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



