#include "TaleWorlds.Native.Split.h"

// 99_part_04_part074.c - 5 个函数

// 函数: void FUN_1802cb2f0(longlong *param_1)
void FUN_1802cb2f0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_308 [32];
  code *pcStack_2e8;
  undefined1 *puStack_2e0;
  longlong *plStack_2d8;
  longlong **pplStack_2d0;
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  longlong *plStack_2b8;
  longlong *plStack_2b0;
  longlong **pplStack_2a8;
  undefined8 uStack_2a0;
  longlong *plStack_298;
  undefined1 auStack_290 [24];
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined2 uStack_26c;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [72];
  longlong alStack_208 [16];
  undefined1 auStack_188 [336];
  ulonglong uStack_38;
  
  uStack_2a0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_308;
  plVar5 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *plVar5 = (longlong)&UNK_180a21690;
  *plVar5 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar5 + 1) = 0;
  *plVar5 = (longlong)&UNK_180a00030;
  plVar5[4] = 0;
  plVar5[2] = 0;
  *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) | 1;
  pplStack_2d0 = (longlong **)plVar5;
  pplStack_2a8 = (longlong **)plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  *(undefined4 *)(plVar5 + 2) = 0xc0;
  *(undefined1 *)(plVar5 + 3) = 1;
  lVar13 = 4;
  *(undefined4 *)((longlong)plVar5 + 0x14) = 4;
  plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  *plVar6 = (longlong)&UNK_180a21690;
  *plVar6 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar6 + 1) = 0;
  *plVar6 = (longlong)&UNK_180a00100;
  LOCK();
  *(undefined4 *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = 0;
  lVar10 = *param_1;
  pplStack_2d0 = (longlong **)plVar6;
  plStack_2b8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plStack_2b8 = *(longlong **)(lVar10 + 0x50);
  *(longlong **)(lVar10 + 0x50) = plVar6;
  if (plStack_2b8 != (longlong *)0x0) {
    (**(code **)(*plStack_2b8 + 0x38))();
  }
  uVar7 = *(undefined8 *)(*param_1 + 0x50);
  pplStack_2d0 = &plStack_2c8;
  plStack_2c8 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_180255b70(uVar7,&plStack_2c8);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
  plVar5 = (longlong *)FUN_1800842a0(uVar7);
  plStack_298 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  *(undefined4 *)(plVar5 + 2) = 0x2d;
  *(undefined2 *)((longlong)plVar5 + 0x14) = 0x10a;
  plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  puStack_268 = &UNK_1809fcc58;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0x17;
  pplStack_2d0 = (longlong **)plVar6;
  strcpy_s(auStack_250,0x40,&UNK_180a18e80);
  *plVar6 = (longlong)&UNK_180a21690;
  *plVar6 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar6 + 1) = 0;
  *plVar6 = (longlong)&UNK_180a00168;
  LOCK();
  *(undefined1 *)(plVar6 + 2) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  UNLOCK();
  plVar6[3] = 0;
  plVar6[4] = 0;
  lVar10 = *param_1;
  plStack_2b0 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plStack_2b0 = *(longlong **)(lVar10 + 0x48);
  *(longlong **)(lVar10 + 0x48) = plVar6;
  if (plStack_2b0 != (longlong *)0x0) {
    (**(code **)(*plStack_2b0 + 0x38))();
  }
  puStack_268 = &UNK_18098bcb0;
  uVar7 = *(undefined8 *)(*param_1 + 0x48);
  pplStack_2a8 = &plStack_2c0;
  plStack_2c0 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_180255880(uVar7,&plStack_2c0);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_278 = 0x10000000000;
  pcStack_2e8 = FUN_180045af0;
  FUN_1808fc838(alStack_208,8,0x10,&SUB_18005d5f0);
  plStack_2d8 = (longlong *)0x0;
  puStack_2e0 = auStack_188;
  FUN_180206da0(*(longlong *)(*param_1 + 0x48),
                *(undefined8 *)(*(longlong *)(*param_1 + 0x48) + 0x18),&uStack_278,alStack_208);
  pcStack_2e8 = (code *)auStack_290;
  FUN_1802072b0(*(longlong *)(*param_1 + 0x50),
                *(undefined8 *)(*(longlong *)(*param_1 + 0x50) + 0x18),&plStack_2d8);
  plVar5 = plStack_2d8;
  puVar12 = (undefined8 *)plStack_2d8[2];
  puVar9 = (undefined8 *)&UNK_180993030;
  puVar4 = *(undefined8 **)(alStack_208[*(int *)(_DAT_180c86938 + 0x120c)] + 0x10);
  do {
    puVar11 = puVar4;
    puVar8 = puVar9;
    uVar7 = puVar8[1];
    *puVar11 = *puVar8;
    puVar11[1] = uVar7;
    uVar7 = puVar8[3];
    puVar11[2] = puVar8[2];
    puVar11[3] = uVar7;
    uVar7 = puVar8[5];
    puVar11[4] = puVar8[4];
    puVar11[5] = uVar7;
    uVar7 = puVar8[7];
    puVar11[6] = puVar8[6];
    puVar11[7] = uVar7;
    uVar7 = puVar8[9];
    puVar11[8] = puVar8[8];
    puVar11[9] = uVar7;
    uVar7 = puVar8[0xb];
    puVar11[10] = puVar8[10];
    puVar11[0xb] = uVar7;
    uVar7 = puVar8[0xd];
    puVar11[0xc] = puVar8[0xc];
    puVar11[0xd] = uVar7;
    uVar7 = puVar8[0xf];
    puVar11[0xe] = puVar8[0xe];
    puVar11[0xf] = uVar7;
    lVar13 = lVar13 + -1;
    puVar9 = puVar8 + 0x10;
    puVar4 = puVar11 + 0x10;
  } while (lVar13 != 0);
  uVar7 = puVar8[0x11];
  puVar11[0x10] = puVar8[0x10];
  puVar11[0x11] = uVar7;
  puVar11[0x12] = puVar8[0x12];
  *(undefined4 *)(puVar11 + 0x13) = *(undefined4 *)(puVar8 + 0x13);
  puVar9 = (undefined8 *)&UNK_180993250;
  lVar10 = 6;
  do {
    uVar7 = puVar9[1];
    *puVar12 = *puVar9;
    puVar12[1] = uVar7;
    uVar7 = puVar9[3];
    puVar12[2] = puVar9[2];
    puVar12[3] = uVar7;
    uVar7 = puVar9[5];
    puVar12[4] = puVar9[4];
    puVar12[5] = uVar7;
    uVar7 = puVar9[7];
    puVar12[6] = puVar9[6];
    puVar12[7] = uVar7;
    uVar7 = puVar9[9];
    puVar12[8] = puVar9[8];
    puVar12[9] = uVar7;
    uVar7 = puVar9[0xb];
    puVar12[10] = puVar9[10];
    puVar12[0xb] = uVar7;
    uVar1 = *(undefined4 *)((longlong)puVar9 + 100);
    uVar2 = *(undefined4 *)(puVar9 + 0xd);
    uVar3 = *(undefined4 *)((longlong)puVar9 + 0x6c);
    *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar9 + 0xc);
    *(undefined4 *)((longlong)puVar12 + 100) = uVar1;
    *(undefined4 *)(puVar12 + 0xd) = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar9 + 0x74);
    uVar2 = *(undefined4 *)(puVar9 + 0xf);
    uVar3 = *(undefined4 *)((longlong)puVar9 + 0x7c);
    *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar9 + 0xe);
    *(undefined4 *)((longlong)puVar12 + 0x74) = uVar1;
    *(undefined4 *)(puVar12 + 0xf) = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x7c) = uVar3;
    puVar9 = puVar9 + 0x10;
    lVar10 = lVar10 + -1;
    puVar12 = puVar12 + 0x10;
  } while (lVar10 != 0);
  FUN_180207110(*(longlong *)(*param_1 + 0x48),
                *(undefined8 *)(*(longlong *)(*param_1 + 0x48) + 0x18),alStack_208);
  FUN_180207400(*(longlong *)(*param_1 + 0x50),
                *(undefined8 *)(*(longlong *)(*param_1 + 0x50) + 0x18),&plStack_2d8);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  FUN_1808fc8a8(alStack_208,8,0x10,FUN_180045af0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_308);
}



