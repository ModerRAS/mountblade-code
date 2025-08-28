#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part012.c - 10 个函数

// 函数: void FUN_1808abd7e(void)
void FUN_1808abd7e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808abd89(void)
void FUN_1808abd89(void)

{
  uint64_t *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808abdd0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_58 [2];
  uint64_t *puStack_50;
  int8_t auStack_48 [32];
  
  uVar3 = DataFlowProcessor(param_1,auStack_48,1,param_3);
  if ((int)uVar3 == 0) {
    iVar6 = 0;
    aiStack_58[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStack_58[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          if (0 < aiStack_58[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x110,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar4,0xd);
              puVar4[0x1b] = 0;
              puVar4[0x1c] = 0;
              *(int32_t *)(puVar4 + 0x1d) = 4;
              *(int32_t *)((int64_t)puVar4 + 0xec) = 2;
              *puVar4 = &ui_system_data_112_ptr;
              puVar4[6] = &processed_var_9792_ptr;
              puVar4[0x1e] = 0x7fffffff;
              *(int32_t *)(puVar4 + 0x1f) = 0x21;
              *(int32_t *)((int64_t)puVar4 + 0xfc) = 0x42c80000;
              *(int32_t *)(puVar4 + 0x20) = 0x3ba3d70a;
              *(int32_t *)((int64_t)puVar4 + 0x104) = 0x3ba3d70a;
              puVar4[0x21] = 0;
              puStack_50 = puVar4;
              iVar2 = FUN_18089dcf0(puVar4,param_1);
              if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(param_2,&puStack_50), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_58[0]);
          }
        }
                    // WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,auStack_48);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808abdfc(int32_t param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int iVar6;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar7;
  int iStack0000000000000040;
  uint64_t *in_stack_00000048;
  
  iVar6 = 0;
  iStack0000000000000040 = 0;
  uVar1 = FUN_1808de650(param_1,&stack0x00000040);
  if (iStack0000000000000040 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    uVar7 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(extraout_XMM0_Da,iStack0000000000000040), uVar7 = extraout_XMM0_Da_00,
       (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x110,&processed_var_816_ptr,
                                   0x30a,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar4,0xd);
            puVar4[0x1b] = 0;
            puVar4[0x1c] = 0;
            *(int32_t *)(puVar4 + 0x1d) = 4;
            *(int32_t *)((int64_t)puVar4 + 0xec) = 2;
            *puVar4 = &ui_system_data_112_ptr;
            puVar4[6] = &processed_var_9792_ptr;
            puVar4[0x1e] = 0x7fffffff;
            *(int32_t *)(puVar4 + 0x1f) = 0x21;
            *(int32_t *)((int64_t)puVar4 + 0xfc) = 0x42c80000;
            *(int32_t *)(puVar4 + 0x20) = 0x3ba3d70a;
            *(int32_t *)((int64_t)puVar4 + 0x104) = 0x3ba3d70a;
            puVar4[0x21] = 0;
            in_stack_00000048 = puVar4;
            iVar2 = FUN_18089dcf0(puVar4);
            if ((iVar2 != 0) ||
               (iVar2 = DataStreamProcessor(extraout_XMM0_Da_01,&stack0x00000048), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar6 = iVar6 + 1;
            uVar7 = extraout_XMM0_Da_02;
          } while (iVar6 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(uVar7,&stack0x00000050);
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808abe53(int32_t param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int in_ECX;
  int unaff_EBX;
  uint uVar3;
  uint64_t uVar4;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar4 = unaff_R15 & 0xffffffff;
    if (0 < in_ECX) {
      do {
        puVar2 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x110,&processed_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar2,0xd);
        puVar2[0x1b] = unaff_R15;
        puVar2[0x1c] = unaff_R15;
        *(int32_t *)(puVar2 + 0x1d) = 4;
        *(int32_t *)((int64_t)puVar2 + 0xec) = 2;
        *puVar2 = &ui_system_data_112_ptr;
        puVar2[6] = &processed_var_9792_ptr;
        puVar2[0x1e] = 0x7fffffff;
        *(int32_t *)(puVar2 + 0x1f) = 0x21;
        *(int32_t *)((int64_t)puVar2 + 0xfc) = 0x42c80000;
        *(int32_t *)(puVar2 + 0x20) = 0x3ba3d70a;
        *(int32_t *)((int64_t)puVar2 + 0x104) = 0x3ba3d70a;
        puVar2[0x21] = unaff_R15;
        in_stack_00000048 = puVar2;
        iVar1 = FUN_18089dcf0(puVar2);
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(extraout_XMM0_Da,&stack0x00000048), iVar1 != 0))
        {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        param_1 = extraout_XMM0_Da_00;
      } while ((int)uVar3 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000050);
}






// 函数: void FUN_1808abfbb(void)
void FUN_1808abfbb(void)

{
  return;
}






// 函数: void FUN_1808abfc8(void)
void FUN_1808abfc8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808abfd3(void)
void FUN_1808abfd3(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ac020(uint64_t *param_1,int64_t param_2,int32_t param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_98 [2];
  uint64_t *puStack_90;
  int8_t auStack_88 [32];
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  
  uVar3 = DataFlowProcessor(param_1,auStack_48,1,param_3);
  if ((int)uVar3 == 0) {
    aiStack_98[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStack_98);
    if (aiStack_98[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_98[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStack_98[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (uint64_t)uVar1;
          }
          iVar6 = 0;
          if (0 < aiStack_98[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe0,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar4,0x1d);
              *puVar4 = &memory_allocator_344_ptr;
              puVar4[6] = &processed_var_9792_ptr;
              *(int32_t *)(puVar4 + 0x1b) = 0;
              puStack_90 = puVar4;
              iVar2 = DataFlowProcessor(param_1,auStack_68,1,0x494e4c53);
              if (((iVar2 == 0) &&
                  (iVar2 = DataFlowProcessor(param_1,auStack_88,0,0x424e4c53), iVar2 == 0)) &&
                 (iVar2 = FUN_180899360(param_1,puVar4 + 2), iVar2 == 0)) {
                if (*(int *)(param_1[1] + 0x18) == 0) {
                  iVar2 = SystemConfigManager(*param_1,puVar4 + 0x1b);
                  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
                    AdvancedSystemManager(param_1,auStack_88);
                  }
                }
                else {
                  iVar2 = 0x1c;
                }
              }
              if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(param_2,&puStack_90), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_98[0]);
          }
        }
                    // WARNING: Subroutine does not return
        AdvancedSystemManager(param_1,auStack_48);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ac04f(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  uint64_t *unaff_RDI;
  int64_t unaff_R15;
  int iStack0000000000000040;
  
  iStack0000000000000040 = 0;
  uVar1 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_R15 + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R15 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe0,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar4,0x1d);
            *puVar4 = &memory_allocator_344_ptr;
            puVar4[6] = &processed_var_9792_ptr;
            *(int32_t *)(puVar4 + 0x1b) = 0;
            iVar2 = DataFlowProcessor();
            if (((iVar2 == 0) && (iVar2 = DataFlowProcessor(), iVar2 == 0)) &&
               (iVar2 = FUN_180899360(), iVar2 == 0)) {
              if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                iVar2 = SystemConfigManager(*unaff_RDI,puVar4 + 0x1b);
                if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
                  AdvancedSystemManager();
                }
              }
              else {
                iVar2 = 0x1c;
              }
            }
            if ((iVar2 != 0) || (iVar2 = DataStreamProcessor(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&rendering_buffer_2144_ptr,0xc6,1);
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

int FUN_1808ac0ab(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int iVar3;
  uint64_t *unaff_RDI;
  int unaff_R12D;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar3 = unaff_R12D;
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe0,&processed_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar2,0x1d);
        *puVar2 = &memory_allocator_344_ptr;
        puVar2[6] = &processed_var_9792_ptr;
        *(int *)(puVar2 + 0x1b) = unaff_R12D;
        iVar1 = DataFlowProcessor();
        if (((iVar1 == 0) && (iVar1 = DataFlowProcessor(), iVar1 == 0)) &&
           (iVar1 = FUN_180899360(), iVar1 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == unaff_R12D) {
            iVar1 = SystemConfigManager(*unaff_RDI,puVar2 + 0x1b);
            if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
              AdvancedSystemManager();
            }
          }
          else {
            iVar1 = 0x1c;
          }
        }
        if ((iVar1 != 0) || (iVar1 = DataStreamProcessor(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&rendering_buffer_2144_ptr,0xc6,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}






// 函数: void FUN_1808ac264(void)
void FUN_1808ac264(void)

{
  return;
}






// 函数: void FUN_1808ac274(void)
void FUN_1808ac274(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ac27f(void)
void FUN_1808ac27f(void)

{
  uint64_t *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ac2c0(uint64_t param_1,int64_t param_2,int32_t param_3)

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
    uVar5 = FUN_1808de650(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar7 = 0xd;
    }
    else {
      uVar10 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar10) - uVar10)) ||
         (uVar7 = FUN_180747f10(param_2,aiStack_58[0]), (int)uVar7 == 0)) {
        if (uVar5 != 0x12) {
          if (uVar5 != 0) {
            return (uint64_t)uVar5;
          }
          if (0 < aiStack_58[0]) {
            do {
              puVar8 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar8 == (uint64_t *)0x0) {
                return 0x26;
              }
              *puVar8 = &ui_system_data_1544_ptr;
              *(int32_t *)(puVar8 + 1) = 0xb1e55ed1;
              *(int32_t *)((int64_t)puVar8 + 0xc) = 9;
              puVar9 = (int32_t *)SystemCoreProcessor();
              uVar2 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              *(int32_t *)(puVar8 + 2) = *puVar9;
              *(int32_t *)((int64_t)puVar8 + 0x14) = uVar2;
              *(int32_t *)(puVar8 + 3) = uVar3;
              *(int32_t *)((int64_t)puVar8 + 0x1c) = uVar4;
              puVar8[5] = 0;
              puVar8[6] = 0;
              puVar8[4] = &ui_system_data_1560_ptr;
              puVar1 = puVar8 + 0xb;
              *puVar8 = &ui_system_data_1552_ptr;
              puVar8[7] = 0;
              puVar8[8] = 0;
              puVar8[9] = 0;
              puVar8[10] = 0;
              puVar8[0xc] = 0;
              *puVar1 = puVar1;
              puVar8[0xc] = puVar1;
              puVar1 = puVar8 + 0xd;
              puVar8[0xe] = 0;
              *puVar1 = puVar1;
              puVar8[0xe] = puVar1;
              puVar8[0xf] = 0;
              puVar8[0x10] = 0;
              puVar8[0x11] = 0;
              puVar8[0x12] = 0;
              puStack_50 = puVar8;
              iVar6 = FUN_18089e4f0(puVar8,param_1);
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

uint64_t FUN_1808ac2ec(int32_t param_1)

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
  uVar4 = FUN_1808de650(param_1,&stack0x00000040);
  if (iStack0000000000000040 < 0) {
    uVar6 = 0xd;
  }
  else {
    uVar9 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    uVar11 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar9) - uVar9)) ||
       (uVar6 = FUN_180747f10(extraout_XMM0_Da,iStack0000000000000040), uVar11 = extraout_XMM0_Da_00
       , (int)uVar6 == 0)) {
      if (uVar4 != 0x12) {
        if (uVar4 != 0) {
          return (uint64_t)uVar4;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar7 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar7 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar7 = &ui_system_data_1544_ptr;
            *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar7 + 0xc) = 9;
            puVar8 = (int32_t *)SystemCoreProcessor();
            uVar11 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(int32_t *)(puVar7 + 2) = *puVar8;
            *(int32_t *)((int64_t)puVar7 + 0x14) = uVar11;
            *(int32_t *)(puVar7 + 3) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[4] = &ui_system_data_1560_ptr;
            puVar1 = puVar7 + 0xb;
            *puVar7 = &ui_system_data_1552_ptr;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            puVar7[0xc] = 0;
            *puVar1 = puVar1;
            puVar7[0xc] = puVar1;
            puVar1 = puVar7 + 0xd;
            puVar7[0xe] = 0;
            *puVar1 = puVar1;
            puVar7[0xe] = puVar1;
            puVar7[0xf] = 0;
            puVar7[0x10] = 0;
            puVar7[0x11] = 0;
            puVar7[0x12] = 0;
            in_stack_00000048 = puVar7;
            iVar5 = FUN_18089e4f0(puVar7);
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

int FUN_1808ac343(int32_t param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  int in_ECX;
  int unaff_EBX;
  uint uVar8;
  uint64_t uVar9;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar9 = unaff_R15 & 0xffffffff;
    if (0 < in_ECX) {
      do {
        puVar6 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x98,&processed_var_816_ptr,0x30a);
        if (puVar6 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar6 = &ui_system_data_1544_ptr;
        *(int32_t *)(puVar6 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar6 + 0xc) = 9;
        puVar7 = (int32_t *)SystemCoreProcessor();
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *(int32_t *)(puVar6 + 2) = *puVar7;
        *(int32_t *)((int64_t)puVar6 + 0x14) = uVar2;
        *(int32_t *)(puVar6 + 3) = uVar3;
        *(int32_t *)((int64_t)puVar6 + 0x1c) = uVar4;
        puVar6[5] = unaff_R15;
        puVar6[6] = unaff_R15;
        puVar6[4] = &ui_system_data_1560_ptr;
        puVar1 = puVar6 + 0xb;
        *puVar6 = &ui_system_data_1552_ptr;
        puVar6[7] = unaff_R15;
        puVar6[8] = unaff_R15;
        puVar6[9] = unaff_R15;
        puVar6[10] = unaff_R15;
        puVar6[0xc] = unaff_R15;
        *puVar1 = puVar1;
        puVar6[0xc] = puVar1;
        puVar1 = puVar6 + 0xd;
        puVar6[0xe] = unaff_R15;
        *puVar1 = puVar1;
        puVar6[0xe] = puVar1;
        puVar6[0xf] = unaff_R15;
        puVar6[0x10] = unaff_R15;
        puVar6[0x11] = unaff_R15;
        puVar6[0x12] = unaff_R15;
        in_stack_00000048 = puVar6;
        iVar5 = FUN_18089e4f0(puVar6);
        if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(extraout_XMM0_Da,&stack0x00000048), iVar5 != 0))
        {
          (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        param_1 = extraout_XMM0_Da_00;
      } while ((int)uVar8 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000050);
}






// 函数: void FUN_1808ac4a6(void)
void FUN_1808ac4a6(void)

{
  return;
}






// 函数: void FUN_1808ac4b3(void)
void FUN_1808ac4b3(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




