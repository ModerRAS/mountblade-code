#include "TaleWorlds.Native.Split.h"

// 99_part_01_part012.c - 3 个函数

// 函数: void FUN_1800ab6f0(longlong param_1)
void FUN_1800ab6f0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_178 [32];
  longlong lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  lVar1 = _DAT_180c8aa08;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  puStack_f8 = &UNK_180a02548;
  uStack_f0 = 0;
  uVar2 = func_0x0001800ab380(4);
  uStack_e8 = 0;
  puStack_d8 = &UNK_180a0253c;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_ec = uVar2;
  uVar3 = func_0x0001800ab380(0);
  uStack_c8 = 1;
  puStack_b8 = &UNK_180a02560;
  uStack_c4 = 0xffffffff;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_cc = uVar3;
  uVar4 = func_0x0001800ab380(2);
  uStack_a8 = 2;
  puStack_98 = &UNK_180a02558;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_ac = uVar4;
  uVar5 = func_0x0001800ab380(0xd);
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_80 = 0;
  puStack_150 = &uStack_148;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x90);
  uStack_140 = uVar5;
  uStack_8c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,4,*(undefined8 *)(lVar1 + 0x88));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1d88) = uStack_148;
  puStack_150 = &uStack_148;
  puStack_f8 = &UNK_180a02548;
  puStack_98 = &UNK_180a02558;
  puStack_d8 = &UNK_180a0253c;
  puStack_b8 = &UNK_180a02560;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_80 = 0;
  lStack_158 = (longlong)*(int *)(lVar1 + 0xb8);
  uStack_ec = uVar2;
  uStack_cc = uVar3;
  uStack_ac = uVar4;
  uStack_8c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,4,*(undefined8 *)(lVar1 + 0xb0));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1d90) = uStack_148;
  puStack_f8 = &UNK_180a02548;
  uStack_f0 = 0;
  uStack_13c = func_0x0001800ab380(0xb);
  puStack_d8 = &UNK_180a0256c;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_ec = uStack_13c;
  uVar7 = func_0x0001800ab380(10);
  puStack_b8 = &UNK_180a0253c;
  puStack_150 = &uStack_148;
  uStack_c0 = 0;
  puStack_98 = &UNK_180a02560;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0xe0);
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,4,*(undefined8 *)(lVar1 + 0xd8));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1d98) = uStack_148;
  puStack_150 = &uStack_148;
  puStack_d8 = &UNK_180a0256c;
  puStack_f8 = &UNK_180a02548;
  puStack_b8 = &UNK_180a0253c;
  uStack_f0 = 0;
  puStack_98 = &UNK_180a02560;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0xe0);
  uStack_ec = uVar2;
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,4,*(undefined8 *)(lVar1 + 0xd8));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1de8) = uStack_148;
  puStack_f8 = &UNK_180a02548;
  uStack_ec = uStack_13c;
  puStack_d8 = &UNK_180a0256c;
  puStack_b8 = &UNK_180a0253c;
  puStack_98 = &UNK_180a02560;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  puStack_78 = &UNK_180a02558;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x108);
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  uStack_6c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,5,*(undefined8 *)(lVar1 + 0x100));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1da0) = uStack_148;
  puStack_150 = &uStack_148;
  puStack_d8 = &UNK_180a0256c;
  puStack_f8 = &UNK_180a02548;
  puStack_b8 = &UNK_180a0253c;
  uStack_f0 = 0;
  puStack_98 = &UNK_180a02560;
  puStack_78 = &UNK_180a02558;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x108);
  uStack_ec = uVar2;
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  uStack_6c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,5);
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x1df0) = uStack_148;
  puStack_f8 = &UNK_180a02548;
  puStack_d8 = &UNK_180a0253c;
  puStack_b8 = &UNK_180a02560;
  puStack_98 = &UNK_180a02560;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0;
  uStack_90 = 1;
  uStack_ec = uVar2;
  uStack_cc = uVar3;
  uStack_ac = uVar4;
  uVar5 = func_0x0001800ab380(3);
  puStack_150 = &uStack_148;
  puStack_78 = &UNK_180a02558;
  uStack_6c = uStack_140;
  uStack_70 = (undefined4)uVar8;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x158);
  uStack_8c = uVar5;
  uStack_80 = uVar8;
  uStack_60 = uVar8;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,5,*(undefined8 *)(lVar1 + 0x150));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1db0) = uStack_148;
  puStack_f8 = &UNK_180a02548;
  uStack_f0 = 0;
  puStack_d8 = &UNK_180a0253c;
  puStack_b8 = &UNK_180a02560;
  puStack_98 = &UNK_180a02560;
  puStack_78 = &UNK_180a02558;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_6c = uStack_140;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_90 = 1;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x180);
  uStack_ec = uVar2;
  uStack_cc = uVar3;
  uStack_ac = uVar4;
  uStack_8c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,5,*(undefined8 *)(lVar1 + 0x178));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1db8) = uStack_148;
  puStack_f8 = &UNK_180a02548;
  uStack_ec = uStack_13c;
  puStack_d8 = &UNK_180a0256c;
  puStack_b8 = &UNK_180a0253c;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_60 = 0;
  puStack_98 = &UNK_180a02560;
  puStack_78 = &UNK_180a02560;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_70 = 1;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x1a8);
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  uStack_6c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,5,*(undefined8 *)(lVar1 + 0x1a0));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1dc0) = uStack_148;
  puStack_150 = &uStack_148;
  puStack_d8 = &UNK_180a0256c;
  puStack_f8 = &UNK_180a02548;
  puStack_b8 = &UNK_180a0253c;
  uStack_f0 = 0;
  puStack_98 = &UNK_180a02560;
  puStack_78 = &UNK_180a02560;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_70 = 1;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x1a8);
  uStack_ec = uVar2;
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  uStack_6c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,5,*(undefined8 *)(lVar1 + 0x1a0));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1df8) = uStack_148;
  puStack_f8 = &UNK_180a02548;
  uStack_ec = uStack_13c;
  puStack_d8 = &UNK_180a0256c;
  puStack_b8 = &UNK_180a0253c;
  puStack_98 = &UNK_180a02560;
  puStack_78 = &UNK_180a02560;
  puStack_58 = &UNK_180a02558;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_4c = uStack_140;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_70 = 1;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  uStack_48 = 5;
  uStack_44 = 0xffffffff;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x1d0);
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  uStack_6c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,6,*(undefined8 *)(lVar1 + 0x1c8));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1dc8) = uStack_148;
  puStack_150 = &uStack_148;
  puStack_f8 = &UNK_180a02548;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  puStack_b8 = &UNK_180a0253c;
  puStack_98 = &UNK_180a02560;
  puStack_78 = &UNK_180a02560;
  puStack_58 = &UNK_180a02558;
  puStack_d8 = &UNK_180a0256c;
  uStack_4c = uStack_140;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 2;
  uStack_a4 = 0xffffffff;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_88 = 3;
  uStack_84 = 0xffffffff;
  uStack_80 = 0;
  uStack_70 = 1;
  uStack_68 = 4;
  uStack_64 = 0xffffffff;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 5;
  uStack_44 = 0xffffffff;
  uStack_40 = 0;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x1d0);
  uStack_ec = uVar2;
  uStack_cc = uVar7;
  uStack_ac = uVar3;
  uStack_8c = uVar4;
  uStack_6c = uVar5;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,6,*(undefined8 *)(lVar1 + 0x1c8));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1e00) = uStack_148;
  puStack_118 = &UNK_180a0253c;
  puStack_138 = &UNK_180a02548;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_110 = 0;
  uStack_108 = 1;
  uStack_104 = 0xffffffff;
  uStack_100 = 0;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x130);
  uStack_12c = uVar2;
  uStack_10c = uVar3;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_138,2,*(undefined8 *)(lVar1 + 0x128))
  ;
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1da8) = uStack_148;
  puStack_138 = &UNK_180a02548;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x220);
  uStack_12c = uVar2;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_138,1,*(undefined8 *)(lVar1 + 0x218))
  ;
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  puStack_150 = &uStack_148;
  *(undefined8 *)(param_1 + 0x1dd8) = uStack_148;
  puStack_d8 = &UNK_180a02560;
  puStack_f8 = &UNK_180a02548;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 1;
  uStack_c4 = 0xffffffff;
  uStack_c0 = 0;
  lStack_158 = (longlong)*(int *)(lVar1 + 0x248);
  uStack_ec = uVar2;
  uStack_cc = uVar4;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x58))
                    (*(longlong **)(param_1 + 0x1d78),&puStack_f8,2,*(undefined8 *)(lVar1 + 0x240));
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a02580);
  }
  *(undefined8 *)(param_1 + 0x1de0) = uStack_148;
  *(undefined8 *)(param_1 + 0x1dd0) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ac530(longlong param_1)
