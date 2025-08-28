#include "TaleWorlds.Native.Split.h"

// 03_rendering_part635.c - 19 个函数

// 函数: void FUN_18061fec0(undefined8 *param_1)
void FUN_18061fec0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_1 = &UNK_180a3beb8;
  uVar5 = 0;
  plVar2 = param_1 + 0x38;
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (param_1[0x39] - *plVar2 >> 3 != 0) {
    do {
      (**(code **)**(undefined8 **)(uVar6 + *plVar2))();
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[0x39] - *plVar2 >> 3));
  }
  plVar1 = param_1 + 9;
  uVar4 = uVar5;
  if (param_1[10] - *plVar1 >> 3 != 0) {
    do {
      *(undefined8 *)(*(longlong *)(uVar4 + *plVar1) + 0x10) = 0;
      (**(code **)**(undefined8 **)(uVar4 + *plVar1))();
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[10] - *plVar1 >> 3));
  }
  if (param_1[0x4a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x44] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x40] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x3c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x31] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x2d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x29] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x25] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x21] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x1d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x15] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0xd] == 0) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (param_1[5] == 0) {
      if (param_1[1] == 0) {
        *param_1 = &UNK_180a3bf30;
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180620180(void)
void FUN_180620180(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1806218c0(longlong param_1)
void FUN_1806218c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + uVar4 * 8);
      uStack_28 = 0;
      uStack_20 = 0;
      (**(code **)(*plVar1 + 0x148))(plVar1,&uStack_28,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + uVar4 * 8);
      uStack_1c = 0;
      uStack_14 = 0;
      (**(code **)(*plVar1 + 0x138))(plVar1,&uStack_1c,1);
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar3 = uVar4 * 0x60;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      *(undefined8 *)(lVar3 + lVar2) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar2) = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0;
      *(undefined4 *)(lVar3 + 0x18 + lVar2) = 0;
    } while (uVar4 < (ulonglong)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3)
            );
  }
  return;
}





// 函数: void FUN_1806218eb(void)
void FUN_1806218eb(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  undefined4 uVar4;
  ulonglong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar5;
  undefined4 uStack0000000000000028;
  
  uVar4 = (undefined4)unaff_RBP;
  uVar5 = unaff_RBP & 0xffffffff;
  do {
    plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0x48) + uVar5 * 8);
    uStack0000000000000028 = uVar4;
    (**(code **)(*plVar1 + 0x148))(plVar1,&stack0x00000020,1);
    plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0x48) + uVar5 * 8);
    (**(code **)(*plVar1 + 0x138))(plVar1,&stack0x0000002c,1);
    lVar2 = *(longlong *)(unaff_RBX + 0x28);
    lVar3 = uVar5 * 0x60;
    unaff_ESI = unaff_ESI + 1;
    uVar5 = (ulonglong)unaff_ESI;
    *(ulonglong *)(lVar3 + lVar2) = unaff_RBP;
    *(undefined4 *)(lVar3 + 8 + lVar2) = uVar4;
    *(ulonglong *)(lVar3 + 0x10 + lVar2) = unaff_RBP;
    *(undefined4 *)(lVar3 + 0x18 + lVar2) = uVar4;
  } while (uVar5 < (ulonglong)
                   (*(longlong *)(unaff_RBX + 0x50) - *(longlong *)(unaff_RBX + 0x48) >> 3));
  return;
}





// 函数: void FUN_18062197b(void)
void FUN_18062197b(void)

{
  return;
}





