#include "TaleWorlds.Native.Split.h"

// 03_rendering_part037.c - 1 个函数

// 函数: void FUN_180288f30(longlong param_1,uint64_t param_2)
void FUN_180288f30(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  byte bVar2;
  void *puVar3;
  bool bVar4;
  uint64_t *******pppppppuVar5;
  int8_t uVar6;
  int iVar7;
  int32_t uVar8;
  uint uVar9;
  int8_t *puVar10;
  char *pcVar11;
  longlong lVar12;
  uint64_t *puVar13;
  uint64_t ******ppppppuVar14;
  byte *pbVar15;
  uint64_t *******pppppppuVar16;
  uint64_t *puVar17;
  char *pcVar18;
  int iVar19;
  uint64_t *puVar20;
  uint uVar21;
  uint64_t *puVar22;
  void *puVar23;
  uint64_t *******pppppppuVar24;
  uint64_t *******pppppppuVar25;
  uint *puVar26;
  longlong lVar27;
  uint64_t uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  char cVar32;
  int8_t auStack_288 [32];
  int8_t uStack_268;
  void *puStack_258;
  char *pcStack_250;
  uint uStack_248;
  uint64_t uStack_240;
  void *puStack_238;
  int8_t *puStack_230;
  uint uStack_228;
  uint64_t uStack_220;
  uint uStack_218;
  uint uStack_214;
  uint64_t *puStack_210;
  uint64_t *puStack_208;
  uint64_t *puStack_200;
  int32_t uStack_1f8;
  uint64_t *puStack_1f0;
  uint64_t *puStack_1e8;
  uint64_t *puStack_1e0;
  int32_t uStack_1d8;
  uint64_t *puStack_1d0;
  uint64_t *puStack_1c8;
  uint64_t *puStack_1c0;
  uint64_t *puStack_1b8;
  int32_t uStack_1b0;
  uint64_t *******pppppppuStack_1a8;
  uint64_t *******pppppppuStack_1a0;
  uint64_t *******pppppppuStack_198;
  uint64_t uStack_190;
  longlong lStack_188;
  int32_t uStack_180;
  int32_t uStack_178;
  void **ppuStack_170;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  ulonglong uStack_150;
  int8_t auStack_148 [32];
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  char *pcStack_e0;
  uint uStack_d8;
  char acStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  uVar29 = 0;
  uStack_178 = 0;
  lStack_128 = param_1;
  uStack_100 = param_2;
  uStack_f0 = param_2;
  if (*(void **)*_DAT_180c8ed08 == &UNK_18098bb88) {
    cVar32 = *(int *)(_DAT_180c8a9c8 + 0xe0) != 0;
  }
  else {
    cVar32 = (**(code **)(*(void **)*_DAT_180c8ed08 + 0x48))();
  }
  if (cVar32 == '\0') {
    uVar21 = timeGetTime();
  }
  else {
    uVar21 = 0xb061;
  }
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 3;
  uStack_214 = uVar21 ^ 0x41c64e6d;
  FUN_1800b6b20(0,&lStack_120);
  puStack_1f0 = (uint64_t *)0x0;
  puStack_1e8 = (uint64_t *)0x0;
  puStack_1e0 = (uint64_t *)0x0;
  uStack_1d8 = 3;
  uVar21 = uVar21 ^ 0x41c64e6d;
  if (lStack_118 - lStack_120 >> 3 != 0) {
    do {
      puVar22 = (uint64_t *)0x0;
      lVar12 = *(longlong *)(lStack_120 + uVar29 * 8);
      puStack_e8 = &UNK_1809fcc28;
      pcStack_e0 = acStack_d0;
      acStack_d0[0] = '\0';
      uStack_d8 = *(uint *)(lVar12 + 0x20);
      puVar3 = *(void **)(lVar12 + 0x18);
      puVar23 = &DAT_18098bc73;
      if (puVar3 != (void *)0x0) {
        puVar23 = puVar3;
      }
      strcpy_s(acStack_d0,0x80,puVar23);
      if (uStack_d8 < _DAT_180bf90c0) {
LAB_1802890ba:
        bVar4 = false;
      }
      else {
        if (_DAT_180bf90c0 != 0) {
          pcVar18 = pcStack_e0;
          puVar17 = puVar22;
          do {
            if (*pcVar18 != pcVar18[_DAT_180bf90b8 - (longlong)pcStack_e0]) goto LAB_1802890ba;
            uVar21 = (int)puVar17 + 1;
            puVar17 = (uint64_t *)(ulonglong)uVar21;
            pcVar18 = pcVar18 + 1;
          } while (uVar21 < _DAT_180bf90c0);
        }
        bVar4 = true;
      }
      if (bVar4) {
        puStack_258 = &UNK_180a3c3e0;
        uStack_240 = 0;
        pcStack_250 = (int8_t *)0x0;
        uStack_248 = 0;
        FUN_1806277c0(&puStack_258,uStack_d8);
        pcVar18 = pcStack_250;
        if (0 < (int)uStack_d8) {
          pcVar18 = "";
          if (pcStack_e0 != (char *)0x0) {
            pcVar18 = pcStack_e0;
          }
                    // WARNING: Subroutine does not return
          memcpy(pcStack_250,pcVar18,(longlong)(int)(uStack_d8 + 1));
        }
        if (pcStack_e0 == (char *)0x0) {
          puVar17 = (uint64_t *)(ulonglong)uStack_248;
        }
        else {
          uStack_248 = 0;
          puVar17 = puVar22;
          if (pcStack_250 != (int8_t *)0x0) {
            *pcStack_250 = 0;
            puVar17 = (uint64_t *)0x0;
          }
        }
        if (puStack_1e8 < puStack_1e0) {
          puStack_1d0 = puStack_1e8;
          *puStack_1e8 = &UNK_18098bcb0;
          puStack_1e8[1] = 0;
          *(int32_t *)(puStack_1e8 + 2) = 0;
          *puStack_1e8 = &UNK_180a3c3e0;
          *(int *)(puStack_1e8 + 2) = (int)puVar17;
          puStack_1e8[1] = pcStack_250;
          *(int32_t *)((longlong)puStack_1e8 + 0x1c) = uStack_240._4_4_;
          *(int32_t *)(puStack_1e8 + 3) = (int32_t)uStack_240;
          uStack_248 = 0;
          uStack_240 = 0;
          puVar13 = puStack_1e8;
        }
        else {
          lVar12 = (longlong)puStack_1e8 - (longlong)puStack_1f0 >> 5;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_1802891fc:
            puVar22 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar12 << 5,(int8_t)uStack_1d8)
            ;
          }
          else {
            lVar12 = lVar12 * 2;
            if (lVar12 != 0) goto LAB_1802891fc;
          }
          puVar13 = (uint64_t *)FUN_180059780(puStack_1f0,puStack_1e8,puVar22);
          puVar20 = puStack_1e8;
          *puVar13 = &UNK_18098bcb0;
          puVar13[1] = 0;
          *(int32_t *)(puVar13 + 2) = 0;
          *puVar13 = &UNK_180a3c3e0;
          *(int *)(puVar13 + 2) = (int)puVar17;
          puVar13[1] = pcVar18;
          *(int32_t *)((longlong)puVar13 + 0x1c) = uStack_240._4_4_;
          *(int32_t *)(puVar13 + 3) = (int32_t)uStack_240;
          uStack_248 = 0;
          pcStack_250 = (char *)0x0;
          uStack_240 = 0;
          puStack_1d0 = puVar13;
          for (puVar17 = puStack_1f0; puVar17 != puVar20; puVar17 = puVar17 + 4) {
            (**(code **)*puVar17)(puVar17,0);
          }
          if (puStack_1f0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puStack_1f0);
          }
          puStack_1e0 = puVar22 + lVar12 * 4;
          puStack_1f0 = puVar22;
        }
        puStack_1e8 = puVar13 + 4;
        pcStack_250 = (char *)0x0;
        uStack_240 = uStack_240 & 0xffffffff00000000;
        puStack_258 = &UNK_18098bcb0;
      }
      puStack_e8 = &UNK_18098bcb0;
      uVar29 = (ulonglong)((int)uVar29 + 1);
      uVar21 = uStack_214;
    } while (uVar29 < (ulonglong)(lStack_118 - lStack_120 >> 3));
  }
  uVar29 = 0;
  puStack_1c8 = (uint64_t *)0x0;
  puStack_1c0 = (uint64_t *)0x0;
  puStack_1b8 = (uint64_t *)0x0;
  uStack_1b0 = 3;
  puStack_210 = (uint64_t *)0x0;
  puStack_208 = (uint64_t *)0x0;
  puStack_200 = (uint64_t *)0x0;
  uStack_1f8 = 3;
  uStack_180 = 3;
  pppppppuStack_1a8 = &pppppppuStack_1a8;
  pppppppuStack_1a0 = &pppppppuStack_1a8;
  pppppppuStack_198 = (uint64_t *******)0x0;
  uStack_190 = 0;
  lStack_188 = 0;
  puStack_258 = &UNK_180a3c3e0;
  uStack_240 = 0;
  pcStack_250 = (char *)0x0;
  uStack_248 = 0;
  if (0 < (int)_DAT_180bf90c0) {
    iVar7 = _DAT_180bf90c0 + 1;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar10 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
    *puVar10 = 0;
    pcStack_250 = puVar10;
    uVar8 = FUN_18064e990(puVar10);
    uStack_240 = CONCAT44(uStack_240._4_4_,uVar8);
                    // WARNING: Subroutine does not return
    memcpy(puVar10,_DAT_180bf90b8,(longlong)(int)(_DAT_180bf90c0 + 1));
  }
  uVar31 = 1;
  puStack_1d0 = (uint64_t *)CONCAT44(puStack_1d0._4_4_,1);
  pcVar11 = (char *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *pcVar11 = '\0';
  pcStack_250 = pcVar11;
  uVar9 = FUN_18064e990(pcVar11);
  pcVar18 = pcStack_250;
  uStack_240 = CONCAT44(uStack_240._4_4_,uVar9);
  pcVar11[0] = '_';
  pcVar11[1] = '\0';
  uStack_248 = 1;
  if (0 < _DAT_180bf5b98) {
    if (_DAT_180bf5b98 != -1) {
      if (pcVar11 == (char *)0x0) {
        iVar7 = _DAT_180bf5b98 + 2;
        if (iVar7 < 0x10) {
          iVar7 = 0x10;
        }
        pcVar11 = (char *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
        *pcVar11 = '\0';
      }
      else {
        if (_DAT_180bf5b98 + 2U <= uVar9) goto LAB_180289516;
        uStack_268 = 0x13;
        pcVar11 = (char *)FUN_18062b8b0(_DAT_180c8ed18,pcVar11,_DAT_180bf5b98 + 2U,0x10);
      }
      pcStack_250 = pcVar11;
      uVar8 = FUN_18064e990(pcVar11);
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar8);
    }
LAB_180289516:
                    // WARNING: Subroutine does not return
    memcpy(pcVar11 + 1,_DAT_180bf5b90,(longlong)(_DAT_180bf5b98 + 1));
  }
  uStack_218 = 0;
  if ((longlong)puStack_1e8 - (longlong)puStack_1f0 >> 5 != 0) {
    do {
      puVar17 = puStack_208;
      puVar13 = (uint64_t *)0x0;
      puVar22 = puStack_1f0 + uVar29 * 4;
      uVar21 = *(uint *)(puVar22 + 2);
      if (uVar21 < uVar31) {
LAB_180289571:
        bVar4 = false;
      }
      else {
        if (uVar31 != 0) {
          pcVar11 = pcVar18;
          puVar20 = puVar13;
          do {
            if (pcVar11[puVar22[1] - (longlong)pcVar18] != *pcVar11) goto LAB_180289571;
            uVar9 = (int)puVar20 + 1;
            puVar20 = (uint64_t *)(ulonglong)uVar9;
            pcVar11 = pcVar11 + 1;
          } while (uVar9 < uVar31);
        }
        bVar4 = true;
      }
      if (bVar4) {
        if (uVar21 == 0) goto LAB_1802895c4;
        puVar17 = puVar13;
        puVar20 = puVar13;
        goto LAB_1802895b3;
      }
      if (puStack_208 < puStack_200) {
        puStack_208 = puStack_208 + 4;
        FUN_180627ae0(puVar17,puVar22);
      }
      else {
        lVar12 = (longlong)puStack_208 - (longlong)puStack_210 >> 5;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1802899a4:
          puVar13 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar12 << 5,(int8_t)uStack_1f8);
        }
        else {
          lVar12 = lVar12 * 2;
          if (lVar12 != 0) goto LAB_1802899a4;
        }
        lVar27 = FUN_180059780(puStack_210,puStack_208,puVar13);
        FUN_180627ae0(lVar27,puVar22);
        puVar17 = puStack_208;
        for (puVar22 = puStack_210; puVar22 != puVar17; puVar22 = puVar22 + 4) {
          (**(code **)*puVar22)(puVar22,0);
        }
        if (puStack_210 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_210);
        }
        puStack_200 = puVar13 + lVar12 * 4;
        puStack_210 = puVar13;
        puStack_208 = (uint64_t *)(lVar27 + 0x20);
      }
      uStack_218 = uStack_218 + 1;
      uVar29 = (ulonglong)uStack_218;
      pcVar11 = pcStack_250;
      uVar21 = uStack_214;
      uVar31 = (uint)puStack_1d0;
    } while (uVar29 < (ulonglong)((longlong)puStack_1e8 - (longlong)puStack_1f0 >> 5));
  }
  puVar10 = (int8_t *)0x0;
  FUN_18028a660(&puStack_1c8);
  lVar12 = lStack_128;
  if ((((longlong)puStack_208 - (longlong)puStack_210 & 0xffffffffffffffe0U) == 0) ||
     ((lStack_188 != 0 &&
      (uVar21 = uVar21 ^ uVar21 << 0xd, uVar21 = uVar21 ^ uVar21 >> 0x11,
      uVar21 = uVar21 ^ uVar21 << 5, 0.15 < (float)(uVar21 - 1) * 2.3283064e-10)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (DAT_180c82860 == '\0')) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(int8_t *)(lStack_128 + 0x130) = uVar6;
  puStack_238 = &UNK_180a3c3e0;
  uStack_220 = 0;
  puStack_230 = (int8_t *)0x0;
  uStack_228 = 0;
  if (*(char *)(lStack_128 + 0x130) == '\0') {
    uVar21 = uVar21 ^ uVar21 << 0xd;
    uVar21 = uVar21 ^ uVar21 >> 0x11;
    puVar22 = puStack_210 +
              (longlong)
              (int)((ulonglong)((uVar21 << 5 ^ uVar21) - 1) %
                   ((longlong)puStack_208 - (longlong)puStack_210 >> 5 & 0xffffffffU)) * 4;
    uVar21 = *(uint *)(puVar22 + 2);
    uVar29 = (ulonglong)uVar21;
    if (puVar22[1] != 0) {
      FUN_1806277c0(&puStack_238,uVar29);
    }
    if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_230,puVar22[1],uVar29);
    }
    puVar10 = puStack_230;
    uStack_228 = 0;
    if (puStack_230 != (int8_t *)0x0) {
      puStack_230[uVar29] = 0;
    }
    goto LAB_180289e47;
  }
  plVar1 = (longlong *)(lStack_128 + 0x138);
  FUN_180057110(plVar1);
  uVar21 = uVar21 ^ uVar21 << 0xd;
  uVar21 = uVar21 ^ uVar21 >> 0x11;
  uVar21 = uVar21 ^ uVar21 << 5;
  iVar7 = (int)((ulonglong)(uVar21 - 1) %
               ((longlong)puStack_1c0 - (longlong)puStack_1c8 >> 5 & 0xffffffffU));
  pppppppuVar24 = &pppppppuStack_1a8;
  pppppppuVar16 = pppppppuStack_198;
  while (pppppppuVar5 = pppppppuVar24, pppppppuVar16 != (uint64_t *******)0x0) {
    if (*(int *)(pppppppuVar16 + 6) == 0) {
      bVar4 = false;
      pppppppuVar25 = (uint64_t *******)*pppppppuVar16;
    }
    else {
      if (*(int *)(puStack_1c8 + (longlong)iVar7 * 4 + 2) == 0) {
        bVar4 = true;
      }
      else {
        ppppppuVar14 = pppppppuVar16[5];
        lVar27 = puStack_1c8[(longlong)iVar7 * 4 + 1] - (longlong)ppppppuVar14;
        do {
          uVar31 = (uint)*(byte *)((longlong)ppppppuVar14 + lVar27);
          iVar19 = *(byte *)ppppppuVar14 - uVar31;
          if (*(byte *)ppppppuVar14 != uVar31) break;
          ppppppuVar14 = (uint64_t ******)((longlong)ppppppuVar14 + 1);
        } while (uVar31 != 0);
        bVar4 = 0 < iVar19;
        if (iVar19 < 1) {
          pppppppuVar25 = (uint64_t *******)*pppppppuVar16;
          goto LAB_180289bc9;
        }
      }
      pppppppuVar25 = (uint64_t *******)pppppppuVar16[1];
    }
LAB_180289bc9:
    pppppppuVar24 = pppppppuVar16;
    pppppppuVar16 = pppppppuVar25;
    if (!bVar4) {
      pppppppuVar24 = pppppppuVar5;
    }
  }
  pppppppuVar16 = &pppppppuStack_1a8;
  if (pppppppuStack_198 != (uint64_t *******)0x0) {
    pppppppuVar24 = pppppppuStack_198;
    do {
      if (*(int *)(puStack_1c8 + (longlong)iVar7 * 4 + 2) == 0) {
        bVar4 = false;
        pppppppuVar25 = (uint64_t *******)pppppppuVar24[1];
      }
      else {
        if (*(int *)(pppppppuVar24 + 6) == 0) {
          bVar4 = true;
        }
        else {
          pbVar15 = (byte *)puStack_1c8[(longlong)iVar7 * 4 + 1];
          lVar27 = (longlong)pppppppuVar24[5] - (longlong)pbVar15;
          do {
            uVar31 = (uint)pbVar15[lVar27];
            iVar19 = *pbVar15 - uVar31;
            if (*pbVar15 != uVar31) break;
            pbVar15 = pbVar15 + 1;
          } while (uVar31 != 0);
          bVar4 = 0 < iVar19;
          if (iVar19 < 1) {
            pppppppuVar25 = (uint64_t *******)pppppppuVar24[1];
            goto LAB_180289c37;
          }
        }
        pppppppuVar25 = (uint64_t *******)*pppppppuVar24;
      }
LAB_180289c37:
      if (bVar4) {
        pppppppuVar24 = pppppppuVar16;
      }
      pppppppuVar16 = pppppppuVar24;
      pppppppuVar24 = pppppppuVar25;
    } while (pppppppuVar25 != (uint64_t *******)0x0);
  }
  for (; pppppppuVar16 != pppppppuVar5;
      pppppppuVar16 = (uint64_t *******)func_0x00018066bd70(pppppppuVar16)) {
    if (*(ulonglong *)(lVar12 + 0x140) < *(ulonglong *)(lVar12 + 0x148)) {
      *(ulonglong *)(lVar12 + 0x140) = *(ulonglong *)(lVar12 + 0x140) + 0x20;
      FUN_180627ae0();
    }
    else {
      FUN_180059820(plVar1);
    }
  }
  uVar21 = uVar21 ^ uVar21 << 0xd;
  uVar21 = uVar21 ^ uVar21 >> 0x11;
  puVar22 = (uint64_t *)
            ((longlong)
             (int)((ulonglong)((uVar21 << 5 ^ uVar21) - 1) %
                  (*(longlong *)(lVar12 + 0x140) - *plVar1 >> 5 & 0xffffffffU)) * 0x20 + *plVar1);
  uVar21 = *(uint *)(puVar22 + 2);
  if (puVar22[1] == 0) {
LAB_180289daa:
    if (uVar21 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar10,puVar22[1],(ulonglong)uVar21);
    }
  }
  else if (uVar21 != 0) {
    iVar7 = uVar21 + 1;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar10 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
    *puVar10 = 0;
    uVar29 = (ulonglong)puVar10 & 0xffffffffffc00000;
    if (uVar29 == 0) {
      uVar31 = 0;
    }
    else {
      lVar12 = ((longlong)puVar10 - uVar29 >> 0x10) * 0x50;
      puVar26 = (uint *)(uVar29 + ((lVar12 + 0x80) - (ulonglong)*(uint *)(uVar29 + lVar12 + 0x84)));
      if ((*(byte *)((longlong)puVar26 + 0xe) & 2) == 0) {
        uVar31 = puVar26[7];
        if (0x3ffffff < uVar31) {
          uVar31 = *puVar26 << 0x10;
        }
      }
      else {
        uVar31 = puVar26[7];
        if (uVar31 < 0x4000000) {
          uVar30 = (ulonglong)uVar31;
        }
        else {
          uVar30 = (ulonglong)*puVar26 << 0x10;
        }
        if (0x3ffffff < uVar31) {
          uVar31 = *puVar26 << 0x10;
        }
        uVar31 = uVar31 - (int)(((longlong)puVar10 -
                                (uVar29 + ((longlong)((longlong)puVar26 + (-0x80 - uVar29)) / 0x50)
                                          * 0x10000)) % uVar30);
      }
    }
    uStack_220 = CONCAT44(uStack_220._4_4_,uVar31);
    puStack_230 = puVar10;
    goto LAB_180289daa;
  }
  uStack_228 = uVar21;
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar21] = 0;
  }
