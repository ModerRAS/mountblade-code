/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part382.c - 13 个函数
// 函数: void function_478410(int64_t param_1,uint64_t *param_2)
void function_478410(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int8_t stack_array_98 [32];
  uint local_var_78;
  uint64_t local_var_70;
  uint64_t *plocal_var_68;
  int8_t local_var_60;
  uint8_t local_var_5f;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int8_t local_var_40;
  uint8_t local_var_3f;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  local_var_70 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  local_var_78 = 0;
  lVar7 = *(int64_t *)(param_1 + 8);
  plocal_var_68 = param_2;
  if (lVar7 == 0) {
    local_var_30 = 0;
    local_var_28 = 0xf;
    local_var_40 = 0;
    puVar2 = (uint64_t *)&local_var_40;
    uVar5 = 1;
  }
  else {
    lVar3 = *(int64_t *)(lVar7 + 0x28);
    if (lVar3 == 0) {
      lVar3 = lVar7 + 0x30;
    }
    local_var_50 = 0;
    local_var_48 = 0xf;
    local_var_60 = 0;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar3 + lVar7) != '\0');
    MathCoreCalculator0(&local_var_60);
    puVar2 = (uint64_t *)&local_var_60;
    uVar5 = 2;
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(int8_t *)puVar2 = 0;
  uVar6 = uVar5 | 4;
  local_var_78 = uVar6;
  if ((uVar5 & 2) != 0) {
    uVar6 = uVar5 & 0xfffffffd | 4;
    local_var_78 = uVar6;
    if (0xf < local_var_48) {
      uVar4 = local_var_48 + 1;
      lVar3 = CONCAT71(local_var_5f,local_var_60);
      lVar7 = lVar3;
      if (0xfff < uVar4) {
        uVar4 = local_var_48 + 0x28;
        lVar7 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar7) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar7,uVar4);
    }
    local_var_50 = 0;
    local_var_48 = 0xf;
    local_var_60 = 0;
  }
  if ((uVar6 & 1) != 0) {
    local_var_78 = uVar6 & 0xfffffffe;
    if (0xf < local_var_28) {
      uVar4 = local_var_28 + 1;
      lVar3 = CONCAT71(local_var_3f,local_var_40);
      lVar7 = lVar3;
      if (0xfff < uVar4) {
        uVar4 = local_var_28 + 0x28;
        lVar7 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar7) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar7,uVar4);
    }
    local_var_30 = 0;
    local_var_28 = 0xf;
    local_var_40 = 0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_98);
}
uint64_t * function_4785d0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}
// 函数: void function_478600(uint64_t *param_1,uint64_t *param_2)
void function_478600(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  if (param_1 != param_2) {
    do {
      if (param_1 == (uint64_t *)0x0) {
        return;
      }
      puVar1 = (uint64_t *)param_1[2];
      param_1[2] = 0;
      (**(code **)*param_1)(param_1,1);
      param_1 = puVar1;
    } while (puVar1 != param_2);
  }
  return;
}
// 函数: void function_47860f(uint64_t *param_1,uint64_t *param_2)
void function_47860f(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  do {
    if (param_1 == (uint64_t *)0x0) {
      return;
    }
    puVar1 = (uint64_t *)param_1[2];
    param_1[2] = 0;
    (**(code **)*param_1)(param_1,1);
    param_1 = puVar1;
  } while (puVar1 != param_2);
  return;
}
// 函数: void function_478650(void)
void function_478650(void)
{
  return;
}
uint64_t *
function_478660(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t *
function_4786a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t * function_4786e0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &processed_var_5288_ptr;
  puVar1 = (uint64_t *)param_1[4];
  if (puVar1 != (uint64_t *)0x0) {
    while (puVar1 != (uint64_t *)0x0) {
      puVar2 = (uint64_t *)puVar1[2];
      puVar1[2] = 0;
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,uVar3);
      puVar1 = puVar2;
    }
  }
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}
uint64_t *
function_478780(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t * function_4787c0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &processed_var_5816_ptr;
  puVar3 = (uint64_t *)param_1[5];
  while (puVar3 != (uint64_t *)0x0) {
    puVar1 = (uint64_t *)puVar3[5];
    puVar3[5] = 0;
    puVar2 = (uint64_t *)param_1[4];
    puVar4 = puVar3;
    while ((puVar3 = puVar1, puVar4 != puVar2 && (puVar4 != (uint64_t *)0x0))) {
      puVar3 = (uint64_t *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1,param_3,param_4,uVar5);
      puVar4 = puVar3;
    }
  }
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
uint64_t *
function_478880(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_6184_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void function_4788c0(int64_t param_1,int64_t param_2,int64_t param_3)
void function_4788c0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  if (param_1 != param_2) {
    do {
      if (param_1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 8);
      lVar3 = param_3;
      if (9 < iVar1) {
        if (iVar1 < 0xc) {
          function_4788c0(*(uint64_t *)(param_1 + 0x20),0,0);
        }
        else if (iVar1 == 0x10) {
          if (param_3 != 0) {
            *(int32_t *)(param_3 + 0x34) = 0;
          }
          for (lVar2 = *(int64_t *)(param_1 + 0x28); lVar2 != 0;
              lVar2 = *(int64_t *)(lVar2 + 0x28)) {
            function_4788c0(*(uint64_t *)(lVar2 + 0x10),*(uint64_t *)(lVar2 + 0x20),param_3);
          }
        }
        else if (iVar1 == 0x12) {
          lVar3 = param_1;
          if (param_3 != 0) {
            *(int32_t *)(param_3 + 0x34) = 0;
            *(int32_t *)(param_1 + 0x34) = 0;
            lVar3 = param_3;
          }
        }
        else if (((iVar1 == 0x13) && (param_3 == *(int64_t *)(param_1 + 0x20))) &&
                (lVar3 = 0, *(int *)(param_3 + 0x34) == -1)) {
          *(int32_t *)(param_3 + 0x34) = 1;
        }
      }
      param_1 = *(int64_t *)(param_1 + 0x10);
      param_3 = lVar3;
    } while (param_1 != param_2);
  }
  return;
}
// 函数: void function_4788d8(int64_t param_1,int64_t param_2,int64_t param_3)
void function_4788d8(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  do {
    if (param_1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    lVar3 = param_3;
    if (9 < iVar1) {
      if (iVar1 < 0xc) {
        function_4788c0(*(uint64_t *)(param_1 + 0x20),0,0);
      }
      else if (iVar1 == 0x10) {
        if (param_3 != 0) {
          *(int32_t *)(param_3 + 0x34) = 0;
        }
        for (lVar2 = *(int64_t *)(param_1 + 0x28); lVar2 != 0; lVar2 = *(int64_t *)(lVar2 + 0x28))
        {
          function_4788c0(*(uint64_t *)(lVar2 + 0x10),*(uint64_t *)(lVar2 + 0x20),param_3);
        }
      }
      else if (iVar1 == 0x12) {
        lVar3 = param_1;
        if (param_3 != 0) {
          *(int32_t *)(param_3 + 0x34) = 0;
          *(int32_t *)(param_1 + 0x34) = 0;
          lVar3 = param_3;
        }
      }
      else if (((iVar1 == 0x13) && (param_3 == *(int64_t *)(param_1 + 0x20))) &&
              (lVar3 = 0, *(int *)(param_3 + 0x34) == -1)) {
        *(int32_t *)(param_3 + 0x34) = 1;
      }
    }
    param_1 = *(int64_t *)(param_1 + 0x10);
    param_3 = lVar3;
  } while (param_1 != param_2);
  return;
}
// 函数: void function_4789af(void)
void function_4789af(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4789b0(uint64_t param_1,uint64_t param_2)
void function_4789b0(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  code *pcVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint64_t *puVar6;
  int *piVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int8_t stack_array_128 [40];
  uint64_t local_var_100;
  int32_t local_var_f8;
  uint64_t *plocal_var_f0;
  uint64_t local_var_e8;
  int8_t local_var_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int8_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int8_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  int8_t local_var_80;
  int64_t lStack_78;
  uint64_t stack_array_70 [3];
  int64_t *plStack_58;
  uint64_t local_var_50;
  int8_t local_var_48;
  uint8_t local_var_47;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  local_var_50 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  bVar4 = false;
  local_var_f8 = 0;
  function_47a1e0(&lStack_78,&processed_var_4648_ptr);
  local_var_e8 = 0;
  local_var_e0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_88 = 0;
  local_var_80 = 0;
  local_var_100 = param_1;
  cVar5 = function_47ad30(param_1,param_2,&local_var_e8,&lStack_78);
  if (cVar5 != '\0') {
    puVar6 = &local_var_90;
    if (1 < (uint64_t)((lStack_d0 - lStack_d8) / 0x18)) {
      puVar6 = (uint64_t *)(lStack_d8 + 0x18);
    }
    puVar6 = (uint64_t *)function_47a470(puVar6,&local_var_48);
    bVar4 = true;
    local_var_f8 = 1;
    piVar7 = (int *)_errno();
    if (0xf < (uint64_t)puVar6[3]) {
      puVar6 = (uint64_t *)*puVar6;
    }
    *piVar7 = 0;
    strtol(puVar6,&plocal_var_f0,10);
    if (puVar6 == plocal_var_f0) {
      __Xinvalid_argument_std__YAXPEBD_Z(&processed_var_4536_ptr);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*piVar7 == 0x22) {
      __Xout_of_range_std__YAXPEBD_Z(&processed_var_4560_ptr);
    }
  }
  if (bVar4) {
    local_var_f8 = 0;
    if (0xf < local_var_30) {
      uVar9 = local_var_30 + 1;
      lVar3 = CONCAT71(local_var_47,local_var_48);
      lVar8 = lVar3;
      if (0xfff < uVar9) {
        uVar9 = local_var_30 + 0x28;
        lVar8 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar8) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar8,uVar9);
    }
    local_var_38 = 0;
    local_var_30 = 0xf;
    local_var_48 = 0;
  }
  if (lStack_d8 != 0) {
    uVar9 = ((lStack_c8 - lStack_d8) / 0x18) * 0x18;
    lVar8 = lStack_d8;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar8 = *(int64_t *)(lStack_d8 + -8);
      if (0x1f < (lStack_d8 - lVar8) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar8,uVar9);
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
  }
  if (lStack_78 != 0) {
    LOCK();
    piVar7 = (int *)(lStack_78 + 0x2c);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      function_478600(lStack_78,0);
    }
  }
  lStack_78 = 0;
  plocal_var_f0 = stack_array_70;
  if ((plStack_58 != (int64_t *)0x0) &&
     (puVar6 = (uint64_t *)(**(code **)(*plStack_58 + 0x10))(), puVar6 != (uint64_t *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_128);
}
// 函数: void function_478c60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_478c60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar1 = *(int64_t *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar3 = ((*(int64_t *)(param_1 + 0x20) - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_478cf0(uint64_t param_1,uint64_t param_2)
void function_478cf0(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  code *pcVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint64_t *puVar6;
  int *piVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int8_t stack_array_138 [40];
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t *plocal_var_100;
  uint64_t local_var_f8;
  int8_t local_var_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  int8_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int8_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  int8_t local_var_90;
  int64_t lStack_88;
  uint64_t stack_array_80 [3];
  int64_t *plStack_68;
  uint64_t local_var_60;
  int8_t local_var_58;
  uint8_t local_var_57;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_60 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  bVar4 = false;
  local_var_108 = 0;
  function_47a1e0(&lStack_88,&processed_var_4680_ptr);
  local_var_f8 = 0;
  local_var_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_110 = param_1;
  cVar5 = function_47ad30(param_1,param_2,&local_var_f8,&lStack_88);
  if (cVar5 != '\0') {
    puVar6 = &local_var_a0;
    if (1 < (uint64_t)((lStack_e0 - lStack_e8) / 0x18)) {
      puVar6 = (uint64_t *)(lStack_e8 + 0x18);
    }
    puVar6 = (uint64_t *)function_47a470(puVar6,&local_var_58);
    bVar4 = true;
    local_var_108 = 1;
    piVar7 = (int *)_errno();
    if (0xf < (uint64_t)puVar6[3]) {
      puVar6 = (uint64_t *)*puVar6;
    }
    *piVar7 = 0;
    strtoull(puVar6,&plocal_var_100,10);
    if (puVar6 == plocal_var_100) {
      __Xinvalid_argument_std__YAXPEBD_Z(&processed_var_4592_ptr);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*piVar7 == 0x22) {
      __Xout_of_range_std__YAXPEBD_Z(&processed_var_4616_ptr);
    }
  }
  if (bVar4) {
    local_var_108 = 0;
    if (0xf < local_var_40) {
      uVar9 = local_var_40 + 1;
      lVar3 = CONCAT71(local_var_57,local_var_58);
      lVar8 = lVar3;
      if (0xfff < uVar9) {
        uVar9 = local_var_40 + 0x28;
        lVar8 = *(int64_t *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar8) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar8,uVar9);
    }
    local_var_48 = 0;
    local_var_40 = 0xf;
    local_var_58 = 0;
  }
  if (lStack_e8 != 0) {
    uVar9 = ((lStack_d8 - lStack_e8) / 0x18) * 0x18;
    lVar8 = lStack_e8;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      lVar8 = *(int64_t *)(lStack_e8 + -8);
      if (0x1f < (lStack_e8 - lVar8) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar8,uVar9);
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
  }
  if (lStack_88 != 0) {
    LOCK();
    piVar7 = (int *)(lStack_88 + 0x2c);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      function_478600(lStack_88,0);
    }
  }
  lStack_88 = 0;
  plocal_var_100 = stack_array_80;
  if ((plStack_68 != (int64_t *)0x0) &&
     (puVar6 = (uint64_t *)(**(code **)(*plStack_68 + 0x10))(), puVar6 != (uint64_t *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_138);
}
// 函数: void function_478fa0(void)
void function_478fa0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Removing unreachable block (ram,0x000180479dfe)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_479a10(char *param_1,int64_t *param_2,uint64_t param_3,uint64_t *param_4,
void function_479a10(char *param_1,int64_t *param_2,uint64_t param_3,uint64_t *param_4,
                  uint64_t *param_5,uint64_t param_6,uint64_t param_7)
{
  uint64_t *puVar1;
  int64_t lVar2;
  bool bVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  char *pcVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  int iVar14;
  int8_t stack_array_2b8 [32];
  int32_t local_var_298;
  int8_t *plocal_var_290;
  uint64_t local_var_288;
  uint64_t local_var_280;
  int64_t lStack_278;
  int8_t stack_array_270 [8];
  int8_t stack_array_268 [120];
  int8_t stack_array_1f0 [104];
  char acStack_188 [8];
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int8_t local_var_160;
  uint8_t local_var_15f;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_138;
  int iStack_130;
  int32_t local_var_12c;
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int8_t local_var_f8;
  uint8_t local_var_f7;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  char acStack_d8 [8];
  int8_t stack_array_d0 [8];
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  int8_t stack_array_a0 [16];
  uint64_t local_var_90;
  uint64_t local_var_88;
  char acStack_80 [8];
  int8_t stack_array_78 [32];
  uint64_t local_var_58;
  local_var_288 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  plocal_var_290 = (int8_t *)param_7;
  local_var_298 = 0;
  iVar13 = 1;
  local_var_280 = param_1;
  function_476ff0(&lStack_278);
  uVar5 = SystemCore_Synchronizer(&lStack_278,param_3);
  uVar5 = SystemCore_ResourceManager(uVar5,0x20);
  puVar8 = param_4 + 2;
  if (0xf < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  uVar5 = function_3f4790(uVar5,param_4,*puVar8);
  uVar5 = SystemCore_Synchronizer(uVar5,&processed_var_4768_ptr);
  uVar6 = function_481f90(&local_var_138,*(int16_t *)(*param_2 + 0x20));
  uVar7 = function_482ac0(&local_var_118,*param_2);
  puVar8 = (uint64_t *)function_482b40(&local_var_f8,uVar7,uVar6);
  local_var_298 = 4;
  if (0xf < local_var_100) {
    uVar11 = local_var_100 + 1;
    uVar12 = local_var_118;
    if (0xfff < uVar11) {
      uVar11 = local_var_100 + 0x28;
      uVar12 = *(uint64_t *)(local_var_118 - 8);
      if (0x1f < (local_var_118 - uVar12) - 8) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar12,uVar11);
  }
  local_var_108 = 0;
  local_var_100 = 0xf;
  local_var_118 = local_var_118 & 0xffffffffffffff00;
  if (0xf < local_var_120) {
    uVar12 = local_var_120 + 1;
    if ((0xfff < uVar12) &&
       (uVar12 = local_var_120 + 0x28, 0x1f < (local_var_138 - *(int64_t *)(local_var_138 - 8)) - 8)) {
// WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar12);
  }
  local_var_128 = 0;
  local_var_120 = 0xf;
  local_var_138 = local_var_138 & 0xffffffffffffff00;
  puVar1 = puVar8 + 2;
  if (0xf < (uint64_t)puVar8[3]) {
    puVar8 = (uint64_t *)*puVar8;
  }
  uVar5 = function_3f4790(uVar5,puVar8,*puVar1);
  uVar5 = SystemCore_Synchronizer(uVar5,&processed_var_4744_ptr);
  uVar5 = __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01__K_Z(uVar5,param_5[2]);
  SystemCore_Synchronizer(uVar5,&processed_var_4800_ptr);
  local_var_298 = 0;
  if (0xf < local_var_e0) {
    uVar12 = local_var_e0 + 1;
    lVar2 = CONCAT71(local_var_f7,local_var_f8);
    lVar10 = lVar2;
    if (0xfff < uVar12) {
      uVar12 = local_var_e0 + 0x28;
      lVar10 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar12);
  }
  local_var_e8 = 0;
  local_var_e0 = 0xf;
  local_var_f8 = 0;
  puVar8 = param_5 + 2;
  if (0xf < (uint64_t)param_5[3]) {
    param_5 = (uint64_t *)*param_5;
  }
  _write___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_PEBD_J_Z
            (&lStack_278,param_5,*puVar8);
  function_476f30(&lStack_278,&local_var_160);
  local_var_a8 = 0;
  local_var_90 = 0;
  local_var_88 = 0xf;
  stack_array_a0[0] = 0;
  function_47aa70();
  puVar4 = plocal_var_290;
  while( true ) {
    pcVar9 = (char *)function_478fa0(acStack_80,param_2,&local_var_160,puVar4);
    local_var_298 = 1;
    if (pcVar9 != acStack_188) {
      if (acStack_188[0] != '\0') {
        SystemPerformanceOptimizer(&local_var_180);
      }
      acStack_188[0] = *pcVar9;
      if (acStack_188[0] != '\0') {
        local_var_180 = *(uint64_t *)(pcVar9 + 8);
        local_var_178 = *(uint64_t *)(pcVar9 + 0x10);
        local_var_170 = *(uint64_t *)(pcVar9 + 0x18);
        local_var_168 = *(uint64_t *)(pcVar9 + 0x20);
        pcVar9[0x18] = '\0';
        pcVar9[0x19] = '\0';
        pcVar9[0x1a] = '\0';
        pcVar9[0x1b] = '\0';
        pcVar9[0x1c] = '\0';
        pcVar9[0x1d] = '\0';
        pcVar9[0x1e] = '\0';
        pcVar9[0x1f] = '\0';
        pcVar9[0x20] = '\x0f';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = '\0';
        pcVar9[8] = '\0';
      }
    }
    iVar14 = iVar13;
    if ((acStack_188[0] == '\0') || (iVar14 = iVar13 + -1, iVar13 == 0)) {
      bVar3 = false;
      iVar13 = iVar14;
    }
    else {
      bVar3 = true;
      iVar13 = iVar14;
    }
    local_var_298 = 0;
    if (acStack_80[0] != '\0') {
      SystemPerformanceOptimizer(stack_array_78);
    }
    if (!bVar3) break;
    lVar10 = _Xtime_get_ticks();
    lVar10 = (lVar10 + 1000000) * 100;
    local_var_138 = lVar10 / 1000000000;
    iStack_130 = (int)lVar10 + (int)local_var_138 * -1000000000;
    local_var_110 = CONCAT44(local_var_12c,iStack_130);
    local_var_118 = local_var_138;
    _Thrd_sleep(&local_var_118);
    function_482450(param_2,acStack_d8);
    if (acStack_d8[0] != '\0') {
      plocal_var_290 = &local_var_f8;
      uVar5 = function_18b350(&local_var_f8,stack_array_c8);
      function_47a710(param_1,uVar5);
      local_var_298 = 2;
      if (acStack_d8[0] != '\0') {
        plocal_var_290 = stack_array_d0;
        SystemPerformanceOptimizer(stack_array_c8);
      }
      if (acStack_188[0] != '\0') {
        SystemPerformanceOptimizer(&local_var_180);
      }
      SystemPerformanceOptimizer(stack_array_a0);
      if (0xf < local_var_148) {
        uVar12 = local_var_148 + 1;
        lVar2 = CONCAT71(local_var_15f,local_var_160);
        lVar10 = lVar2;
        if (0xfff < uVar12) {
          uVar12 = local_var_148 + 0x28;
          lVar10 = *(int64_t *)(lVar2 + -8);
          if (0x1f < (lVar2 - lVar10) - 8U) {
// WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar10,uVar12);
      }
      local_var_150 = 0;
      local_var_148 = 0xf;
      local_var_160 = 0;
      plocal_var_290 = stack_array_1f0;
      *(void **)(stack_array_270 + (int64_t)*(int *)(lStack_278 + 4) + -8) = &processed_var_4024_ptr;
      *(int *)((int64_t)&local_var_280 + (int64_t)*(int *)(lStack_278 + 4) + 4) =
           *(int *)(lStack_278 + 4) + -0x88;
      function_477570(stack_array_270);
LAB_180479ff8:
      __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(stack_array_268);
      __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(stack_array_1f0);
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_2b8);
    }
  }
  *param_1 = acStack_188[0];
  if (acStack_188[0] != '\0') {
    *(uint64_t *)(param_1 + 8) = local_var_180;
    *(uint64_t *)(param_1 + 0x10) = local_var_178;
    *(uint64_t *)(param_1 + 0x18) = local_var_170;
    *(uint64_t *)(param_1 + 0x20) = local_var_168;
    local_var_170 = 0;
    local_var_168 = 0xf;
    local_var_180 = local_var_180 & 0xffffffffffffff00;
  }
  local_var_298 = 2;
  if (acStack_188[0] != '\0') {
    SystemPerformanceOptimizer(&local_var_180);
  }
  SystemPerformanceOptimizer(stack_array_a0);
  if (0xf < local_var_148) {
    uVar12 = local_var_148 + 1;
    lVar2 = CONCAT71(local_var_15f,local_var_160);
    lVar10 = lVar2;
    if (0xfff < uVar12) {
      uVar12 = local_var_148 + 0x28;
      lVar10 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar10) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar12);
  }
  local_var_150 = 0;
  local_var_148 = 0xf;
  local_var_160 = 0;
  plocal_var_290 = stack_array_1f0;
  *(void **)(stack_array_270 + (int64_t)*(int *)(lStack_278 + 4) + -8) = &processed_var_4024_ptr;
  *(int *)((int64_t)&local_var_280 + (int64_t)*(int *)(lStack_278 + 4) + 4) =
       *(int *)(lStack_278 + 4) + -0x88;
  function_477570(stack_array_270);
  goto LAB_180479ff8;
}
uint64_t
function_47a040(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int param_4,
             uint64_t param_5)
{
  void *puVar1;
  puVar1 = (void *)0x0;
  if (param_4 == 0) {
    puVar1 = &processed_var_4788_ptr;
  }
  else if (param_4 == 1) {
    puVar1 = &processed_var_4792_ptr;
  }
  else if (param_4 == 2) {
    puVar1 = &processed_var_4964_ptr;
  }
  function_479a10(param_2,*param_1,puVar1,param_3,param_5);
  return param_2;
}
// 函数: void function_47a0d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_47a0d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(int64_t *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}