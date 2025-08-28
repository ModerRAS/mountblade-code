#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part197.c - 15 个函数

// 函数: void FUN_18017b28d(void)
void FUN_18017b28d(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,unaff_RDI << 6,(char)unaff_RBX[3]);
  }
  if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  lVar1 = unaff_RDI * 0x40 + lVar1;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  return;
}





// 函数: void FUN_18017b2ed(longlong param_1)
void FUN_18017b2ed(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 6;
  if (uVar3 < unaff_RDI) {
    lVar1 = uVar3 * 0x40 + unaff_RBP;
    if (unaff_RBP != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(longlong *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RBX + 8) = param_1;
  }
  return;
}





// 函数: void FUN_18017b36c(void)
void FUN_18017b36c(void)

{
  return;
}





// 函数: void FUN_18017b380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18017b380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18017b400(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18017b3a0(longlong *param_1)
void FUN_18017b3a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18017a9c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18017b400(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_18017b400(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_18017b400(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((longlong *)param_2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[4] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b480(longlong *param_1,longlong *param_2,longlong *param_3)
void FUN_18017b480(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = (longlong)param_3 - (longlong)param_2 >> 3;
  if ((ulonglong)(param_1[2] - *param_1 >> 3) < uVar7) {
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar7 * 8,(char)param_1[3]);
    }
    if (param_2 != param_3) {
      lVar6 = lVar2 - (longlong)param_2;
      do {
        plVar1 = (longlong *)*param_2;
        *(longlong **)(lVar6 + (longlong)param_2) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))();
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    plVar1 = (longlong *)param_1[1];
    plVar5 = (longlong *)*param_1;
    if (plVar5 != plVar1) {
      do {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
      plVar5 = (longlong *)*param_1;
    }
    if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar5);
    }
    lVar6 = lVar2 + uVar7 * 8;
    *param_1 = lVar2;
    param_1[2] = lVar6;
    param_1[1] = lVar6;
  }
  else {
    uVar3 = param_1[1] - *param_1 >> 3;
    if (uVar3 < uVar7) {
      FUN_18017b5e0(param_2,param_2 + uVar3);
      lVar2 = FUN_18017b680(param_2 + uVar3,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      plVar4 = (longlong *)FUN_18017b5e0(param_2,param_3);
      plVar1 = (longlong *)param_1[1];
      for (plVar5 = plVar4; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x38))();
        }
      }
      param_1[1] = (longlong)plVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b4bc(longlong param_1)
void FUN_18017b4bc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong *plVar3;
  longlong *unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar4;
  longlong unaff_R14;
  
  if (unaff_R14 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_R14 * 8,*(undefined1 *)(param_1 + 0x18));
  }
  if (unaff_RBX != unaff_RBP) {
    lVar4 = lVar2 - (longlong)unaff_RBX;
    do {
      plVar1 = (longlong *)*unaff_RBX;
      *(longlong **)(lVar4 + (longlong)unaff_RBX) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX != unaff_RBP);
  }
  plVar1 = (longlong *)unaff_RSI[1];
  plVar3 = (longlong *)*unaff_RSI;
  if (plVar3 != plVar1) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = (longlong *)*unaff_RSI;
  }
  if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar3);
  }
  lVar4 = lVar2 + unaff_R14 * 8;
  *unaff_RSI = lVar2;
  unaff_RSI[2] = lVar4;
  unaff_RSI[1] = lVar4;
  return;
}





// 函数: void FUN_18017b55d(longlong param_1,longlong param_2,longlong param_3)
void FUN_18017b55d(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  ulonglong unaff_R14;
  
  uVar2 = *(longlong *)(param_1 + 8) - param_3 >> 3;
  if (uVar2 < unaff_R14) {
    FUN_18017b5e0();
    uVar4 = FUN_18017b680(param_2 + uVar2 * 8);
    *(undefined8 *)(unaff_RSI + 8) = uVar4;
  }
  else {
    plVar3 = (longlong *)FUN_18017b5e0();
    plVar1 = *(longlong **)(unaff_RSI + 8);
    for (plVar5 = plVar3; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x38))();
      }
    }
    *(longlong **)(unaff_RSI + 8) = plVar3;
  }
  return;
}



longlong * FUN_18017b5e0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (0 < lVar3) {
    param_1 = param_1 - (longlong)param_3;
    do {
      plVar1 = *(longlong **)(param_1 + (longlong)param_3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (longlong *)*param_3;
      *param_3 = (longlong)plVar1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar3 = lVar3 + -1;
      param_3 = param_3 + 1;
    } while (0 < lVar3);
  }
  return param_3;
}



