#include "TaleWorlds.Native.Split.h"

// 99_part_10_part022.c - 14 个函数

// 函数: void FUN_1806b2ea0(undefined8 *param_1)
void FUN_1806b2ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  *param_1 = &UNK_18094b208;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    puVar1 = param_1 + 8;
    do {
      plVar6 = *(longlong **)(param_1[3] + (ulonglong)(iVar3 - 1) * 8);
      if (puVar1 != (undefined8 *)0x0) {
        _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
      }
      lVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6);
        if (puVar5 == param_1) {
          (**(code **)(*plVar6 + 0x30))(plVar6,0);
          uVar9 = *(uint *)(param_1 + 4);
          uVar8 = 0;
          if (uVar9 != 0) {
            do {
              if (*(longlong **)(uVar8 * 8 + param_1[3]) == plVar6) {
                uVar10 = 0;
                if (*(int *)(param_1 + 7) != 0) {
                  do {
                    plVar2 = *(longlong **)(param_1[6] + uVar10 * 8);
                    (**(code **)(*plVar2 + 0x10))(plVar2,plVar6);
                    uVar9 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar9;
                  } while (uVar9 < *(uint *)(param_1 + 7));
                  uVar9 = *(uint *)(param_1 + 4);
                }
                *(uint *)(param_1 + 4) = uVar9 - 1;
                *(undefined8 *)(param_1[3] + uVar8 * 8) =
                     *(undefined8 *)(param_1[3] + (ulonglong)(uVar9 - 1) * 8);
              }
              uVar9 = *(uint *)(param_1 + 4);
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while (uVar7 < uVar9);
          }
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))();
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      if (puVar1 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
      }
      iVar3 = *(int *)(param_1 + 4);
    } while (iVar3 != 0);
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[8]);
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar6 + 0x10))(plVar6,lVar4);
  }
  if ((((*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x3c))) && (param_1[6] != 0)) {
    (**(code **)(**(longlong **)param_1[5] + 0x10))();
  }
  if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (param_1[3] != 0)) {
    (**(code **)(**(longlong **)param_1[2] + 0x10))();
  }
  *param_1 = &UNK_18094a308;
  return;
}






// 函数: void FUN_1806b2ead(undefined8 *param_1)
void FUN_1806b2ead(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 in_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  *param_1 = in_RAX;
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    puVar1 = param_1 + 8;
    do {
      plVar6 = *(longlong **)(param_1[3] + (ulonglong)(iVar3 - 1) * 8);
      if (puVar1 != (undefined8 *)0x0) {
        _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
      }
      lVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6);
        if (puVar5 == param_1) {
          (**(code **)(*plVar6 + 0x30))(plVar6,0);
          uVar9 = *(uint *)(param_1 + 4);
          uVar8 = 0;
          if (uVar9 != 0) {
            do {
              if (*(longlong **)(uVar8 * 8 + param_1[3]) == plVar6) {
                uVar10 = 0;
                if (*(int *)(param_1 + 7) != 0) {
                  do {
                    plVar2 = *(longlong **)(param_1[6] + uVar10 * 8);
                    (**(code **)(*plVar2 + 0x10))(plVar2,plVar6);
                    uVar9 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar9;
                  } while (uVar9 < *(uint *)(param_1 + 7));
                  uVar9 = *(uint *)(param_1 + 4);
                }
                *(uint *)(param_1 + 4) = uVar9 - 1;
                *(undefined8 *)(param_1[3] + uVar8 * 8) =
                     *(undefined8 *)(param_1[3] + (ulonglong)(uVar9 - 1) * 8);
              }
              uVar9 = *(uint *)(param_1 + 4);
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while (uVar7 < uVar9);
          }
        }
        else {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))();
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
      if (puVar1 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
      }
      iVar3 = *(int *)(param_1 + 4);
    } while (iVar3 != 0);
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[8]);
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar6 + 0x10))(plVar6,lVar4);
  }
  if ((((*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x3c))) && (param_1[6] != 0)) {
    (**(code **)(**(longlong **)param_1[5] + 0x10))();
  }
  if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (param_1[3] != 0)) {
    (**(code **)(**(longlong **)param_1[2] + 0x10))();
  }
  *param_1 = &UNK_18094a308;
  return;
}






