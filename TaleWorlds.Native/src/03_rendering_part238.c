#include "TaleWorlds.Native.Split.h"

// 03_rendering_part238.c - 18 个函数

// 函数: void FUN_18039f8c0(void)
void FUN_18039f8c0(void)

{
  longlong *plVar1;
  uint in_EAX;
  longlong lVar2;
  undefined1 unaff_BPL;
  longlong unaff_RSI;
  ulonglong uVar3;
  
  lVar2 = 0;
  uVar3 = (ulonglong)in_EAX;
  do {
    plVar1 = *(longlong **)(lVar2 + *(longlong *)(unaff_RSI + 0x30));
    (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL);
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_18039f8f9(void)
void FUN_18039f8f9(void)

{
  return;
}





// 函数: void FUN_18039f910(longlong param_1,undefined1 param_2)
void FUN_18039f910(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3;
  if ((int)uVar2 != 0) {
    lVar3 = 0;
    uVar2 = uVar2 & 0xffffffff;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0xe8))(plVar1,param_2);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_18039f930(void)
void FUN_18039f930(void)

{
  longlong *plVar1;
  uint in_EAX;
  longlong lVar2;
  undefined1 unaff_BPL;
  longlong unaff_RSI;
  ulonglong uVar3;
  
  lVar2 = 0;
  uVar3 = (ulonglong)in_EAX;
  do {
    plVar1 = *(longlong **)(lVar2 + *(longlong *)(unaff_RSI + 0x30));
    (**(code **)(*plVar1 + 0xe8))(plVar1,unaff_BPL);
    lVar2 = lVar2 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_18039f969(void)
void FUN_18039f969(void)

{
  return;
}





// 函数: void FUN_18039f980(longlong param_1,undefined1 param_2)
void FUN_18039f980(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 < *(undefined8 **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0xf0))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(undefined8 **)(param_1 + 0x38));
  }
  return;
}





// 函数: void FUN_18039f9d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18039f9d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x168))(plVar1,param_2,param_3,param_4);
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + 1;
    } while ((ulonglong)(longlong)iVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039fa01(void)
void FUN_18039fa01(void)

{
  longlong unaff_RBX;
  uint unaff_EDI;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0x30)) + 0x168))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039fa52(void)
void FUN_18039fa52(void)

{
  return;
}





// 函数: void FUN_18039fa70(longlong param_1,undefined8 param_2)
void FUN_18039fa70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar2 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039fa9c(void)
void FUN_18039fa9c(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0x30)) + 0x1e0))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039fae3(void)
void FUN_18039fae3(void)

{
  return;
}





// 函数: void FUN_18039fb00(longlong param_1,undefined8 param_2)
void FUN_18039fb00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar2 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3));
  }
  return;
}





// 函数: void FUN_18039fb28(void)
void FUN_18039fb28(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0x30)) + 0x150))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x30) >> 3));
  return;
}





// 函数: void FUN_18039fb63(void)
void FUN_18039fb63(void)

{
  return;
}



undefined8 *
FUN_18039fb80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x13,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x7469736f706d6f63;
  puVar1[1] = 0x6e6f706d6f635f65;
  *(undefined4 *)(puVar1 + 2) = 0x746e65;
  *(undefined4 *)(param_2 + 2) = 0x13;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18039fc00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  _Mtx_init_in_situ(param_1,2,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  lVar6 = 0;
  *plVar3 = 0;
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x2000000,10);
  *plVar3 = lVar4;
  LOCK();
  plVar3[1] = 0;
  UNLOCK();
  *(undefined4 *)(plVar3 + 2) = 0;
  *(longlong **)(param_1 + 0x50) = plVar3;
  LOCK();
  plVar1 = plVar3 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x40;
  UNLOCK();
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  lVar4 = lVar6;
  if (uVar5 + 0x30 < 0x2000000) {
    lVar4 = uVar5 + *plVar3;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(lVar4 + 0x19) = 0;
  *(undefined2 *)(lVar4 + 0x1d) = 0;
  *(undefined1 *)(lVar4 + 0x1f) = 0;
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined1 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(longlong *)(param_1 + 0x58) = lVar4;
  plVar3 = *(longlong **)(param_1 + 0x50);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x48;
  UNLOCK();
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  lVar4 = lVar6;
  if (uVar5 + 0x38 < 0x2000000) {
    lVar4 = uVar5 + *plVar3;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(lVar4 + 0x20) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x24) = 0x40000000;
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 8) = &DAT_180be0000;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  *(longlong *)(param_1 + 0x60) = lVar4;
  plVar3 = *(longlong **)(param_1 + 0x50);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x48;
  UNLOCK();
  uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
  if (uVar5 + 0x38 < 0x2000000) {
    lVar6 = uVar5 + *plVar3;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(lVar6 + 0x20) = 0x3f800000;
  *(undefined8 *)(lVar6 + 0x24) = 0x40000000;
  *(undefined8 *)(lVar6 + 0x30) = uVar2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 8) = &DAT_180be0000;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 0x28) = 0;
  *(longlong *)(param_1 + 0x68) = lVar6;
  return param_1;
}