// 函数: void FUN_1806219a0(longlong param_1,int param_2,char param_3)
void FUN_1806219a0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0x1a8);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x1e0) + (longlong)param_2 * 4);
  if (((iVar1 < *(int *)(param_1 + 0x1ac) + iVar4) && (iVar1 < iVar4)) && (param_3 != '\0')) {
    iVar5 = iVar4 + -1;
    *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
    *(int *)(param_1 + 0x1a8) = iVar5;
    if (iVar1 != iVar5) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar7 = (longlong)iVar4 + -1;
      lVar6 = (longlong)iVar1 * 8;
      uVar3 = *(undefined8 *)(lVar6 + lVar2);
      *(undefined8 *)(lVar6 + lVar2) = *(undefined8 *)(lVar2 + lVar7 * 8);
      *(undefined8 *)(lVar2 + lVar7 * 8) = uVar3;
      FUN_180621ef0((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x28),
                    lVar7 * 0x60 + *(longlong *)(param_1 + 0x28));
      lVar2 = *(longlong *)(param_1 + 0x200);
      uVar3 = *(undefined8 *)(lVar6 + lVar2);
      *(undefined8 *)(lVar6 + lVar2) = *(undefined8 *)(lVar2 + lVar7 * 8);
      *(undefined8 *)(lVar2 + lVar7 * 8) = uVar3;
      iVar4 = 0;
      lVar7 = *(longlong *)(param_1 + 0x1e0);
      iVar8 = 0;
      if (*(longlong *)(param_1 + 0x1e8) - lVar7 >> 2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(lVar6 + lVar7) == iVar1) {
            *(int *)(lVar6 + lVar7) = iVar5;
LAB_180621a96:
            iVar4 = iVar4 + 1;
          }
          else if (*(int *)(lVar6 + lVar7) == iVar5) {
            *(int *)(lVar6 + lVar7) = iVar1;
            goto LAB_180621a96;
          }
          if (iVar4 == 2) break;
          lVar7 = *(longlong *)(param_1 + 0x1e0);
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 4;
        } while ((ulonglong)(longlong)iVar8 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1e8) - lVar7 >> 2));
      }
    }
    FUN_18061d270(param_1);
    FUN_18061d1b0(param_1);
  }
  return;
}





// 函数: void FUN_1806219e4(longlong param_1,int param_2)
void FUN_1806219e4(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong unaff_RBX;
  int iVar3;
  int iVar4;
  longlong unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar3 = (int)param_1 + -1;
  *(int *)(unaff_RBX + 0x1ac) = param_2 + 1;
  *(int *)(unaff_RBX + 0x1a8) = iVar3;
  iVar4 = (int)unaff_RDI;
  if (iVar4 != iVar3) {
    lVar5 = *(longlong *)(unaff_RBX + 0x48);
    param_1 = param_1 + -1;
    lVar6 = unaff_RDI * 8;
    uVar1 = *(undefined8 *)(lVar6 + lVar5);
    *(undefined8 *)(lVar6 + lVar5) = *(undefined8 *)(lVar5 + param_1 * 8);
    *(undefined8 *)(lVar5 + param_1 * 8) = uVar1;
    FUN_180621ef0(unaff_RDI * 0x60 + *(longlong *)(unaff_RBX + 0x28),
                  param_1 * 0x60 + *(longlong *)(unaff_RBX + 0x28));
    lVar5 = *(longlong *)(unaff_RBX + 0x200);
    uVar1 = *(undefined8 *)(lVar6 + lVar5);
    *(undefined8 *)(lVar6 + lVar5) = *(undefined8 *)(lVar5 + param_1 * 8);
    *(undefined8 *)(lVar5 + param_1 * 8) = uVar1;
    iVar2 = 0;
    lVar6 = *(longlong *)(unaff_RBX + 0x1e0);
    iVar7 = 0;
    if (*(longlong *)(unaff_RBX + 0x1e8) - lVar6 >> 2 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(lVar5 + lVar6) == iVar4) {
          *(int *)(lVar5 + lVar6) = iVar3;
LAB_180621a96:
          iVar2 = iVar2 + 1;
        }
        else if (*(int *)(lVar5 + lVar6) == iVar3) {
          *(int *)(lVar5 + lVar6) = iVar4;
          goto LAB_180621a96;
        }
        if (iVar2 == 2) break;
        lVar6 = *(longlong *)(unaff_RBX + 0x1e0);
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 4;
      } while ((ulonglong)(longlong)iVar7 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x1e8) - lVar6 >> 2));
    }
  }
  FUN_18061d270();
  FUN_18061d1b0();
  return;
}





