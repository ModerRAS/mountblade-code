#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part054.c - 3 个函数

// 函数: void FUN_1802b7c8f(void)
void FUN_1802b7c8f(void)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  longlong unaff_RBX;
  int unaff_EBP;
  uint64_t *puVar9;
  longlong in_R11;
  uint64_t *puVar10;
  longlong *unaff_R14;
  ulonglong uVar11;
  uint64_t in_stack_00000180;
  uint64_t uStack00000000000001a8;
  
  uVar7 = (ulonglong)unaff_EBP;
  uVar11 = (in_R11 - unaff_RBX) / 0x70;
  if (uVar7 <= uVar11) {
    unaff_R14[1] = uVar7 * 0x70 + unaff_RBX;
    return;
  }
  uVar7 = uVar7 - uVar11;
  uStack00000000000001a8 = in_stack_00000180;
  puVar9 = (uint64_t *)unaff_R14[1];
  if ((ulonglong)((unaff_R14[2] - (longlong)puVar9) / 0x70) < uVar7) {
    puVar8 = (uint64_t *)*unaff_R14;
    lVar1 = ((longlong)puVar9 - (longlong)puVar8) / 0x70;
    uVar11 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar11 = 1;
    }
    if (uVar11 < lVar1 + uVar7) {
      uVar11 = lVar1 + uVar7;
    }
    if (uVar11 == 0) {
      puVar6 = (uint64_t *)0x0;
      puVar10 = puVar6;
    }
    else {
      puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar11 * 0x70,(char)unaff_R14[3]);
      puVar8 = (uint64_t *)*unaff_R14;
      puVar9 = (uint64_t *)unaff_R14[1];
      puVar10 = puVar6;
    }
    for (; puVar8 != puVar9; puVar8 = puVar8 + 0xe) {
      uVar5 = puVar8[1];
      *puVar6 = *puVar8;
      puVar6[1] = uVar5;
      uVar5 = puVar8[3];
      puVar6[2] = puVar8[2];
      puVar6[3] = uVar5;
      uVar5 = puVar8[5];
      puVar6[4] = puVar8[4];
      puVar6[5] = uVar5;
      uVar5 = puVar8[7];
      puVar6[6] = puVar8[6];
      puVar6[7] = uVar5;
      uVar5 = puVar8[9];
      puVar6[8] = puVar8[8];
      puVar6[9] = uVar5;
      uVar5 = puVar8[0xb];
      puVar6[10] = puVar8[10];
      puVar6[0xb] = uVar5;
      uVar2 = *(int32_t *)((longlong)puVar8 + 100);
      uVar3 = *(int32_t *)(puVar8 + 0xd);
      uVar4 = *(int32_t *)((longlong)puVar8 + 0x6c);
      *(int32_t *)(puVar6 + 0xc) = *(int32_t *)(puVar8 + 0xc);
      *(int32_t *)((longlong)puVar6 + 100) = uVar2;
      *(int32_t *)(puVar6 + 0xd) = uVar3;
      *(int32_t *)((longlong)puVar6 + 0x6c) = uVar4;
      puVar6 = puVar6 + 0xe;
    }
    if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
      memset(puVar6,0,0x70);
    }
    if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_R14 = (longlong)puVar10;
    unaff_R14[2] = (longlong)(puVar10 + uVar11 * 0xe);
    unaff_R14[1] = (longlong)puVar6;
    return;
  }
  if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar9,0,0x70);
  }
  unaff_R14[1] = (longlong)puVar9;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b7d24(longlong param_1,longlong param_2)
