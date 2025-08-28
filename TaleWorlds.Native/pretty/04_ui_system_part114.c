#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part114.c - 10 个函数
// 函数: void SystemCore_36450(int64_t param_1,int param_2,uint param_3,float *param_4)
void SystemCore_36450(int64_t param_1,int param_2,uint param_3,float *param_4)
{
  int64_t lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int64_t lVar17;
  float *pfVar18;
  float *pfVar19;
  int64_t lVar20;
  int iVar21;
  double dVar22;
  float fVar23;
  int iStackX_8;
  int iStackX_18;
  lVar13 = (int64_t)(int)param_3;
  lVar17 = (int64_t)param_2;
  lVar1 = param_1 + (int64_t)(int)(param_3 - 1) * 4;
  dVar22 = (double)SystemCore_72B3A0(lVar1,param_2);
  iVar11 = 1;
  *param_4 = (float)dVar22;
  if (1 < (int)param_3) {
    if (4 < (int)param_3) {
      pfVar12 = (float *)(lVar1 + -0xc);
      lVar20 = (int64_t)(int)(param_3 * 4) + 4;
      lVar8 = (int64_t)(int)(param_3 * 3) + 3;
      pfVar16 = (float *)(lVar1 + (lVar17 + -3) * 4);
      uVar6 = (param_3 - 5 >> 2) + 1;
      pfVar10 = param_4 + lVar8;
      uVar9 = (uint64_t)uVar6;
      iVar11 = uVar6 * 4 + 1;
      do {
        dVar22 = dVar22 + (double)(pfVar12[2] * pfVar12[2] - pfVar16[2] * pfVar16[2]);
        pfVar10[(lVar13 - lVar8) + 1] = (float)dVar22;
        dVar22 = dVar22 + (double)(pfVar12[1] * pfVar12[1] - pfVar16[1] * pfVar16[1]);
        pfVar10[((int)(param_3 * 2) - lVar8) + 2] = (float)dVar22;
        dVar22 = dVar22 + (double)(*pfVar12 * *pfVar12 - *pfVar16 * *pfVar16);
        *pfVar10 = (float)dVar22;
        pfVar19 = pfVar16 + -1;
        pfVar16 = pfVar16 + -4;
        pfVar18 = pfVar12 + -1;
        pfVar12 = pfVar12 + -4;
        dVar22 = dVar22 + (double)(*pfVar18 * *pfVar18 - *pfVar19 * *pfVar19);
        pfVar10[lVar20 - lVar8] = (float)dVar22;
        pfVar10 = pfVar10 + lVar20;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar11 < (int)param_3) {
      pfVar12 = (float *)(lVar1 + (int64_t)iVar11 * -4);
      pfVar16 = param_4 + (int)((param_3 + 1) * iVar11);
      uVar9 = (uint64_t)(param_3 - iVar11);
      pfVar10 = (float *)(lVar1 + (lVar17 - iVar11) * 4);
      do {
        fVar23 = *pfVar12;
        pfVar12 = pfVar12 + -1;
        fVar5 = *pfVar10;
        pfVar10 = pfVar10 + -1;
        dVar22 = dVar22 + (double)(fVar23 * fVar23 - fVar5 * fVar5);
        *pfVar16 = (float)dVar22;
        pfVar16 = pfVar16 + (int)(param_3 + 1);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  param_1 = param_1 + (int64_t)(int)(param_3 - 2) * 4;
  iStackX_8 = 1;
  if (1 < (int)param_3) {
    iStackX_18 = param_3 * 3;
    pfVar16 = param_4 + 1;
    pfVar10 = param_4 + lVar13;
    lVar8 = (param_1 - lVar1) + -8;
    do {
      dVar22 = (double)SystemCore_34500(lVar1,param_1,param_2);
      iVar11 = 1;
      lVar20 = 1;
      *pfVar10 = (float)dVar22;
      *pfVar16 = (float)dVar22;
      iVar15 = param_3 - iStackX_8;
      if (1 < iVar15) {
        if (4 < iVar15) {
          iVar14 = (param_3 + 1) * 3 + iStackX_8;
          pfVar19 = (float *)(lVar1 + -8);
          pfVar12 = (float *)(lVar1 + (lVar17 + -2) * 4);
          lVar20 = (uint64_t)((iVar15 - 5U >> 2) + 1) * 4 + 1;
          iVar21 = iStackX_18;
          do {
            dVar22 = dVar22 + (double)(*(float *)((int64_t)pfVar19 + lVar8 + 0xc) * pfVar19[1] -
                                      *(float *)(lVar8 + 0xc + (int64_t)pfVar12) * pfVar12[1]);
            fVar23 = (float)dVar22;
            param_4[(int)((iVar21 - param_3) + iVar11)] = fVar23;
            param_4[(int)((-1 - param_3) * 2 + iVar14)] = fVar23;
            dVar22 = dVar22 + (double)(*(float *)((int64_t)pfVar19 + lVar8 + 8) * *pfVar19 -
                                      *(float *)(lVar8 + 8 + (int64_t)pfVar12) * *pfVar12);
            fVar23 = (float)dVar22;
            param_4[(int64_t)(iVar21 + iVar11) + 1] = fVar23;
            param_4[(int)(~param_3 + iVar14)] = fVar23;
            dVar22 = dVar22 + (double)(*(float *)((int64_t)pfVar19 + lVar8 + 4) * pfVar19[-1] -
                                      *(float *)(lVar8 + 4 + (int64_t)pfVar12) * pfVar12[-1]);
            fVar23 = (float)dVar22;
            param_4[(int64_t)(int)(param_3 + iVar21 + iVar11) + 2] = fVar23;
            param_4[iVar14] = fVar23;
            pfVar2 = (float *)((int64_t)pfVar19 + lVar8);
            pfVar3 = (float *)(lVar8 + (int64_t)pfVar12);
            iVar7 = param_3 * 2 + iVar21 + iVar11;
            pfVar18 = pfVar19 + -2;
            pfVar19 = pfVar19 + -4;
            pfVar4 = pfVar12 + -2;
            iVar11 = iVar11 + 4;
            pfVar12 = pfVar12 + -4;
            iVar21 = iVar21 + param_3 * 4;
            dVar22 = dVar22 + (double)(*pfVar2 * *pfVar18 - *pfVar3 * *pfVar4);
            param_4[(int64_t)iVar7 + 3] = (float)dVar22;
            iVar7 = param_3 + 1 + iVar14;
            iVar14 = iVar14 + param_3 * 4 + 4;
            param_4[iVar7] = (float)dVar22;
          } while (iVar11 < iVar15 + -3);
        }
        if (iVar11 < iVar15) {
          pfVar18 = (float *)(lVar1 + lVar20 * -4);
          iVar21 = (iStackX_8 + iVar11) * param_3;
          pfVar12 = (float *)(lVar1 + (lVar17 - lVar20) * 4);
          pfVar19 = param_4 + (int)((param_3 + 1) * iVar11 + iStackX_8);
          do {
            pfVar4 = (float *)((int64_t)pfVar18 + lVar8 + 8);
            iVar14 = iVar21 + iVar11;
            fVar23 = *pfVar18;
            iVar11 = iVar11 + 1;
            pfVar18 = pfVar18 + -1;
            pfVar2 = (float *)(lVar8 + 8 + (int64_t)pfVar12);
            iVar21 = iVar21 + param_3;
            fVar5 = *pfVar12;
            pfVar12 = pfVar12 + -1;
            dVar22 = dVar22 + (double)(*pfVar4 * fVar23 - *pfVar2 * fVar5);
            param_4[iVar14] = (float)dVar22;
            *pfVar19 = (float)dVar22;
            pfVar19 = pfVar19 + (int)(param_3 + 1);
          } while (iVar11 < iVar15);
        }
      }
      param_1 = param_1 + -4;
      pfVar10 = pfVar10 + lVar13;
      pfVar16 = pfVar16 + 1;
      iStackX_18 = iStackX_18 + param_3;
      iStackX_8 = iStackX_8 + 1;
      lVar8 = lVar8 + -4;
    } while (iStackX_8 < (int)param_3);
  }
  return;
}
// 函数: void SystemCore_36990(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4,
void SystemCore_36990(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4,
                  int64_t param_5)
{
  int64_t lVar1;
  double dVar2;
  if (0 < param_4) {
    lVar1 = 0;
    param_1 = param_1 + (int64_t)(param_4 + -1) * 4;
    do {
      dVar2 = (double)SystemCore_34500(param_1,param_2,param_3);
      param_1 = param_1 + -4;
      *(float *)(param_5 + lVar1 * 4) = (float)dVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_4);
  }
  return;
}
// 函数: void SystemCore_369a3(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4)
void SystemCore_369a3(int64_t param_1,uint64_t param_2,int32_t param_3,int param_4)
{
  int64_t lVar1;
  double dVar2;
  int64_t local_var_60;
  lVar1 = 0;
  param_1 = param_1 + (int64_t)(param_4 + -1) * 4;
  do {
    dVar2 = (double)SystemCore_34500(param_1,param_2,param_3);
    param_1 = param_1 + -4;
    *(float *)(local_var_60 + lVar1 * 4) = (float)dVar2;
    lVar1 = lVar1 + 1;
  } while (lVar1 < param_4);
  return;
}
// 函数: void SystemCore_36a0e(void)
void SystemCore_36a0e(void)
{
  return;
}
// 函数: void SystemCore_36a70(uint *param_1,uint *param_2,int param_3,int param_4,uint param_5)
void SystemCore_36a70(uint *param_1,uint *param_2,int param_3,int param_4,uint param_5)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  uint *puVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint64_t uVar20;
  int iVar21;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  uVar20 = (uint64_t)param_5;
  iVar19 = 0;
  iVar11 = 0;
  iVar15 = param_4 - param_3;
  iVar21 = 0;
  do {
    uVar18 = 0;
    uVar9 = 0;
    iVar17 = 0;
    puVar12 = param_2;
    if (0 < (int)param_5) {
      do {
        uVar9 = *puVar12;
        if ((int)uVar9 < 1) {
          uVar9 = -uVar9;
        }
        iVar10 = iVar17;
        if ((int)uVar9 <= (int)uVar18) {
          iVar10 = iVar11;
          uVar9 = uVar18;
        }
        iVar11 = iVar10;
        iVar17 = iVar17 + 1;
        puVar12 = puVar12 + 1;
        uVar18 = uVar9;
      } while (iVar17 < (int)param_5);
    }
    bVar13 = (byte)iVar15;
    if (iVar15 == 1) {
      iVar17 = ((int)uVar9 >> 1) + (uVar9 & 1);
    }
    else {
      iVar17 = ((int)uVar9 >> (bVar13 - 1 & 0x1f)) + 1 >> 1;
    }
    if (iVar17 < 0x8000) break;
    iVar10 = 0x27ffe;
    if (iVar17 < 0x27ffe) {
      iVar10 = iVar17;
    }
    Function_f8da82fe(param_2,param_5,
                        0xffbe - ((iVar10 + -0x7fff) * 0x4000) / ((iVar11 + 1) * iVar10 >> 2));
    iVar21 = iVar21 + 1;
  } while (iVar21 < 10);
  if (iVar21 == 10) {
    if (0 < (int)param_5) {
      do {
        uVar9 = *param_2;
        uVar18 = (int)uVar9 >> (bVar13 - 1 & 0x1f);
        iVar11 = (int)uVar9 >> 1;
        if (iVar15 == 1) {
          iVar19 = (uVar9 & 1) + iVar11;
        }
        else {
          iVar19 = (int)(uVar18 + 1) >> 1;
        }
        if (iVar19 < 0x8000) {
          if (iVar15 == 1) {
            iVar19 = (uVar9 & 1) + iVar11;
            uVar18 = uVar9;
          }
          else {
            iVar19 = (int)(uVar18 + 1) >> 1;
          }
          if (iVar19 < -0x8000) {
            sVar8 = -0x8000;
          }
          else if (iVar15 == 1) {
            sVar8 = ((ushort)uVar9 & 1) + (short)iVar11;
          }
          else {
            sVar8 = (short)((int)(uVar18 + 1) >> 1);
          }
        }
        else {
          sVar8 = 0x7fff;
        }
        *(short *)param_1 = sVar8;
        param_1 = (uint *)((int64_t)param_1 + 2);
        *param_2 = (int)sVar8 << (bVar13 & 0x1f);
        param_2 = param_2 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else if (0 < (int)param_5) {
    if (7 < param_5) {
      auVar28 = ZEXT416(iVar15 - 1);
      if ((param_2 + (int)(param_5 - 1) < param_1) ||
         ((uint *)((int64_t)param_1 + (int64_t)(int)(param_5 - 1) * 2) < param_2)) {
        uVar9 = param_5 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        auVar27._0_4_ = -(uint)(param_4 - param_3 == 1);
        auVar27._4_4_ = -(uint)(param_4 - param_3 == 1);
        auVar27._8_4_ = -(uint)(param_4 - param_3 == 1);
        auVar27._12_4_ = -(uint)(param_4 - param_3 == 1);
        auVar26 = ZEXT416(1);
        puVar12 = param_1;
        puVar14 = param_2;
        do {
          uVar18 = *puVar14;
          uVar1 = puVar14[1];
          uVar2 = puVar14[2];
          uVar3 = puVar14[3];
          iVar19 = iVar19 + 8;
          auVar24._0_4_ = (uVar18 & 1) + ((int)uVar18 >> auVar26);
          auVar24._4_4_ = (uVar1 & 1) + ((int)uVar1 >> auVar26);
          auVar24._8_4_ = (uVar2 & 1) + ((int)uVar2 >> auVar26);
          auVar24._12_4_ = (uVar3 & 1) + ((int)uVar3 >> auVar26);
          uVar4 = puVar14[4];
          uVar5 = puVar14[5];
          uVar6 = puVar14[6];
          uVar7 = puVar14[7];
          auVar22._0_4_ = ((int)uVar18 >> auVar28) + 1 >> auVar26;
          auVar22._4_4_ = ((int)uVar1 >> auVar28) + 1 >> auVar26;
          auVar22._8_4_ = ((int)uVar2 >> auVar28) + 1 >> auVar26;
          auVar22._12_4_ = ((int)uVar3 >> auVar28) + 1 >> auVar26;
          auVar22 = pshuflw(auVar22,~auVar27 & auVar22 | auVar24 & auVar27,0xd8);
          auVar22 = pshufhw(auVar24 & auVar27,auVar22,0xd8);
          *(uint64_t *)puVar12 = CONCAT44(auVar22._8_4_,auVar22._0_4_);
          auVar25._0_4_ = (uVar4 & 1) + ((int)uVar4 >> auVar26);
          auVar25._4_4_ = (uVar5 & 1) + ((int)uVar5 >> auVar26);
          auVar25._8_4_ = (uVar6 & 1) + ((int)uVar6 >> auVar26);
          auVar25._12_4_ = (uVar7 & 1) + ((int)uVar7 >> auVar26);
          auVar23._0_4_ = ((int)uVar4 >> auVar28) + 1 >> auVar26;
          auVar23._4_4_ = ((int)uVar5 >> auVar28) + 1 >> auVar26;
          auVar23._8_4_ = ((int)uVar6 >> auVar28) + 1 >> auVar26;
          auVar23._12_4_ = ((int)uVar7 >> auVar28) + 1 >> auVar26;
          auVar22 = pshuflw(auVar23,~auVar27 & auVar23 | auVar25 & auVar27,0xd8);
          auVar22 = pshufhw(auVar25 & auVar27,auVar22,0xd8);
          *(uint64_t *)(puVar12 + 2) = CONCAT44(auVar22._8_4_,auVar22._0_4_);
          puVar12 = puVar12 + 4;
          puVar14 = puVar14 + 8;
        } while (iVar19 < (int)(param_5 - uVar9));
      }
    }
    if (iVar19 < (int)param_5) {
      uVar20 = (uint64_t)(param_5 - iVar19);
      psVar16 = (short *)((int64_t)param_1 + (int64_t)iVar19 * 2);
      param_2 = param_2 + iVar19;
      do {
        uVar9 = *param_2;
        if (iVar15 == 1) {
          sVar8 = (short)((int)uVar9 >> 1) + ((ushort)uVar9 & 1);
        }
        else {
          sVar8 = (short)(((int)uVar9 >> (bVar13 - 1 & 0x1f)) + 1 >> 1);
        }
        *psVar16 = sVar8;
        param_2 = param_2 + 1;
        psVar16 = psVar16 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  return;
}
// 函数: void SystemCore_36a9b(uint *param_1,uint64_t param_2,int param_3)
void SystemCore_36a9b(uint *param_1,uint64_t param_2,int param_3)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int64_t in_RAX;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  uint64_t unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  int iVar12;
  uint uVar13;
  int64_t unaff_RDI;
  int iVar14;
  short *psVar15;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  uint uVar19;
  uint64_t unaff_R13;
  uint *unaff_R14;
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  iVar12 = unaff_ESI - param_3;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R13;
  uVar19 = unaff_EBP;
  do {
    uVar13 = (uint)unaff_RDI;
    puVar8 = unaff_R14;
    uVar7 = unaff_EBP;
    uVar10 = unaff_EBP;
    uVar16 = unaff_EBP;
    if (0 < (int)uVar13) {
      do {
        uVar7 = *puVar8;
        if ((int)uVar7 < 1) {
          uVar7 = -uVar7;
        }
        if ((int)uVar7 <= (int)uVar10) {
          uVar7 = uVar10;
        }
        uVar16 = uVar16 + 1;
        puVar8 = puVar8 + 1;
        uVar10 = uVar7;
      } while ((int)uVar16 < (int)uVar13);
    }
    bVar9 = (byte)iVar12;
    if (iVar12 == 1) {
      iVar14 = ((int)uVar7 >> 1) + (uVar7 & 1);
    }
    else {
      iVar14 = ((int)uVar7 >> (bVar9 - 1 & 0x1f)) + 1 >> 1;
    }
    if (iVar14 < 0x8000) break;
    Function_f8da82fe();
    uVar19 = uVar19 + 1;
  } while ((int)uVar19 < 10);
  if (uVar19 == 10) {
    if (0 < (int)uVar13) {
      do {
        uVar19 = *unaff_R14;
        uVar7 = (int)uVar19 >> (bVar9 - 1 & 0x1f);
        iVar14 = (int)uVar19 >> 1;
        if (iVar12 == 1) {
          iVar18 = (uVar19 & 1) + iVar14;
        }
        else {
          iVar18 = (int)(uVar7 + 1) >> 1;
        }
        if (iVar18 < 0x8000) {
          if (iVar12 == 1) {
            iVar18 = (uVar19 & 1) + iVar14;
            uVar7 = uVar19;
          }
          else {
            iVar18 = (int)(uVar7 + 1) >> 1;
          }
          if (iVar18 < -0x8000) {
            sVar6 = -0x8000;
          }
          else if (iVar12 == 1) {
            sVar6 = ((ushort)uVar19 & 1) + (short)iVar14;
          }
          else {
            sVar6 = (short)((int)(uVar7 + 1) >> 1);
          }
        }
        else {
          sVar6 = 0x7fff;
        }
        *(short *)param_1 = sVar6;
        param_1 = (uint *)((int64_t)param_1 + 2);
        *unaff_R14 = (int)sVar6 << (bVar9 & 0x1f);
        unaff_R14 = unaff_R14 + 1;
        unaff_RDI = unaff_RDI + -1;
      } while (unaff_RDI != 0);
    }
  }
  else if (0 < (int)uVar13) {
    if (7 < uVar13) {
      auVar26 = ZEXT416(iVar12 - 1);
      if ((unaff_R14 + (int)(uVar13 - 1) < param_1) ||
         ((uint *)((int64_t)param_1 + (int64_t)(int)(uVar13 - 1) * 2) < unaff_R14)) {
        uVar19 = uVar13 & 0x80000007;
        if ((int)uVar19 < 0) {
          uVar19 = (uVar19 - 1 | 0xfffffff8) + 1;
        }
        auVar25._0_4_ = -(uint)(unaff_ESI - param_3 == 1);
        auVar25._4_4_ = -(uint)(unaff_ESI - param_3 == 1);
        auVar25._8_4_ = -(uint)(unaff_ESI - param_3 == 1);
        auVar25._12_4_ = -(uint)(unaff_ESI - param_3 == 1);
        auVar24 = ZEXT416(1);
        puVar8 = param_1;
        puVar11 = unaff_R14;
        do {
          uVar7 = *puVar11;
          uVar10 = puVar11[1];
          uVar16 = puVar11[2];
          uVar1 = puVar11[3];
          unaff_EBP = unaff_EBP + 8;
          auVar22._0_4_ = (uVar7 & 1) + ((int)uVar7 >> auVar24);
          auVar22._4_4_ = (uVar10 & 1) + ((int)uVar10 >> auVar24);
          auVar22._8_4_ = (uVar16 & 1) + ((int)uVar16 >> auVar24);
          auVar22._12_4_ = (uVar1 & 1) + ((int)uVar1 >> auVar24);
          uVar2 = puVar11[4];
          uVar3 = puVar11[5];
          uVar4 = puVar11[6];
          uVar5 = puVar11[7];
          auVar20._0_4_ = ((int)uVar7 >> auVar26) + 1 >> auVar24;
          auVar20._4_4_ = ((int)uVar10 >> auVar26) + 1 >> auVar24;
          auVar20._8_4_ = ((int)uVar16 >> auVar26) + 1 >> auVar24;
          auVar20._12_4_ = ((int)uVar1 >> auVar26) + 1 >> auVar24;
          auVar20 = pshuflw(auVar20,~auVar25 & auVar20 | auVar22 & auVar25,0xd8);
          auVar20 = pshufhw(auVar22 & auVar25,auVar20,0xd8);
          *(uint64_t *)puVar8 = CONCAT44(auVar20._8_4_,auVar20._0_4_);
          auVar23._0_4_ = (uVar2 & 1) + ((int)uVar2 >> auVar24);
          auVar23._4_4_ = (uVar3 & 1) + ((int)uVar3 >> auVar24);
          auVar23._8_4_ = (uVar4 & 1) + ((int)uVar4 >> auVar24);
          auVar23._12_4_ = (uVar5 & 1) + ((int)uVar5 >> auVar24);
          auVar21._0_4_ = ((int)uVar2 >> auVar26) + 1 >> auVar24;
          auVar21._4_4_ = ((int)uVar3 >> auVar26) + 1 >> auVar24;
          auVar21._8_4_ = ((int)uVar4 >> auVar26) + 1 >> auVar24;
          auVar21._12_4_ = ((int)uVar5 >> auVar26) + 1 >> auVar24;
          auVar20 = pshuflw(auVar21,~auVar25 & auVar21 | auVar23 & auVar25,0xd8);
          auVar20 = pshufhw(auVar23 & auVar25,auVar20,0xd8);
          *(uint64_t *)(puVar8 + 2) = CONCAT44(auVar20._8_4_,auVar20._0_4_);
          puVar8 = puVar8 + 4;
          puVar11 = puVar11 + 8;
        } while ((int)unaff_EBP < (int)(uVar13 - uVar19));
      }
    }
    if ((int)unaff_EBP < (int)uVar13) {
      uVar17 = (uint64_t)(uVar13 - unaff_EBP);
      psVar15 = (short *)((int64_t)param_1 + (int64_t)(int)unaff_EBP * 2);
      puVar8 = unaff_R14 + (int)unaff_EBP;
      do {
        uVar19 = *puVar8;
        if (iVar12 == 1) {
          sVar6 = (short)((int)uVar19 >> 1) + ((ushort)uVar19 & 1);
        }
        else {
          sVar6 = (short)(((int)uVar19 >> (bVar9 - 1 & 0x1f)) + 1 >> 1);
        }
        *psVar15 = sVar6;
        puVar8 = puVar8 + 1;
        psVar15 = psVar15 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  return;
}
// 函数: void SystemCore_36b7a(void)
void SystemCore_36b7a(void)
{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  int64_t unaff_RDI;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint *unaff_R14;
  short *unaff_R15;
  if (0 < (int)unaff_RDI) {
    do {
      uVar1 = *unaff_R14;
      uVar4 = (int)uVar1 >> ((byte)unaff_ESI - 1 & 0x1f);
      iVar2 = (int)uVar1 >> 1;
      if (unaff_ESI == 1) {
        iVar5 = (uVar1 & 1) + iVar2;
      }
      else {
        iVar5 = (int)(uVar4 + 1) >> 1;
      }
      if (iVar5 < 0x8000) {
        if (unaff_ESI == 1) {
          iVar5 = (uVar1 & 1) + iVar2;
          uVar4 = uVar1;
        }
        else {
          iVar5 = (int)(uVar4 + 1) >> 1;
        }
        if (iVar5 < -0x8000) {
          sVar3 = -0x8000;
        }
        else if (unaff_ESI == 1) {
          sVar3 = ((ushort)uVar1 & 1) + (short)iVar2;
        }
        else {
          sVar3 = (short)((int)(uVar4 + 1) >> 1);
        }
      }
      else {
        sVar3 = 0x7fff;
      }
      *unaff_R15 = sVar3;
      unaff_R15 = unaff_R15 + 1;
      *unaff_R14 = (int)sVar3 << ((byte)unaff_ESI & 0x1f);
      unaff_R14 = unaff_R14 + 1;
      unaff_RDI = unaff_RDI + -1;
    } while (unaff_RDI != 0);
  }
  return;
}
// 函数: void SystemCore_36c49(void)
void SystemCore_36c49(void)
{
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  uint in_EAX;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  short *psVar16;
  uint64_t uVar17;
  uint *unaff_R14;
  uint *unaff_R15;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int unaff_XMM6_Da;
  int iVar24;
  int unaff_XMM6_Db;
  int iVar25;
  int unaff_XMM6_Dc;
  int iVar26;
  int unaff_XMM6_Dd;
  int iVar27;
  int8_t auVar28 [16];
  int unaff_XMM8_Da;
  int unaff_XMM8_Db;
  int unaff_XMM8_Dc;
  int unaff_XMM8_Dd;
  auVar28 = ZEXT416(in_EAX);
  if ((unaff_R14 + (int)(unaff_EDI - 1) < unaff_R15) ||
     ((uint *)((int64_t)unaff_R15 + (int64_t)(int)(unaff_EDI - 1) * 2) < unaff_R14)) {
    uVar13 = unaff_EDI & 0x80000007;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
    }
    iVar24 = -(uint)(unaff_XMM6_Da - unaff_XMM8_Da == 1);
    iVar25 = -(uint)(unaff_XMM6_Db - unaff_XMM8_Db == 1);
    iVar26 = -(uint)(unaff_XMM6_Dc - unaff_XMM8_Dc == 1);
    iVar27 = -(uint)(unaff_XMM6_Dd - unaff_XMM8_Dd == 1);
    auVar23 = ZEXT416(1);
    puVar14 = unaff_R15;
    puVar15 = unaff_R14;
    do {
      uVar4 = *puVar15;
      uVar5 = puVar15[1];
      uVar6 = puVar15[2];
      uVar7 = puVar15[3];
      unaff_EBP = unaff_EBP + 8;
      auVar19._4_4_ = iVar25;
      auVar19._0_4_ = iVar24;
      auVar19._8_4_ = iVar26;
      auVar19._12_4_ = iVar27;
      auVar21._0_4_ = (uVar4 & 1) + ((int)uVar4 >> auVar23);
      auVar21._4_4_ = (uVar5 & 1) + ((int)uVar5 >> auVar23);
      auVar21._8_4_ = (uVar6 & 1) + ((int)uVar6 >> auVar23);
      auVar21._12_4_ = (uVar7 & 1) + ((int)uVar7 >> auVar23);
      auVar1._4_4_ = iVar25;
      auVar1._0_4_ = iVar24;
      auVar1._8_4_ = iVar26;
      auVar1._12_4_ = iVar27;
      uVar8 = puVar15[4];
      uVar9 = puVar15[5];
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      auVar18._0_4_ = ((int)uVar4 >> auVar28) + 1 >> auVar23;
      auVar18._4_4_ = ((int)uVar5 >> auVar28) + 1 >> auVar23;
      auVar18._8_4_ = ((int)uVar6 >> auVar28) + 1 >> auVar23;
      auVar18._12_4_ = ((int)uVar7 >> auVar28) + 1 >> auVar23;
      auVar19 = pshuflw(auVar18,~auVar19 & auVar18 | auVar21 & auVar1,0xd8);
      auVar19 = pshufhw(auVar21 & auVar1,auVar19,0xd8);
      *(uint64_t *)puVar14 = CONCAT44(auVar19._8_4_,auVar19._0_4_);
      auVar2._4_4_ = iVar25;
      auVar2._0_4_ = iVar24;
      auVar2._8_4_ = iVar26;
      auVar2._12_4_ = iVar27;
      auVar22._0_4_ = (uVar8 & 1) + ((int)uVar8 >> auVar23);
      auVar22._4_4_ = (uVar9 & 1) + ((int)uVar9 >> auVar23);
      auVar22._8_4_ = (uVar10 & 1) + ((int)uVar10 >> auVar23);
      auVar22._12_4_ = (uVar11 & 1) + ((int)uVar11 >> auVar23);
      auVar3._4_4_ = iVar25;
      auVar3._0_4_ = iVar24;
      auVar3._8_4_ = iVar26;
      auVar3._12_4_ = iVar27;
      auVar20._0_4_ = ((int)uVar8 >> auVar28) + 1 >> auVar23;
      auVar20._4_4_ = ((int)uVar9 >> auVar28) + 1 >> auVar23;
      auVar20._8_4_ = ((int)uVar10 >> auVar28) + 1 >> auVar23;
      auVar20._12_4_ = ((int)uVar11 >> auVar28) + 1 >> auVar23;
      auVar19 = pshuflw(auVar20,~auVar2 & auVar20 | auVar22 & auVar3,0xd8);
      auVar19 = pshufhw(auVar22 & auVar3,auVar19,0xd8);
      *(uint64_t *)(puVar14 + 2) = CONCAT44(auVar19._8_4_,auVar19._0_4_);
      puVar14 = puVar14 + 4;
      puVar15 = puVar15 + 8;
    } while (unaff_EBP < (int)(unaff_EDI - uVar13));
  }
  if (unaff_EBP < (int)unaff_EDI) {
    uVar17 = (uint64_t)(unaff_EDI - unaff_EBP);
    psVar16 = (short *)((int64_t)unaff_R15 + (int64_t)unaff_EBP * 2);
    puVar14 = unaff_R14 + unaff_EBP;
    do {
      uVar13 = *puVar14;
      if (unaff_ESI == 1) {
        sVar12 = (short)((int)uVar13 >> 1) + ((ushort)uVar13 & 1);
      }
      else {
        sVar12 = (short)(((int)uVar13 >> ((char)unaff_ESI - 1U & 0x1f)) + 1 >> 1);
      }
      *psVar16 = sVar12;
      puVar14 = puVar14 + 1;
      psVar16 = psVar16 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}
// 函数: void SystemCore_36d59(void)
void SystemCore_36d59(void)
{
  int iVar1;
  short sVar2;
  int *piVar3;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  short *psVar4;
  uint64_t uVar5;
  int64_t unaff_R14;
  int64_t unaff_R15;
  if (unaff_EBP < unaff_EDI) {
    uVar5 = (uint64_t)(uint)(unaff_EDI - unaff_EBP);
    psVar4 = (short *)(unaff_R15 + (int64_t)unaff_EBP * 2);
    piVar3 = (int *)(unaff_R14 + (int64_t)unaff_EBP * 4);
    do {
      iVar1 = *piVar3;
      if (unaff_ESI == 1) {
        sVar2 = (short)(iVar1 >> 1) + ((ushort)iVar1 & 1);
      }
      else {
        sVar2 = (short)((iVar1 >> ((char)unaff_ESI - 1U & 0x1f)) + 1 >> 1);
      }
      *psVar4 = sVar2;
      piVar3 = piVar3 + 1;
      psVar4 = psVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}
// 函数: void SystemCore_36dc0(int8_t *param_1,int *param_2,int *param_3,uint *param_4,int *param_5,
void SystemCore_36dc0(int8_t *param_1,int *param_2,int *param_3,uint *param_4,int *param_5,
                  int *param_6,int64_t param_7,int64_t param_8,byte *param_9,short param_10,
                  int param_11,int param_12)
{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  iVar6 = *param_6;
  iVar7 = param_6[1];
  iVar8 = param_6[2];
  iVar9 = param_6[3];
  iVar10 = param_6[4];
  *param_3 = 0x7fffffff;
  *param_2 = 0x7fffffff;
  *param_1 = 0;
  param_6._0_4_ = 0;
  if (0 < param_12) {
    pcVar14 = (char *)(param_7 + 3);
    param_8 = param_8 - (int64_t)param_9;
    do {
      bVar1 = param_9[param_8];
      cVar2 = *pcVar14;
      cVar3 = pcVar14[1];
      cVar4 = pcVar14[-2];
      cVar5 = pcVar14[-1];
      iVar12 = (uint)bVar1 - param_11;
      iVar13 = (int)((uint64_t)
                     ((int64_t)cVar3 * (int64_t)((int)cVar3 * param_5[0x18] + iVar10 * -0x100)) >>
                    0x10) +
               (int)((uint64_t)
                     ((int64_t)
                      ((int)pcVar14[-3] * *param_5 +
                      (int)cVar4 * param_5[1] * 2 + iVar6 * -0x100 + (int)cVar5 * param_5[2] * 2 +
                      (int)cVar3 * param_5[4] * 2 + param_5[3] * (int)cVar2 * 2) *
                     (int64_t)pcVar14[-3]) >> 0x10) +
               (int)((uint64_t)
                     ((int64_t)
                      ((int)cVar4 * param_5[6] +
                      iVar7 * -0x100 + (int)cVar5 * param_5[7] * 2 + (int)cVar3 * param_5[9] * 2 +
                      (int)cVar2 * param_5[8] * 2) * (int64_t)cVar4) >> 0x10) +
               (int)((uint64_t)
                     ((int64_t)
                      ((int)cVar5 * param_5[0xc] +
                      iVar8 * -0x100 + (int)cVar2 * param_5[0xd] * 2 + (int)cVar3 * param_5[0xe] * 2
                      ) * (int64_t)cVar5) >> 0x10) + 0x8021 +
               (int)((uint64_t)
                     ((int64_t)
                      (param_5[0x12] * (int)cVar2 + iVar9 * -0x100 + (int)cVar3 * param_5[0x13] * 2)
                     * (int64_t)cVar2) >> 0x10);
      if (-1 < iVar13) {
        if (iVar12 < 1) {
          iVar12 = 0;
        }
        iVar13 = iVar12 * 0x800 + iVar13;
        sVar11 = Function_99bd59d7(iVar13);
        iVar12 = (int)(short)(sVar11 + -0x780) * (int)param_10 + (uint)*param_9 * 4;
        if (iVar12 <= *param_3) {
          *param_3 = iVar12;
          *param_2 = iVar13;
          *param_1 = (char)(int)param_6;
          *param_4 = (uint)bVar1;
        }
      }
      param_6._0_4_ = (int)param_6 + 1;
      pcVar14 = pcVar14 + 5;
      param_9 = param_9 + 1;
    } while ((int)param_6 < param_12);
  }
  return;
}