// 函数: void FUN_1806b2ec3(longlong param_1)
void FUN_1806b2ec3(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int in_EAX;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *unaff_RDI;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  while( true ) {
    plVar5 = *(longlong **)(unaff_RDI[3] + (ulonglong)(in_EAX - 1) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
    }
    lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x38))(plVar5);
      if (puVar4 == unaff_RDI) {
        (**(code **)(*plVar5 + 0x30))(plVar5,0);
        uVar8 = *(uint *)(unaff_RDI + 4);
        uVar7 = 0;
        if (uVar8 != 0) {
          do {
            if (*(longlong **)(uVar7 * 8 + unaff_RDI[3]) == plVar5) {
              uVar9 = 0;
              if (*(int *)(unaff_RDI + 7) != 0) {
                do {
                  plVar2 = *(longlong **)(unaff_RDI[6] + uVar9 * 8);
                  (**(code **)(*plVar2 + 0x10))(plVar2,plVar5);
                  uVar8 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar8;
                } while (uVar8 < *(uint *)(unaff_RDI + 7));
                uVar8 = *(uint *)(unaff_RDI + 4);
              }
              *(uint *)(unaff_RDI + 4) = uVar8 - 1;
              *(undefined8 *)(unaff_RDI[3] + uVar7 * 8) =
                   *(undefined8 *)(unaff_RDI[3] + (ulonglong)(uVar8 - 1) * 8);
            }
            uVar8 = *(uint *)(unaff_RDI + 4);
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < uVar8);
        }
      }
      else {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x38))();
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if (puVar1 != (undefined8 *)0x0) break;
    in_EAX = *(int *)(unaff_RDI + 4);
    if (in_EAX == 0) {
      __1MutexImpl_shdfnd_physx__QEAA_XZ(unaff_RDI[8]);
      lVar3 = unaff_RDI[8];
      if (lVar3 != 0) {
        plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar3);
      }
      if ((((*(uint *)((longlong)unaff_RDI + 0x3c) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x3c))) && (unaff_RDI[6] != 0)) {
        (**(code **)(**(longlong **)unaff_RDI[5] + 0x10))();
      }
      if ((((*(uint *)((longlong)unaff_RDI + 0x24) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x24))) && (unaff_RDI[3] != 0)) {
        (**(code **)(**(longlong **)unaff_RDI[2] + 0x10))();
      }
      *unaff_RDI = &UNK_18094a308;
      return;
    }
  }
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
}






// 函数: void FUN_1806b2fc2(void)
void FUN_1806b2fc2(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  
  __1MutexImpl_shdfnd_physx__QEAA_XZ(unaff_RDI[8]);
  lVar1 = unaff_RDI[8];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  if ((((*(uint *)((longlong)unaff_RDI + 0x3c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x3c))) && (unaff_RDI[6] != 0)) {
    (**(code **)(**(longlong **)unaff_RDI[5] + 0x10))();
  }
  if ((((*(uint *)((longlong)unaff_RDI + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x24))) && (unaff_RDI[3] != 0)) {
    (**(code **)(**(longlong **)unaff_RDI[2] + 0x10))();
  }
  *unaff_RDI = &UNK_18094a308;
  return;
}






// 函数: void FUN_1806b2ff9(undefined8 param_1,longlong param_2)
void FUN_1806b2ff9(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  undefined8 *unaff_RDI;
  
  if ((-1 < in_EAX) && (param_2 != 0)) {
    (**(code **)(**(longlong **)unaff_RDI[5] + 0x10))();
  }
  if ((((*(uint *)((longlong)unaff_RDI + 0x24) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)unaff_RDI + 0x24))) && (unaff_RDI[3] != 0)) {
    (**(code **)(**(longlong **)unaff_RDI[2] + 0x10))();
  }
  *unaff_RDI = &UNK_18094a308;
  return;
}



undefined8 FUN_1806b30a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1806b2b20();
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



undefined8 FUN_1806b30e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1806b2c20();
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



longlong FUN_1806b3120(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x80) + 0x10))();
  }
  FUN_1806b2c20(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,200);
  }
  return param_1;
}



undefined8 FUN_1806b3180(undefined8 param_1,ulonglong param_2)

{
  FUN_1806b2ce0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1e0);
  }
  return param_1;
}



