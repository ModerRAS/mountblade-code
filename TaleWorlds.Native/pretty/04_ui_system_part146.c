#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part146.c - 2 个函数

// 函数: void FUN_180751d7a(longlong param_1)
void FUN_180751d7a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint64_t *puVar4;
  int iVar5;
  uint64_t *unaff_RBX;
  int unaff_EDI;
  int32_t unaff_0000003c;
  
  puVar4 = (uint64_t *)unaff_RBX[0x17];
  if (((puVar4 == (uint64_t *)0x0) || (puVar4 == unaff_RBX)) || (param_1 != puVar4[0xc])) {
    FUN_180773410(param_1,1);
    unaff_RBX[0xc] = CONCAT44(unaff_0000003c,unaff_EDI);
  }
  cVar3 = (**(code **)*unaff_RBX)();
  if (cVar3 != '\0') {
    if ((unaff_RBX[0x17] != 0) && (*(longlong *)(unaff_RBX[0x17] + 0x178) == unaff_RBX[0x2f])) {
      unaff_RBX[0x2f] = CONCAT44(unaff_0000003c,unaff_EDI);
    }
    if (unaff_RBX[0x2f] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_RBX[0x2f],&unknown_var_9552_ptr,0x2bd,1);
    }
  }
  plVar1 = (longlong *)unaff_RBX[0x21];
  if (plVar1 != (longlong *)0x0) {
    if ((unaff_RBX[0x17] == 0) || (*(longlong **)(unaff_RBX[0x17] + 0x108) != plVar1)) {
      if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1,&unknown_var_9552_ptr,0x2cc,1);
      }
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*plVar1,&unknown_var_9552_ptr,0x2ca,1);
    }
    unaff_RBX[0x21] = CONCAT44(unaff_0000003c,unaff_EDI);
  }
  lVar2 = unaff_RBX[0x17];
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0xb0))) {
    puVar4 = *(uint64_t **)(lVar2 + 0xa0);
    iVar5 = unaff_EDI;
    do {
      if ((*(uint64_t **)(lVar2 + 0xa0) != (uint64_t *)0x0) &&
         ((uint64_t *)*puVar4 == unaff_RBX)) {
        FUN_180752820(lVar2,iVar5,0,1);
        break;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0xb0));
  }
  if (unaff_RBX[7] == 0) {
    unaff_RBX[6] = CONCAT44(unaff_0000003c,unaff_EDI);
    FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
    plVar1 = unaff_RBX + 1;
    *(longlong *)unaff_RBX[2] = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = unaff_RBX[2];
    unaff_RBX[2] = plVar1;
    *plVar1 = (longlong)plVar1;
    plVar1 = unaff_RBX + 0x24;
    *(longlong *)unaff_RBX[0x25] = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = unaff_RBX[0x25];
    unaff_RBX[0x25] = plVar1;
    *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
    FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_RBX[7],&unknown_var_9552_ptr,0x2e5,1);
}



int32_t FUN_180751fc5(void)

{
  int32_t unaff_EDI;
  longlong unaff_R12;
  
  if (unaff_R12 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}





// 函数: void FUN_180751ff0(longlong param_1)
void FUN_180751ff0(longlong param_1)

{
  *(int32_t *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(param_1 + 0x140),0,*(int32_t *)(param_1 + 0x154));
  }
  if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180752031. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0xb0))(param_1);
    return;
  }
  return;
}



