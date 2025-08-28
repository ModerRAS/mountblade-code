#include "TaleWorlds.Native.Split.h"

// 03_rendering_part428.c - 12 个函数

// 函数: void FUN_18049e270(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18049e270(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  byte bVar2;
  uint64_t *puVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t ****ppppuVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  uint64_t uVar10;
  void *puVar11;
  uint64_t *puStackX_18;
  uint64_t *puStackX_20;
  void *puStack_90;
  int8_t *puStack_88;
  uint uStack_80;
  ulonglong uStack_78;
  uint64_t ***pppuStack_70;
  uint64_t ***pppuStack_68;
  uint64_t *puStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  
  if (*(int *)(_DAT_180c86870 + 0x20) != 0) {
    lVar1 = param_1 + 8;
    FUN_18005d260(lVar1,*(uint64_t *)(param_1 + 0x18),param_3,param_4,0xfffffffffffffffe);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(param_1 + 0x10) = lVar1;
    uVar10 = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int8_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    uStack_48 = 3;
    pppuStack_70 = &pppuStack_70;
    pppuStack_68 = &pppuStack_70;
    puStack_60 = (uint64_t *)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_1804aac20(param_2,&pppuStack_70);
    ppppuVar6 = (uint64_t ****)pppuStack_68;
    if ((uint64_t ****)pppuStack_68 != &pppuStack_70) {
      do {
        puStack_90 = &UNK_180a3c3e0;
        uStack_78 = 0;
        puStack_88 = (int8_t *)0x0;
        uStack_80 = 0;
        FUN_1806277c0(&puStack_90,*(int32_t *)(ppppuVar6 + 6));
        if (*(int *)(ppppuVar6 + 6) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puStack_88,ppppuVar6[5],*(int *)(ppppuVar6 + 6) + 1);
        }
        if (ppppuVar6[5] != (uint64_t ***)0x0) {
          uStack_80 = 0;
          if (puStack_88 != (int8_t *)0x0) {
            *puStack_88 = 0;
          }
          uStack_78 = uStack_78 & 0xffffffff;
        }
        puVar11 = &DAT_18098bc73;
        if (_DAT_180bf6688 != (void *)0x0) {
          puVar11 = _DAT_180bf6688;
        }
        lVar8 = -1;
        do {
          lVar5 = lVar8;
          lVar8 = lVar5 + 1;
        } while (puVar11[lVar8] != '\0');
        if (0 < (int)lVar8) {
          FUN_1806277c0(&puStack_90,uStack_80 + (int)lVar8);
                    // WARNING: Subroutine does not return
          memcpy(puStack_88 + uStack_80,puVar11,(longlong)((int)lVar5 + 2));
        }
        lVar8 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_1 + 0x30));
        FUN_180627ae0(lVar8 + 0x20,&puStack_90);
        lVar5 = FUN_1800590b0(lVar1,&puStackX_18,lVar8 + 0x20);
        if ((char)puStackX_18 != '\0') {
          if (lVar5 == lVar1) goto LAB_18049e482;
          if (*(int *)(lVar5 + 0x30) == 0) goto LAB_18049e477;
          if (*(int *)(lVar8 + 0x30) == 0) goto LAB_18049e482;
          pbVar7 = *(byte **)(lVar5 + 0x28);
          lVar9 = *(longlong *)(lVar8 + 0x28) - (longlong)pbVar7;
          goto LAB_18049e460;
        }
        FUN_18005d1f0();
        puStack_90 = &UNK_180a3c3e0;
        if (puStack_88 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_88 = (int8_t *)0x0;
        uStack_78 = uStack_78 & 0xffffffff00000000;
        puStack_90 = &UNK_18098bcb0;
        ppppuVar6 = (uint64_t ****)func_0x00018066bd70(ppppuVar6);
      } while (ppppuVar6 != &pppuStack_70);
    }
    puVar3 = puStack_60;
    puStackX_18 = puStack_60;
    if (puStack_60 != (uint64_t *)0x0) {
      FUN_18005d260(&pppuStack_70,*puStack_60);
      puStackX_20 = puVar3 + 4;
      *puStackX_20 = &UNK_180a3c3e0;
      if (puVar3[5] == 0) {
        puVar3[5] = 0;
        *(int32_t *)(puVar3 + 7) = 0;
        *puStackX_20 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar3);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
  while (pbVar7 = pbVar7 + 1, uVar4 != 0) {
LAB_18049e460:
    bVar2 = *pbVar7;
    uVar4 = (uint)pbVar7[lVar9];
    if (bVar2 != uVar4) break;
  }
  if ((int)(bVar2 - uVar4) < 1) {
LAB_18049e477:
    uVar10 = 1;
  }
LAB_18049e482:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar8,lVar5,lVar1,uVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18049e560(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  void *puVar4;
  int8_t auStackX_18 [16];
  void *puStack_30;
  longlong lStack_28;
  
  if (*(int *)(_DAT_180c86870 + 0x20) == 0) {
    return CONCAT71((int7)((ulonglong)_DAT_180c86870 >> 8),1);
  }
  iVar1 = *(int *)(param_2 + 0x10) + -1;
  if (-1 < iVar1) {
    lVar3 = (longlong)iVar1;
    do {
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar3) == '/') goto LAB_18049e5b3;
      iVar1 = iVar1 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar1 = -1;
LAB_18049e5b3:
  puVar4 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 8);
  }
  FUN_180627910(&puStack_30,puVar4 + (longlong)iVar1 + 1,param_2,param_4,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_180058080(param_1 + 8,auStackX_18,&puStack_30);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return (ulonglong)(*plVar2 != param_1 + 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049e630(void)
void FUN_18049e630(void)

{
  uint uVar1;
  int32_t *puVar2;
  int iVar3;
  int8_t auStack_c8 [32];
  int8_t uStack_a8;
  void *puStack_98;
  int32_t *puStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  uint uStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  int8_t auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_78 = 0;
  puStack_98 = &UNK_180a3c3e0;
  uStack_80 = 0;
  puStack_90 = (int32_t *)0x0;
  uStack_88 = 0;
  puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_90 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  *puVar2 = 0x61746144;
  puVar2[1] = 0x6e616c2f;
  puVar2[2] = 0x67617567;
  puVar2[3] = 0x2f7365;
  uStack_88 = 0xf;
  if (uVar1 < 0x12) {
    uStack_a8 = 0x13;
    uStack_80._0_4_ = uVar1;
    puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,0x12,0x10);
    puStack_90 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
  }
  *(int16_t *)((longlong)puVar2 + 0xf) = 0x6e65;
  *(int8_t *)((longlong)puVar2 + 0x11) = 0;
  uStack_88 = 0x11;
  uStack_80._0_4_ = uVar1;
  if (puVar2 == (int32_t *)0x0) {
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x20,0x13);
    *(int8_t *)puVar2 = 0;
LAB_18049e76b:
    puStack_90 = puVar2;
    uStack_80._0_4_ = FUN_18064e990(puVar2);
  }
  else if (uVar1 < 0x20) {
    uStack_a8 = 0x13;
    puVar2 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,0x20,0x10);
    goto LAB_18049e76b;
  }
  *(uint64_t *)((longlong)puVar2 + 0x11) = 0x61645f746e6f662f;
  *(int32_t *)((longlong)puVar2 + 0x19) = 0x782e6174;
  *(int16_t *)((longlong)puVar2 + 0x1d) = 0x6c6d;
  *(int8_t *)((longlong)puVar2 + 0x1f) = 0;
  uStack_88 = 0x1f;
  puStack_48 = &UNK_1809fdc18;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 6;
  strcpy_s(auStack_30,0x10,&UNK_180a3c07c);
  uStack_78 = 1;
  FUN_1806279c0(&puStack_70,&puStack_48);
  uStack_78 = 0;
  puStack_48 = &UNK_18098bcb0;
  iVar3 = uStack_60 + 0x12;
  if (iVar3 != 0) {
    uVar1 = uStack_60 + 0x13;
    if (puStack_68 == (int8_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      puStack_68 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar1,0x13);
      *puStack_68 = 0;
    }
    else {
      if (uVar1 <= uStack_58) goto LAB_18049e871;
      uStack_a8 = 0x13;
      puStack_68 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_68,uVar1,0x10);
    }
    uStack_58 = FUN_18064e990(puStack_68);
  }
