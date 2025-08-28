#include "TaleWorlds.Native.Split.h"

// 99_part_10_part033.c - 12 个函数

// 函数: void FUN_1806b9030(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
void FUN_1806b9030(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int8_t auStack_118 [32];
  int8_t auStack_f8 [32];
  int8_t auStack_d8 [184];
  
  fVar4 = (float)(**(code **)(*param_1 + 0xf0))();
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_4 = fVar4 * *param_2;
  param_4[1] = fVar4 * fVar1;
  param_4[2] = fVar4 * fVar2;
  (**(code **)(*param_1 + 0x90))(param_1,auStack_f8);
  (**(code **)(*param_1 + 0xd8))(param_1,auStack_118);
  pfVar3 = (float *)FUN_1800fcb90(auStack_f8,auStack_d8,auStack_118);
  fVar1 = pfVar3[2];
  fVar2 = pfVar3[1];
  fVar4 = pfVar3[3];
  fVar7 = *pfVar3;
  fVar5 = fVar2 + fVar2;
  fVar9 = fVar7 + fVar7;
  fVar8 = fVar4 * (fVar1 + fVar1);
  fVar12 = fVar1 * fVar9 - fVar4 * fVar5;
  fVar6 = fVar1 * (fVar1 + fVar1);
  fVar14 = 1.0 - fVar7 * fVar9;
  fVar11 = fVar4 * fVar5 + fVar1 * fVar9;
  fVar16 = fVar8 + fVar2 * fVar9;
  fVar8 = fVar2 * fVar9 - fVar8;
  fVar10 = fVar14 - fVar6;
  fVar6 = (1.0 - fVar2 * fVar5) - fVar6;
  fVar13 = fVar1 * fVar5 + fVar4 * fVar9;
  fVar18 = fVar1 * fVar5 - fVar4 * fVar9;
  fVar14 = fVar14 - fVar2 * fVar5;
  (**(code **)(*param_1 + 0x108))(param_1,&fStack_128);
  fVar7 = fVar11 * fStack_120;
  fVar9 = fVar6 * fStack_128;
  fVar19 = fVar8 * fStack_124;
  fVar5 = fVar16 * fVar9 + fVar10 * fVar19 + fVar18 * fVar7;
  fVar1 = param_3[2];
  fVar17 = fVar9 * fVar12 + fVar19 * fVar13 + fVar14 * fVar7;
  fVar15 = fVar10 * fStack_124 * fVar13 + fVar16 * fStack_128 * fVar12 +
           fVar14 * fVar18 * fStack_120;
  fVar2 = param_3[1];
  fVar4 = *param_3;
  param_5[2] = (fVar13 * fStack_124 * fVar13 + fVar12 * fStack_128 * fVar12 +
               fVar14 * fStack_120 * fVar14) * fVar1 + fVar15 * fVar2 + fVar17 * fVar4;
  param_5[1] = fVar15 * fVar1 +
               (fVar10 * fVar10 * fStack_124 + fVar16 * fVar16 * fStack_128 +
               fVar18 * fVar18 * fStack_120) * fVar2 + fVar5 * fVar4;
  *param_5 = fVar1 * fVar17 +
             fVar5 * fVar2 + (fVar8 * fVar19 + fVar6 * fVar9 + fVar7 * fVar11) * fVar4;
  return;
}






