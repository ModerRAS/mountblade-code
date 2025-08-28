#include "TaleWorlds.Native.Split.h"

// 03_rendering_part555_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805735c0(longlong param_1,longlong param_2,longlong param_3,float *param_4,float param_5,
void FUN_1805735c0(longlong param_1,longlong param_2,longlong param_3,float *param_4,float param_5,
                  char param_6)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  float *pfVar25;
  char cVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  char *pcVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  undefined8 *puVar34;
  longlong lVar35;
  longlong lVar36;
  char *pcVar37;
  float *pfVar38;
  undefined1 *puVar39;
  longlong lVar40;
  float *pfVar41;
  int iVar42;
  char *pcVar43;
  float *pfVar44;
  undefined8 uVar45;
  char cVar46;
  int iVar47;
  ulonglong uVar48;
  int iVar49;
  uint *puVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_748 [32];
  int iStack_728;
  longlong lStack_720;
  float *pfStack_718;
  float *pfStack_710;
  float *pfStack_708;
  char *pcStack_700;
  float *pfStack_6f8;
  char cStack_6e8;
  char cStack_6e7;
  char cStack_6e4;
  char cStack_6e3;
  char cStack_6e0;
  char cStack_6df;
  float fStack_6dc;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  char *pcStack_6c8;
  char acStack_6c0 [4];
  float fStack_6bc;
  float *pfStack_6b8;
  float afStack_6b0 [2];
  longlong lStack_6a8;
  longlong lStack_6a0;
  longlong lStack_698;
  int iStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  longlong lStack_678;
  longlong lStack_670;
  char *pcStack_668;
  longlong lStack_660;
  ulonglong uStack_658;
  longlong lStack_650;
  int iStack_648;
  float fStack_644;
  longlong lStack_640;
  uint auStack_638 [2];
  undefined8 uStack_630;
  float afStack_628 [2];
  undefined8 uStack_620;
  undefined1 auStack_610 [8];
  float fStack_608;
  float fStack_604;
  float fStack_600;
  undefined4 uStack_5fc;
  float fStack_5f8;
  undefined8 uStack_5f0;
  float afStack_5e8 [6];
  float afStack_5d0 [6];
  undefined1 auStack_5b8 [8];
  float afStack_5b0 [16];
  float *pfStack_570;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  longlong lStack_550;
  float afStack_548 [16];
  undefined8 uStack_508;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  undefined4 uStack_4ec;
  float afStack_4e8 [4];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 auStack_448 [128];
  undefined1 auStack_3c8 [128];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_334;
  float afStack_32c [64];
  float afStack_22c [64];
  char acStack_129 [65];
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_748;
  lStack_6a8 = param_1;
  lStack_650 = *(longlong *)(param_3 + 0x10);
  lStack_678 = param_2;
  uStack_5f0 = *(undefined8 *)(lStack_650 + 0x20);
  pfStack_570 = param_4;
  lStack_698 = param_3;
  pcStack_6c8 = (char *)0x2;
  iStack_690 = 2 - (int)(*(float *)(param_1 + 0x25c4) * -30.0);
  fStack_644 = param_5 * *(float *)(param_1 + 0xa9e0);
  fVar63 = SQRT(*(float *)(lStack_650 + 0x94) * *(float *)(lStack_650 + 0x94) +
                *(float *)(lStack_650 + 0x90) * *(float *)(lStack_650 + 0x90) +
                *(float *)(lStack_650 + 0x98) * *(float *)(lStack_650 + 0x98));
  fStack_688 = fVar63;
  if (*(int *)(param_1 + 0xa8b0) == 1) {
    puVar33 = (undefined1 *)(param_1 + 0xa8b6);
    uStack_6d0 = CONCAT44(0x7f7fffff,(undefined4)uStack_6d0);
    fVar63 = 1.0 / fVar63;
    do {
      cVar26 = puVar33[-2];
      uVar5 = puVar33[-1];
      FUN_18022a890(lStack_678,cVar26,*(undefined8 *)(lStack_698 + 0x208));
      uVar6 = *(undefined1 *)(param_1 + 0x2607);
      puVar39 = auStack_448;
      lVar35 = 8;
      pfVar25 = (float *)(lStack_678 + ((longlong)cVar26 + 0x40) * 0x10);
      uStack_6d8 = CONCAT44(fVar63 * pfVar25[1],fVar63 * *pfVar25);
      uStack_6d0 = CONCAT44(uStack_6d0._4_4_,(pfVar25[2] - 0.05) * fVar63 + 0.05);
      do {
        func_0x000180074f10(puVar39);
        puVar39 = puVar39 + 0x10;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      puVar39 = auStack_3c8;
      lVar35 = 8;
      do {
        func_0x000180074f10(puVar39);
        puVar39 = puVar39 + 0x10;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      *(undefined8 *)(puVar33 + -0x96) = uStack_6d8;
      *(undefined8 *)(puVar33 + -0x8e) = uStack_6d0;
      *(undefined8 *)(puVar33 + 0x10a) = uStack_348;
      *(undefined8 *)(puVar33 + 0x112) = uStack_340;
      *(undefined4 *)(puVar33 + -6) = 1;
      *(undefined8 *)(puVar33 + -0x86) = uStack_4d8;
      *(undefined8 *)(puVar33 + -0x7e) = uStack_4d0;
      *(undefined8 *)(puVar33 + -0x76) = uStack_4c8;
      *(undefined8 *)(puVar33 + -0x6e) = uStack_4c0;
      *(undefined8 *)(puVar33 + -0x66) = uStack_4b8;
      *(undefined8 *)(puVar33 + -0x5e) = uStack_4b0;
      *(undefined8 *)(puVar33 + -0x56) = uStack_4a8;
      *(undefined8 *)(puVar33 + -0x4e) = uStack_4a0;
      *(undefined8 *)(puVar33 + -0x46) = uStack_498;
      *(undefined8 *)(puVar33 + -0x3e) = uStack_490;
      *(undefined8 *)(puVar33 + -0x36) = uStack_488;
      *(undefined8 *)(puVar33 + -0x2e) = uStack_480;
      *(undefined4 *)(puVar33 + 0x11a) = 1;
      *(undefined4 *)(puVar33 + -0x26) = uStack_478;
      *(undefined4 *)(puVar33 + -0x22) = uStack_474;
      *(undefined4 *)(puVar33 + -0x1e) = uStack_470;
      *(undefined4 *)(puVar33 + -0x1a) = uStack_46c;
      *(undefined8 *)(puVar33 + -0x16) = uStack_468;
      *(undefined8 *)(puVar33 + -0xe) = uStack_460;
      puVar33[-2] = cVar26;
      puVar33[-1] = uVar5;
      *puVar33 = uVar6;
      puVar33[0x11e] = uStack_334;
      *(undefined4 *)(puVar33 + 0x122) = 0;
      puVar33[0x13a] = 1;
      *(undefined4 *)(puVar33 + 0x112) = *(undefined4 *)(lStack_650 + 0xa8);
      puVar33 = puVar33 + 0x1f0;
      pcStack_6c8 = (char *)((longlong)pcStack_6c8 + -1);
    } while (pcStack_6c8 != (char *)0x0);
    *(undefined4 *)(lStack_698 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x2610) = *(undefined4 *)(lStack_650 + 0xa8);
    pcStack_6c8 = (char *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0xa8b0) == 2) {
      cVar26 = *(char *)(param_1 + 0xa8b4);
      FUN_18022a890(param_2,cVar26,*(undefined8 *)(param_3 + 0x208));
      puVar34 = (undefined8 *)(lStack_678 + ((longlong)cVar26 + 0x40) * 0x10);
      uStack_6d8 = *puVar34;
      uStack_6d0 = puVar34[1];
      if (*(float *)(param_1 + 0xa830) < 0.0) {
        fVar63 = -1.0;
      }
      else {
        fVar63 = 1.0;
      }
      fVar51 = (float)atan2f(*(undefined4 *)(param_1 + 0x2560),
                             *(float *)(param_1 + 0x2558) - *(float *)(param_1 + 0x2550));
      if (1.5707964 <= fVar51) {
        fVar51 = 1.5707964;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400(fVar63 * fVar51);
    }
    fVar64 = 0.0;
    fStack_684 = 0.0;
    fStack_68c = 0.0;
    cStack_6e7 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
                 *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) < 0.010000001;
    cStack_6e8 = *(float *)(param_1 + 0x25b8) == 0.0;
    fVar51 = *(float *)(param_1 + 0x95b0);
    fStack_5f8 = *(float *)(param_1 + 0x95d4);
    afStack_548[0] = 0.0;
    afStack_548[1] = 0.0;
    afStack_548[2] = 0.0;
    afStack_548[3] = 0.0;
    afStack_5b0[8] = 0.0;
    afStack_5b0[9] = 0.0;
    afStack_548[8] = 0.0;
    afStack_548[9] = 0.0;
    afStack_548[10] = 0.0;
    afStack_548[0xb] = 0.0;
    afStack_5b0[10] = 0.0;
    afStack_5b0[0xb] = 0.0;
    afStack_548[4] = 0.0;
    afStack_548[5] = 0.0;
    afStack_548[6] = 0.0;
    afStack_548[7] = 0.0;
    afStack_5b0[0xc] = 0.0;
    afStack_5b0[0xd] = 0.0;
    afStack_548[0xc] = 0.0;
    afStack_548[0xd] = 0.0;
    afStack_548[0xe] = 0.0;
    afStack_548[0xf] = 0.0;
    afStack_5b0[0xe] = 0.0;
    afStack_5b0[0xf] = 0.0;
    fStack_6bc = fVar51;
    fStack_680 = 0.0;
    fStack_67c = 0.0;
    afStack_5b0[0] = 0.0;
    afStack_5b0[1] = 0.0;
    afStack_5b0[2] = 0.0;
    afStack_5b0[3] = 0.0;
    afStack_5b0[4] = 0.0;
    afStack_5b0[5] = 0.0;
    afStack_5b0[6] = 0.0;
    afStack_5b0[7] = 0.0;
    iStack_648 = 0;
    if (0 < *(int *)(param_1 + 0x34c0)) {
      uStack_630 = 0;
      cStack_6df = cStack_6e3;
      do {
        fVar52 = 0.0;
        lVar35 = param_1 + 0x34c8 + uStack_630 * 0x1358;
        lStack_660 = lVar35;
        if (((0.0 < *(float *)(lVar35 + 4)) &&
            (*(float *)(lVar35 + 0x1270) <= 1e+30 && *(float *)(lVar35 + 0x1270) != 1e+30)) &&
           (*(float *)(lVar35 + 0x12d4) <= 1e+30 && *(float *)(lVar35 + 0x12d4) != 1e+30)) {
          fVar63 = *(float *)(lVar35 + 0x1338);
          if (*(char *)(lVar35 + 0x133e) == '\0') {
            fVar64 = 0.0;
          }
          else {
            fVar64 = fVar63 * 0.05;
          }
          fVar53 = *(float *)(lVar35 + 0x1328);
          fVar59 = *(float *)(lVar35 + 0x1334);
          if (fVar64 + fVar53 < fVar59) {
            fVar64 = fVar59 - fVar53;
          }
          else {
            fVar64 = *(float *)(lVar35 + 0x1330);
          }
          if (0.0 < fVar63) {
            fVar64 = fVar64 / fVar63;
          }
          pfStack_6b8 = (float *)CONCAT44(pfStack_6b8._4_4_,fVar64);
          fVar64 = fVar52;
          if (*(char *)(lVar35 + 0x133e) != '\0') {
            fVar64 = fVar63 * 0.05;
          }
          cStack_6e4 = fVar59 <= fVar64 + fVar53;
          fVar63 = *(float *)(lVar35 + 0x1350);
          if (*(char *)(lVar35 + 0x1356) == '\0') {
            fVar64 = 0.0;
          }
          else {
            fVar64 = fVar63 * 0.05;
          }
          fVar53 = *(float *)(lVar35 + 0x1340);
          fVar59 = *(float *)(lVar35 + 0x134c);
          if (fVar64 + fVar53 < fVar59) {
            fStack_6dc = fVar59 - fVar53;
          }
          else {
            fStack_6dc = *(float *)(lVar35 + 0x1348);
          }
          if (0.0 < fVar63) {
            fStack_6dc = fStack_6dc / fVar63;
          }
          if (*(char *)(lVar35 + 0x1356) != '\0') {
            fVar52 = fVar63 * 0.05;
          }
          lVar40 = 2;
          puVar34 = &uStack_6d8;
          cStack_6df = fVar59 <= fVar52 + fVar53;
          acStack_6c0[0] = cStack_6e4;
          acStack_6c0[1] = cStack_6df;
          do {
            func_0x00018005d390(puVar34);
            puVar34 = puVar34 + 1;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          pfVar25 = afStack_5e8;
          lVar40 = 2;
          do {
            func_0x00018005d390(pfVar25);
            pfVar25 = pfVar25 + 2;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          pcStack_6c8 = acStack_129 + 1;
          lVar36 = 0;
          pcStack_668 = (char *)(lStack_6a8 + 0xa8b5);
          uStack_658 = 0;
          pfVar25 = (float *)(lVar35 + 0x1268);
          lStack_6a0 = 0;
          fVar51 = 1.0 - fVar51;
          lStack_670 = 2;
          puVar50 = auStack_638;
          lVar35 = lVar36;
          lVar40 = lVar36;
          do {
            cVar26 = pcStack_668[-1];
            cVar46 = *pcStack_668;
            *(undefined8 *)((longlong)afStack_628 + lVar36) = *(undefined8 *)(pfVar25 + 2);
            FUN_18022a890(lStack_678,cVar26,*(undefined8 *)(lStack_698 + 0x208));
            lVar22 = lStack_678;
            pfVar38 = (float *)(lStack_678 + ((longlong)cVar26 + 0x40) * 0x10);
            fVar7 = *pfVar38;
            fVar8 = pfVar38[1];
            fVar9 = pfVar38[2];
            fVar63 = *pfStack_570;
            fVar64 = pfStack_570[1];
            fVar52 = pfStack_570[2];
            FUN_18022a890(lStack_678,cVar46,*(undefined8 *)(lStack_698 + 0x208));
            lVar23 = lStack_650;
            lVar2 = lStack_6a0;
            fVar53 = pfVar25[-2];
            fVar59 = pfVar25[-1];
            fVar61 = *pfVar25;
            pfVar38 = (float *)(lVar22 + ((longlong)cVar46 + 0x40) * 0x10);
            fVar56 = *pfVar38 - *pfStack_570;
            fVar57 = pfVar38[1] - pfStack_570[1];
            fVar62 = pfVar38[2] - pfStack_570[2];
            fVar3 = *(float *)(lStack_660 + 4);
            *(float *)((longlong)afStack_548 + lVar36) =
                 (fVar7 - fVar63) * fVar3 + *(float *)((longlong)afStack_548 + lVar36);
            *(float *)((longlong)afStack_548 + lVar36 + 0x24) =
                 fVar3 * fVar57 + *(float *)((longlong)afStack_548 + lVar36 + 0x24);
            fStack_564 = fVar59 - fVar57;
            *(float *)((longlong)afStack_548 + lVar36 + 4) =
                 (fVar8 - fVar64) * fVar3 + *(float *)((longlong)afStack_548 + lVar36 + 4);
            *(float *)((longlong)afStack_548 + lVar36 + 8) =
                 (fVar9 - fVar52) * fVar3 + *(float *)((longlong)afStack_548 + lVar36 + 8);
            *(float *)((longlong)afStack_548 + lVar36 + 0x20) =
                 fVar3 * fVar56 + *(float *)((longlong)afStack_548 + lVar36 + 0x20);
            *(float *)((longlong)afStack_548 + lVar36 + 0x28) =
                 fVar3 * fVar62 + *(float *)((longlong)afStack_548 + lVar36 + 0x28);
            fStack_568 = fVar53 - fVar56;
            *(ulonglong *)((longlong)afStack_5e8 + lStack_6a0) =
                 CONCAT44(fVar59 - fVar57,fVar53 - fVar56);
            uStack_4ec = 0x7f7fffff;
            fVar52 = *(float *)(lStack_650 + 0x80);
            fVar7 = *(float *)(lStack_650 + 0x84);
            fVar8 = *(float *)(lStack_650 + 0x88);
            fVar9 = *(float *)(lStack_650 + 0x8c);
            fVar10 = *(float *)(lStack_650 + 0x70);
            fVar11 = *(float *)(lStack_650 + 0x74);
            fVar12 = *(float *)(lStack_650 + 0x78);
            fVar13 = *(float *)(lStack_650 + 0x7c);
            fVar14 = *(float *)(lStack_650 + 0x90);
            fVar15 = *(float *)(lStack_650 + 0x94);
            fVar16 = *(float *)(lStack_650 + 0x98);
            fVar17 = *(float *)(lStack_650 + 0x9c);
            *(float *)((longlong)afStack_5b0 + lVar36 + 0x20) =
                 (fVar56 * fStack_6bc + fVar51 * fVar53) * fVar3 +
                 *(float *)((longlong)afStack_5b0 + lVar36 + 0x20);
            fVar63 = *(float *)((longlong)&uStack_620 + lVar36);
            *(float *)((longlong)afStack_5b0 + lVar36 + 0x24) =
                 (fVar57 * fStack_6bc + fVar51 * fVar59) * fVar3 +
                 *(float *)((longlong)afStack_5b0 + lVar36 + 0x24);
            fVar64 = *(float *)((longlong)afStack_628 + lVar36 + 4);
            fVar54 = *(float *)(lStack_650 + 0xa0);
            fVar58 = *(float *)(lStack_650 + 0xa4);
            fVar18 = *(float *)(lStack_650 + 0xa8);
            *(float *)((longlong)afStack_5b0 + lVar36 + 0x28) =
                 (fVar62 * fStack_6bc + fVar51 * fVar61) * fVar3 +
                 *(float *)((longlong)afStack_5b0 + lVar36 + 0x28);
            fVar60 = (fVar56 * fVar10 + fVar57 * fVar52 + fVar62 * fVar14 + fVar54) * fStack_6bc;
            fVar58 = (fVar56 * fVar11 + fVar57 * fVar7 + fVar62 * fVar15 + fVar58) * fStack_6bc;
            fVar54 = fVar51 * *(float *)((longlong)afStack_628 + lVar36) + fVar60;
            fVar64 = fVar51 * fVar64 + fVar58;
            fVar63 = fVar51 * fVar63 +
                     (fVar56 * fVar12 + fVar57 * fVar8 + fVar62 * fVar16 + fVar18) * fStack_6bc;
            uVar4 = *(undefined4 *)(lStack_650 + 0xa8);
            *(float *)((longlong)afStack_628 + lVar36) = fVar54;
            *(float *)((longlong)afStack_628 + lVar36 + 4) = fVar64;
            *(float *)((longlong)&uStack_620 + lVar36) = fVar63;
            *(undefined4 *)((longlong)&uStack_620 + lVar36 + 4) = uStack_4ec;
            fStack_4f8 = fVar54;
            fStack_4f4 = fVar64;
            fStack_4f0 = fVar63;
            *(undefined4 *)((longlong)&uStack_620 + lVar36) = uVar4;
            uStack_508 = CONCAT44(fVar53 * fVar11 + fVar59 * fVar7 + fVar61 * fVar15 +
                                  *(float *)(lStack_650 + 0xa4),
                                  fVar53 * fVar10 + fVar59 * fVar52 + fVar61 * fVar14 +
                                  *(float *)(lStack_650 + 0xa0));
            fStack_500 = fVar53 * fVar12 + fVar59 * fVar8 + fVar61 * fVar16 +
                         *(float *)(lStack_650 + 0xa8);
            fStack_4fc = fVar53 * fVar13 + fVar59 * fVar9 + fVar61 * fVar17 +
                         *(float *)(lStack_650 + 0xac);
            *(longlong *)((longlong)&uStack_6d8 + lStack_6a0) = uStack_508;
            fStack_560 = fVar51 * *(float *)((longlong)&uStack_6d8 + lVar2) + fVar60;
            fStack_55c = fVar51 * *(float *)((longlong)&uStack_6d8 + lVar2 + 4) + fVar58;
            fVar63 = *(float *)((longlong)afStack_5b0 + lVar36);
            *(ulonglong *)((longlong)&uStack_6d8 + lVar2) = CONCAT44(fStack_55c,fStack_560);
            uVar28 = uStack_658;
            pcVar37 = pcStack_6c8;
            *(float *)((longlong)afStack_5b0 + lVar36) = fVar3 * fVar53 + fVar63;
            *(float *)((longlong)afStack_5b0 + lVar36 + 4) =
                 fVar3 * fVar59 + *(float *)((longlong)afStack_5b0 + lVar36 + 4);
            *(float *)((longlong)afStack_5b0 + lVar36 + 8) =
                 fVar3 * fVar61 + *(float *)((longlong)afStack_5b0 + lVar36 + 8);
            if ((cStack_6e7 == '\0') || (cStack_6e8 == '\0')) {
              fVar63 = pfVar25[9];
              fVar64 = pfVar25[10];
              fVar52 = pfVar25[0xb];
              *(float *)((longlong)afStack_5d0 + lVar36) = pfVar25[8];
              *(float *)((longlong)afStack_5d0 + lVar36 + 4) = fVar63;
              *(float *)((longlong)afStack_5d0 + lVar36 + 8) = fVar64;
              *(float *)((longlong)afStack_5d0 + lVar36 + 0xc) = fVar52;
              if (*(float *)((longlong)afStack_5d0 + lVar36 + 8) == 1e+30) {
                *(undefined4 *)((longlong)afStack_5d0 + lVar36 + 8) = uVar4;
              }
              if (*(float *)((longlong)afStack_5d0 + lVar36) == 1e+30) {
                *(undefined8 *)((longlong)afStack_5d0 + lVar36) = *(undefined8 *)(lVar23 + 0xa0);
              }
              uVar45 = 1;
            }
            else {
              uVar4 = *(undefined4 *)(lVar23 + 0xa4);
              uVar19 = *(undefined4 *)(lVar23 + 0xa8);
              uVar20 = *(undefined4 *)(lVar23 + 0xac);
              uVar45 = 0;
              *(undefined4 *)((longlong)afStack_5d0 + lVar36) = *(undefined4 *)(lVar23 + 0xa0);
              *(undefined4 *)((longlong)afStack_5d0 + lVar36 + 4) = uVar4;
              *(undefined4 *)((longlong)afStack_5d0 + lVar36 + 8) = uVar19;
              *(undefined4 *)((longlong)afStack_5d0 + lVar36 + 0xc) = uVar20;
            }
            pfStack_6f8 = (float *)((longlong)afStack_32c + lVar40 + 4U);
            pfStack_708 = (float *)((longlong)afStack_4e8 + lVar40);
            pcStack_700 = pcStack_6c8;
            pfStack_710 = (float *)((longlong)afStack_22c + lVar40 + 4U);
            pfStack_718 = (float *)((longlong)afStack_628 + lVar35);
            lStack_720 = lStack_6a8 + 0x2620 + uStack_658;
            iStack_728 = iStack_690;
            uVar24 = FUN_180579c90(uStack_5f0,*(undefined8 *)(lStack_6a8 + 0x2520),
                                   (longlong)afStack_5d0 + lVar35,uVar45);
            pcStack_6c8 = pcVar37 + 0x20;
            lStack_6a0 = lStack_6a0 + 8;
            *puVar50 = uVar24;
            pcStack_668 = pcStack_668 + 0x1f0;
            lVar40 = lVar40 + 0x80;
            fStack_608 = pfVar25[4];
            fStack_604 = pfVar25[5];
            lVar35 = lVar35 + 0x10;
            fStack_600 = *(float *)((longlong)&uStack_620 + lVar36);
            puVar50 = puVar50 + 1;
            lVar36 = lVar36 + 0x10;
            uStack_658 = uVar28 + 0x700;
            pfVar25[4] = pfVar25[4];
            pfVar25[5] = pfVar25[5];
            pfVar25[6] = fStack_600;
            pfVar25[7] = 3.4028235e+38;
            pfVar25 = pfVar25 + 0x19;
            lStack_670 = lStack_670 + -1;
            uStack_5fc = 0x7f7fffff;
          } while (lStack_670 != 0);
          if ((cStack_6e7 == '\0') || (cStack_6e8 == '\0')) {
            cVar26 = fStack_6dc < pfStack_6b8._0_4_;
            iVar49 = 0;
            pcStack_6c8 = (char *)0x0;
            cStack_6e0 = cVar26;
            do {
              lVar35 = lStack_660;
              uVar28 = 0;
              pcVar37 = (char *)(1 - (longlong)pcStack_6c8);
              if (cVar26 == '\0') {
                pcVar37 = pcStack_6c8;
              }
              puVar33 = auStack_5b8;
              iVar47 = 1 - iVar49;
              if (cVar26 == '\0') {
                iVar47 = iVar49;
              }
              if (iVar49 != 0) {
                puVar33 = auStack_610;
              }
              lVar40 = (longlong)pcVar37 * 100;
              fVar63 = *(float *)(puVar33 + (longlong)pcVar37 * -0x10);
              cVar46 = *(char *)(lVar40 + 0x1298 + lStack_660);
              fVar51 = afStack_628[0];
              fVar64 = afStack_628[1];
              if (cVar46 != '\0') {
                fVar51 = *(float *)(lVar40 + 0x1278 + lStack_660);
                fVar64 = *(float *)(lVar40 + 0x127c + lStack_660);
              }
              fVar64 = *(float *)((longlong)&uStack_6d8 + (longlong)pcVar37 * 8 + 4) - fVar64;
              if (fVar64 * fVar64 +
                  (*(float *)(&uStack_6d8 + (longlong)pcVar37) - fVar51) *
                  (*(float *)(&uStack_6d8 + (longlong)pcVar37) - fVar51) <= 0.010000001) {
                if (cVar46 != '\0') {
                  pfVar25 = (float *)(lVar40 + 0x1278 + lStack_660);
                  fVar63 = pfVar25[1];
                  fVar51 = pfVar25[2];
                  fVar64 = pfVar25[3];
                  lVar36 = (longlong)iVar47;
                  pcStack_700 = acStack_129 + lVar36 * 0x20 + 1;
                  afStack_628[(longlong)pcVar37 * 4] = *pfVar25;
                  afStack_628[(longlong)pcVar37 * 4 + 1] = fVar63;
                  *(float *)(&uStack_620 + (longlong)pcVar37 * 2) = fVar51;
                  *(float *)((longlong)&uStack_620 + (longlong)pcVar37 * 0x10 + 4) = fVar64;
                  pfStack_708 = afStack_4e8 + lVar36 * 0x20;
                  pfStack_6f8 = afStack_32c + lVar36 * 0x20U + 1;
                  pfStack_710 = afStack_22c + lVar36 * 0x20U + 1;
                  pfStack_718 = afStack_628 + lVar36 * 4;
                  lStack_720 = lStack_6a8 + 0x2620 + lVar36 * 0x700;
                  iStack_728 = iStack_690;
                  uVar24 = FUN_180579c90(uStack_5f0,*(undefined8 *)(lStack_6a8 + 0x2520),
                                         afStack_5d0 + lVar36 * 4,
                                         CONCAT71((int7)((ulonglong)pfStack_708 >> 8),1));
                  uVar45 = *(undefined8 *)(afStack_628 + (longlong)pcVar37 * 4);
                  uVar21 = (&uStack_620)[(longlong)pcVar37 * 2];
                  auStack_638[(longlong)pcVar37] = uVar24;
                  puVar34 = (undefined8 *)(lVar40 + 0x1278 + lVar35);
                  *puVar34 = uVar45;
                  puVar34[1] = uVar21;
                  cVar26 = cStack_6e0;
                }
              }
              else {
                pfVar25 = afStack_22c + (longlong)pcVar37 * 0x20U + 1;
                puVar50 = auStack_638 + (longlong)pcVar37;
                uVar32 = uVar28;
                if (fVar63 != *pfVar25) {
                  uVar28 = 1;
                  uVar32 = 1;
                  iVar42 = -1;
                  if (0.0 < fVar63 - *pfVar25) {
                    iVar42 = 1;
                  }
                  if (1 < (int)*puVar50) {
                    do {
                      if ((fVar63 - pfVar25[uVar32]) * (float)iVar42 <= 0.0) break;
                      uVar24 = (int)uVar28 + 1;
                      uVar28 = (ulonglong)uVar24;
                      uVar32 = uVar32 + 1;
                    } while ((int)uVar24 < (int)*puVar50);
                  }
                }
                if ((*(byte *)(lStack_6a8 + 0x3424) & 8) == 0) {
                  fVar51 = 0.6;
                }
                else {
                  fVar51 = 0.4;
                }
                uVar24 = *puVar50;
                if ((int)uVar28 < (int)uVar24) {
                  pcVar43 = acStack_129 + uVar32 + (longlong)pcVar37 * 0x20 + 1;
                  pfVar25 = pfVar25 + uVar32;
                  fVar64 = -1e+30;
                  do {
                    uVar27 = (uint)uVar28;
                    fVar52 = fVar64;
                    if (*pcVar43 != '\0') {
                      fVar53 = *pfVar25;
                      if (fVar51 < ABS(fVar53 - fVar63)) {
                        if (0.0 < fVar53 - fVar63) {
                          uVar27 = uVar27 + 1;
                          goto LAB_180574636;
                        }
                        fVar52 = fVar53;
                        if ((fVar64 != -1e+30) && (fVar52 = fVar64, 0.15 < ABS(fVar64 - fVar53)))
                        goto LAB_180574636;
                      }
                    }
                    uVar28 = (ulonglong)(uVar27 + 1);
                    pcVar43 = pcVar43 + 1;
                    pfVar25 = pfVar25 + 1;
                    fVar64 = fVar52;
                  } while ((int)(uVar27 + 1) < (int)uVar24);
                  uVar27 = uVar24;
                  if (fVar52 != -1e+30) {
LAB_180574636:
                    fVar63 = afStack_5d0[(longlong)pcVar37 * 4];
                    fVar51 = afStack_5d0[(longlong)pcVar37 * 4 + 1];
                    fVar59 = afStack_628[(longlong)pcVar37 * 4] - fVar63;
                    fVar61 = afStack_628[(longlong)pcVar37 * 4 + 1] - fVar51;
                    lVar35 = (longlong)(int)uVar27 + (longlong)pcVar37 * 0x20;
                    fVar64 = fVar61 * fVar61 + fVar59 * fVar59;
                    auVar55 = rsqrtss(ZEXT416((uint)fVar64),ZEXT416((uint)fVar64));
                    fVar52 = auVar55._0_4_;
                    fVar53 = 0.0001;
                    fVar52 = fVar52 * 0.5 * (3.0 - fVar64 * fVar52 * fVar52);
                    fVar64 = afStack_22c[lVar35];
                    if (*(float *)(&uStack_620 + (longlong)pcVar37 * 2) <= fVar64 &&
                        fVar64 != *(float *)(&uStack_620 + (longlong)pcVar37 * 2)) {
                      fVar53 = -0.0001;
                    }
                    fVar3 = afStack_32c[lVar35];
                    lVar35 = (longlong)iVar47;
                    *(float *)(&uStack_620 + (longlong)pcVar37 * 2) = fVar64;
                    pfStack_6f8 = afStack_32c + lVar35 * 0x20U + 1;
                    pfStack_708 = afStack_4e8 + lVar35 * 0x20;
                    pfStack_710 = afStack_22c + lVar35 * 0x20U + 1;
                    pfStack_718 = afStack_628 + lVar35 * 4;
                    fStack_558 = (fVar53 + fVar3) * fVar59 * fVar52 + fVar63;
                    fStack_554 = (fVar53 + fVar3) * fVar61 * fVar52 + fVar51;
                    *(ulonglong *)(afStack_628 + (longlong)pcVar37 * 4) =
                         CONCAT44(fStack_554,fStack_558);
                    pcStack_700 = acStack_129 + lVar35 * 0x20 + 1;
                    lStack_720 = lStack_6a8 + 0x2620 + lVar35 * 0x700;
                    iStack_728 = iStack_690;
                    uVar24 = FUN_180579c90(uStack_5f0,*(undefined8 *)(lStack_6a8 + 0x2520),
                                           afStack_5d0 + lVar35 * 4,
                                           CONCAT71((int7)((ulonglong)pfStack_708 >> 8),1));
                    uVar45 = *(undefined8 *)(afStack_628 + (longlong)pcVar37 * 4);
                    uVar21 = (&uStack_620)[(longlong)pcVar37 * 2];
                    *puVar50 = uVar24;
                    puVar34 = (undefined8 *)(lVar40 + 0x1278 + lStack_660);
                    *puVar34 = uVar45;
                    puVar34[1] = uVar21;
                    *(undefined1 *)(lVar40 + 0x1298 + lStack_660) = 1;
                    cVar26 = cStack_6e0;
                    goto LAB_1805748b6;
                  }
                }
                *(undefined1 *)(lVar40 + 0x1298 + lStack_660) = 0;
                cVar26 = cStack_6e0;
              }
LAB_1805748b6:
              iVar49 = iVar49 + 1;
              pcStack_6c8 = (char *)((longlong)pcStack_6c8 + 1);
            } while (iVar49 < 2);
          }
          lStack_6a0 = 0;
          lVar35 = *(longlong *)(lStack_6a8 + 0x2520);
          fVar63 = *(float *)(lStack_650 + 0xa8);
          pcStack_6c8 = (char *)0x0;
          pcStack_668 = acStack_6c0;
          fVar51 = *(float *)(lVar35 + 0x3c);
          pfStack_6b8 = (float *)(lStack_6a8 + 0xa9c8);
          lStack_670 = 0;
          uStack_658 = ~(ulonglong)(acStack_129 + 1);
          lStack_550 = 0;
          lStack_640 = 0;
          uStack_508 = 2;
          lVar40 = lStack_660;
          fVar64 = fStack_684;
          do {
            uVar32 = 1;
            fVar53 = *(float *)((longlong)&uStack_6d8 + (longlong)pcStack_6c8 + 4) -
                     *(float *)((longlong)afStack_5d0 + lStack_550 + 4);
            pfVar38 = (float *)((longlong)afStack_4e8 + lStack_670);
            fVar59 = *(float *)((longlong)&uStack_6d8 + (longlong)pcStack_6c8) -
                     *(float *)((longlong)afStack_5d0 + lStack_550);
            fVar52 = *(float *)((longlong)&uStack_620 + lStack_550);
            fStack_6dc = *(float *)((longlong)auStack_638 + lStack_640);
            pfVar25 = (float *)((longlong)afStack_4e8 + lStack_670 + 4);
            uVar24 = 1;
            fVar59 = SQRT(fVar53 * fVar53 + fVar59 * fVar59);
            fVar53 = *pfVar25 - *pfVar38;
            uVar28 = uVar32;
            if (fVar53 <= 0.0) {
              uVar28 = (ulonglong)((0.0 <= fVar53) - 1);
            }
            iVar49 = (int)uVar28;
            pcVar37 = acStack_129 + lStack_6a0 + 1;
            pfVar41 = (float *)((longlong)afStack_32c + lStack_670 + 8U);
            cVar26 = *pcVar37;
            uVar30 = uVar32;
            cVar46 = cVar26;
            if (*pfVar41 <= fVar59 && fVar59 != *pfVar41) {
              uVar29 = uVar32;
              uVar48 = uVar32;
              do {
                iVar49 = (int)uVar28;
                uVar24 = (uint)uVar48;
                uVar30 = uVar29;
                if ((longlong)*(int *)((longlong)auStack_638 + lStack_640) <= (longlong)uVar29)
                break;
                uVar24 = uVar24 + 1;
                uVar48 = (ulonglong)uVar24;
                uVar30 = uVar29 + 1;
                pfVar44 = pfVar25 + 1;
                if ((longlong)uVar30 < (longlong)*(int *)((longlong)auStack_638 + lStack_640)) {
                  if ((pcVar37[uVar30] == '\0') && (pcVar37[uVar29] == '\0')) {
                    cVar46 = '\0';
                  }
                  else {
                    cVar46 = '\x01';
                  }
                  if ((*pfVar44 - *pfVar25 != 0.0) &&
                     (uVar28 = 0xffffffff, 0.0 < *pfVar44 - *pfVar25)) {
                    uVar28 = uVar32;
                  }
                }
                iVar49 = (int)uVar28;
                pfVar1 = (float *)((longlong)pfVar44 +
                                  (longlong)afStack_32c + (lStack_670 - (longlong)pfVar38) + 4U);
                uVar29 = uVar30;
                pfVar25 = pfVar44;
              } while (*pfVar1 <= fVar59 && fVar59 != *pfVar1);
            }
            lVar36 = uVar30 - 1;
            if (*(uint *)((longlong)auStack_638 + lStack_640) != uVar24) {
              lVar2 = lStack_670 + lVar36 * 4;
              fVar52 = *(float *)((longlong)afStack_32c + lVar2 + 4U);
              fVar52 = ((*(float *)((longlong)afStack_4e8 + lVar36 * 4 + lStack_670 + 4) -
                        pfVar38[lVar36]) * (fVar59 - fVar52)) /
                       (*(float *)((longlong)afStack_32c + lVar2 + 8U) - fVar52) + pfVar38[lVar36];
            }
            fVar53 = fVar51;
            if (cVar46 != '\0') {
              fVar53 = *(float *)(lVar35 + 0x20) * 0.5 + fVar51;
            }
            if (fVar53 < ABS(fVar63 - fVar52)) {
LAB_180574cc4:
              *(undefined4 *)((longlong)afStack_6b0 + lStack_640) = 0;
            }
            else {
              if (*pcStack_668 != '\0') {
                fVar53 = fVar51;
                if (cVar26 != '\0') {
                  fVar53 = *(float *)(lVar35 + 0x20) * 0.5 + fVar51;
                }
                if (fVar53 < ABS(fVar63 - *(float *)((longlong)afStack_22c + lStack_670 + 4U)))
                goto LAB_180574cc4;
              }
              fVar53 = *(float *)(lVar35 + 0x20);
              if (1 < (int)fStack_6dc) {
                iVar47 = -3;
                pcVar43 = acStack_129 + lStack_6a0 + 2;
                do {
                  iVar42 = 0;
                  if (0 < iVar47) {
                    iVar42 = iVar47;
                  }
                  pcVar31 = pcVar43 + uStack_658;
                  if (iVar42 <= iVar47 + 3) {
                    pfVar25 = (float *)(&stack0x000000fc + -(longlong)&stack0x00000000 +
                                       (longlong)pfVar41);
                    do {
                      fVar59 = *pfVar41 - pfVar25[-0x40];
                      if ((*pcVar43 != '\0') ||
                         (fVar61 = fVar51, pcVar31[(longlong)pcVar37] != '\0')) {
                        fVar61 = fVar53 * 0.5 + fVar51;
                      }
                      fVar61 = fVar61 - fVar53 * 0.1;
                      if (fVar59 < fVar53) {
                        fVar61 = fVar61 - SQRT(fVar53 * fVar53 - fVar59 * fVar59);
                      }
                      lVar40 = lStack_660;
                      if (fVar61 < ABS(*(float *)((longlong)pfVar41 +
                                                 (longlong)
                                                 (&stack0x00000100 + -(longlong)&stack0x00000000)) -
                                       *pfVar25)) goto LAB_180574cc4;
                      pcVar31 = pcVar31 + -1;
                      pfVar25 = pfVar25 + -1;
                    } while ((longlong)iVar42 <= (longlong)pcVar31);
                  }
                  iVar47 = iVar47 + 1;
                  uVar32 = uVar32 + 1;
                  pfVar41 = pfVar41 + 1;
                  pcVar43 = pcVar43 + 1;
                } while ((longlong)uVar32 < (longlong)(int)fStack_6dc);
              }
              iVar47 = 0;
              if (cStack_6e7 == '\0') {
                iVar47 = iVar49;
              }
              *(float *)((longlong)afStack_6b0 + lStack_640) = fVar52 - fVar63;
              if ((*pcStack_668 == '\0') && (acStack_129[lStack_6a0 + (int)fStack_6dc] != '\0')) {
                fVar53 = *pfStack_6b8;
                if (iVar47 < 1) {
                  fVar59 = fVar52;
                  if ((iVar47 < 0) && (fVar59 = fVar53, fVar52 <= fVar53)) {
                    fVar59 = fVar52;
                  }
                  *(float *)((longlong)afStack_6b0 + lStack_640) = fVar59 - fVar63;
                }
                else {
                  if (fVar53 <= fVar52) {
                    fVar53 = fVar52;
                  }
                  *(float *)((longlong)afStack_6b0 + lStack_640) = fVar53 - fVar63;
                }
              }
            }
            lVar36 = 0;
            if (0.0 < fStack_5f8) {
              fVar52 = fStack_5f8 * *(float *)(lVar40 + 4);
              fVar64 = fVar64 + fVar52 * *(float *)((longlong)afStack_5e8 + (longlong)pcStack_6c8) *
                                0.075;
              fStack_68c = fStack_68c +
                           fVar52 * *(float *)((longlong)afStack_5e8 + (longlong)pcStack_6c8 + 4) *
                           0.075;
            }
            uStack_658 = uStack_658 - 0x20;
            lStack_550 = lStack_550 + 0x10;
            lStack_670 = lStack_670 + 0x80;
            pcStack_668 = pcStack_668 + 1;
            lStack_6a0 = lStack_6a0 + 0x20;
            uStack_508 = uStack_508 + -1;
            pfStack_6b8 = pfStack_6b8 + 0x7c;
            lStack_640 = lStack_640 + 4;
            pcStack_6c8 = (char *)((longlong)pcStack_6c8 + 8);
          } while (uStack_508 != 0);
          lVar40 = 4;
          fVar51 = afStack_5b0[10] * fStack_688 + afStack_6b0[0];
          fStack_684 = fVar64;
          fVar63 = afStack_5b0[0xe] * fStack_688 + afStack_6b0[1];
          lVar35 = 0x10;
          if (fVar63 < fVar51) {
            lVar40 = 0;
            lVar35 = lVar36;
          }
          fVar64 = *(float *)((longlong)afStack_5b0 + lVar35 + 0x28);
          if (fVar63 < fVar51) {
            lVar36 = 4;
          }
          if (*(uint *)((longlong)*(int *)(lStack_6a8 + 0x34c0) * 0x1358 + 0x217c + lStack_6a8) < 2)
          {
            fVar63 = 0.5;
          }
          else {
            fVar63 = 0.2;
          }
          if (fVar63 * fStack_688 <
              (fVar64 * fStack_688 + *(float *)((longlong)afStack_6b0 + lVar40)) -
              *(float *)((longlong)afStack_6b0 + lVar36)) {
            *(float *)((longlong)afStack_6b0 + lVar40) =
                 (fVar63 - fVar64) * fStack_688 + *(float *)((longlong)afStack_6b0 + lVar36);
          }
          fStack_680 = fStack_680 + afStack_6b0[0] * *(float *)(lStack_660 + 4);
          fStack_67c = fStack_67c + afStack_6b0[1] * *(float *)(lStack_660 + 4);
          param_1 = lStack_6a8;
          fVar51 = fStack_6bc;
          fVar63 = fStack_688;
          fVar64 = fStack_68c;
        }
        iStack_648 = iStack_648 + 1;
        uStack_630 = uStack_630 + 1;
        cStack_6e3 = cStack_6df;
      } while (iStack_648 < *(int *)(param_1 + 0x34c0));
    }
    fVar53 = 1e+30;
    fVar51 = *(float *)(lStack_650 + 0xa8);
    fVar52 = 5.0;
    if ((cStack_6e4 == '\0') || ((cStack_6e7 != '\0' && (cStack_6e8 != '\0')))) {
      fVar59 = 4.0;
    }
    else {
      fVar59 = 5.0;
    }
    if (param_6 == '\0') {
      fVar59 = fVar59 * *(float *)(lStack_698 + 0x38);
    }
    else {
      fVar59 = 1e+30;
    }
    fVar61 = (fVar51 + fStack_680) - *(float *)(param_1 + 0xa9c8);
    if (fVar59 < ABS(fVar61)) {
      if (fVar61 < 0.0) {
        fVar61 = -1.0;
      }
      else {
        fVar61 = 1.0;
      }
      fVar61 = fVar59 * fVar61;
    }
    fVar59 = ((fVar61 + *(float *)(param_1 + 0xa9c8)) - fVar51) * fStack_644;
    if (-1.0 <= fVar59) {
      if (1.0 <= fVar59) {
        fVar59 = 1.0;
      }
    }
    else {
      fVar59 = -1.0;
    }
    if ((cStack_6e3 == '\0') || ((cStack_6e7 != '\0' && (cStack_6e8 != '\0')))) {
      fVar52 = 4.0;
    }
    if (param_6 == '\0') {
      fVar53 = fVar52 * *(float *)(lStack_698 + 0x38);
    }
    fVar52 = (fVar51 + fStack_67c) - *(float *)(param_1 + 0xabb8);
    if (fVar53 < ABS(fVar52)) {
      iVar49 = 1;
      if (fVar52 < 0.0) {
        iVar49 = -1;
      }
      fVar52 = (float)iVar49 * fVar53;
    }
    fVar52 = ((fVar52 + *(float *)(param_1 + 0xabb8)) - fVar51) * fStack_644;
    fVar51 = -1.0;
    if ((-1.0 <= fVar52) && (fVar51 = fVar52, 1.0 <= fVar52)) {
      fVar51 = 1.0;
    }
    pfVar25 = (float *)&uStack_630;
    *(ulonglong *)(lStack_678 + 0x800) =
         *(ulonglong *)(lStack_678 + 0x800) | *(ulonglong *)(lStack_678 + 0x810);
    puVar33 = (undefined1 *)(param_1 + 0xa8b5);
    uStack_6d8 = *(undefined8 *)(lStack_678 + 0x1020);
    uStack_6d0 = *(undefined8 *)(lStack_678 + 0x1028);
    uStack_5fc = 0x7f7fffff;
    lVar35 = 0;
    uStack_630 = CONCAT44(fVar51,fVar59);
    if (fVar59 <= fVar51) {
      fVar51 = fVar59;
    }
    *(float *)(lStack_678 + 0x1020) =
         *(float *)(lStack_678 + 0x1020) + fStack_684 * fStack_644 * fStack_644;
    *(float *)(lStack_678 + 0x1024) =
         *(float *)(lStack_678 + 0x1024) + fVar64 * fStack_644 * fStack_644;
    *(float *)(lStack_678 + 0x1028) =
         fVar51 * (1.0 / fVar63) + *(float *)(lStack_678 + 0x1028) +
         SQRT(fVar64 * fVar64 + fStack_684 * fStack_684) * -2.2 * fStack_644 * fStack_644;
    *(undefined4 *)(lStack_678 + 0x102c) = *(undefined4 *)(lStack_678 + 0x102c);
    *(float *)(lStack_698 + 0x180) = fVar51;
    *(float *)(param_1 + 0x2610) = fVar51 + *(float *)(lStack_650 + 0xa8);
    fVar51 = 1.0 - fStack_6bc;
    do {
      fVar64 = *(float *)((longlong)afStack_548 + lVar35 + 4);
      puVar39 = auStack_448;
      lVar40 = 8;
      fVar52 = *(float *)((longlong)afStack_548 + lVar35 + 8);
      fVar53 = *pfVar25;
      uVar5 = puVar33[-1];
      uVar6 = *puVar33;
      cStack_6e4 = *(char *)(lStack_6a8 + 0x2607);
      fStack_604 = ((*(float *)((longlong)afStack_5b0 + lVar35 + 4) -
                    *(float *)((longlong)afStack_548 + lVar35 + 0x24)) + fVar64) * fVar51 +
                   fVar64 * fStack_6bc;
      fStack_608 = ((*(float *)((longlong)afStack_5b0 + lVar35) -
                    *(float *)((longlong)afStack_548 + lVar35 + 0x20)) +
                   *(float *)((longlong)afStack_548 + lVar35)) * fVar51 +
                   *(float *)((longlong)afStack_548 + lVar35) * fStack_6bc;
      fStack_600 = ((*(float *)((longlong)afStack_5b0 + lVar35 + 8) -
                    *(float *)((longlong)afStack_548 + lVar35 + 0x28)) + fVar52) * fVar51 +
                   fVar52 * fStack_6bc + fVar53 * (1.0 / fVar63);
      do {
        func_0x000180074f10(puVar39);
        puVar39 = puVar39 + 0x10;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
      lVar40 = 8;
      do {
        func_0x000180074f10();
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
      lVar35 = lVar35 + 0x10;
      puVar33[1] = cStack_6e4;
      pfVar25 = pfVar25 + 1;
      *(ulonglong *)(puVar33 + -0x95) = CONCAT44(fStack_604,fStack_608);
      *(ulonglong *)(puVar33 + -0x8d) = CONCAT44(uStack_5fc,fStack_600);
      *(undefined8 *)(puVar33 + 0x10b) = uStack_348;
      *(undefined8 *)(puVar33 + 0x113) = uStack_340;
      puVar33[0x11f] = uStack_334;
      *(undefined8 *)(puVar33 + -0x85) = uStack_4d8;
      *(undefined8 *)(puVar33 + -0x7d) = uStack_4d0;
      *(undefined8 *)(puVar33 + -0x75) = uStack_4c8;
      *(undefined8 *)(puVar33 + -0x6d) = uStack_4c0;
      *(undefined8 *)(puVar33 + -0x65) = uStack_4b8;
      *(undefined8 *)(puVar33 + -0x5d) = uStack_4b0;
      *(undefined8 *)(puVar33 + -0x55) = uStack_4a8;
      *(undefined8 *)(puVar33 + -0x4d) = uStack_4a0;
      *(undefined8 *)(puVar33 + -0x45) = uStack_498;
      *(undefined8 *)(puVar33 + -0x3d) = uStack_490;
      *(undefined8 *)(puVar33 + -0x35) = uStack_488;
      *(undefined8 *)(puVar33 + -0x2d) = uStack_480;
      *(undefined4 *)(puVar33 + -0x25) = uStack_478;
      *(undefined4 *)(puVar33 + -0x21) = uStack_474;
      *(undefined4 *)(puVar33 + -0x1d) = uStack_470;
      *(undefined4 *)(puVar33 + -0x19) = uStack_46c;
      *(undefined8 *)(puVar33 + -0x15) = uStack_468;
      *(undefined8 *)(puVar33 + -0xd) = uStack_460;
      *(undefined4 *)(puVar33 + -5) = 0;
      puVar33[-1] = uVar5;
      *puVar33 = uVar6;
      *(undefined4 *)(puVar33 + 0x11b) = 1;
      *(undefined4 *)(puVar33 + 0x123) = 0;
      puVar33[0x13b] = 1;
      *(float *)(puVar33 + 0x113) = fVar53 + *(float *)(lStack_650 + 0xa8);
      puVar33 = puVar33 + 0x1f0;
    } while (lVar35 < 0x20);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_748);
}



// WARNING: Removing unreachable block (ram,0x000180573954)
// WARNING: Removing unreachable block (ram,0x00018057397d)





