#include "TaleWorlds.Native.Split.h"

// 03_rendering_part628.c - 7 个函数

// 函数: void FUN_18061c7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18061c7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_2a8 [32];
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined4 uStack_268;
  ulonglong uStack_260;
  undefined8 uStack_258;
  char acStack_248 [512];
  ulonglong uStack_48;
  
  uStack_258 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar5 = (ulonglong *)func_0x00018004b9a0();
  uStack_288 = 0;
  puStack_280 = &uStackX_10;
  __stdio_common_vsprintf(*puVar5 | 1,acStack_248,0x200,param_1);
  puStack_278 = &UNK_180a3c3e0;
  uStack_260 = 0;
  puStack_270 = (undefined1 *)0x0;
  uStack_268 = 0;
  lVar2 = -1;
  do {
    lVar7 = lVar2;
    lVar2 = lVar7 + 1;
  } while (acStack_248[lVar7 + 1] != '\0');
  if ((int)(lVar7 + 1) != 0) {
    iVar6 = (int)lVar7 + 2;
    iVar3 = iVar6;
    if (iVar6 < 0x10) {
      iVar3 = 0x10;
    }
    puStack_270 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puStack_270 = 0;
    uVar4 = FUN_18064e990(puStack_270);
    uStack_260 = CONCAT44(uStack_260._4_4_,uVar4);
                    // WARNING: Subroutine does not return
    memcpy(puStack_270,acStack_248,iVar6);
  }
  uStack_268 = 0;
  puVar1 = *(undefined **)*_DAT_180c8ed08;
  if (puVar1 == &UNK_18098bb88) {
    cVar8 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
  }
  else {
    cVar8 = (**(code **)(puVar1 + 0x50))((undefined8 *)*_DAT_180c8ed08);
  }
  if (cVar8 == '\0') {
    (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
              ((longlong *)_DAT_180c8ed08[1],&puStack_278,&UNK_1809f8ddc);
  }
  puStack_278 = &UNK_180a3c3e0;
  if (puStack_270 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_270 = (undefined1 *)0x0;
  uStack_260 = uStack_260 & 0xffffffff00000000;
  puStack_278 = &UNK_18098bcb0;
  FUN_180062340(_DAT_180c86928,3,acStack_248);
  FUN_180626f80(acStack_248);
  (**(code **)(_DAT_180c8ece0 + 0x2f0))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061c990(longlong param_1,int param_2,undefined8 param_3)
void FUN_18061c990(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_248 [32];
  undefined8 uStack_228;
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if ((param_1 != 0) && (-1 < param_2)) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
  }
  uStack_228 = param_3;
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3bdd8,param_2);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061ca10(longlong param_1,int param_2)
void FUN_18061ca10(longlong param_1,int param_2)

{
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((param_1 != 0) && (-2 < param_2)) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3bdb0,param_2);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061ca90(uint param_1)
void FUN_18061ca90(uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_248 [32];
  int iStack_228;
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  iVar2 = (int)_DAT_180c92514;
  if (iVar2 - 2U < 2) {
    if (iVar2 == 1) {
      if (_DAT_180c92590 != 0) goto LAB_18061cadc;
    }
    else if (((iVar2 - 2U & 0xfffffffc) == 0) && (iVar2 != 4)) {
LAB_18061cadc:
      if (param_1 < 0x3ff) {
        lVar1 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1);
        if ((lVar1 != 0) &&
           (lVar1 = (**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0,param_1),
           *(int *)(lVar1 + 0x10) == 1)) goto LAB_18061cb49;
        iVar2 = (int)_DAT_180c92514;
      }
    }
  }
  iStack_228 = iVar2;
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be30,param_1);
  FUN_18061c7a0(auStack_218);
LAB_18061cb49:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}



undefined8 * FUN_18061cb70(undefined8 *param_1)

