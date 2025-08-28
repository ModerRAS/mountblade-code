#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part519.c - 11 个函数
// 函数: void NetworkSystem_48ce0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
void NetworkSystem_48ce0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
                  int64_t *param_5,char param_6,char param_7)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  float fVar14;
  uint64_t stack_special_x_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  int64_t alStack_e8 [3];
  int32_t local_var_d0;
  uint64_t local_var_c8;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int16_t local_var_b8;
  int8_t local_var_b6;
  int32_t local_var_b4;
  int8_t local_var_b0;
  uint64_t local_var_a8;
  int64_t alStack_a0 [3];
  int32_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int8_t stack_array_70 [48];
  local_var_78 = 0xfffffffffffffffe;
  plStackX_10 = param_2;
  plStackX_18 = param_3;
  plStackX_20 = param_4;
  if ((param_1[0x1b] == 0) || (*(int64_t **)(param_1[0x1b] + 0x830) == param_1)) {
    NetworkSystem_48c10(param_1[0x20],*param_2);
    NetworkSystem_48c10(param_1[0x21],*param_3);
    NetworkSystem_48c10(param_1[0x22],*param_4);
    NetworkSystem_48c10(param_1[0x23],*param_5);
    plVar4 = (int64_t *)*param_2;
    if (plVar4 != (int64_t *)0x0) {
      stack_special_x_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    stack_special_x_8 = (int64_t *)param_1[0x20];
    param_1[0x20] = (int64_t)plVar4;
    if (stack_special_x_8 != (int64_t *)0x0) {
      (**(code **)(*stack_special_x_8 + 0x38))();
    }
    plVar4 = (int64_t *)*param_3;
    if (plVar4 != (int64_t *)0x0) {
      stack_special_x_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    stack_special_x_8 = (int64_t *)param_1[0x21];
    param_1[0x21] = (int64_t)plVar4;
    if (stack_special_x_8 != (int64_t *)0x0) {
      (**(code **)(*stack_special_x_8 + 0x38))();
    }
    plVar4 = (int64_t *)*param_4;
    if (plVar4 != (int64_t *)0x0) {
      stack_special_x_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    stack_special_x_8 = (int64_t *)param_1[0x22];
    param_1[0x22] = (int64_t)plVar4;
    if (stack_special_x_8 != (int64_t *)0x0) {
      (**(code **)(*stack_special_x_8 + 0x38))();
    }
    plVar4 = (int64_t *)*param_5;
    if (plVar4 != (int64_t *)0x0) {
      stack_special_x_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    stack_special_x_8 = (int64_t *)param_1[0x23];
    param_1[0x23] = (int64_t)plVar4;
    if (stack_special_x_8 != (int64_t *)0x0) {
      (**(code **)(*stack_special_x_8 + 0x38))();
    }
    NetworkSystem_4a180(param_1);
    lVar5 = param_1[0x1b];
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x8be) != '\0')) {
      stack_special_x_8 = (int64_t *)param_1[0x20];
      if (stack_special_x_8 != (int64_t *)0x0) {
        (**(code **)(*stack_special_x_8 + 0x28))();
      }
      NetworkSystem_44860(lVar5,0,&stack_special_x_8);
      lVar5 = param_1[0x1b];
      stack_special_x_8 = (int64_t *)param_1[0x21];
      if (stack_special_x_8 != (int64_t *)0x0) {
        (**(code **)(*stack_special_x_8 + 0x28))();
      }
      NetworkSystem_44860(lVar5,1,&stack_special_x_8);
      lVar5 = param_1[0x1b];
      stack_special_x_8 = (int64_t *)param_1[0x22];
      if (stack_special_x_8 != (int64_t *)0x0) {
        (**(code **)(*stack_special_x_8 + 0x28))();
      }
      NetworkSystem_44860(lVar5,3,&stack_special_x_8);
      lVar5 = param_1[0x1b];
      stack_special_x_8 = (int64_t *)param_1[0x23];
      if (stack_special_x_8 != (int64_t *)0x0) {
        (**(code **)(*stack_special_x_8 + 0x28))();
      }
      NetworkSystem_44860(lVar5,2,&stack_special_x_8);
      lVar5 = param_1[0x31];
      uVar2 = *(int32_t *)(lVar5 + 0x10);
      uVar3 = *(int32_t *)(lVar5 + 0x14);
      uVar1 = *(int32_t *)(lVar5 + 0x53c);
      if ((param_6 != '\0') || (param_7 != '\0')) {
        alStack_e8[0] = 0;
        alStack_e8[1] = 0;
        alStack_e8[2] = 0;
        local_var_d0 = 3;
        if (param_7 != '\0') {
          uVar9 = SystemFunction_0001804bb9d0(uVar2,uVar3,uVar1);
          stack_special_x_8 = (int64_t *)CONCAT44(stack_special_x_8._4_4_,uVar9);
          puVar10 = (uint64_t *)0x180c95e98;
          puVar6 = render_system_config;
          while (puVar6 != (uint64_t *)0x0) {
            if (*(uint *)(puVar6 + 4) < uVar9) {
              puVar6 = (uint64_t *)*puVar6;
            }
            else {
              puVar10 = puVar6;
              puVar6 = (uint64_t *)puVar6[1];
            }
          }
          if ((puVar10 == (uint64_t *)0x180c95e98) || (uVar9 < *(uint *)(puVar10 + 4))) {
            puVar10 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,stack_array_70);
            puVar10 = (uint64_t *)*puVar10;
          }
          lVar5 = puVar10[5];
          lVar13 = (int64_t)*(int *)(lVar5 + 0x298);
          CoreEngine_0E8140(alStack_e8,lVar13);
          lVar8 = param_1[0x2f];
          param_2 = plStackX_10;
          if (0 < lVar13) {
            lVar12 = 0;
            lVar11 = 0x3c;
            do {
              fVar14 = *(float *)(lVar11 + param_1[0x31]);
              if (((int)lVar8 == 5) &&
                 (*(char *)(lVar12 + 0x51 + *(int64_t *)(lVar5 + 0x290)) != '\0')) {
                fVar14 = 0.0;
              }
              lVar7 = *(int64_t *)(lVar5 + 0x290);
              fVar14 = (*(float *)(lVar12 + 0x4c + lVar7) - *(float *)(lVar12 + 0x48 + lVar7)) *
                       fVar14 + *(float *)(lVar12 + 0x48 + lVar7);
              if (fVar14 != 0.0) {
                stack_special_x_8 = (int64_t *)CONCAT44(fVar14,*(int32_t *)(lVar12 + 0x44 + lVar7));
                SystemInitializer(alStack_e8,&stack_special_x_8);
              }
              lVar11 = lVar11 + 4;
              lVar12 = lVar12 + 0xa8;
              lVar13 = lVar13 + -1;
              param_4 = plStackX_20;
              param_2 = plStackX_10;
            } while (lVar13 != 0);
          }
        }
        NetworkSystem_443d0(param_1[0x1b],uVar2,uVar3,uVar1,alStack_e8);
        if (alStack_e8[0] != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      NetworkSystem_44ac0(param_1[0x1b]);
    }
    stack_special_x_8 = (int64_t *)param_1[0x33];
    param_1[0x33] = 0;
    if (stack_special_x_8 != (int64_t *)0x0) {
      (**(code **)(*stack_special_x_8 + 0x38))();
    }
    *(int32_t *)((int64_t)param_1 + 0x154) = 2;
    local_var_c8 = 0;
    local_var_c0 = 0;
    local_var_bc = 0xffffffff;
    local_var_b8 = 1;
    local_var_b6 = 0;
    local_var_b4 = 0xffffffff;
    local_var_b0 = 1;
    local_var_a8 = 0;
    stack_special_x_8 = alStack_a0;
    alStack_a0[0] = 0;
    alStack_a0[1] = 0;
    alStack_a0[2] = 0;
    local_var_88 = 3;
    local_var_80 = 0;
    (**(code **)(*param_1 + 0x1a8))(param_1,&local_var_c8);
    stack_special_x_8 = alStack_a0;
    if (alStack_a0[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if ((int64_t *)*param_2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_2 + 0x38))();
    }
    if ((int64_t *)*param_3 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_3 + 0x38))();
    }
    if ((int64_t *)*param_4 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_4 + 0x38))();
    }
    param_5 = (int64_t *)*param_5;
  }
  else {
    if ((int64_t *)*param_2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_2 + 0x38))();
    }
    if ((int64_t *)*param_3 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_3 + 0x38))();
    }
    if ((int64_t *)*param_4 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_4 + 0x38))();
    }
    param_5 = (int64_t *)*param_5;
  }
  if (param_5 != (int64_t *)0x0) {
    (**(code **)(*param_5 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_49230(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
  plVar3 = (int64_t *)RenderingSystem_ShaderManager(uVar2);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (int64_t *)param_1[0x20];
  param_1[0x20] = (int64_t)plVar3;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  (**(code **)(*(int64_t *)param_1[0x20] + 0x1e8))
            ((int64_t *)param_1[0x20],param_2,*(uint64_t *)(param_3 + 0x6a8));
  if (*(int64_t *)(param_3 + 0x6b0) != 0) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar3 = (int64_t *)RenderingSystem_ShaderManager(uVar2);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = (int64_t *)param_1[0x22];
    param_1[0x22] = (int64_t)plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(int64_t *)param_1[0x22] + 0x1e8))
              ((int64_t *)param_1[0x22],param_2,*(uint64_t *)(param_3 + 0x6b0));
  }
  if (*(int64_t *)(param_3 + 0x6b8) != 0) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar3 = (int64_t *)RenderingSystem_ShaderManager(uVar2);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = (int64_t *)param_1[0x21];
    param_1[0x21] = (int64_t)plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(int64_t *)param_1[0x21] + 0x1e8))
              ((int64_t *)param_1[0x21],param_2,*(uint64_t *)(param_3 + 0x6b8));
  }
  if (*(int64_t *)(param_3 + 0x6c0) != 0) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar3 = (int64_t *)RenderingSystem_ShaderManager(uVar2);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = (int64_t *)param_1[0x23];
    param_1[0x23] = (int64_t)plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(int64_t *)param_1[0x23] + 0x1e8))
              ((int64_t *)param_1[0x23],param_2,*(uint64_t *)(param_3 + 0x6c0));
  }
  if ((void *)*param_1 == &rendering_buffer_248_ptr) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
  (**(code **)(*param_1 + 0x1f0))(param_1,param_2,param_3,0,2);
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_49480(int64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
void NetworkSystem_49480(int64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                  uint param_5)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uVar12 = 0;
  uVar9 = param_5 >> 1;
  if (((uVar9 & 1) == 0) && ((*(byte *)(param_3 + 0xb0) & 1) == 0)) {
LAB_180549514:
    if ((*(byte *)(param_3 + 0xb0) & 2) != 0) goto LAB_18054951d;
LAB_180549556:
    if ((*(byte *)(param_3 + 0xb0) & 0x10) != 0) goto LAB_18054955f;
LAB_180549598:
    if ((*(byte *)(param_3 + 0xb0) & 4) != 0) goto LAB_1805495a1;
LAB_1805495da:
    if ((*(byte *)(param_3 + 0xb0) & 8) == 0) goto LAB_180549617;
  }
  else {
    (**(code **)(*param_1 + 0x148))(param_1,param_3 + 0xb4);
    lVar6 = *(int64_t *)(param_3 + 0xfc);
    param_1[0x24] = *(int64_t *)(param_3 + 0xf4);
    param_1[0x25] = lVar6;
    uVar3 = *(int32_t *)(param_3 + 0x108);
    uVar4 = *(int32_t *)(param_3 + 0x10c);
    uVar5 = *(int32_t *)(param_3 + 0x110);
    *(int32_t *)(param_1 + 0x26) = *(int32_t *)(param_3 + 0x104);
    *(int32_t *)((int64_t)param_1 + 0x134) = uVar3;
    *(int32_t *)(param_1 + 0x27) = uVar4;
    *(int32_t *)((int64_t)param_1 + 0x13c) = uVar5;
    uVar3 = *(int32_t *)(param_3 + 0x118);
    uVar4 = *(int32_t *)(param_3 + 0x11c);
    uVar5 = *(int32_t *)(param_3 + 0x120);
    *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_3 + 0x114);
    *(int32_t *)((int64_t)param_1 + 0x144) = uVar3;
    *(int32_t *)(param_1 + 0x29) = uVar4;
    *(int32_t *)((int64_t)param_1 + 0x14c) = uVar5;
    *(int32_t *)(param_1 + 0x2a) = *(int32_t *)(param_3 + 0x124);
    if ((uVar9 & 1) == 0) goto LAB_180549514;
LAB_18054951d:
    plVar1 = (int64_t *)param_1[0x20];
    if (plVar1 != (int64_t *)0x0) {
      uVar11 = uVar12;
      if (param_4 != 0) {
        uVar11 = *(uint64_t *)(param_4 + 0x6a8);
      }
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(uint64_t *)(param_3 + 0x6a8),uVar11,param_5)
      ;
    }
    if ((uVar9 & 1) == 0) goto LAB_180549556;
