#include "TaleWorlds.Native.Split.h"

// 01_initialization_part032.c - 16 个函数

// 函数: void FUN_1800606e0(longlong *param_1)
void FUN_1800606e0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uStackX_8;
  longlong *plStack_20;
  char cStack_18;
  
  if ((char)param_1[0xb] != '\0') {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
    do {
      cVar2 = (**(code **)(*param_1 + 0x20))(param_1,1);
      if (cVar2 == '\0') {
        FUN_18064e0d0(*(uint64_t *)(*plVar1 + 0x10),0);
        plStack_20 = param_1 + 0x33;
        cStack_18 = 0;
        iVar3 = _Mtx_lock();
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        cStack_18 = '\x01';
        if ((char)param_1[0x3d] == '\x01') {
          *(int8_t *)(param_1 + 0x3d) = 0;
        }
        else {
          uStackX_8 = 0x32;
          FUN_1800495d0(param_1 + 0x2a,&plStack_20,&uStackX_8);
          *(int8_t *)(param_1 + 0x3d) = 0;
          if (cStack_18 == '\0') goto LAB_1800607cc;
        }
        iVar3 = _Mtx_unlock(plStack_20);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
      }
LAB_1800607cc:
    } while ((char)param_1[0xb] != '\0');
  }
  return;
}



uint64_t FUN_1800607f0(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong *plStackX_18;
  
  plStackX_18 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x140) < 1) {
      plVar3 = (longlong *)0x0;
    }
    else {
      iVar2 = _Mtx_lock(param_1 + 0xf0);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      if ((*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xd0) >> 3) +
          ((*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xc0) >> 3) + -1) * 0x20 +
          (*(longlong *)(param_1 + 0xb8) - (longlong)*(longlong **)(param_1 + 0xa8) >> 3) != 0) {
        plStackX_18 = (longlong *)**(longlong **)(param_1 + 0xa8);
        if (plStackX_18 != (longlong *)0x0) {
          (**(code **)(*plStackX_18 + 0x28))(plStackX_18);
        }
        plVar3 = *(longlong **)(param_1 + 0xa8);
        if (plVar3 + 1 == *(longlong **)(param_1 + 0xb8)) {
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar3 + 0x38))();
          }
          if (*(longlong *)(param_1 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 8);
          *(longlong **)(param_1 + 0xc0) = plVar3;
          lVar1 = *plVar3;
          *(longlong *)(param_1 + 0xb0) = lVar1;
          *(longlong *)(param_1 + 0xb8) = lVar1 + 0x100;
          *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_1 + 0xb0);
        }
        else {
          *(longlong **)(param_1 + 0xa8) = plVar3 + 1;
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar3 + 0x38))();
          }
        }
      }
      iVar2 = _Mtx_unlock(param_1 + 0xf0);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      plVar3 = plStackX_18;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x60))(plStackX_18);
        (**(code **)(*plStackX_18 + 0x70))(plStackX_18);
        LOCK();
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
        UNLOCK();
        uVar4 = 1;
        goto LAB_180060993;
      }
    }
  }
  plStackX_18 = plVar3;
  uVar4 = 0;
LAB_180060993:
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))(plStackX_18);
  }
  return uVar4;
}



bool FUN_1800609c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plStackX_8;
  
  plStackX_8 = (longlong *)0x0;
  WaitForSingleObject(**(uint64_t **)(param_1 + 0x1f0),1,param_3,param_4,0xfffffffffffffffe);
  cVar2 = FUN_180060e40(*(uint64_t *)(param_1 + 0x60),param_1 + 0x78,&plStackX_8);
  plVar1 = plStackX_8;
  if (cVar2 != '\0') {
    (**(code **)(*plStackX_8 + 0x60))(plStackX_8);
    (**(code **)(*plVar1 + 0x70))(plVar1);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return cVar2 != '\0';
}