{
  *param_1 = &UNK_180a3bfe0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18061cbc0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x8000);
    uVar7 = (param_2 + 0xfU & 0xfffffff0) + uVar1;
    if (uVar7 < 0x8000) {
      *(uint *)(lVar3 + 0x8000) = uVar7;
      lVar3 = (ulonglong)uVar1 + lVar3;
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((ulonglong)uVar1 <
      (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) {
    *(uint *)(param_1 + 0x30) = uVar1 + 1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 8);
    *(longlong *)(param_1 + 8) = lVar3;
    *(undefined4 *)(lVar3 + 0x8000) = 0;
    goto FUN_18061cd3f;
  }
  lVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x8004,4,6);
  puVar4 = (undefined8 *)0x0;
  *(undefined4 *)(lVar3 + 0x8000) = 0;
  *(longlong *)(param_1 + 8) = lVar3;
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  if (puVar6 < *(undefined8 **)(param_1 + 0x20)) {
    *(undefined8 **)(param_1 + 0x18) = puVar6 + 1;
    *puVar6 = *(undefined8 *)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x18);
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar3 = (longlong)puVar6 - (longlong)puVar5 >> 3;
    if (lVar3 == 0) {
      lVar3 = 1;
LAB_18061ccb8:
      puVar4 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,*(undefined1 *)(param_1 + 0x28))
      ;
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      puVar6 = *(undefined8 **)(param_1 + 0x18);
    }
    else {
      lVar3 = lVar3 * 2;
      if (lVar3 != 0) goto LAB_18061ccb8;
    }
    if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
      memmove(puVar4,puVar5,(longlong)puVar6 - (longlong)puVar5);
    }
    *puVar4 = *(undefined8 *)(param_1 + 8);
    puVar6 = puVar4 + 1;
    if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    *(undefined8 **)(param_1 + 0x20) = puVar4 + lVar3;
    *(undefined8 **)(param_1 + 0x18) = puVar6;
  }
  *(int *)(param_1 + 0x30) = (int)((longlong)puVar6 - *(longlong *)(param_1 + 0x10) >> 3);
FUN_18061cd3f:
  lVar3 = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar7 = (param_2 + 0xfU & 0xfffffff0) + uVar1;
  if (uVar7 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar7;
    lVar3 = lVar2 + (ulonglong)uVar1;
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18061cc12(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong unaff_RBX;
  undefined8 *puVar7;
  uint unaff_R14D;
  
  if (param_1 < in_RAX) {
    *(int *)(unaff_RBX + 0x30) = (int)param_1 + 1;
    lVar3 = *(longlong *)(*(longlong *)(unaff_RBX + 0x10) + param_1 * 8);
    *(longlong *)(unaff_RBX + 8) = lVar3;
    *(undefined4 *)(lVar3 + 0x8000) = 0;
    goto FUN_18061cd3f;
  }
  lVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x8004,4,6);
  puVar4 = (undefined8 *)0x0;
  *(undefined4 *)(lVar3 + 0x8000) = 0;
  *(longlong *)(unaff_RBX + 8) = lVar3;
  puVar7 = *(undefined8 **)(unaff_RBX + 0x18);
  if (puVar7 < *(undefined8 **)(unaff_RBX + 0x20)) {
    *(undefined8 **)(unaff_RBX + 0x18) = puVar7 + 1;
    *puVar7 = *(undefined8 *)(unaff_RBX + 8);
    puVar7 = *(undefined8 **)(unaff_RBX + 0x18);
  }
  else {
    puVar6 = *(undefined8 **)(unaff_RBX + 0x10);
    lVar3 = (longlong)puVar7 - (longlong)puVar6 >> 3;
    if (lVar3 == 0) {
      lVar3 = 1;
LAB_18061ccb8:
      puVar4 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,*(undefined1 *)(unaff_RBX + 0x28));
      puVar6 = *(undefined8 **)(unaff_RBX + 0x10);
      puVar7 = *(undefined8 **)(unaff_RBX + 0x18);
    }
    else {
      lVar3 = lVar3 * 2;
      if (lVar3 != 0) goto LAB_18061ccb8;
    }
    if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
      memmove(puVar4,puVar6,(longlong)puVar7 - (longlong)puVar6);
    }
    *puVar4 = *(undefined8 *)(unaff_RBX + 8);
    puVar7 = puVar4 + 1;
    if (*(longlong *)(unaff_RBX + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 **)(unaff_RBX + 0x10) = puVar4;
    *(undefined8 **)(unaff_RBX + 0x20) = puVar4 + lVar3;
    *(undefined8 **)(unaff_RBX + 0x18) = puVar7;
  }
  *(int *)(unaff_RBX + 0x30) = (int)((longlong)puVar7 - *(longlong *)(unaff_RBX + 0x10) >> 3);
