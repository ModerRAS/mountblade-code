#include "TaleWorlds.Native.Split.h"

// 03_rendering_part515.c - 13 个函数

// 函数: void FUN_1805435c0(longlong param_1,byte *param_2,longlong param_3)
void FUN_1805435c0(longlong param_1,byte *param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *aplStackX_10 [2];
  longlong *plStackX_20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  
  uVar11 = 0;
  if ((*param_2 & 0x80) != 0) {
    uVar6 = FUN_1804bc380(0x180c95de0,*(undefined4 *)(param_2 + 0x24),
                          *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_3 + 0x53c),0,
                          0xfffffffffffffffe);
    uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    plVar8 = (longlong *)FUN_180275090(uVar7);
    plStackX_20 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    FUN_180275a60(uVar6,plVar8,1);
    pcVar1 = *(code **)(*plVar8 + 0x108);
    uVar4 = FUN_1804bbc50(0x180c95de0,param_3);
    uStack_58 = (longlong **)
                CONCAT44((float)(uVar4 >> 8 & 0xff) * 0.003921569,
                         (float)(uVar4 >> 0x10 & 0xff) * 0.003921569);
    uStack_50 = CONCAT44((float)(uVar4 >> 0x18) * 0.003921569,(float)(uVar4 & 0xff) * 0.003921569);
    (*pcVar1)(plVar8,&uStack_58);
    if ((param_2[0x19] != 0) || (param_2[0x1a] != 0)) {
      uStack_58 = (longlong **)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_40 = CONCAT44(lStack_40._4_4_,3);
      (**(code **)(*plVar8 + 0xb8))(plVar8,0,&uStack_58);
      uVar9 = uVar11;
      uVar10 = uVar11;
      if (uStack_50 - (longlong)uStack_58 >> 3 != 0) {
        do {
          lVar2 = *(longlong *)(uVar9 + (longlong)uStack_58);
          uVar6 = FUN_18022cb40(*(undefined8 *)(lVar2 + 0x1b8),aplStackX_10);
          FUN_180076910(lVar2,uVar6);
          if (aplStackX_10[0] != (longlong *)0x0) {
            (**(code **)(*aplStackX_10[0] + 0x38))();
          }
          uVar4 = (int)uVar10 + 1;
          uVar9 = uVar9 + 8;
          uVar10 = (ulonglong)uVar4;
        } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(uStack_50 - (longlong)uStack_58 >> 3)
                );
      }
      if (uStack_58 != (longlong **)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    uStack_58 = aplStackX_10;
    aplStackX_10[0] = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
    FUN_180544860(param_1,4,aplStackX_10);
    if (*(longlong *)(param_1 + 0x8a8) != 0) {
      uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
    }
    FUN_1802fc0f0(uVar11,*(undefined8 *)(param_1 + 0x38));
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  uStack_48 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 0x930);
  lVar2 = lVar3 + 0x2be8;
  lStack_40 = lVar2;
  iVar5 = _Mtx_lock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  FUN_1804dd4d0(lVar3 + 0x2b88,&stack0xffffffffffffffe0,&stack0xffffffffffffffd0);
  iVar5 = _Mtx_unlock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}