// 函数: void FUN_1806b9440(longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
void FUN_1806b9440(longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int8_t auStack_f0 [12];
  int8_t auStack_e4 [196];
  
  lVar5 = (**(code **)(*param_1 + 0xd8))(param_1,auStack_e4);
  fVar18 = param_2[3];
  fVar22 = param_2[1];
  fVar25 = *param_2;
  fVar1 = param_2[2];
  fVar27 = *(float *)(lVar5 + 0x10) + *(float *)(lVar5 + 0x10);
  fVar19 = *(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 0x14);
  fVar26 = *(float *)(lVar5 + 0x18) + *(float *)(lVar5 + 0x18);
  fVar23 = fVar18 * fVar18 - 0.5;
  fVar13 = fVar25 * fVar27 + fVar22 * fVar19 + fVar1 * fVar26;
  fVar2 = param_2[4];
  fVar17 = param_2[6];
  fVar3 = param_2[5];
  fVar7 = (float)(**(code **)(*param_1 + 0xf0))(param_1);
  fVar7 = fVar7 * param_5;
  pfVar6 = (float *)(**(code **)(*param_1 + 0x108))(param_1,auStack_f0);
  fVar21 = *param_2;
  fVar4 = param_2[3];
  fVar8 = param_6 * pfVar6[2];
  fVar10 = param_6 * pfVar6[1];
  fVar20 = fVar21 + fVar21;
  param_6 = param_6 * *pfVar6;
  fVar12 = param_2[1];
  fVar29 = fVar12 + fVar12;
  fVar15 = param_2[2];
  fVar14 = (fVar15 + fVar15) * fVar4;
  fVar16 = (fVar15 + fVar15) * fVar15;
  fVar34 = 1.0 - fVar21 * fVar20;
  fVar28 = fVar14 + fVar20 * fVar12;
  fVar14 = fVar20 * fVar12 - fVar14;
  fVar31 = fVar29 * fVar15 - fVar20 * fVar4;
  fVar24 = fVar29 * fVar15 + fVar20 * fVar4;
  fVar11 = (1.0 - fVar29 * fVar12) - fVar16;
  fVar16 = fVar34 - fVar16;
  fVar33 = fVar20 * fVar15 - fVar29 * fVar4;
  fVar9 = fVar14 * fVar10;
  fVar30 = fVar29 * fVar4 + fVar20 * fVar15;
  fVar34 = fVar34 - fVar29 * fVar12;
  fVar15 = fVar11 * param_6;
  fVar12 = fVar30 * fVar8;
  fVar20 = fVar15 * fVar28 + fVar16 * fVar9 + fVar12 * fVar31;
  fVar21 = *param_4;
  fVar29 = fVar9 * fVar24 + fVar15 * fVar33 + fVar34 * fVar12;
  fVar4 = param_4[1];
  fVar32 = fVar16 * fVar10 * fVar24 + fVar28 * param_6 * fVar33 + fVar34 * fVar31 * fVar8;
  param_7[2] = fVar7 * param_4[2];
  *param_7 = fVar7 * fVar21;
  param_7[1] = fVar7 * fVar4;
  fVar21 = param_3[2] -
           ((fVar25 * fVar19 - fVar22 * fVar27) * fVar18 + fVar23 * fVar26 + fVar1 * fVar13 + fVar17
           );
  fVar17 = param_3[1] -
           ((fVar1 * fVar27 - fVar25 * fVar26) * fVar18 + fVar23 * fVar19 + fVar22 * fVar13 + fVar3)
  ;
  fVar18 = *param_3 -
           ((fVar22 * fVar26 - fVar1 * fVar19) * fVar18 + fVar23 * fVar27 + fVar25 * fVar13 + fVar2)
  ;
  fVar25 = fVar17 * param_4[2] - fVar21 * param_4[1];
  fVar22 = fVar21 * *param_4 - fVar18 * param_4[2];
  fVar18 = fVar18 * param_4[1] - fVar17 * *param_4;
  param_8[1] = fVar32 * fVar18 +
               (fVar28 * param_6 * fVar28 + fVar16 * fVar16 * fVar10 + fVar31 * fVar8 * fVar31) *
               fVar22 + fVar20 * fVar25;
  param_8[2] = (fVar10 * fVar24 * fVar24 + param_6 * fVar33 * fVar33 + fVar34 * fVar8 * fVar34) *
               fVar18 + fVar32 * fVar22 + fVar29 * fVar25;
  *param_8 = fVar29 * fVar18 +
             fVar20 * fVar22 + (fVar9 * fVar14 + fVar15 * fVar11 + fVar12 * fVar30) * fVar25;
  return;
}