void FUN_1800ac530(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  
  uStackX_8 = 0x7000000;
  uVar3 = 0;
  uStackX_c = 1;
  if ((*(int *)(_DAT_180c86920 + 0x4d0) - 3U & 0xfffffffd) == 0) {
    uVar3 = 2;
  }
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e08) = uVar2;
  uStackX_8 = 0x7000200;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e10) = uVar2;
  uStackX_8 = 0x7000007;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e18) = uVar2;
  uStackX_8 = 0x7000207;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e20) = uVar2;
  uStackX_8 = 0x7000107;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e28) = uVar2;
  iVar1 = *(int *)(_DAT_180c86920 + 0x310);
  if (iVar1 == 0) {
    uStackX_c = 1;
    uStackX_8 = 6;
    goto LAB_1800ac67e;
  }
  if (iVar1 == 1) {
    uStackX_8 = 7;
    uStackX_c = 1;
    goto LAB_1800ac67e;
  }
  if (iVar1 == 2) {
LAB_1800ac673:
    uStackX_c = 2;
  }
  else if (iVar1 == 3) {
    uStackX_c = 4;
  }
  else if (iVar1 == 4) {
    uStackX_c = 8;
  }
  else {
    if (iVar1 != 5) goto LAB_1800ac673;
    uStackX_c = 0x10;
  }
  uStackX_8._0_3_ = CONCAT12(uVar3,8);
  uStackX_8 = (uint)(uint3)uStackX_8;
