#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part043.c - 9 个函数

// 函数: void FUN_1800826b0(longlong *param_1,longlong *param_2)
void FUN_1800826b0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  puVar12 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)*param_1;
  lVar10 = (longlong)puVar12 - (longlong)puVar6 >> 5;
  puVar7 = (undefined8 *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    puVar5 = puVar7;
    if (lVar10 == 0) goto LAB_180082720;
  }
  puVar5 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 << 5,(char)param_1[3],puVar12,0xfffffffffffffffe);
  puVar12 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)*param_1;
LAB_180082720:
  puVar8 = puVar5;
  if (puVar6 != puVar12) {
    lVar11 = (longlong)puVar5 - (longlong)puVar6;
    puVar6 = puVar6 + 6;
    do {
      *puVar8 = 0;
      *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar6) = 0;
      *(undefined8 *)(lVar11 + -8 + (longlong)puVar6) = 0;
      *(undefined4 *)(lVar11 + (longlong)puVar6) = *puVar6;
      uVar4 = *puVar8;
      *puVar8 = *(undefined8 *)(puVar6 + -6);
      *(undefined8 *)(puVar6 + -6) = uVar4;
      uVar4 = *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar6);
      *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar6) = *(undefined8 *)(puVar6 + -4);
      *(undefined8 *)(puVar6 + -4) = uVar4;
      uVar4 = *(undefined8 *)(lVar11 + -8 + (longlong)puVar6);
      *(undefined8 *)(lVar11 + -8 + (longlong)puVar6) = *(undefined8 *)(puVar6 + -2);
      *(undefined8 *)(puVar6 + -2) = uVar4;
      uVar2 = *(undefined4 *)(lVar11 + (longlong)puVar6);
      *(undefined4 *)(lVar11 + (longlong)puVar6) = *puVar6;
      *puVar6 = uVar2;
      puVar8 = puVar8 + 4;
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 8;
    } while (puVar1 != puVar12);
  }
  lVar11 = param_2[1] - *param_2 >> 2;
  uVar3 = *(uint *)(param_2 + 3);
  *(uint *)(puVar8 + 3) = uVar3;
  if (lVar11 != 0) {
    puVar7 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar11 * 4,uVar3 & 0xff,puVar12,uVar13);
  }
  *puVar8 = puVar7;
  puVar8[1] = puVar7;
  puVar8[2] = (longlong)puVar7 + lVar11 * 4;
  lVar11 = *param_2;
  if (lVar11 != param_2[1]) {
                    // WARNING: Subroutine does not return
    memmove(*puVar8,lVar11,param_2[1] - lVar11);
  }
  puVar8[1] = *puVar8;
  plVar9 = (longlong *)*param_1;
  if (plVar9 != (longlong *)param_1[1]) {
    do {
      if (*plVar9 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar9 = plVar9 + 4;
    } while (plVar9 != (longlong *)param_1[1]);
    plVar9 = (longlong *)*param_1;
  }
  if (plVar9 == (longlong *)0x0) {
    *param_1 = (longlong)puVar5;
    param_1[1] = (longlong)(puVar8 + 4);
    param_1[2] = (longlong)(puVar5 + lVar10 * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar9);
}





// 函数: void FUN_180082880(longlong *param_1,longlong *param_2)
void FUN_180082880(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800828d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffef8;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffef8;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}





// 函数: void FUN_180082a50(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_180082a50(longlong param_1,longlong param_2,undefined8 param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180082aa0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffe28;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffe28;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180082c20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffe90;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffe90;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



undefined1 FUN_180082da0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  param_1 = (longlong *)*param_1;
  uVar3 = *(undefined8 *)
           (*(longlong *)(*param_1 + 0x1e0) + (ulonglong)*(byte *)(param_1 + 1) * 0x18);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (longlong *)param_1[2];
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180255880(uVar3,&plStackX_8,param_3,param_4,uVar4);
  uVar3 = *(undefined8 *)
           (*(longlong *)(*param_1 + 0x1e0) + 8 + (ulonglong)*(byte *)(param_1 + 1) * 0x18);
  pplStackX_18 = &plStackX_10;
  plStackX_10 = (longlong *)param_1[3];
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  FUN_180255b70(uVar3,&plStackX_10);
  LOCK();
  puVar1 = (undefined1 *)
           (*(longlong *)(*param_1 + 0x1e0) + 0x15 + (ulonglong)*(byte *)(param_1 + 1) * 0x18);
  uVar2 = *puVar1;
  *puVar1 = 3;
  UNLOCK();
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180082e70(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_3 == 3) {
    return 0x180bfdd20;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      if (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x38))();
      }
      if (*(longlong **)(lVar3 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  else {
    if (param_3 == 1) {
      puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      *puVar4 = *puVar1;
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar1 + 1);
      plVar2 = (longlong *)puVar1[2];
      puVar4[2] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      plVar2 = (longlong *)puVar1[3];
      puVar4[3] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      *param_1 = (longlong)puVar4;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180082fd0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)
void FUN_180082fd0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar3 = *param_4;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3,0xfffffffffffffffe);
  plVar6 = (longlong *)FUN_18007f2f0(uVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar4 = *(longlong **)(lVar3 + 0x210);
  *(longlong **)(lVar3 + 0x210) = plVar6;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x1a) = 0x12;
  lVar3 = *(longlong *)(lVar3 + 0x210);
  FUN_180080650(lVar3 + 0x10);
  FUN_180080650(lVar3 + 0x38,param_1);
  *(undefined1 *)(lVar3 + 0x80) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined4 *)(lVar3 + 0x60) = **(undefined4 **)(param_1 + 8);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
  iVar1 = *(int *)(lVar3 + 0x60);
  iVar2 = *(int *)(lVar3 + 100);
  if (iVar2 < iVar1) {
    if (iVar1 == 0) {
      if (iVar2 < 2) {
        *(undefined4 *)(lVar3 + 100) = 8;
      }
      else {
        *(int *)(lVar3 + 100) = (iVar2 >> 1) + iVar2;
      }
    }
    else {
      *(int *)(lVar3 + 100) = iVar1;
    }
    FUN_180086010(lVar3 + 0x60);
  }
  *(int *)(lVar3 + 0x60) = iVar1;
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(param_1 + 8),(longlong)(iVar1 * 0x5c));
}



