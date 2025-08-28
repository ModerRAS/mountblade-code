#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part254.c - 13 个函数

// 函数: void FUN_18021dbb0(void)
void FUN_18021dbb0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_180191ea0();
  FUN_1800fc1c0();
  lVar1 = _DAT_180c86950;
  if (_DAT_180c86950 != 0) {
    lVar2 = *(longlong *)(_DAT_180c86950 + 0x1868);
    iVar3 = 0;
    if (*(longlong *)(_DAT_180c86950 + 0x1870) - lVar2 >> 3 != 0) {
      lVar4 = 0;
      do {
        if ((void *)**(uint64_t **)(lVar4 + lVar2) != &UNK_180a16c98) {
          (**(code **)((void *)**(uint64_t **)(lVar4 + lVar2) + 0x110))();
        }
        lVar2 = *(longlong *)(lVar1 + 0x1868);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while ((ulonglong)(longlong)iVar3 < (ulonglong)(*(longlong *)(lVar1 + 0x1870) - lVar2 >> 3))
      ;
    }
  }
  return;
}





// 函数: void FUN_18021dbdd(uint64_t param_1,longlong param_2)
void FUN_18021dbdd(uint64_t param_1,longlong param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (in_RAX >> 3 != 0) {
    lVar2 = 0;
    do {
      if ((void *)**(uint64_t **)(lVar2 + param_2) != &UNK_180a16c98) {
        (**(code **)((void *)**(uint64_t **)(lVar2 + param_2) + 0x110))();
      }
      param_2 = *(longlong *)(unaff_RBX + 0x1868);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1870) - param_2 >> 3));
  }
  return;
}





// 函数: void FUN_18021dbed(uint64_t param_1,longlong param_2)
void FUN_18021dbed(uint64_t param_1,longlong param_2)

{
  longlong unaff_RBX;
  uint unaff_ESI;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)unaff_ESI;
  do {
    if ((void *)**(uint64_t **)(uVar1 + param_2) != &UNK_180a16c98) {
      (**(code **)((void *)**(uint64_t **)(uVar1 + param_2) + 0x110))();
    }
    param_2 = *(longlong *)(unaff_RBX + 0x1868);
    unaff_ESI = unaff_ESI + 1;
    uVar1 = uVar1 + 8;
  } while ((ulonglong)(longlong)(int)unaff_ESI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1870) - param_2 >> 3));
  return;
}





// 函数: void FUN_18021dc39(void)
void FUN_18021dc39(void)

{
  return;
}





// 函数: void FUN_18021dc3e(void)
void FUN_18021dc3e(void)

{
  return;
}





// 函数: void FUN_18021dc44(void)
void FUN_18021dc44(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  
  do {
    (**(code **)(in_RAX + 0x110))();
    do {
      unaff_ESI = unaff_ESI + 1;
      unaff_RDI = unaff_RDI + 8;
      if ((ulonglong)(*(longlong *)(unaff_RBX + 0x1870) - *(longlong *)(unaff_RBX + 0x1868) >> 3) <=
          (ulonglong)(longlong)unaff_ESI) {
        return;
      }
      in_RAX = **(longlong **)(unaff_RDI + *(longlong *)(unaff_RBX + 0x1868));
    } while (in_RAX == unaff_RBP);
  } while( true );
}





