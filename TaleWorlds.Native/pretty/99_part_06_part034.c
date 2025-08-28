#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part034.c - 4 个函数
// 函数: void RenderingSystem_c6230(int64_t param_1)
void RenderingSystem_c6230(int64_t param_1)
{
  if (*(uint64_t **)(param_1 + 0x28) != (uint64_t *)0x0) {
    (**(code **)**(uint64_t **)(param_1 + 0x28))();
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  return;
}
uint64_t *
RenderingSystem_c6260(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &memory_allocator_3632_ptr;
  *param_1 = &processed_var_8336_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t *
RenderingSystem_c62c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &memory_allocator_3576_ptr;
  if ((uint64_t *)param_1[1] != (uint64_t *)0x0) {
    (*(code *)**(uint64_t **)param_1[1])();
    param_1[1] = 0;
  }
  *param_1 = &processed_var_7888_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
RenderingSystem_c6330(uint64_t *param_1,int64_t param_2,int32_t *param_3,int8_t param_4,
             float *param_5)
{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int32_t uVar8;
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
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  int8_t astack_special_x_20 [8];
  uint64_t *local_var_fffffffffffffeb8;
  uint64_t *puVar19;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  float fStack_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int32_t local_var_a0;
  fVar13 = (float)param_3[1];
  fVar14 = (float)param_3[2];
  fVar15 = (float)param_3[3];
  fVar10 = (float)param_3[5];
  fVar11 = (float)param_3[6];
  fVar12 = (float)param_3[7];
  fStack_134 = *param_5;
  fStack_138 = fStack_134 * 1.0;
  fStack_130 = fStack_134 * 0.0;
  fStack_134 = fStack_134 * 0.0;
  fStack_120 = param_5[1];
  fStack_114 = param_5[2];
  fStack_128 = fStack_120 * 0.0;
  fStack_124 = fStack_120 * 1.0;
  fStack_118 = fStack_114 * 0.0;
  fStack_110 = fStack_114 * 1.0;
  fStack_120 = fStack_120 * 0.0;
  fStack_114 = fStack_114 * 0.0;
  local_var_108 = 0;
  local_var_104 = 0;
  local_var_100 = 0;
  local_var_fc = 0x3f800000;
  fStack_11c = 0.0;
  fStack_12c = 0.0;
  fStack_10c = 0.0;
  fVar16 = fVar13 * fStack_138 + fVar14 * fStack_128 + fVar15 * fStack_118 + 0.0;
  fVar17 = fVar13 * fStack_134 + fVar14 * fStack_124 + fVar15 * fStack_114 + 0.0;
  fVar18 = fVar13 * fStack_130 + fVar14 * fStack_120 + fVar15 * fStack_110 + 0.0;
  fStack_b4 = fVar13 * 0.0 + fVar14 * 0.0 + fVar15 * 0.0 + 1.0;
  fVar13 = fVar10 * fStack_138 + fVar11 * fStack_128 + fVar12 * fStack_118 + 0.0;
  fVar14 = fVar10 * fStack_134 + fVar11 * fStack_124 + fVar12 * fStack_114 + 0.0;
  fVar15 = fVar10 * fStack_130 + fVar11 * fStack_120 + fVar12 * fStack_110 + 0.0;
  fStack_a4 = fVar10 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0 + 1.0;
  astack_special_x_20[0] = param_4;
  fStack_c0 = fVar16;
  fStack_bc = fVar17;
  fStack_b8 = fVar18;
  fStack_b0 = fVar13;
  fStack_ac = fVar14;
  fStack_a8 = fVar15;
  uVar8 = Function_b601fd69(&fStack_138,*param_3);
  lVar1 = system_system_data_memory;
  fVar13 = fVar13 - fVar16;
  fVar14 = fVar14 - fVar17;
  fVar15 = fVar15 - fVar18;
  stack_special_x_8 = 0;
  fVar14 = fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15;
  auVar9 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar13 = auVar9._0_4_;
  local_var_a0 = uVar8;
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar2 = RenderingSystem_PostProcessor(system_system_data_memory);
    if (iVar2 == -1) {
      stack_special_x_8 = 0;
    }
    else {
      stack_special_x_8 = (int64_t)iVar2 * 0x68 + *(int64_t *)(lVar1 + 0x38);
    }
  }
  param_5 = (float *)0x0;
  if (stack_special_x_8 == 0) {
    puVar19 = (uint64_t *)(param_3 + 10);
    puVar7 = (uint64_t *)(system_system_data_memory + 0xd8);
    puVar5 = *(uint64_t **)(system_system_data_memory + 0xe8);
    puVar3 = puVar7;
    if (puVar5 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar5[4] < *puVar19) {
          puVar5 = (uint64_t *)*puVar5;
        }
        else {
          puVar3 = puVar5;
          puVar5 = (uint64_t *)puVar5[1];
        }
      } while (puVar5 != (uint64_t *)0x0);
    }
    if ((puVar3 != puVar7) && ((uint64_t)puVar3[4] <= *puVar19)) goto LAB_1803c66d8;
    puVar6 = &stack_special_x_8;
  }
  else {
    puVar3 = (uint64_t *)(system_system_data_memory + 0xd8);
    puVar5 = *(uint64_t **)(system_system_data_memory + 0xe8);
    while (puVar5 != (uint64_t *)0x0) {
      if ((uint64_t)puVar5[4] < stack_special_x_8) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar3 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    }
    if ((puVar3 != (uint64_t *)(system_system_data_memory + 0xd8)) && ((uint64_t)puVar3[4] <= stack_special_x_8))
    goto LAB_1803c66d8;
    puVar19 = &stack_special_x_8;
    puVar6 = &stack_special_x_10;
  }
  puVar3 = (uint64_t *)GenericFunction_1800fc780(system_system_data_memory + 0xd8,puVar6);
  puVar3 = (uint64_t *)*puVar3;
  local_var_fffffffffffffeb8 = puVar19;