ulonglong FUN_180060a50(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong in_RAX;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar3 = *param_1;
  if ((*(longlong *)(param_2 + 6) == 0) && (lVar3 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)(param_1 + 0x4c);
  puVar8 = (ulonglong *)0x0;
  puVar4 = *(ulonglong **)(param_2 + 6);
  if (*(ulonglong **)(param_2 + 6) == (ulonglong *)0x0) {
    puVar5 = (ulonglong *)(lVar3 + 8);
    if (lVar3 == 0) {
      puVar5 = puVar8;
    }
    *(ulonglong **)(param_2 + 6) = puVar5;
    uVar9 = (uVar1 - *param_2 % uVar1) - 1;
    uVar10 = (ulonglong)uVar9;
    puVar4 = puVar5;
    if (uVar9 != 0) {
      do {
        if (puVar4 == (ulonglong *)0x0) {
          puVar4 = (ulonglong *)&DAT_00000008;
        }
        puVar6 = (ulonglong *)(*puVar4 - 8);
        if (*puVar4 == 0) {
          puVar6 = puVar8;
        }
        puVar4 = puVar6 + 1;
        if (puVar6 == (ulonglong *)0x0) {
          puVar4 = puVar8;
        }
        *(ulonglong **)(param_2 + 6) = puVar4;
        if (puVar4 == (ulonglong *)0x0) {
          *(ulonglong **)(param_2 + 6) = puVar5;
          puVar4 = puVar5;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  uVar9 = uVar2 - param_2[1];
  uVar10 = (ulonglong)uVar9;
  if (uVar1 <= uVar9) {
    uVar10 = (ulonglong)uVar9 % (ulonglong)uVar1;
  }
  uVar7 = uVar10;
  if ((int)uVar10 != 0) {
    do {
      if (puVar4 == (ulonglong *)0x0) {
        puVar4 = (ulonglong *)&DAT_00000008;
      }
      uVar10 = *puVar4;
      puVar5 = (ulonglong *)(uVar10 - 8);
      if (uVar10 == 0) {
        puVar5 = puVar8;
      }
      puVar4 = puVar8;
      if (puVar5 != (ulonglong *)0x0) {
        puVar4 = puVar5 + 1;
      }
      *(ulonglong **)(param_2 + 6) = puVar4;
      if (puVar4 == (ulonglong *)0x0) {
        puVar4 = (ulonglong *)(lVar3 + 8);
        if (lVar3 == 0) {
          puVar4 = puVar8;
        }
        *(ulonglong **)(param_2 + 6) = puVar4;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  param_2[1] = uVar2;
  param_2[2] = 0;
  *(ulonglong **)(param_2 + 4) = puVar4;
  return CONCAT71((int7)(uVar10 >> 8),1);
}



longlong * FUN_180060b80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  plVar2 = (longlong *)*param_1;
  *param_1 = lVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



longlong * FUN_180060bd0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return param_1;
}



uint64_t FUN_180060c60(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x60);
      lVar3 = *(longlong *)
               (plVar1[3] +
               (((uVar4 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 8);
      lVar6 = *(longlong *)(lVar3 + 8);
      plVar1 = (longlong *)(lVar6 + (ulonglong)((uint)uVar4 & 0x1f) * 8);
      FUN_180060b80(param_2,plVar1);
      plVar1 = (longlong *)*plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      LOCK();
      plVar1 = (longlong *)(lVar6 + 0x108);
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar5 == 0x1f) {
        *(uint64_t *)(lVar3 + 8) = 0;
        func_0x000180060c10(*(uint64_t *)(param_1 + 0x50),lVar6);
      }
      return 1;
    }
  }
  else {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x58);
      uVar7 = (ulonglong)((uint)uVar4 & 0x1f);
      lVar3 = *(longlong *)
               (plVar1[2] + 8 +
               (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      plVar1 = (longlong *)(lVar3 + uVar7 * 8);
      FUN_180060b80(param_2,plVar1);
      plVar1 = (longlong *)*plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      *(int8_t *)((lVar3 - uVar7) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  UNLOCK();
  return 0;
}



uint64_t FUN_180060d76(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  LOCK();
  puVar1 = (ulonglong *)(unaff_RDI + 0x28);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (unaff_RSI & 0xffffffff);
  UNLOCK();
  plVar4 = *(longlong **)(unaff_RDI + 0x60);
  lVar5 = *(longlong *)
           (plVar4[3] +
           (((uVar2 & 0xffffffffffffffe0) - **(longlong **)(plVar4[3] + plVar4[1] * 8) >> 5) +
            plVar4[1] & *plVar4 - 1U) * 8);
  lVar6 = *(longlong *)(lVar5 + 8);
  FUN_180060b80();
  plVar4 = *(longlong **)(lVar6 + (ulonglong)((uint)uVar2 & 0x1f) * 8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  LOCK();
  plVar4 = (longlong *)(lVar6 + 0x108);
  lVar3 = *plVar4;
  *plVar4 = *plVar4 + unaff_RSI;
  UNLOCK();
  if (lVar3 == 0x1f) {
    *(uint64_t *)(lVar5 + 8) = 0;
    func_0x000180060c10(*(uint64_t *)(unaff_RDI + 0x50),lVar6);
  }
  return 1;
}



int8_t FUN_180060e22(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  LOCK();
  *(longlong *)(unaff_RDI + 0x38) = *(longlong *)(unaff_RDI + 0x38) + unaff_RSI;
  UNLOCK();
  return 0;
}



uint64_t FUN_180060e40(uint64_t *param_1,longlong param_2,uint64_t param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x4c)))
     && (cVar1 = FUN_180060a50(), cVar1 == '\0')) {
    return 0;
  }
  plVar6 = (longlong *)0x0;
  plVar4 = (longlong *)(*(longlong *)(param_2 + 0x10) + -8);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    plVar4 = plVar6;
  }
  cVar1 = FUN_180060c60(plVar4,param_3);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)*param_1;
    plVar2 = *(longlong **)(param_2 + 0x10);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)&DAT_00000008;
    }
    lVar3 = *plVar2;
    while( true ) {
      plVar2 = (longlong *)(lVar3 + -8);
      if (lVar3 == 0) {
        plVar2 = plVar6;
      }
      plVar5 = plVar4;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      plVar2 = (longlong *)(*(longlong *)(param_2 + 0x10) + -8);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        plVar2 = plVar6;
      }
      if (plVar5 == plVar2) {
        return 0;
      }
      cVar1 = FUN_180060c60(plVar5,param_3);
      if (cVar1 != '\0') break;
      lVar3 = plVar5[1];
    }
    *(int32_t *)(param_2 + 8) = 1;
    plVar4 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = plVar6;
    }
    *(longlong **)(param_2 + 0x10) = plVar4;
  }
  else {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    if (*(int *)(param_2 + 8) == 0x100) {
      LOCK();
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      UNLOCK();
    }
  }
  return 1;
}



