#include "TaleWorlds.Native.Split.h"

// 99_part_03_part079.c - 5 个函数

// 函数: void FUN_180244e4d(void)
void FUN_180244e4d(void)

{
  code *in_RAX;
  undefined *puVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (in_RAX != (code *)0x0) {
    (*in_RAX)(unaff_RSI + 0x9610,0,0);
  }
  *(undefined **)(unaff_RSI + 0x9620) = &UNK_1800ee4d0;
  *(undefined **)(unaff_RSI + 0x9628) = &UNK_1800ee4c0;
  *(code **)(unaff_RSI + 0x9610) = FUN_1802436f0;
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(unaff_RDI + 0xb0) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_RDI + 0xb0);
  }
  (**(code **)(*(longlong *)(unaff_RSI + 0x95c8) + 0x10))((longlong *)(unaff_RSI + 0x95c8),puVar1);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(unaff_RDI + 0x90) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_RDI + 0x90);
  }
  (**(code **)(*(longlong *)(unaff_RSI + 0x95e8) + 0x10))((longlong *)(unaff_RSI + 0x95e8),puVar1);
  *(undefined4 *)(unaff_RSI + 0x9608) = *(undefined4 *)(unaff_RDI + 200);
  *(undefined1 *)(unaff_RDI + 0xe9) = 0;
  return;
}






// 函数: void FUN_180244ef2(void)
void FUN_180244ef2(void)

{
  return;
}



undefined8 * FUN_180244f00(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a143e8;
  plVar1 = (longlong *)param_1[0x1c];
  if (plVar1 == (longlong *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x18] = &UNK_180a3c3e0;
    if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x18] = &UNK_18098bcb0;
    FUN_180049470(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1,0xf0);
    }
    return param_1;
  }
  if (*(char *)((longlong)plVar1 + 0x11) == '\0') {
    if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(undefined1 *)(plVar1 + 2) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180244ff0(longlong param_1)
void FUN_180244ff0(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong extraout_XMM0_Qa;
  undefined1 auStack_158 [32];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined1 uStack_114;
  undefined8 uStack_113;
  undefined4 uStack_108;
  undefined1 uStack_104;
  longlong *plStack_100;
  longlong *aplStack_f8 [3];
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if ((*(char *)(param_1 + 0x9a31) != '\0') && (*(longlong *)(param_1 + 0x99b8) != 0)) {
    iVar1 = *(int *)(param_1 + 0x3590);
    iVar2 = *(int *)(param_1 + 0x3594);
    puStack_d8 = &UNK_1809fcc28;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 10;
    strcpy_s(auStack_c0,0x80,&UNK_180a146b0);
    puVar9 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x3528) != (undefined *)0x0) {
      puVar9 = *(undefined **)(param_1 + 0x3528);
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (puVar9[lVar7] != '\0');
    iVar6 = (int)lVar7;
    if ((0 < iVar6) && (uStack_c8 + iVar6 < 0x7f)) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_d0 + uStack_c8,puVar9,(longlong)(iVar6 + 1));
    }
    uStack_130 = 1;
    uStack_12c = 1;
    uStack_113 = 1;
    uStack_114 = 0;
    uStack_104 = 0;
    uStack_138 = (undefined4)(longlong)(float)iVar1;
    uStack_134 = (undefined4)(longlong)(float)iVar2;
    uStack_128 = *(undefined4 *)(param_1 + 0x9714);
    uVar3 = *(uint *)(param_1 + 0x11cf0);
    fStack_118 = (float)(uVar3 >> 0x18) * 0.003921569;
    fStack_124 = (float)(uVar3 >> 0x10 & 0xff) * 0.003921569;
    fStack_120 = (float)(uVar3 >> 8 & 0xff) * 0.003921569;
    uVar10 = (ulonglong)(uint)fStack_120;
    fStack_11c = (float)(uVar3 & 0xff) * 0.003921569;
    uStack_108 = *(undefined4 *)(param_1 + 0x1bd4);
    lVar7 = *(longlong *)(param_1 + 0x96a0);
    if (((lVar7 == 0) ||
        (cVar5 = func_0x0001800ba3b0(lVar7 + 0x108,&uStack_138), uVar10 = extraout_XMM0_Qa,
        cVar5 == '\0')) || (*(int *)(lVar7 + 0x380) == 0)) {
      puVar8 = (undefined8 *)FUN_1800b1230(uVar10,aplStack_f8,&puStack_d8,&uStack_138);
      uVar4 = *puVar8;
      *puVar8 = 0;
      plStack_100 = *(longlong **)(param_1 + 0x96a0);
      *(undefined8 *)(param_1 + 0x96a0) = uVar4;
      if (plStack_100 != (longlong *)0x0) {
        (**(code **)(*plStack_100 + 0x38))();
      }
      if (aplStack_f8[0] != (longlong *)0x0) {
        (**(code **)(*aplStack_f8[0] + 0x38))();
      }
    }
    _Thrd_id();
    puStack_d8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180245280(longlong param_1)
void FUN_180245280(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_118 [32];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [136];
  ulonglong uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  if (((*(byte *)(param_1 + 4) & 0x80) != 0) && (*(longlong *)(param_1 + 0x96a8) == 0)) {
    uVar4 = 1;
    lVar2 = FUN_180244ff0();
    if (lVar2 == 0) {
      uStack_f8 = *(uint *)(param_1 + 0x3588);
      uStack_f4 = *(uint *)(param_1 + 0x358c);
    }
    else {
      uStack_f8 = (uint)*(ushort *)(lVar2 + 0x32c);
      uStack_f4 = (uint)*(ushort *)(lVar2 + 0x32e);
      uVar4 = (uint)*(ushort *)(lVar2 + 0x332);
    }
    uStack_e4 = 0x1018a;
    uStack_ec = 0x2f;
    uStack_e8 = 0x3f800000;
    uStack_e0 = *(undefined4 *)(param_1 + 0x1bd4);
    puStack_b8 = &UNK_1809fcc28;
    puStack_b0 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 7;
    uStack_f0 = uVar4;
    uVar5 = strcpy_s(auStack_a0,0x80,&UNK_180a146f0);
    puVar3 = (undefined8 *)FUN_1800b1d80(uVar5,&plStack_d0,&puStack_b8,&uStack_f8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_d8 = *(longlong **)(param_1 + 0x96a8);
    *(undefined8 *)(param_1 + 0x96a8) = uVar1;
    if (plStack_d8 != (longlong *)0x0) {
      (**(code **)(*plStack_d8 + 0x38))();
    }
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    puStack_b8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}






// 函数: void FUN_180245420(longlong param_1)
void FUN_180245420(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x9690);
  *(undefined8 *)(param_1 + 0x9690) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x9698);
  *(undefined8 *)(param_1 + 0x9698) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96a8);
  *(undefined8 *)(param_1 + 0x96a8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96e8);
  *(undefined8 *)(param_1 + 0x96e8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96f0);
  *(undefined8 *)(param_1 + 0x96f0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96d8);
  *(undefined8 *)(param_1 + 0x96d8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96e0);
  *(undefined8 *)(param_1 + 0x96e0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96d0);
  *(undefined8 *)(param_1 + 0x96d0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x96f8);
  *(undefined8 *)(param_1 + 0x96f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x9960);
  *(undefined8 *)(param_1 + 0x9960) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x9968);
  *(undefined8 *)(param_1 + 0x9968) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x99b8);
  *(undefined8 *)(param_1 + 0x99b8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x12498);
  *(undefined8 *)(param_1 + 0x12498) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




