#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part156.c - 1 个函数
// 函数: void function_75f090(int64_t param_1,int param_2,uint64_t *param_3,int32_t *param_4,
void function_75f090(int64_t param_1,int param_2,uint64_t *param_3,int32_t *param_4,
                  int64_t param_5,int32_t param_6)
{
  int64_t lVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t stack_array_98 [32];
  int8_t *plocal_var_78;
  int32_t stack_array_68 [2];
  uint64_t local_var_60;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  puVar3 = (int8_t *)0x0;
  local_var_60 = 0;
  stack_array_68[0] = 0;
  if ((((-1 < param_2) && (lVar1 = *(int64_t *)(param_1 + 0xe8), lVar1 != 0)) &&
      (param_2 < *(int *)(lVar1 + 0x60))) &&
     ((*(int64_t *)(lVar1 + 0xa8) != 0 &&
      (**(int **)(*(int64_t *)(lVar1 + 0x68) + (int64_t)param_2 * 8) == 3)))) {
    stack_array_58[0] = 0;
    *(int64_t *)(param_1 + 0xb0) = param_1;
    if ((param_5 != 0) || (*(int *)(param_1 + 0x100) == 0)) {
      puVar3 = stack_array_58;
    }
    plocal_var_78 = puVar3;
    iVar2 = (**(code **)(lVar1 + 0xa8))((int64_t *)(param_1 + 0xb0),param_2,&local_var_60,stack_array_68);
    if (iVar2 == 0) {
      if (param_3 != (uint64_t *)0x0) {
        *param_3 = local_var_60;
      }
      if (param_4 != (int32_t *)0x0) {
        *param_4 = stack_array_68[0];
      }
      if (param_5 != 0) {
        SystemFunction_00018076b450(param_5,puVar3,param_6);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address