#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part064.c - 4 个函数
// 函数: void NetworkProtocol_753d0(int64_t param_1,uint64_t param_2)
void NetworkProtocol_753d0(int64_t param_1,uint64_t param_2)
{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int32_t astack_special_x_8 [2];
  if (((*(byte *)(param_1 + 0x310) & 8) != 0) &&
     (pcVar1 = *(code **)(param_1 + 0x308), pcVar1 != (code *)0x0)) {
    iVar2 = Function_1fc4bf33(param_1,astack_special_x_8);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = (*pcVar1)(astack_special_x_8[0],8,0,*(uint64_t *)(param_1 + 0x318));
    if (iVar2 != 0) {
      return;
    }
  }
  uVar3 = 0;
  do {
    iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x88) + 0x10))
                      (*(int64_t **)(param_1 + 0x88),8,uVar3 & 0xff,0xffffffff,param_2);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 7);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_75520(int64_t *param_1)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lStackX_8;
  uint64_t local_neg_ffb8;
  uint64_t uVar9;
  uVar1 = (uint)((uint64_t)local_neg_ffb8 >> 0x20);
  if (param_1 == (int64_t *)0x0) {
    return 0x1f;
  }
  iVar8 = 0;
  lStackX_8 = 0;
  uVar2 = SystemCore_388c0(&lStackX_8,0x20214);
  lVar7 = lStackX_8;
  if ((int)uVar2 == 0) {
    uVar9 = (uint64_t)uVar1 << 0x20;
    lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x7c8,&processed_var_5856_ptr,0xb4,uVar9,0,
                          1);
    if (lVar3 != 0) {
      lVar3 = Function_e60f8ab6(lVar3);
      uVar9 = uVar9 & 0xffffffff00000000;
      lVar4 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd0,&processed_var_5856_ptr,0xbb,uVar9,0
                            ,1);
      if (lVar4 != 0) {
        plVar5 = (int64_t *)NetworkProtocol_65b00(lVar4);
        uVar9 = uVar9 & 0xffffffff00000000;
        puVar6 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&processed_var_5856_ptr,0xc0,
                               uVar9,0,1);
        if (puVar6 != (uint64_t *)0x0) {
          puVar6[1] = 0;
          *puVar6 = &processed_var_4744_ptr;
          lVar7 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc40,&processed_var_5856_ptr,0xc4,
                                uVar9 & 0xffffffff00000000,0,1);
          if (lVar7 == 0) {
            (**(code **)*puVar6)(puVar6,0);
// WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
          }
          lVar7 = NetworkProtocol_719a0(lVar7,lStackX_8,lVar3,plVar5,puVar6);
          uVar1 = network_system_config;
          while( true ) {
            network_system_config = uVar1 + 1 & 0x80000007;
            if ((int)network_system_config < 0) {
              network_system_config = (network_system_config - 1 | 0xfffffff8) + 1;
            }
            if (*(int64_t *)((int64_t)(int)uVar1 * 8 + 0x180c4eab0) == 0) break;
            iVar8 = iVar8 + 1;
            uVar1 = network_system_config;
            if (7 < iVar8) {
              NetworkProtocol_73460(lVar7);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar7,&processed_var_5856_ptr,0xd8,1);
            }
          }
          *(int64_t *)((int64_t)(int)uVar1 * 8 + 0x180c4eab0) = lVar7;
          *(uint *)(lVar7 + 0x18) = uVar1;
          Function_88128f8b(lVar7 + 0x2c0);
          *param_1 = lVar7;
          return 0;
        }
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (lVar3 != 0) {
        NetworkProtocol_bbb80(lVar3);
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&rendering_buffer_2144_ptr,0xc6,1);
      }
    }
    uVar2 = 0x26;
    if (lVar7 != 0) {
      SystemCore_3b520(lVar7);
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_75538(void)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  int64_t *unaff_R12;
  uint64_t local_var_20;
  uint64_t uVar9;
  int64_t lStack0000000000000070;
  uVar1 = (uint)((uint64_t)local_var_20 >> 0x20);
  iVar8 = 0;
  lStack0000000000000070 = 0;
  uVar2 = SystemCore_388c0(&local_buffer_00000070,0x20214);
  lVar7 = lStack0000000000000070;
  if ((int)uVar2 == 0) {
    uVar9 = (uint64_t)uVar1 << 0x20;
    lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x7c8,&processed_var_5856_ptr,0xb4,uVar9);
    if (lVar3 != 0) {
      lVar3 = Function_e60f8ab6(lVar3);
      uVar9 = uVar9 & 0xffffffff00000000;
      lVar4 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd0,&processed_var_5856_ptr,0xbb,uVar9);
      if (lVar4 != 0) {
        plVar5 = (int64_t *)NetworkProtocol_65b00(lVar4);
        uVar9 = uVar9 & 0xffffffff00000000;
        puVar6 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10,&processed_var_5856_ptr,0xc0,
                               uVar9);
        if (puVar6 != (uint64_t *)0x0) {
          puVar6[1] = 0;
          *puVar6 = &processed_var_4744_ptr;
          lVar7 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc40,&processed_var_5856_ptr,0xc4,
                                uVar9 & 0xffffffff00000000);
          if (lVar7 == 0) {
            (**(code **)*puVar6)(puVar6,0);
// WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
          }
          lVar7 = NetworkProtocol_719a0(lVar7,lStack0000000000000070,lVar3,plVar5,puVar6);
          uVar1 = network_system_config;
          while( true ) {
            network_system_config = uVar1 + 1 & 0x80000007;
            if ((int)network_system_config < 0) {
              network_system_config = (network_system_config - 1 | 0xfffffff8) + 1;
            }
            if (*(int64_t *)((int64_t)(int)uVar1 * 8 + 0x180c4eab0) == 0) break;
            iVar8 = iVar8 + 1;
            uVar1 = network_system_config;
            if (7 < iVar8) {
              NetworkProtocol_73460(lVar7);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar7,&processed_var_5856_ptr,0xd8,1);
            }
          }
          *(int64_t *)((int64_t)(int)uVar1 * 8 + 0x180c4eab0) = lVar7;
          *(uint *)(lVar7 + 0x18) = uVar1;
          Function_88128f8b(lVar7 + 0x2c0);
          *unaff_R12 = lVar7;
          return 0;
        }
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (lVar3 != 0) {
        NetworkProtocol_bbb80(lVar3);
// WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&rendering_buffer_2144_ptr,0xc6,1);
      }
    }
    uVar2 = 0x26;
    if (lVar7 != 0) {
      SystemCore_3b520(lVar7);
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_75569(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  int8_t uVar8;
  int iVar9;
  uint64_t unaff_RDI;
  int64_t *unaff_R12;
  uint64_t local_var_20;
  uint64_t uVar10;
  int32_t uVar11;
  int8_t local_buffer_28;
  int8_t local_buffer_30;
  int64_t local_var_70;
  local_buffer_30 = 1;
  uVar8 = (int8_t)unaff_RDI;
  iVar9 = (int)unaff_RDI;
  uVar10 = CONCAT44((int)((uint64_t)local_var_20 >> 0x20),iVar9);
  local_buffer_28 = uVar8;
  lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(param_1 + 0x1a0),0x7c8,param_3,0xb4,uVar10);
  uVar11 = (int32_t)((uint64_t)uVar10 >> 0x20);
  if (lVar2 != 0) {
    lVar2 = Function_e60f8ab6(lVar2);
    local_buffer_30 = 1;
    local_buffer_28 = uVar8;
    lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd0,&processed_var_5856_ptr,0xbb,
                          CONCAT44(uVar11,iVar9));
    if (lVar3 != 0) {
      plVar4 = (int64_t *)NetworkProtocol_65b00(lVar3);
      local_buffer_30 = 1;
      local_buffer_28 = uVar8;
      puVar5 = (uint64_t *)
               SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar9 + 0x10,&processed_var_5856_ptr,
                             0xc0,unaff_RDI & 0xffffffff);
      if (puVar5 != (uint64_t *)0x0) {
        puVar5[1] = unaff_RDI;
        *puVar5 = &processed_var_4744_ptr;
        local_buffer_30 = 1;
        local_buffer_28 = uVar8;
        lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc40,&processed_var_5856_ptr,0xc4,
                              unaff_RDI & 0xffffffff);
        if (lVar3 == 0) {
          (**(code **)*puVar5)(puVar5,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
        }
        lVar2 = NetworkProtocol_719a0(lVar3,local_var_70,lVar2,plVar4,puVar5);
        uVar7 = unaff_RDI & 0xffffffff;
        uVar1 = network_system_config;
        while( true ) {
          network_system_config = uVar1 + 1 & 0x80000007;
          if ((int)network_system_config < 0) {
            network_system_config = (network_system_config - 1 | 0xfffffff8) + 1;
          }
          if (*(uint64_t *)((int64_t)(int)uVar1 * 8 + 0x180c4eab0) == unaff_RDI) break;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (uint64_t)uVar6;
          uVar1 = network_system_config;
          if (7 < (int)uVar6) {
            NetworkProtocol_73460(lVar2);
// WARNING: Subroutine does not return
            SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&processed_var_5856_ptr,0xd8,1);
          }
        }
        *(int64_t *)((int64_t)(int)uVar1 * 8 + 0x180c4eab0) = lVar2;
        *(uint *)(lVar2 + 0x18) = uVar1;
        Function_88128f8b(lVar2 + 0x2c0);
        *unaff_R12 = lVar2;
        goto LAB_1808757a2;
      }
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (lVar2 != 0) {
      NetworkProtocol_bbb80(lVar2);
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&rendering_buffer_2144_ptr,0xc6,1);
    }
  }
  unaff_RDI = 0x26;
  if (local_var_70 != 0) {
    SystemCore_3b520(local_var_70);
  }
