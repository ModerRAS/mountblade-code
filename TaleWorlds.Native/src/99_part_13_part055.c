#include "TaleWorlds.Native.Split.h"

// 99_part_13_part055.c - 9 个函数

// 函数: void FUN_1808cc546(void)
void FUN_1808cc546(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 in_AL;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  longlong *plVar11;
  longlong *unaff_R12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar12;
  
  *(undefined1 *)(unaff_RBP + -0x39) = in_AL;
  uVar8 = (**(code **)*unaff_R12)();
  cVar5 = func_0x0001808c57f0(extraout_XMM0_Da,uVar8);
  if (cVar5 == '\0') {
    lVar9 = (**(code **)*unaff_R12)();
    if ((((*(int *)(lVar9 + 0x70) != 0) || (*(int *)(lVar9 + 0x74) != 0)) ||
        (*(int *)(lVar9 + 0x78) != 0)) ||
       (uVar12 = extraout_XMM0_Da_02, *(int *)(lVar9 + 0x7c) != 0)) {
      lVar9 = (**(code **)*unaff_R12)();
      plVar11 = unaff_RSI + 0x97;
      if (unaff_RSI == (undefined8 *)0xffffffffffffff08) {
        plVar11 = (longlong *)0x0;
      }
      uVar12 = extraout_XMM0_Da_03;
      if (plVar11 != (longlong *)0x0) {
        if (((*(int *)((longlong)plVar11 + 0x24) != 0) && ((int)plVar11[1] != 0)) &&
           (iVar7 = *(int *)(*plVar11 +
                            (longlong)
                            (int)((*(uint *)(lVar9 + 0x7c) ^ *(uint *)(lVar9 + 0x78) ^
                                   *(uint *)(lVar9 + 0x74) ^ *(uint *)(lVar9 + 0x70)) &
                                 (int)plVar11[1] - 1U) * 4), iVar7 != -1)) {
          lVar2 = plVar11[2];
          do {
            lVar10 = (longlong)iVar7;
            if ((*(longlong *)(lVar2 + lVar10 * 0x18) == *(longlong *)(lVar9 + 0x70)) &&
               (*(longlong *)(lVar2 + 8 + lVar10 * 0x18) == *(longlong *)(lVar9 + 0x78)))
            goto LAB_1808cc7cb;
            iVar7 = *(int *)(lVar2 + 0x10 + lVar10 * 0x18);
          } while (iVar7 != -1);
        }
        iVar7 = -1;
LAB_1808cc7cb:
        if (iVar7 != -1) {
          iVar7 = FUN_1808cba60();
          uVar12 = extraout_XMM0_Da_04;
          goto joined_r0x0001808cc7da;
        }
      }
    }
  }
  else {
    if (unaff_R12[0x15] != 0) {
      lVar9 = (**(code **)*unaff_R12)();
      auVar1 = *(undefined1 (*) [16])(lVar9 + 0x40);
      *(undefined1 (*) [16])(unaff_RBP + -0x31) = auVar1;
      lVar9 = *(longlong *)(unaff_RBP + -0x29);
      if ((((auVar1._0_4_ == 0) && (auVar1._4_4_ == 0)) && ((int)lVar9 == 0)) &&
         ((int)((ulonglong)lVar9 >> 0x20) == 0)) goto LAB_1808cc8f3;
      lVar2 = *(longlong *)(unaff_R12[0x15] + 0x10);
      uVar8 = *(undefined8 *)(unaff_R12[0x15] + 0x18);
      *(longlong *)(unaff_RBP + -0x19) = lVar2;
      *(undefined8 *)(unaff_RBP + -0x11) = uVar8;
      if ((auVar1._0_8_ != lVar2) || (lVar9 != *(longlong *)(unaff_RBP + -0x11))) {
        lVar9 = (**(code **)(*(longlong *)*unaff_RSI + 0x150))
                          ((longlong *)*unaff_RSI,unaff_RBP + -0x31,1);
        if (lVar9 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18076b390(unaff_RBP + -9,0x27,&UNK_180958180,*(undefined4 *)(unaff_RBP + -0x31),
                        *(undefined2 *)(unaff_RBP + -0x2d));
        }
        unaff_R12[0x15] = lVar9;
        if ((lVar9 == 0) ||
           ((((lVar9 = (**(code **)(*unaff_R12 + 0x30))(), *(int *)(unaff_RBP + -0x31) == 0 &&
              (*(int *)(unaff_RBP + -0x2d) == 0)) &&
             ((*(int *)(unaff_RBP + -0x29) == 0 && (*(int *)(unaff_RBP + -0x25) == 0)))) ||
            ((lVar9 == 0 || (lVar9 = *(longlong *)(lVar9 + 0x18), lVar9 == 0))))))
        goto LAB_1808cc8f3;
        *(undefined8 *)(unaff_RBP + -0x19) = 0;
        iVar7 = FUN_180860650(lVar9,unaff_RBP + -0x31,unaff_RBP + -0x19);
        if ((iVar7 != 0) ||
           (iVar7 = (**(code **)(*unaff_R12 + 0x120))
                              (extraout_XMM0_Da_00,*(undefined8 *)(unaff_RBP + -0x19)), iVar7 != 0))
        goto LAB_1808cc8f3;
        *(undefined1 *)(unaff_RBP + -0x39) = 1;
      }
    }
    iVar7 = FUN_1808cba60();
    uVar12 = extraout_XMM0_Da_01;
joined_r0x0001808cc7da:
    if (iVar7 != 0) goto LAB_1808cc8f3;
  }
  lVar9 = unaff_R12[0x15];
  if (lVar9 != 0) {
    uVar12 = *(undefined4 *)(lVar9 + 0x14);
    uVar3 = *(undefined4 *)(lVar9 + 0x18);
    uVar4 = *(undefined4 *)(lVar9 + 0x1c);
    plVar11 = (longlong *)*unaff_RSI;
    *(undefined4 *)(unaff_RBP + -0x31) = *(undefined4 *)(lVar9 + 0x10);
    *(undefined4 *)(unaff_RBP + -0x2d) = uVar12;
    *(undefined4 *)(unaff_RBP + -0x29) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x25) = uVar4;
    lVar9 = (**(code **)(*plVar11 + 0x150))(plVar11,unaff_RBP + -0x31,1);
    if (lVar9 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(unaff_RBP + -9,0x27,&UNK_180958180,*(undefined4 *)(unaff_RBP + -0x31),
                    *(undefined2 *)(unaff_RBP + -0x2d));
    }
    unaff_R12[0x15] = lVar9;
    uVar12 = extraout_XMM0_Da_05;
  }
  cVar6 = func_0x0001808c5700(uVar12,lVar9);
  cVar5 = *(char *)(unaff_RBP + -0x39);
  if (cVar6 != '\0') {
    cVar5 = '\x01';
  }
  uVar12 = FUN_1808c8f30(extraout_XMM0_Da_06,unaff_R12 + 0x16);
  cVar6 = func_0x0001808c57f0(uVar12,unaff_R12[0x16]);
  if ((cVar6 != '\0') || (cVar5 != '\0')) {
    FUN_1808c9e60();
  }