// 函数: void FUN_1806b9970(longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
void FUN_1806b9970(longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_c8 [192];
  
  lVar7 = (**(code **)(*param_1 + 0xd8))(param_1,auStack_c8);
  fVar1 = param_2[3];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar11 = *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x10);
  fVar8 = param_2[2];
  fVar9 = *(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x18);
  fVar14 = *(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x14);
  fVar4 = param_2[4];
  fVar10 = param_2[5];
  fVar5 = param_2[6];
  fVar15 = fVar1 * fVar1 - 0.5;
  fVar13 = fVar3 * fVar11 + fVar2 * fVar14 + fVar8 * fVar9;
  fVar12 = param_4[2];
  fVar6 = *param_4;
  param_7[1] = param_5 * param_4[1];
  param_7[2] = param_5 * fVar12;
  *param_7 = param_5 * fVar6;
  fVar12 = *param_3 -
           ((fVar2 * fVar9 - fVar8 * fVar14) * fVar1 + fVar15 * fVar11 + fVar3 * fVar13 + fVar4);
  fVar10 = param_3[1] -
           ((fVar8 * fVar11 - fVar3 * fVar9) * fVar1 + fVar15 * fVar14 + fVar2 * fVar13 + fVar10);
  fVar4 = *param_4;
  fVar8 = param_3[2] -
          ((fVar3 * fVar14 - fVar2 * fVar11) * fVar1 + fVar15 * fVar9 + fVar8 * fVar13 + fVar5);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  *param_8 = (fVar10 * param_4[2] - fVar8 * param_4[1]) * param_6;
  param_8[2] = (fVar12 * fVar2 - fVar10 * fVar4) * param_6;
  param_8[1] = (fVar8 * fVar1 - fVar12 * fVar3) * param_6;
  return;
}






// 函数: void FUN_1806b9cb0(float *param_1,float *param_2)
void FUN_1806b9cb0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    fVar1 = param_1[0xb];
    fVar7 = fVar1 + param_2[2];
    fVar2 = param_1[10];
    fVar8 = -fVar2;
    fVar3 = param_1[9];
    fVar6 = fVar3 + *param_2;
    fVar5 = fVar2 + param_2[1];
    fVar9 = -fVar3;
    fVar10 = -fVar1;
    if (((fVar6 == 0.0) && (fVar5 == 0.0)) && (fVar7 == 0.0)) {
      fVar5 = param_1[0xc];
      *param_1 = (fVar1 * fVar10 + fVar8 * fVar2) * fVar5 + *param_1;
      param_1[1] = fVar9 * fVar8 * fVar5 + param_1[1];
      param_1[2] = fVar3 * fVar1 * fVar5 + param_1[2];
      param_1[3] = fVar2 * fVar3 * fVar5 + param_1[3];
      param_1[4] = (fVar1 * fVar10 + fVar3 * fVar9) * fVar5 + param_1[4];
      param_1[5] = fVar8 * fVar10 * fVar5 + param_1[5];
      param_1[7] = fVar1 * fVar2 * fVar5 + param_1[7];
      param_1[6] = fVar10 * fVar9 * fVar5 + param_1[6];
      param_1[8] = (fVar8 * fVar2 + fVar3 * fVar9) * fVar5 + param_1[8];
    }
    else {
      fVar4 = param_1[0xc];
      *param_1 = fVar4 * ((fVar2 * fVar8 + fVar1 * fVar10) - (-(fVar7 * fVar7) + -(fVar5 * fVar5)))
                 + *param_1;
      param_1[1] = fVar4 * (fVar8 * fVar9 - fVar5 * fVar6) + param_1[1];
      param_1[2] = (fVar3 * fVar1 - fVar7 * fVar6) * fVar4 + param_1[2];
      param_1[3] = fVar4 * (fVar2 * fVar3 - fVar5 * fVar6) + param_1[3];
      param_1[4] = fVar4 * ((fVar3 * fVar9 + fVar1 * fVar10) - (-(fVar6 * fVar6) + -(fVar7 * fVar7))
                           ) + param_1[4];
      param_1[5] = (fVar10 * fVar8 - fVar5 * fVar7) * fVar4 + param_1[5];
      param_1[6] = fVar4 * (fVar9 * fVar10 - fVar6 * fVar7) + param_1[6];
      param_1[7] = fVar4 * (fVar1 * fVar2 - fVar7 * fVar5) + param_1[7];
      param_1[8] = ((fVar2 * fVar8 + fVar3 * fVar9) - (-(fVar6 * fVar6) + -(fVar5 * fVar5))) * fVar4
                   + param_1[8];
    }
    param_1[9] = param_1[9] + *param_2;
    param_1[10] = param_2[1] + param_1[10];
    param_1[0xb] = param_2[2] + param_1[0xb];
  }
  return;
}