LAB_18049e871:
  puVar2 = (int32_t *)(puStack_68 + uStack_60);
  *puVar2 = 0x61746144;
  puVar2[1] = 0x6e6f662f;
  puVar2[2] = 0x61645f74;
  puVar2[3] = 0x782e6174;
  *(int16_t *)(puVar2 + 4) = 0x6c6d;
  *(int8_t *)((longlong)puVar2 + 0x12) = 0;
  uStack_60 = iVar3;
  FUN_180180ad0(puVar2,&DAT_180c924f0,&puStack_98,&puStack_70);
  puStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (int8_t *)0x0;
  uStack_58 = 0;
  puStack_70 = &UNK_18098bcb0;
  puStack_98 = &UNK_180a3c3e0;
  if (puStack_90 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_90 = (int32_t *)0x0;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  puStack_98 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049e920(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18049e920(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a2ca60,param_3,param_4,0xfffffffffffffffe);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049ec60(void)
void FUN_18049ec60(void)

{
  longlong lVar1;
  char cVar2;
  int32_t uVar3;
  int32_t *puVar4;
  void *puVar5;
  ulonglong uVar6;
  uint64_t in_R9;
  int32_t auStackX_18 [2];
  uint64_t uVar7;
  void *puStack_60;
  int32_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  longlong lStack_38;
  uint uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  
  lVar1 = _DAT_180c8a9c8;
  uVar7 = 0xfffffffffffffffe;
  if (DAT_180c82860 != '\0') {
    auStackX_18[0] = 1;
    uVar3 = 1;
    if ((*(longlong *)(_DAT_180c8a9c8 + 0x1b0) != 0) &&
       (cVar2 = (**(code **)(_DAT_180c8a9c8 + 0x1b8))(auStackX_18), uVar3 = auStackX_18[0],
       cVar2 == '\0')) {
      if (DAT_180c82860 == '\0') {
        puVar5 = &DAT_18098bc73;
        if (*(void **)(lVar1 + 0x160) != (void *)0x0) {
          puVar5 = *(void **)(lVar1 + 0x160);
        }
        FUN_180626f80(&UNK_18098bc00,puVar5);
      }
      uVar3 = *(int32_t *)(lVar1 + 0x198);
    }
    *(int32_t *)(lVar1 + 0x150) = uVar3;
  }
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (int32_t *)0x0;
  uStack_50 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1e,0x13,in_R9,uVar7);
  *(int8_t *)puVar4 = 0;
  puStack_58 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar3);
  *puVar4 = 0x6e756f4d;
  puVar4[1] = 0x6e612074;
  puVar4[2] = 0x6c422064;
  puVar4[3] = 0x20656461;
  *(uint64_t *)(puVar4 + 4) = 0x656e6e6142204949;
  puVar4[6] = 0x726f6c72;
  *(int16_t *)(puVar4 + 7) = 100;
  uStack_50 = 0x1d;
  FUN_1800533d0(100,&puStack_40,&puStack_60);
  lVar1 = _DAT_180c86870;
  uVar6 = (ulonglong)uStack_30;
  if (lStack_38 != 0) {
    FUN_1806277c0(_DAT_180c86870 + 0x1c8,uVar6);
  }
  if (uStack_30 == 0) {
    *(int32_t *)(lVar1 + 0x1d8) = 0;
    if (*(longlong *)(lVar1 + 0x1d0) != 0) {
      *(int8_t *)(uVar6 + *(longlong *)(lVar1 + 0x1d0)) = 0;
    }
    *(int32_t *)(lVar1 + 0x1e4) = uStack_24;
    puStack_40 = &UNK_180a3c3e0;
    if (lStack_38 == 0) {
      lStack_38 = 0;
      uStack_28 = 0;
      puStack_40 = &UNK_18098bcb0;
      puStack_60 = &UNK_180a3c3e0;
      if (puStack_58 == (int32_t *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_58,0);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lStack_38,lStack_38);
  }
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(lVar1 + 0x1d0),lStack_38,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049ee30(uint64_t param_1,longlong *param_2,longlong param_3)
void FUN_18049ee30(uint64_t param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t *puVar5;
  int iVar6;
  uint64_t *puVar7;
  char *pcVar8;
  char *pcVar9;
  int8_t auStack_c8 [32];
  uint64_t uStack_a8;
  void *puStack_98;
  int8_t *puStack_90;
  int iStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  pcVar8 = "id";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_3 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar7[2];
    }
    if (pcVar2 == pcVar9 + -0x180a0ae27) {
      pcVar2 = pcVar2 + (longlong)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_18049eec8:
        lVar3 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar3 = puVar7[1];
        }
        (**(code **)(*param_2 + 0x10))(param_2,lVar3);
        break;
      }
      lVar3 = (longlong)&UNK_180a0ae28 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar3]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_18049eec8;
      }
    }
  }
  pcVar8 = "animation_name";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_3 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar7[2];
    }
    if (pcVar2 == pcVar9 + -0x180a2cb5f) {
      pcVar2 = pcVar2 + (longlong)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_18049ef45:
        lVar3 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar3 = puVar7[1];
        }
        (**(code **)(param_2[4] + 0x10))(param_2 + 4,lVar3);
        break;
      }
      lVar3 = (longlong)&UNK_180a2cb60 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar3]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_18049ef45;
      }
    }
  }
  *(int8_t *)(param_2 + 8) = 0;
  pcVar8 = "flags";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  puVar7 = *(uint64_t **)(param_3 + 0x30);
  do {
    if (puVar7 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_18049efd3:
      puStack_98 = &UNK_1809fcc58;
      puVar5 = auStack_80;
      iStack_88 = 0;
      auStack_80[0] = 0;
      puStack_90 = puVar5;
      if (lVar3 != 0) {
        iVar6 = 0;
        do {
          pcVar8 = "name";
          do {
            pcVar9 = pcVar8;
            pcVar8 = pcVar9 + 1;
          } while (*pcVar8 != '\0');
          for (puVar7 = *(uint64_t **)(lVar3 + 0x40); puVar7 != (uint64_t *)0x0;
              puVar7 = (uint64_t *)puVar7[6]) {
            pcVar8 = (char *)*puVar7;
            if (pcVar8 == (char *)0x0) {
              pcVar2 = (char *)0x0;
              pcVar8 = (char *)0x180d48d24;
            }
            else {
              pcVar2 = (char *)puVar7[2];
            }
            if (pcVar2 == pcVar9 + -0x180a03a83) {
              pcVar2 = pcVar2 + (longlong)pcVar8;
              if (pcVar2 <= pcVar8) {
LAB_18049f080:
                lVar4 = 0x180d48d24;
                if (puVar7[1] != 0) {
                  lVar4 = puVar7[1];
                }
                (**(code **)(puStack_98 + 0x10))(&puStack_98,lVar4);
                puVar5 = puStack_90;
                iVar6 = iStack_88;
                break;
              }
              lVar4 = (longlong)&DAT_180a03a84 - (longlong)pcVar8;
              while (*pcVar8 == pcVar8[lVar4]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar2 <= pcVar8) goto LAB_18049f080;
              }
            }
          }
          if (iVar6 == 8) {
            iVar1 = strcmp(puVar5,&UNK_180a0ae58);
            if (iVar1 == 0) {
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
            }
          }
          else if (iVar6 == 0xe) {
            iVar1 = strcmp(puVar5,&UNK_180a0ae48);
            if (iVar1 == 0) {
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
            }
          }
          lVar3 = *(longlong *)(lVar3 + 0x58);
        } while (lVar3 != 0);
      }
      puStack_98 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
    }
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar7[2];
    }
    if (pcVar2 == pcVar9 + -0x180a06b77) {
      pcVar2 = pcVar2 + (longlong)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_18049efc5:
        lVar3 = puVar7[6];
        goto LAB_18049efd3;
      }
      lVar3 = (longlong)&UNK_180a06b78 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar3]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_18049efc5;
      }
    }
    puVar7 = (uint64_t *)puVar7[0xb];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049f130(uint64_t param_1,longlong *param_2)
