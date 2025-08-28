#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part102_sub002_sub002.c - 1 个函数

// 函数: void FUN_18011dd9b(void)
void FUN_18011dd9b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18011ddb0(float *param_1,int param_2,uint64_t param_3,int *param_4,int param_5,int param_6,
             uint64_t param_7,uint64_t param_8,uint64_t param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int8_t uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStackX_20 [2];
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  fVar1 = param_1[2];
  fVar10 = 0.0;
  iVar4 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  fVar7 = (fVar1 - *param_1) - 4.0;
  iVar5 = param_6 - param_5;
  if (param_6 <= param_5) {
    iVar5 = param_5 - param_6;
  }
  uVar6 = 0;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1694) <= fVar7) {
    fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1694);
  }
  fVar7 = fVar7 * 0.5;
  fVar11 = *param_1 + 2.0 + fVar7;
  if (iVar4 != param_2) goto LAB_18011e08c;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) == 1) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) == '\0') {
      *(bool *)(SYSTEM_DATA_MANAGER_A + 0x1b3c) = iVar4 != 0;
      if (iVar4 != 0) {
        *(int32_t *)(lVar3 + 0x1b38) = 0;
        *(int8_t *)(lVar3 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar3 + 0x1b2c) = 0;
      *(int32_t *)(lVar3 + 0x1b44) = 0;
      *(int8_t *)(lVar3 + 0x1b3d) = 0;
      *(uint64_t *)(lVar3 + 0x1b50) = 0;
      goto LAB_18011e08c;
    }
  }
  else {
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) != 2) goto LAB_18011e08c;
    uVar8 = FUN_180131aa0(afStackX_20,3,5,0,0);
    if ((*(int *)(lVar3 + 0x1cac) == param_2) && (*(char *)(lVar3 + 0x1b3c) == '\0')) {
      *(bool *)(lVar3 + 0x1b3c) = *(int *)(lVar3 + 0x1b2c) != 0;
      if (*(int *)(lVar3 + 0x1b2c) != 0) {
        *(int32_t *)(lVar3 + 0x1b38) = 0;
        *(int8_t *)(lVar3 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar3 + 0x1b2c) = 0;
      *(int32_t *)(lVar3 + 0x1b44) = 0;
      *(int8_t *)(lVar3 + 0x1b3d) = 0;
      *(uint64_t *)(lVar3 + 0x1b50) = 0;
      goto LAB_18011e08c;
    }
    if (afStackX_20[0] == 0.0) goto LAB_18011e08c;
    func_0x00018011f7e0(uVar8,*param_4,param_5,param_6);
    iVar4 = func_0x0001801140c0(param_7);
    if (iVar4 < 1) {
      fVar9 = (float)iVar5;
      if (((-100.0 <= fVar9) && (fVar9 <= 100.0)) || (0.0 < *(float *)(lVar3 + 0x370))) {
        if (0.0 <= afStackX_20[0]) {
          fVar9 = 1.0 / fVar9;
        }
        else {
          fVar9 = -1.0 / fVar9;
        }
      }
      else {
        fVar9 = afStackX_20[0] * 0.01;
      }
    }
    else {
      fVar9 = afStackX_20[0] * 0.01;
      if (0.0 < *(float *)(lVar3 + 0x370)) {
        fVar9 = fVar9 * 0.1;
      }
    }
    if (0.0 < *(float *)(lVar3 + 0x374)) {
      fVar9 = fVar9 * 10.0;
    }
    if (((1.0 <= extraout_XMM0_Da) && (0.0 < fVar9)) || ((extraout_XMM0_Da <= 0.0 && (fVar9 < 0.0)))
       ) goto LAB_18011e08c;
  }
  iVar4 = FUN_18011f3e0(param_7);
  if (*param_4 != iVar4) {
    *param_4 = iVar4;
    uVar6 = 1;
  }