// 函数: void FUN_180543820(longlong param_1,undefined4 param_2)
void FUN_180543820(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar8;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar7;
  ulonglong uVar9;
  
  uVar2 = 0;
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar10 = 5;
  do {
    if (plVar1[-3] != 0) {
      lVar6 = *(longlong *)(plVar1[-3] + 0x260);
      if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x210), lVar6 != 0)) {
        uVar11 = param_2;
        if (*(char *)((longlong)plVar1 + 0x10c) != '\0') {
          uVar11 = 0;
        }
        *(undefined4 *)(lVar6 + 0x100) = uVar11;
      }
      if (plVar1[-2] != 0) {
        FUN_1805ec530(plVar1[-2],param_2);
      }
      lVar6 = plVar1[-1];
      uVar3 = uVar2;
      uVar9 = uVar2;
      if (*plVar1 - lVar6 >> 3 != 0) {
        do {
          iVar8 = (int)uVar9;
          FUN_1805ec530(*(undefined8 *)(lVar6 + uVar3),param_2);
          lVar6 = plVar1[-1];
          uVar3 = uVar3 + 8;
          uVar9 = (ulonglong)(iVar8 + 1U);
        } while ((ulonglong)(longlong)(int)(iVar8 + 1U) < (ulonglong)(*plVar1 - lVar6 >> 3));
      }
    }
    plVar1 = plVar1 + 0x30;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar10 = *(longlong *)(param_1 + 0x810);
  uVar3 = uVar2;
  uVar9 = uVar2;
  if (*(longlong *)(param_1 + 0x818) - lVar10 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(lVar10 + uVar3);
      if (((*plVar1 != 0) && (lVar10 = *(longlong *)(*plVar1 + 0x260), lVar10 != 0)) &&
         (lVar10 = *(longlong *)(lVar10 + 0x210), lVar10 != 0)) {
        *(undefined4 *)(lVar10 + 0x100) = 0;
      }
      if (plVar1[1] != 0) {
        FUN_1805ec530(plVar1[1],0);
      }
      iVar8 = (int)uVar9;
      uVar4 = uVar2;
      uVar7 = uVar2;
      if (plVar1[3] - plVar1[2] >> 3 != 0) {
        do {
          iVar5 = (int)uVar7;
          FUN_1805ec530(*(undefined8 *)(uVar4 + plVar1[2]),0);
          iVar8 = (int)uVar9;
          uVar4 = uVar4 + 8;
          uVar7 = (ulonglong)(iVar5 + 1U);
        } while ((ulonglong)(longlong)(int)(iVar5 + 1U) < (ulonglong)(plVar1[3] - plVar1[2] >> 3));
      }
      lVar10 = *(longlong *)(param_1 + 0x810);
      uVar3 = uVar3 + 8;
      uVar9 = (ulonglong)(iVar8 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar8 + 1U) <
             (ulonglong)(*(longlong *)(param_1 + 0x818) - lVar10 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805439d0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)
void FUN_1805439d0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  undefined1 uStackX_20;
  longlong *plStack_a8;
  longlong **pplStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong **pplStack_68;
  longlong **pplStack_60;
  undefined8 uStack_58;
  longlong **pplStack_50;
  
  uStack_58 = 0xfffffffffffffffe;
  if (((*(uint *)(param_2 + 0xc) & 0xfffffffa) == 0) && (*(uint *)(param_2 + 0xc) != 5)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_1805707a0(param_3,uVar12);
  uVar12 = 0;
  plStack_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  plVar7 = (longlong *)FUN_1804bca40();
  plVar4 = (longlong *)*plVar7;
  *plVar7 = 0;
  plStackX_8 = (longlong *)0x0;
  plStack_88 = plVar4;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  plVar8 = (longlong *)FUN_1804bd030();
  plVar7 = (longlong *)*plVar8;
  *plVar8 = 0;
  plStackX_8 = (longlong *)0x0;
  plStack_80 = plVar7;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  plVar9 = (longlong *)FUN_1804bd2b0();
  plVar8 = (longlong *)*plVar9;
  *plVar9 = 0;
  plStackX_8 = (longlong *)0x0;
  plStack_78 = plVar8;
  if (plStack_a8 != (longlong *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  plVar10 = (longlong *)FUN_1804bce70();
  plVar9 = (longlong *)*plVar10;
  *plVar10 = 0;
  plStackX_8 = (longlong *)0x0;
  plStack_70 = plVar9;
  if (pplStack_a0 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStack_a0 + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x830) != 0) {
    FUN_18054a450();
    plStackX_8 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x1a8,8,0x12);
  uVar1 = *(undefined1 *)(param_1 + 0x8bc);
  pplStack_a0 = &plStackX_8;
  plStackX_8 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  pplStack_50 = &plStack_98;
  plStack_98 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  pplStack_68 = &plStack_90;
  plStack_90 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  pplStack_60 = &plStack_a8;
  plStack_a8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar10 = (longlong *)
            FUN_180546fa0(uVar11,&plStack_a8,&plStack_90,&plStack_98,&plStackX_8,param_1,uStackX_20,
                          uVar1);
  if (plVar10 != (longlong *)0x0) {
    pplStack_a0 = (longlong **)plVar10;
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  pplStack_a0 = *(longlong ***)(param_1 + 0x830);
  *(longlong **)(param_1 + 0x830) = plVar10;
  if (pplStack_a0 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStack_a0 + 0x38))();
  }
  uVar11 = uVar12;
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  }
  pplStack_60 = &plStackX_8;
  plStackX_8 = *(longlong **)(param_1 + 0x830);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStack_68 = &plStackX_8;
  FUN_1802fc0f0(uVar11,plStackX_8);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  lVar6 = lStackX_10;
  *(bool *)(*(longlong *)(param_1 + 0x830) + 400) = *(char *)(lStackX_10 + 0x18) != '\0';
  (**(code **)(**(longlong **)(param_1 + 0x830) + 0x1c0))
            (*(longlong **)(param_1 + 0x830),0x40000000,0xffffffff);
  *(bool *)(*(longlong *)(param_1 + 0x830) + 0x194) = *(char *)(lVar6 + 0x1a) != '\0';
  *(bool *)(*(longlong *)(param_1 + 0x830) + 0x193) = *(char *)(lVar6 + 0x19) != '\0';
  lVar5 = *(longlong *)(param_1 + 0x830);
  uVar2 = *(undefined4 *)(lVar6 + 0x10);
  uVar3 = *(undefined4 *)(lVar6 + 0xc);
  uVar11 = uVar12;
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  }
  *(undefined8 *)(lVar5 + 0x180) = uVar11;
  *(undefined4 *)(lVar5 + 0x174) = uVar3;
  *(undefined4 *)(lVar5 + 0x178) = uVar2;
  *(longlong *)(lVar5 + 0x188) = lStackX_18;
  *(undefined1 *)(lStackX_18 + 0x565) = 0;
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  }
  FUN_18054a3b0(*(undefined8 *)(param_1 + 0x830),uVar12,*(undefined4 *)(lVar6 + 0x14));
  if ((*(char *)(lVar6 + 0x18) != '\0') ||
     ((*(longlong *)(_DAT_180c86870 + 0x3d8) != 0 &&
      (*(int *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x110) == 1)))) {
    FUN_180548880(*(undefined8 *)(param_1 + 0x830),*(undefined1 *)(param_1 + 0x8bc));
  }
  FUN_180544ac0(param_1);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180543e30(longlong param_1)
