#include "TaleWorlds.Native.Split.h"

// 99_part_13_part029.c - 2 个函数

// 函数: void FUN_1808b8620(uint64_t *param_1,longlong param_2,uint64_t param_3)
void FUN_1808b8620(uint64_t *param_1,longlong param_2,uint64_t param_3)

{
  longlong lVar1;
  int8_t auStack_98 [32];
  int8_t auStack_78 [80];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,param_2 + 0x20,1);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2 + 0x20,auStack_78);
  }
  FUN_1808b86e0(param_1,lVar1,*(int32_t *)(param_2 + 0x40),param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int thunk_FUN_1808b86e0(longlong param_1,longlong *param_2,int param_3,uint64_t *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  (**(code **)(*param_2 + 0x20))(param_2,&lStack_28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  plVar7 = (longlong *)(param_1 + 0x28);
  if (plVar2 != plVar7) {
    while ((((**(code **)(*(longlong *)plVar2[6] + 0x20))((longlong *)plVar2[6],&lStack_38),
            lStack_38 != lStack_28 || (lStack_30 != lStack_20)) ||
           (*(int *)(plVar2[7] + 0x40) != param_3))) {
      if ((plVar2 == plVar7) || (plVar2 = (longlong *)*plVar2, plVar2 == plVar7))
      goto LAB_1808b877e;
    }
    if (plVar2 != (longlong *)0x0) goto LAB_1808b8875;
  }
LAB_1808b877e:
  plVar4 = (longlong *)param_2[4];
  plVar2 = param_2 + 4;
  if (plVar4 != plVar2) {
    while ((int)plVar4[8] != param_3) {
      if ((plVar4 == plVar2) || (plVar4 = (longlong *)*plVar4, plVar4 == plVar2))
      goto LAB_1808b87a8;
    }
    if (plVar4 != (longlong *)0x0) {
      iVar6 = 0;
      plVar2 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x40,&unknown_var_2288_ptr,0x1f5,0,0,1
                            );
      if (plVar2 == (longlong *)0x0) {
        return 0x26;
      }
      *plVar2 = (longlong)plVar2;
      plVar2[1] = (longlong)plVar2;
      plVar3 = plVar2 + 2;
      plVar2[3] = 0;
      *plVar3 = (longlong)plVar3;
      plVar2[3] = (longlong)plVar3;
      plVar3 = plVar2 + 4;
      plVar2[5] = 0;
      *plVar3 = (longlong)plVar3;
      plVar2[5] = (longlong)plVar3;
      plVar2[6] = (longlong)param_2;
      plVar2[7] = (longlong)plVar4;
      plVar4 = (longlong *)*plVar2;
      iVar5 = iVar6;
      if (plVar4 == plVar2) goto LAB_1808b8857;
      do {
        plVar4 = (longlong *)*plVar4;
        iVar5 = iVar5 + 1;
      } while (plVar4 != plVar2);
      if (iVar5 == 0) {
LAB_1808b8857:
        plVar2[1] = *(longlong *)(param_1 + 0x30);
        *plVar2 = (longlong)plVar7;
        *(longlong **)(param_1 + 0x30) = plVar2;
        *(longlong **)plVar2[1] = plVar2;
      }
      else {
        iVar6 = 0x1c;
      }
      if (iVar6 != 0) {
        return iVar6;
      }
LAB_1808b8875:
      *param_4 = plVar2;
      return 0;
    }
  }
LAB_1808b87a8:
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    iVar6 = 0x1c;
  }
  else {
    *param_4 = 0;
    iVar6 = 0;
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808b86e0(longlong param_1,longlong *param_2,int param_3,uint64_t *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  (**(code **)(*param_2 + 0x20))(param_2,&lStack_28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  plVar7 = (longlong *)(param_1 + 0x28);
  if (plVar2 != plVar7) {
    while ((((**(code **)(*(longlong *)plVar2[6] + 0x20))((longlong *)plVar2[6],&lStack_38),
            lStack_38 != lStack_28 || (lStack_30 != lStack_20)) ||
           (*(int *)(plVar2[7] + 0x40) != param_3))) {
      if ((plVar2 == plVar7) || (plVar2 = (longlong *)*plVar2, plVar2 == plVar7))
      goto LAB_1808b877e;
    }
    if (plVar2 != (longlong *)0x0) goto LAB_1808b8875;
  }
LAB_1808b877e:
  plVar4 = (longlong *)param_2[4];
  plVar2 = param_2 + 4;
  if (plVar4 != plVar2) {
    while ((int)plVar4[8] != param_3) {
      if ((plVar4 == plVar2) || (plVar4 = (longlong *)*plVar4, plVar4 == plVar2))
      goto LAB_1808b87a8;
    }
    if (plVar4 != (longlong *)0x0) {
      iVar6 = 0;
      plVar2 = (longlong *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x40,&unknown_var_2288_ptr,0x1f5,0,0,1
                            );
      if (plVar2 == (longlong *)0x0) {
        return 0x26;
      }
      *plVar2 = (longlong)plVar2;
      plVar2[1] = (longlong)plVar2;
      plVar3 = plVar2 + 2;
      plVar2[3] = 0;
      *plVar3 = (longlong)plVar3;
      plVar2[3] = (longlong)plVar3;
      plVar3 = plVar2 + 4;
      plVar2[5] = 0;
      *plVar3 = (longlong)plVar3;
      plVar2[5] = (longlong)plVar3;
      plVar2[6] = (longlong)param_2;
      plVar2[7] = (longlong)plVar4;
      plVar4 = (longlong *)*plVar2;
      iVar5 = iVar6;
      if (plVar4 == plVar2) goto LAB_1808b8857;
      do {
        plVar4 = (longlong *)*plVar4;
        iVar5 = iVar5 + 1;
      } while (plVar4 != plVar2);
      if (iVar5 == 0) {
LAB_1808b8857:
        plVar2[1] = *(longlong *)(param_1 + 0x30);
        *plVar2 = (longlong)plVar7;
        *(longlong **)(param_1 + 0x30) = plVar2;
        *(longlong **)plVar2[1] = plVar2;
      }
      else {
        iVar6 = 0x1c;
      }
      if (iVar6 != 0) {
        return iVar6;
      }
LAB_1808b8875:
      *param_4 = plVar2;
      return 0;
    }
  }
LAB_1808b87a8:
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    iVar6 = 0x1c;
  }
  else {
    *param_4 = 0;
    iVar6 = 0;
  }
  return iVar6;
}



uint64_t FUN_1808b88a0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  plVar1 = (longlong *)(param_1 + 8);
  if ((*(byte *)(param_2 + 0x34) & 1) != 0) {
    param_1 = *plVar1 + 0x290;
  }
  lVar2 = func_0x0001808bfa00(*plVar1,param_2 + 0x10,*(int32_t *)(param_1 + 0x10));
  *param_3 = lVar2;
  if ((lVar2 == 0) && (uVar3 = FUN_1808b7800(param_1,param_2,param_3), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



uint64_t FUN_1808b8950(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  char acStackX_8 [8];
  
  plVar1 = (longlong *)(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x28);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    acStackX_8[0] = '\0';
    uVar4 = FUN_1808b2370(plVar3,param_2,acStackX_8);
    if ((int)uVar4 != 0) break;
    if (acStackX_8[0] == (char)uVar4) {
      if (plVar3 == plVar1) {
        return 0;
      }
      plVar2 = (longlong *)*plVar3;
      *(longlong **)plVar3[1] = plVar2;
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (longlong)plVar3;
      *plVar3 = (longlong)plVar3;
      plVar3 = plVar2;
    }
    else {
      if (plVar3 == plVar1) {
        return 0;
      }
      plVar3 = (longlong *)*plVar3;
    }
  }
  return uVar4;
}



uint64_t FUN_1808b89f0(longlong param_1,longlong *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint64_t *puVar6;
  int iVar7;
  uint64_t uStackX_8;
  
  uVar2 = func_0x0001808b1cf0(param_2,*(longlong *)(param_1 + 8) + 0x2c8);
  if ((int)uVar2 == 0) {
    lVar3 = (**(code **)*param_2)(param_2);
    lVar4 = (**(code **)*param_2)(param_2);
    iVar7 = 0;
    for (puVar1 = *(uint64_t **)(lVar4 + 0x20); puVar1 != (uint64_t *)(lVar4 + 0x20);
        puVar1 = (uint64_t *)*puVar1) {
      iVar7 = iVar7 + 1;
    }
    uVar5 = (int)*(uint *)((longlong)param_2 + 0x1c) >> 0x1f;
    if ((iVar7 <= (int)((*(uint *)((longlong)param_2 + 0x1c) ^ uVar5) - uVar5)) ||
       (uVar2 = FUN_180747f10(param_2 + 2,iVar7), (int)uVar2 == 0)) {
      puVar6 = (uint64_t *)(lVar3 + 0x20);
      for (puVar1 = (uint64_t *)*puVar6; puVar1 != puVar6; puVar1 = (uint64_t *)*puVar1) {
        uStackX_8 = 0;
        uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
        uVar2 = FUN_1808b7c00(param_1,puVar1,param_2,uVar2,&uStackX_8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808b1be0(param_2,uStackX_8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (puVar1 == puVar6) break;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint64_t FUN_1808b8a22(void)

{
  uint64_t *puVar1;
  uint64_t *in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint uVar5;
  longlong *unaff_RSI;
  uint64_t *puVar6;
  int iVar7;
  
  lVar2 = (*(code *)*in_RAX)();
  lVar3 = (**(code **)*unaff_RSI)();
  iVar7 = 0;
  for (puVar1 = *(uint64_t **)(lVar3 + 0x20); puVar1 != (uint64_t *)(lVar3 + 0x20);
      puVar1 = (uint64_t *)*puVar1) {
    iVar7 = iVar7 + 1;
  }
  uVar5 = (int)*(uint *)((longlong)unaff_RSI + 0x1c) >> 0x1f;
  if ((iVar7 <= (int)((*(uint *)((longlong)unaff_RSI + 0x1c) ^ uVar5) - uVar5)) ||
     (uVar4 = FUN_180747f10(unaff_RSI + 2,iVar7), (int)uVar4 == 0)) {
    puVar6 = (uint64_t *)(lVar2 + 0x20);
    for (puVar1 = (uint64_t *)*puVar6; puVar1 != puVar6; puVar1 = (uint64_t *)*puVar1) {
      (**(code **)(*unaff_RSI + 0x38))();
      uVar4 = FUN_1808b7c00();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808b1be0();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (puVar1 == puVar6) break;
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1808b8a70(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  longlong *unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t uStack0000000000000040;
  
  puVar1 = (uint64_t *)*unaff_RDI;
  while( true ) {
    if (puVar1 == unaff_RDI) {
      return 0;
    }
    uStack0000000000000040 = 0;
    (**(code **)(*unaff_RSI + 0x38))();
    uVar2 = FUN_1808b7c00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b1be0();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (puVar1 == unaff_RDI) break;
    puVar1 = (uint64_t *)*puVar1;
  }
  return 0;
}






// 函数: void FUN_1808b8ad6(void)
void FUN_1808b8ad6(void)

{
  return;
}






