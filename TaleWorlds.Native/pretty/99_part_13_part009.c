
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager



// 99_part_13_part009.c - 8 个函数

// 函数: void FUN_1808aa5eb(void)
void FUN_1808aa5eb(void)

{
  uint64_t *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa630(uint64_t param_1,int64_t param_2,int32_t param_3)

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
  int aiStack_98 [2];
  uint64_t *puStack_90;
  int8_t auStack_88 [32];
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  
  uVar6 = DataFlowProcessor(param_1,auStack_48,1,param_3);
  if ((int)uVar6 == 0) {
    aiStack_98[0] = 0;
    uVar4 = SystemCore_EncryptionManager(param_1,aiStack_98);
    if (aiStack_98[0] < 0) {
      uVar6 = 0xd;
    }
    else {
      uVar9 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_98[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar9) - uVar9)) ||
         (uVar6 = RenderingTextureManager0(param_2,aiStack_98[0]), (int)uVar6 == 0)) {
        if (uVar4 != 0x12) {
          if (uVar4 != 0) {
            return (uint64_t)uVar4;
          }
          iVar10 = 0;
          if (0 < aiStack_98[0]) {
            do {
              puVar7 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe8,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar7 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar7,0xb);
              *puVar7 = &rendering_buffer_232_ptr;
              puVar7[6] = &processed_var_9792_ptr;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 0x1b) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0xdc) = uVar1;
              *(int32_t *)(puVar7 + 0x1c) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0xe4) = uVar3;
              puStack_90 = puVar7;
              iVar5 = DataFlowProcessor(param_1,auStack_68,1,0x54494645);
              if ((((iVar5 == 0) &&
                   (iVar5 = DataFlowProcessor(param_1,auStack_88,0,0x42494645), iVar5 == 0)) &&
                  (iVar5 = SystemCore_ConfigManager(param_1,puVar7 + 2), iVar5 == 0)) &&
                 (iVar5 = SystemCore_ConfigManager(param_1,puVar7 + 0x1b), iVar5 == 0)) {
                    // WARNING: Subroutine does not return
                AdvancedSystemManager(param_1,auStack_88);
              }
              if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(param_2,&puStack_90), iVar5 != 0)) {
                (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < aiStack_98[0]);
          }
        }
                    // WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,auStack_48);
      }
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa65f(int32_t param_1)

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
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t uVar11;
  int32_t extraout_XMM0_Da_05;
  int iStack0000000000000040;
  uint64_t *in_stack_00000048;
  
  iStack0000000000000040 = 0;
  uVar4 = SystemCore_EncryptionManager(param_1,&stack0x00000040);
  if (iStack0000000000000040 < 0) {
    uVar6 = 0xd;
  }
  else {
    uVar9 = (int)*(uint *)(unaff_R15 + 0xc) >> 0x1f;
    uVar11 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R15 + 0xc) ^ uVar9) - uVar9)) ||
       (uVar6 = RenderingTextureManager0(extraout_XMM0_Da,iStack0000000000000040), uVar11 = extraout_XMM0_Da_00
       , (int)uVar6 == 0)) {
      if (uVar4 != 0x12) {
        if (uVar4 != 0) {
          return (uint64_t)uVar4;
        }
        iVar10 = 0;
        if (0 < iStack0000000000000040) {
          do {
            puVar7 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe8,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar7 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar7,0xb);
            *puVar7 = &rendering_buffer_232_ptr;
            puVar7[6] = &processed_var_9792_ptr;
            puVar8 = (int32_t *)SystemCoreProcessor();
            uVar11 = *puVar8;
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(int32_t *)(puVar7 + 0x1b) = uVar11;
            *(int32_t *)((int64_t)puVar7 + 0xdc) = uVar1;
            *(int32_t *)(puVar7 + 0x1c) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0xe4) = uVar3;
            in_stack_00000048 = puVar7;
            iVar5 = DataFlowProcessor(uVar11,&stack0x00000070,1,0x54494645);
            uVar11 = extraout_XMM0_Da_01;
            if ((((iVar5 == 0) &&
                 (iVar5 = DataFlowProcessor(extraout_XMM0_Da_01,&stack0x00000050,0,0x42494645),
                 uVar11 = extraout_XMM0_Da_02, iVar5 == 0)) &&
                (iVar5 = SystemCore_ConfigManager(extraout_XMM0_Da_02,puVar7 + 2), uVar11 = extraout_XMM0_Da_03
                , iVar5 == 0)) &&
               (iVar5 = SystemCore_ConfigManager(extraout_XMM0_Da_03,puVar7 + 0x1b),
               uVar11 = extraout_XMM0_Da_04, iVar5 == 0)) {
                    // WARNING: Subroutine does not return
              AdvancedSystemManager(extraout_XMM0_Da_04,&stack0x00000050);
            }
            if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(uVar11,&stack0x00000048), iVar5 != 0)) {
              (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar10 = iVar10 + 1;
            uVar11 = extraout_XMM0_Da_05;
          } while (iVar10 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(uVar11,&stack0x00000090);
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aa6bb(int32_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int in_ECX;
  int unaff_EBX;
  int unaff_R12D;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar7;
  int32_t extraout_XMM0_Da_03;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < in_ECX) {
      do {
        puVar5 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe8,&processed_var_816_ptr,0x30a);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar5,0xb);
        *puVar5 = &rendering_buffer_232_ptr;
        puVar5[6] = &processed_var_9792_ptr;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar7 = *puVar6;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 0x1b) = uVar7;
        *(int32_t *)((int64_t)puVar5 + 0xdc) = uVar1;
        *(int32_t *)(puVar5 + 0x1c) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0xe4) = uVar3;
        in_stack_00000048 = puVar5;
        iVar4 = DataFlowProcessor(uVar7,&stack0x00000070,1,0x54494645);
        uVar7 = extraout_XMM0_Da;
        if ((((iVar4 == 0) &&
             (iVar4 = DataFlowProcessor(extraout_XMM0_Da,&stack0x00000050,0,0x42494645),
             uVar7 = extraout_XMM0_Da_00, iVar4 == 0)) &&
            (iVar4 = SystemCore_ConfigManager(extraout_XMM0_Da_00,puVar5 + 2), uVar7 = extraout_XMM0_Da_01,
            iVar4 == 0)) &&
           (iVar4 = SystemCore_ConfigManager(extraout_XMM0_Da_01,puVar5 + 0x1b), uVar7 = extraout_XMM0_Da_02,
           iVar4 == 0)) {
                    // WARNING: Subroutine does not return
          AdvancedSystemManager(extraout_XMM0_Da_02,&stack0x00000050);
        }
        if ((iVar4 != 0) || (iVar4 = DataStreamProcessor(uVar7,&stack0x00000048), iVar4 != 0)) {
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
        }
        unaff_R12D = unaff_R12D + 1;
        param_1 = extraout_XMM0_Da_03;
      } while (unaff_R12D < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000090);
}