LAB_1803c66d8:
  param_5 = (float *)puVar3[5];
  if (param_5 == (float *)0x0) {
    param_5 = *(float **)(system_system_data_memory + 200);
  }
  astack_special_x_20[0] = 0xb;
  local_var_e8 = 2;
  local_var_e4 = uVar8;
  fStack_e0 = fVar13 * 0.5 * (3.0 - fVar14 * fVar13 * fVar13) * fVar14 * 0.5;
  plVar4 = (int64_t *)
           (**(code **)(*(int64_t *)*param_1 + 0xb8))
                     ((int64_t *)*param_1,&local_var_e8,&param_5,1,
                      (uint64_t)local_var_fffffffffffffeb8 & 0xffffffffffffff00,astack_special_x_20);
  local_var_f8 = 0;
  local_var_f4 = 0;
  local_var_f0 = 0x3f800000;
  local_var_ec = 0;
  UtilitiesSystem_45340(&fStack_138,&fStack_b0,&fStack_c0,&local_var_f8);
  fVar11 = fStack_138 * 0.0;
  fVar12 = fStack_134 * 0.0;
  fVar16 = fStack_130 * 0.0;
  fVar17 = fStack_12c * 0.0;
  fVar13 = fStack_128 * 1.0;
  fVar14 = fStack_124 * 1.0;
  fVar15 = fStack_120 * 1.0;
  fVar10 = fStack_11c * 1.0;
  fStack_138 = fStack_138 * -1.0 + fStack_128 * 0.0 + fStack_118 * 0.0;
  fStack_134 = fStack_134 * -1.0 + fStack_124 * 0.0 + fStack_114 * 0.0;
  fStack_130 = fStack_130 * -1.0 + fStack_120 * 0.0 + fStack_110 * 0.0;
  fStack_12c = fStack_12c * -1.0 + fStack_11c * 0.0 + fStack_10c * 0.0;
  fStack_128 = fVar11 + fStack_128 * 0.0 + fStack_118 * 1.0;
  fStack_124 = fVar12 + fStack_124 * 0.0 + fStack_114 * 1.0;
  fStack_120 = fVar16 + fStack_120 * 0.0 + fStack_110 * 1.0;
  fStack_11c = fVar17 + fStack_11c * 0.0 + fStack_10c * 1.0;
  fStack_118 = fVar13 + fVar11 + fStack_118 * 0.0;
  fStack_114 = fVar14 + fVar12 + fStack_114 * 0.0;
  fStack_110 = fVar15 + fVar16 + fStack_110 * 0.0;
  fStack_10c = fVar10 + fVar17 + fStack_10c * 0.0;
  AdvancedProcessor_StateManager0(&local_var_f8,&fStack_138);
  local_var_dc = local_var_f4;
  local_var_d4 = local_var_ec;
  local_var_d8 = local_var_f0;
  local_var_cc = local_var_108;
  local_var_d0 = local_var_f8;
  local_var_c4 = local_var_100;
  local_var_c8 = local_var_104;
  (**(code **)(*plVar4 + 0x90))(plVar4,&local_var_dc);
  return plVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
