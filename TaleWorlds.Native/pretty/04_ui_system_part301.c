#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part301.c - 4 个函数

// 函数: void FUN_180833b60(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180833b60(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
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
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iVar36;
  int8_t auVar35 [16];
  int iVar38;
  longlong lVar37;
  int iVar40;
  int8_t auVar39 [16];
  int iVar41;
  int8_t auStack_a8 [8];
  uint64_t uStack_a0;
  uint64_t uStack_98;
  ulonglong auStack_78 [14];
  
  puVar25 = auStack_78;
  auStack_78[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  if ((((ulonglong)param_1 & 0xf) != 0) && (param_2 != 0)) {
    uVar27 = *param_4;
    iVar26 = (int)*param_5;
    uVar28 = uVar27;
    uVar29 = uVar27;
    uVar30 = uVar27;
    do {
      if (param_2 == 0) break;
      param_2 = param_2 - 1;
      uVar24 = (ulonglong)(param_4[1] << 3);
      pfVar2 = (float *)(param_3 + 0x10 + uVar24 * 4);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + 0x20 + uVar24 * 4);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      pfVar2 = (float *)(param_3 + uVar24 * 4);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar4 = (float *)(param_3 + 0x30 + uVar24 * 4);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      fVar31 = (float)(uVar27 >> 1) * 4.656613e-10;
      fVar32 = (float)(uVar28 >> 1) * 4.656613e-10;
      fVar33 = (float)(uVar29 >> 1) * 4.656613e-10;
      fVar34 = (float)(uVar30 >> 1) * 4.656613e-10;
      pfVar4 = (float *)(param_3 + uVar24 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      *param_1 = (*pfVar3 - *pfVar2) * fVar31 + *pfVar4;
      param_1[1] = (fVar10 - fVar13) * fVar32 + fVar20;
      param_1[2] = (fVar11 - fVar14) * fVar33 + fVar21;
      param_1[3] = (fVar12 - fVar15) * fVar34 + fVar22;
      param_1[4] = (fVar16 - fVar6) * fVar31 + fVar6;
      param_1[5] = (fVar17 - fVar7) * fVar32 + fVar7;
      param_1[6] = (fVar18 - fVar8) * fVar33 + fVar8;
      param_1[7] = (fVar19 - fVar9) * fVar34 + fVar9;
      param_1 = param_1 + 8;
      *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
      uVar27 = iVar26 + uVar27;
      uVar28 = iVar26 + uVar28;
      uVar29 = iVar26 + uVar29;
      uVar30 = iVar26 + uVar30;
    } while (((ulonglong)param_1 & 0xf) != 0);
  }
  iVar26 = (int)param_2 >> 2;
  if (iVar26 != 0) {
    lVar37 = *param_5;
    lVar5 = *(longlong *)param_4;
    lVar1 = lVar37 * 4;
    iVar36 = (int)lVar37;
    iVar23 = iVar36 * 4;
    uVar27 = (uint)lVar5;
    auVar35._8_8_ = lVar37 + lVar5;
    auVar35._0_8_ = lVar5;
    auVar39._0_8_ = lVar37 * 2 + lVar5;
    auVar39._8_8_ = lVar37 * 3 + lVar5;
    puVar25 = (ulonglong *)auStack_a8;
    uVar28 = iVar36 + uVar27;
    uVar29 = iVar36 * 2 + uVar27;
    uVar30 = iVar36 * 3 + uVar27;
    do {
      iVar40 = auVar39._4_4_;
      iVar41 = auVar39._12_4_;
      uStack_98 = CONCAT44(iVar41,iVar40);
      lVar37 = auVar39._8_8_;
      auVar39._0_8_ = auVar39._0_8_ + lVar1;
      auVar39._8_8_ = lVar37 + lVar1;
      iVar36 = auVar35._4_4_;
      iVar38 = auVar35._12_4_;
      uStack_a0 = CONCAT44(iVar38,iVar36);
      lVar37 = auVar35._8_8_;
      auVar35._0_8_ = auVar35._0_8_ + lVar1;
      auVar35._8_8_ = lVar37 + lVar1;
      uVar24 = (ulonglong)(uint)(iVar36 << 3);
      pfVar2 = (float *)(param_3 + 0x10 + uVar24 * 4);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + 0x20 + uVar24 * 4);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      pfVar2 = (float *)(param_3 + uVar24 * 4);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar4 = (float *)(param_3 + 0x30 + uVar24 * 4);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      fVar31 = (float)(uVar27 >> 1) * 4.656613e-10;
      fVar32 = (float)(uVar28 >> 1) * 4.656613e-10;
      fVar33 = (float)(uVar29 >> 1) * 4.656613e-10;
      fVar34 = (float)(uVar30 >> 1) * 4.656613e-10;
      pfVar4 = (float *)(param_3 + uVar24 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      *param_1 = (*pfVar3 - *pfVar2) * fVar31 + *pfVar4;
      param_1[1] = (fVar10 - fVar13) * fVar31 + fVar20;
      param_1[2] = (fVar11 - fVar14) * fVar31 + fVar21;
      param_1[3] = (fVar12 - fVar15) * fVar31 + fVar22;
      param_1[4] = (fVar16 - fVar6) * fVar31 + fVar6;
      param_1[5] = (fVar17 - fVar7) * fVar31 + fVar7;
      param_1[6] = (fVar18 - fVar8) * fVar31 + fVar8;
      param_1[7] = (fVar19 - fVar9) * fVar31 + fVar9;
      uVar24 = (ulonglong)(uint)(iVar38 << 3);
      pfVar2 = (float *)(param_3 + 0x10 + uVar24 * 4);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + 0x20 + uVar24 * 4);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      pfVar2 = (float *)(param_3 + uVar24 * 4);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar4 = (float *)(param_3 + 0x30 + uVar24 * 4);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      pfVar4 = (float *)(param_3 + uVar24 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      param_1[8] = (*pfVar3 - *pfVar2) * fVar32 + *pfVar4;
      param_1[9] = (fVar10 - fVar13) * fVar32 + fVar20;
      param_1[10] = (fVar11 - fVar14) * fVar32 + fVar21;
      param_1[0xb] = (fVar12 - fVar15) * fVar32 + fVar22;
      param_1[0xc] = (fVar16 - fVar6) * fVar32 + fVar6;
      param_1[0xd] = (fVar17 - fVar7) * fVar32 + fVar7;
      param_1[0xe] = (fVar18 - fVar8) * fVar32 + fVar8;
      param_1[0xf] = (fVar19 - fVar9) * fVar32 + fVar9;
      uVar24 = (ulonglong)(uint)(iVar40 << 3);
      pfVar2 = (float *)(param_3 + 0x10 + uVar24 * 4);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + 0x20 + uVar24 * 4);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      pfVar2 = (float *)(param_3 + uVar24 * 4);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar4 = (float *)(param_3 + 0x30 + uVar24 * 4);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      pfVar4 = (float *)(param_3 + uVar24 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      param_1[0x10] = (*pfVar3 - *pfVar2) * fVar33 + *pfVar4;
      param_1[0x11] = (fVar10 - fVar13) * fVar33 + fVar20;
      param_1[0x12] = (fVar11 - fVar14) * fVar33 + fVar21;
      param_1[0x13] = (fVar12 - fVar15) * fVar33 + fVar22;
      param_1[0x14] = (fVar16 - fVar6) * fVar33 + fVar6;
      param_1[0x15] = (fVar17 - fVar7) * fVar33 + fVar7;
      param_1[0x16] = (fVar18 - fVar8) * fVar33 + fVar8;
      param_1[0x17] = (fVar19 - fVar9) * fVar33 + fVar9;
      uVar24 = (ulonglong)(uint)(iVar41 << 3);
      pfVar2 = (float *)(param_3 + 0x10 + uVar24 * 4);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + 0x20 + uVar24 * 4);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      pfVar2 = (float *)(param_3 + uVar24 * 4);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar4 = (float *)(param_3 + 0x30 + uVar24 * 4);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      pfVar4 = (float *)(param_3 + uVar24 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      param_1[0x18] = (*pfVar3 - *pfVar2) * fVar34 + *pfVar4;
      param_1[0x19] = (fVar10 - fVar13) * fVar34 + fVar20;
      param_1[0x1a] = (fVar11 - fVar14) * fVar34 + fVar21;
      param_1[0x1b] = (fVar12 - fVar15) * fVar34 + fVar22;
      param_1[0x1c] = (fVar16 - fVar6) * fVar34 + fVar6;
      param_1[0x1d] = (fVar17 - fVar7) * fVar34 + fVar7;
      param_1[0x1e] = (fVar18 - fVar8) * fVar34 + fVar8;
      param_1[0x1f] = (fVar19 - fVar9) * fVar34 + fVar9;
      param_1 = param_1 + 0x20;
      iVar26 = iVar26 + -1;
      uVar27 = uVar27 + iVar23;
      uVar28 = uVar28 + iVar23;
      uVar29 = uVar29 + iVar23;
      uVar30 = uVar30 + iVar23;
    } while (iVar26 != 0);
    *(longlong *)param_4 = auVar35._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    uVar27 = *param_4;
    iVar26 = (int)*param_5;
    uVar28 = uVar27;
    uVar29 = uVar27;
    uVar30 = uVar27;
    do {
      uVar24 = (ulonglong)(param_4[1] << 3);
      pfVar2 = (float *)(param_3 + 0x10 + uVar24 * 4);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + 0x20 + uVar24 * 4);
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
      fVar12 = pfVar3[3];
      pfVar2 = (float *)(param_3 + uVar24 * 4);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar4 = (float *)(param_3 + 0x30 + uVar24 * 4);
      fVar16 = *pfVar4;
      fVar17 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      fVar31 = (float)(uVar27 >> 1) * 4.656613e-10;
      fVar32 = (float)(uVar28 >> 1) * 4.656613e-10;
      fVar33 = (float)(uVar29 >> 1) * 4.656613e-10;
      fVar34 = (float)(uVar30 >> 1) * 4.656613e-10;
      pfVar4 = (float *)(param_3 + uVar24 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      *param_1 = (*pfVar3 - *pfVar2) * fVar31 + *pfVar4;
      param_1[1] = (fVar10 - fVar13) * fVar32 + fVar20;
      param_1[2] = (fVar11 - fVar14) * fVar33 + fVar21;
      param_1[3] = (fVar12 - fVar15) * fVar34 + fVar22;
      param_1[4] = (fVar16 - fVar6) * fVar31 + fVar6;
      param_1[5] = (fVar17 - fVar7) * fVar32 + fVar7;
      param_1[6] = (fVar18 - fVar8) * fVar33 + fVar8;
      param_1[7] = (fVar19 - fVar9) * fVar34 + fVar9;
      param_1 = param_1 + 8;
      *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
      uVar27 = iVar26 + uVar27;
      uVar28 = iVar26 + uVar28;
      uVar29 = iVar26 + uVar29;
      uVar30 = iVar26 + uVar30;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar25 + -8) = 0x180833ede;
  FUN_1808fc050(auStack_78[0] ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180833f20(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180833f20(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  ulonglong *puVar16;
  int iVar17;
  uint uVar19;
  int8_t auVar18 [16];
  uint uVar21;
  longlong lVar20;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar26;
  int8_t auVar25 [16];
  uint uVar27;
  int8_t auStack_a8 [8];
  uint64_t uStack_a0;
  uint64_t uStack_98;
  ulonglong auStack_78 [14];
  
  puVar16 = auStack_78;
  auStack_78[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  uVar6 = (ulonglong)param_1 & 0xf;
  for (; (uVar6 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    fVar4 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    *param_1 = (*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4) - fVar4) *
               (float)(*param_4 >> 1) * 4.656613e-10 + fVar4;
    param_1 = param_1 + 1;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar6 = (ulonglong)param_1 & 0xf;
  }
  iVar17 = (int)param_2 >> 2;
  if (iVar17 != 0) {
    lVar20 = *param_5;
    lVar5 = *(longlong *)param_4;
    lVar3 = lVar20 * 4;
    iVar7 = (int)lVar20;
    iVar14 = iVar7 * 4;
    uVar15 = (uint)lVar5;
    auVar18._8_8_ = lVar20 + lVar5;
    auVar18._0_8_ = lVar5;
    auVar25._0_8_ = lVar20 * 2 + lVar5;
    auVar25._8_8_ = lVar20 * 3 + lVar5;
    puVar16 = (ulonglong *)auStack_a8;
    uVar22 = iVar7 + uVar15;
    uVar23 = iVar7 * 2 + uVar15;
    uVar24 = iVar7 * 3 + uVar15;
    do {
      uVar26 = auVar25._4_4_;
      uVar27 = auVar25._12_4_;
      uStack_98 = CONCAT44(uVar27,uVar26);
      lVar20 = auVar25._8_8_;
      auVar25._0_8_ = auVar25._0_8_ + lVar3;
      auVar25._8_8_ = lVar20 + lVar3;
      uVar19 = auVar18._4_4_;
      uVar21 = auVar18._12_4_;
      uStack_a0 = CONCAT44(uVar21,uVar19);
      lVar20 = auVar18._8_8_;
      auVar18._0_8_ = auVar18._0_8_ + lVar3;
      auVar18._8_8_ = lVar20 + lVar3;
      pfVar1 = (float *)(param_3 + (ulonglong)uVar19 * 4);
      fVar4 = *pfVar1;
      pfVar2 = (float *)(param_3 + (ulonglong)uVar21 * 4);
      fVar8 = *pfVar2;
      fVar9 = pfVar2[1];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar26 * 4);
      fVar10 = *pfVar2;
      fVar11 = pfVar2[1];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar27 * 4);
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      *param_1 = (float)(uVar15 >> 1) * 4.656613e-10 * (pfVar1[1] - fVar4) + fVar4;
      param_1[1] = (float)(uVar22 >> 1) * 4.656613e-10 * (fVar9 - fVar8) + fVar8;
      param_1[2] = (float)(uVar23 >> 1) * 4.656613e-10 * (fVar11 - fVar10) + fVar10;
      param_1[3] = (float)(uVar24 >> 1) * 4.656613e-10 * (fVar13 - fVar12) + fVar12;
      param_1 = param_1 + 4;
      iVar17 = iVar17 + -1;
      uVar15 = uVar15 + iVar14;
      uVar22 = uVar22 + iVar14;
      uVar23 = uVar23 + iVar14;
      uVar24 = uVar24 + iVar14;
    } while (iVar17 != 0);
    *(longlong *)param_4 = auVar18._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    fVar4 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    *param_1 = (*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4) - fVar4) *
               (float)(*param_4 >> 1) * 4.656613e-10 + fVar4;
    param_1 = param_1 + 1;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar16 + -8) = 0x18083415e;
  FUN_1808fc050(auStack_78[0] ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808341a0(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_1808341a0(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar24;
  int8_t auVar23 [16];
  int iVar26;
  longlong lVar25;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar31;
  int8_t auVar30 [16];
  int iVar32;
  float fVar33;
  int8_t auStack_98 [24];
  uint64_t uStack_80;
  uint64_t uStack_78;
  ulonglong auStack_68 [12];
  
  puVar17 = auStack_68;
  auStack_68[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uVar15 = (ulonglong)param_1 & 0xf;
  for (; (uVar15 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    uVar16 = param_4[1] * 4;
    fVar5 = *(float *)(param_3 + (ulonglong)(uVar16 + 1) * 4);
    fVar6 = *(float *)(param_3 + (ulonglong)(uVar16 + 2) * 4);
    fVar7 = *(float *)(param_3 + (ulonglong)(uVar16 + 3) * 4);
    fVar8 = *(float *)(param_3 + (ulonglong)(uVar16 + 6) * 4);
    fVar33 = (float)(*param_4 >> 1) * 4.656613e-10;
    fVar9 = *(float *)(param_3 + (ulonglong)(uVar16 + 7) * 4);
    fVar10 = *(float *)(param_3 + (ulonglong)(uVar16 + 4) * 4);
    fVar11 = *(float *)(param_3 + (ulonglong)uVar16 * 4);
    fVar12 = *(float *)(param_3 + (ulonglong)uVar16 * 4);
    param_1[1] = (*(float *)(param_3 + (ulonglong)(uVar16 + 5) * 4) - fVar5) * fVar33 + fVar5;
    param_1[2] = (fVar8 - fVar6) * fVar33 + fVar6;
    *param_1 = (fVar10 - fVar11) * fVar33 + fVar12;
    param_1[3] = (fVar9 - fVar7) * fVar33 + fVar7;
    param_1 = param_1 + 4;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar15 = (ulonglong)param_1 & 0xf;
  }
  iVar18 = (int)param_2 >> 2;
  if (iVar18 != 0) {
    lVar25 = *param_5;
    lVar13 = *(longlong *)param_4;
    lVar3 = lVar25 * 4;
    iVar24 = (int)lVar25;
    iVar14 = iVar24 * 4;
    uVar16 = (uint)lVar13;
    auVar23._8_8_ = lVar25 + lVar13;
    auVar23._0_8_ = lVar13;
    auVar30._0_8_ = lVar25 * 2 + lVar13;
    auVar30._8_8_ = lVar25 * 3 + lVar13;
    puVar17 = (ulonglong *)auStack_98;
    uVar27 = iVar24 + uVar16;
    uVar28 = iVar24 * 2 + uVar16;
    uVar29 = iVar24 * 3 + uVar16;
    do {
      iVar31 = auVar30._4_4_;
      iVar32 = auVar30._12_4_;
      uStack_78 = CONCAT44(iVar32,iVar31);
      lVar25 = auVar30._8_8_;
      auVar30._0_8_ = auVar30._0_8_ + lVar3;
      auVar30._8_8_ = lVar25 + lVar3;
      iVar24 = auVar23._4_4_;
      iVar26 = auVar23._12_4_;
      uStack_80 = CONCAT44(iVar26,iVar24);
      lVar25 = auVar23._8_8_;
      auVar23._0_8_ = auVar23._0_8_ + lVar3;
      auVar23._8_8_ = lVar25 + lVar3;
      uVar15 = (ulonglong)(uint)(iVar24 << 2);
      pfVar4 = (float *)(param_3 + 0x10 + uVar15 * 4);
      fVar5 = pfVar4[1];
      fVar6 = pfVar4[2];
      fVar7 = pfVar4[3];
      pfVar1 = (float *)(param_3 + uVar15 * 4);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      fVar19 = (float)(uVar16 >> 1) * 4.656613e-10;
      fVar20 = (float)(uVar27 >> 1) * 4.656613e-10;
      fVar21 = (float)(uVar28 >> 1) * 4.656613e-10;
      fVar22 = (float)(uVar29 >> 1) * 4.656613e-10;
      pfVar2 = (float *)(param_3 + uVar15 * 4);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar33 = pfVar2[3];
      *param_1 = (*pfVar4 - *pfVar1) * fVar19 + *pfVar2;
      param_1[1] = (fVar5 - fVar8) * fVar19 + fVar11;
      param_1[2] = (fVar6 - fVar9) * fVar19 + fVar12;
      param_1[3] = (fVar7 - fVar10) * fVar19 + fVar33;
      uVar15 = (ulonglong)(uint)(iVar26 << 2);
      pfVar4 = (float *)(param_3 + 0x10 + uVar15 * 4);
      fVar5 = pfVar4[1];
      fVar6 = pfVar4[2];
      fVar7 = pfVar4[3];
      pfVar1 = (float *)(param_3 + uVar15 * 4);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar15 * 4);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar33 = pfVar2[3];
      param_1[4] = (*pfVar4 - *pfVar1) * fVar20 + *pfVar2;
      param_1[5] = (fVar5 - fVar8) * fVar20 + fVar11;
      param_1[6] = (fVar6 - fVar9) * fVar20 + fVar12;
      param_1[7] = (fVar7 - fVar10) * fVar20 + fVar33;
      uVar15 = (ulonglong)(uint)(iVar31 << 2);
      pfVar4 = (float *)(param_3 + 0x10 + uVar15 * 4);
      fVar5 = pfVar4[1];
      fVar6 = pfVar4[2];
      fVar7 = pfVar4[3];
      pfVar1 = (float *)(param_3 + uVar15 * 4);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar15 * 4);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar33 = pfVar2[3];
      param_1[8] = (*pfVar4 - *pfVar1) * fVar21 + *pfVar2;
      param_1[9] = (fVar5 - fVar8) * fVar21 + fVar11;
      param_1[10] = (fVar6 - fVar9) * fVar21 + fVar12;
      param_1[0xb] = (fVar7 - fVar10) * fVar21 + fVar33;
      uVar15 = (ulonglong)(uint)(iVar32 << 2);
      pfVar4 = (float *)(param_3 + 0x10 + uVar15 * 4);
      fVar5 = pfVar4[1];
      fVar6 = pfVar4[2];
      fVar7 = pfVar4[3];
      pfVar1 = (float *)(param_3 + uVar15 * 4);
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar15 * 4);
      fVar11 = pfVar2[1];
      fVar12 = pfVar2[2];
      fVar33 = pfVar2[3];
      param_1[0xc] = (*pfVar4 - *pfVar1) * fVar22 + *pfVar2;
      param_1[0xd] = (fVar5 - fVar8) * fVar22 + fVar11;
      param_1[0xe] = (fVar6 - fVar9) * fVar22 + fVar12;
      param_1[0xf] = (fVar7 - fVar10) * fVar22 + fVar33;
      param_1 = param_1 + 0x10;
      iVar18 = iVar18 + -1;
      uVar16 = uVar16 + iVar14;
      uVar27 = uVar27 + iVar14;
      uVar28 = uVar28 + iVar14;
      uVar29 = uVar29 + iVar14;
    } while (iVar18 != 0);
    *(longlong *)param_4 = auVar23._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    param_1 = param_1 + 2;
    do {
      uVar16 = param_4[1] * 4;
      fVar5 = *(float *)(param_3 + (ulonglong)(uVar16 + 1) * 4);
      fVar6 = *(float *)(param_3 + (ulonglong)(uVar16 + 2) * 4);
      fVar7 = *(float *)(param_3 + (ulonglong)(uVar16 + 3) * 4);
      fVar8 = *(float *)(param_3 + (ulonglong)(uVar16 + 6) * 4);
      fVar33 = (float)(*param_4 >> 1) * 4.656613e-10;
      fVar9 = *(float *)(param_3 + (ulonglong)(uVar16 + 7) * 4);
      fVar10 = *(float *)(param_3 + (ulonglong)(uVar16 + 4) * 4);
      fVar11 = *(float *)(param_3 + (ulonglong)uVar16 * 4);
      fVar12 = *(float *)(param_3 + (ulonglong)uVar16 * 4);
      param_1[-1] = (*(float *)(param_3 + (ulonglong)(uVar16 + 5) * 4) - fVar5) * fVar33 + fVar5;
      *param_1 = (fVar8 - fVar6) * fVar33 + fVar6;
      param_1[-2] = (fVar10 - fVar11) * fVar33 + fVar12;
      param_1[1] = (fVar9 - fVar7) * fVar33 + fVar7;
      param_1 = param_1 + 4;
      *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar17 + -8) = 0x18083453b;
  FUN_1808fc050(auStack_68[0] ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180834570(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180834570(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
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
  int iVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iVar29;
  int8_t auVar28 [16];
  int iVar31;
  longlong lVar30;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar36;
  int8_t auVar35 [16];
  int iVar37;
  int8_t auStack_c8 [8];
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  ulonglong auStack_98 [18];
  
  puVar21 = auStack_98;
  auStack_98[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uVar7 = (ulonglong)param_1 & 0xf;
  for (; (uVar7 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    uVar20 = param_4[1] * 2;
    fVar4 = *(float *)(param_3 + (ulonglong)(uVar20 + 1) * 4);
    fVar5 = *(float *)(param_3 + (ulonglong)(uVar20 + 3) * 4);
    fVar23 = (float)(*param_4 >> 1) * 4.656613e-10;
    *param_1 = (*(float *)(param_3 + (ulonglong)(uVar20 + 2) * 4) -
               *(float *)(param_3 + (ulonglong)uVar20 * 4)) * fVar23 +
               *(float *)(param_3 + (ulonglong)uVar20 * 4);
    param_1[1] = (fVar5 - fVar4) * fVar23 + fVar4;
    param_1 = param_1 + 2;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar7 = (ulonglong)param_1 & 0xf;
  }
  iVar22 = (int)param_2 >> 2;
  if (iVar22 != 0) {
    lVar30 = *param_5;
    lVar6 = *(longlong *)param_4;
    lVar3 = lVar30 * 4;
    iVar29 = (int)lVar30;
    iVar19 = iVar29 * 4;
    uVar20 = (uint)lVar6;
    auVar28._8_8_ = lVar30 + lVar6;
    auVar28._0_8_ = lVar6;
    auVar35._0_8_ = lVar30 * 2 + lVar6;
    auVar35._8_8_ = lVar30 * 3 + lVar6;
    puVar21 = (ulonglong *)auStack_c8;
    uVar32 = iVar29 + uVar20;
    uVar33 = iVar29 * 2 + uVar20;
    uVar34 = iVar29 * 3 + uVar20;
    do {
      iVar36 = auVar35._4_4_;
      iVar37 = auVar35._12_4_;
      uStack_b8 = CONCAT44(iVar37,iVar36);
      lVar30 = auVar35._8_8_;
      auVar35._0_8_ = auVar35._0_8_ + lVar3;
      auVar35._8_8_ = lVar30 + lVar3;
      iVar29 = auVar28._4_4_;
      iVar31 = auVar28._12_4_;
      uStack_c0 = CONCAT44(iVar31,iVar29);
      lVar30 = auVar28._8_8_;
      auVar28._0_8_ = auVar28._0_8_ + lVar3;
      auVar28._8_8_ = lVar30 + lVar3;
      pfVar1 = (float *)(param_3 + (ulonglong)(uint)(iVar29 * 2) * 4);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[3];
      fVar24 = (float)(uVar20 >> 1) * 4.656613e-10;
      fVar25 = (float)(uVar32 >> 1) * 4.656613e-10;
      fVar26 = (float)(uVar33 >> 1) * 4.656613e-10;
      fVar27 = (float)(uVar34 >> 1) * 4.656613e-10;
      pfVar2 = (float *)(param_3 + (ulonglong)(uint)(iVar31 * 2) * 4);
      fVar23 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar2 = (float *)(param_3 + (ulonglong)(uint)(iVar36 * 2) * 4);
      fVar11 = *pfVar2;
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar2 = (float *)(param_3 + (ulonglong)(uint)(iVar37 * 2) * 4);
      fVar15 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar17 = pfVar2[2];
      fVar18 = pfVar2[3];
      *param_1 = (pfVar1[2] - *pfVar1) * fVar24 + *pfVar1;
      param_1[1] = (fVar5 - fVar4) * fVar24 + fVar4;
      param_1[2] = (fVar9 - fVar23) * fVar25 + fVar23;
      param_1[3] = (fVar10 - fVar8) * fVar25 + fVar8;
      param_1[4] = (fVar13 - fVar11) * fVar26 + fVar11;
      param_1[5] = (fVar14 - fVar12) * fVar26 + fVar12;
      param_1[6] = (fVar17 - fVar15) * fVar27 + fVar15;
      param_1[7] = (fVar18 - fVar16) * fVar27 + fVar16;
      param_1 = param_1 + 8;
      iVar22 = iVar22 + -1;
      uVar20 = uVar20 + iVar19;
      uVar32 = uVar32 + iVar19;
      uVar33 = uVar33 + iVar19;
      uVar34 = uVar34 + iVar19;
    } while (iVar22 != 0);
    *(longlong *)param_4 = auVar28._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    uVar20 = param_4[1] * 2;
    fVar4 = *(float *)(param_3 + (ulonglong)(uVar20 + 1) * 4);
    fVar5 = *(float *)(param_3 + (ulonglong)(uVar20 + 3) * 4);
    fVar23 = (float)(*param_4 >> 1) * 4.656613e-10;
    *param_1 = (*(float *)(param_3 + (ulonglong)(uVar20 + 2) * 4) -
               *(float *)(param_3 + (ulonglong)uVar20 * 4)) * fVar23 +
               *(float *)(param_3 + (ulonglong)uVar20 * 4);
    param_1[1] = (fVar5 - fVar4) * fVar23 + fVar4;
    param_1 = param_1 + 2;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar21 + -8) = 0x180834835;
  FUN_1808fc050(auStack_98[0] ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



