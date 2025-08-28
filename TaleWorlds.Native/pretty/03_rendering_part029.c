#include "TaleWorlds.Native.Split.h"

// 03_rendering_part029.c - 4 个函数

// 函数: void FUN_1802814d0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5
void FUN_1802814d0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5
                  )

{
  uint64_t uVar1;
  int32_t *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  longlong *aplStackX_18 [2];
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int8_t auStack_78 [64];
  
  if ((param_5 >> 2 & 1) == 0) {
    if ((param_5 & 10) != 0) {
      uVar1 = *(uint64_t *)(param_3 + 0x60);
      *(uint64_t *)((longlong)param_1 + 0x214) = *(uint64_t *)(param_3 + 0x58);
      *(uint64_t *)((longlong)param_1 + 0x21c) = uVar1;
      uVar1 = *(uint64_t *)(param_3 + 0x70);
      *(uint64_t *)((longlong)param_1 + 0x224) = *(uint64_t *)(param_3 + 0x68);
      *(uint64_t *)((longlong)param_1 + 0x22c) = uVar1;
      uVar1 = *(uint64_t *)(param_3 + 0x80);
      *(uint64_t *)((longlong)param_1 + 0x234) = *(uint64_t *)(param_3 + 0x78);
      *(uint64_t *)((longlong)param_1 + 0x23c) = uVar1;
      *(int32_t *)((longlong)param_1 + 0x244) = *(int32_t *)(param_3 + 0x88);
      uVar8 = *(int32_t *)(param_3 + 0x18);
      uVar9 = *(int32_t *)(param_3 + 0x1c);
      uVar10 = *(int32_t *)(param_3 + 0x20);
      uVar11 = *(int32_t *)(param_3 + 0x24);
      uVar12 = *(int32_t *)(param_3 + 0x28);
      uVar13 = *(int32_t *)(param_3 + 0x2c);
      uVar14 = *(int32_t *)(param_3 + 0x30);
      uVar15 = *(int32_t *)(param_3 + 0x34);
      uVar16 = *(int32_t *)(param_3 + 0x38);
      uVar17 = *(int32_t *)(param_3 + 0x3c);
      uVar18 = *(int32_t *)(param_3 + 0x40);
      uVar19 = *(int32_t *)(param_3 + 0x44);
      uVar20 = *(int32_t *)(param_3 + 0x48);
      uVar21 = *(int32_t *)(param_3 + 0x4c);
      uVar22 = *(int32_t *)(param_3 + 0x50);
      uVar23 = *(int32_t *)(param_3 + 0x54);
      uStack_b8 = uVar8;
      uStack_b4 = uVar9;
      uStack_b0 = uVar10;
      uStack_ac = uVar11;
      uStack_a8 = uVar12;
      uStack_a4 = uVar13;
      uStack_a0 = uVar14;
      uStack_9c = uVar15;
      uStack_98 = uVar16;
      uStack_94 = uVar17;
      uStack_90 = uVar18;
      uStack_8c = uVar19;
      uStack_88 = uVar20;
      uStack_84 = uVar21;
      uStack_80 = uVar22;
      uStack_7c = uVar23;
      if (param_4 != 0) {
        puVar2 = (int32_t *)
                 FUN_1803310f0(param_5 & 10,auStack_78,&uStack_b8,param_4 + 0x18,
                               1.0 - (*(float *)(param_2 + 0x13c) - *(float *)(param_2 + 0x144)) /
                                     *(float *)(param_2 + 0x13c));
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        uVar12 = puVar2[4];
        uVar13 = puVar2[5];
        uVar14 = puVar2[6];
        uVar15 = puVar2[7];
        uVar16 = puVar2[8];
        uVar17 = puVar2[9];
        uVar18 = puVar2[10];
        uVar19 = puVar2[0xb];
        uVar20 = puVar2[0xc];
        uVar21 = puVar2[0xd];
        uVar22 = puVar2[0xe];
        uVar23 = puVar2[0xf];
      }
      *(int32_t *)(param_1 + 0x66) = uVar8;
      *(int32_t *)((longlong)param_1 + 0x334) = uVar9;
      *(int32_t *)(param_1 + 0x67) = uVar10;
      *(int32_t *)((longlong)param_1 + 0x33c) = uVar11;
      *(int32_t *)(param_1 + 0x68) = uVar12;
      *(int32_t *)((longlong)param_1 + 0x344) = uVar13;
      *(int32_t *)(param_1 + 0x69) = uVar14;
      *(int32_t *)((longlong)param_1 + 0x34c) = uVar15;
      *(int32_t *)(param_1 + 0x6a) = uVar16;
      *(int32_t *)((longlong)param_1 + 0x354) = uVar17;
      *(int32_t *)(param_1 + 0x6b) = uVar18;
      *(int32_t *)((longlong)param_1 + 0x35c) = uVar19;
      *(int32_t *)(param_1 + 0x6c) = uVar20;
      *(int32_t *)((longlong)param_1 + 0x364) = uVar21;
      *(int32_t *)(param_1 + 0x6d) = uVar22;
      *(int32_t *)((longlong)param_1 + 0x36c) = uVar23;
      *(int8_t *)(param_1 + 100) = 0;
      *(int32_t *)(param_1 + 0x42) = *(int32_t *)(param_3 + 0x14);
      uVar4 = 0;
      uVar6 = (uint)(param_1[8] - param_1[7] >> 4);
      if (uVar6 != 0) {
        lVar7 = 0;
        do {
          uVar5 = (ulonglong)uVar4;
          if ((ulonglong)((*(longlong *)(param_3 + 0x98) - *(longlong *)(param_3 + 0x90)) / 0x1a0)
              <= uVar5) break;
          if ((param_4 == 0) ||
             ((ulonglong)((*(longlong *)(param_4 + 0x98) - *(longlong *)(param_4 + 0x90)) / 0x1a0)
              <= uVar5)) {
            lVar3 = 0;
          }
          else {
            lVar3 = uVar5 * 0x1a0 + *(longlong *)(param_4 + 0x90);
          }
          FUN_1803269f0(*(longlong *)(param_3 + 0x90) + uVar5 * 0x1a0,param_2,
                        *(uint64_t *)(lVar7 + param_1[7]),param_5,lVar3);
          uVar4 = uVar4 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar4 < uVar6);
      }
      (**(code **)(*param_1 + 0xf8))(param_1,param_3 + 0x1b8);
    }
    if (((param_5 >> 4 & 1) != 0) && (0 < *(int *)(param_3 + 0x170))) {
      aplStackX_18[0] = (longlong *)0x0;
      FUN_1803276a0(param_2,aplStackX_18,param_3 + 0x160);
      if (aplStackX_18[0] != (longlong *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180281770(uint64_t *param_1,uint64_t param_2)
void FUN_180281770(uint64_t *param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  void *puVar18;
  bool bVar19;
  int8_t auStack_538 [32];
  uint uStack_518;
  void **ppuStack_510;
  uint64_t uStack_508;
  void *puStack_500;
  void *puStack_4f8;
  uint uStack_4f0;
  int32_t uStack_4e8;
  longlong lStack_4e0;
  uint64_t uStack_4d8;
  void *puStack_4c8;
  void *puStack_4c0;
  int32_t uStack_4b8;
  uint8_t auStack_4b0 [136];
  void *puStack_428;
  void *puStack_420;
  int32_t uStack_418;
  int8_t auStack_410 [136];
  void *apuStack_388 [34];
  void *puStack_278;
  longlong lStack_270;
  int32_t uStack_260;
  longlong alStack_258 [4];
  longlong alStack_238 [4];
  longlong alStack_218 [6];
  void *apuStack_1e8 [34];
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c0;
  longlong alStack_b8 [4];
  longlong alStack_98 [4];
  longlong alStack_78 [6];
  ulonglong uStack_48;
  
  uStack_4d8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_538;
  lVar9 = 0;
  uStack_518 = 0;
  uStack_508 = param_2;
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x1c8,8,3);
  lVar7 = FUN_180339110(uVar6);
  lStack_4e0 = lVar7;
  FUN_180627ae0(&puStack_500,param_1 + 0x3e);
  while ((0 < (int)uStack_4f0 && (lVar8 = strstr(puStack_4f8,&DAT_180a0ff10), lVar8 != 0))) {
    iVar15 = 6;
    iVar5 = (int)lVar8 - (int)puStack_4f8;
    if (uStack_4f0 < iVar5 + 6U) {
      iVar15 = uStack_4f0 - iVar5;
    }
    uVar14 = iVar5 + iVar15;
    if (uVar14 < uStack_4f0) {
      lVar8 = (longlong)(int)uVar14;
      do {
        puStack_4f8[lVar8 - iVar15] = puStack_4f8[lVar8];
        uVar14 = uVar14 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar14 < uStack_4f0);
    }
    uStack_4f0 = uStack_4f0 - iVar15;
    puStack_4f8[uStack_4f0] = 0;
  }
  *(int32_t *)(lVar7 + 0x10) = 0;
  puVar11 = &DAT_18098bc73;
  if (puStack_4f8 != (void *)0x0) {
    puVar11 = puStack_4f8;
  }
  (**(code **)(*(longlong *)(lVar7 + 0xb0) + 0x10))((longlong *)(lVar7 + 0xb0),puVar11);
  uVar6 = *(uint64_t *)((longlong)param_1 + 0x21c);
  *(uint64_t *)(lVar7 + 0x58) = *(uint64_t *)((longlong)param_1 + 0x214);
  *(uint64_t *)(lVar7 + 0x60) = uVar6;
  uVar6 = *(uint64_t *)((longlong)param_1 + 0x22c);
  *(uint64_t *)(lVar7 + 0x68) = *(uint64_t *)((longlong)param_1 + 0x224);
  *(uint64_t *)(lVar7 + 0x70) = uVar6;
  uVar6 = *(uint64_t *)((longlong)param_1 + 0x23c);
  *(uint64_t *)(lVar7 + 0x78) = *(uint64_t *)((longlong)param_1 + 0x234);
  *(uint64_t *)(lVar7 + 0x80) = uVar6;
  *(int32_t *)(lVar7 + 0x88) = *(int32_t *)((longlong)param_1 + 0x244);
  uVar6 = param_1[0x67];
  *(uint64_t *)(lVar7 + 0x18) = param_1[0x66];
  *(uint64_t *)(lVar7 + 0x20) = uVar6;
  uVar6 = param_1[0x69];
  *(uint64_t *)(lVar7 + 0x28) = param_1[0x68];
  *(uint64_t *)(lVar7 + 0x30) = uVar6;
  uVar1 = *(int32_t *)((longlong)param_1 + 0x354);
  uVar2 = *(int32_t *)(param_1 + 0x6b);
  uVar3 = *(int32_t *)((longlong)param_1 + 0x35c);
  *(int32_t *)(lVar7 + 0x38) = *(int32_t *)(param_1 + 0x6a);
  *(int32_t *)(lVar7 + 0x3c) = uVar1;
  *(int32_t *)(lVar7 + 0x40) = uVar2;
  *(int32_t *)(lVar7 + 0x44) = uVar3;
  uVar1 = *(int32_t *)((longlong)param_1 + 0x364);
  uVar2 = *(int32_t *)(param_1 + 0x6d);
  uVar3 = *(int32_t *)((longlong)param_1 + 0x36c);
  *(int32_t *)(lVar7 + 0x48) = *(int32_t *)(param_1 + 0x6c);
  *(int32_t *)(lVar7 + 0x4c) = uVar1;
  *(int32_t *)(lVar7 + 0x50) = uVar2;
  *(int32_t *)(lVar7 + 0x54) = uVar3;
  *(int32_t *)(lVar7 + 0x14) = *(int32_t *)(param_1 + 0x42);
  if (param_1[0x77] == 0) {
    puStack_428 = &UNK_1809fcc28;
    puStack_420 = auStack_410;
    auStack_410[0] = 0;
    uStack_418 = 0;
    strcpy_s(auStack_410,0x80);
    uVar14 = 1;
    uStack_518 = 1;
    puVar11 = puStack_420;
  }
  else {
    puStack_4c8 = &UNK_1809fcc28;
    puStack_4c0 = auStack_4b0;
    auStack_4b0[0] = 0;
    uStack_4b8 = *(int32_t *)(param_1[0x77] + 0x20);
    strcpy_s(auStack_4b0,0x80);
    uVar14 = 2;
    uStack_518 = 2;
    puVar11 = puStack_4c0;
  }
  puVar18 = &DAT_18098bc73;
  if (puVar11 != (void *)0x0) {
    puVar18 = puVar11;
  }
  (**(code **)(*(longlong *)(lVar7 + 0x160) + 0x10))((longlong *)(lVar7 + 0x160),puVar18);
  if ((uVar14 & 2) != 0) {
    uStack_518 = uVar14 & 0xfffffffd;
    puStack_4c8 = &UNK_18098bcb0;
    uVar14 = uStack_518;
  }
  if ((uVar14 & 1) != 0) {
    uStack_518 = uVar14 & 0xfffffffe;
    puStack_428 = &UNK_18098bcb0;
  }
  *(int32_t *)(lVar7 + 0x8c) = 0;
  if ((void *)*param_1 == &UNK_180a169b8) {
    if ((param_1[8] - (longlong)param_1[7] & 0xfffffffffffffff0U) != 0) {
      lVar9 = *(longlong *)param_1[7];
    }
  }
  else {
    lVar9 = (**(code **)((void *)*param_1 + 0x178))(param_1);
  }
  lVar8 = *(longlong *)(lVar9 + 0x1b0);
  if (*(longlong *)(lVar9 + 0x1b0) == 0) {
    lVar8 = lVar9;
  }
  *(int32_t *)(lVar7 + 0x1b8) = *(int32_t *)(lVar8 + 0x2d8);
  bVar19 = 0 < (int)uStack_4f0;
  if (0 < (int)uStack_4f0) {
    lVar9 = FUN_1800b6de0(_DAT_180c86930,&puStack_500);
    if ((bVar19) && (lVar9 != 0)) {
      bVar19 = true;
      iVar5 = (int)(*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38) >> 4);
      if (0 < iVar5) {
        lVar8 = 0;
        plVar12 = (longlong *)param_1[7];
        lVar9 = *(longlong *)(lVar9 + 0x38) - (longlong)plVar12;
        do {
          lVar16 = *(longlong *)(lVar9 + (longlong)plVar12);
          lVar10 = *(longlong *)(lVar16 + 0x1b0);
          if (lVar10 == 0) {
            lVar10 = lVar16;
          }
          if (((*(longlong *)(*plVar12 + 0x1b0) != 0) || (lVar10 != 0)) ||
             (*(float *)(*plVar12 + 0x2dc) != 0.0)) goto LAB_180281d06;
          lVar8 = lVar8 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar8 < iVar5);
      }
      param_2 = uStack_508;
      if (0 < iVar5 + -1) {
        lVar9 = 0;
        lVar8 = 0;
        do {
          FUN_180274db0(apuStack_1e8);
          FUN_180274db0(apuStack_388);
          FUN_1803263e0(apuStack_1e8,uStack_508,*(uint64_t *)(lVar8 + param_1[7]));
          FUN_1803263e0(apuStack_388,uStack_508,*(uint64_t *)(lVar8 + 0x10 + param_1[7]));
          cVar4 = FUN_180327250(apuStack_1e8,apuStack_388);
          if (cVar4 != '\0') {
            bVar19 = false;
            FUN_180281e80(apuStack_388);
            FUN_180281e80(apuStack_1e8);
            param_2 = uStack_508;
            break;
          }
          ppuStack_510 = (void **)alStack_218;
          if (alStack_218[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (void **)alStack_238;
          if (alStack_238[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (void **)alStack_258;
          if (alStack_258[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = &puStack_278;
          puStack_278 = &UNK_180a3c3e0;
          if (lStack_270 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_270 = 0;
          uStack_260 = 0;
          puStack_278 = &UNK_18098bcb0;
          apuStack_388[0] = &UNK_18098bcb0;
          ppuStack_510 = (void **)alStack_78;
          if (alStack_78[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (void **)alStack_98;
          if (alStack_98[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (void **)alStack_b8;
          if (alStack_b8[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = &puStack_d8;
          puStack_d8 = &UNK_180a3c3e0;
          if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_d0 = 0;
          uStack_c0 = 0;
          puStack_d8 = &UNK_18098bcb0;
          ppuStack_510 = apuStack_1e8;
          apuStack_1e8[0] = &UNK_18098bcb0;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
          param_2 = uStack_508;
        } while (lVar9 < iVar5 + -1);
      }
    }
    else {
LAB_180281d06:
      bVar19 = false;
    }
  }
  plVar12 = (longlong *)(lVar7 + 0x90);
  FUN_180284720(plVar12);
  *(bool *)(lVar7 + 0x1c4) = bVar19;
  if (bVar19 == false) {
    uVar13 = (longlong)(param_1[8] - param_1[7]) >> 4;
    uVar17 = uVar13 & 0xffffffff;
    FUN_180284580(plVar12,uVar13 & 0xffffffff);
    uVar6 = uStack_508;
    lVar7 = lStack_4e0;
    if ((int)uVar13 != 0) {
      lVar8 = 0;
      lVar9 = 0;
      lVar16 = 0;
      do {
        FUN_1803263e0(*plVar12 + lVar16,uVar6,*(uint64_t *)(lVar9 + param_1[7]));
        *(int32_t *)(lVar8 + 0x58 + *plVar12) = *(int32_t *)(lVar9 + 8 + param_1[7]);
        lVar16 = lVar16 + 0x1a0;
        lVar9 = lVar9 + 0x10;
        lVar8 = lVar8 + 0x1a0;
        uVar17 = uVar17 - 1;
        lVar7 = lStack_4e0;
      } while (uVar17 != 0);
    }
  }
  else if ((longlong)(param_1[8] - param_1[7]) >> 4 != 0) {
    FUN_180284580(plVar12,1);
    FUN_1803263e0(*plVar12,param_2,*(uint64_t *)param_1[7]);
  }
  *(int32_t *)(lVar7 + 0x1bc) = *(int32_t *)(param_1 + 99);
  *(int32_t *)(lVar7 + 0x1c0) = *(int32_t *)(param_1 + 0x62);
  puStack_500 = &UNK_180a3c3e0;
  if (puStack_4f8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_4f8 = (void *)0x0;
  uStack_4e8 = 0;
  puStack_500 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_538);
}





// 函数: void FUN_180281e80(uint64_t *param_1)
void FUN_180281e80(uint64_t *param_1)

{
  if (param_1[0x2e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x26] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x22] = &UNK_180a3c3e0;
  if (param_1[0x23] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x22] = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  return;
}



bool FUN_180281f40(uint64_t param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  lVar9 = param_3;
  cVar3 = func_0x000180274d30(param_2 + 0x58,param_3 + 0x58);
  if (cVar3 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  fVar13 = 0.0001;
  cVar4 = func_0x000180285f10(param_2 + 0x18,lVar9 + 0x18);
  if (cVar4 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  bVar11 = *(int *)(param_2 + 0x14) != *(int *)(lVar9 + 0x14);
  if (bVar11) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  bVar11 = bVar11 || (cVar4 == '\0' || cVar3 == '\0');
  iVar8 = *(int *)(param_2 + 0x170);
  iVar7 = *(int *)(lVar9 + 0x170);
  if (iVar8 == iVar7) {
    if (iVar8 != 0) {
      pbVar5 = *(byte **)(param_2 + 0x168);
      lVar9 = *(longlong *)(lVar9 + 0x168) - (longlong)pbVar5;
      do {
        pbVar1 = pbVar5 + lVar9;
        iVar7 = (uint)*pbVar5 - (uint)*pbVar1;
        if (iVar7 != 0) break;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar1 != 0);
    }
LAB_180281fed:
    if (iVar7 == 0) goto LAB_180281ff6;
  }
  else if (iVar8 == 0) goto LAB_180281fed;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
  bVar11 = true;
LAB_180281ff6:
  fVar12 = *(float *)(param_2 + 0x1b8) - *(float *)(param_3 + 0x1b8);
  if ((fVar12 <= -0.0001) || (fVar13 <= fVar12)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    bVar11 = true;
  }
  lVar9 = *(longlong *)(param_2 + 0x90);
  lVar6 = *(longlong *)(param_2 + 0x98) - lVar9;
  lVar2 = lVar6 >> 0x3f;
  lVar6 = lVar6 / 0x1a0 + lVar2;
  if ((lVar6 - lVar2 == (*(longlong *)(param_3 + 0x98) - *(longlong *)(param_3 + 0x90)) / 0x1a0) &&
     (iVar8 = 0, lVar6 != lVar2)) {
    uVar10 = 0;
    do {
      cVar3 = FUN_180327250(uVar10 * 0x1a0 + lVar9,*(longlong *)(param_3 + 0x90) + uVar10 * 0x1a0);
      if (cVar3 != '\0') {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
        bVar11 = true;
      }
      lVar9 = *(longlong *)(param_2 + 0x90);
      iVar8 = iVar8 + 1;
      uVar10 = (ulonglong)iVar8;
    } while (uVar10 < (ulonglong)((*(longlong *)(param_2 + 0x98) - lVar9) / 0x1a0));
  }
  return bVar11;
}



int8_t FUN_180282078(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int iVar3;
  longlong unaff_RSI;
  int8_t unaff_DIL;
  ulonglong uVar4;
  longlong unaff_R14;
  
  iVar3 = 0;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      cVar1 = FUN_180327250(uVar4 * 0x1a0 + param_4,*(longlong *)(unaff_RSI + 0x90) + uVar4 * 0x1a0)
      ;
      if (cVar1 != '\0') {
        *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 8;
        unaff_DIL = 1;
      }
      param_4 = *(longlong *)(unaff_RBX + 0x90);
      iVar3 = iVar3 + 1;
      uVar4 = (ulonglong)iVar3;
      lVar2 = SUB168(SEXT816(unaff_R14) * SEXT816(*(longlong *)(unaff_RBX + 0x98) - param_4),8);
    } while (uVar4 < (ulonglong)((lVar2 >> 7) - (lVar2 >> 0x3f)));
  }
  return unaff_DIL;
}





// 函数: void FUN_1802820ec(void)
void FUN_1802820ec(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802826e6)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



