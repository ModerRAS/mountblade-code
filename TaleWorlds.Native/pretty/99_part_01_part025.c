#include "TaleWorlds.Native.Split.h"

// 99_part_01_part025.c - 30 个函数

// 函数: void FUN_1800b8a10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b8a10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800b9030(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800b8a30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b8a30(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800b9210(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_1800b94f0(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}






// 函数: void FUN_1800b8a90(longlong param_1)
void FUN_1800b8a90(longlong param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800b9210(param_1,*puVar1);
    FUN_1800b94f0(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  *(longlong *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(longlong *)(param_1 + 8) = param_1;
  return;
}






// 函数: void FUN_1800b8aa6(void)
void FUN_1800b8aa6(void)

{
  FUN_1800b9210();
  FUN_1800b94f0();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800b8adc(void)
void FUN_1800b8adc(void)

{
  longlong unaff_RBX;
  
  *(longlong *)unaff_RBX = unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x10) = 0;
  *(int8_t *)(unaff_RBX + 0x18) = 0;
  *(uint64_t *)(unaff_RBX + 0x20) = 0;
  *(longlong *)(unaff_RBX + 8) = unaff_RBX;
  return;
}






// 函数: void FUN_1800b8b00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b8b00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800b9270(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8b20(longlong *param_1)
void FUN_1800b8b20(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  uVar2 = (longlong)plVar3 - (longlong)plVar5 >> 3;
  if (0x18 < uVar2) {
    plVar1 = plVar5 + 0x19;
    if (plVar1 != plVar3) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x38))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3);
      plVar5 = (longlong *)*param_1;
    }
    param_1[1] = (longlong)(plVar5 + 0x19);
    return;
  }
  uVar4 = 0x19 - uVar2;
  if ((ulonglong)(param_1[2] - (longlong)plVar3 >> 3) < uVar4) {
    uVar6 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar6 = 1;
    }
    if (uVar6 < uVar2 + uVar4) {
      uVar6 = uVar2 + uVar4;
    }
    plVar1 = (longlong *)0x0;
    plVar7 = plVar1;
    if (uVar6 != 0) {
      plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
      plVar5 = (longlong *)*param_1;
      plVar3 = (longlong *)param_1[1];
      plVar7 = plVar1;
    }
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *plVar1 = *plVar5;
      plVar1 = plVar1 + 1;
      *plVar5 = 0;
    }
    uVar2 = uVar4;
    plVar5 = plVar1;
    if (uVar4 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
      }
    }
    plVar5 = (longlong *)param_1[1];
    plVar3 = (longlong *)*param_1;
    if (plVar3 != plVar5) {
      do {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar5);
      plVar3 = (longlong *)*param_1;
    }
    if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar3);
    }
    *param_1 = (longlong)plVar7;
    param_1[2] = (longlong)(plVar7 + uVar6);
    param_1[1] = (longlong)(plVar1 + uVar4);
    return;
  }
  uVar2 = uVar4;
  if (uVar4 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *plVar3 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar3 = (longlong *)param_1[1];
  }
  param_1[1] = (longlong)(plVar3 + uVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8b4a(longlong param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1800b8b4a(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  longlong *plVar1;
  longlong in_RAX;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t *unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  uint64_t *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  
  uVar4 = 0x19 - param_1;
  if (uVar4 <= (ulonglong)(in_RAX - (longlong)unaff_RBX >> 3)) {
    uVar7 = uVar4;
    if (uVar4 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *unaff_RBX = 0;
        unaff_RBX = unaff_RBX + 1;
      }
      unaff_RBX = (uint64_t *)unaff_RSI[1];
    }
    unaff_RSI[1] = (longlong)(unaff_RBX + uVar4);
    return;
  }
  uVar7 = param_1 * 2;
  if (param_1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 < param_1 + uVar4) {
    uVar7 = param_1 + uVar4;
  }
  puVar2 = (uint64_t *)0x0;
  puVar8 = puVar2;
  if (uVar7 != 0) {
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,uVar7 * 8,(char)unaff_RSI[3]);
    param_3 = (uint64_t *)*unaff_RSI;
    unaff_RBX = (uint64_t *)unaff_RSI[1];
    puVar8 = puVar2;
  }
  for (; param_3 != unaff_RBX; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
    *param_3 = 0;
  }
  uVar3 = uVar4;
  puVar5 = puVar2;
  if (uVar4 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  plVar1 = (longlong *)unaff_RSI[1];
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (longlong *)*unaff_RSI;
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
  *unaff_RSI = (longlong)puVar8;
  unaff_RSI[2] = (longlong)(puVar8 + uVar7);
  unaff_RSI[1] = (longlong)(puVar2 + uVar4);
  return;
}






// 函数: void FUN_1800b8c45(void)
void FUN_1800b8c45(void)

{
  longlong lVar1;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = unaff_RBP;
  if (unaff_RBP != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
    }
    unaff_RBX = *(uint64_t **)(unaff_RSI + 8);
  }
  *(uint64_t **)(unaff_RSI + 8) = unaff_RBX + unaff_RBP;
  return;
}






