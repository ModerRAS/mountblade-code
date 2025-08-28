#include "TaleWorlds.Native.Split.h"

// 99_part_13_part027.c - 10 个函数

// 函数: void FUN_1808b6c30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808b6c30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong lStack_a8;
  undefined4 uStack_a0;
  longlong lStack_98;
  undefined1 auStack_90 [80];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  *param_4 = 0;
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x298))((longlong *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2,auStack_90);
  }
  if ((((*(int *)(lVar2 + 0x20) != 0) || (*(int *)(lVar2 + 0x24) != 0)) ||
      (*(int *)(lVar2 + 0x28) != 0)) || (*(int *)(lVar2 + 0x2c) != 0)) {
    lVar3 = (**(code **)(*(longlong *)*param_1 + 0x268))((longlong *)*param_1,lVar2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar2 + 0x30,auStack_90);
    }
    lStack_98 = 0;
    lVar4 = (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,lVar2 + 0x20,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar2 + 0x20,auStack_90);
    }
    iVar1 = FUN_1808b86e0(param_1,lVar4,*(undefined4 *)(lVar2 + 0x40),&lStack_98);
    if ((iVar1 == 0) && (lStack_98 != 0)) {
      lStack_a8 = lStack_98;
      lStack_98 = 0;
      uStack_a0 = param_3;
      iVar1 = func_0x0001808bc310(param_1[1],&lStack_98,lVar2,lVar3);
      if ((iVar1 == 0) && (iVar1 = func_0x0001808c6d00(lStack_98), iVar1 == 0)) {
        *param_4 = lStack_98;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_c8);
}






// 函数: void FUN_1808b6cb1(longlong *param_1,undefined8 param_2)
void FUN_1808b6cb1(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R15;
  longlong in_stack_00000030;
  ulonglong in_stack_00000088;
  
  lVar2 = (**(code **)(*param_1 + 0x268))(param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(unaff_RDI + 0x30,&stack0x00000038);
  }
  in_stack_00000030 = 0;
  lVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x110))((longlong *)*unaff_RSI,unaff_RDI + 0x20,1);
  if (lVar2 != 0) {
    iVar1 = FUN_1808b86e0();
    if ((iVar1 == 0) && (in_stack_00000030 != 0)) {
      in_stack_00000030 = 0;
      iVar1 = func_0x0001808bc310(unaff_RSI[1],&stack0x00000030);
      if ((iVar1 == 0) && (iVar1 = func_0x0001808c6d00(in_stack_00000030), iVar1 == 0)) {
        *unaff_R15 = in_stack_00000030;
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000088 ^ (ulonglong)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_18084b240(unaff_RDI + 0x20,&stack0x00000038);
}






// 函数: void FUN_1808b6db3(void)
void FUN_1808b6db3(void)

{
  ulonglong in_stack_00000088;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000088 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1808b6de0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x98,&UNK_1809874b0,0x329,0,0,1);
  if (lVar2 == 0) {
    uVar1 = 0x26;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x30))();
    uVar3 = func_0x0001808c9100(lVar2,param_2,uVar3,*(undefined8 *)(param_1 + 0x18));
    *param_3 = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6e80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808b6e80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  longlong lStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  lStack_80 = 0;
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x288))((longlong *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2,auStack_68);
  }
  lStack_88 = 0;
  if ((((*(int *)(lVar2 + 0x60) == 0) && (*(int *)(lVar2 + 100) == 0)) &&
      (*(int *)(lVar2 + 0x68) == 0)) && (*(int *)(lVar2 + 0x6c) == 0)) {
    if (((*(int *)(lVar2 + 0x40) == 0) && (*(int *)(lVar2 + 0x44) == 0)) &&
       ((*(int *)(lVar2 + 0x48) == 0 && (*(int *)(lVar2 + 0x4c) == 0)))) goto LAB_1808b6fa7;
    uStack_78 = *(undefined4 *)(lVar2 + 0x40);
    uStack_74 = *(undefined4 *)(lVar2 + 0x44);
    uStack_70 = *(undefined4 *)(lVar2 + 0x48);
    uStack_6c = *(undefined4 *)(lVar2 + 0x4c);
    iVar1 = FUN_1808bc010(param_1[2],&uStack_78,0,&lStack_88);
    if (iVar1 != 0) goto LAB_1808b6fa7;
  }
  plStack_90 = &lStack_80;
  lStack_98 = param_1[2] + 0x290;
  iVar1 = FUN_1808b6fd0(param_1,lVar2,param_3,lStack_88);
  lVar2 = lStack_80;
  if (((iVar1 == 0) &&
      ((lStack_88 == 0 ||
       (iVar1 = FUN_18073f130(*(undefined8 *)(lStack_88 + 0x78),
                              *(undefined8 *)(*(longlong *)(lStack_80 + 0x2b0) + 0x78),1,0),
       iVar1 == 0)))) && (iVar1 = FUN_1808624a0(lVar2), iVar1 == 0)) {
    *param_4 = lVar2;
  }