LAB_180289e47:
  uVar21 = *(uint *)((longlong)puVar22 + 0x1c);
  *(float *)(lStack_128 + 0x15c) = (float)_DAT_180c8ed30 * 1e-05;
  uStack_220._4_4_ = uVar21;
  FUN_1800b08e0(_DAT_180c86930,uStack_100,&puStack_238,1);
  uStack_178 = 1;
  puStack_238 = &UNK_180a3c3e0;
  if (puVar10 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_230 = (int8_t *)0x0;
  uStack_220 = (ulonglong)uStack_220._4_4_ << 0x20;
  puStack_238 = &UNK_18098bcb0;
  puStack_258 = &UNK_180a3c3e0;
  if (pcVar11 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pcVar11);
  }
  pcStack_250 = (char *)0x0;
  uStack_240 = uStack_240 & 0xffffffff00000000;
  puStack_258 = &UNK_18098bcb0;
  FUN_180058020(&pppppppuStack_1a8);
  FUN_18005d580(&puStack_210);
  FUN_18005d580(&puStack_1c8);
  FUN_18005d580(&puStack_1f0);
  FUN_180057830(&lStack_120);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_288);
  while( true ) {
    puVar20 = (uint64_t *)(ulonglong)(iVar7 + 1U);
    puVar17 = (uint64_t *)((longlong)puVar17 + 1);
    if (uVar21 <= iVar7 + 1U) break;
LAB_1802895b3:
    iVar7 = (int)puVar20;
    if (*(char *)(puVar22[1] + (longlong)puVar17) == '_') goto LAB_1802895ce;
  }
