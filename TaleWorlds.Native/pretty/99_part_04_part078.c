#include "TaleWorlds.Native.Split.h"

// 99_part_04_part078.c - 1 个函数

// 函数: void FUN_1802cf670(longlong param_1,longlong param_2)
void FUN_1802cf670(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  longlong lVar9;
  int iVar10;
  void *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint64_t uVar16;
  int8_t auStack_698 [32];
  uint *puStack_678;
  int8_t uStack_670;
  int8_t auStack_668 [4];
  uint uStack_664;
  void **ppuStack_660;
  int8_t auStack_658 [4];
  int iStack_654;
  longlong *plStack_650;
  uint64_t uStack_648;
  uint uStack_640;
  uint64_t auStack_638 [2];
  void *puStack_628;
  ulonglong uStack_620;
  uint64_t uStack_618;
  int32_t uStack_610;
  longlong *plStack_608;
  void *puStack_600;
  longlong lStack_5f8;
  int32_t uStack_5f0;
  ulonglong uStack_5e8;
  int32_t uStack_5e0;
  int32_t uStack_5dc;
  int32_t uStack_5d8;
  int32_t uStack_5d4;
  longlong *plStack_5d0;
  void *puStack_5c8;
  uint64_t uStack_5c0;
  uint64_t uStack_5b8;
  ulonglong uStack_5b0;
  uint uStack_5a8;
  int16_t uStack_5a4;
  int16_t uStack_5a2;
  uint64_t uStack_5a0;
  void *puStack_598;
  ulonglong uStack_590;
  uint64_t uStack_588;
  int32_t uStack_580;
  uint64_t uStack_578;
  int8_t auStack_570 [32];
  uint64_t uStack_550;
  uint64_t uStack_548;
  longlong *plStack_540;
  void *puStack_538;
  int8_t *puStack_530;
  int32_t uStack_528;
  int8_t auStack_520 [72];
  void *puStack_4d8;
  int8_t *puStack_4d0;
  int32_t uStack_4c8;
  int8_t auStack_4c0 [72];
  void *puStack_478;
  void *puStack_470;
  int32_t uStack_468;
  undefined auStack_460 [1032];
  int aiStack_58 [6];
  ulonglong uStack_40;
  
  uStack_5a0 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_698;
  if (*(longlong *)(param_2 + 0x9700) != 0) {
    FUN_1802c22a0(auStack_668,&UNK_180a19118);
    ppuStack_660 = &puStack_4d8;
    uVar14 = 0;
    puStack_4d8 = &UNK_1809fcc58;
    puStack_4d0 = auStack_4c0;
    uStack_4c8 = 0;
    auStack_4c0[0] = 0;
    FUN_180049bf0(&puStack_4d8,&UNK_180a19118);
    uVar16 = FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_4d8);
    uVar16 = FUN_1800c7b10(uVar16,param_2);
    FUN_1800c78b0(uVar16,param_2);
    lVar9 = _DAT_180c86938;
    lVar3 = *(longlong *)(param_2 + 0x99b8);
    if (((lVar3 == 0) || ((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0)) ||
       (*(char *)(param_1 + 0x1320) != '\0')) {
      *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1750) = 0;
      uVar16 = *(uint64_t *)(lVar9 + 0x1cd8);
      uVar8 = FUN_1800bdc80();
      puStack_678 = (uint *)CONCAT44(puStack_678._4_4_,0xffffffff);
      FUN_18029d150(uVar16,0x1c,uVar8);
      lVar9 = _DAT_180c86938;
    }
    else if (*(float *)(lVar3 + 0x40) <= 0.0) {
      uVar16 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
      puVar7 = (uint64_t *)FUN_1802c8dc0(lVar3,&plStack_650);
      puStack_678 = (uint *)CONCAT44(puStack_678._4_4_,0xffffffff);
      FUN_18029d150(uVar16,0x1c,*puVar7);
      if (plStack_650 != (longlong *)0x0) {
        (**(code **)(*plStack_650 + 0x38))();
      }
      lVar9 = _DAT_180c86938;
      *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1750) = 0x3f800000;
    }
    else {
      *(int32_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1750) = 0;
    }
    FUN_18029fc10(*(longlong *)(lVar9 + 0x1cd8),*(uint64_t *)(lVar9 + 0x1c70),
                  *(longlong *)(lVar9 + 0x1cd8) + 0x1100,0x6d0);
    puStack_5c8 = (void *)FUN_1800c0750();
    uVar12 = uVar14;
    if (((0 < *(int *)(_DAT_180c86920 + 0xbd0)) &&
        (uVar12 = 0, *(longlong *)(param_2 + 0x97b0) != 0)) &&
       ((*(byte *)(param_2 + 0x1bd9) & 2) == 0)) {
      uVar12 = 0x80000000;
      FUN_1800cd1b0(_DAT_180c86920,param_2,1);
    }
    uVar13 = (ulonglong)((uint)uVar12 | 0x200);
    if (*(int *)(param_2 + 0x9a34) != 0) {
      uVar13 = uVar12;
    }
    uStack_640 = (uint)uVar13;
    iStack_654 = 0;
    iVar6 = (int)(*(longlong *)(param_2 + 0x9898) - *(longlong *)(param_2 + 0x9890) >> 4);
    plStack_650 = (longlong *)(longlong)iVar6;
    if (0 < iVar6) {
      uVar15 = 1;
      do {
        uVar12 = 0;
        lVar3 = *(longlong *)(param_2 + 0x9890);
        uStack_648 = CONCAT44(uStack_648._4_4_,*(int32_t *)(uVar14 + 8 + lVar3));
        bVar1 = *(byte *)(uVar14 + lVar3);
        uStack_664 = (uint)bVar1;
        uVar2 = *(uint *)(uVar14 + 0xc + lVar3);
        puStack_478 = &UNK_18098bb30;
        puStack_470 = auStack_460;
        uStack_468 = 0;
        auStack_460[0] = 0;
        FUN_1802d3af0(&puStack_478,&UNK_180a190f0,uVar15);
        puVar11 = &DAT_18098bc73;
        if (puStack_470 != (void *)0x0) {
          puVar11 = puStack_470;
        }
        FUN_1802c22a0(auStack_668,puVar11);
        puVar11 = &DAT_18098bc73;
        if (puStack_470 != (void *)0x0) {
          puVar11 = puStack_470;
        }
        ppuStack_660 = &puStack_538;
        puStack_538 = &UNK_1809fcc58;
        puStack_530 = auStack_520;
        uStack_528 = 0;
        auStack_520[0] = 0;
        if (puVar11 != (void *)0x0) {
          FUN_180049bf0(&puStack_538);
          FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_538);
        }
        if ((uVar2 >> 0x10 & 1) != 0) {
          uVar12 = *(ulonglong *)(_DAT_180c86970 + 0x158);
        }
        uStack_620 = *(ulonglong *)(_DAT_180c86970 + 0x128 + (ulonglong)bVar1 * 8) | uVar12;
        uStack_5a8 = (uint)uVar13;
        uStack_5a4 = 0;
        plStack_608 = (longlong *)0x0;
        puStack_600 = &UNK_180a3c3e0;
        uStack_5e8 = 0;
        lStack_5f8 = 0;
        uStack_5f0 = 0;
        plStack_5d0 = (longlong *)0x0;
        puStack_628 = puStack_5c8;
        uStack_618 = CONCAT26(uStack_5a2,(uint6)uStack_5a8);
        uStack_610 = 2;
        uStack_5e0 = 0;
        uStack_5dc = 0;
        uStack_5d8 = 0;
        uStack_5d4 = 0;
        uVar16 = *(uint64_t *)(puStack_5c8 + 0x15b8);
        puStack_598 = puStack_5c8;
        uStack_580 = 2;
        uStack_578 = 0;
        ppuStack_660 = &puStack_598;
        uStack_5b0 = uStack_620;
        uStack_590 = uStack_620;
        uStack_588 = uStack_618;
        FUN_180627ae0(auStack_570,&puStack_600);
        uStack_550 = CONCAT44(uStack_5dc,uStack_5e0);
        uStack_548 = CONCAT44(uStack_5d4,uStack_5d8);
        plStack_540 = plStack_5d0;
        if (plStack_5d0 != (longlong *)0x0) {
          (**(code **)(*plStack_5d0 + 0x28))();
        }
        lVar9 = FUN_180299eb0(uVar16,param_2,&puStack_598,auStack_658);
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        if ((lVar9 != 0) && (*(longlong *)(lVar3 + 0x82a0) != (longlong)**(int **)(lVar9 + 0x10))) {
          (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x228))
                    (*(longlong **)(lVar3 + 0x8400),*(uint64_t *)(*(int **)(lVar9 + 0x10) + 6),0,0
                    );
          *(longlong *)(lVar3 + 0x82a0) = (longlong)**(int **)(lVar9 + 0x10);
        }
        lVar9 = _DAT_180c86938;
        uVar16 = *(uint64_t *)(param_2 + 0x12464);
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        *(uint64_t *)(lVar3 + 0x1ef0) = *(uint64_t *)(param_2 + 0x1245c);
        *(uint64_t *)(lVar3 + 0x1ef8) = uVar16;
        iVar6 = (int)uStack_648;
        *(int *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1f04) = (int)uStack_648;
        *(int *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1f08) =
             (int)(*(float *)(param_2 + 0x124e4) * 255.0) % 0xff;
        *(int *)(*(longlong *)(lVar9 + 0x1cd8) + 0x1f00) = iStack_654;
        uVar16 = *(uint64_t *)(param_2 + 0x128);
        lVar3 = *(longlong *)(lVar9 + 0x1cd8);
        *(uint64_t *)(lVar3 + 0x1f10) = *(uint64_t *)(param_2 + 0x120);
        *(uint64_t *)(lVar3 + 0x1f18) = uVar16;
        lVar3 = *(longlong *)(lVar9 + 0x1cd8);
        uVar16 = *(uint64_t *)(lVar9 + 0x1cc8);
        FUN_18029fc10(lVar3,uVar16,lVar3 + 0x1ef0,0x30);
        FUN_18029dca0(lVar3,0xb,0x20,uVar16);
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        if (((*(longlong *)(lVar3 + 0x8640) != 0) || (*(int *)(lVar3 + 0x893c) != -1)) ||
           (*(int *)(lVar3 + 0x8b3c) != 0x30)) {
          auStack_638[0] = 0;
          (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x40))
                    (*(longlong **)(lVar3 + 0x8400),0x41,1,auStack_638);
          (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x218))
                    (*(longlong **)(lVar3 + 0x8400),0x41,1,auStack_638);
          *(uint64_t *)(lVar3 + 0x8640) = 0;
          *(int32_t *)(lVar3 + 0x893c) = 0xffffffff;
          *(int32_t *)(lVar3 + 0x8b3c) = 0x30;
          *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
        }
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        if (((*(longlong *)(param_2 + 0x123f0) == 0) && (lVar9 = FUN_1800bdc80(), lVar9 == 0)) ||
           (lVar9 = FUN_18023a940(), lVar9 == 0)) {
          lVar9 = 0;
        }
        else if ((*(longlong *)(lVar9 + 8) == 0) && (*(longlong *)(lVar9 + 0x10) == 0)) {
          lVar9 = 0;
        }
        if ((((*(longlong *)(lVar3 + 0x84c0) != lVar9) || (*(int *)(lVar3 + 0x887c) != -1)) ||
            (*(int *)(lVar3 + 0x8a7c) != 0x20)) &&
           (((lVar9 == 0 || (*(longlong *)(lVar9 + 8) != 0)) || (*(longlong *)(lVar9 + 0x10) != 0)))
           ) {
          uStack_5c0 = 0;
          if (lVar9 != 0) {
            uStack_5c0 = *(uint64_t *)(lVar9 + 0x10);
          }
          (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x218))
                    (*(longlong **)(lVar3 + 0x8400),0x11,1,&uStack_5c0);
          *(longlong *)(lVar3 + 0x84c0) = lVar9;
          *(int32_t *)(lVar3 + 0x887c) = 0xffffffff;
          *(int32_t *)(lVar3 + 0x8a7c) = 0x20;
          *(int *)(lVar3 + 0x82b4) = *(int *)(lVar3 + 0x82b4) + 1;
        }
        lVar5 = _DAT_180c86870;
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        lVar9 = *(longlong *)(param_2 + 0x98b0);
        if ((lVar9 == 0) ||
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224), lVar9 == -0x10
           )) {
          uStack_648 = 0;
        }
        else {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          uStack_648 = *(uint64_t *)(lVar9 + 0x18);
        }
        plVar4 = *(longlong **)(lVar3 + 0x8400);
        (**(code **)(*plVar4 + 0x218))(plVar4,0x4a,1,&uStack_648);
        lVar5 = _DAT_180c86870;
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        lVar9 = *(longlong *)(param_2 + 0x98b8);
        if ((lVar9 == 0) ||
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224), lVar9 == -0x10
           )) {
          uStack_5b8 = 0;
        }
        else {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          uStack_5b8 = *(uint64_t *)(lVar9 + 0x18);
        }
        plVar4 = *(longlong **)(lVar3 + 0x8400);
        (**(code **)(*plVar4 + 0x218))(plVar4,0x4b,1,&uStack_5b8);
        lVar5 = _DAT_180c86870;
        lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        lVar9 = *(longlong *)(param_2 + 0x9870);
        if ((lVar9 == 0) ||
           (*(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(_DAT_180c86870 + 0x224), lVar9 == -0x10
           )) {
          ppuStack_660 = (void **)0x0;
        }
        else {
          *(int32_t *)(lVar9 + 0x16c) = *(int32_t *)(lVar5 + 0x224);
          ppuStack_660 = *(void ***)(lVar9 + 0x18);
        }
        plVar4 = *(longlong **)(lVar3 + 0x8400);
        (**(code **)(*plVar4 + 0x218))(plVar4,1,1,&ppuStack_660);
        uStack_670 = 1;
        puStack_678._0_4_ = 0xffffffff;
        FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,1,*(uint64_t *)(param_2 + 0x9700)
                     );
        uStack_670 = 1;
        puStack_678 = (uint *)CONCAT44(puStack_678._4_4_,0xffffffff);
        FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),2,1,*(uint64_t *)(param_2 + 0x9708)
                     );
        aiStack_58[0] = 0x10;
        aiStack_58[1] = 0x20;
        aiStack_58[2] = 0x20;
        aiStack_58[3] = 0x20;
        aiStack_58[4] = 0x20;
        aiStack_58[5] = 0x20;
        iVar10 = aiStack_58[bVar1] / (1 << ((byte)uStack_664 & 0x1f));
        plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
        (**(code **)(*plVar4 + 0x148))(plVar4,(iVar6 + -1) / (iVar10 * iVar10) + 1,1);
        uStack_664 = 0xffffffff;
        ppuStack_660 = (void **)0x0;
        plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
        puStack_678 = &uStack_664;
        (**(code **)(*plVar4 + 0x220))(plVar4,1,1,&ppuStack_660);
        uStack_664 = 0xffffffff;
        ppuStack_660 = (void **)0x0;
        plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
        puStack_678 = &uStack_664;
        (**(code **)(*plVar4 + 0x220))(plVar4,2,1,&ppuStack_660);
        iStack_654 = iStack_654 + iVar6;
        if (plStack_5d0 != (longlong *)0x0) {
          (**(code **)(*plStack_5d0 + 0x38))();
        }
        ppuStack_660 = &puStack_600;
        puStack_600 = &UNK_180a3c3e0;
        if (lStack_5f8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_5f8 = 0;
        uStack_5e8 = uStack_5e8 & 0xffffffff00000000;
        puStack_600 = &UNK_18098bcb0;
        if (plStack_608 != (longlong *)0x0) {
          (**(code **)(*plStack_608 + 0x38))();
        }
        FUN_1802c2ac0(&puStack_538);
        _DAT_180c8695c = _DAT_180c8695c + -1;
        (**(code **)(*_DAT_180c86968 + 0x20))();
        puStack_478 = &UNK_18098bcb0;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        uVar14 = uVar14 + 0x10;
        plStack_650 = (longlong *)((longlong)plStack_650 + -1);
        uVar13 = (ulonglong)uStack_640;
      } while (plStack_650 != (longlong *)0x0);
    }
    FUN_1802c2ac0(&puStack_4d8);
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_698);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




