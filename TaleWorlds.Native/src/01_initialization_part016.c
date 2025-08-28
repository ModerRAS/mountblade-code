#include "TaleWorlds.Native.Split.h"

// 01_initialization_part016.c - 32 个函数

// 函数: void FUN_1800497d0(void)
void FUN_1800497d0(void)

{
  _Mtx_destroy_in_situ();
  return;
}





// 函数: void FUN_1800497f0(undefined8 param_1)
void FUN_1800497f0(undefined8 param_1)

{
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ(param_1);
  return;
}



undefined8 *
FUN_180049830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &UNK_1809fcb90;
  _Cnd_init_in_situ(param_1 + 4);
  _Mtx_init_in_situ(param_1 + 0xd,2,param_3,param_4,uVar1);
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



undefined8 *
FUN_1800498d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x98,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049910(longlong param_1,undefined8 param_2,int param_3)
void FUN_180049910(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x80) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180049931(void)
void FUN_180049931(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180049956(undefined1 *param_1)
void FUN_180049956(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



undefined8 * FUN_180049970(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc28;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800499c0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1800499c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  uStack_d8 = 0;
  auStack_d0[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
}



undefined8 *
FUN_180049b30(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc28;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x80,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



undefined8 *
FUN_180049bb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049bf0(longlong param_1,longlong param_2)
void FUN_180049bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x40) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180049c27. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x40);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x40,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_180049c70(longlong param_1,undefined8 param_2,int param_3)
void FUN_180049c70(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x40) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180049c8f(void)
void FUN_180049c8f(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180049cb4(undefined1 *param_1)
void FUN_180049cb4(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



undefined8 * FUN_180049cd0(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc58;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180049d20(longlong param_1,longlong param_2,longlong param_3)
void FUN_180049d20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_a0,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_a8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_d8);
}



undefined8 *
FUN_180049eb0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc58;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x40,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180049f30(undefined8 *param_1)
void FUN_180049f30(undefined8 *param_1)

{
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180049fd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180049fd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_180049fd0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[8] = &UNK_180a3c3e0;
  if (param_2[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_2[8] = &UNK_18098bcb0;
  param_2[4] = &UNK_180a3c3e0;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_18004a0b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18004a0b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180049fd0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004a0d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18004a0d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180049fd0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004a100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18004a100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180049fd0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18004a130(undefined8 *param_1)
void FUN_18004a130(undefined8 *param_1)

{
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_18004a180(longlong param_1,longlong param_2)
void FUN_18004a180(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x80) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x00018004a1b9. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x80);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x80,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_18004a200(void)
void FUN_18004a200(void)

{
  _Mtx_destroy_in_situ();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18004a220(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar2 = FUN_18062b420(_DAT_180c8ed18,param_2,3,param_4,0xfffffffffffffffe);
  iVar1 = _Mtx_lock(param_1 + 0x28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 < *(undefined8 **)(param_1 + 0x18)) {
    *(undefined8 **)(param_1 + 0x10) = puVar6 + 1;
    *puVar6 = uVar2;
    goto LAB_18004a322;
  }
  puVar5 = *(undefined8 **)(param_1 + 8);
  lVar3 = (longlong)puVar6 - (longlong)puVar5 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
LAB_18004a2b9:
    puVar4 = (undefined8 *)
             FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,*(undefined1 *)(param_1 + 0x20),param_4,uVar7);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar5 = *(undefined8 **)(param_1 + 8);
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 != 0) goto LAB_18004a2b9;
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,puVar5,(longlong)puVar6 - (longlong)puVar5);
  }
  *puVar4 = uVar2;
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 **)(param_1 + 8) = puVar4;
  *(undefined8 **)(param_1 + 0x10) = puVar4 + 1;
  *(undefined8 **)(param_1 + 0x18) = puVar4 + lVar3;
LAB_18004a322:
  iVar1 = _Mtx_unlock(param_1 + 0x28);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return uVar2;
}





// 函数: void FUN_18004a360(undefined8 *param_1)
void FUN_18004a360(undefined8 *param_1)

{
  *param_1 = &UNK_1809fcd00;
  _Mtx_destroy_in_situ();
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_1809fcd18;
  return;
}



undefined8 FUN_18004a3c0(undefined8 param_1,ulonglong param_2)

{
  FUN_18004a360();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78);
  }
  return param_1;
}





