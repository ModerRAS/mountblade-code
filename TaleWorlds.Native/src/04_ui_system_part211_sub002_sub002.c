#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part211_sub002_sub002.c - 1 个函数

// 函数: void FUN_18078cae0(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)
void FUN_18078cae0(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_1a8 [32];
  undefined4 uStack_188;
  longlong alStack_178 [2];
  longlong *plStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (param_3 != (undefined8 *)0x0) {
    uStack_188 = 0;
    lVar3 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x250,&UNK_18095aeb0,0x123);
    if ((lVar3 != 0) &&
       (plVar4 = (longlong *)func_0x000180752d10(lVar3), plVar5 = (longlong *)0x0,
       plVar4 != (longlong *)0x0)) {
      plVar5 = plVar4 + 0x2f;
      lVar3 = *(longlong *)(param_1 + 0x116f0);
      *plVar5 = lVar3;
      plVar4[0x30] = param_1 + 0x116f0;
      *(longlong **)(lVar3 + 8) = plVar5;
      *(longlong **)plVar4[0x30] = plVar5;
      plVar5 = plVar4 + 0x41;
      plVar4[0x31] = (longlong)plVar4;
      plVar4[1] = param_1;
      plVar4[10] = (longlong)plVar4;
      *(undefined4 *)(plVar4 + 0x44) = 0;
      plVar4[0x42] = (longlong)plVar5;
      *plVar5 = (longlong)plVar5;
      plVar4[0x43] = 0;
      plVar5 = (longlong *)func_0x00018076e530();
      plStack_168 = (longlong *)*plVar5;
      uStack_158 = plVar5[2];
      lStack_150 = plVar5[3];
      uStack_148 = (undefined4)plVar5[4];
      uStack_144 = *(undefined4 *)((longlong)plVar5 + 0x24);
      uStack_140 = (undefined4)plVar5[5];
      uStack_13c = *(undefined4 *)((longlong)plVar5 + 0x2c);
      uStack_138 = (undefined4)plVar5[6];
      uStack_134 = *(undefined4 *)((longlong)plVar5 + 0x34);
      uStack_130 = (undefined4)plVar5[7];
      uStack_12c = *(undefined4 *)((longlong)plVar5 + 0x3c);
      if (param_3 == (undefined8 *)(param_1 + 0x116e0)) {
        uVar1 = (ulonglong)uStack_158 >> 0x20;
        uStack_158 = CONCAT44((int)uVar1,0x2b8);
        plVar6 = &lStack_128;
        lStack_128 = *plStack_168;
        lStack_120 = plStack_168[1];
        lStack_118 = plStack_168[2];
        lStack_110 = plStack_168[3];
        lStack_108 = plStack_168[4];
        lStack_f8 = plStack_168[6];
        lStack_f0 = plStack_168[7];
        lStack_e8 = plStack_168[8];
        lStack_e0 = plStack_168[9];
        lStack_d8 = plStack_168[10];
        lStack_d0 = plStack_168[0xb];
        lStack_c8 = plStack_168[0xc];
        lStack_c0 = plStack_168[0xd];
        lStack_b8 = plStack_168[0xe];
        lStack_b0 = plStack_168[0xf];
        lStack_a8 = plStack_168[0x10];
        lStack_a0 = plStack_168[0x11];
        lStack_98 = plStack_168[0x12];
        lStack_90 = plStack_168[0x13];
        lStack_88 = plStack_168[0x14];
        lStack_80 = plStack_168[0x15];
        uStack_78 = (undefined4)plStack_168[0x16];
        uStack_74 = *(undefined4 *)((longlong)plStack_168 + 0xb4);
        uStack_70 = (undefined4)plStack_168[0x17];
        uStack_6c = *(undefined4 *)((longlong)plStack_168 + 0xbc);
        uStack_68 = (undefined4)plStack_168[0x18];
        uStack_64 = *(undefined4 *)((longlong)plStack_168 + 0xc4);
        uStack_60 = (undefined4)plStack_168[0x19];
        uStack_5c = *(undefined4 *)((longlong)plStack_168 + 0xcc);
        lStack_58 = plStack_168[0x1a];
        uStack_100 = plStack_168[5] & 0xffffffff;
      }
      uStack_188 = CONCAT31(uStack_188._1_3_,1);
      puStack_160 = &UNK_18095af28;
      iVar2 = FUN_180742e00(param_1,&plStack_168,plVar6,alStack_178);
      plVar5 = plVar4;
      if (iVar2 == 0) {
        plVar4[0xe] = alStack_178[0];
        plVar4[0xc] = alStack_178[0];
        plVar4[0xd] = alStack_178[0];
        plVar4[2] = 0;
        *(undefined4 *)(plVar4 + 3) = 1;
        LOCK();
        *(uint *)(alStack_178[0] + 100) = *(uint *)(alStack_178[0] + 100) | 0x60;
        UNLOCK();
        *(longlong **)(alStack_178[0] + 0x1f8) = plVar4;
        FUN_180762070(alStack_178[0],1);
        if ((param_2 == 0) || (param_4 == '\0')) {
          plVar4[0x3c] = 0;
        }
        else {
          lVar3 = FUN_18076b520(param_2);
          plVar4[0x3c] = lVar3;
          if (lVar3 == 0) goto LAB_18078cd2a;
        }
        plVar5 = (longlong *)0x0;
        if (param_2 != 0) {
          iVar2 = strncmp(param_2,&UNK_18095af38,9);
          if (iVar2 == 0) {
            *(uint *)(plVar4 + 9) = *(uint *)(plVar4 + 9) | 0x40;
            iVar2 = (**(code **)(*plVar4 + 0x208))(plVar4);
            if (iVar2 != 0) goto LAB_18078cd2a;
          }
        }
        plVar6 = *(longlong **)(param_1 + 0x116e0);
        if (((plVar6 == (longlong *)0x0) || (plVar6 == plVar4)) ||
           (iVar2 = FUN_180752f00(plVar6,plVar4,1,0), iVar2 == 0)) {
          *param_3 = plVar4;
          goto LAB_18078cd39;
        }
      }
    }
  }
