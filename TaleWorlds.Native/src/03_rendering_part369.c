#include "TaleWorlds.Native.Split.h"

// 03_rendering_part369.c - 7 个函数

// 函数: void FUN_18046bc30(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_18046bc30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  iVar2 = 0;
  lVar3 = lVar4 >> 0x3f;
  if (lVar4 / 0x50 + lVar3 != lVar3) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_3);
      lVar3 = lVar3 + 0x50;
      iVar2 = iVar2 + 1;
    } while ((ulonglong)(longlong)iVar2 <
             (ulonglong)((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) / 0x50));
  }
  return;
}





// 函数: void FUN_18046bc76(void)
void FUN_18046bc76(void)

{
  longlong lVar1;
  uint unaff_EBX;
  ulonglong uVar2;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  uVar2 = (ulonglong)unaff_EBX;
  do {
    (**(code **)(**(longlong **)(uVar2 + *(longlong *)(unaff_RDI + 0x30)) + 0x170))();
    uVar2 = uVar2 + 0x50;
    unaff_EBX = unaff_EBX + 1;
    lVar1 = SUB168(SEXT816(unaff_R15) *
                   SEXT816(*(longlong *)(unaff_RDI + 0x38) - *(longlong *)(unaff_RDI + 0x30)),8);
  } while ((ulonglong)(longlong)(int)unaff_EBX < (ulonglong)((lVar1 >> 5) - (lVar1 >> 0x3f)));
  return;
}





// 函数: void FUN_18046bcc6(void)
void FUN_18046bcc6(void)

{
  return;
}



ulonglong FUN_18046bce0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_c8 = *param_5;
  uStack_c0 = param_5[1];
  uStack_b8 = param_5[2];
  uStack_b0 = param_5[3];
  uStack_a8 = param_5[4];
  uStack_a0 = param_5[5];
  uStack_98 = param_5[6];
  uStack_90 = param_5[7];
  uStack_88 = param_5[8];
  uStack_80 = param_5[9];
  uVar2 = param_5[10];
  uStack_70 = param_5[0xb];
  uStack_68 = param_5[0xc];
  uStack_60 = param_5[0xd];
  uStack_78 = uVar2;
  if (*(char *)(param_1 + 0x84) != '\0') {
    uStack_70 = *(undefined8 *)(param_1 + 0x88);
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    uStack_78._5_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
    uStack_78._0_5_ = CONCAT14(1,(int)uVar2);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  for (puVar5 = *(undefined8 **)(param_1 + 0x30); puVar5 != puVar1; puVar5 = puVar5 + 10) {
    uStack_38 = puVar5[4];
    uStack_30 = puVar5[5];
    uStack_48 = puVar5[2];
    uStack_40 = puVar5[3];
    plStack_58 = (longlong *)*puVar5;
    uStack_50 = puVar5[1];
    uStack_18 = puVar5[8];
    uStack_10 = puVar5[9];
    uStack_28 = *(undefined4 *)(puVar5 + 6);
    uStack_24 = *(undefined4 *)((longlong)puVar5 + 0x34);
    uStack_20 = *(undefined4 *)(puVar5 + 7);
    uStack_1c = *(undefined4 *)((longlong)puVar5 + 0x3c);
    uVar4 = 4;
    if ((char)uStack_10 != '\0') {
      uVar4 = 0;
    }
    uVar3 = (ulonglong)uStack_98 >> 0x30;
    uStack_98._6_2_ = (undefined2)uVar3;
    uStack_98._0_6_ = CONCAT15(uVar4,0x100000000);
    param_5 = (undefined8 *)
              (**(code **)(*plStack_58 + 0x1c8))(plStack_58,param_2,param_3,&uStack_50,&uStack_c8);
  }
  return (ulonglong)param_5 & 0xffffffffffffff00;
}



ulonglong FUN_18046bd6e(void)

