#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part207.c - 5 个函数
// 函数: void function_18a130(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void function_18a130(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  lVar2 = function_18a960();
  *(int16_t *)(lVar2 + 0x18) = 0;
  param_3 = (uint64_t *)*param_3;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  uVar1 = param_3[1];
  *(uint64_t *)(lVar2 + 0x20) = *param_3;
  *(uint64_t *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_3[3];
  *(uint64_t *)(lVar2 + 0x30) = param_3[2];
  *(uint64_t *)(lVar2 + 0x38) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(int8_t *)param_3 = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x58) = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x58) = 0xf;
  *(int8_t *)(lVar2 + 0x40) = 0;
  return;
}
uint64_t *
function_18a1c0(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t *param_4,
             uint64_t param_5)
{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  uint64_t stack_array_38 [2];
  if (param_1[1] == 0) {
    function_18aa30(param_1,param_2,1,*param_1);
    return param_2;
  }
  plVar5 = (int64_t *)*param_1;
  if (param_3 == (int64_t *)*plVar5) {
    plVar5 = param_3 + 4;
    uVar1 = param_3[6];
    if (0xf < (uint64_t)param_3[7]) {
      plVar5 = (int64_t *)*plVar5;
    }
    uVar10 = param_4[2];
    puVar4 = param_4;
    if (0xf < (uint64_t)param_4[3]) {
      puVar4 = (uint64_t *)*param_4;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    iVar3 = memcmp(puVar4,plVar5,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) {
LAB_18018a278:
        function_18aa30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    else if (iVar3 < 0) goto LAB_18018a278;
    goto LAB_18018a57c;
  }
  if (param_3 == plVar5) {
    lVar2 = plVar5[2];
    plVar5 = (int64_t *)(lVar2 + 0x20);
    uVar1 = param_4[2];
    puVar4 = param_4;
    if (0xf < (uint64_t)param_4[3]) {
      puVar4 = (uint64_t *)*param_4;
    }
    uVar10 = *(uint64_t *)(lVar2 + 0x30);
    if (0xf < *(uint64_t *)(lVar2 + 0x38)) {
      plVar5 = (int64_t *)*plVar5;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    iVar3 = memcmp(plVar5,puVar4,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) {
LAB_18018a2f8:
        function_18aa30(param_1,param_2,0,lVar2);
        return param_2;
      }
    }
    else if (iVar3 < 0) goto LAB_18018a2f8;
    goto LAB_18018a57c;
  }
  plVar5 = param_3 + 4;
  uVar1 = param_3[6];
  if (0xf < (uint64_t)param_3[7]) {
    plVar5 = (int64_t *)*plVar5;
  }
  uVar10 = param_4[2];
  uVar9 = param_4[3];
  puVar4 = param_4;
  if (0xf < uVar9) {
    puVar4 = (uint64_t *)*param_4;
  }
  uVar8 = uVar10;
  if (uVar1 < uVar10) {
    uVar8 = uVar1;
  }
  iVar3 = memcmp(puVar4,plVar5,uVar8);
  if (iVar3 == 0) {
    if (uVar10 < uVar1) goto LAB_18018a370;
    if (uVar10 <= uVar1) goto LAB_18018a36e;
  }
  else {
LAB_18018a36e:
    if (iVar3 < 0) {
LAB_18018a370:
      if (*(char *)((int64_t)param_3 + 0x19) == '\0') {
        plVar5 = param_3;
        plVar6 = (int64_t *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar7 = plVar6;
            plVar6 = (int64_t *)plVar7[2];
          } while (*(char *)(plVar7[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar7 = plVar5;
            plVar5 = (int64_t *)plVar7[1];
            if (*(char *)((int64_t)plVar5 + 0x19) != '\0') break;
          } while (plVar7 == (int64_t *)*plVar5);
          if (*(char *)((int64_t)plVar7 + 0x19) == '\0') {
            plVar7 = plVar5;
          }
        }
      }
      else {
        plVar7 = (int64_t *)param_3[2];
      }
      plVar5 = plVar7 + 4;
      uVar10 = param_4[2];
      uVar9 = param_4[3];
      puVar4 = param_4;
      if (0xf < uVar9) {
        puVar4 = (uint64_t *)*param_4;
      }
      uVar1 = plVar7[6];
      if (0xf < (uint64_t)plVar7[7]) {
        plVar5 = (int64_t *)*plVar5;
      }
      uVar8 = uVar1;
      if (uVar10 < uVar1) {
        uVar8 = uVar10;
      }
      iVar3 = memcmp(plVar5,puVar4,uVar8);
      if (iVar3 == 0) {
        if (uVar1 < uVar10) goto LAB_18018a5c5;
        if (uVar10 < uVar1) goto LAB_18018a3ee;
      }
      if (iVar3 < 0) {
LAB_18018a5c5:
        if (*(char *)(plVar7[2] + 0x19) != '\0') {
          function_18aa30(param_1,param_2,0,plVar7);
          return param_2;
        }
        function_18aa30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
  }
LAB_18018a3ee:
  plVar5 = param_3 + 4;
  puVar4 = param_4;
  if (0xf < uVar9) {
    puVar4 = (uint64_t *)*param_4;
  }
  uVar1 = param_3[6];
  if (0xf < (uint64_t)param_3[7]) {
    plVar5 = (int64_t *)*plVar5;
  }
  uVar9 = uVar1;
  if (uVar10 < uVar1) {
    uVar9 = uVar10;
  }
  iVar3 = memcmp(plVar5,puVar4,uVar9);
  if (iVar3 == 0) {
    if (uVar10 <= uVar1) goto LAB_18018a57c;
  }
  else if (-1 < iVar3) goto LAB_18018a57c;
  plVar5 = (int64_t *)param_3[2];
  plVar6 = param_3;
  if (*(char *)(param_3[2] + 0x19) == '\0') {
    do {
      plVar7 = plVar5;
      plVar5 = (int64_t *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  else {
    do {
      plVar7 = (int64_t *)plVar6[1];
      if (*(char *)((int64_t)plVar7 + 0x19) != '\0') break;
      bVar11 = plVar6 == (int64_t *)plVar7[2];
      plVar6 = plVar7;
    } while (bVar11);
  }
  if (plVar7 != (int64_t *)*param_1) {
    plVar5 = plVar7 + 4;
    uVar1 = plVar7[6];
    if (0xf < (uint64_t)plVar7[7]) {
      plVar5 = (int64_t *)*plVar5;
    }
    uVar10 = param_4[2];
    puVar4 = param_4;
    if (0xf < (uint64_t)param_4[3]) {
      puVar4 = (uint64_t *)*param_4;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    stack_array_38[0] = uVar10;
    iVar3 = memcmp(puVar4,plVar5,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) goto LAB_18018a53f;
    }
    else if (iVar3 < 0) goto LAB_18018a53f;
LAB_18018a57c:
    puVar4 = (uint64_t *)function_18ac60(param_1,stack_array_38,0,param_4,param_5);
    *param_2 = *puVar4;
    return param_2;
  }
LAB_18018a53f:
  if (*(char *)(param_3[2] + 0x19) != '\0') {
    function_18aa30(param_1,param_2,0,param_3);
    return param_2;
  }
  function_18aa30(param_1,param_2,1,plVar7);
  return param_2;
}
// 函数: void function_18a610(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void function_18a610(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  int64_t lVar1;
  lVar1 = function_18a9f0();
  *(int16_t *)(lVar1 + 0x18) = 0;
  *(int32_t *)(lVar1 + 0x1c) = *(int32_t *)*param_3;
  *(int32_t *)(lVar1 + 0x20) = 0;
  return;
}
uint64_t *
function_18a660(int64_t *param_1,uint64_t *param_2,int64_t *param_3,int *param_4,
             uint64_t param_5)
{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  bool bVar8;
  int8_t stack_array_20 [24];
  if (param_1[1] == 0) {
    function_18af30(param_1,param_2,1,*param_1);
  }
  else {
    plVar3 = (int64_t *)*param_1;
    if (param_3 == (int64_t *)*plVar3) {
      if (*param_4 < *(int *)((int64_t)param_3 + 0x1c)) {
        function_18af30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)(plVar3[2] + 0x1c) < *param_4) {
        function_18af30(param_1,param_2,0);
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      iVar2 = *(int *)((int64_t)param_3 + 0x1c);
      bVar8 = SBORROW4(iVar2,iVar1);
      iVar4 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        if (*(char *)((int64_t)param_3 + 0x19) == '\0') {
          plVar3 = param_3;
          plVar7 = (int64_t *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (int64_t *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar3;
              plVar3 = (int64_t *)plVar6[1];
              if (*(char *)((int64_t)plVar3 + 0x19) != '\0') break;
            } while (plVar6 == (int64_t *)*plVar3);
            if (*(char *)((int64_t)plVar6 + 0x19) == '\0') {
              plVar6 = plVar3;
            }
          }
        }
        else {
          plVar6 = (int64_t *)param_3[2];
        }
        iVar4 = *param_4;
        if (*(int *)((int64_t)plVar6 + 0x1c) < iVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            function_18af30(param_1,param_2,0);
            return param_2;
          }
          function_18af30(param_1,param_2,1,param_3);
          return param_2;
        }
        bVar8 = SBORROW4(*(int *)((int64_t)param_3 + 0x1c),iVar4);
        iVar4 = *(int *)((int64_t)param_3 + 0x1c) - iVar4;
      }
      if (bVar8 != iVar4 < 0) {
        plVar3 = (int64_t *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (int64_t *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (int64_t *)plVar7[1];
            if (*(char *)((int64_t)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (int64_t *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (int64_t *)*param_1) || (*param_4 < *(int *)((int64_t)plVar6 + 0x1c))) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            function_18af30(param_1,param_2,0,param_3);
            return param_2;
          }
          function_18af30(param_1,param_2,1);
          return param_2;
        }
      }
    }
    puVar5 = (uint64_t *)function_18b160(param_1,stack_array_20,0,param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}
uint64_t *
function_18a8c0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  puVar3 = (uint64_t *)*param_1;
  if (*(char *)((int64_t)param_2 + 0x19) == '\0') {
    puVar1 = (uint64_t *)function_18b2e0(param_1,param_2 + 4,param_3,param_4,0xfffffffffffffffe);
    puVar1[1] = param_3;
    *(int8_t *)(puVar1 + 3) = *(int8_t *)(param_2 + 3);
    if (*(char *)((int64_t)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = function_18a8c0(param_1,*param_2,puVar1,param_4 & 0xff);
    *puVar1 = uVar2;
    uVar2 = function_18a8c0(param_1,param_2[2],puVar1,param_4 & 0xff);
    puVar1[2] = uVar2;
  }
  return puVar3;
}
// 函数: void function_18a960(uint64_t *param_1)
void function_18a960(uint64_t *param_1)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)SystemCore_SyscallHandler(0x60);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}
// 函数: void function_18a9a0(uint64_t param_1,int64_t param_2)
void function_18a9a0(uint64_t param_1,int64_t param_2)
{
  SystemPerformanceOptimizer(param_2 + 0x40);
  SystemPerformanceOptimizer(param_2 + 0x20);
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
  free(param_2,0x60);
  return;
}
// 函数: void function_18a9f0(uint64_t *param_1)
void function_18a9f0(uint64_t *param_1)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)SystemCore_SyscallHandler(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}
uint64_t *
function_18aa30(int64_t *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5,int64_t *param_6)
{
  char cVar1;
  int64_t *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  if (0x2aaaaaaaaaaaaa8 < (uint64_t)param_1[1]) {
    function_18a9a0(0x2aaaaaaaaaaaaa9,param_6);
    __Xlength_error_std__YAXPEBD_Z(&processed_var_9176_ptr);
    pcVar3 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (int64_t)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = param_6;
    *(int64_t **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(uint64_t **)*param_1) {
        *(int64_t **)*param_1 = param_6;
      }
      goto LAB_18018aab4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(uint64_t **)(lVar5 + 0x10)) goto LAB_18018aab4;
  }
  *(int64_t **)(lVar5 + 0x10) = param_6;
LAB_18018aab4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(int8_t *)(*(int64_t *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (int64_t *)param_6[1];
    plVar7 = *(int64_t **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((int64_t *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(lVar5 + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(int64_t **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (int64_t *)plVar6[2]) {
          SystemFunction_00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(int64_t **)(param_6[1] + 8);
        plVar7 = (int64_t *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(int64_t **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar7;
          plVar7[2] = (int64_t)plVar6;
        }
        else {
          plVar2 = (int64_t *)plVar6[1];
          if (plVar6 == (int64_t *)plVar2[2]) {
            plVar2[2] = (int64_t)plVar7;
            plVar7[2] = (int64_t)plVar6;
          }
          else {
            *plVar2 = (int64_t)plVar7;
            plVar7[2] = (int64_t)plVar6;
          }
        }
LAB_18018ac29:
        plVar6[1] = (int64_t)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (int64_t *)*plVar6) {
          SystemFunction_00018008d250(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(int64_t **)(param_6[1] + 8);
        plVar7 = (int64_t *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(int64_t **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (uint64_t *)plVar6[1];
          if (plVar6 == (int64_t *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (int64_t)plVar6;
        goto LAB_18018ac29;
      }
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(plVar7 + 3) = 1;
      *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(int64_t **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}
uint64_t *
function_18ac60(int64_t *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             int64_t param_5)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t *plStackX_8;
  uint64_t stack_array_70 [3];
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  stack_array_70[1] = 0xfffffffffffffffe;
  uVar10 = 1;
  puVar7 = (uint64_t *)((uint64_t *)*param_1)[1];
  puVar8 = (uint64_t *)*param_1;
  plStackX_8 = param_1;
  while (*(char *)((int64_t)puVar7 + 0x19) == '\0') {
    if (param_3 == '\0') {
      plVar9 = puVar7 + 4;
      uVar1 = puVar7[6];
      if (0xf < (uint64_t)puVar7[7]) {
        plVar9 = (int64_t *)*plVar9;
      }
      uVar2 = param_4[2];
      puVar8 = param_4;
      if (0xf < (uint64_t)param_4[3]) {
        puVar8 = (uint64_t *)*param_4;
      }
      uVar11 = uVar2;
      if (uVar1 < uVar2) {
        uVar11 = uVar1;
      }
      local_var_50 = uVar1;
      local_var_48 = uVar2;
      uVar5 = memcmp(puVar8,plVar9,uVar11);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
    }
    else {
      plVar9 = puVar7 + 4;
      uVar1 = param_4[2];
      puVar8 = param_4;
      if (0xf < (uint64_t)param_4[3]) {
        puVar8 = (uint64_t *)*param_4;
      }
      uVar2 = puVar7[6];
      if (0xf < (uint64_t)puVar7[7]) {
        plVar9 = (int64_t *)*plVar9;
      }
      uVar11 = uVar2;
      if (uVar1 < uVar2) {
        uVar11 = uVar1;
      }
      stack_array_70[2] = uVar1;
      local_var_58 = uVar2;
      uVar5 = memcmp(plVar9,puVar8,uVar11);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0;
          goto LAB_18018ad63;
        }
        uVar5 = (uint)(uVar1 < uVar2);
      }
      uVar5 = ~uVar5;
    }
LAB_18018ad63:
    uVar10 = uVar5 >> 0x1f;
    puVar8 = puVar7;
    if ((int)uVar5 < 0) {
      puVar7 = (uint64_t *)*puVar7;
    }
    else {
      puVar7 = (uint64_t *)puVar7[2];
    }
  }
  puVar7 = puVar8;
  if ((char)uVar10 != '\0') {
    if (puVar8 == *(uint64_t **)*plStackX_8) {
      puVar7 = (uint64_t *)function_18aa30(plStackX_8,&plStackX_8,1,puVar8);
      *param_2 = *puVar7;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((int64_t)puVar8 + 0x19) == '\0') {
      puVar4 = (uint64_t *)*puVar8;
      puVar3 = puVar8;
      if (*(char *)((int64_t)*puVar8 + 0x19) == '\0') {
        do {
          puVar7 = puVar4;
          puVar4 = (uint64_t *)puVar7[2];
        } while (*(char *)((int64_t)puVar7[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar7 = puVar3;
          puVar3 = (uint64_t *)puVar7[1];
          if (*(char *)((int64_t)puVar3 + 0x19) != '\0') break;
        } while (puVar7 == (uint64_t *)*puVar3);
        if (*(char *)((int64_t)puVar7 + 0x19) == '\0') {
          puVar7 = puVar3;
        }
      }
    }
    else {
      puVar7 = (uint64_t *)puVar8[2];
    }
  }
  plVar9 = puVar7 + 4;
  uVar1 = param_4[2];
  if (0xf < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  uVar2 = puVar7[6];
  if (0xf < (uint64_t)puVar7[7]) {
    plVar9 = (int64_t *)*plVar9;
  }
  uVar11 = uVar2;
  if (uVar1 < uVar2) {
    uVar11 = uVar1;
  }
  stack_array_70[0] = uVar2;
  local_var_40 = uVar1;
  iVar6 = memcmp(plVar9,param_4,uVar11);
  if (iVar6 == 0) {
    if (uVar1 <= uVar2) {
LAB_18018aebc:
      plStackX_8 = (int64_t *)(param_5 + 0x20);
      SystemPerformanceOptimizer(param_5 + 0x40);
      SystemPerformanceOptimizer((int64_t *)(param_5 + 0x20));
      local_var_38 = 0x60;
      free(param_5,0x60);
      *param_2 = puVar7;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if (-1 < iVar6) goto LAB_18018aebc;
  puVar7 = (uint64_t *)function_18aa30(plStackX_8,stack_array_70,uVar10,puVar8);
  *param_2 = *puVar7;
  *(int8_t *)(param_2 + 1) = 1;
  return param_2;
}
uint64_t *
function_18af30(int64_t *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5,int64_t *param_6)
{
  char cVar1;
  int64_t *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  if (0x666666666666664 < (uint64_t)param_1[1]) {
    SystemFunction_000180188610(0x666666666666665,param_6);
    __Xlength_error_std__YAXPEBD_Z(&processed_var_9176_ptr);
    pcVar3 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (int64_t)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = param_6;
    *(int64_t **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(uint64_t **)*param_1) {
        *(int64_t **)*param_1 = param_6;
      }
      goto LAB_18018afb4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(uint64_t **)(lVar5 + 0x10)) goto LAB_18018afb4;
  }
  *(int64_t **)(lVar5 + 0x10) = param_6;
LAB_18018afb4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(int8_t *)(*(int64_t *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (int64_t *)param_6[1];
    plVar7 = *(int64_t **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((int64_t *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(lVar5 + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(int64_t **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (int64_t *)plVar6[2]) {
          SystemFunction_00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(int64_t **)(param_6[1] + 8);
        plVar7 = (int64_t *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(int64_t **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar7;
          plVar7[2] = (int64_t)plVar6;
        }
        else {
          plVar2 = (int64_t *)plVar6[1];
          if (plVar6 == (int64_t *)plVar2[2]) {
            plVar2[2] = (int64_t)plVar7;
            plVar7[2] = (int64_t)plVar6;
          }
          else {
            *plVar2 = (int64_t)plVar7;
            plVar7[2] = (int64_t)plVar6;
          }
        }
LAB_18018b129:
        plVar6[1] = (int64_t)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (int64_t *)*plVar6) {
          SystemFunction_00018008d250(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(int64_t **)(param_6[1] + 8);
        plVar7 = (int64_t *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(int64_t **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(int64_t **)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (uint64_t *)plVar6[1];
          if (plVar6 == (int64_t *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (int64_t)plVar6;
        goto LAB_18018b129;
      }
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(plVar7 + 3) = 1;
      *(int8_t *)(*(int64_t *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(int64_t **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}
uint64_t *
function_18b160(int64_t *param_1,uint64_t *param_2,char param_3,int *param_4,uint64_t param_5)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  bool bVar3;
  uint64_t *puVar4;
  int8_t astack_special_x_8 [8];
  puVar1 = (uint64_t *)*param_1;
  bVar3 = true;
  puVar2 = puVar1;
  puVar4 = (uint64_t *)puVar1[1];
  while (*(char *)((int64_t)puVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar3 = *param_4 < *(int *)((int64_t)puVar4 + 0x1c);
    }
    else {
      bVar3 = *param_4 <= *(int *)((int64_t)puVar4 + 0x1c);
    }
    puVar2 = puVar4;
    if (bVar3) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar4 = (uint64_t *)puVar4[2];
    }
  }
  if (bVar3) {
    if (puVar2 == (uint64_t *)*puVar1) {
      puVar1 = (uint64_t *)function_18af30(param_1,astack_special_x_8,1);
      *param_2 = *puVar1;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((int64_t)puVar2 + 0x19) == '\0') {
      puVar1 = (uint64_t *)*puVar2;
      if (*(char *)((int64_t)*puVar2 + 0x19) == '\0') {
        do {
          puVar2 = puVar1;
          puVar1 = (uint64_t *)puVar2[2];
        } while (*(char *)((int64_t)puVar2[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar4 = puVar2;
          puVar1 = (uint64_t *)puVar4[1];
          if (*(char *)((int64_t)puVar1 + 0x19) != '\0') break;
          puVar2 = puVar1;
        } while (puVar4 == (uint64_t *)*puVar1);
        puVar2 = puVar4;
        if (*(char *)((int64_t)puVar4 + 0x19) == '\0') {
          puVar2 = puVar1;
        }
      }
    }
    else {
      puVar2 = (uint64_t *)puVar2[2];
    }
  }
  if (*(int *)((int64_t)puVar2 + 0x1c) < *param_4) {
    puVar1 = (uint64_t *)function_18af30(param_1,astack_special_x_8);
    *param_2 = *puVar1;
    *(int8_t *)(param_2 + 1) = 1;
  }
  else {
    free(param_5,0x28);
    *param_2 = puVar2;
    *(int8_t *)(param_2 + 1) = 0;
  }
  return param_2;
}
int64_t function_18b2e0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  lVar1 = function_18a960();
  *(int16_t *)(lVar1 + 0x18) = 0;
  function_18b350(lVar1 + 0x20,param_2,param_3,param_4,uVar2);
  function_18b350(lVar1 + 0x40,param_2 + 0x20);
  return lVar1;
}
uint64_t * function_18b350(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (uVar1 < 0x10) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar1;
    param_1[3] = 0xf;
    return param_1;
  }
  uVar3 = uVar1 | 0xf;
  if (0x7fffffffffffffff < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar2 = SystemCore_SyscallHandler(uVar3 + 1);
  *param_1 = uVar2;
// WARNING: Subroutine does not return
  memcpy(uVar2,param_2,uVar1 + 1);
}
uint64_t *
function_18b3f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t *
function_18b430(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &ui_system_data_1136_ptr;
  if (param_1[0x16] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x16] = 0;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_18b4c0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  *puVar2 = &processed_var_5192_ptr;
  *puVar2 = &ui_system_data_1240_ptr;
  *(int32_t *)(puVar2 + 1) = 0;
  *(int32_t *)((int64_t)puVar2 + 0xc) = 0x539;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = 1;
  *(int32_t *)(puVar2 + 4) = 0x3e4ccccd;
  *(int32_t *)(puVar2 + 2) = 8;
  *(int32_t *)((int64_t)puVar2 + 0x14) = 8;
  *(int32_t *)(puVar2 + 3) = 8;
  *(int32_t *)((int64_t)puVar2 + 0x24) = 8;
  *(int32_t *)(puVar2 + 5) = 8;
  *(int32_t *)((int64_t)puVar2 + 0x2c) = 8;
  if (param_2 != 0) {
    *(int32_t *)(puVar2 + 1) = *(int32_t *)(param_2 + 8);
    uVar1 = *(uint64_t *)(param_2 + 0x14);
    *(uint64_t *)((int64_t)puVar2 + 0xc) = *(uint64_t *)(param_2 + 0xc);
    *(uint64_t *)((int64_t)puVar2 + 0x14) = uVar1;
    *(uint64_t *)((int64_t)puVar2 + 0x1c) = *(uint64_t *)(param_2 + 0x1c);
    *(int32_t *)((int64_t)puVar2 + 0x24) = *(int32_t *)(param_2 + 0x24);
    *(int32_t *)(puVar2 + 5) = *(int32_t *)(param_2 + 0x28);
    *(int32_t *)((int64_t)puVar2 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
  }
  return puVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address