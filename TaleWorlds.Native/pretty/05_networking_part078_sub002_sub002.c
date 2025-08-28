#include "SystemDataAdvancedHandler_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part078_sub002_sub002.c - 1 个函数
// 函数: void function_8825ef(void)
void function_8825ef(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
uint64_t function_882610(int64_t param_1,uint64_t *param_2)
{
  short sVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int8_t astack_special_x_8 [8];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  lVar2 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x10))();
  uVar3 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x10))();
  if (lVar2 != 0) {
    SystemMemoryAllocator(uVar3);
  }
  puVar5 = (int32_t *)*param_2;
  lVar6 = 0;
  do {
    if ((puVar5 < (int32_t *)*param_2) ||
       ((int32_t *)*param_2 + (int64_t)(int)param_2[1] * 5 <= puVar5)) {
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        SystemMemoryManager(uVar3,puVar5);
      }
      return 0;
    }
    sVar1 = *(short *)(puVar5 + 4);
    if (sVar1 == 8) {
      local_var_38 = *puVar5;
      local_var_34 = puVar5[1];
      local_var_30 = puVar5[2];
      local_var_2c = puVar5[3];
      lVar4 = param_1 + 0xb00;
      if (param_1 == -0xad8) {
        lVar4 = lVar6;
      }
      if (lVar4 != 0) {
        astack_special_x_8[0] = 1;
        SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
      }
      lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x2f8))
                        (*(int64_t **)(param_1 + 800),&local_var_38,1);
