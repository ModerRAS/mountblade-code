#include "TaleWorlds.Native.Split.h"

// 03_rendering_part235.c - 4 个函数

// 函数: void FUN_18039cb40(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18039cb40(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  int32_t param_5)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *puVar5;
  void *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int32_t uVar14;
  int8_t auStack_978 [32];
  int8_t *puStack_958;
  int32_t uStack_950;
  uint64_t uStack_948;
  uint uStack_938;
  uint uStack_934;
  longlong lStack_930;
  longlong lStack_928;
  ulonglong uStack_920;
  int16_t uStack_918;
  int8_t uStack_916;
  uint uStack_910;
  int iStack_90c;
  uint uStack_908;
  uint uStack_904;
  uint uStack_900;
  uint uStack_8fc;
  uint uStack_8f8;
  uint uStack_8f4;
  uint uStack_8f0;
  uint uStack_8ec;
  uint uStack_8e8;
  uint uStack_8e4;
  longlong lStack_8e0;
  uint64_t *puStack_8d0;
  uint64_t *puStack_8c8;
  uint64_t *puStack_8c0;
  int32_t uStack_8b8;
  uint64_t uStack_8b0;
  uint64_t uStack_8a8;
  void *puStack_898;
  int8_t *puStack_890;
  int32_t uStack_888;
  int8_t auStack_880 [264];
  void *puStack_778;
  int8_t *puStack_770;
  int32_t uStack_768;
  int8_t auStack_760 [264];
  uint64_t uStack_658;
  uint64_t uStack_650;
  uint64_t uStack_648;
  uint64_t uStack_640;
  uint64_t uStack_638;
  uint64_t uStack_630;
  uint64_t uStack_628;
  uint64_t uStack_620;
  uint64_t uStack_618;
  uint64_t uStack_610;
  uint64_t uStack_608;
  uint64_t uStack_600;
  uint64_t uStack_5f8;
  uint64_t uStack_5f0;
  uint64_t uStack_5e8;
  uint64_t uStack_5e0;
  int32_t uStack_5d8;
  int32_t uStack_5d4;
  int32_t uStack_5d0;
  int32_t uStack_5cc;
  int32_t uStack_5c8;
  int32_t uStack_5c4;
  int32_t uStack_5c0;
  int32_t uStack_5bc;
  void *apuStack_5b8 [68];
  char acStack_398 [288];
  int8_t auStack_278 [560];
  ulonglong uStack_48;
  
  uStack_8a8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_978;
  lStack_930 = 0;
  lStack_928 = 0;
  puVar8 = (uint64_t *)0x0;
  uStack_920 = 0;
  uStack_918 = 0;
  uStack_916 = 3;
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_3 + 8);
  }
  uStack_8b0 = param_4;
  FUN_180060680(acStack_398,&unknown_var_3896_ptr,puVar6);
  lStack_8e0 = 0xffffffffffffffff;
  puStack_778 = &unknown_var_2008_ptr;
  puStack_770 = auStack_760;
  auStack_760[0] = 0;
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    lVar9 = lVar4 + 1;
    lVar4 = lVar3;
  } while (acStack_398[lVar9] != '\0');
  uStack_768 = (int32_t)lVar3;
  strcpy_s(auStack_760,0x100,acStack_398);
  lVar4 = FUN_180624440(apuStack_5b8,&puStack_778);
  puStack_898 = &unknown_var_2008_ptr;
  puStack_890 = auStack_880;
  auStack_880[0] = 0;
  uStack_888 = *(int32_t *)(lVar4 + 0x10);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar6 = *(void **)(lVar4 + 8);
  }
  strcpy_s(auStack_880,0x100,puVar6);
  apuStack_5b8[0] = &unknown_var_720_ptr;
  puStack_778 = &unknown_var_720_ptr;
  uStack_950 = 0x118;
  puStack_958 = auStack_278;
  MultiByteToWideChar(0xfde9,0,puStack_890,0xffffffff);
  uStack_948 = 0;
  uStack_950 = 0x80;
  puStack_958 = (int8_t *)CONCAT44(puStack_958._4_4_,3);
  lVar4 = CreateFileW(auStack_278,0x80000000,1);
  lStack_8e0 = lVar4;
  if (lVar4 == -1) {
    GetLastError();
  }
  else {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + 1;
    UNLOCK();
  }
  puStack_898 = &unknown_var_720_ptr;
  puStack_8d0 = (uint64_t *)0x0;
  puStack_8c8 = (uint64_t *)0x0;
  puStack_8c0 = (uint64_t *)0x0;
  uStack_8b8 = 3;
  if (lVar4 != -1) {
    iStack_90c = 0;
    puVar7 = puVar8;
    do {
      uVar10 = 0x1000000;
      if (4U - (longlong)puVar7 < 0x1000000) {
        uVar10 = 4U - (longlong)puVar7 & 0xffffffff;
      }
      uStack_910 = 0;
      puStack_958 = (int8_t *)0x0;
      iVar2 = ReadFile(lVar4,(longlong)&iStack_90c + (longlong)puVar7,uVar10,&uStack_910);
    } while (((iVar2 != 0) && (uStack_910 != 0)) &&
            (puVar7 = (uint64_t *)((longlong)puVar7 + (ulonglong)uStack_910),
            puVar7 < (uint64_t *)0x4));
    if (iStack_90c == 0x31524c46) {
      uStack_934 = 0;
      puVar7 = puVar8;
      do {
        uVar10 = 0x1000000;
        if (4U - (longlong)puVar7 < 0x1000000) {
          uVar10 = 4U - (longlong)puVar7 & 0xffffffff;
        }
        uStack_908 = 0;
        puStack_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(longlong)&uStack_934 + (longlong)puVar7,uVar10,&uStack_908);
      } while (((iVar2 != 0) && (uStack_908 != 0)) &&
              (puVar7 = (uint64_t *)((longlong)puVar7 + (ulonglong)uStack_908),
              puVar7 < (uint64_t *)0x4));
      uStack_938 = 0;
      puVar7 = puStack_8d0;
      if (uStack_934 != 0) {
        do {
          puVar1 = puStack_8c8;
          uVar10 = 0;
          do {
            uVar11 = 0x1000000;
            if (0x98 - uVar10 < 0x1000000) {
              uVar11 = 0x98 - uVar10 & 0xffffffff;
            }
            uStack_904 = 0;
            puStack_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,(longlong)&uStack_658 + uVar10,uVar11,&uStack_904);
          } while (((iVar2 != 0) && (uStack_904 != 0)) &&
                  (uVar10 = uVar10 + uStack_904, uVar10 < 0x98));
          if (puVar1 < puVar8) {
            *puVar1 = uStack_658;
            puVar1[1] = uStack_650;
            puVar1[2] = uStack_648;
            puVar1[3] = uStack_640;
            puVar1[4] = uStack_638;
            puVar1[5] = uStack_630;
            puVar1[6] = uStack_628;
            puVar1[7] = uStack_620;
            puVar1[8] = uStack_618;
            puVar1[9] = uStack_610;
            puVar1[10] = uStack_608;
            puVar1[0xb] = uStack_600;
            puVar1[0xc] = uStack_5f8;
            puVar1[0xd] = uStack_5f0;
            puVar1[0xe] = uStack_5e8;
            puVar1[0xf] = uStack_5e0;
            *(int32_t *)(puVar1 + 0x10) = uStack_5d8;
            *(int32_t *)((longlong)puVar1 + 0x84) = uStack_5d4;
            *(int32_t *)(puVar1 + 0x11) = uStack_5d0;
            *(int32_t *)((longlong)puVar1 + 0x8c) = uStack_5cc;
            puVar1[0x12] = CONCAT44(uStack_5c4,uStack_5c8);
            puVar1[0x13] = CONCAT44(uStack_5bc,uStack_5c0);
            puVar5 = puVar7;
          }
          else {
            lVar9 = ((longlong)puVar1 - (longlong)puVar7) / 0xa0;
            if (lVar9 == 0) {
              lVar9 = 1;
LAB_18039cf3a:
              puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 0xa0,3);
            }
            else {
              lVar9 = lVar9 * 2;
              if (lVar9 != 0) goto LAB_18039cf3a;
              puVar5 = (uint64_t *)0x0;
            }
            if (puVar7 != puVar1) {
                    // WARNING: Subroutine does not return
              memmove(puVar5,puVar7,(longlong)puVar1 - (longlong)puVar7);
            }
            *puVar5 = uStack_658;
            puVar5[1] = uStack_650;
            puVar5[2] = uStack_648;
            puVar5[3] = uStack_640;
            puVar5[4] = uStack_638;
            puVar5[5] = uStack_630;
            puVar5[6] = uStack_628;
            puVar5[7] = uStack_620;
            puVar5[8] = uStack_618;
            puVar5[9] = uStack_610;
            puVar5[10] = uStack_608;
            puVar5[0xb] = uStack_600;
            puVar5[0xc] = uStack_5f8;
            puVar5[0xd] = uStack_5f0;
            puVar5[0xe] = uStack_5e8;
            puVar5[0xf] = uStack_5e0;
            *(int32_t *)(puVar5 + 0x10) = uStack_5d8;
            *(int32_t *)((longlong)puVar5 + 0x84) = uStack_5d4;
            *(int32_t *)(puVar5 + 0x11) = uStack_5d0;
            *(int32_t *)((longlong)puVar5 + 0x8c) = uStack_5cc;
            *(int32_t *)(puVar5 + 0x12) = uStack_5c8;
            *(int32_t *)((longlong)puVar5 + 0x94) = uStack_5c4;
            *(int32_t *)(puVar5 + 0x13) = uStack_5c0;
            *(int32_t *)((longlong)puVar5 + 0x9c) = uStack_5bc;
            if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar7);
            }
            puVar8 = puVar5 + lVar9 * 0x14;
            puStack_8d0 = puVar5;
            puStack_8c0 = puVar8;
            puVar1 = puVar5;
          }
          puStack_8c8 = puVar1 + 0x14;
          uStack_938 = uStack_938 + 1;
          param_4 = uStack_8b0;
          puVar7 = puVar5;
        } while (uStack_938 < uStack_934);
      }
      uVar11 = 0;
      uStack_900 = 0;
      uVar10 = uVar11;
      do {
        uVar12 = 0x1000000;
        if (4 - uVar10 < 0x1000000) {
          uVar12 = 4 - uVar10 & 0xffffffff;
        }
        uStack_938 = 0;
        puStack_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(longlong)&uStack_900 + uVar10,uVar12,&uStack_938);
      } while (((iVar2 != 0) && (uStack_938 != 0)) && (uVar10 = uVar10 + uStack_938, uVar10 < 4));
      if (uStack_900 != 0) {
        uVar12 = (ulonglong)uStack_900;
        FUN_180639bf0(&lStack_930,uStack_900);
        lVar9 = lStack_928;
        uVar10 = uVar11;
        if (uVar12 != 0) {
          do {
            uVar13 = 0x1000000;
            if (uVar12 - uVar10 < 0x1000000) {
              uVar13 = uVar12 - uVar10 & 0xffffffff;
            }
            uStack_8fc = 0;
            puStack_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,lVar9 + uVar10,uVar13,&uStack_8fc);
          } while (((iVar2 != 0) && (uStack_8fc != 0)) &&
                  (uVar10 = uVar10 + uStack_8fc, uVar10 < uVar12));
        }
      }
      lVar9 = lStack_930;
      lStack_928 = lStack_930;
      uVar10 = uVar11;
      do {
        uVar12 = 0x1000000;
        if (4 - uVar10 < 0x1000000) {
          uVar12 = 4 - uVar10 & 0xffffffff;
        }
        uStack_8f8 = 0;
        puStack_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(longlong)&uStack_8f4 + uVar10,uVar12,&uStack_8f8);
      } while (((iVar2 != 0) && (uStack_8f8 != 0)) && (uVar10 = uVar10 + uStack_8f8, uVar10 < 4));
      uVar10 = (ulonglong)uStack_8f4;
      lVar3 = lVar9;
      if (uStack_920 < uVar10) {
        FUN_180639bf0(&lStack_930,uStack_8f4);
        uVar10 = (ulonglong)uStack_8f4;
        lVar9 = lStack_928;
        lVar3 = lStack_930;
      }
      if ((int)uVar10 != 0) {
        if ((uStack_920 - lVar9) + lVar3 <= uVar10) {
          FUN_180639bf0(&lStack_930,uVar10 + (lVar9 - lVar3));
          lVar9 = lStack_928;
        }
        if (uVar10 != 0) {
          do {
            uVar12 = 0x1000000;
            if (uVar10 - uVar11 < 0x1000000) {
              uVar12 = uVar10 - uVar11 & 0xffffffff;
            }
            uStack_8f0 = 0;
            puStack_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,lVar9 + uVar11,uVar12,&uStack_8f0);
          } while (((iVar2 != 0) && (uStack_8f0 != 0)) &&
                  (uVar11 = uVar11 + uStack_8f0, uVar11 < uVar10));
        }
      }
    }
    else {
      puVar7 = puVar8;
      if (iStack_90c != 0x32524c46) goto LAB_18039d347;
      do {
        uVar10 = 0x1000000;
        if (4U - (longlong)puVar7 < 0x1000000) {
          uVar10 = 4U - (longlong)puVar7 & 0xffffffff;
        }
        uStack_8ec = 0;
        puStack_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(longlong)&uStack_8e8 + (longlong)puVar7,uVar10,&uStack_8ec);
      } while (((iVar2 != 0) && (uStack_8ec != 0)) &&
              (puVar7 = (uint64_t *)((longlong)puVar7 + (ulonglong)uStack_8ec),
              puVar7 < (uint64_t *)0x4));
      if ((uStack_8e8 != 0) && (FUN_180639bf0(&lStack_930,uStack_8e8), uStack_8e8 != 0)) {
        puVar7 = (uint64_t *)(ulonglong)uStack_8e8;
        if ((uint64_t *)((uStack_920 - lStack_928) + lStack_930) <= puVar7) {
          FUN_180639bf0(&lStack_930,(longlong)puVar7 + (lStack_928 - lStack_930));
        }
        lVar9 = lStack_928;
        if (puVar7 != (uint64_t *)0x0) {
          do {
            uVar10 = 0x1000000;
            if ((ulonglong)((longlong)puVar7 - (longlong)puVar8) < 0x1000000) {
              uVar10 = (longlong)puVar7 - (longlong)puVar8 & 0xffffffff;
            }
            uStack_8e4 = 0;
            puStack_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,lVar9 + (longlong)puVar8,uVar10,&uStack_8e4);
          } while (((iVar2 != 0) && (uStack_8e4 != 0)) &&
                  (puVar8 = (uint64_t *)((longlong)puVar8 + (ulonglong)uStack_8e4),
                  puVar8 < puVar7));
        }
      }
    }
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    uVar14 = CloseHandle(lStack_8e0);
    lVar4 = -1;
    lStack_8e0 = -1;
    FUN_18039bee0(uVar14,&lStack_930,param_4,param_5);
  }
