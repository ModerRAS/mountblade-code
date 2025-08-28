#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part156.c - 1 个函数

// 函数: void FUN_18075f090(int64_t param_1,int param_2,uint64_t *param_3,int32_t *param_4,
void FUN_18075f090(int64_t param_1,int param_2,uint64_t *param_3,int32_t *param_4,
                  int64_t param_5,int32_t param_6)

{
  int64_t lVar1;
  int iVar2;
  int8_t *puVar3;
  int8_t auStack_98 [32];
  int8_t *puStack_78;
  int32_t auStack_68 [2];
  uint64_t uStack_60;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  puVar3 = (int8_t *)0x0;
  uStack_60 = 0;
  auStack_68[0] = 0;
  if ((((-1 < param_2) && (lVar1 = *(int64_t *)(param_1 + 0xe8), lVar1 != 0)) &&
      (param_2 < *(int *)(lVar1 + 0x60))) &&
     ((*(int64_t *)(lVar1 + 0xa8) != 0 &&
      (**(int **)(*(int64_t *)(lVar1 + 0x68) + (int64_t)param_2 * 8) == 3)))) {
    auStack_58[0] = 0;
    *(int64_t *)(param_1 + 0xb0) = param_1;
    if ((param_5 != 0) || (*(int *)(param_1 + 0x100) == 0)) {
      puVar3 = auStack_58;
    }
    puStack_78 = puVar3;
    iVar2 = (**(code **)(lVar1 + 0xa8))((int64_t *)(param_1 + 0xb0),param_2,&uStack_60,auStack_68);
    if (iVar2 == 0) {
      if (param_3 != (uint64_t *)0x0) {
        *param_3 = uStack_60;
      }
      if (param_4 != (int32_t *)0x0) {
        *param_4 = auStack_68[0];
      }
      if (param_5 != 0) {
        func_0x00018076b450(param_5,puVar3,param_6);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