LAB_18078cd2a:
  if (plVar5 != (longlong *)0x0) {
    func_0x000180753860(plVar5);
  }
LAB_18078cd39:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
}



undefined8 FUN_18078cde0(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lStackX_20;
  
  lStackX_20 = 0;
  if (param_4 == (undefined8 *)0x0) {
LAB_18078cf29:
    uVar3 = 0x1f;
  }
  else {
    *param_4 = 0;
    if (param_2 < 0) {
      plVar5 = (longlong *)(param_1 + 0x598);
      plVar1 = (longlong *)*plVar5;
      if ((plVar1 == plVar5) && (*(longlong **)(param_1 + 0x5a0) == plVar5)) {
        plVar5 = (longlong *)(param_1 + 0x650);
        if (((longlong *)*plVar5 == plVar5) && (*(longlong **)(param_1 + 0x658) == plVar5)) {
          return 2;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x658) + 0x10);
        FUN_180758220(plVar5,0x1b);
      }
      else {
        plVar5 = plVar1 + -0x2f;
        if (plVar1 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x1e0) <= param_2) goto LAB_18078cf29;
      plVar5 = (longlong *)((longlong)param_2 * 0x230 + *(longlong *)(param_1 + 0x1e8));
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    plVar1 = plVar5 + 0x2f;
    *(longlong *)plVar5[0x30] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar5[0x30];
    plVar5[0x30] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    lVar4 = param_1 + 0x368;
    if (param_1 == -0x1f0) {
      lVar4 = 0;
    }
    plVar5[0x30] = *(longlong *)(lVar4 + 8);
    *plVar1 = lVar4;
    *(longlong **)(lVar4 + 8) = plVar1;
    *(longlong **)plVar5[0x30] = plVar1;
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    iVar2 = func_0x000180786990(*(undefined8 *)(param_1 + 0x6b8),&lStackX_20,0);
    if ((iVar2 != 0) &&
       (uVar3 = func_0x000180786990(*(undefined8 *)(param_1 + 0x6b0),&lStackX_20,0), (int)uVar3 != 0
       )) {
      return uVar3;
    }
    plVar5[0x3b] = lStackX_20;
    uVar3 = 0;
    *param_4 = plVar5;
  }
  return uVar3;
}



