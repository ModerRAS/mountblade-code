#include "TaleWorlds.Native.Split.h"

// 99_part_13_part030_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808b8adb(void)
void FUN_1808b8adb(void)

{
  return;
}



undefined8 FUN_1808b8af0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)*param_2)(param_2);
  if ((((*(int *)(lVar1 + 0x70) != 0) || (*(int *)(lVar1 + 0x74) != 0)) ||
      (*(int *)(lVar1 + 0x78) != 0)) || (*(int *)(lVar1 + 0x7c) != 0)) {
    lVar1 = (**(code **)*param_2)(param_2);
    lVar1 = FUN_18085fdf0(*(undefined8 *)(param_1 + 0x38),lVar1 + 0x70);
    if (lVar1 != 0) {
      uVar2 = func_0x0001808d5d40(lVar1,param_2 + 0x11);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = (**(code **)param_2[0x11])
                        (param_2 + 0x11,lVar1,*(undefined4 *)(lVar1 + 0x28),
                         *(undefined4 *)(lVar1 + 0x28));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8b80(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined4 auStackX_8 [2];
  undefined8 *apuStackX_18 [2];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  lVar2 = param_1[5];
  uVar1 = *(uint *)((longlong)param_3 + 0x2dc);
  apuStackX_18[0] = param_3;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  plVar7 = (longlong *)func_0x000180851be0(param_1 + 6,param_2);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)func_0x000180851be0(param_1,param_2);
  }
  puVar14 = (undefined8 *)0x0;
  if (plVar7 == (longlong *)0x0) {
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
  }
  else {
    puVar8 = puVar14;
    if (((*(int *)((longlong)plVar7 + 0x24) != 0) && ((int)plVar7[1] != 0)) &&
       (iVar12 = *(int *)(*plVar7 + (longlong)(int)((int)plVar7[1] - 1U & uVar1) * 4), iVar12 != -1)
       ) {
      lVar11 = plVar7[2];
      do {
        lVar10 = (longlong)iVar12;
        if (*(uint *)(lVar11 + lVar10 * 0x10) == uVar1) {
          puVar8 = *(undefined8 **)(lVar11 + 8 + lVar10 * 0x10);
          break;
        }
        iVar12 = *(int *)(lVar11 + 4 + lVar10 * 0x10);
      } while (iVar12 != -1);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    if (puVar8 != (undefined8 *)0x0) {
      return 0x1f;
    }
  }
  plVar7 = param_1 + 6;
  if ((int)param_1[0xc] < 1) {
    plVar7 = param_1;
  }
  lVar2 = plVar7[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  puVar8 = (undefined8 *)func_0x000180851be0(plVar7,param_2);
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  bVar6 = false;
  puVar9 = puVar14;
  if (puVar8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x58,&UNK_180984cd0,0x124,0,0,1);
    if (puVar9 == (undefined8 *)0x0) {
      iVar12 = 0x26;
      puVar9 = puVar14;
      goto LAB_1808b8e6f;
    }
    *puVar9 = 0;
    puVar9[1] = 0;
    bVar6 = true;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    *(undefined4 *)(puVar9 + 7) = 0;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(puVar9 + 8) = *param_2;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uVar3;
    *(undefined4 *)(puVar9 + 9) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar5;
    puVar9[10] = 0;
    puVar8 = puVar9;
  }
  auStackX_8[0] = *(undefined4 *)((longlong)param_3 + 0x2dc);
  iVar12 = FUN_1807d28c0(puVar8,auStackX_8,apuStackX_18);
  if (iVar12 != 0) goto LAB_1808b8e6f;
  if (!bVar6) {
    return 0;
  }
  uStack_48 = *(uint *)(puVar8 + 8);
  uStack_44 = *(uint *)((longlong)puVar8 + 0x44);
  uStack_40 = *(uint *)(puVar8 + 9);
  uStack_3c = *(uint *)((longlong)puVar8 + 0x4c);
  lVar2 = plVar7[5];
  apuStackX_18[0] = puVar8;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar12 = FUN_180851a40(plVar7);
  if (iVar12 == 0) {
    if ((int)plVar7[1] != 0) {
      lVar11 = (longlong)
               (int)((uStack_48 ^ uStack_44 ^ uStack_3c ^ uStack_40) & (int)plVar7[1] - 1U);
      piVar13 = (int *)(*plVar7 + lVar11 * 4);
      iVar12 = *(int *)(*plVar7 + lVar11 * 4);
      if (iVar12 != -1) {
        lVar11 = plVar7[2];
        do {
          lVar10 = (longlong)iVar12 * 0x20;
          if ((*(longlong *)(lVar10 + lVar11) == CONCAT44(uStack_44,uStack_48)) &&
             (*(longlong *)(lVar10 + 8 + lVar11) == CONCAT44(uStack_3c,uStack_40)))
          goto FUN_1808b8e3b;
          piVar13 = (int *)(lVar11 + 0x10 + lVar10);
          iVar12 = *piVar13;
        } while (iVar12 != -1);
      }
      iVar12 = FUN_18084e8f0(plVar7,&uStack_48,apuStackX_18,piVar13);
      if (iVar12 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar12 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar12 == 0) {
LAB_1808b8e11:
      if (lVar2 == 0) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (iVar12 == 0) {
    return 0;
  }
  apuStackX_18[0] =
       (undefined8 *)CONCAT44(apuStackX_18[0]._4_4_,*(undefined4 *)((longlong)param_3 + 0x2dc));
  func_0x0001807d2ed0(puVar8,apuStackX_18);
LAB_1808b8e6f:
  if (puVar9 == (undefined8 *)0x0) {
    return iVar12;
  }
  FUN_1808bb9e0(puVar9);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar9,&UNK_18095b500,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8bf8(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R14;
  undefined4 *unaff_R15;
  bool in_ZF;
  char in_SF;
  char in_OF;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  undefined4 in_stack_00000090;
  longlong *in_stack_000000a0;
  
  if (in_ZF || in_OF != in_SF) {
    unaff_R14 = unaff_RSI;
  }
  lVar1 = unaff_R14[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  plVar6 = (longlong *)func_0x000180851be0(unaff_R14);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (longlong *)unaff_R12;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x58,&UNK_180984cd0,0x124);
    if (plVar7 == (longlong *)0x0) {
      iVar10 = 0x26;
      plVar7 = (longlong *)unaff_R12;
      goto LAB_1808b8e6f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(undefined4 *)(plVar7 + 4) = 0xffffffff;
    *(int *)((longlong)plVar7 + 0x24) = iVar12;
    plVar7[5] = unaff_R12;
    plVar7[6] = unaff_R12;
    *(int *)(plVar7 + 7) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(undefined4 *)(plVar7 + 8) = *unaff_R15;
    *(undefined4 *)((longlong)plVar7 + 0x44) = uVar2;
    *(undefined4 *)(plVar7 + 9) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x4c) = uVar4;
    plVar7[10] = unaff_R12;
    plVar6 = plVar7;
  }
  in_stack_00000090 = *(undefined4 *)(unaff_R13 + 0x2dc);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000090,&stack0x000000a0);
  if (iVar10 != 0) goto LAB_1808b8e6f;
  if (!bVar5) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 8);
  uStack0000000000000044 = *(uint *)((longlong)plVar6 + 0x44);
  uStack0000000000000048 = *(uint *)(plVar6 + 9);
  uStack000000000000004c = *(uint *)((longlong)plVar6 + 0x4c);
  lVar1 = unaff_R14[5];
  in_stack_000000a0 = plVar6;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar10 = FUN_180851a40(unaff_R14);
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (longlong)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack000000000000004c ^
                    uStack0000000000000048) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (longlong)iVar10 * 0x20;
          if ((*(longlong *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(longlong *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808b8e3b;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(unaff_R14,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar10 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar10 == 0) {
LAB_1808b8e11:
      if (lVar1 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_000000a0 =
       (longlong *)CONCAT44(in_stack_000000a0._4_4_,*(undefined4 *)(unaff_R13 + 0x2dc));
  func_0x0001807d2ed0(plVar6,&stack0x000000a0);
LAB_1808b8e6f:
  if (plVar7 == (longlong *)0x0) {
    return iVar10;
  }
  FUN_1808bb9e0(plVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar7,&UNK_18095b500,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8c1a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong *unaff_RSI;
  uint unaff_EDI;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R14;
  undefined4 *unaff_R15;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  undefined4 in_stack_00000090;
  longlong *in_stack_000000a0;
  
  iVar12 = (int)unaff_R12;
  lVar10 = unaff_R12;
  if (((*(int *)((longlong)param_3 + 0x24) != iVar12) && ((int)param_3[1] != 0)) &&
     (iVar9 = *(int *)(*param_3 + (longlong)(int)((int)param_3[1] - 1U & unaff_EDI) * 4),
     iVar9 != -1)) {
    lVar8 = param_3[2];
    do {
      lVar5 = (longlong)iVar9;
      if (*(uint *)(lVar8 + lVar5 * 0x10) == unaff_EDI) {
        lVar10 = *(longlong *)(lVar8 + 8 + lVar5 * 0x10);
        break;
      }
      iVar9 = *(int *)(lVar8 + 4 + lVar5 * 0x10);
    } while (iVar9 != -1);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  if (lVar10 != 0) {
    return 0x1f;
  }
  if ((int)unaff_RSI[0xc] <= iVar12) {
    unaff_R14 = unaff_RSI;
  }
  lVar10 = unaff_R14[5];
  if (lVar10 != 0) {
    FUN_180768360(lVar10);
  }
  plVar6 = (longlong *)func_0x000180851be0(unaff_R14);
  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar10);
  }
  bVar4 = false;
  plVar7 = (longlong *)unaff_R12;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x58,&UNK_180984cd0,0x124);
    if (plVar7 == (longlong *)0x0) {
      iVar9 = 0x26;
      plVar7 = (longlong *)unaff_R12;
      goto LAB_1808b8e6f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar4 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(undefined4 *)(plVar7 + 4) = 0xffffffff;
    *(int *)((longlong)plVar7 + 0x24) = iVar12;
    plVar7[5] = unaff_R12;
    plVar7[6] = unaff_R12;
    *(int *)(plVar7 + 7) = iVar12;
    uVar1 = unaff_R15[1];
    uVar2 = unaff_R15[2];
    uVar3 = unaff_R15[3];
    *(undefined4 *)(plVar7 + 8) = *unaff_R15;
    *(undefined4 *)((longlong)plVar7 + 0x44) = uVar1;
    *(undefined4 *)(plVar7 + 9) = uVar2;
    *(undefined4 *)((longlong)plVar7 + 0x4c) = uVar3;
    plVar7[10] = unaff_R12;
    plVar6 = plVar7;
  }
  in_stack_00000090 = *(undefined4 *)(unaff_R13 + 0x2dc);
  iVar9 = FUN_1807d28c0(plVar6,&stack0x00000090,&stack0x000000a0);
  if (iVar9 != 0) goto LAB_1808b8e6f;
  if (!bVar4) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 8);
  uStack0000000000000044 = *(uint *)((longlong)plVar6 + 0x44);
  uStack0000000000000048 = *(uint *)(plVar6 + 9);
  uStack000000000000004c = *(uint *)((longlong)plVar6 + 0x4c);
  lVar10 = unaff_R14[5];
  in_stack_000000a0 = plVar6;
  if (lVar10 != 0) {
    FUN_180768360(lVar10);
  }
  iVar9 = FUN_180851a40(unaff_R14);
  if (iVar9 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar8 = (longlong)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack000000000000004c ^
                    uStack0000000000000048) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar8 * 4);
      iVar9 = *(int *)(*unaff_R14 + lVar8 * 4);
      if (iVar9 != -1) {
        lVar8 = unaff_R14[2];
        do {
          lVar5 = (longlong)iVar9 * 0x20;
          if ((*(longlong *)(lVar5 + lVar8) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(longlong *)(lVar5 + 8 + lVar8) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808b8e3b;
          piVar11 = (int *)(lVar8 + 0x10 + lVar5);
          iVar9 = *piVar11;
        } while (iVar9 != -1);
      }
      iVar9 = FUN_18084e8f0(unaff_R14,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar9 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar9 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar9 == 0) {
LAB_1808b8e11:
      if (lVar10 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar10);
    }
  }
  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar10);
  }
  if (iVar9 == 0) {
    return iVar12;
  }
  in_stack_000000a0 =
       (longlong *)CONCAT44(in_stack_000000a0._4_4_,*(undefined4 *)(unaff_R13 + 0x2dc));
  func_0x0001807d2ed0(plVar6,&stack0x000000a0);
LAB_1808b8e6f:
  if (plVar7 == (longlong *)0x0) {
    return iVar9;
  }
  FUN_1808bb9e0(plVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar7,&UNK_18095b500,0xc6,1);
}



// WARNING: Removing unreachable block (ram,0x0001808b8c9b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b8c85(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R14;
  undefined4 *unaff_R15;
  undefined4 extraout_XMM0_Da;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  undefined4 in_stack_00000090;
  longlong *in_stack_000000a0;
  
  plVar6 = (longlong *)func_0x000180851be0();
  bVar5 = false;
  iVar12 = (int)unaff_R12;
  plVar7 = (longlong *)unaff_R12;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x58,&UNK_180984cd0,0x124);
    if (plVar7 == (longlong *)0x0) {
      iVar10 = 0x26;
      plVar7 = (longlong *)unaff_R12;
      goto LAB_1808b8e6f;
    }
    *plVar7 = unaff_R12;
    plVar7[1] = unaff_R12;
    bVar5 = true;
    plVar7[2] = unaff_R12;
    plVar7[3] = unaff_R12;
    *(undefined4 *)(plVar7 + 4) = 0xffffffff;
    *(int *)((longlong)plVar7 + 0x24) = iVar12;
    plVar7[5] = unaff_R12;
    plVar7[6] = unaff_R12;
    *(int *)(plVar7 + 7) = iVar12;
    uVar2 = unaff_R15[1];
    uVar3 = unaff_R15[2];
    uVar4 = unaff_R15[3];
    *(undefined4 *)(plVar7 + 8) = *unaff_R15;
    *(undefined4 *)((longlong)plVar7 + 0x44) = uVar2;
    *(undefined4 *)(plVar7 + 9) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x4c) = uVar4;
    plVar7[10] = unaff_R12;
    plVar6 = plVar7;
  }
  in_stack_00000090 = *(undefined4 *)(unaff_R13 + 0x2dc);
  iVar10 = FUN_1807d28c0(plVar6,&stack0x00000090,&stack0x000000a0);
  if (iVar10 != 0) goto LAB_1808b8e6f;
  if (!bVar5) {
    return iVar12;
  }
  uStack0000000000000040 = *(uint *)(plVar6 + 8);
  uStack0000000000000044 = *(uint *)((longlong)plVar6 + 0x44);
  uStack0000000000000048 = *(uint *)(plVar6 + 9);
  uStack000000000000004c = *(uint *)((longlong)plVar6 + 0x4c);
  lVar1 = unaff_R14[5];
  in_stack_000000a0 = plVar6;
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  iVar10 = FUN_180851a40();
  if (iVar10 == 0) {
    if ((int)unaff_R14[1] != 0) {
      lVar9 = (longlong)
              (int)((uStack0000000000000040 ^ uStack0000000000000044 ^ uStack000000000000004c ^
                    uStack0000000000000048) & (int)unaff_R14[1] - 1U);
      piVar11 = (int *)(*unaff_R14 + lVar9 * 4);
      iVar10 = *(int *)(*unaff_R14 + lVar9 * 4);
      if (iVar10 != -1) {
        lVar9 = unaff_R14[2];
        do {
          lVar8 = (longlong)iVar10 * 0x20;
          if ((*(longlong *)(lVar8 + lVar9) ==
               CONCAT44(uStack0000000000000044,uStack0000000000000040)) &&
             (*(longlong *)(lVar8 + 8 + lVar9) ==
              CONCAT44(uStack000000000000004c,uStack0000000000000048))) goto FUN_1808b8e3b;
          piVar11 = (int *)(lVar9 + 0x10 + lVar8);
          iVar10 = *piVar11;
        } while (iVar10 != -1);
      }
      iVar10 = FUN_18084e8f0(extraout_XMM0_Da,&stack0x00000040,&stack0x000000a0,piVar11);
      if (iVar10 == 0) goto LAB_1808b8e11;
      goto LAB_1808b8e0d;
    }
FUN_1808b8e3b:
    iVar10 = 0x1c;
  }
  else {
LAB_1808b8e0d:
    if (iVar10 == 0) {
LAB_1808b8e11:
      if (lVar1 == 0) {
        return iVar12;
      }
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (iVar10 == 0) {
    return iVar12;
  }
  in_stack_000000a0 =
       (longlong *)CONCAT44(in_stack_000000a0._4_4_,*(undefined4 *)(unaff_R13 + 0x2dc));
  func_0x0001807d2ed0(plVar6,&stack0x000000a0);
LAB_1808b8e6f:
  if (plVar7 == (longlong *)0x0) {
    return iVar10;
  }
  FUN_1808bb9e0(plVar7);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar7,&UNK_18095b500,0xc6,1);
}