bool FUN_180060f50(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plStackX_8;
  
  plStackX_8 = (longlong *)0x0;
  cVar2 = FUN_180060e40(*(uint64_t *)(param_1 + 0x60),param_1 + 0x78,&plStackX_8,param_4,
                        0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (cVar2 != '\0') {
    (**(code **)(*plStackX_8 + 0x60))(plStackX_8);
    (**(code **)(*plVar1 + 0x70))(plVar1);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return cVar2 != '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180060fc0(longlong *param_1,longlong *param_2)
void FUN_180060fc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  plVar3 = (longlong *)param_1[6];
  plVar1 = plVar3 + 1;
  if (plVar1 == (longlong *)param_1[8]) {
    param_2 = (longlong *)*param_2;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    lVar7 = *param_1;
    lVar4 = param_1[1];
    if (lVar4 <= (param_1[9] - lVar7 >> 3) + 1) {
      lVar6 = param_1[5];
      uVar9 = lVar6 - lVar7 >> 3;
      lVar8 = param_1[9] - lVar6 >> 3;
      lVar2 = lVar8 * 8 + 8;
      if (uVar9 != 0) {
        uVar5 = uVar9 >> 1;
        if (uVar5 < 2) {
          uVar5 = 1;
        }
                    // WARNING: Subroutine does not return
        memmove(lVar7 + (uVar9 - uVar5) * 8,lVar6,lVar2);
      }
      lVar6 = lVar4;
      if (lVar4 == 0) {
        lVar6 = 1;
      }
      lVar6 = lVar4 + 2 + lVar6;
      lVar7 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)param_1[10],lVar7,uVar10);
      plVar1 = (longlong *)(lVar7 + (param_1[5] - *param_1 >> 3) * 8);
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar1,param_1[5],lVar2);
      }
      *param_1 = lVar7;
      param_1[1] = lVar6;
      param_1[5] = (longlong)plVar1;
      lVar7 = *plVar1;
      param_1[3] = lVar7;
      param_1[4] = lVar7 + 0x100;
      param_1[9] = (longlong)(plVar1 + lVar8);
      lVar7 = plVar1[lVar8];
      param_1[7] = lVar7;
      param_1[8] = lVar7 + 0x100;
    }
    uVar10 = FUN_18062b420(_DAT_180c8ed18,0x100,(char)param_1[10]);
    *(uint64_t *)(param_1[9] + 8) = uVar10;
    *(longlong **)param_1[6] = param_2;
    lVar7 = param_1[9];
    param_1[9] = lVar7 + 8;
    lVar7 = *(longlong *)(lVar7 + 8);
    param_1[7] = lVar7;
    param_1[8] = lVar7 + 0x100;
    param_1[6] = lVar7;
  }
  else {
    param_1[6] = (longlong)plVar1;
    param_2 = (longlong *)*param_2;
    *plVar3 = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800611a0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800611a0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  int8_t uVar7;
  
  uVar6 = 0xfffffffffffffffe;
  lVar5 = param_1 + 0xf0;
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar7 = 1;
  FUN_180060fc0(param_1 + 0x98,param_2);
  LOCK();
  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  UNLOCK();
  puVar1 = *(uint64_t **)(param_1 + 0x1f0);
  lVar2 = *(longlong *)(_DAT_180c82868 + 0x10);
  lVar3 = *(longlong *)(_DAT_180c82868 + 8);
  do {
    iVar4 = ReleaseSemaphore(*puVar1,lVar2 - lVar3 >> 3 & 0xffffffff,0,param_4,uVar6,lVar5,uVar7);
  } while (iVar4 == 0);
  FUN_1800466d0(param_1 + 0x150);
  iVar4 = _Mtx_unlock(lVar5);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}





