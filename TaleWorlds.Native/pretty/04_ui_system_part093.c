#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part093.c - 7 个函数

// 函数: void FUN_180721bd0(float *param_1,uint param_2,float param_3)
void FUN_180721bd0(float *param_1,uint param_2,float param_3)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  float fVar5;
  
  fVar5 = (float)FUN_1807070a0(param_1,param_1,param_2);
  iVar3 = 0;
  param_3 = param_3 / SQRT(fVar5 + 1e-15);
  if (0 < (int)param_2) {
    if (0xf < param_2) {
      uVar1 = param_2 & 0x8000000f;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
      }
      do {
        iVar3 = iVar3 + 0x10;
        *param_1 = param_3 * *param_1;
        param_1[1] = param_3 * param_1[1];
        param_1[2] = param_3 * param_1[2];
        param_1[3] = param_3 * param_1[3];
        param_1[4] = param_3 * param_1[4];
        param_1[5] = param_3 * param_1[5];
        param_1[6] = param_3 * param_1[6];
        param_1[7] = param_3 * param_1[7];
        param_1[8] = param_3 * param_1[8];
        param_1[9] = param_3 * param_1[9];
        param_1[10] = param_3 * param_1[10];
        param_1[0xb] = param_3 * param_1[0xb];
        param_1[0xc] = param_3 * param_1[0xc];
        param_1[0xd] = param_3 * param_1[0xd];
        param_1[0xe] = param_3 * param_1[0xe];
        param_1[0xf] = param_3 * param_1[0xf];
        param_1 = param_1 + 0x10;
      } while (iVar3 < (int)(param_2 - uVar1));
    }
    if (iVar3 < (int)param_2) {
      if (3 < (int)(param_2 - iVar3)) {
        uVar1 = ((param_2 - iVar3) - 4 >> 2) + 1;
        uVar4 = (uint64_t)uVar1;
        iVar3 = iVar3 + uVar1 * 4;
        do {
          *param_1 = *param_1 * param_3;
          param_1[1] = param_1[1] * param_3;
          param_1[2] = param_1[2] * param_3;
          param_1[3] = param_1[3] * param_3;
          param_1 = param_1 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (iVar3 < (int)param_2) {
        lVar2 = (int64_t)(int)(param_2 - iVar3);
        do {
          *param_1 = param_3 * *param_1;
          lVar2 = lVar2 + -1;
          param_1 = param_1 + 1;
        } while (lVar2 != 0);
      }
    }
  }
  return;
}



int FUN_180721cf0(int64_t param_1,int64_t param_2,int param_3,int param_4)

