#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part007.c - 29 个函数
// 函数: void function_848840(int64_t param_1,uint64_t param_2)
void function_848840(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = SystemCore_DataProcessor(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = function_88f4d0(param_2,param_1 + 0x28,0x80);
    if (iVar1 == 0) {
      iVar1 = function_88f4d0(param_2,param_1 + 0xa8,0x80);
      if (iVar1 == 0) {
        function_88f470(param_2,param_1 + 0x1c);
      }
    }
  }
  return;
}
// 函数: void function_8488b0(int64_t param_1,uint64_t param_2)
void function_8488b0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  iVar1 = SystemCore_DataProcessor(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UISystem_LayoutEngine(param_2,astack_special_x_8);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x18) = astack_special_x_8[0];
      SystemCore_ErrorHandler(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void function_848900(int64_t param_1,uint64_t param_2)
void function_848900(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = SystemCore_DataProcessor(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UISystem_LayoutEngine(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      SystemCore_ErrorHandler(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void function_848950(int64_t param_1,uint64_t param_2)
void function_848950(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f1a0(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    SystemCore_DataProcessor(param_2,param_1 + 0x20);
  }
  return;
}
// 函数: void function_8489a0(int64_t param_1,uint64_t param_2)
void function_8489a0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UISystem_LayoutEngine(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    UISystem_LayoutEngine(param_2,param_1 + 0x14);
  }
  return;
}
// 函数: void function_8489e0(int64_t param_1,uint64_t param_2)
void function_8489e0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UISystem_LayoutEngine(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    SystemCore_DataProcessor(param_2,param_1 + 0x14);
  }
  return;
}
// 函数: void function_848a20(int64_t param_1,uint64_t param_2)
void function_848a20(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f2d0(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = SystemCore_DataProcessor(param_2,param_1 + 0x48);
    if (iVar1 == 0) {
      SystemCore_DataProcessor(param_2,param_1 + 0x4c);
    }
  }
  return;
}
// 函数: void function_848a70(int64_t param_1,uint64_t param_2)
void function_848a70(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f4d0(param_2,param_1 + 0x18,0x200);
  if (iVar1 == 0) {
    iVar1 = SystemCore_DataProcessor(param_2,param_1 + 0x14);
    if (iVar1 == 0) {
      SystemCore_DataProcessor(param_2,param_1 + 0x10);
    }
  }
  return;
}
// 函数: void function_848ac0(int64_t param_1,uint64_t param_2)
void function_848ac0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int32_t astack_special_x_8 [2];
  iVar1 = function_88f010(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = UISystem_LayoutEngine(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = UISystem_LayoutEngine(param_2,astack_special_x_8);
      if (iVar1 == 0) {
        *(int32_t *)(param_1 + 0x1c) = astack_special_x_8[0];
        iVar1 = SystemCore_DataProcessor(param_2,param_1 + 0x20);
        if (iVar1 == 0) {
          SystemCore_DataProcessor(param_2,param_1 + 0x24);
        }
      }
    }
  }
  return;
}
// 函数: void function_848b30(int64_t param_1,uint64_t param_2)
void function_848b30(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UISystem_LayoutEngine(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = function_88f050(param_2,param_1 + 0x14);
    if (iVar1 == 0) {
      iVar1 = function_88f3a0(param_2,param_1 + 0x44);
      if (iVar1 == 0) {
        function_88f470(param_2,param_1 + 0x50);
      }
    }
  }
  return;
}
// 函数: void function_848b90(int64_t param_1,uint64_t param_2)
void function_848b90(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = UISystem_LayoutEngine(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    SystemCore_ErrorHandler(param_2,param_1 + 0x14);
  }
  return;
}
// 函数: void function_848bd0(int64_t param_1,uint64_t param_2)
void function_848bd0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f310(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = SystemCore_ErrorHandler(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      function_88f470(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void function_848c20(int64_t param_1,uint64_t param_2)
void function_848c20(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f310(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = function_88f4d0(param_2,param_1 + 0x1d,0x80);
    if (iVar1 == 0) {
      function_88f470(param_2,param_1 + 0x1c);
    }
  }
  return;
}
// 函数: void function_848c70(int64_t param_1,uint64_t param_2)
void function_848c70(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f4d0(param_2,param_1 + 0x20,0x80);
  if (iVar1 == 0) {
    iVar1 = SystemCore_ErrorHandler(param_2,param_1 + 0x10);
    if (iVar1 == 0) {
      function_88f470(param_2,param_1 + 0x14);
    }
  }
  return;
}
// 函数: void function_848cc0(int64_t param_1,uint64_t param_2)
void function_848cc0(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  iVar1 = function_88f4d0(param_2,param_1 + 0x20,0x80);
  if (iVar1 == 0) {
    iVar1 = function_88f4d0(param_2,param_1 + 0xa0,0x80);
    if (iVar1 == 0) {
      function_88f470(param_2,param_1 + 0x14);
    }
  }
  return;
}
// 函数: void function_848d50(int64_t *param_1,uint param_2,uint64_t param_3)
void function_848d50(int64_t *param_1,uint param_2,uint64_t param_3)
{
  int iVar1;
  if (param_2 < 0x11100) {
    iVar1 = SystemCore_DataProcessor(param_3,param_1 + 2);
    if (iVar1 == 0) {
      iVar1 = function_88f4d0(param_3,param_1 + 5,0x80);
      if (iVar1 == 0) {
        iVar1 = SystemCore_ErrorHandler(param_3,param_1 + 3);
        if (iVar1 == 0) {
          *(int8_t *)((int64_t)param_1 + 0x1c) = 0;
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}
// 函数: void function_848dc0(int64_t *param_1,uint param_2,uint64_t param_3)
void function_848dc0(int64_t *param_1,uint param_2,uint64_t param_3)
{
  int iVar1;
  uint64_t stack_special_x_18;
  int8_t astack_special_x_20 [8];
  if (param_2 < 0x10600) {
    *(int32_t *)(param_1 + 2) = 0;
label_88f050:
    iVar1 = SystemSynchronizer(param_3,astack_special_x_20);
    if ((iVar1 == 0) && (iVar1 = SystemSynchronizer(astack_special_x_20,&stack_special_x_18), iVar1 == 0)) {
      iVar1 = AdvancedSystemOptimizer(stack_special_x_18,&processed_var_7592_ptr,(int64_t)param_1 + 0x14,param_1 + 3,
                            (int64_t)param_1 + 0x1c);
      if (((iVar1 == 3) ||
          (((iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,(int64_t)param_1 + 0x14), iVar1 == 0 &&
            (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_1 + 3), iVar1 == 0)) &&
           (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,(int64_t)param_1 + 0x1c), iVar1 == 0)))) &&
         (iVar1 = SystemSynchronizer(astack_special_x_20,&stack_special_x_18), iVar1 == 0)) {
        iVar1 = AdvancedSystemOptimizer(stack_special_x_18,&processed_var_7592_ptr,param_1 + 4,(int64_t)param_1 + 0x24,
                              param_1 + 5);
        if (((iVar1 == 3) ||
            (((iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_1 + 4), iVar1 == 0 &&
              (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,(int64_t)param_1 + 0x24), iVar1 == 0)) &&
             (iVar1 = SystemCore_ErrorHandler(&stack_special_x_18,param_1 + 5), iVar1 == 0)))) &&
           (iVar1 = function_88f3a0(astack_special_x_20,(int64_t)param_1 + 0x2c), iVar1 == 0)) {
          function_88f3a0(astack_special_x_20,param_1 + 7);
        }
      }
    }
    return;
  }
  if (param_2 < 0x20100) {
    *(int8_t *)(param_1 + 10) = 0;
    *(uint64_t *)((int64_t)param_1 + 0x44) = 0;
    *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
    iVar1 = UISystem_LayoutEngine(param_3,param_1 + 2);
    if (iVar1 == 0) goto label_88f050;
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_848e50(char *param_1,uint64_t *param_2)
void function_848e50(char *param_1,uint64_t *param_2)
{
  char *pcVar1;
  char cVar2;
  int8_t uVar3;
  int16_t uVar4;
  int iVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int64_t lVar9;
  int8_t *puVar10;
  int8_t stack_array_b8 [32];
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int8_t *aplocal_var_88 [5];
  int8_t local_var_60;
  int8_t stack_array_5f [8];
  int8_t local_var_57;
  int8_t stack_array_56 [4];
  int8_t local_var_52;
  int8_t stack_array_51 [4];
  int8_t local_var_4d;
  int8_t stack_array_4c [4];
  int8_t local_var_48;
  int8_t stack_array_47 [10];
  int8_t stack_array_3d [5];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (param_2 != (uint64_t *)0x0) {
    if ((((param_1 == (char *)0x0) || (iVar5 = Function_055df91e(), iVar5 != 0x26)) ||
        (*param_1 != '{')) || (param_1[0x25] != '}')) {
label_848ff1:
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      Function_30e71e27(&local_var_60,param_1,0x27);
      local_var_57 = 0;
      aplocal_var_88[0] = stack_array_5f;
      lVar9 = 0;
      local_var_52 = 0;
      aplocal_var_88[1] = stack_array_56;
      local_var_4d = 0;
      aplocal_var_88[2] = stack_array_51;
      aplocal_var_88[3] = stack_array_4c;
      aplocal_var_88[4] = stack_array_47;
      local_var_48 = 0;
      stack_array_3d[2] = 0;
      do {
        pcVar6 = aplocal_var_88[lVar9];
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
             (5 < (byte)(cVar2 + 0x9fU))) goto label_848ff1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 5);
      local_var_98 = Function_2dfde275(stack_array_5f);
      uVar4 = Function_2dfde275(stack_array_56);
      local_var_94 = CONCAT22(local_var_94._2_2_,uVar4);
      uVar4 = Function_2dfde275(stack_array_51);
      local_var_94 = CONCAT22(uVar4,(int16_t)local_var_94);
      uVar4 = Function_2dfde275(stack_array_4c);
      puVar8 = (int8_t *)((int64_t)&local_var_8c + 3);
      local_var_90 = CONCAT31(CONCAT21(local_var_90._2_2_,(char)uVar4),(char)((ushort)uVar4 >> 8));
      puVar7 = stack_array_3d;
      iVar5 = 5;
      puVar10 = stack_array_3d;
      do {
        uVar3 = Function_2dfde275(puVar10);
        puVar10 = puVar10 + -2;
        *puVar8 = uVar3;
        iVar5 = iVar5 + -1;
        *puVar7 = 0;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (-1 < iVar5);
      *(int32_t *)param_2 = local_var_98;
      *(int32_t *)((int64_t)param_2 + 4) = local_var_94;
      *(int32_t *)(param_2 + 1) = local_var_90;
      *(int32_t *)((int64_t)param_2 + 0xc) = local_var_8c;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_b8);
}
// 函数: void function_848e82(void)
void function_848e82(void)
{
  char *pcVar1;
  char cVar2;
  int32_t uVar3;
  int32_t uVar4;
  int8_t uVar5;
  int16_t uVar6;
  int iVar7;
  int32_t uVar8;
  char *pcVar9;
  char *unaff_RBX;
  int64_t unaff_RBP;
  int8_t *puVar10;
  int8_t *puVar11;
  int64_t lVar12;
  uint64_t *unaff_R15;
  if ((((unaff_RBX == (char *)0x0) || (iVar7 = Function_055df91e(), iVar7 != 0x26)) ||
      (*unaff_RBX != '{')) || (unaff_RBX[0x25] != '}')) {
label_848ff1:
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
  }
  else {
    Function_30e71e27(unaff_RBP + -1);
    *(int8_t *)(unaff_RBP + 8) = 0;
    *(int64_t *)(unaff_RBP + -0x29) = unaff_RBP;
    lVar12 = 0;
    *(int8_t *)(unaff_RBP + 0xd) = 0;
    *(int64_t *)(unaff_RBP + -0x21) = unaff_RBP + 9;
    *(int8_t *)(unaff_RBP + 0x12) = 0;
    *(int64_t *)(unaff_RBP + -0x19) = unaff_RBP + 0xe;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBP + 0x13;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBP + 0x18;
    *(int8_t *)(unaff_RBP + 0x17) = 0;
    *(int8_t *)(unaff_RBP + 0x24) = 0;
    do {
      pcVar9 = *(char **)(unaff_RBP + -0x29 + lVar12 * 8);
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
           (5 < (byte)(cVar2 + 0x9fU))) goto label_848ff1;
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < 5);
    uVar8 = Function_2dfde275();
    *(int32_t *)(unaff_RBP + -0x39) = uVar8;
    uVar6 = Function_2dfde275(unaff_RBP + 9);
    *(int16_t *)(unaff_RBP + -0x35) = uVar6;
    uVar6 = Function_2dfde275(unaff_RBP + 0xe);
    *(int16_t *)(unaff_RBP + -0x33) = uVar6;
    uVar6 = Function_2dfde275(unaff_RBP + 0x13);
    *(char *)(unaff_RBP + -0x30) = (char)uVar6;
    puVar11 = (int8_t *)(unaff_RBP + -0x2a);
    *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar6 >> 8);
    puVar10 = (int8_t *)(unaff_RBP + 0x22);
    iVar7 = 5;
    lVar12 = unaff_RBP + 0x22;
    do {
      uVar5 = Function_2dfde275(lVar12);
      lVar12 = lVar12 + -2;
      *puVar11 = uVar5;
      iVar7 = iVar7 + -1;
      *puVar10 = 0;
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -2;
    } while (-1 < iVar7);
    uVar8 = *(int32_t *)(unaff_RBP + -0x35);
    uVar3 = *(int32_t *)(unaff_RBP + -0x31);
    uVar4 = *(int32_t *)(unaff_RBP + -0x2d);
    *(int32_t *)unaff_R15 = *(int32_t *)(unaff_RBP + -0x39);
    *(int32_t *)((int64_t)unaff_R15 + 4) = uVar8;
    *(int32_t *)(unaff_R15 + 1) = uVar3;
    *(int32_t *)((int64_t)unaff_R15 + 0xc) = uVar4;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_848f4e(void)
void function_848f4e(void)
{
  int32_t uVar1;
  int32_t uVar2;
  int8_t uVar3;
  int16_t uVar4;
  int32_t uVar5;
  int iVar6;
  int64_t unaff_RBP;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t unaff_R12B;
  int64_t lVar9;
  int32_t *unaff_R15;
  uVar5 = Function_2dfde275();
  *(int32_t *)(unaff_RBP + -0x39) = uVar5;
  uVar4 = Function_2dfde275(unaff_RBP + 9);
  *(int16_t *)(unaff_RBP + -0x35) = uVar4;
  uVar4 = Function_2dfde275(unaff_RBP + 0xe);
  *(int16_t *)(unaff_RBP + -0x33) = uVar4;
  uVar4 = Function_2dfde275(unaff_RBP + 0x13);
  *(char *)(unaff_RBP + -0x30) = (char)uVar4;
  puVar8 = (int8_t *)(unaff_RBP + -0x2a);
  *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar4 >> 8);
  puVar7 = (int8_t *)(unaff_RBP + 0x22);
  iVar6 = 5;
  lVar9 = unaff_RBP + 0x22;
  do {
    uVar3 = Function_2dfde275(lVar9);
    lVar9 = lVar9 + -2;
    *puVar8 = uVar3;
    iVar6 = iVar6 + -1;
    *puVar7 = unaff_R12B;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -2;
  } while (-1 < iVar6);
  uVar5 = *(int32_t *)(unaff_RBP + -0x35);
  uVar1 = *(int32_t *)(unaff_RBP + -0x31);
  uVar2 = *(int32_t *)(unaff_RBP + -0x2d);
  *unaff_R15 = *(int32_t *)(unaff_RBP + -0x39);
  unaff_R15[1] = uVar5;
  unaff_R15[2] = uVar1;
  unaff_R15[3] = uVar2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_848ff1(void)
void function_848ff1(void)
{
  int64_t unaff_RBP;
  uint64_t *unaff_R15;
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_84900b(void)
void function_84900b(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x27) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemDeallocationProcessor(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  iVar2 = (int)param_2;
  if (iVar2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (iVar2 != 0) {
    if (iVar2 - 1U < 0x3fffffff) {
      lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_8432_ptr,0xf4,0,0,
                            1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(int64_t)(int)param_1[1]);
        }
        goto LAB_1808490b9;
      }
    }
    return 0x26;
  }
LAB_1808490b9:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((int64_t)param_1 + 0xc) = iVar2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_849054(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int unaff_EDI;
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808490b9:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if ((int)param_2 - 1U < 0x3fffffff) {
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_8432_ptr,0xf4,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
// WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(int64_t)(int)unaff_RBX[1]);
      }
      goto LAB_1808490b9;
    }
  }
  return 0x26;
}
uint64_t function_849104(void)
{
  return 0x26;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_849120(int64_t *param_1,int param_2)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x14 - 1U < 0x3fffffff) {
      puVar7 = (int32_t *)
               SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x14,&processed_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar7 != (int32_t *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (int64_t)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9[4] = *(int32_t *)((lVar3 - (int64_t)puVar7) + -4 + (int64_t)(puVar9 + 5));
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 5;
          } while (lVar8 != 0);
        }
        goto LAB_1808491ce;
      }
    }
    return 0x26;
  }
LAB_1808491ce:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar7;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_849144(uint64_t param_1,int param_2)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t *unaff_RBX;
  int unaff_EDI;
  puVar7 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1808491ce:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&processed_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar7;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x14 - 1U < 0x3fffffff) {
    puVar7 = (int32_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x14,&processed_var_8432_ptr,
                           0xf4,0);
    if (puVar7 != (int32_t *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (int64_t)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (int64_t)puVar7) + (int64_t)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          puVar9[4] = *(int32_t *)((lVar3 - (int64_t)puVar7) + -4 + (int64_t)(puVar9 + 5));
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 5;
        } while (lVar8 != 0);
      }
      goto LAB_1808491ce;
    }
  }
  return 0x26;
}
uint64_t function_849219(void)
{
  return 0x26;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_849230(uint64_t param_1)
void function_849230(uint64_t param_1)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_168 [48];
  int64_t alStack_138 [2];
  uint64_t *aplocal_var_128 [34];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  alStack_138[1] = 0;
  iVar1 = Function_810b7364(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808492e6;
    iVar2 = SystemSecurityProcessor(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180849294;
  }
  else {
LAB_180849294:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_138[0] + 0x98),aplocal_var_128,0x18), iVar1 == 0))
  {
    *aplocal_var_128[0] = &processed_var_8024_ptr;
    *(int32_t *)(aplocal_var_128[0] + 1) = 0x18;
    *(int *)(aplocal_var_128[0] + 2) = (int)param_1;
    SystemFunction_00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_1808492e6:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_849360(uint64_t param_1)
void function_849360(uint64_t param_1)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_168 [32];
  int8_t *plocal_var_148;
  int64_t alStack_138 [4];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  iVar1 = Function_810b7364(param_1,alStack_138 + 2);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[2] + 0x24) >> 1 & 1) != 0) {
      function_84b0c0(param_1);
      alStack_138[1] = 0;
      iVar1 = Function_810b7364(param_1 & 0xffffffff,alStack_138);
      if (((iVar1 != 0) ||
          (((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) != 0 &&
           (iVar2 = SystemSecurityProcessor(alStack_138 + 1), iVar2 == 0)))) && (iVar1 == 0)) {
        function_88da50(*(uint64_t *)(alStack_138[0] + 0x98));
      }
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_138 + 1);
    }
    iVar1 = function_883a30();
    if (iVar1 == 0) goto LAB_180849462;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    plocal_var_148 = stack_array_118;
    stack_array_118[0] = 0;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_4712_ptr);
  }