{
  ulonglong uVar1;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RDI;
  undefined4 uStack0000000000000060;
  undefined1 uStack0000000000000064;
  undefined1 uStack0000000000000065;
  longlong *plStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  
  do {
    uStack00000000000000c0 = unaff_RBX[4];
    uStack00000000000000c8 = unaff_RBX[5];
    uStack00000000000000b0 = unaff_RBX[2];
    uStack00000000000000b8 = unaff_RBX[3];
    plStack00000000000000a0 = (longlong *)*unaff_RBX;
    uStack00000000000000a8 = unaff_RBX[1];
    uStack00000000000000e0 = unaff_RBX[8];
    uStack00000000000000e8 = unaff_RBX[9];
    uStack00000000000000d0 = *(undefined4 *)(unaff_RBX + 6);
    uStack00000000000000d4 = *(undefined4 *)((longlong)unaff_RBX + 0x34);
    uStack00000000000000d8 = *(undefined4 *)(unaff_RBX + 7);
    uStack00000000000000dc = *(undefined4 *)((longlong)unaff_RBX + 0x3c);
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 1;
    uStack0000000000000065 = 4;
    if ((char)uStack00000000000000e8 != '\0') {
      uStack0000000000000065 = 0;
    }
    uVar1 = (**(code **)(*plStack00000000000000a0 + 0x1c8))
                      (plStack00000000000000a0,uStack00000000000000e8,(int)plStack00000000000000a0,
                       &stack0x000000a8,&stack0x00000030);
    unaff_RBX = unaff_RBX + 10;
  } while (unaff_RBX != unaff_RDI);
  return uVar1 & 0xffffffffffffff00;
}



undefined1 FUN_18046be18(void)

{
  return 0;
}