int FUN_180083100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  
  FUN_18007e2b0(param_4[1],param_1);
  piVar2 = (int *)*param_4;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  return iVar1;
}





// 函数: void FUN_1800831c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)
void FUN_1800831c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plStackX_20;
  longlong *plStack_28;
  undefined8 uStack_20;
  longlong **pplStack_18;
  longlong **pplStack_10;
  
  uStack_20 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_4;
  FUN_18007fd60(puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 1),param_1);
  uVar2 = *puVar1;
  pplStack_18 = &plStackX_20;
  plStackX_20 = (longlong *)puVar1[3];
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  pplStack_10 = &plStack_28;
  plStack_28 = (longlong *)puVar1[2];
  if (plStack_28 != (longlong *)0x0) {
    (**(code **)(*plStack_28 + 0x28))();
  }
  FUN_18007c8e0(uVar2,*(undefined1 *)(puVar1 + 1),&plStack_28,&plStackX_20);
                    // WARNING: Could not recover jumptable at 0x000180083253. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)*puVar1 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180083260(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 == 3) {
    return 0x180bfdbe0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x38))();
      }
      if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      FUN_18007c7f0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180083390(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_3 == 3) {
    return 0x180bfdba0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      if (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x38))();
      }
      if (*(longlong **)(lVar3 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  else {
    if (param_3 == 1) {
      puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      *puVar4 = *puVar1;
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar1 + 1);
      plVar2 = (longlong *)puVar1[2];
      puVar4[2] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      plVar2 = (longlong *)puVar1[3];
      puVar4[3] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      *param_1 = (longlong)puVar4;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_1800834f0(ulonglong *param_1)
void FUN_1800834f0(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180083520(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffc88;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffc88;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800836a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffcf0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffcf0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180083820(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffd58;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffd58;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800839a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffdc0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_1809ffdc0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}





// 函数: void FUN_180083b20(longlong param_1,longlong param_2)
void FUN_180083b20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  uVar2 = (longlong)(int)plVar1[2] + 7U & 0xfffffffffffffff8;
  *(int *)(plVar1 + 2) = (int)uVar2 + ((int)param_2 + 1) * 8;
                    // WARNING: Subroutine does not return
  memset(*plVar1 + uVar2,0,param_2 * 8);
}



undefined8 FUN_180083bf0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    param_1 = func_0x000180085de0(*(undefined8 *)(param_1 + 0x1b0));
  }
  lVar1 = 0;
  while ((*(longlong *)(param_1 + 0x1e0) == 0 ||
         ((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar1) != '\x01' &&
          (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar1) != '\x02'))))) {
    lVar1 = lVar1 + 0x18;
    if (0x17f < lVar1) {
      return 1;
    }
  }
  return 0;
}



undefined8 *
FUN_180083c60(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffc88;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180083cb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffcf0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180083d00(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffd58;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180083d50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffdc0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180083da0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffe28;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180083df0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffe90;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_180083e40(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffef8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180083e90(undefined8 *param_1)
void FUN_180083e90(undefined8 *param_1)

{
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



undefined8 *
FUN_180083ec0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180083f10(longlong *param_1)
void FUN_180083f10(longlong *param_1)

{
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x38))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x38))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x38))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}