LAB_18011e08c:
  iVar4 = *param_4;
  if (param_5 != param_6) {
    if (param_5 < param_6) {
      iVar5 = param_5;
      if ((param_5 <= iVar4) && (iVar5 = iVar4, param_6 < iVar4)) {
        iVar5 = param_6;
      }
    }
    else {
      iVar5 = param_6;
      if ((param_6 <= iVar4) && (iVar5 = iVar4, param_5 < iVar4)) {
        iVar5 = param_5;
      }
    }
    fVar10 = (float)(iVar5 - param_5) / (float)(param_6 - param_5);
  }
  fVar9 = param_1[1];
  fVar2 = param_1[3];
  fVar11 = (((fVar1 - 2.0) - fVar7) - fVar11) * fVar10 + fVar11;
  *param_10 = fVar11 - fVar7;
  param_10[1] = fVar9 + 2.0;
  param_10[2] = fVar11 + fVar7;
  param_10[3] = fVar2 - 2.0;
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18011e160(float *param_1,int param_2,uint64_t param_3,uint *param_4,uint param_5,uint param_6,
             uint64_t param_7,uint64_t param_8,uint64_t param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int8_t uVar8;
  float fVar9;
  int32_t uVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float afStackX_20 [2];
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  fVar1 = param_1[2];
  fVar12 = 0.0;
  iVar5 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  fVar9 = (fVar1 - *param_1) - 4.0;
  iVar3 = param_6 - param_5;
  if (param_6 <= param_5) {
    iVar3 = param_5 - param_6;
  }
  uVar8 = 0;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1694) <= fVar9) {
    fVar9 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1694);
  }
  fVar9 = fVar9 * 0.5;
  fVar13 = *param_1 + 2.0 + fVar9;
  if (iVar5 != param_2) goto LAB_18011e43d;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) == 1) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) == '\0') {
      *(bool *)(SYSTEM_DATA_MANAGER_A + 0x1b3c) = iVar5 != 0;
      if (iVar5 != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto LAB_18011e43d;
    }
  }
  else {
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) != 2) goto LAB_18011e43d;
    uVar10 = FUN_180131aa0(afStackX_20,3,5,0,0);
    if ((*(int *)(lVar4 + 0x1cac) == param_2) && (*(char *)(lVar4 + 0x1b3c) == '\0')) {
      *(bool *)(lVar4 + 0x1b3c) = *(int *)(lVar4 + 0x1b2c) != 0;
      if (*(int *)(lVar4 + 0x1b2c) != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto LAB_18011e43d;
    }
    if (afStackX_20[0] == 0.0) goto LAB_18011e43d;
    func_0x00018011f830(uVar10,*param_4,param_5,param_6);
    iVar5 = func_0x0001801140c0(param_7);
    if (iVar5 < 1) {
      fVar11 = (float)iVar3;
      if (((-100.0 <= fVar11) && (fVar11 <= 100.0)) || (0.0 < *(float *)(lVar4 + 0x370))) {
        if (0.0 <= afStackX_20[0]) {
          fVar11 = 1.0 / fVar11;
        }
        else {
          fVar11 = -1.0 / fVar11;
        }
      }
      else {
        fVar11 = afStackX_20[0] * 0.01;
      }
    }
    else {
      fVar11 = afStackX_20[0] * 0.01;
      if (0.0 < *(float *)(lVar4 + 0x370)) {
        fVar11 = fVar11 * 0.1;
      }
    }
    if (0.0 < *(float *)(lVar4 + 0x374)) {
      fVar11 = fVar11 * 10.0;
    }
    if (((1.0 <= extraout_XMM0_Da) && (0.0 < fVar11)) ||
       ((extraout_XMM0_Da <= 0.0 && (fVar11 < 0.0)))) goto LAB_18011e43d;
  }
  uVar6 = FUN_18011f480(param_7);
  if (*param_4 != uVar6) {
    *param_4 = uVar6;
    uVar8 = 1;
  }
LAB_18011e43d:
  uVar6 = *param_4;
  if (param_5 != param_6) {
    if (param_5 < param_6) {
      uVar7 = param_5;
      if ((param_5 <= uVar6) && (uVar7 = uVar6, param_6 < uVar6)) {
        uVar7 = param_6;
      }
    }
    else {
      uVar7 = param_6;
      if ((param_6 <= uVar6) && (uVar7 = uVar6, param_5 < uVar6)) {
        uVar7 = param_5;
      }
    }
    fVar12 = (float)(uVar7 - param_5) / (float)(param_6 - param_5);
  }
  fVar11 = param_1[1];
  fVar2 = param_1[3];
  fVar13 = (((fVar1 - 2.0) - fVar9) - fVar13) * fVar12 + fVar13;
  *param_10 = fVar13 - fVar9;
  param_10[1] = fVar11 + 2.0;
  param_10[2] = fVar9 + fVar13;
  param_10[3] = fVar2 - 2.0;
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18011e520(float *param_1,int param_2,uint64_t param_3,int64_t *param_4,int64_t param_5,
             int64_t param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,
             float *param_10)

