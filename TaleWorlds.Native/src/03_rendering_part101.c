#include "TaleWorlds.Native.Split.h"

// 03_rendering_part101.c - 11 个函数

// 函数: void FUN_180328540(undefined8 param_1,longlong *param_2,longlong *param_3)
void FUN_180328540(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStack_758 [32];
  undefined1 uStack_738;
  undefined **ppuStack_728;
  undefined8 uStack_720;
  longlong *plStack_718;
  undefined *puStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 uStack_618;
  undefined *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  undefined1 uStack_558;
  longlong alStack_550 [3];
  undefined4 uStack_538;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined1 uStack_478;
  longlong alStack_470 [3];
  undefined4 uStack_458;
  undefined8 uStack_448;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_3ac;
  undefined8 auStack_3a8 [4];
  undefined *puStack_388;
  undefined1 *puStack_380;
  undefined4 uStack_378;
  undefined *puStack_330;
  undefined1 *puStack_328;
  undefined4 uStack_320;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 uStack_274;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_1dc;
  undefined8 auStack_1d8 [13];
  undefined *apuStack_170 [11];
  undefined *puStack_118;
  undefined *puStack_c0;
  ulonglong uStack_68;
  
  uStack_448 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_758;
  uStack_738 = 1;
  uStack_720 = param_1;
  plStack_718 = param_2;
  fVar15 = (float)FUN_18032bea0(param_1,param_2,param_3,4);
  lVar14 = param_3[1];
  lVar8 = *param_3;
  uVar4 = lVar14 - lVar8 >> 3;
  lVar5 = param_2[1];
  lVar9 = *param_2;
  if ((int)uVar4 != 0) {
    lVar14 = 0;
    uVar4 = uVar4 & 0xffffffff;
    do {
      uVar13 = 0;
      uVar10 = (uint)(lVar5 - lVar9 >> 3);
      if (uVar10 != 0) {
        do {
          if (*(int *)(*(longlong *)(lVar14 + *param_3) + 8) ==
              *(int *)(*(longlong *)(*param_2 + uVar13 * 8) + 8)) goto LAB_180328601;
          uVar7 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar7;
        } while (uVar7 < uVar10);
      }
      puVar1 = (uint *)(*(longlong *)(lVar14 + *param_3) + 0x10);
      *puVar1 = *puVar1 | 2;
LAB_180328601:
      lVar14 = lVar14 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    lVar14 = param_3[1];
    lVar8 = *param_3;
  }
  uVar4 = lVar14 - lVar8 >> 3;
  if ((int)uVar4 != 0) {
    lVar14 = 0;
    uVar4 = uVar4 & 0xffffffff;
    do {
      lVar8 = *(longlong *)(lVar14 + *param_3);
      plVar3 = (longlong *)FUN_18032bba0(fVar15,param_2,lVar8);
      cVar2 = func_0x000180285f10(plVar3 + 3,lVar8 + 0x18,0x38d1b717);
      if (cVar2 == '\0') {
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
      }
      fVar15 = ABS(*(float *)(plVar3 + 0xd) - *(float *)(lVar8 + 0x68));
      if ((((0.0001 <= fVar15) ||
           (fVar15 = ABS(*(float *)((longlong)plVar3 + 0x6c) - *(float *)(lVar8 + 0x6c)),
           0.0001 <= fVar15)) ||
          (fVar15 = ABS(*(float *)(plVar3 + 0xe) - *(float *)(lVar8 + 0x70)), 0.0001 <= fVar15)) ||
         (((fVar15 = ABS(*(float *)(plVar3 + 0xb) - *(float *)(lVar8 + 0x58)), 0.0001 <= fVar15 ||
           (fVar15 = ABS(*(float *)((longlong)plVar3 + 0x5c) - *(float *)(lVar8 + 0x5c)),
           0.0001 <= fVar15)) ||
          (fVar15 = ABS(*(float *)(plVar3 + 0xc) - *(float *)(lVar8 + 0x60)), 0.0001 <= fVar15)))) {
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
      }
      if (*(int *)((longlong)plVar3 + 0xc) != *(int *)(lVar8 + 0xc)) {
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
      }
      if (*(int *)((longlong)plVar3 + 0x14) != *(int *)(lVar8 + 0x14)) {
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
      }
      uVar13 = (*(longlong *)(lVar8 + 0x98) - *(longlong *)(lVar8 + 0x90)) / 0x1a0;
      iVar11 = (int)uVar13;
      if ((int)((plVar3[0x13] - plVar3[0x12]) / 0x1a0) == iVar11) {
        if (iVar11 != 0) {
          lVar5 = 0;
          uVar13 = uVar13 & 0xffffffff;
          do {
            lVar9 = *(longlong *)(lVar8 + 0x90);
            lVar12 = plVar3[0x12];
            if (*(int *)(lVar5 + 0x60 + lVar12) != *(int *)(lVar5 + 0x60 + lVar9)) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            if (*(int *)(lVar5 + 100 + lVar12) != *(int *)(lVar5 + 100 + lVar9)) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            if (((0.0001 <= ABS(*(float *)(lVar5 + 0x80 + lVar12) - *(float *)(lVar5 + 0x80 + lVar9)
                               )) ||
                (0.0001 <= ABS(*(float *)(lVar5 + 0x84 + lVar12) - *(float *)(lVar5 + 0x84 + lVar9))
                )) || (0.0001 <= ABS(*(float *)(lVar5 + 0x88 + lVar12) -
                                     *(float *)(lVar5 + 0x88 + lVar9)))) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            if (((0.0001 <= ABS(*(float *)(lVar5 + 0x90 + lVar12) - *(float *)(lVar5 + 0x90 + lVar9)
                               )) ||
                (0.0001 <= ABS(*(float *)(lVar5 + 0x94 + lVar12) - *(float *)(lVar5 + 0x94 + lVar9))
                )) || (0.0001 <= ABS(*(float *)(lVar5 + 0x98 + lVar12) -
                                     *(float *)(lVar5 + 0x98 + lVar9)))) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            if (((0.0001 <= ABS(*(float *)(lVar12 + 0xa0 + lVar5) - *(float *)(lVar5 + 0xa0 + lVar9)
                               )) ||
                (0.0001 <= ABS(*(float *)(lVar12 + 0xa4 + lVar5) - *(float *)(lVar5 + 0xa4 + lVar9))
                )) || (0.0001 <= ABS(*(float *)(lVar12 + 0xa8 + lVar5) -
                                     *(float *)(lVar5 + 0xa8 + lVar9)))) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            if (((0.0001 <= ABS(*(float *)(lVar5 + 0xb0 + lVar12) - *(float *)(lVar5 + 0xb0 + lVar9)
                               )) ||
                (0.0001 <= ABS(*(float *)(lVar5 + 0xb4 + lVar12) - *(float *)(lVar5 + 0xb4 + lVar9))
                )) || (0.0001 <= ABS(*(float *)(lVar5 + 0xb8 + lVar12) -
                                     *(float *)(lVar5 + 0xb8 + lVar9)))) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            fVar15 = ABS(*(float *)(lVar5 + 0xc0 + lVar12) - *(float *)(lVar5 + 0xc0 + lVar9));
            if (((0.0001 <= fVar15) ||
                (fVar15 = ABS(*(float *)(lVar5 + 0xc4 + lVar12) - *(float *)(lVar5 + 0xc4 + lVar9)),
                0.0001 <= fVar15)) ||
               (fVar15 = ABS(*(float *)(lVar5 + 200 + lVar12) - *(float *)(lVar5 + 200 + lVar9)),
               0.0001 <= fVar15)) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
              lVar9 = *(longlong *)(lVar8 + 0x90);
              lVar12 = plVar3[0x12];
            }
            if (*(int *)(lVar5 + 0x68 + lVar12) != *(int *)(lVar5 + 0x68 + lVar9)) {
              *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
            }
            lVar5 = lVar5 + 0x1a0;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      else {
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
      }
      switch(*(undefined4 *)(lVar8 + 0x8c)) {
      case 0:
      case 7:
        FUN_180339110(&puStack_438);
        uStack_430 = 0;
        uStack_428 = 0;
        uStack_3ac = 8;
        FUN_180284720(auStack_3a8);
        uStack_378 = 0;
        *puStack_380 = 0;
        uStack_320 = 0;
        *puStack_328 = 0;
        uStack_2c8 = 0;
        *puStack_2d0 = 0;
        uStack_3ac = 0;
        uStack_274 = 0;
        uStack_27c = 0xffffffff;
        uStack_278 = 0;
        uStack_280 = 0;
        (**(code **)(*plVar3 + 0x28))(plVar3,lVar8);
        puStack_438 = &UNK_180a1b430;
        uStack_430 = 0;
        uStack_428 = 0;
        uStack_3ac = 8;
        FUN_180284720(auStack_3a8);
        uStack_378 = 0;
        *puStack_380 = 0;
        uStack_320 = 0;
        *puStack_328 = 0;
        uStack_2c8 = 0;
        *puStack_2d0 = 0;
        uStack_274 = 0;
        uStack_27c = 0xffffffff;
        uStack_278 = 0;
        uStack_280 = 0;
        puStack_2d8 = &UNK_18098bcb0;
        puStack_330 = &UNK_18098bcb0;
        ppuStack_728 = &puStack_388;
        puStack_388 = &UNK_18098bcb0;
        puStack_438 = &UNK_180a1b4b0;
        uStack_430 = 0;
        uStack_428 = 0;
        uStack_3ac = 8;
        FUN_180284720(auStack_3a8);
        ppuStack_728 = (undefined **)auStack_3a8;
        puVar6 = auStack_3a8;
        break;
      case 1:
        FUN_180339920(&puStack_268);
        uVar16 = FUN_180339860(&puStack_268);
        func_0x000180329130(uVar16,plVar3,lVar8);
        puStack_268 = &UNK_180a1b470;
        FUN_180339860(&puStack_268);
        puStack_c0 = &UNK_18098bcb0;
        puStack_118 = &UNK_18098bcb0;
        ppuStack_728 = apuStack_170;
        apuStack_170[0] = &UNK_18098bcb0;
        puStack_268 = &UNK_180a1b4b0;
        uStack_260 = 0;
        uStack_258 = 0;
        uStack_1dc = 8;
        FUN_180284720(auStack_1d8);
        ppuStack_728 = (undefined **)auStack_1d8;
        puVar6 = auStack_1d8;
        break;
      case 2:
        puStack_608 = &UNK_180a1b4b0;
        uStack_580 = 0;
        uStack_5b0 = 0;
        uStack_5a8 = 0;
        uStack_5a0 = 0;
        uStack_598 = 0;
        uStack_590 = 0;
        uStack_588 = 0;
        ppuStack_728 = (undefined **)&uStack_578;
        uStack_578 = 0;
        uStack_570 = 0;
        uStack_568 = 0;
        uStack_560 = 3;
        uStack_600 = 0;
        uStack_5f8 = 0;
        uStack_57c = 8;
        FUN_180284720(&uStack_578);
        puStack_608 = &UNK_180a1b3b0;
        ppuStack_728 = (undefined **)alStack_550;
        alStack_550[0] = 0;
        alStack_550[1] = 0;
        alStack_550[2] = 0;
        uStack_538 = 3;
        uStack_558 = 0;
        FUN_18033a110(&puStack_608);
        if ((char)plVar3[0x16] != *(char *)(lVar8 + 0xb0)) {
          *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
        }
        cVar2 = func_0x000180285f10(plVar3 + 3,lVar8 + 0x18,0x38d1b717);
        if (cVar2 == '\0') {
          *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
        }
        FUN_180328540(uStack_720,plVar3 + 0x17,lVar8 + 0xb8);
        puStack_608 = &UNK_180a1b3b0;
        FUN_18033a110(&puStack_608);
        ppuStack_728 = (undefined **)alStack_550;
        if (alStack_550[0] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_608 = &UNK_180a1b4b0;
        uStack_600 = 0;
        uStack_5f8 = 0;
        uStack_57c = 8;
        FUN_180284720(&uStack_578);
        ppuStack_728 = (undefined **)&uStack_578;
        puVar6 = &uStack_578;
        break;
      default:
        goto LAB_1803290bf;
      case 4:
        puStack_708 = &UNK_180a1b4b0;
        uStack_680 = 0;
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        uStack_690 = 0;
        uStack_688 = 0;
        ppuStack_728 = (undefined **)&uStack_678;
        uStack_678 = 0;
        uStack_670 = 0;
        uStack_668 = 0;
        uStack_660 = 3;
        uStack_700 = 0;
        uStack_6f8 = 0;
        uStack_67c = 8;
        FUN_180284720(&uStack_678);
        puStack_708 = &UNK_180a1b368;
        uStack_700 = 0;
        uStack_6f8 = 0;
        uStack_67c = 8;
        FUN_180284720(&uStack_678);
        uStack_618 = 0xffffffffffffffff;
        uStack_658 = 0x3f800000;
        uStack_650 = 0;
        uStack_648 = 0x3f80000000000000;
        uStack_640 = 0;
        uStack_638 = 0;
        uStack_634 = 0;
        uStack_630 = 0x3f800000;
        uStack_62c = 0;
        uStack_628 = 0;
        uStack_624 = 0;
        uStack_620 = 0;
        uStack_61c = 0x3f800000;
        uStack_700 = 0;
        uStack_6f8 = 0;
        uStack_67c = 8;
        FUN_180284720(&uStack_678);
        uStack_67c = 4;
        uStack_618 = 0xffffffffffffffff;
        uStack_658 = 0x3f800000;
        uStack_650 = 0;
        uStack_648 = 0x3f80000000000000;
        uStack_640 = 0;
        uStack_638 = 0;
        uStack_634 = 0;
        uStack_630 = 0x3f800000;
        uStack_62c = 0;
        uStack_628 = 0;
        uStack_624 = 0;
        uStack_620 = 0;
        uStack_61c = 0x3f800000;
        if ((int)plVar3[0x1e] != *(int *)(lVar8 + 0xf0)) {
          *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
        }
        if (*(int *)((longlong)plVar3 + 0xf4) != *(int *)(lVar8 + 0xf4)) {
          *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
        }
        cVar2 = func_0x000180285f10(plVar3 + 0x16,lVar8 + 0xb0,0x38d1b717);
        if (cVar2 == '\0') {
          *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
        }
        puStack_708 = &UNK_180a1b4b0;
        uStack_700 = 0;
        uStack_6f8 = 0;
        uStack_67c = 8;
        FUN_180284720(&uStack_678);
        ppuStack_728 = (undefined **)&uStack_678;
        puVar6 = &uStack_678;
        break;
      case 6:
        puStack_528 = &UNK_180a1b4b0;
        uStack_4a0 = 0;
        uStack_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4c0 = 0;
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        ppuStack_728 = (undefined **)&uStack_498;
        uStack_498 = 0;
        uStack_490 = 0;
        uStack_488 = 0;
        uStack_480 = 3;
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_49c = 8;
        FUN_180284720(&uStack_498);
        puStack_528 = &UNK_180a1b3b0;
        ppuStack_728 = (undefined **)alStack_470;
        alStack_470[0] = 0;
        alStack_470[1] = 0;
        alStack_470[2] = 0;
        uStack_458 = 3;
        uStack_478 = 0;
        FUN_18033a110(&puStack_528);
        (**(code **)(*plVar3 + 0x28))(plVar3,lVar8);
        puStack_528 = &UNK_180a1b3b0;
        FUN_18033a110(&puStack_528);
        ppuStack_728 = (undefined **)alStack_470;
        if (alStack_470[0] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_528 = &UNK_180a1b4b0;
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_49c = 8;
        FUN_180284720(&uStack_498);
        ppuStack_728 = (undefined **)&uStack_498;
        puVar6 = &uStack_498;
      }
      fVar15 = (float)FUN_18033aa70(puVar6);
LAB_1803290bf:
      lVar14 = lVar14 + 8;
      uVar4 = uVar4 - 1;
      param_2 = plStack_718;
    } while (uVar4 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_758);
}



ulonglong FUN_180329420(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_18032bfc0(param_1,param_2,param_3,*(int *)(param_1 + 0x150) + -1,4);
  FUN_18032bfc0(param_1,param_3,param_2,*(undefined4 *)(param_1 + 0x150),2);
  pbVar4 = (byte *)(param_3[1] - *param_3 >> 2);
  if ((int)pbVar4 != 0) {
    lVar9 = 0;
    uVar8 = (ulonglong)pbVar4 & 0xffffffff;
    do {
      lVar5 = FUN_18032b880(param_1,*(undefined4 *)(lVar9 + *param_3),
                            *(undefined4 *)(param_1 + 0x150));
      lVar6 = FUN_18032b880(param_1,*(undefined4 *)(lVar9 + *param_3),*(int *)(param_1 + 0x150) + -1
                           );
      cVar3 = func_0x000180285f10(lVar6 + 0xc,lVar5 + 0xc,0x38d1b717);
      if (cVar3 == '\0') {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      if (((0.0001 <= ABS(*(float *)(lVar6 + 200) - *(float *)(lVar5 + 200))) ||
          (0.0001 <= ABS(*(float *)(lVar6 + 0xcc) - *(float *)(lVar5 + 0xcc)))) ||
         (0.0001 <= ABS(*(float *)(lVar6 + 0xd0) - *(float *)(lVar5 + 0xd0)))) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      if (((0.0001 <= ABS(*(float *)(lVar6 + 0xd8) - *(float *)(lVar5 + 0xd8))) ||
          (0.0001 <= ABS(*(float *)(lVar6 + 0xdc) - *(float *)(lVar5 + 0xdc)))) ||
         (0.0001 <= ABS(*(float *)(lVar6 + 0xe0) - *(float *)(lVar5 + 0xe0)))) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      if (((0.0001 <= ABS(*(float *)(lVar6 + 0xa8) - *(float *)(lVar5 + 0xa8))) ||
          (0.0001 <= ABS(*(float *)(lVar6 + 0xac) - *(float *)(lVar5 + 0xac)))) ||
         (0.0001 <= ABS(*(float *)(lVar6 + 0xb0) - *(float *)(lVar5 + 0xb0)))) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      if (((0.0001 <= ABS(*(float *)(lVar6 + 0xb8) - *(float *)(lVar5 + 0xb8))) ||
          (0.0001 <= ABS(*(float *)(lVar6 + 0xbc) - *(float *)(lVar5 + 0xbc)))) ||
         (0.0001 <= ABS(*(float *)(lVar6 + 0xc0) - *(float *)(lVar5 + 0xc0)))) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      if (*(int *)(lVar6 + 4) != *(int *)(lVar5 + 4)) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 8;
      }
      uVar2 = *(uint *)(lVar6 + 0x60);
      pbVar4 = (byte *)(ulonglong)uVar2;
      uVar7 = *(uint *)(lVar5 + 0x60);
      if (uVar2 == uVar7) {
        if (uVar2 != 0) {
          pbVar4 = *(byte **)(lVar6 + 0x58);
          lVar6 = *(longlong *)(lVar5 + 0x58) - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar6;
            uVar7 = (uint)*pbVar4 - (uint)*pbVar1;
            if (uVar7 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18032967d:
        if (uVar7 != 0) goto LAB_18032967f;
      }
      else {
        if (uVar2 == 0) goto LAB_18032967d;
LAB_18032967f:
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x10;
      }
      lVar9 = lVar9 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return (ulonglong)pbVar4 & 0xffffffffffffff00;
}



ulonglong FUN_180329480(float param_1)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  uint in_EAX;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_R14;
  undefined4 extraout_XMM0_Da;
  
  lVar9 = 0;
  uVar8 = (ulonglong)in_EAX;
  do {
    lVar4 = FUN_18032b880(param_1,*(undefined4 *)(lVar9 + *unaff_R14),
                          *(undefined4 *)(unaff_RBP + 0x150));
    lVar5 = FUN_18032b880(extraout_XMM0_Da,*(undefined4 *)(lVar9 + *unaff_R14),
                          *(int *)(unaff_RBP + 0x150) + -1);
    cVar3 = func_0x000180285f10(lVar5 + 0xc,lVar4 + 0xc,0x38d1b717);
    if (cVar3 == '\0') {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
    }
    if (((0.0001 <= ABS(*(float *)(lVar5 + 200) - *(float *)(lVar4 + 200))) ||
        (0.0001 <= ABS(*(float *)(lVar5 + 0xcc) - *(float *)(lVar4 + 0xcc)))) ||
       (0.0001 <= ABS(*(float *)(lVar5 + 0xd0) - *(float *)(lVar4 + 0xd0)))) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
    }
    if (((0.0001 <= ABS(*(float *)(lVar5 + 0xd8) - *(float *)(lVar4 + 0xd8))) ||
        (0.0001 <= ABS(*(float *)(lVar5 + 0xdc) - *(float *)(lVar4 + 0xdc)))) ||
       (0.0001 <= ABS(*(float *)(lVar5 + 0xe0) - *(float *)(lVar4 + 0xe0)))) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
    }
    if (((0.0001 <= ABS(*(float *)(lVar5 + 0xa8) - *(float *)(lVar4 + 0xa8))) ||
        (0.0001 <= ABS(*(float *)(lVar5 + 0xac) - *(float *)(lVar4 + 0xac)))) ||
       (0.0001 <= ABS(*(float *)(lVar5 + 0xb0) - *(float *)(lVar4 + 0xb0)))) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
    }
    param_1 = ABS(*(float *)(lVar5 + 0xb8) - *(float *)(lVar4 + 0xb8));
    if (((0.0001 <= param_1) ||
        (param_1 = ABS(*(float *)(lVar5 + 0xbc) - *(float *)(lVar4 + 0xbc)), 0.0001 <= param_1)) ||
       (param_1 = ABS(*(float *)(lVar5 + 0xc0) - *(float *)(lVar4 + 0xc0)), 0.0001 <= param_1)) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
    }
    if (*(int *)(lVar5 + 4) != *(int *)(lVar4 + 4)) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
    }
    uVar2 = *(uint *)(lVar5 + 0x60);
    pbVar6 = (byte *)(ulonglong)uVar2;
    uVar7 = *(uint *)(lVar4 + 0x60);
    if (uVar2 == uVar7) {
      if (uVar2 != 0) {
        pbVar6 = *(byte **)(lVar5 + 0x58);
        lVar5 = *(longlong *)(lVar4 + 0x58) - (longlong)pbVar6;
        do {
          pbVar1 = pbVar6 + lVar5;
          uVar7 = (uint)*pbVar6 - (uint)*pbVar1;
          if (uVar7 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18032967d:
      if (uVar7 != 0) goto LAB_18032967f;
    }
    else {
      if (uVar2 == 0) goto LAB_18032967d;
LAB_18032967f:
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x10;
    }
    lVar9 = lVar9 + 4;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) {
      return (ulonglong)pbVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



undefined1 FUN_1803296a5(void)

{
  return 0;
}





// 函数: void FUN_1803296c0(undefined8 param_1,uint *param_2,uint param_3,undefined4 param_4,char param_5)
void FUN_1803296c0(undefined8 param_1,uint *param_2,uint param_3,undefined4 param_4,char param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = *param_2 | param_3;
  if (param_5 != '\0') {
    lVar4 = 0;
    uVar1 = *(longlong *)(param_2 + 0x66) - *(longlong *)(param_2 + 100) >> 3;
    if ((int)uVar1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      lVar3 = lVar4;
      do {
        FUN_180329910(param_1,*(undefined8 *)(lVar3 + *(longlong *)(param_2 + 100)),param_3,param_5)
        ;
        lVar3 = lVar3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    FUN_1803297e0(param_1,param_2 + 0x30,param_3,param_5);
    uVar1 = *(longlong *)(param_2 + 0x5e) - *(longlong *)(param_2 + 0x5c) >> 2;
    if ((int)uVar1 != 0) {
      uVar1 = uVar1 & 0xffffffff;
      do {
        uVar2 = FUN_18032ba60(param_1,*(undefined4 *)(lVar4 + *(longlong *)(param_2 + 0x5c)),param_4
                             );
        FUN_1803296c0(param_1,uVar2,param_3,param_4,param_5);
        lVar4 = lVar4 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}





// 函数: void FUN_1803296fd(void)
void FUN_1803296fd(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  
  if ((int)(in_RAX >> 3) != 0) {
    uVar1 = in_RAX >> 3 & 0xffffffff;
    do {
      FUN_180329910();
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_1803297e0();
  uVar1 = *(longlong *)(unaff_RBX + 0x178) - *(longlong *)(unaff_RBX + 0x170) >> 2;
  if ((int)uVar1 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    do {
      FUN_18032ba60();
      FUN_1803296c0();
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}





// 函数: void FUN_180329770(void)
void FUN_180329770(void)

{
  uint in_EAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)in_EAX;
  do {
    FUN_18032ba60();
    FUN_1803296c0();
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}





// 函数: void FUN_1803297bb(void)
void FUN_1803297bb(void)

{
  return;
}





// 函数: void FUN_1803297c0(void)
void FUN_1803297c0(void)

{
  return;
}





// 函数: void FUN_1803297e0(undefined8 param_1,longlong param_2,uint param_3,char param_4)
void FUN_1803297e0(undefined8 param_1,longlong param_2,uint param_3,char param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | param_3;
  if (param_4 != '\0') {
    uVar2 = *(longlong *)(param_2 + 0x90) - *(longlong *)(param_2 + 0x88) >> 3;
    if ((int)uVar2 != 0) {
      lVar5 = 0;
      uVar2 = uVar2 & 0xffffffff;
      do {
        FUN_180329910(param_1,*(undefined8 *)(lVar5 + *(longlong *)(param_2 + 0x88)),param_3,param_4
                     );
        lVar5 = lVar5 + 8;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar2 = (*(longlong *)(param_2 + 0x70) - *(longlong *)(param_2 + 0x68)) / 0xb0;
    if ((int)uVar2 != 0) {
      lVar5 = 0;
      uVar2 = uVar2 & 0xffffffff;
      do {
        puVar1 = (uint *)(lVar5 + *(longlong *)(param_2 + 0x68));
        *puVar1 = *puVar1 | param_3;
        uVar3 = *(longlong *)(lVar5 + 0x90 + *(longlong *)(param_2 + 0x68)) -
                *(longlong *)(lVar5 + 0x88 + *(longlong *)(param_2 + 0x68)) >> 3;
        if ((int)uVar3 != 0) {
          lVar4 = 0;
          uVar3 = uVar3 & 0xffffffff;
          do {
            FUN_180329910(param_1,*(undefined8 *)
                                   (*(longlong *)(lVar5 + 0x88 + *(longlong *)(param_2 + 0x68)) +
                                   lVar4),param_3,param_4);
            lVar4 = lVar4 + 8;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar5 = lVar5 + 0xb0;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}





// 函数: void FUN_18032987f(undefined8 param_1,uint param_2)
void FUN_18032987f(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  uint unaff_ESI;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = 0;
  uVar4 = (ulonglong)param_2;
  do {
    puVar1 = (uint *)(lVar3 + *(longlong *)(unaff_RBX + 0x68));
    *puVar1 = *puVar1 | unaff_ESI;
    uVar2 = *(longlong *)(lVar3 + 0x90 + *(longlong *)(unaff_RBX + 0x68)) -
            *(longlong *)(lVar3 + 0x88 + *(longlong *)(unaff_RBX + 0x68)) >> 3;
    if ((int)uVar2 != 0) {
      uVar2 = uVar2 & 0xffffffff;
      do {
        FUN_180329910();
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar3 = lVar3 + 0xb0;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_180329900(void)
void FUN_180329900(void)

{
  return;
}





// 函数: void FUN_180329910(undefined8 param_1,longlong param_2,uint param_3,char param_4)
void FUN_180329910(undefined8 param_1,longlong param_2,uint param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | param_3;
  if (((param_4 != '\0') && (*(int *)(param_2 + 0x8c) == 2)) &&
     (uVar1 = *(longlong *)(param_2 + 0xc0) - *(longlong *)(param_2 + 0xb8) >> 3, (int)uVar1 != 0))
  {
    lVar2 = 0;
    uVar1 = uVar1 & 0xffffffff;
    do {
      FUN_180329910(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0xb8) + lVar2),param_3,param_4);
      lVar2 = lVar2 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}





// 函数: void FUN_180329953(void)
void FUN_180329953(void)

{
  uint in_EAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)in_EAX;
  do {
    FUN_180329910();
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}





