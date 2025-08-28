#include "TaleWorlds.Native.Split.h"

// 03_rendering_part145.c - 2 个函数

// 函数: void FUN_180358b90(longlong param_1,longlong param_2)
void FUN_180358b90(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_6c8 [32];
  longlong *plStack_6a8;
  undefined8 uStack_6a0;
  undefined *puStack_698;
  undefined1 *puStack_690;
  undefined4 uStack_688;
  undefined1 auStack_680 [72];
  undefined *puStack_638;
  undefined1 *puStack_630;
  undefined4 uStack_628;
  undefined1 auStack_620 [72];
  undefined *puStack_5d8;
  undefined1 *puStack_5d0;
  undefined4 uStack_5c8;
  undefined1 auStack_5c0 [72];
  undefined *puStack_578;
  undefined1 *puStack_570;
  undefined4 uStack_568;
  undefined1 auStack_560 [72];
  undefined *puStack_518;
  undefined1 *puStack_510;
  undefined4 uStack_508;
  undefined1 auStack_500 [72];
  undefined *puStack_4b8;
  undefined1 *puStack_4b0;
  undefined4 uStack_4a8;
  undefined1 auStack_4a0 [72];
  undefined *puStack_458;
  undefined1 *puStack_450;
  undefined4 uStack_448;
  undefined1 auStack_440 [72];
  undefined *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined4 uStack_3e8;
  undefined1 auStack_3e0 [72];
  undefined *puStack_398;
  undefined1 *puStack_390;
  undefined4 uStack_388;
  undefined1 auStack_380 [72];
  undefined *puStack_338;
  undefined1 *puStack_330;
  int iStack_328;
  undefined1 auStack_320 [72];
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [72];
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [72];
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined4 uStack_208;
  undefined1 auStack_200 [72];
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [72];
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [72];
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [72];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_6a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_6c8;
  puStack_338 = &UNK_18098bc80;
  puStack_330 = auStack_320;
  auStack_320[0] = 0;
  iStack_328 = 8;
  strcpy_s(auStack_320,0x20,&DAT_180a1eb78);
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == iStack_328) {
    if (iVar3 == 0) {
LAB_180358c7e:
      if (iStack_328 != 0) goto LAB_180358c86;
      bVar7 = true;
    }
    else {
      pcVar4 = *(char **)(param_2 + 8);
      lVar6 = (longlong)puStack_330 - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar6];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      bVar7 = cVar1 == cVar2;
    }
  }
  else {
    if (iVar3 == 0) goto LAB_180358c7e;
LAB_180358c86:
    bVar7 = false;
  }
  puStack_338 = &UNK_18098bcb0;
  if (bVar7) {
    if (*(char *)(param_1 + 0xcb) == '\0') {
      if (*(char *)(param_1 + 0xc9) == '\0') {
        puStack_698 = &UNK_1809fcc58;
        puStack_690 = auStack_680;
        auStack_680[0] = 0;
        uStack_688 = 0x13;
        strcpy_s(auStack_680,0x40,&UNK_180a1ed70);
        puStack_698 = &UNK_18098bcb0;
        puStack_3f8 = &UNK_1809fcc58;
        puStack_3f0 = auStack_3e0;
        auStack_3e0[0] = 0;
        uStack_3e8 = 0x17;
        strcpy_s(auStack_3e0,0x40,&UNK_180a1ed58);
        puStack_3f8 = &UNK_18098bcb0;
        puStack_458 = &UNK_1809fcc58;
        puStack_450 = auStack_440;
        auStack_440[0] = 0;
        uStack_448 = 0x23;
        strcpy_s(auStack_440,0x40,&DAT_180a1eba8);
        puStack_458 = &UNK_18098bcb0;
        puStack_4b8 = &UNK_1809fcc58;
        puStack_4b0 = auStack_4a0;
        auStack_4a0[0] = 0;
        uStack_4a8 = 0x13;
        strcpy_s(auStack_4a0,0x40,&DAT_180a1eb48);
        puStack_4b8 = &UNK_18098bcb0;
        puStack_518 = &UNK_1809fcc58;
        puStack_510 = auStack_500;
        auStack_500[0] = 0;
        uStack_508 = 0x11;
        strcpy_s(auStack_500,0x40,&UNK_180a1ed88);
        puStack_518 = &UNK_18098bcb0;
        puStack_578 = &UNK_1809fcc58;
        puStack_570 = auStack_560;
        auStack_560[0] = 0;
        uStack_568 = 0x22;
        strcpy_s(auStack_560,0x40,&DAT_180a1ec30);
        puStack_578 = &UNK_18098bcb0;
        puStack_5d8 = &UNK_1809fcc58;
        puStack_5d0 = auStack_5c0;
        auStack_5c0[0] = 0;
        uStack_5c8 = 0x15;
        strcpy_s(auStack_5c0,0x40,&DAT_180a1ec18);
        puStack_5d8 = &UNK_18098bcb0;
        puStack_638 = &UNK_1809fcc58;
        puStack_630 = auStack_620;
        auStack_620[0] = 0;
        uStack_628 = 0x15;
        strcpy_s(auStack_620,0x40,&DAT_180a1ec58);
      }
      else {
        puStack_698 = &UNK_1809fcc58;
        puStack_690 = auStack_680;
        auStack_680[0] = 0;
        uStack_688 = 0x13;
        strcpy_s(auStack_680,0x40,&UNK_180a1ed70);
        puStack_698 = &UNK_18098bcb0;
        puStack_3f8 = &UNK_1809fcc58;
        puStack_3f0 = auStack_3e0;
        auStack_3e0[0] = 0;
        uStack_3e8 = 0x17;
        strcpy_s(auStack_3e0,0x40,&UNK_180a1ed58);
        puStack_3f8 = &UNK_18098bcb0;
        puStack_458 = &UNK_1809fcc58;
        puStack_450 = auStack_440;
        auStack_440[0] = 0;
        uStack_448 = 0x23;
        strcpy_s(auStack_440,0x40,&DAT_180a1eba8);
        puStack_458 = &UNK_18098bcb0;
        puStack_4b8 = &UNK_1809fcc58;
        puStack_4b0 = auStack_4a0;
        auStack_4a0[0] = 0;
        uStack_4a8 = 0x13;
        strcpy_s(auStack_4a0,0x40,&DAT_180a1eb48);
        puStack_4b8 = &UNK_18098bcb0;
        puStack_518 = &UNK_1809fcc58;
        puStack_510 = auStack_500;
        auStack_500[0] = 0;
        uStack_508 = 0x11;
        strcpy_s(auStack_500,0x40,&UNK_180a1ed88);
        puStack_518 = &UNK_18098bcb0;
        puStack_578 = &UNK_1809fcc58;
        puStack_570 = auStack_560;
        auStack_560[0] = 0;
        uStack_568 = 0x22;
        strcpy_s(auStack_560,0x40,&DAT_180a1ec30);
        puStack_578 = &UNK_18098bcb0;
        puStack_5d8 = &UNK_1809fcc58;
        puStack_5d0 = auStack_5c0;
        auStack_5c0[0] = 0;
        uStack_5c8 = 0x15;
        strcpy_s(auStack_5c0,0x40,&DAT_180a1ec18);
        puStack_5d8 = &UNK_18098bcb0;
        puStack_638 = &UNK_1809fcc58;
        puStack_630 = auStack_620;
        auStack_620[0] = 0;
        uStack_628 = 0x15;
        strcpy_s(auStack_620,0x40,&DAT_180a1ec58);
      }
      puStack_638 = &UNK_18098bcb0;
      puStack_698 = &UNK_1809fcc58;
      puStack_690 = auStack_680;
      auStack_680[0] = 0;
      uStack_688 = 9;
      strcpy_s(auStack_680,0x40,&DAT_180a1eb88);
      puStack_698 = &UNK_18098bcb0;
      puStack_3f8 = &UNK_1809fcc58;
      puStack_3f0 = auStack_3e0;
      auStack_3e0[0] = 0;
      uStack_3e8 = 0x12;
      strcpy_s(auStack_3e0,0x40,&DAT_180a1eb60);
      puStack_3f8 = &UNK_18098bcb0;
      puStack_458 = &UNK_1809fcc58;
      puStack_450 = auStack_440;
      auStack_440[0] = 0;
      uStack_448 = 0x15;
      strcpy_s(auStack_440,0x40,&DAT_180a1ecb8);
      puStack_458 = &UNK_18098bcb0;
      puStack_4b8 = &UNK_1809fcc58;
      puStack_4b0 = auStack_4a0;
      auStack_4a0[0] = 0;
      uStack_4a8 = 0x15;
      strcpy_s(auStack_4a0,0x40,&DAT_180a1eca0);
      puStack_4b8 = &UNK_18098bcb0;
      puStack_518 = &UNK_1809fcc58;
      puStack_510 = auStack_500;
      auStack_500[0] = 0;
      uStack_508 = 0x15;
      strcpy_s(auStack_500,0x40,&DAT_180a1ec88);
      puStack_518 = &UNK_18098bcb0;
      puStack_578 = &UNK_1809fcc58;
      puStack_570 = auStack_560;
      auStack_560[0] = 0;
      uStack_568 = 0x15;
      strcpy_s(auStack_560,0x40,&DAT_180a1ec70);
      puStack_578 = &UNK_18098bcb0;
      puStack_5d8 = &UNK_1809fcc58;
      puStack_5d0 = auStack_5c0;
      auStack_5c0[0] = 0;
      uStack_5c8 = 0x15;
      strcpy_s(auStack_5c0,0x40,&DAT_180a1ed30);
      puStack_5d8 = &UNK_18098bcb0;
      puStack_638 = &UNK_1809fcc58;
      puStack_630 = auStack_620;
      auStack_620[0] = 0;
      uStack_628 = 0x15;
      strcpy_s(auStack_620,0x40,&DAT_180a1ed18);
      puStack_638 = &UNK_18098bcb0;
      puStack_398 = &UNK_1809fcc58;
      puStack_390 = auStack_380;
      auStack_380[0] = 0;
      uStack_388 = 0x1a;
      strcpy_s(auStack_380,0x40,&DAT_180a1ecf8);
      puStack_398 = &UNK_18098bcb0;
      goto LAB_18035a6fd;
    }
    puStack_338 = &UNK_1809fcc58;
    puStack_330 = auStack_320;
    auStack_320[0] = 0;
    iStack_328 = 0x12;
    strcpy_s(auStack_320,0x40,&DAT_180a1eb60);
    puStack_338 = &UNK_18098bcb0;
    puStack_2d8 = &UNK_1809fcc58;
    puStack_2d0 = auStack_2c0;
    auStack_2c0[0] = 0;
    uStack_2c8 = 0x13;
    strcpy_s(auStack_2c0,0x40,&DAT_180a1eb48);
    puStack_2d8 = &UNK_18098bcb0;
    puStack_278 = &UNK_1809fcc58;
    puStack_270 = auStack_260;
    auStack_260[0] = 0;
    uStack_268 = 0x11;
    strcpy_s(auStack_260,0x40,&UNK_180a1ed88);
    puStack_278 = &UNK_18098bcb0;
    puStack_218 = &UNK_1809fcc58;
    puStack_210 = auStack_200;
    auStack_200[0] = 0;
    uStack_208 = 9;
    strcpy_s(auStack_200,0x40,&DAT_180a1eb88);
    puStack_218 = &UNK_18098bcb0;
    puStack_1b8 = &UNK_1809fcc58;
    puStack_1b0 = auStack_1a0;
    auStack_1a0[0] = 0;
    uStack_1a8 = 0x13;
    strcpy_s(auStack_1a0,0x40,&UNK_180a1ed70);
    puStack_1b8 = &UNK_18098bcb0;
    puStack_158 = &UNK_1809fcc58;
    puStack_150 = auStack_140;
    auStack_140[0] = 0;
    uStack_148 = 0x17;
    strcpy_s(auStack_140,0x40,&UNK_180a1ed58);
    puStack_158 = &UNK_18098bcb0;
    puStack_f8 = &UNK_1809fcc58;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 0x23;
    strcpy_s(auStack_e0,0x40,&DAT_180a1eba8);
    puStack_f8 = &UNK_18098bcb0;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x22;
    strcpy_s(auStack_80,0x40,&DAT_180a1ec30);
    puStack_98 = &UNK_18098bcb0;
    puStack_398 = &UNK_1809fcc58;
    puStack_390 = auStack_380;
    auStack_380[0] = 0;
    uStack_388 = 0x15;
    strcpy_s(auStack_380,0x40,&DAT_180a1ec18);
    puStack_398 = &UNK_18098bcb0;
    puStack_638 = &UNK_1809fcc58;
    puStack_630 = auStack_620;
    auStack_620[0] = 0;
    uStack_628 = 0x15;
    strcpy_s(auStack_620,0x40,&DAT_180a1ec58);
    puStack_638 = &UNK_18098bcb0;
    puStack_5d8 = &UNK_1809fcc58;
    puStack_5d0 = auStack_5c0;
    auStack_5c0[0] = 0;
    uStack_5c8 = 0x15;
    strcpy_s(auStack_5c0,0x40,&DAT_180a1ecb8);
    puStack_5d8 = &UNK_18098bcb0;
    puStack_578 = &UNK_1809fcc58;
    puStack_570 = auStack_560;
    auStack_560[0] = 0;
    uStack_568 = 0x15;
    strcpy_s(auStack_560,0x40,&DAT_180a1eca0);
    puStack_578 = &UNK_18098bcb0;
    puStack_518 = &UNK_1809fcc58;
    puStack_510 = auStack_500;
    auStack_500[0] = 0;
    uStack_508 = 0x15;
    strcpy_s(auStack_500,0x40,&DAT_180a1ec88);
    puStack_518 = &UNK_18098bcb0;
    puStack_4b8 = &UNK_1809fcc58;
    puStack_4b0 = auStack_4a0;
    auStack_4a0[0] = 0;
    uStack_4a8 = 0x15;
    strcpy_s(auStack_4a0,0x40,&DAT_180a1ec70);
    puStack_4b8 = &UNK_18098bcb0;
    puStack_458 = &UNK_1809fcc58;
    puStack_450 = auStack_440;
    auStack_440[0] = 0;
    uStack_448 = 0x15;
    strcpy_s(auStack_440,0x40,&DAT_180a1ed30);
    puStack_458 = &UNK_18098bcb0;
    puStack_3f8 = &UNK_1809fcc58;
    puStack_3f0 = auStack_3e0;
    auStack_3e0[0] = 0;
    uStack_3e8 = 0x15;
    strcpy_s(auStack_3e0,0x40,&DAT_180a1ed18);
    puStack_3f8 = &UNK_18098bcb0;
    puStack_698 = &UNK_1809fcc58;
    puStack_690 = auStack_680;
    auStack_680[0] = 0;
    uStack_688 = 0x1a;
    strcpy_s(auStack_680,0x40,&DAT_180a1ecf8);
  }
  else {
    puStack_338 = &UNK_18098bc80;
    puStack_330 = auStack_320;
    auStack_320[0] = 0;
    iStack_328 = 9;
    strcpy_s(auStack_320,0x20,&DAT_180a1eb88);
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 == iStack_328) {
      if (iVar3 == 0) {
LAB_180359b5e:
        if (iStack_328 != 0) goto LAB_180359b66;
        bVar7 = true;
      }
      else {
        pcVar4 = *(char **)(param_2 + 8);
        lVar6 = (longlong)puStack_330 - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar6];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        bVar7 = cVar1 == cVar2;
      }
    }
    else {
      if (iVar3 == 0) goto LAB_180359b5e;
LAB_180359b66:
      bVar7 = false;
    }
    puStack_338 = &UNK_18098bcb0;
    if (bVar7) {
      if (*(char *)(param_1 + 0xc9) == '\0') {
        puStack_698 = &UNK_1809fcc58;
        puStack_690 = auStack_680;
        auStack_680[0] = 0;
        uStack_688 = 0x13;
        strcpy_s(auStack_680,0x40,&UNK_180a1ed70);
        puStack_698 = &UNK_18098bcb0;
        puStack_3f8 = &UNK_1809fcc58;
        puStack_3f0 = auStack_3e0;
        auStack_3e0[0] = 0;
        uStack_3e8 = 0x17;
        strcpy_s(auStack_3e0,0x40,&UNK_180a1ed58);
        puStack_3f8 = &UNK_18098bcb0;
        puStack_458 = &UNK_1809fcc58;
        puStack_450 = auStack_440;
        auStack_440[0] = 0;
        uStack_448 = 0x23;
        strcpy_s(auStack_440,0x40,&DAT_180a1eba8);
        puStack_458 = &UNK_18098bcb0;
        puStack_4b8 = &UNK_1809fcc58;
        puStack_4b0 = auStack_4a0;
        auStack_4a0[0] = 0;
        uStack_4a8 = 0x12;
        strcpy_s(auStack_4a0,0x40,&DAT_180a1eb60);
        puStack_4b8 = &UNK_18098bcb0;
        puStack_518 = &UNK_1809fcc58;
        puStack_510 = auStack_500;
        auStack_500[0] = 0;
        uStack_508 = 0x13;
        strcpy_s(auStack_500,0x40,&DAT_180a1eb48);
        puStack_518 = &UNK_18098bcb0;
        puStack_578 = &UNK_1809fcc58;
        puStack_570 = auStack_560;
        auStack_560[0] = 0;
        uStack_568 = 0x11;
        strcpy_s(auStack_560,0x40,&UNK_180a1ed88);
        puStack_578 = &UNK_18098bcb0;
        puStack_5d8 = &UNK_1809fcc58;
        puStack_5d0 = auStack_5c0;
        auStack_5c0[0] = 0;
        uStack_5c8 = 0x22;
        strcpy_s(auStack_5c0,0x40,&DAT_180a1ec30);
        puStack_5d8 = &UNK_18098bcb0;
        puStack_638 = &UNK_1809fcc58;
        puStack_630 = auStack_620;
        auStack_620[0] = 0;
        uStack_628 = 0x15;
        strcpy_s(auStack_620,0x40,&DAT_180a1ec18);
        puStack_638 = &UNK_18098bcb0;
        puStack_398 = &UNK_1809fcc58;
        puStack_390 = auStack_380;
        auStack_380[0] = 0;
        uStack_388 = 0x15;
        strcpy_s(auStack_380,0x40,&DAT_180a1ec58);
        puStack_398 = &UNK_18098bcb0;
        puStack_98 = &UNK_1809fcc58;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = 0x15;
        strcpy_s(auStack_80,0x40,&DAT_180a1ecb8);
        puStack_98 = &UNK_18098bcb0;
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0x15;
        strcpy_s(auStack_e0,0x40,&DAT_180a1eca0);
        puStack_f8 = &UNK_18098bcb0;
        puStack_158 = &UNK_1809fcc58;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = 0x15;
        strcpy_s(auStack_140,0x40,&DAT_180a1ec88);
        puStack_158 = &UNK_18098bcb0;
        puStack_1b8 = &UNK_1809fcc58;
        puStack_1b0 = auStack_1a0;
        auStack_1a0[0] = 0;
        uStack_1a8 = 0x15;
        strcpy_s(auStack_1a0,0x40,&DAT_180a1ec70);
        puStack_1b8 = &UNK_18098bcb0;
        puStack_218 = &UNK_1809fcc58;
        puStack_210 = auStack_200;
        auStack_200[0] = 0;
        uStack_208 = 0x15;
        strcpy_s(auStack_200,0x40,&DAT_180a1ed30);
        puStack_218 = &UNK_18098bcb0;
        puStack_278 = &UNK_1809fcc58;
        puStack_270 = auStack_260;
        auStack_260[0] = 0;
        uStack_268 = 0x15;
        strcpy_s(auStack_260,0x40,&DAT_180a1ed18);
        puStack_278 = &UNK_18098bcb0;
        puStack_2d8 = &UNK_1809fcc58;
        puStack_2d0 = auStack_2c0;
        auStack_2c0[0] = 0;
        uStack_2c8 = 0x1a;
        strcpy_s(auStack_2c0,0x40,&DAT_180a1ecf8);
        puStack_2d8 = &UNK_18098bcb0;
      }
      else {
        puStack_698 = &UNK_1809fcc58;
        puStack_690 = auStack_680;
        auStack_680[0] = 0;
        uStack_688 = 0x13;
        strcpy_s(auStack_680,0x40,&UNK_180a1ed70);
        puStack_698 = &UNK_18098bcb0;
        puStack_3f8 = &UNK_1809fcc58;
        puStack_3f0 = auStack_3e0;
        auStack_3e0[0] = 0;
        uStack_3e8 = 0x17;
        strcpy_s(auStack_3e0,0x40,&UNK_180a1ed58);
        puStack_3f8 = &UNK_18098bcb0;
        puStack_458 = &UNK_1809fcc58;
        puStack_450 = auStack_440;
        auStack_440[0] = 0;
        uStack_448 = 0x23;
        strcpy_s(auStack_440,0x40,&DAT_180a1eba8);
        puStack_458 = &UNK_18098bcb0;
        puStack_4b8 = &UNK_1809fcc58;
        puStack_4b0 = auStack_4a0;
        auStack_4a0[0] = 0;
        uStack_4a8 = 0x12;
        strcpy_s(auStack_4a0,0x40,&DAT_180a1eb60);
        puStack_4b8 = &UNK_18098bcb0;
        puStack_518 = &UNK_1809fcc58;
        puStack_510 = auStack_500;
        auStack_500[0] = 0;
        uStack_508 = 0x13;
        strcpy_s(auStack_500,0x40,&DAT_180a1eb48);
        puStack_518 = &UNK_18098bcb0;
        puStack_578 = &UNK_1809fcc58;
        puStack_570 = auStack_560;
        auStack_560[0] = 0;
        uStack_568 = 0x11;
        strcpy_s(auStack_560,0x40,&UNK_180a1ed88);
        puStack_578 = &UNK_18098bcb0;
        puStack_5d8 = &UNK_1809fcc58;
        puStack_5d0 = auStack_5c0;
        auStack_5c0[0] = 0;
        uStack_5c8 = 0x22;
        strcpy_s(auStack_5c0,0x40,&DAT_180a1ec30);
        puStack_5d8 = &UNK_18098bcb0;
        puStack_638 = &UNK_1809fcc58;
        puStack_630 = auStack_620;
        auStack_620[0] = 0;
        uStack_628 = 0x15;
        strcpy_s(auStack_620,0x40,&DAT_180a1ec18);
        puStack_638 = &UNK_18098bcb0;
        puStack_398 = &UNK_1809fcc58;
        puStack_390 = auStack_380;
        auStack_380[0] = 0;
        uStack_388 = 0x15;
        strcpy_s(auStack_380,0x40,&DAT_180a1ec58);
        puStack_398 = &UNK_18098bcb0;
        puStack_98 = &UNK_1809fcc58;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = 0x15;
        strcpy_s(auStack_80,0x40,&DAT_180a1ecb8);
        puStack_98 = &UNK_18098bcb0;
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0x15;
        strcpy_s(auStack_e0,0x40,&DAT_180a1eca0);
        puStack_f8 = &UNK_18098bcb0;
        puStack_158 = &UNK_1809fcc58;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = 0x15;
        strcpy_s(auStack_140,0x40,&DAT_180a1ec88);
        puStack_158 = &UNK_18098bcb0;
        puStack_1b8 = &UNK_1809fcc58;
        puStack_1b0 = auStack_1a0;
        auStack_1a0[0] = 0;
        uStack_1a8 = 0x15;
        strcpy_s(auStack_1a0,0x40,&DAT_180a1ec70);
        puStack_1b8 = &UNK_18098bcb0;
        puStack_218 = &UNK_1809fcc58;
        puStack_210 = auStack_200;
        auStack_200[0] = 0;
        uStack_208 = 0x15;
        strcpy_s(auStack_200,0x40,&DAT_180a1ed30);
        puStack_218 = &UNK_18098bcb0;
        puStack_278 = &UNK_1809fcc58;
        puStack_270 = auStack_260;
        auStack_260[0] = 0;
        uStack_268 = 0x15;
        strcpy_s(auStack_260,0x40,&DAT_180a1ed18);
        puStack_278 = &UNK_18098bcb0;
        puStack_2d8 = &UNK_1809fcc58;
        puStack_2d0 = auStack_2c0;
        auStack_2c0[0] = 0;
        uStack_2c8 = 0x1a;
        strcpy_s(auStack_2c0,0x40,&DAT_180a1ecf8);
        puStack_2d8 = &UNK_18098bcb0;
      }
      goto LAB_18035a6fd;
    }
    puStack_698 = &UNK_1809fcc58;
    puStack_690 = auStack_680;
    auStack_680[0] = 0;
    uStack_688 = 0x21;
    strcpy_s(auStack_680,0x40,&DAT_180a1ecd0);
  }
  puStack_698 = &UNK_18098bcb0;
