#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part190.c - 1 个函数

// 函数: void FUN_18077a0c5(void)
void FUN_18077a0c5(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18077a0e0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  uint auStackX_10 [2];
  
  iVar1 = *(int *)(param_1 + 0x448);
  iVar6 = 0;
  uVar2 = *(uint *)(param_1 + 0x444);
  if (0 < param_2) {
    plVar5 = (longlong *)(param_1 + 0x228);
    do {
      if (*plVar5 == 0) {
        lVar3 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x10010,&UNK_180959d10,0x1c8,0
                             );
        *plVar5 = lVar3;
        if (lVar3 == 0) {
          return 0x26;
        }
        plVar5[0x22] = lVar3 + 0xfU & 0xfffffffffffffff0;
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar6 < param_2);
  }
  if ((param_2 != iVar1) || (param_3 != uVar2)) {
    auStackX_10[0] = 0;
    func_0x000180746360(*(undefined8 *)(param_1 + 0xa8),auStackX_10,0);
    uVar4 = param_3;
    if (param_3 < auStackX_10[0]) {
      uVar4 = auStackX_10[0];
    }
    auStackX_10[0] = uVar4;
    if (*(longlong *)(param_1 + 0x328) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x328),
                    &UNK_180959d10,0x1d9,1);
    }
    lVar3 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),uVar4 * param_2 * 4 + 0x10,
                          &UNK_180959d10,0x1db,0);
    *(longlong *)(param_1 + 0x328) = lVar3;
    if (lVar3 == 0) {
      return 0x26;
    }
    *(undefined4 *)(param_1 + 0x440) = 0;
    *(int *)(param_1 + 0x448) = param_2;
    *(ulonglong *)(param_1 + 0x438) = lVar3 + 0xfU & 0xfffffffffffffff0;
    *(uint *)(param_1 + 0x444) = auStackX_10[0];
    if (param_3 != uVar2) {
      if (*(longlong *)(param_1 + 0x220) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x220),
                      &UNK_180959d10,0x1eb,1);
      }
      lVar3 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_3 * 8 + 0x10,
                            &UNK_180959d10,0x1ed,0);
      *(longlong *)(param_1 + 0x220) = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      *(ulonglong *)(param_1 + 0x218) = lVar3 + 0xfU & 0xfffffffffffffff0;
    }
  }
  return 0;
}



undefined8 FUN_18077a310(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  uVar5 = 0;
  puVar4 = (undefined4 *)(lVar1 + 0x264);
  uVar7 = uVar5;
  do {
    uVar8 = cosf((float)(int)uVar7 * 0.0001917476);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    *puVar4 = uVar8;
    puVar4 = puVar4 + 1;
  } while ((int)uVar6 < 0x2000);
  if ((undefined4 *)(lVar1 + 0x25c) != (undefined4 *)0x0) {
    *(undefined4 *)(lVar1 + 0x25c) = *(undefined4 *)(*(longlong *)(lVar1 + 0xa8) + 0x6d0);
  }
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  *(undefined4 *)(lVar1 + 0x260) = 0;
  *(undefined8 *)(lVar1 + 0x238) = 0;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(lVar2 + 0x60)) {
    do {
      uVar3 = func_0x000180762a70(lVar1,uVar7,
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(lVar2 + 0x68) + uVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(lVar2 + 0x60));
  }
  FUN_18077b040(lVar1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18077a410(longlong *param_1)

{
  if (*(longlong *)(*param_1 + 0x230) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(*param_1 + 0x230),
                  &UNK_180959e90,0x97,1);
  }
  return 0;
}



undefined8 FUN_18077a4d0(longlong *param_1,int param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined *puVar2;
  float fVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(lVar1 + 0x8268);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x8268);
    puVar2 = &UNK_1809596a4;
  }
  else if (param_2 == 1) {
    *param_3 = *(undefined4 *)(lVar1 + 0x8264);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x8264);
    puVar2 = &UNK_180958d90;
  }
  else {
    if ((param_2 != 2) || (*param_3 = *(undefined4 *)(lVar1 + 0x826c), param_4 == 0)) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x826c);
    puVar2 = &UNK_180958d90;
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,puVar2,(double)fVar3);
}