// WARNING: Removing unreachable block (ram,0x0001802cb909)

undefined8 FUN_1802cb7a0(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined1 auStackX_18 [8];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_d0;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *plStack_28;
  
  uStack_88 = 0xfffffffffffffffe;
  auStackX_18[0] = 0;
  uStack_98 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    uStack_98 = FUN_180240430(param_1,param_2,1);
  }
  uStack_90 = 0;
  puStack_d0 = &UNK_180a3c3e0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  plStack_a0 = (longlong *)0x0;
  uStack_6c = CONCAT22(uStack_8a,param_3);
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x15b8);
  uStack_f0 = (undefined4)uStack_98;
  uStack_ec = (undefined4)((ulonglong)uStack_98 >> 0x20);
  uStack_78 = uStack_f0;
  uStack_74 = uStack_ec;
  uStack_70 = 0;
  uStack_68 = 2;
  uStack_60 = 0;
  uStack_8c = param_3;
  lStack_80 = param_1;
  FUN_180627ae0(auStack_58,&puStack_d0);
  uStack_38 = uStack_b0;
  uStack_34 = uStack_ac;
  uStack_30 = uStack_a8;
  uStack_2c = uStack_a4;
  plStack_28 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))();
  }
  uVar1 = FUN_180299eb0(uVar1,0,&lStack_80,auStackX_18);
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  puStack_d0 = &UNK_180a3c3e0;
  if (lStack_c8 == 0) {
    return uVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802cb930(undefined8 param_1,undefined8 *param_2)
void FUN_1802cb930(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_298 [32];
  undefined4 uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_268 [4];
  uint auStack_264 [3];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [72];
  undefined8 *puStack_148;
  undefined8 **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 *apuStack_130 [4];
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [40];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_1b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  FUN_1802c22a0(auStack_268,&UNK_180a19018);
  ppuStack_230 = &puStack_98;
  puStack_98 = &UNK_1809fcc58;
  puStack_90 = auStack_80;
  uStack_88 = 0;
  auStack_80[0] = 0;
  FUN_180049bf0(&puStack_98,&UNK_180a18ff8);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_98);
  puStack_148 = (undefined8 *)&UNK_18098bc80;
  ppuStack_140 = apuStack_130;
  apuStack_130[0] = (undefined8 *)((ulonglong)apuStack_130[0] & 0xffffffffffffff00);
  lVar7 = 0x10;
  puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,0x10);
  strcpy_s(apuStack_130,0x20,&UNK_180a0db88);
  uStack_220 = FUN_1802cb7a0(*param_2,&puStack_148,0);
  puStack_148 = (undefined8 *)&UNK_18098bcb0;
  puStack_110 = &UNK_18098bc80;
  puStack_108 = auStack_f8;
  auStack_f8[0] = 0;
  uStack_100 = 0x11;
  strcpy_s(auStack_f8,0x20,&UNK_180a0dba0);
  lVar5 = FUN_1802cb7a0(*param_2,&puStack_110,0);
  puStack_110 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bc80;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x1c;
  strcpy_s(auStack_190,0x20,&UNK_180a0dc18);
  uStack_228 = FUN_1802cb7a0(*param_2,&puStack_1a8,0);
  puStack_1a8 = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bc80;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x18;
  strcpy_s(auStack_c0,0x20,&UNK_180a0dc38);
  lVar6 = FUN_1802cb7a0(*param_2,&puStack_d8,0);
  puStack_d8 = &UNK_18098bcb0;
  uStack_278 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,param_2[0xb],0x20);
  auStack_264[0] = *(uint *)((longlong)param_2 + 0x2e4);
  FUN_1802c22a0(auStack_268,&UNK_180a18fe8);
  puStack_1c0 = &uStack_228;
  ppuStack_140 = (undefined8 **)auStack_264;
  apuStack_130[0] = &uStack_220;
  puStack_1d0 = param_2;
  puStack_1c8 = param_2;
  puStack_148 = param_2;
  puStack_138 = param_2;
  if (*(char *)(param_2 + 0x5c) == '\0') {
    lVar5 = 2;
    do {
      FUN_1802cc270(&puStack_1d0);
      FUN_1802cc500(&puStack_148);
      auStack_264[0] = (uint)(auStack_264[0] == 0);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    FUN_1802c22a0(auStack_268,&UNK_180a190a4);
    ppuStack_230 = &puStack_1a8;
    puStack_1a8 = &UNK_1809fcc58;
    puStack_1a0 = auStack_190;
    uStack_198 = 0;
    auStack_190[0] = 0;
    FUN_180049bf0(&puStack_1a8,&UNK_180a19080);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_1a8);
    uStack_210 = param_2[4];
    uStack_218 = 4;
    uStack_208 = 1;
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
    uStack_1f8 = param_2[(longlong)(int)auStack_264[0] + 5];
    uStack_200 = 1;
    uStack_1f0 = 1;
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1);
    uStack_1e0 = param_2[7];
    uStack_1e8 = 2;
    uStack_1d8 = 1;
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,1);
    uStack_258 = param_2[3];
    auStack_264[1] = 3;
    auStack_264[2] = 0;
    uStack_250 = 1;
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,1);
    uStack_240 = param_2[(longlong)(int)(1 - auStack_264[0]) + 5];
    uStack_248 = 5;
    uStack_238 = 1;
    FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),5,1);
    uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    uVar2 = param_2[8];
    FUN_18029fc10(uVar1,uVar2,param_2 + 0x10,0x260);
    FUN_18029dca0(uVar1,0xb,0x20,uVar2);
    lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if ((lVar5 != 0) && (*(longlong *)(lVar3 + 0x82a0) != (longlong)**(int **)(lVar5 + 0x10))) {
      (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x228))
                (*(longlong **)(lVar3 + 0x8400),*(undefined8 *)(*(int **)(lVar5 + 0x10) + 6),0,0);
      *(longlong *)(lVar3 + 0x82a0) = (longlong)**(int **)(lVar5 + 0x10);
    }
    plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar4 + 0x148))(plVar4,1,1,1);
    uStack_270 = 1;
    uStack_278 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),5,1);
    uStack_270 = 1;
    uStack_278 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,1);
    uStack_270 = 1;
    uStack_278 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,1,0);
    uStack_270 = 1;
    uStack_278 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1);
    uStack_270 = 1;
    uStack_278 = 0xffffffff;
    FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
    FUN_1802cc500(&puStack_148);
    do {
      auStack_264[0] = (uint)(auStack_264[0] == 0);
      FUN_1802cc270(&puStack_1d0);
      FUN_1802cc500(&puStack_148);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    FUN_1802c2ac0(&puStack_1a8);
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
  }
  FUN_1802c22a0(auStack_268,&UNK_180a19068);
  ppuStack_230 = &puStack_1a8;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  uStack_198 = 0;
  auStack_190[0] = 0;
  FUN_180049bf0(&puStack_1a8,&UNK_180a19048);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_1a8);
  uStack_240 = param_2[4];
  uStack_248 = 4;
  uStack_238 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
  uStack_258 = param_2[3];
  auStack_264[1] = 3;
  auStack_264[2] = 0;
  uStack_250 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,1);
  uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
  uVar2 = param_2[8];
  FUN_18029fc10(uVar1,uVar2,param_2 + 0x10,0x260);
  FUN_18029dca0(uVar1,0xb,0x20,uVar2);
  lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if ((lVar6 != 0) && (*(longlong *)(lVar5 + 0x82a0) != (longlong)**(int **)(lVar6 + 0x10))) {
    (**(code **)(**(longlong **)(lVar5 + 0x8400) + 0x228))
              (*(longlong **)(lVar5 + 0x8400),*(undefined8 *)(*(int **)(lVar6 + 0x10) + 6),0,0);
    *(longlong *)(lVar5 + 0x82a0) = (longlong)**(int **)(lVar6 + 0x10);
  }
  plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar4 + 0x148))(plVar4,1,1,1);
  uStack_270 = 1;
  uStack_278 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,1);
  uStack_270 = 1;
  uStack_278 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
  FUN_1802c2ac0(&puStack_1a8);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  FUN_1802c2ac0(&puStack_98);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802cc270(longlong *param_1)
