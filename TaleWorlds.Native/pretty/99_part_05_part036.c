#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_05_part036.c - 19 个函数
// 函数: void DataStructure_ee7f0(void)
void DataStructure_ee7f0(void)
{
  byte bVar1;
  int64_t *plVar2;
  int64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *local_var_30;
  uint64_t *local_var_40;
  do {
    lVar3 = in_RAX;
    in_RAX = *(int64_t *)(lVar3 + 0x168);
  } while (*(int64_t *)(lVar3 + 0x168) != 0);
  bVar1 = *(byte *)(lVar3 + 0x2e8);
  *(byte *)(lVar3 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar6 = *(int64_t *)(lVar3 + 0x20);
  uVar8 = 0;
  if (lVar6 != 0) {
    lVar5 = *(int64_t *)(lVar3 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(int64_t *)(lVar5 + 0x170) == 0) &&
         (plVar2 = *(int64_t **)(lVar3 + 0x10), plVar2 != (int64_t *)0x0)) {
        local_var_40 = &local_buffer_00000030;
        local_var_30 = plVar2;
        (**(code **)(*plVar2 + 0x28))();
        uVar4 = RenderingSystem_89a90(lVar6 + 0x29a0,&local_buffer_00000030);
        *(uint64_t *)(*(int64_t *)(lVar3 + 0x28) + 0x170) = uVar4;
        lVar6 = *(int64_t *)(lVar3 + 0x20);
        plVar2 = *(int64_t **)(lVar6 + 0x29a8);
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(uint64_t *)(*(int64_t *)(lVar3 + 0x28) + 0x170),lVar3 + 0x70);
          lVar6 = *(int64_t *)(lVar3 + 0x20);
        }
        plVar2 = *(int64_t **)(lVar6 + 0x29a8);
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(uint64_t *)(*(int64_t *)(lVar3 + 0x28) + 0x170),
                     *(int32_t *)(lVar3 + 0x18));
        }
      }
    }
    else if (*(int64_t *)(lVar5 + 0x170) != 0) {
      plVar2 = *(int64_t **)(lVar6 + 0x29a8);
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(int64_t *)(lVar5 + 0x170));
        lVar5 = *(int64_t *)(lVar3 + 0x28);
      }
      *(uint64_t *)(lVar5 + 0x170) = 0;
    }
  }
  uVar9 = uVar8;
  if (*(int64_t *)(lVar3 + 0x1c8) - *(int64_t *)(lVar3 + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_f2700(*(uint64_t *)(uVar9 + *(int64_t *)(lVar3 + 0x1c0)),(bVar1 & 1) != 0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar9 = uVar9 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(lVar3 + 0x1c8) - *(int64_t *)(lVar3 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_ee810(int64_t param_1,uint param_2)
void DataStructure_ee810(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uVar4 = *(uint *)(param_1 + 0x2ac);
  uVar3 = 0;
  if (((uVar4 ^ param_2) >> 0x16 & 1) != 0) {
    iVar2 = (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3);
    uVar5 = uVar3;
    if (0 < iVar2) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + uVar5 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,~(byte)(uVar4 >> 0x16) & 1);
        uVar5 = uVar5 + 1;
      } while ((int64_t)uVar5 < (int64_t)iVar2);
      uVar4 = *(uint *)(param_1 + 0x2ac);
    }
  }
  if (((uVar4 ^ param_2) & 0x80010000) != 0) {
    DataStructure_f09d0(param_1);
    uVar4 = *(uint *)(param_1 + 0x2ac);
  }
  if ((((uVar4 ^ param_2) >> 0x14 & 1) != 0) &&
     (uVar5 = uVar3, uVar7 = uVar3,
     *(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0)) {
    do {
      plVar1 = *(int64_t **)(uVar5 + *(int64_t *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0xf0))(plVar1,(byte)(uVar4 >> 0x14) & 1);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
    uVar4 = *(uint *)(param_1 + 0x2ac);
  }
  if (((uVar4 ^ param_2) >> 0x13 & 1) != 0) {
    iVar2 = (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + uVar3 * 8);
        (**(code **)(*plVar1 + 0xe8))(plVar1,(byte)(uVar4 >> 0x13) & 1);
        uVar3 = uVar3 + 1;
      } while ((int64_t)uVar3 < (int64_t)iVar2);
    }
  }
  return;
}
// 函数: void DataStructure_ee826(int64_t param_1,uint param_2)
void DataStructure_ee826(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  uint in_EAX;
  int iVar2;
  uint64_t unaff_RSI;
  uint unaff_EDI;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  if (((in_EAX ^ param_2) >> 0x16 & 1) != 0) {
    iVar2 = (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3);
    if (0 < iVar2) {
      uVar3 = unaff_RSI & 0xffffffff;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + uVar3 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,~(byte)(unaff_EDI >> 0x16) & 1);
        uVar3 = uVar3 + 1;
      } while ((int64_t)uVar3 < (int64_t)iVar2);
      unaff_EDI = *(uint *)(param_1 + 0x2ac);
    }
  }
  if (((unaff_EDI ^ param_2) & 0x80010000) != 0) {
    DataStructure_f09d0(param_1);
    unaff_EDI = *(uint *)(param_1 + 0x2ac);
  }
  if (((unaff_EDI ^ param_2) >> 0x14 & 1) != 0) {
    uVar5 = unaff_RSI & 0xffffffff;
    uVar3 = unaff_RSI;
    if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0) {
      do {
        plVar1 = *(int64_t **)(uVar3 + *(int64_t *)(param_1 + 0xf0));
        (**(code **)(*plVar1 + 0xf0))(plVar1,(byte)(unaff_EDI >> 0x14) & 1);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar3 = uVar3 + 8;
      } while ((uint64_t)(int64_t)(int)uVar4 <
               (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
      unaff_EDI = *(uint *)(param_1 + 0x2ac);
    }
  }
  if (((unaff_EDI ^ param_2) >> 0x13 & 1) != 0) {
    iVar2 = (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + unaff_RSI * 8);
        (**(code **)(*plVar1 + 0xe8))(plVar1,(byte)(unaff_EDI >> 0x13) & 1);
        unaff_RSI = unaff_RSI + 1;
      } while ((int64_t)unaff_RSI < (int64_t)iVar2);
    }
  }
  return;
}
// 函数: void DataStructure_ee935(void)
void DataStructure_ee935(void)
{
  int64_t *plVar1;
  int iVar2;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint unaff_EDI;
  iVar2 = (int)(*(int64_t *)(unaff_RBX + 0xf8) - *(int64_t *)(unaff_RBX + 0xf0) >> 3);
  if (0 < iVar2) {
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(unaff_RBX + 0xf0) + unaff_RSI * 8);
      (**(code **)(*plVar1 + 0xe8))(plVar1,(byte)(unaff_EDI >> 0x13) & 1);
      unaff_RSI = unaff_RSI + 1;
    } while (unaff_RSI < iVar2);
  }
  return;
}
// 函数: void DataStructure_ee990(int64_t param_1,uint param_2)
void DataStructure_ee990(int64_t param_1,uint param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  byte bVar5;
  char cVar6;
  int64_t lVar7;
  lVar1 = *(int64_t *)(param_1 + 0x260);
  if ((lVar1 != 0) && (((*(uint *)(param_1 + 0x2ac) ^ param_2) >> 0x16 & 1) != 0)) {
    bVar5 = ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16) & 1;
    iVar3 = (int)(*(int64_t *)(lVar1 + 0x1b0) - *(int64_t *)(lVar1 + 0x1a8) >> 3);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x1a8) + lVar4 * 8);
        (**(code **)(*plVar2 + 0xe0))(plVar2,bVar5);
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    cVar6 = '\0';
    if ('\0' < *(char *)(lVar1 + 0x20)) {
      do {
        lVar4 = 0;
        lVar7 = (int64_t)cVar6 * 0x100 + *(int64_t *)(lVar1 + 0x18);
        iVar3 = (int)(*(int64_t *)(lVar7 + 0xb8) - *(int64_t *)(lVar7 + 0xb0) >> 3);
        if (0 < iVar3) {
          do {
            plVar2 = *(int64_t **)(*(int64_t *)(lVar7 + 0xb0) + lVar4 * 8);
            (**(code **)(*plVar2 + 0xe0))(plVar2,bVar5);
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar3);
        }
        cVar6 = cVar6 + '\x01';
      } while (cVar6 < *(char *)(lVar1 + 0x20));
    }
  }
  return;
}
// 函数: void DataStructure_ee9a6(int64_t param_1,uint param_2)
void DataStructure_ee9a6(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  byte bVar4;
  char cVar5;
  int64_t lVar6;
  int64_t unaff_R15;
  if (((*(uint *)(param_1 + 0x2ac) ^ param_2) >> 0x16 & 1) != 0) {
    bVar4 = ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16) & 1;
    iVar2 = (int)(*(int64_t *)(unaff_R15 + 0x1b0) - *(int64_t *)(unaff_R15 + 0x1a8) >> 3);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(unaff_R15 + 0x1a8) + lVar3 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,bVar4);
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    cVar5 = '\0';
    if ('\0' < *(char *)(unaff_R15 + 0x20)) {
      do {
        lVar3 = 0;
        lVar6 = (int64_t)cVar5 * 0x100 + *(int64_t *)(unaff_R15 + 0x18);
        iVar2 = (int)(*(int64_t *)(lVar6 + 0xb8) - *(int64_t *)(lVar6 + 0xb0) >> 3);
        if (0 < iVar2) {
          do {
            plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0xb0) + lVar3 * 8);
            (**(code **)(*plVar1 + 0xe0))(plVar1,bVar4);
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar2);
        }
        cVar5 = cVar5 + '\x01';
      } while (cVar5 < *(char *)(unaff_R15 + 0x20));
    }
  }
  return;
}
// 函数: void DataStructure_ee9d7(void)
void DataStructure_ee9d7(void)
{
  int64_t *plVar1;
  int in_EAX;
  int iVar2;
  int64_t lVar3;
  byte unaff_BPL;
  char cVar4;
  int64_t lVar5;
  int64_t unaff_R15;
  if (0 < in_EAX) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(unaff_R15 + 0x1a8) + lVar3 * 8);
      (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL & 1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < in_EAX);
  }
  cVar4 = '\0';
  if ('\0' < *(char *)(unaff_R15 + 0x20)) {
    do {
      lVar3 = 0;
      lVar5 = (int64_t)cVar4 * 0x100 + *(int64_t *)(unaff_R15 + 0x18);
      iVar2 = (int)(*(int64_t *)(lVar5 + 0xb8) - *(int64_t *)(lVar5 + 0xb0) >> 3);
      if (0 < iVar2) {
        do {
          plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0xb0) + lVar3 * 8);
          (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL & 1);
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
      cVar4 = cVar4 + '\x01';
    } while (cVar4 < *(char *)(unaff_R15 + 0x20));
  }
  return;
}
// 函数: void DataStructure_eea29(void)
void DataStructure_eea29(void)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int8_t unaff_BPL;
  char unaff_SIL;
  int64_t lVar4;
  int64_t unaff_R15;
  do {
    lVar3 = 0;
    lVar4 = (int64_t)unaff_SIL * 0x100 + *(int64_t *)(unaff_R15 + 0x18);
    iVar2 = (int)(*(int64_t *)(lVar4 + 0xb8) - *(int64_t *)(lVar4 + 0xb0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0xb0) + lVar3 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL);
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    unaff_SIL = unaff_SIL + '\x01';
  } while (unaff_SIL < *(char *)(unaff_R15 + 0x20));
  return;
}
// 函数: void DataStructure_eea8e(void)
void DataStructure_eea8e(void)
{
  return;
}
// 函数: void DataStructure_eea9d(void)
void DataStructure_eea9d(void)
{
  return;
}
// 函数: void DataStructure_eeaa2(void)
void DataStructure_eeaa2(void)
{
  return;
}
// 函数: void DataStructure_eeab0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_eeab0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (*param_2 != *(int64_t *)(param_1 + 0x110)) {
    DataStructure_ecfb0(param_1,*param_2,*(int32_t *)(param_1 + 0x148),param_4,0xfffffffffffffffe);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x0001802eeaef. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
    return;
  }
  return;
}
// 函数: void DataStructure_eeb00(int64_t param_1,int64_t param_2)
void DataStructure_eeb00(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_1 + 0x260);
  if (param_2 != *plVar1) {
    PhysicsSystem_CharacterController(param_1,1);
    if (*plVar1 != 0) {
      DataStructure_fc960(*plVar1,*(uint64_t *)(param_1 + 0x20));
      DataStructure_fdb10(*plVar1,0);
    }
    SystemCore_PointerManager(plVar1,param_2);
    if (param_2 != 0) {
      DataStructure_fdb10(*plVar1,param_1);
      DataStructure_fc840(*plVar1,*(uint64_t *)(param_1 + 0x20));
      DataStructure_ee990(param_1,0);
    }
    *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
    if (*(int64_t *)(param_1 + 0x168) != 0) {
      Function_bcb0dca9();
    }
  }
  return;
}
// 函数: void DataStructure_eebe0(int64_t param_1)
void DataStructure_eebe0(int64_t param_1)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  *(short *)(param_1 + 0x2b2) = *(short *)(param_1 + 0x2b2) + 1;
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_eebe0(*(uint64_t *)(uVar1 + *(int64_t *)(param_1 + 0x1c0)));
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void DataStructure_eec0d(void)
void DataStructure_eec0d(void)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    DataStructure_eebe0(*(uint64_t *)(uVar1 + *(int64_t *)(unaff_RBX + 0x1c0)));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  return;
}
// 函数: void DataStructure_eec55(void)
void DataStructure_eec55(void)
{
  return;
}
// 函数: void DataStructure_eec60(int64_t param_1)
void DataStructure_eec60(int64_t param_1)
{
  int32_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t *plStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  int64_t *plStack_40;
  int64_t *plStack_38;
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(int64_t *)(param_1 + 0x168) != 0) {
    Function_bcb0dca9();
  }
  plStack_80 = (int64_t *)0x0;
  plStack_78 = (int64_t *)0x0;
  iVar9 = 0;
  plStack_70 = (int64_t *)0x0;
  local_var_68 = 3;
  pplVar6 = (int64_t **)DataStructure_f1cd0(param_1,&plStack_40);
  plVar2 = plStack_80;
  plVar3 = plStack_78;
  uVar1 = local_var_68;
  plVar7 = plStack_40;
  if (&plStack_80 != pplVar6) {
    SystemCore_Controller(&plStack_80);
    local_var_60 = 0;
    local_var_58 = 0;
    local_var_50 = 0;
    plVar2 = *pplVar6;
    *pplVar6 = plStack_80;
    plVar3 = pplVar6[1];
    pplVar6[1] = plStack_78;
    plVar7 = pplVar6[2];
    pplVar6[2] = plStack_70;
    uVar1 = *(int32_t *)(pplVar6 + 3);
    *(int32_t *)(pplVar6 + 3) = local_var_68;
    plStack_70 = plVar7;
    local_var_48 = local_var_68;
    plVar7 = plStack_40;
    plStack_78 = plVar3;
    plStack_80 = plVar2;
  }
  for (; local_var_68 = uVar1, plVar5 = plStack_78, plVar4 = plStack_80, plVar7 != plStack_38;
      plVar7 = plVar7 + 1) {
    plStack_80 = plVar2;
    plStack_78 = plVar3;
    if ((int64_t *)*plVar7 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar7 + 0x38))();
    }
    plVar2 = plStack_80;
    plVar3 = plStack_78;
    uVar1 = local_var_68;
    plStack_78 = plVar5;
    plStack_80 = plVar4;
  }
  if (plStack_40 != (int64_t *)0x0) {
    plStack_80 = plVar2;
    plStack_78 = plVar3;
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  uVar8 = (int64_t)plStack_78 - (int64_t)plStack_80 >> 3;
  plVar7 = plStack_80;
  plStack_80 = plVar2;
  plStack_78 = plVar3;
  plVar2 = plVar4;
  if (uVar8 != 0) {
    do {
      (**(code **)(*(int64_t *)*plVar7 + 0x160))();
      iVar9 = iVar9 + 1;
      plVar7 = plVar7 + 1;
    } while ((uint64_t)(int64_t)iVar9 < uVar8);
  }
  for (; plVar2 != plVar5; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar4);
  }
  return;
}
uint64_t DataStructure_eee20(int64_t param_1,char *param_2)
{
  char cVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  char cVar10;
  char *pcVar11;
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (param_2[uVar4] != '\0');
  iVar3 = (int)uVar4;
  if ((0 < iVar3) && (0 < iVar2)) {
    iVar7 = 0;
    if (-1 < iVar2 - iVar3) {
      lVar9 = 0;
      uVar8 = (uint64_t)iVar3;
      do {
        if ((lVar9 == 0) || (*(char *)(*(int64_t *)(param_1 + 0xd8) + -1 + lVar9) == ' ')) {
          iVar6 = 0;
          uVar4 = 0;
          if (0 < (int64_t)uVar8) {
            pcVar11 = param_2;
            do {
              cVar5 = pcVar11[(lVar9 - (int64_t)param_2) + *(int64_t *)(param_1 + 0xd8)];
              cVar1 = *pcVar11;
              cVar10 = cVar5 + ' ';
              if (0x19 < (byte)(cVar5 + 0xbfU)) {
                cVar10 = cVar5;
              }
              cVar5 = cVar1 + ' ';
              if (0x19 < (byte)(cVar1 + 0xbfU)) {
                cVar5 = cVar1;
              }
              if (cVar10 != cVar5) break;
              iVar6 = iVar6 + 1;
              uVar4 = uVar4 + 1;
              pcVar11 = pcVar11 + 1;
            } while ((int64_t)uVar4 < (int64_t)uVar8);
          }
          if ((uVar4 == uVar8) &&
             ((iVar6 + iVar7 == iVar2 ||
              (*(char *)(*(int64_t *)(param_1 + 0xd8) + lVar9 + uVar4) == ' ')))) {
            return CONCAT71((int7)(uVar4 >> 8),1);
          }
        }
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 <= iVar2 - iVar3);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}
void * DataStructure_eef70(int64_t param_1,int64_t param_2)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  char cVar5;
  uint64_t *puVar6;
  void *puVar7;
  char *pcVar8;
  int64_t lVar9;
  uint uVar10;
  uint uVar11;
  void *plocal_var_70;
  void *plocal_var_68;
  int32_t local_var_58;
  uint64_t *aplocal_var_50 [4];
  int64_t *plStack_30;
  uVar10 = 0;
  puVar7 = (void *)register0x00000020;
  do {
    uVar3 = *(uint *)(param_1 + 0xe0);
    if (uVar10 < uVar3) {
      puVar7 = *(void **)(param_1 + 0xd8);
      pcVar8 = puVar7 + (int)uVar10;
      uVar11 = uVar10;
      do {
        if (*pcVar8 == ' ') {
          if (uVar11 != 0xffffffff) goto LAB_1802eefe9;
          break;
        }
        uVar11 = uVar11 + 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar11 < uVar3);
    }
    uVar11 = uVar3;
LAB_1802eefe9:
    if ((int)uVar11 <= (int)uVar10) {
      return (void *)((uint64_t)puVar7 & 0xffffffffffffff00);
    }
    NetworkSystem_ProtocolParser(param_1 + 0xd0,&plocal_var_70,uVar10,uVar11);
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_2 + 8);
    }
    UISystem_7a1e0(aplocal_var_50,puVar7);
    puVar7 = &system_buffer_ptr;
    if (plocal_var_68 != (void *)0x0) {
      puVar7 = plocal_var_68;
    }
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (puVar7[lVar9] != '\0');
    cVar5 = UtilitiesSystem_29cc0(puVar7,puVar7 + lVar9);
    if (aplocal_var_50[0] != (uint64_t *)0x0) {
      LOCK();
      piVar1 = (int *)((int64_t)aplocal_var_50[0] + 0x2c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      puVar6 = aplocal_var_50[0];
      if (iVar2 == 1) {
        while (puVar6 != (uint64_t *)0x0) {
          puVar4 = (uint64_t *)puVar6[2];
          puVar6[2] = 0;
          (**(code **)*puVar6)(puVar6,1);
          puVar6 = puVar4;
        }
      }
    }
    aplocal_var_50[0] = (uint64_t *)0x0;
    if ((plStack_30 != (int64_t *)0x0) &&
       (puVar6 = (uint64_t *)(**(code **)(*plStack_30 + 0x10))(), puVar6 != (uint64_t *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    if (cVar5 != '\0') {
      plocal_var_70 = &system_data_buffer_ptr;
      if (plocal_var_68 == (void *)0x0) {
        return &memory_allocator_3233_ptr;
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    uVar10 = uVar11 + 1;
    puVar7 = &system_data_buffer_ptr;
    plocal_var_70 = &system_data_buffer_ptr;
    if (plocal_var_68 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_68 = (void *)0x0;
    local_var_58 = 0;
    plocal_var_70 = &system_state_ptr;
  } while( true );
}
// 函数: void DataStructure_ef160(uint64_t *param_1)
void DataStructure_ef160(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  return;
}
uint64_t DataStructure_ef1b0(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  uint uVar15;
  uVar10 = 0;
  uVar8 = *(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3;
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + uVar9 * 8);
      iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar3 == 0) {
        plVar5 = (int64_t *)plVar1[7];
        uVar6 = plVar1[8] - (int64_t)plVar5 >> 4;
        uVar7 = (uint64_t)(uint)((int)uVar7 + (int)uVar6);
        uVar13 = uVar10;
        if (uVar6 != 0) {
          do {
            lVar4 = *plVar5;
            plVar5 = plVar5 + 2;
            uVar15 = (uint)uVar7 + 1;
            if ((*(uint *)(*(int64_t *)(lVar4 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
              uVar15 = (uint)uVar7;
            }
            uVar12 = (int)uVar13 + 1;
            uVar7 = (uint64_t)uVar15;
            uVar13 = (uint64_t)uVar12;
          } while ((uint64_t)(int64_t)(int)uVar12 < uVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  if ((param_2 != 0) && (lVar4 = RenderingSystem_a0010(param_2,param_1), lVar4 != 0)) {
    plVar1 = *(int64_t **)(lVar4 + 8);
    lVar11 = *plVar1;
    plVar5 = plVar1;
    if (lVar11 == 0) {
      lVar11 = plVar1[1];
      while (plVar5 = plVar5 + 1, lVar11 == 0) {
        lVar11 = plVar5[1];
      }
    }
    while (lVar11 != plVar1[*(int64_t *)(lVar4 + 0x10)]) {
      plVar14 = *(int64_t **)(**(int64_t **)(lVar11 + 8) + 0x38);
      uVar8 = *(int64_t *)(**(int64_t **)(lVar11 + 8) + 0x40) - (int64_t)plVar14 >> 4;
      uVar7 = (uint64_t)(uint)((int)uVar7 + (int)uVar8);
      uVar9 = uVar10;
      if (uVar8 != 0) {
        do {
          lVar2 = *plVar14;
          plVar14 = plVar14 + 2;
          uVar15 = (uint)uVar7 + 1;
          if ((*(uint *)(*(int64_t *)(lVar2 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
            uVar15 = (uint)uVar7;
          }
          uVar12 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar12;
          uVar7 = (uint64_t)uVar15;
        } while ((uint64_t)(int64_t)(int)uVar12 < uVar8);
      }
      lVar11 = *(int64_t *)(lVar11 + 0x10);
      while (lVar11 == 0) {
        plVar14 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar11 = *plVar14;
      }
    }
  }
  uVar9 = uVar10;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      iVar3 = DataStructure_ef1b0(*(uint64_t *)(uVar10 + *(int64_t *)(param_1 + 0x1c0)),param_2);
      uVar10 = uVar10 + 8;
      uVar15 = (int)uVar9 + 1;
      uVar7 = (uint64_t)(uint)((int)uVar7 + iVar3);
      uVar9 = (uint64_t)uVar15;
    } while ((uint64_t)(int64_t)(int)uVar15 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return uVar7;
}
uint64_t DataStructure_ef1c4(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  uint uVar15;
  uVar10 = 0;
  uVar8 = *(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3;
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + uVar9 * 8);
      iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar3 == 0) {
        plVar5 = (int64_t *)plVar1[7];
        uVar6 = plVar1[8] - (int64_t)plVar5 >> 4;
        uVar7 = (uint64_t)(uint)((int)uVar7 + (int)uVar6);
        uVar13 = uVar10;
        if (uVar6 != 0) {
          do {
            lVar4 = *plVar5;
            plVar5 = plVar5 + 2;
            uVar15 = (uint)uVar7 + 1;
            if ((*(uint *)(*(int64_t *)(lVar4 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
              uVar15 = (uint)uVar7;
            }
            uVar12 = (int)uVar13 + 1;
            uVar7 = (uint64_t)uVar15;
            uVar13 = (uint64_t)uVar12;
          } while ((uint64_t)(int64_t)(int)uVar12 < uVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  if ((param_2 != 0) && (lVar4 = RenderingSystem_a0010(param_2,param_1), lVar4 != 0)) {
    plVar1 = *(int64_t **)(lVar4 + 8);
    lVar11 = *plVar1;
    plVar5 = plVar1;
    if (lVar11 == 0) {
      lVar11 = plVar1[1];
      while (plVar5 = plVar5 + 1, lVar11 == 0) {
        lVar11 = plVar5[1];
      }
    }
    while (lVar11 != plVar1[*(int64_t *)(lVar4 + 0x10)]) {
      plVar14 = *(int64_t **)(**(int64_t **)(lVar11 + 8) + 0x38);
      uVar8 = *(int64_t *)(**(int64_t **)(lVar11 + 8) + 0x40) - (int64_t)plVar14 >> 4;
      uVar7 = (uint64_t)(uint)((int)uVar7 + (int)uVar8);
      uVar9 = uVar10;
      if (uVar8 != 0) {
        do {
          lVar2 = *plVar14;
          plVar14 = plVar14 + 2;
          uVar15 = (uint)uVar7 + 1;
          if ((*(uint *)(*(int64_t *)(lVar2 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
            uVar15 = (uint)uVar7;
          }
          uVar12 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar12;
          uVar7 = (uint64_t)uVar15;
        } while ((uint64_t)(int64_t)(int)uVar12 < uVar8);
      }
      lVar11 = *(int64_t *)(lVar11 + 0x10);
      while (lVar11 == 0) {
        plVar14 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar11 = *plVar14;
      }
    }
  }
  uVar9 = uVar10;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      iVar3 = DataStructure_ef1b0(*(uint64_t *)(uVar10 + *(int64_t *)(param_1 + 0x1c0)),param_2);
      uVar10 = uVar10 + 8;
      uVar15 = (int)uVar9 + 1;
      uVar7 = (uint64_t)(uint)((int)uVar7 + iVar3);
      uVar9 = (uint64_t)uVar15;
    } while ((uint64_t)(int64_t)(int)uVar15 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return uVar7;
}
int DataStructure_ef287(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int unaff_EBX;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  lVar4 = RenderingSystem_a0010();
  if (lVar4 != 0) {
    plVar1 = *(int64_t **)(lVar4 + 8);
    lVar6 = *plVar1;
    plVar5 = plVar1;
    if (lVar6 == 0) {
      lVar6 = plVar1[1];
      while (plVar5 = plVar5 + 1, lVar6 == 0) {
        lVar6 = plVar5[1];
      }
    }
    while (lVar6 != plVar1[*(int64_t *)(lVar4 + 0x10)]) {
      uVar10 = unaff_R14 & 0xffffffff;
      plVar8 = *(int64_t **)(**(int64_t **)(lVar6 + 8) + 0x38);
      uVar7 = *(int64_t *)(**(int64_t **)(lVar6 + 8) + 0x40) - (int64_t)plVar8 >> 4;
      unaff_EBX = unaff_EBX + (int)uVar7;
      if (uVar7 != 0) {
        do {
          lVar2 = *plVar8;
          plVar8 = plVar8 + 2;
          iVar3 = unaff_EBX + 1;
          if ((*(uint *)(*(int64_t *)(lVar2 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
            iVar3 = unaff_EBX;
          }
          unaff_EBX = iVar3;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar9;
        } while ((uint64_t)(int64_t)(int)uVar9 < uVar7);
      }
      lVar6 = *(int64_t *)(lVar6 + 0x10);
      while (lVar6 == 0) {
        plVar8 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar6 = *plVar8;
      }
    }
  }
  uVar7 = unaff_R14;
  if (*(int64_t *)(unaff_R15 + 0x1c8) - *(int64_t *)(unaff_R15 + 0x1c0) >> 3 != 0) {
    do {
      iVar3 = DataStructure_ef1b0(*(uint64_t *)(unaff_R14 + *(int64_t *)(unaff_R15 + 0x1c0)));
      unaff_R14 = unaff_R14 + 8;
      uVar9 = (int)uVar7 + 1;
      unaff_EBX = unaff_EBX + iVar3;
      uVar7 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(unaff_R15 + 0x1c8) - *(int64_t *)(unaff_R15 + 0x1c0) >> 3));
  }
  return unaff_EBX;
}
// 函数: void DataStructure_ef3c0(void)
void DataStructure_ef3c0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}