undefined8 FUN_18078cf50(longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint auStackX_20 [2];
  longlong lStack_28;
  undefined8 uStack_20;
  
  lStack_28 = 0;
  if (param_4 == (undefined8 *)0x0) {
    return 0x1f;
  }
  uVar3 = (**(code **)(*param_3 + 0x120))(param_3,auStackX_20);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar2 = 0;
  if ((auStackX_20[0] & 0x20000) != 0) {
    uVar3 = FUN_1807902d0(param_1,param_3);
    iVar2 = (int)uVar3;
    if (iVar2 != 0) {
      return uVar3;
    }
  }
  *param_4 = 0;
  if (param_2 < 0) {
    plVar5 = (longlong *)(param_1 + 0x598);
    plVar1 = (longlong *)*plVar5;
    if ((plVar1 == plVar5) && (*(longlong **)(param_1 + 0x5a0) == plVar5)) {
      plVar5 = (longlong *)(param_1 + 0x650);
      if (((longlong *)*plVar5 == plVar5) && (*(longlong **)(param_1 + 0x658) == plVar5)) {
        return 2;
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x658) + 0x10);
      FUN_180758220(plVar5,0x1b);
    }
    else {
      plVar5 = plVar1 + -0x2f;
      if (plVar1 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1e0) <= param_2) {
      return 0x1f;
    }
    plVar5 = (longlong *)((longlong)param_2 * 0x230 + *(longlong *)(param_1 + 0x1e8));
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  plVar1 = plVar5 + 0x2f;
  *(longlong *)plVar5[0x30] = *plVar1;
  *(longlong *)(*plVar1 + 8) = plVar5[0x30];
  plVar5[0x30] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  lVar4 = param_1 + 0x368;
  if (param_1 == -0x1f0) {
    lVar4 = 0;
  }
  plVar5[0x30] = *(longlong *)(lVar4 + 8);
  *plVar1 = lVar4;
  *(longlong **)(lVar4 + 8) = plVar1;
  *(longlong **)plVar5[0x30] = plVar1;
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
  if ((auStackX_20[0] & 0x200) == 0) {
LAB_18078d0cc:
    if ((iVar2 == 0) &&
       (iVar2 = func_0x000180786990(*(undefined8 *)(param_1 + 0x6b8),&lStack_28,0), iVar2 == 0))
    goto LAB_18078d107;
  }
  else {
    iVar2 = func_0x000180742ca0(param_1,*(undefined4 *)(param_3[0xc] + 0xa4),&uStack_20);
    if (iVar2 == 0) {
      iVar2 = FUN_1807704e0(uStack_20,(int)param_3[0xd]);
      goto LAB_18078d0cc;
    }
  }
  uVar3 = func_0x000180786990(*(undefined8 *)(param_1 + 0x6b0),&lStack_28,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(uint *)(plVar5 + 9) = *(uint *)(plVar5 + 9) | 0x10000;
LAB_18078d107:
  if ((auStackX_20[0] & 0x80) == 0) {
    plVar5[0x3b] = lStack_28;
    *param_4 = plVar5;
  }
  else if (*(longlong *)(lStack_28 + 0x20) == *(longlong *)(param_1 + 0x6b0)) {
    plVar5[0x3b] = lStack_28;
    *param_4 = plVar5;
  }
  else {
    lVar4 = param_3[0x2f];
    plVar5[0x3b] = lVar4;
    *(longlong *)(lVar4 + 0xc0) = lStack_28;
    *param_4 = plVar5;
  }
  return 0;
}



undefined8 * FUN_18078d180(undefined8 *param_1)

{
  func_0x000180768c10();
  *param_1 = &UNK_18095afe8;
  param_1[0x3e] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



undefined8 * FUN_18078d1f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180958ba0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1f8);
  }
  return param_1;
}