// 函数: void FUN_18046be40(longlong param_1)
void FUN_18046be40(longlong param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [64];
  
  lVar6 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x80) = 0;
  lVar5 = lVar6 >> 0x3f;
  if (lVar6 / 0x50 + lVar5 == lVar5) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = 0x4cbebc204cbebc20;
  *(undefined8 *)(param_1 + 0x58) = 0x7f7fffff4cbebc20;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x7f7fffff00000000;
  *(undefined8 *)(param_1 + 0x60) = 0xccbebc20ccbebc20;
  *(undefined8 *)(param_1 + 0x68) = 0x7f7fffffccbebc20;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  for (puVar7 = *(undefined8 **)(param_1 + 0x30); puVar7 != puVar2; puVar7 = puVar7 + 10) {
    puVar3 = (undefined8 *)*puVar7;
    uStack_e0 = puVar7[1];
    uStack_d8 = puVar7[2];
    uStack_d0 = puVar7[3];
    uStack_c8 = puVar7[4];
    uStack_c0 = puVar7[5];
    uStack_b8 = *(undefined4 *)(puVar7 + 6);
    uStack_b4 = *(undefined4 *)((longlong)puVar7 + 0x34);
    uStack_b0 = *(undefined4 *)(puVar7 + 7);
    uStack_ac = *(undefined4 *)((longlong)puVar7 + 0x3c);
    uStack_a8 = *(undefined4 *)(puVar7 + 8);
    uStack_a4 = *(undefined4 *)((longlong)puVar7 + 0x44);
    uStack_a0 = *(undefined4 *)(puVar7 + 9);
    uStack_9c = *(undefined4 *)((longlong)puVar7 + 0x4c);
    puStack_e8 = puVar3;
    if ((undefined *)*puVar3 == &UNK_180a169b8) {
      FUN_180276f30(puVar3,(longlong)puVar3 + 0x214,0);
    }
    else {
      (**(code **)((undefined *)*puVar3 + 0x160))(puVar3);
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    uStack_15c = 0;
    uStack_14c = 0;
    uStack_13c = 0;
    uStack_168 = *(undefined4 *)(lVar5 + 0x70);
    uStack_164 = *(undefined4 *)(lVar5 + 0x74);
    uStack_160 = *(undefined4 *)(lVar5 + 0x78);
    uStack_158 = *(undefined4 *)(lVar5 + 0x80);
    uStack_154 = *(undefined4 *)(lVar5 + 0x84);
    uStack_150 = *(undefined4 *)(lVar5 + 0x88);
    uStack_148 = *(undefined4 *)(lVar5 + 0x90);
    uStack_144 = *(undefined4 *)(lVar5 + 0x94);
    uStack_140 = *(undefined4 *)(lVar5 + 0x98);
    uStack_138 = *(undefined4 *)(lVar5 + 0xa0);
    uStack_134 = *(undefined4 *)(lVar5 + 0xa4);
    uStack_130 = *(undefined4 *)(lVar5 + 0xa8);
    uStack_12c = 0x3f800000;
    FUN_180084760(&uStack_168,auStack_58);
    uStack_128 = uStack_e0;
    uStack_120 = uStack_d8 & 0xffffffff;
    uStack_118 = uStack_d0;
    uStack_110 = uStack_c8 & 0xffffffff;
    uStack_108 = (undefined4)uStack_c0;
    uStack_104 = uStack_c0._4_4_;
    uStack_100 = uStack_b8;
    uStack_f8 = uStack_b0;
    uStack_f4 = uStack_ac;
    uStack_f0 = uStack_a8;
    uStack_fc = 0;
    uStack_ec = 0x3f800000;
    puVar4 = (undefined8 *)FUN_1800946d0(&uStack_128,&uStack_168,auStack_58);
    uStack_98 = *puVar4;
    uStack_90 = puVar4[1];
    uStack_88 = puVar4[2];
    uStack_80 = puVar4[3];
    uStack_78 = *(undefined4 *)(puVar4 + 4);
    uStack_74 = *(undefined4 *)((longlong)puVar4 + 0x24);
    uStack_70 = *(undefined4 *)(puVar4 + 5);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0x2c);
    uStack_68 = *(undefined4 *)(puVar4 + 6);
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 0x34);
    uStack_60 = *(undefined4 *)(puVar4 + 7);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0x3c);
    if ((undefined *)*puVar3 == &UNK_180a169b8) {
      lVar5 = (longlong)puVar3 + 0x214;
    }
    else {
      lVar5 = (**(code **)((undefined *)*puVar3 + 0x198))(puVar3);
    }
    FUN_18063a240(param_1 + 0x50,lVar5);
  }
  pfVar1 = (float *)(param_1 + 0x50);
  fVar10 = *(float *)(param_1 + 0x60);
  if (*pfVar1 <= fVar10) {
    fVar9 = (fVar10 + *pfVar1) * 0.5;
    *(float *)(param_1 + 0x70) = fVar9;
    *(float *)(param_1 + 0x74) = (*(float *)(param_1 + 100) + *(float *)(param_1 + 0x54)) * 0.5;
    *(float *)(param_1 + 0x78) = (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x58)) * 0.5;
    *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
    fVar10 = fVar10 - fVar9;
    fVar9 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x78);
    fVar8 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x80) = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}





