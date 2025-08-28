#include "TaleWorlds.Native.Split.h"

// 99_part_13_part063.c - 11 个函数

// 函数: void FUN_1808d2850(float *param_1,undefined4 *param_2,float *param_3,undefined1 param_4)
void FUN_1808d2850(float *param_1,undefined4 *param_2,float *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_148 [32];
  undefined8 uStack_128;
  float fStack_120;
  undefined8 uStack_118;
  float fStack_110;
  undefined1 auStack_108 [64];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined8 uStack_7c;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  undefined8 uStack_64;
  float fStack_5c;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  uStack_128 = 0;
  uStack_c8 = 0;
  uStack_bc = 0;
  uStack_b0 = 0;
  uStack_a4 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b4 = 0;
  uStack_a8 = 0;
  uStack_9c = 0;
  uStack_90 = 0;
  uVar12 = FUN_1808d1fa0(auStack_108,param_1,param_4);
  FUN_1808d2680(&uStack_c8,uVar12);
  if (*(char *)(param_1 + 0x10) == '\0') {
    puVar13 = (undefined4 *)FUN_1808d2080(auStack_108,&uStack_c8,param_3);
  }
  else {
    fVar15 = *param_3 - param_1[0xc];
    uVar12 = *(undefined8 *)param_1;
    fVar16 = param_3[1] - param_1[0xd];
    fVar17 = *param_3 - *param_1;
    fVar18 = param_3[1] - param_1[1];
    fStack_110 = param_1[2];
    fVar14 = param_3[2] - param_1[0xe];
    fVar19 = param_3[2] - param_1[2];
    fVar15 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
    fVar14 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19);
    if (0.0 < fVar14) {
      fVar14 = 1.0 / fVar14;
      fVar18 = fVar14 * fVar18;
      fVar17 = fVar14 * fVar17;
      fVar14 = fVar14 * fVar19;
    }
    else {
      uStack_128 = *(undefined8 *)(param_1 + 6);
      fVar18 = (float)((ulonglong)uStack_128 >> 0x20);
      fVar14 = param_1[8];
      fVar17 = (float)uStack_128;
      fStack_120 = fVar14;
    }
    uStack_7c = *(undefined8 *)(param_3 + 3);
    fStack_74 = param_3[5];
    uStack_70 = *(undefined8 *)(param_3 + 6);
    fStack_68 = param_3[8];
    fStack_5c = param_3[0xb];
    uStack_118._0_4_ = (float)uVar12;
    fStack_88 = fVar17 * fVar15 + (float)uStack_118;
    uStack_118._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
    fStack_84 = fVar18 * fVar15 + uStack_118._4_4_;
    fStack_80 = fVar14 * fVar15 + fStack_110;
    uStack_64 = *(undefined8 *)(param_3 + 9);
    uStack_118 = uVar12;
    puVar13 = (undefined4 *)FUN_1808d2080(auStack_108,&uStack_c8,&fStack_88);
  }
  uVar1 = puVar13[1];
  uVar2 = puVar13[2];
  uVar3 = puVar13[3];
  uVar4 = puVar13[4];
  uVar5 = puVar13[5];
  uVar6 = puVar13[6];
  uVar7 = puVar13[7];
  uVar8 = puVar13[8];
  uVar9 = puVar13[9];
  uVar10 = puVar13[10];
  uVar11 = puVar13[0xb];
  *param_2 = *puVar13;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  param_2[8] = uVar8;
  param_2[9] = uVar9;
  param_2[10] = uVar10;
  param_2[0xb] = uVar11;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_148);
}






