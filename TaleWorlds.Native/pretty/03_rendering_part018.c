#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part018.c - 3 个函数
// 函数: void DataStructure_78270(int64_t param_1)
void DataStructure_78270(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  iVar6 = 1;
  if (1 < *(int *)(param_1 + 0x58)) {
    do {
      uVar4 = *(uint64_t *)(param_1 + 0x38);
      uVar1 = *(uint64_t *)(param_1 + 0x40);
      uVar8 = 1 << ((byte)iVar6 & 0x1f);
      iVar7 = 0;
      uVar5 = uVar4;
      if (uVar4 < uVar1) {
        do {
          iVar3 = iVar7 + 1;
          if ((*(uint *)(uVar5 + 8) & uVar8) == 0) {
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
          uVar5 = uVar5 + 0x10;
        } while (uVar5 < uVar1);
        if (iVar7 == 0) goto LAB_1802782bc;
      }
      else {
LAB_1802782bc:
        if (uVar4 < uVar1) {
          do {
            if ((1 << ((byte)iVar6 - 1 & 0x1f) & *(uint *)(uVar4 + 8)) != 0) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | uVar8;
            }
            uVar4 = uVar4 + 0x10;
          } while (uVar4 < *(uint64_t *)(param_1 + 0x40));
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x58));
  }
  lVar2 = *(int64_t *)(param_1 + 0x28);
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
    lVar2 = *(int64_t *)(lVar2 + 0x168);
    if (lVar2 != 0) {
      *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
      for (lVar2 = *(int64_t *)(lVar2 + 0x168); lVar2 != 0; lVar2 = *(int64_t *)(lVar2 + 0x168)) {
        *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
      }
      return;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_786d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void DataStructure_786d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  *(int8_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x330) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x338) = 0;
  *(uint64_t *)(param_1 + 0x340) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x348) = 0;
  *(uint64_t *)(param_1 + 0x350) = 0;
  *(uint64_t *)(param_1 + 0x358) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x360) = 0;
  *(uint64_t *)(param_1 + 0x368) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x370) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x378) = 0;
  *(uint64_t *)(param_1 + 0x380) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x388) = 0;
  *(int32_t *)(param_1 + 0x390) = 0;
  *(int32_t *)(param_1 + 0x394) = 0;
  *(int32_t *)(param_1 + 0x398) = 0x3f800000;
  *(int32_t *)(param_1 + 0x39c) = 0;
  *(int32_t *)(param_1 + 0x3a0) = 0;
  *(int32_t *)(param_1 + 0x3a4) = 0;
  *(int32_t *)(param_1 + 0x3a8) = 0;
  *(int32_t *)(param_1 + 0x3ac) = 0x3f800000;
  *(int8_t *)(param_1 + 0x3b0) = 0xff;
  *(int8_t *)(param_1 + 800) = 1;
  *(int32_t *)(param_1 + 0x210) = 0x21;
  *(int8_t *)(param_1 + 0x3c0) = 0;
  *(int32_t *)(param_1 + 0x328) = 0xffffffff;
  *(int32_t *)(param_1 + 0x3c4) = 0;
  *(int32_t *)(param_1 + 0x324) = 0;
  *(int8_t *)(param_1 + 0x32c) = 0;
  *(int32_t *)(param_1 + 0x68) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x7c) = 0;
  plVar1 = *(int64_t **)(param_1 + 0x3b8);
  *(uint64_t *)(param_1 + 0x3b8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0,param_3,param_4,0xfffffffffffffffe);
  }
  *(int32_t *)(param_1 + 0x248) = 0xffffffff;
  plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,0x1e);
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&processed_var_9184_ptr;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(int32_t *)(plVar2 + 2) = 0;
  *(int32_t *)(plVar2 + 5) = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar1 = *(int64_t **)(param_1 + 0x3c8);
  *(int64_t **)(param_1 + 0x3c8) = plVar2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x322) = 0;
  *(int32_t *)(param_1 + 0x3b4) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_78870(int64_t param_1,int64_t param_2,int64_t param_3)
