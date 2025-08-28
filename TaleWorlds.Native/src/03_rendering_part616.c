#include "TaleWorlds.Native.Split.h"

// 03_rendering_part616.c - 21 个函数

// 函数: void FUN_1806077c0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)
void FUN_1806077c0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puStack_30;
  longlong lStack_28;
  
  uVar5 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30);
  cVar2 = FUN_180624af0();
  if ((cVar2 == '\0') || (param_3 == -1)) {
    lVar4 = *(longlong *)(param_1 + 0x8a8);
    if ((lVar4 != 0) &&
       ((*(longlong *)(lVar4 + 0x260) != 0 &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x210), lVar1 != 0)))) {
      FUN_180572610(lVar1,&DAT_18098bc73,param_3,param_4,uVar5);
      lVar4 = *(longlong *)(param_1 + 0x8a8);
    }
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x260) != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x210), lVar4 != 0)) {
      *(undefined1 *)(lVar4 + 0x3425) = 0;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x8a8);
    if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x260) == 0)) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x210), lVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_180572610(lVar1,param_2,param_3,param_4,uVar5);
      lVar4 = *(longlong *)(param_1 + 0x8a8);
    }
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x260) != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x210), lVar4 != 0)) {
      *(undefined1 *)(lVar4 + 0x3425) = uVar3;
    }
  }
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180607910(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = (longlong *)param_1[1];
  if (plVar7 < (longlong *)param_1[2]) {
    plVar4 = (longlong *)*param_2;
    *plVar7 = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
    }
    *(int *)(plVar7 + 1) = (int)param_2[1];
    param_1[1] = param_1[1] + 0x10;
    return (longlong *)(param_1[1] + -0x10);
  }
  plVar4 = (longlong *)*param_1;
  lVar5 = (longlong)plVar7 - (longlong)plVar4 >> 4;
  plVar3 = (longlong *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_1806079ba;
  }
  plVar3 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar5 << 4,(char)param_1[3],param_4,0xfffffffffffffffe);
  plVar7 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
LAB_1806079ba:
  plVar6 = plVar3;
  if (plVar4 != plVar7) {
    lVar8 = (longlong)plVar4 - (longlong)plVar3;
    lVar2 = 8 - (longlong)plVar4;
    do {
      *plVar6 = *plVar4;
      *plVar4 = 0;
      puVar1 = (undefined4 *)((longlong)plVar3 + lVar2 + (longlong)plVar4);
      *puVar1 = *(undefined4 *)((longlong)puVar1 + lVar8);
      plVar4 = plVar4 + 2;
      plVar6 = plVar6 + 2;
    } while (plVar4 != plVar7);
  }
  plVar7 = (longlong *)*param_2;
  *plVar6 = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  *(int *)(plVar6 + 1) = (int)param_2[1];
  plVar7 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  if (plVar4 != plVar7) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x38))();
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar7);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    *param_1 = (longlong)plVar3;
    param_1[1] = (longlong)(plVar6 + 2);
    param_1[2] = (longlong)(plVar3 + lVar5 * 2);
    return plVar6;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar4);
}





// 函数: void FUN_180607a90(longlong *param_1)
void FUN_180607a90(longlong *param_1)

{
  longlong lStack_28;
  undefined4 uStack_20;
  undefined1 auStack_18 [16];
  
  lStack_28 = *param_1;
  if (*(longlong *)(lStack_28 + 0x8a8) != 0) {
    FUN_1802f0600(*(longlong *)(lStack_28 + 0x8a8),0xffffffff);
    lStack_28 = *param_1;
  }
  if (*(char *)(lStack_28 + 0x8be) != '\0') {
    FUN_18053fcb0(lStack_28,1);
    uStack_20 = *(undefined4 *)(lStack_28 + 0x938);
    FUN_1804dd4d0(*(longlong *)(lStack_28 + 0x930) + 0x2b58,auStack_18,&lStack_28);
  }
  return;
}



longlong * FUN_180607b10(longlong *param_1,longlong *param_2,int param_3)

{
  if (param_3 == 3) {
    return (longlong *)0x180c0bcc0;
  }
  if (param_3 == 4) {
    return param_1;
  }
  if (param_3 == 0) {
    param_2 = (longlong *)*param_1;
  }
  else {
    if (param_3 == 1) {
      param_2 = (longlong *)*param_2;
      *param_1 = (longlong)param_2;
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x28))(param_2);
      }
      return (longlong *)0x0;
    }
    if (param_3 != 2) {
      return (longlong *)0x0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_2 = (longlong *)*param_2;
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))();
  }
  return (longlong *)0x0;
}