// 函数: void FUN_1808d290e(undefined8 param_1,float param_2,float param_3,undefined8 param_4,
void FUN_1808d290e(undefined8 param_1,float param_2,float param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  float fVar14;
  float fVar15;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar16;
  float fVar17;
  float fStackX_20;
  
  fVar14 = *(float *)(unaff_RSI + 8) - *(float *)(unaff_RBX + 0x38);
  fVar16 = *(float *)(unaff_RSI + 8) - *(float *)(unaff_RBX + 8);
  fVar17 = SQRT(param_3 + param_2 * param_2 + fVar14 * fVar14);
  fVar14 = SQRT(in_XMM5_Da * in_XMM5_Da + in_XMM4_Da * in_XMM4_Da + fVar16 * fVar16);
  if (0.0 < fVar14) {
    fVar14 = 1.0 / fVar14;
    fVar15 = fVar14 * in_XMM5_Da;
    fStackX_20 = fVar14 * in_XMM4_Da;
    fVar14 = fVar14 * fVar16;
  }
  else {
    fVar15 = (float)((ulonglong)*(undefined8 *)(unaff_RBX + 0x18) >> 0x20);
    fVar14 = *(float *)(unaff_RBX + 0x20);
    fStackX_20 = (float)*(undefined8 *)(unaff_RBX + 0x18);
  }
  uVar2 = *(undefined4 *)(unaff_RSI + 0x14);
  *(undefined8 *)(unaff_RBP + -0x34) = *(undefined8 *)(unaff_RSI + 0xc);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x18);
  *(undefined4 *)(unaff_RBP + -0x2c) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x20) = *(undefined4 *)(unaff_RSI + 0x20);
  *(undefined4 *)(unaff_RBP + -0x14) = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined8 *)(unaff_RBP + -0x28) = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x24);
  *(float *)(unaff_RBP + -0x40) = fStackX_20 * fVar17 + (float)param_6;
  *(float *)(unaff_RBP + -0x3c) = fVar15 * fVar17 + param_6._4_4_;
  *(undefined8 *)(unaff_RBP + -0x1c) = uVar1;
  *(float *)(unaff_RBP + -0x38) = fVar14 * fVar17 + param_7;
  puVar13 = (undefined4 *)FUN_1808d2080(&stack0x00000040,unaff_RBP + -0x80,unaff_RBP + -0x40);
  uVar2 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  uVar5 = puVar13[4];
  uVar6 = puVar13[5];
  uVar7 = puVar13[6];
  uVar8 = puVar13[7];
  uVar9 = puVar13[8];
  uVar10 = puVar13[9];
  uVar11 = puVar13[10];
  uVar12 = puVar13[0xb];
  *unaff_RDI = *puVar13;
  unaff_RDI[1] = uVar2;
  unaff_RDI[2] = uVar3;
  unaff_RDI[3] = uVar4;
  unaff_RDI[4] = uVar5;
  unaff_RDI[5] = uVar6;
  unaff_RDI[6] = uVar7;
  unaff_RDI[7] = uVar8;
  unaff_RDI[8] = uVar9;
  unaff_RDI[9] = uVar10;
  unaff_RDI[10] = uVar11;
  unaff_RDI[0xb] = uVar12;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808d2a39(void)
