#include "TaleWorlds.Native.Split.h"

// 99_part_13_part024.c - 8 个函数

// 函数: void FUN_1808b461b(undefined8 param_1,undefined8 param_2)
void FUN_1808b461b(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *in_RAX;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong unaff_RBP;
  int iVar12;
  longlong lVar13;
  longlong unaff_RDI;
  undefined8 *unaff_R12;
  longlong unaff_R13;
  longlong lVar14;
  longlong *in_stack_00000030;
  char cStack0000000000000038;
  char cStack000000000000003c;
  char cStack0000000000000040;
  char cStack0000000000000044;
  undefined3 uStack0000000000000045;
  int in_stack_00000048;
  longlong lStack0000000000000050;
  
  uVar10 = _cStack0000000000000040;
  *in_RAX = param_1;
  lVar9 = unaff_R12[2];
  _cStack0000000000000044 = CONCAT31(uStack0000000000000045,(char)param_1);
  _cStack0000000000000040 = CONCAT31(SUB83(uVar10,1),(char)param_1);
  *(int *)(lVar9 + 0x98) = *(int *)(lVar9 + 0x98) + 1;
  *(int *)(lVar9 + 0x1d0) = *(int *)(lVar9 + 0x1d0) + 1;
  lVar13 = lVar9 + 0x1d8;
  *(int *)(lVar9 + 0x168) = *(int *)(lVar9 + 0x168) + 1;
  lVar14 = lVar9 + 0x38;
  *(int *)(lVar9 + 0x238) = *(int *)(lVar9 + 0x238) + 1;
  *(longlong *)(unaff_RBP + -0x69) = lVar9 + 0x170;
  *(longlong *)(unaff_RBP + -0x71) = lVar9 + 0x108;
  plVar4 = (longlong *)*unaff_R12;
  *(longlong *)(unaff_RBP + -0x49) = lVar9;
  lVar9 = *plVar4;
  _cStack000000000000003c = _cStack000000000000003c & 0xffffff00;
  _cStack0000000000000038 = _cStack0000000000000038 & 0xffffff00;
  *(longlong *)(unaff_RBP + -0x79) = lVar13;
  lStack0000000000000050 = lVar14;
  lVar9 = (**(code **)(lVar9 + 0x140))(plVar4,param_2,1);
  if (lVar9 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240();
  }
  uVar2 = *(undefined1 *)(unaff_RBP + 0x6f);
  in_stack_00000030 = (longlong *)0x0;
  lVar5 = unaff_R12[2];
  piVar1 = (int *)(lVar5 + 0x548);
  *piVar1 = *piVar1 + 1;
  iVar6 = FUN_1808bc320(unaff_R12[2],&stack0x00000030,uVar2,lVar9,*(undefined4 *)(lVar5 + 0x548));
  if (iVar6 == 0) {
    *(longlong **)(unaff_RBP + -0x31) = in_stack_00000030;
    *(undefined8 **)(unaff_RBP + -0x39) = unaff_R12;
    in_stack_00000030[10] = unaff_RDI;
    sVar3 = *(short *)(lVar9 + 0xc);
    if (sVar3 == 4) {
      iVar6 = *(int *)(lVar9 + 0x60);
      uVar7 = 0x10;
      uVar11 = 0;
      if (iVar6 == 0x23) {
        uVar11 = 0x10;
      }
      if (iVar6 == 0x23) {
        uVar7 = 0;
      }
      *(uint *)(in_stack_00000030 + 0x11) = (uVar11 | *(uint *)(in_stack_00000030 + 0x11)) & ~uVar7;
      iVar6 = FUN_180739140(unaff_R12[3],iVar6,in_stack_00000030 + 6);
      lVar14 = lStack0000000000000050;
      if (iVar6 != 0) goto LAB_1808b4bdb;
      iVar6 = FUN_1808b5eb0(in_stack_00000030,lVar9,0);
joined_r0x0001808b48b2:
      lVar14 = lStack0000000000000050;
      if (iVar6 == 0) {
LAB_1808b48bb:
        plVar4 = in_stack_00000030;
        iVar6 = 0;
        lVar14 = lStack0000000000000050;
        if (in_stack_00000030[6] != 0) {
          in_stack_00000030[0xe] = -1;
          in_stack_00000030[0xf] = -1;
          iVar12 = 4;
          iVar8 = FUN_180740620(in_stack_00000030[6],&stack0x00000048);
          if (iVar8 == 0) {
            do {
              if (in_stack_00000048 <= iVar6) break;
              iVar8 = FUN_1807408b0(plVar4[6],iVar6,unaff_RBP + -0x61);
              if (iVar8 != 0) goto LAB_1808b4979;
              piVar1 = *(int **)(unaff_RBP + -0x61);
              if (*piVar1 == 3) {
                if (((int)plVar4[0xe] == -1) && (piVar1[0xc] == -2)) {
                  *(int *)(plVar4 + 0xe) = iVar6;
                }
                else if ((*(int *)((longlong)plVar4 + 0x74) == -1) && (piVar1[0xc] == -5)) {
                  *(int *)((longlong)plVar4 + 0x74) = iVar6;
                }
                else if (((int)plVar4[0xf] == -1) && (piVar1[0xc] == -1)) {
                  *(int *)(plVar4 + 0xf) = iVar6;
                }
                else {
                  if ((*(int *)((longlong)plVar4 + 0x7c) != -1) || (piVar1[0xc] != -6))
                  goto LAB_1808b4970;
                  *(int *)((longlong)plVar4 + 0x7c) = iVar6;
                }
                iVar12 = iVar12 + -1;
              }
LAB_1808b4970:
              iVar6 = iVar6 + 1;
            } while (iVar12 != 0);
          }
          else {
LAB_1808b4979:
            lVar14 = lStack0000000000000050;
            if (iVar8 != 0) goto LAB_1808b4bdb;
          }
          if (((unaff_R13 == 0) ||
              ((((int)in_stack_00000030[0xe] == -1 &&
                (*(int *)((longlong)in_stack_00000030 + 0x74) == -1)) ||
               (iVar6 = FUN_18085ec90(), lVar14 = lStack0000000000000050, iVar6 == 0)))) &&
             (iVar6 = FUN_1808b3f80(in_stack_00000030,lVar9), lVar14 = lStack0000000000000050,
             iVar6 == 0)) {
            lVar14 = in_stack_00000030[6];
            iVar6 = *(int *)(unaff_RBP + 0x77);
            if ((*(int *)(unaff_RBP + 0x77) == 0) &&
               ((iVar8 = FUN_180740b40(lVar14,unaff_RBP + -0x61), iVar8 != 0 ||
                (iVar8 = FUN_18073a840(*(undefined8 *)(unaff_RBP + -0x61),0,&stack0x00000048,0),
                iVar6 = in_stack_00000048, iVar8 != 0)))) {
              lVar14 = lStack0000000000000050;
              if (iVar8 != 0) goto LAB_1808b4bdb;
            }
            else {
              FUN_1807411a0(lVar14,0,0,iVar6);
            }
            iVar6 = FUN_180740ff0(in_stack_00000030[6],*(undefined1 *)(lVar9 + 0x40));
            lVar14 = lStack0000000000000050;
            if (iVar6 == 0) {
              uVar10 = (**(code **)(*in_stack_00000030 + 0x30))();
              iVar6 = FUN_1808b89f0(uVar10,in_stack_00000030);
              lVar14 = lStack0000000000000050;
              if ((iVar6 == 0) &&
                 (iVar6 = FUN_1808b5390(unaff_R12[1],*(undefined8 *)(unaff_RBP + -0x51),
                                        in_stack_00000030), lVar14 = lStack0000000000000050,
                 iVar6 == 0)) {
                iVar6 = 0x1c;
                if (*(int *)(lStack0000000000000050 + 0x60) < 1) {
                  iVar8 = 0x1c;
                }
                else {
                  if ((*(int *)(lStack0000000000000050 + 0x60) != 1) ||
                     (iVar8 = FUN_1808501b0(lStack0000000000000050), iVar8 == 0)) {
                    *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + -1;
                    iVar8 = 0;
                  }
                  _cStack0000000000000044 = _cStack0000000000000044 & 0xff;
                  if (iVar8 == 0) {
                    _cStack0000000000000044 = 1;
                  }
                }
                uVar7 = 1;
                if (iVar8 == 0) {
                  iVar8 = 0;
                }
                if (iVar8 == 0) {
                  lVar13 = *(longlong *)(unaff_RBP + -0x71);
                  if (*(int *)(lVar13 + 0x60) < 1) {
                    iVar8 = 0x1c;
                  }
                  else {
                    if ((*(int *)(lVar13 + 0x60) != 1) ||
                       (iVar8 = FUN_18084f7f0(lVar13), iVar8 == 0)) {
                      *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + -1;
                      iVar8 = 0;
                    }
                    _cStack000000000000003c = _cStack000000000000003c & 0xff;
                    if (iVar8 == 0) {
                      _cStack000000000000003c = uVar7;
                    }
                  }
                  if (iVar8 == 0) {
                    iVar8 = 0;
                  }
                  if (iVar8 != 0) goto LAB_1808b4bc4;
                  lVar13 = *(longlong *)(unaff_RBP + -0x69);
                  if (*(int *)(lVar13 + 0x60) < 1) {
                    iVar8 = 0x1c;
                  }
                  else {
                    if ((*(int *)(lVar13 + 0x60) != 1) ||
                       (iVar8 = FUN_18084fcd0(lVar13), iVar8 == 0)) {
                      *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + -1;
                      iVar8 = 0;
                    }
                    _cStack0000000000000040 = _cStack0000000000000040 & 0xff;
                    if (iVar8 == 0) {
                      _cStack0000000000000040 = uVar7;
                    }
                  }
                  if (iVar8 == 0) {
                    iVar8 = 0;
                  }
                  if (iVar8 != 0) goto LAB_1808b4bc4;
                  lVar13 = *(longlong *)(unaff_RBP + -0x79);
                  if (0 < *(int *)(lVar13 + 0x60)) {
                    if ((*(int *)(lVar13 + 0x60) != 1) ||
                       (iVar6 = FUN_180850690(lVar13), iVar6 == 0)) {
                      *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + -1;
                      iVar6 = 0;
                    }
                    _cStack0000000000000038 = _cStack0000000000000038 & 0xff;
                    if (iVar6 == 0) {
                      _cStack0000000000000038 = uVar7;
                    }
                  }
                  if (iVar6 == 0) {
                    iVar6 = 0;
                  }
                  if (iVar6 != 0) goto LAB_1808b4bdb;
                  iVar8 = FUN_1808bd690(*(undefined8 *)(unaff_RBP + -0x49));
                  if (iVar8 != 0) goto LAB_1808b4bc4;
                }
                else {
LAB_1808b4bc4:
                  if (iVar8 != 0) goto LAB_1808b4bdb;
                }
                *(undefined8 *)(unaff_RBP + -0x31) = 0;
                **(undefined8 **)(unaff_RBP + -0x41) = in_stack_00000030;
              }
            }
          }
        }
      }
    }
    else {
      if (sVar3 == 5) {
        if (*(int *)(lVar9 + 0x80) == 0) {
          iVar6 = FUN_180739140(unaff_R12[3],1,in_stack_00000030 + 6);
        }
        else {
          iVar6 = FUN_180739010();
          lVar14 = lStack0000000000000050;
          if (iVar6 != 0) goto LAB_1808b4bdb;
          iVar6 = FUN_1808b5eb0(in_stack_00000030,lVar9,0);
        }
        goto joined_r0x0001808b48b2;
      }
      if (sVar3 != 6) {
        if (sVar3 == 7) {
          iVar6 = FUN_180739140(unaff_R12[3],1,in_stack_00000030 + 6);
          lVar14 = lStack0000000000000050;
          if (iVar6 == 0) {
            iVar6 = FUN_1808b4320(in_stack_00000030,lVar9);
            goto joined_r0x0001808b48b2;
          }
          goto LAB_1808b4bdb;
        }
        goto LAB_1808b48bb;
      }
      iVar6 = FUN_180739140(unaff_R12[3],0x18,in_stack_00000030 + 6);
      lVar14 = lStack0000000000000050;
      if ((iVar6 == 0) &&
         (iVar6 = FUN_1808b4130(in_stack_00000030,lVar9), lVar14 = lStack0000000000000050,
         iVar6 == 0)) {
        uVar10 = func_0x0001808da6d0(lVar9,unaff_RBP + -0x61);
        iVar6 = FUN_1808b4440(in_stack_00000030,uVar10);
        goto joined_r0x0001808b48b2;
      }
    }
LAB_1808b4bdb:
    FUN_1808b3a30(unaff_RBP + -0x39);
    if (cStack0000000000000038 != '\0') goto LAB_1808b4bfc;
    lVar13 = *(longlong *)(unaff_RBP + -0x79);
  }
  *(undefined4 *)(lVar13 + 0x60) = 0;
  FUN_18084f560(lVar13 + 0x30);
LAB_1808b4bfc:
  if (cStack000000000000003c == '\0') {
    lVar13 = *(longlong *)(unaff_RBP + -0x71);
    *(undefined4 *)(lVar13 + 0x60) = 0;
    FUN_18084f040(lVar13 + 0x30);
  }
  if (cStack0000000000000040 == '\0') {
    lVar13 = *(longlong *)(unaff_RBP + -0x69);
    *(undefined4 *)(lVar13 + 0x60) = 0;
    FUN_18084f040(lVar13 + 0x30);
  }
  if (cStack0000000000000044 == '\0') {
    *(undefined4 *)(lVar14 + 0x60) = 0;
    FUN_18084f2d0(lVar14 + 0x30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b4c0b(void)
void FUN_1808b4c0b(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_R14;
  undefined4 unaff_R15D;
  char cStack0000000000000040;
  char cStack0000000000000044;
  
  lVar1 = *(longlong *)(unaff_RBP + -0x71);
  *(undefined4 *)(lVar1 + 0x60) = unaff_R15D;
  FUN_18084f040(lVar1 + 0x30);
  if (cStack0000000000000040 == '\0') {
    lVar1 = *(longlong *)(unaff_RBP + -0x69);
    *(undefined4 *)(lVar1 + 0x60) = unaff_R15D;
    FUN_18084f040(lVar1 + 0x30);
  }
  if (cStack0000000000000044 == '\0') {
    *(undefined4 *)(unaff_R14 + 0x60) = unaff_R15D;
    FUN_18084f2d0(unaff_R14 + 0x30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b4c5a(void)
void FUN_1808b4c5a(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -1) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b4c80(longlong param_1,undefined8 *param_2)
void FUN_1808b4c80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_2[0xb] != 0) && ((*(uint *)(param_2 + 0x11) >> 2 & 1) != 0)) &&
     (iVar1 = FUN_1808b4e20(param_2), iVar1 != 0)) {
    return;
  }
  if (((param_2[9] != 0) &&
      ((*(int *)(param_2 + 0xe) != -1 || (*(int *)((longlong)param_2 + 0x74) != -1)))) &&
     (iVar1 = FUN_180862910(param_2[9],param_2), iVar1 != 0)) {
    return;
  }
  uVar2 = (**(code **)*param_2)(param_2);
  iVar1 = FUN_1808b5a30(param_2,uVar2);
  if (iVar1 == 0) {
    if (param_2[6] != 0) {
      iVar1 = FUN_180740d90();
      if (iVar1 != 0) {
        return;
      }
      param_2[6] = 0;
    }
    lVar3 = (**(code **)*param_2)(param_2);
    if (*(short *)(lVar3 + 0xc) == 7) {
      uVar2 = (**(code **)*param_2)(param_2);
      iVar1 = FUN_1808b4d60(param_2,uVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    *(uint *)(param_2 + 0x11) = *(uint *)(param_2 + 0x11) | 0x80000000;
    iVar1 = FUN_1808b5780(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar1 == 0) {
      func_0x0001808bef30(*(undefined8 *)(param_1 + 0x10),param_2);
    }
  }
  return;
}



undefined8 FUN_1808b4d60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar2 = (**(code **)(*param_1 + 0x38))();
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x20) + -8);
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    plVar5 = plVar6;
  }
  plVar1 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = plVar5 + 1;
  }
  do {
    if (plVar1 == (longlong *)(lVar2 + 0x20)) {
      return 0;
    }
    plVar5 = plVar1 + 5;
    if (plVar1 == (longlong *)0x0) {
      plVar5 = (longlong *)0x30;
    }
    lVar3 = (**(code **)*plVar5)();
    if (*(int *)(lVar3 + 0x48) == 2) {
      plVar5 = plVar1 + -1;
      if (plVar1 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      uVar4 = FUN_1808d37f0(plVar5,param_1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    if (plVar1 == (longlong *)(lVar2 + 0x20)) {
      return 0;
    }
    plVar5 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar1 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      plVar1 = plVar5 + 1;
    }
  } while( true );
}



undefined8 FUN_1808b4e20(longlong param_1)

{
  undefined8 uVar1;
  int aiStackX_8 [8];
  
  uVar1 = FUN_180740c00(*(undefined8 *)(param_1 + 0x30),aiStackX_8);
  if ((int)uVar1 == 0) {
    if (aiStackX_8[0] != 0x18) {
      return 0x1c;
    }
    uVar1 = FUN_1807417b0(*(undefined8 *)(param_1 + 0x30),0,0xffffffff);
    if ((int)uVar1 == 0) {
      uVar1 = func_0x000180853810(*(undefined8 *)(param_1 + 0x58),param_1);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1808c19d0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58));
        if ((int)uVar1 == 0) {
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
      }
    }
  }
  return uVar1;
}