{
  float fVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = param_6;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  fVar1 = param_1[2];
  fVar11 = 0.0;
  iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  fVar7 = (fVar1 - *param_1) - 4.0;
  lVar5 = param_6 - param_5;
  if (param_6 <= param_5) {
    lVar5 = param_5 - param_6;
  }
  uVar6 = 0;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1694) <= fVar7) {
    fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1694);
  }
  fVar7 = fVar7 * 0.5;
  fVar12 = *param_1 + 2.0 + fVar7;
  if (iVar3 != param_2) goto LAB_18011e808;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) == 1) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) == '\0') {
      *(bool *)(SYSTEM_DATA_MANAGER_A + 0x1b3c) = iVar3 != 0;
      if (iVar3 != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto LAB_18011e808;
    }
  }
  else {
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) != 2) goto LAB_18011e808;
    uVar8 = FUN_180131aa0(&param_6,3,5,0,0);
    if ((*(int *)(lVar4 + 0x1cac) == param_2) && (*(char *)(lVar4 + 0x1b3c) == '\0')) {
      *(bool *)(lVar4 + 0x1b3c) = *(int *)(lVar4 + 0x1b2c) != 0;
      if (*(int *)(lVar4 + 0x1b2c) != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto LAB_18011e808;
    }
    if ((float)param_6 == 0.0) goto LAB_18011e808;
    fVar10 = (float)param_6;
    func_0x00018011f880(uVar8,*param_4,param_5,lVar2);
    iVar3 = func_0x0001801140c0(param_7);
    if (iVar3 < 1) {
      fVar9 = (float)lVar5;
      if (((-100.0 <= fVar9) && (fVar9 <= 100.0)) || (0.0 < *(float *)(lVar4 + 0x370))) {
        if (0.0 <= fVar10) {
          fVar9 = 1.0 / fVar9;
        }
        else {
          fVar9 = -1.0 / fVar9;
        }
      }
      else {
        fVar9 = fVar10 * 0.01;
      }
    }
    else {
      fVar9 = fVar10 * 0.01;
      if (0.0 < *(float *)(lVar4 + 0x370)) {
        fVar9 = fVar9 * 0.1;
      }
    }
    if (0.0 < *(float *)(lVar4 + 0x374)) {
      fVar9 = fVar9 * 10.0;
    }
    if (((1.0 <= extraout_XMM0_Da) && (0.0 < fVar9)) || ((extraout_XMM0_Da <= 0.0 && (fVar9 < 0.0)))
       ) goto LAB_18011e808;
  }
  lVar4 = FUN_18011f520(param_7);
  if (*param_4 != lVar4) {
    *param_4 = lVar4;
    uVar6 = 1;
  }
LAB_18011e808:
  lVar4 = *param_4;
  if (param_5 != lVar2) {
    if (param_5 < lVar2) {
      lVar5 = param_5;
      if ((param_5 <= lVar4) && (lVar5 = lVar4, lVar2 < lVar4)) {
        lVar5 = lVar2;
      }
    }
    else {
      lVar5 = lVar2;
      if ((lVar2 <= lVar4) && (lVar5 = lVar4, param_5 < lVar4)) {
        lVar5 = param_5;
      }
    }
    fVar11 = (float)((double)(lVar5 - param_5) / (double)(lVar2 - param_5));
  }
  fVar10 = param_1[1];
  fVar9 = param_1[3];
  fVar12 = (((fVar1 - 2.0) - fVar7) - fVar12) * fVar11 + fVar12;
  *param_10 = fVar12 - fVar7;
  param_10[1] = fVar10 + 2.0;
  param_10[2] = fVar7 + fVar12;
  param_10[3] = fVar9 - 2.0;
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18011e8f0(float *param_1,int param_2,uint64_t param_3,uint64_t *param_4,uint64_t param_5,
             uint64_t param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,
             float *param_10)