uint64_t FUN_180752040(longlong param_1,int32_t param_2,int32_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  int32_t auStackX_8 [2];
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x170) == 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0x2c) & 0x400) == 0)) {
    return 0xe;
  }
  *(int32_t *)(param_1 + 0x40) = param_3;
  uVar2 = FUN_180773610();
  if ((int)uVar2 == 0) {
    iVar1 = FUN_180772f60(*(uint64_t *)(param_1 + 0x60),auStackX_8,2);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x40) = auStackX_8[0];
    }
    if (*(code **)(param_1 + 0x150) != (code *)0x0) {
      (**(code **)(param_1 + 0x150))
                (*(uint64_t *)(param_1 + 0x158),param_2,*(int32_t *)(param_1 + 0x40),2);
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1807520e0(longlong param_1,int32_t param_2)

{
  int32_t uVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  int32_t auStackX_8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    *(int32_t *)(lVar2 + 0x158) = 0;
    if (*(longlong *)(lVar2 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
      memset(*(longlong *)(lVar2 + 0x140),0,*(int32_t *)(lVar2 + 0x154));
    }
    if (*(code **)(lVar2 + 0xb0) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb0))(lVar2);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  uVar1 = *(int32_t *)(param_1 + 0xc0);
  if ((*(longlong *)(lVar2 + 0x170) == 0) && ((*(uint *)(lVar2 + 0x2c) & 0x400) == 0)) {
    return 0xe;
  }
  *(int32_t *)(param_1 + 0x40) = param_2;
  uVar4 = FUN_180773610(lVar2,uVar1,param_2,2);
  if ((int)uVar4 == 0) {
    iVar3 = FUN_180772f60(*(uint64_t *)(param_1 + 0x60),auStackX_8,2);
    if (iVar3 == 0) {
      *(int32_t *)(param_1 + 0x40) = auStackX_8[0];
    }
    if (*(code **)(param_1 + 0x150) != (code *)0x0) {
      (**(code **)(param_1 + 0x150))
                (*(uint64_t *)(param_1 + 0x158),uVar1,*(int32_t *)(param_1 + 0x40),2);
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_180752300(uint64_t *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (((((param_3 - 1U & 0xfffffffc) != 0) || (param_3 == 3)) || ((param_5 - 1U & 0xfffffffc) != 0))
     || (param_5 == 3)) {
    return 0x13;
  }
  uVar8 = 0x20;
  uVar7 = param_2;
  if (param_3 != 2) {
    uVar7 = 0;
    if (param_3 == 4) {
      if (*(uint *)(param_1 + 0xd) != 0) {
        iVar1 = *(int *)(param_1 + 5);
        if (iVar1 == 1) {
          uVar6 = 8;
        }
        else if (iVar1 == 2) {
          uVar6 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar6 = 0x18;
        }
        else {
          uVar6 = uVar8;
          if ((iVar1 != 4) && (uVar7 = param_2, iVar1 != 5)) goto LAB_1807523ea;
        }
        uVar7 = (uint)((((ulonglong)param_2 << 3) / uVar6 & 0xffffffff) /
                      (ulonglong)*(uint *)(param_1 + 0xd));
      }
    }
    else if (param_3 == 1) {
      uVar7 = (uint)(longlong)((float)param_2 * 0.001 * *(float *)((longlong)param_1 + 0x6c));
    }
  }
LAB_1807523ea:
  uVar9 = param_4;
  if (param_5 != 2) {
    uVar9 = 0;
    if (param_5 == 4) {
      if (*(uint *)(param_1 + 0xd) != 0) {
        iVar1 = *(int *)(param_1 + 5);
        if (iVar1 == 1) {
          uVar8 = 8;
        }
        else if (iVar1 == 2) {
          uVar8 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar8 = 0x18;
        }
        else if ((iVar1 != 4) && (uVar9 = param_4, iVar1 != 5)) goto LAB_18075246d;
        uVar9 = (uint)((((ulonglong)param_4 << 3) / uVar8 & 0xffffffff) /
                      (ulonglong)*(uint *)(param_1 + 0xd));
      }
    }
    else if (param_5 == 1) {
      uVar9 = (uint)(longlong)((float)param_4 * 0.001 * *(float *)((longlong)param_1 + 0x6c));
    }
  }
LAB_18075246d:
  uVar2 = *(uint *)((longlong)param_1 + 0x44);
  uVar3 = 0;
  if (uVar7 < uVar2) {
    uVar3 = uVar7;
  }
  uVar7 = uVar2 - 1;
  if (uVar9 < uVar2) {
    uVar7 = uVar9;
  }
  uVar9 = uVar2 - 1;
  if (uVar7 != 0) {
    uVar9 = uVar7;
  }
  if (uVar3 < uVar9) {
    *(uint *)((longlong)param_1 + 0x4c) = uVar3;
    *(uint *)(param_1 + 10) = (uVar9 - uVar3) + 1;
    cVar4 = (**(code **)*param_1)(param_1);
    if ((cVar4 != '\0') &&
       (((*(int *)((longlong)param_1 + 0x4c) != 0 ||
         (*(int *)(param_1 + 10) != *(int *)((longlong)param_1 + 0x44))) &&
        ((*(byte *)((longlong)param_1 + 0x2c) & 6) != 0)))) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
      UNLOCK();
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x1f;
  }
  return uVar5;
}



uint64_t FUN_1807524e0(uint64_t *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  if ((param_2 & 7) == 0) goto LAB_180752566;
  uVar4 = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff8;
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      uVar4 = uVar4 | 2;
      goto LAB_18075251c;
    }
    if ((param_2 & 4) != 0) {
      uVar4 = uVar4 | 4;
      goto LAB_18075251c;
    }
  }
  else {
    uVar4 = uVar4 | 1;
LAB_18075251c:
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  }
  cVar3 = (**(code **)*param_1)();
  if (cVar3 != '\0') {
    if (((param_2 & 6) != 0) && (-1 < (char)*(int32_t *)(param_1 + 0xb))) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffb7;
      UNLOCK();
      if (param_1[0x17] != 0) {
        LOCK();
        puVar1 = (uint *)(param_1[0x17] + 0x58);
        *puVar1 = *puVar1 & 0xffffffb7;
        UNLOCK();
      }
    }
    *(uint *)(param_1[0x2f] + 0x38) = *(uint *)(param_1[0x2f] + 0x38) & 0xfffffff8;
    *(uint *)(param_1[0x2f] + 0x38) =
         *(uint *)(param_1[0x2f] + 0x38) | *(uint *)((longlong)param_1 + 0x2c) & 7;
  }
LAB_180752566:
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffbffff;
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x80000;
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfff7ffff;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40000;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        if ((param_2 >> 0x17 & 1) == 0) {
          if ((param_2 >> 0x1a & 1) != 0) {
            *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xff0fffff;
            *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x4000000;
          }
        }
        else {
          *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb8fffff;
          *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x800000;
        }
      }
      else {
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb4fffff;
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x400000;
      }
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb2fffff;
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x200000;
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb1fffff;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x100000;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x2c) | 0x40000000;
  if ((param_2 & 0x40000000) == 0) {
    uVar4 = *(uint *)((longlong)param_1 + 0x2c) & 0xbfffffff;
  }
  uVar2 = uVar4 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar2 = uVar4 & 0x7fffffff;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  cVar3 = (**(code **)*param_1)(param_1);
  if (cVar3 == '\0') {
    if ((param_2 >> 0x11 & 1) == 0) {
      uVar4 = *(uint *)((longlong)param_1 + 0x2c) & 0xfffdffff;
    }
    else {
      uVar4 = *(uint *)((longlong)param_1 + 0x2c) | 0x20000;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  }
  if ((param_2 & 8) != 0) {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xffffffef;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
    return 0;
  }
  if ((param_2 & 0x10) != 0) {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x10;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



