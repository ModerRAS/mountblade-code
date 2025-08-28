#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part064.c - 12 个函数
// 函数: void function_300970(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void function_300970(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6,uint64_t param_7,int32_t param_8)
{
  (**(code **)(**(int64_t **)(param_1 + 0x210) + 0x70))
            (*(int64_t **)(param_1 + 0x210),0x3f800000,param_3,*(uint64_t *)(param_1 + 0x208),
             0x3f800000,param_8,param_4,param_5,param_6,0,1,0,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3009f0(int64_t param_1)
void function_3009f0(int64_t param_1)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 0xd0) == 0) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1028,8,3);
// WARNING: Subroutine does not return
    memset(uVar1,0,0x1028);
  }
  return;
}
// 函数: void function_300a13(uint64_t param_1)
void function_300a13(uint64_t param_1)
{
  uint64_t uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(param_1,0x1028);
// WARNING: Subroutine does not return
  memset(uVar1,0,0x1028);
}
// 函数: void function_300a4c(void)
void function_300a4c(void)
{
  return;
}
// 函数: void function_300a60(int64_t param_1,uint64_t *param_2,uint param_3,uint param_4)
void function_300a60(int64_t param_1,uint64_t *param_2,uint param_3,uint param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int iVar8;
  uint64_t uVar9;
  uVar6 = param_3 >> 0xd;
  uVar9 = (uint64_t)param_3;
  if (uVar6 == param_3 + param_4 >> 0xd) {
// WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
    memcpy(param_2,*(int64_t *)(param_1 + 8 + (uint64_t)uVar6 * 8) +
                   (uint64_t)(param_3 + uVar6 * -0x2000) * 0x40,(uint64_t)param_4 << 6);
    return;
  }
  if (param_4 != 0) {
    uVar7 = (uint64_t)param_4;
    do {
      iVar8 = (int)uVar9;
      uVar3 = uVar9 >> 0xd;
      uVar9 = (uint64_t)(iVar8 + 1);
      lVar2 = *(int64_t *)(param_1 + 8 + uVar3 * 8);
      lVar5 = (uint64_t)(uint)(iVar8 + (int)uVar3 * -0x2000) * 0x40;
      uVar4 = ((uint64_t *)(lVar2 + lVar5))[1];
      *param_2 = *(uint64_t *)(lVar2 + lVar5);
      param_2[1] = uVar4;
      puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar5);
      uVar4 = puVar1[1];
      param_2[2] = *puVar1;
      param_2[3] = uVar4;
      puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar5);
      uVar4 = puVar1[1];
      param_2[4] = *puVar1;
      param_2[5] = uVar4;
      puVar1 = (uint64_t *)(lVar2 + 0x30 + lVar5);
      uVar4 = puVar1[1];
      param_2[6] = *puVar1;
      param_2[7] = uVar4;
      uVar7 = uVar7 - 1;
      param_2 = param_2 + 8;
    } while (uVar7 != 0);
  }
  return;
}
float * function_300b10(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  uint64_t local_var_10;
  fStack_28 = param_3[4] - param_1[4];
  fStack_24 = param_3[5] - param_1[5];
  fStack_20 = param_3[6] - param_1[6];
  local_var_1c = 0x7f7fffff;
  SystemCore_EventHandler(0x7f7fffff,&local_var_18,&fStack_28);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *(uint64_t *)(param_2 + 4) = local_var_18;
  *(uint64_t *)(param_2 + 6) = local_var_10;
  *param_2 = fVar8 * fVar4 * 1.0 + fVar1 * fVar5 * 1.0 + fVar7 * fVar3 + fVar6 * fVar2;
  param_2[1] = fVar7 * fVar4 * -1.0 + fVar1 * fVar6 * -1.0 + fVar5 * fVar2 + fVar8 * fVar3;
  param_2[2] = fVar8 * fVar2 * -1.0 + fVar1 * fVar7 * -1.0 + fVar5 * fVar3 + fVar6 * fVar4;
  param_2[3] = fVar6 * fVar3 * -1.0 + fVar1 * fVar8 * -1.0 + fVar5 * fVar4 + fVar7 * fVar2;
  return param_2;
}
float * UltraHighFreq_FileSystem1(float *param_1,float *param_2,float *param_3)
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
  float *pfVar13;
  int8_t stack_array_58 [88];
  pfVar13 = (float *)SystemFileHandler(param_1,stack_array_58,param_3 + 4);
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar3 = pfVar13[1];
  fVar4 = pfVar13[2];
  fVar9 = *param_1;
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  param_2[4] = *pfVar13 + param_1[4];
  param_2[5] = fVar1 + fVar3;
  param_2[6] = fVar2 + fVar4;
  param_2[7] = 3.4028235e+38;
  *param_2 = fVar12 * fVar8 * -1.0 + fVar11 * fVar7 * -1.0 + (fVar5 * fVar9 - fVar10 * fVar6);
  param_2[1] = fVar11 * fVar8 * 1.0 + fVar9 * fVar6 * 1.0 + (fVar5 * fVar10 - fVar12 * fVar7);
  param_2[2] = fVar12 * fVar6 * 1.0 + fVar9 * fVar7 * 1.0 + (fVar5 * fVar11 - fVar10 * fVar8);
  param_2[3] = fVar10 * fVar7 * 1.0 + fVar9 * fVar8 * 1.0 + (fVar5 * fVar12 - fVar11 * fVar6);
  return param_2;
}
int64_t function_300d00(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar3 = 0x40;
  lVar2 = 0x40;
  lVar1 = param_1;
  do {
    SystemFunction_000180074f10(lVar1);
    lVar1 = lVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x820;
  do {
    SystemFunction_000180074f10(lVar1);
    lVar1 = lVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int8_t *)(param_1 + 0x1040) = 0;
  *(uint64_t *)(param_1 + 0x810) = 0;
  return param_1;
}
// 函数: void function_300e10(int64_t param_1,char param_2)
void function_300e10(int64_t param_1,char param_2)
{
  char *pcVar1;
  uint64_t uVar2;
  char *pcVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  pcVar1 = *(char **)(param_1 + 0xb0);
  iVar6 = 0;
  pcVar3 = pcVar1;
  if (*(char **)(param_1 + 0xb8) != pcVar1) {
    while (*pcVar3 != param_2) {
      iVar6 = iVar6 + 1;
      pcVar3 = pcVar3 + 1;
      if ((uint64_t)((int64_t)*(char **)(param_1 + 0xb8) - (int64_t)pcVar1) <=
          (uint64_t)(int64_t)iVar6) {
        return;
      }
    }
    uVar2 = *(uint64_t *)(param_1 + 0xb8);
    uVar4 = memchr(pcVar1,param_2,uVar2 - (int64_t)pcVar1);
    uVar5 = uVar2;
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5 + 1;
    if (uVar4 < uVar2) {
// WARNING: Subroutine does not return
      memmove(uVar5,uVar4,uVar2 - uVar4);
    }
    *(uint64_t *)(param_1 + 0xb8) = uVar2 - 1;
  }
  return;
}
// 函数: void function_300e4a(void)
void function_300e4a(void)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  uVar1 = *(uint64_t *)(unaff_RDI + 0xb8);
  uVar2 = memchr();
  uVar3 = uVar1;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 + 1;
  if (uVar2 < uVar1) {
// WARNING: Subroutine does not return
    memmove(uVar3,uVar2,uVar1 - uVar2);
  }
  *(uint64_t *)(unaff_RDI + 0xb8) = uVar1 - 1;
  return;
}
// 函数: void function_300e9c(void)
void function_300e9c(void)
{
  return;
}
// 函数: void function_300eb0(int64_t param_1,char param_2)
void function_300eb0(int64_t param_1,char param_2)
{
  char *pcVar1;
  int iVar2;
  uint64_t uVar3;
  char acStackX_10 [24];
  iVar2 = 0;
  pcVar1 = *(char **)(param_1 + 0xb0);
  uVar3 = (int64_t)*(char **)(param_1 + 0xb8) - (int64_t)pcVar1;
  if (*(char **)(param_1 + 0xb8) != pcVar1) {
    do {
      if (*pcVar1 == param_2) {
        return;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while ((uint64_t)(int64_t)iVar2 < uVar3);
  }
  acStackX_10[0] = param_2;
  Memory_Allocator((uint64_t *)(param_1 + 0xb0),acStackX_10);
  return;
}
uint64_t *
function_300f20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &memory_allocator_3160_ptr;
  plVar1 = (int64_t *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x19] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x19] + 0x38))();
  }
  SystemCore_SecurityManager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar2);
  }
  return param_1;
}
uint64_t *
function_300fc0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xd;
  strcpy_s(param_2[1],0x80,&rendering_buffer_2672_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_301040(int64_t *param_1)
{
  int iVar1;
  int64_t *plVar2;
  int8_t *puVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  function_244190();
  *param_1 = (int64_t)&rendering_buffer_2864_ptr;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(int32_t *)(param_1 + 0xb7) = 0x44000000;
  *(int32_t *)((int64_t)param_1 + 0x5bc) = 0x44400000;
  *(int32_t *)(param_1 + 0xb8) = 0x44800000;
  *(int32_t *)((int64_t)param_1 + 0x5c4) = 0x44c00000;
  *(int32_t *)((int64_t)param_1 + 0x5cc) = 0xab3abdf1;
  *(int32_t *)((int64_t)param_1 + 0x5d4) = 1;
  *(int32_t *)(param_1 + 0xbb) = 1;
  *(int32_t *)((int64_t)param_1 + 0x5dc) = 1;
  param_1[0xbc] = 1;
  *(int8_t *)(param_1 + 0xb9) = 0;
  plVar2 = (int64_t *)param_1[0xae];
  param_1[0xae] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (int64_t *)param_1[0xaf];
  param_1[0xaf] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(int32_t *)(param_1 + 0xba) = 2;
  param_1[0xb1] = 0;
  *(int32_t *)(param_1 + 0xb6) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x5b4) = 0x3f800000;
  *(int32_t *)(param_1 + 0xb0) = 0x400;
  iVar6 = 0;
  *(int32_t *)((int64_t)param_1 + 0x56c) = 0;
  lVar7 = SYSTEM_STATE_MANAGER;
  iVar1 = *(int *)(SYSTEM_STATE_MANAGER + 0xc40);
  iVar5 = iVar6;
  if ((-1 < iVar1) && (iVar5 = iVar1, 2 < iVar1)) {
    iVar5 = 2;
  }
  *(int *)(param_1 + 0xac) = iVar5;
  iVar1 = *(int *)(lVar7 + 0xcb0);
  iVar5 = iVar6;
  if ((-1 < iVar1) && (iVar5 = iVar1, 3 < iVar1)) {
    iVar5 = 3;
  }
  *(int *)((int64_t)param_1 + 0x564) = iVar5;
  iVar1 = *(int *)(lVar7 + 0xd20);
  if ((-1 < iVar1) && (iVar6 = iVar1, 2 < iVar1)) {
    iVar6 = 2;
  }
  *(int *)(param_1 + 0xad) = iVar6;
  *(int16_t *)(param_1 + 0xc2) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  DataStructureManager(param_1 + 0xce,8,2,&SUB_18005d5f0,DataCacheManager);
  param_1[0xda] = 0;
  function_094c20(param_1 + 0xdc);
  param_1[0x106] = (int64_t)&system_state_ptr;
  param_1[0x107] = 0;
  *(int32_t *)(param_1 + 0x108) = 0;
  param_1[0x106] = (int64_t)&system_data_buffer_ptr;
  param_1[0x109] = 0;
  param_1[0x107] = 0;
  *(int32_t *)(param_1 + 0x108) = 0;
  plVar2 = param_1 + 0x10b;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0x10c] = 0;
  *(int32_t *)(param_1 + 0x10d) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x10e] = 0;
  param_1[0x10c] = 0;
  *(int32_t *)(param_1 + 0x10d) = 0;
  puVar3 = *(int8_t **)(system_parameter_buffer + 0x7ab8);
  if (puVar3 != (int8_t *)0x0) {
    *puVar3 = 1;
  }
  lVar7 = 0x3ff0000000000000;
  lVar8 = 0x3ff0000000000000;
  if ((puVar3[0xd9] != '\0') && (iVar1 = *(int *)(SYSTEM_STATE_MANAGER + 0x540), iVar1 - 1U < 4)) {
    lVar7 = *(int64_t *)(puVar3 + (int64_t)iVar1 * 0x10 + -8);
    lVar8 = *(int64_t *)(puVar3 + (int64_t)iVar1 * 0x10);
  }
  param_1[0xa4] = lVar7;
  param_1[0xa5] = lVar8;
  plVar4 = (int64_t *)param_1[0xda];
  param_1[0xda] = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x1e) = 0;
  *(int8_t *)(param_1 + 0x105) = 1;
  plVar4 = (int64_t *)param_1[0xcb];
  param_1[0xcb] = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = (int64_t *)param_1[0xca];
  param_1[0xca] = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x104) = 0;
  *(int8_t *)((int64_t)param_1 + 0xdc) = 1;
  *(int32_t *)((int64_t)param_1 + 0x829) = 0;
  *(int32_t *)((int64_t)param_1 + 0xfc) = 5;
  *(int32_t *)(param_1 + 0x1f) = 5;
  *(int32_t *)((int64_t)param_1 + 0x824) = 0x1000101;
  *(int32_t *)(param_1 + 0x1a) = 0xff000000;
  *(int32_t *)(param_1 + 0xc5) = 0xffffffff;
  *(int16_t *)(param_1 + 0xd8) = 0x100;
  *(int32_t *)(param_1 + 0x10a) = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  *(int8_t *)(param_1 + 0x20) = 1;
  *(int8_t *)((int64_t)param_1 + 0x10c) = 1;
  plVar4 = (int64_t *)param_1[0xcc];
  param_1[0xcc] = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_data_b1c0);
  *(int8_t *)(param_1 + 0x10f) = 0;
  param_1[0xa3] = 0;
  *(int32_t *)((int64_t)param_1 + 0xf4) = 0x3f800000;
  param_1[0xd9] = 0;
  *(int8_t *)((int64_t)param_1 + 0x81) = 0;
  param_1[0xc] = param_1[0xb];
  if ((*(float *)(param_1 + 0xb) != 1.0) || (*(float *)((int64_t)param_1 + 0x5c) != 1.0)) {
    param_1[0xb] = 0x3f8000003f800000;
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  *(int32_t *)((int64_t)param_1 + 0x87c) = 0;
  *(int8_t *)((int64_t)param_1 + 0x10d) = 0;
  return param_1;
}
uint64_t function_3014b0(uint64_t param_1,uint64_t param_2)
{
  function_303590();
  if ((param_2 & 1) != 0) {
    free(param_1,0x880);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3014f0(int64_t param_1)
void function_3014f0(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  byte bVar7;
  bool bVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  double dVar9;
  double dVar10;
  if (*(char *)(param_1 + 0x10b) != '\0') {
    plVar1 = (int64_t *)(param_1 + 0x530);
    if ((*plVar1 != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
      lVar6 = Network_DataSerializer(extraout_XMM0_Qa,*plVar1 + 0x18,*(int32_t *)(*plVar1 + 0x94));
      *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
      *(int32_t *)(lVar6 + 0x40) = 0x40000000;
      SystemCore_PointerManager(plVar1,lVar6);
    }
    if ((*(int64_t *)(param_1 + 0x538) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
      lVar6 = Network_DataSerializer(extraout_XMM0_Qa_00,*(int64_t *)(param_1 + 0x538) + 0x18,
                            *(int32_t *)(*(int64_t *)(param_1 + 0x538) + 0x94));
      *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
      *(int32_t *)(lVar6 + 0x40) = 0x40000000;
      SystemCore_PointerManager(param_1 + 0x538,lVar6);
    }
    if ((*(int64_t *)(param_1 + 0x540) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
      lVar6 = Network_DataSerializer(extraout_XMM0_Qa_01,*(int64_t *)(param_1 + 0x540) + 0x18,
                            *(int32_t *)(*(int64_t *)(param_1 + 0x540) + 0x94));
      *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
      *(int32_t *)(lVar6 + 0x40) = 0x40000000;
      SystemCore_PointerManager(param_1 + 0x540,lVar6);
    }
    if ((*(int64_t *)(param_1 + 0x550) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
      lVar6 = Network_DataSerializer(extraout_XMM0_Qa_02,*(int64_t *)(param_1 + 0x550) + 0x18,
                            *(int32_t *)(*(int64_t *)(param_1 + 0x550) + 0x94));
      *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
      *(int32_t *)(lVar6 + 0x40) = 0x40000000;
      SystemCore_PointerManager(param_1 + 0x550,lVar6);
    }
    if ((*(int64_t *)(param_1 + 0x558) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
      lVar6 = Network_DataSerializer(extraout_XMM0_Qa_03,*(int64_t *)(param_1 + 0x558) + 0x18,
                            *(int32_t *)(*(int64_t *)(param_1 + 0x558) + 0x94));
      *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
      *(int32_t *)(lVar6 + 0x40) = 0x40000000;
      SystemCore_PointerManager(param_1 + 0x558,lVar6);
    }
    if ((*(int64_t *)(param_1 + 0x548) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
      lVar6 = Network_DataSerializer(extraout_XMM0_Qa_04,*(int64_t *)(param_1 + 0x548) + 0x18,
                            *(int32_t *)(*(int64_t *)(param_1 + 0x548) + 0x94));
      *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
      *(int32_t *)(lVar6 + 0x40) = 0x40000000;
      SystemCore_PointerManager(param_1 + 0x548,lVar6);
    }
    lVar6 = *plVar1;
    if ((lVar6 != 0) && (lVar3 = *(int64_t *)(lVar6 + 0x48), lVar3 != 0)) {
      lVar4 = *(int64_t *)(param_1 + 0x6d0);
      if ((lVar4 == 0) ||
         (((*(float *)(lVar4 + 0x3f58) == 0.0 && (*(float *)(lVar4 + 0x3f5c) == 0.0)) ||
          (*(char *)(system_parameter_buffer + 0x1504) != '\0')))) {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar8 = false;
      if (((byte)(*(uint *)(lVar6 + 0x10) >> 3) & 1) != bVar7) {
        cVar5 = function_2c98d0(lVar3,lVar6,8,bVar7,0);
        bVar8 = cVar5 != '\0';
      }
      if (((byte)(*(uint *)(*plVar1 + 0x10) >> 0xb) & 1) != *(byte *)(param_1 + 0x10a)) {
        if ((bVar8) ||
           (cVar5 = function_2c98d0(lVar3,*plVar1,0x800,*(byte *)(param_1 + 0x10a),0), cVar5 != '\0'))
        {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
      }
      dVar9 = 1.0;
      dVar10 = 1.0;
      lVar6 = *(int64_t *)(system_parameter_buffer + 0x7ab8);
      if ((*(char *)(lVar6 + 0xd9) != '\0') &&
         (iVar2 = *(int *)(SYSTEM_STATE_MANAGER + 0x540), iVar2 - 1U < 4)) {
        dVar9 = *(double *)(lVar6 + -8 + (int64_t)iVar2 * 0x10);
        dVar10 = *(double *)(lVar6 + (int64_t)iVar2 * 0x10);
      }
      if ((dVar9 != *(double *)(param_1 + 0x520)) || (dVar10 != *(double *)(param_1 + 0x528))) {
        *(double *)(param_1 + 0x520) = dVar9;
        *(double *)(param_1 + 0x528) = dVar10;
        if (!bVar8) {
          function_2c98d0(lVar3,*plVar1,0x80000000,0,1);
        }
      }
      *(int8_t *)(param_1 + 0x10a) = 0;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_301506(int64_t param_1)
void function_301506(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  byte bVar7;
  bool bVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  double dVar9;
  double dVar10;
  plVar1 = (int64_t *)(param_1 + 0x530);
  if ((*plVar1 != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
    lVar6 = Network_DataSerializer(extraout_XMM0_Qa,*plVar1 + 0x18,*(int32_t *)(*plVar1 + 0x94));
    *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
    *(int32_t *)(lVar6 + 0x40) = 0x40000000;
    SystemCore_PointerManager(plVar1,lVar6);
  }
  if ((*(int64_t *)(unaff_RBX + 0x538) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
    lVar6 = Network_DataSerializer(extraout_XMM0_Qa_00,*(int64_t *)(unaff_RBX + 0x538) + 0x18,
                          *(int32_t *)(*(int64_t *)(unaff_RBX + 0x538) + 0x94));
    *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
    *(int32_t *)(lVar6 + 0x40) = 0x40000000;
    SystemCore_PointerManager(unaff_RBX + 0x538,lVar6);
  }
  if ((*(int64_t *)(unaff_RBX + 0x540) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
    lVar6 = Network_DataSerializer(extraout_XMM0_Qa_01,*(int64_t *)(unaff_RBX + 0x540) + 0x18,
                          *(int32_t *)(*(int64_t *)(unaff_RBX + 0x540) + 0x94));
    *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
    *(int32_t *)(lVar6 + 0x40) = 0x40000000;
    SystemCore_PointerManager(unaff_RBX + 0x540,lVar6);
  }
  if ((*(int64_t *)(unaff_RBX + 0x550) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
    lVar6 = Network_DataSerializer(extraout_XMM0_Qa_02,*(int64_t *)(unaff_RBX + 0x550) + 0x18,
                          *(int32_t *)(*(int64_t *)(unaff_RBX + 0x550) + 0x94));
    *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
    *(int32_t *)(lVar6 + 0x40) = 0x40000000;
    SystemCore_PointerManager(unaff_RBX + 0x550,lVar6);
  }
  if ((*(int64_t *)(unaff_RBX + 0x558) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
    lVar6 = Network_DataSerializer(extraout_XMM0_Qa_03,*(int64_t *)(unaff_RBX + 0x558) + 0x18,
                          *(int32_t *)(*(int64_t *)(unaff_RBX + 0x558) + 0x94));
    *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
    *(int32_t *)(lVar6 + 0x40) = 0x40000000;
    SystemCore_PointerManager(unaff_RBX + 0x558,lVar6);
  }
  if ((*(int64_t *)(unaff_RBX + 0x548) != 0) && (cVar5 = function_2c8c60(), cVar5 != '\0')) {
    lVar6 = Network_DataSerializer(extraout_XMM0_Qa_04,*(int64_t *)(unaff_RBX + 0x548) + 0x18,
                          *(int32_t *)(*(int64_t *)(unaff_RBX + 0x548) + 0x94));
    *(int32_t *)(lVar6 + 0x90) = 0x3c888889;
    *(int32_t *)(lVar6 + 0x40) = 0x40000000;
    SystemCore_PointerManager(unaff_RBX + 0x548,lVar6);
  }
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar3 = *(int64_t *)(lVar6 + 0x48);
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(unaff_RBX + 0x6d0);
      if ((lVar4 == 0) ||
         (((*(float *)(lVar4 + 0x3f58) == 0.0 && (*(float *)(lVar4 + 0x3f5c) == 0.0)) ||
          (*(char *)(system_parameter_buffer + 0x1504) != '\0')))) {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar8 = false;
      if (((byte)(*(uint *)(lVar6 + 0x10) >> 3) & 1) != bVar7) {
        cVar5 = function_2c98d0(lVar3,lVar6,8,bVar7,0);
        bVar8 = cVar5 != '\0';
      }
      if (((byte)(*(uint *)(*plVar1 + 0x10) >> 0xb) & 1) != *(byte *)(unaff_RBX + 0x10a)) {
        if ((bVar8) ||
           (cVar5 = function_2c98d0(lVar3,*plVar1,0x800,*(byte *)(unaff_RBX + 0x10a),0), cVar5 != '\0'
           )) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
      }
      dVar9 = 1.0;
      dVar10 = 1.0;
      lVar6 = *(int64_t *)(system_parameter_buffer + 0x7ab8);
      if ((*(char *)(lVar6 + 0xd9) != '\0') &&
         (iVar2 = *(int *)(SYSTEM_STATE_MANAGER + 0x540), iVar2 - 1U < 4)) {
        dVar9 = *(double *)(lVar6 + -8 + (int64_t)iVar2 * 0x10);
        dVar10 = *(double *)(lVar6 + (int64_t)iVar2 * 0x10);
      }
      if ((dVar9 != *(double *)(unaff_RBX + 0x520)) || (dVar10 != *(double *)(unaff_RBX + 0x528))) {
        *(double *)(unaff_RBX + 0x520) = dVar9;
        *(double *)(unaff_RBX + 0x528) = dVar10;
        if (!bVar8) {
          function_2c98d0(lVar3,*plVar1,0x80000000,0,1);
        }
      }
      *(int8_t *)(unaff_RBX + 0x10a) = 0;
      return;
    }
    return;
  }
  return;
}
// 函数: void function_30181f(void)
void function_30181f(void)
{
  return;
}
uint64_t *
function_301830(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0xf,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_2[1];
  *puVar1 = 0x536c6772;
  puVar1[1] = 0x656e6563;
  puVar1[2] = 0x6569765f;
  puVar1[3] = 0x3a3a77;
  *(int32_t *)(param_2 + 2) = 0xf;
  uVar3 = 1;
  lVar2 = *(int64_t *)(param_1 + 0x6d0);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x4e8))) {
    CoreEngineDataBufferProcessor(param_2,*(int *)(param_2 + 2) + *(int *)(lVar2 + 0x4e8));
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(lVar2 + 0x4e0),
           (int64_t)(*(int *)(lVar2 + 0x4e8) + 1),param_4,uVar3);
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_301910(int64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int64_t lVar6;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int16_t local_var_c8;
  int8_t local_var_c6;
  int32_t local_var_c4;
  int8_t local_var_c0;
  uint64_t local_var_b8;
  int64_t lStack_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  int16_t local_var_78;
  int8_t local_var_76;
  int32_t local_var_74;
  int8_t local_var_70;
  uint64_t local_var_68;
  int64_t lStack_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  if ((char)param_1[0x10f] == '\0') {
    lVar4 = function_302c30();
    param_1[0xa3] = lVar4;
  }
  *(int8_t *)(param_1 + 0x10f) = 0;
  lVar4 = param_1[0xa3];
  lVar6 = 0;
  if ((lVar4 != 0) && (*(int64_t *)(lVar4 + 0x99b8) != 0)) {
    plVar1 = *(int64_t **)(lVar4 + 0x96a0);
    *(uint64_t *)(lVar4 + 0x96a0) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (param_1[0xda] == 0) goto LAB_180301ce4;
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar5 = 0;
  uVar2 = CoreEngineSystemCleanup(puVar5);
  *puVar5 = 0x536c6772;
  puVar5[1] = 0x656e6563;
  puVar5[2] = 0x6569765f;
  puVar5[3] = 0x723a3a77;
  *(uint64_t *)(puVar5 + 4) = 0x3a3a7265646e65;
  lVar4 = param_1[0xda];
  iVar3 = *(int *)(lVar4 + 0x4e8);
  if (0 < iVar3) {
    if ((iVar3 != -0x17) && (uVar2 < iVar3 + 0x18U)) {
      puVar5 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar5,iVar3 + 0x18U,0x10,0x13);
      CoreEngineSystemCleanup(puVar5);
      iVar3 = *(int *)(lVar4 + 0x4e8);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar5 + 0x17),*(uint64_t *)(lVar4 + 0x4e0),
           (int64_t)(iVar3 + 1));
  }
  lVar6 = function_302370(param_1,param_2);
  if ((*(char *)((int64_t)param_1 + 0x827) == '\0') ||
     (((char)param_1[0x104] != '\0' && ((int)param_1[0x1f] < 0)))) {
    if (*(char *)((int64_t)param_1 + 0x829) == '\0') {
      *(int16_t *)(param_1 + 0x104) = 0x101;
      *(int8_t *)(param_1[0xda] + 0x60b90) = 1;
      *(int8_t *)(param_1[0xda] + 0x60b91) = 1;
    }
    else {
      *(int8_t *)((int64_t)param_1 + 0xdd) = 0;
      (**(code **)(*param_1 + 0xc0))(param_1);
      function_304100(param_1,1,1);
    }
  }
  else {
    local_var_d8 = 0;
    local_var_d0 = 0;
    local_var_cc = 0xffffffff;
    local_var_c6 = 0;
    local_var_c4 = 0xffffffff;
    local_var_c0 = 1;
    local_var_b8 = 0;
    lStack_b0 = 0;
    local_var_a8 = 0;
    local_var_a0 = 0;
    local_var_98 = 3;
    local_var_90 = 0;
    local_var_c8 = 0;
    if ((*(int *)(param_1[0xda] + 0x27c0) == 1) &&
       (iVar3 = function_1a3620(param_1[0xda],&local_var_d8), iVar3 != 0)) {
      *(int *)(param_1 + 0x10a) = (int)param_1[0x10a] + 1;
      if (100 < (int)param_1[0x10a]) {
        local_var_88 = 0;
        local_var_80 = 0;
        local_var_7c = 0xffffffff;
        local_var_78 = 1;
        local_var_76 = 0;
        local_var_74 = 0xffffffff;
        local_var_70 = 1;
        local_var_68 = 0;
        lStack_60 = 0;
        local_var_58 = 0;
        local_var_50 = 0;
        local_var_48 = 3;
        local_var_40 = 0;
        function_1a3620(param_1[0xda],&local_var_88);
        *(int32_t *)(param_1 + 0x10a) = 0;
        if (lStack_60 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
LAB_180301bf4:
      if (*(int *)((int64_t)param_1 + 0xfc) != (int)param_1[0x1f]) goto LAB_180301c02;
    }
    else {
      *(int8_t *)((int64_t)param_1 + 0x821) = 1;
      *(int8_t *)(param_1[0xda] + 0x60b91) = 1;
      if ((*(int *)(param_1[0xda] + 0x27c0) < 7) ||
         ((*(int *)(lVar6 + 0x124e8) != 0 || (*(int *)(lVar6 + 0x124ec) != 0)))) goto LAB_180301bf4;
LAB_180301c02:
      if ((int)param_1[0x1f] == 0) {
        *(int8_t *)(system_operation_state + 0x15f8) = 0;
      }
      else {
        *(int16_t *)(param_1 + 0x104) = 0x101;
        *(int8_t *)(param_1[0xda] + 0x60b90) = 1;
        *(int8_t *)(param_1[0xda] + 0x60b91) = 1;
      }
      *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + -1;
    }
    if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if (puVar5 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar5);
  }
LAB_180301ce4:
  param_1[0xa3] = 0;
  return lVar6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address