// 函数: void FUN_1806b9ce8(float *param_1,float param_2,uint64_t param_3,float param_4)
void FUN_1806b9ce8(float *param_1,float param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_RDX;
  float in_XMM0_Da;
  float fVar4;
  float in_XMM4_Da;
  uint in_XMM5_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_1[10];
  fVar6 = (float)((uint)fVar1 ^ in_XMM5_Da);
  fVar2 = param_1[9];
  param_2 = fVar2 + param_2;
  fVar4 = fVar1 + in_RDX[1];
  fVar7 = (float)((uint)fVar2 ^ in_XMM5_Da);
  fVar10 = (float)((uint)param_4 ^ in_XMM5_Da);
  if (((param_2 == in_XMM0_Da) && (fVar4 == in_XMM0_Da)) && (in_XMM4_Da == in_XMM0_Da)) {
    fVar4 = param_1[0xc];
    *param_1 = (param_4 * fVar10 + fVar6 * fVar1) * fVar4 + *param_1;
    param_1[1] = fVar7 * fVar6 * fVar4 + param_1[1];
    param_1[2] = fVar2 * param_4 * fVar4 + param_1[2];
    param_1[3] = fVar1 * fVar2 * fVar4 + param_1[3];
    param_1[4] = (param_4 * fVar10 + fVar2 * fVar7) * fVar4 + param_1[4];
    param_1[5] = fVar6 * fVar10 * fVar4 + param_1[5];
    param_1[7] = param_4 * fVar1 * fVar4 + param_1[7];
    param_1[6] = fVar10 * fVar7 * fVar4 + param_1[6];
    param_1[8] = (fVar6 * fVar1 + fVar2 * fVar7) * fVar4 + param_1[8];
  }
  else {
    fVar5 = (float)((uint)(in_XMM4_Da * in_XMM4_Da) ^ in_XMM5_Da);
    fVar8 = (float)((uint)(fVar4 * fVar4) ^ in_XMM5_Da);
    fVar9 = (float)((uint)(param_2 * param_2) ^ in_XMM5_Da);
    fVar3 = param_1[0xc];
    *param_1 = fVar3 * ((fVar1 * fVar6 + param_4 * fVar10) - (fVar5 + fVar8)) + *param_1;
    param_1[1] = fVar3 * (fVar6 * fVar7 - fVar4 * param_2) + param_1[1];
    param_1[2] = (fVar2 * param_4 - in_XMM4_Da * param_2) * fVar3 + param_1[2];
    param_1[3] = fVar3 * (fVar1 * fVar2 - fVar4 * param_2) + param_1[3];
    param_1[4] = fVar3 * ((fVar2 * fVar7 + param_4 * fVar10) - (fVar9 + fVar5)) + param_1[4];
    param_1[5] = (fVar10 * fVar6 - fVar4 * in_XMM4_Da) * fVar3 + param_1[5];
    param_1[6] = fVar3 * (fVar7 * fVar10 - param_2 * in_XMM4_Da) + param_1[6];
    param_1[7] = fVar3 * (param_4 * fVar1 - in_XMM4_Da * fVar4) + param_1[7];
    param_1[8] = ((fVar1 * fVar6 + fVar2 * fVar7) - (fVar9 + fVar8)) * fVar3 + param_1[8];
  }
  param_1[9] = param_1[9] + *in_RDX;
  param_1[10] = in_RDX[1] + param_1[10];
  param_1[0xb] = in_RDX[2] + param_1[0xb];
  return;
}