// WARNING: Removing unreachable block (ram,0x0001808b8e1e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1808b8e3b(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  func_0x0001807d2ed0();
  if (unaff_RBX == 0) {
    return 0x1c;
  }
  FUN_1808bb9e0();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
}



undefined8 FUN_1808b8f60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x70) = param_1;
  for (puVar2 = *(undefined8 **)(param_2 + 0x80);
      (*(undefined8 **)(param_2 + 0x80) <= puVar2 &&
      (puVar2 < *(undefined8 **)(param_2 + 0x80) + *(int *)(param_2 + 0x88))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b5d00(*puVar2,param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  for (puVar2 = *(undefined8 **)(param_2 + 0x90);
      (*(undefined8 **)(param_2 + 0x90) <= puVar2 &&
      (puVar2 < *(undefined8 **)(param_2 + 0x90) + *(int *)(param_2 + 0x98))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b5d00(*puVar2,param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  puVar2 = *(undefined8 **)(param_2 + 0x50);
  while( true ) {
    if (puVar2 == (undefined8 *)(param_2 + 0x50)) {
      return 0;
    }
    uVar1 = FUN_1808b8f60(param_1,puVar2[2]);
    if ((int)uVar1 != 0) break;
    if (puVar2 == (undefined8 *)(param_2 + 0x50)) {
      return 0;
    }
    puVar2 = (undefined8 *)*puVar2;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b9030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  lVar4 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
  plVar5 = (longlong *)func_0x000180851be0(param_1 + 0x30,lVar4 + 0x10);
  bVar9 = plVar5 == (longlong *)0x0;
  if (bVar9) {
    plVar5 = (longlong *)func_0x000180851be0(param_1,lVar4 + 0x10);
  }
  if (plVar5 == (longlong *)0x0) {
    iVar2 = 0x1f;
    goto LAB_1808b9188;
  }
  iVar6 = *(int *)((longlong)plVar5 + 0x24);
  iVar2 = 0;
  if (iVar6 != 0) {
    if ((int)plVar5[1] == 0) {
      iVar2 = 0x1c;
      goto LAB_1808b9188;
    }
    lVar4 = (longlong)(int)((int)plVar5[1] - 1U & *(uint *)(param_2 + 0x2dc));
    piVar8 = (int *)(*plVar5 + lVar4 * 4);
    iVar3 = *(int *)(*plVar5 + lVar4 * 4);
    if (iVar3 != -1) {
      lVar4 = plVar5[2];
      do {
        if (*(uint *)(lVar4 + (longlong)iVar3 * 0x10) == *(uint *)(param_2 + 0x2dc)) {
          iVar6 = *piVar8;
          lVar7 = (longlong)iVar6;
          *(undefined8 *)(lVar4 + 8 + lVar7 * 0x10) = 0;
          *piVar8 = *(int *)(lVar4 + 4 + lVar7 * 0x10);
          *(int *)(lVar4 + 4 + lVar7 * 0x10) = (int)plVar5[4];
          *(int *)((longlong)plVar5 + 0x24) = *(int *)((longlong)plVar5 + 0x24) + -1;
          *(int *)(plVar5 + 4) = iVar6;
          iVar6 = *(int *)((longlong)plVar5 + 0x24);
          break;
        }
        piVar8 = (int *)((longlong)iVar3 * 0x10 + 4 + lVar4);
        iVar3 = *piVar8;
      } while (iVar3 != -1);
    }
    if (iVar6 != 0) goto LAB_1808b9188;
  }
  if (bVar9) {
    iVar2 = FUN_180853840(param_1,plVar5 + 8);
  }
  else {
    iVar2 = FUN_180853840(param_1 + 0x30,plVar5 + 8);
  }
  if (iVar2 == 0) {
    FUN_1808bb9e0(plVar5);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar5,&UNK_180984cd0,0xe1,1);
  }
LAB_1808b9188:
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808b91b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (4 < *(uint *)(param_2 + 0xd8)) {
    uVar2 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    return uVar2;
  }
  lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xa0,&UNK_1809874b0,0x2b3,0,0,1);
  if (lVar1 == 0) {
    return 0x26;
  }
  uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x30))();
  uVar2 = func_0x0001808c9070(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 8) = uVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b9280(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lStackX_18;
  ulonglong in_stack_ffffffffffffffc8;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffffd0;
  ulonglong uVar9;
  
  uVar9 = in_stack_ffffffffffffffd0 & 0xffffffffffffff00;
  uVar8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
  lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_1809874b0,0x288,uVar8,
                        uVar9,1);
  if (lVar2 == 0) {
    return 0x26;
  }
  plVar3 = (longlong *)func_0x0001808ec430(lVar2,*(undefined8 *)(param_1 + 0x18));
  lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x180,&UNK_1809874b0,0x28f,
                        uVar8 & 0xffffffff00000000,uVar9 & 0xffffffffffffff00,1);
  if (lVar2 == 0) {
    if (plVar3 == (longlong *)0x0) {
      return 0x26;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,0);
    return 0x26;
  }
  if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
  }
  uVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x30))();
  plVar6 = (longlong *)
           FUN_1808c9700(lVar2,param_2,uVar5,plVar3,*(undefined8 *)(param_1 + 0x18),lVar7,uVar4,
                         *(undefined8 *)(param_1 + 0x30));
  lStackX_18 = 0;
  iVar1 = FUN_1808b45a0(*(longlong *)(param_1 + 0x18) + 0x388,param_2 + 0xd8,plVar6,
                        *(undefined8 *)(param_1 + 0x38),&lStackX_18);
  if (iVar1 == 0) {
    plVar3[1] = lStackX_18;
    iVar1 = FUN_1808b4ec0(lStackX_18);
    if ((iVar1 != 0) || (iVar1 = FUN_1808b8af0(param_1,plVar6), iVar1 != 0)) goto LAB_1808b9432;
    *(longlong **)(param_1 + 8) = plVar6;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar1 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    if (iVar1 != 0) goto LAB_1808b9432;
  }
  iVar1 = 0;