{
  float fVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t uVar7;
  int64_t lVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  uint64_t uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = param_6;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  fVar1 = param_1[2];
  lVar8 = param_6 - param_5;
  if (param_6 <= param_5) {
    lVar8 = param_5 - param_6;
  }
  fVar16 = (float)(int64_t)param_5;
  fVar9 = (fVar1 - *param_1) - 4.0;
  fVar10 = fVar9;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1694) <= fVar9) {
    fVar10 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1694);
  }
  fVar15 = fVar10 * 0.5;
  fVar17 = *param_1 + 2.0 + fVar15;
  if ((int64_t)param_5 < 0) {
    fVar16 = fVar16 + 1.8446744e+19;
  }
  iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  uVar7 = 0;
  fVar14 = 0.0;
  if (iVar3 != param_2) goto LAB_18011ec19;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) == 1) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) == '\0') {
      *(bool *)(SYSTEM_DATA_MANAGER_A + 0x1b3c) = iVar3 != 0;
      if (iVar3 != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto LAB_18011ec19;
    }
    if (fVar9 - fVar10 <= 0.0) {
LAB_18011eba2:
      fVar9 = 0.0;
    }
    else {
      fVar9 = (*(float *)(SYSTEM_DATA_MANAGER_A + 0x118) - fVar17) / (fVar9 - fVar10);
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
    }
  }
  else {
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) != 2) goto LAB_18011ec19;
    uVar11 = FUN_180131aa0(&param_6,3,5,0,0);
    if ((*(int *)(lVar4 + 0x1cac) == param_2) && (*(char *)(lVar4 + 0x1b3c) == '\0')) {
      *(bool *)(lVar4 + 0x1b3c) = *(int *)(lVar4 + 0x1b2c) != 0;
      if (*(int *)(lVar4 + 0x1b2c) != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto LAB_18011ec19;
    }
    if ((float)param_6 == 0.0) goto LAB_18011ec19;
    fVar10 = (float)param_6;
    func_0x00018011f8d0(uVar11,*param_4,param_5,uVar2);
    iVar3 = func_0x0001801140c0(param_7);
    if (iVar3 < 1) {
      fVar9 = (float)lVar8;
      if (((-100.0 <= fVar9) && (fVar9 <= 100.0)) || (0.0 < *(float *)(lVar4 + 0x370))) {
        if (0.0 <= fVar10) {
          fVar9 = 1.0 / fVar9;
        }
        else {
          fVar9 = -1.0 / fVar9;
        }
      }
      else {
        fVar9 = fVar10 * 0.01;
      }
    }
    else {
      fVar9 = fVar10 * 0.01;
      if (0.0 < *(float *)(lVar4 + 0x370)) {
        fVar9 = fVar9 * 0.1;
      }
    }
    if (0.0 < *(float *)(lVar4 + 0x374)) {
      fVar9 = fVar9 * 10.0;
    }
    if (((1.0 <= extraout_XMM0_Da) && (0.0 < fVar9)) || ((extraout_XMM0_Da <= 0.0 && (fVar9 < 0.0)))
       ) goto LAB_18011ec19;
    fVar9 = fVar9 + extraout_XMM0_Da;
    if (fVar9 < 0.0) goto LAB_18011eba2;
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  fVar10 = (float)(int64_t)(uVar2 - param_5);
  if ((int64_t)(uVar2 - param_5) < 0) {
    fVar10 = fVar10 + 1.8446744e+19;
  }
  lVar4 = 0;
  fVar16 = fVar10 * fVar9 + fVar16;
  if ((9.223372e+18 <= fVar16) && (fVar16 = fVar16 - 9.223372e+18, fVar16 < 9.223372e+18)) {
    lVar4 = -0x8000000000000000;
  }
  uVar5 = FUN_18011f5c0(param_7,0x5f000000,(int64_t)fVar16 + lVar4);
  if (*param_4 != uVar5) {
    *param_4 = uVar5;
    uVar7 = 1;
  }
LAB_18011ec19:
  uVar5 = *param_4;
  if (param_5 != uVar2) {
    if (param_5 < uVar2) {
      uVar6 = param_5;
      if ((param_5 <= uVar5) && (uVar6 = uVar5, uVar2 < uVar5)) {
        uVar6 = uVar2;
      }
    }
    else {
      uVar6 = uVar2;
      if ((uVar2 <= uVar5) && (uVar6 = uVar5, param_5 < uVar5)) {
        uVar6 = param_5;
      }
    }
    dVar12 = (double)(int64_t)(uVar6 - param_5);
    if ((int64_t)(uVar6 - param_5) < 0) {
      dVar12 = dVar12 + 1.8446744073709552e+19;
    }
    dVar13 = (double)(int64_t)(uVar2 - param_5);
    if ((int64_t)(uVar2 - param_5) < 0) {
      dVar13 = dVar13 + 1.8446744073709552e+19;
    }
    fVar14 = (float)(dVar12 / dVar13);
  }
  fVar10 = param_1[1];
  fVar9 = param_1[3];
  fVar17 = (((fVar1 - 2.0) - fVar15) - fVar17) * fVar14 + fVar17;
  *param_10 = fVar17 - fVar15;
  param_10[1] = fVar10 + 2.0;
  param_10[2] = fVar15 + fVar17;
  param_10[3] = fVar9 - 2.0;
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18011ed10(float param_1,int param_2,uint64_t param_3,float *param_4,float param_5,
             float param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,float *param_10)

{
  float fVar1;
  int64_t lVar2;
  int iVar3;
  float *in_RCX;
  int8_t uVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float afStackX_8 [2];
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  fVar1 = in_RCX[2];
  fVar5 = (fVar1 - *in_RCX) - 4.0;
  if (param_6 <= param_5) {
    fVar7 = param_5 - param_6;
  }
  else {
    fVar7 = param_6 - param_5;
  }
  fVar9 = fVar5;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1694) <= fVar5) {
    fVar9 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1694);
  }
  iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  uVar4 = 0;
  fVar5 = fVar5 - fVar9;
  fVar9 = fVar9 * 0.5;
  fVar8 = *in_RCX + 2.0 + fVar9;
  if (iVar3 != param_2) goto FUN_18011efb8;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) == 1) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) == '\0') {
LAB_18011ee7f:
      *(bool *)(lVar2 + 0x1b3c) = iVar3 != 0;
      if (iVar3 != 0) {
        *(int32_t *)(lVar2 + 0x1b38) = 0;
        *(int8_t *)(lVar2 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar2 + 0x1b2c) = 0;
      *(int32_t *)(lVar2 + 0x1b44) = 0;
      *(int8_t *)(lVar2 + 0x1b3d) = 0;
      *(uint64_t *)(lVar2 + 0x1b50) = 0;
      goto FUN_18011efb8;
    }
    fVar6 = 0.0;
    if (((0.0 < fVar5) &&
        (fVar7 = (*(float *)(SYSTEM_DATA_MANAGER_A + 0x118) - fVar8) / fVar5, 0.0 <= fVar7)) &&
       (fVar6 = fVar7, 1.0 <= fVar7)) {
      fVar6 = 1.0;
    }
  }
  else {
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) != 2) goto FUN_18011efb8;
    param_1 = (float)FUN_180131aa0(afStackX_8,3,5,0,0);
    if ((*(int *)(lVar2 + 0x1cac) == param_2) && (*(char *)(lVar2 + 0x1b3c) == '\0')) {
      iVar3 = *(int *)(lVar2 + 0x1b2c);
      goto LAB_18011ee7f;
    }
    if (afStackX_8[0] == 0.0) goto FUN_18011efb8;
    func_0x00018011f940(param_1,*param_4,param_5,param_6);
    iVar3 = func_0x0001801140c0(param_7);
    fVar5 = 1.0;
    if (iVar3 < 1) {
      if (((-100.0 <= fVar7) && (fVar7 <= 100.0)) || (0.0 < *(float *)(lVar2 + 0x370))) {
        if (0.0 <= afStackX_8[0]) {
          fVar7 = 1.0 / fVar7;
        }
        else {
          fVar7 = -1.0 / fVar7;
        }
      }
      else {
        fVar7 = afStackX_8[0] * 0.01;
      }
    }
    else {
      fVar7 = afStackX_8[0] * 0.01;
      if (0.0 < *(float *)(lVar2 + 0x370)) {
        fVar7 = fVar7 * 0.1;
      }
    }
    if (0.0 < *(float *)(lVar2 + 0x374)) {
      fVar7 = fVar7 * 10.0;
    }
    param_1 = extraout_XMM0_Da;
    if (((1.0 <= extraout_XMM0_Da) && (0.0 < fVar7)) || ((extraout_XMM0_Da <= 0.0 && (fVar7 < 0.0)))
       ) goto FUN_18011efb8;
    fVar7 = fVar7 + extraout_XMM0_Da;
    fVar6 = 0.0;
    if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
      fVar6 = 1.0;
    }
  }
  param_1 = (float)FUN_18011f690(param_7,fVar5,(param_6 - param_5) * fVar6 + param_5);
  if (param_1 != *param_4) {
    *param_4 = param_1;
    uVar4 = 1;
  }
