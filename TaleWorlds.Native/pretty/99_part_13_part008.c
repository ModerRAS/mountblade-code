#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part008.c - 6 个函数

// 函数: void FUN_1808aa150(void)
void FUN_1808aa150(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa190(uint64_t param_1,int64_t param_2,int32_t param_3)

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
  uint64_t *puStack_50;
  int8_t auStack_48 [32];
  
  uVar6 = DataFlowProcessor(param_1,auStack_48,1,param_3);
  if ((int)uVar6 == 0) {
    aiStack_58[0] = 0;
    uVar4 = FUN_1808de650(param_1,aiStack_58);
    if (aiStack_58[0] < 0) {
      uVar6 = 0xd;
    }
    else {
      uVar9 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_58[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar9) - uVar9)) ||
         (uVar6 = FUN_180747f10(param_2,aiStack_58[0]), (int)uVar6 == 0)) {
        if (uVar4 != 0x12) {
          if (uVar4 != 0) {
            return (uint64_t)uVar4;
          }
          iVar10 = 0;
          if (0 < aiStack_58[0]) {
            do {
              puVar7 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&processed_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar7 == (uint64_t *)0x0) {
                return 0x26;
              }
              *puVar7 = &ui_system_data_1544_ptr;
              *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
              *(int32_t *)((int64_t)puVar7 + 0xc) = 0x12;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 2) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
              *(int32_t *)(puVar7 + 3) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
              *puVar7 = &processed_var_9728_ptr;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 4) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x24) = uVar1;
              *(int32_t *)(puVar7 + 5) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x2c) = uVar3;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 6) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x34) = uVar1;
              *(int32_t *)(puVar7 + 7) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x3c) = uVar3;
              *(int32_t *)(puVar7 + 8) = 0xffffffff;
              puStack_50 = puVar7;
              iVar5 = FUN_18089b2a0(puVar7,param_1);
              if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(param_2,&puStack_50), iVar5 != 0)) {
                (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < aiStack_58[0]);
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

uint64_t FUN_1808aa1bc(int32_t param_1)

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
  uint64_t *in_stack_00000048;
  
  iStack0000000000000040 = 0;
  uVar3 = FUN_1808de650(param_1,&stack0x00000040);
  if (iStack0000000000000040 < 0) {
    uVar5 = 0xd;
  }
  else {
    uVar8 = (int)*(uint *)(unaff_RBP + 0xc) >> 0x1f;
    uVar10 = extraout_XMM0_Da;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_RBP + 0xc) ^ uVar8) - uVar8)) ||
       (uVar5 = FUN_180747f10(extraout_XMM0_Da,iStack0000000000000040), uVar10 = extraout_XMM0_Da_00
       , (int)uVar5 == 0)) {
      if (uVar3 != 0x12) {
        if (uVar3 != 0) {
          return (uint64_t)uVar3;
        }
        iVar9 = 0;
        if (0 < iStack0000000000000040) {
          do {
            puVar6 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&processed_var_816_ptr,0x30a
                                   ,0);
            if (puVar6 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar6 = &ui_system_data_1544_ptr;
            *(int32_t *)(puVar6 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar6 + 0xc) = 0x12;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)(puVar6 + 2) = *puVar7;
            *(int32_t *)((int64_t)puVar6 + 0x14) = uVar10;
            *(int32_t *)(puVar6 + 3) = uVar1;
            *(int32_t *)((int64_t)puVar6 + 0x1c) = uVar2;
            *puVar6 = &processed_var_9728_ptr;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)(puVar6 + 4) = *puVar7;
            *(int32_t *)((int64_t)puVar6 + 0x24) = uVar10;
            *(int32_t *)(puVar6 + 5) = uVar1;
            *(int32_t *)((int64_t)puVar6 + 0x2c) = uVar2;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)(puVar6 + 6) = *puVar7;
            *(int32_t *)((int64_t)puVar6 + 0x34) = uVar10;
            *(int32_t *)(puVar6 + 7) = uVar1;
            *(int32_t *)((int64_t)puVar6 + 0x3c) = uVar2;
            *(int32_t *)(puVar6 + 8) = 0xffffffff;
            in_stack_00000048 = puVar6;
            iVar4 = FUN_18089b2a0(puVar6);
            if ((iVar4 != 0) ||
               (iVar4 = DataStreamProcessor(extraout_XMM0_Da_01,&stack0x00000048), iVar4 != 0)) {
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
      AdvancedSystemManager(uVar10,&stack0x00000050);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aa213(int32_t param_1)

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
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    if (0 < in_ECX) {
      do {
        puVar5 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x48,&processed_var_816_ptr,0x30a);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar5 = &ui_system_data_1544_ptr;
        *(int32_t *)(puVar5 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar5 + 0xc) = 0x12;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 2) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
        *(int32_t *)(puVar5 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
        *puVar5 = &processed_var_9728_ptr;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 4) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x24) = uVar1;
        *(int32_t *)(puVar5 + 5) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x2c) = uVar3;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 6) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x34) = uVar1;
        *(int32_t *)(puVar5 + 7) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x3c) = uVar3;
        *(int32_t *)(puVar5 + 8) = 0xffffffff;
        in_stack_00000048 = puVar5;
        iVar4 = FUN_18089b2a0(puVar5);
        if ((iVar4 != 0) || (iVar4 = DataStreamProcessor(extraout_XMM0_Da,&stack0x00000048), iVar4 != 0))
        {
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
        }
        unaff_R15D = unaff_R15D + 1;
        param_1 = extraout_XMM0_Da_00;
      } while (unaff_R15D < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000050);
}