LAB_1808757a2:
  return unaff_RDI & 0xffffffff;
}
// 函数: void NetworkProtocol_757c0(void)
void NetworkProtocol_757c0(void)
{
  return;
}
int32_t NetworkProtocol_757cc(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t unaff_RSI;
  int32_t unaff_EDI;
  int64_t *unaff_R12;
  *(int64_t *)(param_3 + param_2 * 8) = unaff_RSI;
  *(int *)(unaff_RSI + 0x18) = (int)param_2;
  Function_88128f8b(unaff_RSI + 0x2c0);
  *unaff_R12 = unaff_RSI;
  return unaff_EDI;
}
uint64_t NetworkProtocol_75800(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  if (param_2 == (int64_t *)0x0) {
    return 0x1c;
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x1a8))); iVar5 = iVar5 + 1) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x1a0) + (int64_t)iVar5 * 8);
    if (lVar1 != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x60))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x38))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x30) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x108))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x48))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x40) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x100))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x58))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x50) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xe8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x68))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x60) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xf8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x78))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x70) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xf0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x88))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x80) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xe0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x98))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x90) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xd8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xa8))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0xa0) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xd0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xb8))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0xb0) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 200))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 200))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0xc0) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xc0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xd8))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x50))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xe8))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0xe0) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xb0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xf8))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0xf0) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x78))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x108))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x100) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xa8))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x118))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x110) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0xa0))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x128))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x120) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x98))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x138))); iVar5 = iVar5 + 1) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x130) + (int64_t)iVar5 * 8) != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x90))(param_2,0);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  iVar5 = 0;
  do {
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x148) <= iVar5)) {
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x158))); iVar5 = iVar5 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 0x150) + (int64_t)iVar5 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0x88))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x168))); iVar5 = iVar5 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 0x160) + (int64_t)iVar5 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0x80))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x178))); iVar5 = iVar5 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 0x170) + (int64_t)iVar5 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0xb8))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x188))); iVar5 = iVar5 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 0x180) + (int64_t)iVar5 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0x68))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x198))); iVar5 = iVar5 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 400) + (int64_t)iVar5 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0x28))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (iVar5 = 0; (iVar4 = 0, -1 < iVar5 && (iVar4 = 0, iVar5 < *(int *)(param_1 + 0x1b8)));
          iVar5 = iVar5 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 0x1b0) + (int64_t)iVar5 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0x48))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      for (; (-1 < iVar4 && (iVar4 < *(int *)(param_1 + 0x1c8))); iVar4 = iVar4 + 1) {
        if (*(int64_t *)(*(int64_t *)(param_1 + 0x1c0) + (int64_t)iVar4 * 8) != 0) {
          plVar2 = (int64_t *)(**(code **)(*param_2 + 0x40))(param_2,0);
          uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      uVar3 = NetworkProtocol_71220(param_1,param_2);
      if (((int)uVar3 == 0) && (uVar3 = NetworkProtocol_712a0(param_1,param_2), (int)uVar3 == 0)) {
        uVar3 = NetworkProtocol_71320(param_1,param_2);
      }
      return uVar3;
    }
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x140) + (int64_t)iVar5 * 8);
    if (lVar1 != 0) {
      plVar2 = (int64_t *)(**(code **)(*param_2 + 0x70))(param_2,0);
      uVar3 = Function_3abac8d9(plVar2,lVar1,param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}
// 函数: void NetworkProtocol_75d28(void)
void NetworkProtocol_75d28(void)
{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int64_t *unaff_RDI;
  do {
    iVar2 = unaff_EBP;
    if ((unaff_ESI < 0) || (*(int *)(unaff_RBX + 0x148) <= unaff_ESI)) {
      for (; (iVar3 = unaff_EBP, -1 < iVar2 && (iVar2 < *(int *)(unaff_RBX + 0x158)));
          iVar2 = iVar2 + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x150) + (int64_t)iVar2 * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x88))();
          iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar3 != 0) {
            return;
          }
        }
      }
      for (; (iVar2 = unaff_EBP, -1 < iVar3 && (iVar3 < *(int *)(unaff_RBX + 0x168)));
          iVar3 = iVar3 + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x160) + (int64_t)iVar3 * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x80))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      for (; (iVar3 = unaff_EBP, -1 < iVar2 && (iVar2 < *(int *)(unaff_RBX + 0x178)));
          iVar2 = iVar2 + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x170) + (int64_t)iVar2 * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0xb8))();
          iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar3 != 0) {
            return;
          }
        }
      }
      for (; (iVar2 = unaff_EBP, -1 < iVar3 && (iVar3 < *(int *)(unaff_RBX + 0x188)));
          iVar3 = iVar3 + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x180) + (int64_t)iVar3 * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x68))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      for (; (iVar3 = unaff_EBP, -1 < iVar2 && (iVar2 < *(int *)(unaff_RBX + 0x198)));
          iVar2 = iVar2 + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 400) + (int64_t)iVar2 * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x28))();
          iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar3 != 0) {
            return;
          }
        }
      }
      for (; (-1 < iVar3 && (iVar3 < *(int *)(unaff_RBX + 0x1b8))); iVar3 = iVar3 + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1b0) + (int64_t)iVar3 * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x48))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      for (; (-1 < unaff_EBP && (unaff_EBP < *(int *)(unaff_RBX + 0x1c8)));
          unaff_EBP = unaff_EBP + 1) {
        if (*(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + (int64_t)unaff_EBP * 8) != 0) {
          plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x40))();
          iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (iVar2 != 0) {
            return;
          }
        }
      }
      iVar2 = NetworkProtocol_71220();
      if ((iVar2 == 0) && (iVar2 = NetworkProtocol_712a0(), iVar2 == 0)) {
        NetworkProtocol_71320();
      }
      return;
    }
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x140) + (int64_t)unaff_ESI * 8);
    if (lVar1 != 0) {
      plVar4 = (int64_t *)(**(code **)(*unaff_RDI + 0x70))();
      iVar2 = Function_3abac8d9(plVar4,lVar1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (iVar2 != 0) {
        return;
      }
    }
    unaff_ESI = unaff_ESI + 1;
  } while( true );
}
// 函数: void NetworkProtocol_75fa1(void)
void NetworkProtocol_75fa1(void)
{
  return;
}