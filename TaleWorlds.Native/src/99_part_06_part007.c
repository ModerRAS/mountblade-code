#include "TaleWorlds.Native.Split.h"

// 99_part_06_part007.c - 8 个函数

// 函数: void FUN_1803a89c0(longlong param_1)
void FUN_1803a89c0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1803a89f0();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
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
  return;
}






// 函数: void FUN_1803a89f0(longlong param_1)
void FUN_1803a89f0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        FUN_1803a8d20(lVar3 + 0x10);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1803a8a90(longlong param_1,undefined8 *param_2,undefined8 param_3,int *param_4,ulonglong param_5
             )

{
  undefined8 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 8) + (param_5 % (ulonglong)*(uint *)(param_1 + 0x10)) * 8);
  piVar2 = (int *)*puVar1;
  if (piVar2 != (int *)0x0) {
    do {
      if (((*param_4 == *piVar2) && (param_4[1] == piVar2[1])) && (param_4[2] == piVar2[2])) {
        *param_2 = piVar2;
        param_2[1] = puVar1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar2 = *(int **)(piVar2 + 0x18);
    } while (piVar2 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),1);
  puVar1 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x68,*(undefined1 *)(param_1 + 0x2c));
  *puVar1 = *(undefined8 *)param_4;
  *(int *)(puVar1 + 1) = param_4[2];
                    // WARNING: Subroutine does not return
  memset(puVar1 + 2,0,0x50);
}






// 函数: void FUN_1803a8d00(longlong param_1)
void FUN_1803a8d00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}






// 函数: void FUN_1803a8d20(longlong *param_1)
void FUN_1803a8d20(longlong *param_1)