// 函数: void FUN_1800b8c6e(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1800b8c6e(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong *unaff_RBX;
  longlong *unaff_RSI;
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_3 + 200);
  if (plVar1 != unaff_RBX) {
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != unaff_RBX);
    param_3 = *unaff_RSI;
  }
  unaff_RSI[1] = param_3 + 200;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8cb0(uint64_t *param_1,ulonglong param_2)
void FUN_1800b8cb0(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)plVar4 >> 3) < param_2) {
    plVar1 = (longlong *)0x0;
    if (param_2 != 0) {
      plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,param_2 * 8,*(int8_t *)(param_1 + 3));
      plVar4 = (longlong *)*param_1;
    }
    plVar3 = (longlong *)param_1[1];
    plVar2 = plVar1;
    if (plVar4 != plVar3) {
      do {
        *plVar2 = *plVar4;
        plVar2 = plVar2 + 1;
        *plVar4 = 0;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      plVar3 = (longlong *)param_1[1];
      plVar4 = (longlong *)*param_1;
    }
    if (plVar4 != plVar3) {
      do {
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar4 + 0x38))();
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      plVar4 = (longlong *)*param_1;
    }
    if (plVar4 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar4);
    }
    *param_1 = plVar1;
    param_1[1] = plVar2;
    param_1[2] = plVar1 + param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8cd6(longlong param_1,longlong param_2)
void FUN_1800b8cd6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong *plVar3;
  longlong *unaff_RDI;
  uint64_t *unaff_R14;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,param_2 * 8,*(int8_t *)(param_1 + 0x18));
    unaff_RDI = (longlong *)*unaff_R14;
  }
  plVar3 = (longlong *)unaff_R14[1];
  plVar2 = plVar1;
  if (unaff_RDI != plVar3) {
    do {
      *plVar2 = *unaff_RDI;
      plVar2 = plVar2 + 1;
      *unaff_RDI = 0;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar3);
    plVar3 = (longlong *)unaff_R14[1];
    unaff_RDI = (longlong *)*unaff_R14;
  }
  if (unaff_RDI != plVar3) {
    do {
      if ((longlong *)*unaff_RDI != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_RDI + 0x38))();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar3);
    unaff_RDI = (longlong *)*unaff_R14;
  }
  if (unaff_RDI == (longlong *)0x0) {
    *unaff_R14 = plVar1;
    unaff_R14[1] = plVar2;
    unaff_R14[2] = plVar1 + unaff_RBP;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8cdb(longlong param_1,longlong param_2)
void FUN_1800b8cdb(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong *plVar3;
  longlong *unaff_RDI;
  uint64_t *unaff_R14;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,param_2 * 8,*(int8_t *)(param_1 + 0x18));
    unaff_RDI = (longlong *)*unaff_R14;
  }
  plVar3 = (longlong *)unaff_R14[1];
  plVar2 = plVar1;
  if (unaff_RDI != plVar3) {
    do {
      *plVar2 = *unaff_RDI;
      plVar2 = plVar2 + 1;
      *unaff_RDI = 0;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar3);
    plVar3 = (longlong *)unaff_R14[1];
    unaff_RDI = (longlong *)*unaff_R14;
  }
  if (unaff_RDI != plVar3) {
    do {
      if ((longlong *)*unaff_RDI != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_RDI + 0x38))();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar3);
    unaff_RDI = (longlong *)*unaff_R14;
  }
  if (unaff_RDI == (longlong *)0x0) {
    *unaff_R14 = plVar1;
    unaff_R14[1] = plVar2;
    unaff_R14[2] = plVar1 + unaff_RBP;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8ce0(longlong param_1,longlong param_2)
void FUN_1800b8ce0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong *plVar3;
  longlong *unaff_RDI;
  uint64_t *unaff_R14;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,param_2 * 8,*(int8_t *)(param_1 + 0x18));
    unaff_RDI = (longlong *)*unaff_R14;
  }
  plVar3 = (longlong *)unaff_R14[1];
  plVar2 = plVar1;
  if (unaff_RDI != plVar3) {
    do {
      *plVar2 = *unaff_RDI;
      plVar2 = plVar2 + 1;
      *unaff_RDI = 0;
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar3);
    plVar3 = (longlong *)unaff_R14[1];
    unaff_RDI = (longlong *)*unaff_R14;
  }
  if (unaff_RDI != plVar3) {
    do {
      if ((longlong *)*unaff_RDI != (longlong *)0x0) {
        (**(code **)(*(longlong *)*unaff_RDI + 0x38))();
      }
      unaff_RDI = unaff_RDI + 1;
    } while (unaff_RDI != plVar3);
    unaff_RDI = (longlong *)*unaff_R14;
  }
  if (unaff_RDI == (longlong *)0x0) {
    *unaff_R14 = plVar1;
    unaff_R14[1] = plVar2;
    unaff_R14[2] = plVar1 + unaff_RBP;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RDI);
}






