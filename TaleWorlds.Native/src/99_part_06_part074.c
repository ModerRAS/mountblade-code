#include "TaleWorlds.Native.Split.h"

// 99_part_06_part074.c - 1 个函数

// 函数: void FUN_1803ef940(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
void FUN_1803ef940(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_348 [32];
  char cStack_328;
  undefined4 uStack_324;
  undefined *puStack_320;
  undefined *puStack_318;
  int iStack_310;
  ulonglong uStack_308;
  longlong *plStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined8 uStack_288;
  ulonglong uStack_280;
  undefined *apuStack_278 [68];
  ulonglong uStack_58;
  
  uStack_2e0 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  uVar11 = 0;
  uStack_324 = 0;
  ppuStack_2e8 = &puStack_320;
  puStack_320 = &UNK_180a3c3e0;
  uStack_308 = 0;
  puStack_318 = (undefined *)0x0;
  iStack_310 = 0;
  plStack_300 = param_1;
  lStack_2f8 = param_4;
  lStack_2f0 = param_2;
  cStack_328 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&puStack_320);
  puVar4 = &DAT_18098bc73;
  if ((undefined *)param_1[0x41] != (undefined *)0x0) {
    puVar4 = (undefined *)param_1[0x41];
  }
  (**(code **)(*param_5 + 0x10))(param_5,puVar4);
  FUN_180627f00(param_5,&UNK_180a25ca8);
  uVar2 = FUN_1803ef110(param_1,*(undefined4 *)(param_2 + 0xa4));
  FUN_180627f00(param_5,uVar2);
  FUN_180627f00(param_5,&DAT_180a25cb4);
  FUN_180627f00(param_5,&DAT_180a022f0);
  FUN_180627e90(param_5,param_2 + 0x80);
  lVar10 = *param_3;
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
          (param_3[1] - lVar10);
  uVar6 = uVar11;
  if (lVar5 >> 6 != lVar5 >> 0x3f) {
    do {
      if ((*(int *)(uVar11 + 0x10 + lVar10) == 0xd) &&
         (iVar1 = strcmp(*(undefined8 *)(uVar11 + 8 + lVar10),&UNK_180a02158), iVar1 == 0)) {
        puVar4 = *(undefined **)(uVar11 + 0x60 + lVar10);
        puVar8 = &DAT_18098bc73;
        if (puVar4 != (undefined *)0x0) {
          puVar8 = puVar4;
        }
        FUN_180628040(param_5,&UNK_180a25cc0,puVar8);
      }
      else {
        puVar4 = *(undefined **)(uVar11 + 0x60 + lVar10);
        puVar8 = &DAT_18098bc73;
        if (puVar4 != (undefined *)0x0) {
          puVar8 = puVar4;
        }
        puVar4 = *(undefined **)(uVar11 + 8 + lVar10);
        puVar9 = &DAT_18098bc73;
        if (puVar4 != (undefined *)0x0) {
          puVar9 = puVar4;
        }
        FUN_180628040(param_5,&UNK_180a25cd0,puVar9,puVar8);
      }
      uVar13 = (int)uVar6 + 1;
      uVar11 = uVar11 + 0x78;
      lVar10 = *param_3;
      lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
              (param_3[1] - lVar10);
      param_1 = plStack_300;
      uVar6 = (ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)((lVar5 >> 6) - (lVar5 >> 0x3f)));
  }
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(lStack_2f8 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lStack_2f8 + 8);
  }
  plVar12 = param_1 + 0x88;
  uStack_2c8 = 0;
  uStack_2c0 = 0xf;
  uStack_2d8 = 0;
  uStack_324 = 1;
  FUN_1803f45e0(&uStack_2d8,param_1[0x8a] + 1);
  if (0xf < (ulonglong)param_1[0x8b]) {
    plVar12 = (longlong *)*plVar12;
  }
  FUN_1803f5400(&uStack_2d8,plVar12,param_1[0x8a]);
  FUN_1803f5400(&uStack_2d8,&DAT_1809fcfb8,1);
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar4[lVar10] != '\0');
  puVar3 = (ulonglong *)FUN_1803f5400(&uStack_2d8,puVar4);
  uStack_2b8 = *puVar3;
  uStack_2b0 = puVar3[1];
  uStack_2a8 = puVar3[2];
  uStack_2a0 = puVar3[3];
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  uStack_324 = 3;
  FUN_1803f3a40(&uStack_298,&uStack_2b8,&DAT_180a0209c);
  uStack_324 = 1;
  if (0xf < uStack_2a0) {
    uVar6 = uStack_2a0 + 1;
    uVar11 = uStack_2b8;
    if (0xfff < uVar6) {
      uVar6 = uStack_2a0 + 0x28;
      uVar11 = *(ulonglong *)(uStack_2b8 - 8);
      if (0x1f < (uStack_2b8 - uVar11) - 8) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar11,uVar6);
  }
  uStack_2a8 = 0;
  uStack_2a0 = 0xf;
  uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
  uStack_324 = 0;
  if (0xf < uStack_2c0) {
    uVar11 = uStack_2c0 + 1;
    if ((0xfff < uVar11) &&
       (uVar11 = uStack_2c0 + 0x28,
       0x1f < (CONCAT71(uStack_2d7,uStack_2d8) - *(longlong *)(CONCAT71(uStack_2d7,uStack_2d8) + -8)
              ) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar11);
  }
  uStack_2c8 = 0;
  uStack_2c0 = 0xf;
  uStack_2d8 = 0;
  if ((char)param_1[0xaf] != '\0') {
    puVar4 = &DAT_18098bc73;
    if ((undefined *)param_1[0xa1] != (undefined *)0x0) {
      puVar4 = (undefined *)param_1[0xa1];
    }
    FUN_180628040(param_5,&UNK_180a25da8,puVar4);
  }
  if ((cStack_328 != '\0') && (iStack_310 != 0)) {
    puVar4 = &DAT_18098bc73;
    if (puStack_318 != (undefined *)0x0) {
      puVar4 = puStack_318;
    }
    FUN_180628040(param_5,&UNK_180a25d90,puVar4);
  }
  FUN_180627f00(param_5,&UNK_180a25d98);
  FUN_180627f00(param_5,&DAT_180a02320);
  puVar7 = &uStack_298;
  if (0xf < uStack_280) {
    puVar7 = (undefined1 *)CONCAT71(uStack_297,uStack_298);
  }
  FUN_180627f00(param_5,puVar7);
  FUN_180627f00(param_5,&DAT_1809fc8e4);
  lVar10 = FUN_180624440(apuStack_278,lStack_2f0 + 0x60);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(lVar10 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar10 + 8);
  }
  FUN_180627f00(param_5,puVar4);
  apuStack_278[0] = &UNK_18098bcb0;
  if (0xf < uStack_280) {
    uVar11 = uStack_280 + 1;
    lVar5 = CONCAT71(uStack_297,uStack_298);
    lVar10 = lVar5;
    if (0xfff < uVar11) {
      uVar11 = uStack_280 + 0x28;
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar11);
  }
  uStack_288 = 0;
  uStack_280 = 0xf;
  uStack_298 = 0;
  ppuStack_2e8 = &puStack_320;
  puStack_320 = &UNK_180a3c3e0;
  if (puStack_318 == (undefined *)0x0) {
    puStack_318 = (undefined *)0x0;
    uStack_308 = uStack_308 & 0xffffffff00000000;
    puStack_320 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_348);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001803f0270)