// 函数: void FUN_180621ad6(void)
void FUN_180621ad6(void)

{
  return;
}





// 函数: void FUN_180621b60(longlong param_1,int param_2,undefined8 param_3)
void FUN_180621b60(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  longlong lVar5;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar4 = (undefined7)((ulonglong)param_3 >> 8);
  uVar3 = (undefined1)param_3;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + (longlong)param_2 * 4);
  FUN_18063b5f0(&uStack_38,param_3);
  uStack_78 = uStack_38;
  uStack_70 = uStack_30;
  uStack_68 = uStack_28;
  uStack_60 = uStack_20;
  lVar2 = CONCAT71(uVar4,uVar3);
  uStack_48 = *(undefined4 *)(lVar2 + 0x10);
  uStack_44 = *(undefined4 *)(lVar2 + 0x14);
  uStack_40 = *(undefined4 *)(lVar2 + 0x18);
  uStack_3c = *(undefined4 *)(lVar2 + 0x1c);
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  uStack_50 = uStack_10;
  uStack_4c = uStack_c;
  FUN_18063b470(&uStack_88,&uStack_78);
  uStack_a8 = uStack_84;
  uStack_a0 = uStack_7c;
  uStack_a4 = uStack_80;
  uStack_98 = uStack_48;
  uStack_9c = uStack_88;
  uStack_90 = uStack_40;
  uStack_94 = uStack_44;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + lVar5 * 8);
  (**(code **)(*plVar1 + 0x98))(plVar1,&uStack_a8,1);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar5 = lVar5 * 0x60;
  *(undefined4 *)(lVar5 + 0x30 + lVar2) = uStack_a8;
  *(undefined4 *)(lVar5 + 0x34 + lVar2) = uStack_a4;
  *(undefined4 *)(lVar5 + 0x38 + lVar2) = uStack_a0;
  *(undefined4 *)(lVar5 + 0x3c + lVar2) = uStack_9c;
  *(undefined4 *)(lVar5 + 0x40 + lVar2) = uStack_98;
  *(undefined4 *)(lVar5 + 0x44 + lVar2) = uStack_94;
  *(undefined4 *)(lVar5 + 0x48 + lVar2) = uStack_90;
  *(undefined8 *)(lVar5 + lVar2) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar2) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar2) = 0;
  return;
}





