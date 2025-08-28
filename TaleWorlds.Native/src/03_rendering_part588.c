#include "TaleWorlds.Native.Split.h"

// 03_rendering_part588.c - 1 个函数

// 函数: void FUN_18058e430(longlong *param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5
void FUN_18058e430(longlong *param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5
                  ,longlong *param_6,undefined4 param_7,longlong *param_8,longlong *param_9,
                  undefined4 param_10,undefined1 param_11)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_2b8 [32];
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  longlong **pplStack_280;
  longlong **pplStack_278;
  undefined4 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_258;
  uint uStack_254;
  longlong *plStack_250;
  undefined4 uStack_248;
  longlong *plStack_240;
  longlong *plStack_238;
  longlong **pplStack_230;
  longlong *plStack_228;
  longlong lStack_220;
  longlong *plStack_218;
  undefined8 uStack_210;
  longlong *plStack_208;
  undefined *puStack_1f8;
  ulonglong *puStack_1f0;
  undefined8 uStack_1e8;
  ulonglong auStack_1e0 [8];
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *plStack_98;
  ulonglong uStack_58;
  ulonglong uVar13;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  uVar11 = (ulonglong)param_4;
  lStack_220 = param_5;
  plStack_238 = param_6;
  plStack_208 = param_8;
  plStack_240 = param_9;
  uStack_248 = param_10;
  uStack_258 = param_11;
  uStack_254 = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0xfc);
  uVar4 = FUN_180590b50(param_2,&puStack_158);
  FUN_18058ed20(param_1 + 0x20,uVar4);
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  if (plStack_128 != (longlong *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (plStack_130 != (longlong *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (plStack_138 != (longlong *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  plVar1 = param_1 + 0x1a;
  uVar9 = (ulonglong)(int)param_4;
  uVar13 = (param_1[0x1b] - *plVar1) / 0xa0;
  if (uVar13 < uVar9) {
    FUN_1805906f0(plVar1,uVar9 - uVar13);
  }
  else {
    param_1[0x1b] = uVar9 * 0xa0 + *plVar1;
  }
  if (0 < (int)param_4) {
    lVar10 = 0;
    do {
      func_0x0001805905f0(*plVar1 + lVar10,lVar10 + param_3);
      lVar10 = lVar10 + 0xa0;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar12 = uStack_1e8._4_4_;
  *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x114);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(param_2 + 0x11e);
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)((longlong)param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x174);
  uVar4 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar4;
  lVar10 = *(longlong *)(param_2 + 400);
  param_1[0x15] = *(longlong *)(param_2 + 0x188);
  param_1[0x16] = lVar10;
  uVar11 = 0;
  puStack_1f8 = &UNK_1809fcc28;
  puStack_1f0 = auStack_1e0;
  uStack_1e8 = (ulonglong)uStack_1e8._4_4_ << 0x20;
  auStack_1e0[0] = auStack_1e0[0] & 0xffffffffffffff00;
  if (param_2 + 0x1a0 != 0) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(param_2 + 0x1a0 + lVar10) != '\0');
    uStack_1e8 = CONCAT44(uVar12,(int)lVar10);
    strcpy_s(auStack_1e0,0x80);
  }
  uVar3 = FUN_1800c17c0();
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  puStack_1f8 = &UNK_18098bcb0;
  plVar8 = *(longlong **)(param_2 + 0xa0);
  if (plVar8 != (longlong *)0x0) {
    plStack_250 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  plStack_250 = (longlong *)param_1[7];
  param_1[7] = (longlong)plVar8;
  if (plStack_250 != (longlong *)0x0) {
    (**(code **)(*plStack_250 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x238);
  lVar10 = param_1[2];
  uVar13 = uVar11;
  if (param_1[3] - lVar10 >> 3 != 0) {
    do {
      lVar10 = *(longlong *)(uVar11 + lVar10);
      if (lVar10 != 0) {
        FUN_18058f420(lVar10);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar10);
      }
      *(undefined8 *)(uVar11 + param_1[2]) = 0;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar11 = uVar11 + 8;
      lVar10 = param_1[2];
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(param_1[3] - lVar10 >> 3));
  }
  param_1[3] = lVar10;
  if (*(int *)(lStack_220 + 0xfc) < 0) {
    *param_1 = 0;
  }
  else {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x1f8,8,3);
    lVar5 = FUN_18058f390(uVar4);
    *param_1 = lVar5;
    pplStack_230 = &plStack_228;
    lVar10 = *param_8;
    if ((lVar10 == 0) ||
       (*(longlong *)(lVar10 + 0x1c8) - (longlong)*(undefined8 **)(lVar10 + 0x1c0) >> 3 == 0)) {
      plStack_218 = (longlong *)0x0;
      pplVar6 = &plStack_218;
      uVar12 = 2;
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)**(undefined8 **)(lVar10 + 0x1c0);
      plStack_250 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      pplVar6 = &plStack_250;
      uVar12 = 1;
    }
    plStack_228 = plVar8;
    *pplVar6 = (longlong *)0x0;
    uStack_268 = 0;
    uStack_270 = 0xffffffff;
    pplStack_278 = (longlong **)0x0;
    pplStack_280 = &plStack_228;
    uStack_288 = (longlong **)((ulonglong)uStack_288._4_4_ << 0x20);
    ppuStack_290 = (undefined **)0x0;
    ppuStack_298 = (undefined **)&UNK_180a30990;
    uStack_254 = uVar12;
    FUN_18058e430(lVar5,lStack_220,plStack_238,param_7);
    if (((uVar12 & 2) != 0) &&
       (uVar12 = uVar12 & 0xfffffffd, uStack_254 = uVar12, plStack_218 != (longlong *)0x0)) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    if (((uVar12 & 1) != 0) && (uStack_254 = uVar12 & 0xfffffffe, plStack_250 != (longlong *)0x0)) {
      (**(code **)(*plStack_250 + 0x38))();
    }
  }
  plVar8 = plStack_240;
  if (((int)param_1[6] < 1) ||
     (((*(ulonglong *)((longlong)(int)param_1[0x1e] * 0xa0 + 0x50 + *plVar1) & 0x200) != 0 &&
      ((short)param_1[1] < 1)))) {
    if (plStack_240 != (longlong *)0x0) {
      pplStack_230 = &plStack_240;
      plStack_240 = (longlong *)0x0;
      puStack_1f8 = (undefined *)0x3f800000;
      puStack_1f0 = (ulonglong *)0x0;
      uStack_1e8 = 0x3f80000000000000;
      auStack_1e0[0] = 0;
      auStack_1e0[1] = 0;
      auStack_1e0[2] = 0x3f800000;
      auStack_1e0[3] = 0;
      auStack_1e0[4] = 0x3f80000000000000;
      auStack_1e0[5] = 0;
      auStack_1e0[6] = 0;
      auStack_1e0[7] = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_194 = 0x64ffffffff;
      uStack_18c = 100;
      uStack_184 = 0;
      uStack_17c = 0;
      uStack_178 = 100;
      uStack_174 = 0;
      uStack_16c = 0;
      uStack_164 = 0;
      uStack_15c = 0;
      puStack_158 = (undefined *)0x3f800000;
      uStack_150 = 0;
      uStack_148 = 0x3f80000000000000;
      uStack_140 = 0;
      plStack_138 = (longlong *)0x0;
      plStack_130 = (longlong *)0x3f800000;
      plStack_128 = (longlong *)0x0;
      plStack_120 = (longlong *)0x3f80000000000000;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0xffffffff;
      uStack_f0 = 100;
      uStack_ec = 100;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 100;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      pplStack_278 = (longlong **)0x0;
      pplStack_280 = (longlong **)CONCAT71(pplStack_280._1_7_,uStack_258);
      uStack_288 = &plStack_240;
      ppuStack_290 = &puStack_1f8;
      ppuStack_298 = &puStack_158;
      FUN_180540960(plVar8,uStack_248,0,0);
    }
  }
  else if (plStack_240 != (longlong *)0x0) {
    pplStack_230 = &plStack_250;
    plStack_250 = (longlong *)*param_8;
    if (plStack_250 != (longlong *)0x0) {
      (**(code **)(*plStack_250 + 0x28))();
    }
    lVar10 = *param_1;
    if (lVar10 == 0) {
      puStack_1f8 = (undefined *)0x3f800000;
      puStack_1f0 = (ulonglong *)0x0;
      uStack_1e8 = 0x3f80000000000000;
      auStack_1e0[0] = 0;
      auStack_1e0[1] = 0;
      auStack_1e0[2] = 0x3f800000;
      auStack_1e0[3] = 0;
      auStack_1e0[4] = 0x3f80000000000000;
      auStack_1e0[5] = 0;
      auStack_1e0[6] = 0;
      auStack_1e0[7] = 0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      uStack_194 = 0x64ffffffff;
      uStack_18c = 100;
      uStack_184 = 0;
      uStack_17c = 0;
      uStack_178 = 100;
      uStack_174 = 0;
      uStack_16c = 0;
      uStack_164 = 0;
      uStack_15c = 0;
      ppuStack_290 = &puStack_1f8;
    }
    else {
      puVar7 = (undefined8 *)
               ((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + *(longlong *)(lVar10 + 0xd0));
      puStack_158 = (undefined *)*puVar7;
      uStack_150 = puVar7[1];
      uStack_148 = puVar7[2];
      uStack_140 = puVar7[3];
      plStack_138 = (longlong *)puVar7[4];
      plStack_130 = (longlong *)puVar7[5];
      plStack_128 = (longlong *)puVar7[6];
      plStack_120 = (longlong *)puVar7[7];
      uStack_118 = puVar7[8];
      uStack_110 = puVar7[9];
      uStack_108 = puVar7[10];
      uStack_100 = (undefined4)puVar7[0xb];
      uStack_fc = (undefined4)((ulonglong)puVar7[0xb] >> 0x20);
      uStack_f8 = (undefined4)puVar7[0xc];
      uStack_f4 = (undefined4)((ulonglong)puVar7[0xc] >> 0x20);
      uStack_f0 = (undefined4)puVar7[0xd];
      uStack_ec = (undefined4)((ulonglong)puVar7[0xd] >> 0x20);
      uStack_e8 = (undefined4)puVar7[0xe];
      uStack_e4 = (undefined4)((ulonglong)puVar7[0xe] >> 0x20);
      uStack_e0 = (undefined4)puVar7[0xf];
      uStack_dc = (undefined4)((ulonglong)puVar7[0xf] >> 0x20);
      uStack_d8 = (undefined4)puVar7[0x10];
      uStack_d4 = (undefined4)((ulonglong)puVar7[0x10] >> 0x20);
      uStack_d0 = (undefined4)puVar7[0x11];
      uStack_cc = (undefined4)((ulonglong)puVar7[0x11] >> 0x20);
      uStack_c8 = (undefined4)puVar7[0x12];
      uStack_c4 = (undefined4)((ulonglong)puVar7[0x12] >> 0x20);
      uStack_c0 = (undefined4)puVar7[0x13];
      uStack_bc = (undefined4)((ulonglong)puVar7[0x13] >> 0x20);
      ppuStack_290 = &puStack_158;
    }
    ppuStack_298 = (undefined **)((longlong)(int)param_1[0x1e] * 0xa0 + *plVar1);
    lVar5 = lVar10 + 0x100;
    if (lVar10 == 0) {
      lVar5 = 0;
    }
    pplStack_278 = &plStack_238;
    pplStack_280 = (longlong **)CONCAT71(pplStack_280._1_7_,uStack_258);
    uStack_288 = &plStack_250;
    lVar10 = FUN_180540960(plVar8,uStack_248,param_1 + 0x20,lVar5);
    param_1[0x1f] = lVar10;
    if (((*(uint *)((longlong)(int)param_1[0x1e] * 0xa0 + 0x50 + *plVar1) >> 8 & 1) == 0) ||
       (0 < (short)param_1[1])) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(lVar10 + 0x126) = uVar2;
    FUN_18058e3b0(param_1);
    if (*param_1 != 0) {
      *(longlong **)(*param_1 + 0xf8) = plStack_238;
      lVar10 = *param_1;
      if (((*(uint *)((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar10 + 0xd0)
                     ) >> 8 & 1) == 0) || (0 < *(short *)(lVar10 + 8))) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)((longlong)plStack_238 + 0x126) = uVar2;
      FUN_18058e3b0(*param_1);
    }
    lVar10 = FUN_18058fdf0(*(undefined8 *)(param_2 + 0xa8));
    param_1[8] = lVar10;
    goto LAB_18058ecd4;
  }
  pplStack_230 = (longlong **)param_1[8];
  if (pplStack_230 != (longlong **)0x0) {
    plStack_238 = (longlong *)pplStack_230 + 0x11;
    if (*plStack_238 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*pplStack_230 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pplStack_230);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = 0;
  param_1[0x1f] = 0;
  pplStack_230 = (longlong **)0x0;
LAB_18058ecd4:
  if ((longlong *)*param_8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2b8);
}



undefined4 * FUN_18058ed20(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  plVar2 = *(longlong **)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  plVar2 = *(longlong **)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  plVar2 = *(longlong **)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x43) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)((longlong)param_1 + 0x46) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x47) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4b) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x4e) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x57);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  *(undefined1 *)((longlong)param_1 + 0x5e) = *(undefined1 *)((longlong)param_2 + 0x5e);
  *(undefined1 *)((longlong)param_1 + 0x5f) = *(undefined1 *)((longlong)param_2 + 0x5f);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x65);
  *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
  *(undefined1 *)((longlong)param_1 + 0x67) = *(undefined1 *)((longlong)param_2 + 0x67);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
  *(undefined1 *)((longlong)param_1 + 0x6a) = *(undefined1 *)((longlong)param_2 + 0x6a);
  *(undefined1 *)((longlong)param_1 + 0x6b) = *(undefined1 *)((longlong)param_2 + 0x6b);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)param_2 + 0x6d);
  *(undefined1 *)((longlong)param_1 + 0x6e) = *(undefined1 *)((longlong)param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x6f) = *(undefined1 *)((longlong)param_2 + 0x6f);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x77) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)((longlong)param_1 + 0x7f) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x89);
  *(undefined1 *)((longlong)param_1 + 0x8a) = *(undefined1 *)((longlong)param_2 + 0x8a);
  *(undefined1 *)((longlong)param_1 + 0x8b) = *(undefined1 *)((longlong)param_2 + 0x8b);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x8d) = *(undefined1 *)((longlong)param_2 + 0x8d);
  *(undefined1 *)((longlong)param_1 + 0x8e) = *(undefined1 *)((longlong)param_2 + 0x8e);
  *(undefined1 *)((longlong)param_1 + 0x8f) = *(undefined1 *)((longlong)param_2 + 0x8f);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x95) = *(undefined1 *)((longlong)param_2 + 0x95);
  *(undefined1 *)((longlong)param_1 + 0x96) = *(undefined1 *)((longlong)param_2 + 0x96);
  *(undefined1 *)((longlong)param_1 + 0x97) = *(undefined1 *)((longlong)param_2 + 0x97);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined1 *)((longlong)param_1 + 0x9a) = *(undefined1 *)((longlong)param_2 + 0x9a);
  *(undefined1 *)((longlong)param_1 + 0x9b) = *(undefined1 *)((longlong)param_2 + 0x9b);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)((longlong)param_2 + 0x9d);
  *(undefined1 *)((longlong)param_1 + 0x9e) = *(undefined1 *)((longlong)param_2 + 0x9e);
  *(undefined1 *)((longlong)param_1 + 0x9f) = *(undefined1 *)((longlong)param_2 + 0x9f);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_2 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_2 + 0xa2);
  *(undefined1 *)((longlong)param_1 + 0xa3) = *(undefined1 *)((longlong)param_2 + 0xa3);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(undefined1 *)((longlong)param_1 + 0xa6) = *(undefined1 *)((longlong)param_2 + 0xa6);
  *(undefined1 *)((longlong)param_1 + 0xa7) = *(undefined1 *)((longlong)param_2 + 0xa7);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 0xab);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0xad) = *(undefined1 *)((longlong)param_2 + 0xad);
  *(undefined1 *)((longlong)param_1 + 0xae) = *(undefined1 *)((longlong)param_2 + 0xae);
  *(undefined1 *)((longlong)param_1 + 0xaf) = *(undefined1 *)((longlong)param_2 + 0xaf);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_2 + 0xb1);
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_2 + 0xb2);
  *(undefined1 *)((longlong)param_1 + 0xb3) = *(undefined1 *)((longlong)param_2 + 0xb3);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0xb5) = *(undefined1 *)((longlong)param_2 + 0xb5);
  *(undefined1 *)((longlong)param_1 + 0xb6) = *(undefined1 *)((longlong)param_2 + 0xb6);
  *(undefined1 *)((longlong)param_1 + 0xb7) = *(undefined1 *)((longlong)param_2 + 0xb7);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined1 *)((longlong)param_1 + 0xbd) = *(undefined1 *)((longlong)param_2 + 0xbd);
  *(undefined1 *)((longlong)param_1 + 0xbe) = *(undefined1 *)((longlong)param_2 + 0xbe);
  *(undefined1 *)((longlong)param_1 + 0xbf) = *(undefined1 *)((longlong)param_2 + 0xbf);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  plVar2 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  uVar1 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}



undefined8 * FUN_18058f390(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  param_1[7] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  FUN_1805909a0(param_1 + 0x20);
  param_1[0x1f] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  FUN_18058fb50(param_1);
  return param_1;
}