void FUN_180543e30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  undefined1 auStack_78 [32];
  longlong *aplStack_58 [4];
  int aiStack_38 [4];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    uVar10 = 0;
    lVar13 = 0;
    lVar15 = *plVar1;
    aplStack_58[0] = (longlong *)0x0;
    aplStack_58[1] = (longlong *)0x0;
    aplStack_58[2] = (longlong *)0x0;
    aplStack_58[3] = (longlong *)0x0;
    if ((lVar15 != 0) && (*(char *)(param_1 + 0x200) == '\0')) {
      uVar10 = 1;
      aplStack_58[0] = plVar1;
      lVar13 = 1;
    }
    plVar2 = (longlong *)(param_1 + 0x210);
    lVar12 = *plVar2;
    if ((lVar12 != 0) && (*(char *)(param_1 + 0x380) == '\0')) {
      uVar10 = uVar10 + 1;
      aplStack_58[lVar13] = plVar2;
      lVar13 = lVar13 + 1;
    }
    plVar3 = (longlong *)(param_1 + 0x390);
    lVar7 = *plVar3;
    if ((lVar7 != 0) && (*(char *)(param_1 + 0x500) == '\0')) {
      uVar10 = uVar10 + 1;
      aplStack_58[lVar13] = plVar3;
      lVar13 = lVar13 + 1;
    }
    plVar4 = (longlong *)(param_1 + 0x510);
    lVar8 = *plVar4;
    if ((lVar8 != 0) && (*(char *)(param_1 + 0x680) == '\0')) {
      aplStack_58[lVar13] = plVar4;
      uVar10 = uVar10 + 1;
    }
    uVar11 = (ulonglong)uVar10;
    if ((lVar15 == 0) || (*(char *)(param_1 + 0x200) != '\0')) {
      aplStack_58[uVar11] = plVar1;
      uVar11 = uVar11 + 1;
    }
    if ((lVar12 == 0) || (*(char *)(param_1 + 0x380) != '\0')) {
      aplStack_58[uVar11] = plVar2;
      uVar11 = uVar11 + 1;
    }
    if ((lVar7 == 0) || (*(char *)(param_1 + 0x500) != '\0')) {
      aplStack_58[uVar11] = plVar3;
      uVar11 = uVar11 + 1;
    }
    if ((lVar8 == 0) || (*(char *)(param_1 + 0x680) != '\0')) {
      aplStack_58[uVar11] = plVar4;
    }
    lVar15 = 0;
    piVar16 = aiStack_38;
    do {
      plVar1 = aplStack_58[lVar15];
      if (*plVar1 != 0) {
        bVar9 = false;
        piVar14 = (int *)((longlong)plVar1 + 0x15c);
        lVar13 = 0;
        do {
          if (bVar9) goto LAB_180544017;
          iVar5 = *piVar14;
          if (-1 < iVar5) {
            bVar9 = true;
            iVar6 = *(int *)((longlong)iVar5 * 200 + 0x2c + _DAT_180c961b0);
            lVar12 = 0;
            *piVar16 = iVar6;
            if (0 < lVar15) {
              do {
                if (!bVar9) goto LAB_180543ff4;
                if ((*aplStack_58[lVar12] != 0) &&
                   ((iVar5 == *(int *)((longlong)aplStack_58[lVar12] + 0x16c) ||
                    (iVar6 == aiStack_38[lVar12])))) {
                  bVar9 = false;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < lVar15);
              if (!bVar9) goto LAB_180543ff4;
            }
            FUN_1805ed050(plVar1);
          }
LAB_180543ff4:
          lVar13 = lVar13 + 1;
          piVar14 = piVar14 + 1;
        } while (lVar13 < 4);
        if (!bVar9) {
          *piVar16 = -1;
          *(undefined4 *)((longlong)plVar1 + 0x16c) = 0xffffffff;
        }
      }
LAB_180544017:
      lVar15 = lVar15 + 1;
      piVar16 = piVar16 + 1;
    } while (lVar15 < 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180543e54(longlong param_1)
void FUN_180543e54(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  int *piVar14;
  undefined8 unaff_RDI;
  longlong lVar15;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  int *piVar16;
  longlong lStackX_20;
  ulonglong in_stack_00000050;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  plVar1 = (longlong *)(param_1 + 0x90);
  uVar10 = 0;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBP;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RSI;
  lVar13 = 0;
  *(undefined8 *)(in_R11 + -8) = unaff_RDI;
  lVar15 = *plVar1;
  *(undefined8 *)(in_R11 + -0x10) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x18) = unaff_R15;
  *(undefined8 *)(in_R11 + -0x58) = 0;
  *(undefined8 *)(in_R11 + -0x50) = 0;
  *(undefined8 *)(in_R11 + -0x48) = 0;
  *(undefined8 *)(in_R11 + -0x40) = 0;
  if ((lVar15 != 0) && (*(char *)(param_1 + 0x200) == '\0')) {
    uVar10 = 1;
    *(longlong **)(in_R11 + -0x58) = plVar1;
    lVar13 = 1;
  }
  plVar2 = (longlong *)(param_1 + 0x210);
  lVar12 = *plVar2;
  if ((lVar12 != 0) && (*(char *)(param_1 + 0x380) == '\0')) {
    uVar10 = uVar10 + 1;
    (&lStackX_20)[lVar13] = (longlong)plVar2;
    lVar13 = lVar13 + 1;
  }
  plVar3 = (longlong *)(param_1 + 0x390);
  lVar7 = *plVar3;
  if ((lVar7 != 0) && (*(char *)(param_1 + 0x500) == '\0')) {
    uVar10 = uVar10 + 1;
    (&lStackX_20)[lVar13] = (longlong)plVar3;
    lVar13 = lVar13 + 1;
  }
  plVar4 = (longlong *)(param_1 + 0x510);
  lVar8 = *plVar4;
  if ((lVar8 != 0) && (*(char *)(param_1 + 0x680) == '\0')) {
    (&lStackX_20)[lVar13] = (longlong)plVar4;
    uVar10 = uVar10 + 1;
  }
  uVar11 = (ulonglong)uVar10;
  if ((lVar15 == 0) || (*(char *)(param_1 + 0x200) != '\0')) {
    (&lStackX_20)[uVar11] = (longlong)plVar1;
    uVar11 = uVar11 + 1;
  }
  if ((lVar12 == 0) || (*(char *)(param_1 + 0x380) != '\0')) {
    (&lStackX_20)[uVar11] = (longlong)plVar2;
    uVar11 = uVar11 + 1;
  }
  if ((lVar7 == 0) || (*(char *)(param_1 + 0x500) != '\0')) {
    (&lStackX_20)[uVar11] = (longlong)plVar3;
    uVar11 = uVar11 + 1;
  }
  if ((lVar8 == 0) || (*(char *)(param_1 + 0x680) != '\0')) {
    (&lStackX_20)[uVar11] = (longlong)plVar4;
  }
  lVar15 = 0;
  piVar16 = (int *)&stack0x00000040;
  do {
    plVar1 = (longlong *)(&lStackX_20)[lVar15];
    if (*plVar1 != 0) {
      bVar9 = false;
      piVar14 = (int *)((longlong)plVar1 + 0x15c);
      lVar13 = 0;
      do {
        if (bVar9) goto LAB_180544017;
        iVar5 = *piVar14;
        if (-1 < iVar5) {
          bVar9 = true;
          iVar6 = *(int *)((longlong)iVar5 * 200 + 0x2c + _DAT_180c961b0);
          lVar12 = 0;
          *piVar16 = iVar6;
          if (0 < lVar15) {
            do {
              if (!bVar9) goto LAB_180543ff4;
              if ((*(longlong *)(&lStackX_20)[lVar12] != 0) &&
                 ((iVar5 == *(int *)((&lStackX_20)[lVar12] + 0x16c) ||
                  (iVar6 == *(int *)(&stack0x00000040 + lVar12 * 4))))) {
                bVar9 = false;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < lVar15);
            if (!bVar9) goto LAB_180543ff4;
          }
          FUN_1805ed050(plVar1);
        }
LAB_180543ff4:
        lVar13 = lVar13 + 1;
        piVar14 = piVar14 + 1;
      } while (lVar13 < 4);
      if (!bVar9) {
        *piVar16 = -1;
        *(undefined4 *)((longlong)plVar1 + 0x16c) = 0xffffffff;
      }
    }
LAB_180544017:
    lVar15 = lVar15 + 1;
    piVar16 = piVar16 + 1;
    if (3 < lVar15) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_18054404f(void)
void FUN_18054404f(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180544070(longlong param_1,longlong *param_2,int param_3)
void FUN_180544070(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong lStack_40;
  ulonglong uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x8a8);
  if (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x260);
  }
  if ((param_2 == (longlong *)0x0) || (lVar3 == 0)) goto LAB_1805441e5;
  if (param_3 == 0xd) {
    FUN_1802fbee0(lVar3,0,param_2);
LAB_180544126:
    pplStackX_10 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_180544860(param_1,param_3,&plStackX_8);
  }
  else {
    if (param_3 == 0) {
      lVar2 = FUN_180275820(param_2);
      if (lVar2 != 0) {
        lVar2 = FUN_180275820(param_2);
        if ((char)param_3 < *(char *)(lVar2 + 0xf6)) goto LAB_180544116;
      }
      FUN_1802fbee0(lVar3,*(undefined1 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x210) + 0xde)
                    ,param_2);
      goto LAB_180544126;
    }
LAB_180544116:
    FUN_1802fc0f0(lVar3,param_2);
    if (param_3 != -1) goto LAB_180544126;
  }
  if (*(longlong *)(param_1 + 0x830) != 0) {
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 3;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x830) + 0x188);
    FUN_1805443d0(param_1,*(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x14),
                  *(undefined4 *)(lVar2 + 0x53c),&lStack_40);
  }
  if ((param_3 == 0xd) && (lVar2 = *(longlong *)(lVar3 + 0x210), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    lVar3 = *(longlong *)(lVar3 + 0x210);
    *(code **)(lVar3 + 0x50) = FUN_180541110;
    *(longlong *)(lVar3 + 0x48) = param_1;
  }
LAB_1805441e5:
  lVar2 = *(longlong *)(param_1 + 0x930);
  lVar3 = lVar2 + 0x2be8;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  lStack_40 = lVar3;
  iVar1 = _Mtx_lock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uStack_38 = CONCAT71(uStack_38._1_7_,1);
  uStack_28 = *(undefined4 *)(param_1 + 0x938);
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30);
  iVar1 = _Mtx_unlock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180544200(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4,
                       undefined8 param_5,undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_78;
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
  
  if (((-1 < *(int *)(param_1 + 0x8b4)) &&
      (iVar4 = *(int *)(*(longlong *)
                         ((longlong)*(int *)(param_1 + 0x8b4) * 0x60 + 0x50 + _DAT_180c960e0) +
                       (longlong)param_2 * 4), iVar4 != -1)) &&
     (lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x210) +
               0xabf0), lVar2 != 0)) {
    iVar3 = _Mtx_lock(param_1 + 0x958);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *(int *)(lVar2 + 0x1108) = iVar4;
    *(undefined1 *)(lVar2 + 0x1114) = 0;
    *(undefined4 *)(lVar2 + 0x1118) = 0xffffffff;
    iVar4 = _Mtx_unlock(param_1 + 0x958);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  uVar5 = _DAT_180c86878;
  if ((*(char *)(_DAT_180c86878 + 0x210) == '\0') &&
     (uVar5 = (ulonglong)*(int *)(param_1 + 0x8b4), -1 < *(int *)(param_1 + 0x8b4))) {
    uVar1 = *(uint *)(*(longlong *)(uVar5 * 0x60 + 0x48 + _DAT_180c960e0) + (longlong)param_2 * 4);
    uVar5 = (ulonglong)uVar1;
    if (uVar1 != 0xffffffff) {
      uStack_a4 = (undefined4)*param_4;
      uStack_a0 = (undefined4)((ulonglong)*param_4 >> 0x20);
      uStack_9c = (undefined4)param_4[1];
      uStack_98 = (undefined4)((ulonglong)param_4[1] >> 0x20);
      uStack_3c = *(undefined4 *)(param_1 + 0x8b8);
      uStack_68 = CONCAT44(uStack_a4,uVar1);
      uStack_60 = CONCAT44(uStack_9c,uStack_a0);
      uStack_58 = uStack_98;
      uStack_54 = 1;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_38 = CONCAT44((int)((ulonglong)uStack_78 >> 0x20),param_6);
      if (-1 < (int)uVar1) {
        uVar5 = FUN_180545140(&DAT_180c96110,&uStack_68,param_3,param_5);
        return uVar5;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}





// 函数: void FUN_1805443d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
void FUN_1805443d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((((*(longlong *)(param_1 + 0x8a8) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x210) != 0)) && (*(char *)(param_1 + 0x8bc) != '\0')) {
    FUN_180573020(*(longlong *)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x208),param_2,param_3,
                  param_4,*(undefined8 *)(param_1 + 0x830),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x50),param_5);
  }
  iVar2 = _Mtx_unlock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_1805444c0(longlong param_1)
void FUN_1805444c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 0x8a8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260), lVar1 != 0)) {
    puVar2 = (undefined8 *)
             FUN_1804db620(*(undefined8 *)(param_1 + 0x930),*(undefined8 *)(lVar1 + 0x208));
    *(undefined8 *)(param_1 + 0x850) = *puVar2;
    *(undefined1 *)(param_1 + 0x858) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)(param_1 + 0x860) = puVar2[2];
    *(undefined8 *)(param_1 + 0x868) = puVar2[3];
    return;
  }
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined1 *)(param_1 + 0x858) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  return;
}





