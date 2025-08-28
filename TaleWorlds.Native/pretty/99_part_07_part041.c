#include "TaleWorlds.Native.Split.h"

// 99_part_07_part041.c - 13 个函数

// 函数: void FUN_1804c13d0(float *param_1,float *param_2,longlong param_3,undefined1 param_4)
void FUN_1804c13d0(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while ((0xe0 < (longlong)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    fVar10 = *param_1;
    fVar2 = param_2[-2];
    fVar3 = param_1[(lVar7 >> 1) * 2];
    fVar5 = fVar3;
    pfVar9 = param_1 + (lVar7 >> 1) * 2;
    pfVar8 = param_1;
    fVar4 = fVar10;
    if (fVar3 < fVar10) {
      fVar5 = fVar10;
      pfVar9 = param_1;
      pfVar8 = param_1 + (lVar7 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar8 = pfVar9, fVar2 < fVar5)) {
      pfVar8 = param_2 + -2;
    }
    fVar2 = *pfVar8;
    pfVar9 = param_2;
    pfVar8 = param_1;
    while( true ) {
      while (fVar2 < fVar10) {
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 2;
        fVar10 = *pfVar1;
      }
      pfVar9 = pfVar9 + -2;
      if (*pfVar9 <= fVar2 && fVar2 != *pfVar9) {
        do {
          pfVar9 = pfVar9 + -2;
        } while (*pfVar9 <= fVar2 && fVar2 != *pfVar9);
      }
      if (pfVar9 <= pfVar8) break;
      fVar10 = pfVar8[1];
      fVar3 = *pfVar8;
      *pfVar8 = *pfVar9;
      pfVar8[1] = pfVar9[1];
      pfVar8 = pfVar8 + 2;
      *pfVar9 = fVar3;
      pfVar9[1] = fVar10;
      fVar10 = *pfVar8;
    }
    param_3 = param_3 + -1;
    FUN_1804c13d0(pfVar8,param_2,param_3,param_4);
    uVar6 = (longlong)pfVar8 - (longlong)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_1804c1a00(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1804c13dd(float *param_1,float *param_2,longlong param_3,undefined1 param_4)
void FUN_1804c13dd(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  
  uVar6 = in_RAX - (longlong)param_1;
  while ((0xe0 < (longlong)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    fVar10 = *param_1;
    fVar2 = param_2[-2];
    fVar3 = param_1[(lVar7 >> 1) * 2];
    fVar5 = fVar3;
    pfVar9 = param_1 + (lVar7 >> 1) * 2;
    pfVar8 = param_1;
    fVar4 = fVar10;
    if (fVar3 < fVar10) {
      fVar5 = fVar10;
      pfVar9 = param_1;
      pfVar8 = param_1 + (lVar7 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar8 = pfVar9, fVar2 < fVar5)) {
      pfVar8 = param_2 + -2;
    }
    fVar2 = *pfVar8;
    pfVar9 = param_2;
    pfVar8 = param_1;
    while( true ) {
      while (fVar2 < fVar10) {
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 2;
        fVar10 = *pfVar1;
      }
      pfVar9 = pfVar9 + -2;
      if (*pfVar9 <= fVar2 && fVar2 != *pfVar9) {
        do {
          pfVar9 = pfVar9 + -2;
        } while (*pfVar9 <= fVar2 && fVar2 != *pfVar9);
      }
      if (pfVar9 <= pfVar8) break;
      fVar10 = pfVar8[1];
      fVar3 = *pfVar8;
      *pfVar8 = *pfVar9;
      pfVar8[1] = pfVar9[1];
      pfVar8 = pfVar8 + 2;
      *pfVar9 = fVar3;
      pfVar9[1] = fVar10;
      fVar10 = *pfVar8;
    }
    param_3 = param_3 + -1;
    FUN_1804c13d0(pfVar8,param_2,param_3,param_4);
    uVar6 = (longlong)pfVar8 - (longlong)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_1804c1a00(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1804c1402(undefined4 param_1)
void FUN_1804c1402(undefined4 param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  float *unaff_RSI;
  float *pfVar8;
  float *in_R10;
  float fVar9;
  
  do {
    pfVar8 = in_R10;
    if (unaff_RBP < 1) break;
    lVar6 = (longlong)in_R10 - (longlong)unaff_RSI >> 3;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    fVar9 = *unaff_RSI;
    fVar2 = in_R10[-2];
    fVar3 = unaff_RSI[(lVar6 >> 1) * 2];
    fVar5 = fVar3;
    pfVar8 = unaff_RSI + (lVar6 >> 1) * 2;
    pfVar7 = unaff_RSI;
    fVar4 = fVar9;
    if (fVar3 < fVar9) {
      fVar5 = fVar9;
      pfVar8 = unaff_RSI;
      pfVar7 = unaff_RSI + (lVar6 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar7 = pfVar8, fVar2 < fVar5)) {
      pfVar7 = in_R10 + -2;
    }
    fVar2 = *pfVar7;
    pfVar7 = in_R10;
    pfVar8 = unaff_RSI;
    while( true ) {
      while (fVar2 < fVar9) {
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 2;
        fVar9 = *pfVar1;
      }
      pfVar7 = pfVar7 + -2;
      if (*pfVar7 <= fVar2 && fVar2 != *pfVar7) {
        do {
          pfVar7 = pfVar7 + -2;
        } while (*pfVar7 <= fVar2 && fVar2 != *pfVar7);
      }
      if (pfVar7 <= pfVar8) break;
      fVar9 = pfVar8[1];
      fVar3 = *pfVar8;
      *pfVar8 = *pfVar7;
      pfVar8[1] = pfVar7[1];
      pfVar8 = pfVar8 + 2;
      *pfVar7 = fVar3;
      pfVar7[1] = fVar9;
      fVar9 = *pfVar8;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_1804c13d0(pfVar8,in_R10,unaff_RBP,unaff_BL);
    in_R10 = pfVar8;
  } while (0xe0 < (longlong)((longlong)pfVar8 - (longlong)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_RBP == 0) {
    FUN_1804c1a00(param_1,pfVar8,pfVar8,unaff_BL);
  }
  return;
}






// 函数: void FUN_1804c14e5(void)
void FUN_1804c14e5(void)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1804c1a00();
  }
  return;
}






// 函数: void FUN_1804c14ef(void)
void FUN_1804c14ef(void)

{
  FUN_1804c1a00();
  return;
}






// 函数: void FUN_1804c1510(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)
void FUN_1804c1510(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  pbVar8 = (byte *)*param_3;
  if ((&UNK_180a2f000)[*pbVar8] != '\0') {
    do {
      lVar6 = 0;
      pbVar7 = pbVar8 + 1;
      *param_3 = (longlong)pbVar7;
      cVar2 = (&UNK_180a2f000)[*pbVar7];
      while (cVar2 != '\0') {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        cVar2 = (&UNK_180a2f000)[*pbVar1];
      }
      *param_3 = (longlong)pbVar7;
      if (pbVar7 == pbVar8) {
        pbStack_68 = pbVar8;
        uStack_60 = param_2;
        FUN_18062e140(&UNK_180a2ebe8,&pbStack_68);
      }
      plVar4 = (longlong *)FUN_1804c1300(param_1 + 0x60,0x38);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      lVar5 = *param_3;
      *plVar4 = (longlong)pbVar8;
      plVar4[2] = lVar5 - (longlong)pbVar8;
      if (*(longlong *)(param_4 + 0x40) == 0) {
        plVar4[5] = 0;
        *(longlong **)(param_4 + 0x40) = plVar4;
      }
      else {
        plVar4[5] = *(longlong *)(param_4 + 0x48);
        *(longlong **)(*(longlong *)(param_4 + 0x48) + 0x30) = plVar4;
      }
      *(longlong **)(param_4 + 0x48) = plVar4;
      plVar4[4] = param_4;
      plVar4[6] = 0;
      pbVar8 = (byte *)*param_3;
      cVar2 = (&UNK_180a2f500)[*pbVar8];
      while (cVar2 != '\0') {
        pbVar7 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        cVar2 = (&UNK_180a2f500)[*pbVar7];
      }
      *param_3 = (longlong)pbVar8;
      if (*pbVar8 != 0x3d) {
        pbStack_58 = pbVar8;
        uStack_50 = param_2;
        FUN_18062e140(&UNK_180a2ebd8,&pbStack_58);
        pbVar8 = (byte *)*param_3;
      }
      *param_3 = (longlong)(pbVar8 + 1);
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        lVar5 = 0x180d48d24;
      }
      else {
        lVar6 = plVar4[2];
      }
      *(undefined1 *)(lVar5 + lVar6) = 0;
      pbVar8 = (byte *)*param_3;
      cVar2 = (&UNK_180a2f500)[*pbVar8];
      while (cVar2 != '\0') {
        pbVar7 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        cVar2 = (&UNK_180a2f500)[*pbVar7];
      }
      *param_3 = (longlong)pbVar8;
      bVar3 = *pbVar8;
      if ((bVar3 != 0x27) && (bVar3 != 0x22)) {
        pbStack_48 = pbVar8;
        uStack_40 = param_2;
        FUN_18062e140(&UNK_180a2eb80,&pbStack_48);
        pbVar8 = (byte *)*param_3;
      }
      pbVar8 = pbVar8 + 1;
      *param_3 = (longlong)pbVar8;
      if (bVar3 == 0x27) {
        lVar6 = FUN_1804c1d00();
      }
      else {
        lVar6 = FUN_1804c1f50(param_2,param_3);
      }
      plVar4[1] = (longlong)pbVar8;
      plVar4[3] = lVar6 - (longlong)pbVar8;
      pbVar8 = (byte *)*param_3;
      if (*pbVar8 != bVar3) {
        pbStack_38 = pbVar8;
        uStack_30 = param_2;
        FUN_18062e140(&UNK_180a2eb80,&pbStack_38);
        pbVar8 = (byte *)*param_3;
      }
      lVar5 = 0;
      *param_3 = (longlong)(pbVar8 + 1);
      lVar6 = plVar4[1];
      if (lVar6 == 0) {
        lVar6 = 0x180d48d24;
      }
      else {
        lVar5 = plVar4[3];
      }
      *(undefined1 *)(lVar6 + lVar5) = 0;
      pbVar8 = (byte *)*param_3;
      cVar2 = (&UNK_180a2f500)[*pbVar8];
      while (cVar2 != '\0') {
        pbVar7 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        cVar2 = (&UNK_180a2f500)[*pbVar7];
      }
      *param_3 = (longlong)pbVar8;
    } while ((&UNK_180a2f000)[*pbVar8] != '\0');
  }
  return;
}






// 函数: void FUN_1804c1544(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1804c1544(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6,undefined8 param_7,byte *param_8,
                  undefined8 param_9,byte *param_10)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBP;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R12;
  do {
    lVar6 = 0;
    pbVar7 = unaff_RBX + 1;
    *unaff_RDI = (longlong)pbVar7;
    cVar2 = *(char *)((ulonglong)*pbVar7 + 0xa2f000 + unaff_R13);
    while (cVar2 != '\0') {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      cVar2 = *(char *)((ulonglong)*pbVar1 + 0xa2f000 + unaff_R13);
    }
    *unaff_RDI = (longlong)pbVar7;
    if (pbVar7 == unaff_RBX) {
      param_5 = unaff_R14;
      FUN_18062e140(&UNK_180a2ebe8,&stack0x00000020,param_3,param_4,unaff_RBX);
    }
    plVar4 = (longlong *)FUN_1804c1300(param_1 + 0x60,0x38);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    lVar5 = *unaff_RDI;
    *plVar4 = (longlong)unaff_RBX;
    plVar4[2] = lVar5 - (longlong)unaff_RBX;
    if (*(longlong *)(unaff_R15 + 0x40) == 0) {
      plVar4[5] = 0;
      *(longlong **)(unaff_R15 + 0x40) = plVar4;
    }
    else {
      plVar4[5] = *(longlong *)(unaff_R15 + 0x48);
      *(longlong **)(*(longlong *)(unaff_R15 + 0x48) + 0x30) = plVar4;
    }
    *(longlong **)(unaff_R15 + 0x48) = plVar4;
    plVar4[4] = unaff_R15;
    plVar4[6] = 0;
    pbVar7 = (byte *)*unaff_RDI;
    cVar2 = *(char *)((ulonglong)*pbVar7 + 0xa2f500 + unaff_R13);
    while (cVar2 != '\0') {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      cVar2 = *(char *)((ulonglong)*pbVar1 + 0xa2f500 + unaff_R13);
    }
    *unaff_RDI = (longlong)pbVar7;
    if (*pbVar7 != 0x3d) {
      param_6 = pbVar7;
      FUN_18062e140(&UNK_180a2ebd8,&param_6);
      pbVar7 = (byte *)*unaff_RDI;
    }
    *unaff_RDI = (longlong)(pbVar7 + 1);
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      lVar5 = 0x180d48d24;
    }
    else {
      lVar6 = plVar4[2];
    }
    *(undefined1 *)(lVar5 + lVar6) = 0;
    pbVar7 = (byte *)*unaff_RDI;
    cVar2 = *(char *)((ulonglong)*pbVar7 + 0xa2f500 + unaff_R13);
    while (cVar2 != '\0') {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      cVar2 = *(char *)((ulonglong)*pbVar1 + 0xa2f500 + unaff_R13);
    }
    *unaff_RDI = (longlong)pbVar7;
    bVar3 = *pbVar7;
    if ((bVar3 != 0x27) && (bVar3 != 0x22)) {
      param_8 = pbVar7;
      FUN_18062e140(&UNK_180a2eb80,&param_8);
      pbVar7 = (byte *)*unaff_RDI;
    }
    pbVar7 = pbVar7 + 1;
    *unaff_RDI = (longlong)pbVar7;
    if (bVar3 == 0x27) {
      lVar6 = FUN_1804c1d00();
    }
    else {
      lVar6 = FUN_1804c1f50();
    }
    plVar4[1] = (longlong)pbVar7;
    plVar4[3] = lVar6 - (longlong)pbVar7;
    pbVar7 = (byte *)*unaff_RDI;
    if (*pbVar7 != bVar3) {
      param_10 = pbVar7;
      FUN_18062e140(&UNK_180a2eb80,&param_10);
      pbVar7 = (byte *)*unaff_RDI;
    }
    lVar5 = 0;
    *unaff_RDI = (longlong)(pbVar7 + 1);
    lVar6 = plVar4[1];
    if (lVar6 == 0) {
      lVar6 = 0x180d48d24;
    }
    else {
      lVar5 = plVar4[3];
    }
    *(undefined1 *)(lVar6 + lVar5) = 0;
    unaff_RBX = (byte *)*unaff_RDI;
    cVar2 = *(char *)((ulonglong)*unaff_RBX + 0xa2f500 + unaff_R13);
    while (cVar2 != '\0') {
      pbVar7 = unaff_RBX + 1;
      unaff_RBX = unaff_RBX + 1;
      cVar2 = *(char *)((ulonglong)*pbVar7 + 0xa2f500 + unaff_R13);
    }
    *unaff_RDI = (longlong)unaff_RBX;
  } while (*(char *)((ulonglong)*unaff_RBX + 0xa2f000 + unaff_R13) != '\0');
  return;
}






// 函数: void FUN_1804c178f(void)
void FUN_1804c178f(void)

{
  return;
}






// 函数: void FUN_1804c17a0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)
void FUN_1804c17a0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte bVar7;
  char *pcVar8;
  byte *pbStack_38;
  undefined8 uStack_30;
  
LAB_1804c17e0:
  pbVar3 = (byte *)*param_3;
  cVar2 = (&UNK_180a2f500)[*pbVar3];
  pbVar4 = pbVar3;
  while (cVar2 != '\0') {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    cVar2 = (&UNK_180a2f500)[*pbVar1];
  }
  *param_3 = (longlong)pbVar4;
  bVar7 = *pbVar4;
  do {
    if (bVar7 == 0) {
      pbStack_38 = (byte *)*param_3;
      uStack_30 = param_2;
      FUN_18062e140(&UNK_180a2eaf8,&pbStack_38);
    }
    else if (bVar7 == 0x3c) break;
    *param_3 = (longlong)pbVar3;
    puVar6 = (undefined1 *)FUN_1804c22a0(param_2,param_3);
    pcVar8 = (char *)0x180d48d24;
    if (*(char **)(param_4 + 8) != (char *)0x0) {
      pcVar8 = *(char **)(param_4 + 8);
    }
    if (*pcVar8 == '\0') {
      *(byte **)(param_4 + 8) = pbVar3;
      *(longlong *)(param_4 + 0x18) = (longlong)puVar6 - (longlong)pbVar3;
    }
    bVar7 = *(byte *)*param_3;
    *puVar6 = 0;
  } while( true );
  lVar5 = *param_3;
  if (*(char *)(lVar5 + 1) == '/') {
    pbStack_38 = (byte *)(lVar5 + 2);
    *param_3 = (longlong)pbStack_38;
    cVar2 = (&UNK_180a2f300)[*pbStack_38];
    while (cVar2 != '\0') {
      pbVar3 = pbStack_38 + 1;
      pbStack_38 = pbStack_38 + 1;
      cVar2 = (&UNK_180a2f300)[*pbVar3];
    }
    *param_3 = (longlong)pbStack_38;
    cVar2 = (&UNK_180a2f500)[*pbStack_38];
    while (cVar2 != '\0') {
      pbVar3 = pbStack_38 + 1;
      pbStack_38 = pbStack_38 + 1;
      cVar2 = (&UNK_180a2f500)[*pbVar3];
    }
    *param_3 = (longlong)pbStack_38;
    if (*pbStack_38 == 0x3e) {
      *param_3 = (longlong)(pbStack_38 + 1);
    }
    else {
      uStack_30 = param_2;
      FUN_18062e140(&UNK_180a2eb10,&pbStack_38);
      *param_3 = *param_3 + 1;
    }
    return;
  }
  *param_3 = lVar5 + 1;
  lVar5 = FUN_1804c0770(param_1,param_2,param_3);
  if (lVar5 != 0) {
    if (*(longlong *)(param_4 + 0x30) == 0) {
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(longlong *)(param_4 + 0x30) = lVar5;
      *(longlong *)(param_4 + 0x38) = lVar5;
      *(longlong *)(lVar5 + 0x20) = param_4;
      *(undefined8 *)(lVar5 + 0x58) = 0;
    }
    else {
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(param_4 + 0x38);
      *(longlong *)(*(longlong *)(param_4 + 0x38) + 0x58) = lVar5;
      *(longlong *)(param_4 + 0x38) = lVar5;
      *(longlong *)(lVar5 + 0x20) = param_4;
      *(undefined8 *)(lVar5 + 0x58) = 0;
    }
  }
  goto LAB_1804c17e0;
}



undefined8 * FUN_1804c1980(undefined8 param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined8 *)FUN_1804c1300(param_1,0x38);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar3 = param_2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    *puVar2 = param_2;
    puVar2[2] = (longlong)pcVar3 - (longlong)param_2;
  }
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    puVar2[1] = param_3;
    puVar2[3] = (longlong)pcVar3 - (longlong)param_3;
  }
  return puVar2;
}






