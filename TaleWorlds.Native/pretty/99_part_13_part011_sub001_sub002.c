#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part011_sub001_sub002.c - 1 个函数

// 函数: void FUN_1808abac9(void)
void FUN_1808abac9(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808abb10(uint64_t *param_1,int64_t param_2,int32_t param_3)

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
    iVar6 = 0;
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
          if (0 < aiStack_98[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe8,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar4,10);
              *puVar4 = &ui_system_data_176_ptr;
              puVar4[6] = &processed_var_9792_ptr;
              puVar4[0x1b] = 0;
              puVar4[0x1c] = 0;
              FUN_18084e110(puVar4 + 0x1b,&system_buffer_ptr);
              puStack_90 = puVar4;
              iVar2 = DataFlowProcessor(param_1,auStack_68,1,0x54495250);
              if (((iVar2 == 0) &&
                  (iVar2 = DataFlowProcessor(param_1,auStack_88,0,0x42495250), iVar2 == 0)) &&
                 (iVar2 = FUN_180899360(param_1,puVar4 + 2), iVar2 == 0)) {
                if (*(int *)(param_1[1] + 0x18) == 0) {
                  iVar2 = FUN_1808a2740(*param_1,puVar4 + 0x1b);
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

uint64_t FUN_1808abb3f(void)

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
  
  iVar6 = 0;
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
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (uint64_t *)
                     SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe8,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar4,10);
            *puVar4 = &ui_system_data_176_ptr;
            puVar4[6] = &processed_var_9792_ptr;
            puVar4[0x1b] = 0;
            puVar4[0x1c] = 0;
            FUN_18084e110(puVar4 + 0x1b,&system_buffer_ptr);
            iVar2 = DataFlowProcessor();
            if (((iVar2 == 0) && (iVar2 = DataFlowProcessor(), iVar2 == 0)) &&
               (iVar2 = FUN_180899360(), iVar2 == 0)) {
              if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                iVar2 = FUN_1808a2740(*unaff_RDI,puVar4 + 0x1b);
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

int FUN_1808abb9b(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *unaff_RDI;
  uint64_t unaff_R12;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar4 = unaff_R12 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xe8,&processed_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar2,10);
        *puVar2 = &ui_system_data_176_ptr;
        puVar2[6] = &processed_var_9792_ptr;
        puVar2[0x1b] = unaff_R12;
        puVar2[0x1c] = unaff_R12;
        FUN_18084e110(puVar2 + 0x1b,&system_buffer_ptr);
        iVar1 = DataFlowProcessor();
        if (((iVar1 == 0) && (iVar1 = DataFlowProcessor(), iVar1 == 0)) &&
           (iVar1 = FUN_180899360(), iVar1 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == (int)unaff_R12) {
            iVar1 = FUN_1808a2740(*unaff_RDI,puVar2 + 0x1b);
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
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
      } while ((int)uVar3 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}








