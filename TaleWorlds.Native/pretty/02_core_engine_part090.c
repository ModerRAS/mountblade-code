#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part090.c - 9 个函数
// 函数: void function_114bc0(int32_t *param_1,int64_t param_2,int param_3)
void function_114bc0(int32_t *param_1,int64_t param_2,int param_3)
{
  float fVar1;
  ushort uVar2;
  int64_t lVar3;
  float *pfVar4;
  ushort *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  lVar3 = *(int64_t *)(param_2 + 0x10);
  fVar8 = 0.0;
  fVar6 = 0.0;
  pfVar4 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
  fVar1 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  puVar5 = (ushort *)((int64_t)param_3 * 2 + lVar3);
  do {
    fVar7 = 0.0;
    if ((ushort *)(lVar3 + (int64_t)*(int *)(param_2 + 0x3c) * 2) <= puVar5) {
LAB_180114c5f:
      if (fVar8 <= fVar6) {
        fVar8 = fVar6;
      }
      if ((0.0 < fVar6) || (fVar7 == 0.0)) {
        fVar7 = fVar7 + fVar1;
      }
      param_1[1] = fVar8;
      param_1[2] = fVar7;
      param_1[5] = (int)((int64_t)puVar5 + ((int64_t)param_3 * -2 - lVar3) >> 1);
      param_1[4] = fVar7;
      *param_1 = 0;
      param_1[3] = 0;
      return;
    }
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    if (uVar2 == 10) {
      fVar8 = fVar6;
      if (fVar6 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar6 = 0.0;
      fVar7 = fVar1;
      goto LAB_180114c5f;
    }
    if (uVar2 != 0xd) {
      if ((int)(uint)uVar2 < (int)pfVar4[8]) {
        fVar7 = *(float *)(*(int64_t *)(pfVar4 + 10) + (uint64_t)uVar2 * 4);
      }
      else {
        fVar7 = pfVar4[0x12];
      }
      fVar6 = fVar6 + fVar7 * (fVar1 / *pfVar4);
    }
  } while( true );
}
int function_114cb0(int64_t param_1,int param_2)
{
  ushort uVar1;
  bool bVar2;
  int64_t lVar3;
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    lVar3 = (int64_t)param_2;
    do {
      if (lVar3 < 1) break;
      uVar1 = *(ushort *)(*(int64_t *)(param_1 + 0x10) + -2 + lVar3 * 2);
      if (((((ushort)(uVar1 - 0x20) < 0x3e) &&
           ((0x2800000008005301U >> ((uint64_t)(uVar1 - 0x20 & 0xffff) & 0x3f) & 1) != 0)) ||
          (uVar1 == 9)) || ((uVar1 == 0x3000 || ((ushort)(uVar1 - 0x7b) < 3)))) {
        uVar1 = *(ushort *)(*(int64_t *)(param_1 + 0x10) + lVar3 * 2);
        if (((0x3d < (ushort)(uVar1 - 0x20)) ||
            ((0x2800000008005301U >> ((uint64_t)(uVar1 - 0x20 & 0xffff) & 0x3f) & 1) == 0)) &&
           (((uVar1 != 9 && (uVar1 != 0x3000)) && (2 < (ushort)(uVar1 - 0x7b))))) break;
      }
      param_2 = param_2 + -1;
      bVar2 = 0 < lVar3;
      lVar3 = lVar3 + -1;
    } while (bVar2);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  return param_2;
}
int function_114cc0(uint64_t param_1,int param_2)
{
  ushort uVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t in_R11;
  lVar3 = (int64_t)param_2;
  do {
    if (lVar3 < 1) break;
    uVar1 = *(ushort *)(*(int64_t *)(in_R11 + 0x10) + -2 + lVar3 * 2);
    if (((((ushort)(uVar1 - 0x20) < 0x3e) &&
         ((0x2800000008005301U >> ((uint64_t)(uVar1 - 0x20 & 0xffff) & 0x3f) & 1) != 0)) ||
        (uVar1 == 9)) || ((uVar1 == 0x3000 || ((ushort)(uVar1 - 0x7b) < 3)))) {
      uVar1 = *(ushort *)(*(int64_t *)(in_R11 + 0x10) + lVar3 * 2);
      if (((0x3d < (ushort)(uVar1 - 0x20)) ||
          ((0x2800000008005301U >> ((uint64_t)(uVar1 - 0x20 & 0xffff) & 0x3f) & 1) == 0)) &&
         (((uVar1 != 9 && (uVar1 != 0x3000)) && (2 < (ushort)(uVar1 - 0x7b))))) break;
    }
    param_2 = param_2 + -1;
    bVar2 = 0 < lVar3;
    lVar3 = lVar3 + -1;
  } while (bVar2);
  if (param_2 < 0) {
    param_2 = 0;
  }
  return param_2;
}
int function_114d58(uint64_t param_1,int param_2)
{
  if (param_2 < 0) {
    param_2 = 0;
  }
  return param_2;
}
int function_114d70(int64_t param_1,int param_2)
{
  short sVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  iVar2 = *(int *)(param_1 + 0x3c);
  param_2 = param_2 + 1;
  iVar3 = param_2 - iVar2;
  if (param_2 < iVar2) {
    lVar4 = (int64_t)param_2;
    do {
      if (lVar4 < 1) break;
      sVar1 = *(short *)(*(int64_t *)(param_1 + 0x10) + -2 + lVar4 * 2);
      if (((((ushort)(sVar1 - 0x20U) < 0x3e) &&
           ((0x2800000008005301U >> ((uint64_t)(ushort)(sVar1 - 0x20U) & 0x3f) & 1) != 0)) ||
          (sVar1 == 9)) || ((sVar1 == 0x3000 || ((ushort)(sVar1 - 0x7bU) < 3)))) {
        sVar1 = *(short *)(*(int64_t *)(param_1 + 0x10) + lVar4 * 2);
        if (((0x3d < (ushort)(sVar1 - 0x20U)) ||
            ((0x2800000008005301U >> ((uint64_t)(ushort)(sVar1 - 0x20U) & 0x3f) & 1) == 0)) &&
           (((sVar1 != 9 && (sVar1 != 0x3000)) && (2 < (ushort)(sVar1 - 0x7bU))))) break;
      }
      param_2 = param_2 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
    iVar3 = param_2 - iVar2;
  }
  if (param_2 != iVar2 && SBORROW4(param_2,iVar2) == iVar3 < 0) {
    param_2 = iVar2;
  }
  return param_2;
}
int function_114d84(uint64_t param_1,int param_2)
{
  short sVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int in_R10D;
  int32_t in_register_00000094;
  lVar2 = (int64_t)param_2;
  do {
    if (lVar2 < 1) break;
    sVar1 = *(short *)(*(int64_t *)(unaff_RBX + 0x10) + -2 + lVar2 * 2);
    if (((((ushort)(sVar1 - 0x20U) < 0x3e) &&
         ((0x2800000008005301U >> ((uint64_t)(ushort)(sVar1 - 0x20U) & 0x3f) & 1) != 0)) ||
        (sVar1 == 9)) || ((sVar1 == 0x3000 || ((ushort)(sVar1 - 0x7bU) < 3)))) {
      sVar1 = *(short *)(*(int64_t *)(unaff_RBX + 0x10) + lVar2 * 2);
      if (((0x3d < (ushort)(sVar1 - 0x20U)) ||
          ((0x2800000008005301U >> ((uint64_t)(ushort)(sVar1 - 0x20U) & 0x3f) & 1) == 0)) &&
         (((sVar1 != 9 && (sVar1 != 0x3000)) && (2 < (ushort)(sVar1 - 0x7bU))))) break;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + 1;
  } while (lVar2 < CONCAT44(in_register_00000094,in_R10D));
  if (in_R10D < param_2) {
    param_2 = in_R10D;
  }
  return param_2;
}
int32_t function_114e19(uint64_t param_1,int32_t param_2)
{
  int32_t in_R10D;
  bool in_ZF;
  char in_SF;
  char in_OF;
  if (!in_ZF && in_OF == in_SF) {
    param_2 = in_R10D;
  }
  return param_2;
}
// 函数: void function_114e30(int64_t param_1,int param_2,int param_3)
void function_114e30(int64_t param_1,int param_2,int param_3)
{
  short *psVar1;
  int64_t lVar2;
  short sVar3;
  int64_t lVar4;
  int iVar5;
  short *psVar6;
  lVar4 = *(int64_t *)(param_1 + 0x10);
  psVar1 = (short *)(lVar4 + (int64_t)param_2 * 2);
  iVar5 = function_121d80(psVar1,psVar1 + param_3);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - iVar5;
  lVar2 = (int64_t)param_3 + (int64_t)param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - param_3;
  psVar6 = (short *)(lVar4 + lVar2 * 2);
  sVar3 = *(short *)(lVar4 + lVar2 * 2);
  while (sVar3 != 0) {
    psVar6 = psVar6 + 1;
    *psVar1 = sVar3;
    psVar1 = psVar1 + 1;
    sVar3 = *psVar6;
  }
  *psVar1 = 0;
  return;
}
uint64_t function_114ec0(int64_t param_1,int param_2,int64_t param_3,int param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  iVar1 = *(int *)(param_1 + 0x3c);
  lVar8 = (int64_t)param_2;
  lVar3 = (int64_t)param_4 * 2;
  uVar7 = *(uint *)(param_1 + 0xe74) >> 0x12;
  uVar6 = function_121d80(param_3,lVar3 + param_3);
  if (((uVar7 & 1) == 0) && (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38) + 1 + (int)uVar6))
  {
LAB_180114f29:
    return uVar6 & 0xffffffffffffff00;
  }
  if (*(int *)(param_1 + 8) < param_4 + 1 + iVar1) {
    if ((uVar7 & 1) == 0) goto LAB_180114f29;
    iVar4 = param_4;
    if (param_4 < 0x101) {
      iVar4 = 0x100;
    }
    iVar5 = param_4 * 4;
    if (iVar5 < 0x20) {
      iVar5 = 0x20;
    }
    else if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    function_11dae0(param_1 + 8,iVar1 + 1 + iVar5);
  }
  lVar2 = *(int64_t *)(param_1 + 0x10);
  if (param_2 != iVar1) {
// WARNING: Subroutine does not return
    memmove(lVar2 + (lVar8 + param_4) * 2,lVar2 + lVar8 * 2,(int64_t)(iVar1 - param_2) * 2);
  }
// WARNING: Subroutine does not return
  memcpy(lVar2 + lVar8 * 2,param_3,lVar3);
}
// 函数: void function_114f62(void)
void function_114f62(void)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int unaff_EDI;
  int unaff_R15D;
  int32_t unaff_000000bc;
  lVar1 = *(int64_t *)(unaff_RBX + 0x10);
  if (unaff_R15D != unaff_EDI) {
// WARNING: Subroutine does not return
    memmove(lVar1 + (CONCAT44(unaff_000000bc,unaff_R15D) + unaff_RSI) * 2,
            lVar1 + CONCAT44(unaff_000000bc,unaff_R15D) * 2,(int64_t)(unaff_EDI - unaff_R15D) * 2);
  }
// WARNING: Subroutine does not return
  memcpy(lVar1 + CONCAT44(unaff_000000bc,unaff_R15D) * 2);
}
// 函数: void function_114fb7(void)
void function_114fb7(void)
{
  return;
}
int function_114fd0(int64_t param_1,float param_2,float param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  uint64_t local_var_58;
  float fStack_50;
  uint64_t local_var_4c;
  uint local_var_44;
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar3 = 0;
  local_var_58 = 0;
  local_var_4c = 0;
  fVar7 = 0.0;
  local_var_44 = 0;
  iVar2 = iVar3;
  if (iVar1 < 1) {
    return iVar1;
  }
  while( true ) {
    function_114bc0(&local_var_58,param_1,iVar2);
    uVar5 = (uint64_t)local_var_44;
    if ((int)local_var_44 < 1) {
      return iVar1;
    }
    if ((iVar2 == 0) && (param_3 < (float)local_var_4c + fVar7)) {
      return 0;
    }
    if (param_3 < local_var_4c._4_4_ + fVar7) break;
    fVar7 = fVar7 + fStack_50;
    iVar2 = iVar2 + local_var_44;
    if (iVar1 <= iVar2) {
      return iVar1;
    }
  }
  if (iVar1 <= iVar2) {
    return iVar1;
  }
  if (param_2 < (float)local_var_58) {
    return iVar2;
  }
  uVar4 = local_var_44;
  if ((param_2 < local_var_58._4_4_) && (fVar7 = (float)local_var_58, 0 < (int)local_var_44)) {
    do {
      fVar6 = (float)SystemFunction_000180114b50(param_1,iVar2,iVar3);
      uVar4 = (uint)uVar5;
      if (param_2 < fVar6 + fVar7) {
        if (param_2 < fVar6 * 0.5 + fVar7) {
          return iVar3 + iVar2;
        }
        return iVar3 + iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      fVar7 = fVar6 + fVar7;
    } while (iVar3 < (int)uVar4);
  }
  iVar2 = uVar4 + iVar2;
  if (*(short *)(*(int64_t *)(param_1 + 0x10) + -2 + (int64_t)iVar2 * 2) == 10) {
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}
// 函数: void function_115130(uint64_t param_1,int32_t *param_2,int32_t param_3,int32_t param_4)
void function_115130(uint64_t param_1,int32_t *param_2,int32_t param_3,int32_t param_4)
{
  int32_t uVar1;
  int8_t stack_array_38 [12];
  int32_t local_var_2c;
  if (*(char *)(param_2 + 4) != '\0') {
    function_114bc0(stack_array_38,param_1,0);
    param_4 = local_var_2c;
  }
  uVar1 = function_114fd0(param_1,param_3,param_4);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  *(int8_t *)((int64_t)param_2 + 0xf) = 0;
  return;
}
// 函数: void function_115190(uint64_t param_1,int32_t *param_2,int32_t param_3,int32_t param_4)
void function_115190(uint64_t param_1,int32_t *param_2,int32_t param_3,int32_t param_4)
{
  int32_t uVar1;
  int8_t stack_array_38 [12];
  int32_t local_var_2c;
  if (*(char *)(param_2 + 4) != '\0') {
    function_114bc0(stack_array_38,param_1,0);
    param_4 = local_var_2c;
  }
  if (param_2[1] == param_2[2]) {
    param_2[1] = *param_2;
  }
  uVar1 = function_114fd0(param_1,param_3,param_4);
  param_2[2] = uVar1;
  *param_2 = uVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_115200(float *param_1,int64_t param_2,float param_3,int param_4)
void function_115200(float *param_1,int64_t param_2,float param_3,int param_4)
{
  ushort uVar1;
  float *pfVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t lVar8;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  fVar7 = *(float *)(param_2 + 0x3c);
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (param_3 == fVar7) {
    if (param_4 == 0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 1.0;
      fVar6 = 0.0;
      if (0 < (int)fVar7) {
        do {
          fVar4 = fVar6;
          function_114bc0(&fStack_38,param_2,fVar4);
          fVar5 = (float)((int)fVar4 + (int)fStack_24);
          fVar6 = fVar5;
        } while ((int)fVar5 < (int)fVar7);
      }
      param_1[5] = fVar4;
      param_1[3] = fVar5;
      param_1[4] = 0.0;
    }
    else {
      function_114bc0(&fStack_38,param_2,0);
      param_1[1] = 0.0;
      param_1[2] = fStack_28 - fStack_2c;
      *param_1 = fStack_34;
      param_1[3] = 0.0;
      param_1[4] = fVar7;
    }
  }
  else {
    param_1[1] = 0.0;
    function_114bc0(&fStack_38,param_2,0);
    fVar7 = 0.0;
    fVar4 = fStack_24;
    while ((int)fVar4 <= (int)param_3) {
      fVar6 = (float)((int)fVar7 + (int)fStack_24);
      param_1[1] = fStack_30 + param_1[1];
      function_114bc0(&fStack_38,param_2,fVar6);
      fVar5 = fVar7;
      fVar7 = fVar6;
      fVar4 = (float)((int)fStack_24 + (int)fVar6);
    }
    param_1[3] = fVar7;
    param_1[4] = fStack_24;
    param_1[5] = fVar5;
    param_1[2] = fStack_28 - fStack_2c;
    *param_1 = fStack_38;
    lVar3 = SYSTEM_DATA_MANAGER_A;
    if ((int)fVar7 < (int)param_3) {
      lVar8 = (int64_t)(int)fVar7 * 2;
      do {
        uVar1 = *(ushort *)(lVar8 + *(int64_t *)(param_2 + 0x10));
        if (uVar1 == 10) {
          fVar5 = -1.0;
        }
        else {
          pfVar2 = *(float **)(lVar3 + 0x19f0);
          if ((int)(uint)uVar1 < (int)pfVar2[8]) {
            fVar5 = *(float *)(*(int64_t *)(pfVar2 + 10) + (uint64_t)uVar1 * 4);
          }
          else {
            fVar5 = pfVar2[0x12];
          }
          fVar5 = (*(float *)(lVar3 + 0x19f8) / *pfVar2) * fVar5;
        }
        fVar7 = (float)((int)fVar7 + 1);
        lVar8 = lVar8 + 2;
        *param_1 = fVar5 + *param_1;
      } while ((int)fVar7 < (int)param_3);
    }
  }
  return;
}
// 函数: void function_115400(int64_t param_1,int64_t param_2,int param_3,int param_4)
void function_115400(int64_t param_1,int64_t param_2,int param_3,int param_4)
{
  int16_t *puVar1;
  int16_t *puVar2;
  int64_t lVar3;
  lVar3 = (int64_t)param_4;
  puVar1 = (int16_t *)function_116110(param_2 + 0x18,param_3,param_4,0);
  if ((puVar1 != (int16_t *)0x0) && (0 < param_4)) {
    puVar2 = puVar1;
    do {
      *puVar2 = *(int16_t *)
                 (*(int64_t *)(param_1 + 0x10) + ((int64_t)param_3 * 2 - (int64_t)puVar1) + -2 +
                 (int64_t)(puVar2 + 1));
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  function_114e30(param_1,param_3,param_4);
  *(int8_t *)(param_2 + 0xf) = 0;
  return;
}
// 函数: void function_115490(int64_t param_1,int *param_2)
void function_115490(int64_t param_1,int *param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      param_2[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      param_2[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *param_2 = iVar2;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  if (iVar2 != iVar3) {
    if (iVar2 < iVar3) {
      function_115400(param_1,param_2,iVar2,iVar3 - iVar2);
      param_2[2] = param_2[1];
      *param_2 = param_2[1];
      *(int8_t *)((int64_t)param_2 + 0xf) = 0;
      return;
    }
    function_115400(param_1,param_2,iVar3,iVar2 - iVar3);
    param_2[1] = param_2[2];
    *param_2 = param_2[2];
    *(int8_t *)((int64_t)param_2 + 0xf) = 0;
  }
  return;
}
uint64_t function_115580(int64_t param_1,int *param_2,uint64_t param_3,int param_4)
{
  int iVar1;
  char cVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  if (iVar4 != iVar5) {
    if (iVar1 < iVar4) {
      param_2[1] = iVar1;
      iVar4 = iVar1;
    }
    if (iVar1 < iVar5) {
      param_2[2] = iVar1;
      iVar5 = iVar1;
    }
    if (iVar4 == iVar5) {
      *param_2 = iVar4;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  function_115490(param_1,param_2);
  cVar2 = function_114ec0(param_1,*param_2,param_3,param_4);
  if (cVar2 == '\0') {
    if (*(short *)((int64_t)param_2 + 0xe16) != 0) {
      *(short *)((int64_t)param_2 + 0xe16) = *(short *)((int64_t)param_2 + 0xe16) + -1;
    }
    uVar3 = 0;
  }
  else {
    function_116470(param_2,*param_2,param_4);
    *param_2 = *param_2 + param_4;
    uVar3 = 1;
    *(int8_t *)((int64_t)param_2 + 0xf) = 0;
  }
  return uVar3;
}