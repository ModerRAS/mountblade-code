#include "TaleWorlds.Native.Split.h"

// 05_networking_part094.c - 6 个函数

// 函数: void FUN_180896c60(undefined8 param_1,longlong param_2,uint param_3,char param_4)
void FUN_180896c60(undefined8 param_1,longlong param_2,uint param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined1 auStack_328 [32];
  undefined4 uStack_308;
  float afStack_304 [3];
  undefined *puStack_2f8;
  int iStack_2f0;
  undefined8 uStack_2e8;
  ulonglong uStack_2e0;
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  undefined *puStack_2a8;
  int iStack_2a0;
  uint uStack_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined *puStack_278;
  undefined4 uStack_270;
  uint uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_260 [520];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_328;
  iVar5 = 0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_2 + 0x220);
    if (iVar3 == 0) {
      puStack_278 = &UNK_180982508;
      uStack_270 = 0;
      uStack_264 = 0;
      uStack_268 = param_3;
      func_0x00018076b450(auStack_260,*(undefined8 *)(param_2 + 0x228),0x200);
      ppuVar6 = &puStack_278;
LAB_180896ce3:
      iVar3 = FUN_180897520(param_1,ppuVar6);
    }
    else {
      iStack_2f0 = 0;
      if (1 < iVar3 - 1U) {
        puStack_2f8 = &UNK_180982608;
        ppuVar6 = &puStack_2f8;
        uStack_2b0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        lStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2ac = param_3;
        goto LAB_180896ce3;
      }
      puStack_2f8 = &UNK_180982588;
      lStack_2d8 = (ulonglong)param_3 << 0x20;
      uStack_2e8 = *(undefined8 *)(param_2 + 0x228);
      uStack_2e0 = (ulonglong)CONCAT14(iVar3 != 1,*(undefined4 *)(param_2 + 0x230));
      iVar3 = FUN_180897520(param_1,&puStack_2f8);
    }
    if (iVar3 != 0) goto FUN_1808974f4;
    uStack_298 = *(uint *)(param_2 + 0x10);
    uStack_294 = *(undefined4 *)(param_2 + 0x14);
    iStack_290 = *(int *)(param_2 + 0x18);
    uStack_28c = *(undefined4 *)(param_2 + 0x1c);
    iStack_2a0 = 0;
    puStack_2a8 = &UNK_180985a80;
    uStack_284 = 0;
    uStack_288 = param_3;
    iVar3 = FUN_180897520(param_1,&puStack_2a8);
    if (iVar3 != 0) goto FUN_1808974f4;
    iVar7 = 0;
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x2e8) + 0x2c);
    if (0 < iVar3) {
      do {
        iStack_2f0 = 0;
        puStack_2f8 = &UNK_180982cc0;
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,param_3);
        iVar4 = FUN_180897520(param_1,&puStack_2f8);
        if (iVar4 != 0) goto FUN_1808974f4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
  }
  if (((param_4 != '\0') || (*(int *)(*(longlong *)(param_2 + 0x2e8) + 0x34) == 0)) &&
     (iVar3 = FUN_180897b40(param_1,param_2,param_3), iVar3 == 0)) {
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x48))); iVar3 = iVar3 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar3 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStack_308 = 0;
        iVar7 = func_0x00018088c500(lVar2,&uStack_308);
        if (iVar7 != 0) goto FUN_1808974f4;
        uStack_28c = *(undefined4 *)(lVar1 + 0x10);
        uStack_288 = *(uint *)(lVar1 + 0x14);
        uStack_284 = *(undefined4 *)(lVar1 + 0x18);
        uStack_280 = *(undefined4 *)(lVar1 + 0x1c);
        puStack_2a8 = &UNK_1809830b8;
        iVar4 = iVar5 + 1;
        uStack_27c = uStack_308;
        iStack_2a0 = iVar7;
        uStack_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = FUN_180897520(param_1,&puStack_2a8);
        if ((iVar5 != 0) || (iVar5 = FUN_18088c970(lVar2,afStack_304), iVar5 != 0))
        goto FUN_1808974f4;
        if (afStack_304[0] != 1.0) {
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,afStack_304[0]);
          puStack_2f8 = &UNK_1809842e0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          iStack_2f0 = iVar5;
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_180984358;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_1809843d0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar7 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar7 != 0) goto FUN_1808974f4;
        }
      }
    }
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x58))); iVar3 = iVar3 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x50) + (longlong)iVar3 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStack_308 = 0;
        iVar7 = func_0x00018088c500(lVar2,&uStack_308);
        if (iVar7 != 0) goto FUN_1808974f4;
        uStack_28c = *(undefined4 *)(lVar1 + 0x10);
        uStack_288 = *(uint *)(lVar1 + 0x14);
        uStack_284 = *(undefined4 *)(lVar1 + 0x18);
        uStack_280 = *(undefined4 *)(lVar1 + 0x1c);
        puStack_2a8 = &UNK_1809830b8;
        iVar4 = iVar5 + 1;
        uStack_27c = uStack_308;
        iStack_2a0 = iVar7;
        uStack_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = FUN_180897520(param_1,&puStack_2a8);
        if ((iVar5 != 0) || (iVar5 = FUN_18088c970(lVar2,afStack_304), iVar5 != 0))
        goto FUN_1808974f4;
        if (afStack_304[0] != 1.0) {
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,afStack_304[0]);
          puStack_2f8 = &UNK_1809842e0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          iStack_2f0 = iVar5;
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_180984358;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_1809843d0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar7 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar7 != 0) goto FUN_1808974f4;
        }
      }
    }
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x68))); iVar3 = iVar3 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + (longlong)iVar3 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStack_308 = 0;
        iVar7 = func_0x00018088c500(lVar2,&uStack_308);
        if (iVar7 != 0) goto FUN_1808974f4;
        uStack_28c = *(undefined4 *)(lVar1 + 0x10);
        uStack_288 = *(uint *)(lVar1 + 0x14);
        uStack_284 = *(undefined4 *)(lVar1 + 0x18);
        uStack_280 = *(undefined4 *)(lVar1 + 0x1c);
        puStack_2a8 = &UNK_1809830b8;
        iVar4 = iVar5 + 1;
        uStack_27c = uStack_308;
        iStack_2a0 = iVar7;
        uStack_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = FUN_180897520(param_1,&puStack_2a8);
        if ((iVar5 != 0) || (iVar5 = FUN_18088c970(lVar2,afStack_304), iVar5 != 0))
        goto FUN_1808974f4;
        if (afStack_304[0] != 1.0) {
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,afStack_304[0]);
          puStack_2f8 = &UNK_1809842e0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          iStack_2f0 = iVar5;
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_180984358;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_1809843d0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar7 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar7 != 0) goto FUN_1808974f4;
        }
      }
    }
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_2 + 0x78))); iVar3 = iVar3 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar3 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStack_308 = 0;
        iVar7 = func_0x00018088c500(lVar2,&uStack_308);
        if (iVar7 != 0) goto FUN_1808974f4;
        uStack_28c = *(undefined4 *)(lVar1 + 0x10);
        uStack_288 = *(uint *)(lVar1 + 0x14);
        uStack_284 = *(undefined4 *)(lVar1 + 0x18);
        uStack_280 = *(undefined4 *)(lVar1 + 0x1c);
        puStack_2a8 = &UNK_1809830b8;
        iVar4 = iVar5 + 1;
        uStack_27c = uStack_308;
        iStack_2a0 = iVar7;
        uStack_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = FUN_180897520(param_1,&puStack_2a8);
        if ((iVar5 != 0) || (iVar5 = FUN_18088c970(lVar2,afStack_304), iVar5 != 0))
        goto FUN_1808974f4;
        if (afStack_304[0] != 1.0) {
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,afStack_304[0]);
          puStack_2f8 = &UNK_1809842e0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          iStack_2f0 = iVar5;
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_180984358;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar5 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar5 != 0) goto FUN_1808974f4;
        }
        iVar5 = iVar4;
        if (*(char *)(lVar2 + 0x29) != '\0') {
          iStack_2f0 = 0;
          puStack_2f8 = &UNK_1809843d0;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
          iVar7 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar7 != 0) goto FUN_1808974f4;
        }
      }
    }
    iVar5 = 0;
    iVar3 = 0;
    do {
      if ((iVar3 < 0) || (*(int *)(param_2 + 200) <= iVar3)) break;
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + (longlong)iVar3 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (lVar2 != 0) {
        uStack_308 = 0;
        iVar7 = func_0x00018088c500(lVar2,&uStack_308);
        if (iVar7 != 0) break;
        uStack_28c = *(undefined4 *)(lVar1 + 0x10);
        uStack_288 = *(uint *)(lVar1 + 0x14);
        uStack_284 = *(undefined4 *)(lVar1 + 0x18);
        uStack_280 = *(undefined4 *)(lVar1 + 0x1c);
        puStack_2a8 = &UNK_180983238;
        iVar4 = iVar5 + 1;
        uStack_27c = uStack_308;
        iStack_2a0 = iVar7;
        uStack_298 = param_3;
        iStack_290 = iVar5;
        iVar5 = FUN_180897520(param_1,&puStack_2a8);
        if ((iVar5 != 0) || (iVar7 = FUN_18088cbb0(lVar2,afStack_304,0), iVar7 != 0)) break;
        iVar5 = iVar4;
        if (afStack_304[0] != 1.0) {
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,afStack_304[0]);
          puStack_2f8 = &UNK_1809844c8;
          uStack_2e8 = CONCAT44(uStack_2e8._4_4_,uStack_308);
          iStack_2f0 = iVar7;
          iVar7 = FUN_180897520(param_1,&puStack_2f8);
          if (iVar7 != 0) break;
        }
      }
      iVar3 = iVar3 + 1;
    } while( true );
  }
