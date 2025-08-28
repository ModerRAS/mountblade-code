#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part035.c - 7 个函数
// 函数: void function_2a5100(int64_t *param_1,float *param_2,uint64_t param_3,int16_t *param_4)
void function_2a5100(int64_t *param_1,float *param_2,uint64_t param_3,int16_t *param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  ushort uVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  int iVar15;
  float fVar16;
  iVar11 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar16 = (float)iVar11 * param_2[1];
  if (fVar16 <= 0.0) {
    fVar16 = fVar16 - 0.9999999;
  }
  uVar3 = *(ushort *)((int64_t)param_1 + 0x5c);
  iVar13 = (int)fVar16;
  iVar5 = uVar3 - 1;
  fVar16 = (float)iVar5 * *param_2;
  if (fVar16 <= 0.0) {
    fVar16 = fVar16 - 0.9999999;
  }
  iVar6 = (int)fVar16;
  iVar15 = iVar6 + 1;
  if ((iVar6 < 0) || (iVar5 <= iVar6)) {
    iVar9 = iVar5;
    if (iVar6 <= iVar5) {
      iVar9 = iVar6;
    }
    iVar6 = 0;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    if (iVar15 <= iVar5) {
      iVar5 = iVar15;
    }
    iVar15 = 0;
    if (-1 < iVar5) {
      iVar15 = iVar5;
    }
  }
  if ((iVar13 < 0) || (iVar5 = iVar13, iVar9 = iVar13 + 1, iVar7 = iVar13 + 1, iVar11 <= iVar13)) {
    iVar9 = iVar11;
    if (iVar13 <= iVar11) {
      iVar9 = iVar13;
    }
    iVar5 = 0;
    if (-1 < iVar9) {
      iVar5 = iVar9;
    }
    if (iVar13 <= iVar11) {
      iVar11 = iVar13;
    }
    iVar13 = 0;
    iVar9 = iVar5;
    iVar7 = 0;
    if (-1 < iVar11) {
      iVar13 = iVar11;
      iVar7 = iVar11;
    }
  }
  lVar4 = *param_1;
  uVar10 = (uint64_t)(iVar9 * (uint)uVar3 + iVar6);
  uVar12 = (uint64_t)(iVar5 * (uint)uVar3 + iVar6);
  uVar14 = (uint64_t)(iVar13 * (uint)uVar3 + iVar15);
  uVar8 = (uint64_t)(iVar7 * (uint)uVar3 + iVar15);
  lVar1 = lVar4 + uVar12 * 2;
  *param_4 = *(int16_t *)(uVar12 + lVar1);
  lVar2 = lVar4 + uVar14 * 2;
  *(int8_t *)(param_4 + 1) = *(int8_t *)(uVar12 + 2 + lVar1);
  *(int16_t *)((int64_t)param_4 + 3) = *(int16_t *)(uVar14 + lVar2);
  lVar1 = lVar4 + uVar10 * 2;
  *(int8_t *)((int64_t)param_4 + 5) = *(int8_t *)(uVar14 + 2 + lVar2);
  param_4[3] = *(int16_t *)(uVar10 + lVar1);
  lVar4 = lVar4 + uVar8 * 2;
  *(int8_t *)(param_4 + 4) = *(int8_t *)(uVar10 + 2 + lVar1);
  *(int16_t *)((int64_t)param_4 + 9) = *(int16_t *)(uVar8 + lVar4);
  *(int8_t *)((int64_t)param_4 + 0xb) = *(int8_t *)(uVar8 + 2 + lVar4);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a5260(int64_t *param_1,float *param_2,uint64_t param_3,uint64_t *param_4)
void function_2a5260(int64_t *param_1,float *param_2,uint64_t param_3,uint64_t *param_4)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int8_t stack_array_288 [32];
  int64_t lStack_268;
  uint64_t *plocal_var_260;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  uint64_t stack_array_248 [8];
  uint64_t stack_array_208 [56];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  puVar6 = stack_array_248;
  lVar7 = 0x40;
  do {
    SystemFunction_00018005d390(puVar6);
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar13 = (float)iVar2 * param_2[1];
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  iVar8 = (int)fVar13;
  uVar3 = *(ushort *)((int64_t)param_1 + 0x5c) - 1;
  fVar13 = (float)(int)uVar3 * *param_2;
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  uVar5 = (uint)fVar13;
  uVar9 = uVar5 + 1;
  if (((int)uVar5 < 0) || ((int)uVar3 <= (int)uVar5)) {
    uVar1 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar5;
    }
    uVar5 = 0;
    if (-1 < (int)uVar1) {
      uVar5 = uVar1;
    }
    if ((int)uVar9 <= (int)uVar3) {
      uVar3 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar3) {
      uVar9 = uVar3;
    }
  }
  if ((iVar8 < 0) || (iVar10 = iVar8 + 1, iVar11 = iVar8, iStack_258 = iVar8 + 1, iVar2 <= iVar8)) {
    iVar10 = iVar2;
    if (iVar8 <= iVar2) {
      iVar10 = iVar8;
    }
    iVar11 = 0;
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    if (iVar8 <= iVar2) {
      iVar2 = iVar8;
    }
    iVar10 = 0;
    iVar8 = 0;
    iStack_258 = iVar11;
    if (-1 < iVar2) {
      iVar10 = iVar2;
      iVar8 = iVar2;
    }
  }
  lVar7 = *param_1;
  uVar3 = (uint)(*(ushort *)((int64_t)param_1 + 0x5c) >> 2);
  iVar2 = (int)(((int)uVar5 >> 0x1f & 3U) + uVar5) >> 2;
  uVar5 = uVar5 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  uVar4 = iVar11 >> 0x1f & 3;
  uVar1 = iVar11 + uVar4;
  iStack_24c = (uVar1 & 3) - uVar4;
  iStack_254 = (int)uVar1 >> 2;
  iStack_250 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2;
  lStack_268 = (uint64_t)((iStack_254 * uVar3 + iVar2) * 0x10) + lVar7;
  iVar11 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
  iVar12 = (int)((iStack_258 >> 0x1f & 3U) + iStack_258) >> 2;
  plocal_var_260 = stack_array_248;
  iVar8 = (int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2;
  function_2a7570(0,0,0x40);
  if ((iVar2 != iStack_250) || (iStack_254 != iVar11)) {
    plocal_var_260 = stack_array_248;
    lStack_268 = (uint64_t)((iVar11 * uVar3 + iStack_250) * 0x10) + lVar7;
    function_2a7570(4,0,0x40);
  }
  if (iStack_254 != iVar12) {
    plocal_var_260 = stack_array_248;
    lStack_268 = (uint64_t)((iVar12 * uVar3 + iVar2) * 0x10) + lVar7;
    function_2a7570(0,4,0x40);
  }
  if (((iVar2 != iStack_250) || (iVar12 != iVar8)) && (iVar11 != iVar8)) {
    plocal_var_260 = stack_array_248;
    lStack_268 = (uint64_t)((iStack_250 + iVar8 * uVar3) * 0x10) + lVar7;
    function_2a7570(4,4,0x40);
  }
  lVar7 = (int64_t)iStack_24c;
  *param_4 = stack_array_248[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[1] = stack_array_208[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[2] = stack_array_248[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
  param_4[3] = stack_array_208[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_288);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a5540(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
void function_2a5540(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int8_t stack_array_188 [32];
  int64_t lStack_168;
  int32_t *plocal_var_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int32_t stack_array_148 [8];
  int32_t stack_array_128 [56];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  iVar6 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar12 = (float)iVar6 * param_2[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  iVar8 = (int)fVar12;
  uVar2 = *(ushort *)((int64_t)param_1 + 0x5c) - 1;
  fVar12 = (float)(int)uVar2 * *param_2;
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar4 = (uint)fVar12;
  iVar11 = iVar8 + 1;
  uVar9 = uVar4 + 1;
  if (((int)uVar4 < 0) || ((int)uVar2 <= (int)uVar4)) {
    uVar1 = uVar2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar1 = uVar4;
    }
    uVar4 = 0;
    if (-1 < (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((int)uVar9 <= (int)uVar2) {
      uVar2 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar2) {
      uVar9 = uVar2;
    }
  }
  if ((iVar8 < 0) || (iVar5 = iVar11, iVar10 = iVar8, iVar6 <= iVar8)) {
    iVar5 = iVar6;
    if (iVar8 <= iVar6) {
      iVar5 = iVar8;
    }
    iVar11 = 0;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    if (iVar8 <= iVar6) {
      iVar6 = iVar8;
    }
    iVar8 = 0;
    iVar5 = 0;
    iVar10 = iVar11;
    if (-1 < iVar6) {
      iVar8 = iVar6;
      iVar5 = iVar6;
    }
  }
  lVar7 = *param_1;
  uVar2 = (uint)(*(ushort *)((int64_t)param_1 + 0x5c) >> 2);
  iVar6 = (int)(((int)uVar4 >> 0x1f & 3U) + uVar4) >> 2;
  uVar4 = uVar4 & 0x80000003;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
  }
  uVar3 = iVar10 >> 0x1f & 3;
  uVar1 = iVar10 + uVar3;
  iStack_150 = (uVar1 & 3) - uVar3;
  iStack_158 = (int)uVar1 >> 2;
  iStack_154 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2;
  lStack_168 = (uint64_t)((iStack_158 * uVar2 + iVar6) * 8) + lVar7;
  iVar10 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
  iVar11 = (int)((iVar11 >> 0x1f & 3U) + iVar11) >> 2;
  plocal_var_160 = stack_array_148;
  iVar8 = (int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2;
  function_2a72a0(0,0,0x20);
  if ((iVar6 != iStack_154) || (iStack_158 != iVar10)) {
    plocal_var_160 = stack_array_148;
    lStack_168 = (uint64_t)((iVar10 * uVar2 + iStack_154) * 8) + lVar7;
    function_2a72a0(4,0,0x20);
  }
  if (iStack_158 != iVar11) {
    plocal_var_160 = stack_array_148;
    lStack_168 = (uint64_t)((iVar11 * uVar2 + iVar6) * 8) + lVar7;
    function_2a72a0(0,4,0x20);
  }
  if (((iVar6 != iStack_154) || (iVar11 != iVar8)) && (iVar10 != iVar8)) {
    plocal_var_160 = stack_array_148;
    lStack_168 = (uint64_t)((iStack_154 + iVar8 * uVar2) * 8) + lVar7;
    function_2a72a0(4,4,0x20);
  }
  lVar7 = (int64_t)iStack_150;
  *param_4 = stack_array_148[(int64_t)(int)uVar4 + lVar7 * 8];
  param_4[1] = stack_array_128[(int64_t)(int)uVar4 + lVar7 * 8];
  param_4[2] = stack_array_148[(int64_t)(int)uVar4 + 1 + lVar7 * 8];
  param_4[3] = stack_array_128[(int64_t)(int)uVar4 + 1 + lVar7 * 8];
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a57e0(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
void function_2a57e0(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int8_t stack_array_188 [32];
  int32_t *plocal_var_168;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int32_t stack_array_148 [8];
  int32_t stack_array_128 [56];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  puVar6 = stack_array_148;
  lVar7 = 0x40;
  do {
    SystemFunction_000180074f10(puVar6);
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar13 = (float)iVar2 * param_2[1];
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  iVar8 = (int)fVar13;
  uVar3 = *(ushort *)((int64_t)param_1 + 0x5c) - 1;
  fVar13 = (float)(int)uVar3 * *param_2;
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  uVar5 = (uint)fVar13;
  uVar9 = uVar5 + 1;
  if (((int)uVar5 < 0) || ((int)uVar3 <= (int)uVar5)) {
    uVar1 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar5;
    }
    uVar5 = 0;
    if (-1 < (int)uVar1) {
      uVar5 = uVar1;
    }
    if ((int)uVar9 <= (int)uVar3) {
      uVar3 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar3) {
      uVar9 = uVar3;
    }
  }
  if ((iVar8 < 0) || (iVar2 <= iVar8)) {
    iVar12 = iVar2;
    if (iVar8 <= iVar2) {
      iVar12 = iVar8;
    }
    iVar11 = 0;
    if (-1 < iVar12) {
      iVar11 = iVar12;
    }
    if (iVar8 <= iVar2) {
      iVar2 = iVar8;
    }
    iVar8 = 0;
    iVar12 = iVar11;
    iVar10 = 0;
    if (-1 < iVar2) {
      iVar8 = iVar2;
      iVar10 = iVar2;
    }
  }
  else {
    iVar11 = iVar8;
    iVar12 = iVar8 + 1;
    iVar10 = iVar8 + 1;
  }
  lVar7 = *param_1;
  uVar3 = (uint)(*(ushort *)((int64_t)param_1 + 0x5c) >> 2);
  iVar2 = (int)(((int)uVar5 >> 0x1f & 3U) + uVar5) >> 2;
  uVar5 = uVar5 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  uVar4 = iVar11 >> 0x1f & 3;
  uVar1 = iVar11 + uVar4;
  iStack_150 = (uVar1 & 3) - uVar4;
  iStack_158 = (int)uVar1 >> 2;
  iStack_154 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2;
  iVar11 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
  iVar12 = (int)((iVar12 >> 0x1f & 3U) + iVar12) >> 2;
  plocal_var_168 = stack_array_148;
  iVar8 = (int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2;
  function_2a6ea0(0,0,0x20,(uint64_t)((iStack_158 * uVar3 + iVar2) * 0x10) + lVar7);
  if ((iVar2 != iStack_154) || (iStack_158 != iVar11)) {
    plocal_var_168 = stack_array_148;
    function_2a6ea0(4,0,0x20,(uint64_t)((iVar11 * uVar3 + iStack_154) * 0x10) + lVar7);
  }
  if (iStack_158 != iVar12) {
    plocal_var_168 = stack_array_148;
    function_2a6ea0(0,4,0x20,(uint64_t)((iVar12 * uVar3 + iVar2) * 0x10) + lVar7);
  }
  if (((iVar2 != iStack_154) || (iVar12 != iVar8)) && (iVar11 != iVar8)) {
    plocal_var_168 = stack_array_148;
    function_2a6ea0(4,4,0x20,(uint64_t)((iStack_154 + iVar8 * uVar3) * 0x10) + lVar7);
  }
  lVar7 = (int64_t)iStack_150;
  *param_4 = stack_array_148[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[1] = stack_array_128[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[2] = stack_array_148[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
  param_4[3] = stack_array_128[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a5aa0(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
void function_2a5aa0(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int8_t stack_array_188 [32];
  int32_t *plocal_var_168;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int32_t stack_array_148 [8];
  int32_t stack_array_128 [56];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  puVar6 = stack_array_148;
  lVar7 = 0x40;
  do {
    SystemFunction_000180074f10(puVar6);
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar13 = (float)iVar2 * param_2[1];
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  iVar8 = (int)fVar13;
  uVar3 = *(ushort *)((int64_t)param_1 + 0x5c) - 1;
  fVar13 = (float)(int)uVar3 * *param_2;
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  uVar5 = (uint)fVar13;
  uVar9 = uVar5 + 1;
  if (((int)uVar5 < 0) || ((int)uVar3 <= (int)uVar5)) {
    uVar1 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar5;
    }
    uVar5 = 0;
    if (-1 < (int)uVar1) {
      uVar5 = uVar1;
    }
    if ((int)uVar9 <= (int)uVar3) {
      uVar3 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar3) {
      uVar9 = uVar3;
    }
  }
  if ((iVar8 < 0) || (iVar2 <= iVar8)) {
    iVar12 = iVar2;
    if (iVar8 <= iVar2) {
      iVar12 = iVar8;
    }
    iVar11 = 0;
    if (-1 < iVar12) {
      iVar11 = iVar12;
    }
    if (iVar8 <= iVar2) {
      iVar2 = iVar8;
    }
    iVar8 = 0;
    iVar12 = iVar11;
    iVar10 = 0;
    if (-1 < iVar2) {
      iVar8 = iVar2;
      iVar10 = iVar2;
    }
  }
  else {
    iVar11 = iVar8;
    iVar12 = iVar8 + 1;
    iVar10 = iVar8 + 1;
  }
  lVar7 = *param_1;
  uVar3 = (uint)(*(ushort *)((int64_t)param_1 + 0x5c) >> 2);
  iVar2 = (int)(((int)uVar5 >> 0x1f & 3U) + uVar5) >> 2;
  uVar5 = uVar5 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  uVar4 = iVar11 >> 0x1f & 3;
  uVar1 = iVar11 + uVar4;
  iStack_150 = (uVar1 & 3) - uVar4;
  iStack_158 = (int)uVar1 >> 2;
  iStack_154 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2;
  iVar11 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
  iVar12 = (int)((iVar12 >> 0x1f & 3U) + iVar12) >> 2;
  plocal_var_168 = stack_array_148;
  iVar8 = (int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2;
  function_2a69d0(0,0,0x20,(uint64_t)((iStack_158 * uVar3 + iVar2) * 0x10) + lVar7);
  if ((iVar2 != iStack_154) || (iStack_158 != iVar11)) {
    plocal_var_168 = stack_array_148;
    function_2a69d0(4,0,0x20,(uint64_t)((iVar11 * uVar3 + iStack_154) * 0x10) + lVar7);
  }
  if (iStack_158 != iVar12) {
    plocal_var_168 = stack_array_148;
    function_2a69d0(0,4,0x20,(uint64_t)((iVar12 * uVar3 + iVar2) * 0x10) + lVar7);
  }
  if (((iVar2 != iStack_154) || (iVar12 != iVar8)) && (iVar11 != iVar8)) {
    plocal_var_168 = stack_array_148;
    function_2a69d0(4,4,0x20,(uint64_t)((iStack_154 + iVar8 * uVar3) * 0x10) + lVar7);
  }
  lVar7 = (int64_t)iStack_150;
  *param_4 = stack_array_148[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[1] = stack_array_128[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[2] = stack_array_148[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
  param_4[3] = stack_array_128[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a5d60(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
void function_2a5d60(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int8_t stack_array_188 [32];
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int32_t stack_array_158 [4];
  int8_t stack_array_148 [16];
  int32_t stack_array_138 [24];
  int8_t stack_array_d8 [16];
  int8_t stack_array_c8 [112];
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  puVar6 = stack_array_158;
  lVar7 = 0x40;
  do {
    SystemFunction_000180074f10(puVar6);
    puVar6 = puVar6 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar2 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  fVar13 = (float)iVar2 * param_2[1];
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  iVar8 = (int)fVar13;
  uVar3 = *(ushort *)((int64_t)param_1 + 0x5c) - 1;
  fVar13 = (float)(int)uVar3 * *param_2;
  if (fVar13 <= 0.0) {
    fVar13 = fVar13 - 0.9999999;
  }
  uVar5 = (uint)fVar13;
  uVar9 = uVar5 + 1;
  if (((int)uVar5 < 0) || ((int)uVar3 <= (int)uVar5)) {
    uVar1 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar5;
    }
    uVar5 = 0;
    if (-1 < (int)uVar1) {
      uVar5 = uVar1;
    }
    if ((int)uVar9 <= (int)uVar3) {
      uVar3 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar3) {
      uVar9 = uVar3;
    }
  }
  if ((iVar8 < 0) || (iVar12 = iVar8, iVar11 = iVar8 + 1, iVar10 = iVar8 + 1, iVar2 <= iVar8)) {
    iVar11 = iVar2;
    if (iVar8 <= iVar2) {
      iVar11 = iVar8;
    }
    iVar12 = 0;
    if (-1 < iVar11) {
      iVar12 = iVar11;
    }
    if (iVar8 <= iVar2) {
      iVar2 = iVar8;
    }
    iVar8 = 0;
    iVar11 = iVar12;
    iVar10 = 0;
    if (-1 < iVar2) {
      iVar8 = iVar2;
      iVar10 = iVar2;
    }
  }
  lVar7 = *param_1;
  uVar3 = (uint)(*(ushort *)((int64_t)param_1 + 0x5c) >> 2);
  iVar2 = (int)(((int)uVar5 >> 0x1f & 3U) + uVar5) >> 2;
  uVar5 = uVar5 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  local_var_58 = 0xffffffffffffffff;
  local_var_50 = 0xffffffffffffffff;
  uVar4 = iVar12 >> 0x1f & 3;
  uVar1 = iVar12 + uVar4;
  iStack_15c = (uVar1 & 3) - uVar4;
  iStack_164 = (int)uVar1 >> 2;
  iStack_160 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 3U)) >> 2;
  iStack_168 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
  iVar12 = (int)((iVar11 >> 0x1f & 3U) + iVar11) >> 2;
  iVar8 = (int)((iVar10 >> 0x1f & 3U) + iVar10) >> 2;
  function_2a6630((uint64_t)((iStack_164 * uVar3 + iVar2) * 8) + lVar7,stack_array_158,0x20,&local_var_58);
  if ((iVar2 != iStack_160) || (iStack_164 != iStack_168)) {
    local_var_58 = 0xffffffffffffffff;
    local_var_50 = 0xffffffffffffffff;
    function_2a6630((uint64_t)((iStack_160 + iStack_168 * uVar3) * 8) + lVar7,stack_array_148,0x20,
                  &local_var_58);
  }
  if (iStack_164 != iVar12) {
    local_var_58 = 0xffffffffffffffff;
    local_var_50 = 0xffffffffffffffff;
    function_2a6630((uint64_t)((iVar12 * uVar3 + iVar2) * 8) + lVar7,stack_array_d8,0x20,&local_var_58);
  }
  if (((iVar2 != iStack_160) || (iVar12 != iVar8)) && (iStack_168 != iVar8)) {
    local_var_58 = 0xffffffffffffffff;
    local_var_50 = 0xffffffffffffffff;
    function_2a6630((uint64_t)((iStack_160 + iVar8 * uVar3) * 8) + lVar7,stack_array_c8,0x20,&local_var_58);
  }
  lVar7 = (int64_t)iStack_15c;
  *param_4 = stack_array_158[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[1] = stack_array_158[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
  param_4[2] = stack_array_138[(int64_t)(int)uVar5 + lVar7 * 8];
  param_4[3] = stack_array_138[(int64_t)(int)uVar5 + 1 + lVar7 * 8];
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a6040(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
void function_2a6040(int64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int8_t *puVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int64_t lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t stack_array_398 [32];
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int32_t *plocal_var_368;
  int8_t stack_array_360 [40];
  int32_t local_var_338;
  int8_t stack_array_334 [28];
  int32_t stack_array_318 [24];
  int8_t stack_array_2b8 [128];
  int8_t stack_array_238 [40];
  double adStack_210 [59];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_398;
  puVar10 = &local_var_338;
  lVar12 = 0x40;
  plocal_var_368 = param_4;
  do {
    uVar2 = SystemFunction_000180074f10(puVar10);
    puVar10 = puVar10 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uVar7 = *(ushort *)((int64_t)param_1 + 0x5c) - 1;
  auVar18._0_4_ = (float)(int)uVar7 * *param_2;
  iVar4 = (int)auVar18._0_4_;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar18._0_4_)) {
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar18);
    uVar2 = uVar2 & 1;
    auVar18._0_4_ = (float)(int)(iVar4 - uVar2);
  }
  uVar9 = (uint)auVar18._0_4_;
  iVar4 = *(ushort *)((int64_t)param_1 + 0x5e) - 1;
  auVar19._0_4_ = (float)iVar4 * param_2[1];
  iVar13 = (int)auVar19._0_4_;
  if ((iVar13 != -0x80000000) && ((float)iVar13 != auVar19._0_4_)) {
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar19);
    auVar19._0_4_ = (float)(int)(iVar13 - (uVar2 & 1));
  }
  uVar2 = uVar9 + 1;
  iVar13 = (int)auVar19._0_4_;
  iVar17 = iVar13 + 1;
  if (((int)uVar9 < 0) || ((int)uVar7 <= (int)uVar9)) {
    uVar3 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      uVar3 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar3) {
      uVar9 = uVar3;
    }
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
    uVar2 = 0;
    if (-1 < (int)uVar7) {
      uVar2 = uVar7;
    }
  }
  if ((iVar13 < 0) || (iVar15 = iVar17, iVar1 = iVar13, iVar4 <= iVar13)) {
    iVar1 = iVar4;
    if (iVar13 <= iVar4) {
      iVar1 = iVar13;
    }
    iVar17 = 0;
    if (-1 < iVar1) {
      iVar17 = iVar1;
    }
    if (iVar13 <= iVar4) {
      iVar4 = iVar13;
    }
    iVar15 = 0;
    iVar13 = iVar17;
    iVar1 = 0;
    if (-1 < iVar4) {
      iVar15 = iVar4;
      iVar1 = iVar4;
    }
  }
  lVar12 = *param_1;
  uVar7 = (uint)(*(ushort *)((int64_t)param_1 + 0x5c) >> 2);
  iVar4 = (int)(((int)uVar9 >> 0x1f & 3U) + uVar9) >> 2;
  uVar9 = uVar9 & 0x80000003;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
  }
  uVar8 = iVar13 >> 0x1f & 3;
  uVar3 = iVar13 + uVar8;
  iStack_370 = (uVar3 & 3) - uVar8;
  iStack_374 = (int)uVar3 >> 2;
  iVar16 = (int)(((int)uVar2 >> 0x1f & 3U) + uVar2) >> 2;
  iStack_378 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  iVar17 = (int)((iVar17 >> 0x1f & 3U) + iVar17) >> 2;
  iVar13 = (int)((iVar15 >> 0x1f & 3U) + iVar15) >> 2;
  function_41c5b0(stack_array_360,stack_array_238,(uint64_t)((iVar4 + iStack_374 * uVar7) * 0x10) + lVar12);
  lVar11 = 4;
  lVar14 = 4;
  puVar5 = stack_array_334 + 1;
  pdVar6 = adStack_210;
  do {
    puVar5[-3] = (char)(int)pdVar6[-5];
    puVar5[-4] = (char)(int)pdVar6[-4];
    puVar5[-5] = (char)(int)pdVar6[-3];
    puVar5[-2] = (char)(int)pdVar6[-2];
    puVar5[1] = (char)(int)pdVar6[-1];
    *puVar5 = (char)(int)*pdVar6;
    puVar5[-1] = (char)(int)pdVar6[1];
    puVar5[2] = (char)(int)pdVar6[2];
    puVar5[5] = (char)(int)pdVar6[3];
    puVar5[4] = (char)(int)pdVar6[4];
    puVar5[3] = (char)(int)pdVar6[5];
    puVar5[6] = (char)(int)pdVar6[6];
    puVar5[9] = (char)(int)pdVar6[7];
    puVar5[8] = (char)(int)pdVar6[8];
    puVar5[7] = (char)(int)pdVar6[9];
    puVar5[10] = (char)(int)pdVar6[10];
    lVar14 = lVar14 + -1;
    puVar5 = puVar5 + 0x20;
    pdVar6 = pdVar6 + 0x10;
  } while (lVar14 != 0);
  if ((iVar4 != iVar16) || (iStack_374 != iStack_378)) {
    function_41c5b0(stack_array_360,stack_array_238,(uint64_t)((iStack_378 * uVar7 + iVar16) * 0x10) + lVar12
                 );
    lVar14 = 4;
    pdVar6 = adStack_210;
    puVar5 = stack_array_334 + 0xd;
    do {
      puVar5[1] = (char)(int)pdVar6[-5];
      *puVar5 = (char)(int)pdVar6[-4];
      puVar5[-1] = (char)(int)pdVar6[-3];
      puVar5[2] = (char)(int)pdVar6[-2];
      puVar5[5] = (char)(int)pdVar6[-1];
      puVar5[4] = (char)(int)*pdVar6;
      puVar5[3] = (char)(int)pdVar6[1];
      puVar5[6] = (char)(int)pdVar6[2];
      puVar5[9] = (char)(int)pdVar6[3];
      puVar5[8] = (char)(int)pdVar6[4];
      puVar5[7] = (char)(int)pdVar6[5];
      puVar5[10] = (char)(int)pdVar6[6];
      puVar5[0xd] = (char)(int)pdVar6[7];
      puVar5[0xc] = (char)(int)pdVar6[8];
      puVar5[0xb] = (char)(int)pdVar6[9];
      puVar5[0xe] = (char)(int)pdVar6[10];
      lVar14 = lVar14 + -1;
      pdVar6 = pdVar6 + 0x10;
      puVar5 = puVar5 + 0x20;
    } while (lVar14 != 0);
  }
  if (iStack_374 != iVar17) {
    function_41c5b0(stack_array_360,stack_array_238,(uint64_t)((iVar17 * uVar7 + iVar4) * 0x10) + lVar12);
    lVar14 = 4;
    pdVar6 = adStack_210;
    puVar5 = stack_array_2b8 + 5;
    do {
      puVar5[-3] = (char)(int)pdVar6[-5];
      puVar5[-4] = (char)(int)pdVar6[-4];
      puVar5[-5] = (char)(int)pdVar6[-3];
      puVar5[-2] = (char)(int)pdVar6[-2];
      puVar5[1] = (char)(int)pdVar6[-1];
      *puVar5 = (char)(int)*pdVar6;
      puVar5[-1] = (char)(int)pdVar6[1];
      puVar5[2] = (char)(int)pdVar6[2];
      puVar5[5] = (char)(int)pdVar6[3];
      puVar5[4] = (char)(int)pdVar6[4];
      puVar5[3] = (char)(int)pdVar6[5];
      puVar5[6] = (char)(int)pdVar6[6];
      puVar5[9] = (char)(int)pdVar6[7];
      puVar5[8] = (char)(int)pdVar6[8];
      puVar5[7] = (char)(int)pdVar6[9];
      puVar5[10] = (char)(int)pdVar6[10];
      lVar14 = lVar14 + -1;
      pdVar6 = pdVar6 + 0x10;
      puVar5 = puVar5 + 0x20;
    } while (lVar14 != 0);
  }
  if (((iVar4 != iVar16) || (iVar17 != iVar13)) && (iStack_378 != iVar13)) {
    function_41c5b0(stack_array_360,stack_array_238,(uint64_t)((iVar16 + iVar13 * uVar7) * 0x10) + lVar12);
    pdVar6 = adStack_210;
    puVar5 = stack_array_2b8 + 0x11;
    do {
      puVar5[1] = (char)(int)pdVar6[-5];
      *puVar5 = (char)(int)pdVar6[-4];
      puVar5[-1] = (char)(int)pdVar6[-3];
      puVar5[2] = (char)(int)pdVar6[-2];
      puVar5[5] = (char)(int)pdVar6[-1];
      puVar5[4] = (char)(int)*pdVar6;
      puVar5[3] = (char)(int)pdVar6[1];
      puVar5[6] = (char)(int)pdVar6[2];
      puVar5[9] = (char)(int)pdVar6[3];
      puVar5[8] = (char)(int)pdVar6[4];
      puVar5[7] = (char)(int)pdVar6[5];
      puVar5[10] = (char)(int)pdVar6[6];
      puVar5[0xd] = (char)(int)pdVar6[7];
      puVar5[0xc] = (char)(int)pdVar6[8];
      puVar5[0xb] = (char)(int)pdVar6[9];
      puVar5[0xe] = (char)(int)pdVar6[10];
      lVar11 = lVar11 + -1;
      pdVar6 = pdVar6 + 0x10;
      puVar5 = puVar5 + 0x20;
    } while (lVar11 != 0);
  }
  lVar12 = (int64_t)iStack_370;
  *plocal_var_368 = (&local_var_338)[(int64_t)(int)uVar9 + lVar12 * 8];
  plocal_var_368[1] = (&local_var_338)[(int64_t)(int)uVar9 + 1 + lVar12 * 8];
  plocal_var_368[2] = stack_array_318[(int64_t)(int)uVar9 + lVar12 * 8];
  plocal_var_368[3] = stack_array_318[(int64_t)(int)uVar9 + 1 + lVar12 * 8];
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_398);
}