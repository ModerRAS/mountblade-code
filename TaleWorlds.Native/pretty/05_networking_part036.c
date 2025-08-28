#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part036.c - 3 个函数

// 函数: void FUN_18085f879(void)
void FUN_18085f879(void)

{
  return;
}



uint64_t FUN_18085f893(void)

{
  uint64_t uVar1;
  uint unaff_ESI;
  int64_t unaff_RDI;
  int8_t uStack0000000000000028;
  
  uStack0000000000000028 = 1;
  uVar1 = FUN_180863930();
  if ((int)uVar1 == 0) {
    *(uint *)(unaff_RDI + 0x1c) = *(uint *)(unaff_RDI + 0x1c) & ~unaff_ESI;
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18085f8bb(void)

{
  return 0x1c;
}



uint64_t
FUN_18085f8d0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int8_t param_4,
             int8_t param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  for (uVar2 = *param_3;
      (*param_3 <= uVar2 && (uVar2 < *param_3 + (int64_t)(int)param_3[1] * 0x18));
      uVar2 = uVar2 + 0x18) {
    uVar1 = FUN_18085f790(param_1,uVar2,param_2,param_4,1,param_5);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_18085f960(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t lStack_38;
  int64_t lStack_30;
  int64_t lStack_28;
  int64_t lStack_20;
  
  puVar1 = (uint64_t *)(param_1 + 0x490);
  puVar2 = (uint64_t *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      return 0;
    }
    if ((*(uint *)((int64_t)puVar2 + 0x1c) >> 1 & 1) != 0) {
      (**(code **)(*(int64_t *)puVar2[2] + 0x30))((int64_t *)puVar2[2],&lStack_28);
      puVar3 = (uint64_t *)*puVar1;
      puVar4 = puVar3;
      while( true ) {
        if (puVar3 == puVar1) {
          return 0x1c;
        }
        (**(code **)(*(int64_t *)puVar4[2] + 0x30))((int64_t *)puVar4[2],&lStack_38);
        if ((lStack_38 == lStack_28) && (lStack_30 == lStack_20)) break;
        if (puVar4 != puVar1) {
          puVar3 = (uint64_t *)*puVar4;
          puVar4 = puVar3;
        }
      }
      if (puVar4 == (uint64_t *)0x0) {
        return 0x1c;
      }
      if ((*(byte *)((int64_t)puVar4 + 0x1c) & 4) != 0) {
        puVar4[4] = 0;
        *(uint *)((int64_t)puVar4 + 0x1c) = *(uint *)((int64_t)puVar4 + 0x1c) & 0xfffffffb;
        uVar5 = FUN_180863930(param_1,puVar4,param_2,0,0,1);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint *)((int64_t)puVar4 + 0x1c) = *(uint *)((int64_t)puVar4 + 0x1c) & 0xfffffeff;
      }
    }
    puVar2 = (uint64_t *)*puVar2;
  } while( true );
}



uint64_t * FUN_18085fa90(int64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar4 = (**(code **)*param_2)(param_2);
  if ((*(int64_t *)(lVar4 + 0x10) == lVar2) && (*(int64_t *)(lVar4 + 0x18) == lVar3)) {
    return param_2;
  }
  param_2 = param_2 + 10;
  puVar1 = (uint64_t *)*param_2;
  while( true ) {
    if (puVar1 == param_2) {
      return (uint64_t *)0x0;
    }
    puVar5 = (uint64_t *)FUN_18085fa90(param_1,puVar1[2]);
    if (puVar5 != (uint64_t *)0x0) break;
    if (puVar1 == param_2) {
      return (uint64_t *)0x0;
    }
    puVar1 = (uint64_t *)*puVar1;
  }
  return puVar5;
}



uint64_t FUN_18085fb30(int64_t param_1)

{
  uint uVar1;
  uint64_t uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) = uVar1 | 4;
  if ((((uVar1 & 0x80) == 0) && (*(char *)(*(int64_t *)(param_1 + 0x2c8) + 0x780) == '\0')) &&
     (uVar2 = FUN_1808b81c0(*(int64_t *)(param_1 + 0x2c8) + 0x3c8,param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t
thunk_FUN_18085fbb0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                   int32_t param_5)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uStackX_8;
  int64_t alStack_38 [2];
  
  alStack_38[0] = 0;
  uStackX_8 = 0;
  uVar6 = FUN_18073a200(*(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4c0),&uStackX_8);
  if (((int)uVar6 == 0) && (uVar6 = FUN_18073c4c0(uStackX_8,alStack_38,0), (int)uVar6 == 0)) {
    cVar4 = FUN_180863210(param_4,0,0);
    if (cVar4 == '\0') {
      plVar2 = (int64_t *)(param_1 + 0x4e0);
      iVar1 = *(int *)(param_1 + 0x4e8);
      uVar8 = (int)*(uint *)(param_1 + 0x4ec) >> 0x1f;
      iVar5 = (*(uint *)(param_1 + 0x4ec) ^ uVar8) - uVar8;
      lVar12 = (uint64_t)(uint)(*(int *)(*(int64_t *)(param_1 + 0x2c8) + 0x778) * 2) +
               alStack_38[0];
      iVar7 = iVar1 + 1;
      if (iVar5 < iVar7) {
        iVar9 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar7;
        if (iVar7 <= iVar9) {
          iVar5 = iVar9;
        }
        if (iVar5 < 1) {
          iVar9 = 1;
        }
        else if (iVar9 < iVar7) {
          iVar9 = iVar7;
        }
        uVar6 = FUN_180861ce0(plVar2,iVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      lVar3 = *plVar2;
      lVar11 = (int64_t)iVar1 * 0x38;
      *(uint64_t *)(lVar11 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 8 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x10 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x18 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x20 + lVar3) = 0;
      *(int32_t *)(lVar11 + 0x28 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x30 + lVar3) = 0;
      *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
      lVar3 = *plVar2;
      uVar6 = param_2[1];
      *(uint64_t *)(lVar3 + lVar11) = *param_2;
      ((uint64_t *)(lVar3 + lVar11))[1] = uVar6;
      if (*(int *)(param_3 + 1) < 1) {
        puVar10 = &system_buffer_ptr;
      }
      else {
        puVar10 = (void *)*param_3;
      }
      uVar6 = FUN_18084e110(lVar3 + 0x10 + lVar11,puVar10);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(uint64_t *)(lVar3 + 0x20 + lVar11) = param_4;
      *(int32_t *)(lVar3 + 0x28 + lVar11) = param_5;
      *(int64_t *)(lVar3 + 0x30 + lVar11) = lVar12;
    }
    else {
      plVar2 = *(int64_t **)(param_1 + 0x480);
      if ((plVar2 != (int64_t *)0x0) &&
         (uVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,param_3,param_4,param_5),
         (int)uVar6 != 0)) {
        return uVar6;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t
FUN_18085fbb0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
             int32_t param_5)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uStackX_8;
  int64_t alStack_38 [2];
  
  alStack_38[0] = 0;
  uStackX_8 = 0;
  uVar6 = FUN_18073a200(*(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4c0),&uStackX_8);
  if (((int)uVar6 == 0) && (uVar6 = FUN_18073c4c0(uStackX_8,alStack_38,0), (int)uVar6 == 0)) {
    cVar4 = FUN_180863210(param_4,0,0);
    if (cVar4 == '\0') {
      plVar2 = (int64_t *)(param_1 + 0x4e0);
      iVar1 = *(int *)(param_1 + 0x4e8);
      uVar8 = (int)*(uint *)(param_1 + 0x4ec) >> 0x1f;
      iVar5 = (*(uint *)(param_1 + 0x4ec) ^ uVar8) - uVar8;
      lVar12 = (uint64_t)(uint)(*(int *)(*(int64_t *)(param_1 + 0x2c8) + 0x778) * 2) +
               alStack_38[0];
      iVar7 = iVar1 + 1;
      if (iVar5 < iVar7) {
        iVar9 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar7;
        if (iVar7 <= iVar9) {
          iVar5 = iVar9;
        }
        if (iVar5 < 1) {
          iVar9 = 1;
        }
        else if (iVar9 < iVar7) {
          iVar9 = iVar7;
        }
        uVar6 = FUN_180861ce0(plVar2,iVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      lVar3 = *plVar2;
      lVar11 = (int64_t)iVar1 * 0x38;
      *(uint64_t *)(lVar11 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 8 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x10 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x18 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x20 + lVar3) = 0;
      *(int32_t *)(lVar11 + 0x28 + lVar3) = 0;
      *(uint64_t *)(lVar11 + 0x30 + lVar3) = 0;
      *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
      lVar3 = *plVar2;
      uVar6 = param_2[1];
      *(uint64_t *)(lVar3 + lVar11) = *param_2;
      ((uint64_t *)(lVar3 + lVar11))[1] = uVar6;
      if (*(int *)(param_3 + 1) < 1) {
        puVar10 = &system_buffer_ptr;
      }
      else {
        puVar10 = (void *)*param_3;
      }
      uVar6 = FUN_18084e110(lVar3 + 0x10 + lVar11,puVar10);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      *(uint64_t *)(lVar3 + 0x20 + lVar11) = param_4;
      *(int32_t *)(lVar3 + 0x28 + lVar11) = param_5;
      *(int64_t *)(lVar3 + 0x30 + lVar11) = lVar12;
    }
    else {
      plVar2 = *(int64_t **)(param_1 + 0x480);
      if ((plVar2 != (int64_t *)0x0) &&
         (uVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,param_3,param_4,param_5),
         (int)uVar6 != 0)) {
        return uVar6;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_18085fc0e(void)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *puVar11;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar12;
  uint64_t *unaff_R12;
  uint64_t *unaff_R15;
  int64_t in_stack_00000030;
  int32_t in_stack_00000090;
  
  cVar5 = FUN_180863210();
  if (cVar5 == '\0') {
    plVar1 = (int64_t *)(unaff_RSI + 0x4e0);
    iVar2 = *(int *)(unaff_RSI + 0x4e8);
    iVar3 = *(int *)(*(int64_t *)(unaff_RSI + 0x2c8) + 0x778);
    uVar9 = (int)*(uint *)(unaff_RSI + 0x4ec) >> 0x1f;
    iVar6 = (*(uint *)(unaff_RSI + 0x4ec) ^ uVar9) - uVar9;
    iVar8 = iVar2 + 1;
    if (iVar6 < iVar8) {
      iVar10 = (int)((float)iVar6 * 1.5);
      iVar6 = iVar8;
      if (iVar8 <= iVar10) {
        iVar6 = iVar10;
      }
      if (iVar6 < 1) {
        iVar10 = 1;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      uVar7 = FUN_180861ce0(plVar1,iVar10);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    lVar4 = *plVar1;
    lVar12 = (int64_t)iVar2 * 0x38;
    *(uint64_t *)(lVar12 + lVar4) = 0;
    *(uint64_t *)(lVar12 + 8 + lVar4) = 0;
    *(uint64_t *)(lVar12 + 0x10 + lVar4) = unaff_RBX;
    *(uint64_t *)(lVar12 + 0x18 + lVar4) = unaff_RBX;
    *(uint64_t *)(lVar12 + 0x20 + lVar4) = unaff_RBX;
    *(int *)(lVar12 + 0x28 + lVar4) = (int)unaff_RBX;
    *(uint64_t *)(lVar12 + 0x30 + lVar4) = unaff_RBX;
    *(int *)(unaff_RSI + 0x4e8) = *(int *)(unaff_RSI + 0x4e8) + 1;
    lVar4 = *plVar1;
    uVar7 = unaff_R12[1];
    *(uint64_t *)(lVar4 + lVar12) = *unaff_R12;
    ((uint64_t *)(lVar4 + lVar12))[1] = uVar7;
    if (*(int *)(unaff_R15 + 1) < 1) {
      puVar11 = &system_buffer_ptr;
    }
    else {
      puVar11 = (void *)*unaff_R15;
    }
    uVar7 = FUN_18084e110(lVar4 + 0x10 + lVar12,puVar11);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *(uint64_t *)(lVar4 + 0x20 + lVar12) = unaff_RBP;
    *(int32_t *)(lVar4 + 0x28 + lVar12) = in_stack_00000090;
    *(uint64_t *)(lVar4 + 0x30 + lVar12) = (uint64_t)(uint)(iVar3 * 2) + in_stack_00000030;
  }
  else if ((*(int64_t **)(unaff_RSI + 0x480) != (int64_t *)0x0) &&
          (uVar7 = (**(code **)(**(int64_t **)(unaff_RSI + 0x480) + 0x10))(), (int)uVar7 != 0)) {
    return uVar7;
  }
  return 0;
}





// 函数: void FUN_18085fd51(void)
void FUN_18085fd51(void)

{
  return;
}



int64_t FUN_18085fdf0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  
  plVar1 = (int64_t *)(param_1 + 0x240);
  plVar5 = (int64_t *)0x0;
  plVar4 = (int64_t *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar3 = plVar4 + 3;
  if (plVar4 == (int64_t *)0x0) {
    plVar3 = plVar5;
  }
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    plVar4 = plVar3 + 4;
    if (plVar3 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x38;
    }
    lVar2 = *(int64_t *)(*plVar4 + 0x18);
    if ((*(int64_t *)(lVar2 + 0x10) == *param_2) && (*(int64_t *)(lVar2 + 0x18) == param_2[1]))
    break;
    if (plVar3 == plVar1) {
      return 0;
    }
    plVar4 = (int64_t *)(*plVar3 + -0x18);
    if (*plVar3 == 0) {
      plVar4 = plVar5;
    }
    plVar3 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar3 = plVar4 + 3;
    }
  }
  return *plVar4;
}



uint64_t * FUN_18085fea0(int64_t param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lStack_18;
  int64_t lStack_10;
  
  puVar1 = (uint64_t *)(param_1 + 0x490);
  puVar2 = (uint64_t *)*puVar1;
  puVar3 = puVar2;
  while( true ) {
    if (puVar3 == puVar1) {
      return (uint64_t *)0x0;
    }
    (**(code **)(*(int64_t *)puVar2[2] + 0x30))((int64_t *)puVar2[2],&lStack_18);
    if ((lStack_18 == *param_2) && (lStack_10 == param_2[1])) break;
    if (puVar2 != puVar1) {
      puVar2 = (uint64_t *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return puVar2;
}



uint64_t FUN_18085ff30(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x480);
  if (puVar1 != (uint64_t *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_1,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_18085fff0(*(uint64_t *)(param_1 + 0x2b0));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_18085ff70(int64_t param_1)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0x480) != 0) {
    uVar1 = FUN_1808600b0(*(uint64_t *)(param_1 + 0x2b0));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (**(code **)**(uint64_t **)(param_1 + 0x480))
                      (*(uint64_t **)(param_1 + 0x480),param_1,2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_18085ffc0(int64_t param_1,int32_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x480);
  if ((puVar1 != (uint64_t *)0x0) &&
     (uVar2 = (**(code **)*puVar1)(puVar1,param_1,param_2,param_3), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



uint64_t FUN_18085fff0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  for (puVar2 = *(uint64_t **)(param_1 + 0x80);
      (*(uint64_t **)(param_1 + 0x80) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b4ec0(*puVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  for (puVar2 = *(uint64_t **)(param_1 + 0x90);
      (*(uint64_t **)(param_1 + 0x90) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b4ec0(*puVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  puVar2 = *(uint64_t **)(param_1 + 0x50);
  while( true ) {
    if (puVar2 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    uVar1 = FUN_18085fff0(puVar2[2]);
    if ((int)uVar1 != 0) break;
    if (puVar2 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    puVar2 = (uint64_t *)*puVar2;
  }
  return uVar1;
}



uint64_t FUN_1808600b0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  for (puVar2 = *(uint64_t **)(param_1 + 0x80);
      (*(uint64_t **)(param_1 + 0x80) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b4f00(*puVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  for (puVar2 = *(uint64_t **)(param_1 + 0x90);
      (*(uint64_t **)(param_1 + 0x90) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar2 = puVar2 + 1)
  {
    uVar1 = FUN_1808b4f00(*puVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  puVar2 = *(uint64_t **)(param_1 + 0x50);
  while( true ) {
    if (puVar2 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    uVar1 = FUN_1808600b0(puVar2[2]);
    if ((int)uVar1 != 0) break;
    if (puVar2 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    puVar2 = (uint64_t *)*puVar2;
  }
  return uVar1;
}



uint64_t FUN_180860170(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x480);
  if ((puVar1 != (uint64_t *)0x0) &&
     (uVar2 = (**(code **)*puVar1)(puVar1,param_1,0x20000,param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180865620)
// WARNING: Removing unreachable block (ram,0x000180865638)

uint64_t thunk_FUN_180865550(int64_t param_1)

{
  int32_t *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  void *puVar12;
  int64_t lVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uVar2 = *(uint64_t *)(param_1 + 0x4e0);
  uStackX_20 = 0;
  uStackX_18 = 0;
  uVar8 = FUN_18073a200(*(uint64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4c0),&uStackX_18);
  if (((int)uVar8 == 0) && (uVar8 = FUN_18073c4c0(uStackX_18,&uStackX_20,0), (int)uVar8 == 0)) {
    while ((*(uint64_t *)(param_1 + 0x4e0) <= uVar2 &&
           (uVar2 < (int64_t)*(int *)(param_1 + 0x4e8) * 0x38 + *(uint64_t *)(param_1 + 0x4e0))))
    {
      plVar3 = *(int64_t **)(param_1 + 0x480);
      if ((plVar3 != (int64_t *)0x0) &&
         (uVar8 = (**(code **)(*plVar3 + 0x10))
                            (plVar3,param_1,uVar2,uVar2 + 0x10,*(uint64_t *)(uVar2 + 0x20),
                             *(int32_t *)(uVar2 + 0x28)), (int)uVar8 != 0)) {
        return uVar8;
      }
      iVar4 = (int)((int64_t)(uVar2 - *(int64_t *)(param_1 + 0x4e0)) / 0x38);
      if ((iVar4 < 0) || (*(int *)(param_1 + 0x4e8) <= iVar4)) {
        return 0x1c;
      }
      FUN_180840270(*(int64_t *)(param_1 + 0x4e0) + 0x10 + (int64_t)iVar4 * 0x38);
      iVar10 = *(int *)(param_1 + 0x4e8);
      iVar11 = (iVar10 - iVar4) + -1;
      if (0 < iVar11) {
        iVar14 = 0;
        lVar15 = *(int64_t *)(param_1 + 0x4e0) + (int64_t)iVar4 * 0x38;
        lVar16 = (int64_t)iVar11;
        if (0 < iVar11) {
          lVar13 = lVar15 + 0x1c;
          lVar9 = (lVar15 + 0x38) - lVar15;
          do {
            *(uint64_t *)(lVar13 + -0xc) = 0;
            *(uint64_t *)(lVar13 + -4) = 0;
            *(uint64_t *)(lVar13 + 0x14) = *(uint64_t *)(lVar13 + lVar9 + 0x14);
            puVar1 = (int32_t *)(lVar9 + -0x1c + lVar13);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            *(int32_t *)(lVar13 + -0x1c) = *puVar1;
            *(int32_t *)(lVar13 + -0x18) = uVar5;
            *(int32_t *)(lVar13 + -0x14) = uVar6;
            *(int32_t *)(lVar13 + -0x10) = uVar7;
            if (*(int *)(lVar9 + -4 + lVar13) < 1) {
              puVar12 = &system_buffer_ptr;
            }
            else {
              puVar12 = *(void **)(lVar9 + -0xc + lVar13);
            }
            FUN_18084e110(lVar13 + -0xc,puVar12);
            *(uint64_t *)(lVar13 + 4) = *(uint64_t *)(lVar9 + 4 + lVar13);
            *(int32_t *)(lVar13 + 0xc) = *(int32_t *)(lVar9 + 0xc + lVar13);
            FUN_180840270((int64_t)iVar14 * 0x38 + 0x10 + lVar15 + 0x38);
            iVar14 = iVar14 + 1;
            lVar13 = lVar13 + 0x38;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          iVar10 = *(int *)(param_1 + 0x4e8);
        }
      }
      *(int *)(param_1 + 0x4e8) = iVar10 + -1;
    }
    uVar8 = 0;
  }
  return uVar8;
}



uint64_t FUN_180860210(int64_t param_1,int *param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  char cVar2;
  int aiStackX_8 [2];
  uint64_t uStackX_20;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  FUN_18085c8a0(param_1 + 200,&uStackX_20);
  FUN_18085b920(param_1 + 200,&uStack_20);
  if ((uStackX_20 < uStack_20) &&
     ((4 < *(int *)(param_1 + 0x2e4) || (cVar2 = FUN_1808d3990(param_1 + 0x280), cVar2 == '\0')))) {
    plVar1 = (int64_t *)(param_1 + 0x400);
    if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x408) == plVar1)) {
      *param_3 = uStackX_20;
      *param_2 = 0;
      return 0;
    }
    uStack_28 = 0;
    FUN_1808cad80(param_1 + 0x3f8,aiStackX_8,&uStack_28);
    if (aiStackX_8[0] - 1U < 2) {
      *param_2 = aiStackX_8[0];
      return 0;
    }
    if (uStack_28 < uStackX_20) {
      uStack_28 = uStackX_20;
    }
    if (uStack_28 < uStack_20) {
      *param_3 = uStack_28;
      *param_2 = 0;
      return 0;
    }
  }
  *param_2 = 2;
  return 0;
}



uint64_t FUN_180860390(int64_t param_1,int64_t param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  
  if (param_3 == (uint64_t *)0x0) {
    return 0x1c;
  }
  puVar1 = (uint64_t *)(param_1 + 0x4d0);
  puVar2 = (uint64_t *)*puVar1;
  for (puVar8 = puVar2; (puVar2 <= puVar8 && (puVar8 < puVar2 + *(int *)(param_1 + 0x4d8)));
      puVar8 = puVar8 + 1) {
    if (*(int64_t *)*puVar8 == param_2) {
      *param_3 = (int64_t *)*puVar8;
      return 0;
    }
  }
  uVar4 = FUN_1808ca940(param_2,*(uint64_t *)(param_1 + 0x2c8),param_3);
  if ((int)uVar4 == 0) {
    uVar6 = (int)*(uint *)(param_1 + 0x4dc) >> 0x1f;
    iVar5 = *(int *)(param_1 + 0x4d8) + 1;
    iVar3 = (*(uint *)(param_1 + 0x4dc) ^ uVar6) - uVar6;
    if (iVar3 < iVar5) {
      iVar7 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar5;
      if (iVar5 <= iVar7) {
        iVar3 = iVar7;
      }
      if (iVar3 < 8) {
        iVar7 = 8;
      }
      else if (iVar7 < iVar5) {
        iVar7 = iVar5;
      }
      uVar4 = FUN_180747f10(puVar1,iVar7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    *(uint64_t *)(*puVar1 + (int64_t)*(int *)(param_1 + 0x4d8) * 8) = *param_3;
    *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808603ae(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t *unaff_RDI;
  uint64_t *puVar8;
  int64_t in_R10;
  
  puVar1 = (uint64_t *)(param_1 + 0x4d0);
  puVar2 = (uint64_t *)*puVar1;
  for (puVar8 = puVar2; (puVar2 <= puVar8 && (puVar8 < puVar2 + *(int *)(param_1 + 0x4d8)));
      puVar8 = puVar8 + 1) {
    if (*(int64_t *)*puVar8 == in_R10) {
      *unaff_RDI = (int64_t *)*puVar8;
      return 0;
    }
  }
  uVar4 = FUN_1808ca940();
  if ((int)uVar4 == 0) {
    uVar6 = (int)*(uint *)(param_1 + 0x4dc) >> 0x1f;
    iVar5 = *(int *)(param_1 + 0x4d8) + 1;
    iVar3 = (*(uint *)(param_1 + 0x4dc) ^ uVar6) - uVar6;
    if (iVar3 < iVar5) {
      iVar7 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar5;
      if (iVar5 <= iVar7) {
        iVar3 = iVar7;
      }
      if (iVar3 < 8) {
        iVar7 = 8;
      }
      else if (iVar7 < iVar5) {
        iVar7 = iVar5;
      }
      uVar4 = FUN_180747f10(puVar1,iVar7);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    *(uint64_t *)(*puVar1 + (int64_t)*(int *)(param_1 + 0x4d8) * 8) = *unaff_RDI;
    *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808603f6(void)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t *unaff_RBX;
  uint64_t *unaff_RDI;
  float fVar6;
  
  uVar2 = FUN_1808ca940();
  if ((int)uVar2 == 0) {
    uVar4 = (int)*(uint *)((int64_t)unaff_RBX + 0xc) >> 0x1f;
    iVar3 = (int)unaff_RBX[1] + 1;
    iVar1 = (*(uint *)((int64_t)unaff_RBX + 0xc) ^ uVar4) - uVar4;
    if (iVar1 < iVar3) {
      fVar6 = (float)iVar1 * 1.5;
      iVar5 = (int)fVar6;
      iVar1 = iVar3;
      if (iVar3 <= iVar5) {
        iVar1 = iVar5;
      }
      if (iVar1 < 8) {
        iVar5 = 8;
      }
      else if (iVar5 < iVar3) {
        iVar5 = iVar3;
      }
      uVar2 = FUN_180747f10(fVar6,iVar5);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    *(uint64_t *)(*unaff_RBX + (int64_t)(int)unaff_RBX[1] * 8) = *unaff_RDI;
    *(int *)(unaff_RBX + 1) = (int)unaff_RBX[1] + 1;
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180860480(int64_t param_1,uint64_t param_2,uint64_t *param_3,char param_4)
void FUN_180860480(int64_t param_1,uint64_t param_2,uint64_t *param_3,char param_4)

{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int8_t auStack_98 [32];
  int32_t uStack_78;
  int8_t uStack_70;
  int8_t uStack_68;
  int8_t auStack_58 [40];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  plVar2 = (int64_t *)FUN_18085fea0();
  if (plVar2 == (int64_t *)0x0) {
    lVar3 = (**(code **)(**(int64_t **)(param_1 + 0x458) + 0x128))
                      (*(int64_t **)(param_1 + 0x458),param_2,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_2,auStack_58);
    }
    iVar5 = 0;
    uStack_68 = 1;
    uStack_70 = 0;
    uStack_78 = 0;
    plVar2 = (int64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x30,&unknown_var_2624_ptr,0x705);
    if (plVar2 == (int64_t *)0x0) goto LAB_1808605b0;
    *plVar2 = (int64_t)plVar2;
    plVar2[1] = (int64_t)plVar2;
    plVar2[2] = lVar3;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    if ((param_4 != '\0') && (*(int *)(lVar3 + 0xd0) != 0)) {
      *(uint *)((int64_t)plVar2 + 0x1c) = *(uint *)((int64_t)plVar2 + 0x1c) | 0x20;
      cVar1 = FUN_1808b0820(lVar3 + 200,param_1);
      if (cVar1 != '\0') {
        *(uint *)((int64_t)plVar2 + 0x1c) = *(uint *)((int64_t)plVar2 + 0x1c) | 0x40;
      }
    }
    plVar4 = (int64_t *)*plVar2;
    if (plVar4 != plVar2) {
      do {
        plVar4 = (int64_t *)*plVar4;
        iVar5 = iVar5 + 1;
      } while (plVar4 != plVar2);
      if (iVar5 != 0) goto LAB_1808605ab;
    }
    plVar2[1] = *(int64_t *)(param_1 + 0x498);
    *plVar2 = param_1 + 0x490;
    *(int64_t **)(param_1 + 0x498) = plVar2;
    *(int64_t **)plVar2[1] = plVar2;
  }
LAB_1808605ab:
  *param_3 = plVar2;
LAB_1808605b0:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (uint64_t)auStack_98);
}



uint64_t FUN_1808605e0(int64_t param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = func_0x000180857b20(param_1 + 200);
  if (cVar2 != '\0') {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x2d8) >> 0xf & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x2e4);
    if (iVar1 == 0) {
      return 2;
    }
    if (0 < iVar1) {
      if (iVar1 < 3) {
        return 3;
      }
      if (iVar1 == 3) {
        return 0;
      }
    }
  }
  return 4;
}



uint64_t FUN_180860650(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = FUN_18085fa90(param_2,*(uint64_t *)(param_1 + 0x2b0));
  uVar2 = 0;
  *param_3 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