undefined8 * FUN_18078d220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180958ba0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x238);
  }
  return param_1;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18078d250(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                       longlong *param_5,longlong param_6,longlong *param_7,int *param_8,
                       int *param_9)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint auStackX_8 [2];
  ulonglong in_stack_ffffffffffffff28;
  longlong lStack_b8;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  longlong alStack_68 [2];
  undefined8 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar10 = 0;
  lStack_b8 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  iVar2 = func_0x000180771c10(*(undefined8 *)(param_1 + 0x11418),param_2,auStack_70);
  if (iVar2 != 0) {
    return 0x13;
  }
  iVar2 = func_0x000180771bd0(*(undefined8 *)(param_1 + 0x11418),auStack_70[0],alStack_68);
  if (iVar2 != 0) {
    return 0x13;
  }
  if ((param_3 >> 0xc & 1) == 0) {
    if ((param_3 >> 10 & 1) != 0) {
      bVar15 = *(int *)(alStack_68[0] + 0x80) == 0xe;
      goto LAB_18078d2d6;
    }
    if ((*(int *)(alStack_68[0] + 0x80) - 0xcU & 0xfffffffd) == 0) {
      return 0x13;
    }
  }
  else {
    bVar15 = *(int *)(alStack_68[0] + 0x80) == 0xc;
LAB_18078d2d6:
    if (!bVar15) {
      return 0x13;
    }
  }
  uVar5 = FUN_180771560(*(undefined8 *)(param_1 + 0x11418),alStack_68[0] + 0x20,&lStack_b8);
  if ((int)uVar5 != 0) {
    if ((int)uVar5 != 0x26) {
      return 0x13;
    }
    return uVar5;
  }
  *(longlong **)(lStack_b8 + 0x170) = param_5;
  *(uint *)(lStack_b8 + 0x160) = param_3;
  *(undefined4 *)(lStack_b8 + 0x164) = param_4;
  *(longlong *)(lStack_b8 + 0x20) = param_1;
  *(uint *)(lStack_b8 + 0x2c) = *(uint *)(lStack_b8 + 0x2c) | 1;
  uVar5 = FUN_18076a440(*(undefined8 *)(lStack_b8 + 0x170),0,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar3 = (**(code **)(lStack_b8 + 0x50))(lStack_b8,param_3,param_6);
  if (uVar3 != 0) {
    *(undefined8 *)(lStack_b8 + 0x170) = 0;
    *(undefined8 *)(lStack_b8 + 0x168) = 0;
    FUN_180773410(lStack_b8,1);
    if (uVar3 == 0x10) {
      uVar3 = 0x13;
    }
    return (ulonglong)uVar3;
  }
  uVar3 = *(uint *)(lStack_b8 + 0x160);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_6 != 0) {
    uVar10 = *(undefined4 *)(param_6 + 0x1c);
  }
  uVar5 = (**(code **)(lStack_b8 + 0x88))(lStack_b8,uVar10,&uStack_a8);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(int *)(lStack_b8 + 0x28) != 0xb) &&
     (((((int)uStack_a0 == 0 || (uStack_a0._4_4_ == 0)) ||
       (((int)uStack_90 == 0 && ((uVar3 >> 10 & 1) == 0)))) || ((int)uStack_98 == 0)))) {
    return 0x35;
  }
  uVar5 = 0x20;
  if ((uVar3 >> 10 & 1) != 0) {
    uVar14 = *(uint *)(param_6 + 0xc);
    iVar2 = *(int *)(param_6 + 0x14);
    iVar13 = *(int *)(param_6 + 0x10);
    uVar7 = (ulonglong)*(uint *)(param_6 + 4);
    uStack_a0 = CONCAT44(uVar14,iVar2);
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar13);
    uStack_90 = 0;
    if (uVar14 == 0) {
      return 0x1f;
    }
    if (iVar2 == 1) {
      uVar9 = 8;
    }
    else if (iVar2 == 2) {
      uVar9 = 0x10;
    }
    else if (iVar2 == 3) {
      uVar9 = 0x18;
    }
    else {
      if ((iVar2 != 4) && (iVar2 != 5)) {
        uStack_90 = (ulonglong)*(uint *)(param_6 + 4);
        goto LAB_18078d4e4;
      }
      uVar9 = 0x20;
    }
    goto LAB_18078d4d3;
  }
  iVar13 = (int)uStack_98;
  if ((uVar3 >> 0xc & 1) != 0) {
    (**(code **)(*param_5 + 0x10))(param_5,auStackX_8);
    *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 8) = *(undefined4 *)(param_6 + 0x14);
    uVar10 = *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 8);
    *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 0xc) = *(undefined4 *)(param_6 + 0xc);
    uStack_a0 = CONCAT44(*(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 0xc),uVar10);
    *(undefined4 *)(*(longlong *)(lStack_b8 + 8) + 0x10) = *(undefined4 *)(param_6 + 0x10);
    uVar14 = *(uint *)(param_6 + 0xc);
    iVar13 = *(int *)(*(longlong *)(lStack_b8 + 8) + 0x10);
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar13);
    if (uVar14 == 0) {
      return 0x1f;
    }
    iVar2 = *(int *)(param_6 + 0x14);
    if (iVar2 == 1) {
      uVar7 = (ulonglong)auStackX_8[0];
      uVar9 = 8;
LAB_18078d4d3:
      uVar4 = (uint)(((uVar7 << 3) / uVar9 & 0xffffffff) / (ulonglong)uVar14);
    }
    else {
      if (iVar2 == 2) {
        uVar7 = (ulonglong)auStackX_8[0];
        uVar9 = 0x10;
        goto LAB_18078d4d3;
      }
      if (iVar2 == 3) {
        uVar7 = (ulonglong)auStackX_8[0];
        uVar9 = 0x18;
        goto LAB_18078d4d3;
      }
      if ((iVar2 == 4) || (uVar4 = auStackX_8[0], iVar2 == 5)) {
        uVar7 = (ulonglong)auStackX_8[0];
        uVar9 = uVar5;
        goto LAB_18078d4d3;
      }
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
  }
