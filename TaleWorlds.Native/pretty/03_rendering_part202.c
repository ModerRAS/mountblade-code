#include "TaleWorlds.Native.Split.h"

// 03_rendering_part202.c - 1 个函数

// 函数: void FUN_180385230(longlong param_1)
void FUN_180385230(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int *piVar5;
  longlong **pplVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  longlong **pplVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar24;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_578 [32];
  undefined4 uStack_558;
  undefined4 uStack_550;
  undefined4 uStack_548;
  undefined4 uStack_540;
  int iStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  undefined4 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_510;
  longlong *plStack_508;
  longlong **pplStack_500;
  longlong *plStack_4f8;
  longlong ***ppplStack_4f0;
  longlong **pplStack_4e8;
  longlong **pplStack_4e0;
  longlong *plStack_4d8;
  int *piStack_4d0;
  int *piStack_4c8;
  int *piStack_4c0;
  undefined4 uStack_4b8;
  longlong *plStack_4b0;
  undefined **ppuStack_4a8;
  longlong ***ppplStack_4a0;
  longlong **pplStack_498;
  longlong *plStack_490;
  longlong *plStack_488;
  undefined8 uStack_480;
  longlong *plStack_478;
  longlong *plStack_470;
  longlong *plStack_468;
  undefined8 uStack_460;
  longlong *plStack_458;
  longlong *plStack_450;
  longlong *plStack_448;
  undefined8 uStack_440;
  longlong *plStack_438;
  undefined **ppuStack_430;
  longlong *plStack_428;
  longlong **pplStack_420;
  undefined8 uStack_418;
  undefined *puStack_408;
  undefined1 *puStack_400;
  undefined4 uStack_3f8;
  undefined1 auStack_3f0 [128];
  undefined4 uStack_370;
  undefined8 uStack_368;
  longlong *plStack_360;
  int iStack_358;
  undefined *puStack_328;
  undefined1 *puStack_320;
  undefined4 uStack_318;
  undefined1 auStack_310 [128];
  undefined4 uStack_290;
  undefined8 uStack_288;
  longlong *plStack_280;
  int iStack_278;
  undefined *puStack_248;
  undefined1 *puStack_240;
  undefined4 uStack_238;
  undefined1 auStack_230 [128];
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  longlong *plStack_1a0;
  int iStack_198;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [32];
  undefined *puStack_130;
  undefined1 *puStack_128;
  undefined4 uStack_120;
  undefined1 auStack_118 [32];
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [40];
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [72];
  ulonglong uStack_58;
  int *piVar15;
  
  uStack_418 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_578;
  piVar12 = (int *)0x0;
  uStack_510 = 0;
  pplVar19 = (longlong **)(*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3);
  iVar18 = (int)pplVar19;
  pplStack_4e0 = pplVar19;
  if (0 < iVar18) {
    piStack_4d0 = (int *)0x0;
    piStack_4c8 = (int *)0x0;
    piStack_4c0 = (int *)0x0;
    uStack_4b8 = 3;
    puStack_168 = &UNK_18098bc80;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0x13;
    uVar23 = strcpy_s(auStack_150,0x20,&UNK_180a21c18);
    uStack_520 = 8;
    uStack_528 = 1;
    uStack_530 = 0;
    uStack_540 = 0x70;
    uStack_548 = 0;
    uStack_550 = 3;
    uStack_558 = 0x61;
    iStack_538 = iVar18;
    puVar3 = (undefined8 *)
             FUN_1800b0a10(uVar23,&plStack_448,*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xa0)
                           ,&puStack_168);
    uVar23 = *puVar3;
    *puVar3 = 0;
    plStack_450 = *(longlong **)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar23;
    uVar23 = extraout_XMM0_Qa;
    if (plStack_450 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plStack_450 + 0x38))();
    }
    if (plStack_448 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plStack_448 + 0x38))();
    }
    puStack_168 = &UNK_18098bcb0;
    plStack_438 = (longlong *)0x0;
    plVar4 = (longlong *)FUN_1803875e0(uVar23,&plStack_428,iVar18 * 7);
    plStack_360 = (longlong *)*plVar4;
    *plVar4 = 0;
    uStack_440 = 0;
    plStack_4b0 = plStack_360;
    plStack_438 = plStack_360;
    if (plStack_428 != (longlong *)0x0) {
      (**(code **)(*plStack_428 + 0x38))();
    }
    lVar7 = plStack_360[2];
    uStack_518 = (longlong **)((ulonglong)uStack_518._4_4_ << 0x20);
    lVar10 = *(longlong *)(param_1 + 200);
    piVar21 = piStack_4c8;
    piVar5 = piStack_4d0;
    if (*(longlong *)(param_1 + 0xd0) - lVar10 >> 3 != 0) {
      pplStack_500 = (longlong **)0x0;
      pplStack_4e8 = (longlong **)0x0;
      piVar13 = piVar12;
      piVar15 = piVar12;
      piVar17 = piVar12;
      piVar20 = piStack_4c8;
      piVar22 = piStack_4d0;
      do {
        iVar18 = (int)piVar13;
        puVar11 = *(undefined4 **)(lVar10 + (longlong)pplStack_4e8);
        *(undefined4 *)((longlong)piVar12 + lVar7) = puVar11[0x8c];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 4) = puVar11[0x8d];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 8) = puVar11[0x8e];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0xc) = 0;
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x10) = *puVar11;
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x14) = puVar11[1];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x18) = puVar11[2];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x1c) = puVar11[3];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x20) = puVar11[4];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x24) = puVar11[5];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x28) = puVar11[6];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x2c) = puVar11[7];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x30) = puVar11[8];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x34) = puVar11[9];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x38) = puVar11[10];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x3c) = puVar11[0xb];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x40) = puVar11[0xc];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x44) = puVar11[0xd];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x48) = puVar11[0xe];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x4c) = puVar11[0xf];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x50) = puVar11[0x10];
        *(undefined4 *)((longlong)piVar12 + lVar7 + 0x54) = puVar11[0x11];
        *(undefined8 *)((longlong)piVar12 + lVar7 + 0x58) = 0;
        piVar21 = piVar20;
        piVar5 = piVar22;
        if ((float)puVar11[7] != 0.0) {
          *(int *)((longlong)piVar12 + lVar7 + 0x60) = (int)piVar15;
          uVar14 = (int)piVar15 + 1;
          piVar15 = (int *)(ulonglong)uVar14;
          plStack_508 = (longlong *)CONCAT44(plStack_508._4_4_,uVar14);
          if (piVar20 < piVar17) {
            piVar21 = piVar20 + 1;
            *piVar20 = iVar18;
            piStack_4c8 = piVar21;
          }
          else {
            plStack_4d8 = (longlong *)((longlong)piVar20 - (longlong)piVar22);
            if ((longlong)plStack_4d8 >> 2 == 0) {
              plStack_4f8 = (longlong *)0x1;
LAB_180385551:
              piVar5 = (int *)FUN_18062b420(_DAT_180c8ed18,(longlong)plStack_4f8 * 4,
                                            CONCAT71((int7)((ulonglong)piVar13 >> 8),3));
              iVar18 = (int)uStack_518;
            }
            else {
              plStack_4f8 = (longlong *)(((longlong)plStack_4d8 >> 2) * 2);
              if (plStack_4f8 != (longlong *)0x0) goto LAB_180385551;
              piVar5 = (int *)0x0;
            }
            if (piVar22 != piVar20) {
                    // WARNING: Subroutine does not return
              memmove(piVar5,piVar22,plStack_4d8);
            }
            *piVar5 = iVar18;
            piVar21 = piVar5 + 1;
            if (piVar22 != (int *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(piVar22);
            }
            piVar17 = piVar5 + (longlong)plStack_4f8;
            piVar15 = (int *)((ulonglong)plStack_508 & 0xffffffff);
            piStack_4d0 = piVar5;
            piStack_4c8 = piVar21;
            piStack_4c0 = piVar17;
          }
        }
        pplStack_500 = (longlong **)((longlong)pplStack_500 + 7);
        piVar12 = piVar12 + 0x1c;
        uVar14 = iVar18 + 1;
        piVar13 = (int *)(ulonglong)uVar14;
        uStack_518 = (longlong **)CONCAT44(uStack_518._4_4_,uVar14);
        pplStack_4e8 = pplStack_4e8 + 1;
        lVar10 = *(longlong *)(param_1 + 200);
        plStack_360 = plStack_4b0;
        pplVar19 = pplStack_4e0;
        piVar20 = piVar21;
        piVar22 = piVar5;
      } while ((ulonglong)(longlong)(int)uVar14 <
               (ulonglong)(*(longlong *)(param_1 + 0xd0) - lVar10 >> 3));
    }
    ppuStack_4a8 = &puStack_408;
    puStack_408 = &UNK_1809fcc28;
    puStack_400 = auStack_3f0;
    uStack_3f8 = 0;
    auStack_3f0[0] = 0;
    uStack_370 = 9;
    uStack_368 = *(undefined8 *)(param_1 + 0xe8);
    iVar18 = (int)pplVar19;
    iStack_358 = iVar18 * 0x70;
    if (*(code **)(*plStack_360 + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(plStack_360 + 1) = (int)plStack_360[1] + 1;
      UNLOCK();
      piVar21 = piStack_4c8;
      piVar5 = piStack_4d0;
    }
    else {
      (**(code **)(*plStack_360 + 0x28))(plStack_360);
    }
    uVar23 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    pplVar6 = (longlong **)FUN_18005ce30(uVar23,&puStack_408);
    pplStack_420 = pplVar6;
    if (pplVar6 != (longlong **)0x0) {
      (*(code *)(*pplVar6)[5])(pplVar6);
    }
    lVar7 = _DAT_180c82868;
    ppplStack_4a0 = (longlong ***)&uStack_518;
    uStack_518 = pplVar6;
    if (pplVar6 != (longlong **)0x0) {
      (*(code *)(*pplVar6)[5])(pplVar6);
    }
    ppplStack_4f0 = (longlong ***)&uStack_518;
    puVar3 = *(undefined8 **)(*(longlong *)(lVar7 + 8) + 8);
    pcVar1 = *(code **)*puVar3;
    ppplStack_4a0 = &pplStack_4e8;
    pplStack_4e8 = uStack_518;
    if (uStack_518 != (longlong **)0x0) {
      (*(code *)(*uStack_518)[5])();
    }
    (*pcVar1)(puVar3,&pplStack_4e8);
    if (uStack_518 != (longlong **)0x0) {
      (*(code *)(*uStack_518)[7])();
    }
    if (pplVar6 != (longlong **)0x0) {
      (*(code *)(*pplVar6)[7])(pplVar6);
    }
    ppplStack_4f0 = (longlong ***)&puStack_408;
    puStack_408 = &UNK_18098bcb0;
    (**(code **)(*plStack_4b0 + 0x38))();
    lVar7 = (longlong)piVar21 - (longlong)piVar5 >> 2;
    if (lVar7 != 0) {
      lVar7 = *(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3;
      auVar25._0_4_ = (float)lVar7;
      if (lVar7 < 0) {
        auVar25._0_4_ = auVar25._0_4_ + 1.8446744e+19;
      }
      auVar25._0_4_ = auVar25._0_4_ * 0.0078125;
      iVar9 = (int)auVar25._0_4_;
      if (auVar25._0_4_ <= 0.0) {
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar25._0_4_)) {
          auVar26._4_4_ = auVar25._0_4_;
          auVar26._0_4_ = auVar25._0_4_;
          auVar26._8_8_ = 0;
          uVar14 = movmskps((int)lVar7,auVar26);
          auVar25._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
        }
        auVar25._0_4_ = auVar25._0_4_ - 1e-08;
      }
      else {
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar25._0_4_)) {
          auVar25._4_4_ = auVar25._0_4_;
          auVar25._8_8_ = 0;
          uVar14 = movmskps((int)lVar7,auVar25);
          auVar25._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
        }
        auVar25._0_4_ = auVar25._0_4_ + 1e-08;
      }
      puStack_130 = &UNK_18098bc80;
      puStack_128 = auStack_118;
      auStack_118[0] = 0;
      uStack_120 = 0x1a;
      uVar23 = strcpy_s(auStack_118,0x20,&UNK_180a21bf8);
      uStack_520 = 8;
      uStack_528 = 1;
      uStack_530 = 0;
      uStack_540 = 0x1e0;
      uStack_548 = 0;
      uStack_550 = 3;
      uStack_558 = 0x61;
      iStack_538 = (int)auVar25._0_4_ << 7;
      puVar3 = (undefined8 *)
               FUN_1800b0a10(uVar23,&plStack_488,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xa0),&puStack_130);
      uVar23 = *puVar3;
      *puVar3 = 0;
      plStack_490 = *(longlong **)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xf0) = uVar23;
      if (plStack_490 != (longlong *)0x0) {
        (**(code **)(*plStack_490 + 0x38))();
      }
      if (plStack_488 != (longlong *)0x0) {
        (**(code **)(*plStack_488 + 0x38))();
      }
      uVar23 = _DAT_180c8a998;
      puStack_130 = &UNK_18098bcb0;
      plStack_478 = (longlong *)0x0;
      iVar9 = iVar18 * 0x1e0;
      puStack_b8 = &UNK_1809fcc58;
      puStack_b0 = auStack_a0;
      auStack_a0[0] = 0;
      uStack_a8 = 0x1c;
      uVar24 = strcpy_s(auStack_a0,0x40,&DAT_1809ffc60);
      FUN_1802037e0(uVar24,iVar9,&puStack_b8);
      puStack_b8 = &UNK_18098bcb0;
      lVar7 = FUN_18062b1e0(_DAT_180c8ed18,iVar9,0x10,3);
      FUN_180387ce0(uVar23,&plStack_508);
      plVar4 = plStack_508;
      plStack_508[2] = lVar7;
      *(int *)(plStack_508 + 3) = iVar9;
      *(int *)((longlong)plStack_508 + 0x1c) = iVar9;
      *(undefined1 *)(plStack_508 + 4) = 0;
      plStack_478 = plStack_508;
      uStack_480 = 0;
      plStack_508 = (longlong *)0x0;
      uStack_510 = 0;
      if (piVar5 != piVar21) {
        puVar3 = (undefined8 *)(plVar4[2] + 0x10);
        piVar12 = piVar5;
        do {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)*piVar12 * 8);
          uVar23 = *(undefined8 *)(lVar7 + 0x58);
          puVar3[-2] = *(undefined8 *)(lVar7 + 0x50);
          puVar3[-1] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0xb8);
          puVar3[10] = *(undefined8 *)(lVar7 + 0xb0);
          puVar3[0xb] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 200);
          puVar3[0xc] = *(undefined8 *)(lVar7 + 0xc0);
          puVar3[0xd] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0xd8);
          puVar3[0xe] = *(undefined8 *)(lVar7 + 0xd0);
          puVar3[0xf] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0xe8);
          puVar3[0x10] = *(undefined8 *)(lVar7 + 0xe0);
          puVar3[0x11] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x68);
          *puVar3 = *(undefined8 *)(lVar7 + 0x60);
          puVar3[1] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0xf8);
          puVar3[0x12] = *(undefined8 *)(lVar7 + 0xf0);
          puVar3[0x13] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x108);
          puVar3[0x14] = *(undefined8 *)(lVar7 + 0x100);
          puVar3[0x15] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x118);
          puVar3[0x16] = *(undefined8 *)(lVar7 + 0x110);
          puVar3[0x17] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x128);
          puVar3[0x18] = *(undefined8 *)(lVar7 + 0x120);
          puVar3[0x19] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x78);
          puVar3[2] = *(undefined8 *)(lVar7 + 0x70);
          puVar3[3] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x138);
          puVar3[0x1a] = *(undefined8 *)(lVar7 + 0x130);
          puVar3[0x1b] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x148);
          puVar3[0x1c] = *(undefined8 *)(lVar7 + 0x140);
          puVar3[0x1d] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x158);
          puVar3[0x1e] = *(undefined8 *)(lVar7 + 0x150);
          puVar3[0x1f] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x168);
          puVar3[0x20] = *(undefined8 *)(lVar7 + 0x160);
          puVar3[0x21] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x88);
          puVar3[4] = *(undefined8 *)(lVar7 + 0x80);
          puVar3[5] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x178);
          puVar3[0x22] = *(undefined8 *)(lVar7 + 0x170);
          puVar3[0x23] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x188);
          puVar3[0x24] = *(undefined8 *)(lVar7 + 0x180);
          puVar3[0x25] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x198);
          puVar3[0x26] = *(undefined8 *)(lVar7 + 400);
          puVar3[0x27] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x1a8);
          puVar3[0x28] = *(undefined8 *)(lVar7 + 0x1a0);
          puVar3[0x29] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x98);
          puVar3[6] = *(undefined8 *)(lVar7 + 0x90);
          puVar3[7] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x1b8);
          puVar3[0x2a] = *(undefined8 *)(lVar7 + 0x1b0);
          puVar3[0x2b] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x1c8);
          puVar3[0x2c] = *(undefined8 *)(lVar7 + 0x1c0);
          puVar3[0x2d] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x1d8);
          puVar3[0x2e] = *(undefined8 *)(lVar7 + 0x1d0);
          puVar3[0x2f] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x1e8);
          puVar3[0x30] = *(undefined8 *)(lVar7 + 0x1e0);
          puVar3[0x31] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0xa8);
          puVar3[8] = *(undefined8 *)(lVar7 + 0xa0);
          puVar3[9] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x1f8);
          puVar3[0x32] = *(undefined8 *)(lVar7 + 0x1f0);
          puVar3[0x33] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x208);
          puVar3[0x34] = *(undefined8 *)(lVar7 + 0x200);
          puVar3[0x35] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x218);
          puVar3[0x36] = *(undefined8 *)(lVar7 + 0x210);
          puVar3[0x37] = uVar23;
          uVar23 = *(undefined8 *)(lVar7 + 0x228);
          puVar3[0x38] = *(undefined8 *)(lVar7 + 0x220);
          puVar3[0x39] = uVar23;
          puVar3 = puVar3 + 0x3c;
          piVar12 = piVar12 + 1;
        } while (piVar12 != piVar21);
      }
      ppplStack_4f0 = (longlong ***)&puStack_328;
      puStack_328 = &UNK_1809fcc28;
      puStack_320 = auStack_310;
      uStack_318 = 0;
      auStack_310[0] = 0;
      uStack_290 = 9;
      uStack_288 = *(undefined8 *)(param_1 + 0xf0);
      plStack_280 = plVar4;
      iStack_278 = iVar9;
      if (*(code **)(*plVar4 + 0x28) == (code *)&UNK_180084660) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        piVar5 = piStack_4d0;
      }
      else {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      uVar23 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      pplVar6 = (longlong **)FUN_18005ce30(uVar23,&puStack_328);
      pplStack_498 = pplVar6;
      if (pplVar6 != (longlong **)0x0) {
        (*(code *)(*pplVar6)[5])(pplVar6);
      }
      lVar7 = _DAT_180c82868;
      ppplStack_4f0 = &pplStack_500;
      pplStack_500 = pplVar6;
      if (pplVar6 != (longlong **)0x0) {
        (*(code *)(*pplVar6)[5])(pplVar6);
      }
      ppplStack_4a0 = &pplStack_500;
      puVar3 = *(undefined8 **)(*(longlong *)(lVar7 + 8) + 8);
      pcVar1 = *(code **)*puVar3;
      ppplStack_4f0 = &pplStack_4e0;
      pplStack_4e0 = pplStack_500;
      if (pplStack_500 != (longlong **)0x0) {
        (*(code *)(*pplStack_500)[5])();
      }
      (*pcVar1)(puVar3,&pplStack_4e0);
      if (pplStack_500 != (longlong **)0x0) {
        (*(code *)(*pplStack_500)[7])();
      }
      if (pplVar6 != (longlong **)0x0) {
        (*(code *)(*pplVar6)[7])(pplVar6);
      }
      ppplStack_4f0 = (longlong ***)&puStack_328;
      puStack_328 = &UNK_18098bcb0;
      lVar7 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    auVar27._0_4_ = (float)iVar18 * 0.0078125;
    iVar9 = (int)auVar27._0_4_;
    if (auVar27._0_4_ <= 0.0) {
      if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar27._0_4_)) {
        auVar28._4_4_ = auVar27._0_4_;
        auVar28._0_4_ = auVar27._0_4_;
        auVar28._8_8_ = 0;
        uVar14 = movmskps((int)lVar7,auVar28);
        auVar27._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
      }
      auVar27._0_4_ = auVar27._0_4_ - 1e-08;
    }
    else {
      if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar27._0_4_)) {
        auVar27._4_4_ = auVar27._0_4_;
        auVar27._8_8_ = 0;
        uVar14 = movmskps((int)lVar7,auVar27);
        auVar27._0_4_ = (float)(int)(iVar9 + (uVar14 & 1 ^ 1));
      }
      auVar27._0_4_ = auVar27._0_4_ + 1e-08;
    }
    lVar7 = 0;
    puStack_f8 = &UNK_18098bc80;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 0x11;
    uVar23 = strcpy_s(auStack_e0,0x20,&UNK_180a21c40);
    uStack_520 = 8;
    uStack_528 = 1;
    uStack_530 = 0;
    uStack_540 = 0x10;
    uStack_548 = 0x21;
    uStack_550 = 3;
    uStack_558 = 0x21;
    iStack_538 = (int)auVar27._0_4_ << 7;
    puVar3 = (undefined8 *)
             FUN_1800b0a10(uVar23,&plStack_468,*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xa0)
                           ,&puStack_f8);
    uVar23 = *puVar3;
    *puVar3 = 0;
    plStack_470 = *(longlong **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = uVar23;
    uVar23 = extraout_XMM0_Qa_00;
    if (plStack_470 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plStack_470 + 0x38))();
    }
    if (plStack_468 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plStack_468 + 0x38))();
    }
    puStack_f8 = &UNK_18098bcb0;
    plStack_458 = (longlong *)0x0;
    plVar8 = (longlong *)FUN_1803875e0(uVar23,&ppuStack_4a8,(ulonglong)pplVar19 & 0xffffffff);
    plVar4 = (longlong *)*plVar8;
    *plVar8 = 0;
    uStack_460 = 0;
    plStack_458 = plVar4;
    if (ppuStack_4a8 != (undefined **)0x0) {
      (**(code **)(*ppuStack_4a8 + 0x38))();
    }
    lVar10 = plVar4[2];
    lVar16 = (longlong)iVar18;
    if (3 < lVar16) {
      puVar11 = (undefined4 *)(lVar10 + 8);
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + lVar7 * 8);
        puVar11[-2] = *(undefined4 *)(lVar2 + 0x230);
        puVar11[-1] = *(undefined4 *)(lVar2 + 0x234);
        *puVar11 = *(undefined4 *)(lVar2 + 0x238);
        puVar11[1] = *(undefined4 *)(lVar2 + 0xc);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + 8 + lVar7 * 8);
        puVar11[2] = *(undefined4 *)(lVar2 + 0x230);
        puVar11[3] = *(undefined4 *)(lVar2 + 0x234);
        puVar11[4] = *(undefined4 *)(lVar2 + 0x238);
        puVar11[5] = *(undefined4 *)(lVar2 + 0xc);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x10 + lVar7 * 8);
        puVar11[6] = *(undefined4 *)(lVar2 + 0x230);
        puVar11[7] = *(undefined4 *)(lVar2 + 0x234);
        puVar11[8] = *(undefined4 *)(lVar2 + 0x238);
        puVar11[9] = *(undefined4 *)(lVar2 + 0xc);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x18 + lVar7 * 8);
        puVar11[10] = *(undefined4 *)(lVar2 + 0x230);
        puVar11[0xb] = *(undefined4 *)(lVar2 + 0x234);
        puVar11[0xc] = *(undefined4 *)(lVar2 + 0x238);
        puVar11[0xd] = *(undefined4 *)(lVar2 + 0xc);
        lVar7 = lVar7 + 4;
        puVar11 = puVar11 + 0x10;
      } while (lVar7 < lVar16 + -3);
    }
    if (lVar7 < lVar16) {
      puVar11 = (undefined4 *)(lVar10 + 8 + lVar7 * 0x10);
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 200) + lVar7 * 8);
        puVar11[-2] = *(undefined4 *)(lVar10 + 0x230);
        puVar11[-1] = *(undefined4 *)(lVar10 + 0x234);
        *puVar11 = *(undefined4 *)(lVar10 + 0x238);
        puVar11[1] = *(undefined4 *)(lVar10 + 0xc);
        lVar7 = lVar7 + 1;
        puVar11 = puVar11 + 4;
      } while (lVar7 < lVar16);
    }
    ppplStack_4f0 = (longlong ***)&puStack_248;
    puStack_248 = &UNK_1809fcc28;
    puStack_240 = auStack_230;
    uStack_238 = 0;
    auStack_230[0] = 0;
    uStack_1b0 = 9;
    uStack_1a8 = *(undefined8 *)(param_1 + 0xf8);
    iStack_198 = iVar18 << 4;
    plStack_1a0 = plVar4;
    if (*(code **)(*plVar4 + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      piVar5 = piStack_4d0;
    }
    else {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uVar23 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    plVar8 = (longlong *)FUN_18005ce30(uVar23,&puStack_248);
    ppuStack_430 = (undefined **)plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    lVar7 = _DAT_180c82868;
    pplStack_498 = &plStack_4f8;
    plStack_4f8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    ppplStack_4f0 = (longlong ***)&plStack_4f8;
    puVar3 = *(undefined8 **)(*(longlong *)(lVar7 + 8) + 8);
    pcVar1 = *(code **)*puVar3;
    pplStack_498 = &plStack_4d8;
    plStack_4d8 = plStack_4f8;
    if (plStack_4f8 != (longlong *)0x0) {
      (**(code **)(*plStack_4f8 + 0x28))();
    }
    (*pcVar1)(puVar3,&plStack_4d8);
    if (plStack_4f8 != (longlong *)0x0) {
      (**(code **)(*plStack_4f8 + 0x38))();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    ppuStack_430 = &puStack_248;
    puStack_248 = &UNK_18098bcb0;
    (**(code **)(*plVar4 + 0x38))(plVar4);
    if (piVar5 != (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(piVar5);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_578);
}