undefined8 * FUN_1806b31c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094b1b8;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1806b31f0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (param_1[0x15] != 0) {
    (**(code **)(**(longlong **)param_1[0x13] + 0x10))();
  }
  FUN_1806b2c20(param_1 + 3);
  param_1[2] = &UNK_18094a308;
  param_1[1] = &UNK_18094b1b8;
  *param_1 = &UNK_18094a268;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0xe0);
  }
  return param_1;
}



undefined8 FUN_1806b32a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1806b2ea0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}






// 函数: void FUN_1806b32e0(longlong param_1,undefined8 param_2)
void FUN_1806b32e0(longlong param_1,undefined8 param_2)

{
  undefined8 uStackX_8;
  
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x38));
  uStackX_8 = param_2;
  if (*(uint *)(param_1 + 0x130) < (*(uint *)(param_1 + 0x134) & 0x7fffffff)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x128) + (ulonglong)*(uint *)(param_1 + 0x130) * 8) =
         param_2;
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  }
  else {
    FUN_1806b4c20(param_1 + 0x120,&uStackX_8);
  }
  *(undefined1 *)(param_1 + 0x138) = 1;
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x38));
  return;
}






// 函数: void FUN_1806b3350(longlong param_1,undefined8 param_2)
void FUN_1806b3350(longlong param_1,undefined8 param_2)

{
  undefined8 auStackX_8 [4];
  
  if ((*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= *(uint *)(param_1 + 0x58)) {
    auStackX_8[0] = param_2;
    FUN_1806b4c20(param_1 + 0x48,auStackX_8);
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 8) =
       param_2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}






// 函数: void FUN_1806b33a0(longlong param_1,longlong *param_2)
void FUN_1806b33a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plStackX_8;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar2 == param_1) goto FUN_1806b345d;
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  plStackX_8 = param_2;
  if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
    *(longlong **)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
         param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    FUN_1806b4c20(param_1 + 0x10,&plStackX_8);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar5 * 8);
      (**(code **)(*plVar3 + 8))(plVar3,param_2);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
FUN_1806b345d:
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  return;
}






// 函数: void FUN_1806b33a6(longlong param_1,longlong *param_2)
void FUN_1806b33a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *in_stack_00000030;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    if (lVar2 == param_1) goto FUN_1806b345d;
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  in_stack_00000030 = param_2;
  if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
    *(longlong **)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
         param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    FUN_1806b4c20(param_1 + 0x10,&stack0x00000030);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar5 * 8);
      (**(code **)(*plVar3 + 8))(plVar3,param_2);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
FUN_1806b345d:
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  return;
}






// 函数: void FUN_1806b3403(longlong param_1)
void FUN_1806b3403(longlong param_1)

{
  uint in_EAX;
  undefined8 *unaff_RBX;
  uint uVar1;
  ulonglong uVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if ((uint)param_1 < in_EAX) {
    *(longlong **)(*(longlong *)(unaff_RSI + 0x18) + param_1 * 8) = unaff_RDI;
    *(int *)(unaff_RSI + 0x20) = *(int *)(unaff_RSI + 0x20) + 1;
  }
  else {
    FUN_1806b4c20(unaff_RSI + 0x10,&stack0x00000030);
  }
  (**(code **)(*unaff_RDI + 0x30))();
  uVar2 = 0;
  if (*(int *)(unaff_RSI + 0x38) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x30) + uVar2 * 8) + 8))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(unaff_RSI + 0x38));
  }
  if (unaff_RBX != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
    return;
  }
  return;
}






// 函数: void FUN_1806b345d(void)
void FUN_1806b345d(void)

{
  undefined8 *unaff_RBX;
  
  if (unaff_RBX != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
    return;
  }
  return;
}






// 函数: void FUN_1806b346c(void)
void FUN_1806b346c(void)

{
  undefined8 *unaff_RBX;
  
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*unaff_RBX);
  return;
}






// 函数: void FUN_1806b3480(longlong param_1,longlong *param_2)
void FUN_1806b3480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plStackX_8;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  plStackX_8 = param_2;
  if (*(uint *)(param_1 + 0x38) < (*(uint *)(param_1 + 0x3c) & 0x7fffffff)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8) =
         param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  else {
    FUN_1806b4c20(param_1 + 0x28,&plStackX_8);
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      (**(code **)(*param_2 + 8))
                (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  if (puVar1 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*puVar1);
  }
  return;
}