FUN_18011efb8:
  fVar6 = (float)func_0x00018011f940(param_1,*param_4,param_5,param_6);
  fVar5 = in_RCX[3];
  fVar7 = in_RCX[1];
  fVar8 = (((fVar1 - 2.0) - fVar9) - fVar8) * fVar6 + fVar8;
  *param_10 = fVar8 - fVar9;
  param_10[1] = fVar7 + 2.0;
  param_10[2] = fVar8 + fVar9;
  param_10[3] = fVar5 - 2.0;
  return uVar4;
}



char FUN_18011edf3(float param_1,float param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int64_t unaff_RBX;
  float *unaff_RSI;
  int unaff_EDI;
  int64_t unaff_R14;
  char unaff_R15B;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  float fVar4;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float in_stack_000000e0;
  uint64_t in_stack_00000110;
  float *in_stack_00000128;
  
  if (in_EAX == 1) {
    if (*(char *)(unaff_RBX + 0x120) == unaff_R15B) {
LAB_18011ee7f:
      *(bool *)(unaff_RBX + 0x1b3c) = in_ECX != 0;
      if (in_ECX != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
      *(int32_t *)(unaff_RBX + 0x1b44) = 0;
      *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
      *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
      goto LAB_18011efb0;
    }
    fVar4 = 0.0;
    if (((0.0 < param_2) &&
        (fVar2 = (*(float *)(unaff_RBX + 0x118) - unaff_XMM11_Da) / param_2, 0.0 <= fVar2)) &&
       (fVar4 = fVar2, 1.0 <= fVar2)) {
      fVar4 = 1.0;
    }
  }
  else {
    if (in_EAX != 2) goto LAB_18011efb0;
    param_1 = (float)FUN_180131aa0(&stack0x000000e0,3,5,0,0);
    if ((*(int *)(unaff_RBX + 0x1cac) == unaff_EDI) && (*(char *)(unaff_RBX + 0x1b3c) == '\0')) {
      in_ECX = *(int *)(unaff_RBX + 0x1b2c);
      goto LAB_18011ee7f;
    }
    if (in_stack_000000e0 == 0.0) goto LAB_18011efb0;
    fVar2 = in_stack_000000e0;
    func_0x00018011f940(param_1,*unaff_RSI);
    iVar1 = func_0x0001801140c0(in_stack_00000110);
    param_2 = 1.0;
    if (iVar1 < 1) {
      if (((-100.0 <= unaff_XMM7_Da) && (unaff_XMM7_Da <= 100.0)) ||
         (0.0 < *(float *)(unaff_RBX + 0x370))) {
        if (0.0 <= fVar2) {
          fVar2 = 1.0 / unaff_XMM7_Da;
        }
        else {
          fVar2 = -1.0 / unaff_XMM7_Da;
        }
      }
      else {
        fVar2 = fVar2 * 0.01;
      }
    }
    else {
      fVar2 = fVar2 * 0.01;
      if (0.0 < *(float *)(unaff_RBX + 0x370)) {
        fVar2 = fVar2 * 0.1;
      }
    }
    if (0.0 < *(float *)(unaff_RBX + 0x374)) {
      fVar2 = fVar2 * 10.0;
    }
    param_1 = extraout_XMM0_Da;
    if (((1.0 <= extraout_XMM0_Da) && (0.0 < fVar2)) || ((extraout_XMM0_Da <= 0.0 && (fVar2 < 0.0)))
       ) goto LAB_18011efb0;
    fVar2 = fVar2 + extraout_XMM0_Da;
    fVar4 = 0.0;
    if ((0.0 <= fVar2) && (fVar4 = fVar2, 1.0 <= fVar2)) {
      fVar4 = 1.0;
    }
  }
  param_1 = (float)FUN_18011f690(in_stack_00000110,param_2,
                                 (unaff_XMM10_Da - unaff_XMM8_Da) * fVar4 + unaff_XMM8_Da);
  if (param_1 != *unaff_RSI) {
    *unaff_RSI = param_1;
    unaff_R15B = '\x01';
  }
LAB_18011efb0:
  fVar3 = (float)func_0x00018011f940(param_1,*unaff_RSI);
  fVar2 = *(float *)(unaff_R14 + 0xc);
  fVar4 = *(float *)(unaff_R14 + 4);
  fVar3 = (unaff_XMM9_Da - unaff_XMM11_Da) * fVar3 + unaff_XMM11_Da;
  *in_stack_00000128 = fVar3 - unaff_XMM12_Da;
  in_stack_00000128[1] = fVar4 + unaff_XMM13_Da;
  in_stack_00000128[2] = fVar3 + unaff_XMM12_Da;
  in_stack_00000128[3] = fVar2 - unaff_XMM13_Da;
  return unaff_R15B;
}



int8_t FUN_18011efb8(uint64_t param_1)

{
  float fVar1;
  float fVar2;
  int32_t *unaff_RSI;
  int64_t unaff_R14;
  int8_t unaff_R15B;
  float fVar3;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float *in_stack_00000128;
  
  fVar3 = (float)func_0x00018011f940(param_1,*unaff_RSI);
  fVar1 = *(float *)(unaff_R14 + 0xc);
  fVar2 = *(float *)(unaff_R14 + 4);
  fVar3 = (unaff_XMM9_Da - unaff_XMM11_Da) * fVar3 + unaff_XMM11_Da;
  *in_stack_00000128 = fVar3 - unaff_XMM12_Da;
  in_stack_00000128[1] = fVar2 + unaff_XMM13_Da;
  in_stack_00000128[2] = fVar3 + unaff_XMM12_Da;
  in_stack_00000128[3] = fVar1 - unaff_XMM13_Da;
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18011f070(float *param_1,int param_2,uint64_t param_3,double *param_4,double param_5,
             double param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,float *param_10
             )

{
  float fVar1;
  float fVar2;
  double dVar3;
  int64_t lVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int8_t uVar8;
  float fVar9;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa;
  float fVar10;
  float fVar11;
  int32_t uVar12;
  float fVar13;
  float fVar14;
  
  dVar6 = param_6;
  dVar5 = param_5;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  fVar2 = param_5._0_4_;
  fVar1 = param_1[2];
  uVar12 = SUB84(param_6,0);
  fVar10 = (fVar1 - *param_1) - 4.0;
  if (param_6 <= param_5) {
    dVar3 = param_5 - param_6;
  }
  else {
    dVar3 = param_6 - param_5;
  }
  fVar14 = fVar10;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x1694) <= fVar10) {
    fVar14 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1694);
  }
  iVar7 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c);
  uVar8 = 0;
  fVar10 = fVar10 - fVar14;
  fVar14 = fVar14 * 0.5;
  fVar13 = *param_1 + 2.0 + fVar14;
  if (iVar7 != param_2) goto FUN_18011f32e;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) == 1) {
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) == '\0') {
LAB_18011f1e4:
      *(bool *)(lVar4 + 0x1b3c) = iVar7 != 0;
      if (iVar7 != 0) {
        *(int32_t *)(lVar4 + 0x1b38) = 0;
        *(int8_t *)(lVar4 + 0x1b3e) = 0;
      }
      *(int32_t *)(lVar4 + 0x1b2c) = 0;
      *(int32_t *)(lVar4 + 0x1b44) = 0;
      *(int8_t *)(lVar4 + 0x1b3d) = 0;
      *(uint64_t *)(lVar4 + 0x1b50) = 0;
      goto FUN_18011f32e;
    }
    fVar11 = 0.0;
    if (((0.0 < fVar10) &&
        (fVar9 = (*(float *)(SYSTEM_DATA_MANAGER_A + 0x118) - fVar13) / fVar10, 0.0 <= fVar9)) &&
       (fVar11 = fVar9, 1.0 <= fVar9)) {
      fVar11 = 1.0;
    }
  }
  else {
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b60) != 2) goto FUN_18011f32e;
    in_XMM0_Qa = (double)FUN_180131aa0(&param_5,3,5,0,0);
    if ((*(int *)(lVar4 + 0x1cac) == param_2) && (*(char *)(lVar4 + 0x1b3c) == '\0')) {
      iVar7 = *(int *)(lVar4 + 0x1b2c);
      goto LAB_18011f1e4;
    }
    if (param_5._0_4_ == 0.0) goto FUN_18011f32e;
    fVar9 = param_5._0_4_;
    fVar11 = (float)func_0x00018011f9b0(in_XMM0_Qa,*param_4,fVar2,uVar12);
    iVar7 = func_0x0001801140c0(param_7);
    fVar10 = 1.0;
    in_XMM0_Qa = extraout_XMM0_Qa;
    if (iVar7 < 1) {
      if (((-100.0 <= dVar3) && (dVar3 <= 100.0)) || (0.0 < *(float *)(lVar4 + 0x370))) {
        if (0.0 <= fVar9) {
          in_XMM0_Qa = (double)(uint64_t)(uint)(float)dVar3;
          fVar9 = 1.0 / (float)dVar3;
        }
        else {
          in_XMM0_Qa = (double)(uint64_t)(uint)(float)dVar3;
          fVar9 = -1.0 / (float)dVar3;
        }
      }
      else {
        fVar9 = fVar9 * 0.01;
      }
    }
    else {
      fVar9 = fVar9 * 0.01;
      if (0.0 < *(float *)(lVar4 + 0x370)) {
        fVar9 = fVar9 * 0.1;
      }
    }
    if (0.0 < *(float *)(lVar4 + 0x374)) {
      fVar9 = fVar9 * 10.0;
    }
    if (((1.0 <= fVar11) && (0.0 < fVar9)) || ((fVar11 <= 0.0 && (fVar9 < 0.0))))
    goto FUN_18011f32e;
    fVar9 = fVar9 + fVar11;
    fVar11 = 0.0;
    if ((0.0 <= fVar9) && (fVar11 = fVar9, 1.0 <= fVar9)) {
      fVar11 = 1.0;
    }
  }
  in_XMM0_Qa = (double)FUN_18011f740(param_7,fVar10,
                                     SUB84((dVar6 - dVar5) * (double)fVar11 + dVar5,0));
  if (in_XMM0_Qa != *param_4) {
    *param_4 = in_XMM0_Qa;
    uVar8 = 1;
  }
