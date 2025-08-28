#include "TaleWorlds.Native.Split.h"

// 99_part_12_part059.c - 11 个函数

// 函数: void FUN_1807f21b3(void)
void FUN_1807f21b3(void)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_EDI;
  float *pfVar7;
  int in_R9D;
  uint *puVar8;
  int64_t in_R10;
  float *in_R11;
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
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  uint unaff_XMM12_Da;
  uint unaff_XMM12_Db;
  uint unaff_XMM12_Dc;
  uint unaff_XMM12_Dd;
  
  lVar5 = (int64_t)(in_R9D * 2 + -4);
  pfVar7 = in_R11 + 4;
  puVar8 = (uint *)(in_R10 + lVar5 * 4);
  lVar5 = (((unaff_EDI * 2 + -8) - lVar5) * 4 - in_R10) + (int64_t)in_R11;
  uVar6 = (uint64_t)((unaff_EDI - 3U >> 1) + 1);
  do {
    pfVar1 = (float *)((int64_t)pfVar7 + (unaff_RBX - (int64_t)in_R11));
    uVar2 = *(uint *)((int64_t)puVar8 + lVar5 + 4);
    fVar10 = *(float *)((int64_t)puVar8 + lVar5 + 8);
    fVar3 = *(float *)(lVar5 + (int64_t)puVar8);
    fVar4 = ((float *)(lVar5 + (int64_t)puVar8))[1];
    fVar15 = (*pfVar1 + unaff_XMM10_Da) * unaff_XMM9_Da;
    fVar16 = (pfVar1[1] + unaff_XMM10_Db) * unaff_XMM9_Db;
    fVar17 = (*pfVar1 + unaff_XMM10_Dc) * unaff_XMM9_Dc;
    fVar18 = (pfVar1[1] + unaff_XMM10_Dd) * unaff_XMM9_Dd;
    fVar11 = (pfVar1[2] + unaff_XMM10_Da) * unaff_XMM9_Da;
    fVar12 = (pfVar1[3] + unaff_XMM10_Db) * unaff_XMM9_Db;
    fVar13 = (pfVar1[2] + unaff_XMM10_Dc) * unaff_XMM9_Dc;
    fVar14 = (pfVar1[3] + unaff_XMM10_Dd) * unaff_XMM9_Dd;
    fVar9 = (float)((uint)unaff_XMM7_Db ^ unaff_XMM11_Da) * fVar18 + fVar17 * unaff_XMM7_Da +
            (float)((uint)pfVar7[1] ^ unaff_XMM12_Da) * fVar16 + fVar15 * *pfVar7;
    fVar15 = (float)((uint)unaff_XMM7_Db ^ unaff_XMM11_Db) * fVar17 + fVar18 * unaff_XMM7_Da +
             (float)((uint)*pfVar7 ^ unaff_XMM12_Db) * fVar16 + fVar15 * pfVar7[1];
    fVar16 = (float)(uVar2 ^ unaff_XMM11_Dc) * fVar14 + fVar13 * fVar10 +
             (float)((uint)pfVar7[3] ^ unaff_XMM12_Dc) * fVar12 + fVar11 * pfVar7[2];
    fVar10 = (float)(uVar2 ^ unaff_XMM11_Dd) * fVar13 + fVar14 * fVar10 +
             (float)((uint)pfVar7[2] ^ unaff_XMM12_Dd) * fVar12 + fVar11 * pfVar7[3];
    pfVar1 = (float *)((int64_t)pfVar7 + (in_R10 - (int64_t)in_R11));
    *pfVar1 = fVar9;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar10;
    pfVar7 = pfVar7 + 4;
    *puVar8 = (uint)fVar9 ^ unaff_XMM11_Da;
    puVar8[1] = (uint)fVar15 ^ unaff_XMM11_Db;
    puVar8[2] = (uint)unaff_XMM8_Dc ^ unaff_XMM11_Dc;
    puVar8[3] = (uint)unaff_XMM8_Dd ^ unaff_XMM11_Dd;
    puVar8 = puVar8 + -4;
    uVar6 = uVar6 - 1;
    unaff_XMM7_Da = fVar3;
    unaff_XMM7_Db = fVar4;
    unaff_XMM8_Dc = fVar16;
    unaff_XMM8_Dd = fVar10;
  } while (uVar6 != 0);
  lVar5 = (int64_t)unaff_EBP;
  *(float *)(in_R10 + lVar5 * 4) = *in_R11 - in_R11[1];
  *(uint *)(in_R10 + 0xc + lVar5 * 4) = *(uint *)(in_R10 + -4 + lVar5 * 4) ^ 0x80000000;
  *(int32_t *)(in_R10 + 4 + lVar5 * 4) = 0;
  *(int32_t *)(in_R10 + 8 + lVar5 * 4) = *(int32_t *)(in_R10 + -8 + lVar5 * 4);
  return;
}