// 函数: void FUN_180621cb0(longlong param_1,int param_2,undefined4 *param_3)
void FUN_180621cb0(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_48 [64];
  
  plVar4 = *(longlong **)
            (*(longlong *)(param_1 + 0x48) +
            (longlong)*(int *)(*(longlong *)(param_1 + 0x1e0) + (longlong)param_2 * 4) * 8);
  puVar8 = (undefined4 *)(**(code **)(*plVar4 + 0x90))(plVar4,auStack_48);
  uVar1 = *puVar8;
  uVar2 = puVar8[1];
  uVar5 = puVar8[4];
  uVar6 = puVar8[5];
  uVar7 = puVar8[6];
  uVar3 = puVar8[2];
  *param_3 = puVar8[3];
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = uVar5;
  param_3[5] = uVar6;
  param_3[6] = uVar7;
  param_3[7] = 0x3f800000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180621d60(longlong *param_1,ulonglong param_2)
void FUN_180621d60(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = param_1[1];
  lVar8 = *param_1;
  uVar2 = (lVar9 - lVar8) / 0x1c;
  if (param_2 <= uVar2) {
    param_1[1] = param_2 * 0x1c + lVar8;
    return;
  }
  param_2 = param_2 - uVar2;
  if ((ulonglong)((param_1[2] - lVar9) / 0x1c) < param_2) {
    uVar7 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar7 = 1;
    }
    if (uVar7 < uVar2 + param_2) {
      uVar7 = uVar2 + param_2;
    }
    if (uVar7 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar7 * 0x1c,(char)param_1[3]);
      lVar9 = param_1[1];
      lVar8 = *param_1;
    }
    puVar4 = puVar3;
    if (lVar8 != lVar9) {
      lVar8 = lVar8 - (longlong)puVar3;
      puVar6 = puVar3 + 5;
      do {
        puVar1 = puVar6 + 7;
        *puVar4 = *(undefined4 *)(lVar8 + -0x14 + (longlong)puVar6);
        puVar4 = puVar4 + 7;
        puVar6[-4] = *(undefined4 *)(lVar8 + -0x2c + (longlong)puVar1);
        puVar6[-3] = *(undefined4 *)(lVar8 + -0x28 + (longlong)puVar1);
        puVar6[-2] = *(undefined4 *)(lVar8 + -0x24 + (longlong)puVar1);
        puVar6[-1] = *(undefined4 *)(lVar8 + -0x20 + (longlong)puVar1);
        *puVar6 = *(undefined4 *)(lVar8 + -0x1c + (longlong)puVar1);
        puVar6[1] = *(undefined4 *)(lVar8 + -0x18 + (longlong)puVar1);
        lVar5 = (longlong)puVar6 + lVar8 + 8;
        puVar6 = puVar1;
      } while (lVar5 != lVar9);
      lVar8 = *param_1;
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = (longlong)puVar3;
    param_1[2] = (longlong)(puVar3 + uVar7 * 7);
    param_1[1] = (longlong)(puVar4 + param_2 * 7);
    return;
  }
  param_1[1] = param_2 * 0x1c + lVar9;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180621dce(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)
void FUN_180621dce(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong in_R10;
  
  uVar6 = param_3 * 2;
  if (param_3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < (ulonglong)(param_3 + unaff_RDI)) {
    uVar6 = param_3 + unaff_RDI;
  }
  if (uVar6 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x1c,(char)unaff_RBX[3]);
    in_R10 = unaff_RBX[1];
    param_4 = *unaff_RBX;
  }
  puVar3 = puVar2;
  if (param_4 != in_R10) {
    param_4 = param_4 - (longlong)puVar2;
    puVar5 = puVar2 + 5;
    do {
      puVar1 = puVar5 + 7;
      *puVar3 = *(undefined4 *)(param_4 + -0x14 + (longlong)puVar5);
      puVar3 = puVar3 + 7;
      puVar5[-4] = *(undefined4 *)(param_4 + -0x2c + (longlong)puVar1);
      puVar5[-3] = *(undefined4 *)(param_4 + -0x28 + (longlong)puVar1);
      puVar5[-2] = *(undefined4 *)(param_4 + -0x24 + (longlong)puVar1);
      puVar5[-1] = *(undefined4 *)(param_4 + -0x20 + (longlong)puVar1);
      *puVar5 = *(undefined4 *)(param_4 + -0x1c + (longlong)puVar1);
      puVar5[1] = *(undefined4 *)(param_4 + -0x18 + (longlong)puVar1);
      lVar4 = (longlong)puVar5 + param_4 + 8;
      puVar5 = puVar1;
    } while (lVar4 != in_R10);
    param_4 = *unaff_RBX;
  }
  if (param_4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = (longlong)puVar2;
  unaff_RBX[2] = (longlong)(puVar2 + uVar6 * 7);
  unaff_RBX[1] = (longlong)(puVar3 + unaff_RDI * 7);
  return;
}





// 函数: void FUN_180621eb6(void)
void FUN_180621eb6(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong in_R10;
  
  *(longlong *)(unaff_RBX + 8) = unaff_RDI * 0x1c + in_R10;
  return;
}





// 函数: void FUN_180621ef0(undefined4 *param_1,undefined4 *param_2)
void FUN_180621ef0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)(param_1 + 10);
  uVar15 = *(undefined8 *)(param_1 + 0xc);
  uVar16 = *(undefined8 *)(param_1 + 0xe);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = *(undefined8 *)(param_1 + 0x12);
  uVar6 = param_1[7];
  uVar7 = param_1[0x14];
  uVar8 = param_1[0x15];
  uVar9 = param_1[5];
  uVar10 = param_1[6];
  uVar11 = param_1[0x16];
  uVar12 = param_1[0x17];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar5;
  param_2[5] = uVar9;
  param_2[6] = uVar10;
  param_2[7] = uVar6;
  *(undefined8 *)(param_2 + 8) = uVar13;
  *(undefined8 *)(param_2 + 10) = uVar14;
  *(undefined8 *)(param_2 + 0xc) = uVar15;
  *(undefined8 *)(param_2 + 0xe) = uVar16;
  *(undefined8 *)(param_2 + 0x10) = uVar17;
  *(undefined8 *)(param_2 + 0x12) = uVar18;
  param_2[0x17] = uVar12;
  param_2[0x14] = uVar7;
  param_2[0x15] = uVar8;
  param_2[0x16] = uVar11;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622130(longlong *param_1,ulonglong param_2)