// 函数: void FUN_180607bb0(longlong *param_1)
void FUN_180607bb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(*param_1 + 0x3c0);
  FUN_1804e0970(plVar1);
  lVar3 = *param_1;
  plVar2 = *(longlong **)(lVar3 + 0x3c0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,0);
  }
  *(undefined8 *)(lVar3 + 0x3c0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
                    // WARNING: Could not recover jumptable at 0x000180607c34. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)*param_1 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180607c80(int param_1)
void FUN_180607c80(int param_1)

{
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((-1 < param_1) && (param_1 < (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3))) {
    (**(code **)(*_DAT_180c8f008 + 0x70))
              (_DAT_180c8f008,
               *(longlong *)
                (_DAT_180c95f88 + (longlong)*(int *)(_DAT_180c95f68 + (longlong)param_1 * 4) * 8) +
               0x10);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be78);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180607d30(longlong param_1)
void FUN_180607d30(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  int iStack_68;
  undefined1 auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  iStack_68 = 0;
  auStack_60[0] = 0;
  lVar1 = -1;
  if (param_1 != 0) {
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_1 + lVar1) != '\0');
    iStack_68 = (int)lVar1;
    strcpy_s(auStack_60,0x40,param_1);
  }
  if (0 < iStack_68) {
    FUN_18053a2e0(&DAT_180c95f30,&puStack_78);
  }
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180607e00(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_18053a410(&DAT_180c95f30);
  iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(_DAT_180c95f88 + (longlong)iVar1 * 8);
  }
  lVar2 = FUN_18040db80(uVar3);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *param_1 = *(undefined8 *)(lVar2 + 8);
  param_1[1] = uVar3;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180607e80(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar4 = FUN_18053a410(&DAT_180c95f30,param_1,param_2);
  iVar4 = *(int *)(_DAT_180c95f68 + (longlong)iVar4 * 4);
  if (iVar4 == -1) {
    lVar6 = 0;
    uVar5 = _DAT_180c95f68;
  }
  else {
    lVar6 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar4 * 8);
    uVar5 = _DAT_180c95f88;
  }
  if (*(char *)(lVar6 + 0x194) != '\0') {
    FUN_180404350();
    uVar5 = 0;
    LOCK();
    uVar1 = *(uint *)(lVar6 + 0xe0);
    if (uVar1 == 0) {
      *(uint *)(lVar6 + 0xe0) = 1;
    }
    else {
      uVar5 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0) {
      puVar2 = *(undefined8 **)(lVar6 + 0xd0);
      if (puVar2 == (undefined8 *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      if ((undefined *)*puVar2 == &UNK_180a33f80) {
                    // WARNING: Could not recover jumptable at 0x000180404403. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar5 = (*(code *)puVar2[1])(puVar2[2]);
        return uVar5;
      }
      uVar5 = (**(code **)((undefined *)*puVar2 + 0x10))(puVar2);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180607ef0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18053a410(&DAT_180c95f30,param_1,param_2);
  iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
  if (iVar1 != -1) {
    return *(undefined8 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x1d0);
  }
  return uRam00000000000001d0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180607f40(int param_1)
void FUN_180607f40(int param_1)

{
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if (-1 < param_1) {
    if (param_1 < (int)((_DAT_180c96158 - _DAT_180c96150) / 0x68)) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
    }
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a38930);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180608000(int param_1)
void FUN_180608000(int param_1)

{
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((-1 < param_1) && (param_1 < (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3))) {
    if (*(int *)(_DAT_180c95f68 + (longlong)param_1 * 4) != -1) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a38900);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806080e0(int param_1)
void FUN_1806080e0(int param_1)

{
  int iVar1;
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((-1 < param_1) && (param_1 < (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3))) {
    iVar1 = *(int *)(_DAT_180c95f68 + (longlong)param_1 * 4);
    if (iVar1 != -1) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(undefined4 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x1d8));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uRam00000000000001d8);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a38868);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806081c0(int param_1)
void FUN_1806081c0(int param_1)

{
  int iVar1;
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((-1 < param_1) && (param_1 < (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3))) {
    iVar1 = *(int *)(_DAT_180c95f68 + (longlong)param_1 * 4);
    if (iVar1 != -1) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(undefined4 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x1dc));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uRam00000000000001dc);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a38838);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806082a0(int param_1)
void FUN_1806082a0(int param_1)

{
  int iVar1;
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((-1 < param_1) && (param_1 < (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3))) {
    iVar1 = *(int *)(_DAT_180c95f68 + (longlong)param_1 * 4);
    if (iVar1 != -1) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(undefined4 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x1e0));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uRam00000000000001e0);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a388d0);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_180608380(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18053a410(&DAT_180c95f30,param_1,param_2);
  iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
  if (iVar1 != -1) {
    return *(undefined4 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x188);
  }
  return uRam0000000000000188;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806083d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18053a410(&DAT_180c95f30,param_1,param_2);
  iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
  if (iVar1 != -1) {
    return *(undefined4 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x1f0);
  }
  return uRam00000000000001f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180608420(int param_1)
void FUN_180608420(int param_1)

{
  int iVar1;
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((-1 < param_1) && (param_1 < (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3))) {
    iVar1 = *(int *)(_DAT_180c95f68 + (longlong)param_1 * 4);
    if (iVar1 != -1) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(undefined4 *)(*(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8) + 0x1e4));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uRam00000000000001e4);
  }
  FUN_180626eb0(auStack_218,0x200,&UNK_180a3be00,&UNK_180a38898);
  FUN_18061c7a0(auStack_218);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180608500(undefined4 param_1,undefined4 param_2)
void FUN_180608500(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18053a410(&DAT_180c95f30,param_1,param_2);
  iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8);
  }
                    // WARNING: Could not recover jumptable at 0x000180608549. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,lVar2 + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_180608550(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18053a410(&DAT_180c95f30,param_1,param_2);
  iVar1 = *(int *)(_DAT_180c95f68 + (longlong)iVar1 * 4);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar1 * 8);
  }
  return 1.0 - *(float *)(lVar2 + 0x1e8) / *(float *)(lVar2 + 0x188);
}