LAB_18039d347:
  if (puStack_8d0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar4 != -1) {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(lStack_8e0);
    lStack_8e0 = -1;
  }
  if (((char)uStack_918 == '\0') && (lStack_930 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_978);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039d3d0(longlong param_1,longlong param_2,void *param_3)
void FUN_18039d3d0(longlong param_1,longlong param_2,void *param_3)

{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  char *pcVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  int iVar9;
  void *puVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int32_t uVar18;
  
  uVar14 = 0xfffffffffffffffe;
  pcVar12 = "layer";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  puVar10 = param_3;
LAB_18039d41c:
  if (puVar6 == (uint64_t *)0x0) {
    iVar9 = 0;
  }
  else {
    pcVar12 = (char *)*puVar6;
    if (pcVar12 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar12 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 != pcVar11 + -0x180a2246b) goto LAB_18039d49e;
    pcVar2 = pcVar12 + (longlong)pcVar2;
    if (pcVar12 < pcVar2) {
      puVar10 = &unknown_var_7100_ptr + -(longlong)pcVar12;
      while (*pcVar12 == puVar10[(longlong)pcVar12]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar2 <= pcVar12) goto LAB_18039d461;
      }
      goto LAB_18039d49e;
    }
LAB_18039d461:
    iVar9 = 0;
LAB_18039d470:
    iVar9 = iVar9 + 1;
    pcVar12 = "layer";
    do {
      pcVar11 = pcVar12;
      pcVar12 = pcVar11 + 1;
    } while (*pcVar12 != '\0');
    puVar6 = (uint64_t *)puVar6[0xb];
    if (puVar6 != (uint64_t *)0x0) {
      do {
        pcVar12 = (char *)*puVar6;
        if (pcVar12 == (char *)0x0) {
          pcVar5 = (char *)0x0;
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar5 = (char *)puVar6[2];
        }
        if (pcVar5 == pcVar11 + -0x180a2246b) {
          pcVar2 = pcVar5 + (longlong)pcVar12;
          if (pcVar2 <= pcVar12) goto LAB_18039d470;
          puVar10 = &unknown_var_7100_ptr + -(longlong)pcVar12;
          while (*pcVar12 == puVar10[(longlong)pcVar12]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar2 <= pcVar12) goto LAB_18039d470;
          }
        }
        puVar6 = (uint64_t *)puVar6[0xb];
        if (puVar6 == (uint64_t *)0x0) break;
      } while( true );
    }
    if (0x10 < iVar9) {
      iVar9 = 0x10;
      FUN_180626f80(&unknown_var_7176_ptr,0x10,puVar10,pcVar2,0xfffffffffffffffe);
    }
  }
  FUN_180057340((longlong *)(param_1 + 0x230),(longlong)iVar9);
  puVar15 = (uint64_t *)0x0;
  puVar16 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  puVar17 = (uint64_t *)0x0;
  uVar18 = 3;
  pcVar12 = "layer";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  pcVar11 = pcVar11 + -0x180a2246b;
  for (puVar8 = *(uint64_t **)(param_2 + 0x30); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[0xb]) {
    pcVar12 = (char *)*puVar8;
    if (pcVar12 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar12 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar8[2];
    }
    if (pcVar2 == pcVar11) {
      pcVar2 = pcVar2 + (longlong)pcVar12;
      if (pcVar2 <= pcVar12) goto LAB_18039d59d;
      lVar7 = (longlong)&unknown_var_7100_ptr - (longlong)pcVar12;
      while (*pcVar12 == pcVar12[lVar7]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar2 <= pcVar12) goto LAB_18039d59d;
      }
    }
  }
  puVar8 = (uint64_t *)0x0;