void FUN_1808d2a39(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  
  puVar12 = (undefined4 *)FUN_1808d2080(&stack0x00000040,unaff_RBP + -0x80);
  uVar1 = puVar12[1];
  uVar2 = puVar12[2];
  uVar3 = puVar12[3];
  uVar4 = puVar12[4];
  uVar5 = puVar12[5];
  uVar6 = puVar12[6];
  uVar7 = puVar12[7];
  uVar8 = puVar12[8];
  uVar9 = puVar12[9];
  uVar10 = puVar12[10];
  uVar11 = puVar12[0xb];
  *unaff_RDI = *puVar12;
  unaff_RDI[1] = uVar1;
  unaff_RDI[2] = uVar2;
  unaff_RDI[3] = uVar3;
  unaff_RDI[4] = uVar4;
  unaff_RDI[5] = uVar5;
  unaff_RDI[6] = uVar6;
  unaff_RDI[7] = uVar7;
  unaff_RDI[8] = uVar8;
  unaff_RDI[9] = uVar9;
  unaff_RDI[10] = uVar10;
  unaff_RDI[0xb] = uVar11;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d2a80(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)
void FUN_1808d2a80(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_60 = 0;
  uStack_b8 = 0;
  uStack_68 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uVar12 = FUN_1808d1fa0(auStack_a8,param_1,param_4);
  FUN_1808d2680(&uStack_68,uVar12);
  puVar13 = (undefined4 *)FUN_1808d2080(auStack_a8,&uStack_68,param_3);
  uVar1 = puVar13[1];
  uVar2 = puVar13[2];
  uVar3 = puVar13[3];
  uVar4 = puVar13[4];
  uVar5 = puVar13[5];
  uVar6 = puVar13[6];
  uVar7 = puVar13[7];
  uVar8 = puVar13[8];
  uVar9 = puVar13[9];
  uVar10 = puVar13[10];
  uVar11 = puVar13[0xb];
  *param_2 = *puVar13;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  param_2[8] = uVar8;
  param_2[9] = uVar9;
  param_2[10] = uVar10;
  param_2[0xb] = uVar11;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d2b50(undefined8 param_1,undefined8 *param_2,float *param_3,undefined1 param_4)
void FUN_1808d2b50(undefined8 param_1,undefined8 *param_2,float *param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  float fStack_c0;
  undefined1 auStack_b8 [64];
  undefined8 uStack_78;
  float fStack_70;
  undefined8 uStack_6c;
  float fStack_64;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 uStack_54;
  float fStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  uStack_78 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_54 = 0;
  uStack_48 = 0;
  fStack_70 = 0.0;
  fStack_64 = 0.0;
  fStack_58 = 0.0;
  fStack_4c = 0.0;
  uStack_40 = 0;
  uVar4 = FUN_1808d1fa0(auStack_b8,param_1,param_4);
  FUN_1808d2680(&uStack_78,uVar4);
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fStack_c0 = fVar2 * fStack_70 + fVar1 * fStack_64 + fVar3 * fStack_58 + fStack_4c;
  *param_2 = CONCAT44(fVar2 * uStack_78._4_4_ + fVar1 * uStack_6c._4_4_ + fVar3 * uStack_60._4_4_ +
                      uStack_54._4_4_,
                      fVar2 * (float)uStack_78 + fVar1 * (float)uStack_6c + fVar3 * (float)uStack_60
                      + (float)uStack_54);
  *(float *)(param_2 + 1) = fStack_c0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



undefined8 * FUN_1808d2d20(undefined8 *param_1,undefined8 param_2)

{
  FUN_1808d2f20();
  *param_1 = &UNK_1809884c0;
  param_1[3] = &UNK_1809884f8;
  param_1[6] = &UNK_180988500;
  param_1[9] = &UNK_180988530;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



undefined8 * FUN_1808d2dd0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1808d2f20();
  *param_1 = &UNK_180988620;
  param_1[3] = &UNK_180988658;
  param_1[6] = &UNK_180988660;
  param_1[9] = &UNK_180988690;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



undefined8 *
FUN_1808d2e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1808d2f20();
  *param_1 = &UNK_1809886d0;
  param_1[3] = &UNK_180988708;
  param_1[6] = &UNK_180988710;
  param_1[9] = &UNK_180988740;
  param_1[0x13] = param_7;
  param_1[0x14] = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = param_4 + 0x4f0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d2f20(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
void FUN_1808d2f20(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  puVar1 = param_1 + 1;
  *puVar1 = puVar1;
  piVar2 = (int *)(param_3 + 0x30);
  param_1[2] = puVar1;
  puVar1 = param_1 + 4;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  puVar1 = param_1 + 7;
  *puVar1 = puVar1;
  param_1[8] = puVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &UNK_180988388;
  param_1[3] = &UNK_1809883c0;
  param_1[6] = &UNK_1809883c8;
  param_1[9] = &UNK_1809883f8;
  param_1[0x10] = param_5;
  param_1[0x11] = param_6;
  param_1[0xd] = 4;
  param_1[0xe] = 0;
  param_1[0xf] = param_4;
  param_1[0x12] = 0;
  if ((((*piVar2 == 0) && (*(int *)(param_3 + 0x34) == 0)) && (*(int *)(param_3 + 0x38) == 0)) &&
     (*(int *)(param_3 + 0x3c) == 0)) {
    param_1[0x12] = 0;
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(param_4 + 0x4b8) + 0x260))
                      (*(longlong **)(param_4 + 0x4b8),piVar2,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(piVar2,auStack_48);
    }
    param_1[0x12] = lVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_1808d2ff5(longlong *param_1)
void FUN_1808d2ff5(longlong *param_1)

{
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong in_stack_00000048;
  
  lVar1 = (**(code **)(*param_1 + 0x260))();
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240();
  }
  *(longlong *)(unaff_RBX + 0x90) = lVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808d3024(void)
void FUN_1808d3024(void)

{
  ulonglong in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



undefined8 * FUN_1808d3040(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  FUN_1808d2f20();
  *param_1 = &UNK_180988570;
  param_1[3] = &UNK_1809885a8;
  param_1[6] = &UNK_1809885b0;
  param_1[9] = &UNK_1809885e0;
  param_1[0x13] = param_2;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(uint *)((longlong)param_1 + 0xb4) = (uint)(*(int *)(param_3 + 0x40) == 6);
  param_1[0x14] = param_4 + 0x4f0;
  return param_1;
}






// 函数: void FUN_1808d30f0(undefined8 *param_1)
void FUN_1808d30f0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180988388;
  param_1[3] = &UNK_1809883c0;
  param_1[6] = &UNK_1809883c8;
  param_1[9] = &UNK_1809883f8;
  FUN_1808b1a30();
  plVar1 = param_1 + 7;
  param_1[6] = &UNK_180988358;
  *(longlong *)param_1[8] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[8];
  param_1[8] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[8] = plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[8];
  param_1[8] = plVar1;
  *plVar1 = (longlong)plVar1;
  plVar1 = param_1 + 4;
  *(longlong *)param_1[5] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[5] = plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  plVar1 = param_1 + 1;
  *(longlong *)param_1[2] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[2] = plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  return;
}



undefined8 FUN_1808d3260(undefined8 param_1,ulonglong param_2)

{
  FUN_1808d30f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0);
  }
  return param_1;
}



longlong FUN_1808d32a0(longlong param_1,ulonglong param_2)

{
  FUN_180744d60(param_1 + 0x98);
  FUN_1808d30f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,200);
  }
  return param_1;
}



undefined8 FUN_1808d32f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1808d30f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}