{
  float *pfVar1;
  int8_t auVar2 [16];
  double dVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
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
  
  fVar18 = 1e-15;
  fVar17 = 1e-15;
  if (param_3 == 0) {
    fVar17 = (float)FUN_1807070a0(param_1,param_1,param_4);
    fVar17 = fVar17 + 1e-15;
    fVar18 = (float)FUN_1807070a0(param_2,param_2,param_4);
    fVar18 = fVar18 + 1e-15;
  }
  else {
    iVar6 = 0;
    if (3 < param_4) {
      lVar7 = param_1 - param_2;
      uVar4 = (param_4 - 4U >> 2) + 1;
      pfVar5 = (float *)(param_2 + 4);
      uVar8 = (uint64_t)uVar4;
      iVar6 = uVar4 * 4;
      do {
        fVar13 = *(float *)(lVar7 + -4 + (int64_t)pfVar5);
        fVar9 = pfVar5[-1] + fVar13;
        fVar13 = fVar13 - pfVar5[-1];
        fVar10 = *(float *)(lVar7 + (int64_t)pfVar5) + *pfVar5;
        fVar15 = *(float *)(lVar7 + (int64_t)pfVar5) - *pfVar5;
        fVar14 = *(float *)(lVar7 + 4 + (int64_t)pfVar5);
        fVar11 = pfVar5[1] + fVar14;
        fVar16 = *(float *)(lVar7 + 8 + (int64_t)pfVar5);
        fVar14 = fVar14 - pfVar5[1];
        pfVar1 = pfVar5 + 2;
        pfVar5 = pfVar5 + 4;
        fVar12 = *pfVar1 + fVar16;
        fVar16 = fVar16 - *pfVar1;
        fVar17 = fVar17 + fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
        fVar18 = fVar18 + fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (iVar6 < param_4) {
      pfVar5 = (float *)(param_2 + (int64_t)iVar6 * 4);
      uVar8 = (uint64_t)(uint)(param_4 - iVar6);
      do {
        fVar13 = *(float *)((param_1 - param_2) + (int64_t)pfVar5);
        fVar14 = fVar13 + *pfVar5;
        fVar13 = fVar13 - *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar17 = fVar17 + fVar14 * fVar14;
        fVar18 = fVar18 + fVar13 * fVar13;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (1e-18 <= fVar18 + fVar17) {
    if (fVar18 <= fVar17) {
      fVar13 = -1.5707964;
      if (0.0 <= fVar18) {
        fVar14 = 1.5707964;
      }
      else {
        fVar14 = -1.5707964;
      }
      if (0.0 <= SQRT(fVar17 * fVar18)) {
        fVar13 = 1.5707964;
      }
      fVar13 = (((fVar18 * 0.43157974 + fVar17) * SQRT(fVar17 * fVar18)) /
                ((fVar18 * 0.678484 + fVar17) * (fVar18 * 0.08595542 + fVar17)) + fVar14) - fVar13;
    }
    else {
      if (0.0 <= fVar18) {
        fVar13 = 1.5707964;
      }
      else {
        fVar13 = -1.5707964;
      }
      fVar13 = fVar13 - (SQRT(fVar17 * fVar18) * (fVar17 * 0.43157974 + fVar18)) /
                        ((fVar17 * 0.678484 + fVar18) * (fVar17 * 0.08595542 + fVar18));
    }
  }
  else {
    fVar13 = 0.0;
  }
  fVar17 = fVar13 * 10430.382 + 0.5;
  dVar3 = (double)fVar17;
  lVar7 = (int64_t)fVar17;
  if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((uint64_t)dVar3 >> 0x20);
    uVar4 = movmskpd(0,auVar2);
    dVar3 = (double)(int64_t)(lVar7 - (uint64_t)(uVar4 & 1));
  }
  return (int)dVar3;
}



int FUN_180721cf4(int64_t param_1,int64_t param_2,int param_3,int param_4)

{
  float *pfVar1;
  int8_t auVar2 [16];
  double dVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
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
  
  fVar18 = 1e-15;
  fVar17 = 1e-15;
  if (param_3 == 0) {
    fVar17 = (float)FUN_1807070a0(param_1,param_1,param_4);
    fVar17 = fVar17 + 1e-15;
    fVar18 = (float)FUN_1807070a0(param_2,param_2,param_4);
    fVar18 = fVar18 + 1e-15;
  }
  else {
    iVar6 = 0;
    if (3 < param_4) {
      lVar7 = param_1 - param_2;
      uVar4 = (param_4 - 4U >> 2) + 1;
      pfVar5 = (float *)(param_2 + 4);
      uVar8 = (uint64_t)uVar4;
      iVar6 = uVar4 * 4;
      do {
        fVar13 = *(float *)(lVar7 + -4 + (int64_t)pfVar5);
        fVar9 = pfVar5[-1] + fVar13;
        fVar13 = fVar13 - pfVar5[-1];
        fVar10 = *(float *)(lVar7 + (int64_t)pfVar5) + *pfVar5;
        fVar15 = *(float *)(lVar7 + (int64_t)pfVar5) - *pfVar5;
        fVar14 = *(float *)(lVar7 + 4 + (int64_t)pfVar5);
        fVar11 = pfVar5[1] + fVar14;
        fVar16 = *(float *)(lVar7 + 8 + (int64_t)pfVar5);
        fVar14 = fVar14 - pfVar5[1];
        pfVar1 = pfVar5 + 2;
        pfVar5 = pfVar5 + 4;
        fVar12 = *pfVar1 + fVar16;
        fVar16 = fVar16 - *pfVar1;
        fVar17 = fVar17 + fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
        fVar18 = fVar18 + fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (iVar6 < param_4) {
      pfVar5 = (float *)(param_2 + (int64_t)iVar6 * 4);
      uVar8 = (uint64_t)(uint)(param_4 - iVar6);
      do {
        fVar13 = *(float *)((param_1 - param_2) + (int64_t)pfVar5);
        fVar14 = fVar13 + *pfVar5;
        fVar13 = fVar13 - *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar17 = fVar17 + fVar14 * fVar14;
        fVar18 = fVar18 + fVar13 * fVar13;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (1e-18 <= fVar18 + fVar17) {
    if (fVar18 <= fVar17) {
      fVar13 = -1.5707964;
      if (0.0 <= fVar18) {
        fVar14 = 1.5707964;
      }
      else {
        fVar14 = -1.5707964;
      }
      if (0.0 <= SQRT(fVar17 * fVar18)) {
        fVar13 = 1.5707964;
      }
      fVar13 = (((fVar18 * 0.43157974 + fVar17) * SQRT(fVar17 * fVar18)) /
                ((fVar18 * 0.678484 + fVar17) * (fVar18 * 0.08595542 + fVar17)) + fVar14) - fVar13;
    }
    else {
      if (0.0 <= fVar18) {
        fVar13 = 1.5707964;
      }
      else {
        fVar13 = -1.5707964;
      }
      fVar13 = fVar13 - (SQRT(fVar17 * fVar18) * (fVar17 * 0.43157974 + fVar18)) /
                        ((fVar17 * 0.678484 + fVar18) * (fVar17 * 0.08595542 + fVar18));
    }
  }
  else {
    fVar13 = 0.0;
  }
  fVar17 = fVar13 * 10430.382 + 0.5;
  dVar3 = (double)fVar17;
  lVar7 = (int64_t)fVar17;
  if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((uint64_t)dVar3 >> 0x20);
    uVar4 = movmskpd(0,auVar2);
    dVar3 = (double)(int64_t)(lVar7 - (uint64_t)(uVar4 & 1));
  }
  return (int)dVar3;
}



int FUN_180721e74(void)

{
  int8_t auVar1 [16];
  uint uVar2;
  
  auVar1._12_4_ = 0x3fe00000;
  auVar1._0_12_ = ZEXT812(0x3fe0000000000000);
  uVar2 = movmskpd(0,auVar1);
  return (int)(double)(int64_t)-(uint64_t)(uVar2 & 1);
}



int FUN_180721f12(float param_1,float param_2,float param_3,float param_4)

{
  int8_t auVar1 [16];
  double dVar2;
  uint uVar3;
  int64_t lVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  fVar5 = param_3;
  if (unaff_XMM7_Da < 0.0) {
    fVar5 = param_4;
  }
  if (0.0 <= SQRT(unaff_XMM6_Da * unaff_XMM7_Da)) {
    param_4 = param_3;
  }
  fVar5 = ((((unaff_XMM7_Da * 0.43157974 + unaff_XMM6_Da) * SQRT(unaff_XMM6_Da * unaff_XMM7_Da)) /
            (param_2 * (param_1 + unaff_XMM6_Da)) + fVar5) - param_4) * 10430.382 + 0.5;
  dVar2 = (double)fVar5;
  lVar4 = (int64_t)fVar5;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((uint64_t)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(int64_t)(lVar4 - (uint64_t)(uVar3 & 1));
  }
  return (int)dVar2;
}



int FUN_180721f4c(uint64_t param_1,float param_2,float param_3)

{
  int8_t auVar1 [16];
  double dVar2;
  uint uVar3;
  int64_t lVar4;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  fVar5 = ((((unaff_XMM7_Da * 0.43157974 + unaff_XMM6_Da) * in_XMM5_Da) / param_2 + in_XMM4_Da) -
          param_3) * 10430.382 + 0.5;
  dVar2 = (double)fVar5;
  lVar4 = (int64_t)fVar5;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((uint64_t)dVar2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(int64_t)(lVar4 - (uint64_t)(uVar3 & 1));
  }
  return (int)dVar2;
}



int FUN_180721fa6(double param_1)

{
  int8_t auVar1 [16];
  int32_t in_EAX;
  uint uVar2;
  int64_t in_RCX;
  
  if ((double)in_RCX != param_1) {
    auVar1._8_4_ = SUB84(param_1,0);
    auVar1._0_8_ = param_1;
    auVar1._12_4_ = (int)((uint64_t)param_1 >> 0x20);
    uVar2 = movmskpd(in_EAX,auVar1);
    param_1 = (double)(int64_t)(in_RCX - (uint64_t)(uVar2 & 1));
  }
  return (int)param_1;
}





// 函数: void FUN_180721fe0(short *param_1,int32_t *param_2,int32_t *param_3,short *param_4,int param_5
void FUN_180721fe0(short *param_1,int32_t *param_2,int32_t *param_3,short *param_4,int param_5
                  ,uint param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  short sVar3;
  short sVar4;
  int8_t auVar5 [12];
  int8_t auVar6 [12];
  short sVar7;
  uint uVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t *puVar11;
  int iVar12;
  int64_t lVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  int64_t lVar19;
  int64_t lVar20;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int iVar30;
  int8_t auVar25 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar23 [16];
  int16_t uVar24;
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  
  lVar13 = (int64_t)(int)param_6;
  *param_2 = *(int32_t *)(param_1 + 2);
  *param_3 = *(int32_t *)(param_1 + 4);
  *(int32_t *)(param_1 + 2) = *(int32_t *)((int64_t)param_2 + lVar13 * 2);
  *(int32_t *)(param_1 + 4) = *(int32_t *)((int64_t)param_3 + lVar13 * 2);
  sVar7 = *param_1;
  iVar10 = (int)sVar7;
  sVar3 = param_1[1];
  iVar16 = (int)sVar3;
  param_5 = param_5 * 8;
  lVar20 = (int64_t)param_5;
  iVar12 = (int)(short)(0x10000 / (int64_t)param_5);
  sVar15 = *param_4;
  sVar4 = param_4[2];
  if (0 < param_5) {
    psVar18 = (short *)((int64_t)param_3 + 2);
    lVar9 = (int64_t)param_2 - (int64_t)param_3;
    lVar19 = lVar20;
    do {
      iVar10 = iVar10 + (((short)(sVar15 - sVar7) * iVar12 >> 0xf) + 1 >> 1);
      iVar16 = iVar16 + (((short)(sVar4 - sVar3) * iVar12 >> 0xf) + 1 >> 1);
      iVar17 = ((int)((uint64_t)
                      ((int64_t)
                       (*(short *)(lVar9 + -2 + (int64_t)psVar18) * 0x200 +
                        *(short *)(lVar9 + 2 + (int64_t)psVar18) * 0x200 +
                       *(short *)(lVar9 + (int64_t)psVar18) * 0x400) * (int64_t)(short)iVar10) >>
                     0x10) +
                (int)((uint64_t)
                      ((int64_t)((int)*(short *)(lVar9 + (int64_t)psVar18) << 0xb) *
                      (int64_t)(short)iVar16) >> 0x10) + *psVar18 * 0x100 >> 7) + 1 >> 1;
      if (iVar17 < 0x8000) {
        sVar14 = (short)iVar17;
        if (iVar17 < -0x8000) {
          sVar14 = -0x8000;
        }
      }
      else {
        sVar14 = 0x7fff;
      }
      *psVar18 = sVar14;
      psVar18 = psVar18 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  sVar7 = (short)*(int32_t *)param_4;
  if (lVar20 < lVar13) {
    sVar3 = param_4[2];
    psVar18 = (short *)((int64_t)param_3 + lVar20 * 2 + 2);
    lVar20 = lVar13 - lVar20;
    lVar19 = (int64_t)param_2 + (2 - (int64_t)param_3);
    do {
      iVar10 = (int)*(short *)((int64_t)psVar18 + lVar19 + -2);
      iVar10 = ((int)((uint64_t)
                      ((int64_t)
                       (*(short *)((int64_t)psVar18 + (int64_t)param_2 + (-2 - (int64_t)param_3))
                        * 0x200 + *(short *)((int64_t)psVar18 + lVar19) * 0x200 + iVar10 * 0x400) *
                      (int64_t)sVar7) >> 0x10) +
                (int)((uint64_t)((int64_t)(iVar10 << 0xb) * (int64_t)sVar3) >> 0x10) +
                *psVar18 * 0x100 >> 7) + 1 >> 1;
      if (iVar10 < 0x8000) {
        sVar15 = (short)iVar10;
        if (iVar10 < -0x8000) {
          sVar15 = -0x8000;
        }
      }
      else {
        sVar15 = 0x7fff;
      }
      *psVar18 = sVar15;
      psVar18 = psVar18 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    sVar7 = *param_4;
  }
  iVar12 = 0;
  lVar20 = 0;
  *param_1 = sVar7;
  param_1[1] = param_4[2];
  iVar10 = iVar12;
  if ((0 < (int)param_6) && (3 < param_6)) {
    if (((uint64_t *)((int64_t)param_2 + lVar13 * 2) < (uint64_t *)((int64_t)param_3 + 2U)) ||
       (iVar10 = 0, (uint64_t)((int64_t)param_3 + lVar13 * 2) < (int64_t)param_2 + 2U)) {
      uVar8 = param_6 & 0x80000003;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
      }
      puVar11 = (uint64_t *)((int64_t)param_3 + 2U);
      iVar10 = iVar12;
      do {
        uVar1 = *(uint64_t *)(((int64_t)param_2 - (int64_t)param_3) + (int64_t)puVar11);
        iVar10 = iVar10 + 4;
        uVar2 = *puVar11;
        uVar24 = (int16_t)(uVar1 >> 0x30);
        auVar27._8_4_ = 0;
        auVar27._0_8_ = uVar1;
        auVar27._12_2_ = uVar24;
        auVar27._14_2_ = uVar24;
        uVar24 = (int16_t)(uVar1 >> 0x20);
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._8_2_ = 0;
        auVar26._0_8_ = uVar1;
        auVar26._10_2_ = uVar24;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._8_2_ = uVar24;
        auVar25._0_8_ = uVar1;
        uVar24 = (int16_t)(uVar1 >> 0x10);
        auVar5._4_8_ = auVar25._8_8_;
        auVar5._2_2_ = uVar24;
        auVar5._0_2_ = uVar24;
        lVar20 = lVar20 + 4;
        iVar17 = auVar5._0_4_ >> 0x10;
        iVar30 = auVar25._8_4_ >> 0x10;
        uVar24 = (int16_t)(uVar2 >> 0x30);
        auVar23._8_4_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23._12_2_ = uVar24;
        auVar23._14_2_ = uVar24;
        uVar24 = (int16_t)(uVar2 >> 0x20);
        auVar22._12_4_ = auVar23._12_4_;
        auVar22._8_2_ = 0;
        auVar22._0_8_ = uVar2;
        auVar22._10_2_ = uVar24;
        auVar29._10_6_ = auVar22._10_6_;
        auVar29._8_2_ = uVar24;
        auVar29._0_8_ = uVar2;
        uVar24 = (int16_t)(uVar2 >> 0x10);
        auVar6._4_8_ = auVar29._8_8_;
        auVar6._2_2_ = uVar24;
        auVar6._0_2_ = uVar24;
        iVar12 = auVar6._0_4_ >> 0x10;
        iVar16 = auVar29._8_4_ >> 0x10;
        auVar21._0_4_ = (int)(short)uVar1 + (int)(short)uVar2;
        auVar21._4_4_ = iVar17 + iVar12;
        auVar21._8_4_ = iVar30 + iVar16;
        auVar21._12_4_ = (auVar26._12_4_ >> 0x10) + (auVar22._12_4_ >> 0x10);
        auVar28._0_4_ = (int)(short)uVar1 - (int)(short)uVar2;
        auVar28._4_4_ = iVar17 - iVar12;
        auVar28._8_4_ = iVar30 - iVar16;
        auVar28._12_4_ = (auVar26._12_4_ >> 0x10) - (auVar22._12_4_ >> 0x10);
        auVar21 = packssdw(auVar21,auVar21);
        auVar29 = packssdw(auVar28,auVar28);
        *(int64_t *)(((int64_t)param_2 - (int64_t)param_3) + -8 + (int64_t)(puVar11 + 1)) =
             auVar21._0_8_;
        *puVar11 = auVar29._0_8_;
        puVar11 = puVar11 + 1;
      } while (lVar20 < (int)(param_6 - uVar8));
    }
  }
  lVar20 = (int64_t)iVar10;
  if (lVar20 < lVar13) {
    psVar18 = (short *)((int64_t)param_3 + lVar20 * 2 + 2);
    do {
      iVar12 = (int)*(short *)(((int64_t)param_2 - (int64_t)param_3) + (int64_t)psVar18);
      iVar10 = iVar12 + *psVar18;
      iVar12 = iVar12 - *psVar18;
      if (iVar10 < 0x8000) {
        uVar24 = (int16_t)iVar10;
        if (iVar10 < -0x8000) {
          uVar24 = 0x8000;
        }
      }
      else {
        uVar24 = 0x7fff;
      }
      *(int16_t *)(((int64_t)param_2 - (int64_t)param_3) + (int64_t)psVar18) = uVar24;
      if (iVar12 < 0x8000) {
        sVar7 = (short)iVar12;
        if (iVar12 < -0x8000) {
          sVar7 = -0x8000;
        }
      }
      else {
        sVar7 = 0x7fff;
      }
      *psVar18 = sVar7;
      lVar20 = lVar20 + 1;
      psVar18 = psVar18 + 1;
    } while (lVar20 < lVar13);
  }
  return;
}





// 函数: void FUN_180722340(uint64_t param_1,int32_t *param_2)
void FUN_180722340(uint64_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  
  uVar1 = FUN_18070f3e0(param_1,&unknown_var_9676_ptr,8);
  *param_2 = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180722370(uint64_t param_1,int *param_2)
void FUN_180722370(uint64_t param_1,int *param_2)

{
  int32_t uVar1;
  int iVar2;
  short *psVar3;
  int64_t lVar4;
  int iVar5;
  int8_t auStack_58 [32];
  int iStack_38;
  short asStack_34 [2];
  int iStack_30;
  int iStack_2c;
  short sStack_28;
  int iStack_24;
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  iStack_24 = FUN_18070f3e0(param_1,&unknown_var_9648_ptr,8);
  psVar3 = asStack_34;
  lVar4 = 2;
  iStack_30 = iStack_24 / 5;
  iStack_24 = iStack_24 % 5;
  do {
    uVar1 = FUN_18070f3e0(param_1,&unknown_var_9556_ptr,8);
    *(int32_t *)(psVar3 + -2) = uVar1;
    uVar1 = FUN_18070f3e0(param_1,&unknown_var_9564_ptr,8);
    *(int32_t *)psVar3 = uVar1;
    psVar3 = psVar3 + 6;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = (int64_t)(iStack_38 + iStack_30 * 3);
  iVar5 = (int)(short)((uint64_t)
                       (uint)((int)*(short *)(&unknown_var_9618_ptr + lVar4 * 2) -
                             (int)*(short *)(&unknown_var_9616_ptr + lVar4 * 2)) * 0x199a >> 0x10) *
          (int)(short)(asStack_34[0] * 2 + 1) + (int)*(short *)(&unknown_var_9616_ptr + lVar4 * 2);
  *param_2 = iVar5;
  lVar4 = (int64_t)(iStack_2c + iStack_24 * 3);
  iVar2 = (int)(short)(sStack_28 * 2 + 1) *
          (int)(short)((uint64_t)
                       (uint)((int)*(short *)(&unknown_var_9618_ptr + lVar4 * 2) -
                             (int)*(short *)(&unknown_var_9616_ptr + lVar4 * 2)) * 0x199a >> 0x10) +
          (int)*(short *)(&unknown_var_9616_ptr + lVar4 * 2);
  param_2[1] = iVar2;
  *param_2 = iVar5 - iVar2;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_58);
}





// 函数: void FUN_1807224d0(int64_t param_1)
void FUN_1807224d0(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1 + 4,0,0x944);
}



int32_t FUN_180722540(int64_t param_1,int param_2,uint64_t param_3)

{
  int32_t uVar1;
  int iVar2;
  void *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)(short)param_2;
  uVar1 = 0;
  *(int *)(param_1 + 0x91c) = iVar4 * 5;
  iVar5 = (int)(short)(iVar4 * 5) * (int)*(short *)(param_1 + 0x914);
  iVar2 = *(int *)(param_1 + 0x90c);
  if ((iVar2 != param_2) || (*(int *)(param_1 + 0x910) != (int)param_3)) {
    uVar1 = FUN_18071b320(param_1 + 0x990,iVar4 * 1000,param_3,0);
    *(int *)(param_1 + 0x910) = (int)param_3;
    iVar2 = *(int *)(param_1 + 0x90c);
  }
  if ((iVar2 == param_2) && (iVar5 == *(int *)(param_1 + 0x918))) {
    return uVar1;
  }
  if (param_2 == 8) {
    puVar3 = &unknown_var_4264_ptr;
    if (*(int *)(param_1 + 0x914) != 4) {
      puVar3 = &unknown_var_4260_ptr;
    }
    *(void **)(param_1 + 0x958) = puVar3;
    iVar2 = *(int *)(param_1 + 0x90c);
  }
  else {
    puVar3 = &unknown_var_4224_ptr;
    if (*(int *)(param_1 + 0x914) != 4) {
      puVar3 = &unknown_var_4280_ptr;
    }
    *(void **)(param_1 + 0x958) = puVar3;
  }
  if (iVar2 == param_2) {
    *(int *)(param_1 + 0x90c) = param_2;
    *(int *)(param_1 + 0x918) = iVar5;
    return uVar1;
  }
  *(int *)(param_1 + 0x920) = iVar4 * 0x14;
  if ((param_2 - 8U & 0xfffffffb) == 0) {
    puVar3 = &unknown_var_7216_ptr;
    uVar1 = 10;
  }
  else {
    puVar3 = &unknown_var_5056_ptr;
    uVar1 = 0x10;
  }
  *(int32_t *)(param_1 + 0x924) = uVar1;
  *(void **)(param_1 + 0xac0) = puVar3;
  if (param_2 == 0x10) {
    puVar3 = &unknown_var_9592_ptr;
  }
  else if (param_2 == 0xc) {
    puVar3 = &unknown_var_9572_ptr;
  }
  else {
    if (param_2 != 8) goto LAB_180722683;
    puVar3 = &unknown_var_9560_ptr;
  }
  *(void **)(param_1 + 0x950) = puVar3;
LAB_180722683:
  *(int32_t *)(param_1 + 0x948) = 1;
  *(int32_t *)(param_1 + 0x904) = 100;
  *(int8_t *)(param_1 + 0x908) = 10;
  *(int32_t *)(param_1 + 0x105c) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x504,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807226f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1807226f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int param_5,uint64_t param_6,int32_t param_7)

{
  int8_t auStack_c8 [136];
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_38;
  uStack_40 = 0;
  uStack_38 = param_4;
  if ((param_5 != 0) &&
     ((param_5 != 2 || (*(int *)(param_1 + 0x980 + (int64_t)*(int *)(param_1 + 0x960) * 4) != 1))))
  {
    *(int8_t *)(param_1 + 0xae5) = *(int8_t *)(param_1 + 0x105c);
    FUN_180728660(param_1,auStack_c8,param_3,1,param_7);
                    // WARNING: Subroutine does not return
    memmove(param_1 + 0x544,param_1 + ((int64_t)*(int *)(param_1 + 0x918) + 0x2a2) * 2,
            (int64_t)(*(int *)(param_1 + 0x920) - *(int *)(param_1 + 0x918)) * 2);
  }
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180722910(int64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5)
void FUN_180722910(int64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5)

{
  int8_t uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  short *psVar7;
  int8_t *puVar8;
  char *pcVar9;
  int iVar10;
  int8_t auStack_98 [32];
  int8_t auStack_78 [16];
  short asStack_68 [16];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  if ((param_4 == 0) && (*(int *)(param_1 + 0x970 + (int64_t)param_3 * 4) == 0)) {
    iVar4 = FUN_18070f3e0(param_2,&unknown_var_9612_ptr,8);
  }
  else {
    iVar4 = FUN_18070f3e0(param_2,&unknown_var_9608_ptr,8);
    iVar4 = iVar4 + 2;
  }
  cVar2 = (char)(iVar4 >> 1);
  *(char *)(param_1 + 0xae5) = cVar2;
  *(byte *)(param_1 + 0xae6) = (byte)iVar4 & 1;
  if (param_5 == 2) {
    uVar1 = FUN_18070f3e0(param_2,&unknown_var_4120_ptr,8);
    *(int8_t *)(param_1 + 0xac8) = uVar1;
  }
  else {
    cVar2 = FUN_18070f3e0(param_2,&unknown_var_4096_ptr + (int64_t)cVar2 * 8,8);
    *(char *)(param_1 + 0xac8) = cVar2 << 3;
    cVar2 = FUN_18070f3e0(param_2,&unknown_var_9592_ptr,8);
    *(char *)(param_1 + 0xac8) = *(char *)(param_1 + 0xac8) + cVar2;
  }
  iVar4 = 1;
  if (1 < *(int *)(param_1 + 0x914)) {
    puVar8 = (int8_t *)(param_1 + 0xac9);
    do {
      uVar1 = FUN_18070f3e0(param_2,&unknown_var_4120_ptr,8);
      *puVar8 = uVar1;
      puVar8 = puVar8 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x914));
  }
  cVar2 = FUN_18070f3e0(param_2,(int64_t)
                                (((int)*(char *)(param_1 + 0xae5) >> 1) *
                                (int)**(short **)(param_1 + 0xac0)) +
                                *(int64_t *)(*(short **)(param_1 + 0xac0) + 0xc),8);
  *(char *)(param_1 + 0xad0) = cVar2;
  FUN_1807248c0(asStack_68,auStack_78,*(uint64_t *)(param_1 + 0xac0),(int)cVar2);
  lVar6 = *(int64_t *)(param_1 + 0xac0);
  iVar10 = 0;
  iVar4 = 0;
  if (0 < *(short *)(lVar6 + 2)) {
    psVar7 = asStack_68;
    pcVar9 = (char *)(param_1 + 0xad1);
    do {
      iVar5 = FUN_18070f3e0(param_2,(int64_t)*psVar7 + *(int64_t *)(lVar6 + 0x30),8);
      if (iVar5 == 0) {
        iVar5 = FUN_18070f3e0(param_2,&unknown_var_9580_ptr,8);
        iVar5 = -iVar5;
      }
      else if (iVar5 == 8) {
        iVar5 = FUN_18070f3e0(param_2,&unknown_var_9580_ptr,8);
        iVar5 = iVar5 + 8;
      }
      iVar4 = iVar4 + 1;
      *pcVar9 = (char)iVar5 + -4;
      psVar7 = psVar7 + 1;
      lVar6 = *(int64_t *)(param_1 + 0xac0);
      pcVar9 = pcVar9 + 1;
    } while (iVar4 < *(short *)(lVar6 + 2));
  }
  if (*(int *)(param_1 + 0x914) == 4) {
    uVar1 = FUN_18070f3e0(param_2,&unknown_var_9696_ptr,8);
  }
  else {
    uVar1 = 4;
  }
  *(int8_t *)(param_1 + 0xae7) = uVar1;
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    if (((param_5 == 2) && (*(int *)(param_1 + 0x968) == 2)) &&
       (sVar3 = FUN_18070f3e0(param_2,&unknown_var_4200_ptr,8), 0 < sVar3)) {
      sVar3 = *(short *)(param_1 + 0x96c) + -9 + sVar3;
      *(short *)(param_1 + 0xae2) = sVar3;
    }
    else {
      sVar3 = FUN_18070f3e0(param_2,&unknown_var_4168_ptr,8);
      *(short *)(param_1 + 0xae2) = sVar3 * (short)(*(int *)(param_1 + 0x90c) >> 1);
      sVar3 = FUN_18070f3e0(param_2,*(uint64_t *)(param_1 + 0x950),8);
      *(short *)(param_1 + 0xae2) = *(short *)(param_1 + 0xae2) + sVar3;
      sVar3 = *(short *)(param_1 + 0xae2);
    }
    *(short *)(param_1 + 0x96c) = sVar3;
    uVar1 = FUN_18070f3e0(param_2,*(uint64_t *)(param_1 + 0x958),8);
    *(int8_t *)(param_1 + 0xae4) = uVar1;
    uVar1 = FUN_18070f3e0(param_2,&unknown_var_4304_ptr,8);
    *(int8_t *)(param_1 + 0xae8) = uVar1;
    if (0 < *(int *)(param_1 + 0x914)) {
      puVar8 = (int8_t *)(param_1 + 0xacc);
      do {
        uVar1 = FUN_18070f3e0(param_2,*(uint64_t *)
                                       (&unknown_var_4312_ptr + (int64_t)*(char *)(param_1 + 0xae8) * 8),8
                             );
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x914));
    }
    if (param_5 == 0) {
      uVar1 = FUN_18070f3e0(param_2,&unknown_var_9588_ptr,8);
      *(int8_t *)(param_1 + 0xae9) = uVar1;
    }
    else {
      *(int8_t *)(param_1 + 0xae9) = 0;
    }
  }
  *(int *)(param_1 + 0x968) = (int)*(char *)(param_1 + 0xae5);
  uVar1 = FUN_18070f3e0(param_2,&unknown_var_9560_ptr,8);
  *(int8_t *)(param_1 + 0xaea) = uVar1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_98);
}