void FUN_18049f130(uint64_t param_1,longlong *param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x368,8,3,0xfffffffffffffffe);
  *puVar1 = &UNK_180a2e130;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = &UNK_180a2e120;
  puVar1[4] = 0;
  _DAT_180c8ece0 = puVar1;
  *(int32_t *)(puVar1 + 1) = 0;
  *(int8_t *)((longlong)puVar1 + 0xc) = 0;
                    // WARNING: Could not recover jumptable at 0x00018049f19a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 8))(param_2);
  return;
}





// 函数: void FUN_18049f1a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18049f1a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_30;
  uint64_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  puStack_28 = (uint64_t *)0x0;
  uStack_20 = 0;
  FUN_1806277c0(&puStack_30,0xd,param_3,param_4,0xfffffffffffffffe);
  *puStack_28 = 0x735f7463656a626f;
  *(int32_t *)(puStack_28 + 1) = 0x656b6168;
  *(int16_t *)((longlong)puStack_28 + 0xc) = 0x72;
  uStack_20 = 0xd;
  FUN_180354b70(&puStack_30,FUN_1804c60b0,_guard_check_icall);
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  puStack_28 = (uint64_t *)0x0;
  uStack_20 = 0;
  FUN_1806277c0(&puStack_30,0x13);
  *(int32_t *)puStack_28 = 0x6e696b73;
  *(int32_t *)((longlong)puStack_28 + 4) = 0x5f64656e;
  *(int32_t *)((longlong)puStack_28 + 8) = 0x6873656d;
  *(int32_t *)((longlong)puStack_28 + 0xc) = 0x6569765f;
  *(int32_t *)((longlong)puStack_28 + 0x10) = 0x726577;
  uStack_20 = 0x13;
  FUN_180354b70(&puStack_30,FUN_18049d2b0,FUN_1804a8e90);
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  puStack_28 = (uint64_t *)0x0;
  uStack_20 = 0;
  FUN_1806277c0(&puStack_30,0x1d);
  *(int32_t *)puStack_28 = 0x626d6f63;
  *(int32_t *)((longlong)puStack_28 + 4) = 0x705f7461;
  *(int32_t *)((longlong)puStack_28 + 8) = 0x69747261;
  *(int32_t *)((longlong)puStack_28 + 0xc) = 0x5f656c63;
  *(uint64_t *)((longlong)puStack_28 + 0x10) = 0x736e695f64697267;
  *(int32_t *)((longlong)puStack_28 + 0x18) = 0x636e6174;
  *(int16_t *)((longlong)puStack_28 + 0x1c) = 0x65;
  uStack_20 = 0x1d;
  FUN_180354b70(&puStack_30,FUN_18049d300,FUN_1804a9a20);
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  puStack_28 = (uint64_t *)0x0;
  uStack_20 = 0;
  FUN_1806277c0(&puStack_30,0xe);
  *puStack_28 = 0x5f726574736c6f68;
  *(int32_t *)(puStack_28 + 1) = 0x69726373;
  *(int16_t *)((longlong)puStack_28 + 0xc) = 0x7470;
  *(int8_t *)((longlong)puStack_28 + 0xe) = 0;
  uStack_20 = 0xe;
  FUN_180354b70(&puStack_30,FUN_18049d010,FUN_18049d150);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049f3b0(longlong param_1)