LAB_180882a0d:
      if (lVar4 != 0) {
        *(ushort *)(lVar4 + 0xe) = *(ushort *)(lVar4 + 0xe) | 0x8000;
      }
    }
    else {
      if (sVar1 == 0x14) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        if (param_1 + 0xad8 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(param_1 + 0xad8,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x288))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0x15) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xb28;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x280))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xb50;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x340))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 1) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xb78;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x338))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 2) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xba0;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x328))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 3) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xbc8;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x330))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0x1e) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = Function_cf8a2eb1(param_1 + 0xad8);
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(lVar4,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 800))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0xe) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xbf0;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x2e8))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 0x17) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = param_1 + 0xc18;
        if (param_1 == -0xad8) {
          lVar4 = lVar6;
        }
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(local_var_38,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x270))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
      if (sVar1 == 7) {
        local_var_38 = *puVar5;
        local_var_34 = puVar5[1];
        local_var_30 = puVar5[2];
        local_var_2c = puVar5[3];
        lVar4 = Function_cf8a2eb1(param_1 + 0xad8);
        if (lVar4 != 0) {
          astack_special_x_8[0] = 1;
          SystemStateProcessor(lVar4,&local_var_38,astack_special_x_8);
        }
        lVar4 = (**(code **)(**(int64_t **)(param_1 + 800) + 0x300))
                          (*(int64_t **)(param_1 + 800),&local_var_38,1);
        goto LAB_180882a0d;
      }
    }
    puVar5 = puVar5 + 5;
  } while( true );
}
uint64_t function_882a50(uint64_t *param_1,int64_t param_2)
{
  ushort uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int8_t astack_special_x_8 [8];
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  puVar4 = (int32_t *)*param_1;
  lVar5 = 0;
  do {
    if ((puVar4 < (int32_t *)*param_1) ||
       ((int32_t *)*param_1 + (int64_t)(int)param_1[1] * 5 <= puVar4)) {
      return 0;
    }
    uVar1 = *(ushort *)(puVar4 + 4);
    if (uVar1 == 0x14) {
      local_var_28 = *puVar4;
      local_var_24 = puVar4[1];
      local_var_20 = puVar4[2];
      local_var_1c = puVar4[3];
      lVar3 = param_2 + 0x58;
      if (param_2 == -8) {
        lVar3 = lVar5;
      }
      if (lVar3 == 0) {
        return 0x44;
      }
      astack_special_x_8[0] = 1;
      uVar2 = SystemStateProcessor(local_var_28,&local_var_28,astack_special_x_8);
LAB_180882bf3:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      if (uVar1 < 4) {
        local_var_28 = *puVar4;
        local_var_24 = puVar4[1];
        local_var_20 = puVar4[2];
        local_var_1c = puVar4[3];
        if (param_2 + 8 == 0) {
          return 0x44;
        }
        astack_special_x_8[0] = 1;
        uVar2 = SystemStateProcessor(param_2 + 8,&local_var_28,astack_special_x_8);
        goto LAB_180882bf3;
      }
      if ((ushort)(uVar1 - 0xc) < 2) {
        local_var_28 = *puVar4;
        local_var_24 = puVar4[1];
        local_var_20 = puVar4[2];
        local_var_1c = puVar4[3];
        lVar3 = param_2 + 0x30;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        astack_special_x_8[0] = 1;
        uVar2 = SystemStateProcessor(local_var_28,&local_var_28,astack_special_x_8);
        goto LAB_180882bf3;
      }
      if (uVar1 == 8) {
        local_var_28 = *puVar4;
        local_var_24 = puVar4[1];
        local_var_20 = puVar4[2];
        local_var_1c = puVar4[3];
        lVar3 = param_2 + 0x80;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        astack_special_x_8[0] = 1;
        uVar2 = SystemStateProcessor(local_var_28,&local_var_28,astack_special_x_8);
        goto LAB_180882bf3;
      }
      if (uVar1 == 0x16) {
        local_var_28 = *puVar4;
        local_var_24 = puVar4[1];
        local_var_20 = puVar4[2];
        local_var_1c = puVar4[3];
        lVar3 = param_2 + 0xa8;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        astack_special_x_8[0] = 1;
        uVar2 = SystemStateProcessor(local_var_28,&local_var_28,astack_special_x_8);
        goto LAB_180882bf3;
      }
      if (uVar1 == 0x17) {
        local_var_28 = *puVar4;
        local_var_24 = puVar4[1];
        local_var_20 = puVar4[2];
        local_var_1c = puVar4[3];
        lVar3 = param_2 + 0xd0;
        if (param_2 == -8) {
          lVar3 = lVar5;
        }
        if (lVar3 == 0) {
          return 0x44;
        }
        astack_special_x_8[0] = 1;
        uVar2 = SystemStateProcessor(local_var_28,&local_var_28,astack_special_x_8);
        goto LAB_180882bf3;
      }
    }
    puVar4 = puVar4 + 5;
  } while( true );
}
uint64_t function_882c20(int64_t param_1,int64_t param_2)
{
  uint *puVar1;
  uint64_t uVar2;
  uint64_t local_var_18;
  int64_t lStack_10;
  if (param_2 == 0) {
    return 0x1c;
  }
  if (*(int64_t *)(param_2 + 0x2e8) != 0) {
    puVar1 = (uint *)(*(int64_t *)(param_2 + 0x2e8) + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  local_var_18 = 1;
  lStack_10 = param_2;
  uVar2 = function_8e03a0(*(uint64_t *)(param_1 + 0xac8),&local_var_18,0);
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_882c70(int64_t *param_1,int param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar5 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x6c - 1U < 0x3fffffff) {
      puVar5 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x6c,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar5 != (uint64_t *)0x0) {
        iVar3 = (int)param_1[1];
        lVar6 = (int64_t)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar8 = *param_1 - (int64_t)puVar5;
          puVar7 = puVar5;
          do {
            uVar4 = ((uint64_t *)(lVar8 + (int64_t)puVar7))[1];
            puVar1 = (uint64_t *)((int64_t)puVar7 + 0x6c);
            *puVar7 = *(uint64_t *)(lVar8 + (int64_t)puVar7);
            puVar7[1] = uVar4;
            puVar2 = (uint64_t *)(lVar8 + -0x5c + (int64_t)puVar1);
            uVar4 = puVar2[1];
            puVar7[2] = *puVar2;
            puVar7[3] = uVar4;
            puVar2 = (uint64_t *)(lVar8 + -0x4c + (int64_t)puVar1);
            uVar4 = puVar2[1];
            puVar7[4] = *puVar2;
            puVar7[5] = uVar4;
            puVar2 = (uint64_t *)(lVar8 + -0x3c + (int64_t)puVar1);
            uVar4 = puVar2[1];
            puVar7[6] = *puVar2;
            puVar7[7] = uVar4;
            puVar2 = (uint64_t *)(lVar8 + -0x2c + (int64_t)puVar1);
            uVar4 = puVar2[1];
            puVar7[8] = *puVar2;
            puVar7[9] = uVar4;
            puVar2 = (uint64_t *)(lVar8 + -0x1c + (int64_t)puVar1);
            uVar4 = puVar2[1];
            puVar7[10] = *puVar2;
            puVar7[0xb] = uVar4;
            puVar7[0xc] = *(uint64_t *)(lVar8 + -0xc + (int64_t)puVar1);
            *(int32_t *)(puVar7 + 0xd) = *(int32_t *)(lVar8 + -4 + (int64_t)puVar1);
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
        }
        goto LAB_180882d69;
      }
    }
    return 0x26;
  }
LAB_180882d69:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar5;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_882c94(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t *unaff_RBX;
  int unaff_ESI;
  int64_t lVar8;
  puVar5 = (uint64_t *)0x0;
  if (unaff_ESI == 0) {
LAB_180882d69:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar5;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
    return 0;
  }
  if (unaff_ESI * 0x6c - 1U < 0x3fffffff) {
    puVar5 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_ESI * 0x6c,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar5 != (uint64_t *)0x0) {
      iVar3 = (int)unaff_RBX[1];
      lVar6 = (int64_t)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar8 = *unaff_RBX - (int64_t)puVar5;
        puVar7 = puVar5;
        do {
          uVar4 = ((uint64_t *)(lVar8 + (int64_t)puVar7))[1];
          puVar1 = (uint64_t *)((int64_t)puVar7 + 0x6c);
          *puVar7 = *(uint64_t *)(lVar8 + (int64_t)puVar7);
          puVar7[1] = uVar4;
          puVar2 = (uint64_t *)(lVar8 + -0x5c + (int64_t)puVar1);
          uVar4 = puVar2[1];
          puVar7[2] = *puVar2;
          puVar7[3] = uVar4;
          puVar2 = (uint64_t *)(lVar8 + -0x4c + (int64_t)puVar1);
          uVar4 = puVar2[1];
          puVar7[4] = *puVar2;
          puVar7[5] = uVar4;
          puVar2 = (uint64_t *)(lVar8 + -0x3c + (int64_t)puVar1);
          uVar4 = puVar2[1];
          puVar7[6] = *puVar2;
          puVar7[7] = uVar4;
          puVar2 = (uint64_t *)(lVar8 + -0x2c + (int64_t)puVar1);
          uVar4 = puVar2[1];
          puVar7[8] = *puVar2;
          puVar7[9] = uVar4;
          puVar2 = (uint64_t *)(lVar8 + -0x1c + (int64_t)puVar1);
          uVar4 = puVar2[1];
          puVar7[10] = *puVar2;
          puVar7[0xb] = uVar4;
          puVar7[0xc] = *(uint64_t *)(lVar8 + -0xc + (int64_t)puVar1);
          *(int32_t *)(puVar7 + 0xd) = *(int32_t *)(lVar8 + -4 + (int64_t)puVar1);
          lVar6 = lVar6 + -1;
          puVar7 = puVar1;
        } while (lVar6 != 0);
      }
      goto LAB_180882d69;
    }
  }
  return 0x26;
}
uint64_t function_882db4(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_882dd0(int64_t *param_1,int param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar5 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x28 - 1U < 0x3fffffff) {
      puVar5 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x28,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar5 != (uint64_t *)0x0) {
        iVar3 = (int)param_1[1];
        lVar6 = (int64_t)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar8 = *param_1 - (int64_t)puVar5;
          puVar7 = puVar5;
          do {
            uVar4 = ((uint64_t *)(lVar8 + (int64_t)puVar7))[1];
            puVar1 = puVar7 + 5;
            *puVar7 = *(uint64_t *)(lVar8 + (int64_t)puVar7);
            puVar7[1] = uVar4;
            puVar2 = (uint64_t *)(lVar8 + -0x18 + (int64_t)puVar1);
            uVar4 = puVar2[1];
            puVar7[2] = *puVar2;
            puVar7[3] = uVar4;
            puVar7[4] = *(uint64_t *)(lVar8 + -8 + (int64_t)puVar1);
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
        }
        goto LAB_180882e99;
      }
    }
    return 0x26;
  }