void FUN_1802b7d24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  longlong *unaff_R14;
  ulonglong uVar11;
  uint64_t uStack0000000000000148;
  uint64_t uStack0000000000000170;
  uint64_t in_stack_00000178;
  uint64_t in_stack_00000180;
  uint64_t uStack00000000000001a8;
  
  uVar7 = param_1 - param_2;
  uStack00000000000001a8 = in_stack_00000180;
  uStack0000000000000170 = in_stack_00000178;
  puVar9 = (uint64_t *)unaff_R14[1];
  if (uVar7 <= (ulonglong)((unaff_R14[2] - (longlong)puVar9) / 0x70)) {
    if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
      uStack0000000000000148 = 0x1802bec7e;
      memset(puVar9,0,0x70);
    }
    unaff_R14[1] = (longlong)puVar9;
    return;
  }
  puVar8 = (uint64_t *)*unaff_R14;
  lVar1 = ((longlong)puVar9 - (longlong)puVar8) / 0x70;
  uVar11 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar11 = 1;
  }
  if (uVar11 < lVar1 + uVar7) {
    uVar11 = lVar1 + uVar7;
  }
  if (uVar11 == 0) {
    puVar6 = (uint64_t *)0x0;
    puVar10 = puVar6;
  }
  else {
    uStack0000000000000148 = 0x1802beb92;
    puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar11 * 0x70,(char)unaff_R14[3]);
    puVar8 = (uint64_t *)*unaff_R14;
    puVar9 = (uint64_t *)unaff_R14[1];
    puVar10 = puVar6;
  }
  for (; puVar8 != puVar9; puVar8 = puVar8 + 0xe) {
    uVar5 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar5;
    uVar5 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar5;
    uVar5 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar5;
    uVar5 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar5;
    uVar5 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar5;
    uVar5 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar5;
    uVar2 = *(int32_t *)((longlong)puVar8 + 100);
    uVar3 = *(int32_t *)(puVar8 + 0xd);
    uVar4 = *(int32_t *)((longlong)puVar8 + 0x6c);
    *(int32_t *)(puVar6 + 0xc) = *(int32_t *)(puVar8 + 0xc);
    *(int32_t *)((longlong)puVar6 + 100) = uVar2;
    *(int32_t *)(puVar6 + 0xd) = uVar3;
    *(int32_t *)((longlong)puVar6 + 0x6c) = uVar4;
    puVar6 = puVar6 + 0xe;
  }
  if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
    uStack0000000000000148 = 0x1802bec0e;
    memset(puVar6,0,0x70);
  }
  if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    uStack0000000000000148 = 0x1802bec38;
    FUN_18064e900();
  }
  *unaff_R14 = (longlong)puVar10;
  unaff_R14[2] = (longlong)(puVar10 + uVar11 * 0xe);
  unaff_R14[1] = (longlong)puVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b7d60(longlong *param_1,float param_2)
