#include "TaleWorlds.Native.Split.h"

// 99_part_04_part068.c - 3 个函数

// 函数: void FUN_1802c6190(undefined8 *param_1)
void FUN_1802c6190(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  longlong **pplStack_1a8;
  longlong **pplStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [128];
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  int iStack_c8;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uVar12 = 0;
  uStack_1c8 = 0;
  iVar13 = 0xff;
  if (*(int *)(param_1 + 0x20c) < 0xff) {
    iVar13 = *(int *)(param_1 + 0x20c);
  }
  if (iVar13 != 0) {
    FUN_1802c70b0(param_1 + 0xc,param_1 + ((longlong)iVar13 + 6) * 2,
                  (longlong)(param_1 + ((longlong)iVar13 + 6) * 2) - (longlong)(param_1 + 0xc) >> 4,
                  param_1);
    iVar14 = 0x18;
    if (iVar13 < 0x18) {
      iVar14 = iVar13;
    }
    *(int *)(param_1 + 10) = iVar14;
    uVar10 = _DAT_180c8a998;
    uStack_198 = 0;
    iVar14 = iVar14 << 4;
    puStack_98 = &UNK_1809fcc58;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    uVar15 = strcpy_s(auStack_80,0x40,&DAT_1809ffc60);
    FUN_1802037e0(uVar15,iVar14,&puStack_98);
    puStack_98 = &UNK_18098bcb0;
    lVar8 = FUN_18062b1e0(_DAT_180c8ed18,iVar14,0x10,3);
    FUN_1802c7ae0(uVar10,&plStack_1c0);
    plVar7 = plStack_1c0;
    plStack_1c0[2] = lVar8;
    *(int *)(plStack_1c0 + 3) = iVar14;
    *(int *)((longlong)plStack_1c0 + 0x1c) = iVar14;
    *(undefined1 *)(plStack_1c0 + 4) = 0;
    pplStack_1a8 = (longlong **)0x0;
    plStack_1c0 = (longlong *)0x0;
    uStack_1c8 = 0;
    puVar2 = (undefined4 *)plVar7[2];
    if (*(int *)(param_1 + 10) != 0) {
      puVar9 = puVar2;
      do {
        puVar1 = (undefined4 *)((longlong)param_1 + (0x60 - (longlong)puVar2) + (longlong)puVar9);
        uVar15 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar15;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        uVar12 = uVar12 + 1;
        puVar9 = puVar9 + 4;
      } while (uVar12 < *(uint *)(param_1 + 10));
    }
    pplStack_1a0 = (longlong **)&puStack_178;
    puStack_178 = &UNK_1809fcc28;
    puStack_170 = auStack_160;
    uStack_168 = 0;
    auStack_160[0] = 0;
    uStack_e0 = 9;
    uStack_d8 = *param_1;
    plStack_d0 = plVar7;
    iStack_c8 = *(int *)(param_1 + 10) << 4;
    if (*(code **)(*plVar7 + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    plVar11 = (longlong *)FUN_18005ce30(uVar10,&puStack_178);
    ppuStack_190 = (undefined **)plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    lVar8 = _DAT_180c82868;
    pplStack_1a0 = &plStack_1b8;
    plStack_1b8 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    pplStack_1a8 = &plStack_1b8;
    puVar3 = *(undefined8 **)(*(longlong *)(lVar8 + 8) + 8);
    pcVar4 = *(code **)*puVar3;
    pplStack_1a0 = &plStack_1b0;
    plStack_1b0 = plStack_1b8;
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x28))();
    }
    (*pcVar4)(puVar3,&plStack_1b0);
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    ppuStack_190 = &puStack_178;
    puStack_178 = &UNK_18098bcb0;
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c64d0(longlong *param_1,undefined8 param_2)
void FUN_1802c64d0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined1 auStack_2e8 [32];
  undefined4 uStack_2c8;
  undefined1 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined4 uStack_2a0;
  undefined2 uStack_29c;
  ushort uStack_29a;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  longlong *plStack_278;
  undefined *puStack_270;
  longlong lStack_268;
  undefined4 uStack_260;
  ulonglong uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  longlong *plStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  longlong *plStack_218;
  undefined *puStack_210;
  longlong lStack_208;
  undefined4 uStack_200;
  ulonglong uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  longlong *plStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [32];
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *plStack_178;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [72];
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint auStack_f0 [2];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_1d8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  ppuStack_2b0 = &puStack_a8;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  FUN_180049bf0(&puStack_a8,&UNK_180a18d48);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_a8);
  auStack_2b8[0] = 0;
  lVar6 = param_1[4];
  puStack_168 = &UNK_18098bc80;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xe;
  strcpy_s(auStack_150,0x20,&UNK_180a0dc08);
  ppuStack_2a8 = (undefined **)FUN_180240430(lVar6,&puStack_168,1);
  puStack_168 = &UNK_18098bcb0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  lStack_238 = param_1[4];
  plStack_218 = (longlong *)0x0;
  puStack_210 = &UNK_180a3c3e0;
  uStack_1f8 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  plStack_1e0 = (longlong *)0x0;
  uStack_220 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uVar1 = *(undefined8 *)(param_1[4] + 0x15b8);
  ppuStack_2b0 = &puStack_1d0;
  uStack_230._0_4_ = SUB84(ppuStack_2a8,0);
  uStack_230._4_4_ = (undefined4)((ulonglong)ppuStack_2a8 >> 0x20);
  uStack_228._4_4_ = (undefined4)(((ulonglong)uStack_29a << 0x30) >> 0x20);
  uStack_1c8 = (undefined4)uStack_230;
  uStack_1c4 = uStack_230._4_4_;
  uStack_1c0 = 0;
  uStack_1bc = uStack_228._4_4_;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_230 = ppuStack_2a8;
  uStack_228 = (ulonglong)uStack_29a << 0x30;
  puStack_1d0 = (undefined *)lStack_238;
  FUN_180627ae0(auStack_1a8,&puStack_210);
  uStack_188 = uStack_1f0;
  uStack_184 = uStack_1ec;
  uStack_180 = uStack_1e8;
  uStack_17c = uStack_1e4;
  plStack_178 = plStack_1e0;
  if (plStack_1e0 != (longlong *)0x0) {
    (**(code **)(*plStack_1e0 + 0x28))();
  }
  lVar5 = FUN_180299eb0(uVar1,0,&puStack_1d0,auStack_2b8);
  lVar6 = param_1[4];
  puStack_168 = &UNK_18098bc80;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xc;
  strcpy_s(auStack_150,0x20,&UNK_180a0dc80);
  ppuStack_2a8 = (undefined **)FUN_180240430(lVar6,&puStack_168,1);
  puStack_168 = &UNK_18098bcb0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  puStack_298 = (undefined *)param_1[4];
  plStack_278 = (longlong *)0x0;
  puStack_270 = &UNK_180a3c3e0;
  uStack_258 = 0;
  lStack_268 = 0;
  uStack_260 = 0;
  plStack_240 = (longlong *)0x0;
  uStack_280 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uVar1 = *(undefined8 *)(param_1[4] + 0x15b8);
  ppuStack_2b0 = &puStack_108;
  uStack_288._4_4_ = (undefined4)(((ulonglong)uStack_29a << 0x30) >> 0x20);
  uStack_f8 = 0;
  uStack_f4 = uStack_288._4_4_;
  auStack_f0[0] = 0;
  uStack_e8 = 0;
  ppuStack_290 = ppuStack_2a8;
  uStack_288 = (ulonglong)uStack_29a << 0x30;
  puStack_108 = puStack_298;
  ppuStack_100 = ppuStack_2a8;
  FUN_180627ae0(auStack_e0,&puStack_270);
  uStack_c0 = uStack_250;
  uStack_bc = uStack_24c;
  uStack_b8 = uStack_248;
  uStack_b4 = uStack_244;
  plStack_b0 = plStack_240;
  if (plStack_240 != (longlong *)0x0) {
    (**(code **)(*plStack_240 + 0x28))();
  }
  lVar6 = FUN_180299eb0(uVar1,0,&puStack_108,auStack_2b8);
  if ((lVar6 != 0) && (lVar5 != 0)) {
    uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar2 = param_1[1];
    FUN_18029fc10(uVar1,lVar2,param_2,0x30);
    FUN_18029dca0(uVar1,0xb,0x20,lVar2);
    bVar9 = (char)param_1[5] == '\0';
    plVar7 = param_1 + 2;
    if (bVar9) {
      plVar7 = param_1 + 3;
    }
    lVar2 = *plVar7;
    plVar7 = param_1 + 3;
    if (bVar9) {
      plVar7 = param_1 + 2;
    }
    lVar3 = *plVar7;
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar4 + 0x85d8) != 0) || (*(int *)(lVar4 + 0x8908) != -1)) ||
       (*(int *)(lVar4 + 0x8b08) != 0x11)) {
      ppuStack_2b0 = (undefined **)0x0;
      (**(code **)(**(longlong **)(lVar4 + 0x8400) + 200))
                (*(longlong **)(lVar4 + 0x8400),0x34,1,&ppuStack_2b0);
      (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
                (*(longlong **)(lVar4 + 0x8400),0x34,1,&ppuStack_2b0);
      *(undefined8 *)(lVar4 + 0x85d8) = 0;
      *(undefined4 *)(lVar4 + 0x8908) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x8b08) = 0x11;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
    }
    ppuStack_2a8 = &puStack_168;
    puStack_168 = &UNK_1809fcc58;
    puStack_160 = auStack_150;
    uStack_158 = 0;
    auStack_150[0] = 0;
    FUN_180049bf0(&puStack_168,&UNK_180a18d00);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_168);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1,lVar3);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,1,lVar2);
    lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (*(longlong *)(lVar3 + 0x82a0) != (longlong)**(int **)(lVar6 + 0x10)) {
      (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x228))
                (*(longlong **)(lVar3 + 0x8400),*(undefined8 *)(*(int **)(lVar6 + 0x10) + 6),0,0);
      *(longlong *)(lVar3 + 0x82a0) = (longlong)**(int **)(lVar6 + 0x10);
    }
    plVar7 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x148))(plVar7,0x10,0x10,1);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,1);
    FUN_1802c2ac0(&puStack_168);
    ppuStack_2a8 = &puStack_108;
    ppuVar8 = (undefined **)0x0;
    puStack_108 = &UNK_1809fcc58;
    ppuStack_100 = (undefined **)auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff00;
    FUN_180049bf0(&puStack_108,&UNK_180a18d10);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_108);
    lVar4 = _DAT_180c86870;
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar3 = *param_1;
    if ((lVar3 != 0) &&
       (*(undefined4 *)(lVar3 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224), lVar3 != -0x10)) {
      *(undefined4 *)(lVar3 + 0x16c) = *(undefined4 *)(lVar4 + 0x224);
      ppuVar8 = *(undefined ***)(lVar3 + 0x18);
    }
    plVar7 = *(longlong **)(lVar6 + 0x8400);
    ppuStack_2b0 = ppuVar8;
    (**(code **)(*plVar7 + 0x218))(plVar7,0,1,&ppuStack_2b0);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1,lVar2);
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (*(longlong *)(lVar6 + 0x82a0) != (longlong)**(int **)(lVar5 + 0x10)) {
      (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x228))
                (*(longlong **)(lVar6 + 0x8400),*(undefined8 *)(*(int **)(lVar5 + 0x10) + 6),0,0);
      *(longlong *)(lVar6 + 0x82a0) = (longlong)**(int **)(lVar5 + 0x10);
    }
    plVar7 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x148))(plVar7,0x10,0x10,1);
    ppuStack_2b0 = (undefined **)0x0;
    plVar7 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x218))(plVar7,0,1,&ppuStack_2b0);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1);
    FUN_1802c2ac0(&puStack_108);
  }
  if (plStack_240 != (longlong *)0x0) {
    (**(code **)(*plStack_240 + 0x38))();
  }
  ppuStack_2a8 = &puStack_270;
  puStack_270 = &UNK_180a3c3e0;
  if (lStack_268 == 0) {
    lStack_268 = 0;
    uStack_258 = uStack_258 & 0xffffffff00000000;
    puStack_270 = &UNK_18098bcb0;
    if (plStack_278 != (longlong *)0x0) {
      (**(code **)(*plStack_278 + 0x38))();
    }
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    ppuStack_2a8 = &puStack_210;
    puStack_210 = &UNK_180a3c3e0;
    if (lStack_208 == 0) {
      lStack_208 = 0;
      uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
      puStack_210 = &UNK_18098bcb0;
      if (plStack_218 != (longlong *)0x0) {
        (**(code **)(*plStack_218 + 0x38))();
      }
      FUN_1802c2ac0(&puStack_a8);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2e8);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 *
FUN_1802c6e20(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a18d68;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1802c6e70(ulonglong *param_1)
void FUN_1802c6e70(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x22) {
    puVar4[0x16] = &UNK_18098bcb0;
    puVar4[0xb] = &UNK_18098bcb0;
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802c6ef0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = param_1[1];
  if (uVar6 < (ulonglong)param_1[2]) {
    FUN_1802c7040(uVar6);
    param_1[1] = param_1[1] + 0x110;
    return param_1[1] + -0x110;
  }
  lVar3 = *param_1;
  lVar5 = (longlong)(uVar6 - lVar3) / 0x110;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) {
      lVar2 = 0;
      goto LAB_1802c6f93;
    }
  }
  lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar5 * 0x110,(char)param_1[3],uVar6,0xfffffffffffffffe);
  uVar6 = param_1[1];
  lVar3 = *param_1;
LAB_1802c6f93:
  lVar3 = FUN_1802c7c60(lVar3,uVar6,lVar2);
  FUN_1802c7040(lVar3,param_2);
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != puVar1) {
    do {
      puVar4[0x16] = &UNK_18098bcb0;
      puVar4[0xb] = &UNK_18098bcb0;
      *puVar4 = &UNK_18098bcb0;
      puVar4 = puVar4 + 0x22;
    } while (puVar4 != puVar1);
    puVar4 = (undefined8 *)*param_1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = lVar2;
    param_1[1] = lVar3 + 0x110;
    param_1[2] = lVar5 * 0x110 + lVar2;
    return lVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong FUN_1802c7040(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1800b8300();
  FUN_1800b8300(param_1 + 0x58,param_2 + 0x58,param_3,param_4,uVar1);
  FUN_1800b8300(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  return param_1;
}






