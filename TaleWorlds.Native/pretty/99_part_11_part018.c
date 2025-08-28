#include "TaleWorlds.Native.Split.h"

// 99_part_11_part018.c - 5 个函数

// 函数: void FUN_1806ed192(void)
void FUN_1806ed192(void)

{
  undefined8 *unaff_RBX;
  
  unaff_RBX[3] = &UNK_18094a0b8;
  *unaff_RBX = &UNK_18094cba8;
  return;
}



longlong FUN_1806ed1c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FUN_1806ed140();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}



undefined8 FUN_1806ed240(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &UNK_18094cbd0 + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&UNK_18094cb9c)[lVar3]) {
            return 0;
          }
          lVar3 = lVar4;
        } while (lVar4 != 7);
        return 1;
      }
    } while (lVar4 != 8);
  }
  return 1;
}



undefined8 *
FUN_1806ed330(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char acStackX_18 [8];
  undefined8 uStackX_20;
  ulonglong in_stack_fffffffffffffef8;
  longlong lStack_f8;
  ulonglong uStack_f0;
  undefined8 *puStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  undefined8 *puStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_98 [2];
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  char *pcStack_38;
  
  uStackX_20 = (**(code **)(*param_4 + 0x18))(param_4);
  puVar1 = (undefined8 *)CONCAT71(param_5._1_7_,(undefined1)param_5);
  puStack_d0 = &uStackX_20;
  lStack_c8 = 0;
  uStack_78 = *(undefined4 *)puVar1;
  uStack_74 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_70 = *(undefined4 *)(puVar1 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
  puStack_e8 = &uStackX_20;
  uStack_c0 = 0;
  uStack_68 = puVar1[2];
  ppuStack_88 = &puStack_d0;
  ppuStack_80 = &puStack_e8;
  uStack_48 = param_6;
  pcStack_38 = acStackX_18;
  lStack_e0 = 0;
  uStack_d8 = 0;
  acStackX_18[0] = '\0';
  uStack_58 = 0;
  uStack_40 = 1;
  lStack_f8 = 0;
  uStack_f0 = 0;
  auStack_98[0] = 0;
  uStack_60 = param_3;
  plStack_50 = param_4;
  FUN_1806c2950(&ppuStack_88,auStack_98,&lStack_f8);
  lVar5 = lStack_f8;
  if (acStackX_18[0] == '\0') {
    param_5._0_1_ = 0xb;
    uVar4 = (**(code **)(*(longlong *)*puVar1 + 0xb8))
                      ((longlong *)*puVar1,auStack_98[0],lStack_f8,uStack_f0 & 0xffff,
                       in_stack_fffffffffffffef8 & 0xffffffffffffff00,&param_5);
    plVar3 = (longlong *)(**(code **)(*param_4 + 0x18))(param_4);
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_98[0]);
    uStack_b8 = (undefined *)*puVar1;
    uStack_b0 = puVar1[1];
    uStack_a8 = puVar1[2];
    cVar2 = FUN_1806ef9e0(&uStack_b8,param_3,uVar4,param_4,param_6);
    if (cVar2 == '\0') {
      uStack_b8 = &DAT_18098bc73;
      uStack_a8 = 0;
    }
    else {
      uStack_b8 = &UNK_18094bf90;
      uStack_a8 = uVar4;
    }
    uStack_b0._0_4_ = (undefined4)uStack_a8;
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_a8 >> 0x20);
    *(undefined4 *)param_2 = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_b8._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_b0._4_4_;
    param_2[2] = uStack_a8;
    uStack_b0 = uStack_a8;
    if ((((uStack_f0 & 0x7fffffff00000000) == 0) || ((longlong)uStack_f0 < 0)) || (lStack_f8 == 0))
    goto LAB_1806ed532;
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    lVar5 = lStack_f8;
  }
  else {
    param_2[1] = 0;
    *param_2 = &DAT_18098bc73;
    param_2[2] = 0;
    if ((((uStack_f0 & 0x7fffffff00000000) == 0) || ((longlong)uStack_f0 < 0)) || (lStack_f8 == 0))
    goto LAB_1806ed532;
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar5);
LAB_1806ed532:
  if ((((uStack_d8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_d8)) && (lStack_e0 != 0)) {
    (**(code **)(*(longlong *)*puStack_e8 + 0x10))();
  }
  if ((((uStack_c0 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_c0)) && (lStack_c8 != 0)) {
    (**(code **)(*(longlong *)*puStack_d0 + 0x10))();
  }
  return param_2;
}






// 函数: void FUN_1806ed460(void)
void FUN_1806ed460(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong in_RAX;
  undefined8 uVar6;
  longlong *plVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  undefined4 *unaff_R12;
  longlong *unaff_R15;
  longlong in_stack_00000030;
  ulonglong in_stack_00000038;
  undefined8 *in_stack_00000040;
  longlong in_stack_00000048;
  ulonglong in_stack_00000050;
  undefined8 *in_stack_00000058;
  
  uVar6 = (**(code **)(in_RAX + 0xb8))();
  plVar7 = (longlong *)(**(code **)(*unaff_R15 + 0x18))();
  (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(unaff_RBP + -0x49));
  uVar2 = unaff_R12[1];
  uVar3 = unaff_R12[2];
  uVar4 = unaff_R12[3];
  uVar1 = *(undefined8 *)(unaff_R12 + 4);
  *(undefined4 *)(unaff_RBP + -0x69) = *unaff_R12;
  *(undefined4 *)(unaff_RBP + -0x65) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x61) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x5d) = uVar4;
  *(undefined8 *)(unaff_RBP + -0x59) = uVar1;
  cVar5 = FUN_1806ef9e0(unaff_RBP + -0x69,uVar1,uVar6);
  if (cVar5 == '\0') {
    *(undefined **)(unaff_RBP + -0x69) = &DAT_18098bc73;
    *(undefined8 *)(unaff_RBP + -0x61) = 0;
    *(undefined8 *)(unaff_RBP + -0x59) = 0;
  }
  else {
    *(undefined8 *)(unaff_RBP + -0x61) = uVar6;
    *(undefined **)(unaff_RBP + -0x69) = &UNK_18094bf90;
    *(undefined8 *)(unaff_RBP + -0x59) = uVar6;
  }
  uVar2 = *(undefined4 *)(unaff_RBP + -0x65);
  uVar3 = *(undefined4 *)(unaff_RBP + -0x61);
  uVar4 = *(undefined4 *)(unaff_RBP + -0x5d);
  uVar1 = *(undefined8 *)(unaff_RBP + -0x59);
  *unaff_RDI = *(undefined4 *)(unaff_RBP + -0x69);
  unaff_RDI[1] = uVar2;
  unaff_RDI[2] = uVar3;
  unaff_RDI[3] = uVar4;
  *(undefined8 *)(unaff_RDI + 4) = uVar1;
  if ((((in_stack_00000038 & 0x7fffffff00000000) != 0) && (-1 < (longlong)in_stack_00000038)) &&
     (in_stack_00000030 != unaff_RBX)) {
    plVar7 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,in_stack_00000030);
  }
  if ((((in_stack_00000050 & 0x7fffffff00000000) != 0) && (-1 < (longlong)in_stack_00000050)) &&
     (in_stack_00000048 != 0)) {
    (**(code **)(*(longlong *)*in_stack_00000040 + 0x10))();
  }
  if ((((*(uint *)(unaff_RBP + -0x6d) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + -0x6d))) && (*(longlong *)(unaff_RBP + -0x79) != 0)) {
    (**(code **)(*(longlong *)*in_stack_00000058 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806ed512(void)
void FUN_1806ed512(void)

{
  int in_EAX;
  longlong *plVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong in_stack_00000030;
  undefined8 *in_stack_00000040;
  longlong in_stack_00000048;
  ulonglong in_stack_00000050;
  undefined8 *in_stack_00000058;
  
  if ((-1 < in_EAX) && (in_stack_00000030 != unaff_RBX)) {
    plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1,in_stack_00000030);
  }
  if ((((in_stack_00000050 & 0x7fffffff00000000) != 0) && (-1 < (longlong)in_stack_00000050)) &&
     (in_stack_00000048 != 0)) {
    (**(code **)(*(longlong *)*in_stack_00000040 + 0x10))();
  }
  if ((((*(uint *)(unaff_RBP + -0x6d) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + -0x6d))) && (*(longlong *)(unaff_RBP + -0x79) != 0)) {
    (**(code **)(*(longlong *)*in_stack_00000058 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806ed5a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
void FUN_1806ed5a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,longlong param_6)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined1 auStackX_10 [8];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined4 uStack_d0;
  undefined2 *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  sVar3 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  uStack_b8 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_1806f0e70(param_4,param_5,2,uStack_b8,uVar5,&UNK_18094e3e0,&UNK_1806f1a70);
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,auStackX_10);
  bVar1 = *pbVar7;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((bVar1 & 2) == 0) {
    FUN_1806f0e70(param_4,param_5,2,uVar8,uVar6,&UNK_18094e3e8,FUN_1806f1000);
  }
  else {
    FUN_1806f0d80();
  }
  uVar10 = 0;
  if ((sVar3 != -1) && (uVar6 != 0)) {
    do {
      iVar12 = (int)uVar10;
      if ((iVar12 == 0) || (iVar12 != (int)(uVar10 / 6) * 6)) {
        uVar15 = 1;
        puVar11 = &DAT_1809fc8e4;
      }
      else {
        uVar15 = 4;
        puVar11 = &UNK_18094e480;
      }
      (**(code **)*param_5)(param_5,puVar11,uVar15);
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar10);
      FUN_1806c4e00(param_5,&UNK_180a063a0,uVar4);
      uVar10 = (ulonglong)(iVar12 + 1U);
    } while (iVar12 + 1U < uVar6);
    auStackX_10[0] = 0;
    (**(code **)*param_5)(param_5,auStackX_10,1);
    (**(code **)(*param_4 + 0x10))(param_4,&UNK_18094e3f8,param_5[4]);
    param_5[3] = 0;
  }
  uStack_ec = uStack_128._4_4_;
  uVar2 = uStack_130._4_4_;
  uVar13 = uStack_140._4_4_;
  uStack_140 = (undefined *)((ulonglong)uStack_140._4_4_ << 0x20);
  puStack_138 = (undefined *)0x0;
  uStack_130 = (undefined8 *)((ulonglong)uStack_130._4_4_ << 0x20);
  _uStack_f8 = CONCAT44(uVar2,uVar5);
  uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_100 = uStack_b8;
  uStack_d0 = 0;
  puStack_c8 = (undefined2 *)0x0;
  uStack_d8 = 0;
  _uStack_108 = CONCAT44(uVar13,0xc);
  _uStack_e0 = CONCAT44(uStack_114,uVar6);
  if ((bVar1 & 2) == 0) {
    uStack_f0 = 0xc;
  }
  else {
    uStack_f0 = 6;
    uStack_d8 = 2;
  }
  uStack_e8 = uVar8;
  if (sVar3 != -1) {
    puVar9 = (undefined2 *)thunk_FUN_1808fc418();
    uVar13 = 0;
    puVar14 = puVar9;
    if (uVar6 != 0) {
      do {
        uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar13);
        uVar13 = uVar13 + 1;
        *puVar14 = uVar4;
        puVar14 = puVar14 + 1;
      } while (uVar13 < uVar6);
    }
    uStack_d0 = 2;
    puStack_c8 = puVar9;
  }
  if (*(longlong *)(param_6 + 8) != 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_90 = 0;
    uStack_a8 = *(undefined8 *)(param_1 + 8);
    puStack_a0 = &uStack_a8;
    puStack_98 = &uStack_a8;
    puStack_80 = &uStack_a8;
    uStack_50 = 0x3f400000;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0;
    FUN_1806f1810(&puStack_80,0x40);
    uStack_40 = 0x20;
    uStack_120 = 0;
    uStack_130 = &uStack_a8;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_140 = &UNK_18094e3c0;
    puStack_138 = &UNK_18094e3d0;
    (**(code **)(**(longlong **)(param_6 + 8) + 0x20))
              (*(longlong **)(param_6 + 8),&uStack_108,&uStack_140,0);
    FUN_1806f0c90(param_4,param_5,0x10,uStack_120,(undefined4)uStack_128,&UNK_18094e408,
                  &UNK_1806f0f60);
    uStack_140 = &UNK_18094e3c0;
    puStack_138 = &UNK_18094e3d0;
    FUN_1806f1550(uStack_130,uStack_120);
    puStack_138 = &UNK_180a23da0;
    uStack_140 = &UNK_18094a210;
    FUN_1806f1080(&puStack_a0);
  }
  free(puStack_c8);
  return;
}



undefined8 *
FUN_1806ed9d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  undefined4 uStack_158;
  uint uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  longlong lStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined4 auStack_d0 [2];
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined2 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [16];
  
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_e8 = (ulonglong)uStack_154 << 0x20;
  uStack_148 = 0;
  lStack_d8 = (ulonglong)uStack_144 << 0x20;
  uStack_e0 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  lStack_c0 = (ulonglong)uStack_12c << 0x20;
  auStack_d0[0] = 0;
  uStack_c8 = 0;
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStackX_10 = 0;
  FUN_1806f02d0(param_3,&UNK_180a1a470,&uStackX_10,&lStack_e8,&lStack_d8,param_4);
  uStack_e0 = uStackX_10;
  uStackX_10 = 0;
  FUN_1806efec0(param_3,&UNK_180a19300,&uStackX_10,auStack_d0,&lStack_c0,param_4);
  uStack_c8 = uStackX_10;
  uStackX_20 = 0;
  FUN_1806efd00(param_3,&UNK_18094e3f8,&uStackX_20,auStack_b0,&uStackX_10,param_4);
  uStack_a8 = uStackX_20;
  uStackX_20 = 0;
  FUN_1806efb40(param_3,&UNK_18094e408,&uStackX_20,auStack_28,&uStackX_10,param_4);
  uStack_98 = (**(code **)(*param_4 + 0x18))(param_4);
  uStack_80 = 0;
  puStack_90 = &uStack_98;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_88 = &uStack_98;
  puStack_70 = &uStack_98;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f400000;
  uStack_3c = 0xffffffff;
  uStack_38 = 0;
  FUN_1806f1810(&puStack_70,0x40);
  puStack_110 = &uStack_98;
  puStack_120 = &UNK_18094e3c0;
  puStack_118 = &UNK_18094e3d0;
  uStack_30 = 0x20;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if ((int)uStackX_10 != 0) {
    FUN_1806f19b0(&puStack_120,uStackX_20);
    lVar1 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&puStack_118);
    if (lVar1 != 0) goto LAB_1806edccd;
  }
  uStack_108 = 0;
  puVar2 = (undefined4 *)(**(code **)(*(longlong *)param_5[1] + 0x10))();
  uStack_158 = *puVar2;
  uStack_154 = puVar2[1];
  uStack_150 = CONCAT17(uStack_150._7_1_,*(undefined7 *)(puVar2 + 2));
  uStack_148 = puVar2[4];
  uStack_144 = puVar2[5];
  uStack_140 = puVar2[6];
  uStack_13c = puVar2[7];
  uStack_12c = puVar2[0xb];
  uStack_138 = 0x3f0ccccd;
  uStack_134 = 0;
  uStack_130 = 0;
  (**(code **)(*(longlong *)param_5[1] + 8))((longlong *)param_5[1],&uStack_158);
  (**(code **)(*(longlong *)param_5[1] + 0x20))((longlong *)param_5[1],&lStack_e8,&puStack_120,0);
  lVar1 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&puStack_118);
