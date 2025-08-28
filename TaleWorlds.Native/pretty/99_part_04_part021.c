#include "TaleWorlds.Native.Split.h"

// 99_part_04_part021.c - 4 个函数

// 函数: void FUN_18026ad00(longlong param_1,undefined8 *param_2,longlong *param_3)
void FUN_18026ad00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  undefined1 auStack_608 [32];
  uint uStack_5e8;
  uint uStack_5e0;
  uint uStack_5d8;
  uint uStack_5d0;
  uint uStack_5c8;
  uint uStack_5c0;
  uint uStack_5b8;
  uint uStack_5b0;
  uint uStack_5a8;
  uint uStack_5a0;
  longlong **pplStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  longlong *aplStack_588 [2];
  undefined8 uStack_578;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined *puStack_560;
  longlong alStack_558 [22];
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined4 uStack_498;
  undefined1 auStack_490 [72];
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined *puStack_440;
  longlong alStack_438 [21];
  undefined *puStack_390;
  longlong alStack_388 [22];
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 auStack_2d0 [184];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [184];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [184];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uStack_578 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_608;
  lVar11 = 0;
  uVar4 = param_2[1];
  *(undefined8 *)(param_1 + 0x34) = *param_2;
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  aplStack_588[0] = param_3;
  FUN_180627be0(param_1 + 0x48,param_2 + 8);
  lVar16 = lVar11;
  if (((param_2[4] != 0) || (lVar10 = lVar11, param_2[5] != 0)) &&
     (lVar10 = FUN_180087070(_DAT_180c868a8,&DAT_180a012f0), lVar10 != 0)) {
    lVar16 = *(longlong *)(lVar10 + 0xb0);
  }
  FUN_1802b4cf0(param_1,lVar16);
  if ((param_2[6] == 0) && (param_2[7] == 0)) {
LAB_18026b04e:
    if (lVar11 == 0) goto LAB_18026af4d;
    aplStack_588[0] = *(longlong **)(lVar11 + 0xb0);
  }
  else {
    lVar11 = FUN_180087070(_DAT_180c868a8,&DAT_180a002e0);
    if (lVar11 != 0) {
      if ((lVar10 == 0) &&
         ((lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0xb0) + 0x1e0),
          *(int *)(lVar16 + 0x20) != 0x10 ||
          (iVar7 = strcmp(*(undefined8 *)(lVar16 + 0x18),&DAT_180a03870), iVar7 != 0)))) {
        lVar11 = 0;
      }
      goto LAB_18026b04e;
    }
    puStack_4a8 = &UNK_1809fcc58;
    puStack_4a0 = auStack_490;
    uStack_498 = 0;
    auStack_490[0] = 0;
    auVar5 = *(undefined1 (*) [16])(param_2 + 6);
    uStack_5a8 = auVar5._14_2_ & 0xff;
    uStack_5b0 = auVar5._12_4_ >> 8 & 0xff;
    uStack_5b8 = auVar5._12_4_ & 0xff;
    uStack_5c0 = auVar5._11_4_ & 0xff;
    uStack_5c8 = auVar5._10_4_ & 0xff;
    uStack_5d0 = auVar5._9_4_ & 0xff;
    uStack_5e8 = auVar5._4_4_ & 0xffff;
    uStack_5a0 = (uint)auVar5[0xf];
    uStack_5d8 = (uint)auVar5[8];
    uStack_5e0 = (uint)auVar5._6_2_;
    FUN_180626eb0(&uStack_98,0x28,&UNK_180a3d070);
    (**(code **)(puStack_4a8 + 0x18))(&puStack_4a8,&uStack_98,0x26);
    puVar24 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x50) != (undefined *)0x0) {
      puVar24 = *(undefined **)(param_1 + 0x50);
    }
    puVar23 = &DAT_18098bc73;
    if ((undefined *)aplStack_588[0][1] != (undefined *)0x0) {
      puVar23 = (undefined *)aplStack_588[0][1];
    }
    puVar15 = &DAT_18098bc73;
    if (puStack_4a0 != (undefined *)0x0) {
      puVar15 = puStack_4a0;
    }
    FUN_180627020(&UNK_180a160f0,puVar15,puVar23,puVar24);
    puStack_4a8 = &UNK_18098bcb0;
