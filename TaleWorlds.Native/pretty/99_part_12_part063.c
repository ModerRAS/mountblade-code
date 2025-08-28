#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part063.c - 8 个函数
// 函数: void function_7f5fd0(int64_t param_1,int64_t param_2,int param_3)
void function_7f5fd0(int64_t param_1,int64_t param_2,int param_3)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_158 [32];
  int8_t stack_array_138 [16];
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  if (param_3 != 0) {
    if (*(char *)(param_1 + 600) == '\0') {
      function_7aa900(*(uint64_t *)(param_1 + 0x1f0));
    }
    else {
      while( true ) {
        iVar3 = *(int *)(param_1 + 0x25c);
        if (iVar3 == 0) {
// WARNING: Subroutine does not return
          memset(stack_array_128,0,0x100);
        }
        if (param_3 <= iVar3) {
          iVar3 = param_3;
        }
        iVar2 = function_7aa900(*(uint64_t *)(param_1 + 0x1f0),param_2,iVar3);
        if (iVar2 != 0) break;
        param_3 = param_3 - iVar3;
        param_2 = param_2 + iVar3;
        piVar1 = (int *)(param_1 + 0x25c);
        *piVar1 = *piVar1 - iVar3;
        if (((*piVar1 == 0) &&
            (iVar3 = function_7aa9c0(*(uint64_t *)(param_1 + 0x1f0),stack_array_138,2), iVar3 != 0)) ||
           (param_3 == 0)) break;
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_158);
}
int32_t function_7f6100(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  if (((int64_t *)*param_2 == param_2) && ((int64_t *)param_2[1] == param_2)) {
    lVar2 = *(int64_t *)(param_1 + 0x198);
    if (lVar2 != 0) {
      Function_571d7c62(lVar2,0xb);
    }
    plVar1 = (int64_t *)(param_1 + 0x210);
    plVar3 = (int64_t *)*plVar1;
    if ((plVar3 != plVar1) || (*(int64_t **)(param_1 + 0x218) != plVar1)) {
      plVar4 = (int64_t *)param_2[1];
      **(int64_t **)(param_1 + 0x218) = *plVar4;
      plVar3[1] = (int64_t)plVar4;
      *plVar4 = (int64_t)plVar3;
      *plVar1 = (int64_t)plVar1;
      *(int64_t **)(param_1 + 0x218) = plVar1;
    }
    if ((lVar2 != 0) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(lVar2,0xb);
    }
    return 0;
  }
  return 0x1c;
}
uint64_t function_7f6132(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  lVar2 = *(int64_t *)(unaff_RSI + 0x198);
  if (lVar2 != 0) {
    Function_571d7c62(lVar2,0xb);
  }
  plVar1 = (int64_t *)(unaff_RSI + 0x210);
  plVar3 = (int64_t *)*plVar1;
  if ((plVar3 != plVar1) || (*(int64_t **)(unaff_RSI + 0x218) != plVar1)) {
    plVar4 = *(int64_t **)(unaff_RBX + 8);
    **(int64_t **)(unaff_RSI + 0x218) = *plVar4;
    plVar3[1] = (int64_t)plVar4;
    *plVar4 = (int64_t)plVar3;
    *plVar1 = (int64_t)plVar1;
    *(int64_t **)(unaff_RSI + 0x218) = plVar1;
  }
  if ((lVar2 != 0) && (lVar2 != 0)) {
// WARNING: Subroutine does not return
    SystemCoreHandler(lVar2,0xb);
  }
  return 0;
}
uint64_t function_7f61ad(void)
{
  return 0x1c;
}
// 函数: void function_7f61c0(void)
void function_7f61c0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f6294(void)
void function_7f6294(void)
{
  int iVar1;
  iVar1 = function_7ff2a0();
  if (iVar1 == 0) {
// WARNING: Subroutine does not return
    SystemDataValidator();
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// 函数: void function_7f6918(void)
void function_7f6918(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1090) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f6940(void)
void function_7f6940(void)
{
  int32_t *puVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  void *puVar6;
  int64_t *unaff_R15;
  do {
    iVar2 = function_7aa9c0(unaff_R15[0x3e]);
    if (iVar2 != 0) break;
    iVar2 = SystemCore_Optimizer(&processed_var_4592_ptr);
    if (iVar2 == 0) {
      puVar1 = *(int32_t **)(unaff_RBP + -0x80);
      if (puVar1 != (int32_t *)0x0) {
        uVar3 = atoi(unaff_RBX + 0xf);
        *puVar1 = uVar3;
      }
    }
    else {
      iVar2 = SystemCore_Optimizer(&processed_var_4608_ptr);
      if (iVar2 != 0) {
        iVar2 = SystemCore_Optimizer(&processed_var_4632_ptr);
        if (iVar2 == 0) {
          *(uint *)((int64_t)unaff_R15 + 0x194) = *(uint *)((int64_t)unaff_R15 + 0x194) | 1;
        }
        else {
          iVar2 = SystemCore_Optimizer(&processed_var_4656_ptr);
          if (iVar2 == 0) {
            *(int8_t *)(unaff_R15 + 0x4b) = 1;
          }
          else {
            iVar2 = SystemCore_Optimizer(&processed_var_4688_ptr);
            if (iVar2 == 0) {
              uVar3 = atoi(unaff_RBX + 0xc);
              *(int32_t *)(unaff_R15 + 0x40) = uVar3;
            }
            else {
              iVar2 = SystemCore_Optimizer(&processed_var_4704_ptr);
              if (iVar2 == 0) {
                uVar4 = Function_8c597946(unaff_RBX + 7);
                iVar2 = Function_055df91e(uVar4);
                puVar6 = &processed_var_4712_ptr;
              }
              else {
                iVar2 = SystemCore_Optimizer(&processed_var_4720_ptr);
                if (iVar2 == 0) {
                  uVar4 = Function_8c597946(unaff_RBX + 8);
                  iVar2 = Function_055df91e(uVar4);
                  puVar6 = &processed_var_4736_ptr;
                }
                else {
                  iVar2 = SystemCore_Optimizer(&processed_var_4744_ptr);
                  if (iVar2 == 0) {
                    uVar4 = Function_8c597946(unaff_RBX + 0xc);
                    iVar2 = Function_055df91e(uVar4);
                    puVar6 = &processed_var_4760_ptr;
                  }
                  else {
                    iVar2 = SystemCore_Optimizer(&processed_var_4776_ptr);
                    if (iVar2 == 0) {
                      uVar4 = Function_8c597946(unaff_RBX + 0xc);
                      iVar2 = Function_055df91e(uVar4);
                      puVar6 = &processed_var_4792_ptr;
                    }
                    else {
                      iVar2 = SystemCore_Optimizer(&processed_var_4808_ptr);
                      if (iVar2 == 0) {
                        uVar4 = Function_8c597946(unaff_RBX + 9);
                        iVar2 = Function_055df91e(uVar4);
                        puVar6 = &processed_var_4824_ptr;
                      }
                      else {
                        iVar2 = SystemCore_Optimizer(&processed_var_4840_ptr);
                        if (iVar2 == 0) {
                          uVar4 = Function_8c597946(unaff_RBX + 10);
                          iVar2 = Function_055df91e(uVar4);
                          puVar6 = &processed_var_4856_ptr;
                        }
                        else {
                          iVar2 = SystemCore_Optimizer(&processed_var_4872_ptr);
                          if (iVar2 == 0) {
                            uVar4 = Function_8c597946(unaff_RBX + 8);
                            iVar2 = Function_055df91e(uVar4);
                            puVar6 = &processed_var_4888_ptr;
                          }
                          else {
                            iVar2 = SystemCore_Optimizer(&processed_var_4896_ptr);
                            if (iVar2 == 0) {
                              uVar4 = Function_8c597946(unaff_RBX + 8);
                              iVar2 = Function_055df91e(uVar4);
                              puVar6 = &processed_var_4912_ptr;
                            }
                            else {
                              iVar2 = SystemCore_Optimizer(&processed_var_4920_ptr);
                              if (iVar2 == 0) {
                                uVar4 = Function_8c597946(unaff_RBX + 8);
                                iVar2 = Function_055df91e(uVar4);
                                puVar6 = &processed_var_4936_ptr;
                              }
                              else {
                                iVar2 = SystemCore_Optimizer(&processed_var_4944_ptr);
                                if (iVar2 != 0) goto LAB_1807f6c89;
                                uVar4 = Function_8c597946(unaff_RBX + 8);
                                iVar2 = Function_055df91e(uVar4);
                                puVar6 = &processed_var_4960_ptr;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              NetworkSystem_DataManager(unaff_R15 + 0x42,4,puVar6,uVar4,iVar2 + 1);
            }
          }
        }
      }
    }
LAB_1807f6c89:
    iVar2 = SystemCore_Optimizer(&processed_var_4968_ptr);
    if (iVar2 == 0) {
      uVar4 = Function_8c597946(unaff_RBX + 0xd);
      iVar2 = Function_055df91e(uVar4);
      puVar6 = &processed_var_4984_ptr;
LAB_1807f6ef1:
      NetworkSystem_DataManager(unaff_R15 + 0x42,5,puVar6,uVar4,iVar2 + 1);
    }
    else {
      iVar2 = SystemCore_Optimizer(&processed_var_5000_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 0x11);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5024_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5040_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 0xc);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5056_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5072_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 10);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5088_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5104_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 0xb);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5120_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5136_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 9);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5152_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5160_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 9);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5176_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5184_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 9);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5200_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5208_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 9);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5224_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5232_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 0x10);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5256_ptr;
        goto LAB_1807f6ef1;
      }
      iVar2 = SystemCore_Optimizer(&processed_var_5272_ptr);
      if (iVar2 == 0) {
        uVar4 = Function_8c597946(unaff_RBX + 0xd);
        iVar2 = Function_055df91e(uVar4);
        puVar6 = &processed_var_5288_ptr;
        goto LAB_1807f6ef1;
      }
    }
    iVar2 = Function_055df91e();
  } while (iVar2 != 0);
  if ((int)unaff_R15[0x40] != 0) {
    *(int *)((int64_t)unaff_R15 + 0x204) = (int)unaff_R15[0x40];
    lVar5 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xff1,&processed_var_4304_ptr,0x298,0);
    unaff_R15[0x41] = lVar5;
    if (lVar5 == 0) {
      (**(code **)(*unaff_R15 + 0x28))();
// WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}
// 函数: void function_7f7090(void)
void function_7f7090(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t function_7f7400(int64_t param_1)
{
  function_7ff260(*(uint64_t *)(param_1 + 0x1f0));
  *(uint64_t *)(param_1 + 0x1f0) = 0xffffffffffffffff;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7f7430(int64_t param_1)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 0x1f0) != -1) {
    uVar1 = function_7ff260();
    *(uint64_t *)(param_1 + 0x1f0) = 0xffffffffffffffff;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int64_t *)(param_1 + 0x208) == 0) {
    system_system_pointer = system_system_pointer + -1;
    if ((system_system_pointer == 0) && (uVar1 = function_7ff7f0(), (int)uVar1 != 0)) {
      return uVar1;
    }
    return 0;
  }
// WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x208),
                &processed_var_4304_ptr,0x309,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7f74b0(int64_t param_1,uint64_t param_2,int32_t *param_3)
void function_7f74b0(int64_t param_1,uint64_t param_2,int32_t *param_3)
{
  int iVar1;
  int8_t stack_array_898 [80];
  int8_t local_var_848;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_898;
  local_var_848 = 0;
  iVar1 = function_7aa7e0();
  if (iVar1 == 0) {
    *param_3 = 0xffffffff;
// WARNING: Subroutine does not return
    memset(param_1 + 0x1280,0,0x1000);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_898);
}
// 函数: void function_7f74e9(void)
void function_7f74e9(void)
{
  int64_t unaff_RBX;
  int32_t *unaff_RDI;
  *unaff_RDI = 0xffffffff;
// WARNING: Subroutine does not return
  memset(unaff_RBX + 0x1280,0,0x1000);
}