undefined8 FUN_1808d3330(undefined8 param_1,ulonglong param_2)

{
  FUN_1808d30f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



undefined8 * FUN_1808d3370(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 1;
  *param_1 = &UNK_180988358;
  *(longlong *)param_1[2] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[2] = plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



undefined8 FUN_1808d33e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1808d30f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}



undefined8 FUN_1808d3420(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x48) + 0x30))(param_1 + 0x48);
  if (*(longlong *)(lVar3 + 0x18) == 0) {
    puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x7a8);
  }
  else {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0x48) + 0x30))(param_1 + 0x48);
    puVar11 = (ulonglong *)(*(longlong *)(lVar3 + 0x18) + 0x4b0);
  }
  plVar10 = (longlong *)*puVar11;
LAB_1808d347a:
  while( true ) {
    if ((plVar10 < (longlong *)*puVar11) || ((longlong *)*puVar11 + (int)puVar11[1] <= plVar10)) {
      return 0;
    }
    puVar2 = (undefined8 *)*plVar10;
    lVar3 = (**(code **)*puVar2)(puVar2);
    if (*(short *)(lVar3 + 0xc) != 7) break;
    lVar3 = (**(code **)*puVar2)(puVar2);
    iVar7 = 0;
    if (*(int *)(lVar3 + 0x60) < 1) break;
    do {
      if ((*(longlong *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar7 * 0x10) ==
           *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x58) + 8 + (longlong)iVar7 * 0x10) ==
          *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18))) {
        plVar1 = (longlong *)(param_1 + 0x98);
        lVar3 = 0;
        if (*(int *)(param_1 + 0xa0) < 1) goto LAB_1808d3538;
        puVar4 = (undefined8 *)*plVar1;
        goto LAB_1808d3527;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(lVar3 + 0x60));
    plVar10 = plVar10 + 1;
  }
  goto LAB_1808d359b;
  while( true ) {
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 1;
    if (*(int *)(param_1 + 0xa0) <= lVar3) break;
LAB_1808d3527:
    if ((undefined8 *)*puVar4 == puVar2) goto LAB_1808d359b;
  }
