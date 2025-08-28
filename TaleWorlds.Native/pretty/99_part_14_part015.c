#include "TaleWorlds.Native.Split.h"

// 99_part_14_part015.c - 11 个函数

// 函数: void FUN_1808f703b(void)
void FUN_1808f703b(void)

{
  int32_t *puVar1;
  int32_t *unaff_RBX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float fVar10;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStackX_20;
  float fStackX_24;
  int32_t uStack000000000000002c;
  
  fVar2 = (float)unaff_RBX[3];
  fVar9 = (float)unaff_RBX[1];
  fVar3 = (float)unaff_RBX[2];
  fVar8 = (fVar9 * unaff_XMM13_Da + fVar2 * unaff_XMM12_Da) - fVar3 * unaff_XMM6_Da;
  fVar6 = (fVar3 * unaff_XMM12_Da + fVar2 * unaff_XMM6_Da) - in_XMM5_Da * unaff_XMM13_Da;
  fVar5 = (fVar2 * unaff_XMM13_Da + in_XMM5_Da * unaff_XMM6_Da) - fVar9 * unaff_XMM12_Da;
  fVar4 = fVar9 * unaff_XMM6_Da + in_XMM5_Da * unaff_XMM12_Da + fVar3 * unaff_XMM13_Da;
  fVar10 = ((in_XMM5_Da * fVar4 + fVar2 * fVar8) - fVar3 * fVar6) + fVar9 * fVar5;
  fVar7 = ((fVar2 * fVar6 + fVar9 * fVar4) - in_XMM5_Da * fVar5) + fVar3 * fVar8;
  fVar9 = ((fVar3 * fVar4 + fVar2 * fVar5) - fVar9 * fVar8) + in_XMM5_Da * fVar6;
  fVar2 = (float)sqrtf(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
  fVar2 = unaff_XMM11_Da / fVar2;
  fVar4 = fVar10 * fVar2 * 0.0;
  fVar3 = fVar2 * fVar7 * 0.0;
  fVar8 = fVar10 * fVar2 - fVar3;
  fVar3 = fVar3 - fVar2 * fVar9;
  fVar6 = fVar2 * fVar9 * 0.0;
  fVar5 = fVar6 - fVar4;
  fVar9 = (float)sqrtf(fVar3 * fVar3 + fVar5 * fVar5 + fVar8 * fVar8);
  if (0.01 < fVar9) {
    fVar4 = (float)atan2f(fVar9,fVar4 + fVar2 * fVar7 + fVar6);
    fVar2 = 2.0;
    if (unaff_XMM14_Da / 0.008 <= 2.0) {
      fVar2 = unaff_XMM14_Da / 0.008;
    }
    fVar4 = fVar4 * fVar2 * 0.04 * 0.5;
    fVar2 = (float)sinf(fVar4);
    fStackX_20 = fVar3 * (fVar2 / fVar9);
    fStackX_24 = (fVar2 / fVar9) * fVar5;
    uStack000000000000002c = cosf(fVar4);
    puVar1 = (int32_t *)FUN_1808f6e00(&fStackX_20,&stack0x00000030);
    *unaff_RBX = *puVar1;
    unaff_RBX[1] = puVar1[1];
    unaff_RBX[2] = puVar1[2];
    unaff_RBX[3] = puVar1[3];
  }
  return;
}






// 函数: void FUN_1808f707a(float param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1808f707a(float param_1,uint64_t param_2,float param_3,float param_4)

{
  int32_t *puVar1;
  int32_t *unaff_RBX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar6;
  float unaff_XMM7_Da;
  float fVar7;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float fVar8;
  float fVar9;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStackX_20;
  float fStackX_24;
  int32_t uStack000000000000002c;
  
  fVar2 = (float)unaff_RBX[2];
  fVar7 = (unaff_XMM7_Da * unaff_XMM13_Da + param_1) - fVar2 * unaff_XMM6_Da;
  fVar5 = (fVar2 * unaff_XMM12_Da + unaff_XMM8_Da * unaff_XMM6_Da) - in_XMM5_Da * unaff_XMM13_Da;
  fVar4 = (param_4 * unaff_XMM13_Da + in_XMM5_Da * unaff_XMM6_Da) - unaff_XMM9_Da * unaff_XMM12_Da;
  fVar3 = param_3 + in_XMM5_Da * unaff_XMM12_Da + fVar2 * unaff_XMM13_Da;
  fVar8 = ((in_XMM5_Da * fVar3 + unaff_XMM8_Da * fVar7) - fVar2 * fVar5) + unaff_XMM9_Da * fVar4;
  fVar6 = ((unaff_XMM8_Da * fVar5 + unaff_XMM9_Da * fVar3) - in_XMM5_Da * fVar4) + fVar2 * fVar7;
  fVar3 = ((fVar2 * fVar3 + unaff_XMM8_Da * fVar4) - unaff_XMM9_Da * fVar7) + in_XMM5_Da * fVar5;
  fVar2 = (float)sqrtf(fVar8 * fVar8 + fVar6 * fVar6 + fVar3 * fVar3);
  fVar2 = unaff_XMM11_Da / fVar2;
  fVar5 = fVar8 * fVar2 * 0.0;
  fVar4 = fVar2 * fVar6 * 0.0;
  fVar9 = fVar8 * fVar2 - fVar4;
  fVar4 = fVar4 - fVar2 * fVar3;
  fVar8 = fVar2 * fVar3 * 0.0;
  fVar7 = fVar8 - fVar5;
  fVar3 = (float)sqrtf(fVar4 * fVar4 + fVar7 * fVar7 + fVar9 * fVar9);
  if (0.01 < fVar3) {
    fVar5 = (float)atan2f(fVar3,fVar5 + fVar2 * fVar6 + fVar8);
    fVar2 = 2.0;
    if (unaff_XMM14_Da / 0.008 <= 2.0) {
      fVar2 = unaff_XMM14_Da / 0.008;
    }
    fVar5 = fVar5 * fVar2 * 0.04 * 0.5;
    fVar2 = (float)sinf(fVar5);
    fStackX_20 = fVar4 * (fVar2 / fVar3);
    fStackX_24 = (fVar2 / fVar3) * fVar7;
    uStack000000000000002c = cosf(fVar5);
    puVar1 = (int32_t *)FUN_1808f6e00(&fStackX_20,&stack0x00000030);
    *unaff_RBX = *puVar1;
    unaff_RBX[1] = puVar1[1];
    unaff_RBX[2] = puVar1[2];
    unaff_RBX[3] = puVar1[3];
  }
  return;
}






// 函数: void FUN_1808f721f(uint64_t param_1)
void FUN_1808f721f(uint64_t param_1)

{
  int32_t *puVar1;
  int32_t *unaff_RBX;
  float fVar2;
  float fVar3;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStackX_20;
  float fStackX_24;
  int32_t uStack000000000000002c;
  
  fVar2 = (float)atan2f(param_1,unaff_XMM6_Da + unaff_XMM13_Da + unaff_XMM11_Da);
  fVar3 = 2.0;
  if (unaff_XMM14_Da / 0.008 <= 2.0) {
    fVar3 = unaff_XMM14_Da / 0.008;
  }
  fVar2 = fVar2 * fVar3 * 0.04 * 0.5;
  fVar3 = (float)sinf(fVar2);
  fStackX_20 = unaff_XMM7_Da * (fVar3 / unaff_XMM8_Da);
  fStackX_24 = (fVar3 / unaff_XMM8_Da) * unaff_XMM9_Da;
  uStack000000000000002c = cosf(fVar2);
  puVar1 = (int32_t *)FUN_1808f6e00(&fStackX_20,&stack0x00000030);
  *unaff_RBX = *puVar1;
  unaff_RBX[1] = puVar1[1];
  unaff_RBX[2] = puVar1[2];
  unaff_RBX[3] = puVar1[3];
  return;
}






// 函数: void FUN_1808f72de(void)
void FUN_1808f72de(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f7310(longlong param_1,longlong param_2,longlong param_3)
void FUN_1808f7310(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
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
  int8_t auStack_118 [32];
  float *pfStack_f8;
  float *pfStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uVar1 = *(uint *)(param_1 + 0x144);
  if (((*(byte *)(param_1 + 100) & 1) != 0) && (9 < uVar1)) {
    pfStack_f0 = &fStack_d8;
    pfStack_f8 = &fStack_c8;
    iVar4 = FUN_1808f7ec0(param_1 + 0xa0,*(int16_t *)(param_3 + 0x1e),
                          *(int16_t *)(param_3 + 0x20),*(int16_t *)(param_3 + 0x22));
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x6c) = fStack_c8;
      *(float *)(param_1 + 0x74) = fStack_c0;
      *(float *)(param_1 + 0x70) = fStack_c4;
    }
  }
  uVar5 = *(uint *)(param_3 + 0x18);
  *(uint *)(param_2 + 0x50) = uVar5;
  *(int8_t *)(param_2 + 0x6c) = *(int8_t *)(param_3 + 0x1c);
  if (uVar1 < 10) {
    *(uint64_t *)(param_2 + 100) = 0x3f800000;
    *(uint64_t *)(param_2 + 0x54) = 0;
    *(uint64_t *)(param_2 + 0x5c) = 0;
    *(uint64_t *)(param_1 + 0x134) = 0;
    *(int32_t *)(param_1 + 0x13c) = 0;
    *(int32_t *)(param_1 + 0x140) = 0x3f800000;
    *(uint64_t *)(param_2 + 0x70) = 0;
    *(int32_t *)(param_2 + 0x78) = 0;
    *(int32_t *)(param_2 + 0x7c) = 0x3f800000;
  }
  else {
    fVar13 = ((float)(int)*(short *)(param_3 + 0x24) - *(float *)(param_1 + 0x84)) *
             *(float *)(param_1 + 0x90);
    fVar14 = ((float)(int)*(short *)(param_3 + 0x26) - *(float *)(param_1 + 0x88)) *
             *(float *)(param_1 + 0x94);
    fVar15 = ((float)(int)*(short *)(param_3 + 0x28) - *(float *)(param_1 + 0x8c)) *
             *(float *)(param_1 + 0x98);
    fVar11 = ((float)(int)*(short *)(param_3 + 0x1e) - *(float *)(param_1 + 0x6c)) *
             *(float *)(param_1 + 0x78);
    fVar12 = ((float)(int)*(short *)(param_3 + 0x20) - *(float *)(param_1 + 0x70)) *
             *(float *)(param_1 + 0x7c);
    fVar10 = ((float)(int)*(short *)(param_3 + 0x22) - *(float *)(param_1 + 0x74)) *
             *(float *)(param_1 + 0x80);
    *(float *)(param_2 + 0x60) = fVar13;
    *(float *)(param_2 + 100) = fVar14;
    *(float *)(param_2 + 0x68) = fVar15;
    if ((*(byte *)(param_1 + 100) & 2) != 0) {
      if ((-0.017453292 <= fVar11) && (fVar11 <= 0.017453292)) {
        fVar11 = 0.0;
      }
      if ((-0.017453292 <= fVar12) && (fVar12 <= 0.017453292)) {
        fVar12 = 0.0;
      }
      if ((-0.017453292 <= fVar10) && (fVar10 <= 0.017453292)) {
        fVar10 = 0.0;
      }
    }
    *(float *)(param_2 + 0x54) = fVar11;
    *(float *)(param_2 + 0x58) = fVar12;
    *(float *)(param_2 + 0x5c) = fVar10;
    lVar2 = *(longlong *)(param_1 + 0x160);
    if (lVar2 != 0) {
      if (uVar5 < *(uint *)(lVar2 + 0x50)) {
        cVar3 = func_0x0001808f0e30(*(int16_t *)(param_1 + 2),*(int16_t *)(param_1 + 4));
        uVar5 = *(int *)(param_2 + 0x50) - *(int *)(lVar2 + 0x50);
        if (cVar3 == '\0') {
          uVar5 = uVar5 + 0x10000;
        }
      }
      else {
        uVar5 = uVar5 - *(uint *)(lVar2 + 0x50);
      }
      fStack_e8 = (float)uVar5 * *(float *)(param_1 + 0x9c) * 1e-06;
      fVar16 = *(float *)(param_1 + 0x140) * 0.5;
      fVar8 = *(float *)(param_1 + 0x138) * 0.5;
      fVar7 = *(float *)(param_1 + 0x134) * 0.5;
      fVar9 = *(float *)(param_1 + 0x13c) * 0.5;
      fVar6 = ((fVar16 * fVar11 + fVar7 * 0.0 + fVar8 * fVar10) - fVar9 * fVar12) * fStack_e8 +
              *(float *)(param_1 + 0x134);
      fStack_e0 = ((fVar16 * fVar12 + fVar8 * 0.0 + fVar9 * fVar11) - fVar7 * fVar10) * fStack_e8 +
                  *(float *)(param_1 + 0x138);
      fStack_dc = ((fVar16 * fVar10 + fVar9 * 0.0 + fVar7 * fVar12) - fVar8 * fVar11) * fStack_e8 +
                  *(float *)(param_1 + 0x13c);
      fVar10 = (((fVar16 * 0.0 - fVar7 * fVar11) - fVar8 * fVar12) - fVar9 * fVar10) * fStack_e8 +
               *(float *)(param_1 + 0x140);
      fStack_e4 = fVar6;
      fStack_cc = (float)sqrtf(fVar6 * fVar6 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc +
                               fVar10 * fVar10);
      fStack_cc = 1.0 / fStack_cc;
      fStack_d8 = fVar6 * fStack_cc;
      fStack_d4 = fStack_e0 * fStack_cc;
      fStack_d0 = fStack_dc * fStack_cc;
      fStack_cc = fVar10 * fStack_cc;
      if ((*(byte *)(param_1 + 100) & 4) != 0) {
        fStack_c8 = fVar13;
        fStack_c4 = fVar14;
        fStack_c0 = fVar15;
        FUN_1808f6fa0(&fStack_d8,&fStack_c8,fStack_e8);
      }
      *(float *)(param_1 + 0x134) = fStack_d8;
      *(float *)(param_1 + 0x140) = fStack_cc;
      *(float *)(param_1 + 0x138) = fStack_d4;
      *(float *)(param_1 + 0x13c) = fStack_d0;
      *(float *)(param_2 + 0x70) = fStack_d8;
      *(float *)(param_2 + 0x7c) = fStack_cc;
      *(float *)(param_2 + 0x74) = fStack_d4;
      *(float *)(param_2 + 0x78) = fStack_d0;
    }
  }
  if (uVar1 < 10) {
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_118);
}