LAB_180849462:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_849490(uint64_t param_1,uint64_t *param_2)
void function_849490(uint64_t param_1,uint64_t *param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  uint64_t local_var_148;
  int64_t lStack_140;
  uint64_t *aplocal_var_138 [2];
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    BufferManager_ResizeBuffer(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&processed_var_6920_ptr);
  }
  local_var_148 = 0;
  iVar5 = Function_810b7364(param_1,&lStack_140);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_140 + 0x24) >> 1 & 1) == 0) goto LAB_1808494eb;
    iVar6 = SystemSecurityProcessor(&local_var_148);
    if (iVar6 == 0) goto LAB_180849553;
  }
  else {
LAB_180849553:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = SystemCore_SecurityChecker(*(uint64_t *)(lStack_140 + 0x98),aplocal_var_138,0x48), iVar5 == 0)) {
    *aplocal_var_138[0] = &processed_var_6816_ptr;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x48;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    uVar4 = param_2[1];
    aplocal_var_138[0][3] = *param_2;
    aplocal_var_138[0][4] = uVar4;
    uVar1 = *(int32_t *)((int64_t)param_2 + 0x14);
    uVar2 = *(int32_t *)(param_2 + 3);
    uVar3 = *(int32_t *)((int64_t)param_2 + 0x1c);
    *(int32_t *)(aplocal_var_138[0] + 5) = *(int32_t *)(param_2 + 2);
    *(int32_t *)((int64_t)aplocal_var_138[0] + 0x2c) = uVar1;
    *(int32_t *)(aplocal_var_138[0] + 6) = uVar2;
    *(int32_t *)((int64_t)aplocal_var_138[0] + 0x34) = uVar3;
    uVar1 = *(int32_t *)((int64_t)param_2 + 0x24);
    uVar2 = *(int32_t *)(param_2 + 5);
    uVar3 = *(int32_t *)((int64_t)param_2 + 0x2c);
    *(int32_t *)(aplocal_var_138[0] + 7) = *(int32_t *)(param_2 + 4);
    *(int32_t *)((int64_t)aplocal_var_138[0] + 0x3c) = uVar1;
    *(int32_t *)(aplocal_var_138[0] + 8) = uVar2;
    *(int32_t *)((int64_t)aplocal_var_138[0] + 0x44) = uVar3;
    SystemFunction_00018088e0d0(*(uint64_t *)(lStack_140 + 0x98));
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_var_148);
  }