void FUN_1802b7d60(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int32_t uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int8_t auStack_228 [32];
  float fStack_208;
  uint64_t uStack_200;
  float fStack_1f8;
  int32_t uStack_1f4;
  float fStack_1f0;
  uint64_t uStack_1e8;
  float fStack_1e0;
  int32_t uStack_1dc;
  int iStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  int32_t uStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [12];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  ulonglong uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_228;
  plVar1 = param_1 + 0xb;
  lVar15 = 0;
  fStack_1c4 = param_2 * param_2;
  *(int32_t *)(param_1 + 8) = 0;
  fVar38 = 0.0;
  param_1[2] = 0x4cbebc204cbebc20;
  param_1[3] = 0x7f7fffff4cbebc20;
  param_1[6] = 0;
  param_1[7] = 0x7f7fffff00000000;
  lVar22 = (param_1[0xc] - *plVar1) / 0x70;
  param_1[4] = -0x334143df334143e0;
  param_1[5] = 0x7f7fffffccbebc20;
  lVar21 = *param_1;
  lVar16 = param_1[9];
  uStack_1e8 = lVar22;
  fStack_1cc = param_2;
  uStack_1c8 = func_0x0001802b6b90(lVar16 + 0xb20,*(float *)(lVar21 + 0x3044) * 0.041666668);
  iVar19 = (int)lVar22;
  cVar4 = *(char *)((longlong)param_1 + 0xa1);
  if (cVar4 == '\0') {
    fVar35 = *(float *)(lVar16 + 0xfa4);
    fVar25 = *(float *)(lVar16 + 0xfa8);
    fVar37 = *(float *)(lVar16 + 4000);
    fVar28 = fVar35 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x16) * fVar37 +
             fVar25 * *(float *)(param_1 + 0x1a);
    fStack_188 = fVar35 * *(float *)((longlong)param_1 + 0xc4) +
                 *(float *)((longlong)param_1 + 0xb4) * fVar37 +
                 fVar25 * *(float *)((longlong)param_1 + 0xd4);
    fStack_198 = fVar35 * *(float *)(param_1 + 0x19) + *(float *)(param_1 + 0x17) * fVar37 +
                 fVar25 * *(float *)(param_1 + 0x1b);
    fVar35 = *(float *)(lVar16 + 0xf90);
    fStack_178 = *(float *)(lVar16 + 0xf94);
    uStack_200 = *(longlong *)(lVar16 + 0xf90);
    fStack_168 = *(float *)(lVar16 + 0xf98);
    uStack_1f4 = *(int32_t *)(lVar16 + 0xf9c);
    fStack_1ac = 0.0;
    fStack_1a8 = 0.0;
    fStack_1a4 = 0.0;
    fStack_184 = fStack_188;
    fStack_1f8 = fStack_168;
  }
  else {
    fVar33 = *(float *)((longlong)param_1 + 0xdc);
    fVar28 = *(float *)(lVar16 + 4000);
    fStack_188 = *(float *)(lVar16 + 0xfa4);
    uStack_200 = *(longlong *)(lVar16 + 4000);
    fStack_198 = *(float *)(lVar16 + 0xfa8);
    uStack_1f4 = *(int32_t *)(lVar16 + 0xfac);
    fVar25 = *(float *)(lVar16 + 0xf94);
    fVar37 = *(float *)(lVar16 + 0xf90);
    fVar34 = *(float *)(lVar16 + 0xf98);
    fVar35 = *(float *)((longlong)param_1 + 0xb4) * fVar25 + *(float *)(param_1 + 0x16) * fVar37 +
             *(float *)(param_1 + 0x17) * fVar34;
    fStack_178 = *(float *)((longlong)param_1 + 0xc4) * fVar25 + *(float *)(param_1 + 0x18) * fVar37
                 + *(float *)(param_1 + 0x19) * fVar34;
    fStack_1a8 = *(float *)((longlong)param_1 + 0xd4) * fVar25 + *(float *)(param_1 + 0x1a) * fVar37
                 + *(float *)(param_1 + 0x1b) * fVar34;
    fStack_1a4 = fVar33 * fVar25 + fVar33 * fVar37 + fVar33 * fVar34;
    fStack_184 = 0.0;
    fStack_1ac = fStack_178;
    fStack_168 = fStack_1a8;
    fStack_1f8 = fStack_198;
  }
  pfVar9 = *(float **)(lVar21 + 0x81f0);
  fVar25 = ABS(*(float *)((longlong)param_1 + 0xe4) + *(float *)(param_1 + 0x1c)) * 8.0 +
           (float)system_error_code * 8e-05;
  uVar10 = (uint)fVar25;
  uVar11 = uVar10 & 0x800000ff;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
  }
  uVar12 = uVar11 + 1 & 0x800000ff;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
  }
  iStack_1d8 = 0;
  lVar21 = (longlong)iVar19;
  fStack_1bc = ((*(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar12 * 4) -
                *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar11 * 4)) *
                (fVar25 - (float)(int)uVar10) +
               *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar11 * 4)) * *pfVar9 + 1.0;
  fStack_1b8 = pfVar9[3] * pfVar9[1] * fStack_1bc;
  fStack_1bc = pfVar9[3] * pfVar9[2] * fStack_1bc;
  fStack_1b0 = fVar35;
  fStack_194 = fStack_198;
  fStack_190 = fStack_198;
  fStack_18c = fStack_198;
  fStack_180 = fStack_184;
  fStack_17c = fStack_184;
  fStack_174 = fStack_1ac;
  fStack_170 = fStack_1ac;
  fStack_16c = fStack_1ac;
  fStack_164 = fStack_168;
  fStack_160 = fStack_168;
  fStack_15c = fStack_168;
  if (0 < iVar19) {
    lVar16 = lVar21 * 0x70;
    lVar22 = lVar15;
    do {
      fVar31 = fStack_168;
      fVar33 = fStack_178;
      fVar34 = fStack_188;
      fVar37 = fStack_198;
      fVar25 = fStack_1b8;
      lVar17 = *plVar1;
      uVar3 = *(int32_t *)(lVar15 + 0x24 + lVar17);
      *(int32_t *)(lVar15 + 0x5c + lVar17) = uStack_1c8;
      lVar20 = param_1[9];
      fVar32 = fStack_1bc;
      fVar23 = (float)func_0x0001802b6b90(lVar20 + 0xa68,uVar3);
      fStack_208 = fVar31 + fVar37;
      fVar33 = fVar33 + fVar32 * fVar23 * *(float *)(lVar15 + 0x40 + lVar17) + fVar34;
      fStack_1c0 = *(float *)(lVar15 + 0xc + lVar17) - *(float *)(lVar15 + 0x1c + lVar17);
      fVar37 = fVar25 * fVar23 * *(float *)(lVar15 + 0x40 + lVar17) + fVar28 + fVar35;
      fStack_1f0 = fVar33;
      fVar25 = (float)func_0x0001802b6b90(lVar20 + 0x340,uVar3);
      fVar25 = fVar25 * *(float *)(lVar15 + 0x48 + lVar17);
      if (1.0 <= fVar25) {
        fVar25 = 1.0;
      }
      fVar23 = (float)func_0x0001802b6b90(lVar20 + 0x3f8);
      fVar23 = fVar23 * *(float *)(lVar20 + 0x3f4);
      uStack_200 = *(longlong *)(lVar20 + 0x100);
      fVar34 = *(float *)(lVar15 + 4 + lVar17);
      fVar31 = *(float *)(lVar15 + 8 + lVar17);
      fVar32 = *(float *)(lVar15 + lVar17);
      fVar23 = fVar23 * fVar23;
      fVar23 = fVar23 * fVar23;
      fVar29 = fVar25 * fVar25 * fVar25 * fVar25;
      fVar25 = *(float *)(lVar15 + 0x10 + lVar17);
      fVar39 = 1.0 - fVar29 * fVar29;
      fVar29 = fVar34 - *(float *)(lVar15 + 0x14 + lVar17);
      fVar36 = fVar31 - *(float *)(lVar15 + 0x18 + lVar17);
      fStack_1d4 = fVar31;
      fStack_1d0 = fVar34;
      if (uStack_200 == 0) {
        uStack_200 = 0;
        fVar26 = fVar32;
        fStack_1f0 = fVar33;
      }
      else {
        fVar33 = *(float *)(lVar20 + 0xcc);
        fVar24 = (float)func_0x0001802b6b90(lVar20 + 0x118);
        fVar24 = fVar24 * *(float *)(lVar15 + 0x4c + lVar17);
        fVar30 = 1.0 - fVar33;
        iVar19 = *(int *)(uStack_200 + 0xc0);
        iVar6 = *(int *)(uStack_200 + 0xbc);
        iVar7 = *(int *)(uStack_200 + 0xb8);
        lVar13 = (longlong)
                 (((((iVar19 + (int)((float)iVar19 *
                                    ((fStack_1d4 - *(float *)(param_1 + 0x1d)) *
                                     *(float *)(lVar20 + 0xe0) + *(float *)(lVar20 + 0xf0))) %
                               iVar19) % iVar19) * iVar6 +
                   (iVar6 + (int)((float)iVar6 *
                                 ((fStack_1d0 - *(float *)((longlong)param_1 + 0xe4)) *
                                  *(float *)(lVar20 + 0xdc) + *(float *)(lVar20 + 0xec))) % iVar6) %
                   iVar6) * iVar7 +
                  (iVar7 + (int)((float)iVar7 *
                                ((fVar32 - *(float *)(param_1 + 0x1c)) * *(float *)(lVar20 + 0xd8) +
                                *(float *)(lVar20 + 0xe8))) % iVar7) % iVar7) * 3);
        lVar20 = *(longlong *)(uStack_200 + 0xb0);
        fVar35 = fVar24 * *(float *)(lVar20 + 8 + lVar13 * 4);
        fVar26 = fVar24 * *(float *)(lVar20 + lVar13 * 4);
        fVar24 = fVar24 * *(float *)(lVar20 + 4 + lVar13 * 4);
        fVar37 = fVar26 * fVar30 + fVar37;
        uStack_200 = CONCAT44(uStack_200._4_4_,fVar37);
        fStack_208 = fVar35 * fVar30 + fStack_208;
        fVar31 = ((fStack_1d4 - fVar35 * fStack_1cc * fVar39) - fStack_1d4) * fVar33 + fStack_1d4;
        fVar34 = ((fStack_1d0 - fVar24 * fStack_1cc * fVar39) - fStack_1d0) * fVar33 + fStack_1d0;
        fVar35 = fStack_1b0;
        fVar26 = ((fVar32 - fVar26 * fStack_1cc * fVar39) - fVar32) * fVar33 + fVar32;
        fStack_1f0 = fVar24 * fVar30 + fStack_1f0;
      }
      *(float *)(lVar15 + 0x10 + lVar17) = fVar26;
      *(float *)(lVar15 + 0x14 + lVar17) = fVar34;
      *(float *)(lVar15 + 0x18 + lVar17) = fVar31;
      fVar34 = (fVar32 - fVar25) * fVar39 + fVar32 + fStack_1c4 * fVar37;
      *(float *)(lVar15 + lVar17) = fVar34;
      *(float *)(lVar15 + 4 + lVar17) = fVar29 * fVar39 + fStack_1d0 + fStack_1c4 * fStack_1f0;
      *(float *)(lVar15 + 8 + lVar17) = fVar36 * fVar39 + fStack_1d4 + fStack_1c4 * fStack_208;
      fVar25 = *(float *)(lVar15 + 0xc + lVar17);
      *(float *)(lVar15 + 0x1c + lVar17) = fVar25;
      *(float *)(lVar15 + 0xc + lVar17) = (1.0 - fVar23 * fVar23) * fStack_1c0 + fVar25;
      lVar20 = param_1[9];
      fVar37 = (float)func_0x0001802b6b90(lVar20 + 0x618,*(int32_t *)(lVar15 + 0x24 + lVar17));
      fVar25 = *(float *)(lVar15 + 0x28 + lVar17);
      if (*(int *)(lVar20 + 0x6c) == 0) {
        fVar37 = fVar37 * fVar25;
      }
      else {
        fVar37 = fVar37 + fVar25;
      }
      *(float *)(lVar15 + 0x2c + lVar17) = fVar37;
      *(float *)(lVar15 + 0x24 + lVar17) =
           fStack_1cc / *(float *)(lVar15 + 0x20 + lVar17) + *(float *)(lVar15 + 0x24 + lVar17);
      fVar25 = *(float *)(param_1 + 2);
      if (fVar34 <= *(float *)(param_1 + 2)) {
        fVar25 = fVar34;
      }
      *(float *)(param_1 + 2) = fVar25;
      fVar25 = *(float *)(lVar15 + 4 + lVar17);
      if (*(float *)((longlong)param_1 + 0x14) <= fVar25) {
        fVar25 = *(float *)((longlong)param_1 + 0x14);
      }
      *(float *)((longlong)param_1 + 0x14) = fVar25;
      fVar25 = *(float *)(lVar15 + 8 + lVar17);
      fVar37 = *(float *)(param_1 + 3);
      if (fVar25 <= *(float *)(param_1 + 3)) {
        fVar37 = fVar25;
      }
      *(float *)(param_1 + 3) = fVar37;
      fVar25 = *(float *)(lVar15 + lVar17);
      if (*(float *)(lVar15 + lVar17) <= *(float *)(param_1 + 4)) {
        fVar25 = *(float *)(param_1 + 4);
      }
      *(float *)(param_1 + 4) = fVar25;
      fVar25 = *(float *)(lVar15 + 4 + lVar17);
      if (fVar25 <= *(float *)((longlong)param_1 + 0x24)) {
        fVar25 = *(float *)((longlong)param_1 + 0x24);
      }
      *(float *)((longlong)param_1 + 0x24) = fVar25;
      fVar25 = *(float *)(lVar15 + 8 + lVar17);
      fVar37 = *(float *)(param_1 + 5);
      if (*(float *)(param_1 + 5) <= fVar25) {
        fVar37 = fVar25;
      }
      *(float *)(param_1 + 5) = fVar37;
      fVar25 = *(float *)(lVar15 + 0x2c + lVar17);
      if (fVar25 <= fVar38) {
        fVar25 = fVar38;
      }
      fVar38 = fVar25;
      if (1.0 < *(float *)(lVar15 + 0x24 + lVar17)) {
        sVar5 = *(short *)(lVar15 + 0x30 + lVar17);
        if (sVar5 != -1) {
          piVar2 = (int *)(param_1[0x26] + (longlong)sVar5 * 0xc);
          *piVar2 = *piVar2 + -1;
        }
        uStack_1e8 = CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8 + -1);
        lVar21 = lVar21 + -1;
        lVar17 = lVar16 + -0x70;
        if (param_1[0x1e] != 0) {
          FUN_1802b0ad0(param_1[0x1e],(longlong)iStack_1d8 * 0x70 + *plVar1);
          lVar20 = param_1[0x1e];
          lVar14 = *(longlong *)(lVar20 + 0x38) - *(longlong *)(lVar20 + 0x30);
          lVar13 = lVar14 >> 0x3f;
          if (lVar14 / 0x88 + lVar13 != lVar13) {
            FUN_1802b09d0(lVar20,*(int32_t *)(lVar15 + 0x58 + *plVar1));
          }
        }
        lVar20 = *plVar1;
        *(int32_t *)(lVar15 + lVar20) = *(int32_t *)(lVar17 + lVar20);
        *(int32_t *)(lVar15 + 4 + lVar20) = *(int32_t *)(lVar16 + -0x6c + lVar20);
        *(int32_t *)(lVar15 + 8 + lVar20) = *(int32_t *)(lVar16 + -0x68 + lVar20);
        *(int32_t *)(lVar15 + 0xc + lVar20) = *(int32_t *)(lVar16 + -100 + lVar20);
        *(int32_t *)(lVar15 + 0x10 + lVar20) = *(int32_t *)(lVar16 + -0x60 + lVar20);
        *(int32_t *)(lVar15 + 0x14 + lVar20) = *(int32_t *)(lVar16 + -0x5c + lVar20);
        *(int32_t *)(lVar15 + 0x18 + lVar20) = *(int32_t *)(lVar16 + -0x58 + lVar20);
        *(int32_t *)(lVar15 + 0x1c + lVar20) = *(int32_t *)(lVar16 + -0x54 + lVar20);
        *(int32_t *)(lVar15 + 0x20 + lVar20) = *(int32_t *)(lVar16 + -0x50 + lVar20);
        *(int32_t *)(lVar15 + 0x24 + lVar20) = *(int32_t *)(lVar16 + -0x4c + lVar20);
        *(int32_t *)(lVar15 + 0x28 + lVar20) = *(int32_t *)(lVar16 + -0x48 + lVar20);
        *(int32_t *)(lVar15 + 0x2c + lVar20) = *(int32_t *)(lVar16 + -0x44 + lVar20);
        *(int16_t *)(lVar15 + 0x30 + lVar20) = *(int16_t *)(lVar16 + -0x40 + lVar20);
        *(int16_t *)(lVar15 + 0x32 + lVar20) = *(int16_t *)(lVar16 + -0x3e + lVar20);
        *(int32_t *)(lVar15 + 0x34 + lVar20) = *(int32_t *)(lVar16 + -0x3c + lVar20);
        *(int32_t *)(lVar15 + 0x38 + lVar20) = *(int32_t *)(lVar16 + -0x38 + lVar20);
        *(int32_t *)(lVar15 + 0x3c + lVar20) = *(int32_t *)(lVar16 + -0x34 + lVar20);
        *(int32_t *)(lVar15 + 0x40 + lVar20) = *(int32_t *)(lVar16 + -0x30 + lVar20);
        *(int32_t *)(lVar15 + 0x44 + lVar20) = *(int32_t *)(lVar16 + -0x2c + lVar20);
        *(int32_t *)(lVar15 + 0x48 + lVar20) = *(int32_t *)(lVar16 + -0x28 + lVar20);
        *(int32_t *)(lVar15 + 0x4c + lVar20) = *(int32_t *)(lVar16 + -0x24 + lVar20);
        *(int16_t *)(lVar15 + 0x50 + lVar20) = *(int16_t *)(lVar16 + -0x20 + lVar20);
        *(int16_t *)(lVar15 + 0x52 + lVar20) = *(int16_t *)(lVar16 + -0x1e + lVar20);
        *(int8_t *)(lVar15 + 0x54 + lVar20) = *(int8_t *)(lVar16 + -0x1c + lVar20);
        *(int8_t *)(lVar15 + 0x55 + lVar20) = *(int8_t *)(lVar16 + -0x1b + lVar20);
        *(int8_t *)(lVar15 + 0x56 + lVar20) = *(int8_t *)(lVar16 + -0x1a + lVar20);
        *(int8_t *)(lVar15 + 0x57 + lVar20) = *(int8_t *)(lVar16 + -0x19 + lVar20);
        *(int32_t *)(lVar15 + 0x58 + lVar20) = *(int32_t *)(lVar16 + -0x18 + lVar20);
        *(int32_t *)(lVar15 + 0x5c + lVar20) = *(int32_t *)(lVar16 + -0x14 + lVar20);
        *(int32_t *)(lVar15 + 0x60 + lVar20) = *(int32_t *)(lVar16 + -0x10 + lVar20);
        *(int32_t *)(lVar15 + 100 + lVar20) = *(int32_t *)(lVar16 + -0xc + lVar20);
        *(int32_t *)(lVar15 + 0x68 + lVar20) = *(int32_t *)(lVar16 + -8 + lVar20);
        *(int32_t *)(lVar15 + 0x6c + lVar20) = *(int32_t *)(lVar16 + -4 + lVar20);
      }
      else {
        iStack_1d8 = iStack_1d8 + 1;
        lVar22 = lVar22 + 1;
        lVar15 = lVar15 + 0x70;
        lVar17 = lVar16;
      }
      lVar16 = lVar17;
    } while (lVar22 < lVar21);
    cVar4 = *(char *)((longlong)param_1 + 0xa1);
    iVar19 = (int)uStack_1e8;
  }
  fVar38 = fVar38 * 0.5;
  fVar35 = *(float *)(param_1 + 2) - fVar38;
  fVar25 = *(float *)((longlong)param_1 + 0x14) - fVar38;
  fVar37 = *(float *)(param_1 + 3) - fVar38;
  *(float *)(param_1 + 2) = fVar35;
  *(float *)((longlong)param_1 + 0x14) = fVar25;
  *(float *)(param_1 + 3) = fVar37;
  fVar28 = fVar38 + *(float *)(param_1 + 4);
  fVar34 = fVar38 + *(float *)((longlong)param_1 + 0x24);
  fVar38 = fVar38 + *(float *)(param_1 + 5);
  *(float *)(param_1 + 4) = fVar28;
  *(float *)((longlong)param_1 + 0x24) = fVar34;
  *(float *)(param_1 + 5) = fVar38;
  if (cVar4 != '\0') {
    afStack_158[0] = fVar35;
    pfVar9 = afStack_158 + 6;
    afStack_158[8] = fVar35;
    lVar21 = 4;
    fStack_118 = fVar35;
    fStack_f8 = fVar35;
    param_1[2] = 0x4cbebc204cbebc20;
    param_1[3] = 0x7f7fffff4cbebc20;
    *(int32_t *)(param_1 + 8) = 0;
    afStack_158[1] = fVar25;
    fStack_114 = fVar25;
    fStack_104 = fVar25;
    fStack_e4 = fVar25;
    param_1[6] = 0;
    param_1[7] = 0x7f7fffff00000000;
    afStack_158[2] = fVar37;
    afStack_158[4] = fVar28;
    afStack_158[5] = fVar34;
    afStack_158[6] = fVar38;
    afStack_158[9] = fVar34;
    afStack_158[10] = fVar37;
    fStack_128 = fVar28;
    fStack_124 = fVar34;
    fStack_120 = fVar37;
    fStack_110 = fVar38;
    fStack_108 = fVar28;
    fStack_100 = fVar38;
    fStack_f4 = fVar34;
    fStack_f0 = fVar38;
    fStack_e8 = fVar28;
    fStack_e0 = fVar37;
    param_1[4] = -0x334143df334143e0;
    param_1[5] = 0x7f7fffffccbebc20;
    do {
      fVar38 = pfVar9[-6];
      fVar28 = *(float *)((longlong)param_1 + 0xb4);
      fVar34 = *(float *)(param_1 + 0x17);
      fVar33 = *(float *)((longlong)param_1 + 0xbc);
      fVar31 = *(float *)((longlong)param_1 + 0xc4);
      fVar32 = *(float *)(param_1 + 0x19);
      fVar23 = *(float *)((longlong)param_1 + 0xcc);
      fVar35 = pfVar9[-5];
      fVar25 = pfVar9[-4];
      fVar29 = *(float *)((longlong)param_1 + 0xd4);
      fVar36 = *(float *)(param_1 + 0x1b);
      fVar39 = *(float *)((longlong)param_1 + 0xdc);
      fVar26 = *(float *)((longlong)param_1 + 0xe4);
      fVar24 = *(float *)(param_1 + 0x1d);
      fVar30 = *(float *)((longlong)param_1 + 0xec);
      fVar27 = *(float *)(param_1 + 0x16) * fVar38 + *(float *)(param_1 + 0x18) * fVar35 +
               *(float *)(param_1 + 0x1a) * fVar25 + *(float *)(param_1 + 0x1c);
      fVar37 = *(float *)(param_1 + 4);
      pfVar9[-6] = fVar27;
      pfVar9[-5] = fVar28 * fVar38 + fVar31 * fVar35 + fVar29 * fVar25 + fVar26;
      pfVar9[-4] = fVar34 * fVar38 + fVar32 * fVar35 + fVar36 * fVar25 + fVar24;
      pfVar9[-3] = fVar33 * fVar38 + fVar23 * fVar35 + fVar39 * fVar25 + fVar30;
      fVar38 = fVar27;
      if (fVar27 < fVar37) {
        fVar38 = fVar37;
      }
      fVar25 = pfVar9[-5];
      fVar35 = fVar25;
      if (fVar25 < *(float *)((longlong)param_1 + 0x24)) {
        fVar35 = *(float *)((longlong)param_1 + 0x24);
      }
      uStack_1e8 = CONCAT44(fVar35,fVar38);
      fStack_1f8 = pfVar9[-4];
      fStack_1e0 = fStack_1f8;
      if (fStack_1f8 < *(float *)(param_1 + 5)) {
        fStack_1e0 = *(float *)(param_1 + 5);
      }
      param_1[4] = uStack_1e8;
      param_1[5] = CONCAT44(uStack_1dc,fStack_1e0);
      if (*(float *)(param_1 + 2) < fVar27) {
        fVar27 = *(float *)(param_1 + 2);
      }
      if (*(float *)((longlong)param_1 + 0x14) < fVar25) {
        fVar25 = *(float *)((longlong)param_1 + 0x14);
      }
      uStack_200 = CONCAT44(fVar25,fVar27);
      if (*(float *)(param_1 + 3) < fStack_1f8) {
        fStack_1f8 = *(float *)(param_1 + 3);
      }
      param_1[2] = uStack_200;
      param_1[3] = CONCAT44(uStack_1f4,fStack_1f8);
      fVar38 = pfVar9[-2];
      fVar28 = *(float *)((longlong)param_1 + 0xb4);
      fVar34 = *(float *)(param_1 + 0x17);
      fVar33 = *(float *)((longlong)param_1 + 0xbc);
      fVar31 = *(float *)((longlong)param_1 + 0xc4);
      fVar32 = *(float *)(param_1 + 0x19);
      fVar23 = *(float *)((longlong)param_1 + 0xcc);
      fVar35 = pfVar9[-1];
      fVar25 = *pfVar9;
      fVar29 = *(float *)((longlong)param_1 + 0xd4);
      fVar36 = *(float *)(param_1 + 0x1b);
      fVar39 = *(float *)((longlong)param_1 + 0xdc);
      fVar26 = *(float *)((longlong)param_1 + 0xe4);
      fVar24 = *(float *)(param_1 + 0x1d);
      fVar30 = *(float *)((longlong)param_1 + 0xec);
      fVar27 = *(float *)(param_1 + 0x16) * fVar38 + *(float *)(param_1 + 0x18) * fVar35 +
               *(float *)(param_1 + 0x1a) * fVar25 + *(float *)(param_1 + 0x1c);
      fVar37 = *(float *)(param_1 + 4);
      pfVar9[-2] = fVar27;
      pfVar9[-1] = fVar28 * fVar38 + fVar31 * fVar35 + fVar29 * fVar25 + fVar26;
      *pfVar9 = fVar34 * fVar38 + fVar32 * fVar35 + fVar36 * fVar25 + fVar24;
      pfVar9[1] = fVar33 * fVar38 + fVar23 * fVar35 + fVar39 * fVar25 + fVar30;
      fVar38 = fVar27;
      if (fVar27 < fVar37) {
        fVar38 = fVar37;
      }
      fVar25 = pfVar9[-1];
      fVar35 = fVar25;
      if (fVar25 < *(float *)((longlong)param_1 + 0x24)) {
        fVar35 = *(float *)((longlong)param_1 + 0x24);
      }
      uStack_1e8 = CONCAT44(fVar35,fVar38);
      fStack_1f8 = *pfVar9;
      fStack_1e0 = fStack_1f8;
      if (fStack_1f8 < *(float *)(param_1 + 5)) {
        fStack_1e0 = *(float *)(param_1 + 5);
      }
      param_1[4] = uStack_1e8;
      param_1[5] = CONCAT44(uStack_1dc,fStack_1e0);
      if (*(float *)(param_1 + 2) < fVar27) {
        fVar27 = *(float *)(param_1 + 2);
      }
      if (*(float *)((longlong)param_1 + 0x14) < fVar25) {
        fVar25 = *(float *)((longlong)param_1 + 0x14);
      }
      uStack_200 = CONCAT44(fVar25,fVar27);
      if (*(float *)(param_1 + 3) < fStack_1f8) {
        fStack_1f8 = *(float *)(param_1 + 3);
      }
      pfVar9 = pfVar9 + 8;
      param_1[2] = uStack_200;
      param_1[3] = CONCAT44(uStack_1f4,fStack_1f8);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  FUN_1800b9f60(param_1 + 2);
  uVar18 = (ulonglong)iVar19;
  uVar8 = (param_1[0xc] - *plVar1) / 0x70;
  if (uVar8 < uVar18) {
    FUN_1802beaf0(plVar1,uVar18 - uVar8);
  }
  else {
    param_1[0xc] = uVar18 * 0x70 + *plVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