void DataStructure_78870(int64_t param_1,int64_t param_2,int64_t param_3)
{
  char *pcVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void *puVar10;
  int64_t *plVar11;
  uint64_t *puVar12;
  char *pcVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t stack_array_358 [32];
  int32_t local_var_338;
  int32_t local_var_334;
  int64_t lStack_330;
  uint64_t local_var_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  uint64_t local_var_310;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  int32_t local_var_2fc;
  int64_t lStack_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  int32_t local_var_2d8;
  int32_t local_var_2d4;
  int32_t local_var_2d0;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  int64_t *aplStack_2b0 [2];
  int64_t *plStack_2a0;
  int32_t local_var_298;
  int32_t local_var_294;
  int32_t local_var_290;
  int32_t local_var_28c;
  int32_t local_var_288;
  int32_t local_var_284;
  int32_t local_var_280;
  int32_t local_var_27c;
  uint64_t local_var_278;
  uint64_t local_var_270;
  uint64_t local_var_268;
  uint64_t local_var_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t local_var_24c;
  uint64_t local_var_248;
  int32_t local_var_240;
  int32_t local_var_23c;
  int32_t local_var_238;
  int32_t local_var_234;
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [136];
  void *plocal_var_188;
  void *plocal_var_180;
  int32_t local_var_178;
  uint8_t stack_array_170 [136];
  uint64_t local_var_e8;
  local_var_248 = 0xfffffffffffffffe;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_358;
  plVar11 = (int64_t *)0x0;
  plocal_var_228 = &memory_allocator_3432_ptr;
  plocal_var_220 = stack_array_210;
  local_var_218 = 0;
  stack_array_210[0] = 0;
  pcVar14 = "material";
  do {
    pcVar13 = pcVar14;
    pcVar14 = pcVar13 + 1;
  } while (*pcVar14 != '\0');
  puVar5 = *(uint64_t **)(param_3 + 0x40);
  do {
    lStack_330 = param_3;
    local_var_2e8 = param_2;
    if (puVar5 == (uint64_t *)0x0) {
LAB_180278a68:
      puVar5 = *(uint64_t **)(lStack_330 + 0x30);
      if (puVar5 == (uint64_t *)0x0) {
LAB_18027916b:
        lVar8 = lStack_330;
        local_var_334 = 0;
        lVar7 = SystemCore_DataManager(lStack_330,&processed_var_8904_ptr);
        if (lVar7 != 0) {
          pcVar14 = (char *)0x180d48d24;
          if (*(char **)(lVar7 + 8) != (char *)0x0) {
            pcVar14 = *(char **)(lVar7 + 8);
          }
          uVar9 = 0xffffffffffffffff;
          do {
            uVar9 = uVar9 + 1;
          } while (pcVar14[uVar9] != '\0');
          if (((uVar9 < 3) || (*pcVar14 != '0')) ||
             (puVar10 = &processed_var_5412_ptr, (pcVar14[1] + 0xa8U & 0xdf) != 0)) {
            puVar10 = &rendering_buffer_2208_ptr;
          }
          AdvancedSystemOptimizer(pcVar14,puVar10,&local_var_334);
          puVar4 = (int32_t *)RenderingSystem_9ffc0(param_1);
          *puVar4 = 0;
          puVar4[2] = local_var_334;
          plVar2 = *(int64_t **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar7 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar7 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (int64_t *)(uVar9 + *plVar2);
          }
          plVar6[2] = (int64_t)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(int64_t *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t *)(param_2 + 0x20) = *(int64_t *)(param_2 + 0x20) + 1;
        }
        lVar7 = SystemCore_DataManager(lVar8,&processed_var_8928_ptr);
        if (lVar7 != 0) {
          lVar8 = 0x180d48d24;
          if (*(int64_t *)(lVar7 + 8) != 0) {
            lVar8 = *(int64_t *)(lVar7 + 8);
          }
          (**(code **)(plocal_var_228 + 0x10))(&plocal_var_228,lVar8);
          puVar4 = (int32_t *)RenderingSystem_9ffc0(param_1);
          *puVar4 = 2;
          puVar5 = (uint64_t *)SystemCore_PerformanceMonitor(system_resource_state,&plStack_2a0,&plocal_var_228,1);
          *(uint64_t *)(puVar4 + 2) = *puVar5;
          if (plStack_2a0 != (int64_t *)0x0) {
            (**(code **)(*plStack_2a0 + 0x38))();
          }
          plVar2 = *(int64_t **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (int64_t *)(uVar9 + *plVar2);
          }
          plVar6[2] = (int64_t)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(int64_t *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t *)(param_2 + 0x20) = *(int64_t *)(param_2 + 0x20) + 1;
          lVar8 = lStack_330;
        }
        local_var_328 = 0x3f800000;
        local_var_320 = 0;
        local_var_318 = 0x3f80000000000000;
        local_var_310 = 0;
        fStack_308 = 0.0;
        fStack_304 = 0.0;
        fStack_300 = 1.0;
        local_var_2fc = 0;
        lStack_2f8 = 0;
        local_var_2f0 = 0x3f80000000000000;
        local_var_288 = 0;
        local_var_284 = 0;
        local_var_280 = 0;
        local_var_27c = 0x3f800000;
        CoreEngine_1C1720(&local_var_328,&local_var_2d8);
        RenderingSystem_LightSystem(&local_var_328,&fStack_2c8);
        lVar7 = StringProcessor(lVar8,&processed_var_8872_ptr,&local_var_288);
        if (((lVar7 != 0) || (lVar7 = StringProcessor(lVar8,&processed_var_8888_ptr,&local_var_2d8), lVar7 != 0))
           || (lVar7 = StringProcessor(lVar8,&processed_var_8408_ptr,&fStack_2c8), lVar7 != 0)) {
          lStack_2f8 = CONCAT44(local_var_284,local_var_288);
          local_var_2f0 = CONCAT44(local_var_27c,local_var_280);
          local_var_278 = 0x3f800000;
          local_var_270 = 0;
          local_var_268 = 0x3f80000000000000;
          local_var_260 = 0;
          fStack_258 = 0.0;
          fStack_254 = 0.0;
          fStack_250 = 1.0;
          local_var_24c = 0;
          local_var_2e8 = lStack_2f8;
          local_var_2e0 = local_var_2f0;
          GenericFunction_180085c10(&local_var_278,local_var_2d0);
          GenericFunction_180085970(&local_var_278,local_var_2d8);
          GenericFunction_180085ac0(&local_var_278,local_var_2d4);
          uVar3 = local_var_270._4_4_;
          local_var_318 = local_var_268;
          local_var_310._0_4_ = (float)local_var_260;
          local_var_310._4_4_ = local_var_260._4_4_;
          fStack_308 = fStack_258;
          fStack_304 = fStack_254;
          fStack_300 = fStack_250;
          local_var_2fc = local_var_24c;
          fVar18 = (float)local_var_278 * fStack_2c8;
          fVar21 = local_var_278._4_4_ * fStack_2c8;
          fVar19 = (float)local_var_270 * fStack_2c8;
          fVar15 = (float)local_var_268 * fStack_2c4;
          fVar17 = local_var_268._4_4_ * fStack_2c4;
          fVar20 = (float)local_var_310 * fStack_2c4;
          fVar16 = fStack_258 * fStack_2c0;
          fVar22 = fStack_254 * fStack_2c0;
          fVar23 = fStack_250 * fStack_2c0;
          puVar4 = (int32_t *)RenderingSystem_9ffc0(param_1);
          *puVar4 = 3;
          local_var_328 = CONCAT44(fVar21,fVar18);
          local_var_320 = CONCAT44(uVar3,fVar19);
          puVar4[2] = fVar18;
          puVar4[3] = fVar21;
          puVar4[4] = fVar19;
          puVar4[5] = uVar3;
          local_var_318 = CONCAT44(fVar17,fVar15);
          local_var_310 = CONCAT44(local_var_310._4_4_,fVar20);
          puVar4[6] = fVar15;
          puVar4[7] = fVar17;
          puVar4[8] = fVar20;
          puVar4[9] = local_var_310._4_4_;
          puVar4[10] = fVar16;
          puVar4[0xb] = fVar22;
          puVar4[0xc] = fVar23;
          puVar4[0xd] = local_var_2fc;
          puVar4[0xe] = (int32_t)local_var_2e8;
          puVar4[0xf] = local_var_2e8._4_4_;
          puVar4[0x10] = (int32_t)local_var_2e0;
          puVar4[0x11] = local_var_2e0._4_4_;
          plVar2 = *(int64_t **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar7 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar7 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (int64_t *)(uVar9 + *plVar2);
          }
          plVar6[2] = (int64_t)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(int64_t *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t *)(param_2 + 0x20) = *(int64_t *)(param_2 + 0x20) + 1;
          fStack_308 = fVar16;
          fStack_304 = fVar22;
          fStack_300 = fVar23;
        }
        lVar8 = UtilitiesSystem_31b90(lVar8,&processed_var_8848_ptr,&local_var_240);
        if (lVar8 != 0) {
          puVar4 = (int32_t *)RenderingSystem_9ffc0(param_1);
          *puVar4 = 4;
          puVar4[0x42] = local_var_240;
          puVar4[0x43] = local_var_23c;
          puVar4[0x44] = local_var_238;
          puVar4[0x45] = local_var_234;
          plVar2 = *(int64_t **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar11 = (int64_t *)(*plVar2 + uVar9);
          }
          plVar11[2] = (int64_t)puVar4;
          *plVar11 = param_2 + 8;
          plVar11[1] = *(int64_t *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar11;
          *(int64_t **)(param_2 + 0x10) = plVar11;
          *(int64_t *)(param_2 + 0x20) = *(int64_t *)(param_2 + 0x20) + 1;
        }
        plocal_var_228 = &system_state_ptr;
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_358);
      }
      plocal_var_188 = &memory_allocator_3432_ptr;
      plocal_var_180 = stack_array_170;
      local_var_178 = 0;
      stack_array_170[0] = 0;
LAB_180278aab:
      do {
        pcVar14 = "name";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (int64_t *)puVar12[2];
          }
          if (plVar6 == (int64_t *)(pcVar13 + -0x180a03a83)) {
            pcVar1 = (char *)((int64_t)plVar6 + (int64_t)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278b10:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              (**(code **)(plocal_var_188 + 0x10))(&plocal_var_188,lVar8);
              break;
            }
            lVar8 = (int64_t)&system_data_3a84 - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278b10;
            }
          }
        }
        local_var_338 = 0;
        pcVar14 = "material";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (int64_t *)puVar12[2];
          }
          if (plVar6 == (int64_t *)(pcVar13 + -0x180a04ebf)) {
            pcVar1 = (char *)((int64_t)plVar6 + (int64_t)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278ba0:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              (**(code **)(plocal_var_228 + 0x10))(&plocal_var_228,lVar8);
              plVar2 = *(int64_t **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (int64_t *)(*plVar2 + uVar9);
              }
// WARNING: Subroutine does not return
              memset((void *)((int64_t)plVar11 + 4),0,0x114);
            }
            lVar8 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278ba0;
            }
          }
        }
        pcVar14 = "factor";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (int64_t *)puVar12[2];
          }
          if (plVar6 == (int64_t *)(pcVar13 + -0x180a1674b)) {
            pcVar1 = (char *)((int64_t)plVar6 + (int64_t)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278d28:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              AdvancedSystemOptimizer(lVar8,&rendering_buffer_2208_ptr,&local_var_338);
              plVar2 = *(int64_t **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (int64_t *)(*plVar2 + uVar9);
              }
// WARNING: Subroutine does not return
              memset((void *)((int64_t)plVar11 + 4),0,0x114);
            }
            lVar8 = (int64_t)&processed_var_8684_ptr - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278d28;
            }
          }
        }
        pcVar14 = "factor2";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (int64_t *)puVar12[2];
          }
          if (plVar6 == (int64_t *)(pcVar13 + -0x180a167ff)) {
            pcVar1 = (char *)((int64_t)plVar6 + (int64_t)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278e70:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              AdvancedSystemOptimizer(lVar8,&rendering_buffer_2208_ptr,&local_var_338);
              plVar2 = *(int64_t **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (int64_t *)(*plVar2 + uVar9);
              }
// WARNING: Subroutine does not return
              memset((void *)((int64_t)plVar11 + 4),0,0x114);
            }
            lVar8 = (int64_t)&processed_var_8864_ptr - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278e70;
            }
          }
        }
        lVar8 = UtilitiesSystem_31b90(puVar5,&processed_var_8832_ptr,&local_var_298);
        if (lVar8 != 0) {
          plVar2 = *(int64_t **)(param_1 + 0x50);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x128;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          if (uVar9 + 0x118 < 0x2000000) {
            plVar11 = (int64_t *)(*plVar2 + uVar9);
          }
// WARNING: Subroutine does not return
          memset((void *)((int64_t)plVar11 + 4),0,0x114);
        }
        lVar8 = UtilitiesSystem_31b90(puVar5,&processed_var_8848_ptr,&local_var_298);
        if (lVar8 != 0) {
          puVar4 = (int32_t *)RenderingSystem_9ffc0(param_1);
          *puVar4 = 9;
          puVar4[0x42] = local_var_298;
          puVar4[0x43] = local_var_294;
          puVar4[0x44] = local_var_290;
          puVar4[0x45] = local_var_28c;
          puVar10 = &system_buffer_ptr;
          if (plocal_var_180 != (void *)0x0) {
            puVar10 = plocal_var_180;
          }
          strcpy_s(puVar4 + 2,0x80,puVar10);
          plVar2 = *(int64_t **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (int64_t *)(uVar9 + *plVar2);
          }
          plVar6[2] = (int64_t)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(int64_t *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t **)(param_2 + 0x10) = plVar6;
          *(int64_t *)(param_2 + 0x20) = *(int64_t *)(param_2 + 0x20) + 1;
        }
        pcVar14 = "mesh";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        while( true ) {
          do {
            puVar5 = (uint64_t *)puVar5[0xb];
            if (puVar5 == (uint64_t *)0x0) {
              plocal_var_188 = &system_state_ptr;
              goto LAB_18027916b;
            }
            pcVar14 = (char *)*puVar5;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              plVar6 = plVar11;
            }
            else {
              plVar6 = (int64_t *)puVar5[2];
            }
          } while (plVar6 != (int64_t *)(pcVar13 + -0x180a0f3e7));
          pcVar1 = (char *)((int64_t)plVar6 + (int64_t)pcVar14);
          if (pcVar1 <= pcVar14) break;
          lVar8 = (int64_t)&processed_var_9144_ptr - (int64_t)pcVar14;
          while (*pcVar14 == pcVar14[lVar8]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar1 <= pcVar14) goto LAB_180278aab;
          }
        }
      } while( true );
    }
    pcVar14 = (char *)*puVar5;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      plVar6 = plVar11;
    }
    else {
      plVar6 = (int64_t *)puVar5[2];
    }
    if (plVar6 == (int64_t *)(pcVar13 + -0x180a04ebf)) {
      pcVar1 = (char *)((int64_t)plVar6 + (int64_t)pcVar14);
      if (pcVar1 <= pcVar14) {
LAB_1802789a4:
        lVar8 = 0x180d48d24;
        if (puVar5[1] != 0) {
          lVar8 = puVar5[1];
        }
        GenericFunction_18004a180(&plocal_var_228,lVar8);
        puVar4 = (int32_t *)RenderingSystem_9ffc0(param_1);
        *puVar4 = 1;
        puVar5 = (uint64_t *)SystemCore_PerformanceMonitor(system_resource_state,aplStack_2b0,&plocal_var_228,1);
        *(uint64_t *)(puVar4 + 2) = *puVar5;
        if (aplStack_2b0[0] != (int64_t *)0x0) {
          (**(code **)(*aplStack_2b0[0] + 0x38))();
        }
        plVar2 = *(int64_t **)(param_2 + 0x18);
        LOCK();
        plVar6 = plVar2 + 1;
        lVar8 = *plVar6;
        *plVar6 = *plVar6 + 0x28;
        UNLOCK();
        uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
        plVar6 = plVar11;
        if (uVar9 + 0x18 < 0x2000000) {
          plVar6 = (int64_t *)(uVar9 + *plVar2);
        }
        plVar6[2] = (int64_t)puVar4;
        *plVar6 = param_2 + 8;
        plVar6[1] = *(int64_t *)(param_2 + 0x10);
        **(uint64_t **)(param_2 + 0x10) = plVar6;
        *(int64_t **)(param_2 + 0x10) = plVar6;
        *(int64_t *)(param_2 + 0x20) = *(int64_t *)(param_2 + 0x20) + 1;
        goto LAB_180278a68;
      }
      lVar8 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar14;
      while (*pcVar14 == pcVar14[lVar8]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar1 <= pcVar14) goto LAB_1802789a4;
      }
    }
    puVar5 = (uint64_t *)puVar5[6];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address