longlong FUN_18039fda0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar6 = (undefined8 *)puVar3[2];
  puVar8 = puVar3;
  if ((undefined8 *)puVar3[2] == (undefined8 *)0x0) {
LAB_18039fe23:
    puVar8 = puVar3;
  }
  else {
    do {
      if ((longlong *)puVar6[4] < param_2) {
        puVar7 = (undefined8 *)*puVar6;
      }
      else {
        puVar7 = (undefined8 *)puVar6[1];
        puVar8 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    if ((puVar8 == puVar3) || (param_2 < (longlong *)puVar8[4])) goto LAB_18039fe23;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (puVar8 == *(undefined8 **)(param_1 + 0x58)) {
    plVar4 = *(longlong **)(param_1 + 0x50);
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + 0x48;
    UNLOCK();
    uVar9 = lVar10 + 0xfU & 0xfffffffffffffff0;
    if (uVar9 + 0x38 < 0x2000000) {
      lVar10 = *plVar4 + uVar9;
    }
    else {
      lVar10 = 0;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(lVar10 + 0x20) = 0x3f800000;
    *(undefined8 *)(lVar10 + 0x24) = 0x40000000;
    *(undefined8 *)(lVar10 + 0x30) = uVar11;
    uVar11 = 1;
    *(undefined8 *)(lVar10 + 0x10) = 1;
    *(undefined **)(lVar10 + 8) = &DAT_180be0000;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined4 *)(lVar10 + 0x28) = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    plVar4 = (longlong *)puVar3[5];
    LOCK();
    plVar1 = plVar4 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + 0x40;
    UNLOCK();
    uVar9 = lVar12 + 0xfU & 0xfffffffffffffff0;
    if (uVar9 + 0x30 < 0x2000000) {
      lVar12 = *plVar4 + uVar9;
    }
    else {
      lVar12 = 0;
    }
    puVar2 = (ulonglong *)(lVar12 + 0x20);
    *puVar2 = (ulonglong)param_2;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
    *(longlong *)(lVar12 + 0x28) = lVar10;
    bVar13 = true;
    puVar6 = puVar3;
    if ((undefined8 *)puVar3[2] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)puVar3[2];
      do {
        puVar6 = puVar8;
        bVar13 = *puVar2 < (ulonglong)puVar6[4];
        if (bVar13) {
          puVar8 = (undefined8 *)puVar6[1];
        }
        else {
          puVar8 = (undefined8 *)*puVar6;
        }
      } while (puVar8 != (undefined8 *)0x0);
    }
    puVar8 = puVar6;
    if (bVar13) {
      if (puVar6 == (undefined8 *)puVar3[1]) goto LAB_18039ff5d;
      puVar8 = (undefined8 *)func_0x00018066b9a0(puVar6);
    }
    if ((ulonglong)puVar8[4] < *puVar2) {
LAB_18039ff5d:
      if ((puVar6 == puVar3) || (*puVar2 < (ulonglong)puVar6[4])) {
        uVar11 = 0;
      }
                    // WARNING: Subroutine does not return
      FUN_18066bdc0(lVar12,puVar6,puVar3,uVar11);
    }
    if ((longlong *)*puVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*puVar2 + 0x38))();
    }
  }
  else {
    lVar10 = puVar8[5];
  }
  iVar5 = _Mtx_unlock(param_1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return lVar10;
}





// 函数: void FUN_18039ffc0(longlong param_1)
void FUN_18039ffc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  LOCK();
  plVar1 = plVar2 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 0x128;
  UNLOCK();
  uVar3 = lVar4 + 0xfU & 0xfffffffffffffff0;
  if (uVar3 + 0x118 < 0x2000000) {
    lVar4 = *plVar2 + uVar3;
  }
  else {
    lVar4 = 0;
  }
                    // WARNING: Subroutine does not return
  memset(lVar4,0,0x118);
}



undefined8 FUN_1803a0010(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar2 = (undefined8 *)puVar1[2];
  puVar4 = puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      if ((longlong *)puVar2[4] < param_2) {
        puVar2 = (undefined8 *)*puVar2;
      }
      else {
        puVar4 = puVar2;
        puVar2 = (undefined8 *)puVar2[1];
      }
    } while (puVar2 != (undefined8 *)0x0);
    if ((puVar4 != puVar1) && ((longlong *)puVar4[4] <= param_2)) goto LAB_1803a008f;
  }
  puVar4 = puVar1;
