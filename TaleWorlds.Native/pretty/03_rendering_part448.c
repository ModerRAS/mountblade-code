#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part448.c - 5 个函数
// 函数: void NetworkSystem_10e50(int64_t param_1,float param_2,char param_3)
void NetworkSystem_10e50(int64_t param_1,float param_2,char param_3)
{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  int32_t uVar7;
  float fVar8;
  int32_t uVar9;
  float fVar10;
  float afStackX_8 [2];
  float afStackX_18 [2];
  int8_t astack_special_x_20 [8];
  uint64_t local_var_f78;
  uint64_t local_var_f80;
  int32_t uVar11;
  int8_t stack_array_78 [80];
  uVar9 = (int32_t)((uint64_t)local_var_f78 >> 0x20);
  uVar11 = (int32_t)((uint64_t)local_var_f80 >> 0x20);
  if ((*(int64_t *)(param_1 + 0x6d8) != 0) &&
     (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) != '\0')) {
    NetworkSystem_0a8c0();
    fVar6 = param_2 + *(float *)(param_1 + 0x708);
    *(float *)(param_1 + 0x708) = fVar6;
    if (12.0 < fVar6) {
      *(int32_t *)(param_1 + 0x708) = 0x41400000;
    }
  }
  if (*(int *)(param_1 + 0x5f8) == 2) {
    uVar7 = atan2f(*(uint *)(param_1 + 0x610) ^ 0x80000000,*(int32_t *)(param_1 + 0x614));
    NetworkSystem_380e0(param_1 + 0x49c,uVar7);
  }
  if ((param_3 != '\0') || (*(int *)(param_1 + 0x570) != 1)) {
    if (*(int *)(param_1 + 0x570) == 1) {
      uVar7 = 0x40a00000;
    }
    else {
      uVar7 = 0x41a00000;
    }
    NetworkSystem_37fc0(param_1 + 0x49c,param_2,uVar7);
  }
  if (*(char *)(param_1 + 0x984) != '\0') {
    NetworkSystem_25fa0(param_1);
    if ((((-1 < *(int *)(param_1 + 0x564)) &&
         (lVar5 = (int64_t)*(int *)(param_1 + 0x564) * 0xa60,
         0.0 < (float)(*(int64_t *)
                        (&system_error_code +
                        (int64_t)*(int *)(lVar5 + 0x3770 + *(int64_t *)(param_1 + 0x8d8)) * 8) -
                      *(int64_t *)(lVar5 + 0x3768 + *(int64_t *)(param_1 + 0x8d8))) * 1e-05)) &&
        (system_status_flag != 1)) && (system_status_flag != 4)) {
      plVar1 = *(int64_t **)(param_1 + 0x590);
      fVar6 = 0.0;
      if (((plVar1 != (int64_t *)0x0) &&
          (lVar5 = (**(code **)(*plVar1 + 0x128))(plVar1,0), lVar5 != 0)) &&
         (lVar4 = InitializationSystem_ConfigManager(lVar5), lVar4 != 0)) {
        plVar1 = *(int64_t **)(param_1 + 0x590);
        fVar6 = *(float *)(lVar5 + 0x188);
        pcVar2 = *(code **)(*plVar1 + 0x90);
        lVar4 = InitializationSystem_ConfigManager(lVar5);
        fVar10 = *(float *)(lVar4 + 8);
        fVar8 = (float)(*pcVar2)(plVar1,0);
        fVar6 = (fVar10 - fVar8) * fVar6;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        if (*(int *)(lVar5 + 0x1f0) != -1) {
          lVar5 = SystemCore_Initializer(&system_data_5f30,
                                *(int32_t *)(*(int64_t *)(param_1 + 0x590) + 0xac));
          lVar4 = InitializationSystem_ConfigManager(lVar5);
          if (lVar4 != 0) {
            fVar10 = *(float *)(lVar5 + 0x188);
            lVar5 = InitializationSystem_ConfigManager(lVar5);
            fVar6 = fVar6 + fVar10 * *(float *)(lVar5 + 8);
          }
        }
      }
      lVar5 = (int64_t)*(int *)(param_1 + 0x564) * 0xa60;
      *(int64_t *)(lVar5 + 0x3768 + *(int64_t *)(param_1 + 0x8d8)) =
           *(int64_t *)
            (&system_error_code +
            (int64_t)*(int *)(lVar5 + 0x3770 + *(int64_t *)(param_1 + 0x8d8)) * 8) +
           0x5af310800000;
      NetworkSystem_2e450(param_1,0xffffffff,CONCAT71((int7)((uint64_t)lVar5 >> 8),1),fVar6);
      if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
        NetworkSystem_ed670(system_status_flag,1,*(int32_t *)(param_1 + 0x10),0xffffffff,
                      CONCAT44(uVar9,0xffffffff),CONCAT44(uVar11,fVar6 + 0.2));
      }
    }
    if (*(int *)(param_1 + 0x568) - 3U < 2) {
      if (*(int *)(param_1 + 0x560) != -1) {
        SystemCore_Validator0(param_1,0xffffffff);
      }
      PhysicsSystem_CollisionDetector(&system_data_f0c8,param_2,*(uint *)(param_1 + 0x56c) >> 0xb & 0xffffff01,
                    *(int64_t *)(param_1 + 0x20) + 8);
    }
    if ((0.0 < param_2) && (*(int64_t *)(param_1 + 0x658) != 0)) {
      NetworkSystem_8ac10(*(uint64_t *)(param_1 + 0x590));
      NetworkSystem_2b890(param_1,param_2);
      plVar1 = *(int64_t **)(param_1 + 0x590);
      uVar9 = (**(code **)(*plVar1 + 0x158))(plVar1);
      *(int32_t *)((int64_t)plVar1 + 0x9c) = uVar9;
      if ((*(uint *)(param_1 + 0x56c) & 0x800) == 0) {
        *(int32_t *)(*(int64_t *)(param_1 + 0x590) + 0x2540) =
             *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x590) + 0x2590) + 0x24);
      }
    }
    cVar3 = Function_b1460993(param_1);
    if (cVar3 == '\0') {
      if (0.0 < param_2) {
        if (*(int *)(param_1 + 0x564) < 0) {
          cVar3 = Function_0d42bf9b(param_1);
          if (cVar3 == '\0') {
            *(int32_t *)(param_1 + 0xa40) = 0xbfc90fdb;
            *(int32_t *)(param_1 + 0xa44) = 0x3fc90fdb;
          }
          else {
            afStackX_8[0] = 0.0;
            afStackX_18[0] = 0.0;
            NetworkSystem_8c7f0(*(uint64_t *)(param_1 + 0x590));
            fVar6 = afStackX_8[0] - *(float *)(param_1 + 0xa44);
            fVar10 = afStackX_18[0] - *(float *)(param_1 + 0xa40);
            *(float *)(param_1 + 0xa44) = (fVar6 + fVar6) * param_2 + *(float *)(param_1 + 0xa44);
            *(float *)(param_1 + 0xa40) = (fVar10 + fVar10) * param_2 + *(float *)(param_1 + 0xa40);
          }
        }
        else {
          NetworkSystem_0d690();
        }
        NetworkSystem_8b9f0(*(uint64_t *)(param_1 + 0x590),1,afStackX_8,afStackX_18,stack_array_78,
                      astack_special_x_20);
        *(float *)(param_1 + 0xa4c) = afStackX_8[0] * 1.2566371;
        *(float *)(param_1 + 0xa48) = afStackX_18[0] * -1.3659099;
        if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
          if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(param_1 + 0x570) != 2))
          {
            *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x5b0) = 0;
            *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x5b4) = 0;
          }
          else {
            NetworkSystem_0ebe0(param_1,param_2);
          }
        }
        if (((system_status_flag != 1) && (system_status_flag != 4)) &&
           (((*(uint *)(param_1 + 0x56c) & 0x4000) != 0 && (*(int *)(param_1 + 0x568) == 1)))) {
          NetworkSystem_0c260(param_1);
        }
      }
      if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
        NetworkSystem_32390(param_1,param_2);
      }
      else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
        NetworkSystem_32740(param_1,param_2);
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_10f25(void)
void NetworkSystem_10f25(void)
{
  float fVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RSI;
  float fVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int32_t uVar8;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  float unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  float fVar9;
  int32_t unaff_XMM8_Dc;
  uint64_t local_var_20;
  int32_t local_buffer_50;
  int32_t local_var_58;
  int32_t local_var_70;
  int32_t local_var_78;
  float local_buffer_b0;
  float local_buffer_c0;
  uVar8 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  fVar7 = (float)NetworkSystem_25fa0();
  if ((((-1 < *(int *)(unaff_RSI + 0x564)) &&
       (lVar6 = (int64_t)*(int *)(unaff_RSI + 0x564) * 0xa60,
       fVar7 = (float)(*(int64_t *)
                        (&system_error_code +
                        (int64_t)*(int *)(lVar6 + 0x3770 + *(int64_t *)(unaff_RSI + 0x8d8)) * 8) -
                      *(int64_t *)(lVar6 + 0x3768 + *(int64_t *)(unaff_RSI + 0x8d8))) * 1e-05,
       0.0 < fVar7)) && (system_status_flag != 1)) && (system_status_flag != 4)) {
    plVar2 = *(int64_t **)(unaff_RSI + 0x590);
    fVar9 = 0.0;
    local_buffer_50 = unaff_XMM8_Da;
    local_var_58 = unaff_XMM8_Dc;
    if (((plVar2 != (int64_t *)0x0) &&
        (lVar6 = (**(code **)(*plVar2 + 0x128))(plVar2,0), fVar7 = extraout_XMM0_Da, lVar6 != 0)) &&
       (lVar5 = InitializationSystem_ConfigManager(lVar6), fVar7 = extraout_XMM0_Da_00, lVar5 != 0)) {
      plVar2 = *(int64_t **)(unaff_RSI + 0x590);
      fVar9 = *(float *)(lVar6 + 0x188);
      pcVar3 = *(code **)(*plVar2 + 0x90);
      local_var_70 = unaff_XMM6_Da;
      local_var_78 = unaff_XMM6_Dc;
      lVar5 = InitializationSystem_ConfigManager(lVar6);
      fVar1 = *(float *)(lVar5 + 8);
      fVar7 = (float)(*pcVar3)(plVar2,0);
      fVar9 = (fVar1 - fVar7) * fVar9;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (*(int *)(lVar6 + 0x1f0) != -1) {
        lVar6 = SystemCore_Initializer(&system_data_5f30,
                              *(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0xac));
        lVar5 = InitializationSystem_ConfigManager(lVar6);
        fVar7 = extraout_XMM0_Da_01;
        if (lVar5 != 0) {
          fVar7 = *(float *)(lVar6 + 0x188);
          lVar6 = InitializationSystem_ConfigManager(lVar6);
          fVar9 = fVar9 + fVar7 * *(float *)(lVar6 + 8);
          fVar7 = extraout_XMM0_Da_02;
        }
      }
    }
    lVar6 = (int64_t)*(int *)(unaff_RSI + 0x564) * 0xa60;
    *(int64_t *)(lVar6 + 0x3768 + *(int64_t *)(unaff_RSI + 0x8d8)) =
         *(int64_t *)
          (&system_error_code +
          (int64_t)*(int *)(lVar6 + 0x3770 + *(int64_t *)(unaff_RSI + 0x8d8)) * 8) +
         0x5af310800000;
    fVar7 = (float)NetworkSystem_2e450(fVar7,0xffffffff,CONCAT71((int7)((uint64_t)lVar6 >> 8),1),fVar9);
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      fVar7 = (float)NetworkSystem_ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                                   CONCAT44(uVar8,0xffffffff));
    }
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      SystemCore_Validator0(fVar7,0xffffffff);
    }
    PhysicsSystem_CollisionDetector(&system_data_f0c8);
  }
  if ((0.0 < unaff_XMM7_Da) && (*(int64_t *)(unaff_RSI + 0x658) != 0)) {
    NetworkSystem_8ac10(*(uint64_t *)(unaff_RSI + 0x590));
    NetworkSystem_2b890();
    plVar2 = *(int64_t **)(unaff_RSI + 0x590);
    uVar8 = (**(code **)(*plVar2 + 0x158))(plVar2);
    *(int32_t *)((int64_t)plVar2 + 0x9c) = uVar8;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar4 = Function_b1460993();
  if (cVar4 == '\0') {
    if (0.0 < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar4 = Function_0d42bf9b();
        if (cVar4 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          local_buffer_b0 = 0.0;
          local_buffer_c0 = 0.0;
          NetworkSystem_8c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar7 = local_buffer_b0 - *(float *)(unaff_RSI + 0xa44);
          fVar9 = local_buffer_c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar7 + fVar7) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar9 + fVar9) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        NetworkSystem_0d690();
      }
      NetworkSystem_8b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&local_buffer_000000b0,&local_buffer_000000c0,
                    &local_buffer_00000030);
      *(float *)(unaff_RSI + 0xa4c) = local_buffer_b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = local_buffer_c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          NetworkSystem_0ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        NetworkSystem_0c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      NetworkSystem_32390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      NetworkSystem_32740();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_10f54(int64_t param_1,int64_t param_2)