LAB_180882e99:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar5;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_882df4(uint64_t param_1,int param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int64_t lVar8;
  puVar5 = (uint64_t *)0x0;
  if (unaff_EDI == 0) {
LAB_180882e99:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar5;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x28 - 1U < 0x3fffffff) {
    puVar5 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x28,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar5 != (uint64_t *)0x0) {
      iVar3 = (int)unaff_RBX[1];
      lVar6 = (int64_t)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar8 = *unaff_RBX - (int64_t)puVar5;
        puVar7 = puVar5;
        do {
          uVar4 = ((uint64_t *)(lVar8 + (int64_t)puVar7))[1];
          puVar1 = puVar7 + 5;
          *puVar7 = *(uint64_t *)(lVar8 + (int64_t)puVar7);
          puVar7[1] = uVar4;
          puVar2 = (uint64_t *)(lVar8 + -0x18 + (int64_t)puVar1);
          uVar4 = puVar2[1];
          puVar7[2] = *puVar2;
          puVar7[3] = uVar4;
          puVar7[4] = *(uint64_t *)(lVar8 + -8 + (int64_t)puVar1);
          lVar6 = lVar6 + -1;
          puVar7 = puVar1;
        } while (lVar6 != 0);
      }
      goto LAB_180882e99;
    }
  }
  return 0x26;
}
uint64_t function_882ee4(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_882f00(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 8 - 1U < 0x3fffffff) {
      puVar3 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 8,&processed_var_8432_ptr,0xf4
                             ,0,0,1);
      if (puVar3 != (uint64_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(uint64_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_180882fa1;
      }
    }
    return 0x26;
  }
LAB_180882fa1:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_882f24(uint64_t param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t *unaff_RBX;
  int unaff_EDI;
  puVar3 = (uint64_t *)0x0;
  if (unaff_EDI == 0) {
LAB_180882fa1:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar3;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 8 - 1U < 0x3fffffff) {
    puVar3 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 8,&processed_var_8432_ptr,0xf4,0
                          );
    if (puVar3 != (uint64_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(uint64_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_180882fa1;
    }
  }
  return 0x26;
}
uint64_t function_882fec(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883010(int64_t *param_1,int param_2)
{
  int64_t lVar1;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x278 - 1U < 0x3fffffff) {
      lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x278,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] * 0x278);
        }
        goto LAB_1808830a3;
      }
    }
    return 0x26;
  }