LAB_18026af4d:
    aplStack_588[0] = (longlong *)0x0;
  }
  pplStack_598 = aplStack_588;
  uVar14 = 0;
  if (aplStack_588[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_588[0] + 0x28))();
  }
  FUN_1802b4c70(param_1,aplStack_588);
  plVar1 = (longlong *)(param_1 + 0x1018);
  FUN_1800b8cb0(plVar1,(longlong)(param_2[0x10e] - param_2[0x10d]) >> 4);
  aplStack_588[0] = (longlong *)((ulonglong)aplStack_588[0] & 0xffffffff00000000);
  lVar16 = param_2[0x10d];
  uVar19 = uVar14;
  if (param_2[0x10e] - lVar16 >> 4 != 0) {
    do {
      plVar17 = (longlong *)(lVar16 + uVar14 * 0x10);
      if ((*plVar17 == 0) && (iVar7 = (int)uVar19, plVar17[1] == 0)) goto LAB_18026b24e;
      puVar25 = (undefined8 *)(_DAT_180c868a8 + 0x78);
      puVar13 = puVar25;
      puVar20 = *(undefined8 **)(_DAT_180c868a8 + 0x88);
      if (*(undefined8 **)(_DAT_180c868a8 + 0x88) == (undefined8 *)0x0) {
LAB_18026b0c8:
        puVar13 = puVar25;
      }
      else {
        do {
          iVar7 = memcmp(puVar20 + 4,&DAT_180a002e0);
          if (iVar7 < 0) {
            puVar21 = (undefined8 *)*puVar20;
          }
          else {
            puVar21 = (undefined8 *)puVar20[1];
            puVar13 = puVar20;
          }
          puVar20 = puVar21;
        } while (puVar21 != (undefined8 *)0x0);
        if ((puVar13 == puVar25) || (iVar7 = memcmp(&DAT_180a002e0,puVar13 + 4), iVar7 < 0))
        goto LAB_18026b0c8;
      }
      if (puVar13 == puVar25) {
LAB_18026b24b:
        iVar7 = (int)aplStack_588[0];
      }
      else {
        puVar20 = (undefined8 *)puVar13[8];
        puVar25 = puVar13 + 6;
        if (puVar20 == (undefined8 *)0x0) goto LAB_18026b24b;
        do {
          iVar7 = memcmp(puVar20 + 4,plVar17);
          if (iVar7 < 0) {
            puVar21 = (undefined8 *)*puVar20;
          }
          else {
            puVar21 = (undefined8 *)puVar20[1];
            puVar25 = puVar20;
          }
          puVar20 = puVar21;
        } while (puVar21 != (undefined8 *)0x0);
        if (puVar25 == puVar13 + 6) goto LAB_18026b24b;
        iVar8 = memcmp(plVar17,puVar25 + 4);
        iVar7 = (int)aplStack_588[0];
        if ((-1 < iVar8) && (lVar16 = puVar25[6], lVar16 != 0)) {
          plVar17 = *(longlong **)(param_1 + 0x1020);
          if (*(longlong **)(param_1 + 0x1028) <= plVar17) {
            plVar22 = (longlong *)*plVar1;
            lVar11 = (longlong)plVar17 - (longlong)plVar22 >> 3;
            if (lVar11 == 0) {
              lVar11 = 1;
LAB_18026b1a1:
              plVar12 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar11 * 8);
              plVar17 = *(longlong **)(param_1 + 0x1020);
              plVar22 = (longlong *)*plVar1;
              plVar26 = plVar12;
            }
            else {
              lVar11 = lVar11 * 2;
              if (lVar11 != 0) goto LAB_18026b1a1;
              plVar12 = (longlong *)0x0;
              plVar26 = plVar12;
            }
            for (; plVar22 != plVar17; plVar22 = plVar22 + 1) {
              *plVar12 = *plVar22;
              *plVar22 = 0;
              plVar12 = plVar12 + 1;
            }
            plVar17 = *(longlong **)(lVar16 + 0xb0);
            *plVar12 = (longlong)plVar17;
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x28))();
            }
            pplStack_598 = (longlong **)(plVar12 + 1);
            plVar17 = *(longlong **)(param_1 + 0x1020);
            plVar22 = (longlong *)*plVar1;
            if (plVar22 != plVar17) {
              do {
                if ((longlong *)*plVar22 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)*plVar22 + 0x38))();
                }
                plVar22 = plVar22 + 1;
              } while (plVar22 != plVar17);
              plVar22 = (longlong *)*plVar1;
            }
            if (plVar22 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar22);
            }
            *plVar1 = (longlong)plVar26;
            *(longlong ***)(param_1 + 0x1020) = pplStack_598;
            *(longlong **)(param_1 + 0x1028) = plVar26 + lVar11;
            goto LAB_18026b24b;
          }
          *(longlong **)(param_1 + 0x1020) = plVar17 + 1;
          plVar22 = *(longlong **)(lVar16 + 0xb0);
          *plVar17 = (longlong)plVar22;
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 0x28))();
          }
        }
      }