LAB_1808b9432:
  if (plVar6 == (longlong *)0x0) {
    return iVar1;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar6,&UNK_18095b500,0xc6,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b934f(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  undefined8 in_stack_00000070;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*(longlong *)(*(longlong *)(unaff_RSI + 0x38) + 8) + 0x30))();
  plVar2 = (longlong *)FUN_1808c9700();
  in_stack_00000070 = 0;
  iVar1 = FUN_1808b45a0(*(longlong *)(unaff_RSI + 0x18) + 0x388,unaff_RBP + 0xd8,plVar2,
                        *(undefined8 *)(unaff_RSI + 0x38),&stack0x00000070);
  if (iVar1 == 0) {
    *(undefined8 *)(unaff_R14 + 8) = in_stack_00000070;
    iVar1 = FUN_1808b4ec0(in_stack_00000070);
    if ((iVar1 != 0) || (iVar1 = FUN_1808b8af0(), iVar1 != 0)) goto LAB_1808b9432;
    *(longlong **)(unaff_RSI + 8) = plVar2;
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar1 = FUN_1808b6de0();
    if (iVar1 != 0) goto LAB_1808b9432;
  }
  iVar1 = 0;
LAB_1808b9432:
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_18095b500,0xc6,1);
  }
  return iVar1;
}