// 函数: void FUN_1806b9e82(float param_1,float param_2,float param_3,float param_4)
void FUN_1806b9e82(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float *in_RCX;
  float *in_RDX;
  float in_XMM4_Da;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar2;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fVar3;
  float fVar4;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float unaff_retaddr;
  float unaff_retaddr_00;
  float fStackX_8;
  float in_stack_000000c8;
  float in_stack_000000d0;
  float in_stack_000000d8;
  
  fVar2 = (float)((uint)(in_XMM4_Da * in_XMM4_Da) ^ in_XMM5_Da);
  fVar3 = (float)((uint)(param_2 * param_2) ^ in_XMM5_Da);
  fVar4 = (float)((uint)(param_3 * param_3) ^ in_XMM5_Da);
  fVar1 = in_RCX[0xc];
  *in_RCX = fVar1 * ((unaff_XMM8_Da * unaff_XMM9_Da + param_4 * unaff_XMM15_Da) - (fVar2 + fVar3)) +
            *in_RCX;
  in_RCX[1] = fVar1 * (unaff_XMM9_Da * in_stack_000000d0 - unaff_retaddr_00 * in_stack_000000c8) +
              in_RCX[1];
  in_RCX[2] = (unaff_XMM14_Da * in_stack_000000d8 - unaff_retaddr * in_stack_000000c8) * fVar1 +
              in_RCX[2];
  in_RCX[3] = fVar1 * (unaff_XMM6_Da * unaff_XMM14_Da - param_2 * param_3) + in_RCX[3];
  in_RCX[4] = fVar1 * ((unaff_XMM14_Da * unaff_XMM11_Da + param_4 * unaff_XMM15_Da) -
                      (fVar4 + fVar2)) + in_RCX[4];
  in_RCX[5] = (unaff_XMM15_Da * fStackX_8 - unaff_retaddr_00 * unaff_retaddr) * fVar1 + in_RCX[5];
  in_RCX[6] = fVar1 * (in_stack_000000d0 * unaff_XMM15_Da - param_1) + in_RCX[6];
  in_RCX[7] = fVar1 * (param_4 * unaff_XMM8_Da - unaff_retaddr * unaff_retaddr_00) + in_RCX[7];
  in_RCX[8] = ((unaff_XMM8_Da * unaff_XMM9_Da + unaff_XMM14_Da * unaff_XMM11_Da) - (fVar4 + fVar3))
              * fVar1 + in_RCX[8];
  in_RCX[9] = in_RCX[9] + *in_RDX;
  in_RCX[10] = in_RDX[1] + in_RCX[10];
  in_RCX[0xb] = in_RDX[2] + in_RCX[0xb];
  return;
}






// 函数: void FUN_1806ba05e(longlong param_1,float *param_2)
void FUN_1806ba05e(longlong param_1,float *param_2)

{
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *param_2;
  *(float *)(param_1 + 0x28) = param_2[1] + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x2c) = param_2[2] + *(float *)(param_1 + 0x2c);
  return;
}






// 函数: void FUN_1806ba0b3(void)
void FUN_1806ba0b3(void)

{
  return;
}






// 函数: void FUN_1806ba2a0(float *param_1,int param_2,float param_3,float param_4)
void FUN_1806ba2a0(float *param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3 * param_4 * param_3;
  fVar3 = param_3 * 3.1415927 * param_3;
  fVar2 = param_3 * param_3 * param_3 * 0.53333336;
  fVar4 = (fVar2 + fVar1) * fVar3;
  fVar1 = (param_4 * param_4 * param_3 * 1.3333334 + fVar1 * 1.5 + fVar2 +
          param_4 * param_4 * param_4 * 0.6666667) * fVar3;
  param_1[0xc] = param_3 * 4.1887903 * param_3 * param_3 + (param_4 + param_4) * fVar3;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (param_2 == 0) {
    *param_1 = fVar4;
    param_1[4] = fVar1;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
  }
  else {
    *param_1 = fVar1;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    if (param_2 != 1) {
      param_1[4] = fVar1;
      param_1[8] = fVar4;
      goto LAB_1806ba388;
    }
    param_1[4] = fVar4;
  }
  param_1[8] = fVar1;
LAB_1806ba388:
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  return;
}



