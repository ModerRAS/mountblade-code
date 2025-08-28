#include "ultra_high_freq_fun_definitions.h"
#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part078.c - 5 个函数
// 函数: void function_30dcc0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
void function_30dcc0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
                  int param_6,uint64_t param_7,int32_t *param_8)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int32_t uVar10;
  bool bVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  int iVar19;
  int32_t *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int iVar23;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int8_t stack_array_c8 [8];
  uint64_t local_var_c0;
  int64_t *plStack_b0;
  char cStack_a8;
  char cStack_a7;
  char cStack_a6;
  int32_t stack_array_a0 [2];
  int32_t local_var_98;
  int32_t local_var_94;
  int64_t lStack_90;
  int64_t *plStack_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  local_var_70 = 0xfffffffffffffffe;
  uVar22 = 0;
  plStack_e8 = (int64_t *)0x0;
  lStack_90 = 0;
  uVar7 = *(uint64_t *)(param_8 + 0x1c);
  if ((uVar7 != 0) && (uVar8 = *(uint64_t *)(param_8 + 0x1e), uVar8 != 0)) {
    puVar1 = (uint64_t *)(param_1 + 0x1b8);
    puVar16 = *(uint64_t **)(param_1 + 0x1c8);
    puVar17 = puVar1;
    if (puVar16 == (uint64_t *)0x0) {
LAB_18030dd85:
      puVar13 = puVar1;
    }
    else {
      do {
        if (((uint64_t)puVar16[4] < uVar7) ||
           (((uint64_t)puVar16[4] <= uVar7 && ((uint64_t)puVar16[5] < uVar8)))) {
          bVar11 = true;
          puVar18 = (uint64_t *)*puVar16;
        }
        else {
          bVar11 = false;
          puVar18 = (uint64_t *)puVar16[1];
        }
        puVar13 = puVar16;
        if (bVar11) {
          puVar13 = puVar17;
        }
        puVar17 = puVar13;
        puVar16 = puVar18;
      } while (puVar18 != (uint64_t *)0x0);
      if (((puVar13 == puVar1) || (uVar7 < (uint64_t)puVar13[4])) ||
         ((uVar7 <= (uint64_t)puVar13[4] && (uVar8 < (uint64_t)puVar13[5])))) goto LAB_18030dd85;
    }
    if (puVar13 != puVar1) {
      lStack_90 = puVar13[6];
    }
  }
  uVar14 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
  plVar15 = (int64_t *)FileSystem_Operator(uVar14,1);
  plStack_88 = plVar15;
  if (plVar15 != (int64_t *)0x0) {
    plStack_e0 = plVar15;
    (**(code **)(*plVar15 + 0x28))(plVar15);
  }
  plStack_e0 = (int64_t *)0x0;
  plStack_e8 = plVar15;
  (**(code **)(plVar15[2] + 0x10))(plVar15 + 2,&processed_var_4912_ptr);
  function_07ea10(plVar15,1);
  function_07e930(plVar15);
  plStack_d8 = (int64_t *)0x0;
  plStack_d0 = (int64_t *)0x0;
  plStack_e0 = (int64_t *)stack_array_c8;
  plStack_b0 = (int64_t *)0x0;
  local_var_c0 = 0;
  stack_array_c8[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_d8,plVar15,0);
  plStack_e0 = (int64_t *)(int64_t)param_5;
  if (0 < (int64_t)plStack_e0) {
    local_var_78 = 0x41200000;
    local_var_74 = 0x7f7fffff;
    local_var_68 = 0;
    local_var_60 = 0x7f7fffffbf800000;
    stack_array_a0[0] = 0xffffffff;
    puVar20 = (int32_t *)(param_3 + 4);
    do {
      plVar15 = plStack_d0;
      uVar3 = *(int32_t *)((param_2 - param_3) + (int64_t)puVar20);
      uVar4 = *(int32_t *)((param_2 - param_3) + -4 + (int64_t)puVar20);
      local_var_94 = *puVar20;
      local_var_98 = puVar20[-1];
      iVar19 = (int)plStack_d0[2];
      iVar23 = iVar19 + 1;
      iVar5 = *(int *)((int64_t)plStack_d0 + 0x14);
      if (iVar5 < iVar23) {
        if (iVar5 < 2) {
          *(int32_t *)((int64_t)plStack_d0 + 0x14) = 8;
        }
        else {
          *(int *)((int64_t)plStack_d0 + 0x14) = (iVar5 >> 1) + iVar5;
        }
        CoreEngine_DataProcessor(plStack_d0 + 2);
      }
      plVar12 = plStack_d0;
      *(int *)(plVar15 + 2) = iVar23;
      puVar2 = (int32_t *)(plStack_d0[3] + (int64_t)iVar19 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar3;
      puVar2[2] = local_var_78;
      puVar2[3] = local_var_74;
      local_var_80 = uVar4;
      local_var_7c = uVar3;
      if ((int)plStack_d0[7] != 0) {
        iVar5 = *(int *)((int64_t)plStack_d0 + 0x3c);
        if (iVar5 < iVar23) {
          if (iVar5 < 2) {
            *(int32_t *)((int64_t)plStack_d0 + 0x3c) = 8;
          }
          else {
            *(int *)((int64_t)plStack_d0 + 0x3c) = (iVar5 >> 1) + iVar5;
          }
          CoreEngine_DataProcessor(plStack_d0 + 7);
        }
        *(int *)(plVar12 + 7) = iVar23;
        puVar2 = (int32_t *)(plStack_d0[8] + (int64_t)iVar19 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar3;
        puVar2[2] = 0x41200000;
        puVar2[3] = 0x7f7fffff;
      }
      cStack_a8 = '\x01';
      cStack_a6 = '\x01';
      SystemCore_Decoder(&plStack_d8,iVar19,&local_var_98,stack_array_a0,&local_var_68);
      puVar20 = puVar20 + 2;
      plStack_e0 = (int64_t *)((int64_t)plStack_e0 + -1);
    } while (plStack_e0 != (int64_t *)0x0);
    plStack_e0 = (int64_t *)0x0;
    plVar15 = plStack_88;
  }
  iVar19 = param_6 / 3 + (param_6 >> 0x1f) +
           (int)(((int64_t)param_6 / 3 + ((int64_t)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar21 = (int64_t)iVar19;
  if (0 < iVar19) {
    puVar20 = (int32_t *)(param_4 + 4);
    do {
      SystemCore_RenderFrame(&plStack_d8,puVar20[-1],*puVar20,puVar20[1]);
      puVar20 = puVar20 + 3;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  if ((plStack_d8 != (int64_t *)0x0) && (plStack_d0 != (int64_t *)0x0)) {
    if (cStack_a6 != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_c8);
    if (cStack_a8 != '\0') {
      SystemInitializer(plStack_d8);
    }
    if (cStack_a7 != '\0') {
      SystemInitializer(plStack_d8);
    }
    plVar12 = plStack_d0;
    plStack_d0 = (int64_t *)0x0;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_c8);
  if (plStack_b0 != (int64_t *)0x0) {
    (**(code **)(*plStack_b0 + 0x38))();
  }
  if (plStack_d0 != (int64_t *)0x0) {
    (**(code **)(*plStack_d0 + 0x38))();
  }
  if (plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
  lVar21 = lStack_90;
  if (lStack_90 != 0) {
    PhysicsSystem_TriggersProcessor(lStack_90,&plStack_e8);
    *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
    plVar15 = plStack_e8;
LAB_18030e1fe:
    UltraHighFreq_SecurityValidator1(plVar15,param_7);
    uVar6 = param_8[4];
    *(float *)(plVar15 + 0x47) = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
    *(float *)((int64_t)plVar15 + 0x23c) = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
    *(float *)(plVar15 + 0x48) = (float)(uVar6 & 0xff) * 0.003921569;
    *(float *)((int64_t)plVar15 + 0x244) = (float)(uVar6 >> 0x18) * 0.003921569;
    uVar3 = param_8[6];
    uVar4 = param_8[5];
    lVar21 = plVar15[0x59];
    *(int32_t *)(lVar21 + 0xa0) = param_8[0x15];
    *(int32_t *)(lVar21 + 0xa4) = 0;
    *(int32_t *)(lVar21 + 0xa8) = uVar4;
    *(int32_t *)(lVar21 + 0xac) = uVar3;
    uVar22 = *(uint64_t *)(param_8 + 0xe);
    lVar21 = plVar15[0x59];
    *(uint64_t *)(lVar21 + 0x10) = *(uint64_t *)(param_8 + 0xc);
    *(uint64_t *)(lVar21 + 0x18) = uVar22;
    uVar6 = param_8[0x10];
    lVar21 = plVar15[0x59];
    *(float *)(lVar21 + 0x70) = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(lVar21 + 0x74) = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
    *(float *)(lVar21 + 0x78) = (float)(uVar6 & 0xff) * 0.003921569;
    *(float *)(lVar21 + 0x7c) = (float)(uVar6 >> 0x18) * 0.003921569;
    uVar22 = *(uint64_t *)(param_8 + 0x13);
    lVar21 = plVar15[0x59];
    *(uint64_t *)(lVar21 + 0x80) = *(uint64_t *)(param_8 + 0x11);
    *(uint64_t *)(lVar21 + 0x88) = uVar22;
    uVar22 = *(uint64_t *)(param_8 + 0x18);
    lVar21 = plVar15[0x59];
    *(uint64_t *)(lVar21 + 0x90) = *(uint64_t *)(param_8 + 0x16);
    *(uint64_t *)(lVar21 + 0x98) = uVar22;
    uVar3 = param_8[8];
    lVar21 = plVar15[0x59];
    *(int32_t *)(lVar21 + 0x60) = param_8[7];
    *(int32_t *)(lVar21 + 100) = uVar3;
    *(int32_t *)(lVar21 + 0x68) = 0;
    *(int32_t *)(lVar21 + 0x6c) = 0;
    uVar3 = param_8[1];
    uVar4 = *param_8;
    uVar10 = param_8[3];
    lVar21 = plVar15[0x59];
    *(int32_t *)(lVar21 + 0x50) = param_8[2];
    *(int32_t *)(lVar21 + 0x54) = uVar10;
    *(int32_t *)(lVar21 + 0x58) = uVar4;
    *(int32_t *)(lVar21 + 0x5c) = uVar3;
    uVar3 = param_8[10];
    uVar4 = param_8[0xb];
    lVar21 = plVar15[0x59];
    *(int32_t *)(lVar21 + 0x20) = param_8[9];
    *(int32_t *)(lVar21 + 0x24) = uVar3;
    *(int32_t *)(lVar21 + 0x28) = uVar4;
    *(int32_t *)(lVar21 + 0x2c) = 0;
    function_30d6e0(param_1,plVar15,param_8[0x1a]);
// WARNING: Could not recover jumptable at 0x00018030e481. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plVar15 + 0x38))(plVar15);
    return;
  }
  if ((*(int64_t *)(param_8 + 0x1c) == 0) || (*(int64_t *)(param_8 + 0x1e) == 0))
  goto LAB_18030e1fe;
  puVar16 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *(int32_t *)(puVar16 + 3) = 3;
  puVar16[4] = 0;
  puVar1 = (uint64_t *)(param_1 + 0x1b8);
  uVar14 = *(uint64_t *)(param_8 + 0x1c);
  uVar9 = *(uint64_t *)(param_8 + 0x1e);
  plStack_88 = puVar16;
  lVar21 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(param_1 + 0x1e0));
  local_var_f8 = (int32_t)uVar14;
  local_var_f4 = (int32_t)((uint64_t)uVar14 >> 0x20);
  local_var_f0 = (int32_t)uVar9;
  local_var_ec = (int32_t)((uint64_t)uVar9 >> 0x20);
  *(int32_t *)(lVar21 + 0x20) = local_var_f8;
  *(int32_t *)(lVar21 + 0x24) = local_var_f4;
  *(int32_t *)(lVar21 + 0x28) = local_var_f0;
  *(int32_t *)(lVar21 + 0x2c) = local_var_ec;
  *(uint64_t **)(lVar21 + 0x30) = puVar16;
  bVar11 = true;
  puVar16 = puVar1;
  if (*(uint64_t **)(param_1 + 0x1c8) != (uint64_t *)0x0) {
    puVar17 = *(uint64_t **)(param_1 + 0x1c8);
    do {
      puVar16 = puVar17;
      if ((*(uint64_t *)(lVar21 + 0x20) < (uint64_t)puVar16[4]) ||
         ((*(uint64_t *)(lVar21 + 0x20) <= (uint64_t)puVar16[4] &&
          (*(uint64_t *)(lVar21 + 0x28) < (uint64_t)puVar16[5])))) {
        bVar11 = true;
        puVar17 = (uint64_t *)puVar16[1];
      }
      else {
        bVar11 = false;
        puVar17 = (uint64_t *)*puVar16;
      }
    } while (puVar17 != (uint64_t *)0x0);
  }
  puVar17 = puVar16;
  if (bVar11) {
    if (puVar16 == *(uint64_t **)(param_1 + 0x1c0)) goto LAB_18030e1b3;
    puVar17 = (uint64_t *)SystemFunction_00018066b9a0(puVar16);
  }
  if ((*(uint64_t *)(lVar21 + 0x20) <= (uint64_t)puVar17[4]) &&
     ((*(uint64_t *)(lVar21 + 0x20) < (uint64_t)puVar17[4] ||
      (*(uint64_t *)(lVar21 + 0x28) <= (uint64_t)puVar17[5])))) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar21);
  }
LAB_18030e1b3:
  if (puVar16 != puVar1) {
    if (((uint64_t)puVar16[4] <= *(uint64_t *)(lVar21 + 0x20)) &&
       (((uint64_t)puVar16[4] < *(uint64_t *)(lVar21 + 0x20) ||
        ((uint64_t)puVar16[5] <= *(uint64_t *)(lVar21 + 0x28))))) {
      uVar22 = 1;
    }
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar21,puVar16,puVar1,uVar22);
}
uint64_t function_30e490(int64_t param_1,uint64_t param_2,int32_t *param_3)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  uint7 uVar19;
  int32_t *puVar18;
  uint64_t uVar20;
  uVar20 = 0xfffffffffffffffe;
  plVar16 = (int64_t *)0x0;
  uVar5 = *(uint64_t *)(param_3 + 0x1c);
  plVar17 = plVar16;
  if ((uVar5 != 0) && (uVar15 = *(uint64_t *)(param_3 + 0x1e), uVar15 != 0)) {
    puVar1 = (uint64_t *)(param_1 + 0x1b8);
    puVar13 = *(uint64_t **)(param_1 + 0x1c8);
    puVar11 = puVar1;
    puVar18 = param_3;
    if (puVar13 == (uint64_t *)0x0) {
LAB_18030e535:
      puVar12 = puVar1;
    }
    else {
      do {
        uVar6 = puVar13[4];
        uVar19 = (uint7)(uVar6 >> 8);
        if ((uVar6 < uVar5) || ((uVar6 <= uVar5 && ((uint64_t)puVar13[5] < uVar15)))) {
          puVar18 = (int32_t *)CONCAT71(uVar19,1);
          puVar14 = (uint64_t *)*puVar13;
        }
        else {
          puVar18 = (int32_t *)((uint64_t)uVar19 << 8);
          puVar14 = (uint64_t *)puVar13[1];
        }
        puVar12 = puVar13;
        if ((char)puVar18 != '\0') {
          puVar12 = puVar11;
        }
        puVar11 = puVar12;
        puVar13 = puVar14;
      } while (puVar14 != (uint64_t *)0x0);
      if (((puVar12 == puVar1) || (uVar5 < (uint64_t)puVar12[4])) ||
         ((uVar5 <= (uint64_t)puVar12[4] && (uVar15 < (uint64_t)puVar12[5])))) goto LAB_18030e535;
    }
    if ((puVar12 != puVar1) &&
       (plVar7 = (int64_t *)puVar12[6], plVar17 = (int64_t *)0x0, plVar7 != (int64_t *)0x0)) {
      uVar15 = (uint64_t)(int)plVar7[4];
      if (uVar15 < (uint64_t)(plVar7[1] - *plVar7 >> 3)) {
        plVar16 = *(int64_t **)(*plVar7 + uVar15 * 8);
        if (plVar16 != (int64_t *)0x0) {
          (**(code **)(*plVar16 + 0x28))(plVar16,uVar15,puVar18,uVar5,0xfffffffffffffffe);
        }
        *(int *)(plVar7 + 4) = (int)plVar7[4] + 1;
      }
      *(int32_t *)((int64_t)plVar7 + 0x24) = 0;
      plVar17 = plVar16;
      if (plVar16 != (int64_t *)0x0) {
        UltraHighFreq_SecurityValidator1(plVar16,param_2);
        uVar4 = param_3[4];
        *(float *)(plVar16 + 0x47) = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
        *(float *)((int64_t)plVar16 + 0x23c) = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
        *(float *)(plVar16 + 0x48) = (float)(uVar4 & 0xff) * 0.003921569;
        *(float *)((int64_t)plVar16 + 0x244) = (float)(uVar4 >> 0x18) * 0.003921569;
        uVar2 = param_3[6];
        uVar3 = param_3[5];
        lVar8 = plVar16[0x59];
        *(int32_t *)(lVar8 + 0xa0) = param_3[0x15];
        *(int32_t *)(lVar8 + 0xa4) = 0;
        *(int32_t *)(lVar8 + 0xa8) = uVar3;
        *(int32_t *)(lVar8 + 0xac) = uVar2;
        uVar10 = *(uint64_t *)(param_3 + 0xe);
        lVar8 = plVar16[0x59];
        *(uint64_t *)(lVar8 + 0x10) = *(uint64_t *)(param_3 + 0xc);
        *(uint64_t *)(lVar8 + 0x18) = uVar10;
        uVar4 = param_3[0x10];
        lVar8 = plVar16[0x59];
        *(float *)(lVar8 + 0x70) = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(lVar8 + 0x74) = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
        *(float *)(lVar8 + 0x78) = (float)(uVar4 & 0xff) * 0.003921569;
        *(float *)(lVar8 + 0x7c) = (float)(uVar4 >> 0x18) * 0.003921569;
        uVar10 = *(uint64_t *)(param_3 + 0x13);
        lVar8 = plVar16[0x59];
        *(uint64_t *)(lVar8 + 0x80) = *(uint64_t *)(param_3 + 0x11);
        *(uint64_t *)(lVar8 + 0x88) = uVar10;
        uVar10 = *(uint64_t *)(param_3 + 0x18);
        lVar8 = plVar16[0x59];
        *(uint64_t *)(lVar8 + 0x90) = *(uint64_t *)(param_3 + 0x16);
        *(uint64_t *)(lVar8 + 0x98) = uVar10;
        uVar2 = param_3[8];
        lVar8 = plVar16[0x59];
        *(int32_t *)(lVar8 + 0x60) = param_3[7];
        *(int32_t *)(lVar8 + 100) = uVar2;
        *(int32_t *)(lVar8 + 0x68) = 0;
        *(int32_t *)(lVar8 + 0x6c) = 0;
        uVar2 = param_3[1];
        uVar3 = *param_3;
        uVar9 = param_3[3];
        uVar10 = *(uint64_t *)(param_3 + 2);
        lVar8 = plVar16[0x59];
        *(int32_t *)(lVar8 + 0x50) = param_3[2];
        *(int32_t *)(lVar8 + 0x54) = uVar9;
        *(int32_t *)(lVar8 + 0x58) = uVar3;
        *(int32_t *)(lVar8 + 0x5c) = uVar2;
        uVar2 = param_3[0xb];
        uVar3 = param_3[10];
        uVar9 = param_3[0xb];
        lVar8 = plVar16[0x59];
        *(int32_t *)(lVar8 + 0x20) = param_3[9];
        *(int32_t *)(lVar8 + 0x24) = uVar3;
        *(int32_t *)(lVar8 + 0x28) = uVar9;
        *(int32_t *)(lVar8 + 0x2c) = 0;
        function_30d6e0(param_1,plVar16,param_3[0x1a],uVar2,uVar20,uVar10);
        uVar20 = 1;
        goto LAB_18030e7dc;
      }
    }
  }
  uVar20 = 0;
LAB_18030e7dc:
  if (plVar17 != (int64_t *)0x0) {
    (**(code **)(*plVar17 + 0x38))(plVar17);
  }
  return uVar20;
}
// 函数: void function_30e800(int64_t param_1)
void function_30e800(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  lVar1 = *(int64_t *)(param_1 + 0x130);
  uVar8 = 0;
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (*(int64_t *)(param_1 + 0x138) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(int64_t *)(uVar6 + lVar1);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(int64_t *)(lVar1 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(int8_t *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar1 = *(int64_t *)(param_1 + 0x130);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x138) - lVar1 >> 3));
  }
  lVar1 = *(int64_t *)(param_1 + 0x150);
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (*(int64_t *)(param_1 + 0x158) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(int64_t *)(uVar6 + lVar1);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(int64_t *)(lVar1 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(int8_t *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar1 = *(int64_t *)(param_1 + 0x150);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x158) - lVar1 >> 3));
  }
  lVar1 = *(int64_t *)(param_1 + 0x178);
  lVar2 = *(int64_t *)(param_1 + 0x170);
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (lVar1 - lVar2 >> 3 != 0) {
    do {
      lVar1 = *(int64_t *)(uVar6 + lVar2);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(int64_t *)(lVar1 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(int8_t *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar1 = *(int64_t *)(param_1 + 0x178);
      uVar3 = (int)uVar4 + 1;
      lVar2 = *(int64_t *)(param_1 + 0x170);
      uVar4 = (uint64_t)uVar3;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(lVar1 - lVar2 >> 3));
  }
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (lVar1 - lVar2 >> 3 != 0) {
    do {
      lVar1 = *(int64_t *)(uVar6 + lVar2);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(int64_t *)(lVar1 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(int8_t *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar2 = *(int64_t *)(param_1 + 0x170);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x178) - lVar2 >> 3));
  }
  lVar1 = **(int64_t **)(param_1 + 0x110);
  uVar4 = uVar8;
  uVar6 = uVar8;
  if ((*(int64_t **)(param_1 + 0x110))[1] - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(int64_t *)(lVar1 + uVar6);
      lVar2 = *(int64_t *)(lVar1 + 8);
      uVar5 = uVar8;
      uVar7 = uVar8;
      if (*(int64_t *)(lVar1 + 0x10) - lVar2 >> 3 != 0) {
        do {
          lVar2 = *(int64_t *)(uVar7 + lVar2);
          if (*(char *)(lVar2 + 0xf9) != '\0') {
            if (*(int64_t *)(lVar2 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *(uint64_t *)(lVar2 + 0x1d8) = 0;
            LOCK();
            *(int8_t *)(lVar2 + 0xf9) = 0;
            UNLOCK();
          }
          lVar2 = *(int64_t *)(lVar1 + 8);
          uVar3 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar3;
          uVar7 = uVar7 + 8;
        } while ((uint64_t)(int64_t)(int)uVar3 <
                 (uint64_t)(*(int64_t *)(lVar1 + 0x10) - lVar2 >> 3));
      }
      uVar3 = (int)uVar4 + 1;
      lVar1 = **(int64_t **)(param_1 + 0x110);
      uVar4 = (uint64_t)uVar3;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)((*(int64_t **)(param_1 + 0x110))[1] - lVar1 >> 3));
  }
  return;
}
// 函数: void function_30ea24(uint64_t param_1,int64_t param_2)
void function_30ea24(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int unaff_R12D;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  uint64_t uVar6;
  uVar6 = unaff_R13;
  do {
    lVar1 = *(int64_t *)(param_2 + uVar6);
    uVar4 = unaff_R13 & 0xffffffff;
    lVar2 = *(int64_t *)(lVar1 + 8);
    uVar5 = unaff_R13;
    if (*(int64_t *)(lVar1 + 0x10) - lVar2 >> 3 != 0) {
      do {
        lVar2 = *(int64_t *)(uVar5 + lVar2);
        if (*(char *)(lVar2 + 0xf9) != '\0') {
          if (*(int64_t *)(lVar2 + 0x1d8) != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *(uint64_t *)(lVar2 + 0x1d8) = unaff_R13;
          LOCK();
          *(char *)(lVar2 + 0xf9) = (char)unaff_R13;
          UNLOCK();
        }
        lVar2 = *(int64_t *)(lVar1 + 8);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        uVar5 = uVar5 + 8;
      } while ((uint64_t)(int64_t)(int)uVar3 <
               (uint64_t)(*(int64_t *)(lVar1 + 0x10) - lVar2 >> 3));
    }
    unaff_R12D = unaff_R12D + 1;
    uVar6 = uVar6 + 8;
    param_2 = **(int64_t **)(unaff_R14 + 0x110);
  } while ((uint64_t)(int64_t)unaff_R12D <
           (uint64_t)((*(int64_t **)(unaff_R14 + 0x110))[1] - param_2 >> 3));
  return;
}
// 函数: void function_30eacf(void)
void function_30eacf(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_30eaf0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
void function_30eaf0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
                  int param_6,uint64_t param_7,int64_t param_8)
{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int iVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int iVar12;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int8_t stack_array_b8 [8];
  uint64_t local_var_b0;
  int64_t *plStack_a0;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  int64_t *plStack_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  local_var_70 = 0xfffffffffffffffe;
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
  plVar8 = (int64_t *)FileSystem_Operator(uVar7,1);
  plStack_90 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  (**(code **)(plVar8[2] + 0x10))(plVar8 + 2,&processed_var_4976_ptr);
  if (*(char *)((int64_t)plVar8 + 0xfb) != '\x01') {
    *(int8_t *)((int64_t)plVar8 + 0xfb) = 1;
    SystemInitializer(plVar8);
  }
  if (*(char *)((int64_t)plVar8 + 0xfa) != '\x01') {
    *(int8_t *)((int64_t)plVar8 + 0xfa) = 1;
    SystemInitializer(plVar8);
  }
  plStack_c8 = (int64_t *)0x0;
  plStack_c0 = (int64_t *)0x0;
  local_var_88 = stack_array_b8;
  plStack_a0 = (int64_t *)0x0;
  local_var_b0 = 0;
  stack_array_b8[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_c8,plVar8,0);
  lVar11 = (int64_t)param_5;
  if (0 < lVar11) {
    local_var_78 = 0x41200000;
    local_var_74 = 0x7f7fffff;
    local_var_68 = 0;
    local_var_60 = 0x7f7fffffbf800000;
    param_5 = -1;
    puVar10 = (int32_t *)(param_3 + 4);
    do {
      plVar8 = plStack_c0;
      uVar2 = *(int32_t *)((param_2 - param_3) + (int64_t)puVar10);
      uVar3 = *(int32_t *)((param_2 - param_3) + -4 + (int64_t)puVar10);
      local_var_88 = (int8_t *)CONCAT44(*puVar10,puVar10[-1]);
      iVar9 = (int)plStack_c0[2];
      iVar12 = iVar9 + 1;
      iVar4 = *(int *)((int64_t)plStack_c0 + 0x14);
      if (iVar4 < iVar12) {
        if (iVar4 < 2) {
          *(int32_t *)((int64_t)plStack_c0 + 0x14) = 8;
        }
        else {
          *(int *)((int64_t)plStack_c0 + 0x14) = (iVar4 >> 1) + iVar4;
        }
        CoreEngine_DataProcessor(plStack_c0 + 2);
      }
      plVar6 = plStack_c0;
      *(int *)(plVar8 + 2) = iVar12;
      puVar1 = (int32_t *)(plStack_c0[3] + (int64_t)iVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar2;
      puVar1[2] = local_var_78;
      puVar1[3] = local_var_74;
      local_var_80 = uVar3;
      local_var_7c = uVar2;
      if ((int)plStack_c0[7] != 0) {
        iVar4 = *(int *)((int64_t)plStack_c0 + 0x3c);
        if (iVar4 < iVar12) {
          if (iVar4 < 2) {
            *(int32_t *)((int64_t)plStack_c0 + 0x3c) = 8;
          }
          else {
            *(int *)((int64_t)plStack_c0 + 0x3c) = (iVar4 >> 1) + iVar4;
          }
          CoreEngine_DataProcessor(plStack_c0 + 7);
        }
        *(int *)(plVar6 + 7) = iVar12;
        puVar1 = (int32_t *)(plStack_c0[8] + (int64_t)iVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        puVar1[2] = 0x41200000;
        puVar1[3] = 0x7f7fffff;
      }
      cStack_98 = '\x01';
      cStack_96 = '\x01';
      SystemCore_Decoder(&plStack_c8,iVar9,&local_var_88,&param_5,&local_var_68);
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      plVar8 = plStack_90;
    } while (lVar11 != 0);
  }
  iVar9 = param_6 / 3 + (param_6 >> 0x1f) +
          (int)(((int64_t)param_6 / 3 + ((int64_t)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar11 = (int64_t)iVar9;
  if (0 < iVar9) {
    puVar10 = (int32_t *)(param_4 + 4);
    do {
      SystemCore_RenderFrame(&plStack_c8,puVar10[-1],*puVar10,puVar10[1]);
      puVar10 = puVar10 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((plStack_c8 != (int64_t *)0x0) && (plStack_c0 != (int64_t *)0x0)) {
    if (cStack_96 != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_b8);
    if (cStack_98 != '\0') {
      SystemInitializer(plStack_c8);
    }
    if (cStack_97 != '\0') {
      SystemInitializer(plStack_c8);
    }
    plVar6 = plStack_c0;
    plStack_c0 = (int64_t *)0x0;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_b8);
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  if (plStack_c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  UltraHighFreq_SecurityValidator1(plVar8,param_7);
  lVar11 = param_8;
  uVar5 = *(uint *)(param_8 + 0x20);
  *(float *)(plVar8 + 0x47) = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
  *(float *)((int64_t)plVar8 + 0x23c) = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
  *(float *)(plVar8 + 0x48) = (float)(uVar5 & 0xff) * 0.003921569;
  *(float *)((int64_t)plVar8 + 0x244) = (float)(uVar5 >> 0x18) * 0.003921569;
  if (plVar8[0x59] != 0) {
    function_30ef70(uVar5,plVar8,param_8);
    PhysicsSystem_TriggersProcessor((int64_t)*(int *)(param_1 + 0x124) * 0x20 + 0x170 + param_1,&plStack_90);
    plVar8 = plStack_90;
    function_30d6e0(param_1,plStack_90,*(int32_t *)(lVar11 + 0x60));
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    return;
  }
  *(uint *)(plVar8 + 0x20) = *(uint *)(plVar8 + 0x20) | 8;
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,4,9);
// WARNING: Subroutine does not return
  memset(uVar7,0,0xd0);
}