LAB_18054955f:
    plVar1 = (int64_t *)param_1[0x23];
    if (plVar1 != (int64_t *)0x0) {
      uVar11 = uVar12;
      if (param_4 != 0) {
        uVar11 = *(uint64_t *)(param_4 + 0x6c0);
      }
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(uint64_t *)(param_3 + 0x6c0),uVar11,param_5)
      ;
    }
    if ((uVar9 & 1) == 0) goto LAB_180549598;
LAB_1805495a1:
    plVar1 = (int64_t *)param_1[0x22];
    if (plVar1 != (int64_t *)0x0) {
      uVar11 = uVar12;
      if (param_4 != 0) {
        uVar11 = *(uint64_t *)(param_4 + 0x6b0);
      }
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(uint64_t *)(param_3 + 0x6b0),uVar11,param_5)
      ;
    }
    if ((uVar9 & 1) == 0) goto LAB_1805495da;
  }
  plVar1 = (int64_t *)param_1[0x21];
  if (plVar1 != (int64_t *)0x0) {
    if (param_4 != 0) {
      uVar12 = *(uint64_t *)(param_4 + 0x6b8);
    }
    (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(uint64_t *)(param_3 + 0x6b8),uVar12,param_5);
  }
LAB_180549617:
  plVar1 = param_1 + 0x1c;
  SystemCore_Controller(plVar1);
  if ((uint64_t)(param_1[0x1e] - *plVar1 >> 3) < 4) {
    plVar7 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,(char)param_1[0x1f]);
    plVar2 = (int64_t *)param_1[0x1d];
    plVar10 = (int64_t *)*plVar1;
    plVar8 = plVar7;
    if (plVar10 != plVar2) {
      do {
        *plVar8 = *plVar10;
        plVar8 = plVar8 + 1;
        *plVar10 = 0;
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
      plVar2 = (int64_t *)param_1[0x1d];
      plVar10 = (int64_t *)*plVar1;
      if (plVar10 != plVar2) {
        do {
          if ((int64_t *)*plVar10 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar10 + 0x38))();
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
        plVar10 = (int64_t *)*plVar1;
      }
    }
    if (plVar10 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar10);
    }
    *plVar1 = (int64_t)plVar7;
    param_1[0x1e] = (int64_t)(plVar7 + 4);
    param_1[0x1d] = (int64_t)plVar8;
  }
  if (param_1[0x20] != 0) {
    PhysicsSystem_TriggersProcessor(plVar1);
  }
  if (param_1[0x23] != 0) {
    PhysicsSystem_TriggersProcessor(plVar1);
  }
  if (param_1[0x22] != 0) {
    PhysicsSystem_TriggersProcessor(plVar1);
  }
  if (param_1[0x21] != 0) {
    PhysicsSystem_TriggersProcessor(plVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_49730(int64_t param_1,uint64_t param_2)
void NetworkSystem_49730(int64_t param_1,uint64_t param_2)
{
  void *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x6d0,8,3);
  lVar6 = NetworkSystem_4b820(uVar5,1);
  *(int32_t *)(lVar6 + 0xb0) = 0;
  uVar5 = *(uint64_t *)(param_1 + 0x128);
  *(uint64_t *)(lVar6 + 0xf4) = *(uint64_t *)(param_1 + 0x120);
  *(uint64_t *)(lVar6 + 0xfc) = uVar5;
  uVar4 = *(int32_t *)(param_1 + 0x134);
  uVar2 = *(int32_t *)(param_1 + 0x138);
  uVar3 = *(int32_t *)(param_1 + 0x13c);
  *(int32_t *)(lVar6 + 0x104) = *(int32_t *)(param_1 + 0x130);
  *(int32_t *)(lVar6 + 0x108) = uVar4;
  *(int32_t *)(lVar6 + 0x10c) = uVar2;
  *(int32_t *)(lVar6 + 0x110) = uVar3;
  uVar4 = *(int32_t *)(param_1 + 0x144);
  uVar2 = *(int32_t *)(param_1 + 0x148);
  uVar3 = *(int32_t *)(param_1 + 0x14c);
  *(int32_t *)(lVar6 + 0x114) = *(int32_t *)(param_1 + 0x140);
  *(int32_t *)(lVar6 + 0x118) = uVar4;
  *(int32_t *)(lVar6 + 0x11c) = uVar2;
  *(int32_t *)(lVar6 + 0x120) = uVar3;
  *(int32_t *)(lVar6 + 0x124) = *(int32_t *)(param_1 + 0x150);
  puVar1 = (void *)**(uint64_t **)(param_1 + 0x100);
  if (puVar1 == &processed_var_9304_ptr) {
    puVar7 = *(uint64_t **)(param_1 + 0x100) + 0x66;
  }
  else {
    puVar7 = (uint64_t *)(**(code **)(puVar1 + 0x158))();
  }
  uVar5 = puVar7[1];
  *(uint64_t *)(lVar6 + 0xb4) = *puVar7;
  *(uint64_t *)(lVar6 + 0xbc) = uVar5;
  uVar5 = puVar7[3];
  *(uint64_t *)(lVar6 + 0xc4) = puVar7[2];
  *(uint64_t *)(lVar6 + 0xcc) = uVar5;
  uVar4 = *(int32_t *)((int64_t)puVar7 + 0x24);
  uVar2 = *(int32_t *)(puVar7 + 5);
  uVar3 = *(int32_t *)((int64_t)puVar7 + 0x2c);
  *(int32_t *)(lVar6 + 0xd4) = *(int32_t *)(puVar7 + 4);
  *(int32_t *)(lVar6 + 0xd8) = uVar4;
  *(int32_t *)(lVar6 + 0xdc) = uVar2;
  *(int32_t *)(lVar6 + 0xe0) = uVar3;
  uVar4 = *(int32_t *)((int64_t)puVar7 + 0x34);
  uVar2 = *(int32_t *)(puVar7 + 7);
  uVar3 = *(int32_t *)((int64_t)puVar7 + 0x3c);
  *(int32_t *)(lVar6 + 0xe4) = *(int32_t *)(puVar7 + 6);
  *(int32_t *)(lVar6 + 0xe8) = uVar4;
  *(int32_t *)(lVar6 + 0xec) = uVar2;
  *(int32_t *)(lVar6 + 0xf0) = uVar3;
  *(int32_t *)(lVar6 + 0x6a4) = *(int32_t *)(param_1 + 0x178);
  *(int32_t *)(lVar6 + 0x6a0) = *(int32_t *)(param_1 + 0x174);
  uVar4 = RenderingSystem_2b4a0(param_2,*(uint64_t *)(param_1 + 0x180));
  *(int32_t *)(lVar6 + 0x128) = uVar4;
// WARNING: Subroutine does not return
  memcpy(lVar6 + 300,*(uint64_t *)(param_1 + 0x188),0x570);
}
// 函数: void NetworkSystem_498e0(int64_t param_1,int64_t param_2)
void NetworkSystem_498e0(int64_t param_1,int64_t param_2)
{
  int32_t *puVar1;
  RenderingSystem_37990();
  *(int32_t *)(param_1 + 0xb0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xb4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xb8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xbc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xc0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xc4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 200) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xcc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xd0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xd4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xd8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xdc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xe8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xec) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xf8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xfc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x100) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x104) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x108) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x10c) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x110) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x114) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x118) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x11c) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x120) = **(int32_t **)(param_2 + 8);
  puVar1 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar1;
  *(int32_t *)(param_1 + 0x124) = *puVar1;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x128) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