// 函数: void FUN_1807f22b2(void)
void FUN_1807f22b2(void)

{
  int64_t lVar1;
  int unaff_EBP;
  int64_t in_R10;
  float *in_R11;
  
  lVar1 = (int64_t)unaff_EBP;
  *(float *)(in_R10 + lVar1 * 4) = *in_R11 - in_R11[1];
  *(uint *)(in_R10 + 0xc + lVar1 * 4) = *(uint *)(in_R10 + -4 + lVar1 * 4) ^ 0x80000000;
  *(int32_t *)(in_R10 + 4 + lVar1 * 4) = 0;
  *(int32_t *)(in_R10 + 8 + lVar1 * 4) = *(int32_t *)(in_R10 + -8 + lVar1 * 4);
  return;
}






// 函数: void FUN_1807f2320(float *param_1,int64_t param_2,int64_t param_3,int param_4)
void FUN_1807f2320(float *param_1,int64_t param_2,int64_t param_3,int param_4)

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
  uint64_t uVar10;
  float *pfVar11;
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
  
  param_4 = param_4 / 2;
  if (0 < param_4) {
    param_3 = param_3 - (int64_t)param_1;
    param_2 = param_2 - (int64_t)param_1;
    pfVar11 = param_1 + (param_4 * 2 + -4);
    uVar10 = (uint64_t)((param_4 - 1U >> 1) + 1);
    fVar20 = param_1[param_4 * 2];
    fVar21 = (param_1 + param_4 * 2)[1];
    do {
      pfVar1 = (float *)(param_3 + (int64_t)param_1);
      fVar2 = *pfVar11;
      fVar3 = pfVar11[1];
      fVar4 = pfVar11[2];
      fVar5 = pfVar11[3];
      pfVar11 = pfVar11 + -4;
      fVar6 = *param_1;
      fVar7 = param_1[1];
      fVar8 = param_1[2];
      fVar9 = param_1[3];
      fVar17 = pfVar1[1] + 0.0;
      fVar18 = *pfVar1 + 1.0;
      fVar13 = pfVar1[3] + 0.0;
      fVar14 = pfVar1[2] + 1.0;
      fVar16 = -(*pfVar1 + -1.0);
      fVar19 = -(pfVar1[1] + 0.0);
      fVar12 = -(pfVar1[2] + -1.0);
      fVar15 = -(pfVar1[3] + 0.0);
      pfVar1 = (float *)(param_2 + (int64_t)param_1);
      *pfVar1 = fVar21 * fVar19 + fVar18 * fVar20 + -fVar7 * fVar17 + fVar16 * fVar6;
      pfVar1[1] = -fVar21 * fVar18 + fVar19 * fVar20 + fVar6 * fVar17 + fVar16 * fVar7;
      pfVar1[2] = fVar5 * fVar15 + fVar14 * fVar4 + -fVar9 * fVar13 + fVar12 * fVar8;
      pfVar1[3] = -fVar5 * fVar14 + fVar15 * fVar4 + fVar8 * fVar13 + fVar12 * fVar9;
      param_1 = param_1 + 4;
      uVar10 = uVar10 - 1;
      fVar20 = fVar2;
      fVar21 = fVar3;
    } while (uVar10 != 0);
  }
  return;
}