undefined4 FUN_1808b9470(void)

{
  undefined4 unaff_EDI;
  
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808b9490(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lStackX_10;
  undefined8 uStackX_18;
  longlong *plVar7;
  undefined8 *puVar8;
  
  if ((((*(int *)(param_2 + 0xd8) == 0) && (*(int *)(param_2 + 0xdc) == 0)) &&
      (*(int *)(param_2 + 0xe0) == 0)) && (*(int *)(param_2 + 0xe4) == 0)) {
    return 0x1c;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar4 = 0;
  lStackX_10 = 0;
  uStackX_18 = 0;
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
  }
  puVar8 = &uStackX_18;
  plVar7 = &lStackX_10;
  FUN_1808cd190(*(undefined8 *)(param_1 + 0x18),(int *)(param_2 + 0xd8),
                *(undefined8 *)(param_1 + 0x38),lVar3,plVar7,puVar8);
  if (lStackX_10 == 0) {
    uVar4 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x130,&UNK_1809874b0,0x2e9,
                          (ulonglong)plVar7 & 0xffffffff00000000,
                          (ulonglong)puVar8 & 0xffffffffffffff00,1);
    if (lVar3 == 0) {
      return 0x26;
    }
    uVar6 = uVar4;
    if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_1808c9180(lVar3,param_2,lStackX_10,uVar6,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),uVar4,
                          *(undefined8 *)(param_1 + 0x30),uStackX_18);
    puVar8 = (undefined8 *)(param_2 + 0xe8);
    puVar1 = (undefined8 *)*puVar8;
    while (puVar1 != puVar8) {
      cVar2 = func_0x0001808b0620(param_2,*(undefined4 *)((longlong)puVar1 + 0x24));
      if (cVar2 == '\0') {
        lVar3 = func_0x00018085fd70(*(undefined8 *)(param_1 + 0x38),puVar1 + 2);
        lVar5 = func_0x00018085fd70(lStackX_10,puVar1 + 2);
        if (((lVar3 != 0) && (lVar5 != 0)) && (uVar6 = FUN_1808d71e0(lVar5,lVar3), (int)uVar6 != 0))
        {
          return uVar6;
        }
      }
      if (puVar1 != puVar8) {
        puVar1 = (undefined8 *)*puVar1;
      }
    }
    uVar6 = FUN_1808b8af0(param_1,uVar4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1808c9e60(uVar4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808b96c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  ulonglong in_stack_ffffffffffffff70;
  
  if (*(int *)(param_2 + 0xe0) == 0) {
    uVar5 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    uStackX_10 = 0;
    uVar5 = FUN_180738d90(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x4c0),&UNK_180987598,
                          &uStackX_10);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
    }
    uVar5 = FUN_18073f130(lVar8,uStackX_10,1,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_18073d8a0(uStackX_10,1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uStackX_18 = 0;
    if (*(int *)(param_2 + 0xe8) == 0) {
      uVar5 = FUN_180860390(*(undefined8 *)(param_1 + 0x38));
    }
    else {
      uVar5 = FUN_1808bf7d0(*(undefined8 *)(param_1 + 0x18),param_2,&uStackX_18);
    }
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    puVar6 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x238,&UNK_1809874b0,0x256,0,
                           in_stack_ffffffffffffff70 & 0xffffffffffffff00,1);
    if (puVar6 == (undefined8 *)0x0) {
      return 0x26;
    }
    if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
      uStackX_20 = 0;
    }
    else {
      uStackX_20 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
    }
    uVar3 = uStackX_18;
    uVar2 = uStackX_10;
    lVar8 = *(longlong *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = FUN_18085ab70(lVar8 + 200);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x30))();
    FUN_1808c9310(puVar6,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),uVar2,
                  *(undefined4 *)(param_1 + 0x10),uVar7,uStackX_20,param_2,uVar3,uVar5,lVar8,uVar1,
                  uVar4);
    *puVar6 = &UNK_1809871d0;
    puVar6[0x11] = &UNK_180987338;
    puVar6[0x43] = param_2;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x46] = 0;
    uVar5 = FUN_1808c9e60(puVar6);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_1808b8af0(param_1,puVar6);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(undefined8 **)(param_1 + 8) = puVar6;
  }
  return 0;
}