LAB_18078d4e4:
  iVar2 = uStack_a0._4_4_;
  if (((uVar3 & 0x200) != 0) || (uVar14 = 0, *(int *)(lStack_b8 + 0x18) != 0)) {
    iVar11 = *(int *)(lStack_b8 + 0xa4);
    if (iVar11 == 3) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x1160c) != 0) {
        iVar11 = *(int *)(param_1 + 0x1160c);
      }
      uVar6 = func_0x0001807c1df0();
    }
    else if (iVar11 == 2) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x11610) != 0) {
        iVar11 = *(int *)(param_1 + 0x11610);
      }
      uVar6 = func_0x0001807c9f10();
    }
    else if (iVar11 == 5) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x11618) != 0) {
        iVar11 = *(int *)(param_1 + 0x11618);
      }
      uVar6 = func_0x0001807b10d0();
    }
    else if (iVar11 == 7) {
      iVar11 = 0x20;
      if (*(int *)(param_1 + 0x11620) != 0) {
        iVar11 = *(int *)(param_1 + 0x11620);
      }
      uVar6 = func_0x0001807ae590();
    }
    else {
      iVar11 = 0;
      uVar6 = func_0x0001807c6360();
      uVar3 = 0;
      *(undefined4 *)(lStack_b8 + 0xa4) = 1;
    }
    uVar14 = uVar3 & 0x200;
    if (uVar14 == 0) {
      if (*(int *)(lStack_b8 + 0x18) != 0) {
        uVar7 = FUN_180771560(*(undefined8 *)(param_1 + 0x11418),uVar6,lStack_b8 + 0x120);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
        uVar6 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x38,&UNK_18095b430,0x177,
                              in_stack_ffffffffffffff28);
        *(undefined8 *)(*(longlong *)(lStack_b8 + 0x120) + 0x138) = uVar6;
        lVar12 = *(longlong *)(*(longlong *)(lStack_b8 + 0x120) + 0x138);
        if (lVar12 == 0) {
          return 0x26;
        }
        *(longlong *)(*(longlong *)(lStack_b8 + 0x120) + 8) = lVar12;
        *(longlong *)(*(longlong *)(lStack_b8 + 0x120) + 0x20) = param_1;
      }
    }
    else {
      in_stack_ffffffffffffff28 = CONCAT44((int)(in_stack_ffffffffffffff28 >> 0x20),2);
      uVar7 = FUN_180742cd0(param_1,*(undefined4 *)(lStack_b8 + 0xa4),uVar6,iVar11,
                            in_stack_ffffffffffffff28);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
  }
  iVar11 = 0;
  if (uVar14 != 0) goto LAB_18078d9a9;
  if ((*(int *)(lStack_b8 + 0x18) != 0) && (0 < *(int *)(lStack_b8 + 0x18))) {
    do {
      alStack_68[1] = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uVar7 = (**(code **)(lStack_b8 + 0x88))(lStack_b8,iVar11,alStack_68 + 1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (iVar2 < iStack_54) {
        iVar2 = iStack_54;
      }
      if (iVar13 < (int)uStack_50) {
        iVar13 = (int)uStack_50;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(lStack_b8 + 0x18));
  }
  lVar12 = lStack_b8;
  if (*(longlong *)(lStack_b8 + 0x120) != 0) {
    lVar12 = *(longlong *)(lStack_b8 + 0x120);
  }
  *(undefined8 *)(lVar12 + 0x170) = *(undefined8 *)(lStack_b8 + 0x170);
  *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(lStack_b8 + 0x28);
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)(lStack_b8 + 0x2c);
  puVar1 = *(undefined8 **)(lVar12 + 8);
  *(undefined4 *)(lVar12 + 0x110) = *(undefined4 *)(lStack_b8 + 0x110);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uStack_a8;
    puVar1[1] = uStack_a0;
    puVar1[2] = uStack_98;
    puVar1[3] = uStack_90;
    *(undefined4 *)(puVar1 + 4) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_88._4_4_;
    *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_80._4_4_;
    puVar1[6] = uStack_78;
  }
  if ((*(code **)(lVar12 + 0xf8) != (code *)0x0) && (*(longlong *)(lVar12 + 0x100) != 0)) {
    auStackX_8[0] = 0;
    auStack_b0[0] = 0;
    in_stack_ffffffffffffff28 = 0;
    uVar7 = (**(code **)(lVar12 + 0xf8))(lVar12,iVar2,auStackX_8,0,0,auStack_b0,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (auStackX_8[0] != 0) {
      in_stack_ffffffffffffff28 = CONCAT44((int)(in_stack_ffffffffffffff28 >> 0x20),auStack_b0[0]);
      lVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),auStackX_8[0] + 0x10,
                            &UNK_18095b430,0x1b6,in_stack_ffffffffffffff28);
      *(longlong *)(lVar12 + 0x130) = lVar8;
      if (lVar8 == 0) {
        return 0x26;
      }
      *(ulonglong *)(lVar12 + 0x128) = lVar8 + 0xfU & 0xfffffffffffffff0;
    }
  }
  if ((uStack_90._4_4_ < 2) || (*(longlong *)(lVar12 + 0x148) != 0)) goto LAB_18078d9a9;
  *(uint *)(lVar12 + 0x150) = uStack_90._4_4_;
  iVar11 = *(int *)(*(longlong *)(lVar12 + 8) + 8);
  if (iVar11 == 1) {
    uVar5 = 8;
LAB_18078d946:
    uVar3 = (uint)(uStack_90._4_4_ * uVar5 >> 3);
  }
  else {
    if (iVar11 == 2) {
      uVar5 = 0x10;
      goto LAB_18078d946;
    }
    if (iVar11 == 3) {
      uVar5 = 0x18;
      goto LAB_18078d946;
    }
    if ((iVar11 == 4) || (uVar3 = uStack_90._4_4_, iVar11 == 5)) goto LAB_18078d946;
  }
  *(uint *)(lVar12 + 0x154) = uVar3 * iVar2;
  lVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),uVar3 * iVar2 + 0x10,&UNK_18095b430,
                        0x1c6,in_stack_ffffffffffffff28 & 0xffffffff00000000);
  *(longlong *)(lVar12 + 0x148) = lVar8;
  if (lVar8 == 0) {
    return 0x26;
  }
  *(ulonglong *)(lVar12 + 0x140) = lVar8 + 0xfU & 0xfffffffffffffff0;