// 函数: void FUN_1807f238b(float *param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_1807f238b(float *param_1,uint64_t param_2,uint64_t param_3,int param_4)

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
  int in_EAX;
  uint64_t uVar10;
  float *pfVar11;
  int64_t in_R10;
  int64_t lVar12;
  int64_t in_R11;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  uint unaff_XMM8_Dc;
  uint unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  uint unaff_XMM10_Da;
  uint unaff_XMM10_Db;
  uint unaff_XMM10_Dc;
  uint unaff_XMM10_Dd;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  
  lVar12 = in_R10 - (int64_t)param_1;
  lVar13 = in_R11 - (int64_t)param_1;
  pfVar11 = param_1 + in_EAX;
  uVar10 = (uint64_t)((param_4 - 1U >> 1) + 1);
  do {
    pfVar1 = (float *)(lVar12 + (int64_t)param_1);
    fVar2 = *pfVar11;
    fVar3 = pfVar11[1];
    fVar4 = pfVar11[2];
    fVar5 = pfVar11[3];
    pfVar11 = pfVar11 + -4;
    fVar6 = *param_1;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    fVar9 = param_1[3];
    fVar18 = (float)((uint)(*pfVar1 + unaff_XMM9_Da) ^ unaff_XMM8_Da);
    fVar19 = (float)((uint)(pfVar1[1] + unaff_XMM9_Db) ^ unaff_XMM8_Db);
    fVar20 = (float)((uint)(*pfVar1 + unaff_XMM9_Dc) ^ unaff_XMM8_Dc);
    fVar21 = (float)((uint)(pfVar1[1] + unaff_XMM9_Dd) ^ unaff_XMM8_Dd);
    fVar14 = (float)((uint)(pfVar1[2] + unaff_XMM9_Da) ^ unaff_XMM8_Da);
    fVar15 = (float)((uint)(pfVar1[3] + unaff_XMM9_Db) ^ unaff_XMM8_Db);
    fVar16 = (float)((uint)(pfVar1[2] + unaff_XMM9_Dc) ^ unaff_XMM8_Dc);
    fVar17 = (float)((uint)(pfVar1[3] + unaff_XMM9_Dd) ^ unaff_XMM8_Dd);
    pfVar1 = (float *)(lVar13 + (int64_t)param_1);
    *pfVar1 = (float)((uint)unaff_XMM7_Db ^ unaff_XMM11_Da) * fVar21 + fVar20 * unaff_XMM7_Da +
              (float)((uint)fVar7 ^ unaff_XMM10_Da) * fVar19 + fVar18 * fVar6;
    pfVar1[1] = (float)((uint)unaff_XMM7_Db ^ unaff_XMM11_Db) * fVar20 + fVar21 * unaff_XMM7_Da +
                (float)((uint)fVar6 ^ unaff_XMM10_Db) * fVar19 + fVar18 * fVar7;
    pfVar1[2] = (float)((uint)fVar5 ^ unaff_XMM11_Dc) * fVar17 + fVar16 * fVar4 +
                (float)((uint)fVar9 ^ unaff_XMM10_Dc) * fVar15 + fVar14 * fVar8;
    pfVar1[3] = (float)((uint)fVar5 ^ unaff_XMM11_Dd) * fVar16 + fVar17 * fVar4 +
                (float)((uint)fVar8 ^ unaff_XMM10_Dd) * fVar15 + fVar14 * fVar9;
    param_1 = param_1 + 4;
    uVar10 = uVar10 - 1;
    unaff_XMM7_Da = fVar2;
    unaff_XMM7_Db = fVar3;
  } while (uVar10 != 0);
  return;
}






// 函数: void FUN_1807f2445(void)
void FUN_1807f2445(void)

{
  return;
}