LAB_1808830a3:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883034(void)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808830a3:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (unaff_EDI * 0x278 - 1U < 0x3fffffff) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EDI * 0x278,&processed_var_8432_ptr,
                          0xf4,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] * 0x278);
      }
      goto LAB_1808830a3;
    }
  }
  return 0x26;
}
uint64_t function_8830ee(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883110(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar9 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x118 - 1U < 0x3fffffff) {
      puVar9 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x118,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar9 != (uint64_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar11 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar14 = puVar9;
          do {
            lVar12 = 2;
            puVar7 = (uint64_t *)((lVar2 - (int64_t)puVar9) + (int64_t)puVar14);
            puVar8 = puVar14;
            do {
              puVar13 = puVar8;
              puVar10 = puVar7;
              uVar6 = puVar10[1];
              *puVar13 = *puVar10;
              puVar13[1] = uVar6;
              uVar6 = puVar10[3];
              puVar13[2] = puVar10[2];
              puVar13[3] = uVar6;
              uVar6 = puVar10[5];
              puVar13[4] = puVar10[4];
              puVar13[5] = uVar6;
              uVar6 = puVar10[7];
              puVar13[6] = puVar10[6];
              puVar13[7] = uVar6;
              uVar6 = puVar10[9];
              puVar13[8] = puVar10[8];
              puVar13[9] = uVar6;
              uVar6 = puVar10[0xb];
              puVar13[10] = puVar10[10];
              puVar13[0xb] = uVar6;
              uVar6 = puVar10[0xd];
              puVar13[0xc] = puVar10[0xc];
              puVar13[0xd] = uVar6;
              uVar6 = puVar10[0xf];
              puVar13[0xe] = puVar10[0xe];
              puVar13[0xf] = uVar6;
              lVar12 = lVar12 + -1;
              puVar7 = puVar10 + 0x10;
              puVar8 = puVar13 + 0x10;
            } while (lVar12 != 0);
            uVar3 = *(int32_t *)((int64_t)puVar10 + 0x84);
            uVar4 = *(int32_t *)(puVar10 + 0x11);
            uVar5 = *(int32_t *)((int64_t)puVar10 + 0x8c);
            puVar14 = puVar14 + 0x23;
            *(int32_t *)(puVar13 + 0x10) = *(int32_t *)(puVar10 + 0x10);
            *(int32_t *)((int64_t)puVar13 + 0x84) = uVar3;
            *(int32_t *)(puVar13 + 0x11) = uVar4;
            *(int32_t *)((int64_t)puVar13 + 0x8c) = uVar5;
            puVar13[0x12] = puVar10[0x12];
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto LAB_18088322e;
      }
    }
    return 0x26;
  }
LAB_18088322e:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar9;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883134(void)
{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t *unaff_RBX;
  int unaff_ESI;
  uint64_t *puVar14;
  puVar9 = (uint64_t *)0x0;
  if (unaff_ESI == 0) {
LAB_18088322e:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar9;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
    return 0;
  }
  if (unaff_ESI * 0x118 - 1U < 0x3fffffff) {
    puVar9 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_ESI * 0x118,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar9 != (uint64_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar11 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar14 = puVar9;
        do {
          lVar12 = 2;
          puVar7 = (uint64_t *)((lVar2 - (int64_t)puVar9) + (int64_t)puVar14);
          puVar8 = puVar14;
          do {
            puVar13 = puVar8;
            puVar10 = puVar7;
            uVar6 = puVar10[1];
            *puVar13 = *puVar10;
            puVar13[1] = uVar6;
            uVar6 = puVar10[3];
            puVar13[2] = puVar10[2];
            puVar13[3] = uVar6;
            uVar6 = puVar10[5];
            puVar13[4] = puVar10[4];
            puVar13[5] = uVar6;
            uVar6 = puVar10[7];
            puVar13[6] = puVar10[6];
            puVar13[7] = uVar6;
            uVar6 = puVar10[9];
            puVar13[8] = puVar10[8];
            puVar13[9] = uVar6;
            uVar6 = puVar10[0xb];
            puVar13[10] = puVar10[10];
            puVar13[0xb] = uVar6;
            uVar6 = puVar10[0xd];
            puVar13[0xc] = puVar10[0xc];
            puVar13[0xd] = uVar6;
            uVar6 = puVar10[0xf];
            puVar13[0xe] = puVar10[0xe];
            puVar13[0xf] = uVar6;
            lVar12 = lVar12 + -1;
            puVar7 = puVar10 + 0x10;
            puVar8 = puVar13 + 0x10;
          } while (lVar12 != 0);
          uVar3 = *(int32_t *)((int64_t)puVar10 + 0x84);
          uVar4 = *(int32_t *)(puVar10 + 0x11);
          uVar5 = *(int32_t *)((int64_t)puVar10 + 0x8c);
          puVar14 = puVar14 + 0x23;
          *(int32_t *)(puVar13 + 0x10) = *(int32_t *)(puVar10 + 0x10);
          *(int32_t *)((int64_t)puVar13 + 0x84) = uVar3;
          *(int32_t *)(puVar13 + 0x11) = uVar4;
          *(int32_t *)((int64_t)puVar13 + 0x8c) = uVar5;
          puVar13[0x12] = puVar10[0x12];
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      goto LAB_18088322e;
    }
  }
  return 0x26;
}
uint64_t function_883279(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883290(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar9 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x128 - 1U < 0x3fffffff) {
      puVar9 = (uint64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x128,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar9 != (uint64_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar11 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar14 = puVar9;
          do {
            lVar12 = 2;
            puVar7 = (uint64_t *)((lVar2 - (int64_t)puVar9) + (int64_t)puVar14);
            puVar8 = puVar14;
            do {
              puVar13 = puVar8;
              puVar10 = puVar7;
              uVar6 = puVar10[1];
              *puVar13 = *puVar10;
              puVar13[1] = uVar6;
              uVar6 = puVar10[3];
              puVar13[2] = puVar10[2];
              puVar13[3] = uVar6;
              uVar6 = puVar10[5];
              puVar13[4] = puVar10[4];
              puVar13[5] = uVar6;
              uVar6 = puVar10[7];
              puVar13[6] = puVar10[6];
              puVar13[7] = uVar6;
              uVar6 = puVar10[9];
              puVar13[8] = puVar10[8];
              puVar13[9] = uVar6;
              uVar6 = puVar10[0xb];
              puVar13[10] = puVar10[10];
              puVar13[0xb] = uVar6;
              uVar6 = puVar10[0xd];
              puVar13[0xc] = puVar10[0xc];
              puVar13[0xd] = uVar6;
              uVar6 = puVar10[0xf];
              puVar13[0xe] = puVar10[0xe];
              puVar13[0xf] = uVar6;
              lVar12 = lVar12 + -1;
              puVar7 = puVar10 + 0x10;
              puVar8 = puVar13 + 0x10;
            } while (lVar12 != 0);
            uVar3 = *(int32_t *)((int64_t)puVar10 + 0x84);
            uVar4 = *(int32_t *)(puVar10 + 0x11);
            uVar5 = *(int32_t *)((int64_t)puVar10 + 0x8c);
            puVar14 = puVar14 + 0x25;
            *(int32_t *)(puVar13 + 0x10) = *(int32_t *)(puVar10 + 0x10);
            *(int32_t *)((int64_t)puVar13 + 0x84) = uVar3;
            *(int32_t *)(puVar13 + 0x11) = uVar4;
            *(int32_t *)((int64_t)puVar13 + 0x8c) = uVar5;
            uVar6 = puVar10[0x13];
            puVar13[0x12] = puVar10[0x12];
            puVar13[0x13] = uVar6;
            puVar13[0x14] = puVar10[0x14];
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        goto LAB_1808833ba;
      }
    }
    return 0x26;
  }
LAB_1808833ba:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar9;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8832b4(void)
{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t *unaff_RBX;
  int unaff_ESI;
  uint64_t *puVar14;
  puVar9 = (uint64_t *)0x0;
  if (unaff_ESI == 0) {
LAB_1808833ba:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar9;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
    return 0;
  }
  if (unaff_ESI * 0x128 - 1U < 0x3fffffff) {
    puVar9 = (uint64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_ESI * 0x128,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar9 != (uint64_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar11 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar14 = puVar9;
        do {
          lVar12 = 2;
          puVar7 = (uint64_t *)((lVar2 - (int64_t)puVar9) + (int64_t)puVar14);
          puVar8 = puVar14;
          do {
            puVar13 = puVar8;
            puVar10 = puVar7;
            uVar6 = puVar10[1];
            *puVar13 = *puVar10;
            puVar13[1] = uVar6;
            uVar6 = puVar10[3];
            puVar13[2] = puVar10[2];
            puVar13[3] = uVar6;
            uVar6 = puVar10[5];
            puVar13[4] = puVar10[4];
            puVar13[5] = uVar6;
            uVar6 = puVar10[7];
            puVar13[6] = puVar10[6];
            puVar13[7] = uVar6;
            uVar6 = puVar10[9];
            puVar13[8] = puVar10[8];
            puVar13[9] = uVar6;
            uVar6 = puVar10[0xb];
            puVar13[10] = puVar10[10];
            puVar13[0xb] = uVar6;
            uVar6 = puVar10[0xd];
            puVar13[0xc] = puVar10[0xc];
            puVar13[0xd] = uVar6;
            uVar6 = puVar10[0xf];
            puVar13[0xe] = puVar10[0xe];
            puVar13[0xf] = uVar6;
            lVar12 = lVar12 + -1;
            puVar7 = puVar10 + 0x10;
            puVar8 = puVar13 + 0x10;
          } while (lVar12 != 0);
          uVar3 = *(int32_t *)((int64_t)puVar10 + 0x84);
          uVar4 = *(int32_t *)(puVar10 + 0x11);
          uVar5 = *(int32_t *)((int64_t)puVar10 + 0x8c);
          puVar14 = puVar14 + 0x25;
          *(int32_t *)(puVar13 + 0x10) = *(int32_t *)(puVar10 + 0x10);
          *(int32_t *)((int64_t)puVar13 + 0x84) = uVar3;
          *(int32_t *)(puVar13 + 0x11) = uVar4;
          *(int32_t *)((int64_t)puVar13 + 0x8c) = uVar5;
          uVar6 = puVar10[0x13];
          puVar13[0x12] = puVar10[0x12];
          puVar13[0x13] = uVar6;
          puVar13[0x14] = puVar10[0x14];
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      goto LAB_1808833ba;
    }
  }
  return 0x26;
}
uint64_t function_883405(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883420(int64_t *param_1,int param_2)
{
  int64_t lVar1;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x24 - 1U < 0x3fffffff) {
      lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x24,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] * 0x24);
        }
        goto LAB_1808834b4;
      }
    }
    return 0x26;
  }
LAB_1808834b4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883444(uint64_t param_1,int param_2)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808834b4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x24 - 1U < 0x3fffffff) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x24,&processed_var_8432_ptr,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] * 0x24);
      }
      goto LAB_1808834b4;
    }
  }
  return 0x26;
}
uint64_t function_8834ff(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883520(int64_t *param_1,int param_2)
{
  int64_t lVar1;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0x30 - 1U < 0x3fffffff) {
      lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x30,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1] * 0x30);
        }
        goto LAB_1808835b4;
      }
    }
    return 0x26;
  }
