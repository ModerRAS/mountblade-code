/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "SystemDataAdvancedValidator_definition.h"
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part030.c - 12 个函数
// 函数: void UISystem_fd600(int64_t *param_1)
void UISystem_fd600(int64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0x17c;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)puVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UISystem_fd670(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  plVar3 = *(int64_t **)(lVar1 + uVar2 * 8);
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[3];
    } while (plVar3 != (int64_t *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x20,*(int8_t *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  plVar3[1] = 0;
  *(int32_t *)(plVar3 + 2) = 0;
  plVar3[3] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
  }
  plVar3[3] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_fd6cb(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_fd6cb(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint local_buffer_84;
  RenderingShaderProcessor0(param_1,&local_buffer_00000080,param_3,param_4,1);
  puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x20,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  *(int32_t *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)local_buffer_84 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)local_buffer_84 * 8);
  }
  puVar2[3] = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(uint64_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void UISystem_fd7ce(uint64_t param_1,uint64_t param_2)
void UISystem_fd7ce(uint64_t param_1,uint64_t param_2)
{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}
// 函数: void UISystem_fd7ea(uint64_t param_1)
void UISystem_fd7ea(uint64_t param_1)
{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x18) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void UISystem_fd810(void)
void UISystem_fd810(void)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  *(uint64_t *)(unaff_R12 + 0x18) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void UISystem_fd860(int64_t *param_1)
void UISystem_fd860(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x70) {
    NetworkSystem_02300(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// 函数: void UISystem_fd8c0(int64_t *param_1)
void UISystem_fd8c0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
    if (*(int64_t **)(lVar2 + 0x68) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x68) + 0x38))();
    }
    DataTransformer0();
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// 函数: void UISystem_fd940(float *param_1,float *param_2,float *param_3,float param_4,int64_t *param_5)
void UISystem_fd940(float *param_1,float *param_2,float *param_3,float param_4,int64_t *param_5)
{
  uint64_t uVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  plVar6 = param_5;
  uVar4 = 0;
  *param_5 = 0;
  param_5[4] = *(int64_t *)param_2;
  lVar5 = *(int64_t *)param_3;
  *(float *)(param_5 + 6) = param_4 * param_4;
  param_5[5] = lVar5;
  fVar7 = *param_2 + param_4;
  fVar10 = *param_3 - param_4;
  fVar8 = *param_2 - param_4;
  fVar12 = param_3[1] - param_4;
  fVar9 = *param_3 + param_4;
  fVar11 = param_3[1] + param_4;
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  if (fVar9 <= fVar7) {
    fVar9 = fVar7;
  }
  fVar7 = param_2[1] + param_4;
  param_4 = param_2[1] - param_4;
  if (fVar11 <= fVar7) {
    fVar11 = fVar7;
  }
  if (param_4 <= fVar12) {
    fVar12 = param_4;
  }
  fVar10 = (fVar10 - *param_1) * param_1[5];
  if (fVar10 <= 0.0) {
    fVar10 = fVar10 - 0.9999999;
  }
  fVar12 = param_1[5] * (fVar12 - param_1[1]);
  param_5._0_4_ = (uint)fVar10;
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  param_5._4_4_ = (int)fVar12;
  if ((int)(uint)param_5 < 0) {
    param_5._0_4_ = 0;
  }
  else {
    if ((int)((int)param_1[2] - 1U) < (int)(uint)param_5) {
      param_5._0_4_ = (int)param_1[2] - 1U;
    }
    uVar4 = (uint64_t)(uint)param_5;
  }
  if (param_5._4_4_ < 0) {
    param_5._4_4_ = 0;
  }
  else if ((int)param_1[3] + -1 < param_5._4_4_) {
    param_5._4_4_ = (int)param_1[3] + -1;
  }
  iVar3 = param_5._4_4_;
  uVar1 = CONCAT44(param_5._4_4_,(uint)param_5);
  plVar6[2] = uVar1;
  fVar9 = (fVar9 - *param_1) * param_1[5];
  if (fVar9 <= 0.0) {
    fVar9 = fVar9 - 0.9999999;
  }
  fVar10 = param_1[5] * (fVar11 - param_1[1]);
  param_5._0_4_ = (uint)fVar9;
  if (fVar10 <= 0.0) {
    fVar10 = fVar10 - 0.9999999;
  }
  param_5._4_4_ = (int)fVar10;
  if ((int)(uint)param_5 < 0) {
    param_5._0_4_ = 0;
  }
  else if ((int)param_1[2] + -1 < (int)(uint)param_5) {
    param_5._0_4_ = (int)param_1[2] + -1;
  }
  if (param_5._4_4_ < 0) {
    param_5._4_4_ = 0;
  }
  else if ((int)param_1[3] + -1 < param_5._4_4_) {
    param_5._4_4_ = (int)param_1[3] + -1;
  }
  plVar6[3] = CONCAT44(param_5._4_4_,(uint)param_5);
  plVar6[1] = uVar1;
  lVar5 = *(int64_t *)
           ((int64_t)(iVar3 * (int)param_1[2] + (int)uVar4) * 9 + *(int64_t *)(param_1 + 6));
  *plVar6 = lVar5;
  if (lVar5 == 0) {
    lVar5 = 0;
    do {
      if ((int)uVar4 == (int)plVar6[3]) {
        iVar3 = (int)(uVar1 >> 0x20);
        if (iVar3 == *(int *)((int64_t)plVar6 + 0x1c)) break;
        *(int *)((int64_t)plVar6 + 0xc) = iVar3 + 1;
        iVar3 = (int)plVar6[2];
      }
      else {
        iVar3 = (int)uVar4 + 1;
      }
      *(int *)(plVar6 + 1) = iVar3;
      uVar4 = plVar6[1];
      lVar5 = *(int64_t *)
               ((int64_t)((int)(uVar4 >> 0x20) * (int)param_1[2] + (int)uVar4) * 9 +
               *(int64_t *)(param_1 + 6));
      if (lVar5 == 0) {
        lVar5 = *plVar6;
      }
      else {
        *plVar6 = lVar5;
      }
      uVar1 = uVar4;
    } while (lVar5 == 0);
    if (lVar5 == 0) {
      return;
    }
  }
  cVar2 = NetworkSystem_001c0(plVar6);
  if (cVar2 == '\0') {
    UISystem_fdb70(param_1,plVar6);
  }
  return;
}
uint64_t UISystem_fdb70(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  bool bVar5;
  cVar2 = NetworkSystem_00b50();
  if (cVar2 != '\0') {
    do {
      cVar2 = NetworkSystem_001c0(param_2);
      if (cVar2 != '\0') {
        return 1;
      }
      lVar1 = *(int64_t *)(*param_2 + 0x18);
      bVar5 = lVar1 != 0;
      *param_2 = lVar1;
      if (lVar1 == 0) {
        uVar4 = (uint64_t)*(uint *)(param_2 + 1);
        do {
          if ((int)uVar4 == (int)param_2[3]) {
            if (*(int *)((int64_t)param_2 + 0xc) == *(int *)((int64_t)param_2 + 0x1c)) break;
            *(int *)((int64_t)param_2 + 0xc) = *(int *)((int64_t)param_2 + 0xc) + 1;
            iVar3 = (int)param_2[2];
          }
          else {
            iVar3 = (int)uVar4 + 1;
          }
          *(int *)(param_2 + 1) = iVar3;
          uVar4 = param_2[1];
          lVar1 = *(int64_t *)
                   ((int64_t)((int)(uVar4 >> 0x20) * *(int *)(param_1 + 8) + (int)uVar4) * 9 +
                   *(int64_t *)(param_1 + 0x18));
          bVar5 = lVar1 != 0;
          *param_2 = lVar1;
        } while (lVar1 == 0);
      }
    } while (bVar5);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_fdc10(int64_t param_1,float *param_2,uint64_t param_3)
void UISystem_fdc10(int64_t param_1,float *param_2,uint64_t param_3)
{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  char cVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t stack_array_358 [32];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  int32_t local_var_32c;
  int32_t local_var_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  int32_t local_var_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  int32_t local_var_2fc;
  int32_t local_var_2ec;
  int32_t local_var_2dc;
  int32_t local_var_2cc;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  int32_t local_var_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t local_var_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t local_var_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t local_var_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int32_t local_var_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t local_var_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int32_t local_var_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t local_var_1cc;
  uint local_var_1c8;
  uint local_var_1c4;
  uint local_var_1c0;
  uint local_var_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  uint local_var_1ac;
  uint local_var_1a8;
  uint local_var_1a4;
  uint local_var_1a0;
  uint local_var_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint local_var_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t local_var_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t local_var_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t local_var_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t local_var_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t local_var_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t local_var_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint local_var_11c;
  uint local_var_118;
  uint local_var_114;
  uint local_var_110;
  uint local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  uint local_var_f8;
  uint local_var_f4;
  uint local_var_f0;
  uint local_var_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint local_var_dc;
  uint64_t local_var_d8;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_358;
  fStack_2a8 = param_2[8];
  local_var_2c8 = *(uint64_t *)param_2;
  local_var_2c0 = *(uint64_t *)(param_2 + 2);
  fStack_2b8 = param_2[4];
  fStack_2b4 = param_2[5];
  fStack_2b0 = param_2[6];
  fStack_2ac = param_2[7];
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  pfVar5 = *(float **)(*(int64_t *)(param_1 + 0x6d8) + 0x860);
  puVar3 = *(uint **)(*(int64_t *)(param_1 + 0x658) + 0x18);
  do {
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_var_1c8 = puVar3[1];
  local_var_1c4 = puVar3[2];
  local_var_1c0 = puVar3[3];
  local_var_1bc = puVar3[4];
  fVar12 = (float)puVar3[5];
  fVar10 = (float)puVar3[6];
  fVar9 = (float)puVar3[7];
  uVar1 = puVar3[8];
  *puVar3 = 0;
  fStack_1b8 = fVar12;
  fStack_1b4 = fVar10;
  fStack_1b0 = fVar9;
  local_var_1ac = uVar1;
  local_var_118 = local_var_1c8;
  local_var_114 = local_var_1c4;
  local_var_110 = local_var_1c0;
  local_var_10c = local_var_1bc;
  fStack_108 = fVar12;
  fStack_104 = fVar10;
  fStack_100 = fVar9;
  local_var_fc = uVar1;
  SystemSecurityManager(&fStack_188,&local_var_1c8);
  local_var_31c = 0x7f7fffff;
  fVar7 = *(float *)(lVar2 + 0x70);
  fVar6 = *(float *)(lVar2 + 0x80);
  fVar11 = *(float *)(lVar2 + 0x74);
  fVar8 = *(float *)(lVar2 + 0x84);
  fStack_310 = *(float *)(lVar2 + 0x98);
  fStack_138 = fStack_168;
  fStack_134 = fStack_164;
  fStack_130 = fStack_160;
  local_var_12c = local_var_15c;
  fStack_218 = fVar10 * fVar6 + fVar7 * fVar12 + *(float *)(lVar2 + 0xa0);
  fStack_210 = fStack_310 * fVar9 + *(float *)(lVar2 + 0xa8);
  fStack_148 = fStack_178;
  fStack_144 = fStack_174;
  fStack_140 = fStack_170;
  local_var_13c = local_var_16c;
  fStack_214 = fVar10 * fVar8 + fVar11 * fVar12 + *(float *)(lVar2 + 0xa4);
  fStack_158 = fStack_188;
  fStack_154 = fStack_184;
  fStack_150 = fStack_180;
  local_var_14c = local_var_17c;
  local_var_20c = 0x7f7fffff;
  fStack_330 = fStack_310 * fStack_160;
  fStack_338 = fVar7 * fStack_168 + fVar6 * fStack_164;
  fStack_334 = fVar11 * fStack_168 + fVar8 * fStack_164;
  fStack_300 = fStack_310 * fStack_170;
  fStack_308 = fVar7 * fStack_178 + fVar6 * fStack_174;
  fStack_304 = fVar11 * fStack_178 + fVar8 * fStack_174;
  fStack_318 = fVar7 * fStack_188 + fVar6 * fStack_184;
  fStack_314 = fVar11 * fStack_188 + fVar8 * fStack_184;
  local_var_2fc = 0x7f7fffff;
  local_var_22c = 0x7f7fffff;
  fStack_310 = fStack_310 * fStack_180;
  local_var_32c = 0x7f7fffff;
  local_var_21c = 0x7f7fffff;
  local_var_30c = 0x7f7fffff;
  local_var_23c = 0x7f7fffff;
  fStack_248 = fStack_318;
  fStack_244 = fStack_314;
  fStack_240 = fStack_310;
  fStack_238 = fStack_308;
  fStack_234 = fStack_304;
  fStack_230 = fStack_300;
  fStack_228 = fStack_338;
  fStack_224 = fStack_334;
  fStack_220 = fStack_330;
  fStack_128 = fVar12;
  fStack_124 = fVar10;
  fStack_120 = fVar9;
  local_var_11c = uVar1;
  fVar6 = (float)Function_b601fd69(&fStack_248,0x3f800000);
  NetworkSystem_067a0(&local_var_2c8,&fStack_248);
  fVar7 = (float)local_var_2c8;
  if ((float)local_var_2c8 <= fStack_2b8) {
    fVar7 = fStack_2b8;
  }
  fVar11 = (float)local_var_2c8;
  if (fStack_2b8 <= (float)local_var_2c8) {
    fVar11 = fStack_2b8;
  }
  fStack_2a8 = param_2[8] / fVar6;
  fVar6 = local_var_2c8._4_4_;
  if (fStack_2b4 <= local_var_2c8._4_4_) {
    fVar6 = fStack_2b4;
  }
  fVar8 = local_var_2c8._4_4_;
  if (local_var_2c8._4_4_ <= fStack_2b4) {
    fVar8 = fStack_2b4;
  }
  fVar12 = (float)local_var_2c0;
  if (fStack_2b0 <= (float)local_var_2c0) {
    fVar12 = fStack_2b0;
  }
  fVar10 = (float)local_var_2c0;
  if ((float)local_var_2c0 <= fStack_2b0) {
    fVar10 = fStack_2b0;
  }
  if ((((*pfVar5 <= fVar7 + fStack_2a8) &&
       (fVar11 - fStack_2a8 < pfVar5[4] || fVar11 - fStack_2a8 == pfVar5[4])) &&
      (pfVar5[1] <= fVar8 + fStack_2a8)) &&
     (((fVar6 - fStack_2a8 < pfVar5[5] || fVar6 - fStack_2a8 == pfVar5[5] &&
       (pfVar5[2] <= fVar10 + fStack_2a8)) &&
      ((fVar12 - fStack_2a8 < pfVar5[6] || fVar12 - fStack_2a8 == pfVar5[6] &&
       (cVar4 = UtilitiesSystem_3ecd0(param_3,pfVar5,&fStack_248), cVar4 != '\0')))))) {
    NetworkSystem_0aea0(param_1);
    puVar3 = *(uint **)(*(int64_t *)(param_1 + 0x658) + 0x18);
    do {
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    local_var_1a8 = puVar3[1];
    local_var_1a4 = puVar3[2];
    local_var_1a0 = puVar3[3];
    local_var_19c = puVar3[4];
    fVar12 = (float)puVar3[5];
    fVar10 = (float)puVar3[6];
    fVar9 = (float)puVar3[7];
    local_var_18c = puVar3[8];
    *puVar3 = 0;
    fStack_198 = fVar12;
    fStack_194 = fVar10;
    fStack_190 = fVar9;
    local_var_f8 = local_var_1a8;
    local_var_f4 = local_var_1a4;
    local_var_f0 = local_var_1a0;
    local_var_ec = local_var_19c;
    fStack_e8 = fVar12;
    fStack_e4 = fVar10;
    fStack_e0 = fVar9;
    local_var_dc = local_var_18c;
    SystemSecurityManager(&fStack_278,&local_var_1a8);
    fVar7 = *(float *)(lVar2 + 0x80);
    fVar6 = *(float *)(lVar2 + 0x70);
    fVar11 = *(float *)(lVar2 + 0x84);
    fVar8 = *(float *)(lVar2 + 0x74);
    fStack_1f0 = *(float *)(lVar2 + 0x98);
    local_var_32c = 0x7f7fffff;
    local_var_2ec = 0x7f7fffff;
    local_var_2dc = 0x7f7fffff;
    local_var_2cc = 0x7f7fffff;
    fStack_1d8 = fVar6 * fVar12 + fVar7 * fVar10 + *(float *)(lVar2 + 0xa0);
    fStack_1e0 = fStack_1f0 * fStack_250;
    fStack_1d0 = fStack_1f0 * fVar9 + *(float *)(lVar2 + 0xa8);
    fStack_1d4 = fVar8 * fVar12 + fVar11 * fVar10 + *(float *)(lVar2 + 0xa4);
    fStack_200 = fStack_1f0 * fStack_270;
    fStack_1f0 = fStack_1f0 * fStack_260;
    local_var_1cc = 0x7f7fffff;
    fStack_1e8 = fVar6 * fStack_258 + fVar7 * fStack_254;
    fStack_1e4 = fVar8 * fStack_258 + fVar11 * fStack_254;
    fStack_1f8 = fVar6 * fStack_268 + fVar7 * fStack_264;
    fStack_208 = fVar6 * fStack_278 + fVar7 * fStack_274;
    fStack_204 = fVar8 * fStack_278 + fVar11 * fStack_274;
    fStack_1f4 = fVar8 * fStack_268 + fVar11 * fStack_264;
    fStack_280 = param_2[8];
    local_var_1fc = 0x7f7fffff;
    local_var_1dc = 0x7f7fffff;
    fStack_2a0 = *param_2;
    fStack_29c = param_2[1];
    fStack_298 = param_2[2];
    fStack_294 = param_2[3];
    local_var_1ec = 0x7f7fffff;
    fStack_290 = param_2[4];
    fStack_28c = param_2[5];
    fStack_288 = param_2[6];
    fStack_284 = param_2[7];
    NetworkSystem_067a0(&fStack_2a0,&fStack_208);
    fVar6 = (float)Function_b601fd69(&fStack_208,0x3f800000);
    fVar7 = fStack_2a0;
    if (fStack_2a0 <= fStack_290) {
      fVar7 = fStack_290;
    }
    lVar2 = *(int64_t *)(param_1 + 0x6d8);
    fVar11 = fStack_2a0;
    if (fStack_290 <= fStack_2a0) {
      fVar11 = fStack_290;
    }
    fVar8 = fStack_29c;
    if (fStack_28c <= fStack_29c) {
      fVar8 = fStack_28c;
    }
    fVar12 = fStack_298;
    if (fStack_288 <= fStack_298) {
      fVar12 = fStack_288;
    }
    fVar10 = fStack_29c;
    if (fStack_29c <= fStack_28c) {
      fVar10 = fStack_28c;
    }
    fVar9 = fStack_298;
    if (fStack_298 <= fStack_288) {
      fVar9 = fStack_288;
    }
    fVar6 = param_2[8] / fVar6;
    if (((*(float *)(lVar2 + 0x870) <= fVar7 + fVar6) &&
        (fVar11 - fVar6 < *(float *)(lVar2 + 0x880) || fVar11 - fVar6 == *(float *)(lVar2 + 0x880)))
       && ((*(float *)(lVar2 + 0x874) <= fVar10 + fVar6 &&
           (((fVar8 - fVar6 < *(float *)(lVar2 + 0x884) ||
              fVar8 - fVar6 == *(float *)(lVar2 + 0x884) &&
             (*(float *)(lVar2 + 0x878) <= fVar9 + fVar6)) &&
            (fVar12 - fVar6 < *(float *)(lVar2 + 0x888) ||
             fVar12 - fVar6 == *(float *)(lVar2 + 0x888))))))) {
      UtilitiesSystem_3ecd0(param_3,(float *)(lVar2 + 0x870),&fStack_208);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_358);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_fe350(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void UISystem_fe350(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int8_t stack_array_168 [32];
  void *plocal_var_148;
  void *plocal_var_140;
  void *plocal_var_138;
  int64_t lStack_130;
  int32_t local_var_120;
  uint64_t *plocal_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  int8_t *plocal_var_f0;
  int64_t alStack_e8 [8];
  void *plocal_var_a8;
  int8_t stack_array_90 [88];
  uint64_t local_var_38;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  UtilitiesSystem_37560(alStack_e8);
  plVar3 = (int64_t *)(**(code **)(alStack_e8[0] + 0x70))(alStack_e8,param_1);
  if (param_2 == '\0') {
    (**(code **)(*plVar3 + 0x70))(plVar3,&processed_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&system_data_c8e4);
    CoreMemoryPoolValidator(&plocal_var_138,param_3);
    plocal_var_118 = (uint64_t *)0x0;
    plocal_var_110 = (uint64_t *)0x0;
    local_var_108 = 0;
    local_var_100 = 3;
    if (lStack_130 != 0) {
      CoreSystem_DataCollector(&plocal_var_138,&plocal_var_118,&system_data_d518);
    }
    NetworkSystem_00bd0(alStack_e8,&plocal_var_118,0,param_4);
    puVar2 = plocal_var_110;
    puVar1 = plocal_var_118;
    for (puVar4 = plocal_var_118; puVar4 != puVar2; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    if (puVar1 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar1);
    }
    plocal_var_138 = &system_data_buffer_ptr;
    if (lStack_130 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_130 = 0;
    local_var_120 = 0;
    plocal_var_138 = &system_state_ptr;
  }
  plocal_var_140 = &system_buffer_ptr;
  if (plocal_var_a8 != (void *)0x0) {
    plocal_var_140 = plocal_var_a8;
  }
  plocal_var_148 = &processed_var_5184_ptr;
  SystemConfigurationManager(system_message_context,0,0x40000000000,0xc);
  plocal_var_f0 = stack_array_90;
  _Mtx_destroy_in_situ(stack_array_90);
  NetworkSystem_065c0(alStack_e8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_fe500(uint64_t param_1,char param_2,uint64_t param_3,int32_t *param_4,
void UISystem_fe500(uint64_t param_1,char param_2,uint64_t param_3,int32_t *param_4,
                  uint64_t param_5)
{
  code *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int8_t stack_array_198 [32];
  void *plocal_var_178;
  void *plocal_var_170;
  int32_t local_var_168;
  void *plocal_var_160;
  int64_t lStack_158;
  int32_t local_var_148;
  void *plocal_var_140;
  int64_t lStack_138;
  int32_t local_var_128;
  uint64_t *plocal_var_120;
  uint64_t *plocal_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  int8_t *plocal_var_f8;
  int64_t alStack_e8 [8];
  void *plocal_var_a8;
  int8_t stack_array_90 [88];
  uint64_t local_var_38;
  local_var_100 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  local_var_168 = 0;
  UtilitiesSystem_37560(alStack_e8);
  plVar5 = (int64_t *)(**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&processed_var_4232_ptr);
  if (param_2 == '\0') {
    (**(code **)(*plVar5 + 0x70))(plVar5,&processed_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar5 + 0x70))(plVar5,&system_data_c8e4);
    CoreMemoryPoolValidator(&plocal_var_160,&memory_allocator_3832_ptr);
    plocal_var_120 = (uint64_t *)0x0;
    plocal_var_118 = (uint64_t *)0x0;
    local_var_110 = 0;
    local_var_108 = 3;
    if (lStack_158 != 0) {
      CoreSystem_DataCollector(&plocal_var_160,&plocal_var_120,&system_data_d518);
    }
    puVar3 = plocal_var_120;
    pcVar1 = *(code **)(alStack_e8[0] + 0x78);
    uVar6 = SystemCore_NetworkHandler0(&plocal_var_140,plocal_var_120);
    local_var_168 = 1;
    UtilitiesSystem_28a40(&plocal_var_140);
    plVar5 = (int64_t *)(*pcVar1)(alStack_e8,uVar6);
    plVar5 = (int64_t *)(**(code **)(*plVar5 + 0x70))(plVar5,&ui_system_data_1532_ptr);
    (**(code **)(*plVar5 + 0x50))(plVar5,*param_4);
    puVar4 = plocal_var_118;
    local_var_168 = 0;
    plocal_var_140 = &system_data_buffer_ptr;
    if (lStack_138 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_138 = 0;
    local_var_128 = 0;
    plocal_var_140 = &system_state_ptr;
    puVar2 = puVar3;
    if (1 < (uint64_t)((int64_t)plocal_var_118 - (int64_t)puVar3 >> 5)) {
      (**(code **)(alStack_e8[0] + 0x70))(alStack_e8,&system_temp_buffer);
      NetworkSystem_00bd0(alStack_e8,&plocal_var_120,1,param_5);
    }
    for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar3);
    }
    plocal_var_160 = &system_data_buffer_ptr;
    if (lStack_158 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_158 = 0;
    local_var_148 = 0;
    plocal_var_160 = &system_state_ptr;
  }
  plocal_var_170 = &system_buffer_ptr;
  if (plocal_var_a8 != (void *)0x0) {
    plocal_var_170 = plocal_var_a8;
  }
  plocal_var_178 = &processed_var_5184_ptr;
  SystemConfigurationManager(system_message_context,0,0x40000000000,0xc);
  plocal_var_f8 = stack_array_90;
  _Mtx_destroy_in_situ(stack_array_90);
  NetworkSystem_065c0(alStack_e8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_198);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_fe790(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4,
void UISystem_fe790(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int8_t stack_array_168 [32];
  void *plocal_var_148;
  void *plocal_var_140;
  void *plocal_var_138;
  int64_t lStack_130;
  int32_t local_var_120;
  uint64_t *plocal_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  int8_t *plocal_var_f0;
  int64_t alStack_e8 [8];
  void *plocal_var_a8;
  int8_t stack_array_90 [88];
  uint64_t local_var_38;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  UtilitiesSystem_37560(alStack_e8);
  plVar3 = (int64_t *)(**(code **)(alStack_e8[0] + 0x70))(alStack_e8,param_1);
  if (param_2 == '\0') {
    (**(code **)(*plVar3 + 0x70))(plVar3,&processed_var_5104_ptr);
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&system_data_c8e4);
    CoreMemoryPoolValidator(&plocal_var_138,param_3);
    plocal_var_118 = (uint64_t *)0x0;
    plocal_var_110 = (uint64_t *)0x0;
    local_var_108 = 0;
    local_var_100 = 3;
    if (lStack_130 != 0) {
      CoreSystem_DataCollector(&plocal_var_138,&plocal_var_118,&system_data_d518);
    }
    plocal_var_148 = (void *)param_5;
    NetworkSystem_00cf0(alStack_e8,&plocal_var_118,0,param_4);
    puVar2 = plocal_var_110;
    puVar1 = plocal_var_118;
    for (puVar4 = plocal_var_118; puVar4 != puVar2; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    if (puVar1 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar1);
    }
    plocal_var_138 = &system_data_buffer_ptr;
    if (lStack_130 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_130 = 0;
    local_var_120 = 0;
    plocal_var_138 = &system_state_ptr;
  }
  plocal_var_140 = &system_buffer_ptr;
  if (plocal_var_a8 != (void *)0x0) {
    plocal_var_140 = plocal_var_a8;
  }
  plocal_var_148 = &processed_var_5184_ptr;
  SystemConfigurationManager(system_message_context,0,0x40000000000,0xc);
  plocal_var_f0 = stack_array_90;
  _Mtx_destroy_in_situ(stack_array_90);
  NetworkSystem_065c0(alStack_e8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address