void FUN_18049f3b0(longlong param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  uint64_t uStack_90;
  longlong *plStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,3);
  uVar2 = FUN_1804c6e20(uVar2);
  *(uint64_t *)(_DAT_180c86950 + 0x1860) = uVar2;
  *(int32_t *)(param_1 + 0x410) = 0;
  plStack_a0 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3);
  *plStack_a0 = 0;
  plStack_88 = plStack_a0 + 2;
  *plStack_88 = (longlong)&UNK_18098bcb0;
  plStack_a0[3] = 0;
  *(int32_t *)(plStack_a0 + 4) = 0;
  *plStack_88 = (longlong)&UNK_180a3c3e0;
  plStack_a0[5] = 0;
  plStack_a0[3] = 0;
  *(int32_t *)(plStack_a0 + 4) = 0;
  *(longlong **)(param_1 + 0x418) = plStack_a0;
  FUN_1804c9a60(plStack_a0);
  uVar2 = _DAT_180c86930;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x12;
  strcpy_s(auStack_60,0x40,&UNK_180a2cb10);
  FUN_1800b08e0(uVar2,&plStack_a0,&puStack_78,0);
  plVar1 = plStack_a0;
  uStack_a8 = 1;
  puStack_78 = &UNK_18098bcb0;
  plStack_a0 = (longlong *)0x0;
  plStack_98 = *(longlong **)(_DAT_180c86890 + 0xed0);
  *(longlong **)(_DAT_180c86890 + 0xed0) = plVar1;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  uStack_a8 = 0;
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049f560(uint64_t param_1,int8_t *param_2)
void FUN_18049f560(uint64_t param_1,int8_t *param_2)