longlong * FUN_18017b680(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 != param_2);
  }
  return param_3;
}



longlong * FUN_18017b6e0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x10;
    do {
      puVar4 = (undefined8 *)*param_1;
      *puVar4 = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -0x10) = 0;
      puVar1 = puVar4 + 1;
      *puVar1 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = puVar6[-8];
      uVar5 = *puVar1;
      *puVar1 = *(undefined8 *)(puVar6 + -0xe);
      *(undefined8 *)(puVar6 + -0xe) = uVar5;
      uVar5 = puVar4[2];
      puVar4[2] = *(undefined8 *)(puVar6 + -0xc);
      *(undefined8 *)(puVar6 + -0xc) = uVar5;
      uVar5 = puVar4[3];
      puVar4[3] = *(undefined8 *)(puVar6 + -10);
      *(undefined8 *)(puVar6 + -10) = uVar5;
      uVar3 = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)(puVar4 + 4) = puVar6[-8];
      puVar6[-8] = uVar3;
      puVar1 = puVar4 + 5;
      *puVar1 = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(undefined8 *)(puVar6 + -6);
      *(undefined8 *)(puVar6 + -6) = uVar5;
      uVar5 = puVar4[6];
      puVar4[6] = *(undefined8 *)(puVar6 + -4);
      *(undefined8 *)(puVar6 + -4) = uVar5;
      uVar5 = puVar4[7];
      puVar4[7] = *(undefined8 *)(puVar6 + -2);
      *(undefined8 *)(puVar6 + -2) = uVar5;
      uVar3 = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(puVar4 + 8) = *puVar6;
      *puVar6 = uVar3;
      puVar1 = puVar4 + 9;
      *puVar1 = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(undefined4 *)(puVar4 + 0xc) = puVar6[8];
      uVar5 = *puVar1;
      *puVar1 = *(undefined8 *)(puVar6 + 2);
      *(undefined8 *)(puVar6 + 2) = uVar5;
      uVar5 = puVar4[10];
      puVar4[10] = *(undefined8 *)(puVar6 + 4);
      *(undefined8 *)(puVar6 + 4) = uVar5;
      uVar5 = puVar4[0xb];
      puVar4[0xb] = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(puVar6 + 6) = uVar5;
      uVar3 = *(undefined4 *)(puVar4 + 0xc);
      *(undefined4 *)(puVar4 + 0xc) = puVar6[8];
      puVar6[8] = uVar3;
      *param_1 = (longlong)(puVar4 + 0xd);
      puVar2 = puVar6 + 10;
      puVar6 = puVar6 + 0x1a;
    } while (puVar2 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b850(longlong param_1)
void FUN_18017b850(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined *puVar11;
  
  FUN_18010d9f0(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x8c0));
  FUN_18010da70(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x850));
  FUN_18010d970(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x930));
  FUN_18010d1f0(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0xf50));
  FUN_18010d070(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x10a0));
  FUN_18010d8f0(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0x9a0));
  FUN_18010d270(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0xee0));
  FUN_18010d170(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0xfc0));
  FUN_18010d870(_DAT_180c86920,*(undefined4 *)(_DAT_180c86920 + 0xa10));
  FUN_18010d0f0(_DAT_180c86920,*(undefined4 *)(_DAT_180c8a9c8 + 0xe00));
  plVar9 = _DAT_180c86938;
  FUN_18021fbb0(_DAT_180c86938);
  FUN_180220fe0(plVar9);
  FUN_18021f910(plVar9);
  if ((undefined *)*plVar9 == &UNK_180a02740) {
    FUN_1800ad2a0();
    FUN_1800acb60(plVar9);
    FUN_1800ac700(plVar9);
    FUN_1800ac530(plVar9);
    FUN_1801c93c0();
    FUN_1800ab6f0(plVar9);
    FUN_1800a3880(plVar9,*(undefined4 *)(_DAT_180c86920 + 0x1d50),
                  *(undefined4 *)(_DAT_180c86920 + 0x1dc0),0);
  }
  else {
    (**(code **)((undefined *)*plVar9 + 0xa8))(plVar9);
  }
  if ((undefined *)*plVar9 != &UNK_180a02740) {
    (**(code **)((undefined *)*plVar9 + 0x80))(plVar9);
  }
  FUN_18029c9d0(plVar9[0x39b]);
  FUN_18029ae20(plVar9[0x39b]);
  plVar10 = (longlong *)plVar9[0x39b];
  lVar4 = (**(code **)(*plVar9 + 0x118))(plVar9,0xffffffff);
  plVar8 = *(longlong **)(lVar4 + 0x1d8);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    if (*plVar8 != 0) {
      (**(code **)(*plVar10 + 0x70))(plVar10,*plVar8,1);
    }
  }
  plVar10[0x1077] = (longlong)plVar8;
  *(undefined8 *)(plVar9[0x39b] + 0x83f0) = 0;
  FUN_18029de40(plVar9[0x39b],1);
  FUN_18029c8a0(plVar9[0x39b],3,0xff0000ff,0x3f800000,0x8a,0);
  lVar4 = _DAT_180c86930;
  plVar9 = *(longlong **)(_DAT_180c86930 + 0x138);
  if (plVar9 != *(longlong **)(_DAT_180c86930 + 0x140)) {
    do {
      lVar1 = *plVar9;
      if ((*(longlong *)(lVar1 + 0x15b8) == 0) && (*(int *)(lVar1 + 0x16c0) != 0)) {
        lVar5 = FUN_1802aaef0(lVar4 + 0xac0,lVar1 + 0x16b0);
        if (lVar5 == 0) {
          uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x50,0x10,3);
          lVar5 = FUN_1800ba230(uVar6,lVar1 + 0x16b0);
          FUN_1802ab0c0(lVar4 + 0xac0,lVar5);
        }
        *(longlong *)(lVar1 + 0x15b8) = lVar5;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != *(longlong **)(lVar4 + 0x140));
  }
  FUN_1800b3cc0(lVar4);
  FUN_1800d7810();
  FUN_1800f08a0();
  FUN_1800c1a80();
  FUN_180092820();
  FUN_1800d7810();
  lVar4 = _DAT_180c86930;
  plVar9 = *(longlong **)(_DAT_180c86930 + 0x138);
  if (plVar9 != *(longlong **)(_DAT_180c86930 + 0x140)) {
    do {
      lVar1 = *plVar9;
      lVar5 = 7;
      plVar10 = (longlong *)(lVar1 + 0x1678);
      do {
        lVar2 = *plVar10;
        if ((lVar2 != 0) && (cVar3 = FUN_180240670(lVar1,lVar2), cVar3 == '\0')) {
          puVar11 = &DAT_18098bc73;
          if (*(undefined **)(lVar2 + 0x18) != (undefined *)0x0) {
            puVar11 = *(undefined **)(lVar2 + 0x18);
          }
          puVar7 = &DAT_18098bc73;
          if (*(undefined **)(lVar1 + 0x18) != (undefined *)0x0) {
            puVar7 = *(undefined **)(lVar1 + 0x18);
          }
          FUN_180626f80(&UNK_180a02ad0,puVar7,puVar11);
        }
        plVar10 = plVar10 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      plVar9 = plVar9 + 1;
    } while (plVar9 != *(longlong **)(lVar4 + 0x140));
  }
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017bc20(undefined8 param_1)
void FUN_18017bc20(undefined8 param_1)

{
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined **appuStack_e8 [2];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [72];
  undefined *apuStack_78 [11];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xc;
  strcpy_s(auStack_c0,0x40,&DAT_180a096c8);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 9;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017bd30(undefined8 param_1)
void FUN_18017bd30(undefined8 param_1)

{
  undefined1 auStack_668 [32];
  undefined4 uStack_648;
  undefined **appuStack_640 [2];
  undefined8 uStack_630;
  undefined *apuStack_628 [11];
  undefined4 uStack_5d0;
  undefined *puStack_5c8;
  undefined1 *puStack_5c0;
  undefined4 uStack_5b8;
  undefined1 auStack_5b0 [72];
  undefined *puStack_568;
  undefined1 *puStack_560;
  undefined4 uStack_558;
  undefined1 auStack_550 [72];
  undefined *puStack_508;
  undefined1 *puStack_500;
  undefined4 uStack_4f8;
  undefined1 auStack_4f0 [72];
  undefined *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined4 uStack_498;
  undefined1 auStack_490 [72];
  undefined *puStack_448;
  undefined1 *puStack_440;
  undefined4 uStack_438;
  undefined1 auStack_430 [72];
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined4 uStack_3d8;
  undefined1 auStack_3d0 [72];
  undefined *puStack_388;
  undefined1 *puStack_380;
  undefined4 uStack_378;
  undefined1 auStack_370 [72];
  undefined *puStack_328;
  undefined1 *puStack_320;
  undefined4 uStack_318;
  undefined1 auStack_310 [72];
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [72];
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [72];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [72];
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [72];
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_630 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_668;
  uStack_648 = 0;
  puStack_5c8 = &UNK_1809fcc58;
  puStack_5c0 = auStack_5b0;
  auStack_5b0[0] = 0;
  uStack_5b8 = 4;
  strcpy_s(auStack_5b0,0x40,&DAT_180a096e0);
  FUN_1800b8300(apuStack_628,&puStack_5c8);
  uStack_5d0 = 2;
  uStack_648 = 1;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_5c8 = &UNK_18098bcb0;
  puStack_568 = &UNK_1809fcc58;
  puStack_560 = auStack_550;
  auStack_550[0] = 0;
  uStack_558 = 7;
  strcpy_s(auStack_550,0x40,&DAT_180a096d8);
  FUN_1800b8300(apuStack_628,&puStack_568);
  uStack_5d0 = 10;
  uStack_648 = 2;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_568 = &UNK_18098bcb0;
  puStack_508 = &UNK_1809fcc58;
  puStack_500 = auStack_4f0;
  auStack_4f0[0] = 0;
  uStack_4f8 = 7;
  strcpy_s(auStack_4f0,0x40,&DAT_180a096f0);
  FUN_1800b8300(apuStack_628,&puStack_508);
  uStack_5d0 = 10;
  uStack_648 = 4;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_508 = &UNK_18098bcb0;
  puStack_4a8 = &UNK_1809fcc58;
  puStack_4a0 = auStack_490;
  auStack_490[0] = 0;
  uStack_498 = 7;
  strcpy_s(auStack_490,0x40,&DAT_180a096e8);
  FUN_1800b8300(apuStack_628,&puStack_4a8);
  uStack_5d0 = 10;
  uStack_648 = 8;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_4a8 = &UNK_18098bcb0;
  puStack_448 = &UNK_1809fcc58;
  puStack_440 = auStack_430;
  auStack_430[0] = 0;
  uStack_438 = 7;
  strcpy_s(auStack_430,0x40,&DAT_180a09710);
  FUN_1800b8300(apuStack_628,&puStack_448);
  uStack_5d0 = 10;
  uStack_648 = 0x10;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_448 = &UNK_18098bcb0;
  puStack_3e8 = &UNK_1809fcc58;
  puStack_3e0 = auStack_3d0;
  auStack_3d0[0] = 0;
  uStack_3d8 = 0x11;
  strcpy_s(auStack_3d0,0x40,&DAT_180a096f8);
  FUN_1800b8300(apuStack_628,&puStack_3e8);
  uStack_5d0 = 7;
  uStack_648 = 0x20;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_3e8 = &UNK_18098bcb0;
  puStack_388 = &UNK_1809fcc58;
  puStack_380 = auStack_370;
  auStack_370[0] = 0;
  uStack_378 = 0x22;
  strcpy_s(auStack_370,0x40,&DAT_180a09728);
  FUN_1800b8300(apuStack_628,&puStack_388);
  uStack_5d0 = 0;
  uStack_648 = 0x40;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_388 = &UNK_18098bcb0;
  puStack_328 = &UNK_1809fcc58;
  puStack_320 = auStack_310;
  auStack_310[0] = 0;
  uStack_318 = 0xb;
  strcpy_s(auStack_310,0x40,&DAT_180a09718);
  FUN_1800b8300(apuStack_628,&puStack_328);
  uStack_5d0 = 4;
  uStack_648 = 0x80;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_328 = &UNK_18098bcb0;
  puStack_2c8 = &UNK_1809fcc58;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0x12;
  strcpy_s(auStack_2b0,0x40,&DAT_180a09768);
  FUN_1800b8300(apuStack_628,&puStack_2c8);
  uStack_5d0 = 2;
  uStack_648 = 0x100;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_2c8 = &UNK_18098bcb0;
  puStack_268 = &UNK_1809fcc58;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0x12;
  strcpy_s(auStack_250,0x40,&DAT_180a09750);
  FUN_1800b8300(apuStack_628,&puStack_268);
  uStack_5d0 = 2;
  uStack_648 = 0x200;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_268 = &UNK_18098bcb0;
  puStack_208 = &UNK_1809fcc58;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0x1e;
  strcpy_s(auStack_1f0,0x40,&DAT_180a097a0);
  FUN_1800b8300(apuStack_628,&puStack_208);
  uStack_5d0 = 2;
  uStack_648 = 0x400;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x1b;
  strcpy_s(auStack_190,0x40,&DAT_180a09780);
  FUN_1800b8300(apuStack_628,&puStack_1a8);
  uStack_5d0 = 2;
  uStack_648 = 0x800;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bcb0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x1b;
  strcpy_s(auStack_130,0x40,&DAT_180a097e0);
  FUN_1800b8300(apuStack_628,&puStack_148);
  uStack_5d0 = 2;
  uStack_648 = 0x1000;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x18;
  strcpy_s(auStack_d0,0x40,&DAT_180a097c0);
  FUN_1800b8300(apuStack_628,&puStack_e8);
  uStack_5d0 = 0xb;
  uStack_648 = 0x2000;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xc;
  strcpy_s(auStack_70,0x40,&DAT_180a09818);
  FUN_1800b8300(apuStack_628,&puStack_88);
  uStack_5d0 = 0xb;
  uStack_648 = 0x4000;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_668);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c750(undefined8 param_1,undefined8 param_2)
void FUN_18017c750(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &UNK_180a1d0b0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x14) = 3;
  puVar3[0xf] = 0x4024000000000000;
  puVar3[0xe] = 0x3fe0000000000000;
  *(undefined1 *)((longlong)puVar3 + 0x81) = 0;
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_78 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puVar3 = 0x6f6d4120646e6542;
  *(undefined4 *)(puVar3 + 1) = 0x746e75;
  uStack_70 = 0xb;
  FUN_1803460a0(puVar2,&puStack_80,puVar2 + 0xf,1,uVar4);
  puStack_80 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c7a0(undefined8 param_1,undefined8 param_2)
void FUN_18017c7a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_30;
  
  uStack_30 = 0x18017c7c8;
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &UNK_180a1d230;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0x3f800000;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_88 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar3 = 0x6c6169726574614d;
  *(undefined1 *)(puVar3 + 1) = 0;
  uStack_80 = 8;
  FUN_1803460a0(puVar2,&puStack_90,puVar2 + 0xe,10,uVar4);
  puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c7e0(undefined8 param_1,longlong param_2)
void FUN_18017c7e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [16];
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_30 = 0x18017c80a;
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  uStack_148 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  puVar2 = puVar1;
  puStack_140 = puVar1;
  FUN_1803456e0(puVar1,param_2,param_1);
  *puVar2 = &UNK_180a1d3f0;
  *(undefined2 *)(puVar2 + 0x12) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x92) = 0;
  *(bool *)((longlong)puVar2 + 0x93) = *(char *)(param_2 + 0x2e5) == '\0';
  *(undefined4 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x94) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x8c) = 0x3f800000;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0x41a00000;
  puStack_138 = &UNK_1809fdc18;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 8;
  strcpy_s(auStack_120,0x10,&UNK_180a18cc8);
  FUN_1803460a0(puVar1,&puStack_138,puVar1 + 0x12,3);
  puStack_138 = &UNK_18098bcb0;
  puStack_110 = &UNK_18098bc80;
  puStack_108 = auStack_f8;
  auStack_f8[0] = 0;
  uStack_100 = 0x13;
  strcpy_s(auStack_f8,0x20,&UNK_180a1d3d0);
  FUN_1803460a0(puVar1,&puStack_110,(longlong)puVar1 + 0x92,3);
  puStack_110 = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bc80;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x11;
  strcpy_s(auStack_c0,0x20,&UNK_180a1d3b8);
  FUN_1803460a0(puVar1,&puStack_d8,(longlong)puVar1 + 0x8c,2);
  puStack_d8 = &UNK_18098bcb0;
  puStack_a0 = &UNK_18098bc80;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xf;
  strcpy_s(auStack_88,0x20,&UNK_180a1d3a8);
  FUN_1803460a0(puVar1,&puStack_a0,puVar1 + 0x11,2);
  puStack_a0 = &UNK_18098bcb0;
  puStack_68 = &UNK_18098bc80;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 9;
  strcpy_s(auStack_50,0x20,&UNK_180a1d398);
  FUN_1803460a0(puVar1,&puStack_68,puVar1 + 0xf,5);
  puStack_68 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



