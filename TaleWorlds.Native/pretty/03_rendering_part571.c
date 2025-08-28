/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
#include "SystemOutputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part571.c - 9 个函数
// 函数: void NetworkSystem_7d0a7(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void NetworkSystem_7d0a7(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int *param_6,uint64_t param_7,int64_t param_8,
                  int64_t param_9,int *param_10,int64_t param_11,int64_t param_12,
                  int64_t param_13)
{
  uint64_t uVar1;
  int64_t lVar2;
  bool bVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int *piVar10;
  int64_t lVar11;
  uint64_t unaff_RBX;
  int iVar12;
  uint64_t unaff_RBP;
  uint64_t uVar13;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t *puVar14;
  int32_t uVar15;
  int *unaff_R15;
  uint64_t local_var_1c0;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
  uVar15 = SUB84(unaff_R15,0);
  uVar13 = (uint64_t)unaff_R15 & 0xffffffff;
  *(uint64_t *)(in_R11 + -0x10) = unaff_R14;
  puVar14 = (uint64_t *)(in_R11 + -0x168);
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  do {
    lVar9 = param_3;
    iVar12 = (int)uVar13;
    iVar6 = 5;
    if (iVar12 < 5) {
      iVar6 = iVar12;
    }
    if (iVar6 < *(int *)(lVar9 + 8)) {
      bVar3 = 5 < iVar12;
      uVar4 = RenderingSystem_RenderQueue(*(uint64_t *)(unaff_RDI + 0xb0),2,iVar6,0xffffffff,bVar3);
      iVar5 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
      iVar5 = *(int *)(render_system_memory + (int64_t)iVar5 * 4);
      piVar10 = unaff_R15;
      if (iVar5 != -1) {
        piVar10 = *(int **)(render_system_memory + (int64_t)iVar5 * 8);
      }
      uVar1 = *(uint64_t *)(unaff_RDI + 0xb0);
      puVar14[-2] = piVar10;
      uVar4 = RenderingSystem_RenderQueue(uVar1,1,iVar6,0xffffffff,bVar3);
      iVar5 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
      iVar5 = *(int *)(render_system_memory + (int64_t)iVar5 * 4);
      piVar10 = unaff_R15;
      if (iVar5 != -1) {
        piVar10 = *(int **)(render_system_memory + (int64_t)iVar5 * 8);
      }
      uVar1 = *(uint64_t *)(unaff_RDI + 0xb0);
      *puVar14 = piVar10;
      uVar4 = RenderingSystem_RenderQueue(uVar1,0,iVar6,0xffffffff,bVar3);
      iVar5 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
      iVar5 = *(int *)(render_system_memory + (int64_t)iVar5 * 4);
      piVar10 = unaff_R15;
      if (iVar5 != -1) {
        piVar10 = *(int **)(render_system_memory + (int64_t)iVar5 * 8);
      }
      uVar1 = *(uint64_t *)(unaff_RDI + 0xb0);
      puVar14[1] = piVar10;
      uVar4 = RenderingSystem_RenderQueue(uVar1,5,iVar6,0xffffffff,bVar3);
      iVar6 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
      iVar6 = *(int *)(render_system_memory + (int64_t)iVar6 * 4);
      piVar10 = unaff_R15;
      if (iVar6 != -1) {
        piVar10 = *(int **)(render_system_memory + (int64_t)iVar6 * 8);
      }
      lVar9 = *(int64_t *)(unaff_RDI + 0xb0);
      puVar14[-1] = piVar10;
      lVar2 = *(int64_t *)(lVar9 + 0x60);
      for (piVar10 = *(int **)(lVar2 + SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x84)) %
                                              ZEXT416(*(uint *)(lVar9 + 0x68)),0) * 8);
          (piVar7 = unaff_R15, piVar10 != (int *)0x0 && (piVar7 = piVar10, *piVar10 != 0x84));
          piVar10 = *(int **)(piVar10 + 2)) {
      }
      if (piVar7 == (int *)0x0) {
        param_8 = *(int64_t *)(lVar2 + *(int64_t *)(lVar9 + 0x68) * 8);
        plVar8 = &param_8;
        param_9 = lVar2 + *(int64_t *)(lVar9 + 0x68) * 8;
      }
      else {
        param_6 = piVar7;
        plVar8 = (int64_t *)&local_buffer_00000030;
      }
      iVar6 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),
                            *(int32_t *)(*plVar8 + 4));
      iVar6 = *(int *)(render_system_memory + (int64_t)iVar6 * 4);
      piVar10 = unaff_R15;
      if (iVar6 != -1) {
        piVar10 = *(int **)(render_system_memory + (int64_t)iVar6 * 8);
      }
      lVar9 = *(int64_t *)(unaff_RDI + 0xb0);
      puVar14[2] = piVar10;
      lVar2 = *(int64_t *)(lVar9 + 0x60);
      lVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) % ZEXT416(*(uint *)(lVar9 + 0x68)),0);
      for (piVar10 = *(int **)(lVar2 + lVar11 * 8);
          (piVar7 = unaff_R15, piVar10 != (int *)0x0 && (piVar7 = piVar10, *piVar10 != 0x82));
          piVar10 = *(int **)(piVar10 + 2)) {
      }
      if (piVar7 == (int *)0x0) {
        param_12 = *(int64_t *)(lVar2 + *(int64_t *)(lVar9 + 0x68) * 8);
        plVar8 = &param_12;
        param_13 = lVar2 + *(int64_t *)(lVar9 + 0x68) * 8;
      }
      else {
        param_10 = piVar7;
        plVar8 = (int64_t *)&param_10;
        param_11 = lVar2 + lVar11 * 8;
      }
      iVar6 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),
                            *(int32_t *)(*plVar8 + 4));
      iVar6 = *(int *)(render_system_memory + (int64_t)iVar6 * 4);
      if (iVar6 == -1) {
        lVar9 = *(int64_t *)(unaff_RDI + 0x2590);
        puVar14[3] = unaff_R15;
        param_3 = lVar9;
      }
      else {
        lVar9 = *(int64_t *)(unaff_RDI + 0x2590);
        puVar14[3] = *(uint64_t *)(render_system_memory + (int64_t)iVar6 * 8);
        param_3 = lVar9;
      }
    }
    else {
      param_3 = *(int64_t *)(unaff_RDI + 0x2590);
    }
    uVar13 = (uint64_t)(iVar12 + 1U);
    puVar14 = puVar14 + 6;
  } while ((int)(iVar12 + 1U) < 7);
  NetworkSystem_3a960(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),&local_buffer_00000070,
                *(int32_t *)(lVar9 + 8));
  lVar9 = *(int64_t *)(unaff_RDI + 0x2590);
  uVar1 = *(uint64_t *)((int64_t)*(int *)(unaff_RDI + 0xac) * 0xe0 + 0x68 + render_system_memory);
  iVar6 = *(int *)(lVar9 + 8);
  *(int **)(lVar9 + 0x18) = unaff_R15;
  *(int **)(lVar9 + 0x20) = unaff_R15;
  *(int32_t *)(lVar9 + 0xc) = uVar15;
  *(int **)(lVar9 + 0x34) = unaff_R15;
  iVar12 = iVar6 + 1;
  if (iVar6 < 6) {
    iVar12 = iVar6;
  }
  *(int **)(lVar9 + 0x3c) = unaff_R15;
  *(int32_t *)(lVar9 + 0x44) = uVar15;
  *(int32_t *)(lVar9 + 0xc84) = uVar15;
  *(int *)(lVar9 + 0xc80) = iVar12;
  *(int *)(lVar9 + 8) = iVar6;
  *(uint64_t *)(lVar9 + 0x10) = 1;
  *(uint64_t *)(lVar9 + 0x2c) = 0x3f800000;
  *(uint64_t *)(lVar9 + 0xc78) = uVar1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1c0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_7d424(uint64_t param_1,int param_2,int64_t param_3,int64_t param_4)