void FUN_1802cc270(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  FUN_1802c22a0(auStack_c8,&UNK_180a18fb0);
  ppuStack_88 = &puStack_78;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  FUN_180049bf0(&puStack_78,&UNK_180a18f90);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_78);
  uStack_b8 = *(undefined8 *)(*param_1 + 0x20);
  uStack_c0 = 4;
  uStack_b0 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
  uStack_a0 = *(undefined8 *)(*param_1 + 0x18);
  uStack_a8 = 3;
  uStack_98 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,1);
  uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
  uVar2 = *(undefined8 *)(*param_1 + 0x40);
  FUN_18029fc10(uVar1,uVar2,param_1[1] + 0x80,0x260);
  FUN_18029dca0(uVar1,0xb,0x20,uVar2);
  lVar3 = *(longlong *)param_1[2];
  lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if ((lVar3 != 0) && (*(longlong *)(lVar4 + 0x82a0) != (longlong)**(int **)(lVar3 + 0x10))) {
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x228))
              (*(longlong **)(lVar4 + 0x8400),*(undefined8 *)(*(int **)(lVar3 + 0x10) + 6),0,0);
    *(longlong *)(lVar4 + 0x82a0) = (longlong)**(int **)(lVar3 + 0x10);
  }
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 0x148))(plVar5,1,1,1);
  uStack_d0 = 1;
  uStack_d8 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,1);
  uStack_d0 = 1;
  uStack_d8 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
  FUN_1802c2ac0(&puStack_78);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802cc500(longlong *param_1)