FUN_18061cd3f:
  lVar3 = 0;
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar5 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar5 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar5;
    lVar3 = lVar2 + (ulonglong)uVar1;
  }
  return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18061cc4a(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong unaff_RBX;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint unaff_R14D;
  
  lVar2 = FUN_18062b1e0(param_1,param_2,4);
  puVar7 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 0x8000) = 0;
  *(longlong *)(unaff_RBX + 8) = lVar2;
  puVar6 = *(undefined8 **)(unaff_RBX + 0x18);
  if (puVar6 < *(undefined8 **)(unaff_RBX + 0x20)) {
    *(undefined8 **)(unaff_RBX + 0x18) = puVar6 + 1;
    *puVar6 = *(undefined8 *)(unaff_RBX + 8);
    puVar6 = *(undefined8 **)(unaff_RBX + 0x18);
    goto FUN_18061cd2f;
  }
  puVar5 = *(undefined8 **)(unaff_RBX + 0x10);
  lVar2 = (longlong)puVar6 - (longlong)puVar5 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
LAB_18061ccb8:
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(unaff_RBX + 0x28))
    ;
    puVar5 = *(undefined8 **)(unaff_RBX + 0x10);
    puVar6 = *(undefined8 **)(unaff_RBX + 0x18);
  }
  else {
    lVar2 = lVar2 * 2;
    puVar3 = puVar7;
    if (lVar2 != 0) goto LAB_18061ccb8;
  }
  if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar5,(longlong)puVar6 - (longlong)puVar5);
  }
  *puVar3 = *(undefined8 *)(unaff_RBX + 8);
  puVar6 = puVar3 + 1;
  if (*(longlong *)(unaff_RBX + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 **)(unaff_RBX + 0x10) = puVar3;
  *(undefined8 **)(unaff_RBX + 0x20) = puVar3 + lVar2;
  *(undefined8 **)(unaff_RBX + 0x18) = puVar6;
FUN_18061cd2f:
  *(int *)(unaff_RBX + 0x30) = (int)((longlong)puVar6 - *(longlong *)(unaff_RBX + 0x10) >> 3);
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar4 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar4 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar4;
    puVar7 = (undefined8 *)(lVar2 + (ulonglong)uVar1);
  }
  return puVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18061cc92(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  uint uVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint unaff_R14D;
  
  if (in_RAX >> 3 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = (in_RAX >> 3) * 2;
    puVar2 = unaff_RDI;
    if (lVar4 == 0) goto LAB_18061ccdc;
  }
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(undefined1 *)(unaff_RBX + 0x28));
  param_2 = *(longlong *)(unaff_RBX + 0x10);
  unaff_RSI = *(longlong *)(unaff_RBX + 0x18);
LAB_18061ccdc:
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,param_2,unaff_RSI - param_2);
  }
  *puVar2 = *(undefined8 *)(unaff_RBX + 8);
  if (*(longlong *)(unaff_RBX + 0x10) == 0) {
    *(undefined8 **)(unaff_RBX + 0x10) = puVar2;
    *(undefined8 **)(unaff_RBX + 0x20) = puVar2 + lVar4;
    *(undefined8 **)(unaff_RBX + 0x18) = puVar2 + 1;
    *(int *)(unaff_RBX + 0x30) =
         (int)((longlong)(puVar2 + 1) - *(longlong *)(unaff_RBX + 0x10) >> 3);
    lVar4 = *(longlong *)(unaff_RBX + 8);
    uVar1 = *(uint *)(lVar4 + 0x8000);
    uVar3 = (unaff_R14D & 0xfffffff0) + uVar1;
    if (uVar3 < 0x8000) {
      *(uint *)(lVar4 + 0x8000) = uVar3;
      unaff_RDI = (undefined8 *)(lVar4 + (ulonglong)uVar1);
    }
    return unaff_RDI;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong FUN_18061cd2f(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint unaff_R14D;
  
  *(int *)(unaff_RBX + 0x30) = (int)(unaff_RSI - *(longlong *)(unaff_RBX + 0x10) >> 3);
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar3 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar3 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar3;
    unaff_RDI = lVar2 + (ulonglong)uVar1;
  }
  return unaff_RDI;
}



