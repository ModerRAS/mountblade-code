// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
// 99_part_13_part011_sub001_sub001.c - 10 个函数
// 99_part_13_part011_sub001.c - 11 个函数
// 99_part_13_part011.c - 11 个函数
// 函数: void NetworkProtocol_ab41a(void)
void NetworkProtocol_ab41a(void)
{
  uint64_t *unaff_RDI;
  (**(code **)*unaff_RDI)();
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ab460(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_98 [2];
  uint64_t *plocal_var_90;
  int8_t stack_array_88 [32];
  int8_t stack_array_68 [32];
  int8_t stack_array_48 [32];
  uVar3 = DataFlowProcessor(param_1,stack_array_48,1,param_3);
  if ((int)uVar3 == 0) {
    iVar6 = 0;
    aiStack_98[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStack_98);
    if (aiStack_98[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_98[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = RenderingTextureManager0(param_2,aiStack_98[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          if (0 < aiStack_98[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              NetworkProtocol_adcf0(puVar4,0xc);
              puVar4[0x1b] = 0;
              puVar4[0x1c] = 0;
              *(int32_t *)(puVar4 + 0x1d) = 4;
              *(int32_t *)((int64_t)puVar4 + 0xec) = 2;
              *puVar4 = &processed_var_48_ptr;
              puVar4[6] = &processed_var_9792_ptr;
              plocal_var_90 = puVar4;
              iVar2 = DataFlowProcessor(param_1,stack_array_68,1,0x5449554d);
              if (((iVar2 == 0) &&
                  (iVar2 = DataFlowProcessor(param_1,stack_array_88,0,0x4249554d), iVar2 == 0)) &&
                 (iVar2 = SystemCore_ConfigManager(param_1,puVar4 + 2), iVar2 == 0)) {
// WARNING: Subroutine does not return
                AdvancedSystemManager(param_1,stack_array_88);
              }
              if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(param_2,&plocal_var_90), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_98[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_48);
      }
    }
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ab48f(void)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_R14;
  int iStack0000000000000040;
  iVar6 = 0;
  iStack0000000000000040 = 0;
  uVar1 = SystemCore_EncryptionManager();
  if (iStack0000000000000040 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_R14 + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R14 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = RenderingTextureManager0(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            NetworkProtocol_adcf0(puVar4,0xc);
            puVar4[0x1b] = 0;
            puVar4[0x1c] = 0;
            *(int32_t *)(puVar4 + 0x1d) = 4;
            *(int32_t *)((int64_t)puVar4 + 0xec) = 2;
            *puVar4 = &processed_var_48_ptr;
            puVar4[6] = &processed_var_9792_ptr;
            iVar2 = DataFlowProcessor();
            if (((iVar2 == 0) && (iVar2 = DataFlowProcessor(), iVar2 == 0)) &&
               (iVar2 = SystemCore_ConfigManager(), iVar2 == 0)) {
// WARNING: Subroutine does not return
              AdvancedSystemManager();
            }
            if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack0000000000000040);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_ab4ea(int param_1)
{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  uint uVar3;
  uint64_t uVar4;
  uint64_t unaff_R15;
  int local_var_40;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar4 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xf0,&processed_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        NetworkProtocol_adcf0(puVar2,0xc);
        puVar2[0x1b] = unaff_R15;
        puVar2[0x1c] = unaff_R15;
        *(int32_t *)(puVar2 + 0x1d) = 4;
        *(int32_t *)((int64_t)puVar2 + 0xec) = 2;
        *puVar2 = &processed_var_48_ptr;
        puVar2[6] = &processed_var_9792_ptr;
        iVar1 = DataFlowProcessor();
        if (((iVar1 == 0) && (iVar1 = DataFlowProcessor(), iVar1 == 0)) &&
           (iVar1 = SystemCore_ConfigManager(), iVar1 == 0)) {
// WARNING: Subroutine does not return
          AdvancedSystemManager();
        }
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
      } while ((int)uVar3 < local_var_40);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void NetworkProtocol_ab68e(void)
void NetworkProtocol_ab68e(void)
{
  return;
}
// 函数: void NetworkProtocol_ab69e(void)
void NetworkProtocol_ab69e(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ab6a9(void)
void NetworkProtocol_ab6a9(void)
{
  uint64_t *unaff_RDI;
  (**(code **)*unaff_RDI)();
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ab6f0(uint64_t param_1,int64_t param_2,int32_t param_3)
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
  int aiStack_58 [2];
  uint64_t *plocal_var_50;
  int8_t stack_array_48 [32];
  uVar6 = DataFlowProcessor(param_1,stack_array_48,1,param_3);
  if ((int)uVar6 == 0) {
    iVar10 = 0;
    aiStack_58[0] = 0;
    uVar4 = SystemCore_EncryptionManager(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar6 = 0xd;
    }
    else {
      uVar9 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar9) - uVar9)) ||
         (uVar6 = RenderingTextureManager0(param_2,aiStack_58[0]), (int)uVar6 == 0)) {
        if (uVar4 != 0x12) {
          if (uVar4 != 0) {
            return (uint64_t)uVar4;
          }
          if (0 < aiStack_58[0]) {
            do {
              puVar7 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar7 == (uint64_t *)0x0) {
                return 0x26;
              }
              *puVar7 = &ui_system_data_1544_ptr;
              *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
              *(int32_t *)((int64_t)puVar7 + 0xc) = 0x17;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 2) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
              *(int32_t *)(puVar7 + 3) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
              puVar7[5] = 0;
              puVar7[6] = 0;
              *puVar7 = &processed_var_400_ptr;
              puVar7[4] = &ui_system_data_1560_ptr;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 7) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x3c) = uVar1;
              *(int32_t *)(puVar7 + 8) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x44) = uVar3;
              puVar7[9] = 0;
              puVar7[10] = 0;
              puVar7[0xb] = 0;
              puVar7[0xc] = 0;
              *(int32_t *)(puVar7 + 0xd) = 0;
              plocal_var_50 = puVar7;
              iVar5 = NetworkProtocol_9c190(puVar7,param_1);
              if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(param_2,&plocal_var_50), iVar5 != 0)) {
                (**(code **)*puVar7)(puVar7,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < aiStack_58[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_48);
      }
    }
  }
  return uVar6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ab71c(int32_t param_1)
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
  int iStack0000000000000040;
  uint64_t *local_var_48;
  iVar9 = 0;
  iStack0000000000000040 = 0;
  uVar3 = SystemCore_EncryptionManager(param_1,&local_buffer_00000040);
  if (iStack0000000000000040 < 0) {
    uVar5 = 0xd;
  }
  else {
    uVar8 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    uVar10 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar8) - uVar8)) ||
       (uVar5 = RenderingTextureManager0(extraout_XMM0_Da,iStack0000000000000040), uVar10 = extraout_XMM0_Da_00
       , (int)uVar5 == 0)) {
      if (uVar3 != 0x12) {
        if (uVar3 != 0) {
          return (uint64_t)uVar3;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar6 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar6 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar6 = &ui_system_data_1544_ptr;
            *(int32_t *)(puVar6 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar6 + 0xc) = 0x17;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)(puVar6 + 2) = *puVar7;
            *(int32_t *)((int64_t)puVar6 + 0x14) = uVar10;
            *(int32_t *)(puVar6 + 3) = uVar1;
            *(int32_t *)((int64_t)puVar6 + 0x1c) = uVar2;
            puVar6[5] = 0;
            puVar6[6] = 0;
            *puVar6 = &processed_var_400_ptr;
            puVar6[4] = &ui_system_data_1560_ptr;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)(puVar6 + 7) = *puVar7;
            *(int32_t *)((int64_t)puVar6 + 0x3c) = uVar10;
            *(int32_t *)(puVar6 + 8) = uVar1;
            *(int32_t *)((int64_t)puVar6 + 0x44) = uVar2;
            puVar6[9] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0;
            puVar6[0xc] = 0;
            *(int32_t *)(puVar6 + 0xd) = 0;
            local_var_48 = puVar6;
            iVar4 = NetworkProtocol_9c190(puVar6);
            if ((iVar4 != 0) ||
               (iVar4 = DataStreamProcessor(extraout_XMM0_Da_01,&local_buffer_00000048), iVar4 != 0)) {
              (**(code **)*puVar6)(puVar6,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar9 = iVar9 + 1;
            uVar10 = extraout_XMM0_Da_02;
          } while (iVar9 < iStack0000000000000040);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager(uVar10,&local_buffer_00000050);
    }
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_ab773(int param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int unaff_EBX;
  uint uVar7;
  uint64_t uVar8;
  uint64_t unaff_R15;
  int32_t in_XMM0_Da;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int local_var_40;
  uint64_t *local_var_48;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar8 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar5 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&processed_var_816_ptr,0x30a);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar5 = &ui_system_data_1544_ptr;
        *(int32_t *)(puVar5 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar5 + 0xc) = 0x17;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 2) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
        *(int32_t *)(puVar5 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
        puVar5[5] = unaff_R15;
        puVar5[6] = unaff_R15;
        *puVar5 = &processed_var_400_ptr;
        puVar5[4] = &ui_system_data_1560_ptr;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 7) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x3c) = uVar1;
        *(int32_t *)(puVar5 + 8) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x44) = uVar3;
        puVar5[9] = unaff_R15;
        puVar5[10] = unaff_R15;
        puVar5[0xb] = unaff_R15;
        puVar5[0xc] = unaff_R15;
        *(int *)(puVar5 + 0xd) = (int)unaff_R15;
        local_var_48 = puVar5;
        iVar4 = NetworkProtocol_9c190(puVar5);
        if ((iVar4 != 0) || (iVar4 = DataStreamProcessor(extraout_XMM0_Da,&local_buffer_00000048), iVar4 != 0))
        {
          (**(code **)*puVar5)(puVar5,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar7;
        in_XMM0_Da = extraout_XMM0_Da_00;
      } while ((int)uVar7 < local_var_40);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager(in_XMM0_Da,&local_buffer_00000050);
}
// 函数: void NetworkProtocol_ab8af(void)
void NetworkProtocol_ab8af(void)
{
  return;
}
// 函数: void NetworkProtocol_ab8bc(void)
void NetworkProtocol_ab8bc(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_ab8c7(void)
void NetworkProtocol_ab8c7(void)
{
  uint64_t *unaff_RBX;
  (**(code **)*unaff_RBX)();
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ab910(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  uint64_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint uVar6;
  int iVar7;
  int aiStack_48 [2];
  uint64_t *plocal_var_40;
  int8_t stack_array_38 [32];
  uVar4 = DataFlowProcessor(param_1,stack_array_38,1,param_3);
  if ((int)uVar4 == 0) {
    iVar7 = 0;
    aiStack_48[0] = 0;
    uVar2 = SystemCore_EncryptionManager(param_1,aiStack_48);
    if (aiStack_48[0] < 0) {
      uVar4 = 0xd;
    }
    else {
      uVar6 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_48[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar6) - uVar6)) ||
         (uVar4 = RenderingTextureManager0(param_2,aiStack_48[0]), (int)uVar4 == 0)) {
        if (uVar2 != 0x12) {
          if (uVar2 != 0) {
            return (uint64_t)uVar2;
          }
          if (0 < aiStack_48[0]) {
            do {
              puVar5 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x88,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar5 == (uint64_t *)0x0) {
                return 0x26;
              }
              NetworkProtocol_b0200(puVar5,5);
              puVar1 = puVar5 + 6;
              *puVar1 = puVar1;
              puVar5[7] = puVar1;
              *(int8_t *)(puVar5 + 8) = 0;
              *(int32_t *)((int64_t)puVar5 + 0x44) = 0;
              puVar5[9] = 0;
              puVar5[10] = 0;
              *(int32_t *)(puVar5 + 0xb) = 0;
              *(int8_t *)((int64_t)puVar5 + 0x5c) = 0;
              *puVar5 = &processed_var_9648_ptr;
              puVar5[0xc] = 0;
              puVar5[0xd] = 0;
              puVar5[0xe] = 0;
              puVar5[0xf] = 0;
              *(int32_t *)(puVar5 + 0x10) = 0;
              plocal_var_40 = puVar5;
              iVar3 = NetworkProtocol_9d0f0(puVar5,param_1);
              if ((iVar3 != 0) || (iVar3 = DataStreamProcessor(param_2,&plocal_var_40), iVar3 != 0)) {
                (**(code **)*puVar5)(puVar5,0);
// WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < aiStack_48[0]);
          }
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,stack_array_38);
      }
    }
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkProtocol_ab939(void)
{
  uint64_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint uVar6;
  int64_t unaff_RBP;
  int iVar7;
  int iStack0000000000000040;
  iVar7 = 0;
  iStack0000000000000040 = 0;
  uVar2 = SystemCore_EncryptionManager();
  if (iStack0000000000000040 < 0) {
    uVar4 = 0xd;
  }
  else {
    uVar6 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar6) - uVar6)) ||
       (uVar4 = RenderingTextureManager0(), (int)uVar4 == 0)) {
      if (uVar2 != 0x12) {
        if (uVar2 != 0) {
          return (uint64_t)uVar2;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar5 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x88,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar5 == (uint64_t *)0x0) {
              return 0x26;
            }
            NetworkProtocol_b0200(puVar5,5);
            puVar1 = puVar5 + 6;
            *puVar1 = puVar1;
            puVar5[7] = puVar1;
            *(int8_t *)(puVar5 + 8) = 0;
            *(int32_t *)((int64_t)puVar5 + 0x44) = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            *(int32_t *)(puVar5 + 0xb) = 0;
            *(int8_t *)((int64_t)puVar5 + 0x5c) = 0;
            *puVar5 = &processed_var_9648_ptr;
            puVar5[0xc] = 0;
            puVar5[0xd] = 0;
            puVar5[0xe] = 0;
            puVar5[0xf] = 0;
            *(int32_t *)(puVar5 + 0x10) = 0;
            iVar3 = NetworkProtocol_9d0f0(puVar5);
            if ((iVar3 != 0) || (iVar3 = DataStreamProcessor(), iVar3 != 0)) {
              (**(code **)*puVar5)(puVar5,0);
// WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iStack0000000000000040);
        }
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_ab990(int param_1)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  uint uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  uint64_t unaff_R15;
  int local_var_40;
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar6 = (int32_t)unaff_R15;
    uVar5 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar3 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x88,&processed_var_816_ptr,0x30a);
        if (puVar3 == (uint64_t *)0x0) {
          return 0x26;
        }
        NetworkProtocol_b0200(puVar3,5);
        puVar1 = puVar3 + 6;
        *puVar1 = puVar1;
        puVar3[7] = puVar1;
        *(char *)(puVar3 + 8) = (char)unaff_R15;
        *(int32_t *)((int64_t)puVar3 + 0x44) = uVar6;
        puVar3[9] = unaff_R15;
        puVar3[10] = unaff_R15;
        *(int32_t *)(puVar3 + 0xb) = uVar6;
        *(char *)((int64_t)puVar3 + 0x5c) = (char)unaff_R15;
        *puVar3 = &processed_var_9648_ptr;
        puVar3[0xc] = unaff_R15;
        puVar3[0xd] = unaff_R15;
        puVar3[0xe] = unaff_R15;
        puVar3[0xf] = unaff_R15;
        *(int32_t *)(puVar3 + 0x10) = uVar6;
        iVar2 = NetworkProtocol_9d0f0(puVar3);
        if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(), iVar2 != 0)) {
          (**(code **)*puVar3)(puVar3,0);
// WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
      } while ((int)uVar4 < local_var_40);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void NetworkProtocol_abab4(void)
void NetworkProtocol_abab4(void)
{
  return;
}
// 函数: void NetworkProtocol_abac1(void)
void NetworkProtocol_abac1(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address