// 函数: void FUN_1807f2470(float *param_1)
void FUN_1807f2470(float *param_1)

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
  
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = param_1[0x14];
  fVar8 = param_1[0x15];
  fVar10 = param_1[0x16];
  fVar12 = param_1[0x17];
  fVar14 = param_1[0x1c];
  fVar17 = param_1[0x1d];
  fVar15 = param_1[0x1e];
  fVar18 = param_1[0x1f];
  fVar27 = param_1[2] + *param_1;
  fVar28 = param_1[3] + param_1[1];
  fVar29 = -param_1[2] + *param_1;
  fVar30 = -param_1[3] + param_1[1];
  fVar37 = param_1[10] + param_1[8];
  fVar38 = param_1[0xb] + param_1[9];
  fVar39 = -param_1[10] + param_1[8];
  fVar40 = -param_1[0xb] + param_1[9];
  fVar31 = param_1[0xe] + param_1[0xc];
  fVar32 = param_1[0xf] + param_1[0xd];
  fVar33 = -param_1[0xe] + param_1[0xc];
  fVar34 = -param_1[0xf] + param_1[0xd];
  fVar35 = fVar4 + fVar2 + fVar27;
  fVar36 = fVar6 + fVar3 + fVar28;
  fVar27 = -(fVar4 + fVar2) + fVar27;
  fVar28 = -(fVar6 + fVar3) + fVar28;
  fVar9 = param_1[0x12] + param_1[0x10];
  fVar11 = param_1[0x13] + param_1[0x11];
  fVar13 = -param_1[0x12] + param_1[0x10];
  fVar16 = -param_1[0x13] + param_1[0x11];
  fVar19 = param_1[0x1a] + param_1[0x18];
  fVar20 = param_1[0x1b] + param_1[0x19];
  fVar21 = -param_1[0x1a] + param_1[0x18];
  fVar22 = -param_1[0x1b] + param_1[0x19];
  fVar1 = (fVar6 - fVar3) + fVar29;
  fVar5 = (fVar2 - fVar4) + fVar30;
  fVar29 = (fVar3 - fVar6) + fVar29;
  fVar30 = (fVar4 - fVar2) + fVar30;
  fVar23 = fVar10 + fVar7 + fVar9;
  fVar25 = fVar12 + fVar8 + fVar11;
  fVar9 = -(fVar10 + fVar7) + fVar9;
  fVar11 = -(fVar12 + fVar8) + fVar11;
  fVar2 = (fVar12 - fVar8) + fVar13;
  fVar6 = (fVar7 - fVar10) + fVar16;
  fVar13 = (fVar8 - fVar12) + fVar13;
  fVar16 = (fVar10 - fVar7) + fVar16;
  fVar43 = fVar15 + fVar14 + fVar19;
  fVar44 = fVar18 + fVar17 + fVar20;
  fVar19 = -(fVar15 + fVar14) + fVar19;
  fVar20 = -(fVar18 + fVar17) + fVar20;
  fVar3 = (fVar18 - fVar17) + fVar21;
  fVar7 = (fVar14 - fVar15) + fVar22;
  fVar21 = (fVar17 - fVar18) + fVar21;
  fVar22 = (fVar15 - fVar14) + fVar22;
  fVar24 = fVar31 + fVar37 + fVar35;
  fVar26 = fVar32 + fVar38 + fVar36;
  fVar35 = -(fVar31 + fVar37) + fVar35;
  fVar36 = -(fVar32 + fVar38) + fVar36;
  fVar41 = (fVar32 - fVar38) + fVar27;
  fVar42 = (fVar37 - fVar31) + fVar28;
  fVar27 = (fVar38 - fVar32) + fVar27;
  fVar28 = (fVar31 - fVar37) + fVar28;
  fVar10 = fVar40 * -0.70710677 + fVar39 * 0.70710677;
  fVar12 = fVar39 * 0.70710677 + fVar40 * 0.70710677;
  fVar14 = fVar34 * 0.70710677 + fVar33 * 0.70710677;
  fVar17 = fVar33 * -0.70710677 + fVar34 * 0.70710677;
  fVar31 = fVar14 + fVar10 + fVar1;
  fVar32 = fVar17 + fVar12 + fVar5;
  fVar1 = -(fVar14 + fVar10) + fVar1;
  fVar5 = -(fVar17 + fVar12) + fVar5;
  fVar4 = (fVar17 - fVar12) + fVar29;
  fVar8 = (fVar10 - fVar14) + fVar30;
  fVar29 = (fVar12 - fVar17) + fVar29;
  fVar30 = (fVar14 - fVar10) + fVar30;
  fVar10 = fVar2 * 0.9238795 + fVar6 * -0.38268346;
  fVar6 = fVar6 * 0.9238795 + fVar2 * 0.38268346;
  fVar14 = fVar3 * 0.9238795 + fVar7 * 0.38268346;
  fVar18 = fVar7 * 0.9238795 + fVar3 * -0.38268346;
  fVar2 = fVar11 * -0.70710677 + fVar9 * 0.70710677;
  fVar7 = fVar9 * 0.70710677 + fVar11 * 0.70710677;
  fVar17 = fVar20 * 0.70710677 + fVar19 * 0.70710677;
  fVar9 = fVar19 * -0.70710677 + fVar20 * 0.70710677;
  fVar3 = fVar13 * 0.38268343 + fVar16 * -0.9238795;
  fVar12 = fVar16 * 0.38268343 + fVar13 * 0.9238795;
  fVar15 = fVar21 * 0.38268343 + fVar22 * 0.9238795;
  fVar13 = fVar22 * 0.38268343 + fVar21 * -0.9238795;
  *param_1 = fVar43 + fVar23 + fVar24;
  param_1[1] = fVar44 + fVar25 + fVar26;
  param_1[2] = fVar10 + fVar14 + fVar31;
  param_1[3] = fVar6 + fVar18 + fVar32;
  param_1[8] = (fVar44 - fVar25) + fVar35;
  param_1[9] = (fVar23 - fVar43) + fVar36;
  param_1[10] = (fVar18 - fVar6) + fVar1;
  param_1[0xb] = (fVar10 - fVar14) + fVar5;
  param_1[0x10] = -(fVar43 + fVar23) + fVar24;
  param_1[0x11] = -(fVar44 + fVar25) + fVar26;
  param_1[0x12] = -(fVar10 + fVar14) + fVar31;
  param_1[0x13] = -(fVar6 + fVar18) + fVar32;
  param_1[0x18] = (fVar25 - fVar44) + fVar35;
  param_1[0x19] = (fVar43 - fVar23) + fVar36;
  param_1[0x1a] = (fVar6 - fVar18) + fVar1;
  param_1[0x1b] = (fVar14 - fVar10) + fVar5;
  param_1[4] = fVar17 + fVar2 + fVar41;
  param_1[5] = fVar9 + fVar7 + fVar42;
  param_1[6] = fVar15 + fVar3 + fVar4;
  param_1[7] = fVar13 + fVar12 + fVar8;
  param_1[0x14] = -(fVar17 + fVar2) + fVar41;
  param_1[0x15] = -(fVar9 + fVar7) + fVar42;
  param_1[0x16] = -(fVar15 + fVar3) + fVar4;
  param_1[0x17] = -(fVar13 + fVar12) + fVar8;
  param_1[0xc] = (fVar9 - fVar7) + fVar27;
  param_1[0xd] = (fVar2 - fVar17) + fVar28;
  param_1[0xe] = (fVar13 - fVar12) + fVar29;
  param_1[0xf] = (fVar3 - fVar15) + fVar30;
  param_1[0x1c] = (fVar7 - fVar9) + fVar27;
  param_1[0x1d] = (fVar17 - fVar2) + fVar28;
  param_1[0x1e] = (fVar12 - fVar13) + fVar29;
  param_1[0x1f] = (fVar15 - fVar3) + fVar30;
  return;
}