// WARNING: Removing unreachable block (ram,0x0001803f027c)
// WARNING: Removing unreachable block (ram,0x0001803f0283)
// WARNING: Removing unreachable block (ram,0x0001803f0295)
// WARNING: Removing unreachable block (ram,0x0001803f02c4)
// WARNING: Removing unreachable block (ram,0x0001803f02ce)
// WARNING: Removing unreachable block (ram,0x0001803f02d6)
// WARNING: Removing unreachable block (ram,0x0001803f0359)
// WARNING: Removing unreachable block (ram,0x0001803f0369)
// WARNING: Removing unreachable block (ram,0x0001803f0379)
// WARNING: Removing unreachable block (ram,0x0001803f0385)
// WARNING: Removing unreachable block (ram,0x0001803f038c)
// WARNING: Removing unreachable block (ram,0x0001803f03bf)
// WARNING: Removing unreachable block (ram,0x0001803f03c7)
// WARNING: Removing unreachable block (ram,0x0001803f044a)
// WARNING: Removing unreachable block (ram,0x0001803f045a)
// WARNING: Removing unreachable block (ram,0x0001803f045e)
// WARNING: Removing unreachable block (ram,0x0001803f046a)
// WARNING: Removing unreachable block (ram,0x0001803f0476)
// WARNING: Removing unreachable block (ram,0x0001803f047d)
// WARNING: Removing unreachable block (ram,0x0001803f04ba)
// WARNING: Removing unreachable block (ram,0x0001803f04c2)
// WARNING: Removing unreachable block (ram,0x0001803f054c)
// WARNING: Removing unreachable block (ram,0x0001803f055d)
// WARNING: Removing unreachable block (ram,0x0001803f0561)
// WARNING: Removing unreachable block (ram,0x0001803f0f0f)
// WARNING: Removing unreachable block (ram,0x0001803f056e)
// WARNING: Removing unreachable block (ram,0x0001803f057c)
// WARNING: Removing unreachable block (ram,0x0001803f0584)
// WARNING: Removing unreachable block (ram,0x0001803f05c4)
// WARNING: Removing unreachable block (ram,0x0001803f05cd)
// WARNING: Removing unreachable block (ram,0x0001803f0673)
// WARNING: Removing unreachable block (ram,0x0001803f065a)
// WARNING: Removing unreachable block (ram,0x0001803f0676)
// WARNING: Removing unreachable block (ram,0x0001803f06b0)
// WARNING: Removing unreachable block (ram,0x0001803f06d0)
// WARNING: Removing unreachable block (ram,0x0001803f0711)
// WARNING: Removing unreachable block (ram,0x0001803f0715)
// WARNING: Removing unreachable block (ram,0x0001803f074e)
// WARNING: Removing unreachable block (ram,0x0001803f0756)
// WARNING: Removing unreachable block (ram,0x0001803f078e)
// WARNING: Removing unreachable block (ram,0x0001803f0792)
// WARNING: Removing unreachable block (ram,0x0001803f079c)
// WARNING: Removing unreachable block (ram,0x0001803f07d0)
// WARNING: Removing unreachable block (ram,0x0001803f07d6)
// WARNING: Removing unreachable block (ram,0x0001803f080a)
// WARNING: Removing unreachable block (ram,0x0001803f0813)
// WARNING: Removing unreachable block (ram,0x0001803f0817)
// WARNING: Removing unreachable block (ram,0x0001803f0821)
// WARNING: Removing unreachable block (ram,0x0001803f0825)
// WARNING: Removing unreachable block (ram,0x0001803f07ea)
// WARNING: Removing unreachable block (ram,0x0001803f07f3)
// WARNING: Removing unreachable block (ram,0x0001803f07f7)
// WARNING: Removing unreachable block (ram,0x0001803f07b0)
// WARNING: Removing unreachable block (ram,0x0001803f07b9)
// WARNING: Removing unreachable block (ram,0x0001803f07bd)
// WARNING: Removing unreachable block (ram,0x0001803f0836)
// WARNING: Removing unreachable block (ram,0x0001803f0849)
// WARNING: Removing unreachable block (ram,0x0001803f0893)
// WARNING: Removing unreachable block (ram,0x0001803f08a4)
// WARNING: Removing unreachable block (ram,0x0001803f08b5)
// WARNING: Removing unreachable block (ram,0x0001803f08c3)
// WARNING: Removing unreachable block (ram,0x0001803f08cb)
// WARNING: Removing unreachable block (ram,0x0001803f093b)
// WARNING: Removing unreachable block (ram,0x0001803f0944)
// WARNING: Removing unreachable block (ram,0x0001803f09a8)
// WARNING: Removing unreachable block (ram,0x0001803f09ae)
// WARNING: Removing unreachable block (ram,0x0001803f09b8)
// WARNING: Removing unreachable block (ram,0x0001803f09bc)
// WARNING: Removing unreachable block (ram,0x0001803f09cd)
// WARNING: Removing unreachable block (ram,0x0001803f09f7)
// WARNING: Removing unreachable block (ram,0x0001803f09fb)
// WARNING: Removing unreachable block (ram,0x0001803f0a10)
// WARNING: Removing unreachable block (ram,0x0001803f0a13)
// WARNING: Removing unreachable block (ram,0x0001803f0a2d)
// WARNING: Removing unreachable block (ram,0x0001803f0a37)
// WARNING: Removing unreachable block (ram,0x0001803f0a3b)
// WARNING: Removing unreachable block (ram,0x0001803f0a45)
// WARNING: Removing unreachable block (ram,0x0001803f0a48)
// WARNING: Removing unreachable block (ram,0x0001803f0a5a)
// WARNING: Removing unreachable block (ram,0x0001803f0aa1)
// WARNING: Removing unreachable block (ram,0x0001803f0ab2)
// WARNING: Removing unreachable block (ram,0x0001803f0ab6)
// WARNING: Removing unreachable block (ram,0x0001803f0ac3)
// WARNING: Removing unreachable block (ram,0x0001803f0ad1)
// WARNING: Removing unreachable block (ram,0x0001803f0ad9)
// WARNING: Removing unreachable block (ram,0x0001803f0b1a)
// WARNING: Removing unreachable block (ram,0x0001803f0b23)
// WARNING: Removing unreachable block (ram,0x0001803f0b98)
// WARNING: Removing unreachable block (ram,0x0001803f0b9c)
// WARNING: Removing unreachable block (ram,0x0001803f0be7)
// WARNING: Removing unreachable block (ram,0x0001803f0bf8)
// WARNING: Removing unreachable block (ram,0x0001803f0bfc)
// WARNING: Removing unreachable block (ram,0x0001803f0c09)
// WARNING: Removing unreachable block (ram,0x0001803f0c17)
// WARNING: Removing unreachable block (ram,0x0001803f0c1f)
// WARNING: Removing unreachable block (ram,0x0001803f0c56)
// WARNING: Removing unreachable block (ram,0x0001803f0c5f)
// WARNING: Removing unreachable block (ram,0x0001803f0d1f)
// WARNING: Removing unreachable block (ram,0x0001803f0d29)
// WARNING: Removing unreachable block (ram,0x0001803f0d2d)
// WARNING: Removing unreachable block (ram,0x0001803f0d44)
// WARNING: Removing unreachable block (ram,0x0001803f0d4b)
// WARNING: Removing unreachable block (ram,0x0001803f0d5b)
// WARNING: Removing unreachable block (ram,0x0001803f0d5e)
// WARNING: Removing unreachable block (ram,0x0001803f0da2)
// WARNING: Removing unreachable block (ram,0x0001803f0dae)
// WARNING: Removing unreachable block (ram,0x0001803f0db2)
// WARNING: Removing unreachable block (ram,0x0001803f0dc4)
// WARNING: Removing unreachable block (ram,0x0001803f0dd2)
// WARNING: Removing unreachable block (ram,0x0001803f0dda)
// WARNING: Removing unreachable block (ram,0x0001803f0de9)
// WARNING: Removing unreachable block (ram,0x0001803f0e15)
// WARNING: Removing unreachable block (ram,0x0001803f0e1f)
// WARNING: Removing unreachable block (ram,0x0001803f0e28)
// WARNING: Removing unreachable block (ram,0x0001803f0ead)
// WARNING: Removing unreachable block (ram,0x0001803f0efa)
// WARNING: Removing unreachable block (ram,0x0001803f0f0b)
// WARNING: Removing unreachable block (ram,0x0001803f0f1c)
// WARNING: Removing unreachable block (ram,0x0001803f0f2a)
// WARNING: Removing unreachable block (ram,0x0001803f0f32)
// WARNING: Removing unreachable block (ram,0x0001803f0f73)
// WARNING: Removing unreachable block (ram,0x0001803f0f7c)
// WARNING: Removing unreachable block (ram,0x0001803f1001)
// WARNING: Removing unreachable block (ram,0x0001803f1005)
// WARNING: Removing unreachable block (ram,0x0001803f1015)
// WARNING: Removing unreachable block (ram,0x0001803f1023)
// WARNING: Removing unreachable block (ram,0x0001803f1027)
// WARNING: Removing unreachable block (ram,0x0001803f102e)
// WARNING: Removing unreachable block (ram,0x0001803f1031)
// WARNING: Removing unreachable block (ram,0x0001803f1043)
// WARNING: Removing unreachable block (ram,0x0001803f105f)
// WARNING: Removing unreachable block (ram,0x0001803f1063)
// WARNING: Removing unreachable block (ram,0x0001803f106d)
// WARNING: Removing unreachable block (ram,0x0001803f1071)
// WARNING: Removing unreachable block (ram,0x0001803f1079)
// WARNING: Removing unreachable block (ram,0x0001803f107d)
// WARNING: Removing unreachable block (ram,0x0001803f10b7)
// WARNING: Removing unreachable block (ram,0x0001803f10bc)
// WARNING: Removing unreachable block (ram,0x0001803f10d5)
// WARNING: Removing unreachable block (ram,0x0001803f10d7)
// WARNING: Removing unreachable block (ram,0x0001803f10e8)
// WARNING: Removing unreachable block (ram,0x0001803f10ed)
// WARNING: Removing unreachable block (ram,0x0001803f10f6)
// WARNING: Removing unreachable block (ram,0x0001803f1105)
// WARNING: Removing unreachable block (ram,0x0001803f110a)
// WARNING: Removing unreachable block (ram,0x0001803f1136)
// WARNING: Removing unreachable block (ram,0x0001803f1131)
// WARNING: Removing unreachable block (ram,0x0001803f0e9f)
// WARNING: Removing unreachable block (ram,0x0001803f08a8)
// WARNING: Removing unreachable block (ram,0x0001803f0179)
// WARNING: Removing unreachable block (ram,0x0001803f0185)
// WARNING: Removing unreachable block (ram,0x0001803f018c)
// WARNING: Removing unreachable block (ram,0x0001803f01c7)
// WARNING: Removing unreachable block (ram,0x0001803f01cf)
// WARNING: Removing unreachable block (ram,0x0001803f0250)
// WARNING: Removing unreachable block (ram,0x0001803f025b)
// WARNING: Removing unreachable block (ram,0x0001803f025f)
// WARNING: Removing unreachable block (ram,0x0001803f036d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