FUN_18011f32e:
  fVar9 = (float)func_0x00018011f9b0(in_XMM0_Qa,*param_4,fVar2,uVar12);
  fVar2 = param_1[3];
  fVar10 = param_1[1];
  fVar13 = (((fVar1 - 2.0) - fVar14) - fVar13) * fVar9 + fVar13;
  *param_10 = fVar13 - fVar14;
  param_10[1] = fVar10 + 2.0;
  param_10[2] = fVar13 + fVar14;
  param_10[3] = fVar2 - 2.0;
  return uVar8;
}



char FUN_18011f158(double param_1,uint64_t param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int64_t unaff_RBX;
  double *unaff_RSI;
  int unaff_EDI;
  int64_t unaff_R14;
  char unaff_R15B;
  float fVar2;
  float fVar3;
  double extraout_XMM0_Qa;
  float fVar4;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  float unaff_XMM9_Da;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float in_stack_000000f0;
  uint64_t in_stack_00000100;
  float *in_stack_00000118;
  
  if (in_EAX == 1) {
    if (*(char *)(unaff_RBX + 0x120) == unaff_R15B) {
LAB_18011f1e4:
      *(bool *)(unaff_RBX + 0x1b3c) = in_ECX != 0;
      if (in_ECX != 0) {
        *(int32_t *)(unaff_RBX + 0x1b38) = 0;
        *(int8_t *)(unaff_RBX + 0x1b3e) = 0;
      }
      *(int32_t *)(unaff_RBX + 0x1b2c) = 0;
      *(int32_t *)(unaff_RBX + 0x1b44) = 0;
      *(int8_t *)(unaff_RBX + 0x1b3d) = 0;
      *(uint64_t *)(unaff_RBX + 0x1b50) = 0;
      goto LAB_18011f326;
    }
    fVar4 = 0.0;
    if (((0.0 < (float)param_2) &&
        (fVar2 = (*(float *)(unaff_RBX + 0x118) - unaff_XMM11_Da) / (float)param_2, 0.0 <= fVar2))
       && (fVar4 = fVar2, 1.0 <= fVar2)) {
      fVar4 = 1.0;
    }
  }
  else {
    if (in_EAX != 2) goto LAB_18011f326;
    param_1 = (double)FUN_180131aa0(&stack0x000000f0,3,5,0,0);
    if ((*(int *)(unaff_RBX + 0x1cac) == unaff_EDI) && (*(char *)(unaff_RBX + 0x1b3c) == '\0')) {
      in_ECX = *(int *)(unaff_RBX + 0x1b2c);
      goto LAB_18011f1e4;
    }
    if (in_stack_000000f0 == 0.0) goto LAB_18011f326;
    fVar2 = in_stack_000000f0;
    fVar4 = (float)func_0x00018011f9b0(param_1,*unaff_RSI);
    iVar1 = func_0x0001801140c0(in_stack_00000100);
    param_2 = 0x3f800000;
    param_1 = extraout_XMM0_Qa;
    if (iVar1 < 1) {
      if (((-100.0 <= (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) &&
          ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) < 100.0 ||
           (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) == 100.0)) ||
         (0.0 < *(float *)(unaff_RBX + 0x370))) {
        if (0.0 <= fVar2) {
          param_1 = (double)CONCAT44((float)(double)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc),
                                     (float)(double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
          fVar2 = 1.0 / (float)(double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
        }
        else {
          param_1 = (double)CONCAT44((float)(double)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc),
                                     (float)(double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
          fVar2 = -1.0 / (float)(double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
        }
      }
      else {
        fVar2 = fVar2 * 0.01;
      }
    }
    else {
      fVar2 = fVar2 * 0.01;
      if (0.0 < *(float *)(unaff_RBX + 0x370)) {
        fVar2 = fVar2 * 0.1;
      }
    }
    if (0.0 < *(float *)(unaff_RBX + 0x374)) {
      fVar2 = fVar2 * 10.0;
    }
    if (((1.0 <= fVar4) && (0.0 < fVar2)) || ((fVar4 <= 0.0 && (fVar2 < 0.0)))) goto LAB_18011f326;
    fVar2 = fVar2 + fVar4;
    fVar4 = 0.0;
    if ((0.0 <= fVar2) && (fVar4 = fVar2, 1.0 <= fVar2)) {
      fVar4 = 1.0;
    }
  }
  param_1 = (double)FUN_18011f740(in_stack_00000100,param_2,
                                  SUB84(((double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da) -
                                        (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da)) *
                                        (double)fVar4 +
                                        (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da),0));
  if (param_1 != *unaff_RSI) {
    *unaff_RSI = param_1;
    unaff_R15B = '\x01';
  }
LAB_18011f326:
  fVar3 = (float)func_0x00018011f9b0(param_1,*unaff_RSI);
  fVar2 = *(float *)(unaff_R14 + 0xc);
  fVar4 = *(float *)(unaff_R14 + 4);
  fVar3 = (unaff_XMM9_Da - unaff_XMM11_Da) * fVar3 + unaff_XMM11_Da;
  *in_stack_00000118 = fVar3 - unaff_XMM12_Da;
  in_stack_00000118[1] = fVar4 + unaff_XMM13_Da;
  in_stack_00000118[2] = fVar3 + unaff_XMM12_Da;
  in_stack_00000118[3] = fVar2 - unaff_XMM13_Da;
  return unaff_R15B;
}



int8_t FUN_18011f32e(uint64_t param_1)

{
  float fVar1;
  float fVar2;
  uint64_t *unaff_RSI;
  int64_t unaff_R14;
  int8_t unaff_R15B;
  float fVar3;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float *in_stack_00000118;
  
  fVar3 = (float)func_0x00018011f9b0(param_1,*unaff_RSI);
  fVar1 = *(float *)(unaff_R14 + 0xc);
  fVar2 = *(float *)(unaff_R14 + 4);
  fVar3 = (unaff_XMM9_Da - unaff_XMM11_Da) * fVar3 + unaff_XMM11_Da;
  *in_stack_00000118 = fVar3 - unaff_XMM12_Da;
  in_stack_00000118[1] = fVar2 + unaff_XMM13_Da;
  in_stack_00000118[2] = fVar3 + unaff_XMM12_Da;
  in_stack_00000118[3] = fVar1 - unaff_XMM13_Da;
  return unaff_R15B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





