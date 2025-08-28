#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part010.c - 9 个函数

// 函数: void FUN_1808aad2b(void)
void FUN_1808aad2b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808aad36(void)

{
  uint64_t *unaff_RBX;
  int32_t unaff_EDI;
  
  if (unaff_RBX != (uint64_t *)0x0) {
    (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808aad80(uint64_t *param_1,int64_t param_2,int32_t param_3)

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
  if ((int)uVar6 == 0) {
    aiStack_78[0] = 0;
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
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,0x30a
                                   ,0,0,1);
            if (puVar7 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar7 = &unknown_var_1544_ptr;
            *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar7 + 0xc) = 0x10;
            puVar8 = (int32_t *)SystemCoreProcessor();
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(int32_t *)(puVar7 + 2) = *puVar8;
            *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
            *(int32_t *)(puVar7 + 3) = uVar2;
            *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
            puVar7[4] = 0;
            *(int32_t *)(puVar7 + 5) = 3;
            *puVar7 = &unknown_var_408_ptr;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            *(int32_t *)(puVar7 + 9) = 0;
            puStack_70 = puVar7;
            iVar5 = DataFlowProcessor(param_1,auStack_68,0,0x5641574c);
            if ((iVar5 == 0) && (iVar5 = FUN_180899360(param_1,puVar7 + 2), iVar5 == 0)) {
              if (*(int *)(param_1[1] + 0x18) == 0) {
                iVar5 = FUN_1808a2740(*param_1,puVar7 + 6);
                if ((iVar5 == 0) &&
                   ((*(uint *)(param_1 + 8) < 0x46 ||
                    (iVar5 = FUN_1808a2d50(param_1,puVar7 + 5), iVar5 == 0)))) {
                  if (*(uint *)(param_1 + 8) < 99) {
                    iVar10 = 0;
                  }
                  else if (*(int *)(param_1[1] + 0x18) == 0) {
                    iVar10 = SystemThreadProcessor(*param_1,puVar7 + 9,4);
                  }
                  else {
                    iVar10 = 0x1c;
                  }
                  if (iVar10 == 0) {
                    // WARNING: Subroutine does not return
                    AdvancedSystemManager(param_1,auStack_68);
                  }
                  goto FUN_1808ab017;
                }
              }
              else {
                iVar5 = 0x1c;
              }
            }
            if ((iVar5 != 0) || (iVar5 = FUN_18087dc70(param_2,&puStack_70), iVar5 != 0)) {
FUN_1808ab017:
              (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
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

uint64_t FUN_1808aadb1(int32_t param_1)

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
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
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
  uint64_t in_stack_000000c8;
  
  iStack0000000000000040 = in_EAX;
  uVar4 = FUN_1808de650(param_1,&stack0x00000040);
  if (iStack0000000000000040 < 0) {
    return 0xd;
  }
  uVar9 = (int)*(uint *)(unaff_RSI + 0xc) >> 0x1f;
  uVar11 = extraout_XMM0_Da;
  if (((int)((*(uint *)(unaff_RSI + 0xc) ^ uVar9) - uVar9) < iStack0000000000000040) &&
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
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,0x30a,0);
        if (puVar7 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar7 = &unknown_var_1544_ptr;
        *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar7 + 0xc) = 0x10;
        puVar8 = (int32_t *)SystemCoreProcessor();
        uVar11 = *puVar8;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *(int32_t *)(puVar7 + 2) = uVar11;
        *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
        *(int32_t *)(puVar7 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
        puVar7[4] = 0;
        *(int32_t *)(puVar7 + 5) = 3;
        *puVar7 = &unknown_var_408_ptr;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        *(int32_t *)(puVar7 + 9) = 0;
        in_stack_00000048 = puVar7;
        iVar5 = DataFlowProcessor(uVar11,&stack0x00000050,0,0x5641574c);
        if ((iVar5 == 0) && (iVar5 = FUN_180899360(extraout_XMM0_Da_01,puVar7 + 2), iVar5 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            iVar5 = FUN_1808a2740(*unaff_RDI,puVar7 + 6);
            if ((iVar5 == 0) &&
               ((uVar11 = extraout_XMM0_Da_02, *(uint *)(unaff_RDI + 8) < 0x46 ||
                (iVar5 = FUN_1808a2d50(extraout_XMM0_Da_02,puVar7 + 5), uVar11 = extraout_XMM0_Da_03
                , iVar5 == 0)))) {
              if (*(uint *)(unaff_RDI + 8) < 99) {
                iVar10 = 0;
              }
              else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                iVar10 = SystemThreadProcessor(*unaff_RDI,puVar7 + 9,4);
                uVar11 = extraout_XMM0_Da_04;
              }
              else {
                iVar10 = 0x1c;
              }
              if (iVar10 == 0) {
                    // WARNING: Subroutine does not return
                AdvancedSystemManager(uVar11,&stack0x00000050);
              }
              goto FUN_1808ab017;
            }
          }
          else {
            iVar5 = 0x1c;
          }
        }
        if ((iVar5 != 0) || (iVar5 = FUN_18087dc70(in_stack_000000c8,&stack0x00000048), iVar5 != 0))
        {
FUN_1808ab017:
          (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
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

uint64_t FUN_1808aadeb(int32_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  int in_ECX;
  uint uVar8;
  uint unaff_EBX;
  int iVar9;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_04;
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  uint64_t in_stack_000000c8;
  
  uVar8 = (int)*(uint *)(unaff_RSI + 0xc) >> 0x1f;
  if (((int)((*(uint *)(unaff_RSI + 0xc) ^ uVar8) - uVar8) < in_ECX) &&
     (uVar5 = FUN_180747f10(param_1,in_ECX), param_1 = extraout_XMM0_Da, in_ECX = in_stack_00000040,
     (int)uVar5 != 0)) {
    return uVar5;
  }
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return (uint64_t)unaff_EBX;
    }
    iVar9 = 0;
    if (0 < in_ECX) {
      do {
        puVar6 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,0x30a,0);
        if (puVar6 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar6 = &unknown_var_1544_ptr;
        *(int32_t *)(puVar6 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar6 + 0xc) = 0x10;
        puVar7 = (int32_t *)SystemCoreProcessor();
        uVar10 = *puVar7;
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *(int32_t *)(puVar6 + 2) = uVar10;
        *(int32_t *)((int64_t)puVar6 + 0x14) = uVar1;
        *(int32_t *)(puVar6 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar6 + 0x1c) = uVar3;
        puVar6[4] = 0;
        *(int32_t *)(puVar6 + 5) = 3;
        *puVar6 = &unknown_var_408_ptr;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        *(int32_t *)(puVar6 + 9) = 0;
        in_stack_00000048 = puVar6;
        iVar4 = DataFlowProcessor(uVar10,&stack0x00000050,0,0x5641574c);
        if ((iVar4 == 0) && (iVar4 = FUN_180899360(extraout_XMM0_Da_00,puVar6 + 2), iVar4 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            iVar4 = FUN_1808a2740(*unaff_RDI,puVar6 + 6);
            if ((iVar4 == 0) &&
               ((uVar10 = extraout_XMM0_Da_01, *(uint *)(unaff_RDI + 8) < 0x46 ||
                (iVar4 = FUN_1808a2d50(extraout_XMM0_Da_01,puVar6 + 5), uVar10 = extraout_XMM0_Da_02
                , iVar4 == 0)))) {
              if (*(uint *)(unaff_RDI + 8) < 99) {
                iVar9 = 0;
              }
              else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                iVar9 = SystemThreadProcessor(*unaff_RDI,puVar6 + 9,4);
                uVar10 = extraout_XMM0_Da_03;
              }
              else {
                iVar9 = 0x1c;
              }
              if (iVar9 == 0) {
                    // WARNING: Subroutine does not return
                AdvancedSystemManager(uVar10,&stack0x00000050);
              }
              goto FUN_1808ab017;
            }
          }
          else {
            iVar4 = 0x1c;
          }
        }
        if ((iVar4 != 0) || (iVar4 = FUN_18087dc70(in_stack_000000c8,&stack0x00000048), iVar4 != 0))
        {
FUN_1808ab017:
          (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&unknown_var_2144_ptr,0xc6,1);
        }
        iVar9 = iVar9 + 1;
        param_1 = extraout_XMM0_Da_04;
      } while (iVar9 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000070);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808aae0d(int32_t param_1)

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
  uint64_t in_stack_000000c8;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar7 = 0;
    if (0 < in_ECX) {
      do {
        puVar5 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x50,&unknown_var_816_ptr,0x30a,0);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar5 = &unknown_var_1544_ptr;
        *(int32_t *)(puVar5 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar5 + 0xc) = 0x10;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar8 = *puVar6;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 2) = uVar8;
        *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
        *(int32_t *)(puVar5 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
        puVar5[4] = 0;
        *(int32_t *)(puVar5 + 5) = 3;
        *puVar5 = &unknown_var_408_ptr;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        *(int32_t *)(puVar5 + 9) = 0;
        in_stack_00000048 = puVar5;
        iVar4 = DataFlowProcessor(uVar8,&stack0x00000050,0,0x5641574c);
        if ((iVar4 == 0) && (iVar4 = FUN_180899360(extraout_XMM0_Da,puVar5 + 2), iVar4 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            iVar4 = FUN_1808a2740(*unaff_RDI,puVar5 + 6);
            if ((iVar4 == 0) &&
               ((uVar8 = extraout_XMM0_Da_00, *(uint *)(unaff_RDI + 8) < 0x46 ||
                (iVar4 = FUN_1808a2d50(extraout_XMM0_Da_00,puVar5 + 5), uVar8 = extraout_XMM0_Da_01,
                iVar4 == 0)))) {
              if (*(uint *)(unaff_RDI + 8) < 99) {
                iVar7 = 0;
              }
              else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                iVar7 = SystemThreadProcessor(*unaff_RDI,puVar5 + 9,4);
                uVar8 = extraout_XMM0_Da_02;
              }
              else {
                iVar7 = 0x1c;
              }
              if (iVar7 == 0) {
                    // WARNING: Subroutine does not return
                AdvancedSystemManager(uVar8,&stack0x00000050);
              }
              goto FUN_1808ab017;
            }
          }
          else {
            iVar4 = 0x1c;
          }
        }
        if ((iVar4 != 0) || (iVar4 = FUN_18087dc70(in_stack_000000c8,&stack0x00000048), iVar4 != 0))
        {
FUN_1808ab017:
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&unknown_var_2144_ptr,0xc6,1);
        }
        iVar7 = iVar7 + 1;
        param_1 = extraout_XMM0_Da_03;
      } while (iVar7 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(param_1,&stack0x00000070);
}






// 函数: void FUN_1808ab005(void)
void FUN_1808ab005(void)

{
  return;
}






// 函数: void FUN_1808ab00d(void)
void FUN_1808ab00d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ab017(void)
void FUN_1808ab017(void)

{
  uint64_t *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ab060(uint64_t param_1,int64_t param_2,int32_t param_3)

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
    iVar10 = 0;
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
          if (0 < aiStack_58[0]) {
            do {
              puVar7 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar7 == (uint64_t *)0x0) {
                return 0x26;
              }
              *puVar7 = &unknown_var_1544_ptr;
              *(int32_t *)(puVar7 + 1) = 0xb1e55ed1;
              *(int32_t *)((int64_t)puVar7 + 0xc) = 0x19;
              puVar8 = (int32_t *)SystemCoreProcessor();
              uVar1 = puVar8[1];
              uVar2 = puVar8[2];
              uVar3 = puVar8[3];
              *(int32_t *)(puVar7 + 2) = *puVar8;
              *(int32_t *)((int64_t)puVar7 + 0x14) = uVar1;
              *(int32_t *)(puVar7 + 3) = uVar2;
              *(int32_t *)((int64_t)puVar7 + 0x1c) = uVar3;
              *puVar7 = &unknown_var_672_ptr;
              puVar7[4] = 0;
              puVar7[5] = 0;
              puStack_50 = puVar7;
              iVar5 = FUN_18089bc10(puVar7,param_1);
              if ((iVar5 != 0) || (iVar5 = FUN_18087dc70(param_2,&puStack_50), iVar5 != 0)) {
                (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar7,&unknown_var_2144_ptr,0xc6,1);
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

uint64_t FUN_1808ab08c(int32_t param_1)

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
  
  iVar9 = 0;
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
        if (0 < iStack0000000000000040) {
          do {
            puVar6 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar6 == (uint64_t *)0x0) {
              return 0x26;
            }
            *puVar6 = &unknown_var_1544_ptr;
            *(int32_t *)(puVar6 + 1) = 0xb1e55ed1;
            *(int32_t *)((int64_t)puVar6 + 0xc) = 0x19;
            puVar7 = (int32_t *)SystemCoreProcessor();
            uVar10 = puVar7[1];
            uVar1 = puVar7[2];
            uVar2 = puVar7[3];
            *(int32_t *)(puVar6 + 2) = *puVar7;
            *(int32_t *)((int64_t)puVar6 + 0x14) = uVar10;
            *(int32_t *)(puVar6 + 3) = uVar1;
            *(int32_t *)((int64_t)puVar6 + 0x1c) = uVar2;
            *puVar6 = &unknown_var_672_ptr;
            puVar6[4] = 0;
            puVar6[5] = 0;
            in_stack_00000048 = puVar6;
            iVar4 = FUN_18089bc10(puVar6);
            if ((iVar4 != 0) ||
               (iVar4 = FUN_18087dc70(extraout_XMM0_Da_01,&stack0x00000048), iVar4 != 0)) {
              (**(code **)*puVar6)(puVar6,0);
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar6,&unknown_var_2144_ptr,0xc6,1);
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

int FUN_1808ab0e3(int param_1)

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
  int in_stack_00000040;
  uint64_t *in_stack_00000048;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar8 = unaff_R15 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar5 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_816_ptr,0x30a);
        if (puVar5 == (uint64_t *)0x0) {
          return 0x26;
        }
        *puVar5 = &unknown_var_1544_ptr;
        *(int32_t *)(puVar5 + 1) = 0xb1e55ed1;
        *(int32_t *)((int64_t)puVar5 + 0xc) = 0x19;
        puVar6 = (int32_t *)SystemCoreProcessor();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *(int32_t *)(puVar5 + 2) = *puVar6;
        *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
        *(int32_t *)(puVar5 + 3) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
        *puVar5 = &unknown_var_672_ptr;
        puVar5[4] = unaff_R15;
        puVar5[5] = unaff_R15;
        in_stack_00000048 = puVar5;
        iVar4 = FUN_18089bc10(puVar5);
        if ((iVar4 != 0) || (iVar4 = FUN_18087dc70(extraout_XMM0_Da,&stack0x00000048), iVar4 != 0))
        {
          (**(code **)*puVar5)(puVar5,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar5,&unknown_var_2144_ptr,0xc6,1);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar7;
        in_XMM0_Da = extraout_XMM0_Da_00;
      } while ((int)uVar7 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager(in_XMM0_Da,&stack0x00000050);
}






// 函数: void FUN_1808ab1f4(void)
void FUN_1808ab1f4(void)

{
  return;
}






// 函数: void FUN_1808ab201(void)
void FUN_1808ab201(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808ab20c(void)
void FUN_1808ab20c(void)

{
  uint64_t *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808ab250(int64_t param_1,int64_t param_2,int32_t param_3,int8_t *param_4)

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
          iVar6 = 0;
          if (0 < aiStack_58[0]) {
            do {
              puVar4 = (uint64_t *)
                       SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,
                                     0x30a,0,0,1);
              if (puVar4 == (uint64_t *)0x0) {
                return 0x26;
              }
              FUN_18084c050(puVar4,3,0);
              *puVar4 = &unknown_var_1472_ptr;
              puVar4[9] = &unknown_var_1520_ptr;
              puStack_50 = puVar4;
              iVar2 = FUN_18089ae50(puVar4,param_1,0x5355424d,0x4253424d,
                                    0x48 < *(uint *)(param_1 + 0x40));
              if (iVar2 == 0) {
                if ((*(byte *)((int64_t)puVar4 + 0xc4) & 1) != 0) {
                  *param_4 = 1;
                }
                iVar2 = 0;
              }
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_50), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
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

uint64_t FUN_1808ab281(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_R14;
  int8_t *unaff_R15;
  int iStack0000000000000040;
  
  iStack0000000000000040 = 0;
  uVar1 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_R14 + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R14 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (uint64_t)uVar1;
        }
        iVar6 = 0;
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (uint64_t *)
                     SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a
                                   ,0);
            if (puVar4 == (uint64_t *)0x0) {
              return 0x26;
            }
            FUN_18084c050(puVar4,3,0);
            *puVar4 = &unknown_var_1472_ptr;
            puVar4[9] = &unknown_var_1520_ptr;
            iVar2 = FUN_18089ae50(puVar4);
            if (iVar2 == 0) {
              if ((*(byte *)((int64_t)puVar4 + 0xc4) & 1) != 0) {
                *unaff_R15 = 1;
              }
              iVar2 = 0;
            }
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar4,&unknown_var_2144_ptr,0xc6,1);
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

int FUN_1808ab2da(int param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_R12D;
  int8_t *unaff_R15;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    iVar3 = unaff_R12D;
    if (0 < param_1) {
      do {
        puVar2 = (uint64_t *)
                 SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xd8,&unknown_var_816_ptr,0x30a);
        if (puVar2 == (uint64_t *)0x0) {
          return 0x26;
        }
        FUN_18084c050(puVar2,3,0);
        *puVar2 = &unknown_var_1472_ptr;
        puVar2[9] = &unknown_var_1520_ptr;
        iVar1 = FUN_18089ae50(puVar2);
        if ((iVar1 == 0) && (iVar1 = unaff_R12D, (*(byte *)((int64_t)puVar2 + 0xc4) & 1) != 0)) {
          *unaff_R15 = 1;
        }
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2144_ptr,0xc6,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemManager();
}






// 函数: void FUN_1808ab400(void)
void FUN_1808ab400(void)

{
  return;
}






// 函数: void FUN_1808ab40d(void)
void FUN_1808ab40d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