// 函数: void FUN_180061290(uint64_t *param_1)
void FUN_180061290(uint64_t *param_1)

{
  CloseHandle(*param_1);
  return;
}





// 函数: void FUN_1800612b0(uint64_t *param_1)
void FUN_1800612b0(uint64_t *param_1)

{
  *param_1 = &UNK_180a3cf50;
  if (*(char *)((longlong)param_1 + 0xb1) != '\0') {
    FUN_180639250();
  }
  _Mtx_destroy_in_situ();
  *param_1 = &UNK_180a30778;
  param_1[7] = &UNK_180a3c3e0;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[7] = &UNK_18098bcb0;
  param_1[1] = &UNK_180a3c3e0;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &UNK_18098bcb0;
  return;
}



uint64_t *
FUN_180061300(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a3cf50;
  if (*(char *)((longlong)param_1 + 0xb1) != '\0') {
    FUN_180639250();
  }
  _Mtx_destroy_in_situ();
  FUN_1805065c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180061380(uint64_t param_1,longlong param_2)
void FUN_180061380(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int8_t auStack_268 [32];
  longlong lStack_248;
  uint64_t *puStack_238;
  int8_t auStack_230 [8];
  longlong lStack_228;
  uint uStack_220;
  longlong lStack_210;
  int8_t auStack_208 [80];
  uint64_t uStack_1b8;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [88];
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  lVar2 = _DAT_180c86928;
  lVar1 = _DAT_180c82868;
  uStack_1b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  lStack_210 = _DAT_180c86928;
  puStack_1a8 = &UNK_1809fdc18;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 6;
  strcpy_s(auStack_190,0x10,&UNK_1809fe2c0);
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x208,8,3);
  lStack_248 = lVar1 + 0x70;
  puStack_238 = puVar3;
  FUN_18020e0e0(puVar3,&puStack_1a8,3,lVar1 + 0x2e0);
  *puVar3 = &UNK_1809fe220;
  puStack_238 = puVar3;
  FUN_18020e840(puVar3);
  FUN_18005ea90(lVar1 + 0x48,&puStack_238);
  *(uint64_t **)(lVar2 + 400) = puVar3;
  puStack_1a8 = &UNK_18098bcb0;
  FUN_180627e10(_DAT_180c86870 + 0x170,auStack_230,&DAT_1809fc8c8);
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(auStack_230,uStack_220 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_220 + lStack_228,*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  FUN_18062c100(auStack_208,auStack_230);
  FUN_18062c1e0(auStack_208,1);
                    // WARNING: Subroutine does not return
  memset(auStack_138,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180061be0(longlong *param_1)
void FUN_180061be0(longlong *param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  lVar3 = _DAT_180c86928;
  plStackX_8 = param_1;
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
  plVar5 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  plStackX_18 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar6 = (longlong *)FUN_1800636f0(uVar4,4,lVar3);
  plStackX_20 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar7 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  if (plVar7 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plStackX_18 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar5;
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(uint64_t *)(lVar3 + 400));
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180061db0(longlong *param_1)
void FUN_180061db0(longlong *param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  lVar3 = _DAT_180c86928;
  plStackX_8 = param_1;
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
  plVar5 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  plStackX_18 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar6 = (longlong *)FUN_1800636f0(uVar4,3,lVar3);
  plStackX_20 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  plVar7 = (longlong *)FUN_1800636f0(uVar4,0,lVar3);
  if (plVar7 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plStackX_18 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    pplStackX_10 = (longlong **)plVar5;
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  puVar1 = *(uint64_t **)(lVar3 + 400);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  (*pcVar2)(puVar1,&plStackX_8);
  FUN_18020f150(*(uint64_t *)(lVar3 + 400));
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  return;
}





// 函数: void FUN_180061f80(void)
void FUN_180061f80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1800622d0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1800622d0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  FUN_180061f80(param_1,param_2,0xffffffff00000000,param_3,param_4,&stack0x00000028);
  return;
}





// 函数: void FUN_180062300(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180062300(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_180061f80(param_1,0,0xffffffff00000000,0xd,param_2,&uStackX_18);
  return;
}





// 函数: void FUN_180062340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180062340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_20;
  
  uStackX_20 = param_4;
  FUN_180061f80(param_1,param_2,0xffffffff00000000,0xd,param_3,&uStackX_20);
  return;
}





// 函数: void FUN_180062380(void)
void FUN_180062380(void)

{
  FUN_180061f80();
  return;
}





// 函数: void FUN_1800623b0(void)
void FUN_1800623b0(void)

{
  FUN_180061f80();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800623e0(longlong *param_1)
void FUN_1800623e0(longlong *param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  lVar3 = _DAT_180c86928;
  if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
    plStackX_8 = param_1;
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,0xfffffffffffffffe);
    plVar5 = (longlong *)FUN_1800636f0(uVar4,6,lVar3);
    plStackX_10 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    puVar1 = *(uint64_t **)(lVar3 + 400);
    pcVar2 = *(code **)*puVar1;
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    (*pcVar2)(puVar1,&plStackX_8);
    FUN_18020f150(*(uint64_t *)(lVar3 + 400));
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800624c0(void)
void FUN_1800624c0(void)

{
  int8_t auStack_208 [48];
  int32_t uStack_1d8;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  uStack_1d8 = 0;
  uStack_180 = _DAT_180c86928;
  uStack_190 = _time64(0);
  uStack_188 = _localtime64(&uStack_190);
                    // WARNING: Subroutine does not return
  memset(auStack_138,0,0xff);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



