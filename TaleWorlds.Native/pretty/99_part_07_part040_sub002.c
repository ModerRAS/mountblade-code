#include "TaleWorlds.Native.Split.h"

// 99_part_07_part040_sub002.c - 1 个函数

// 函数: void FUN_1804c12a0(undefined8 param_1,undefined4 param_2,char *param_3)
void FUN_1804c12a0(undefined8 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  puVar2 = (undefined8 *)FUN_1804c1300(param_1,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = param_2;
  puVar2[6] = 0;
  puVar2[8] = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    *puVar2 = param_3;
    puVar2[2] = (longlong)pcVar3 - (longlong)param_3;
  }
  return;
}



longlong FUN_1804c1300(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (ulonglong)(-(int)param_1[1] & 7) + param_1[1];
  if ((ulonglong)param_1[2] < lVar3 + param_2) {
    uVar2 = param_2;
    if (param_2 < 0x3ffeb) {
      uVar2 = 0x3ffea;
    }
    if ((code *)param_1[0x603] == (code *)0x0) {
      lVar3 = thunk_FUN_1808fc418(uVar2 + 0x16);
      if (lVar3 == 0) {
        FUN_18062e140(&UNK_180a2ebc8,0);
      }
    }
    else {
      lVar3 = (*(code *)param_1[0x603])();
    }
    plVar1 = (longlong *)((ulonglong)(-(int)lVar3 & 7) + lVar3);
    *plVar1 = *param_1;
    plVar1 = plVar1 + 1;
    *param_1 = lVar3;
    param_1[2] = lVar3 + uVar2 + 0x16;
    lVar3 = (ulonglong)(-(int)plVar1 & 7) + (longlong)plVar1;
  }
  param_1[1] = lVar3 + param_2;
  return lVar3;
}



longlong FUN_1804c132d(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  
  if (param_2 < 0x3ffeb) {
    param_2 = 0x3ffea;
  }
  if (*(code **)(param_1 + 0x3018) == (code *)0x0) {
    lVar1 = thunk_FUN_1808fc418(param_2 + 0x16);
    if (lVar1 == 0) {
      FUN_18062e140(&UNK_180a2ebc8,0);
    }
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x3018))();
  }
  plVar2 = (longlong *)((ulonglong)(-(int)lVar1 & 7) + lVar1);
  *plVar2 = *unaff_RDI;
  plVar2 = plVar2 + 1;
  *unaff_RDI = lVar1;
  unaff_RDI[2] = lVar1 + param_2 + 0x16;
  lVar1 = (ulonglong)(-(int)plVar2 & 7) + (longlong)plVar2;
  unaff_RDI[1] = lVar1 + unaff_RBP;
  return lVar1;
}



longlong FUN_1804c13b3(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(longlong *)(unaff_RDI + 8) = param_3 + unaff_RBP;
  return param_3;
}