LAB_1808d3538:
  FUN_1808b5e30(puVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  uVar8 = (int)*(uint *)(param_1 + 0xa4) >> 0x1f;
  iVar6 = *(int *)(param_1 + 0xa0) + 1;
  iVar7 = (*(uint *)(param_1 + 0xa4) ^ uVar8) - uVar8;
  if (iVar7 < iVar6) {
    iVar9 = (int)((float)iVar7 * 1.5);
    iVar7 = iVar6;
    if (iVar6 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar7 < 8) {
      iVar9 = 8;
    }
    else if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    uVar5 = FUN_180747f10(plVar1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  *(undefined8 **)(*plVar1 + (longlong)*(int *)(param_1 + 0xa0) * 8) = puVar2;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_1808d359b:
  plVar10 = plVar10 + 1;
  goto LAB_1808d347a;
}



float FUN_1808d35c0(longlong param_1,float param_2,int *param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *param_3 = *(int *)(param_1 + 0xd8);
  *param_4 = *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0xd4);
  *param_5 = fVar3;
  iVar1 = *param_3;
  param_2 = param_2 - *param_4;
  if (iVar1 == 0) {
    if (param_2 < fVar3) {
      fVar3 = (float)func_0x0001808dbac0(*(undefined8 *)(param_1 + 0x98),0,param_2 / fVar3);
      return (*(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa0)) * fVar3 +
             *(float *)(param_1 + 0xa0);
    }
    fVar2 = *(float *)(param_1 + 0xb4);
    param_2 = param_2 - fVar3;
    *param_3 = 1;
    *param_4 = *param_4 + *param_5;
    *param_5 = fVar2;
LAB_1808d3688:
    if (param_2 < fVar2) {
      return *(float *)(param_1 + 0xa4);
    }
    fVar3 = *(float *)(param_1 + 0xb8);
    param_2 = param_2 - fVar2;
    *param_3 = 2;
    *param_4 = *param_4 + *param_5;
    *param_5 = fVar3;
  }
  else {
    fVar2 = fVar3;
    if (iVar1 == 1) goto LAB_1808d3688;
    if (iVar1 != 2) {
      if (iVar1 == 5) {
        return *(float *)(param_1 + 0xac);
      }
      goto LAB_1808d371d;
    }
  }
  if (param_2 < fVar3) {
    fVar3 = (float)func_0x0001808dbac0(*(undefined8 *)(param_1 + 0x98),1,param_2 / fVar3);
    return (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa4)) * fVar3 +
           *(float *)(param_1 + 0xa4);
  }
  *param_3 = 3;
  *param_4 = *param_4 + *param_5;
  *param_5 = 0.0;
LAB_1808d371d:
  return *(float *)(param_1 + 0xa8);
}



undefined8 FUN_1808d3730(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar6 = 0;
    plVar3 = (longlong *)*plVar1;
    do {
      if (*plVar3 == param_2) {
        return 0;
      }
      lVar6 = lVar6 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xa0));
  }
  FUN_1808b5e30(param_2,1);
  uVar7 = (int)*(uint *)(param_1 + 0xa4) >> 0x1f;
  iVar5 = *(int *)(param_1 + 0xa0) + 1;
  iVar2 = (*(uint *)(param_1 + 0xa4) ^ uVar7) - uVar7;
  if (iVar2 < iVar5) {
    iVar8 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar8) {
      iVar2 = iVar8;
    }
    if (iVar2 < 8) {
      iVar8 = 8;
    }
    else if (iVar8 < iVar5) {
      iVar8 = iVar5;
    }
    uVar4 = FUN_180747f10(plVar1,iVar8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  *(longlong *)(*plVar1 + (longlong)*(int *)(param_1 + 0xa0) * 8) = param_2;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return 0;
}



undefined8 FUN_1808d37f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar2 = 0;
  if (0 < iVar1) {
    plVar4 = *(longlong **)(param_1 + 0x98);
    do {
      if (*plVar4 == param_2) {
        if ((-1 < iVar2) && (iVar2 < iVar1)) {
          iVar3 = (iVar1 - iVar2) + -1;
          if (0 < iVar3) {
            plVar4 = *(longlong **)(param_1 + 0x98) + iVar2;
                    // WARNING: Subroutine does not return
            memmove(plVar4,plVar4 + 1,(longlong)iVar3 << 3);
          }
          *(int *)(param_1 + 0xa0) = iVar1 + -1;
          return 0;
        }
        return 0x1c;
      }
      iVar2 = iVar2 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}



undefined8 FUN_1808d38d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + -8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
  }
  while( true ) {
    if (plVar1 == (longlong *)(param_1 + 0x20)) {
      return 1;
    }
    plVar3 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    cVar2 = (**(code **)(*plVar3 + 0x20))();
    if (cVar2 == '\0') break;
    if (plVar1 == (longlong *)(param_1 + 0x20)) {
      return 1;
    }
    plVar3 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar1 = plVar3 + 1;
    }
  }
  return 0;
}