LAB_1808cc8f3:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808cc7e0(undefined4 param_1)
void FUN_1808cc7e0(undefined4 param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  char cVar6;
  longlong unaff_R12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  
  lVar5 = *(longlong *)(unaff_R12 + 0xa8);
  if (lVar5 != 0) {
    uVar7 = *(undefined4 *)(lVar5 + 0x14);
    uVar2 = *(undefined4 *)(lVar5 + 0x18);
    uVar3 = *(undefined4 *)(lVar5 + 0x1c);
    plVar1 = (longlong *)*unaff_RSI;
    *(undefined4 *)(unaff_RBP + -0x31) = *(undefined4 *)(lVar5 + 0x10);
    *(undefined4 *)(unaff_RBP + -0x2d) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x29) = uVar2;
    *(undefined4 *)(unaff_RBP + -0x25) = uVar3;
    lVar5 = (**(code **)(*plVar1 + 0x150))(plVar1,unaff_RBP + -0x31,1);
    if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(unaff_RBP + -9,0x27,&UNK_180958180,*(undefined4 *)(unaff_RBP + -0x31),
                    *(undefined2 *)(unaff_RBP + -0x2d));
    }
    *(longlong *)(unaff_R12 + 0xa8) = lVar5;
    param_1 = extraout_XMM0_Da;
  }
  cVar4 = func_0x0001808c5700(param_1,lVar5);
  cVar6 = *(char *)(unaff_RBP + -0x39);
  if (cVar4 != '\0') {
    cVar6 = '\x01';
  }
  uVar7 = FUN_1808c8f30(extraout_XMM0_Da_00,unaff_R12 + 0xb0);
  cVar4 = func_0x0001808c57f0(uVar7,*(undefined8 *)(unaff_R12 + 0xb0));
  if ((cVar4 != '\0') || (cVar6 != '\0')) {
    FUN_1808c9e60();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808cc8e0(void)
void FUN_1808cc8e0(void)

{
  longlong unaff_RBP;
  char unaff_DIL;
  
  if (unaff_DIL != '\0') {
    FUN_1808c9e60();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808cc913(void)
void FUN_1808cc913(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808cc930(undefined8 *param_1,undefined8 param_2)
void FUN_1808cc930(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_f8 [32];
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [40];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  lVar1 = param_1[0x1e];
  FUN_1808c8f30(param_2,param_1 + 0x1e);
  FUN_1808cc510(param_1,param_2);
  lVar2 = param_1[0x1e];
  if ((lVar1 == lVar2) || (*(short *)(lVar2 + 0xc) != 0xf)) {
LAB_1808cca15:
    iVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x38))
                      ((longlong *)param_1[0x20],param_2,&uStack_88);
    if (iVar3 != 0) goto LAB_1808cca49;
    iVar3 = FUN_1808d0a30(param_1,uStack_88);
    if (iVar3 == 0) goto LAB_1808ccad0;
  }
  else {
    auStack_70 = *(undefined1 (*) [16])(lVar2 + 0xdc);
    uStack_88 = *(ulonglong *)(lVar1 + 0xdc);
    uStack_80 = *(longlong *)(lVar1 + 0xe4);
    if ((uStack_88 == auStack_70._0_8_) && (uStack_80 == auStack_70._8_8_)) goto LAB_1808cca15;
    if ((((auStack_70._0_4_ == 0) && (auStack_70._4_4_ == 0)) && (auStack_70._8_4_ == 0)) &&
       (auStack_70._12_4_ == 0)) {
      iVar3 = FUN_1808ec8e0(&uStack_88);
      uVar9 = uStack_88;
    }
    else {
      iVar3 = FUN_1808bf8e0(param_1[0x2d],auStack_70,&uStack_78);
      uVar9 = uStack_78;
    }
    if (iVar3 != 0) goto LAB_1808cca49;
    iVar3 = FUN_1808d0a30(param_1,uVar9);
  }
  if (iVar3 == 0) {
LAB_1808ccad0:
    if (*(int *)(param_1 + 0x26) != *(int *)(param_1[0x1e] + 0xb0)) {
      *(int *)(param_1 + 0x26) = *(int *)(param_1[0x1e] + 0xb0);
      if (param_1[0x1f] != 0) {
        uStack_88 = 0;
        uVar4 = FUN_18073c4c0(param_1[0x1f],0,&uStack_88);
        if ((uVar4 < 0x1f) && ((0x40000009U >> (uVar4 & 0x1f) & 1) != 0)) {
          uStack_78 = 0;
          iVar3 = FUN_1808cd780(param_1,uStack_88 - param_1[6],&uStack_78);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x26);
            uVar4 = (uint)uStack_78;
            if (iVar3 == 0) {
              uVar6 = *(int *)((longlong)param_1 + 0x15c) - 1;
              if (uVar6 <= uVar4) {
                uVar4 = uVar6;
              }
              uVar9 = (ulonglong)uVar4;
            }
            else {
              uVar6 = *(uint *)(param_1 + 0x2c);
              uVar9 = uStack_78;
              if (uVar6 < uVar4) {
                uVar10 = uVar4 - uVar6;
                uVar8 = (*(int *)((longlong)param_1 + 0x164) - uVar6) + 1;
                if (iVar3 == -1) {
                  uVar9 = (ulonglong)(uVar6 + uVar10 % uVar8);
                }
                else {
                  uVar5 = (iVar3 + 1) * uVar8 + uVar6;
                  if (uVar5 < uVar4) {
                    iVar3 = 0;
                    uVar6 = *(int *)((longlong)param_1 + 0x15c) - 1;
                    uVar4 = (*(int *)((longlong)param_1 + 0x164) - uVar5) + uVar4;
                    if (uVar6 <= uVar4) {
                      uVar4 = uVar6;
                    }
                    uVar9 = (ulonglong)uVar4;
                  }
                  else {
                    iVar3 = iVar3 - uVar10 / uVar8;
                    uVar9 = (ulonglong)(uVar6 + uVar10 % uVar8);
                  }
                }
              }
            }
            uVar4 = FUN_18073fd60(param_1[0x1f],iVar3);
            if ((uVar4 < 0x1f) && ((0x40000009U >> (uVar4 & 0x1f) & 1) != 0)) {
              uVar4 = FUN_18073fe30(param_1[0x1f],uVar9 & 0xffffffff,2);
              if ((uVar4 < 0x1f) && ((0x40000009U >> (uVar4 & 0x1f) & 1) != 0)) {
                *(int *)((longlong)param_1 + 0x13c) = (int)uVar9;
              }
            }
          }
        }
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
  }
LAB_1808cca49:
  plVar7 = (longlong *)(**(code **)*param_1)(param_1);
  (**(code **)(*plVar7 + 0x30))(plVar7,&uStack_88);
  uStack_90 = (uint)uStack_80._7_1_;
  uStack_98 = (uint)uStack_80._6_1_;
  uStack_a0 = (uint)uStack_80._5_1_;
  uStack_a8 = (uint)uStack_80._4_1_;
  uStack_b0 = (uint)uStack_80._3_1_;
  uStack_b8 = (uint)uStack_80._2_1_;
  uStack_c0 = (uint)uStack_80._1_1_;
  uStack_c8 = (uint)(byte)uStack_80;
  uStack_d0 = (uint)uStack_88._6_2_;
  uStack_d8 = (uint)uStack_88._4_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390(auStack_60,0x27,&UNK_180958180,uStack_88 & 0xffffffff);
}






// 函数: void FUN_1808cc962(undefined8 *param_1)
void FUN_1808cc962(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint uVar12;
  
  FUN_1808c8f30();
  FUN_1808cc510(param_1);
  lVar2 = param_1[0x1e];
  if ((unaff_RDI == lVar2) || (*(short *)(lVar2 + 0xc) != 0xf)) {
LAB_1808cca15:
    iVar4 = (**(code **)(*(longlong *)param_1[0x20] + 0x38))();
    if (iVar4 != 0) goto LAB_1808cca49;
    iVar4 = FUN_1808d0a30(param_1,*(undefined8 *)(unaff_RBP + -0x29));
    if (iVar4 == 0) goto LAB_1808ccad0;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0xdc);
    lVar3 = *(longlong *)(unaff_RDI + 0xdc);
    uVar10 = *(undefined8 *)(unaff_RDI + 0xe4);
    *(undefined1 (*) [16])(unaff_RBP + -0x11) = auVar1;
    lVar2 = *(longlong *)(unaff_RBP + -9);
    *(longlong *)(unaff_RBP + -0x29) = lVar3;
    *(undefined8 *)(unaff_RBP + -0x21) = uVar10;
    if ((lVar3 == auVar1._0_8_) && (*(longlong *)(unaff_RBP + -0x21) == lVar2)) goto LAB_1808cca15;
    if ((((auVar1._0_4_ == 0) && (auVar1._4_4_ == 0)) && ((int)lVar2 == 0)) &&
       ((int)((ulonglong)lVar2 >> 0x20) == 0)) {
      iVar4 = FUN_1808ec8e0(unaff_RBP + -0x29);
      uVar10 = *(undefined8 *)(unaff_RBP + -0x29);
    }
    else {
      iVar4 = FUN_1808bf8e0(param_1[0x2d],unaff_RBP + -0x11,unaff_RBP + -0x19);
      uVar10 = *(undefined8 *)(unaff_RBP + -0x19);
    }
    if (iVar4 != 0) goto LAB_1808cca49;
    iVar4 = FUN_1808d0a30(param_1,uVar10);
  }
  if (iVar4 == 0) {
LAB_1808ccad0:
    if (*(int *)(param_1 + 0x26) != *(int *)(param_1[0x1e] + 0xb0)) {
      *(int *)(param_1 + 0x26) = *(int *)(param_1[0x1e] + 0xb0);
      lVar2 = param_1[0x1f];
      if (lVar2 != 0) {
        *(undefined8 *)(unaff_RBP + -0x29) = 0;
        uVar5 = FUN_18073c4c0(lVar2,0,unaff_RBP + -0x29);
        if ((uVar5 < 0x1f) && ((0x40000009U >> (uVar5 & 0x1f) & 1) != 0)) {
          lVar2 = param_1[6];
          *(undefined8 *)(unaff_RBP + -0x19) = 0;
          iVar4 = FUN_1808cd780(param_1,*(longlong *)(unaff_RBP + -0x29) - lVar2,unaff_RBP + -0x19);
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x26);
            if (iVar4 == 0) {
              uVar9 = *(int *)((longlong)param_1 + 0x15c) - 1;
              uVar5 = (uint)*(undefined8 *)(unaff_RBP + -0x19);
              if (uVar9 <= uVar5) {
                uVar5 = uVar9;
              }
              uVar11 = (ulonglong)uVar5;
            }
            else {
              uVar11 = *(ulonglong *)(unaff_RBP + -0x19);
              uVar5 = *(uint *)(param_1 + 0x2c);
              uVar9 = (uint)uVar11;
              if (uVar5 < uVar9) {
                uVar12 = uVar9 - uVar5;
                uVar8 = (*(int *)((longlong)param_1 + 0x164) - uVar5) + 1;
                if (iVar4 == -1) {
                  uVar11 = (ulonglong)(uVar5 + uVar12 % uVar8);
                }
                else {
                  uVar6 = (iVar4 + 1) * uVar8 + uVar5;
                  if (uVar6 < uVar9) {
                    iVar4 = 0;
                    uVar5 = *(int *)((longlong)param_1 + 0x15c) - 1;
                    uVar9 = (*(int *)((longlong)param_1 + 0x164) - uVar6) + uVar9;
                    if (uVar5 <= uVar9) {
                      uVar9 = uVar5;
                    }
                    uVar11 = (ulonglong)uVar9;
                  }
                  else {
                    iVar4 = iVar4 - uVar12 / uVar8;
                    uVar11 = (ulonglong)(uVar5 + uVar12 % uVar8);
                  }
                }
              }
            }
            uVar5 = FUN_18073fd60(param_1[0x1f],iVar4);
            if ((uVar5 < 0x1f) && ((0x40000009U >> (uVar5 & 0x1f) & 1) != 0)) {
              uVar5 = FUN_18073fe30(param_1[0x1f],uVar11 & 0xffffffff,2);
              if ((uVar5 < 0x1f) && ((0x40000009U >> (uVar5 & 0x1f) & 1) != 0)) {
                *(int *)((longlong)param_1 + 0x13c) = (int)uVar11;
              }
            }
          }
        }
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
  }
LAB_1808cca49:
  plVar7 = (longlong *)(**(code **)*param_1)(param_1);
  (**(code **)(*plVar7 + 0x30))(plVar7,unaff_RBP + -0x29);
                    // WARNING: Subroutine does not return
  FUN_18076b390(unaff_RBP + -1,0x27,&UNK_180958180,*(undefined4 *)(unaff_RBP + -0x29),
                *(undefined2 *)(unaff_RBP + -0x25));
}






// 函数: void FUN_1808ccaf2(undefined4 param_1)
void FUN_1808ccaf2(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  uint uVar8;
  longlong unaff_R14;
  
  *(undefined4 *)(unaff_R14 + 0x130) = param_1;
  lVar1 = *(longlong *)(unaff_R14 + 0xf8);
  if (lVar1 != 0) {
    *(undefined8 *)(unaff_RBP + -0x29) = 0;
    uVar2 = FUN_18073c4c0(lVar1,0,unaff_RBP + -0x29);
    if ((uVar2 < 0x1f) && ((0x40000009U >> (uVar2 & 0x1f) & 1) != 0)) {
      *(undefined8 *)(unaff_RBP + -0x19) = 0;
      iVar3 = FUN_1808cd780();
      if (iVar3 == 0) {
        iVar3 = *(int *)(unaff_R14 + 0x130);
        if (iVar3 == 0) {
          uVar6 = *(int *)(unaff_R14 + 0x15c) - 1;
          uVar2 = (uint)*(undefined8 *)(unaff_RBP + -0x19);
          if (uVar6 <= uVar2) {
            uVar2 = uVar6;
          }
          uVar7 = (ulonglong)uVar2;
        }
        else {
          uVar7 = *(ulonglong *)(unaff_RBP + -0x19);
          uVar2 = *(uint *)(unaff_R14 + 0x160);
          uVar6 = (uint)uVar7;
          if (uVar2 < uVar6) {
            uVar8 = uVar6 - uVar2;
            uVar5 = (*(int *)(unaff_R14 + 0x164) - uVar2) + 1;
            if (iVar3 == -1) {
              uVar7 = (ulonglong)(uVar2 + uVar8 % uVar5);
            }
            else {
              uVar4 = (iVar3 + 1) * uVar5 + uVar2;
              if (uVar4 < uVar6) {
                iVar3 = 0;
                uVar2 = *(int *)(unaff_R14 + 0x15c) - 1;
                uVar6 = (*(int *)(unaff_R14 + 0x164) - uVar4) + uVar6;
                if (uVar2 <= uVar6) {
                  uVar6 = uVar2;
                }
                uVar7 = (ulonglong)uVar6;
              }
              else {
                iVar3 = iVar3 - uVar8 / uVar5;
                uVar7 = (ulonglong)(uVar2 + uVar8 % uVar5);
              }
            }
          }
        }
        uVar2 = FUN_18073fd60(*(undefined8 *)(unaff_R14 + 0xf8),iVar3);
        if ((uVar2 < 0x1f) && ((0x40000009U >> (uVar2 & 0x1f) & 1) != 0)) {
          uVar2 = FUN_18073fe30(*(undefined8 *)(unaff_R14 + 0xf8),uVar7 & 0xffffffff,2);
          if ((uVar2 < 0x1f) && ((0x40000009U >> (uVar2 & 0x1f) & 1) != 0)) {
            *(int *)(unaff_R14 + 0x13c) = (int)uVar7;
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_1808ccc40(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0xe8);
  puVar1 = (undefined8 *)*puVar6;
  do {
    if (puVar1 == puVar6) {
      return 0;
    }
    cVar2 = func_0x0001808b0620(*(undefined8 *)(param_1 + 0xe8),
                                *(undefined4 *)((longlong)puVar1 + 0x24));
    lVar3 = func_0x00018085fd70(*(undefined8 *)(param_1 + 0xf8),puVar1 + 2);
    if ((lVar3 == 0) || ((*(longlong *)(lVar3 + 0x40) != 0) == (cVar2 == '\0'))) {
      uVar5 = FUN_1808b2f30(param_1,*(undefined4 *)((longlong)puVar1 + 0x24));
LAB_1808ccd05:
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    else {
      if (cVar2 != '\0') {
        uVar5 = FUN_1808d5e40(lVar3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_1808b21b0(param_1,*(undefined4 *)((longlong)puVar1 + 0x24));
        goto LAB_1808ccd05;
      }
      lVar4 = func_0x00018085fd70(*(undefined8 *)(param_1 + 0xf0),puVar1 + 2);
      if (lVar4 != 0) {
        uVar5 = FUN_1808d71e0(lVar3,lVar4);
        goto LAB_1808ccd05;
      }
    }
    if (puVar1 == puVar6) {
      return 0;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ccd40(undefined8 *param_1,undefined8 param_2,longlong param_3)
void FUN_1808ccd40(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  
  uVar4 = (**(code **)*param_1)();
  cVar2 = func_0x0001808c57f0(param_2,uVar4);
  if (cVar2 != '\0') {
    plVar8 = (longlong *)0x0;
    for (plVar10 = *(longlong **)(param_3 + 0xd8);
        (*(longlong **)(param_3 + 0xd8) <= plVar10 &&
        (plVar10 < (longlong *)
                   ((longlong)*(longlong **)(param_3 + 0xd8) +
                   (longlong)*(int *)(param_3 + 0xe0) * 0x14)));
        plVar10 = (longlong *)((longlong)plVar10 + 0x14)) {
      lVar5 = (**(code **)*param_1)(param_1);
      if (0 < *(int *)(lVar5 + 0xe0)) {
        plVar7 = plVar8;
        do {
          lStack_48 = *plVar10;
          lStack_40 = plVar10[1];
          iVar3 = (int)plVar7;
          uStack_38 = 0x3f800000;
          if ((*(longlong *)(*(longlong *)(lVar5 + 0xd8) + (longlong)iVar3 * 0x14) == lStack_48) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0xd8) + 8 + (longlong)iVar3 * 0x14) == lStack_40))
          goto LAB_1808ccf2c;
          plVar7 = (longlong *)(ulonglong)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < *(int *)(lVar5 + 0xe0));
      }
      plVar7 = param_1 + 0x24;
      plVar9 = (longlong *)(*plVar7 + -0x20);
      if (*plVar7 == 0) {
        plVar9 = plVar8;
      }
      plVar1 = plVar8;
      if (plVar9 != (longlong *)0x0) {
        plVar1 = plVar9 + 4;
      }
      while (plVar1 != plVar7) {
        plVar9 = plVar1 + -4;
        if (plVar1 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        plVar6 = (longlong *)(**(code **)*plVar9)(plVar9);
        (**(code **)(*plVar6 + 0x30))(plVar6,&lStack_58);
        if ((lStack_58 == *plVar10) && (lStack_50 == plVar10[1])) {
          if (plVar1 != plVar7) {
            *(longlong *)plVar1[1] = *plVar1;
            *(longlong *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (longlong)plVar1;
            *plVar1 = (longlong)plVar1;
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar9,&UNK_1809882d0,0xec9,1);
          }
          break;
        }
        if (plVar1 == plVar7) break;
        plVar9 = (longlong *)(*plVar1 + -0x20);
        if (*plVar1 == 0) {
          plVar9 = plVar8;
        }
        plVar1 = plVar8;
        if (plVar9 != (longlong *)0x0) {
          plVar1 = plVar9 + 4;
        }
      }
LAB_1808ccf2c:
    }
  }
  plVar7 = (longlong *)0x0;
  FUN_1808c8f30(param_2,param_1 + 0x30);
  plVar10 = param_1 + 0x24;
  plVar8 = (longlong *)(*plVar10 + -0x20);
  if (*plVar10 == 0) {
    plVar8 = plVar7;
  }
  plVar9 = plVar7;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8 + 4;
  }
  while (plVar9 != plVar10) {
    plVar8 = plVar9 + -4;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    iVar3 = (**(code **)(*plVar8 + 0xb0))(plVar8,param_2);
    if (iVar3 != 0) {
      return;
    }
    if (plVar9 == plVar10) break;
    plVar8 = (longlong *)(*plVar9 + -0x20);
    if (*plVar9 == 0) {
      plVar8 = plVar7;
    }
    plVar9 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8 + 4;
    }
  }
  iVar3 = FUN_1808cad80(param_1 + 0x23,param_1 + 0x3a,param_1 + 0x37);
  if (iVar3 == 0) {
    FUN_1808cc510(param_1,param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ccd5b(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1808ccd5b(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,undefined4 param_10)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *in_RAX;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 unaff_R12;
  longlong *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined8 in_stack_00000098;
  
  uVar4 = (*(code *)*in_RAX)();
  cVar2 = func_0x0001808c57f0(extraout_XMM0_Da,uVar4);
  if (cVar2 != '\0') {
    plVar8 = (longlong *)0x0;
    for (plVar10 = *(longlong **)(param_3 + 0xd8);
        (unaff_R12 = in_stack_00000098, *(longlong **)(param_3 + 0xd8) <= plVar10 &&
        (plVar10 < (longlong *)
                   ((longlong)*(longlong **)(param_3 + 0xd8) +
                   (longlong)*(int *)(param_3 + 0xe0) * 0x14)));
        plVar10 = (longlong *)((longlong)plVar10 + 0x14)) {
      lVar5 = (**(code **)*param_1)(param_1);
      if (0 < *(int *)(lVar5 + 0xe0)) {
        plVar7 = plVar8;
        do {
          param_8 = *plVar10;
          param_9 = plVar10[1];
          iVar3 = (int)plVar7;
          param_10 = 0x3f800000;
          if ((*(longlong *)(*(longlong *)(lVar5 + 0xd8) + (longlong)iVar3 * 0x14) == param_8) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0xd8) + 8 + (longlong)iVar3 * 0x14) == param_9))
          goto LAB_1808ccf2c;
          plVar7 = (longlong *)(ulonglong)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < *(int *)(lVar5 + 0xe0));
      }
      plVar7 = param_1 + 0x24;
      plVar9 = (longlong *)(*plVar7 + -0x20);
      if (*plVar7 == 0) {
        plVar9 = plVar8;
      }
      plVar1 = plVar8;
      if (plVar9 != (longlong *)0x0) {
        plVar1 = plVar9 + 4;
      }
      while (plVar1 != plVar7) {
        plVar9 = plVar1 + -4;
        if (plVar1 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        plVar6 = (longlong *)(**(code **)*plVar9)(plVar9);
        (**(code **)(*plVar6 + 0x30))(plVar6,&param_6);
        if ((param_6 == *plVar10) && (param_7 == plVar10[1])) {
          if (plVar1 != plVar7) {
            *(longlong *)plVar1[1] = *plVar1;
            *(longlong *)(*plVar1 + 8) = plVar1[1];
            plVar1[1] = (longlong)plVar1;
            *plVar1 = (longlong)plVar1;
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar9,&UNK_1809882d0,0xec9,1);
          }
          break;
        }
        if (plVar1 == plVar7) break;
        plVar9 = (longlong *)(*plVar1 + -0x20);
        if (*plVar1 == 0) {
          plVar9 = plVar8;
        }
        plVar1 = plVar8;
        if (plVar9 != (longlong *)0x0) {
          plVar1 = plVar9 + 4;
        }
      }
LAB_1808ccf2c:
    }
  }
  plVar7 = (longlong *)0x0;
  FUN_1808c8f30(unaff_R12,param_1 + 0x30);
  plVar10 = param_1 + 0x24;
  plVar8 = (longlong *)(*plVar10 + -0x20);
  if (*plVar10 == 0) {
    plVar8 = plVar7;
  }
  plVar9 = plVar7;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = plVar8 + 4;
  }
  while (plVar9 != plVar10) {
    plVar8 = plVar9 + -4;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    iVar3 = (**(code **)(*plVar8 + 0xb0))(plVar8,unaff_R12);
    if (iVar3 != 0) {
      return;
    }
    if (plVar9 == plVar10) break;
    plVar8 = (longlong *)(*plVar9 + -0x20);
    if (*plVar9 == 0) {
      plVar8 = plVar7;
    }
    plVar9 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8 + 4;
    }
  }
  iVar3 = FUN_1808cad80(param_1 + 0x23,param_1 + 0x3a,param_1 + 0x37);
  if (iVar3 == 0) {
    FUN_1808cc510(param_1,unaff_R12);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