// 函数: void FUN_180544550(longlong param_1,longlong param_2)
void FUN_180544550(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 0;
  lVar3 = lVar2;
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  }
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x948) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x948);
    lVar4 = lVar2;
    if (lVar1 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x28);
    }
    if (lVar4 != 0) {
      FUN_180300650(lVar3,0);
      *(undefined1 *)(lVar4 + 0xaa) = 0;
      lVar1 = *(longlong *)(param_1 + 0x948);
    }
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x940) = 0;
    }
    *(longlong *)(param_1 + 0x948) = param_2;
    if (param_2 != 0) {
      *(longlong *)(param_2 + 0x940) = param_1;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x948) + 0x8a8);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x260);
      }
      FUN_180300650(lVar3,lVar2);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0xaa) = 1;
      }
    }
  }
  return;
}





// 函数: void FUN_18054459c(void)
void FUN_18054459c(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar1;
  
  lVar1 = unaff_RBX;
  if (in_RAX != 0) {
    lVar1 = *(longlong *)(unaff_RSI + 0x28);
  }
  if (lVar1 != 0) {
    FUN_180300650();
    *(char *)(lVar1 + 0xaa) = (char)unaff_RBX;
    in_RAX = *(longlong *)(unaff_RDI + 0x948);
  }
  if (in_RAX != 0) {
    *(longlong *)(in_RAX + 0x940) = unaff_RBX;
  }
  *(longlong *)(unaff_RDI + 0x948) = unaff_RBP;
  if (unaff_RBP != 0) {
    *(longlong *)(unaff_RBP + 0x940) = unaff_RDI;
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x948) + 0x8a8);
    if (lVar1 != 0) {
      unaff_RBX = *(longlong *)(lVar1 + 0x260);
    }
    FUN_180300650();
    if (unaff_RBX != 0) {
      *(undefined1 *)(unaff_RBX + 0xaa) = 1;
    }
  }
  return;
}