void FUN_180622130(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar7) / 0x60)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar7,0,param_2 * 0x60);
    }
    param_1[1] = lVar7;
    return;
  }
  lVar6 = *param_1;
  lVar3 = (lVar7 - lVar6) / 0x60;
  uVar8 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar8 = 1;
  }
  if (uVar8 < lVar3 + param_2) {
    uVar8 = lVar3 + param_2;
  }
  if (uVar8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar8 * 0x60,(char)param_1[3]);
    lVar7 = param_1[1];
    lVar6 = *param_1;
  }
  puVar5 = puVar2;
  if (lVar6 != lVar7) {
    lVar6 = lVar6 - (longlong)puVar2;
    puVar4 = puVar2 + 0x11;
    do {
      puVar1 = puVar4 + 0x18;
      *puVar5 = *(undefined4 *)(lVar6 + -0x44 + (longlong)puVar4);
      puVar5 = puVar5 + 0x18;
      puVar4[-0x10] = *(undefined4 *)(lVar6 + -0xa0 + (longlong)puVar1);
      puVar4[-0xf] = *(undefined4 *)(lVar6 + -0x9c + (longlong)puVar1);
      puVar4[-0xe] = *(undefined4 *)(lVar6 + -0x98 + (longlong)puVar1);
      puVar4[-0xd] = *(undefined4 *)(lVar6 + -0x94 + (longlong)puVar1);
      puVar4[-0xc] = *(undefined4 *)(lVar6 + -0x90 + (longlong)puVar1);
      puVar4[-0xb] = *(undefined4 *)(lVar6 + -0x8c + (longlong)puVar1);
      puVar4[-10] = *(undefined4 *)(lVar6 + -0x88 + (longlong)puVar1);
      puVar4[-9] = *(undefined4 *)(lVar6 + -0x84 + (longlong)puVar1);
      puVar4[-8] = *(undefined4 *)(lVar6 + -0x80 + (longlong)puVar1);
      puVar4[-7] = *(undefined4 *)(lVar6 + -0x7c + (longlong)puVar1);
      puVar4[-6] = *(undefined4 *)(lVar6 + -0x78 + (longlong)puVar1);
      puVar4[-5] = *(undefined4 *)(lVar6 + -0x74 + (longlong)puVar1);
      puVar4[-4] = *(undefined4 *)(lVar6 + -0x70 + (longlong)puVar1);
      puVar4[-3] = *(undefined4 *)(lVar6 + -0x6c + (longlong)puVar1);
      puVar4[-2] = *(undefined4 *)(lVar6 + -0x68 + (longlong)puVar1);
      puVar4[-1] = *(undefined4 *)(lVar6 + -100 + (longlong)puVar1);
      *puVar4 = *(undefined4 *)(lVar6 + -0x60 + (longlong)puVar1);
      puVar4[1] = *(undefined4 *)(lVar6 + -0x5c + (longlong)puVar1);
      puVar4[2] = *(undefined4 *)(lVar6 + -0x58 + (longlong)puVar1);
      puVar4[3] = *(undefined4 *)(lVar6 + -0x54 + (longlong)puVar1);
      puVar4[4] = *(undefined4 *)(lVar6 + -0x50 + (longlong)puVar1);
      puVar4[5] = *(undefined4 *)(lVar6 + -0x4c + (longlong)puVar1);
      puVar4[6] = *(undefined4 *)(lVar6 + -0x48 + (longlong)puVar1);
      lVar3 = (longlong)puVar4 + lVar6 + 0x1c;
      puVar4 = puVar1;
    } while (lVar3 != lVar7);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar5,0,param_2 * 0x60);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar8 * 0x18);
  param_1[1] = (longlong)puVar5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622178(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)