void FUN_1802cc500(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined4 uStack_108;
  undefined1 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  FUN_1802c22a0(auStack_f8,&UNK_180a18f80);
  ppuStack_88 = &puStack_78;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  FUN_180049bf0(&puStack_78,&UNK_180a19028);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_78);
  uStack_e8 = *(undefined8 *)(*param_1 + 0x20);
  uStack_f0 = 4;
  uStack_e0 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
  uStack_d0 = *(undefined8 *)(*param_1 + 0x28 + (longlong)*(int *)param_1[1] * 8);
  uStack_d8 = 1;
  uStack_c8 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1);
  uStack_b8 = *(undefined8 *)(*param_1 + 0x38);
  uStack_c0 = 2;
  uStack_b0 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,1);
  uStack_a0 = *(undefined8 *)(*param_1 + 0x28 + (longlong)(1 - *(int *)param_1[1]) * 8);
  uStack_a8 = 5;
  uStack_98 = 1;
  FUN_18029d930(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),5,1);
  uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
  uVar2 = *(undefined8 *)(*param_1 + 0x40);
  FUN_18029fc10(uVar1,uVar2,param_1[2] + 0x80,0x260);
  FUN_18029dca0(uVar1,0xb,0x20,uVar2);
  lVar3 = *(longlong *)param_1[3];
  lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if ((lVar3 != 0) && (*(longlong *)(lVar4 + 0x82a0) != (longlong)**(int **)(lVar3 + 0x10))) {
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x228))
              (*(longlong **)(lVar4 + 0x8400),*(undefined8 *)(*(int **)(lVar3 + 0x10) + 6),0,0);
    *(longlong *)(lVar4 + 0x82a0) = (longlong)**(int **)(lVar3 + 0x10);
  }
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 0x150))(plVar5,*(undefined8 *)(*(longlong *)(*param_1 + 0x18) + 0x10),0);
  uStack_100 = 1;
  uStack_108 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),5,1);
  uStack_100 = 1;
  uStack_108 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,1);
  uStack_100 = 1;
  uStack_108 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,1);
  uStack_100 = 1;
  uStack_108 = 0xffffffff;
  FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4,1);
  FUN_1802c2ac0(&puStack_78);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802cc890(undefined8 param_1,longlong param_2)