RenderingSystem_c6880(uint64_t *param_1,int64_t param_2,int32_t *param_3,int8_t param_4,
             float *param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint uVar14;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  int8_t astack_special_x_20 [8];
  uint64_t *local_var_fffffffffffffed8;
  uint64_t *puVar15;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  fVar3 = (float)param_3[1];
  fVar4 = (float)param_3[2];
  fVar5 = (float)param_3[3];
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  fStack_a0 = 0.0;
  fStack_9c = 1.0;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fStack_b0 = param_5[2];
  fStack_b8 = fStack_b0 * 0.0;
  fStack_b4 = fStack_b0 * 0.0;
  fStack_b0 = fStack_b0 * 1.0;
  local_var_c8 = CONCAT44(fVar2 * 1.0,fVar2 * 0.0);
  local_var_c0 = (uint64_t)(uint)(fVar2 * 0.0);
  local_var_d8 = CONCAT44(fVar1 * 0.0,fVar1 * 1.0);
  local_var_d0 = (uint64_t)(uint)(fVar1 * 0.0);
  local_var_ac = 0;
  fStack_118 = fVar2 * 0.0 * fVar4 + fVar1 * 1.0 * fVar3 + fStack_b8 * fVar5 + 0.0;
  fStack_114 = fVar2 * 1.0 * fVar4 + fVar1 * 0.0 * fVar3 + fStack_b4 * fVar5 + 0.0;
  fStack_110 = fVar2 * 0.0 * fVar4 + fVar1 * 0.0 * fVar3 + fStack_b0 * fVar5 + 0.0;
  fStack_10c = fVar4 * 0.0 + fVar3 * 0.0 + fVar5 * 0.0 + 1.0;
  astack_special_x_20[0] = param_4;
  uVar14 = Function_b601fd69(&local_var_d8,*param_3);
  lVar6 = system_system_data_memory;
  stack_special_x_8 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar7 = RenderingSystem_PostProcessor(system_system_data_memory);
    if (iVar7 == -1) {
      stack_special_x_8 = 0;
    }
    else {
      stack_special_x_8 = (int64_t)iVar7 * 0x68 + *(int64_t *)(lVar6 + 0x38);
    }
  }
  param_5 = (float *)0x0;
  if (stack_special_x_8 == 0) {
    puVar15 = (uint64_t *)(param_3 + 6);
    puVar13 = (uint64_t *)(system_system_data_memory + 0xd8);
    puVar11 = *(uint64_t **)(system_system_data_memory + 0xe8);
    puVar8 = puVar13;
    if (puVar11 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar11[4] < *puVar15) {
          puVar11 = (uint64_t *)*puVar11;
        }
        else {
          puVar8 = puVar11;
          puVar11 = (uint64_t *)puVar11[1];
        }
      } while (puVar11 != (uint64_t *)0x0);
    }
    if ((puVar8 != puVar13) && ((uint64_t)puVar8[4] <= *puVar15)) goto LAB_1803c6b53;
    puVar12 = &stack_special_x_8;
  }
  else {
    puVar8 = (uint64_t *)(system_system_data_memory + 0xd8);
    puVar11 = *(uint64_t **)(system_system_data_memory + 0xe8);
    while (puVar11 != (uint64_t *)0x0) {
      if ((uint64_t)puVar11[4] < stack_special_x_8) {
        puVar11 = (uint64_t *)*puVar11;
      }
      else {
        puVar8 = puVar11;
        puVar11 = (uint64_t *)puVar11[1];
      }
    }
    if ((puVar8 != (uint64_t *)(system_system_data_memory + 0xd8)) && ((uint64_t)puVar8[4] <= stack_special_x_8))
    goto LAB_1803c6b53;
    puVar15 = &stack_special_x_8;
    puVar12 = &stack_special_x_10;
  }
  puVar8 = (uint64_t *)GenericFunction_1800fc780(system_system_data_memory + 0xd8,puVar12);
  puVar8 = (uint64_t *)*puVar8;
  local_var_fffffffffffffed8 = puVar15;