undefined4
FUN_1806085b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puStack_30;
  longlong lStack_28;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_18055b2f0(&DAT_180c96150,&puStack_30);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180608620(int param_1)
void FUN_180608620(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*_DAT_180c8f008 + 0x70);
  if (param_1 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                0x48) < _DAT_180d49f70) {
      FUN_1808fcb90(&DAT_180d49f70);
      if (_DAT_180d49f70 == -1) {
        _DAT_180d49f80 = &UNK_1809fcc58;
        _DAT_180d49f88 = &DAT_180d49f98;


// 函数: void FUN_18060bbe0(void)
void FUN_18060bbe0(void)

{
  undefined *puStack_30;
  longlong lStack_28;
  
  FUN_180627910(&puStack_30);
  FUN_1804ac910();
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18060bc80(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = _Mtx_lock(0x180c962c0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar3 = _DAT_180c96338 - _DAT_180c96330;
  lVar2 = _DAT_180c96318 - _DAT_180c96310;
  iVar1 = _Mtx_unlock(0x180c962c0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return (int)(lVar3 >> 6) + (int)(lVar2 / 0x38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060bd20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)
void FUN_18060bd20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_18066b100(_DAT_180c8ed68,param_1,param_2,param_4,param_3,0,0x40c907aa,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060bd80(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18060bd80(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_18066b100(_DAT_180c8ed68,param_1,param_2,param_4,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060bde0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
void FUN_18060bde0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 auStackX_20 [2];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_28 = *param_3;
  uStack_20 = param_3[1];
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  if (*(char *)(_DAT_180c8ed68 + 0x50) != '\0') {
    auStackX_20[0] = param_4;
    FUN_18066ae20(_DAT_180c8ed68,param_1,&uStack_18,&uStack_28,param_7,auStackX_20,param_5,param_6);
  }
  return;
}



undefined8 * FUN_18060be50(undefined8 *param_1)

{
  undefined4 uStack_c;
  
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18060be80(undefined8 param_1,undefined1 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = func_0x0001804bb9d0(param_1,param_2);
  puVar2 = (undefined8 *)0x180c95e98;
  puVar3 = _DAT_180c95ea8;
  if (_DAT_180c95ea8 != (undefined8 *)0x0) {
    do {
      if (*(uint *)(puVar3 + 4) < uVar1) {
        puVar3 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar3[1];
      }
    } while (puVar3 != (undefined8 *)0x0);
    if ((puVar2 != (undefined8 *)0x180c95e98) && (*(uint *)(puVar2 + 4) <= uVar1))
    goto LAB_18060becd;
  }
  puVar2 = (undefined8 *)0x180c95e98;
LAB_18060becd:
  if (puVar2[5] == 0) {
    FUN_180626f80(&UNK_180a2eac0);
    return 0;
  }
  return *(int *)(puVar2[5] + 0x298) + -1;
}





// 函数: void FUN_18060bf00(longlong param_1,undefined8 param_2,char param_3)
void FUN_18060bf00(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  FUN_1804bbec0(0x180c95de0,param_1,param_2);
  puVar9 = (undefined8 *)0x180c95e98;
  uVar4 = func_0x0001804bb950(param_1);
  puVar3 = (undefined8 *)puVar9[2];
  puVar5 = puVar9;
  while (puVar2 = puVar3, puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (undefined8 *)*puVar2;
    }
    else {
      puVar3 = (undefined8 *)puVar2[1];
      puVar5 = puVar2;
    }
  }
  if ((puVar5 == puVar9) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (undefined8 *)FUN_1804c0610(puVar9,&stack0x00000008);
    puVar5 = (undefined8 *)*puVar5;
  }
  lVar1 = puVar5[5];
  iVar6 = 0;
  if (0 < *(int *)(lVar1 + 0x298)) {
    puVar8 = (undefined4 *)(param_1 + 0x3c);
    lVar7 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar1 + 0x290) + 0x50 + lVar7) != '\0') {
        if (param_3 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        *puVar8 = uVar10;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (iVar6 < *(int *)(lVar1 + 0x298));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060bf40(int param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
void FUN_18060bf40(int param_1,uint param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float in_XMM2_Da;
  uint auStackX_8 [2];
  undefined1 auStackX_20 [8];
  
  if (5.0 <= in_XMM2_Da) {
    if (10.0 <= in_XMM2_Da) {
      if (16.0 <= in_XMM2_Da) {
        auStackX_8[0] = (21.0 <= in_XMM2_Da) + 3;
      }
      else {
        auStackX_8[0] = 2;
      }
    }
    else {
      auStackX_8[0] = 1;
    }
  }
  else {
    auStackX_8[0] = 0;
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | auStackX_8[0];
  puVar2 = (undefined8 *)0x180c95e98;
  puVar3 = _DAT_180c95ea8;
  if (_DAT_180c95ea8 != (undefined8 *)0x0) {
    do {
      if (*(uint *)(puVar3 + 4) < auStackX_8[0]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar3[1];
      }
    } while (puVar3 != (undefined8 *)0x0);
  }
  if ((puVar2 == (undefined8 *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar2 + 4))) {
    puVar2 = (undefined8 *)FUN_1804c0610(0x180c95e98,auStackX_20,param_3,puVar2,auStackX_8);
    puVar2 = (undefined8 *)*puVar2;
  }
  lVar1 = puVar2[5];
  *param_4 = *(undefined4 *)(lVar1 + 0x380);
  *param_5 = *(undefined4 *)(lVar1 + 0x390);
  *param_6 = (int)((*(longlong *)(lVar1 + 0xa28) - *(longlong *)(lVar1 + 0xa20)) / 0x50);
  *param_7 = (int)((*(longlong *)(lVar1 + 0xa48) - *(longlong *)(lVar1 + 0xa40)) / 0x50);
  *param_8 = *(undefined4 *)(lVar1 + 0x3b0);
  *param_9 = *(undefined4 *)(lVar1 + 0x3c0);
  *param_10 = *(undefined4 *)(lVar1 + 0x3a0);
  uVar4 = FUN_1804bba40(0x180c95de0,param_1,param_2,in_XMM2_Da,0x3f800000);
  *param_11 = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060c100(void)
void FUN_18060c100(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *in_R9;
  
  uVar1 = func_0x0001804bb9d0();
  puVar2 = (undefined8 *)0x180c95e98;
  puVar3 = _DAT_180c95ea8;
  if (_DAT_180c95ea8 != (undefined8 *)0x0) {
    do {
      if (*(uint *)(puVar3 + 4) < uVar1) {
        puVar3 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar3[1];
      }
    } while (puVar3 != (undefined8 *)0x0);
    if ((puVar2 != (undefined8 *)0x180c95e98) && (*(uint *)(puVar2 + 4) <= uVar1))
    goto LAB_18060c14b;
  }
  puVar2 = (undefined8 *)0x180c95e98;
LAB_18060c14b:
  *in_R9 = *(undefined4 *)(puVar2[5] + 0x3a4);
  return;
}





// 函数: void FUN_18060c160(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)
void FUN_18060c160(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  FUN_1804bd560(0x180c95de0,param_1,param_4);
  puVar9 = (undefined8 *)0x180c95e98;
  uVar4 = func_0x0001804bb950(param_1);
  puVar3 = (undefined8 *)puVar9[2];
  puVar5 = puVar9;
  while (puVar2 = puVar3, puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (undefined8 *)*puVar2;
    }
    else {
      puVar3 = (undefined8 *)puVar2[1];
      puVar5 = puVar2;
    }
  }
  if ((puVar5 == puVar9) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (undefined8 *)FUN_1804c0610(puVar9,&stack0x00000008);
    puVar5 = (undefined8 *)*puVar5;
  }
  lVar1 = puVar5[5];
  iVar6 = 0;
  if (0 < *(int *)(lVar1 + 0x298)) {
    puVar8 = (undefined4 *)(param_1 + 0x3c);
    lVar7 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar1 + 0x290) + 0x50 + lVar7) != '\0') {
        if (param_2 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        *puVar8 = uVar10;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (iVar6 < *(int *)(lVar1 + 0x298));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