// 函数: void FUN_1804c1a00(float *param_1,float *param_2,float *param_3)
void FUN_1804c1a00(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (1 < lVar9) {
    lVar7 = (lVar9 + -2 >> 1) + 1;
    lVar6 = lVar7 * 2 + 2;
    do {
      fVar1 = param_1[lVar7 * 2 + -2];
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + -2;
      fVar2 = param_1[lVar7 * 2 + 1];
      lVar5 = lVar7;
      lVar4 = lVar6;
      while (lVar4 < lVar9) {
        lVar3 = lVar4 + -1;
        if (param_1[lVar4 * 2] < param_1[lVar4 * 2 + -2] ||
            param_1[lVar4 * 2] == param_1[lVar4 * 2 + -2]) {
          lVar3 = lVar4;
        }
        param_1[lVar5 * 2] = param_1[lVar3 * 2];
        param_1[lVar5 * 2 + 1] = param_1[lVar3 * 2 + 1];
        lVar5 = lVar3;
        lVar4 = lVar3 * 2 + 2;
      }
      if (lVar4 == lVar9) {
        param_1[lVar5 * 2] = param_1[lVar4 * 2 + -2];
        param_1[lVar5 * 2 + 1] = param_1[lVar4 * 2 + -1];
        lVar5 = lVar4 + -1;
      }
      while (lVar7 < lVar5) {
        lVar4 = lVar5 + -1 >> 1;
        if (param_1[lVar4 * 2] <= fVar1) break;
        param_1[lVar5 * 2] = param_1[lVar4 * 2];
        param_1[lVar5 * 2 + 1] = param_1[lVar4 * 2 + 1];
        lVar5 = lVar4;
      }
      param_1[lVar5 * 2] = fVar1;
      param_1[lVar5 * 2 + 1] = fVar2;
    } while (lVar7 != 0);
  }
  pfVar8 = param_2;
  if (param_2 < param_3) {
    do {
      if (*param_1 < *pfVar8) {
        fVar1 = *pfVar8;
        lVar6 = 0;
        fVar2 = pfVar8[1];
        lVar7 = 2;
        *pfVar8 = *param_1;
        pfVar8[1] = param_1[1];
        bVar10 = lVar9 == 2;
        lVar5 = lVar6;
        if (2 < lVar9) {
          do {
            lVar6 = lVar7 + -1;
            if (param_1[lVar7 * 2] < param_1[lVar7 * 2 + -2] ||
                param_1[lVar7 * 2] == param_1[lVar7 * 2 + -2]) {
              lVar6 = lVar7;
            }
            lVar7 = lVar6 * 2 + 2;
            param_1[lVar5 * 2] = param_1[lVar6 * 2];
            param_1[lVar5 * 2 + 1] = param_1[lVar6 * 2 + 1];
            bVar10 = lVar7 == lVar9;
            lVar5 = lVar6;
          } while (lVar7 < lVar9);
        }
        if (bVar10) {
          param_1[lVar6 * 2] = param_1[lVar7 * 2 + -2];
          param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + -1];
          lVar6 = lVar7 + -1;
        }
        while (0 < lVar6) {
          lVar7 = lVar6 + -1 >> 1;
          if (param_1[lVar7 * 2] <= fVar1) break;
          param_1[lVar6 * 2] = param_1[lVar7 * 2];
          param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + 1];
          lVar6 = lVar7;
        }
        param_1[lVar6 * 2] = fVar1;
        param_1[lVar6 * 2 + 1] = fVar2;
      }
      pfVar8 = pfVar8 + 2;
    } while (pfVar8 < param_3);
  }
  if (1 < lVar9) {
    param_2 = param_2 + -2;
    do {
      lVar9 = lVar9 + -1;
      fVar1 = *param_2;
      lVar6 = 0;
      fVar2 = param_2[1];
      lVar7 = 2;
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      bVar10 = lVar9 == 2;
      lVar5 = lVar6;
      if (2 < lVar9) {
        do {
          lVar6 = lVar7 + -1;
          if (param_1[lVar7 * 2] < param_1[lVar7 * 2 + -2] ||
              param_1[lVar7 * 2] == param_1[lVar7 * 2 + -2]) {
            lVar6 = lVar7;
          }
          lVar7 = lVar6 * 2 + 2;
          param_1[lVar5 * 2] = param_1[lVar6 * 2];
          param_1[lVar5 * 2 + 1] = param_1[lVar6 * 2 + 1];
          bVar10 = lVar7 == lVar9;
          lVar5 = lVar6;
        } while (lVar7 < lVar9);
      }
      if (bVar10) {
        param_1[lVar6 * 2] = param_1[lVar7 * 2 + -2];
        param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + -1];
        lVar6 = lVar7 + -1;
      }
      while (0 < lVar6) {
        lVar9 = lVar6 + -1 >> 1;
        if (param_1[lVar9 * 2] <= fVar1) break;
        param_1[lVar6 * 2] = param_1[lVar9 * 2];
        param_1[lVar6 * 2 + 1] = param_1[lVar9 * 2 + 1];
        lVar6 = lVar9;
      }
      param_2 = param_2 + -2;
      param_1[lVar6 * 2] = fVar1;
      param_1[lVar6 * 2 + 1] = fVar2;
      lVar9 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar9);
  }
  return;
}