void FUN_180622178(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong in_RAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  
  lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_4 - param_3),8);
  lVar4 = (lVar4 >> 4) - (lVar4 >> 0x3f);
  uVar6 = lVar4 * 2;
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < (ulonglong)(lVar4 + unaff_RDI)) {
    uVar6 = lVar4 + unaff_RDI;
  }
  if (uVar6 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x60,(char)unaff_RSI[3]);
    param_4 = unaff_RSI[1];
    param_3 = *unaff_RSI;
  }
  puVar5 = puVar2;
  if (param_3 != param_4) {
    param_3 = param_3 - (longlong)puVar2;
    puVar3 = puVar2 + 0x11;
    do {
      puVar1 = puVar3 + 0x18;
      *puVar5 = *(undefined4 *)(param_3 + -0x44 + (longlong)puVar3);
      puVar5 = puVar5 + 0x18;
      puVar3[-0x10] = *(undefined4 *)(param_3 + -0xa0 + (longlong)puVar1);
      puVar3[-0xf] = *(undefined4 *)(param_3 + -0x9c + (longlong)puVar1);
      puVar3[-0xe] = *(undefined4 *)(param_3 + -0x98 + (longlong)puVar1);
      puVar3[-0xd] = *(undefined4 *)(param_3 + -0x94 + (longlong)puVar1);
      puVar3[-0xc] = *(undefined4 *)(param_3 + -0x90 + (longlong)puVar1);
      puVar3[-0xb] = *(undefined4 *)(param_3 + -0x8c + (longlong)puVar1);
      puVar3[-10] = *(undefined4 *)(param_3 + -0x88 + (longlong)puVar1);
      puVar3[-9] = *(undefined4 *)(param_3 + -0x84 + (longlong)puVar1);
      puVar3[-8] = *(undefined4 *)(param_3 + -0x80 + (longlong)puVar1);
      puVar3[-7] = *(undefined4 *)(param_3 + -0x7c + (longlong)puVar1);
      puVar3[-6] = *(undefined4 *)(param_3 + -0x78 + (longlong)puVar1);
      puVar3[-5] = *(undefined4 *)(param_3 + -0x74 + (longlong)puVar1);
      puVar3[-4] = *(undefined4 *)(param_3 + -0x70 + (longlong)puVar1);
      puVar3[-3] = *(undefined4 *)(param_3 + -0x6c + (longlong)puVar1);
      puVar3[-2] = *(undefined4 *)(param_3 + -0x68 + (longlong)puVar1);
      puVar3[-1] = *(undefined4 *)(param_3 + -100 + (longlong)puVar1);
      *puVar3 = *(undefined4 *)(param_3 + -0x60 + (longlong)puVar1);
      puVar3[1] = *(undefined4 *)(param_3 + -0x5c + (longlong)puVar1);
      puVar3[2] = *(undefined4 *)(param_3 + -0x58 + (longlong)puVar1);
      puVar3[3] = *(undefined4 *)(param_3 + -0x54 + (longlong)puVar1);
      puVar3[4] = *(undefined4 *)(param_3 + -0x50 + (longlong)puVar1);
      puVar3[5] = *(undefined4 *)(param_3 + -0x4c + (longlong)puVar1);
      puVar3[6] = *(undefined4 *)(param_3 + -0x48 + (longlong)puVar1);
      lVar4 = (longlong)puVar3 + param_3 + 0x1c;
      puVar3 = puVar1;
    } while (lVar4 != param_4);
  }
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar5,0,unaff_RDI * 0x60);
  }
  if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RSI = (longlong)puVar2;
  unaff_RSI[2] = (longlong)(puVar2 + uVar6 * 0x18);
  unaff_RSI[1] = (longlong)puVar5;
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180622366(void)
void FUN_180622366(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 in_R9;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset(in_R9,0,unaff_RDI * 0x60);
  }
  *(undefined8 *)(unaff_RSI + 8) = in_R9;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806223a0(longlong *param_1,ulonglong param_2)