LAB_18026b24e:
      uVar18 = iVar7 + 1;
      aplStack_588[0] = (longlong *)CONCAT44(aplStack_588[0]._4_4_,uVar18);
      lVar16 = param_2[0x10d];
      uVar14 = (ulonglong)(int)uVar18;
      uVar19 = (ulonglong)uVar18;
    } while (uVar14 < (ulonglong)(param_2[0x10e] - lVar16 >> 4));
  }
  uVar18 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x68) = uVar18;
  if ((uVar18 >> 0x1d & 1) == 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xbc);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x74) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)((longlong)param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x2a);
  uStack_568 = *(undefined4 *)(param_2 + 0x2b);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x15c);
  FUN_18026daf0(&puStack_560,param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c8) = uStack_568;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_564;
  FUN_18026c2b0(param_1 + 0x1d0,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x32);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x194);
  FUN_18026daf0(&puStack_560,param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x280) = uStack_568;
  *(undefined4 *)(param_1 + 0x284) = uStack_564;
  FUN_18026c2b0(param_1 + 0x288,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x39);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x1cc);
  FUN_18026daf0(&puStack_560,param_2 + 0x3a);
  *(undefined4 *)(param_1 + 0x338) = uStack_568;
  *(undefined4 *)(param_1 + 0x33c) = uStack_564;
  FUN_18026c2b0(param_1 + 0x340,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x40);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x204);
  FUN_18026daf0(&puStack_560,param_2 + 0x41);
  *(undefined4 *)(param_1 + 0x3f0) = uStack_568;
  *(undefined4 *)(param_1 + 0x3f4) = uStack_564;
  FUN_18026c2b0(param_1 + 0x3f8,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x47);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x23c);
  FUN_18026daf0(&puStack_560,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4a8) = uStack_568;
  *(undefined4 *)(param_1 + 0x4ac) = uStack_564;
  FUN_18026c2b0(param_1 + 0x4b0,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_448 = *(undefined4 *)(param_2 + 0x4e);
  uStack_444 = *(undefined4 *)((longlong)param_2 + 0x274);
  FUN_18026daf0(&puStack_440,param_2 + 0x4f);
  FUN_18026daf0(&puStack_390,param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x560) = uStack_448;
  *(undefined4 *)(param_1 + 0x564) = uStack_444;
  FUN_18026c2b0(param_1 + 0x568,&puStack_440);
  FUN_18026c2b0(param_1 + 0x618,&puStack_390);
  pplStack_598 = (longlong **)&puStack_390;
  puStack_390 = &UNK_180a16270;
  FUN_1802708b0(alStack_388);
  pplStack_598 = (longlong **)alStack_388;
  if (alStack_388[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pplStack_598 = (longlong **)&puStack_440;
  puStack_440 = &UNK_180a16270;
  FUN_1802708b0(alStack_438);
  pplStack_598 = (longlong **)alStack_438;
  if (alStack_438[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x5b);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x2dc);
  FUN_18026daf0(&puStack_560,param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x6c8) = uStack_568;
  *(undefined4 *)(param_1 + 0x6cc) = uStack_564;
  FUN_18026c2b0(param_1 + 0x6d0,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x62);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x314);
  FUN_18026daf0(&puStack_560,param_2 + 99);
  *(undefined4 *)(param_1 + 0x780) = uStack_568;
  *(undefined4 *)(param_1 + 0x784) = uStack_564;
  FUN_18026c2b0(param_1 + 0x788,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x69);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 0x34c);
  FUN_18026daf0(&puStack_560,param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x838) = uStack_568;
  *(undefined4 *)(param_1 + 0x83c) = uStack_564;
  FUN_18026c2b0(param_1 + 0x840,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  puStack_560 = &UNK_180a16270;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (longlong **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_568 = *(undefined4 *)(param_2 + 0x70);
  uStack_564 = *(undefined4 *)((longlong)param_2 + 900);
  FUN_18026daf0(&puStack_560,param_2 + 0x71);
  *(undefined4 *)(param_1 + 0x8f0) = uStack_568;
  *(undefined4 *)(param_1 + 0x8f4) = uStack_564;
  FUN_18026c2b0(param_1 + 0x8f8,&puStack_560);
  pplStack_598 = (longlong **)&puStack_560;
  FUN_180270920(&puStack_560);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x1b);
  uStack_2d8 = *(undefined4 *)(param_2 + 0x77);
  uStack_2d4 = *(undefined4 *)((longlong)param_2 + 0x3bc);
  FUN_18026daf0(auStack_2d0,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x9a8) = uStack_2d8;
  *(undefined4 *)(param_1 + 0x9ac) = uStack_2d4;
  FUN_18026c2b0(param_1 + 0x9b0,auStack_2d0);
  pplStack_598 = (longlong **)auStack_2d0;
  FUN_180270920(auStack_2d0);
  uStack_218 = *(undefined4 *)(param_2 + 0x7e);
  uStack_214 = *(undefined4 *)((longlong)param_2 + 0x3f4);
  FUN_18026daf0(auStack_210,param_2 + 0x7f);
  *(undefined4 *)(param_1 + 0xa60) = uStack_218;
  *(undefined4 *)(param_1 + 0xa64) = uStack_214;
  FUN_18026c2b0(param_1 + 0xa68,auStack_210);
  pplStack_598 = (longlong **)auStack_210;
  FUN_180270920(auStack_210);
  uStack_158 = *(undefined4 *)(param_2 + 0x85);
  uStack_154 = *(undefined4 *)((longlong)param_2 + 0x42c);
  FUN_18026daf0(auStack_150,param_2 + 0x86);
  *(undefined4 *)(param_1 + 0xb18) = uStack_158;
  *(undefined4 *)(param_1 + 0xb1c) = uStack_154;
  FUN_18026c2b0(param_1 + 0xb20,auStack_150);
  pplStack_598 = (longlong **)auStack_150;
  FUN_180270920(auStack_150);
  *(undefined8 *)(param_1 + 0xbd0) = param_2[0x8c];
  *(undefined8 *)(param_1 + 0xbd8) = param_2[0x8e];
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_2 + 0x8f);
  *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)((longlong)param_2 + 0x47c);
  FUN_1802692c0(param_1 + 0xbf0,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x1070) = *(undefined4 *)(param_2 + 0x11f);
  uStack_448 = *(undefined4 *)(param_2 + 0x20);
  uStack_444 = *(undefined4 *)((longlong)param_2 + 0x104);
  FUN_18026daf0(&puStack_440,param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x110) = uStack_448;
  *(undefined4 *)(param_1 + 0x114) = uStack_444;
  FUN_18026c2b0(param_1 + 0x118,&puStack_440);
  pplStack_598 = (longlong **)&puStack_440;
  FUN_180270920(&puStack_440);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  *(float *)(param_1 + 0xd8) = 1.0 / *(float *)((longlong)param_2 + 0xdc);
  *(float *)(param_1 + 0xdc) = 1.0 / *(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0xe0) = 1.0 / *(float *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x84);
  iVar7 = *(int *)((longlong)param_2 + 0x47c);
  if (iVar7 == 0) {
    uVar4 = param_2[0xfd];
    *(undefined8 *)(param_1 + 0xf70) = param_2[0xfc];
    *(undefined8 *)(param_1 + 0xf78) = uVar4;
    *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfb;
    goto LAB_18026be4d;
  }
  if (iVar7 == 1) {
    uVar9 = *(undefined4 *)(param_2 + 0xfe);
    *(undefined4 *)(param_1 + 0xf70) = 0;
    *(undefined4 *)(param_1 + 0xf74) = 0;
    *(undefined4 *)(param_1 + 0xf78) = 0;
    *(undefined4 *)(param_1 + 0xf7c) = uVar9;
    uStack_58c = *(undefined4 *)((longlong)param_2 + 0x7f4);
    *(undefined4 *)(param_1 + 0xf80) = 0;
    *(undefined4 *)(param_1 + 0xf84) = 0;
    *(undefined4 *)(param_1 + 0xf88) = 0;
    *(undefined4 *)(param_1 + 0xf8c) = uStack_58c;
    if (*(float *)((longlong)param_2 + 0x7f4) == 0.0) {
LAB_18026be42:
      bVar6 = 0;
    }
    else {
      bVar6 = 4;
    }
  }
  else {
    if (iVar7 != 2) goto LAB_18026be4d;
    uVar9 = *(undefined4 *)(param_2 + 0xff);
    *(undefined4 *)(param_1 + 0xf70) = 0;
    *(undefined4 *)(param_1 + 0xf74) = 0;
    *(undefined4 *)(param_1 + 0xf78) = 0;
    *(undefined4 *)(param_1 + 0xf7c) = uVar9;
    uStack_58c = *(undefined4 *)((longlong)param_2 + 0x7fc);
    *(undefined4 *)(param_1 + 0xf80) = 0;
    *(undefined4 *)(param_1 + 0xf84) = 0;
    *(undefined4 *)(param_1 + 0xf88) = 0;
    *(undefined4 *)(param_1 + 0xf8c) = uStack_58c;
    if (*(float *)((longlong)param_2 + 0x7fc) == 0.0) goto LAB_18026be42;
    bVar6 = 4;
  }
  pplStack_598 = (longlong **)0x0;
  uStack_590 = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfb;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | bVar6;
