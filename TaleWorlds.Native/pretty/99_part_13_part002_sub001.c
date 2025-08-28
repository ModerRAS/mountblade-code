#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
// 99_part_13_part002_sub001.c - 7 个函数
// 99_part_13_part002.c - 7 个函数
// 函数: void NetworkProtocol_a6a31(void)
void NetworkProtocol_a6a31(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a6a40(uint64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint astack_special_x_8 [2];
  int64_t lStackX_10;
  uint astack_special_x_20 [2];
  iVar5 = 0;
  astack_special_x_20[0] = 0;
  lStackX_10 = param_2;
  uVar1 = SystemCore_Manager(*param_1,astack_special_x_20);
  if ((int)uVar1 == 0) {
    uVar6 = astack_special_x_20[0] & 1;
    uVar7 = astack_special_x_20[0] >> 1;
    astack_special_x_8[0] = 0;
    if (uVar7 != 0) {
      do {
        uVar1 = UISystemEventHandler(param_1,astack_special_x_8[0]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (int64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&processed_var_816_ptr,0x269,0,
                               (char)uVar1,1);
        if (plVar2 == (int64_t *)0x0) {
          return 0x26;
        }
        *plVar2 = (int64_t)plVar2;
        plVar2[1] = (int64_t)plVar2;
        plVar2[2] = 0;
        plVar2[3] = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
        if (*(int *)(param_1[1] + 0x18) == 0) {
          iVar4 = SystemCore_Validator(*param_1,plVar2 + 2);
          if (iVar4 != 0) goto LAB_1808a6b62;
          if (*(int *)(param_1[1] + 0x18) != 0) {
            iVar4 = 0x1c;
            goto LAB_1808a6b62;
          }
          iVar4 = SystemCore_Validator(*param_1,plVar2 + 4);
          if (iVar4 != 0) goto LAB_1808a6b62;
        }
        else {
          iVar4 = 0x1c;
LAB_1808a6b62:
          if (iVar4 != 0) {
            SystemCore_MemoryManager(plVar2 + 4);
            SystemCore_MemoryManager(plVar2 + 2);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
          }
        }
        plVar3 = (int64_t *)*plVar2;
        if (plVar3 != plVar2) {
          iVar4 = 0;
          do {
            plVar3 = (int64_t *)*plVar3;
            iVar4 = iVar4 + 1;
          } while (plVar3 != plVar2);
          if (iVar4 != 0) {
            SystemCore_MemoryManager(plVar2 + 4);
            SystemCore_MemoryManager(plVar2 + 2);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
          }
        }
        plVar2[1] = *(int64_t *)(lStackX_10 + 8);
        *plVar2 = lStackX_10;
        *(int64_t **)(lStackX_10 + 8) = plVar2;
        *(int64_t **)plVar2[1] = plVar2;
        uVar1 = SystemCore_Initializer(param_1,astack_special_x_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        astack_special_x_8[0] = astack_special_x_8[0] & -uVar6;
      } while (iVar5 < (int)uVar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a6a69(void)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  uint local_buffer_80;
  int64_t local_buffer_88;
  uint local_buffer_98;
  local_buffer_80 = (uint)unaff_RDI;
  uVar6 = unaff_RDI & 0xffffffff;
  if (local_buffer_98 >> 1 == 0) {
LAB_1808a6cd2:
    uVar1 = 0;
  }
  else {
    while (uVar1 = UISystemEventHandler(), (int)uVar1 == 0) {
      plVar2 = (int64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&processed_var_816_ptr,0x269,
                             (int)unaff_RDI);
      if (plVar2 == (int64_t *)0x0) {
        return 0x26;
      }
      *plVar2 = (int64_t)plVar2;
      plVar2[1] = (int64_t)plVar2;
      plVar2[2] = unaff_RDI;
      plVar2[3] = 0;
      plVar2[4] = unaff_RDI;
      plVar2[5] = 0;
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        iVar4 = SystemCore_Validator(*unaff_RSI,plVar2 + 2);
        if (iVar4 != 0) goto LAB_1808a6b62;
        if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
          iVar4 = 0x1c;
          goto LAB_1808a6b62;
        }
        iVar4 = SystemCore_Validator(*unaff_RSI,plVar2 + 4);
        if (iVar4 != 0) goto LAB_1808a6b62;
      }
      else {
        iVar4 = 0x1c;
LAB_1808a6b62:
        if (iVar4 != 0) {
          SystemCore_MemoryManager(plVar2 + 4);
          SystemCore_MemoryManager(plVar2 + 2);
          *(int64_t *)plVar2[1] = *plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
          *(int64_t **)plVar2[1] = plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
        }
      }
      plVar3 = (int64_t *)*plVar2;
      if (plVar3 != plVar2) {
        iVar4 = 0;
        do {
          plVar3 = (int64_t *)*plVar3;
          iVar4 = iVar4 + 1;
        } while (plVar3 != plVar2);
        if (iVar4 != 0) {
          SystemCore_MemoryManager(plVar2 + 4);
          SystemCore_MemoryManager(plVar2 + 2);
          *(int64_t *)plVar2[1] = *plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
          *(int64_t **)plVar2[1] = plVar2;
          *(int64_t *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (int64_t)plVar2;
          *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
        }
      }
      plVar2[1] = *(int64_t *)(local_buffer_88 + 8);
      *plVar2 = local_buffer_88;
      *(int64_t **)(local_buffer_88 + 8) = plVar2;
      *(int64_t **)plVar2[1] = plVar2;
      uVar1 = SystemCore_Initializer();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      local_buffer_80 = local_buffer_80 & -(local_buffer_98 & 1);
      if ((int)(local_buffer_98 >> 1) <= (int)uVar5) goto LAB_1808a6cd2;
      unaff_RDI = 0;
    }
  }
  return uVar1;
}
// 函数: void NetworkProtocol_a6cf5(void)
void NetworkProtocol_a6cf5(void)
{
  return;
}
uint64_t NetworkProtocol_a6d00(int64_t *param_1,uint64_t *param_2,uint param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint astack_special_x_8 [2];
  uint astack_special_x_10 [2];
  int16_t astack_special_x_18 [4];
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    astack_special_x_18[0] = (int16_t)uVar3;
    puVar4 = (uint *)astack_special_x_18;
    uVar5 = 2;
  }
  else {
    puVar4 = astack_special_x_10;
    uVar5 = 4;
    astack_special_x_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    astack_special_x_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = UltraHighFreq_ResourceLoader1(param_1,astack_special_x_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar5 = NetworkProtocol_a27f0(*param_1,puVar1 + 2);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a6df4;
        }
        uVar5 = NetworkProtocol_a27f0(*param_1,puVar1 + 4);
        if ((int)uVar5 != 0) goto LAB_1808a6df4;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a6df4:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = UISystem_Controller(param_1,astack_special_x_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      astack_special_x_8[0] = astack_special_x_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t NetworkProtocol_a6d84(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  uint64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint local_buffer_50;
  puVar1 = (uint64_t *)*unaff_R14;
  local_buffer_50 = unaff_EBX;
  do {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = UltraHighFreq_ResourceLoader1();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar2 = NetworkProtocol_a27f0(*unaff_RDI,puVar1 + 2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        goto LAB_1808a6df4;
      }
      uVar2 = NetworkProtocol_a27f0(*unaff_RDI,puVar1 + 4);
      if ((int)uVar2 != 0) goto LAB_1808a6df4;
    }
    else {
      uVar2 = 0x1c;
LAB_1808a6df4:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = UISystem_Controller();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_buffer_50 = local_buffer_50 & -unaff_R15D;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}
// 函数: void NetworkProtocol_a6e37(void)
void NetworkProtocol_a6e37(void)
{
  return;
}
uint64_t NetworkProtocol_a6e50(int64_t *param_1,uint64_t *param_2,uint param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint astack_special_x_8 [2];
  uint astack_special_x_10 [2];
  uint astack_special_x_18 [2];
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)uVar3);
    puVar4 = astack_special_x_18;
    uVar5 = 2;
  }
  else {
    puVar4 = astack_special_x_10;
    uVar5 = 4;
    astack_special_x_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    astack_special_x_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = UltraHighFreq_ResourceLoader1(param_1,astack_special_x_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        astack_special_x_18[0] = *(uint *)((int64_t)puVar1 + 0x24);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a6f95;
        }
        uVar5 = SystemCleanupProcessor(*param_1,puVar1 + 2);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a6f95;
        }
        astack_special_x_10[0] = *(uint *)(puVar1 + 4);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_10,4);
        if ((int)uVar5 != 0) goto LAB_1808a6f95;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a6f95:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = UISystem_Controller(param_1,astack_special_x_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      astack_special_x_8[0] = astack_special_x_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t NetworkProtocol_a6ed4(int32_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_03;
  uint local_buffer_50;
  int32_t local_buffer_58;
  int32_t local_buffer_60;
  puVar1 = (uint64_t *)*unaff_R14;
  local_buffer_50 = unaff_EBX;
  do {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = UltraHighFreq_ResourceLoader1(param_1,local_buffer_50);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      local_buffer_60 = *(int32_t *)((int64_t)puVar1 + 0x24);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RDI + 8))
                        (*(uint64_t **)(*unaff_RDI + 8),&local_buffer_00000060,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_00;
        goto LAB_1808a6f95;
      }
      uVar2 = SystemCleanupProcessor(*unaff_RDI,puVar1 + 2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_01;
        goto LAB_1808a6f95;
      }
      local_buffer_58 = *(int32_t *)(puVar1 + 4);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RDI + 8))
                        (*(uint64_t **)(*unaff_RDI + 8),&local_buffer_00000058,4);
      uVar3 = extraout_XMM0_Da_02;
      if ((int)uVar2 != 0) goto LAB_1808a6f95;
    }
    else {
      uVar2 = 0x1c;
      uVar3 = extraout_XMM0_Da;
LAB_1808a6f95:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = UISystem_Controller(uVar3,&local_buffer_00000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_buffer_50 = local_buffer_50 & -unaff_R15D;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
    param_1 = extraout_XMM0_Da_03;
  } while( true );
}
// 函数: void NetworkProtocol_a6fd8(void)
void NetworkProtocol_a6fd8(void)
{
  return;
}
uint64_t NetworkProtocol_a6ff0(int64_t *param_1,uint64_t *param_2,uint param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint astack_special_x_8 [2];
  uint astack_special_x_10 [2];
  uint astack_special_x_18 [2];
  int32_t stack_array_38 [4];
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)uVar3);
    puVar4 = astack_special_x_18;
    uVar5 = 2;
  }
  else {
    puVar4 = astack_special_x_10;
    uVar5 = 4;
    astack_special_x_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    astack_special_x_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = UltraHighFreq_ResourceLoader1(param_1,astack_special_x_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        astack_special_x_18[0] = *(uint *)((int64_t)puVar1 + 0x2c);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_18,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a7170;
        }
        uVar5 = SystemCleanupProcessor(*param_1,puVar1 + 3);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a7170;
        }
        astack_special_x_10[0] = *(uint *)(puVar1 + 5);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_10,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a7170;
        }
        stack_array_38[0] = *(int32_t *)(puVar1 + 6);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),stack_array_38,4);
        if ((int)uVar5 != 0) goto LAB_1808a7170;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a7170:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = UISystem_Controller(param_1,astack_special_x_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      astack_special_x_8[0] = astack_special_x_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t
NetworkProtocol_a7073(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int unaff_EBP;
  uint unaff_EDI;
  uint64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_04;
  uint local_buffer_60;
  int32_t local_buffer_68;
  int32_t local_buffer_70;
  puVar1 = (uint64_t *)*unaff_R15;
  local_buffer_60 = unaff_EDI;
  do {
    if (puVar1 == unaff_R15) {
      return 0;
    }
    uVar2 = UltraHighFreq_ResourceLoader1(param_1,local_buffer_60);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      local_buffer_70 = *(int32_t *)((int64_t)puVar1 + 0x2c);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000070,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_00;
        goto LAB_1808a7170;
      }
      uVar2 = SystemCleanupProcessor(*unaff_RBX,puVar1 + 3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_01;
        goto LAB_1808a7170;
      }
      local_buffer_68 = *(int32_t *)(puVar1 + 5);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000068,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_02;
        goto LAB_1808a7170;
      }
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000020,4,param_4,
                         *(int32_t *)(puVar1 + 6));
      uVar3 = extraout_XMM0_Da_03;
      if ((int)uVar2 != 0) goto LAB_1808a7170;
    }
    else {
      uVar2 = 0x1c;
      uVar3 = extraout_XMM0_Da;
LAB_1808a7170:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = UISystem_Controller(uVar3,&local_buffer_00000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_buffer_60 = local_buffer_60 & -unaff_EBP;
    if (puVar1 == unaff_R15) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
    param_1 = extraout_XMM0_Da_04;
  } while( true );
}
// 函数: void NetworkProtocol_a71b2(void)
void NetworkProtocol_a71b2(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a71c0(uint64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  iVar5 = 0;
  astack_special_x_20[0] = 0;
  uVar1 = SystemCore_Manager(*param_1,astack_special_x_20);
  if ((int)uVar1 == 0) {
    uVar7 = astack_special_x_20[0] & 1;
    astack_special_x_8[0] = 0;
    uVar6 = astack_special_x_20[0] >> 1;
    if (uVar6 != 0) {
      do {
        uVar1 = UISystemEventHandler(param_1,astack_special_x_8[0]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (int64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&processed_var_816_ptr,0x269,0,
                               (char)uVar1,1);
        if (plVar2 == (int64_t *)0x0) {
          return 0x26;
        }
        *plVar2 = (int64_t)plVar2;
        plVar2[1] = (int64_t)plVar2;
        *(int32_t *)(plVar2 + 2) = 0;
        plVar2[3] = 0;
        *(int32_t *)(plVar2 + 4) = 0;
        if (*(int *)(param_1[1] + 0x18) == 0) {
          iVar4 = SystemErrorHandler(*param_1,plVar2 + 2,4);
          if (iVar4 != 0) goto LAB_1808a72d9;
          if (*(int *)(param_1[1] + 0x18) != 0) {
            iVar4 = 0x1c;
            goto LAB_1808a72d9;
          }
          iVar4 = NetworkProtocol_993e0(plVar2 + 3,*param_1);
          if (iVar4 != 0) goto LAB_1808a72d9;
        }
        else {
          iVar4 = 0x1c;
LAB_1808a72d9:
          if (iVar4 != 0) {
            RenderingSystem_ShaderManager0(plVar2 + 3,0);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
          }
        }
        plVar3 = (int64_t *)*plVar2;
        iVar4 = 0;
        if (plVar3 != plVar2) {
          do {
            plVar3 = (int64_t *)*plVar3;
            iVar4 = iVar4 + 1;
          } while (plVar3 != plVar2);
          if (iVar4 != 0) {
            RenderingSystem_ShaderManager0(plVar2 + 3,0);
            *(int64_t *)plVar2[1] = *plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
            *(int64_t **)plVar2[1] = plVar2;
            *(int64_t *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (int64_t)plVar2;
            *plVar2 = (int64_t)plVar2;
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2144_ptr,0xc6,1);
          }
        }
        plVar2[1] = *(int64_t *)(param_2 + 8);
        *plVar2 = param_2;
        *(int64_t **)(param_2 + 8) = plVar2;
        *(int64_t **)plVar2[1] = plVar2;
        uVar1 = SystemCore_Initializer(param_1,astack_special_x_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        astack_special_x_8[0] = astack_special_x_8[0] & -uVar7;
      } while (iVar5 < (int)uVar6);
    }
    uVar1 = 0;
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a71ea(void)
{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *unaff_RSI;
  int32_t uVar8;
  uint64_t unaff_RDI;
  int64_t unaff_R13;
  uint local_buffer_80;
  uint local_buffer_98;
  local_buffer_80 = (uint)unaff_RDI;
  uVar7 = unaff_RDI & 0xffffffff;
  if (local_buffer_98 >> 1 != 0) {
    do {
      uVar2 = UISystemEventHandler();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar8 = (int32_t)unaff_RDI;
      plVar3 = (int64_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&processed_var_816_ptr,0x269,uVar8
                            );
      if (plVar3 == (int64_t *)0x0) {
        return 0x26;
      }
      *plVar3 = (int64_t)plVar3;
      plVar3[1] = (int64_t)plVar3;
      *(int32_t *)(plVar3 + 2) = uVar8;
      plVar3[3] = unaff_RDI;
      *(int32_t *)(plVar3 + 4) = uVar8;
      if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
        iVar1 = SystemErrorHandler(*unaff_RSI,plVar3 + 2,4);
        if (iVar1 != 0) goto LAB_1808a72d9;
        if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
          iVar1 = 0x1c;
          goto LAB_1808a72d9;
        }
        iVar1 = NetworkProtocol_993e0(plVar3 + 3,*unaff_RSI);
        if (iVar1 != 0) goto LAB_1808a72d9;
      }
      else {
        iVar1 = 0x1c;
LAB_1808a72d9:
        if (iVar1 != 0) {
          RenderingSystem_ShaderManager0(plVar3 + 3,0);
          *(int64_t *)plVar3[1] = *plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
          *(int64_t **)plVar3[1] = plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
      }
      plVar4 = (int64_t *)*plVar3;
      unaff_RDI = 0;
      uVar6 = unaff_RDI;
      if (plVar4 != plVar3) {
        do {
          plVar4 = (int64_t *)*plVar4;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (uint64_t)uVar5;
        } while (plVar4 != plVar3);
        if (uVar5 != 0) {
          RenderingSystem_ShaderManager0(plVar3 + 3,0);
          *(int64_t *)plVar3[1] = *plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
          *(int64_t **)plVar3[1] = plVar3;
          *(int64_t *)(*plVar3 + 8) = plVar3[1];
          plVar3[1] = (int64_t)plVar3;
          *plVar3 = (int64_t)plVar3;
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
      }
      plVar3[1] = *(int64_t *)(unaff_R13 + 8);
      *plVar3 = unaff_R13;
      *(int64_t **)(unaff_R13 + 8) = plVar3;
      *(int64_t **)plVar3[1] = plVar3;
      uVar2 = SystemCore_Initializer();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar5;
      local_buffer_80 = local_buffer_80 & -(local_buffer_98 & 1);
    } while ((int)uVar5 < (int)(local_buffer_98 >> 1));
  }
  return 0;
}
// 函数: void NetworkProtocol_a7366(void)
void NetworkProtocol_a7366(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address