LAB_18078d9a9:
  *param_7 = lStack_b8;
  *param_8 = iVar2;
  *param_9 = iVar13;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_18078d9d0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar9 = (undefined8 *)0x0;
  if ((param_3 == 0) || (uVar1 = *(uint *)(param_3 + 0xb0), uVar1 == 0)) {
    puVar7 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0x1175c);
  }
  else {
    puVar7 = puVar9;
    if (uVar1 != 0xffffffff) {
      puVar7 = (undefined8 *)(ulonglong)uVar1;
    }
  }
  iVar6 = FUN_18076b6f0(&UNK_18095b4a8,param_2,0xf);
  if (iVar6 == 0) {
    puVar7 = (undefined8 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x200,&UNK_18095b430,0x1fc,0,0,1)
    ;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000180768c10(puVar7);
      *(undefined4 *)(puVar7 + 7) = 5;
      *puVar7 = &UNK_18095b038;
      puVar9 = puVar7;
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_180769b80(puVar9,param_1,0,*(undefined4 *)(param_1 + 0x1175c));
      goto LAB_18078de46;
    }
  }
  else if (((((param_3 == 0) || (*(longlong *)(param_3 + 0x78) == 0)) ||
            (*(longlong *)(param_3 + 0x80) == 0)) ||
           (((*(longlong *)(param_3 + 0x88) == 0 || (*(longlong *)(param_3 + 0x90) == 0)) &&
            ((*(longlong *)(param_3 + 0x80) == 0 ||
             ((*(longlong *)(param_3 + 0x98) == 0 || (*(longlong *)(param_3 + 0xa0) == 0)))))))) ||
          (*(int *)(param_3 + 200) != 0)) {
    if ((*(char *)(param_1 + 0x11758) == '\0') || ((param_3 != 0 && (*(int *)(param_3 + 200) != 0)))
       ) {
      iVar6 = FUN_18076b6f0(&DAT_180958c80,param_2,7);
      if ((iVar6 == 0) ||
         ((((iVar6 = FUN_18076b6f0(&UNK_18095b4b8,param_2,7), iVar6 == 0 ||
            (iVar6 = FUN_18076b6f0(&UNK_18095b4c0,param_2,8), iVar6 == 0)) ||
           (iVar6 = FUN_18076b6f0(&UNK_18095b4d0,param_2,8), iVar6 == 0)) ||
          ((iVar6 = FUN_18076b6f0(&UNK_18095b4dc,param_2,6), iVar6 == 0 ||
           (iVar6 = FUN_18076b6f0(&UNK_18095b4e4,param_2,6), iVar6 == 0)))))) {
        lVar8 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x2288,&UNK_18095b430,0x22a,0,
                              0,1);
        if (lVar8 != 0) {
          puVar9 = (undefined8 *)FUN_1807f5ef0(lVar8);
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_180769b80(puVar9,param_1,0,puVar7);
          if (param_5 != (undefined1 *)0x0) {
            *param_5 = 1;
          }
          goto LAB_18078de46;
        }
      }
      else {
        puVar10 = (undefined8 *)
                  FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x1f8,&UNK_18095b430,0x237,0
                                ,0,1);
        if (puVar10 != (undefined8 *)0x0) {
          func_0x000180768c10(puVar10);
          *(undefined4 *)(puVar10 + 7) = 4;
          *puVar10 = &UNK_18095af48;
          puVar10[0x3e] = 0;
          puVar9 = puVar10;
        }
        if (puVar9 != (undefined8 *)0x0) goto LAB_18078dd8b;
      }
    }
    else {
      lVar8 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x238,&UNK_18095b430,0x216,0,0,1
                           );
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)FUN_18078d180(lVar8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        if (param_3 != 0) {
          puVar9[0x46] = *(undefined8 *)(param_3 + 0xa8);
        }
        goto LAB_18078dd8b;
      }
    }
  }
  else {
    lVar8 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x238,&UNK_18095b430,0x207,0,0,1);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)FUN_18078d180(lVar8);
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar8 = *(longlong *)(param_3 + 0xa0);
      lVar2 = *(longlong *)(param_3 + 0x98);
      lVar3 = *(longlong *)(param_3 + 0x90);
      lVar4 = *(longlong *)(param_3 + 0x88);
      lVar5 = *(longlong *)(param_3 + 0x80);
      if (((*(longlong *)(param_3 + 0x78) == 0) || (lVar5 == 0)) ||
         (((lVar4 == 0 || (lVar3 == 0)) && ((lVar2 == 0 || (lVar8 == 0)))))) {
        uVar11 = 0x1c;
        goto LAB_18078ddf7;
      }
      puVar9[0x3f] = *(longlong *)(param_3 + 0x78);
      puVar9[0x40] = lVar5;
      puVar9[0x41] = lVar4;
      puVar9[0x42] = lVar3;
      puVar9[0x43] = lVar2;
      puVar9[0x44] = lVar8;
      puVar9[0x46] = *(undefined8 *)(param_3 + 0xa8);