LAB_18039d59d:
  iVar13 = 0;
  puVar1 = (uint64_t *)0x0;
  do {
    if ((puVar8 == (uint64_t *)0x0) || (iVar9 <= iVar13)) {
      iVar9 = (int)((longlong)puVar16 - (longlong)puVar1 >> 3);
      if (0 < iVar9) {
        lVar7 = 0;
        do {
          uVar14 = puVar1[lVar7];
          lVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
          *(uint64_t *)(lVar4 + 0x28) = &unknown_var_720_ptr;
          *(uint64_t *)(lVar4 + 0x30) = 0;
          *(int32_t *)(lVar4 + 0x38) = 0;
          *(uint64_t *)(lVar4 + 0x28) = &unknown_var_3456_ptr;
          *(uint64_t *)(lVar4 + 0x40) = 0;
          *(uint64_t *)(lVar4 + 0x30) = 0;
          *(int32_t *)(lVar4 + 0x38) = 0;
          FUN_1801fe1c0(lVar4);
          FUN_1801fdf50(lVar4,param_3,uVar14);
          *(longlong *)(*(longlong *)(param_1 + 0x230) + lVar7 * 8) = lVar4;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar9);
      }
      if (puVar1 == (uint64_t *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar1);
    }
    if (puVar16 < puVar6) {
      *puVar16 = puVar8;
      puVar3 = puVar1;
    }
    else {
      lVar7 = (longlong)puVar16 - (longlong)puVar1 >> 3;
      if (lVar7 == 0) {
        lVar7 = 1;
LAB_18039d5f9:
        puVar3 = (uint64_t *)
                 FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,3,pcVar11,uVar14,puVar15,puVar16,puVar17,
                               uVar18);
      }
      else {
        lVar7 = lVar7 * 2;
        if (lVar7 != 0) goto LAB_18039d5f9;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar1 != puVar16) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar1,(longlong)puVar16 - (longlong)puVar1);
      }
      *puVar3 = puVar8;
      if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar1);
      }
      puVar6 = puVar3 + lVar7;
      puVar15 = puVar3;
      puVar17 = puVar6;
      puVar16 = puVar3;
    }
    puVar16 = puVar16 + 1;
    pcVar12 = "layer";
    do {
      pcVar11 = pcVar12;
      pcVar12 = pcVar11 + 1;
    } while (*pcVar12 != '\0');
    pcVar11 = pcVar11 + -0x180a2246b;
    for (puVar8 = (uint64_t *)puVar8[0xb]; puVar8 != (uint64_t *)0x0;
        puVar8 = (uint64_t *)puVar8[0xb]) {
      pcVar12 = (char *)*puVar8;
      if (pcVar12 == (char *)0x0) {
        pcVar2 = (char *)0x0;
        pcVar12 = (char *)0x180d48d24;
      }
      else {
        pcVar2 = (char *)puVar8[2];
      }
      if (pcVar2 == pcVar11) {
        pcVar2 = pcVar2 + (longlong)pcVar12;
        if (pcVar2 <= pcVar12) goto LAB_18039d6cd;
        lVar7 = (longlong)&unknown_var_7100_ptr - (longlong)pcVar12;
        while (*pcVar12 == pcVar12[lVar7]) {
          pcVar12 = pcVar12 + 1;
          if (pcVar2 <= pcVar12) goto LAB_18039d6cd;
        }
      }
    }
    puVar8 = (uint64_t *)0x0;
