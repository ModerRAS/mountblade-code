#include "TaleWorlds.Native.Split.h"

// 99_part_04_part011.c - 16 个函数

// 函数: void FUN_180260830(undefined8 param_1,longlong param_2,uint *param_3)
void FUN_180260830(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_498 [32];
  undefined8 uStack_478;
  undefined *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  ulonglong uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *param_3 = 0;
  uVar3 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  if (uVar3 != 0) {
    uVar7 = (ulonglong)uVar3;
    do {
      puStack_468 = &UNK_18098bb30;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar3 = **(uint **)(param_2 + 8);
      puVar1 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar1;
      if (uVar3 != 0) {
        FUN_180045f60(&puStack_468,puVar1,uVar3);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
      }
      plVar8 = (longlong *)&UNK_18098dac0;
      lVar9 = 0;
      do {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(*plVar8 + lVar4) != '\0');
        iVar6 = (int)lVar4;
        if (iStack_458 == iVar6) {
          if (iStack_458 != 0) {
            pbVar5 = pbStack_460;
            do {
              pbVar2 = pbVar5 + (*plVar8 - (longlong)pbStack_460);
              iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
              if (iVar6 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar2 != 0);
          }
LAB_18026095e:
          if (iVar6 == 0) {
            *param_3 = *param_3 | *(uint *)(&UNK_18098dac8 + lVar9 * 0x10);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_18026095e;
        lVar9 = lVar9 + 1;
        plVar8 = plVar8 + 2;
      } while ((longlong)plVar8 < 0x18098dc90);
      puStack_468 = &UNK_18098bcb0;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_498);
}






// 函数: void FUN_1802609c0(undefined8 param_1,uint param_2,longlong *param_3)
void FUN_1802609c0(undefined8 param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  puVar2 = (undefined4 *)param_3[1];
  if ((ulonglong)((*param_3 - (longlong)puVar2) + param_3[2]) < 5) {
    FUN_180639bf0(param_3,(longlong)puVar2 + (4 - *param_3));
    puVar2 = (undefined4 *)param_3[1];
  }
  iVar5 = 0;
  *puVar2 = 0;
  lVar1 = *param_3;
  lVar3 = param_3[1] + 4;
  param_3[1] = lVar3;
  lVar6 = 0;
  if (lVar1 != 0) {
    lVar6 = lVar3 - lVar1;
  }
  if ((ulonglong)((lVar1 - lVar3) + param_3[2]) < 5) {
    FUN_180639bf0(param_3,(lVar3 - lVar1) + 4);
    lVar3 = param_3[1];
  }
  param_3[1] = lVar3 + 4;
  puVar4 = (undefined8 *)&UNK_18098dac0;
  do {
    if ((*(uint *)(puVar4 + 1) & param_2) != 0) {
      FUN_180639de0(param_3,*puVar4);
      iVar5 = iVar5 + 1;
    }
    puVar4 = puVar4 + 2;
  } while ((longlong)puVar4 < 0x18098dc90);
  *(int *)(lVar6 + *param_3) = iVar5;
  return;
}






// 函数: void FUN_180260aa0(longlong *param_1,ulonglong param_2)
void FUN_180260aa0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar4 = *param_1;
  uVar2 = (lVar1 - lVar4) / 0x48;
  if (uVar2 < param_2) {
    lVar3 = param_2 - uVar2;
    FUN_180261610(param_1,lVar3,lVar1 - lVar4,lVar3,0xfffffffffffffffe);
  }
  else {
    lVar3 = param_2 * 0x48 + lVar4;
    if (lVar3 != lVar1) {
      do {
        *(undefined8 *)(lVar3 + 0x28) = &UNK_180a3c3e0;
        if (*(longlong *)(lVar3 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined4 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x28) = &UNK_18098bcb0;
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar1);
      lVar4 = *param_1;
    }
    param_1[1] = param_2 * 0x48 + lVar4;
  }
  return;
}






// 函数: void FUN_180260b90(longlong *param_1,ulonglong param_2)
void FUN_180260b90(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar4 = *param_1;
  uVar2 = (lVar1 - lVar4) / 0x38;
  if (uVar2 < param_2) {
    lVar3 = param_2 - uVar2;
    FUN_180261920(param_1,lVar3,lVar1 - lVar4,lVar3,0xfffffffffffffffe);
  }
  else {
    lVar3 = param_2 * 0x38 + lVar4;
    if (lVar3 != lVar1) {
      do {
        *(undefined8 *)(lVar3 + 0x18) = &UNK_180a3c3e0;
        if (*(longlong *)(lVar3 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined4 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x18) = &UNK_18098bcb0;
        lVar3 = lVar3 + 0x38;
      } while (lVar3 != lVar1);
      lVar4 = *param_1;
    }
    param_1[1] = param_2 * 0x38 + lVar4;
  }
  return;
}






// 函数: void FUN_180260c80(longlong *param_1)
void FUN_180260c80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_18005d580(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_180260cf0(longlong *param_1,ulonglong param_2)
void FUN_180260cf0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar3 = *param_1;
  uVar2 = (lVar1 - lVar3) / 0x30;
  if (uVar2 < param_2) {
    lVar4 = param_2 - uVar2;
    FUN_180261c20(param_1,lVar4,lVar1 - lVar3,lVar4,0xfffffffffffffffe);
  }
  else {
    lVar4 = lVar3 + param_2 * 0x30;
    if (lVar4 != lVar1) {
      do {
        FUN_18005d580(lVar4);
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != lVar1);
      lVar3 = *param_1;
    }
    param_1[1] = lVar3 + param_2 * 0x30;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180260db0(longlong *param_1,ulonglong param_2)
void FUN_180260db0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar4) / 0x18)) {
    if (param_2 != 0) {
      puVar3 = (undefined4 *)(lVar4 + 0x14);
      uVar6 = param_2;
      do {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar4 = param_1[1];
    }
    param_1[1] = lVar4 + param_2 * 0x18;
    return;
  }
  lVar5 = *param_1;
  lVar1 = (lVar4 - lVar5) / 0x18;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar1 + param_2) {
    uVar6 = lVar1 + param_2;
  }
  if (uVar6 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x18,(char)param_1[3]);
    lVar5 = *param_1;
    lVar4 = param_1[1];
  }
  if (lVar5 == lVar4) {
    if (param_2 != 0) {
      puVar3 = (undefined4 *)(lVar1 + 0x14);
      uVar2 = param_2;
      do {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 6;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[2] = lVar1 + uVar6 * 0x18;
    param_1[1] = lVar1 + param_2 * 0x18;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,lVar5,lVar4 - lVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180260dfa(void)
void FUN_180260dfa(void)

{
  longlong in_RAX;
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R9;
  ulonglong uVar4;
  
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_RSI - in_R9),8);
  lVar3 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  uVar4 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar3 + unaff_RDI)) {
    uVar4 = lVar3 + unaff_RDI;
  }
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x18,(char)unaff_RBX[3]);
    in_R9 = *unaff_RBX;
    unaff_RSI = unaff_RBX[1];
  }
  if (in_R9 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,in_R9,unaff_RSI - in_R9);
  }
  if (unaff_RDI != 0) {
    puVar2 = (undefined4 *)(lVar3 + 0x14);
    lVar1 = unaff_RDI;
    do {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 6;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar3;
  unaff_RBX[2] = lVar3 + uVar4 * 0x18;
  unaff_RBX[1] = lVar3 + unaff_RDI * 0x18;
  return;
}






// 函数: void FUN_180260eff(void)
void FUN_180260eff(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    puVar1 = (undefined4 *)(unaff_RSI + 0x14);
    lVar2 = unaff_RDI;
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    unaff_RSI = *(longlong *)(unaff_RBX + 8);
  }
  *(longlong *)(unaff_RBX + 8) = unaff_RSI + unaff_RDI * 0x18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180260f40(longlong *param_1,ulonglong param_2)
void FUN_180260f40(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puStackX_8;
  undefined8 *puStackX_10;
  
  lVar7 = _DAT_180c8aa00;
  puVar6 = (undefined8 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar6) / 0x88) < param_2) {
    lVar7 = *param_1;
    lVar1 = ((longlong)puVar6 - lVar7) / 0x88;
    uVar4 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < lVar1 + param_2) {
      uVar4 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar4 != 0) {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x88,(char)param_1[3]);
      puVar6 = (undefined8 *)param_1[1];
      lVar7 = *param_1;
    }
    FUN_1801bd320(&puStackX_8,lVar7,puVar6,lVar1);
    puVar6 = puStackX_8;
    lVar7 = _DAT_180c8aa00;
    if (param_2 != 0) {
      puVar2 = puStackX_8 + 0xc;
      uVar5 = param_2;
      do {
        puStackX_8 = puVar2 + -0xc;
        *puStackX_8 = 0;
        puVar2[-0xb] = 0;
        puVar2[-10] = 0;
        *(undefined4 *)(puVar2 + -9) = 6;
        puVar2[-7] = 0;
        puVar2[-6] = 0;
        puVar2[-5] = 0;
        *(undefined4 *)(puVar2 + -4) = 6;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *(undefined4 *)puVar2 = 6;
        puStackX_10 = puVar2 + 1;
        *puStackX_10 = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined4 *)(puVar2 + 4) = 6;
        puVar2[-8] = *(undefined8 *)(lVar7 + 0x28);
        puVar2 = puVar2 + 0x11;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar7 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar7) {
      do {
        FUN_18014c7d0(lVar3);
        lVar3 = lVar3 + 0x88;
      } while (lVar3 != lVar7);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *param_1 = lVar1;
    param_1[1] = (longlong)(puVar6 + param_2 * 0x11);
    param_1[2] = uVar4 * 0x88 + lVar1;
  }
  else {
    if (param_2 != 0) {
      puVar2 = puVar6 + 0xc;
      uVar4 = param_2;
      do {
        *puVar6 = 0;
        puVar2[-0xb] = 0;
        puVar2[-10] = 0;
        *(undefined4 *)(puVar2 + -9) = 6;
        puVar2[-7] = 0;
        puVar2[-6] = 0;
        puVar2[-5] = 0;
        *(undefined4 *)(puVar2 + -4) = 6;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *(undefined4 *)puVar2 = 6;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined4 *)(puVar2 + 4) = 6;
        puVar2[-8] = *(undefined8 *)(lVar7 + 0x28);
        puVar6 = puVar6 + 0x11;
        puVar2 = puVar2 + 0x11;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar6 + param_2 * 0x11);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802611f0(longlong *param_1,ulonglong param_2)
void FUN_1802611f0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar4 = (undefined4 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar4) / 0x14) < param_2) {
    puVar5 = (undefined4 *)*param_1;
    lVar1 = ((longlong)puVar4 - (longlong)puVar5) / 0x14;
    uVar6 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar6 = 1;
    }
    if (uVar6 < lVar1 + param_2) {
      uVar6 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar6 != 0) {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x14,(char)param_1[3]);
      puVar5 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)param_1[1];
    }
    if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,puVar5,(longlong)puVar4 - (longlong)puVar5);
    }
    if (param_2 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 4);
      uVar3 = param_2;
      do {
        *(undefined4 *)((longlong)puVar2 + -4) = 0;
        puVar2[1] = 0xffffffffffffffff;
        *puVar2 = 0xffffffffffffffff;
        puVar2 = (undefined8 *)((longlong)puVar2 + 0x14);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[2] = lVar1 + uVar6 * 0x14;
    param_1[1] = lVar1 + param_2 * 0x14;
  }
  else {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 3) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 1) = 0xffffffffffffffff;
        puVar4 = puVar4 + 5;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar4 = (undefined4 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar4 + param_2 * 5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180261243(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_180261243(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  longlong unaff_R14;
  ulonglong uVar4;
  
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar3 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  uVar4 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar3 + unaff_R14)) {
    uVar4 = lVar3 + unaff_R14;
  }
  lVar3 = 0;
  if (uVar4 != 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x14,(char)unaff_RSI[3]);
    param_4 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_4 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,param_4,unaff_RBX - param_4);
  }
  if (unaff_R14 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 4);
    lVar2 = unaff_R14;
    do {
      *(undefined4 *)((longlong)puVar1 + -4) = 0;
      puVar1[1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = lVar3;
    unaff_RSI[2] = lVar3 + uVar4 * 0x14;
    unaff_RSI[1] = lVar3 + unaff_R14 * 0x14;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_180261340(longlong param_1)
void FUN_180261340(longlong param_1)

{
  longlong lVar1;
  undefined4 *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  lVar1 = unaff_R14;
  if (unaff_R14 != 0) {
    do {
      *unaff_RBX = 0;
      *(undefined8 *)(unaff_RBX + 3) = 0xffffffffffffffff;
      *(undefined8 *)(unaff_RBX + 1) = 0xffffffffffffffff;
      unaff_RBX = unaff_RBX + 5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(undefined4 **)(param_1 + 8);
  }
  *(undefined4 **)(unaff_RSI + 8) = unaff_RBX + unaff_R14 * 5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180261390(longlong *param_1,ulonglong param_2)
void FUN_180261390(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puStackX_8;
  undefined8 *puStackX_10;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar4) / 0x60) < param_2) {
    lVar7 = *param_1;
    lVar1 = ((longlong)puVar4 - lVar7) / 0x60;
    uVar5 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar5 = 1;
    }
    if (uVar5 < lVar1 + param_2) {
      uVar5 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar5 != 0) {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x60,(char)param_1[3]);
      puVar4 = (undefined8 *)param_1[1];
      lVar7 = *param_1;
    }
    FUN_180262940(&puStackX_8,lVar7,puVar4);
    puVar4 = puStackX_8;
    if (param_2 != 0) {
      puVar2 = puStackX_8 + 0xb;
      uVar6 = param_2;
      do {
        puStackX_8 = puVar2 + -0xb;
        *(undefined8 *)((longlong)puVar2 + -0x3c) = 0;
        *(undefined8 *)((longlong)puVar2 + -0x34) = 0;
        *(undefined8 *)((longlong)puVar2 + -0x2c) = 0;
        *(undefined8 *)((longlong)puVar2 + -0x24) = 0;
        *(undefined8 *)((longlong)puVar2 + -0x1c) = 0;
        *(undefined8 *)((longlong)puVar2 + -0x14) = 0;
        *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
        *(undefined8 *)((longlong)puVar2 + -4) = 0;
        *(undefined4 *)((longlong)puVar2 + 4) = 0;
        *puStackX_8 = 0;
        puVar2[-10] = 0;
        puVar2[-9] = 0;
        *(undefined4 *)(puVar2 + -8) = 6;
        puVar2[-7] = 0;
        puVar2[-6] = 0;
        puVar2[-5] = 0;
        *(undefined4 *)(puVar2 + -4) = 6;
        puStackX_10 = puVar2 + -3;
        *puStackX_10 = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *(undefined4 *)puVar2 = 6;
        puVar2 = puVar2 + 0xc;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar7 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar7) {
      do {
        FUN_18014d790(lVar3);
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != lVar7);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *param_1 = lVar1;
    param_1[1] = (longlong)(puVar4 + param_2 * 0xc);
    param_1[2] = uVar5 * 0x60 + lVar1;
  }
  else {
    if (param_2 != 0) {
      puStackX_8 = puVar4;
                    // WARNING: Subroutine does not return
      memset(puVar4 + 1,0,0x58);
    }
    param_1[1] = (longlong)puVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180261610(longlong *param_1,ulonglong param_2)
void FUN_180261610(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar10 = (undefined8 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar10) / 0x48) < param_2) {
    puVar9 = (undefined8 *)*param_1;
    lVar12 = ((longlong)puVar10 - (longlong)puVar9) / 0x48;
    uVar14 = lVar12 * 2;
    if (lVar12 == 0) {
      uVar14 = 1;
    }
    if (uVar14 < lVar12 + param_2) {
      uVar14 = lVar12 + param_2;
    }
    puVar6 = (undefined4 *)0x0;
    if (uVar14 != 0) {
      puVar6 = (undefined4 *)
               FUN_18062b420(_DAT_180c8ed18,uVar14 * 0x48,(char)param_1[3],puVar10,
                             0xfffffffffffffffe);
      puVar10 = (undefined8 *)param_1[1];
      puVar9 = (undefined8 *)*param_1;
    }
    puVar7 = puVar6;
    if (puVar9 != puVar10) {
      lVar12 = (longlong)puVar9 - (longlong)puVar6;
      puVar9 = (undefined8 *)(puVar6 + 0xc);
      do {
        *puVar7 = *(undefined4 *)(lVar12 + -0x30 + (longlong)puVar9);
        puVar8 = (undefined8 *)(lVar12 + -0x2c + (longlong)puVar9);
        uVar5 = puVar8[1];
        *(undefined8 *)((longlong)puVar9 + -0x2c) = *puVar8;
        *(undefined8 *)((longlong)puVar9 + -0x24) = uVar5;
        puVar1 = (undefined4 *)(lVar12 + -0x1c + (longlong)puVar9);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)((longlong)puVar9 + -0x1c) = *puVar1;
        *(undefined4 *)(puVar9 + -3) = uVar2;
        *(undefined4 *)((longlong)puVar9 + -0x14) = uVar3;
        *(undefined4 *)(puVar9 + -2) = uVar4;
        *(undefined4 *)((longlong)puVar9 + -0xc) = *(undefined4 *)(lVar12 + -0xc + (longlong)puVar9)
        ;
        puVar9[-1] = &UNK_18098bcb0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9[-1] = &UNK_180a3c3e0;
        puVar9[2] = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar12 + 8 + (longlong)puVar9);
        *puVar9 = *(undefined8 *)(lVar12 + (longlong)puVar9);
        *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(lVar12 + 0x14 + (longlong)puVar9)
        ;
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(lVar12 + 0x10 + (longlong)puVar9);
        *(undefined4 *)(lVar12 + 8 + (longlong)puVar9) = 0;
        *(undefined8 *)(lVar12 + (longlong)puVar9) = 0;
        *(undefined8 *)(lVar12 + 0x10 + (longlong)puVar9) = 0;
        puVar7 = puVar7 + 0x12;
        puVar8 = (undefined8 *)((longlong)puVar9 + lVar12 + 0x18);
        puVar9 = puVar9 + 9;
      } while (puVar8 != puVar10);
    }
    if (param_2 != 0) {
      puVar10 = (undefined8 *)(puVar7 + 0xc);
      uVar13 = param_2;
      do {
        puVar10[-6] = 0;
        puVar10[-5] = 0;
        puVar10[-4] = 0;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
        puVar10[-1] = &UNK_18098bcb0;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        puVar10[-1] = &UNK_180a3c3e0;
        puVar10[2] = 0;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        puVar10 = puVar10 + 9;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    lVar12 = param_1[1];
    lVar11 = *param_1;
    if (lVar11 != lVar12) {
      do {
        *(undefined8 *)(lVar11 + 0x28) = &UNK_180a3c3e0;
        if (*(longlong *)(lVar11 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined4 *)(lVar11 + 0x40) = 0;
        *(undefined8 *)(lVar11 + 0x28) = &UNK_18098bcb0;
        lVar11 = lVar11 + 0x48;
      } while (lVar11 != lVar12);
      lVar11 = *param_1;
    }
    if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar11);
    }
    *param_1 = (longlong)puVar6;
    param_1[1] = (longlong)(puVar7 + param_2 * 0x12);
    param_1[2] = (longlong)(puVar6 + uVar14 * 0x12);
  }
  else {
    if (param_2 != 0) {
      puVar9 = puVar10 + 6;
      uVar14 = param_2;
      do {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar9[-1] = &UNK_18098bcb0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9[-1] = &UNK_180a3c3e0;
        puVar9[2] = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar10 = puVar10 + 9;
        puVar9 = puVar9 + 9;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      puVar10 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar10 + param_2 * 9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180261920(longlong *param_1,ulonglong param_2)
void FUN_180261920(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  puVar9 = (undefined8 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar9) / 0x38) < param_2) {
    puVar8 = (undefined8 *)*param_1;
    lVar11 = ((longlong)puVar9 - (longlong)puVar8) / 0x38;
    uVar13 = lVar11 * 2;
    if (lVar11 == 0) {
      uVar13 = 1;
    }
    if (uVar13 < lVar11 + param_2) {
      uVar13 = lVar11 + param_2;
    }
    puVar5 = (undefined4 *)0x0;
    if (uVar13 != 0) {
      puVar5 = (undefined4 *)
               FUN_18062b420(_DAT_180c8ed18,uVar13 * 0x38,(char)param_1[3],puVar9,0xfffffffffffffffe
                            );
      puVar9 = (undefined8 *)param_1[1];
      puVar8 = (undefined8 *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar8 != puVar9) {
      lVar11 = (longlong)puVar8 - (longlong)puVar5;
      puVar8 = (undefined8 *)(puVar5 + 8);
      do {
        *puVar6 = *(undefined4 *)(lVar11 + -0x20 + (longlong)puVar8);
        puVar1 = (undefined4 *)(lVar11 + -0x1c + (longlong)puVar8);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)((longlong)puVar8 + -0x1c) = *puVar1;
        *(undefined4 *)(puVar8 + -3) = uVar2;
        *(undefined4 *)((longlong)puVar8 + -0x14) = uVar3;
        *(undefined4 *)(puVar8 + -2) = uVar4;
        *(undefined4 *)((longlong)puVar8 + -0xc) = *(undefined4 *)(lVar11 + -0xc + (longlong)puVar8)
        ;
        puVar8[-1] = &UNK_18098bcb0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8[-1] = &UNK_180a3c3e0;
        puVar8[2] = 0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar11 + 8 + (longlong)puVar8);
        *puVar8 = *(undefined8 *)(lVar11 + (longlong)puVar8);
        *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)(lVar11 + 0x14 + (longlong)puVar8)
        ;
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar11 + 0x10 + (longlong)puVar8);
        *(undefined4 *)(lVar11 + 8 + (longlong)puVar8) = 0;
        *(undefined8 *)(lVar11 + (longlong)puVar8) = 0;
        *(undefined8 *)(lVar11 + 0x10 + (longlong)puVar8) = 0;
        puVar6 = puVar6 + 0xe;
        puVar7 = (undefined8 *)((longlong)puVar8 + lVar11 + 0x18);
        puVar8 = puVar8 + 7;
      } while (puVar7 != puVar9);
    }
    if (param_2 != 0) {
      puVar9 = (undefined8 *)(puVar6 + 8);
      uVar12 = param_2;
      do {
        puVar9[-4] = 0;
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
        puVar9[-1] = &UNK_18098bcb0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9[-1] = &UNK_180a3c3e0;
        puVar9[2] = 0;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9 = puVar9 + 7;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    lVar11 = param_1[1];
    lVar10 = *param_1;
    if (lVar10 != lVar11) {
      do {
        *(undefined8 *)(lVar10 + 0x18) = &UNK_180a3c3e0;
        if (*(longlong *)(lVar10 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined4 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x18) = &UNK_18098bcb0;
        lVar10 = lVar10 + 0x38;
      } while (lVar10 != lVar11);
      lVar10 = *param_1;
    }
    if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar10);
    }
    *param_1 = (longlong)puVar5;
    param_1[1] = (longlong)(puVar6 + param_2 * 0xe);
    param_1[2] = (longlong)(puVar5 + uVar13 * 0xe);
  }
  else {
    if (param_2 != 0) {
      puVar8 = puVar9 + 4;
      uVar13 = param_2;
      do {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar8[-1] = &UNK_18098bcb0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8[-1] = &UNK_180a3c3e0;
        puVar8[2] = 0;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar9 = puVar9 + 7;
        puVar8 = puVar8 + 7;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      puVar9 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar9 + param_2 * 7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