void NetworkSystem_7d424(uint64_t param_1,int param_2,int64_t param_3,int64_t param_4)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t unaff_R15;
  uint64_t local_var_1c0;
  uVar2 = *(uint64_t *)((int64_t)param_2 * 0xe0 + 0x68 + param_4);
  iVar1 = *(int *)(param_3 + 8);
  *(uint64_t *)(param_3 + 0x18) = unaff_R15;
  *(uint64_t *)(param_3 + 0x20) = unaff_R15;
  uVar4 = (int32_t)unaff_R15;
  *(int32_t *)(param_3 + 0xc) = uVar4;
  *(uint64_t *)(param_3 + 0x34) = unaff_R15;
  iVar3 = iVar1 + 1;
  if (iVar1 < 6) {
    iVar3 = iVar1;
  }
  *(uint64_t *)(param_3 + 0x3c) = unaff_R15;
  *(int32_t *)(param_3 + 0x44) = uVar4;
  *(int32_t *)(param_3 + 0xc84) = uVar4;
  *(int *)(param_3 + 0xc80) = iVar3;
  *(int *)(param_3 + 8) = iVar1;
  *(uint64_t *)(param_3 + 0x10) = 1;
  *(uint64_t *)(param_3 + 0x2c) = 0x3f800000;
  *(uint64_t *)(param_3 + 0xc78) = uVar2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1c0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_7d491(void)