LAB_1803a008f:
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (puVar4 == *(undefined8 **)(param_1 + 0x58)) {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar4[5];
  }
  return uVar3;
}





// 函数: void FUN_1804007e0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)
void FUN_1804007e0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 extraout_XMM0_Qa;
  float fVar9;
  float fVar10;
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  undefined1 auStack_1b7 [7];
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_118;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  puVar6 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar6 = (undefined *)param_1[3];
  }
  ppuStack_1b0 = &puStack_a8;
  iVar7 = 0;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  uStack_188 = param_4;
  if (puVar6 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_a8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_a8);
  }
  puVar6 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar6 = (undefined *)param_1[3];
  }
  FUN_1802c22a0(auStack_1b7,puVar6);
  if (((*(int *)(param_3 + 0x1d90) == 0) && (*(int *)(param_3 + 0x2dc0) == 0)) &&
     (*(int *)(param_3 + 0x2358) == 0)) {
    if ((undefined *)*param_1 != &UNK_180a0ee48) {
      (**(code **)((undefined *)*param_1 + 0x28))(param_1);
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    FUN_1802c2ac0(&puStack_a8);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1e8);
  }
  func_0x00018024c420(param_3);
  uVar1 = *(uint *)(param_3 + 4);
  *(uint *)(param_3 + 4) = uVar1 & 0xfffffffe;
  FUN_1800cd410(_DAT_180c86890,param_3,0,0);
  uVar3 = FUN_180245280(param_3);
  uVar3 = FUN_1800d7010(extraout_XMM0_Qa,param_3,param_1[0x85],uVar3);
  *(uint *)(param_3 + 4) = uVar1;
  if (((*(char *)(param_3 + 0x9a31) == '\0') ||
      (lVar4 = *(longlong *)(param_3 + 0x99c0), lVar4 == 0)) ||
     ((ulonglong)(*(longlong *)(lVar4 + 0x58) - *(longlong *)(lVar4 + 0x50) >> 3) < 2)) {
    uVar3 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar4 = FUN_1800bd5c0();
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x58) + -8) + 0x428);
    if (lVar4 == 0) goto LAB_1804009a0;
    uVar3 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
  }
  uStack_1c8 = 0xffffffff;
  uVar3 = FUN_18029d150(uVar3,0x18,lVar4);
LAB_1804009a0:
  *(undefined4 *)((longlong)param_1 + 0x10a) = 0x3000100;
  *(undefined1 *)((longlong)param_1 + 0x10e) = 0;
  FUN_1800debc0(uVar3,param_3,0);
  lVar4 = _DAT_180c86938;
  fVar10 = *(float *)(param_3 + 0x11c24);
  fVar9 = 1.0 / (float)(int)*(float *)(param_3 + 0x11c20);
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0) = fVar9 * 0.5;
  fVar10 = 1.0 / (float)(int)fVar10;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1be4) = fVar10 * 0.5;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1be8) = fVar9;
  *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1bec) = fVar10;
  uVar3 = FUN_1800bff50();
  FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(_DAT_180c86938 + 0x1c88),
                *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0,0x230);
  plVar8 = param_1 + 0x27;
  do {
    if (*plVar8 != 0) {
      uStack_1c8 = 0xffffffff;
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),iVar7,*plVar8,0x10);
    }
    iVar7 = iVar7 + 1;
    plVar8 = plVar8 + 1;
  } while (iVar7 < 0x10);
  puStack_1a8 = &UNK_180a3c3e0;
  uStack_190 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_198 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_1a0 = puVar5;
  uVar2 = FUN_18064e990(puVar5);
  uStack_190 = CONCAT44(uStack_190._4_4_,uVar2);
  *puVar5 = 0x5f656361665f7369;
  puVar5[1] = 0x72616c7563657073;
  *(undefined1 *)(puVar5 + 2) = 0;
  uStack_198 = 0x10;
  FUN_180240430(uVar3,&puStack_1a8,1);
  puStack_1a8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



undefined8 * FUN_180400e70(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a26f90;
  if ((longlong *)param_1[0x8d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8d] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x8a,8,2,FUN_180045af0,uVar1);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x470);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180400f00(longlong *param_1,longlong param_2)
