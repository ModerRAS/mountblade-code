#include "TaleWorlds.Native.Split.h"

// 99_part_08_part027_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804f9d70(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
void FUN_1804f9d70(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong param_5,undefined8 *param_6,undefined8 param_7,int param_8,int param_9)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  int iVar22;
  byte bVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_738 [32];
  undefined8 *puStack_718;
  undefined4 *puStack_710;
  undefined8 uStack_708;
  float fStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  uint auStack_6d8 [2];
  undefined8 uStack_6d0;
  uint auStack_6c8 [2];
  undefined4 *puStack_6c0;
  int aiStack_6b8 [2];
  longlong lStack_6b0;
  float *pfStack_6a8;
  uint **ppuStack_6a0;
  int iStack_698;
  uint uStack_694;
  int iStack_690;
  ulonglong uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_668;
  ulonglong uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  float fStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 uStack_630;
  uint uStack_628;
  undefined4 uStack_624;
  longlong lStack_618;
  undefined8 *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  ulonglong uStack_5f8;
  longlong lStack_5f0;
  ulonglong uStack_5e8;
  undefined8 uStack_5e0;
  int iStack_5d8;
  int iStack_5d4;
  longlong lStack_5d0;
  float *pfStack_5c8;
  float fStack_5c0;
  float fStack_5bc;
  longlong lStack_5b8;
  undefined8 uStack_5b0;
  ulonglong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  uint *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  undefined4 uStack_564;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  uint auStack_538 [256];
  uint *puStack_138;
  uint *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  int iStack_118;
  byte bStack_114;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulonglong auStack_e8 [22];
  
  uStack_598 = 0xfffffffffffffffe;
  auStack_e8[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_738;
  lStack_5d0 = param_5;
  iStack_690 = param_9;
  param_9 = param_9 * param_8;
  lVar9 = *(longlong *)(param_1 + 0x18);
  ppuStack_6a0 = &puStack_138;
  puStack_138 = (uint *)0x0;
  puStack_130 = (uint *)0x0;
  uVar8 = 0;
  uStack_128 = 0;
  uStack_120 = 3;
  bStack_114 = 1;
  iStack_118 = 0;
  lVar21 = (longlong)param_9;
  iVar15 = (int)(*(longlong *)(lVar9 + 0x2f68) - *(longlong *)(lVar9 + 0x2f60) >> 4);
  puStack_6c0 = param_4;
  lStack_6b0 = lVar9;
  lStack_618 = param_2;
  lStack_5f0 = param_1;
  lStack_5b8 = lVar21;
  if (param_9 == 1) {
    auStack_6d8[0] = 0;
    if (0 < iVar15) {
      do {
        uVar5 = (uint)uVar8;
        plVar7 = (longlong *)((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar9 + 0x2f60));
        lVar13 = *plVar7;
        if (((*(byte *)(lVar13 + 0x139) & 1) != 0) &&
           (fVar28 = *(float *)(lVar13 + 0xec) - *(float *)((longlong)param_6 + 0x1c),
           fVar30 = *(float *)(lVar13 + 0xe8) - *(float *)(param_6 + 3),
           fVar27 = *(float *)(plVar7 + 1), fVar30 * fVar30 + fVar28 * fVar28 < fVar27 * fVar27)) {
          if (bStack_114 != 0) {
            if (iStack_118 + 1 < 0x101) {
              auStack_538[iStack_118] = uVar5;
              iStack_118 = iStack_118 + 1;
              goto LAB_1804f9f81;
            }
            FUN_18014e8b0(&puStack_138,0x200);
            puVar18 = auStack_538;
            if (bStack_114 == 0) {
              puVar18 = puStack_138;
            }
            puVar14 = auStack_538;
            if (bStack_114 == 0) {
              puVar14 = puStack_138;
            }
            FUN_180455b60(&puStack_138,puVar14,puVar18 + 0x100);
            bStack_114 = 0;
          }
          FUN_1800571e0(&puStack_138,auStack_6d8);
        }
LAB_1804f9f81:
        auStack_6d8[0] = uVar5 + 1;
        uVar8 = (ulonglong)auStack_6d8[0];
      } while ((int)auStack_6d8[0] < iVar15);
    }
  }
  else if (param_9 < 3) {
    puVar16 = &uStack_680;
    lVar13 = 2;
    do {
      func_0x00018005d390(puVar16);
      puVar16 = puVar16 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar27 = *(float *)(param_3 + -8 + lVar21 * 8);
    fVar28 = *(float *)(param_3 + -4 + lVar21 * 8);
    uStack_6d0 = CONCAT44((fVar28 * param_7._4_4_ - fVar27 * (float)param_7) +
                          *(float *)((longlong)param_6 + 0x1c),
                          fVar28 * (float)param_7 + fVar27 * param_7._4_4_ + *(float *)(param_6 + 3)
                         );
    uStack_680 = uStack_6d0;
    fVar27 = *(float *)(param_3 + -0x10 + lVar21 * 8);
    fVar28 = *(float *)(param_3 + -0xc + lVar21 * 8);
    uStack_6d0 = CONCAT44((fVar28 * param_7._4_4_ - fVar27 * (float)param_7) +
                          *(float *)((longlong)param_6 + 0x1c),
                          fVar28 * (float)param_7 + fVar27 * param_7._4_4_ + *(float *)(param_6 + 3)
                         );
    uStack_678 = uStack_6d0;
    auStack_6c8[0] = 0;
    if (0 < iVar15) {
      do {
        uVar5 = auStack_6c8[0];
        plVar7 = (longlong *)((longlong)(int)auStack_6c8[0] * 0x10 + *(longlong *)(lVar9 + 0x2f60));
        lVar13 = *plVar7;
        if (((*(byte *)(lVar13 + 0x139) & 1) != 0) &&
           (fVar27 = *(float *)(plVar7 + 1),
           fVar28 = (float)FUN_18038a130(&uStack_680,&uStack_678,lVar13 + 0xe8),
           fVar28 < fVar27 * fVar27)) {
          FUN_1804fb4f0(auStack_538,auStack_6c8);
        }
        auStack_6c8[0] = uVar5 + 1;
      } while ((int)auStack_6c8[0] < iVar15);
    }
  }
  else {
    fVar30 = 3.4028235e+38;
    fVar39 = 3.4028235e+38;
    fVar27 = -3.4028235e+38;
    fVar28 = -3.4028235e+38;
    if (3 < lVar21) {
      pfVar11 = (float *)(param_3 + 0x14);
      lVar13 = (lVar21 - 4U >> 2) + 1;
      uVar8 = lVar13 * 4;
      do {
        fVar25 = pfVar11[-5];
        fVar32 = pfVar11[-4];
        fVar26 = fVar25;
        if (fVar30 <= fVar25) {
          fVar26 = fVar30;
        }
        if (fVar25 <= fVar27) {
          fVar25 = fVar27;
        }
        fVar27 = fVar32;
        if (fVar39 <= fVar32) {
          fVar27 = fVar39;
        }
        if (fVar32 <= fVar28) {
          fVar32 = fVar28;
        }
        fVar28 = pfVar11[-3];
        fVar30 = pfVar11[-2];
        fVar39 = fVar28;
        if (fVar26 <= fVar28) {
          fVar39 = fVar26;
        }
        if (fVar28 <= fVar25) {
          fVar28 = fVar25;
        }
        fVar25 = fVar30;
        if (fVar27 <= fVar30) {
          fVar25 = fVar27;
        }
        if (fVar30 <= fVar32) {
          fVar30 = fVar32;
        }
        fVar32 = pfVar11[-1];
        fVar26 = *pfVar11;
        fVar29 = fVar32;
        if (fVar39 <= fVar32) {
          fVar29 = fVar39;
        }
        if (fVar32 <= fVar28) {
          fVar32 = fVar28;
        }
        fVar31 = fVar26;
        if (fVar25 <= fVar26) {
          fVar31 = fVar25;
        }
        if (fVar26 <= fVar30) {
          fVar26 = fVar30;
        }
        fVar27 = pfVar11[1];
        fVar28 = pfVar11[2];
        fVar30 = fVar27;
        if (fVar29 <= fVar27) {
          fVar30 = fVar29;
        }
        if (fVar27 <= fVar32) {
          fVar27 = fVar32;
        }
        fVar39 = fVar28;
        if (fVar31 <= fVar28) {
          fVar39 = fVar31;
        }
        if (fVar28 <= fVar26) {
          fVar28 = fVar26;
        }
        pfVar11 = pfVar11 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    for (; (longlong)uVar8 < lVar21; uVar8 = uVar8 + 1) {
      fVar25 = *(float *)(param_3 + uVar8 * 8);
      fVar32 = *(float *)(param_3 + 4 + uVar8 * 8);
      fVar26 = fVar25;
      if (fVar30 <= fVar25) {
        fVar26 = fVar30;
      }
      if (fVar25 <= fVar27) {
        fVar25 = fVar27;
      }
      fVar27 = fVar32;
      if (fVar39 <= fVar32) {
        fVar27 = fVar39;
      }
      if (fVar32 <= fVar28) {
        fVar32 = fVar28;
      }
      fVar30 = fVar26;
      fVar39 = fVar27;
      fVar27 = fVar25;
      fVar28 = fVar32;
    }
    if (fVar27 == fVar30) {
      fVar27 = fVar27 + 0.0001;
    }
    if (fVar28 == fVar39) {
      fVar28 = fVar28 + 0.0001;
    }
    puVar16 = &uStack_108;
    lVar13 = 4;
    do {
      func_0x00018005d390(puVar16);
      puVar16 = puVar16 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar25 = *(float *)((longlong)param_6 + 0x1c);
    fVar32 = *(float *)(param_6 + 3);
    uStack_6d0 = CONCAT44((param_7._4_4_ * fVar39 - (float)param_7 * fVar30) + fVar25,
                          (float)param_7 * fVar39 + param_7._4_4_ * fVar30 + fVar32);
    uStack_108 = uStack_6d0;
    uStack_6d0 = CONCAT44((param_7._4_4_ * fVar39 - (float)param_7 * fVar27) + fVar25,
                          param_7._4_4_ * fVar27 + (float)param_7 * fVar39 + fVar32);
    uStack_100 = uStack_6d0;
    uStack_6d0 = CONCAT44((param_7._4_4_ * fVar28 - (float)param_7 * fVar27) + fVar25,
                          (float)param_7 * fVar28 + param_7._4_4_ * fVar27 + fVar32);
    uStack_f8 = uStack_6d0;
    uStack_6d0 = CONCAT44((param_7._4_4_ * fVar28 - (float)param_7 * fVar30) + fVar25,
                          (float)param_7 * fVar28 + param_7._4_4_ * fVar30 + fVar32);
    uStack_f0 = uStack_6d0;
    ppuStack_6a0 = &puStack_588;
    puStack_588 = (uint *)0x0;
    uStack_580 = 0;
    uStack_578 = 0;
    fStack_570 = 4.2039e-45;
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    puStack_610 = &uStack_108;
    FUN_180640330(&uStack_108,auStack_e8);
    FUN_18063f960(&puStack_588,&puStack_610,4);
    auStack_6d8[0] = 0;
    if (0 < iVar15) {
      do {
        uVar5 = auStack_6d8[0];
        plVar7 = (longlong *)((longlong)(int)auStack_6d8[0] * 0x10 + *(longlong *)(lVar9 + 0x2f60));
        if (((*(byte *)(*plVar7 + 0x139) & 1) != 0) &&
           ((fVar27 = (float)FUN_18063ee10(&puStack_588,*plVar7 + 0xe8,&ppuStack_6a0),
            fVar27 < *(float *)(plVar7 + 1) ||
            (cVar3 = FUN_18063e7e0(&puStack_588,*plVar7 + 0xe8), cVar3 != '\0')))) {
          if (bStack_114 != 0) {
            if (iStack_118 + 1 < 0x101) {
              auStack_538[iStack_118] = uVar5;
              iStack_118 = iStack_118 + 1;
              goto LAB_1804fa35d;
            }
            FUN_18014e8b0(&puStack_138,0x200);
            puVar18 = auStack_538;
            if (bStack_114 == 0) {
              puVar18 = puStack_138;
            }
            puVar14 = auStack_538;
            if (bStack_114 == 0) {
              puVar14 = puStack_138;
            }
            FUN_180455b60(&puStack_138,puVar14,puVar18 + 0x100);
            bStack_114 = 0;
          }
          FUN_1800571e0(&puStack_138,auStack_6d8);
        }
LAB_1804fa35d:
        auStack_6d8[0] = uVar5 + 1;
      } while ((int)auStack_6d8[0] < iVar15);
    }
    ppuStack_6a0 = &puStack_588;
    if (puStack_588 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  uStack_668 = *param_6;
  pfStack_5c8 = (float *)(param_6 + 3);
  fVar27 = *pfStack_5c8;
  fVar28 = *(float *)((longlong)param_6 + 0x1c);
  uStack_650 = *(undefined8 *)pfStack_5c8;
  fVar30 = *(float *)(param_6 + 4);
  uVar38 = *(undefined4 *)((longlong)param_6 + 0x24);
  uVar41 = *(undefined4 *)(param_6 + 5);
  uVar43 = *(undefined4 *)((longlong)param_6 + 0x2c);
  uVar45 = *(undefined4 *)(param_6 + 6);
  uVar47 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_660 = param_6[1];
  uStack_6d0 = param_6[2];
  uVar2 = param_6[7];
  auStack_6d8[0] = *(uint *)(param_6 + 8);
  iStack_698 = *(int *)(lStack_618 + 4);
  auStack_6c8[0] = auStack_6d8[0];
  uStack_694 = auStack_6d8[0];
  uStack_658 = uStack_6d0;
  fStack_648 = fVar30;
  uStack_644 = uVar38;
  uStack_640 = uVar41;
  uStack_63c = uVar43;
  uStack_638 = uVar45;
  uStack_634 = uVar47;
  uStack_630 = uVar2;
  uStack_628 = auStack_6d8[0];
  uStack_608 = uStack_6d0;
  uStack_600 = uStack_668;
  uStack_5f8 = uStack_660;
  uStack_5e8 = uStack_660;
  uStack_5e0 = uStack_6d0;
  uStack_5b0 = uStack_668;
  uStack_5a8 = uStack_660;
  uStack_5a0 = uStack_668;
  fStack_570 = fVar27;
  fStack_56c = fVar28;
  fStack_568 = fVar30;
  uStack_564 = uVar38;
  FUN_180487c70(param_6,2);
  if ((*(int *)(param_6 + 8) < 2) ||
     (puStack_610 = (undefined8 *)param_6[1], puStack_610 == (undefined8 *)0x0)) {
    uVar19 = 0;
    uVar8 = lVar21 * 4 + 3U >> 2;
    if (puStack_6c0 + lVar21 < puStack_6c0) {
      uVar8 = uVar19;
    }
    if (uVar8 != 0) {
      uVar12 = uVar19;
      puVar17 = puStack_6c0;
      if ((3 < uVar8) &&
         ((&UNK_1809f7764 < puStack_6c0 || (uVar12 = 0, puStack_6c0 + (uVar8 - 1) < &UNK_1809f7764))
         )) {
        do {
          uVar19 = uVar19 + 4;
        } while (uVar19 != (uVar8 & 0xfffffffffffffffc));
        for (uVar12 = uVar8 & 0x3ffffffffffffffc; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar17 = 1;
          puVar17 = puVar17 + 1;
        }
        puVar17 = puStack_6c0 + (uVar8 & 0xfffffffffffffffc);
        uVar12 = uVar19;
      }
      for (; uVar12 != uVar8; uVar12 = uVar12 + 1) {
        *puVar17 = 1;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if (0 < lVar21) {
    pfVar11 = (float *)(param_3 + 4);
    lStack_618 = lStack_618 - param_3;
    puVar17 = puStack_6c0;
    fVar39 = fVar27;
    fVar25 = fVar28;
    fVar32 = fVar30;
    uVar37 = uVar38;
    fVar26 = fVar27;
    fVar29 = fVar28;
    fVar31 = fVar30;
    uVar48 = uVar38;
    uVar49 = uVar41;
    uVar50 = uVar43;
    uVar51 = uVar45;
    uVar52 = uVar47;
    uVar53 = uVar41;
    uVar54 = uVar43;
    uVar55 = uVar45;
    uVar56 = uVar47;
    do {
      iVar15 = *(int *)(lStack_618 + -4 + (longlong)pfVar11);
      uStack_688 = CONCAT44(uStack_688._4_4_,iVar15);
      aiStack_6b8[0] = *(int *)(lStack_618 + (longlong)pfVar11);
      ppuStack_6a0 = (uint **)(longlong)(iStack_690 * iVar15 + aiStack_6b8[0]);
      pfStack_6a8 = pfVar11;
      fVar33 = fVar39;
      fVar34 = fVar25;
      fVar35 = fVar32;
      uVar36 = uVar37;
      uVar40 = uVar53;
      uVar42 = uVar54;
      uVar44 = uVar55;
      uVar46 = uVar56;
      if (puVar17[(longlong)ppuStack_6a0] == 0) {
        bVar24 = iStack_698 != aiStack_6b8[0];
        uStack_668 = uStack_5b0;
        uStack_660 = uStack_5a8;
        fVar33 = fVar27;
        fVar34 = fVar28;
        fVar35 = fVar30;
        uVar36 = uVar38;
        uVar40 = uVar41;
        uVar42 = uVar43;
        uVar44 = uVar45;
        uVar46 = uVar47;
        if (bVar24) {
          uStack_608 = uStack_5e0;
          auStack_6d8[0] = uStack_694;
          uStack_600 = uStack_5a0;
          uStack_5f8 = uStack_5e8;
          uStack_6d0 = uStack_5e0;
          auStack_6c8[0] = uStack_694;
          uStack_668 = uStack_5a0;
          uStack_660 = uStack_5e8;
          fVar33 = fVar26;
          fVar34 = fVar29;
          fVar35 = fVar31;
          uVar36 = uVar48;
          uVar40 = uVar49;
          uVar42 = uVar50;
          uVar44 = uVar51;
          uVar46 = uVar52;
          fVar39 = fVar26;
          fVar25 = fVar29;
          fVar32 = fVar31;
          uVar37 = uVar48;
          uVar53 = uVar49;
          uVar54 = uVar50;
          uVar55 = uVar51;
          uVar56 = uVar52;
          iStack_698 = aiStack_6b8[0];
          fStack_56c = fVar29;
        }
        uVar20 = uStack_608;
        uStack_650 = CONCAT44(fVar25,fVar39);
        uStack_658 = uStack_608;
        fStack_5bc = (*pfVar11 * param_7._4_4_ - pfVar11[-1] * (float)param_7) + pfStack_5c8[1];
        fStack_5c0 = pfVar11[-1] * param_7._4_4_ + *pfVar11 * (float)param_7 + *pfStack_5c8;
        uStack_628 = auStack_6d8[0];
        if ((fVar39 != fStack_5c0) || (fStack_56c != fStack_5bc)) {
          if (auStack_6d8[0] != 0) {
            uStack_628 = 0;
          }
          uStack_650 = CONCAT44(fStack_5bc,fStack_5c0);
          fVar39 = fStack_5c0;
          fVar25 = fStack_5bc;
        }
        uStack_5b0 = uStack_600;
        uStack_5a8 = uStack_5f8;
        uStack_608 = uStack_6d0;
        auStack_6d8[0] = auStack_6c8[0];
        uStack_680 = CONCAT44(fVar25,fVar39);
        uStack_678 = CONCAT44(uVar37,fVar32);
        uStack_108 = CONCAT44(uVar54,uVar53);
        uStack_100 = CONCAT44(uVar56,uVar55);
        uStack_6d0 = uVar20;
        if (bVar24) {
          uStack_5e0 = uVar20;
          fVar26 = fVar39;
          fVar29 = fVar25;
          fVar31 = fVar32;
          uVar48 = uVar37;
          uVar49 = uVar53;
          uVar50 = uVar54;
          uVar51 = uVar55;
          uVar52 = uVar56;
          uStack_694 = uStack_628;
          uStack_5e8 = uStack_660;
          uStack_5a0 = uStack_668;
        }
        puVar16 = (undefined8 *)(lStack_5d0 + (longlong)ppuStack_6a0 * 0x48);
        *puVar16 = uStack_668;
        puVar16[1] = uStack_660;
        puVar16 = (undefined8 *)(lStack_5d0 + 0x10 + (longlong)ppuStack_6a0 * 0x48);
        *puVar16 = uVar20;
        puVar16[1] = uStack_650;
        puVar16 = (undefined8 *)(lStack_5d0 + 0x20 + (longlong)ppuStack_6a0 * 0x48);
        *puVar16 = CONCAT44(uVar37,fVar32);
        puVar16[1] = CONCAT44(uVar54,uVar53);
        uStack_630._0_4_ = (undefined4)uVar2;
        uStack_630._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        puVar1 = (undefined4 *)(lStack_5d0 + 0x30 + (longlong)ppuStack_6a0 * 0x48);
        *puVar1 = uVar55;
        puVar1[1] = uVar56;
        puVar1[2] = (undefined4)uStack_630;
        puVar1[3] = uStack_630._4_4_;
        *(ulonglong *)(lStack_5d0 + 0x40 + (longlong)ppuStack_6a0 * 0x48) =
             CONCAT44(uStack_624,uStack_628);
        bVar23 = 1;
        bVar10 = 1;
        fVar27 = fVar39;
        fVar28 = fVar25;
        fVar30 = fVar32;
        uVar38 = uVar37;
        uVar41 = uVar53;
        uVar43 = uVar54;
        uVar45 = uVar55;
        uVar47 = uVar56;
        auStack_6c8[0] = uStack_628;
        fStack_648 = fVar32;
        uStack_644 = uVar37;
        uStack_640 = uVar53;
        uStack_63c = uVar54;
        uStack_638 = uVar55;
        uStack_634 = uVar56;
        uStack_630 = uVar2;
        uStack_600 = uStack_668;
        uStack_5f8 = uStack_660;
        fStack_570 = fVar33;
        fStack_56c = fVar34;
        fStack_568 = fVar35;
        uStack_564 = uVar36;
        if ((*(longlong *)(lVar9 + 0x2ee8) - *(longlong *)(lVar9 + 12000) & 0xfffffffffffffff8U) !=
            0) {
          cVar3 = FUN_1804f6190(lStack_5f0,&uStack_650);
          if (cVar3 == '\0') {
            bVar10 = 0;
            pfStack_6a8 = pfVar11;
          }
          else {
            FUN_180487c70(&uStack_668,1);
            if (((int)uStack_628 < 1) || (uStack_660 == 0)) {
LAB_1804fab80:
              pfStack_6a8 = pfVar11;
              bVar10 = 0;
              fVar27 = fVar39;
              fVar28 = fVar25;
              fVar30 = fVar32;
              uVar38 = uVar37;
            }
            else {
              FUN_180487c70(&uStack_668);
              lVar21 = lStack_6b0;
              uVar19 = 0;
              uVar8 = uVar19;
              if (0 < (int)uStack_628) {
                uVar8 = uStack_660;
              }
              if (*(int *)(puStack_610 + 0x25) == *(int *)(uVar8 + 0x128)) {
                uVar8 = (ulonglong)bStack_114;
                puVar18 = puStack_138;
                while( true ) {
                  iVar15 = iStack_690;
                  puVar17 = puStack_6c0;
                  iVar6 = iStack_118;
                  if ((char)uVar8 == '\0') {
                    iVar6 = (int)((longlong)puStack_130 - (longlong)puVar18 >> 2);
                  }
                  iVar22 = (int)uVar19;
                  if (iVar6 <= iVar22) break;
                  puVar14 = puVar18;
                  if ((char)uVar8 != '\0') {
                    puVar14 = auStack_538;
                  }
                  uVar20 = *(undefined8 *)
                            (*(longlong *)(lVar21 + 0x2f60) + (longlong)(int)puVar14[iVar22] * 0x10)
                  ;
                  cVar3 = FUN_18038d0a0(uVar20,&uStack_650);
                  if (cVar3 != '\0') {
                    fVar28 = (float)func_0x00018038d2f0(uVar20,&uStack_650);
                    FUN_180487c70(&uStack_668,1);
                    fVar27 = fStack_648;
                    if ((int)uStack_628 < 1) {
                      fVar27 = -NAN;
                    }
                    if (ABS(fVar28 - fVar27) < 1.5) {
                      bVar23 = 0;
                    }
                    uVar8 = (ulonglong)bStack_114;
                    puVar18 = puStack_138;
                  }
                  uVar19 = (ulonglong)(iVar22 + 1);
                }
                bVar10 = bVar23;
                if (bVar23 != 0) {
                  puStack_710 = puStack_6c0;
                  puStack_718 = (undefined8 *)CONCAT44(puStack_718._4_4_,iStack_690);
                  FUN_1804f9980(&iStack_5d8,uStack_688 & 0xffffffff,aiStack_6b8[0],param_8);
                  if (-1 < iStack_5d8) {
                    plVar7 = (longlong *)
                             (lStack_5d0 + (longlong)(iStack_5d8 * iVar15 + iStack_5d4) * 0x48);
                    fVar28 = 1.5;
                    fVar27 = *(float *)((longlong)plVar7 + 0x1c) - uStack_650._4_4_;
                    fVar27 = (*(float *)(plVar7 + 3) - (float)uStack_650) *
                             (*(float *)(plVar7 + 3) - (float)uStack_650) + fVar27 * fVar27;
                    if (1.0 < fVar27) {
                      fVar28 = SQRT(SQRT(fVar27)) * 1.5;
                    }
                    FUN_180487c70(&uStack_668,1);
                    fVar27 = fStack_648;
                    if ((int)uStack_628 < 1) {
                      fVar27 = -NAN;
                    }
                    FUN_180487c70(plVar7,1);
                    pfVar11 = pfStack_5c8;
                    if ((int)plVar7[8] < 1) {
                      fVar30 = -NAN;
                    }
                    else {
                      fVar30 = *(float *)(plVar7 + 4);
                    }
                    bVar10 = 0;
                    if (ABS(fVar27 - fVar30) <= fVar28) {
                      bVar10 = bVar23;
                    }
                    if (bVar10 != 0) {
                      fVar27 = ABS(uStack_650._4_4_ - pfStack_5c8[1]) +
                               ABS((float)uStack_650 - *pfStack_5c8);
                      if (*plVar7 != 0) {
                        uStack_688 = CONCAT44(uStack_688._4_4_,(int)plVar7[3]);
                        sVar4 = _fdtest(&uStack_688);
                        if (sVar4 != 2) {
                          aiStack_6b8[0] = *(int *)((longlong)plVar7 + 0x1c);
                          sVar4 = _fdtest(aiStack_6b8);
                          if (((sVar4 != 2) && (FUN_180487c70(plVar7,1), 0 < (int)plVar7[8])) &&
                             (plVar7[1] != 0)) {
                            uStack_688 = *(longlong *)(lStack_5f0 + 0x18) + 0x2a68;
                            fVar27 = fVar27 + fVar27;
                            if (10.0 <= fVar27) {
                              fVar27 = 10.0;
                            }
                            FUN_180487c70(&uStack_668,1);
                            uVar8 = 0;
                            if (0 < (int)uStack_628) {
                              uVar8 = uStack_660;
                            }
                            FUN_180487c70(plVar7,1);
                            lVar9 = 0;
                            if (0 < (int)plVar7[8]) {
                              lVar9 = plVar7[1];
                            }
                            uStack_6e8 = 0x3f800000;
                            uStack_6f0 = 0;
                            uStack_6f8 = 0;
                            uStack_708 = 0;
                            puStack_710 = (undefined4 *)
                                          ((ulonglong)puStack_710 & 0xffffffff00000000);
                            puStack_718 = &uStack_650;
                            fStack_700 = fVar27;
                            cVar3 = FUN_180393610(uStack_688,lVar9,uVar8,plVar7 + 3);
                            lVar9 = lStack_6b0;
                            pfVar11 = pfStack_6a8;
                            fVar27 = (float)uStack_680;
                            fVar39 = (float)uStack_680;
                            fVar28 = uStack_680._4_4_;
                            fVar25 = uStack_680._4_4_;
                            fVar30 = (float)uStack_678;
                            fVar32 = (float)uStack_678;
                            uVar38 = uStack_678._4_4_;
                            uVar37 = uStack_678._4_4_;
                            uVar41 = (undefined4)uStack_108;
                            uVar43 = uStack_108._4_4_;
                            uVar45 = (undefined4)uStack_100;
                            uVar47 = uStack_100._4_4_;
                            if (cVar3 == '\0') goto LAB_1804fab80;
                            goto LAB_1804fac18;
                          }
                        }
                      }
                      lVar9 = *(longlong *)(lStack_5f0 + 0x18);
                      FUN_180487c70(&uStack_668,1);
                      uVar8 = 0;
                      if (0 < (int)uStack_628) {
                        uVar8 = uStack_660;
                      }
                      fStack_700 = fVar27 * 2.0;
                      uStack_6e8 = 0x3f800000;
                      uStack_6f0 = 0;
                      uStack_6f8 = 0;
                      uStack_708 = 0;
                      puStack_710 = (undefined4 *)((ulonglong)puStack_710 & 0xffffffff00000000);
                      puStack_718 = &uStack_650;
                      cVar3 = FUN_180393610(lVar9 + 0x2a68,puStack_610,uVar8,pfVar11);
                      uVar8 = (ulonglong)bVar10;
                      if (cVar3 == '\0') {
                        uVar8 = 0;
                      }
                      bVar10 = (byte)uVar8;
                      puVar17 = puStack_6c0;
                    }
                    uVar41 = (undefined4)uStack_108;
                    uVar43 = uStack_108._4_4_;
                    uVar45 = (undefined4)uStack_100;
                    uVar47 = uStack_100._4_4_;
                  }
                }
                lVar9 = lStack_6b0;
                fVar27 = (float)uStack_680;
                fVar28 = uStack_680._4_4_;
                fVar30 = (float)uStack_678;
                uVar38 = uStack_678._4_4_;
              }
              else {
                bVar10 = 0;
                pfStack_6a8 = pfVar11;
              }
            }
          }
        }
LAB_1804fac18:
        puVar17[(longlong)ppuStack_6a0] = (bVar10 != 0) + 1;
      }
      pfVar11 = pfStack_6a8 + 2;
      lStack_5b8 = lStack_5b8 + -1;
      fVar39 = fVar33;
      fVar25 = fVar34;
      fVar32 = fVar35;
      uVar37 = uVar36;
      uVar53 = uVar40;
      uVar54 = uVar42;
      uVar55 = uVar44;
      uVar56 = uVar46;
      pfStack_6a8 = pfVar11;
    } while (lStack_5b8 != 0);
  }
  if (bStack_114 == 0) {
    puStack_130 = puStack_138;
    bStack_114 = 1;
  }
  iStack_118 = 0;
  ppuStack_6a0 = &puStack_138;
  if (puStack_138 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(auStack_e8[0] ^ (ulonglong)auStack_738);
}



undefined8
FUN_1804fada0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,float param_5)

{
  float *pfVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  
  pfVar1 = (float *)(param_3 + 0x18);
  cVar3 = FUN_1804f6190(param_1,pfVar1);
  if (cVar3 != '\0') {
    lVar9 = *(longlong *)(param_1 + 0x18);
    if ((*(longlong *)(lVar9 + 0x2ee8) - *(longlong *)(lVar9 + 12000) & 0xfffffffffffffff8U) == 0) {
      return 1;
    }
    FUN_180487c70(param_2,2);
    if ((((1 < *(int *)(param_2 + 0x40)) && (*(longlong *)(param_2 + 8) != 0)) &&
        (FUN_180487c70(param_3,2), 1 < *(int *)(param_3 + 0x40))) &&
       (*(longlong *)(param_3 + 8) != 0)) {
      if ((*param_4 != 0) && (cVar3 = FUN_180488880(param_4 + 3), cVar3 != '\0')) {
        fVar11 = 1.5;
        fVar10 = *(float *)((longlong)param_4 + 0x1c) - *(float *)(param_3 + 0x1c);
        fVar10 = (*(float *)(param_4 + 3) - *pfVar1) * (*(float *)(param_4 + 3) - *pfVar1) +
                 fVar10 * fVar10;
        if (1.0 < fVar10) {
          fVar11 = SQRT(SQRT(fVar10)) * 1.5;
        }
        fVar10 = (float)FUN_180488840(param_3,2);
        FUN_180488840(param_4,2);
        if (fVar11 < ABS(fVar10 - extraout_XMM0_Da)) {
          return 0;
        }
      }
      plVar2 = *(longlong **)(lVar9 + 0x2f68);
      for (plVar8 = *(longlong **)(lVar9 + 0x2f60); plVar8 != plVar2; plVar8 = plVar8 + 2) {
        lVar9 = *plVar8;
        cVar3 = FUN_18038d0a0(lVar9,pfVar1);
        if ((cVar3 != '\0') &&
           (fVar10 = (float)func_0x00018038d2f0(lVar9,pfVar1), (*(byte *)(lVar9 + 0x139) & 1) != 0))
        {
          FUN_180487c70(param_3,2);
          if (*(int *)(param_3 + 0x40) < 2) {
            fVar11 = -NAN;
          }
          else {
            fVar11 = *(float *)(param_3 + 0x20);
          }
          if (ABS(fVar10 - fVar11) < 1.5) {
            return 0;
          }
        }
      }
      if ((((*param_4 == 0) || (cVar3 = FUN_180488880(param_4 + 3), cVar3 == '\0')) ||
          (FUN_180487c70(param_4,2), (int)param_4[8] < 2)) || (param_4[1] == 0)) {
        lVar9 = *(longlong *)(param_1 + 0x18);
        FUN_180487c70(param_3,2);
        uVar5 = 0;
        uVar7 = uVar5;
        if (1 < *(int *)(param_3 + 0x40)) {
          uVar7 = *(undefined8 *)(param_3 + 8);
        }
        FUN_180487c70(param_2,2);
        if (1 < *(int *)(param_2 + 0x40)) {
          uVar5 = *(undefined8 *)(param_2 + 8);
        }
        cVar3 = FUN_180393610(lVar9 + 0x2a68,uVar5,uVar7,param_2 + 0x18,pfVar1,0,0,param_5 + param_5
                              ,0,0,0x3f800000);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x18);
        param_5 = param_5 + param_5;
        if (10.0 <= param_5) {
          param_5 = 10.0;
        }
        FUN_180487c70(param_3,2);
        lVar4 = 0;
        lVar6 = lVar4;
        if (1 < *(int *)(param_3 + 0x40)) {
          lVar6 = *(longlong *)(param_3 + 8);
        }
        FUN_180487c70(param_4,2);
        if (1 < (int)param_4[8]) {
          lVar4 = param_4[1];
        }
        cVar3 = FUN_180393610(lVar9 + 0x2a68,lVar4,lVar6,param_4 + 3,pfVar1,0,0,param_5,0,0,
                              0x3f800000);
      }
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 *
FUN_1804fb120(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             float param_5,char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  int iStack_d8;
  float fStack_c8;
  float fStack_c4;
  
  if (param_5 <= 0.1) {
    param_5 = 0.1;
  }
  uVar1 = param_4[3];
  uStack_178._0_4_ = (float)param_3;
  fVar4 = (float)uStack_178;
  uStack_178._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar5 = uStack_178._4_4_;
  fVar10 = (float)uStack_178 - *(float *)(param_4 + 3);
  fVar11 = uStack_178._4_4_ - *(float *)((longlong)param_4 + 0x1c);
  uStack_168 = *param_4;
  uStack_160 = param_4[1];
  uStack_158 = param_4[2];
  uStack_130 = param_4[7];
  iStack_128 = *(int *)(param_4 + 8);
  fVar7 = fVar11 * fVar11 + fVar10 * fVar10;
  fStack_c8 = (float)uStack_178;
  fStack_c4 = uStack_178._4_4_;
  auVar8 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar9 = auVar8._0_4_;
  uStack_150 = param_4[3];
  uStack_148 = param_4[4];
  fVar9 = fVar9 * 0.5 * (3.0 - fVar7 * fVar9 * fVar9);
  uStack_140 = param_4[5];
  uStack_138 = param_4[6];
  FUN_180487c70(&uStack_168,3);
  uStack_178._0_4_ = (float)uVar1;
  uStack_178._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar7 = (fVar5 - uStack_178._4_4_) * (fVar5 - uStack_178._4_4_) +
          (fVar4 - (float)uStack_178) * (fVar4 - (float)uStack_178);
  uStack_100._0_4_ = (float)uStack_150;
  uStack_100._4_4_ = uStack_150._4_4_;
  uStack_f8 = (undefined4)uStack_148;
  uStack_f4 = uStack_148._4_4_;
  uVar1 = uStack_150;
  uVar2 = uStack_140;
  uVar3 = uStack_138;
  while( true ) {
    uStack_140._0_4_ = (undefined4)uVar2;
    uStack_140._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_138._0_4_ = (undefined4)uVar3;
    uStack_138._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_150._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_150 = uVar1;
    uStack_140 = uVar2;
    uStack_138 = uVar3;
    uStack_118 = uStack_168;
    uStack_110 = uStack_160;
    uStack_108 = uStack_158;
    uStack_e0 = uStack_130;
    iStack_d8 = iStack_128;
    if (fVar7 <= param_5 * param_5) break;
    uStack_178._0_4_ = (float)uStack_178 + fVar10 * fVar9 * param_5;
    uStack_178._4_4_ = uStack_178._4_4_ + fVar11 * fVar9 * param_5;
    uStack_f0 = (undefined4)uStack_140;
    uStack_ec = uStack_140._4_4_;
    uStack_e8 = (undefined4)uStack_138;
    uStack_e4 = uStack_138._4_4_;
    if ((((float)uStack_100 != (float)uStack_178) || (uStack_150._4_4_ != uStack_178._4_4_)) &&
       (uStack_100 = uStack_178, iStack_128 != 0)) {
      iStack_d8 = 0;
    }
    cVar6 = FUN_1804fada0(param_1,param_4,&uStack_118,&uStack_168,param_5 + param_5);
    if (cVar6 == '\0') {
      if (param_6 != '\0') goto LAB_1804fb472;
      uStack_100._0_4_ = (float)uStack_150;
      uStack_100._4_4_ = uStack_150._4_4_;
      uStack_f8 = (undefined4)uStack_148;
      uStack_f4 = uStack_148._4_4_;
    }
    else {
      uStack_140 = CONCAT44(uStack_ec,uStack_f0);
      uStack_138 = CONCAT44(uStack_e4,uStack_e8);
      uStack_168 = uStack_118;
      uStack_160 = uStack_110;
      uStack_158 = uStack_108;
      uStack_130 = uStack_e0;
      uStack_150 = uStack_100;
      uStack_148 = CONCAT44(uStack_f4,uStack_f8);
      iStack_128 = iStack_d8;
    }
    fVar7 = (fVar4 - (float)uStack_178) * (fVar4 - (float)uStack_178) +
            (fVar5 - uStack_178._4_4_) * (fVar5 - uStack_178._4_4_);
    uVar1 = uStack_150;
    uVar2 = uStack_140;
    uVar3 = uStack_138;
  }
  uStack_f0 = (undefined4)uStack_140;
  uStack_ec = uStack_140._4_4_;
  uStack_e8 = (undefined4)uStack_138;
  uStack_e4 = uStack_138._4_4_;
  if ((((float)uStack_100 != fVar4) || (uStack_150._4_4_ != fVar5)) &&
     (uStack_100 = CONCAT44(fStack_c4,fStack_c8), iStack_128 != 0)) {
    iStack_d8 = 0;
  }
  cVar6 = FUN_1804fada0(param_1,param_4,&uStack_118,&uStack_168,param_5 + param_5);
  if (cVar6 != '\0') {
    uStack_148 = CONCAT44(uStack_f4,uStack_f8);
    uStack_140 = CONCAT44(uStack_ec,uStack_f0);
    uStack_138 = CONCAT44(uStack_e4,uStack_e8);
    uStack_168 = uStack_118;
    uStack_160 = uStack_110;
    uStack_158 = uStack_108;
    uStack_130 = uStack_e0;
    uStack_150 = uStack_100;
    iStack_128 = iStack_d8;
  }
LAB_1804fb472:
  *param_2 = uStack_168;
  param_2[1] = uStack_160;
  param_2[2] = uStack_158;
  param_2[3] = uStack_150;
  param_2[4] = uStack_148;
  param_2[5] = uStack_140;
  param_2[6] = uStack_138;
  param_2[7] = uStack_130;
  param_2[8] = CONCAT44(uStack_124,iStack_128);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