// 函数: void FUN_18004a400(undefined8 *param_1)
void FUN_18004a400(undefined8 *param_1)

{
  *param_1 = &UNK_1809fccc0;
  *param_1 = &UNK_1809fcce0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18004a430(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,param_2,0x10,6);
  lVar2 = FUN_18064e990(uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + lVar2;
  return uVar1;
}





// 函数: void FUN_18004a470(longlong param_1,longlong param_2)
void FUN_18004a470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18064e990(param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) - lVar1;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



undefined8 *
FUN_18004a4b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809fccc0;
  *param_1 = &UNK_1809fcce0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18004a500(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  uint uStack_20;
  
  FUN_1800ba940(&puStack_30);
  iVar4 = uStack_20 + 0x11;
  FUN_1806277c0(&puStack_30,iVar4);
  puVar2 = (undefined4 *)(puStack_28 + uStack_20);
  *puVar2 = 0x69676e65;
  puVar2[1] = 0x635f656e;
  puVar2[2] = 0x69666e6f;
  puVar2[3] = 0x78742e67;
  *(undefined2 *)(puVar2 + 4) = 0x74;
  uStack_48 = 0;
  lStack_40 = 0;
  puVar3 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar3 = puStack_28;
  }
  uStack_20 = iVar4;
  FUN_18062dee0(&uStack_48,puVar3,&UNK_1809fcfbc);
  if (lStack_40 == 0) {
    bVar5 = false;
  }
  else {
    cVar1 = FUN_1800aecf0(_DAT_180c86920,&uStack_48);
    if (lStack_40 != 0) {
      fclose();
      lStack_40 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    bVar5 = cVar1 != '\0';
  }
  if (lStack_40 != 0) {
    fclose();
    lStack_40 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return bVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004a640(void)
void FUN_18004a640(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  uint uStack_50;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  uStack_68 = 0;
  cVar1 = FUN_18004a500();
  if (cVar1 == '\0') {
    FUN_18004b1f0(1);
    FUN_18004a500();
  }
  puStack_38 = &UNK_1809fdc18;
  puStack_30 = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 6;
  strcpy_s(auStack_20,0x10,&UNK_180a3c07c);
  uStack_68 = 1;
  FUN_1806279c0(auStack_60,&puStack_38);
  uStack_68 = 0;
  puStack_38 = &UNK_18098bcb0;
  iVar5 = uStack_50 + 0xf;
  FUN_1806277c0(auStack_60,iVar5);
  puVar2 = (undefined4 *)(puStack_58 + uStack_50);
  *puVar2 = 0x72657375;
  puVar2[1] = 0x6e6f635f;
  puVar2[2] = 0x2e676966;
  puVar2[3] = 0x747874;
  uStack_50 = iVar5;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar4 = &DAT_18098bc73;
  if (puStack_58 != (undefined *)0x0) {
    puVar4 = puStack_58;
  }
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  FUN_18062dee0(puVar3,puVar4,&UNK_1809fcfbc);
  if (puVar3[1] == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  FUN_1800aecf0(_DAT_180c868b0,puVar3);
  FUN_18062de90(puVar3);
  if (puVar3[1] != 0) {
    fclose();
    puVar3[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004a850(void)
void FUN_18004a850(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xd20,8,3);
  _DAT_180c86930 = FUN_1800b4a40(uVar1);
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x138,8,3);
  _DAT_180c868a8 = FUN_180086ca0(uVar1);
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x50,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x50);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004adc0(void)
void FUN_18004adc0(void)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined *puStack_28;
  uint uStack_20;
  
  FUN_1800ba6f0();
  iVar8 = 0;
  uVar10 = 0;
  if (uStack_20 != 0) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      cVar1 = puStack_28[lVar6];
      if (((byte)(cVar1 + 0x9fU) < 0x1a) ||
         (((byte)(cVar1 - 0x30U) < 0x30 &&
          ((0x87fffffe03ffU >> ((longlong)(char)(cVar1 - 0x30U) & 0x3fU) & 1) != 0)))) {
        if (lVar5 != lVar6) {
          puStack_28[lVar5] = cVar1;
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      lVar6 = lVar6 + 1;
    } while (uVar9 < uStack_20);
  }
  puStack_28[iVar8] = 0;
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,CONCAT71((int7)(uVar10 >> 8),3));
  puVar7 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar7 = puStack_28;
  }
  FUN_180627910(puVar2 + 1,puVar7);
  pcVar3 = (char *)puVar2[2];
  if (*pcVar3 != '\0') {
    lVar5 = 0;
    do {
      lVar6 = strchr(&DAT_1809fcfb8,(int)pcVar3[lVar5]);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar5 + puVar2[2]) = 0x2f;
      }
      lVar5 = lVar5 + 1;
      pcVar3 = (char *)puVar2[2];
    } while (pcVar3[lVar5] != '\0');
  }
  *puVar2 = 0;
  _DAT_180c82858 = puVar2;
  if (DAT_180bf0101 != '\0') {
    GetLastError();
    puVar7 = &DAT_18098bc73;
    if ((undefined *)puVar2[2] != (undefined *)0x0) {
      puVar7 = (undefined *)puVar2[2];
    }
    uVar4 = CreateMutexA(0,0,puVar7);
    *puVar2 = uVar4;
    iVar8 = GetLastError();


// 函数: void FUN_18004afa0(void)
void FUN_18004afa0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_R9;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if ((_DAT_180c86878 != (longlong *)0x0) && ((char)_DAT_180c86878[0x42] == '\0')) {
    (**(code **)(*_DAT_180c86878 + 0x38))();
  }
  lVar2 = _DAT_180c8a990;
  (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x20) + 0x108))
            (*(longlong **)(_DAT_180c8a990 + 0x20),_DAT_180c8a990 + 0xc0);
  plVar1 = *(longlong **)(lVar2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,0,*(code **)(*plVar1 + 0x10),in_R9,uVar4);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  *(undefined8 *)(lVar2 + 0x30) = 0;
  if (*(undefined8 **)(lVar2 + 0x28) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(lVar2 + 0x28))();
    *(undefined8 *)(lVar2 + 0x28) = 0;
  }
  lVar2 = _DAT_180c8a990;
  if (_DAT_180c8a990 != 0) {
    FUN_18004b730();
    *(undefined **)(lVar2 + 0xc0) = &UNK_1809fcc88;
    FUN_18004a360(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x10) = &UNK_1809fccc0;
    *(undefined8 *)(lVar2 + 0x10) = &UNK_1809fcce0;
    *(undefined **)(lVar2 + 8) = &UNK_1809fcca0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  _DAT_180c8a990 = 0;
  timeEndPeriod(1);
  lVar2 = _DAT_180c86930;
  if (_DAT_180c86930 != 0) {
    FUN_1800b4550(_DAT_180c86930);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  _DAT_180c86930 = 0;
  return;
}



undefined8 *
FUN_18004b100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0,param_3,param_4,0,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  iVar4 = *(int *)(param_1 + 2);
  iVar3 = iVar4 + 6;
  FUN_1806277c0(param_1,iVar3,param_3,param_4,1,uVar5);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
  *puVar1 = 0x2e2f2e2e;
  *(undefined2 *)(puVar1 + 1) = 0x2f2e;
  *(undefined1 *)((longlong)puVar1 + 6) = 0;
  *(int *)(param_1 + 2) = iVar3;
  iVar4 = iVar4 + 0x2a;
  FUN_1806277c0(param_1,iVar4);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
  *puVar2 = 0x736c6f6f542f2e2e;
  puVar2[1] = 0x747541747365542f;
  puVar2[2] = 0x2f6e6f6974616d6f;
  puVar2[3] = 0x656d686361747441;
  *(undefined4 *)(puVar2 + 4) = 0x2f73746e;
  *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
  *(int *)(param_1 + 2) = iVar4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18004b1f0(char param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  uint uStack_20;
  
  if (param_1 == '\0') {
    if ((undefined *)*_DAT_180c86920 == &UNK_180a062e0) {
      if ((_DAT_180c86920[0x16] == 0) && (*(char *)(_DAT_180c86870 + 0x1f0) != '\0')) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = (**(code **)((undefined *)*_DAT_180c86920 + 0x28))();
    }
    if (cVar2 == '\0') {
      return 0;
    }
  }
  FUN_1800ba940(&puStack_30);
  iVar5 = uStack_20 + 0x11;
  FUN_1806277c0(&puStack_30,iVar5);
  puVar3 = (undefined4 *)(puStack_28 + uStack_20);
  *puVar3 = 0x69676e65;
  puVar3[1] = 0x635f656e;
  puVar3[2] = 0x69666e6f;
  puVar3[3] = 0x78742e67;
  *(undefined2 *)(puVar3 + 4) = 0x74;
  uStack_48 = 0;
  lStack_40 = 0;
  puVar4 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar4 = puStack_28;
  }
  uStack_20 = iVar5;
  FUN_18062dee0(&uStack_48,puVar4,&DAT_1809fc7ec);
  plVar1 = _DAT_180c86920;
  if (lStack_40 == 0) {
    uVar6 = 3;
  }
  else {
    cVar2 = (**(code **)(*_DAT_180c86920 + 0x28))(_DAT_180c86920);
    if (cVar2 != '\0') {
      FUN_1800ae730(plVar1,&uStack_48);
    }
    uVar6 = 0;
    if (lStack_40 != 0) {
      fclose();
      lStack_40 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      uVar6 = 0;
    }
  }
  if (lStack_40 != 0) {
    fclose();
    lStack_40 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 == (undefined *)0x0) {
    return uVar6;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18004b390(void)

{
  int iVar1;
  
  iVar1 = _Thrd_id();
  if (_DAT_180c9105c == 0) {
    return iVar1 == *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
  }
  if ((iVar1 != *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48)) && (iVar1 != _DAT_180c9105c))
  {
    return false;
  }
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004b3f0(undefined8 *param_1)
void FUN_18004b3f0(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_18098bc80;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = *(uint *)(param_1 + 2);
  uVar4 = uVar1 + 7;
  if (uVar4 < 0x1f) {
    *(undefined8 *)((ulonglong)uVar1 + param_1[1]) = 0x32312e322e3176;
    *(uint *)(param_1 + 2) = uVar4;
    uVar1 = uVar4;
  }
  if (uVar1 + 1 < 0x1f) {
    *(undefined2 *)((ulonglong)uVar1 + param_1[1]) = 0x2e;
    *(uint *)(param_1 + 2) = uVar1 + 1;
  }
  puStack_50 = &UNK_18098bc80;
  puStack_48 = auStack_38;
  uStack_40 = 0;
  auStack_38[0] = 0;
  uStack_68 = 3;
  puStack_58 = param_1;
  FUN_18004b860(&puStack_50,&UNK_1809fd0a0,0x130a7);
  puVar5 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar5 = puStack_48;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (puVar5[lVar3] != '\0');
  iVar2 = (int)lVar3;
  if ((0 < iVar2) && (*(uint *)(param_1 + 2) + iVar2 < 0x1f)) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],puVar5,(longlong)(iVar2 + 1));
  }
  uStack_68 = 1;
  puStack_50 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_18004b560(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = (longlong)&UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (longlong)&UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(char *)(_DAT_180c8a9a0 + 0x22) != '\0') {
    FUN_180627be0(param_1,_DAT_180c8a9a0 + 0x28);
    return param_1;
  }
  (**(code **)(*param_1 + 0x10))(param_1,&UNK_1809fd0a8,param_3,param_4,1,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004b5f0(undefined4 *param_1)
void FUN_18004b5f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
  iVar2 = _Thrd_id();
  if (iVar2 != iVar1) {
    _DAT_180c9105c = *param_1;
  }
  return;
}



undefined8 *
FUN_18004b640(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_18098bc80;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x20,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}





// 函数: void FUN_18004b6b0(undefined8 *param_1)
void FUN_18004b6b0(undefined8 *param_1)

{
  *param_1 = &UNK_1809fcca0;
  return;
}





// 函数: void FUN_18004b6d0(undefined8 *param_1)
void FUN_18004b6d0(undefined8 *param_1)

{
  *param_1 = &UNK_1809fcc88;
  return;
}





// 函数: void FUN_18004b6f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18004b6f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004b790(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





// 函数: void FUN_18004b710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18004b710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004b790(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