// 函数: void FUN_18021dc50(void)
void FUN_18021dc50(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Removing unreachable block (ram,0x00018021e52c)
// WARNING: Removing unreachable block (ram,0x00018021e531)
// WARNING: Removing unreachable block (ram,0x00018021e536)
// WARNING: Removing unreachable block (ram,0x00018021e539)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18021e0a0(void)
void FUN_18021e0a0(void)

{
  char cVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  char cVar13;
  longlong lVar14;
  int32_t *puVar15;
  char *pcVar16;
  int8_t *puVar17;
  uint uVar18;
  void *puVar19;
  int8_t *puVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  int *piVar28;
  int32_t uVar29;
  int8_t auStack_348 [32];
  longlong **pplStack_328;
  int32_t **ppuStack_320;
  int32_t **ppuStack_318;
  int iStack_310;
  int32_t uStack_30c;
  void *puStack_308;
  int8_t *puStack_300;
  int32_t uStack_2f8;
  ulonglong uStack_2f0;
  void *puStack_2e8;
  char *pcStack_2e0;
  uint uStack_2d8;
  ulonglong uStack_2d0;
  void *puStack_2c8;
  int32_t *puStack_2c0;
  int32_t uStack_2b8;
  ulonglong uStack_2b0;
  void *puStack_2a8;
  longlong lStack_2a0;
  int32_t uStack_290;
  ulonglong uStack_288;
  longlong lStack_280;
  ulonglong uStack_278;
  longlong lStack_270;
  longlong lStack_268;
  uint64_t uStack_260;
  int32_t uStack_258;
  uint64_t *puStack_250;
  uint64_t *puStack_248;
  uint64_t uStack_240;
  int32_t uStack_238;
  longlong *plStack_230;
  longlong lStack_228;
  uint64_t uStack_220;
  int32_t uStack_218;
  longlong *plStack_210;
  longlong lStack_208;
  uint64_t uStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  int32_t *puStack_1e0;
  int32_t *apuStack_1d8 [2];
  code *pcStack_1c8;
  code *pcStack_1c0;
  int32_t *apuStack_1b8 [2];
  void *puStack_1a8;
  code *pcStack_1a0;
  uint64_t uStack_198;
  void *apuStack_190 [5];
  int32_t auStack_168 [2];
  longlong alStack_160 [32];
  int8_t auStack_60 [40];
  ulonglong uStack_38;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  bVar6 = false;
  uStack_30c = 0;
  if (_DAT_180c868e8 == 0) {
    _DAT_180c868e8 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
    *(int32_t *)(_DAT_180c868e8 + 0x19) = 0;
    *(int16_t *)(_DAT_180c868e8 + 0x1d) = 0;
    *(int8_t *)(_DAT_180c868e8 + 0x1f) = 0;
    *(int32_t *)(_DAT_180c868e8 + 0x28) = 3;
    *(ulonglong *)_DAT_180c868e8 = _DAT_180c868e8;
    *(ulonglong *)(_DAT_180c868e8 + 8) = _DAT_180c868e8;
    *(uint64_t *)(_DAT_180c868e8 + 0x10) = 0;
    *(int8_t *)(_DAT_180c868e8 + 0x18) = 0;
    *(uint64_t *)(_DAT_180c868e8 + 0x20) = 0;
    ppuStack_318 = (int32_t **)_DAT_180c868e8;
    uStack_278 = _DAT_180c868e8;
  }
  FUN_18020cae0(_DAT_180c868e8);
  ppuStack_318 = (int32_t **)
                 (*(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >>
                 5);
  lStack_270 = 0;
  lStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 3;
  plStack_210 = (longlong *)0x0;
  lStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 3;
  plStack_230 = (longlong *)0x0;
  lStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 3;
  iStack_310 = 0;
  if (0 < (int)ppuStack_318) {
    uStack_288 = 0;
    lStack_280 = 0;
    do {
      lVar14 = lStack_280;
      iVar27 = iStack_310;
      iVar25 = 0;
      if ((iStack_310 < 0) ||
         (lVar24 = *(longlong *)(*_DAT_180c86870 + 0x888),
         (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar24 >> 5) <= uStack_288)) {
        lVar24 = FUN_180628ca0();
      }
      else {
        lVar24 = lVar24 + lStack_280;
      }
      FUN_180627e10(lVar24,&puStack_2a8,&UNK_180a12e68);
      cVar13 = FUN_180624a00(&puStack_2a8);
      if (cVar13 == '\0') {
        puStack_2a8 = &UNK_180a3c3e0;
        if (lStack_2a0 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        puStack_250 = (uint64_t *)0x0;
        puStack_248 = (uint64_t *)0x0;
        uStack_240 = 0;
        uStack_238 = 3;
        FUN_18062d0d0(&puStack_2a8,&puStack_250);
        uStack_278 = (longlong)puStack_248 - (longlong)puStack_250 >> 5;
        puVar3 = puStack_250;
        puVar4 = puStack_250;
        puVar5 = puStack_248;
        if (uStack_278 != 0) {
          uVar26 = 0;
          piVar28 = (int *)(puStack_250 + 2);
          do {
            puVar3 = puStack_250 + uVar26 * 4;
            lVar14 = FUN_180627490(apuStack_190,puVar3);
            uVar26 = 0;
            puStack_2e8 = &UNK_180a3c3e0;
            uStack_2d0 = 0;
            pcStack_2e0 = (char *)0x0;
            uStack_2d8 = 0;
            FUN_1806277c0(&puStack_2e8,*(int32_t *)(lVar14 + 0x10));
            pcVar10 = pcStack_2e0;
            if (0 < *(int *)(lVar14 + 0x10)) {
              puVar19 = &DAT_18098bc73;
              if (*(void **)(lVar14 + 8) != (void *)0x0) {
                puVar19 = *(void **)(lVar14 + 8);
              }
                    // WARNING: Subroutine does not return
              memcpy(pcStack_2e0,puVar19,(longlong)(*(int *)(lVar14 + 0x10) + 1));
            }
            if (*(longlong *)(lVar14 + 8) == 0) {
              uVar26 = (ulonglong)uStack_2d8;
            }
            else {
              uStack_2d8 = 0;
              if (pcStack_2e0 != (char *)0x0) {
                *pcStack_2e0 = '\0';
              }
            }
            apuStack_190[0] = &UNK_18098bcb0;
            iVar27 = (int)uVar26;
            pcVar16 = pcStack_2e0;
            if (iVar27 != 0) {
              do {
                if ((byte)(*pcVar16 + 0xbfU) < 0x1a) {
                  *pcVar16 = *pcVar16 + ' ';
                }
                uVar26 = uVar26 - 1;
                pcVar16 = pcVar16 + 1;
              } while (uVar26 != 0);
            }
            cVar13 = FUN_180624af0(puVar3);
            puVar17 = (int8_t *)0x0;
            puVar15 = puStack_2c0;
            if (cVar13 == '\0') {
LAB_18021e424:
              bVar2 = false;
            }
            else {
              puStack_2c8 = &UNK_180a3c3e0;
              uStack_2b0 = 0;
              puStack_2c0 = (int32_t *)0x0;
              uStack_2b8 = 0;
              puVar15 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
              *(int8_t *)puVar15 = 0;
              puStack_2c0 = puVar15;
              uVar29 = FUN_18064e990(puVar15);
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar29);
              *puVar15 = 0x6c6d782e;
              *(int8_t *)(puVar15 + 1) = 0;
              uStack_2b8 = 4;
              bVar6 = true;
              uStack_30c = 1;
              if (iVar27 != 4) goto LAB_18021e424;
              pcVar16 = pcVar10;
              do {
                cVar13 = *pcVar16;
                cVar1 = pcVar16[(longlong)puVar15 - (longlong)pcVar10];
                if (cVar13 != cVar1) break;
                pcVar16 = pcVar16 + 1;
              } while (cVar1 != '\0');
              if (cVar13 != cVar1) goto LAB_18021e424;
              bVar2 = true;
            }
            if (bVar6) {
              bVar6 = false;
              uStack_30c = 0;
              puStack_2c8 = &UNK_180a3c3e0;
              if (puVar15 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(puVar15);
              }
              puStack_2c0 = (int32_t *)0x0;
              uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
              puStack_2c8 = &UNK_18098bcb0;
            }
            if (bVar2) {
              puStack_308 = &UNK_180a3c3e0;
              uStack_2f0 = 0;
              puStack_300 = (int8_t *)0x0;
              uStack_2f8 = 0;
              if (*piVar28 != 0) {
                iVar27 = *piVar28 + 1;
                if (iVar27 < 0x10) {
                  iVar27 = 0x10;
                }
                puVar17 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar27,0x13);
                *puVar17 = 0;
                puStack_300 = puVar17;
                uVar29 = FUN_18064e990(puVar17);
                uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar29);
                if (*piVar28 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puVar17,*(uint64_t *)(piVar28 + -2),*piVar28 + 1);
                }
              }
              if (*(longlong *)(piVar28 + -2) != 0) {
                uStack_2f8 = 0;
                if (puVar17 != (int8_t *)0x0) {
                  *puVar17 = 0;
                }
                uStack_2f0 = uStack_2f0 & 0xffffffff;
              }
              puVar20 = &DAT_18098bc73;
              if (puVar17 != (int8_t *)0x0) {
                puVar20 = puVar17;
              }
              pplStack_328 = &plStack_230;
              FUN_18020a890(0,puVar20,&lStack_270,&plStack_210);
              puStack_308 = &UNK_180a3c3e0;
              if (puVar17 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(puVar17);
              }
              puStack_300 = (int8_t *)0x0;
              uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
              puStack_308 = &UNK_18098bcb0;
            }
            puStack_2e8 = &UNK_180a3c3e0;
            if (pcVar10 != (char *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pcVar10);
            }
            pcStack_2e0 = (char *)0x0;
            uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
            puStack_2e8 = &UNK_18098bcb0;
            iVar25 = iVar25 + 1;
            piVar28 = piVar28 + 8;
            uVar26 = (ulonglong)iVar25;
            puVar3 = puStack_250;
            puVar4 = puStack_250;
            puVar5 = puStack_248;
            iVar27 = iStack_310;
            lVar14 = lStack_280;
          } while (uVar26 < uStack_278);
        }
        for (; puVar12 = puStack_248, puVar11 = puStack_250, puVar3 != puStack_248;
            puVar3 = puVar3 + 4) {
          puStack_250 = puVar4;
          puStack_248 = puVar5;
          (**(code **)*puVar3)(puVar3,0);
          puVar4 = puStack_250;
          puVar5 = puStack_248;
          puStack_248 = puVar12;
          puStack_250 = puVar11;
        }
        if (puStack_250 != (uint64_t *)0x0) {
          puStack_250 = puVar4;
          puStack_248 = puVar5;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        puStack_2a8 = &UNK_180a3c3e0;
        puStack_250 = puVar4;
        puStack_248 = puVar5;
        if (lStack_2a0 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      uStack_290 = 0;
      lStack_2a0 = 0;
      puStack_2a8 = &UNK_18098bcb0;
      iStack_310 = iVar27 + 1;
      uStack_288 = uStack_288 + 1;
      lStack_280 = lVar14 + 0x20;
    } while (iStack_310 < (int)ppuStack_318);
  }
  uVar21 = 0;
  LOCK();
  auStack_168[0] = 0;
  UNLOCK();
  uVar18 = uVar21;
  do {
    alStack_160[(int)uVar18] = 0;
    LOCK();
    auStack_60[(int)uVar18] = 1;
    UNLOCK();
    uVar18 = uVar18 + 1;
  } while (uVar18 < 0x20);
  ppuStack_318 = apuStack_1d8;
  uStack_1f0 = &lStack_270;
  uStack_1e8 = _DAT_180c868e8;
  puStack_1e0 = auStack_168;
  pcStack_1c8 = FUN_18020dd10;
  pcStack_1c0 = FUN_18020dc20;
  apuStack_1d8[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
  *apuStack_1d8[0] = (int32_t)uStack_1f0;
  apuStack_1d8[0][1] = uStack_1f0._4_4_;
  apuStack_1d8[0][2] = (int32_t)uStack_1e8;
  apuStack_1d8[0][3] = uStack_1e8._4_4_;
  *(int32_t **)(apuStack_1d8[0] + 4) = puStack_1e0;
  ppuStack_320 = apuStack_1d8;
  pplStack_328 = (longlong **)0xffffffffffffffff;
  uVar29 = FUN_18015b810(ppuStack_320,0,lStack_268 - lStack_270 >> 5,0x10);
  ppuStack_318 = apuStack_1b8;
  puStack_1a8 = &UNK_18020dbe0;
  pcStack_1a0 = FUN_18020dae0;
  apuStack_1b8[0] = auStack_168;
  ppuStack_320 = apuStack_1b8;
  pplStack_328 = (longlong **)0xffffffffffffffff;
  FUN_18015b810(uVar29,0,auStack_168[0],0x10);
  plVar8 = plStack_210;
  plVar7 = plStack_230;
  plVar23 = alStack_160;
  uVar18 = uVar21;
  do {
    if (*plVar23 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_160[(int)uVar18] = 0;
    uVar18 = uVar18 + 1;
    plVar23 = plVar23 + 1;
  } while (uVar18 < 0x20);
  uVar26 = lStack_208 - (longlong)plStack_210 >> 3;
  plVar23 = plStack_210;
  uVar18 = uVar21;
  if (uVar26 != 0) {
    do {
      lVar14 = *plVar23;
      if (lVar14 != 0) {
        ppuStack_318 = (int32_t **)lVar14;
        FUN_180057010(lVar14 + 0x60);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar14);
      }
      *plVar23 = 0;
      uVar18 = uVar18 + 1;
      ppuStack_318 = (int32_t **)0x0;
      plVar23 = plVar23 + 1;
    } while ((ulonglong)(longlong)(int)uVar18 < uVar26);
  }
  uVar26 = lStack_228 - (longlong)plStack_230 >> 3;
  plVar23 = plStack_230;
  if (uVar26 != 0) {
    do {
      ppuStack_318 = (int32_t **)*plVar23;
      if (ppuStack_318 != (int32_t **)0x0) {
        if (*ppuStack_318 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppuStack_318);
      }
      *plVar23 = 0;
      uVar21 = uVar21 + 1;
      ppuStack_318 = (int32_t **)0x0;
      plVar23 = plVar23 + 1;
    } while ((ulonglong)(longlong)(int)uVar21 < uVar26);
  }
  FUN_18020d4c0();
  uVar9 = _DAT_180c868e8;
  uVar26 = *(ulonglong *)(_DAT_180c868e8 + 8);
  lVar14 = lStack_268;
  while (lStack_268 = lVar14, uVar26 != uVar9) {
    iVar27 = 0;
    lVar14 = *(longlong *)(uVar26 + 0x28);
    if (*(longlong *)(uVar26 + 0x30) - lVar14 >> 3 != 0) {
      lVar24 = 0;
      do {
        lVar14 = *(longlong *)(lVar24 + lVar14);
        iVar25 = 0;
        if (*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 3 != 0) {
          lVar22 = 0;
          do {
            FUN_18020d160(*(uint64_t *)(lVar22 + *(longlong *)(lVar14 + 0x28)));
            iVar25 = iVar25 + 1;
            lVar22 = lVar22 + 8;
          } while ((ulonglong)(longlong)iVar25 <
                   (ulonglong)(*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 3));
        }
        iVar27 = iVar27 + 1;
        lVar24 = lVar24 + 8;
        lVar14 = *(longlong *)(uVar26 + 0x28);
      } while ((ulonglong)(longlong)iVar27 < (ulonglong)(*(longlong *)(uVar26 + 0x30) - lVar14 >> 3)
              );
    }
    uVar26 = func_0x00018066bd70(uVar26);
    lVar14 = lStack_268;
    plVar7 = plStack_230;
    plVar8 = plStack_210;
  }
  if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar7);
  }
  lVar24 = lStack_270;
  if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar8);
  }
  for (; ppuStack_318 = (int32_t **)lVar24, lVar24 != lVar14; lVar24 = lVar24 + 0x20) {
    if (*(longlong **)(lVar24 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar24 + 0x10) + 0x38))();
    }
  }
  if (lStack_270 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_348);
}