float * FUN_1806ba780(float *param_1,int32_t *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStackX_8 [2];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e0;
  int8_t auStack_d8 [208];
  
  switch(*param_2) {
  case 0:
    fVar2 = (float)param_2[1];
    fVar2 = fVar2 * 4.1887903 * fVar2 * fVar2;
    param_1[0xc] = fVar2;
    fVar2 = fVar2 * 0.4 * (float)param_2[1] * (float)param_2[1];
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    *param_1 = fVar2;
    param_1[4] = fVar2;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[8] = fVar2;
    param_1[7] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    break;
  case 2:
    fVar2 = (float)param_2[1];
    fVar5 = (float)param_2[2];
    fVar4 = fVar5 * fVar2 * fVar2;
    fVar6 = fVar2 * fVar2 * fVar2 * 0.53333336;
    param_1[0xc] = (fVar2 * 4.1887903 + fVar5 * 6.2831855) * fVar2 * fVar2;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    *param_1 = (fVar4 + fVar6) * 3.1415927 * fVar2 * fVar2;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    fVar2 = (fVar5 * fVar5 * fVar2 * 1.3333334 + fVar4 * 1.5 + fVar6 +
            fVar5 * fVar5 * fVar5 * 0.6666667) * 3.1415927 * fVar2 * fVar2;
    param_1[4] = fVar2;
    param_1[8] = fVar2;
    param_1[7] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    break;
  case 3:
    fVar6 = (float)param_2[2] * (float)param_2[1] * (float)param_2[3] * 8.0;
    param_1[0xc] = fVar6;
    fVar2 = (float)param_2[3];
    fVar5 = (float)param_2[1];
    fVar4 = (float)param_2[2];
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    fVar5 = fVar5 * fVar5;
    fVar2 = fVar2 * fVar2;
    fVar4 = fVar4 * fVar4;
    *param_1 = (fVar2 + fVar4) * fVar6 * 0.33333334;
    param_1[3] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[4] = (fVar5 + fVar2) * fVar6 * 0.33333334;
    param_1[7] = 0.0;
    param_1[8] = (fVar5 + fVar4) * fVar6 * 0.33333334;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    break;
  case 4:
    (**(code **)(**(longlong **)(param_2 + 8) + 0x60))
              (*(longlong **)(param_2 + 8),afStackX_8,&fStack_100,&fStack_138);
    fStack_128 = fStack_100 - (fStack_134 * fStack_134 + fStack_130 * fStack_130) * afStackX_8[0];
    fStack_118 = fStack_f0 - (fStack_138 * fStack_138 + fStack_130 * fStack_130) * afStackX_8[0];
    fStack_108 = fStack_e0 - (fStack_138 * fStack_138 + fStack_134 * fStack_134) * afStackX_8[0];
    fStack_124 = fStack_138 * fStack_134 * afStackX_8[0] + fStack_fc;
    fStack_114 = fStack_130 * fStack_134 * afStackX_8[0] + fStack_ec;
    fStack_120 = fStack_138 * fStack_130 * afStackX_8[0] + fStack_f8;
    fStack_138 = fStack_138 * 2.0;
    param_1[0xc] = afStackX_8[0] * (float)param_2[1] * (float)param_2[2] * (float)param_2[3];
    fVar2 = (float)param_2[7];
    fVar5 = (float)param_2[5];
    fVar4 = (float)param_2[4];
    fVar6 = (float)param_2[6];
    fStack_134 = fStack_134 * 2.0;
    fStack_130 = fStack_130 * 2.0;
    fVar10 = fVar2 * fVar2 - 0.5;
    fVar3 = fVar4 * fStack_138 + fVar5 * fStack_134 + fVar6 * fStack_130;
    fVar9 = ((fVar10 * fStack_138 - (fVar5 * fStack_130 - fVar6 * fStack_134) * fVar2) +
            fVar4 * fVar3) * (float)param_2[1];
    fVar9 = fVar9 + fVar9;
    fVar8 = ((fVar10 * fStack_134 - (fVar6 * fStack_138 - fVar4 * fStack_130) * fVar2) +
            fVar5 * fVar3) * (float)param_2[2];
    fVar8 = fVar8 + fVar8;
    fVar7 = ((fVar10 * fStack_130 - (fVar4 * fStack_134 - fVar5 * fStack_138) * fVar2) +
            fVar6 * fVar3) * (float)param_2[3];
    fVar7 = fVar7 + fVar7;
    fVar3 = fVar4 * fVar9 + fVar5 * fVar8 + fVar6 * fVar7;
    param_1[9] = (fVar5 * fVar7 - fVar6 * fVar8) * fVar2 + fVar10 * fVar9 + fVar4 * fVar3;
    param_1[10] = (fVar6 * fVar9 - fVar4 * fVar7) * fVar2 + fVar10 * fVar8 + fVar5 * fVar3;
    param_1[0xb] = (fVar4 * fVar8 - fVar5 * fVar9) * fVar2 + fVar10 * fVar7 + fVar6 * fVar3;
    fStack_11c = fStack_124;
    fStack_110 = fStack_120;
    fStack_10c = fStack_114;
    pfVar1 = (float *)FUN_1806bd2c0(auStack_d8,&fStack_128);
    *param_1 = *pfVar1;
    param_1[1] = pfVar1[1];
    param_1[2] = pfVar1[2];
    param_1[3] = pfVar1[3];
    param_1[4] = pfVar1[4];
    param_1[5] = pfVar1[5];
    param_1[6] = pfVar1[6];
    param_1[7] = pfVar1[7];
    param_1[8] = pfVar1[8];
    break;
  case 0xffffffff:
  case 1:
  case 5:
  case 6:
  case 7:
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xc] = 1.0;
  }
  return param_1;
}