// 函数: void FUN_1808aa867(void)
void FUN_1808aa867(void)

{
  return;
}






// 函数: void FUN_1808aa877(void)
void FUN_1808aa877(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808aa882(void)
void FUN_1808aa882(void)

{
  uint64_t *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa8c0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  uint uVar10;
  int iVar11;
  int aiStack_58 [2];
  uint64_t *puStack_50;
  int8_t auStack_48 [32];
  
  uVar7 = DataFlowProcessor(param_1,auStack_48,1,param_3);
  if ((int)uVar7 == 0) {
    iVar11 = 0;
    aiStack_58[0] = 0;
    uVar5 = SystemCore_EncryptionManager(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar7 = 0xd;
    }
    else {
      uVar10 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar10) - uVar10)) ||
         (uVar7 = RenderingTextureManager0(param_2,aiStack_58[0]), (int)uVar7 == 0)) {
        if (uVar5 != 0x12) {
          if (uVar5 != 0) {
            return (uint64_t)uVar5;
          }
          if (0 < aiStack_58[0]) {
            do {
              puVar8 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x100,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar8 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar8,0xe);
              *puVar8 = &processed_var_9808_ptr;
              puVar8[6] = &processed_var_9792_ptr;
              puVar9 = (int32_t *)SystemCoreProcessor();
              uVar2 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              puVar1 = puVar8 + 0x1d;
              *(int32_t *)(puVar8 + 0x1b) = *puVar9;
              *(int32_t *)((int64_t)puVar8 + 0xdc) = uVar2;
              *(int32_t *)(puVar8 + 0x1c) = uVar3;
              *(int32_t *)((int64_t)puVar8 + 0xe4) = uVar4;
              puVar8[0x1e] = 0;
              *puVar1 = puVar1;
              puVar8[0x1e] = puVar1;
              *(int32_t *)(puVar8 + 0x1f) = 0x42c80000;
              puStack_50 = puVar8;
              iVar6 = FUN_18089b630(puVar8,param_1);
              if ((iVar6 != 0) || (iVar6 = DataStreamProcessor(param_2,&puStack_50), iVar6 != 0)) {
                (**(code **)*puVar8)(puVar8,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar8,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < aiStack_58[0]);
          }
        }
                    // WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,auStack_48);
      }
    }
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa8ec(int32_t param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  int64_t unaff_RBP;
  int iVar10;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar11;
  int iStack0000000000000040;
  uint64_t *in_stack_00000048;
  
  iVar10 = 0;
  iStack0000000000000040 = 0;
  uVar4 = SystemCore_EncryptionManager(param_1,&stack0x00000040);
  if (iStack0000000000000040 < 0) {
    uVar6 = 0xd;
  }
  else {
    uVar9 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    uVar11 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar9) - uVar9)) ||
       (uVar6 = RenderingTextureManager0(extraout_XMM0_Da,iStack0000000000000040), uVar11 = extraout_XMM0_Da_00
       , (int)uVar6 == 0)) {
      if (uVar4 != 0x12) {
        if (uVar4 != 0) {
          return (uint64_t)uVar4;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar7 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x100,&processed_var_816_ptr,
                                   0x30a,0);
            if (puVar7 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar7,0xe);
            *puVar7 = &processed_var_9808_ptr;
            puVar7[6] = &processed_var_9792_ptr;
            puVar8 = (int32_t *)SystemCoreProcessor();
            uVar11 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            puVar1 = puVar7 + 0x1d;
            *(int32_t *)(puVar7 + 0x1b) = *puVar8;
            *(int32_t *)((int64_t)puVar7 + 0xdc) = uVar11;
            *(int32_t *)(puVar7 + 0x1c) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0xe4) = uVar3;
            puVar7[0x1e] = 0;
            *puVar1 = puVar1;
            puVar7[0x1e] = puVar1;
            *(int32_t *)(puVar7 + 0x1f) = 0x42c80000;
            in_stack_00000048 = puVar7;
            iVar5 = FUN_18089b630(puVar7);
            if ((iVar5 != 0) ||
               (iVar5 = DataStreamProcessor(extraout_XMM0_Da_01,&stack0x00000048), iVar5 != 0)) {
              (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar10 = iVar10 + 1;
            uVar11 = extraout_XMM0_Da_02;
          } while (iVar10 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(uVar11,&stack0x00000050);
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aa943(int param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  int unaff_EBX;
  uint uVar8;
  uint64_t uVar9;
  uint64_t unaff_R15;
  int32_t in_XMM0_Da;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar9 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar6 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x100,&processed_var_816_ptr,0x30a);
        if (puVar6 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar6,0xe);
        *puVar6 = &processed_var_9808_ptr;
        puVar6[6] = &processed_var_9792_ptr;
        puVar7 = (int32_t *)SystemCoreProcessor();
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        puVar1 = puVar6 + 0x1d;
        *(int32_t *)(puVar6 + 0x1b) = *puVar7;
        *(int32_t *)((int64_t)puVar6 + 0xdc) = uVar2;
        *(int32_t *)(puVar6 + 0x1c) = uVar3;
        *(int32_t *)((int64_t)puVar6 + 0xe4) = uVar4;
        puVar6[0x1e] = unaff_R15;
        *puVar1 = puVar1;
        puVar6[0x1e] = puVar1;
        *(int32_t *)(puVar6 + 0x1f) = 0x42c80000;
        in_stack_00000048 = puVar6;
        iVar5 = FUN_18089b630(puVar6);
        if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(extraout_XMM0_Da,&stack0x00000048), iVar5 != 0))
        {
          (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        in_XMM0_Da = extraout_XMM0_Da_00;
      } while ((int)uVar8 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(in_XMM0_Da,&stack0x00000050);
}






// 函数: void FUN_1808aaa71(void)
void FUN_1808aaa71(void)

{
  return;
}






// 函数: void FUN_1808aaa7e(void)
void FUN_1808aaa7e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808aaa89(void)
void FUN_1808aaa89(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aaad0(int64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_68 [2];
  uint64_t *puStack_60;
  int8_t auStack_58 [32];
  int8_t auStack_38 [32];
  
  uVar2 = DataFlowProcessor(param_1,auStack_38,1,param_3);
  if ((int)uVar2 == 0) {
    aiStack_68[0] = 0;
    uVar1 = SystemCore_EncryptionManager(param_1,aiStack_68);
    if (aiStack_68[0] < 0) {
      uVar2 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_68[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar2 = RenderingTextureManager0(param_2,aiStack_68[0]), (int)uVar2 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStack_68[0]) {
            do {
              lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x100,&processed_var_816_ptr,
                                    0x30a,0,0,1);
              if (lVar3 == 0) {
                return 0x26;
              }
              puVar4 = (uint64_t *)FUN_1808c75c0(lVar3);
              puStack_60 = puVar4;
              if (*(uint *)(param_1 + 0x40) < 0x31) {
                uVar1 = FUN_1808a2ed0(puVar4,param_1,0x544e5645);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  if ((((*(int *)(puVar4 + 6) == 0) && (*(int *)((int64_t)puVar4 + 0x34) == 0)) &&
                      (*(int *)(puVar4 + 7) == 0)) && (*(int *)((int64_t)puVar4 + 0x3c) == 0)) {
                    uVar2 = 0xd;
                  }
                  else if ((((*(int *)(puVar4 + 8) == 0) && (*(int *)((int64_t)puVar4 + 0x44) == 0)
                            ) && ((*(int *)(puVar4 + 9) == 0 &&
                                  ((*(int *)((int64_t)puVar4 + 0x4c) == 0 &&
                                   (*(int *)(puVar4 + 0xc) == 0)))))) &&
                          ((*(int *)((int64_t)puVar4 + 100) == 0 &&
                           ((*(int *)(puVar4 + 0xd) == 0 && (*(int *)((int64_t)puVar4 + 0x6c) == 0)
                            ))))) {
                    uVar2 = 0xd;
                  }
                  else if ((*(int *)(puVar4 + 10) != 0) ||
                          (((*(int *)((int64_t)puVar4 + 0x54) != 0 || (*(int *)(puVar4 + 0xb) != 0)
                            ) || (uVar2 = 0xd, *(int *)((int64_t)puVar4 + 0x5c) != 0)))) {
                    uVar2 = 0;
                  }
                }
              }
              else {
                uVar1 = DataFlowProcessor(param_1,auStack_58,1,0x544e5645);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  uVar1 = FUN_1808a2ed0(puVar4,param_1,0x42545645);
                  uVar2 = (uint64_t)uVar1;
                  if (uVar1 == 0) {
                    uVar1 = FUN_18089d250(puVar4,param_1);
                    uVar2 = (uint64_t)uVar1;
                    if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
                      AdvancedSystemManager(param_1,auStack_58);
                    }
                  }
                }
              }
              if ((int)uVar2 != 0) {
FUN_1808aad36:
                if (puVar4 == (uint64_t *)0x0) {
                  return uVar2;
                }
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              uVar1 = DataStreamProcessor(param_2,&puStack_60);
              uVar2 = (uint64_t)uVar1;
              if (uVar1 != 0) goto FUN_1808aad36;
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_68[0]);
          }
        }
                    // WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,auStack_38);
      }
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aaafc(void)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  int iStack0000000000000040;
  
  iStack0000000000000040 = 0;
  uVar1 = SystemCore_EncryptionManager();
  if (iStack0000000000000040 < 0) {
    uVar2 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_R14 + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R14 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar2 = RenderingTextureManager0(), (int)uVar2 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack0000000000000040) {
          do {
            lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x100,&processed_var_816_ptr,0x30a
                                  ,0);
            if (lVar3 == 0) {
              return 0x26;
            }
            puVar4 = (uint64_t *)FUN_1808c75c0(lVar3);
            if (*(uint *)(unaff_RSI + 0x40) < 0x31) {
              uVar1 = FUN_1808a2ed0(puVar4);
              uVar2 = (uint64_t)uVar1;
              if (uVar1 == 0) {
                if ((((*(int *)(puVar4 + 6) == 0) && (*(int *)((int64_t)puVar4 + 0x34) == 0)) &&
                    (*(int *)(puVar4 + 7) == 0)) && (*(int *)((int64_t)puVar4 + 0x3c) == 0)) {
                  uVar2 = 0xd;
                }
                else if ((((*(int *)(puVar4 + 8) == 0) && (*(int *)((int64_t)puVar4 + 0x44) == 0))
                         && ((*(int *)(puVar4 + 9) == 0 &&
                             ((*(int *)((int64_t)puVar4 + 0x4c) == 0 &&
                              (*(int *)(puVar4 + 0xc) == 0)))))) &&
                        ((*(int *)((int64_t)puVar4 + 100) == 0 &&
                         ((*(int *)(puVar4 + 0xd) == 0 && (*(int *)((int64_t)puVar4 + 0x6c) == 0)))
                         ))) {
                  uVar2 = 0xd;
                }
                else if ((*(int *)(puVar4 + 10) != 0) ||
                        (((*(int *)((int64_t)puVar4 + 0x54) != 0 || (*(int *)(puVar4 + 0xb) != 0))
                         || (uVar2 = 0xd, *(int *)((int64_t)puVar4 + 0x5c) != 0)))) {
                  uVar2 = 0;
                }
              }
            }
            else {
              uVar1 = DataFlowProcessor();
              uVar2 = (uint64_t)uVar1;
              if (uVar1 == 0) {
                uVar1 = FUN_1808a2ed0(puVar4);
                uVar2 = (uint64_t)uVar1;
                if (uVar1 == 0) {
                  uVar1 = FUN_18089d250(puVar4);
                  uVar2 = (uint64_t)uVar1;
                  if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
                    AdvancedSystemManager();
                  }
                }
              }
            }
            if ((int)uVar2 != 0) {
FUN_1808aad36:
              if (puVar4 == (uint64_t *)0x0) {
                return uVar2;
              }
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            uVar1 = DataStreamProcessor();
            uVar2 = (uint64_t)uVar1;
            if (uVar1 != 0) goto FUN_1808aad36;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aab57(int param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  int iVar4;
  int64_t unaff_RSI;
  int unaff_R15D;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar4 = unaff_R15D;
    if (0 < param_1) {
      do {
        lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x100,&processed_var_816_ptr,0x30a);
        if (lVar2 == 0) {
          return 0x26;
        }
        puVar3 = (uint64_t *)FUN_1808c75c0(lVar2);
        if (*(uint *)(unaff_RSI + 0x40) < 0x31) {
          iVar1 = FUN_1808a2ed0(puVar3);
          if (iVar1 == 0) {
            if ((((*(int *)(puVar3 + 6) == unaff_R15D) &&
                 (*(int *)((int64_t)puVar3 + 0x34) == unaff_R15D)) &&
                (*(int *)(puVar3 + 7) == unaff_R15D)) &&
               (*(int *)((int64_t)puVar3 + 0x3c) == unaff_R15D)) {
              iVar1 = 0xd;
            }
            else if (((((*(int *)(puVar3 + 8) == unaff_R15D) &&
                       (*(int *)((int64_t)puVar3 + 0x44) == unaff_R15D)) &&
                      ((*(int *)(puVar3 + 9) == unaff_R15D &&
                       ((*(int *)((int64_t)puVar3 + 0x4c) == unaff_R15D &&
                        (*(int *)(puVar3 + 0xc) == unaff_R15D)))))) &&
                     (*(int *)((int64_t)puVar3 + 100) == unaff_R15D)) &&
                    ((*(int *)(puVar3 + 0xd) == unaff_R15D &&
                     (*(int *)((int64_t)puVar3 + 0x6c) == unaff_R15D)))) {
              iVar1 = 0xd;
            }
            else if ((*(int *)(puVar3 + 10) != unaff_R15D) ||
                    (((*(int *)((int64_t)puVar3 + 0x54) != unaff_R15D ||
                      (*(int *)(puVar3 + 0xb) != unaff_R15D)) ||
                     (iVar1 = 0xd, *(int *)((int64_t)puVar3 + 0x5c) != unaff_R15D)))) {
              iVar1 = unaff_R15D;
            }
          }
        }
        else {
          iVar1 = DataFlowProcessor();
          if (((iVar1 == 0) && (iVar1 = FUN_1808a2ed0(puVar3), iVar1 == 0)) &&
             (iVar1 = FUN_18089d250(puVar3), iVar1 == 0)) {
                    // WARNING: Subroutine does not return
            AdvancedSystemManager();
          }
        }
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(), iVar1 != 0)) {
          if (puVar3 == (uint64_t *)0x0) {
            return iVar1;
          }
          (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&rendering_buffer_2144_ptr,0xc6,1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}






// 函数: void FUN_1808aad1b(void)
void FUN_1808aad1b(void)

{
  return;
}