LAB_1806edccd:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  puStack_120 = &UNK_18094e3c0;
  *param_2 = &UNK_18094bee8;
  puStack_118 = &UNK_18094e3d0;
  FUN_1806f1550(puStack_110,uStack_100);
  puStack_118 = &UNK_180a23da0;
  puStack_120 = &UNK_18094a210;
  FUN_1806f1080(&puStack_90);
  return param_2;
}






// 函数: void FUN_1806edd50(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
void FUN_1806edd50(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,longlong param_6)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined1 auStackX_10 [8];
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_108;
  uint uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined4 uStack_d0;
  undefined2 *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  sVar3 = (**(code **)(*param_2 + 0x68))(param_2,0);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  uStack_b8 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_1806f0e70(param_4,param_5,2,uStack_b8,uVar5,&UNK_18094e3e0,&UNK_1806f1a70);
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x58))(param_2,auStackX_10);
  bVar1 = *pbVar7;
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  if ((bVar1 & 2) == 0) {
    FUN_1806f0e70(param_4,param_5,2,uVar8,uVar6,&UNK_18094e3e8,FUN_1806f1000);
  }
  else {
    FUN_1806f0d80();
  }
  uVar10 = 0;
  if ((sVar3 != -1) && (uVar6 != 0)) {
    do {
      iVar12 = (int)uVar10;
      if ((iVar12 == 0) || (iVar12 != (int)(uVar10 / 6) * 6)) {
        uVar15 = 1;
        puVar11 = &DAT_1809fc8e4;
      }
      else {
        uVar15 = 4;
        puVar11 = &UNK_18094e480;
      }
      (**(code **)*param_5)(param_5,puVar11,uVar15);
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar10);
      FUN_1806c4e00(param_5,&UNK_180a063a0,uVar4);
      uVar10 = (ulonglong)(iVar12 + 1U);
    } while (iVar12 + 1U < uVar6);
    auStackX_10[0] = 0;
    (**(code **)*param_5)(param_5,auStackX_10,1);
    (**(code **)(*param_4 + 0x10))(param_4,&UNK_18094e3f8,param_5[4]);
    param_5[3] = 0;
  }
  uStack_ec = uStack_128._4_4_;
  uVar2 = uStack_130._4_4_;
  uVar13 = uStack_140._4_4_;
  uStack_140 = (undefined *)((ulonglong)uStack_140._4_4_ << 0x20);
  puStack_138 = (undefined *)0x0;
  uStack_130 = (undefined8 *)((ulonglong)uStack_130._4_4_ << 0x20);
  _uStack_f8 = CONCAT44(uVar2,uVar5);
  uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_100 = uStack_b8;
  uStack_d0 = 0;
  puStack_c8 = (undefined2 *)0x0;
  uStack_d8 = 0;
  _uStack_108 = CONCAT44(uVar13,0xc);
  _uStack_e0 = CONCAT44(uStack_114,uVar6);
  if ((bVar1 & 2) == 0) {
    uStack_f0 = 0xc;
  }
  else {
    uStack_f0 = 6;
    uStack_d8 = 2;
  }
  uStack_e8 = uVar8;
  if (sVar3 != -1) {
    puVar9 = (undefined2 *)thunk_FUN_1808fc418();
    uVar13 = 0;
    puVar14 = puVar9;
    if (uVar6 != 0) {
      do {
        uVar4 = (**(code **)(*param_2 + 0x68))(param_2,uVar13);
        uVar13 = uVar13 + 1;
        *puVar14 = uVar4;
        puVar14 = puVar14 + 1;
      } while (uVar13 < uVar6);
    }
    uStack_d0 = 2;
    puStack_c8 = puVar9;
  }
  if (*(longlong *)(param_6 + 8) != 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_90 = 0;
    uStack_a8 = *(undefined8 *)(param_1 + 8);
    puStack_a0 = &uStack_a8;
    puStack_98 = &uStack_a8;
    puStack_80 = &uStack_a8;
    uStack_50 = 0x3f400000;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 0;
    FUN_1806f1810(&puStack_80,0x40);
    uStack_40 = 0x20;
    uStack_120 = 0;
    uStack_130 = &uStack_a8;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_140 = &UNK_18094e3c0;
    puStack_138 = &UNK_18094e3d0;
    (**(code **)(**(longlong **)(param_6 + 8) + 0x20))
              (*(longlong **)(param_6 + 8),&uStack_108,&uStack_140,0);
    FUN_1806f0c90(param_4,param_5,0x10,uStack_120,(undefined4)uStack_128,&UNK_18094e408,
                  &UNK_1806f0f60);
    uStack_140 = &UNK_18094e3c0;
    puStack_138 = &UNK_18094e3d0;
    FUN_1806f1550(uStack_130,uStack_120);
    puStack_138 = &UNK_180a23da0;
    uStack_140 = &UNK_18094a210;
    FUN_1806f1080(&puStack_a0);
  }
  free(puStack_c8);
  return;
}



