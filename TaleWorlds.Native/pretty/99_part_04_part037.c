#include "TaleWorlds.Native.Split.h"

// 99_part_04_part037.c - 7 个函数

// 函数: void FUN_1802a7bf0(longlong param_1,int param_2,undefined8 *param_3)
void FUN_1802a7bf0(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int in_stack_00000038;
  undefined1 auStack_b88 [40];
  int *piStack_b60;
  undefined4 uStack_b58;
  undefined4 *puStack_b48;
  uint uStack_b40;
  int iStack_b3c;
  uint auStack_b38 [2];
  undefined *puStack_b30;
  undefined8 uStack_b28;
  undefined4 uStack_b20;
  ulonglong uStack_b18;
  int aiStack_b10 [4];
  undefined8 uStack_b00;
  undefined1 auStack_af8 [16];
  undefined8 uStack_ae8;
  undefined4 uStack_ac8;
  longlong lStack_a40;
  longlong lStack_a38;
  longlong lStack_a30;
  longlong lStack_a28;
  undefined1 auStack_a18 [16];
  undefined8 uStack_a08;
  undefined4 uStack_9e8;
  longlong lStack_960;
  longlong lStack_958;
  longlong lStack_950;
  longlong lStack_948;
  undefined1 auStack_938 [2304];
  ulonglong uStack_38;
  
  uStack_b00 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b88;
  *(undefined4 *)((longlong)param_3 + 0x62) = 0;
  puVar4 = (undefined4 *)0x0;
  *(undefined8 *)((longlong)param_3 + 0x54) = 0;
  *(undefined4 *)((longlong)param_3 + 0x5c) = 0;
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined1 *)((longlong)param_3 + 0x66) = 0;
  *(undefined8 *)((longlong)param_3 + 0x14) = 0;
  *(undefined8 *)((longlong)param_3 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_3 + 0x24) = 0;
  *(undefined8 *)((longlong)param_3 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_3 + 0x34) = 0;
  *(undefined8 *)((longlong)param_3 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_3 + 0x44) = 0;
  *(undefined8 *)((longlong)param_3 + 0x4c) = 0;
  puStack_b30 = &UNK_180a3c3e0;
  uStack_b18 = 0;
  uStack_b28 = 0;
  uStack_b20 = 0;
  if (in_stack_00000038 == 0xc) {
    uStack_ae8 = 0;
    uStack_ac8 = 0;
    lStack_a38 = param_1 + param_2;
    uStack_b58 = 0x10;
    piStack_b60 = aiStack_b10;
    lStack_a40 = param_1;
    lStack_a30 = param_1;
    lStack_a28 = lStack_a38;
    puVar3 = (undefined4 *)FUN_18041e290(auStack_af8);
    uVar12 = auStack_b38[0];
    uVar11 = uStack_b40;
    if (puVar3 == (undefined4 *)0x0) {
      puStack_b48 = (undefined4 *)0x0;
      iVar6 = uStack_b40 * iStack_b3c * 2;
    }
    else {
      puStack_b48 = puVar3;
      if (aiStack_b10[0] != 0x10) {
        iVar6 = uStack_b40 * auStack_b38[0] * iStack_b3c;
        lVar5 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar6 * 2));
        if (lVar5 != 0) {
          if (0 < iVar6) {
            lVar8 = 0;
            do {
              *(ushort *)(lVar5 + lVar8 * 2) = (ushort)*(byte *)(lVar8 + (longlong)puVar3) * 0x101;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar6);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puStack_b48 = (undefined4 *)0x0;
      }
      puVar4 = puStack_b48;
      if (_DAT_180c8ecd0 != 0) {
        FUN_18041eb10(puStack_b48,uStack_b40,auStack_b38[0],iStack_b3c * 2);
      }
      iVar6 = uStack_b40 * iStack_b3c * 2;
    }
  }
  else {
    uStack_a08 = 0;
    uStack_9e8 = 0;
    lStack_958 = param_1 + param_2;
    lStack_960 = param_1;
    lStack_950 = param_1;
    lStack_948 = lStack_958;
    puVar4 = (undefined4 *)FUN_18041ec30(auStack_a18,&uStack_b40,auStack_b38,&iStack_b3c);
    iVar6 = uStack_b40 * iStack_b3c;
    uVar12 = auStack_b38[0];
    uVar11 = uStack_b40;
    puStack_b48 = puVar4;
  }
  if (puVar4 != (undefined4 *)0x0) {
    *(short *)((longlong)param_3 + 0x5c) = (short)uVar11;
    *(short *)((longlong)param_3 + 0x5e) = (short)uVar12;
    *(undefined4 *)(param_3 + 0xc) = 0x10001;
    *(undefined2 *)((longlong)param_3 + 100) = 0x102;
    if (iStack_b3c == 1) {
      *(uint *)((longlong)param_3 + 0x54) = (in_stack_00000038 == 0xc) + 0xb;
      FUN_1802a1bc0(param_3);
      uVar2 = *param_3;
      puVar7 = auStack_938;
      lVar5 = 0x60;
      do {
        func_0x0001800adfc0(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1800adfe0(param_3,auStack_938);
      puVar4 = puStack_b48;
      if (0 < (int)uVar12) {
                    // WARNING: Subroutine does not return
        memcpy(uVar2,puStack_b48,(longlong)iVar6);
      }
    }
    else if (iStack_b3c == 3) {
      *(undefined4 *)((longlong)param_3 + 0x54) = 0x29;
      FUN_1802a1bc0(param_3);
      uVar2 = *param_3;
      puVar7 = auStack_938;
      lVar5 = 0x60;
      do {
        func_0x0001800adfc0(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1800adfe0(param_3,auStack_938);
      puVar4 = puStack_b48;
      if (0 < (int)uVar12) {
                    // WARNING: Subroutine does not return
        memcpy(uVar2,puStack_b48,(longlong)iVar6);
      }
    }
    else if (iStack_b3c == 4) {
      *(undefined4 *)((longlong)param_3 + 0x54) = 1;
      *(uint *)(param_3 + 0xb) = *(uint *)(param_3 + 0xb) | 0x8000;
      FUN_1802a1bc0(param_3);
      puVar7 = auStack_938;
      lVar5 = 0x60;
      do {
        func_0x0001800adfc0(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1800adfe0(param_3,auStack_938);
      puVar7 = (undefined1 *)*param_3;
      if (uVar11 != 0) {
        uVar10 = (ulonglong)uVar11;
        puVar3 = puVar4;
        do {
          if (uVar12 != 0) {
            uVar9 = (ulonglong)uVar12;
            do {
              uVar1 = *puVar3;
              *puVar7 = (char)((uint)uVar1 >> 0x10);
              puVar7[1] = *(undefined1 *)((longlong)puVar3 + 1);
              puVar7[2] = *(undefined1 *)puVar3;
              puVar7[3] = (char)((uint)uVar1 >> 0x18);
              puVar7 = puVar7 + 4;
              puVar3 = puVar3 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  uStack_b28 = 0;
  uStack_b18 = uStack_b18 & 0xffffffff00000000;
  puStack_b30 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a8080(longlong param_1,longlong *param_2,int param_3)
void FUN_1802a8080(longlong param_1,longlong *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 auStack_298 [32];
  longlong lStack_278;
  int *piStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined4 uStack_250;
  int aiStack_248 [2];
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  iVar3 = func_0x0001802a0ec0(*(undefined4 *)((longlong)param_2 + 0x54));
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
  if (param_3 == 1) {
    uVar5 = FUN_18062c100(&puStack_268,param_1);
    FUN_18062c1e0(uVar5,1);
    puStack_268 = &UNK_180a3c3e0;
    if (puStack_260 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_260 = (undefined *)0x0;
    uStack_250 = 0;
    puStack_268 = &UNK_18098bcb0;
    lVar6 = *param_2;
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x5e);
    uVar2 = *(undefined2 *)((longlong)param_2 + 0x5c);
    puVar7 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
      puVar7 = *(undefined **)(param_1 + 8);
    }
    iVar4 = fopen_s(&puStack_268,puVar7,&UNK_180a0cf4c);
    puVar7 = puStack_268;
    if (iVar4 != 0) {
      puVar7 = (undefined *)0x0;
    }
    puStack_268 = &UNK_18042d5d0;
    puStack_260 = puVar7;
    if (puVar7 == (undefined *)0x0) goto LAB_1802a83bc;
    lStack_278 = lVar6;
    FUN_18042da00(&puStack_268,uVar2,uVar1,iVar3);
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        uVar5 = FUN_18062c100(&puStack_268,param_1);
        FUN_18062c1e0(uVar5,1);
        puStack_268 = &UNK_180a3c3e0;
        if (puStack_260 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_260 = (undefined *)0x0;
        uStack_250 = 0;
        puStack_268 = &UNK_18098bcb0;
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 8);
        }
        piStack_270 = aiStack_248;
        lStack_278 = CONCAT44(lStack_278._4_4_,iVar3);
        lVar6 = FUN_18042eee0(*param_2);
        if (lVar6 != 0) {
          iVar3 = fopen_s(&puStack_268,puVar7,&UNK_180a0cf4c);
          puVar7 = puStack_268;
          if (iVar3 != 0) {
            puVar7 = (undefined *)0x0;
          }
          puStack_268 = puVar7;
          if (puVar7 == (undefined *)0x0) {
            free();
          }
          else {
            fwrite(lVar6,1,(longlong)aiStack_248[0],puVar7);
            fclose(puVar7);
            free(lVar6);
          }
        }
      }
      else if (DAT_180d48dac == '\0') {



// 函数: void FUN_1802a83f0(undefined8 param_1,undefined8 param_2)
void FUN_1802a83f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_318 [32];
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  ulonglong uStack_2e8;
  undefined *puStack_2e0;
  longlong lStack_2d8;
  uint uStack_2d0;
  undefined4 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined4 uStack_2a8;
  undefined8 uStack_298;
  undefined *apuStack_290 [5];
  undefined *apuStack_268 [2];
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  ulonglong uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 auStack_230 [128];
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  ulonglong uStack_48;
  
  uStack_298 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_318;
  uVar10 = 0;
  uVar4 = FUN_180624440(apuStack_268,param_1);
  FUN_1806279c0(&puStack_2c0,uVar4);
  apuStack_268[0] = &UNK_18098bcb0;
  uVar4 = FUN_180627490(apuStack_290,&puStack_2c0);
  FUN_1806279c0(&puStack_2e0,uVar4);
  apuStack_290[0] = &UNK_18098bcb0;
  uVar6 = uVar10;
  uVar7 = uVar10;
  if (uStack_2d0 != 0) {
    do {
      if ((byte)(*(char *)(lStack_2d8 + uVar6) + 0xbfU) < 0x1a) {
        *(char *)(lStack_2d8 + uVar6) = *(char *)(lStack_2d8 + uVar6) + ' ';
      }
      uVar9 = (int)uVar7 + 1;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar9;
    } while (uVar9 < uStack_2d0);
  }
  uVar6 = uVar10;
  if (uStack_2d0 == 4) {
    do {
      uVar7 = uVar6 + 1;
      if (*(char *)(lStack_2d8 + uVar6) != (&DAT_180a02bf0)[uVar6]) goto LAB_1802a84f9;
      uVar6 = uVar7;
    } while (uVar7 != 5);
    FUN_18041dfa0(&puStack_2c0,param_2);
  }
  else {
LAB_1802a84f9:
    puVar8 = &DAT_18098bc73;
    if (puStack_2b8 != (undefined *)0x0) {
      puVar8 = puStack_2b8;
    }
    iVar3 = fopen_s(&uStack_2e8,puVar8,&UNK_180a01ff0);
    uStack_240 = uStack_2e8;
    if (iVar3 != 0) {
      uStack_240 = uVar10;
    }
    if (uStack_240 != 0) {
      uStack_2e8 = uStack_240;
      ftell(uStack_240);
      uStack_258 = _DAT_180bf5c18;
      uStack_254 = uRam0000000180bf5c1c;
      uStack_250 = uRam0000000180bf5c20;
      uStack_24c = uRam0000000180bf5c24;
      uStack_248 = _DAT_180bf5c28;
      uStack_234 = 0x80;
      uStack_238 = 1;
      puStack_1a0 = auStack_230;
      iVar3 = func_0x00018041e1e0(uStack_240,auStack_230,0x80);
      if (iVar3 == 0) {
        uStack_238 = 0;
        puStack_1a8 = auStack_230 + 1;
        auStack_230[0] = 0;
      }
      else {
        puStack_1a8 = auStack_230 + iVar3;
      }
      puStack_1b0 = auStack_230;
      puStack_198 = puStack_1a8;
      plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x4888,0x22);
      *plVar5 = (longlong)apuStack_268;
      iVar3 = FUN_180423010(plVar5,2);
      if (iVar3 == 0) {
        lVar1 = *plVar5;
        *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar1 + 200);
        *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xd0);
      }
      else {
        puVar2 = (undefined4 *)*plVar5;
        uStack_2f4 = *puVar2;
        uStack_2f0 = puVar2[1];
        uStack_2f8 = 1;
        if (2 < (int)puVar2[2]) {
          uStack_2f8 = 3;
        }
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar5);
    }
    uStack_2e8 = 0;
  }
  puStack_2e0 = &UNK_180a3c3e0;
  if (lStack_2d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2d8 = 0;
  uStack_2c8 = 0;
  puStack_2e0 = &UNK_18098bcb0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (puStack_2b8 == (undefined *)0x0) {
    puStack_2b8 = (undefined *)0x0;
    uStack_2a8 = 0;
    puStack_2c0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_318);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a8770(void)
void FUN_1802a8770(void)

{
  ulonglong uVar1;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  _DAT_180c8ecb0 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  *_DAT_180c8ecb0 = 0;
  _DAT_180c8ecb0[1] = 0;
  _DAT_180c8ecb0[2] = 0;
  *(undefined4 *)(_DAT_180c8ecb0 + 3) = 3;
  puStack_78 = _DAT_180c8ecb0;
  _DAT_180c8eca8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  *_DAT_180c8eca8 = 0;
  _DAT_180c8eca8[1] = 0;
  _DAT_180c8eca8[2] = 0;
  *(undefined4 *)(_DAT_180c8eca8 + 3) = 3;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  puStack_78 = _DAT_180c8eca8;
  strcpy_s(auStack_50,0x10,&UNK_180a04f80);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_68);
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_40 = &UNK_1809fdc18;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&UNK_180a04f78);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_40);
  }
  puStack_40 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&DAT_180a02bf0);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_68);
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_40 = &UNK_1809fdc18;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&UNK_180a04f70);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_40);
  }
  puStack_40 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&UNK_180a04f90);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_68);
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_40 = &UNK_1809fdc18;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&DAT_180a03fc0);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_40);
  }
  puStack_40 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&UNK_180a04fd4);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_68);
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_40 = &UNK_1809fdc18;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 4;
  strcpy_s(auStack_28,0x10,&UNK_180a04f68);
  uVar1 = _DAT_180c8ecb0[1];
  if (uVar1 < (ulonglong)_DAT_180c8ecb0[2]) {
    _DAT_180c8ecb0[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8ecb0,&puStack_40);
  }
  puStack_40 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&UNK_180a178bc);
  uVar1 = _DAT_180c8eca8[1];
  if (uVar1 < (ulonglong)_DAT_180c8eca8[2]) {
    _DAT_180c8eca8[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8eca8,&puStack_68);
  }
  puStack_68 = &UNK_18098bcb0;
  puStack_40 = &UNK_1809fdc18;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 6;
  strcpy_s(auStack_28,0x10,&UNK_180a178f8);
  uVar1 = _DAT_180c8eca8[1];
  if (uVar1 < (ulonglong)_DAT_180c8eca8[2]) {
    _DAT_180c8eca8[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8eca8,&puStack_40);
  }
  puStack_40 = &UNK_18098bcb0;
  puStack_68 = &UNK_1809fdc18;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 4;
  strcpy_s(auStack_50,0x10,&UNK_180a17900);
  uVar1 = _DAT_180c8eca8[1];
  if (uVar1 < (ulonglong)_DAT_180c8eca8[2]) {
    _DAT_180c8eca8[1] = uVar1 + 0x28;
    FUN_1801e8210(uVar1);
  }
  else {
    FUN_1801e8b60(_DAT_180c8eca8,&puStack_68);
  }
  puStack_68 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a8cf0(longlong param_1,uint param_2,longlong param_3)