longlong FUN_18061cd3f(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint unaff_R14D;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar1 = *(uint *)(lVar2 + 0x8000);
  uVar3 = (unaff_R14D & 0xfffffff0) + uVar1;
  if (uVar3 < 0x8000) {
    *(uint *)(lVar2 + 0x8000) = uVar3;
    unaff_RDI = lVar2 + (ulonglong)uVar1;
  }
  return unaff_RDI;
}





// 函数: void FUN_18061cd6b(void)
void FUN_18061cd6b(void)

{
  return;
}





// 函数: void FUN_18061cd80(undefined8 *param_1)
void FUN_18061cd80(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &UNK_180a3bfe0;
  uVar3 = 0;
  plVar1 = param_1 + 2;
  lVar2 = *plVar1;
  if (param_1[3] - lVar2 >> 3 != 0) {
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(*plVar1 + uVar3 * 8) = 0;
      lVar2 = *plVar1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < (ulonglong)(param_1[3] - lVar2 >> 3));
  }
  param_1[3] = lVar2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*plVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 FUN_18061ce30(undefined8 param_1,ulonglong param_2)

{
  FUN_18061cd80();
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}



undefined8 * FUN_18061ce90(undefined8 *param_1,uint param_2)

{
  *param_1 = &UNK_180a3c018;
  FUN_1808fc8a8(param_1 + 1,0x38,2,FUN_18061cd80,0xfffffffffffffffe);
  *param_1 = &UNK_1809fcd18;
  if ((param_2 & 1) != 0) {
    free(param_1,0x80);
  }
  return param_1;
}



undefined8 * FUN_18061cf30(undefined8 *param_1,uint param_2)

{
  *param_1 = &UNK_180a3bfa8;
  FUN_1808fc8a8(param_1 + 8,0x38,2,FUN_18061cd80,0xfffffffffffffffe);
  FUN_18061cd80(param_1 + 1);
  *param_1 = &UNK_180a3bff8;
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}



undefined8 FUN_18061cfb0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = *(undefined4 *)(param_1 + 0x28);
  uStack_70 = (undefined4)
              ((*(longlong **)(param_1 + 0x10))[1] - **(longlong **)(param_1 + 0x10) >> 6);
  uStack_74 = *(undefined4 *)(param_1 + 0x2c);
  uStack_6c = param_3;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x18);
    uVar4 = (ulonglong)param_3;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      uStack_68 = puVar3[-6];
      uStack_64 = puVar3[-5];
      uStack_60 = puVar3[-4];
      puVar2 = *(undefined4 **)(lVar1 + 8);
      uStack_5c = puVar3[-3];
      uStack_58 = puVar3[-2];
      uStack_54 = puVar3[-1];
      uStack_50 = *puVar3;
      uStack_36 = *(undefined2 *)((longlong)puVar3 + 0x1a);
      uStack_34 = puVar3[7];
      uStack_4c = 0x7f7fffff;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0x3f000000;
      uStack_30 = 0x3f000000;
      uStack_2c = 0x3f19999a;
      uStack_38 = 0;
      if (puVar2 < *(undefined4 **)(lVar1 + 0x10)) {
        *(undefined4 **)(lVar1 + 8) = puVar2 + 0x10;
        *puVar2 = uStack_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
        puVar2[4] = uStack_58;
        puVar2[5] = uStack_54;
        puVar2[6] = uStack_50;
        *(undefined8 *)(puVar2 + 7) = 0x7f7fffff;
        *(undefined8 *)(puVar2 + 9) = 0;
        puVar2[0xb] = 0x3f000000;
        *(undefined1 *)(puVar2 + 0xc) = 0;
        *(undefined2 *)((longlong)puVar2 + 0x32) = uStack_36;
        puVar2[0xd] = uStack_34;
        puVar2[0xe] = 0x3f000000;
        puVar2[0xf] = 0x3f19999a;
      }
      else {
        FUN_1803cef40(lVar1,&uStack_68);
      }
      puVar3 = puVar3 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_180396dd0(*(undefined8 *)(param_1 + 8),&uStack_88);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return 1;
}