LAB_18078dd8b:
      FUN_180769b80(puVar9,param_1,0,puVar7);
LAB_18078de46:
      *param_4 = puVar9;
      return 0;
    }
  }
  uVar11 = 0x26;
LAB_18078ddf7:
  if (puVar9 == (undefined8 *)0x0) {
    return uVar11;
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar9,&UNK_18095b500,0xb8,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18078de70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffd8;
  
  puVar1 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x200,&UNK_18095b430,0x1e1,
                         in_stack_ffffffffffffffd8 & 0xffffffff00000000,0,1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0x26;
  }
  else {
    func_0x000180768c10(puVar1);
    *(undefined4 *)(puVar1 + 7) = 1;
    *puVar1 = &UNK_180958ec0;
    *(undefined4 *)(puVar1 + 0x3e) = 0;
    puVar1[0x3f] = 0;
    FUN_1807e5830(puVar1,param_1,0,0,0);
    uVar2 = 0;
    *param_2 = puVar1;
  }
  return uVar2;
}



int FUN_18078df30(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong *plStackX_20;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  
  if (param_4 == (longlong *)0x0) {
    iVar4 = 0x1f;
  }
  else if ((int)param_3[3] == -1) {
    iVar4 = 0x26;
  }
  else {
    uVar1 = *(uint *)(param_3 + 5);
    param_2 = uVar1 & 0x18 | param_2;
    uVar5 = param_2 & 0xfffffff7;
    if ((param_2 & 0x10) == 0) {
      uVar5 = param_2 | 8;
    }
    if ((uVar5 & 7) == 0) {
      uVar5 = uVar5 | uVar1 & 7;
    }
    if ((uVar5 & 2) == 0) {
      if ((uVar5 & 4) == 0) {
        uVar5 = uVar5 | 1;
      }
      else {
        uVar5 = uVar5 & 0xfffffffe | 4;
      }
    }
    else {
      uVar5 = uVar5 & 0xfffffffa | 2;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar5 = uVar5 & 0xfffffeff | 0x200;
    }
    lStack_58 = *param_3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    lStack_48 = param_3[2];
    lStack_40 = param_3[3];
    plStackX_20 = (longlong *)*param_4;
    lStack_38 = param_3[4];
    lStack_30 = param_3[5];
    _uStack_50 = CONCAT44(uVar2,(int)param_3[1]);
    lStack_28 = param_3[6];
    iVar4 = FUN_1807aaba0(*(undefined8 *)(param_1 + 0x6b8),uVar5,&lStack_58,&plStackX_20);
    plVar3 = plStackX_20;
    if (iVar4 == 0) {
      plStackX_20[6] = *param_3;
      *(float *)((longlong)plStackX_20 + 0x6c) = (float)(int)param_3[2];
      *(int *)((longlong)plStackX_20 + 0x74) = (int)param_3[6];
      *(undefined4 *)((longlong)plStackX_20 + 0x13c) = *(undefined4 *)((longlong)param_3 + 0x34);
      *(uint *)((longlong)plStackX_20 + 0x2c) = uVar5;
      *(undefined4 *)((longlong)plStackX_20 + 0x4c) = 0;
      *(undefined4 *)(plStackX_20 + 10) = *(undefined4 *)((longlong)plStackX_20 + 0x44);
      *(int *)(plStackX_20 + 5) = (int)param_3[1];
      *(undefined4 *)(plStackX_20 + 0xd) = uVar2;
      plStackX_20[0xc] = 0;
      *(undefined4 *)((longlong)plStackX_20 + 0x24) = 0xe;
      plStackX_20[0x1b] = param_1;
      *(undefined4 *)(plStackX_20 + 0xf) = *(undefined4 *)(param_1 + 0x11404);
      *(float *)((longlong)plStackX_20 + 0x7c) = *(float *)(param_1 + 0x11404) * 10000.0;
      iVar4 = *(int *)((longlong)param_3 + 0x24);
      if (iVar4 == 0) {
        iVar4 = *(int *)((longlong)plStackX_20 + 0x44) + -1;
      }
      (**(code **)(*plStackX_20 + 0x138))(plStackX_20,(int)param_3[4],2,iVar4,2);
      iVar4 = 0;
      *param_4 = (longlong)plVar3;
    }
    else if ((plStackX_20 != (longlong *)0x0) && (plStackX_20 != (longlong *)*param_4)) {
      (**(code **)(*plStackX_20 + 0x18))(plStackX_20,1);
    }
  }
  return iVar4;
}