// WARNING: Subroutine does not return
  memcpy(param_1 + 300,*(uint64_t *)(param_2 + 8),0x568);
}
// 函数: void NetworkSystem_49be0(int64_t param_1,int64_t *param_2)
void NetworkSystem_49be0(int64_t param_1,int64_t *param_2)
{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t lVar3;
  RenderingSystem_377b0();
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0xb0);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  UtilitiesSystem_3a110(param_2,param_1 + 0xb4);
  UtilitiesSystem_3aca0(param_1 + 0xf4,param_2);
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x128);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  lVar3 = param_2[1];
  if ((uint64_t)((param_2[2] - lVar3) + *param_2) < 0x569) {
    System_BufferManager(param_2,(lVar3 - *param_2) + 0x568);
    lVar3 = param_2[1];
  }
// WARNING: Subroutine does not return
  memcpy(lVar3,param_1 + 300,0x568);
}
// 函数: void NetworkSystem_49e70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkSystem_49e70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,uint64_t param_7,int8_t param_8,
                  uint64_t param_9)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(param_1 + 0xe0));
      (**(code **)(*plVar1 + 0x208))
                (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3));
  }
  return;
}
// 函数: void NetworkSystem_49ea5(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void NetworkSystem_49ea5(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar2;
  uint unaff_EDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t local_buffer_28;
  uint64_t local_buffer_30;
  int8_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_98;
  uint64_t local_buffer_a0;
  uint64_t local_buffer_a8;
  int32_t local_buffer_b0;
  int32_t local_buffer_b8;
  uint64_t local_buffer_c0;
  int8_t local_buffer_c8;
  uint64_t local_buffer_d0;
  *(uint64_t *)(in_R11 + 8) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  uVar2 = (uint64_t)unaff_EDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  do {
    local_buffer_40 = local_buffer_d0;
    local_buffer_38 = local_buffer_c8;
    local_buffer_30 = local_buffer_c0;
    plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(unaff_RBX + 0xe0));
    local_buffer_28 = local_buffer_b8;
    (**(code **)(*plVar1 + 0x208))(plVar1,param_2,param_3,param_4,local_buffer_b0);
    uVar2 = uVar2 + 8;
    unaff_EDI = unaff_EDI + 1;
    param_2 = local_buffer_98;
    param_3 = local_buffer_a0;
    param_4 = local_buffer_a8;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0xe8) - *(int64_t *)(unaff_RBX + 0xe0) >> 3));
  return;
}
// 函数: void NetworkSystem_49f76(void)
void NetworkSystem_49f76(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_49f80(int64_t param_1,int64_t param_2)
void NetworkSystem_49f80(int64_t param_1,int64_t param_2)
{
  char cVar1;
  int64_t lVar2;
  uint *puVar3;
  int64_t lVar4;
  int8_t stack_array_98 [32];
  uint stack_array_78 [4];
  int64_t alStack_68 [4];
  int64_t alStack_48 [4];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  cVar1 = SystemFunction_000180285f10(param_1 + 0xb4,param_2 + 0xb4,0x38d1b717);
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1;
  }
  cVar1 = SystemFunction_000180274d30(param_1 + 0xf4,param_2 + 0xf4);
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1;
  }
  puVar3 = stack_array_78;
  alStack_68[0] = *(int64_t *)(param_1 + 0x6a8);
  lVar4 = 4;
  lVar2 = 0;
  alStack_68[1] = *(uint64_t *)(param_1 + 0x6b0);
  alStack_68[2] = *(uint64_t *)(param_1 + 0x6b8);
  alStack_68[3] = *(uint64_t *)(param_1 + 0x6c0);
  alStack_48[0] = *(int64_t *)(param_2 + 0x6a8);
  alStack_48[1] = *(uint64_t *)(param_2 + 0x6b0);
  alStack_48[2] = *(uint64_t *)(param_2 + 0x6b8);
  alStack_48[3] = *(uint64_t *)(param_2 + 0x6c0);
  stack_array_78[0] = 2;
  stack_array_78[1] = 4;
  stack_array_78[2] = 8;
  stack_array_78[3] = 0x10;
  do {
    if (*(int64_t **)((int64_t)alStack_68 + lVar2) == (int64_t *)0x0) {
      if (*(int64_t *)((int64_t)alStack_48 + lVar2) != 0) {
LAB_18054a0a6:
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | *puVar3;
      }
    }
    else if ((*(int64_t *)((int64_t)alStack_48 + lVar2) == 0) ||
            (cVar1 = (**(code **)(**(int64_t **)((int64_t)alStack_68 + lVar2) + 0x28))(),
            cVar1 != '\0')) goto LAB_18054a0a6;
    lVar2 = lVar2 + 8;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_98);
    }
  } while( true );
}
// 函数: void NetworkSystem_4a0f0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void NetworkSystem_4a0f0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  if (*(int64_t **)(param_1 + 0x6a8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x6a8) + 0x30))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x6b8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(int64_t **)(param_1 + 0x6b0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(int64_t **)(param_1 + 0x6c0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  return;
}
// 函数: void NetworkSystem_4a180(int64_t param_1)
void NetworkSystem_4a180(int64_t param_1)
{
  SystemCore_Controller(param_1 + 0xe0);
  if (*(int64_t *)(param_1 + 0x100) != 0) {
    PhysicsSystem_TriggersProcessor(param_1 + 0xe0,param_1 + 0x100);
    (**(code **)(**(int64_t **)(param_1 + 0x100) + 0x1e0))
              (*(int64_t **)(param_1 + 0x100),*(uint64_t *)(param_1 + 0x28));
  }
  if (*(int64_t *)(param_1 + 0x108) != 0) {
    PhysicsSystem_TriggersProcessor(param_1 + 0xe0,param_1 + 0x108);
    (**(code **)(**(int64_t **)(param_1 + 0x108) + 0x1e0))
              (*(int64_t **)(param_1 + 0x108),*(uint64_t *)(param_1 + 0x28));
  }
  if (*(int64_t *)(param_1 + 0x110) != 0) {
    PhysicsSystem_TriggersProcessor(param_1 + 0xe0,param_1 + 0x110);
    (**(code **)(**(int64_t **)(param_1 + 0x110) + 0x1e0))
              (*(int64_t **)(param_1 + 0x110),*(uint64_t *)(param_1 + 0x28));
  }
  if (*(int64_t *)(param_1 + 0x118) != 0) {
    PhysicsSystem_TriggersProcessor(param_1 + 0xe0,param_1 + 0x118);
    (**(code **)(**(int64_t **)(param_1 + 0x118) + 0x1e0))
              (*(int64_t **)(param_1 + 0x118),*(uint64_t *)(param_1 + 0x28));
  }
  return;
}
uint64_t *
NetworkSystem_4a280(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,9,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x73656d5f65636146;
  *(int16_t *)(puVar1 + 1) = 0x68;
  *(int32_t *)(param_2 + 2) = 9;
  return param_2;
}