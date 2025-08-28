#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
// 99_part_13_part016.c - 10 个函数
// 函数: void NetworkProtocol_ad9c0(void)
void NetworkProtocol_ad9c0(void)
{
  return;
}
uint64_t NetworkProtocol_ad9d0(uint64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  astack_special_x_20[0] = 0;
  uVar3 = SystemCore_Manager(*param_1,astack_special_x_20);
  uVar2 = astack_special_x_20[0];
  if ((int)uVar3 == 0) {
    uVar6 = astack_special_x_20[0] >> 1;
    uVar4 = astack_special_x_20[0] & 1;
    uVar3 = NetworkProtocol_afac0(param_2,uVar6);
    if ((int)uVar3 == 0) {
      iVar5 = 0;
      astack_special_x_8[0] = 0;
      if (uVar2 >> 1 != 0) {
        do {
          uVar3 = UISystemEventHandler(param_1,uVar3 & 0xffffffff);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar1 = *param_2 + (int64_t)iVar5 * 0x28;
          uVar3 = SystemCore_ConfigManager(param_1,lVar1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar3 = SystemThreadProcessor(*param_1,lVar1 + 0x20,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            if (*(int *)(param_1[1] + 0x18) == 0) {
              uVar3 = SystemCore_Validator(*param_1,lVar1 + 0x10);
              if ((int)uVar3 != 0) {
                return uVar3;
              }
              if (*(uint *)(param_1 + 8) < 0x79) {
                uVar3 = 0;
              }
              else if (*(int *)(param_1[1] + 0x18) == 0) {
                uVar3 = SystemThreadProcessor(*param_1,lVar1 + 0x24,4);
              }
              else {
                uVar3 = 0x1c;
              }
            }
            else {
              uVar3 = 0x1c;
            }
          }
          else {
            uVar3 = 0x1c;
          }
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = SystemCore_Initializer(param_1,astack_special_x_8);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar5 = iVar5 + 1;
          astack_special_x_8[0] = astack_special_x_8[0] & -uVar4;
          uVar3 = (uint64_t)astack_special_x_8[0];
        } while (iVar5 < (int)uVar6);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
uint64_t NetworkProtocol_ad9fb(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int iVar3;
  int64_t *unaff_R15;
  uint local_var_68;
  uVar2 = NetworkProtocol_afac0();
  if ((int)uVar2 == 0) {
    iVar3 = 0;
    if (local_var_68 >> 1 != 0) {
      do {
        uVar2 = UISystemEventHandler();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar1 = *unaff_R15 + (int64_t)iVar3 * 0x28;
        uVar2 = SystemCore_ConfigManager();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar2 = SystemThreadProcessor(*unaff_RBX,lVar1 + 0x20,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar2 = SystemCore_Validator(*unaff_RBX,lVar1 + 0x10);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(uint *)(unaff_RBX + 8) < 0x79) {
              uVar2 = 0;
            }
            else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar2 = SystemThreadProcessor(*unaff_RBX,lVar1 + 0x24,4);
            }
            else {
              uVar2 = 0x1c;
            }
          }
          else {
            uVar2 = 0x1c;
          }
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = SystemCore_Initializer();
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(local_var_68 >> 1));
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t NetworkProtocol_ada25(void)
{
  int64_t lVar1;
  uint in_EAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int unaff_EBP;
  int iVar3;
  int unaff_R14D;
  int64_t *unaff_R15;
  uint local_buffer_50;
  iVar3 = 0;
  local_buffer_50 = in_EAX;
  if (unaff_R14D != 0) {
    do {
      uVar2 = UISystemEventHandler();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar1 = *unaff_R15 + (int64_t)iVar3 * 0x28;
      uVar2 = SystemCore_ConfigManager();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = SystemThreadProcessor(*unaff_RBX,lVar1 + 0x20,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar2 = SystemCore_Validator(*unaff_RBX,lVar1 + 0x10);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(uint *)(unaff_RBX + 8) < 0x79) {
            uVar2 = 0;
          }
          else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar2 = SystemThreadProcessor(*unaff_RBX,lVar1 + 0x24,4);
          }
          else {
            uVar2 = 0x1c;
          }
        }
        else {
          uVar2 = 0x1c;
        }
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = SystemCore_Initializer();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      local_buffer_50 = local_buffer_50 & -unaff_EBP;
    } while (iVar3 < unaff_R14D);
  }
  return 0;
}
// 函数: void NetworkProtocol_adb1e(void)
void NetworkProtocol_adb1e(void)
{
  return;
}
// 函数: void NetworkProtocol_adb28(void)
void NetworkProtocol_adb28(void)
{
  return;
}
uint64_t NetworkProtocol_adb30(int64_t *param_1,uint64_t *param_2,uint param_3)
{
  uint *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint astack_special_x_8 [2];
  uint astack_special_x_10 [2];
  uint astack_special_x_18 [4];
  uVar4 = (int)param_2[1] * 2 | param_3;
  if (uVar4 < 0x8000) {
    astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)uVar4);
    puVar1 = astack_special_x_18;
    uVar3 = 2;
  }
  else {
    puVar1 = astack_special_x_10;
    uVar3 = 4;
    astack_special_x_10[0] = (uVar4 & 0xffffc000 | 0x4000) * 2 | uVar4 & 0x7fff;
  }
  uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar1,uVar3);
  if ((int)uVar3 == 0) {
    astack_special_x_8[0] = 0;
    for (uVar2 = *param_2;
        (*param_2 <= uVar2 && (uVar2 < *param_2 + (int64_t)(int)param_2[1] * 0x28));
        uVar2 = uVar2 + 0x28) {
      uVar3 = UltraHighFreq_ResourceLoader1(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar3 = SystemCleanupProcessor(*param_1,uVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar3 = 0x1c;
          goto LAB_1808adcab;
        }
        astack_special_x_18[0] = *(uint *)(uVar2 + 0x20);
        uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar3 = 0x1c;
          goto LAB_1808adcab;
        }
        uVar3 = NetworkProtocol_a27f0(*param_1,uVar2 + 0x10);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (*(uint *)(param_1 + 8) < 0x79) {
          uVar3 = 0;
        }
        else if (*(int *)(param_1[1] + 0x18) == 0) {
          astack_special_x_18[0] = *(uint *)(uVar2 + 0x24);
          uVar3 = (**(code **)**(uint64_t **)(*param_1 + 8))
                            (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
        }
        else {
          uVar3 = 0x1c;
        }
        if ((int)uVar3 != 0) goto LAB_1808adcab;
      }
      else {
        uVar3 = 0x1c;
LAB_1808adcab:
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = UISystem_Controller(param_1,astack_special_x_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      astack_special_x_8[0] = astack_special_x_8[0] & -param_3;
    }
    uVar3 = 0;
  }
  return uVar3;
}
uint64_t NetworkProtocol_adba3(void)
{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int unaff_EBP;
  uint64_t uVar2;
  uint64_t *unaff_R14;
  uint local_buffer_50;
  int32_t local_var_60;
  local_buffer_50 = 0;
  uVar2 = *unaff_R14;
  do {
    if ((uVar2 < *unaff_R14) || (*unaff_R14 + (int64_t)(int)unaff_R14[1] * 0x28 <= uVar2)) {
      return 0;
    }
    uVar1 = UltraHighFreq_ResourceLoader1();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = SystemCleanupProcessor(*unaff_RBX,uVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar1 = 0x1c;
        goto LAB_1808adcab;
      }
      local_var_60 = *(int32_t *)(uVar2 + 0x20);
      uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000060,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar1 = 0x1c;
        goto LAB_1808adcab;
      }
      uVar1 = NetworkProtocol_a27f0(*unaff_RBX,uVar2 + 0x10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(uint *)(unaff_RBX + 8) < 0x79) {
        uVar1 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        local_var_60 = *(int32_t *)(uVar2 + 0x24);
        uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                          (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000060,4);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) goto LAB_1808adcab;
    }
    else {
      uVar1 = 0x1c;
LAB_1808adcab:
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = UISystem_Controller();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    local_buffer_50 = local_buffer_50 & -unaff_EBP;
    uVar2 = uVar2 + 0x28;
  } while( true );
}
// 函数: void NetworkProtocol_adcdb(void)
void NetworkProtocol_adcdb(void)
{
  return;
}
uint64_t * NetworkProtocol_adcf0(uint64_t *param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  NetworkProtocol_b0200();
  *(int32_t *)((int64_t)param_1 + 0x3c) = 0xffffffff;
  param_1[6] = &ui_system_data_1456_ptr;
  *(int32_t *)(param_1 + 7) = 0;
  puVar5 = (int32_t *)SystemCoreProcessor();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 8) = *puVar5;
  *(int32_t *)((int64_t)param_1 + 0x44) = uVar1;
  *(int32_t *)(param_1 + 9) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x4c) = uVar3;
  *param_1 = &processed_var_9736_ptr;
  param_1[6] = &processed_var_9792_ptr;
  puVar5 = (int32_t *)SystemCoreProcessor();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 10) = *puVar5;
  *(int32_t *)((int64_t)param_1 + 0x54) = uVar1;
  *(int32_t *)(param_1 + 0xb) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x5c) = uVar3;
  puVar5 = (int32_t *)SystemCoreProcessor();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 0xc) = *puVar5;
  *(int32_t *)((int64_t)param_1 + 100) = uVar1;
  *(int32_t *)(param_1 + 0xd) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x6c) = uVar3;
  puVar6 = (uint64_t *)SystemCoreProcessor();
  uVar4 = puVar6[1];
  param_1[0xe] = *puVar6;
  param_1[0xf] = uVar4;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x42c80000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f800000;
  *(int32_t *)(param_1 + 0x16) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xb4) = 0x7fffffff;
  *(uint64_t *)((int64_t)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_addd0(int64_t *param_1)
void NetworkProtocol_addd0(int64_t *param_1)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uVar4 = *(uint *)((int64_t)param_1 + 0xc);
  uVar3 = 0;
  uVar5 = (uint64_t)uVar4;
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemCore_42250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar5 = uVar3;
  }
  uVar4 = (uint)uVar5;
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar2 = *param_1;
    if (iVar1 < 0) {
      do {
        *(uint64_t *)(lVar2 + (int64_t)iVar1 * 8 + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while ((int64_t)uVar3 < (int64_t)-iVar1);
      uVar4 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    NetworkProtocol_af110(param_1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ade90(int64_t *param_1)
void NetworkProtocol_ade90(int64_t *param_1)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uVar4 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemCore_42250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar4 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar3 = (int64_t)-iVar1;
    if (iVar1 < 0) {
      lVar2 = (int64_t)iVar1 * 0x10 + *param_1 + 0xc;
      do {
        *(uint64_t *)(lVar2 + -0xc) = 0;
        *(uint64_t *)(lVar2 + -4) = 0;
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      uVar4 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    SystemCore_SecurityHandler(param_1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_adf50(uint64_t *param_1)
void NetworkProtocol_adf50(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  int64_t *plVar5;
  iVar3 = NetworkProtocol_af3c0(param_1 + 0x1b,0);
  if ((iVar3 == 0) &&
     (uVar4 = (int)*(uint *)((int64_t)param_1 + 0xe4) >> 0x1f,
     *(int *)(param_1 + 0x1c) < (int)((*(uint *)((int64_t)param_1 + 0xe4) ^ uVar4) - uVar4))) {
    NetworkProtocol_aeda0(param_1 + 0x1b,*(int *)(param_1 + 0x1c));
  }
  RenderingSystem_ShaderManager0(param_1 + 0x19,0);
  *param_1 = &processed_var_936_ptr;
  plVar1 = param_1 + 4;
  plVar2 = (int64_t *)*plVar1;
  if ((plVar2 == plVar1) && ((int64_t *)param_1[5] == plVar1)) {
    Function_1c5dac80(plVar1);
    *param_1 = &ui_system_data_1544_ptr;
    *(int32_t *)(param_1 + 1) = 0xdeadf00d;
    return;
  }
  plVar5 = (int64_t *)0x0;
  if (plVar2 != plVar1) {
    plVar5 = plVar2;
  }
  *(int32_t *)((int64_t)plVar5 + 0x44) = 0xffffffff;
  UltraHighFreq_InputHandler1(plVar5 + 4);
  UltraHighFreq_InputHandler1(plVar5 + 2);
  *(int64_t *)plVar5[1] = *plVar5;
  *(int64_t *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
  *(int64_t **)plVar5[1] = plVar5;
  *(int64_t *)(*plVar5 + 8) = plVar5[1];
  plVar5[1] = (int64_t)plVar5;
  *plVar5 = (int64_t)plVar5;
// WARNING: Subroutine does not return
  SystemCore_42250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&processed_var_976_ptr,0x30,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_adfc0(int64_t *param_1)
void NetworkProtocol_adfc0(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  int64_t *plVar3;
  UIComponent_StateProcessor(param_1 + 0xc);
  UIComponent_StateProcessor(param_1 + 10);
  iVar1 = NetworkProtocol_af810(param_1 + 6,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((int64_t)param_1 + 0x3c) >> 0x1f,
     (int)param_1[7] < (int)((*(uint *)((int64_t)param_1 + 0x3c) ^ uVar2) - uVar2))) {
    RenderingSystem_TextureManager(param_1 + 6,(int)param_1[7]);
  }
  iVar1 = NetworkProtocol_af810(param_1 + 4,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((int64_t)param_1 + 0x2c) >> 0x1f,
     (int)param_1[5] < (int)((*(uint *)((int64_t)param_1 + 0x2c) ^ uVar2) - uVar2))) {
    RenderingSystem_TextureManager(param_1 + 4,(int)param_1[5]);
  }
  UIComponent_StateProcessor(param_1 + 2);
  plVar3 = (int64_t *)*param_1;
  if (plVar3 != param_1) {
    if (plVar3 != param_1) {
      *(int64_t *)plVar3[1] = *plVar3;
      *(int64_t *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (int64_t)plVar3;
      *plVar3 = (int64_t)plVar3;
      *(int64_t **)plVar3[1] = plVar3;
      *(int64_t *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (int64_t)plVar3;
      *plVar3 = (int64_t)plVar3;
// WARNING: Subroutine does not return
      SystemCore_42250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&ui_system_data_1696_ptr,0xe1,1);
    }
    plVar3 = (int64_t *)*param_1;
  }
  *(int64_t **)param_1[1] = plVar3;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  return;
}
uint64_t NetworkProtocol_ae050(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae090(uint64_t *param_1,uint64_t param_2)
{
  NetworkProtocol_ade90(param_1 + 8);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &ui_system_data_1544_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae0e0(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_d9bd0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}
int64_t NetworkProtocol_ae120(int64_t param_1,uint param_2)
{
  RenderingSystem_ShaderManager0(param_1 + 200,0);
  NetworkProtocol_b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae170(uint64_t *param_1,uint64_t param_2)
{
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &ui_system_data_1544_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae1b0(uint64_t *param_1,uint param_2)
{
  int iVar1;
  uint uVar2;
  iVar1 = NetworkProtocol_af340(param_1 + 6,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((int64_t)param_1 + 0x3c) >> 0x1f,
     *(int *)(param_1 + 7) < (int)((*(uint *)((int64_t)param_1 + 0x3c) ^ uVar2) - uVar2))) {
    NetworkProtocol_676f0(param_1 + 6,*(int *)(param_1 + 7));
  }
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &ui_system_data_1544_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40);
  }
  return param_1;
}
int64_t NetworkProtocol_ae230(int64_t param_1,uint param_2)
{
  RenderingSystem_ShaderManager0(param_1 + 200,0);
  NetworkProtocol_b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae280(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_9352_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae2b0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_9352_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae2e0(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_d9ba0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae320(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * NetworkProtocol_ae360(uint64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  *param_1 = &processed_var_9808_ptr;
  plVar2 = param_1 + 0x1d;
  param_1[6] = &processed_var_9792_ptr;
  plVar1 = (int64_t *)*plVar2;
  if ((plVar1 == plVar2) && ((int64_t *)param_1[0x1e] == plVar2)) {
    Function_1c5dac80(plVar2);
    RenderingSystem_ShaderManager0(param_1 + 0x19,0);
    NetworkProtocol_b02a0(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1,0x100);
    }
    return param_1;
  }
  if (plVar1 == plVar2) {
    plVar1 = (int64_t *)0x0;
  }
  if (plVar1 != (int64_t *)0x0) {
    plVar2 = plVar1;
  }
  *(int64_t *)plVar2[1] = *plVar2;
  *(int64_t *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (int64_t)plVar2;
  *plVar2 = (int64_t)plVar2;
  *(int64_t **)plVar2[1] = plVar2;
  *(int64_t *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (int64_t)plVar2;
  *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
  SystemCore_42250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&processed_var_9872_ptr,0x166,1);
}
int64_t NetworkProtocol_ae460(int64_t param_1,uint param_2)
{
  RenderingSystem_ShaderManager0(param_1 + 200,0);
  NetworkProtocol_b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae4b0(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae4f0(uint64_t *param_1,uint64_t param_2)
{
  SystemCore_MemoryManager(param_1 + 6);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &ui_system_data_1544_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae540(uint64_t *param_1,uint64_t param_2)
{
  NetworkProtocol_addd0(param_1 + 4);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &ui_system_data_1544_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae590(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae5d0(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_adf50();
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}
uint64_t * NetworkProtocol_ae610(uint64_t *param_1,uint64_t param_2)
{
  int iVar1;
  uint uVar2;
  UltraHighFreq_InputHandler1(param_1 + 0xb);
  iVar1 = NetworkProtocol_af770(param_1 + 9,0);
  if ((iVar1 == 0) &&
     (uVar2 = (int)*(uint *)((int64_t)param_1 + 0x54) >> 0x1f,
     *(int *)(param_1 + 10) < (int)((*(uint *)((int64_t)param_1 + 0x54) ^ uVar2) - uVar2))) {
    NetworkProtocol_83750(param_1 + 9,*(int *)(param_1 + 10));
  }
  UltraHighFreq_InputHandler1(param_1 + 5);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &ui_system_data_1544_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae6a0(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_d9bd0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}
int64_t NetworkProtocol_ae6e0(int64_t param_1,uint64_t param_2)
{
  SystemCore_MemoryManager(param_1 + 0x70);
  SystemCore_MemoryManager(param_1 + 0x60);
  NetworkProtocol_d9bd0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}
int64_t NetworkProtocol_ae730(int64_t param_1,uint64_t param_2)
{
  SystemCore_MemoryManager(param_1 + 0xd8);
  RenderingSystem_ShaderManager0(param_1 + 200,0);
  NetworkProtocol_b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae790(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_b02a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}
uint64_t NetworkProtocol_ae7d0(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_adf50();
  if ((param_2 & 1) != 0) {
    free(param_1,0x110);
  }
  return param_1;
}
int64_t NetworkProtocol_ae810(int64_t param_1,uint param_2)
{
  RenderingSystem_ShaderManager0(param_1 + 200,0);
  NetworkProtocol_b02a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_ae8e0(int64_t param_1,int param_2,uint64_t *param_3)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)
           SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&processed_var_9456_ptr,0x119,0,0,1);
  if (puVar1 == (uint64_t *)0x0) {
    return 0x26;
  }
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 1;
  *puVar1 = &processed_var_9360_ptr;
  *(int32_t *)(puVar1 + 3) = 0;
  *param_3 = puVar1;
  *(uint64_t **)(*(int64_t *)(param_1 + 0x48) + (int64_t)param_2 * 8) = puVar1;
  return 0;
}
uint64_t NetworkProtocol_ae9d0(int64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int64_t lVar10;
  iVar7 = (int)param_1[1];
  iVar9 = 0;
  if (-1 < iVar7 + -1) {
    lVar1 = *param_1;
    lVar10 = *param_2 + 0x10;
    iVar5 = iVar7 + -1;
    do {
      iVar3 = memcmp(*(int64_t *)(lVar1 + (int64_t)iVar5 * 8) + 0x10,lVar10,0x10);
      if (iVar3 < 0) {
        iVar9 = iVar5 + 1;
        break;
      }
      iVar3 = (iVar5 + iVar9) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(lVar10,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar8 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,lVar10,0x10);
        uVar8 = (uint)(iVar4 < 0);
        if (uVar8 == 0) goto LAB_1808aeb35;
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar8) {
        iVar4 = iVar5;
      }
      if (-1 < (int)uVar8) {
        iVar9 = iVar3 + 1;
      }
      iVar5 = iVar4;
    } while (iVar9 <= iVar4);
  }
  if ((iVar9 < 0) || (iVar7 < iVar9)) {
LAB_1808aeb35:
    uVar6 = 0x1c;
  }
  else {
    iVar7 = iVar7 + 1;
    uVar8 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
    iVar5 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar8) - uVar8;
    if (iVar5 < iVar7) {
      iVar3 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar7;
      if (iVar7 <= iVar3) {
        iVar5 = iVar3;
      }
      if (iVar5 < 8) {
        iVar3 = 8;
      }
      else if (iVar3 < iVar7) {
        iVar3 = iVar7;
      }
      uVar6 = RenderingTextureManager0(param_1,iVar3);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    iVar7 = (int)param_1[1] - iVar9;
    if (0 < iVar7) {
      lVar1 = *param_1 + (int64_t)iVar9 * 8;
// WARNING: Subroutine does not return
      memmove(lVar1 + 8,lVar1,(int64_t)iVar7 << 3);
    }
    *(int64_t *)(*param_1 + (int64_t)iVar9 * 8) = *param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    uVar6 = 0;
  }
  return uVar6;
}
uint64_t * NetworkProtocol_aeb60(int64_t *param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_18 [16];
  puVar2 = (uint64_t *)(**(code **)(*param_1 + 0x38))(param_1,stack_array_18);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}
uint64_t * NetworkProtocol_aebb0(int64_t *param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_18 [16];
  puVar2 = (uint64_t *)(**(code **)(*param_1 + 0x40))(param_1,stack_array_18);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}
uint64_t * NetworkProtocol_aebe0(int64_t *param_1,uint64_t *param_2)
{
  uint64_t local_var_18;
  uint64_t local_var_10;
  (**(code **)(*param_1 + 0x30))(param_1,&local_var_18);
  *param_2 = local_var_18;
  param_2[1] = local_var_10;
  return param_2;
}
// 函数: void NetworkProtocol_aec50(int64_t *param_1,int64_t *param_2)
void NetworkProtocol_aec50(int64_t *param_1,int64_t *param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  lVar2 = param_1[1];
  iVar5 = (int)lVar2 + 1;
  uVar6 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  iVar3 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar6) - uVar6;
  if (iVar3 < iVar5) {
    iVar7 = (int)((float)iVar3 * 1.5);
    iVar3 = iVar5;
    if (iVar5 <= iVar7) {
      iVar3 = iVar7;
    }
    if (iVar3 < 2) {
      iVar7 = 2;
    }
    else if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    iVar3 = NetworkProtocol_83750(param_1,iVar7);
    if (iVar3 != 0) {
      return;
    }
  }
  lVar8 = (int64_t)(int)lVar2 * 0x1c;
  lVar2 = *param_1;
  puVar4 = (uint64_t *)SystemCoreProcessor();
  uVar1 = puVar4[1];
  *(uint64_t *)(lVar8 + lVar2) = *puVar4;
  ((uint64_t *)(lVar8 + lVar2))[1] = uVar1;
  *(uint64_t *)(lVar8 + 0x10 + lVar2) = 0;
  *(int8_t *)(lVar8 + 0x18 + lVar2) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (param_2 != (int64_t *)0x0) {
    *param_2 = *param_1 + lVar8;
  }
  return;
}
// 函数: void NetworkProtocol_aecb0(void)
void NetworkProtocol_aecb0(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  int64_t *unaff_RDI;
  int64_t *unaff_R14;
  lVar4 = unaff_RBX * 0x1c;
  lVar1 = *unaff_RDI;
  puVar3 = (uint64_t *)SystemCoreProcessor();
  uVar2 = puVar3[1];
  *(uint64_t *)(lVar4 + lVar1) = *puVar3;
  ((uint64_t *)(lVar4 + lVar1))[1] = uVar2;
  *(uint64_t *)(lVar4 + 0x10 + lVar1) = 0;
  *(int8_t *)(lVar4 + 0x18 + lVar1) = 0;
  *(int *)(unaff_RDI + 1) = (int)unaff_RDI[1] + 1;
  if (unaff_R14 != (int64_t *)0x0) {
    *unaff_R14 = *unaff_RDI + lVar4;
  }
  return;
}