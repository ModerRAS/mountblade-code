#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part169.c - 2 个函数

// 函数: void FUN_1801538d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801538d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18005b960(param_1 + 0x1ea);
  FUN_18005b7c0(param_1 + 0x1dc);
  FUN_18005b7c0(param_1 + 0x1ce);
  FUN_18005b7c0(param_1 + 0x1c0);
  FUN_18005b7c0(param_1 + 0x1b2);
  FUN_18005b7c0(param_1 + 0x1a4);
  FUN_18005b7c0(param_1 + 0x196);
  FUN_18005b7c0(param_1 + 0x188);
  FUN_18005b7c0(param_1 + 0x17a);
  FUN_18005b7c0(param_1 + 0x16c);
  FUN_18005b7c0(param_1 + 0x15e);
  FUN_18005b7c0(param_1 + 0x150);
  FUN_18005b7c0(param_1 + 0x142);
  FUN_18005b7c0(param_1 + 0x134);
  FUN_18005b7c0(param_1 + 0x126);
  FUN_18005b7c0(param_1 + 0x118);
  FUN_18005b7c0(param_1 + 0x10a);
  FUN_18005b7c0(param_1 + 0xfc);
  FUN_18005b7c0(param_1 + 0xee);
  FUN_18005b7c0(param_1 + 0xe0);
  FUN_18005b7c0(param_1 + 0xd2);
  FUN_18005b7c0(param_1 + 0xc4);
  FUN_18005b7c0(param_1 + 0xb6);
  FUN_18005b7c0(param_1 + 0xa8);
  FUN_18005b7c0(param_1 + 0x9a);
  FUN_18005b7c0(param_1 + 0x8c);
  FUN_18005b7c0(param_1 + 0x7e);
  FUN_18005b7c0(param_1 + 0x70);
  FUN_18005b7c0(param_1 + 0x62);
  FUN_18005b7c0(param_1 + 0x54);
  FUN_18005b7c0(param_1 + 0x46);
  FUN_18005b7c0(param_1 + 0x38);
  FUN_18005b7c0(param_1 + 0x2a);
  FUN_18005b7c0(param_1 + 0x1c);
  *param_1 = &UNK_180a02968;
  param_1[0x18] = &UNK_180a3c3e0;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &UNK_18098bcb0;
  FUN_18005d260(param_1 + 0x12,param_1[0x14],param_3,param_4,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180153ab0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint auStackX_10 [2];
  
  if ((*(int *)(param_2 + 0x10) == 0x15) &&
     (iVar3 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a05df0), iVar3 == 0)) {
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_3 + 8);
    }
    auStackX_10[0] = atoi(puVar4);
    lVar1 = _DAT_180c86908;
    if ((*(longlong *)(_DAT_180c86908 + 0x530) != 0) &&
       (cVar2 = (**(code **)(_DAT_180c86908 + 0x538))(auStackX_10), cVar2 == '\0')) {
      if (DAT_180c82860 == '\0') {
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar1 + 0x4e0) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar1 + 0x4e0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar4);
      }
      *(undefined4 *)(lVar1 + 0x4d0) = *(undefined4 *)(lVar1 + 0x518);
      return 1;
    }
    *(uint *)(lVar1 + 0x4d0) = auStackX_10[0];
    return 1;
  }
  if ((*(int *)(param_2 + 0x10) == 0x12) &&
     (iVar3 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a073d8), iVar3 == 0)) {
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_3 + 8);
    }
    iVar3 = atoi(puVar4);
    auStackX_10[0] = (uint)(iVar3 != 0);
    if ((*(longlong *)(param_1 + 0xa00) != 0) &&
       (cVar2 = (**(code **)(param_1 + 0xa08))(auStackX_10), cVar2 == '\0')) {
      if (DAT_180c82860 == '\0') {
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x9b0) != (undefined *)0x0) {
          puVar4 = *(undefined **)(param_1 + 0x9b0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar4);
      }
      *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_1 + 0x9e8);
      return 0;
    }
    *(uint *)(param_1 + 0x9a0) = auStackX_10[0];
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180153c60(longlong param_1)
void FUN_180153c60(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0xbd0);
  if (*(int *)(param_1 + 0xbd0) < 1) {
    iVar1 = 1;
  }
  FUN_18010d670(param_1,iVar1);
  puStack_50 = &UNK_18098bc80;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x1b;
  strcpy_s(auStack_38,0x20,&UNK_180a073b8);
  cVar2 = FUN_180051f00(_DAT_180c86870,&puStack_50);
  puStack_50 = &UNK_18098bcb0;
  if (cVar2 != '\0') {
    FUN_18010d670(param_1,10);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}