void FUN_1806223a0(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar8) / 0x18)) {
    param_1[1] = lVar8 + param_2 * 0x18;
    return;
  }
  lVar7 = *param_1;
  lVar4 = (lVar8 - lVar7) / 0x18;
  uVar6 = lVar4 * 2;
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar4 + param_2) {
    uVar6 = lVar4 + param_2;
  }
  if (uVar6 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x18,(char)param_1[3]);
    lVar8 = param_1[1];
    lVar7 = *param_1;
  }
  puVar3 = puVar2;
  if (lVar7 != lVar8) {
    lVar7 = lVar7 - (longlong)puVar2;
    puVar5 = puVar2 + 4;
    do {
      puVar1 = puVar5 + 6;
      *puVar3 = *(undefined4 *)(lVar7 + -0x10 + (longlong)puVar5);
      puVar3 = puVar3 + 6;
      puVar5[-3] = *(undefined4 *)(lVar7 + -0x24 + (longlong)puVar1);
      puVar5[-2] = *(undefined4 *)(lVar7 + -0x20 + (longlong)puVar1);
      puVar5[-1] = *(undefined4 *)(lVar7 + -0x1c + (longlong)puVar1);
      *puVar5 = *(undefined4 *)(lVar7 + -0x18 + (longlong)puVar1);
      puVar5[1] = *(undefined4 *)(lVar7 + -0x14 + (longlong)puVar1);
      lVar4 = (longlong)puVar5 + lVar7 + 8;
      puVar5 = puVar1;
    } while (lVar4 != lVar8);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar6 * 6);
  param_1[1] = (longlong)(puVar3 + param_2 * 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806223eb(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)
void FUN_1806223eb(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar6;
  longlong in_R10;
  
  lVar4 = SUB168(SEXT816(in_R10) * SEXT816(param_1),8);
  lVar4 = (lVar4 >> 2) - (lVar4 >> 0x3f);
  uVar6 = lVar4 * 2;
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < (ulonglong)(lVar4 + unaff_RSI)) {
    uVar6 = lVar4 + unaff_RSI;
  }
  if (uVar6 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x18,(char)unaff_RBX[3]);
    param_4 = unaff_RBX[1];
    param_3 = *unaff_RBX;
  }
  puVar3 = puVar2;
  if (param_3 != param_4) {
    param_3 = param_3 - (longlong)puVar2;
    puVar5 = puVar2 + 4;
    do {
      puVar1 = puVar5 + 6;
      *puVar3 = *(undefined4 *)(param_3 + -0x10 + (longlong)puVar5);
      puVar3 = puVar3 + 6;
      puVar5[-3] = *(undefined4 *)(param_3 + -0x24 + (longlong)puVar1);
      puVar5[-2] = *(undefined4 *)(param_3 + -0x20 + (longlong)puVar1);
      puVar5[-1] = *(undefined4 *)(param_3 + -0x1c + (longlong)puVar1);
      *puVar5 = *(undefined4 *)(param_3 + -0x18 + (longlong)puVar1);
      puVar5[1] = *(undefined4 *)(param_3 + -0x14 + (longlong)puVar1);
      lVar4 = (longlong)puVar5 + param_3 + 8;
      puVar5 = puVar1;
    } while (lVar4 != param_4);
    param_3 = *unaff_RBX;
  }
  if (param_3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = (longlong)puVar2;
  unaff_RBX[2] = (longlong)(puVar2 + uVar6 * 6);
  unaff_RBX[1] = (longlong)(puVar3 + unaff_RSI * 6);
  return;
}





