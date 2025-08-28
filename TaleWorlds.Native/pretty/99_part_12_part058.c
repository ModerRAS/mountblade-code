#include "TaleWorlds.Native.Split.h"

// 99_part_12_part058.c - 7 个函数

// 函数: void FUN_1807f1b10(float *param_1,longlong param_2,int param_3)
void FUN_1807f1b10(float *param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  if (param_3 == 8) {
    fVar12 = param_1[4];
    fVar14 = param_1[5];
    fVar15 = param_1[6];
    fVar16 = param_1[7];
    fVar21 = param_1[2] + *param_1;
    fVar24 = param_1[3] + param_1[1];
    fVar25 = -param_1[2] + *param_1;
    fVar26 = -param_1[3] + param_1[1];
    fVar28 = param_1[0xe] + param_1[0xc];
    fVar30 = param_1[0xf] + param_1[0xd];
    fVar31 = -param_1[0xe] + param_1[0xc];
    fVar32 = -param_1[0xf] + param_1[0xd];
    fVar33 = param_1[10] + param_1[8];
    fVar34 = param_1[0xb] + param_1[9];
    fVar35 = -param_1[10] + param_1[8];
    fVar36 = -param_1[0xb] + param_1[9];
    fVar37 = fVar15 + fVar12 + fVar21;
    fVar38 = fVar16 + fVar14 + fVar24;
    fVar21 = -(fVar15 + fVar12) + fVar21;
    fVar24 = -(fVar16 + fVar14) + fVar24;
    fVar9 = (fVar16 - fVar14) + fVar25;
    fVar10 = (fVar12 - fVar15) + fVar26;
    fVar25 = (fVar14 - fVar16) + fVar25;
    fVar26 = (fVar15 - fVar12) + fVar26;
    fVar12 = fVar35 * 0.70710677 + fVar36 * -0.70710677;
    fVar14 = fVar36 * 0.70710677 + fVar35 * 0.70710677;
    fVar15 = fVar31 * 0.70710677 + fVar32 * 0.70710677;
    fVar16 = fVar32 * 0.70710677 + fVar31 * -0.70710677;
    *param_1 = fVar28 + fVar33 + fVar37;
    param_1[1] = fVar30 + fVar34 + fVar38;
    param_1[2] = fVar15 + fVar12 + fVar9;
    param_1[3] = fVar16 + fVar14 + fVar10;
    param_1[4] = (fVar30 - fVar34) + fVar21;
    param_1[5] = (fVar33 - fVar28) + fVar24;
    param_1[6] = (fVar16 - fVar14) + fVar25;
    param_1[7] = (fVar12 - fVar15) + fVar26;
    param_1[8] = -(fVar28 + fVar33) + fVar37;
    param_1[9] = -(fVar30 + fVar34) + fVar38;
    param_1[10] = -(fVar15 + fVar12) + fVar9;
    param_1[0xb] = -(fVar16 + fVar14) + fVar10;
    param_1[0xc] = (fVar34 - fVar30) + fVar21;
    param_1[0xd] = (fVar28 - fVar33) + fVar24;
    param_1[0xe] = (fVar14 - fVar16) + fVar25;
    param_1[0xf] = (fVar15 - fVar12) + fVar26;
    return;
  }
  if (param_3 != 0x10) {
    iVar3 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
    FUN_1807f1b10(param_1,param_2 + (longlong)(iVar3 * 2) * 4,param_3 / 2);
    lVar5 = param_2 + (longlong)((((int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3) + iVar3) * 2) * 4;
    lVar6 = (longlong)((param_3 / 2) * 2);
    pfVar8 = param_1 + lVar6;
    FUN_1807f1b10(pfVar8,lVar5,iVar3);
    FUN_1807f1b10(param_1 + iVar3 * 6,lVar5,iVar3);
    if (0 < iVar3) {
      lVar5 = iVar3 * 2 - lVar6;
      lVar7 = iVar3 * 6 - lVar6;
      uVar4 = (ulonglong)((iVar3 - 1U >> 1) + 1);
      do {
        pfVar1 = pfVar8 + lVar7;
        pfVar2 = (float *)(((param_2 + lVar6 * -4) - (longlong)param_1) + (longlong)pfVar8);
        fVar12 = *pfVar2;
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar2 = pfVar8 + -lVar6;
        fVar9 = *pfVar2;
        fVar10 = pfVar2[1];
        fVar25 = pfVar2[2];
        fVar26 = pfVar2[3];
        pfVar2 = pfVar8 + lVar5;
        fVar21 = *pfVar2;
        fVar24 = pfVar2[1];
        fVar28 = pfVar2[2];
        fVar30 = pfVar2[3];
        fVar32 = -fVar14 * pfVar8[1] + *pfVar8 * fVar12;
        fVar33 = fVar14 * *pfVar8 + pfVar8[1] * fVar12;
        fVar34 = fVar14 * pfVar1[1] + *pfVar1 * fVar12;
        fVar35 = -fVar14 * *pfVar1 + pfVar1[1] * fVar12;
        fVar12 = -fVar16 * pfVar8[3] + pfVar8[2] * fVar15;
        fVar14 = fVar16 * pfVar8[2] + pfVar8[3] * fVar15;
        fVar31 = fVar16 * pfVar1[3] + pfVar1[2] * fVar15;
        fVar15 = -fVar16 * pfVar1[2] + pfVar1[3] * fVar15;
        pfVar1 = pfVar8 + -lVar6;
        *pfVar1 = fVar34 + fVar32 + fVar9;
        pfVar1[1] = fVar35 + fVar33 + fVar10;
        pfVar1[2] = fVar31 + fVar12 + fVar25;
        pfVar1[3] = fVar15 + fVar14 + fVar26;
        pfVar1 = pfVar8 + lVar5;
        *pfVar1 = (fVar35 - fVar33) + fVar21;
        pfVar1[1] = (fVar32 - fVar34) + fVar24;
        pfVar1[2] = (fVar15 - fVar14) + fVar28;
        pfVar1[3] = (fVar12 - fVar31) + fVar30;
        *pfVar8 = -(fVar34 + fVar32) + fVar9;
        pfVar8[1] = -(fVar35 + fVar33) + fVar10;
        pfVar8[2] = -(fVar31 + fVar12) + fVar25;
        pfVar8[3] = -(fVar15 + fVar14) + fVar26;
        pfVar1 = pfVar8 + lVar7;
        *pfVar1 = (fVar33 - fVar35) + fVar21;
        pfVar1[1] = (fVar34 - fVar32) + fVar24;
        pfVar1[2] = (fVar14 - fVar15) + fVar28;
        pfVar1[3] = (fVar31 - fVar12) + fVar30;
        pfVar8 = pfVar8 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return;
  }
  fVar12 = param_1[4];
  fVar14 = param_1[5];
  fVar15 = param_1[6];
  fVar16 = param_1[7];
  fVar9 = param_1[0x14];
  fVar10 = param_1[0x15];
  fVar25 = param_1[0x16];
  fVar26 = param_1[0x17];
  fVar21 = param_1[0x1c];
  fVar24 = param_1[0x1d];
  fVar28 = param_1[0x1e];
  fVar30 = param_1[0x1f];
  fVar27 = param_1[2] + *param_1;
  fVar29 = param_1[3] + param_1[1];
  fVar35 = -param_1[2] + *param_1;
  fVar38 = -param_1[3] + param_1[1];
  fVar45 = param_1[10] + param_1[8];
  fVar46 = param_1[0xb] + param_1[9];
  fVar47 = -param_1[10] + param_1[8];
  fVar48 = -param_1[0xb] + param_1[9];
  fVar39 = param_1[0xe] + param_1[0xc];
  fVar40 = param_1[0xf] + param_1[0xd];
  fVar41 = -param_1[0xe] + param_1[0xc];
  fVar42 = -param_1[0xf] + param_1[0xd];
  fVar43 = fVar15 + fVar12 + fVar27;
  fVar44 = fVar16 + fVar14 + fVar29;
  fVar27 = -(fVar15 + fVar12) + fVar27;
  fVar29 = -(fVar16 + fVar14) + fVar29;
  fVar11 = param_1[0x12] + param_1[0x10];
  fVar13 = param_1[0x13] + param_1[0x11];
  fVar33 = -param_1[0x12] + param_1[0x10];
  fVar36 = -param_1[0x13] + param_1[0x11];
  fVar17 = param_1[0x1a] + param_1[0x18];
  fVar18 = param_1[0x1b] + param_1[0x19];
  fVar34 = -param_1[0x1a] + param_1[0x18];
  fVar37 = -param_1[0x1b] + param_1[0x19];
  fVar31 = (fVar16 - fVar14) + fVar35;
  fVar32 = (fVar12 - fVar15) + fVar38;
  fVar35 = (fVar14 - fVar16) + fVar35;
  fVar38 = (fVar15 - fVar12) + fVar38;
  fVar19 = fVar25 + fVar9 + fVar11;
  fVar22 = fVar26 + fVar10 + fVar13;
  fVar11 = -(fVar25 + fVar9) + fVar11;
  fVar13 = -(fVar26 + fVar10) + fVar13;
  fVar12 = (fVar26 - fVar10) + fVar33;
  fVar16 = (fVar9 - fVar25) + fVar36;
  fVar33 = (fVar10 - fVar26) + fVar33;
  fVar36 = (fVar25 - fVar9) + fVar36;
  fVar51 = fVar28 + fVar21 + fVar17;
  fVar52 = fVar30 + fVar24 + fVar18;
  fVar17 = -(fVar28 + fVar21) + fVar17;
  fVar18 = -(fVar30 + fVar24) + fVar18;
  fVar14 = (fVar30 - fVar24) + fVar34;
  fVar9 = (fVar21 - fVar28) + fVar37;
  fVar34 = (fVar24 - fVar30) + fVar34;
  fVar37 = (fVar28 - fVar21) + fVar37;
  fVar20 = fVar39 + fVar45 + fVar43;
  fVar23 = fVar40 + fVar46 + fVar44;
  fVar43 = -(fVar39 + fVar45) + fVar43;
  fVar44 = -(fVar40 + fVar46) + fVar44;
  fVar49 = (fVar40 - fVar46) + fVar27;
  fVar50 = (fVar45 - fVar39) + fVar29;
  fVar27 = (fVar46 - fVar40) + fVar27;
  fVar29 = (fVar39 - fVar45) + fVar29;
  fVar25 = fVar48 * -0.70710677 + fVar47 * 0.70710677;
  fVar26 = fVar47 * 0.70710677 + fVar48 * 0.70710677;
  fVar21 = fVar42 * 0.70710677 + fVar41 * 0.70710677;
  fVar24 = fVar41 * -0.70710677 + fVar42 * 0.70710677;
  fVar39 = fVar21 + fVar25 + fVar31;
  fVar40 = fVar24 + fVar26 + fVar32;
  fVar31 = -(fVar21 + fVar25) + fVar31;
  fVar32 = -(fVar24 + fVar26) + fVar32;
  fVar15 = (fVar24 - fVar26) + fVar35;
  fVar10 = (fVar25 - fVar21) + fVar38;
  fVar35 = (fVar26 - fVar24) + fVar35;
  fVar38 = (fVar21 - fVar25) + fVar38;
  fVar25 = fVar12 * 0.9238795 + fVar16 * -0.38268346;
  fVar16 = fVar16 * 0.9238795 + fVar12 * 0.38268346;
  fVar21 = fVar14 * 0.9238795 + fVar9 * 0.38268346;
  fVar30 = fVar9 * 0.9238795 + fVar14 * -0.38268346;
  fVar12 = fVar13 * -0.70710677 + fVar11 * 0.70710677;
  fVar9 = fVar11 * 0.70710677 + fVar13 * 0.70710677;
  fVar24 = fVar18 * 0.70710677 + fVar17 * 0.70710677;
  fVar11 = fVar17 * -0.70710677 + fVar18 * 0.70710677;
  fVar14 = fVar33 * 0.38268343 + fVar36 * -0.9238795;
  fVar26 = fVar36 * 0.38268343 + fVar33 * 0.9238795;
  fVar28 = fVar34 * 0.38268343 + fVar37 * 0.9238795;
  fVar33 = fVar37 * 0.38268343 + fVar34 * -0.9238795;
  *param_1 = fVar51 + fVar19 + fVar20;
  param_1[1] = fVar52 + fVar22 + fVar23;
  param_1[2] = fVar25 + fVar21 + fVar39;
  param_1[3] = fVar16 + fVar30 + fVar40;
  param_1[8] = (fVar52 - fVar22) + fVar43;
  param_1[9] = (fVar19 - fVar51) + fVar44;
  param_1[10] = (fVar30 - fVar16) + fVar31;
  param_1[0xb] = (fVar25 - fVar21) + fVar32;
  param_1[0x10] = -(fVar51 + fVar19) + fVar20;
  param_1[0x11] = -(fVar52 + fVar22) + fVar23;
  param_1[0x12] = -(fVar25 + fVar21) + fVar39;
  param_1[0x13] = -(fVar16 + fVar30) + fVar40;
  param_1[0x18] = (fVar22 - fVar52) + fVar43;
  param_1[0x19] = (fVar51 - fVar19) + fVar44;
  param_1[0x1a] = (fVar16 - fVar30) + fVar31;
  param_1[0x1b] = (fVar21 - fVar25) + fVar32;
  param_1[4] = fVar24 + fVar12 + fVar49;
  param_1[5] = fVar11 + fVar9 + fVar50;
  param_1[6] = fVar28 + fVar14 + fVar15;
  param_1[7] = fVar33 + fVar26 + fVar10;
  param_1[0x14] = -(fVar24 + fVar12) + fVar49;
  param_1[0x15] = -(fVar11 + fVar9) + fVar50;
  param_1[0x16] = -(fVar28 + fVar14) + fVar15;
  param_1[0x17] = -(fVar33 + fVar26) + fVar10;
  param_1[0xc] = (fVar11 - fVar9) + fVar27;
  param_1[0xd] = (fVar12 - fVar24) + fVar29;
  param_1[0xe] = (fVar33 - fVar26) + fVar35;
  param_1[0xf] = (fVar14 - fVar28) + fVar38;
  param_1[0x1c] = (fVar9 - fVar11) + fVar27;
  param_1[0x1d] = (fVar24 - fVar12) + fVar29;
  param_1[0x1e] = (fVar26 - fVar33) + fVar35;
  param_1[0x1f] = (fVar28 - fVar14) + fVar38;
  return;
}






// 函数: void FUN_1807f1c2c(void)
void FUN_1807f1c2c(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint in_EAX;
  ulonglong uVar12;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint unaff_XMM10_Da;
  uint unaff_XMM10_Db;
  uint unaff_XMM10_Dc;
  uint unaff_XMM10_Dd;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  
  uVar12 = (ulonglong)((in_EAX >> 1) + 1);
  do {
    pfVar1 = unaff_R13 + (unaff_R12 - unaff_RSI);
    pfVar2 = (float *)((unaff_R15 - unaff_R14) + (longlong)unaff_R13);
    fVar13 = *pfVar2;
    fVar14 = pfVar2[1];
    fVar16 = pfVar2[2];
    fVar3 = pfVar2[3];
    pfVar2 = unaff_R13 + -unaff_RSI;
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar7 = pfVar2[3];
    pfVar2 = unaff_R13 + unaff_RBP;
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    fVar17 = (float)((uint)fVar14 ^ unaff_XMM11_Da) * unaff_R13[1] + *unaff_R13 * fVar13;
    fVar18 = (float)((uint)fVar14 ^ unaff_XMM11_Db) * *unaff_R13 + unaff_R13[1] * fVar13;
    fVar19 = (float)((uint)fVar14 ^ unaff_XMM11_Dc) * pfVar1[1] + *pfVar1 * fVar13;
    fVar20 = (float)((uint)fVar14 ^ unaff_XMM11_Dd) * *pfVar1 + pfVar1[1] * fVar13;
    fVar13 = (float)((uint)fVar3 ^ unaff_XMM11_Da) * unaff_R13[3] + unaff_R13[2] * fVar16;
    fVar14 = (float)((uint)fVar3 ^ unaff_XMM11_Db) * unaff_R13[2] + unaff_R13[3] * fVar16;
    fVar15 = (float)((uint)fVar3 ^ unaff_XMM11_Dc) * pfVar1[3] + pfVar1[2] * fVar16;
    fVar16 = (float)((uint)fVar3 ^ unaff_XMM11_Dd) * pfVar1[2] + pfVar1[3] * fVar16;
    pfVar1 = unaff_R13 + -unaff_RSI;
    *pfVar1 = (float)((uint)(fVar19 + fVar17) ^ unaff_XMM10_Da) + fVar4;
    pfVar1[1] = (float)((uint)(fVar20 + fVar18) ^ unaff_XMM10_Db) + fVar5;
    pfVar1[2] = (float)((uint)(fVar15 + fVar13) ^ unaff_XMM10_Da) + fVar6;
    pfVar1[3] = (float)((uint)(fVar16 + fVar14) ^ unaff_XMM10_Db) + fVar7;
    pfVar1 = unaff_R13 + unaff_RBP;
    *pfVar1 = (fVar20 - fVar18) + fVar8;
    pfVar1[1] = (fVar17 - fVar19) + fVar9;
    pfVar1[2] = (fVar16 - fVar14) + fVar10;
    pfVar1[3] = (fVar13 - fVar15) + fVar11;
    *unaff_R13 = (float)((uint)(fVar19 + fVar17) ^ unaff_XMM10_Dc) + fVar4;
    unaff_R13[1] = (float)((uint)(fVar20 + fVar18) ^ unaff_XMM10_Dd) + fVar5;
    unaff_R13[2] = (float)((uint)(fVar15 + fVar13) ^ unaff_XMM10_Dc) + fVar6;
    unaff_R13[3] = (float)((uint)(fVar16 + fVar14) ^ unaff_XMM10_Dd) + fVar7;
    pfVar1 = unaff_R13 + (unaff_R12 - unaff_RSI);
    *pfVar1 = (fVar18 - fVar20) + fVar8;
    pfVar1[1] = (fVar19 - fVar17) + fVar9;
    pfVar1[2] = (fVar14 - fVar16) + fVar10;
    pfVar1[3] = (fVar15 - fVar13) + fVar11;
    unaff_R13 = unaff_R13 + 4;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  return;
}






// 函数: void FUN_1807f1d95(void)
void FUN_1807f1d95(void)

{
  return;
}






// 函数: void FUN_1807f1de0(float *param_1,longlong param_2,int param_3)
void FUN_1807f1de0(float *param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  if (param_3 == 8) {
    fVar13 = param_1[4];
    fVar16 = param_1[5];
    fVar18 = param_1[6];
    fVar20 = param_1[7];
    fVar12 = param_1[2] + *param_1;
    fVar15 = param_1[3] + param_1[1];
    fVar17 = -param_1[2] + *param_1;
    fVar19 = -param_1[3] + param_1[1];
    fVar24 = param_1[0xe] + param_1[0xc];
    fVar26 = param_1[0xf] + param_1[0xd];
    fVar28 = -param_1[0xe] + param_1[0xc];
    fVar30 = -param_1[0xf] + param_1[0xd];
    fVar32 = param_1[10] + param_1[8];
    fVar34 = param_1[0xb] + param_1[9];
    fVar35 = -param_1[10] + param_1[8];
    fVar36 = -param_1[0xb] + param_1[9];
    fVar37 = fVar18 + fVar13 + fVar12;
    fVar38 = fVar20 + fVar16 + fVar15;
    fVar12 = -(fVar18 + fVar13) + fVar12;
    fVar15 = -(fVar20 + fVar16) + fVar15;
    fVar21 = (fVar16 - fVar20) + fVar17;
    fVar22 = (fVar18 - fVar13) + fVar19;
    fVar17 = (fVar20 - fVar16) + fVar17;
    fVar19 = (fVar13 - fVar18) + fVar19;
    fVar13 = fVar35 * 0.70710677 + fVar36 * 0.70710677;
    fVar16 = fVar36 * 0.70710677 + fVar35 * -0.70710677;
    fVar18 = fVar28 * 0.70710677 + fVar30 * -0.70710677;
    fVar20 = fVar30 * 0.70710677 + fVar28 * 0.70710677;
    *param_1 = fVar24 + fVar32 + fVar37;
    param_1[1] = fVar26 + fVar34 + fVar38;
    param_1[2] = fVar18 + fVar13 + fVar21;
    param_1[3] = fVar20 + fVar16 + fVar22;
    param_1[4] = (fVar34 - fVar26) + fVar12;
    param_1[5] = (fVar24 - fVar32) + fVar15;
    param_1[6] = (fVar16 - fVar20) + fVar17;
    param_1[7] = (fVar18 - fVar13) + fVar19;
    param_1[8] = -(fVar24 + fVar32) + fVar37;
    param_1[9] = -(fVar26 + fVar34) + fVar38;
    param_1[10] = -(fVar18 + fVar13) + fVar21;
    param_1[0xb] = -(fVar20 + fVar16) + fVar22;
    param_1[0xc] = (fVar26 - fVar34) + fVar12;
    param_1[0xd] = (fVar32 - fVar24) + fVar15;
    param_1[0xe] = (fVar20 - fVar16) + fVar17;
    param_1[0xf] = (fVar13 - fVar18) + fVar19;
    return;
  }
  if (param_3 != 0x10) {
    iVar3 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
    FUN_1807f1de0(param_1,param_2 + (longlong)(iVar3 * 2) * 4,param_3 / 2);
    lVar5 = param_2 + (longlong)((((int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3) + iVar3) * 2) * 4;
    lVar6 = (longlong)((param_3 / 2) * 2);
    pfVar8 = param_1 + lVar6;
    FUN_1807f1de0(pfVar8,lVar5,iVar3);
    FUN_1807f1de0(param_1 + iVar3 * 6,lVar5,iVar3);
    if (0 < iVar3) {
      lVar5 = iVar3 * 2 - lVar6;
      lVar7 = iVar3 * 6 - lVar6;
      uVar4 = (ulonglong)((iVar3 - 1U >> 1) + 1);
      do {
        pfVar1 = pfVar8 + lVar7;
        pfVar2 = (float *)(((param_2 + lVar6 * -4) - (longlong)param_1) + (longlong)pfVar8);
        fVar13 = *pfVar2;
        fVar16 = pfVar2[1];
        fVar18 = pfVar2[2];
        fVar20 = pfVar2[3];
        pfVar2 = pfVar8 + -lVar6;
        fVar12 = *pfVar2;
        fVar15 = pfVar2[1];
        fVar17 = pfVar2[2];
        fVar19 = pfVar2[3];
        pfVar2 = pfVar8 + lVar5;
        fVar21 = *pfVar2;
        fVar22 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar26 = pfVar2[3];
        fVar30 = fVar16 * pfVar8[1] + *pfVar8 * fVar13;
        fVar32 = -fVar16 * *pfVar8 + pfVar8[1] * fVar13;
        fVar34 = -fVar16 * pfVar1[1] + *pfVar1 * fVar13;
        fVar35 = fVar16 * *pfVar1 + pfVar1[1] * fVar13;
        fVar13 = fVar20 * pfVar8[3] + pfVar8[2] * fVar18;
        fVar16 = -fVar20 * pfVar8[2] + pfVar8[3] * fVar18;
        fVar28 = -fVar20 * pfVar1[3] + pfVar1[2] * fVar18;
        fVar18 = fVar20 * pfVar1[2] + pfVar1[3] * fVar18;
        pfVar1 = pfVar8 + -lVar6;
        *pfVar1 = fVar34 + fVar30 + fVar12;
        pfVar1[1] = fVar35 + fVar32 + fVar15;
        pfVar1[2] = fVar28 + fVar13 + fVar17;
        pfVar1[3] = fVar18 + fVar16 + fVar19;
        pfVar1 = pfVar8 + lVar5;
        *pfVar1 = (fVar32 - fVar35) + fVar21;
        pfVar1[1] = (fVar34 - fVar30) + fVar22;
        pfVar1[2] = (fVar16 - fVar18) + fVar24;
        pfVar1[3] = (fVar28 - fVar13) + fVar26;
        *pfVar8 = -(fVar34 + fVar30) + fVar12;
        pfVar8[1] = -(fVar35 + fVar32) + fVar15;
        pfVar8[2] = -(fVar28 + fVar13) + fVar17;
        pfVar8[3] = -(fVar18 + fVar16) + fVar19;
        pfVar1 = pfVar8 + lVar7;
        *pfVar1 = (fVar35 - fVar32) + fVar21;
        pfVar1[1] = (fVar30 - fVar34) + fVar22;
        pfVar1[2] = (fVar18 - fVar16) + fVar24;
        pfVar1[3] = (fVar13 - fVar28) + fVar26;
        pfVar8 = pfVar8 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return;
  }
  fVar13 = param_1[4];
  fVar16 = param_1[5];
  fVar18 = param_1[6];
  fVar20 = param_1[7];
  fVar12 = param_1[0x14];
  fVar15 = param_1[0x15];
  fVar17 = param_1[0x16];
  fVar19 = param_1[0x17];
  fVar21 = param_1[0x1c];
  fVar22 = param_1[0x1d];
  fVar24 = param_1[0x1e];
  fVar26 = param_1[0x1f];
  fVar23 = param_1[2] + *param_1;
  fVar25 = param_1[3] + param_1[1];
  fVar27 = -param_1[2] + *param_1;
  fVar29 = -param_1[3] + param_1[1];
  fVar47 = param_1[10] + param_1[8];
  fVar48 = param_1[0xb] + param_1[9];
  fVar49 = -param_1[10] + param_1[8];
  fVar50 = -param_1[0xb] + param_1[9];
  fVar41 = param_1[0xe] + param_1[0xc];
  fVar42 = param_1[0xf] + param_1[0xd];
  fVar43 = -param_1[0xe] + param_1[0xc];
  fVar44 = -param_1[0xf] + param_1[0xd];
  fVar28 = param_1[0x12] + param_1[0x10];
  fVar30 = param_1[0x13] + param_1[0x11];
  fVar32 = -param_1[0x12] + param_1[0x10];
  fVar36 = -param_1[0x13] + param_1[0x11];
  fVar45 = fVar18 + fVar13 + fVar23;
  fVar46 = fVar20 + fVar16 + fVar25;
  fVar23 = -(fVar18 + fVar13) + fVar23;
  fVar25 = -(fVar20 + fVar16) + fVar25;
  fVar34 = param_1[0x1a] + param_1[0x18];
  fVar37 = param_1[0x1b] + param_1[0x19];
  fVar9 = -param_1[0x1a] + param_1[0x18];
  fVar10 = -param_1[0x1b] + param_1[0x19];
  fVar35 = (fVar16 - fVar20) + fVar27;
  fVar38 = (fVar18 - fVar13) + fVar29;
  fVar27 = (fVar20 - fVar16) + fVar27;
  fVar29 = (fVar13 - fVar18) + fVar29;
  fVar11 = fVar17 + fVar12 + fVar28;
  fVar14 = fVar19 + fVar15 + fVar30;
  fVar28 = -(fVar17 + fVar12) + fVar28;
  fVar30 = -(fVar19 + fVar15) + fVar30;
  fVar31 = (fVar15 - fVar19) + fVar32;
  fVar33 = (fVar17 - fVar12) + fVar36;
  fVar32 = (fVar19 - fVar15) + fVar32;
  fVar36 = (fVar12 - fVar17) + fVar36;
  fVar13 = fVar24 + fVar21 + fVar34;
  fVar18 = fVar26 + fVar22 + fVar37;
  fVar34 = -(fVar24 + fVar21) + fVar34;
  fVar37 = -(fVar26 + fVar22) + fVar37;
  fVar39 = (fVar22 - fVar26) + fVar9;
  fVar40 = (fVar24 - fVar21) + fVar10;
  fVar9 = (fVar26 - fVar22) + fVar9;
  fVar10 = (fVar21 - fVar24) + fVar10;
  fVar24 = fVar41 + fVar47 + fVar45;
  fVar26 = fVar42 + fVar48 + fVar46;
  fVar45 = -(fVar41 + fVar47) + fVar45;
  fVar46 = -(fVar42 + fVar48) + fVar46;
  fVar12 = fVar50 * 0.70710677 + fVar49 * 0.70710677;
  fVar15 = fVar49 * -0.70710677 + fVar50 * 0.70710677;
  fVar17 = fVar44 * -0.70710677 + fVar43 * 0.70710677;
  fVar19 = fVar43 * 0.70710677 + fVar44 * 0.70710677;
  fVar43 = (fVar48 - fVar42) + fVar23;
  fVar44 = (fVar41 - fVar47) + fVar25;
  fVar23 = (fVar42 - fVar48) + fVar23;
  fVar25 = (fVar47 - fVar41) + fVar25;
  fVar16 = fVar17 + fVar12 + fVar35;
  fVar20 = fVar19 + fVar15 + fVar38;
  fVar35 = -(fVar17 + fVar12) + fVar35;
  fVar38 = -(fVar19 + fVar15) + fVar38;
  fVar21 = (fVar15 - fVar19) + fVar27;
  fVar22 = (fVar17 - fVar12) + fVar29;
  fVar27 = (fVar19 - fVar15) + fVar27;
  fVar29 = (fVar12 - fVar17) + fVar29;
  fVar41 = fVar31 * 0.9238795 + fVar33 * 0.38268346;
  fVar33 = fVar33 * 0.9238795 + fVar31 * -0.38268346;
  fVar42 = fVar39 * 0.9238795 + fVar40 * -0.38268346;
  fVar39 = fVar40 * 0.9238795 + fVar39 * 0.38268346;
  fVar31 = fVar30 * 0.70710677 + fVar28 * 0.70710677;
  fVar28 = fVar28 * -0.70710677 + fVar30 * 0.70710677;
  fVar30 = fVar37 * -0.70710677 + fVar34 * 0.70710677;
  fVar34 = fVar34 * 0.70710677 + fVar37 * 0.70710677;
  fVar12 = fVar32 * 0.38268343 + fVar36 * 0.9238795;
  fVar15 = fVar36 * 0.38268343 + fVar32 * -0.9238795;
  fVar17 = fVar9 * 0.38268343 + fVar10 * -0.9238795;
  fVar19 = fVar10 * 0.38268343 + fVar9 * 0.9238795;
  *param_1 = fVar13 + fVar11 + fVar24;
  param_1[1] = fVar18 + fVar14 + fVar26;
  param_1[2] = fVar41 + fVar42 + fVar16;
  param_1[3] = fVar33 + fVar39 + fVar20;
  param_1[8] = (fVar14 - fVar18) + fVar45;
  param_1[9] = (fVar13 - fVar11) + fVar46;
  param_1[10] = (fVar33 - fVar39) + fVar35;
  param_1[0xb] = (fVar42 - fVar41) + fVar38;
  param_1[0x10] = -(fVar13 + fVar11) + fVar24;
  param_1[0x11] = -(fVar18 + fVar14) + fVar26;
  param_1[0x12] = -(fVar41 + fVar42) + fVar16;
  param_1[0x13] = -(fVar33 + fVar39) + fVar20;
  param_1[0x18] = (fVar18 - fVar14) + fVar45;
  param_1[0x19] = (fVar11 - fVar13) + fVar46;
  param_1[0x1a] = (fVar39 - fVar33) + fVar35;
  param_1[0x1b] = (fVar41 - fVar42) + fVar38;
  param_1[4] = fVar30 + fVar31 + fVar43;
  param_1[5] = fVar34 + fVar28 + fVar44;
  param_1[6] = fVar17 + fVar12 + fVar21;
  param_1[7] = fVar19 + fVar15 + fVar22;
  param_1[0x14] = -(fVar30 + fVar31) + fVar43;
  param_1[0x15] = -(fVar34 + fVar28) + fVar44;
  param_1[0x16] = -(fVar17 + fVar12) + fVar21;
  param_1[0x17] = -(fVar19 + fVar15) + fVar22;
  param_1[0xc] = (fVar28 - fVar34) + fVar23;
  param_1[0xd] = (fVar30 - fVar31) + fVar25;
  param_1[0xe] = (fVar15 - fVar19) + fVar27;
  param_1[0xf] = (fVar17 - fVar12) + fVar29;
  param_1[0x1c] = (fVar34 - fVar28) + fVar23;
  param_1[0x1d] = (fVar31 - fVar30) + fVar25;
  param_1[0x1e] = (fVar19 - fVar15) + fVar27;
  param_1[0x1f] = (fVar12 - fVar17) + fVar29;
  return;
}






// 函数: void FUN_1807f1efc(void)
void FUN_1807f1efc(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint in_EAX;
  ulonglong uVar12;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint unaff_XMM10_Da;
  uint unaff_XMM10_Db;
  uint unaff_XMM10_Dc;
  uint unaff_XMM10_Dd;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  
  uVar12 = (ulonglong)((in_EAX >> 1) + 1);
  do {
    pfVar1 = unaff_R13 + (unaff_R12 - unaff_RSI);
    pfVar2 = (float *)((unaff_R15 - unaff_R14) + (longlong)unaff_R13);
    fVar13 = *pfVar2;
    fVar14 = pfVar2[1];
    fVar16 = pfVar2[2];
    fVar3 = pfVar2[3];
    pfVar2 = unaff_R13 + -unaff_RSI;
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar7 = pfVar2[3];
    pfVar2 = unaff_R13 + unaff_RBP;
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    fVar17 = (float)((uint)fVar14 ^ unaff_XMM11_Da) * unaff_R13[1] + *unaff_R13 * fVar13;
    fVar18 = (float)((uint)fVar14 ^ unaff_XMM11_Db) * *unaff_R13 + unaff_R13[1] * fVar13;
    fVar19 = (float)((uint)fVar14 ^ unaff_XMM11_Dc) * pfVar1[1] + *pfVar1 * fVar13;
    fVar20 = (float)((uint)fVar14 ^ unaff_XMM11_Dd) * *pfVar1 + pfVar1[1] * fVar13;
    fVar13 = (float)((uint)fVar3 ^ unaff_XMM11_Da) * unaff_R13[3] + unaff_R13[2] * fVar16;
    fVar14 = (float)((uint)fVar3 ^ unaff_XMM11_Db) * unaff_R13[2] + unaff_R13[3] * fVar16;
    fVar15 = (float)((uint)fVar3 ^ unaff_XMM11_Dc) * pfVar1[3] + pfVar1[2] * fVar16;
    fVar16 = (float)((uint)fVar3 ^ unaff_XMM11_Dd) * pfVar1[2] + pfVar1[3] * fVar16;
    pfVar1 = unaff_R13 + -unaff_RSI;
    *pfVar1 = (float)((uint)(fVar19 + fVar17) ^ unaff_XMM10_Da) + fVar4;
    pfVar1[1] = (float)((uint)(fVar20 + fVar18) ^ unaff_XMM10_Db) + fVar5;
    pfVar1[2] = (float)((uint)(fVar15 + fVar13) ^ unaff_XMM10_Da) + fVar6;
    pfVar1[3] = (float)((uint)(fVar16 + fVar14) ^ unaff_XMM10_Db) + fVar7;
    pfVar1 = unaff_R13 + unaff_RBP;
    *pfVar1 = (fVar18 - fVar20) + fVar8;
    pfVar1[1] = (fVar19 - fVar17) + fVar9;
    pfVar1[2] = (fVar14 - fVar16) + fVar10;
    pfVar1[3] = (fVar15 - fVar13) + fVar11;
    *unaff_R13 = (float)((uint)(fVar19 + fVar17) ^ unaff_XMM10_Dc) + fVar4;
    unaff_R13[1] = (float)((uint)(fVar20 + fVar18) ^ unaff_XMM10_Dd) + fVar5;
    unaff_R13[2] = (float)((uint)(fVar15 + fVar13) ^ unaff_XMM10_Dc) + fVar6;
    unaff_R13[3] = (float)((uint)(fVar16 + fVar14) ^ unaff_XMM10_Dd) + fVar7;
    pfVar1 = unaff_R13 + (unaff_R12 - unaff_RSI);
    *pfVar1 = (fVar20 - fVar18) + fVar8;
    pfVar1[1] = (fVar17 - fVar19) + fVar9;
    pfVar1[2] = (fVar16 - fVar14) + fVar10;
    pfVar1[3] = (fVar13 - fVar15) + fVar11;
    unaff_R13 = unaff_R13 + 4;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  return;
}






// 函数: void FUN_1807f2070(void)
void FUN_1807f2070(void)

{
  return;
}






// 函数: void FUN_1807f20c0(float *param_1,float *param_2,float *param_3,int param_4)
void FUN_1807f20c0(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
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
  
  fVar18 = *param_1;
  fVar2 = param_1[1];
  fVar13 = (*param_3 + -1.0) * -0.5;
  fVar14 = (param_3[1] + 0.0) * -0.5;
  fVar16 = (*param_3 + 1.0) * 0.5;
  fVar17 = (param_3[1] + 0.0) * 0.5;
  iVar4 = param_4 / 2;
  fVar9 = (param_3[2] + -1.0) * -0.5;
  fVar10 = (param_3[3] + 0.0) * -0.5;
  fVar11 = (param_3[2] + 1.0) * 0.5;
  fVar12 = (param_3[3] + 0.0) * 0.5;
  iVar3 = iVar4 * 2;
  pfVar7 = param_1 + (iVar3 + -4);
  fVar15 = *pfVar7;
  fVar23 = pfVar7[1];
  fVar24 = pfVar7[3] * fVar12 + fVar11 * pfVar7[2] + -param_1[3] * fVar10 + fVar9 * param_1[2];
  fVar9 = -pfVar7[3] * fVar11 + fVar12 * pfVar7[2] + param_1[2] * fVar10 + fVar9 * param_1[3];
  *param_2 = fVar2 * fVar17 + fVar16 * fVar18 + -fVar2 * fVar14 + fVar13 * fVar18;
  param_2[1] = -fVar2 * fVar16 + fVar17 * fVar18 + fVar18 * fVar14 + fVar13 * fVar2;
  param_2[2] = fVar24;
  param_2[3] = fVar9;
  if (2 < iVar4) {
    lVar5 = (longlong)(param_4 * 2 + -4);
    pfVar7 = param_1 + 4;
    pfVar8 = param_2 + lVar5;
    lVar5 = (((iVar4 * 2 + -8) - lVar5) * 4 - (longlong)param_2) + (longlong)param_1;
    uVar6 = (ulonglong)((iVar4 - 3U >> 1) + 1);
    do {
      pfVar1 = (float *)((longlong)pfVar7 + ((longlong)param_3 - (longlong)param_1));
      fVar18 = *(float *)((longlong)pfVar8 + lVar5 + 4);
      fVar2 = *(float *)((longlong)pfVar8 + lVar5 + 8);
      fVar10 = *(float *)(lVar5 + (longlong)pfVar8);
      fVar11 = ((float *)(lVar5 + (longlong)pfVar8))[1];
      fVar13 = (*pfVar1 + -1.0) * -0.5;
      fVar20 = (pfVar1[1] + 0.0) * -0.5;
      fVar21 = (*pfVar1 + 1.0) * 0.5;
      fVar22 = (pfVar1[1] + 0.0) * 0.5;
      fVar14 = (pfVar1[2] + -1.0) * -0.5;
      fVar16 = (pfVar1[3] + 0.0) * -0.5;
      fVar17 = (pfVar1[2] + 1.0) * 0.5;
      fVar19 = (pfVar1[3] + 0.0) * 0.5;
      fVar12 = fVar23 * fVar22 + fVar21 * fVar15 + -pfVar7[1] * fVar20 + fVar13 * *pfVar7;
      fVar15 = -fVar23 * fVar21 + fVar22 * fVar15 + *pfVar7 * fVar20 + fVar13 * pfVar7[1];
      fVar13 = fVar18 * fVar19 + fVar17 * fVar2 + -pfVar7[3] * fVar16 + fVar14 * pfVar7[2];
      fVar18 = -fVar18 * fVar17 + fVar19 * fVar2 + pfVar7[2] * fVar16 + fVar14 * pfVar7[3];
      pfVar1 = (float *)((longlong)pfVar7 + ((longlong)param_2 - (longlong)param_1));
      *pfVar1 = fVar12;
      pfVar1[1] = fVar15;
      pfVar1[2] = fVar13;
      pfVar1[3] = fVar18;
      pfVar7 = pfVar7 + 4;
      *pfVar8 = fVar12;
      pfVar8[1] = -fVar15;
      pfVar8[2] = fVar24;
      pfVar8[3] = -fVar9;
      pfVar8 = pfVar8 + -4;
      uVar6 = uVar6 - 1;
      fVar15 = fVar10;
      fVar23 = fVar11;
      fVar24 = fVar13;
      fVar9 = fVar18;
    } while (uVar6 != 0);
  }
  fVar18 = param_2[(longlong)iVar3 + -2];
  param_2[iVar3] = *param_1 - param_1[1];
  param_2[(longlong)iVar3 + 3] = -param_2[(longlong)iVar3 + -1];
  param_2[(longlong)iVar3 + 1] = 0.0;
  param_2[(longlong)iVar3 + 2] = fVar18;
  return;
}






