// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
// 99_part_13_part006.c - 7 个函数
// 函数: void NetworkProtocol_a94d6(void)
void NetworkProtocol_a94d6(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_a94de(void)
{
  uint64_t *unaff_RBX;
  int32_t unaff_ESI;
  if (unaff_RBX != (uint64_t *)0x0) {
    (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_ESI;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a9530(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *plocal_var_48;
  int8_t stack_array_40 [40];
  uVar2 = DataFlowProcessor(param_1,stack_array_40,1,param_3);
  if ((int)uVar2 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar2 = RenderingTextureManager0(param_2,aiStackX_20[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_816_ptr,
                                    0x30a,0,0,1);
              if (lVar3 == 0) {
                return 0x26;
              }
              puVar4 = (uint64_t *)NetworkProtocol_d9b40(lVar3);
              plocal_var_48 = puVar4;
              uVar1 = NetworkProtocol_9e0d0(puVar4,param_1);
              if ((uVar1 != 0) || (uVar1 = DataStreamProcessor(param_2,&plocal_var_48), uVar1 != 0)) {
                if (puVar4 == (uint64_t *)0x0) {
                  return (uint64_t)uVar1;
                }
                (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_40);
      }
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a9559(void)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000a8;
  iStack00000000000000a8 = 0;
  uVar1 = SystemCore_EncryptionManager();
  if (iStack00000000000000a8 < 0) {
    uVar2 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000a8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar2 = RenderingTextureManager0(), (int)uVar2 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000a8) {
          do {
            lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_816_ptr,0x30a,
                                  0);
            if (lVar3 == 0) {
              return 0x26;
            }
            puVar4 = (uint64_t *)NetworkProtocol_d9b40(lVar3);
            uVar1 = NetworkProtocol_9e0d0(puVar4);
            if ((uVar1 != 0) || (uVar1 = DataStreamProcessor(), uVar1 != 0)) {
              if (puVar4 == (uint64_t *)0x0) {
                return (uint64_t)uVar1;
              }
              (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000a8);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_a95bc(int param_1)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  int unaff_R15D;
  int local_var_a8;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_816_ptr,0x30a);
        if (lVar2 == 0) {
          return 0x26;
        }
        puVar3 = (uint64_t *)NetworkProtocol_d9b40(lVar2);
        iVar1 = NetworkProtocol_9e0d0(puVar3);
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(), iVar1 != 0)) {
          if (puVar3 == (uint64_t *)0x0) {
            return iVar1;
          }
          (**(code **)*puVar3)(puVar3,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < local_var_a8);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void NetworkProtocol_a9689(void)
void NetworkProtocol_a9689(void)
{
  return;
}
// 函数: void NetworkProtocol_a9696(void)
void NetworkProtocol_a9696(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_a969e(void)
{
  uint64_t *unaff_RBX;
  int32_t unaff_ESI;
  if (unaff_RBX != (uint64_t *)0x0) {
    (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_ESI;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a96f0(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStackX_20 [2];
  uint64_t *plocal_var_48;
  int8_t stack_array_40 [40];
  uVar2 = DataFlowProcessor(param_1,stack_array_40,1,param_3);
  if ((int)uVar2 == 0) {
    aiStackX_20[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar2 = RenderingTextureManager0(param_2,aiStackX_20[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&processed_var_816_ptr,
                                    0x30a,0,0,1);
              if (lVar3 == 0) {
                return 0x26;
              }
              puVar4 = (uint64_t *)NetworkProtocol_ebfc0(lVar3);
              plocal_var_48 = puVar4;
              uVar1 = NetworkProtocol_9e230(puVar4,param_1);
              if ((uVar1 != 0) || (uVar1 = DataStreamProcessor(param_2,&plocal_var_48), uVar1 != 0)) {
                if (puVar4 == (uint64_t *)0x0) {
                  return (uint64_t)uVar1;
                }
                (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStackX_20[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_40);
      }
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a9719(void)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int iStack00000000000000a8;
  iStack00000000000000a8 = 0;
  uVar1 = SystemCore_EncryptionManager();
  if (iStack00000000000000a8 < 0) {
    uVar2 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack00000000000000a8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar2 = RenderingTextureManager0(), (int)uVar2 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack00000000000000a8) {
          do {
            lVar3 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&processed_var_816_ptr,0x30a,
                                  0);
            if (lVar3 == 0) {
              return 0x26;
            }
            puVar4 = (uint64_t *)NetworkProtocol_ebfc0(lVar3);
            uVar1 = NetworkProtocol_9e230(puVar4);
            if ((uVar1 != 0) || (uVar1 = DataStreamProcessor(), uVar1 != 0)) {
              if (puVar4 == (uint64_t *)0x0) {
                return (uint64_t)uVar1;
              }
              (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack00000000000000a8);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_a977c(int param_1)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  int unaff_R15D;
  int local_var_a8;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < param_1) {
      do {
        lVar2 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&processed_var_816_ptr,0x30a);
        if (lVar2 == 0) {
          return 0x26;
        }
        puVar3 = (uint64_t *)NetworkProtocol_ebfc0(lVar2);
        iVar1 = NetworkProtocol_9e230(puVar3);
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(), iVar1 != 0)) {
          if (puVar3 == (uint64_t *)0x0) {
            return iVar1;
          }
          (**(code **)*puVar3)(puVar3,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
      } while (unaff_R15D < local_var_a8);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void NetworkProtocol_a9849(void)
void NetworkProtocol_a9849(void)
{
  return;
}
// 函数: void NetworkProtocol_a9856(void)
void NetworkProtocol_a9856(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t NetworkProtocol_a985e(void)
{
  uint64_t *unaff_RBX;
  int32_t unaff_ESI;
  if (unaff_RBX != (uint64_t *)0x0) {
    (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_ESI;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a98b0(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  int iVar10;
  int aiStackX_20 [2];
  uint64_t *plocal_var_58;
  int8_t stack_array_50 [40];
  uVar6 = DataFlowProcessor(param_1,stack_array_50,1,param_3);
  if ((int)uVar6 == 0) {
    aiStackX_20[0] = 0;
    uVar4 = SystemCore_EncryptionManager(param_1,aiStackX_20);
    if (aiStackX_20[0] < 0) {
      uVar6 = 0xd;
    }
    else {
      uVar9 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStackX_20[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar9) - uVar9)) ||
         (uVar6 = RenderingTextureManager0(param_2,aiStackX_20[0]), (int)uVar6 == 0)) {
        if (uVar4 != 0x12) {
          if (uVar4 != 0) {
            return (uint64_t)uVar4;
          }
          iVar10 = 0;
          if (0 < aiStackX_20[0]) {
            do {
              puVar7 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar7 == (uint64_t *)0x0) {
                return 0x26;
              }
              NetworkProtocol_adcf0(puVar7,0xf);
              *puVar7 = &processed_var_9992_ptr;
              puVar7[6] = &processed_var_9792_ptr;
              *(int32_t *)(puVar7 + 0x1b) = 3;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)((int64_t)puVar7 + 0xdc) = *puVar8;
              *(int32_t *)(puVar7 + 0x1c) = uVar1;
              *(int32_t *)((int64_t)puVar7 + 0xe4) = uVar2;
              *(int32_t *)(puVar7 + 0x1d) = uVar3;
              plocal_var_58 = puVar7;
              iVar5 = NetworkProtocol_9ede0(puVar7,param_1);
              if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(param_2,&plocal_var_58), iVar5 != 0)) {
                (**(code **)*puVar7)(puVar7,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < aiStackX_20[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_50);
      }
    }
  }
  return uVar6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_a98dc(int32_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint uVar8;
  int64_t unaff_RBP;
  int iVar9;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar10;
  uint64_t *local_var_40;
  int iStack00000000000000b8;
  iStack00000000000000b8 = 0;
  uVar3 = SystemCore_EncryptionManager(param_1,&local_buffer_000000b8);
  if (iStack00000000000000b8 < 0) {
    uVar5 = 0xd;
  }
  else {
    uVar8 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    uVar10 = extraout_XMM0_Da;
    if ((iStack00000000000000b8 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar8) - uVar8)) ||
       (uVar5 = RenderingTextureManager0(extraout_XMM0_Da,iStack00000000000000b8), uVar10 = extraout_XMM0_Da_00
       , (int)uVar5 == 0)) {
      if (uVar3 != 0x12) {
        if (uVar3 != 0) {
          return (uint64_t)uVar3;
        }
        iVar9 = 0;
        if (0 < iStack00000000000000b8) {
          do {
            puVar6 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar6 == (uint64_t *)0x0) {
              return 0x26;
            }
            NetworkProtocol_adcf0(puVar6,0xf);
            *puVar6 = &processed_var_9992_ptr;
            puVar6[6] = &processed_var_9792_ptr;
            *(int32_t *)(puVar6 + 0x1b) = 3;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)((int64_t)puVar6 + 0xdc) = *puVar7;
            *(int32_t *)(puVar6 + 0x1c) = uVar10;
            *(int32_t *)((int64_t)puVar6 + 0xe4) = uVar1;
            *(int32_t *)(puVar6 + 0x1d) = uVar2;
            local_var_40 = puVar6;
            iVar4 = NetworkProtocol_9ede0(puVar6);
            if ((iVar4 != 0) ||
               (iVar4 = DataStreamProcessor(extraout_XMM0_Da_01,&local_buffer_00000040), iVar4 != 0)) {
              (**(code **)*puVar6)(puVar6,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar9 = iVar9 + 1;
            uVar10 = extraout_XMM0_Da_02;
          } while (iVar9 < iStack00000000000000b8);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager(uVar10,&local_buffer_00000048);
    }
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_a993f(int32_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int in_ECX;
  int unaff_EBX;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  uint64_t *local_var_40;
  int local_buffer_b8;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < in_ECX) {
      do {
        puVar5 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&processed_var_816_ptr,0x30a);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        NetworkProtocol_adcf0(puVar5,0xf);
        *puVar5 = &processed_var_9992_ptr;
        puVar5[6] = &processed_var_9792_ptr;
        *(int32_t *)(puVar5 + 0x1b) = 3;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)((int64_t)puVar5 + 0xdc) = *puVar6;
        *(int32_t *)(puVar5 + 0x1c) = uVar1;
        *(int32_t *)((int64_t)puVar5 + 0xe4) = uVar2;
        *(int32_t *)(puVar5 + 0x1d) = uVar3;
        local_var_40 = puVar5;
        iVar4 = NetworkProtocol_9ede0(puVar5);
        if ((iVar4 != 0) || (iVar4 = DataStreamProcessor(extraout_XMM0_Da,&local_buffer_00000040), iVar4 != 0))
        {
          (**(code **)*puVar5)(puVar5,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
        param_1 = extraout_XMM0_Da_00;
      } while (unaff_R15D < local_buffer_b8);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&local_buffer_00000048);
}
// 函数: void NetworkProtocol_a9a5f(void)
void NetworkProtocol_a9a5f(void)
{
  return;
}
// 函数: void NetworkProtocol_a9a6c(void)
void NetworkProtocol_a9a6c(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address