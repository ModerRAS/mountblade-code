#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part179.c - 3 个函数

// 函数: void FUN_180161eb0(longlong param_1,longlong param_2)
void FUN_180161eb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(longlong *)(param_2 + 0x48) = param_1;
  plVar4 = *(longlong **)(param_1 + 0x30);
  plVar1 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  lVar3 = (longlong)plVar4 - (longlong)plVar2 >> 3;
  if (plVar4 < *(longlong **)(param_1 + 0x38)) {
    *(longlong **)(param_1 + 0x30) = plVar4 + 1;
    *plVar4 = param_2;
    return;
  }
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 == 0) goto LAB_180161f28;
  }
  plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,*(undefined1 *)(param_1 + 0x40));
  plVar2 = *(longlong **)(param_1 + 0x28);
  plVar4 = *(longlong **)(param_1 + 0x30);
LAB_180161f28:
  if (plVar2 != plVar4) {
                    // WARNING: Subroutine does not return
    memmove(plVar1,plVar2,(longlong)plVar4 - (longlong)plVar2);
  }
  *plVar1 = param_2;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    *(longlong **)(param_1 + 0x38) = plVar1 + lVar3;
    *(longlong **)(param_1 + 0x30) = plVar1 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180161f80(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined *puStack_58;
  undefined1 *puStack_50;
  uint uStack_48;
  ulonglong uStack_40;
  ulonglong uVar7;
  
  uVar14 = 0xfffffffffffffffe;
  uVar11 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 3;
  uVar13 = 1;
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar12 = uVar11;
  if (*(longlong *)(param_1 + 0x30) - lVar6 >> 3 != 0) {
    do {
      uVar7 = 0;
      lVar6 = *(longlong *)(lVar6 + uVar11);
      puStack_58 = &UNK_180a3c3e0;
      uStack_40 = 0;
      puStack_50 = (undefined1 *)0x0;
      uStack_48 = 0;
      FUN_1806277c0(&puStack_58,*(undefined4 *)(lVar6 + 0x10));
      if (*(int *)(lVar6 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_50,*(undefined8 *)(lVar6 + 8),*(int *)(lVar6 + 0x10) + 1);
      }
      if (*(longlong *)(lVar6 + 8) != 0) {
        uStack_48 = 0;
        if (puStack_50 != (undefined1 *)0x0) {
          *puStack_50 = 0;
        }
        uStack_40 = uStack_40 & 0xffffffff;
      }
      uVar10 = uVar7;
      if (uStack_48 != 0) {
        do {
          if ((byte)(puStack_50[uVar10] + 0xbf) < 0x1a) {
            puStack_50[uVar10] = puStack_50[uVar10] + ' ';
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
          uVar10 = uVar10 + 1;
        } while (uVar5 < uStack_48);
      }
      puVar8 = &DAT_18098bc73;
      if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_3 + 8);
      }
      puVar4 = &DAT_18098bc73;
      if (puStack_50 != (undefined1 *)0x0) {
        puVar4 = puStack_50;
      }
      lVar2 = strstr(puVar4,puVar8,uVar10,puStack_50,uVar13,uVar14);
      if (lVar2 != 0) {
        plVar9 = (longlong *)param_2[1];
        if (plVar9 < (longlong *)param_2[2]) {
          param_2[1] = (longlong)(plVar9 + 1);
          *plVar9 = lVar6;
        }
        else {
          lVar2 = (longlong)plVar9 - *param_2 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180162130:
            plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_2[3]);
            plVar9 = (longlong *)param_2[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_180162130;
            plVar3 = (longlong *)0x0;
          }
          plVar1 = (longlong *)*param_2;
          if (plVar1 != plVar9) {
                    // WARNING: Subroutine does not return
            memmove(plVar3,plVar1,(longlong)plVar9 - (longlong)plVar1);
          }
          *plVar3 = lVar6;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = (longlong)plVar3;
          param_2[1] = (longlong)(plVar3 + 1);
          param_2[2] = (longlong)(plVar3 + lVar2);
        }
      }
      puStack_58 = &UNK_180a3c3e0;
      if (puStack_50 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar5 = (int)uVar12 + 1;
      uVar11 = uVar11 + 8;
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar12 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar6 >> 3));
  }
  return param_2;
}