// 函数: void FUN_1806b3520(longlong param_1,undefined2 param_2,ulonglong param_3,int param_4,
void FUN_1806b3520(longlong param_1,undefined2 param_2,ulonglong param_3,int param_4,
                  ulonglong param_5,ulonglong param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar12;
  undefined1 uStackX_8;
  byte bStackX_9;
  undefined2 uStackX_a;
  undefined2 uStackX_10;
  undefined4 uStack_88;
  undefined1 uStack_84;
  byte bStack_83;
  undefined2 uStack_82;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    uVar7 = *(ulonglong *)(param_1 + -0x48);
    lVar1 = param_1 + -0xb0;
    uStack_80 = uVar7;
    uStackX_10 = param_2;
    if (uVar7 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(uVar7 + 8));
      uStack_80 = *(ulonglong *)(param_1 + -0x48);
    }
    uStack_64 = (uint)uStack_64._2_2_ << 0x10;
    uStack_70 = param_3;
    iStack_68 = param_4;
    if (uStack_80 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(uStack_80 + 8));
    }
    if ((((*(int *)(param_1 + -0x28) == param_4) && (*(ulonglong *)(param_1 + -0x30) == param_3)) &&
        (*(char *)(param_1 + -0x24) == '\0')) && (*(char *)(param_1 + -0x23) == '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    lVar2 = *(longlong *)(param_1 + -0x20);
    uVar11 = 3;
    bVar9 = 3;
    uVar10 = 3;
    if (bVar5) {
      uStackX_8 = 3;
      uStack_88 = 3;
      uStack_78 = param_5;
      if (lVar2 != 0) {
        uStack_78 = param_5 - lVar2;
        if (uStack_78 < 0x100) {
          uStackX_8 = 0;
          uStack_88 = 0;
        }
        else if (uStack_78 < 0x10000) {
          uStackX_8 = 1;
          uStack_88 = 1;
        }
        else if (uStack_78 < 0x100000000) {
          uStackX_8 = 2;
          uStack_88 = 2;
        }
        else {
          uStack_88 = 3;
          uStack_78 = param_5;
        }
      }
      *(ulonglong *)(param_1 + -0x20) = param_5;
      lVar2 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(undefined1 **)(lVar2 + 0x18) = 3;
      *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
      lVar2 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(undefined1 **)(lVar2 + 0x18) = uStackX_8;
      *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
      lVar2 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(undefined1 **)(lVar2 + 0x18);
      *puVar3 = (char)uStackX_10;
      puVar3[1] = uStackX_10._1_1_;
      *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
      FUN_1806b6980(param_1 + -0x38,&UNK_18094b528,&uStack_78,uStack_88);
      if (*(uint *)(param_1 + -0x60) <=
          (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
        FUN_1806b4470(lVar1);
      }
    }
    else {
      bVar12 = 3;
      uStackX_8 = 1;
      *(undefined4 *)(param_1 + -0x30) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + -0x2c) = uStack_70._4_4_;
      *(int *)(param_1 + -0x28) = iStack_68;
      *(int *)(param_1 + -0x24) = uStack_64;
      uStack_60 = param_5;
      if (lVar2 != 0) {
        uStack_60 = param_5 - lVar2;
        if (uStack_60 < 0x100) {
          bVar12 = 0;
        }
        else if (uStack_60 < 0x10000) {
          bVar12 = 1;
        }
        else if (uStack_60 < 0x100000000) {
          bVar12 = 2;
        }
        else {
          bVar12 = 3;
          uStack_60 = param_5;
        }
      }
      if (param_3 < 0x100) {
        bVar6 = 0;
      }
      else if (param_3 < 0x10000) {
        bVar6 = 4;
      }
      else {
        bVar6 = 0xc;
        if (param_3 < 0x100000000) {
          bVar6 = 8;
        }
      }
      *(ulonglong *)(param_1 + -0x20) = param_5;
      lVar2 = *(longlong *)(param_1 + -0x38);
      bStackX_9 = bVar12 | bVar6;
      uStackX_a = param_2;
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(undefined1 **)(lVar2 + 0x18) = 1;
      *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
      lVar2 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 1);
      **(byte **)(lVar2 + 0x18) = bVar12 | bVar6;
      *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 1;
      lVar2 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
      puVar3 = *(undefined1 **)(lVar2 + 0x18);
      *puVar3 = (char)uStackX_10;
      puVar3[1] = uStackX_10._1_1_;
      *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
      FUN_1806b2670(&uStack_70,param_1 + -0x38,&uStackX_8);
      if (*(uint *)(param_1 + -0x60) <=
          (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90))) {
        FUN_1806b4470(lVar1);
      }
    }
    if (uStack_80 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(uStack_80 + 8));
    }
    if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(uVar7 + 8));
    }
    lVar2 = *(longlong *)(param_1 + -0x48);
    lVar8 = lVar2;
    if (lVar2 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(lVar2 + 8));
      lVar8 = *(longlong *)(param_1 + -0x48);
    }
    uStack_4c = (uint)uStack_4c._2_2_ << 0x10;
    uStack_58 = param_3;
    iStack_50 = param_4;
    if (lVar8 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(lVar8 + 8));
    }
    if (((*(int *)(param_1 + -0x28) == param_4) && (*(ulonglong *)(param_1 + -0x30) == param_3)) &&
       ((*(char *)(param_1 + -0x24) == '\0' && (*(char *)(param_1 + -0x23) == '\0')))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    lVar4 = *(longlong *)(param_1 + -0x20);
    if (bVar5) {
      uStack_80 = param_6;
      if (lVar4 != 0) {
        uVar7 = param_6 - lVar4;
        uStack_80 = uVar7;
        if (uVar7 < 0x100) {
          uVar10 = 0;
          uVar11 = 0;
        }
        else if (uVar7 < 0x10000) {
          uVar10 = 1;
          uVar11 = 1;
        }
        else {
          uStack_80 = param_6;
          if (uVar7 < 0x100000000) {
            uVar10 = 2;
            uVar11 = 2;
            uStack_80 = uVar7;
          }
        }
      }
      *(ulonglong *)(param_1 + -0x20) = param_6;
      lVar4 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
      **(undefined1 **)(lVar4 + 0x18) = 4;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
      lVar4 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
      **(undefined1 **)(lVar4 + 0x18) = uVar10;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
      lVar4 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 2);
      puVar3 = *(undefined1 **)(lVar4 + 0x18);
      *puVar3 = (char)uStackX_10;
      puVar3[1] = uStackX_10._1_1_;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 2;
      FUN_1806b6980(param_1 + -0x38,&UNK_18094b528,&uStack_80,uVar11);
    }
    else {
      uStack_82 = uStackX_10;
      uStack_84 = 2;
      *(undefined4 *)(param_1 + -0x30) = (undefined4)uStack_58;
      *(undefined4 *)(param_1 + -0x2c) = uStack_58._4_4_;
      *(int *)(param_1 + -0x28) = iStack_50;
      *(int *)(param_1 + -0x24) = uStack_4c;
      uStack_48 = param_6;
      if (lVar4 != 0) {
        uStack_48 = param_6 - lVar4;
        if (uStack_48 < 0x100) {
          bVar9 = 0;
        }
        else if (uStack_48 < 0x10000) {
          bVar9 = 1;
        }
        else if (uStack_48 < 0x100000000) {
          bVar9 = 2;
        }
        else {
          bVar9 = 3;
          uStack_48 = param_6;
        }
      }
      if (param_3 < 0x100) {
        bVar12 = 0;
      }
      else if (param_3 < 0x10000) {
        bVar12 = 4;
      }
      else {
        bVar12 = 0xc;
        if (param_3 < 0x100000000) {
          bVar12 = 8;
        }
      }
      *(ulonglong *)(param_1 + -0x20) = param_6;
      lVar4 = *(longlong *)(param_1 + -0x38);
      bStack_83 = bVar9 | bVar12;
      FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
      **(undefined1 **)(lVar4 + 0x18) = 2;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
      lVar4 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 1);
      **(byte **)(lVar4 + 0x18) = bVar9 | bVar12;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
      lVar4 = *(longlong *)(param_1 + -0x38);
      FUN_1806b5600(lVar4,(*(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x10)) + 2);
      puVar3 = *(undefined1 **)(lVar4 + 0x18);
      *puVar3 = (char)uStackX_10;
      puVar3[1] = uStackX_10._1_1_;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 2;
      FUN_1806b2670(&uStack_58,param_1 + -0x38,&uStack_84);
    }
    if (*(uint *)(param_1 + -0x60) <= (uint)(*(int *)(param_1 + -0x88) - *(int *)(param_1 + -0x90)))
    {
      FUN_1806b4470(lVar1);
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(lVar8 + 8));
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(lVar2 + 8));
    }
  }
  return;
}