undefined8 *
FUN_1806ee180(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  undefined4 uStack_158;
  uint uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  longlong lStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined4 auStack_d0 [2];
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined2 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [16];
  
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_e8 = (ulonglong)uStack_154 << 0x20;
  uStack_148 = 0;
  lStack_d8 = (ulonglong)uStack_144 << 0x20;
  uStack_e0 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_c0 = (ulonglong)uStack_12c << 0x20;
  auStack_d0[0] = 0;
  uStack_c8 = 0;
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  uStackX_10 = 0;
  FUN_1806f02d0(param_3,&UNK_180a1a470,&uStackX_10,&lStack_e8,&lStack_d8,param_4);
  uStack_e0 = uStackX_10;
  uStackX_10 = 0;
  FUN_1806efec0(param_3,&UNK_180a19300,&uStackX_10,auStack_d0,&lStack_c0,param_4);
  uStack_c8 = uStackX_10;
  uStackX_20 = 0;
  FUN_1806efd00(param_3,&UNK_18094e3f8,&uStackX_20,auStack_b0,&uStackX_10,param_4);
  uStack_a8 = uStackX_20;
  uStackX_20 = 0;
  FUN_1806efb40(param_3,&UNK_18094e408,&uStackX_20,auStack_28,&uStackX_10,param_4);
  uStack_98 = (**(code **)(*param_4 + 0x18))(param_4);
  uStack_80 = 0;
  puStack_90 = &uStack_98;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_88 = &uStack_98;
  puStack_70 = &uStack_98;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f400000;
  uStack_3c = 0xffffffff;
  uStack_38 = 0;
  FUN_1806f1810(&puStack_70,0x40);
  puStack_110 = &uStack_98;
  puStack_120 = &UNK_18094e3c0;
  puStack_118 = &UNK_18094e3d0;
  uStack_30 = 0x20;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  if ((int)uStackX_10 != 0) {
    FUN_1806f19b0(&puStack_120,uStackX_20);
    lVar1 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&puStack_118);
    if (lVar1 != 0) goto LAB_1806ee47a;
  }
  uStack_108 = 0;
  puVar2 = (undefined4 *)(**(code **)(*(longlong *)param_5[1] + 0x10))();
  uStack_158 = *puVar2;
  uStack_154 = puVar2[1];
  uStack_150 = CONCAT17(uStack_150._7_1_,*(undefined7 *)(puVar2 + 2));
  uStack_148 = puVar2[4];
  uStack_144 = puVar2[5];
  uStack_140 = puVar2[6];
  uStack_13c = puVar2[7];
  uStack_12c = puVar2[0xb];
  uStack_130 = 1;
  uStack_138 = CONCAT44((int)((ulonglong)*(undefined8 *)(puVar2 + 8) >> 0x20),4);
  (**(code **)(*(longlong *)param_5[1] + 8))((longlong *)param_5[1],&uStack_158);
  (**(code **)(*(longlong *)param_5[1] + 0x20))((longlong *)param_5[1],&lStack_e8,&puStack_120,0);
  lVar1 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&puStack_118);
LAB_1806ee47a:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  puStack_120 = &UNK_18094e3c0;
  *param_2 = &UNK_18094bf00;
  puStack_118 = &UNK_18094e3d0;
  FUN_1806f1550(puStack_110,uStack_100);
  puStack_118 = &UNK_180a23da0;
  puStack_120 = &UNK_18094a210;
  FUN_1806f1080(&puStack_90);
  return param_2;
}