undefined8 FUN_1808b97f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_000000c8;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)();
  }
  FUN_18085ab70(*(longlong *)(unaff_R13 + 0x38) + 200);
  (**(code **)(*(longlong *)(*(longlong *)(unaff_R13 + 0x38) + 8) + 0x30))();
  FUN_1808c9310(in_stack_00000070,*(undefined8 *)(unaff_R13 + 0x28),
                *(undefined8 *)(unaff_R13 + 0x18),in_stack_000000c8,
                *(undefined4 *)(unaff_R13 + 0x10));
  *in_stack_00000070 = &UNK_1809871d0;
  in_stack_00000070[0x11] = &UNK_180987338;
  in_stack_00000070[0x43] = unaff_R12;
  in_stack_00000070[0x44] = 0;
  in_stack_00000070[0x45] = 0;
  in_stack_00000070[0x46] = 0;
  uVar1 = FUN_1808c9e60(in_stack_00000070);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1808b8af0(), (int)uVar1 == 0)) {
    *(undefined8 **)(unaff_R13 + 8) = in_stack_00000070;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_1808b992d(void)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  longlong unaff_R13;
  
  uVar1 = FUN_1808b8af0();
  if ((int)uVar1 == 0) {
    *(undefined8 *)(unaff_R13 + 8) = unaff_RBX;
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808b9950(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar1 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  plStackX_8 = (longlong *)0x0;
  uVar2 = FUN_1808ec950(param_2,*(undefined8 *)(param_1 + 0x38),&plStackX_8);
  plVar7 = plStackX_8;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (plStackX_8 == (longlong *)0x0) {
    uVar1 = FUN_1808b6de0(param_1,param_2,param_1 + 8);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 != 0) goto LAB_1808b9a65;
  }
  else {
    lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x180,&UNK_1809874b0,0x2ce,
                          (ulonglong)uVar1 << 0x20,uVar2 & 0xff,1);
    if (lVar3 == 0) {
      uVar2 = 0x26;
      goto LAB_1808b9a65;
    }
    if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
    }
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
    }
    uVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x30))();
    uVar4 = FUN_1808c9700(lVar3,param_2,uVar5,plStackX_8,*(undefined8 *)(param_1 + 0x18),lVar6,uVar4
                          ,*(undefined8 *)(param_1 + 0x30));
    plVar7 = (longlong *)0x0;
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  uVar2 = 0;
LAB_1808b9a65:
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,0);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b997f(void)

