#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part107.c - 2 个函数
// 函数: void function_89e4d7(void)
void function_89e4d7(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_89e4f0(int64_t param_1,uint64_t *param_2)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int32_t *plocal_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [32];
  uVar4 = DataFlowProcessor(param_2,stack_array_38,1,0x4e4c4d54);
  if ((((int)uVar4 == 0) &&
      (uVar4 = DataFlowProcessor(param_2,stack_array_58,0,0x424e4c54), (int)uVar4 == 0)) &&
     (uVar4 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar4 == 0)) {
    puVar5 = (int32_t *)SystemCoreProcessor();
    uVar4 = 0;
    local_var_78 = *puVar5;
    local_var_74 = puVar5[1];
    local_var_70 = puVar5[2];
    local_var_6c = puVar5[3];
    if (*(uint *)(param_2 + 8) < 0x6d) {
      if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar2 = *param_2;
        uVar4 = SystemErrorHandler(uVar2,&local_var_78,4);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = SystemErrorHandler(uVar2,&local_var_74,2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = SystemErrorHandler(uVar2,(int64_t)&local_var_74 + 2,2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = SystemErrorHandler(uVar2,&local_var_70,8);
      }
      else {
        uVar4 = 0x1c;
      }
    }
    if ((((int)uVar4 == 0) && (uVar4 = function_8a5a90(param_2,param_1 + 0x38,0), (int)uVar4 == 0)) &&
       (uVar4 = function_8a5a90(param_2,param_1 + 0x48,0), (int)uVar4 == 0)) {
      if (*(uint *)(param_2 + 8) < 0x84) {
        plocal_var_88 = (int32_t *)0x0;
        local_var_80 = 0;
        uVar3 = function_8a4a20(param_2,&plocal_var_88,0);
        uVar4 = (uint64_t)uVar3;
        if (uVar3 != 0) {
LAB_18089e70b:
          MemoryManager_Allocator(&plocal_var_88);
          return uVar4;
        }
        puVar5 = plocal_var_88;
        if ((int)local_var_80 != 0) {
          for (; (plocal_var_88 <= puVar5 && (puVar5 < plocal_var_88 + (int)local_var_80));
              puVar5 = puVar5 + 1) {
            lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&processed_var_688_ptr,0xc1c,
                                  0,0,1);
            if (lVar6 == 0) {
              uVar4 = 0x26;
              goto LAB_18089e70b;
            }
            uVar1 = *puVar5;
            *(int64_t *)lVar6 = lVar6;
            *(int64_t *)(lVar6 + 8) = lVar6;
            *(int32_t *)(lVar6 + 0x10) = uVar1;
            *(uint64_t *)(lVar6 + 0x18) = 0;
            *(int32_t *)(lVar6 + 0x20) = 0;
            uVar3 = SystemFunction_0001808aec10(param_1 + 0x58,lVar6);
            uVar4 = (uint64_t)uVar3;
            if (uVar3 != 0) goto LAB_18089e70b;
          }
        }
        MemoryManager_Allocator(&plocal_var_88);
      }
      else {
        uVar4 = function_8a71c0(param_2,param_1 + 0x58);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      uVar4 = function_8ad9d0(param_2,param_1 + 0x78,0);
      if (((int)uVar4 == 0) && (uVar4 = function_8a62d0(param_2,param_1 + 0x88,0), (int)uVar4 == 0)) {
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_2,stack_array_58);
      }
    }
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_89e558(void)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint uVar5;
  int iVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t unaff_RBP;
  int32_t *puVar10;
  uint64_t *unaff_RDI;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t uVar11;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  puVar7 = (int32_t *)SystemCoreProcessor();
  uVar8 = 0;
  uVar5 = *(uint *)(unaff_RDI + 8);
  uVar11 = *puVar7;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(int32_t *)(unaff_RBP + -0x19) = uVar11;
  *(int32_t *)(unaff_RBP + -0x15) = uVar2;
  *(int32_t *)(unaff_RBP + -0x11) = uVar3;
  *(int32_t *)(unaff_RBP + -0xd) = uVar4;
  if (uVar5 < 0x6d) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      uVar1 = *unaff_RDI;
      uVar8 = SystemErrorHandler(uVar1,unaff_RBP + -0x19,4);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = SystemErrorHandler(uVar1,unaff_RBP + -0x15,2);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = SystemErrorHandler(uVar1,unaff_RBP + -0x13,2);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = SystemErrorHandler(uVar1,unaff_RBP + -0x11,8);
      uVar11 = extraout_XMM0_Da;
    }
    else {
      uVar8 = 0x1c;
    }
  }
  if ((((int)uVar8 == 0) && (uVar8 = function_8a5a90(uVar11,unaff_R15 + 0x38,0), (int)uVar8 == 0)) &&
     (uVar8 = function_8a5a90(extraout_XMM0_Da_00,unaff_R15 + 0x48,0), (int)uVar8 == 0)) {
    if (*(uint *)(unaff_RDI + 8) < 0x84) {
      *(uint64_t *)(unaff_RBP + -0x29) = 0;
      *(uint64_t *)(unaff_RBP + -0x21) = 0;
      uVar5 = function_8a4a20(extraout_XMM0_Da_01,unaff_RBP + -0x29,0);
      uVar8 = (uint64_t)uVar5;
      if (uVar5 != 0) {
LAB_18089e70b:
        MemoryManager_Allocator(unaff_RBP + -0x29);
        return uVar8;
      }
      iVar6 = *(int *)(unaff_RBP + -0x21);
      if (iVar6 != 0) {
        puVar7 = *(int32_t **)(unaff_RBP + -0x29);
        for (puVar10 = puVar7; (puVar7 <= puVar10 && (puVar10 < puVar7 + iVar6));
            puVar10 = puVar10 + 1) {
          lVar9 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&processed_var_688_ptr,0xc1c,0)
          ;
          if (lVar9 == 0) {
            uVar8 = 0x26;
            goto LAB_18089e70b;
          }
          uVar11 = *puVar10;
          *(int64_t *)lVar9 = lVar9;
          *(int64_t *)(lVar9 + 8) = lVar9;
          *(int32_t *)(lVar9 + 0x10) = uVar11;
          *(uint64_t *)(lVar9 + 0x18) = 0;
          *(int32_t *)(lVar9 + 0x20) = 0;
          uVar5 = SystemFunction_0001808aec10(unaff_R15 + 0x58,lVar9);
          uVar8 = (uint64_t)uVar5;
          if (uVar5 != 0) goto LAB_18089e70b;
          iVar6 = *(int *)(unaff_RBP + -0x21);
          puVar7 = *(int32_t **)(unaff_RBP + -0x29);
        }
      }
      uVar11 = MemoryManager_Allocator(unaff_RBP + -0x29);
    }
    else {
      uVar8 = function_8a71c0(extraout_XMM0_Da_01,unaff_R15 + 0x58);
      uVar11 = extraout_XMM0_Da_02;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
    uVar8 = function_8ad9d0(uVar11,unaff_R15 + 0x78,0);
    if (((int)uVar8 == 0) &&
       (uVar8 = function_8a62d0(extraout_XMM0_Da_03,unaff_R15 + 0x88,0), (int)uVar8 == 0)) {
// WARNING: Subroutine does not return
      AdvancedSystemManager(extraout_XMM0_Da_04,unaff_RBP + 7);
    }
  }
  return uVar8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_89e624(void)
{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int32_t *puVar6;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *puVar7;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  if (*(uint *)(unaff_RDI + 0x40) < 0x84) {
    *(uint64_t *)(unaff_RBP + -0x29) = unaff_RBX;
    *(uint64_t *)(unaff_RBP + -0x21) = unaff_RBX;
    uVar2 = function_8a4a20();
    uVar4 = (uint64_t)uVar2;
    if (uVar2 != 0) {
LAB_18089e70b:
      MemoryManager_Allocator(unaff_RBP + -0x29);
      return uVar4;
    }
    iVar3 = *(int *)(unaff_RBP + -0x21);
    if (iVar3 != 0) {
      puVar6 = *(int32_t **)(unaff_RBP + -0x29);
      for (puVar7 = puVar6; (puVar6 <= puVar7 && (puVar7 < puVar6 + iVar3)); puVar7 = puVar7 + 1) {
        lVar5 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&processed_var_688_ptr,0xc1c);
        if (lVar5 == 0) {
          uVar4 = 0x26;
          goto LAB_18089e70b;
        }
        uVar1 = *puVar7;
        *(int64_t *)lVar5 = lVar5;
        *(int64_t *)(lVar5 + 8) = lVar5;
        *(int32_t *)(lVar5 + 0x10) = uVar1;
        *(uint64_t *)(lVar5 + 0x18) = unaff_RBX;
        *(int *)(lVar5 + 0x20) = (int)unaff_RBX;
        uVar2 = SystemFunction_0001808aec10(unaff_R15 + 0x58,lVar5);
        uVar4 = (uint64_t)uVar2;
        if (uVar2 != 0) goto LAB_18089e70b;
        iVar3 = *(int *)(unaff_RBP + -0x21);
        puVar6 = *(int32_t **)(unaff_RBP + -0x29);
      }
    }
    MemoryManager_Allocator(unaff_RBP + -0x29);
  }
  else {
    uVar4 = function_8a71c0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  uVar4 = function_8ad9d0();
  if (((int)uVar4 == 0) && (uVar4 = function_8a62d0(), (int)uVar4 == 0)) {
// WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  return uVar4;
}
// 函数: void function_89e801(void)
void function_89e801(void)
{
  return;
}