LAB_18039d6cd:
    iVar13 = iVar13 + 1;
    puVar1 = puVar3;
  } while( true );
LAB_18039d49e:
  puVar6 = (uint64_t *)puVar6[0xb];
  goto LAB_18039d41c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039d7b0(longlong param_1,longlong *param_2,uint64_t param_3)
void FUN_18039d7b0(longlong param_1,longlong *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int32_t *puVar13;
  int *piVar14;
  uint64_t *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int8_t auStack_348 [32];
  longlong lStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  int32_t uStack_310;
  int32_t uStack_30c;
  int32_t uStack_308;
  int32_t uStack_304;
  int32_t uStack_300;
  int32_t uStack_2fc;
  int32_t uStack_2f8;
  int32_t uStack_2f4;
  int32_t uStack_2f0;
  int32_t uStack_2ec;
  int32_t uStack_2e8;
  int32_t uStack_2e4;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int32_t uStack_2d0;
  int32_t uStack_2cc;
  int32_t uStack_2c8;
  int32_t uStack_2c4;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  int8_t auStack_2a8 [528];
  ulonglong uStack_98;
  
  uStack_98 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  lVar18 = *(longlong *)(param_1 + 0x238);
  lVar16 = *(longlong *)(param_1 + 0x230);
  puVar13 = (int32_t *)param_2[1];
  uStack_320 = param_3;
  if ((ulonglong)((*param_2 - (longlong)puVar13) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar13 + (4 - *param_2));
    puVar13 = (int32_t *)param_2[1];
  }
  *puVar13 = (int)(lVar18 - lVar16 >> 3);
  piVar14 = (int *)(param_2[1] + 4);
  param_2[1] = (longlong)piVar14;
  iVar19 = *(int *)(param_1 + 0x148);
  iVar17 = *(int *)(param_1 + 0x14c);
  if ((ulonglong)((*param_2 - (longlong)piVar14) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar14 + (4 - *param_2));
    piVar14 = (int *)param_2[1];
  }
  *piVar14 = iVar19 * iVar17;
  iVar19 = 0;
  param_2[1] = param_2[1] + 4;
  if (0 < *(int *)(param_1 + 0x148)) {
    lVar18 = 0;
    do {
      iVar17 = 0;
      if (0 < *(int *)(param_1 + 0x14c)) {
        puVar15 = (uint64_t *)param_2[1];
        lVar16 = lVar18;
        do {
          lVar2 = *(longlong *)(param_1 + 0x250);
          uStack_318 = *(uint64_t *)(lVar16 + lVar2);
          uVar3 = ((uint64_t *)(lVar16 + lVar2))[1];
          puVar1 = (uint64_t *)(lVar16 + 0x10 + lVar2);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uStack_310 = (int32_t)uVar3;
          uStack_30c = (int32_t)((ulonglong)uVar3 >> 0x20);
          puVar1 = (uint64_t *)(lVar16 + 0x20 + lVar2);
          uVar3 = *puVar1;
          uVar6 = puVar1[1];
          uStack_308 = (int32_t)uVar4;
          uStack_304 = (int32_t)((ulonglong)uVar4 >> 0x20);
          uStack_300 = (int32_t)uVar5;
          uStack_2fc = (int32_t)((ulonglong)uVar5 >> 0x20);
          puVar1 = (uint64_t *)(lVar16 + 0x30 + lVar2);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar7 = CONCAT44(uStack_308,uStack_30c);
          uVar8 = CONCAT44(uStack_300,uStack_304);
          uStack_2f8 = (int32_t)uVar3;
          uStack_2f4 = (int32_t)((ulonglong)uVar3 >> 0x20);
          uStack_2f0 = (int32_t)uVar6;
          uStack_2ec = (int32_t)((ulonglong)uVar6 >> 0x20);
          puVar13 = (int32_t *)(lVar16 + 0x40 + lVar2);
          uStack_2d8 = *puVar13;
          uStack_2d4 = puVar13[1];
          uStack_2d0 = puVar13[2];
          uVar12 = *(uint64_t *)(puVar13 + 1);
          uStack_2cc = puVar13[3];
          uVar3 = CONCAT44(uStack_2f8,uStack_2fc);
          uVar6 = CONCAT44(uStack_2f0,uStack_2f4);
          uStack_2e8 = (int32_t)uVar4;
          uStack_2e4 = (int32_t)((ulonglong)uVar4 >> 0x20);
          uStack_2e0 = (int32_t)uVar5;
          uStack_2dc = (int32_t)((ulonglong)uVar5 >> 0x20);
          puVar13 = (int32_t *)(lVar16 + 0x50 + lVar2);
          uStack_2c8 = *puVar13;
          uStack_2c4 = puVar13[1];
          uStack_2c0 = puVar13[2];
          uVar11 = *(uint64_t *)(puVar13 + 1);
          uStack_2bc = puVar13[3];
          uVar4 = CONCAT44(uStack_2e8,uStack_2ec);
          uVar5 = CONCAT44(uStack_2e0,uStack_2e4);
          uVar10 = CONCAT44(uStack_2c8,uStack_2cc);
          uVar9 = CONCAT44(uStack_2d8,uStack_2dc);
          if ((ulonglong)((*param_2 - (longlong)puVar15) + param_2[2]) < 0x51) {
            FUN_180639bf0(param_2,(longlong)puVar15 + (0x50 - *param_2));
            puVar15 = (uint64_t *)param_2[1];
          }
          *puVar15 = uVar10;
          puVar15[1] = uVar11;
          iVar17 = iVar17 + 1;
          lVar16 = lVar16 + 0x6c;
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          puVar15[4] = uVar3;
          puVar15[5] = uVar6;
          puVar15[6] = uVar4;
          puVar15[7] = uVar5;
          puVar15[8] = uVar9;
          puVar15[9] = uVar12;
          param_2[1] = param_2[1] + 0x50;
          puVar15 = (uint64_t *)param_2[1];
        } while (iVar17 < *(int *)(param_1 + 0x14c));
      }
      iVar19 = iVar19 + 1;
      lVar18 = lVar18 + 0x6c0;
    } while (iVar19 < *(int *)(param_1 + 0x148));
  }
  lStack_328 = 0;
  do {
    if (*(longlong *)(param_1 + 0x238) - *(longlong *)(param_1 + 0x230) >> 3 != 0) {
                    // WARNING: Subroutine does not return
      memset(auStack_2a8,0,0x210);
    }
    lStack_328 = lStack_328 + 8;
  } while (lStack_328 < 0x20);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_98 ^ (ulonglong)auStack_348);
}