// 函数: void FUN_1806ba990(longlong *param_1)
void FUN_1806ba990(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t *puVar5;
  int32_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000078;
  
  (**(code **)(*param_1 + 0x60))(param_1,unaff_RBP + 0x60,&stack0x00000058);
  fVar1 = *(float *)(unaff_RBP + 0x60);
  in_stack_00000030 =
       fStack0000000000000058 -
       (fStackX_24 * fStackX_24 + in_stack_00000028 * in_stack_00000028) * fVar1;
  in_stack_00000040 =
       fStack0000000000000068 -
       (fStackX_20 * fStackX_20 + in_stack_00000028 * in_stack_00000028) * fVar1;
  in_stack_00000050 =
       in_stack_00000078 - (fStackX_20 * fStackX_20 + fStackX_24 * fStackX_24) * fVar1;
  fStack0000000000000034 = fStackX_20 * fStackX_24 * fVar1 + fStack000000000000005c;
  fStack0000000000000044 = in_stack_00000028 * fStackX_24 * fVar1 + fStack000000000000006c;
  in_stack_00000038 = fStackX_20 * in_stack_00000028 * fVar1 + in_stack_00000060;
  fVar9 = fStackX_20 * 2.0;
  unaff_RBX[0xc] =
       fVar1 * *(float *)(unaff_RDI + 4) * *(float *)(unaff_RDI + 8) * *(float *)(unaff_RDI + 0xc);
  fVar1 = *(float *)(unaff_RDI + 0x1c);
  fVar2 = *(float *)(unaff_RDI + 0x14);
  fVar3 = *(float *)(unaff_RDI + 0x10);
  fVar4 = *(float *)(unaff_RDI + 0x18);
  fVar10 = fStackX_24 * 2.0;
  in_stack_00000028 = in_stack_00000028 * 2.0;
  fVar11 = fVar1 * fVar1 - 0.5;
  fVar6 = fVar3 * fVar9 + fVar2 * fVar10 + fVar4 * in_stack_00000028;
  fVar8 = ((fVar11 * fVar9 - (fVar2 * in_stack_00000028 - fVar4 * fVar10) * fVar1) + fVar3 * fVar6)
          * *(float *)(unaff_RDI + 4);
  fVar8 = fVar8 + fVar8;
  fVar7 = ((fVar11 * fVar10 - (fVar4 * fVar9 - fVar3 * in_stack_00000028) * fVar1) + fVar2 * fVar6)
          * *(float *)(unaff_RDI + 8);
  fVar7 = fVar7 + fVar7;
  fVar9 = ((fVar11 * in_stack_00000028 - (fVar3 * fVar10 - fVar2 * fVar9) * fVar1) + fVar4 * fVar6)
          * *(float *)(unaff_RDI + 0xc);
  fVar9 = fVar9 + fVar9;
  fVar6 = fVar3 * fVar8 + fVar2 * fVar7 + fVar4 * fVar9;
  unaff_RBX[9] = (fVar2 * fVar9 - fVar4 * fVar7) * fVar1 + fVar11 * fVar8 + fVar3 * fVar6;
  unaff_RBX[10] = (fVar4 * fVar8 - fVar3 * fVar9) * fVar1 + fVar11 * fVar7 + fVar2 * fVar6;
  unaff_RBX[0xb] = (fVar3 * fVar7 - fVar2 * fVar8) * fVar1 + fVar11 * fVar9 + fVar4 * fVar6;
  fStack000000000000003c = fStack0000000000000034;
  in_stack_00000048 = in_stack_00000038;
  fStack000000000000004c = fStack0000000000000044;
  puVar5 = (int32_t *)FUN_1806bd2c0(unaff_RBP + -0x80,&stack0x00000030);
  *unaff_RBX = *puVar5;
  unaff_RBX[1] = puVar5[1];
  unaff_RBX[2] = puVar5[2];
  unaff_RBX[3] = puVar5[3];
  unaff_RBX[4] = puVar5[4];
  unaff_RBX[5] = puVar5[5];
  unaff_RBX[6] = puVar5[6];
  unaff_RBX[7] = puVar5[7];
  unaff_RBX[8] = puVar5[8];
  return;
}