// 函数: void FUN_1804c1a09(float *param_1,float *param_2,float *param_3)
void FUN_1804c1a09(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong in_R11;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = in_R11 - (longlong)param_1 >> 3;
  if (1 < lVar9) {
    lVar7 = (lVar9 + -2 >> 1) + 1;
    lVar6 = lVar7 * 2 + 2;
    do {
      fVar1 = param_1[lVar7 * 2 + -2];
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + -2;
      fVar2 = param_1[lVar7 * 2 + 1];
      lVar5 = lVar7;
      lVar4 = lVar6;
      while (lVar4 < lVar9) {
        lVar3 = lVar4 + -1;
        if (param_1[lVar4 * 2] < param_1[lVar4 * 2 + -2] ||
            param_1[lVar4 * 2] == param_1[lVar4 * 2 + -2]) {
          lVar3 = lVar4;
        }
        param_1[lVar5 * 2] = param_1[lVar3 * 2];
        param_1[lVar5 * 2 + 1] = param_1[lVar3 * 2 + 1];
        lVar5 = lVar3;
        lVar4 = lVar3 * 2 + 2;
      }
      if (lVar4 == lVar9) {
        param_1[lVar5 * 2] = param_1[lVar4 * 2 + -2];
        param_1[lVar5 * 2 + 1] = param_1[lVar4 * 2 + -1];
        lVar5 = lVar4 + -1;
      }
      while (lVar7 < lVar5) {
        lVar4 = lVar5 + -1 >> 1;
        if (param_1[lVar4 * 2] <= fVar1) break;
        param_1[lVar5 * 2] = param_1[lVar4 * 2];
        param_1[lVar5 * 2 + 1] = param_1[lVar4 * 2 + 1];
        lVar5 = lVar4;
      }
      param_1[lVar5 * 2] = fVar1;
      param_1[lVar5 * 2 + 1] = fVar2;
    } while (lVar7 != 0);
  }
  pfVar8 = param_2;
  if (param_2 < param_3) {
    do {
      if (*param_1 < *pfVar8) {
        fVar1 = *pfVar8;
        lVar6 = 0;
        fVar2 = pfVar8[1];
        lVar7 = 2;
        *pfVar8 = *param_1;
        pfVar8[1] = param_1[1];
        bVar10 = lVar9 == 2;
        lVar5 = lVar6;
        if (2 < lVar9) {
          do {
            lVar6 = lVar7 + -1;
            if (param_1[lVar7 * 2] < param_1[lVar7 * 2 + -2] ||
                param_1[lVar7 * 2] == param_1[lVar7 * 2 + -2]) {
              lVar6 = lVar7;
            }
            lVar7 = lVar6 * 2 + 2;
            param_1[lVar5 * 2] = param_1[lVar6 * 2];
            param_1[lVar5 * 2 + 1] = param_1[lVar6 * 2 + 1];
            bVar10 = lVar7 == lVar9;
            lVar5 = lVar6;
          } while (lVar7 < lVar9);
        }
        if (bVar10) {
          param_1[lVar6 * 2] = param_1[lVar7 * 2 + -2];
          param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + -1];
          lVar6 = lVar7 + -1;
        }
        while (0 < lVar6) {
          lVar7 = lVar6 + -1 >> 1;
          if (param_1[lVar7 * 2] <= fVar1) break;
          param_1[lVar6 * 2] = param_1[lVar7 * 2];
          param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + 1];
          lVar6 = lVar7;
        }
        param_1[lVar6 * 2] = fVar1;
        param_1[lVar6 * 2 + 1] = fVar2;
      }
      pfVar8 = pfVar8 + 2;
    } while (pfVar8 < param_3);
  }
  if (1 < lVar9) {
    param_2 = param_2 + -2;
    do {
      lVar9 = lVar9 + -1;
      fVar1 = *param_2;
      lVar6 = 0;
      fVar2 = param_2[1];
      lVar7 = 2;
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      bVar10 = lVar9 == 2;
      lVar5 = lVar6;
      if (2 < lVar9) {
        do {
          lVar6 = lVar7 + -1;
          if (param_1[lVar7 * 2] < param_1[lVar7 * 2 + -2] ||
              param_1[lVar7 * 2] == param_1[lVar7 * 2 + -2]) {
            lVar6 = lVar7;
          }
          lVar7 = lVar6 * 2 + 2;
          param_1[lVar5 * 2] = param_1[lVar6 * 2];
          param_1[lVar5 * 2 + 1] = param_1[lVar6 * 2 + 1];
          bVar10 = lVar7 == lVar9;
          lVar5 = lVar6;
        } while (lVar7 < lVar9);
      }
      if (bVar10) {
        param_1[lVar6 * 2] = param_1[lVar7 * 2 + -2];
        param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + -1];
        lVar6 = lVar7 + -1;
      }
      while (0 < lVar6) {
        lVar9 = lVar6 + -1 >> 1;
        if (param_1[lVar9 * 2] <= fVar1) break;
        param_1[lVar6 * 2] = param_1[lVar9 * 2];
        param_1[lVar6 * 2 + 1] = param_1[lVar9 * 2 + 1];
        lVar6 = lVar9;
      }
      param_2 = param_2 + -2;
      param_1[lVar6 * 2] = fVar1;
      param_1[lVar6 * 2 + 1] = fVar2;
      lVar9 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar9);
  }
  return;
}