// 函数: void FUN_18039d889(void)
void FUN_18039d889(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  longlong lVar15;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar16;
  uint64_t in_R9;
  longlong lVar17;
  int unaff_R14D;
  longlong unaff_R15;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t uStack0000000000000080;
  uint64_t uStack0000000000000084;
  
  lVar17 = 0;
  do {
    iVar16 = 0;
    if (0 < *(int *)(unaff_R15 + 0x14c)) {
      puVar14 = (uint64_t *)unaff_RSI[1];
      lVar15 = lVar17;
      do {
        lVar3 = *(longlong *)(unaff_R15 + 0x250);
        lVar4 = *unaff_RSI;
        puVar1 = (uint64_t *)(lVar15 + 0x10 + lVar3);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uStack000000000000003c =
             (int32_t)((ulonglong)*(uint64_t *)(lVar15 + lVar3 + 8) >> 0x20);
        puVar1 = (uint64_t *)(lVar15 + 0x20 + lVar3);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uStack0000000000000040 = (int32_t)uVar10;
        uStack0000000000000044 = (int32_t)((ulonglong)uVar10 >> 0x20);
        uStack0000000000000048 = (int32_t)uVar11;
        uStack000000000000004c = (int32_t)((ulonglong)uVar11 >> 0x20);
        puVar1 = (uint64_t *)(lVar15 + 0x30 + lVar3);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uStack0000000000000050 = (int32_t)uVar12;
        uStack0000000000000054 = (int32_t)((ulonglong)uVar12 >> 0x20);
        uStack0000000000000058 = (int32_t)uVar13;
        uStack000000000000005c = (int32_t)((ulonglong)uVar13 >> 0x20);
        puVar2 = (int32_t *)(lVar15 + 0x40 + lVar3);
        uVar5 = *puVar2;
        uVar12 = *(uint64_t *)(puVar2 + 1);
        uVar6 = puVar2[3];
        uStack0000000000000060 = (int32_t)uVar10;
        uStack0000000000000064 = (int32_t)((ulonglong)uVar10 >> 0x20);
        uStack0000000000000068 = (int32_t)uVar11;
        uStack000000000000006c = (int32_t)((ulonglong)uVar11 >> 0x20);
        puVar2 = (int32_t *)(lVar15 + 0x50 + lVar3);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        lVar3 = unaff_RSI[2];
        *(int32_t *)(unaff_RBP + -0x80) = *puVar2;
        *(int32_t *)(unaff_RBP + -0x7c) = uVar7;
        *(int32_t *)(unaff_RBP + -0x78) = uVar8;
        *(int32_t *)(unaff_RBP + -0x74) = uVar9;
        if ((ulonglong)((lVar4 - (longlong)puVar14) + lVar3) < 0x51) {
          FUN_180639bf0(uVar5,(longlong)puVar14 + (0x50 - lVar4));
          puVar14 = (uint64_t *)unaff_RSI[1];
        }
        *puVar14 = CONCAT44(uStack0000000000000080,uVar6);
        puVar14[1] = uStack0000000000000084;
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 0x6c;
        puVar14[2] = CONCAT44(uStack0000000000000040,uStack000000000000003c);
        puVar14[3] = CONCAT44(uStack0000000000000048,uStack0000000000000044);
        puVar14[4] = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        puVar14[5] = CONCAT44(uStack0000000000000058,uStack0000000000000054);
        puVar14[6] = CONCAT44(uStack0000000000000060,uStack000000000000005c);
        puVar14[7] = CONCAT44(uStack0000000000000068,uStack0000000000000064);
        puVar14[8] = CONCAT44(uVar5,uStack000000000000006c);
        puVar14[9] = uVar12;
        unaff_RSI[1] = unaff_RSI[1] + 0x50;
        puVar14 = (uint64_t *)unaff_RSI[1];
      } while (iVar16 < *(int *)(unaff_R15 + 0x14c));
    }
    unaff_R14D = unaff_R14D + 1;
    lVar17 = lVar17 + 0x6c0;
  } while (unaff_R14D < *(int *)(unaff_R15 + 0x148));
  lVar17 = 0;
  do {
    if (*(longlong *)(unaff_R15 + 0x238) - *(longlong *)(unaff_R15 + 0x230) >> 3 != 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBP + -0x60,0,0x210,in_R9,lVar17);
    }
    lVar17 = lVar17 + 8;
  } while (lVar17 < 0x20);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1b0) ^ (ulonglong)&stack0x00000000);
}





