#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part153.c - 2 个函数
// 函数: void function_7584e5(void)
void function_7584e5(void)
{
  int64_t unaff_RBX;
// WARNING: Subroutine does not return
  SystemMemoryProcessor(*(uint64_t *)(unaff_RBX + 8),8);
}
uint64_t function_75860a(void)
{
  return 0x1f;
}
uint64_t function_758620(int64_t *param_1,int32_t param_2,char param_3)
{
  uint uVar1;
  uint64_t uVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  char acStackX_20 [8];
  byte abStack_18 [16];
  uVar2 = function_74f900();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (param_1[0x3b] == 0) {
    return 0x1e;
  }
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,acStackX_20);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (acStackX_20[0] == (char)uVar2) {
    uVar2 = (**(code **)(*(int64_t *)param_1[0x3b] + 0x58))((int64_t *)param_1[0x3b],acStackX_20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((acStackX_20[0] != (char)uVar2) || ((*(uint *)(param_1 + 9) >> 0x12 & 1) != 0))
    goto LAB_1807586b3;
    uVar1 = *(uint *)(param_1 + 9) & 0xff3fffff;
  }
  else {
LAB_1807586b3:
    uVar1 = *(uint *)(param_1 + 9);
    if ((uVar1 >> 0x16 & 1) != 0) {
      if ((uVar1 >> 0x11 & 1) == 0) {
        *(uint *)(param_1 + 9) = uVar1 & 0xfffbffff | 0x800000;
        uVar2 = function_758960(param_1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      uVar1 = *(uint *)(param_1 + 9);
      goto LAB_1807586e9;
    }
    uVar1 = uVar1 | 0x400000;
  }
  *(uint *)(param_1 + 9) = uVar1;
LAB_1807586e9:
  if ((uVar1 >> 0x12 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x98))(param_1,abStack_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((abStack_18[0] & 8) == 0) {
      if (param_3 == '\0') {
        param_3 = (*(byte *)(param_1[0x3b] + 0x3c) & 0x60) == 0x60;
      }
      uVar2 = function_74dfc0(param_1,param_2,param_3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = (**(code **)(*(int64_t *)param_1[0x3b] + 0x38))((int64_t *)param_1[0x3b],param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = function_758bd0(param_1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((param_1[0x3b] == 0) || ((*(byte *)(param_1[0x3b] + 0x3c) & 0x80) == 0)) {
      if ((*(uint *)(param_1 + 9) & 0x1000004) == 0) {
        lVar5 = (int64_t)*(int *)(param_1[1] + 0x11400);
        if (lVar5 < 1) {
          return 0;
        }
        lVar4 = 0;
        pcVar3 = (char *)(param_1[1] + 0x110ec);
        while (*pcVar3 == '\0') {
          lVar4 = lVar4 + 1;
          pcVar3 = pcVar3 + 0x70;
          if (lVar5 <= lVar4) {
            return 0;
          }
        }
      }
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfefffffb;
      uVar2 = function_758960(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}
uint64_t function_758800(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  bool bVar6;
  char acStackX_20 [8];
  int8_t stack_array_48 [8];
  uint64_t local_var_40;
  uint64_t stack_array_38 [2];
  lVar1 = param_1[0xc];
  lVar5 = param_1[0xd];
  lVar2 = param_1[0xe];
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1,acStackX_20);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  param_1[0xe] = lVar2;
  lVar4 = lVar1;
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  param_1[0xc] = lVar4;
  if (param_3 != 0) {
    lVar5 = param_3;
  }
  param_1[0xd] = lVar5;
  if (param_2 != 0) {
    bVar6 = acStackX_20[0] == (char)uVar3;
    uVar3 = SystemFunction_00018075e610(lVar1,stack_array_38,&local_var_40,stack_array_48);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_762250(lVar4,stack_array_38[0],local_var_40,stack_array_48[0]);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_762b60(lVar4,*(int32_t *)((int64_t)param_1 + 0x34),1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = SystemCore_Initializer(lVar4,bVar6,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_762250(lVar1,0,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = function_762b60(lVar1,0x3f800000,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((lVar1 != lVar2) && (uVar3 = SystemCore_Initializer(lVar1,1), (int)uVar3 != 0)) {
      return uVar3;
    }
    if ((((int64_t *)param_1[0x3b] != (int64_t *)0x0) && (acStackX_20[0] != '\0')) &&
       (uVar3 = (**(code **)(*(int64_t *)param_1[0x3b] + 0x50))(), (int)uVar3 != 0)) {
      return uVar3;
    }
  }
  return 0;
}
uint64_t function_75883f(void)
{
  char in_AL;
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar2;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  bool in_ZF;
  int8_t stack_special_x_20;
  uint64_t local_var_28;
  uint64_t local_var_30;
  char local_var_88;
  *(int64_t *)(unaff_RDI + 0x70) = unaff_RBP;
  lVar2 = unaff_RBX;
  if (!in_ZF) {
    lVar2 = unaff_R14;
  }
  *(int64_t *)(unaff_RDI + 0x60) = lVar2;
  if (unaff_R12 != 0) {
    unaff_R15 = unaff_R12;
  }
  *(int64_t *)(unaff_RDI + 0x68) = unaff_R15;
  if (unaff_R14 != 0) {
    uVar1 = SystemFunction_00018075e610();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = function_762250(lVar2,local_var_30,local_var_28,stack_special_x_20);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = function_762b60(lVar2,*(int32_t *)(unaff_RDI + 0x34),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemCore_Initializer(lVar2,local_var_88 == in_AL,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = function_762250();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = function_762b60();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((unaff_RBX != unaff_RBP) && (uVar1 = SystemCore_Initializer(), (int)uVar1 != 0)) {
      return uVar1;
    }
    if (((*(int64_t **)(unaff_RDI + 0x1d8) != (int64_t *)0x0) && (local_var_88 != '\0')) &&
       (uVar1 = (**(code **)(**(int64_t **)(unaff_RDI + 0x1d8) + 0x50))(), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}
// 函数: void function_758944(void)
void function_758944(void)
{
  return;
}
uint64_t function_758960(int64_t param_1)
{
  float *pfVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int32_t uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  float fVar11;
  float afStackX_8 [2];
  uVar10 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0x40000) == 0) {
    lVar9 = *(int64_t *)(param_1 + 0x1d8);
    if ((lVar9 == 0) || (lVar8 = *(int64_t *)(param_1 + 0x20), lVar8 == 0)) {
      return 0x1e;
    }
    if ((*(uint *)(lVar9 + 0x3c) & 0x10000) == 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x28);
      function_755f40(param_1,afStackX_8,0);
      fVar11 = afStackX_8[0] * *(float *)(param_1 + 0x218);
      pfVar1 = (float *)(*(int64_t *)(param_1 + 8) + 0x11640);
      if ((fVar11 < *pfVar1 || fVar11 == *pfVar1) &&
         ((*(uint *)(*(int64_t *)(param_1 + 8) + 0x78) & 0x20000) != 0)) {
        uVar10 = 1;
      }
      if (((1.0 - *(float *)(param_1 + 0xd0)) * (1.0 - *(float *)(param_1 + 0xc0)) *
           *(float *)(lVar8 + 0x1f0) == 0.0) &&
         (0.0 < (1.0 - *(float *)(param_1 + 0xd4)) * (1.0 - *(float *)(param_1 + 0xc4)) *
                *(float *)(lVar8 + 500))) {
        uVar10 = 0;
      }
      uVar6 = 0;
      if (*(int *)(param_1 + 0x1e0) != 0) {
        uVar6 = uVar10;
      }
      function_755c70(param_1,uVar6);
      iVar7 = *(int *)(param_1 + 0x1e0) * 0x2711;
      iVar3 = *(int *)(param_1 + 0x1e4);
      iVar4 = *(int *)(param_1 + 0x1e8);
      iVar5 = (iVar7 - (int)(fVar11 * 1000.0)) + 10000;
      *(int *)(param_1 + 0x1e4) = iVar5;
      *(int *)(param_1 + 0x1e8) = (iVar7 - (int)(afStackX_8[0] * 10000.0)) + 10000;
      if (iVar5 != iVar3) {
        plVar2 = (int64_t *)(param_1 + 400);
        **(int64_t **)(param_1 + 0x198) = *plVar2;
        *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(param_1 + 0x198);
        *(int64_t **)(param_1 + 0x198) = plVar2;
        *plVar2 = (int64_t)plVar2;
        *(int32_t *)(param_1 + 0x1a8) = 0xffffffff;
        *(uint64_t *)(param_1 + 0x1a0) = 0;
        lVar8 = *(int64_t *)(param_1 + 8) + 0x650;
        SystemFunction_000180755660(plVar2,lVar8,lVar8,*(int32_t *)(param_1 + 0x1e4));
        *(int64_t *)(param_1 + 0x1a0) = param_1;
      }
      if (((lVar9 != 0) && (*(int64_t *)(lVar9 + 0x118) != 0)) &&
         (*(int *)(param_1 + 0x1e8) != iVar4)) {
        plVar2 = (int64_t *)(param_1 + 0x1b0);
        **(int64_t **)(param_1 + 0x1b8) = *plVar2;
        *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(param_1 + 0x1b8);
        *(int64_t **)(param_1 + 0x1b8) = plVar2;
        *plVar2 = (int64_t)plVar2;
        *(int32_t *)(param_1 + 0x1c8) = 0xffffffff;
        *(uint64_t *)(param_1 + 0x1c0) = 0;
        lVar9 = *(int64_t *)(lVar9 + 0x118) + 0x40;
        SystemFunction_000180755660(plVar2,lVar9,lVar9,*(int32_t *)(param_1 + 0x1e8));
        *(int64_t *)(param_1 + 0x1c0) = param_1;
      }
    }
  }
  return 0;
}
uint64_t function_7589ac(uint64_t param_1)
{
  float *pfVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int64_t in_RAX;
  int iVar6;
  int8_t uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int8_t unaff_DIL;
  float fVar11;
  float fVar12;
  float local_buffer_50;
  lVar10 = *(int64_t *)(in_RAX + 0x28);
  function_755f40(param_1,&local_buffer_00000050,0);
  fVar5 = local_buffer_50;
  fVar12 = local_buffer_50 * *(float *)(unaff_RBX + 0x218);
  pfVar1 = (float *)(*(int64_t *)(unaff_RBX + 8) + 0x11640);
  fVar11 = (1.0 - *(float *)(unaff_RBX + 0xd4)) * (1.0 - *(float *)(unaff_RBX + 0xc4)) *
           *(float *)(unaff_RSI + 500);
  if ((fVar12 < *pfVar1 || fVar12 == *pfVar1) &&
     ((*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x78) & 0x20000) != 0)) {
    unaff_DIL = 1;
  }
  if (((1.0 - *(float *)(unaff_RBX + 0xd0)) * (1.0 - *(float *)(unaff_RBX + 0xc0)) *
       *(float *)(unaff_RSI + 0x1f0) == 0.0) && (0.0 < fVar11)) {
    unaff_DIL = 0;
  }
  uVar7 = 0;
  if (*(int *)(unaff_RBX + 0x1e0) != 0) {
    uVar7 = unaff_DIL;
  }
  function_755c70(fVar11,uVar7);
  iVar8 = *(int *)(unaff_RBX + 0x1e0) * 0x2711;
  iVar3 = *(int *)(unaff_RBX + 0x1e4);
  iVar4 = *(int *)(unaff_RBX + 0x1e8);
  iVar6 = (iVar8 - (int)(fVar12 * 1000.0)) + 10000;
  *(int *)(unaff_RBX + 0x1e4) = iVar6;
  *(int *)(unaff_RBX + 0x1e8) = (iVar8 - (int)(fVar5 * 10000.0)) + 10000;
  if (iVar6 != iVar3) {
    plVar2 = (int64_t *)(unaff_RBX + 400);
    **(int64_t **)(unaff_RBX + 0x198) = *plVar2;
    *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_RBX + 0x198);
    *(int64_t **)(unaff_RBX + 0x198) = plVar2;
    *plVar2 = (int64_t)plVar2;
    *(int32_t *)(unaff_RBX + 0x1a8) = 0xffffffff;
    *(uint64_t *)(unaff_RBX + 0x1a0) = 0;
    lVar9 = *(int64_t *)(unaff_RBX + 8) + 0x650;
    SystemFunction_000180755660(plVar2,lVar9,lVar9,*(int32_t *)(unaff_RBX + 0x1e4));
    *(int64_t *)(unaff_RBX + 0x1a0) = unaff_RBX;
  }
  if (((lVar10 != 0) && (*(int64_t *)(lVar10 + 0x118) != 0)) &&
     (*(int *)(unaff_RBX + 0x1e8) != iVar4)) {
    plVar2 = (int64_t *)(unaff_RBX + 0x1b0);
    **(int64_t **)(unaff_RBX + 0x1b8) = *plVar2;
    *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_RBX + 0x1b8);
    *(int64_t **)(unaff_RBX + 0x1b8) = plVar2;
    *plVar2 = (int64_t)plVar2;
    *(int32_t *)(unaff_RBX + 0x1c8) = 0xffffffff;
    *(uint64_t *)(unaff_RBX + 0x1c0) = 0;
    lVar10 = *(int64_t *)(lVar10 + 0x118) + 0x40;
    SystemFunction_000180755660(plVar2,lVar10,lVar10,*(int32_t *)(unaff_RBX + 0x1e8));
    *(int64_t *)(unaff_RBX + 0x1c0) = unaff_RBX;
  }
  return 0;
}
uint64_t function_7589bd(void)
{
  float *pfVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int8_t uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int8_t unaff_DIL;
  float fVar9;
  float fVar10;
  float local_buffer_50;
  function_755f40();
  fVar10 = local_buffer_50 * *(float *)(unaff_RBX + 0x218);
  pfVar1 = (float *)(*(int64_t *)(unaff_RBX + 8) + 0x11640);
  fVar9 = (1.0 - *(float *)(unaff_RBX + 0xd4)) * (1.0 - *(float *)(unaff_RBX + 0xc4)) *
          *(float *)(unaff_RSI + 500);
  if ((fVar10 < *pfVar1 || fVar10 == *pfVar1) &&
     ((*(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x78) & 0x20000) != 0)) {
    unaff_DIL = 1;
  }
  if (((1.0 - *(float *)(unaff_RBX + 0xd0)) * (1.0 - *(float *)(unaff_RBX + 0xc0)) *
       *(float *)(unaff_RSI + 0x1f0) == 0.0) && (0.0 < fVar9)) {
    unaff_DIL = 0;
  }
  uVar6 = 0;
  if (*(int *)(unaff_RBX + 0x1e0) != 0) {
    uVar6 = unaff_DIL;
  }
  function_755c70(fVar9,uVar6);
  iVar7 = *(int *)(unaff_RBX + 0x1e0) * 0x2711;
  iVar3 = *(int *)(unaff_RBX + 0x1e4);
  iVar4 = *(int *)(unaff_RBX + 0x1e8);
  iVar5 = (iVar7 - (int)(fVar10 * 1000.0)) + 10000;
  *(int *)(unaff_RBX + 0x1e4) = iVar5;
  *(int *)(unaff_RBX + 0x1e8) = (iVar7 - (int)(local_buffer_50 * 10000.0)) + 10000;
  if (iVar5 != iVar3) {
    plVar2 = (int64_t *)(unaff_RBX + 400);
    **(int64_t **)(unaff_RBX + 0x198) = *plVar2;
    *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_RBX + 0x198);
    *(int64_t **)(unaff_RBX + 0x198) = plVar2;
    *plVar2 = (int64_t)plVar2;
    *(int32_t *)(unaff_RBX + 0x1a8) = 0xffffffff;
    *(uint64_t *)(unaff_RBX + 0x1a0) = 0;
    lVar8 = *(int64_t *)(unaff_RBX + 8) + 0x650;
    SystemFunction_000180755660(plVar2,lVar8,lVar8,*(int32_t *)(unaff_RBX + 0x1e4));
    *(int64_t *)(unaff_RBX + 0x1a0) = unaff_RBX;
  }
  if (((unaff_RBP != 0) && (*(int64_t *)(unaff_RBP + 0x118) != 0)) &&
     (*(int *)(unaff_RBX + 0x1e8) != iVar4)) {
    plVar2 = (int64_t *)(unaff_RBX + 0x1b0);
    **(int64_t **)(unaff_RBX + 0x1b8) = *plVar2;
    *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_RBX + 0x1b8);
    *(int64_t **)(unaff_RBX + 0x1b8) = plVar2;
    *plVar2 = (int64_t)plVar2;
    *(int32_t *)(unaff_RBX + 0x1c8) = 0xffffffff;
    *(uint64_t *)(unaff_RBX + 0x1c0) = 0;
    lVar8 = *(int64_t *)(unaff_RBP + 0x118) + 0x40;
    SystemFunction_000180755660(plVar2,lVar8,lVar8,*(int32_t *)(unaff_RBX + 0x1e8));
    *(int64_t *)(unaff_RBX + 0x1c0) = unaff_RBX;
  }
  return 0;
}
uint64_t function_758acd(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  plVar1 = (int64_t *)(unaff_RBX + 400);
  **(int64_t **)(unaff_RBX + 0x198) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RBX + 0x198);
  *(int64_t **)(unaff_RBX + 0x198) = plVar1;
  *plVar1 = (int64_t)plVar1;
  *(int32_t *)(unaff_RBX + 0x1a8) = 0xffffffff;
  *(int64_t *)(unaff_RBX + 0x1a0) = unaff_RSI;
  lVar2 = *(int64_t *)(unaff_RBX + 8) + 0x650;
  SystemFunction_000180755660(plVar1,lVar2,lVar2,*(int32_t *)(unaff_RBX + 0x1e4));
  *(int64_t *)(unaff_RBX + 0x1a0) = unaff_RBX;
  if (((unaff_RBP != 0) && (*(int64_t *)(unaff_RBP + 0x118) != unaff_RSI)) &&
     (*(int *)(unaff_RBX + 0x1e8) != unaff_EDI)) {
    plVar1 = (int64_t *)(unaff_RBX + 0x1b0);
    **(int64_t **)(unaff_RBX + 0x1b8) = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RBX + 0x1b8);
    *(int64_t **)(unaff_RBX + 0x1b8) = plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int32_t *)(unaff_RBX + 0x1c8) = 0xffffffff;
    *(int64_t *)(unaff_RBX + 0x1c0) = unaff_RSI;
    lVar2 = *(int64_t *)(unaff_RBP + 0x118) + 0x40;
    SystemFunction_000180755660(plVar1,lVar2,lVar2,*(int32_t *)(unaff_RBX + 0x1e8));
    *(int64_t *)(unaff_RBX + 0x1c0) = unaff_RBX;
  }
  return 0;
}
uint64_t function_758b86(void)
{
  return 0;
}
uint64_t function_758bd0(int64_t param_1,char param_2)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  bool bVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint stack_special_x_8;
  int8_t astack_special_x_18 [4];
  uint stack_special_x_1c;
  plVar7 = *(int64_t **)(param_1 + 0x1d8);
  lVar2 = plVar7[5];
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(uint64_t **)(lVar2 + 0xf0) != (uint64_t *)0x0) && (*(int *)(lVar2 + 0xe4) != 0)) {
    if (*(int64_t *)(param_1 + 0x1f0) != 0) goto LAB_180758c38;
    *(uint64_t *)(param_1 + 0x1f0) = **(uint64_t **)(lVar2 + 0xf0);
  }
  if (*(int64_t *)(param_1 + 0x1f0) == 0) {
    return 0;
  }
LAB_180758c38:
  uVar10 = stack_special_x_8;
  if ((plVar7 != (int64_t *)0x0) &&
     (((plVar7[5] != 0 || (uVar10 = stack_special_x_8, plVar7[6] != 0)) &&
      (iVar6 = (**(code **)(*plVar7 + 0x80))(plVar7,astack_special_x_18), uVar10 = stack_special_x_8, iVar6 == 0))))
  {
    fVar1 = *(float *)(param_1 + 0x22c);
    uVar10 = stack_special_x_1c;
    if (param_2 == '\0') {
      bVar5 = false;
      if (((0.0 < fVar1) && (stack_special_x_1c < *(uint *)(param_1 + 0x1f8))) ||
         ((fVar1 < 0.0 && (*(uint *)(param_1 + 0x1f8) < stack_special_x_1c)))) {
        bVar5 = true;
      }
      while (((fVar1 = *(float *)(param_1 + 0x22c), 0.0 < fVar1 &&
              (*(uint *)(*(int64_t *)(param_1 + 0x1f0) + 0x30) < stack_special_x_1c)) ||
             (((fVar1 < 0.0 && (stack_special_x_1c < *(uint *)(*(int64_t *)(param_1 + 0x1f0) + 0x30))) ||
              (bVar5))))) {
        puVar4 = *(uint64_t **)(param_1 + 0x1f0);
        if (0.0 < fVar1) {
          puVar9 = puVar4;
          if (puVar4 != *(uint64_t **)(lVar2 + 0xf8)) {
            puVar9 = (uint64_t *)*puVar4;
            if ((((*(int64_t *)(lVar2 + 0xa8) == 0) ||
                 ((uint)*(ushort *)((int64_t)puVar4 + 0x34) == *(uint *)(lVar2 + 0xc0))) &&
                (*(int64_t *)(param_1 + 0x170) != 0)) &&
               (uVar8 = function_74c3f0(param_1,*(uint64_t *)(param_1 + 0x50),0,2,
                                      *(int16_t *)((int64_t)puVar4 + 0x36),0), (int)uVar8 != 0))
            {
              return uVar8;
            }
            *(uint64_t **)(param_1 + 0x1f0) = puVar9;
          }
          if ((bVar5) && (puVar9 == *(uint64_t **)(lVar2 + 0xf8))) {
            bVar5 = false;
            *(uint64_t *)(param_1 + 0x1f0) = **(uint64_t **)(lVar2 + 0xf0);
          }
        }
        else {
          puVar9 = puVar4;
          if (puVar4 != *(uint64_t **)(lVar2 + 0xf0)) {
            puVar9 = (uint64_t *)puVar4[1];
            if (((*(int64_t *)(lVar2 + 0xa8) == 0) ||
                ((uint)*(ushort *)((int64_t)puVar4 + 0x34) == *(uint *)(lVar2 + 0xc0))) &&
               ((*(int64_t *)(param_1 + 0x170) != 0 &&
                (uVar8 = function_74c3f0(param_1,*(uint64_t *)(param_1 + 0x50),0,2,
                                       *(int16_t *)((int64_t)puVar4 + 0x36),0), (int)uVar8 != 0)
                ))) {
              return uVar8;
            }
            *(uint64_t **)(param_1 + 0x1f0) = puVar9;
          }
          if ((bVar5) && (puVar9 == *(uint64_t **)(lVar2 + 0xf0))) {
            bVar5 = false;
            *(uint64_t *)(param_1 + 0x1f0) = *(uint64_t *)(*(int64_t *)(lVar2 + 0xf8) + 8);
          }
        }
      }
    }
    else {
      if (fVar1 <= 0.0) {
        uVar8 = *(uint64_t *)(*(int64_t *)(lVar2 + 0xf8) + 8);
      }
      else {
        uVar8 = **(uint64_t **)(lVar2 + 0xf0);
      }
      *(uint64_t *)(param_1 + 0x1f0) = uVar8;
      while (((0.0 < fVar1 &&
              (plVar7 = *(int64_t **)(param_1 + 0x1f0), *(uint *)(plVar7 + 6) < stack_special_x_1c)) ||
             ((fVar1 < 0.0 &&
              (plVar7 = *(int64_t **)(param_1 + 0x1f0), stack_special_x_1c < *(uint *)(plVar7 + 6)))))) {
        if (0.0 < fVar1) {
          if ((stack_special_x_1c <= *(uint *)(plVar7 + 6)) ||
             (lVar3 = *plVar7, *(int64_t *)(param_1 + 0x1f0) = lVar3,
             lVar3 == *(int64_t *)(lVar2 + 0xf8))) break;
        }
        else if ((*(uint *)(plVar7 + 6) <= stack_special_x_1c) ||
                (lVar3 = plVar7[1], *(int64_t *)(param_1 + 0x1f0) = lVar3,
                lVar3 == *(int64_t *)(lVar2 + 0xf0))) break;
      }
    }
  }
  *(uint *)(param_1 + 0x1f8) = uVar10;
  return 0;
}
uint64_t function_758ed0(uint param_1,int64_t *param_2,int64_t *param_3)
{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  int64_t lStackX_8;
  uVar6 = param_1 >> 0x11 & 0xfff;
  uVar5 = param_1 >> 1 & 0xffff;
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  *param_2 = 0;
  if ((uVar5 != 0) &&
     (iVar2 = SystemFunction_000180746670(param_1 >> 0x1d,&lStackX_8), lVar4 = lStackX_8, iVar2 == 0)) {
    if (*(int64_t *)(lStackX_8 + 0x1e8) == 0) {
      return 0x43;
    }
    if ((int)uVar6 < *(int *)(lStackX_8 + 0x1e0)) {
      if (param_3 != (int64_t *)0x0) {
        if (*param_3 != 0) {
          return 0x1c;
        }
        uVar3 = function_743c40(lStackX_8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *param_3 = lVar4;
      }
      lVar4 = (uint64_t)uVar6 * 0x230 + *(int64_t *)(lStackX_8 + 0x1e8);
      if ((uVar5 == 0xffff) || (uVar1 = *(uint64_t *)(lVar4 + 0x50), uVar1 == param_1)) {
        *param_2 = lVar4;
        return 0;
      }
      if (1 < (uVar1 >> 1 & 0xffff) - (uint64_t)uVar5) {
        return 3;
      }
    }
  }
  return 0x1e;
}
uint64_t function_758f0b(uint param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint unaff_EDI;
  int64_t *unaff_R14;
  uint64_t unaff_R15;
  int64_t local_var_40;
  *param_2 = 0;
  if (((int)unaff_RBP != 0) &&
     (iVar2 = SystemFunction_000180746670(param_1 >> 0x1d,&local_buffer_00000040), lVar4 = local_var_40,
     iVar2 == 0)) {
    if (*(int64_t *)(local_var_40 + 0x1e8) == 0) {
      return 0x43;
    }
    if ((int)unaff_EDI < *(int *)(local_var_40 + 0x1e0)) {
      if (unaff_RSI != (int64_t *)0x0) {
        if (*unaff_RSI != 0) {
          return 0x1c;
        }
        uVar3 = function_743c40(local_var_40);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *unaff_RSI = lVar4;
      }
      lVar4 = (uint64_t)unaff_EDI * 0x230 + *(int64_t *)(local_var_40 + 0x1e8);
      if (((int)unaff_RBP == 0xffff) ||
         (uVar1 = *(uint64_t *)(lVar4 + 0x50), uVar1 == (unaff_R15 & 0xffffffff))) {
        *unaff_R14 = lVar4;
        return 0;
      }
      if (1 < (uVar1 >> 1 & 0xffff) - unaff_RBP) {
        return 3;
      }
    }
  }
  return 0x1e;
}