#include "TaleWorlds.Native.Split.h"
// 99_part_11_part036.c - 1 个函数
// 函数: void SystemCore_a208b(uint64_t param_1,float *param_2,int param_3,int64_t param_4,uint64_t param_5,
void SystemCore_a208b(uint64_t param_1,float *param_2,int param_3,int64_t param_4,uint64_t param_5,
                  uint64_t param_6,float param_7)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint64_t uVar5;
  float *pfVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  float *pfVar7;
  float *unaff_RSI;
  uint uVar8;
  int iVar9;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_XMM3_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  uint unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int64_t local_var_60;
  do {
    pfVar6 = param_2;
    pfVar7 = unaff_RSI;
    fVar12 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + param_1 * 4) ^
                    unaff_XMM12_Da);
    iVar9 = param_3;
LAB_1807a1d9b:
    param_3 = iVar9 + 4;
    param_2 = pfVar6 + 4;
    pfVar7[4] = in_XMM3_Da * fVar12;
    unaff_RSI = pfVar7 + 8;
    param_4 = param_4 + -1;
    if (param_4 == 0) {
// WARNING: Subroutine does not return
      memset((int64_t)(*(int *)(unaff_RBX + 0x14030) + 2) * 4 + 0x180c11950,0,
             (int64_t)(*(int *)(unaff_RBX + 0x14030) + -2) << 2);
    }
    pfVar6[3] = (unaff_XMM7_Da * *(float *)(local_var_60 + -0xa014 + (int64_t)param_2) -
                (float)(iVar9 + 2)) * unaff_XMM8_Da + (float)(iVar9 + 2) * param_7 + pfVar6[3];
    *param_2 = (unaff_XMM7_Da * *(float *)(unaff_R15 + -0xa014 + (int64_t)param_2) -
               (float)(iVar9 + 3)) * unaff_XMM8_Da + (float)(iVar9 + 3) * param_7 + *param_2;
    pfVar6[5] = (unaff_XMM7_Da * *(float *)(unaff_R12 + -0xa014 + (int64_t)param_2) -
                (float)param_3) * unaff_XMM8_Da + (float)param_3 * param_7 + pfVar6[5];
    pfVar6[6] = (unaff_XMM7_Da * *(float *)((int64_t)pfVar6 + unaff_R13 + -0xa004) -
                (float)(iVar9 + 5)) * unaff_XMM8_Da + (float)(iVar9 + 5) * param_7 + pfVar6[6];
    fVar12 = pfVar6[3];
    if ((unaff_XMM14_Da < fVar12) || (fVar12 < unaff_XMM15_Da)) {
      pfVar6[3] = fVar12 - (float)(int)(fVar12 * unaff_XMM10_Da) * unaff_XMM13_Da;
    }
    fVar12 = *param_2;
    if ((unaff_XMM14_Da < fVar12) || (fVar12 < unaff_XMM15_Da)) {
      *param_2 = fVar12 - (float)(int)(fVar12 * unaff_XMM10_Da) * unaff_XMM13_Da;
    }
    fVar12 = pfVar6[5];
    if ((unaff_XMM14_Da < fVar12) || (fVar12 < unaff_XMM15_Da)) {
      pfVar6[5] = fVar12 - (float)(int)(fVar12 * unaff_XMM10_Da) * unaff_XMM13_Da;
    }
    fVar12 = pfVar6[6];
    if ((unaff_XMM14_Da < fVar12) || (fVar12 < unaff_XMM15_Da)) {
      fVar12 = fVar12 - (float)(int)(fVar12 * unaff_XMM10_Da) * unaff_XMM13_Da;
      pfVar6[6] = fVar12;
    }
    fVar10 = pfVar6[3];
    fVar1 = *param_2;
    fVar2 = pfVar6[5];
    uVar4 = (uint)(fVar10 * unaff_XMM10_Da * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a1958:
      fVar11 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar11 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar11 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar11 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a1958;
      }
    }
    fVar3 = *(float *)(unaff_R14 + -0xa014 + (int64_t)param_2);
    pfVar7[5] = fVar3 * fVar11;
    uVar4 = (uint)((fVar10 * unaff_XMM10_Da - 0.25) * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a19fc:
      fVar10 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar10 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a19fc;
      }
    }
    pfVar7[6] = fVar3 * fVar10;
    uVar4 = (uint)(fVar1 * unaff_XMM10_Da * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a1a8b:
      fVar10 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar10 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a1a8b;
      }
    }
    fVar11 = *(float *)((int64_t)pfVar6 + unaff_RBP + -0xa004);
    pfVar7[7] = fVar11 * fVar10;
    uVar4 = (uint)((fVar1 * unaff_XMM10_Da - 0.25) * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a1b32:
      fVar10 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar10 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a1b32;
      }
    }
    *unaff_RSI = fVar11 * fVar10;
    uVar4 = (uint)(fVar2 * unaff_XMM10_Da * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a1bc0:
      fVar10 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar10 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a1bc0;
      }
    }
    fVar1 = *(float *)(in_R11 + -0xa014 + (int64_t)param_2);
    pfVar7[9] = fVar1 * fVar10;
    uVar4 = (uint)((fVar2 * unaff_XMM10_Da - 0.25) * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a1c60:
      fVar10 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar10 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a1c60;
      }
    }
    pfVar7[10] = fVar1 * fVar10;
    uVar4 = (uint)(fVar12 * unaff_XMM10_Da * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    uVar5 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    if (uVar4 >> 0xd == 0) {
LAB_1807a1cef:
      fVar10 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + uVar5 * 4);
    }
    else if (uVar8 == 1) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
    }
    else if (uVar8 == 2) {
      fVar10 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) + -0x10000 + uVar5 * 4) ^
                      unaff_XMM12_Da);
    }
    else {
      fVar10 = unaff_XMM9_Da;
      if (uVar8 == 3) {
        uVar5 = 0x7fff - uVar5;
        goto LAB_1807a1cef;
      }
    }
    in_XMM3_Da = *(float *)(in_R10 + -0xa014 + (int64_t)param_2);
    pfVar7[0xb] = in_XMM3_Da * fVar10;
    uVar4 = (uint)((fVar12 * unaff_XMM10_Da - 0.25) * unaff_XMM11_Da);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    uVar4 = uVar4 & 0x7fff;
    param_1 = (uint64_t)uVar4;
    uVar8 = uVar4 >> 0xd;
    pfVar6 = param_2;
    pfVar7 = unaff_RSI;
    iVar9 = param_3;
    if (uVar4 >> 0xd == 0) goto LAB_1807a1d8f;
    if (uVar8 == 1) {
      fVar12 = (float)(*(uint *)(*(int64_t *)(unaff_RBX + 0x14038) +
                                (0x3fff - (uint64_t)uVar4) * 4) ^ unaff_XMM12_Da);
      goto LAB_1807a1d9b;
    }
    if (uVar8 != 2) break;
  } while( true );
  fVar12 = unaff_XMM9_Da;
  if (uVar8 == 3) {
    param_1 = 0x7fff - param_1;
LAB_1807a1d8f:
    fVar12 = *(float *)(*(int64_t *)(unaff_RBX + 0x14038) + param_1 * 4);
  }
  goto LAB_1807a1d9b;
}
uint64_t SystemCore_a20e0(int64_t *param_1)
{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  lVar3 = *param_1;
  uVar5 = 0;
  fVar1 = *(float *)(lVar3 + 0x25f0);
  iVar2 = *(int *)(*(int64_t *)(lVar3 + 0xa8) + 0x6d0);
  *(float *)(lVar3 + 0x25a0) = fVar1;
  *(float *)(lVar3 + 0x25e4) = (float)iVar2;
  if (-80.0 < fVar1) {
    uVar4 = powf(param_1,fVar1 * 0.05);
  }
  else {
    uVar4 = 0;
  }
  *(int32_t *)(lVar3 + 0x25b0) = 0;
  *(int32_t *)(lVar3 + 0x25a4) = uVar4;
  *(float *)(lVar3 + 0x25b4) = *(float *)(lVar3 + 0x25f4);
  if (-80.0 < *(float *)(lVar3 + 0x25f4)) {
    uVar4 = powf();
  }
  else {
    uVar4 = 0;
  }
  *(int32_t *)(lVar3 + 0x25c4) = 0;
  *(int32_t *)(lVar3 + 0x25b8) = uVar4;
  *(float *)(lVar3 + 0x25c8) = *(float *)(lVar3 + 0x25f8);
  if (-80.0 < *(float *)(lVar3 + 0x25f8)) {
    uVar5 = powf();
  }
  *(int32_t *)(lVar3 + 0x25dc) = *(int32_t *)(lVar3 + 0x25fc);
  *(int32_t *)(lVar3 + 0x25e0) = *(int32_t *)(lVar3 + 0x2600);
  *(int32_t *)(lVar3 + 0x25ec) = *(int32_t *)(lVar3 + 0x2604);
  *(int32_t *)(lVar3 + 0x25cc) = uVar5;
  *(int32_t *)(lVar3 + 0x25d8) = 0;
  SystemCore_a4650(lVar3);
  SystemCore_a4a90(lVar3,0);
  SystemCore_a47d0(lVar3,0);
  *(int32_t *)(lVar3 + 0x25e8) = 0;
  return 0;
}
uint64_t SystemCore_a22a0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  float fVar2;
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x25f0);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x25f0);
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x25f4);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x25f4);
  }
  else if (param_2 == 2) {
    *param_3 = *(int32_t *)(lVar1 + 0x25f8);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x25f8);
  }
  else if (param_2 == 3) {
    *param_3 = *(int32_t *)(lVar1 + 0x25fc);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x25fc);
  }
  else {
    if ((param_2 != 4) || (*param_3 = *(int32_t *)(lVar1 + 0x2600), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x2600);
  }
// WARNING: Subroutine does not return
  SystemDataValidator(param_4,0x20,&rendering_buffer_2048_ptr,(double)fVar2);
}
uint64_t SystemCore_a23a0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  if (param_2 == 5) {
    lVar2 = *param_1;
    *param_3 = *(int32_t *)(lVar2 + 0x2604);
    if (param_4 != 0) {
      iVar1 = *(int *)(lVar2 + 0x2604);
      if (iVar1 == 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(param_4,0x20,&processed_var_6436_ptr);
      }
      if (iVar1 == 1) {
// WARNING: Subroutine does not return
        SystemDataValidator(param_4,0x20,&processed_var_6444_ptr);
      }
      if (iVar1 == 2) {
// WARNING: Subroutine does not return
        SystemDataValidator(param_4,0x20,&processed_var_6452_ptr);
      }
    }
  }
  return 0;
}
uint64_t SystemCore_a2420(int64_t param_1)
{
  int *piVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uVar13 = 0;
  lVar10 = *(int64_t *)(param_1 + 0xe8);
  *(float *)(param_1 + 0x25e4) = (float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  uVar7 = uVar13;
  uVar9 = uVar13;
  if (0 < *(int *)(lVar10 + 0x60)) {
    do {
      piVar1 = *(int **)(uVar7 + *(int64_t *)(lVar10 + 0x68));
      if (*piVar1 == 0) {
        uVar2 = Function_9c6a16e1(param_1,uVar9,piVar1[0xe]);
      }
      else {
        uVar2 = Function_244af3dd(param_1,uVar9,piVar1[0xe]);
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar10 = *(int64_t *)(param_1 + 0xe8);
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (uint64_t)uVar8;
    } while ((int)uVar8 < *(int *)(lVar10 + 0x60));
  }
  uVar15 = 0;
  *(float *)(param_1 + 0x25a0) = *(float *)(param_1 + 0x25f0);
  if (-80.0 < *(float *)(param_1 + 0x25f0)) {
    uVar14 = powf();
  }
  else {
    uVar14 = 0;
  }
  *(int32_t *)(param_1 + 0x25b0) = 0;
  *(int32_t *)(param_1 + 0x25a4) = uVar14;
  *(float *)(param_1 + 0x25b4) = *(float *)(param_1 + 0x25f4);
  if (-80.0 < *(float *)(param_1 + 0x25f4)) {
    uVar14 = powf();
  }
  else {
    uVar14 = 0;
  }
  *(int32_t *)(param_1 + 0x25c4) = 0;
  *(int32_t *)(param_1 + 0x25b8) = uVar14;
  *(float *)(param_1 + 0x25c8) = *(float *)(param_1 + 0x25f8);
  if (-80.0 < *(float *)(param_1 + 0x25f8)) {
    uVar15 = powf();
  }
  plVar6 = (int64_t *)(param_1 + 0xda8);
  *(int32_t *)(param_1 + 0x25dc) = *(int32_t *)(param_1 + 0x25fc);
  lVar10 = 4;
  *(int32_t *)(param_1 + 0x25e0) = *(int32_t *)(param_1 + 0x2600);
  *(int32_t *)(param_1 + 0x25cc) = uVar15;
  *(int32_t *)(param_1 + 0x25ec) = *(int32_t *)(param_1 + 0x2604);
  *(int32_t *)(param_1 + 0x25d8) = 0;
  do {
    lVar4 = ((int64_t)uVar13 >> 1) * 0x70;
    lVar3 = param_1 + 0x220 + lVar4;
    lVar11 = param_1 + 0x300 + lVar4;
    lVar12 = param_1 + 0x3e0 + lVar4;
    lVar4 = param_1 + 0x4c0 + lVar4;
    lVar5 = 4;
    do {
      plVar6[-0x100] = lVar3;
      *plVar6 = lVar11;
      plVar6[0x100] = lVar12;
      plVar6[0x200] = lVar4;
      plVar6[-0xfe] = lVar3;
      plVar6[2] = lVar11;
      plVar6[0x102] = lVar12;
      plVar6[0x202] = lVar4;
      plVar6[-0xfc] = lVar3;
      plVar6[4] = lVar11;
      plVar6[0x104] = lVar12;
      plVar6[0x204] = lVar4;
      plVar6[-0xfa] = lVar3;
      plVar6[6] = lVar11;
      plVar6[0x106] = lVar12;
      plVar6[0x206] = lVar4;
      plVar6[-0xf8] = lVar3;
      plVar6[8] = lVar11;
      plVar6[0x108] = lVar12;
      plVar6[0x208] = lVar4;
      plVar6[-0xf6] = lVar3;
      plVar6[10] = lVar11;
      plVar6[0x10a] = lVar12;
      plVar6[0x20a] = lVar4;
      plVar6[-0xf4] = lVar3;
      plVar6[0xc] = lVar11;
      plVar6[0x10c] = lVar12;
      plVar6[0x20c] = lVar4;
      plVar6[-0xf2] = lVar3;
      plVar6[0xe] = lVar11;
      plVar6[0x10e] = lVar12;
      plVar6[0x20e] = lVar4;
      plVar6 = plVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar13 = uVar13 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  SystemCore_a4a90(param_1,0);
  SystemCore_a47d0(param_1,0);
  *(int32_t *)(param_1 + 0x25e8) = 0;
  return 0;
}
uint64_t SystemCore_a24c2(uint64_t param_1,float param_2)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t unaff_RBX;
  int32_t uVar6;
  int64_t unaff_RBP;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool in_CF;
  bool in_ZF;
  int32_t uVar10;
  int32_t uVar11;
  *(float *)(unaff_RBX + 0x25a0) = param_2;
  if (in_CF || in_ZF) {
    uVar10 = 0;
  }
  else {
    uVar10 = powf(0x41200000,param_2 * 0.05);
  }
  fVar1 = *(float *)(unaff_RBX + 0x25f4);
  uVar6 = (int32_t)unaff_RBP;
  *(int32_t *)(unaff_RBX + 0x25b0) = uVar6;
  *(int32_t *)(unaff_RBX + 0x25a4) = uVar10;
  *(float *)(unaff_RBX + 0x25b4) = fVar1;
  if (-80.0 < fVar1) {
    uVar10 = powf(0x41200000,fVar1 * 0.05);
  }
  else {
    uVar10 = 0;
  }
  fVar1 = *(float *)(unaff_RBX + 0x25f8);
  *(int32_t *)(unaff_RBX + 0x25c4) = uVar6;
  *(int32_t *)(unaff_RBX + 0x25b8) = uVar10;
  *(float *)(unaff_RBX + 0x25c8) = fVar1;
  uVar11 = 0;
  if (-80.0 < fVar1) {
    uVar10 = powf(0x41200000,fVar1 * 0.05);
    uVar11 = uVar10;
  }
  plVar5 = (int64_t *)(unaff_RBX + 0xda8);
  *(int32_t *)(unaff_RBX + 0x25dc) = *(int32_t *)(unaff_RBX + 0x25fc);
  lVar7 = 4;
  *(int32_t *)(unaff_RBX + 0x25e0) = *(int32_t *)(unaff_RBX + 0x2600);
  *(int32_t *)(unaff_RBX + 0x25cc) = uVar11;
  *(int32_t *)(unaff_RBX + 0x25ec) = *(int32_t *)(unaff_RBX + 0x2604);
  *(int32_t *)(unaff_RBX + 0x25d8) = uVar6;
  do {
    lVar3 = (unaff_RBP >> 1) * 0x70;
    lVar2 = unaff_RBX + 0x220 + lVar3;
    lVar8 = unaff_RBX + 0x300 + lVar3;
    lVar9 = unaff_RBX + 0x3e0 + lVar3;
    lVar3 = unaff_RBX + 0x4c0 + lVar3;
    lVar4 = 4;
    do {
      plVar5[-0x100] = lVar2;
      *plVar5 = lVar8;
      plVar5[0x100] = lVar9;
      plVar5[0x200] = lVar3;
      plVar5[-0xfe] = lVar2;
      plVar5[2] = lVar8;
      plVar5[0x102] = lVar9;
      plVar5[0x202] = lVar3;
      plVar5[-0xfc] = lVar2;
      plVar5[4] = lVar8;
      plVar5[0x104] = lVar9;
      plVar5[0x204] = lVar3;
      plVar5[-0xfa] = lVar2;
      plVar5[6] = lVar8;
      plVar5[0x106] = lVar9;
      plVar5[0x206] = lVar3;
      plVar5[-0xf8] = lVar2;
      plVar5[8] = lVar8;
      plVar5[0x108] = lVar9;
      plVar5[0x208] = lVar3;
      plVar5[-0xf6] = lVar2;
      plVar5[10] = lVar8;
      plVar5[0x10a] = lVar9;
      plVar5[0x20a] = lVar3;
      plVar5[-0xf4] = lVar2;
      plVar5[0xc] = lVar8;
      plVar5[0x10c] = lVar9;
      plVar5[0x20c] = lVar3;
      plVar5[-0xf2] = lVar2;
      plVar5[0xe] = lVar8;
      plVar5[0x10e] = lVar9;
      plVar5[0x20e] = lVar3;
      plVar5 = plVar5 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    unaff_RBP = unaff_RBP + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar10 = SystemCore_a4a90(uVar10,0);
  SystemCore_a47d0(uVar10,0);
  *(int32_t *)(unaff_RBX + 0x25e8) = uVar6;
  return 0;
}
uint64_t SystemCore_a25c0(uint64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  int64_t lVar4;
  int64_t lVar5;
  int64_t in_R11;
  do {
    lVar2 = (in_R11 >> 1) * 0x70;
    lVar1 = unaff_RBX + 0x220 + lVar2;
    lVar4 = unaff_RBX + 0x300 + lVar2;
    lVar5 = unaff_RBX + 0x3e0 + lVar2;
    lVar2 = unaff_RBX + 0x4c0 + lVar2;
    lVar3 = 4;
    do {
      param_2[-0x100] = lVar1;
      *param_2 = lVar4;
      param_2[0x100] = lVar5;
      param_2[0x200] = lVar2;
      param_2[-0xfe] = lVar1;
      param_2[2] = lVar4;
      param_2[0x102] = lVar5;
      param_2[0x202] = lVar2;
      param_2[-0xfc] = lVar1;
      param_2[4] = lVar4;
      param_2[0x104] = lVar5;
      param_2[0x204] = lVar2;
      param_2[-0xfa] = lVar1;
      param_2[6] = lVar4;
      param_2[0x106] = lVar5;
      param_2[0x206] = lVar2;
      param_2[-0xf8] = lVar1;
      param_2[8] = lVar4;
      param_2[0x108] = lVar5;
      param_2[0x208] = lVar2;
      param_2[-0xf6] = lVar1;
      param_2[10] = lVar4;
      param_2[0x10a] = lVar5;
      param_2[0x20a] = lVar2;
      param_2[-0xf4] = lVar1;
      param_2[0xc] = lVar4;
      param_2[0x10c] = lVar5;
      param_2[0x20c] = lVar2;
      param_2[-0xf2] = lVar1;
      param_2[0xe] = lVar4;
      param_2[0x10e] = lVar5;
      param_2[0x20e] = lVar2;
      param_2 = param_2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    in_R11 = in_R11 + 1;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  SystemCore_a4a90();
  SystemCore_a47d0();
  *(int32_t *)(unaff_RBX + 0x25e8) = unaff_EBP;
  return 0;
}