// 函数: void FUN_18046beb3(longlong param_1,undefined8 param_2)
void FUN_18046beb3(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *unaff_RBP;
  longlong unaff_R14;
  float fVar20;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar21;
  float fVar22;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined8 in_stack_00000060;
  ulonglong in_stack_00000068;
  undefined8 in_stack_00000070;
  ulonglong in_stack_00000078;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x7f7fffff00000000;
  *(int *)(param_1 + 0x60) = (int)param_2;
  *(int *)(param_1 + 100) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(param_1 + 0x68) = in_XMM1_Dc;
  *(undefined4 *)(param_1 + 0x6c) = in_XMM1_Dd;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  for (puVar19 = *(undefined8 **)(param_1 + 0x30); puVar19 != puVar2; puVar19 = puVar19 + 10) {
    puVar12 = (undefined8 *)*puVar19;
    uVar13 = puVar19[1];
    uVar14 = puVar19[3];
    uVar15 = puVar19[4];
    uVar16 = puVar19[5];
    unaff_RBP[-10] = puVar19[2];
    unaff_RBP[-9] = uVar14;
    uVar4 = *(undefined4 *)(puVar19 + 6);
    uVar5 = *(undefined4 *)((longlong)puVar19 + 0x34);
    uVar6 = *(undefined4 *)(puVar19 + 7);
    uVar7 = *(undefined4 *)((longlong)puVar19 + 0x3c);
    unaff_RBP[-8] = uVar15;
    unaff_RBP[-7] = uVar16;
    uVar8 = *(undefined4 *)(puVar19 + 8);
    uVar9 = *(undefined4 *)((longlong)puVar19 + 0x44);
    uVar10 = *(undefined4 *)(puVar19 + 9);
    uVar11 = *(undefined4 *)((longlong)puVar19 + 0x4c);
    puVar3 = (undefined *)*puVar12;
    unaff_RBP[-0xc] = puVar12;
    unaff_RBP[-0xb] = uVar13;
    *(undefined4 *)(unaff_RBP + -6) = uVar4;
    *(undefined4 *)((longlong)unaff_RBP + -0x2c) = uVar5;
    *(undefined4 *)(unaff_RBP + -5) = uVar6;
    *(undefined4 *)((longlong)unaff_RBP + -0x24) = uVar7;
    *(undefined4 *)(unaff_RBP + -4) = uVar8;
    *(undefined4 *)((longlong)unaff_RBP + -0x1c) = uVar9;
    *(undefined4 *)(unaff_RBP + -3) = uVar10;
    *(undefined4 *)((longlong)unaff_RBP + -0x14) = uVar11;
    if (puVar3 == &UNK_180a169b8) {
      FUN_180276f30(puVar12,(longlong)puVar12 + 0x214,0);
    }
    else {
      (**(code **)(puVar3 + 0x160))(puVar12);
    }
    uStackX_20 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x28) + 0x70);
    uStackX_24 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x28) + 0x74);
    FUN_180084760(&uStackX_20,unaff_RBP + 6);
    in_stack_00000060 = unaff_RBP[-0xb];
    in_stack_00000070 = unaff_RBP[-9];
    in_stack_00000068 = unaff_RBP[-10] & 0xffffffff;
    in_stack_00000078 = unaff_RBP[-8] & 0xffffffff;
    *(undefined4 *)(unaff_RBP + -0x10) = *(undefined4 *)(unaff_RBP + -7);
    *(undefined4 *)((longlong)unaff_RBP + -0x7c) = *(undefined4 *)((longlong)unaff_RBP + -0x34);
    *(undefined4 *)(unaff_RBP + -0xf) = *(undefined4 *)(unaff_RBP + -6);
    *(undefined4 *)((longlong)unaff_RBP + -0x74) = *(undefined4 *)((longlong)unaff_RBP + -0x2c);
    *(undefined4 *)(unaff_RBP + -0xe) = *(undefined4 *)(unaff_RBP + -5);
    *(undefined4 *)((longlong)unaff_RBP + -0x6c) = *(undefined4 *)((longlong)unaff_RBP + -0x24);
    *(undefined4 *)(unaff_RBP + -0xd) = *(undefined4 *)(unaff_RBP + -4);
    *(undefined4 *)((longlong)unaff_RBP + -100) = *(undefined4 *)((longlong)unaff_RBP + -0x1c);
    *(undefined4 *)((longlong)unaff_RBP + -0x74) = 0;
    *(undefined4 *)((longlong)unaff_RBP + -100) = 0x3f800000;
    puVar17 = (undefined8 *)FUN_1800946d0(&stack0x00000060,&uStackX_20,unaff_RBP + 6);
    uVar13 = puVar17[1];
    uVar14 = puVar17[2];
    uVar15 = puVar17[3];
    unaff_RBP[-2] = *puVar17;
    unaff_RBP[-1] = uVar13;
    uVar4 = *(undefined4 *)(puVar17 + 4);
    uVar5 = *(undefined4 *)((longlong)puVar17 + 0x24);
    uVar6 = *(undefined4 *)(puVar17 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar17 + 0x2c);
    *unaff_RBP = uVar14;
    unaff_RBP[1] = uVar15;
    uVar8 = *(undefined4 *)(puVar17 + 6);
    uVar9 = *(undefined4 *)((longlong)puVar17 + 0x34);
    uVar10 = *(undefined4 *)(puVar17 + 7);
    uVar11 = *(undefined4 *)((longlong)puVar17 + 0x3c);
    puVar3 = (undefined *)*puVar12;
    *(undefined4 *)(unaff_RBP + 2) = uVar4;
    *(undefined4 *)((longlong)unaff_RBP + 0x14) = uVar5;
    *(undefined4 *)(unaff_RBP + 3) = uVar6;
    *(undefined4 *)((longlong)unaff_RBP + 0x1c) = uVar7;
    *(undefined4 *)(unaff_RBP + 4) = uVar8;
    *(undefined4 *)((longlong)unaff_RBP + 0x24) = uVar9;
    *(undefined4 *)(unaff_RBP + 5) = uVar10;
    *(undefined4 *)((longlong)unaff_RBP + 0x2c) = uVar11;
    if (puVar3 == &UNK_180a169b8) {
      lVar18 = (longlong)puVar12 + 0x214;
    }
    else {
      lVar18 = (**(code **)(puVar3 + 0x198))(puVar12);
    }
    FUN_18063a240(unaff_R14 + 0x50,lVar18);
  }
  pfVar1 = (float *)(unaff_R14 + 0x50);
  fVar22 = *(float *)(unaff_R14 + 0x60);
  if (*pfVar1 <= fVar22) {
    fVar21 = (fVar22 + *pfVar1) * 0.5;
    *(float *)(unaff_R14 + 0x70) = fVar21;
    *(float *)(unaff_R14 + 0x74) =
         (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
    *(float *)(unaff_R14 + 0x78) =
         (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
    *(undefined4 *)(unaff_R14 + 0x7c) = 0x7f7fffff;
    fVar22 = fVar22 - fVar21;
    fVar21 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
    fVar20 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
    *(float *)(unaff_R14 + 0x80) = SQRT(fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21);
    return;
  }
  *(undefined4 *)(unaff_R14 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined8 *)(unaff_R14 + 0x58) = 0;
  *(undefined8 *)(unaff_R14 + 0x60) = 0;
  *(undefined8 *)(unaff_R14 + 0x68) = 0;
  *(undefined8 *)(unaff_R14 + 0x70) = 0;
  *(undefined8 *)(unaff_R14 + 0x78) = 0;
  return;
}





// 函数: void FUN_18046bee3(void)
void FUN_18046bee3(void)

{
  float *pfVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RBP;
  longlong unaff_R14;
  undefined8 *unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined8 in_stack_00000060;
  ulonglong in_stack_00000068;
  undefined8 in_stack_00000070;
  ulonglong in_stack_00000078;
  
  do {
    puVar11 = (undefined8 *)*unaff_RBX;
    uVar12 = unaff_RBX[1];
    uVar13 = unaff_RBX[3];
    uVar14 = unaff_RBX[4];
    uVar15 = unaff_RBX[5];
    unaff_RBP[-10] = unaff_RBX[2];
    unaff_RBP[-9] = uVar13;
    uVar3 = *(undefined4 *)(unaff_RBX + 6);
    uVar4 = *(undefined4 *)((longlong)unaff_RBX + 0x34);
    uVar5 = *(undefined4 *)(unaff_RBX + 7);
    uVar6 = *(undefined4 *)((longlong)unaff_RBX + 0x3c);
    unaff_RBP[-8] = uVar14;
    unaff_RBP[-7] = uVar15;
    uVar7 = *(undefined4 *)(unaff_RBX + 8);
    uVar8 = *(undefined4 *)((longlong)unaff_RBX + 0x44);
    uVar9 = *(undefined4 *)(unaff_RBX + 9);
    uVar10 = *(undefined4 *)((longlong)unaff_RBX + 0x4c);
    puVar2 = (undefined *)*puVar11;
    unaff_RBP[-0xc] = puVar11;
    unaff_RBP[-0xb] = uVar12;
    *(undefined4 *)(unaff_RBP + -6) = uVar3;
    *(undefined4 *)((longlong)unaff_RBP + -0x2c) = uVar4;
    *(undefined4 *)(unaff_RBP + -5) = uVar5;
    *(undefined4 *)((longlong)unaff_RBP + -0x24) = uVar6;
    *(undefined4 *)(unaff_RBP + -4) = uVar7;
    *(undefined4 *)((longlong)unaff_RBP + -0x1c) = uVar8;
    *(undefined4 *)(unaff_RBP + -3) = uVar9;
    *(undefined4 *)((longlong)unaff_RBP + -0x14) = uVar10;
    if (puVar2 == &UNK_180a169b8) {
      FUN_180276f30(puVar11,(longlong)puVar11 + 0x214,0);
    }
    else {
      (**(code **)(puVar2 + 0x160))(puVar11);
    }
    uStackX_20 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x28) + 0x70);
    uStackX_24 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x28) + 0x74);
    FUN_180084760(&uStackX_20,unaff_RBP + 6);
    in_stack_00000060 = unaff_RBP[-0xb];
    in_stack_00000070 = unaff_RBP[-9];
    in_stack_00000068 = unaff_RBP[-10] & 0xffffffff;
    in_stack_00000078 = unaff_RBP[-8] & 0xffffffff;
    *(undefined4 *)(unaff_RBP + -0x10) = *(undefined4 *)(unaff_RBP + -7);
    *(undefined4 *)((longlong)unaff_RBP + -0x7c) = *(undefined4 *)((longlong)unaff_RBP + -0x34);
    *(undefined4 *)(unaff_RBP + -0xf) = *(undefined4 *)(unaff_RBP + -6);
    *(undefined4 *)((longlong)unaff_RBP + -0x74) = *(undefined4 *)((longlong)unaff_RBP + -0x2c);
    *(undefined4 *)(unaff_RBP + -0xe) = *(undefined4 *)(unaff_RBP + -5);
    *(undefined4 *)((longlong)unaff_RBP + -0x6c) = *(undefined4 *)((longlong)unaff_RBP + -0x24);
    *(undefined4 *)(unaff_RBP + -0xd) = *(undefined4 *)(unaff_RBP + -4);
    *(undefined4 *)((longlong)unaff_RBP + -100) = *(undefined4 *)((longlong)unaff_RBP + -0x1c);
    *(undefined4 *)((longlong)unaff_RBP + -0x74) = 0;
    *(undefined4 *)((longlong)unaff_RBP + -100) = 0x3f800000;
    puVar16 = (undefined8 *)FUN_1800946d0(&stack0x00000060,&uStackX_20,unaff_RBP + 6);
    uVar12 = puVar16[1];
    uVar13 = puVar16[2];
    uVar14 = puVar16[3];
    unaff_RBP[-2] = *puVar16;
    unaff_RBP[-1] = uVar12;
    uVar3 = *(undefined4 *)(puVar16 + 4);
    uVar4 = *(undefined4 *)((longlong)puVar16 + 0x24);
    uVar5 = *(undefined4 *)(puVar16 + 5);
    uVar6 = *(undefined4 *)((longlong)puVar16 + 0x2c);
    *unaff_RBP = uVar13;
    unaff_RBP[1] = uVar14;
    uVar7 = *(undefined4 *)(puVar16 + 6);
    uVar8 = *(undefined4 *)((longlong)puVar16 + 0x34);
    uVar9 = *(undefined4 *)(puVar16 + 7);
    uVar10 = *(undefined4 *)((longlong)puVar16 + 0x3c);
    puVar2 = (undefined *)*puVar11;
    *(undefined4 *)(unaff_RBP + 2) = uVar3;
    *(undefined4 *)((longlong)unaff_RBP + 0x14) = uVar4;
    *(undefined4 *)(unaff_RBP + 3) = uVar5;
    *(undefined4 *)((longlong)unaff_RBP + 0x1c) = uVar6;
    *(undefined4 *)(unaff_RBP + 4) = uVar7;
    *(undefined4 *)((longlong)unaff_RBP + 0x24) = uVar8;
    *(undefined4 *)(unaff_RBP + 5) = uVar9;
    *(undefined4 *)((longlong)unaff_RBP + 0x2c) = uVar10;
    if (puVar2 == &UNK_180a169b8) {
      lVar17 = (longlong)puVar11 + 0x214;
    }
    else {
      lVar17 = (**(code **)(puVar2 + 0x198))(puVar11);
    }
    FUN_18063a240(unaff_R14 + 0x50,lVar17);
    unaff_RBX = unaff_RBX + 10;
  } while (unaff_RBX != unaff_R15);
  pfVar1 = (float *)(unaff_R14 + 0x50);
  fVar20 = *(float *)(unaff_R14 + 0x60);
  if (*pfVar1 <= fVar20) {
    fVar19 = (fVar20 + *pfVar1) * 0.5;
    *(float *)(unaff_R14 + 0x70) = fVar19;
    *(float *)(unaff_R14 + 0x74) =
         (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
    *(float *)(unaff_R14 + 0x78) =
         (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
    *(undefined4 *)(unaff_R14 + 0x7c) = 0x7f7fffff;
    fVar20 = fVar20 - fVar19;
    fVar19 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
    fVar18 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
    *(float *)(unaff_R14 + 0x80) = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar19 * fVar19);
    return;
  }
  *(undefined4 *)(unaff_R14 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined8 *)(unaff_R14 + 0x58) = 0;
  *(undefined8 *)(unaff_R14 + 0x60) = 0;
  *(undefined8 *)(unaff_R14 + 0x68) = 0;
  *(undefined8 *)(unaff_R14 + 0x70) = 0;
  *(undefined8 *)(unaff_R14 + 0x78) = 0;
  return;
}