void FUN_1802a8cf0(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_2f8 [32];
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  longlong *plStack_2b8;
  undefined2 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  longlong alStack_288 [3];
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [56];
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_268 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  FUN_1801ec5c0(auStack_260,&UNK_180a178c8);
  uVar4 = func_0x000180220c90(*(undefined4 *)(param_3 + 0x54));
  strcpy_s(param_3 + 0x14,0x40,uVar4);
  uVar1 = *(uint *)(param_3 + 0x54);
  if (uVar1 - 0xe < 9) goto LAB_1802a912b;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 6) {
LAB_1802a8dab:
    if (1 < iVar2) {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar6 = (longlong)(iVar2 + -2);
      if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'd')) &&
         (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
      if (1 < iVar2) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar6 = (longlong)(iVar2 + -2);
        if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 's')) &&
           (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
        if (1 < iVar2) {
          lVar5 = *(longlong *)(param_1 + 8);
          lVar6 = (longlong)(iVar2 + -2);
          if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'n')) &&
             (*(char *)(lVar5 + 2 + lVar6) == '\0')) {
            cVar3 = FUN_1802a9450(param_3);
            if (cVar3 == '\0') {
              uVar4 = func_0x000180220c90(*(undefined4 *)(param_3 + 0x54));
              puVar7 = &UNK_180a17980;
              goto LAB_1802a8ef5;
            }
            goto LAB_1802a8f12;
          }
          if (1 < iVar2) {
            lVar5 = *(longlong *)(param_1 + 8);
            lVar6 = (longlong)(iVar2 + -2);
            if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'h')) &&
               (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
          }
        }
      }
    }
    if ((((uVar1 < 0xb) || ((0xc < uVar1 && (1 < uVar1 - 0x2b)))) &&
        ((*(uint *)(param_3 + 0x58) & 0x4000000) != 0)) &&
       (cVar3 = FUN_1802a9bc0(param_3), cVar3 == '\0')) {
      uVar4 = func_0x000180220c90(*(undefined4 *)(param_3 + 0x54));
      puVar7 = &UNK_180a17910;
LAB_1802a8ef5:
      puVar8 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_1 + 8);
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,puVar7,puVar8,uVar4);
    }
  }
  else {
    lVar5 = 0;
    do {
      lVar6 = lVar5 + 1;
      if (*(char *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 + -6) + lVar5) !=
          (&UNK_180a178f0)[lVar5]) goto LAB_1802a8dab;
      lVar5 = lVar6;
    } while (lVar6 != 7);
  }