undefined8 FUN_1808b4e90(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStackX_20 [8];
  
  if (param_2 == 0) {
    func_0x0001808d9ef0(auStackX_20,*param_3);
    uVar1 = FUN_1808d9e90(auStackX_20);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



undefined8 FUN_1808b4ec0(longlong param_1)

{
  undefined8 uVar1;
  undefined *puStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  lStack_18 = *(longlong *)(param_1 + 0x48);
  if (lStack_18 != 0) {
    puStack_28 = &UNK_180987190;
    lStack_20 = param_1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
                      (*(longlong **)(param_1 + 0x40),&puStack_28);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



undefined8 FUN_1808b4f00(longlong param_1)

{
  undefined8 uVar1;
  undefined *puStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  lStack_18 = *(longlong *)(param_1 + 0x48);
  if (lStack_18 != 0) {
    puStack_28 = &UNK_1809871b0;
    lStack_20 = param_1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))
                      (*(longlong **)(param_1 + 0x40),&puStack_28);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



undefined8 FUN_1808b4f40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  undefined4 auStackX_8 [2];
  longlong lStackX_18;
  
  if ((*(uint *)(param_1 + 0x88) >> 4 & 1) == 0) {
    uVar1 = FUN_1807404e0(*(undefined8 *)(param_1 + 0x30),0,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_1807404e0(*(undefined8 *)(param_1 + 0x30),param_2,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    iVar3 = 0;
    lStackX_18 = 0;
    auStackX_8[0] = 0;
    uVar1 = FUN_1807406e0(*(undefined8 *)(param_1 + 0x30),7,&lStackX_18,auStackX_8,0,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (0 < *(short *)(param_2 + 0x104)) {
      pfVar2 = (float *)(param_2 + 0x84);
      do {
        iVar3 = iVar3 + 1;
        pfVar2[-0x20] = pfVar2[-0x20] * *(float *)(lStackX_18 + 4);
        *pfVar2 = *pfVar2 * *(float *)(lStackX_18 + 4);
        pfVar2 = pfVar2 + 1;
      } while (iVar3 < *(short *)(param_2 + 0x104));
      return 0;
    }
  }
  return 0;
}



undefined8 FUN_1808b5030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x7c) != -1) &&
     (uVar1 = FUN_180741560(*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x7c),param_2,8),
     (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



undefined8 FUN_1808b5060(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x74) == -1) {
    if ((*(int *)(param_1 + 0x70) != -1) &&
       (uVar1 = FUN_180741560(*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x70),param_2,0x60)
       , (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_180741560(*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x74),param_3,0x1d4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)(param_1 + 0x78) != -1) {
    func_0x000180862c20(*(undefined8 *)(param_1 + 0x48));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b50d0(longlong param_1,undefined8 *param_2)
void FUN_1808b50d0(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
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
  undefined4 uStack_88;
  ushort uStack_84;
  ushort uStack_82;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  int aiStack_78 [2];
  undefined1 auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,&uStack_88);
    lVar5 = (**(code **)(*(longlong *)*param_2 + 0x140))((longlong *)*param_2,&uStack_88,1);
    if (lVar5 == 0) {
      uStack_90 = (uint)bStack_79;
      uStack_98 = (uint)bStack_7a;
      uStack_a0 = (uint)bStack_7b;
      uStack_a8 = (uint)bStack_7c;
      uStack_b0 = (uint)bStack_7d;
      uStack_b8 = (uint)bStack_7e;
      uStack_c0 = (uint)bStack_7f;
      uStack_c8 = (uint)bStack_80;
      uStack_d0 = (uint)uStack_82;
      uStack_d8 = (uint)uStack_84;
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_70,0x27,&UNK_180958180,uStack_88);
    }
    *(longlong *)(param_1 + 0x40) = lVar5;
  }
  iVar4 = FUN_1808b2950(param_1,param_2);
  if ((((((iVar4 != 0) ||
         (cVar3 = func_0x0001808c5780(param_2,*(undefined8 *)(param_1 + 0x40)), cVar3 == '\0')) ||
        (iVar4 = FUN_1808b5a30(param_1,plVar2), iVar4 != 0)) ||
       (((*(short *)((longlong)plVar2 + 0xc) == 7 && ((*(uint *)(param_1 + 0x88) >> 3 & 1) != 0)) &&
        (iVar4 = FUN_1808b59b0(param_1), iVar4 != 0)))) ||
      ((*(short *)((longlong)plVar2 + 0xc) == 6 &&
       ((((piVar6 = (int *)func_0x0001808da6d0(plVar2,&uStack_88), *piVar6 != 0 || (piVar6[1] != 0))
         || ((piVar6[2] != 0 || (piVar6[3] != 0)))) && (iVar4 = FUN_1808b4e20(param_1), iVar4 != 0))
       )))) || ((*(short *)((longlong)plVar2 + 0xc) == 7 &&
                (iVar4 = FUN_1808b4d60(param_1,plVar2), iVar4 != 0)))) goto LAB_1808b536d;
  lVar5 = *(longlong *)(param_1 + 0x40);
  sVar1 = *(short *)(lVar5 + 0xc);
  if ((ushort)(sVar1 - 4U) < 2) {
    iVar4 = FUN_1808b5eb0(param_1,lVar5,plVar2);
  }
  else if (sVar1 == 6) {
    iVar4 = FUN_180740c00(*(undefined8 *)(param_1 + 0x30),aiStack_78);
    if (((iVar4 != 0) || (aiStack_78[0] != 0x18)) || (iVar4 = FUN_1808b2f30(param_1,0), iVar4 != 0))
    goto LAB_1808b536d;
    uVar7 = func_0x0001808da6d0(lVar5,&uStack_88);
    iVar4 = FUN_1808b4440(param_1,uVar7);
  }
  else {
    if (sVar1 != 7) goto LAB_1808b536d;
    iVar4 = FUN_1808b4320(param_1,lVar5);
  }
  if (((iVar4 == 0) &&
      (iVar4 = FUN_180740ff0(*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(lVar5 + 0x40)),
      iVar4 == 0)) && ((iVar4 = FUN_1808b3f80(param_1,lVar5), iVar4 == 0 && (sVar1 == 7)))) {
    FUN_1808b2f30(param_1,0);
  }
LAB_1808b536d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}






// 函数: void FUN_1808b5110(void)
void FUN_1808b5110(void)

{
  short sVar1;
  char cVar2;
  int iVar3;
  longlong in_RAX;
  longlong lVar4;
  int *piVar5;
  undefined8 *unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined4 uStack0000000000000070;
  undefined2 uStack0000000000000074;
  undefined1 in_stack_00000078;
  int in_stack_00000080;
  ulonglong in_stack_000000b0;
  
  (**(code **)(in_RAX + 0x40))();
  lVar4 = (**(code **)(*(longlong *)*unaff_R12 + 0x140))((longlong *)*unaff_R12,&stack0x00000070,1);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(&stack0x00000088,0x27,&UNK_180958180,uStack0000000000000070,uStack0000000000000074
                 );
  }
  *(longlong *)(unaff_R14 + 0x40) = lVar4;
  iVar3 = FUN_1808b2950();
  if ((((((iVar3 != 0) || (cVar2 = func_0x0001808c5780(), cVar2 == '\0')) ||
        (iVar3 = FUN_1808b5a30(), iVar3 != 0)) ||
       (((*(short *)(unaff_R15 + 0xc) == 7 && ((*(uint *)(unaff_R14 + 0x88) >> 3 & 1) != 0)) &&
        (iVar3 = FUN_1808b59b0(), iVar3 != 0)))) ||
      ((*(short *)(unaff_R15 + 0xc) == 6 &&
       ((((piVar5 = (int *)func_0x0001808da6d0(), *piVar5 != 0 || (piVar5[1] != 0)) ||
         ((piVar5[2] != 0 || (piVar5[3] != 0)))) && (iVar3 = FUN_1808b4e20(), iVar3 != 0)))))) ||
     ((*(short *)(unaff_R15 + 0xc) == 7 && (iVar3 = FUN_1808b4d60(), iVar3 != 0))))
  goto LAB_1808b536d;
  lVar4 = *(longlong *)(unaff_R14 + 0x40);
  sVar1 = *(short *)(lVar4 + 0xc);
  if ((ushort)(sVar1 - 4U) < 2) {
    iVar3 = FUN_1808b5eb0();
  }
  else if (sVar1 == 6) {
    iVar3 = FUN_180740c00(*(undefined8 *)(unaff_R14 + 0x30),&stack0x00000080);
    if (((iVar3 != 0) || (in_stack_00000080 != 0x18)) || (iVar3 = FUN_1808b2f30(), iVar3 != 0))
    goto LAB_1808b536d;
    func_0x0001808da6d0(lVar4,&stack0x00000070);
    iVar3 = FUN_1808b4440();
  }
  else {
    if (sVar1 != 7) goto LAB_1808b536d;
    iVar3 = FUN_1808b4320();
  }
  if (((iVar3 == 0) &&
      (iVar3 = FUN_180740ff0(*(undefined8 *)(unaff_R14 + 0x30),*(undefined1 *)(lVar4 + 0x40)),
      iVar3 == 0)) && ((iVar3 = FUN_1808b3f80(), iVar3 == 0 && (sVar1 == 7)))) {
    FUN_1808b2f30();
  }
LAB_1808b536d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b519f(void)
void FUN_1808b519f(void)

{
  uint uStack0000000000000028;
  undefined8 in_stack_00000070;
  
  uStack0000000000000028 = (uint)in_stack_00000070._6_2_;
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}






// 函数: void FUN_1808b51da(void)
void FUN_1808b51da(void)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  int in_stack_00000080;
  ulonglong in_stack_000000b0;
  
  *(undefined8 *)(unaff_R14 + 0x40) = unaff_R13;
  iVar4 = FUN_1808b2950();
  if ((((((iVar4 != 0) || (cVar3 = func_0x0001808c5780(), cVar3 == '\0')) ||
        (iVar4 = FUN_1808b5a30(), iVar4 != 0)) ||
       (((*(short *)(unaff_R15 + 0xc) == 7 && ((*(uint *)(unaff_R14 + 0x88) >> 3 & 1) != 0)) &&
        (iVar4 = FUN_1808b59b0(), iVar4 != 0)))) ||
      ((*(short *)(unaff_R15 + 0xc) == 6 &&
       ((((piVar5 = (int *)func_0x0001808da6d0(), *piVar5 != 0 || (piVar5[1] != 0)) ||
         ((piVar5[2] != 0 || (piVar5[3] != 0)))) && (iVar4 = FUN_1808b4e20(), iVar4 != 0)))))) ||
     ((*(short *)(unaff_R15 + 0xc) == 7 && (iVar4 = FUN_1808b4d60(), iVar4 != 0))))
  goto LAB_1808b536d;
  lVar2 = *(longlong *)(unaff_R14 + 0x40);
  sVar1 = *(short *)(lVar2 + 0xc);
  if ((ushort)(sVar1 - 4U) < 2) {
    iVar4 = FUN_1808b5eb0();
  }
  else if (sVar1 == 6) {
    iVar4 = FUN_180740c00(*(undefined8 *)(unaff_R14 + 0x30),&stack0x00000080);
    if (((iVar4 != 0) || (in_stack_00000080 != 0x18)) || (iVar4 = FUN_1808b2f30(), iVar4 != 0))
    goto LAB_1808b536d;
    func_0x0001808da6d0(lVar2,&stack0x00000070);
    iVar4 = FUN_1808b4440();
  }
  else {
    if (sVar1 != 7) goto LAB_1808b536d;
    iVar4 = FUN_1808b4320();
  }
  if (((iVar4 == 0) &&
      (iVar4 = FUN_180740ff0(*(undefined8 *)(unaff_R14 + 0x30),*(undefined1 *)(lVar2 + 0x40)),
      iVar4 == 0)) && ((iVar4 = FUN_1808b3f80(), iVar4 == 0 && (sVar1 == 7)))) {
    FUN_1808b2f30();
  }
LAB_1808b536d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b0 ^ (ulonglong)&stack0x00000000);
}