void NetworkSystem_7d491(void)
{
  uint64_t local_var_1c0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1c0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_7d4b0(void)
void NetworkSystem_7d4b0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void NetworkSystem_7d8c0(int64_t *param_1,int32_t param_2,uint64_t param_3)
void NetworkSystem_7d8c0(int64_t *param_1,int32_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  (**(code **)(*param_1 + 200))();
  lVar1 = param_1[0x4b2];
  lVar2 = param_1[0x13];
  *(int8_t *)(lVar1 + 0x29) = *(int8_t *)((int64_t)param_1 + 0xba);
  *(int64_t *)(lVar1 + 0x18) = param_1[0x12];
  *(int *)(lVar1 + 0x20) = (int)lVar2;
  (**(code **)param_1[0x1e])(param_1 + 0x1e,param_2,param_3);
  (**(code **)param_1[0x254])(param_1 + 0x254,param_2,param_3);
  (**(code **)(*(int64_t *)param_1[0x4b2] + 8))
            ((int64_t *)param_1[0x4b2],param_2,param_3,(int)param_1[0x14]);
// WARNING: Could not recover jumptable at 0x00018057d968. Too many branches
// WARNING: Treating indirect jump as call
  (*(code *)**(uint64_t **)param_1[0x4b3])((uint64_t *)param_1[0x4b3],param_2,param_3);
  return;
}
uint64_t *
NetworkSystem_7d980(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &ui_system_data_1336_ptr;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x620,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_7d9d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void NetworkSystem_7d9d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uVar5 = 0xfffffffffffffffe;
  iVar1 = *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48);
  iVar3 = _Thrd_id();
  uVar2 = render_system_memory;
  uVar4 = 0;
  if (iVar3 != iVar1) {
    render_system_memory = _Thrd_id();
    uVar4 = uVar2;
  }
  do {
  } while (*(int *)(system_main_module_state + 0x224) + 2 < *(int *)(system_main_module_state + 0x224));
  UISystem_e7130(*(uint64_t *)(param_1 + 0xc0),param_1 + 200,param_3,param_4,uVar5);
  iVar1 = *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 != iVar1) {
    render_system_memory = uVar4;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_7da90(int64_t param_1)
void NetworkSystem_7da90(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t local_var_148;
  int32_t local_var_140;
  code *pcStack_110;
  int32_t local_var_f8;
  int64_t lStack_a8;
  lVar3 = render_system_data_memory;
  lVar1 = render_system_data_memory + 0x38;
  *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(render_system_data_memory + 0x20);
  Function_254c7960(&local_var_148,lVar1);
  local_var_140 = 0xc11ce560;
  local_var_148 = 0;
  if (lStack_a8 == 0) {
    lStack_a8 = *(int64_t *)(lVar3 + 0x30);
  }
  pcStack_110 = UtilitiesSystem_e71c0;
  local_var_f8 = 2;
  uVar2 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x88))
                    (*(int64_t **)(param_1 + 0x10),&local_var_148);
  *(uint64_t *)(param_1 + 8) = uVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_7db20(int64_t param_1,int64_t param_2,float *param_3)