// 函数: void FUN_1807f28f0(float *param_1)
void FUN_1807f28f0(float *param_1)

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
  
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = param_1[2] + *param_1;
  fVar8 = param_1[3] + param_1[1];
  fVar9 = -param_1[2] + *param_1;
  fVar10 = -param_1[3] + param_1[1];
  fVar11 = param_1[0xe] + param_1[0xc];
  fVar12 = param_1[0xf] + param_1[0xd];
  fVar13 = -param_1[0xe] + param_1[0xc];
  fVar14 = -param_1[0xf] + param_1[0xd];
  fVar15 = param_1[10] + param_1[8];
  fVar16 = param_1[0xb] + param_1[9];
  fVar17 = -param_1[10] + param_1[8];
  fVar18 = -param_1[0xb] + param_1[9];
  fVar19 = fVar5 + fVar3 + fVar7;
  fVar20 = fVar6 + fVar4 + fVar8;
  fVar7 = -(fVar5 + fVar3) + fVar7;
  fVar8 = -(fVar6 + fVar4) + fVar8;
  fVar1 = (fVar6 - fVar4) + fVar9;
  fVar2 = (fVar3 - fVar5) + fVar10;
  fVar9 = (fVar4 - fVar6) + fVar9;
  fVar10 = (fVar5 - fVar3) + fVar10;
  fVar3 = fVar17 * 0.70710677 + fVar18 * -0.70710677;
  fVar4 = fVar18 * 0.70710677 + fVar17 * 0.70710677;
  fVar5 = fVar13 * 0.70710677 + fVar14 * 0.70710677;
  fVar6 = fVar14 * 0.70710677 + fVar13 * -0.70710677;
  *param_1 = fVar11 + fVar15 + fVar19;
  param_1[1] = fVar12 + fVar16 + fVar20;
  param_1[2] = fVar5 + fVar3 + fVar1;
  param_1[3] = fVar6 + fVar4 + fVar2;
  param_1[4] = (fVar12 - fVar16) + fVar7;
  param_1[5] = (fVar15 - fVar11) + fVar8;
  param_1[6] = (fVar6 - fVar4) + fVar9;
  param_1[7] = (fVar3 - fVar5) + fVar10;
  param_1[8] = -(fVar11 + fVar15) + fVar19;
  param_1[9] = -(fVar12 + fVar16) + fVar20;
  param_1[10] = -(fVar5 + fVar3) + fVar1;
  param_1[0xb] = -(fVar6 + fVar4) + fVar2;
  param_1[0xc] = (fVar16 - fVar12) + fVar7;
  param_1[0xd] = (fVar11 - fVar15) + fVar8;
  param_1[0xe] = (fVar4 - fVar6) + fVar9;
  param_1[0xf] = (fVar5 - fVar3) + fVar10;
  return;
}