void NetworkSystem_10f54(int64_t param_1,int64_t param_2)
{
  float fVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RSI;
  float fVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int32_t uVar8;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  float unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  float fVar9;
  int32_t unaff_XMM8_Dc;
  float unaff_XMM9_Da;
  uint64_t local_var_20;
  int32_t local_buffer_50;
  int32_t local_var_58;
  int32_t local_var_70;
  int32_t local_var_78;
  float local_buffer_b0;
  float local_buffer_c0;
  uVar8 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  fVar7 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_2 + 0x3770 + param_1) * 8)
                 - *(int64_t *)(param_2 + 0x3768 + param_1)) * 1e-05;
  if (((unaff_XMM9_Da < fVar7) && (system_status_flag != 1)) && (system_status_flag != 4)) {
    plVar2 = *(int64_t **)(unaff_RSI + 0x590);
    fVar9 = 0.0;
    local_buffer_50 = unaff_XMM8_Da;
    local_var_58 = unaff_XMM8_Dc;
    if (((plVar2 != (int64_t *)0x0) &&
        (lVar5 = (**(code **)(*plVar2 + 0x128))(plVar2,0), fVar7 = extraout_XMM0_Da, lVar5 != 0)) &&
       (lVar6 = InitializationSystem_ConfigManager(lVar5), fVar7 = extraout_XMM0_Da_00, lVar6 != 0)) {
      plVar2 = *(int64_t **)(unaff_RSI + 0x590);
      fVar9 = *(float *)(lVar5 + 0x188);
      pcVar3 = *(code **)(*plVar2 + 0x90);
      local_var_70 = unaff_XMM6_Da;
      local_var_78 = unaff_XMM6_Dc;
      lVar6 = InitializationSystem_ConfigManager(lVar5);
      fVar1 = *(float *)(lVar6 + 8);
      fVar7 = (float)(*pcVar3)(plVar2,0);
      fVar9 = (fVar1 - fVar7) * fVar9;
      if (fVar9 <= unaff_XMM9_Da) {
        fVar9 = unaff_XMM9_Da;
      }
      if (*(int *)(lVar5 + 0x1f0) != -1) {
        lVar5 = SystemCore_Initializer(&system_data_5f30,
                              *(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0xac));
        lVar6 = InitializationSystem_ConfigManager(lVar5);
        fVar7 = extraout_XMM0_Da_01;
        if (lVar6 != 0) {
          fVar7 = *(float *)(lVar5 + 0x188);
          lVar5 = InitializationSystem_ConfigManager(lVar5);
          fVar9 = fVar9 + fVar7 * *(float *)(lVar5 + 8);
          fVar7 = extraout_XMM0_Da_02;
        }
      }
    }
    lVar5 = (int64_t)*(int *)(unaff_RSI + 0x564) * 0xa60;
    *(int64_t *)(lVar5 + 0x3768 + *(int64_t *)(unaff_RSI + 0x8d8)) =
         *(int64_t *)
          (&system_error_code +
          (int64_t)*(int *)(lVar5 + 0x3770 + *(int64_t *)(unaff_RSI + 0x8d8)) * 8) +
         0x5af310800000;
    fVar7 = (float)NetworkSystem_2e450(fVar7,0xffffffff,CONCAT71((int7)((uint64_t)lVar5 >> 8),1),fVar9);
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      fVar7 = (float)NetworkSystem_ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                                   CONCAT44(uVar8,0xffffffff));
    }
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      SystemCore_Validator0(fVar7,0xffffffff);
    }
    PhysicsSystem_CollisionDetector(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(int64_t *)(unaff_RSI + 0x658) != 0)) {
    NetworkSystem_8ac10(*(uint64_t *)(unaff_RSI + 0x590));
    NetworkSystem_2b890();
    plVar2 = *(int64_t **)(unaff_RSI + 0x590);
    uVar8 = (**(code **)(*plVar2 + 0x158))(plVar2);
    *(int32_t *)((int64_t)plVar2 + 0x9c) = uVar8;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar4 = Function_b1460993();
  if (cVar4 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar4 = Function_0d42bf9b();
        if (cVar4 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          local_buffer_b0 = 0.0;
          local_buffer_c0 = 0.0;
          NetworkSystem_8c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar7 = local_buffer_b0 - *(float *)(unaff_RSI + 0xa44);
          fVar9 = local_buffer_c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar7 + fVar7) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar9 + fVar9) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        NetworkSystem_0d690();
      }
      NetworkSystem_8b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&local_buffer_000000b0,&local_buffer_000000c0,
                    &local_buffer_00000030);
      *(float *)(unaff_RSI + 0xa4c) = local_buffer_b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = local_buffer_c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          NetworkSystem_0ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        NetworkSystem_0c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      NetworkSystem_32390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      NetworkSystem_32740();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_10fad(float param_1)