LAB_1808835b4:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883544(uint64_t param_1,int param_2)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808835b4:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x30 - 1U < 0x3fffffff) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x30,&processed_var_8432_ptr,0xf4
                          ,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1] * 0x30);
      }
      goto LAB_1808835b4;
    }
  }
  return 0x26;
}
uint64_t function_8835ff(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883620(int64_t *param_1,int param_2)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t lVar10;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x1c - 1U < 0x3fffffff) {
      puVar7 = (int32_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x1c,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar7 != (int32_t *)0x0) {
        iVar3 = (int)param_1[1];
        lVar8 = (int64_t)iVar3;
        if ((iVar3 != 0) && (0 < iVar3)) {
          lVar10 = *param_1 - (int64_t)puVar7;
          puVar9 = puVar7;
          do {
            puVar2 = (int32_t *)(lVar10 + (int64_t)puVar9);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            puVar1 = puVar9 + 7;
            *puVar9 = *puVar2;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            *(uint64_t *)(puVar9 + 4) = *(uint64_t *)(lVar10 + -0xc + (int64_t)puVar1);
            puVar9[6] = *(int32_t *)(lVar10 + -4 + (int64_t)puVar1);
            lVar8 = lVar8 + -1;
            puVar9 = puVar1;
          } while (lVar8 != 0);
        }
        goto LAB_1808836e7;
      }
    }
    return 0x26;
  }