{
  *param_2 = 0;
  (**(code **)(*(longlong *)(param_2 + 8) + 0x10))(param_2 + 8,&DAT_1809ff500);
  (**(code **)(_DAT_180c924d0 + 0x10))(&DAT_180c924d0,&DAT_1809fd128);
  FUN_180627be0(param_2 + 0x80,&DAT_180c924d0);
  FUN_180627be0(param_2 + 0xa0,&DAT_180c924f0);
  param_2[0x7c] = 1;
  (**(code **)(*(longlong *)(param_2 + 0x38) + 0x10))(param_2 + 0x38,&UNK_180a2cbe8);
  (**(code **)(*(longlong *)(param_2 + 0x58) + 0x10))(param_2 + 0x58,&DAT_180a2cc08);
  *(int32_t *)(param_2 + 0x78) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049f600(uint64_t param_1,longlong param_2)
void FUN_18049f600(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x3090,8,3,0xfffffffffffffffe);
  *plVar2 = (longlong)&UNK_180a2d380;
  plVar2[1] = 0;
  FUN_1804d9b70(plVar2 + 2);
  FUN_1804ca350(plVar2 + 0x5a6,0x400);
  plVar1 = *(longlong **)(param_2 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,0);
  }
  *(longlong **)(param_2 + 0x3c0) = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2,param_2);
  FUN_1801be530(plVar2[1] + 0xe0,plVar2 + 2);
  FUN_1801be530(plVar2[1] + 0xe0,plVar2 + 0x5a6);
  *(int8_t *)(plVar2[1] + 0x60d08) = 1;
  return;
}