undefined8 FUN_1808d3990(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + -8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
  }
  while( true ) {
    if (plVar1 == (longlong *)(param_1 + 0x20)) {
      return 0;
    }
    plVar3 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    cVar2 = (**(code **)(*plVar3 + 0x18))();
    if (cVar2 != '\0') break;
    if (plVar1 == (longlong *)(param_1 + 0x20)) {
      return 0;
    }
    plVar3 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar1 = plVar3 + 1;
    }
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d3a30(longlong *param_1,undefined8 *param_2)
void FUN_1808d3a30(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x13];
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x10;
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0x290))((longlong *)*param_2,lVar1,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1,auStack_48);
    }
  }
  param_1[0x13] = lVar4;
  iVar3 = FUN_1808b2950(param_1 + 9,param_2);
  if (iVar3 != 0) goto LAB_1808d3bd8;
  uVar5 = (**(code **)param_1[6])(param_1 + 6);
  cVar2 = func_0x0001808d2c80(param_2,uVar5);
  if (cVar2 != '\0') {
    param_1[0x12] = *(longlong *)(param_1[0xe] + 0x30);
  }
  cVar2 = func_0x0001808d2c80(param_2,lVar4);
  if (cVar2 == '\0') goto LAB_1808d3bd8;
  if (*(int *)(param_1[0x13] + 0x44) == 0) {
    iVar3 = FUN_1808b2f30(param_1 + 9,0xe);
    if (((iVar3 != 0) || (iVar3 = FUN_1808b2f30(param_1 + 9,0xf), iVar3 != 0)) ||
       (iVar3 = FUN_1808b2f30(param_1 + 9,0x10), iVar3 != 0)) goto LAB_1808d3bd8;
    iVar3 = FUN_1808b2f30(param_1 + 9,0x11);
joined_r0x0001808d3b85:
    if (iVar3 != 0) goto LAB_1808d3bd8;
  }
  else if (*(int *)(param_1[0x13] + 0x44) == 1) {
    iVar3 = FUN_1808b2f30(param_1 + 9,0x12);
    if (((iVar3 != 0) || (iVar3 = FUN_1808b2f30(param_1 + 9,0x13), iVar3 != 0)) ||
       (iVar3 = FUN_1808b2f30(param_1 + 9,0x14), iVar3 != 0)) goto LAB_1808d3bd8;
    iVar3 = FUN_1808b2f30(param_1 + 9,0x15);
    goto joined_r0x0001808d3b85;
  }
  iVar3 = FUN_1808b2f30(param_1 + 9,0x17);
  if (((iVar3 == 0) && (iVar3 = FUN_1808b2f30(param_1 + 9,0x18), iVar3 == 0)) &&
     ((iVar3 = FUN_1808b2f30(param_1 + 9,0x19), iVar3 == 0 &&
      (iVar3 = FUN_1808b2f30(param_1 + 9,0x1a), iVar3 == 0)))) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
LAB_1808d3bd8:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d3c10(longlong *param_1,undefined8 *param_2)
void FUN_1808d3c10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x15];
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x10;
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0x290))((longlong *)*param_2,lVar1,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1,auStack_48);
    }
  }
  param_1[0x15] = lVar4;
  iVar3 = FUN_1808b2950(param_1 + 9,param_2);
  if (iVar3 == 0) {
    uVar5 = (**(code **)param_1[6])(param_1 + 6);
    cVar2 = func_0x0001808d2c80(param_2,uVar5);
    if (cVar2 != '\0') {
      param_1[0x12] = *(longlong *)(param_1[0xe] + 0x30);
    }
    cVar2 = func_0x0001808d2c80(param_2,lVar4);
    if (cVar2 != '\0') {
      FUN_180744d60(param_1 + 0x13);
      FUN_1808d3420(param_1);
      iVar3 = *(int *)(param_1[0x15] + 0x44);
      if (((iVar3 != 0) && (iVar3 != 1)) ||
         (iVar3 = FUN_1808b2f30(param_1 + 9,iVar3 + 0xc), iVar3 == 0)) {
        (**(code **)(*param_1 + 0x30))(param_1);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