// 函数: void FUN_18046c0c9(void)
void FUN_18046c0c9(void)

{
  float *pfVar1;
  longlong unaff_R14;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)(unaff_R14 + 0x50);
  fVar4 = *(float *)(unaff_R14 + 0x60);
  if (*pfVar1 <= fVar4) {
    fVar3 = (fVar4 + *pfVar1) * 0.5;
    *(float *)(unaff_R14 + 0x70) = fVar3;
    *(float *)(unaff_R14 + 0x74) =
         (*(float *)(unaff_R14 + 100) + *(float *)(unaff_R14 + 0x54)) * 0.5;
    *(float *)(unaff_R14 + 0x78) =
         (*(float *)(unaff_R14 + 0x68) + *(float *)(unaff_R14 + 0x58)) * 0.5;
    *(undefined4 *)(unaff_R14 + 0x7c) = 0x7f7fffff;
    fVar4 = fVar4 - fVar3;
    fVar3 = *(float *)(unaff_R14 + 0x68) - *(float *)(unaff_R14 + 0x78);
    fVar2 = *(float *)(unaff_R14 + 100) - *(float *)(unaff_R14 + 0x74);
    *(float *)(unaff_R14 + 0x80) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
    return;
  }
  *(undefined4 *)(unaff_R14 + 0x80) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined8 *)(unaff_R14 + 0x58) = 0;
  *(undefined8 *)(unaff_R14 + 0x60) = 0;
  *(undefined8 *)(unaff_R14 + 0x68) = 0;
  *(undefined8 *)(unaff_R14 + 0x70) = 0;
  *(undefined8 *)(unaff_R14 + 0x78) = 0;
  return;
}