LAB_18035a6fd:
  puVar5 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_6a8,
                         param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x108) = *puVar5;
  if (plStack_6a8 != (longlong *)0x0) {
    (**(code **)(*plStack_6a8 + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_180358b30(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_6c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035a770(longlong param_1)
void FUN_18035a770(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,0xd);
  plVar6 = (longlong *)FUN_1802e6b00(uVar5,4);
  plStackX_10 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (plVar6[0x4d] == 0) {
    FUN_180170ac0(plVar6,&UNK_180a0ba98);
  }
  FUN_1802ea790(plVar6,&DAT_180a00300);
  pplStackX_20 = &plStackX_8;
  plStackX_8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  FUN_180198b90(uVar3,&plStackX_8,1,1,0,1,0);
  plStackX_10 = (longlong *)0x0;
  plStackX_18 = *(longlong **)(param_1 + 0x118);
  *(longlong **)(param_1 + 0x118) = plVar6;
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  FUN_180170ac0(*(undefined8 *)(param_1 + 0x118),&UNK_180a1ed48);
  lVar7 = *(longlong *)(param_1 + 0x118);
  uVar1 = *(uint *)(lVar7 + 0x2ac);
  *(uint *)(lVar7 + 0x2ac) = uVar1 | 0x2020000;
  FUN_1802ee810(lVar7,uVar1);
  lVar2 = *(longlong *)(lVar7 + 0x260);
  if ((lVar2 != 0) && (((*(uint *)(lVar7 + 0x2ac) ^ uVar1) >> 0x16 & 1) != 0)) {
    bVar8 = ~(byte)(*(uint *)(lVar7 + 0x2ac) >> 0x16) & 1;
    iVar4 = (int)(*(longlong *)(lVar2 + 0x1b0) - *(longlong *)(lVar2 + 0x1a8) >> 3);
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        plVar6 = *(longlong **)(*(longlong *)(lVar2 + 0x1a8) + lVar7 * 8);
        (**(code **)(*plVar6 + 0xe0))(plVar6,bVar8);
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
    cVar9 = '\0';
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        lVar7 = 0;
        lVar10 = (longlong)cVar9 * 0x100 + *(longlong *)(lVar2 + 0x18);
        iVar4 = (int)(*(longlong *)(lVar10 + 0xb8) - *(longlong *)(lVar10 + 0xb0) >> 3);
        if (0 < iVar4) {
          do {
            plVar6 = *(longlong **)(*(longlong *)(lVar10 + 0xb0) + lVar7 * 8);
            (**(code **)(*plVar6 + 0xe0))(plVar6,bVar8);
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar4);
        }
        cVar9 = cVar9 + '\x01';
      } while (cVar9 < *(char *)(lVar2 + 0x20));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