// 函数: void FUN_180162220(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)
void FUN_180162220(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined *puStack_80;
  longlong lStack_78;
  uint uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uVar4 = 0;
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar5 = *(uint *)(param_3 + 2);
    uVar3 = (ulonglong)uVar5;
    if (param_3[1] != 0) {
      FUN_1806277c0(&puStack_80,uVar3);
    }
    if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_78,param_3[1],uVar3);
    }
    if (lStack_78 != 0) {
      *(undefined1 *)(uVar3 + lStack_78) = 0;
    }
    uStack_68 = CONCAT44(*(undefined4 *)((longlong)param_3 + 0x1c),(undefined4)uStack_68);
    uStack_70 = 0;
LAB_18016236a:
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_180162395;
  }
  else {
    lVar2 = FUN_180627ce0(param_3,&puStack_60,param_1,param_4,0xfffffffffffffffe);
    if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_70 = *(uint *)(lVar2 + 0x10);
    lStack_78 = *(longlong *)(lVar2 + 8);
    uStack_68 = *(ulonglong *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (undefined1 *)0x0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    puStack_60 = &UNK_18098bcb0;
    if (*(int *)(param_1 + 0x20) == 0) {
      FUN_1806277c0(&puStack_80,uStack_70 + 1);
      *(undefined1 *)((ulonglong)uStack_70 + lStack_78) = 0x2e;
      *(undefined1 *)((ulonglong)(uStack_70 + 1) + lStack_78) = 0;
      uStack_70 = uStack_70 + 1;
      goto LAB_18016236a;
    }
  }
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
    FUN_180627ae0();
  }
  else {
    FUN_180059820(param_2,&puStack_80);
  }
LAB_180162395:
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = uVar4;
  if (*(longlong *)(param_1 + 0x30) - lVar2 >> 3 != 0) {
    do {
      uVar1 = *(undefined8 *)(uVar4 + lVar2);
      puStack_60 = &UNK_180a3c3e0;
      uStack_48 = 0;
      puStack_58 = (undefined1 *)0x0;
      uStack_50 = 0;
      FUN_1806277c0(&puStack_60,uStack_70);
      if (uStack_70 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_58,lStack_78,uStack_70 + 1);
      }
      if (lStack_78 != 0) {
        uStack_50 = 0;
        if (puStack_58 != (undefined1 *)0x0) {
          *puStack_58 = 0;
        }
        uStack_48 = uStack_48 & 0xffffffff;
      }
      FUN_180162220(uVar1,param_2,&puStack_60);
      uVar5 = (int)uVar3 + 1;
      uVar4 = uVar4 + 8;
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar3 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar2 >> 3));
  }
  puStack_80 = &UNK_180a3c3e0;
  if (lStack_78 == 0) {
    lStack_78 = 0;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    puStack_80 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] == 0) {
      param_3[1] = 0;
      *(undefined4 *)(param_3 + 3) = 0;
      *param_3 = &UNK_18098bcb0;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 *
FUN_1801624e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  longlong lStack_30;
  undefined4 uStack_20;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
    uVar2 = FUN_1801624e0(lVar1,&puStack_38,param_3,param_4,1,0xfffffffffffffffe);
    FUN_180628320(param_2,uVar2);
    puStack_38 = &UNK_180a3c3e0;
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_30 = 0;
    uStack_20 = 0;
    puStack_38 = &UNK_18098bcb0;
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + 1);
    *(undefined1 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
    *(undefined1 *)((ulonglong)(*(int *)(param_2 + 2) + 1) + param_2[1]) = 0;
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + *(int *)(param_1 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(undefined8 *)(param_1 + 8),
           (longlong)(*(int *)(param_1 + 0x10) + 1));
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180162600(void)
void FUN_180162600(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puStack_1e8;
  undefined4 *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_48;
  
  puVar2 = _DAT_180c868f8;
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
  puStack_1e8 = &UNK_180a3c3e0;
  uStack_1d0 = 0;
  puStack_1e0 = (undefined4 *)0x0;
  uStack_1d8 = 0;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_1e0 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar3);
  *puVar4 = 0x49564e49;
  puVar4[1] = 0x4c424953;
  puVar4[2] = 0x525f5f45;
  puVar4[3] = 0x5f544f4f;
  puVar4[4] = 0x4554495f;
  *(undefined2 *)(puVar4 + 5) = 0x4d;
  uStack_1d8 = 0x15;
  uVar1 = FUN_1801614d0(uVar1,&puStack_1e8);
  *puVar2 = uVar1;
  puStack_1e8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



undefined8 *
FUN_180165950(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_18004e7a0();
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,5,param_3,param_4,uVar2,uVar3);
  puVar1 = (undefined4 *)param_2[1];
  *puVar1 = 0x656e6f44;
  *(undefined2 *)(puVar1 + 1) = 0x2e;
  *(undefined4 *)(param_2 + 2) = 5;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