// 函数: void FUN_18049f6f0(uint64_t param_1,longlong param_2)
void FUN_18049f6f0(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x3c0);
  FUN_1804e0970(plVar1);
  plVar2 = *(longlong **)(param_2 + 0x3c0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,0);
  }
  *(uint64_t *)(param_2 + 0x3c0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049f7c0(uint64_t param_1,int param_2)
void FUN_18049f7c0(uint64_t param_1,int param_2)

{
  longlong **pplVar1;
  bool bVar2;
  uint64_t uVar3;
  longlong ***ppplVar4;
  longlong ***ppplStackX_10;
  longlong ***ppplStackX_18;
  longlong ****pppplStackX_20;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  void *puStack_48;
  void *puStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    uStack_30 = 0x18049f7cd;
    FUN_18018fb50();
    bVar2 = false;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    uStack_30 = 0x18049f7e7;
    (**(code **)(_DAT_180c8f008 + 0x58))();
    uStack_30 = 0x18049f7f1;
    (**(code **)(_DAT_180c8a9c0 + 0x58))();
    uStack_30 = 0x18049f7fe;
    (**(code **)(_DAT_180c8ece0 + 0xf8))();
    bVar2 = true;
  }
  uVar3 = _DAT_180c82868;
  if (!bVar2) {
    FUN_180544f90(&DAT_180c96110);
    func_0x000180539530();
    FUN_180538220();
    _DAT_180c91044 = sinf(_DAT_180c96380 * 0.017453292);
    _DAT_180c91040 = _DAT_180c96384;
    uStack_38 = 0x3f800000;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0x3f800000;
    uStack_c = 0;
    _DAT_180c96380 = (float)_DAT_180c91044;
    FUN_180085c10(&uStack_38,_DAT_180c964c0);
    FUN_180085970(&uStack_38,_DAT_180c964b8);
    FUN_180085ac0(&uStack_38,_DAT_180c964bc);
    FUN_18063b470(&uStack_58,&uStack_38);
    _DAT_180c96370 = uStack_58;
    uRam0000000180c96374 = uStack_54;
    uRam0000000180c96378 = uStack_50;
    uRam0000000180c9637c = uStack_4c;
    FUN_180570940(&DAT_180c960c0);
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    ppplStackX_18 = (longlong ***)&uStack_58;
    puStack_48 = &UNK_1804e3040;
    puStack_40 = &UNK_1804e3030;
    ppplVar4 = (longlong ***)FUN_18006b640(uVar3,&uStack_58);
    if (ppplVar4 != (longlong ***)0x0) {
      ppplStackX_10 = ppplVar4;
      (*(code *)(*ppplVar4)[5])(ppplVar4);
    }
    ppplStackX_10 = _DAT_180c96108;
    if (_DAT_180c96108 != (longlong ***)0x0) {
      pplVar1 = *_DAT_180c96108;
      _DAT_180c96108 = ppplVar4;
      (*(code *)pplVar1[7])();
      ppplVar4 = _DAT_180c96108;
    }
    _DAT_180c96108 = ppplVar4;
    _DAT_180c96108[3] = (longlong **)0xfffffffffffffffd;
    uVar3 = _DAT_180c82868;
    ppplStackX_18 = (longlong ***)&ppplStackX_10;
    ppplStackX_10 = _DAT_180c96108;
    if (_DAT_180c96108 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96108)[5])();
    }
    FUN_18005e110(uVar3,&ppplStackX_10);
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    ppplStackX_10 = (longlong ***)&uStack_58;
    puStack_48 = &UNK_1804e3010;
    puStack_40 = &UNK_1804e3000;
    ppplVar4 = (longlong ***)FUN_18006b640(uVar3,&uStack_58);
    if (ppplVar4 != (longlong ***)0x0) {
      ppplStackX_18 = ppplVar4;
      (*(code *)(*ppplVar4)[5])(ppplVar4);
    }
    ppplStackX_18 = _DAT_180c96148;
    if (_DAT_180c96148 != (longlong ***)0x0) {
      pplVar1 = *_DAT_180c96148;
      _DAT_180c96148 = ppplVar4;
      (*(code *)pplVar1[7])();
      ppplVar4 = _DAT_180c96148;
    }
    _DAT_180c96148 = ppplVar4;
    _DAT_180c96148[3] = (longlong **)0xfffffffffffffffd;
    uVar3 = _DAT_180c82868;
    ppplStackX_18 = (longlong ***)&ppplStackX_10;
    ppplStackX_10 = _DAT_180c96148;
    if (_DAT_180c96148 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96148)[5])();
    }
    FUN_18005e110(uVar3,&ppplStackX_10);
    return;
  }
  if (bVar2) {
    ppplStackX_18 = (longlong ***)&ppplStackX_10;
    ppplStackX_10 = _DAT_180c96108;
    if (_DAT_180c96108 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96108)[5])();
    }
    FUN_18005e6a0(uVar3,&ppplStackX_10,0);
    uVar3 = _DAT_180c82868;
    pppplStackX_20 = &ppplStackX_18;
    ppplStackX_18 = _DAT_180c96148;
    if (_DAT_180c96148 != (longlong ***)0x0) {
      (*(code *)(*_DAT_180c96148)[5])();
    }
    FUN_18005e6a0(uVar3,&ppplStackX_18,0);
    FUN_18054c430();
    (**(code **)(_DAT_180c8ece0 + 0x118))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