LAB_1802895c4:
  puVar17 = (uint64_t *)0xffffffffffffffff;
  iVar7 = -1;
LAB_1802895ce:
  uVar31 = iVar7 + 1;
  if (uVar31 < uVar21) {
    pcVar18 = (char *)((longlong)puVar17 + puVar22[1] + 1);
    do {
      if (*pcVar18 == '_') goto LAB_1802895f6;
      uVar31 = uVar31 + 1;
      pcVar18 = pcVar18 + 1;
    } while (uVar31 < uVar21);
  }
  uVar31 = 0xffffffff;
LAB_1802895f6:
  iVar7 = uVar21 - 1;
  if (-1 < iVar7) {
    lVar12 = (longlong)iVar7;
    do {
      if (*(char *)(puVar22[1] + lVar12) == '_') goto LAB_180289618;
      iVar7 = iVar7 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  iVar7 = -1;
LAB_180289618:
  FUN_180629a40(puVar22,&puStack_238,uVar31 + 1,iVar7);
  puVar17 = puStack_1c0;
  if (puStack_1c0 < puStack_1b8) {
    ppuStack_170 = (void **)puStack_1c0;
    *puStack_1c0 = &UNK_18098bcb0;
    puStack_1c0[1] = 0;
    *(int32_t *)(puStack_1c0 + 2) = 0;
    *puStack_1c0 = &UNK_180a3c3e0;
    puStack_1c0[3] = 0;
    puStack_1c0[1] = 0;
    *(int32_t *)(puStack_1c0 + 2) = 0;
    puStack_1c0 = puStack_1c0 + 4;
    FUN_1806277c0(puVar17,uStack_228);
    if (uStack_228 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar17[1],puStack_230,uStack_228 + 1);
    }
    if (puStack_230 != (int8_t *)0x0) {
      *(int32_t *)(puVar17 + 2) = 0;
      if ((int8_t *)puVar17[1] != (int8_t *)0x0) {
        *(int8_t *)puVar17[1] = 0;
      }
      *(int32_t *)((longlong)puVar17 + 0x1c) = 0;
    }
  }
  else {
    lVar12 = (longlong)puStack_1c0 - (longlong)puStack_1c8 >> 5;
    if (lVar12 == 0) {
      lVar12 = 1;
LAB_1802896e8:
      puVar13 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar12 << 5,(int8_t)uStack_1b0);
    }
    else {
      lVar12 = lVar12 * 2;
      if (lVar12 != 0) goto LAB_1802896e8;
    }
    lVar27 = FUN_180059780(puStack_1c8,puStack_1c0,puVar13);
    FUN_180627ae0(lVar27,&puStack_238);
    puVar20 = puStack_1c0;
    for (puVar17 = puStack_1c8; puVar17 != puVar20; puVar17 = puVar17 + 4) {
      (**(code **)*puVar17)(puVar17,0);
    }
    if (puStack_1c8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_1c8);
    }
    puStack_1b8 = puVar13 + lVar12 * 4;
    puStack_1c8 = puVar13;
    puStack_1c0 = (uint64_t *)(lVar27 + 0x20);
  }
  uVar28 = 0;
  ppuStack_170 = &puStack_168;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (int8_t *)0x0;
  uStack_158 = 0;
  FUN_1806277c0(&puStack_168,uStack_228);
  if (uStack_228 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_160,puStack_230,uStack_228 + 1);
  }
  if (puStack_230 != (int8_t *)0x0) {
    uStack_158 = 0;
    if (puStack_160 != (int8_t *)0x0) {
      *puStack_160 = 0;
    }
    uStack_150 = uStack_150 & 0xffffffff;
  }
  FUN_180627ae0(auStack_148,puVar22);
  lVar12 = FUN_18062b420(_DAT_180c8ed18,0x60,(int8_t)uStack_180);
  FUN_18005caa0(lVar12 + 0x20,&puStack_168);
  pppppppuVar16 = &pppppppuStack_1a8;
  pppppppuVar24 = pppppppuStack_198;
  if (pppppppuStack_198 != (uint64_t *******)0x0) {
    do {
      pppppppuVar16 = pppppppuVar24;
      if (*(int *)(pppppppuVar16 + 6) == 0) {
LAB_18028988d:
        pppppppuVar24 = (uint64_t *******)*pppppppuVar16;
      }
      else {
        if (*(int *)(lVar12 + 0x30) != 0) {
          ppppppuVar14 = pppppppuVar16[5];
          lVar27 = *(longlong *)(lVar12 + 0x28) - (longlong)ppppppuVar14;
          do {
            bVar2 = *(byte *)ppppppuVar14;
            uVar21 = (uint)*(byte *)((longlong)ppppppuVar14 + lVar27);
            if (bVar2 != uVar21) break;
            ppppppuVar14 = (uint64_t ******)((longlong)ppppppuVar14 + 1);
          } while (uVar21 != 0);
          if ((int)(bVar2 - uVar21) < 1) goto LAB_18028988d;
        }
        pppppppuVar24 = (uint64_t *******)pppppppuVar16[1];
      }
    } while (pppppppuVar24 != (uint64_t *******)0x0);
    if ((uint64_t ********)pppppppuVar16 != &pppppppuStack_1a8) {
      if (*(int *)(pppppppuVar16 + 6) != 0) {
        if (*(int *)(lVar12 + 0x30) == 0) goto LAB_1802898d6;
        ppppppuVar14 = pppppppuVar16[5];
        lVar27 = *(longlong *)(lVar12 + 0x28) - (longlong)ppppppuVar14;
        do {
          bVar2 = *(byte *)ppppppuVar14;
          uVar21 = (uint)*(byte *)((longlong)ppppppuVar14 + lVar27);
          if (bVar2 != uVar21) break;
          ppppppuVar14 = (uint64_t ******)((longlong)ppppppuVar14 + 1);
        } while (uVar21 != 0);
        if (0 < (int)(bVar2 - uVar21)) goto LAB_1802898d6;
      }
      uVar28 = 1;
    }
  }
LAB_1802898d6:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar12,pppppppuVar16,&pppppppuStack_1a8,uVar28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



