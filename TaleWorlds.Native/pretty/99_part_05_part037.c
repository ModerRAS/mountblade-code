#include "TaleWorlds.Native.Split.h"
// 99_part_05_part037.c - 10 个函数
// 函数: void DataStructure_ef740(int64_t param_1,char param_2)
void DataStructure_ef740(int64_t param_1,char param_2)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uVar4 = 0;
  iVar1 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3);
  uVar3 = uVar4;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1e0) + uVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x1e0) + uVar3 * 8) + 0x159) = 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int64_t)uVar3 < (int64_t)iVar1);
  }
  if ((param_2 != '\0') &&
     (uVar3 = uVar4, *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      DataStructure_ef740(*(uint64_t *)(*(int64_t *)(param_1 + 0x1c0) + uVar4),param_2);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ef770(void)
void DataStructure_ef770(void)
{
  int in_EAX;
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R14B;
  if (0 < in_EAX) {
    uVar2 = unaff_RSI & 0xffffffff;
    do {
      iVar1 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar2 * 8) + 0x98))();
      if (iVar1 == 4) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar2 * 8) + 0x159) = 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int64_t)uVar2 < (int64_t)in_EAX);
  }
  if ((unaff_R14B != '\0') &&
     (uVar2 = unaff_RSI,
     *(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0)) {
    do {
      DataStructure_ef740(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x1c0) + unaff_RSI),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ef7bd(void)
void DataStructure_ef7bd(void)
{
  uint uVar1;
  uint64_t unaff_RSI;
  uint64_t uVar2;
  int64_t unaff_RDI;
  int8_t unaff_R14B;
  uVar2 = unaff_RSI;
  if (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_ef740(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x1c0) + unaff_RSI),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while ((uint64_t)(int64_t)(int)uVar1 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ef830(int64_t param_1,char param_2)
void DataStructure_ef830(int64_t param_1,char param_2)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uVar4 = 0;
  iVar1 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3);
  uVar3 = uVar4;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1e0) + uVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        DataStructure_ae420(*(uint64_t *)(*(int64_t *)(param_1 + 0x1e0) + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
    } while ((int64_t)uVar3 < (int64_t)iVar1);
  }
  if ((param_2 != '\0') &&
     (uVar3 = uVar4, *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      DataStructure_ef830(*(uint64_t *)(uVar4 + *(int64_t *)(param_1 + 0x1c0)),param_2);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ef860(void)
void DataStructure_ef860(void)
{
  int in_EAX;
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R14B;
  if (0 < in_EAX) {
    uVar2 = unaff_RSI & 0xffffffff;
    do {
      iVar1 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar2 * 8) + 0x98))();
      if (iVar1 == 4) {
        DataStructure_ae420(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar2 * 8));
      }
      uVar2 = uVar2 + 1;
    } while ((int64_t)uVar2 < (int64_t)in_EAX);
  }
  if ((unaff_R14B != '\0') &&
     (uVar2 = unaff_RSI,
     *(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0)) {
    do {
      DataStructure_ef830(*(uint64_t *)(unaff_RSI + *(int64_t *)(unaff_RDI + 0x1c0)),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ef8ab(void)
void DataStructure_ef8ab(void)
{
  uint uVar1;
  uint64_t unaff_RSI;
  uint64_t uVar2;
  int64_t unaff_RDI;
  int8_t unaff_R14B;
  uVar2 = unaff_RSI;
  if (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_ef830(*(uint64_t *)(unaff_RSI + *(int64_t *)(unaff_RDI + 0x1c0)),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while ((uint64_t)(int64_t)(int)uVar1 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ef920(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_ef920(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 0x268);
  if (param_2 == (int64_t *)0x0) {
    PhysicsSystem_CharacterController(param_1,1,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2);
    plVar1 = *(int64_t **)(param_1 + 0x268);
    *(int64_t **)(param_1 + 0x268) = param_2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    SystemCore_ConfigurationHandler0(param_1 + 0x240,*(int64_t *)(param_1 + 0x268) + 0x288);
  }
  if ((lVar5 != *(int64_t *)(param_1 + 0x268)) &&
     (iVar3 = (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3), 0 < iVar3))
  {
    lVar5 = 0;
    do {
      lVar2 = *(int64_t *)(param_1 + 0x268);
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar4 = *(int64_t *)(*(int64_t *)(lVar2 + 0xb0) + lVar5 * 8), lVar4 == 0)) {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar2 + 0xf0) + lVar5 * 8);
      }
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + lVar5 * 8);
      (**(code **)(*plVar1 + 0x88))(plVar1,lVar4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}
// 函数: void DataStructure_efa20(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_efa20(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  lVar6 = *(int64_t *)(param_1 + 0x1c0);
  uVar7 = 0;
  uVar9 = uVar7;
  if (*(int64_t *)(param_1 + 0x1c8) - lVar6 >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar7 + *(int64_t *)(param_2 + 0x1c0));
      if (((*(uint *)(lVar2 + 0x2ac) & 0x20000) == 0) && (*(int64_t *)(lVar2 + 0x268) != 0)) {
        DataStructure_efa20(*(uint64_t *)(uVar7 + lVar6));
      }
      lVar6 = *(int64_t *)(param_1 + 0x1c0);
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      uVar9 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - lVar6 >> 3));
  }
  plVar3 = *(int64_t **)(param_2 + 0x268);
  lVar2 = *(int64_t *)(param_1 + 0x268);
  if (plVar3 == (int64_t *)0x0) {
    PhysicsSystem_CharacterController(param_1,1,lVar6,param_4,0xfffffffffffffffe);
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = *(int64_t **)(param_1 + 0x268);
    *(int64_t **)(param_1 + 0x268) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    SystemCore_ConfigurationHandler0(param_1 + 0x240,*(int64_t *)(param_1 + 0x268) + 0x288);
  }
  if ((lVar2 != *(int64_t *)(param_1 + 0x268)) &&
     (iVar4 = (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3), 0 < iVar4))
  {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(param_1 + 0x268);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0xb0) + lVar6 * 8), lVar5 == 0)) {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0xf0) + lVar6 * 8);
      }
      plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + lVar6 * 8);
      (**(code **)(*plVar3 + 0x88))(plVar3,lVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}