LAB_18026be4d:
  uVar4 = param_2[0x8d];
  *(undefined8 *)(param_1 + 0xbe0) = uVar4;
  if (((float)((ulonglong)uVar4 >> 0x20) != 0.0) || (*(float *)(param_1 + 0xbe0) != 0.0)) {
    *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 2;
  }
  uVar4 = param_2[0x105];
  *(undefined8 *)(param_1 + 0xf90) = param_2[0x104];
  *(undefined8 *)(param_1 + 0xf98) = uVar4;
  uVar4 = param_2[0x107];
  *(undefined8 *)(param_1 + 4000) = param_2[0x106];
  *(undefined8 *)(param_1 + 0xfa8) = uVar4;
  uVar4 = param_2[0x109];
  *(undefined8 *)(param_1 + 0xfb0) = param_2[0x108];
  *(undefined8 *)(param_1 + 0xfb8) = uVar4;
  *(undefined4 *)(param_1 + 0xfc0) = *(undefined4 *)(param_2 + 0x10a);
  *(undefined8 *)(param_1 + 0xfc4) = *(undefined8 *)((longlong)param_2 + 0x854);
  *(undefined4 *)(param_1 + 0xfcc) = *(undefined4 *)((longlong)param_2 + 0x85c);
  *(undefined4 *)(param_1 + 0xfd0) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x1040) = param_2[0x111];
  *(undefined8 *)(param_1 + 0x1048) = param_2[0x112];
  *(undefined8 *)(param_1 + 0x1050) = param_2[0x113];
  *(undefined8 *)(param_1 + 0x1058) = param_2[0x114];
  *(undefined4 *)(param_1 + 0x1060) = *(undefined4 *)(param_2 + 0x115);
  *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)((longlong)param_2 + 0x8ac);
  *(undefined4 *)(param_1 + 0x1074) = *(undefined4 *)(param_2 + 0x116);
  puVar13 = (undefined8 *)FUN_180264090();
  uVar4 = *puVar13;
  *puVar13 = 0;
  pplStack_598 = *(longlong ***)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  if (pplStack_598 != (longlong **)0x0) {
    (**(code **)((longlong)*pplStack_598 + 0x38))();
  }
  if (aplStack_588[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_588[0] + 0x38))();
  }
  *(undefined8 *)(param_1 + 0xfd4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xfdc) = 0;
  *(undefined8 *)(param_1 + 0xfe4) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xfec) = 0;
  *(undefined8 *)(param_1 + 0xff4) = 0;
  *(undefined8 *)(param_1 + 0xffc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1004) = 0;
  *(undefined8 *)(param_1 + 0x100c) = 0x3f80000000000000;
  fVar2 = *(float *)(param_2 + 0x102);
  fVar3 = *(float *)((longlong)param_2 + 0x814);
  uStack_98 = 0x3f800000;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0x3f800000;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_70 = 0x3f800000;
  FUN_180085c10(&uStack_98,*(float *)(param_2 + 0x103) * 0.017453292);
  FUN_180085970(&uStack_98,fVar2 * 0.017453292);
  FUN_180085ac0(&uStack_98,fVar3 * 0.017453292);
  *(undefined8 *)(param_1 + 0xfd4) = uStack_98;
  *(undefined8 *)(param_1 + 0xfdc) = uStack_90;
  *(undefined4 *)(param_1 + 0xfe4) = uStack_88;
  *(undefined4 *)(param_1 + 0xfe8) = uStack_84;
  *(undefined4 *)(param_1 + 0xfec) = uStack_80;
  *(undefined4 *)(param_1 + 0xff0) = uStack_7c;
  *(undefined8 *)(param_1 + 0xff4) = uStack_78;
  *(undefined8 *)(param_1 + 0xffc) = uStack_70;
  uVar4 = param_2[0x101];
  *(undefined8 *)(param_1 + 0x1004) = param_2[0x100];
  *(undefined8 *)(param_1 + 0x100c) = uVar4;
  *(undefined4 *)(param_1 + 0xfe0) = 0;
  *(undefined4 *)(param_1 + 0xff0) = 0;
  *(undefined4 *)(param_1 + 0x1000) = 0;
  *(undefined4 *)(param_1 + 0x1010) = 0x3f800000;
  if (*(int *)(param_2 + 0x119) == 0) {
    *(undefined4 *)(param_1 + 0x1068) = 0xffffffff;
  }
  else {
    uVar9 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,param_2 + 0x117);
    *(undefined4 *)(param_1 + 0x1068) = uVar9;
  }
  if (*(int *)(param_2 + 0x11d) == 0) {
    *(undefined4 *)(param_1 + 0x106c) = 0xffffffff;
  }
  else {
    uVar9 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,param_2 + 0x11b);
    *(undefined4 *)(param_1 + 0x106c) = uVar9;
  }
  FUN_1802b4e70(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_608);
}






// 函数: void FUN_18026c170(longlong param_1)
void FUN_18026c170(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(undefined **)(param_1 + 8) = &UNK_180a16270;
  FUN_1802708b0((ulonglong *)(param_1 + 0x10));
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_18026c1c0(longlong param_1)
void FUN_18026c1c0(longlong param_1)

{
  *(undefined **)(param_1 + 0xb8) = &UNK_180a16270;
  FUN_1802708b0((longlong *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined **)(param_1 + 8) = &UNK_180a16270;
  FUN_1802708b0((longlong *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_18026c260(undefined8 *param_1)
void FUN_18026c260(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(param_1 + 1);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



longlong FUN_18026c2b0(longlong param_1,longlong param_2)

{
  FUN_180269810();
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