undefined8 FUN_18061cffd(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 unaff_RBX;
  undefined4 *puVar3;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined1 auStackX_20 [8];
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined2 uStack0000000000000072;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  puVar3 = (undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBP;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  param_3 = param_3 & 0xffffffff;
  do {
    lVar1 = *(longlong *)(unaff_RSI + 0x10);
    uStack0000000000000040 = puVar3[-6];
    uStack0000000000000044 = puVar3[-5];
    uStack0000000000000048 = puVar3[-4];
    puVar2 = *(undefined4 **)(lVar1 + 8);
    uStack000000000000004c = puVar3[-3];
    uStack0000000000000050 = puVar3[-2];
    uStack0000000000000054 = puVar3[-1];
    uStack0000000000000058 = *puVar3;
    uStack0000000000000072 = *(undefined2 *)((longlong)puVar3 + 0x1a);
    uStack0000000000000074 = puVar3[7];
    uStack000000000000005c = 0x7f7fffff;
    uStack0000000000000060 = 0;
    uStack0000000000000064 = 0;
    uStack0000000000000068 = 0;
    uStack000000000000006c = 0x3f000000;
    uStack0000000000000078 = 0x3f000000;
    uStack000000000000007c = 0x3f19999a;
    uStack0000000000000070 = 0;
    if (puVar2 < *(undefined4 **)(lVar1 + 0x10)) {
      *(undefined4 **)(lVar1 + 8) = puVar2 + 0x10;
      *puVar2 = uStack0000000000000040;
      puVar2[1] = uStack0000000000000044;
      puVar2[2] = uStack0000000000000048;
      puVar2[3] = uStack000000000000004c;
      puVar2[4] = uStack0000000000000050;
      puVar2[5] = uStack0000000000000054;
      puVar2[6] = uStack0000000000000058;
      *(undefined8 *)(puVar2 + 7) = 0x7f7fffff;
      *(undefined8 *)(puVar2 + 9) = 0;
      puVar2[0xb] = 0x3f000000;
      *(undefined1 *)(puVar2 + 0xc) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x32) = uStack0000000000000072;
      puVar2[0xd] = uStack0000000000000074;
      puVar2[0xe] = 0x3f000000;
      puVar2[0xf] = 0x3f19999a;
    }
    else {
      FUN_1803cef40(lVar1,&stack0x00000040);
    }
    puVar3 = puVar3 + 0x10;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  FUN_180396dd0(*(undefined8 *)(unaff_RSI + 8),auStackX_20);
  *(undefined1 *)(unaff_RSI + 0x30) = 1;
  return 1;
}



undefined1 FUN_18061d151(void)

{
  longlong unaff_RSI;
  undefined1 auStackX_20 [8];
  
  FUN_180396dd0(*(undefined8 *)(unaff_RSI + 8),auStackX_20);
  *(undefined1 *)(unaff_RSI + 0x30) = 1;
  return 1;
}



undefined8 *
FUN_18061d170(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a242b0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18061d1b0(longlong param_1)
void FUN_18061d1b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x250);
  *(longlong *)(param_1 + 600) = *plVar1;
  iVar3 = *(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x1a8);
  uVar4 = ((uint)((iVar3 + -1) * iVar3) >> 1) + *(int *)(param_1 + 0x1b0) * iVar3;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    *(ulonglong *)(param_1 + 600) = uVar5 * 0x20 + *plVar1;
  }
  else {
    FUN_180622a80(plVar1);
    lVar2 = 0;
    do {
      *(undefined8 *)(lVar2 + 0x10 + *plVar1) = 0;
      *(undefined4 *)(lVar2 + 0x18 + *plVar1) = 0;
      *(undefined8 *)(lVar2 + *plVar1) = 0;
      *(undefined2 *)(lVar2 + 8 + *plVar1) = 0;
      *(undefined1 *)(lVar2 + 0xb + *plVar1) = 0;
      *(undefined1 *)(lVar2 + 10 + *plVar1) = 0;
      uVar5 = uVar5 - 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar5 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