// 函数: void FUN_1808f7331(longlong param_1,longlong param_2,longlong param_3)
void FUN_1808f7331(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  bool in_ZF;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar12;
  int32_t unaff_XMM7_Dc;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int32_t unaff_XMM15_Da;
  float fVar19;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  ulonglong in_stack_00000060;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBP;
  uVar1 = *(uint *)(param_1 + 0x144);
  *(uint64_t *)(in_R11 + -0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  if ((!in_ZF) && (9 < uVar1)) {
    iVar4 = FUN_1808f7ec0(param_1 + 0xa0,*(int16_t *)(param_3 + 0x1e),
                          *(int16_t *)(param_3 + 0x20),*(int16_t *)(param_3 + 0x22),
                          &stack0x00000050);
    if (iVar4 != 0) {
      *(float *)(unaff_RBX + 0x6c) = fStack0000000000000050;
      *(float *)(unaff_RBX + 0x74) = in_stack_00000058;
      *(float *)(unaff_RBX + 0x70) = fStack0000000000000054;
    }
  }
  uVar5 = *(uint *)(param_3 + 0x18);
  *(uint *)(param_2 + 0x50) = uVar5;
  *(int8_t *)(param_2 + 0x6c) = *(int8_t *)(param_3 + 0x1c);
  if (uVar1 < 10) {
    *(uint64_t *)(param_2 + 100) = 0x3f800000;
    *(uint64_t *)(param_2 + 0x54) = 0;
    *(uint64_t *)(param_2 + 0x5c) = 0;
    *(uint64_t *)(unaff_RBX + 0x134) = 0;
    *(int32_t *)(unaff_RBX + 0x13c) = 0;
    *(int32_t *)(unaff_RBX + 0x140) = 0x3f800000;
    *(uint64_t *)(param_2 + 0x70) = 0;
    *(int32_t *)(param_2 + 0x78) = 0;
    *(int32_t *)(param_2 + 0x7c) = 0x3f800000;
  }
  else {
    fVar16 = ((float)(int)*(short *)(param_3 + 0x24) - *(float *)(unaff_RBX + 0x84)) *
             *(float *)(unaff_RBX + 0x90);
    fVar17 = ((float)(int)*(short *)(param_3 + 0x26) - *(float *)(unaff_RBX + 0x88)) *
             *(float *)(unaff_RBX + 0x94);
    fVar18 = ((float)(int)*(short *)(param_3 + 0x28) - *(float *)(unaff_RBX + 0x8c)) *
             *(float *)(unaff_RBX + 0x98);
    fVar14 = ((float)(int)*(short *)(param_3 + 0x1e) - *(float *)(unaff_RBX + 0x6c)) *
             *(float *)(unaff_RBX + 0x78);
    fVar15 = ((float)(int)*(short *)(param_3 + 0x20) - *(float *)(unaff_RBX + 0x70)) *
             *(float *)(unaff_RBX + 0x7c);
    fVar13 = ((float)(int)*(short *)(param_3 + 0x22) - *(float *)(unaff_RBX + 0x74)) *
             *(float *)(unaff_RBX + 0x80);
    *(float *)(param_2 + 0x60) = fVar16;
    *(float *)(param_2 + 100) = fVar17;
    *(float *)(param_2 + 0x68) = fVar18;
    if ((*(byte *)(unaff_RBX + 100) & 2) != 0) {
      if ((-0.017453292 <= fVar14) && (fVar14 <= 0.017453292)) {
        fVar14 = 0.0;
      }
      if ((-0.017453292 <= fVar15) && (fVar15 <= 0.017453292)) {
        fVar15 = 0.0;
      }
      if ((-0.017453292 <= fVar13) && (fVar13 <= 0.017453292)) {
        fVar13 = 0.0;
      }
    }
    *(float *)(param_2 + 0x54) = fVar14;
    *(float *)(param_2 + 0x58) = fVar15;
    *(float *)(param_2 + 0x5c) = fVar13;
    lVar2 = *(longlong *)(unaff_RBX + 0x160);
    if (lVar2 != 0) {
      in_stack_00000070 = unaff_XMM15_Da;
      in_stack_00000078 = unaff_XMM15_Dc;
      in_stack_000000e0 = unaff_XMM7_Da;
      in_stack_000000e8 = unaff_XMM7_Dc;
      in_stack_000000f0 = unaff_XMM6_Da;
      in_stack_000000f8 = unaff_XMM6_Dc;
      if (uVar5 < *(uint *)(lVar2 + 0x50)) {
        cVar3 = func_0x0001808f0e30(*(int16_t *)(unaff_RBX + 2),*(int16_t *)(unaff_RBX + 4));
        uVar5 = *(int *)(param_2 + 0x50) - *(int *)(lVar2 + 0x50);
        if (cVar3 == '\0') {
          uVar5 = uVar5 + 0x10000;
        }
      }
      else {
        uVar5 = uVar5 - *(uint *)(lVar2 + 0x50);
      }
      fVar6 = (float)uVar5 * *(float *)(unaff_RBX + 0x9c) * 1e-06;
      fVar19 = *(float *)(unaff_RBX + 0x140) * 0.5;
      fVar11 = *(float *)(unaff_RBX + 0x138) * 0.5;
      fVar10 = *(float *)(unaff_RBX + 0x134) * 0.5;
      fVar12 = *(float *)(unaff_RBX + 0x13c) * 0.5;
      fVar7 = ((fVar19 * fVar14 + fVar10 * 0.0 + fVar11 * fVar13) - fVar12 * fVar15) * fVar6 +
              *(float *)(unaff_RBX + 0x134);
      fVar8 = ((fVar19 * fVar15 + fVar11 * 0.0 + fVar12 * fVar14) - fVar10 * fVar13) * fVar6 +
              *(float *)(unaff_RBX + 0x138);
      fVar9 = ((fVar19 * fVar13 + fVar12 * 0.0 + fVar10 * fVar15) - fVar11 * fVar14) * fVar6 +
              *(float *)(unaff_RBX + 0x13c);
      fVar13 = (((fVar19 * 0.0 - fVar10 * fVar14) - fVar11 * fVar15) - fVar12 * fVar13) * fVar6 +
               *(float *)(unaff_RBX + 0x140);
      fStack000000000000004c =
           (float)sqrtf(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 + fVar13 * fVar13);
      fStack000000000000004c = 1.0 / fStack000000000000004c;
      fStack0000000000000040 = fVar7 * fStack000000000000004c;
      fStack0000000000000044 = fVar8 * fStack000000000000004c;
      fStack0000000000000048 = fVar9 * fStack000000000000004c;
      fStack000000000000004c = fVar13 * fStack000000000000004c;
      if ((*(byte *)(unaff_RBX + 100) & 4) != 0) {
        fStack0000000000000050 = fVar16;
        fStack0000000000000054 = fVar17;
        in_stack_00000058 = fVar18;
        FUN_1808f6fa0(&stack0x00000040,&stack0x00000050,fVar6);
      }
      *(float *)(unaff_RBX + 0x134) = fStack0000000000000040;
      *(float *)(unaff_RBX + 0x140) = fStack000000000000004c;
      *(float *)(unaff_RBX + 0x138) = fStack0000000000000044;
      *(float *)(unaff_RBX + 0x13c) = fStack0000000000000048;
      *(float *)(param_2 + 0x70) = fStack0000000000000040;
      *(float *)(param_2 + 0x7c) = fStack000000000000004c;
      *(float *)(param_2 + 0x74) = fStack0000000000000044;
      *(float *)(param_2 + 0x78) = fStack0000000000000048;
    }
  }
  if (uVar1 < 10) {
    *(int *)(unaff_RBX + 0x144) = *(int *)(unaff_RBX + 0x144) + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f7517(uint param_1)
void FUN_1808f7517(uint param_1)

{
  char cVar1;
  uint in_EAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM14_Da;
  float fVar8;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  ulonglong in_stack_00000060;
  
  if (param_1 < in_EAX) {
    cVar1 = func_0x0001808f0e30(*(int16_t *)(unaff_RBX + 2),*(int16_t *)(unaff_RBX + 4));
    param_1 = *(int *)(unaff_RDI + 0x50) - *(int *)(unaff_RSI + 0x50);
    if (cVar1 == '\0') {
      param_1 = param_1 + 0x10000;
    }
  }
  else {
    param_1 = param_1 - in_EAX;
  }
  fVar2 = (float)param_1 * *(float *)(unaff_RBX + 0x9c) * 1e-06;
  fVar8 = *(float *)(unaff_RBX + 0x140) * 0.5;
  fVar6 = *(float *)(unaff_RBX + 0x138) * 0.5;
  fVar5 = *(float *)(unaff_RBX + 0x134) * 0.5;
  fVar7 = *(float *)(unaff_RBX + 0x13c) * 0.5;
  fVar3 = ((fVar8 * unaff_XMM10_Da + fVar5 * 0.0 + fVar6 * unaff_XMM9_Da) - fVar7 * unaff_XMM11_Da)
          * fVar2 + *(float *)(unaff_RBX + 0x134);
  fVar4 = ((fVar8 * unaff_XMM11_Da + fVar6 * 0.0 + fVar7 * unaff_XMM10_Da) - fVar5 * unaff_XMM9_Da)
          * fVar2 + *(float *)(unaff_RBX + 0x138);
  fStack000000000000003c =
       ((fVar8 * unaff_XMM9_Da + fVar7 * 0.0 + fVar5 * unaff_XMM11_Da) - fVar6 * unaff_XMM10_Da) *
       fVar2 + *(float *)(unaff_RBX + 0x13c);
  fVar5 = (((fVar8 * 0.0 - fVar5 * unaff_XMM10_Da) - fVar6 * unaff_XMM11_Da) - fVar7 * unaff_XMM9_Da
          ) * fVar2 + *(float *)(unaff_RBX + 0x140);
  fStack0000000000000034 = fVar3;
  fStack000000000000004c =
       (float)sqrtf(fVar3 * fVar3 + fVar4 * fVar4 + fStack000000000000003c * fStack000000000000003c
                    + fVar5 * fVar5);
  fStack000000000000004c = 1.0 / fStack000000000000004c;
  in_stack_00000040 = fVar3 * fStack000000000000004c;
  fStack0000000000000044 = fVar4 * fStack000000000000004c;
  in_stack_00000048 = fStack000000000000003c * fStack000000000000004c;
  fStack000000000000004c = fVar5 * fStack000000000000004c;
  if ((*(byte *)(unaff_RBX + 100) & 4) != 0) {
    in_stack_00000050 = unaff_XMM12_Da;
    in_stack_00000058 = unaff_XMM14_Da;
    FUN_1808f6fa0(&stack0x00000040,&stack0x00000050,fVar2);
  }
  *(float *)(unaff_RBX + 0x134) = in_stack_00000040;
  *(float *)(unaff_RBX + 0x140) = fStack000000000000004c;
  *(float *)(unaff_RBX + 0x138) = fStack0000000000000044;
  *(float *)(unaff_RBX + 0x13c) = in_stack_00000048;
  *(float *)(unaff_RDI + 0x70) = in_stack_00000040;
  *(float *)(unaff_RDI + 0x7c) = fStack000000000000004c;
  *(float *)(unaff_RDI + 0x74) = fStack0000000000000044;
  *(float *)(unaff_RDI + 0x78) = in_stack_00000048;
  if (unaff_EBP < 10) {
    *(int *)(unaff_RBX + 0x144) = *(int *)(unaff_RBX + 0x144) + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f751f(uint param_1)
void FUN_1808f751f(uint param_1)

{
  char cVar1;
  uint in_EAX;
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM14_Da;
  float fVar8;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  ulonglong in_stack_00000060;
  
  if (param_1 < in_EAX) {
    cVar1 = func_0x0001808f0e30(*(int16_t *)(unaff_RBX + 2),*(int16_t *)(unaff_RBX + 4));
    param_1 = *(int *)(unaff_RDI + 0x50) - *(int *)(unaff_RSI + 0x50);
    if (cVar1 == '\0') {
      param_1 = param_1 + 0x10000;
    }
  }
  else {
    param_1 = param_1 - in_EAX;
  }
  fVar2 = (float)param_1 * *(float *)(unaff_RBX + 0x9c) * 1e-06;
  fVar8 = *(float *)(unaff_RBX + 0x140) * 0.5;
  fVar6 = *(float *)(unaff_RBX + 0x138) * 0.5;
  fVar5 = *(float *)(unaff_RBX + 0x134) * 0.5;
  fVar7 = *(float *)(unaff_RBX + 0x13c) * 0.5;
  fVar3 = ((fVar8 * unaff_XMM10_Da + fVar5 * 0.0 + fVar6 * unaff_XMM9_Da) - fVar7 * unaff_XMM11_Da)
          * fVar2 + *(float *)(unaff_RBX + 0x134);
  fVar4 = ((fVar8 * unaff_XMM11_Da + fVar6 * 0.0 + fVar7 * unaff_XMM10_Da) - fVar5 * unaff_XMM9_Da)
          * fVar2 + *(float *)(unaff_RBX + 0x138);
  fStack000000000000003c =
       ((fVar8 * unaff_XMM9_Da + fVar7 * 0.0 + fVar5 * unaff_XMM11_Da) - fVar6 * unaff_XMM10_Da) *
       fVar2 + *(float *)(unaff_RBX + 0x13c);
  fVar5 = (((fVar8 * 0.0 - fVar5 * unaff_XMM10_Da) - fVar6 * unaff_XMM11_Da) - fVar7 * unaff_XMM9_Da
          ) * fVar2 + *(float *)(unaff_RBX + 0x140);
  fStack0000000000000034 = fVar3;
  fStack000000000000004c =
       (float)sqrtf(fVar3 * fVar3 + fVar4 * fVar4 + fStack000000000000003c * fStack000000000000003c
                    + fVar5 * fVar5);
  fStack000000000000004c = 1.0 / fStack000000000000004c;
  in_stack_00000040 = fVar3 * fStack000000000000004c;
  fStack0000000000000044 = fVar4 * fStack000000000000004c;
  in_stack_00000048 = fStack000000000000003c * fStack000000000000004c;
  fStack000000000000004c = fVar5 * fStack000000000000004c;
  if ((*(byte *)(unaff_RBX + 100) & 4) != 0) {
    in_stack_00000050 = unaff_XMM12_Da;
    in_stack_00000058 = unaff_XMM14_Da;
    FUN_1808f6fa0(&stack0x00000040,&stack0x00000050,fVar2);
  }
  *(float *)(unaff_RBX + 0x134) = in_stack_00000040;
  *(float *)(unaff_RBX + 0x140) = fStack000000000000004c;
  *(float *)(unaff_RBX + 0x138) = fStack0000000000000044;
  *(float *)(unaff_RBX + 0x13c) = in_stack_00000048;
  *(float *)(unaff_RDI + 0x70) = in_stack_00000040;
  *(float *)(unaff_RDI + 0x7c) = fStack000000000000004c;
  *(float *)(unaff_RDI + 0x74) = fStack0000000000000044;
  *(float *)(unaff_RDI + 0x78) = in_stack_00000048;
  if (unaff_EBP < 10) {
    *(int *)(unaff_RBX + 0x144) = *(int *)(unaff_RBX + 0x144) + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f773a(void)
void FUN_1808f773a(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RDI;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  ulonglong in_stack_00000060;
  
  FUN_1808f6fa0(&stack0x00000040,&stack0x00000050,in_stack_00000030);
  *(int32_t *)(unaff_RBX + 0x134) = uStack0000000000000040;
  *(int32_t *)(unaff_RBX + 0x140) = uStack000000000000004c;
  *(int32_t *)(unaff_RBX + 0x138) = uStack0000000000000044;
  *(int32_t *)(unaff_RBX + 0x13c) = uStack0000000000000048;
  *(int32_t *)(unaff_RDI + 0x70) = uStack0000000000000040;
  *(int32_t *)(unaff_RDI + 0x7c) = uStack000000000000004c;
  *(int32_t *)(unaff_RDI + 0x74) = uStack0000000000000044;
  *(int32_t *)(unaff_RDI + 0x78) = uStack0000000000000048;
  if (unaff_EBP < 10) {
    *(int *)(unaff_RBX + 0x144) = *(int *)(unaff_RBX + 0x144) + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f77c3(void)
void FUN_1808f77c3(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RDI;
  ulonglong in_stack_00000060;
  
  *(uint64_t *)(unaff_RDI + 100) = 0x3f800000;
  *(uint64_t *)(unaff_RDI + 0x54) = 0;
  *(uint64_t *)(unaff_RDI + 0x5c) = 0;
  *(uint64_t *)(unaff_RBX + 0x134) = 0;
  *(int32_t *)(unaff_RBX + 0x13c) = 0;
  *(int32_t *)(unaff_RBX + 0x140) = 0x3f800000;
  *(uint64_t *)(unaff_RDI + 0x70) = 0;
  *(int32_t *)(unaff_RDI + 0x78) = 0;
  *(int32_t *)(unaff_RDI + 0x7c) = 0x3f800000;
  if (unaff_EBP < 10) {
    *(int *)(unaff_RBX + 0x144) = *(int *)(unaff_RBX + 0x144) + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808f784d(void)
void FUN_1808f784d(void)

{
  longlong unaff_RBX;
  ulonglong in_stack_00000060;
  
  *(int *)(unaff_RBX + 0x144) = *(int *)(unaff_RBX + 0x144) + 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_1808f7870(longlong param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  char cVar14;
  uint64_t uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar13 = *(int *)(param_1 + 0x1c);
  fVar21 = (float)(int)*param_2;
  fVar22 = (float)(int)param_2[1];
  sVar1 = param_2[3];
  fVar23 = (float)(int)param_2[2];
  sVar2 = param_2[4];
  sVar3 = param_2[5];
  sVar4 = param_2[6];
  sVar5 = param_2[7];
  sVar6 = param_2[8];
  cVar14 = func_0x0001808f0e90(*(int16_t *)(param_1 + 2),*(int16_t *)(param_1 + 4),iVar13);
  if ((cVar14 == '\0') || (iVar13 != 0x11)) {
    fVar17 = (float)(int)param_2[9];
    fVar16 = (float)(int)param_2[10];
  }
  else {
    fVar17 = 540.0;
    fVar16 = 540.0;
    param_2[9] = 0x21c;
    param_2[10] = 0x21c;
  }
  sVar7 = param_2[0xb];
  sVar8 = param_2[0xc];
  sVar9 = param_2[0xd];
  sVar10 = param_2[0xe];
  sVar11 = param_2[0xf];
  sVar12 = param_2[0x10];
  fVar20 = ABS((float)(int)sVar1 - fVar21) + ABS((float)(int)sVar2 - fVar21);
  fVar18 = ABS((float)(int)sVar3 - fVar22) + ABS((float)(int)sVar4 - fVar22);
  fVar19 = ABS((float)(int)sVar5 - fVar23) + ABS((float)(int)sVar6 - fVar23);
  if (((fVar20 == 0.0) || (fVar18 == 0.0)) || (fVar19 == 0.0)) {
    uVar15 = 0x80010002;
  }
  else {
    fVar17 = (fVar16 + fVar17) * 0.5 * 0.017453292;
    *(float *)(param_1 + 0x6c) = fVar21;
    *(float *)(param_1 + 0x70) = fVar22;
    *(float *)(param_1 + 0x74) = fVar23;
    *(float *)(param_1 + 0x78) = fVar17 / (fVar20 * 0.5);
    *(float *)(param_1 + 0x7c) = fVar17 / (fVar18 * 0.5);
    *(float *)(param_1 + 0x80) = fVar17 / (fVar19 * 0.5);
    fVar23 = ABS((float)(int)sVar7) + ABS((float)(int)sVar8);
    *(float *)(param_1 + 0x84) = (float)(int)sVar7 - fVar23 * 0.5;
    fVar22 = ABS((float)(int)sVar9) + ABS((float)(int)sVar10);
    *(float *)(param_1 + 0x88) = (float)(int)sVar9 - fVar22 * 0.5;
    fVar21 = ABS((float)(int)sVar11) + ABS((float)(int)sVar12);
    *(float *)(param_1 + 0x94) = 2.0 / fVar22;
    *(float *)(param_1 + 0x8c) = (float)(int)sVar11 - fVar21 * 0.5;
    *(float *)(param_1 + 0x90) = 2.0 / fVar23;
    *(float *)(param_1 + 0x98) = 2.0 / fVar21;
    cVar14 = func_0x0001808f0e30(*(int16_t *)(param_1 + 2),*(int16_t *)(param_1 + 4));
    if (cVar14 == '\0') {
      if (iVar13 < 0x13) {
        *(int32_t *)(param_1 + 0x9c) = 0x40e33333;
      }
      else {
        *(int32_t *)(param_1 + 0x9c) = 0x40aaaaab;
      }
    }
    else {
      *(int32_t *)(param_1 + 0x9c) = 0x3eaaaaab;
    }
    *(int8_t *)(param_1 + 0x68) = 1;
    uVar15 = 0;
  }
  return uVar15;
}