// 函数: void FUN_1806bad5a(void)
void FUN_1806bad5a(void)

{
  uint64_t *unaff_RBX;
  
  *unaff_RBX = 0x3f800000;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0x3f800000;
  unaff_RBX[3] = 0;
  unaff_RBX[4] = 0x3f800000;
  unaff_RBX[5] = 0;
  *(int32_t *)(unaff_RBX + 6) = 0x3f800000;
  return;
}






// 函数: void FUN_1806badd0(longlong *param_1,float *param_2,float *param_3,int param_4,int8_t param_5)
void FUN_1806badd0(longlong *param_1,float *param_2,float *param_3,int param_4,int8_t param_5)

{
  longlong lVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int8_t auStack_b8 [176];
  
  if (param_4 - 2U < 2) {
    uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar2,4,&UNK_18094b6b0,0x18d,&UNK_18094b930);
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,&fStack_d8);
    lVar1 = (**(code **)(*param_1 + 0xd8))(param_1,auStack_b8);
    fVar9 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
    fVar6 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
    fVar8 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
    fVar7 = fStack_cc * fStack_cc - 0.5;
    fVar4 = fStack_d4 * fVar6 + fStack_d8 * fVar9 + fStack_d0 * fVar8;
    fVar5 = *param_3 -
            ((fStack_d4 * fVar8 - fStack_d0 * fVar6) * fStack_cc + fVar7 * fVar9 + fStack_d8 * fVar4
            + fStack_c8);
    fVar3 = param_3[1] -
            ((fStack_d0 * fVar9 - fStack_d8 * fVar8) * fStack_cc + fVar7 * fVar6 + fStack_d4 * fVar4
            + fStack_c4);
    fVar4 = param_3[2] -
            ((fStack_d8 * fVar6 - fStack_d4 * fVar9) * fStack_cc + fVar7 * fVar8 + fStack_d0 * fVar4
            + fStack_c0);
    fStack_e8 = fVar3 * param_2[2] - fVar4 * param_2[1];
    fStack_e0 = fVar5 * param_2[1] - fVar3 * *param_2;
    fStack_e4 = fVar4 * *param_2 - fVar5 * param_2[2];
    (**(code **)(*param_1 + 0x170))(param_1,param_2,param_4,param_5);
    (**(code **)(*param_1 + 0x178))(param_1,&fStack_e8,param_4,param_5);
  }
  return;
}