LAB_1808494eb:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_849600(uint64_t param_1,uint64_t param_2)
void function_849600(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int8_t stack_array_158 [32];
  int8_t *plocal_var_138;
  uint64_t stack_array_128 [2];
  int8_t stack_array_118 [256];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  iVar1 = Function_810b7364(param_1,stack_array_128);
  if ((((iVar1 != 0) || (iVar1 = function_889f10(stack_array_128[0],param_2), iVar1 != 0)) && (iVar1 != 0)
      ) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    BufferManager_ResizeBuffer(stack_array_118,0x100,param_2);
    plocal_var_138 = stack_array_118;
// WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_5000_ptr);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8496c0(int32_t param_1,int64_t param_2,int32_t param_3)
void function_8496c0(int32_t param_1,int64_t param_2,int32_t param_3)
{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  int8_t stack_array_188 [48];
  uint64_t local_var_158;
  uint64_t local_var_150;
  int64_t lStack_148;
  int64_t alStack_140 [33];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  lStack_148 = 0;
  local_var_158 = 0;
  local_var_150 = 0;
  iVar2 = Function_810b7364(0,&local_var_150);
  if (((iVar2 == 0) && (iVar2 = SystemSecurityProcessor(&local_var_158,local_var_150), iVar2 == 0)) &&
     (iVar2 = Function_85b738db(param_1,alStack_140), iVar2 == 0)) {
    lStack_148 = *(int64_t *)(alStack_140[0] + 8);
  }
  else if (iVar2 != 0) goto LAB_180849763;
  lVar1 = *(int64_t *)(lStack_148 + 0xd0);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = param_3;
  }
  *(int32_t *)(lVar1 + 0x48) = uVar3;
  *(int64_t *)(lVar1 + 0x40) = param_2;
LAB_180849763:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_158);
}
// 函数: void function_849782(void)
void function_849782(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  iVar1 = BufferManager_ResizeBuffer(&local_buffer_00000050,0x100);
  iVar2 = SystemDataProcessor(&local_buffer_00000050 + iVar1,0x100 - iVar1,&system_temp_buffer);
  Function_5cdd918c(&local_buffer_00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xc);
}
// 函数: void function_8497fa(void)
void function_8497fa(void)
{
  uint64_t local_var_150;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_150 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address