// 函数: void FUN_18021e9a0(longlong *param_1)
void FUN_18021e9a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18021e9c0(void)
void FUN_18021e9c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021f200(void)
void FUN_18021f200(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021f430(longlong *param_1)
void FUN_18021f430(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    if (*(longlong **)(lVar2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong *
FUN_18021f4e0(uint64_t *param_1,longlong *param_2,uint64_t param_3,ulonglong param_4,
             uint64_t param_5,int32_t param_6)

{
  int iVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bStack_50;
  longlong lStack_48;
  longlong lStack_40;
  int32_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uVar2 = FUN_180628ca0();
  FUN_180627ae0(&lStack_48,uVar2);
  if ((void *)*param_1 == &UNK_1809ff4e0) {
    lVar3 = (ulonglong)(*(char *)(param_1 + 1) != '\0') + 2;
  }
  else {
    lVar3 = (**(code **)((void *)*param_1 + 8))(param_1);
  }
  if (param_4 < 0x7e000001) {
    if (*(char *)(param_1 + 1) == '\0') {
      iVar1 = FUN_180641c80(param_3,param_5,param_4 & 0xffffffff,param_6);
    }
    else {
      iVar1 = FUN_1806424c0();
    }
    if (iVar1 != 0) {
      lVar4 = (longlong)iVar1;
    }
    else {
      (**(code **)(lStack_48 + 0x10))(&lStack_48,&UNK_180a12ed8);
      lVar4 = 0;
    }
    bStack_50 = iVar1 == 0;
    *param_2 = lVar3;
    param_2[1] = param_4;
    param_2[2] = lVar4;
    *(bool *)(param_2 + 3) = bStack_50;
    param_2[4] = (longlong)&UNK_18098bcb0;
    param_2[5] = 0;
    *(int32_t *)(param_2 + 6) = 0;
    param_2[4] = (longlong)&UNK_180a3c3e0;
    *(int32_t *)(param_2 + 6) = uStack_38;
    param_2[5] = lStack_40;
    *(int32_t *)((longlong)param_2 + 0x3c) = uStack_2c;
    *(int32_t *)(param_2 + 7) = uStack_30;
  }
  else {
    (**(code **)(lStack_48 + 0x10))(&lStack_48,&UNK_180a12ef0);
    *param_2 = lVar3;
    param_2[1] = param_4;
    param_2[2] = 0;
    *(int8_t *)(param_2 + 3) = 1;
    param_2[4] = (longlong)&UNK_18098bcb0;
    param_2[5] = 0;
    *(int32_t *)(param_2 + 6) = 0;
    param_2[4] = (longlong)&UNK_180a3c3e0;
    *(int32_t *)(param_2 + 6) = uStack_38;
    param_2[5] = lStack_40;
    *(int32_t *)((longlong)param_2 + 0x3c) = uStack_2c;
    *(int32_t *)(param_2 + 7) = uStack_30;
  }
  return param_2;
}



longlong *
FUN_18021f710(uint64_t *param_1,longlong *param_2,uint64_t param_3,ulonglong param_4,
             uint64_t param_5,int32_t param_6)

{
  int iVar1;
  uint64_t uVar2;
  longlong lVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int8_t *)(param_2 + 3) = 0;
  uVar2 = FUN_180628ca0();
  FUN_180627ae0(param_2 + 4,uVar2);
  uVar4 = 1;
  param_2[2] = param_4;
  if ((void *)*param_1 == &UNK_1809ff4e0) {
    lVar3 = (ulonglong)(*(char *)(param_1 + 1) != '\0') + 2;
  }
  else {
    lVar3 = (**(code **)((void *)*param_1 + 8))(param_1);
  }
  *param_2 = lVar3;
  iVar1 = FUN_180641cd0(param_3,param_5,param_4 & 0xffffffff,param_6,uVar4,uVar5);
  if (iVar1 < 0) {
    param_2[1] = 0;
    *(int8_t *)(param_2 + 3) = 1;
  }
  else {
    param_2[1] = (longlong)iVar1;
    *(int8_t *)(param_2 + 3) = 0;
  }
  return param_2;
}



uint64_t *
FUN_18021f7f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  *param_1 = &UNK_180a13650;
  _Mtx_init_in_situ(param_1 + 4,2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = 0x10;
  do {
    FUN_180226430();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1[0x38e] = 0;
  param_1[0x38f] = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  param_1[0x392] = 0;
  param_1[0x393] = 0;
  param_1[0x394] = 0;
  param_1[0x395] = 0;
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  param_1[0x398] = 0;
  param_1[0x399] = 0;
  param_1[0x39a] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  *(int32_t *)(param_1 + 0x3a7) = 3;
  param_1[0x3aa] = 0;
  *(int32_t *)(param_1 + 0x3a8) = 0;
  *(int32_t *)((longlong)param_1 + 0x1d5c) = 0;
  *(int16_t *)(param_1 + 0x3ac) = 0;
  *(int8_t *)((longlong)param_1 + 0x1d62) = 0;
  *(int32_t *)((longlong)param_1 + 0x1d64) = 0;
  *(int32_t *)(param_1 + 0x3a9) = 8;
  *(int8_t *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18021f910(longlong param_1)
void FUN_18021f910(longlong param_1)

{
  int32_t *puVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t *puVar5;
  longlong lVar6;
  int8_t auStack_158 [32];
  longlong *plStack_138;
  longlong *plStack_130;
  longlong **pplStack_128;
  uint64_t uStack_120;
  longlong *plStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [136];
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_44;
  int32_t uStack_40;
  uint64_t uStack_3c;
  int32_t uStack_30;
  ulonglong uStack_28;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  puVar5 = &uStack_68;
  lVar6 = 3;
  do {
    func_0x00018021fba0(puVar5);
    puVar5 = puVar5 + 5;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uStack_68 = 0xbf800000;
  uStack_64 = 0xbf800000;
  uStack_60 = 0;
  uStack_54 = 0x40400000;
  uStack_50 = 0xbf800000;
  uStack_4c = 0;
  uStack_40 = 0xbf800000;
  uStack_3c = 0x40400000;
  uStack_58 = _DAT_180bf661c;
  uStack_44 = _DAT_180bf661c;
  uStack_30 = _DAT_180bf661c;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
  plVar3 = (longlong *)FUN_1800842a0(uVar2);
  plStack_118 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  *(int32_t *)(plVar3 + 2) = 3;
  *(int16_t *)((longlong)plVar3 + 0x14) = 0x104;
  FUN_180255a60(plVar3);
  puVar5 = *(int32_t **)(plVar3[(longlong)*(int *)(param_1 + 0x788) + 3] + 0x10);
  puVar1 = *(int32_t **)(plVar3[(longlong)*(int *)(param_1 + 0x778) + 3] + 0x10);
  *puVar5 = 0xbf800000;
  puVar5[1] = 0xbf800000;
  puVar5[2] = 0;
  puVar5[3] = 0x40400000;
  puVar5[4] = 0xbf800000;
  puVar5[5] = 0;
  puVar5[6] = 0xbf800000;
  *(uint64_t *)(puVar5 + 7) = 0x40400000;
  *puVar1 = _DAT_180bf661c;
  puVar1[1] = _DAT_180bf661c;
  puVar1[2] = _DAT_180bf661c;
  plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  puStack_108 = &UNK_1809fcc28;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  uStack_f8 = 0x16;
  pplStack_128 = (longlong **)plVar4;
  strcpy_s(auStack_f0,0x80,&UNK_180a12f20);
  *plVar4 = (longlong)&UNK_180a21690;
  *plVar4 = (longlong)&UNK_180a21720;
  *(int32_t *)(plVar4 + 1) = 0;
  *plVar4 = (longlong)&UNK_180a00168;
  LOCK();
  *(int8_t *)(plVar4 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)((longlong)plVar4 + 0x14) = 0;
  UNLOCK();
  plVar4[3] = 0;
  plVar4[4] = 0;
  plStack_130 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_130 = *(longlong **)(param_1 + 0x1d50);
  *(longlong **)(param_1 + 0x1d50) = plVar4;
  if (plStack_130 != (longlong *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  puStack_108 = &UNK_18098bcb0;
  uVar2 = *(uint64_t *)(param_1 + 0x1d50);
  pplStack_128 = &plStack_138;
  plStack_138 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_180255880(uVar2,&plStack_138);
  (**(code **)(*plVar3 + 0x38))(plVar3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



