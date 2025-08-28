#include "ultra_high_freq_fun_definitions.h"
/* UISystem_Controller - UISystem_Controller */
#define UISystem_Controller UISystem_Controller
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor
#include "SystemInputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_12_part079.c - 5 个函数
// 函数: void NetworkProtocol_a0634(void)
void NetworkProtocol_a0634(void)
{
  return;
}
// 函数: void NetworkProtocol_a0640(uint64_t param_1,int64_t param_2)
void NetworkProtocol_a0640(uint64_t param_1,int64_t param_2)
{
  NetworkProtocol_9f530(param_1,param_2,0x5355424d,0x4253424d,0x48 < *(uint *)(param_2 + 0x40));
  return;
}
uint64_t NetworkProtocol_a0670(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint astack_special_x_18 [2];
  int32_t astack_special_x_20 [2];
  uint stack_array_18 [4];
  uVar2 = UltraHighFreq_ResourceLoader1(param_2,0);
  if ((int)uVar2 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    astack_special_x_18[0] = *(uint *)(param_1 + 0x30);
    uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                      (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
    if ((int)uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      astack_special_x_18[0] = *(uint *)(param_1 + 0x34);
      uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                        (*(uint64_t **)(*param_2 + 8),astack_special_x_18,4);
      if (((int)uVar2 == 0) && (uVar2 = UISystem_Controller(param_2,0), (int)uVar2 == 0)) {
        if (0x6b < *(uint *)(param_2 + 8)) {
          uVar1 = *(int *)(param_1 + 0x40) * 2;
          if ((uVar1 | 1) < 0x8000) {
            astack_special_x_18[0] = CONCAT22(astack_special_x_18[0]._2_2_,(short)(uVar1 | 1));
            uVar2 = 2;
            puVar3 = astack_special_x_18;
          }
          else {
            uVar2 = 4;
            stack_array_18[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
            puVar3 = stack_array_18;
          }
          uVar2 = (**(code **)**(uint64_t **)(*param_2 + 8))
                            (*(uint64_t **)(*param_2 + 8),puVar3,uVar2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar4 = *(uint64_t *)(param_1 + 0x38);
          astack_special_x_20[0] = 0;
          for (; (*(uint64_t *)(param_1 + 0x38) <= uVar4 &&
                 (uVar4 < (int64_t)*(int *)(param_1 + 0x40) * 0x10 + *(uint64_t *)(param_1 + 0x38)
                 )); uVar4 = uVar4 + 0x10) {
            uVar2 = UltraHighFreq_ResourceLoader1(param_2,astack_special_x_20[0]);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (*(int *)(param_2[1] + 0x18) != 0) {
              return 0x1c;
            }
            uVar2 = SystemCleanupProcessor(*param_2,uVar4);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = UISystem_Controller(param_2,astack_special_x_20);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
          }
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
uint64_t NetworkProtocol_a0720(void)
{
  uint uVar1;
  uint *puVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar3;
  uint64_t uVar4;
  bool in_CF;
  uint astack_special_x_20 [2];
  int16_t local_buffer_50;
  int32_t local_buffer_58;
  if (!in_CF) {
    uVar1 = *(int *)(unaff_RSI + 0x40) * 2;
    if ((uVar1 | 1) < 0x8000) {
      local_buffer_50 = (int16_t)(uVar1 | 1);
      uVar4 = 2;
      puVar2 = (uint *)&local_buffer_00000050;
    }
    else {
      uVar4 = 4;
      astack_special_x_20[0] = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff | 1;
      puVar2 = astack_special_x_20;
    }
    uVar4 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),puVar2,uVar4);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar3 = *(uint64_t *)(unaff_RSI + 0x38);
    local_buffer_58 = 0;
    for (; (*(uint64_t *)(unaff_RSI + 0x38) <= uVar3 &&
           (uVar3 < (int64_t)*(int *)(unaff_RSI + 0x40) * 0x10 + *(uint64_t *)(unaff_RSI + 0x38)))
        ; uVar3 = uVar3 + 0x10) {
      uVar4 = UltraHighFreq_ResourceLoader1();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar4 = SystemCleanupProcessor(*unaff_RBX,uVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = UISystem_Controller();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  return 0;
}
// 函数: void NetworkProtocol_a07f7(void)
void NetworkProtocol_a07f7(void)
{
  return;
}
uint64_t NetworkProtocol_a0810(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int8_t stack_array_28 [32];
  if (*(uint *)(param_1 + 0x40) < 0x55) {
    uVar1 = NetworkProtocol_a4260(param_1,0x55444f4d,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = DataCompressor0(param_1,stack_array_28,1,0x5453494c,0x55444f4d);
    if ((int)uVar1 == 0) {
      uVar1 = NetworkProtocol_a4260(param_1,0x42444f4d,param_2);
      if ((int)uVar1 == 0) {
        uVar1 = NetworkProtocol_a1610(*param_2,param_1);
        if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
          SystemThreadManager(param_1,stack_array_28);
        }
      }
    }
  }
  return uVar1;
}
uint64_t NetworkProtocol_a08b0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar1 = DataCompressor0(param_2,stack_array_28,1,0x5453494c,0x5449554d);
  if ((int)uVar1 == 0) {
    uVar1 = DataCompressor0(param_2,stack_array_48,0,0x4249554d,0);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
      if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
        SystemThreadManager(param_2,stack_array_48);
      }
    }
  }
  return uVar1;
}
// 函数: void NetworkProtocol_a0970(uint64_t param_1,uint64_t param_2)
void NetworkProtocol_a0970(uint64_t param_1,uint64_t param_2)
{
  NetworkProtocol_9f530(param_1,param_2,0x54524f50,0x42545250,1);
  return;
}
uint64_t NetworkProtocol_a0990(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int16_t astack_special_x_18 [4];
  int16_t astack_special_x_20 [4];
  int32_t stack_array_78 [2];
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int8_t stack_array_60 [32];
  int8_t stack_array_40 [40];
  uVar4 = DataCompressor0(param_2,stack_array_40,1,0x5453494c,0x4f4c4d50);
  if ((int)uVar4 == 0) {
    uVar3 = 0;
    uVar4 = DataCompressor0(param_2,stack_array_60,0,0x424c4d50,0);
    if ((int)uVar4 == 0) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar2 = SystemCleanupProcessor(*param_2,param_1 + 0x10);
        if (uVar2 != 0) {
          return (uint64_t)uVar2;
        }
        if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar2 = SystemCleanupProcessor(*param_2,param_1 + 0x38);
          if (uVar2 != 0) {
            return (uint64_t)uVar2;
          }
          puVar5 = (int32_t *)SystemDataFlowProcessor();
          local_var_70 = *puVar5;
          local_var_6c = puVar5[1];
          local_var_68 = puVar5[2];
          local_var_64 = puVar5[3];
          if (*(uint *)(param_2 + 8) < 0x6d) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              lVar1 = *param_2;
              stack_array_78[0] = local_var_70;
              uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),stack_array_78,4);
              if (uVar3 == 0) {
                astack_special_x_18[0] = (int16_t)local_var_6c;
                uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),astack_special_x_18,2);
                if (uVar3 == 0) {
                  astack_special_x_20[0] = local_var_6c._2_2_;
                  uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                    (*(uint64_t **)(lVar1 + 8),astack_special_x_20,2);
                  if (uVar3 == 0) {
                    uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                      (*(uint64_t **)(lVar1 + 8),&local_var_68,8);
                  }
                }
              }
            }
            else {
              uVar3 = 0x1c;
            }
          }
          if (uVar3 != 0) {
            return (uint64_t)uVar3;
          }
          if (*(uint *)(param_2 + 8) < 0x82) {
            if (*(uint *)(param_2 + 8) < 0x6a) {
              return 0x1c;
            }
            uVar4 = NetworkProtocol_a5900(param_2,param_1 + 0x48,1);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            for (uVar4 = *(uint64_t *)(param_1 + 0x48);
                (*(uint64_t *)(param_1 + 0x48) <= uVar4 &&
                (uVar4 < (int64_t)*(int *)(param_1 + 0x50) * 0x1c + *(uint64_t *)(param_1 + 0x48))
                ); uVar4 = uVar4 + 0x1c) {
              SystemCore_d3e20(param_1 + 0x58);
            }
          }
          else {
            uVar4 = NetworkProtocol_a7b00(param_2,param_1 + 0x58);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
          uVar4 = NetworkProtocol_a7bf0(param_2,param_1 + 0x68,0x71);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
// WARNING: Subroutine does not return
          SystemThreadManager(param_2,stack_array_60);
        }
      }
      uVar4 = 0x1c;
    }
  }
  return uVar4;
}
uint64_t NetworkProtocol_a09c5(int32_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar6;
  int32_t local_var_30;
  int32_t local_var_38;
  int16_t local_buffer_3c;
  int16_t local_buffer_3e;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int16_t local_buffer_c0;
  int16_t local_buffer_c8;
  uVar3 = 0;
  uVar4 = DataCompressor0(param_1,&local_buffer_00000048,0,0x424c4d50,0);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x10);
    if (uVar2 != 0) {
      return (uint64_t)uVar2;
    }
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x38);
      if (uVar2 != 0) {
        return (uint64_t)uVar2;
      }
      puVar5 = (int32_t *)SystemDataFlowProcessor();
      uVar6 = *puVar5;
      _local_buffer_3c = puVar5[1];
      local_var_40 = puVar5[2];
      local_buffer_44 = puVar5[3];
      local_var_38 = uVar6;
      if (*(uint *)(unaff_RDI + 8) < 0x6d) {
        if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
          lVar1 = *unaff_RDI;
          local_var_30 = uVar6;
          uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                            (*(uint64_t **)(lVar1 + 8),&local_buffer_00000030,4);
          uVar6 = extraout_XMM0_Da;
          if (uVar3 == 0) {
            local_buffer_c0 = local_buffer_3c;
            uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                              (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c0,2);
            uVar6 = extraout_XMM0_Da_00;
            if (uVar3 == 0) {
              local_buffer_c8 = local_buffer_3e;
              uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c8,2);
              uVar6 = extraout_XMM0_Da_01;
              if (uVar3 == 0) {
                uVar3 = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),&local_buffer_00000040,8);
                uVar6 = extraout_XMM0_Da_02;
              }
            }
          }
        }
        else {
          uVar3 = 0x1c;
        }
      }
      if (uVar3 != 0) {
        return (uint64_t)uVar3;
      }
      if (*(uint *)(unaff_RDI + 8) < 0x82) {
        if (*(uint *)(unaff_RDI + 8) < 0x6a) {
          return 0x1c;
        }
        uVar4 = NetworkProtocol_a5900(uVar6,unaff_RBP + 0x48,1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar6 = extraout_XMM0_Da_05;
        for (uVar4 = *(uint64_t *)(unaff_RBP + 0x48);
            (*(uint64_t *)(unaff_RBP + 0x48) <= uVar4 &&
            (uVar4 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c + *(uint64_t *)(unaff_RBP + 0x48))
            ); uVar4 = uVar4 + 0x1c) {
          uVar6 = SystemCore_d3e20(unaff_RBP + 0x58);
        }
      }
      else {
        uVar4 = NetworkProtocol_a7b00(uVar6,unaff_RBP + 0x58);
        uVar6 = extraout_XMM0_Da_03;
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      uVar4 = NetworkProtocol_a7bf0(uVar6,unaff_RBP + 0x68,0x71);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
// WARNING: Subroutine does not return
      SystemThreadManager(extraout_XMM0_Da_04,&local_buffer_00000048);
    }
  }
  return 0x1c;
}
uint64_t NetworkProtocol_a09f1(void)
{
  int64_t lVar1;
  uint uVar2;
  int64_t in_RAX;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  uint unaff_ESI;
  int64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar5;
  int32_t local_var_30;
  int32_t local_var_38;
  int16_t local_buffer_3c;
  int16_t local_buffer_3e;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int16_t local_buffer_c0;
  int16_t local_buffer_c8;
  if (*(uint *)(in_RAX + 0x18) == unaff_ESI) {
    uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x10);
    if (uVar2 != 0) {
      return (uint64_t)uVar2;
    }
    if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
      uVar2 = SystemCleanupProcessor(*unaff_RDI,unaff_RBP + 0x38);
      if (uVar2 != 0) {
        return (uint64_t)uVar2;
      }
      puVar3 = (int32_t *)SystemDataFlowProcessor();
      uVar5 = *puVar3;
      _local_buffer_3c = puVar3[1];
      local_var_40 = puVar3[2];
      local_buffer_44 = puVar3[3];
      local_var_38 = uVar5;
      if (*(uint *)(unaff_RDI + 8) < 0x6d) {
        if (*(uint *)(unaff_RDI[1] + 0x18) == unaff_ESI) {
          lVar1 = *unaff_RDI;
          local_var_30 = uVar5;
          unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                (*(uint64_t **)(lVar1 + 8),&local_buffer_00000030,4);
          uVar5 = extraout_XMM0_Da;
          if (unaff_ESI == 0) {
            local_buffer_c0 = local_buffer_3c;
            unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                  (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c0,2);
            uVar5 = extraout_XMM0_Da_00;
            if (unaff_ESI == 0) {
              local_buffer_c8 = local_buffer_3e;
              unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                    (*(uint64_t **)(lVar1 + 8),&local_buffer_000000c8,2);
              uVar5 = extraout_XMM0_Da_01;
              if (unaff_ESI == 0) {
                unaff_ESI = (**(code **)**(uint64_t **)(lVar1 + 8))
                                      (*(uint64_t **)(lVar1 + 8),&local_buffer_00000040,8);
                uVar5 = extraout_XMM0_Da_02;
              }
            }
          }
        }
        else {
          unaff_ESI = 0x1c;
        }
      }
      if (unaff_ESI != 0) {
        return (uint64_t)unaff_ESI;
      }
      if (*(uint *)(unaff_RDI + 8) < 0x82) {
        if (*(uint *)(unaff_RDI + 8) < 0x6a) {
          return 0x1c;
        }
        uVar4 = NetworkProtocol_a5900(uVar5,unaff_RBP + 0x48,1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar5 = extraout_XMM0_Da_05;
        for (uVar4 = *(uint64_t *)(unaff_RBP + 0x48);
            (*(uint64_t *)(unaff_RBP + 0x48) <= uVar4 &&
            (uVar4 < (int64_t)*(int *)(unaff_RBP + 0x50) * 0x1c + *(uint64_t *)(unaff_RBP + 0x48))
            ); uVar4 = uVar4 + 0x1c) {
          uVar5 = SystemCore_d3e20(unaff_RBP + 0x58);
        }
      }
      else {
        uVar4 = NetworkProtocol_a7b00(uVar5,unaff_RBP + 0x58);
        uVar5 = extraout_XMM0_Da_03;
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      uVar4 = NetworkProtocol_a7bf0(uVar5,unaff_RBP + 0x68,0x71);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
// WARNING: Subroutine does not return
      SystemThreadManager(extraout_XMM0_Da_04,&local_buffer_00000048);
    }
  }
  return 0x1c;
}
// 函数: void NetworkProtocol_a0a0d(void)
void NetworkProtocol_a0a0d(void)
{
  return;
}