// 函数: void FUN_1807f2a70(float *param_1)
void FUN_1807f2a70(float *param_1)

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
  
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar14 = param_1[0x14];
  fVar17 = param_1[0x15];
  fVar19 = param_1[0x16];
  fVar20 = param_1[0x17];
  fVar15 = param_1[0x1c];
  fVar18 = param_1[0x1d];
  fVar21 = param_1[0x1e];
  fVar22 = param_1[0x1f];
  fVar23 = param_1[2] + *param_1;
  fVar24 = param_1[3] + param_1[1];
  fVar25 = -param_1[2] + *param_1;
  fVar26 = -param_1[3] + param_1[1];
  fVar39 = param_1[10] + param_1[8];
  fVar40 = param_1[0xb] + param_1[9];
  fVar41 = -param_1[10] + param_1[8];
  fVar42 = -param_1[0xb] + param_1[9];
  fVar33 = param_1[0xe] + param_1[0xc];
  fVar34 = param_1[0xf] + param_1[0xd];
  fVar35 = -param_1[0xe] + param_1[0xc];
  fVar36 = -param_1[0xf] + param_1[0xd];
  fVar1 = param_1[0x12] + param_1[0x10];
  fVar4 = param_1[0x13] + param_1[0x11];
  fVar7 = -param_1[0x12] + param_1[0x10];
  fVar8 = -param_1[0x13] + param_1[0x11];
  fVar37 = fVar5 + fVar2 + fVar23;
  fVar38 = fVar6 + fVar3 + fVar24;
  fVar23 = -(fVar5 + fVar2) + fVar23;
  fVar24 = -(fVar6 + fVar3) + fVar24;
  fVar9 = param_1[0x1a] + param_1[0x18];
  fVar10 = param_1[0x1b] + param_1[0x19];
  fVar11 = -param_1[0x1a] + param_1[0x18];
  fVar12 = -param_1[0x1b] + param_1[0x19];
  fVar27 = (fVar3 - fVar6) + fVar25;
  fVar28 = (fVar5 - fVar2) + fVar26;
  fVar25 = (fVar6 - fVar3) + fVar25;
  fVar26 = (fVar2 - fVar5) + fVar26;
  fVar13 = fVar19 + fVar14 + fVar1;
  fVar16 = fVar20 + fVar17 + fVar4;
  fVar1 = -(fVar19 + fVar14) + fVar1;
  fVar4 = -(fVar20 + fVar17) + fVar4;
  fVar29 = (fVar17 - fVar20) + fVar7;
  fVar30 = (fVar19 - fVar14) + fVar8;
  fVar7 = (fVar20 - fVar17) + fVar7;
  fVar8 = (fVar14 - fVar19) + fVar8;
  fVar2 = fVar21 + fVar15 + fVar9;
  fVar5 = fVar22 + fVar18 + fVar10;
  fVar9 = -(fVar21 + fVar15) + fVar9;
  fVar10 = -(fVar22 + fVar18) + fVar10;
  fVar31 = (fVar18 - fVar22) + fVar11;
  fVar32 = (fVar21 - fVar15) + fVar12;
  fVar11 = (fVar22 - fVar18) + fVar11;
  fVar12 = (fVar15 - fVar21) + fVar12;
  fVar21 = fVar33 + fVar39 + fVar37;
  fVar22 = fVar34 + fVar40 + fVar38;
  fVar37 = -(fVar33 + fVar39) + fVar37;
  fVar38 = -(fVar34 + fVar40) + fVar38;
  fVar14 = fVar42 * 0.70710677 + fVar41 * 0.70710677;
  fVar17 = fVar41 * -0.70710677 + fVar42 * 0.70710677;
  fVar19 = fVar36 * -0.70710677 + fVar35 * 0.70710677;
  fVar20 = fVar35 * 0.70710677 + fVar36 * 0.70710677;
  fVar35 = (fVar40 - fVar34) + fVar23;
  fVar36 = (fVar33 - fVar39) + fVar24;
  fVar23 = (fVar34 - fVar40) + fVar23;
  fVar24 = (fVar39 - fVar33) + fVar24;
  fVar3 = fVar19 + fVar14 + fVar27;
  fVar6 = fVar20 + fVar17 + fVar28;
  fVar27 = -(fVar19 + fVar14) + fVar27;
  fVar28 = -(fVar20 + fVar17) + fVar28;
  fVar15 = (fVar17 - fVar20) + fVar25;
  fVar18 = (fVar19 - fVar14) + fVar26;
  fVar25 = (fVar20 - fVar17) + fVar25;
  fVar26 = (fVar14 - fVar19) + fVar26;
  fVar33 = fVar29 * 0.9238795 + fVar30 * 0.38268346;
  fVar30 = fVar30 * 0.9238795 + fVar29 * -0.38268346;
  fVar34 = fVar31 * 0.9238795 + fVar32 * -0.38268346;
  fVar31 = fVar32 * 0.9238795 + fVar31 * 0.38268346;
  fVar29 = fVar4 * 0.70710677 + fVar1 * 0.70710677;
  fVar1 = fVar1 * -0.70710677 + fVar4 * 0.70710677;
  fVar4 = fVar10 * -0.70710677 + fVar9 * 0.70710677;
  fVar9 = fVar9 * 0.70710677 + fVar10 * 0.70710677;
  fVar14 = fVar7 * 0.38268343 + fVar8 * 0.9238795;
  fVar17 = fVar8 * 0.38268343 + fVar7 * -0.9238795;
  fVar19 = fVar11 * 0.38268343 + fVar12 * -0.9238795;
  fVar20 = fVar12 * 0.38268343 + fVar11 * 0.9238795;
  *param_1 = fVar2 + fVar13 + fVar21;
  param_1[1] = fVar5 + fVar16 + fVar22;
  param_1[2] = fVar33 + fVar34 + fVar3;
  param_1[3] = fVar30 + fVar31 + fVar6;
  param_1[8] = (fVar16 - fVar5) + fVar37;
  param_1[9] = (fVar2 - fVar13) + fVar38;
  param_1[10] = (fVar30 - fVar31) + fVar27;
  param_1[0xb] = (fVar34 - fVar33) + fVar28;
  param_1[0x10] = -(fVar2 + fVar13) + fVar21;
  param_1[0x11] = -(fVar5 + fVar16) + fVar22;
  param_1[0x12] = -(fVar33 + fVar34) + fVar3;
  param_1[0x13] = -(fVar30 + fVar31) + fVar6;
  param_1[0x18] = (fVar5 - fVar16) + fVar37;
  param_1[0x19] = (fVar13 - fVar2) + fVar38;
  param_1[0x1a] = (fVar31 - fVar30) + fVar27;
  param_1[0x1b] = (fVar33 - fVar34) + fVar28;
  param_1[4] = fVar4 + fVar29 + fVar35;
  param_1[5] = fVar9 + fVar1 + fVar36;
  param_1[6] = fVar19 + fVar14 + fVar15;
  param_1[7] = fVar20 + fVar17 + fVar18;
  param_1[0x14] = -(fVar4 + fVar29) + fVar35;
  param_1[0x15] = -(fVar9 + fVar1) + fVar36;
  param_1[0x16] = -(fVar19 + fVar14) + fVar15;
  param_1[0x17] = -(fVar20 + fVar17) + fVar18;
  param_1[0xc] = (fVar1 - fVar9) + fVar23;
  param_1[0xd] = (fVar4 - fVar29) + fVar24;
  param_1[0xe] = (fVar17 - fVar20) + fVar25;
  param_1[0xf] = (fVar19 - fVar14) + fVar26;
  param_1[0x1c] = (fVar9 - fVar1) + fVar23;
  param_1[0x1d] = (fVar29 - fVar4) + fVar24;
  param_1[0x1e] = (fVar20 - fVar17) + fVar25;
  param_1[0x1f] = (fVar14 - fVar19) + fVar26;
  return;
}