void NetworkSystem_10fad(float param_1)
{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *in_RCX;
  int64_t unaff_RSI;
  int64_t unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int32_t uVar6;
  int32_t uVar7;
  float fVar8;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  float unaff_XMM7_Da;
  float fVar9;
  float unaff_XMM9_Da;
  uint64_t local_var_20;
  int32_t local_var_70;
  int32_t local_var_78;
  float local_buffer_b0;
  float local_buffer_c0;
  uVar7 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  fVar9 = 0.0;
  if (((in_RCX != (int64_t *)0x0) &&
      (lVar4 = (**(code **)(*in_RCX + 0x128))(in_RCX,0), param_1 = extraout_XMM0_Da, lVar4 != 0)) &&
     (lVar5 = InitializationSystem_ConfigManager(lVar4), param_1 = extraout_XMM0_Da_00, lVar5 != 0)) {
    plVar1 = *(int64_t **)(unaff_RSI + 0x590);
    fVar9 = *(float *)(lVar4 + 0x188);
    pcVar2 = *(code **)(*plVar1 + 0x90);
    local_var_70 = unaff_XMM6_Da;
    local_var_78 = unaff_XMM6_Dc;
    lVar5 = InitializationSystem_ConfigManager(lVar4);
    fVar8 = *(float *)(lVar5 + 8);
    param_1 = (float)(*pcVar2)(plVar1,0);
    fVar9 = (fVar8 - param_1) * fVar9;
    if (fVar9 <= unaff_XMM9_Da) {
      fVar9 = unaff_XMM9_Da;
    }
    if (*(int *)(lVar4 + 0x1f0) != -1) {
      lVar4 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0xac))
      ;
      lVar5 = InitializationSystem_ConfigManager(lVar4);
      param_1 = extraout_XMM0_Da_01;
      if (lVar5 != 0) {
        fVar8 = *(float *)(lVar4 + 0x188);
        lVar4 = InitializationSystem_ConfigManager(lVar4);
        fVar9 = fVar9 + fVar8 * *(float *)(lVar4 + 8);
        param_1 = extraout_XMM0_Da_02;
      }
    }
  }
  lVar4 = (int64_t)*(int *)(unaff_RSI + 0x564) * 0xa60;
  *(int64_t *)(lVar4 + 0x3768 + *(int64_t *)(unaff_RSI + 0x8d8)) =
       *(int64_t *)
        (unaff_R15 + (int64_t)*(int *)(lVar4 + 0x3770 + *(int64_t *)(unaff_RSI + 0x8d8)) * 8) +
       0x5af310800000;
  uVar6 = NetworkSystem_2e450(param_1,0xffffffff,CONCAT71((int7)((uint64_t)lVar4 >> 8),1),fVar9);
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar6 = NetworkSystem_ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                          CONCAT44(uVar7,0xffffffff));
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      SystemCore_Validator0(uVar6,0xffffffff);
    }
    PhysicsSystem_CollisionDetector(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(int64_t *)(unaff_RSI + 0x658) != 0)) {
    NetworkSystem_8ac10(*(uint64_t *)(unaff_RSI + 0x590));
    NetworkSystem_2b890();
    plVar1 = *(int64_t **)(unaff_RSI + 0x590);
    uVar7 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((int64_t)plVar1 + 0x9c) = uVar7;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar3 = Function_b1460993();
  if (cVar3 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar3 = Function_0d42bf9b();
        if (cVar3 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          local_buffer_b0 = 0.0;
          local_buffer_c0 = 0.0;
          NetworkSystem_8c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar9 = local_buffer_b0 - *(float *)(unaff_RSI + 0xa44);
          fVar8 = local_buffer_c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar9 + fVar9) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar8 + fVar8) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        NetworkSystem_0d690();
      }
      NetworkSystem_8b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&local_buffer_000000b0,&local_buffer_000000c0,
                    &local_buffer_00000030);
      *(float *)(unaff_RSI + 0xa4c) = local_buffer_b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = local_buffer_c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          NetworkSystem_0ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        NetworkSystem_0c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      NetworkSystem_32390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      NetworkSystem_32740();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_10fc5(void)