{
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001803a8eaa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1803a8d80(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plStackX_10;
  uint auStack_68 [2];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined *puStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  undefined8 uStack_30;
  
  uVar8 = 0;
  puVar1 = (undefined8 *)(param_1 + 0xe40);
  puVar5 = puVar1;
  puVar6 = *(undefined8 **)(param_1 + 0xe50);
  if (*(undefined8 **)(param_1 + 0xe50) == (undefined8 *)0x0) {
LAB_1803a8de7:
    puVar5 = puVar1;
  }
  else {
    do {
      if (*(int *)(puVar6 + 4) < (int)param_3) {
        puVar7 = (undefined8 *)*puVar6;
      }
      else {
        puVar7 = (undefined8 *)puVar6[1];
        puVar5 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    if ((puVar5 == puVar1) || ((int)param_3 < *(int *)(puVar5 + 4))) goto LAB_1803a8de7;
  }
  if (puVar5 != puVar1) {
    return puVar5[5];
  }
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  plStackX_10 = param_2;
  puStack_40 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puStack_40 = 0;
  uVar3 = FUN_18064e990(puStack_40);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
  *puStack_40 = 0x70616d5f6e69616d;
  *(undefined1 *)(puStack_40 + 1) = 0;
  uStack_38 = 8;
  if (puStack_40 == (undefined8 *)0x0) {
    puStack_40 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x14,0x13);
    *(undefined1 *)puStack_40 = 0;
  }
  else {
    if (0x13 < uVar3) goto LAB_1803a8ed3;
    puStack_40 = (undefined8 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_40,0x14,0x10,0x13);
  }
  uVar4 = FUN_18064e990(puStack_40);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar4);
LAB_1803a8ed3:
  *(undefined8 *)((ulonglong)uStack_38 + (longlong)puStack_40) = 0x616d656275635f5f;
  *(undefined4 *)((undefined8 *)((ulonglong)uStack_38 + (longlong)puStack_40) + 1) = 0x5f5f70;
  uStack_38 = 0x13;
  FUN_180628380(&puStack_48,param_3);
  uVar9 = uVar8;
  if (uStack_38 != 0) {
    do {
      if ((byte)(*(char *)((longlong)puStack_40 + uVar9) + 0xbfU) < 0x1a) {
        *(char *)((longlong)puStack_40 + uVar9) = *(char *)((longlong)puStack_40 + uVar9) + ' ';
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar9 + 1;
    } while (uVar3 < uStack_38);
  }
  puVar5 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStackX_10,&puStack_48,0);
  uVar2 = *puVar5;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  auStack_68[0] = param_3;
  uStack_60 = uVar2;
  FUN_1801e8ce0(puVar1,auStack_58,auStack_68);
  puStack_48 = &UNK_180a3c3e0;
  if (puStack_40 == (undefined8 *)0x0) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001803a90ea)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1803a8fc0(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plStackX_10;
  uint auStack_68 [2];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined *puStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  undefined8 uStack_30;
  
  uVar8 = 0;
  puVar1 = (undefined8 *)(param_1 + 0xe70);
  puVar7 = puVar1;
  puVar5 = *(undefined8 **)(param_1 + 0xe80);
  if (*(undefined8 **)(param_1 + 0xe80) == (undefined8 *)0x0) {
LAB_1803a9027:
    puVar7 = puVar1;
  }
  else {
    do {
      if (*(int *)(puVar5 + 4) < (int)param_3) {
        puVar6 = (undefined8 *)*puVar5;
      }
      else {
        puVar6 = (undefined8 *)puVar5[1];
        puVar7 = puVar5;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
    if ((puVar7 == puVar1) || ((int)param_3 < *(int *)(puVar7 + 4))) goto LAB_1803a9027;
  }
  if (puVar7 != puVar1) {
    return puVar7[5];
  }
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  plStackX_10 = param_2;
  puStack_40 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puStack_40 = 0;
  uVar3 = FUN_18064e990(puStack_40);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
  *puStack_40 = 0x70616d5f6e69616d;
  *(undefined1 *)(puStack_40 + 1) = 0;
  uStack_38 = 8;
  if (puStack_40 == (undefined8 *)0x0) {
    puStack_40 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
    *(undefined1 *)puStack_40 = 0;
  }
  else {
    if (0x16 < uVar3) goto LAB_1803a9113;
    puStack_40 = (undefined8 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_40,0x17,0x10,0x13);
  }
  uVar4 = FUN_18064e990(puStack_40);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar4);
LAB_1803a9113:
  puVar7 = (undefined8 *)((ulonglong)uStack_38 + (longlong)puStack_40);
  *puVar7 = 0x6574746163735f5f;
  *(undefined4 *)(puVar7 + 1) = 0x70616d72;
  *(undefined2 *)((longlong)puVar7 + 0xc) = 0x5f5f;
  *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
  uStack_38 = 0x16;
  FUN_180628380(&puStack_48,param_3);
  uVar9 = uVar8;
  if (uStack_38 != 0) {
    do {
      if ((byte)(*(char *)((longlong)puStack_40 + uVar9) + 0xbfU) < 0x1a) {
        *(char *)((longlong)puStack_40 + uVar9) = *(char *)((longlong)puStack_40 + uVar9) + ' ';
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar9 + 1;
    } while (uVar3 < uStack_38);
  }
  puVar7 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&plStackX_10,&puStack_48,0);
  uVar2 = *puVar7;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  auStack_68[0] = param_3;
  uStack_60 = uVar2;
  FUN_1801e8ce0(puVar1,auStack_58,auStack_68);
  puStack_48 = &UNK_180a3c3e0;
  if (puStack_40 == (undefined8 *)0x0) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a9220(longlong param_1)
void FUN_1803a9220(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined1 *puStack_88;
  undefined4 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 *apuStack_50 [2];
  code *pcStack_40;
  code *pcStack_38;
  
  lVar1 = *(longlong *)(param_1 + 0xe20);
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  FUN_1806277c0(&puStack_90,_DAT_180bf9280);
  if (0 < _DAT_180bf9280) {
    puVar5 = &DAT_18098bc73;
    if (_DAT_180bf9278 != (undefined *)0x0) {
      puVar5 = _DAT_180bf9278;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_88,puVar5,(longlong)(_DAT_180bf9280 + 1));
  }
  if (_DAT_180bf9278 != (undefined *)0x0) {
    uStack_80 = 0;
    if (puStack_88 != (undefined1 *)0x0) {
      *puStack_88 = 0;
    }
  }
  uVar2 = FUN_18041adc0(lVar1 + 8,&puStack_90);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (undefined1 *)0x0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  puStack_90 = &UNK_18098bcb0;
  lVar1 = *(longlong *)(param_1 + 0xe20);
  uStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  uStack_68 = (undefined1 *)0x0;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  FUN_1806277c0(&uStack_70,_DAT_180bfa120);
  if (0 < _DAT_180bfa120) {
    puVar5 = &DAT_18098bc73;
    if (_DAT_180bfa118 != (undefined *)0x0) {
      puVar5 = _DAT_180bfa118;
    }
                    // WARNING: Subroutine does not return
    memcpy(uStack_68,puVar5,(longlong)(_DAT_180bfa120 + 1));
  }
  if (_DAT_180bfa118 != (undefined *)0x0) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    if (uStack_68 != (undefined1 *)0x0) {
      *uStack_68 = 0;
    }
  }
  uVar3 = FUN_18041adc0(lVar1 + 8,&uStack_70);
  uStack_70 = &UNK_180a3c3e0;
  if (uStack_68 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_68 = (undefined1 *)0x0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  uStack_70 = &UNK_18098bcb0;
  lVar1 = *(longlong *)(param_1 + 0xe20);
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  FUN_1806277c0(&puStack_90,_DAT_180bf9640);
  if (0 < _DAT_180bf9640) {
    puVar5 = &DAT_18098bc73;
    if (_DAT_180bf9638 != (undefined *)0x0) {
      puVar5 = _DAT_180bf9638;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_88,puVar5,(longlong)(_DAT_180bf9640 + 1));
  }
  if (_DAT_180bf9638 != (undefined *)0x0) {
    uStack_80 = 0;
    if (puStack_88 != (undefined1 *)0x0) {
      *puStack_88 = 0;
    }
  }
  uVar4 = FUN_18041adc0(lVar1 + 8,&puStack_90);
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (undefined1 *)0x0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  puStack_90 = &UNK_18098bcb0;
  pcStack_40 = FUN_1803aee20;
  pcStack_38 = FUN_1803aed40;
  uStack_70 = (undefined *)param_1;
  uStack_68 = (undefined1 *)uVar2;
  uStack_60 = uVar3;
  uStack_58 = uVar4;
  apuStack_50[0] = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
  *apuStack_50[0] = (undefined4)uStack_70;
  apuStack_50[0][1] = uStack_70._4_4_;
  apuStack_50[0][2] = (undefined4)uStack_68;
  apuStack_50[0][3] = uStack_68._4_4_;
  apuStack_50[0][4] = (undefined4)uStack_60;
  apuStack_50[0][5] = uStack_60._4_4_;
  apuStack_50[0][6] = (undefined4)uStack_58;
  apuStack_50[0][7] = uStack_58._4_4_;
  FUN_18015b810((undefined4)uStack_70,0,3,1,0xffffffffffffffff,apuStack_50);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a9530(undefined8 *param_1)
void FUN_1803a9530(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_1a8 [32];
  longlong *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined4 uStack_148;
  undefined auStack_140 [72];
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined auStack_e0 [72];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_168 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  *param_1 = &UNK_180a23138;
  puStack_170 = param_1;
  puStack_160 = param_1;
  FUN_1802705c0(param_1 + 1);
  FUN_1802705c0(param_1 + 0x6d);
  FUN_1802705c0(param_1 + 0xd9);
  FUN_1802705c0();
  puVar2 = param_1 + 0x1b1;
  param_1[0x1b4] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 3;
  *puVar2 = puVar2;
  param_1[0x1b2] = puVar2;
  param_1[0x1b3] = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  param_1[0x1b5] = 0;
  puVar2 = param_1 + 0x1b7;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 3;
  *puVar2 = puVar2;
  param_1[0x1b8] = puVar2;
  param_1[0x1b9] = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  param_1[0x1bb] = 0;
  puStack_178 = param_1 + 0x1bd;
  param_1[0x1c0] = 0;
  *(undefined4 *)(param_1 + 0x1c2) = 3;
  *puStack_178 = puStack_178;
  param_1[0x1be] = puStack_178;
  param_1[0x1bf] = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  puVar2 = param_1 + 0x1c8;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cd) = 3;
  *puVar2 = puVar2;
  param_1[0x1c9] = puVar2;
  param_1[0x1ca] = 0;
  *(undefined1 *)(param_1 + 0x1cb) = 0;
  param_1[0x1cc] = 0;
  puStack_180 = param_1 + 0x1ce;
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 0x1d3) = 3;
  *puStack_180 = puStack_180;
  param_1[0x1cf] = puStack_180;
  param_1[0x1d0] = 0;
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  param_1[0x1d2] = 0;
  *(undefined1 *)(param_1 + 0x1c3) = 1;
  param_1[0x1c4] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe1c) = 0;
  plStack_188 = (longlong *)param_1[0x1c5];
  param_1[0x1c5] = 0;
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  plStack_188 = (longlong *)param_1[0x1c6];
  param_1[0x1c6] = 0;
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
  }
  plStack_188 = (longlong *)param_1[0x1c7];
  param_1[0x1c7] = 0;
  puVar2 = _DAT_180bfa2e8;
  puVar3 = _DAT_180bfa2f0;
  puVar7 = (undefined8 *)_DAT_180c86930;
  if (plStack_188 != (longlong *)0x0) {
    (**(code **)(*plStack_188 + 0x38))();
    puVar2 = _DAT_180bfa2e8;
    puVar3 = _DAT_180bfa2f0;
    puVar7 = (undefined8 *)_DAT_180c86930;
  }
  for (; puVar6 = _DAT_180bfa2f0, _DAT_180c86930 = (longlong)puVar7, puVar2 != _DAT_180bfa2f0;
      puVar2 = puVar2 + 0xb) {
    _DAT_180bfa2f0 = puVar3;
    (**(code **)*puVar2)(puVar2,0);
    puVar3 = _DAT_180bfa2f0;
    puVar7 = (undefined8 *)_DAT_180c86930;
    _DAT_180bfa2f0 = puVar6;
  }
  plVar5 = *(longlong **)((longlong)puVar7 + 0xa0);
  _DAT_180bfa2f0 = _DAT_180bfa2e8;
  puStack_178 = puVar7;
  puVar2 = _DAT_180bfa308;
  puVar3 = _DAT_180bfa310;
  puVar6 = puVar7;
  plStack_188 = plVar5;
  if (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8)) {
    do {
      puVar2 = (undefined8 *)0x0;
      lVar8 = *plVar5;
      if ((*(uint *)(lVar8 + 0x328) & 0x4000000) != 0) {
        puStack_98 = &UNK_1809fcc58;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = *(undefined4 *)(lVar8 + 0x20);
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar8 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar8 + 0x18);
        }
        plStack_188 = plVar5;
        strcpy_s(auStack_80,0x40,puVar4);
        puVar3 = _DAT_180bfa2f0;
        if (_DAT_180bfa2f0 < _DAT_180bfa2f8) {
          _DAT_180bfa2f0 = _DAT_180bfa2f0 + 0xb;
          FUN_1800b8300(puVar3,&puStack_98);
        }
        else {
          lVar8 = ((longlong)_DAT_180bfa2f0 - (longlong)_DAT_180bfa2e8) / 0x58;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803a9859:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x58,DAT_180bfa300);
            puVar3 = _DAT_180bfa2e8;
            puVar6 = _DAT_180bfa2f0;
            puVar9 = puVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            puVar3 = _DAT_180bfa2e8;
            puVar6 = _DAT_180bfa2f0;
            puVar9 = puVar2;
            if (lVar8 != 0) goto LAB_1803a9859;
          }
          for (; puVar1 = _DAT_180bfa2f0, puVar3 != _DAT_180bfa2f0; puVar3 = puVar3 + 0xb) {
            _DAT_180bfa2f0 = puVar6;
            *puVar2 = &UNK_18098bcb0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *puVar2 = &UNK_1809fcc58;
            puVar2[1] = puVar2 + 3;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar4 = &DAT_18098bc73;
            if ((undefined *)puVar3[1] != (undefined *)0x0) {
              puVar4 = (undefined *)puVar3[1];
            }
            puStack_180 = puVar2;
            strcpy_s(puVar2[1],0x40,puVar4);
            puVar2 = puVar2 + 0xb;
            plVar5 = plStack_188;
            puVar7 = puStack_178;
            puVar6 = _DAT_180bfa2f0;
            _DAT_180bfa2f0 = puVar1;
          }
          _DAT_180bfa2f0 = puVar6;
          FUN_1800b8300(puVar2,&puStack_98);
          puVar6 = _DAT_180bfa2f0;
          for (puVar3 = _DAT_180bfa2e8; puVar3 != puVar6; puVar3 = puVar3 + 0xb) {
            (**(code **)*puVar3)(puVar3,0);
          }
          if (_DAT_180bfa2e8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(_DAT_180bfa2e8);
          }
          _DAT_180bfa2f8 = puVar9 + lVar8 * 0xb;
          _DAT_180bfa2e8 = puVar9;
          _DAT_180bfa2f0 = puVar2 + 0xb;
        }
        puStack_98 = &UNK_18098bcb0;
      }
      plVar5 = plVar5 + 1;
      puVar2 = _DAT_180bfa308;
      puVar3 = _DAT_180bfa310;
      puVar6 = (undefined8 *)_DAT_180c86930;
      plStack_188 = plVar5;
    } while (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8));
  }
  for (; puVar7 = _DAT_180bfa310, _DAT_180c86930 = (longlong)puVar6, puVar2 != _DAT_180bfa310;
      puVar2 = puVar2 + 0xb) {
    _DAT_180bfa310 = puVar3;
    (**(code **)*puVar2)(puVar2,0);
    puVar3 = _DAT_180bfa310;
    puVar6 = (undefined8 *)_DAT_180c86930;
    _DAT_180bfa310 = puVar7;
  }
  plVar5 = *(longlong **)((longlong)puVar6 + 0xa0);
  _DAT_180bfa310 = _DAT_180bfa308;
  puStack_178 = puVar6;
  puVar2 = _DAT_180bfa328;
  puVar3 = _DAT_180bfa330;
  puVar7 = puVar6;
  plStack_188 = plVar5;
  if (plVar5 != *(longlong **)((longlong)puVar6 + 0xa8)) {
    do {
      puVar2 = (undefined8 *)0x0;
      lVar8 = *plVar5;
      if ((*(uint *)(lVar8 + 0x328) & 0x100000) != 0) {
        puStack_158 = &UNK_1809fcc58;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = *(undefined4 *)(lVar8 + 0x20);
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar8 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar8 + 0x18);
        }
        plStack_188 = plVar5;
        strcpy_s(auStack_140,0x40,puVar4);
        puVar3 = _DAT_180bfa310;
        if (_DAT_180bfa310 < _DAT_180bfa318) {
          puStack_180 = _DAT_180bfa310;
          puVar2 = _DAT_180bfa310 + 0xb;
          *_DAT_180bfa310 = &UNK_18098bcb0;
          _DAT_180bfa310 = puVar2;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0;
          *puVar3 = &UNK_1809fcc58;
          puVar3[1] = puVar3 + 3;
          *(undefined4 *)(puVar3 + 2) = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
          *(undefined4 *)(puVar3 + 2) = uStack_148;
          puVar4 = &DAT_18098bc73;
          if (puStack_150 != (undefined *)0x0) {
            puVar4 = puStack_150;
          }
          strcpy_s(puVar3[1],0x40,puVar4);
        }
        else {
          lVar8 = ((longlong)_DAT_180bfa310 - (longlong)_DAT_180bfa308) / 0x58;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803a9b1b:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x58,DAT_180bfa320);
            puVar3 = _DAT_180bfa308;
            puVar7 = _DAT_180bfa310;
            puVar9 = puVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            puVar3 = _DAT_180bfa308;
            puVar7 = _DAT_180bfa310;
            puVar9 = puVar2;
            if (lVar8 != 0) goto LAB_1803a9b1b;
          }
          for (; puVar1 = _DAT_180bfa310, puStack_180 = puVar2, puVar3 != _DAT_180bfa310;
              puVar3 = puVar3 + 0xb) {
            _DAT_180bfa310 = puVar7;
            *puVar2 = &UNK_18098bcb0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *puVar2 = &UNK_1809fcc58;
            puVar2[1] = puVar2 + 3;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar4 = &DAT_18098bc73;
            if ((undefined *)puVar3[1] != (undefined *)0x0) {
              puVar4 = (undefined *)puVar3[1];
            }
            strcpy_s(puVar2[1],0x40,puVar4);
            puVar2 = puVar2 + 0xb;
            plVar5 = plStack_188;
            puVar6 = puStack_178;
            puVar7 = _DAT_180bfa310;
            _DAT_180bfa310 = puVar1;
          }
          _DAT_180bfa310 = puVar7;
          *puVar2 = &UNK_18098bcb0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *puVar2 = &UNK_1809fcc58;
          puVar2[1] = puVar2 + 3;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(undefined1 *)(puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = uStack_148;
          puVar4 = &DAT_18098bc73;
          if (puStack_150 != (undefined *)0x0) {
            puVar4 = puStack_150;
          }
          strcpy_s(puVar2[1],0x40,puVar4);
          puVar7 = _DAT_180bfa310;
          for (puVar3 = _DAT_180bfa308; puVar3 != puVar7; puVar3 = puVar3 + 0xb) {
            (**(code **)*puVar3)(puVar3,0);
          }
          if (_DAT_180bfa308 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(_DAT_180bfa308);
          }
          _DAT_180bfa318 = puVar9 + lVar8 * 0xb;
          _DAT_180bfa308 = puVar9;
          _DAT_180bfa310 = puVar2 + 0xb;
        }
        puStack_158 = &UNK_18098bcb0;
      }
      plVar5 = plVar5 + 1;
      puVar2 = _DAT_180bfa328;
      puVar3 = _DAT_180bfa330;
      puVar7 = (undefined8 *)_DAT_180c86930;
      plStack_188 = plVar5;
    } while (plVar5 != *(longlong **)((longlong)puVar6 + 0xa8));
  }
  for (; puVar6 = _DAT_180bfa330, _DAT_180c86930 = (longlong)puVar7, puVar2 != _DAT_180bfa330;
      puVar2 = puVar2 + 0xb) {
    _DAT_180bfa330 = puVar3;
    (**(code **)*puVar2)(puVar2,0);
    puVar3 = _DAT_180bfa330;
    puVar7 = (undefined8 *)_DAT_180c86930;
    _DAT_180bfa330 = puVar6;
  }
  plVar5 = *(longlong **)((longlong)puVar7 + 0xa0);
  _DAT_180bfa330 = _DAT_180bfa328;
  plStack_188 = plVar5;
  puStack_178 = puVar7;
  if (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8)) {
    do {
      puVar2 = (undefined8 *)0x0;
      lVar8 = *plVar5;
      if ((*(uint *)(lVar8 + 0x328) & 0x10000000) != 0) {
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = *(undefined4 *)(lVar8 + 0x20);
        puVar4 = &DAT_18098bc73;
        if (*(undefined **)(lVar8 + 0x18) != (undefined *)0x0) {
          puVar4 = *(undefined **)(lVar8 + 0x18);
        }
        plStack_188 = plVar5;
        strcpy_s(auStack_e0,0x40,puVar4);
        puVar3 = _DAT_180bfa330;
        if (_DAT_180bfa330 < _DAT_180bfa338) {
          puStack_180 = _DAT_180bfa330;
          puVar2 = _DAT_180bfa330 + 0xb;
          *_DAT_180bfa330 = &UNK_18098bcb0;
          _DAT_180bfa330 = puVar2;
          puVar3[1] = 0;
          *(undefined4 *)(puVar3 + 2) = 0;
          *puVar3 = &UNK_1809fcc58;
          puVar3[1] = puVar3 + 3;
          *(undefined4 *)(puVar3 + 2) = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
          *(undefined4 *)(puVar3 + 2) = uStack_e8;
          puVar4 = &DAT_18098bc73;
          if (puStack_f0 != (undefined *)0x0) {
            puVar4 = puStack_f0;
          }
          strcpy_s(puVar3[1],0x40,puVar4);
        }
        else {
          lVar8 = ((longlong)_DAT_180bfa330 - (longlong)_DAT_180bfa328) / 0x58;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803a9e08:
            puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x58,DAT_180bfa340);
            puVar3 = _DAT_180bfa328;
            puVar6 = _DAT_180bfa330;
            puVar9 = puVar2;
          }
          else {
            lVar8 = lVar8 * 2;
            puVar3 = _DAT_180bfa328;
            puVar6 = _DAT_180bfa330;
            puVar9 = puVar2;
            if (lVar8 != 0) goto LAB_1803a9e08;
          }
          for (; puVar1 = _DAT_180bfa330, puStack_180 = puVar2, puVar3 != _DAT_180bfa330;
              puVar3 = puVar3 + 0xb) {
            _DAT_180bfa330 = puVar6;
            *puVar2 = &UNK_18098bcb0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            *puVar2 = &UNK_1809fcc58;
            puVar2[1] = puVar2 + 3;
            *(undefined4 *)(puVar2 + 2) = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar4 = &DAT_18098bc73;
            if ((undefined *)puVar3[1] != (undefined *)0x0) {
              puVar4 = (undefined *)puVar3[1];
            }
            strcpy_s(puVar2[1],0x40,puVar4);
            puVar2 = puVar2 + 0xb;
            plVar5 = plStack_188;
            puVar7 = puStack_178;
            puVar6 = _DAT_180bfa330;
            _DAT_180bfa330 = puVar1;
          }
          _DAT_180bfa330 = puVar6;
          *puVar2 = &UNK_18098bcb0;
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *puVar2 = &UNK_1809fcc58;
          puVar2[1] = puVar2 + 3;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(undefined1 *)(puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = uStack_e8;
          puVar4 = &DAT_18098bc73;
          if (puStack_f0 != (undefined *)0x0) {
            puVar4 = puStack_f0;
          }
          strcpy_s(puVar2[1],0x40,puVar4);
          puVar6 = _DAT_180bfa330;
          for (puVar3 = _DAT_180bfa328; puVar3 != puVar6; puVar3 = puVar3 + 0xb) {
            (**(code **)*puVar3)(puVar3,0);
          }
          if (_DAT_180bfa328 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(_DAT_180bfa328);
          }
          _DAT_180bfa338 = puVar9 + lVar8 * 0xb;
          _DAT_180bfa328 = puVar9;
          _DAT_180bfa330 = puVar2 + 0xb;
        }
        puStack_f8 = &UNK_18098bcb0;
      }
      plVar5 = plVar5 + 1;
      plStack_188 = plVar5;
    } while (plVar5 != *(longlong **)((longlong)puVar7 + 0xa8));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1a8);
}



undefined8 FUN_1803a9fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1803aa090();
  if ((param_2 & 1) != 0) {
    free(param_1,0xea0);
  }
  return param_1;
}






// 函数: void FUN_1803aa000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803aa000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803aeb70(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1803aa030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803aa030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1803aeb70(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