LAB_1800ac67e:
  uStackX_8._0_2_ = (ushort)(byte)uStackX_8;
  uStackX_8 = CONCAT13(7,(uint3)uStackX_8);
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e30) = uVar2;
  uStackX_8 = 0x300020a;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e38) = uVar2;
  uStackX_8 = 0x600020a;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e40) = uVar2;
  uStackX_8 = 0x300030a;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e48) = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ac700(longlong param_1)
void FUN_1800ac700(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  uint uStack_98;
  uint uStack_94;
  int iStack_90;
  longlong lStack_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 uStack_60;
  char cStack_5f;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  iStack_90 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x21b8);
  uVar3 = 0;
  lStack_88 = param_1;
  do {
    iStack_7c = 0;
    uStack_98 = (uint)((char)iStack_90 == '\0');
    do {
      uStack_80 = 0;
      uStack_94 = (uint)((char)iStack_7c == '\0');
      do {
        iVar8 = 0;
        uVar6 = uStack_80 & 0xff;
        do {
          uVar7 = 0;
          do {
            uVar4 = 0;
            do {
              iVar2 = 0;
              do {
                if ((char)iVar2 == '\0') {
                  uVar3 = 0x1f;
                }
                else if ((char)iVar2 == '\x01') {
                  uVar3 = 0x80;
                }
                uStack_68 = 4;
                switch(uVar6) {
                case 0:
                  uStack_68 = 1;
                  break;
                case 1:
                  uStack_68 = 2;
                  break;
                case 2:
                  uStack_68 = 3;
                  break;
                case 4:
                  uStack_68 = 5;
                  break;
                case 5:
                  uStack_68 = 6;
                  break;
                case 6:
                  uStack_68 = 7;
                  break;
                case 7:
                  uStack_68 = 8;
                }
                uStack_64 = (uint)((char)iVar8 == '\0');
                if ((char)iVar8 == '\0') {
                  uStack_54 = 1;
                  uStack_5c = 1;
                  uStack_58 = 1;
                  cStack_5f = -((char)uVar4 != '\0');
                  switch(uVar4 & 0xff) {
                  case 1:
                    uStack_54 = 2;
                    break;
                  case 2:
                    uStack_54 = 3;
                    break;
                  case 3:
                    uStack_54 = 4;
                    break;
                  case 4:
                    uStack_54 = 5;
                    break;
                  case 5:
                    uStack_54 = 6;
                    break;
                  case 6:
                    uStack_54 = 7;
                    break;
                  case 7:
                    uStack_54 = 8;
                  }
                  uStack_50 = 4;
                  switch(uVar7 & 0xff) {
                  case 0:
                    uStack_50 = 1;
                    break;
                  case 1:
                    uStack_50 = 2;
                    break;
                  case 2:
                    uStack_50 = 3;
                    break;
                  case 4:
                    uStack_50 = 5;
                    break;
                  case 5:
                    uStack_50 = 6;
                    break;
                  case 6:
                    uStack_50 = 7;
                    break;
                  case 7:
                    uStack_50 = 8;
                  }
                  uStack_44 = 1;
                  uStack_4c = 1;
                  uStack_48 = 1;
                  switch(uVar4 & 0xff) {
                  case 1:
                    uStack_44 = 2;
                    break;
                  case 2:
                    uStack_44 = 3;
                    break;
                  case 3:
                    uStack_44 = 4;
                    break;
                  case 4:
                    uStack_44 = 5;
                    break;
                  case 5:
                    uStack_44 = 6;
                    break;
                  case 6:
                    uStack_44 = 7;
                    break;
                  case 7:
                    uStack_44 = 8;
                  }
                  uStack_40 = 4;
                  switch(uVar7 & 0xff) {
                  case 0:
                    uStack_40 = 1;
                    break;
                  case 1:
                    uStack_40 = 2;
                    break;
                  case 2:
                    uStack_40 = 3;
                    break;
                  case 4:
                    uStack_40 = 5;
                    break;
                  case 5:
                    uStack_40 = 6;
                    break;
                  case 6:
                    uStack_40 = 7;
                    break;
                  case 7:
                    uStack_40 = 8;
                  }
                  uStack_60 = uVar3;
                }
                uStack_70 = uStack_98;
                uStack_6c = uStack_94;
                iVar1 = (**(code **)(**(longlong **)(lStack_88 + 0x1d78) + 0xa8))
                                  (*(longlong **)(lStack_88 + 0x1d78),&uStack_70,&uStack_78);
                if (iVar1 < 0) {
                  FUN_180220810(iVar1,&UNK_180a02490);
                }
                iVar2 = iVar2 + 1;
                *puVar5 = uStack_78;
                puVar5 = puVar5 + 1;
              } while (iVar2 < 2);
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < 8);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 2);
        uStack_80 = uStack_80 + 1;
      } while ((int)uStack_80 < 8);
      iStack_7c = iStack_7c + 1;
    } while (iStack_7c < 2);
    iStack_90 = iStack_90 + 1;
  } while (iStack_90 < 2);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