void NetworkSystem_10fc5(void)
{
  float fVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RSI;
  int64_t unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar7;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  int32_t uVar8;
  int32_t uVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  uint64_t local_var_20;
  int32_t local_var_70;
  int32_t local_var_78;
  float local_buffer_b0;
  float local_buffer_c0;
  uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  lVar5 = (**(code **)(in_RAX + 0x128))();
  fVar7 = extraout_XMM0_Da;
  if ((lVar5 != 0) && (lVar6 = InitializationSystem_ConfigManager(lVar5), fVar7 = extraout_XMM0_Da_00, lVar6 != 0)) {
    plVar2 = *(int64_t **)(unaff_RSI + 0x590);
    fVar10 = *(float *)(lVar5 + 0x188);
    pcVar3 = *(code **)(*plVar2 + 0x90);
    local_var_70 = unaff_XMM6_Da;
    local_var_78 = unaff_XMM6_Dc;
    lVar6 = InitializationSystem_ConfigManager(lVar5);
    fVar1 = *(float *)(lVar6 + 8);
    fVar7 = (float)(*pcVar3)(plVar2,0);
    unaff_XMM8_Da = (fVar1 - fVar7) * fVar10;
    if (unaff_XMM8_Da <= unaff_XMM9_Da) {
      unaff_XMM8_Da = unaff_XMM9_Da;
    }
    if (*(int *)(lVar5 + 0x1f0) != -1) {
      lVar5 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0xac))
      ;
      lVar6 = InitializationSystem_ConfigManager(lVar5);
      fVar7 = extraout_XMM0_Da_01;
      if (lVar6 != 0) {
        fVar7 = *(float *)(lVar5 + 0x188);
        lVar5 = InitializationSystem_ConfigManager(lVar5);
        unaff_XMM8_Da = unaff_XMM8_Da + fVar7 * *(float *)(lVar5 + 8);
        fVar7 = extraout_XMM0_Da_02;
      }
    }
  }
  lVar5 = (int64_t)*(int *)(unaff_RSI + 0x564) * 0xa60;
  *(int64_t *)(lVar5 + 0x3768 + *(int64_t *)(unaff_RSI + 0x8d8)) =
       *(int64_t *)
        (unaff_R15 + (int64_t)*(int *)(lVar5 + 0x3770 + *(int64_t *)(unaff_RSI + 0x8d8)) * 8) +
       0x5af310800000;
  uVar8 = NetworkSystem_2e450(fVar7,0xffffffff,CONCAT71((int7)((uint64_t)lVar5 >> 8),1),unaff_XMM8_Da);
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar8 = NetworkSystem_ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                          CONCAT44(uVar9,0xffffffff));
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      SystemCore_Validator0(uVar8,0xffffffff);
    }
    PhysicsSystem_CollisionDetector(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(int64_t *)(unaff_RSI + 0x658) != 0)) {
    NetworkSystem_8ac10(*(uint64_t *)(unaff_RSI + 0x590));
    NetworkSystem_2b890();
    plVar2 = *(int64_t **)(unaff_RSI + 0x590);
    uVar9 = (**(code **)(*plVar2 + 0x158))(plVar2);
    *(int32_t *)((int64_t)plVar2 + 0x9c) = uVar9;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar4 = Function_b1460993();
  if (cVar4 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar4 = Function_0d42bf9b();
        if (cVar4 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          local_buffer_b0 = 0.0;
          local_buffer_c0 = 0.0;
          NetworkSystem_8c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar7 = local_buffer_b0 - *(float *)(unaff_RSI + 0xa44);
          fVar10 = local_buffer_c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar7 + fVar7) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar10 + fVar10) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        NetworkSystem_0d690();
      }
      NetworkSystem_8b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&local_buffer_000000b0,&local_buffer_000000c0,
                    &local_buffer_00000030);
      *(float *)(unaff_RSI + 0xa4c) = local_buffer_b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = local_buffer_c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          NetworkSystem_0ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        NetworkSystem_0c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      NetworkSystem_32390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      NetworkSystem_32740();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address