#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part166_sub002.c - 1 个函数

// 函数: void FUN_18015036a(void)
void FUN_18015036a(void)

{
  return;
}



float * FUN_1801503e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *param_2 = fVar1;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar4;
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  *param_2 = fVar1 * fVar4;
  param_2[1] = fVar2 * fVar4;
  param_2[2] = fVar3 * fVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




