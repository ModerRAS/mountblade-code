#include "TaleWorlds.Native.Split.h"

// 06_utilities_part023.c - 2 个函数

// 函数: void FUN_18089e4d7(void)
void FUN_18089e4d7(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18089e4f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  uVar4 = FUN_1808ddc20(param_2,auStack_38,1,0x4e4c4d54);
  if ((((int)uVar4 == 0) &&
      (uVar4 = FUN_1808ddc20(param_2,auStack_58,0,0x424e4c54), (int)uVar4 == 0)) &&
     (uVar4 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar4 == 0)) {
    puVar5 = (undefined4 *)FUN_180847820();
    uVar4 = 0;
    uStack_78 = *puVar5;
    uStack_74 = puVar5[1];
    uStack_70 = puVar5[2];
    uStack_6c = puVar5[3];
    if (*(uint *)(param_2 + 8) < 0x6d) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar2 = *param_2;
        uVar4 = FUN_1808aed00(uVar2,&uStack_78,4);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1808aed00(uVar2,&uStack_74,2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1808aed00(uVar2,(longlong)&uStack_74 + 2,2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1808aed00(uVar2,&uStack_70,8);
      }
      else {
        uVar4 = 0x1c;
      }
    }
    if ((((int)uVar4 == 0) && (uVar4 = FUN_1808a5a90(param_2,param_1 + 0x38,0), (int)uVar4 == 0)) &&
       (uVar4 = FUN_1808a5a90(param_2,param_1 + 0x48,0), (int)uVar4 == 0)) {
      if (*(uint *)(param_2 + 8) < 0x84) {
        puStack_88 = (undefined4 *)0x0;
        uStack_80 = 0;
        uVar3 = FUN_1808a4a20(param_2,&puStack_88,0);
        uVar4 = (ulonglong)uVar3;
        if (uVar3 != 0) {
LAB_18089e70b:
          FUN_18084c150(&puStack_88);
          return uVar4;
        }
        puVar5 = puStack_88;
        if ((int)uStack_80 != 0) {
          for (; (puStack_88 <= puVar5 && (puVar5 < puStack_88 + (int)uStack_80));
              puVar5 = puVar5 + 1) {
            lVar6 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180986e70,0xc1c,
                                  0,0,1);
            if (lVar6 == 0) {
              uVar4 = 0x26;
              goto LAB_18089e70b;
            }
            uVar1 = *puVar5;
            *(longlong *)lVar6 = lVar6;
            *(longlong *)(lVar6 + 8) = lVar6;
            *(undefined4 *)(lVar6 + 0x10) = uVar1;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            *(undefined4 *)(lVar6 + 0x20) = 0;
            uVar3 = func_0x0001808aec10(param_1 + 0x58,lVar6);
            uVar4 = (ulonglong)uVar3;
            if (uVar3 != 0) goto LAB_18089e70b;
          }
        }
        FUN_18084c150(&puStack_88);
      }
      else {
        uVar4 = FUN_1808a71c0(param_2,param_1 + 0x58);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      uVar4 = FUN_1808ad9d0(param_2,param_1 + 0x78,0);
      if (((int)uVar4 == 0) && (uVar4 = FUN_1808a62d0(param_2,param_1 + 0x88,0), (int)uVar4 == 0)) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_2,auStack_58);
      }
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18089e558(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_RBP;
  undefined4 *puVar10;
  undefined8 *unaff_RDI;
  longlong unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  
  puVar7 = (undefined4 *)FUN_180847820();
  uVar8 = 0;
  uVar5 = *(uint *)(unaff_RDI + 8);
  uVar11 = *puVar7;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)(unaff_RBP + -0x19) = uVar11;
  *(undefined4 *)(unaff_RBP + -0x15) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x11) = uVar3;
  *(undefined4 *)(unaff_RBP + -0xd) = uVar4;
  if (uVar5 < 0x6d) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar1 = *unaff_RDI;
      uVar8 = FUN_1808aed00(uVar1,unaff_RBP + -0x19,4);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = FUN_1808aed00(uVar1,unaff_RBP + -0x15,2);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = FUN_1808aed00(uVar1,unaff_RBP + -0x13,2);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = FUN_1808aed00(uVar1,unaff_RBP + -0x11,8);
      uVar11 = extraout_XMM0_Da;
    }
    else {
      uVar8 = 0x1c;
    }
  }
  if ((((int)uVar8 == 0) && (uVar8 = FUN_1808a5a90(uVar11,unaff_R15 + 0x38,0), (int)uVar8 == 0)) &&
     (uVar8 = FUN_1808a5a90(extraout_XMM0_Da_00,unaff_R15 + 0x48,0), (int)uVar8 == 0)) {
    if (*(uint *)(unaff_RDI + 8) < 0x84) {
      *(undefined8 *)(unaff_RBP + -0x29) = 0;
      *(undefined8 *)(unaff_RBP + -0x21) = 0;
      uVar5 = FUN_1808a4a20(extraout_XMM0_Da_01,unaff_RBP + -0x29,0);
      uVar8 = (ulonglong)uVar5;
      if (uVar5 != 0) {
LAB_18089e70b:
        FUN_18084c150(unaff_RBP + -0x29);
        return uVar8;
      }
      iVar6 = *(int *)(unaff_RBP + -0x21);
      if (iVar6 != 0) {
        puVar7 = *(undefined4 **)(unaff_RBP + -0x29);
        for (puVar10 = puVar7; (puVar7 <= puVar10 && (puVar10 < puVar7 + iVar6));
            puVar10 = puVar10 + 1) {
          lVar9 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180986e70,0xc1c,0)
          ;
          if (lVar9 == 0) {
            uVar8 = 0x26;
            goto LAB_18089e70b;
          }
          uVar11 = *puVar10;
          *(longlong *)lVar9 = lVar9;
          *(longlong *)(lVar9 + 8) = lVar9;
          *(undefined4 *)(lVar9 + 0x10) = uVar11;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *(undefined4 *)(lVar9 + 0x20) = 0;
          uVar5 = func_0x0001808aec10(unaff_R15 + 0x58,lVar9);
          uVar8 = (ulonglong)uVar5;
          if (uVar5 != 0) goto LAB_18089e70b;
          iVar6 = *(int *)(unaff_RBP + -0x21);
          puVar7 = *(undefined4 **)(unaff_RBP + -0x29);
        }
      }
      uVar11 = FUN_18084c150(unaff_RBP + -0x29);
    }
    else {
      uVar8 = FUN_1808a71c0(extraout_XMM0_Da_01,unaff_R15 + 0x58);
      uVar11 = extraout_XMM0_Da_02;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
    uVar8 = FUN_1808ad9d0(uVar11,unaff_R15 + 0x78,0);
    if (((int)uVar8 == 0) &&
       (uVar8 = FUN_1808a62d0(extraout_XMM0_Da_03,unaff_R15 + 0x88,0), (int)uVar8 == 0)) {
                    // WARNING: Subroutine does not return
      FUN_1808ddf80(extraout_XMM0_Da_04,unaff_RBP + 7);
    }
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18089e624(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined4 *puVar7;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  if (*(uint *)(unaff_RDI + 0x40) < 0x84) {
    *(undefined8 *)(unaff_RBP + -0x29) = unaff_RBX;
    *(undefined8 *)(unaff_RBP + -0x21) = unaff_RBX;
    uVar2 = FUN_1808a4a20();
    uVar4 = (ulonglong)uVar2;
    if (uVar2 != 0) {
LAB_18089e70b:
      FUN_18084c150(unaff_RBP + -0x29);
      return uVar4;
    }
    iVar3 = *(int *)(unaff_RBP + -0x21);
    if (iVar3 != 0) {
      puVar6 = *(undefined4 **)(unaff_RBP + -0x29);
      for (puVar7 = puVar6; (puVar6 <= puVar7 && (puVar7 < puVar6 + iVar3)); puVar7 = puVar7 + 1) {
        lVar5 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180986e70,0xc1c);
        if (lVar5 == 0) {
          uVar4 = 0x26;
          goto LAB_18089e70b;
        }
        uVar1 = *puVar7;
        *(longlong *)lVar5 = lVar5;
        *(longlong *)(lVar5 + 8) = lVar5;
        *(undefined4 *)(lVar5 + 0x10) = uVar1;
        *(undefined8 *)(lVar5 + 0x18) = unaff_RBX;
        *(int *)(lVar5 + 0x20) = (int)unaff_RBX;
        uVar2 = func_0x0001808aec10(unaff_R15 + 0x58,lVar5);
        uVar4 = (ulonglong)uVar2;
        if (uVar2 != 0) goto LAB_18089e70b;
        iVar3 = *(int *)(unaff_RBP + -0x21);
        puVar6 = *(undefined4 **)(unaff_RBP + -0x29);
      }
    }
    FUN_18084c150(unaff_RBP + -0x29);
  }
  else {
    uVar4 = FUN_1808a71c0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  uVar4 = FUN_1808ad9d0();
  if (((int)uVar4 == 0) && (uVar4 = FUN_1808a62d0(), (int)uVar4 == 0)) {
                    // WARNING: Subroutine does not return
    FUN_1808ddf80();
  }
  return uVar4;
}





// 函数: void FUN_18089e801(void)
void FUN_18089e801(void)

{
  return;
}