// 函数: void FUN_1804c1c02(void)
void FUN_1804c1c02(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong lVar5;
  float *in_R9;
  float *pfVar6;
  longlong in_R11;
  longlong lVar7;
  bool bVar8;
  
  pfVar6 = (float *)(unaff_RSI + -8);
  do {
    lVar7 = in_R11 + -1;
    fVar1 = *pfVar6;
    lVar3 = 0;
    fVar2 = pfVar6[1];
    lVar5 = 2;
    *pfVar6 = *in_R9;
    pfVar6[1] = in_R9[1];
    bVar8 = lVar7 == 2;
    lVar4 = lVar3;
    if (2 < lVar7) {
      do {
        lVar3 = lVar5 + -1;
        if (in_R9[lVar5 * 2] < in_R9[lVar5 * 2 + -2] || in_R9[lVar5 * 2] == in_R9[lVar5 * 2 + -2]) {
          lVar3 = lVar5;
        }
        lVar5 = lVar3 * 2 + 2;
        in_R9[lVar4 * 2] = in_R9[lVar3 * 2];
        in_R9[lVar4 * 2 + 1] = in_R9[lVar3 * 2 + 1];
        bVar8 = lVar5 == lVar7;
        lVar4 = lVar3;
      } while (lVar5 < lVar7);
    }
    if (bVar8) {
      in_R9[lVar3 * 2] = in_R9[lVar5 * 2 + -2];
      in_R9[lVar3 * 2 + 1] = in_R9[lVar5 * 2 + -1];
      lVar3 = lVar5 + -1;
    }
    while (0 < lVar3) {
      lVar5 = lVar3 + -1 >> 1;
      if (in_R9[lVar5 * 2] <= fVar1) break;
      in_R9[lVar3 * 2] = in_R9[lVar5 * 2];
      in_R9[lVar3 * 2 + 1] = in_R9[lVar5 * 2 + 1];
      lVar3 = lVar5;
    }
    pfVar6 = pfVar6 + -2;
    in_R9[lVar3 * 2] = fVar1;
    in_R9[lVar3 * 2 + 1] = fVar2;
    in_R11 = (8 - (longlong)in_R9) + (longlong)pfVar6 >> 3;
    if (in_R11 < 2) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804c1d00(undefined8 param_1,undefined8 *param_2)
void FUN_1804c1d00(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbStackX_10;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  pbVar6 = (byte *)*param_2;
  cVar2 = (&UNK_180a2ec00)[*pbVar6];
  while (cVar2 != '\0') {
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    cVar2 = (&UNK_180a2ec00)[*pbVar1];
  }
  *param_2 = pbVar6;
  uVar5 = (ulonglong)*pbVar6;
  cVar2 = (&UNK_180a2f100)[uVar5];
  pbStackX_10 = pbVar6;
  do {
    if (cVar2 == '\0') {
      *param_2 = pbVar6;
      return;
    }
    bVar4 = (byte)uVar5;
    if (bVar4 == 0x26) {
      bVar3 = pbVar6[1];
      if (bVar3 != 0x23) {
        if (bVar3 == 0x61) {
          if (pbVar6[2] == 0x6d) {
            if ((pbVar6[3] != 0x70) || (pbVar6[4] != 0x3b)) {
LAB_1804c1e36:
              bVar4 = 0x26;
              goto LAB_1804c1e38;
            }
            *pbStackX_10 = 0x26;
            pbVar6 = pbVar6 + 5;
          }
          else {
            if ((((pbVar6[2] != 0x70) || (pbVar6[3] != 0x6f)) || (pbVar6[4] != 0x73)) ||
               (pbVar6[5] != 0x3b)) goto LAB_1804c1e36;
            *pbStackX_10 = 0x27;
            pbVar6 = pbVar6 + 6;
          }
        }
        else if (bVar3 == 0x67) {
          if ((pbVar6[2] != 0x74) || (pbVar6[3] != 0x3b)) goto LAB_1804c1e36;
          *pbStackX_10 = 0x3e;
          pbVar6 = pbVar6 + 4;
        }
        else if (bVar3 == 0x6c) {
          if ((pbVar6[2] != 0x74) || (pbVar6[3] != 0x3b)) goto LAB_1804c1e36;
          *pbStackX_10 = 0x3c;
          pbVar6 = pbVar6 + 4;
        }
        else {
          if (bVar3 != 0x71) goto LAB_1804c1e38;
          if ((((pbVar6[2] != 0x75) || (pbVar6[3] != 0x6f)) || (pbVar6[4] != 0x74)) ||
             (pbVar6[5] != 0x3b)) goto LAB_1804c1e36;
          *pbStackX_10 = 0x22;
          pbVar6 = pbVar6 + 6;
        }
        goto LAB_1804c1e40;
      }
      pbVar1 = pbVar6 + 2;
      iVar7 = 0;
      if (*pbVar1 == 0x78) {
        pbVar1 = pbVar6 + 3;
        pbVar6 = pbVar6 + 3;
        bVar4 = (&UNK_180a2f400)[*pbVar1];
        while (bVar4 != 0xff) {
          pbVar6 = pbVar6 + 1;
          iVar7 = iVar7 * 0x10 + (uint)bVar4;
          bVar4 = (&UNK_180a2f400)[*pbVar6];
        }
      }
      else {
        pbVar6 = pbVar6 + 2;
        bVar4 = (&UNK_180a2f400)[*pbVar1];
        while (bVar4 != 0xff) {
          pbVar6 = pbVar6 + 1;
          iVar7 = (uint)bVar4 + iVar7 * 10;
          bVar4 = (&UNK_180a2f400)[*pbVar6];
        }
      }
      FUN_1804c21a0(param_1,&pbStackX_10,iVar7);
      if (*pbVar6 == 0x3b) {
        pbVar6 = pbVar6 + 1;
      }
      else {
        uStack_18 = *param_2;
        uStack_10 = param_1;
        FUN_18062e140(&UNK_180a2ebb8,&uStack_18);
      }
    }
    else {
LAB_1804c1e38:
      pbVar6 = pbVar6 + 1;
      *pbStackX_10 = bVar4;
LAB_1804c1e40:
      pbStackX_10 = pbStackX_10 + 1;
    }
    uVar5 = (ulonglong)*pbVar6;
    cVar2 = (&UNK_180a2f100)[*pbVar6];
  } while( true );
}