{
  undefined4 in_EAX;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong *in_stack_00000060;
  
  if (in_stack_00000060 == (longlong *)0x0) {
    iVar3 = FUN_1808b6de0();
    if (iVar3 != 0) goto LAB_1808b9a65;
  }
  else {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x180,&UNK_1809874b0,0x2ce,in_EAX)
    ;
    if (lVar1 == 0) {
      iVar3 = 0x26;
      goto LAB_1808b9a65;
    }
    if (*(undefined8 **)(unaff_RDI + 0x28) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(unaff_RDI + 0x28))();
    }
    (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 8) + 0x30))();
    uVar2 = FUN_1808c9700(lVar1);
    in_stack_00000060 = (longlong *)0x0;
    *(undefined8 *)(unaff_RDI + 8) = uVar2;
  }
  iVar3 = 0;
LAB_1808b9a65:
  if (in_stack_00000060 != (longlong *)0x0) {
    (**(code **)(*in_stack_00000060 + 0x30))(in_stack_00000060,0);
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b9989(void)

{
  undefined4 in_EAX;
  longlong lVar1;
  undefined8 uVar2;
  longlong *unaff_RBX;
  int iVar3;
  longlong unaff_RDI;
  
  if (unaff_RBX == (longlong *)0x0) {
    iVar3 = FUN_1808b6de0();
    if (iVar3 != 0) goto LAB_1808b9a65;
  }
  else {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x180,&UNK_1809874b0,0x2ce,in_EAX)
    ;
    if (lVar1 == 0) {
      iVar3 = 0x26;
      goto LAB_1808b9a65;
    }
    if (*(undefined8 **)(unaff_RDI + 0x28) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(unaff_RDI + 0x28))();
    }
    (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 8) + 0x30))();
    uVar2 = FUN_1808c9700(lVar1);
    unaff_RBX = (longlong *)0x0;
    *(undefined8 *)(unaff_RDI + 8) = uVar2;
  }
  iVar3 = 0;
LAB_1808b9a65:
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x30))(unaff_RBX,0);
  }
  return iVar3;
}



// WARNING: Removing unreachable block (ram,0x0001808b9a6f)

undefined8 FUN_1808b99dd(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong unaff_RDI;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)();
  }
  (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 8) + 0x30))();
  uVar1 = FUN_1808c9700();
  *(undefined8 *)(unaff_RDI + 8) = uVar1;
  return 0;
}



int FUN_1808b9a4e(void)

{
  int iVar1;
  longlong *unaff_RBX;
  
  iVar1 = FUN_1808b6de0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  if (unaff_RBX != (longlong *)0x0) {
    (**(code **)(*unaff_RBX + 0x30))();
  }
  return iVar1;
}



undefined4 FUN_1808b9a6f(void)

{
  longlong *unaff_RBX;
  undefined4 unaff_EDI;
  
  (**(code **)(*unaff_RBX + 0x30))();
  return unaff_EDI;
}