void NetworkSystem_7db20(int64_t param_1,int64_t param_2,float *param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
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
  int8_t astack_special_x_8 [8];
  int64_t lStackX_10;
  uint64_t astack_special_x_18 [2];
  int64_t lVar23;
  int32_t local_var_198;
  float fStack_194;
  float fStack_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  uint64_t local_var_e0;
  float fStack_d8;
  int32_t local_var_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  int32_t local_var_c4;
  float fStack_c0;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  fStack_118 = *param_3;
  lVar23 = *(int64_t *)(param_2 + 0x20);
  local_var_168 = *(uint64_t *)(lVar23 + 0x1b0);
  local_var_160 = *(uint64_t *)(lVar23 + 0x1b8);
  local_var_158 = *(uint64_t *)(lVar23 + 0x1c0);
  local_var_150 = *(uint64_t *)(lVar23 + 0x1c8);
  fVar22 = *(float *)(lVar23 + 0x1d0);
  local_var_138 = *(uint64_t *)(lVar23 + 0x1e0);
  local_var_130 = *(uint64_t *)(lVar23 + 0x1e8);
  local_var_128 = *(uint64_t *)(lVar23 + 0x1f0);
  if (fVar22 < 0.0) {
    local_var_168 = *(uint64_t *)param_3;
    local_var_160 = *(uint64_t *)(param_3 + 2);
    fVar22 = 1.5;
    local_var_158 = CONCAT44(param_3[1],fStack_118);
    local_var_150 = CONCAT44(0x7f7fffff,param_3[2] + 1.5);
  }
  fVar8 = local_var_158._4_4_ - param_3[1];
  fVar10 = (float)local_var_150 - param_3[2];
  fVar15 = (float)local_var_158 - fStack_118;
  fStack_114 = local_var_168._4_4_ - param_3[1];
  fStack_110 = (float)local_var_160 - param_3[2];
  fStack_118 = (float)local_var_168 - fStack_118;
  astack_special_x_18[0] = *(uint64_t *)(render_system_data_memory + 200);
  local_var_10c = 0x7f7fffff;
  local_var_d4 = 0x7f7fffff;
  local_var_18c = 0x7f7fffff;
  fVar16 = (fVar15 - fStack_118) * (fVar15 - fStack_118) +
           (fVar8 - fStack_114) * (fVar8 - fStack_114) +
           (fVar10 - fStack_110) * (fVar10 - fStack_110);
  local_var_e0 = (int64_t *)CONCAT44(fStack_114,fStack_118);
  local_var_c4 = 0x7f7fffff;
  astack_special_x_8[0] = 2;
  local_var_198 = 2;
  auVar9 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar5 = auVar9._0_4_;
  fVar21 = fVar5 * 0.5 * (3.0 - fVar16 * fVar5 * fVar5) * fVar16 * 0.5;
  lStackX_10 = param_2;
  fStack_194 = fVar22;
  fStack_190 = fVar21;
  fStack_d8 = fStack_110;
  fStack_d0 = fVar15;
  fStack_cc = fVar8;
  fStack_c8 = fVar10;
  fStack_c0 = fVar22;
  plVar3 = (int64_t *)
           (**(code **)(**(int64_t **)(param_1 + 0x10) + 0xb8))
                     (*(int64_t **)(param_1 + 0x10),&local_var_198,astack_special_x_18,1,1,astack_special_x_8);
  lVar23 = param_2;
  NetworkSystem_7f1f0(param_1 + 0x48,&local_var_188);
  *(int64_t **)(CONCAT44(local_var_184,local_var_188) + 8) = plVar3;
  local_var_188 = 0;
  local_var_184 = 0;
  local_var_180 = 0x3f800000;
  local_var_17c = 0;
  UtilitiesSystem_45340(&local_var_168,&fStack_d0,&local_var_e0,&local_var_188,lVar23);
  fVar5 = fStack_148 * 1.0;
  fVar16 = fStack_144 * 1.0;
  fVar6 = fStack_140 * 1.0;
  fVar7 = fStack_13c * 1.0;
  fVar11 = fStack_148 * 0.0;
  fVar12 = fStack_144 * 0.0;
  fVar13 = fStack_140 * 0.0;
  fVar14 = fStack_13c * 0.0;
  fVar17 = (float)local_var_168 * 0.0;
  fVar18 = local_var_168._4_4_ * 0.0;
  fVar19 = (float)local_var_160 * 0.0;
  fVar20 = local_var_160._4_4_ * 0.0;
  fStack_148 = (float)local_var_158 * 1.0 + fVar17 + fVar11;
  fStack_144 = local_var_158._4_4_ * 1.0 + fVar18 + fVar12;
  fStack_140 = (float)local_var_150 * 1.0 + fVar19 + fVar13;
  fStack_13c = local_var_150._4_4_ * 1.0 + fVar20 + fVar14;
  local_var_168 = CONCAT44(local_var_168._4_4_ * -1.0 + local_var_158._4_4_ * 0.0 + fVar12,
                        (float)local_var_168 * -1.0 + (float)local_var_158 * 0.0 + fVar11);
  local_var_160 = CONCAT44(local_var_160._4_4_ * -1.0 + local_var_150._4_4_ * 0.0 + fVar14,
                        (float)local_var_160 * -1.0 + (float)local_var_150 * 0.0 + fVar13);
  local_var_158 = CONCAT44(fVar16 + fVar18 + local_var_158._4_4_ * 0.0,
                        fVar5 + fVar17 + (float)local_var_158 * 0.0);
  local_var_150 = CONCAT44(fVar7 + fVar20 + local_var_150._4_4_ * 0.0,
                        fVar6 + fVar19 + (float)local_var_150 * 0.0);
  AdvancedProcessor_StateManager0(&local_var_188,&local_var_168);
  local_var_100 = local_var_184;
  local_var_f8 = local_var_17c;
  local_var_fc = local_var_180;
  local_var_f0 = (int32_t)local_var_138;
  local_var_f4 = local_var_188;
  local_var_e8 = (int32_t)local_var_130;
  local_var_ec = local_var_138._4_4_;
  (**(code **)(*plVar3 + 0x90))(plVar3,&local_var_100);
  fStack_a0 = *param_3;
  fStack_9c = param_3[1];
  local_var_b0 = 0;
  local_var_a8 = 0x3f80000000000000;
  fStack_98 = param_3[2];
  plVar4 = (int64_t *)
           (**(code **)(**(int64_t **)(param_1 + 0x10) + 0xa0))
                     (*(int64_t **)(param_1 + 0x10),&local_var_b0);
  (**(code **)(*plVar4 + 0xa0))(plVar4,plVar3);
  plVar4[2] = param_2;
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x50))(*(int64_t **)(param_1 + 8),plVar4,0);
  uVar1 = CONCAT44(fStack_114,fStack_118);
  uVar2 = CONCAT44(local_var_10c,fStack_110);
  local_var_e0 = plVar4;
  NetworkSystem_7efe0(param_1 + 0x18,&fStack_118);
  lVar23 = CONCAT44(fStack_114,fStack_118);
  *(int32_t *)(lVar23 + 8) = (int32_t)local_var_e0;
  *(int32_t *)(lVar23 + 0xc) = local_var_e0._4_4_;
  *(float *)(lVar23 + 0x10) = fVar22;
  *(float *)(lVar23 + 0x14) = fVar21;
  *(uint64_t *)(lVar23 + 0x18) = uVar1;
  *(uint64_t *)(lVar23 + 0x20) = uVar2;
  *(float *)(lVar23 + 0x28) = fVar15;
  *(float *)(lVar23 + 0x2c) = fVar8;
  *(float *)(lVar23 + 0x30) = fVar10;
  *(int32_t *)(lVar23 + 0x34) = 0x7f7fffff;
  return;
}
// 函数: void NetworkSystem_7df70(int64_t param_1,uint64_t param_2,float *param_3)
void NetworkSystem_7df70(int64_t param_1,uint64_t param_2,float *param_3)
{
  int64_t lVar1;
  float fVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
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
  uint64_t stack_special_x_10;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t local_var_19c;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  float fStack_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t local_var_fc;
  float fStack_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  lVar1 = *(int64_t *)(param_1 + 0x20);
  puVar4 = *(uint64_t **)(lVar1 + (param_2 % (uint64_t)*(uint *)(param_1 + 0x28)) * 8);
  do {
    if (puVar4 == (uint64_t *)0x0) {
      lVar3 = *(int64_t *)(param_1 + 0x28);
      puVar4 = *(uint64_t **)(lVar1 + lVar3 * 8);
LAB_18057dfca:
      if (puVar4 != *(uint64_t **)(lVar1 + lVar3 * 8)) {
        lVar1 = *(int64_t *)(param_2 + 0x20);
        local_var_188 = *(uint64_t *)(lVar1 + 0x1b0);
        local_var_180 = *(uint64_t *)(lVar1 + 0x1b8);
        local_var_178 = *(uint64_t *)(lVar1 + 0x1c0);
        local_var_170 = *(uint64_t *)(lVar1 + 0x1c8);
        fVar14 = *(float *)(lVar1 + 0x1d0);
        local_var_158 = *(uint64_t *)(lVar1 + 0x1e0);
        local_var_150 = *(uint64_t *)(lVar1 + 0x1e8);
        local_var_148 = *(uint64_t *)(lVar1 + 0x1f0);
        if (fVar14 < 0.0) {
          local_var_188 = *(uint64_t *)param_3;
          local_var_180 = *(uint64_t *)(param_3 + 2);
          fVar14 = 1.5;
          local_var_178 = *(uint64_t *)param_3;
          local_var_170 = CONCAT44(0x7f7fffff,param_3[2] + 1.5);
        }
        fVar2 = *param_3;
        fStack_c8 = param_3[1];
        fStack_b8 = param_3[2];
        fVar17 = (float)local_var_178 - fVar2;
        fVar20 = (float)local_var_188 - fVar2;
        fVar15 = local_var_188._4_4_ - fStack_c8;
        fVar18 = local_var_178._4_4_ - fStack_c8;
        local_var_10c = 0x7f7fffff;
        fVar16 = (float)local_var_180 - fStack_b8;
        fVar19 = (float)local_var_170 - fStack_b8;
        local_var_19c = 0x7f7fffff;
        local_var_fc = 0x7f7fffff;
        fVar9 = (fVar18 - fVar15) * (fVar18 - fVar15) + (fVar17 - fVar20) * (fVar17 - fVar20) +
                (fVar19 - fVar16) * (fVar19 - fVar16);
        auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar6 = auVar8._0_4_;
        fVar9 = fVar6 * 0.5 * (3.0 - fVar9 * fVar6 * fVar6) * fVar9 * 0.5;
        fVar6 = fVar9 - *(float *)((int64_t)puVar4 + 0x14);
        stack_special_x_10 = param_2;
        fStack_1a8 = fVar17;
        fStack_1a4 = fVar18;
        fStack_1a0 = fVar19;
        fStack_118 = fVar20;
        fStack_114 = fVar15;
        fStack_110 = fVar16;
        fStack_108 = fVar17;
        fStack_104 = fVar18;
        fStack_100 = fVar19;
        fStack_f8 = fVar14;
        fStack_c4 = fStack_c8;
        fStack_c0 = fStack_c8;
        fStack_bc = fStack_c8;
        fStack_b4 = fStack_b8;
        fStack_b0 = fStack_b8;
        fStack_ac = fStack_b8;
        if ((((fVar6 <= -0.01) || (0.01 <= fVar6)) || (fVar14 - *(float *)(puVar4 + 2) <= -0.01)) ||
           (0.01 <= fVar14 - *(float *)(puVar4 + 2))) {
          NetworkSystem_7f1f0(param_1 + 0x48,&fStack_1a8,auVar8._0_8_,&stack_special_x_10,param_2);
          lVar1 = CONCAT44(fStack_1a4,fStack_1a8);
          fStack_1a8 = 2.8026e-45;
          plVar5 = *(int64_t **)(lVar1 + 8);
          fStack_1a4 = fVar14;
          fStack_1a0 = fVar9;
          (**(code **)(*plVar5 + 0x40))(plVar5,&fStack_1a8);
          *(float *)(puVar4 + 2) = fVar14;
          *(float *)((int64_t)puVar4 + 0x14) = fVar9;
        }
        if ((((0.01 <= ABS(fVar20 - *(float *)(puVar4 + 3))) ||
             (0.01 <= ABS(fVar15 - *(float *)((int64_t)puVar4 + 0x1c)))) ||
            ((0.01 <= ABS(fVar16 - *(float *)(puVar4 + 4)) ||
             ((0.01 <= ABS(fVar17 - *(float *)(puVar4 + 5)) ||
              (0.01 <= ABS(fVar18 - *(float *)((int64_t)puVar4 + 0x2c)))))))) ||
           (0.01 <= ABS(fVar19 - *(float *)(puVar4 + 6)))) {
          NetworkSystem_7f1f0(param_1 + 0x48,&fStack_1a8);
          lVar1 = CONCAT44(fStack_1a4,fStack_1a8);
          fStack_1a8 = 0.0;
          fStack_1a4 = 0.0;
          fStack_1a0 = 1.0;
          local_var_19c = 0;
          plVar5 = *(int64_t **)(lVar1 + 8);
          UtilitiesSystem_45340(&local_var_188,&fStack_108,&fStack_118,&fStack_1a8,param_2);
          fVar10 = (float)local_var_188 * 0.0;
          fVar11 = local_var_188._4_4_ * 0.0;
          fVar12 = (float)local_var_180 * 0.0;
          fVar13 = local_var_180._4_4_ * 0.0;
          fVar14 = fStack_168 * 1.0;
          fVar6 = fStack_164 * 1.0;
          fVar9 = fStack_160 * 1.0;
          fVar7 = fStack_15c * 1.0;
          local_var_188 = CONCAT44(local_var_188._4_4_ * -1.0 + local_var_178._4_4_ * 0.0 + fStack_164 * 0.0,
                                (float)local_var_188 * -1.0 + (float)local_var_178 * 0.0 +
                                fStack_168 * 0.0);
          local_var_180 = CONCAT44(local_var_180._4_4_ * -1.0 + local_var_170._4_4_ * 0.0 + fStack_15c * 0.0,
                                (float)local_var_180 * -1.0 + (float)local_var_170 * 0.0 +
                                fStack_160 * 0.0);
          fStack_168 = (float)local_var_178 * 1.0 + fVar10 + fStack_168 * 0.0;
          fStack_164 = local_var_178._4_4_ * 1.0 + fVar11 + fStack_164 * 0.0;
          fStack_160 = (float)local_var_170 * 1.0 + fVar12 + fStack_160 * 0.0;
          fStack_15c = local_var_170._4_4_ * 1.0 + fVar13 + fStack_15c * 0.0;
          local_var_178 = CONCAT44(fVar11 + local_var_178._4_4_ * 0.0 + fVar6,
                                fVar10 + (float)local_var_178 * 0.0 + fVar14);
          local_var_170 = CONCAT44(fVar13 + local_var_170._4_4_ * 0.0 + fVar7,
                                fVar12 + (float)local_var_170 * 0.0 + fVar9);
          AdvancedProcessor_StateManager0(&fStack_1a8,&local_var_188);
          local_var_138 = fStack_1a4;
          local_var_130 = local_var_19c;
          local_var_134 = fStack_1a0;
          local_var_128 = (int32_t)local_var_158;
          fStack_12c = fStack_1a8;
          local_var_120 = (int32_t)local_var_150;
          local_var_124 = local_var_158._4_4_;
          (**(code **)(*plVar5 + 0x90))(plVar5,&local_var_138);
          local_var_19c = 0x7f7fffff;
          *(float *)(puVar4 + 3) = fVar20;
          *(float *)((int64_t)puVar4 + 0x1c) = fVar15;
          *(float *)(puVar4 + 4) = fVar16;
          *(int32_t *)((int64_t)puVar4 + 0x24) = 0x7f7fffff;
          *(float *)(puVar4 + 5) = fVar17;
          *(float *)((int64_t)puVar4 + 0x2c) = fVar18;
          *(float *)(puVar4 + 6) = fVar19;
          *(int32_t *)((int64_t)puVar4 + 0x34) = 0x7f7fffff;
          fStack_1a8 = fVar20;
          fStack_1a4 = fVar15;
          fStack_1a0 = fVar16;
        }
        local_var_f0 = 0;
        local_var_e8 = 0x3f80000000000000;
        fStack_d8 = fStack_b8;
        fStack_dc = fStack_c8;
        fStack_e0 = fVar2;
        (**(code **)(*(int64_t *)puVar4[1] + 0x98))((int64_t *)puVar4[1],&local_var_f0,1);
      }
      return;
    }
    if (param_2 == *puVar4) {
      lVar3 = *(int64_t *)(param_1 + 0x28);
      goto LAB_18057dfca;
    }
    puVar4 = (uint64_t *)puVar4[7];
  } while( true );
}