LAB_1808836e7:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar7;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883644(void)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int64_t lVar10;
  puVar7 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1808836e7:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar7;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (unaff_EDI * 0x1c - 1U < 0x3fffffff) {
    puVar7 = (int32_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EDI * 0x1c,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar7 != (int32_t *)0x0) {
      iVar3 = (int)unaff_RBX[1];
      lVar8 = (int64_t)iVar3;
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar10 = *unaff_RBX - (int64_t)puVar7;
        puVar9 = puVar7;
        do {
          puVar2 = (int32_t *)(lVar10 + (int64_t)puVar9);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar1 = puVar9 + 7;
          *puVar9 = *puVar2;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          *(uint64_t *)(puVar9 + 4) = *(uint64_t *)(lVar10 + -0xc + (int64_t)puVar1);
          puVar9[6] = *(int32_t *)(lVar10 + -4 + (int64_t)puVar1);
          lVar8 = lVar8 + -1;
          puVar9 = puVar1;
        } while (lVar8 != 0);
      }
      goto LAB_1808836e7;
    }
  }
  return 0x26;
}
uint64_t function_883732(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883750(int64_t *param_1,int param_2)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar12 = 0;
  lVar7 = lVar12;
  if (param_2 == 0) {
LAB_1808838fe:
    if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)param_1 + 0xc) = param_2;
  }
  else {
    if (param_2 * 0x1c - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x1c,&processed_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          lVar11 = *param_1;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (int32_t *)(lVar7 + 0x2c);
            do {
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x2c);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x1c;
              *(uint64_t *)(puVar10 + -0xb) = *puVar2;
              *(uint64_t *)(puVar10 + -9) = uVar9;
              puVar10[-7] = *(int32_t *)((int64_t)puVar10 + lVar13 + -0x1c);
              puVar10[-6] = *(int32_t *)((int64_t)puVar10 + lVar13 + -0x18);
              *(int8_t *)(puVar10 + -5) = *(int8_t *)((int64_t)puVar10 + lVar13 + -0x14);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x10);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + -4) = *puVar2;
              *(uint64_t *)(puVar10 + -2) = uVar9;
              *puVar10 = *(int32_t *)(lVar13 + -0x70 + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar13 + -0x6c + (int64_t)puVar1);
              *(int8_t *)(puVar10 + 2) = *(int8_t *)(lVar13 + -0x68 + (int64_t)puVar1);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + 0xc);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + 3) = *puVar2;
              *(uint64_t *)(puVar10 + 5) = uVar9;
              puVar10[7] = *(int32_t *)(lVar13 + -0x54 + (int64_t)puVar1);
              puVar10[8] = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x20);
              *(int8_t *)(puVar10 + 9) = *(int8_t *)((int64_t)puVar10 + lVar13 + 0x24);
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar13 + 0x28);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[10] = *puVar3;
              puVar10[0xb] = uVar4;
              puVar10[0xc] = uVar5;
              puVar10[0xd] = uVar6;
              puVar10[0xe] = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x38);
              puVar10[0xf] = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x3c);
              *(int8_t *)(puVar10 + 0x10) = *(int8_t *)((int64_t)puVar10 + lVar13 + 0x40);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (int32_t *)(lVar7 + 0x10 + lVar12 * 0x1c);
            do {
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar11 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 7;
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(int32_t *)(lVar11 + -0x1c + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar11 + -0x18 + (int64_t)puVar1);
              *(int8_t *)(puVar10 + 2) = *(int8_t *)(lVar11 + -0x14 + (int64_t)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808838fe;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_883774(void)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  lVar12 = 0;
  lVar7 = lVar12;
  if (unaff_EBP == 0) {
LAB_1808838fe:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar7;
    uVar9 = 0;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EBP;
  }
  else {
    if (unaff_EBP * 0x1c - 1U < 0x3fffffff) {
      lVar7 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EBP * 0x1c,&processed_var_8432_ptr,
                            0xf4,0);
      if (lVar7 != 0) {
        lVar8 = (int64_t)(int)unaff_RBX[1];
        if ((int)unaff_RBX[1] != 0) {
          lVar11 = *unaff_RBX;
          if (3 < lVar8) {
            lVar13 = lVar11 - lVar7;
            lVar14 = (lVar8 - 4U >> 2) + 1;
            lVar12 = lVar14 * 4;
            puVar10 = (int32_t *)(lVar7 + 0x2c);
            do {
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x2c);
              uVar9 = puVar2[1];
              puVar1 = puVar10 + 0x1c;
              *(uint64_t *)(puVar10 + -0xb) = *puVar2;
              *(uint64_t *)(puVar10 + -9) = uVar9;
              puVar10[-7] = *(int32_t *)((int64_t)puVar10 + lVar13 + -0x1c);
              puVar10[-6] = *(int32_t *)((int64_t)puVar10 + lVar13 + -0x18);
              *(int8_t *)(puVar10 + -5) = *(int8_t *)((int64_t)puVar10 + lVar13 + -0x14);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + -0x10);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + -4) = *puVar2;
              *(uint64_t *)(puVar10 + -2) = uVar9;
              *puVar10 = *(int32_t *)(lVar13 + -0x70 + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar13 + -0x6c + (int64_t)puVar1);
              *(int8_t *)(puVar10 + 2) = *(int8_t *)(lVar13 + -0x68 + (int64_t)puVar1);
              puVar2 = (uint64_t *)((int64_t)puVar10 + lVar13 + 0xc);
              uVar9 = puVar2[1];
              *(uint64_t *)(puVar10 + 3) = *puVar2;
              *(uint64_t *)(puVar10 + 5) = uVar9;
              puVar10[7] = *(int32_t *)(lVar13 + -0x54 + (int64_t)puVar1);
              puVar10[8] = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x20);
              *(int8_t *)(puVar10 + 9) = *(int8_t *)((int64_t)puVar10 + lVar13 + 0x24);
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar13 + 0x28);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar10[10] = *puVar3;
              puVar10[0xb] = uVar4;
              puVar10[0xc] = uVar5;
              puVar10[0xd] = uVar6;
              puVar10[0xe] = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x38);
              puVar10[0xf] = *(int32_t *)((int64_t)puVar10 + lVar13 + 0x3c);
              *(int8_t *)(puVar10 + 0x10) = *(int8_t *)((int64_t)puVar10 + lVar13 + 0x40);
              lVar14 = lVar14 + -1;
              puVar10 = puVar1;
            } while (lVar14 != 0);
          }
          if (lVar12 < lVar8) {
            lVar11 = lVar11 - lVar7;
            lVar8 = lVar8 - lVar12;
            puVar10 = (int32_t *)(lVar7 + 0x10 + lVar12 * 0x1c);
            do {
              puVar3 = (int32_t *)((int64_t)puVar10 + lVar11 + -0x10);
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              puVar1 = puVar10 + 7;
              puVar10[-4] = *puVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar6;
              *puVar10 = *(int32_t *)(lVar11 + -0x1c + (int64_t)puVar1);
              puVar10[1] = *(int32_t *)(lVar11 + -0x18 + (int64_t)puVar1);
              *(int8_t *)(puVar10 + 2) = *(int8_t *)(lVar11 + -0x14 + (int64_t)puVar1);
              lVar8 = lVar8 + -1;
              puVar10 = puVar1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_1808838fe;
      }
    }
    uVar9 = 0x26;
  }
  return uVar9;
}
uint64_t function_88394e(void)
{
  return 0x26;
}
uint64_t function_883960(int64_t param_1,uint64_t param_2)
{
  uint *puVar1;
  uint64_t uVar2;
  int64_t alStackX_8 [4];
  uint64_t local_var_68;
  int64_t lStack_60;
  int32_t stack_array_58 [2];
  uint64_t local_var_50;
  stack_array_58[0] = 0;
  alStackX_8[0] = 0;
  local_var_50 = param_2;
  uVar2 = (**(code **)**(uint64_t **)(param_1 + 0xaa0))
                    (*(uint64_t **)(param_1 + 0xaa0),stack_array_58,0x1000,alStackX_8);
  if ((int)uVar2 == 0) {
    if (alStackX_8[0] == 0) {
      return 0x1c;
    }
    if (*(int64_t *)(alStackX_8[0] + 0x2e8) != 0) {
      puVar1 = (uint *)(*(int64_t *)(alStackX_8[0] + 0x2e8) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
    lStack_60 = alStackX_8[0];
    local_var_68 = 1;
    uVar2 = function_8e03a0(*(uint64_t *)(param_1 + 0xac8),&local_var_68,0);
  }
  return uVar2;
}
uint function_883a00(int64_t param_1)
{
  uint uVar1;
  uint uVar2;
  uVar1 = function_73b3e0(*(uint64_t *)(param_1 + 0x78));
  uVar2 = 0;
  if ((uVar1 & 0xfffffff7) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address