// 函数: void FUN_1807f2ef0(float *param_1)
void FUN_1807f2ef0(float *param_1)

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
  
  fVar2 = param_1[4];
  fVar4 = param_1[5];
  fVar6 = param_1[6];
  fVar8 = param_1[7];
  fVar1 = param_1[2] + *param_1;
  fVar3 = param_1[3] + param_1[1];
  fVar5 = -param_1[2] + *param_1;
  fVar7 = -param_1[3] + param_1[1];
  fVar11 = param_1[0xe] + param_1[0xc];
  fVar12 = param_1[0xf] + param_1[0xd];
  fVar13 = -param_1[0xe] + param_1[0xc];
  fVar14 = -param_1[0xf] + param_1[0xd];
  fVar15 = param_1[10] + param_1[8];
  fVar16 = param_1[0xb] + param_1[9];
  fVar17 = -param_1[10] + param_1[8];
  fVar18 = -param_1[0xb] + param_1[9];
  fVar19 = fVar6 + fVar2 + fVar1;
  fVar20 = fVar8 + fVar4 + fVar3;
  fVar1 = -(fVar6 + fVar2) + fVar1;
  fVar3 = -(fVar8 + fVar4) + fVar3;
  fVar9 = (fVar4 - fVar8) + fVar5;
  fVar10 = (fVar6 - fVar2) + fVar7;
  fVar5 = (fVar8 - fVar4) + fVar5;
  fVar7 = (fVar2 - fVar6) + fVar7;
  fVar2 = fVar17 * 0.70710677 + fVar18 * 0.70710677;
  fVar4 = fVar18 * 0.70710677 + fVar17 * -0.70710677;
  fVar6 = fVar13 * 0.70710677 + fVar14 * -0.70710677;
  fVar8 = fVar14 * 0.70710677 + fVar13 * 0.70710677;
  *param_1 = fVar11 + fVar15 + fVar19;
  param_1[1] = fVar12 + fVar16 + fVar20;
  param_1[2] = fVar6 + fVar2 + fVar9;
  param_1[3] = fVar8 + fVar4 + fVar10;
  param_1[4] = (fVar16 - fVar12) + fVar1;
  param_1[5] = (fVar11 - fVar15) + fVar3;
  param_1[6] = (fVar4 - fVar8) + fVar5;
  param_1[7] = (fVar6 - fVar2) + fVar7;
  param_1[8] = -(fVar11 + fVar15) + fVar19;
  param_1[9] = -(fVar12 + fVar16) + fVar20;
  param_1[10] = -(fVar6 + fVar2) + fVar9;
  param_1[0xb] = -(fVar8 + fVar4) + fVar10;
  param_1[0xc] = (fVar12 - fVar16) + fVar1;
  param_1[0xd] = (fVar15 - fVar11) + fVar3;
  param_1[0xe] = (fVar8 - fVar4) + fVar5;
  param_1[0xf] = (fVar2 - fVar6) + fVar7;
  return;
}



uint64_t * FUN_1807f3070(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  func_0x0001808069a0();
  puVar1 = param_1 + 0xe;
  param_1[0xf] = puVar1;
  *puVar1 = puVar1;
  param_1[0x10] = 0;
  *param_1 = &memory_allocator_3680_ptr;
  puVar1 = param_1 + 0x15;
  param_1[0x16] = puVar1;
  *puVar1 = puVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x9c) = 0;
  return param_1;
}



uint64_t * FUN_1807f30d0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_8200_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,200);
  }
  return param_1;
}