// 函数: void FUN_1805445d6(void)
void FUN_1805445d6(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(longlong *)(in_RAX + 0x940) = unaff_RBX;
  *(longlong *)(unaff_RDI + 0x948) = unaff_RBP;
  if (unaff_RBP != 0) {
    *(longlong *)(unaff_RBP + 0x940) = unaff_RDI;
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x948) + 0x8a8);
    if (lVar1 != 0) {
      unaff_RBX = *(longlong *)(lVar1 + 0x260);
    }
    FUN_180300650();
    if (unaff_RBX != 0) {
      *(undefined1 *)(unaff_RBX + 0xaa) = 1;
    }
  }
  return;
}





// 函数: void FUN_180544640(longlong param_1,undefined1 param_2)
void FUN_180544640(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  FUN_1802ee720(*(undefined8 *)(param_1 + 0x8a8));
  lVar1 = *(longlong *)(param_1 + 0x930);
  lVar2 = *(longlong *)(lVar1 + 0x2b28);
  puVar3 = *(ulonglong **)
            (lVar2 + (*(ulonglong *)(param_1 + 0x8a8) % (ulonglong)*(uint *)(lVar1 + 0x2b30)) * 8);
  do {
    if (puVar3 == (ulonglong *)0x0) {
      lVar4 = *(longlong *)(lVar1 + 0x2b30);
      puVar3 = *(ulonglong **)(lVar2 + lVar4 * 8);
LAB_1805446a9:
      if (puVar3 != *(ulonglong **)(lVar2 + lVar4 * 8)) {
        *(undefined1 *)
         (*(longlong *)(*(longlong *)(lVar1 + 11000) + (longlong)((int)(uint)puVar3[1] >> 10) * 8) +
          0x10 + (longlong)(int)(*(uint *)(lVar1 + 0x2b18) & (uint)puVar3[1]) * 0xd8) = param_2;
      }
      return;
    }
    if (*(ulonglong *)(param_1 + 0x8a8) == *puVar3) {
      lVar4 = *(longlong *)(lVar1 + 0x2b30);
      goto LAB_1805446a9;
    }
    puVar3 = (ulonglong *)puVar3[2];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