LAB_1803c6b53:
  param_5 = (float *)puVar8[5];
  if (param_5 == (float *)0x0) {
    param_5 = *(float **)(system_system_data_memory + 200);
  }
  astack_special_x_20[0] = 0xb;
  stack_special_x_8 = (uint64_t)uVar14 << 0x20;
  uVar9 = (**(code **)(*(int64_t *)*param_1 + 0xb8))
                    ((int64_t *)*param_1,&stack_special_x_8,&param_5,1,
                     (uint64_t)local_var_fffffffffffffed8 & 0xffffffffffffff00,astack_special_x_20);
  local_var_c8 = 0x3f80000000000000;
  local_var_c0 = 0;
  local_var_d8 = 0x3f800000;
  local_var_d0 = 0;
  fStack_a8 = fStack_118;
  fStack_a4 = fStack_114;
  fStack_a0 = fStack_110;
  fStack_9c = fStack_10c;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  fStack_b0 = 1.0;
  local_var_ac = 0;
  plVar10 = (int64_t *)AdvancedProcessor_StateManager0(&fStack_118,&local_var_d8);
  fStack_f8 = fStack_114;
  fStack_f0 = fStack_10c;
  fStack_f4 = fStack_110;
  fStack_e8 = fStack_a8;
  fStack_ec = fStack_118;
  fStack_e0 = fStack_a0;
  fStack_e4 = fStack_a4;
  (**(code **)(*plVar10 + 0x90))(uVar9,&fStack_f8);
  return uVar9;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_c6c90(uint64_t *param_1,int64_t param_2,uint64_t *param_3,char param_4,
void RenderingSystem_c6c90(uint64_t *param_1,int64_t param_2,uint64_t *param_3,char param_4,
                  int32_t *param_5)
{
  uint uVar1;
  uint uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int8_t stack_array_158 [32];
  uint64_t *plocal_var_138;
  int8_t *plocal_var_130;
  int8_t stack_array_128 [8];
  uint64_t local_var_120;
  uint64_t *plocal_var_118;
  uint64_t *plocal_var_110;
  uint64_t *plocal_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int8_t stack_array_e8 [8];
  uint64_t local_var_e0;
  void *plocal_var_d8;
  uint local_var_d0;
  uint local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  uint64_t *plocal_var_b8;
  int8_t local_var_b0;
  int16_t local_var_af;
  int8_t local_var_ad;
  int32_t local_var_a8;
  int32_t local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  uVar1 = param_5[2];
  uVar2 = param_5[1];
  uVar3 = *param_5;
  plocal_var_118 = param_1;
  if (param_4 == '\0') {
    Function_ed5f18a6(&plocal_var_d8,*param_3,*(int32_t *)(param_3 + 1));
    plocal_var_110 = (uint64_t *)
                  (**(code **)(*(int64_t *)*param_1 + 0x28))((int64_t *)*param_1,&plocal_var_d8);
    lVar4 = system_system_data_memory;
    local_var_a8 = 5;
    local_var_98 = 0;
    local_var_94 = 0;
    local_var_90 = 0;
    local_var_8c = 0x3f800000;
    uVar9 = 0;
    local_var_88 = 0;
    local_var_120 = 0;
    local_var_a4 = uVar3;
    local_var_a0 = uVar2;
    local_var_9c = uVar1;
    plocal_var_80 = plocal_var_110;
    if ((*(int *)(param_2 + 0x18) != 0) &&
       (iVar5 = RenderingSystem_PostProcessor(system_system_data_memory,param_2 + 8), local_var_120 = uVar9, iVar5 != -1)) {
      local_var_120 = (int64_t)iVar5 * 0x68 + *(int64_t *)(lVar4 + 0x38);
    }
    uVar10 = local_var_120;
    uVar14 = (int64_t)(param_3[4] - param_3[3]) >> 3;
    plocal_var_108 = (uint64_t *)0x0;
    local_var_100 = 0;
    local_var_f8 = 0;
    local_var_f0 = 3;
    iVar5 = (int)uVar14;
    GenericFunction_180057340(&plocal_var_108,(int64_t)iVar5);
    puVar6 = plocal_var_108;
    if (uVar10 == 0) {
      if (0 < iVar5) {
        uVar10 = uVar14 & 0xffffffff;
        do {
          puVar11 = (uint64_t *)(system_system_data_memory + 0xd8);
          puVar13 = (uint64_t *)(param_3[3] + uVar9);
          puVar8 = *(uint64_t **)(system_system_data_memory + 0xe8);
          puVar7 = puVar11;
          if (puVar8 != (uint64_t *)0x0) {
            do {
              if ((uint64_t)puVar8[4] < *puVar13) {
                puVar8 = (uint64_t *)*puVar8;
              }
              else {
                puVar7 = puVar8;
                puVar8 = (uint64_t *)puVar8[1];
              }
            } while (puVar8 != (uint64_t *)0x0);
          }
          if ((puVar7 == puVar11) || (*puVar13 < (uint64_t)puVar7[4])) {
            plocal_var_138 = puVar13;
            puVar7 = (uint64_t *)GenericFunction_1800fc780(puVar11,stack_array_e8);
            puVar7 = (uint64_t *)*puVar7;
          }
          *(uint64_t *)(uVar9 + (int64_t)puVar6) = puVar7[5];
          uVar9 = uVar9 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else if (0 < iVar5) {
      uVar9 = uVar14 & 0xffffffff;
      puVar8 = plocal_var_108;
      do {
        puVar12 = (uint64_t *)(system_system_data_memory + 0xd8);
        puVar11 = puVar12;
        puVar7 = *(uint64_t **)(system_system_data_memory + 0xe8);
        while (puVar7 != (uint64_t *)0x0) {
          if ((uint64_t)puVar7[4] < uVar10) {
            puVar7 = (uint64_t *)*puVar7;
          }
          else {
            puVar11 = puVar7;
            puVar7 = (uint64_t *)puVar7[1];
          }
        }
        if ((puVar11 == puVar12) || (uVar10 < (uint64_t)puVar11[4])) {
          plocal_var_138 = &local_var_120;
          puVar11 = (uint64_t *)GenericFunction_1800fc780(puVar12,stack_array_e8,puVar12,puVar11);
          puVar11 = (uint64_t *)*puVar11;
        }
        *puVar8 = puVar11[5];
        puVar8 = puVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    stack_array_128[0] = 0xb;
    plocal_var_130 = stack_array_128;
    plocal_var_138 = (uint64_t *)((uint64_t)plocal_var_138 & 0xffffffffffffff00);
    (**(code **)(*(int64_t *)*plocal_var_118 + 0xb8))
              ((int64_t *)*plocal_var_118,&local_var_a8,puVar6,uVar14 & 0xffff);
    (**(code **)*plocal_var_110)();
    if (puVar6 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar6);
    }
    plocal_var_d8 = &system_handler1_ptr;
    goto LAB_1803c708d;
  }
  Function_ed5f18a6(&plocal_var_108,*param_3,*(int32_t *)(param_3 + 1));
  puVar6 = (uint64_t *)
           (**(code **)(*(int64_t *)*param_1 + 0x58))((int64_t *)*param_1,&plocal_var_108);
  lVar4 = system_system_data_memory;
  plocal_var_d8 = (void *)(CONCAT44(uVar3,4) & 0x7fffffffffffffff);
  local_var_c8 = 0;
  local_var_c4 = 0;
  local_var_c0 = 0;
  local_var_bc = 0x3f800000;
  local_var_b0 = 1;
  local_var_120 = 0;
  local_var_af = 0;
  local_var_ad = 0;
  local_var_d0 = uVar2 & 0x7fffffff;
  local_var_cc = uVar1 & 0x7fffffff;
  plocal_var_b8 = puVar6;
  if (*(int *)(param_2 + 0x18) == 0) {
LAB_1803c6d98:
    local_var_120 = *(uint64_t *)(param_3[3] + (int64_t)*(int *)(param_3 + 2) * 8);
  }
  else {
    iVar5 = RenderingSystem_PostProcessor(system_system_data_memory,param_2 + 8);
    if (iVar5 != -1) {
      local_var_120 = (int64_t)iVar5 * 0x68 + *(int64_t *)(lVar4 + 0x38);
    }
    if (local_var_120 == 0) goto LAB_1803c6d98;
  }
  puVar11 = (uint64_t *)(system_system_data_memory + 0xd8);
  puVar7 = puVar11;
  puVar8 = *(uint64_t **)(system_system_data_memory + 0xe8);
  while (puVar8 != (uint64_t *)0x0) {
    if ((uint64_t)puVar8[4] < local_var_120) {
      puVar8 = (uint64_t *)*puVar8;
    }
    else {
      puVar7 = puVar8;
      puVar8 = (uint64_t *)puVar8[1];
    }
  }
  if ((puVar7 == puVar11) || (local_var_120 < (uint64_t)puVar7[4])) {
    plocal_var_138 = &local_var_120;
    puVar7 = (uint64_t *)GenericFunction_1800fc780(puVar11,&plocal_var_110,puVar11,puVar7);
    puVar7 = (uint64_t *)*puVar7;
  }
  plocal_var_118 = (uint64_t *)puVar7[5];
  stack_array_128[0] = 0xb;
  plocal_var_130 = stack_array_128;
  plocal_var_138 = (uint64_t *)((uint64_t)plocal_var_138 & 0xffffffffffffff00);
  (**(code **)(*(int64_t *)*param_1 + 0xb8))((int64_t *)*param_1,&plocal_var_d8,&plocal_var_118,1);
  (**(code **)*puVar6)(puVar6);
  plocal_var_108 = (uint64_t *)&system_handler1_ptr;
LAB_1803c708d:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_158);
}
// 函数: void RenderingSystem_c70d0(uint64_t *param_1)
void RenderingSystem_c70d0(uint64_t *param_1)
{
  *param_1 = &system_param1_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_c7100(uint64_t *param_1,int64_t param_2,int64_t *param_3,char param_4,
void RenderingSystem_c7100(uint64_t *param_1,int64_t param_2,int64_t *param_3,char param_4,
                  int32_t *param_5)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t **ppuVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  int8_t stack_array_178 [32];
  uint64_t *plocal_var_158;
  int8_t *plocal_var_150;
  int8_t stack_array_148 [8];
  uint64_t *plocal_var_140;
  uint64_t local_var_138;
  uint64_t *plocal_var_130;
  uint64_t *plocal_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  uint64_t *aplocal_var_108 [2];
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int8_t stack_array_e8 [8];
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  uint64_t *plocal_var_b8;
  int8_t local_var_b0;
  int16_t local_var_af;
  int8_t local_var_ad;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  uVar1 = param_5[2];
  uVar2 = param_5[1];
  uVar3 = *param_5;
  plocal_var_130 = param_1;
  if (param_4 == '\0') {
    plVar6 = (int64_t *)PxGetFoundation();
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
    Function_584c4099(aplocal_var_108,uVar7);
    GenericFunction_18014b7f0(param_3,aplocal_var_108);
    Function_ed5f18a6(&local_var_d8,local_var_f8,local_var_f0);
    plocal_var_140 = (uint64_t *)
                  (**(code **)(*(int64_t *)*param_1 + 0x28))((int64_t *)*param_1,&local_var_d8);
    lVar4 = system_system_data_memory;
    local_var_a8 = 5;
    local_var_98 = 0;
    local_var_94 = 0;
    local_var_90 = 0;
    local_var_8c = 0x3f800000;
    uVar13 = 0;
    local_var_88 = 0;
    local_var_138 = 0;
    local_var_a4 = uVar3;
    local_var_a0 = uVar2;
    local_var_9c = uVar1;
    plocal_var_80 = plocal_var_140;
    if ((*(int *)(param_2 + 0x18) != 0) &&
       (iVar5 = RenderingSystem_PostProcessor(system_system_data_memory,param_2 + 8), local_var_138 = uVar13, iVar5 != -1)) {
      local_var_138 = (int64_t)iVar5 * 0x68 + *(int64_t *)(lVar4 + 0x38);
    }
    uVar12 = local_var_138;
    uVar17 = param_3[1] - *param_3 >> 3;
    plocal_var_128 = (uint64_t *)0x0;
    local_var_120 = 0;
    local_var_118 = 0;
    local_var_110 = 3;
    iVar5 = (int)uVar17;
    GenericFunction_180057340(&plocal_var_128,(int64_t)iVar5);
    puVar8 = plocal_var_128;
    if (uVar12 == 0) {
      if (0 < iVar5) {
        uVar12 = uVar17 & 0xffffffff;
        do {
          puVar15 = (uint64_t *)(system_system_data_memory + 0xd8);
          puVar16 = (uint64_t *)(*param_3 + uVar13);
          puVar10 = *(uint64_t **)(system_system_data_memory + 0xe8);
          puVar9 = puVar15;
          if (puVar10 != (uint64_t *)0x0) {
            do {
              if ((uint64_t)puVar10[4] < *puVar16) {
                puVar10 = (uint64_t *)*puVar10;
              }
              else {
                puVar9 = puVar10;
                puVar10 = (uint64_t *)puVar10[1];
              }
            } while (puVar10 != (uint64_t *)0x0);
          }
          if ((puVar9 == puVar15) || (*puVar16 < (uint64_t)puVar9[4])) {
            plocal_var_158 = puVar16;
            puVar9 = (uint64_t *)GenericFunction_1800fc780(puVar15,stack_array_e8);
            puVar9 = (uint64_t *)*puVar9;
          }
          *(uint64_t *)(uVar13 + (int64_t)puVar8) = puVar9[5];
          uVar13 = uVar13 + 8;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else if (0 < iVar5) {
      uVar13 = uVar17 & 0xffffffff;
      puVar10 = plocal_var_128;
      do {
        puVar14 = (uint64_t *)(system_system_data_memory + 0xd8);
        puVar15 = puVar14;
        puVar9 = *(uint64_t **)(system_system_data_memory + 0xe8);
        while (puVar9 != (uint64_t *)0x0) {
          if ((uint64_t)puVar9[4] < uVar12) {
            puVar9 = (uint64_t *)*puVar9;
          }
          else {
            puVar15 = puVar9;
            puVar9 = (uint64_t *)puVar9[1];
          }
        }
        if ((puVar15 == puVar14) || (uVar12 < (uint64_t)puVar15[4])) {
          plocal_var_158 = &local_var_138;
          puVar15 = (uint64_t *)GenericFunction_1800fc780(puVar14,stack_array_e8,puVar14,puVar15);
          puVar15 = (uint64_t *)*puVar15;
        }
        *puVar10 = puVar15[5];
        puVar10 = puVar10 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    stack_array_148[0] = 0xb;
    plocal_var_150 = stack_array_148;
    plocal_var_158 = (uint64_t *)CONCAT71(plocal_var_158._1_7_,1);
    (**(code **)(*(int64_t *)*plocal_var_130 + 0xb8))
              ((int64_t *)*plocal_var_130,&local_var_a8,puVar8,uVar17 & 0xffff);
    (**(code **)*plocal_var_140)();
    if (puVar8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar8);
    }
    local_var_d8 = &system_handler1_ptr;
    ppuVar11 = aplocal_var_108;
    goto LAB_1803c75bf;
  }
  plVar6 = (int64_t *)PxGetFoundation();
  uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
  Function_584c4099(&plocal_var_128,uVar7);
  GenericFunction_18014c160(param_3,&plocal_var_128);
  Function_ed5f18a6(aplocal_var_108,local_var_118,local_var_110);
  puVar8 = (uint64_t *)
           (**(code **)(*(int64_t *)*param_1 + 0x58))((int64_t *)*param_1,aplocal_var_108);
  lVar4 = system_system_data_memory;
  local_var_d8 = (void *)CONCAT44(uVar3,4);
  local_var_c8 = 0;
  local_var_c4 = 0;
  local_var_c0 = 0;
  local_var_bc = 0x3f800000;
  local_var_b0 = 1;
  local_var_af = 0;
  local_var_ad = 0;
  local_var_138 = 0;
  local_var_d0 = uVar2;
  local_var_cc = uVar1;
  plocal_var_b8 = puVar8;
  if ((*(int *)(param_2 + 0x18) != 0) &&
     (iVar5 = RenderingSystem_PostProcessor(system_system_data_memory,param_2 + 8), param_1 = plocal_var_130, local_var_138 = 0,
     iVar5 != -1)) {
    local_var_138 = (int64_t)iVar5 * 0x68 + *(int64_t *)(lVar4 + 0x38);
  }
  plocal_var_140 = (uint64_t *)0x0;
  if (local_var_138 == 0) {
    puVar15 = (uint64_t *)(system_system_data_memory + 0xd8);
    puVar16 = (uint64_t *)(param_3 + 4);
    puVar10 = *(uint64_t **)(system_system_data_memory + 0xe8);
    puVar9 = puVar15;
    if (puVar10 != (uint64_t *)0x0) {
      do {
        if ((uint64_t)puVar10[4] < *puVar16) {
          puVar10 = (uint64_t *)*puVar10;
        }
        else {
          puVar9 = puVar10;
          puVar10 = (uint64_t *)puVar10[1];
        }
      } while (puVar10 != (uint64_t *)0x0);
    }
    if ((puVar9 == puVar15) || (*puVar16 < (uint64_t)puVar9[4])) goto LAB_1803c72e4;
  }
  else {
    puVar9 = (uint64_t *)(system_system_data_memory + 0xd8);
    puVar10 = *(uint64_t **)(system_system_data_memory + 0xe8);
    while (puVar10 != (uint64_t *)0x0) {
      if ((uint64_t)puVar10[4] < local_var_138) {
        puVar10 = (uint64_t *)*puVar10;
      }
      else {
        puVar9 = puVar10;
        puVar10 = (uint64_t *)puVar10[1];
      }
    }
    if ((puVar9 == (uint64_t *)(system_system_data_memory + 0xd8)) || (local_var_138 < (uint64_t)puVar9[4])) {
      puVar16 = &local_var_138;
LAB_1803c72e4:
      plocal_var_158 = puVar16;
      puVar9 = (uint64_t *)GenericFunction_1800fc780(system_system_data_memory + 0xd8,&plocal_var_130);
      puVar9 = (uint64_t *)*puVar9;
    }
  }
  plocal_var_140 = (uint64_t *)puVar9[5];
  stack_array_148[0] = 0xb;
  plocal_var_150 = stack_array_148;
  plocal_var_158 = (uint64_t *)CONCAT71(plocal_var_158._1_7_,1);
  (**(code **)(*(int64_t *)*param_1 + 0xb8))((int64_t *)*param_1,&local_var_d8,&plocal_var_140);
  (**(code **)*puVar8)(puVar8);
  aplocal_var_108[0] = (uint64_t *)&system_handler1_ptr;
  ppuVar11 = &plocal_var_128;
LAB_1803c75bf:
  UtilitiesSystem_d84a0(ppuVar11);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_178);
}
uint64_t RenderingSystem_c7600(int64_t param_1,uint64_t *param_2,char param_3,int64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  float *pfVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  lVar5 = *(int64_t *)(param_1 + 0x28);
  puVar3 = *(uint64_t **)(lVar5 + (*param_2 % (uint64_t)*(uint *)(param_1 + 0x30)) * 8);
  do {
    if (puVar3 == (uint64_t *)0x0) {
      lVar2 = *(int64_t *)(param_1 + 0x30);
      puVar3 = *(uint64_t **)(lVar5 + lVar2 * 8);
LAB_1803c765b:
      if (puVar3 != *(uint64_t **)(lVar5 + lVar2 * 8)) {
        puVar6 = (uint64_t *)puVar3[1];
        iVar1 = (int)((int64_t)(puVar3[2] - (int64_t)puVar6) / 0x28);
        if (0 < iVar1) {
          pfVar4 = (float *)(puVar6 + 2);
          lVar5 = 0;
          do {
            if ((((*(char *)(pfVar4 + 5) == param_3) && (*(int64_t *)(pfVar4 + 2) == param_4)) &&
                (pfVar4[4] == *(float *)(param_2 + 10))) &&
               (((ABS(pfVar4[-2] - *(float *)(param_2 + 5)) < 0.01 &&
                 (ABS(pfVar4[-1] - *(float *)((int64_t)param_2 + 0x2c)) < 0.01)) &&
                (ABS(*pfVar4 - *(float *)(param_2 + 6)) < 0.01)))) {
              return *puVar6;
            }
            lVar5 = lVar5 + 1;
            puVar6 = puVar6 + 5;
            pfVar4 = pfVar4 + 10;
          } while (lVar5 < iVar1);
        }
      }
      return 0;
    }
    if (*param_2 == *puVar3) {
      lVar2 = *(int64_t *)(param_1 + 0x30);
      goto LAB_1803c765b;
    }
    puVar3 = (uint64_t *)puVar3[5];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address