void FUN_180400f00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 auStack_2d8 [32];
  undefined4 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined4 uStack_280;
  longlong *plStack_278;
  longlong *plStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  uint uStack_258;
  undefined4 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  uint uStack_238;
  undefined4 uStack_230;
  longlong *plStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined4 uStack_208;
  undefined1 auStack_200 [40];
  undefined *puStack_1d8;
  uint *puStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint auStack_1c0 [3];
  undefined1 uStack_1b4;
  undefined8 uStack_1b3;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined *puStack_178;
  undefined1 *puStack_170;
  uint uStack_168;
  undefined1 auStack_160 [136];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_220 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2d8;
  FUN_1801f9270();
  puStack_1d8 = &UNK_1809fcc58;
  puStack_1d0 = auStack_1c0;
  auStack_1c0[0] = auStack_1c0[0] & 0xffffff00;
  uStack_1c8 = 9;
  uVar4 = strcpy_s(auStack_1c0,0x40,&UNK_180a18e08);
  uStack_280 = 1;
  uStack_288 = 1;
  uStack_290 = 0;
  uStack_298 = 0x40;
  uStack_2a0 = 4;
  uStack_2a8 = 5;
  uStack_2b0 = 0;
  uStack_2b8 = 5;
  plVar2 = (longlong *)
           FUN_1800b0a10(uVar4,&plStack_278,*(undefined4 *)(param_2 + 0x1bd4),&puStack_1d8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_270 = (longlong *)param_1[0x8d];
  param_1[0x8d] = lVar1;
  if (plStack_270 != (longlong *)0x0) {
    (**(code **)(*plStack_270 + 0x38))();
  }
  if (plStack_278 != (longlong *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  puStack_1d0 = (uint *)0x100000001;
  uStack_1c4 = 0;
  auStack_1c0[0] = 0;
  auStack_1c0[1] = 0;
  auStack_1c0[2] = 0x3f800000;
  uStack_1b3 = 1;
  uStack_1b4 = 0;
  uStack_1a4 = 0;
  uStack_1c8 = (undefined4)param_1[0xe];
  puStack_1d8 = (undefined *)0x100000001;
  uStack_1a8 = *(undefined4 *)(param_2 + 0x1bd4);
  puStack_218 = &UNK_18098bc80;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x13;
  strcpy_s(auStack_200,0x20,&UNK_180a26f70);
  FUN_1806279c0(&puStack_248,&puStack_218);
  puStack_218 = &UNK_18098bcb0;
  if (0 < *(int *)(param_2 + 0x3530)) {
    FUN_1806277c0(&puStack_248,uStack_238 + *(int *)(param_2 + 0x3530));
                    // WARNING: Subroutine does not return
    memcpy(puStack_240 + uStack_238,*(undefined8 *)(param_2 + 0x3528),
           (longlong)(*(int *)(param_2 + 0x3530) + 1));
  }
  puStack_218 = &UNK_18098bc80;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x13;
  strcpy_s(auStack_200,0x20,&UNK_180a26f38);
  FUN_1806279c0(&puStack_268,&puStack_218);
  puStack_218 = &UNK_18098bcb0;
  if (0 < *(int *)(param_2 + 0x3530)) {
    FUN_1806277c0(&puStack_268,uStack_258 + *(int *)(param_2 + 0x3530));
                    // WARNING: Subroutine does not return
    memcpy(puStack_260 + uStack_258,*(undefined8 *)(param_2 + 0x3528),
           (longlong)(*(int *)(param_2 + 0x3530) + 1));
  }
  puStack_178 = &UNK_1809fcc28;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = uStack_238;
  puVar3 = &DAT_18098bc73;
  if (puStack_240 != (undefined *)0x0) {
    puVar3 = puStack_240;
  }
  strcpy_s(auStack_160,0x80,puVar3);
  plVar2 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_270,&puStack_178,&puStack_1d8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_278 = (longlong *)param_1[0x8a];
  param_1[0x8a] = lVar1;
  if (plStack_278 != (longlong *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  if (plStack_270 != (longlong *)0x0) {
    (**(code **)(*plStack_270 + 0x38))();
  }
  puStack_178 = &UNK_18098bcb0;
  puStack_d8 = &UNK_1809fcc28;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = uStack_258;
  puVar3 = &DAT_18098bc73;
  if (puStack_260 != (undefined *)0x0) {
    puVar3 = puStack_260;
  }
  strcpy_s(auStack_c0,0x80,puVar3);
  plVar2 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_228,&puStack_d8,&puStack_1d8);
  lVar1 = *plVar2;
  *plVar2 = 0;
  plStack_278 = (longlong *)param_1[0x8b];
  param_1[0x8b] = lVar1;
  if (plStack_278 != (longlong *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  puStack_d8 = &UNK_18098bcb0;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,0);
  plStack_278 = (longlong *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_278 != (longlong *)0x0) {
    (**(code **)(*plStack_278 + 0x38))();
  }
  puStack_268 = &UNK_180a3c3e0;
  if (puStack_260 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_260 = (undefined *)0x0;
  uStack_250 = 0;
  puStack_268 = &UNK_18098bcb0;
  puStack_248 = &UNK_180a3c3e0;
  if (puStack_240 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_240 = (undefined *)0x0;
  uStack_230 = 0;
  puStack_248 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2d8);
}



// WARNING: Removing unreachable block (ram,0x000180401cae)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