// 函数: void FUN_1808aa33b(void)
void FUN_1808aa33b(void)

{
  return;
}






// 函数: void FUN_1808aa348(void)
void FUN_1808aa348(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808aa353(void)
void FUN_1808aa353(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa3a0(uint64_t *param_1,int64_t param_2,int32_t param_3)

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
  int aiStack_78 [2];
  uint64_t *puStack_70;
  int8_t auStack_68 [32];
  int8_t auStack_48 [32];
  
  uVar6 = DataFlowProcessor(param_1,auStack_48,1,param_3);
  aiStack_78[0] = (int)uVar6;
  if (aiStack_78[0] == 0) {
    uVar4 = FUN_1808de650(param_1,aiStack_78);
    if (aiStack_78[0] < 0) {
      return 0xd;
    }
    uVar9 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
    if ((aiStack_78[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar9) - uVar9)) ||
       (uVar6 = FUN_180747f10(param_2,aiStack_78[0]), (int)uVar6 == 0)) {
      if (uVar4 != 0x12) {
        if (uVar4 != 0) {
          return (uint64_t)uVar4;
        }
        iVar10 = 0;
        if (0 < aiStack_78[0]) {
          do {
            puVar7 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&processed_var_816_ptr,0x30a
                                   ,0,0,1);
            if (puVar7 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar7 = &ui_system_data_1544_ptr;
            *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar7 + 0xc) = 0x18;
            puVar8 = (int32_t *)SystemCoreProcessor();
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(int32_t *)(puVar7 + 2) = *puVar8;
            *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
            *(int32_t *)(puVar7 + 3) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
            *puVar7 = &processed_var_9344_ptr;
            puVar8 = (int32_t *)SystemCoreProcessor();
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(int32_t *)(puVar7 + 4) = *puVar8;
            *(int32_t *)((int64_t)puVar7 + 0x24) = uVar1;
            *(int32_t *)(puVar7 + 5) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0x2c) = uVar3;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puStack_70 = puVar7;
            iVar5 = DataFlowProcessor(param_1,auStack_68,0,0x56525543);
            if ((iVar5 == 0) && (iVar5 = FUN_180899360(param_1,puVar7 + 2), iVar5 == 0)) {
              if (*(int *)(param_1[1] + 0x18) == 0) {
                iVar5 = FUN_180899090(*param_1,puVar7 + 4);
                if ((iVar5 == 0) && (iVar5 = FUN_1808a4e60(param_1,puVar7 + 6,0), iVar5 == 0)) {
                    // WARNING: Subroutine does not return
                  AdvancedSystemManager(param_1,auStack_68);
                }
              }
              else {
                iVar5 = 0x1c;
              }
            }
            if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(param_2,&puStack_70), iVar5 != 0)) {
              (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < aiStack_78[0]);
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemManager(param_1,auStack_48);
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa3d1(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  int iVar10;
  uint64_t *unaff_RDI;
  int64_t unaff_R13;
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
  
  iStack0000000000000040 = in_EAX;
  uVar4 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    return 0xd;
  }
  uVar9 = (int)*(uint *)(unaff_R13 + 0xc) >> 0x1f;
  uVar11 = extraout_XMM0_Da;
  if (((int)((*(uint *)(unaff_R13 + 0xc) ^ uVar9) - uVar9) < iStack0000000000000040) &&
     (uVar6 = FUN_180747f10(extraout_XMM0_Da,iStack0000000000000040), uVar11 = extraout_XMM0_Da_00,
     (int)uVar6 != 0)) {
    return uVar6;
  }
  if (uVar4 != 0x12) {
    if (uVar4 != 0) {
      return (uint64_t)uVar4;
    }
    iVar10 = 0;
    if (0 < iStack0000000000000040) {
      do {
        puVar7 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&processed_var_816_ptr,0x30a,0);
        if (puVar7 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar7 = &ui_system_data_1544_ptr;
        *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar7 + 0xc) = 0x18;
        puVar8 = (int32_t *)SystemCoreProcessor();
        uVar11 = puVar8[1];
        uVar1 = puVar8[2];
        uVar2 = puVar8[3];
        *(int32_t *)(puVar7 + 2) = *puVar8;
        *(int32_t *)((int64_t)puVar7 + 0x14) = uVar11;
        *(int32_t *)(puVar7 + 3) = uVar1;
        *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar2;
        *puVar7 = &processed_var_9344_ptr;
        puVar8 = (int32_t *)SystemCoreProcessor();
        uVar11 = *puVar8;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *(int32_t *)(puVar7 + 4) = uVar11;
        *(int32_t *)((int64_t)puVar7 + 0x24) = uVar1;
        *(int32_t *)(puVar7 + 5) = uVar2;
        *(int32_t *)((int64_t)puVar7 + 0x2c) = uVar3;
        puVar7[6] = 0;
        puVar7[7] = 0;
        in_stack_00000048 = puVar7;
        iVar5 = DataFlowProcessor(uVar11,&stack0x00000050,0,0x56525543);
        uVar11 = extraout_XMM0_Da_01;
        if ((iVar5 == 0) &&
           (iVar5 = FUN_180899360(extraout_XMM0_Da_01,puVar7 + 2), uVar11 = extraout_XMM0_Da_02,
           iVar5 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            iVar5 = FUN_180899090(*unaff_RDI,puVar7 + 4);
            uVar11 = extraout_XMM0_Da_03;
            if ((iVar5 == 0) &&
               (iVar5 = FUN_1808a4e60(extraout_XMM0_Da_03,puVar7 + 6,0),
               uVar11 = extraout_XMM0_Da_04, iVar5 == 0)) {
                    // WARNING: Subroutine does not return
              AdvancedSystemManager(extraout_XMM0_Da_04,&stack0x00000050);
            }
          }
          else {
            iVar5 = 0x1c;
          }
        }
        if ((iVar5 != 0) || (iVar5 = DataStreamProcessor(uVar11,&stack0x00000048), iVar5 != 0)) {
          (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&rendering_buffer_2144_ptr,0xc6,1);
        }
        iVar10 = iVar10 + 1;
        uVar11 = extraout_XMM0_Da_05;
      } while (iVar10 < iStack0000000000000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(uVar11,&stack0x00000070);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aa407(int param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint uVar8;
  uint unaff_EBX;
  int iVar9;
  uint64_t *unaff_RDI;
  int64_t unaff_R13;
  int32_t in_XMM0_Da;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_04;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  uVar8 = (int)*(uint *)(unaff_R13 + 0xc) >> 0x1f;
  if (((int)((*(uint *)(unaff_R13 + 0xc) ^ uVar8) - uVar8) < param_1) &&
     (uVar5 = FUN_180747f10(in_XMM0_Da,param_1), in_XMM0_Da = extraout_XMM0_Da,
     param_1 = in_stack_00000040, (int)uVar5 != 0)) {
    return uVar5;
  }
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return (uint64_t)unaff_EBX;
    }
    iVar9 = 0;
    if (0 < param_1) {
      do {
        puVar6 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&processed_var_816_ptr,0x30a,0);
        if (puVar6 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar6 = &ui_system_data_1544_ptr;
        *(int32_t *)(puVar6 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar6 + 0xc) = 0x18;
        puVar7 = (int32_t *)SystemCoreProcessor();
        uVar10 = puVar7[1];
        uVar1 = puVar7[2];
        uVar2 = puVar7[3];
        *(int32_t *)(puVar6 + 2) = *puVar7;
        *(int32_t *)((int64_t)puVar6 + 0x14) = uVar10;
        *(int32_t *)(puVar6 + 3) = uVar1;
        *(int32_t *)((int64_t)puVar6 + 0x1c) = uVar2;
        *puVar6 = &processed_var_9344_ptr;
        puVar7 = (int32_t *)SystemCoreProcessor();
        uVar10 = *puVar7;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *(int32_t *)(puVar6 + 4) = uVar10;
        *(int32_t *)((int64_t)puVar6 + 0x24) = uVar1;
        *(int32_t *)(puVar6 + 5) = uVar2;
        *(int32_t *)((int64_t)puVar6 + 0x2c) = uVar3;
        puVar6[6] = 0;
        puVar6[7] = 0;
        in_stack_00000048 = puVar6;
        iVar4 = DataFlowProcessor(uVar10,&stack0x00000050,0,0x56525543);
        uVar10 = extraout_XMM0_Da_00;
        if ((iVar4 == 0) &&
           (iVar4 = FUN_180899360(extraout_XMM0_Da_00,puVar6 + 2), uVar10 = extraout_XMM0_Da_01,
           iVar4 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            iVar4 = FUN_180899090(*unaff_RDI,puVar6 + 4);
            uVar10 = extraout_XMM0_Da_02;
            if ((iVar4 == 0) &&
               (iVar4 = FUN_1808a4e60(extraout_XMM0_Da_02,puVar6 + 6,0),
               uVar10 = extraout_XMM0_Da_03, iVar4 == 0)) {
                    // WARNING: Subroutine does not return
              AdvancedSystemManager(extraout_XMM0_Da_03,&stack0x00000050);
            }
          }
          else {
            iVar4 = 0x1c;
          }
        }
        if ((iVar4 != 0) || (iVar4 = DataStreamProcessor(uVar10,&stack0x00000048), iVar4 != 0)) {
          (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&rendering_buffer_2144_ptr,0xc6,1);
        }
        iVar9 = iVar9 + 1;
        in_XMM0_Da = extraout_XMM0_Da_04;
      } while (iVar9 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(in_XMM0_Da,&stack0x00000070);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aa42a(int32_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int in_ECX;
  int unaff_EBX;
  int iVar7;
  uint64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar8;
  int32_t extraout_XMM0_Da_03;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar7 = 0;
    if (0 < in_ECX) {
      do {
        puVar5 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&processed_var_816_ptr,0x30a,0);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar5 = &ui_system_data_1544_ptr;
        *(int32_t *)(puVar5 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar5 + 0xc) = 0x18;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar8 = puVar6[1];
        uVar1 = puVar6[2];
        uVar2 = puVar6[3];
        *(int32_t *)(puVar5 + 2) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x14) = uVar8;
        *(int32_t *)(puVar5 + 3) = uVar1;
        *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar2;
        *puVar5 = &processed_var_9344_ptr;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar8 = *puVar6;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 4) = uVar8;
        *(int32_t *)((int64_t)puVar5 + 0x24) = uVar1;
        *(int32_t *)(puVar5 + 5) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x2c) = uVar3;
        puVar5[6] = 0;
        puVar5[7] = 0;
        in_stack_00000048 = puVar5;
        iVar4 = DataFlowProcessor(uVar8,&stack0x00000050,0,0x56525543);
        uVar8 = extraout_XMM0_Da;
        if ((iVar4 == 0) &&
           (iVar4 = FUN_180899360(extraout_XMM0_Da,puVar5 + 2), uVar8 = extraout_XMM0_Da_00,
           iVar4 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            iVar4 = FUN_180899090(*unaff_RDI,puVar5 + 4);
            uVar8 = extraout_XMM0_Da_01;
            if ((iVar4 == 0) &&
               (iVar4 = FUN_1808a4e60(extraout_XMM0_Da_01,puVar5 + 6,0), uVar8 = extraout_XMM0_Da_02
               , iVar4 == 0)) {
                    // WARNING: Subroutine does not return
              AdvancedSystemManager(extraout_XMM0_Da_02,&stack0x00000050);
            }
          }
          else {
            iVar4 = 0x1c;
          }
        }
        if ((iVar4 != 0) || (iVar4 = DataStreamProcessor(uVar8,&stack0x00000048), iVar4 != 0)) {
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&rendering_buffer_2144_ptr,0xc6,1);
        }
        iVar7 = iVar7 + 1;
        param_1 = extraout_XMM0_Da_03;
      } while (iVar7 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000070);
}






// 函数: void FUN_1808aa5d8(void)
void FUN_1808aa5d8(void)

{
  return;
}






// 函数: void FUN_1808aa5e0(void)
void FUN_1808aa5e0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