LAB_1802a8f12:
  if (((param_2 & 1) != 0) && ((*(uint *)(param_3 + 0x58) & 0x1c000001) == 0)) {
    plStack_2b8 = alStack_288;
    alStack_288[0] = 0;
    alStack_288[1] = 0;
    alStack_288[2] = 0;
    uStack_270 = 3;
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_290 = 0;
    cVar3 = FUN_1802a9170(param_3);
    if (cVar3 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 8);
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a179a8,puVar7);
    }
    plStack_2b8 = alStack_288;
    if (alStack_288[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (((param_2 & 2) != 0) && ((*(uint *)(param_3 + 0x58) & 0x10000020) == 0)) {
    uStack_2c8 = func_0x000180220c90(*(undefined4 *)(param_3 + 0x54));
    puStack_2d0 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
      puStack_2d0 = *(undefined **)(param_1 + 8);
    }
    puStack_2d8 = &UNK_180a17940;
    FUN_1800623b0(_DAT_180c86928,0,0x10000000000,8);
    uVar1 = *(uint *)(param_3 + 0x54);
    if ((uVar1 < 0xe) || ((0x12 < uVar1 && (2 < uVar1 - 0x14)))) {
      if (DAT_180d48daa == '\0') {



// 函数: void FUN_1802a9170(longlong param_1)
void FUN_1802a9170(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 uStack_228;
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  if (*(char *)(param_1 + 100) == '\x02') {
    if (DAT_180d48dab == '\0') {



// 函数: void FUN_1802aa270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802aa270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined1 auStackX_8 [8];
  undefined8 uStackX_18;
  
  uStackX_18 = param_3;
  uVar4 = FUN_1808f8e50(0x5f8ba57,param_4,param_2,0,0x13);
  bVar6 = (uVar4 & 0xfff00000) != 0xbad00000;
  *(bool *)(param_1 + 0xd8) = bVar6;
  if (!bVar6) {
    *(undefined1 *)(param_1 + 0xd9) = 0;
    return;
  }
  uVar4 = NVSDK_NGX_D3D11_GetParameters(param_1 + 0xe0);
  if (((uVar4 & 0xfff00000) == 0xbad00000) &&
     (*(undefined1 *)(param_1 + 0xd9) = 0, *(char *)(param_1 + 0xd8) != '\0')) {
    FUN_1802aa4b0(param_1);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_180626f80(&UNK_180a17ab0);
      if (*(char *)(param_1 + 0xd8) != '\0') {
        FUN_1802aa4b0(param_1);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          NVSDK_NGX_D3D11_ReleaseFeature();
        }
        *(undefined8 *)(param_1 + 0xe8) = 0;
      }
    }
    NVSDK_NGX_D3D11_Shutdown();
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  lVar3 = _DAT_180c86920;
  *(undefined1 *)(param_1 + 0xd9) = 1;
  iVar1 = *(int *)(lVar3 + 0x1d50);
  iVar2 = *(int *)(lVar3 + 0x1dc0);
  uStackX_18 = CONCAT44(iVar2,iVar1);
  puVar5 = (undefined8 *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,0);
  *(undefined8 *)(param_1 + 0x48) = *puVar5;
  puVar5 = (undefined8 *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,1);
  *(undefined8 *)(param_1 + 0x50) = *puVar5;
  puVar5 = (undefined8 *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,2);
  *(undefined8 *)(param_1 + 0x58) = *puVar5;
  puVar5 = (undefined8 *)FUN_1802aa800(param_1,auStackX_8,&uStackX_18,3);
  dVar7 = (double)iVar1;
  *(undefined8 *)(param_1 + 0x60) = *puVar5;
  dVar8 = (double)iVar2;
  *(double *)(param_1 + 8) = dVar7 / (double)*(int *)(param_1 + 0x48);
  *(double *)(param_1 + 0x10) = dVar8 / (double)*(int *)(param_1 + 0x4c);
  *(double *)(param_1 + 0x18) = dVar7 / (double)*(int *)(param_1 + 0x50);
  *(double *)(param_1 + 0x20) = dVar8 / (double)*(int *)(param_1 + 0x54);
  *(double *)(param_1 + 0x28) = dVar7 / (double)*(int *)(param_1 + 0x58);
  *(double *)(param_1 + 0x30) = dVar8 / (double)*(int *)(param_1 + 0x5c);
  *(double *)(param_1 + 0x38) = dVar7 / (double)*(int *)(param_1 + 0x60);
  *(double *)(param_1 + 0x40) = dVar8 / (double)*(int *)(param_1 + 100);
  return;
}