void FUN_1802cc890(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_3e8 [48];
  undefined1 auStack_3b8 [80];
  undefined **ppuStack_368;
  undefined8 uStack_358;
  undefined8 auStack_348 [76];
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_358 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_3e8;
  FUN_1802c22a0(auStack_3b8,&UNK_180a190e0);
  ppuStack_368 = &puStack_a8;
  puStack_a8 = &UNK_1809fcc58;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  FUN_180049bf0(&puStack_a8,&UNK_180a190c0);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_a8);
  lVar9 = 4;
  puVar7 = auStack_348;
  puVar4 = (undefined8 *)(param_2 + 0x80);
  do {
    puVar8 = puVar4;
    puVar6 = puVar7;
    uVar3 = puVar8[1];
    *puVar6 = *puVar8;
    puVar6[1] = uVar3;
    uVar3 = puVar8[3];
    puVar6[2] = puVar8[2];
    puVar6[3] = uVar3;
    uVar3 = puVar8[5];
    puVar6[4] = puVar8[4];
    puVar6[5] = uVar3;
    uVar3 = puVar8[7];
    puVar6[6] = puVar8[6];
    puVar6[7] = uVar3;
    uVar3 = puVar8[9];
    puVar6[8] = puVar8[8];
    puVar6[9] = uVar3;
    uVar3 = puVar8[0xb];
    puVar6[10] = puVar8[10];
    puVar6[0xb] = uVar3;
    uVar3 = puVar8[0xd];
    puVar6[0xc] = puVar8[0xc];
    puVar6[0xd] = uVar3;
    uVar3 = puVar8[0xf];
    puVar6[0xe] = puVar8[0xe];
    puVar6[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar7 = puVar6 + 0x10;
    puVar4 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar3 = puVar8[0x11];
  puVar6[0x10] = puVar8[0x10];
  puVar6[0x11] = uVar3;
  uVar3 = puVar8[0x13];
  puVar6[0x12] = puVar8[0x12];
  puVar6[0x13] = uVar3;
  uVar3 = puVar8[0x15];
  puVar6[0x14] = puVar8[0x14];
  puVar6[0x15] = uVar3;
  uVar3 = puVar8[0x17];
  puVar6[0x16] = puVar8[0x16];
  puVar6[0x17] = uVar3;
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0xc4);
  uVar1 = *(undefined4 *)(puVar8 + 0x19);
  uVar2 = *(undefined4 *)((longlong)puVar8 + 0xcc);
  *(undefined4 *)(puVar6 + 0x18) = *(undefined4 *)(puVar8 + 0x18);
  *(undefined4 *)((longlong)puVar6 + 0xc4) = uVar5;
  *(undefined4 *)(puVar6 + 0x19) = uVar1;
  *(undefined4 *)((longlong)puVar6 + 0xcc) = uVar2;
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0xd4);
  uVar1 = *(undefined4 *)(puVar8 + 0x1b);
  uVar2 = *(undefined4 *)((longlong)puVar8 + 0xdc);
  *(undefined4 *)(puVar6 + 0x1a) = *(undefined4 *)(puVar8 + 0x1a);
  *(undefined4 *)((longlong)puVar6 + 0xd4) = uVar5;
  *(undefined4 *)(puVar6 + 0x1b) = uVar1;
  *(undefined4 *)((longlong)puVar6 + 0xdc) = uVar2;
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  puStack_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  puVar7 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar7 = 0;
  puStack_e0 = puVar7;
  uVar5 = FUN_18064e990(puVar7);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
  *puVar7 = 0x70614d646c726f57;
  *(undefined1 *)(puVar7 + 1) = 0;
  uStack_d8 = 8;
  FUN_180177c00(_DAT_180c8a9d0,&puStack_e8);
  puStack_e8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