FUN_1808974f4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_328);
}





// 函数: void FUN_180896e11(void)
void FUN_180896e11(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  int unaff_R12D;
  longlong unaff_R13;
  char unaff_R15B;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float fVar10;
  undefined4 uStackX_20;
  float fStackX_24;
  undefined *in_stack_00000030;
  int in_stack_00000038;
  undefined4 in_stack_00000040;
  float in_stack_00000048;
  
  if (((unaff_R15B != '\0') || (*(int *)(*(longlong *)(unaff_R13 + 0x2e8) + 0x34) == unaff_R12D)) &&
     (iVar7 = FUN_180897b40(), iVar7 == 0)) {
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x48))); iVar7 = iVar7 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(unaff_R13 + 0x40) + (longlong)iVar7 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStackX_20 = 0;
        iVar8 = func_0x00018088c500(lVar2,&uStackX_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(undefined4 *)(lVar1 + 0x10);
        uVar4 = *(undefined4 *)(lVar1 + 0x14);
        uVar5 = *(undefined4 *)(lVar1 + 0x18);
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(undefined **)(unaff_RBP + -0x80) = &UNK_1809830b8;
        unaff_R12D = unaff_R12D + 1;
        *(undefined4 *)(unaff_RBP + -0x54) = uStackX_20;
        *(undefined4 *)(unaff_RBP + -0x70) = unaff_EBX;
        *(undefined4 *)(unaff_RBP + -100) = uVar3;
        *(undefined4 *)(unaff_RBP + -0x60) = uVar4;
        *(undefined4 *)(unaff_RBP + -0x5c) = uVar5;
        *(undefined4 *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = FUN_180897520(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = FUN_18088c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          in_stack_00000048 = fStackX_24;
          in_stack_00000030 = &UNK_1809842e0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000038 = iVar8;
          iVar8 = FUN_180897520(fStackX_24,&stack0x00000030);
          fVar10 = extraout_XMM0_Da;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_180984358;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_00;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_1809843d0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x58))); iVar7 = iVar7 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(unaff_R13 + 0x50) + (longlong)iVar7 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStackX_20 = 0;
        iVar8 = func_0x00018088c500(lVar2,&uStackX_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(undefined4 *)(lVar1 + 0x10);
        uVar4 = *(undefined4 *)(lVar1 + 0x14);
        uVar5 = *(undefined4 *)(lVar1 + 0x18);
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(undefined **)(unaff_RBP + -0x80) = &UNK_1809830b8;
        unaff_R12D = unaff_R12D + 1;
        *(undefined4 *)(unaff_RBP + -0x54) = uStackX_20;
        *(undefined4 *)(unaff_RBP + -0x70) = unaff_EBX;
        *(undefined4 *)(unaff_RBP + -100) = uVar3;
        *(undefined4 *)(unaff_RBP + -0x60) = uVar4;
        *(undefined4 *)(unaff_RBP + -0x5c) = uVar5;
        *(undefined4 *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = FUN_180897520(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = FUN_18088c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          in_stack_00000048 = fStackX_24;
          in_stack_00000030 = &UNK_1809842e0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000038 = iVar8;
          iVar8 = FUN_180897520(fStackX_24,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_01;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_180984358;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_02;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_1809843d0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x68))); iVar7 = iVar7 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(unaff_R13 + 0x60) + (longlong)iVar7 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStackX_20 = 0;
        iVar8 = func_0x00018088c500(lVar2,&uStackX_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(undefined4 *)(lVar1 + 0x10);
        uVar4 = *(undefined4 *)(lVar1 + 0x14);
        uVar5 = *(undefined4 *)(lVar1 + 0x18);
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(undefined **)(unaff_RBP + -0x80) = &UNK_1809830b8;
        unaff_R12D = unaff_R12D + 1;
        *(undefined4 *)(unaff_RBP + -0x54) = uStackX_20;
        *(undefined4 *)(unaff_RBP + -0x70) = unaff_EBX;
        *(undefined4 *)(unaff_RBP + -100) = uVar3;
        *(undefined4 *)(unaff_RBP + -0x60) = uVar4;
        *(undefined4 *)(unaff_RBP + -0x5c) = uVar5;
        *(undefined4 *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = FUN_180897520(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = FUN_18088c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          in_stack_00000048 = fStackX_24;
          in_stack_00000030 = &UNK_1809842e0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000038 = iVar8;
          iVar8 = FUN_180897520(fStackX_24,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_03;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_180984358;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_04;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_1809843d0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(unaff_R13 + 0x78))); iVar7 = iVar7 + 1) {
      lVar1 = *(longlong *)(*(longlong *)(unaff_R13 + 0x70) + (longlong)iVar7 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (((*(byte *)(lVar1 + 0xc4) & 1) != 0) && (lVar2 != 0)) {
        uStackX_20 = 0;
        iVar8 = func_0x00018088c500(lVar2,&uStackX_20);
        if (iVar8 != 0) goto LAB_1808974ec;
        uVar3 = *(undefined4 *)(lVar1 + 0x10);
        uVar4 = *(undefined4 *)(lVar1 + 0x14);
        uVar5 = *(undefined4 *)(lVar1 + 0x18);
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = unaff_R12D;
        *(undefined **)(unaff_RBP + -0x80) = &UNK_1809830b8;
        unaff_R12D = unaff_R12D + 1;
        *(undefined4 *)(unaff_RBP + -0x54) = uStackX_20;
        *(undefined4 *)(unaff_RBP + -0x70) = unaff_EBX;
        *(undefined4 *)(unaff_RBP + -100) = uVar3;
        *(undefined4 *)(unaff_RBP + -0x60) = uVar4;
        *(undefined4 *)(unaff_RBP + -0x5c) = uVar5;
        *(undefined4 *)(unaff_RBP + -0x58) = uVar6;
        iVar8 = FUN_180897520(uVar3,unaff_RBP + -0x80);
        if ((iVar8 != 0) || (iVar8 = FUN_18088c970(lVar2,&fStackX_24), iVar8 != 0))
        goto LAB_1808974ec;
        fVar10 = fStackX_24;
        if (fStackX_24 != 1.0) {
          in_stack_00000048 = fStackX_24;
          in_stack_00000030 = &UNK_1809842e0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000038 = iVar8;
          iVar8 = FUN_180897520(fStackX_24,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_05;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x28) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_180984358;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          fVar10 = extraout_XMM0_Da_06;
          if (iVar8 != 0) goto LAB_1808974ec;
        }
        if (*(char *)(lVar2 + 0x29) != '\0') {
          in_stack_00000038 = 0;
          in_stack_00000030 = &UNK_1809843d0;
          in_stack_00000040 = uStackX_20;
          in_stack_00000048 = (float)CONCAT31(in_stack_00000048._1_3_,1);
          iVar8 = FUN_180897520(fVar10,&stack0x00000030);
          if (iVar8 != 0) goto LAB_1808974ec;
        }
      }
    }
    iVar8 = 0;
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(unaff_R13 + 200) <= iVar7)) break;
      lVar1 = *(longlong *)(*(longlong *)(unaff_R13 + 0xc0) + (longlong)iVar7 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (lVar2 != 0) {
        uStackX_20 = 0;
        iVar9 = func_0x00018088c500(lVar2,&uStackX_20);
        if (iVar9 != 0) break;
        uVar3 = *(undefined4 *)(lVar1 + 0x10);
        uVar4 = *(undefined4 *)(lVar1 + 0x14);
        uVar5 = *(undefined4 *)(lVar1 + 0x18);
        uVar6 = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)(unaff_RBP + -0x78) = 0;
        *(int *)(unaff_RBP + -0x68) = iVar8;
        *(undefined **)(unaff_RBP + -0x80) = &UNK_180983238;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(unaff_RBP + -0x54) = uStackX_20;
        *(undefined4 *)(unaff_RBP + -0x70) = unaff_EBX;
        *(undefined4 *)(unaff_RBP + -100) = uVar3;
        *(undefined4 *)(unaff_RBP + -0x60) = uVar4;
        *(undefined4 *)(unaff_RBP + -0x5c) = uVar5;
        *(undefined4 *)(unaff_RBP + -0x58) = uVar6;
        iVar9 = FUN_180897520(uVar3,unaff_RBP + -0x80);
        if ((iVar9 != 0) || (iVar9 = FUN_18088cbb0(lVar2,&fStackX_24,0), iVar9 != 0)) break;
        if (fStackX_24 != 1.0) {
          in_stack_00000048 = fStackX_24;
          in_stack_00000030 = &UNK_1809844c8;
          in_stack_00000040 = uStackX_20;
          in_stack_00000038 = iVar9;
          iVar9 = FUN_180897520(fStackX_24,&stack0x00000030);
          if (iVar9 != 0) break;
        }
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_1808974ec:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1808974f4(void)
void FUN_1808974f4(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180897520(longlong *param_1,longlong *param_2)
void FUN_180897520(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  lVar1 = param_1[4];
  if (((char)lVar1 != '\0') || (iVar2 = FUN_1808987e0(param_1,1), iVar2 == 0)) {
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,auStack_228,0x200);
    func_0x00018074b7b0(auStack_228 + iVar2,0x200 - iVar2,10);
    iVar2 = (**(code **)(*param_1 + 8))(param_1,auStack_228);
    if ((iVar2 == 0) &&
       (((char)lVar1 == '\0' && (iVar2 = (**(code **)(*param_1 + 0x18))(param_1), iVar2 == 0)))) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_248);
}





// 函数: void FUN_180897560(void)
void FUN_180897560(void)

{
  int iVar1;
  longlong in_RAX;
  char unaff_SIL;
  longlong *unaff_RDI;
  undefined1 auStackX_20 [8];
  ulonglong in_stack_00000220;
  
  iVar1 = (**(code **)(in_RAX + 0x10))();
  func_0x00018074b7b0(auStackX_20 + iVar1,0x200 - iVar1,10);
  iVar1 = (**(code **)(*unaff_RDI + 8))();
  if (((iVar1 == 0) && (unaff_SIL == '\0')) &&
     (iVar1 = (**(code **)(*unaff_RDI + 0x18))(), iVar1 == 0)) {
    *(undefined1 *)(unaff_RDI + 4) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000220 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1808975a6(void)
void FUN_1808975a6(void)

{
  int iVar1;
  char unaff_SIL;
  longlong *unaff_RDI;
  ulonglong in_stack_00000220;
  
  if ((unaff_SIL == '\0') && (iVar1 = (**(code **)(*unaff_RDI + 0x18))(), iVar1 == 0)) {
    *(undefined1 *)(unaff_RDI + 4) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000220 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