// 函数: void DataStructure_efa51(uint64_t param_1,uint64_t param_2,int64_t param_3)
void DataStructure_efa51(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint unaff_EDI;
  uVar7 = (uint64_t)unaff_EDI;
  do {
    lVar6 = *(int64_t *)(uVar7 + *(int64_t *)(unaff_RBP + 0x1c0));
    if (((*(uint *)(lVar6 + 0x2ac) & 0x20000) == 0) && (*(int64_t *)(lVar6 + 0x268) != 0)) {
      DataStructure_efa20(*(uint64_t *)(uVar7 + param_3));
    }
    param_3 = *(int64_t *)(unaff_RSI + 0x1c0);
    unaff_EDI = unaff_EDI + 1;
    uVar7 = uVar7 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x1c8) - param_3 >> 3));
  plVar3 = *(int64_t **)(unaff_RBP + 0x268);
  lVar6 = *(int64_t *)(unaff_RSI + 0x268);
  if (plVar3 == (int64_t *)0x0) {
    PhysicsSystem_CharacterController();
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = *(int64_t **)(unaff_RSI + 0x268);
    *(int64_t **)(unaff_RSI + 0x268) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    SystemCore_ConfigurationHandler0(unaff_RSI + 0x240,*(int64_t *)(unaff_RSI + 0x268) + 0x288);
  }
  if ((lVar6 != *(int64_t *)(unaff_RSI + 0x268)) &&
     (iVar4 = (int)(*(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3),
     0 < iVar4)) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(unaff_RSI + 0x268);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0xb0) + lVar6 * 8), lVar5 == 0)) {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0xf0) + lVar6 * 8);
      }
      plVar3 = *(int64_t **)(*(int64_t *)(unaff_RSI + 0xf0) + lVar6 * 8);
      (**(code **)(*plVar3 + 0x88))(plVar3,lVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}
// 函数: void DataStructure_efab2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_efab2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar7;
  uint64_t local_var_40;
  uint64_t local_var_48;
  plVar3 = *(int64_t **)(unaff_RBP + 0x268);
  uVar7 = 0xfffffffffffffffe;
  local_var_40 = local_var_48;
  lVar6 = *(int64_t *)(unaff_RSI + 0x268);
  if (plVar3 == (int64_t *)0x0) {
    PhysicsSystem_CharacterController();
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar1 = *(int64_t **)(unaff_RSI + 0x268);
    *(int64_t **)(unaff_RSI + 0x268) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    SystemCore_ConfigurationHandler0(unaff_RSI + 0x240,*(int64_t *)(unaff_RSI + 0x268) + 0x288,param_3,param_4,uVar7);
  }
  if ((lVar6 != *(int64_t *)(unaff_RSI + 0x268)) &&
     (iVar4 = (int)(*(int64_t *)(unaff_RSI + 0xf8) - *(int64_t *)(unaff_RSI + 0xf0) >> 3),
     0 < iVar4)) {
    lVar6 = 0;
    do {
      lVar2 = *(int64_t *)(unaff_RSI + 0x268);
      if (lVar2 == 0) {
        lVar5 = 0;
      }
      else if ((-1 < *(char *)(lVar2 + 0x2e8)) ||
              (lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0xb0) + lVar6 * 8), lVar5 == 0)) {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0xf0) + lVar6 * 8);
      }
      plVar3 = *(int64_t **)(*(int64_t *)(unaff_RSI + 0xf0) + lVar6 * 8);
      (**(code **)(*plVar3 + 0x88))(plVar3,lVar5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address