// 函数: void FUN_1807f3100(int64_t param_1)
void FUN_1807f3100(int64_t param_1)

{
  func_0x000180743c20(*(uint64_t *)(param_1 + 8),8);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffff7f;
                    // WARNING: Subroutine does not return
  SystemCoreHandler(*(uint64_t *)(param_1 + 8),8);
}



uint64_t FUN_1807f3390(int64_t param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int aiStackX_10 [6];
  
  if ((param_2 == (int *)0x0) || (lVar3 = *(int64_t *)(param_1 + 0x28), lVar3 == 0)) {
    uVar5 = 0x1f;
  }
  else {
    if ((param_3 & 2) != 0) {
      *param_2 = *(int *)(param_1 + 0x4c);
      return 0;
    }
    if ((param_3 & 0x10) == 0) {
      if ((*(int *)(lVar3 + 0x110) != 0) && (*(int *)(lVar3 + 0x110) != 7)) {
        return 0x2e;
      }
      if (param_2 == (int *)0x0) {
        return 0x1f;
      }
      if (param_3 == 2) {
        *param_2 = *(int *)(lVar3 + 0x188);
      }
      else {
        if (param_3 == 4) {
          uVar6 = (uint64_t)*(uint *)(lVar3 + 0x188);
          iVar1 = *(int *)(lVar3 + 0x68);
          iVar2 = *(int *)(lVar3 + 0x28);
          if (iVar2 != 1) {
            if (iVar2 == 2) {
              *param_2 = (int)(uVar6 * 0x10 >> 3) * iVar1;
              return 0;
            }
            if (iVar2 == 3) {
              *param_2 = (int)(uVar6 * 0x18 >> 3) * iVar1;
              return 0;
            }
            if ((iVar2 == 4) || (iVar2 == 5)) {
              *param_2 = (int)(uVar6 * 0x20 >> 3) * iVar1;
              return 0;
            }
          }
          *param_2 = *(uint *)(lVar3 + 0x188) * iVar1;
          return 0;
        }
        if (param_3 == 1) {
          *param_2 = (int)(int64_t)
                          ((float)*(uint *)(lVar3 + 0x188) * 0.001 * *(float *)(lVar3 + 0x6c));
          return 0;
        }
        uVar5 = FUN_180772f60(*(uint64_t *)(lVar3 + 0x60));
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      return 0;
    }
    plVar4 = *(int64_t **)(param_1 + 0xc0);
    if (plVar4 == (int64_t *)0x0) {
      *param_2 = *(int *)(param_1 + 0x48);
      return 0;
    }
    uVar5 = (**(code **)(*plVar4 + 0x80))(plVar4,aiStackX_10);
    if ((int)uVar5 == 0) {
      *param_2 = aiStackX_10[0];
      return 0;
    }
  }
  return uVar5;
}



uint64_t FUN_1807f3450(int64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0xc0) == 0) {
    return 0x1e;
  }
  uVar1 = func_0x000180806ae0();
  if (((int)uVar1 == 0) &&
     (uVar1 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x128))
                        (*(int64_t **)(param_1 + 0x28),param_2), (int)uVar1 == 0)) {
    if (((char)*(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x58) < '\0') &&
       (uVar1 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x90))
                          (*(int64_t **)(param_1 + 0xc0),param_2), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1807f34d0(int64_t param_1,int param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  
  if (*(int64_t *)(param_1 + 0xc0) == 0) {
    return 0x1e;
  }
  iVar1 = func_0x000180806af0();
  if ((((iVar1 == 0) &&
       (iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x138))
                          (*(int64_t **)(param_1 + 0x28),param_2,2,param_3 + -1 + param_2,2),
       iVar1 == 0)) && ((char)*(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x58) < '\0')) &&
     (uVar2 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x88))
                        (*(int64_t **)(param_1 + 0xc0),param_2,param_3), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}






// 函数: void FUN_1807f3590(int64_t param_1,uint param_2)
void FUN_1807f3590(int64_t param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_0x000180806b20();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x118))
                      (*(int64_t **)(param_1 + 0x28),param_2);
    if (iVar1 == 0) {
      if (-1 < (char)*(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x58)) {
        param_2 = param_2 & 0xfffffff8;
      }
      (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0xc0))(*(int64_t **)(param_1 + 0xc0),param_2);
    }
  }
  return;
}



int FUN_1807f3610(int64_t param_1,int8_t param_2)

{
  int64_t lVar1;
  int iVar2;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,8);
  }
  iVar2 = func_0x000180806c80(param_1,param_2);
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x3c) & 0x4000) == 0) {
      iVar2 = (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x50))
                        (*(int64_t **)(param_1 + 0xc0),param_2);
      if (iVar2 != 0) goto LAB_1807f3681;
    }
    iVar2 = 0;
  }
LAB_1807f3681:
  if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemCoreHandler(lVar1,8);
  }
  return iVar2;
}