LAB_1808b6fa7:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6fd0(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
void FUN_1808b6fd0(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  longlong *plStack_118;
  ulonglong uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  char acStack_c8 [8];
  longlong lStack_c0;
  char cStack_b8;
  longlong lStack_b0;
  char cStack_a8;
  longlong lStack_a0;
  char cStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined1 auStack_78 [40];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  plStack_d0 = param_6;
  if (param_6 != (longlong *)0x0) {
    *param_6 = 0;
  }
  lStack_88 = param_1[2];
  acStack_c8[0] = '\0';
  lStack_c0 = lStack_88 + 0x38;
  cStack_b8 = '\0';
  *(int *)(lStack_88 + 0x98) = *(int *)(lStack_88 + 0x98) + 1;
  lStack_b0 = lStack_88 + 0x170;
  *(int *)(lStack_88 + 0x1d0) = *(int *)(lStack_88 + 0x1d0) + 1;
  lStack_a0 = lStack_88 + 0x108;
  *(int *)(lStack_88 + 0x168) = *(int *)(lStack_88 + 0x168) + 1;
  lStack_90 = lStack_88 + 0x1d8;
  *(int *)(lStack_88 + 0x238) = *(int *)(lStack_88 + 0x238) + 1;
  cStack_a8 = '\0';
  cStack_98 = '\0';
  if ((param_2 != 0) &&
     (((((*(int *)(param_2 + 0x30) != 0 || (*(int *)(param_2 + 0x34) != 0)) ||
        (*(int *)(param_2 + 0x38) != 0)) || (*(int *)(param_2 + 0x3c) != 0)) &&
      (((*(int *)(param_2 + 0x50) != 0 || (*(int *)(param_2 + 0x54) != 0)) ||
       ((*(int *)(param_2 + 0x58) != 0 || (*(int *)(param_2 + 0x5c) != 0)))))))) {
    lVar3 = (**(code **)(*(longlong *)*param_1 + 0x2f0))((longlong *)*param_1,param_2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_2 + 0x30,auStack_78);
    }
    uStack_108 = CONCAT31(uStack_108._1_3_,1);
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    plStack_118 = (longlong *)((ulonglong)plStack_118 & 0xffffffff00000000);
    lVar4 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x4f0,&UNK_1809874b0,0x431);
    if (lVar4 != 0) {
      plStack_118 = (longlong *)param_1[2];
      uStack_f8 = param_5;
      uStack_110 = plStack_118[0x98];
      uStack_108 = param_3;
      uStack_100 = param_4;
      lVar4 = FUN_18085d860(lVar4,param_2,lVar3,*param_1);
      if (lVar4 == 0) {
        plVar7 = (longlong *)0x0;
        plVar8 = (longlong *)&DAT_00000008;
      }
      else {
        plVar7 = (longlong *)(lVar4 + 8);
        plVar8 = plVar7;
      }
      uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
      iVar1 = FUN_1808b89f0(uVar5,plVar7);
      if ((iVar1 == 0) && (iVar1 = FUN_1808b8b80(param_1[1],param_2 + 0x10,lVar4), iVar1 == 0)) {
        for (uVar6 = *(ulonglong *)(param_2 + 0x70);
            (*(ulonglong *)(param_2 + 0x70) <= uVar6 &&
            (uVar6 < (longlong)*(int *)(param_2 + 0x78) * 0x10 + *(ulonglong *)(param_2 + 0x70)));
            uVar6 = uVar6 + 0x10) {
          lStack_e8 = 0;
          iVar1 = FUN_1808bc010(param_1[2],uVar6,lVar4,&lStack_e8);
          if (iVar1 != 0) goto LAB_1808b7425;
        }
        lStack_e8 = *(longlong *)(param_2 + 0x50);
        uStack_e0 = *(undefined4 *)(param_2 + 0x58);
        uStack_dc = *(undefined4 *)(param_2 + 0x5c);
        uStack_d8 = 0;
        iVar1 = FUN_1808bc010(param_1[2],&lStack_e8,lVar4,&uStack_d8);
        if ((iVar1 == 0) && (iVar1 = FUN_1808616f0(lVar4,uStack_d8), iVar1 == 0)) {
          iVar1 = 0;
          if (0 < *(int *)(param_2 + 0x88)) {
            do {
              iVar2 = FUN_18085ea80(lVar4,0xffffffff,
                                    (longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x80));
              if (iVar2 != 0) goto LAB_1808b7425;
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_2 + 0x88));
          }
          for (uVar6 = *(ulonglong *)(lVar3 + 0x28);
              (*(ulonglong *)(lVar3 + 0x28) <= uVar6 &&
              (uVar6 < (longlong)*(int *)(lVar3 + 0x30) * 0x10 + *(ulonglong *)(lVar3 + 0x28)));
              uVar6 = uVar6 + 0x10) {
            lStack_e8 = 0;
            uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
            iVar1 = FUN_1808b6c30(uVar5,uVar6,1,&lStack_e8);
            if ((iVar1 != 0) ||
               ((lStack_e8 != 0 && (iVar1 = func_0x0001808b8f10(lVar4 + 0x1e0), iVar1 != 0))))
            goto LAB_1808b7425;
          }
          iVar1 = FUN_1808b8f60(lVar4,uStack_d8);
          if (iVar1 == 0) {
            lVar3 = param_1[2];
            plVar7 = (longlong *)(lVar4 + 0x60);
            if (plVar7 != (longlong *)0x0) {
              plVar8 = (longlong *)*plVar7;
              iVar1 = 0;
              if (plVar8 != plVar7) {
                do {
                  plVar8 = (longlong *)*plVar8;
                  iVar1 = iVar1 + 1;
                } while (plVar8 != plVar7);
                if (iVar1 != 0) goto LAB_1808b7425;
              }
              *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x10);
              *plVar7 = lVar3 + 8;
              *(longlong **)(lVar3 + 0x10) = plVar7;
              **(longlong **)(lVar4 + 0x68) = (longlong)plVar7;
              iVar1 = FUN_1808b7f30(param_1,lVar4);
              if (iVar1 == 0) {
                if ((((*(int *)(param_2 + 0x60) != 0) || (*(int *)(param_2 + 100) != 0)) ||
                    (*(int *)(param_2 + 0x68) != 0)) || (*(int *)(param_2 + 0x6c) != 0)) {
                  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x280))
                                    ((longlong *)*param_1,param_2 + 0x60,1);
                  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
                    FUN_18084b240(param_2 + 0x60,auStack_78);
                  }
                  plStack_118 = &lStack_e8;
                  lStack_e8 = 0;
                  iVar1 = FUN_1808d8040(param_1[2] + 0x2c8,lVar3,*(undefined4 *)(param_1[2] + 0x774)
                                        ,lVar4);
                  if (iVar1 != 0) goto LAB_1808b7425;
                  *(longlong *)(lVar4 + 0x478) = lStack_e8;
                }
                iVar1 = FUN_1808b66c0(acStack_c8);
                if ((iVar1 == 0) && (plStack_d0 != (longlong *)0x0)) {
                  *plStack_d0 = lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1808b7425:
  if (cStack_98 == '\0') {
    *(undefined4 *)(lStack_90 + 0x60) = 0;
    FUN_18084f560(lStack_90 + 0x30);
  }
  if (cStack_a8 == '\0') {
    *(undefined4 *)(lStack_a0 + 0x60) = 0;
    FUN_18084f040(lStack_a0 + 0x30);
  }
  if (cStack_b8 == '\0') {
    *(undefined4 *)(lStack_b0 + 0x60) = 0;
    FUN_18084f040(lStack_b0 + 0x30);
  }
  if (acStack_c8[0] == '\0') {
    *(undefined4 *)(lStack_c0 + 0x60) = 0;
    FUN_18084f2d0(lStack_c0 + 0x30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b6ff5(undefined8 *param_1,longlong param_2)
void FUN_1808b6ff5(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *in_RAX;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong *plVar8;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong in_stack_00000020;
  longlong in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  longlong *plStack0000000000000068;
  char cStack0000000000000070;
  longlong lStack0000000000000078;
  
  *(undefined8 *)(in_R11 + -0x20) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R14;
  if (in_RAX != (longlong *)0x0) {
    *in_RAX = 0;
  }
  lVar3 = param_1[2];
  cStack0000000000000070 = '\0';
  lStack0000000000000078 = lVar3 + 0x38;
  *(undefined1 *)(unaff_RBP + -0x80) = 0;
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  *(int *)(lVar3 + 0x1d0) = *(int *)(lVar3 + 0x1d0) + 1;
  *(longlong *)(unaff_RBP + -0x78) = lVar3 + 0x170;
  *(int *)(lVar3 + 0x168) = *(int *)(lVar3 + 0x168) + 1;
  *(longlong *)(unaff_RBP + -0x68) = lVar3 + 0x108;
  *(int *)(lVar3 + 0x238) = *(int *)(lVar3 + 0x238) + 1;
  *(undefined1 *)(unaff_RBP + -0x70) = 0;
  *(undefined1 *)(unaff_RBP + -0x60) = 0;
  *(longlong *)(unaff_RBP + -0x58) = lVar3 + 0x1d8;
  *(longlong *)(unaff_RBP + -0x50) = lVar3;
  if ((param_2 != 0) &&
     (((((*(int *)(param_2 + 0x30) != 0 || (*(int *)(param_2 + 0x34) != 0)) ||
        (*(int *)(param_2 + 0x38) != 0)) || (*(int *)(param_2 + 0x3c) != 0)) &&
      (((*(int *)(param_2 + 0x50) != 0 || (*(int *)(param_2 + 0x54) != 0)) ||
       ((*(int *)(param_2 + 0x58) != 0 || (*(int *)(param_2 + 0x5c) != 0)))))))) {
    plStack0000000000000068 = in_RAX;
    lVar3 = (**(code **)(*(longlong *)*param_1 + 0x2f0))((longlong *)*param_1,param_2 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_2 + 0x30,unaff_RBP + -0x40);
    }
    lVar4 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x4f0,&UNK_1809874b0,0x431,
                          in_stack_00000020 & 0xffffffff00000000);
    if (lVar4 != 0) {
      lVar4 = FUN_18085d860(lVar4,param_2,lVar3,*param_1,param_1[2]);
      if (lVar4 == 0) {
        plVar7 = (longlong *)0x0;
        plVar8 = (longlong *)&DAT_00000008;
      }
      else {
        plVar7 = (longlong *)(lVar4 + 8);
        plVar8 = plVar7;
      }
      uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
      iVar1 = FUN_1808b89f0(uVar5,plVar7);
      if ((iVar1 == 0) && (iVar1 = FUN_1808b8b80(param_1[1],param_2 + 0x10,lVar4), iVar1 == 0)) {
        for (uVar6 = *(ulonglong *)(param_2 + 0x70);
            (*(ulonglong *)(param_2 + 0x70) <= uVar6 &&
            (uVar6 < (longlong)*(int *)(param_2 + 0x78) * 0x10 + *(ulonglong *)(param_2 + 0x70)));
            uVar6 = uVar6 + 0x10) {
          in_stack_00000050 = 0;
          iVar1 = FUN_1808bc010(param_1[2],uVar6,lVar4,&stack0x00000050);
          if (iVar1 != 0) goto LAB_1808b7425;
        }
        in_stack_00000050 = *(longlong *)(param_2 + 0x50);
        uStack0000000000000058 = *(undefined4 *)(param_2 + 0x58);
        uStack000000000000005c = *(undefined4 *)(param_2 + 0x5c);
        in_stack_00000060 = 0;
        iVar1 = FUN_1808bc010(param_1[2],&stack0x00000050,lVar4,&stack0x00000060);
        if ((iVar1 == 0) && (iVar1 = FUN_1808616f0(lVar4,in_stack_00000060), iVar1 == 0)) {
          iVar1 = 0;
          if (0 < *(int *)(param_2 + 0x88)) {
            do {
              iVar2 = FUN_18085ea80(lVar4,0xffffffff,
                                    (longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x80));
              if (iVar2 != 0) goto LAB_1808b7425;
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_2 + 0x88));
          }
          for (uVar6 = *(ulonglong *)(lVar3 + 0x28);
              (*(ulonglong *)(lVar3 + 0x28) <= uVar6 &&
              (uVar6 < (longlong)*(int *)(lVar3 + 0x30) * 0x10 + *(ulonglong *)(lVar3 + 0x28)));
              uVar6 = uVar6 + 0x10) {
            in_stack_00000050 = 0;
            uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
            iVar1 = FUN_1808b6c30(uVar5,uVar6,1,&stack0x00000050);
            if ((iVar1 != 0) ||
               ((in_stack_00000050 != 0 && (iVar1 = func_0x0001808b8f10(lVar4 + 0x1e0), iVar1 != 0))
               )) goto LAB_1808b7425;
          }
          iVar1 = FUN_1808b8f60(lVar4,in_stack_00000060);
          if (iVar1 == 0) {
            lVar3 = param_1[2];
            plVar7 = (longlong *)(lVar4 + 0x60);
            if (plVar7 != (longlong *)0x0) {
              plVar8 = (longlong *)*plVar7;
              iVar1 = 0;
              if (plVar8 != plVar7) {
                do {
                  plVar8 = (longlong *)*plVar8;
                  iVar1 = iVar1 + 1;
                } while (plVar8 != plVar7);
                if (iVar1 != 0) goto LAB_1808b7425;
              }
              *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x10);
              *plVar7 = lVar3 + 8;
              *(longlong **)(lVar3 + 0x10) = plVar7;
              **(longlong **)(lVar4 + 0x68) = (longlong)plVar7;
              iVar1 = FUN_1808b7f30(param_1,lVar4);
              if (iVar1 == 0) {
                if ((((*(int *)(param_2 + 0x60) != 0) || (*(int *)(param_2 + 100) != 0)) ||
                    (*(int *)(param_2 + 0x68) != 0)) || (*(int *)(param_2 + 0x6c) != 0)) {
                  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x280))
                                    ((longlong *)*param_1,param_2 + 0x60,1);
                  if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
                    FUN_18084b240(param_2 + 0x60,unaff_RBP + -0x40);
                  }
                  in_stack_00000050 = 0;
                  iVar1 = FUN_1808d8040(param_1[2] + 0x2c8,lVar3,*(undefined4 *)(param_1[2] + 0x774)
                                        ,lVar4,&stack0x00000050);
                  if (iVar1 != 0) goto LAB_1808b7425;
                  *(longlong *)(lVar4 + 0x478) = in_stack_00000050;
                }
                iVar1 = FUN_1808b66c0(&stack0x00000070);
                if ((iVar1 == 0) && (plStack0000000000000068 != (longlong *)0x0)) {
                  *plStack0000000000000068 = lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1808b7425:
  if (*(char *)(unaff_RBP + -0x60) == '\0') {
    lVar3 = *(longlong *)(unaff_RBP + -0x58);
    *(undefined4 *)(lVar3 + 0x60) = 0;
    FUN_18084f560(lVar3 + 0x30);
  }
  if (*(char *)(unaff_RBP + -0x70) == '\0') {
    lVar3 = *(longlong *)(unaff_RBP + -0x68);
    *(undefined4 *)(lVar3 + 0x60) = 0;
    FUN_18084f040(lVar3 + 0x30);
  }
  if (*(char *)(unaff_RBP + -0x80) == '\0') {
    lVar3 = *(longlong *)(unaff_RBP + -0x78);
    *(undefined4 *)(lVar3 + 0x60) = 0;
    FUN_18084f040(lVar3 + 0x30);
  }
  if (cStack0000000000000070 == '\0') {
    *(undefined4 *)(lStack0000000000000078 + 0x60) = 0;
    FUN_18084f2d0(lStack0000000000000078 + 0x30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x18) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b7453(void)
void FUN_1808b7453(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  char in_stack_00000070;
  longlong in_stack_00000078;
  
  lVar1 = *(longlong *)(unaff_RBP + -0x58);
  *(undefined4 *)(lVar1 + 0x60) = unaff_EDI;
  FUN_18084f560(lVar1 + 0x30);
  if (*(char *)(unaff_RBP + -0x70) == '\0') {
    lVar1 = *(longlong *)(unaff_RBP + -0x68);
    *(undefined4 *)(lVar1 + 0x60) = unaff_EDI;
    FUN_18084f040(lVar1 + 0x30);
  }
  if (*(char *)(unaff_RBP + -0x80) == '\0') {
    lVar1 = *(longlong *)(unaff_RBP + -0x78);
    *(undefined4 *)(lVar1 + 0x60) = unaff_EDI;
    FUN_18084f040(lVar1 + 0x30);
  }
  if (in_stack_00000070 == '\0') {
    *(undefined4 *)(in_stack_00000078 + 0x60) = unaff_EDI;
    FUN_18084f2d0(in_stack_00000078 + 0x30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x18) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b74d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
void FUN_1808b74d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x290))((longlong *)*param_1,param_2,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2,auStack_68);
  }
  iVar1 = *(int *)(lVar2 + 0x48);
  if (iVar1 == 0) {
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    lStack_80 = (ulonglong)lStack_80._1_7_ << 8;
    uStack_88 = (undefined8 *)((ulonglong)uStack_88._4_4_ << 0x20);
    lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xe0,&UNK_1809874b0);
    if (lVar3 == 0) goto LAB_1808b7702;
    uStack_88 = param_1;
    lStack_80 = param_4;
    plVar4 = (longlong *)FUN_1808d2d20(lVar3,lVar2,param_3,param_1[1]);
  }
  else if (iVar1 == 1) {
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    lStack_80 = (ulonglong)lStack_80._1_7_ << 8;
    uStack_88 = (undefined8 *)((ulonglong)uStack_88._4_4_ << 0x20);
    lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xb8,&UNK_1809874b0);
    if (lVar3 == 0) goto LAB_1808b7702;
    uStack_88 = param_1;
    lStack_80 = param_4;
    plVar4 = (longlong *)FUN_1808d3040(lVar3,lVar2,param_3,param_1[1]);
  }
  else if (iVar1 == 2) {
    uStack_78 = CONCAT71(uStack_78._1_7_,1);
    lStack_80 = (ulonglong)lStack_80._1_7_ << 8;
    uStack_88 = (undefined8 *)((ulonglong)uStack_88._4_4_ << 0x20);
    lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),200,&UNK_1809874b0);
    if (lVar3 == 0) goto LAB_1808b7702;
    uStack_88 = param_1;
    lStack_80 = param_4;
    plVar4 = (longlong *)FUN_1808d2dd0(lVar3,lVar2,param_3,param_1[1]);
  }
  else {
    plVar4 = (longlong *)0x0;
    if (iVar1 == 3) {
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      lStack_80 = (ulonglong)lStack_80._1_7_ << 8;
      uStack_88 = (undefined8 *)((ulonglong)uStack_88._4_4_ << 0x20);
      lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xd8,&UNK_1809874b0);
      if (lVar3 == 0) goto LAB_1808b7702;
      uStack_78 = param_1[3];
      uStack_88 = param_1;
      lStack_80 = param_4;
      plVar4 = (longlong *)FUN_1808d2e60(lVar3,lVar2,param_3,param_1[1]);
    }
  }
  plVar5 = plVar4 + 9;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  iVar1 = FUN_1808b89f0(param_1,plVar5);
  if (((iVar1 == 0) && (iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4), iVar1 == 0)) &&
     (iVar1 = func_0x0001808c19c0(param_1[1],plVar4), iVar1 == 0)) {
    *param_5 = plVar4;
  }
LAB_1808b7702:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b752f(int param_1)
void FUN_1808b752f(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  undefined8 *unaff_R15;
  undefined8 in_stack_00000020;
  uint uVar4;
  ulonglong in_stack_00000068;
  
  plVar3 = (longlong *)0x0;
  uVar4 = (uint)((ulonglong)in_stack_00000020 >> 0x20);
  if (param_1 == 0) {
    lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xe0,&UNK_1809874b0,0xe9,
                          (ulonglong)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (longlong *)FUN_1808d2d20(lVar2);
  }
  else if (param_1 == 1) {
    lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xb8,&UNK_1809874b0,0xf5,
                          (ulonglong)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (longlong *)FUN_1808d3040(lVar2);
  }
  else if (param_1 == 2) {
    lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),200,&UNK_1809874b0,0xef,
                          (ulonglong)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (longlong *)FUN_1808d2dd0(lVar2);
  }
  else if (param_1 == 3) {
    lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xd8,&UNK_1809874b0,0xfb,
                          (ulonglong)uVar4 << 0x20);
    if (lVar2 == 0) goto LAB_1808b7702;
    plVar3 = (longlong *)FUN_1808d2e60(lVar2);
  }
  iVar1 = FUN_1808b89f0();
  if (((iVar1 == 0) && (iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3), iVar1 == 0)) &&
     (iVar1 = func_0x0001808c19c0(*(undefined8 *)(unaff_RDI + 8),plVar3), iVar1 == 0)) {
    *unaff_R15 = plVar3;
  }
LAB_1808b7702:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b7707(void)
void FUN_1808b7707(void)

{
  ulonglong in_stack_00000068;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