// 函数: void FUN_1800b8d50(void)
void FUN_1800b8d50(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  longlong unaff_R15;
  
  do {
    if ((longlong *)*unaff_RDI != (longlong *)0x0) {
      (**(code **)(*(longlong *)*unaff_RDI + 0x38))();
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI != unaff_RSI);
  if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*unaff_R14);
  }
  *unaff_R14 = unaff_R15;
  unaff_R14[1] = unaff_RBX;
  unaff_R14[2] = unaff_R15 + unaff_RBP * 8;
  return;
}






// 函数: void FUN_1800b8d74(void)
void FUN_1800b8d74(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800b8d95(void)
void FUN_1800b8d95(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b8da0(longlong *param_1,ulonglong param_2)
void FUN_1800b8da0(longlong *param_1,ulonglong param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  puVar6 = (uint64_t *)param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - (longlong)puVar6) / 0x28)) {
    if (param_2 != 0) {
      puVar5 = puVar6 + 2;
      uVar10 = param_2;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 0x12;
        puVar6 = puVar6 + 5;
        puVar5 = puVar5 + 5;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar6 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar6 + param_2 * 5);
    return;
  }
  puVar5 = (uint64_t *)*param_1;
  lVar9 = ((longlong)puVar6 - (longlong)puVar5) / 0x28;
  uVar10 = lVar9 * 2;
  if (lVar9 == 0) {
    uVar10 = 1;
  }
  if (uVar10 < lVar9 + param_2) {
    uVar10 = lVar9 + param_2;
  }
  puVar3 = (int32_t *)0x0;
  if (uVar10 != 0) {
    puVar3 = (int32_t *)
             FUN_18062b420(_DAT_180c8ed18,uVar10 * 0x28,(char)param_1[3],puVar5,0xfffffffffffffffe);
    puVar6 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
  }
  puVar4 = puVar3;
  if (puVar5 != puVar6) {
    lVar9 = (longlong)puVar3 - (longlong)puVar5;
    puVar5 = puVar5 + 4;
    do {
      *puVar4 = *(int32_t *)(puVar5 + -4);
      puVar8 = (uint64_t *)((longlong)puVar5 + lVar9 + -0x18);
      *puVar8 = 0;
      *(uint64_t *)(lVar9 + -0x10 + (longlong)puVar5) = 0;
      *(uint64_t *)(lVar9 + -8 + (longlong)puVar5) = 0;
      *(int32_t *)(lVar9 + (longlong)puVar5) = *(int32_t *)puVar5;
      uVar2 = *puVar8;
      *puVar8 = puVar5[-3];
      puVar5[-3] = uVar2;
      uVar2 = *(uint64_t *)(lVar9 + -0x10 + (longlong)puVar5);
      *(uint64_t *)(lVar9 + -0x10 + (longlong)puVar5) = puVar5[-2];
      puVar5[-2] = uVar2;
      uVar2 = *(uint64_t *)(lVar9 + -8 + (longlong)puVar5);
      *(uint64_t *)(lVar9 + -8 + (longlong)puVar5) = puVar5[-1];
      puVar5[-1] = uVar2;
      uVar1 = *(int32_t *)(lVar9 + (longlong)puVar5);
      *(int32_t *)(lVar9 + (longlong)puVar5) = *(int32_t *)puVar5;
      *(int32_t *)puVar5 = uVar1;
      puVar4 = puVar4 + 10;
      puVar8 = puVar5 + 1;
      puVar5 = puVar5 + 5;
    } while (puVar8 != puVar6);
  }
  if (param_2 != 0) {
    puVar6 = (uint64_t *)(puVar4 + 4);
    uVar7 = param_2;
    do {
      puVar6[-2] = 0;
      *(int32_t *)((longlong)puVar6 + 0x14) = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(int32_t *)(puVar6 + 2) = 0x12;
      puVar6 = puVar6 + 5;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar9 = *param_1;
  if (lVar9 != param_1[1]) {
    do {
      if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != param_1[1]);
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar4 + param_2 * 10);
    param_1[2] = (longlong)(puVar3 + uVar10 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar9);
}






// 函数: void FUN_1800b9030(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b9030(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800b9030(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_180057830();
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800b90a0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             uint *param_5)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar2, *(uint *)(plVar2 + 4) < *param_5)) {
LAB_1800b910f:
      uVar5 = 0;
      goto LAB_1800b9112;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_4);
    if ((*(uint *)(param_4 + 4) < *param_5) && (*param_5 < *(uint *)(plVar2 + 4))) {
      if (*param_4 == 0) goto LAB_1800b910f;
      uVar5 = 1;
      param_4 = plVar2;
LAB_1800b9112:
      if (param_4 != (longlong *)0x0) {
        FUN_1800b9330(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar2 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
    do {
      plVar2 = plVar3;
      bVar6 = *param_5 < *(uint *)(plVar2 + 4);
      if (bVar6) {
        plVar3 = (longlong *)plVar2[1];
      }
      else {
        plVar3 = (longlong *)*plVar2;
      }
    } while (plVar3 != (longlong *)0x0);
  }
  plVar3 = plVar2;
  if (bVar6) {
    if (plVar2 == (longlong *)param_1[1]) {
      uVar1 = *param_5;
      goto LAB_1800b917a;
    }
    plVar3 = (longlong *)func_0x00018066b9a0(plVar2);
  }
  uVar1 = *param_5;
  if (uVar1 <= *(uint *)(plVar3 + 4)) {
    *param_2 = plVar3;
    return param_2;
  }
LAB_1800b917a:
  if ((plVar2 == param_1) || (uVar1 < *(uint *)(plVar2 + 4))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  *(uint *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(int32_t *)(lVar4 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar2,param_1,uVar5);
}






// 函数: void FUN_1800b9210(uint64_t param_1,uint64_t *param_2)
void FUN_1800b9210(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800b9210(param_1,*param_2);
    FUN_1800b94f0(param_2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}






// 函数: void FUN_1800b9222(uint64_t param_1)
void FUN_1800b9222(uint64_t param_1)

{
  uint64_t *unaff_RBX;
  
  FUN_1800b9210(param_1,*unaff_RBX);
  FUN_1800b94f0();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800b9266(void)
void FUN_1800b9266(void)

{
  return;
}






// 函数: void FUN_1800b9270(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b9270(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800b9270(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((longlong *)param_2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[5] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}






// 函数: void FUN_1800b92f0(longlong *param_1,longlong *param_2)
void FUN_1800b92f0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((longlong *)*param_1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_1 + 0x38))();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b9330(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1800b9330(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) && (*(uint *)(param_3 + 0x20) <= *param_5))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(uint *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(int32_t *)(lVar1 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}






// 函数: void FUN_1800b9400(uint64_t *param_1,uint64_t *param_2)
void FUN_1800b9400(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  double dVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  if (param_1 != param_2) {
    for (puVar6 = param_1 + 2; puVar6 != param_2; puVar6 = puVar6 + 2) {
      uVar1 = *puVar6;
      dVar2 = (double)puVar6[1];
      puVar5 = puVar6;
      puVar4 = puVar6;
      while ((puVar4 != param_1 && ((double)puVar4[-1] <= dVar2 && dVar2 != (double)puVar4[-1]))) {
        uVar3 = puVar4[-1];
        *puVar5 = puVar4[-2];
        puVar5[1] = uVar3;
        puVar5 = puVar5 + -2;
        puVar4 = puVar4 + -2;
      }
      *puVar5 = uVar1;
      puVar5[1] = dVar2;
    }
  }
  return;
}






// 函数: void FUN_1800b9470(uint64_t *param_1,uint64_t *param_2)
void FUN_1800b9470(uint64_t *param_1,uint64_t *param_2)

{
  float fVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  if (param_1 != param_2) {
    for (puVar5 = param_1 + 2; puVar5 != param_2; puVar5 = puVar5 + 2) {
      uVar2 = *puVar5;
      fVar1 = *(float *)(puVar5 + 1);
      puVar4 = puVar5;
      puVar3 = puVar5;
      while ((puVar3 != param_1 &&
             (*(float *)(puVar3 + -1) <= fVar1 && fVar1 != *(float *)(puVar3 + -1)))) {
        *puVar4 = puVar3[-2];
        *(int32_t *)(puVar4 + 1) = *(int32_t *)(puVar3 + -1);
        puVar4 = puVar4 + -2;
        puVar3 = puVar3 + -2;
      }
      *(float *)(puVar4 + 1) = fVar1;
      *puVar4 = uVar2;
    }
  }
  return;
}



longlong FUN_1800b94f0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x20) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x20) = &unknown_var_720_ptr;
  return param_1;
}






// 函数: void FUN_1800b9570(longlong param_1)
void FUN_1800b9570(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  for (plVar2 = *(longlong **)(param_1 + 8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800b95a0(longlong param_1)
void FUN_1800b95a0(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  }
  return;
}






// 函数: void FUN_1800b95d0(int32_t *param_1,int32_t *param_2,longlong param_3,int8_t param_4)
void FUN_1800b95d0(int32_t *param_1,int32_t *param_2,longlong param_3,int8_t param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  double dVar12;
  ulonglong uVar13;
  longlong lVar14;
  int32_t *puVar15;
  int32_t *puVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  
  uVar13 = (longlong)param_2 - (longlong)param_1;
  while ((0x1c0 < (longlong)(uVar13 & 0xfffffffffffffff0) && (0 < param_3))) {
    dVar2 = *(double *)(param_1 + 2);
    lVar14 = ((longlong)param_2 - (longlong)param_1 >> 4) -
             ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1;
    dVar3 = *(double *)(param_1 + lVar14 * 4 + 2);
    dVar12 = dVar3;
    puVar15 = param_1 + lVar14 * 4;
    puVar18 = param_1;
    if (dVar3 < dVar2) {
      dVar12 = dVar2;
      puVar15 = param_1;
      puVar18 = param_1 + lVar14 * 4;
      dVar2 = dVar3;
    }
    if ((dVar2 <= *(double *)(param_2 + -2)) &&
       (puVar18 = puVar15, *(double *)(param_2 + -2) < dVar12)) {
      puVar18 = param_2 + -4;
    }
    uVar4 = *puVar18;
    dVar3 = *(double *)(puVar18 + 2);
    puVar15 = param_2;
    puVar18 = param_1;
    while( true ) {
      for (; dVar3 < *(double *)(puVar18 + 2); puVar18 = puVar18 + 4) {
      }
      puVar17 = puVar15 + -4;
      puVar16 = puVar17;
      if (*(double *)(puVar15 + -2) <= dVar3 && dVar3 != *(double *)(puVar15 + -2)) {
        do {
          puVar17 = puVar16 + -4;
          pdVar1 = (double *)(puVar16 + -2);
          puVar16 = puVar17;
        } while (*pdVar1 <= dVar3 && dVar3 != *pdVar1);
      }
      if (puVar17 <= puVar18) break;
      uVar5 = *puVar18;
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      uVar9 = puVar17[1];
      uVar10 = puVar17[2];
      uVar11 = puVar17[3];
      *puVar18 = *puVar17;
      puVar18[1] = uVar9;
      puVar18[2] = uVar10;
      puVar18[3] = uVar11;
      puVar18 = puVar18 + 4;
      *puVar17 = uVar5;
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      puVar15 = puVar17;
    }
    param_3 = param_3 + -1;
    FUN_1800b95d0(puVar18,param_2,param_3,param_4,uVar4);
    uVar13 = (longlong)puVar18 - (longlong)param_1;
    param_2 = puVar18;
  }
  if (param_3 == 0) {
    FUN_1800b9870(param_1,param_2,param_2,param_4);
  }
  return;
}






